#include <iostream>

using namespace std;

int main() {
    int attendance, exams[4], totalFailedExams, avg;
    float attendancePercentage;
    char rep;

    do {
        cout << "Input student attendance (/150): ";
        cin >> attendance;

        for(int i = 0; i < 4; i++) {
            cout << "Input exam " << i+1 << ": ";
            cin >> exams[i];

            if(exams[i] < 70) {
                totalFailedExams++;
            }
        }
        
        attendancePercentage = (static_cast<float>(attendance) / 150) * 100;
        avg = 0;
        for(int score : exams) {
            avg += score;
        }
        avg /= 4;

        cout << "Student has a " << attendancePercentage << "% attendance in class" << endl;
        cout << "Student has an average score of " << avg << endl;
        cout << "Student has " << totalFailedExams << " failed exams" << endl;

        if(attendancePercentage >= 75 && avg >= 70 && totalFailedExams <= 3) {
            cout << "Student passed" << endl;
        } else {
            cout << "Student failed" << endl;
        }

        cout << "Would you like to repeat? (y/n) ";
        cin >> rep;
    } while(rep == 'y' || rep == 'Y');
}