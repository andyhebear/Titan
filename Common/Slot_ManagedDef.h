﻿/*******************************************************************
** 文件名:	Slot_ManagedDef.h
** 版  权:	(C) 深圳冰川网络技术有限公司 2008 - All Rights Reserved
** 创建人:	秦其勇
** 日  期:	3/23/2015
** 版  本:	1.0
** 描  述:	战场公用定义

			
********************************************************************/


#ifndef __SLOT_MANAGED_DEF_H__
#define __SLOT_MANAGED_DEF_H__

#pragma pack(1)
#include "ManagedCode.h"

/////////////////////////槽位配置/////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
/*						C++和C#公用数据结构								*/
//////////////////////////////////////////////////////////////////////////
// 实体部件ID
ENUM SLOT_TYPE
{
	SLOT_TYPE_NONE = 0,			// 无类型
	SLOT_TYPE_GOODS,			// 物品
	SLOT_TYPE_SKILL,
    SLOT_TYPE_SUMMONER,         // 召唤师技能
    SLOT_TYPE_MAX,
};

#pragma pack()
#endif	// __SLOT_MANAGED_DEF_H__