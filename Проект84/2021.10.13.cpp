#include <iostream>
#include <random>//random_device
#include <conio.h>
#include <string.h>//cstring
#include <stdio.h>//fopen
using namespace std;
random_device Rand;

struct Q {
	int x;
	char y[50];
};
//система контроля верcий
//cvs svn git
int main() {
	Q q;
	q.x = 10;
	strcpy_s(q.y,10, "Hello");

}