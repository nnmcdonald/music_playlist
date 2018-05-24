#include <string>
using namespace std;

class Song
{
public:
	Song();
	Song(string title, string artist, int length);
	string getTitle();
	string getArtist();
	int getLength();
private:
	string title;
	string artist;
	int length;
};