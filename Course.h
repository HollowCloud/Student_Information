#include <iostream>
#include <string>

#ifndef STL_ALGO_COURSE_H
#define STL_ALGO_COURSE_H



class Course{

public:
    void assign();
    std::string getCourseName();
    std::string getLecturer();
    int getStudentNum();
    void setCourseName(std::string s);
    void setLecturer(std::string lec);
    void setStudentNum(int i);

private:
    std::string course_name;
    int student_num;
    std::string lecturer;

};





#endif //STL_ALGO_COURSE_H
