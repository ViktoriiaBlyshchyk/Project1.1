#pragma once

class IntPower
{
private:
	float first;
	int second;

public:
	float GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(float value);
	void SetSecond(int value);

	bool Init(float x, int y);
	void Display() const;
	void Read();

	void power();
};
