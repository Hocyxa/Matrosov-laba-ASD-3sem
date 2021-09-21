#include <iostream>
#include<string>
using std::ostream;
using std::istream;

class string
{
private:
	char* _str;
	unsigned _size;
public:

	string(const char* s=""){
		_size = strlen(s);
		_str = new char[_size + 1];
		strcpy(_str, s);
	};
	string(const string& rhs)
	{
		_size = strlen(rhs._str);
		_str = new char[_size + 1];
		strcpy(_str, rhs._str);
	}
	~string() {delete [] _str; };
	unsigned Get_size()
	{
		return _size;
	};
	char& operator[](unsigned index)
	{
		if ((index > _size - 1) || (index < 0) || (_size == 0))throw "Incorrect index!";
		return _str[index];
	};
	friend string operator+(const string& rhs1, const string& rhs2)
	{
		string _temp("");  
		
		delete[] _temp._str;                   
		_temp._size = rhs1._size + rhs2._size;       
		_temp._str = new char[_temp._size +1]; 
		unsigned i = 0;
		for (i; i < rhs1._size; i++)
		{
			_temp._str[i] = rhs1._str[i];
		}
		for (unsigned j = 0; j < rhs2._size; j++)
		{
			_temp._str[i] = rhs2._str[j];
			i++;
		}
		_temp._str[_temp._size] = 0;
		return _temp;
	};
	 string operator*(const int n)
	{
		string _temp("");
		delete[] _temp._str;
		_temp._size = _size * n;
		_temp._str = new char[_temp._size + 1];
		
		for (unsigned j = 0; j < n; j++)
		{
			for (unsigned i = 0; i < _size; i++)
			{
				_temp._str[j * _size + i] = _str[i];
			}
		}
		_temp._str[_size * n ] = 0;
		return _temp;
	};
	string& operator=(const char* s)
	{
		delete[] _str;
		_size = std::strlen(s);
		_str = new char[_size + 1];
		std::strcpy(_str, s);
		return *this;
	}
	friend ostream& operator << (std::ostream& os, const string& s1)
	{
		os << s1._str;
		return os;
	};
};