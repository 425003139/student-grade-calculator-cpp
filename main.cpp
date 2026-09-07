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
    int averageGrade = (prelimGrade + midtermGrade + finalsGrade)/3.0;
    cout << "\n Average: " << (averageGrade) << endl;

    if  (averageGrade >= 95 && averageGrade <= 100){
        cout << "Remarks: Outstanding" << endl;
    }
    else if (averageGrade >= 90){
        cout << "Remarks: Very Good" << endl;
    }
    else if (averageGrade >= 85){
        cout << "Remarks: Good" << endl;
    }
    else if (averageGrade >= 75){
        cout << "Remarks: Passed" << endl;
    }
    else if (averageGrade >= 0){
        cout << "Failed" << endl;
    }

    cin.get();
    return (0);
}
