#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <random>//random_device
#include <conio.h>
#include <string.h>//cstring
#include <stdio.h>//fopen
using namespace std;
random_device Rand;

struct table {
	unsigned int l, w, h;
	char mat[20];
	char color[15];
}one,*two,&three=one;

void display(table tmp/*,const char* type*/) {
	cout /*<< type*/<<" table:" << tmp.l << "x" << tmp.w << "x"
		<< tmp.h << " material:" << tmp.mat << " color:" <<
		tmp.color << endl;
}
table createTable() {
	table tmp;
	cout << "Enter gab:";
	cin >> tmp.l >> tmp.w >> tmp.h;
	cout << "Enter material & color:";
	cin >> tmp.mat >> tmp.color;
	return tmp;
}
void load_table(table& tmp) {
	tmp.l = Rand() % 100 + 40;
	tmp.w = Rand() % 80 + 20;
	tmp.h = Rand() % 50 + 50;
	const char* cls[] = { "red","yellow","white","black","brown"};
	strcpy(tmp.color, cls[Rand() % 5]);
	const char* mat[] = { "wood","metal","plastic","glass","wood-metal","stone"};
	strcpy(tmp.mat, mat[Rand() % 6]);
}
struct man {//описание структуры man(им€ структуры),man - наш новый тип данных
			//с 5 по 10 строки - пол€ структуры
	char Name[50];//поле типа массив символов 
	char Familiy[50];
	int age;
	int hight;
	struct man* Mother;//структура может содержать указатель на саму 			
	struct man* Father;//себ€ или другие структуры, но не может содержать 
					   //в качестве пол§ объект такого же типа как сама структура (другого типа может)
};//здесь через "," можно указать переменные данного типа (пример: }I,We;)

struct student {
	char FIO[50];
	double average;
	int year_enter;
};

struct group {
	char name[20];
	student Sts[20];
	char profil[30];
};
struct univer {
	char name[20];
	group Study_gr[100];
	int count_gr;
};
struct Auto {
	char type[15];
	unsigned int year;
	double cost;

};
void print(const Auto& a);
void create(Auto& a);
/// <summary>
/// 
/// </summary>
/// <param name="a"></param>
void print(const Auto& a) {
	cout << a.type << " year:" << a.year << "  ostatochnaya "
		"stoimost' " << a.cost << endl;
}
const char* auto_type[] = {"sedan","hatchback","universal","minivan","jeep"};
void create(Auto& a) {
	strcpy_s(a.type, auto_type[Rand() % 5]);
	a.year = Rand() % 50 + 1968;
	a.cost = Rand() % 1000 * 1000 + Rand() % 1000 + Rand() % 100 * 0.01;
}
void getMemory(int** P, int size) {
	if (*P) free(P);
	*P = new int[size];
}
struct mebel {
	char name[20];
	unsigned int counter;
	unsigned int cost;
};
void print(const mebel& a) {
	cout << "name:" << a.name << " count:" 
		<< a.counter << " cost:" << a.cost << endl;
}
void create(mebel& a) {
	cout << "Enter name";
	cin >> a.name;
	cout << "Enter count:";
	cin >> a.counter;
	cout << "Enter cost:";
	cin >> a.cost;
}
int main() {
	cout << "table " << sizeof(table) << endl;
	//table myPC_table;
	//myPC_table.l = 140;
	//myPC_table.w = 70;
	//myPC_table.h = 90;
	//strcpy(myPC_table.mat,"metal");
	//strcpy(myPC_table.color, "red");

	//cout << "pc table:" << myPC_table.l<<"x"<<myPC_table.w<<"x"
	//	<<myPC_table.h<<" material:"<<myPC_table.mat<<" color:"<<
	//	myPC_table.color << endl;
	//table WorkTable = { 100,70,90,"wood","brown" };
	//cout << "work table:" << WorkTable.l << "x" << WorkTable.w << "x"
	//	<< WorkTable.h << " material:" << WorkTable.mat << " color:" <<
	//	WorkTable.color << endl;
	/*table* shop = new table[30];
	for (int i = 0; i < 30; ++i) {
		load_table( shop[i]);
	}
	cout << " print list table\n";
	for (int i = 0; i < 30; ++i) {
		display(shop[i]);
	}
	cout << "Enter material for choose:";
	char mat[20];
	cin >> mat;
	for (int i = 0; i < 30; ++i) {
		if(strcmp(mat,shop[i].mat)==0)
			display(shop[i]);
	}
	cout << "\nsort by lenght\n";
	for (int i = 0; i < 30; ++i) {
		for (int j = i + 1; j < 30; ++j) {
			if (shop[i].l < shop[j].l)
				swap(shop[i], shop[j]);
		}
	}
	for (int i = 0; i < 30; ++i) {
		display(shop[i]);
	}*/
	//man I;//объ€вление переменной типа man
	//man We = { "Adme","Krom",45,199,&I,NULL };//объ§вление и инициализаци§ (заполнение)
	//										  //всех полей переменной We
	//I.hight = 190;//присвоение значени§ полю hight объекта I структуры man 
	//strcpy(I.Familiy, "Tromb");
	//strcpy(I.Name, "Doctor");
	//We.age = 30;
	//I.age = 18;
	//man Kirill;
	//Kirill.Mother = &We;//присвоение полю Mother адреса объекта We
	//Kirill.Father = &I;//аналогично поле Father
	//cout << Kirill.Mother->Name << endl;//ввывод на экран имени матери †ирилла
	//cout << I.Name << " " << I.Familiy << " " << I.age << endl;
	//table *Next = new table;
	//load_table(*Next);
	//cout << "material " << Next->mat << endl;
	//Next->l = 150;
	//Next->w = 100;
	//Next->h = 150;
	//int * P=new int(9);
	//char* S = new char[5]{'A','B','C'};
	//int* Y = P;
	//P = new int(100);
	//delete Y;
	//*P = -1;
	//int** X = &P;
	

	mebel* Shop = nullptr;
	unsigned int size = 0;
	FILE* file_read;
	char file_name[255]="mebel.txt";
	//cin>>file_name;
	fopen_s(&file_read, file_name, "r");
	//FILE* fopen(char*,char*);
	if (file_read) {
		while (!feof(file_read)) {
			int counter, price;
			char buff[20] = {};
			if (!fscanf_s(file_read,"%s%i%i",buff,20,&counter,&price))
				break;
			mebel* newShop = new mebel[size + 1];
			for (int i = 0; i < size; ++i)
				newShop[i] = Shop[i];
			if (Shop) delete[]Shop;
			Shop = newShop;
			Shop[size].counter = counter;
			Shop[size].cost = price;
			strcpy(Shop[size].name, buff);
			size++;
		}
		fclose(file_read);
	}

	for (int i = 0; i < size; ++i) {
		print(Shop[i]);
	}
	
	fopen_s(&file_read, file_name, "w");
	if (file_read) {
		for (int i = 0; i < size; ++i) {
			fprintf(file_read, "%s %u %u", Shop[i].name,
				Shop[i].counter,Shop[i].cost);
			if (i < size - 1)
				fprintf(file_read, "\n");
		}
		fclose(file_read);
	}
}