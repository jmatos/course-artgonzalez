#include "my_vector.h"

Vector::Vector(int s) : capacity{0}, elements{new int[s]} {
    cout<<"created new memory at"<<elements<<"\n";
}

/*
1-Create temporary memory for v1
2-Copy values from v into v1 temporary memory
3-Delete v1 elements memory
4-Point v1 elements to temporary memory
5-Set v1.size to v.size
6-Return a reference to itself
*/
Vector& Vector::operator=(const Vector& v) {
    int* temp = new int[v.size];
    
    for (auto i=0; i < v.size; i++) {
        temp[i] = v.elements[i];
    }
    
    cout<<"copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    cout<<"copy assignment new memory was created "<<temp<<"\n";
    temp = nullptr;
    size = v.size;

    return *this;
}

/*
1-Get v.elements memory(switch/steal the pointer making v empty)
2-Get size from v
3-point v.elements to nothing(nullptr)
4-set v size to 0
*/
Vector::Vector(Vector&& v) : size(v.size), elements(v.elements) {
    cout<<"move constructor switch pointer "<<elements<<"\n";
    v.elements = nullptr;
    v.size = 0;
}

Vector::Vector(const Vector& v) : size{v.size}, capacity{v.capacity}, elements{new int[v.capacity]} {
    cout<<"Copy constructor - created memory at"<<elements<<"\n";
    for(auto i=0; i < v.size; i++) {
        elements[i] = v.elements[i];
    }
}

Vector::~Vector() {
    cout<<"deleted the memory at"<<elements<<"\n";
    delete[] elements;
}

//Not a class function; these are free functions
void use_vector() {
    //do not create dynamic memory for v; use a stack variable ex. Vector v(3)
    // Vector* v = new Vector(3);
    // delete v;

    Vector v(3);
}