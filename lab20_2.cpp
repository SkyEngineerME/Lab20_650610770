#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
	
};

double overlap(Rect* R1,Rect* R2){
    double R,L,UM,Um;
	R = min(((*R1).x)+(*R1).w,((*R2).x)+(*R2).w);
	L = max((*R1).x,(*R2).x);
	Um = min((*R1).y,(*R2).y);
	UM = max(((*R1).y)-(*R1).h,((*R2).y)-(*R2).h);
	double A = (R-L)*(Um-UM);
	if(A>0){
		return A;
	}else{
		return 0;
	}
}
