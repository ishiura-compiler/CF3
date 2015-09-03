#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x44 = 0U;
static int16_t x76 = 24;
uint64_t x101 = UINT64_MAX;
int16_t x106 = -702;
static volatile uint32_t x155 = UINT32_MAX;
int32_t t10 = -21;
int16_t x158 = INT16_MIN;
uint64_t x159 = UINT64_MAX;
int32_t t12 = -1;
uint32_t x221 = UINT32_MAX;
volatile uint16_t x236 = 2U;
volatile uint64_t x261 = UINT64_MAX;
uint8_t x268 = 0U;
int32_t t16 = 0;
static int32_t t18 = -31;
int8_t x327 = INT8_MIN;
uint8_t x328 = 1U;
volatile int16_t x343 = INT16_MAX;
int32_t x376 = 1;
int16_t x378 = 13;
static int32_t t23 = -14344849;
volatile int32_t x391 = -110;
uint64_t x457 = 12673701577LLU;
volatile uint16_t x460 = 17U;
int64_t x545 = INT64_MAX;
uint64_t x550 = 27672LLU;
static int32_t t33 = -63289;
int32_t x811 = 6695;
static int16_t x881 = 3674;
int64_t x882 = INT64_MIN;
int16_t x884 = 1;
volatile uint8_t x1116 = 1U;
static volatile int64_t x1147 = -245539LL;
int16_t x1160 = 1;
int8_t x1165 = -9;
int32_t x1285 = -317;
volatile int32_t x1288 = 6;
int32_t t47 = -36;
uint16_t x1320 = 16U;
uint8_t x1460 = 0U;
volatile int64_t x1550 = INT64_MIN;
uint8_t x1551 = 2U;
int64_t x1574 = -76769344209730245LL;
static int8_t x1575 = -1;
uint16_t x1576 = 6U;
int8_t x1754 = INT8_MAX;
int16_t x1760 = 20;
int32_t x1761 = INT32_MIN;
uint8_t x1767 = UINT8_MAX;
int16_t x1799 = -1;
int32_t t65 = 41;
int64_t x1802 = -8079633LL;
volatile int32_t t66 = 11437;
uint32_t x1823 = 75756265U;
uint16_t x1824 = 1U;
int32_t t68 = -1966532;
int8_t x1885 = INT8_MIN;
int8_t x1886 = -1;
int32_t t71 = -55723777;
static uint8_t x1956 = 1U;
uint8_t x2057 = UINT8_MAX;
volatile int32_t t75 = -929;
int64_t x2061 = INT64_MAX;
volatile int64_t x2069 = INT64_MIN;
volatile int32_t x2070 = -1;
uint64_t x2085 = 3496908488LLU;
uint8_t x2086 = UINT8_MAX;
uint64_t x2087 = 252703534343012LLU;
int32_t t79 = -4544906;
int32_t t80 = 1022556918;
int16_t x2229 = 0;
static uint16_t x2230 = 10U;
uint32_t x2231 = UINT32_MAX;
uint16_t x2407 = UINT16_MAX;
int32_t x2437 = INT32_MAX;
static int8_t x2440 = 0;
volatile int32_t t86 = -49644;
int8_t x2449 = -1;
int64_t x2451 = INT64_MAX;
static uint64_t x2481 = UINT64_MAX;
static uint16_t x2486 = 7971U;
static int16_t x2538 = INT16_MAX;
volatile int32_t t90 = 318;
int8_t x2601 = 10;
volatile int64_t x2690 = -5412234LL;
volatile int32_t t94 = 100230453;
int16_t x2757 = INT16_MIN;
int8_t x2760 = 3;
int32_t t96 = 1;
int32_t x2821 = 0;
static uint16_t x2824 = 0U;
int64_t x2907 = -61649507980LL;


void f0(void) {
	uint32_t x1 = 9U;
	int64_t x2 = 235LL;
	int64_t x3 = INT64_MIN;
	int64_t x4 = 1LL;
	volatile int32_t t0 = -835;

	t0 = (((x1&x2)==x3)>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x25 = INT32_MIN;
	int16_t x26 = 536;
	int16_t x27 = -4560;
	uint8_t x28 = 1U;
	volatile int32_t t1 = 1462;

	t1 = (((x25&x26)==x27)>>x28);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x41 = 6885U;
	static uint64_t x42 = UINT64_MAX;
	static uint8_t x43 = UINT8_MAX;
	static int32_t t2 = 14239;

	t2 = (((x41&x42)==x43)>>x44);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x65 = 126416604615206LLU;
	int64_t x66 = INT64_MIN;
	int32_t x67 = 24167529;
	int16_t x68 = 4;
	volatile int32_t t3 = 14;

	t3 = (((x65&x66)==x67)>>x68);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x73 = -18;
	uint32_t x74 = 9U;
	static int64_t x75 = 200309123280479123LL;
	volatile int32_t t4 = -668716489;

	t4 = (((x73&x74)==x75)>>x76);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x85 = 3;
	int8_t x86 = INT8_MIN;
	volatile int64_t x87 = -20042LL;
	int64_t x88 = 5LL;
	int32_t t5 = -32;

	t5 = (((x85&x86)==x87)>>x88);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MAX;
	int8_t x104 = 11;
	int32_t t6 = 54062;

	t6 = (((x101&x102)==x103)>>x104);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x107 = 348270218862165LL;
	static uint64_t x108 = 0LLU;
	static volatile int32_t t7 = -3857;

	t7 = (((x105&x106)==x107)>>x108);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x117 = -5;
	int64_t x118 = INT64_MIN;
	static int64_t x119 = INT64_MIN;
	static uint64_t x120 = 1LLU;
	int32_t t8 = -136;

	t8 = (((x117&x118)==x119)>>x120);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x149 = -1;
	uint64_t x150 = 56401700941LLU;
	int8_t x151 = -7;
	int8_t x152 = 1;
	volatile int32_t t9 = -287139;

	t9 = (((x149&x150)==x151)>>x152);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x153 = 0U;
	static volatile uint16_t x154 = UINT16_MAX;
	volatile uint16_t x156 = 1U;

	t10 = (((x153&x154)==x155)>>x156);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x157 = 41U;
	uint8_t x160 = 7U;
	static int32_t t11 = -52;

	t11 = (((x157&x158)==x159)>>x160);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x213 = INT8_MIN;
	volatile int16_t x214 = -1;
	int8_t x215 = INT8_MIN;
	static int8_t x216 = 0;

	t12 = (((x213&x214)==x215)>>x216);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x222 = -81803930908629LL;
	static uint32_t x223 = 0U;
	int8_t x224 = 0;
	int32_t t13 = -1;

	t13 = (((x221&x222)==x223)>>x224);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 451U;
	uint32_t x235 = UINT32_MAX;
	static volatile int32_t t14 = -519785712;

	t14 = (((x233&x234)==x235)>>x236);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x262 = INT16_MIN;
	static int32_t x263 = -13148712;
	uint8_t x264 = 2U;
	static int32_t t15 = -22382;

	t15 = (((x261&x262)==x263)>>x264);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x265 = 1;
	uint32_t x266 = UINT32_MAX;
	static int16_t x267 = -1;

	t16 = (((x265&x266)==x267)>>x268);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x285 = UINT8_MAX;
	int16_t x286 = 26;
	int64_t x287 = -3LL;
	static uint8_t x288 = 8U;
	volatile int32_t t17 = -1908;

	t17 = (((x285&x286)==x287)>>x288);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x305 = INT32_MAX;
	uint16_t x306 = 5875U;
	static int8_t x307 = INT8_MAX;
	int8_t x308 = 1;

	t18 = (((x305&x306)==x307)>>x308);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x325 = INT8_MIN;
	int64_t x326 = 1LL;
	int32_t t19 = 3;

	t19 = (((x325&x326)==x327)>>x328);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x341 = 476U;
	volatile uint16_t x342 = UINT16_MAX;
	volatile uint8_t x344 = 7U;
	volatile int32_t t20 = 72065860;

	t20 = (((x341&x342)==x343)>>x344);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x361 = UINT64_MAX;
	uint64_t x362 = 194280843LLU;
	int64_t x363 = 2165587761603352893LL;
	uint8_t x364 = 16U;
	volatile int32_t t21 = -3374;

	t21 = (((x361&x362)==x363)>>x364);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x373 = -1;
	volatile uint16_t x374 = 8091U;
	int16_t x375 = -1;
	volatile int32_t t22 = 128484921;

	t22 = (((x373&x374)==x375)>>x376);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x377 = -1;
	volatile uint8_t x379 = 2U;
	int16_t x380 = 1;

	t23 = (((x377&x378)==x379)>>x380);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x389 = INT16_MIN;
	static uint64_t x390 = 26841183419411728LLU;
	static uint16_t x392 = 15U;
	static volatile int32_t t24 = 0;

	t24 = (((x389&x390)==x391)>>x392);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x401 = -1LL;
	uint8_t x402 = 15U;
	int64_t x403 = 946LL;
	int16_t x404 = 3;
	int32_t t25 = -13709;

	t25 = (((x401&x402)==x403)>>x404);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x417 = 89U;
	uint8_t x418 = 1U;
	static int8_t x419 = -13;
	uint16_t x420 = 0U;
	int32_t t26 = 620795974;

	t26 = (((x417&x418)==x419)>>x420);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x458 = UINT16_MAX;
	static int32_t x459 = INT32_MIN;
	static volatile int32_t t27 = 29840;

	t27 = (((x457&x458)==x459)>>x460);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x501 = UINT16_MAX;
	int64_t x502 = INT64_MIN;
	volatile int8_t x503 = INT8_MIN;
	uint8_t x504 = 21U;
	int32_t t28 = -1;

	t28 = (((x501&x502)==x503)>>x504);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x546 = -5921077270701259LL;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = 0;
	int32_t t29 = -179123;

	t29 = (((x545&x546)==x547)>>x548);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x549 = UINT16_MAX;
	uint64_t x551 = 527894635693757LLU;
	uint8_t x552 = 4U;
	volatile int32_t t30 = 1477846;

	t30 = (((x549&x550)==x551)>>x552);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x585 = 18;
	int32_t x586 = -4653137;
	int8_t x587 = -1;
	uint8_t x588 = 0U;
	int32_t t31 = 134100223;

	t31 = (((x585&x586)==x587)>>x588);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x621 = INT64_MIN;
	static uint64_t x622 = UINT64_MAX;
	int16_t x623 = -51;
	static uint8_t x624 = 2U;
	static volatile int32_t t32 = -107347270;

	t32 = (((x621&x622)==x623)>>x624);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x685 = INT8_MIN;
	static int8_t x686 = -1;
	static int64_t x687 = INT64_MAX;
	uint8_t x688 = 1U;

	t33 = (((x685&x686)==x687)>>x688);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x705 = 124777741U;
	int8_t x706 = 29;
	int32_t x707 = INT32_MIN;
	int8_t x708 = 3;
	volatile int32_t t34 = 15;

	t34 = (((x705&x706)==x707)>>x708);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x809 = 41U;
	uint16_t x810 = UINT16_MAX;
	volatile uint8_t x812 = 20U;
	volatile int32_t t35 = 43;

	t35 = (((x809&x810)==x811)>>x812);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x829 = -1LL;
	int16_t x830 = -7777;
	uint64_t x831 = 61282096947517616LLU;
	int8_t x832 = 0;
	volatile int32_t t36 = 838;

	t36 = (((x829&x830)==x831)>>x832);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x883 = 2835527U;
	int32_t t37 = -182054;

	t37 = (((x881&x882)==x883)>>x884);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x905 = INT64_MAX;
	uint32_t x906 = 2420643U;
	int8_t x907 = -1;
	uint8_t x908 = 16U;
	volatile int32_t t38 = -53685;

	t38 = (((x905&x906)==x907)>>x908);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x969 = INT64_MIN;
	volatile uint8_t x970 = 14U;
	volatile int64_t x971 = -12374720LL;
	static int16_t x972 = 1;
	int32_t t39 = 20;

	t39 = (((x969&x970)==x971)>>x972);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x997 = -45118115995LL;
	int16_t x998 = INT16_MAX;
	volatile uint32_t x999 = 973630807U;
	uint8_t x1000 = 0U;
	int32_t t40 = -589650796;

	t40 = (((x997&x998)==x999)>>x1000);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x1113 = INT16_MIN;
	uint64_t x1114 = UINT64_MAX;
	int8_t x1115 = INT8_MIN;
	int32_t t41 = -2949;

	t41 = (((x1113&x1114)==x1115)>>x1116);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1145 = 0;
	volatile int8_t x1146 = INT8_MIN;
	static uint16_t x1148 = 12U;
	volatile int32_t t42 = -562362996;

	t42 = (((x1145&x1146)==x1147)>>x1148);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1157 = 46151256U;
	volatile int32_t x1158 = -10448142;
	static volatile uint8_t x1159 = 0U;
	static volatile int32_t t43 = -67895544;

	t43 = (((x1157&x1158)==x1159)>>x1160);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1161 = INT16_MIN;
	int8_t x1162 = 1;
	int8_t x1163 = -15;
	int8_t x1164 = 1;
	int32_t t44 = 3313694;

	t44 = (((x1161&x1162)==x1163)>>x1164);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1166 = 1;
	volatile uint32_t x1167 = UINT32_MAX;
	volatile uint8_t x1168 = 0U;
	volatile int32_t t45 = -549257;

	t45 = (((x1165&x1166)==x1167)>>x1168);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1286 = 27010329961LL;
	uint32_t x1287 = UINT32_MAX;
	int32_t t46 = -13;

	t46 = (((x1285&x1286)==x1287)>>x1288);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1301 = INT16_MIN;
	static int8_t x1302 = INT8_MIN;
	static uint32_t x1303 = 5100798U;
	uint16_t x1304 = 9U;

	t47 = (((x1301&x1302)==x1303)>>x1304);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x1317 = 921605727025760419LL;
	int32_t x1318 = -1;
	int16_t x1319 = INT16_MIN;
	int32_t t48 = 4693;

	t48 = (((x1317&x1318)==x1319)>>x1320);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1325 = -596352668;
	uint8_t x1326 = UINT8_MAX;
	volatile int32_t x1327 = -1979;
	static int32_t x1328 = 4;
	int32_t t49 = 0;

	t49 = (((x1325&x1326)==x1327)>>x1328);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1329 = -1LL;
	int32_t x1330 = -1;
	uint32_t x1331 = UINT32_MAX;
	uint16_t x1332 = 2U;
	int32_t t50 = -16562497;

	t50 = (((x1329&x1330)==x1331)>>x1332);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1457 = UINT16_MAX;
	int16_t x1458 = INT16_MIN;
	int64_t x1459 = INT64_MIN;
	static volatile int32_t t51 = 59760;

	t51 = (((x1457&x1458)==x1459)>>x1460);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x1465 = UINT32_MAX;
	static volatile uint16_t x1466 = 2009U;
	uint8_t x1467 = UINT8_MAX;
	static volatile int8_t x1468 = 1;
	int32_t t52 = 1510641;

	t52 = (((x1465&x1466)==x1467)>>x1468);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1521 = 46606567U;
	int8_t x1522 = 10;
	int8_t x1523 = 11;
	volatile int32_t x1524 = 0;
	int32_t t53 = -651009476;

	t53 = (((x1521&x1522)==x1523)>>x1524);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1549 = -8046;
	static uint8_t x1552 = 25U;
	int32_t t54 = 402;

	t54 = (((x1549&x1550)==x1551)>>x1552);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1565 = -1;
	uint64_t x1566 = 140521536414541LLU;
	int32_t x1567 = INT32_MIN;
	int8_t x1568 = 1;
	int32_t t55 = -476815;

	t55 = (((x1565&x1566)==x1567)>>x1568);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1573 = -596;
	int32_t t56 = 107216173;

	t56 = (((x1573&x1574)==x1575)>>x1576);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1629 = INT32_MIN;
	int16_t x1630 = -1;
	volatile int64_t x1631 = -1LL;
	volatile int8_t x1632 = 1;
	volatile int32_t t57 = 66269488;

	t57 = (((x1629&x1630)==x1631)>>x1632);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x1633 = 10U;
	uint32_t x1634 = UINT32_MAX;
	int32_t x1635 = -5445;
	uint8_t x1636 = 1U;
	static int32_t t58 = -190447;

	t58 = (((x1633&x1634)==x1635)>>x1636);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1705 = 2722211298330LL;
	int32_t x1706 = INT32_MAX;
	int16_t x1707 = 1;
	uint64_t x1708 = 0LLU;
	static int32_t t59 = 453;

	t59 = (((x1705&x1706)==x1707)>>x1708);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1745 = 108084;
	int16_t x1746 = INT16_MIN;
	int64_t x1747 = INT64_MIN;
	uint16_t x1748 = 3U;
	volatile int32_t t60 = -1;

	t60 = (((x1745&x1746)==x1747)>>x1748);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x1753 = 2U;
	int16_t x1755 = 39;
	int16_t x1756 = 3;
	static volatile int32_t t61 = -18;

	t61 = (((x1753&x1754)==x1755)>>x1756);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1757 = INT32_MIN;
	static int16_t x1758 = INT16_MAX;
	static int16_t x1759 = 88;
	volatile int32_t t62 = -10791;

	t62 = (((x1757&x1758)==x1759)>>x1760);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x1762 = INT16_MIN;
	uint8_t x1763 = UINT8_MAX;
	uint8_t x1764 = 12U;
	static int32_t t63 = 1879579;

	t63 = (((x1761&x1762)==x1763)>>x1764);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1765 = UINT16_MAX;
	uint32_t x1766 = 327U;
	uint64_t x1768 = 0LLU;
	volatile int32_t t64 = -174;

	t64 = (((x1765&x1766)==x1767)>>x1768);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x1797 = INT64_MAX;
	int8_t x1798 = INT8_MIN;
	volatile uint8_t x1800 = 1U;

	t65 = (((x1797&x1798)==x1799)>>x1800);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x1801 = INT64_MIN;
	volatile int32_t x1803 = INT32_MAX;
	int8_t x1804 = 0;

	t66 = (((x1801&x1802)==x1803)>>x1804);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x1805 = INT8_MAX;
	static volatile uint32_t x1806 = 6534U;
	int64_t x1807 = INT64_MAX;
	uint64_t x1808 = 3LLU;
	volatile int32_t t67 = 588570;

	t67 = (((x1805&x1806)==x1807)>>x1808);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x1821 = INT64_MIN;
	uint32_t x1822 = UINT32_MAX;

	t68 = (((x1821&x1822)==x1823)>>x1824);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1887 = INT64_MAX;
	int8_t x1888 = 1;
	int32_t t69 = 1;

	t69 = (((x1885&x1886)==x1887)>>x1888);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1897 = UINT64_MAX;
	int32_t x1898 = INT32_MIN;
	int8_t x1899 = -1;
	uint32_t x1900 = 0U;
	volatile int32_t t70 = -3;

	t70 = (((x1897&x1898)==x1899)>>x1900);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1909 = INT64_MIN;
	static int32_t x1910 = -11475;
	volatile int16_t x1911 = INT16_MIN;
	uint8_t x1912 = 20U;

	t71 = (((x1909&x1910)==x1911)>>x1912);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1953 = -1LL;
	volatile int16_t x1954 = INT16_MAX;
	uint64_t x1955 = 73151LLU;
	int32_t t72 = -810358070;

	t72 = (((x1953&x1954)==x1955)>>x1956);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1957 = -1;
	int32_t x1958 = 4069214;
	volatile int32_t x1959 = INT32_MAX;
	uint8_t x1960 = 10U;
	int32_t t73 = -4033;

	t73 = (((x1957&x1958)==x1959)>>x1960);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1977 = 3U;
	uint16_t x1978 = 16U;
	volatile int8_t x1979 = INT8_MAX;
	uint8_t x1980 = 2U;
	volatile int32_t t74 = -14;

	t74 = (((x1977&x1978)==x1979)>>x1980);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x2058 = UINT32_MAX;
	int16_t x2059 = -1;
	uint16_t x2060 = 24U;

	t75 = (((x2057&x2058)==x2059)>>x2060);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2062 = INT16_MIN;
	static uint8_t x2063 = 0U;
	uint16_t x2064 = 1U;
	volatile int32_t t76 = -9662266;

	t76 = (((x2061&x2062)==x2063)>>x2064);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2071 = INT8_MIN;
	uint32_t x2072 = 3U;
	int32_t t77 = -949944986;

	t77 = (((x2069&x2070)==x2071)>>x2072);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2088 = 2;
	int32_t t78 = -4409434;

	t78 = (((x2085&x2086)==x2087)>>x2088);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x2169 = INT8_MAX;
	static int8_t x2170 = INT8_MAX;
	uint64_t x2171 = 4446LLU;
	uint64_t x2172 = 0LLU;

	t79 = (((x2169&x2170)==x2171)>>x2172);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2197 = INT64_MIN;
	uint64_t x2198 = UINT64_MAX;
	static int16_t x2199 = INT16_MIN;
	uint16_t x2200 = 22U;

	t80 = (((x2197&x2198)==x2199)>>x2200);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x2232 = 25U;
	static int32_t t81 = -1621243;

	t81 = (((x2229&x2230)==x2231)>>x2232);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x2313 = 809435U;
	int16_t x2314 = INT16_MAX;
	int64_t x2315 = 167LL;
	uint16_t x2316 = 7U;
	static volatile int32_t t82 = -9657;

	t82 = (((x2313&x2314)==x2315)>>x2316);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2333 = UINT16_MAX;
	uint8_t x2334 = UINT8_MAX;
	static uint32_t x2335 = 1025852U;
	volatile int64_t x2336 = 8LL;
	int32_t t83 = 54896;

	t83 = (((x2333&x2334)==x2335)>>x2336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2385 = 487334;
	volatile int8_t x2386 = INT8_MIN;
	uint16_t x2387 = UINT16_MAX;
	uint8_t x2388 = 7U;
	volatile int32_t t84 = 1292;

	t84 = (((x2385&x2386)==x2387)>>x2388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2405 = INT8_MIN;
	int32_t x2406 = INT32_MAX;
	uint16_t x2408 = 28U;
	int32_t t85 = -8;

	t85 = (((x2405&x2406)==x2407)>>x2408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2438 = INT64_MIN;
	uint64_t x2439 = UINT64_MAX;

	t86 = (((x2437&x2438)==x2439)>>x2440);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2450 = -1;
	int8_t x2452 = 1;
	volatile int32_t t87 = -12;

	t87 = (((x2449&x2450)==x2451)>>x2452);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2482 = -1;
	uint64_t x2483 = UINT64_MAX;
	uint16_t x2484 = 1U;
	static volatile int32_t t88 = -257218;

	t88 = (((x2481&x2482)==x2483)>>x2484);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2485 = INT8_MIN;
	int32_t x2487 = INT32_MAX;
	volatile uint16_t x2488 = 5U;
	volatile int32_t t89 = 4483;

	t89 = (((x2485&x2486)==x2487)>>x2488);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2537 = 5;
	int8_t x2539 = -41;
	uint8_t x2540 = 16U;

	t90 = (((x2537&x2538)==x2539)>>x2540);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x2585 = 1;
	uint64_t x2586 = UINT64_MAX;
	static int8_t x2587 = -23;
	int32_t x2588 = 6;
	int32_t t91 = -701;

	t91 = (((x2585&x2586)==x2587)>>x2588);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2602 = 1020025LLU;
	volatile uint32_t x2603 = UINT32_MAX;
	static volatile uint8_t x2604 = 29U;
	int32_t t92 = -303155755;

	t92 = (((x2601&x2602)==x2603)>>x2604);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2641 = UINT8_MAX;
	uint32_t x2642 = UINT32_MAX;
	int16_t x2643 = -1;
	uint8_t x2644 = 26U;
	volatile int32_t t93 = 13;

	t93 = (((x2641&x2642)==x2643)>>x2644);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x2689 = 56U;
	int32_t x2691 = INT32_MIN;
	uint8_t x2692 = 0U;

	t94 = (((x2689&x2690)==x2691)>>x2692);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2758 = 100268034695779LLU;
	volatile uint8_t x2759 = 14U;
	volatile int32_t t95 = 229317589;

	t95 = (((x2757&x2758)==x2759)>>x2760);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x2761 = INT32_MIN;
	uint32_t x2762 = 334365268U;
	volatile uint16_t x2763 = 3U;
	static uint16_t x2764 = 1U;

	t96 = (((x2761&x2762)==x2763)>>x2764);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2797 = UINT8_MAX;
	static volatile int64_t x2798 = INT64_MAX;
	volatile int32_t x2799 = INT32_MIN;
	static uint16_t x2800 = 2U;
	static volatile int32_t t97 = -906471;

	t97 = (((x2797&x2798)==x2799)>>x2800);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x2822 = 28;
	uint32_t x2823 = UINT32_MAX;
	int32_t t98 = 7;

	t98 = (((x2821&x2822)==x2823)>>x2824);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x2905 = INT64_MAX;
	int16_t x2906 = -11;
	int32_t x2908 = 1;
	volatile int32_t t99 = -26;

	t99 = (((x2905&x2906)==x2907)>>x2908);

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

