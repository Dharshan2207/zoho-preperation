#include<bits/stdc++.h>
using namespace std;

int main(){
	char arr[] = {'G', 'B', 'R', 'R', 'B', 'R', 'G'};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int left = 0;
	
	while(arr[left] == 'R'){
		left++;
	}
	for(int i = 0; i < n; i++){
		if(arr[i] == 'R'){
			swap(arr[i] , arr[left]);
			left++;
		}
	}
	
	int right = n-1;
	
	while(arr[right] == 'B'){
		right--;
	}
	
	for(int i = n-1; i >= left; i--){
		if(arr[i] == 'B'){
			swap(arr[i], arr[right]);
			right--;
		}
	}
	
	for(char ch : arr){
		cout << ch << " ";
	}
}
