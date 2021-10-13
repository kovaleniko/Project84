#include <iostream>
#include <random>//random_device
#include <conio.h>
using namespace std;

int main() {
	random_device Rand;
	//const int size = 20;
	//int arr[size];
	//for (int i = 0; i < size; ++i) {
	//	arr[i] = Rand() % 100;
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//сортировка выбором.
	/*for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;*/
	//сортировка второй половины массива
	/*for (int i = size/2; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;*/
	//сортировка пузырьковая
	/*for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}*/
	//модернизация
	//int count = 0;
	//for (int i = 0; i < size; ++i) {
	//	bool flag = true;
	//	for (int j = i; j < size - 1 - i; ++j) {
	//		if (arr[j] > arr[j + 1]) {
	//			int tmp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tmp;
	//			flag = false;
	//		}
	//	}
	//	for (int k = size - 1 - i; k > i; --k) {
	//		if (arr[k] < arr[k - 1]) {
	//			int tmp = arr[k]; arr[k] = arr[k - 1]; arr[k - 1] = tmp;
	//			flag = false;
	//		}
	//	}
	//	if (flag) {
	//		count = i;
	//		break;
	//	}
	//}
	//cout << "count steps " << count << endl;
	//for (int i = 0; i < size; ++i)
	//	cout << arr[i] << " ";
	//cout << endl;
	
	//сортировка вставками
	/*for (int i = 1; i < size; ++i) {
		int tmp = arr[i];
		for (int j = i; arr[j - 1] > tmp && j > 0; --j) {
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
		}
	}
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;*/
	//const int Size = 25;
	//int number[Size] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
	//double times[Size] = {};
	//for (int i = 0; i < Size; ++i) {
	//	times[i] = Rand() % 1000 / 10.0;
	//	cout << number[i] << " " << times[i] << endl;
	//}
	//for (int i = 1; i < Size; ++i) {
	//	double tmpT = times[i];
	//	int tmp = number[i];
	//	for (int j = i; times[j - 1] > tmpT && j > 0; --j) {
	//		times[j] = times[j - 1];
	//		times[j - 1] = tmpT;
	//		number[j] = number[j - 1];
	//		number[j - 1] = tmp;
	//	}
	//}

	//cout << "finish\n";
	//for (int i = 0; i < Size; ++i) {
	//	
	//	cout << number[i] << " " << times[i] << endl;
	//}
	const int s = 15;
	double masD[s];
	for (int i = 0; i < s; ++i) {
		masD[i] = Rand() % 100 / 10.0;
		cout << masD[i]<<" ";
	}
	cout << endl;
	int pos_min = 0;
	for (int i = 0; i < s; ++i)
		if (masD[i] < masD[pos_min])
			pos_min = i;
	for (int i = pos_min + 1; i < s; ++i) {
		int tmp = masD[i];
		for (int j = i ; j > pos_min && masD[j - 1] > tmp; --j) {
			masD[j] = masD[j - 1];
			masD[j - 1] = tmp;
		}
	}
	for (int i = 0; i < s; ++i) {
		cout << masD[i] << " ";
	}
	cout << endl;
	//1.отсортировать массив по убыванию сортировкой выбором
	//2.отсортировать первую половину по убыванию, второую по возрастанию
	//3.отсотировать все значения между максимальным и минимальным.
	//4.отсортировать четные и нечетные числа по возрастанию, разделив массив на 2 
	//части в одной четные, в другой нечетные
}