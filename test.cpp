#include<bits/stdc++.h>
using namespace std;
int main()
{
   int y;
   cout<<"Enter Number: ";
   cin>>y;
   int x;
   cout<<"Enter Limit: ";
   cin>>x;
   int i=1;
   while(i<=x){
    cout<<y<<" x "<<i<<" = "<<y*i<<endl;
    i++;
   }
}