#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
	Using myvector.push_back("title") we can add more elements to a vector
	as per user interaction:

		void Music::addSong(string song){
		songNum.push_back(song);
	}
*/

class Music{
	public:
	//constructor
	Music(): songNum(3){
		CDTitle = "undefined";
		CDTracks = 0;
	}

	//mutators
	void setTitle(string title);
	void setTracks(int tracks);
	void addSong(string song);

	//accessors
	int getTracks(){
		return CDTracks;
	}
	string getTitle(){
		return CDTitle;
	}
	void printCDInfo();

	//private access
	private:
		string CDTitle;
		int CDTracks;
		vector<string> songNum;
};



void Music::addSong(string song){
	songNum.push_back(song);
}

void Music::printCDInfo(){
	int i = 0;

	for(i = 0; i < songNum.size(); i++){
		cout << "Song Title: " << songNum.at(i) << endl;
	}
	cout << endl;
}



int main (){
	Music newCD;

	// newCD.addSong("New song title.");
	// newCD.addSong("One more song added!");

	//user add new songs
	int NumNewSongs = 0;
	cout << "How many more songs to add: ";
	cin >> NumNewSongs;


	for(int i = 0; i < NumNewSongs; i++){
		string SongTitle;
		SongTitle = "test";
		cout << "Title of new Song: ";
		cin >> SongTitle;
		//getline(cin, SongTitle);
		newCD.addSong(SongTitle);
	}


	newCD.printCDInfo();


	return 0;
}
