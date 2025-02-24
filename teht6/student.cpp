#include "student.h"




Student::Student(string Name, int Age) : Name(Name), Age(Age)
{
    cout << "Oppillaan nimi: " << Name << "ika: " << Age << endl;
}

int Student::getAge() const
{
    return Age;
}

void Student::setAge(int newAge)
{
    Age = newAge;
}

string Student::getName() const
{
    return Name;
}

void Student::setName(const string &newName)
{
    Name = newName;
}

void Student::printStudentinfo() const
{
    cout << "Nimi: " << Name << ", Ika: " << Age << endl;
}
