#include "ChartRoot.h"

class ChartPoint : public ChartRoot
{
protected:
	int x, y;
public:
	ChartPoint(int _x, int _y);
	virtual void Show(Graphics^ gr, Pen^ pen) {
		gr->DrawEllipse(pen, (int)(x - 6), (int)(y - 6), 9, 9);
		Visible = true;
	};
	virtual void Hide(Graphics^ gr, Pen^ pen) {
		gr->DrawEllipse(Pens::White, (int)(x - 6), int(y - 6), 9, 9);
		Visible = false;
	};
	int GetX();
	int GetY();
	void SetX(int _x);
	void SetY(int _y);
}; 