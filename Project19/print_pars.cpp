#include "print_pars.h"

void printPersonFIO(Person p)
{
	cout << "Фио: " << p.name << ' ' << p.secondname << p.surname << '.' << endl;
}

void PrintPersonAge(Person p)
{
	cout << "Возраст:" << p.age << endl;
}
