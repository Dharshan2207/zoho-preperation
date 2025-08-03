#include <bits/stdc++.h>
using namespace std;


int evaluate(string input, int n){
	vector<int> numbers;
	vector<char> operators;
	int result = 0;
	
	int numbersSize;
	int operatorsSize;
	
	string adder = "";
	for(int i = 0; i < n; i++){
		if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'){
			int num = stoi(adder);
			numbers.push_back(num);
			adder = "";
			
			operators.push_back(input[i]);
		}
		else{
			adder += input[i];
		}
	}
	numbersSize = numbers.size();
	operatorsSize = operators.size();
	
	for(int i = 0; i < operatorsSize; i++){
		if(operators[i] == '*'){
			int num1 = numbers[i];
			int num2 = numbers[i+1];
			
			result += (num1 * num2);
			numbers[i] = (num1 * num2);
			for(int j = i; j <= numbersSize; j++){
				numbers[i] = numbers[i+1];
			}
			numbersSize--;
		}
		else if(operators[i] == '/'){
			int num1 = numbers[i];
			int num2 = numbers[i+1];
			
			result += (num1 / num2);
			numbers[i] = (num1 / num2);
			for(int j = i; j <= numbersSize; j++){
				numbers[i] = numbers[i+1];
			}
			numbersSize--;
		}
	}
	
	for(int i = 0; i < operatorsSize; i++){
		if(operators[i] == '+'){
			int num1 = numbers[i];
			int num2 = numbers[i+1];
			
			result += (num1 + num2);
			numbers[i] = (num1 + num2);
			for(int j = i; j <= numbersSize; j++){
				numbers[i] = numbers[i+1];
			}
			numbersSize--;
		}
		else if(operators[i] == '-'){
			int num1 = numbers[i];
			int num2 = numbers[i+1];
			
			result += (num1 - num2);
			numbers[i] = (num1 - num2);
			for(int j = i; j <= numbersSize; j++){
				numbers[i] = numbers[i+1];
			}
			numbersSize--;
		}
	}
	
	return result;
	
}

int main(){
	string input = "13+4*2";
	int n = input.size();
	
	int result = evaluate(input, n);
	
	cout << result;
	
}
