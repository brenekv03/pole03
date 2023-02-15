// pole03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	int pole[10];
	cout << "Zadejte pocet prvku posloupnosti, max 10: ";
	cin >> n;
	int x;
	cout << "\nZadavejte cisla posloupnosti:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		pole[i] = x;
	}
	int posledniPrvek = pole[n - 1];
	bool nejmensiVetsiNezPosledni = false;
	int min = INT32_MAX;
	for (int i = 0; i < n; i++)
	{
		if (pole[i] > posledniPrvek && pole[i] < min)
		{
			min = pole[i];
			nejmensiVetsiNezPosledni = true;
		}
	}
	if (nejmensiVetsiNezPosledni)cout << "\nNejmensi cislo vetsi nez posledni je: " << min;
	else cout << "\nNejmensi cislo vetsi nez posledni neexistuje";
}

