#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x72 = UINT8_MAX;
int64_t x80 = INT64_MIN;
uint32_t t4 = UINT32_MAX;
static volatile int8_t x208 = INT8_MAX;
uint32_t x257 = 425328978U;
uint8_t x295 = UINT8_MAX;
int16_t x296 = 15;
int32_t x445 = 0;
int16_t x499 = 1;
uint16_t x500 = 0U;
int8_t x503 = 36;
volatile int32_t x520 = INT32_MAX;
volatile int16_t x543 = -1;
uint64_t t15 = 49359LLU;
int16_t x629 = INT16_MAX;
uint32_t x631 = UINT32_MAX;
volatile uint64_t t17 = 6963596529LLU;
static int16_t x697 = 2706;
static int64_t x712 = INT64_MIN;
volatile uint32_t t23 = 3U;
static volatile int8_t x897 = 3;
volatile int8_t x907 = INT8_MIN;
int64_t x920 = 3LL;
static uint64_t x1035 = UINT64_MAX;
uint16_t x1036 = UINT16_MAX;
volatile int32_t t30 = 157323;
int8_t x1051 = INT8_MAX;
static int32_t x1052 = 1;
int16_t x1110 = -1;
uint32_t x1111 = 2374100U;
uint8_t x1126 = 39U;
static int8_t x1127 = INT8_MAX;
static uint8_t x1128 = 13U;
static volatile int64_t x1146 = INT64_MAX;
int32_t t35 = -7781;
uint64_t x1157 = UINT64_MAX;
uint16_t x1173 = 4U;
int32_t t38 = 388757848;
uint16_t x1305 = 9U;
uint8_t x1306 = 7U;
uint8_t x1371 = 10U;
static int16_t x1372 = INT16_MAX;
volatile int32_t x1411 = INT32_MIN;
uint64_t x1481 = 4086998LLU;
volatile int64_t x1484 = INT64_MIN;
uint64_t t46 = 2979764846758559188LLU;
volatile uint64_t t47 = 19272415579290828LLU;
int8_t x1632 = 24;
uint32_t t51 = 126U;
volatile uint16_t x1726 = 73U;
uint8_t x1729 = 1U;
static uint8_t x1815 = 12U;
volatile int8_t x1850 = INT8_MIN;
int8_t x1852 = 1;
uint8_t x1865 = 31U;
static int32_t t61 = INT32_MAX;
static uint32_t x1953 = 1U;
int32_t t64 = -11765780;
static uint8_t x2025 = UINT8_MAX;
int8_t x2054 = -9;
int32_t x2056 = INT32_MIN;
volatile int32_t t66 = 4349;
int32_t x2151 = 0;
int8_t x2175 = INT8_MIN;
static volatile int32_t t71 = 52605660;
uint64_t x2250 = 241LLU;
uint8_t x2251 = 0U;
uint8_t x2265 = 1U;
static uint32_t x2266 = 5633U;
static volatile int64_t x2267 = 6670067824LL;
static int16_t x2328 = INT16_MIN;
volatile int16_t x2334 = INT16_MIN;
volatile uint16_t x2397 = UINT16_MAX;
volatile int32_t t77 = 2;
static int16_t x2401 = INT16_MAX;
volatile int32_t t79 = 5091;
int8_t x2444 = -14;
volatile int64_t x2487 = 315294495LL;
int64_t x2549 = 78LL;
static int64_t x2553 = 1373LL;
uint64_t x2577 = 4612LLU;
volatile int32_t t86 = 858601;
int64_t x2658 = -1LL;
static volatile uint32_t x2660 = 1U;
volatile int16_t x2678 = -6;
volatile uint16_t x2711 = 2U;
volatile uint64_t x2785 = 8858210735424516533LLU;
static int16_t x2922 = INT16_MIN;
uint32_t x2923 = UINT32_MAX;
uint32_t x2962 = UINT32_MAX;
int32_t t96 = -1560;
int8_t x3038 = 1;
uint16_t x3039 = 12U;
uint8_t x3088 = UINT8_MAX;


void f0(void) {
	static uint64_t x69 = 0LLU;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = -67;
	static uint64_t t0 = 927128100938LLU;

	t0 = (x69<<((x70+x71)&x72));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 6722589LLU;
	int32_t x79 = INT32_MAX;
	static uint32_t t1 = UINT32_MAX;

	t1 = (x77<<((x78+x79)&x80));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x85 = 23U;
	static volatile int8_t x86 = -2;
	volatile int16_t x87 = INT16_MAX;
	static uint16_t x88 = 11U;
	uint32_t t2 = 5404755U;

	t2 = (x85<<((x86+x87)&x88));

	if (t2 != 11776U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x113 = 3459337;
	volatile int32_t x114 = 27953;
	uint8_t x115 = 37U;
	int64_t x116 = INT64_MIN;
	int32_t t3 = 769958;

	t3 = (x113<<((x114+x115)&x116));

	if (t3 != 3459337) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x161 = UINT32_MAX;
	int32_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MIN;

	t4 = (x161<<((x162+x163)&x164));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x181 = UINT64_MAX;
	uint16_t x182 = 0U;
	int64_t x183 = INT64_MIN;
	uint32_t x184 = 50037U;
	uint64_t t5 = UINT64_MAX;

	t5 = (x181<<((x182+x183)&x184));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x205 = 0;
	int16_t x206 = 15;
	int64_t x207 = -4LL;
	volatile int32_t t6 = 71283;

	t6 = (x205<<((x206+x207)&x208));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = 85;
	volatile uint64_t x211 = 0LLU;
	int64_t x212 = INT64_MIN;
	int32_t t7 = INT32_MAX;

	t7 = (x209<<((x210+x211)&x212));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x258 = 2U;
	int8_t x259 = -1;
	static uint64_t x260 = UINT64_MAX;
	uint32_t t8 = 9540777U;

	t8 = (x257<<((x258+x259)&x260));

	if (t8 != 850657956U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int32_t x294 = -771827842;
	uint32_t t9 = 152089512U;

	t9 = (x293<<((x294+x295)&x296));

	if (t9 != 4294959104U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x313 = 14;
	uint16_t x314 = 2U;
	uint8_t x315 = 14U;
	static int32_t x316 = INT32_MAX;
	volatile int32_t t10 = -6937421;

	t10 = (x313<<((x314+x315)&x316));

	if (t10 != 917504) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x446 = UINT32_MAX;
	volatile uint16_t x447 = UINT16_MAX;
	int8_t x448 = 3;
	volatile int32_t t11 = 55;

	t11 = (x445<<((x446+x447)&x448));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x497 = UINT32_MAX;
	static uint8_t x498 = 44U;
	static volatile uint32_t t12 = UINT32_MAX;

	t12 = (x497<<((x498+x499)&x500));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x501 = UINT16_MAX;
	uint32_t x502 = UINT32_MAX;
	int32_t x504 = 5976;
	volatile int32_t t13 = -285075365;

	t13 = (x501<<((x502+x503)&x504));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x517 = 56U;
	int32_t x518 = 2;
	int32_t x519 = INT32_MIN;
	uint32_t t14 = 44320U;

	t14 = (x517<<((x518+x519)&x520));

	if (t14 != 224U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x541 = 282785431LLU;
	uint8_t x542 = 47U;
	int32_t x544 = -1;

	t15 = (x541<<((x542+x543)&x544));

	if (t15 != 13665539750558171136LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x630 = UINT32_MAX;
	volatile int64_t x632 = INT64_MIN;
	static volatile int32_t t16 = 2103068;

	t16 = (x629<<((x630+x631)&x632));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x645 = 345044851904978227LLU;
	int8_t x646 = INT8_MIN;
	static volatile uint32_t x647 = 2U;
	uint32_t x648 = 46U;

	t17 = (x645<<((x646+x647)&x648));

	if (t17 != 1380179407619912908LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x698 = UINT16_MAX;
	uint8_t x699 = UINT8_MAX;
	uint64_t x700 = 14LLU;
	volatile int32_t t18 = 322;

	t18 = (x697<<((x698+x699)&x700));

	if (t18 != 44335104) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x705 = 0U;
	int8_t x706 = INT8_MIN;
	int16_t x707 = INT16_MIN;
	volatile uint16_t x708 = 16U;
	volatile int32_t t19 = 3;

	t19 = (x705<<((x706+x707)&x708));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x709 = 1898U;
	volatile int32_t x710 = -21;
	int8_t x711 = INT8_MAX;
	int32_t t20 = -408;

	t20 = (x709<<((x710+x711)&x712));

	if (t20 != 1898) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x729 = INT8_MAX;
	int8_t x730 = INT8_MAX;
	volatile uint8_t x731 = 7U;
	int8_t x732 = 0;
	int32_t t21 = -2761;

	t21 = (x729<<((x730+x731)&x732));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x817 = 1649283603935LLU;
	int32_t x818 = -1;
	int32_t x819 = -39;
	int16_t x820 = 1;
	static volatile uint64_t t22 = 2075626473738998LLU;

	t22 = (x817<<((x818+x819)&x820));

	if (t22 != 1649283603935LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x837 = UINT32_MAX;
	volatile int64_t x838 = -249LL;
	int16_t x839 = 0;
	volatile uint16_t x840 = 197U;

	t23 = (x837<<((x838+x839)&x840));

	if (t23 != 4294967264U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x885 = INT8_MAX;
	volatile int32_t x886 = -233714;
	int32_t x887 = -2914;
	uint8_t x888 = 1U;
	volatile int32_t t24 = 8529;

	t24 = (x885<<((x886+x887)&x888));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x898 = INT64_MIN;
	int32_t x899 = 0;
	static volatile uint32_t x900 = UINT32_MAX;
	static volatile int32_t t25 = -209;

	t25 = (x897<<((x898+x899)&x900));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x905 = 491671206276LLU;
	int16_t x906 = -15976;
	volatile uint8_t x908 = 6U;
	volatile uint64_t t26 = 484795436543680LLU;

	t26 = (x905<<((x906+x907)&x908));

	if (t26 != 491671206276LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x913 = 8;
	int8_t x914 = 2;
	int64_t x915 = INT64_MIN;
	uint16_t x916 = 7767U;
	volatile int32_t t27 = -18713;

	t27 = (x913<<((x914+x915)&x916));

	if (t27 != 32) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x917 = UINT16_MAX;
	volatile uint16_t x918 = 0U;
	int32_t x919 = INT32_MAX;
	int32_t t28 = 34951390;

	t28 = (x917<<((x918+x919)&x920));

	if (t28 != 524280) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x961 = 28U;
	int8_t x962 = 1;
	static int32_t x963 = INT32_MIN;
	uint32_t x964 = 3116U;
	volatile uint32_t t29 = 40410836U;

	t29 = (x961<<((x962+x963)&x964));

	if (t29 != 28U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1033 = 0;
	volatile uint8_t x1034 = 15U;

	t30 = (x1033<<((x1034+x1035)&x1036));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1049 = 15020399221377LLU;
	int16_t x1050 = -1543;
	static uint64_t t31 = 55944091LLU;

	t31 = (x1049<<((x1050+x1051)&x1052));

	if (t31 != 15020399221377LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1109 = 3U;
	uint8_t x1112 = 10U;
	volatile uint32_t t32 = 723U;

	t32 = (x1109<<((x1110+x1111)&x1112));

	if (t32 != 12U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1121 = 62466445729LL;
	int64_t x1122 = INT64_MIN;
	volatile int32_t x1123 = 471;
	int32_t x1124 = 420303386;
	volatile int64_t t33 = 221520264189280444LL;

	t33 = (x1121<<((x1122+x1123)&x1124));

	if (t33 != 16375203949182976LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1125 = 424LLU;
	uint64_t t34 = 135373492LLU;

	t34 = (x1125<<((x1126+x1127)&x1128));

	if (t34 != 6784LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1145 = 194972477;
	int8_t x1147 = INT8_MIN;
	static uint8_t x1148 = 1U;

	t35 = (x1145<<((x1146+x1147)&x1148));

	if (t35 != 389944954) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1149 = 0;
	uint8_t x1150 = UINT8_MAX;
	uint64_t x1151 = 413LLU;
	volatile uint8_t x1152 = 27U;
	static int32_t t36 = -7371024;

	t36 = (x1149<<((x1150+x1151)&x1152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1158 = 2021293U;
	uint8_t x1159 = 11U;
	int64_t x1160 = INT64_MIN;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x1157<<((x1158+x1159)&x1160));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1174 = INT64_MAX;
	int64_t x1175 = -1LL;
	static int64_t x1176 = INT64_MIN;

	t38 = (x1173<<((x1174+x1175)&x1176));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1293 = 46394U;
	int8_t x1294 = INT8_MAX;
	volatile int64_t x1295 = INT64_MIN;
	static uint64_t x1296 = 115209LLU;
	volatile uint32_t t39 = 109U;

	t39 = (x1293<<((x1294+x1295)&x1296));

	if (t39 != 23753728U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x1307 = UINT32_MAX;
	int32_t x1308 = -1;
	volatile int32_t t40 = 0;

	t40 = (x1305<<((x1306+x1307)&x1308));

	if (t40 != 576) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1321 = INT8_MAX;
	int16_t x1322 = -1;
	uint8_t x1323 = 14U;
	static uint8_t x1324 = 27U;
	volatile int32_t t41 = 14954;

	t41 = (x1321<<((x1322+x1323)&x1324));

	if (t41 != 65024) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1325 = 58593318LL;
	int64_t x1326 = -5030306604172023LL;
	int64_t x1327 = INT64_MAX;
	uint8_t x1328 = 9U;
	int64_t t42 = 413528710772194021LL;

	t42 = (x1325<<((x1326+x1327)&x1328));

	if (t42 != 14999889408LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1337 = 222098858LLU;
	static volatile uint32_t x1338 = 62U;
	uint64_t x1339 = 1218259236453LLU;
	uint64_t x1340 = 10LLU;
	volatile uint64_t t43 = 28786013915265229LLU;

	t43 = (x1337<<((x1338+x1339)&x1340));

	if (t43 != 888395432LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1369 = 247940043U;
	int16_t x1370 = INT16_MIN;
	static uint32_t t44 = 922428U;

	t44 = (x1369<<((x1370+x1371)&x1372));

	if (t44 != 487533568U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1409 = 2;
	volatile uint8_t x1410 = 12U;
	volatile int32_t x1412 = 14;
	int32_t t45 = 7142;

	t45 = (x1409<<((x1410+x1411)&x1412));

	if (t45 != 8192) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x1482 = 1U;
	volatile uint16_t x1483 = 594U;

	t46 = (x1481<<((x1482+x1483)&x1484));

	if (t46 != 4086998LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1553 = 12367561LLU;
	int8_t x1554 = -1;
	volatile int64_t x1555 = 1LL;
	int64_t x1556 = INT64_MIN;

	t47 = (x1553<<((x1554+x1555)&x1556));

	if (t47 != 12367561LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1629 = 1409U;
	int32_t x1630 = -1;
	static int16_t x1631 = -9806;
	int32_t t48 = 42628428;

	t48 = (x1629<<((x1630+x1631)&x1632));

	if (t48 != 92340224) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1657 = 4U;
	volatile int64_t x1658 = -1LL;
	volatile uint16_t x1659 = 782U;
	int16_t x1660 = INT16_MIN;
	volatile int32_t t49 = -3684;

	t49 = (x1657<<((x1658+x1659)&x1660));

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x1673 = INT64_MAX;
	static uint32_t x1674 = UINT32_MAX;
	uint16_t x1675 = 9013U;
	uint16_t x1676 = 1U;
	int64_t t50 = INT64_MAX;

	t50 = (x1673<<((x1674+x1675)&x1676));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1697 = 696079177U;
	volatile int16_t x1698 = -26;
	int8_t x1699 = INT8_MIN;
	uint8_t x1700 = 20U;

	t51 = (x1697<<((x1698+x1699)&x1700));

	if (t51 != 2547332240U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1725 = INT16_MAX;
	static int32_t x1727 = -1;
	static uint16_t x1728 = 791U;
	static int32_t t52 = -64735579;

	t52 = (x1725<<((x1726+x1727)&x1728));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1730 = 1U;
	int16_t x1731 = -1;
	static int8_t x1732 = INT8_MIN;
	int32_t t53 = 2930;

	t53 = (x1729<<((x1730+x1731)&x1732));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1753 = INT32_MAX;
	static uint64_t x1754 = 13813469LLU;
	volatile int8_t x1755 = INT8_MIN;
	int32_t x1756 = INT32_MIN;
	volatile int32_t t54 = INT32_MAX;

	t54 = (x1753<<((x1754+x1755)&x1756));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1757 = 114234;
	uint64_t x1758 = UINT64_MAX;
	uint16_t x1759 = 3881U;
	uint8_t x1760 = 0U;
	int32_t t55 = 21;

	t55 = (x1757<<((x1758+x1759)&x1760));

	if (t55 != 114234) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1761 = 304U;
	int8_t x1762 = INT8_MAX;
	uint16_t x1763 = 5U;
	uint64_t x1764 = 343LLU;
	int32_t t56 = -1610562;

	t56 = (x1761<<((x1762+x1763)&x1764));

	if (t56 != 4864) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1813 = 4349U;
	uint64_t x1814 = 609915364372LLU;
	uint16_t x1816 = 1U;
	volatile int32_t t57 = -10;

	t57 = (x1813<<((x1814+x1815)&x1816));

	if (t57 != 4349) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x1849 = 25428U;
	static int32_t x1851 = -1;
	static uint32_t t58 = 0U;

	t58 = (x1849<<((x1850+x1851)&x1852));

	if (t58 != 50856U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1866 = -37;
	uint16_t x1867 = UINT16_MAX;
	static volatile int64_t x1868 = INT64_MIN;
	volatile int32_t t59 = 15350;

	t59 = (x1865<<((x1866+x1867)&x1868));

	if (t59 != 31) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1925 = 9364;
	int32_t x1926 = 3;
	uint8_t x1927 = 1U;
	int32_t x1928 = INT32_MIN;
	volatile int32_t t60 = -23;

	t60 = (x1925<<((x1926+x1927)&x1928));

	if (t60 != 9364) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1941 = INT32_MAX;
	uint16_t x1942 = 1199U;
	static volatile int32_t x1943 = -143;
	int64_t x1944 = INT64_MIN;

	t61 = (x1941<<((x1942+x1943)&x1944));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1949 = 1U;
	int16_t x1950 = 23;
	int8_t x1951 = 1;
	static int64_t x1952 = -1LL;
	volatile int32_t t62 = 944658;

	t62 = (x1949<<((x1950+x1951)&x1952));

	if (t62 != 16777216) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1954 = -1;
	static uint16_t x1955 = UINT16_MAX;
	int64_t x1956 = INT64_MIN;
	uint32_t t63 = 5649989U;

	t63 = (x1953<<((x1954+x1955)&x1956));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2017 = 1U;
	int16_t x2018 = INT16_MAX;
	int32_t x2019 = -10;
	uint16_t x2020 = 2U;

	t64 = (x2017<<((x2018+x2019)&x2020));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2026 = 24;
	int32_t x2027 = 522789;
	static volatile int64_t x2028 = INT64_MIN;
	volatile int32_t t65 = -14120;

	t65 = (x2025<<((x2026+x2027)&x2028));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2053 = 768U;
	static int32_t x2055 = 49320332;

	t66 = (x2053<<((x2054+x2055)&x2056));

	if (t66 != 768) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2133 = 746543622U;
	uint32_t x2134 = 1879U;
	uint32_t x2135 = 16206787U;
	uint8_t x2136 = UINT8_MAX;
	uint32_t t67 = 304642380U;

	t67 = (x2133<<((x2134+x2135)&x2136));

	if (t67 != 402653184U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2149 = UINT32_MAX;
	uint32_t x2150 = 562U;
	int32_t x2152 = INT32_MIN;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (x2149<<((x2150+x2151)&x2152));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2173 = 1193;
	static volatile int32_t x2174 = 1;
	volatile uint8_t x2176 = 5U;
	static volatile int32_t t69 = 330526;

	t69 = (x2173<<((x2174+x2175)&x2176));

	if (t69 != 2386) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2189 = INT64_MAX;
	uint64_t x2190 = 616223LLU;
	int32_t x2191 = 19991193;
	static int8_t x2192 = 1;
	int64_t t70 = INT64_MAX;

	t70 = (x2189<<((x2190+x2191)&x2192));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x2213 = 0U;
	uint32_t x2214 = UINT32_MAX;
	int16_t x2215 = INT16_MIN;
	uint8_t x2216 = 29U;

	t71 = (x2213<<((x2214+x2215)&x2216));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2249 = 192U;
	volatile int64_t x2252 = INT64_MIN;
	int32_t t72 = -433;

	t72 = (x2249<<((x2250+x2251)&x2252));

	if (t72 != 192) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2268 = INT64_MIN;
	volatile int32_t t73 = 121526;

	t73 = (x2265<<((x2266+x2267)&x2268));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x2325 = UINT32_MAX;
	int8_t x2326 = 2;
	int8_t x2327 = INT8_MAX;
	static uint32_t t74 = UINT32_MAX;

	t74 = (x2325<<((x2326+x2327)&x2328));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x2333 = UINT8_MAX;
	int16_t x2335 = 1;
	int32_t x2336 = 7;
	int32_t t75 = 1397393;

	t75 = (x2333<<((x2334+x2335)&x2336));

	if (t75 != 510) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2389 = 0U;
	int64_t x2390 = -1LL;
	volatile int32_t x2391 = INT32_MIN;
	uint8_t x2392 = 13U;
	int32_t t76 = -21675;

	t76 = (x2389<<((x2390+x2391)&x2392));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2398 = 1;
	uint16_t x2399 = UINT16_MAX;
	volatile int64_t x2400 = INT64_MIN;

	t77 = (x2397<<((x2398+x2399)&x2400));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x2402 = INT64_MIN;
	int8_t x2403 = 2;
	uint64_t x2404 = 18207871020733929LLU;
	int32_t t78 = 2567731;

	t78 = (x2401<<((x2402+x2403)&x2404));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2421 = INT16_MAX;
	int16_t x2422 = INT16_MIN;
	uint64_t x2423 = 35754343818943518LLU;
	volatile int64_t x2424 = INT64_MIN;

	t79 = (x2421<<((x2422+x2423)&x2424));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2441 = INT16_MAX;
	static uint8_t x2442 = 15U;
	volatile int32_t x2443 = -1;
	int32_t t80 = 403262934;

	t80 = (x2441<<((x2442+x2443)&x2444));

	if (t80 != 131068) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2485 = INT8_MAX;
	int32_t x2486 = INT32_MIN;
	volatile uint16_t x2488 = 3U;
	static volatile int32_t t81 = 1;

	t81 = (x2485<<((x2486+x2487)&x2488));

	if (t81 != 1016) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x2489 = 0LLU;
	int64_t x2490 = -1LL;
	static volatile int8_t x2491 = -16;
	uint32_t x2492 = 2U;
	volatile uint64_t t82 = 1264451837LLU;

	t82 = (x2489<<((x2490+x2491)&x2492));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x2550 = UINT8_MAX;
	volatile uint16_t x2551 = 2U;
	static uint8_t x2552 = 59U;
	int64_t t83 = 7265002LL;

	t83 = (x2549<<((x2550+x2551)&x2552));

	if (t83 != 156LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2554 = 4554305892345261496LLU;
	static volatile int32_t x2555 = INT32_MAX;
	int16_t x2556 = 31;
	volatile int64_t t84 = -223459530LL;

	t84 = (x2553<<((x2554+x2555)&x2556));

	if (t84 != 11517558784LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2578 = 6507342U;
	static int64_t x2579 = -1LL;
	int32_t x2580 = INT32_MIN;
	uint64_t t85 = 505503LLU;

	t85 = (x2577<<((x2578+x2579)&x2580));

	if (t85 != 4612LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x2633 = 26708U;
	uint8_t x2634 = UINT8_MAX;
	int8_t x2635 = 0;
	volatile int16_t x2636 = INT16_MIN;

	t86 = (x2633<<((x2634+x2635)&x2636));

	if (t86 != 26708) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2657 = 0;
	volatile int64_t x2659 = -1LL;
	static volatile int32_t t87 = 470459;

	t87 = (x2657<<((x2658+x2659)&x2660));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2677 = UINT32_MAX;
	static uint16_t x2679 = UINT16_MAX;
	uint32_t x2680 = 3U;
	uint32_t t88 = 20U;

	t88 = (x2677<<((x2678+x2679)&x2680));

	if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x2701 = 49237U;
	int32_t x2702 = INT32_MAX;
	int8_t x2703 = INT8_MIN;
	static uint16_t x2704 = 13U;
	uint32_t t89 = 10U;

	t89 = (x2701<<((x2702+x2703)&x2704));

	if (t89 != 403349504U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2709 = 807;
	static volatile uint16_t x2710 = 9U;
	volatile uint16_t x2712 = 3053U;
	volatile int32_t t90 = 1;

	t90 = (x2709<<((x2710+x2711)&x2712));

	if (t90 != 413184) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x2761 = 4264;
	static int16_t x2762 = INT16_MAX;
	int64_t x2763 = -16559774225817LL;
	static volatile uint8_t x2764 = 20U;
	int32_t t91 = -84507540;

	t91 = (x2761<<((x2762+x2763)&x2764));

	if (t91 != 68224) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x2786 = UINT16_MAX;
	volatile int8_t x2787 = 1;
	volatile int8_t x2788 = 40;
	uint64_t t92 = 5548013092742658293LLU;

	t92 = (x2785<<((x2786+x2787)&x2788));

	if (t92 != 8858210735424516533LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2861 = 16U;
	volatile int8_t x2862 = INT8_MAX;
	static uint8_t x2863 = 21U;
	volatile int16_t x2864 = INT16_MIN;
	static int32_t t93 = 3328;

	t93 = (x2861<<((x2862+x2863)&x2864));

	if (t93 != 16) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2869 = 2965629LLU;
	uint32_t x2870 = 30U;
	int64_t x2871 = INT64_MIN;
	int16_t x2872 = INT16_MAX;
	static volatile uint64_t t94 = 30056076584223LLU;

	t94 = (x2869<<((x2870+x2871)&x2872));

	if (t94 != 3184319891767296LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2921 = 98827;
	volatile uint16_t x2924 = 0U;
	int32_t t95 = 126142654;

	t95 = (x2921<<((x2922+x2923)&x2924));

	if (t95 != 98827) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x2961 = 50;
	int32_t x2963 = INT32_MAX;
	int32_t x2964 = INT32_MIN;

	t96 = (x2961<<((x2962+x2963)&x2964));

	if (t96 != 50) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3037 = 2U;
	uint16_t x3040 = UINT16_MAX;
	int32_t t97 = -1266;

	t97 = (x3037<<((x3038+x3039)&x3040));

	if (t97 != 16384) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3081 = 3329U;
	int32_t x3082 = 72298;
	static uint16_t x3083 = 3U;
	int64_t x3084 = INT64_MIN;
	volatile int32_t t98 = 2965;

	t98 = (x3081<<((x3082+x3083)&x3084));

	if (t98 != 3329) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3085 = UINT16_MAX;
	uint8_t x3086 = 5U;
	int8_t x3087 = -1;
	volatile int32_t t99 = 1865;

	t99 = (x3085<<((x3086+x3087)&x3088));

	if (t99 != 1048560) { NG(); } else { ; }
	
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

