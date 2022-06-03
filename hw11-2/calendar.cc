#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "calendar.h"

using namespace std;

Date::Date(){
	year_=0;
	month_=1;
	day_=1;
}

Date::Date(int year, int month, int day){
	this->year_=year;
	this->month_=month;
	this->day_=day;
}

void Date::NextDay(int n){
	int days=n+ComputeDaysFromYearStart(year_, month_, day_);
	int resultMonth=1;
	int resultDay=0;
	int monthArr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	if(days<0){
		year_--;
		days+=GetDayInYear(year_);
	}
	while(days>=GetDayInYear(year_)){
		days-=GetDayInYear(year_);
		year_++;
	}
	for(int i=0;i<12;i++){
		if(days-monthArr[i]<0) break;
		if(GetDayInYear(year_)==366) monthArr[1]=29;
		days -=monthArr[i];
		resultMonth+=1;
	}
	resultDay=days+1;
	SetDate(year_, resultMonth, resultDay);
}

bool Date::SetDate(int year, int month, int day){
	int monthArr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(GetDayInYear(year)==366){ 
		monthArr[1]++;
	}
	if(1<=month && month<=12 && 1<=day){
		for(int i=1;i<=12;i++){
			if(month==i){
				if(day<=monthArr[i-1]){
					this->year_=year;
					this->month_=month;
					this->day_=day;
					return true;
				}

			}
		}
	}
	else return false;
}

int Date::year()const{
	return year_;
}

int Date::month()const{
	return month_;
}

int Date::day()const{
	return day_;
}

int Date::GetDayInYear(int years){
	if(years%4==0){
		if(years%100==0){
			if(years%400==0){
				return 366;
			}
			else return 365;
		}
		else return 365;
	}
	else return 365;
}

int Date::ComputeDaysFromYearStart(int years, int months, int days){
	int monthArr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(GetDayInYear(years)==366){
		monthArr[1]++;
	}
	int result=days-1;
	for(int i=0;i<12;i++){
		if(months==1) break;
		months--;
		result+=monthArr[i];
	}
	return result;
}

ostream& operator <<(ostream& os, const Date& c){
	os<<c.year()<<"."<<c.month()<<"."<<c.day()<<endl;
	return os;
}

istream& operator >>(istream& is, Date& c){
	char input[30];
	int year, month, day;
	
	is>>input;
	year=atoi(strtok(input,"."));
	month=atoi(strtok(NULL,"."));
	day=atoi(strtok(NULL,"."));
	if(c.SetDate(year,month,day)==false){
		cout<<"Invalid date: "<<year<<"."<<month<<"."<<day<<endl;
	}
	return is;
}