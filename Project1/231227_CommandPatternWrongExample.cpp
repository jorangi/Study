#include <iostream>
#include <string>

using namespace std;

class Lamp
{
public:
	void TurnOn()
	{
		cout << "램프를 켰습니다." << endl;
	}
};
class Alarm
{
public:
	void TurnOn()
	{
		cout << "알람이 울립니다." << endl;
	}
};
class Button
{
private:
	Lamp* lamp;
	Alarm* alarm;

public:
	Button()
	{
		lamp = new Lamp();
		alarm = new Alarm();
	}
	void TurnOn(int i)
	{
		if (i == 0)
		{
			lamp->TurnOn();
		}
		else if (i == 1)
		{
			alarm->TurnOn();
		}
	}
};

int main(void)
{
	Button* button = new Button();
	button->TurnOn(0);
	button->TurnOn(1);
}