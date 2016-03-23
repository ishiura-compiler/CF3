
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

uint8_t x13 = 124U;
static uint8_t x24 = 0U;
int32_t t1 = -29680;
static int16_t x158 = INT16_MAX;
uint16_t x160 = 0U;
int16_t x163 = INT16_MIN;
volatile uint32_t x164 = 0U;
int64_t x242 = -1LL;
int64_t x358 = INT64_MIN;
int32_t x359 = 50021987;
uint64_t t8 = 1413428295LLU;
int32_t x457 = INT32_MIN;
uint16_t x458 = 187U;
static volatile uint32_t t10 = 21U;
int32_t x499 = -6;
volatile uint64_t t11 = 4LLU;
int64_t x513 = 676484LL;
int64_t x515 = INT64_MIN;
int16_t x523 = -1;
int16_t x530 = INT16_MAX;
static volatile uint32_t t14 = 171U;
int64_t x623 = INT64_MAX;
int8_t x680 = 20;
volatile int64_t t17 = 131687725512171567LL;
static volatile uint64_t t19 = 18931981093749LLU;
volatile uint64_t x731 = 68492755249LLU;
int16_t x818 = INT16_MIN;
static volatile uint32_t t25 = 14654U;
int32_t x982 = -1;
volatile uint32_t x983 = 232U;
uint64_t x984 = 7LLU;
static uint64_t t29 = 23LLU;
uint16_t x1115 = UINT16_MAX;
int32_t x1450 = -1;
static uint8_t x1452 = 13U;
int64_t t36 = 21413363LL;
static int8_t x1519 = 0;
static int32_t x1579 = INT32_MIN;
int64_t x1613 = -219LL;
static int8_t x1615 = INT8_MIN;
volatile uint32_t x1720 = 13U;
volatile uint32_t x1809 = 499319U;
volatile uint16_t x1820 = 1U;
volatile uint32_t t49 = 89077263U;
static uint16_t x1862 = 3573U;
uint32_t x1943 = 0U;
int32_t x1962 = INT32_MAX;
volatile int64_t t55 = -128106543296626LL;
int8_t x1973 = 14;
static int16_t x2010 = INT16_MIN;
int32_t x2031 = INT32_MAX;
uint16_t x2091 = 11U;
int64_t x2103 = -1LL;
int8_t x2140 = 1;
uint32_t x2146 = UINT32_MAX;
int16_t x2207 = 1;
uint8_t x2208 = 8U;
int32_t x2248 = 22;
int8_t x2278 = INT8_MIN;
uint16_t x2371 = 5881U;
static uint64_t x2372 = 3LLU;
int64_t t73 = -4LL;
int8_t x2400 = 2;
static uint64_t x2453 = 86281973453274LLU;
static int32_t x2507 = 145903;
uint16_t x2518 = UINT16_MAX;
int64_t t79 = 93611LL;
int64_t x2526 = 845409405698195LL;
uint64_t t81 = 347500621LLU;
int32_t x2701 = INT32_MIN;
volatile int64_t x2716 = 12LL;
static uint64_t t86 = 1542695072255LLU;
volatile uint8_t x2781 = 2U;
volatile int16_t x2783 = -1;
static int8_t x2834 = INT8_MAX;
int64_t t91 = -4200150060LL;
uint32_t t93 = 6U;
static uint64_t x3019 = UINT64_MAX;
int32_t x3031 = -1;
static int8_t x3145 = -1;
int32_t x3274 = INT32_MIN;
uint16_t x3275 = UINT16_MAX;
int64_t x3366 = INT64_MIN;
uint8_t x3368 = 0U;
int64_t t99 = 59LL;
static uint64_t x3413 = 11830231360016LLU;
int64_t x3473 = -1LL;
int64_t x3511 = 3280271583LL;
uint32_t x3601 = UINT32_MAX;
volatile uint32_t x3608 = 0U;
volatile int64_t x3682 = INT64_MAX;
int64_t x3765 = INT64_MIN;
static uint64_t x3767 = 472386923834756067LLU;
uint32_t x3799 = 209087566U;
int32_t x3865 = INT32_MAX;
static uint64_t x3877 = 5099446626135012186LLU;
uint32_t x3953 = 5552U;
static uint16_t x3955 = 21625U;
static int32_t x4121 = INT32_MIN;
uint64_t x4122 = 4170494LLU;
volatile int32_t t124 = -7152535;
uint64_t t127 = 5108101482842LLU;
volatile uint32_t x4282 = 2U;
int64_t t128 = 2741202820LL;
uint64_t x4334 = 413868LLU;
uint64_t x4335 = 21LLU;
uint32_t x4374 = 598U;
volatile uint32_t x4375 = UINT32_MAX;
uint32_t x4409 = 307500U;
volatile uint32_t x4411 = 60305305U;
volatile uint32_t t132 = 997U;
volatile int32_t t135 = -1;
uint64_t x4671 = 453LLU;
volatile uint16_t x4707 = UINT16_MAX;
int16_t x4720 = 44;
uint16_t x4731 = UINT16_MAX;
int64_t t141 = 4641511LL;
int16_t x4799 = INT16_MIN;
volatile int16_t x4887 = INT16_MAX;
static uint32_t x4888 = 27U;
int8_t x4925 = -19;
uint32_t x4947 = 46001332U;
static uint32_t t145 = 862660161U;
volatile int32_t t146 = -489584;
int64_t x4999 = INT64_MIN;
volatile int16_t x5009 = -1;
int16_t x5010 = -1;
volatile int64_t x5013 = 969989901507219929LL;
volatile int64_t t149 = -1393452LL;
static int16_t x5030 = -1;
int32_t t150 = 456487141;
uint16_t x5043 = UINT16_MAX;
int64_t x5089 = -75958617047951LL;
volatile int64_t t152 = -12299659533731LL;
volatile int8_t x5114 = 2;
static int64_t t154 = 1458116746832904LL;
int32_t x5141 = 8374160;
uint64_t x5142 = 29LLU;
static volatile int32_t t157 = 870;
int8_t x5209 = INT8_MIN;
static int16_t x5210 = INT16_MIN;
uint8_t x5212 = 8U;
static uint64_t x5257 = UINT64_MAX;
int64_t x5261 = INT64_MIN;
uint64_t x5262 = UINT64_MAX;
int8_t x5263 = 57;
static int16_t x5264 = 7;
static uint64_t x5394 = 136756031571LLU;
volatile uint64_t t163 = 0LLU;
int8_t x5474 = INT8_MIN;
int32_t x5476 = 0;
int16_t x5498 = INT16_MIN;
volatile int8_t x5499 = 1;
int32_t x5566 = INT32_MIN;
int8_t x5568 = 3;
int64_t x5597 = -1LL;
int64_t x5689 = INT64_MIN;
uint32_t x5690 = 206896U;
static int16_t x5730 = INT16_MIN;
uint8_t x5745 = 29U;
static uint32_t x5747 = 55259U;
int16_t x5767 = 1;
uint16_t x5821 = 1U;
static uint16_t x5856 = 0U;
static int16_t x5865 = -1;
static uint8_t x5868 = 14U;
uint32_t x5896 = 13U;
volatile int32_t t180 = 0;
int8_t x5998 = INT8_MAX;
int32_t t185 = -967854749;
int64_t x6177 = INT64_MIN;
static uint8_t x6208 = 6U;
static uint64_t t190 = 6858577024365142LLU;
int16_t x6218 = 1;
static int16_t x6253 = INT16_MAX;
int32_t x6255 = INT32_MAX;
int32_t x6310 = INT32_MAX;
static uint16_t x6417 = 30577U;
int16_t x6419 = -1;


void f0(void) {
    	uint32_t x14 = 283491723U;
	uint64_t x15 = UINT64_MAX;
	volatile uint16_t x16 = 7U;
	static volatile uint64_t t0 = 22LLU;

    t0 = (((x13/x14)&x15)<<x16);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x21 = -1;
	volatile uint16_t x22 = UINT16_MAX;
	volatile int8_t x23 = INT8_MAX;

    t1 = (((x21/x22)&x23)<<x24);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x157 = 35U;
	int64_t x159 = INT64_MIN;
	int64_t t2 = 2170LL;

    t2 = (((x157/x158)&x159)<<x160);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x161 = -2098LL;
	int32_t x162 = -1;
	int64_t t3 = -2LL;

    t3 = (((x161/x162)&x163)<<x164);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x241 = 1U;
	int8_t x243 = INT8_MAX;
	static uint16_t x244 = 29U;
	static volatile int64_t t4 = 805906LL;

    t4 = (((x241/x242)&x243)<<x244);

    if (t4 != 68182605824LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MAX;
	static int64_t x299 = -2464246489LL;
	static int32_t x300 = 5;
	volatile int64_t t5 = 3576681215454735LL;

    t5 = (((x297/x298)&x299)<<x300);

    if (t5 != 32LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x301 = INT8_MAX;
	volatile int16_t x302 = INT16_MAX;
	static uint16_t x303 = UINT16_MAX;
	uint8_t x304 = 2U;
	int32_t t6 = 54;

    t6 = (((x301/x302)&x303)<<x304);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x305 = INT32_MIN;
	uint32_t x306 = UINT32_MAX;
	int16_t x307 = -1;
	static volatile uint8_t x308 = 10U;
	static uint32_t t7 = 1009U;

    t7 = (((x305/x306)&x307)<<x308);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x357 = UINT64_MAX;
	uint8_t x360 = 11U;

    t8 = (((x357/x358)&x359)<<x360);

    if (t8 != 2048LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x449 = 124U;
	int64_t x450 = INT64_MIN;
	uint8_t x451 = 115U;
	int16_t x452 = 0;
	int64_t t9 = 2683160783943LL;

    t9 = (((x449/x450)&x451)<<x452);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x459 = UINT32_MAX;
	volatile uint8_t x460 = 11U;

    t10 = (((x457/x458)&x459)<<x460);

    if (t10 != 2250840064U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x497 = 1156;
	uint64_t x498 = UINT64_MAX;
	int8_t x500 = 1;

    t11 = (((x497/x498)&x499)<<x500);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x514 = 6;
	uint8_t x516 = 60U;
	int64_t t12 = -26137842061399LL;

    t12 = (((x513/x514)&x515)<<x516);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x521 = 243895548971LLU;
	static uint8_t x522 = UINT8_MAX;
	static int16_t x524 = 0;
	uint64_t t13 = 13LLU;

    t13 = (((x521/x522)&x523)<<x524);

    if (t13 != 956453133LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x529 = 311U;
	int8_t x531 = INT8_MIN;
	int32_t x532 = 5;

    t14 = (((x529/x530)&x531)<<x532);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x621 = 4U;
	static int8_t x622 = INT8_MAX;
	static uint32_t x624 = 0U;
	int64_t t15 = -291LL;

    t15 = (((x621/x622)&x623)<<x624);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x661 = 1184U;
	static int8_t x662 = 1;
	int32_t x663 = 46299324;
	int32_t x664 = 1;
	int32_t t16 = 90;

    t16 = (((x661/x662)&x663)<<x664);

    if (t16 != 320) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x677 = 1U;
	int8_t x678 = INT8_MIN;
	int64_t x679 = -1LL;

    t17 = (((x677/x678)&x679)<<x680);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x681 = -46;
	int8_t x682 = 9;
	static uint16_t x683 = 9U;
	volatile uint16_t x684 = 18U;
	int32_t t18 = -13632;

    t18 = (((x681/x682)&x683)<<x684);

    if (t18 != 2359296) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x701 = -141578332307120175LL;
	volatile uint64_t x702 = UINT64_MAX;
	int64_t x703 = -1LL;
	uint8_t x704 = 10U;

    t19 = (((x701/x702)&x703)<<x704);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x729 = 1;
	static uint64_t x730 = 363LLU;
	uint8_t x732 = 34U;
	uint64_t t20 = 7809679615722LLU;

    t20 = (((x729/x730)&x731)<<x732);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x745 = 1U;
	uint16_t x746 = 16U;
	int32_t x747 = INT32_MIN;
	uint8_t x748 = 7U;
	static volatile int32_t t21 = -4329147;

    t21 = (((x745/x746)&x747)<<x748);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x817 = INT64_MIN;
	uint64_t x819 = 1118263921877603659LLU;
	int16_t x820 = 1;
	uint64_t t22 = 102LLU;

    t22 = (((x817/x818)&x819)<<x820);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x849 = INT32_MIN;
	int64_t x850 = INT64_MAX;
	uint64_t x851 = UINT64_MAX;
	int32_t x852 = 0;
	uint64_t t23 = 515802550266042745LLU;

    t23 = (((x849/x850)&x851)<<x852);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x857 = -16322702577139463LL;
	static volatile int8_t x858 = -1;
	uint8_t x859 = 17U;
	uint16_t x860 = 41U;
	volatile int64_t t24 = 304LL;

    t24 = (((x857/x858)&x859)<<x860);

    if (t24 != 2199023255552LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x937 = INT32_MIN;
	int16_t x938 = INT16_MAX;
	uint32_t x939 = 46U;
	int16_t x940 = 1;

    t25 = (((x937/x938)&x939)<<x940);

    if (t25 != 92U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x957 = UINT64_MAX;
	static int64_t x958 = INT64_MAX;
	volatile int32_t x959 = INT32_MAX;
	uint32_t x960 = 44U;
	volatile uint64_t t26 = 5513042545711426LLU;

    t26 = (((x957/x958)&x959)<<x960);

    if (t26 != 35184372088832LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x981 = -18;
	static uint32_t t27 = 16U;

    t27 = (((x981/x982)&x983)<<x984);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1037 = INT32_MAX;
	int32_t x1038 = INT32_MAX;
	volatile int32_t x1039 = INT32_MAX;
	uint16_t x1040 = 0U;
	int32_t t28 = -634375475;

    t28 = (((x1037/x1038)&x1039)<<x1040);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x1045 = 1;
	int16_t x1046 = INT16_MIN;
	uint64_t x1047 = 1329LLU;
	volatile uint8_t x1048 = 3U;

    t29 = (((x1045/x1046)&x1047)<<x1048);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1113 = INT16_MIN;
	uint64_t x1114 = 5LLU;
	int8_t x1116 = 0;
	uint64_t t30 = 18581569130367LLU;

    t30 = (((x1113/x1114)&x1115)<<x1116);

    if (t30 != 6553LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1153 = -1LL;
	uint64_t x1154 = UINT64_MAX;
	uint64_t x1155 = UINT64_MAX;
	int8_t x1156 = 3;
	static uint64_t t31 = 55042250856LLU;

    t31 = (((x1153/x1154)&x1155)<<x1156);

    if (t31 != 8LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1165 = 227129512862350372LLU;
	volatile uint16_t x1166 = 455U;
	static volatile int64_t x1167 = -1LL;
	uint8_t x1168 = 1U;
	uint64_t t32 = 6779LLU;

    t32 = (((x1165/x1166)&x1167)<<x1168);

    if (t32 != 998371485109232LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1285 = 0;
	int32_t x1286 = INT32_MIN;
	volatile int64_t x1287 = -1LL;
	uint8_t x1288 = 2U;
	int64_t t33 = -61279543LL;

    t33 = (((x1285/x1286)&x1287)<<x1288);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x1301 = UINT32_MAX;
	int8_t x1302 = 12;
	volatile int64_t x1303 = -708LL;
	static int16_t x1304 = 0;
	volatile int64_t t34 = -27LL;

    t34 = (((x1301/x1302)&x1303)<<x1304);

    if (t34 != 357913876LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x1397 = INT64_MIN;
	int32_t x1398 = INT32_MIN;
	int8_t x1399 = -1;
	int16_t x1400 = 7;
	int64_t t35 = -2867LL;

    t35 = (((x1397/x1398)&x1399)<<x1400);

    if (t35 != 549755813888LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1449 = INT16_MIN;
	int64_t x1451 = -1LL;

    t36 = (((x1449/x1450)&x1451)<<x1452);

    if (t36 != 268435456LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1477 = -3;
	int32_t x1478 = INT32_MIN;
	int64_t x1479 = -1LL;
	int16_t x1480 = 0;
	int64_t t37 = 1LL;

    t37 = (((x1477/x1478)&x1479)<<x1480);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1501 = 939042LLU;
	volatile uint64_t x1502 = 74LLU;
	uint8_t x1503 = 0U;
	static volatile uint8_t x1504 = 3U;
	volatile uint64_t t38 = 1262LLU;

    t38 = (((x1501/x1502)&x1503)<<x1504);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x1509 = -1;
	int16_t x1510 = 30;
	static int8_t x1511 = -14;
	uint32_t x1512 = 2U;
	volatile int32_t t39 = -1329291;

    t39 = (((x1509/x1510)&x1511)<<x1512);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x1517 = 1U;
	volatile uint64_t x1518 = 135344123732LLU;
	static uint32_t x1520 = 31U;
	uint64_t t40 = 54278129008LLU;

    t40 = (((x1517/x1518)&x1519)<<x1520);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x1537 = -65302LL;
	int64_t x1538 = -1LL;
	int8_t x1539 = INT8_MIN;
	uint8_t x1540 = 31U;
	volatile int64_t t41 = 12399801219LL;

    t41 = (((x1537/x1538)&x1539)<<x1540);

    if (t41 != 140187732541440LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x1577 = INT16_MIN;
	int64_t x1578 = INT64_MAX;
	uint8_t x1580 = 0U;
	static volatile int64_t t42 = -383728213906803173LL;

    t42 = (((x1577/x1578)&x1579)<<x1580);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x1614 = UINT32_MAX;
	uint8_t x1616 = 5U;
	volatile int64_t t43 = 41945096534326LL;

    t43 = (((x1613/x1614)&x1615)<<x1616);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x1661 = UINT16_MAX;
	static uint16_t x1662 = 5U;
	int8_t x1663 = 2;
	uint8_t x1664 = 0U;
	int32_t t44 = 22;

    t44 = (((x1661/x1662)&x1663)<<x1664);

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x1717 = 34U;
	int16_t x1718 = -1;
	uint64_t x1719 = 898385602LLU;
	volatile uint64_t t45 = 490LLU;

    t45 = (((x1717/x1718)&x1719)<<x1720);

    if (t45 != 7359574851584LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1737 = INT8_MAX;
	volatile int64_t x1738 = INT64_MIN;
	static uint64_t x1739 = 8838544LLU;
	int32_t x1740 = 26;
	volatile uint64_t t46 = 32515771LLU;

    t46 = (((x1737/x1738)&x1739)<<x1740);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1741 = INT8_MAX;
	static volatile uint64_t x1742 = UINT64_MAX;
	volatile int32_t x1743 = INT32_MAX;
	static int8_t x1744 = 0;
	uint64_t t47 = 774802519181LLU;

    t47 = (((x1741/x1742)&x1743)<<x1744);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x1810 = INT8_MAX;
	static int64_t x1811 = INT64_MIN;
	int32_t x1812 = 1;
	int64_t t48 = -29444720633327974LL;

    t48 = (((x1809/x1810)&x1811)<<x1812);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x1817 = 6;
	static uint32_t x1818 = 1U;
	uint16_t x1819 = 0U;

    t49 = (((x1817/x1818)&x1819)<<x1820);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1837 = 2U;
	volatile int16_t x1838 = INT16_MAX;
	int16_t x1839 = -495;
	int32_t x1840 = 7;
	static int32_t t50 = 478;

    t50 = (((x1837/x1838)&x1839)<<x1840);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x1861 = INT16_MAX;
	int16_t x1863 = -181;
	uint32_t x1864 = 2U;
	volatile int32_t t51 = 8534070;

    t51 = (((x1861/x1862)&x1863)<<x1864);

    if (t51 != 36) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1893 = -1LL;
	int16_t x1894 = INT16_MAX;
	int8_t x1895 = INT8_MIN;
	uint8_t x1896 = 4U;
	int64_t t52 = -137304926LL;

    t52 = (((x1893/x1894)&x1895)<<x1896);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1897 = -1;
	int8_t x1898 = -1;
	static uint64_t x1899 = 2LLU;
	uint8_t x1900 = 10U;
	uint64_t t53 = 4566LLU;

    t53 = (((x1897/x1898)&x1899)<<x1900);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1941 = INT8_MAX;
	static uint64_t x1942 = 21008301828LLU;
	static int8_t x1944 = 0;
	uint64_t t54 = 877060188LLU;

    t54 = (((x1941/x1942)&x1943)<<x1944);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x1961 = -1924;
	static int64_t x1963 = INT64_MIN;
	static volatile int8_t x1964 = 10;

    t55 = (((x1961/x1962)&x1963)<<x1964);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x1969 = -25;
	int32_t x1970 = INT32_MIN;
	int16_t x1971 = INT16_MIN;
	static int32_t x1972 = 4;
	volatile int32_t t56 = 1;

    t56 = (((x1969/x1970)&x1971)<<x1972);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x1974 = 372U;
	volatile int8_t x1975 = 7;
	static uint16_t x1976 = 1U;
	volatile int32_t t57 = 190597378;

    t57 = (((x1973/x1974)&x1975)<<x1976);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x2001 = 4U;
	int64_t x2002 = INT64_MAX;
	int32_t x2003 = INT32_MIN;
	uint8_t x2004 = 31U;
	volatile int64_t t58 = -394862413849LL;

    t58 = (((x2001/x2002)&x2003)<<x2004);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x2009 = 3U;
	uint16_t x2011 = 640U;
	int8_t x2012 = 1;
	volatile int32_t t59 = 1;

    t59 = (((x2009/x2010)&x2011)<<x2012);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x2029 = UINT32_MAX;
	uint16_t x2030 = UINT16_MAX;
	static uint16_t x2032 = 19U;
	volatile uint32_t t60 = 3770U;

    t60 = (((x2029/x2030)&x2031)<<x2032);

    if (t60 != 524288U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x2089 = INT16_MIN;
	static uint8_t x2090 = 3U;
	static volatile uint64_t x2092 = 0LLU;
	static int32_t t61 = -276213780;

    t61 = (((x2089/x2090)&x2091)<<x2092);

    if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x2101 = UINT32_MAX;
	int64_t x2102 = 12330844807LL;
	uint16_t x2104 = 4U;
	volatile int64_t t62 = -104137734412LL;

    t62 = (((x2101/x2102)&x2103)<<x2104);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x2137 = 902190444LLU;
	int16_t x2138 = -982;
	int64_t x2139 = INT64_MAX;
	uint64_t t63 = 469064518073064415LLU;

    t63 = (((x2137/x2138)&x2139)<<x2140);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x2145 = 5U;
	static int64_t x2147 = -1LL;
	int8_t x2148 = 1;
	volatile int64_t t64 = 253247857092LL;

    t64 = (((x2145/x2146)&x2147)<<x2148);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x2165 = INT8_MAX;
	int16_t x2166 = -1;
	uint64_t x2167 = 10696515845356809LLU;
	uint8_t x2168 = 1U;
	uint64_t t65 = 11LLU;

    t65 = (((x2165/x2166)&x2167)<<x2168);

    if (t65 != 21393031690713602LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x2181 = INT32_MIN;
	int8_t x2182 = INT8_MIN;
	int32_t x2183 = -1;
	uint8_t x2184 = 2U;
	volatile int32_t t66 = -116047;

    t66 = (((x2181/x2182)&x2183)<<x2184);

    if (t66 != 67108864) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x2205 = INT32_MIN;
	uint16_t x2206 = 11U;
	int32_t t67 = 1;

    t67 = (((x2205/x2206)&x2207)<<x2208);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x2245 = -1;
	int32_t x2246 = -1;
	int32_t x2247 = INT32_MAX;
	volatile int32_t t68 = 25639;

    t68 = (((x2245/x2246)&x2247)<<x2248);

    if (t68 != 4194304) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x2261 = -31;
	int16_t x2262 = INT16_MIN;
	int16_t x2263 = -1;
	uint8_t x2264 = 0U;
	volatile int32_t t69 = -1766;

    t69 = (((x2261/x2262)&x2263)<<x2264);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2277 = -1;
	int32_t x2279 = INT32_MAX;
	volatile uint8_t x2280 = 8U;
	int32_t t70 = -5880;

    t70 = (((x2277/x2278)&x2279)<<x2280);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x2357 = 49;
	static volatile uint64_t x2358 = 4168833955960592769LLU;
	uint32_t x2359 = 2064352U;
	uint16_t x2360 = 6U;
	volatile uint64_t t71 = 212299220211836LLU;

    t71 = (((x2357/x2358)&x2359)<<x2360);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x2369 = UINT16_MAX;
	int32_t x2370 = 109;
	static int32_t t72 = -10;

    t72 = (((x2369/x2370)&x2371)<<x2372);

    if (t72 != 4808) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x2377 = INT64_MAX;
	volatile int8_t x2378 = -1;
	volatile int8_t x2379 = 0;
	uint16_t x2380 = 4U;

    t73 = (((x2377/x2378)&x2379)<<x2380);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x2385 = UINT16_MAX;
	static int16_t x2386 = -1;
	uint64_t x2387 = UINT64_MAX;
	volatile uint8_t x2388 = 20U;
	uint64_t t74 = 1452LLU;

    t74 = (((x2385/x2386)&x2387)<<x2388);

    if (t74 != 18446744004991123456LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x2393 = 7LLU;
	uint16_t x2394 = 1U;
	volatile uint32_t x2395 = UINT32_MAX;
	uint8_t x2396 = 7U;
	volatile uint64_t t75 = 46250029369943643LLU;

    t75 = (((x2393/x2394)&x2395)<<x2396);

    if (t75 != 896LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x2397 = 15;
	uint16_t x2398 = 4803U;
	int32_t x2399 = 240;
	volatile int32_t t76 = 676;

    t76 = (((x2397/x2398)&x2399)<<x2400);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x2454 = UINT64_MAX;
	int32_t x2455 = INT32_MIN;
	int8_t x2456 = 0;
	uint64_t t77 = 5648870219470696723LLU;

    t77 = (((x2453/x2454)&x2455)<<x2456);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x2505 = -1;
	int32_t x2506 = INT32_MIN;
	volatile uint16_t x2508 = 5U;
	volatile int32_t t78 = 12902130;

    t78 = (((x2505/x2506)&x2507)<<x2508);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x2517 = 2U;
	int64_t x2519 = -375871LL;
	static volatile int16_t x2520 = 62;

    t79 = (((x2517/x2518)&x2519)<<x2520);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x2525 = INT16_MIN;
	static int32_t x2527 = INT32_MIN;
	static int8_t x2528 = 0;
	int64_t t80 = -9442373LL;

    t80 = (((x2525/x2526)&x2527)<<x2528);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x2557 = 4U;
	uint64_t x2558 = 207228762396654LLU;
	volatile int64_t x2559 = INT64_MIN;
	volatile uint8_t x2560 = 31U;

    t81 = (((x2557/x2558)&x2559)<<x2560);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x2601 = 3U;
	uint32_t x2602 = 125U;
	volatile int8_t x2603 = -1;
	uint8_t x2604 = 24U;
	uint32_t t82 = 2543U;

    t82 = (((x2601/x2602)&x2603)<<x2604);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2702 = INT16_MIN;
	int16_t x2703 = -274;
	volatile uint8_t x2704 = 6U;
	volatile int32_t t83 = 1;

    t83 = (((x2701/x2702)&x2703)<<x2704);

    if (t83 != 4194304) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x2713 = -985;
	int8_t x2714 = -1;
	volatile int64_t x2715 = 2LL;
	static volatile int64_t t84 = 2865LL;

    t84 = (((x2713/x2714)&x2715)<<x2716);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x2737 = INT8_MIN;
	int8_t x2738 = INT8_MIN;
	volatile int64_t x2739 = INT64_MIN;
	int8_t x2740 = 21;
	volatile int64_t t85 = 161880980735LL;

    t85 = (((x2737/x2738)&x2739)<<x2740);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x2753 = UINT64_MAX;
	uint32_t x2754 = 1U;
	int32_t x2755 = INT32_MAX;
	volatile int8_t x2756 = 2;

    t86 = (((x2753/x2754)&x2755)<<x2756);

    if (t86 != 8589934588LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x2761 = 2496U;
	static uint64_t x2762 = UINT64_MAX;
	static int32_t x2763 = INT32_MIN;
	uint16_t x2764 = 1U;
	volatile uint64_t t87 = 10004112534079LLU;

    t87 = (((x2761/x2762)&x2763)<<x2764);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x2782 = 1317;
	uint16_t x2784 = 4U;
	int32_t t88 = 15;

    t88 = (((x2781/x2782)&x2783)<<x2784);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x2797 = 5005U;
	int64_t x2798 = INT64_MIN;
	static int32_t x2799 = -683209523;
	uint16_t x2800 = 1U;
	static volatile int64_t t89 = -725941055807LL;

    t89 = (((x2797/x2798)&x2799)<<x2800);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x2825 = UINT32_MAX;
	int32_t x2826 = INT32_MIN;
	int32_t x2827 = 26;
	uint8_t x2828 = 13U;
	uint32_t t90 = 1U;

    t90 = (((x2825/x2826)&x2827)<<x2828);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x2833 = INT64_MAX;
	uint32_t x2835 = 66202310U;
	uint8_t x2836 = 7U;

    t91 = (((x2833/x2834)&x2835)<<x2836);

    if (t91 != 268451840LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x2849 = UINT8_MAX;
	int64_t x2850 = -279968224280400816LL;
	int32_t x2851 = 1814;
	int32_t x2852 = 1;
	int64_t t92 = -5943LL;

    t92 = (((x2849/x2850)&x2851)<<x2852);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x2853 = INT32_MIN;
	int8_t x2854 = INT8_MIN;
	static volatile uint32_t x2855 = 1U;
	uint8_t x2856 = 9U;

    t93 = (((x2853/x2854)&x2855)<<x2856);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x2921 = INT32_MIN;
	static uint8_t x2922 = 25U;
	int32_t x2923 = 1274;
	static int16_t x2924 = 0;
	static int32_t t94 = 1386812;

    t94 = (((x2921/x2922)&x2923)<<x2924);

    if (t94 != 1194) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x3017 = INT64_MIN;
	volatile uint16_t x3018 = UINT16_MAX;
	volatile int8_t x3020 = 21;
	uint64_t t95 = 0LLU;

    t95 = (((x3017/x3018)&x3019)<<x3020);

    if (t95 != 18442240405362704384LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x3029 = INT8_MAX;
	int16_t x3030 = INT16_MIN;
	int8_t x3032 = 3;
	int32_t t96 = 22;

    t96 = (((x3029/x3030)&x3031)<<x3032);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x3146 = INT8_MAX;
	volatile int16_t x3147 = -1;
	static int32_t x3148 = 3;
	volatile int32_t t97 = 152;

    t97 = (((x3145/x3146)&x3147)<<x3148);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x3273 = 1;
	volatile uint16_t x3276 = 0U;
	int32_t t98 = -21349142;

    t98 = (((x3273/x3274)&x3275)<<x3276);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x3365 = 105;
	volatile int16_t x3367 = -1;

    t99 = (((x3365/x3366)&x3367)<<x3368);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x3414 = 31254435LL;
	static int32_t x3415 = 4;
	volatile uint8_t x3416 = 7U;
	volatile uint64_t t100 = 28680264489024147LLU;

    t100 = (((x3413/x3414)&x3415)<<x3416);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x3474 = 244U;
	volatile int32_t x3475 = INT32_MIN;
	int64_t x3476 = 1LL;
	int64_t t101 = 36366LL;

    t101 = (((x3473/x3474)&x3475)<<x3476);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x3477 = INT32_MAX;
	int32_t x3478 = INT32_MAX;
	int8_t x3479 = -27;
	volatile uint8_t x3480 = 5U;
	int32_t t102 = -131529530;

    t102 = (((x3477/x3478)&x3479)<<x3480);

    if (t102 != 32) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x3497 = INT64_MIN;
	int64_t x3498 = -45120633084740282LL;
	int16_t x3499 = INT16_MIN;
	uint16_t x3500 = 62U;
	volatile int64_t t103 = -43421913453609LL;

    t103 = (((x3497/x3498)&x3499)<<x3500);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x3509 = 66974U;
	int32_t x3510 = -1;
	uint32_t x3512 = 1U;
	volatile int64_t t104 = 6216LL;

    t104 = (((x3509/x3510)&x3511)<<x3512);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3602 = 20862207668156LL;
	uint32_t x3603 = UINT32_MAX;
	uint8_t x3604 = 24U;
	int64_t t105 = -7LL;

    t105 = (((x3601/x3602)&x3603)<<x3604);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x3605 = INT32_MIN;
	int32_t x3606 = -129636937;
	int8_t x3607 = -1;
	volatile int32_t t106 = -5166;

    t106 = (((x3605/x3606)&x3607)<<x3608);

    if (t106 != 16) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x3649 = INT16_MIN;
	int64_t x3650 = INT64_MIN;
	int8_t x3651 = -1;
	volatile uint8_t x3652 = 4U;
	static volatile int64_t t107 = 234098580503LL;

    t107 = (((x3649/x3650)&x3651)<<x3652);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x3681 = UINT64_MAX;
	uint8_t x3683 = 118U;
	int32_t x3684 = 28;
	static uint64_t t108 = 1059146724LLU;

    t108 = (((x3681/x3682)&x3683)<<x3684);

    if (t108 != 536870912LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x3697 = UINT16_MAX;
	int32_t x3698 = INT32_MAX;
	uint16_t x3699 = 147U;
	static int32_t x3700 = 8;
	volatile int32_t t109 = 1;

    t109 = (((x3697/x3698)&x3699)<<x3700);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x3717 = 157528900LLU;
	volatile int64_t x3718 = INT64_MIN;
	int64_t x3719 = INT64_MIN;
	uint16_t x3720 = 56U;
	volatile uint64_t t110 = 7LLU;

    t110 = (((x3717/x3718)&x3719)<<x3720);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x3766 = 14998U;
	volatile int8_t x3768 = 32;
	static uint64_t t111 = 1LLU;

    t111 = (((x3765/x3766)&x3767)<<x3768);

    if (t111 != 360714181269258240LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x3797 = 6;
	int16_t x3798 = -29;
	volatile uint16_t x3800 = 14U;
	static uint32_t t112 = 1756778761U;

    t112 = (((x3797/x3798)&x3799)<<x3800);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x3829 = -1;
	int32_t x3830 = INT32_MIN;
	static int32_t x3831 = -1;
	static int8_t x3832 = 0;
	volatile int32_t t113 = 41;

    t113 = (((x3829/x3830)&x3831)<<x3832);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x3866 = UINT8_MAX;
	int32_t x3867 = INT32_MIN;
	uint8_t x3868 = 10U;
	static int32_t t114 = -24;

    t114 = (((x3865/x3866)&x3867)<<x3868);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x3878 = -38;
	int64_t x3879 = INT64_MIN;
	volatile uint32_t x3880 = 1U;
	uint64_t t115 = 223053826645LLU;

    t115 = (((x3877/x3878)&x3879)<<x3880);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x3937 = UINT16_MAX;
	volatile int16_t x3938 = INT16_MIN;
	int32_t x3939 = 281;
	uint64_t x3940 = 7LLU;
	static int32_t t116 = -286;

    t116 = (((x3937/x3938)&x3939)<<x3940);

    if (t116 != 35968) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x3954 = INT64_MAX;
	uint32_t x3956 = 6U;
	int64_t t117 = -4853773763810988LL;

    t117 = (((x3953/x3954)&x3955)<<x3956);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x3961 = 4;
	int8_t x3962 = 11;
	uint64_t x3963 = UINT64_MAX;
	uint8_t x3964 = 1U;
	uint64_t t118 = 903LLU;

    t118 = (((x3961/x3962)&x3963)<<x3964);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x4065 = INT64_MAX;
	static volatile int32_t x4066 = INT32_MAX;
	int32_t x4067 = INT32_MIN;
	int8_t x4068 = 10;
	int64_t t119 = -64100716468167368LL;

    t119 = (((x4065/x4066)&x4067)<<x4068);

    if (t119 != 4398046511104LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x4073 = INT8_MIN;
	uint16_t x4074 = UINT16_MAX;
	volatile int16_t x4075 = -1;
	static uint8_t x4076 = 19U;
	int32_t t120 = -1868723;

    t120 = (((x4073/x4074)&x4075)<<x4076);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x4109 = -54;
	static int8_t x4110 = -2;
	int32_t x4111 = 732;
	uint8_t x4112 = 10U;
	volatile int32_t t121 = -13522;

    t121 = (((x4109/x4110)&x4111)<<x4112);

    if (t121 != 24576) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x4113 = 68U;
	int8_t x4114 = 23;
	int64_t x4115 = -8647012244197LL;
	uint8_t x4116 = 5U;
	int64_t t122 = 7LL;

    t122 = (((x4113/x4114)&x4115)<<x4116);

    if (t122 != 64LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x4123 = INT8_MIN;
	volatile uint32_t x4124 = 25U;
	static volatile uint64_t t123 = 5751864531646058LLU;

    t123 = (((x4121/x4122)&x4123)<<x4124);

    if (t123 != 842522667641733120LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x4149 = 2221;
	int16_t x4150 = 3;
	static int8_t x4151 = 20;
	volatile uint16_t x4152 = 1U;

    t124 = (((x4149/x4150)&x4151)<<x4152);

    if (t124 != 8) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x4193 = -9265621557LL;
	static int16_t x4194 = INT16_MIN;
	int64_t x4195 = -469611115568LL;
	uint32_t x4196 = 9U;
	volatile int64_t t125 = -29907416LL;

    t125 = (((x4193/x4194)&x4195)<<x4196);

    if (t125 != 134283264LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x4241 = INT64_MAX;
	int64_t x4242 = INT64_MIN;
	uint64_t x4243 = 7044017674347LLU;
	int8_t x4244 = 15;
	static uint64_t t126 = 13768481LLU;

    t126 = (((x4241/x4242)&x4243)<<x4244);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x4261 = INT32_MIN;
	volatile uint64_t x4262 = UINT64_MAX;
	int8_t x4263 = INT8_MIN;
	volatile uint16_t x4264 = 1U;

    t127 = (((x4261/x4262)&x4263)<<x4264);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x4281 = INT16_MIN;
	int64_t x4283 = INT64_MAX;
	int16_t x4284 = 1;

    t128 = (((x4281/x4282)&x4283)<<x4284);

    if (t128 != 4294934528LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x4333 = -1;
	int8_t x4336 = 2;
	uint64_t t129 = 184323LLU;

    t129 = (((x4333/x4334)&x4335)<<x4336);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x4373 = 0U;
	uint16_t x4376 = 24U;
	uint32_t t130 = 62U;

    t130 = (((x4373/x4374)&x4375)<<x4376);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x4405 = -56;
	volatile uint16_t x4406 = 82U;
	int32_t x4407 = -1;
	uint8_t x4408 = 4U;
	volatile int32_t t131 = 126996413;

    t131 = (((x4405/x4406)&x4407)<<x4408);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x4410 = 9U;
	int8_t x4412 = 10;

    t132 = (((x4409/x4410)&x4411)<<x4412);

    if (t132 != 1327104U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x4485 = INT8_MIN;
	uint32_t x4486 = 41123546U;
	volatile int32_t x4487 = INT32_MIN;
	int64_t x4488 = 1LL;
	uint32_t t133 = 6U;

    t133 = (((x4485/x4486)&x4487)<<x4488);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x4489 = 6U;
	static uint8_t x4490 = 9U;
	int64_t x4491 = 140826819LL;
	static volatile uint16_t x4492 = 39U;
	static volatile int64_t t134 = -172LL;

    t134 = (((x4489/x4490)&x4491)<<x4492);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x4521 = INT16_MIN;
	volatile int8_t x4522 = -1;
	volatile uint8_t x4523 = 6U;
	uint32_t x4524 = 1U;

    t135 = (((x4521/x4522)&x4523)<<x4524);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x4617 = 158U;
	int8_t x4618 = INT8_MIN;
	uint32_t x4619 = UINT32_MAX;
	static uint8_t x4620 = 17U;
	uint32_t t136 = 25595U;

    t136 = (((x4617/x4618)&x4619)<<x4620);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x4669 = -1;
	int32_t x4670 = INT32_MIN;
	static int8_t x4672 = 0;
	volatile uint64_t t137 = 2403156865501348326LLU;

    t137 = (((x4669/x4670)&x4671)<<x4672);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x4677 = INT16_MIN;
	volatile int16_t x4678 = INT16_MIN;
	int32_t x4679 = INT32_MIN;
	uint8_t x4680 = 2U;
	volatile int32_t t138 = -117;

    t138 = (((x4677/x4678)&x4679)<<x4680);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x4705 = INT8_MIN;
	static uint64_t x4706 = 24150LLU;
	static int32_t x4708 = 1;
	volatile uint64_t t139 = 55716LLU;

    t139 = (((x4705/x4706)&x4707)<<x4708);

    if (t139 != 97454LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x4717 = UINT32_MAX;
	volatile int64_t x4718 = -1LL;
	uint64_t x4719 = UINT64_MAX;
	volatile uint64_t t140 = 7928168LLU;

    t140 = (((x4717/x4718)&x4719)<<x4720);

    if (t140 != 17592186044416LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x4729 = -32741LL;
	int64_t x4730 = -1LL;
	volatile int8_t x4732 = 41;

    t141 = (((x4729/x4730)&x4731)<<x4732);

    if (t141 != 71998220410028032LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x4797 = 492311414;
	uint16_t x4798 = 12U;
	int64_t x4800 = 1LL;
	int32_t t142 = 28879;

    t142 = (((x4797/x4798)&x4799)<<x4800);

    if (t142 != 82051072) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x4885 = -1;
	int8_t x4886 = 50;
	static int32_t t143 = -27;

    t143 = (((x4885/x4886)&x4887)<<x4888);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x4926 = INT16_MIN;
	int64_t x4927 = INT64_MAX;
	uint8_t x4928 = 3U;
	int64_t t144 = -58276321956411456LL;

    t144 = (((x4925/x4926)&x4927)<<x4928);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x4945 = 53095693U;
	int32_t x4946 = 80410137;
	static uint16_t x4948 = 4U;

    t145 = (((x4945/x4946)&x4947)<<x4948);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x4965 = 11U;
	volatile int8_t x4966 = 3;
	int32_t x4967 = INT32_MIN;
	volatile int64_t x4968 = 3LL;

    t146 = (((x4965/x4966)&x4967)<<x4968);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x4997 = 0U;
	volatile uint64_t x4998 = UINT64_MAX;
	uint8_t x5000 = 56U;
	uint64_t t147 = 504531753LLU;

    t147 = (((x4997/x4998)&x4999)<<x5000);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x5011 = INT32_MIN;
	uint8_t x5012 = 2U;
	volatile int32_t t148 = 2;

    t148 = (((x5009/x5010)&x5011)<<x5012);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x5014 = 6LL;
	static int16_t x5015 = INT16_MIN;
	int8_t x5016 = 0;

    t149 = (((x5013/x5014)&x5015)<<x5016);

    if (t149 != 161664983584505856LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x5029 = INT8_MIN;
	uint16_t x5031 = 59U;
	uint8_t x5032 = 0U;

    t150 = (((x5029/x5030)&x5031)<<x5032);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x5041 = 360333225LLU;
	uint32_t x5042 = 226U;
	uint16_t x5044 = 38U;
	uint64_t t151 = 17LLU;

    t151 = (((x5041/x5042)&x5043)<<x5044);

    if (t151 != 5918121336504320LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x5090 = INT32_MIN;
	static int32_t x5091 = INT32_MAX;
	volatile int8_t x5092 = 29;

    t152 = (((x5089/x5090)&x5091)<<x5092);

    if (t152 != 18989124157440LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x5101 = 2U;
	static int32_t x5102 = 161149007;
	volatile int8_t x5103 = 3;
	uint8_t x5104 = 0U;
	int32_t t153 = 1;

    t153 = (((x5101/x5102)&x5103)<<x5104);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x5113 = 62U;
	int64_t x5115 = INT64_MIN;
	static int16_t x5116 = 4;

    t154 = (((x5113/x5114)&x5115)<<x5116);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x5143 = 753446089U;
	int16_t x5144 = 13;
	uint64_t t155 = 1190134412830278LLU;

    t155 = (((x5141/x5142)&x5143)<<x5144);

    if (t155 != 77135872LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x5181 = 26;
	int32_t x5182 = INT32_MIN;
	int8_t x5183 = INT8_MAX;
	int32_t x5184 = 0;
	int32_t t156 = -9715;

    t156 = (((x5181/x5182)&x5183)<<x5184);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x5197 = -1;
	int8_t x5198 = -3;
	static uint8_t x5199 = 20U;
	uint32_t x5200 = 1U;

    t157 = (((x5197/x5198)&x5199)<<x5200);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x5211 = 23;
	int32_t t158 = 522;

    t158 = (((x5209/x5210)&x5211)<<x5212);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x5217 = -1LL;
	static uint16_t x5218 = UINT16_MAX;
	int16_t x5219 = -1;
	uint8_t x5220 = 49U;
	int64_t t159 = -38399744232054LL;

    t159 = (((x5217/x5218)&x5219)<<x5220);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x5258 = INT16_MAX;
	int32_t x5259 = INT32_MIN;
	int32_t x5260 = 0;
	uint64_t t160 = 8586198991001LLU;

    t160 = (((x5257/x5258)&x5259)<<x5260);

    if (t160 != 562967133290496LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t t161 = 7183176213347LLU;

    t161 = (((x5261/x5262)&x5263)<<x5264);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x5285 = UINT8_MAX;
	uint64_t x5286 = 64796LLU;
	int64_t x5287 = 29775388990448LL;
	volatile uint8_t x5288 = 0U;
	uint64_t t162 = 2LLU;

    t162 = (((x5285/x5286)&x5287)<<x5288);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x5393 = 305881509303014LLU;
	int64_t x5395 = 40015763243LL;
	static uint8_t x5396 = 1U;

    t163 = (((x5393/x5394)&x5395)<<x5396);

    if (t163 != 80LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x5405 = INT8_MIN;
	static uint32_t x5406 = UINT32_MAX;
	volatile uint16_t x5407 = UINT16_MAX;
	uint16_t x5408 = 29U;
	volatile uint32_t t164 = 116537U;

    t164 = (((x5405/x5406)&x5407)<<x5408);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x5425 = 2U;
	int16_t x5426 = 24;
	uint64_t x5427 = UINT64_MAX;
	uint16_t x5428 = 2U;
	uint64_t t165 = 3255900889034225333LLU;

    t165 = (((x5425/x5426)&x5427)<<x5428);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x5473 = 6;
	volatile int64_t x5475 = -1LL;
	volatile int64_t t166 = 282154146188143265LL;

    t166 = (((x5473/x5474)&x5475)<<x5476);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x5497 = 1464LLU;
	uint8_t x5500 = 36U;
	volatile uint64_t t167 = 1331534748713LLU;

    t167 = (((x5497/x5498)&x5499)<<x5500);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x5565 = -1;
	int32_t x5567 = 134;
	volatile int32_t t168 = 34;

    t168 = (((x5565/x5566)&x5567)<<x5568);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x5598 = -716664509747LL;
	volatile uint64_t x5599 = UINT64_MAX;
	uint16_t x5600 = 0U;
	uint64_t t169 = 124LLU;

    t169 = (((x5597/x5598)&x5599)<<x5600);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x5691 = 0;
	int8_t x5692 = 55;
	int64_t t170 = 7390LL;

    t170 = (((x5689/x5690)&x5691)<<x5692);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x5713 = 957148766829LLU;
	int16_t x5714 = INT16_MIN;
	int64_t x5715 = 115760483756735LL;
	int16_t x5716 = 17;
	uint64_t t171 = 17861439056216061LLU;

    t171 = (((x5713/x5714)&x5715)<<x5716);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x5729 = 246770843LL;
	volatile int8_t x5731 = INT8_MAX;
	int8_t x5732 = 13;
	int64_t t172 = 396LL;

    t172 = (((x5729/x5730)&x5731)<<x5732);

    if (t172 != 180224LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x5733 = 21U;
	volatile uint16_t x5734 = UINT16_MAX;
	int64_t x5735 = INT64_MIN;
	static uint8_t x5736 = 3U;
	static volatile int64_t t173 = 47858346LL;

    t173 = (((x5733/x5734)&x5735)<<x5736);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x5746 = 3200LLU;
	uint16_t x5748 = 13U;
	volatile uint64_t t174 = 32688297210240576LLU;

    t174 = (((x5745/x5746)&x5747)<<x5748);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x5765 = INT64_MAX;
	uint32_t x5766 = 6U;
	static uint8_t x5768 = 0U;
	volatile int64_t t175 = 2244345866687LL;

    t175 = (((x5765/x5766)&x5767)<<x5768);

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x5822 = 82LLU;
	volatile uint64_t x5823 = 7276129702231LLU;
	volatile int16_t x5824 = 1;
	uint64_t t176 = 8332182835369637505LLU;

    t176 = (((x5821/x5822)&x5823)<<x5824);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x5849 = 0U;
	static int64_t x5850 = INT64_MIN;
	static int64_t x5851 = 1300503914361860LL;
	static volatile uint8_t x5852 = 0U;
	int64_t t177 = -912618744236775LL;

    t177 = (((x5849/x5850)&x5851)<<x5852);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x5853 = UINT16_MAX;
	static int64_t x5854 = INT64_MAX;
	uint8_t x5855 = 9U;
	volatile int64_t t178 = -101578342777226971LL;

    t178 = (((x5853/x5854)&x5855)<<x5856);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x5866 = INT8_MAX;
	int16_t x5867 = INT16_MIN;
	int32_t t179 = -19;

    t179 = (((x5865/x5866)&x5867)<<x5868);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x5893 = -1;
	uint8_t x5894 = 18U;
	volatile uint8_t x5895 = UINT8_MAX;

    t180 = (((x5893/x5894)&x5895)<<x5896);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x5921 = 6171;
	int64_t x5922 = -1LL;
	uint8_t x5923 = 24U;
	uint8_t x5924 = 13U;
	static volatile int64_t t181 = 25308LL;

    t181 = (((x5921/x5922)&x5923)<<x5924);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x5997 = 181326025695LL;
	volatile uint8_t x5999 = UINT8_MAX;
	static uint8_t x6000 = 11U;
	static int64_t t182 = 81694098LL;

    t182 = (((x5997/x5998)&x5999)<<x6000);

    if (t182 != 26624LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x6049 = 970U;
	int32_t x6050 = INT32_MAX;
	static volatile int8_t x6051 = INT8_MIN;
	uint8_t x6052 = 2U;
	static volatile uint32_t t183 = 4372U;

    t183 = (((x6049/x6050)&x6051)<<x6052);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x6081 = -1;
	uint8_t x6082 = 89U;
	uint8_t x6083 = 2U;
	int8_t x6084 = 16;
	int32_t t184 = -828;

    t184 = (((x6081/x6082)&x6083)<<x6084);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x6093 = -1;
	int32_t x6094 = -670594;
	static uint8_t x6095 = 2U;
	uint8_t x6096 = 3U;

    t185 = (((x6093/x6094)&x6095)<<x6096);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x6113 = -47;
	static int16_t x6114 = INT16_MIN;
	int32_t x6115 = -2140;
	volatile int16_t x6116 = 2;
	volatile int32_t t186 = 31193;

    t186 = (((x6113/x6114)&x6115)<<x6116);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x6165 = INT16_MIN;
	volatile uint8_t x6166 = 13U;
	uint64_t x6167 = UINT64_MAX;
	int16_t x6168 = 1;
	uint64_t t187 = 107329757032165406LLU;

    t187 = (((x6165/x6166)&x6167)<<x6168);

    if (t187 != 18446744073709546576LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x6178 = INT64_MIN;
	int32_t x6179 = INT32_MAX;
	volatile uint16_t x6180 = 1U;
	int64_t t188 = -152LL;

    t188 = (((x6177/x6178)&x6179)<<x6180);

    if (t188 != 2LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x6201 = 0;
	int16_t x6202 = 15;
	static volatile int32_t x6203 = INT32_MIN;
	int8_t x6204 = 4;
	volatile int32_t t189 = -1359;

    t189 = (((x6201/x6202)&x6203)<<x6204);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x6205 = INT64_MAX;
	int64_t x6206 = -2005370LL;
	static uint64_t x6207 = 6965413032773694LLU;

    t190 = (((x6205/x6206)&x6207)<<x6208);

    if (t190 != 445504794301303680LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x6217 = -1LL;
	static int64_t x6219 = 0LL;
	uint16_t x6220 = 60U;
	int64_t t191 = -267724LL;

    t191 = (((x6217/x6218)&x6219)<<x6220);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x6254 = 325329989031LLU;
	volatile uint64_t x6256 = 17LLU;
	volatile uint64_t t192 = 2114LLU;

    t192 = (((x6253/x6254)&x6255)<<x6256);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x6309 = 1291U;
	int32_t x6311 = -1;
	int8_t x6312 = 0;
	int32_t t193 = -49411568;

    t193 = (((x6309/x6310)&x6311)<<x6312);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x6341 = -19;
	static int8_t x6342 = INT8_MIN;
	static uint64_t x6343 = UINT64_MAX;
	int8_t x6344 = 10;
	volatile uint64_t t194 = 4148699415LLU;

    t194 = (((x6341/x6342)&x6343)<<x6344);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x6361 = -3LL;
	int32_t x6362 = INT32_MIN;
	int64_t x6363 = 4151900962927LL;
	int8_t x6364 = 0;
	volatile int64_t t195 = -25827806537261LL;

    t195 = (((x6361/x6362)&x6363)<<x6364);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x6377 = INT16_MAX;
	int32_t x6378 = 2087218;
	static int16_t x6379 = -1;
	static int8_t x6380 = 0;
	volatile int32_t t196 = -6;

    t196 = (((x6377/x6378)&x6379)<<x6380);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x6405 = INT64_MIN;
	int16_t x6406 = -5902;
	static int8_t x6407 = INT8_MIN;
	static volatile int8_t x6408 = 3;
	volatile int64_t t197 = -66LL;

    t197 = (((x6405/x6406)&x6407)<<x6408);

    if (t197 != 12502029192619008LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x6418 = 136LL;
	uint32_t x6420 = 23U;
	int64_t t198 = -73438415975LL;

    t198 = (((x6417/x6418)&x6419)<<x6420);

    if (t198 != 1879048192LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x6493 = UINT16_MAX;
	static int32_t x6494 = -1;
	volatile int8_t x6495 = INT8_MAX;
	uint64_t x6496 = 1LLU;
	volatile int32_t t199 = 857824;

    t199 = (((x6493/x6494)&x6495)<<x6496);

    if (t199 != 2) { NG(); } else { ; }
	
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

