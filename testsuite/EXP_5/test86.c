#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = INT64_MAX;
static int8_t x12 = 4;
uint32_t x23 = UINT32_MAX;
static int16_t x24 = 1;
uint8_t x401 = 95U;
uint16_t x403 = 1862U;
static uint64_t x418 = UINT64_MAX;
int16_t x429 = INT16_MIN;
int64_t x431 = 4830833629603819LL;
volatile uint16_t x460 = 12U;
uint32_t x502 = 1055U;
static int32_t x585 = INT32_MAX;
int16_t x587 = -6;
int32_t x613 = INT32_MIN;
volatile int32_t x615 = INT32_MIN;
volatile int32_t t19 = 7800980;
int32_t x617 = INT32_MAX;
int8_t x641 = INT8_MAX;
int8_t x644 = 31;
uint32_t x658 = 27U;
uint8_t x898 = 31U;
int16_t x928 = 1;
volatile int64_t x985 = 473508747033167524LL;
volatile uint32_t x986 = 88501658U;
static uint32_t x988 = 1U;
volatile int32_t t28 = -355890;
volatile int64_t x1126 = INT64_MAX;
int16_t x1157 = INT16_MIN;
volatile int8_t x1226 = 18;
volatile uint8_t x1424 = 2U;
uint32_t x1479 = UINT32_MAX;
int64_t x1518 = 0LL;
uint16_t x1519 = 20U;
int8_t x1584 = 3;
int32_t x1645 = 5;
int64_t x1647 = INT64_MAX;
volatile int16_t x1665 = 6;
static int64_t x1668 = 18LL;
static volatile int32_t t43 = 39098852;
static volatile int8_t x1809 = INT8_MIN;
int64_t x1812 = 0LL;
uint16_t x1821 = 1220U;
volatile int32_t t48 = 21680370;
int8_t x1994 = INT8_MIN;
static int32_t t49 = 1701561;
int32_t t50 = -1269;
uint8_t x2262 = 1U;
static uint8_t x2336 = 0U;
int32_t t52 = -22217475;
uint8_t x2468 = 14U;
volatile uint8_t x2500 = 28U;
int8_t x2549 = INT8_MIN;
int8_t x2550 = -1;
volatile int32_t t56 = -893869;
uint16_t x2557 = 20U;
static uint64_t x2558 = 453123838LLU;
int16_t x2559 = INT16_MAX;
int32_t x2573 = 40735;
static int32_t t59 = -1533469;
uint32_t x2695 = UINT32_MAX;
volatile int8_t x2696 = 1;
int32_t t60 = 95343206;
volatile int32_t x2814 = INT32_MIN;
int8_t x2816 = 0;
static int16_t x2834 = 6744;
int8_t x2835 = -1;
static int8_t x3325 = INT8_MIN;
volatile int32_t t65 = -1;
static uint32_t x3553 = 1622U;
uint64_t x3554 = UINT64_MAX;
uint64_t x3699 = 8774672987646318224LLU;
volatile uint16_t x3801 = UINT16_MAX;
volatile int64_t x3909 = -1LL;
int16_t x3941 = 0;
int8_t x3944 = 12;
int64_t x4091 = INT64_MAX;
int16_t x4092 = 11;
static int8_t x4139 = -23;
int8_t x4140 = 2;
int64_t x4326 = 959827050912112655LL;
int64_t x4327 = -166691554766641LL;
int32_t t82 = 1262626;
int64_t x4381 = INT64_MAX;
uint64_t x4382 = UINT64_MAX;
uint8_t x4383 = UINT8_MAX;
static uint8_t x4412 = 34U;
uint32_t x4527 = 251437U;
uint16_t x4578 = 6U;
uint8_t x4580 = 6U;
static int8_t x4667 = 1;
static uint8_t x4695 = UINT8_MAX;
uint64_t x4710 = UINT64_MAX;
volatile int8_t x4711 = INT8_MAX;
uint8_t x4712 = 57U;
volatile int32_t t90 = 85;
int64_t x4726 = 553536112219402LL;
int16_t x4727 = -3068;
int64_t x4873 = 36361702LL;
volatile int8_t x4960 = 29;
uint16_t x4970 = 246U;
uint16_t x4972 = 10U;
uint32_t x5023 = UINT32_MAX;
int16_t x5103 = -9;
uint8_t x5116 = 0U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int8_t x2 = INT8_MAX;
	int8_t x3 = -1;
	uint16_t x4 = 5U;
	int32_t t0 = -1501;

	t0 = (x1==((x2+x3)>>x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	volatile int32_t t1 = -20307782;

	t1 = (x9==((x10+x11)>>x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x21 = INT16_MIN;
	volatile int32_t x22 = INT32_MIN;
	int32_t t2 = 0;

	t2 = (x21==((x22+x23)>>x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x45 = 26660U;
	uint32_t x46 = 172899U;
	uint8_t x47 = 25U;
	int16_t x48 = 1;
	volatile int32_t t3 = 66;

	t3 = (x45==((x46+x47)>>x48));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x101 = -29;
	static uint8_t x102 = 120U;
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = 2;
	static int32_t t4 = -15;

	t4 = (x101==((x102+x103)>>x104));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x205 = 104943565U;
	volatile int32_t x206 = -297;
	static volatile uint32_t x207 = 0U;
	static uint8_t x208 = 0U;
	int32_t t5 = 814734;

	t5 = (x205==((x206+x207)>>x208));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = -5LL;
	uint8_t x251 = 12U;
	volatile int8_t x252 = 0;
	int32_t t6 = 755411;

	t6 = (x249==((x250+x251)>>x252));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x261 = -1;
	volatile int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MAX;
	static uint8_t x264 = 16U;
	int32_t t7 = 2510734;

	t7 = (x261==((x262+x263)>>x264));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x289 = UINT16_MAX;
	uint16_t x290 = 31778U;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = 31U;
	int32_t t8 = -15;

	t8 = (x289==((x290+x291)>>x292));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x385 = -1612;
	int8_t x386 = -1;
	uint32_t x387 = 77501U;
	int64_t x388 = 30LL;
	volatile int32_t t9 = 3899929;

	t9 = (x385==((x386+x387)>>x388));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x402 = 1059079899088LLU;
	uint8_t x404 = 28U;
	int32_t t10 = -231;

	t10 = (x401==((x402+x403)>>x404));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x417 = UINT8_MAX;
	volatile int32_t x419 = INT32_MIN;
	uint32_t x420 = 7U;
	int32_t t11 = -3464;

	t11 = (x417==((x418+x419)>>x420));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x430 = -22254866LL;
	volatile int32_t x432 = 1;
	volatile int32_t t12 = -132629;

	t12 = (x429==((x430+x431)>>x432));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x457 = -1;
	uint32_t x458 = UINT32_MAX;
	uint8_t x459 = 1U;
	static volatile int32_t t13 = 126681322;

	t13 = (x457==((x458+x459)>>x460));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x489 = -2883744;
	uint64_t x490 = UINT64_MAX;
	int32_t x491 = -73476793;
	int8_t x492 = 0;
	int32_t t14 = -34947;

	t14 = (x489==((x490+x491)>>x492));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x501 = 5;
	uint16_t x503 = 1018U;
	int16_t x504 = 9;
	volatile int32_t t15 = -55;

	t15 = (x501==((x502+x503)>>x504));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x545 = INT32_MIN;
	volatile uint64_t x546 = 7LLU;
	int32_t x547 = INT32_MIN;
	uint16_t x548 = 8U;
	int32_t t16 = -1066758228;

	t16 = (x545==((x546+x547)>>x548));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x586 = INT8_MAX;
	volatile int16_t x588 = 1;
	int32_t t17 = 1;

	t17 = (x585==((x586+x587)>>x588));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x605 = INT16_MAX;
	static int32_t x606 = INT32_MIN;
	uint64_t x607 = 8235031346102572LLU;
	volatile uint16_t x608 = 22U;
	volatile int32_t t18 = 560;

	t18 = (x605==((x606+x607)>>x608));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x614 = 842151325005568LL;
	volatile uint32_t x616 = 2U;

	t19 = (x613==((x614+x615)>>x616));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x618 = 5U;
	static uint64_t x619 = 56769854842LLU;
	int32_t x620 = 51;
	volatile int32_t t20 = -986778;

	t20 = (x617==((x618+x619)>>x620));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x642 = 409967756449250662LLU;
	int8_t x643 = -15;
	int32_t t21 = -1982;

	t21 = (x641==((x642+x643)>>x644));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x657 = UINT32_MAX;
	volatile int32_t x659 = INT32_MIN;
	uint8_t x660 = 0U;
	int32_t t22 = 11935991;

	t22 = (x657==((x658+x659)>>x660));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x713 = INT64_MAX;
	uint64_t x714 = 182409105LLU;
	int32_t x715 = INT32_MAX;
	int8_t x716 = 48;
	volatile int32_t t23 = 1;

	t23 = (x713==((x714+x715)>>x716));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x897 = 0U;
	int16_t x899 = INT16_MAX;
	volatile uint8_t x900 = 4U;
	volatile int32_t t24 = -2488641;

	t24 = (x897==((x898+x899)>>x900));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x925 = INT32_MIN;
	int32_t x926 = -1;
	static int16_t x927 = INT16_MAX;
	int32_t t25 = 8;

	t25 = (x925==((x926+x927)>>x928));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x987 = INT8_MIN;
	volatile int32_t t26 = 46;

	t26 = (x985==((x986+x987)>>x988));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1025 = INT32_MIN;
	int16_t x1026 = INT16_MAX;
	static int64_t x1027 = -1LL;
	volatile int8_t x1028 = 13;
	static volatile int32_t t27 = -3492;

	t27 = (x1025==((x1026+x1027)>>x1028));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1049 = -1;
	int64_t x1050 = -890366943384LL;
	uint64_t x1051 = 54621LLU;
	volatile int16_t x1052 = 1;

	t28 = (x1049==((x1050+x1051)>>x1052));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1109 = INT8_MIN;
	uint32_t x1110 = 1611449816U;
	volatile int32_t x1111 = -1;
	static int8_t x1112 = 3;
	static volatile int32_t t29 = -5294263;

	t29 = (x1109==((x1110+x1111)>>x1112));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1125 = UINT8_MAX;
	int32_t x1127 = -13338666;
	uint8_t x1128 = 7U;
	volatile int32_t t30 = -358173523;

	t30 = (x1125==((x1126+x1127)>>x1128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1158 = INT8_MAX;
	volatile uint32_t x1159 = 561U;
	volatile uint8_t x1160 = 6U;
	volatile int32_t t31 = -14115755;

	t31 = (x1157==((x1158+x1159)>>x1160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1225 = UINT16_MAX;
	uint8_t x1227 = 29U;
	uint8_t x1228 = 9U;
	volatile int32_t t32 = 235194219;

	t32 = (x1225==((x1226+x1227)>>x1228));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1305 = 25;
	volatile int32_t x1306 = -1;
	uint16_t x1307 = 11U;
	uint8_t x1308 = 4U;
	int32_t t33 = 31372;

	t33 = (x1305==((x1306+x1307)>>x1308));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1309 = 2U;
	volatile uint8_t x1310 = UINT8_MAX;
	static volatile uint16_t x1311 = UINT16_MAX;
	static uint8_t x1312 = 1U;
	static volatile int32_t t34 = 1288890;

	t34 = (x1309==((x1310+x1311)>>x1312));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1329 = 3069U;
	static int64_t x1330 = 0LL;
	volatile uint64_t x1331 = 2245297867997545LLU;
	int32_t x1332 = 1;
	volatile int32_t t35 = 593193989;

	t35 = (x1329==((x1330+x1331)>>x1332));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1421 = INT16_MIN;
	volatile int32_t x1422 = INT32_MAX;
	uint64_t x1423 = 153078129686527LLU;
	int32_t t36 = 24;

	t36 = (x1421==((x1422+x1423)>>x1424));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1477 = INT64_MIN;
	static int8_t x1478 = INT8_MIN;
	static uint16_t x1480 = 0U;
	volatile int32_t t37 = 89;

	t37 = (x1477==((x1478+x1479)>>x1480));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1501 = 105;
	static int32_t x1502 = 696;
	static volatile uint16_t x1503 = 6112U;
	uint16_t x1504 = 14U;
	volatile int32_t t38 = -1;

	t38 = (x1501==((x1502+x1503)>>x1504));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1517 = 48;
	uint16_t x1520 = 11U;
	volatile int32_t t39 = 5;

	t39 = (x1517==((x1518+x1519)>>x1520));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1581 = 38U;
	uint32_t x1582 = 116U;
	int8_t x1583 = INT8_MIN;
	int32_t t40 = 1398;

	t40 = (x1581==((x1582+x1583)>>x1584));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1646 = -2;
	int8_t x1648 = 0;
	volatile int32_t t41 = 5;

	t41 = (x1645==((x1646+x1647)>>x1648));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1657 = INT16_MIN;
	volatile int8_t x1658 = -1;
	uint64_t x1659 = UINT64_MAX;
	uint16_t x1660 = 44U;
	static volatile int32_t t42 = -47261;

	t42 = (x1657==((x1658+x1659)>>x1660));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1666 = -354;
	uint64_t x1667 = UINT64_MAX;

	t43 = (x1665==((x1666+x1667)>>x1668));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1810 = -246;
	uint64_t x1811 = UINT64_MAX;
	static int32_t t44 = 4385033;

	t44 = (x1809==((x1810+x1811)>>x1812));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1822 = -1880437LL;
	volatile uint64_t x1823 = 35861243957563884LLU;
	int8_t x1824 = 32;
	int32_t t45 = -73;

	t45 = (x1821==((x1822+x1823)>>x1824));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1869 = INT8_MIN;
	uint64_t x1870 = UINT64_MAX;
	int16_t x1871 = 455;
	uint64_t x1872 = 17LLU;
	volatile int32_t t46 = -369;

	t46 = (x1869==((x1870+x1871)>>x1872));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1877 = UINT16_MAX;
	int8_t x1878 = -13;
	uint32_t x1879 = UINT32_MAX;
	uint8_t x1880 = 13U;
	static int32_t t47 = 6542;

	t47 = (x1877==((x1878+x1879)>>x1880));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1933 = 2;
	static uint32_t x1934 = UINT32_MAX;
	int16_t x1935 = 307;
	uint8_t x1936 = 17U;

	t48 = (x1933==((x1934+x1935)>>x1936));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x1993 = -1;
	static int32_t x1995 = 4444806;
	uint16_t x1996 = 2U;

	t49 = (x1993==((x1994+x1995)>>x1996));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2001 = INT8_MAX;
	volatile int8_t x2002 = -1;
	static int64_t x2003 = 197394640291LL;
	static uint16_t x2004 = 3U;

	t50 = (x2001==((x2002+x2003)>>x2004));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2261 = INT64_MIN;
	uint64_t x2263 = 7554LLU;
	uint8_t x2264 = 2U;
	volatile int32_t t51 = -1;

	t51 = (x2261==((x2262+x2263)>>x2264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2333 = INT64_MIN;
	int64_t x2334 = -8333611509LL;
	uint64_t x2335 = 611523LLU;

	t52 = (x2333==((x2334+x2335)>>x2336));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2405 = 31;
	int64_t x2406 = INT64_MIN;
	uint64_t x2407 = UINT64_MAX;
	int8_t x2408 = 6;
	volatile int32_t t53 = 1896100;

	t53 = (x2405==((x2406+x2407)>>x2408));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2465 = INT64_MIN;
	int8_t x2466 = INT8_MAX;
	volatile uint8_t x2467 = UINT8_MAX;
	volatile int32_t t54 = -1295;

	t54 = (x2465==((x2466+x2467)>>x2468));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2497 = INT8_MAX;
	uint16_t x2498 = 1U;
	uint16_t x2499 = UINT16_MAX;
	static int32_t t55 = 1;

	t55 = (x2497==((x2498+x2499)>>x2500));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x2551 = UINT32_MAX;
	uint8_t x2552 = 28U;

	t56 = (x2549==((x2550+x2551)>>x2552));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x2560 = 3U;
	int32_t t57 = 7154;

	t57 = (x2557==((x2558+x2559)>>x2560));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2574 = INT32_MIN;
	uint64_t x2575 = UINT64_MAX;
	int64_t x2576 = 21LL;
	int32_t t58 = 129379969;

	t58 = (x2573==((x2574+x2575)>>x2576));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2621 = 1U;
	int16_t x2622 = INT16_MIN;
	static int32_t x2623 = 80836;
	volatile int8_t x2624 = 3;

	t59 = (x2621==((x2622+x2623)>>x2624));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2693 = INT8_MIN;
	int64_t x2694 = -1LL;

	t60 = (x2693==((x2694+x2695)>>x2696));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x2813 = 2U;
	uint64_t x2815 = 4483325809349950503LLU;
	volatile int32_t t61 = 149828711;

	t61 = (x2813==((x2814+x2815)>>x2816));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2833 = 2190;
	static uint16_t x2836 = 26U;
	volatile int32_t t62 = 48992;

	t62 = (x2833==((x2834+x2835)>>x2836));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x2865 = INT8_MIN;
	volatile uint16_t x2866 = UINT16_MAX;
	uint64_t x2867 = UINT64_MAX;
	static int16_t x2868 = 0;
	volatile int32_t t63 = 116;

	t63 = (x2865==((x2866+x2867)>>x2868));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x2949 = UINT32_MAX;
	int32_t x2950 = INT32_MAX;
	static int64_t x2951 = 0LL;
	volatile uint16_t x2952 = 3U;
	static volatile int32_t t64 = 59866913;

	t64 = (x2949==((x2950+x2951)>>x2952));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3326 = -1;
	int8_t x3327 = INT8_MAX;
	uint8_t x3328 = 0U;

	t65 = (x3325==((x3326+x3327)>>x3328));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3555 = 0;
	uint16_t x3556 = 0U;
	volatile int32_t t66 = 1;

	t66 = (x3553==((x3554+x3555)>>x3556));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x3585 = 61;
	int8_t x3586 = -3;
	static uint16_t x3587 = 8281U;
	uint32_t x3588 = 3U;
	static int32_t t67 = -16108368;

	t67 = (x3585==((x3586+x3587)>>x3588));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x3637 = 13192158U;
	int8_t x3638 = INT8_MIN;
	uint32_t x3639 = UINT32_MAX;
	volatile int8_t x3640 = 2;
	int32_t t68 = 103;

	t68 = (x3637==((x3638+x3639)>>x3640));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x3685 = -1LL;
	volatile int64_t x3686 = 737407LL;
	uint8_t x3687 = UINT8_MAX;
	volatile uint16_t x3688 = 8U;
	volatile int32_t t69 = -715065514;

	t69 = (x3685==((x3686+x3687)>>x3688));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3697 = 60037LLU;
	int32_t x3698 = INT32_MIN;
	uint64_t x3700 = 31LLU;
	volatile int32_t t70 = -28026175;

	t70 = (x3697==((x3698+x3699)>>x3700));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3753 = -1;
	static int32_t x3754 = INT32_MIN;
	int64_t x3755 = INT64_MAX;
	int8_t x3756 = 11;
	volatile int32_t t71 = -261402;

	t71 = (x3753==((x3754+x3755)>>x3756));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3802 = INT8_MAX;
	int64_t x3803 = -1LL;
	static int16_t x3804 = 1;
	volatile int32_t t72 = -7213644;

	t72 = (x3801==((x3802+x3803)>>x3804));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3809 = INT16_MIN;
	uint8_t x3810 = UINT8_MAX;
	static volatile uint32_t x3811 = UINT32_MAX;
	int8_t x3812 = 1;
	volatile int32_t t73 = 29629370;

	t73 = (x3809==((x3810+x3811)>>x3812));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3910 = 3774724616156LLU;
	int16_t x3911 = -7067;
	static uint8_t x3912 = 22U;
	static volatile int32_t t74 = -4;

	t74 = (x3909==((x3910+x3911)>>x3912));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3942 = -1LL;
	volatile int16_t x3943 = 49;
	static volatile int32_t t75 = -125;

	t75 = (x3941==((x3942+x3943)>>x3944));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4025 = -6;
	static uint16_t x4026 = 827U;
	uint8_t x4027 = 0U;
	volatile int16_t x4028 = 0;
	volatile int32_t t76 = -31;

	t76 = (x4025==((x4026+x4027)>>x4028));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4081 = 0U;
	volatile uint8_t x4082 = 60U;
	volatile uint8_t x4083 = UINT8_MAX;
	uint16_t x4084 = 3U;
	volatile int32_t t77 = 378;

	t77 = (x4081==((x4082+x4083)>>x4084));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4089 = INT64_MAX;
	int8_t x4090 = -1;
	int32_t t78 = -64960190;

	t78 = (x4089==((x4090+x4091)>>x4092));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x4137 = INT64_MAX;
	volatile uint32_t x4138 = 37U;
	volatile int32_t t79 = -1;

	t79 = (x4137==((x4138+x4139)>>x4140));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4141 = 0;
	int32_t x4142 = INT32_MAX;
	static uint64_t x4143 = 2069194LLU;
	int16_t x4144 = 26;
	volatile int32_t t80 = 2;

	t80 = (x4141==((x4142+x4143)>>x4144));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4225 = 231531576083LLU;
	int64_t x4226 = 61576LL;
	volatile int32_t x4227 = -1;
	uint16_t x4228 = 14U;
	volatile int32_t t81 = 8;

	t81 = (x4225==((x4226+x4227)>>x4228));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x4325 = 0;
	uint16_t x4328 = 0U;

	t82 = (x4325==((x4326+x4327)>>x4328));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4384 = 0U;
	volatile int32_t t83 = 31;

	t83 = (x4381==((x4382+x4383)>>x4384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4409 = 10682U;
	static int32_t x4410 = INT32_MAX;
	int64_t x4411 = -1LL;
	int32_t t84 = 311206;

	t84 = (x4409==((x4410+x4411)>>x4412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4525 = 6U;
	int8_t x4526 = 29;
	int16_t x4528 = 1;
	static volatile int32_t t85 = -27409677;

	t85 = (x4525==((x4526+x4527)>>x4528));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4553 = 1;
	uint16_t x4554 = UINT16_MAX;
	int64_t x4555 = -1LL;
	uint8_t x4556 = 1U;
	int32_t t86 = 13;

	t86 = (x4553==((x4554+x4555)>>x4556));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x4577 = UINT8_MAX;
	static int16_t x4579 = 0;
	int32_t t87 = -34669112;

	t87 = (x4577==((x4578+x4579)>>x4580));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4665 = INT32_MIN;
	uint16_t x4666 = 1029U;
	uint8_t x4668 = 7U;
	int32_t t88 = 2047;

	t88 = (x4665==((x4666+x4667)>>x4668));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4693 = INT16_MIN;
	static volatile uint32_t x4694 = 2569737U;
	volatile int8_t x4696 = 1;
	static volatile int32_t t89 = 466653;

	t89 = (x4693==((x4694+x4695)>>x4696));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4709 = 42;

	t90 = (x4709==((x4710+x4711)>>x4712));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4725 = 1058U;
	uint16_t x4728 = 14U;
	int32_t t91 = -30521;

	t91 = (x4725==((x4726+x4727)>>x4728));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4801 = INT64_MIN;
	volatile uint64_t x4802 = 54393LLU;
	static int8_t x4803 = INT8_MIN;
	uint8_t x4804 = 47U;
	int32_t t92 = 3312356;

	t92 = (x4801==((x4802+x4803)>>x4804));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4874 = UINT64_MAX;
	int32_t x4875 = -155504;
	volatile int8_t x4876 = 54;
	volatile int32_t t93 = 12042;

	t93 = (x4873==((x4874+x4875)>>x4876));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4929 = 2LLU;
	uint8_t x4930 = UINT8_MAX;
	int8_t x4931 = 0;
	uint8_t x4932 = 1U;
	int32_t t94 = -15920921;

	t94 = (x4929==((x4930+x4931)>>x4932));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4957 = UINT32_MAX;
	int8_t x4958 = 14;
	volatile uint8_t x4959 = 19U;
	volatile int32_t t95 = 3812195;

	t95 = (x4957==((x4958+x4959)>>x4960));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4969 = INT8_MIN;
	volatile int8_t x4971 = -1;
	static volatile int32_t t96 = -5;

	t96 = (x4969==((x4970+x4971)>>x4972));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5021 = INT32_MIN;
	int8_t x5022 = 1;
	static uint8_t x5024 = 9U;
	volatile int32_t t97 = 1;

	t97 = (x5021==((x5022+x5023)>>x5024));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5101 = INT32_MIN;
	uint64_t x5102 = 4385353115288271241LLU;
	uint8_t x5104 = 19U;
	int32_t t98 = 402;

	t98 = (x5101==((x5102+x5103)>>x5104));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5113 = 1;
	uint16_t x5114 = 123U;
	uint32_t x5115 = 4091U;
	int32_t t99 = -95;

	t99 = (x5113==((x5114+x5115)>>x5116));

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

