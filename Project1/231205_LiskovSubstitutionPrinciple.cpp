//#include <iostream>
//#include <cstring>
//#include <typeinfo>
//using namespace std;

#pragma region withLSPinOverloading
//class Animal
//{
//protected:
//	int speed = 100;
//public:
//	int go(int distance)
//	{
//		return speed * distance;
//	}
//	virtual int go(int distance, bool flying) = 0;
//};
//
//class Eagle : public Animal
//{
//protected:
//	int speed = 200;
//public:
//	virtual int go(int distance, bool flying) override
//	{
//		if(flying) return distance;
//		return distance * speed;
//	}
//};
//
//int main()
//{
//	Animal* eagle = new Eagle();
//	cout << eagle->go(10, false) << endl;
//}
#pragma endregion
#pragma region withoutDifferentItent
//class Rectangle
//{
//protected:
//	int width, height;
//public:
//	Rectangle(const int width, const int height) 
//		: width{ width }, height{ height } {}
//
//	int get_width() const { return width; }
//	virtual void set_width(const int width) { this->width = width; }
//	int get_height() const { return height; }
//	virtual void set_height(const int height) { this->height = height; }
//
//	int area() const { return width * height; }
//};
//class Square : public Rectangle
//{
//public:
//	Square(int size): Rectangle(size, size) {}
//	void set_width(const int width) override 
//	{
//		this->width = height = width;
//	}
//	void set_height(const int height) override
//	{
//		this->height = width = height;
//	}
//};
//int main()
//{
//	Rectangle r{ 5, 5 };
//	cout << r.area() << endl;
//	
//	Square s{ 5 };
//	cout << s.area() << endl;
//	return 0;
//}
#pragma endregion
#pragma region LSP
//class Shape
//{
//protected:
//	Shape(int width, int height)
//	{
//		set_width(width);
//		set_height(height);
//	}
//	int width, height;
//	int get_width() const { return width; }
//	virtual void set_width(const int width) { this->width = width; }
//	int get_height() const { return height; }
//	virtual void set_height(const int height) { this->height = height; }
//public:
//	int area() const { return width * height; }
//};
//class Rectangle : public Shape
//{
//public:
//	Rectangle(const int width, const int height) : Shape(width, height) {}
//};
//class Square : public Shape
//{
//public:
//	Square(int size) : Shape(size, size) {}
//	void set_width(const int width) override
//	{
//		this->width = height = width;
//	}
//	void set_height(const int height) override
//	{
//		this->height = width = height;
//	}
//};
//int main()
//{
//	Rectangle r{ 5, 5 };
//	cout << r.area() << endl;
//
//	Square s{ 5 };
//	cout << s.area() << endl;
//	return 0;
//}
#pragma endregion
