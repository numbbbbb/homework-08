/* 
 * File:   main.cpp
 * Author: liangjie
 *
 * Created on 2013年11月16日, 上午7:51
 */

#include <cstdlib>
#include <iostream>  

using namespace std;

/*
 *
 */

int *a;
int *d;

void try_both(){
    int *b = new int(100);
    int c = 200;
    a = b;
    d = &c;
}


int main(int argc, char** argv) { 
    try_both();
    cout<<*a<<endl;
    cout<<*d<<endl;
    return 0;
}

