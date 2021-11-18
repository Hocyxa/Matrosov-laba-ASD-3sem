#include <iostream>
#include<vector>
#pragma once

using std::ostream;
using std::istream;

template<class T>
class list
{
private:
	std::vector<T> v;
public:
	unsigned Get_size()const
	{
		return v.size();
	};
	void operator+(T element)
	{
		v.push_back(element);
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
		for (unsigned j=0;j<rhs1.Get_size(); j++)
		{
			Result + rhs1[j];
		}
		return Result;
	};
	list<T> operator*(const int n)
	{
		if (n<1)throw "Incorrect num!";
		list<T> Result;
		for (unsigned j = 0; j < n; j++)
		{
			for (auto i=v.begin(); i!=v.end(); i++)
			{
				Result + *i;
			}
		}
		return Result;
	};
	list<T> operator()(size_t start,size_t stop=0)
	{
		list<T> Result;
		if (start > v.size() || stop > v.size())throw "Incorrect index";
		if (start > stop && stop!=0)throw "Incorrect index";
		if (stop == 0)
		{
			for (unsigned i=0;i<v.size(); i++)
			{
				Result +v[i];
			}
		}
		else
		{
			for (unsigned i = start - 1; i < stop - start + 2; i++)
			{
				Result + v[i];
			}
		}
		return Result;
	};
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
};