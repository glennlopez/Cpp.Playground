//https://www.youtube.com/watch?v=AT1raQhyzPU&t=134s
#include <iostream>


#include <sstream>
#include <fstream>
using namespace std;

int main(){

  stringstream ss; //use the stringstream buffer

  string line;
  fstream textfile; //file stream

  textfile.open("dataSet1.txt"); //open the file
  while( getline(textfile, line) ){ //get the information line by line
    ss << line << " ";
  }
  textfile.close();

  cout << ss.str();

  return 0;
}
