#include <iostream>
using namespace std;

struct data_mahasiswa {
string nama, jurusan;
int semester;
 string nim;
 
 };
 
 
 data_mahasiswa mahasiswa[5];
 int main (){
	cout << "data mahasiswa1\n";
	cout << "===============\n";
	for (int t =0; t <5; ++t)
	{
	cout << "masukan mahasiswa ke-"<<t<<endl;
	cout << "nama: "; cin >> mahasiswa [t].nama;
	cout << "jurusan: "; cin >> mahasiswa [t].jurusan;
	cout << "semester: "; cin >> mahasiswa [t].semester;
	cout << "nim : "; cin >> mahasiswa [t].nim;
	}
	for (int t =0;t < 5 ; ++t)
	{
	cout << "mahasiswa"<< t << endl;
	cout << mahasiswa[t].nama << endl;
	cout << mahasiswa [t].jurusan <<endl;
	cout << mahasiswa [t].semester <<endl;
	cout << mahasiswa [t].nim <<endl;
	}
	return 0;
	}