#pragma once

#include "�̵�.h"
#include "����.h"
class ����
{
public:
	����();
	~����();
	
	�̵�* p�̵�;
	����* p����;

	virtual void �̵��϶�()
	{
		p�̵�->�̵��϶�();
	}
	virtual void �����϶�()
	{
		p����->�����϶�();
	}
};

