/***************************************************
 *         Author: Hoky GUAN                       *
 *         Date  : 2019/7/15                       *
 *         Last  : 2019/7/15                       *
 *         Notes : dht11.h                         *
 **************************************************/
#ifndef _DHT11_H_
#define _DHT11_H_

#include <reg52.h>

void dht11_enable(char enable);

unsigned char dht11_read_data(void);

typedef struct
{
	unsigned char humi_int;		//湿度整数
	unsigned char humi_deci;	//湿度小数
	unsigned char temp_int;		//温度整数
	unsigned char temp_deci;	//温度小数
	unsigned char check_sum;
		                 
}dht11_data_t;

unsigned int dht11_humi_int(void);
unsigned int dht11_humi_deci(void);
unsigned int dht11_temp_int(void);
unsigned int dht11_temp_deci(void);

#endif