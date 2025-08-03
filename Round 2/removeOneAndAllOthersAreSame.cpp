#include<bits/stdc++.h>
using namespace std;

bool sameCount(int n, string input){
	
	for(int i = 0; i < n; i++){
		string modified = input.substr(0, i) + input.substr(i+1);
		int freq[26] = {0};
		
		for(int i = 0; i < n; i++){
			char c = modified[i];
			freq[c - 'a']++;
		}
		
		unordered_set<int> freqSet;
		for(int i = 0; i < 26; i++){
			if(freq[i] != 0){
				freqSet.insert(freq[i]);
			}
		}
		
		if(freqSet.size() == 1){
			return true;
		}
	}
	return false;
}

int main(){
	string input = "cdcddca";
	int n = input.size();
	
	if(sameCount(n, input)){
		cout << "True";
	}
	else{
		cout << "False";
	}
}
