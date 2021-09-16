#include <iostream>
class string
{
private:
	char* _str;
	unsigned _size;
public:
	string(const char* s){
		_size = strlen(s);
		_str = new char[_size + 1];
		strcpy(_str, s);
	};
	~string() { delete[]_str; };
	unsigned Get_size()
	{
		return _size;
	};
	char& operator[](unsigned index)
	{
		if ((index > _size - 1) || (index < 0) || (_size == 0))throw "Incorrect index!";
		return _str[index];
	}
	string operator +(const string& rhs)
	{

	}
};