#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &s);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "changed";
}

void pass_by_ref3(vector<string> &v) {
    v.clear();
}

void print_vector(const vector<string> &v) {
    for(auto s: v){
        cout << s << " ";
    }
    cout << endl;
}
int main() {
    int num {10};
    int another_num{20};
    
    cout << "num before calling pass-be_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;
    
    cout << "\nanother_num before calling pass-be_ref1: " << num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << num << endl;
    
    string name {"Tyler"};
    cout << "\nname before calling pass_by_ref3: " << name << endl;
    pass_by_ref2(name);
    cout << "\nname after calling pass_by_ref3: " << name << endl;
    
    vector<string> s {"Pounce", "Tiger", "Fluffy"};
    cout << "\nKitties before calling pass_by_ref3: ";
    print_vector(s);
    cout << "\nKitties before calling pass_by_ref3: ";
    pass_by_ref3(s);
    print_vector(s);
	return 0;
}
