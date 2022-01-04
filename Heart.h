#include <iostream>
#include <string>
class Heart
{
private:
	//inputted data
	std::string name;
	int age;

	//holder variables
	int maxHR;
	int maxTargetHR;
	int minTargetHR;
	
public:
	Heart(std::string name, int age) {
		//pull inputted data from Main.cpp and set variables equal to it
		this->name = name;
		this->age = age;
	}
	//calculates & returns maximum heart rate
	int getMaxHR(){
		maxHR = 220 - age;
		
		return maxHR;
	}
	//calculates & returns maximum target heart rate
	int getMaxTargetHR() {
		maxTargetHR = getMaxHR() * .85;
		
		return maxTargetHR;
	}
	//calculates & returns minimum target heart rate
	int getMinTargetHR() {
		minTargetHR = getMaxHR() * .50;
		
		return minTargetHR;
	}
	//calculates the target heart rate range
	void getTargetRange() {
		std::cout << "Your target heart rate is: " << 
			getMinTargetHR() << "-" << getMaxTargetHR();
	}
		
};

