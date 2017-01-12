#include "problem15.h"

problem15::problem15(){
	cout<<"Finds number of routes in a nth x nth grid moving only right and down"<<endl;
	cout<<"Enter nth number: ";
	cin>>nth;

	initgrid();
	routes();
}

void problem15::initgrid(){
	grid = new __int64*[nth+1];
	for(int i = 0; i < nth+1; i++){
		grid[i] = new __int64[nth+1];
	}

	for(int i = 0; i < nth+1; i++){
		grid[i][nth] = 1;
		grid[nth][i] = 1;
	}
}

void problem15::routes(){
	counter = 0;
//	recursiverouting(nth,nth);
	dynamicrouting();
	cout<<"Amount of routes in "<<nth<<" by "<<nth<<" grid: "<<counter<<endl;
}

void problem15::recursiverouting(int i, int j){
	if(i == 0 && j == 0){
		counter++;
	}
	else if (i != 0 && j != 0){
		recursiverouting(i-1,j);
		recursiverouting(i,j-1);
	}
	else if(i == 0 && j != 0){
		recursiverouting(i,j-1);
	}
	else if(i != 0 && j == 0){
		recursiverouting(i-1,j);
	}
}

void problem15::dynamicrouting(){
	for(int i = nth-1; i >= 0; i--)
		for(int j = nth-1; j >= 0; j--)
			grid[i][j] = grid[i+1][j] + grid[i][j+1];
	counter = grid[0][0];
}