#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string studentid;
    string studentname;
    float score;
    string grade;


    cout << "Enter Student ID: ";
    cin >> studentid;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, studentname);

    cout << "Enter Score: ";
    cin >> score;
    if (score >= 90) {
        grade = "Grade A";
    }
    else if (score >= 80) {
        grade = "Grade B";
    }
    else if (score >= 70) {
        grade = "Grade C";
    }
    else {
        grade = "Grade F";
    }

    cout << "-------Student Report-------" << endl;
    cout << "Student ID: " << studentid << endl;
    cout << "Student Name: " << studentname << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    cout << "----------------------------" << endl;


    return 0;
}