//#include <iostream>
//#include <string>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//class Component
//{
//private:
//	string name;
//public:
//	Component(string name)
//	{
//		this->name = name;
//	}
//	string getName()
//	{
//		return name;
//	}
//	virtual void execute() {};
//};
//class Leaf : public Component
//{
//public:
//	Leaf(string name) : Component(name){};
//	virtual void execute() override
//	{
//		cout << getName() << "을 실행" << endl;
//	}
//};
//class Composite : public Component
//{
//private:
//	map<string, Component*> children;
//public:
//	Composite(string name) : Component(name) {};
//	virtual void execute() override
//	{
//		cout << getName() << " : ";
//		for_each(children.begin(), children.end(), [](pair<string, Component*> p) {cout << p.first << " "; });
//		cout << endl;
//	}
//	void add(Component* component)
//	{
//		if (children.count(component->getName()) == 0)
//		{
//			children.insert({ component->getName(), component });
//			cout << component->getName() << "추가" << endl;
//		}
//	}
//	void remove(string name)
//	{
//		if (children.count(name) > 0)
//		{
//			children.erase(name);
//			cout << name << "제거" << endl;
//		}
//	}
//	Component* getChild(string name)
//	{
//		if(children.count(name) > 0)
//		return this->children[name];
//	}
//};
//
//int main()
//{
//	Leaf* stuffA = new Leaf("A");
//	Composite* Box = new Composite("Box");
//	Box->add(new Leaf("B"));
//	Box->add(new Leaf("C"));
//	stuffA->execute();
//	Box->execute();
//	Box->getChild("C")->execute();
//	Box->remove("B");
//	Box->execute();
//}