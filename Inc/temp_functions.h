#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_COUNT_T 525600		//максимально количество измерений датичка температуры за год

struct sensorTemperature		//структура для занчений температуры с датчика
{
	uint16_t year;				//год
	uint8_t month_dig;			//месяц числом
	uint8_t day;				//деннь
	uint8_t hour;				//часы
	uint8_t minute;				//минуты
	int temperature;			//температура
	char month_str[3];			//месяц из 3 букв
};

void addDataTemperature(struct sensorTemperature*);			//считывание и парсинг данных	

float middleTemperatureMonth(struct sensorTemperature*);	//среднемесячная температура

int minTemperatureMonth(struct sensorTemperature*);			//минимальная температура за месяц

int maxTemperatureMonth(struct sensorTemperature*);			//максимальная температура за месяц

float middleTemperatureYear(struct sensorTemperature*);		//среднегодовая температура

int minTemperatureYear(struct sensorTemperature*);			//минамальная температура за год

int maxTemperatureYear(struct sensorTemperature*);			//максимальная температура за год