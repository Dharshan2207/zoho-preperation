#include<bits/stdc++.h>
using namespace std;


string fixParentheses(string s){
	string res;
	int n = s.size();
	
	stack<int> st;
	vector<bool> toRemove(s.size(), false);
	
	for(int i = 0; i < n; i++){
		if(s[i] == '('){
			st.push(i);
		}
		else if(s[i] == ')'){
			if(st.empty()){
				toRemove[i] = true;
			}
			else{
				st.pop();
			}
		}
	}
	
	while(!st.empty()){
		toRemove[st.top()] = true;
		st.pop();
	}
	
	for(int i = 0; i < n; i++){
		if(toRemove[i] != true){
			res.push_back(s[i]);
		}
	}
	return res;
}


int main(){
	string s = "((abc)((de))";
	
	cout << fixParentheses(s) << "\n";
}
