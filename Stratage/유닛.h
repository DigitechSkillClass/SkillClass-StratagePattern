#pragma once

#include "이동.h"
#include "공격.h"
class 유닛
{
public:
	유닛();
	~유닛();
	
	이동* p이동;
	공격* p공격;

	virtual void 이동하라()
	{
		p이동->이동하라();
	}
	virtual void 공격하라()
	{
		p공격->공격하라();
	}
};

