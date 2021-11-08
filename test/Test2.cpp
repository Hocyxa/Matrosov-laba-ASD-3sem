#include "C:\Users\matro\source\repos\АСД1\АСД1\list.cpp"
#include "pch.h"

TEST(list, OperatorSquareBrackets)//[]
{
	list<char> a;
	a = a.append('t');
	ASSERT_EQ('t', a[0]);
	list<double> b;
	b = b.append(6.66);
	ASSERT_EQ(6.66, b[0]);
}

TEST(list, OperationPlus)//+
{
	char test[] = "Test";
	list<char> a;
	list<char> b;
	list<char> c;
	a = a.append(test[0]);
	a = a.append(test[1]);
	b = b.append(test[2]);
	b = b.append(test[3]);
	c = a + b;
	for (size_t i = 0; i < strlen(test); i++)
	{
		ASSERT_EQ(test[i], c[i]);
	}
}

TEST(list, OperationMnog)//*
{
	char test[] = "testtesttest";
	list<char> a;
	for (size_t i = 0; i < strlen(test); i++)
	{
		a = a.append(test[i]);
	}
	list<char> c = a * 3;
	for (size_t i = 0; i < strlen(test); i++)
	{
		ASSERT_EQ(test[i], c[i]);
	}
}

TEST(list, OperationSkob)//()
{
	char aT[] = "test";
	char test[] = "est";
	list <char> a;
	for (size_t i = 0; i < strlen(aT); i++)
	{
		a = a.append(aT[i]);
	}
	
	list<char> c = a(2,3);
	for (size_t i = 0; i < strlen(test); i++)
	{
		ASSERT_EQ(test[i], c[i]);
	}
}

TEST(list, ExceptionInSquareBracketsOperator)//Исключение []
{
	list<char> a;
	a = a.append('t');
	ASSERT_THROW(a[-1], const char*);
	ASSERT_THROW(a[2], const char*);
	list<int> b;
	ASSERT_THROW(b[0], const char*);
}