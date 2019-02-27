/********************************************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of  WAN XING Tech. Co., Ltd.(C) 2012.
*
*  Copyright (C), 2018-2030, WAN XING Tech. Co., Ltd.
*
*********************************************************************************************************
*
* File name: app_meter_task.c
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
#if __SYS_METER_ENABLE__
#include "app_meter_task.h"
#include "port_rs485_func.h"


/*-----------------------模块内宏定义-------------------------*/
//#define    xxxxxx              (xxxxxxxx)



/*----------------------模块内类定义--------------------------*/



/*----------------------变量常量定义--------------------------*/

METER_T meter;



/*****************************************************************************/
                         /* 函数定义 */
/*****************************************************************************/
/******************************************************************************
* Function:    APP_MeterThreadInit
* Input:       xxx
* Output:      xxx
* Return:      xxx
* Description: xxxxx
*
*
******************************************************************************/
void APP_MeterThreadInit(void)
{
	static pthread_t thread_port;
	static pthread_attr_t pthread_attr;
	int rc = 0;
	rc=pthread_create(&thread_port,&pthread_attr,PORT_Rs485Thread,NULL);
	if(rc != 0)
	{
		pthread_detach(thread_port);
		METER_PrintLog("create port thread failed!\r\n");
	}
	else
		METER_PrintLog("Create port thread successfully\r\n");
}



/******************************************************************************
* Function:    APP_MeterThread
* Input:       xxx
* Output:      xxx
* Return:      xxx
* Description: xxxxx
*
*
******************************************************************************/
void* APP_MeterThread(void *p_arg)
{
	APP_MeterThreadInit();
	while (1)
	{
		METER_PrintLog("Hello,APP_MeterThread!\r\n");
		sleep(1);
	}
	return NULL;
}

#endif//#if __SYS_METER_ENABLE__




