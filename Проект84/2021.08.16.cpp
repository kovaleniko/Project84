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
	//cout <<"����� � �������� � 1.01.1970 "<< time(0) << endl;
	////��� ��������� ����� [A;B) ���������� ��������
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
	//		cout << "���� �����\n";
	//	else if (human == comp)
	//		cout << "�����\n";
	//	else
	//		cout << "������� ���������\n";
	//	cout << "������ ������� ���? 0 - ���, ��-����� �����\n";
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
	cout << "������� �����: ";
	cin >> value;
	for (int b = 0; b < value; b += 2) {
		cout << b << endl;
	}
*/
//int start, end;
//int counter_even = 0,summa_even=0;
//cout << "������� ������ � �����\n";
//cin >> start >> end;
//for (int value = start; value < end; ++value) {
//	if (value % 2 != 0)
//		continue;
//	counter_even++;
//	summa_even += value;
//}
//cout << "������� �������������� ������ �����:" <<
//	summa_even / counter_even << endl;
//������� ���������� �������� � ����� �������� �����
	int value = 0;
	cout << "������� �����:";
	cin >> value;
	int count_dig = 0, sum = 0;
	for (; value; value /= 10) {
		count_dig++;
		sum += value % 10;
		cout << value % 10 << endl;
	}
	//����� ��������� �� �����
	cout << "������� �����:";
	cin >> value;
	for (int del = 1; del < value; ++del) {
		if (value%del == 0)
			cout << del << " ";
	}
	cout << value << endl;
	//����������� ������� ����� ��� ���
	int del = 2;
	for (; del < value && value%del; ++del);

	if (del >= value)
		cout << "�������\n";
	else
		cout << "���������\n";

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
	//1.���������� ������� ��������� � �����
	//2.������� �������� ����� �� �������� � ��������
	//3.��������� ��������� ��������� ����� ������� 
	//N ����� �� -10 �� 10 �� �����. N �������� �������������
	//4.�� ������ � ������ � �������, � ������ ����������
	//������ � �������� �� � ������(������ ��� ��������)
	//������� ����� �������� � ������.
	//5.������� �� ����� ����� �� N �����
	//5.1 ������� �� ����� ����� �� N �������� ��������� ����
	//���������.
	//5.2 ������� �� ����� ����� �� N �������� ��������� ����
	//��������� ����������� ��� �������������.
}