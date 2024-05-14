#include <iostream>
using namespace std;

class Employee {
private:
    int age;
    int yearsOfService;
    double salary;

public:
    Employee(int _age, int _yearsOfService, double _salary) {
        age = _age;
        yearsOfService = _yearsOfService;
        salary = _salary;
    }

    int getAge() const {
        return age;
    }
    void setAge(int _age) {
        age = _age;
    }

    int getYearsOfService() const {
        return yearsOfService;
    }
    void setYearsOfService(int _yearsOfService) {
        yearsOfService = _yearsOfService;
    }

    double getSalary() const {
        return salary;
    }
    void setSalary(double _salary) {
        salary = _salary;
    }
};

int main() {
    Employee employee1(30, 1, 100);
    Employee employee2(35, 23, 10000000);

    cout << "Employee 1:\n";
    cout << "Age: " << employee1.getAge() << endl;
    cout << "Years of Service: " << employee1.getYearsOfService() << endl;
    cout << "Salary: $" << employee1.getSalary() << endl;

    cout << "\nEmployee 2:\n";
    cout << "Age: " << employee2.getAge() << endl;
    cout << "Years of Service: " << employee2.getYearsOfService() << endl;
    cout << "Salary: $" << employee2.getSalary() << endl;

    return 0;
}
