//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: general_types.h
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月18日
//   描    述: 生成常用数据类型
//=======================================================================================

#ifdef CL_GENERAL_TYPES
    #undef CL_GENERAL_TYPES
#endif

#define CL_GENERAL_TYPES

#include "char_type.h"              // 字符型
#include "int_type.h"               // 整型
#include "short_type.h"             // 短整型
#include "long_type.h"              // 长整型
#include "unsigned_int_type.h"      // 无符号整型
#include "unsigned_short_type.h"    // 无符号短整型
#include "unsigned_long_type.h"     // 无符号长整型
#include "float_type.h"             // 单精度浮点型
#include "double_type.h"            // 双精度浮点型

#undef CL_GENERAL_TYPES
#undef CL_TEMPLATE_FILE

