
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = -1;
int8_t x281 = 1;
int8_t x371 = 0;
volatile uint64_t x372 = 121515554725LLU;
int64_t x434 = -48LL;
volatile int32_t t12 = -196;
static uint32_t x577 = 21898024U;
int8_t x580 = -1;
uint64_t x598 = UINT64_MAX;
int32_t x599 = -1;
volatile int64_t x600 = -1LL;
uint32_t x633 = 86141727U;
static int32_t x634 = INT32_MAX;
int8_t x636 = 0;
static uint16_t x657 = 12U;
int32_t t18 = 117004912;
static int64_t x770 = -58649LL;
int32_t x771 = -1;
static int8_t x788 = -1;
uint16_t x797 = UINT16_MAX;
volatile int64_t x841 = -1LL;
int32_t x897 = INT32_MIN;
int32_t t27 = -6676;
volatile uint8_t x1061 = UINT8_MAX;
int16_t x1063 = 12;
int8_t x1096 = -1;
volatile int32_t t30 = 203;
uint64_t x1210 = UINT64_MAX;
int8_t x1258 = -1;
volatile int32_t t33 = -16776514;
int64_t x1405 = INT64_MAX;
volatile int32_t x1413 = 32328;
static int64_t x1415 = -15LL;
volatile uint8_t x1416 = 0U;
uint16_t x1470 = 19U;
volatile uint32_t x1472 = 13667414U;
int8_t x1489 = -1;
int32_t t37 = -5;
volatile int8_t x1520 = 0;
static uint8_t x1649 = UINT8_MAX;
volatile int32_t t40 = -438270823;
int16_t x1727 = -27;
int16_t x1870 = INT16_MAX;
volatile uint32_t x1872 = 48U;
volatile int32_t t45 = -7685193;
int32_t t52 = 55;
static int64_t x2406 = 2LL;
static int64_t x2471 = -1LL;
static int8_t x2472 = -2;
volatile int16_t x2501 = 3;
static volatile int16_t x2509 = INT16_MIN;
int32_t x2510 = INT32_MAX;
int32_t x2511 = -1975;
int32_t t57 = 3809189;
int32_t x2548 = 1;
uint64_t x2599 = 0LLU;
static uint64_t x2922 = 21LLU;
volatile int8_t x2978 = -13;
static volatile int32_t t66 = 132;
volatile int8_t x2991 = 0;
int16_t x2992 = 783;
volatile int8_t x3068 = 0;
static int32_t t69 = -184833130;
int8_t x3084 = -1;
volatile int32_t x3117 = 0;
static uint64_t x3128 = UINT64_MAX;
int32_t t77 = 803802;
int32_t t80 = -3364;
uint8_t x3332 = 2U;
volatile int8_t x3403 = -2;
int32_t t82 = -103734339;
uint32_t x3497 = 29406U;
volatile int8_t x3594 = INT8_MIN;
int64_t x3595 = INT64_MAX;
volatile uint16_t x3669 = UINT16_MAX;
int32_t x3813 = INT32_MIN;
static volatile uint32_t x3815 = UINT32_MAX;
uint8_t x3842 = 1U;
int32_t t88 = -28;
int8_t x3847 = -1;
volatile int32_t t89 = -2112060;
uint8_t x3891 = 0U;
int32_t x3916 = INT32_MIN;
volatile int32_t t91 = -806;
uint32_t x3963 = 86U;
int8_t x4051 = -1;
int8_t x4077 = INT8_MAX;
static int16_t x4078 = -1;
static uint64_t x4079 = UINT64_MAX;
int16_t x4142 = -1;
uint32_t x4196 = UINT32_MAX;
int16_t x4230 = INT16_MAX;
static int8_t x4239 = 0;
int32_t x4270 = -23633;
uint64_t x4311 = UINT64_MAX;
static int32_t x4330 = -26661;
int64_t x4426 = -113399358LL;
static int64_t x4441 = -2205279172770085LL;
int8_t x4443 = -23;
int32_t t110 = 82953;
int8_t x4461 = INT8_MIN;
int64_t x4468 = -6066207220787LL;
int64_t x4504 = -1LL;
int64_t x4533 = -36988LL;
int32_t x4555 = -1;
int8_t x4556 = -10;
uint16_t x4587 = 2804U;
uint8_t x4588 = 0U;
static int64_t x4630 = INT64_MIN;
int64_t x4631 = -1LL;
int32_t x4632 = -14;
volatile int32_t t119 = 13330994;
int8_t x4697 = INT8_MIN;
uint64_t x4698 = 41LLU;
int16_t x4699 = -1;
static uint32_t x4706 = UINT32_MAX;
static volatile uint8_t x4712 = 0U;
int64_t x4789 = INT64_MIN;
int32_t t123 = -15228063;
int16_t x4870 = INT16_MIN;
volatile uint64_t x4926 = 2355LLU;
volatile int16_t x4991 = -3537;
int16_t x5001 = -1;
uint32_t x5007 = UINT32_MAX;
int8_t x5075 = -7;
static int32_t x5076 = -1;
static volatile int16_t x5126 = -4;
int32_t x5177 = INT32_MIN;
static volatile int8_t x5380 = INT8_MIN;
int8_t x5398 = 1;
int8_t x5400 = 0;
uint32_t x5471 = 1U;
static volatile int16_t x5498 = -1;
int8_t x5500 = -1;
int32_t t141 = 3;
int64_t x5522 = 10542LL;
int16_t x5523 = -1;
int32_t t143 = 0;
int64_t x5561 = -1288759836639LL;
volatile int8_t x5758 = -15;
int32_t x5760 = -16115443;
uint16_t x6050 = 0U;
uint16_t x6052 = 0U;
volatile int32_t x6122 = -1;
int32_t x6170 = INT32_MIN;
static int32_t t154 = 58168;
uint64_t x6313 = 25989358471666594LLU;
static volatile uint16_t x6349 = 6649U;
volatile int8_t x6497 = -4;
int16_t x6524 = -1;
volatile int32_t t164 = 13;
int64_t x6654 = INT64_MIN;
int16_t x6713 = 8;
static int32_t x6726 = 149611;
int32_t x6727 = -625065;
static int64_t x6728 = 0LL;
int16_t x6736 = INT16_MIN;
volatile int32_t t171 = 173788081;
int32_t t172 = 45932;
int64_t x6753 = INT64_MAX;
int8_t x6756 = 3;
uint8_t x6865 = 0U;
uint32_t x6867 = 0U;
uint16_t x6922 = UINT16_MAX;
int32_t t176 = -719214182;
uint64_t x6946 = UINT64_MAX;
uint32_t x7070 = UINT32_MAX;
static uint16_t x7161 = 147U;
volatile int32_t x7163 = INT32_MIN;
uint8_t x7218 = UINT8_MAX;
static uint32_t x7219 = 7078064U;
int8_t x7266 = INT8_MIN;
int64_t x7268 = -1LL;
int64_t x7413 = INT64_MIN;
volatile uint8_t x7414 = 28U;
int64_t x7415 = -1LL;
static volatile int32_t t187 = 336229557;
int32_t t188 = 2868582;
uint32_t x7716 = 220793316U;
static int32_t x7722 = INT32_MIN;
volatile int32_t x7764 = -1;
static int32_t x7789 = INT32_MIN;
int32_t t195 = -252342966;
int32_t x7902 = INT32_MIN;


void f0(void) {
    	volatile int32_t x9 = 88;
	int32_t x10 = 3909;
	int64_t x11 = -9LL;
	int32_t t0 = -284165108;

    t0 = ((x9>x10)>>(x11*x12));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x33 = 463632012LLU;
	uint8_t x34 = UINT8_MAX;
	static volatile uint32_t x35 = UINT32_MAX;
	int8_t x36 = -1;
	volatile int32_t t1 = -5;

    t1 = ((x33>x34)>>(x35*x36));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x117 = -1;
	int64_t x118 = -1LL;
	volatile int16_t x119 = 2;
	static uint8_t x120 = 12U;
	int32_t t2 = -481;

    t2 = ((x117>x118)>>(x119*x120));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x173 = 1744;
	int16_t x174 = INT16_MAX;
	int64_t x175 = 0LL;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t3 = 0;

    t3 = ((x173>x174)>>(x175*x176));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x209 = -3737;
	uint32_t x210 = UINT32_MAX;
	volatile int8_t x211 = 0;
	volatile int8_t x212 = -1;
	int32_t t4 = 244619;

    t4 = ((x209>x210)>>(x211*x212));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x221 = 46LL;
	volatile uint64_t x222 = 82263557034LLU;
	static int16_t x223 = 4853;
	uint8_t x224 = 0U;
	static int32_t t5 = 2103186;

    t5 = ((x221>x222)>>(x223*x224));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x225 = INT16_MIN;
	int8_t x226 = 3;
	static uint64_t x227 = UINT64_MAX;
	static volatile int8_t x228 = -13;
	static int32_t t6 = 1;

    t6 = ((x225>x226)>>(x227*x228));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x282 = INT64_MAX;
	int8_t x283 = -3;
	int64_t x284 = -1LL;
	static int32_t t7 = 3420;

    t7 = ((x281>x282)>>(x283*x284));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = -4021;
	int32_t t8 = 37;

    t8 = ((x369>x370)>>(x371*x372));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x401 = 110132;
	int32_t x402 = 13;
	uint64_t x403 = 8890LLU;
	int64_t x404 = INT64_MIN;
	static volatile int32_t t9 = -3;

    t9 = ((x401>x402)>>(x403*x404));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x433 = 72U;
	uint16_t x435 = UINT16_MAX;
	volatile uint8_t x436 = 0U;
	int32_t t10 = 265860875;

    t10 = ((x433>x434)>>(x435*x436));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x473 = -4;
	uint32_t x474 = 96851U;
	uint64_t x475 = 19LLU;
	int64_t x476 = 0LL;
	volatile int32_t t11 = -322362;

    t11 = ((x473>x474)>>(x475*x476));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x501 = 12;
	uint8_t x502 = 42U;
	int64_t x503 = INT64_MIN;
	uint64_t x504 = 31802613650556672LLU;

    t12 = ((x501>x502)>>(x503*x504));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	volatile int8_t x518 = INT8_MIN;
	static uint32_t x519 = 0U;
	int8_t x520 = INT8_MIN;
	int32_t t13 = -130007;

    t13 = ((x517>x518)>>(x519*x520));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x541 = 27339511U;
	static int64_t x542 = -22143461801189LL;
	static uint8_t x543 = 0U;
	int8_t x544 = INT8_MAX;
	volatile int32_t t14 = -10069;

    t14 = ((x541>x542)>>(x543*x544));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x578 = -1;
	int64_t x579 = -1LL;
	volatile int32_t t15 = -5087;

    t15 = ((x577>x578)>>(x579*x580));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x597 = 62U;
	int32_t t16 = 25303;

    t16 = ((x597>x598)>>(x599*x600));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x635 = UINT32_MAX;
	static int32_t t17 = -50895;

    t17 = ((x633>x634)>>(x635*x636));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x658 = -911;
	uint32_t x659 = UINT32_MAX;
	int8_t x660 = -1;

    t18 = ((x657>x658)>>(x659*x660));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x769 = INT32_MAX;
	int16_t x772 = -1;
	int32_t t19 = -380;

    t19 = ((x769>x770)>>(x771*x772));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x785 = INT16_MIN;
	static uint64_t x786 = UINT64_MAX;
	uint64_t x787 = UINT64_MAX;
	volatile int32_t t20 = 69754663;

    t20 = ((x785>x786)>>(x787*x788));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x793 = 15555379702LL;
	int8_t x794 = INT8_MIN;
	volatile uint8_t x795 = 0U;
	volatile uint64_t x796 = UINT64_MAX;
	volatile int32_t t21 = 35606188;

    t21 = ((x793>x794)>>(x795*x796));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x798 = INT16_MIN;
	static uint64_t x799 = UINT64_MAX;
	int32_t x800 = -3;
	int32_t t22 = 2555;

    t22 = ((x797>x798)>>(x799*x800));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x842 = INT8_MAX;
	volatile int8_t x843 = 0;
	int8_t x844 = INT8_MIN;
	int32_t t23 = 239;

    t23 = ((x841>x842)>>(x843*x844));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x869 = INT16_MAX;
	static uint64_t x870 = UINT64_MAX;
	int8_t x871 = INT8_MIN;
	int8_t x872 = 0;
	int32_t t24 = -1197118;

    t24 = ((x869>x870)>>(x871*x872));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x889 = -846890LL;
	int64_t x890 = 39438190LL;
	static int64_t x891 = -1LL;
	int8_t x892 = -17;
	volatile int32_t t25 = 75452;

    t25 = ((x889>x890)>>(x891*x892));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x898 = -337;
	int32_t x899 = -1;
	int16_t x900 = -1;
	int32_t t26 = 687431880;

    t26 = ((x897>x898)>>(x899*x900));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x921 = 5991789984670LL;
	int32_t x922 = -1;
	static int32_t x923 = -1;
	static uint64_t x924 = UINT64_MAX;

    t27 = ((x921>x922)>>(x923*x924));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1062 = 4U;
	int8_t x1064 = 1;
	static volatile int32_t t28 = -3;

    t28 = ((x1061>x1062)>>(x1063*x1064));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1085 = 0;
	int16_t x1086 = INT16_MIN;
	int32_t x1087 = -11;
	int64_t x1088 = -1LL;
	int32_t t29 = -1;

    t29 = ((x1085>x1086)>>(x1087*x1088));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x1093 = 1991022948U;
	uint64_t x1094 = UINT64_MAX;
	volatile int32_t x1095 = -1;

    t30 = ((x1093>x1094)>>(x1095*x1096));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1177 = 1644U;
	static uint8_t x1178 = 12U;
	uint64_t x1179 = UINT64_MAX;
	int8_t x1180 = -15;
	volatile int32_t t31 = 3377;

    t31 = ((x1177>x1178)>>(x1179*x1180));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1209 = UINT32_MAX;
	int32_t x1211 = -1;
	static int16_t x1212 = -4;
	int32_t t32 = -368512161;

    t32 = ((x1209>x1210)>>(x1211*x1212));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x1257 = 71U;
	volatile int64_t x1259 = INT64_MIN;
	uint64_t x1260 = 91411166696560598LLU;

    t33 = ((x1257>x1258)>>(x1259*x1260));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x1406 = 3U;
	int64_t x1407 = 0LL;
	static volatile uint8_t x1408 = 0U;
	volatile int32_t t34 = 1031688;

    t34 = ((x1405>x1406)>>(x1407*x1408));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x1414 = 14066U;
	int32_t t35 = 8813742;

    t35 = ((x1413>x1414)>>(x1415*x1416));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x1469 = 4230LLU;
	int32_t x1471 = INT32_MIN;
	int32_t t36 = 2554;

    t36 = ((x1469>x1470)>>(x1471*x1472));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1490 = INT8_MIN;
	uint64_t x1491 = UINT64_MAX;
	volatile int64_t x1492 = -1LL;

    t37 = ((x1489>x1490)>>(x1491*x1492));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x1517 = INT8_MAX;
	int32_t x1518 = 11641095;
	volatile int16_t x1519 = -1;
	static volatile int32_t t38 = 1462529;

    t38 = ((x1517>x1518)>>(x1519*x1520));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x1541 = 1403U;
	volatile uint64_t x1542 = UINT64_MAX;
	static int32_t x1543 = -1;
	int8_t x1544 = -1;
	volatile int32_t t39 = 400;

    t39 = ((x1541>x1542)>>(x1543*x1544));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x1650 = -6798083;
	int32_t x1651 = -1;
	uint64_t x1652 = UINT64_MAX;

    t40 = ((x1649>x1650)>>(x1651*x1652));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1725 = -1;
	int8_t x1726 = INT8_MIN;
	int32_t x1728 = -1;
	static volatile int32_t t41 = 40986116;

    t41 = ((x1725>x1726)>>(x1727*x1728));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x1781 = INT32_MIN;
	uint16_t x1782 = 712U;
	uint16_t x1783 = 0U;
	uint8_t x1784 = UINT8_MAX;
	static int32_t t42 = -469006;

    t42 = ((x1781>x1782)>>(x1783*x1784));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x1817 = INT32_MAX;
	uint8_t x1818 = UINT8_MAX;
	volatile int16_t x1819 = -1;
	volatile int32_t x1820 = -1;
	int32_t t43 = 7942;

    t43 = ((x1817>x1818)>>(x1819*x1820));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x1869 = 10108U;
	static int32_t x1871 = INT32_MIN;
	int32_t t44 = 1526125;

    t44 = ((x1869>x1870)>>(x1871*x1872));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x1893 = 187672701957LLU;
	uint16_t x1894 = 1U;
	int16_t x1895 = INT16_MIN;
	uint8_t x1896 = 0U;

    t45 = ((x1893>x1894)>>(x1895*x1896));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2005 = 12U;
	int32_t x2006 = -504;
	volatile int64_t x2007 = INT64_MIN;
	volatile uint8_t x2008 = 0U;
	static volatile int32_t t46 = -1;

    t46 = ((x2005>x2006)>>(x2007*x2008));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2009 = INT32_MIN;
	int64_t x2010 = INT64_MIN;
	int16_t x2011 = INT16_MIN;
	uint8_t x2012 = 0U;
	static int32_t t47 = -3;

    t47 = ((x2009>x2010)>>(x2011*x2012));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x2029 = -1;
	static int16_t x2030 = INT16_MIN;
	int8_t x2031 = -1;
	volatile int8_t x2032 = -14;
	static volatile int32_t t48 = 49;

    t48 = ((x2029>x2030)>>(x2031*x2032));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2053 = 493304;
	static int32_t x2054 = -1;
	int16_t x2055 = 0;
	int32_t x2056 = 57560747;
	volatile int32_t t49 = -47851857;

    t49 = ((x2053>x2054)>>(x2055*x2056));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x2073 = UINT16_MAX;
	volatile uint64_t x2074 = 354268561LLU;
	uint64_t x2075 = UINT64_MAX;
	int64_t x2076 = -1LL;
	int32_t t50 = 296049;

    t50 = ((x2073>x2074)>>(x2075*x2076));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2197 = INT32_MIN;
	int8_t x2198 = INT8_MIN;
	uint32_t x2199 = UINT32_MAX;
	int8_t x2200 = 0;
	static volatile int32_t t51 = -1527;

    t51 = ((x2197>x2198)>>(x2199*x2200));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x2301 = 71199982U;
	volatile uint16_t x2302 = 3U;
	uint32_t x2303 = 0U;
	volatile int16_t x2304 = INT16_MAX;

    t52 = ((x2301>x2302)>>(x2303*x2304));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x2405 = UINT32_MAX;
	volatile int32_t x2407 = -1;
	int16_t x2408 = -1;
	volatile int32_t t53 = -31;

    t53 = ((x2405>x2406)>>(x2407*x2408));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x2421 = -1;
	int32_t x2422 = 111278199;
	volatile int64_t x2423 = -1LL;
	int8_t x2424 = -1;
	int32_t t54 = 13001737;

    t54 = ((x2421>x2422)>>(x2423*x2424));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x2469 = INT8_MIN;
	static int8_t x2470 = -2;
	static volatile int32_t t55 = -13166;

    t55 = ((x2469>x2470)>>(x2471*x2472));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x2502 = INT8_MIN;
	int32_t x2503 = 893132584;
	static uint8_t x2504 = 0U;
	int32_t t56 = -3523887;

    t56 = ((x2501>x2502)>>(x2503*x2504));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x2512 = 0;

    t57 = ((x2509>x2510)>>(x2511*x2512));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x2537 = INT32_MAX;
	uint32_t x2538 = 849U;
	static int32_t x2539 = -1;
	int16_t x2540 = -1;
	int32_t t58 = 0;

    t58 = ((x2537>x2538)>>(x2539*x2540));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x2545 = INT16_MAX;
	int16_t x2546 = INT16_MIN;
	static int64_t x2547 = 27LL;
	int32_t t59 = -2788063;

    t59 = ((x2545>x2546)>>(x2547*x2548));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x2597 = 441787158075LL;
	uint8_t x2598 = UINT8_MAX;
	int32_t x2600 = INT32_MAX;
	int32_t t60 = 461387;

    t60 = ((x2597>x2598)>>(x2599*x2600));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x2609 = INT16_MAX;
	static int16_t x2610 = -1;
	int32_t x2611 = 1;
	static int8_t x2612 = 1;
	volatile int32_t t61 = -7897728;

    t61 = ((x2609>x2610)>>(x2611*x2612));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x2617 = INT16_MAX;
	uint64_t x2618 = 4747264773410LLU;
	volatile int64_t x2619 = -1LL;
	int16_t x2620 = -1;
	static volatile int32_t t62 = 199961;

    t62 = ((x2617>x2618)>>(x2619*x2620));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x2629 = 40;
	int8_t x2630 = -1;
	volatile uint32_t x2631 = 0U;
	int64_t x2632 = -5630432768407LL;
	int32_t t63 = -200326519;

    t63 = ((x2629>x2630)>>(x2631*x2632));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2713 = INT16_MAX;
	static volatile int32_t x2714 = INT32_MIN;
	static uint8_t x2715 = 0U;
	int64_t x2716 = INT64_MAX;
	int32_t t64 = -51;

    t64 = ((x2713>x2714)>>(x2715*x2716));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x2921 = -1;
	uint32_t x2923 = 780U;
	int32_t x2924 = INT32_MIN;
	int32_t t65 = -3;

    t65 = ((x2921>x2922)>>(x2923*x2924));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x2977 = -1;
	volatile uint64_t x2979 = UINT64_MAX;
	int8_t x2980 = -1;

    t66 = ((x2977>x2978)>>(x2979*x2980));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x2989 = -209991739;
	int32_t x2990 = -385185;
	static int32_t t67 = -3457832;

    t67 = ((x2989>x2990)>>(x2991*x2992));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x3005 = -7655810;
	volatile int16_t x3006 = INT16_MIN;
	uint64_t x3007 = 0LLU;
	uint64_t x3008 = UINT64_MAX;
	int32_t t68 = -6;

    t68 = ((x3005>x3006)>>(x3007*x3008));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x3065 = INT64_MIN;
	int32_t x3066 = 128058;
	int64_t x3067 = -13039512502LL;

    t69 = ((x3065>x3066)>>(x3067*x3068));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x3081 = -1921461LL;
	static int64_t x3082 = INT64_MIN;
	uint32_t x3083 = UINT32_MAX;
	int32_t t70 = -32213;

    t70 = ((x3081>x3082)>>(x3083*x3084));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x3105 = -13481448938LL;
	uint32_t x3106 = 6U;
	static int16_t x3107 = 0;
	static volatile int32_t x3108 = INT32_MIN;
	volatile int32_t t71 = -356810;

    t71 = ((x3105>x3106)>>(x3107*x3108));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x3118 = -1;
	static int64_t x3119 = -1LL;
	uint64_t x3120 = UINT64_MAX;
	volatile int32_t t72 = 66749622;

    t72 = ((x3117>x3118)>>(x3119*x3120));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x3125 = INT32_MIN;
	static int16_t x3126 = -2271;
	int32_t x3127 = -1;
	volatile int32_t t73 = 1736516;

    t73 = ((x3125>x3126)>>(x3127*x3128));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x3129 = 1;
	int8_t x3130 = INT8_MIN;
	int8_t x3131 = -14;
	static int16_t x3132 = -1;
	volatile int32_t t74 = -1055;

    t74 = ((x3129>x3130)>>(x3131*x3132));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x3145 = INT8_MIN;
	int8_t x3146 = -13;
	volatile int32_t x3147 = INT32_MIN;
	volatile uint32_t x3148 = 150U;
	volatile int32_t t75 = 6256141;

    t75 = ((x3145>x3146)>>(x3147*x3148));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x3169 = 94U;
	uint32_t x3170 = 578320U;
	static volatile int16_t x3171 = 15;
	uint16_t x3172 = 0U;
	int32_t t76 = 858558;

    t76 = ((x3169>x3170)>>(x3171*x3172));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x3225 = -683;
	int16_t x3226 = INT16_MIN;
	volatile int64_t x3227 = INT64_MAX;
	int16_t x3228 = 0;

    t77 = ((x3225>x3226)>>(x3227*x3228));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x3245 = -936266361;
	uint64_t x3246 = 267427408195LLU;
	int16_t x3247 = 3;
	uint32_t x3248 = 1U;
	int32_t t78 = -385997248;

    t78 = ((x3245>x3246)>>(x3247*x3248));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x3277 = 549571679LL;
	volatile uint32_t x3278 = 0U;
	volatile int8_t x3279 = -1;
	int16_t x3280 = -1;
	static volatile int32_t t79 = -24;

    t79 = ((x3277>x3278)>>(x3279*x3280));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x3313 = INT16_MAX;
	volatile int8_t x3314 = INT8_MIN;
	static int8_t x3315 = 1;
	static int8_t x3316 = 0;

    t80 = ((x3313>x3314)>>(x3315*x3316));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x3329 = 5U;
	uint8_t x3330 = 27U;
	static volatile int8_t x3331 = 1;
	int32_t t81 = -11707916;

    t81 = ((x3329>x3330)>>(x3331*x3332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x3401 = INT16_MAX;
	int16_t x3402 = -8;
	volatile uint64_t x3404 = UINT64_MAX;

    t82 = ((x3401>x3402)>>(x3403*x3404));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x3481 = 2;
	volatile int16_t x3482 = INT16_MIN;
	int16_t x3483 = INT16_MAX;
	static uint8_t x3484 = 0U;
	volatile int32_t t83 = -142;

    t83 = ((x3481>x3482)>>(x3483*x3484));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x3498 = -33;
	static volatile uint64_t x3499 = UINT64_MAX;
	int8_t x3500 = -1;
	int32_t t84 = 0;

    t84 = ((x3497>x3498)>>(x3499*x3500));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x3593 = 62U;
	uint8_t x3596 = 0U;
	static volatile int32_t t85 = -1;

    t85 = ((x3593>x3594)>>(x3595*x3596));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x3670 = 6752U;
	int16_t x3671 = 0;
	static volatile int32_t x3672 = -1;
	volatile int32_t t86 = -207858;

    t86 = ((x3669>x3670)>>(x3671*x3672));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x3814 = 61700888121640LLU;
	static volatile int32_t x3816 = -1;
	volatile int32_t t87 = 138814051;

    t87 = ((x3813>x3814)>>(x3815*x3816));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x3841 = -1;
	int32_t x3843 = 0;
	uint64_t x3844 = 33478090464499972LLU;

    t88 = ((x3841>x3842)>>(x3843*x3844));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x3845 = UINT64_MAX;
	int8_t x3846 = -3;
	int8_t x3848 = -1;

    t89 = ((x3845>x3846)>>(x3847*x3848));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x3889 = INT16_MIN;
	int16_t x3890 = INT16_MIN;
	uint32_t x3892 = 6U;
	int32_t t90 = 392;

    t90 = ((x3889>x3890)>>(x3891*x3892));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x3913 = 3U;
	static int64_t x3914 = 3324074931799590033LL;
	uint32_t x3915 = 7332U;

    t91 = ((x3913>x3914)>>(x3915*x3916));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x3961 = -1;
	int64_t x3962 = INT64_MIN;
	uint8_t x3964 = 0U;
	static volatile int32_t t92 = 431343293;

    t92 = ((x3961>x3962)>>(x3963*x3964));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x3997 = UINT64_MAX;
	int64_t x3998 = INT64_MIN;
	static int16_t x3999 = -7;
	static uint64_t x4000 = UINT64_MAX;
	volatile int32_t t93 = 11;

    t93 = ((x3997>x3998)>>(x3999*x4000));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x4005 = UINT32_MAX;
	int64_t x4006 = INT64_MIN;
	uint64_t x4007 = UINT64_MAX;
	int8_t x4008 = -1;
	volatile int32_t t94 = 226;

    t94 = ((x4005>x4006)>>(x4007*x4008));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x4013 = -1;
	int16_t x4014 = INT16_MAX;
	int32_t x4015 = INT32_MIN;
	volatile uint32_t x4016 = 796U;
	volatile int32_t t95 = -15455091;

    t95 = ((x4013>x4014)>>(x4015*x4016));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x4049 = UINT16_MAX;
	int64_t x4050 = INT64_MIN;
	int16_t x4052 = -1;
	int32_t t96 = 402021226;

    t96 = ((x4049>x4050)>>(x4051*x4052));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x4080 = -8;
	static int32_t t97 = -21470867;

    t97 = ((x4077>x4078)>>(x4079*x4080));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x4141 = 1852430121875602724LLU;
	static uint32_t x4143 = 22U;
	static volatile int32_t x4144 = INT32_MIN;
	volatile int32_t t98 = 119463439;

    t98 = ((x4141>x4142)>>(x4143*x4144));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x4145 = UINT32_MAX;
	int64_t x4146 = INT64_MAX;
	static volatile int8_t x4147 = 0;
	volatile int64_t x4148 = 3LL;
	volatile int32_t t99 = 57059;

    t99 = ((x4145>x4146)>>(x4147*x4148));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x4153 = 0U;
	int8_t x4154 = INT8_MIN;
	uint32_t x4155 = UINT32_MAX;
	int8_t x4156 = -5;
	volatile int32_t t100 = 530758;

    t100 = ((x4153>x4154)>>(x4155*x4156));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x4157 = -1;
	uint32_t x4158 = UINT32_MAX;
	volatile int8_t x4159 = -30;
	uint16_t x4160 = 0U;
	volatile int32_t t101 = 623;

    t101 = ((x4157>x4158)>>(x4159*x4160));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x4193 = INT64_MAX;
	static int64_t x4194 = INT64_MIN;
	uint8_t x4195 = 0U;
	int32_t t102 = -127984281;

    t102 = ((x4193>x4194)>>(x4195*x4196));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x4229 = INT16_MIN;
	uint16_t x4231 = 0U;
	volatile int8_t x4232 = INT8_MAX;
	static int32_t t103 = -24;

    t103 = ((x4229>x4230)>>(x4231*x4232));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x4237 = INT16_MIN;
	volatile uint32_t x4238 = 1U;
	int16_t x4240 = INT16_MAX;
	volatile int32_t t104 = 297255042;

    t104 = ((x4237>x4238)>>(x4239*x4240));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x4269 = 89LL;
	static volatile int64_t x4271 = INT64_MAX;
	int8_t x4272 = 0;
	int32_t t105 = -4901;

    t105 = ((x4269>x4270)>>(x4271*x4272));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x4309 = -1LL;
	int8_t x4310 = -1;
	int16_t x4312 = -1;
	int32_t t106 = 11708;

    t106 = ((x4309>x4310)>>(x4311*x4312));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x4329 = -3;
	volatile uint16_t x4331 = 1U;
	uint16_t x4332 = 3U;
	volatile int32_t t107 = -63131611;

    t107 = ((x4329>x4330)>>(x4331*x4332));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x4417 = INT8_MIN;
	static volatile int64_t x4418 = INT64_MAX;
	int8_t x4419 = 0;
	int16_t x4420 = 37;
	int32_t t108 = 3077256;

    t108 = ((x4417>x4418)>>(x4419*x4420));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x4425 = INT16_MIN;
	int64_t x4427 = -1LL;
	uint64_t x4428 = UINT64_MAX;
	volatile int32_t t109 = -22;

    t109 = ((x4425>x4426)>>(x4427*x4428));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x4442 = INT16_MIN;
	static int16_t x4444 = -1;

    t110 = ((x4441>x4442)>>(x4443*x4444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x4449 = -8;
	static int32_t x4450 = INT32_MIN;
	uint32_t x4451 = UINT32_MAX;
	static int16_t x4452 = -1;
	static volatile int32_t t111 = 123;

    t111 = ((x4449>x4450)>>(x4451*x4452));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x4462 = INT8_MIN;
	static int32_t x4463 = -1;
	int32_t x4464 = -1;
	static volatile int32_t t112 = -1;

    t112 = ((x4461>x4462)>>(x4463*x4464));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x4465 = INT32_MIN;
	int32_t x4466 = 19153;
	static volatile uint16_t x4467 = 0U;
	static int32_t t113 = 16;

    t113 = ((x4465>x4466)>>(x4467*x4468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x4493 = INT32_MIN;
	uint32_t x4494 = 39469189U;
	uint8_t x4495 = UINT8_MAX;
	int64_t x4496 = 0LL;
	volatile int32_t t114 = -69838;

    t114 = ((x4493>x4494)>>(x4495*x4496));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x4501 = -1;
	int16_t x4502 = 3;
	static int8_t x4503 = -1;
	int32_t t115 = -163098;

    t115 = ((x4501>x4502)>>(x4503*x4504));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x4534 = 0;
	uint32_t x4535 = 0U;
	static int16_t x4536 = -1;
	static volatile int32_t t116 = 1;

    t116 = ((x4533>x4534)>>(x4535*x4536));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x4553 = INT8_MAX;
	int16_t x4554 = -1;
	int32_t t117 = -281592533;

    t117 = ((x4553>x4554)>>(x4555*x4556));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x4585 = 1U;
	int16_t x4586 = INT16_MIN;
	int32_t t118 = -2;

    t118 = ((x4585>x4586)>>(x4587*x4588));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x4629 = UINT32_MAX;

    t119 = ((x4629>x4630)>>(x4631*x4632));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x4700 = UINT32_MAX;
	static int32_t t120 = 10619;

    t120 = ((x4697>x4698)>>(x4699*x4700));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x4705 = -1;
	uint8_t x4707 = 0U;
	uint32_t x4708 = UINT32_MAX;
	volatile int32_t t121 = -23;

    t121 = ((x4705>x4706)>>(x4707*x4708));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x4709 = 127U;
	volatile int8_t x4710 = INT8_MIN;
	static volatile uint64_t x4711 = 21810171125448LLU;
	int32_t t122 = -49419;

    t122 = ((x4709>x4710)>>(x4711*x4712));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x4790 = INT64_MIN;
	uint32_t x4791 = UINT32_MAX;
	static int8_t x4792 = -22;

    t123 = ((x4789>x4790)>>(x4791*x4792));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x4869 = INT32_MIN;
	static int32_t x4871 = -1;
	int16_t x4872 = -1;
	volatile int32_t t124 = -1140252;

    t124 = ((x4869>x4870)>>(x4871*x4872));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x4877 = -1;
	static int8_t x4878 = INT8_MIN;
	uint32_t x4879 = 65683459U;
	volatile int8_t x4880 = 0;
	int32_t t125 = -161692;

    t125 = ((x4877>x4878)>>(x4879*x4880));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x4925 = 24U;
	int32_t x4927 = 0;
	uint8_t x4928 = 12U;
	volatile int32_t t126 = 1601;

    t126 = ((x4925>x4926)>>(x4927*x4928));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x4989 = INT8_MAX;
	int32_t x4990 = -1;
	int8_t x4992 = 0;
	static volatile int32_t t127 = 937;

    t127 = ((x4989>x4990)>>(x4991*x4992));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x5002 = UINT16_MAX;
	static volatile int64_t x5003 = -1LL;
	uint64_t x5004 = UINT64_MAX;
	volatile int32_t t128 = 0;

    t128 = ((x5001>x5002)>>(x5003*x5004));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x5005 = -14;
	static int8_t x5006 = 14;
	volatile uint16_t x5008 = 0U;
	volatile int32_t t129 = 114673;

    t129 = ((x5005>x5006)>>(x5007*x5008));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x5073 = 4;
	static uint8_t x5074 = UINT8_MAX;
	volatile int32_t t130 = 12883;

    t130 = ((x5073>x5074)>>(x5075*x5076));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x5125 = INT32_MIN;
	static int32_t x5127 = INT32_MIN;
	uint32_t x5128 = 158U;
	int32_t t131 = 131060;

    t131 = ((x5125>x5126)>>(x5127*x5128));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x5178 = INT8_MIN;
	uint16_t x5179 = UINT16_MAX;
	uint8_t x5180 = 0U;
	static int32_t t132 = -15274352;

    t132 = ((x5177>x5178)>>(x5179*x5180));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x5185 = 1U;
	volatile uint8_t x5186 = 15U;
	static uint8_t x5187 = 0U;
	int8_t x5188 = -1;
	static volatile int32_t t133 = -1;

    t133 = ((x5185>x5186)>>(x5187*x5188));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x5189 = 15U;
	static int32_t x5190 = -1;
	int64_t x5191 = -1LL;
	static int8_t x5192 = 0;
	int32_t t134 = 1958;

    t134 = ((x5189>x5190)>>(x5191*x5192));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x5273 = INT64_MIN;
	int8_t x5274 = INT8_MAX;
	int64_t x5275 = -1LL;
	uint64_t x5276 = UINT64_MAX;
	volatile int32_t t135 = 7;

    t135 = ((x5273>x5274)>>(x5275*x5276));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x5317 = INT64_MIN;
	static int8_t x5318 = INT8_MIN;
	uint64_t x5319 = UINT64_MAX;
	static int8_t x5320 = -1;
	static volatile int32_t t136 = 2495;

    t136 = ((x5317>x5318)>>(x5319*x5320));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x5377 = 2LLU;
	volatile int8_t x5378 = 1;
	volatile int8_t x5379 = 0;
	volatile int32_t t137 = -63526;

    t137 = ((x5377>x5378)>>(x5379*x5380));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x5397 = INT32_MAX;
	int64_t x5399 = INT64_MAX;
	volatile int32_t t138 = -315888;

    t138 = ((x5397>x5398)>>(x5399*x5400));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x5445 = 4182U;
	uint8_t x5446 = UINT8_MAX;
	int16_t x5447 = 0;
	static uint64_t x5448 = UINT64_MAX;
	volatile int32_t t139 = -19070431;

    t139 = ((x5445>x5446)>>(x5447*x5448));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x5469 = 951;
	int32_t x5470 = INT32_MIN;
	uint16_t x5472 = 15U;
	int32_t t140 = -219844544;

    t140 = ((x5469>x5470)>>(x5471*x5472));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x5497 = INT64_MIN;
	int32_t x5499 = -1;

    t141 = ((x5497>x5498)>>(x5499*x5500));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x5521 = -74855LL;
	int64_t x5524 = -1LL;
	volatile int32_t t142 = -70158986;

    t142 = ((x5521>x5522)>>(x5523*x5524));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x5545 = 1U;
	uint16_t x5546 = 2566U;
	static uint8_t x5547 = 0U;
	int8_t x5548 = INT8_MIN;

    t143 = ((x5545>x5546)>>(x5547*x5548));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x5562 = -251;
	static volatile int32_t x5563 = -1762;
	static int8_t x5564 = 0;
	static volatile int32_t t144 = -22640788;

    t144 = ((x5561>x5562)>>(x5563*x5564));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x5689 = -1;
	static uint16_t x5690 = UINT16_MAX;
	int64_t x5691 = -1LL;
	static uint64_t x5692 = UINT64_MAX;
	int32_t t145 = 1;

    t145 = ((x5689>x5690)>>(x5691*x5692));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x5757 = INT16_MAX;
	static uint8_t x5759 = 0U;
	static volatile int32_t t146 = 927959120;

    t146 = ((x5757>x5758)>>(x5759*x5760));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x5765 = 1043919930LLU;
	uint16_t x5766 = 1708U;
	static volatile uint64_t x5767 = 9166485648868611LLU;
	static volatile uint16_t x5768 = 0U;
	volatile int32_t t147 = -78;

    t147 = ((x5765>x5766)>>(x5767*x5768));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x5925 = INT64_MAX;
	volatile int64_t x5926 = INT64_MIN;
	volatile int64_t x5927 = 67022442122189652LL;
	int8_t x5928 = 0;
	volatile int32_t t148 = -3179;

    t148 = ((x5925>x5926)>>(x5927*x5928));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x6049 = 2253125281212LLU;
	uint16_t x6051 = 1279U;
	static int32_t t149 = -2396148;

    t149 = ((x6049>x6050)>>(x6051*x6052));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x6061 = INT64_MAX;
	int16_t x6062 = INT16_MIN;
	int8_t x6063 = 10;
	uint8_t x6064 = 0U;
	int32_t t150 = -5687118;

    t150 = ((x6061>x6062)>>(x6063*x6064));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x6121 = INT64_MAX;
	static int8_t x6123 = 0;
	int64_t x6124 = INT64_MIN;
	volatile int32_t t151 = 27;

    t151 = ((x6121>x6122)>>(x6123*x6124));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x6129 = 540721421366LL;
	static int32_t x6130 = -1;
	volatile int32_t x6131 = -1;
	int16_t x6132 = -1;
	static int32_t t152 = -3042043;

    t152 = ((x6129>x6130)>>(x6131*x6132));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x6141 = 3914552U;
	static int64_t x6142 = INT64_MIN;
	volatile uint8_t x6143 = UINT8_MAX;
	uint8_t x6144 = 0U;
	int32_t t153 = -447063;

    t153 = ((x6141>x6142)>>(x6143*x6144));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x6169 = INT32_MIN;
	int64_t x6171 = INT64_MIN;
	uint64_t x6172 = 225554292098030LLU;

    t154 = ((x6169>x6170)>>(x6171*x6172));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x6281 = 31U;
	int32_t x6282 = -1;
	volatile uint32_t x6283 = UINT32_MAX;
	int16_t x6284 = 0;
	int32_t t155 = 0;

    t155 = ((x6281>x6282)>>(x6283*x6284));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x6314 = INT64_MIN;
	int32_t x6315 = INT32_MIN;
	int8_t x6316 = 0;
	int32_t t156 = -505456;

    t156 = ((x6313>x6314)>>(x6315*x6316));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x6321 = INT8_MIN;
	static volatile uint16_t x6322 = UINT16_MAX;
	static int16_t x6323 = -1;
	static int8_t x6324 = -1;
	static volatile int32_t t157 = 18903;

    t157 = ((x6321>x6322)>>(x6323*x6324));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x6350 = INT64_MAX;
	int16_t x6351 = 0;
	volatile uint64_t x6352 = 1484002320LLU;
	int32_t t158 = 28;

    t158 = ((x6349>x6350)>>(x6351*x6352));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x6353 = -1;
	int32_t x6354 = INT32_MAX;
	int8_t x6355 = 31;
	uint16_t x6356 = 0U;
	volatile int32_t t159 = 78;

    t159 = ((x6353>x6354)>>(x6355*x6356));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x6417 = INT32_MAX;
	static volatile int32_t x6418 = 420606;
	int8_t x6419 = -3;
	volatile uint64_t x6420 = UINT64_MAX;
	int32_t t160 = 11997;

    t160 = ((x6417>x6418)>>(x6419*x6420));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x6477 = INT8_MIN;
	int64_t x6478 = INT64_MAX;
	int32_t x6479 = 0;
	int32_t x6480 = 14713;
	volatile int32_t t161 = 439;

    t161 = ((x6477>x6478)>>(x6479*x6480));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x6498 = 30666U;
	volatile int8_t x6499 = -13;
	static uint32_t x6500 = UINT32_MAX;
	int32_t t162 = 0;

    t162 = ((x6497>x6498)>>(x6499*x6500));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x6521 = INT64_MAX;
	static volatile int64_t x6522 = INT64_MIN;
	int8_t x6523 = -1;
	int32_t t163 = 2;

    t163 = ((x6521>x6522)>>(x6523*x6524));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x6557 = INT32_MIN;
	volatile int32_t x6558 = INT32_MIN;
	uint32_t x6559 = UINT32_MAX;
	volatile int8_t x6560 = 0;

    t164 = ((x6557>x6558)>>(x6559*x6560));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x6629 = 3U;
	int64_t x6630 = INT64_MIN;
	int64_t x6631 = -30860LL;
	int8_t x6632 = 0;
	int32_t t165 = -3621426;

    t165 = ((x6629>x6630)>>(x6631*x6632));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x6653 = INT8_MIN;
	int64_t x6655 = -1LL;
	volatile int8_t x6656 = -1;
	volatile int32_t t166 = -9196028;

    t166 = ((x6653>x6654)>>(x6655*x6656));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x6693 = 4384U;
	int16_t x6694 = INT16_MIN;
	int64_t x6695 = -1LL;
	int16_t x6696 = -1;
	int32_t t167 = 210483129;

    t167 = ((x6693>x6694)>>(x6695*x6696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x6701 = UINT8_MAX;
	int64_t x6702 = -1LL;
	int32_t x6703 = INT32_MIN;
	uint32_t x6704 = 153214724U;
	volatile int32_t t168 = -1;

    t168 = ((x6701>x6702)>>(x6703*x6704));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x6714 = -1;
	int64_t x6715 = -1LL;
	int32_t x6716 = -1;
	static int32_t t169 = -32877825;

    t169 = ((x6713>x6714)>>(x6715*x6716));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x6725 = 1027029653LLU;
	int32_t t170 = -40007630;

    t170 = ((x6725>x6726)>>(x6727*x6728));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x6733 = 11606428U;
	uint8_t x6734 = UINT8_MAX;
	uint16_t x6735 = 0U;

    t171 = ((x6733>x6734)>>(x6735*x6736));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x6745 = -24LL;
	int16_t x6746 = INT16_MIN;
	int32_t x6747 = -1;
	int16_t x6748 = -1;

    t172 = ((x6745>x6746)>>(x6747*x6748));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x6754 = -1;
	uint8_t x6755 = 2U;
	static volatile int32_t t173 = 66;

    t173 = ((x6753>x6754)>>(x6755*x6756));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x6866 = INT64_MAX;
	uint32_t x6868 = 54079060U;
	volatile int32_t t174 = -74889;

    t174 = ((x6865>x6866)>>(x6867*x6868));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x6921 = UINT16_MAX;
	uint64_t x6923 = UINT64_MAX;
	static uint64_t x6924 = UINT64_MAX;
	static int32_t t175 = -1228897;

    t175 = ((x6921>x6922)>>(x6923*x6924));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x6925 = INT32_MAX;
	int64_t x6926 = -1863004734LL;
	static uint16_t x6927 = 13U;
	static int32_t x6928 = 0;

    t176 = ((x6925>x6926)>>(x6927*x6928));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x6945 = UINT16_MAX;
	uint8_t x6947 = 0U;
	int16_t x6948 = INT16_MIN;
	int32_t t177 = -12166;

    t177 = ((x6945>x6946)>>(x6947*x6948));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x7041 = 21U;
	int8_t x7042 = 1;
	uint64_t x7043 = 0LLU;
	volatile int64_t x7044 = 956382LL;
	volatile int32_t t178 = -8261612;

    t178 = ((x7041>x7042)>>(x7043*x7044));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x7069 = INT64_MIN;
	static int32_t x7071 = -1;
	int16_t x7072 = -1;
	volatile int32_t t179 = -406209;

    t179 = ((x7069>x7070)>>(x7071*x7072));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x7162 = INT8_MIN;
	int16_t x7164 = 0;
	static int32_t t180 = -570;

    t180 = ((x7161>x7162)>>(x7163*x7164));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x7217 = -130;
	int32_t x7220 = INT32_MIN;
	static volatile int32_t t181 = -6898612;

    t181 = ((x7217>x7218)>>(x7219*x7220));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x7265 = UINT8_MAX;
	int64_t x7267 = 0LL;
	static int32_t t182 = -671353430;

    t182 = ((x7265>x7266)>>(x7267*x7268));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x7273 = 1U;
	int16_t x7274 = INT16_MAX;
	static int8_t x7275 = -3;
	int32_t x7276 = -1;
	volatile int32_t t183 = -2837634;

    t183 = ((x7273>x7274)>>(x7275*x7276));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x7353 = 17240LLU;
	int16_t x7354 = INT16_MAX;
	int8_t x7355 = -1;
	static int8_t x7356 = -27;
	int32_t t184 = -10346126;

    t184 = ((x7353>x7354)>>(x7355*x7356));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x7377 = 575924LL;
	static uint16_t x7378 = UINT16_MAX;
	int8_t x7379 = -1;
	volatile int16_t x7380 = -7;
	volatile int32_t t185 = 34592;

    t185 = ((x7377>x7378)>>(x7379*x7380));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x7416 = -1LL;
	static int32_t t186 = -389172427;

    t186 = ((x7413>x7414)>>(x7415*x7416));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x7537 = 0U;
	uint8_t x7538 = 1U;
	volatile uint64_t x7539 = UINT64_MAX;
	int16_t x7540 = 0;

    t187 = ((x7537>x7538)>>(x7539*x7540));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x7657 = INT32_MIN;
	static uint16_t x7658 = 152U;
	uint8_t x7659 = 7U;
	volatile uint8_t x7660 = 0U;

    t188 = ((x7657>x7658)>>(x7659*x7660));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x7677 = INT64_MAX;
	int8_t x7678 = INT8_MIN;
	static int8_t x7679 = -1;
	int16_t x7680 = -1;
	volatile int32_t t189 = 16094;

    t189 = ((x7677>x7678)>>(x7679*x7680));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x7681 = INT32_MIN;
	volatile int16_t x7682 = -12065;
	int8_t x7683 = INT8_MIN;
	int8_t x7684 = 0;
	int32_t t190 = 12;

    t190 = ((x7681>x7682)>>(x7683*x7684));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x7693 = UINT64_MAX;
	volatile int32_t x7694 = INT32_MAX;
	int8_t x7695 = 0;
	static int16_t x7696 = -1;
	volatile int32_t t191 = 3;

    t191 = ((x7693>x7694)>>(x7695*x7696));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x7713 = INT32_MIN;
	static int8_t x7714 = -7;
	int64_t x7715 = 0LL;
	volatile int32_t t192 = 7362205;

    t192 = ((x7713>x7714)>>(x7715*x7716));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x7721 = UINT16_MAX;
	uint8_t x7723 = 67U;
	uint16_t x7724 = 0U;
	int32_t t193 = 222;

    t193 = ((x7721>x7722)>>(x7723*x7724));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x7761 = 130666U;
	static int64_t x7762 = INT64_MIN;
	volatile uint32_t x7763 = UINT32_MAX;
	int32_t t194 = 5067;

    t194 = ((x7761>x7762)>>(x7763*x7764));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x7790 = UINT16_MAX;
	int16_t x7791 = -1;
	int64_t x7792 = -1LL;

    t195 = ((x7789>x7790)>>(x7791*x7792));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x7833 = -247721923958137173LL;
	static volatile int64_t x7834 = 0LL;
	uint64_t x7835 = 18LLU;
	int32_t x7836 = 1;
	volatile int32_t t196 = -2054630;

    t196 = ((x7833>x7834)>>(x7835*x7836));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x7845 = INT64_MIN;
	static int16_t x7846 = 5;
	int16_t x7847 = -1;
	int64_t x7848 = -1LL;
	volatile int32_t t197 = -798762;

    t197 = ((x7845>x7846)>>(x7847*x7848));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x7885 = UINT32_MAX;
	uint64_t x7886 = UINT64_MAX;
	int8_t x7887 = 0;
	int64_t x7888 = INT64_MIN;
	volatile int32_t t198 = 9234982;

    t198 = ((x7885>x7886)>>(x7887*x7888));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x7901 = -1;
	volatile int16_t x7903 = 2;
	uint8_t x7904 = 0U;
	volatile int32_t t199 = 24062632;

    t199 = ((x7901>x7902)>>(x7903*x7904));

    if (t199 != 1) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

