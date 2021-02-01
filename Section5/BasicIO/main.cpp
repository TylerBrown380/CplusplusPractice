#include <iostream>

using namespace std;

int main() {
    const  double small_room_price = {25};
    const  doublebig_room_price = {35};
    double sales_tax = {0.06};
    const int estimate = {30};
    int small_room;
    int big_room;
    double cost, tax_cost;
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_room;
    cout << "How many big rooms would you like cleaned? ";
    cin >> big_room;
    cout << "Number of small rooms: " << small_room << endl;
    cout << "Number of big rooms: " << big_room << endl;
    cout << "Price per small rooms: " << "$"<<small_room_price << endl;
    cout << "Price per big rooms: " << "$"<<big_room_price << endl;
    cost = ((small_room_price*small_room)+(big_room_price*big_room));
    cout <<"Cost: $" << cost <<endl;
    tax_cost =(cost * sales_tax) ;
    cout <<"Tax: $" << tax_cost<<endl;
    cout <<"=================================" <<endl;
    cout <<"Total estimate: $" << cost + tax_cost << endl;
    cout <<"This estimate is valid for " << estimate << " days" << endl;
    return 0;
}