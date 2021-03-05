#include <iostream>
using namespace std;

int main() {
    class Planet {
    public:
        float weight;
        string name;

        Planet(string planetName, float planetWeight) {
            name = planetName;
            weight =  planetWeight;
        }
    };

    const int n = 8;

    Planet planets[n] = {
            Planet("Земля", 5.972E24),
            Planet("Уран", 8.681E25),
            Planet("Венера", 4.867E24),
            Planet("Нептун", 1.024E26),
            Planet("Марс", 6.39E23),
            Planet("Юпитер", 1.898E27),
            Planet("Меркурий", 3.285E23),
            Planet("Сатурн", 5.683E26),
    };

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if(planets[j].weight > planets[j + 1].weight) {
                Planet temp =  planets[j];
                planets[j] = planets[j + 1];
                planets[j + 1] = temp;
            }
        }
    }

    cout << "Планеты солнечной системы (отсортированные):" << endl;
    for (int k = 0; k < n; k++) {
        cout << planets[k].name << "\t" << planets[k].weight <<endl;
    }

    return 0;
}