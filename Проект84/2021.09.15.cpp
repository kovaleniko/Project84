#include <iostream>
#include <random>//random_device
#include <conio.h>

using namespace std;
random_device Rand;
void func(int* value) {
	if (value)
		*value += 5;
}
template<typename T>
void swp(T* a, T* b) {
	T tmp = *a;
	*a = *b;
	*b = tmp;
}

int* find_max(int* aaa, int size) {
	if (aaa == nullptr)
		return aaa;
	int* max = aaa;
	for (int i = 0; i < size; ++i) {
		if (*max < *(aaa + i))
			max = aaa + i;
	}
	return max;
}

template<typename T>
T* createMas(int size) {
	T* tmp = new T[size];
	if (tmp) {
		for (int i = 0; i < size; ++i)
			*(tmp + i) = Rand() % 100 + Rand() % 100 * 0.01;
	}
	return tmp;
}
template<typename T>
void print(T* arr, int size) {
	if (arr == nullptr) return;
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

template<typename T>
T* addToEnd(T* arr, int size) {
	if (arr == nullptr && size!=0) arr;
	T* nArr = new T[size + 1];
	if (!nArr)
		return arr;
	for (int i = 0; i < size; ++i)
		nArr[i] = arr[i];
	nArr[size] = Rand() % 26 + 'A';
	delete[] arr;
	return nArr;
}
template<typename T>//size_t==unsigned int
T* addToPoz(T* arr, size_t size, size_t poz) {
	if (poz > size)
		return arr;
	if (arr == nullptr) return arr;
	T* nArr = new T[size + 1];
	if (!nArr)
		return arr;
	for (int i = 0; i < poz; ++i)
		nArr[i] = arr[i];
	nArr[poz] = Rand() % 26 + 'A';
	for (int i = poz; i < size; ++i)
		nArr[i + 1] = arr[i];
	delete[] arr;
	return nArr;
}
template<typename T>
T* delFromEnd(T* arr, int size) {
	T* nArr = new T[size - 1];
	if (!nArr)
		return arr;
	for (int i = 0; i < size - 1; ++i)
		nArr[i] = arr[i];
	delete[] arr;
	return nArr;
}
template<typename T>
T* delFromPoz(T* arr, size_t size, size_t poz) {
	T* nArr = new T[size - 1];
	if (!nArr)
		return arr;

	return nArr;
}

void print(float* arr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
void sorting(float* arr, int size) {
	for (int i = 0; i < size; ++i) {
		float tmp = *(arr + i);
		for (int j = i; j > 0 && tmp < *(arr + j - 1); --j) {
			/**(arr + j) = *(arr + j - 1);
			*(arr + j - 1) = tmp;*/
			swp(arr + j, arr + j-1);
		}
	}
}

int main() {
	//int x = 4.1;
	//int* ptr = &x;
	//char* q = (char*)ptr;
	//cout << q << " " << ptr << endl;
	//ptr + 10;
	//q--;
	//++ptr;
	//cout << ptr - &x << "  char*-char*" << q - (char*)&x << endl;
	//cout << ptr << " " << (int*)q << " " << &x << endl;
	//int arr[5] = { 9,7,4,7,0 };
	//cout<<"value 3 position:" << *(arr + 3) << endl;
	//int* ptr_next = arr;//[]
	//C				| C++
	//malloc		| new
	//calloc		| new[]
	//realloc		|

	//free			|delete, delete[]
//	int size;
//	cout << "Enter size for array:";
//	cin >> size;
//	double* ArrD = new double[size];
//	for (int i = 0; i < size; ++i)
//	{
//		ArrD[i] = Rand() % 1000 / 10.0;
//		cout << *(ArrD + i) << " ";
//	}
//	cout << endl;
////	char *a=new char[2'000'010] {};
//	delete[] ArrD;
//	int* ptrInt=new int(1);
//	cout << "val " << *ptrInt << endl;
//	*ptrInt = 111;
//	cout << ptrInt[0] << endl;
//	cout << *(ptrInt+1) << endl;
//	//*(ptrInt + 1) = 1;
//	delete ptrInt;
//	ptrInt = new int;
//	delete ptrInt;
//	ptrInt = new int[size];
//	delete []ptrInt;
//	ptrInt = new int[size] {size};
//	delete[]ptrInt;
//	ptrInt = nullptr;
//	if(ptrInt)
//		cout <<"non nullptr " << *ptrInt << endl;
	//int S = Rand() % 21 + 10;
	//char* Str = new char[S];
	//for (int i = 0; i < S; ++i)
	//{
	//	*(Str + i) = Rand() % 98 + 32;
	//	cout << *(Str + i) << " ";
	//}
	//cout << endl;
	////считаем сколько каждого типа символов
	//size_t cLitter = 0, cDigit = 0, cOther = 0;
	//for (int i = 0; i < S; ++i)
	//{
	//	if (*(Str + i) >= 'A' && *(Str + i) <= 'Z' ||
	//		*(Str + i) >= 'a' && *(Str + i) <= 'z')
	//		++cLitter;
	//	else if (*(Str + i) >= '0' && *(Str + i) <= '9')
	//		++cDigit;
	//	else
	//		++cOther;
	//}
	////выделяем нужное количество памяти
	//char* Litter = new char[cLitter];
	//char* Digit = new char[cDigit];
	//char* Other = new char[cOther];
	//if (!Litter || !Digit || !Other)
	//	return 0;
	////Распределить символы
	//for (int i = 0,k=0,j=0,m=0; i < S; ++i)
	//{
	//	if (*(Str + i) >= 'A' && *(Str + i) <= 'Z' ||
	//		*(Str + i) >= 'a' && *(Str + i) <= 'z') {
	//		*(Litter + k) = *(Str + i);
	//		k++;
	//	}
	//	else if (*(Str + i) >= '0' && *(Str + i) <= '9') {
	//		*(Digit + j) = *(Str + i);
	//		j++;
	//	}
	//	else {
	//		*(Other + m) = *(Str + i);
	//		m++;
	//	}
	//}
	//delete[]Str;
	//for (int i = 0; i < cLitter; ++i)
	//	cout << *(Litter + i) << " ";
	//cout << endl;
	//for (int i = 0; i < cDigit; ++i)
	//	cout << *(Digit + i) << " ";
	//cout << endl;
	//for (int i = 0; i < cOther; ++i)
	//	cout << *(Other + i) << " ";
	//cout << endl;
	//delete[]Digit;
	//delete[]Litter;
	//delete[]Other;
	//int chislo = 5;
	//func(&chislo);
	//cout << "value:" << chislo << endl;
	//int other = 555;
	//swp(&chislo, &other);
	//cout << "ch " << chislo << "  oth " << other << endl;

	//int mas[5] = { 3,6,3,40,1 };
	//cout << "max elem:" << *find_max(mas, 5) << endl;
	//*find_max(mas, 5) = -10;
	//cout << "new " << mas[3] << endl;
	int Size = 20;
	float* ptr=createMas<float>(Size);
	if (!ptr)
		return 0;
	print(ptr, Size);
	sorting(ptr, Size);
	print(ptr, Size);
	float* ptrNew=addToEnd(ptr, Size);
	if (!ptrNew)
		return 0;
	if (ptrNew == ptr)
		ptrNew = NULL;
	else {
		ptr = ptrNew;
		++Size;
		ptrNew = NULL;
	}
	ptr = addToEnd(ptr, Size++);
	print(ptr, Size);
	ptr = addToPoz(ptr, Size++, 4);
	ptr = delFromEnd(ptr, Size--);
	print(ptr, Size);
	delete[] ptr;
}
//2.написать функцию которая запрашивает у пользователя размер массива и
//выделяет память для него. массив целых чисел.Заполнить случайными числами
//от 0 до 50 и вывести на экран