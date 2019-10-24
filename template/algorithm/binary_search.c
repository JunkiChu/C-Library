//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: binary_search.c
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月21日
//   描    述: 二分查找法, 确定元素是否存在于某范围中
//=======================================================================================

#include <stdio.h>
#include <stdlib.h>

// 二分查找法
int _CL_Binary_Search_()(_type_ *const arr, const int len, const _type_ target, int (*const comp)(const _type_, const _type_), int begin, int end)
{
    if(NULL == arr || 0 == len || begin < 0 || end < 0 || end >= len)
    {
        return -1;
    }

    while(begin <= end)
    {
        size_t middle = begin + ((end - begin) >> 1);
        if(comp(target, arr[middle]) > 0)
        {
            // 目标值在右边
            begin = middle + 1;
        }
        else if(comp(target, arr[middle]) < 0)
        {
            // 目标值在左边
            end = middle - 1;
        }
        else if(comp(target, arr[middle]) == 0)
        {
            // 与目标值相等则返回索引值
            return middle;
        }
    }

    return -1;
}

