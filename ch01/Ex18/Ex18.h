#ifndef Ex18_H
#define Ex18_H
#include <iostream>
#include <string>
#include <sstream>
template <typename T> T fromString(const std::string& s)
{
	std::istringstream  is(s) ;
	T t;
	is>>t;
	return t;
}
template <typename T>std::string toString(const T& t)
{
	std::ostringstream s;
	s<<t;
	return s.str();
}
#endif