#include <iostream>
#include <random>//random_device
#include <conio.h>
using namespace std;

int main() {
	//random_device Rand;
	////1.���������� ������
	//const unsigned int size = 20;
	//int Arr[size];
	//for (int i = 0; i < size; ++i) {
	//	Arr[i] = Rand() % 100;
	//	cout << Arr[i] << " ";
	//}
	//cout << endl;
	//for (int a = 0; a < size / 2; ++a) {
	//	int tmp = Arr[a];
	//	Arr[a] = Arr[size - 1 - a];
	//	Arr[size - 1 - a]=tmp;
	//}
	//for (int i = 0; i < size; ++i) {
	//	cout << Arr[i] << " ";
	//}
	//cout << endl;
	////����������� ������� ������� ����� �������� 3
	//int pos_3 = -1;
	//for (int i = 0;i < size; ++i) {
	//	if (Arr[i] % 3 == 0) {
	//		pos_3 = i;
	//		break;
	//	}
	//}
	//if (pos_3 != -1)
	//	cout << "first value " << Arr[pos_3] << endl;
	//else
	//	cout << "not find value %3\n";
	////���������� ������� ���������� ������� �����
	//int last_even = -1;
	//for (int i = size - 1; i >= 0; i--) {
	//	if (Arr[i] % 2 == 0)
	//	{
	//		last_even = i;
	//		break;
	//	}
	//}
	//if (last_even != -1)
	//	cout << "position last even " << last_even << " value "
	//	<< Arr[last_even] << endl;
	//else
	//	cout << "not find even value\n";
	////��� ������ �� 20 ����� ��������� ����� �� ��������� [-20,80), 
	////1.����� ����� ��������� ����� ������ �������� � ������ �������
	////2.����� ������������ �������� ����� ������ ������������ � 
	////��������� �������������
	////3.����� ������� �������������� ����� ����� ������������ ���������
	//// � ����������� 
	random_device Rand;
	int Exz1[3][4] = {};
	int Exz2[3][4] = { 1,2,3,4,5,6,7,8,9,0,1,2 };
	//1 2 3 4
	//5 6 7 8
	//9 0 1 2
	int Exz3[3][4] = { {1,2,3,4},{0,9,8,7},{1,2,3,4} };
	//1 2 3 4
	//0 9 8 7
	//1 2 3 4
	int Exz4[3][4] = { {1,2},{4,5,6},{7} };
	//1 2 0 0
	//4 5 6 0
	//7 0 0 0
	const int row = 10, col = 12;
	int Buzness[row][col];
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			Buzness[i][j] = Rand() % 1000 - 200;
			cout << Buzness[i][j] << "\t";
		}
		cout << endl;
	}
	//����� ����� ������� � ������� �� ������ ��� ��������
	int Total = 0, Total_y = 0;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			Total += Buzness[i][j];
			Total_y+= Buzness[i][j];
		}
		cout << "Total for " << i << " year " << Total_y << endl;
		Total_y = 0;
	}
	cout << "Total " << Total << endl;
	//������� ������������ �������� ��� ������� ������
	for (int j = 0; j < col; ++j) {
		int Max = Buzness[0][j];
		for (int i = 0; i < row; ++i) {
			if (Max < Buzness[i][j]) {
				Max = Buzness[i][j];
			}
		}
		cout << "max in " << j + 1 << " month:" << Max << endl;
	}
	//1.����� ���������� ������� � �������
	//2.����� ������������ ������� �� �����, ������ ��������, ��� �
	// �����
	//3.������� ������ ����� � ������� ���� ��� ������ ����������� �������
	//4.����� ����� ������� ��� ����� ������� �� ��� �����.
}