#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

void clearScreen() {
    system("cls");  // Windows command; use "clear" for Linux/Mac                                                   // Clr Scrn
    this_thread::sleep_for(chrono::seconds(3));  // Added delay after function call
}

void startCode(){
    char start;

    cout << "Hello there!, do you want to start the program? (y/n): "; cin >> start;
    if (start == tolower('n')){
        system("cls");
        cout << "Okay po :<, Bye bye!";
        exit;
    }

    char letter;

    cout << "I have a letter for you.." << endl;
    cout << "Open the letter? (y/n): "; cin >> letter;
    if (letter == tolower('n')){
        system("cls");
        cout << "Okay po :<, Bye bye!";
        exit;
    }
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
        
        this_thread::sleep_for(chrono::milliseconds(300));  // Adjust speed
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

int main() {
    
    startCode();

    decoyMsg();

    errorMsg();

    userFix();
    
    startCode();

    displayText();//DISPLAY LSM 
    this_thread::sleep_for(chrono::seconds(5));
    heartBeatAnimation();
    dQuestion();

    //ASK THE QUESTION

    //DISPLAY ENDING MESSAGE

    return 0;
}
