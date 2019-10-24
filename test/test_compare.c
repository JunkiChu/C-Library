//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: test_compare.c
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月18日
//   描    述: 测试用例(比较两个元素大小)
//=======================================================================================

#include <stdio.h>
#include <stdlib.h>
#include "../algorithm.h"

typedef double Case;
#define _type_ Case
#define _Type_ Case
#include "../template/algorithm/compare.h"
#undef _type_
#undef _Type_

void SpecialTest()
{
    Case a = 1.0, b = 2.0;
    printf("Case %lf == %lf ? %d\n", a, b, CLCompareEqualCase(a, b));
    printf("Case %lf != %lf ? %d\n", a, b, CLCompareNotEqualCase(a, b));
    printf("Case %lf >  %lf ? %d\n", a, b, CLCompareGreaterCase(a, b));
    printf("Case %lf <  %lf ? %d\n", a, b, CLCompareLessCase(a, b));
    printf("Case %lf >= %lf ? %d\n", a, b, CLCompareGreaterEqualCase(a, b));
    printf("Case %lf <= %lf ? %d\n", a, b, CLCompareLessEqualCase(a, b));
    printf("\n");
}

void GeneralTest()
{
    char a1 = '1', b1 = '2';
    printf("char %c == %c ? %d\n", a1, b1, CLCompareEqualChar(a1, b1));
    printf("char %c != %c ? %d\n", a1, b1, CLCompareNotEqualChar(a1, b1));
    printf("char %c >  %c ? %d\n", a1, b1, CLCompareGreaterChar(a1, b1));
    printf("char %c <  %c ? %d\n", a1, b1, CLCompareLessChar(a1, b1));
    printf("char %c >= %c ? %d\n", a1, b1, CLCompareGreaterEqualChar(a1, b1));
    printf("char %c <= %c ? %d\n", a1, b1, CLCompareLessEqualChar(a1, b1));
    printf("\n");

    int a2 = 1, b2 = 2;
    printf("int %d == %d ? %d\n", a2, b2, CLCompareEqualInt(a2, b2));
    printf("int %d != %d ? %d\n", a2, b2, CLCompareNotEqualInt(a2, b2));
    printf("int %d >  %d ? %d\n", a2, b2, CLCompareGreaterInt(a2, b2));
    printf("int %d <  %d ? %d\n", a2, b2, CLCompareLessInt(a2, b2));
    printf("int %d >= %d ? %d\n", a2, b2, CLCompareGreaterEqualInt(a2, b2));
    printf("int %d <= %d ? %d\n", a2, b2, CLCompareLessEqualInt(a2, b2));
    printf("\n");
    
    float a8 = 1.0, b8 = 2.0;
    printf("float %f == %f ? %d\n", a8, b8, CLCompareEqualFloat(a8, b8));
    printf("float %f != %f ? %d\n", a8, b8, CLCompareNotEqualFloat(a8, b8));
    printf("float %f >  %f ? %d\n", a8, b8, CLCompareGreaterFloat(a8, b8));
    printf("float %f <  %f ? %d\n", a8, b8, CLCompareLessFloat(a8, b8));
    printf("float %f >= %f ? %d\n", a8, b8, CLCompareGreaterEqualFloat(a8, b8));
    printf("float %f <= %f ? %d\n", a8, b8, CLCompareLessEqualFloat(a8, b8));
    printf("\n");
}

int main()
{
    SpecialTest();
    GeneralTest();

    return 0;
}

