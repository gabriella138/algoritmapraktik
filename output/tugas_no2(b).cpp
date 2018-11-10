#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main (){
	float bil, max, total;
	cout<<"Masukkan Nilai Max : ";cin>>max;
	
	bil=0;
	total=0;
	do {
		total+=bil;
		bil++;
	}
	while (bil<=max);
	cout<<"Total : "<<total<<endl;
	getch ();
	return 0;
}


