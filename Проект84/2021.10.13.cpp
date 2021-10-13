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
struct Point {
	double x, y;
};
Point getPoint() {
	Point tmp = { Rand() % 10,Rand() % 10 };
	return tmp;
}
void display(Point tmp) {
	cout << "(" << tmp.x << "," << tmp.y << ")\n";
}
//система контроля верcий

//cvs svn git
int main() {
	Q q;
	q.x = 10;
	strcpy_s(q.y,10, "Hello");

}