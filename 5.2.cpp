#include<iostream>
#include<bitset>
using namespace std;

int main(){
    double n=0.7;
    bitset<32> b;
    int i=0;
    //b.set(0);puts 1 at right most
    while(n>0&&i<32){
        n=n*2;
        //cout<<n;
        if(n>=1)
        {
            b=b<<1;
            b.set(0);
            n=n-1;
        }
        else
        {
            b=b<<1;
        }
        i++;

    }
    if(i>31){
        cout<<"error";
    }
    else
    cout<<b;
    return 0;

}
