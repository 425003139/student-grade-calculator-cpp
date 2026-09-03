#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main()
{
    string studentName, studentID;
    int prelimGrade, midtermGrade, finalsGrade;
    cout << "\nStudent Grade Calculator" << endl;
    cout << "\nEnter Student Name: " << endl;
    getline(cin, studentName);
    cout << "\nEnter Student ID: " << endl;
    cin >> studentID;
    cout << "\nEnter Prelim Grade: " << endl;
    cin >> prelimGrade;
    cout << "\nMidterm Grade: " << endl;
    cin >> midtermGrade;
    cout << "\nFinals: " << endl;
    cin >> finalsGrade;
    cout << "\n Student Name: " << (studentName) << endl;
    cout << "\n Student ID: " << (studentID) << endl;
    cout << "\n Prelim Grade: " << (prelimGrade) << endl;
    cout << "\n Midterm Grade: " << (midtermGrade) << endl;
    cout << "\n Finals Grade: " << (finalsGrade) << endl;

    cin.get();
    return (0);
}
