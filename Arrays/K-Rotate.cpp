#include<bits/stdc++.h>
using namespace std;
//rotates a function clockwise k times: O(n) complexity

vector<int> kRotate(vector<int> a, int k){
    
    for(int i=0;i<k;i++){
        int temp = a[a.size()-1];
        a.pop_back();
        a.insert(a.begin(),temp);
    }
    
    return a;
    
    
    
