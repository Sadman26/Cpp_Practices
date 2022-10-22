#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=2020;
    if(x%400==0){
        cout<<"leap year";
    }
    else if(x%100==0){
        cout<<"Not leap year";
    }
    else if(x%4==0){
        cout<<" leap year";
    }
    else{
        cout<<"Not leap year";
    }
}