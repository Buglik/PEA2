#include <iostream>
#include "menu.h"
using namespace std;


int showMenu() {
	int ans;
	cout << "==============================================================" << endl;
	cout << "1. Wczytaj nowe dane z pliku " << endl;
	cout << "2. Wprowadz kryterium stopu " << endl;
	cout << "3. Wybor sasiedztwa" << endl;
	cout << "4. Uruchom Tabu Search" << endl;
	cout << "5. Ustaw wspolczynnik zmiany temperatury dla SW" << endl;
	cout << "6. Uruchom Symulowane Wyzarzanie " << endl;
	cout << "0. ZAKONCZ" << endl;
	cout << "==============================================================" << endl;
	cin >> ans;

	return ans;
}

int showTSMenu() {
	int ans;
	cout << "==============================================================" << endl;
	cout << "0.Ruch swap " << endl;
	cout << "1.Ruch insert " << endl;
	cout << "2.Ruch reverse " << endl;
	cout << "==============================================================" << endl;
	cin >> ans;

	return ans;
}

int showStopTimeMenu() {
	int stopTime;
	cout << "==============================================================" << endl;
	cout << "Wprowadz kryterium stopu (czas w sekundach): " << endl;
	cout << "==============================================================" << endl;
	cin >> stopTime;
	return stopTime;
}

double showCoolerMenu() {
	double cooler;
	cout << "==============================================================" << endl;
	cout << "Wprowadz wspolczynnik zmiany temperatury: " << endl;
	cout << "==============================================================" << endl;
	cin >> cooler;
	return cooler;
}

double showInitTempMenu() {
	double temp;
	cout << "==============================================================" << endl;
	cout << "Wprowadz temperature poczatkowa: " << endl;
	cout << "==============================================================" << endl;
	cin >> temp;
	return temp;
}

double showMinTempMenu() {
	double temp;
	cout << "==============================================================" << endl;
	cout << "Wprowadz temperature koncowa: " << endl;
	cout << "==============================================================" << endl;
	cin >> temp;
	return temp;
}

int showIterLimitMenu() {
	int iter;
	cout << "==============================================================" << endl;
	cout << "Wprowadz dlugosc epoki (ilosc wewnetrznych iteracji): " << endl;
	cout << "==============================================================" << endl;
	cin >> iter;
	return iter;
}