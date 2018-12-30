#include<iostream>
#include<string>
int main()
{
    std::string s1("jeswin");
    std::string s2("win");
    std::cout<<s1.find(s2);   //returns position at which the substring starts.
                              //if not found returns string::npos ,which is the possible maximum size of string.means "until the end of the string".
                              /*if (str.find(str2) != string::npos) {
                            //.. found.
                        }     */
    return 0;
}
