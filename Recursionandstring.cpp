#include<iostream>
using namespace std;
int removeX(char s[]){
    if (s[0] == '\0')
    {
        return 0;
    }
    if(s[0] != 'x'){
        removeX(s+1);
    }
    else{
        int i=1;
        for (; s[i] != '\0'; i++)
        {
            s[i-1] = s[i];
        }
        s[i-1] = s[i];
        removeX(s);

        
    }
    
}
int lenght(char s[] ){
    if (s[0] == '\0')
    {
        return 0;
    }
    int smallLenght = lenght(s+1);
    return smallLenght+1;
    
}


int main(){
    char str[100];
    cin>>str;
    int l = lenght(str);
    cout<<l<<endl;

    removeX(str);
    cout<<str<<endl;
    l= lenght(str);
    cout<<l<<endl;

    return 0;
    

   


}