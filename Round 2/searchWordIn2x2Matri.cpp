#include<bits/stdc++.h>
using namespace std;

int main(){
	string input = "WELCOMETOZOHOCORPORATION";
	int n = input.size();
	
	int count = 0;
	
	int sqrtOfInput = ceil(sqrt(n));
	
	char arr[sqrtOfInput][sqrtOfInput];
	
	for(int i = 0; i < sqrtOfInput; i++){
		for(int j = 0; j < sqrtOfInput && count < n; j++){
			arr[i][j] = input[count];
			count++;
		}
	}
	
	string target = "TOO";
	int index = 0;
	bool found = false;
	int foundIndexI = -1, foundIndexJ = -1;
	int foundEndIndexI = -1;
	int foundEndIndexJ = -1;
	
	for(int i = 0; i < sqrtOfInput; i++){
		for(int j = 0; j < sqrtOfInput; j++){
			int tI = i, tJ = j;
			index = 0;
			while(tJ < sqrtOfInput && index < target.size() && arr[tI][tJ] == target[index]){
				tJ++;
				index++;
			}
			if(index == target.size()){
				foundIndexI = i;
				foundIndexJ = j;
				foundEndIndexI = tI;
				foundEndIndexJ = tJ - 1;
				found = true;
				break;
			}
			
			tI = i, tJ = j;
			index = 0;
			while(tI < sqrtOfInput && index < target.size() && arr[tI][tJ] == target[index]){
				tI++;
				index++;
			}
			if(index == target.size()){
				foundIndexI = i;
				foundIndexJ = j;
				foundEndIndexI = tI - 1;
				foundEndIndexJ = tJ;
				found = true;
				break;
			}
			
		}
		
	}
	
	if(found){
		cout << foundIndexI << " " << foundIndexJ << " " << foundEndIndexI << " " << foundEndIndexJ << " ";
	}
	else{
		cout << "Not found";
	}
	
}
