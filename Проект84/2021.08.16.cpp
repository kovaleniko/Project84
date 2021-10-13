#include <iostream>
#include <random>//random_device
#include <stdlib.h>//rand srand
#include <time.h>//time
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//srand(time(0));
	//cout << "rand " << rand() << endl;
	//int x = rand();
	//cout << x << endl;
	//cout <<"Время в секундах с 1.01.1970 "<< time(0) << endl;
	////для получения числа [A;B) необходимо записать
	////rand()%(B-A)+A;
	//random_device RAND;
	//cout <<"by random "<< RAND() << endl;
	//cout << "by random " << RAND() << endl;
	//cout << "by random " << RAND() << endl;
	//random_device RAND;
	//int answer;
	//do {
	//	short human = RAND() % 6, comp = RAND() % 6;
	//	//0-5
	//	if (human > comp)
	//		cout << "Ваша взяла\n";
	//	else if (human == comp)
	//		cout << "Ничья\n";
	//	else
	//		cout << "победил компьютер\n";
	//	cout << "Хотите сыграть ещё? 0 - нет, да-любое число\n";
	//	cin >> answer;
	//} while (answer);//while(answer!=0);
	/*for (int x = 0; x < 10; ++x) {
		cout << x << " ";
	}
	cout << endl;
	int a = 10;
	for (; a > 0; a--) {
		cout << a << " ";
	}
	for (;;) {
		cout << (char)(rand() % 96 + 32);
	}*/
	/*int value = 0;
	cout << "Введите число: ";
	cin >> value;
	for (int b = 0; b < value; b += 2) {
		cout << b << endl;
	}
*/
//int start, end;
//int counter_even = 0,summa_even=0;
//cout << "Введите начало и конец\n";
//cin >> start >> end;
//for (int value = start; value < end; ++value) {
//	if (value % 2 != 0)
//		continue;
//	counter_even++;
//	summa_even += value;
//}
//cout << "среднее арифметическое четных чисел:" <<
//	summa_even / counter_even << endl;
//подсчет количества разрядов и суммы разрядов числа
	int value = 0;
	cout << "Введите число:";
	cin >> value;
	int count_dig = 0, sum = 0;
	for (; value; value /= 10) {
		count_dig++;
		sum += value % 10;
		cout << value % 10 << endl;
	}
	//вывод делителей на экран
	cout << "Введите число:";
	cin >> value;
	for (int del = 1; del < value; ++del) {
		if (value%del == 0)
			cout << del << " ";
	}
	cout << value << endl;
	//определение простое число или нет
	int del = 2;
	for (; del < value && value%del; ++del);

	if (del >= value)
		cout << "простое\n";
	else
		cout << "НЕпростое\n";

	int x = 2;
	for (; x < value; ++x) {
		if (value%x == 0)
		{
			cout << "not simple\n";
			break;
		}
	}
	if (x == value)
		cout << "simple\n";
	//1.определить сколько делителей у числа
	//2.вывести делители числа от большего к меньшему
	//3.используя генератор случайных чисел вывести 
	//N чисел от -10 до 10 на экран. N вводится пользователем
	//4.На складе Х ящиков с товаром, к складу подъезжают
	//машины и забирают по У ящиков(каждый раз вводится)
	//сколько машин подъедет к складу.
	//5.Вывести на экран линию из N звезд
	//5.1 Вывести на экран линию из N символов выбранных поль
	//зователем.
	//5.2 Вывести на экран линию из N символов выбранных поль
	//зователем вертикально или горизонтально.
}