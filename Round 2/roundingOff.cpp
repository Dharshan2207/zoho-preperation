#include<bits/stdc++.h>
using namespace std;

int nearest10Multiple(int n){
	int lastDig = n % 10;
	
	if(lastDig >= 5){
		n = n + (10 - lastDig);
	}
	else{
		n = n - lastDig;
	}
	return n;
}



int main(){
	int ip = 4727;
	
	cout << nearest10Multiple(ip);
}
