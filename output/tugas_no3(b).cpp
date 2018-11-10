#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main(){
	float bil, max, total, rerata;
	cout<<"Masukkan Nilai Max : ";cin>>max;
	
	bil=0;
	total=0;
	do {
		total+=bil;
		rerata=total/max;
		bil++;
	}
	while (bil<=max);
	cout<<"Total : "<<total<<endl;
	cout<<"Rerata : "<<rerata<<endl;
	getch ();
	return 0;
}
