/*
 * main.cpp
 *
 *  Created on: 30 Dec 2019
 *      Author: jinxluck
 */


#include<stdio.h>
#include"buffer.h"

struct buffer
{
	int number;
	int data;
	struct buffer *next;
}return_struct;

int main(void)
{
	int i;

	printf("in: \n");
	for(i = 0;i<5;i++)
	{
		int o = 2;
		o=buffer_input(i);

		printf("the return value is: %d \n",o);
	}
	printf("out: \n");

	for(i=0;i<5;i++)
	{
		return_struct=buffer_output();
		printf("number= %d\ndata= %d\n",return_struct.number,return_struct.data);
	}

	return 0;
}
