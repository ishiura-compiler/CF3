#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x38 = 5015369755981LLU;
uint32_t x40 = 0U;
int8_t x190 = -1;
int32_t x205 = 105052;
int32_t x206 = INT32_MAX;
static volatile uint8_t x208 = 15U;
volatile int16_t x309 = INT16_MAX;
volatile uint64_t t3 = 4185313077239873LLU;
uint8_t x469 = UINT8_MAX;
uint32_t x471 = 46267629U;
int8_t x611 = INT8_MAX;
volatile uint16_t x612 = 0U;
static uint32_t x703 = UINT32_MAX;
int64_t t9 = -276LL;
volatile int16_t x728 = 1;
static uint64_t t10 = 32LLU;
int32_t x759 = INT32_MAX;
static int64_t x790 = -1LL;
uint8_t x806 = UINT8_MAX;
int16_t x808 = 11;
uint32_t t14 = 284372414U;
int64_t x851 = 3256010120543LL;
static uint8_t x913 = 14U;
int32_t x950 = INT32_MAX;
uint8_t x952 = 8U;
static int16_t x1055 = 1;
int8_t x1056 = 0;
int8_t x1184 = 3;
int64_t t21 = -312984LL;
volatile uint32_t t26 = 1U;
static uint16_t x1542 = 0U;
uint16_t x1628 = 1U;
uint16_t x1642 = 10U;
int32_t x1685 = 42653508;
int32_t t30 = -257939;
uint16_t x1833 = 515U;
int8_t x1836 = 50;
int16_t x1936 = 1;
uint32_t x1981 = UINT32_MAX;
volatile uint32_t x2002 = 3996U;
int64_t x2003 = INT64_MAX;
int8_t x2159 = INT8_MAX;
uint32_t x2160 = 0U;
int8_t x2463 = 12;
int64_t x2885 = INT64_MIN;
volatile uint64_t x2887 = UINT64_MAX;
int8_t x3002 = INT8_MIN;
volatile uint16_t x3045 = UINT16_MAX;
static uint64_t x3046 = 1923617340639738727LLU;
static int16_t x3205 = INT16_MIN;
int16_t x3206 = INT16_MIN;
int32_t t42 = -16259137;
volatile int32_t x3584 = 1;
volatile int16_t x3595 = INT16_MAX;
static volatile int64_t t46 = -452LL;
uint8_t x3864 = 0U;
uint64_t t48 = 82400184580724866LLU;
int32_t x4173 = -1;
uint32_t x4176 = 0U;
volatile int32_t t52 = -1616350;
int16_t x4230 = INT16_MIN;
uint32_t x4231 = 7482U;
int16_t x4293 = INT16_MIN;
volatile uint32_t t54 = 1750U;
uint16_t x4357 = UINT16_MAX;
uint16_t x4688 = 1U;
volatile int32_t x4821 = -825866;
int64_t x4823 = INT64_MAX;
uint8_t x4832 = 0U;
int16_t x5145 = INT16_MIN;
uint32_t x5147 = 31852U;
uint64_t x5225 = 1609512719744LLU;
int32_t x5382 = INT32_MIN;
volatile int64_t t63 = -1LL;
volatile int32_t x5423 = INT32_MAX;
uint8_t x5424 = 27U;
uint8_t x5779 = UINT8_MAX;
int32_t t65 = -190540;
static int16_t x5917 = INT16_MIN;
int16_t x5918 = 15218;
int64_t t67 = -2404316392059LL;
volatile uint16_t x5952 = 1U;
uint64_t x5966 = 60225340330284LLU;
volatile uint64_t t71 = 0LLU;
volatile int32_t t72 = -7808672;
static int64_t x6022 = INT64_MIN;
volatile uint64_t t73 = 19448408255644LLU;
int16_t x6101 = INT16_MAX;
int64_t x6102 = -1LL;
int64_t x6103 = 206859356260552266LL;
uint8_t x6104 = 1U;
uint32_t x6107 = UINT32_MAX;
int16_t x6337 = INT16_MIN;
static int64_t x6530 = -1LL;
volatile int32_t x6531 = 84937;
uint16_t x6532 = 9U;
int32_t t79 = 443;
uint16_t x6627 = 39U;
uint32_t x6858 = UINT32_MAX;
uint64_t t81 = 38034016854637LLU;
uint32_t x7001 = 3069162U;
uint32_t x7390 = 993763U;
uint16_t x7391 = 7176U;
uint8_t x7429 = 17U;
int8_t x7431 = INT8_MAX;
static int32_t t87 = 5560351;
int64_t t89 = 11068606313534786LL;
volatile int16_t x7890 = 0;
static int16_t x7892 = 1;
uint8_t x8009 = 111U;
int32_t x8103 = INT32_MAX;
uint32_t x8341 = UINT32_MAX;
volatile uint8_t x8344 = 4U;
static int64_t x8394 = INT64_MIN;


void f0(void) {
	int32_t x37 = INT32_MAX;
	int16_t x39 = 10;
	uint64_t t0 = 83006281433LLU;

	t0 = ((x37-x38)/(x39>>x40));

	if (t0 != 1844673906048727928LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x189 = INT16_MAX;
	int8_t x191 = INT8_MAX;
	int16_t x192 = 1;
	static volatile int32_t t1 = -689;

	t1 = ((x189-x190)/(x191>>x192));

	if (t1 != 520) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x207 = INT32_MAX;
	int32_t t2 = -941;

	t2 = ((x205-x206)/(x207>>x208));

	if (t2 != -32766) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x310 = 1128293LLU;
	static uint32_t x311 = 127745199U;
	int16_t x312 = 13;

	t3 = ((x309-x310)/(x311>>x312));

	if (t3 != 1183014434278744LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x385 = UINT16_MAX;
	static int64_t x386 = -1LL;
	int64_t x387 = INT64_MAX;
	uint16_t x388 = 0U;
	volatile int64_t t4 = 59592249410719LL;

	t4 = ((x385-x386)/(x387>>x388));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	int32_t x391 = 3967;
	int8_t x392 = 1;
	volatile uint64_t t5 = 87342401830LLU;

	t5 = ((x389-x390)/(x391>>x392));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x425 = 21;
	static volatile int32_t x426 = -1;
	int8_t x427 = 1;
	static uint32_t x428 = 0U;
	int32_t t6 = -1;

	t6 = ((x425-x426)/(x427>>x428));

	if (t6 != 22) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x470 = 11U;
	uint16_t x472 = 1U;
	volatile uint32_t t7 = 32469U;

	t7 = ((x469-x470)/(x471>>x472));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x609 = INT16_MAX;
	static int8_t x610 = INT8_MAX;
	int32_t t8 = -2;

	t8 = ((x609-x610)/(x611>>x612));

	if (t8 != 257) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x701 = -3;
	static volatile int64_t x702 = 228242769695665072LL;
	static volatile int32_t x704 = 7;

	t9 = ((x701-x702)/(x703>>x704));

	if (t9 != -6802164807LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x725 = 31U;
	volatile uint64_t x726 = UINT64_MAX;
	static uint16_t x727 = UINT16_MAX;

	t10 = ((x725-x726)/(x727>>x728));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x757 = -1LL;
	int8_t x758 = INT8_MIN;
	int16_t x760 = 6;
	int64_t t11 = 230513841739467LL;

	t11 = ((x757-x758)/(x759>>x760));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x789 = -7;
	static int64_t x791 = 2592485148LL;
	int8_t x792 = 17;
	static int64_t t12 = 2377550644087LL;

	t12 = ((x789-x790)/(x791>>x792));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x805 = INT32_MAX;
	uint64_t x807 = 404759LLU;
	uint64_t t13 = 3081636181329289387LLU;

	t13 = ((x805-x806)/(x807>>x808));

	if (t13 != 10900930LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x817 = -1;
	volatile uint32_t x818 = 144052U;
	uint32_t x819 = 52119U;
	volatile uint64_t x820 = 1LLU;

	t14 = ((x817-x818)/(x819>>x820));

	if (t14 != 164811U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x849 = UINT64_MAX;
	volatile int64_t x850 = 5292899598132LL;
	int16_t x852 = 0;
	static uint64_t t15 = 48120150655980730LLU;

	t15 = ((x849-x850)/(x851>>x852));

	if (t15 != 5665442LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x914 = 2290771LL;
	uint64_t x915 = UINT64_MAX;
	volatile uint16_t x916 = 4U;
	static volatile uint64_t t16 = 7833706LLU;

	t16 = ((x913-x914)/(x915>>x916));

	if (t16 != 15LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x945 = 532976634795990358LL;
	uint8_t x946 = UINT8_MAX;
	uint16_t x947 = 23U;
	static uint8_t x948 = 1U;
	static int64_t t17 = 2906357LL;

	t17 = ((x945-x946)/(x947>>x948));

	if (t17 != 48452421345090009LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x949 = 10961LLU;
	static int64_t x951 = INT64_MAX;
	volatile uint64_t t18 = 118949LLU;

	t18 = ((x949-x950)/(x951>>x952));

	if (t18 != 511LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1053 = 6;
	uint16_t x1054 = UINT16_MAX;
	static int32_t t19 = -779449;

	t19 = ((x1053-x1054)/(x1055>>x1056));

	if (t19 != -65529) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1165 = -1347407;
	uint16_t x1166 = UINT16_MAX;
	uint32_t x1167 = 3436U;
	static int16_t x1168 = 1;
	volatile uint32_t t20 = 874U;

	t20 = ((x1165-x1166)/(x1167>>x1168));

	if (t20 != 2499158U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1181 = INT64_MAX;
	int8_t x1182 = 1;
	volatile int16_t x1183 = INT16_MAX;

	t21 = ((x1181-x1182)/(x1183>>x1184));

	if (t21 != 2252349703749640LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1333 = INT8_MIN;
	volatile int64_t x1334 = -1LL;
	volatile uint8_t x1335 = 50U;
	int32_t x1336 = 2;
	volatile int64_t t22 = 10692788411985558LL;

	t22 = ((x1333-x1334)/(x1335>>x1336));

	if (t22 != -10LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1377 = INT64_MIN;
	int16_t x1378 = -2;
	uint32_t x1379 = 158519252U;
	volatile uint8_t x1380 = 21U;
	int64_t t23 = 1805LL;

	t23 = ((x1377-x1378)/(x1379>>x1380));

	if (t23 != -122978293824730344LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1445 = INT32_MIN;
	static uint32_t x1446 = 680U;
	int16_t x1447 = 1809;
	volatile int16_t x1448 = 10;
	uint32_t t24 = 12U;

	t24 = ((x1445-x1446)/(x1447>>x1448));

	if (t24 != 2147482968U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1449 = 1993894992258LLU;
	uint16_t x1450 = UINT16_MAX;
	volatile int64_t x1451 = INT64_MAX;
	volatile int32_t x1452 = 8;
	volatile uint64_t t25 = 6LLU;

	t25 = ((x1449-x1450)/(x1451>>x1452));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1485 = 6672U;
	int32_t x1486 = INT32_MIN;
	uint32_t x1487 = 22U;
	volatile int8_t x1488 = 0;

	t26 = ((x1485-x1486)/(x1487>>x1488));

	if (t26 != 97613196U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1541 = INT8_MIN;
	int64_t x1543 = INT64_MAX;
	int8_t x1544 = 46;
	volatile int64_t t27 = -2053LL;

	t27 = ((x1541-x1542)/(x1543>>x1544));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1625 = 3;
	uint64_t x1626 = 12228173447424LLU;
	volatile uint32_t x1627 = 47666063U;
	volatile uint64_t t28 = 7219993742LLU;

	t28 = ((x1625-x1626)/(x1627>>x1628));

	if (t28 != 773998567179LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1641 = -1;
	int32_t x1643 = 326;
	uint8_t x1644 = 2U;
	volatile int32_t t29 = 233326841;

	t29 = ((x1641-x1642)/(x1643>>x1644));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1686 = 787;
	int32_t x1687 = INT32_MAX;
	volatile uint16_t x1688 = 7U;

	t30 = ((x1685-x1686)/(x1687>>x1688));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1834 = -141538LL;
	uint64_t x1835 = UINT64_MAX;
	uint64_t t31 = 174348816109352569LLU;

	t31 = ((x1833-x1834)/(x1835>>x1836));

	if (t31 != 8LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1893 = INT64_MIN;
	static int16_t x1894 = 0;
	volatile uint8_t x1895 = UINT8_MAX;
	static uint16_t x1896 = 2U;
	int64_t t32 = 104056999740LL;

	t32 = ((x1893-x1894)/(x1895>>x1896));

	if (t32 != -146402730743726600LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1933 = UINT64_MAX;
	static int64_t x1934 = INT64_MIN;
	uint16_t x1935 = UINT16_MAX;
	volatile uint64_t t33 = 281LLU;

	t33 = ((x1933-x1934)/(x1935>>x1936));

	if (t33 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1982 = 118U;
	int32_t x1983 = 65841232;
	uint8_t x1984 = 1U;
	uint32_t t34 = 1534U;

	t34 = ((x1981-x1982)/(x1983>>x1984));

	if (t34 != 130U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2001 = -1LL;
	int8_t x2004 = 1;
	static volatile int64_t t35 = -123361LL;

	t35 = ((x2001-x2002)/(x2003>>x2004));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x2157 = INT8_MIN;
	uint8_t x2158 = 1U;
	static int32_t t36 = 44121;

	t36 = ((x2157-x2158)/(x2159>>x2160));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2461 = -1;
	int32_t x2462 = INT32_MIN;
	uint64_t x2464 = 0LLU;
	volatile int32_t t37 = -774;

	t37 = ((x2461-x2462)/(x2463>>x2464));

	if (t37 != 178956970) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2609 = 25574U;
	uint8_t x2610 = 83U;
	static uint64_t x2611 = 1898LLU;
	int16_t x2612 = 2;
	uint64_t t38 = 57032LLU;

	t38 = ((x2609-x2610)/(x2611>>x2612));

	if (t38 != 53LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x2886 = -1;
	uint8_t x2888 = 59U;
	volatile uint64_t t39 = 25LLU;

	t39 = ((x2885-x2886)/(x2887>>x2888));

	if (t39 != 297528130221121800LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x3001 = 0;
	uint8_t x3003 = UINT8_MAX;
	int32_t x3004 = 1;
	volatile int32_t t40 = -4203205;

	t40 = ((x3001-x3002)/(x3003>>x3004));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x3047 = 2004050857760LLU;
	volatile int32_t x3048 = 1;
	static volatile uint64_t t41 = 228094300616230LLU;

	t41 = ((x3045-x3046)/(x3047>>x3048));

	if (t41 != 16489727LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3207 = 237;
	volatile int16_t x3208 = 6;

	t42 = ((x3205-x3206)/(x3207>>x3208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3377 = INT16_MIN;
	int8_t x3378 = -1;
	uint64_t x3379 = 315478637145355006LLU;
	uint8_t x3380 = 41U;
	volatile uint64_t t43 = 29213011976631LLU;

	t43 = ((x3377-x3378)/(x3379>>x3380));

	if (t43 != 128581892708987LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3385 = -3178334;
	volatile int32_t x3386 = INT32_MIN;
	int32_t x3387 = INT32_MAX;
	volatile uint16_t x3388 = 0U;
	static int32_t t44 = -98356687;

	t44 = ((x3385-x3386)/(x3387>>x3388));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3581 = -1;
	volatile uint32_t x3582 = UINT32_MAX;
	uint32_t x3583 = 6178U;
	volatile uint32_t t45 = 5U;

	t45 = ((x3581-x3582)/(x3583>>x3584));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3593 = UINT32_MAX;
	int64_t x3594 = INT64_MAX;
	volatile uint8_t x3596 = 4U;

	t46 = ((x3593-x3594)/(x3595>>x3596));

	if (t46 != -4505799722794239LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3649 = INT32_MIN;
	uint64_t x3650 = 676530053461087156LLU;
	static int16_t x3651 = INT16_MAX;
	uint32_t x3652 = 12U;
	static volatile uint64_t t47 = 4238460410493LLU;

	t47 = ((x3649-x3650)/(x3651>>x3652));

	if (t47 != 2538602002585854401LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x3861 = -213;
	volatile int64_t x3862 = -304806748810LL;
	uint64_t x3863 = 33LLU;

	t48 = ((x3861-x3862)/(x3863>>x3864));

	if (t48 != 9236568139LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x3965 = 1U;
	uint16_t x3966 = UINT16_MAX;
	int64_t x3967 = 13373045726LL;
	uint32_t x3968 = 7U;
	static volatile int64_t t49 = 1LL;

	t49 = ((x3965-x3966)/(x3967>>x3968));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3989 = INT64_MIN;
	int8_t x3990 = -1;
	volatile uint32_t x3991 = 169369519U;
	uint8_t x3992 = 3U;
	static int64_t t50 = -1LL;

	t50 = ((x3989-x3990)/(x3991>>x3992));

	if (t50 != -435656780394LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x4174 = INT32_MIN;
	int16_t x4175 = INT16_MAX;
	volatile int32_t t51 = 18196543;

	t51 = ((x4173-x4174)/(x4175>>x4176));

	if (t51 != 65538) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x4205 = -1;
	int32_t x4206 = INT32_MAX;
	int32_t x4207 = 976701266;
	uint16_t x4208 = 6U;

	t52 = ((x4205-x4206)/(x4207>>x4208));

	if (t52 != -140) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x4229 = 856U;
	uint8_t x4232 = 12U;
	volatile uint32_t t53 = 378512659U;

	t53 = ((x4229-x4230)/(x4231>>x4232));

	if (t53 != 33624U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x4294 = INT32_MIN;
	uint32_t x4295 = UINT32_MAX;
	int16_t x4296 = 0;

	t54 = ((x4293-x4294)/(x4295>>x4296));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x4321 = INT16_MAX;
	int32_t x4322 = -1;
	uint16_t x4323 = UINT16_MAX;
	int32_t x4324 = 3;
	static volatile int32_t t55 = 10829;

	t55 = ((x4321-x4322)/(x4323>>x4324));

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4358 = UINT8_MAX;
	int32_t x4359 = INT32_MAX;
	static int8_t x4360 = 9;
	int32_t t56 = 2587319;

	t56 = ((x4357-x4358)/(x4359>>x4360));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4577 = INT32_MIN;
	uint64_t x4578 = 192680754014524399LLU;
	int16_t x4579 = 5;
	int32_t x4580 = 0;
	volatile uint64_t t57 = 258742LLU;

	t57 = ((x4577-x4578)/(x4579>>x4580));

	if (t57 != 3650812663509508713LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x4685 = 565U;
	uint8_t x4686 = 55U;
	uint16_t x4687 = 30503U;
	volatile int32_t t58 = 2955;

	t58 = ((x4685-x4686)/(x4687>>x4688));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x4822 = 20223026U;
	int16_t x4824 = 42;
	volatile int64_t t59 = 5656966825LL;

	t59 = ((x4821-x4822)/(x4823>>x4824));

	if (t59 != 2037LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4829 = 1U;
	int8_t x4830 = -1;
	uint32_t x4831 = 210U;
	uint32_t t60 = 281092115U;

	t60 = ((x4829-x4830)/(x4831>>x4832));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x5146 = 1U;
	uint8_t x5148 = 0U;
	volatile uint32_t t61 = 1556U;

	t61 = ((x5145-x5146)/(x5147>>x5148));

	if (t61 != 134840U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x5226 = -1LL;
	volatile uint32_t x5227 = 112U;
	int16_t x5228 = 0;
	volatile uint64_t t62 = 0LLU;

	t62 = ((x5225-x5226)/(x5227>>x5228));

	if (t62 != 14370649283LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x5381 = UINT32_MAX;
	int64_t x5383 = INT64_MAX;
	uint8_t x5384 = 3U;

	t63 = ((x5381-x5382)/(x5383>>x5384));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x5421 = 0U;
	static int32_t x5422 = 2153;
	volatile int32_t t64 = -104;

	t64 = ((x5421-x5422)/(x5423>>x5424));

	if (t64 != -143) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x5777 = UINT16_MAX;
	static int16_t x5778 = -561;
	uint8_t x5780 = 7U;

	t65 = ((x5777-x5778)/(x5779>>x5780));

	if (t65 != 66096) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x5833 = 31U;
	uint64_t x5834 = 173326LLU;
	int8_t x5835 = INT8_MAX;
	static volatile int16_t x5836 = 5;
	volatile uint64_t t66 = 4842408LLU;

	t66 = ((x5833-x5834)/(x5835>>x5836));

	if (t66 != 6148914691236459440LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x5919 = 105642922LL;
	uint16_t x5920 = 5U;

	t67 = ((x5917-x5918)/(x5919>>x5920));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x5945 = UINT64_MAX;
	int16_t x5946 = INT16_MIN;
	static uint16_t x5947 = UINT16_MAX;
	uint16_t x5948 = 4U;
	volatile uint64_t t68 = 22081484LLU;

	t68 = ((x5945-x5946)/(x5947>>x5948));

	if (t68 != 8LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x5949 = 7;
	static uint64_t x5950 = UINT64_MAX;
	int16_t x5951 = INT16_MAX;
	volatile uint64_t t69 = 29107LLU;

	t69 = ((x5949-x5950)/(x5951>>x5952));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x5965 = 0LL;
	uint64_t x5967 = 865533585310852838LLU;
	static volatile uint8_t x5968 = 0U;
	volatile uint64_t t70 = 1224LLU;

	t70 = ((x5965-x5966)/(x5967>>x5968));

	if (t70 != 21LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x5985 = -1;
	int16_t x5986 = 1;
	volatile uint64_t x5987 = UINT64_MAX;
	uint8_t x5988 = 1U;

	t71 = ((x5985-x5986)/(x5987>>x5988));

	if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5989 = 1;
	volatile int8_t x5990 = -1;
	int32_t x5991 = 357;
	static uint8_t x5992 = 0U;

	t72 = ((x5989-x5990)/(x5991>>x5992));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x6021 = 26110918232876757LLU;
	volatile uint8_t x6023 = UINT8_MAX;
	static uint64_t x6024 = 7LLU;

	t73 = ((x6021-x6022)/(x6023>>x6024));

	if (t73 != 9249482955087652565LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x6045 = INT32_MAX;
	volatile int8_t x6046 = 14;
	uint32_t x6047 = 54774915U;
	uint16_t x6048 = 14U;
	volatile uint32_t t74 = 240863U;

	t74 = ((x6045-x6046)/(x6047>>x6048));

	if (t74 != 642382U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t t75 = -17966172716LL;

	t75 = ((x6101-x6102)/(x6103>>x6104));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x6105 = UINT64_MAX;
	uint64_t x6106 = 55576LLU;
	static int16_t x6108 = 1;
	static uint64_t t76 = 15150166120024LLU;

	t76 = ((x6105-x6106)/(x6107>>x6108));

	if (t76 != 8589934595LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x6338 = UINT64_MAX;
	uint32_t x6339 = 28667498U;
	uint64_t x6340 = 3LLU;
	uint64_t t77 = 200301151836415713LLU;

	t77 = ((x6337-x6338)/(x6339>>x6340));

	if (t77 != 5147779652247LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x6529 = -43;
	int64_t t78 = -9LL;

	t78 = ((x6529-x6530)/(x6531>>x6532));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x6565 = INT16_MIN;
	volatile uint8_t x6566 = UINT8_MAX;
	int32_t x6567 = INT32_MAX;
	volatile int8_t x6568 = 0;

	t79 = ((x6565-x6566)/(x6567>>x6568));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x6625 = -80332151230082LL;
	volatile uint32_t x6626 = 380471984U;
	uint32_t x6628 = 0U;
	int64_t t80 = 1901939348LL;

	t80 = ((x6625-x6626)/(x6627>>x6628));

	if (t80 != -2059808505181LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x6857 = INT16_MAX;
	static uint64_t x6859 = 114562924LLU;
	volatile uint16_t x6860 = 1U;

	t81 = ((x6857-x6858)/(x6859>>x6860));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x7002 = UINT8_MAX;
	int32_t x7003 = INT32_MAX;
	int8_t x7004 = 10;
	volatile uint32_t t82 = 4U;

	t82 = ((x7001-x7002)/(x7003>>x7004));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x7045 = INT8_MIN;
	static volatile uint64_t x7046 = UINT64_MAX;
	volatile int64_t x7047 = INT64_MAX;
	static uint8_t x7048 = 4U;
	static uint64_t t83 = 110610LLU;

	t83 = ((x7045-x7046)/(x7047>>x7048));

	if (t83 != 31LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x7137 = INT32_MAX;
	int16_t x7138 = 6;
	static volatile uint16_t x7139 = UINT16_MAX;
	int8_t x7140 = 0;
	static volatile int32_t t84 = 583;

	t84 = ((x7137-x7138)/(x7139>>x7140));

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x7389 = 35U;
	static int16_t x7392 = 1;
	volatile uint32_t t85 = 1551960982U;

	t85 = ((x7389-x7390)/(x7391>>x7392));

	if (t85 != 1196759U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x7430 = INT16_MIN;
	static int32_t x7432 = 2;
	volatile int32_t t86 = -273861;

	t86 = ((x7429-x7430)/(x7431>>x7432));

	if (t86 != 1057) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x7441 = 5191U;
	uint16_t x7442 = 31U;
	uint8_t x7443 = 20U;
	int8_t x7444 = 1;

	t87 = ((x7441-x7442)/(x7443>>x7444));

	if (t87 != 516) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x7469 = INT16_MIN;
	static int32_t x7470 = -512;
	volatile int64_t x7471 = INT64_MAX;
	uint8_t x7472 = 6U;
	volatile int64_t t88 = 14LL;

	t88 = ((x7469-x7470)/(x7471>>x7472));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x7761 = 15;
	int64_t x7762 = -2275627LL;
	uint16_t x7763 = UINT16_MAX;
	uint16_t x7764 = 7U;

	t89 = ((x7761-x7762)/(x7763>>x7764));

	if (t89 != 4453LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x7889 = 1;
	static volatile uint64_t x7891 = 2681LLU;
	uint64_t t90 = 2292640252LLU;

	t90 = ((x7889-x7890)/(x7891>>x7892));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x7921 = -1;
	volatile int8_t x7922 = 8;
	int8_t x7923 = INT8_MAX;
	uint64_t x7924 = 6LLU;
	volatile int32_t t91 = 20;

	t91 = ((x7921-x7922)/(x7923>>x7924));

	if (t91 != -9) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x7949 = -1LL;
	int16_t x7950 = -1;
	uint64_t x7951 = UINT64_MAX;
	uint32_t x7952 = 3U;
	uint64_t t92 = 17102853641267684LLU;

	t92 = ((x7949-x7950)/(x7951>>x7952));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x8010 = 165;
	static uint64_t x8011 = UINT64_MAX;
	static uint16_t x8012 = 2U;
	static uint64_t t93 = 3295445396936LLU;

	t93 = ((x8009-x8010)/(x8011>>x8012));

	if (t93 != 3LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x8101 = -1;
	int8_t x8102 = -1;
	static uint8_t x8104 = 6U;
	int32_t t94 = 224;

	t94 = ((x8101-x8102)/(x8103>>x8104));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x8229 = 2071810;
	volatile int8_t x8230 = INT8_MIN;
	int64_t x8231 = 673554215876884LL;
	uint8_t x8232 = 1U;
	int64_t t95 = 997713846813LL;

	t95 = ((x8229-x8230)/(x8231>>x8232));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x8342 = 101U;
	int16_t x8343 = INT16_MAX;
	volatile uint32_t t96 = 145849U;

	t96 = ((x8341-x8342)/(x8343>>x8344));

	if (t96 != 2098176U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x8393 = 156048LLU;
	uint16_t x8395 = UINT16_MAX;
	int32_t x8396 = 1;
	uint64_t t97 = 239768832LLU;

	t97 = ((x8393-x8394)/(x8395>>x8396));

	if (t97 != 281483566907404LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x8425 = -1;
	static uint32_t x8426 = 2065736638U;
	uint16_t x8427 = 178U;
	static int8_t x8428 = 0;
	volatile uint32_t t98 = 143510048U;

	t98 = ((x8425-x8426)/(x8427>>x8428));

	if (t98 != 12523767U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x8437 = 846203LLU;
	static volatile int16_t x8438 = -1983;
	uint32_t x8439 = UINT32_MAX;
	uint16_t x8440 = 0U;
	volatile uint64_t t99 = 65643541424071230LLU;

	t99 = ((x8437-x8438)/(x8439>>x8440));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

