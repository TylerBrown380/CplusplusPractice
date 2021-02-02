#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int num{10};
    cout << "the value of num is: " << num << endl;
    cout << "the sizeof num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;

    int *p;
    cout<< "\nValue of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof p<<endl;

    p= nullptr;
    cout<< "\nValue of p is: " << p << endl;

    int *p1 {nullptr};
    double *p2(nullptr);
    unsigned long long *p3 {nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "\nsize of p1 is: " << sizeof p1 << endl;
    cout << "size of p2 is: " << sizeof p2 << endl;
    cout << "size of p3 is: " << sizeof p3 << endl;
    cout << "size of p4 is: " << sizeof p4 << endl;
    cout << "size of p5 is: " << sizeof p5 << endl;

    int score {10};
    double high_temp{100.7};

    int *score_ptr{nullptr};
    score_ptr = &score;
    cout << "value of score is: " << score << endl;
    cout << "address of score is: " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << endl;
    *score_ptr = 20;
    cout << "Value of score is: " << score << endl;

    return 0;
}
