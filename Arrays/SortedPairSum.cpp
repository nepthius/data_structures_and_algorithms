#include<bits/stdc++.h>
using namespace std;
//Implemented a solution that used two pointers to the left and right of a sorted array. If the sum is greater then the left pointer will move up
//and if the sum is less then the right pointer will move down. Runs on O(n) complexity. 

pair<int, int> closestSum(vector<int> arr, int x){
    int right = arr.size()-1;
    int left = 0;
    int num1 = 0;
    int num2 = 0;
    int diff = INT_MAX;
    
    while(right>left){
        
        if(abs(arr[left]+arr[right]-x)<diff){
            num1 = arr[left];
            num2 = arr[right];
            diff = abs(arr[left] + arr[right] -x);
        }
        
        if(arr[left] + arr[right] > x)
            right--;
        
        else if(arr[left] + arr[right] < x)
            left++;
    }
    
    return {num1, num2};
}
