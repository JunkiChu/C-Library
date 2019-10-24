//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: compare.c
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月18日
//   描    述: 比较两个元素大小
//=======================================================================================

#include <stdio.h>
#include <stdlib.h>

// lhs == rhs
int _CL_Compare_(Equal)(const _type_ lhs, const _type_ rhs)
{
    return lhs == rhs;
}

// lhs != rhs
int _CL_Compare_(NotEqual)(const _type_ lhs, const _type_ rhs)
{
    return lhs != rhs;
}

// lhs > rhs
int _CL_Compare_(Greater)(const _type_ lhs, const _type_ rhs)
{
    return lhs - rhs;
}

// lhs < rhs
int _CL_Compare_(Less)(const _type_ lhs, const _type_ rhs)
{
    return rhs - lhs;
}

// lhs >= rhs
int _CL_Compare_(GreaterEqual)(const _type_ lhs, const _type_ rhs)
{
    return lhs >= rhs;
}

// lhs <= rhs
int _CL_Compare_(LessEqual)(const _type_ lhs, const _type_ rhs)
{
    return lhs <= rhs;
}

