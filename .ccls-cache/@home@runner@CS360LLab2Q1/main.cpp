#include <iostream>
using namespace std;

#define MAX 10

class student {
private:
    char name[30];
    int courseNum;
    int total;
    float perc;
public:
    void getDetails(void); //member function to get student's details
    void putDetails(void); //member function to print student's details
};

void student::getDetails(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter course number: ";
    cin >> courseNum;
    cout << "Enter total marks out of 500: ";
    cin >> total;
    perc = (float)total / 500 * 100;
}

void student::putDetails(void) {
    cout << "Student details:\n";
    cout << "Name: " << name << ", Course Number: " << courseNum << ", Total: " << total << ", Percentage: " << perc << endl;
}

int main(void) {
    student students[MAX];
    int numStudents;

    cout << "Enter total number of students (max " << MAX << "): ";
    cin >> numStudents;

    if (numStudents > MAX) {
        cout << "Exceeded maximum number of students allowed." << endl;
        return 1;
    }

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details of student " << i + 1 << ":" << endl;
        students[i].getDetails();
    }

    for (int i = 0; i < numStudents; ++i) {
        cout << "Details of student " << i + 1 << ":" << endl;
        students[i].putDetails();
        cout << endl;
    }

    return 0;
}
