#include <iostream>
#include <bitset>
#include<string>
using namespace std;
#define M 32

int main(){
//    bitset<M> n(string("10000000000"));
    int i=2,j=6;
    string  s;
    bitset<M> n;
    bitset<M> m;
    cout<<"enter n as a string"<<endl;//else u will have to get the input and set that position 1 if it is 1else 0 and terminatewhen no input
    //getline(cin,s);
    s="10000000000";
    n = bitset<M>(s);
    cout<<n<<endl;
    cout<<"enter m as a string"<<endl;
    //getline(cin,s);
    s="10011";
    m = bitset<M>(s);
    cout<<m<<endl;
    //cout<<~(bitset<M> (0));
    bitset<M> allone = ~(bitset<M> (0));
    bitset<M> clearedn=(n&((allone<<j+1)|(allone>>32-i)));
    //cout<<clearedn;
    cout<<(clearedn|m<<2);
    return 0;
}
