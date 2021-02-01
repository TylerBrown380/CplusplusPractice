#include <iostream>
#include <string>
#include <vector>

using namespace std;
//function prototypes
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}
void pass_by_value2(string s){
    s = "changed";
}
void pass_by_value3(vector<string> v) {
    v.clear();
}
void print_vector(vector<string> v) {
    for (auto s: v)
            cout << s << " ";
    cout << "\n";
}
int main() {
    int num {10};
    int num2{20};
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nnum before calling pass_by_value1: " << num2 << endl;
    pass_by_value1(num2);
    cout << "num after calling pass_by_value1: " << num2 << endl;
    
    string name {"Tyler"};
    cout <<"\nname before calling pass_by_value2: " <<name <<endl;
    pass_by_value2(name);
    cout <<"name after calling pass_by_value2: " <<name <<endl;
    
    vector<string> cats {"Pounce", "Fluffy", "Tiger"};
    cout << "\ncats before calling pass_by_value3: \n";
    print_vector(cats);
    pass_by_value3(cats);
    cout <<"\ncats after calling pass_by_value3: \n";
    print_vector(cats);
	return 0;
}
