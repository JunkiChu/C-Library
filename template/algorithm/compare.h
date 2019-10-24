//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: compare.h
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月18日
//   描    述: 比较两个元素大小
//=======================================================================================

/* @Function
 *   CLCompareEqualType(...)
 *   lhs == rhs
 * 
 * @Param
 *   lhs : 左比较值
 *   rhs : 右比较值
 * 
 * @Return
 *   int
 *   左右相等返回1; 左右不相等返回0;
 */
int _CL_Compare_(Equal)(const _type_ lhs, const _type_ rhs);

//=======================================================================================

/* @Function
 *   CLCompareNotEqualType(...)
 *   lhs != rhs
 * 
 * @Param
 *   lhs : 左比较值
 *   rhs : 右比较值
 * 
 * @Return
 *   int
 *   左右不相等返回1; 左右相等返回0;
 */
int _CL_Compare_(NotEqual)(const _type_ lhs, const _type_ rhs);

//=======================================================================================

/* @Function
 *   CLCompareGreaterType(...)
 *   lhs > rhs
 * 
 * @Param
 *   lhs : 左比较值
 *   rhs : 右比较值
 * 
 * @Return
 *   int
 *   左边大于右边返回正数;
 *   左边等于右边返回0;
 *   左边小于右边返回负数;
 */
int _CL_Compare_(Greater)(const _type_ lhs, const _type_ rhs);

//=======================================================================================

/* @Function
 *   CLCompareLessType(...)
 *   lhs < rhs
 * 
 * @Param
 *   lhs : 左比较值
 *   rhs : 右比较值
 * 
 * @Return
 *   int
 *   左边小于右边返回正数;
 *   左边等于右边返回0;
 *   左边大于右边返回负数;
 */
int _CL_Compare_(Less)(const _type_ lhs, const _type_ rhs);

//=======================================================================================

/* @Function
 *   CLCompareGreaterEqualType(...)
 *   lhs >= rhs
 * 
 * @Param
 *   lhs : 左比较值
 *   rhs : 右比较值
 * 
 * @Return
 *   int
 *   左边大于等于右边返回1; 左边小于右边返回0;
 */
int _CL_Compare_(GreaterEqual)(const _type_ lhs, const _type_ rhs);

//=======================================================================================

/* @Function
 *   CLCompareLessEqualType(...)
 *   lhs <= rhs
 * 
 * @Param
 *   lhs : 左比较值
 *   rhs : 右比较值
 * 
 * @Return
 *   int
 *   左边小于等于右边返回1; 左边大于右边返回0;
 */
int _CL_Compare_(LessEqual)(const _type_ lhs, const _type_ rhs);

//=======================================================================================

#include "compare.c"

