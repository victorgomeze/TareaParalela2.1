#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <fstream>
#include <cstring>
#include <vector>
#include <xlsxwriter.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

#define NOM_ENTRADA  "utem.csv"
using namespace std;

int ContadorLineas(char archivo[]){
	ifstream infile(archivo);
	string lineasS;
	int lineas=0;
		
		while(getline(infile,lineasS)){
			lineas++;
		}
		
		return lineas;
}

int main(int argc, char* argv[]){

	int LinTotal=0;
	LinTotal = ContadorLineas(argv[1]);
	
	cout<<"La cantidad total de lineas es : "<<LinTotal-1<<endl;

	return 0;
}
