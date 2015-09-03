#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 918218453196LLU;
volatile uint16_t x88 = 11U;
uint64_t x148 = 1LLU;
int16_t x190 = INT16_MAX;
int8_t x191 = INT8_MAX;
static int8_t x339 = INT8_MIN;
volatile int64_t x405 = -1LL;
static volatile int32_t x491 = 3134973;
int32_t x492 = 0;
uint64_t t9 = 1878441LLU;
int16_t x498 = INT16_MAX;
volatile uint64_t x519 = 25LLU;
int8_t x640 = 4;
int16_t x659 = INT16_MAX;
int16_t x660 = 0;
volatile int32_t t14 = 178955;
int16_t x898 = -1;
volatile uint64_t t18 = 10LLU;
uint32_t x1071 = UINT32_MAX;
static volatile uint16_t x1141 = 245U;
int64_t x1142 = -1LL;
int64_t t20 = -714613179LL;
uint64_t x1203 = 0LLU;
int64_t x1241 = INT64_MIN;
int16_t x1266 = INT16_MIN;
int32_t t25 = -3;
volatile int64_t t27 = -18326511LL;
volatile int64_t t29 = -585LL;
volatile int8_t x1502 = 3;
uint16_t x1503 = 7U;
uint64_t x1589 = 1611844671LLU;
uint8_t x1640 = 1U;
int64_t t33 = 5545564295059LL;
uint64_t x1654 = UINT64_MAX;
static volatile uint64_t t34 = 99341932629751461LLU;
volatile int32_t t35 = -1;
int8_t x1701 = INT8_MIN;
uint16_t x1702 = 7899U;
uint16_t x1703 = 20956U;
int32_t t36 = -4564241;
uint16_t x1810 = 14U;
uint16_t x1844 = 8U;
uint16_t x2004 = 3U;
static int32_t x2087 = INT32_MIN;
volatile int16_t x2141 = INT16_MIN;
int8_t x2356 = 3;
static uint16_t x2359 = UINT16_MAX;
volatile int64_t x2508 = 0LL;
volatile uint8_t x2543 = UINT8_MAX;
int32_t t48 = 1;
uint8_t x2572 = 1U;
int32_t x2703 = -49640;
uint8_t x2704 = 5U;
int32_t x2881 = -1;
uint32_t x2882 = 102939384U;
uint32_t t56 = 20646358U;
volatile uint64_t t57 = 10265176290LLU;
volatile int8_t x3114 = INT8_MIN;
int32_t x3129 = INT32_MIN;
static int64_t x3145 = INT64_MIN;
int32_t x3403 = 1;
int32_t t63 = 929389;
uint8_t x3450 = 3U;
static uint64_t t65 = 80640136910LLU;
uint32_t x3485 = 1860494U;
volatile uint64_t t67 = 66411107861836LLU;
uint32_t x3750 = 31005390U;
volatile uint64_t t69 = 241LLU;
static volatile uint16_t x4350 = UINT16_MAX;
int64_t x4529 = 349439LL;
uint64_t x4530 = UINT64_MAX;
int32_t x4531 = INT32_MIN;
uint8_t x4532 = 5U;
static volatile uint32_t x4558 = 6117451U;
uint16_t x4584 = 4U;
uint64_t x4688 = 27LLU;
uint8_t x4786 = 26U;
int32_t t77 = -1588;
int8_t x4889 = INT8_MAX;
int64_t x4890 = 1019LL;
int32_t x4891 = INT32_MAX;
volatile int16_t x5003 = 4042;
uint16_t x5058 = 2U;
int64_t x5059 = 849LL;
volatile int64_t t82 = -264955704781869816LL;
volatile int64_t x5082 = 4349254217106808262LL;
uint8_t x5083 = UINT8_MAX;
uint64_t x5091 = UINT64_MAX;
uint64_t t84 = 0LLU;
int64_t x5129 = 1615004507387LL;
int8_t x5132 = 9;
int16_t x5297 = INT16_MAX;
volatile int32_t t89 = 517;
int64_t x5371 = INT64_MAX;
uint8_t x5384 = 0U;
volatile int32_t x5547 = 0;
int64_t x5661 = INT64_MIN;
uint32_t x5663 = 179U;
static uint8_t x5664 = 17U;
int16_t x5803 = 10556;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	static int64_t x3 = INT64_MIN;
	uint32_t x4 = 1U;
	static uint64_t t0 = 36LLU;

	t0 = (x1/((x2+x3)<<x4));

	if (t0 != 5022427LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x69 = 49178572U;
	uint64_t x70 = 351473205828295LLU;
	int8_t x71 = -1;
	int8_t x72 = 0;
	static uint64_t t1 = 643LLU;

	t1 = (x69/((x70+x71)<<x72));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x85 = INT8_MIN;
	uint32_t x86 = UINT32_MAX;
	uint8_t x87 = UINT8_MAX;
	volatile uint32_t t2 = 6U;

	t2 = (x85/((x86+x87)<<x88));

	if (t2 != 8256U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x145 = UINT8_MAX;
	uint32_t x146 = 216U;
	static volatile uint64_t x147 = 3162067LLU;
	static uint64_t t3 = 1291675LLU;

	t3 = (x145/((x146+x147)<<x148));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x181 = INT8_MAX;
	static uint32_t x182 = 43U;
	int32_t x183 = 70;
	uint64_t x184 = 0LLU;
	uint32_t t4 = 409915U;

	t4 = (x181/((x182+x183)<<x184));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x189 = INT8_MAX;
	uint64_t x192 = 5LLU;
	volatile int32_t t5 = 222602228;

	t5 = (x189/((x190+x191)<<x192));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x329 = 46U;
	static uint64_t x330 = UINT64_MAX;
	int8_t x331 = -1;
	uint8_t x332 = 7U;
	volatile uint64_t t6 = 1906844888303936LLU;

	t6 = (x329/((x330+x331)<<x332));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x337 = 1;
	volatile uint64_t x338 = 4126LLU;
	volatile int16_t x340 = 24;
	static volatile uint64_t t7 = 103423LLU;

	t7 = (x337/((x338+x339)<<x340));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x406 = 3U;
	static int8_t x407 = 50;
	int32_t x408 = 1;
	volatile int64_t t8 = -210185926LL;

	t8 = (x405/((x406+x407)<<x408));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x489 = UINT64_MAX;
	uint32_t x490 = 29702U;

	t9 = (x489/((x490+x491)<<x492));

	if (t9 != 5828953707318LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x497 = UINT32_MAX;
	uint32_t x499 = 28271U;
	uint32_t x500 = 24U;
	uint32_t t10 = 1U;

	t10 = (x497/((x498+x499)<<x500));

	if (t10 != 2U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x501 = 2839U;
	uint64_t x502 = 22103053101346LLU;
	static int32_t x503 = 355198074;
	int8_t x504 = 21;
	static uint64_t t11 = 7442490304548LLU;

	t11 = (x501/((x502+x503)<<x504));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x517 = 0U;
	int8_t x518 = INT8_MAX;
	uint32_t x520 = 45U;
	uint64_t t12 = 1837LLU;

	t12 = (x517/((x518+x519)<<x520));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x637 = INT32_MAX;
	volatile int64_t x638 = 4975682652993LL;
	int64_t x639 = 1011987104874521LL;
	int64_t t13 = 23778LL;

	t13 = (x637/((x638+x639)<<x640));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x657 = INT8_MIN;
	int16_t x658 = INT16_MAX;

	t14 = (x657/((x658+x659)<<x660));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x685 = -1LL;
	uint64_t x686 = UINT64_MAX;
	int64_t x687 = 247043974LL;
	volatile uint16_t x688 = 10U;
	volatile uint64_t t15 = 96798531LLU;

	t15 = (x685/((x686+x687)<<x688));

	if (t15 != 72919805LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x705 = INT8_MIN;
	uint8_t x706 = UINT8_MAX;
	uint16_t x707 = 6U;
	static uint8_t x708 = 6U;
	volatile int32_t t16 = -1;

	t16 = (x705/((x706+x707)<<x708));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x773 = 7757520199944173LL;
	int32_t x774 = 5153265;
	volatile int32_t x775 = 1388646;
	int8_t x776 = 8;
	volatile int64_t t17 = -2LL;

	t17 = (x773/((x774+x775)<<x776));

	if (t17 != 4632104LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x897 = INT32_MIN;
	uint64_t x899 = 13568LLU;
	volatile uint32_t x900 = 6U;

	t18 = (x897/((x898+x899)<<x900));

	if (t18 != 21244960279955LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1069 = INT8_MIN;
	uint8_t x1070 = 4U;
	volatile uint8_t x1072 = 1U;
	uint32_t t19 = 907285501U;

	t19 = (x1069/((x1070+x1071)<<x1072));

	if (t19 != 715827861U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x1143 = 495U;
	uint8_t x1144 = 1U;

	t20 = (x1141/((x1142+x1143)<<x1144));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1201 = UINT32_MAX;
	uint64_t x1202 = 301617066562178486LLU;
	volatile int16_t x1204 = 2;
	volatile uint64_t t21 = 22928LLU;

	t21 = (x1201/((x1202+x1203)<<x1204));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1242 = 15929LL;
	uint8_t x1243 = 0U;
	uint8_t x1244 = 20U;
	int64_t t22 = -49LL;

	t22 = (x1241/((x1242+x1243)<<x1244));

	if (t22 != -552206229LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1265 = INT8_MIN;
	uint32_t x1267 = UINT32_MAX;
	volatile int8_t x1268 = 14;
	volatile uint32_t t23 = 30U;

	t23 = (x1265/((x1266+x1267)<<x1268));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x1293 = 52U;
	uint64_t x1294 = 700LLU;
	volatile int32_t x1295 = -1;
	uint8_t x1296 = 32U;
	volatile uint64_t t24 = 13953140185247199LLU;

	t24 = (x1293/((x1294+x1295)<<x1296));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1321 = UINT16_MAX;
	int32_t x1322 = 5;
	uint8_t x1323 = 4U;
	static uint8_t x1324 = 12U;

	t25 = (x1321/((x1322+x1323)<<x1324));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1325 = 3591U;
	static int8_t x1326 = INT8_MIN;
	volatile uint32_t x1327 = 1U;
	int16_t x1328 = 9;
	static uint32_t t26 = 3030823U;

	t26 = (x1325/((x1326+x1327)<<x1328));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1369 = -1LL;
	int8_t x1370 = -1;
	volatile uint8_t x1371 = 11U;
	static uint32_t x1372 = 5U;

	t27 = (x1369/((x1370+x1371)<<x1372));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1453 = 8235412U;
	int8_t x1454 = -1;
	uint8_t x1455 = UINT8_MAX;
	uint64_t x1456 = 0LLU;
	volatile uint32_t t28 = 463757U;

	t28 = (x1453/((x1454+x1455)<<x1456));

	if (t28 != 32422U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1481 = INT64_MAX;
	uint8_t x1482 = UINT8_MAX;
	int8_t x1483 = -1;
	static uint8_t x1484 = 14U;

	t29 = (x1481/((x1482+x1483)<<x1484));

	if (t29 != 2216338399296LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1501 = -1LL;
	static int64_t x1504 = 11LL;
	int64_t t30 = -17161677524430LL;

	t30 = (x1501/((x1502+x1503)<<x1504));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1590 = INT64_MIN;
	uint64_t x1591 = UINT64_MAX;
	int16_t x1592 = 0;
	volatile uint64_t t31 = 226179836LLU;

	t31 = (x1589/((x1590+x1591)<<x1592));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1597 = INT64_MIN;
	static int32_t x1598 = -1;
	volatile int8_t x1599 = INT8_MAX;
	uint8_t x1600 = 3U;
	volatile int64_t t32 = 3209380045LL;

	t32 = (x1597/((x1598+x1599)<<x1600));

	if (t32 != -9150170671482912LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1637 = 0;
	int8_t x1638 = INT8_MAX;
	volatile int64_t x1639 = -1LL;

	t33 = (x1637/((x1638+x1639)<<x1640));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1653 = INT64_MIN;
	uint8_t x1655 = 17U;
	volatile int8_t x1656 = 1;

	t34 = (x1653/((x1654+x1655)<<x1656));

	if (t34 != 288230376151711744LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1673 = -40;
	int8_t x1674 = 1;
	int16_t x1675 = INT16_MAX;
	uint16_t x1676 = 15U;

	t35 = (x1673/((x1674+x1675)<<x1676));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1704 = 1;

	t36 = (x1701/((x1702+x1703)<<x1704));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x1809 = -1;
	int8_t x1811 = -1;
	static int16_t x1812 = 0;
	int32_t t37 = 0;

	t37 = (x1809/((x1810+x1811)<<x1812));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1841 = INT64_MIN;
	uint32_t x1842 = 31885U;
	int32_t x1843 = INT32_MIN;
	static volatile int64_t t38 = 856930427LL;

	t38 = (x1841/((x1842+x1843)<<x1844));

	if (t38 != -1129960703119LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1973 = 82U;
	int32_t x1974 = -1;
	uint64_t x1975 = UINT64_MAX;
	static uint8_t x1976 = 2U;
	static uint64_t t39 = 915152211773LLU;

	t39 = (x1973/((x1974+x1975)<<x1976));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2001 = INT16_MAX;
	volatile int8_t x2002 = INT8_MIN;
	volatile int16_t x2003 = INT16_MAX;
	static int32_t t40 = 340332956;

	t40 = (x2001/((x2002+x2003)<<x2004));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2077 = INT64_MAX;
	static int16_t x2078 = -60;
	uint32_t x2079 = 492425U;
	uint16_t x2080 = 23U;
	int64_t t41 = -4571715382LL;

	t41 = (x2077/((x2078+x2079)<<x2080));

	if (t41 != 3301836720LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2085 = 17694031597205LLU;
	volatile uint64_t x2086 = 8LLU;
	int8_t x2088 = 2;
	uint64_t t42 = 75541206836655LLU;

	t42 = (x2085/((x2086+x2087)<<x2088));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2142 = 59;
	static uint32_t x2143 = UINT32_MAX;
	int64_t x2144 = 1LL;
	volatile uint32_t t43 = 1504758798U;

	t43 = (x2141/((x2142+x2143)<<x2144));

	if (t43 != 37025297U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2213 = UINT64_MAX;
	static uint64_t x2214 = UINT64_MAX;
	int64_t x2215 = -79LL;
	int32_t x2216 = 0;
	volatile uint64_t t44 = 64621992349333538LLU;

	t44 = (x2213/((x2214+x2215)<<x2216));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2353 = -1;
	static uint64_t x2354 = 324644984LLU;
	int32_t x2355 = INT32_MAX;
	volatile uint64_t t45 = 3768959566201647LLU;

	t45 = (x2353/((x2354+x2355)<<x2356));

	if (t45 != 932735853LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x2357 = 64638403132942576LLU;
	uint8_t x2358 = UINT8_MAX;
	uint8_t x2360 = 0U;
	uint64_t t46 = 18665247495LLU;

	t46 = (x2357/((x2358+x2359)<<x2360));

	if (t46 != 982495867653LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2505 = INT8_MIN;
	int32_t x2506 = INT32_MAX;
	int16_t x2507 = INT16_MIN;
	int32_t t47 = 6166;

	t47 = (x2505/((x2506+x2507)<<x2508));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2541 = 10337U;
	volatile int8_t x2542 = INT8_MAX;
	static int64_t x2544 = 1LL;

	t48 = (x2541/((x2542+x2543)<<x2544));

	if (t48 != 13) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2565 = INT8_MAX;
	int16_t x2566 = -1;
	uint16_t x2567 = UINT16_MAX;
	int32_t x2568 = 3;
	int32_t t49 = 421413;

	t49 = (x2565/((x2566+x2567)<<x2568));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2569 = 2U;
	uint64_t x2570 = UINT64_MAX;
	volatile int32_t x2571 = -1;
	volatile uint64_t t50 = 100467LLU;

	t50 = (x2569/((x2570+x2571)<<x2572));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2577 = INT16_MIN;
	int16_t x2578 = -3293;
	uint64_t x2579 = UINT64_MAX;
	static volatile uint8_t x2580 = 11U;
	uint64_t t51 = 4326078374317LLU;

	t51 = (x2577/((x2578+x2579)<<x2580));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2701 = 0;
	uint32_t x2702 = 215970U;
	volatile uint32_t t52 = 399202821U;

	t52 = (x2701/((x2702+x2703)<<x2704));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2729 = 1508890444U;
	volatile int32_t x2730 = 458677873;
	static int64_t x2731 = -1LL;
	int8_t x2732 = 0;
	static volatile int64_t t53 = 3959935LL;

	t53 = (x2729/((x2730+x2731)<<x2732));

	if (t53 != 3LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2765 = -1LL;
	volatile uint64_t x2766 = UINT64_MAX;
	int32_t x2767 = INT32_MIN;
	volatile uint16_t x2768 = 1U;
	volatile uint64_t t54 = 38730LLU;

	t54 = (x2765/((x2766+x2767)<<x2768));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2781 = UINT64_MAX;
	static int8_t x2782 = -1;
	uint64_t x2783 = 6428394630393490311LLU;
	volatile uint16_t x2784 = 1U;
	static volatile uint64_t t55 = 18LLU;

	t55 = (x2781/((x2782+x2783)<<x2784));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x2883 = INT8_MAX;
	int16_t x2884 = 2;

	t56 = (x2881/((x2882+x2883)<<x2884));

	if (t56 != 10U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3017 = INT8_MIN;
	int8_t x3018 = 21;
	volatile uint64_t x3019 = 478061960LLU;
	uint16_t x3020 = 0U;

	t57 = (x3017/((x3018+x3019)<<x3020));

	if (t57 != 38586511387LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3049 = -1LL;
	uint64_t x3050 = 55LLU;
	static int64_t x3051 = INT64_MIN;
	uint16_t x3052 = 30U;
	volatile uint64_t t58 = 2036432298915706LLU;

	t58 = (x3049/((x3050+x3051)<<x3052));

	if (t58 != 312361257LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x3073 = 405;
	int32_t x3074 = -1;
	volatile uint64_t x3075 = UINT64_MAX;
	static uint32_t x3076 = 22U;
	uint64_t t59 = 6333361636771199LLU;

	t59 = (x3073/((x3074+x3075)<<x3076));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3113 = 366462696U;
	volatile uint8_t x3115 = UINT8_MAX;
	int8_t x3116 = 3;
	uint32_t t60 = 732U;

	t60 = (x3113/((x3114+x3115)<<x3116));

	if (t60 != 360691U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x3130 = INT16_MAX;
	uint64_t x3131 = UINT64_MAX;
	uint32_t x3132 = 5U;
	volatile uint64_t t61 = 2826932169384349LLU;

	t61 = (x3129/((x3130+x3131)<<x3132));

	if (t61 != 17593259849731LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3146 = UINT64_MAX;
	static int16_t x3147 = 5;
	volatile int8_t x3148 = 1;
	uint64_t t62 = 5127673593864107294LLU;

	t62 = (x3145/((x3146+x3147)<<x3148));

	if (t62 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x3401 = INT16_MIN;
	uint16_t x3402 = UINT16_MAX;
	static int16_t x3404 = 1;

	t63 = (x3401/((x3402+x3403)<<x3404));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3441 = 2468939975537725LLU;
	int32_t x3442 = 6802;
	uint8_t x3443 = 0U;
	int32_t x3444 = 1;
	volatile uint64_t t64 = 399994613LLU;

	t64 = (x3441/((x3442+x3443)<<x3444));

	if (t64 != 181486325752LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3449 = 30471829280962LLU;
	int16_t x3451 = INT16_MAX;
	int8_t x3452 = 3;

	t65 = (x3449/((x3450+x3451)<<x3452));

	if (t65 != 116233709LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3486 = -1;
	static volatile int8_t x3487 = INT8_MAX;
	static uint32_t x3488 = 1U;
	uint32_t t66 = 334125U;

	t66 = (x3485/((x3486+x3487)<<x3488));

	if (t66 != 7382U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3641 = 105589695095085956LLU;
	volatile uint64_t x3642 = 1LLU;
	int16_t x3643 = 2;
	uint8_t x3644 = 7U;

	t67 = (x3641/((x3642+x3643)<<x3644));

	if (t67 != 274973164310119LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3749 = UINT16_MAX;
	int8_t x3751 = INT8_MIN;
	uint8_t x3752 = 25U;
	uint32_t t68 = 2U;

	t68 = (x3749/((x3750+x3751)<<x3752));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x4073 = UINT8_MAX;
	volatile uint64_t x4074 = UINT64_MAX;
	static int32_t x4075 = -51;
	uint16_t x4076 = 2U;

	t69 = (x4073/((x4074+x4075)<<x4076));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4349 = 17;
	static int8_t x4351 = INT8_MAX;
	uint8_t x4352 = 0U;
	int32_t t70 = 425869899;

	t70 = (x4349/((x4350+x4351)<<x4352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t t71 = 366LLU;

	t71 = (x4529/((x4530+x4531)<<x4532));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4557 = -8287;
	int8_t x4559 = INT8_MIN;
	int16_t x4560 = 0;
	volatile uint32_t t72 = 134699183U;

	t72 = (x4557/((x4558+x4559)<<x4560));

	if (t72 != 702U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x4569 = 41816;
	uint32_t x4570 = 2304U;
	static int8_t x4571 = INT8_MAX;
	int16_t x4572 = 1;
	uint32_t t73 = 114011359U;

	t73 = (x4569/((x4570+x4571)<<x4572));

	if (t73 != 8U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x4581 = -4;
	uint64_t x4582 = 574568093318858623LLU;
	int32_t x4583 = -1;
	volatile uint64_t t74 = 15776053574LLU;

	t74 = (x4581/((x4582+x4583)<<x4584));

	if (t74 != 2LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4685 = -31439;
	static uint32_t x4686 = UINT32_MAX;
	int16_t x4687 = -1;
	static volatile uint32_t t75 = 682528U;

	t75 = (x4685/((x4686+x4687)<<x4688));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4713 = UINT32_MAX;
	int16_t x4714 = INT16_MIN;
	uint64_t x4715 = UINT64_MAX;
	volatile int32_t x4716 = 3;
	static uint64_t t76 = 33420083637887LLU;

	t76 = (x4713/((x4714+x4715)<<x4716));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4785 = -1;
	uint8_t x4787 = UINT8_MAX;
	volatile uint8_t x4788 = 18U;

	t77 = (x4785/((x4786+x4787)<<x4788));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4892 = 0U;
	volatile int64_t t78 = 127446LL;

	t78 = (x4889/((x4890+x4891)<<x4892));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4905 = INT32_MIN;
	static uint32_t x4906 = 1277874078U;
	volatile int8_t x4907 = INT8_MAX;
	int8_t x4908 = 12;
	uint32_t t79 = 25U;

	t79 = (x4905/((x4906+x4907)<<x4908));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x5001 = INT32_MAX;
	uint64_t x5002 = UINT64_MAX;
	uint64_t x5004 = 13LLU;
	uint64_t t80 = 37133837546LLU;

	t80 = (x5001/((x5002+x5003)<<x5004));

	if (t80 != 64LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5037 = -1;
	static uint8_t x5038 = 7U;
	uint8_t x5039 = 0U;
	int8_t x5040 = 0;
	volatile int32_t t81 = 2852;

	t81 = (x5037/((x5038+x5039)<<x5040));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5057 = INT16_MIN;
	int16_t x5060 = 3;

	t82 = (x5057/((x5058+x5059)<<x5060));

	if (t82 != -4LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5081 = 13LLU;
	volatile uint8_t x5084 = 1U;
	volatile uint64_t t83 = 606039770169LLU;

	t83 = (x5081/((x5082+x5083)<<x5084));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5089 = INT64_MAX;
	int16_t x5090 = INT16_MIN;
	uint8_t x5092 = 27U;

	t84 = (x5089/((x5090+x5091)<<x5092));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5130 = UINT32_MAX;
	int16_t x5131 = -15;
	volatile int64_t t85 = 1LL;

	t85 = (x5129/((x5130+x5131)<<x5132));

	if (t85 != 376LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5133 = INT16_MAX;
	int64_t x5134 = 201827457758296LL;
	volatile int32_t x5135 = INT32_MIN;
	uint16_t x5136 = 1U;
	int64_t t86 = 458450061LL;

	t86 = (x5133/((x5134+x5135)<<x5136));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5173 = -1;
	uint16_t x5174 = 4043U;
	static int16_t x5175 = -13;
	int8_t x5176 = 1;
	static volatile int32_t t87 = 1804;

	t87 = (x5173/((x5174+x5175)<<x5176));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5293 = -13;
	uint64_t x5294 = UINT64_MAX;
	int8_t x5295 = -3;
	uint16_t x5296 = 20U;
	uint64_t t88 = 1LLU;

	t88 = (x5293/((x5294+x5295)<<x5296));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x5298 = UINT16_MAX;
	volatile int16_t x5299 = 19;
	static volatile uint16_t x5300 = 3U;

	t89 = (x5297/((x5298+x5299)<<x5300));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5369 = INT16_MAX;
	uint64_t x5370 = UINT64_MAX;
	uint8_t x5372 = 23U;
	volatile uint64_t t90 = 36012278742098288LLU;

	t90 = (x5369/((x5370+x5371)<<x5372));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5381 = 6090529617972761LLU;
	int16_t x5382 = INT16_MIN;
	uint32_t x5383 = 55U;
	static uint64_t t91 = 655026814191053LLU;

	t91 = (x5381/((x5382+x5383)<<x5384));

	if (t91 != 1418072LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5433 = 12327U;
	uint32_t x5434 = 633518U;
	volatile int32_t x5435 = -776499577;
	uint8_t x5436 = 0U;
	uint32_t t92 = 4U;

	t92 = (x5433/((x5434+x5435)<<x5436));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5501 = 1482231008LL;
	int16_t x5502 = INT16_MAX;
	int8_t x5503 = -1;
	static uint16_t x5504 = 0U;
	volatile int64_t t93 = 205531089383LL;

	t93 = (x5501/((x5502+x5503)<<x5504));

	if (t93 != 45236LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x5517 = INT16_MIN;
	uint32_t x5518 = 5U;
	uint16_t x5519 = 25765U;
	int32_t x5520 = 1;
	uint32_t t94 = 17U;

	t94 = (x5517/((x5518+x5519)<<x5520));

	if (t94 != 83332U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5545 = 20U;
	uint8_t x5546 = UINT8_MAX;
	int8_t x5548 = 0;
	uint32_t t95 = 297489U;

	t95 = (x5545/((x5546+x5547)<<x5548));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5617 = -1151;
	uint64_t x5618 = 3304949828669LLU;
	int32_t x5619 = 12714192;
	int16_t x5620 = 26;
	uint64_t t96 = 108LLU;

	t96 = (x5617/((x5618+x5619)<<x5620));

	if (t96 != 42LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5662 = INT32_MAX;
	volatile int64_t t97 = 1529137126LL;

	t97 = (x5661/((x5662+x5663)<<x5664));

	if (t97 != -395330023470LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5785 = -1;
	int32_t x5786 = -3;
	uint16_t x5787 = 16U;
	static int8_t x5788 = 9;
	int32_t t98 = 26503;

	t98 = (x5785/((x5786+x5787)<<x5788));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5801 = 1847;
	volatile uint8_t x5802 = 14U;
	uint8_t x5804 = 12U;
	volatile int32_t t99 = 13895983;

	t99 = (x5801/((x5802+x5803)<<x5804));

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

