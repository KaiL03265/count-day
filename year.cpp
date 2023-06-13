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
	std::cout << "Напишите первую дату (день, месяц, год): ";
	std::cin >> firstday>>firstmonth>>firstyear;
	std::cout << "Напишите вторую дату (день, месяц, год): ";
	std::cin >> secondday>>secondmonth>>secondyear;
	if ((firstyear % 4 == 0) || (secondyear % 4 == 0)||(firstyear % 400 == 0) || (secondyear % 400 == 0))
	{
		switch (secondmonth)
			{
			case(1):
				std::cout <<"Количество дней " << Jenuary + secondday;
				break;
			case(2):
				std::cout << "Количество дней " << February + secondday + 1;
				break;
			case(3):
				std::cout << "Количество дней " << March + secondday + 1;
				break;
			case(4):
				std::cout << "Количество дней " << April + secondday + 1;
				break;
			case(5):
				std::cout << "Количество дней " << May + secondday + 1;
				break;
			case(6):
				std::cout << "Количество дней " << June + secondday + 1;
				break;
			case(7):
				std::cout << "Количество дней " << July + secondday + 1;
				break;
			case(8):
				std::cout << "Количество дней " << August + secondday + 1;
				break;
			case(9):
				std::cout << "Количество дней " << September + secondday + 1;
				break;
			case(10):
				std::cout << "Количество дней " << October + secondday + 1;
				break;
			case(11):
				std::cout << "Количество дней " << November + secondday + 1;
				break;
			case(12):
				std::cout << "Количество дней " << December + secondday + 1;
				break;
			}
	
	}
	else
	{
		switch (secondmonth)
		{
		case(1):
			std::cout << "Количество дней " << Jenuary + secondday;
			break;
		case(2):
			std::cout << "Количество дней " << February + secondday;
			break;
		case(3):
			std::cout << "Количество дней " << March + secondday;
			break;
		case(4):
			std::cout << "Количество дней " << April + secondday;
			break;
		case(5):
			std::cout << "Количество дней " << May + secondday;
			break;
		case(6):
			std::cout << "Количество дней " << June + secondday;
			break;
		case(7):
			std::cout << "Количество дней " << July + secondday;
			break;
		case(8):
			std::cout << "Количество дней " << August + secondday;
			break;
		case(9):
			std::cout << "Количество дней " << September + secondday;
			break;
		case(10):
			std::cout << "Количество дней " << October + secondday;
			break;
		case(11):
			std::cout << "Количество дней " << November + secondday;
			break;
		case(12):
			std::cout << "Количество дней " << December + secondday;
			break;
		}
	}
	
	

	return 0;
}