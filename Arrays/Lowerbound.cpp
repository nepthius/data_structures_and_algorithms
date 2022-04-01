#include<bits/stdc++.h>
using namespace std;
//Uses O(n) complexity to find the given input or the lowerbound of that input. If the lowerbound is higher than the given value -1 is returned.

int lowerBound(vector<int> A, int Val) {
    
    int min = -1;
    
    for(int i = 0; i<A.size(); i++){
        if(A[i] == Val)
            return Val;
        if(A[i] < Val && min<A[i])
            min = A[i];
        
    }
    
    return min;
    
}
