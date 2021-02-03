#include <vector>
#include <iostream>
using namespace std;

int main() {
    double cents  {0};
    const int dollars {100};
    const  int quarter{25};
    const  int dime{10};
    const int nickle {5};

    int num_dollars {0};
    int num_quarter  {0};
    int num_dime {0};
    int num_nickle  {0};
    int num_penny  {0};
    cout << "Please enter amount of cents: ";
    cin >> cents;
    while(cents >= 5) {
        if (cents >= 100) {
            num_dollars +=1;
            cents -= dollars;
        }
        else if (cents >= 25) {
            num_quarter +=1;
            cents -= quarter;
        }
        else if (cents >= 10) {
            num_dime+=1;
            cents -= dime;
        }
        else if (cents >= 5) {
            num_nickle +=1;
            cents -= nickle;
        }
    }
     num_penny = cents;
    cout << "Dollars : "<<  num_dollars <<"\nQuarters : "<< num_quarter << "\nDimes : "<<  num_dime << "\nNickles : "<< num_nickle << "\nPennies : "<< num_penny <<endl;
}