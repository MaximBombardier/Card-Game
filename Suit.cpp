#include<iostream>
#include <vector>
#include <string>
#include"Suit Head.h"
using namespace std;

Suit::Suit(int suit ):m_Suit( )
{
	m_Suit = suit;
}


Suit &Suit::operator++()
{

	m_Suit++;
	return *this;

}

Suit Suit::operator++(int  i)
{
	Suit counter = *this;
	++*this;
	return counter;
}

bool operator>(const Suit & suit1, const Suit & suit2)
{
	return suit1.m_Suit > suit2.m_Suit;
}

bool operator<(const Suit & suit1, const Suit & suit2)
{
	return suit1.m_Suit < suit2.m_Suit;
}



Suit::~Suit()
{
}


int main()
{

	

	system("pause");
	return 0;
}