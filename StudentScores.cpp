#include <iostream>
#include <string>
using namespace std;

struct StudentScores{
    string name;
    int mathScore;
    int scienceScore;
    int socialStudyScore;
};

void updateStudentScore(StudentScores &student, string whichCourse, int newScore) {
    if (whichCourse == "Math") {
        student.mathScore = newScore;
        cout << "Updated Math score of " << student.name << endl;
    } else if (whichCourse == "Science") {
        student.scienceScore = newScore;
        cout << "Updated Science score of " << student.name << endl;
    }
}

int main() {
    int numStudents;
    cin >> numStudents;

    StudentScores students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].mathScore >> students[i].scienceScore >> students[i].socialStudyScore;
    }

    for (int i = 0; i < numStudents; i++) {
        cout << students[i].name << ", Math: " << students[i].mathScore << ", Science: " << students[i].scienceScore << ", Social Study: " << students[i].socialStudyScore << endl;
    }

    string name, course;
    int score;
    cout << endl;
    cout << "Please enter a student's name, followed by the course name and the new score in a separate line:" << endl;
    cin.ignore();
    getline(cin, name);
    cin >> course >> score;
    for(int i = 0; i < numStudents; i++){
        if (students[i].name == name) {
            updateStudentScore(students[i], course, score);
            cout << students[i].name << ", Math: " << students[i].mathScore << ", Science: " << students[i].scienceScore << ", Social Study: " << students[i].socialStudyScore << endl;
            break;
        }
    }

    return 0;
}
