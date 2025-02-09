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

void paBebe(){
    cout << "Hai bebii, ano kamusta ka??" << endl;
    cout << "ahhh okay lng.., sigii sigii," << endl;
    cout << "ano kasi, malapit na valentines.." << endl;
    cout << "gusto sana mag tanong.." << endl;
    cout << "If you would want to be my Va" << endl;
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

void errQuestion(){
    cout << "Hai bebii, ano kamusta ka??" << endl;
    cout << "ahhh okay lng.., sigii sigii," << endl;
    cout << "ano kasi, malapit na valentines.." << endl;
    cout << "gusto sana mag tanong.." << endl;
    cout << "If you would want to be my Va" << endl;
}


int main() {
    string firstans; 



    heartBeat();
    return 0;
}
