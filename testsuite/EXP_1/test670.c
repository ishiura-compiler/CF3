#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -4;
int8_t x33 = INT8_MIN;
int64_t x35 = -1LL;
volatile int64_t t1 = -132401500358905LL;
volatile int64_t t2 = 375248002LL;
int32_t t3 = 236305;
uint64_t x97 = 491924087LLU;
uint32_t x153 = 35245U;
uint16_t x156 = 29U;
uint16_t x162 = 31U;
uint8_t x170 = UINT8_MAX;
uint32_t x248 = 20U;
uint64_t t10 = 2080238047065900555LLU;
volatile int32_t x262 = -182236;
uint32_t x314 = 659U;
int64_t x373 = INT64_MAX;
int64_t x545 = -1LL;
int8_t x685 = INT8_MIN;
static int64_t x715 = INT64_MAX;
uint8_t x718 = UINT8_MAX;
volatile int64_t x773 = -2685684079198793LL;
static int32_t x774 = INT32_MAX;
uint16_t x966 = 1U;
uint8_t x968 = 10U;
int32_t x1170 = 454107;
uint64_t x1185 = UINT64_MAX;
int16_t x1186 = 3624;
int32_t x1210 = -3;
uint64_t x1211 = 876629516831LLU;
volatile uint64_t t31 = 276403243LLU;
uint16_t x1233 = 63U;
volatile int16_t x1235 = INT16_MIN;
static int32_t t32 = -73;
int16_t x1262 = INT16_MIN;
uint8_t x1264 = 2U;
uint64_t x1287 = UINT64_MAX;
static int8_t x1300 = 0;
int16_t x1346 = INT16_MAX;
int16_t x1370 = INT16_MIN;
uint32_t x1371 = 10418550U;
uint32_t x1372 = 1U;
int8_t x1423 = INT8_MIN;
int32_t t41 = -253791;
uint16_t x1426 = UINT16_MAX;
uint64_t t42 = 2LLU;
uint8_t x1452 = 5U;
int16_t x1530 = INT16_MAX;
uint64_t x1531 = UINT64_MAX;
int8_t x1536 = 1;
uint64_t x1590 = 103LLU;
volatile int64_t x1769 = -77578014107157LL;
static uint64_t t49 = 16885453466262LLU;
uint64_t x1794 = 202075446140432LLU;
volatile uint8_t x1796 = 0U;
int8_t x1815 = -3;
int16_t x1844 = 0;
volatile int64_t t54 = 48928359528351694LL;
uint8_t x1866 = 5U;
volatile int32_t x1905 = 166409788;
uint16_t x1907 = 67U;
int16_t x1935 = INT16_MIN;
uint8_t x1936 = 21U;
volatile uint64_t x1954 = 32703653369915LLU;
static int64_t x1955 = -1LL;
uint16_t x1956 = 2U;
uint32_t x1993 = 112990827U;
static volatile uint32_t t60 = 18123465U;
uint64_t x2001 = UINT64_MAX;
volatile uint64_t t61 = 1679LLU;
volatile uint32_t x2075 = 183U;
volatile uint16_t x2086 = UINT16_MAX;
static int8_t x2088 = 0;
uint16_t x2096 = 2U;
int8_t x2101 = INT8_MIN;
static uint8_t x2104 = 0U;
int32_t t65 = -222883;
volatile int8_t x2190 = 38;
int64_t x2258 = 1LL;
int32_t x2259 = INT32_MIN;
volatile uint8_t x2260 = 6U;
uint64_t x2389 = UINT64_MAX;
volatile int32_t x2390 = INT32_MIN;
int64_t x2465 = INT64_MIN;
int8_t x2466 = -61;
static int8_t x2467 = INT8_MAX;
int16_t x2481 = INT16_MIN;
int8_t x2482 = INT8_MIN;
volatile uint32_t t75 = 25832718U;
int8_t x2616 = 0;
int8_t x2629 = -3;
volatile uint64_t x2631 = 528758878121087LLU;
volatile uint64_t t78 = 8027845591LLU;
int8_t x2635 = 2;
int8_t x2636 = 38;
uint64_t x3059 = 497116852016570LLU;
int16_t x3064 = 3;
uint32_t x3088 = 2U;
volatile uint32_t x3094 = 944375U;
uint8_t x3096 = 1U;
volatile uint64_t t86 = 2346249389524LLU;
uint8_t x3196 = 25U;
int32_t x3236 = 1;
int8_t x3255 = 32;
volatile uint64_t t90 = 2LLU;
uint32_t x3397 = UINT32_MAX;
static uint8_t x3398 = 1U;
volatile uint32_t t91 = 231710595U;
uint8_t x3440 = 61U;
volatile uint64_t t93 = 13804382LLU;
int8_t x3510 = -12;
int16_t x3530 = 1;
int64_t t97 = 91583318805026820LL;
int64_t x3547 = INT64_MIN;
volatile int64_t t98 = 287420222047355264LL;


void f0(void) {
	uint16_t x21 = 3U;
	static int8_t x22 = INT8_MIN;
	static int32_t x23 = 6533552;
	int8_t x24 = 14;

	t0 = (((x21/x22)^x23)>>x24);

	if (t0 != 398) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x34 = 1U;
	volatile uint16_t x36 = 37U;

	t1 = (((x33/x34)^x35)>>x36);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x81 = INT64_MIN;
	int16_t x82 = -8;
	static volatile uint8_t x83 = 14U;
	uint8_t x84 = 58U;

	t2 = (((x81/x82)^x83)>>x84);

	if (t2 != 4LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x93 = -9497861;
	static int8_t x94 = -1;
	uint8_t x95 = 0U;
	int16_t x96 = 2;

	t3 = (((x93/x94)^x95)>>x96);

	if (t3 != 2374465) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x98 = INT64_MIN;
	int8_t x99 = 12;
	uint8_t x100 = 45U;
	volatile uint64_t t4 = 4361334764583LLU;

	t4 = (((x97/x98)^x99)>>x100);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x101 = 47;
	int8_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int8_t x104 = 1;
	int64_t t5 = -3647919836299619LL;

	t5 = (((x101/x102)^x103)>>x104);

	if (t5 != 4611686018427387880LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x154 = -1;
	int8_t x155 = INT8_MIN;
	volatile uint32_t t6 = 67559986U;

	t6 = (((x153/x154)^x155)>>x156);

	if (t6 != 7U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x161 = 39U;
	uint64_t x163 = 1195453975439823LLU;
	int16_t x164 = 30;
	volatile uint64_t t7 = 465LLU;

	t7 = (((x161/x162)^x163)>>x164);

	if (t7 != 1113353LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x169 = 3860179U;
	static int32_t x171 = 921;
	int8_t x172 = 1;
	uint32_t t8 = 85U;

	t8 = (((x169/x170)^x171)>>x172);

	if (t8 != 7260U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x177 = -185673;
	int32_t x178 = -1;
	volatile uint16_t x179 = 469U;
	static int8_t x180 = 1;
	int32_t t9 = -2;

	t9 = (((x177/x178)^x179)>>x180);

	if (t9 != 92750) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x245 = 111959U;
	uint64_t x246 = 336LLU;
	int16_t x247 = -2084;

	t10 = (((x245/x246)^x247)>>x248);

	if (t10 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x261 = 14419LLU;
	int16_t x263 = 1;
	uint8_t x264 = 12U;
	static volatile uint64_t t11 = 300056LLU;

	t11 = (((x261/x262)^x263)>>x264);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x313 = UINT8_MAX;
	uint16_t x315 = 56U;
	uint16_t x316 = 9U;
	volatile uint32_t t12 = 55334U;

	t12 = (((x313/x314)^x315)>>x316);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x374 = -1;
	int32_t x375 = -1823565;
	int8_t x376 = 28;
	int64_t t13 = -21839519266541981LL;

	t13 = (((x373/x374)^x375)>>x376);

	if (t13 != 34359738367LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x393 = -5LL;
	uint64_t x394 = 3399LLU;
	int8_t x395 = INT8_MAX;
	volatile uint8_t x396 = 35U;
	uint64_t t14 = 698402949639078597LLU;

	t14 = (((x393/x394)^x395)>>x396);

	if (t14 != 157949LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x465 = UINT32_MAX;
	uint64_t x466 = UINT64_MAX;
	volatile int64_t x467 = INT64_MIN;
	volatile uint64_t x468 = 12LLU;
	uint64_t t15 = 33183877694076LLU;

	t15 = (((x465/x466)^x467)>>x468);

	if (t15 != 2251799813685248LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x546 = INT64_MAX;
	uint64_t x547 = UINT64_MAX;
	static uint64_t x548 = 1LLU;
	volatile uint64_t t16 = 24422952299665362LLU;

	t16 = (((x545/x546)^x547)>>x548);

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x621 = UINT32_MAX;
	int64_t x622 = -4587695834802462LL;
	uint32_t x623 = 416U;
	uint16_t x624 = 1U;
	int64_t t17 = -593LL;

	t17 = (((x621/x622)^x623)>>x624);

	if (t17 != 208LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x665 = -1;
	uint8_t x666 = UINT8_MAX;
	volatile uint64_t x667 = UINT64_MAX;
	int16_t x668 = 0;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (((x665/x666)^x667)>>x668);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x686 = 107U;
	static int32_t x687 = -1;
	int16_t x688 = 1;
	static int32_t t19 = -656979517;

	t19 = (((x685/x686)^x687)>>x688);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x689 = INT32_MAX;
	static volatile uint64_t x690 = 7696LLU;
	static int16_t x691 = 48;
	uint8_t x692 = 11U;
	volatile uint64_t t20 = 5LLU;

	t20 = (((x689/x690)^x691)>>x692);

	if (t20 != 136LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x713 = -510730150134435LL;
	static int8_t x714 = INT8_MIN;
	uint16_t x716 = 32U;
	volatile int64_t t21 = 32285LL;

	t21 = (((x713/x714)^x715)>>x716);

	if (t21 != 2147482718LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x717 = INT16_MAX;
	static volatile uint64_t x719 = 19990LLU;
	static volatile uint8_t x720 = 0U;
	volatile uint64_t t22 = 467LLU;

	t22 = (((x717/x718)^x719)>>x720);

	if (t22 != 20118LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x775 = -1;
	int8_t x776 = 14;
	int64_t t23 = 3LL;

	t23 = (((x773/x774)^x775)>>x776);

	if (t23 != 76LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x777 = 1915U;
	int16_t x778 = INT16_MAX;
	int16_t x779 = INT16_MIN;
	int16_t x780 = 1;
	uint32_t t24 = 2U;

	t24 = (((x777/x778)^x779)>>x780);

	if (t24 != 2147467264U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x965 = 608097U;
	int8_t x967 = INT8_MAX;
	uint32_t t25 = 591940U;

	t25 = (((x965/x966)^x967)>>x968);

	if (t25 != 593U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1105 = 0U;
	static int8_t x1106 = INT8_MIN;
	volatile uint32_t x1107 = 5369U;
	int32_t x1108 = 22;
	uint32_t t26 = 668374899U;

	t26 = (((x1105/x1106)^x1107)>>x1108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1121 = 186711416U;
	int16_t x1122 = INT16_MIN;
	uint32_t x1123 = 54084U;
	uint32_t x1124 = 2U;
	uint32_t t27 = 2633499U;

	t27 = (((x1121/x1122)^x1123)>>x1124);

	if (t27 != 13521U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1145 = 104969853491LLU;
	int32_t x1146 = -21014;
	volatile uint32_t x1147 = 50685U;
	volatile int32_t x1148 = 1;
	uint64_t t28 = 4229LLU;

	t28 = (((x1145/x1146)^x1147)>>x1148);

	if (t28 != 25342LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x1169 = INT32_MAX;
	uint8_t x1171 = UINT8_MAX;
	static uint64_t x1172 = 24LLU;
	volatile int32_t t29 = -212;

	t29 = (((x1169/x1170)^x1171)>>x1172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1187 = 8457;
	int16_t x1188 = 3;
	volatile uint64_t t30 = 8807717770699276293LLU;

	t30 = (((x1185/x1186)^x1187)>>x1188);

	if (t30 != 636270146031261LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1209 = INT32_MAX;
	int32_t x1212 = 1;

	t31 = (((x1209/x1210)^x1211)>>x1212);

	if (t31 != 9223371598352014244LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1234 = -1;
	static uint8_t x1236 = 0U;

	t32 = (((x1233/x1234)^x1235)>>x1236);

	if (t32 != 32705) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1249 = INT64_MIN;
	volatile uint16_t x1250 = 35U;
	static int8_t x1251 = INT8_MIN;
	uint8_t x1252 = 1U;
	int64_t t33 = 0LL;

	t33 = (((x1249/x1250)^x1251)>>x1252);

	if (t33 != 131762457669353964LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1261 = UINT64_MAX;
	static int16_t x1263 = INT16_MAX;
	volatile uint64_t t34 = 58742117LLU;

	t34 = (((x1261/x1262)^x1263)>>x1264);

	if (t34 != 8191LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1285 = 3759245426LLU;
	int64_t x1286 = 251LL;
	uint16_t x1288 = 7U;
	uint64_t t35 = 21282600152LLU;

	t35 = (((x1285/x1286)^x1287)>>x1288);

	if (t35 != 144115188075738863LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1289 = 0LLU;
	int32_t x1290 = INT32_MIN;
	volatile int64_t x1291 = -1LL;
	uint16_t x1292 = 1U;
	static uint64_t t36 = 254406896348LLU;

	t36 = (((x1289/x1290)^x1291)>>x1292);

	if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1297 = 13U;
	uint32_t x1298 = 3554U;
	uint8_t x1299 = 23U;
	volatile uint32_t t37 = 2238U;

	t37 = (((x1297/x1298)^x1299)>>x1300);

	if (t37 != 23U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1345 = 15U;
	static int32_t x1347 = INT32_MIN;
	uint32_t x1348 = 6U;
	volatile uint32_t t38 = 12406U;

	t38 = (((x1345/x1346)^x1347)>>x1348);

	if (t38 != 33554432U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1369 = UINT16_MAX;
	volatile uint32_t t39 = 538458U;

	t39 = (((x1369/x1370)^x1371)>>x1372);

	if (t39 != 2142274372U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1405 = 20U;
	uint64_t x1406 = UINT64_MAX;
	uint8_t x1407 = UINT8_MAX;
	uint16_t x1408 = 1U;
	volatile uint64_t t40 = 2775438LLU;

	t40 = (((x1405/x1406)^x1407)>>x1408);

	if (t40 != 127LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1421 = INT16_MIN;
	int32_t x1422 = 1054;
	int16_t x1424 = 0;

	t41 = (((x1421/x1422)^x1423)>>x1424);

	if (t41 != 97) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1425 = -30;
	static uint64_t x1427 = 221881504LLU;
	volatile uint32_t x1428 = 3U;

	t42 = (((x1425/x1426)^x1427)>>x1428);

	if (t42 != 27735188LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1449 = 1075LLU;
	volatile int16_t x1450 = INT16_MAX;
	volatile int8_t x1451 = -1;
	static volatile uint64_t t43 = 2936507LLU;

	t43 = (((x1449/x1450)^x1451)>>x1452);

	if (t43 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1529 = 34U;
	int32_t x1532 = 3;
	uint64_t t44 = 4996616LLU;

	t44 = (((x1529/x1530)^x1531)>>x1532);

	if (t44 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1533 = INT8_MIN;
	uint16_t x1534 = 33U;
	int16_t x1535 = -1;
	int32_t t45 = -722967;

	t45 = (((x1533/x1534)^x1535)>>x1536);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1589 = 21U;
	int32_t x1591 = INT32_MAX;
	uint32_t x1592 = 37U;
	uint64_t t46 = 58526614616159899LLU;

	t46 = (((x1589/x1590)^x1591)>>x1592);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1641 = 177LLU;
	int32_t x1642 = -33387692;
	static int32_t x1643 = INT32_MIN;
	uint64_t x1644 = 3LLU;
	static volatile uint64_t t47 = 80527107035451314LLU;

	t47 = (((x1641/x1642)^x1643)>>x1644);

	if (t47 != 2305843008945258496LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1741 = 1789U;
	static volatile uint64_t x1742 = 1LLU;
	int32_t x1743 = INT32_MIN;
	uint8_t x1744 = 20U;
	static volatile uint64_t t48 = 3LLU;

	t48 = (((x1741/x1742)^x1743)>>x1744);

	if (t48 != 17592186042368LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x1770 = -3553072738245370LL;
	static volatile uint64_t x1771 = UINT64_MAX;
	uint8_t x1772 = 28U;

	t49 = (((x1769/x1770)^x1771)>>x1772);

	if (t49 != 68719476735LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1793 = 0U;
	int8_t x1795 = 23;
	static volatile uint64_t t50 = 16573456LLU;

	t50 = (((x1793/x1794)^x1795)>>x1796);

	if (t50 != 23LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x1813 = 0;
	static volatile uint64_t x1814 = 5451680073646LLU;
	volatile uint16_t x1816 = 9U;
	volatile uint64_t t51 = 2813478965790730LLU;

	t51 = (((x1813/x1814)^x1815)>>x1816);

	if (t51 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1833 = INT8_MIN;
	int64_t x1834 = -1LL;
	int64_t x1835 = INT64_MAX;
	uint8_t x1836 = 0U;
	static int64_t t52 = 799877782670899LL;

	t52 = (((x1833/x1834)^x1835)>>x1836);

	if (t52 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1841 = INT16_MIN;
	volatile int8_t x1842 = INT8_MIN;
	volatile uint16_t x1843 = 7U;
	int32_t t53 = 157708507;

	t53 = (((x1841/x1842)^x1843)>>x1844);

	if (t53 != 263) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1845 = 275417U;
	int64_t x1846 = INT64_MIN;
	uint8_t x1847 = 46U;
	static int8_t x1848 = 1;

	t54 = (((x1845/x1846)^x1847)>>x1848);

	if (t54 != 23LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x1865 = 562220118U;
	static uint64_t x1867 = 9726925049463LLU;
	static int8_t x1868 = 7;
	uint64_t t55 = 53177718731LLU;

	t55 = (((x1865/x1866)^x1867)>>x1868);

	if (t55 != 75992315032LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x1885 = 18U;
	uint16_t x1886 = 14243U;
	uint16_t x1887 = 108U;
	int32_t x1888 = 0;
	volatile int32_t t56 = -6;

	t56 = (((x1885/x1886)^x1887)>>x1888);

	if (t56 != 108) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x1906 = INT64_MIN;
	uint16_t x1908 = 3U;
	int64_t t57 = 6607786651433295LL;

	t57 = (((x1905/x1906)^x1907)>>x1908);

	if (t57 != 8LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1933 = UINT64_MAX;
	volatile int32_t x1934 = INT32_MIN;
	static uint64_t t58 = 3045964931047221779LLU;

	t58 = (((x1933/x1934)^x1935)>>x1936);

	if (t58 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1953 = UINT32_MAX;
	uint64_t t59 = 237735LLU;

	t59 = (((x1953/x1954)^x1955)>>x1956);

	if (t59 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1994 = INT16_MIN;
	uint32_t x1995 = 51485349U;
	int8_t x1996 = 1;

	t60 = (((x1993/x1994)^x1995)>>x1996);

	if (t60 != 25742674U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2002 = INT16_MIN;
	uint32_t x2003 = UINT32_MAX;
	volatile int8_t x2004 = 35;

	t61 = (((x2001/x2002)^x2003)>>x2004);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2073 = INT16_MIN;
	uint16_t x2074 = 7U;
	int8_t x2076 = 11;
	static volatile uint32_t t62 = 5U;

	t62 = (((x2073/x2074)^x2075)>>x2076);

	if (t62 != 2097149U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2085 = -11;
	volatile int8_t x2087 = 0;
	volatile int32_t t63 = -61;

	t63 = (((x2085/x2086)^x2087)>>x2088);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2093 = -17094288288204790LL;
	int16_t x2094 = -1;
	static volatile int16_t x2095 = INT16_MAX;
	int64_t t64 = 1415822998289LL;

	t64 = (((x2093/x2094)^x2095)>>x2096);

	if (t64 != 4273572072050178LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2102 = 1;
	volatile int16_t x2103 = -59;

	t65 = (((x2101/x2102)^x2103)>>x2104);

	if (t65 != 69) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2189 = INT16_MIN;
	uint64_t x2191 = 36065057LLU;
	int64_t x2192 = 0LL;
	volatile uint64_t t66 = 916523650110612LLU;

	t66 = (((x2189/x2190)^x2191)>>x2192);

	if (t66 != 18446744073673487235LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2241 = 7U;
	volatile uint64_t x2242 = 52LLU;
	uint64_t x2243 = 1912639782756LLU;
	int8_t x2244 = 6;
	volatile uint64_t t67 = 12611607LLU;

	t67 = (((x2241/x2242)^x2243)>>x2244);

	if (t67 != 29884996605LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2257 = -74LL;
	volatile int64_t t68 = -944LL;

	t68 = (((x2257/x2258)^x2259)>>x2260);

	if (t68 != 33554430LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2349 = 380529530653260LLU;
	int32_t x2350 = -1;
	static int32_t x2351 = INT32_MIN;
	static uint8_t x2352 = 1U;
	volatile uint64_t t69 = 6600960852876652148LLU;

	t69 = (((x2349/x2350)^x2351)>>x2352);

	if (t69 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2365 = 3;
	volatile int64_t x2366 = -1634177182713966LL;
	static int8_t x2367 = INT8_MAX;
	uint8_t x2368 = 9U;
	int64_t t70 = -2714LL;

	t70 = (((x2365/x2366)^x2367)>>x2368);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x2391 = INT32_MIN;
	int64_t x2392 = 15LL;
	uint64_t t71 = 16955LLU;

	t71 = (((x2389/x2390)^x2391)>>x2392);

	if (t71 != 562949953355776LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2437 = INT32_MAX;
	static volatile int32_t x2438 = INT32_MAX;
	uint8_t x2439 = UINT8_MAX;
	static volatile uint64_t x2440 = 10LLU;
	static int32_t t72 = -7;

	t72 = (((x2437/x2438)^x2439)>>x2440);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2449 = 33LLU;
	int64_t x2450 = INT64_MIN;
	int16_t x2451 = INT16_MIN;
	static uint8_t x2452 = 2U;
	uint64_t t73 = 2817109560LLU;

	t73 = (((x2449/x2450)^x2451)>>x2452);

	if (t73 != 4611686018427379712LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2468 = 1U;
	volatile int64_t t74 = 124808LL;

	t74 = (((x2465/x2466)^x2467)>>x2468);

	if (t74 != 75601410138153875LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2483 = UINT32_MAX;
	volatile uint8_t x2484 = 2U;

	t75 = (((x2481/x2482)^x2483)>>x2484);

	if (t75 != 1073741759U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x2545 = -1400651LL;
	int8_t x2546 = INT8_MIN;
	int64_t x2547 = INT64_MAX;
	uint32_t x2548 = 11U;
	int64_t t76 = -1LL;

	t76 = (((x2545/x2546)^x2547)>>x2548);

	if (t76 != 4503599627370490LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2613 = INT32_MAX;
	uint8_t x2614 = 25U;
	static uint64_t x2615 = 1LLU;
	volatile uint64_t t77 = 15512LLU;

	t77 = (((x2613/x2614)^x2615)>>x2616);

	if (t77 != 85899344LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2630 = UINT32_MAX;
	uint8_t x2632 = 3U;

	t78 = (((x2629/x2630)^x2631)>>x2632);

	if (t78 != 66094859765135LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2633 = -78127664LL;
	int32_t x2634 = INT32_MAX;
	static volatile int64_t t79 = 194141900262600LL;

	t79 = (((x2633/x2634)^x2635)>>x2636);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2729 = 14179U;
	uint32_t x2730 = UINT32_MAX;
	static int32_t x2731 = -1;
	uint8_t x2732 = 14U;
	uint32_t t80 = 190U;

	t80 = (((x2729/x2730)^x2731)>>x2732);

	if (t80 != 262143U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2949 = 334909749004538LLU;
	int64_t x2950 = INT64_MIN;
	int8_t x2951 = 4;
	static uint8_t x2952 = 6U;
	volatile uint64_t t81 = 4931688480720031670LLU;

	t81 = (((x2949/x2950)^x2951)>>x2952);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3001 = INT64_MAX;
	int64_t x3002 = INT64_MAX;
	uint8_t x3003 = UINT8_MAX;
	int64_t x3004 = 2LL;
	volatile int64_t t82 = -1234251LL;

	t82 = (((x3001/x3002)^x3003)>>x3004);

	if (t82 != 63LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3057 = UINT32_MAX;
	static volatile uint16_t x3058 = 6631U;
	int16_t x3060 = 1;
	volatile uint64_t t83 = 2210483971375951LLU;

	t83 = (((x3057/x3058)^x3059)>>x3060);

	if (t83 != 248558426315730LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x3061 = 9268U;
	int32_t x3062 = INT32_MIN;
	uint64_t x3063 = 236732056LLU;
	uint64_t t84 = 137641LLU;

	t84 = (((x3061/x3062)^x3063)>>x3064);

	if (t84 != 29591507LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x3085 = INT64_MAX;
	uint16_t x3086 = UINT16_MAX;
	int8_t x3087 = INT8_MAX;
	int64_t t85 = -1607062341487512220LL;

	t85 = (((x3085/x3086)^x3087)>>x3088);

	if (t85 != 35184908967967LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3093 = -67074062215621984LL;
	static volatile uint64_t x3095 = UINT64_MAX;

	t86 = (((x3093/x3094)^x3095)>>x3096);

	if (t86 != 35512408849LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3193 = INT32_MIN;
	uint64_t x3194 = UINT64_MAX;
	uint64_t x3195 = 81LLU;
	volatile uint64_t t87 = 8168602562100227498LLU;

	t87 = (((x3193/x3194)^x3195)>>x3196);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3233 = INT32_MIN;
	uint16_t x3234 = UINT16_MAX;
	uint32_t x3235 = 9U;
	static volatile uint32_t t88 = 24869U;

	t88 = (((x3233/x3234)^x3235)>>x3236);

	if (t88 != 2147467268U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3253 = INT32_MAX;
	uint32_t x3254 = UINT32_MAX;
	uint16_t x3256 = 2U;
	volatile uint32_t t89 = 2U;

	t89 = (((x3253/x3254)^x3255)>>x3256);

	if (t89 != 8U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3353 = 55U;
	uint64_t x3354 = UINT64_MAX;
	static volatile uint64_t x3355 = UINT64_MAX;
	int16_t x3356 = 19;

	t90 = (((x3353/x3354)^x3355)>>x3356);

	if (t90 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3399 = INT8_MIN;
	volatile uint8_t x3400 = 3U;

	t91 = (((x3397/x3398)^x3399)>>x3400);

	if (t91 != 15U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3433 = -1;
	static int32_t x3434 = INT32_MAX;
	static int16_t x3435 = 20;
	static uint32_t x3436 = 1U;
	volatile int32_t t92 = -716253386;

	t92 = (((x3433/x3434)^x3435)>>x3436);

	if (t92 != 10) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x3437 = INT32_MAX;
	static int16_t x3438 = INT16_MIN;
	static uint64_t x3439 = 32436178LLU;

	t93 = (((x3437/x3438)^x3439)>>x3440);

	if (t93 != 7LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3465 = -1;
	int8_t x3466 = INT8_MAX;
	static int8_t x3467 = 2;
	uint16_t x3468 = 0U;
	volatile int32_t t94 = 113292;

	t94 = (((x3465/x3466)^x3467)>>x3468);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3477 = -6793;
	uint64_t x3478 = UINT64_MAX;
	uint8_t x3479 = 1U;
	uint8_t x3480 = 0U;
	volatile uint64_t t95 = 21LLU;

	t95 = (((x3477/x3478)^x3479)>>x3480);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x3509 = -1;
	static uint64_t x3511 = 57311513932011LLU;
	volatile uint8_t x3512 = 1U;
	volatile uint64_t t96 = 39098355523621024LLU;

	t96 = (((x3509/x3510)^x3511)>>x3512);

	if (t96 != 28655756966005LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3529 = UINT8_MAX;
	volatile int64_t x3531 = INT64_MAX;
	uint64_t x3532 = 13LLU;

	t97 = (((x3529/x3530)^x3531)>>x3532);

	if (t97 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3545 = -2996160620669952076LL;
	int32_t x3546 = 15862;
	int8_t x3548 = 1;

	t98 = (((x3545/x3546)^x3547)>>x3548);

	if (t98 != 4611591573823281551LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3601 = INT8_MIN;
	uint32_t x3602 = 178975171U;
	uint16_t x3603 = UINT16_MAX;
	uint32_t x3604 = 21U;
	volatile uint32_t t99 = 1352173836U;

	t99 = (((x3601/x3602)^x3603)>>x3604);

	if (t99 != 0U) { NG(); } else { ; }
	
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

