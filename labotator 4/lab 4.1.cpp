#include<iostream>;
#include<locale>;

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	int number, error;
	cout << "Введите количество чисел последовательности:";
	cin >> n;
	if (n > 1) {
		number = 1;
		cout << "Введите первое число последовательности:";
		double a, b;
		cin >> a;
		while (n > number) {
			cout << "Введите следующиее число последовательности:";
			cin >> b;
			if (a > b) {
				number += 1;
				a = b;
			}
			else {
				number += 1;
				error = 1;
			}
		}
		if (error == 0) {
			cout << "True";
		}
		else {
			cout << "False";
		}
	}
	else {
		cout << "Невереное значение, количество чисел последовательности должно быть больше 1";
	}
}
