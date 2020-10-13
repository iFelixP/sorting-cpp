#include "Month.h"

#pragma once
class Alumno
{
private:
	string firstName;
	string lastName;
	int birthdayYear;
	Month birthdayMonth;
	int birthdayDay;
	int clave;

public:
	Alumno(string firstName, string lastName, int birthdayYear, Month birtdayMonth, int birthdayDay, int clave);
	string getFirstName();
	void setFirstName(string firstName);
	string getLastName();
	void setLastName(string lastName);
	int getBirthdayYear();
	void setBirthdayYear(int birthdayYear);
	Month getBirthdayMonth();
	void setBirthdayMonth(Month birthdayMonth);
	int getBirthdayDay();
	void setBirthdayDay(int birthdayDay);
	int getClave();
	void setClave(int clave);
};

Alumno::Alumno(string firstName, string lastName, int birthdayYear, Month birthdayMonth, int birthdayDay, int clave) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->birthdayYear = birthdayYear;
	this->birthdayMonth = birthdayMonth;
	this->birthdayDay = birthdayDay;
	this->clave = clave;
};

string Alumno::getFirstName() {
	return firstName;
};

void Alumno::setFirstName(string firstName) {
	this->firstName = firstName;
};

string Alumno::getLastName() {
	return lastName;
}

void Alumno::setLastName(string lastName) {
	this->lastName = lastName;
}

int Alumno::getBirthdayYear() {
	return birthdayYear;
}

void Alumno::setBirthdayYear(int birthdayYear) {
	this->birthdayYear = birthdayYear;
}

Month Alumno::getBirthdayMonth() {
	return birthdayMonth;
}

void Alumno::setBirthdayMonth(Month birthdayMonth) {
	this->birthdayMonth = birthdayMonth;
}

int Alumno::getBirthdayDay() {
	return birthdayDay;
}

void Alumno::setBirthdayDay(int birthdayDay) {
	this->birthdayDay = birthdayDay;
}

int Alumno::getClave() {
	return clave;
}

void Alumno::setClave(int clave) {
	this->clave = clave;
}