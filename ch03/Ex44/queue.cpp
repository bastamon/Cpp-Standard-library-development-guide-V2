//queue.cpp
/*------------------------
*	queue.cpp
*
*------------------------*/
#ifndef QUEUE_CPP
#define QUEUE_CPP
#include <list>
#include <exception>
template <class T>
class Queue{
	protected:
		std::list<T> c;
	public:
		class ReadEmptyQueue:public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return "Read Empty Queue.";
			}
		};
		typename std::list<T>::size_type size() const{
			return c.size();
		}
	bool empty() const
	{
		return c.empty();
	}
	void push(const T& elem)
	{
		c.push_back(elem);
	}
	T pop()
	{
		if(c.empty())
		{
			throw ReadEmptyQueue();
		}
		T elem(c.front());
		c.pop_front();
		return elem;
	}
	T& front()
	{
		if(c.empty())
		{
			throw(ReadEmptyQueue());
		}
		return c.front();
	}

};
#endif
 /* Queue.cpp */