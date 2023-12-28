//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//
//class Snapshot
//{
//private:
//	string text;
//	string color;
//	int fontSize;
//public:
//	Snapshot(string text, string color, int fontSize)
//	{
//		this->text = text;
//		this->color = color;
//		this->fontSize = fontSize;
//	}
//	string getText()
//	{
//		return this->text;
//	}
//	string getColor()
//	{
//		return this->color;
//	}
//	int getFontSize()
//	{
//		return this->fontSize;
//	}
//};
//class Memento
//{
//private:
//	int id;
//	Snapshot* snapshotData;
//public:
//	Memento(int id, Snapshot* data)
//	{
//		this->id = id;
//		this->snapshotData = data;
//	}
//	int getId()
//	{
//		return this->id;
//	}
//	Snapshot* getSnapshotData()
//	{
//		return this->snapshotData;
//	}
//};
//class Editor
//{
//private:
//	string text;
//	string color;
//	int fontSize;
//	int count = 0;
//public:
//	Memento* makeSnapshot()
//	{
//		Snapshot* data = new Snapshot(this->text, this->color, this->fontSize);
//		return new Memento(count++, data);
//	}
//	void restore(Memento* memento)
//	{
//		count--;
//		Snapshot* data = memento->getSnapshotData();
//		setText(data->getText());
//		setColor(data->getColor());
//		setFontSize(data->getFontSize());
//	}
//	void setText(string text)
//	{
//		this->text = text;
//	}
//	void setColor(string color)
//	{
//		this->color = color;
//	}
//	void setFontSize(int size)
//	{
//		this->fontSize = size;
//	}
//	void Print()
//	{
//		cout << text << " (" << fontSize << ", " << color << ")" << endl;
//	}
//};
//class Caretaker
//{
//private:
//	stack<Memento*> history;
//	Editor* editor;
//public:
//	Caretaker(Editor* editor)
//	{
//		this->editor = editor;
//	}
//	void PushMem(Memento* mem)
//	{
//		history.push(mem);
//	}
//	void Restore()
//	{
//		editor->restore(history.top());
//		history.pop();
//	}
//};
//int main()
//{
//	Editor* editor = new Editor();
//	Caretaker* caretaker = new Caretaker(editor);
//
//	editor->setText("�ٶ��� ���� ���߿� ������ �Ĺ��� ���̸�");
//	editor->setColor("Black");
//	editor->setFontSize(11);
//	editor->Print();
//	caretaker->PushMem(editor->makeSnapshot());
//	editor->setText("����� �������� �������� ������ �������Դϱ�.");
//	editor->setColor("Red");
//	editor->setFontSize(9);
//	editor->Print();
//	caretaker->PushMem(editor->makeSnapshot());
//	editor->setText("������ �帶 ���� ��ǳ�� �������� ���� ������ ���� ƴ����");
//	editor->setColor("Blue");
//	editor->setFontSize(10);
//	editor->Print();
//	caretaker->PushMem(editor->makeSnapshot());
//	caretaker->Restore();
//	editor->Print();
//	caretaker->Restore();
//	editor->Print();
//	caretaker->Restore();
//	editor->Print();
//}