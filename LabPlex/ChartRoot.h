#pragma once
using namespace System::Drawing;

class ChartRoot
{
protected:
	bool Visible;
	bool Active;
	bool sm;
public:
	ChartRoot();
	bool IsVisible();
	bool IsActive();
	void SetActive(bool _Active);
	void SetVisible(bool _Visible);
	bool GetActive();
	bool GetVisible();
	void Set(bool _sm);
	virtual void Show(Graphics^ gr, Pen^ pen) = 0;
	virtual void Hide(Graphics^ gr, Pen^ pen) = 0;
 };