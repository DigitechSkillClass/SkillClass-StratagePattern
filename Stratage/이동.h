#pragma once
class 이동
{
public:
	이동();
	~이동();

	virtual void 이동하라() = 0;
};

class 뛰어서이동 : public 이동
{
public:
	뛰어서이동() {}
	~뛰어서이동() {}

	virtual void 이동하라()
	{
		cout << "뛰어서이동합니다." << endl;
	}
};

class 순간이동 : public 이동
{
public:
	순간이동() {}
	~순간이동() {}

	virtual void 이동하라()
	{
		cout << "적에게 순간이동 합니다." << endl;
	}
};

class 날아서이동 : public 이동
{
public:
	날아서이동() {}
	~날아서이동() {}

	virtual void 이동하라()
	{
		cout << "날아서 이동합니다." << endl;
	}
};