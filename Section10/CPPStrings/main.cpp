#include <iostream>
# include <string>

using namespace std;
int main(int argc, char **argv)
{
    //was mostly just checking to see if equal meant same object or equality
	string s1 {"apple"};
    string s2 {"apple"};
    string s3 {s1};
    bool val = (s1==s2);
    bool val2 = (s3==s1);
    cout <<boolalpha;
    cout << val << endl;
    cout <<val2 << endl;
	return 0;
}
