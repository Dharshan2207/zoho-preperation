#include<bits/stdc++.h>
using namespace std;

int findAverage(int arr[], int n){
	int avg = 0;
	
	for(int i = 0; i < n; i++){
		avg += arr[i];
	}
	return avg / n;
}
int closestToAvg(int arr[], int n, int avg){
	int minDistance = abs(arr[0] - avg);
	int closestToAverage;
	
	for(int i = 0; i < n; i++){
		int diff = abs(arr[i] - avg);
		if(diff < minDistance){
			minDistance = diff;
			closestToAverage = arr[i];
		}
	}
}
int main(){
	int arr[] = {17, 42, 9, -28, 6, 2, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int avg = findAverage(arr, n);
	
	
	cout << closestToAvg(arr, n, avg);
}
