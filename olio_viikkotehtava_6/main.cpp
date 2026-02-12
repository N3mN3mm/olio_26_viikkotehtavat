#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "student.h"

int main ()
{
    int selection =0;
    string nimi;
    int ika;

    vector<student>studentList;

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
        case 0: {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Give student name: " << endl;
            cin >> nimi;
            cout << "Give age: " << endl;
            cin >> ika;
            // Lisää uusi student StudentList vektoriin.
            studentList.push_back(student(nimi, ika));
            break;
        }
        case 1: {
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 2: {
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),
                 [](student& a, student& b) {
                     return a.getName() < b.getName();
                 }
                 );
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 3: {
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),
                 [](student& a, student& b) {
                     return a.getAge() < b.getAge();
                 }
                 );
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 4: {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Give a student name: " << endl;
            cin >> nimi;
            auto it = find_if(studentList.begin(), studentList.end(),
                              [&](student& s)
                              {return s.getName() == nimi;}
                              );
            if (it != studentList.end()) {
                cout << "Student found: ";
                it->printStudentInfo();
            }
            else {
                cout << "Student not found!" << endl;
            }
            break;
        }
        default: {
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
        } // switch
    }
    while(selection < 5);
    return 0;
}
