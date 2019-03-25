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
* File name: xxx_xxx.h
* -------------------------------------
*
* Module: all
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
* Date                Author             Change Id             Release Description Of Change
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
#ifndef __XXX_XXX_H__
#define __XXX_XXX_H__

#ifdef __cplusplus
extern "C" {
#endif


/*----------------------����ͷ�ļ�----------------------------*/
#include "std_globals.h"
#if 1//__XXX_xxx__

//#include "xxx_xxx.h"


/*----------------------�����궨��----------------------------*/
//#define    xxxxxx                (xxxxxxxx)


/*----------------------�����ඨ��----------------------------*/


/*-----------------ģ�����ӿڱ�������-----------------------*/
//extern    xxxxx;


/*-----------------ģ�����ӿں�������-----------------------*/
extern  INT32_T  COMM_InterfaceRegister(void *p_if,INT32_T len);
extern  INT32_T  COMM_InterfaceUnRegister(INT32_T if_id);
extern  INT32_T  COMM_InterfaceReadDat(INT32_T if_id,void *pbuf,INT32_T rlen);
extern  INT32_T  COMM_InterfaceWriteDat(INT32_T if_id,void *pbuf,INT32_T wlen);

#endif//#if __XXX_xxxx__

#ifdef __cplusplus
}
#endif
#endif //#ifndef __XXX_XXX_H__










