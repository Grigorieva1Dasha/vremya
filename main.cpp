#include <iostream>
#include<locale.h>
#include "mytime.h"

using namespace std;

istream& operator >>(istream& in, Time& t)
{
	in >> t.hour >> t.min >> t.sec;
	return in;
}

ostream& operator <<(ostream& out, Time& t)
{
	out << t.hour << ':' << t.min << ':' << t.sec;
	return out;
}

int main() {
	setlocale(LC_ALL, "Russian");
	Time time_1, time_2, final_time;
	cout << "time 1 = ";
	cin >> time_1;
	cout << "time 2 = ";
	cin >> time_2;
	cout << endl;

	final_time = time_1 + time_2;
	cout << "time 1 + time 2 = " << final_time << endl;

	final_time = time_1 - time_2;
	cout << "time 1 - time 2 = " << final_time << endl << endl;

	cout << "Введите количество часов (int): ";
	int a;
	cin >> a;
	final_time = time_1 + a;
	cout << "time 1 + a = " << final_time << endl << endl;
	
	cout << "Введите количество часов (double): ";
	double n;
	cin >> n;
	final_time = time_1 + n;
	cout << "time 1 + n = " << final_time << endl << endl;

	cout << "time 1 ? time 2 : ";
	if (time_1 == time_2) 
		cout << "time 1 = time 2" << endl;
	else if (time_1 > time_2) {
		cout << "time 1 > time 2" << endl;
	}
	else if (time_1 < time_2) {
		cout << "time 1 < time 2" << endl;
	}
	
	system("pause");
	return 0;
}
