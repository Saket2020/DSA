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
int temp[n];
int y=1;
temp[0]=a[0];
for(int i=0;i<n;i++){
    if(temp[y-1]!=a[i]){
        temp[y]=a[i];
        y++;
    }
}
//cout<<a[i]<<" ";
for(int i=0;i<n;i++)
{
    a[i]=temp[i];
    cout<<a[i]<<" ";

}
//cout<<a[i]<<" ";
// a[i]=temp[i];
// cout<<a[i]<<" ";

//5return x;
///cout<<a[i]<<" ";

}

// int temp[n];
// int y=1;
// temp[0]=a[0];
// for(int i=0;i<n;i++){
//     if(temp[y-1]!=a[i]){
//         temp[y]=a[i];
//         y++;
//     }
// }
// for(int i=0;i<n;i++)
// a[i]=temp[i];
// return x;
