#include <iostream>
#include <cstdlib>

using namespace std;

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
