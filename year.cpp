#include <iostream>

enum Days
{
	Jenuary = 0,
	February = 31,
	March = 59,
	April = 90,
	May = 120,
	June = 151,
	July = 181,
	August = 212,
	September = 243,
	October = 273,
	November = 304,
	December = 334

};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int firstday, firstmonth, firstyear;
	int secondday, secondmonth, secondyear;
	std::cout << "�������� ������ ���� (����, �����, ���): ";
	std::cin >> firstday>>firstmonth>>firstyear;
	std::cout << "�������� ������ ���� (����, �����, ���): ";
	std::cin >> secondday>>secondmonth>>secondyear;
	if ((firstyear % 4 == 0) || (secondyear % 4 == 0)||(firstyear % 400 == 0) || (secondyear % 400 == 0))
	{
		switch (secondmonth)
			{
			case(1):
				std::cout <<"���������� ���� " << Jenuary + secondday;
				break;
			case(2):
				std::cout << "���������� ���� " << February + secondday + 1;
				break;
			case(3):
				std::cout << "���������� ���� " << March + secondday + 1;
				break;
			case(4):
				std::cout << "���������� ���� " << April + secondday + 1;
				break;
			case(5):
				std::cout << "���������� ���� " << May + secondday + 1;
				break;
			case(6):
				std::cout << "���������� ���� " << June + secondday + 1;
				break;
			case(7):
				std::cout << "���������� ���� " << July + secondday + 1;
				break;
			case(8):
				std::cout << "���������� ���� " << August + secondday + 1;
				break;
			case(9):
				std::cout << "���������� ���� " << September + secondday + 1;
				break;
			case(10):
				std::cout << "���������� ���� " << October + secondday + 1;
				break;
			case(11):
				std::cout << "���������� ���� " << November + secondday + 1;
				break;
			case(12):
				std::cout << "���������� ���� " << December + secondday + 1;
				break;
			}
	
	}
	else
	{
		switch (secondmonth)
		{
		case(1):
			std::cout << "���������� ���� " << Jenuary + secondday;
			break;
		case(2):
			std::cout << "���������� ���� " << February + secondday;
			break;
		case(3):
			std::cout << "���������� ���� " << March + secondday;
			break;
		case(4):
			std::cout << "���������� ���� " << April + secondday;
			break;
		case(5):
			std::cout << "���������� ���� " << May + secondday;
			break;
		case(6):
			std::cout << "���������� ���� " << June + secondday;
			break;
		case(7):
			std::cout << "���������� ���� " << July + secondday;
			break;
		case(8):
			std::cout << "���������� ���� " << August + secondday;
			break;
		case(9):
			std::cout << "���������� ���� " << September + secondday;
			break;
		case(10):
			std::cout << "���������� ���� " << October + secondday;
			break;
		case(11):
			std::cout << "���������� ���� " << November + secondday;
			break;
		case(12):
			std::cout << "���������� ���� " << December + secondday;
			break;
		}
	}
	
	

	return 0;
}