#include<iostream>;
#include<locale>;

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	int number;
	cout << "Введите количество чисел последовательности:";
	cin >> n;
	if (n > 1) {
		int error = 0;
		number = 1;
		cout << "Введите первое число последовательности:";
		double a, b;
		cin >> a;
		while (n > number) {
			cout << "Введите следующее число последовательности:";
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
		cout << "Неверное значение, количество чисел последовательности должно быть больше 1";
	}
}
