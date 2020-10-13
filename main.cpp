#include <iostream>
#include <string.h>
#include <time.h>
#include "StringAscendantComparator.h"
#include "IntegerDescendantComparator.h"
#include "Comparator.h"
#include "Sorter.h"
#include "Alumno.h"
#include "ClaveAscendantComparator.h"
#include "ClaveDescendantComparator.h"
#include "LastNameAscendantComparator.h"
#include "LastNameDescendantComparator.h"
#include "FirstNameAscendantComparator.h"
#include "FirstNameDescendantComparator.h"
#include "DateMonthAscendantComparator.h"
#include "DateMonthDescendantComparator.h"
#include "Month.h"

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


	//Alumnos
	Alumno alumnos[]{
		Alumno("Hector","Hernandez",2001,AUGUST,11,4723717),
		Alumno("Jocelyn", "Llamas", 2001, JULY, 21, 32321),
		Alumno("Antonio", "Galvan", 2002, JANUARY, 1, 45365645),
		Alumno("Francisco", "Solis", 2001, FEBRUARY, 14, 72436723),
		Alumno("Caleb", "Solis", 2001, FEBRUARY, 16, 72436723),
		Alumno("Arturo", "Llamas", 2001, JULY, 12, 32321)
	};

	LastNameAscendantComparator* lastNameAscendantComparator = new LastNameAscendantComparator;
	LastNameDescendantComparator* lastNameDescendantComparator = new LastNameDescendantComparator;
	FirstNameAscendantComparator* firstNameAscendantComparator = new FirstNameAscendantComparator;
	FirstNameDescendantComparator* firstNameDescendantComparator = new FirstNameDescendantComparator;
	DateMonthAscendantComparator* dateMonthAscendantComparator = new DateMonthAscendantComparator;
	DateMonthDescendantComparator* dateMonthDescendantComparator = new DateMonthDescendantComparator;
	ClaveAscendantComparator* claveAscendantComparator = new ClaveAscendantComparator;
	ClaveDescendantComparator* claveDescendantComparator = new ClaveDescendantComparator;

	cout << endl;

	cout << " Alumnos" << endl;
	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getFirstName() << " " << alumnos[i].getLastName() << " " << alumnos[i].getBirthdayYear() << "/" << alumnos[i].getBirthdayMonth()+1 << "/" << alumnos[i].getBirthdayDay() << " " << alumnos[i].getClave()<< "]"<<endl;
	}
	cout << endl;

	cout << " LastNameComparator" << endl;
	Sorter<Alumno>::sort(alumnos, lastNameAscendantComparator, 6);

	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getLastName() << "]";
	}
	cout << endl ;


	Sorter<Alumno>::sort(alumnos, lastNameDescendantComparator, 6);

	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getLastName() << "]";
	}
	cout << endl << endl;

	cout << " FirstNameComparator" << endl;
	Sorter<Alumno>::sort(alumnos, firstNameAscendantComparator, 6);

	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getFirstName() << "]";
	}
	cout << endl;


	Sorter<Alumno>::sort(alumnos, firstNameDescendantComparator, 6);

	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getFirstName() << "]";
	}
	cout << endl << endl;

	cout << " MonthComparator" << endl;
	Sorter<Alumno>::sort(alumnos, dateMonthAscendantComparator, 6);

	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getBirthdayMonth()+1 << "]";
	}
	cout << endl;


	Sorter<Alumno>::sort(alumnos, dateMonthDescendantComparator, 6);

	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getBirthdayMonth()+1 << "]";
	}
	cout << endl << endl;

	cout << " ClaveComparator" << endl;
	Sorter<Alumno>::sort(alumnos, claveAscendantComparator, 6);

	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getClave() << "]";
	}
	cout << endl;


	Sorter<Alumno>::sort(alumnos, claveDescendantComparator, 6);

	for (int i = 0; i < 6; i++) {
		cout << "[" << alumnos[i].getClave() << "]";
	}
	cout << endl << endl;


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