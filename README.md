# Porównanie metod sortowania

## Opis programu

Program został napisany w języku C++ i służy do porównania czasu działania dwóch metod sortowania.

Program sortuje 50 000 losowo wygenerowanych liczb za pomocą:
- Bubble Sort (sortowanie bąbelkowe)
- Selection Sort (sortowanie przez wybieranie)

Po wykonaniu każdego sortowania program mierzy czas jego działania i wyświetla wynik w sekundach.

## Działanie programu

1. Program tworzy tablicę zawierającą 50 000 liczb.
2. Do tablicy zostają wpisane losowe liczby.
3. Tablica jest kopiowana, aby obie metody sortowały dokładnie te same dane.
4. Program mierzy czas sortowania metodą Bubble Sort.
5. Następnie mierzy czas sortowania metodą Selection Sort.
6. Na końcu wyświetla czas działania obu metod.

## Przykładowy wynik

Liczba elementow: 50000

Czas sortowania babelkowego: 8.24 sekund
Czas sortowania przez wybieranie: 3.17 sekund

Wyniki czasu mogą się różnić w zależności od komputera.

## Cel programu

Celem programu jest poznanie dwóch podstawowych metod sortowania oraz porównanie ich czasu działania dla dużej liczby elementów.

## Technologie

Program został napisany w języku C++ z wykorzystaniem bibliotek:
- iostream
- cstdlib
- ctime
- chrono
