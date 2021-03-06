#include <iostream>
#include<string>
#pragma once
using std::ostream;
using std::istream;
template<class T>
class list
{
private:
	T *_data;
	size_t _size;
	unsigned Get_size()
	{
		return _size;
	};

public:

	list(const T *data=NULL,const size_t size=0){
		_size=size;
		for (size_t i = 0; i < _size; i++)
		{
			_data[i] = data[i];
		}
	};
	list(const list<T>& rhs)
	{
		_size = rhs._size;
		_data = new T[_size];
		for (size_t i = 0; i < _size; i++)
		{
			_data[i] = rhs._data[i];
		}
	}
	~list() { delete[] _data; };
	T& operator[](unsigned index)
	{
		if ((index > _size - 1) || (index < 0) || (_size == 0))throw "Incorrect index!";
		return _data[index];
	};
	list<T> operator+(const list<T>& rhs1)
	{
		list _temp("");
		delete[] _temp._data;                   
		_temp._size = _size + rhs1._size;       
		_temp._data = new T[_temp._size]; 
		unsigned i = 0;
		for (i; i < _size; i++)
		{
			_temp._data[i] = _data[i];
		}
		for (unsigned j = 0; j < rhs1._size; j++)
		{
			_temp._data[i] = rhs1._data[j];
			i++;
		}
		return _temp;
	};
	list<T> operator*(const size_t n)
	{
		 if (n<1) throw "Incorrect num!";
		 list _temp("");
		delete[] _temp._data;
		_temp._size = _size * n;
		_temp._data = new T[_temp._size ];
		
		for (unsigned j = 0; j < n; j++)
		{
			for (unsigned i = 0; i < _size; i++)
			{
				_temp._data[j * _size + i] = _data[i];
			}
		}
		return _temp;
	};
	list<T> operator()(size_t start,size_t stop=0)
	{
		list _temp;
		delete _temp._data;
		if (start > _size || stop > _size)throw "Incorrect index";
		if (stop == 0)
		{
			_temp._size = _size - start;
			_temp._data = new T[_temp._size];
			for (size_t i = 0; i < _temp._size; i++)
			{
				_temp._data[i] = _data[start + i];
			}
		}
		else
		{
			_temp._size = stop - start;
			_temp._data = new T[_temp._size];
			for (size_t i = 0; i < _temp._size; i++)
			{
				_temp._data[i] = _data[start + i];
			}
		}
		return _temp;
	};
	list<T>& operator=(const T* elements)
	{
		delete[] _data;
		_size = std::strlen(elements);
		_data = new T[_size ];
		std::strcpy(_data, elements);
		return *this;
	}
	friend ostream& operator << (std::ostream& os, const list<T>& s1)
	{
		os << "[";
		for (size_t i = 0; i <s1._size; i++)
		{
			os << " '"<<s1._data[i]<<"'";
			if (i != s1._size - 1) os << ",";
		}
		os << "]";
		return os;
	};
	list<T> append(T elem)
	{
		list _temp;
		delete[] _temp._data;
		_temp._size = _size + 1;
		_temp._data = new T[_temp._size];
		for (size_t i = 0; i < _size; i++)
		{
			_temp.data[i] = _data[i];
		}
		_temp._data[_temp.size] = elem;
		return _temp;
	}
	list<T> extend(T elem)
	{
		list _temp;
		delete[] _temp._data;
		_temp._size = _size + 1;
		_temp._data = new T[_temp._size];
		_temp._data[1] = elem;
		for (size_t i = 1; i < _size; i++)
		{
			_temp.data[i] = _data[i];
		}
		return _temp;
	}
};