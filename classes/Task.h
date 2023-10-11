#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H

#include "../data/Priority.h"
#include "../data/Hashtag.h"
#include <string>
#include <vector>

class Task {
	protected:
		std::string name;
		std::string description;
		Priority    priority;
		std::vector<Hashtag> topicList;
		bool done;
		bool wontDo;

	public:


		// TODO: dichiarare i costruttori
		bool toogleStatus();
		bool isDone();
		void addTopic( const Hashtag *hashtag );
		void removeTopic( const Hashtag *hashtag );


		const std::string &getName() const;
		void setName( const std::string &name );

		const std::string &getDescription() const;
		void setDescription( const std::string &description );

		Priority getPriority() const;
		void setPriority( Priority priority );

		const std::vector<Hashtag> &getTopicList() const;

		void setTopicList( const std::vector<Hashtag> &topicList );

		bool isWontDo() const;
		void setWontDo( bool wontDo );


};


#endif
