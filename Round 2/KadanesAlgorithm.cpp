#include<bits/stdc++.h>
using namespace std;

int longestSubarrayLength(int arr[], int n){
	int currSum = 0;
	int maxSum = INT_MIN;
	
	int start = 0, end = 0, startIndex = 0;
	
	for(int i = 0; i < n; i++){
		currSum += arr[i];
		
		if(currSum > maxSum){
			maxSum = currSum;
			end = i;
			start = startIndex;
		}
		
		if(currSum < 0){
			currSum = 0;
			startIndex = i + 1;
		}
	}
	
	return (end - start + 1);
}


int main(){
	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << longestSubarrayLength(arr, n);
}
