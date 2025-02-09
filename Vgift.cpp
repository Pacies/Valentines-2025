#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void clearScreen() {
    system("cls");  // Windows
}

void heartBeatAnimation() {                     //Incomplete: FIX HEART ANIMATION
    string heart[] = {
        "    ______     ______    ",
        "   |******|   |******|   ",
        "   |*******| |*******|   ",
        "    |***************|   ",
        "     |*************|   ",
        "   =====================}  ",
        "       |**********|     ",
        "        |********|       ",
        "         |******|        ",
        "          |****|         ",
        "           |**|          "
    };

    string arrowFrames[] = {
        "->       ", "  ->     ", "    ->   ", "      -> ", "        ->"
    };

    int arrowPos = 0;
    int maxArrowPos = 4;

    for (int step = 0; step <= maxArrowPos; step++) {
        clearScreen();
        for (int i = 0; i < 11; i++) {
            if (i == 5) {
                cout << arrowFrames[arrowPos] << heart[i] << endl;
            } else {
                cout << "          " << heart[i] << endl;
            }
        }
        
        this_thread::sleep_for(chrono::milliseconds(300));  // Adjust speed
        arrowPos++;
    }
}

void displayText() {
    string lines[] = {
        "HAPPY VALENTINES MY REGINE!!! <3",
        "Let me first say, I Love You Regine, with all my heart.",
        "Your effortless beauty knows no bounds.",
        "I would swim across oceans to feel the warmth of your embrace.",
        "Your eyes have captivated me time and time again.",
        "I would walk to the ends of the earth just to see you smile—the smile that brightens my day,",
        "the smile that pulls me out of this endless void of pain.",
        "With every beat of my heart, with every breath I take, I am yours always and forever."
    };

    for (const string &line : lines) {
        cout << line << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));  // Pause before the next line
    }
}

int main() {
    // Display text first
    displayText();

    // Wait 5 seconds before starting animation
    this_thread::sleep_for(chrono::seconds(5));

    // Start heart animation
    heartBeatAnimation();

    return 0;
}
