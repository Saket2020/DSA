#include<iostream>

#include<stdio.h>

using namespace std;

int main()

{

int n,x,i;

cout<<"Enter the size of the array\n";

cin>>n;

int a[n];

cout<<"Enter the values\n";

for(int i=0;i<n;i++)

{

cin>>a[i];

}

cout<<"The values entered are\n";

for(int i=0;i<n;i++)

{

cout<<a[i]<<" ";

}

 int res = a[1]-a[0];
 for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
        res=max(res,a[j]-a[i]);
          cout<<res<<" "<<endl;
   //return res;

}