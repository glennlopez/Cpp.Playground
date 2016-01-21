#include <iostream>
#include <vector>
using namespace std;

/*
	Without using math.cpp this class focuses on converting
	baseX to baseY using the format:

		Base(baseX, baseY, item); --> Base(10, 2, 123);
		The above converts item 123 from base 10 to binary
*/

class ConvertBase{
private:
	unsigned int baseX;
	unsigned int baseY;
	unsigned int result;

public:
	ConvertBase(){
		//set defaults
		baseX = 0;
		baseY = 0;
		result = 0;
	}

	int base(unsigned int x, unsigned int y, vector<int> item){
		baseX = x;
		baseY = y;

		unsigned int n = 0;
		unsigned int i = 0;
		for(i = 0; i < item.size(); i++){
			n = item.size() - i;
			y = item.at(i);

			//get power
			unsigned j = 0;
			for(j = 0; j < n; j++){
				baseX = baseX * baseX;
			}

			baseX = baseX + baseX;
		}


		return baseX;
	}

};
