#include<bits/stdc++.h>
using namespace std;


int main(){
	int arr[] = {2, 1, 8, 7, 6, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int curr = n - 1;
	
	for(int i = (n-2); i >= 0; i--){
		if(arr[i] < arr[i + 1]){
			
			int mini = i + 1;
			for(int j = mini + 1; j < n; j++){
				if(arr[j] < arr[mini] && arr[j] > arr[i]){
					mini = j;
				}
			}
			
			swap(arr[mini], arr[i]);
			int left = i + 1;
			int right = n - 1;
				
			while(left < right){
				swap(arr[left], arr[right]);
				left++;
				right--;
			}
			
			break;
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
