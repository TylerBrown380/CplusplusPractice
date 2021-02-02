#include <iostream>

using namespace std;

int main() {
    int scores[] {100,95,89,68,-1};
    int *score_ptr{scores};

    while(*score_ptr != -1){
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n------------------------------" << endl;
    score_ptr = scores;
    while(*score_ptr != -1){
        cout << *score_ptr++ << endl;
    }

    cout << "\n------------------------------" << endl;
    string s1 {"Tyler"};
    string s2 {"Brook"};
    string s3 {"Pounce"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout <<boolalpha;
    cout << p1 << "==" << p2 <<": " << (p1==p2) << endl; //false
    cout << p1 << "==" << p3 <<": " << (p1==p3) << endl; //true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; //true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; //true

    p3 = &s3;
    cout << *p1 << "==" << *p3 <<": " <<(*p1==*p3) << endl; //false

    cout << "\n------------------------------" << endl;
    char name[] {"Tyler"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0];
    char_ptr2 = &name[3];

    cout << "In the string " << name <<", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;


    return 0;
}
