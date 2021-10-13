#include <iostream>
#include <random>//random_device
#include <conio.h>
using namespace std;

int main() {
	random_device Rand;
	//float ArrF[10];
	//
	////0 1 2 3 4 5 6 7 8 9
	//for (int index = 0; index < 10; ++index) {
	//	cout << "Enter " << index << " element:";
	//	cin >> ArrF[index];
	//}
	//int ArrInt[20];
	//cout << ArrInt[10] << endl;
	//const int size = 10;
	//int A[size] = {1,2,3,4,5,6,7,8,90,100};
	//int summa = 0;
	//for (int i = 0; i < size; ++i) {
	//	cout << A[i] << endl;
	//	summa += A[i];
	//}
	//cout << "summa elements A: " << summa << endl;
	//short Small[size];
	//for (int i = 0; i < size; ++i) {
	//	Small[i] = Rand() % 100;
	//	cout << Small[i] << endl;
	//}
	//const long Size = 20;
	//double ArrD[Size] = {1.1,2.1,.41,4.};
	////1.1 2.1 0.41 4.0 0 0 0 0 0 0 0 0 0 0 0 
	//for (int i = Size; i > 0; --i) {
	//	cout << ArrD[i-1] << " ";
	//}
	//cout << endl;
	//cout << ArrD[20] << endl;
	////ArrD[Size] = 1;
	//for (int i = Size-1; i >= 0; --i) {
	//	cout << ArrD[i ] << " ";
	//}
	//cout << endl;
	//int Mas[] = { 1,2,3,4,5 };
	//int val = sizeof(Mas) / sizeof(int);
	//cout << "size Mas " << val << endl;
	//cout << sizeof(long) << endl;
	
	//опреление максимума
	//const short Size = 10;
	//int Mas[Size];
	//for (int i = 0; i < 10; ++i) {
	//	Mas[i] = Rand() % 100 - 200;
	//	cout << Mas[i] << " ";
	//}
	//cout << endl;
	//int max = Mas[0];//max=0
	//int position = 0;
	//for (int i = 0; i < Size; ++i) {
	//	if (max < Mas[i]) {
	//		max = Mas[i];
	//		position = i;
	//	}
	//}
	//cout << "max value " << max <<" on position "
	//	<<position<< endl;
	//Дан массив целых случайных чисел в количестве 20.
	//В диапозоне от -20 до 80;
	//1.Найти минимальное значение
	//2.Найти сумму всех отрицательных элементов
	//3.Найти максимальное значение первой половины
	//4.Найти минимальное положительное значение
	//5.Найти среднее арифметическое всех четных положительных 
	//чисел
	int number ;
	int counter = 0;
	int summa = 0;
	cin >> number;
	while (number >= 1 && number < 1000) {
		number++;
		summa += number;
		counter++;
	}
	cout << summa / counter << endl;
}