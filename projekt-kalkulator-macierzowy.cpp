// projekt-kalkulator-macierzowy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip> //biblioteka wprowadzona w celu formatowania macierzy za pomoca komendy setw 
using namespace std;

void dodawanie()
{
	int macierz1[3][3]; //wprowadzenie macierzy1

	int macierz2[3][3]; //wprowadzenie macierzy2
	int dodawanie[3][3];

	//wprowadzanie wartosci do macierzy
	cout << "wprowadz wartosci do pierwszej macierzy" << endl;

	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cin >> macierz1[i][j]; //wprowadzanie wartosci do macierzy
		}
	}
	//analogicznie wykonana petla do drugiej macierzy
	cout << "wprowadz wartosci do drugiej macierzy" << endl;

	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cin >> macierz2[i][j]; //wprowadzanie wartosci do macierzy
			dodawanie[i][j] = macierz1[i][j] + macierz2[i][j];
		}
	}

	//wyswietlanie macierzy
	cout << "Pierwsza macierz:" << endl;
	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cout << setw(6) << macierz1[i][j]; //wyswietlanie macierzy
		}
		cout << endl;
	}
	cout << "Druga macierz:" << endl;
	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cout << setw(6) << macierz2[i][j]; //wyswietlanie macierzy
		}
		cout << endl;
	}

	//macierz wynikowa
	cout << "Macierz wynikowa:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << dodawanie[i][j];
		}
		cout << endl;
	}

}

void odejmowanie()
{
	int macierz1[3][3]; //wprowadzenie macierzy1

	int macierz2[3][3]; //wprowadzenie macierzy2
	int odejmowanie[3][3];

	//wprowadzanie wartosci do macierzy
	cout << "wprowadz wartosci do pierwszej macierzy" << endl;

	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cin >> macierz1[i][j]; //wprowadzanie wartosci do macierzy
		}
	}
	//analogicznie wykonana petla do drugiej macierzy
	cout << "wprowadz wartosci do drugiej macierzy" << endl;

	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cin >> macierz2[i][j]; //wprowadzanie wartosci do macierzy
			odejmowanie[i][j] = macierz1[i][j] - macierz2[i][j];
		}
	}

	//wyswietlanie macierzy
	cout << "Pierwsza macierz:" << endl;
	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cout << setw(6) << macierz1[i][j]; //wyswietlanie macierzy
		}
		cout << endl;
	}
	cout << "Druga macierz:" << endl;
	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cout << setw(6) << macierz2[i][j]; //wyswietlanie macierzy
		}
		cout << endl;
	}

	//macierz wynikowa
	cout << "Macierz wynikowa:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << odejmowanie[i][j];
		}
		cout << endl;
	}

}
void mnozenie()
{
	int macierz1[3][3]; //wprowadzenie macierzy1

	int macierz2[3][3]; //wprowadzenie macierzy2
	int mnozenie[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	//wprowadzanie wartosci do macierzy
	cout << "wprowadz wartosci do pierwszej macierzy" << endl;

	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cin >> macierz1[i][j]; //wprowadzanie wartosci do macierzy
		}
	}
	//analogicznie wykonana petla do drugiej macierzy
	cout << "wprowadz wartosci do drugiej macierzy" << endl;

	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cin >> macierz2[i][j]; //wprowadzanie wartosci do macierzy
		}
	}

	//wyswietlanie macierzy
	cout << "Pierwsza macierz:" << endl;
	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cout << setw(6) << macierz1[i][j]; //wyswietlanie macierzy
		}
		cout << endl;
	}
	cout << "Druga macierz:" << endl;
	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cout << setw(6) << macierz2[i][j]; //wyswietlanie macierzy
		}
		cout << endl;
	}
	//macierz wynikowa
	cout << "Macierz wynikowa:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int n = 0; n < 3; n++) {
				mnozenie[i][j] += macierz1[i][n] * macierz2[n][j];
			}
			cout << setw(6) << mnozenie[i][j];
		}
		cout << endl;
	}
}

void transpozycja() {
	int macierz1[3][3]; //wprowadzenie macierzy1

	int macierz2[3][3]; //wprowadzenie macierzy2

	//wprowadzanie wartosci do macierzy
	cout << "wprowadz wartosci do pierwszej macierzy" << endl;

	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cin >> macierz1[i][j]; //wprowadzanie wartosci do macierzy
		}
	}
	//analogicznie wykonana petla do drugiej macierzy
	cout << "wprowadz wartosci do drugiej macierzy" << endl;

	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cin >> macierz2[i][j]; //wprowadzanie wartosci do macierzy
		}
	}

	//wyswietlanie macierzy
	cout << "Pierwsza macierz:" << endl;
	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cout << setw(6) << macierz1[i][j]; //wyswietlanie macierzy
		}
		cout << endl;
	}

	//macierz wynikowa
	cout << "Macierz wynikowa:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << macierz1[j][i];
		}
		cout << endl;
	}


	cout << "Druga macierz:" << endl;
	for (int i = 0; i < 3; i++) { //petla wierszy
		for (int j = 0; j < 3; j++) { //petla kolumn
			cout << setw(6) << macierz2[i][j]; //wyswietlanie macierzy
		}
		cout << endl;
	}

	//macierz wynikowa
	cout << "Macierz wynikowa:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << macierz2[j][i];
		}
		cout << endl;
	}
}


int main() {

	//dodalam Menu, zeby widac bylo co konkretna opcja oznacza ;)
	cout << "                     MENU" << endl;
	cout << "1. Dodawanie macierzy\n2. Odejmowanie macierzy\n3. Mnozenie macierzy\n4. Transpozycja macierzy\n" << endl;

	int operacja; //wprowadzenie zmiennej odpowiadajacej opercaji
	cout << "Wpisz liczbe od 1 do 4.\nKazda odpowiada opercaji jaka zostnie wykonana." << endl;
	cin >> operacja;

	switch (operacja) {
	case 1:
		cout << "dodawanie macierzy" << endl;
		dodawanie();

		break;
	case 2:
		cout << "odejmowanie macierzy" << endl;
		odejmowanie();
		break;
	case 3:
		cout << "mnozenie macierzy" << endl;
		mnozenie();
		break;
	case 4:
		cout << "transpozycja" << endl;
		transpozycja();
		break;
	default:
		cout << "wybrales liczbe poza przedzialem" << endl;
	}
	return 0;
}