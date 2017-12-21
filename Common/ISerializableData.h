/*******************************************************************
** 文件名:	ISerializableData.h
** 版  权:	(C) 深圳冰川网络股份有限公司
** 创建人:	baoliang.shen
** 日  期:	2017/11/29
** 版  本:	1.0
** 描  述:	单纯的序列化基类
** 应  用:
**************************** 修改记录 ******************************
** 修改人:
** 日  期:
** 描  述:
********************************************************************/
#pragma once
#include "buffer.h"

#pragma pack(1)


using rkt::obuf;
///////////////////////////////////////////////////////////////////
// 如果你的类不能位拷贝，而又要序列化，那么请继承此类
struct ISerializableData
{
	// 反序列化
	virtual	void fromBytes(const char* p, size_t len) = 0;

	// 序列化
	virtual	void toBytes(obuf& obufData) const = 0;
};


#pragma pack()