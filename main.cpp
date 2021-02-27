#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of pupils:" << "\t";
    cin >> N;

    struct Pupil {
        string surname;
        int school = 0;
        int grade = 1;
    };
    Pupil pupils[N];

    for (int i = 0; i < N; i++) {
        Pupil pupil;
        cout << "Pupil "<< i+1 << "'s name: " << "\t";
        cin >> pupil.surname;
        cout << "Enter school: " << "\t";
        cin >> pupil.school;
        cout << "Enter grade: " << "\t";
        cin >> pupil.grade;

        pupils[i] = pupil;
    }

    cout <<endl<<"\t"<<"Pupils in 49 or 90 schools in 5 or 6 grades: ";
    for (int i = 0; i < N; i++) {
        if ((pupils[i].school == 49 || pupils[i].school == 90) && (pupils[i].grade == 5 || pupils[i].grade == 6)) {
            cout <<endl<< pupils[i].surname;
        }
    }
    return 0;
}