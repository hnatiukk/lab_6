//Створення структури студента та ініцалізація

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
        double averageMark;
    };

    Student student{ 1, 1, "Олег" , 0 };
    Student student1{ 2, 3, "Маркіянчик", 0 };

    cout << "Введіть середній бал студента " << student.name << ": ";
    cin >> student.averageMark;

    cout << "Введіть середній бал студента " << student1.name << ": ";
    cin >> student1.averageMark;


    cout << student.name << " навчається в групі " << student.averageMark << endl;
    cout << student1.name << " навчається в групі " << student1.averageMark << endl;
}