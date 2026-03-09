/*

A teacher want a program that reads 2 students information about math exam
    Read per student: name, id and grade
    Then print them. See the picture in the slides


Be a good software engineer
    Think deeply in your selected data types
    The teacher gives us this dialogue to guide us
    Be careful from your assumptions?
    Is exam’s grade an integer?


    What is student 1 name: mostafa
His id: 111
His math exam grade: 20
What is student 2 name: ALI
His id: 555
His math exam grade: 30
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string student1_name, student2_name;
    int student1_id, student2_id;
    float student1_grade, student2_grade;

    cout << "What is student 1 name: ";
    cin >> student1_name;
    cout << "His id: ";
    cin >> student1_id;
    cout << "His math exam grade: ";
    cin >> student1_grade;

    cout << "What is student 2 name: ";
    cin >> student2_name;
    cout << "His id: ";
    cin >> student2_id;
    cout << "His math exam grade: ";
    cin >> student2_grade;

    cout << "Students grades in math:\n";
    cout << student1_name << " with id " << student1_id << " got grade: " << student1_id << "\n";
    cout << student2_name << " with id " << student2_id << " got grade: " << student2_id << "\n";
    cout << "Average grade is " << (student1_grade + student2_grade) / 2;
}