#include <iostream>

using namespace std;

int main() {
    
    char sel {};
    do {
        cout << "\n----------------------------" <<endl;
        cout <<"1. Do this" << endl;
        cout <<"2. Do this" << endl;
        cout <<"3. Do something else" << endl;
        cout <<"4. Q. quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> sel;
        
        if (sel == '1')
            cout << "Your code was 1 - doing this" << endl;
        else if (sel == '2')
            cout << "Your code was 2 - doing this" << endl;
        else if (sel == '3')
            cout << "Your code was 3 - doing something else" << endl;
        else if (sel == 'Q' || sel == 'q')
            cout << "goodbye friend" << endl;
        else
            cout << "Unknown option -- try again friend" << endl;
        
    } while (sel != 'q' && sel != 'Q');
    cout << endl;
    return 0;
}