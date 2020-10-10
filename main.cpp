#include <iostream>
#include <string.h>
#include <time.h>
#include "StringAscendantComparator.h"
#include "IntegerDescendantComparator.h"
#include "Comparator.h"
#include "Sorter.h"

using namespace std;

template <typename T>
void printArray(T elements[], int elementsCount);

int main()
{
	// Sorting and printing array of strings
	string datos[] = { "Hector", "Jocelyn", "Antonio", "Caleb", "Isaías", "Jose", "Gustavo", "Alain", "Ivan" };
	StringAscendantComparator *stringComparator = new StringAscendantComparator;

	Sorter<string>::sort(datos, stringComparator, 9);

	printArray<string>(datos, 9);


	// Sorting and printing array of integers
	int integerElements[] = { 10,43,21,64,28,38,33,51,42,21 };
	IntegerDescendantComparator *integerComparator = new IntegerDescendantComparator;

	Sorter<int>::sort(integerElements, integerComparator, 10);

	printArray<int>(integerElements, 10);


	return 0;
}

template <typename T>
void printArray(T elements[], int elementsCount) {
	for (int i = 0; i < elementsCount; i++) {
		if (i > 0) {
			cout << ",";
		}
		cout << elements[i];
	}
	cout << endl;
}