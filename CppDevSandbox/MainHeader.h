#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point {
	int x = 0;
	int y = 0;
	string label;

public:
	Point(string, int, int);
	Point(int, int);
	string GetLabel();
	int GetX();
	int GetY();
};

Point::Point(string labelIn, int xIn, int yIn) {
	this->label = labelIn;
	this->x = xIn;
	this->y = yIn;
}

Point::Point(int xIn, int yIn) {
	this->x = xIn;
	this->y = yIn;
}

string Point::GetLabel() {
	return this->label;
}

int Point::GetX() {
	return this->x;
}

int Point::GetY() {
	return this->y;
}