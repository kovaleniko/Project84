#include <iostream>
using namespace std;
int main() {
	//int price=0, all_price = 0;
	//cout << "Enter price 1:";
	//cin >> price;
	//all_price += price;
	//cout << "Enter price 2:";
	//cin >> price;
	//all_price += price;
	//cout << "Enter price 3:";
	//cin >> price;
	//all_price += price;
	//cout << "Enter 4 price:";
	//cin >> price;
	//all_price += price;
	//cout << "Total price:" << all_price << endl;
	//int value = 1;
	//cout << ++value << " ";
	//system("pause");
	//cout << value++ << " ";
	//system("pause");
	//cout << value << endl;
	////
	//int x = 0, y = 1;
	//int z = x++ - ++y;
	//cout << z << " " << x << " " << y << endl;
	//int x = 9, y = 5;
	//cout << (x < y )<< endl;
	//cout << boolalpha << (x >= y) << endl;
	//cout << noboolalpha;
	//1.дан парал-д l,w,h - вводятся пользователем
	//Посчитать объем и площадь поверхности.
	//V=l*w*h, S=2*(l*w+ l*h+h*w);
	//2. даны длины сторон треугольника, посчитать периметр и площадь
	//P,
	//S=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
	//int value;
	//cout << "Enter some value: ";
	//cin >> value;
	//setlocale(LC_ALL, "rus");
	//if (value > 0) 
	//{
	//	cout << "Число положительное\n";
	//}
	//if (value < 0)
	//{
	//	cout << "Отрицательное значение\n";
	//}
	//if (value == 0) {
	//	cout << "Вы ввели 0\n";
	//}
	//short mark;
	//double average_score = 0.0;
	//cout << "Enter score for math:";
	//cin >> mark;
	//average_score += mark;
	//cout << "Enter score for russian: ";
	//cin >> mark;
	//average_score += mark;
	//cout << "Enter score for english:";
	//cin >> mark;
	//average_score += mark;
	//cout << "Enter score for fizik:";
	//cin >> mark;
	//average_score += mark;
	//average_score /= 4;
	//if (average_score >= 4) {
	//	cout << "You have money\n";
	//}
	//if (average_score < 4) {
	//	cout << "You don't have money\n";
	//}
	//int number;
	//cout << "Enter...";
	//cin >> number;
	//if (number % 2 == 0) {
	//	cout << "even\n";
	//}
	//else {
	//	cout << "odd\n";
	//}
	
	int number;
	cout << "Enter value from 100 to 999\n";
	cin >> number;
	if (number > 99 && number < 1000)
	{
		int summa=0;
		int r1, r2, r3;
		r1 = number / 100;
		r3 = number % 10;
		r2 = number / 10 % 10;
		summa = r1 + r2 + r3;
		cout << "Summa digit:" << summa << endl;
	}
	else 
	{
		cout << "error intput\n";
	}
	//1. определить делаиться введенное число на 7 или нет
	//2. пользователь вводит трехзначное число, если
	//в числе есть цифры 5 или 8 вывести квадрат числа,
	//если таких цифр нет умножить на 2.
}