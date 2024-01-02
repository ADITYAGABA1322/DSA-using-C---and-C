#include<iostream>
using namespace std;
 int main(){
    float p , t , r, si;
    cout<<"Enter the principle amount ";
    cin>>p;
    cout<<"Enter the time in years ";
    cin>>t;
    cout<<"Enter the rate of interest ";
    cin>>r;
    si=p*t*r/100;
    cout<<"Simple interest is " <<si;
    return 0;

   
    
 }
