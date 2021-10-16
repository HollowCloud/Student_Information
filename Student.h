#include <iostream>
#include "Course.h"



#ifndef STL_ALGO_STUDENT_H
#define STL_ALGO_STUDENT_H


template <typename T>
class Student {

public:
    std::string student_name;
    int id;
    int age;
    std::string course;
    Course c;

    Student(){
        student_name = "";
        id = 0;
        age = 0;
    };

    Student(std::string s, int i, int e){
        this->student_name = s;
        this->id = i;
        this->age = e;
    };

    void PrintC();
//    void operator()(int a){ //overloaded operator~~~ //Third Example
//        std::cout << (a+a)*a << std::endl;
//    };

    bool operator()(int i){
        if (i % 2 == 0)
            return true;
        else
            return false;
    };

    friend std::ostream &operator<<( std::ostream &output, const Student &S ) {
        output << "Name: " << S.student_name << " ID: " << S.id << " Age: " << S.age;
        return output;
    }

    friend std::istream &operator>>( std::istream  &input, Student &S ) {
        input >> S.student_name >> S.id >> S.age;
        return input;
    }

};



#endif //STL_ALGO_STUDENT_H
