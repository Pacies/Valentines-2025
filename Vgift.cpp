#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <ctime>
#include <cctype>

using namespace std;

void clearScreen() {
    system("cls");  // Windows command; use "clear" for Linux/Mac                                                   // Clr Scrn
    this_thread::sleep_for(chrono::seconds(3));  // Added delay after function call
}

bool startCode(){
    system("cls");
    char start;

    cout << "Hello there!, do you want to start the program? (y/n): "; cin >> start;
    if (tolower(start) == 'n'){
        system("cls");
        cout << "Okay po :<, Bye bye!";
        exit(0);
    }

    char letter;

    cout << "I have a letter for you.." << endl;
    cout << "Open the letter? (y/n): "; cin >> letter;
    if (tolower(letter) == 'n'){
        system("cls");
        cout << "Okay po :<, Bye bye!";
        return false;
    }
    return true;
}

void decoyMsg() {                                                                                                   //Decoy Msg
    cout << "Hai bebii, ano kamusta ka??" << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout << "ahhh okay lng.., sigii sigii," << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout << "ano kasi, malapit na valentines.." << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout << "gusto ko sana mag tanong.." << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout << "Do you want to be my Va" << endl;
    this_thread::sleep_for(chrono::seconds(3));  // Added delay after function call
}

void errorMsg() {                                                                                                   // Error msg
    cout << "\n[ERROR] System Failure: Memory Corruption Detected..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "[ERROR] Data Integrity Check Failed... Attempting Recovery..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "[WARNING] Critical Process Interrupt... Message Compromised..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "[ERROR] Unexpected Behavior Detected... Restoring Last Known Good State..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "...System Override Initiated..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "...Decrypting Hidden Message..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "SYSTEM ALERT: Message file appears to be corrupted." << endl;
    this_thread::sleep_for(chrono::seconds(3)); 
}

void userFix() {                                                                                                    //Ask user too fix
    char repair;

    cout << "\nWould you like to attempt a repair? (Y/N): ";
    cin >> repair;

    if (tolower(repair) == 'n') {
        char fix;
        cout << "Edi wag.." << endl;
        cout << "Sure ka? Baka sirain ko gamit mo, sige ka (Y/N): ";
        cin >> fix;

        if (tolower(fix) == 'y') {
            cout << "OKAY! EDI WAG!" << endl;
            return;
        }
    }

    cout << "Okay, attempting to repair.." << endl;
    this_thread::sleep_for(chrono::seconds(3));  // Added delay after function call

    clearScreen();

    cout << "[ERROR] System Integrity Compromised...\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "[FIX] Checking System Files...\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "[FIX] Verifying Dependencies...\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "[FIX] Recompiling Core Modules...\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "[FIX] Restoring Missing Components...\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "[FIX] Running Diagnostics...\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "[SUCCESS] System Repair Complete.\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "[INFO] Resuming Program Execution...\n";
    this_thread::sleep_for(chrono::seconds(3));  // Added delay after function call
    cout << endl;
}

void heartBeatAnimation() {   
    string heart[] = {
        "    ______     ______    ",
        "   |******|   |******|   ",
        "   |*******| |*******|   ",
        "    |***************|   ",
        "     |*************|   ",
        "           ",                                 // =====================}
        "       |*********|     ",
        "        |*******|       ",
        "         |*****|        ",
        "          |***|         ",
        "           |*|          "
    };

    string arrowFrames[] = {
        "  =====================}        ", "   =====================}      ", "    =====================}    ", "     =====================}  ", "      =====================}","       =====================}","        =====================}","          =====================}","           =====================}"
    };

    int arrowPos = 0;
    int maxArrowPos = 8;

    for (int step = 0; step <= maxArrowPos; step++) {
        clearScreen();
        for (int i = 0; i < 11; i++) {
            if (i == 5) {
                cout << arrowFrames[arrowPos] << heart[i] << endl;
            } else {
                cout << "          " << heart[i] << endl;
            }
        }
        
        this_thread::sleep_for(chrono::milliseconds(200));  // Adjust speed
        arrowPos++;
    }

    // Keep the heart displayed for 5 seconds before moving on
    this_thread::sleep_for(chrono::seconds(5));
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

void dQuestion() {
    char finalQ;
    cout << "\nRegine, my love, do you want to be my valentine? (Y/N): ";
    cin >> finalQ;
    cout << "\nKahit ano sabihin mo. It's a YES. Hehe. <3\n";
}

// Function to create a glitch effect before displaying the correct text
void glitchEffect(string text, int glitchCount = 5, int delay = 100) {
    for (int i = 0; i < glitchCount; i++) {
        string scrambled = text;
        
        // Randomly replace some characters
        for (int j = 0; j < scrambled.length(); j++) {
            if (rand() % 4 == 0) {  // 25% chance to change a character
                scrambled[j] = char(33 + rand() % 94);  // Replace with a random printable ASCII character
            }
        }

        cout << scrambled << "\r" << flush;  // Overwrite text in place
        this_thread::sleep_for(chrono::milliseconds(delay));  // Short delay for effect
    }
}

// Function to simulate slow typing
void slowPrint(string text, int typingSpeed = 50) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(typingSpeed));  // Delay for typing effect
    }
    cout << endl;
}

// Function to display the glitching dialogue with slow typing
void displayGlitchingText() {
    glitchEffect("H@@ Be#iI, An0 kAmsuT@ k4??");
    slowPrint("H@@ Be#iI, An0 kAmsuT@ k4??");

    glitchEffect("AhHh ok@Y LnG.., s1giI sIgI,");
    slowPrint("AhHh ok@Y LnG.., s1giI sIgI,");

    glitchEffect("A...nO k@si, M@L@pit na VaL3nTin3s..");
    slowPrint("A...nO k@si, M@L@pit na VaL3nTin3s..");

    glitchEffect("Gu$to S#n@ m@g T@n0Ng..");
    slowPrint("Gu$to S#n@ m@g T@n0Ng..");

    glitchEffect("I# yOu wOulD w@nt t0 bE mY V@l3nt1n35*");
    slowPrint("I# yOu wOulD w@nt t0 bE mY V@l3nt1n35*");
}

int main() {
    
    if(!startCode()){                                                           //Start of the program
        return 0;       
    }                                                              

    decoyMsg();                                                                 //Decoy msg

    errorMsg();                                                                 //Error msg

    srand(time(0));                                                             //Display Glitch
    displayGlitchingText();

    userFix();                                                                  //User fixes
    
    startCode();                                                                //Restart Code

    displayText();                                                              //DISPLAY LSM 
    this_thread::sleep_for(chrono::seconds(5));
    heartBeatAnimation();
    dQuestion();                                                                //Ask THE Question

    //DISPLAY ENDING MESSAGE

    return 0;
}
