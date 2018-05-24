#include "Song.h"
using namespace std;

Song::Song() :title("Undefined"), artist("Undefined"), length(0)
{
}

Song::Song(string title, string artist, int length) : title(title), artist(artist), length(length)
{
}

string Song::getTitle()
{
	return title;
}

string Song::getArtist()
{
	return artist;
}

int Song::getLength()
{
	return length;
}