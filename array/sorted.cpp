#include<iostream>
#include <vector>
#include<stdio.h>

using namespace std;

int main()

{

int n,x,i,j;

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
     for(int j=i+1;j<n;j++){

         if(a[j+1]>a[i])
             {
                 cout<<"is sorted"<<" ";
             }
          else{
            cout<<"unsorted"<<" " ;
           
          }   
     }
}

   
    
//  for(int i=0;i<n;i++)
//      for(int j=i+1;j<n;j++)
//          if(arr[j+1]<arr[i])
//              {
//                  cout<<"is sorted";
//              }
        //else{
//           //  cout<<"not sorted";
//         //} 
   