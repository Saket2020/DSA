#include<iostream>

#include<stdio.h>

using namespace std;

int main()

{

int n,i,cur=0;

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
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        if(a[j]==1){
            cur++;
        }

    }
        
}
