#ifndef __CGQ_H
#define __CGQ_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 

#define CG_Z1  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_4)
#define CG_Z2  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_5)
//#define CG_Z3  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_8)
#define CG_Y1  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_1)
#define CG_Y2  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)
void CGQ_Init(void);//��ʼ��

		 				    
#endif
