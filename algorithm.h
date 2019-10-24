//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: algorithm.h
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月18日
//   描    述: 算法库
//=======================================================================================

#ifndef __CL_ALGORITHM_H__
#define __CL_ALGORITHM_H__

#include "general/general.h"

//=======================================================================================

// 比较两个元素大小
#define _CL_Compare_(_Func_) CONCAT_3(CLCompare, _Func_, _Type_)
#define _CL_Compare_t CONCAT_2(CLCompare, _Type_)

#ifdef CL_TEMPLATE_FILE
    #undef CL_TEMPLATE_FILE
#endif

#define CL_TEMPLATE_FILE "../template/algorithm/compare.h"
#include "general/general_types.h"

//=======================================================================================

//二分查找法, 确定元素是否存在于某范围中
#define _CL_Binary_Search_(_Func_) CONCAT_3(CLBinarySearch, _Func_, _Type_)
#define _CL_Binary_Search_t CONCAT_2(CLBinarySearch, _Type_)

#ifdef CL_TEMPLATE_FILE
    #undef CL_TEMPLATE_FILE
#endif

#define CL_TEMPLATE_FILE "../template/algorithm/binary_search.h"
#include "general/general_types.h"

//=======================================================================================

#endif // __CL_ALGORITHM_H__

