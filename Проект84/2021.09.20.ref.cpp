#include <iostream>
#include <random>//random_device
#include <conio.h>

using namespace std;
random_device Rand;

void takeMemory(int** mas, int size) {
	*mas = new int[size];
	for (int i = 0; i < size; ++i)
		*(*mas + i) = Rand() % 100;
}
void takeMemoryNew(int*& mas, int size) {
	if (mas)
		delete[]mas;
	mas = new int[size];
	for (int i = 0; i < size; ++i)
		mas[ i] = Rand() % 100;
}

void f(long& x) {
	cout << x++ << endl;
}
template<typename t>
void swp(t& t1, t& t2) {//swap
	t tmp (t1);
	t1 = t2;
	t2 = tmp;
}

void find_min_max(int* mas, int size,
	int& min, int& max) {
	min = max = *mas;
	for (int i = 0; i < size; ++i) {
		if (*(mas + i) < min)
			min = *(mas + i);
		if (*(mas + i) > max)
			max = *(mas + i);
	}

}
void addElement(int*& mas, int& old_size);

void addElement(int*& mas, int& old_size) {
	cout << "enter count new elements ";
	unsigned int n;
	cin >> n;
	//mas = (int*)realloc(mas, sizeof(int)*(old_size + n));
	int* na = (int*)realloc(mas, sizeof(int) * (old_size + n));
	if (!na) return;
	
	mas = na;
	for (int i = old_size; i < old_size + n; ++i)
		*(mas + i) = Rand() % 100;
	old_size += n;
}

template<typename T>
void AAAA(T*& mas,unsigned int &size,unsigned int n) {
	if (n > size)
		return;
	T* old = new T[size - n];
	if (!old)
		return;

	for (int i = n; i < size; ++i)
		old[i-n] = mas[ i];
	if (mas)
		delete[] mas;
	mas = old;
	size -= n;
}

template<typename Type>
void addElementNew(unsigned int poz,unsigned int &size,
	Type*& mas, unsigned int count)
{
	if (poz > size)
		poz = size;
	Type* newM = new Type[size + count];
	if (!newM)
		return;

	if (mas) {
		for (int i = 0; i < poz; ++i)
			newM[i] = mas[i];
		for (int i = poz; i < poz + count; ++i)
			newM[i] = Rand() % 50 - 100;
		for (int i = poz + count; i < size + count; ++i)
			newM[i] = mas[i - count];
		delete[]mas;
	}
	else	{
		for (int i = 0; i < size + count; ++i)
			newM[i] = Rand() % 50 - 100;
	}
	mas = newM; size += count;
}

int& findElement(int* arr, int size, int find_el) {
	for (int i = 0; i < size; ++i) {
		if (*(arr + i) == find_el)
			return *(arr + i);
	}
	return *arr;
}

template<typename T>
void print(T* arr, int size) {
	if (arr == nullptr) return;
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {

	//int* arr = nullptr;
	//int CurSize = 10;
	//takeMemory(&arr, CurSize);
	//for (int i = 0; i < CurSize; ++i)
	//	cout << arr[i] << endl;
	//takeMemoryNew(arr, CurSize * 2);
	//for (int i = 0; i < CurSize*2; ++i)
	//	cout << arr[i] << " ";
	//cout << endl;
	//int& S = CurSize;//тип& имя_новое=переменная
	//S = 20;
	//for (int i = 0; i <CurSize; ++i)
	//	cout << arr[i] << " ";
	//cout << endl;
	//int Exampl = -10;
	//S = Exampl--;
	//cout << CurSize << " " << S << "  other:" << Exampl << endl;
	//cout << &CurSize << " " << &S << " Exampl" << &Exampl << endl;
	//int* P = &S;
	//*P = 15;
	//P = &Exampl;
	//*P = 0;
	//cout << CurSize << " " << S << "  other:" << Exampl << endl;
	//int& Ref = *(new int(100));
	//cout << "value " << Ref << endl;
	//cin >> Ref;
	//cout << (Ref % 2 ? "odd" : "even") << endl;
	//delete& Ref;
	
	/*long val = 10;
	f(val);
	cout << "new value " << val << endl;
	long equal = -1;
	swap(val, equal);
	cout << "value: " << val << "  eq" << equal << endl;*/
	//int* Arr = 0;
	//int CurSize = 20;
	//takeMemoryNew(Arr, CurSize);
	//int MIN, MAX;
	//print(Arr, CurSize);
	//find_min_max(Arr, CurSize, MIN, MAX);
	//cout << "min value: " << MIN << " max value:" << MAX << endl;
	////написать функцию, которая возвращает в место вызова 3 значения
	////  из массива чисел:
	////количество чисел меньше 0, количество чисел больше 0, 
	////количество чисел равных 0
	//int value;
	//cout << "Enter...";
	//cin >> value;
	//int x=findElement(Arr, CurSize, value);
	//findElement(Arr, CurSize, value) = -15;
	//print(Arr, CurSize);
	//addElement(Arr, CurSize);
	//print(Arr, CurSize);
	
	//int x = 10;
	//double y = 5;
	//char z = '4';
	//cout << "int " << sizeof(int) << " " << sizeof(x) << "  double:" <<
	//	sizeof(5.6) << " " << sizeof(y) << " char+ptr " << sizeof(char) << " "
	//	<< sizeof(&z) << " "<<sizeof(&x) << endl;
	////malloc,calloc,realloc
	//malloc(5);
	//int* I = new int[10]{};
	//delete[]I;
	//void* ptr;
	//I = (int*)malloc(sizeof(int) * 10);
	//I[0] = 0;
	//void* a=nullptr;//char*
	//a = new int;
	//calloc(Count, sizeof(int));
	//free(a);//delete
	
	int* Arr = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
	unsigned int S = 10;
	AAAA(Arr, S, 5);
	print(Arr, S);
	addElementNew(3, S, Arr, 10);
	print(Arr, S);
	delete[]Arr;
	//1.Функция удаляет Х элемнтов массива с позиции У.
	//2.Добавляет М элементов в начало массива.

	
}