
// my first program in C++
#include <iostream>
#include "callMe.h"
#include "skipFile.h"

int skipMe(){
	int x = 8;
	++x;
	return x;
}

int main()
{
	callMe();
	if(x > 9){
	skipMe();
	}else{
	std::cout << "Hello World!";
	}
}
