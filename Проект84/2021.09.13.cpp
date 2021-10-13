#include <iostream>
#include <random>//random_device
#include <conio.h>

using namespace std;
random_device Rand;

int rec_sum(int a, int b);
template<typename T>
void loading(T Mas[], int size) {
	for (int i = 0; i < size; ++i)
		Mas[i] = Rand() % 96 + Rand()%100/100.0+32;

}

template<typename Type>
void display(Type M[], int size) {
	for (int i = 0; i < size; ++i)
		cout << M[i] << " ";
	cout << endl;
}
template<typename Type>
Type findMax(Type M[], int size) {
	if (size <= 0)
		return M[0];
	Type max = findMax(M, size - 1);
	if (M[size - 1] > max)
		return M[size - 1];
	return max;
}
void SortQ(int M[], int size) {
	int left = 0;
	int right = size - 1;
	int opr = M[(left + right) / 2];//pivot
	while (left <= right) {
		while (M[left] < opr)left++;
		while (M[right] > opr)right--;
		if (left <= right) {
			int tmp = M[left];
			M[left] = M[right];
			M[right] = tmp;
			left++; right--;
		}
	}
	if (right > 0) {
		SortQ(M, right + 1);
	}
	if (left < size - 1)
		SortQ(M + left, size - left);
}
int main(){
	//int val1, val2;
	//cout << "Enter value:";
	//cin >> val1 >> val2;
	//cout << "sum from " << val1 << " to " << val2 << " =" << 
	//	rec_sum(val1, val2) << endl;
	//int Mas[10];
	//loading(Mas, 10);
	//display(Mas, 10);
	//cout << "max " << findMax(Mas, 10) << endl;
	//SortQ(Mas, 10);
	//display(Mas, 10);
	///sort(Mas, Mas + 10);
	int Attr = 10;
	int* Ptr;
	Ptr = &Attr;
	cout << "Attr " << &Attr << " Ptr" << Ptr << " adr ptr " << &Ptr << endl;
	int** P1 = &Ptr;
	double Db = 1.1;
	double* PtrD = &Db;
	cout << "value " << *PtrD << endl;
	//+int, -int, ++,--, <> == !=, T*-T*
	const int size = 20;
	int arr[size] = {2,1,9,0};
	cout << "array " << arr << endl;
	cout << *arr << endl;
	*arr == arr[0];
	int* ptr_arr = arr;
	for (int i = 0; i < size; ++i) {
		cout << ptr_arr << " " << *ptr_arr << endl;
		++ptr_arr;
	}
	ptr_arr = arr;
	for (int i = 0; i < size; ++i) {
		*(arr + i) = Rand() % 10 + 10;
		cout << *(arr + i) << endl;
	}
	//arr[]
	//double* ptrD1 = 0;
	//char* article = nullptr;
	//short* ASD = NULL;
	//if(ASD)
	//cout << *ASD << endl;
	int* start = arr,* max=arr;

	for (; start < arr + 10; ++start)//int i
		if (*max < *start)
			max = start;
	cout << "max value " << *max << "  " << max - arr << endl;
	//arr==&arr[0]
	int sum = 0;
	for (; start > arr;) {
		sum += *(--start);
	}
	cout << "summa " << sum << endl;
	//1. найти количество четных чисел
	//2. найти минимальное значение.
}
//a+a+1+a+2+...+b
int rec_sum(int a, int b)
{
	if (a > b)
		return 0;
	int sum = a + rec_sum(a + 1, b);
	return sum;
}