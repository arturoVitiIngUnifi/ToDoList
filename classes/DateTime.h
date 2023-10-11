#ifndef TODOLIST_DATETIME_H
#define TODOLIST_DATETIME_H

#include<string>

class DateTime {
	private:
		int year, month, day, hour, minute, seconds;
	public:
		DateTime( int year, int month, int day, int hour = 0, int minute = 0, int seconds = 0 );
		std::string toString();
};


#endif
