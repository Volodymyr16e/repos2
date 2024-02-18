﻿ // ArrayFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//variant 6
//завдання 1: Задано одновимірний масив А розміру N. Знайти кількість нульових елементів.
//завдання 2: Знайти номер останнього максимального значення серед від’ємних елементів, розташованих правіше елемента, рівного Т.
//завдання 3: Задано масив дійсних чисел A(n), n <= 200.Розробити програму, яка будує масив B(n) за правилом : b є середнім арифметичним значенням чиселan a1,a2,...,an,крімa, ai, i=1,2,...,n.

#include <iostream>
using namespace std;

const int MAX_SIZE = 200;

void task1() {
	// Оголосив та ініціалізував одновимірний масив розміром 10
	int masiv[10] = { 1, 0, -3, 0, -5, 6, 7, 0, 9, 0 };
	int countZeroes = 0; // щоб порахувати нульові елементи масиву, я добавив лічильник нульових елементів

	// Вивів елементи масиву та знайшов кількість нульових елементів
	cout << "елементи масиву:" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "елемент " << i << ": " << masiv[i] << endl;
		if (masiv[i] == 0) {
			countZeroes++;
		}
	}

	// Вивів кількість нульових елементів
	cout << "Кількість нульових елементів: " << countZeroes << endl;
}

void task2() {
	// Оголосив та ініціалізував одновимірний масив розміром 10
	int masiv[10] = { 1, 0, -3, 0, -5, 6, 7, 0, 9, 0 };
	int T = 6; // добавив значення T
	int maxNegativeIndex = -1; // номер останнього максимального від'ємного елемента
	int maxNegative = INT_MIN; // максимальне від'ємне значення

	//  максимальне від'ємне значення та його індекс
	for (int i = 0; i < 10; ++i) {
		if (masiv[i] <= T && masiv[i] < 0 && masiv[i] > maxNegative) {
			maxNegative = masiv[i];
			maxNegativeIndex = i;
		}
	}

	// Вивів результат
	if (maxNegativeIndex != -1) {
		cout << "Номер останнього максимального від'ємного елемента, розташованого правіше елемента, рівного T: " << maxNegativeIndex << endl;
	}
	else {
		cout << "Від'ємних елементів, які задовольняють умову, не знайдено." << endl;
	}
}

void task3() {
	int n;
	double A[MAX_SIZE], B[MAX_SIZE];

	// Вводимо розмір масиву A
	cout << "Введіть розмір масиву A (n <= 200): ";
	cin >> n;

	// Елементи масиву A
	cout << "Введіть елементи масиву A:" << endl;
	for (int i = 0; i < n; ++i) {
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}

	// Обчислюємо значення елементів масиву B
	for (int i = 0; i < n; ++i) {
		double sum = 0;
		for (int j = 0; j < n; ++j) {
			if (j != i) {
				sum += A[j];
			}
		}
		B[i] = sum / (n - 1); // Середнє арифметичне значення крім поточного елемента
	}

	// Виводимо елементи масиву B
	cout << "Масив B згідно правила:" << endl;
	for (int i = 0; i < n; ++i) {
		cout << "B[" << i << "]: " << B[i] << endl;
	}
}

int main() {
	setlocale(LC_CTYPE, "Ukr");

	task1();
	task2();
	task3();

	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
