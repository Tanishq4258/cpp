#include <iostream>
#include <string>
using namespace std;

class Emp{
    string name;
    int id;
    int salary;

public:
    Emp(string n, int i, int s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Emp emp1("Tanishq", 101, 500000);
    emp1.display();

    return 0;
}