#include <iostream>
using namespace std;

class BaseSalary {
protected:
    int baseSalary;
    string position;
public:
    BaseSalary(string newPosition, int salary) {
        baseSalary = salary;
        position = newPosition;
    }
    void showBaseSalary() {
        cout << "Position: " << position;
        cout << endl << "Base salary: " << baseSalary << " rubles" << endl;
    }
};

class Salary: public BaseSalary {
private:
    int salary, bonus, interest;
public:
    Salary(string newPosition, int newSalary, int newBonus, int newInterest) : BaseSalary(newPosition, newSalary) {
        bonus = newBonus;
        interest = newInterest;
        calcSalary();
    }

    int calcSalary() {
        salary = (baseSalary + bonus) - (baseSalary + bonus) * interest / 100;
    }

    void showSalary() {
        cout << endl << "Position: " << position;
        cout << endl << "Salary: " << salary << " rubles" <<endl;
    }
};


int main() {
    Salary ivan("developer", 30000, 10000, 13);
    ivan.showBaseSalary();
    ivan.showSalary();

    return 0;
}