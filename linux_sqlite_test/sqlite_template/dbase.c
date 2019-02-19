/********************************************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of CRIS AUTS Inc. (C) 2012.
*
*  Copyright (C), 2010-2012, CRIS AUTS  Tech. Co., Ltd.
*
*********************************************************************************************************
*
* File name: db.c
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
* Description:  database wrapper api defines.
*
* ------------------------------------------------------------------------
*
* History:
*
* Date                Author             Change Id             Release Description Of Change
* ------------------------------------------------------------------------------------------------------
* 2012-12-15           Cris                1st                            created
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
/*-----------------------����ͷ�ļ�---------------------------*/
#include "std_globals.h"
#if __SYS_DBASE_ENABLE__
#if __DBASE_SQLITE3_ENABLE__
#include "dbase_sqlite3.h"
#endif


/*-----------------------�ӿ�ͷ�ļ�---------------------------*/
//#include "xxx_xxx.h"

/*----------------------��ģ��ͷ�ļ�--------------------------*/
//#include "xxx_xxx.h"

/*----------------------ģ���ں궨��--------------------------*/
//#define    xxxxxx                (xxxxxxxx)



/*----------------------ģ�����ඨ��--------------------------*/


/*----------------------ȫ�ֱ�������--------------------------*/


/*----------------------�ڲ���̬����--------------------------*/


/*----------------------�ڲ���̬����--------------------------*/


/*****************************************************************************/
                         /* �������� */
/*****************************************************************************/

/******************************************************************************
* Function:    DBASE_OpenDataBase
* Input:       db_name:
* Output:      pp_db:����һ���������� SQLite ��������ݿ����Ӷ���
* Return:      xxx
* Description: xxxxx
*db_name:	���ݿ��ļ�����
*pp_db:		����һ���������� SQLite ��������ݿ����Ӷ���
* Others:
*
* -------------------------------------------------------------------
* History:
*     Date         Author     Change Id     Release Description Of Change
* 2012-12-15    Cris          1st                    created
*
*
******************************************************************************/
int DBASE_OpenDataBase(char *db_name, sqlite3 **pp_db)
{
	return SQLITE3_OpenDataBase(db_name,pp_db);
}


/******************************************************************************
* Function:    DBASE_CloseDataBase
* Input:       
* Output:      
* Return:      xxx
* Description: xxxxx
*
* Others:
*
* -------------------------------------------------------------------
* History:
*     Date         Author     Change Id     Release Description Of Change
* 2012-12-15    Cris          1st                    created
*
*
******************************************************************************/
int DBASE_CloseDataBase(sqlite3 *p_db)
{
	return SQLITE3_CloseDataBase(p_db);
}




#endif//#if __SYS_DBASE_ENABLE__

