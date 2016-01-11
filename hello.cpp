
// my first program in C++
#include <iostream>
#include "callMe.h"
#include "skipFile.h"

int skipMe(){
	int x = 8;
	++x;
}

int main()
{
//	callMe();
	skipMe();
  std::cout << "Hello World!";
}
