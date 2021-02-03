#include <iostream>
# include <string>

using namespace std;
int main()
{
    string message{};
    string encoded{};
    string alphabet{" ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz"};
    string key{" ZGMWJBTNKUAFIYLQVHERDXPOSC uvnbgwpsqoyhtxermkcjzlfadi"};
    cout << "Please enter a secret message: ";
    getline(cin, message);
    cout << message << endl;
    for(size_t i{}; i < message.length(); ++i){
        size_t val = message.at(i);
        size_t index = alphabet.find(val);
        if(index != string::npos) {
            encoded+= key.at(index);
        } else {
            encoded += val;
        }
    }
           cout <<"encoded message is: " << encoded << endl;
           cout <<"Original mesasge is: " << message << endl;
	return 0;
}