#include<iostream>
#include <unordered_map>
using namespace std;
//The dot operator is applied to the actual object. The arrow operator is used with a pointer to an object
struct node{
    int data;
    node *next;

};

void add(int d,node* &head){
    node *newnode = new node;
    newnode->data = d;
    newnode->next = head;
    head = newnode;
}
void print(node *head){
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void answer1(node *head){
    unordered_map<int,int> map;
    node *prev=NULL;
    while(head != NULL)
    {
        if(map.find(head->data) == map.end()) {
            map[head->data] = 1;
            prev=head;

        }        //if the output of find is map.end()
        else{
            prev->next= head->next;
            free(head);
        }

        head=head->next;
    }

}

int main()
{
    node *head =NULL;
    add(10,head);
    add(27,head);
    add(38,head);
    add(10,head);
    add(38,head);
    add(46,head);
    add(90,head);
    add(100,head);
    add(10,head);
    cout<<"Orginal string:";
    print(head);
    answer1(head);
    cout<<"new string:";
    print(head);


    return 0;
}

//Note: In C++, the struct keyword is optional before in declaration of a variable. In C, it is mandatory.
