// #include <iostream>
// #include <stdio.h>
// using namespace std;

// // Base Class - basicInfo
// class basicInfo
// {
// protected:
//     char name[30];
//     int empId;
//     char gender;

// public:
//     void getBasicInfo(void)
//     {
//         cout << "Enter Name: ";
//         cin.getline(name, 30);
//         cout << "Enter Emp. Id: ";
//         cin >> empId;
//         cout << "Enter Gender: ";
//         cin >> gender;
//     }
// };

// // Base Class - deptInfo
// class deptInfo
// {
// protected:
//     char deptName[30];
//     char assignedWork[30];
//     int time2complete;

// public:
//     void getDeptInfo(void)
//     {
//         cout << "Enter Department Name: ";
//         cin.ignore(1);
//         cin.getline(deptName, 30);
//         cout << "Enter assigned work: ";
//         fflush(stdin);
//         cin.getline(assignedWork, 30);
//         cout << "Enter time in hours to complete work: ";
//         cin >> time2complete;
//     }
// };

// // final class (Derived Class)- employee
// class employee : private basicInfo, private deptInfo
// {
// public:
//     void getEmployeeInfo(void)
//     {
//         cout << "Enter employee's basic info: " << endl;
//         // call getBasicInfo() of class basicInfo
//         getBasicInfo(); // calling of public member function
//         cout << "Enter employee's department info: " << endl;
//         // call getDeptInfo() of class deptInfo
//         getDeptInfo(); // calling of public member function
//     }
//     void printEmployeeInfo(void)
//     {
//         cout << "Employee's Information is: " << endl;
//         cout << "Basic Information...:" << endl;
//         cout << "Name: " << name << endl;         // accessing protected data
//         cout << "Employee ID: " << empId << endl; // accessing protected data
//         cout << "Gender: " << gender << endl
//              << endl; // accessing protected data

//         cout << "Department Information...:" << endl;
//         cout << "Department Name: " << deptName << endl;            // accessing protected data
//         cout << "Assigned Work: " << assignedWork << endl;          // accessing protected data
//         cout << "Time to complete work: " << time2complete << endl; // accessing protected data
//     }
// };

// int main()
// {
//     // create object of class employee
//     employee emp;

//     emp.getEmployeeInfo();
//     emp.printEmployeeInfo();

//     return 0;
// }

#include <iostream>
#include <stdio.h>
using namespace std;

class basicInfo
{
protected:
    char name[30];
    int empId;
    char gender;

public:
    void getBasicInfo(void)
    {
        cout << "Enter Name: ";
        cin.getline(name, 30);
        cout << "Enter Emp. Id: ";
        cin >> empId;
        cout << "Enter Gender: ";
        cin >> gender;
    }
};
class deptInfo
{
protected:
    char deptName[30];
    char assignedWork[30];
    int time2complete;

public:
    void getDeptInfo(void)
    {
        cout << "Enter Department Name: ";
        cin.ignore(1);
        cin.getline(deptName, 30);
        cout << "Enter assigned work: ";
        fflush(stdin);
        cin.getline(assignedWork, 30);
        cout << "Enter time in hours to complete work: ";
        cin >> time2complete;
    }
};
class employee : private basicInfo, private deptInfo
{
public:
    void getEmployeeInfo(void)
    {
        cout << "Enter employeee's basic info: " << endl;
        getBasicInfo();
        cout << "Enter employee's department info: " << endl;
        getDeptInfo();
    }
    void printEmployeeInfo(void)
    {
        cout << "Employee's Information is: " << endl;
        cout << "Basic Information..." << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Gender: " << gender << endl
             << endl;

        std::cout << "Department Information...:" << std::endl;

        std::cout << "Department Name" << deptName << std::endl; 
        cout << "Assigned Work: " << assignedWork << endl;
        cout << "Time to complete work: " << time2complete << endl;
    }
};

int main()
{
    employee emp;
    emp.getEmployeeInfo();
    emp.printEmployeeInfo();

    return 0;
}