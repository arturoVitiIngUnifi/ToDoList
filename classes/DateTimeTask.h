#ifndef TODOLIST_DATETIMETASK_H
#define TODOLIST_DATETIMETASK_H


#include "Task.h"
#include "DateTime.h"

class DateTimeTask : public Task {
	private:
		DateTime expiration;

	public:
		// TODO: fare i costruttori



		const DateTime &getExpiration() const;
		void setExpiration(const DateTime &expiration);

		const DateTime &getCompleted() const;
		void setCompleted(const DateTime &completed);

		bool isMustBeDoneToday();
		bool isExpired();

};


#endif