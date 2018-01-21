#include <iostream>


void exchange(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}

void exchange_ref(int & a, int & b){
	int tmp = a;
	a = b;
	b = tmp;
}

void exchange_const(int const & a, int const & b){
	int tmp = a;
	a = b;
	b = tmp;
}

void exchange_addr(int * a, int * b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a = 1;
	int b = 10;
	exchange(a, b);
	std::cout << "exchange -- a and b : " << a << " " << b << "\n" ;
	exchange_ref(a, b);
	std::cout << "exchange -- a and b : " << a << " " << b << "\n" ;
	a = 1;
	b = 10;
	exchange_const(a, b);
	std::cout << "exchange -- a and b : " << a << " " << b << "\n" ;
	exchange_addr(&a, &b);
	std::cout << "exchange -- a and b : " << a << " " << b << "\n" ;
}
