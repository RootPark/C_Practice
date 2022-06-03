#include"clock.h"
#include"clock_time.h"
#include<vector>
#include<string>
#include<iostream>

using namespace std;


int main(){
	int sec;
	cin >> sec;
	vector<Clock*>clocks;
	clocks.push_back(new SundialClock(0,0,0));
	clocks.push_back(new CuckooClock(0,0,0));
	clocks.push_back(new GrandFatherClock(0,0,0));
	clocks.push_back(new WristClock(0,0,0));
	clocks.push_back(new AtomicClock(0,0,0));

	for(Clock* object : clocks) {
		object->reset();
	}

	cout << "Reported clock times after resetting:" << endl;
	for(Clock* object : clocks) {
		object->displayTime();
	}
	cout << endl;
	cout << "Running the clocks..." << endl;
	cout << endl;
	
	for(int i = 0; i < sec; i++){
		for(Clock* object : clocks) {
			object->tick();
		}
	}
	cout << "Reported clock times after running:" << endl;

	for(Clock* object : clocks){
		object->displayTime();
	}
	
	for(Clock* object : clocks) {
		delete object;
	}
	return 0;
}