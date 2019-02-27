/********************************************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of WAN XING Tech. Co., Ltd.(C) 2020.
*
*  Copyright (C), 2018-2030, WAN XING Tech. Co., Ltd.
*
*********************************************************************************************************
*
* File name: port_rs232_func.c
* -------------------------------------
*
* Module: xxx
* -------------------------------------
*
* Project: xxx
* -------------------------------------
*
* Version: V1.0
* -------------------------------------
*
* Description:  xxxxxxxxxxxxxxxxxxxxxxxx
*
* ------------------------------------------------------------------------
*
* History:
*
* Date                   Author             Change Id             Release Description Of Change
* ------------------------------------------------------------------------------------------------------
*
*
* ------------------------------------------------------------------------------------------------------
*
*
* ------------------------------------------------------------------------------------------------------
*
* Others:
*
********************************************************************************************************/
/*------------------------------------------------------------------*/
#include "std_globals.h"
#if __SYS_RS232_ENABLE__
#include "port_rs232_func.h"



/*-----------------------模块内宏定义-------------------------*/
//#define    xxxxxx              (xxxxxxxx)


/*----------------------模块内类定义--------------------------*/



/*----------------------变量常量定义--------------------------*/




/*****************************************************************************/
                         /* 函数定义 */
/*****************************************************************************/

/******************************************************************************
* Function:    PORT_Rs232Init
* Input:       xxx
* Output:      xxx
* Return:      xxx
* Description: xxxxx
*
*
******************************************************************************/
int PORT_Rs232Init(PORT_RS232_CFG_T *pcfg)
{
                        
	return 0;	
}


/******************************************************************************
* Function:    PORT_Rs232Cfg
* Input:       xxx
* Output:      xxx
* Return:      xxx
* Description: xxxxx
*
*
******************************************************************************/
int PORT_Rs232Cfg(int fd,PORT_RS232_CFG_T *pcfg)
{  
	 
	 return 0;	 
}


/******************************************************************************
* Function:    PORT_Rs232Thread
* Input:       xxx
* Output:      xxx
* Return:      xxx
* Description: xxxxx
*
*
******************************************************************************/
void* PORT_Rs232Thread(void *p_arg)
{

	
	while (1)
	{
		METER_PrintLog("Hello,PORT_Rs232Thread!\r\n");
		sleep(1);
	}
	return NULL;
}





#endif//#if __SYS_RS485_ENABLE__





