#include<bits/stdc++.h>
using namespace std;


int calculateWeight(int num){
	int weight = 0;
	if(num % 2 == 0){
		weight += 3;
	}
	if(num % 4 == 0 && num % 6 == 0){
		weight += 4;
	}
	if(((int)sqrt(num) * (int)sqrt(num)) == num){
		weight += 5;
	}
	return weight;
}


int main(){
	
	int arr[] = {10, 36, 54,89,12};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	vector<pair<int, int>> weights;
	
	for(int i = 0; i < n; i++){
		int weight = calculateWeight(arr[i]);
		weights.push_back({arr[i], weight});
	}
	
	sort(weights.begin(), weights.end(), [](const pair<int, int> &a, const pair<int, int> &b){
		return a.second < b.second;
	});
	
	for(int i = 0; i < weights.size(); i++){
		cout << weights[i].first << " " << weights[i].second << endl;
	}
	
	
}
