#include <bits/stdc++.h>
using namespace std;


int findSqr(int input){
	if(input <= 0){
		return -1;
	}
	int decimalsTruncated;
	int left = 1;
	int right = input / 2;
	
	while(left < right){
		int mid = left + (right - left) / 2;
		
		if((mid * mid) == input){
			return mid;
		}
		else if((mid * mid) > input){
			decimalsTruncated = mid - 1;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return decimalsTruncated;
	
	
	
}

int main(){
	int input;
	cin >> input;
	int sqr = findSqr(input);
	
	if(sqr != -1){
		cout << "Square root : " << sqr;
	}
	else{
		cout << "Validation failed";
	}
}
