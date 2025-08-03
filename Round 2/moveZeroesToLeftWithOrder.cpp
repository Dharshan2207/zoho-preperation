#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {0, 1, 0, 10, 9, 0, 0, 2};  //0 0 1 0 10 9 0 2  ---> 0 0 0 1 0 10 9 2
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int write = n-1;
	
	for(int i = n-1; i >= 0; i--){
		if(arr[i] != 0){
			arr[write] = arr[i];
			write--;
		}
	}
	
	while(write >= 0){
		arr[write] = 0;
		write--;
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
