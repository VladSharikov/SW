#include <iostream>
int main()
{
	setlocale(LC_ALL, "russian");
	int day;
	std::cout << "Введите день (от 1 до 7): ";
	std::cin >> day;
	while (day < 1 || day > 7)
	{
		std::cout << "Введён неправильный день" << std::endl;
		std::cout << "Введите день (от 1 до 7): ";
		std::cin >> day;
	}
	const char* day_of_week[] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };
	std::cout << day_of_week[day - 1] << std::endl;
	return 0;
}