#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name="sadman";
    string name2="sakib";
    // String length
    cout<<"First String Length: "<<name.size()<<endl;
    //String concat
    cout<<"String concat result "<<name+name2<<endl;
    // print the string by each character
    for (auto i = 0; i < name.size(); i++)
    {
        cout<<name[i]<<endl;
    }
    return 0;
}