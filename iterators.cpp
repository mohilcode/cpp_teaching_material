#include<bits/stdc++.h>
using namespace std;
 
#include<iostream>
using namespace std;

int main() {
    vector<int> v = {2, 3, 5, 6, 7};
    for(int i = 0; i < v.size(); ++i){
        cout << v[i]  << " ";
    }
    cout << endl;
    vector<int> ::iterator it = v.begin();
    for(it = v.begin(); it != v.end(); ++it){
        cout << (*it) << endl;
    }
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int, int>> ::iterator io;
    for(io = v_p.begin(); io != v_p.end(); ++io){
        cout << (*io).first << " " << (*io).second << endl;
    }
    for(io = v_p.begin(); io != v_p.end(); ++io){
        cout << io->first << " " << io->second << endl;
    }

    // (*it).first <=> (it->first)
}

