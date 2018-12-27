#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class linkedlist{
private:
    node *head ;
public:
    linkedlist()
    {
        head=NULL;

    }
    void addnode(int value)
    {
        if(head == NULL)
        {
            head = new node;
            head->data = value;
            head->next = NULL;
        }
        else{
            node *tmp = new node;
            tmp->next = head;
            tmp->data = value;
            head = tmp;

        }


    }
    void print()
    {
        node *tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp->data<<" ";
            tmp = tmp->next;
        }

    }

    void findkth(int k)
    {
        int c=0;
        node *kth = head,*tmp = head;
        while(tmp != NULL)
        {   c=c+1;
            tmp = tmp->next;
            if (c>=k && tmp!=NULL)
            kth = kth->next;
        }
        cout<<"kth element is"<<kth->data<<" ";

    }
};

int main()
{
    linkedlist a;
    a.addnode(1);
    a.addnode(5);
    a.addnode(4);
    a.addnode(6);
    a.addnode(8);
    a.addnode(1);
    a.addnode(8);
    a.print();
    //enter the k cin>>k
    a.findkth(4);
    cout<<endl;
    return 0;
}
