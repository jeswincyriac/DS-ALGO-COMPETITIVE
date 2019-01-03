#include<iostream>
using namespace std;

/*struct node{
  int data;
  struct node *right,*left;
 }

int main(){
struct node *root = new node;
root->data=2;
root->right = new node;
root->right->data = 3;
root->left = new node;
root->left->data =4;


return 0;
}*/

struct node{
int data;
struct node *right,*left;
node(int d){
    data=d;
left=right=NULL;
}
};
void postorder(struct node *n){
if(n==NULL)
return;
postorder(n->left);
postorder(n->right);
cout<<n->data;
}

void preorder(struct node *n){
if(n==NULL)
return;
cout<<n->data;
preorder(n->left);
preorder(n->right);
}
void inorder(struct node *n){
if(n==NULL)
return;
inorder(n->left);
cout<<n->data;
inorder(n->right);
}

int main(){
struct node *root = new node(20);
root->left=new node(1);
root->right = new node(30);
root->left->left = new node(21);
root->left->right = new node(23);
root->right->left = new node(24);
root->right->right = new node(45);
cout<<"inorder:";
inorder(root);
cout<<endl<<"postorder";
postorder(root);
cout<<endl<<"preorder";
preorder(root);
return 0;
}
/*
              20
        1           30
    21    23      24  45
*/
