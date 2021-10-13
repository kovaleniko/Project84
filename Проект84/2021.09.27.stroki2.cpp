#include <iostream>
#include <random>//random_device
#include <conio.h>
#include <string.h>//cstring

using namespace std;
random_device Rand;


int main() {
	//char buff[255] = {};
	//cout << "Enter slovo:";
	//gets_s(buff, 255);
	//strcpy_s(buff, 255, "hello!");// buff = "hello!";
	//puts(buff);
	//strcat_s(buff, 255, " World!");// buff += "! World!";
	//puts(buff);
	//if (strchr(buff, '!')) {
	//	char tmp[40] = {};
	//	strcpy_s(tmp, 40, strchr(buff, '!') + 1);
	//	*(strchr(buff, '!') + 1) = '\0';
	//	strcat_s(buff, 255, " beautiful");
	//	strcat_s(buff, 255, tmp);
	//}
	//puts(buff);
//	const char* names[] = { "Boris","Ivan","Gleb","Victor","Petr",
//"Sidor","Roman","Fedor" };
//	const char* end_name[] = { "ov","ev","in","yan","enko","illi" };
//	char* FIO = new char[30];
//	strcpy_s(FIO, 30, names[Rand() % 8]);//=
//	strcat_s(FIO, 30, end_name[Rand() % 6]);//+=
//	cout << "Random family " << FIO << endl;
//	strcat_s(FIO, 30, " ");
//	strcat_s(FIO, 30, names[Rand() % 8]);
//	cout << "Random FIO " << FIO << endl;
//	const char* Family[] = { "Borisov","Petrov","Sidorov",
//	"Ivanov","Ivanayn","Dmitriev","Alexeev","Petrenko","Abramov","abramov"};
//	for (int i = 0; i < 10; ++i) {
//		for (int j = i + 1; j < 10; ++j) {
//			if (strcmp(Family[i], Family[j]) > 0)//0,<0,>0
//				swap(Family[i], Family[j]);
//		}
//	}
//	for (int i = 0; i < 10; ++i) {
//		puts(Family[i]);
//	}
//	cout << " " << _stricmp("Abc", "ABc") << " " << strncmp("Abc", "ABc", 2) << " "
//		<< _strnicmp("Abc", "ABd", 2) << endl;
//	char fnd[40] = {};
//	cout << "Enter family for find:";
//	cin >> fnd;
//	int j = 0;
//	for (; j < 10; ++j)
//		if (_stricmp(Family[j], fnd) == 0)
//			break;
//	if (j < 10)
//		cout << "find your man\n";
//	else
//		cout << "not find\n";
	//char MAP[][15] = { "north 5","east 7","south 8",
	//	"east 3", "north 4", "west 5" };
	//int coordX = 0, coordY = 0;
	//for (int i = 0; i < 6; ++i) {
	//	if (strchr(MAP[i], ' ') == nullptr) {
	//		continue;
	//	}
	//	int tmp = atoi(strchr(MAP[i], ' ') + 1);
	//	if (strncmp(MAP[i], "east", 4) == 0)
	//		coordY += tmp;
	//	if (strstr(MAP[i], "north") != nullptr)
	//		coordX += tmp;
	//	if (strncmp(MAP[i], "west", 4) == 0)
	//		coordY -= tmp;
	//	if (strstr(MAP[i], "south") != nullptr)
	//		coordX -= tmp;
	//}
	//cout << "coord surprise " << coordX << " " 
	//	<< coordY << endl;
	//char Students[13][20] = { "Ivanov 4.5","Petrov 3.4","Sidorov 4.7","Borisov 3.1",
	//	"Petrova 5.0","Sidorenko 3.8",
	//		"Ivanova 4.4","Ivanayn 4.5","Dmitriev 5.0","Alexeev 4.9","Petrenko 2.1",
	//	"Abramov 2.8","Abramova 3.9" };
	//1.Сколько студентов будет иметь степендию (средний бал > 4.0)
	//strcmp
	//
	
	//char* Stroka = new char[20];
	//strcpy_s(Stroka, 20, "1234567890123456789");

	//char buff[20] = "qWERtyasdfgzxcvb";
	//strcpy_s(Stroka, 20, buff);
	//_strlwr_s(Stroka, 20);
	//puts(Stroka);
	//_strupr_s(Stroka + 10, 10);
	//puts(Stroka);
	//if (_stricmp(Stroka, buff)) {//0-строки равны, <0 если в алфавитном
	//	cout << "unequal\n";
	//}
	//else {
	//	cout << "ravny\n";
	//}
	//strcpy_s(buff, 20, "Qwerty1234");
	//_strset_s(buff, 'a');
	//_strnset_s(buff, 'A', 5);
	//puts(buff);
	//_strrev(buff);
	//cout << "revers " << buff << endl;
	//_itoa_s(123, buff, 10);
	////8 may 2005 y. 
	//int day = 8, mon = 5, year = 2005;
	//char months[12][10] = { "jan","feb","mart","apr","may","jun","jul","aug",
	//	"sep","oct","nov","dec" };
	//sprintf_s(buff,"%i %s %i y",day,months[mon-1],year);
	////%i ,d,o,x,u- целые числа
	////%f ,e - дробные
	////%с - символы
	////%s - строки char*
	////%p -указатели
	//printf("Hello");
	//printf("We get data:%s\n", buff);
	//printf("tochnost %.3f\n", 1113.14);
	//scanf_s("%i.%i.%i", &day, &mon, &year);
	//
	//cout << "data:" << day << " " << mon << " " << year << endl;
	char Sentence[] = "When template arguments are provided, or,"
		" for function and class (since C++17) templates only, "
		"deduced, they are substituted for the template parameters"
		" to obtain a specialization of the template, that is, a "
		"specific type or a specific function lvalue. "
		"Specializations may also be provided explicitly: full "
		"specializations are allowed for class, variable "
		"(since C++14) and function templates, partial specializations"
		" are only allowed for class templates and variable templates (since C++14).";

	////strpbrk();
	////strtok_s;
	//char G[] = "auyoeiAYUOIE";
	//int counterG = 0;
	//char* tmp = Sentence;
	//while (strpbrk(tmp, G)) {
	//	++counterG;
	//	tmp = strpbrk(tmp, G) + 1;
	//}
	//cout << "count vowels " << counterG << endl;
	//char* finded = nullptr;
	//for (int i = 0; Sentence[i] != 0; ++i) {
	//	for (int j = 0; G[j] != 0; ++j)
	//	{
	//		if (Sentence[i] == G[j])
	//		{
	//			finded = Sentence + i;
	//			break;
	//		}
	//	}
	//	if (finded)
	//		break;
	//}
	//char Znak[] = "!.,?;:-";
	//int counterZnak = 0;
	//tmp = Sentence;
	//while (strpbrk(tmp, Znak)) {
	//	++counterZnak;
	//	puts(tmp);
	//	tmp = strpbrk(tmp, Znak) + 1;
	//	
	//	cout << endl;
	//}
	//cout << "count punctiation marks " << counterZnak << endl;
	
	char* tmp = Sentence;
	tmp = Sentence;
	char* end_sen = Sentence;
	//tmp =strtok_s(tmp, "!.?", &end_sen);
	while (tmp = strtok_s(end_sen, "!.?", &end_sen)) {
		cout << "------------\n";
		puts(tmp);
		cout << "------------\n";
	}

	//char Urav[40] = {};
	//cout << "Enter :";
	//gets_s(Urav, 40);
	//double summa = 0;
	//char* temp = Urav;
	//summa = atof(temp);
	//if (strpbrk(temp, "+-") == temp && temp[0] == '-')
	//	++temp;
	//char dig[] = "0123456789";
	//for (; strpbrk(temp, "+-");) {
	//	temp = strpbrk(temp, "+-");
	//	summa = summa + (*temp == '+' ? atof(temp + 1) : -atof(temp + 1));
	//	/*summa = summa + 
	//		(*temp == '+' ? atof(strpbrk(temp, dig)) : -atof(strpbrk(temp, dig));*/
	//	++temp;
	//}
	////cout.precision(10);
	//cout << "summa: " << summa << endl;
	char City[] = "Russia Saint-Petersburg:5282000,no";
	char* ended = City;
	char* test = strtok_s(ended, " :,", &ended);
	cout << test << " ostatok:" << ended << endl;
	 test = strtok_s(ended, " :,", &ended);
	cout << test << " ostatok:" << ended << endl;
	test = strtok_s(ended, " :,", &ended);
	cout << test << " ostatok:" << ended << endl;
	//
}