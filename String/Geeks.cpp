#include<iostream>
#include<string.h>
using namespace std;

int main(){
 char str1[] = "gfg";
    cout << str1<<endl;
 cout <<"size of string "<< sizeof(str1)<<endl;//size of string


    // char str[] = {'g', 'f', 'g'};
    // cout << str;

    string str = "geeksforgeeks";
    cout <<"String length  "<< str.length() << " "<<endl;
    str = str + "xyz";
    cout << str << " "<<endl;
    cout << str.substr(1, 3) << " "<<endl;
    cout << str.find("eek") << " "<<endl;

    return 0;
}