#include <iostream>
#include <random>//random_device
#include <conio.h>
#include <string.h>//cstring
#include <stdio.h>//fopen
using namespace std;
random_device Rand;
template<typename Type>
void print(Type**& arr, int row, int col) {
	cout << "\narray col " << col << "  row " << row << endl;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
template<typename T>
void getMemory(T**& arr, int row, int col) {
	if (arr)
		delete[] arr;
	arr = nullptr;
	arr = new T * [row];
	for (int i = 0; i < row; ++i) {
		*(arr + i) = new T[col];
		for (int j = 0; j < col; ++j) {
			*(*(arr + i) + j) = Rand() % 80 + 30 + Rand() % 100 * 0.01;
		}
	}
}
template<typename T>
void getMemory(T***& arr, int x, int y, int z) {
	if (arr)
		delete[] arr;
	arr = nullptr;
	arr = new T * *[x];
	for (int i = 0; i < x; ++i) {
		*(arr + i) = new T * [y];
		for (int j = 0; j < y; ++j) {
			*(*(arr + i) + j) = new T[z];
			for (int k = 0; k < z; ++k)
				arr[i][j][k] = Rand() % 80 + 30 + Rand() % 100 * 0.01;
		}
	}
}
void addRow(int**& arr, int row, int col, int poz_new_row) {
	int** tmp = new int* [row + 1];
	if (!tmp)
		return;
	for (int i = 0; i < poz_new_row; ++i) {
		*(tmp + i) = *(arr + i);
	}
	*(tmp + poz_new_row) = new int[col];
	if (!*(tmp + poz_new_row)) {
		delete[]tmp;
		return;
	}
	for (int j = 0; j < col; ++j)
		*(*(tmp + poz_new_row) + j) = Rand() % 100 + 100;
	for (int i = poz_new_row; i < row; ++i)
		tmp[i + 1] = arr[i];
	if (arr)
		delete[] arr;

	arr = tmp;
}
template<typename T>
void addRow(T**& arr, int row, int col) {
	T** tmp = new T * [row + 1];
	if (!tmp)
		return;
	for (int i = 0; i < row; ++i) {
		*(tmp + i) = *(arr + i);
	}
	*(tmp + row) = new T[col];
	if (!*(tmp + row)) {
		delete[]tmp;
		return;
	}
	for (int j = 0; j < col; ++j)
		*(*(tmp + row) + j) = Rand() % 100 + 100;

	if (arr)
		delete[] arr;

	arr = tmp;
}
template<typename T>
void addCol(T**& arr, int row, int col) {
	T** tmp = arr;
	for (int i = 0; i < row; ++i) {

		T* t = new T[col + 1];
		if (!t)
			return;

		for (int j = 0; j < col; ++j)
			t[j] = arr[i][j];

		if (*(tmp + i))
			delete[] tmp[i];
		*(tmp + i) = t;
		tmp[i][col] = Rand() % 10 * -1;
	}
	arr = tmp;

}
template<typename T>
void delRow(T**& arr, int row, int col) {
	T* del = arr[row - 1];
	T** tmp = (T**)realloc(arr, sizeof(T*) * (row - 1));
	if (!tmp)
		return;
	delete[] del;
	arr = tmp;
}
template<typename T>
void delCol(T**& arr, int row, int col) {
	T** tmp = arr;
	for (int i = 0; i < row; i++) {
		T* t = (T*)realloc(arr[i], sizeof(T) * (col - 1));
		if (!t)
			return;
		arr[i] = t;
	}
	arr = tmp;
}
template<typename T>
void exit(T**& arr, int row, int col) {
	if (arr) {
		for (int i = 0; i < row; i++)
			delete[]arr[i];
		delete[]arr;
	}
	exit(105);
}

void func(int c) {
	cout << "cube " << c << " = " << c * c * c << endl;
}
int func() {
	return Rand() % 1000;
}
template<typename T>
void less1(T& x, T& y) {
	if (x < y)
		swap(x, y);
}
void less1(int& x, int& y) {
	if (x < y)
		swap(x, y);
}
void bigest(int& x, int& y) {
	if (x > y) {
		swap(x, y);
	}
}
template<typename T>
void sorting(T* M, int size, void(*func)(T&, T&))
{
	for (int x = 0; x < size; x++) {
		for (int j = 0; j < size - 1 - x; j++) {
			func(*(M + j), *(M + j + 1));
		}
	}
}
void sorting(int* M, int size, void(*func)(int&, int&))
{
	for (int x = 0; x < size; x++) {
		for (int j = 0; j < size - 1 - x; j++) {
			func(*(M + j), *(M + j + 1));
		}
	}
}

void sum_func(int& a, int& b) {
	a += b;
}

//1.написать функцию добавления Х строк в конец массива
//2.написать функцию удаления Х строк с конца массива
//3.удалить строчку с минимальной суммой
template<typename T>
void addOne(T*& mas, size_t& size,T val) {
	T* newM = new T[size + 1];
	if (!newM) return;
	for (int i = 0; i < size; ++i)
		newM[i] = mas[i];
	newM[size++] = val;
	if (mas)
		delete[]mas;
	mas = newM;
}


int main() {
	//int** arr2D = nullptr;
	//int*** arr3D = nullptr;
	//int s1 = 3, s2 = 5, s3 = 10;
	//getMemory(arr2D, s1, s2);
	////getMemory(arr3D, s1, s2, s3);
	//print(arr2D,s1,s2);
	////cout << "----------------------\n NEXT PRINT 3D array\n"
	////	"---------------------------------\n";
	////for (int i = 0; i < s1; ++i)
	////	print(arr3D[i], s2, s3);
	////for (int i = 0; i < s1; ++i) {
	////	for (int j = 0; j < s2; ++j)
	////		delete[] arr3D[i][j];
	////	delete[]arr3D[i];
	////}
	////delete[] arr3D;
	////exit(arr2D, s1, s2);
	//int summa = 0;
	//for (int i = 0; i < s1; ++i)
	//	for (int j = 0; j < s2; ++j)
	//		summa += arr2D[i][j];
	//cout << "summa " << summa << endl;
	//addRow(arr2D, s1++, s2,2);
	//addCol(arr2D, s1, s2++);
	//print(arr2D, s1, s2);
	//addRow(arr2D, s1++, s2);
	//print(arr2D, s1, s2);
	//delRow(arr2D, s1--, s2);
	//delCol(arr2D, s1, s2--);
	//print(arr2D, s1, s2);

//	const char* names[] = { "Boris","Ivan","Gleb","Victor","Petr",
//"Sidor","Roman","Fedor" };
//	const char* end_name[] = { "ov","ev","in","yan","enko","illi" };
//	
//	char*** Students;//0 surname 1  name 2 univer
//	Students = new char** [3]{};
//	int count = 25;
//	for (int i = 0; i < 3; ++i) {
//		Students[i] = new char* [count];
//		for (int j = 0; j < count; ++j) {
//			Students[i][j] = new char[15]{};
//			if (i == 0) {
//				strcpy_s(Students[i][j],15, names[rand() % 8]);
//				strcat_s(Students[i][j], 15, end_name[rand() % 6]);
//			}
//			if (i == 1) 
//				strcpy_s(Students[i][j], 15, names[rand() % 8]);
//			if (i == 2)
//				strcpy_s(Students[i][j], 15, "SPBGU");
//		}
//	}
//	for (int j = 0; j < count; ++j) {
//		cout << Students[0][j] << " " << Students[1][j] <<
//			" from " << Students[2][j] << endl;
//	}

	//cout << main << endl;
	////указатель на функцию
	//void(*cube)(int) = func;
	////тип_функции(*имя_указателя)(параметры для функции)
	//cube(12);
	//int(*random)();
	//random = func;
	//cout << "random " << random() << endl;
	//////random = main;
	//////random();
	//int** A=nullptr;
	//getMemory(A, 5, 5);
	//print(A, 5, 5);
	//for (int i = 0; i < 5; ++i) {
	//	if (i % 2)
	//		sorting(A[i], 5, less1);
	//	else
	//		sorting(A[i], 5, bigest);
	//}
	//print(A, 5, 5);
	//sorting(A[0], 5, sum_func);
	//print(A, 5, 5);
	////addRow,delRow
	//void(*arr_func[5])(int**&, int, int) = { exit,getMemory<int>,
	//	print<int>,addCol<int>,delCol<int> };
	//int row, col;
	//cout << "Enter size array ";
	//cin >> row >> col;
	//getMemory(A, row, col);
	//while (true) {
	//	int answer;
	//	cout << "Enter 0- exit,1-new arr," 
	//		"2-print,3 add col,4 -del col\n";
	//	cin >> answer;
	//	arr_func[answer % 5](A, row, col);
	//}
	//FILE* file;
	//fopen_s(переменная указатель на файл, имя файла, параметр открытия)
	//"w" - на запись
	//r - на чтение, а - добавление в конец, b - в бинарном виде
	//+
	//fclose(FILE*) -закрытие файла
	//fopen_s(&file, "2021.09.29.Darr.cpp", "r");
	//if (file == nullptr) {
	//	cout << "not open file\n";
	//	return 0;
	//}
	//FILE* out;
	//fopen_s(&out, "int.xls", "w");
	////fscanf()
	////fgets()
	////fread
	//char buff[500] = {};
	//fscanf_s(file, "%s", buff, 500);
	//cout << "first " << buff << endl;
	//fprintf(out, "first \t%s\n", buff,500);
	//fscanf_s(file, "%s", buff, 500);
	//cout << "second " << buff << endl;
	//fprintf(out, "second \t%s\n", buff, 500);
	//
	////fgetc(file);

	//fgets(buff, 500, file);
	//cout << "line:" << buff << endl;
	//fputs("line\t",out);
	//fputs(buff, out);

	//fclose(file);
	//fclose(out);
	//FILE* Work;
	//fopen_s(&Work, "2021.09.29.Darr.cpp", "r");
	//if (Work == nullptr)
	//	return 0;
	//int counter_cout = 0, counter_LINE_cout = 0;
	//while (!feof(Work)) {//пока не дошли до конца файла
	//	char buff[500] = {};
	//	fgets(buff, 500, Work);//читаем  из файла по строчно
	//	cout << buff << endl;
	//	if (strstr(buff, "cout"))//считаем количество строк где встречается cout
	//		counter_LINE_cout++;
	//	char* tmp = buff;
	//	while (strstr(tmp, "cout")) {
	//		counter_cout++;
	//		tmp = strstr(tmp, "cout") + 1;
	//	}
	//}
	//cout << "line :" << counter_LINE_cout << "  counter:" << counter_cout << endl;
	//fclose(Work);
	//FILE* tmp;
	//fopen_s(&tmp, "array.txt", "r");
	//float* ptr = nullptr;
	//size_t Size = 0;
	//if (tmp) {
	//	for(;!feof(tmp);)
	//	{
	//		float t = 0;
	//		fscanf_s(tmp, "%f", &t);
	//		addOne(ptr, Size, t);
	//	}
	//	fclose(tmp);
	//}
	//float sum = 0;
	//for (int i = 0; i < Size; ++i) {
	//	cout << ptr[i] << " ";
	//	sum += ptr[i];
	//}
	//cout << endl;
	//fopen_s(&tmp, "array.txt", "w");
	//if (tmp == nullptr) return 0;
	//sorting(ptr,Size,less1);
	//for (int i = 0; i < Size; ++i) {
	//	fprintf(tmp, "%.3f ", ptr[i]);
	//}
	//fprintf(tmp, "%.3f", sum);
	//html.xml.json.csv.
}