#include<iostream>;
#include<locale>;

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	cout << "Введите n:";
	int n;
	cin >> n;
	int number_porad = 1;
	double summa = 1;
	int fact = 1;
	if (n > 0) {
		while (number_porad <= n) {
			fact = fact * number_porad;
			summa += 1.0 / fact;
			number_porad += 1;
		}
		cout << "Сумма = " << summa;
	}
	else {
		cout << "Неверное n";
	}
}
