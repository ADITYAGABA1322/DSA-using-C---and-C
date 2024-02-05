#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    char name[20];
    int marks;
    float per;
    void getdata()
    {
        cout << "enter rollno,name,marks" << endl;
        cin >> rollno >> name >> marks;
    }
    void display()
    {
        cout << "rollno=" << rollno << endl;
        cout << "name=" << name << endl;
        cout << "marks=" << marks << endl;
        per = (float)marks / 500 * 100;
        cout << "per=" << per << endl;
        // cout<<"per="<<per<<endl;
    }
};
int main()
{
    student s[4];
    for (int i = 0; i < 4; i++)
    {
        s[i].getdata();
    }
    for (int i = 0; i < 4; i++)
    {
        s[i].display();
    }
    // int pos = 0;

    // for (int i = 0; i < 4; i++)
    // {
    //     if (s[i].per >= 90)
    //     {
    //         pos = i;
    //         break;
    //     }
    // }
    // cout << "first position of 4 students is " << s[pos].name << endl; // +1 because pos starts from 0
    int pos = 0;
    float max = s[0].per;
    for (int i = 0; i < 4; i++)
    {
        if (s[i].per > max)
        {
            max = s[i].per;
            pos = i;
        }
    }
    cout << "student with highest percentage is " << s[pos].name << endl;

    return 0;
}



