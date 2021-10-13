#include <iostream>
#include <random>//random_device
#include <conio.h>
#include <string.h>//cstring
#include <stdio.h>//fopen
using namespace std;
random_device Rand;

struct  Example {
	int x;
	double y;
	char z;
};
union Type {
	int x;
	double y;
	char z;
};

union M {
	int X;
	unsigned char Z[4];
};
void inicChislo(M* chislo) {
	cout << "vvedite chislo" << endl;
	cin >> chislo->X;
}
void printAllBytes(const M& chislo) {
	cout << "chislo =";
	for (int i = 0; i < 4; i++) {
		cout << (int)chislo.Z[i] << " ";
	}
	cout << endl;
}

void vivodByte(const M& chislo, int X) {
	if (X != 2 && X != 16) {
		return;
	}
	cout << "chislox16 =";
	for (int i = 0; i < 4; i++) {
		cout << hex << (int)chislo.Z[i] << " ";
	}
	cout<<dec << endl;
}
//enum color {red=1,green =10, yellow,none=0,black};
enum kind { fish, bird, reptiles, mammul, bug };
union haracter {
	bool river_or_sea;
	double speed;
	char color[10];
	char type_eat[10];
	int count_legs;
};
struct animal {
	char name[20];
	kind vid;
	int age;
	haracter dop_h;
};
const char* Colors[] = { "red","black","blue",
"orange","yellow","green" };
const char* eats[] = { "grass","meat","all","bugs" };

animal new_zoo() {
	animal tmp;
	strcpy_s(tmp.name, "no_name");
	tmp.vid = (kind)(Rand() % 5);
	//cout << "Enter type animal(fish -0, bird -1, etc)";
	//int x;
	//cin >> x;
	//tmp.vid=(kind)x;
	tmp.age = Rand() % 25;
	switch (tmp.vid) {
	case fish:
		tmp.dop_h.river_or_sea = Rand() % 2; break;
	case bird:
		tmp.dop_h.speed = Rand() % 100; break;
	case reptiles:
		strcpy_s(tmp.dop_h.color, Colors[Rand() % 5]);
		break;
	case bug:
		tmp.dop_h.count_legs = Rand() % 6 + 4;
		break;
	case mammul:
		strcpy_s(tmp.dop_h.type_eat, eats[Rand() % 4]);
		break;
	}
	return tmp;
}
void print(animal tmp) {
	cout << "Name " << tmp.name << " age:" << tmp.age;
	switch (tmp.vid)
	{
	case bird:
		cout << " bird, fly speed: " << tmp.dop_h.speed
			<< endl; break;
	case fish:
		cout << " fish from " <<
			(tmp.dop_h.river_or_sea ? "river" :
				"sea") << endl; break;
	case bug:
		cout << " bug with " << tmp.dop_h.count_legs <<
			" legs \n"; break;
	default:
	case mammul:
		cout << " mammul, eat " << tmp.dop_h.type_eat << endl;
		break;
	case reptiles:
		cout << " reptiles, color is " << tmp.dop_h.color << endl;
		break;
	}
}


const char* types[] = { "moto","car","bus",
"track" };
const char* kuzov[] = { "hatch","sedan","combi",
"jeep","universal","kupe" };
const char* marka[] = { "BMW","Audi","Ferrary",
"Volvo","Sckoda","Toyota","Lifan","VAZ"};
union unique_ {
	int count_weels;
	char type_k[10];
	short pass;
	double netto;
};
struct TS {
	char marka[20];
	char type[10];
	unique_ h_ka;
	double price;
};
void create_ts(TS& avto) {
	strcpy_s(avto.type, types[Rand() % 4]);
	strcpy_s(avto.marka, marka[Rand() % 8]);
	avto.price = Rand() % 1000 * Rand() % 1000 +
		Rand() % 1000 + 10;
	if (strcmp(avto.type, "moto") == 0) {
		avto.h_ka.count_weels = Rand() % 4 + 1;
	}
	else
		if (strcmp(avto.type, "bus") == 0) {
			avto.h_ka.pass = Rand() % 30 + 10;
		}
		else if (strcmp(avto.type, "track") == 0) {
			avto.h_ka.netto = Rand() % 50 + 1.5;
		}
		else {
			strcpy_s(avto.h_ka.type_k,
				kuzov[Rand() % 6]);
		}
}
void print(TS avto) {
	cout << avto.type << " " << avto.marka << " ";
	if (strcmp(avto.type, "moto") == 0) {
		cout << "count weels " << avto.h_ka.count_weels;
	}
	else if (strcmp(avto.type, "car") == 0) {
		cout << "type kuzov " << avto.h_ka.type_k;
	}
	else if (strcmp(avto.type, "bus") == 0) {
		cout << "passangers: " << avto.h_ka.pass;
	}
	else {
		cout << "netto " << avto.h_ka.netto;
	}
	cout << " sale:" << avto.price << endl;
}

TS* create_array(int size) {
	TS* mas = new TS[size];
	for (int i = 0; i < size; ++i)
		create_ts(*(mas + i));
	return mas;
}
void print_array(TS* arr, int size) {
	for (int i = 0; i < size; ++i)
		print(*(arr + i));
	cout << "=====================\n";
}
void add_element(TS*& arr, int& size, int poz, int count = 1) {
	TS* new_arr = new TS[size + count];
	for (int i = 0; i < poz; ++i) {
		new_arr[i] = arr[i];
	}
	for (int i = poz, j = 0; j < count; ++i, j++) {
		create_ts(new_arr[i]);
	}
	for (int i = poz + count, j = poz; j < size; ++i, ++j) {
		new_arr[i] = arr[j];
	}
	delete[] arr;
	arr = new_arr;
	size += count;
}

void del_some_type(TS*& arr, int& size, const char* tp) {
	int del_val = 0;
	for (int i = 0; i < size; ) {
		if (strcmp(arr[i].type, tp) == 0) {
			for (int j = i + 1; j < size - del_val; ++j) {
				arr[j - 1] = arr[j];
			}
			del_val++;
		}
		else {
			i++;
		}
	}
	TS* newarr = (TS*)realloc(arr,
		sizeof(TS) * (size -= del_val));
	if (newarr == nullptr)
		return;
	arr = newarr;
}
//1
//Разработайте программу «Библиотека».
//Создайте структуру «Книга»(название, автор, издательство,
//жанр). 
//Создать функции для заполнения полей структуры и для вывода на экран
//2
//Реализовать структуру "Сотрудники" (ФИО, стаж, должность(директор,
//  инженер, слесарь, кадровик),
//	зарплата, обязанности).
// Обязанности реализовать как объединение(для директора : 
// главный, комерческий	или финасовый; для инженера - количество 
// сданных проектов; для слесаря - объем работы в часах;
// для кадровика : постоянная занятость или нет).
// Реализовать следующие функции :
// Заполнение объекта
// Вывод на экран данных об объекте
// Зачисление сотрудника в штат
// Увольнение

int main() {
	//Type Q;
	//Q.x = 65;
	//cout << Q.x << " y:" << Q.y << " Q.z:" << Q.z << endl;
	//Q.y = 3.1415;
	//cout << Q.x << " y:" << Q.y << " Q.z:" << Q.z << endl;
	//
	//M a;
	//a.X = 1;
	//while (a.X) {
	//	inicChislo(&a);
	//	printAllBytes(a);
	//	vivodByte(a,16);
	//}
	/*animal Zoo[10];
	for (int i = 0; i < 10; ++i) {
		Zoo[i] = new_zoo();
	}
	cout << "display all animal\n";
	for (int i = 0; i < 10; ++i) {
		print(Zoo[i]);
	}
	cout << "all mammul eats grass\n";
	for (int i = 0; i < 10; ++i) {
		if (Zoo[i].vid == mammul && strcmp(Zoo[i].dop_h.type_eat, "grass") == 0)
			print(Zoo[i]);
	}*/
	int size = 10;
	TS* Autopark = create_array(size);
	print_array(Autopark, size);
	add_element(Autopark, size, 0, 5);
	del_some_type(Autopark, size, "bus");
	cout << "without bus\n";
	print_array(Autopark, size);


}
