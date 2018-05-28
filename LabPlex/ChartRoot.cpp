#pragma once;
#include "ChartRoot.h"


ChartRoot::ChartRoot()
{
	Visible = true;
	Active = false;
	sm = false;
}

bool ChartRoot::IsVisible(){
	return Visible;
}

bool ChartRoot::IsActive() {
	return Active;
}

void ChartRoot::SetActive(bool _Active = true) {
	Active = _Active;
}

void ChartRoot::SetVisible(bool _Visible = true) {
	Visible = _Visible;
}

bool ChartRoot::GetActive() {
	return Active;
}

bool ChartRoot::GetVisible() {
	return Visible;
}

bool ChartRoot::GetActive() {
	return sm;
}

void ChartRoot::Set(bool _sm) {
	sm = _sm;
}