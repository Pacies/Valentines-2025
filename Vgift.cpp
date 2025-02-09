#include <iostream>
using namespace std;

void heartBeat() {
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

    for (const string& line : heart) {
        cout << line << endl;
    }
}

void errorMsg(){
    cout << "SYSTEM ERROR!!!" << endl;
    cout << "Error509: Program Malfunction. (Try Rebooting)" << endl;
    cout << "Rebooting ..." << endl;
    cout << "..." << endl;
    cout << "Please Wait Paitently" << endl;
    cout << "..." << endl;
    cout << "..." << endl;
    cout << "..." << endl;
    cout << "Restarting Program Execution" << endl;
}

int main() {
    
    cout << "HAPPY VALENTINES REGINE!!! <3" << endl;
    cout << "Let me first say, I Love You Regine. With all my heart." << endl;
    cout << "I would walk to the ends of the world so that I could see your smile, the smile the brightens up my day." << endl; 
    cout << "I would swim across oceans, just to feel the warmth of your embrace." << endl;
    cout << "Your eyes, that has captivated me from time and time again." << endl;
    cout << "Your effortless Beauty that knows no end." << endl;

    return 0;
}
