//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: binary_search.h
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月21日
//   描    述: 二分查找法, 确定元素是否存在于某范围中
//=======================================================================================

/* @Function
 *   CLBinarySearchType(...)
 *   二分查找法
 * 
 * @Param
 *   arr    : 目标数组
 *   len    : 目标数组长度
 *   target : 目标元素
 *   comp   : 比较函数
 *   begin  : 查找起始位置
 *   end    : 查找结束位置
 * 
 * @Return
 *   int
 *   目标元素存在, 返回对应索引值; 目标元素不存在, 返回-1;
 */
int _CL_Binary_Search_()(_type_ *const arr, const int len, const _type_ target, int (*const comp)(const _type_, const _type_), int begin, int end);

//=======================================================================================

#include "binary_search.c"

