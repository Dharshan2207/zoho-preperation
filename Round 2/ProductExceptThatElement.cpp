#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int arr[] = {1,2,0,9,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int product = 1;
	int zeroCount = 0;
	
	for(int i = 0; i < n; i++){
		if(arr[i] == 0 && zeroCount == 0){
			zeroCount++;
		}
		else{
			product = product * arr[i];
		}
	}
	
	int op[n];
	for(int i = 0; i < n; i++){
		if(zeroCount == 1){
			if(arr[i] == 0){
				op[i] = product;
			}
			else{
				op[i] = 0;
			}
		}
		else{
			op[i] = product / arr[i];
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << op[i] << " ";
	}
}
