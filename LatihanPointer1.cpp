#include <iostream>
using namespace std;
int main(){
	int x = 5;
	int y = 10;
	int *p1 = &x;
	
	//mengakses data variabel x dari pointer
	cout << "Nilai dari *p1 = " << *p1 << endl;
	cout << "Nilai x awal = " << x << endl;
	cout << "Address memori *p1 = " << &p1 << endl;
    cout << "Address memori x = " << p1 << endl << endl;
	
	//mengubah data variabel x dari pointer
	*p1 = 7;
	//melihat nilai variabel x 
	cout << "*p1 = 7 "<< endl;
	cout << "Nilai x setelah diubah = " << x << endl << endl;
	
	int *p2 = &y;
	//mengubah nilai variabel x
	x = *p2;
	cout << "x = *p2 "<< endl;
	cout << "Nilai x setelah diubah = " << x << endl << endl;
	
	//mengubah nilai variabel x ke y
	x = y;
	cout << "x = y "<< endl;
	cout << "Nilai x setelah diubah = " << x << endl << endl;
	 
	//menguubah variabel p1 dan p2
	p1 = &y;
	//mencetak acuan alamat memori pointer
    cout << "acuan alamat memori p1 = " << p1 << endl;
    p2 = &x;
	cout << "acuan alamat memori p2 = " << p2 << endl;
    
    //mengubah data variabel p1 ke p2
    p1 = p2;
    cout << "acuan alamat memori p1 = " << p1 << endl;
    cout << "acuan alamat memori p2 = " << p2 << endl;
	return 0;
}
