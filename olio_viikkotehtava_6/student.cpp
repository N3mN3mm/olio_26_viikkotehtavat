#include "student.h"
#include <string>
#include <iostream>
using namespace std;


student::student(string nimi, int ika)
{
    name = nimi;
    age = ika;
}

void student::setAge(int luku)
{
    age = luku;
}

void student::setName(string teksti)
{
    name = teksti;
}

string student::getName()
{
    return name;
}

int student::getAge()
{
    return age;
}

void student::printStudentInfo()
{
    cout << "Student: " << name << " Age: " << age << endl;
}
