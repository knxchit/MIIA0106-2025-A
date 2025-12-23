#include <iostream>
#include <string>
using namespace std;

void calculateGrade(double score, char& grade)
{
    if (score >= 80.0)
        grade = 'A';
    else if (score >= 70.0)
        grade = 'B';
    else if (score >= 60.0)
        grade = 'C';
    else if (score >= 50.0)
        grade = 'D';
    else
        grade = 'F';
}

int main()
{
    string name, id;
    double score;
    char grade;

    // TODO: รับชื่อ (getline)
    getline(cin, name);
    // TODO: รับรหัสและคะแนน (cin)
    cin >> id >> score;
    // TODO: calculateGrade(score, grade);
    calculateGrade(score, grade);
    // TODO: displayStudentInfo(name, id, score, grade);
    cout << "Name: " << name << endl;

    return 0;
}
