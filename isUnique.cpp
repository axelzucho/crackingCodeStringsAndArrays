#include <iostream>
#include <hash_map>

using namespace std;

bool usingStructures(string ex){
    map<int,bool> check;
    for(auto i: ex){
        if(check[i]) return false;
        check[i] = true;
    }
    return true;
}

bool notUsingStructures(string ex){
    sort(ex.begin(),ex.end());
    for(int i = 0; i < ex.size() - 1; ++i) if (ex[i] == ex[i+1]) return false;
    return true;
}