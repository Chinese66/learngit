#include<iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define OK 1

using namespace std;


class Calc
{
private :
	int a;
	int b;
public:
	int c;
	void set_value(int a1, int b1) {
		a = a1; b = b1;
	}
	
	
	int add_ab();


};

int Calc::add_ab()
{
	return a + b;
}

uint16_t temp[50];
char CCID[25] = "12345678901234567890";
uint32_t now_file = 1, date_8bit = 20180721, time_6bit = 11213;
double curr_water_float_L = 1.23;

int main()
{
//	sprintf_s;
	sprintf((char*)temp, "#%s#%03d#%08d#%06d#%1.2f;", CCID, now_file, date_8bit, time_6bit, curr_water_float_L);
	printf("%s",temp);
//	cout << temp << endl;
	getchar();
	return OK;
}



