#include <stdio.h>
#include <base.h>


Base::Base()
{
    //playerOnBase = NULL;
}

bool Base::isEmpty(){
    return empty;
}

void Base::startInning(){
    empty = true;
}

void Base::setTrue(){
    empty = true;
}

void Base::print(){
	printf("IN BASE\n");
}

