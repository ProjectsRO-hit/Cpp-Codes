#include <iostream>
#include <string>
#include <curl/curl.h>

// Email configuration
const std::string senderEmail = "visa.internationaltravel@gmail.com";
const std::string senderPassword = "India@24";

// Function to send email
void sendEmail(const std::string& recipientEmail, const std::string& subject, const std::string& body) {
    CURL *curl;
    CURLcode res = CURLE_OK;

    curl = curl_easy_init();
    if(curl) {
        // Compose email data
        std::string emailData = "From: " + senderEmail + "\r\n";
        emailData += "To: " + recipientEmail + "\r\n";
        emailData += "Subject: " + subject + "\r\n";
        emailData += "\r\n"; // Separate headers from body
        emailData += body;

        // Set email server details
        curl_easy_setopt(curl, CURLOPT_URL, "smtps://smtp.gmail.com:465");
        curl_easy_setopt(curl, CURLOPT_USE_SSL, CURLUSESSL_ALL);
        curl_easy_setopt(curl, CURLOPT_USERNAME, senderEmail.c_str());
        curl_easy_setopt(curl, CURLOPT_PASSWORD, senderPassword.c_str());
        curl_easy_setopt(curl, CURLOPT_MAIL_FROM, senderEmail.c_str());

        // Set recipient email
        struct curl_slist* recipients = NULL;
        recipients = curl_slist_append(recipients, recipientEmail.c_str());
        curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);

        // Set email data
        curl_easy_setopt(curl, CURLOPT_READDATA, &emailData);
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);

        // Send the email
        res = curl_easy_perform(curl);

        // Clean up
        curl_slist_free_all(recipients);
        curl_easy_cleanup(curl);
    }

    if(res != CURLE_OK) {
        std::cerr << "Failed to send email: " << curl_easy_strerror(res) << std::endl;
    }
}

// Function to generate daily report
std::string generateDailyReport() {
    // Implement your logic to generate daily report
    return "Daily Report Content";
}

int main() {
    // Generate daily report
    std::string reportSubject = "Daily Report";
    std::string reportBody = generateDailyReport();

    // Set recipient email address
    std::string recipientEmail = "rohitvsingh2000@gmail.com";

    // Send email
    sendEmail(recipientEmail, reportSubject, reportBody);

    return 0;
}
