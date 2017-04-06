#include <stdio.h>
#include <iostream>
#include <base.h>


int main(){
	Base* base = new Base();
	printf("hi\n");
	base->print();
	std::cout << "HI \n";
}