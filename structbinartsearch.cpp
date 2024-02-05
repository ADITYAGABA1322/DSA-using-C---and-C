#include<iostream>
using namespace std;

class Employee{
    public:
        int id;
        string name;
        Employee *left, *right;
        Employee(int id, string name){
            this->id = id;
        }
};


int main(){
    
    return 0;
}