#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cout << "Noi o" << endl;

	cout << setw(5) << left << "ID";
	cout << setw(30) << left << "Name";
	cout << setw(20) << right << "Address" << endl;
  
	cout << setfill('-');
	cout << setw(55) << "-" << endl;


	cout << setfill(' ');

	cout << setw(5) << left << 1;
	cout << setw(30) << left << "Le Duc Anh";
	cout << setw(20) << right << "Ha Noi" << endl;

	cout << setw(5) << left << 2;
	cout << setw(30) << left << "Hoang Thi Phuong";
	cout << setw(20) << right << "Nghe An" << endl;





}


