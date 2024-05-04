//Задание 3.2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, side, surface, volume; //Задаём необходимые переменные
	
	printf("Длинна куба равна = "); scanf("%d", &a); //Запрашиваем у пользователя длинну ребра куба
	
	//Расчитываем площадь грани, всей поверхности, а также объём куба
	side = a * a;
	surface = side * 6;
	volume = a * a * a;

	//Выводим полученные значения
	printf("\nПлощадь одной грани куба равна = %d\n", side);
	printf("Площадь всей поверхности куба равна = %d\n", surface);
	printf("Объём куба равен = %d\n", volume);
	
	return 0;
}
