#include <iostream>
#include <random>//random_device
#include <conio.h>

using namespace std;
random_device Rand;

double multy(int x, int y) {
	return 1.0 * x * y;
}
double multy(double x, double y) {
	return x * y;
}
//double  multy(int x, int y,int z=1) {
//	return 1.0 * x * y*z;
//}
char* multy(char x, int y) {
	char val[100] = {};
	for (int i = 0; i < y && i < 100; ++y)
		val[i] = x;
	return val;
}

void loading(int Mas[], int size) {
	for (int i = 0; i < size; ++i)
		Mas[i] = Rand() % 100;
	
}
void loading(double Mas[], int size) {
	for (int i = 0; i < size; ++i)
		Mas[i] = Rand() % 1000/10.0;

}

template<typename Type>
void display(Type M[], int size) {
	for (int i = 0; i < size; ++i)
		cout << M[i] << " ";
	cout << endl;
}

template<typename Qwerty>
Qwerty summa_array(Qwerty Mas[], int size) {
	Qwerty sum = 0;
	for (int i = 0; i < size; ++i)
		sum += Mas[i];
	return sum;
}

void summa_array(char Mas[], int size) {
	for (int i = 0; i < size; ++i)
		cout << Mas[i];
	cout << endl;
}

template<typename type>
void sorting(type arr[], int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (arr[i] > arr[j]) {
				type tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
//5! ->5*4*3*2*1
double factorial(double val) {
	if (val <= 1)
		return 1.0;
	double rezult = val * factorial(val - 1);
	return rezult;
}
void deliteli(int value, int del = 1) {
	if (del > value)
		return;
	deliteli(value, del + 1);
	if (value % del == 0)
		cout << del << " ";
	
}
//7
//9*2 =18 4.
bool isSimple(int number, int del = 2) {
	if (sqrt(number) < del)
		return true;
	if (number % del == 0)
		return false;
	return isSimple(number, del + 1);
}

template<typename Type>void createArr(Type M[], int size) {
	if (size <= 0)
		return;
	createArr(M, size - 1);
	M[size - 1]=Rand()%100;
	cout << M[size - 1] << " ";
}
//1.написать рекурсивную функцию вывод€щую линию сиволов на экран
//количество символов указано в качестве параметра функции
//2.написать шаблонную функцию поиска минимального значени€ в массиве
//3.написать шаблонную рекурсивную функцию поиска максимального значени€
//в массиве
//4. написать рекурсивную функцию определени€ количества разр€дов числа
//5.написать шаблонную функцию определ€ющую в массиве количество значений равных
//заданному 3 параметром


int main() {
	//unsigned int x = 1'000'000'000;
	//cout << x << endl;
	//x = 4'000'000'000;
	//cout << x << endl;

	//x = 5'000'000'000;
	//cout << x << endl;
	/*double mas[10];
	loading(mas, 10);
	int Int[20];
	loading(Int, 20);*/
	//1. создать 3 фунции diff (вычитание) дл€ типов
	//int-int, double -double, double -int
	//2. создать функцию вывод€щую массив на экран дл€
	//массивов типа int и double.
	//display(mas, 10);
	//display(Int, 20);
	//char S[5] = { '1',111,'r','/','A' };
	//display(S, 5);
	//int M[2] = { 1,2 };
	//display(M, 2);
	//cout << "summa int " << summa_array(Int, 20) << endl;
	//cout << "summa double " << summa_array(mas, 10) << endl;
	//summa_array(S, 5);
	//sorting(Int, 20);
	//sorting(mas, 10);
	//display(mas, 10);
	//display(Int, 20);
	/*cout << factorial(7) << endl;
	int number = 1;
	while (number) {
		cin >> number;
		deliteli(number);
		cout << endl;
		cout << (isSimple(number) ? "is simple" : "no") << endl;

	}*/
	int Q[10];
	createArr(Q, 10);
	cout << endl;
	display(Q, 10);
}
