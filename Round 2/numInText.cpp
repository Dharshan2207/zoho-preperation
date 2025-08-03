#include<bits/stdc++.h>
using namespace std;

string numberToText(int n){
	string text[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
	"thirteen", "fourteen", "fifiteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", 
	"thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred" , "and"};
	
	int temp = n;
	string result = "";
	int place = 1;
	int lastDig = 0;
	
	while(temp > 0){
		int rem = temp % 10;
		if(place == 1){
			if(rem != 0){
				result = text[rem - 1] + " " + result + " ";
				lastDig = rem;
			}
		}
		else if(place == 2){
			if(rem == 1){
				result = "";
				result = text[lastDig + 9] + result + " ";
			}
			else{
				int index = rem - 20 / 10;
				result = text[19 + index] + " "+ result + " ";
			}
		}
		else if(place == 3){
			result = text[rem - 1] + " " + text[27] + " " + text[28] + " " + result + " ";
		}
		place++;
		temp /= 10;
	}
	return result;
}


int main(){
	int n = 720;
	cout << numberToText(n);
	
}
