#include<iostream>
#include<vector>
#include<stack>
using namespace std;
#define maxcap 3  //writing style,so that my colleges may not change it

class setofstacks{
    vector<stack<int> *>  v;
    stack<int> *curr=NULL,*c=NULL;
public:
    void push(int data)
    {
        if(curr == NULL)
        {
            curr = new stack<int>;
            v.push_back(curr);
            curr->push(data);
        }
        else if(curr->size()>=maxcap){
            curr = new stack<int>;
            v.push_back(curr);
            curr->push(data);
        }
        else{
            curr->push(data);
        }
    }

    int pop()
    {
       if(curr == NULL){
       cout<<"empty";
       return 0;
       }
       else if(curr->size()==1){
           int d = curr->top();
           curr->pop();
           v.pop_back();
           curr = v.back();
           return d;
       }
       else{
           int d = curr->top();
           curr->pop();
           return d;
       }


    }

};
int main()
{   int x=0;
    setofstacks s;
    s.push(4);
    s.push(41);
    s.push(42);
    s.push(43);
    s.push(44);
    s.push(45);
    s.push(46);
    s.push(47);
    s.push(48);
    s.push(49);
    s.atindex(5);
    while(x <10){
    cout<<s.pop();
    x++;
    }


    return 0;
}
