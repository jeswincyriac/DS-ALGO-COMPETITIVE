#include<iostream>
//(o)=(n)
int main()
{
    //std::cout << "hello";

    char str[] = "My name is Jeswin        ";
    int spacecount=0,truelen=17,newlen=0,j=0,i=0;
    for (i=0;i<truelen;i++)
    {
        if(str[i] == ' ')
         spacecount++;
    }

    newlen=truelen+spacecount*2;
    j=newlen-1;
    for(i=truelen-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            str[j--]=str[i];
        }
        else
        {
            str[j--]='0';
            str[j--]='2';
            str[j--]='%';
        }
    }
    std::cout<<str;

    return 0;

}


//g++ can mainly compile c++
/*gcc is mainly for c,also used for c++ with additional options
new standards require main to return*/
