#include <bits/stdc++.h>
using namespace std;

int calculateJumps(int arr[], int n){
	
	int jumps = 0;
	int maxJump = 0;
	int jumpSteps = 0;
	int maxIndex;
	
	int i = 0;
	while(i < n){
		if(i + arr[i] == n - 1){
			jumps++;
			return jumps;
		}
		maxJump = arr[i];
		maxIndex = -1;
		for(int j = i + 1; j <= i + arr[i]; j++){
			if(arr[j] > maxJump){
				maxJump = arr[j];
				maxIndex = j;
			}
		}
		jumps++;
		if(maxIndex == -1){
			i += arr[i];
		}
		else{
			i = maxIndex;
		}
		
	}
	return jumps;
}

int main(){
	int arr[] = {2, 1, 1, 1, 1, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int jumps = calculateJumps(arr, n);
	
	cout << jumps;
	
	
}
