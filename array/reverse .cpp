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