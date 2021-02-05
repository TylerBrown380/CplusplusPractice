#include <iostream>
/*
 * This is used to show why you need to be careful with
 * shallow pointers, the program will crash.
 */
class Deep{
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value(){return *data;}

    //Constructor
    Deep(int d);
    //Copy Constructor
    Deep(const Deep &s);
    //Destructor
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}
//deep copy because it is by delegating to our regular constructor
Deep::Deep(const Deep &s) : Deep {*s.data}{
    std::cout << "Copy Constructor - deep copy" << std::endl;
}

Deep::~Deep() {
    delete data;
    std::cout << "Destructor freeing data" <<std::endl;
}

void display_shallow(Deep s){
    std::cout << s.get_data_value() << std::endl;
}
int main() {

    Deep o1{100};
    display_shallow(o1);

    Deep o2{o1};
    o2.set_data_value(500);
    return 0;
}
