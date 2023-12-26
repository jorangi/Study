//#include <iostream>
//#include <string>
//using namespace std;
//
//class Command
//{
//public:
//	virtual void excute() {}
//};
//class Button
//{
//private:
//	Command* command;
//public:
//	void setCommand(Command* c)
//	{
//		this->command = c;
//	}
//	void excuteCommand()
//	{
//		this->command->excute();
//	}
//};
//class Lamp
//{
//public:
//	void TurnOn(string color)
//	{
//		cout << color <<" 램프가 켜졌습니다." << endl;
//	}
//};
//class Alarm
//{
//public:
//	void TurnOn()
//	{
//		cout << "알람이 울립니다." << endl;
//	}
//};
//class LampCommand : public Command
//{
//private:
//	Lamp* lamp;
//	string color = "white";
//public:
//	LampCommand(Lamp* lamp)
//	{
//		this->lamp = lamp;
//	}
//	void setColor(string c)
//	{
//		this->color = c;
//	}
//	void excute()
//	{
//		lamp->TurnOn(color);
//	}
//};
//class AlarmCommand : public Command
//{
//private:
//	Alarm* alarm;
//public:
//	AlarmCommand(Alarm* alarm)
//	{
//		this->alarm = alarm;
//	}
//	void excute()
//	{
//		alarm->TurnOn();
//	}
//};
//int main()
//{
//	Button* button = new Button();
//	LampCommand* lampCommand = new LampCommand(new Lamp());
//	AlarmCommand* alarmCommand = new AlarmCommand(new Alarm());
//	lampCommand->setColor("Black");
//	button->setCommand(lampCommand);
//	button->excuteCommand();
//	button->setCommand(alarmCommand);
//	button->excuteCommand();
//}