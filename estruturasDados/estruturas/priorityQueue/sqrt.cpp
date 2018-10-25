#include <iostream>

double batata(int n){
	if(n > 1){
		// double frac = 1/(n-1)+ 
		// return n + 1/(n-1)+(batata(n+(1/n-1)));
		return batata(n-1);
	}
	
	return n;			
}

int main(){
	std::cout << batata(2) << std::endl;
}
