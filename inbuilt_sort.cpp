#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin() + 2, a.end());//Introsort - Mix of quicksort, heapsort and insertion sort (nlogn)
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

