#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void displayMenu();
char readChar();
void selP(vector<int> vec);
void selA(vector<int> &vec);
void selM(vector<int> vec);
void selS(vector<int> vec);
void selL(vector<int> vec);
void quit();
void doSelection(char sel, vector<int> &vec);
//Refactoring the section 9 challenge to use functions.

int main() {
    char sel {};
    vector<int> vec {};
    do {
        displayMenu();
        sel = readChar();
        doSelection(sel, vec);
    } while (sel != 'Q');
    cout << endl;
    return 0;
}
/*
 * This function displays menu to the console
 */
void displayMenu() {
    cout <<"\nP - Print numbers" << endl;
    cout <<"A- Add a number" << endl;
    cout <<"M - Display mean of the numbers" << endl;
    cout <<"S - Display the smallest number" << endl;
    cout <<"L - Display the largest number" << endl;
    cout <<"Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

/*
 * This function reads a char from the user
 */
char readChar() {
    char sel {};
    cin >> sel;
    return toupper(sel);
}
/*
 * This function prints the contents of the vector.
 */
void selP(vector<int> vec) {
    if(vec.size() < 1) {
        cout << "[] - the list is empty" << endl;
    } else {
        cout << "[ ";
        for(auto val: vec){
            cout << val << " ";
        }
        cout << "]";
    }
}
/*
 * This function adds a number to the vector.
 */
void selA(vector<int> &vec) {
    int num {};
    cout << "Please enter number to be added: ";
    cin >> num;
    vec.push_back(num);
}
/*
 * This function calculates the mean of the numbers in vector.
 */
void selM(vector<int> vec){
    if(vec.size() < 1) {
        cout << "No data present" << endl;
    } else {
        double mean {};
        for(auto val: vec){
            mean += val;
        }
        cout << "mean of numbers: " << mean/vec.size();
    }
}
/*
 * This function find the smallest number in the vector
 */
void selS(vector<int> vec){
    if(vec.size() < 1) {
        cout << "No data present" << endl;
    } else {
        int smallest = INT_MAX;
        for(auto val: vec) {
            if(val < smallest){
                smallest = val;
            }
        }
        cout << "smallest number in list is: " << smallest << endl;
    }
}

/*
 * this function finds the largest number in the vector
 */
void selL(vector<int> vec) {
    if(vec.size() < 1) {
        cout << "No data present" << endl;
    } else {
        int largest = INT_MIN;
        for(auto val: vec) {
            if(val > largest){
                largest = val;
            }
        }
        cout << "largest number in list is: " << largest << endl;
    }
}

/*
 * goodbye friend
 */
void quit(){
    cout << "goodbye friend" << endl;
}

/*
 * this function decides what happens based on the char value
 */
void doSelection(char sel, vector<int> &vec){
    if (sel == 'P'){
        selP(vec);
    }
    else if (sel == 'A'){
        selA(vec);
    }
    else if (sel == 'M'){
        selM(vec);
    }
    else if (sel == 'S') {
        selS(vec);
    }
    else if (sel == 'L'){
        selL(vec);
    }
    else if (sel == 'Q')
        quit();
    else
        cout << "Unknown option -- try again friend" << endl;
}
