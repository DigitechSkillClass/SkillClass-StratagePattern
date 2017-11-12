#pragma once
class 공격
{
public:
	공격();
	~공격();
	virtual void 공격하라() = 0;
};

class 망치공격 : public 공격
{
public:
	망치공격() {}
	~망치공격() {}
	virtual void 공격하라()
	{
		cout << "망치로 적을 후려칩니다." << endl;
	}
};

class 마법공격 : public 공격
{
public:
	마법공격() {}
	~마법공격() {}
	virtual void 공격하라() 
	{
		cout << "파이어볼 발사!!" << endl;
	}
};

class 공격안함 : public 공격
{
public:
	공격안함() {}
	~공격안함() {}
	virtual void 공격하라()
	{
		cout << "지금은 공격할 수 없습니다" << endl;
	}
};