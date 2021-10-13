#include <iostream>
#include <random>//random_device
#include <conio.h>
#include <string.h>//cstring

using namespace std;
random_device Rand;
template<typename T>
void param(T*& y,unsigned int x ) {
	T* n = new T[x + 1];
	if (!n) return;
	if (y) {
		for (unsigned int i = 0; i < x; ++i)
			n[i + 1] = y[i];
		delete y;
	}
	y = n;
	y[0] = -1;
}

unsigned int findChar(char* Str, char sim) {
	for (unsigned int i = 0; Str[i] != '\0'; ++i)
		if (Str[i] == sim)
			return i;
	return -1; UINT32_MAX;
	
}

int main() {
	//int* mas = new int[5]{ 6,7,4,4,7 };
	//param(mas, 5);
	//for (unsigned int i = 0; i < 6; ++i)
	//	cout << mas[i] << " ";
	//cout << endl;
	//"value";//const char*
	//char S[] = "slovo";
	//char S1[20] = "next word";
	//char S2[100] = { 'a','b','c' };
	//const char* S3 = "const sentense";
	//char NonS[4] = { '1','a','.','=' };
	///*S[4] = Rand() % 26 + 'A';*/
	//cout << "S " << S << "\nS1" << S1 
	//	<< "\n NON:" << NonS << endl;
	//cout << "enter word:";
	//cin >> S2;
	//unsigned int len = 0;
	//for (unsigned int i = 0; S2[i] != '\0'; ++i)
	//	len++;
	//cout << "lenght entring word:" << len << endl;
	///*int x, y;
	//cin >> x >> y;*/
	//if (findChar(S2, 'o') != -1) {
	//	cout << "find o on position " << findChar(S2, 'o') << endl;
	//}
	//else
	//	cout << "not find\n";
	//1.функция которая считает длину строки
	//2.функция которая меняет символ х на у  (х и у вводятся с клавиатуры)
	//3.функция которая считает количество символа х(х вводятся )
	
	//gets_s();
	//cout << "Enter sentence:";
	//char* Stroka = new char[500];
	//gets_s(Stroka, 500);
	//cout << "You enter:";
	//puts(Stroka);//cout<<Stroka<<endl;
	////putch('1');
	//int Len=strlen(Stroka);
	//cout << "You enter:" << Len << " symbols\n";
	////strchr,strrchr,ststr
	//cout << "find sim 'l' " << strchr(Stroka, 'l') << endl;
	//cout << "find sim 'l' from end " << strrchr(Stroka, 'l') << endl;
	////while (strchr(Stroka, 'a')) {
	////	*strchr(Stroka, 'a') = 'o';
	////}
	//puts(Stroka);
	//int count_space = 0;
	//char* TMP = Stroka;
	//while (strchr(TMP, ' ')) {
	//	++count_space;
	//	TMP = strchr(TMP, ' ') + 1;
	//}
	//cout << "count words in sentence:" << count_space + 1 << endl;
	//if (strstr(Stroka, "change")) {
	//	cout << "find\n";
	//}
	//else
	//	cout << "not find\n";
	char Chislo[20] = "123456789123456";
	cout << atoi(Chislo) << " " << atof(Chislo) << " " 
		<< atoll(Chislo) << endl;//atoll
	//"5+4";
	//cout << atol("22-450") << endl;;
	char figs[][20] = { "triangle 3",
		"square 5",
		"square 6",
		"pentagon 5",
		"triangle 4",
		"circle 5",
		"square 10",
		"square 4",
		"pentagon 4",
		"hexagon 8",
		"triangle 44",
		"circle 10" };
	for (int i = 0; i < 12; ++i) {
		if (!strchr(figs[i], ' '))
			continue;
		int len = atoi(strchr(figs[i], ' ') + 1);
		if (strstr(figs[i], "square"))
			cout << "P " << 4 * len << endl;
		if (strstr(figs[i], "triangle"))
			cout << "P " << 3 * len << endl;
	}
	//1. Пользователь вводит математическое выражение с двумя действиями
	// вычислить его результат (в выражении используются только + и -)
	//Например: 23+5-7 или 5-456+1
	//2.Пользователь  вводит выражение, посчитать сколько раз встречается
	//слово code.
	/*cin >> figs[0];
	getchar();
	gets_s(figs[0],20);*/

}