#include <iostream>
using namespace std;

int main()
{
    int var;
    int *ptr;
    int **pptr;
    var = 300;
    ptr = &var;
    pptr = &ptr;
    var = 10;
    ptr = &var;
    pptr = &ptr;
    // cout << "value of var = " << var << endl;
    // cout << "value of *ptr = " << *ptr << endl;
    // cout << "value of **pptr = " << **pptr << endl;
    cout<<"value of var = "<<var<<endl;
    cout<<"value of *ptr = "<<*ptr<<endl;
    cout<<"value of **pptr = "<<**pptr<<endl;


    

    return 0;
}