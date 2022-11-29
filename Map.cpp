#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    unordered_map<string,int>G;
    G["C++"]=20;
    G["GeeksForGeeks"]=100;
    G["DSA"]=10;
    for(auto x: G){//Map Loop
        cout<<x.first<<x.second<<endl;
    }
    if(G.find("DSA")!=G.end()){//find method
        cout<<"Found"<<endl;}
        else{
            cout<<"not find"<<endl;
        }
        cout<<G.size()<<endl;

         for(auto it=G.begin();it!=G.end();it++)//Start End
        cout<<(it->first)<<" "<<(it->second)<<endl;
        // G.erase("DSA");
        //        cout<<G.size()<<endl;

    
return 0;
}