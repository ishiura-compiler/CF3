#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = 3786LL;
static int32_t x7 = 642;
uint64_t x14 = 96798830433540LLU;
static int8_t x18 = -1;
volatile int32_t t4 = 6937;
int8_t x28 = -1;
int16_t x31 = INT16_MAX;
int32_t x43 = 8860;
volatile uint16_t x51 = 32U;
int8_t x56 = -46;
int32_t t13 = -1;
static volatile uint32_t x58 = 91453136U;
uint32_t x65 = 480022124U;
int32_t x80 = -592;
int32_t x83 = INT32_MIN;
uint16_t x88 = 420U;
static volatile int32_t t22 = -112499640;
volatile uint16_t x96 = 13058U;
int8_t x97 = -1;
volatile int32_t t25 = 25458;
int64_t x106 = -1LL;
volatile int64_t x112 = -1LL;
int16_t x114 = -1;
int32_t x116 = INT32_MAX;
int32_t x126 = 8045100;
uint64_t x129 = 880874LLU;
int64_t x130 = INT64_MIN;
int64_t x134 = 1LL;
uint8_t x141 = 110U;
uint8_t x150 = UINT8_MAX;
volatile uint16_t x151 = UINT16_MAX;
volatile int64_t x154 = -1LL;
static int32_t x162 = INT32_MIN;
int8_t x163 = INT8_MAX;
int8_t x165 = -12;
volatile uint16_t x166 = 10U;
int8_t x167 = -1;
int32_t t41 = 263052076;
int16_t x172 = INT16_MIN;
static int32_t t44 = 12735;
uint64_t x181 = 172821825163042647LLU;
static volatile int64_t x184 = -1LL;
uint64_t x185 = 4LLU;
uint64_t x187 = 48797732872964LLU;
int8_t x188 = 55;
int32_t t46 = 25684294;
static volatile int16_t x194 = -8825;
int64_t x196 = -3477612092302LL;
static int16_t x200 = -3053;
int16_t x201 = INT16_MIN;
uint32_t x207 = 32854917U;
static uint16_t x213 = 29U;
static int8_t x216 = -1;
uint8_t x219 = UINT8_MAX;
int8_t x224 = -1;
volatile int8_t x228 = INT8_MIN;
int16_t x231 = INT16_MIN;
uint64_t x232 = 405234112203384LLU;
volatile int64_t x237 = INT64_MIN;
int64_t x238 = -1LL;
int64_t x244 = INT64_MIN;
uint32_t x247 = 839U;
int16_t x262 = 744;
int8_t x263 = INT8_MIN;
int64_t x264 = INT64_MIN;
int32_t t65 = 245540253;
volatile int32_t t66 = -30;
volatile int32_t t68 = -9;
int64_t x278 = INT64_MAX;
static int32_t x282 = INT32_MIN;
uint8_t x285 = 0U;
int32_t t73 = -124997304;
volatile int64_t x298 = INT64_MIN;
static int32_t t74 = -3763890;
uint32_t x301 = UINT32_MAX;
static int64_t x305 = 1979535114LL;
static int32_t x308 = -1;
int16_t x311 = INT16_MAX;
static int8_t x312 = 8;
volatile int8_t x316 = -1;
int64_t x319 = INT64_MIN;
int8_t x320 = INT8_MIN;
int32_t t79 = -2;
int16_t x322 = -1;
static uint32_t x323 = 3945U;
volatile int32_t t80 = 117512;
static volatile int32_t t81 = -11174;
static int8_t x331 = INT8_MAX;
int8_t x332 = INT8_MAX;
uint16_t x333 = 711U;
int8_t x335 = INT8_MAX;
static uint64_t x336 = UINT64_MAX;
uint32_t x343 = UINT32_MAX;
int8_t x346 = -1;
int8_t x347 = -1;
int8_t x348 = INT8_MAX;
volatile int8_t x357 = INT8_MIN;
volatile int32_t t89 = -5157;
volatile uint64_t x363 = UINT64_MAX;
static uint16_t x367 = UINT16_MAX;
static uint32_t x369 = 7U;
int64_t x371 = -1LL;
uint64_t x374 = UINT64_MAX;
uint64_t x377 = UINT64_MAX;
volatile uint64_t x379 = UINT64_MAX;
static int8_t x383 = INT8_MIN;
uint8_t x388 = 28U;
static int32_t t96 = 76;
int32_t t97 = 38;


void f0(void) {
	uint8_t x1 = 22U;
	int8_t x3 = -1;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 1;

	t0 = (x1==((x2<=x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = UINT64_MAX;
	volatile uint8_t x6 = 1U;
	static int64_t x8 = -364540183699LL;
	static int32_t t1 = -801986;

	t1 = (x5==((x6<=x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = 4;
	int16_t x11 = -1;
	int32_t x12 = 114552;
	static volatile int32_t t2 = 168847;

	t2 = (x9==((x10<=x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = -1LL;
	int16_t x15 = -1;
	static volatile int64_t x16 = -1LL;
	volatile int32_t t3 = 878;

	t3 = (x13==((x14<=x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 2;
	int32_t x19 = -927;
	uint64_t x20 = 11576LLU;

	t4 = (x17==((x18<=x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 37374U;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int32_t x24 = 3378451;
	volatile int32_t t5 = -24;

	t5 = (x21==((x22<=x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 5U;
	int8_t x26 = INT8_MIN;
	int32_t x27 = 124;
	int32_t t6 = -7594;

	t6 = (x25==((x26<=x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 1414034962066LLU;
	static int16_t x30 = INT16_MAX;
	static volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -7015898;

	t7 = (x29==((x30<=x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 0U;
	volatile int8_t x34 = -1;
	static int64_t x35 = -9639195LL;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 219641;

	t8 = (x33==((x34<=x35)&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x37 = 115U;
	uint32_t x38 = 353U;
	volatile int8_t x39 = INT8_MIN;
	int64_t x40 = -1LL;
	volatile int32_t t9 = 0;

	t9 = (x37==((x38<=x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 29U;
	static volatile uint8_t x42 = 31U;
	static int64_t x44 = INT64_MIN;
	static volatile int32_t t10 = 109;

	t10 = (x41==((x42<=x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 13U;
	volatile uint8_t x46 = 3U;
	int64_t x47 = -1LL;
	volatile int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -27245635;

	t11 = (x45==((x46<=x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	static volatile uint32_t x50 = UINT32_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -6322925;

	t12 = (x49==((x50<=x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 0;
	uint16_t x54 = 16U;
	int8_t x55 = INT8_MIN;

	t13 = (x53==((x54<=x55)&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 468507589U;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = -32380;

	t14 = (x57==((x58<=x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = -27;
	int32_t x63 = -73;
	int16_t x64 = 428;
	static volatile int32_t t15 = -393;

	t15 = (x61==((x62<=x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = -1;
	uint8_t x67 = 2U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 0;

	t16 = (x65==((x66<=x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 12U;
	int32_t x70 = INT32_MIN;
	uint32_t x71 = UINT32_MAX;
	volatile int64_t x72 = -2121789434LL;
	int32_t t17 = 28;

	t17 = (x69==((x70<=x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = 2672055276LL;
	int64_t x75 = INT64_MIN;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 43;

	t18 = (x73==((x74<=x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	static int64_t x78 = -13291447545LL;
	int8_t x79 = INT8_MIN;
	int32_t t19 = -2007;

	t19 = (x77==((x78<=x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	static uint64_t x84 = UINT64_MAX;
	int32_t t20 = 106642873;

	t20 = (x81==((x82<=x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int64_t x86 = -371LL;
	int32_t x87 = -1;
	int32_t t21 = -1;

	t21 = (x85==((x86<=x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	volatile int8_t x90 = -10;
	uint64_t x91 = UINT64_MAX;
	uint16_t x92 = 5U;

	t22 = (x89==((x90<=x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = -57;
	volatile int32_t x95 = INT32_MIN;
	int32_t t23 = -12;

	t23 = (x93==((x94<=x95)&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 15U;
	int16_t x99 = INT16_MIN;
	volatile int16_t x100 = 0;
	volatile int32_t t24 = -37291;

	t24 = (x97==((x98<=x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	uint64_t x102 = UINT64_MAX;
	uint16_t x103 = UINT16_MAX;
	uint8_t x104 = 12U;

	t25 = (x101==((x102<=x103)&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	uint16_t x107 = 0U;
	static int64_t x108 = -656863023407797LL;
	int32_t t26 = 603;

	t26 = (x105==((x106<=x107)&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 1;
	volatile int32_t x110 = INT32_MIN;
	static uint16_t x111 = UINT16_MAX;
	int32_t t27 = 3;

	t27 = (x109==((x110<=x111)&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 8U;
	static volatile uint64_t x115 = 79542518LLU;
	int32_t t28 = -94;

	t28 = (x113==((x114<=x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = 24;
	int16_t x119 = -1;
	int64_t x120 = 263791622620379683LL;
	int32_t t29 = -154396;

	t29 = (x117==((x118<=x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1;
	volatile int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MAX;
	uint32_t x124 = 94687U;
	volatile int32_t t30 = -11692;

	t30 = (x121==((x122<=x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	uint32_t x127 = 1952945673U;
	int64_t x128 = INT64_MIN;
	int32_t t31 = -7;

	t31 = (x125==((x126<=x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x131 = INT8_MAX;
	int32_t x132 = -988873351;
	volatile int32_t t32 = 51748;

	t32 = (x129==((x130<=x131)&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = 7;
	volatile uint64_t x135 = 581698087252LLU;
	int16_t x136 = -1;
	int32_t t33 = -1;

	t33 = (x133==((x134<=x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int32_t x138 = -253808534;
	int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 37626300;

	t34 = (x137==((x138<=x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x142 = INT64_MIN;
	static int32_t x143 = 14721;
	static uint64_t x144 = 31LLU;
	int32_t t35 = -1;

	t35 = (x141==((x142<=x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = -2301;
	int64_t x147 = -1LL;
	static int16_t x148 = INT16_MAX;
	int32_t t36 = 939445;

	t36 = (x145==((x146<=x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x152 = 1U;
	int32_t t37 = 22280754;

	t37 = (x149==((x150<=x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = -1;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 2282;

	t38 = (x153==((x154<=x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x158 = 20U;
	int32_t x159 = INT32_MIN;
	static int32_t x160 = -2;
	int32_t t39 = 831419940;

	t39 = (x157==((x158<=x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t40 = -4;

	t40 = (x161==((x162<=x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x168 = INT32_MAX;

	t41 = (x165==((x166<=x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 22;
	volatile int64_t x170 = 13585LL;
	int32_t x171 = -8679;
	int32_t t42 = -14;

	t42 = (x169==((x170<=x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	static volatile int64_t x174 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	static int64_t x176 = 23231226310LL;
	static volatile int32_t t43 = 18;

	t43 = (x173==((x174<=x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 52LLU;
	int16_t x178 = -13;
	static uint32_t x179 = 2932940U;
	uint16_t x180 = 3U;

	t44 = (x177==((x178<=x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x182 = INT32_MIN;
	uint32_t x183 = UINT32_MAX;
	static int32_t t45 = 1;

	t45 = (x181==((x182<=x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -1LL;

	t46 = (x185==((x186<=x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 17U;
	int16_t x190 = INT16_MAX;
	static uint16_t x191 = 16271U;
	int8_t x192 = -26;
	volatile int32_t t47 = 556434;

	t47 = (x189==((x190<=x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 2267452590661103LLU;
	int8_t x195 = INT8_MIN;
	int32_t t48 = -17511341;

	t48 = (x193==((x194<=x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = UINT16_MAX;
	volatile uint64_t x198 = 1083333816400LLU;
	uint8_t x199 = 16U;
	static volatile int32_t t49 = -396731;

	t49 = (x197==((x198<=x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 33U;
	volatile uint16_t x203 = 12111U;
	static volatile uint64_t x204 = 46LLU;
	static volatile int32_t t50 = 3960321;

	t50 = (x201==((x202<=x203)&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 202;
	int8_t x206 = INT8_MIN;
	volatile uint64_t x208 = UINT64_MAX;
	volatile int32_t t51 = -120666854;

	t51 = (x205==((x206<=x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	int32_t x211 = INT32_MIN;
	volatile uint16_t x212 = 77U;
	int32_t t52 = -3503028;

	t52 = (x209==((x210<=x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MAX;
	volatile int32_t t53 = -558;

	t53 = (x213==((x214<=x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 16375519U;
	int8_t x218 = INT8_MIN;
	uint8_t x220 = 125U;
	volatile int32_t t54 = -14608;

	t54 = (x217==((x218<=x219)&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	uint64_t x222 = 37001318636LLU;
	static int64_t x223 = 28919752534LL;
	static volatile int32_t t55 = -197;

	t55 = (x221==((x222<=x223)&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MIN;
	uint16_t x227 = 232U;
	volatile int32_t t56 = -74;

	t56 = (x225==((x226<=x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	static volatile uint16_t x230 = 11417U;
	int32_t t57 = 248971;

	t57 = (x229==((x230<=x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x233 = 6431U;
	volatile int8_t x234 = INT8_MIN;
	uint32_t x235 = 881270431U;
	volatile int8_t x236 = 1;
	int32_t t58 = -40085;

	t58 = (x233==((x234<=x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x239 = INT64_MIN;
	uint16_t x240 = 721U;
	volatile int32_t t59 = -30921;

	t59 = (x237==((x238<=x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x241 = 50U;
	static int64_t x242 = -1LL;
	int64_t x243 = INT64_MIN;
	volatile int32_t t60 = -42968;

	t60 = (x241==((x242<=x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 0;
	uint8_t x246 = 0U;
	uint32_t x248 = 343209670U;
	volatile int32_t t61 = -225984;

	t61 = (x245==((x246<=x247)&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 145602728;
	int64_t x250 = INT64_MAX;
	int16_t x251 = 1;
	volatile uint32_t x252 = 130397628U;
	int32_t t62 = 4;

	t62 = (x249==((x250<=x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	uint8_t x255 = 107U;
	uint64_t x256 = 14952265731621LLU;
	volatile int32_t t63 = 1145935;

	t63 = (x253==((x254<=x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MAX;
	uint16_t x260 = 1519U;
	volatile int32_t t64 = 7815161;

	t64 = (x257==((x258<=x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -15LL;

	t65 = (x261==((x262<=x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 0U;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = INT8_MAX;

	t66 = (x265==((x266<=x267)&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = -7;
	int64_t x271 = INT64_MIN;
	int8_t x272 = -29;
	int32_t t67 = 990;

	t67 = (x269==((x270<=x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 187202682841LLU;
	uint16_t x274 = UINT16_MAX;
	int64_t x275 = INT64_MIN;
	int64_t x276 = -1349791890LL;

	t68 = (x273==((x274<=x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	static int16_t x279 = -203;
	uint32_t x280 = 1991335701U;
	volatile int32_t t69 = 42614295;

	t69 = (x277==((x278<=x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -244;
	volatile int64_t x283 = INT64_MIN;
	static int64_t x284 = INT64_MAX;
	int32_t t70 = 2;

	t70 = (x281==((x282<=x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 0;

	t71 = (x285==((x286<=x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = -1;
	int32_t x291 = INT32_MAX;
	uint32_t x292 = 441110U;
	int32_t t72 = 187679047;

	t72 = (x289==((x290<=x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = 359U;
	uint64_t x294 = 777592192386700LLU;
	int32_t x295 = INT32_MAX;
	volatile int64_t x296 = INT64_MIN;

	t73 = (x293==((x294<=x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int8_t x299 = -1;
	uint64_t x300 = 27785479709LLU;

	t74 = (x297==((x298<=x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = UINT16_MAX;
	static int64_t x303 = INT64_MIN;
	volatile uint32_t x304 = UINT32_MAX;
	int32_t t75 = -34918;

	t75 = (x301==((x302<=x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = 147076LL;
	static uint16_t x307 = UINT16_MAX;
	volatile int32_t t76 = -71601906;

	t76 = (x305==((x306<=x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static int64_t x310 = INT64_MAX;
	static volatile int32_t t77 = -1;

	t77 = (x309==((x310<=x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 1604903699471425LLU;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	volatile int32_t t78 = -22;

	t78 = (x313==((x314<=x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x317 = 26U;
	int16_t x318 = INT16_MIN;

	t79 = (x317==((x318<=x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 0;
	int64_t x324 = 143059676169467655LL;

	t80 = (x321==((x322<=x323)&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int64_t x326 = -9521LL;
	static int64_t x327 = INT64_MIN;
	uint64_t x328 = 100914282577093596LLU;

	t81 = (x325==((x326<=x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = 21U;
	uint8_t x330 = UINT8_MAX;
	int32_t t82 = -59159448;

	t82 = (x329==((x330<=x331)&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = -1LL;
	volatile int32_t t83 = 23291383;

	t83 = (x333==((x334<=x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	static int8_t x338 = INT8_MAX;
	int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = -39;

	t84 = (x337==((x338<=x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 1U;
	int16_t x342 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 0;

	t85 = (x341==((x342<=x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int32_t t86 = 96;

	t86 = (x345==((x346<=x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 66764534U;
	int8_t x350 = INT8_MIN;
	static int8_t x351 = -1;
	int8_t x352 = 3;
	int32_t t87 = 28390199;

	t87 = (x349==((x350<=x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 2;
	volatile int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = 0;

	t88 = (x353==((x354<=x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MAX;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MAX;

	t89 = (x357==((x358<=x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -1LL;
	int64_t x362 = -108433741276LL;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = 185058879;

	t90 = (x361==((x362<=x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -1;
	int64_t x366 = 1868983066LL;
	int32_t x368 = -1;
	int32_t t91 = -205;

	t91 = (x365==((x366<=x367)&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = 4075163LLU;
	int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 1022741763;

	t92 = (x369==((x370<=x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int32_t x375 = INT32_MAX;
	int32_t x376 = INT32_MAX;
	static volatile int32_t t93 = -824989;

	t93 = (x373==((x374<=x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MAX;
	int16_t x380 = -1300;
	volatile int32_t t94 = 530166;

	t94 = (x377==((x378<=x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	int64_t x382 = 14LL;
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = 7;

	t95 = (x381==((x382<=x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 0;
	static int16_t x386 = INT16_MIN;
	uint64_t x387 = 15269235456LLU;

	t96 = (x385==((x386<=x387)&x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -52;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = INT64_MAX;
	uint32_t x392 = 106151965U;

	t97 = (x389==((x390<=x391)&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 27U;
	static uint16_t x394 = UINT16_MAX;
	int32_t x395 = INT32_MIN;
	uint8_t x396 = UINT8_MAX;
	int32_t t98 = -2773727;

	t98 = (x393==((x394<=x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x397 = UINT64_MAX;
	int16_t x398 = -440;
	volatile int32_t x399 = -1;
	uint8_t x400 = 2U;
	volatile int32_t t99 = 249766;

	t99 = (x397==((x398<=x399)&x400));

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

