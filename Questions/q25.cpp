// //   - Use a user-defined literal to represent a time duration in seconds.


// #include<iostream>

// using namespace std;
// int main(){

//     cout << "***  Time to Second Converter **" << endl;
//     int hours, minutes, seconds;
//     cout << "Please input Hours: ";
//     cin >> hours;
//     cout << "Please input Minutes: ";
//     cin >> minutes;
//     cout << "Please input Seconds: ";
//     cin >> seconds;

//     int hour_conv = (hours * 60) * 60;
//     int min_conv = (minutes * 60);
//     int total = hour_conv + min_conv + seconds;
//     cout << "Hour: " << hours << " Minutes: " << minutes << " seconds: " << seconds << endl;
//     cout << "Converting Time into seconds : " << total << endl;
//     return 0;
// }
#include<iostream>

using namespace std;

// User-defined literal for seconds
constexpr int operator"" _s(unsigned long long seconds) {
    return static_cast<int>(seconds);
}

int main() {
    cout << "*** Time to Second Converter ***" << endl;

    int hours, minutes, seconds;

    cout << "Please input Hours: ";
    cin >> hours;

    cout << "Please input Minutes: ";
    cin >> minutes;

    cout << "Please input Seconds: ";
    cin >> seconds;

    int totalSeconds = (hours * 60 * 60) + (minutes * 60) + seconds;
    int totalSeconds_s = totalSeconds; // Using the user-defined literal for readability

    cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
    cout << "Converted to seconds using user-defined literal: " << totalSeconds_s << " seconds." << endl;

    return 0;
}
