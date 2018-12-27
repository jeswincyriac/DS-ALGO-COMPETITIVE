#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;
    s.push(8);
    s.push(81);
    s.push(82);
    s.push(83);
    s.push(84);
//pop doesnt returns
    cout<<s.top();
    s.pop();
    s.push(8);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}
