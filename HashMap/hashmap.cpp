#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;


int main(){

    //creation
    map<string, int>m;
    // unordered_map<string, int>m;

    //insertion
    //different ways to insert
    //1
    pair<string,int>p = make_pair("mithu",3);
    m.insert(p);

    //2
    pair<string,int>pair2("jeebachh",2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //erase 1 and put 2
    m["mera"] = 2;

    //searching in map
    cout<<m["mithu"]<<endl;
    cout<<m.at("mera")<<endl;

    cout<<m["unknown"]<<endl;

    //size
    cout<<m.size()<<endl;

    //to check present
    cout<<m.count("mera")<<endl;

    //erase
    m.erase("mera");
    cout<<m.size()<<endl;

    //accessing all data from map
    //iterator
    map<string,int>:: iterator it = m.begin();//creating an iterator
    while (it != m.end())
    {
      cout<<it->first<<" "<<it->second<<endl;
      it++;
    }
    
    return 0;
}