#include<gtest/gtest.h>
#include"../АСД1/string.cpp"
#include "pch.h"

TEST(string, OperatorSquareBrackets)//[]
{
	string a("1");
	ASSERT_EQ(1, a[0]);
}

TEST(string, OperationPlus)//+
{
	char test[] = "pleasywork";
	string a("pleasy");
	string b("work");
	string c = a + b;
	for (int i = 0; i < strlen(test); i++)
	{
		ASSERT_EQ(test[i], c[i]);
	}
}

TEST(string, OperationMnog)//*
{
	char test[] = "testtesttest";
	string a("test");
	string c = a * 3;
	for (int i = 0; i < strlen(test); i++)
	{
		ASSERT_EQ(test[i], c[i]);
	}
}
TEST(string, Substring)//Substring
{
	char test[] = "est";
	string a("test");
	string c = a.substring(2, 3, a);
	for (int i = 0; i < strlen(test); i++)
	{
		ASSERT_EQ(test[i], c[i]);
	}
}
TEST(string, ExceptionInSquareBracketsOperator)//Исключение []
{
	string a("t");
	ASSERT_THROW(a[-1], const char*);
	ASSERT_THROW(a[2], const char*);
	string b;
	ASSERT_THROW(b[0], const char*);
}

