//#include <iostream>
//#include <string>
//using namespace std;
//
//class Device
//{
//protected:
//	bool power = false;
//	int volume = 0;
//	int channel = 0;
//public:
//	virtual bool isTurnOn() { return false; }
//	virtual void TurnOn() {}
//	virtual void TurnOff() {}
//	virtual int getVolume() { return 0; }
//	virtual void setVolume(int i) {}
//	virtual int getChannel() {return 0;}
//	virtual void setChannel(int i) {}
//};
//class Radio : public Device
//{
//public:
//	virtual bool isTurnOn() override
//	{
//		return power;
//	}
//	virtual void TurnOn() override
//	{
//		power = true;
//		cout << "������ ������ �״�." << endl;
//	}
//	virtual void TurnOff() override
//	{
//		power = false;
//		cout << "������ ������ ����." << endl;
//	}
//	virtual int getVolume() override
//	{
//		return volume;
//	}
//	virtual void setVolume(int i) override
//	{
//		this->volume = i;
//		cout << "������ ������ " << i << "�� �����ߴ�." << endl;
//	}
//	virtual int getChannel() override
//	{
//		return channel;
//	}
//	virtual void setChannel(int i) override
//	{
//		this->channel = i;
//		cout << "������ ä���� " << i << "�� �����ߴ�." << endl;
//	}
//};
//class TV : public Device
//{
//public:
//	virtual bool isTurnOn() override
//	{
//		return power;
//	}
//	virtual void TurnOn() override
//	{
//		power = true;
//		cout << "TV�� ������ �״�." << endl;
//	}
//	virtual void TurnOff() override
//	{
//		power = false;
//		cout << "TV�� ������ ����." << endl;
//	}
//	virtual int getVolume() override
//	{
//		return volume;
//	}
//	virtual void setVolume(int i) override
//	{
//		this->volume = i;
//		cout << "TV�� ������ "<< i <<"�� �����ߴ�." << endl;
//	}
//	virtual int getChannel() override
//	{
//		return channel;
//	}
//	virtual void setChannel(int i) override
//	{
//		this->channel = i;
//		cout << "TV�� ä���� " << i << "�� �����ߴ�." << endl;
//	}
//};
//class Remote
//{
//protected:
//	Device* device;
//public:
//	Remote(Device* d)
//	{
//		this->device = d;
//	}
//	void togglePower()
//	{
//		if (device->isTurnOn()) device->TurnOff();
//		else device->TurnOn();
//	}
//	void volumeDown()
//	{
//		device->setVolume(device->getVolume() - 1);
//	}
//	void volumeUp()
//	{
//		device->setVolume(device->getVolume() + 1);
//	}
//	void channelDown()
//	{
//		device->setChannel(device->getChannel() - 1);
//	}
//	void channelUp()
//	{
//		device->setChannel(device->getChannel() + 1);
//	}
//};
//class RefinedRemote : public Remote
//{
//public:
//	RefinedRemote(Device* d) : Remote(d){}
//	void Mute()
//	{
//		device->setVolume(0);
//	}
//};
//int main()
//{
//	RefinedRemote* remote = new RefinedRemote(new Radio());
//	remote->togglePower();
//	remote->channelUp();
//	remote->volumeUp();
//	remote->volumeUp();
//	remote->channelDown();
//	remote->Mute();
//}