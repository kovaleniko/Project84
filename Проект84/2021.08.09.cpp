#include <iostream>
using namespace std;
int main() {
	//cout << "Enter number:";
	//int value;
	//cin >> value;
	setlocale(LC_ALL, "rus");
	//switch (value % 2) {
	//case 0:
	//	cout << "������\n";
	//	break;
	//case 1:
	//	cout << "��������\n";
	//	break;
	//}
	//switch (value % 7) {
	//
	//default:
	//	cout << "�� ������� �� 7\n";
	//	break;
	//case 0:
	//	cout << "������ 7\n";
	//	break;
	//}
	//cout << "������� ������ �� 1 �� 5\n";
	//int score;
	//cin >> score;
	//switch (score)
	//{
	//case 5:
	//	cout << "A"; break;
	//case 4:
	//	cout << "B"; break;
	//case 3:
	//	cout << "C"; break;
	//case 2:
	//	cout << "D"; break;	
	//case 1:
	//	cout << "E"; break;
	//default:
	//	cout << "error input\n";break;
	//}
	//double Val1, Val2;
	//char action;
	//cout << "������� ��������1 �������� ��������2\n";
	//cin >> Val1 >> action >> Val2;
	//switch (action)
	//{
	//default:
	//	cout << "������� ������� ��������.\n";	break;
	//case '+':
	//	cout << "�������� " << Val1 + Val2 << endl; break;
	//case '-':
	//	cout << "��������� " << Val1 - Val2 << endl; break;
	//case '*':
	//	cout << "��������� " << Val1 * Val2 << endl; break;
	//case '/':
	//	if (Val2)//if(Val2!=0)
	//		cout << "������� " << Val1 / Val2 << endl; 
	//	else
	//		cout << "�� ���� ������ ������\n";
	//	break;
	//}
	//1.������������ ������ ����� ������, ��������� ��� ��������
	//2.������������ ������ ������� ����� �� 1 �� 100
	//��������� � �������.
	//��������: 19 -> XIX 49-> XLIX  93-> XCIII
	//short value;
	//cout << "Enter...";
	//cin >> value;
	//if (value > 0 && value < 100) {
	//	short E = value % 10, D = value / 10;
	//	switch(D) {
	//	case 3:
	//		cout << "X";//	cout << "XXX"; break;
	//	case 2:
	//		cout << "X";
	//	case 1:
	//		cout << "X"; break;
	//	case 4:
	//		cout << "X";//cout << "XL";break;
	//	case 5:
	//		cout << "L"; break;
	//	case 6:
	//		cout << "LX"; break;
	//	case 7:
	//		cout << "LXX"; break;
	//	case 8:
	//		cout << "LXXX"; break;
	//	case 9:
	//		cout << "XC"; break;
	//	}
	//	switch (E) {
	//	case 3:
	//		cout << "III"; break;
	//	case 2:
	//		cout << "II"; break;
	//	case 1:
	//		cout << "I"; break;
	//	case 4:
	//		cout << "IV"; break;
	//	case 5:
	//		cout << "V"; break;
	//	case 6:
	//		cout << "VI"; break;
	//	case 7:
	//		cout << "VII"; break;
	//	case 8:
	//		cout << "VIII"; break;
	//	case 9:
	//		cout << "IX"; break;
	//	}
	//}
	//enum {first, second, third,next=10,last};
	//enum color {red=1,blue,white,dark=10,black};
	//enum Enum1 {a,b,};
	//cout << red << " " << black << endl;
	//int some_val = 0;
	//while (some_val < 10)//������� ������ �����
	//{//���� �����
	//	cout << some_val << " ";
	//	some_val = some_val + 1;//++some_val;
	//}
	//cout << "Enter last value\n";
	//int finish;
	//cin >> finish;
	//some_val = 0;
	//while (some_val < finish)//������� ������ �����
	//{//���� �����
	//	cout << some_val << " ";
	//	++some_val;
	//}
	int finish, some_val;
	cout << "������� ������ � ����� ���������.\n";
	cin >> some_val >> finish;
	if (some_val % 2)
		some_val++;
	
	while (some_val < finish)//������� ������ �����
	{//���� �����
		cout << some_val << " ";
		some_val+=2;
	}
	cout << endl;
	
	short start, end;
	cout << "������� ������ � ����� ���������.\n";
	cin >> start >> end;
	int summa = 0,sum_even=0;
	unsigned int schetchik = 0;
	while (start < end) {
		if (start % 13 == 0) {
			cout << start << " ";
		}
		summa += start;
		if (start % 2 == 0)
			sum_even += start;
		++start;
		++schetchik;
	}
	cout << "summa " << summa << endl;
	cout << "summa even " << sum_even << endl;
	if (schetchik)
		cout << "average " << summa / schetchik << endl;
	//1. ����� ������������ ����� � ��������� �������� �������������
	//�� �� ���� 25(double allMulty)
	//2. ������� ��� ����� �� �������� ������� 5
	//3. ����� ����� ����� ������� 3
	//4. ����� ������� �������������� ��� �������� �����.

}