#include<iostream>
using namespace std;
struct Rect{
	double x,y,w,h;
};

// Function to calculate the overlapping area of two rectangles
// Parameters:
//   R1 - pointer to the first rectangle
//   R2 - pointer to the second rectangle
double overlap(Rect *R1, Rect *R2){
	double x1 = R1->x, y1 = R1->y, w1 = R1->w, h1 = R1->h;
	double x2 = R2->x, y2 = R2->y, w2 = R2->w, h2 = R2->h;
	double x_overlap = std::min(x1+w1, x2+w2) - std::max(x1, x2);
	double y_overlap = std::min(y1, y2) - std::max(y1-h1, y2-h2);
	if(x_overlap < 0 || y_overlap < 0) return 0;
	return x_overlap * y_overlap;
}