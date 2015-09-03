#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x5 = INT32_MAX;
int16_t x6 = INT16_MIN;
static int32_t x7 = 6476126;
static int32_t t1 = 224;
uint16_t x14 = UINT16_MAX;
uint32_t x16 = 7445U;
uint32_t x31 = UINT32_MAX;
int64_t x33 = -340758610426LL;
int32_t x34 = -963580;
int16_t x36 = INT16_MIN;
volatile uint32_t x37 = UINT32_MAX;
int8_t x39 = -1;
int8_t x41 = INT8_MIN;
volatile int16_t x43 = INT16_MIN;
uint32_t x44 = UINT32_MAX;
uint32_t t10 = 367743093U;
uint8_t x48 = UINT8_MAX;
int16_t x53 = -120;
volatile int8_t x56 = 1;
static uint8_t x63 = 1U;
uint32_t x64 = 20584951U;
volatile uint32_t t14 = 145U;
uint64_t t16 = 605LLU;
static int16_t x82 = INT16_MAX;
int32_t x85 = -1;
uint32_t x88 = UINT32_MAX;
volatile uint64_t x89 = 719393230508LLU;
static uint64_t x102 = UINT64_MAX;
int32_t x108 = -1;
int32_t x109 = -29;
static int64_t x119 = 98354085LL;
uint16_t x129 = UINT16_MAX;
volatile uint64_t t28 = 4506916225286188090LLU;
volatile int32_t x134 = 13986729;
uint8_t x141 = 96U;
static int8_t x143 = -1;
volatile int8_t x144 = -1;
uint16_t x145 = UINT16_MAX;
volatile int16_t x154 = INT16_MAX;
uint16_t x155 = 1U;
int32_t x160 = INT32_MAX;
uint32_t x166 = 2U;
int8_t x178 = INT8_MIN;
uint8_t x188 = 5U;
uint16_t x189 = UINT16_MAX;
int32_t t42 = 794;
int32_t x203 = 0;
int16_t x219 = INT16_MIN;
int16_t x220 = 13563;
int32_t x227 = 7786;
static volatile int32_t t47 = -79;
uint16_t x237 = 115U;
volatile int32_t t52 = -10660;
int64_t t53 = 63019479LL;
int16_t x268 = INT16_MIN;
uint16_t x269 = 14U;
volatile int64_t x270 = INT64_MAX;
int16_t x272 = 4;
int8_t x273 = 0;
int16_t x276 = INT16_MIN;
int8_t x284 = -1;
uint8_t x287 = 124U;
static volatile uint32_t x291 = UINT32_MAX;
volatile int64_t x298 = INT64_MIN;
volatile uint64_t x300 = 102790293046924LLU;
static uint64_t t61 = 38007488182LLU;
static uint64_t x310 = UINT64_MAX;
int8_t x312 = INT8_MAX;
uint16_t x313 = 3543U;
static int64_t x314 = -1LL;
int16_t x316 = INT16_MIN;
static volatile int16_t x325 = -1;
int16_t x331 = -1;
volatile uint16_t x334 = 727U;
uint32_t x339 = 54185463U;
volatile int32_t x348 = -29919;
int16_t x351 = INT16_MIN;
uint16_t x352 = UINT16_MAX;
int32_t t70 = -849;
uint64_t x354 = UINT64_MAX;
uint16_t x356 = 16273U;
static int32_t x360 = INT32_MIN;
volatile int16_t x369 = INT16_MIN;
int16_t x374 = INT16_MIN;
uint64_t x377 = UINT64_MAX;
int16_t x382 = INT16_MIN;
int8_t x383 = INT8_MAX;
int16_t x384 = INT16_MIN;
static int32_t t77 = 90;
static int32_t x388 = -1;
volatile uint64_t x395 = UINT64_MAX;
uint64_t t80 = 94132986413730LLU;
int16_t x405 = -1;
int32_t x431 = -28;
int16_t x438 = 988;
int32_t x440 = -1806;
int32_t x443 = INT32_MIN;
uint64_t t89 = 14204177807248958LLU;
int8_t x449 = INT8_MIN;
static int32_t x455 = 3622;
static int64_t t93 = -95029804505LL;
static int64_t x463 = 6692545LL;
volatile int64_t t94 = 15LL;
volatile uint64_t x465 = UINT64_MAX;
int32_t x470 = -2805402;
volatile uint64_t t96 = 536420941712LLU;
volatile int64_t x485 = INT64_MAX;
volatile int32_t t99 = 34038;


void f0(void) {
	int64_t x1 = -60261LL;
	int8_t x2 = -16;
	int32_t x3 = -28;
	int32_t x4 = -40840;
	volatile int32_t t0 = 86652115;

	t0 = ((x1<x2)&(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x8 = -1;

	t1 = ((x5<x6)&(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint8_t x10 = UINT8_MAX;
	static int16_t x11 = -7624;
	volatile int8_t x12 = INT8_MAX;
	int32_t t2 = 28;

	t2 = ((x9<x10)&(x11*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	int16_t x15 = -14;
	static uint32_t t3 = 734994082U;

	t3 = ((x13<x14)&(x15*x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 12267LLU;
	uint8_t x18 = UINT8_MAX;
	static int64_t x19 = -1LL;
	static int64_t x20 = 39598251613LL;
	volatile int64_t t4 = -666422LL;

	t4 = ((x17<x18)&(x19*x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static uint64_t x22 = 8116650883596543726LLU;
	int16_t x23 = 509;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = 39655627;

	t5 = ((x21<x22)&(x23*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 41163;
	uint64_t x26 = UINT64_MAX;
	int8_t x27 = INT8_MIN;
	int8_t x28 = -1;
	int32_t t6 = -29;

	t6 = ((x25<x26)&(x27*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile uint32_t x30 = UINT32_MAX;
	uint16_t x32 = 28596U;
	volatile uint32_t t7 = 20U;

	t7 = ((x29<x30)&(x31*x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x35 = 13U;
	volatile int32_t t8 = 54;

	t8 = ((x33<x34)&(x35*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	static uint8_t x40 = 65U;
	volatile int32_t t9 = 1;

	t9 = ((x37<x38)&(x39*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = 7;

	t10 = ((x41<x42)&(x43*x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -6925461;
	static int8_t x46 = -1;
	volatile int64_t x47 = 885988078015LL;
	volatile int64_t t11 = 205LL;

	t11 = ((x45<x46)&(x47*x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int8_t x50 = -6;
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;
	static uint64_t t12 = 926296601443LLU;

	t12 = ((x49<x50)&(x51*x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 140451369LLU;
	int16_t x55 = INT16_MIN;
	int32_t t13 = 67;

	t13 = ((x53<x54)&(x55*x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x62 = 91U;

	t14 = ((x61<x62)&(x63*x64));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 3682U;
	static int32_t x66 = -792;
	int8_t x67 = -10;
	volatile uint64_t x68 = 369434497LLU;
	uint64_t t15 = 55344362012204LLU;

	t15 = ((x65<x66)&(x67*x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	static volatile int64_t x70 = INT64_MAX;
	static uint16_t x71 = 46U;
	uint64_t x72 = 298051291639154LLU;

	t16 = ((x69<x70)&(x71*x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile uint16_t x74 = 55U;
	static volatile uint16_t x75 = UINT16_MAX;
	volatile uint64_t x76 = UINT64_MAX;
	static uint64_t t17 = 68404385857443047LLU;

	t17 = ((x73<x74)&(x75*x76));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t18 = 221399;

	t18 = ((x81<x82)&(x83*x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x86 = 20830780574LLU;
	volatile int8_t x87 = -31;
	static uint32_t t19 = 230983U;

	t19 = ((x85<x86)&(x87*x88));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	int32_t x92 = INT32_MAX;
	uint32_t t20 = 120063395U;

	t20 = ((x89<x90)&(x91*x92));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = 0U;
	volatile int8_t x94 = INT8_MIN;
	uint32_t x95 = UINT32_MAX;
	int64_t x96 = 146304LL;
	volatile int64_t t21 = -11180258165913450LL;

	t21 = ((x93<x94)&(x95*x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 18;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 1227222155U;
	static int16_t x100 = INT16_MIN;
	static uint32_t t22 = 35697U;

	t22 = ((x97<x98)&(x99*x100));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = 8171952;
	uint16_t x103 = 2978U;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t23 = 1783439052LLU;

	t23 = ((x101<x102)&(x103*x104));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = -1;
	static int32_t x107 = INT32_MAX;
	int32_t t24 = -1;

	t24 = ((x105<x106)&(x107*x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x110 = INT16_MAX;
	uint8_t x111 = 0U;
	uint8_t x112 = 0U;
	volatile int32_t t25 = -12891469;

	t25 = ((x109<x110)&(x111*x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = -1LL;
	uint32_t x120 = UINT32_MAX;
	volatile int64_t t26 = 535000947134572289LL;

	t26 = ((x117<x118)&(x119*x120));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 31743U;
	int16_t x127 = INT16_MIN;
	static uint32_t x128 = UINT32_MAX;
	volatile uint32_t t27 = 4U;

	t27 = ((x125<x126)&(x127*x128));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x130 = INT64_MIN;
	volatile uint64_t x131 = UINT64_MAX;
	uint64_t x132 = UINT64_MAX;

	t28 = ((x129<x130)&(x131*x132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x133 = UINT64_MAX;
	int32_t x135 = -1;
	int16_t x136 = -6217;
	int32_t t29 = -490839;

	t29 = ((x133<x134)&(x135*x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 1385914U;
	int16_t x138 = 180;
	int8_t x139 = -1;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t30 = 9;

	t30 = ((x137<x138)&(x139*x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x142 = 8;
	int32_t t31 = 117912626;

	t31 = ((x141<x142)&(x143*x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = -17124;
	static uint8_t x147 = 1U;
	int16_t x148 = -1;
	volatile int32_t t32 = 54;

	t32 = ((x145<x146)&(x147*x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = 14LLU;
	int8_t x156 = INT8_MAX;
	int32_t t33 = 16871;

	t33 = ((x153<x154)&(x155*x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -25;
	int32_t x158 = INT32_MAX;
	volatile uint8_t x159 = 0U;
	volatile int32_t t34 = 1091748;

	t34 = ((x157<x158)&(x159*x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = -1LL;
	uint16_t x162 = UINT16_MAX;
	uint32_t x163 = UINT32_MAX;
	volatile int16_t x164 = INT16_MAX;
	volatile uint32_t t35 = 353728232U;

	t35 = ((x161<x162)&(x163*x164));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x165 = INT32_MIN;
	static volatile int64_t x167 = 300711399217991475LL;
	int16_t x168 = -1;
	int64_t t36 = -1015645LL;

	t36 = ((x165<x166)&(x167*x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x169 = -13375500;
	int32_t x170 = -107875549;
	static int8_t x171 = INT8_MAX;
	volatile uint64_t x172 = 2694894179326253LLU;
	static volatile uint64_t t37 = 4028001LLU;

	t37 = ((x169<x170)&(x171*x172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x173 = INT8_MAX;
	volatile int64_t x174 = -2208257418000665LL;
	uint8_t x175 = 22U;
	static int16_t x176 = INT16_MAX;
	int32_t t38 = 552;

	t38 = ((x173<x174)&(x175*x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	static int16_t x179 = 14032;
	uint64_t x180 = 9299692205933LLU;
	static uint64_t t39 = 387916002740710695LLU;

	t39 = ((x177<x178)&(x179*x180));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = -95291808833868LL;
	int16_t x183 = INT16_MAX;
	uint64_t x184 = 59LLU;
	uint64_t t40 = 4700898581537369LLU;

	t40 = ((x181<x182)&(x183*x184));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -84973;
	static int64_t x186 = -38814976LL;
	static uint8_t x187 = UINT8_MAX;
	int32_t t41 = 82392;

	t41 = ((x185<x186)&(x187*x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x190 = INT64_MIN;
	static int16_t x191 = -59;
	int8_t x192 = INT8_MAX;

	t42 = ((x189<x190)&(x191*x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = 499233791LL;
	uint16_t x202 = 82U;
	int8_t x204 = -1;
	static int32_t t43 = 317225;

	t43 = ((x201<x202)&(x203*x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = 1951;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t44 = -391579;

	t44 = ((x205<x206)&(x207*x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = 2U;
	int16_t x214 = INT16_MIN;
	int16_t x215 = -1;
	int16_t x216 = INT16_MAX;
	int32_t t45 = -15509695;

	t45 = ((x213<x214)&(x215*x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = -4045;
	int32_t t46 = -1891;

	t46 = ((x217<x218)&(x219*x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int16_t x228 = 146;

	t47 = ((x225<x226)&(x227*x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x229 = 33465539LLU;
	int16_t x230 = 12725;
	int32_t x231 = 238;
	int64_t x232 = -1718108172LL;
	volatile int64_t t48 = 937400848508219LL;

	t48 = ((x229<x230)&(x231*x232));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x238 = INT16_MAX;
	int8_t x239 = -1;
	static int8_t x240 = INT8_MIN;
	int32_t t49 = -454369438;

	t49 = ((x237<x238)&(x239*x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x241 = INT32_MIN;
	volatile int64_t x242 = INT64_MAX;
	uint16_t x243 = UINT16_MAX;
	uint32_t x244 = 180204590U;
	uint32_t t50 = 6U;

	t50 = ((x241<x242)&(x243*x244));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MAX;
	int8_t x250 = -1;
	volatile int16_t x251 = INT16_MAX;
	uint8_t x252 = UINT8_MAX;
	static int32_t t51 = -703476;

	t51 = ((x249<x250)&(x251*x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = 4;
	int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = 3U;

	t52 = ((x253<x254)&(x255*x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x261 = 64229534087LLU;
	int16_t x262 = -533;
	static uint32_t x263 = 4064U;
	volatile int64_t x264 = 15116612921LL;

	t53 = ((x261<x262)&(x263*x264));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = 1;
	int32_t x266 = INT32_MAX;
	int16_t x267 = 1375;
	volatile int32_t t54 = -8805;

	t54 = ((x265<x266)&(x267*x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x271 = -9625333701LL;
	int64_t t55 = 6641612402518LL;

	t55 = ((x269<x270)&(x271*x272));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x274 = INT8_MAX;
	int8_t x275 = 1;
	volatile int32_t t56 = 69647;

	t56 = ((x273<x274)&(x275*x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = -1LL;
	int16_t x278 = -1;
	static int16_t x279 = 2480;
	int8_t x280 = INT8_MIN;
	int32_t t57 = 23846256;

	t57 = ((x277<x278)&(x279*x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MAX;
	static int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MAX;
	int32_t t58 = -21416396;

	t58 = ((x281<x282)&(x283*x284));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x285 = 5012;
	uint64_t x286 = 43087LLU;
	int8_t x288 = 3;
	volatile int32_t t59 = 5516;

	t59 = ((x285<x286)&(x287*x288));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x289 = INT8_MAX;
	uint16_t x290 = 7U;
	int8_t x292 = -12;
	static volatile uint32_t t60 = 9672922U;

	t60 = ((x289<x290)&(x291*x292));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x297 = 204U;
	volatile int64_t x299 = INT64_MIN;

	t61 = ((x297<x298)&(x299*x300));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x305 = 0U;
	uint8_t x306 = 0U;
	int64_t x307 = -1995527950859LL;
	int16_t x308 = 8308;
	static volatile int64_t t62 = -3853242780LL;

	t62 = ((x305<x306)&(x307*x308));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x309 = INT64_MIN;
	static uint64_t x311 = 5918LLU;
	volatile uint64_t t63 = 25303292865LLU;

	t63 = ((x309<x310)&(x311*x312));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x315 = 220643590U;
	static volatile uint32_t t64 = 29600U;

	t64 = ((x313<x314)&(x315*x316));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x326 = 8U;
	int8_t x327 = 15;
	int64_t x328 = -8107542219LL;
	int64_t t65 = -107611805503201215LL;

	t65 = ((x325<x326)&(x327*x328));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = INT64_MAX;
	int16_t x330 = INT16_MIN;
	int32_t x332 = -46561456;
	volatile int32_t t66 = 14038;

	t66 = ((x329<x330)&(x331*x332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x333 = 2845U;
	volatile int8_t x335 = INT8_MIN;
	static uint16_t x336 = 62U;
	int32_t t67 = 2509;

	t67 = ((x333<x334)&(x335*x336));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x337 = 3U;
	int64_t x338 = INT64_MAX;
	static int8_t x340 = INT8_MIN;
	volatile uint32_t t68 = 15769050U;

	t68 = ((x337<x338)&(x339*x340));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x345 = UINT16_MAX;
	static int32_t x346 = -2;
	uint8_t x347 = 21U;
	static volatile int32_t t69 = -16158126;

	t69 = ((x345<x346)&(x347*x348));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;

	t70 = ((x349<x350)&(x351*x352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x353 = INT64_MAX;
	static int16_t x355 = 27;
	int32_t t71 = 3;

	t71 = ((x353<x354)&(x355*x356));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x357 = -1;
	static int8_t x358 = INT8_MIN;
	uint32_t x359 = 463571U;
	uint32_t t72 = 18662227U;

	t72 = ((x357<x358)&(x359*x360));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x365 = 3U;
	uint16_t x366 = UINT16_MAX;
	static uint32_t x367 = 117U;
	uint64_t x368 = UINT64_MAX;
	uint64_t t73 = 15019813477173328LLU;

	t73 = ((x365<x366)&(x367*x368));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x370 = 535;
	int16_t x371 = -1;
	uint32_t x372 = UINT32_MAX;
	uint32_t t74 = 3973U;

	t74 = ((x369<x370)&(x371*x372));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x373 = 2163;
	static int8_t x375 = INT8_MIN;
	int32_t x376 = -1;
	int32_t t75 = 2;

	t75 = ((x373<x374)&(x375*x376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x378 = UINT16_MAX;
	int8_t x379 = 28;
	int8_t x380 = -10;
	volatile int32_t t76 = 261619;

	t76 = ((x377<x378)&(x379*x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x381 = INT64_MAX;

	t77 = ((x381<x382)&(x383*x384));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x385 = 283U;
	static int16_t x386 = INT16_MIN;
	int32_t x387 = 46;
	volatile int32_t t78 = 1;

	t78 = ((x385<x386)&(x387*x388));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = 24893LL;
	volatile int16_t x390 = INT16_MIN;
	uint8_t x391 = 0U;
	uint16_t x392 = UINT16_MAX;
	int32_t t79 = 4916318;

	t79 = ((x389<x390)&(x391*x392));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int64_t x394 = INT64_MAX;
	int16_t x396 = -27;

	t80 = ((x393<x394)&(x395*x396));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = 1;
	int32_t x398 = INT32_MAX;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = 1535184131694361LLU;
	uint64_t t81 = 804000060423029078LLU;

	t81 = ((x397<x398)&(x399*x400));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x401 = UINT8_MAX;
	static int32_t x402 = -72502;
	int8_t x403 = 1;
	uint8_t x404 = 10U;
	volatile int32_t t82 = -57656841;

	t82 = ((x401<x402)&(x403*x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x406 = INT32_MIN;
	int8_t x407 = -1;
	volatile int64_t x408 = INT64_MAX;
	volatile int64_t t83 = 110740LL;

	t83 = ((x405<x406)&(x407*x408));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x413 = 1;
	int64_t x414 = -1LL;
	uint32_t x415 = UINT32_MAX;
	static uint64_t x416 = 6034LLU;
	volatile uint64_t t84 = 5LLU;

	t84 = ((x413<x414)&(x415*x416));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x417 = -2074183;
	int64_t x418 = INT64_MAX;
	volatile int8_t x419 = INT8_MIN;
	int8_t x420 = -1;
	static int32_t t85 = 44105031;

	t85 = ((x417<x418)&(x419*x420));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x429 = -1;
	volatile uint16_t x430 = UINT16_MAX;
	static int16_t x432 = 0;
	volatile int32_t t86 = 61668;

	t86 = ((x429<x430)&(x431*x432));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x433 = INT32_MIN;
	int8_t x434 = -1;
	int16_t x435 = -7791;
	int16_t x436 = INT16_MIN;
	int32_t t87 = 770561;

	t87 = ((x433<x434)&(x435*x436));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x437 = 5681945637446LLU;
	int16_t x439 = INT16_MIN;
	static int32_t t88 = -1;

	t88 = ((x437<x438)&(x439*x440));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x441 = UINT32_MAX;
	uint8_t x442 = 1U;
	uint64_t x444 = 7240437356020LLU;

	t89 = ((x441<x442)&(x443*x444));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x445 = -1;
	int8_t x446 = 3;
	volatile int64_t x447 = INT64_MAX;
	int64_t x448 = -1LL;
	int64_t t90 = -14042569943193513LL;

	t90 = ((x445<x446)&(x447*x448));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x450 = INT16_MAX;
	int64_t x451 = -1994246016004LL;
	int8_t x452 = INT8_MIN;
	int64_t t91 = 114849995333463886LL;

	t91 = ((x449<x450)&(x451*x452));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x453 = INT64_MIN;
	uint64_t x454 = UINT64_MAX;
	volatile uint64_t x456 = 818371LLU;
	volatile uint64_t t92 = 858709881157LLU;

	t92 = ((x453<x454)&(x455*x456));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x457 = 7;
	static volatile int32_t x458 = 553;
	static int8_t x459 = INT8_MAX;
	static int64_t x460 = -1LL;

	t93 = ((x457<x458)&(x459*x460));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x461 = 15932;
	volatile int64_t x462 = INT64_MIN;
	uint8_t x464 = UINT8_MAX;

	t94 = ((x461<x462)&(x463*x464));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x466 = UINT32_MAX;
	uint32_t x467 = 2U;
	int32_t x468 = INT32_MAX;
	uint32_t t95 = 15305318U;

	t95 = ((x465<x466)&(x467*x468));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x469 = -112176675777LL;
	uint32_t x471 = 0U;
	static volatile uint64_t x472 = UINT64_MAX;

	t96 = ((x469<x470)&(x471*x472));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x473 = INT32_MIN;
	static int32_t x474 = INT32_MIN;
	static int64_t x475 = -1LL;
	uint64_t x476 = UINT64_MAX;
	uint64_t t97 = 3812723341834000LLU;

	t97 = ((x473<x474)&(x475*x476));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x477 = 6909;
	int16_t x478 = 353;
	int16_t x479 = INT16_MIN;
	static uint16_t x480 = 11U;
	volatile int32_t t98 = 4014;

	t98 = ((x477<x478)&(x479*x480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x486 = UINT8_MAX;
	volatile int8_t x487 = -1;
	int16_t x488 = INT16_MIN;

	t99 = ((x485<x486)&(x487*x488));

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

