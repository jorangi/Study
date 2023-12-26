//#include <iostream>
//#include <string>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//class Server
//{
//private:
//	map<string, string> users;
//
//public:
//	void Register(string email, string password)
//	{
//		users.insert({ email, password });
//	}
//	bool hasEmail(string email)
//	{
//		return users.count(email);
//	}
//	bool isVaildPassword(string email, string password)
//	{
//		return (strcmp(users[email].c_str(), password.c_str()) == 0);
//	}
//};
//class MiddleWare
//{
//protected:
//	MiddleWare* nextMiddleWare;
//
//public:
//	MiddleWare* setNext(MiddleWare* middleware)
//	{
//		this->nextMiddleWare = middleware;
//		return middleware;
//	}
//	virtual short check(string email, string password)
//	{
//		short flag = 1;
//		if (nextMiddleWare != NULL)
//		{
//			flag = nextMiddleWare->check(email, password);
//		}
//
//		return flag;
//	}
//};
//class LimitLoginAttemptMiddleWare : public MiddleWare
//{
//private:
//	const int limit = 3;
//	int count = 0;
//
//public:
//	virtual short check(string email, string password) override
//	{
//		short flag = 1;
//		if (count > limit)
//		{
//			cout << "로그인 요청 횟수 제한 !!" << endl;
//			flag = -2;
//		}
//		else flag = MiddleWare::check(email, password);
//
//		count++;
//		return flag;
//	}
//};
//class AuthorizeMiddleWare : public MiddleWare
//{
//private:
//	Server* server;
//public:
//	AuthorizeMiddleWare(Server* server)
//	{
//		this->server = server;
//	}
//	virtual short check(string email, string password) override
//	{
//		short flag = 1;
//		if (!server->hasEmail(email))
//		{
//			cout << "가입된 계정이 없습니다." << endl;
//			flag = 0;
//		}
//		else if (!server->isVaildPassword(email, password))
//		{
//			cout << "패스워드가 다릅니다." << endl;
//			flag = 0;
//		}
//		else flag = MiddleWare::check(email, password);
//
//		return flag;
//	}
//};
//class AuthenticationMiddleWare : public MiddleWare
//{
//public:
//	virtual short check(string email, string password) override
//	{
//		short flag = 1;
//		if (email.compare("summer4216@naver.com") == 0)
//		{
//			cout << "Hello, Admin!" << endl;
//			flag = -1;
//		}
//		else
//		{
//			cout << "Hello, User!" << endl;
//			flag = MiddleWare::check(email, password);
//		}
//
//		return flag;
//	}
//};
//class LoggingMiddleWare : public MiddleWare
//{
//public:
//	short check(string email, string password) override
//	{
//		cout << "요청을 로깅합니다." << endl;
//		return -1;
//	}
//};
//int main(void)
//{
//	Server* server = new Server();
//	server->Register("summer4216@naver.com", "123123");
//	server->Register("summer3182@naver.com", "321312");
//	server->Register("summer1234@gmail.com", "123456");
//
//	LimitLoginAttemptMiddleWare* middleWare1 = new LimitLoginAttemptMiddleWare();
//	AuthorizeMiddleWare* middleWare2 = new AuthorizeMiddleWare(server);
//	AuthenticationMiddleWare* middleWare3 = new AuthenticationMiddleWare();
//	LoggingMiddleWare* middleWare4 = new LoggingMiddleWare();
//
//	middleWare1->setNext(middleWare2)->setNext(middleWare3)->setNext(middleWare4);
//
//	do
//	{
//		pair<string, string> acc;
//		cout << "\nEmail : ";
//		cin >> acc.first;
//		cout << "\nPassword : ";
//		cin >> acc.second;
//
//		short result = middleWare1->check(acc.first, acc.second);
//
//		if (result == -2)
//		{
//			throw new runtime_error("로그인 시도 횟수 초과로 프로그램을 종료합니다.");
//		}
//		else if (result == -1)
//		{
//			break;
//		}
//		else if (result == 0)
//		{
//			continue;
//		}
//	} while (true);
//}
//class Server
//{
//private:
//	map<string, string> users;
//
//public:
//	void Register(string email, string password)
//	{
//		users.insert({ email, password });
//	}
//	bool hasEmail(string email)
//	{
//		return users.count(email);
//	}
//	bool isVaildPassword(string email, string password)
//	{
//		return (strcmp(users[email].c_str(), password.c_str()) == 0);
//	}
//};
//class MiddleWare
//{
//private:
//	const int limit = 3;
//	int count = 0;
//
//	Server* server;
//
//public:
//	MiddleWare(Server* server)
//	{
//		this->server = server;
//	}
//	bool limitLoginAttempt()
//	{
//		if (count > limit)
//		{
//			cout << "로그인 요청 횟수 제한 !!" << endl;
//			return false;
//		}
//		count++;
//		return true;
//	}
//	bool authorize(string email, string password)
//	{
//		if (!this->server->hasEmail(email))
//		{
//			cout << "가입된 계정이 없습니다." << endl;
//			return false;
//		}
//		if (!this->server->isVaildPassword(email, password))
//		{
//			cout << "패스워드가 다릅니다." << endl;
//			return false;
//		}
//		cout << "로그인 완료 !!" << endl;
//		return true;
//	}
//	bool authentication(string email)
//	{
//		if (email.compare("summer4216@naver.com") == 0)
//		{
//			cout << "Hello, Admin!" << endl;
//			return true;
//		}
//		else
//		{
//			cout << "Hello, User!" << endl;
//			return false;
//		}
//	}
//	void logging()
//	{
//		cout << "요청을 로깅합니다." << endl;
//	}
//};
//int main()
//{
//	Server* server = new Server();
//	server->Register("summer4216@naver.com", "123123");
//	server->Register("summer3182@naver.com", "321321");
//	server->Register("summer1234@gmail.com", "123456");
//
//	MiddleWare* middleware = new MiddleWare(server);
//
//	do
//	{
//		pair<string, string> acc;
//		cout << "\nEmail : ";
//		cin >> acc.first;
//		cout << "\nPassword : ";
//		cin >> acc.second;
//
//		if (middleware->limitLoginAttempt())
//		{
//			if (middleware->authorize(acc.first, acc.second))
//			{
//				if (middleware->authentication(acc.first))
//				{
//
//				}
//				else
//				{
//					middleware->logging();
//				}
//				break;
//			}
//			else
//			{
//				continue;
//			}
//		}
//		else
//		{
//			throw new runtime_error("로그인 시도 횟수 초과로 프로그램을 종료합니다.");
//		}
//	} while (true);
//}