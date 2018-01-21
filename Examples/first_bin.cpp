#include <iostream>

int fct_somme(int a, int b){
	return a + b;
}

int main(){
	int result = 0;
	result = fct_somme(3, 2);
	std::cout << "Result somme 3 + 2 : " << result << "\n";

	return 0;
}
