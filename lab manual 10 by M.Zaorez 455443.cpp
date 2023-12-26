/*
                            LAB MANUAL 10
                               M.ZAOREZ
                                455443
*/
//                                      LAB TASK 01
#include <iostream>
#include <vector>

using namespace std;

int main() {
/*    vector<int> myvec;

    myvec.push_back(1);
    myvec.push_back(2);
    myvec.push_back(3);
    myvec.push_back(4);

    cout << "Elements in the vector: ";
    for (auto it = myvec.begin(); it != myvec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    myvec.push_back(5);

    if (!myvec.empty() && myvec.size() > 2) {
        myvec.erase(myvec.begin() + 2);
    }

    cout << "Vector after pushing 5 and removing element at position 2: ";
    for (int element : myvec) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
    */
   
   
   
    //                               lab task 02
 
 
 /*   double num, best;
vector <int> score;
vector <char> grade;
cout<<"Enter the number of students: "; cin>>num;
cout<<"Enter "<<num<<" scores: ";

for (int i = 0; i < num; i++) {
cin>>score[i];}

best = score[0];
for (int i = 0; i < num; i++) {
if (score[i] > best) best = score[i];}

for (int i = 0; i < num; i++) {
if (score[i] >= -10) grade[i] = 'A';
else if (score[i] >= -20) grade[i] = 'B';
else if (score[i] >= -30) grade[i] = 'C';
else if (score[i] >= -40) grade[i] = 'D';
else grade[i] = 'F';}

for (int i = 0; i < num; i++) {
cout<<"Student "<<i + 1<<" score is "<<score[i]<<" and grade is "<<grade[i]<<endl;
}

return 0;
}
    
 */   
    
  //                                 lab task 03
/*  #include <iostream>
#include <vector>
#include <cmath>

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() const {
        double s = (side1 + side2 + side3) / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() const {
        return side1 + side2 + side3;
    }
};

int main() {
    std::vector<double> sides = {3.0, 4.0, 5.0};
    Triangle myTriangle(sides[0], sides[1], sides[2]);

    std::cout << "Area of the triangle: " << myTriangle.calculateArea() << " square meters" << std::endl;
    std::cout << "Perimeter of the triangle: " << myTriangle.calculatePerimeter() << " meters" << std::endl;

    return 0;
}

*/

//                                 lab 04
/*
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Employee {
    string name;
    double salary;
    int hoursWorked;
};

void increaseSalary(Employee& employee) {
    if (employee.hoursWorked >= 12) {
        employee.salary += 150;
    } else if (employee.hoursWorked >= 10) {
        employee.salary += 100;
    } else if (employee.hoursWorked >= 8) {
        employee.salary += 50;
    }
}

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees];

    // Input data for each employee
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter name for employee " << i + 1 << ": ";
        cin >> employees[i].name;

        cout << "Enter salary for employee " << i + 1 << ": $";
        cin >> employees[i].salary;

        cout << "Enter hours of work per day for employee " << i + 1 << ": ";
        cin >> employees[i].hoursWorked;
    }

    // Increase salary based on hours worked
    for (int i = 0; i < numEmployees; ++i) {
        increaseSalary(employees[i]);
    }

    // Print names and final salaries
    cout << setw(15) << "Name" << setw(20) << "Final Salary" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << setw(15) << employees[i].name << setw(20) << "$" << employees[i].salary << endl;
    }

    return 0;
}/*









    

                                
