#include <iostream>
using namespace std;

/*
 *This is a solution to the section challenge for section 12
 */
int* apply_all(const int* a1, size_t, const int* a2, size_t);
void print(const int* a1, size_t);
int main() {
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: ";
    print(array1,array1_size);

    cout << "Array 2: ";
    print(array2,array2_size);

    int *results = apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t results_size{array1_size*array2_size};

    cout <<"Result: ";
    print(results, results_size);

    delete [] results;
    return 0;
}

/*
 * This function dynamically allocates a new array that is of size = size1 * size2
 * then it loops through each element of a2 and multiplies it across all elements of a1.
 * the product of that result is stored into new array.
 */
int* apply_all(const int* a1, size_t s1, const int* a2, size_t s2){
    int *new_array{};
    new_array = new int[s1*s2];

    int pos{0};
    for(size_t i {0}; i < s2; ++i){
        for(size_t j {0}; j < s1; ++j){
            new_array[pos] = a1[j] * a2[i];
            ++pos;
        }
    }
    return new_array;
}

/*
 * this function prints out the contents in the array.
 */
void print(const int* a1, size_t s) {
    cout <<"[ ";
    for(size_t i{0}; i < s; ++i){
        cout << a1[i] << " ";
    }
    cout << "]" << endl;
}