#include"Triangle.h"

Triangle::Triangle(){
		_base = 0;
		_height = 0;
}

Triangle::Triangle(float x, float y){
		_base = x;
		_height = y;
}

float Triangle::area(){
		return _base*_height/2;
}
