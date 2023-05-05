#include<iostream>

#include<stdio.h>

using namespace std;

int main()

{

int n,i;

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

int x;
cout<<" enter the elements to be deleted ";
cin>>x;
for(int i=0;i<n;i++)

if(a[i]==x)
break;
if(i==n)
return n;
for(int j=i;j<n-1;j++)
a[j]=a[j+1];
cout<<a[i];
return 0;
}
        
    
