#include<iostream>

#include<stdio.h>

using namespace std;

int main()

{

int n,i,temp;

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
cout<<"after left rotate by one :"<<" ";
temp=a[0];
//a[n-1]=temp;

for(int i =1;i<n;i++){


    a[i]=a[i+1];
}

a[n-1]=temp;
for(int i=0;i<n;i++)

{

cout<<a[i]<<" ";

}
//cout<<a[i]<<" ";

}



// 
//{
    // for(int i=low;i<high;i++)
//     low=a[0];
//     high=a[n-1];
    
//     while (low<high)
//     {

//     int temp=a[low];
//     a[low]=a[high];
//     a[high]=temp;
//     low++;
//     high--;
//     cout<<a[i]<<" ";
//     }
// }   /* code */

// }
// // low=0;
// // high=n-1;
// // while (low<high)
// // {
// //     int temp=a[low];
// //     a[low]=a[high];
// //     a[high]=temp;
// //     low++;
// //     high--;
// //     cout<<a[i]<<" ";
// //     /* code */
// // }
