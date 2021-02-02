#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}
void print(double num) {
    cout << "Printing double: " << num << endl;
}
void print(string val) {
    cout << "Printing string: " << val << endl;
}
void print(string val, string val2) {
    cout << "Printing string1: " << val << endl;
    cout << "Printing string2: " << val2 << endl;
}
void print(vector<string> str) {
    for(auto v: str) {
        cout << v << " ";
    }
    cout << "\n" << endl;
}
int main() {
    print(1);
    print(5.8);
    print(123.3F);
    print("C-style string");
    string s {"C++ string"};
    print("C-style string", s);
    vector<string> v{"hi", "test", "value"};
    print(v);
	return 0;
}
