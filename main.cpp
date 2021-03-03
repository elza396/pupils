#include <iostream>
using namespace std;

int main() {
    class Employee {
        private:
        string name;
        int category, salary;

        public:
        int getSalary() {
            return salary;
        }

        string getName() {
            return name;
        }

        void setCategory(int employeeCategory) {
            category = employeeCategory;
            salary = category * 7000;
        }

        Employee(string employeeName) {
            name = employeeName;
            setCategory(1);
        }

        Employee(string employeeName, int employeeCategory) {
            name = employeeName;
            setCategory(employeeCategory);
        }
    };
    string name1, name2;
    int category;

    cout << "Enter employee's name:" <<"\t";
    cin >> name1;
    cout << "Enter employee's category:" <<"\t";
    cin >> category;

    if (category < 1) {
        cout <<"Invalid category";
    } else {
        Employee employee1(name1, category);
        cout << "Employee " << employee1.getName() << " gets " << employee1.getSalary() <<" rubles."<<"\t";
    }

    cout << endl <<"Enter trainee's name:" <<"\t";
    cin >> name2;
    Employee employee2(name2);
    cout << "Trainee " << employee2.getName() << " gets " << employee2.getSalary() <<" rubles."<<"\t";



    return 0;
}

