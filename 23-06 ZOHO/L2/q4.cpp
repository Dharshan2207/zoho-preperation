#include <bits/stdc++.h>
using namespace std;


int findMin(int arr[] , int n, int target){
	int left = 0, right = n - 1;
	
	while(left <= right){
		int mid = left + (right - left) / 2;
		
		if(arr[mid] == target){
			return mid;
		}
		if(arr[mid] > arr[left]){
			if(target >= arr[left] && target < arr[mid]){
				right = mid - 1;
			}
			else{
				left = mid + 1;
			}
		}
		else{
			if(target <= arr[right] && target > arr[mid]){
				left = mid + 1;
			}
			else{
				right = mid - 1;
			}
		}
	}
	return left;
}

int main(){
	int arr[] = {3, 4,5, 1, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int mini = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] < mini){
			mini = arr[i];
		}
	}
	int minIndex = findMin(arr, n, mini);
	cout << minIndex;
}
