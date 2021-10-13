#include <iostream>
#include <random>//random_device
#include <conio.h>
using namespace std;

int main() {
	random_device Rand;
	//for (int a = 0; a < 3; ++a) {
	//	cout << "Out circle!\n";
	//	for (int b = 0; b < 4; ++b) {
	//		cout << "Input construction\n";
	//	}
	//	///
	//}
	int N, M;
	cout << "Enter size rectangle\n";
	cin >> N >> M;
	for (int row = 0; row < N; ++row) {
		for (int col = 0; col < M; ++col) {
			cout << '*';
		}
		cout << endl;
	}
	//********
	//*      *
	//*      *
	//********
	//cout << endl;
	//for (int row = 0; row < N; ++row) {
	//	for (int col = 0; col < N; ++col) {
	//		if (col <= row)
	//			cout << "+";
	//	}
	//	cout << endl;
	//}
	//for (int row = 0; row < N; ++row) {
	//	for (int col = 0; col < N; ++col) {
	//		if (col <N - row)//5
	//			cout << "#";
	//	}
	//	cout << endl;
	//}

	//int start, end;
	//cout << "Enter first & last value\n";
	//cin >> start >> end;
	//if (start > end) {
	//	int Tree = start;
	//	start = end;
	//	end = Tree;
	//	//start = start + end;// s=5, e=7 =>s=12, e=7
	//	//end = start - end;//s =12,e=5
	//	//start = start - end;//s=7,e=5
	//}
	//for (int value = start; value < end; ++value) {
	//	int x = 2;
	//	for (; x < value; ++x) {
	//		if (value%x == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (x == value)
	//		cout <<value<< "\n";
	//}
	// в диапозоне чисел от А до В найти числа c суммой 
	//разрядов =15. Вывести их на экран.
	//int x = 0;
	//while (true) {
	//	
	//	if (_kbhit()) {
	//		system("cls");
	//		//cout << _getch() << endl;
	//		int litter = _getch();
	//		//cout << litter << endl;
	//		char sim = '0';
	//		if (litter == 'a' || litter == 228)
	//			--x;
	//		if (litter == 'd' || litter == 162)
	//			++x;
	//		int size = 20;
	//		for (int cur = 0; cur < size; ++cur) {
	//			if (cur == x)
	//				cout << '0';
	//			else
	//				cout << '=';
	//		}
	//	}
	//	
	//}
}