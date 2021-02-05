#include <iostream>
/*
 * This is used to show why you need to be careful with
 * shallow pointers, the program will crash.
 */
class Shallow {
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value(){return *data;}

    //Constructor
    Shallow(int d);
    //Copy Constructor
    Shallow(const Shallow &s);
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &s) : data(s.data) {
    std::cout << "Copy Constructor - shallow copy" << std::endl;
}

Shallow::~Shallow() {
    delete data;
    std::cout << "Destructor freeing data" <<std::endl;
}

void display_shallow(Shallow s){
    std::cout << s.get_data_value() << std::endl;
}
int main() {

    Shallow o1{100};
    display_shallow(o1);

    Shallow o2{o1};
    o2.set_data_value(500);
    return 0;
}
