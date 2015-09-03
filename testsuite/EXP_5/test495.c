#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
volatile int32_t t2 = 234175453;
uint8_t x20 = 3U;
uint64_t t5 = 17LLU;
uint16_t x31 = 7U;
static volatile int64_t t6 = 2148691LL;
static uint16_t x33 = UINT16_MAX;
int32_t x37 = -189;
int32_t x38 = 147;
int16_t x65 = INT16_MIN;
static int64_t t12 = 35703398014LL;
static volatile uint8_t x76 = UINT8_MAX;
static int8_t x78 = 0;
volatile int64_t t15 = -5LL;
static uint32_t x84 = 3580U;
int8_t x85 = -7;
int8_t x86 = INT8_MIN;
static uint16_t x89 = 108U;
int8_t x102 = -1;
int64_t t21 = -67LL;
volatile uint64_t x151 = 1330240705923LLU;
uint64_t t29 = 9697903140LLU;
int8_t x202 = INT8_MIN;
uint32_t x206 = 26303U;
int16_t x207 = INT16_MAX;
volatile uint64_t t34 = 3116LLU;
volatile int64_t x226 = -1LL;
uint32_t x238 = 1232229U;
uint32_t t38 = 0U;
int64_t t39 = -2551259204LL;
int16_t x255 = INT16_MAX;
static int32_t t43 = 1;
uint16_t x289 = UINT16_MAX;
uint8_t x291 = UINT8_MAX;
uint32_t x298 = 1442257U;
int32_t x300 = INT32_MAX;
volatile int8_t x303 = -1;
int16_t x304 = -69;
volatile uint64_t t47 = 3LLU;
int16_t x310 = INT16_MIN;
int8_t x312 = 3;
uint32_t x316 = 3986767U;
uint32_t t49 = 63026502U;
volatile int32_t x317 = -36647;
static volatile int64_t t51 = 123539LL;
static uint32_t x327 = 6995U;
int16_t x337 = 9;
int64_t x343 = -1LL;
volatile int64_t t56 = -121544564695975181LL;
int16_t x354 = -195;
static uint64_t x356 = 3745401231149031089LLU;
static int64_t t59 = 383140633LL;
uint32_t x381 = UINT32_MAX;
volatile uint64_t t63 = 57LLU;
int32_t x393 = -1648;
uint32_t x417 = 213561U;
volatile uint16_t x427 = 494U;
int16_t x429 = INT16_MAX;
int32_t x431 = 1036617;
uint64_t x432 = UINT64_MAX;
int8_t x433 = 9;
int8_t x439 = -1;
int16_t x444 = INT16_MIN;
int8_t x449 = -1;
uint16_t x451 = 5772U;
static int32_t t75 = -521475465;
int8_t x454 = INT8_MAX;
uint64_t x455 = UINT64_MAX;
int8_t x476 = -1;
volatile uint64_t t79 = 1679500732LLU;
volatile uint64_t t80 = 27005350LLU;
volatile uint64_t t82 = 222070122LLU;
volatile int64_t t83 = -142429292835783663LL;
static int8_t x506 = 5;
static int32_t x508 = INT32_MIN;
uint16_t x515 = UINT16_MAX;
uint64_t t87 = 1300516LLU;
int16_t x521 = INT16_MIN;
volatile int32_t x524 = 919826;
volatile uint32_t t88 = 8246U;
int8_t x528 = INT8_MIN;
int16_t x532 = INT16_MIN;
volatile int64_t x533 = INT64_MIN;
uint32_t x536 = UINT32_MAX;
int8_t x552 = -1;
volatile int32_t t95 = -496809;
uint32_t x561 = 43496713U;
uint64_t x562 = 1LLU;
static uint16_t x563 = 8U;
static int32_t x567 = 0;


void f0(void) {
	uint32_t x1 = 11982U;
	static uint32_t x2 = UINT32_MAX;
	int32_t x3 = -1;
	volatile int64_t x4 = 4251857211718LL;
	static volatile int64_t t0 = 2194265421876089368LL;

	t0 = (x1+((x2*x3)^x4));

	if (t0 != 4251857223701LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = -1;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = -970777844;

	t1 = (x5+((x6*x7)^x8));

	if (t1 != 32896) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 20U;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 3U;
	volatile int32_t x12 = -1;

	t2 = (x9+((x10*x11)^x12));

	if (t2 != 403) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 5U;
	volatile int8_t x18 = INT8_MAX;
	volatile int8_t x19 = INT8_MIN;
	int32_t t3 = 622345;

	t3 = (x17+((x18*x19)^x20));

	if (t3 != -16248) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -190LL;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;
	static uint64_t t4 = 85160917225644755LLU;

	t4 = (x21+((x22*x23)^x24));

	if (t4 != 65345LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 13406598502LLU;
	uint64_t x26 = UINT64_MAX;
	int16_t x27 = 1616;
	uint64_t x28 = UINT64_MAX;

	t5 = (x25+((x26*x27)^x28));

	if (t5 != 13406600117LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -57139267;
	static int64_t x30 = -92LL;
	volatile int64_t x32 = INT64_MIN;

	t6 = (x29+((x30*x31)^x32));

	if (t6 != 9223372036797635897LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x34 = UINT64_MAX;
	uint8_t x35 = 69U;
	static uint8_t x36 = 124U;
	static volatile uint64_t t7 = 2172LLU;

	t7 = (x33+((x34*x35)^x36));

	if (t7 != 65478LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x39 = -1LL;
	uint64_t x40 = 54642LLU;
	static volatile uint64_t t8 = 5LLU;

	t8 = (x37+((x38*x39)^x40));

	if (t8 != 18446744073709496674LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 0;
	static uint16_t x42 = 7U;
	int16_t x43 = INT16_MAX;
	int8_t x44 = -1;
	int32_t t9 = 12240476;

	t9 = (x41+((x42*x43)^x44));

	if (t9 != -229370) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	uint8_t x51 = 49U;
	int8_t x52 = -1;
	int32_t t10 = -139039;

	t10 = (x49+((x50*x51)^x52));

	if (t10 != -32720) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MAX;
	volatile uint8_t x59 = 8U;
	static uint64_t x60 = 63973630LLU;
	uint64_t t11 = 32288949266LLU;

	t11 = (x57+((x58*x59)^x60));

	if (t11 != 64214662LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x66 = INT16_MIN;
	volatile int32_t x67 = -1;
	int64_t x68 = -1LL;

	t12 = (x65+((x66*x67)^x68));

	if (t12 != -65537LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = 205602854LL;
	static volatile uint64_t x70 = 9496294910173LLU;
	static int16_t x71 = INT16_MIN;
	int16_t x72 = 2343;
	uint64_t t13 = 389LLU;

	t13 = (x69+((x70*x71)^x72));

	if (t13 != 18135569482298607949LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = UINT64_MAX;
	static int32_t x74 = -1;
	int32_t x75 = INT32_MAX;
	uint64_t t14 = 572186019873523007LLU;

	t14 = (x73+((x74*x75)^x76));

	if (t14 != 18446744071562068221LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	int64_t x79 = -69LL;
	int32_t x80 = INT32_MIN;

	t15 = (x77+((x78*x79)^x80));

	if (t15 != -2147483393LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = 7885LLU;
	static uint32_t x82 = 932516190U;
	volatile uint64_t x83 = 3LLU;
	uint64_t t16 = 96734744284LLU;

	t16 = (x81+((x82*x83)^x84));

	if (t16 != 2797557939LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x87 = 1;
	uint32_t x88 = 1087970890U;
	volatile uint32_t t17 = 7U;

	t17 = (x85+((x86*x87)^x88));

	if (t17 != 3206996419U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x90 = 596140170634LL;
	volatile int16_t x91 = INT16_MAX;
	static int64_t x92 = INT64_MIN;
	static int64_t t18 = -5069650274LL;

	t18 = (x89+((x90*x91)^x92));

	if (t18 != -9203838311883611422LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x101 = -1;
	volatile uint32_t x103 = UINT32_MAX;
	uint64_t x104 = UINT64_MAX;
	uint64_t t19 = 546115422760LLU;

	t19 = (x101+((x102*x103)^x104));

	if (t19 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x105 = -7;
	int8_t x106 = 3;
	int16_t x107 = -7;
	volatile int16_t x108 = 2;
	volatile int32_t t20 = -12228;

	t20 = (x105+((x106*x107)^x108));

	if (t20 != -30) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x117 = -1598673044955430LL;
	int64_t x118 = -14498732243LL;
	int8_t x119 = INT8_MIN;
	int32_t x120 = 10354850;

	t21 = (x117+((x118*x119)^x120));

	if (t21 != -1596817215223812LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x137 = 101844451U;
	volatile uint32_t x138 = 3U;
	uint64_t x139 = 18092337498LLU;
	int8_t x140 = INT8_MIN;
	uint64_t t22 = 72800718892562LLU;

	t22 = (x137+((x138*x139)^x140));

	if (t22 != 18446744019534383473LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x141 = -315;
	volatile int8_t x142 = -6;
	uint8_t x143 = 16U;
	int32_t x144 = 707013;
	int32_t t23 = 124265423;

	t23 = (x141+((x142*x143)^x144));

	if (t23 != -707286) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x149 = -4;
	int64_t x150 = INT64_MAX;
	volatile uint64_t x152 = 129931113054LLU;
	uint64_t t24 = 2566555297882LLU;

	t24 = (x149+((x150*x151)^x152));

	if (t24 != 9223370748482476063LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x157 = -1615726366LL;
	uint16_t x158 = 63U;
	static uint16_t x159 = 247U;
	uint16_t x160 = 326U;
	int64_t t25 = -46029260237981852LL;

	t25 = (x157+((x158*x159)^x160));

	if (t25 != -1615710607LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x161 = 15U;
	static volatile uint8_t x162 = 4U;
	static volatile int64_t x163 = -1LL;
	int8_t x164 = -3;
	volatile int64_t t26 = 11877419658LL;

	t26 = (x161+((x162*x163)^x164));

	if (t26 != 16LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x165 = INT32_MIN;
	volatile uint32_t x166 = 1145U;
	static uint8_t x167 = 88U;
	int32_t x168 = INT32_MAX;
	uint32_t t27 = 1050568604U;

	t27 = (x165+((x166*x167)^x168));

	if (t27 != 4294866535U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x169 = INT8_MAX;
	uint64_t x170 = 14352LLU;
	uint8_t x171 = 1U;
	int8_t x172 = 1;
	volatile uint64_t t28 = 70473610041LLU;

	t28 = (x169+((x170*x171)^x172));

	if (t28 != 14480LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x173 = -11288852674LL;
	volatile int64_t x174 = -52146594761160826LL;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = -61190437716LL;

	t29 = (x173+((x174*x175)^x176));

	if (t29 != 18394597511434732564LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = 1;
	static volatile uint64_t x182 = 5353481LLU;
	uint16_t x183 = 255U;
	static uint64_t x184 = UINT64_MAX;
	volatile uint64_t t30 = 1042805489274472LLU;

	t30 = (x181+((x182*x183)^x184));

	if (t30 != 18446744072344413961LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x197 = 1137203LLU;
	int32_t x198 = 4351880;
	int8_t x199 = INT8_MAX;
	static int64_t x200 = -1LL;
	uint64_t t31 = 62207729LLU;

	t31 = (x197+((x198*x199)^x200));

	if (t31 != 18446744073158000058LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x201 = -45;
	int32_t x203 = -8;
	volatile int64_t x204 = INT64_MIN;
	int64_t t32 = -431934739316235LL;

	t32 = (x201+((x202*x203)^x204));

	if (t32 != -9223372036854774829LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x205 = INT64_MIN;
	int64_t x208 = INT64_MAX;
	volatile int64_t t33 = -829004319094LL;

	t33 = (x205+((x206*x207)^x208));

	if (t33 != -861870402LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x213 = 33;
	static uint64_t x214 = 8366367556895LLU;
	int32_t x215 = -1;
	static uint32_t x216 = 789293250U;

	t34 = (x213+((x214*x215)^x216));

	if (t34 != 18446735707694797380LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x221 = -15061952;
	int8_t x222 = -49;
	volatile int16_t x223 = INT16_MIN;
	static uint8_t x224 = 14U;
	static volatile int32_t t35 = 31;

	t35 = (x221+((x222*x223)^x224));

	if (t35 != -13456306) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x225 = UINT16_MAX;
	int64_t x227 = 88LL;
	int8_t x228 = -1;
	int64_t t36 = -11501782LL;

	t36 = (x225+((x226*x227)^x228));

	if (t36 != 65622LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x233 = UINT32_MAX;
	static int8_t x234 = INT8_MAX;
	volatile uint32_t x235 = 1972140734U;
	static uint64_t x236 = 132688725530LLU;
	static uint64_t t37 = 88113053883034LLU;

	t37 = (x233+((x234*x235)^x236));

	if (t37 != 136171070039LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x237 = INT32_MIN;
	int16_t x239 = -30;
	static volatile uint8_t x240 = UINT8_MAX;

	t38 = (x237+((x238*x239)^x240));

	if (t38 != 2110516949U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x241 = 6111073006LL;
	int8_t x242 = INT8_MIN;
	static int16_t x243 = 368;
	int64_t x244 = INT64_MAX;

	t39 = (x241+((x242*x243)^x244));

	if (t39 != -9223372030743655699LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = INT16_MIN;
	volatile uint32_t x247 = 427U;
	volatile int64_t x248 = -1LL;
	int64_t t40 = 93708149025LL;

	t40 = (x245+((x246*x247)^x248));

	if (t40 != -4280975234LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x253 = -1;
	int64_t x254 = 59284028LL;
	uint8_t x256 = 2U;
	volatile int64_t t41 = -2LL;

	t41 = (x253+((x254*x255)^x256));

	if (t41 != 1942559745477LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x265 = -1;
	volatile uint64_t x266 = 4LLU;
	uint8_t x267 = 31U;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t42 = 4485765LLU;

	t42 = (x265+((x266*x267)^x268));

	if (t42 != 18446744071562068091LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x273 = UINT8_MAX;
	int32_t x274 = 1781;
	uint16_t x275 = 830U;
	int32_t x276 = INT32_MIN;

	t43 = (x273+((x274*x275)^x276));

	if (t43 != -2146005163) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x281 = 15;
	int64_t x282 = 17162944409704996LL;
	int16_t x283 = -3;
	static uint8_t x284 = 1U;
	volatile int64_t t44 = -6245LL;

	t44 = (x281+((x282*x283)^x284));

	if (t44 != -51488833229114972LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x290 = -1LL;
	int32_t x292 = INT32_MAX;
	int64_t t45 = 7713LL;

	t45 = (x289+((x290*x291)^x292));

	if (t45 != -2147417859LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x297 = -20;
	int16_t x299 = -108;
	volatile uint32_t t46 = 27U;

	t46 = (x297+((x298*x299)^x300));

	if (t46 != 2303247383U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x301 = -1LL;
	uint64_t x302 = UINT64_MAX;

	t47 = (x301+((x302*x303)^x304));

	if (t47 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x309 = -71;
	int16_t x311 = -1;
	volatile int32_t t48 = 79263625;

	t48 = (x309+((x310*x311)^x312));

	if (t48 != 32700) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x313 = INT8_MIN;
	volatile int32_t x314 = -10539;
	static int8_t x315 = INT8_MIN;

	t49 = (x313+((x314*x315)^x316));

	if (t49 != 2637903U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x318 = -48138;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = INT16_MAX;
	uint64_t t50 = 74591867573LLU;

	t50 = (x317+((x318*x319)^x320));

	if (t50 != 13518LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	static uint32_t x324 = 34U;

	t51 = (x321+((x322*x323)^x324));

	if (t51 != -9223372032564002654LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x325 = 21U;
	int32_t x326 = 49526;
	static int64_t x328 = INT64_MAX;
	static volatile int64_t t52 = 2901848005559551LL;

	t52 = (x325+((x326*x327)^x328));

	if (t52 != 9223372036508341458LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MAX;
	volatile int8_t x331 = -1;
	int16_t x332 = INT16_MAX;
	volatile int32_t t53 = 1;

	t53 = (x329+((x330*x331)^x332));

	if (t53 != 32893) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x338 = INT16_MAX;
	volatile uint32_t x339 = 170U;
	volatile int16_t x340 = INT16_MAX;
	volatile uint32_t t54 = 1U;

	t54 = (x337+((x338*x339)^x340));

	if (t54 != 5537970U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x341 = 28;
	uint16_t x342 = UINT16_MAX;
	uint32_t x344 = 114585656U;
	int64_t t55 = 36LL;

	t55 = (x341+((x342*x343)^x344));

	if (t55 != -114593707LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x345 = INT16_MAX;
	static uint16_t x346 = 75U;
	static int16_t x347 = INT16_MAX;
	int64_t x348 = -61LL;

	t56 = (x345+((x346*x347)^x348));

	if (t56 != -2424715LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x350 = 10121U;
	volatile uint32_t x351 = UINT32_MAX;
	volatile uint32_t x352 = UINT32_MAX;
	volatile uint32_t t57 = 2050360U;

	t57 = (x349+((x350*x351)^x352));

	if (t57 != 4294944648U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x353 = -1;
	uint32_t x355 = 3U;
	static volatile uint64_t t58 = 1694LLU;

	t58 = (x353+((x354*x355)^x356));

	if (t58 != 3745401232090276613LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x361 = -1LL;
	int8_t x362 = -22;
	uint16_t x363 = UINT16_MAX;
	static int32_t x364 = INT32_MAX;

	t59 = (x361+((x362*x363)^x364));

	if (t59 != -2146041880LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x365 = INT32_MIN;
	uint32_t x366 = 2482U;
	int64_t x367 = -1LL;
	uint64_t x368 = 900531574519674148LLU;
	static volatile uint64_t t60 = 13LLU;

	t60 = (x365+((x366*x367)^x368));

	if (t60 != 17546212497042391914LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x369 = 3U;
	int64_t x370 = -1LL;
	volatile int16_t x371 = -6626;
	static int32_t x372 = 28681;
	volatile int64_t t61 = 522905428LL;

	t61 = (x369+((x370*x371)^x372));

	if (t61 != 27118LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = INT8_MAX;
	static int8_t x379 = -1;
	volatile int64_t x380 = INT64_MIN;
	volatile int64_t t62 = -138112209LL;

	t62 = (x377+((x378*x379)^x380));

	if (t62 != -127LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x382 = INT16_MAX;
	uint64_t x383 = 528260788208011LLU;
	int16_t x384 = -1;

	t63 = (x381+((x382*x383)^x384));

	if (t63 != 1137222830792622473LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x394 = -17854LL;
	int64_t x395 = -869649LL;
	volatile int32_t x396 = INT32_MIN;
	volatile int64_t t64 = -1698526726666746774LL;

	t64 = (x393+((x394*x395)^x396));

	if (t64 != -16685543122LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int16_t x398 = -5608;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 10U;
	uint64_t t65 = 93031LLU;

	t65 = (x397+((x398*x399)^x400));

	if (t65 != 717833LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x401 = UINT32_MAX;
	static uint16_t x402 = UINT16_MAX;
	static uint8_t x403 = 117U;
	static volatile uint8_t x404 = 6U;
	volatile uint32_t t66 = 6660612U;

	t66 = (x401+((x402*x403)^x404));

	if (t66 != 7667596U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = -1;
	int64_t x411 = -51369751253964LL;
	volatile int64_t x412 = 1343945775LL;
	int64_t t67 = 3107277568217206LL;

	t67 = (x409+((x410*x411)^x412));

	if (t67 != 51366263025635LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x418 = INT8_MIN;
	int16_t x419 = -1;
	uint64_t x420 = 8680822858157732678LLU;
	volatile uint64_t t68 = 4088714870056LLU;

	t68 = (x417+((x418*x419)^x420));

	if (t68 != 8680822858157946367LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x421 = INT64_MAX;
	static uint64_t x422 = UINT64_MAX;
	static uint64_t x423 = 62473634328255LLU;
	int8_t x424 = INT8_MAX;
	volatile uint64_t t69 = 95594LLU;

	t69 = (x421+((x422*x423)^x424));

	if (t69 != 9223309563220447549LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x425 = 6U;
	uint8_t x426 = 21U;
	uint32_t x428 = 159260U;
	static volatile uint32_t t70 = 2U;

	t70 = (x425+((x426*x427)^x428));

	if (t70 != 149152U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x430 = -1;
	volatile uint64_t t71 = 0LLU;

	t71 = (x429+((x430*x431)^x432));

	if (t71 != 1069383LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x434 = -1;
	int8_t x435 = -1;
	uint8_t x436 = 12U;
	volatile int32_t t72 = 44165;

	t72 = (x433+((x434*x435)^x436));

	if (t72 != 22) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x437 = 2U;
	static volatile uint8_t x438 = UINT8_MAX;
	uint16_t x440 = 1069U;
	int32_t t73 = 474039;

	t73 = (x437+((x438*x439)^x440));

	if (t73 != -1234) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x441 = INT64_MAX;
	volatile uint64_t x442 = UINT64_MAX;
	int64_t x443 = 5853114362LL;
	static uint64_t t74 = 72848773LLU;

	t74 = (x441+((x442*x443)^x444));

	if (t74 != 9223372042707865605LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x450 = 2U;
	static int8_t x452 = INT8_MIN;

	t75 = (x449+((x450*x451)^x452));

	if (t75 != -11625) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x453 = 2420U;
	int32_t x456 = INT32_MIN;
	uint64_t t76 = 66LLU;

	t76 = (x453+((x454*x455)^x456));

	if (t76 != 2147485941LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x461 = UINT64_MAX;
	static uint32_t x462 = 415U;
	int8_t x463 = -6;
	uint32_t x464 = 2U;
	volatile uint64_t t77 = 0LLU;

	t77 = (x461+((x462*x463)^x464));

	if (t77 != 4294964803LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x465 = INT32_MAX;
	uint32_t x466 = 505076U;
	uint64_t x467 = UINT64_MAX;
	int8_t x468 = -35;
	uint64_t t78 = 71721199315851631LLU;

	t78 = (x465+((x466*x467)^x468));

	if (t78 != 2147988688LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x473 = INT16_MIN;
	uint32_t x474 = 468U;
	uint64_t x475 = 440997432266457LLU;

	t79 = (x473+((x474*x475)^x476));

	if (t79 != 18240357275408816971LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x477 = -975526673;
	static int32_t x478 = -1;
	static uint64_t x479 = UINT64_MAX;
	int16_t x480 = -1;

	t80 = (x477+((x478*x479)^x480));

	if (t80 != 18446744072734024941LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x481 = 8U;
	volatile uint32_t x482 = 1949106U;
	int16_t x483 = INT16_MAX;
	volatile uint32_t x484 = 40071291U;
	volatile uint32_t t81 = 38657U;

	t81 = (x481+((x482*x483)^x484));

	if (t81 != 3705156157U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x485 = 99210241U;
	volatile int16_t x486 = INT16_MIN;
	uint64_t x487 = UINT64_MAX;
	uint8_t x488 = 75U;

	t82 = (x485+((x486*x487)^x488));

	if (t82 != 99243084LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x489 = -1LL;
	static int64_t x490 = 1396513069LL;
	uint32_t x491 = 1U;
	int64_t x492 = 67825555618LL;

	t83 = (x489+((x490*x491)^x492));

	if (t83 != 67000517006LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x501 = -1;
	uint32_t x502 = 20U;
	int8_t x503 = INT8_MIN;
	int32_t x504 = -1;
	volatile uint32_t t84 = 94U;

	t84 = (x501+((x502*x503)^x504));

	if (t84 != 2558U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x505 = INT32_MIN;
	uint64_t x507 = 367LLU;
	uint64_t t85 = 1029267046LLU;

	t85 = (x505+((x506*x507)^x508));

	if (t85 != 18446744069414586155LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x513 = INT8_MIN;
	int64_t x514 = -43454805LL;
	int16_t x516 = INT16_MAX;
	int64_t t86 = -6761797946759329LL;

	t86 = (x513+((x514*x515)^x516));

	if (t86 != -2847810621910LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x517 = UINT64_MAX;
	int8_t x518 = INT8_MIN;
	uint64_t x519 = UINT64_MAX;
	volatile uint16_t x520 = 1683U;

	t87 = (x517+((x518*x519)^x520));

	if (t87 != 1554LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x522 = 13926U;
	static uint32_t x523 = 5U;

	t88 = (x521+((x522*x523)^x524));

	if (t88 != 952044U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x525 = INT8_MAX;
	uint16_t x526 = UINT16_MAX;
	int16_t x527 = INT16_MIN;
	int32_t t89 = 6;

	t89 = (x525+((x526*x527)^x528));

	if (t89 != 2147450879) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x529 = UINT16_MAX;
	volatile uint16_t x530 = 1452U;
	static uint32_t x531 = UINT32_MAX;
	static uint32_t t90 = 497U;

	t90 = (x529+((x530*x531)^x532));

	if (t90 != 96851U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x534 = INT16_MIN;
	int8_t x535 = INT8_MIN;
	int64_t t91 = 0LL;

	t91 = (x533+((x534*x535)^x536));

	if (t91 != -9223372032564002817LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x537 = 29;
	uint16_t x538 = 1932U;
	volatile int16_t x539 = 3467;
	int64_t x540 = INT64_MAX;
	volatile int64_t t92 = -1300405LL;

	t92 = (x537+((x538*x539)^x540));

	if (t92 != 9223372036848077592LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x541 = 4;
	int32_t x542 = INT32_MAX;
	uint32_t x543 = 1U;
	uint64_t x544 = 814494416052LLU;
	static uint64_t t93 = 62683LLU;

	t93 = (x541+((x542*x543)^x544));

	if (t93 != 815445672783LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x545 = 1725;
	int64_t x546 = -82877357100LL;
	volatile uint16_t x547 = UINT16_MAX;
	uint16_t x548 = 1U;
	volatile int64_t t94 = -9171LL;

	t94 = (x545+((x546*x547)^x548));

	if (t94 != -5431367597546774LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x549 = -941247395;
	int8_t x550 = -1;
	int32_t x551 = 1705;

	t95 = (x549+((x550*x551)^x552));

	if (t95 != -941245691) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x553 = -707;
	volatile uint32_t x554 = 145683U;
	uint32_t x555 = UINT32_MAX;
	volatile uint64_t x556 = 3246047670626625LLU;
	volatile uint64_t t96 = 172979365720831847LLU;

	t96 = (x553+((x554*x555)^x556));

	if (t96 != 3246048800222441LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x557 = INT8_MIN;
	uint8_t x558 = 73U;
	uint16_t x559 = UINT16_MAX;
	int64_t x560 = 11LL;
	int64_t t97 = -2332367892008062425LL;

	t97 = (x557+((x558*x559)^x560));

	if (t97 != 4783932LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x564 = -945197538808752011LL;
	static volatile uint64_t t98 = 1745LLU;

	t98 = (x561+((x562*x563)^x564));

	if (t98 != 17501546534944296326LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x565 = INT16_MIN;
	uint32_t x566 = UINT32_MAX;
	static int16_t x568 = INT16_MIN;
	static volatile uint32_t t99 = 25814513U;

	t99 = (x565+((x566*x567)^x568));

	if (t99 != 4294901760U) { NG(); } else { ; }
	
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

