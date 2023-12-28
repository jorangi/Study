//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class User;
//class Meditator
//{
//public:
//	virtual void addUser(User* user) {}
//	virtual void sendMessage(User* user, string msg){}
//};
//class User
//{
//protected:
//	Meditator* meditator;
//public:
//	User(Meditator* meditator)
//	{
//		this->meditator = meditator;
//	}
//	virtual void Receive(string msg){}
//	virtual void Send(string msg) {}
//};
//class ManUser : public User
//{
//public:
//	ManUser(Meditator* med) : User(med){}
//	virtual void Receive(string msg) override
//	{
//		cout << "(M)메세지 받음 : " << msg << endl;
//	}
//	virtual void Send(string msg) override
//	{
//		meditator->sendMessage(this, msg);
//	}
//};
//class WomanUser : public User
//{
//public:
//	WomanUser(Meditator* med) : User(med) {}
//	virtual void Receive(string msg) override
//	{
//		cout << "(W)메세지 받음 : " << msg << endl;
//	}
//	virtual void Send(string msg) override
//	{
//		meditator->sendMessage(this, msg);
//	}
//};
//class UserMessageMeditator : public Meditator
//{
//private:
//	vector<User*> userList;
//public:
//	virtual void addUser(User* user) override
//	{
//		userList.push_back(user);
//	}
//	virtual void sendMessage(User* user, string msg) override
//	{
//		for_each(userList.begin(), userList.end(), [user, &msg](User* u)
//			{
//				if (u != user)
//				{
//					u->Receive(msg);
//				}
//			});
//	}
//};
//
//int main()
//{
//	UserMessageMeditator* med = new UserMessageMeditator();
//	ManUser* man = new ManUser(med);
//	WomanUser* woman = new WomanUser(med);
//
//	med->addUser(man);
//	med->addUser(woman);
//	
//	man->Send("Hi, I'm James!");
//	woman->Send("Hi James! Nice to meet you. I'm Lina!");
//}