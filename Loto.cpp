#include <iostream>
using namespace std;

void rules() {
	cout << "*******************************************************LOTO************************************************************" << endl<<endl;
	cout << "Tipurile de joc disponibile sunt : 1 - 6/49 , 2-5/40" << endl<<endl;


}

void game1() {
	int a[10], n[100], in[100], c = 0,k=0,x;
	bool gasit;

	cout << "Introduceti suma :"; cin >> x;

	cout << "Introduceti numerele pe care le alegeti :" << endl;
	for (int i = 1; i <= 6; i++) {
		cout << "[" << i << "]=";
		cin >> a[i];
	}

	cout << "Numerele extrase la loto sunt :";
	for (int i = 1; i <= 40; i++) {
		n[i] = rand() % 100 + 1;
		cout << n[i] << " ";

	}
	cout << endl;

	for (int j = 1; j <= 40; j++)
	{
		gasit = false;
		for (int i = 1; i <= 6; i++)
			if (a[i] == n[j]) {
				gasit = true;
				break;
			}
		if (gasit)
			in[++c] = n[j];
	}
	cout << endl;
	for (int i = 1; i <= c; i++) {
		cout << "Numar norocos : " << in[i] << endl;
		k++;
	}
	if (k == 0) {
		x = 0;
	}
	else if (k == 1) {
		x = x * 0.5;
	}
	else if (k == 2) {
		x = x * 1.2;
	}
	else if (k == 3) {
		x = x * 2.5;

	}
	else if (k == 4) {
		x = x * 5.5;

	}
	else if (k == 5) {
		x = x * 7.9;
	}
	else if (k == 6) {
		x = x *10;

	}
	cout << "Ati castigat :" << x <<" Lei" << endl;
	cout << endl;
}

void game2() {
	int a[10], n[100], in[100], c = 0, k = 0,x;
	bool gasit;

	cout << "Introduceti suma :"; cin >> x;

	cout << "Introduceti numerele pe care le alegeti :" << endl;
	for (int i = 1; i <= 5; i++) {
		cout << "[" << i << "]=";
		cin >> a[i];
	}

	cout << "Numerele extrase la loto sunt :";
	for (int i = 1; i <= 49; i++) {
		n[i] = rand() % 100 + 1;
		cout << n[i] << " ";

	}
	cout << endl;
	
	for (int j = 1; j <= 49; j++)
	{
		gasit = false;
		for (int i = 1; i <= 5; i++)
			if (a[i] == n[j]) {
				gasit = true;
				break;
			}
		if (gasit)
			in[++c] = n[j];
	}
	for (int i = 1; i <= c; i++) {
		cout << "Numar norocos : " << in[i] << endl;
		k++;
	}
	cout << endl;
	if (k == 0) {
		x = 0;
	}
	else if (k == 1) {
		x = x * 0.8;
	}
	else if (k == 2) {
		x = x * 1.9;
	}
	else if (k == 3) {
		x = x * 4.1;

	}
	else if (k == 4) {
		x = x * 7.2;

	}
	else if (k == 5) {
		x = x * 10.5;
	}
	cout << "Ati castigat :" << x << " Lei" << endl;
	cout << endl;
}



int main()
{
	int s,nr,k=1;
    rules();
	cout << "Ce tip de joc doriti sa jucati :"; cin >> s;
	cout << "Cate runde doriti sa jucati :"; cin >> nr;
	while(k<=nr){ 
		k++;
	if (s == 1) {
		game1(); 
	}
	else if(s == 2) {
		game2();
	}
	}

}

