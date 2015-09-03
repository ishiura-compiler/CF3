#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t2 = 4035274548723LL;
int8_t x173 = -8;
volatile int8_t x285 = INT8_MIN;
int8_t x422 = INT8_MIN;
uint16_t x424 = 114U;
int32_t x453 = 37;
volatile int32_t x851 = -1;
static int64_t x1126 = INT64_MIN;
volatile uint32_t x1128 = UINT32_MAX;
uint32_t x1224 = 0U;
volatile uint32_t t16 = 227338138U;
volatile int16_t x1227 = 25;
volatile uint32_t x1485 = 2277U;
static uint64_t x1486 = UINT64_MAX;
uint8_t x1512 = UINT8_MAX;
int32_t t22 = 190;
int32_t x1553 = INT32_MIN;
uint64_t x1554 = 223071696LLU;
volatile int32_t t24 = -1730;
int8_t x1682 = INT8_MIN;
static int64_t t25 = 661886LL;
int8_t x1781 = INT8_MAX;
int64_t x1782 = 5343LL;
int16_t x1993 = INT16_MIN;
uint64_t x1994 = 17LLU;
int32_t t29 = -236;
int16_t x2564 = 17;
volatile int64_t t30 = 89351420024829896LL;
static uint16_t x2623 = 1U;
uint32_t x2626 = 101725842U;
int16_t x2713 = -1;
int64_t x2813 = INT64_MIN;
static int64_t t34 = -11756LL;
volatile int32_t x2837 = INT32_MAX;
int32_t x2840 = -3;
static int64_t x2954 = INT64_MAX;
volatile int64_t t36 = 18972016032708LL;
static volatile uint32_t t38 = 828139U;
uint8_t x3139 = 2U;
uint64_t x3306 = 3LLU;
int32_t x3465 = -88;
static int32_t t41 = 102;
static int64_t t43 = -1787895038314914143LL;
static int64_t x3636 = 0LL;
volatile int64_t t44 = -15LL;
static int32_t x3884 = -1;
volatile int16_t x3962 = INT16_MIN;
int32_t x4017 = INT32_MIN;
static volatile int64_t t51 = 2204LL;
static uint64_t x4098 = 1648063LLU;
uint32_t x4100 = UINT32_MAX;
uint32_t x4238 = 73U;
uint32_t t53 = 1844585855U;
volatile uint8_t x4322 = 4U;
int16_t x4323 = INT16_MIN;
int32_t x4364 = 11;
uint64_t x4638 = UINT64_MAX;
int16_t x4664 = -1;
int64_t x4758 = INT64_MAX;
int64_t t61 = 113023131269LL;
volatile uint32_t t62 = 4689U;
int8_t x4805 = -1;
int32_t x4806 = -354;
int64_t x4863 = -1LL;
uint64_t x4875 = UINT64_MAX;
int64_t t66 = 128608194314566309LL;
int8_t x4982 = -60;
volatile int64_t x5018 = -1653795LL;
static int32_t x5120 = INT32_MIN;
int64_t x5198 = INT64_MAX;
int16_t x5201 = -594;
int16_t x5202 = INT16_MAX;
uint8_t x5377 = UINT8_MAX;
static int32_t x5518 = -15673545;
int8_t x5519 = -1;
uint32_t x5807 = UINT32_MAX;
int16_t x5847 = -1;
uint32_t x5883 = 5U;
volatile int64_t t81 = 20LL;
int16_t x5966 = 7;
uint64_t x5967 = UINT64_MAX;
int32_t x6091 = INT32_MIN;
int32_t x6092 = INT32_MIN;
volatile int32_t t85 = 591266881;
int8_t x6261 = 0;
int64_t t89 = 1004LL;
int16_t x6434 = 1496;
int64_t t93 = -39LL;
volatile int8_t x6693 = 1;
int8_t x6696 = -1;
static int64_t x6848 = INT64_MIN;
uint32_t x6914 = UINT32_MAX;
uint16_t x6918 = 9U;
uint16_t x6920 = 1U;
int16_t x6933 = INT16_MIN;
int32_t x6941 = 46195734;
int32_t x6942 = INT32_MIN;


void f0(void) {
	uint16_t x25 = 17U;
	uint16_t x26 = 4U;
	uint8_t x27 = 1U;
	static uint8_t x28 = 7U;
	volatile int32_t t0 = 20860;

	t0 = ((x25/x26)<<(x27^x28));

	if (t0 != 256) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x85 = 202;
	int8_t x86 = 62;
	int64_t x87 = -1LL;
	int8_t x88 = -1;
	int32_t t1 = -514605344;

	t1 = ((x85/x86)<<(x87^x88));

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = INT64_MIN;
	int64_t x111 = -1LL;
	int16_t x112 = -5;

	t2 = ((x109/x110)<<(x111^x112));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x174 = 12;
	int32_t x175 = -1;
	int64_t x176 = -1LL;
	int32_t t3 = 5136982;

	t3 = ((x173/x174)<<(x175^x176));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x281 = UINT8_MAX;
	uint8_t x282 = 48U;
	static int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	volatile int32_t t4 = -20957;

	t4 = ((x281/x282)<<(x283^x284));

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x286 = -1LL;
	uint32_t x287 = 14U;
	static uint8_t x288 = 14U;
	int64_t t5 = -719LL;

	t5 = ((x285/x286)<<(x287^x288));

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x381 = 128252U;
	static uint32_t x382 = UINT32_MAX;
	volatile uint8_t x383 = 4U;
	static int8_t x384 = 0;
	volatile uint32_t t6 = 196066U;

	t6 = ((x381/x382)<<(x383^x384));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x421 = -1;
	static int8_t x423 = INT8_MAX;
	volatile int32_t t7 = 2580;

	t7 = ((x421/x422)<<(x423^x424));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x454 = INT32_MIN;
	int8_t x455 = 0;
	static volatile uint8_t x456 = 17U;
	volatile int32_t t8 = -7;

	t8 = ((x453/x454)<<(x455^x456));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x477 = 53U;
	int8_t x478 = 4;
	uint64_t x479 = UINT64_MAX;
	volatile int32_t x480 = -1;
	volatile int32_t t9 = 477824647;

	t9 = ((x477/x478)<<(x479^x480));

	if (t9 != 13) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x597 = -2833;
	int64_t x598 = -92LL;
	uint32_t x599 = 14U;
	static int64_t x600 = 0LL;
	int64_t t10 = -122656133215053303LL;

	t10 = ((x597/x598)<<(x599^x600));

	if (t10 != 491520LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x765 = INT64_MIN;
	static uint64_t x766 = UINT64_MAX;
	static int8_t x767 = INT8_MIN;
	volatile int8_t x768 = INT8_MIN;
	uint64_t t11 = 583511LLU;

	t11 = ((x765/x766)<<(x767^x768));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x849 = INT16_MIN;
	static int32_t x850 = INT32_MAX;
	static int16_t x852 = -1;
	static int32_t t12 = 413463;

	t12 = ((x849/x850)<<(x851^x852));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1125 = -3;
	int32_t x1127 = -1;
	int64_t t13 = -13532716LL;

	t13 = ((x1125/x1126)<<(x1127^x1128));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x1129 = UINT16_MAX;
	int64_t x1130 = INT64_MIN;
	static int8_t x1131 = INT8_MAX;
	volatile int8_t x1132 = INT8_MAX;
	volatile int64_t t14 = -6804399905452LL;

	t14 = ((x1129/x1130)<<(x1131^x1132));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x1169 = -1;
	int64_t x1170 = INT64_MIN;
	static volatile int16_t x1171 = -1;
	int8_t x1172 = -14;
	volatile int64_t t15 = 15656LL;

	t15 = ((x1169/x1170)<<(x1171^x1172));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1221 = 13337U;
	int8_t x1222 = INT8_MIN;
	static int16_t x1223 = 8;

	t16 = ((x1221/x1222)<<(x1223^x1224));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1225 = 3;
	int16_t x1226 = INT16_MIN;
	uint8_t x1228 = 29U;
	static int32_t t17 = -6009598;

	t17 = ((x1225/x1226)<<(x1227^x1228));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x1457 = -423;
	int64_t x1458 = -1LL;
	uint32_t x1459 = UINT32_MAX;
	uint32_t x1460 = UINT32_MAX;
	volatile int64_t t18 = 3255LL;

	t18 = ((x1457/x1458)<<(x1459^x1460));

	if (t18 != 423LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1465 = -1;
	uint64_t x1466 = 297LLU;
	volatile uint16_t x1467 = 1U;
	volatile uint8_t x1468 = 14U;
	volatile uint64_t t19 = 35454667305570039LLU;

	t19 = ((x1465/x1466)<<(x1467^x1468));

	if (t19 != 6086804441830064128LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1487 = 0LL;
	int16_t x1488 = 1;
	uint64_t t20 = 148216LLU;

	t20 = ((x1485/x1486)<<(x1487^x1488));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1509 = -1;
	uint32_t x1510 = 153U;
	uint8_t x1511 = UINT8_MAX;
	static volatile uint32_t t21 = 5281612U;

	t21 = ((x1509/x1510)<<(x1511^x1512));

	if (t21 != 28071681U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1529 = INT8_MAX;
	int32_t x1530 = 1;
	int16_t x1531 = INT16_MIN;
	static int16_t x1532 = INT16_MIN;

	t22 = ((x1529/x1530)<<(x1531^x1532));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1555 = 30U;
	uint32_t x1556 = 63U;
	uint64_t t23 = 14559LLU;

	t23 = ((x1553/x1554)<<(x1555^x1556));

	if (t23 != 9361826586883522560LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1561 = INT16_MAX;
	int16_t x1562 = INT16_MIN;
	static int16_t x1563 = -1;
	static int16_t x1564 = -1;

	t24 = ((x1561/x1562)<<(x1563^x1564));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1681 = -1LL;
	int32_t x1683 = INT32_MIN;
	int32_t x1684 = INT32_MIN;

	t25 = ((x1681/x1682)<<(x1683^x1684));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1783 = -1;
	int8_t x1784 = -1;
	static volatile int64_t t26 = 262633231572LL;

	t26 = ((x1781/x1782)<<(x1783^x1784));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1873 = 12;
	uint16_t x1874 = 4U;
	static uint8_t x1875 = 1U;
	uint64_t x1876 = 17LLU;
	int32_t t27 = 967355;

	t27 = ((x1873/x1874)<<(x1875^x1876));

	if (t27 != 196608) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1995 = -4;
	int64_t x1996 = -1LL;
	uint64_t t28 = 66753469873985822LLU;

	t28 = ((x1993/x1994)<<(x1995^x1996));

	if (t28 != 8680820740569185336LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2337 = 21U;
	int16_t x2338 = INT16_MIN;
	int32_t x2339 = -1;
	volatile int8_t x2340 = -1;

	t29 = ((x2337/x2338)<<(x2339^x2340));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2561 = -21433425LL;
	volatile uint32_t x2562 = UINT32_MAX;
	uint32_t x2563 = 21U;

	t30 = ((x2561/x2562)<<(x2563^x2564));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x2621 = UINT16_MAX;
	volatile int32_t x2622 = INT32_MAX;
	static uint32_t x2624 = 7U;
	int32_t t31 = -643841;

	t31 = ((x2621/x2622)<<(x2623^x2624));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2625 = INT64_MAX;
	int8_t x2627 = -3;
	uint64_t x2628 = UINT64_MAX;
	volatile int64_t t32 = -115016429075594173LL;

	t32 = ((x2625/x2626)<<(x2627^x2628));

	if (t32 != 362675672396LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x2714 = INT64_MAX;
	int64_t x2715 = INT64_MAX;
	int64_t x2716 = INT64_MAX;
	volatile int64_t t33 = 11712827015920LL;

	t33 = ((x2713/x2714)<<(x2715^x2716));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2814 = INT8_MIN;
	volatile int32_t x2815 = -1;
	static int16_t x2816 = -1;

	t34 = ((x2813/x2814)<<(x2815^x2816));

	if (t34 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x2838 = INT32_MIN;
	int8_t x2839 = -1;
	static volatile int32_t t35 = 15;

	t35 = ((x2837/x2838)<<(x2839^x2840));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2953 = INT8_MIN;
	static volatile int8_t x2955 = INT8_MIN;
	int8_t x2956 = INT8_MIN;

	t36 = ((x2953/x2954)<<(x2955^x2956));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2973 = INT16_MIN;
	static int64_t x2974 = INT64_MIN;
	int8_t x2975 = -1;
	static int8_t x2976 = -1;
	volatile int64_t t37 = 106875558286982LL;

	t37 = ((x2973/x2974)<<(x2975^x2976));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x3089 = UINT32_MAX;
	uint32_t x3090 = UINT32_MAX;
	int16_t x3091 = -1;
	volatile int16_t x3092 = -1;

	t38 = ((x3089/x3090)<<(x3091^x3092));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x3137 = INT64_MIN;
	int64_t x3138 = -81203700280116117LL;
	static volatile uint8_t x3140 = 15U;
	volatile int64_t t39 = 21318348088LL;

	t39 = ((x3137/x3138)<<(x3139^x3140));

	if (t39 != 925696LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x3305 = UINT8_MAX;
	static volatile int32_t x3307 = 1;
	uint8_t x3308 = 10U;
	uint64_t t40 = 98463864LLU;

	t40 = ((x3305/x3306)<<(x3307^x3308));

	if (t40 != 174080LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x3466 = INT32_MAX;
	int32_t x3467 = 1;
	static int16_t x3468 = 2;

	t41 = ((x3465/x3466)<<(x3467^x3468));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3533 = 0;
	volatile int8_t x3534 = INT8_MAX;
	static int8_t x3535 = -1;
	static int8_t x3536 = -1;
	static volatile int32_t t42 = -342466896;

	t42 = ((x3533/x3534)<<(x3535^x3536));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x3577 = -1LL;
	int32_t x3578 = INT32_MIN;
	int64_t x3579 = -1LL;
	int8_t x3580 = -1;

	t43 = ((x3577/x3578)<<(x3579^x3580));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x3633 = 561497118762170611LL;
	static int64_t x3634 = INT64_MIN;
	uint16_t x3635 = 14U;

	t44 = ((x3633/x3634)<<(x3635^x3636));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x3657 = INT64_MAX;
	static uint64_t x3658 = 179490225077591LLU;
	int32_t x3659 = -1;
	int32_t x3660 = -1;
	uint64_t t45 = 1LLU;

	t45 = ((x3657/x3658)<<(x3659^x3660));

	if (t45 != 51386LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x3665 = INT16_MIN;
	static int16_t x3666 = INT16_MIN;
	static int32_t x3667 = -1;
	uint32_t x3668 = UINT32_MAX;
	int32_t t46 = -5;

	t46 = ((x3665/x3666)<<(x3667^x3668));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x3705 = -1;
	static volatile int64_t x3706 = 1678609065027497LL;
	int8_t x3707 = 51;
	static volatile uint16_t x3708 = 12U;
	static int64_t t47 = 7045760742310LL;

	t47 = ((x3705/x3706)<<(x3707^x3708));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3881 = 2U;
	int16_t x3882 = INT16_MIN;
	static int16_t x3883 = -1;
	int32_t t48 = 9929;

	t48 = ((x3881/x3882)<<(x3883^x3884));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3929 = -1;
	uint16_t x3930 = UINT16_MAX;
	static volatile uint32_t x3931 = 0U;
	static int8_t x3932 = 0;
	volatile int32_t t49 = -5691;

	t49 = ((x3929/x3930)<<(x3931^x3932));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3961 = 2544615LLU;
	static uint8_t x3963 = 17U;
	int8_t x3964 = 2;
	uint64_t t50 = 1950420823634461317LLU;

	t50 = ((x3961/x3962)<<(x3963^x3964));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x4018 = INT64_MIN;
	static int8_t x4019 = -1;
	uint64_t x4020 = UINT64_MAX;

	t51 = ((x4017/x4018)<<(x4019^x4020));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x4097 = -180888202;
	volatile int8_t x4099 = -1;
	volatile uint64_t t52 = 424085LLU;

	t52 = ((x4097/x4098)<<(x4099^x4100));

	if (t52 != 11192984778815LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x4237 = -1;
	int16_t x4239 = INT16_MIN;
	volatile int16_t x4240 = INT16_MIN;

	t53 = ((x4237/x4238)<<(x4239^x4240));

	if (t53 != 58835168U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x4245 = -1LL;
	static int32_t x4246 = 1333;
	int16_t x4247 = INT16_MIN;
	static int16_t x4248 = INT16_MIN;
	int64_t t54 = -73713222773853350LL;

	t54 = ((x4245/x4246)<<(x4247^x4248));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x4249 = INT8_MIN;
	volatile int8_t x4250 = INT8_MIN;
	int32_t x4251 = -20;
	uint32_t x4252 = UINT32_MAX;
	int32_t t55 = 18;

	t55 = ((x4249/x4250)<<(x4251^x4252));

	if (t55 != 524288) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x4277 = 20750U;
	int32_t x4278 = -1;
	uint8_t x4279 = 3U;
	int32_t x4280 = 0;
	uint32_t t56 = 29U;

	t56 = ((x4277/x4278)<<(x4279^x4280));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4321 = -1;
	int16_t x4324 = INT16_MIN;
	volatile int32_t t57 = -81808592;

	t57 = ((x4321/x4322)<<(x4323^x4324));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x4361 = -1;
	int16_t x4362 = INT16_MIN;
	volatile uint16_t x4363 = 13U;
	int32_t t58 = 13646790;

	t58 = ((x4361/x4362)<<(x4363^x4364));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4637 = 609371650LL;
	static volatile int32_t x4639 = INT32_MIN;
	int32_t x4640 = INT32_MIN;
	volatile uint64_t t59 = 1867267376819692LLU;

	t59 = ((x4637/x4638)<<(x4639^x4640));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x4661 = 39;
	volatile int64_t x4662 = INT64_MAX;
	int64_t x4663 = -1LL;
	int64_t t60 = 174019698LL;

	t60 = ((x4661/x4662)<<(x4663^x4664));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4757 = INT32_MIN;
	volatile int8_t x4759 = -1;
	int8_t x4760 = -5;

	t61 = ((x4757/x4758)<<(x4759^x4760));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x4793 = UINT32_MAX;
	int16_t x4794 = -14;
	int8_t x4795 = -1;
	int16_t x4796 = -1;

	t62 = ((x4793/x4794)<<(x4795^x4796));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4807 = INT32_MAX;
	int32_t x4808 = INT32_MAX;
	int32_t t63 = -55;

	t63 = ((x4805/x4806)<<(x4807^x4808));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x4861 = -1;
	int8_t x4862 = 60;
	int32_t x4864 = -1;
	int32_t t64 = 16184;

	t64 = ((x4861/x4862)<<(x4863^x4864));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4873 = INT8_MAX;
	int64_t x4874 = INT64_MAX;
	static int64_t x4876 = -1LL;
	static int64_t t65 = -21550234771016LL;

	t65 = ((x4873/x4874)<<(x4875^x4876));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4949 = INT32_MAX;
	int64_t x4950 = INT64_MAX;
	uint16_t x4951 = 1U;
	uint8_t x4952 = 4U;

	t66 = ((x4949/x4950)<<(x4951^x4952));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4981 = UINT64_MAX;
	int32_t x4983 = -1;
	int64_t x4984 = -21LL;
	uint64_t t67 = 19167LLU;

	t67 = ((x4981/x4982)<<(x4983^x4984));

	if (t67 != 1048576LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x4993 = INT8_MIN;
	int64_t x4994 = INT64_MAX;
	int16_t x4995 = 247;
	uint8_t x4996 = UINT8_MAX;
	volatile int64_t t68 = -293297LL;

	t68 = ((x4993/x4994)<<(x4995^x4996));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x5017 = 19LL;
	int32_t x5019 = INT32_MIN;
	volatile int32_t x5020 = INT32_MIN;
	static volatile int64_t t69 = 29000751201LL;

	t69 = ((x5017/x5018)<<(x5019^x5020));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x5093 = INT16_MAX;
	uint32_t x5094 = 76263751U;
	volatile int16_t x5095 = 11;
	volatile uint32_t x5096 = 0U;
	uint32_t t70 = 5U;

	t70 = ((x5093/x5094)<<(x5095^x5096));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x5117 = INT32_MIN;
	volatile int64_t x5118 = -1LL;
	int32_t x5119 = INT32_MIN;
	volatile int64_t t71 = -166852LL;

	t71 = ((x5117/x5118)<<(x5119^x5120));

	if (t71 != 2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x5197 = INT16_MAX;
	volatile int16_t x5199 = -54;
	int8_t x5200 = -1;
	static volatile int64_t t72 = -4290044817LL;

	t72 = ((x5197/x5198)<<(x5199^x5200));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x5203 = 3U;
	uint8_t x5204 = 1U;
	int32_t t73 = -6659;

	t73 = ((x5201/x5202)<<(x5203^x5204));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5349 = INT16_MAX;
	int8_t x5350 = INT8_MAX;
	int8_t x5351 = 12;
	int8_t x5352 = 1;
	volatile int32_t t74 = -232694280;

	t74 = ((x5349/x5350)<<(x5351^x5352));

	if (t74 != 2113536) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5378 = INT64_MIN;
	volatile int64_t x5379 = -1LL;
	int8_t x5380 = -19;
	volatile int64_t t75 = 16737LL;

	t75 = ((x5377/x5378)<<(x5379^x5380));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5517 = INT8_MAX;
	uint64_t x5520 = UINT64_MAX;
	volatile int32_t t76 = -26752236;

	t76 = ((x5517/x5518)<<(x5519^x5520));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5585 = INT32_MAX;
	static volatile uint16_t x5586 = 622U;
	int32_t x5587 = -1;
	static int16_t x5588 = -1;
	int32_t t77 = 31519;

	t77 = ((x5585/x5586)<<(x5587^x5588));

	if (t77 != 3452546) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x5677 = UINT16_MAX;
	static uint16_t x5678 = UINT16_MAX;
	uint32_t x5679 = UINT32_MAX;
	uint32_t x5680 = UINT32_MAX;
	int32_t t78 = -21;

	t78 = ((x5677/x5678)<<(x5679^x5680));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5805 = INT16_MAX;
	int64_t x5806 = -485546498LL;
	volatile int8_t x5808 = -7;
	volatile int64_t t79 = -8421637LL;

	t79 = ((x5805/x5806)<<(x5807^x5808));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5845 = UINT64_MAX;
	uint32_t x5846 = 688888U;
	uint64_t x5848 = UINT64_MAX;
	volatile uint64_t t80 = 2022874555LLU;

	t80 = ((x5845/x5846)<<(x5847^x5848));

	if (t80 != 26777566271599LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x5881 = 1;
	int64_t x5882 = INT64_MIN;
	volatile uint16_t x5884 = 2U;

	t81 = ((x5881/x5882)<<(x5883^x5884));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5965 = -1;
	int8_t x5968 = -1;
	static volatile int32_t t82 = 1231134;

	t82 = ((x5965/x5966)<<(x5967^x5968));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6009 = INT32_MIN;
	int64_t x6010 = INT64_MIN;
	int16_t x6011 = -1;
	uint64_t x6012 = UINT64_MAX;
	int64_t t83 = -14711058484609LL;

	t83 = ((x6009/x6010)<<(x6011^x6012));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x6089 = INT16_MIN;
	volatile int16_t x6090 = INT16_MIN;
	int32_t t84 = 162202903;

	t84 = ((x6089/x6090)<<(x6091^x6092));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x6129 = -1;
	int8_t x6130 = -23;
	uint32_t x6131 = UINT32_MAX;
	int8_t x6132 = -1;

	t85 = ((x6129/x6130)<<(x6131^x6132));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x6225 = INT8_MIN;
	uint16_t x6226 = 181U;
	static int64_t x6227 = INT64_MAX;
	static int64_t x6228 = INT64_MAX;
	int32_t t86 = -1;

	t86 = ((x6225/x6226)<<(x6227^x6228));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x6262 = 3953938021LL;
	static int8_t x6263 = -1;
	int32_t x6264 = -1;
	static int64_t t87 = 248477LL;

	t87 = ((x6261/x6262)<<(x6263^x6264));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6269 = UINT8_MAX;
	volatile uint16_t x6270 = UINT16_MAX;
	int32_t x6271 = -1;
	static int8_t x6272 = -4;
	int32_t t88 = -23816;

	t88 = ((x6269/x6270)<<(x6271^x6272));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x6369 = -4979;
	int64_t x6370 = INT64_MAX;
	static int8_t x6371 = -1;
	static int8_t x6372 = -17;

	t89 = ((x6369/x6370)<<(x6371^x6372));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x6433 = -1;
	int64_t x6435 = -1LL;
	int8_t x6436 = -1;
	int32_t t90 = 1;

	t90 = ((x6433/x6434)<<(x6435^x6436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6517 = -1;
	volatile int32_t x6518 = INT32_MAX;
	static int64_t x6519 = -1LL;
	int16_t x6520 = -1;
	int32_t t91 = 0;

	t91 = ((x6517/x6518)<<(x6519^x6520));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x6621 = 50;
	int32_t x6622 = INT32_MIN;
	int16_t x6623 = 1;
	volatile int8_t x6624 = 1;
	static int32_t t92 = -13937;

	t92 = ((x6621/x6622)<<(x6623^x6624));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6641 = -4378807859370LL;
	int8_t x6642 = -1;
	volatile int32_t x6643 = -1;
	volatile uint64_t x6644 = UINT64_MAX;

	t93 = ((x6641/x6642)<<(x6643^x6644));

	if (t93 != 4378807859370LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6694 = 12839227518263414LL;
	int32_t x6695 = -1;
	int64_t t94 = -273185917447803LL;

	t94 = ((x6693/x6694)<<(x6695^x6696));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x6845 = 1LL;
	static int32_t x6846 = -790;
	int64_t x6847 = INT64_MIN;
	volatile int64_t t95 = 4556599LL;

	t95 = ((x6845/x6846)<<(x6847^x6848));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6913 = 137U;
	uint8_t x6915 = UINT8_MAX;
	static uint8_t x6916 = UINT8_MAX;
	uint32_t t96 = 56U;

	t96 = ((x6913/x6914)<<(x6915^x6916));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x6917 = INT64_MAX;
	int8_t x6919 = 1;
	int64_t t97 = -2520LL;

	t97 = ((x6917/x6918)<<(x6919^x6920));

	if (t97 != 1024819115206086200LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6934 = UINT64_MAX;
	volatile int8_t x6935 = -1;
	static volatile int8_t x6936 = -1;
	static volatile uint64_t t98 = 6237196524693LLU;

	t98 = ((x6933/x6934)<<(x6935^x6936));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6943 = 2U;
	uint8_t x6944 = 5U;
	volatile int32_t t99 = 451488;

	t99 = ((x6941/x6942)<<(x6943^x6944));

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

