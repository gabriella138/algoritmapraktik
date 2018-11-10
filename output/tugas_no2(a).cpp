#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main(){
	float bil, max, total;
	cout<<"Masukkan Nilai Max : ";cin>>max;
	
	bil=0;
	total=0;
	while (bil<=max)
	{
		total+=bil;
		bil++;
	}
		cout<<"Total : "<<total<<endl;
		getch();
		return 0; 
}
