#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
uint8_t x3 = 66U;
volatile int32_t t0 = -49255;
int64_t x7 = -592910LL;
int16_t x8 = -15440;
int8_t x10 = 1;
static int16_t x12 = 94;
volatile int64_t t2 = -3004784953089563LL;
int16_t x16 = -1;
int8_t x17 = INT8_MIN;
int64_t x18 = 2126104380000742616LL;
static volatile uint16_t x19 = UINT16_MAX;
int32_t t5 = -511446;
int8_t x28 = 16;
volatile uint32_t x29 = 11U;
volatile uint32_t t7 = 59838275U;
static int64_t x48 = INT64_MIN;
int32_t x50 = INT32_MIN;
int32_t t12 = -17856;
int32_t x60 = 40410;
static volatile int16_t x62 = 1044;
int8_t x79 = INT8_MAX;
int32_t x80 = -2023635;
int32_t x81 = -1;
int64_t x87 = INT64_MIN;
int32_t x89 = -1;
static int32_t x101 = 27004;
static uint64_t x103 = 348512303LLU;
int32_t t24 = -7761;
static volatile uint8_t x109 = 1U;
int32_t x112 = INT32_MIN;
static volatile int16_t x113 = INT16_MAX;
volatile int32_t x114 = INT32_MAX;
int64_t x116 = -1LL;
volatile int32_t t26 = -12480131;
int32_t x118 = INT32_MIN;
int16_t x123 = INT16_MIN;
static int16_t x128 = -1;
uint8_t x137 = UINT8_MAX;
volatile int16_t x144 = INT16_MAX;
static int64_t x147 = -608241008LL;
static int64_t x156 = INT64_MIN;
int16_t x172 = INT16_MAX;
int32_t x173 = INT32_MAX;
int8_t x177 = -1;
static int32_t x179 = INT32_MAX;
static int64_t x181 = INT64_MIN;
volatile int32_t x182 = -1;
static int64_t x184 = -21310848527LL;
int16_t x186 = 3325;
int32_t t46 = -7;
uint16_t x197 = 21943U;
static volatile int32_t x200 = INT32_MAX;
int64_t t48 = 10LL;
uint8_t x210 = UINT8_MAX;
uint8_t x222 = 0U;
int32_t t52 = 1;
int32_t x231 = -1;
int8_t x232 = -1;
int32_t t54 = -5268113;
int16_t x236 = 0;
uint8_t x237 = UINT8_MAX;
volatile int32_t t58 = -1;
uint16_t x254 = 18299U;
uint32_t x260 = 245768601U;
volatile int64_t t60 = INT64_MIN;
int8_t x265 = -1;
uint64_t x269 = 556LLU;
volatile int8_t x271 = INT8_MAX;
volatile uint64_t t63 = 1828918318636LLU;
uint64_t t64 = UINT64_MAX;
static int32_t x279 = INT32_MIN;
volatile int8_t x284 = INT8_MIN;
uint32_t x285 = 805191U;
int32_t x302 = INT32_MIN;
uint32_t x305 = 86U;
static uint32_t t72 = 175284488U;
uint16_t x309 = UINT16_MAX;
int16_t x310 = -541;
uint8_t x312 = 19U;
uint8_t x318 = 16U;
int32_t x334 = INT32_MAX;
int8_t x337 = -2;
static int32_t t79 = 28598606;
volatile uint8_t x341 = 0U;
int64_t x343 = 1LL;
static int16_t x344 = INT16_MIN;
static volatile int32_t t80 = -148482748;
volatile int8_t x346 = -1;
int32_t t81 = 3;
int64_t t84 = -232LL;
static int16_t x364 = INT16_MIN;
uint16_t x366 = 19U;
static int32_t x371 = INT32_MIN;
int8_t x373 = INT8_MIN;
volatile uint64_t x374 = 561894342552048LLU;
volatile int32_t x383 = 11213;
int8_t x387 = -1;
volatile int64_t t91 = INT64_MIN;
volatile int64_t x397 = INT64_MAX;
static uint8_t x400 = 2U;
volatile int64_t x410 = 6763LL;
uint8_t x411 = 107U;
int16_t x417 = INT16_MIN;
volatile int16_t x418 = INT16_MIN;


void f0(void) {
	uint32_t x2 = 51998778U;
	int32_t x4 = -1;

	t0 = (x1-((x2&x3)<=x4));

	if (t0 != -32769) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 9930;
	int16_t x6 = INT16_MIN;
	int32_t t1 = 23246;

	t1 = (x5-((x6&x7)<=x8));

	if (t1 != 9929) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	static int16_t x11 = INT16_MAX;

	t2 = (x9-((x10&x11)<=x12));

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1481670408576701965LLU;
	int64_t x14 = INT64_MIN;
	volatile int32_t x15 = -142173;
	volatile uint64_t t3 = 5531212394321079LLU;

	t3 = (x13-((x14&x15)<=x16));

	if (t3 != 1481670408576701964LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = 3731;

	t4 = (x17-((x18&x19)<=x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 4762U;
	uint32_t x22 = UINT32_MAX;
	uint64_t x23 = 6451LLU;
	uint16_t x24 = 252U;

	t5 = (x21-((x22&x23)<=x24));

	if (t5 != 4762) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 869885177U;
	int64_t x26 = -1LL;
	volatile int8_t x27 = 0;
	volatile uint32_t t6 = 115959U;

	t6 = (x25-((x26&x27)<=x28));

	if (t6 != 869885176U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int64_t x31 = 52LL;
	int8_t x32 = INT8_MAX;

	t7 = (x29-((x30&x31)<=x32));

	if (t7 != 10U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 2699908045775LLU;
	uint16_t x34 = 3U;
	static volatile int8_t x35 = INT8_MAX;
	uint32_t x36 = 3880658U;
	static uint64_t t8 = 44951931LLU;

	t8 = (x33-((x34&x35)<=x36));

	if (t8 != 2699908045774LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -182920415193524642LL;
	uint8_t x38 = UINT8_MAX;
	volatile uint8_t x39 = 3U;
	int32_t x40 = INT32_MIN;
	volatile int64_t t9 = 372287167LL;

	t9 = (x37-((x38&x39)<=x40));

	if (t9 != -182920415193524642LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	static int64_t x42 = -1LL;
	uint32_t x43 = 9350U;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = 29204;

	t10 = (x41-((x42&x43)<=x44));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MAX;
	static volatile int64_t t11 = 138205251455003798LL;

	t11 = (x45-((x46&x47)<=x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = 0;

	t12 = (x49-((x50&x51)<=x52));

	if (t12 != 32766) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -4916;
	uint16_t x54 = UINT16_MAX;
	int32_t x55 = -890;
	static uint16_t x56 = 1262U;
	int32_t t13 = -59119;

	t13 = (x53-((x54&x55)<=x56));

	if (t13 != -4916) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -487023004653LL;
	int16_t x58 = -1;
	uint64_t x59 = 23129LLU;
	volatile int64_t t14 = -25590565209686LL;

	t14 = (x57-((x58&x59)<=x60));

	if (t14 != -487023004654LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int8_t x63 = -1;
	static uint16_t x64 = 110U;
	volatile int32_t t15 = -362642;

	t15 = (x61-((x62&x63)<=x64));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = UINT16_MAX;
	int8_t x66 = 1;
	uint64_t x67 = 66289004064LLU;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = 360287073;

	t16 = (x65-((x66&x67)<=x68));

	if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 6742733;
	uint16_t x74 = UINT16_MAX;
	int32_t x75 = INT32_MIN;
	volatile int8_t x76 = INT8_MIN;
	static int32_t t17 = 386;

	t17 = (x73-((x74&x75)<=x76));

	if (t17 != 6742733) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x77 = 6U;
	int8_t x78 = 12;
	int32_t t18 = -1381;

	t18 = (x77-((x78&x79)<=x80));

	if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = INT32_MAX;
	volatile int16_t x83 = INT16_MIN;
	int16_t x84 = -1;
	static int32_t t19 = -83828;

	t19 = (x81-((x82&x83)<=x84));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 19670U;
	int32_t x86 = -1;
	uint64_t x88 = 30895LLU;
	volatile uint32_t t20 = 21788U;

	t20 = (x85-((x86&x87)<=x88));

	if (t20 != 19670U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MAX;
	uint64_t x92 = 613657258LLU;
	volatile int32_t t21 = 3;

	t21 = (x89-((x90&x91)<=x92));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x97 = 55U;
	uint16_t x98 = 2216U;
	int32_t x99 = -1;
	static volatile int16_t x100 = INT16_MIN;
	static volatile int32_t t22 = -481629278;

	t22 = (x97-((x98&x99)<=x100));

	if (t22 != 55) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x102 = -157555049;
	static uint32_t x104 = UINT32_MAX;
	int32_t t23 = -84;

	t23 = (x101-((x102&x103)<=x104));

	if (t23 != 27003) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x105 = 3978;
	int32_t x106 = -106364;
	int16_t x107 = INT16_MIN;
	int64_t x108 = 22314021LL;

	t24 = (x105-((x106&x107)<=x108));

	if (t24 != 3977) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x110 = INT64_MIN;
	volatile uint32_t x111 = UINT32_MAX;
	volatile int32_t t25 = 3384238;

	t25 = (x109-((x110&x111)<=x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x115 = INT64_MIN;

	t26 = (x113-((x114&x115)<=x116));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = -1;
	int16_t x119 = -1;
	static int64_t x120 = INT64_MIN;
	volatile int32_t t27 = 877338640;

	t27 = (x117-((x118&x119)<=x120));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1;
	int16_t x122 = INT16_MAX;
	int32_t x124 = 486154601;
	int32_t t28 = -38151357;

	t28 = (x121-((x122&x123)<=x124));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MAX;
	volatile int64_t x126 = 50012293LL;
	int32_t x127 = INT32_MIN;
	int32_t t29 = -414;

	t29 = (x125-((x126&x127)<=x128));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x129 = 3474LLU;
	int16_t x130 = INT16_MIN;
	int32_t x131 = 4075;
	int32_t x132 = -137108;
	static volatile uint64_t t30 = 388099317541188LLU;

	t30 = (x129-((x130&x131)<=x132));

	if (t30 != 3474LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x133 = 7U;
	uint16_t x134 = 2U;
	uint16_t x135 = UINT16_MAX;
	volatile uint64_t x136 = 155425018LLU;
	static int32_t t31 = 248875263;

	t31 = (x133-((x134&x135)<=x136));

	if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x138 = -1LL;
	int32_t x139 = -72778720;
	int32_t x140 = INT32_MIN;
	int32_t t32 = -3557537;

	t32 = (x137-((x138&x139)<=x140));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MIN;
	int64_t t33 = 971LL;

	t33 = (x141-((x142&x143)<=x144));

	if (t33 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = 15;
	volatile int64_t x146 = INT64_MAX;
	int64_t x148 = -1LL;
	volatile int32_t t34 = -33412223;

	t34 = (x145-((x146&x147)<=x148));

	if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = INT16_MIN;
	int32_t x150 = -1;
	int16_t x151 = INT16_MIN;
	static uint32_t x152 = 1270U;
	static volatile int32_t t35 = -1;

	t35 = (x149-((x150&x151)<=x152));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	static int32_t x154 = INT32_MIN;
	volatile int64_t x155 = -2411274353464534345LL;
	volatile int32_t t36 = -21;

	t36 = (x153-((x154&x155)<=x156));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	static int16_t x158 = -9;
	int64_t x159 = -1117708469956LL;
	volatile uint64_t x160 = UINT64_MAX;
	int32_t t37 = -573491505;

	t37 = (x157-((x158&x159)<=x160));

	if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = INT32_MAX;
	int32_t x162 = -7770526;
	static int8_t x163 = INT8_MAX;
	int64_t x164 = INT64_MIN;
	int32_t t38 = INT32_MAX;

	t38 = (x161-((x162&x163)<=x164));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 5U;
	static int32_t t39 = INT32_MIN;

	t39 = (x165-((x166&x167)<=x168));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MAX;
	static int16_t x170 = -779;
	uint16_t x171 = 1U;
	int64_t t40 = -87563148875212LL;

	t40 = (x169-((x170&x171)<=x172));

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x174 = INT8_MIN;
	volatile int32_t x175 = INT32_MAX;
	int64_t x176 = -1LL;
	int32_t t41 = INT32_MAX;

	t41 = (x173-((x174&x175)<=x176));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x178 = -1;
	uint16_t x180 = 3U;
	static int32_t t42 = -22866459;

	t42 = (x177-((x178&x179)<=x180));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x183 = UINT64_MAX;
	int64_t t43 = INT64_MIN;

	t43 = (x181-((x182&x183)<=x184));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	static int8_t x187 = -48;
	static int16_t x188 = -2;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x185-((x186&x187)<=x188));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -61976298673020LL;
	uint8_t x190 = 1U;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = INT8_MIN;
	int64_t t45 = 389738LL;

	t45 = (x189-((x190&x191)<=x192));

	if (t45 != -61976298673020LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x193 = INT8_MIN;
	volatile int16_t x194 = INT16_MIN;
	int64_t x195 = 6275827442LL;
	static int8_t x196 = INT8_MAX;

	t46 = (x193-((x194&x195)<=x196));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x198 = 13819U;
	uint64_t x199 = 135553456LLU;
	volatile int32_t t47 = 46968222;

	t47 = (x197-((x198&x199)<=x200));

	if (t47 != 21942) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MAX;
	static uint8_t x202 = UINT8_MAX;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = INT16_MIN;

	t48 = (x201-((x202&x203)<=x204));

	if (t48 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 4U;
	int64_t x211 = INT64_MAX;
	volatile uint16_t x212 = 507U;
	static uint32_t t49 = 2418262U;

	t49 = (x209-((x210&x211)<=x212));

	if (t49 != 3U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = UINT16_MAX;
	volatile uint16_t x214 = UINT16_MAX;
	uint8_t x215 = UINT8_MAX;
	volatile uint16_t x216 = 6924U;
	static int32_t t50 = -86706;

	t50 = (x213-((x214&x215)<=x216));

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 11U;
	int8_t x218 = 46;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 958867207854216624LLU;
	int32_t t51 = -13;

	t51 = (x217-((x218&x219)<=x220));

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = 7;
	static int8_t x223 = INT8_MIN;
	static volatile int32_t x224 = INT32_MIN;

	t52 = (x221-((x222&x223)<=x224));

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 85LLU;
	volatile int64_t x226 = -94LL;
	int32_t x227 = -1;
	static int64_t x228 = 899650652971LL;
	static uint64_t t53 = 246750731897614567LLU;

	t53 = (x225-((x226&x227)<=x228));

	if (t53 != 84LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = 1;
	static int16_t x230 = INT16_MIN;

	t54 = (x229-((x230&x231)<=x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = 1;
	uint64_t x234 = 47016686LLU;
	static int64_t x235 = -1LL;
	volatile int32_t t55 = 990910824;

	t55 = (x233-((x234&x235)<=x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MIN;
	volatile int64_t x240 = -14873LL;
	volatile int32_t t56 = -131668182;

	t56 = (x237-((x238&x239)<=x240));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = -4;
	static uint32_t x243 = UINT32_MAX;
	int64_t x244 = INT64_MIN;
	uint32_t t57 = UINT32_MAX;

	t57 = (x241-((x242&x243)<=x244));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x245 = 2863164;
	int64_t x246 = INT64_MIN;
	int8_t x247 = 58;
	int16_t x248 = INT16_MAX;

	t58 = (x245-((x246&x247)<=x248));

	if (t58 != 2863163) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x253 = 2736;
	int64_t x255 = -1LL;
	static int8_t x256 = -12;
	volatile int32_t t59 = 2425204;

	t59 = (x253-((x254&x255)<=x256));

	if (t59 != 2736) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = INT64_MIN;
	int32_t x258 = -1;
	volatile int8_t x259 = INT8_MIN;

	t60 = (x257-((x258&x259)<=x260));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = UINT16_MAX;
	uint32_t x262 = 12300861U;
	static int32_t x263 = -59;
	int8_t x264 = -8;
	volatile int32_t t61 = -1803176;

	t61 = (x261-((x262&x263)<=x264));

	if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	int32_t x268 = INT32_MIN;
	int32_t t62 = 958785539;

	t62 = (x265-((x266&x267)<=x268));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x270 = 1;
	int16_t x272 = INT16_MIN;

	t63 = (x269-((x270&x271)<=x272));

	if (t63 != 556LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = UINT64_MAX;
	int32_t x274 = -1;
	uint16_t x275 = 3U;
	int8_t x276 = -1;

	t64 = (x273-((x274&x275)<=x276));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x277 = 0U;
	int64_t x278 = -1LL;
	int32_t x280 = INT32_MAX;
	int32_t t65 = -146061391;

	t65 = (x277-((x278&x279)<=x280));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -1;
	static int8_t x282 = -2;
	uint16_t x283 = 118U;
	int32_t t66 = -45017280;

	t66 = (x281-((x282&x283)<=x284));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x286 = -1583513523577310643LL;
	int64_t x287 = -19044LL;
	static int32_t x288 = -2;
	volatile uint32_t t67 = 2605995U;

	t67 = (x285-((x286&x287)<=x288));

	if (t67 != 805190U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MAX;
	int32_t x290 = INT32_MAX;
	int16_t x291 = 212;
	volatile int32_t x292 = INT32_MIN;
	int32_t t68 = -5;

	t68 = (x289-((x290&x291)<=x292));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = -1;
	int32_t x294 = 7747;
	static int16_t x295 = 16;
	volatile int64_t x296 = INT64_MIN;
	volatile int32_t t69 = 1;

	t69 = (x293-((x294&x295)<=x296));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = INT16_MIN;
	static int64_t x298 = INT64_MIN;
	volatile int8_t x299 = INT8_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t70 = -4115795;

	t70 = (x297-((x298&x299)<=x300));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MIN;
	uint8_t x303 = UINT8_MAX;
	static int32_t x304 = INT32_MAX;
	volatile int32_t t71 = -436615;

	t71 = (x301-((x302&x303)<=x304));

	if (t71 != -129) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x306 = INT8_MAX;
	static int16_t x307 = 1815;
	int16_t x308 = -1;

	t72 = (x305-((x306&x307)<=x308));

	if (t72 != 86U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x311 = -5;
	static int32_t t73 = -120861832;

	t73 = (x309-((x310&x311)<=x312));

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 0U;
	int64_t x319 = INT64_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t74 = -25619;

	t74 = (x317-((x318&x319)<=x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 559U;
	int8_t x322 = INT8_MAX;
	volatile int64_t x323 = INT64_MAX;
	int16_t x324 = -1;
	static int32_t t75 = -492875;

	t75 = (x321-((x322&x323)<=x324));

	if (t75 != 559) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x325 = 230874842U;
	volatile int8_t x326 = INT8_MIN;
	uint16_t x327 = 7758U;
	int16_t x328 = INT16_MIN;
	volatile uint32_t t76 = 60U;

	t76 = (x325-((x326&x327)<=x328));

	if (t76 != 230874842U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x329 = 226U;
	int16_t x330 = 8585;
	static uint32_t x331 = UINT32_MAX;
	static volatile int16_t x332 = INT16_MIN;
	volatile int32_t t77 = -36032688;

	t77 = (x329-((x330&x331)<=x332));

	if (t77 != 225) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x333 = -1LL;
	int32_t x335 = -1;
	int8_t x336 = 1;
	volatile int64_t t78 = 1LL;

	t78 = (x333-((x334&x335)<=x336));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x338 = -763;
	int16_t x339 = INT16_MIN;
	uint32_t x340 = 15001U;

	t79 = (x337-((x338&x339)<=x340));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x342 = 0LLU;

	t80 = (x341-((x342&x343)<=x344));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	static uint64_t x347 = 348639651830749LLU;
	int8_t x348 = -1;

	t81 = (x345-((x346&x347)<=x348));

	if (t81 != -129) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x349 = -1;
	int16_t x350 = 609;
	static int8_t x351 = INT8_MAX;
	uint16_t x352 = 387U;
	int32_t t82 = 787;

	t82 = (x349-((x350&x351)<=x352));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x353 = UINT8_MAX;
	static volatile int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	int32_t t83 = 15124227;

	t83 = (x353-((x354&x355)<=x356));

	if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = -39674456728128946LL;
	uint16_t x358 = 283U;
	uint16_t x359 = UINT16_MAX;
	static uint8_t x360 = 18U;

	t84 = (x357-((x358&x359)<=x360));

	if (t84 != -39674456728128946LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x361 = 264837074LLU;
	int8_t x362 = -1;
	volatile int64_t x363 = -1LL;
	uint64_t t85 = 676659239LLU;

	t85 = (x361-((x362&x363)<=x364));

	if (t85 != 264837074LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x365 = 21U;
	volatile int64_t x367 = -374LL;
	static uint8_t x368 = 81U;
	static volatile int32_t t86 = 792526033;

	t86 = (x365-((x366&x367)<=x368));

	if (t86 != 20) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = -2LL;
	int32_t x370 = INT32_MAX;
	static int16_t x372 = -1;
	int64_t t87 = 120452401LL;

	t87 = (x369-((x370&x371)<=x372));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x375 = INT16_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t88 = -409480815;

	t88 = (x373-((x374&x375)<=x376));

	if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = 1U;
	uint64_t x378 = 119936859LLU;
	uint16_t x379 = 1146U;
	volatile int32_t x380 = INT32_MIN;
	static int32_t t89 = 8376;

	t89 = (x377-((x378&x379)<=x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = 1726867357853720LLU;
	uint8_t x382 = 28U;
	int32_t x384 = INT32_MAX;
	volatile uint64_t t90 = 4456386910LLU;

	t90 = (x381-((x382&x383)<=x384));

	if (t90 != 1726867357853719LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MAX;
	int8_t x388 = INT8_MIN;

	t91 = (x385-((x386&x387)<=x388));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MAX;
	volatile int32_t x390 = INT32_MAX;
	static uint16_t x391 = UINT16_MAX;
	volatile int8_t x392 = INT8_MAX;
	static int64_t t92 = INT64_MAX;

	t92 = (x389-((x390&x391)<=x392));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x393 = UINT64_MAX;
	uint32_t x394 = UINT32_MAX;
	uint64_t x395 = 121295LLU;
	uint8_t x396 = 33U;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x393-((x394&x395)<=x396));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x398 = UINT8_MAX;
	static int8_t x399 = -1;
	int64_t t94 = INT64_MAX;

	t94 = (x397-((x398&x399)<=x400));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 6U;
	int32_t x402 = INT32_MAX;
	int16_t x403 = -63;
	int16_t x404 = -1;
	volatile int32_t t95 = 5;

	t95 = (x401-((x402&x403)<=x404));

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x405 = -273574813;
	int16_t x406 = INT16_MIN;
	static int16_t x407 = INT16_MIN;
	static volatile int8_t x408 = 0;
	int32_t t96 = -21640952;

	t96 = (x405-((x406&x407)<=x408));

	if (t96 != -273574814) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t97 = -665;

	t97 = (x409-((x410&x411)<=x412));

	if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MIN;
	int64_t x414 = INT64_MAX;
	uint32_t x415 = UINT32_MAX;
	uint8_t x416 = 6U;
	static volatile int32_t t98 = -118;

	t98 = (x413-((x414&x415)<=x416));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x419 = INT16_MAX;
	int32_t x420 = -1;
	int32_t t99 = 1;

	t99 = (x417-((x418&x419)<=x420));

	if (t99 != -32768) { NG(); } else { ; }
	
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

