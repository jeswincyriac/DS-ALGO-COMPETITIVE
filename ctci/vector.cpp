#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> g1;
    g1.push_back(7);
    g1.push_back(6);
    g1.push_back(8);
    g1.push_back(9);
    g1.push_back(45);
    g1.push_back(50);
    g1.push_back(46);
    g1.pop_back();//remove elements
    cout<<g1.front()<<*g1.begin()<<g1.back()<<g1.at(3);//begin is an iterator

    return 0;

}
