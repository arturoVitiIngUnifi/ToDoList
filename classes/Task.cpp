//
// Created by Arturo on 11/10/2023.
//

#include "Task.h"

const std::string &Task::getName() const {
	return name;
}

void Task::setName(const std::string &name) {
	Task::name = name;
}

const std::string &Task::getDescription() const {
	return description;
}

void Task::setDescription(const std::string &description) {
	Task::description = description;
}

Priority Task::getPriority() const {
	return priority;
}

void Task::setPriority(Priority priority) {
	Task::priority = priority;
}

const std::vector<Hashtag> &Task::getTopicList() const {
	return topicList;
}

void Task::setTopicList(const std::vector<Hashtag> &topicList) {
	Task::topicList = topicList;
}

void Task::setDone(bool done) {
	Task::done = done;
}

bool Task::isWontDo() const {
	return wontDo;
}

void Task::setWontDo(bool wontDo) {
	Task::wontDo = wontDo;
}
