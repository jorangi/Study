//#include <iostream>
//#include <string>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//class Video
//{
//private:
//	string id;
//	int length;
//public:
//	Video(string id, int length)
//	{
//		this->id = id;
//		this->length = length;
//	}
//	string ToString()
//	{
//		string s = "ID : " + id;
//		s += ", 영상길이 : ";
//		s += to_string(length);
//		return s;
//	}
//};
//class ThirdPartyYoutubeLibrary
//{
//public:
//	virtual map<string, Video*> listVideos() { map<string, Video*> m;  return m; }
//	virtual Video* getVideoInfo(string id) { return new Video("", 0); }
//	virtual void downloadVideo(string id){}
//};
//class ThirdPartyYoutubeClass : public ThirdPartyYoutubeLibrary
//{
//public:
//	virtual map<string, Video*> listVideos() override
//	{
//		map<string, Video*> m;
//		m.insert({ "CatVideo", new Video("CatVideo", 10) });
//		m.insert({ "DogVideo", new Video("DogVideo", 15) });
//		m.insert({ "BabyVideo", new Video("BabyVideo", 13) });
//		return m;
//	}
//	virtual Video* getVideoInfo(string id) override
//	{
//		return listVideos()[id];
//		//특정 비디오에 대한 메타데이터를 가져옴
//	}
//	virtual void downloadVideo(string id) override
//	{
//		cout << getVideoInfo(id)->ToString() << endl;
//		//유튜브에서 동영상 파일을 다운로드함
//	}
//};
//class CachedYoutubeClass : public ThirdPartyYoutubeLibrary
//{
//private:
//	ThirdPartyYoutubeLibrary* service;
//	map<string, Video*> videoCache;
//	map<string, Video*> listCache;
//public:
//	CachedYoutubeClass(ThirdPartyYoutubeLibrary* s)
//	{
//		this->service = s;
//	}
//	virtual map<string, Video*> listVideos() override
//	{
//		if (listCache.empty())
//			listCache = service->listVideos();
//		return listCache;
//	}
//	virtual Video* getVideoInfo(string id) override
//	{
//		if (videoCache.count(id) == 0)
//			videoCache.insert({ id, service->getVideoInfo(id) });
//		return videoCache[id];
//	}
//	virtual void downloadVideo(string id) override
//	{
//		if (!downloadExist(id))
//			service->downloadVideo(id);
//		else
//			cout << id << "는 이미 다운로드된 비디오입니다." << endl;
//	}
//	bool downloadExist(string id)
//	{
//		if (videoCache.count(id) == 0)
//		{
//			videoCache.insert({ id, service->getVideoInfo(id) });
//			return false;
//		}
//		return true;
//	}
//};
//int main()
//{
//	ThirdPartyYoutubeLibrary* service = new ThirdPartyYoutubeClass();
//	CachedYoutubeClass* cached = new CachedYoutubeClass(service);
//	cached->downloadVideo("CatVideo");
//	cached->downloadVideo("DogVideo");
//	cached->downloadVideo("BabyVideo");
//	cached->downloadVideo("CatVideo");
//}