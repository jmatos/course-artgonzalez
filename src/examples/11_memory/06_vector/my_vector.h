#include<iostream>

using std::cout;

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    public:
        Vector(int s);
        //Rule 1 of 3 (3 rules of legacy c++)
        Vector(const Vector& v);  //copy constructor
        Vector(Vector&& v);  //move constructor - Rule 4 of 5 for modern C++ and up

        Vector& operator=(const Vector& v); //Copy assignment Rule 2 of 3 in legacy c++
        
        int Size() const{return size;}
        int Capacity() const{return capacity;}
        ~Vector();  //rule 3 of 3
    private:
        int size{0}; //current size of the list; doubles as the current_index
        int capacity; //total available slots for elements
        int* elements; //holds the dynamic list on the heap
};

#endif

void use_vector();

