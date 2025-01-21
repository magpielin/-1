#ifndef __CGQ_H
#define __CGQ_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 

#define CG_Z1  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_4)
#define CG_Z2  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_5)
//#define CG_Z3  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_8)
#define CG_Y1  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_1)
#define CG_Y2  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)
void CGQ_Init(void);//初始化

		 				    
#endif
