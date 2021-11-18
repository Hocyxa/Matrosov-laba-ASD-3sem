#include <iostream>
#include<vector>
#pragma once
using std::ostream;
using std::istream;
template<class T>
class list
{
private:
	std::vector <T> v;
public:
	unsigned Get_size()const
	{
		return v.size();
	};
	T &operator[](unsigned index)
	{
		if ((index > v.size() - 1) || (index < 0) || (v.size() == 0))throw "Incorrect index!";
		auto r = v.begin();
		for (unsigned i = 0; i < index; i++)
		{
			r++;
		}
		return *r;
	};
	T operator[](unsigned index)const
	{
		if ((index > v.size() - 1) || (index < 0) || (v.size() == 0))throw "Incorrect index!";
		auto r = v.begin();
		for (unsigned i = 0; i < index; i++)
		{
			r++;
		}
		return *r;
	};
	list<T> operator+(const list<T>& rhs1)
	{
		list<T> Result = *this;
		for (auto j=rhs1.begin(); j !=rhs1.end(); j++)
		{
			Result.push_back(*j);
		}
		return Result;
	};
	list<T> operator*(const int n)
	{
		if (n<1)throw "Incorrect num!";
		list<T> Result;
		auto r = Result.begin();
		for (unsigned j = 0; j < n; j++)
		{
			for (auto i=v.begin(); i!=v.end(); i++)
			{
				r=*i;
				r++;
			}
		}
		return Result;
	};
	list<T> operator()(size_t start,size_t stop=0)
	{
		list<T> Result;
		auto r=Result.begin();
		if (start > v.size() || stop > v.size())throw "Incorrect index";
		if (start > stop && stop!=0)throw "Incorrect index";
		if (stop == 0)
		{
			for (auto i = v.begin()+start-1; i != v.end(); i++)
			{
				*r = *i;
			}
		}
		else
		{
			auto j = v.begin();
			for (auto i = v.begin() + start - 1; i != stop - start + 1; i++)
			{
				*r = *j;
			}
		}
		return Result;
	};
	list<T>& operator=(const list<T>& rhs)
	{
		auto rs = rhs.begin();
		for (auto i=v.begin();i!=v.end();i++)
		{
			*i = rhs._data[i];
			rs++;
		}
		return *this;
	}
	friend ostream& operator << (std::ostream& os, const list<T>& s1)
	{
		unsigned size = s1.Get_size();
		os << "[";
		for (unsigned i =0; i <size; i++)
		{
			os << " '"<<s1[i]<<"'";
			if (i != size - 1) os << ",";
		}
		os << " ]";
		return os;
	};
	void append(T elem)
	{
		v.push_back(elem);
	};
};