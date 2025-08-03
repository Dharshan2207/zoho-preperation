#include<bits/stdc++.h>
using namespace std;

int closestSumCalc(int arr[] ,int n, int k){
	
	int closestSum = arr[0] + arr[1];
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int sum = arr[i] + arr[j];
			int diff = abs(sum - k);
			int closestDiff = abs(closestSum - k);
			
			if(diff < closestDiff){
				closestSum = sum;
			}
		}
	}
	
	return closestSum;
}

int main(){
	int arr[] = {-1, -4, 0, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int k = 1;
	
	cout << closestSumCalc(arr, n, k);
}
