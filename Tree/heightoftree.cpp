#include<iostream>
using namespace std;
struct Node {

    int key;
    int height(Node *root);
    struct Node *left, *right;
    Node(int k) {
        key=k;
        left=right=NULL;
        }
    };
    int main()

 {
  Node *root =new Node(10);
  root->left=new Node(20);
  root-> right=new Node(30);
  root->left->left=new Node(40);
 };
 
  if (root==NULL){

 
        return 0;
        };
else{
        return max(height(root->left),height(root->right))+1;
}