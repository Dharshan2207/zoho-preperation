#include<bits/stdc++.h>
using namespace std;


void customSorting(int index, int end, int incrementer, int arr[], int evenOddChecker){
	while(index != end){
		int mini = index;
		for(int i = index + incrementer; i != end; i += incrementer){
			if(arr[i] % 2 == evenOddChecker && arr[i] < arr[mini] && arr[mini] % 2 == evenOddChecker){
				mini = i;
			}
		}
		if(arr[index] % 2 == evenOddChecker && arr[mini] % 2 == evenOddChecker){
			swap(arr[mini], arr[index]);
		}
		index += incrementer;
	}
}


int main(){
	int arr[] = {5, 8, 11, 6, 2, 1, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int left = 0;
	int right = n - 1;
	int oddCount = 0;
	
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 1){
			oddCount++;
		}
	}
	
	customSorting(left, oddCount, 1, arr, 1);
	
	customSorting(right, oddCount, -1, arr, 0);
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
