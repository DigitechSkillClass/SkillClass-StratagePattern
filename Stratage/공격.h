#pragma once
class ����
{
public:
	����();
	~����();
	virtual void �����϶�() = 0;
};

class ��ġ���� : public ����
{
public:
	��ġ����() {}
	~��ġ����() {}
	virtual void �����϶�()
	{
		cout << "��ġ�� ���� �ķ�Ĩ�ϴ�." << endl;
	}
};

class �������� : public ����
{
public:
	��������() {}
	~��������() {}
	virtual void �����϶�() 
	{
		cout << "���̾ �߻�!!" << endl;
	}
};

class ���ݾ��� : public ����
{
public:
	���ݾ���() {}
	~���ݾ���() {}
	virtual void �����϶�()
	{
		cout << "������ ������ �� �����ϴ�" << endl;
	}
};