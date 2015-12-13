#include <iostream>

/*
	Modify PrintFace() to have three parameters: char eyeChar, char noseChar, char mouthChar. Call the function with arguments 'o', '*', and '#', which should draw this face:
*/

using namespace std;
void PrintFace(char eye, char nose, char mouth) { // FIXME: Support 3 parameters
  cout << "   "  << eye << " " << eye << endl;      // Eyes
  cout << "    " << nose << endl;                         // Nose
  cout << "   "  << mouth << mouth << mouth << endl; // Mouth
  return;
}
int main() {
  PrintFace('*','o','_'); // FIXME: Pass 3 arguments
  return 0;
}
