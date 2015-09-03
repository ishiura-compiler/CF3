#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = INT64_MAX;
uint16_t x11 = 860U;
uint32_t x23 = 972801880U;
static volatile uint8_t x156 = 1U;
int32_t x161 = -2;
static int32_t t7 = -20;
uint8_t x172 = 1U;
int32_t t12 = -6993;
int16_t x255 = INT16_MAX;
int8_t x261 = INT8_MIN;
int16_t x273 = INT16_MIN;
uint32_t x277 = UINT32_MAX;
int64_t x278 = -21102LL;
volatile int32_t t16 = 19328;
static volatile int32_t x294 = INT32_MAX;
int32_t x295 = -1;
volatile int8_t x453 = 18;
int64_t x473 = INT64_MAX;
volatile int32_t t26 = -25388821;
uint8_t x574 = 1U;
int8_t x576 = 9;
int8_t x585 = 63;
int8_t x588 = 13;
int8_t x600 = 3;
uint64_t x638 = 1706263280LLU;
uint64_t x639 = 3LLU;
uint16_t x640 = 0U;
uint64_t x655 = 16401509014LLU;
static uint8_t x656 = 31U;
int32_t x661 = INT32_MAX;
static uint32_t x662 = UINT32_MAX;
int32_t t34 = 1507881;
int32_t t35 = 1912;
static uint32_t x732 = 0U;
int32_t x738 = 20756180;
int32_t t38 = -2053;
uint16_t x747 = 1442U;
int8_t x760 = 14;
volatile int8_t x869 = -1;
static volatile uint16_t x870 = 28U;
volatile int8_t x890 = INT8_MAX;
static int8_t x914 = INT8_MAX;
int8_t x915 = -3;
int32_t x957 = 2;
volatile uint8_t x960 = 0U;
static uint64_t x1048 = 28LLU;
static uint8_t x1220 = 1U;
int16_t x1277 = INT16_MIN;
volatile int64_t x1365 = -1LL;
int16_t x1368 = 1;
int64_t x1383 = INT64_MAX;
volatile int16_t x1482 = -1;
int16_t x1483 = INT16_MAX;
static uint64_t x1631 = 11323LLU;
int64_t x1755 = INT64_MIN;
static volatile uint64_t x1778 = 490797798268684LLU;
static volatile uint8_t x1781 = 5U;
int32_t x1782 = 13;
int16_t x1872 = 1;
static volatile int32_t t71 = 4321;
int32_t t72 = -502;
int16_t x1913 = INT16_MIN;
static int32_t x1914 = INT32_MIN;
static int16_t x1915 = INT16_MIN;
uint32_t x1921 = 63836U;
int16_t x2056 = 1;
int64_t x2193 = INT64_MAX;
static volatile int8_t x2194 = INT8_MIN;
static int8_t x2196 = 12;
int32_t t79 = 11;
static int64_t x2203 = 469LL;
uint8_t x2204 = 11U;
int64_t x2210 = INT64_MIN;
volatile int32_t x2229 = 151;
uint16_t x2296 = 1U;
static int32_t t86 = 247103;
static int32_t t87 = -45578;
uint32_t x2354 = 0U;
int16_t x2423 = INT16_MIN;
int64_t x2523 = INT64_MIN;
volatile int16_t x2553 = -7;
int16_t x2556 = 0;
int32_t t92 = -4;
volatile int32_t t93 = 883;
int32_t t94 = 1768;
uint32_t x2651 = UINT32_MAX;
volatile uint64_t x2689 = 211029951LLU;
static int32_t x2705 = -7355;
static volatile int32_t t97 = 16001;
static int8_t x2732 = 0;


void f0(void) {
	static volatile int64_t x5 = INT64_MIN;
	volatile int8_t x6 = 0;
	int64_t x7 = INT64_MIN;
	uint16_t x8 = 3U;
	volatile int32_t t0 = 14;

	t0 = (((x5<=x6)==x7)>>x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x10 = -1;
	static uint16_t x12 = 1U;
	int32_t t1 = 1921321;

	t1 = (((x9<=x10)==x11)>>x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = 14284U;
	static uint64_t x24 = 0LLU;
	volatile int32_t t2 = 13969;

	t2 = (((x21<=x22)==x23)>>x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = 3;
	static int16_t x27 = INT16_MIN;
	int8_t x28 = 0;
	int32_t t3 = -244869480;

	t3 = (((x25<=x26)==x27)>>x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x53 = INT16_MAX;
	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MAX;
	uint8_t x56 = 11U;
	int32_t t4 = -313;

	t4 = (((x53<=x54)==x55)>>x56);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x101 = -1LL;
	int16_t x102 = INT16_MAX;
	volatile int8_t x103 = -1;
	uint8_t x104 = 11U;
	int32_t t5 = 30593889;

	t5 = (((x101<=x102)==x103)>>x104);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x153 = 104583074LLU;
	volatile int64_t x154 = -1LL;
	int32_t x155 = INT32_MAX;
	int32_t t6 = -928333759;

	t6 = (((x153<=x154)==x155)>>x156);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x162 = 3U;
	uint8_t x163 = 4U;
	int8_t x164 = 1;

	t7 = (((x161<=x162)==x163)>>x164);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x169 = -1;
	int16_t x170 = -12;
	volatile int32_t x171 = INT32_MIN;
	int32_t t8 = 20146169;

	t8 = (((x169<=x170)==x171)>>x172);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x201 = 47U;
	static int32_t x202 = INT32_MAX;
	uint16_t x203 = 46U;
	volatile uint16_t x204 = 25U;
	static int32_t t9 = 1643;

	t9 = (((x201<=x202)==x203)>>x204);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x225 = 0U;
	uint8_t x226 = 2U;
	uint16_t x227 = UINT16_MAX;
	uint32_t x228 = 1U;
	volatile int32_t t10 = -2145;

	t10 = (((x225<=x226)==x227)>>x228);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = 7;
	uint8_t x231 = 7U;
	static int8_t x232 = 5;
	volatile int32_t t11 = 1;

	t11 = (((x229<=x230)==x231)>>x232);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x237 = 599820772U;
	int8_t x238 = INT8_MIN;
	int32_t x239 = 25072;
	uint32_t x240 = 2U;

	t12 = (((x237<=x238)==x239)>>x240);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x253 = 60857U;
	static uint16_t x254 = 163U;
	uint32_t x256 = 19U;
	static volatile int32_t t13 = 3756568;

	t13 = (((x253<=x254)==x255)>>x256);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x262 = INT16_MAX;
	uint32_t x263 = 15896U;
	uint8_t x264 = 15U;
	static int32_t t14 = 121;

	t14 = (((x261<=x262)==x263)>>x264);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x274 = INT32_MAX;
	static int32_t x275 = -123;
	uint8_t x276 = 3U;
	int32_t t15 = 504;

	t15 = (((x273<=x274)==x275)>>x276);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x279 = INT32_MIN;
	int32_t x280 = 0;

	t16 = (((x277<=x278)==x279)>>x280);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x285 = INT64_MAX;
	uint8_t x286 = 1U;
	int16_t x287 = -1;
	uint16_t x288 = 1U;
	int32_t t17 = -1079;

	t17 = (((x285<=x286)==x287)>>x288);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x293 = 100LLU;
	uint8_t x296 = 10U;
	int32_t t18 = -115971351;

	t18 = (((x293<=x294)==x295)>>x296);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x302 = UINT64_MAX;
	int64_t x303 = -65567881934873837LL;
	volatile int8_t x304 = 6;
	volatile int32_t t19 = 10495829;

	t19 = (((x301<=x302)==x303)>>x304);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x349 = 2082;
	volatile uint32_t x350 = 3U;
	int64_t x351 = 80574130970101LL;
	int8_t x352 = 1;
	static int32_t t20 = -2384;

	t20 = (((x349<=x350)==x351)>>x352);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x377 = INT64_MIN;
	int64_t x378 = 28361488456LL;
	int32_t x379 = -571049;
	volatile uint8_t x380 = 27U;
	static volatile int32_t t21 = 145343;

	t21 = (((x377<=x378)==x379)>>x380);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MAX;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = 2;
	int32_t t22 = -1469;

	t22 = (((x393<=x394)==x395)>>x396);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x409 = UINT64_MAX;
	volatile uint64_t x410 = 19367383173165LLU;
	static volatile int16_t x411 = -1;
	volatile uint16_t x412 = 3U;
	int32_t t23 = -2;

	t23 = (((x409<=x410)==x411)>>x412);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x421 = INT16_MAX;
	uint16_t x422 = UINT16_MAX;
	uint16_t x423 = UINT16_MAX;
	static uint8_t x424 = 15U;
	static volatile int32_t t24 = 4592314;

	t24 = (((x421<=x422)==x423)>>x424);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x454 = 47U;
	int32_t x455 = INT32_MIN;
	static volatile int32_t x456 = 1;
	volatile int32_t t25 = -11660;

	t25 = (((x453<=x454)==x455)>>x456);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x474 = INT8_MAX;
	uint8_t x475 = 3U;
	volatile uint32_t x476 = 2U;

	t26 = (((x473<=x474)==x475)>>x476);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x541 = INT32_MAX;
	int8_t x542 = 1;
	int64_t x543 = 7711812317975LL;
	int32_t x544 = 0;
	static volatile int32_t t27 = 82190322;

	t27 = (((x541<=x542)==x543)>>x544);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x573 = -1;
	uint8_t x575 = UINT8_MAX;
	int32_t t28 = 1346;

	t28 = (((x573<=x574)==x575)>>x576);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x586 = INT64_MIN;
	int64_t x587 = INT64_MIN;
	volatile int32_t t29 = 176163;

	t29 = (((x585<=x586)==x587)>>x588);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x597 = INT32_MIN;
	static int64_t x598 = 3833465303520096LL;
	static int8_t x599 = INT8_MIN;
	static volatile int32_t t30 = 180892;

	t30 = (((x597<=x598)==x599)>>x600);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x637 = 0;
	volatile int32_t t31 = -186;

	t31 = (((x637<=x638)==x639)>>x640);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x653 = -1;
	uint32_t x654 = UINT32_MAX;
	int32_t t32 = 9;

	t32 = (((x653<=x654)==x655)>>x656);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x663 = 372054U;
	int8_t x664 = 1;
	volatile int32_t t33 = 0;

	t33 = (((x661<=x662)==x663)>>x664);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x665 = 2;
	static volatile int32_t x666 = INT32_MIN;
	int8_t x667 = -60;
	uint32_t x668 = 2U;

	t34 = (((x665<=x666)==x667)>>x668);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x721 = 14U;
	static int32_t x722 = INT32_MIN;
	int32_t x723 = -2357;
	uint8_t x724 = 14U;

	t35 = (((x721<=x722)==x723)>>x724);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x729 = 5704LL;
	int8_t x730 = -1;
	static uint8_t x731 = 47U;
	int32_t t36 = -135;

	t36 = (((x729<=x730)==x731)>>x732);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x737 = -252;
	int16_t x739 = 5207;
	uint32_t x740 = 2U;
	static volatile int32_t t37 = 67884;

	t37 = (((x737<=x738)==x739)>>x740);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x741 = 284;
	static volatile int16_t x742 = -101;
	volatile uint64_t x743 = 92989614959984856LLU;
	volatile uint16_t x744 = 3U;

	t38 = (((x741<=x742)==x743)>>x744);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x745 = INT32_MAX;
	int32_t x746 = 3888;
	uint8_t x748 = 24U;
	int32_t t39 = -208;

	t39 = (((x745<=x746)==x747)>>x748);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x757 = 7U;
	int32_t x758 = 1;
	static volatile int32_t x759 = -1;
	volatile int32_t t40 = 216705164;

	t40 = (((x757<=x758)==x759)>>x760);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x841 = 192575786667411LLU;
	volatile uint16_t x842 = UINT16_MAX;
	int8_t x843 = INT8_MAX;
	uint64_t x844 = 2LLU;
	int32_t t41 = -7;

	t41 = (((x841<=x842)==x843)>>x844);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x853 = INT32_MAX;
	volatile int8_t x854 = -1;
	int32_t x855 = INT32_MIN;
	volatile uint16_t x856 = 1U;
	int32_t t42 = 854;

	t42 = (((x853<=x854)==x855)>>x856);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x871 = INT32_MIN;
	volatile uint8_t x872 = 2U;
	volatile int32_t t43 = 549298;

	t43 = (((x869<=x870)==x871)>>x872);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x889 = INT8_MAX;
	volatile uint8_t x891 = 25U;
	int8_t x892 = 15;
	volatile int32_t t44 = 12085;

	t44 = (((x889<=x890)==x891)>>x892);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x913 = INT32_MIN;
	volatile uint8_t x916 = 0U;
	volatile int32_t t45 = 23529579;

	t45 = (((x913<=x914)==x915)>>x916);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x921 = 9U;
	uint64_t x922 = UINT64_MAX;
	volatile int64_t x923 = INT64_MAX;
	volatile int8_t x924 = 1;
	int32_t t46 = -142677;

	t46 = (((x921<=x922)==x923)>>x924);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x958 = -29638;
	int8_t x959 = INT8_MIN;
	volatile int32_t t47 = 68793570;

	t47 = (((x957<=x958)==x959)>>x960);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x981 = 471772738U;
	static volatile int16_t x982 = INT16_MIN;
	int32_t x983 = -1;
	volatile uint8_t x984 = 4U;
	volatile int32_t t48 = -2909;

	t48 = (((x981<=x982)==x983)>>x984);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1045 = INT16_MIN;
	uint8_t x1046 = UINT8_MAX;
	volatile int64_t x1047 = -1LL;
	int32_t t49 = -231721575;

	t49 = (((x1045<=x1046)==x1047)>>x1048);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1145 = INT64_MAX;
	static int8_t x1146 = INT8_MIN;
	volatile int8_t x1147 = INT8_MIN;
	int32_t x1148 = 3;
	int32_t t50 = -407259980;

	t50 = (((x1145<=x1146)==x1147)>>x1148);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x1185 = 62U;
	volatile int32_t x1186 = -1;
	uint64_t x1187 = UINT64_MAX;
	int8_t x1188 = 3;
	int32_t t51 = -559;

	t51 = (((x1185<=x1186)==x1187)>>x1188);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x1217 = -5875409LL;
	int64_t x1218 = INT64_MAX;
	uint8_t x1219 = UINT8_MAX;
	volatile int32_t t52 = 5955;

	t52 = (((x1217<=x1218)==x1219)>>x1220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1237 = UINT32_MAX;
	uint64_t x1238 = UINT64_MAX;
	uint32_t x1239 = 47U;
	int8_t x1240 = 0;
	volatile int32_t t53 = -1;

	t53 = (((x1237<=x1238)==x1239)>>x1240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1257 = -7;
	uint8_t x1258 = UINT8_MAX;
	int8_t x1259 = INT8_MAX;
	int16_t x1260 = 1;
	static volatile int32_t t54 = 2;

	t54 = (((x1257<=x1258)==x1259)>>x1260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1278 = INT8_MIN;
	static int16_t x1279 = -102;
	int8_t x1280 = 1;
	int32_t t55 = 166770738;

	t55 = (((x1277<=x1278)==x1279)>>x1280);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1285 = 245;
	volatile int8_t x1286 = -1;
	uint8_t x1287 = 5U;
	static int16_t x1288 = 0;
	int32_t t56 = 3550893;

	t56 = (((x1285<=x1286)==x1287)>>x1288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x1353 = 41U;
	static int32_t x1354 = INT32_MIN;
	int16_t x1355 = 13972;
	int8_t x1356 = 2;
	volatile int32_t t57 = 47438;

	t57 = (((x1353<=x1354)==x1355)>>x1356);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1366 = -117;
	static int64_t x1367 = INT64_MIN;
	volatile int32_t t58 = -1;

	t58 = (((x1365<=x1366)==x1367)>>x1368);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1381 = -1;
	uint32_t x1382 = UINT32_MAX;
	int8_t x1384 = 31;
	int32_t t59 = 913;

	t59 = (((x1381<=x1382)==x1383)>>x1384);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x1481 = -1;
	uint8_t x1484 = 24U;
	static volatile int32_t t60 = -27269;

	t60 = (((x1481<=x1482)==x1483)>>x1484);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1513 = 446020499525086LLU;
	static volatile int32_t x1514 = INT32_MIN;
	int16_t x1515 = INT16_MAX;
	static uint32_t x1516 = 10U;
	int32_t t61 = -4656;

	t61 = (((x1513<=x1514)==x1515)>>x1516);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1581 = 13U;
	uint8_t x1582 = UINT8_MAX;
	volatile int16_t x1583 = INT16_MIN;
	static uint8_t x1584 = 7U;
	volatile int32_t t62 = -315229517;

	t62 = (((x1581<=x1582)==x1583)>>x1584);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1629 = UINT32_MAX;
	uint64_t x1630 = 50264116434802LLU;
	int16_t x1632 = 13;
	static volatile int32_t t63 = -320;

	t63 = (((x1629<=x1630)==x1631)>>x1632);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1657 = INT32_MIN;
	int16_t x1658 = 0;
	volatile int16_t x1659 = INT16_MIN;
	int64_t x1660 = 17LL;
	static volatile int32_t t64 = -3;

	t64 = (((x1657<=x1658)==x1659)>>x1660);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1717 = -1;
	uint8_t x1718 = 7U;
	int16_t x1719 = 252;
	uint16_t x1720 = 7U;
	volatile int32_t t65 = -3892;

	t65 = (((x1717<=x1718)==x1719)>>x1720);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x1753 = 180057;
	int64_t x1754 = -8064993LL;
	uint16_t x1756 = 31U;
	volatile int32_t t66 = 113;

	t66 = (((x1753<=x1754)==x1755)>>x1756);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1777 = -4846;
	static volatile uint8_t x1779 = UINT8_MAX;
	volatile uint16_t x1780 = 11U;
	int32_t t67 = 4;

	t67 = (((x1777<=x1778)==x1779)>>x1780);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1783 = -1;
	uint16_t x1784 = 15U;
	int32_t t68 = 410;

	t68 = (((x1781<=x1782)==x1783)>>x1784);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1829 = -1;
	int64_t x1830 = 2873615149905079201LL;
	int8_t x1831 = -1;
	static uint8_t x1832 = 3U;
	static volatile int32_t t69 = -19;

	t69 = (((x1829<=x1830)==x1831)>>x1832);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x1853 = 254U;
	int32_t x1854 = -1;
	static volatile int32_t x1855 = INT32_MIN;
	int8_t x1856 = 20;
	int32_t t70 = -5;

	t70 = (((x1853<=x1854)==x1855)>>x1856);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x1869 = 231;
	uint32_t x1870 = UINT32_MAX;
	uint16_t x1871 = UINT16_MAX;

	t71 = (((x1869<=x1870)==x1871)>>x1872);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x1885 = INT64_MAX;
	volatile int64_t x1886 = 8836990396666032LL;
	int8_t x1887 = -1;
	uint8_t x1888 = 4U;

	t72 = (((x1885<=x1886)==x1887)>>x1888);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1909 = 43U;
	uint16_t x1910 = 16330U;
	int8_t x1911 = INT8_MIN;
	uint8_t x1912 = 1U;
	int32_t t73 = 12730;

	t73 = (((x1909<=x1910)==x1911)>>x1912);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1916 = 2;
	static int32_t t74 = 8425494;

	t74 = (((x1913<=x1914)==x1915)>>x1916);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1922 = -62528259214097341LL;
	static uint16_t x1923 = UINT16_MAX;
	uint8_t x1924 = 14U;
	volatile int32_t t75 = -41;

	t75 = (((x1921<=x1922)==x1923)>>x1924);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2041 = UINT64_MAX;
	uint32_t x2042 = 511417163U;
	int64_t x2043 = -435LL;
	int64_t x2044 = 1LL;
	volatile int32_t t76 = -5558619;

	t76 = (((x2041<=x2042)==x2043)>>x2044);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x2053 = 16U;
	int8_t x2054 = INT8_MIN;
	int16_t x2055 = 121;
	int32_t t77 = -1;

	t77 = (((x2053<=x2054)==x2055)>>x2056);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2069 = 2U;
	volatile int8_t x2070 = -1;
	static int32_t x2071 = -52483;
	uint32_t x2072 = 28U;
	int32_t t78 = 580;

	t78 = (((x2069<=x2070)==x2071)>>x2072);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2195 = 2859U;

	t79 = (((x2193<=x2194)==x2195)>>x2196);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2201 = 3795536305421LLU;
	int16_t x2202 = -1;
	volatile int32_t t80 = 0;

	t80 = (((x2201<=x2202)==x2203)>>x2204);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2209 = 318U;
	int64_t x2211 = INT64_MIN;
	static uint32_t x2212 = 0U;
	volatile int32_t t81 = 14325782;

	t81 = (((x2209<=x2210)==x2211)>>x2212);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2230 = INT32_MAX;
	int16_t x2231 = -156;
	uint8_t x2232 = 1U;
	volatile int32_t t82 = 395;

	t82 = (((x2229<=x2230)==x2231)>>x2232);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2261 = 648U;
	int8_t x2262 = INT8_MIN;
	uint8_t x2263 = 13U;
	int8_t x2264 = 4;
	volatile int32_t t83 = 1980227;

	t83 = (((x2261<=x2262)==x2263)>>x2264);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2277 = 1;
	int8_t x2278 = -1;
	static int16_t x2279 = INT16_MIN;
	static int8_t x2280 = 3;
	volatile int32_t t84 = 15;

	t84 = (((x2277<=x2278)==x2279)>>x2280);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x2293 = INT32_MIN;
	int64_t x2294 = -7654685LL;
	static uint32_t x2295 = 1156047U;
	int32_t t85 = -14;

	t85 = (((x2293<=x2294)==x2295)>>x2296);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2297 = INT8_MIN;
	static int8_t x2298 = 0;
	int8_t x2299 = INT8_MIN;
	static int32_t x2300 = 11;

	t86 = (((x2297<=x2298)==x2299)>>x2300);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2333 = 13257LL;
	volatile uint32_t x2334 = 31500833U;
	int16_t x2335 = INT16_MAX;
	int8_t x2336 = 1;

	t87 = (((x2333<=x2334)==x2335)>>x2336);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2353 = INT8_MIN;
	int64_t x2355 = 258985171835LL;
	static volatile int8_t x2356 = 1;
	volatile int32_t t88 = 746138;

	t88 = (((x2353<=x2354)==x2355)>>x2356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2385 = INT16_MAX;
	volatile int64_t x2386 = -526863LL;
	int16_t x2387 = -20;
	uint8_t x2388 = 0U;
	static volatile int32_t t89 = 41636035;

	t89 = (((x2385<=x2386)==x2387)>>x2388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2421 = 5U;
	int8_t x2422 = 0;
	static uint32_t x2424 = 1U;
	static int32_t t90 = 24330590;

	t90 = (((x2421<=x2422)==x2423)>>x2424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x2521 = -1;
	volatile int32_t x2522 = 3897641;
	uint16_t x2524 = 24U;
	static volatile int32_t t91 = 2074;

	t91 = (((x2521<=x2522)==x2523)>>x2524);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2554 = -34965801853LL;
	static uint32_t x2555 = 4U;

	t92 = (((x2553<=x2554)==x2555)>>x2556);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2561 = 14U;
	static int64_t x2562 = INT64_MIN;
	int32_t x2563 = -1;
	volatile int16_t x2564 = 8;

	t93 = (((x2561<=x2562)==x2563)>>x2564);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x2641 = -28;
	int32_t x2642 = 3236139;
	volatile int64_t x2643 = INT64_MAX;
	int8_t x2644 = 0;

	t94 = (((x2641<=x2642)==x2643)>>x2644);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2649 = 444997LLU;
	int8_t x2650 = INT8_MAX;
	int8_t x2652 = 7;
	static int32_t t95 = -1882963;

	t95 = (((x2649<=x2650)==x2651)>>x2652);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2690 = INT64_MIN;
	volatile uint64_t x2691 = 290LLU;
	uint8_t x2692 = 2U;
	volatile int32_t t96 = -473;

	t96 = (((x2689<=x2690)==x2691)>>x2692);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2706 = INT8_MIN;
	static uint8_t x2707 = 3U;
	static int8_t x2708 = 27;

	t97 = (((x2705<=x2706)==x2707)>>x2708);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x2729 = -2;
	volatile int32_t x2730 = INT32_MAX;
	int32_t x2731 = INT32_MAX;
	volatile int32_t t98 = -3204266;

	t98 = (((x2729<=x2730)==x2731)>>x2732);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x2765 = -1;
	uint64_t x2766 = 19047516253LLU;
	static int64_t x2767 = INT64_MIN;
	static uint8_t x2768 = 1U;
	volatile int32_t t99 = 0;

	t99 = (((x2765<=x2766)==x2767)>>x2768);

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

