#include "DateTimeTask.h"

const DateTime &DateTimeTask::getExpiration() const {
	return expiration;
}

void DateTimeTask::setExpiration(const DateTime &expiration) {
	DateTimeTask::expiration = expiration;
}

const DateTime &DateTimeTask::getCompleted() const {
	return completed;
}

void DateTimeTask::setCompleted(const DateTime &completed) {
	DateTimeTask::completed = completed;
}
