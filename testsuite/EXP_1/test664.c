#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x22 = -2;
int32_t x36 = -79090;
int8_t x39 = -1;
int16_t x52 = INT16_MIN;
uint8_t x53 = 79U;
int64_t t11 = 76336931413LL;
int64_t x65 = INT64_MIN;
int16_t x66 = INT16_MIN;
int32_t x69 = INT32_MIN;
uint8_t x81 = 2U;
volatile uint16_t x82 = UINT16_MAX;
int32_t x86 = INT32_MIN;
volatile uint32_t x87 = UINT32_MAX;
int32_t x89 = INT32_MIN;
uint8_t x90 = 50U;
int32_t t20 = -667083520;
static volatile int64_t x93 = INT64_MIN;
int8_t x94 = INT8_MAX;
int32_t x95 = 252529;
static int8_t x96 = INT8_MAX;
int8_t x100 = 20;
int64_t x105 = INT64_MAX;
volatile int32_t x107 = INT32_MIN;
int8_t x109 = INT8_MIN;
uint16_t x113 = 31834U;
volatile int32_t t30 = -13;
uint16_t x149 = 407U;
int8_t x150 = -1;
static uint32_t x151 = UINT32_MAX;
static uint64_t x153 = 1899202697299LLU;
static uint32_t x155 = 0U;
volatile int32_t t37 = -33;
static uint64_t x168 = 8542852LLU;
uint16_t x173 = 86U;
uint8_t x181 = UINT8_MAX;
volatile uint32_t t42 = 34332U;
uint16_t x192 = 821U;
volatile uint64_t x196 = 56012755259LLU;
volatile uint8_t x199 = 4U;
int64_t x205 = 54516296LL;
uint16_t x207 = 2814U;
int16_t x208 = -5206;
static int64_t t48 = 30528526LL;
volatile uint16_t x213 = 357U;
int16_t x217 = INT16_MIN;
uint16_t x222 = UINT16_MAX;
uint64_t x227 = 175205765133181366LLU;
int64_t x228 = -3425889214278540273LL;
static volatile uint64_t t52 = 36048782LLU;
uint64_t x242 = 3552470911362LLU;
volatile uint8_t x243 = 6U;
uint64_t x248 = 4176557535891223055LLU;
int16_t x251 = INT16_MIN;
static uint64_t x253 = 429152858254408LLU;
uint64_t t61 = 0LLU;
uint64_t t63 = 399248112047777976LLU;
int16_t x278 = INT16_MIN;
volatile int32_t t64 = INT32_MIN;
int32_t x283 = INT32_MAX;
uint8_t x284 = 31U;
volatile int16_t x300 = 2;
volatile int8_t x309 = INT8_MIN;
uint64_t x319 = 1LLU;
int64_t x321 = INT64_MIN;
int64_t t73 = -56631976LL;
volatile uint64_t x332 = 2393181170169740LLU;
uint64_t x338 = 5529262464813977LLU;
static int8_t x340 = INT8_MAX;
int16_t x341 = INT16_MAX;
int8_t x344 = -1;
volatile int64_t x350 = -1LL;
static int32_t x355 = INT32_MIN;
volatile int8_t x359 = INT8_MIN;
int16_t x360 = -1;
static uint32_t x362 = 3946859U;
static int8_t x370 = -48;
int32_t x372 = INT32_MIN;
uint16_t x374 = UINT16_MAX;
static volatile int64_t x377 = INT64_MIN;
int64_t x379 = -1LL;
volatile uint16_t x386 = 9101U;
volatile int8_t x387 = 14;
static int16_t x390 = INT16_MIN;
volatile int8_t x392 = INT8_MIN;
static uint32_t x393 = 3U;
volatile int8_t x395 = 1;
static volatile int8_t x400 = INT8_MIN;
int64_t x401 = -1LL;
uint16_t x402 = UINT16_MAX;
volatile int8_t x405 = -36;
uint16_t x406 = 14U;
uint64_t x409 = 3537LLU;
static int16_t x412 = INT16_MIN;
int32_t x413 = -1;
int8_t x415 = INT8_MIN;
int32_t x416 = -1;
uint8_t x418 = UINT8_MAX;
volatile int64_t t95 = -1962224LL;
int32_t x427 = -10111618;
volatile int32_t t98 = 6;
volatile int16_t x436 = -1;
volatile int64_t t99 = -2424084104810058615LL;


void f0(void) {
	int8_t x1 = -1;
	volatile uint8_t x2 = 50U;
	static int32_t x3 = -1;
	uint8_t x4 = 7U;
	volatile int32_t t0 = 13397;

	t0 = (((x1/x2)^x3)+x4);

	if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -1;
	volatile int32_t x10 = INT32_MAX;
	static volatile int16_t x11 = INT16_MIN;
	int8_t x12 = -10;
	int32_t t1 = 133320973;

	t1 = (((x9/x10)^x11)+x12);

	if (t1 != -32778) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 0U;
	uint16_t x14 = UINT16_MAX;
	int32_t x15 = 23391;
	uint16_t x16 = 7U;
	int32_t t2 = -6302455;

	t2 = (((x13/x14)^x15)+x16);

	if (t2 != 23398) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = UINT64_MAX;
	static int64_t x18 = INT64_MAX;
	static int8_t x19 = INT8_MAX;
	volatile int64_t x20 = INT64_MIN;
	static uint64_t t3 = 27LLU;

	t3 = (((x17/x18)^x19)+x20);

	if (t3 != 9223372036854775933LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 0;
	volatile int8_t x23 = INT8_MIN;
	volatile uint64_t x24 = 18662703991LLU;
	uint64_t t4 = 51417615899739LLU;

	t4 = (((x21/x22)^x23)+x24);

	if (t4 != 18662703863LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	volatile int16_t x26 = -1;
	int64_t x27 = -291339059905104LL;
	volatile int8_t x28 = 1;
	int64_t t5 = 611374191790630LL;

	t5 = (((x25/x26)^x27)+x28);

	if (t5 != -291339059905102LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 0;
	static uint32_t x30 = 11782240U;
	static volatile int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MAX;
	uint32_t t6 = 12977178U;

	t6 = (((x29/x30)^x31)+x32);

	if (t6 != 2147450879U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 701LLU;
	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MAX;
	volatile uint64_t t7 = 34974864912875LLU;

	t7 = (((x33/x34)^x35)+x36);

	if (t7 != 2147404557LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	int64_t x38 = -6573324LL;
	static uint8_t x40 = 2U;
	int64_t t8 = 1274167438482LL;

	t8 = (((x37/x38)^x39)+x40);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = UINT32_MAX;
	uint64_t x47 = UINT64_MAX;
	volatile int8_t x48 = -1;
	uint64_t t9 = 28004051163687LLU;

	t9 = (((x45/x46)^x47)+x48);

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = -9188;
	int64_t x50 = INT64_MIN;
	uint8_t x51 = 1U;
	int64_t t10 = 2300910918287501LL;

	t10 = (((x49/x50)^x51)+x52);

	if (t10 != -32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x54 = -1;
	int64_t x55 = 93703542LL;
	volatile uint16_t x56 = 460U;

	t11 = (((x53/x54)^x55)+x56);

	if (t11 != -93703021LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MAX;
	int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MAX;
	volatile uint64_t t12 = 371LLU;

	t12 = (((x57/x58)^x59)+x60);

	if (t12 != 18446744065119584387LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	uint64_t x62 = 13247412462576818LLU;
	int64_t x63 = 4256LL;
	int32_t x64 = INT32_MIN;
	static volatile uint64_t t13 = 1022083379LLU;

	t13 = (((x61/x62)^x63)+x64);

	if (t13 != 18446744071562073552LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x67 = -1;
	int8_t x68 = 1;
	int64_t t14 = 316750171151657006LL;

	t14 = (((x65/x66)^x67)+x68);

	if (t14 != -281474976710656LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x70 = -1LL;
	int32_t x71 = INT32_MIN;
	int8_t x72 = -1;
	int64_t t15 = 395574757420LL;

	t15 = (((x69/x70)^x71)+x72);

	if (t15 != -4294967297LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = 13;
	static int8_t x75 = -3;
	int16_t x76 = -28;
	volatile int32_t t16 = 1;

	t16 = (((x73/x74)^x75)+x76);

	if (t16 != 165191022) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = 3;
	volatile uint8_t x78 = 6U;
	uint8_t x79 = UINT8_MAX;
	static volatile uint16_t x80 = 11516U;
	int32_t t17 = -4207547;

	t17 = (((x77/x78)^x79)+x80);

	if (t17 != 11771) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x83 = 69U;
	int16_t x84 = 39;
	int32_t t18 = -108828;

	t18 = (((x81/x82)^x83)+x84);

	if (t18 != 108) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x88 = INT16_MIN;
	uint64_t t19 = 261346680LLU;

	t19 = (((x85/x86)^x87)+x88);

	if (t19 != 4294934526LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;

	t20 = (((x89/x90)^x91)+x92);

	if (t20 != 42949592) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t t21 = -843419456LL;

	t21 = (((x93/x94)^x95)+x96);

	if (t21 != -72624976668367475LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = -1LL;
	int16_t x98 = -2382;
	int16_t x99 = INT16_MIN;
	volatile int64_t t22 = 2312021801882526782LL;

	t22 = (((x97/x98)^x99)+x100);

	if (t22 != -32748LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	static int32_t x102 = -9785;
	volatile int64_t x103 = 401LL;
	uint32_t x104 = 166122U;
	static volatile int64_t t23 = -5267819617994539LL;

	t23 = (((x101/x102)^x103)+x104);

	if (t23 != 166524LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x106 = INT8_MAX;
	static int64_t x108 = INT64_MAX;
	int64_t t24 = -3LL;

	t24 = (((x105/x106)^x107)+x108);

	if (t24 != 9150747058580242560LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x110 = -1;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = 2;
	volatile uint32_t t25 = 1440095817U;

	t25 = (((x109/x110)^x111)+x112);

	if (t25 != 4294967169U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x114 = INT8_MIN;
	int64_t x115 = -1LL;
	volatile int16_t x116 = INT16_MIN;
	static int64_t t26 = 1894910089133LL;

	t26 = (((x113/x114)^x115)+x116);

	if (t26 != -32521LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 374861748657164LL;
	volatile uint8_t x118 = 10U;
	static volatile int32_t x119 = INT32_MIN;
	static volatile uint64_t x120 = UINT64_MAX;
	volatile uint64_t t27 = 4035543232864037LLU;

	t27 = (((x117/x118)^x119)+x120);

	if (t27 != 18446706589082782003LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = 1438;
	int16_t x123 = INT16_MAX;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t28 = 398927761833463645LL;

	t28 = (((x121/x122)^x123)+x124);

	if (t28 != -6414027842046681LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MAX;
	uint32_t x126 = 2002U;
	int16_t x127 = -1;
	int8_t x128 = -1;
	volatile uint32_t t29 = 12399584U;

	t29 = (((x125/x126)^x127)+x128);

	if (t29 != 4293894625U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	static int16_t x130 = INT16_MIN;
	int32_t x131 = -1;
	int32_t x132 = INT32_MAX;

	t30 = (((x129/x130)^x131)+x132);

	if (t30 != 2147418110) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = -1;
	static int16_t x139 = -3;
	int8_t x140 = -1;
	static volatile int32_t t31 = -1399353;

	t31 = (((x137/x138)^x139)+x140);

	if (t31 != -32772) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x141 = INT32_MIN;
	static uint8_t x142 = 1U;
	volatile int16_t x143 = INT16_MAX;
	static int8_t x144 = 27;
	int32_t t32 = 511378;

	t32 = (((x141/x142)^x143)+x144);

	if (t32 != -2147450854) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MAX;
	volatile uint8_t x147 = UINT8_MAX;
	int8_t x148 = -1;
	int32_t t33 = -115674;

	t33 = (((x145/x146)^x147)+x148);

	if (t33 != -257) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x152 = 13U;
	volatile uint32_t t34 = 0U;

	t34 = (((x149/x150)^x151)+x152);

	if (t34 != 419U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x154 = INT16_MIN;
	uint32_t x156 = 12U;
	uint64_t t35 = 27847LLU;

	t35 = (((x153/x154)^x155)+x156);

	if (t35 != 12LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x157 = INT8_MIN;
	uint16_t x158 = 353U;
	int16_t x159 = -53;
	volatile int8_t x160 = -1;
	static volatile int32_t t36 = -23690;

	t36 = (((x157/x158)^x159)+x160);

	if (t36 != -54) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x161 = UINT16_MAX;
	int8_t x162 = -4;
	volatile int16_t x163 = -78;
	uint16_t x164 = UINT16_MAX;

	t37 = (((x161/x162)^x163)+x164);

	if (t37 != 81842) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = UINT64_MAX;
	uint16_t x166 = 76U;
	uint64_t x167 = UINT64_MAX;
	uint64_t t38 = 89816401355LLU;

	t38 = (((x165/x166)^x167)+x168);

	if (t38 != 18204023756958758262LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = 93;
	uint16_t x170 = 3U;
	uint32_t x171 = 54361895U;
	int32_t x172 = INT32_MAX;
	volatile uint32_t t39 = 1355418U;

	t39 = (((x169/x170)^x171)+x172);

	if (t39 != 2201845559U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x174 = -14;
	uint32_t x175 = UINT32_MAX;
	volatile uint32_t x176 = 314456437U;
	volatile uint32_t t40 = 483U;

	t40 = (((x173/x174)^x175)+x176);

	if (t40 != 314456442U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x177 = 22851;
	int8_t x178 = -9;
	int64_t x179 = INT64_MAX;
	int64_t x180 = INT64_MAX;
	volatile int64_t t41 = 5816515LL;

	t41 = (((x177/x178)^x179)+x180);

	if (t41 != 2537LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x182 = 38;
	static int32_t x183 = 14873;
	uint32_t x184 = 506U;

	t42 = (((x181/x182)^x183)+x184);

	if (t42 != 15385U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x185 = 3790234;
	int16_t x186 = -1;
	static int32_t x187 = -187179;
	int64_t x188 = -1LL;
	volatile int64_t t43 = 319134237LL;

	t43 = (((x185/x186)^x187)+x188);

	if (t43 != 3870386LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x189 = 41U;
	int64_t x190 = -765073388506412LL;
	static volatile int16_t x191 = 2;
	volatile int64_t t44 = -1LL;

	t44 = (((x189/x190)^x191)+x192);

	if (t44 != 823LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 23U;
	int64_t x194 = INT64_MIN;
	static uint16_t x195 = 4449U;
	volatile uint64_t t45 = 27263LLU;

	t45 = (((x193/x194)^x195)+x196);

	if (t45 != 56012759708LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = UINT8_MAX;
	volatile uint8_t x198 = 3U;
	uint32_t x200 = 315036U;
	uint32_t t46 = 41U;

	t46 = (((x197/x198)^x199)+x200);

	if (t46 != 315117U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x201 = INT64_MAX;
	int32_t x202 = INT32_MIN;
	static volatile uint16_t x203 = UINT16_MAX;
	uint32_t x204 = 4964462U;
	volatile int64_t t47 = -2374LL;

	t47 = (((x201/x202)^x203)+x204);

	if (t47 != -4289937300LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x206 = 39436731155198LL;

	t48 = (((x205/x206)^x207)+x208);

	if (t48 != -2392LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x214 = 13U;
	int64_t x215 = 16925156908019LL;
	int64_t x216 = -138797LL;
	volatile int64_t t49 = -245511711LL;

	t49 = (((x213/x214)^x215)+x216);

	if (t49 != 16925156769211LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x218 = INT32_MAX;
	static int16_t x219 = INT16_MIN;
	int16_t x220 = 16;
	int32_t t50 = -4;

	t50 = (((x217/x218)^x219)+x220);

	if (t50 != -32752) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -237LL;
	static int8_t x223 = 0;
	volatile uint16_t x224 = 2U;
	int64_t t51 = 40929897789LL;

	t51 = (((x221/x222)^x223)+x224);

	if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x225 = 1;
	int16_t x226 = 112;

	t52 = (((x225/x226)^x227)+x228);

	if (t52 != 15196060624564192709LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = INT64_MAX;
	int64_t x234 = 63717357150LL;
	static int64_t x235 = -1LL;
	volatile int32_t x236 = INT32_MIN;
	int64_t t53 = 109245LL;

	t53 = (((x233/x234)^x235)+x236);

	if (t53 != -2292238115LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x237 = 366787LLU;
	static uint16_t x238 = UINT16_MAX;
	uint64_t x239 = UINT64_MAX;
	volatile int8_t x240 = INT8_MAX;
	uint64_t t54 = 20617LLU;

	t54 = (((x237/x238)^x239)+x240);

	if (t54 != 121LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = 5U;
	uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t55 = 852975835LLU;

	t55 = (((x241/x242)^x243)+x244);

	if (t55 != 5LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x245 = INT16_MIN;
	static volatile uint32_t x246 = 760U;
	volatile uint8_t x247 = UINT8_MAX;
	uint64_t t56 = 8009557LLU;

	t56 = (((x245/x246)^x247)+x248);

	if (t56 != 4176557535896874481LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = INT8_MAX;
	volatile int8_t x250 = 1;
	uint8_t x252 = 0U;
	int32_t t57 = 58726;

	t57 = (((x249/x250)^x251)+x252);

	if (t57 != -32641) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x254 = -99;
	static int8_t x255 = 0;
	int64_t x256 = INT64_MIN;
	uint64_t t58 = 410LLU;

	t58 = (((x253/x254)^x255)+x256);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = 91736594582900LLU;
	uint64_t x258 = 1LLU;
	int8_t x259 = -1;
	static uint64_t x260 = 1319833690LLU;
	uint64_t t59 = 493776929293LLU;

	t59 = (((x257/x258)^x259)+x260);

	if (t59 != 18446652338434802405LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x261 = INT64_MAX;
	uint32_t x262 = 14859U;
	static int8_t x263 = -1;
	static int8_t x264 = INT8_MIN;
	int64_t t60 = 1049897281748LL;

	t60 = (((x261/x262)^x263)+x264);

	if (t60 != -620726296309084LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = INT64_MAX;
	static uint64_t x266 = 642910LLU;
	static volatile int32_t x267 = INT32_MAX;
	volatile int64_t x268 = 2564LL;

	t61 = (((x265/x266)^x267)+x268);

	if (t61 != 14346240994289LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = -1;
	static int16_t x270 = 3539;
	volatile int8_t x271 = INT8_MAX;
	static uint16_t x272 = 4U;
	int32_t t62 = 2;

	t62 = (((x269/x270)^x271)+x272);

	if (t62 != 131) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x273 = 107224LLU;
	uint32_t x274 = 41838U;
	uint16_t x275 = UINT16_MAX;
	int8_t x276 = INT8_MAX;

	t63 = (((x273/x274)^x275)+x276);

	if (t63 != 65660LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = INT8_MAX;
	static int32_t x279 = INT32_MIN;
	uint16_t x280 = 0U;

	t64 = (((x277/x278)^x279)+x280);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x281 = -1LL;
	volatile int16_t x282 = INT16_MIN;
	int64_t t65 = 1227181207523LL;

	t65 = (((x281/x282)^x283)+x284);

	if (t65 != 2147483678LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = INT64_MAX;
	volatile uint32_t x294 = 119U;
	uint64_t x295 = 1405360675854LLU;
	static int64_t x296 = INT64_MIN;
	uint64_t t66 = 5381LLU;

	t66 = (((x293/x294)^x295)+x296);

	if (t66 != 9300880761061809437LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = 3;
	int16_t x298 = INT16_MAX;
	int16_t x299 = 48;
	volatile int32_t t67 = 7386;

	t67 = (((x297/x298)^x299)+x300);

	if (t67 != 50) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MAX;
	int64_t x302 = 28828782001763LL;
	int64_t x303 = 13041604591754864LL;
	uint16_t x304 = 522U;
	static volatile int64_t t68 = 420LL;

	t68 = (((x301/x302)^x303)+x304);

	if (t68 != 13041604591550906LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x305 = 16023255578384LLU;
	static uint64_t x306 = UINT64_MAX;
	int8_t x307 = 0;
	int32_t x308 = -1;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (((x305/x306)^x307)+x308);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x310 = 824070U;
	uint16_t x311 = 4604U;
	uint32_t x312 = 4371842U;
	volatile uint32_t t70 = 18U;

	t70 = (((x309/x310)^x311)+x312);

	if (t70 != 4373289U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = -1;
	int64_t x314 = 31845034720889021LL;
	int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MAX;
	int64_t t71 = 1496595338047998LL;

	t71 = (((x313/x314)^x315)+x316);

	if (t71 != 32894LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = UINT32_MAX;
	static int64_t x318 = INT64_MIN;
	volatile int64_t x320 = INT64_MIN;
	uint64_t t72 = 50LLU;

	t72 = (((x317/x318)^x319)+x320);

	if (t72 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x322 = INT16_MIN;
	static int8_t x323 = INT8_MIN;
	volatile int32_t x324 = -1;

	t73 = (((x321/x322)^x323)+x324);

	if (t73 != -281474976710785LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x329 = -1;
	uint64_t x330 = 229614489LLU;
	uint64_t x331 = 201650479LLU;
	uint64_t t74 = 1193544373613250786LLU;

	t74 = (((x329/x330)^x331)+x332);

	if (t74 != 2393261575371309LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x333 = INT8_MIN;
	volatile uint32_t x334 = UINT32_MAX;
	int64_t x335 = -821820748146590LL;
	uint16_t x336 = 6254U;
	volatile int64_t t75 = 586401196911420LL;

	t75 = (((x333/x334)^x335)+x336);

	if (t75 != -821820748140336LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = -1LL;
	volatile int16_t x339 = INT16_MIN;
	static volatile uint64_t t76 = 191448007LLU;

	t76 = (((x337/x338)^x339)+x340);

	if (t76 != 18446744073709522311LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x342 = -3076738LL;
	uint16_t x343 = 30878U;
	int64_t t77 = 1318LL;

	t77 = (((x341/x342)^x343)+x344);

	if (t77 != 30877LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x345 = -1LL;
	static int16_t x346 = 31;
	static int32_t x347 = -1;
	static volatile int64_t x348 = -1LL;
	static volatile int64_t t78 = -2637621183829LL;

	t78 = (((x345/x346)^x347)+x348);

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MIN;
	int64_t t79 = -4194600906299482710LL;

	t79 = (((x349/x350)^x351)+x352);

	if (t79 != 9223372036854677505LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = -416;
	static uint64_t x354 = 2LLU;
	int64_t x356 = INT64_MIN;
	uint64_t t80 = 115489435665063LLU;

	t80 = (((x353/x354)^x355)+x356);

	if (t80 != 2147483440LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x357 = -1;
	volatile int8_t x358 = INT8_MIN;
	static volatile int32_t t81 = 40556;

	t81 = (((x357/x358)^x359)+x360);

	if (t81 != -129) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x363 = 17;
	volatile int64_t x364 = INT64_MIN;
	int64_t t82 = -14601191LL;

	t82 = (((x361/x362)^x363)+x364);

	if (t82 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = 31569839LL;
	int16_t x371 = INT16_MAX;
	volatile int64_t t83 = -6818LL;

	t83 = (((x369/x370)^x371)+x372);

	if (t83 != -2148169433LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = -1;
	uint8_t x375 = UINT8_MAX;
	volatile int64_t x376 = -28LL;
	volatile int64_t t84 = -93LL;

	t84 = (((x373/x374)^x375)+x376);

	if (t84 != 227LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x378 = INT8_MIN;
	static uint16_t x380 = UINT16_MAX;
	static volatile int64_t t85 = -222363401217807428LL;

	t85 = (((x377/x378)^x379)+x380);

	if (t85 != -72057594037862402LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x381 = UINT16_MAX;
	static int16_t x382 = INT16_MIN;
	int16_t x383 = 169;
	int64_t x384 = 635999LL;
	volatile int64_t t86 = 7LL;

	t86 = (((x381/x382)^x383)+x384);

	if (t86 != 635829LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x385 = 406722870321279LLU;
	static int8_t x388 = INT8_MIN;
	volatile uint64_t t87 = 61603981011471439LLU;

	t87 = (((x385/x386)^x387)+x388);

	if (t87 != 44689909793LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = 13;
	int16_t x391 = INT16_MAX;
	volatile int32_t t88 = 108472;

	t88 = (((x389/x390)^x391)+x392);

	if (t88 != 32639) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x394 = UINT8_MAX;
	static volatile int64_t x396 = 435774404LL;
	int64_t t89 = 26237583767631LL;

	t89 = (((x393/x394)^x395)+x396);

	if (t89 != 435774405LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x397 = 19924486769970LL;
	volatile uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MAX;
	volatile uint64_t t90 = 836977LLU;

	t90 = (((x397/x398)^x399)+x400);

	if (t90 != 2147483519LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x403 = 1018;
	int64_t x404 = INT64_MIN;
	int64_t t91 = -10LL;

	t91 = (((x401/x402)^x403)+x404);

	if (t91 != -9223372036854774790LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MIN;
	volatile int64_t t92 = -62LL;

	t92 = (((x405/x406)^x407)+x408);

	if (t92 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x410 = 140;
	static uint16_t x411 = 20U;
	uint64_t t93 = 510LLU;

	t93 = (((x409/x410)^x411)+x412);

	if (t93 != 18446744073709518861LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x414 = INT64_MIN;
	int64_t t94 = -821765986139179132LL;

	t94 = (((x413/x414)^x415)+x416);

	if (t94 != -129LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = INT64_MIN;
	int64_t x419 = INT64_MAX;
	volatile int16_t x420 = INT16_MIN;

	t95 = (((x417/x418)^x419)+x420);

	if (t95 != -9187201950435770241LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x421 = 13U;
	uint8_t x422 = UINT8_MAX;
	volatile int16_t x423 = INT16_MIN;
	int16_t x424 = -1;
	volatile int32_t t96 = 24657845;

	t96 = (((x421/x422)^x423)+x424);

	if (t96 != -32769) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x425 = 1846LLU;
	volatile uint64_t x426 = UINT64_MAX;
	int64_t x428 = INT64_MIN;
	volatile uint64_t t97 = 6507113245931490LLU;

	t97 = (((x425/x426)^x427)+x428);

	if (t97 != 9223372036844664190LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x429 = -3;
	uint8_t x430 = UINT8_MAX;
	int8_t x431 = -1;
	volatile int16_t x432 = 470;

	t98 = (((x429/x430)^x431)+x432);

	if (t98 != 469) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = 1077333100LL;
	int32_t x434 = 74954525;
	volatile uint16_t x435 = UINT16_MAX;

	t99 = (((x433/x434)^x435)+x436);

	if (t99 != 65520LL) { NG(); } else { ; }
	
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

