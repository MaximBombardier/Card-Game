//#ifndef Suit_Head.h
#pragma once
//#define Suit_Head.h
class Suit
{
public:
	
	Suit(int suit  = CLUBS);//����������� � ����� ���������� (�������������� ���������� m_Suit ����� ��� ������ CLUBS �.�. ��� ���� � �� ��! )
	Suit(const Suit &) = default;//����������� ����������� (����� �� �������)
	Suit(Suit &&) = default;//����������� ����������� (����� �� �������)
	Suit & operator =(const Suit &) = default;//�������� ������������ ��� ������������ ����������� (����� �� �������)
	Suit & operator =( Suit &&) = default;//�������� ������������ ��� ������������ ����������� (����� �� �������)

	Suit & operator++();// ���������� ���������� (��� ���� ���������� ���������� ����� ����������� ����������� �������� ++)
	Suit operator++(int i);// ���������� �����������
	
	friend bool operator>(const Suit & suit1, const Suit & suit2);//��������� ��������� ������ ������ ����� ������ ������
	friend bool operator<(const Suit & suit1, const Suit & suit2);//��������� ��������� ������ ������ ����� ������ ������

	~Suit();

private:

	
	int m_Suit;// ���������� ���������� � ���� ���������� � ���������� ������ �� ������� ������ ({ CLUBS=0, DIAMONDS=1, HEARTS=2, SPADES=3 })
	enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };//������������ ������� ������ (�� ������� ����� ����� ����� ���:{ CLUBS=0, DIAMONDS=1, HEARTS=2, SPADES=3 }  )


};

 




//#endif

