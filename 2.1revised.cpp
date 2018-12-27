#include<iostream>
#include<unordered_map>
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
    void removedups()
    {
        unordered_map<int,int> map;
        node *temp = head;
        node *prev;
        while(temp != NULL)
        {
            if (map.find(temp->data) == map.end())
            {
                map[temp->data] = 1;
                prev = temp;
                temp = temp->next;
            }
            else
            {
                prev->next = temp->next;
                node *del = temp;
                temp = temp->next;
                free(del);
            }


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


};

int main()
{
    linkedlist a;
    a.addnode(1);
    a.addnode(5);
    a.addnode(5);
    a.addnode(6);
    a.addnode(8);
    a.addnode(1);
    a.addnode(8);
    a.print();
    a.removedups();
    cout<<endl;
    a.print();
    return 0;
}
