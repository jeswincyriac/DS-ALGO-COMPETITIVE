#include<iostream>
using namespace std;
int get(int n,int i)
{
    if( (n&(1<<i)) !=0)    //to chec the last digit of n just n&1 =0 if 0 else 1.so shift the number then loop
    return 1;
    else
    return 0;
}
int main(){

    int n=1775,i=0,v=0,curr=0,prev=0,max=0;
    while(i<32){
      v=get(n,i);
      if(v==1)
      {
          curr=curr+1;
      }
      else
      {   if((prev+curr+1)>max)
            max=prev+curr+1;
          prev=curr;
          curr=0;
      }

    i++;
    }
    cout<<max;
return 0;
}
