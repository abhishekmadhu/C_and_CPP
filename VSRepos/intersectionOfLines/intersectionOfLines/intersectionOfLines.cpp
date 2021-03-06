// intersectionOfLines.cpp : Defines the entry point for the console application.
//

//#include "intersectionOfLines.h"//comment out for g++ outside VisualStudio IDE
#include "stdafx.h"//comment out for g++
#include <iostream>
//#include <limits>
//#include <limits.h>

using std::cout;
using std::cin;
using std::endl;
//using namespace std;	//individual requirements are already imported in last three lines


typedef struct pt {
	long int x, y;
}point;

int max(int a, int b) {
	return (a >= b) ? a : b;
}

int min(int a, int b) {
	return (a <= b) ? a : b;
}

bool liesOn(point a, point b, point c) {  //Checks if the point b lies on segment a-c (provided that a,b,c are collinear)
	if (b.x <= max(a.x, c.x) && b.x >= min(a.x, c.x) && b.y <= max(a.y, c.y) && b.y >= min(a.y, c.y))
		return true;
	return false;
}

int orientation(point a, point b, point c) {
	long double returner = (b.y - a.y)*(c.x - b.x) - (b.x - a.x)*(c.y - b.y);


	if (returner<0)
		return -1;
	else if (returner>0)
		return 1;
	else
		return 0;
}

int intersect(point p, point q, point r, point s) {
	int pqr = orientation(p, q, r);
	int pqs = orientation(p, q, s);
	int rsp = orientation(r, s, p);
	int rsq = orientation(r, s, q);

	if (pqr != pqs && rsp != rsq) return true;

	if (pqr == 0 && liesOn(p, r, q)) return true;  //Whether r lies on segment p-q
	if (pqs == 0 && liesOn(p, s, q)) return true;
	if (rsp == 0 && liesOn(r, p, s)) return true;
	if (rsq == 0 && liesOn(r, q, s)) return true;

	return false;

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		point p, q, r, s;					//the segments are p-q and r-s
		cin >> p.x >> p.y >> q.x >> q.y >> r.x >> r.y >> s.x >> s.y;
		intersect(p, q, r, s) ? cout << "1" << endl : cout << "0" << endl;
	}
	system("pause");//comment out for online competitive IDE
	return 0;
}