#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}
int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); // เคลียร์ newline ก่อน getline

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    // Read data for `size` students
    for (int i = 0; i < size; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin, name[i]);
        cout << "Enter student " << i + 1 << " id: ";
        getline(cin, id[i]);
        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];
        // clear rest of line before next getline
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // calculate grade
        calculateGrade(score[i], grade[i]);
    }

    // Display information for each student
    for (int i = 0; i < size; i++) {
        cout << "\n";
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    // Free dynamic memory
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}

