#ifndef POINTER_H_INCLUDED
#define POINTER_H_INCLUDED

#include<iostream>
#include<math.h>
class Point {
	int m_x;
	int m_y;
public:
	Point();
	Point(int, int);
	Point(const Point&);
	double distanceFromOrigin();
	int quadrant();
	int isOrigin();
	int isOnXaxis();
	int isOnYaxis();
	void display();
};


#endif // POINTER_H_INCLUDED
