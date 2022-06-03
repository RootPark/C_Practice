#include "world_clock.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;

void WorldClock::Tick(int seconds){
	ClockSecond+=seconds;
}
bool WorldClock::SetTime(int hour, int minute, int second){
	if(hour>24 || minute>60 || second>60 || hour<0 || minute<0 || second<0){
		return false;
	}
	else {
		ClockSecond=hour*60*60+minute*60+second;
		return true;
	}
}

int WorldClock::hour() const{
	int hour;
	if(ClockSecond<0){
		int T=60*60*24-(-ClockSecond%(60*60*24));
		hour = T/3600;
	}
	else hour=ClockSecond/3600;
	return hour;
}
int WorldClock::minute() const{
	int minute;
	if(ClockSecond<0){
		int T=60*60*24-(-ClockSecond%(60*60*24));
		minute=(T-hour()*3600)/60;
	}
	else minute=(ClockSecond-hour()*3600)/60;
	return minute;
}
int WorldClock::second() const{
	int second;
	if(ClockSecond<0){
		int T=60*60*24-(-ClockSecond%(60*60*24));
		second=(T-hour()*3600-minute()*60);
	}
	else second=(ClockSecond-hour()*3600-minute()*60);
	return second;
}
ostream& operator << (ostream& os, const WorldClock& c){
	os<<c.hour()<<":"<<c.minute()<<":"<<c.second()<<endl;
	return os;
	
}
istream& operator >> (istream& is, WorldClock& c){
	char input[20];
	int hour, minute, second;
	is>>input;
	hour=atoi(strtok(input,":"));
	minute=atoi(strtok(NULL,":"));
	second=atoi(strtok(NULL,":"));
	if(c.SetTime(hour, minute, second)==false){
		cout<<"Invalid time: "<<hour<<":"<<minute<<":"<<second<<endl;
	}
	return is;
}