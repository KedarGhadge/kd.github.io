#include "header.h"



int main() {
	int n;
	Pattern p;
	cout<<"Enter the level of pyramid: ";
	cin>>n;
	p.pyramid(n);
	p.diamod();
	p.blackdiamond();
	p.matrixDiagonal();
	return 0;
}
