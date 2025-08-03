#include<bits/stdc++.h>
using namespace std;

void printDiagonal(int arr[][3], int n){
	int i = n-1, j = n-1;
	int count = 0;
	
	while(count < (n*n)){
		int tI = i, tJ = j;
		
		while(tI >= 0 && tJ <= n-1){
			cout << arr[tI][tJ] << " ";
			
			tI--;
			tJ++;
			
			count++;
		}
		if(tI < 0){
			i--;
		}
		else if(tJ >= n){
			j--;
		}
	}
}
int main(){
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int n = 3;
	
	printDiagonal(arr, n);
}
