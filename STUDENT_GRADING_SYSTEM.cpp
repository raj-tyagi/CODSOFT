/*
Create a program that manages student grades. Allow the user
to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest
and lowest grades
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> studentNames;
    vector<double> studentGrades;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;
        studentNames.push_back(name);

        cout << "Enter the grade of student " << i + 1 << ": ";
        cin >> grade;
        studentGrades.push_back(grade);
    }

    // Calculate the average grade
    double totalGrade = 0.0;
    for (double grade : studentGrades) {
        totalGrade += grade;
    }
    double averageGrade = totalGrade / numStudents;

    // Find the highest and lowest grades
    double highestGrade = *max_element(studentGrades.begin(), studentGrades.end());
    double lowestGrade = *min_element(studentGrades.begin(), studentGrades.end());

    // Display the results
    cout << "\nStudent Grades Summary\n";
    cout << "----------------------\n";

    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << studentNames[i] << ": " << studentGrades[i] << endl;
    }

    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
