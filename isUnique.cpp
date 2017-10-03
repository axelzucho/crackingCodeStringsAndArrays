#include <iostream>
#include <hash_map>

using namespace std;

bool usingStructures(string ex){
    hash<bool> check;
    for(auto i: ex){
        if(check[i]) return false;
        check[i] = true;
    }
    return true;
}

int main(){
    cout << usingStructures("Axelf");
}