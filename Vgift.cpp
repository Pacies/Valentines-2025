#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

void clearScreen() {
    system("cls");  // Windows command; use "clear" for Linux/Mac
    this_thread::sleep_for(chrono::seconds(3));  // Added delay after function call
}

void decoyMsg() {
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

void errorMsg() {
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
    this_thread::sleep_for(chrono::seconds(3));  // Added delay after function call
}

void userFix() {
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
}


int main() {
 
    char start;

    cout << "Hello there!, do you want to start the program? (y/n): "; cin >> start;
    if (start == tolower('n')){
        system("cls");
        cout << "Okay po :<, Bye bye!";
        return 0;
    }
    
    char letter;
    cout << "I have a letter for you.." << endl;
    cout << "Open the letter? (y/n): "; cin >> letter;
    if (letter == tolower('n')){
        system("cls");
        cout << "Okay po :<, Bye bye!";
        return 0;
    }

    //DISPLAY DECOY MESSAGE
    //DISPLAY ERROR

    //USER FIXES CODE

    //DISPLAY LSM 

    //ASK THE QUESTION

    //DISPLAY ENDING MESSAGE

    return 0;
}
