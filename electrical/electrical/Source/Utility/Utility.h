#pragma once

class Utility
{
private:
	Utility();

public:
	// マップとの当たり判定


	// 画面内にとどまる
	static void StayOnScreen(int *x, int *y, int radius, 
							 bool isStayX, bool isStayY);
};