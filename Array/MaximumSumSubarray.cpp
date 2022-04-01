#include<bits/stdc++.h>
using namespace std;
//Used Kadane's algorithm to create a solution with complexity O(n)

int maxSumSubarray(vector<int> A) {
    int max = A[0];
    int temp = 0;
    
    for(int i=0;i<A.size();i++){
        temp+=A[i];
        if(max<temp)
            max = temp;
        if(temp<0)
            temp = 0;
    }
    return max;
}
