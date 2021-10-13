#include <iostream>
#include <random>//random_device
#include <conio.h>
#define Kvadrat(X) (X)*(X)
#define Print(X,Y) for (int i = 0; i < Y; ++i) { cout<<X[i]<<endl;}
using namespace std;
random_device Rand;
inline double summa(double x, double y) {
	return x + y;
	//1. нет циклов
	//2. нет рекурсии
	//3. небольшая
}

inline void Log(const char* er, int line) {
	cout << "Error:" << er << " in line:" << line << endl;
}

void func_example(int x,int y);// объявление функции или прототип функции
void fill_array(char S[], int size) {
	for (int i = 0; i < size; ++i) {
		S[i] = Rand() % 2 ? (Rand() % 26 + 'a') : (Rand() % 26 + 'A');
	}
}
void print_array(char S[], int size);
bool isSipmle(int Val);
int A1[10]{ 1,2,3,4,5,6,7,8,9,0 };

int summa(int A[], int size = 10);

int maxmin(int A[], int size=10, bool max = true);
void sorting(int A[], int size, bool toUp = true);
void print_array_int(int S[], int size);
int main() {
	
	//func_example(5, 8);
	//char Str[20];
	//fill_array(Str, 20);
	//print_array(Str, 20);
	//cout << "Is simple value 7? " << (isSipmle(7) ? "yes" : "no") << endl;
	//int Arr[20] = {1,2,3,4,6,7,2,54,347,6,1345,5684,4,34};
	//summa(Arr);
	//cout << "max Arr " << maxmin(Arr, 20) << endl;
	//cout << "min Arr " << maxmin(Arr, 20,false) << endl;
	//sorting(Arr, 20);//сортировка по возрастанию
	//print_array_int(Arr, 20);
	//sorting(Arr, 20,false);//сортировка по убыванию
	//print_array_int(Arr, 20);
	cout << Kvadrat(2) << endl;
	//cout<<2*2<<endl;
	cout << Kvadrat(4 - 2) << endl;
	//4-2*4-2
	char s[] = { 100,101,102 };
	int d[] = { 0,2,3 };
	Print(s, 3);
	Print(d, 3);
	if (d[0] == 0)
		Log("delenie na 0", __LINE__); __LINE__;
	//1. Написать макрос, возводящий значение в куб
	//2. Написать inline функцию, возвращающую максимальное значение из 3 значений
	//3. Написать  inline функцию, находящую среднее арифметическое 2 чисел
	//4. Написать функцию, находящую факторил числа, по умолчанию ищет факториал 5
	//5. Написать  функцию, генерирующее число в дипозоне от A до В.
	//По умолчанию А=0, В=100
	//6. Для целочисленного массива написать функцию, находящую колчиество четных
	//или нечетных значений в зависимости от 3 параметра(по умолчанию четных)

}

int maxmin(int A[], int size, bool max) {
	int value = A[0];
	for(int i=0;i<size;++i)
		if (max) {
			if (value < A[i])//поиск максимального
				value = A[i];
		}
		else {
			if (value > A[i])//поиск минимального
				value = A[i];
		}
	return value;
}
void sorting(int A[], int size, bool toUp) {
	for (int i = 1; i < size; ++i) {
		int tmp=A[i];
		
		if (toUp) {
			for (int j = i; j > 0 && A[j - 1] > tmp; --j) {
				A[j] = A[j - 1];
				A[j - 1] = tmp;
			}
		}
		else {
			for (int j = i; j > 0 && A[j - 1] <tmp; --j) {
				A[j] = A[j - 1];
				A[j - 1] = tmp;
			}
		}
	}
}

int summa(int A[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += A[i];

	return sum;
}

bool isSipmle(int Val)
{
	for (int del = 2; del < Val; ++del)
		if (Val % del == 0)
			return false;
	return true;
}
void print_array(char S[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << S[i] << " ";
	}
	cout << endl;
}
void print_array_int(int S[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << S[i] << " ";
	}
	cout << endl;
}
void func_example(int x, int y)
{
	for (int i = 0; i < x; ++i) {
		for (int i = 0; i < y; ++i) {
			cout << "*";
		}
		cout << endl;
	}
}
