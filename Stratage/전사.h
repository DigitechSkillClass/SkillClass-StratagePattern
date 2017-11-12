#pragma once
class 전사 : public 유닛
{
public:
	전사();
	~전사();

	virtual void 이동하라() {}
	virtual void 공격하라() {}
};

