#include<iostream>
#include<string>
int main()
{
    std::string str="aaabbbbccddddd";
    std::string new1 ="";
    if(str.size()==0)
    return 0;
    int c=1;
    for(int i=1;i<str.size();i++)
    {
        if(str[i]==str[i-1])
        {
         //std::cout<<str[i-1];
         c++;

        }
        else
        {
            new1+=str[i-1];
            new1+=std::to_string(c);
        //    std::cout<<new1;
            c=1;
        }
     //  new1=new1+str[i];

    }
    new1+=str[str.size()-1];
    new1+=std::to_string(c);;
    std::cout<<new1;

    return 0;
}
