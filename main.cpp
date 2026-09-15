#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;

// Sortowanie babelkowe
void bubbleSort(int numbers[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

// Sortowanie przez wybieranie
void selectionSort(int numbers[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (numbers[j] < numbers[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }
}

// Wypelnianie tablicy losowymi liczbami
void fillArray(int numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        numbers[i] = rand() % 100000;
    }
}

// Kopiowanie tablicy
void copyArray(int source[], int destination[], int n)
{
    for (int i = 0; i < n; i++)
    {
        destination[i] = source[i];
    }
}

int main()
{
    const int n = 50000;

    int numbers[n];
    int secondNumbers[n];

    srand(time(NULL));

    // Wypelniamy tablice liczbami
    fillArray(numbers, n);

    // Kopiujemy tablice, aby oba algorytmy mialy te same liczby
    copyArray(numbers, secondNumbers, n);

    // Rozpoczynamy pomiar czasu sortowania babelkowego
    auto start = chrono::high_resolution_clock::now();

    bubbleSort(numbers, n);

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> bubbleTime = end - start;

    // Rozpoczynamy pomiar czasu sortowania przez wybieranie
    start = chrono::high_resolution_clock::now();

    selectionSort(secondNumbers, n);

    end = chrono::high_resolution_clock::now();

    chrono::duration<double> selectionTime = end - start;

    // Wyswietlamy wyniki
    cout << "Liczba elementow: " << n << endl;
    cout << endl;

    cout << "Czas sortowania babelkowego: "
         << bubbleTime.count() << " sekund" << endl;

    cout << "Czas sortowania przez wybieranie: "
         << selectionTime.count() << " sekund" << endl;

    return 0;
}
