#pragma once
class �̵�
{
public:
	�̵�();
	~�̵�();

	virtual void �̵��϶�() = 0;
};

class �پ�̵� : public �̵�
{
public:
	�پ�̵�() {}
	~�پ�̵�() {}

	virtual void �̵��϶�()
	{
		cout << "�پ�̵��մϴ�." << endl;
	}
};

class �����̵� : public �̵�
{
public:
	�����̵�() {}
	~�����̵�() {}

	virtual void �̵��϶�()
	{
		cout << "������ �����̵� �մϴ�." << endl;
	}
};

class ���Ƽ��̵� : public �̵�
{
public:
	���Ƽ��̵�() {}
	~���Ƽ��̵�() {}

	virtual void �̵��϶�()
	{
		cout << "���Ƽ� �̵��մϴ�." << endl;
	}
};