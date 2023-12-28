//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//class Canvas
//{
//private:
//	const int width = 20;
//	const int height = 20;
//	string canvasData[20][20];
//
//public:
//	void DataSet(int x, int y, string texture)
//	{
//		canvasData[y][x] = texture;
//	}
//	void Draw()
//	{
//		for (int y = 0; y < height; y++)
//		{
//			for (int x = 0; x < width; x++)
//			{
//				cout << (canvasData[y][x].compare("") != 0 ? canvasData[y][x] : "-");
//			}
//			cout << endl;
//		}
//	}
//};
//const class TreeType
//{
//private:
//	string texture;
//public:
//	TreeType(string texture)
//	{
//		this->texture = texture;
//	}
//	void Draw(Canvas* canvas, int x, int y)
//	{
//		canvas->DataSet(x, y, this->texture);
//	}
//};
//class Tree
//{
//private:
//	int x;
//	int y;
//	TreeType* type;
//public:
//	Tree(int x, int y, TreeType* treeType)
//	{
//		this->x = x;
//		this->y = y;
//		this->type = treeType;
//	}
//	void Draw(Canvas* canvas)
//	{
//		type->Draw(canvas, x, y);
//	}
//};
//class TreeFactory
//{
//private:
//	map<string, TreeType*> treeTypes;
//public:
//	TreeType* getTreeType(string texture)
//	{
//		if (treeTypes.count(texture) == 0)
//		{
//			treeTypes.insert({ texture, new TreeType(texture) });
//			cout << "새로 " << texture << "트리 타입을 생성했습니다." << endl;
//		}
//		else
//			cout << "이미 " << texture << "트리 타입이 있습니다." << endl;
//		return treeTypes.find(texture)->second;
//	}
//};
//int main()
//{
//	Canvas* canvas = new Canvas();
//	TreeFactory* fac = new TreeFactory();
//	Tree* bT1 = new Tree(0, 0, fac->getTreeType("b"));
//	Tree* bT2 = new Tree(3, 1, fac->getTreeType("b"));
//	Tree* bT3 = new Tree(7, 4, fac->getTreeType("b"));
//	Tree* rT1 = new Tree(6, 8, fac->getTreeType("r"));
//	Tree* gT1 = new Tree(4, 10, fac->getTreeType("g"));
//	bT1->Draw(canvas);
//	bT2->Draw(canvas);
//	bT3->Draw(canvas);
//	rT1->Draw(canvas);
//	gT1->Draw(canvas);
//	canvas->Draw();
//}