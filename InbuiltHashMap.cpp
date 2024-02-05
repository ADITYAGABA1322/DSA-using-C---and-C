// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     unordered_map<string, int> ourmap;
//     // insert
//     pair<string, int> p("abc", 1);
//     ourmap.insert(p);

//     ourmap["def"] = 2;

//     // find or access
 
//     cout << ourmap["abc"] << endl;
//     cout << ourmap.at("abc") << endl;
//     // cout<<ourmap.at("ghi")<<endl;
//     cout << "Size: " << ourmap.size() << endl;
//     cout << ourmap["ghi"] << endl;
//     cout << "Size: " << ourmap.size() << endl;
//     // check Presense
//     if (ourmap.count("ghi") > 0)
//     {
//         cout << "ghi is present" << endl;
//     }

//     // erase
//     ourmap.erase("ghi");
//     cout << "Size: " << ourmap.size() << endl;
//     if (ourmap.count("ghi") > 0)
//     {
//         cout << "ghi is present" << endl;
//     }

//     return 0;
// }



#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string ,int> ourmap;
    pair<string ,int> p("abc" ,1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    cout<< ourmap["abc"]<<endl;
    cout<< ourmap.at("abc") << endl;
    cout<< "Size: "<<ourmap.size()<<endl;
    cout<< ourmap["ghi"]<<endl;
    cout<< "Size: "<<ourmap.size()<<endl;
    if (ourmap.count("ghi")>0)
    {
        cout<< "ghi is present"<<endl;
    }
    ourmap.erase("ghi");
    cout<< "Size: "<<ourmap.size()<<endl;
    if (ourmap.count("ghi")>0)
    {
        cout<< "ghi is present "<<endl;
    }

    
    

    return 0;
}