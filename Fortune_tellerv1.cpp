#include <iostream>
#include <ctime>
#include <cstdlib>

void predict_fortune(int x, const char *name) {
     const char *predictions[] = {
        "Congratulations! Your future holds endless queues at the DMV and never-ending elevator music. Enjoy the ride!",
        "Prepare for a series of unfortunate events that will make Lemony Snicket's stories look like fairy tales. Pack extra snacks.",
        "In your near future, you will discover the true meaning of 'Murphy's Law' as it follows you like a persistent shadow. Embrace the chaos!",
        "Your fortune: Expect an inbox flooded with spam emails promising eternal happiness, miracle weight loss, and Nigerian princes in need of your urgent assistance.",
        "The stars predict a grand adventure awaits you! Strap in for a rollercoaster ride of unexpected detours, missed connections, and misplaced keys.",
        "Brace yourself for a whirlwind romance with your couch and Netflix. Love is in the air, along with the scent of popcorn.",
        "Your future holds countless 'Do Not Disturb' signs, an endless supply of coffee, and an inexplicable craving for tacos at 2 AM. Embrace the nocturnal life!",
        "Get ready to unlock the achievement of 'Professional Procrastinator.' Your to-do list will grow longer than a CVS receipt, but hey, at least you'll excel at something!",
        "Prepare for a series of unfortunate wardrobe malfunctions, including but not limited to: spinach in your teeth, mismatched socks, and a surprise encounter with your ex when you least expect it.",
        "In the grand game of life, you're about to draw the 'Chance' card that reads: 'Go directly to chaos, do not pass Go, do not collect $200.' Buckle up, it's gonna be a bumpy ride!"
    };


    std::cout << "Hello " << name << ", here is your prediction: " << std::endl;
    std::cout << predictions[x - 1] << std::endl;
}

int main() {
    const int max_length = 100;
    char name[max_length];

    std::srand(std::time(0));

    std::cout << "Welcome friend! Please type your name: ";
    std::cin.getline(name, max_length);

    bool end = false;
    while (!end) {
        std::cout << "Press 1 to predict your fortune, or 0 to quit: ";
        int num;
        std::cin >> num;

        if (num == 1) {
            int random_num = std::rand() % 10 + 1;
            predict_fortune(random_num, name);
        } else if (num == 0) {
            end = true;
        } else {
            std::cout << "Invalid input. Please try again." << std::endl;
        }
    }

    return 0;
}
