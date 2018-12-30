#include <iostream>
#include <bitset>
using namespace std;
#define M 32


int main(){
   //refer examples at https://www.geeksforgeeks.org/c-bitset-and-its-application/
   bitset<M> bset1;

   // bset2 is initialized with bits of 20
   bitset<M> bset2(20);

   // bset3 is initialized with bits of specified binary string
   bitset<M> bset3(string("1100")); ;
   cout<<bset3;
    return 0;
}
