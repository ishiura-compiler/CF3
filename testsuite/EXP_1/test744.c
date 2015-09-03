#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x37 = -1;
volatile int8_t x58 = -1;
static int64_t x60 = -7665634459234LL;
static volatile int8_t x132 = -2;
uint32_t x210 = 6808U;
volatile uint32_t t6 = 1686473770U;
volatile uint32_t t7 = 1507U;
int16_t x286 = -1;
static uint64_t t8 = 1LLU;
static uint64_t t10 = 5979469507984LLU;
volatile int64_t x385 = 17521931653591LL;
uint64_t x387 = 5LLU;
static uint64_t x450 = 85187857410226LLU;
volatile uint32_t x451 = 3U;
int32_t x464 = -1;
int32_t t15 = -9;
int32_t x617 = -1;
int8_t x675 = 1;
uint32_t x739 = 0U;
volatile int32_t t21 = 13;
uint32_t x846 = 1044U;
int64_t x940 = INT64_MIN;
uint64_t x950 = UINT64_MAX;
static int64_t t25 = -2179194363012LL;
int16_t x1061 = 7881;
uint32_t x1063 = 6U;
int32_t t26 = -1;
int64_t x1082 = INT64_MAX;
uint8_t x1242 = 45U;
uint64_t x1293 = 2068538LLU;
uint8_t x1394 = UINT8_MAX;
uint64_t x1470 = 262389508873072120LLU;
static int32_t x1496 = INT32_MAX;
int32_t t38 = 56;
volatile uint8_t x1547 = 1U;
static int64_t x1548 = INT64_MIN;
static int16_t x1554 = -1;
int64_t t40 = -16023LL;
volatile uint16_t x1950 = UINT16_MAX;
static volatile uint16_t x2001 = 1U;
volatile int16_t x2035 = 0;
int16_t x2184 = INT16_MIN;
volatile int64_t t52 = 9263777661LL;
uint32_t x2272 = UINT32_MAX;
uint8_t x2319 = 0U;
int8_t x2449 = 10;
int64_t x2573 = INT64_MAX;
uint8_t x2679 = 2U;
int8_t x2694 = INT8_MIN;
static int16_t x2717 = 22;
int16_t x2731 = 19;
int8_t x2748 = 0;
int64_t t66 = -818931667846LL;
int8_t x2755 = 0;
int16_t x2821 = INT16_MAX;
uint64_t t69 = 15LLU;
static volatile int64_t t70 = 79089179923302LL;
volatile int64_t t71 = -37274LL;
uint16_t x2936 = 311U;
int32_t x3473 = INT32_MAX;
volatile uint32_t x3475 = 0U;
static int16_t x3653 = 64;
static uint8_t x3654 = 1U;
static uint8_t x3691 = 18U;
volatile uint32_t t79 = 4398986U;
uint16_t x3761 = 457U;
int8_t x3764 = INT8_MIN;
volatile int64_t x3806 = -1LL;
int16_t x3808 = INT16_MIN;
uint16_t x3810 = 180U;
int16_t x3941 = 436;
uint64_t x3942 = 2025282LLU;
volatile int32_t t86 = 0;
int64_t x4116 = 41894490919LL;
int32_t x4214 = INT32_MIN;
volatile int16_t x4463 = 4;
volatile uint64_t t96 = 1024774069604687LLU;
static volatile int8_t x4491 = 6;
volatile int32_t x4586 = -19;
static uint64_t x4684 = 1555733998LLU;
static uint64_t t99 = 13019LLU;


void f0(void) {
	static uint8_t x38 = 1U;
	int8_t x39 = 3;
	int8_t x40 = INT8_MAX;
	volatile int32_t t0 = 56565;

	t0 = (((x37%x38)<<x39)*x40);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x57 = -1;
	volatile uint8_t x59 = 3U;
	volatile int64_t t1 = -3915863291LL;

	t1 = (((x57%x58)<<x59)*x60);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x81 = -98912;
	int8_t x82 = -1;
	volatile uint8_t x83 = 4U;
	volatile uint16_t x84 = UINT16_MAX;
	int32_t t2 = -7067920;

	t2 = (((x81%x82)<<x83)*x84);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = -1;
	uint32_t x119 = 0U;
	int64_t x120 = -1LL;
	volatile int64_t t3 = 842830051854325LL;

	t3 = (((x117%x118)<<x119)*x120);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x129 = INT32_MIN;
	uint32_t x130 = 1281U;
	uint16_t x131 = 2U;
	uint32_t t4 = 458U;

	t4 = (((x129%x130)<<x131)*x132);

	if (t4 != 4294958040U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x137 = -1LL;
	static uint8_t x138 = 1U;
	int8_t x139 = 61;
	static int8_t x140 = INT8_MAX;
	volatile int64_t t5 = 804992199LL;

	t5 = (((x137%x138)<<x139)*x140);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x209 = -1;
	uint8_t x211 = 1U;
	static int16_t x212 = 12212;

	t6 = (((x209%x210)<<x211)*x212);

	if (t6 != 105878040U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x237 = -4;
	uint32_t x238 = UINT32_MAX;
	uint32_t x239 = 10U;
	volatile int32_t x240 = -1;

	t7 = (((x237%x238)<<x239)*x240);

	if (t7 != 4096U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x285 = UINT64_MAX;
	uint8_t x287 = 10U;
	static int32_t x288 = -3351799;

	t8 = (((x285%x286)<<x287)*x288);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = INT16_MAX;
	volatile int8_t x291 = 4;
	uint16_t x292 = UINT16_MAX;
	int64_t t9 = -38482LL;

	t9 = (((x289%x290)<<x291)*x292);

	if (t9 != 7339920LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int64_t x346 = 787419066329LL;
	static int16_t x347 = 33;
	static uint16_t x348 = 26U;

	t10 = (((x345%x346)<<x347)*x348);

	if (t10 != 17482570902699769856LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x361 = INT32_MAX;
	int16_t x362 = -3703;
	uint8_t x363 = 6U;
	int8_t x364 = -1;
	static int32_t t11 = -40604;

	t11 = (((x361%x362)<<x363)*x364);

	if (t11 != -182848) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x386 = 2723U;
	volatile uint32_t x388 = 282U;
	int64_t t12 = -1LL;

	t12 = (((x385%x386)<<x387)*x388);

	if (t12 != 2725248LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x389 = 6U;
	uint32_t x390 = UINT32_MAX;
	static volatile int8_t x391 = 20;
	int8_t x392 = -3;
	static volatile uint32_t t13 = 27143061U;

	t13 = (((x389%x390)<<x391)*x392);

	if (t13 != 4276092928U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x449 = INT64_MAX;
	uint64_t x452 = 357703700193547663LLU;
	volatile uint64_t t14 = 43468123945LLU;

	t14 = (((x449%x450)<<x451)*x452);

	if (t14 != 11656772856129605992LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x461 = UINT8_MAX;
	uint8_t x462 = UINT8_MAX;
	int8_t x463 = 7;

	t15 = (((x461%x462)<<x463)*x464);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x589 = UINT64_MAX;
	static int64_t x590 = INT64_MIN;
	static volatile uint64_t x591 = 28LLU;
	uint16_t x592 = 29753U;
	volatile uint64_t t16 = 2LLU;

	t16 = (((x589%x590)<<x591)*x592);

	if (t16 != 18446736086949429248LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x618 = 19655U;
	static int16_t x619 = 0;
	volatile int16_t x620 = INT16_MAX;
	volatile uint32_t t17 = 120669U;

	t17 = (((x617%x618)<<x619)*x620);

	if (t17 != 513131220U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x673 = UINT64_MAX;
	uint16_t x674 = 1U;
	volatile int16_t x676 = INT16_MAX;
	static uint64_t t18 = 5060237278712956400LLU;

	t18 = (((x673%x674)<<x675)*x676);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x713 = 0U;
	uint32_t x714 = UINT32_MAX;
	int8_t x715 = 20;
	uint32_t x716 = UINT32_MAX;
	volatile uint32_t t19 = 0U;

	t19 = (((x713%x714)<<x715)*x716);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x737 = UINT8_MAX;
	volatile uint64_t x738 = UINT64_MAX;
	volatile int16_t x740 = -1;
	uint64_t t20 = 1LLU;

	t20 = (((x737%x738)<<x739)*x740);

	if (t20 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x797 = INT32_MAX;
	volatile int8_t x798 = 3;
	static uint8_t x799 = 1U;
	int16_t x800 = INT16_MIN;

	t21 = (((x797%x798)<<x799)*x800);

	if (t21 != -65536) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x845 = UINT32_MAX;
	static uint8_t x847 = 7U;
	int8_t x848 = INT8_MIN;
	volatile uint32_t t22 = 7U;

	t22 = (((x845%x846)<<x847)*x848);

	if (t22 != 4289019904U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x937 = -126427111389LL;
	uint64_t x938 = UINT64_MAX;
	int8_t x939 = 2;
	uint64_t t23 = 3929582777LLU;

	t23 = (((x937%x938)<<x939)*x940);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x949 = INT16_MIN;
	int32_t x951 = 1;
	static uint8_t x952 = UINT8_MAX;
	volatile uint64_t t24 = 54784LLU;

	t24 = (((x949%x950)<<x951)*x952);

	if (t24 != 18446744073692839936LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x957 = 42;
	uint16_t x958 = 2U;
	int8_t x959 = 1;
	int64_t x960 = -41664388LL;

	t25 = (((x957%x958)<<x959)*x960);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1062 = INT16_MAX;
	static uint8_t x1064 = 2U;

	t26 = (((x1061%x1062)<<x1063)*x1064);

	if (t26 != 1008768) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1081 = UINT8_MAX;
	volatile int16_t x1083 = 1;
	volatile int32_t x1084 = 4;
	volatile int64_t t27 = -15081063541044LL;

	t27 = (((x1081%x1082)<<x1083)*x1084);

	if (t27 != 2040LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1241 = 0;
	uint32_t x1243 = 2U;
	uint64_t x1244 = UINT64_MAX;
	volatile uint64_t t28 = 1LLU;

	t28 = (((x1241%x1242)<<x1243)*x1244);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1265 = UINT16_MAX;
	volatile int16_t x1266 = -258;
	uint8_t x1267 = 0U;
	int16_t x1268 = -6;
	static volatile int32_t t29 = -12;

	t29 = (((x1265%x1266)<<x1267)*x1268);

	if (t29 != -18) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1294 = UINT16_MAX;
	uint8_t x1295 = 1U;
	int8_t x1296 = 40;
	uint64_t t30 = 36889660874LLU;

	t30 = (((x1293%x1294)<<x1295)*x1296);

	if (t30 != 2956240LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1325 = 9;
	int64_t x1326 = -9878772670756LL;
	static int8_t x1327 = 6;
	uint8_t x1328 = UINT8_MAX;
	static volatile int64_t t31 = 109221927013477LL;

	t31 = (((x1325%x1326)<<x1327)*x1328);

	if (t31 != 146880LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1345 = INT32_MIN;
	uint8_t x1346 = 4U;
	static int8_t x1347 = 2;
	uint8_t x1348 = 1U;
	static volatile int32_t t32 = -234;

	t32 = (((x1345%x1346)<<x1347)*x1348);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1393 = INT64_MAX;
	volatile uint32_t x1395 = 20U;
	volatile uint64_t x1396 = 2223047520LLU;
	volatile uint64_t t33 = 1669837LLU;

	t33 = (((x1393%x1394)<<x1395)*x1396);

	if (t33 != 296041353094103040LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1397 = 255646369206593724LLU;
	int8_t x1398 = 2;
	static volatile uint8_t x1399 = 4U;
	int8_t x1400 = INT8_MIN;
	uint64_t t34 = 270115341091077LLU;

	t34 = (((x1397%x1398)<<x1399)*x1400);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1449 = -1;
	int8_t x1450 = -1;
	uint32_t x1451 = 0U;
	uint16_t x1452 = 2U;
	int32_t t35 = 33091;

	t35 = (((x1449%x1450)<<x1451)*x1452);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1469 = INT64_MAX;
	int8_t x1471 = 6;
	int8_t x1472 = 0;
	uint64_t t36 = 3396658775984930935LLU;

	t36 = (((x1469%x1470)<<x1471)*x1472);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1489 = INT8_MIN;
	uint64_t x1490 = UINT64_MAX;
	static int8_t x1491 = 12;
	volatile uint32_t x1492 = UINT32_MAX;
	volatile uint64_t t37 = 1469LLU;

	t37 = (((x1489%x1490)<<x1491)*x1492);

	if (t37 != 18444492273896390656LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1493 = 0U;
	volatile int8_t x1494 = INT8_MIN;
	volatile uint32_t x1495 = 6U;

	t38 = (((x1493%x1494)<<x1495)*x1496);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1545 = -134847482955303366LL;
	static uint64_t x1546 = 1261LLU;
	static volatile uint64_t t39 = 213410568LLU;

	t39 = (((x1545%x1546)<<x1547)*x1548);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x1553 = 2U;
	volatile uint16_t x1555 = 7U;
	int64_t x1556 = -1LL;

	t40 = (((x1553%x1554)<<x1555)*x1556);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1673 = UINT32_MAX;
	static int8_t x1674 = -41;
	static uint64_t x1675 = 1LLU;
	static int16_t x1676 = INT16_MIN;
	volatile uint32_t t41 = 76U;

	t41 = (((x1673%x1674)<<x1675)*x1676);

	if (t41 != 4292345856U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1825 = INT32_MAX;
	volatile int32_t x1826 = -1;
	uint16_t x1827 = 2U;
	int8_t x1828 = -16;
	int32_t t42 = -60203517;

	t42 = (((x1825%x1826)<<x1827)*x1828);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1837 = 1269377494408LL;
	uint16_t x1838 = 119U;
	int8_t x1839 = 1;
	uint32_t x1840 = UINT32_MAX;
	int64_t t43 = 686700945566LL;

	t43 = (((x1837%x1838)<<x1839)*x1840);

	if (t43 != 137438953440LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1841 = 1255302228998LLU;
	uint16_t x1842 = 462U;
	volatile int32_t x1843 = 0;
	int16_t x1844 = INT16_MIN;
	uint64_t t44 = 25125927388160262LLU;

	t44 = (((x1841%x1842)<<x1843)*x1844);

	if (t44 != 18446744073697886208LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x1885 = 349137987U;
	int16_t x1886 = INT16_MIN;
	uint32_t x1887 = 4U;
	int16_t x1888 = INT16_MAX;
	uint32_t t45 = 507613074U;

	t45 = (((x1885%x1886)<<x1887)*x1888);

	if (t45 != 354499536U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1949 = 29395U;
	static volatile uint32_t x1951 = 1U;
	static uint16_t x1952 = 27U;
	volatile int32_t t46 = 61;

	t46 = (((x1949%x1950)<<x1951)*x1952);

	if (t46 != 1587330) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2002 = 7479035LLU;
	int8_t x2003 = 3;
	uint32_t x2004 = 661112U;
	uint64_t t47 = 478210522886456LLU;

	t47 = (((x2001%x2002)<<x2003)*x2004);

	if (t47 != 5288896LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x2033 = 578855694U;
	static uint8_t x2034 = UINT8_MAX;
	uint8_t x2036 = 102U;
	uint32_t t48 = 2551073U;

	t48 = (((x2033%x2034)<<x2035)*x2036);

	if (t48 != 8568U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2057 = 11599460LLU;
	int8_t x2058 = INT8_MIN;
	uint8_t x2059 = 51U;
	static uint32_t x2060 = 6U;
	volatile uint64_t t49 = 7682001LLU;

	t49 = (((x2057%x2058)<<x2059)*x2060);

	if (t49 != 12880294934279618560LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2077 = 58682757;
	uint64_t x2078 = UINT64_MAX;
	volatile uint8_t x2079 = 4U;
	static uint64_t x2080 = 14510230LLU;
	static volatile uint64_t t50 = 2268391233241449759LLU;

	t50 = (((x2077%x2078)<<x2079)*x2080);

	if (t50 != 13624004817665760LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2145 = 3U;
	volatile int16_t x2146 = 947;
	uint8_t x2147 = 0U;
	int64_t x2148 = 97625836636LL;
	int64_t t51 = 5LL;

	t51 = (((x2145%x2146)<<x2147)*x2148);

	if (t51 != 292877509908LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2181 = 530942508504LL;
	int16_t x2182 = -1;
	uint32_t x2183 = 10U;

	t52 = (((x2181%x2182)<<x2183)*x2184);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2269 = 24757U;
	static int8_t x2270 = 3;
	int8_t x2271 = 1;
	static uint32_t t53 = 43462168U;

	t53 = (((x2269%x2270)<<x2271)*x2272);

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2285 = -13;
	volatile uint64_t x2286 = UINT64_MAX;
	static int8_t x2287 = 43;
	int32_t x2288 = 3;
	static volatile uint64_t t54 = 26496LLU;

	t54 = (((x2285%x2286)<<x2287)*x2288);

	if (t54 != 18446401026081685504LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2301 = 148874U;
	volatile int16_t x2302 = -2730;
	uint16_t x2303 = 4U;
	int16_t x2304 = INT16_MIN;
	static uint32_t t55 = 3623304U;

	t55 = (((x2301%x2302)<<x2303)*x2304);

	if (t55 != 3551526912U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2317 = 3U;
	static uint16_t x2318 = 2410U;
	uint64_t x2320 = 850113815LLU;
	volatile uint64_t t56 = 1305LLU;

	t56 = (((x2317%x2318)<<x2319)*x2320);

	if (t56 != 2550341445LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2381 = 16U;
	int64_t x2382 = INT64_MAX;
	static uint32_t x2383 = 2U;
	int64_t x2384 = 98691063940597261LL;
	int64_t t57 = 1698686646884917306LL;

	t57 = (((x2381%x2382)<<x2383)*x2384);

	if (t57 != 6316228092198224704LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2389 = INT32_MAX;
	volatile int64_t x2390 = -1LL;
	uint8_t x2391 = 1U;
	static volatile uint8_t x2392 = UINT8_MAX;
	volatile int64_t t58 = -7566383230LL;

	t58 = (((x2389%x2390)<<x2391)*x2392);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2450 = UINT64_MAX;
	uint8_t x2451 = 5U;
	int8_t x2452 = INT8_MIN;
	uint64_t t59 = 1749114365806309076LLU;

	t59 = (((x2449%x2450)<<x2451)*x2452);

	if (t59 != 18446744073709510656LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2481 = 1U;
	volatile int16_t x2482 = -1;
	static volatile uint16_t x2483 = 6U;
	int64_t x2484 = INT64_MIN;
	static int64_t t60 = -1730980104LL;

	t60 = (((x2481%x2482)<<x2483)*x2484);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x2574 = -1;
	static volatile int8_t x2575 = 9;
	static int64_t x2576 = -1LL;
	static int64_t t61 = -3556754LL;

	t61 = (((x2573%x2574)<<x2575)*x2576);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2677 = -1;
	static int8_t x2678 = 1;
	int64_t x2680 = 66688792LL;
	static int64_t t62 = 9909LL;

	t62 = (((x2677%x2678)<<x2679)*x2680);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2693 = INT64_MIN;
	uint8_t x2695 = 2U;
	static uint16_t x2696 = 4529U;
	int64_t t63 = 4258341LL;

	t63 = (((x2693%x2694)<<x2695)*x2696);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2718 = 726U;
	volatile uint16_t x2719 = 1U;
	uint32_t x2720 = UINT32_MAX;
	volatile uint32_t t64 = 134365182U;

	t64 = (((x2717%x2718)<<x2719)*x2720);

	if (t64 != 4294967252U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2729 = 8;
	int8_t x2730 = INT8_MIN;
	int64_t x2732 = -1LL;
	int64_t t65 = 931945025LL;

	t65 = (((x2729%x2730)<<x2731)*x2732);

	if (t65 != -4194304LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2745 = INT64_MIN;
	int8_t x2746 = -1;
	uint8_t x2747 = 14U;

	t66 = (((x2745%x2746)<<x2747)*x2748);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2753 = -1;
	int8_t x2754 = 1;
	int32_t x2756 = -1;
	int32_t t67 = -338932659;

	t67 = (((x2753%x2754)<<x2755)*x2756);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x2822 = 1U;
	int8_t x2823 = 3;
	int64_t x2824 = INT64_MIN;
	volatile int64_t t68 = -8524099LL;

	t68 = (((x2821%x2822)<<x2823)*x2824);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x2845 = UINT32_MAX;
	volatile int8_t x2846 = -1;
	int64_t x2847 = 0LL;
	uint64_t x2848 = UINT64_MAX;

	t69 = (((x2845%x2846)<<x2847)*x2848);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2869 = 1LL;
	volatile int16_t x2870 = INT16_MAX;
	uint8_t x2871 = 2U;
	int32_t x2872 = -55;

	t70 = (((x2869%x2870)<<x2871)*x2872);

	if (t70 != -220LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2885 = 80355U;
	int64_t x2886 = INT64_MAX;
	static uint8_t x2887 = 25U;
	int8_t x2888 = INT8_MIN;

	t71 = (((x2885%x2886)<<x2887)*x2888);

	if (t71 != -345122097070080LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2901 = INT16_MIN;
	static volatile uint64_t x2902 = 25013919563LLU;
	int16_t x2903 = 1;
	int64_t x2904 = -188388574685LL;
	uint64_t t72 = 3033479010700LLU;

	t72 = (((x2901%x2902)<<x2903)*x2904);

	if (t72 != 15485574846345593172LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2933 = INT16_MAX;
	static int64_t x2934 = -1LL;
	static uint8_t x2935 = 24U;
	volatile int64_t t73 = 439LL;

	t73 = (((x2933%x2934)<<x2935)*x2936);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3229 = 7;
	int64_t x3230 = INT64_MIN;
	int8_t x3231 = 15;
	volatile int16_t x3232 = INT16_MIN;
	volatile int64_t t74 = 4657285706148435LL;

	t74 = (((x3229%x3230)<<x3231)*x3232);

	if (t74 != -7516192768LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3469 = INT8_MIN;
	int8_t x3470 = INT8_MIN;
	uint8_t x3471 = 0U;
	int64_t x3472 = -1LL;
	int64_t t75 = 1642772024094LL;

	t75 = (((x3469%x3470)<<x3471)*x3472);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3474 = INT64_MIN;
	volatile int32_t x3476 = INT32_MIN;
	volatile int64_t t76 = 9831550417073LL;

	t76 = (((x3473%x3474)<<x3475)*x3476);

	if (t76 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x3557 = UINT8_MAX;
	volatile uint16_t x3558 = UINT16_MAX;
	static uint8_t x3559 = 0U;
	int64_t x3560 = -2797LL;
	volatile int64_t t77 = -58106999586445LL;

	t77 = (((x3557%x3558)<<x3559)*x3560);

	if (t77 != -713235LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x3655 = 1U;
	static volatile int16_t x3656 = -1;
	volatile int32_t t78 = 48;

	t78 = (((x3653%x3654)<<x3655)*x3656);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3689 = 2861365U;
	static int8_t x3690 = -1;
	int16_t x3692 = -1;

	t79 = (((x3689%x3690)<<x3691)*x3692);

	if (t79 != 1529610240U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x3701 = 0;
	volatile int16_t x3702 = -1;
	static volatile uint16_t x3703 = 9U;
	static volatile int32_t x3704 = 0;
	int32_t t80 = -3145979;

	t80 = (((x3701%x3702)<<x3703)*x3704);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3762 = INT8_MIN;
	uint8_t x3763 = 5U;
	int32_t t81 = -500892036;

	t81 = (((x3761%x3762)<<x3763)*x3764);

	if (t81 != -299008) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x3805 = 24457399858089LLU;
	volatile int8_t x3807 = 31;
	uint64_t t82 = 43797597954701LLU;

	t82 = (((x3805%x3806)<<x3807)*x3808);

	if (t82 != 11751509908925710336LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3809 = 3U;
	int64_t x3811 = 0LL;
	uint32_t x3812 = 2U;
	static volatile uint32_t t83 = 1356121636U;

	t83 = (((x3809%x3810)<<x3811)*x3812);

	if (t83 != 6U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x3861 = INT32_MAX;
	static int64_t x3862 = -1LL;
	int8_t x3863 = 46;
	volatile int16_t x3864 = -1;
	volatile int64_t t84 = -129339121605LL;

	t84 = (((x3861%x3862)<<x3863)*x3864);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3943 = 3;
	static int32_t x3944 = -1;
	volatile uint64_t t85 = 1380447199LLU;

	t85 = (((x3941%x3942)<<x3943)*x3944);

	if (t85 != 18446744073709548128LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x3997 = 2044U;
	uint8_t x3998 = 2U;
	uint8_t x3999 = 1U;
	int32_t x4000 = 442;

	t86 = (((x3997%x3998)<<x3999)*x4000);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4033 = INT32_MIN;
	uint64_t x4034 = UINT64_MAX;
	uint8_t x4035 = 18U;
	volatile int16_t x4036 = INT16_MIN;
	uint64_t t87 = 18611622LLU;

	t87 = (((x4033%x4034)<<x4035)*x4036);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4113 = UINT32_MAX;
	uint64_t x4114 = 639683LLU;
	uint16_t x4115 = 6U;
	uint64_t t88 = 58182538985518LLU;

	t88 = (((x4113%x4114)<<x4115)*x4116);

	if (t88 != 363665631156270528LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4149 = 8U;
	static volatile int64_t x4150 = 4229181089LL;
	uint8_t x4151 = 10U;
	uint32_t x4152 = 3U;
	static volatile int64_t t89 = 278264188488548LL;

	t89 = (((x4149%x4150)<<x4151)*x4152);

	if (t89 != 24576LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4185 = 0;
	int8_t x4186 = INT8_MIN;
	uint32_t x4187 = 16U;
	static int8_t x4188 = INT8_MAX;
	static volatile int32_t t90 = -28;

	t90 = (((x4185%x4186)<<x4187)*x4188);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x4201 = UINT8_MAX;
	int8_t x4202 = -1;
	uint16_t x4203 = 1U;
	int32_t x4204 = INT32_MIN;
	int32_t t91 = 12510;

	t91 = (((x4201%x4202)<<x4203)*x4204);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x4213 = 780U;
	volatile uint8_t x4215 = 1U;
	volatile uint64_t x4216 = 562041LLU;
	static uint64_t t92 = 33LLU;

	t92 = (((x4213%x4214)<<x4215)*x4216);

	if (t92 != 876783960LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4253 = 104U;
	static int64_t x4254 = INT64_MIN;
	uint8_t x4255 = 2U;
	int8_t x4256 = INT8_MIN;
	int64_t t93 = -36859475617350LL;

	t93 = (((x4253%x4254)<<x4255)*x4256);

	if (t93 != -53248LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4377 = UINT64_MAX;
	int64_t x4378 = INT64_MAX;
	uint32_t x4379 = 12U;
	int32_t x4380 = -44;
	volatile uint64_t t94 = 13LLU;

	t94 = (((x4377%x4378)<<x4379)*x4380);

	if (t94 != 18446744073709371392LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x4461 = 20U;
	uint32_t x4462 = UINT32_MAX;
	uint32_t x4464 = 35U;
	volatile uint32_t t95 = 3833U;

	t95 = (((x4461%x4462)<<x4463)*x4464);

	if (t95 != 11200U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4481 = 7663359294LL;
	uint64_t x4482 = 664209951450LLU;
	int16_t x4483 = 0;
	int8_t x4484 = -25;

	t96 = (((x4481%x4482)<<x4483)*x4484);

	if (t96 != 18446743882125569266LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4489 = 30985;
	volatile int64_t x4490 = INT64_MIN;
	uint64_t x4492 = 729LLU;
	uint64_t t97 = 46402922534LLU;

	t97 = (((x4489%x4490)<<x4491)*x4492);

	if (t97 != 1445636160LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4585 = UINT64_MAX;
	volatile int8_t x4587 = 4;
	volatile uint8_t x4588 = 30U;
	volatile uint64_t t98 = 5651398412862544LLU;

	t98 = (((x4585%x4586)<<x4587)*x4588);

	if (t98 != 8640LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x4681 = -1;
	volatile int64_t x4682 = -1LL;
	int8_t x4683 = 17;

	t99 = (((x4681%x4682)<<x4683)*x4684);

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

