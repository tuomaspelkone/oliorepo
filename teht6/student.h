#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;



class Student
{
public:
    Student();
    Student(string, int);



    int getAge() const;
    void setAge(int newAge);

    string getName() const;
    void setName(const string &newName);

    void printStudentinfo() const;

private:
    string Name;
    int Age;

};

#endif // STUDENT_H
