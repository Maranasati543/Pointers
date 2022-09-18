#include <iostream>
using namespace std;

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void p_swap(int *pn1, int *pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}
// —сылки в качестве параметров функции.
void refswap(int &refn1, int &refn2) {
	int tmp = refn1;
	refn1 = refn2;
	refn2 = tmp;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 15;
	// указатели на переменные
	/*cout << "јдрес n =  " << &n << "\n";
	int* pn; //объ€вл€ем указатель pn
	pn = &n; // напрвл€ем указатель на переменную n
	cout << "pn = " << pn << "\n"; // выводим значение pn
	cout << "n = " << n << "\n";
	cout << "*pn = " << *pn << "\n";// использу€ разыменвание "*" выводим n
	*pn = 20; // использу€ разыменвание "*" мен€ем значение n
	cout << "Ќова€ n = " << n << "\n"; 
	pn = &m; // перенаправл€ем указатель на адрес m
	cout << " јдрес m = " << &m << "\n";
	cout << "    pn = " << pn << "\n";
	int* pm = &m; // создаем еще один указатель и направл€ем его на m
	cout << "    pm = " << pm << "\n";*/
// указатели массивов
	/*int mass[5]{5,8,0,1,7};
	int* pm2 = &mass[2];
	cout << *pm2 << "\n";
	pm2++;
	cout << *pm2 << "\n";
	cout << mass << "\n";//адрес 1 го элемента массива
	pm2 = mass;
	cout << *pm2 << "\n";//5
	cout << "ћассив:\n";
	for (int i = 0; i < 5; i++)
		//cout << mass[i] << ",";
	cout << *(pm2 + i) << ",";
	// mass = &n; // ошибка т к название массива нельз€ перенаправл€ть
	cout << "\b\b.\n";*/
	
// создать функцию мен€ющую значени€ 2-х переменных местами
	/*cout << n << " " << m << "\n";
	//my_swap(n, m);//не работает т к параметры функции это копии
	p_swap(&n, &m);
	cout << n << " " << m << "\n";*/

	// —сылки
	/*int* pn = &n;
	cout << "*pn = " << *pn << "\n"; // разыменование неудобно

	int& refn = n;
	cout << "refn" << refn << "\n";
	refn = 20;
	cout << "нова€ n = " << n << "\n";*/


	// —сылки в качестве параметров функции. создать функцию мен€ющую значени€ 2-х переменных местами
	cout << n << " " << m << "\n";
	//my_swap(n, m);//не работает т к параметры функции это копии
	//p_swap(&n, &m); // неудобно т к передаем адреса
	refswap(n, m);
	cout << n << " " << m << "\n";




	return 0;
}