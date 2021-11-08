#include "pch.h"
#include "C:\Users\matro\source\repos\ÀÑÄ1\ÀÑÄ1\list.cpp"

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
	char Ctest[] = "Test";
	list<char> ca;
	list<char> cb;
	list<char> cc;
	ca = ca.append(Ctest[0]);
	ca = ca.append(Ctest[1]);
	cb = cb.append(Ctest[2]);
	cb = cb.append(Ctest[3]);
	cc = ca + cb;
	for (size_t i = 0; i < strlen(Ctest); i++)
	{
		ASSERT_EQ(Ctest[i], cc[i]);
	}
	double Dtest[] = { 3.33, 6.66 };
	list<double> da;
	list<double> db;
	list<double> dc;
	da = da.append(Dtest[0]);
	db = db.append(Dtest[1]);
	dc = da + db;
	for (size_t i = 0; i < 2; i++)
	{
		ASSERT_EQ(Dtest[i], dc[i]);
	}
}

TEST(list, OperationMnog)//*
{
	char Ñtest[] = "testtesttest";
	list<char> ña;
	for (size_t i = 0; i < strlen(Ñtest)/3; i++)
	{
		ña = ña.append(Ñtest[i]);
	}
	list<char> ñc = ña * 3;
	for (size_t i = 0; i < strlen(Ñtest); i++)
	{
		ASSERT_EQ(Ñtest[i], ñc[i]);
	}

	double Dtest[] = {3.33, 3.33, 3.33};
	list<double> da;
	for (size_t i = 0; i < 1; i++)
	{
		da = da.append(Dtest[i]);
	}
	list<double> dc = da * 3;
	for (size_t i = 0; i < 3; i++)
	{
		ASSERT_EQ(Dtest[i], dc[i]);
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
	list<char> c = a(2, 4);
	for (size_t i = 0; i < strlen(test); i++)
	{
		ASSERT_EQ(test[i], c[i]);
	}
}

TEST(list, ExceptionInSquareBracketsOperator)//Èñêëþ÷åíèå []
{
	list<char> a;
	a = a.append('t');
	ASSERT_THROW(a[-1], const char*);
	ASSERT_THROW(a[2], const char*);
	list<int> b;
	ASSERT_THROW(b[0], const char*);
}

TEST(list, ExeptionInBracketsOperator)//Èñêëþ÷åíèå ()
{
	char aT[] = "test";
	char test[] = "est";
	list <char> a;
	for (size_t i = 0; i < strlen(aT); i++)
	{
		a = a.append(aT[i]);
	}
	ASSERT_THROW(a(20, 25), const char*);
	ASSERT_THROW(a(3, 1), const char*);
}

TEST(list, ExeptionInMultiOperator)//Èñêëþ÷åíèå *
{

	char test[] = "test";
	list<char> a;
	for (size_t i = 0; i < strlen(test); i++)
	{
		a = a.append(test[i]);
	}
	ASSERT_THROW(a * 0, const char*);

}