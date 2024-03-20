//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<pair<int, int>> points;
//	for (int i = 0; i < n; i++)
//	{
//		pair<int, int> p;
//		cin >> p.first >> p.second;
//		points.push_back(p);
//	}
//	sort(points.begin(), points.end());
//	for (int i = 0; i < n; i++)
//	{
//		cout << points[i].first << ' ' << points[i].second << '\n';
//	}
//}

// 
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//bool ComparePoints(const Point& p1, const Point& p2)
//{
//	if (p1.x != p2.x) 
//		return p1.x < p2.x;
//	else 
//		return p1.y < p2.y;
//}
//void QuickSort(Point* points, int left, int right)
//{
//	if (left >= right) return;
//
//	int pivotIndex = (left + right) / 2;
//	Point pivot = points[pivotIndex];
//	swap(points[pivotIndex], points[right]);
//
//	int low = left - 1;
//	int high = right;
//	while (low < high)
//	{
//		while (ComparePoints(points[++low], pivot));
//		while (ComparePoints(pivot, points[--high]));
//		if (low < high)
//			swap(points[low], points[high]);
//	}
//	swap(points[low], points[right]);
//	QuickSort(points, left, low - 1);
//	QuickSort(points, low + 1, right);
//}
//int main(void)
//{
//	int n = 0;
//	cin >> n;
//	Point* points = new Point[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> points[i].x >> points[i].y;
//	}
//	QuickSort(points, 0, n - 1);
//	for (int i = 0; i < n; i++)
//	{
//		cout << points[i].x << ' ' << points[i].y << '\n';
//	}
//	delete[] points;
//}