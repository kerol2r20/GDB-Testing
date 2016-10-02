#include"Triangle.h"

void Swap(int &x,int &y){
		int temp=x;
		x = y;
		y = temp;
}

int main(int argc, char** argv){
		int x=10, y=20;
		Swap(x,y);
		Triangle Right(2,5);

		int *year = new int[3];
		year[0] = 2015;
		year[1] = 2016;
		year[2] = 2017;
}
