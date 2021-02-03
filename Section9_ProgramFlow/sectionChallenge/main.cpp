#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    char sel {};
    vector<int> vec {};
    do {
        cout <<"\nP - Print numbers" << endl;
        cout <<"A- Add a number" << endl;
        cout <<"M - Display mean of the numbers" << endl;
        cout <<"S - Display the smallest number" << endl;
        cout <<"L - Display the largest number" << endl;
        cout <<"Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> sel;
        if (sel == 'P' || sel == 'p'){
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
        else if (sel == 'A' || sel == 'a'){
            int num {};
            cout << "Please enter number to be added: ";
            cin >> num;
            vec.push_back(num);
        }
        else if (sel == 'M' || sel == 'm'){
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
        else if (sel == 'S' || sel == 's') {
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
            
        else if (sel == 'L' || sel == 'l'){
                if(vec.size() < 1) {
                cout << "No data present" << endl;
            } else {
                int largest = INT_MIN;
                for(auto val: vec) {
                    if(val > largest){
                        largest = val;
                    }
                }
                cout << "smallest number in list is: " << largest << endl;
            }
        }
            
        else if (sel == 'Q' || sel == 'q')
            cout << "goodbye friend" << endl;
        else
            cout << "Unknown option -- try again friend" << endl;
        
    } while (sel != 'q' && sel != 'Q');
    cout << endl;
    return 0;
}