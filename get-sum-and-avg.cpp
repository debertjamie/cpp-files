#include <iostream>

using namespace std;

int main() {
    int students;
    float sum = 0.0;
    int maxScore = 0;
    float avg = 0.0;

    cout << "Input number of students: ";
    cin >> students;

    for (int i = 0; i < students; i++) {
        int score;
        cout << "Input score for student " << i + 1 << ": ";
        cin >> score;

        sum += score;
        if (score > maxScore) {
            maxScore = score;
        }
    }

    avg = (students > 0) ? sum / students : 0.0;

    cout << "Average score: " << avg << endl;
    cout << "Maximum score: " << maxScore << endl;

    return 0;
}
