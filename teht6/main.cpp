#include <iostream>
#include "student.h"
#include <algorithm>
#include <vector>
using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    //alussa luodaan lista
    //student *s = new student
    //studentlist -> lisää(student);

    Student A("Aaa", 51);
    Student B("Bee", 39);
    Student C("Cee", 25);
    Student D("Dee", 13);


    studentList.push_back(A);
    studentList.push_back(B);
    studentList.push_back(C);
    studentList.push_back(D);


    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.

            cout << "opiskelijoiden nimet: " ;
            for (Student &s: studentList){
                cout << s.getName() << " ";
            }
            cout << endl;

            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat


            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
                 {
                     return eka.getName() < toka.getName();
                 }
                 );

            cout << endl << "lajiteltu nimen perusteella" << endl;
            for (Student &s: studentList){
                cout << s.getName() << ": " << s.getAge() << endl;

            }


            break;



        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
                 {
                     return eka.getAge() < toka.getAge();
                 }
                 );


            cout << endl << "lajiteltu ian perusteella" << endl;
            for (Student &s: studentList){
                cout << s.getName() << ": " << s.getAge() << endl;
            }
            break;

        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            //find_if(studetn.begin(), student.end(), back_name????)

            vector<Student>::iterator it = studentList.begin();

            cout << "anna etsittava nimi" << endl;
            string etsittavanimi;
            cin >> etsittavanimi;

            it = std::find_if(studentList.begin(), studentList.end(),
                              [etsittavanimi](const Student &s) { return s.getName() == etsittavanimi; });
            if ( it != studentList.end() ) {
                cout << "loydetty: \n";
                it->printStudentinfo();
            }
            else {
                cout << "ei loydetty" << endl;
            }
            break;



        }



    }while(selection < 5);

    //delete student;

    return 0;
}
