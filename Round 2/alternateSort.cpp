#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for(int index = 0; index < n; index += 2){
		int mini = arr[index], maxi = arr[index];
		int minIndex = index, maxIndex = index;
		
		for(int j = index; j < n; j++){
			if(arr[j] > maxi){
				maxi = arr[j];
				maxIndex = j;
			}
			if(arr[j] < mini){
				mini = arr[j];
				minIndex = j;
			}
		}
		
		swap(arr[index], arr[maxIndex]);
		
		if(minIndex == index){
			minIndex = maxIndex;
		}
		if(index + 1 < n){
			swap(arr[index + 1], arr[minIndex]);
		}
		
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
}
