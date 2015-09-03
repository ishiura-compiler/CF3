#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
int8_t x6 = -1;
static volatile uint16_t x7 = 0U;
int16_t x12 = INT16_MAX;
volatile int8_t x15 = 0;
int16_t x16 = INT16_MIN;
static int32_t t3 = 212;
static volatile int32_t t5 = -50503329;
int8_t x32 = -1;
int32_t t7 = -1;
int32_t x39 = -2572954;
int8_t x49 = INT8_MIN;
uint16_t x51 = 115U;
int32_t x53 = -104611;
int32_t t12 = -3683;
volatile int8_t x77 = INT8_MIN;
uint32_t x87 = 46115U;
volatile int8_t x92 = INT8_MIN;
uint8_t x95 = 3U;
volatile uint16_t x101 = 13U;
int64_t x103 = -1LL;
int32_t x107 = INT32_MAX;
int32_t t25 = 11;
int64_t x114 = -17814912994050095LL;
volatile int32_t t27 = 638485;
static int8_t x122 = 26;
uint16_t x123 = 11U;
static int16_t x137 = INT16_MIN;
volatile int32_t t33 = -165;
int32_t x146 = 495;
int32_t t35 = 1;
volatile int32_t x149 = INT32_MAX;
uint64_t x160 = UINT64_MAX;
uint64_t x162 = UINT64_MAX;
int8_t x163 = INT8_MAX;
static int32_t x164 = INT32_MIN;
uint64_t x170 = UINT64_MAX;
static volatile uint8_t x181 = 11U;
volatile int8_t x203 = INT8_MIN;
int64_t x205 = -52724265332818LL;
static volatile uint16_t x209 = 5982U;
uint8_t x214 = UINT8_MAX;
int32_t x220 = -1;
uint64_t x241 = 16893753LLU;
int16_t x261 = INT16_MIN;
int16_t x265 = INT16_MIN;
int32_t t64 = -13766;
volatile int8_t x270 = -1;
static int8_t x279 = -1;
uint32_t x283 = 6193U;
static uint16_t x285 = 1671U;
volatile int32_t t71 = 36052811;
volatile int64_t x305 = INT64_MIN;
volatile int16_t x307 = -1;
int32_t x312 = INT32_MAX;
static int32_t t75 = 6339;
static uint64_t x324 = 469518378073LLU;
volatile int32_t t78 = -7;
static int16_t x330 = INT16_MIN;
static int16_t x331 = INT16_MIN;
static int32_t t81 = -14429205;
volatile int8_t x343 = -1;
volatile int8_t x348 = INT8_MAX;
static int64_t x351 = INT64_MIN;
static int8_t x352 = -1;
int32_t t84 = -1;
uint8_t x354 = UINT8_MAX;
int16_t x360 = INT16_MAX;
static uint32_t x361 = 32516U;
uint16_t x364 = 8740U;
int32_t x368 = 2597359;
volatile int32_t t89 = -1317;
int8_t x375 = 1;
int16_t x376 = INT16_MIN;
int8_t x378 = INT8_MIN;
uint64_t x379 = UINT64_MAX;
int8_t x381 = INT8_MAX;
int32_t x383 = INT32_MIN;
static volatile int32_t t94 = -126;
int8_t x397 = INT8_MAX;
int8_t x402 = INT8_MIN;


void f0(void) {
	volatile uint64_t x1 = 100658425909LLU;
	static uint16_t x2 = 7U;
	uint64_t x3 = 78410970597LLU;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 10;

	t0 = (x1<=((x2^x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x8 = 395663042;
	static volatile int32_t t1 = 87289;

	t1 = (x5<=((x6^x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MIN;
	int16_t x11 = 0;
	static int32_t t2 = -250;

	t2 = (x9<=((x10^x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint32_t x14 = 374U;

	t3 = (x13<=((x14^x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 3244U;
	int16_t x18 = INT16_MIN;
	int16_t x19 = -11;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -14;

	t4 = (x17<=((x18^x19)%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1938341LLU;
	int64_t x22 = INT64_MAX;
	static int64_t x23 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;

	t5 = (x21<=((x22^x23)%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 1;
	uint64_t x26 = 43LLU;
	uint8_t x27 = 5U;
	static int16_t x28 = INT16_MAX;
	int32_t t6 = -85;

	t6 = (x25<=((x26^x27)%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int8_t x30 = INT8_MIN;
	int32_t x31 = 2961935;

	t7 = (x29<=((x30^x31)%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 89382617491LLU;
	static int8_t x34 = INT8_MIN;
	static int16_t x35 = -9573;
	volatile int16_t x36 = INT16_MAX;
	int32_t t8 = -23939375;

	t8 = (x33<=((x34^x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 14U;
	int32_t x38 = INT32_MIN;
	volatile uint8_t x40 = 1U;
	int32_t t9 = 27;

	t9 = (x37<=((x38^x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = 2523323042482LLU;
	volatile int16_t x46 = 5;
	int32_t x47 = 198;
	uint16_t x48 = 14912U;
	volatile int32_t t10 = 61807972;

	t10 = (x45<=((x46^x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x50 = -76473697;
	uint32_t x52 = 1716219U;
	volatile int32_t t11 = 15547525;

	t11 = (x49<=((x50^x51)%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 34U;
	int16_t x56 = -25;

	t12 = (x53<=((x54^x55)%x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x57 = 246697LLU;
	int8_t x58 = INT8_MAX;
	int16_t x59 = -1;
	static int32_t x60 = 1;
	volatile int32_t t13 = -711;

	t13 = (x57<=((x58^x59)%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -7;
	int16_t x62 = -85;
	static int64_t x63 = -3374306792318LL;
	static volatile int16_t x64 = INT16_MIN;
	static volatile int32_t t14 = -1112;

	t14 = (x61<=((x62^x63)%x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 247U;
	volatile int16_t x66 = INT16_MIN;
	static uint16_t x67 = 1373U;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t15 = -3474;

	t15 = (x65<=((x66^x67)%x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MIN;
	uint16_t x70 = UINT16_MAX;
	volatile int32_t x71 = INT32_MIN;
	uint32_t x72 = 200632744U;
	volatile int32_t t16 = -14646686;

	t16 = (x69<=((x70^x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = UINT16_MAX;
	uint16_t x74 = 0U;
	static uint8_t x75 = 5U;
	volatile int8_t x76 = -1;
	int32_t t17 = 2;

	t17 = (x73<=((x74^x75)%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x78 = INT32_MIN;
	uint8_t x79 = 108U;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t18 = -2596;

	t18 = (x77<=((x78^x79)%x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 24073291023LLU;
	uint64_t x82 = UINT64_MAX;
	uint32_t x83 = 30U;
	uint64_t x84 = 86281670560741200LLU;
	int32_t t19 = -81;

	t19 = (x81<=((x82^x83)%x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int64_t x86 = INT64_MIN;
	volatile int64_t x88 = -1LL;
	volatile int32_t t20 = -2283606;

	t20 = (x85<=((x86^x87)%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = INT8_MIN;
	static volatile int32_t x90 = INT32_MIN;
	static int8_t x91 = 7;
	int32_t t21 = -412;

	t21 = (x89<=((x90^x91)%x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -15678;
	static int32_t x94 = -1;
	uint16_t x96 = 30067U;
	int32_t t22 = 212;

	t22 = (x93<=((x94^x95)%x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	static uint64_t x98 = 0LLU;
	uint32_t x99 = UINT32_MAX;
	volatile int32_t x100 = 97;
	int32_t t23 = -222;

	t23 = (x97<=((x98^x99)%x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = -19;
	static int32_t x104 = -1006;
	static volatile int32_t t24 = 0;

	t24 = (x101<=((x102^x103)%x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x105 = 3375880421240942LLU;
	int64_t x106 = INT64_MAX;
	uint8_t x108 = 17U;

	t25 = (x105<=((x106^x107)%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = 2575;
	static uint16_t x110 = 10573U;
	static uint64_t x111 = 8101608173LLU;
	volatile int64_t x112 = INT64_MIN;
	int32_t t26 = 46;

	t26 = (x109<=((x110^x111)%x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 34U;
	int64_t x115 = INT64_MAX;
	int32_t x116 = INT32_MIN;

	t27 = (x113<=((x114^x115)%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 167U;
	uint64_t x120 = 550635LLU;
	volatile int32_t t28 = 201805145;

	t28 = (x117<=((x118^x119)%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MAX;
	uint8_t x124 = 19U;
	int32_t t29 = 748763;

	t29 = (x121<=((x122^x123)%x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x125 = 3202480626319LLU;
	int64_t x126 = -1LL;
	int8_t x127 = 0;
	int16_t x128 = INT16_MIN;
	int32_t t30 = 0;

	t30 = (x125<=((x126^x127)%x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	uint64_t x130 = UINT64_MAX;
	static int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MAX;
	int32_t t31 = -25864405;

	t31 = (x129<=((x130^x131)%x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MAX;
	uint8_t x134 = UINT8_MAX;
	volatile int8_t x135 = -1;
	volatile uint32_t x136 = 125U;
	volatile int32_t t32 = 160;

	t32 = (x133<=((x134^x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x138 = -690075580999764LL;
	volatile int8_t x139 = -1;
	int32_t x140 = -1;

	t33 = (x137<=((x138^x139)%x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = -15;
	static volatile uint64_t x142 = UINT64_MAX;
	uint16_t x143 = UINT16_MAX;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t34 = -99592869;

	t34 = (x141<=((x142^x143)%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 299580LLU;
	int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MAX;

	t35 = (x145<=((x146^x147)%x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x150 = INT32_MIN;
	int16_t x151 = -1;
	static uint8_t x152 = 53U;
	volatile int32_t t36 = 6;

	t36 = (x149<=((x150^x151)%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 2585U;
	uint8_t x154 = 18U;
	int32_t x155 = INT32_MAX;
	static int8_t x156 = -59;
	int32_t t37 = -2020;

	t37 = (x153<=((x154^x155)%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 4904009U;
	uint64_t x159 = UINT64_MAX;
	volatile int32_t t38 = 1745061;

	t38 = (x157<=((x158^x159)%x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -46007;
	int32_t t39 = -5390;

	t39 = (x161<=((x162^x163)%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = 2263425590393369622LL;
	int8_t x167 = 2;
	int64_t x168 = INT64_MIN;
	static int32_t t40 = 2875;

	t40 = (x165<=((x166^x167)%x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = 1U;
	int64_t x171 = -8LL;
	uint32_t x172 = 196694291U;
	volatile int32_t t41 = 195;

	t41 = (x169<=((x170^x171)%x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x173 = INT8_MIN;
	volatile int64_t x174 = INT64_MIN;
	uint32_t x175 = 1777U;
	static uint32_t x176 = 2U;
	volatile int32_t t42 = -24;

	t42 = (x173<=((x174^x175)%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x178 = 9458697U;
	uint32_t x179 = UINT32_MAX;
	volatile int8_t x180 = INT8_MIN;
	static int32_t t43 = 54145;

	t43 = (x177<=((x178^x179)%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x182 = 111186001657788LL;
	uint32_t x183 = 236U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t44 = 0;

	t44 = (x181<=((x182^x183)%x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	uint32_t x186 = 2576833U;
	int8_t x187 = INT8_MIN;
	int8_t x188 = 1;
	volatile int32_t t45 = 42885;

	t45 = (x185<=((x186^x187)%x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = UINT32_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	int64_t x191 = INT64_MIN;
	static uint8_t x192 = 9U;
	int32_t t46 = 234;

	t46 = (x189<=((x190^x191)%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MAX;
	uint32_t x194 = 493650049U;
	static int64_t x195 = 29276312LL;
	int8_t x196 = 6;
	static volatile int32_t t47 = -92692;

	t47 = (x193<=((x194^x195)%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	static int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MAX;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t48 = 302;

	t48 = (x197<=((x198^x199)%x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int32_t x204 = 121275438;
	volatile int32_t t49 = -2694497;

	t49 = (x201<=((x202^x203)%x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x206 = INT16_MIN;
	uint64_t x207 = 1086LLU;
	volatile uint8_t x208 = 10U;
	int32_t t50 = -119306968;

	t50 = (x205<=((x206^x207)%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x210 = 108317U;
	static int16_t x211 = INT16_MIN;
	uint8_t x212 = 87U;
	int32_t t51 = -4;

	t51 = (x209<=((x210^x211)%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 27U;
	static volatile uint8_t x215 = 0U;
	uint64_t x216 = 4112103249LLU;
	volatile int32_t t52 = -3;

	t52 = (x213<=((x214^x215)%x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x217 = 3U;
	volatile uint8_t x218 = UINT8_MAX;
	int64_t x219 = 854640631LL;
	static volatile int32_t t53 = 10521448;

	t53 = (x217<=((x218^x219)%x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 13349U;
	volatile int8_t x222 = INT8_MIN;
	uint8_t x223 = 107U;
	static volatile int64_t x224 = INT64_MIN;
	static int32_t t54 = -1045471835;

	t54 = (x221<=((x222^x223)%x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x225 = 31725421178260978LLU;
	int16_t x226 = INT16_MAX;
	static int8_t x227 = 2;
	uint8_t x228 = 5U;
	int32_t t55 = 162300;

	t55 = (x225<=((x226^x227)%x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	static uint32_t x230 = 20U;
	static uint32_t x231 = 128068837U;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t56 = 0;

	t56 = (x229<=((x230^x231)%x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x237 = -1LL;
	uint16_t x238 = 467U;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;
	static volatile int32_t t57 = -337039945;

	t57 = (x237<=((x238^x239)%x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x242 = INT64_MIN;
	int8_t x243 = -23;
	static uint8_t x244 = 2U;
	volatile int32_t t58 = 323319;

	t58 = (x241<=((x242^x243)%x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = 8855U;
	int32_t t59 = 1;

	t59 = (x245<=((x246^x247)%x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MIN;
	static int32_t x251 = INT32_MIN;
	volatile uint32_t x252 = UINT32_MAX;
	int32_t t60 = -1;

	t60 = (x249<=((x250^x251)%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x253 = INT8_MIN;
	static int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MAX;
	int8_t x256 = 59;
	volatile int32_t t61 = 16541264;

	t61 = (x253<=((x254^x255)%x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = 1484;
	int16_t x258 = 1;
	volatile int64_t x259 = 14595341399772LL;
	volatile uint64_t x260 = UINT64_MAX;
	volatile int32_t t62 = -587454;

	t62 = (x257<=((x258^x259)%x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x262 = 211717678150240490LL;
	uint32_t x263 = 776193U;
	uint64_t x264 = UINT64_MAX;
	int32_t t63 = 283511138;

	t63 = (x261<=((x262^x263)%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x266 = UINT64_MAX;
	volatile int32_t x267 = 3180;
	int8_t x268 = INT8_MIN;

	t64 = (x265<=((x266^x267)%x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x269 = INT32_MIN;
	int32_t x271 = -1;
	volatile int8_t x272 = -1;
	int32_t t65 = -2034;

	t65 = (x269<=((x270^x271)%x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -1;
	static int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t66 = 207;

	t66 = (x273<=((x274^x275)%x276));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MAX;
	int64_t x280 = 68791361LL;
	static int32_t t67 = -63545;

	t67 = (x277<=((x278^x279)%x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x281 = INT64_MIN;
	uint8_t x282 = 0U;
	int16_t x284 = -263;
	int32_t t68 = 234179;

	t68 = (x281<=((x282^x283)%x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x286 = 48LL;
	int64_t x287 = -38507607367LL;
	static volatile int64_t x288 = -12352366745860LL;
	int32_t t69 = -47;

	t69 = (x285<=((x286^x287)%x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x289 = 3LLU;
	int8_t x290 = INT8_MIN;
	int16_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t70 = -959092;

	t70 = (x289<=((x290^x291)%x292));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	static uint32_t x294 = 241U;
	static int64_t x295 = -4123LL;
	static int16_t x296 = 1860;

	t71 = (x293<=((x294^x295)%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x297 = 1397610129U;
	volatile uint16_t x298 = 18559U;
	static int32_t x299 = INT32_MIN;
	int32_t x300 = INT32_MIN;
	static int32_t t72 = 1;

	t72 = (x297<=((x298^x299)%x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = -1;
	static int8_t x303 = INT8_MAX;
	int64_t x304 = INT64_MIN;
	static int32_t t73 = -60682793;

	t73 = (x301<=((x302^x303)%x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x306 = 59U;
	volatile int64_t x308 = 575820942949711LL;
	volatile int32_t t74 = 0;

	t74 = (x305<=((x306^x307)%x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	int16_t x310 = INT16_MIN;
	uint16_t x311 = UINT16_MAX;

	t75 = (x309<=((x310^x311)%x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = INT8_MAX;
	int64_t x314 = -9LL;
	int8_t x315 = INT8_MIN;
	volatile uint16_t x316 = 12888U;
	volatile int32_t t76 = -13399161;

	t76 = (x313<=((x314^x315)%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x317 = INT64_MAX;
	int32_t x318 = INT32_MAX;
	static uint64_t x319 = 12LLU;
	int64_t x320 = INT64_MIN;
	volatile int32_t t77 = -1181;

	t77 = (x317<=((x318^x319)%x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = 1132U;
	uint32_t x322 = 204U;
	int8_t x323 = -1;

	t78 = (x321<=((x322^x323)%x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MAX;
	int64_t x327 = INT64_MIN;
	uint32_t x328 = 2841071U;
	static volatile int32_t t79 = 59;

	t79 = (x325<=((x326^x327)%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x329 = 0;
	static uint64_t x332 = UINT64_MAX;
	static int32_t t80 = -1;

	t80 = (x329<=((x330^x331)%x332));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = 127740116656LL;
	int8_t x338 = INT8_MAX;
	int32_t x339 = INT32_MIN;
	static int16_t x340 = 1;

	t81 = (x337<=((x338^x339)%x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -90050;
	int32_t x342 = INT32_MAX;
	int64_t x344 = INT64_MAX;
	int32_t t82 = 2;

	t82 = (x341<=((x342^x343)%x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MAX;
	uint8_t x346 = 2U;
	int8_t x347 = 12;
	volatile int32_t t83 = -15516;

	t83 = (x345<=((x346^x347)%x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x349 = INT64_MAX;
	volatile int8_t x350 = INT8_MAX;

	t84 = (x349<=((x350^x351)%x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x353 = -1;
	static int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	int32_t t85 = -5296;

	t85 = (x353<=((x354^x355)%x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x357 = INT32_MIN;
	volatile int32_t x358 = INT32_MIN;
	static uint16_t x359 = 2855U;
	int32_t t86 = 566;

	t86 = (x357<=((x358^x359)%x360));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x362 = -1LL;
	uint8_t x363 = 22U;
	int32_t t87 = 260;

	t87 = (x361<=((x362^x363)%x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x365 = UINT16_MAX;
	static int32_t x366 = INT32_MAX;
	uint16_t x367 = 377U;
	volatile int32_t t88 = 97;

	t88 = (x365<=((x366^x367)%x368));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	static int32_t x370 = -716;
	static uint16_t x371 = 655U;
	uint32_t x372 = 994332338U;

	t89 = (x369<=((x370^x371)%x372));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x373 = 69718165675407LL;
	uint8_t x374 = 2U;
	int32_t t90 = -1941625;

	t90 = (x373<=((x374^x375)%x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x377 = 2U;
	int8_t x380 = INT8_MIN;
	int32_t t91 = 911903;

	t91 = (x377<=((x378^x379)%x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x382 = 7572532069LLU;
	static uint8_t x384 = UINT8_MAX;
	static int32_t t92 = 180434;

	t92 = (x381<=((x382^x383)%x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x385 = 2U;
	int8_t x386 = -1;
	static uint64_t x387 = UINT64_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t93 = 246;

	t93 = (x385<=((x386^x387)%x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = INT32_MAX;
	uint32_t x390 = 19U;
	static int16_t x391 = -36;
	int16_t x392 = -1;

	t94 = (x389<=((x390^x391)%x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MAX;
	uint16_t x394 = 39U;
	uint32_t x395 = UINT32_MAX;
	static uint64_t x396 = UINT64_MAX;
	int32_t t95 = 340063134;

	t95 = (x393<=((x394^x395)%x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 295404223011483974LL;
	volatile int32_t t96 = -556;

	t96 = (x397<=((x398^x399)%x400));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MAX;
	static int8_t x403 = INT8_MAX;
	static int16_t x404 = INT16_MAX;
	int32_t t97 = -12;

	t97 = (x401<=((x402^x403)%x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = -28;
	int64_t x406 = -1LL;
	volatile uint64_t x407 = 893894308806118585LLU;
	static int8_t x408 = INT8_MAX;
	static volatile int32_t t98 = 187;

	t98 = (x405<=((x406^x407)%x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -1LL;
	int64_t x410 = 2740LL;
	volatile uint8_t x411 = 1U;
	int16_t x412 = 1;
	int32_t t99 = 42;

	t99 = (x409<=((x410^x411)%x412));

	if (t99 != 1) { NG(); } else { ; }
	
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

