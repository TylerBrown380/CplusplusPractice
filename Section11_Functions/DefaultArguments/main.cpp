#include <iostream>
#include <iomanip>
# include <string>
using namespace std;

double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string pre= "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost +=(base_cost * tax_rate)+ shipping;
}

void greeting(string name, string pre, string suffix){
    cout << "Hello " << pre + " " + name + " " + suffix << endl;
}
int main(){
    double cost {0};
    //using no defaults
    cost = calc_cost(100.0, 0.08, 4.25);
    
    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost <<endl; //112.25
    
    //will use default shipping
    cost = calc_cost(100.0, 0.08);
    cout << "Cost is: " << cost << endl; //111.50
    
    //will use default tax and shipping
    cost = calc_cost(200.0);
    cout << "Cost is: " << cost << endl;
    
    //will use all defaults
    cost = calc_cost();
    cout << "Cost is: " << cost << endl;
    
    
    greeting("Tyler", "Dr.", "M.D.");
    
    greeting("Brook","Mrs.");
    cout << endl;
    return 0;
}
