#include "pch.h"
#include "C:\Users\matro\source\repos\АСД1\АСД1\list.cpp"

TEST(list, OperatorSquareBrackets)//[]
{
	list<std::string> a;
	std::string test = "Кто прочитает, тот воскреснет";
	a + test;
	ASSERT_EQ("Кто прочитает, тот воскреснет", a[0]);
	list<double> b;
	b + 6.66;
	ASSERT_EQ(6.66, b[0]);
}

TEST(list, OperationPlus)//+
{
	std::string Stest[] = { "Кто"," прочитает", " тот","воскреснет" };
	list<std::string> Sa;
	list<std::string> Sb;
	list<std::string> Sc;
	Sa +(Stest[0]);
	Sa +(Stest[1]);
	Sb +(Stest[2]);
	Sb +(Stest[3]);
	Sc = Sa + Sb;
	for (size_t i = 0; i < 3; i++)
	{
		ASSERT_EQ(Stest[i], Sc[i]);
	}
	double Dtest[] = { 3.33, 6.66 };
	list<double> da;
	list<double> db;
	list<double> dc;
	da +(Dtest[0]);
	db +(Dtest[1]);
	dc = da + db;
	for (size_t i = 0; i < 2; i++)
	{
		ASSERT_EQ(Dtest[i], dc[i]);
	}
}

TEST(list, OperationMnog)//*
{
	std::string Stest[] = { "test","test","test" };
	list<std::string> сa;
	for (size_t i = 0; i < 3 /3; i++)
	{
		сa + (Stest[i]);
	}
	list<std::string> Sc = сa * 3;
	for (size_t i = 0; i < 3; i++)
	{
		ASSERT_EQ(Stest[i], Sc[i]);
	}

	double Dtest[] = {3.33, 3.33, 3.33};
	list<double> da;
	for (size_t i = 0; i < 3/3; i++)
	{
		da +(Dtest[i]);
	}
	list<double> dc = da * 3;
	for (size_t i = 0; i < 3; i++)
	{
		ASSERT_EQ(Dtest[i], dc[i]);
	}
}

TEST(list, OperationSkob)//()
{
	std::string aT[] = { "t","e","s","t" };
	std::string test[] = { "e","s","t" };
	list <std::string> a;
	for (size_t i = 0; i < 4; i++)
	{
		a +(aT[i]);
	}
	list<std::string> c = a(2, 4);
	for (size_t i = 0; i < 3; i++)
	{
		ASSERT_EQ(test[i], c[i]);
	}
}

TEST(list, ExceptionInSquareBracketsOperator)//Исключение []
{
	list<std::string> a;
	a +("t");
	ASSERT_THROW(a[-1], const char*);
	ASSERT_THROW(a[2], const char*);
	list<int> b;
	ASSERT_THROW(b[0], const char*);
}

TEST(list, ExeptionInBracketsOperator)//Исключение ()
{
	std::string aT[] = { "t","e","s","t" };
	std::string test[] = { "e","s","t" };
	list <std::string> a;
	for (size_t i = 0; i < 4; i++)
	{
		a +(aT[i]);
	}
	ASSERT_THROW(a(20, 25), const char*);
	ASSERT_THROW(a(3, 1), const char*);
}

TEST(list, ExeptionInMultiOperator)//Исключение *
{

	std::string test[] = { "test" };
	list<std::string> a;
	for (size_t i = 0; i < 1; i++)
	{
		a +(test[i]);
	}
	ASSERT_THROW(a * 0, const char*);

}