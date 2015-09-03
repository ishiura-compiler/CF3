#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MAX;
static volatile int32_t x4 = INT32_MIN;
static uint8_t x11 = UINT8_MAX;
int32_t t2 = 13543229;
volatile uint8_t x21 = UINT8_MAX;
int32_t x22 = -288022535;
static int32_t x34 = INT32_MAX;
volatile uint16_t x38 = 0U;
uint32_t x43 = 696078U;
int64_t x44 = INT64_MAX;
int16_t x51 = -1;
int64_t x54 = -1LL;
static volatile uint32_t x57 = 23279U;
static int8_t x59 = -63;
int32_t t18 = -16603198;
uint8_t x77 = 0U;
static int64_t x78 = INT64_MIN;
static int32_t x85 = -1;
volatile int64_t x86 = INT64_MIN;
int8_t x89 = -6;
int32_t x91 = -1;
static int32_t t24 = 10728;
volatile int64_t x102 = 8670LL;
volatile int32_t t26 = 787786;
int64_t x115 = INT64_MAX;
int32_t x117 = INT32_MAX;
uint32_t x118 = UINT32_MAX;
int64_t x124 = INT64_MAX;
volatile int32_t t30 = -9;
int16_t x125 = INT16_MAX;
int64_t x128 = INT64_MAX;
uint8_t x138 = 1U;
volatile uint8_t x139 = 3U;
uint8_t x140 = 1U;
static uint32_t x141 = 11997523U;
static int8_t x146 = -1;
volatile int32_t t36 = 255563;
volatile uint16_t x156 = UINT16_MAX;
static int8_t x157 = INT8_MAX;
int8_t x158 = INT8_MIN;
int32_t x159 = 121151;
uint8_t x162 = UINT8_MAX;
int32_t t40 = 623;
volatile int8_t x170 = 1;
int32_t x172 = INT32_MAX;
volatile int32_t t42 = 0;
volatile int8_t x179 = 18;
int32_t x184 = -18451;
volatile uint16_t x193 = 25885U;
int32_t t47 = -3311;
int32_t t48 = -15620;
static int16_t x202 = 0;
int32_t x203 = -1;
int16_t x204 = -594;
int8_t x211 = INT8_MAX;
volatile int32_t x224 = INT32_MIN;
volatile int32_t t55 = 6769;
int8_t x239 = INT8_MIN;
uint32_t x249 = 688U;
volatile uint8_t x259 = 1U;
int64_t x267 = -519296LL;
static int16_t x270 = INT16_MAX;
uint32_t x274 = 40U;
uint8_t x277 = 27U;
uint64_t x278 = UINT64_MAX;
volatile uint16_t x292 = 16U;
int64_t t70 = 30852112LL;
static uint64_t x295 = UINT64_MAX;
int16_t x300 = INT16_MIN;
static int64_t x304 = 0LL;
int16_t x311 = INT16_MIN;
int32_t x316 = INT32_MIN;
int32_t t77 = -69;
int32_t x321 = -1;
int8_t x332 = -1;
int64_t t80 = -90828LL;
static int16_t x335 = -11;
int32_t t81 = 0;
volatile int32_t x338 = INT32_MAX;
volatile int64_t x343 = -1LL;
int32_t x351 = INT32_MIN;
static uint32_t x356 = 2U;
static int16_t x357 = INT16_MIN;
int32_t t86 = 2;
int64_t x365 = 1335LL;
int8_t x366 = INT8_MIN;
uint16_t x374 = 6748U;
static uint64_t x388 = 1598794435643785LLU;
static int32_t x389 = -10;
static uint64_t x394 = 6307391014LLU;
int64_t x395 = INT64_MIN;
int16_t x396 = INT16_MIN;
volatile int64_t t95 = 3874869462640LL;
int16_t x399 = INT16_MIN;
volatile int64_t x400 = INT64_MAX;
static int16_t x401 = INT16_MIN;
volatile int8_t x411 = INT8_MIN;
int8_t x412 = -1;


void f0(void) {
	int16_t x2 = -1;
	int32_t x3 = -802717;
	int64_t t0 = INT64_MAX;

	t0 = (x1+((x2==x3)<=x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 0U;
	int8_t x6 = INT8_MIN;
	volatile uint64_t x7 = UINT64_MAX;
	volatile int64_t x8 = -181891930LL;
	volatile uint32_t t1 = 2064150U;

	t1 = (x5+((x6==x7)<=x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 14U;
	int32_t x10 = INT32_MIN;
	int16_t x12 = INT16_MAX;

	t2 = (x9+((x10==x11)<=x12));

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -6;
	int64_t x14 = INT64_MAX;
	int32_t x15 = INT32_MIN;
	static uint8_t x16 = 28U;
	int32_t t3 = -18917;

	t3 = (x13+((x14==x15)<=x16));

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	static int64_t x18 = INT64_MIN;
	uint16_t x19 = 16212U;
	int8_t x20 = -1;
	int32_t t4 = 161869;

	t4 = (x17+((x18==x19)<=x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x23 = UINT16_MAX;
	static volatile uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -35;

	t5 = (x21+((x22==x23)<=x24));

	if (t5 != 256) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MIN;
	volatile int8_t x27 = INT8_MIN;
	int8_t x28 = 1;
	volatile int32_t t6 = 1;

	t6 = (x25+((x26==x27)<=x28));

	if (t6 != 65536) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	static volatile int64_t x30 = 643409343168LL;
	uint32_t x31 = UINT32_MAX;
	uint64_t x32 = 2460180814LLU;
	volatile int32_t t7 = 2;

	t7 = (x29+((x30==x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static volatile int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t8 = INT32_MIN;

	t8 = (x33+((x34==x35)<=x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	uint16_t x39 = 0U;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 0;

	t9 = (x37+((x38==x39)<=x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -804552396;
	static int32_t x42 = INT32_MIN;
	static int32_t t10 = -10;

	t10 = (x41+((x42==x43)<=x44));

	if (t10 != -804552395) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	volatile int64_t x46 = INT64_MAX;
	volatile int32_t x47 = -126449446;
	uint64_t x48 = UINT64_MAX;
	static int32_t t11 = -1017;

	t11 = (x45+((x46==x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 6738558035098LL;
	volatile int64_t x50 = -178506148963389LL;
	uint32_t x52 = 287U;
	volatile int64_t t12 = 5682179533664LL;

	t12 = (x49+((x50==x51)<=x52));

	if (t12 != 6738558035099LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -51336327611802616LL;
	uint8_t x55 = UINT8_MAX;
	static volatile uint8_t x56 = 17U;
	static int64_t t13 = 809680026854LL;

	t13 = (x53+((x54==x55)<=x56));

	if (t13 != -51336327611802615LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = 1409441U;
	int16_t x60 = INT16_MAX;
	volatile uint32_t t14 = 19U;

	t14 = (x57+((x58==x59)<=x60));

	if (t14 != 23280U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -2183;
	static int8_t x62 = INT8_MAX;
	int64_t x63 = -1LL;
	int32_t x64 = INT32_MAX;
	int32_t t15 = -1;

	t15 = (x61+((x62==x63)<=x64));

	if (t15 != -2182) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = -13;
	volatile uint64_t x67 = UINT64_MAX;
	int16_t x68 = -1;
	static int32_t t16 = -1551632;

	t16 = (x65+((x66==x67)<=x68));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -34LL;
	static int16_t x70 = 2;
	uint16_t x71 = 1494U;
	int16_t x72 = INT16_MIN;
	int64_t t17 = 366382LL;

	t17 = (x69+((x70==x71)<=x72));

	if (t17 != -34LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	int8_t x74 = 1;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = UINT8_MAX;

	t18 = (x73+((x74==x75)<=x76));

	if (t18 != 65536) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = -14;
	uint16_t x80 = 27979U;
	volatile int32_t t19 = -164;

	t19 = (x77+((x78==x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = INT16_MAX;
	int32_t x83 = -30504959;
	int16_t x84 = -2;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x81+((x82==x83)<=x84));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x87 = 92;
	static int8_t x88 = -3;
	int32_t t21 = -190615;

	t21 = (x85+((x86==x87)<=x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = -976;

	t22 = (x89+((x90==x91)<=x92));

	if (t22 != -5) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -107;
	static volatile uint32_t x94 = UINT32_MAX;
	int32_t x95 = INT32_MAX;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = 0;

	t23 = (x93+((x94==x95)<=x96));

	if (t23 != -106) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int16_t x98 = 1;
	int16_t x99 = INT16_MIN;
	volatile int8_t x100 = INT8_MAX;

	t24 = (x97+((x98==x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	volatile int8_t x103 = INT8_MIN;
	static int64_t x104 = -3481363LL;
	int64_t t25 = INT64_MAX;

	t25 = (x101+((x102==x103)<=x104));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int16_t x106 = -176;
	int8_t x107 = INT8_MIN;
	static int8_t x108 = 19;

	t26 = (x105+((x106==x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = UINT32_MAX;
	int64_t x110 = 307388579LL;
	int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x109+((x110==x111)<=x112));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int32_t x114 = -1;
	static volatile uint16_t x116 = UINT16_MAX;
	int32_t t28 = 506;

	t28 = (x113+((x114==x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t29 = INT32_MAX;

	t29 = (x117+((x118==x119)<=x120));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1045;
	volatile uint16_t x122 = 299U;
	static int16_t x123 = 564;

	t30 = (x121+((x122==x123)<=x124));

	if (t30 != -1044) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	static int8_t x127 = INT8_MIN;
	int32_t t31 = -1;

	t31 = (x125+((x126==x127)<=x128));

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	volatile uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MIN;
	int64_t x132 = INT64_MAX;
	static int32_t t32 = -75;

	t32 = (x129+((x130==x131)<=x132));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -1LL;
	static int16_t x134 = -9441;
	uint8_t x135 = 12U;
	static int8_t x136 = INT8_MIN;
	int64_t t33 = 213853760934LL;

	t33 = (x133+((x134==x135)<=x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int64_t t34 = 211079793945451LL;

	t34 = (x137+((x138==x139)<=x140));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x142 = 3499747LLU;
	static int16_t x143 = 12522;
	uint8_t x144 = UINT8_MAX;
	static volatile uint32_t t35 = 212840676U;

	t35 = (x141+((x142==x143)<=x144));

	if (t35 != 11997524U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 30;
	uint64_t x147 = 16856891079568LLU;
	int16_t x148 = INT16_MIN;

	t36 = (x145+((x146==x147)<=x148));

	if (t36 != 30) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = 7174188LLU;
	int8_t x152 = -1;
	int32_t t37 = 97;

	t37 = (x149+((x150==x151)<=x152));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 2U;
	static volatile uint32_t x154 = UINT32_MAX;
	uint64_t x155 = UINT64_MAX;
	int32_t t38 = 32463982;

	t38 = (x153+((x154==x155)<=x156));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x160 = INT32_MIN;
	int32_t t39 = -5;

	t39 = (x157+((x158==x159)<=x160));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	static int32_t x163 = 2320746;
	int64_t x164 = INT64_MIN;

	t40 = (x161+((x162==x163)<=x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	static int32_t x166 = INT32_MIN;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = -7;
	int32_t t41 = -152221894;

	t41 = (x165+((x166==x167)<=x168));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = UINT16_MAX;
	volatile int32_t x171 = 86051668;

	t42 = (x169+((x170==x171)<=x172));

	if (t42 != 65536) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = -1;
	uint16_t x175 = 0U;
	int64_t x176 = -1LL;
	volatile int32_t t43 = -7136103;

	t43 = (x173+((x174==x175)<=x176));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 1U;
	int16_t x178 = INT16_MIN;
	volatile int64_t x180 = 112625645390349745LL;
	static int32_t t44 = 670;

	t44 = (x177+((x178==x179)<=x180));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	int32_t x182 = -43416835;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t t45 = -251123372;

	t45 = (x181+((x182==x183)<=x184));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x189 = 7721U;
	volatile int16_t x190 = 684;
	volatile int64_t x191 = INT64_MAX;
	volatile int32_t x192 = INT32_MIN;
	uint32_t t46 = 3166U;

	t46 = (x189+((x190==x191)<=x192));

	if (t46 != 7721U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x194 = -1;
	int16_t x195 = 1;
	uint32_t x196 = UINT32_MAX;

	t47 = (x193+((x194==x195)<=x196));

	if (t47 != 25886) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = INT8_MIN;
	static int32_t x198 = 114083974;
	int8_t x199 = INT8_MIN;
	volatile int32_t x200 = -1;

	t48 = (x197+((x198==x199)<=x200));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	int32_t t49 = -306566;

	t49 = (x201+((x202==x203)<=x204));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MAX;
	volatile uint64_t x207 = 10LLU;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x205+((x206==x207)<=x208));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x209 = 66U;
	int8_t x210 = -1;
	volatile int64_t x212 = -1LL;
	int32_t t51 = -203993443;

	t51 = (x209+((x210==x211)<=x212));

	if (t51 != 66) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = INT64_MIN;
	volatile uint32_t x214 = UINT32_MAX;
	int64_t x215 = 5342081158940LL;
	int16_t x216 = -1;
	int64_t t52 = INT64_MIN;

	t52 = (x213+((x214==x215)<=x216));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = -1;
	int8_t x218 = INT8_MIN;
	uint32_t x219 = UINT32_MAX;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t53 = 781342573;

	t53 = (x217+((x218==x219)<=x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	uint8_t x222 = 0U;
	volatile int64_t x223 = -1LL;
	volatile int32_t t54 = -420987004;

	t54 = (x221+((x222==x223)<=x224));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = 6950830;
	int32_t x226 = INT32_MIN;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = 0;

	t55 = (x225+((x226==x227)<=x228));

	if (t55 != 6950831) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x233 = INT8_MIN;
	static int32_t x234 = INT32_MIN;
	volatile int32_t x235 = -22;
	int16_t x236 = INT16_MIN;
	int32_t t56 = -1;

	t56 = (x233+((x234==x235)<=x236));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x237 = -1;
	int8_t x238 = 3;
	int8_t x240 = 4;
	int32_t t57 = -230737;

	t57 = (x237+((x238==x239)<=x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x241 = INT64_MAX;
	uint64_t x242 = 13970292LLU;
	uint64_t x243 = 67681463LLU;
	int8_t x244 = INT8_MIN;
	int64_t t58 = INT64_MAX;

	t58 = (x241+((x242==x243)<=x244));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	static int8_t x246 = -4;
	static volatile uint32_t x247 = UINT32_MAX;
	int64_t x248 = -1LL;
	volatile int32_t t59 = 275;

	t59 = (x245+((x246==x247)<=x248));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x250 = 0;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = 11723U;
	static volatile uint32_t t60 = 103395U;

	t60 = (x249+((x250==x251)<=x252));

	if (t60 != 689U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = INT32_MAX;
	volatile uint16_t x254 = 223U;
	uint32_t x255 = 28326U;
	int8_t x256 = -1;
	volatile int32_t t61 = INT32_MAX;

	t61 = (x253+((x254==x255)<=x256));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 36U;
	volatile uint32_t x258 = 521449011U;
	int32_t x260 = INT32_MAX;
	volatile int32_t t62 = -18;

	t62 = (x257+((x258==x259)<=x260));

	if (t62 != 37) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x261 = 83993U;
	int64_t x262 = INT64_MAX;
	uint32_t x263 = UINT32_MAX;
	uint8_t x264 = UINT8_MAX;
	uint32_t t63 = 0U;

	t63 = (x261+((x262==x263)<=x264));

	if (t63 != 83994U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = 4LLU;
	int16_t x266 = -1;
	int16_t x268 = -1;
	volatile uint64_t t64 = 6555LLU;

	t64 = (x265+((x266==x267)<=x268));

	if (t64 != 4LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 78U;
	int64_t x271 = INT64_MIN;
	uint16_t x272 = UINT16_MAX;
	int32_t t65 = -45628;

	t65 = (x269+((x270==x271)<=x272));

	if (t65 != 79) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x273 = 123466U;
	static int64_t x275 = INT64_MAX;
	uint8_t x276 = 1U;
	uint32_t t66 = 68U;

	t66 = (x273+((x274==x275)<=x276));

	if (t66 != 123467U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = UINT16_MAX;
	int32_t t67 = 1;

	t67 = (x277+((x278==x279)<=x280));

	if (t67 != 28) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = 3LL;
	volatile int64_t x282 = INT64_MIN;
	volatile uint8_t x283 = 60U;
	int8_t x284 = -1;
	int64_t t68 = 184482102449946LL;

	t68 = (x281+((x282==x283)<=x284));

	if (t68 != 3LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x285 = 1U;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MAX;
	int32_t x288 = INT32_MAX;
	static int32_t t69 = -10;

	t69 = (x285+((x286==x287)<=x288));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	static int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;

	t70 = (x289+((x290==x291)<=x292));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = 246431712445LLU;
	static uint8_t x294 = 78U;
	int32_t x296 = -3599;
	uint64_t t71 = 406480867415710472LLU;

	t71 = (x293+((x294==x295)<=x296));

	if (t71 != 246431712445LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	uint8_t x298 = 1U;
	uint32_t x299 = 1035496700U;
	volatile int64_t t72 = INT64_MIN;

	t72 = (x297+((x298==x299)<=x300));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x301 = UINT32_MAX;
	int16_t x302 = -1;
	int8_t x303 = INT8_MIN;
	uint32_t t73 = 50449580U;

	t73 = (x301+((x302==x303)<=x304));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 135230445LLU;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;
	static volatile uint64_t t74 = 4168128LLU;

	t74 = (x305+((x306==x307)<=x308));

	if (t74 != 135230446LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = 18320563;
	static int32_t x310 = -523087264;
	int64_t x312 = -1LL;
	volatile int32_t t75 = -1748;

	t75 = (x309+((x310==x311)<=x312));

	if (t75 != 18320563) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x313 = 8U;
	uint64_t x314 = 3LLU;
	int32_t x315 = INT32_MAX;
	static int32_t t76 = -47661;

	t76 = (x313+((x314==x315)<=x316));

	if (t76 != 8) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -1;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	static uint64_t x320 = UINT64_MAX;

	t77 = (x317+((x318==x319)<=x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MAX;
	static int16_t x324 = 1;
	volatile int32_t t78 = 2005547;

	t78 = (x321+((x322==x323)<=x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = 18961447571908479LL;
	int32_t x326 = 46286794;
	int32_t x327 = -1;
	int32_t x328 = INT32_MAX;
	static volatile int64_t t79 = -1LL;

	t79 = (x325+((x326==x327)<=x328));

	if (t79 != 18961447571908480LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -308579401313LL;
	int8_t x330 = INT8_MIN;
	volatile int64_t x331 = INT64_MIN;

	t80 = (x329+((x330==x331)<=x332));

	if (t80 != -308579401313LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -213213;
	volatile int8_t x334 = -4;
	static uint16_t x336 = 1U;

	t81 = (x333+((x334==x335)<=x336));

	if (t81 != -213212) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = 2458;
	int64_t x339 = -1LL;
	int64_t x340 = INT64_MIN;
	static int32_t t82 = -1;

	t82 = (x337+((x338==x339)<=x340));

	if (t82 != 2458) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x341 = UINT16_MAX;
	volatile int8_t x342 = INT8_MAX;
	static uint64_t x344 = 509452857497LLU;
	volatile int32_t t83 = 1656;

	t83 = (x341+((x342==x343)<=x344));

	if (t83 != 65536) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x349 = -356LL;
	volatile int64_t x350 = INT64_MIN;
	int64_t x352 = 159046150161LL;
	int64_t t84 = 11706LL;

	t84 = (x349+((x350==x351)<=x352));

	if (t84 != -355LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x353 = 1318954U;
	int8_t x354 = INT8_MAX;
	int64_t x355 = -7748585879LL;
	uint32_t t85 = 21898U;

	t85 = (x353+((x354==x355)<=x356));

	if (t85 != 1318955U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x358 = 14U;
	int32_t x359 = 1145;
	static uint64_t x360 = 108899719760696LLU;

	t86 = (x357+((x358==x359)<=x360));

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MAX;
	volatile int16_t x364 = INT16_MAX;
	int32_t t87 = -2586149;

	t87 = (x361+((x362==x363)<=x364));

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x367 = 15;
	uint16_t x368 = UINT16_MAX;
	static int64_t t88 = 13673LL;

	t88 = (x365+((x366==x367)<=x368));

	if (t88 != 1336LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 4995958LLU;
	int8_t x370 = 54;
	int8_t x371 = -1;
	int16_t x372 = INT16_MAX;
	static volatile uint64_t t89 = 1698097495357636LLU;

	t89 = (x369+((x370==x371)<=x372));

	if (t89 != 4995959LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = -1;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = -1;
	int32_t t90 = 66061554;

	t90 = (x373+((x374==x375)<=x376));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = -23;
	static int32_t x378 = -1;
	static uint16_t x379 = 340U;
	static volatile int32_t x380 = -1;
	volatile int32_t t91 = 1;

	t91 = (x377+((x378==x379)<=x380));

	if (t91 != -23) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MAX;
	int64_t x382 = INT64_MIN;
	volatile uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t92 = INT32_MAX;

	t92 = (x381+((x382==x383)<=x384));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x385 = UINT8_MAX;
	static volatile int32_t x386 = INT32_MIN;
	uint64_t x387 = 2158606103880LLU;
	static volatile int32_t t93 = 2519093;

	t93 = (x385+((x386==x387)<=x388));

	if (t93 != 256) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x390 = INT16_MIN;
	static uint32_t x391 = UINT32_MAX;
	int64_t x392 = -247LL;
	int32_t t94 = 10527;

	t94 = (x389+((x390==x391)<=x392));

	if (t94 != -10) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = -1LL;

	t95 = (x393+((x394==x395)<=x396));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = 322U;
	uint64_t x398 = UINT64_MAX;
	volatile uint32_t t96 = 28U;

	t96 = (x397+((x398==x399)<=x400));

	if (t96 != 323U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x402 = UINT8_MAX;
	volatile int16_t x403 = INT16_MIN;
	int64_t x404 = 13010095LL;
	volatile int32_t t97 = -4;

	t97 = (x401+((x402==x403)<=x404));

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MAX;
	int8_t x407 = INT8_MAX;
	volatile int8_t x408 = INT8_MIN;
	static int32_t t98 = 2;

	t98 = (x405+((x406==x407)<=x408));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x409 = -62;
	uint32_t x410 = 6U;
	static int32_t t99 = 405253562;

	t99 = (x409+((x410==x411)<=x412));

	if (t99 != -62) { NG(); } else { ; }
	
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

