//mytime1.h -- Time class after operator overloading
#pragma once
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h, int m);
	Time operator+(const Time & t) const;
	void Show() const;
};