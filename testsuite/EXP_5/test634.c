#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = -2222495369623460LL;
static volatile int32_t t0 = 902;
uint16_t x12 = UINT16_MAX;
uint64_t x13 = 919304702967794LLU;
static int32_t t3 = -58982343;
volatile int64_t x17 = INT64_MIN;
uint64_t x18 = UINT64_MAX;
int64_t x25 = INT64_MAX;
int32_t t6 = 5332;
int8_t x32 = -1;
int64_t x37 = INT64_MAX;
int64_t x44 = -1LL;
volatile int32_t t10 = -4;
int8_t x56 = -1;
volatile int64_t x62 = INT64_MAX;
static int8_t x63 = -24;
int8_t x65 = 1;
int8_t x69 = INT8_MIN;
int8_t x72 = INT8_MIN;
int32_t t20 = 4740130;
uint64_t x85 = UINT64_MAX;
int16_t x91 = INT16_MAX;
static int64_t x97 = INT64_MIN;
volatile int16_t x100 = 0;
int32_t x103 = INT32_MIN;
int32_t t24 = 3;
static int16_t x105 = -76;
volatile int8_t x106 = -18;
int16_t x112 = -1;
static volatile int32_t t26 = -47580;
int32_t t28 = 15;
int16_t x126 = -1;
static int32_t x129 = INT32_MIN;
volatile int32_t x134 = INT32_MAX;
volatile int16_t x136 = 2553;
static volatile int64_t x143 = -1LL;
int8_t x148 = INT8_MAX;
volatile int8_t x150 = INT8_MIN;
static int16_t x152 = 56;
volatile int32_t t36 = 10567236;
int32_t x155 = -5887406;
int64_t x158 = -43944LL;
int16_t x160 = -1;
int16_t x166 = INT16_MIN;
int16_t x167 = -298;
volatile int32_t t41 = 3853746;
uint64_t x173 = UINT64_MAX;
int32_t t43 = 571955242;
volatile int16_t x184 = INT16_MIN;
static int32_t x185 = INT32_MAX;
int32_t t46 = -5;
volatile uint16_t x193 = 9325U;
int32_t t47 = -843;
uint16_t x197 = UINT16_MAX;
int8_t x200 = -1;
int16_t x202 = -108;
volatile int32_t t49 = -284;
volatile int16_t x211 = -2;
int32_t x214 = INT32_MIN;
uint8_t x217 = UINT8_MAX;
volatile int32_t t53 = 7034;
static volatile int32_t x222 = -1;
int32_t x239 = -2543;
int32_t t58 = 1;
int8_t x246 = 15;
uint32_t x249 = UINT32_MAX;
int32_t t61 = -1047830;
static int8_t x255 = 9;
static volatile uint8_t x258 = 5U;
int8_t x260 = 1;
volatile int32_t x268 = INT32_MIN;
int32_t x272 = 210021297;
int8_t x275 = -1;
volatile int32_t t67 = -4442609;
uint16_t x283 = 4000U;
uint8_t x289 = 3U;
volatile int32_t x290 = INT32_MIN;
uint32_t x291 = 1U;
int16_t x296 = INT16_MIN;
int8_t x299 = INT8_MIN;
int32_t x301 = 0;
int32_t x303 = INT32_MAX;
int64_t x309 = -3LL;
int8_t x313 = -1;
int64_t x316 = INT64_MIN;
volatile uint8_t x330 = 0U;
int32_t x334 = -11709258;
volatile int32_t t81 = -3042;
volatile int32_t t82 = 853521060;
static int8_t x341 = INT8_MIN;
volatile uint64_t x357 = 871884776837LLU;
static volatile uint16_t x359 = UINT16_MAX;
volatile int64_t x360 = INT64_MAX;
static int16_t x368 = INT16_MIN;
int32_t t90 = 8075;
volatile int32_t t91 = 2411380;
uint8_t x378 = UINT8_MAX;
static volatile int32_t t92 = 10;
static volatile int8_t x388 = -1;
int32_t x389 = 47855235;
int32_t x402 = INT32_MAX;
static int8_t x403 = -29;


void f0(void) {
	uint32_t x2 = 507172446U;
	uint32_t x3 = 24841U;
	volatile uint64_t x4 = UINT64_MAX;

	t0 = (x1<=((x2/x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2U;
	volatile int64_t x6 = 55397LL;
	int8_t x7 = INT8_MIN;
	int16_t x8 = -1;
	volatile int32_t t1 = 175;

	t1 = (x5<=((x6/x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 3U;
	int32_t x10 = INT32_MIN;
	volatile uint32_t x11 = UINT32_MAX;
	int32_t t2 = 18196;

	t2 = (x9<=((x10/x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 0U;
	volatile int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MIN;

	t3 = (x13<=((x14/x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = 91;
	int64_t x20 = 300900916LL;
	int32_t t4 = -2490;

	t4 = (x17<=((x18/x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -6;
	volatile uint8_t x22 = 1U;
	uint32_t x23 = 4U;
	static int16_t x24 = INT16_MIN;
	int32_t t5 = 282154094;

	t5 = (x21<=((x22/x23)<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = INT16_MIN;
	int16_t x27 = -945;
	int16_t x28 = -3;

	t6 = (x25<=((x26/x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 2227;
	int32_t x30 = -1;
	uint8_t x31 = 55U;
	volatile int32_t t7 = 1;

	t7 = (x29<=((x30/x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -1;
	static uint16_t x34 = 1664U;
	volatile int32_t x35 = INT32_MAX;
	volatile uint64_t x36 = 131450727219437395LLU;
	volatile int32_t t8 = 9;

	t8 = (x33<=((x34/x35)<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -126;
	volatile uint8_t x39 = 39U;
	int8_t x40 = -1;
	volatile int32_t t9 = -5;

	t9 = (x37<=((x38/x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = 1190838885LL;
	uint64_t x42 = 17300256907469225LLU;
	volatile int16_t x43 = INT16_MIN;

	t10 = (x41<=((x42/x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static volatile int16_t x46 = INT16_MAX;
	uint8_t x47 = UINT8_MAX;
	uint64_t x48 = 3356430580810211LLU;
	int32_t t11 = 1;

	t11 = (x45<=((x46/x47)<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 18;
	static volatile int16_t x50 = INT16_MAX;
	static uint8_t x51 = 14U;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 1;

	t12 = (x49<=((x50/x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MAX;
	int32_t t13 = 836954053;

	t13 = (x53<=((x54/x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 26U;
	volatile int32_t x58 = INT32_MIN;
	static int64_t x59 = INT64_MAX;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -2171;

	t14 = (x57<=((x58/x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static volatile uint64_t x64 = 3LLU;
	int32_t t15 = -162;

	t15 = (x61<=((x62/x63)<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x66 = 300U;
	int8_t x67 = -1;
	int16_t x68 = 912;
	volatile int32_t t16 = -1;

	t16 = (x65<=((x66/x67)<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = 8076;
	static volatile int64_t x71 = INT64_MAX;
	static int32_t t17 = 16158025;

	t17 = (x69<=((x70/x71)<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 15301050777947LLU;
	int8_t x74 = 0;
	volatile int32_t x75 = INT32_MAX;
	volatile uint64_t x76 = 6066455173903LLU;
	volatile int32_t t18 = 21;

	t18 = (x73<=((x74/x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 3487653391686359LL;
	static uint32_t x78 = UINT32_MAX;
	static uint8_t x79 = 5U;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -348599;

	t19 = (x77<=((x78/x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static uint16_t x82 = 1U;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 50484731U;

	t20 = (x81<=((x82/x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x86 = -57;
	uint16_t x87 = 2U;
	uint64_t x88 = 146683460988527LLU;
	static int32_t t21 = 7617;

	t21 = (x85<=((x86/x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int16_t x90 = 239;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = -1823;

	t22 = (x89<=((x90/x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x98 = UINT8_MAX;
	int16_t x99 = -1;
	static volatile int32_t t23 = -204803168;

	t23 = (x97<=((x98/x99)<=x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MIN;
	uint8_t x102 = UINT8_MAX;
	int64_t x104 = -1LL;

	t24 = (x101<=((x102/x103)<=x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x107 = -1;
	uint16_t x108 = 3U;
	int32_t t25 = -4;

	t25 = (x105<=((x106/x107)<=x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 651466961440LL;
	int32_t x110 = INT32_MAX;
	uint8_t x111 = 1U;

	t26 = (x109<=((x110/x111)<=x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 15U;
	volatile int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MIN;
	int8_t x116 = -19;
	int32_t t27 = 18770;

	t27 = (x113<=((x114/x115)<=x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	static int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	int32_t x120 = INT32_MIN;

	t28 = (x117<=((x118/x119)<=x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -17646LL;
	int64_t x122 = INT64_MIN;
	static int32_t x123 = 125;
	int64_t x124 = 395645315190LL;
	volatile int32_t t29 = -3;

	t29 = (x121<=((x122/x123)<=x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 1U;
	volatile int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	static int32_t t30 = -87054469;

	t30 = (x125<=((x126/x127)<=x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MAX;
	int64_t x131 = INT64_MAX;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t31 = -529559;

	t31 = (x129<=((x130/x131)<=x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 667LLU;
	int8_t x135 = -1;
	volatile int32_t t32 = -2521886;

	t32 = (x133<=((x134/x135)<=x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 23U;
	static int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t33 = 5;

	t33 = (x137<=((x138/x139)<=x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = 0;
	volatile int64_t x142 = INT64_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t34 = -44967;

	t34 = (x141<=((x142/x143)<=x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	static int64_t x146 = INT64_MAX;
	int64_t x147 = INT64_MIN;
	int32_t t35 = -149;

	t35 = (x145<=((x146/x147)<=x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = -13LL;
	uint64_t x151 = 775560165259814518LLU;

	t36 = (x149<=((x150/x151)<=x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = 8590862U;
	uint8_t x154 = UINT8_MAX;
	volatile uint32_t x156 = UINT32_MAX;
	static int32_t t37 = -25447565;

	t37 = (x153<=((x154/x155)<=x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = 910;
	static int32_t x159 = INT32_MIN;
	volatile int32_t t38 = 109897;

	t38 = (x157<=((x158/x159)<=x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = 16;
	int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	volatile int32_t t39 = 1;

	t39 = (x161<=((x162/x163)<=x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int32_t x168 = -1;
	static volatile int32_t t40 = -12191416;

	t40 = (x165<=((x166/x167)<=x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 27510630164012812LLU;
	static volatile int8_t x170 = -1;
	uint32_t x171 = 149584U;
	uint8_t x172 = 4U;

	t41 = (x169<=((x170/x171)<=x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	int64_t x176 = -1LL;
	static int32_t t42 = -23299332;

	t42 = (x173<=((x174/x175)<=x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -781996LL;
	int32_t x178 = -14093;
	int32_t x179 = -82;
	static volatile uint16_t x180 = UINT16_MAX;

	t43 = (x177<=((x178/x179)<=x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = -1;
	int64_t x182 = -2592973773999LL;
	int8_t x183 = INT8_MIN;
	volatile int32_t t44 = -83562;

	t44 = (x181<=((x182/x183)<=x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x186 = 2072014;
	volatile uint8_t x187 = 9U;
	volatile int32_t x188 = INT32_MIN;
	int32_t t45 = 1;

	t45 = (x185<=((x186/x187)<=x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	volatile int64_t x190 = INT64_MIN;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = 0LL;

	t46 = (x189<=((x190/x191)<=x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x194 = -5207703LL;
	uint8_t x195 = 9U;
	uint64_t x196 = 1338144923256960307LLU;

	t47 = (x193<=((x194/x195)<=x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x198 = 14451540185573904LLU;
	uint64_t x199 = UINT64_MAX;
	int32_t t48 = -4;

	t48 = (x197<=((x198/x199)<=x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 9U;
	int8_t x203 = INT8_MIN;
	volatile int64_t x204 = -13LL;

	t49 = (x201<=((x202/x203)<=x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x205 = 12U;
	int8_t x206 = -29;
	uint8_t x207 = 3U;
	int32_t x208 = INT32_MIN;
	int32_t t50 = -7291076;

	t50 = (x205<=((x206/x207)<=x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x209 = 6U;
	uint16_t x210 = 5U;
	uint8_t x212 = 4U;
	static int32_t t51 = -31749;

	t51 = (x209<=((x210/x211)<=x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = UINT8_MAX;
	uint16_t x215 = UINT16_MAX;
	volatile int64_t x216 = INT64_MIN;
	static int32_t t52 = -254;

	t52 = (x213<=((x214/x215)<=x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x218 = 1002U;
	int64_t x219 = INT64_MAX;
	int32_t x220 = INT32_MIN;

	t53 = (x217<=((x218/x219)<=x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 150572550U;
	uint8_t x223 = 1U;
	static int16_t x224 = INT16_MIN;
	static int32_t t54 = 5;

	t54 = (x221<=((x222/x223)<=x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = 3206;
	int8_t x226 = INT8_MIN;
	int32_t x227 = -1;
	uint8_t x228 = 19U;
	static volatile int32_t t55 = 1;

	t55 = (x225<=((x226/x227)<=x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	uint64_t x232 = 9858317907988627LLU;
	volatile int32_t t56 = -1;

	t56 = (x229<=((x230/x231)<=x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MIN;
	volatile int64_t x235 = -648310LL;
	int64_t x236 = INT64_MIN;
	int32_t t57 = -6;

	t57 = (x233<=((x234/x235)<=x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 89U;
	static uint32_t x238 = 11U;
	int16_t x240 = INT16_MIN;

	t58 = (x237<=((x238/x239)<=x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 85610044LLU;
	static volatile int64_t x242 = -1LL;
	int16_t x243 = -1;
	uint64_t x244 = UINT64_MAX;
	int32_t t59 = -913;

	t59 = (x241<=((x242/x243)<=x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 0U;
	int32_t x247 = 26442;
	uint8_t x248 = 7U;
	int32_t t60 = -420;

	t60 = (x245<=((x246/x247)<=x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x250 = 12637154U;
	volatile int16_t x251 = INT16_MAX;
	int32_t x252 = INT32_MIN;

	t61 = (x249<=((x250/x251)<=x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x253 = -39;
	int32_t x254 = INT32_MAX;
	int32_t x256 = -51079338;
	static int32_t t62 = -22839;

	t62 = (x253<=((x254/x255)<=x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MIN;
	static int16_t x259 = -1;
	volatile int32_t t63 = 166682889;

	t63 = (x257<=((x258/x259)<=x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x261 = INT8_MIN;
	static volatile int32_t x262 = 9;
	static volatile int8_t x263 = INT8_MAX;
	int16_t x264 = -1;
	int32_t t64 = 3448;

	t64 = (x261<=((x262/x263)<=x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = UINT8_MAX;
	static int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MIN;
	static volatile int32_t t65 = 1772646;

	t65 = (x265<=((x266/x267)<=x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MAX;
	uint16_t x270 = 37U;
	volatile uint64_t x271 = 6900960840LLU;
	int32_t t66 = -30;

	t66 = (x269<=((x270/x271)<=x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x273 = 116U;
	static int8_t x274 = -59;
	int16_t x276 = 106;

	t67 = (x273<=((x274/x275)<=x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = 809;
	int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t68 = -7;

	t68 = (x277<=((x278/x279)<=x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MIN;
	static volatile int16_t x282 = -18;
	static uint8_t x284 = UINT8_MAX;
	volatile int32_t t69 = 42342;

	t69 = (x281<=((x282/x283)<=x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x292 = 151U;
	static volatile int32_t t70 = 177225;

	t70 = (x289<=((x290/x291)<=x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MIN;
	int8_t x295 = -8;
	volatile int32_t t71 = 4081223;

	t71 = (x293<=((x294/x295)<=x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MAX;
	uint32_t x298 = UINT32_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t72 = 4;

	t72 = (x297<=((x298/x299)<=x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x302 = 74;
	int8_t x304 = INT8_MIN;
	volatile int32_t t73 = 2411;

	t73 = (x301<=((x302/x303)<=x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = UINT8_MAX;
	uint64_t x307 = 22648234462LLU;
	int16_t x308 = -1;
	static volatile int32_t t74 = -11996369;

	t74 = (x305<=((x306/x307)<=x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x310 = 44;
	int64_t x311 = INT64_MIN;
	static int16_t x312 = -2351;
	volatile int32_t t75 = -85;

	t75 = (x309<=((x310/x311)<=x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x314 = UINT16_MAX;
	int32_t x315 = -1;
	int32_t t76 = 78;

	t76 = (x313<=((x314/x315)<=x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -1;
	uint16_t x318 = UINT16_MAX;
	static int8_t x319 = INT8_MIN;
	static int64_t x320 = INT64_MAX;
	volatile int32_t t77 = 1;

	t77 = (x317<=((x318/x319)<=x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = UINT32_MAX;
	static int16_t x322 = INT16_MIN;
	int8_t x323 = 1;
	int64_t x324 = INT64_MAX;
	volatile int32_t t78 = 3026491;

	t78 = (x321<=((x322/x323)<=x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x325 = 275U;
	uint16_t x326 = UINT16_MAX;
	volatile int8_t x327 = INT8_MIN;
	uint8_t x328 = 7U;
	volatile int32_t t79 = -2992;

	t79 = (x325<=((x326/x327)<=x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = -1;
	int16_t x331 = -1;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t80 = -924521;

	t80 = (x329<=((x330/x331)<=x332));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	int64_t x335 = -1LL;
	static uint64_t x336 = UINT64_MAX;

	t81 = (x333<=((x334/x335)<=x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x337 = 81U;
	int64_t x338 = INT64_MIN;
	int16_t x339 = INT16_MAX;
	uint8_t x340 = UINT8_MAX;

	t82 = (x337<=((x338/x339)<=x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x342 = INT64_MIN;
	int8_t x343 = 1;
	int64_t x344 = -117LL;
	volatile int32_t t83 = 12;

	t83 = (x341<=((x342/x343)<=x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x345 = 26U;
	uint8_t x346 = 45U;
	int32_t x347 = INT32_MIN;
	int8_t x348 = 11;
	int32_t t84 = -5;

	t84 = (x345<=((x346/x347)<=x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = -1849;
	uint8_t x350 = 4U;
	volatile int64_t x351 = 30LL;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t85 = -42640;

	t85 = (x349<=((x350/x351)<=x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = 26LLU;
	int32_t x354 = -504066258;
	volatile int8_t x355 = INT8_MIN;
	volatile uint16_t x356 = 19U;
	volatile int32_t t86 = 2022253;

	t86 = (x353<=((x354/x355)<=x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x358 = 519844;
	int32_t t87 = 1353;

	t87 = (x357<=((x358/x359)<=x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = 15LLU;
	volatile int16_t x362 = 102;
	uint16_t x363 = 2000U;
	volatile int8_t x364 = -1;
	volatile int32_t t88 = 2327;

	t88 = (x361<=((x362/x363)<=x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x365 = -1;
	int32_t x366 = 2;
	volatile int32_t x367 = -569;
	volatile int32_t t89 = 44207;

	t89 = (x365<=((x366/x367)<=x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = 6U;
	static int32_t x371 = -1;
	int16_t x372 = INT16_MIN;

	t90 = (x369<=((x370/x371)<=x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x373 = 0;
	static uint8_t x374 = 0U;
	int16_t x375 = INT16_MAX;
	uint8_t x376 = 2U;

	t91 = (x373<=((x374/x375)<=x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x377 = INT64_MIN;
	static uint64_t x379 = 1758643305LLU;
	int32_t x380 = INT32_MAX;

	t92 = (x377<=((x378/x379)<=x380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = -10810282797LL;
	uint16_t x382 = UINT16_MAX;
	static uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MAX;
	static int32_t t93 = -4;

	t93 = (x381<=((x382/x383)<=x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = -1;
	int64_t x387 = INT64_MIN;
	int32_t t94 = -20961;

	t94 = (x385<=((x386/x387)<=x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x390 = -1LL;
	volatile int64_t x391 = INT64_MAX;
	int32_t x392 = 952974;
	volatile int32_t t95 = -89;

	t95 = (x389<=((x390/x391)<=x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x393 = -1LL;
	int8_t x394 = INT8_MAX;
	static int32_t x395 = INT32_MIN;
	uint16_t x396 = 3U;
	int32_t t96 = 513338;

	t96 = (x393<=((x394/x395)<=x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x397 = 12U;
	int32_t x398 = INT32_MIN;
	int64_t x399 = -236172LL;
	int8_t x400 = 0;
	static volatile int32_t t97 = -999;

	t97 = (x397<=((x398/x399)<=x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x401 = INT16_MAX;
	uint16_t x404 = 482U;
	volatile int32_t t98 = -1;

	t98 = (x401<=((x402/x403)<=x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x405 = 2065093180U;
	int16_t x406 = -1;
	static uint32_t x407 = UINT32_MAX;
	static uint16_t x408 = 6067U;
	int32_t t99 = 9445;

	t99 = (x405<=((x406/x407)<=x408));

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
