#include "CharPoint.h"


ChartPoint::ChartPoint(int _x = 0, int _y = 0) {
	x = _x;
	y = _y;
}

int ChartPoint::GetX() {
	return x - 2 > 0 ? x - 2 : 0;
}

int ChartPoint::GetY() {
	return y - 2 > 0 ? y - 2 : 0;
}

void ChartPoint::SetX(int _x) {
	x = _x;
}

void ChartPoint::SetY(int _y) {
	y = _y;
}
