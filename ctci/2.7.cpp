#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
} *head = NULL,*loop=NULL;

void addnode(int data){
    if(head == NULL){
        head = new node;
        head->data =data;
        head->next = NULL;
        cout<<data;
    }
    else
    {
        node *tmp = head;
        while(tmp->next!=NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new node;
        tmp = tmp->next;
        if (data == 6)
        {
            loop = tmp;
        }
        tmp ->data = data;
        cout<<data;
        tmp->next = NULL;
    }
}

void findloop(){
    node *slow=head->next,*fast=head->next->next;
    while(slow!=fast)
    {
        slow = slow->next;
        fast =fast->next->next;
    }
    slow = head;
    while(slow!=fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    cout<<"loop at "<<slow->data;
}

void circle(){
    node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = loop;
}

int main(){
    addnode(1);
    addnode(4);
    addnode(5);
    addnode(6);
    addnode(7);
    addnode(8);
    addnode(54);
    addnode(43);
    addnode(65);
    addnode(34);
    circle();
    findloop();
    return 0;
}
