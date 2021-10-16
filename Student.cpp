#include <iostream>
#include "Course.h"
#include "Student.h"
#include "ACM.h"
#include "IEEE.h"
#include <vector>
#include <algorithm>


template<> void Student<void>::PrintC() {

    Course course;
    Course course1;
    Course course2;
    Course course3;
    Course course4;
    Course course5;

    course.setCourseName("Math");
    course.setStudentNum(21);
    course.setLecturer("Many Ginny");

    course1.setCourseName("Physics");
    course1.setStudentNum(12);
    course1.setLecturer("Brad Oliver");

    course2.setCourseName("Biology");
    course2.setStudentNum(15);
    course2.setLecturer("Nick Colinson");

    course3.setCourseName("History");
    course3.setStudentNum(20);
    course3.setLecturer("Emma Wotson");

    course4.setCourseName("Russian");
    course4.setStudentNum(14);
    course4.setLecturer("Alma Zhanatovna");

    course5.setCourseName("Math");
    course5.setStudentNum(21);
    course5.setLecturer("Many Ginny");

    Student student("Mark", 22222222, 21);

    std::cout << "--------------Please Enter The 5 Students:----------------" << std::endl;
    std::cout << std::endl;
    std::cout << "First Student: " << std::endl;
    Student student1;
    std::cin >> student1;

    std::cout << std::endl;
    std::cout << "Second Student: " << std::endl;
    Student student2;
    std::cin >> student2;

    std::cout << std::endl;
    std::cout << "Third Student: " << std::endl;
    Student student3;
    std::cin >> student3;

    std::cout << std::endl;
    std::cout << "Fourth Student: " << std::endl;
    Student student4;
    std::cin >> student4;

    std::cout << std::endl;
    std::cout << "Fifth Student: " << std::endl;
    Student student5;
    std::cin >> student5;

    std::cout << student << " Course: " << course.getCourseName() << " Number of Students: " << course.getStudentNum() << " Lecturer: " << course.getLecturer() <<" Activities: ACM" << std::endl;
    std::cout << std::endl;

    std::cout << student1 << " Course: " << course1.getCourseName() << " Number of Students: " << course1.getStudentNum() << " Lecturer: " << course1.getLecturer() << " Activities: ACM" << std::endl;
    std::cout << std::endl;

    std::cout << student2 << " Course: " << course2.getCourseName() << " Number of Students: " << course2.getStudentNum() << " Lecturer: " << course2.getLecturer() << " Activities: IEEE" << std::endl;
    std::cout << std::endl;

    std::cout << student3 << " Course: " << course3.getCourseName() << " Number of Students: " << course3.getStudentNum() << " Lecturer: " << course3.getLecturer() << " Activities: ACM" << std::endl;
    std::cout << std::endl;

    std::cout << student4 << " Course: " << course4.getCourseName() << " Number of Students: " << course4.getStudentNum() << " Lecturer: " << course4.getLecturer() << " Activities: IEEE" << std::endl;
    std::cout << std::endl;

    std::cout << student5 << " Course: " << course5.getCourseName() << " Number of Students: " << course5.getStudentNum() << " Lecturer: " << course5.getLecturer() << " Activities: IEEE" << std::endl;

    std::cout << std::endl;

    //First Example:
//    std::vector<int> vec{course.getStudentNum(), course1.getStudentNum(), course2.getStudentNum(), course3.getStudentNum(), course4.getStudentNum(), course5.getStudentNum()};
//    std::cout << " Total Appearance: " << std::count(vec.begin(), vec.end(), 21) << std::endl;

    //Second Example
//    std::vector<int> vec{course.getStudentNum(), course1.getStudentNum(), course2.getStudentNum(), course3.getStudentNum(), course4.getStudentNum(), course5.getStudentNum()};
//    auto iter_vector = std::find(vec.begin(), vec.end(), 14);
//
//    if(iter_vector != vec.end())
//        std::cout << " And We Found: " << *iter_vector << std::endl;

    //Third Example
//    Student s;
//    std::vector<int> vec{course.getStudentNum(), course1.getStudentNum(), course2.getStudentNum(), course3.getStudentNum(), course4.getStudentNum(), course5.getStudentNum()};
//    std::for_each(vec.begin(), vec.end(), s);

    //Fourth Example
    Student s;
    std::vector<int> vec{course.getStudentNum(), course1.getStudentNum(), course2.getStudentNum(), course3.getStudentNum(), course4.getStudentNum(), course5.getStudentNum()};
    std::cout << " Even Numbers Of Enrolled Students:" << std::count_if(vec.begin(), vec.end(), s);


}
