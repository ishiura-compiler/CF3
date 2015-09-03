#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x13 = -4;
volatile int8_t x16 = INT8_MIN;
int8_t x19 = -1;
volatile int64_t x26 = INT64_MIN;
static volatile int64_t x28 = -90372471405060870LL;
static int16_t x30 = 244;
int16_t x31 = INT16_MAX;
static int64_t x38 = -1495LL;
volatile int16_t x42 = INT16_MIN;
int64_t t11 = -2686LL;
int32_t x61 = -1;
uint8_t x64 = 22U;
volatile int16_t x72 = -1;
uint32_t t13 = 2093583575U;
int32_t x76 = -1;
uint16_t x87 = UINT16_MAX;
volatile int32_t t16 = -79;
int16_t x90 = -1;
int64_t x98 = INT64_MIN;
int16_t x102 = -13;
int8_t x106 = -1;
int64_t x112 = 33005243855LL;
int64_t t22 = -406932109732332415LL;
int8_t x121 = INT8_MIN;
volatile int16_t x122 = -1;
uint8_t x124 = 7U;
int16_t x128 = -4465;
uint64_t t27 = 11396943930LLU;
int64_t x141 = 16292896LL;
static volatile int8_t x149 = -1;
volatile int16_t x151 = INT16_MAX;
static int8_t x153 = 1;
static int32_t x166 = INT32_MAX;
static volatile int32_t t32 = -10851;
int8_t x170 = INT8_MAX;
static int8_t x171 = 9;
volatile int64_t x172 = 0LL;
static volatile int32_t x175 = INT32_MIN;
uint64_t x176 = UINT64_MAX;
int64_t x177 = -14912274296004LL;
int8_t x178 = -1;
uint64_t x179 = 76422551600LLU;
static volatile uint64_t x185 = 57115375947698392LLU;
uint64_t x205 = 519912974374368LLU;
volatile int8_t x207 = INT8_MAX;
volatile uint32_t t42 = 15846745U;
int32_t x236 = -1;
int32_t t46 = -81;
int16_t x246 = -379;
int8_t x254 = -1;
uint64_t x264 = 530261474988787243LLU;
volatile int32_t t50 = 1581;
volatile uint8_t x294 = 88U;
int8_t x309 = -1;
static uint16_t x310 = 2282U;
uint8_t x322 = 59U;
static uint64_t x324 = 1674LLU;
int8_t x325 = -1;
volatile uint64_t t61 = 16249LLU;
volatile uint64_t t62 = 118776137LLU;
int64_t x344 = INT64_MAX;
int8_t x345 = INT8_MIN;
int32_t t65 = -24;
volatile int16_t x355 = INT16_MIN;
volatile uint8_t x357 = 3U;
int8_t x359 = INT8_MIN;
static volatile int32_t x365 = 12;
int32_t x366 = INT32_MIN;
volatile int64_t x368 = -8504030695071467LL;
int8_t x378 = -6;
int32_t x399 = 117012;
static uint8_t x404 = 0U;
int64_t x406 = 212809LL;
int16_t x425 = 3;
volatile uint32_t t76 = 72U;
uint32_t x429 = UINT32_MAX;
static uint32_t x432 = 1153750U;
volatile int16_t x435 = INT16_MIN;
static uint16_t x440 = 5270U;
int64_t x443 = INT64_MIN;
volatile uint64_t x459 = 504610LLU;
int64_t x460 = -1LL;
int16_t x464 = INT16_MIN;
uint32_t x494 = 22978U;
volatile uint64_t t88 = 110059032046LLU;
volatile uint64_t x497 = 3315054985911144189LLU;
uint64_t x501 = UINT64_MAX;
volatile uint64_t t90 = 13LLU;
uint64_t x507 = 3467758189LLU;
uint32_t x511 = UINT32_MAX;
int64_t x514 = -145118159434636850LL;
uint64_t t93 = 17050525502307LLU;
uint16_t x531 = 19U;
uint64_t x536 = 62240299823LLU;
int32_t x537 = 7;
volatile int32_t t97 = 6309;
uint64_t x550 = UINT64_MAX;


void f0(void) {
	int16_t x5 = -2830;
	volatile uint32_t x6 = 151010636U;
	static volatile int16_t x7 = INT16_MIN;
	static int16_t x8 = -3303;
	int32_t t0 = 509498;

	t0 = (x5*((x6<x7)^x8));

	if (t0 != 9350320) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	int16_t x10 = INT16_MIN;
	int16_t x11 = 73;
	int64_t x12 = INT64_MIN;
	int64_t t1 = INT64_MAX;

	t1 = (x9*((x10<x11)^x12));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	volatile int32_t x15 = -1;
	static volatile int32_t t2 = -59906;

	t2 = (x13*((x14<x15)^x16));

	if (t2 != 512) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x18 = UINT8_MAX;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t3 = -215799242;

	t3 = (x17*((x18<x19)^x20));

	if (t3 != -32640) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -337806LL;
	uint16_t x22 = UINT16_MAX;
	static uint16_t x23 = 5U;
	int32_t x24 = INT32_MAX;
	volatile int64_t t4 = -1LL;

	t4 = (x21*((x22<x23)^x24));

	if (t4 != -725432860858482LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -1;
	volatile int16_t x27 = INT16_MIN;
	static volatile int64_t t5 = -321875172LL;

	t5 = (x25*((x26<x27)^x28));

	if (t5 != 90372471405060869LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x32 = -1;
	uint64_t t6 = 6364LLU;

	t6 = (x29*((x30<x31)^x32));

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	uint8_t x34 = 6U;
	static uint16_t x35 = UINT16_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t7 = 9898822674287051LLU;

	t7 = (x33*((x34<x35)^x36));

	if (t7 != 18446744073709420546LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = -247285816969656LL;
	int8_t x39 = INT8_MIN;
	static int8_t x40 = INT8_MIN;
	int64_t t8 = 486545583969443LL;

	t8 = (x37*((x38<x39)^x40));

	if (t8 != 31405298755146312LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int16_t x43 = -1;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = 15577;

	t9 = (x41*((x42<x43)^x44));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -7770;
	int64_t x50 = INT64_MAX;
	uint8_t x51 = 50U;
	uint32_t x52 = 56413U;
	uint32_t t10 = 54368U;

	t10 = (x49*((x50<x51)^x52));

	if (t10 != 3856638286U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	volatile int32_t x54 = INT32_MIN;
	int64_t x55 = INT64_MAX;
	int32_t x56 = -3192649;

	t11 = (x53*((x54<x55)^x56));

	if (t11 != 3192650LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x62 = INT32_MAX;
	volatile uint8_t x63 = 17U;
	int32_t t12 = -31;

	t12 = (x61*((x62<x63)^x64));

	if (t12 != -22) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 4956204U;
	uint64_t x70 = 178871813372325LLU;
	int32_t x71 = -1;

	t13 = (x69*((x70<x71)^x72));

	if (t13 != 4285054888U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MAX;
	static uint8_t x74 = 75U;
	static uint8_t x75 = UINT8_MAX;
	volatile int32_t t14 = 1;

	t14 = (x73*((x74<x75)^x76));

	if (t14 != -65534) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = -73503LL;
	int8_t x78 = 38;
	uint32_t x79 = UINT32_MAX;
	static uint64_t x80 = 31800267098749614LLU;
	volatile uint64_t t15 = 465LLU;

	t15 = (x77*((x78<x79)^x80));

	if (t15 != 5321464801720103887LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x85 = 1;
	volatile int64_t x86 = INT64_MIN;
	volatile int32_t x88 = INT32_MAX;

	t16 = (x85*((x86<x87)^x88));

	if (t16 != 2147483646) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = -1;
	int8_t x91 = 3;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t17 = -793998;

	t17 = (x89*((x90<x91)^x92));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x93 = 476LLU;
	static int64_t x94 = 118860978386726178LL;
	static int16_t x95 = INT16_MIN;
	int64_t x96 = -662316464165LL;
	volatile uint64_t t18 = 1770214651151058LLU;

	t18 = (x93*((x94<x95)^x96));

	if (t18 != 18446428811072609076LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = -2187437;
	static int32_t x99 = 124;
	int64_t x100 = -6575LL;
	int64_t t19 = -23573LL;

	t19 = (x97*((x98<x99)^x100));

	if (t19 != 14384585712LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x103 = 8;
	int16_t x104 = -158;
	volatile uint64_t t20 = 923LLU;

	t20 = (x101*((x102<x103)^x104));

	if (t20 != 157LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x105 = INT16_MAX;
	int64_t x107 = INT64_MAX;
	int8_t x108 = 1;
	int32_t t21 = 409324;

	t21 = (x105*((x106<x107)^x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x109 = 3LL;
	volatile int16_t x110 = -11;
	int16_t x111 = INT16_MAX;

	t22 = (x109*((x110<x111)^x112));

	if (t22 != 99015731562LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = -1;
	volatile int8_t x119 = -35;
	uint16_t x120 = 210U;
	int32_t t23 = 6979;

	t23 = (x117*((x118<x119)^x120));

	if (t23 != 13762350) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x123 = INT32_MIN;
	int32_t t24 = -22756;

	t24 = (x121*((x122<x123)^x124));

	if (t24 != -896) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x125 = 6463U;
	static uint32_t x126 = 178U;
	volatile int32_t x127 = -1;
	volatile uint32_t t25 = 1039350257U;

	t25 = (x125*((x126<x127)^x128));

	if (t25 != 4266103538U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	uint64_t x130 = UINT64_MAX;
	static int8_t x131 = -7;
	int64_t x132 = -39LL;
	uint64_t t26 = 3LLU;

	t26 = (x129*((x130<x131)^x132));

	if (t26 != 39LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = 102527LLU;
	volatile int16_t x134 = 187;
	volatile int32_t x135 = -195;
	volatile uint16_t x136 = 23279U;

	t27 = (x133*((x134<x135)^x136));

	if (t27 != 2386726033LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = 203349;
	int8_t x138 = -1;
	uint64_t x139 = 2759058111653378LLU;
	int8_t x140 = INT8_MAX;
	static int32_t t28 = 681982180;

	t28 = (x137*((x138<x139)^x140));

	if (t28 != 25825323) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x142 = INT64_MIN;
	int16_t x143 = -1;
	int8_t x144 = INT8_MAX;
	static volatile int64_t t29 = 47787299087108LL;

	t29 = (x141*((x142<x143)^x144));

	if (t29 != 2052904896LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x150 = 7948U;
	volatile int8_t x152 = 5;
	volatile int32_t t30 = 1;

	t30 = (x149*((x150<x151)^x152));

	if (t30 != -4) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MIN;
	static volatile int64_t x156 = -1054674176LL;
	int64_t t31 = -1506280851LL;

	t31 = (x153*((x154<x155)^x156));

	if (t31 != -1054674176LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x165 = 52068406;
	uint32_t x167 = 7839641U;
	int16_t x168 = -1;

	t32 = (x165*((x166<x167)^x168));

	if (t32 != -52068406) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t t33 = -2180483414433695LL;

	t33 = (x169*((x170<x171)^x172));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x173 = -1LL;
	volatile uint32_t x174 = 32U;
	static uint64_t t34 = 8LLU;

	t34 = (x173*((x174<x175)^x176));

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x180 = UINT8_MAX;
	volatile int64_t t35 = -1367190887LL;

	t35 = (x177*((x178<x179)^x180));

	if (t35 != -3802629945481020LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x186 = UINT8_MAX;
	static int32_t x187 = -2934;
	volatile int32_t x188 = INT32_MIN;
	volatile uint64_t t36 = 10635691417560LLU;

	t36 = (x185*((x186<x187)^x188));

	if (t36 != 2357167748141809664LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x189 = -1;
	volatile int64_t x190 = INT64_MIN;
	uint32_t x191 = UINT32_MAX;
	int16_t x192 = 0;
	int32_t t37 = -6444;

	t37 = (x189*((x190<x191)^x192));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x197 = -1;
	int32_t x198 = 5105;
	int64_t x199 = -11LL;
	uint8_t x200 = 21U;
	int32_t t38 = -637893;

	t38 = (x197*((x198<x199)^x200));

	if (t38 != -21) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = 113211LL;
	static volatile int64_t x203 = -807818461923483LL;
	uint64_t x204 = 33192473268992294LLU;
	uint64_t t39 = 674LLU;

	t39 = (x201*((x202<x203)^x204));

	if (t39 != 14198107495278537984LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x206 = -1;
	int16_t x208 = 57;
	uint64_t t40 = 2LLU;

	t40 = (x205*((x206<x207)^x208));

	if (t40 != 29115126564964608LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x209 = 0U;
	uint8_t x210 = 5U;
	uint16_t x211 = 101U;
	volatile uint8_t x212 = 22U;
	static volatile int32_t t41 = -19368;

	t41 = (x209*((x210<x211)^x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x213 = 12238520U;
	int8_t x214 = 3;
	volatile int8_t x215 = -5;
	static int8_t x216 = -1;

	t42 = (x213*((x214<x215)^x216));

	if (t42 != 4282728776U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = -1;
	int64_t x218 = -5445553814622868LL;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = INT16_MAX;
	volatile int32_t t43 = -454930475;

	t43 = (x217*((x218<x219)^x220));

	if (t43 != -32766) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MAX;
	int32_t x231 = -1;
	static int8_t x232 = INT8_MAX;
	int32_t t44 = -7;

	t44 = (x229*((x230<x231)^x232));

	if (t44 != 4161409) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x233 = -1LL;
	int32_t x234 = -1;
	static int64_t x235 = -1LL;
	int64_t t45 = -14825LL;

	t45 = (x233*((x234<x235)^x236));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x241 = 110U;
	int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MAX;
	uint8_t x244 = 51U;

	t46 = (x241*((x242<x243)^x244));

	if (t46 != 5500) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x245 = UINT32_MAX;
	int16_t x247 = 1045;
	uint8_t x248 = UINT8_MAX;
	uint32_t t47 = 1675089U;

	t47 = (x245*((x246<x247)^x248));

	if (t47 != 4294967042U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile int64_t x255 = INT64_MAX;
	volatile int64_t x256 = -138156057793115LL;
	static int64_t t48 = 122633950277143369LL;

	t48 = (x253*((x254<x255)^x256));

	if (t48 != 4527097701764825088LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x261 = 2U;
	int64_t x262 = INT64_MIN;
	uint8_t x263 = 44U;
	uint64_t t49 = 22771843124LLU;

	t49 = (x261*((x262<x263)^x264));

	if (t49 != 1060522949977574484LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 130260LLU;
	uint16_t x272 = 3U;

	t50 = (x269*((x270<x271)^x272));

	if (t50 != -98304) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x278 = 87939230LLU;
	int64_t x279 = INT64_MIN;
	int64_t x280 = -1LL;
	volatile int64_t t51 = -15865LL;

	t51 = (x277*((x278<x279)^x280));

	if (t51 != 4294967296LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x285 = INT16_MAX;
	int64_t x286 = INT64_MIN;
	int8_t x287 = 22;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t52 = -2713;

	t52 = (x285*((x286<x287)^x288));

	if (t52 != -1073676289) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x289 = INT8_MIN;
	int32_t x290 = -1;
	uint32_t x291 = 17220U;
	uint16_t x292 = 1U;
	volatile int32_t t53 = -26;

	t53 = (x289*((x290<x291)^x292));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x293 = INT32_MAX;
	uint8_t x295 = 10U;
	static uint64_t x296 = 14LLU;
	static volatile uint64_t t54 = 22346864895LLU;

	t54 = (x293*((x294<x295)^x296));

	if (t54 != 30064771058LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x297 = 47371273U;
	static uint32_t x298 = UINT32_MAX;
	int64_t x299 = -23531531LL;
	volatile int64_t x300 = -500665LL;
	static volatile int64_t t55 = -392662293972LL;

	t55 = (x297*((x298<x299)^x300));

	if (t55 != -23717138396545LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x311 = 1988976582709710LLU;
	volatile int8_t x312 = INT8_MAX;
	int32_t t56 = -4306;

	t56 = (x309*((x310<x311)^x312));

	if (t56 != -126) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = 852;
	uint16_t x315 = 1U;
	int64_t x316 = -2LL;
	int64_t t57 = -25911209LL;

	t57 = (x313*((x314<x315)^x316));

	if (t57 != 65536LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x317 = 34U;
	static volatile int16_t x318 = INT16_MAX;
	uint64_t x319 = 132LLU;
	int16_t x320 = INT16_MIN;
	int32_t t58 = -5;

	t58 = (x317*((x318<x319)^x320));

	if (t58 != -1114112) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x321 = -1;
	static int16_t x323 = INT16_MIN;
	static volatile uint64_t t59 = 33451906354755737LLU;

	t59 = (x321*((x322<x323)^x324));

	if (t59 != 18446744073709549942LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x326 = UINT32_MAX;
	volatile int16_t x327 = INT16_MIN;
	static int16_t x328 = INT16_MIN;
	static int32_t t60 = 0;

	t60 = (x325*((x326<x327)^x328));

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x329 = 15LLU;
	static int32_t x330 = INT32_MAX;
	int64_t x331 = INT64_MIN;
	uint64_t x332 = 5526986996343430034LLU;

	t61 = (x329*((x330<x331)^x332));

	if (t61 != 9117828650313244046LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x333 = -1;
	int16_t x334 = -1;
	static uint8_t x335 = UINT8_MAX;
	uint64_t x336 = 7942LLU;

	t62 = (x333*((x334<x335)^x336));

	if (t62 != 18446744073709543673LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x337 = 65053659649LLU;
	int16_t x338 = 9;
	static volatile int64_t x339 = 197503829960LL;
	uint16_t x340 = 5454U;
	static volatile uint64_t t63 = 26864789467LLU;

	t63 = (x337*((x338<x339)^x340));

	if (t63 != 354867713385295LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = -1;
	int16_t x342 = -1;
	volatile uint8_t x343 = UINT8_MAX;
	volatile int64_t t64 = -8699394866LL;

	t64 = (x341*((x342<x343)^x344));

	if (t64 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x346 = 26U;
	static int64_t x347 = -1LL;
	int8_t x348 = INT8_MIN;

	t65 = (x345*((x346<x347)^x348));

	if (t65 != 16384) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x349 = 0;
	int16_t x350 = INT16_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MIN;
	int32_t t66 = -23908744;

	t66 = (x349*((x350<x351)^x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x353 = INT8_MIN;
	uint32_t x354 = 104542145U;
	uint32_t x356 = UINT32_MAX;
	uint32_t t67 = 1728360U;

	t67 = (x353*((x354<x355)^x356));

	if (t67 != 256U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x358 = INT64_MIN;
	static int16_t x360 = -6992;
	int32_t t68 = 0;

	t68 = (x357*((x358<x359)^x360));

	if (t68 != -20973) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x361 = -476;
	int16_t x362 = INT16_MIN;
	volatile int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MAX;
	static int32_t t69 = 2;

	t69 = (x361*((x362<x363)^x364));

	if (t69 != -59976) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x367 = -342;
	int64_t t70 = -9649117LL;

	t70 = (x365*((x366<x367)^x368));

	if (t70 != -102048368340857616LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x377 = INT16_MIN;
	uint8_t x379 = 0U;
	uint32_t x380 = 60969486U;
	volatile uint32_t t71 = 30204U;

	t71 = (x377*((x378<x379)^x380));

	if (t71 != 3606609920U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x389 = -1;
	int64_t x390 = 117095117944224LL;
	int8_t x391 = INT8_MAX;
	int8_t x392 = -1;
	static int32_t t72 = 0;

	t72 = (x389*((x390<x391)^x392));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x397 = 958350630270039LLU;
	uint32_t x398 = UINT32_MAX;
	int32_t x400 = -420;
	volatile uint64_t t73 = 2766890814543LLU;

	t73 = (x397*((x398<x399)^x400));

	if (t73 != 18044236808996135236LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x401 = 343LLU;
	int16_t x402 = -1;
	int16_t x403 = 111;
	uint64_t t74 = 3112664LLU;

	t74 = (x401*((x402<x403)^x404));

	if (t74 != 343LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x405 = INT8_MIN;
	uint16_t x407 = 21673U;
	int32_t x408 = -1287;
	volatile int32_t t75 = 536865433;

	t75 = (x405*((x406<x407)^x408));

	if (t75 != 164736) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x426 = -1;
	int32_t x427 = INT32_MIN;
	static uint32_t x428 = 8548U;

	t76 = (x425*((x426<x427)^x428));

	if (t76 != 25644U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x430 = 1;
	static volatile int8_t x431 = -1;
	uint32_t t77 = 201186221U;

	t77 = (x429*((x430<x431)^x432));

	if (t77 != 4293813546U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x433 = 5773367LL;
	uint32_t x434 = 7U;
	uint16_t x436 = 1788U;
	int64_t t78 = -32414044LL;

	t78 = (x433*((x434<x435)^x436));

	if (t78 != 10328553563LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x437 = INT8_MAX;
	int8_t x438 = 19;
	uint32_t x439 = UINT32_MAX;
	volatile int32_t t79 = -7045;

	t79 = (x437*((x438<x439)^x440));

	if (t79 != 669417) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x441 = UINT16_MAX;
	static uint8_t x442 = UINT8_MAX;
	int8_t x444 = INT8_MIN;
	static volatile int32_t t80 = 270;

	t80 = (x441*((x442<x443)^x444));

	if (t80 != -8388480) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x457 = INT64_MAX;
	volatile uint64_t x458 = UINT64_MAX;
	volatile int64_t t81 = 2LL;

	t81 = (x457*((x458<x459)^x460));

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x461 = 2845484U;
	int8_t x462 = 2;
	static volatile int8_t x463 = INT8_MAX;
	uint32_t t82 = 75430585U;

	t82 = (x461*((x462<x463)^x464));

	if (t82 != 1251306284U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x469 = INT64_MIN;
	int64_t x470 = INT64_MIN;
	int64_t x471 = -4047538136126016LL;
	uint64_t x472 = 8345011035828LLU;
	uint64_t t83 = 8377559114LLU;

	t83 = (x469*((x470<x471)^x472));

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x473 = -3;
	volatile int32_t x474 = -27;
	uint32_t x475 = 31995U;
	int16_t x476 = 4;
	int32_t t84 = 358;

	t84 = (x473*((x474<x475)^x476));

	if (t84 != -12) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x481 = UINT32_MAX;
	volatile uint8_t x482 = UINT8_MAX;
	static uint64_t x483 = 93565218856567751LLU;
	int32_t x484 = INT32_MIN;
	static uint32_t t85 = 13U;

	t85 = (x481*((x482<x483)^x484));

	if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x485 = UINT16_MAX;
	uint64_t x486 = UINT64_MAX;
	uint8_t x487 = UINT8_MAX;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t86 = -7;

	t86 = (x485*((x486<x487)^x488));

	if (t86 != 16711425) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x489 = 23U;
	volatile int32_t x490 = INT32_MAX;
	int16_t x491 = INT16_MIN;
	uint64_t x492 = UINT64_MAX;
	uint64_t t87 = 9221536440949LLU;

	t87 = (x489*((x490<x491)^x492));

	if (t87 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x493 = INT8_MIN;
	static uint16_t x495 = 137U;
	uint64_t x496 = 148825232LLU;

	t88 = (x493*((x494<x495)^x496));

	if (t88 != 18446744054659921920LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x498 = INT32_MAX;
	int32_t x499 = INT32_MIN;
	volatile int64_t x500 = -1LL;
	static uint64_t t89 = 25LLU;

	t89 = (x497*((x498<x499)^x500));

	if (t89 != 15131689087798407427LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x502 = UINT8_MAX;
	uint16_t x503 = UINT16_MAX;
	int16_t x504 = -1;

	t90 = (x501*((x502<x503)^x504));

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x505 = -3513;
	uint8_t x506 = 3U;
	volatile uint8_t x508 = UINT8_MAX;
	int32_t t91 = 13589;

	t91 = (x505*((x506<x507)^x508));

	if (t91 != -892302) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x509 = 2819U;
	uint64_t x510 = 1162LLU;
	int64_t x512 = -2198603LL;
	volatile int64_t t92 = -623957148LL;

	t92 = (x509*((x510<x511)^x512));

	if (t92 != -6197864676LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x513 = INT8_MIN;
	uint8_t x515 = UINT8_MAX;
	uint64_t x516 = 155LLU;

	t93 = (x513*((x514<x515)^x516));

	if (t93 != 18446744073709531904LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x525 = UINT16_MAX;
	int16_t x526 = -171;
	uint16_t x527 = UINT16_MAX;
	int8_t x528 = INT8_MAX;
	volatile int32_t t94 = -3;

	t94 = (x525*((x526<x527)^x528));

	if (t94 != 8257410) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x529 = 2732U;
	static uint32_t x530 = 25050982U;
	int16_t x532 = 1;
	int32_t t95 = -458418077;

	t95 = (x529*((x530<x531)^x532));

	if (t95 != 2732) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x533 = 5034;
	volatile int8_t x534 = 0;
	int16_t x535 = -829;
	volatile uint64_t t96 = 1LLU;

	t96 = (x533*((x534<x535)^x536));

	if (t96 != 313317669308982LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x538 = 498951533342529LLU;
	int16_t x539 = INT16_MIN;
	static volatile int8_t x540 = -1;

	t97 = (x537*((x538<x539)^x540));

	if (t97 != -14) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x541 = -1;
	static volatile int64_t x542 = -2736LL;
	uint16_t x543 = 114U;
	int64_t x544 = INT64_MAX;
	volatile int64_t t98 = -99011510LL;

	t98 = (x541*((x542<x543)^x544));

	if (t98 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x549 = -1;
	volatile int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;
	volatile int32_t t99 = -3;

	t99 = (x549*((x550<x551)^x552));

	if (t99 != 128) { NG(); } else { ; }
	
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

