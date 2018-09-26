#include <string>
#include <stack>
#include <iostream>

bool isPair(char open,char close){
	if(open == '(' && close == ')') return true;
	else if(open == '{' && close == '}') return true;
	else if(open == '[' && close == ']') return true;
	return false;
}

bool isWellFormed(std::string word){
    std::stack<char> s;

	for(int i = 0; i < (int)word.length(); i++){
		if(word[i] == '(' || word[i] == '{' || word[i] == '['){
			s.push(word[i]);
		}else if(word[i] == ')' || word[i] == '}' || word[i] == ']'){
			if( s.empty() || ! isPair(s.top(), word[i]) ){
				return false;
			}else{
				s.pop();
			}
		}
	}

    return s.empty();
}

int main(){
    std::string word;

    std::cout << "Enter a word" << '\n';
    std::cin >> word;
    isWellFormed(word) ?
        std::cout << "Well formed" << '\n' :
        std::cout << "Not well formed" << '\n';
}
