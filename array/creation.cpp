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
cout<<"enter the element to be searchhed from arr:";
cin>>x;
for(i=0;i<n;i++)
{
    if(a[i]==x)
    {
        cout<<i;
    }
  // else{
  //  cout<<-1;
 //  }
    
}
}