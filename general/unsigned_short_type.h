//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: unsigned_short_type.h
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月18日
//   描    述: unsigned short数据类型生成
//=======================================================================================

#if (defined (_type_) || defined (_Type_))
    #undef _type_
    #undef _Type_
#endif

#define _type_ unsigned short
#define _Type_ UnsignedShort

#ifdef CL_TEMPLATE_FILE
    #line 1 CL_TEMPLATE_FILE
    #include CL_TEMPLATE_FILE
#endif

#undef _type_
#undef _Type_

#ifndef CL_GENERAL_TYPES
    #undef CL_TEMPLATE_FILE
#endif

