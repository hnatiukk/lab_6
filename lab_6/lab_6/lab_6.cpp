#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Student
    {
        int id;
        int group;
        string name;
    };

    Student student{ 1, 1, "Олег" };
    Student student1{ 2, 3, "Маркіянчик" };

    cout << student.name << " навчається в групі " << student.group << endl;
    cout << student1.name << " навчається в групі " << student1.group << endl;
}