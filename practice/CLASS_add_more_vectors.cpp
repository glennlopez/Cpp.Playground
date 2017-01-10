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
	Music(): songNum(0){
		CDTitle = "undefined";
	}

	//mutators
	void setTitle(string title);
	void addSong(string song);

	//accessors
	string getTitle(){
		return CDTitle;
	}
	void printCDInfo();

	//private access
	private:
		string CDTitle;
		vector<string> songNum;
};


//** OBJECT DEFINITIONS **//
void Music::setTitle(string title){
	CDTitle = title;
}
void Music::addSong(string song){
	songNum.push_back(song);
}

void Music::printCDInfo(){
	int i = 0;

	cout << "-------------" << endl;
	for(i = 0; i < songNum.size(); i++){
		cout << "Song #" << i + 1 << ": " << songNum.at(i) << endl;
	}
	cout << "-------------" << endl;
	cout << endl;
}


//** MAIN **//
int main (){
	Music newCD;

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
	cout << endl;

	newCD.setTitle("Album Title");
	cout << newCD.getTitle() << endl;

	newCD.printCDInfo();


	return 0;
}
