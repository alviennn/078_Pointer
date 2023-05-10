#include <iostream>
using namespace std;

class mahasiswa {
public :
	int nim;
	void showNim(); //deklarasi method
};

void mahasiswa::showNim() { //implementasi method diluar class
	cout << "No induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };   //object mhs
	mhs.showNim();        //Memeber Acces Operator
}