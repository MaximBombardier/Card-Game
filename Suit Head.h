//#ifndef Suit_Head.h
#pragma once
//#define Suit_Head.h
class Suit
{
public:
	
	Suit(int suit  = CLUBS);//Конструктор с одним параметром (инициализирует переменную m_Suit нулем или мастью CLUBS т.к. это одно и то же! )
	Suit(const Suit &) = default;//Конструктор копирования (задан по дефолту)
	Suit(Suit &&) = default;//Конструктор перемещения (задан по дефолту)
	Suit & operator =(const Suit &) = default;//Оператор присваивания для конструктора копирования (задан по дефолту)
	Suit & operator =( Suit &&) = default;//Оператор присваивания для конструктора перемещения (задан по дефолту)

	Suit & operator++();// Перегрузка префиксная (без этой перегрузки невозможно будет перегрузить постфиксный оператор ++)
	Suit operator++(int i);// Перегрузка постфиксная
	
	friend bool operator>(const Suit & suit1, const Suit & suit2);//Опрератор сравнения мастей Первая масть больше Второй
	friend bool operator<(const Suit & suit1, const Suit & suit2);//Опрератор сравнения мастей Вторая масть больше Первой

	~Suit();

private:

	
	int m_Suit;// Переменная содержащая в себе информацию о порядковом номере из четырех мастей ({ CLUBS=0, DIAMONDS=1, HEARTS=2, SPADES=3 })
	enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };//Перечисления четырех мастей (по дефолту будет иметь такой вид:{ CLUBS=0, DIAMONDS=1, HEARTS=2, SPADES=3 }  )


};

 




//#endif

