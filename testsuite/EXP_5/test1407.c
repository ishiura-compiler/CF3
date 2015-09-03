#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = INT64_MAX;
int64_t x5 = 63590LL;
int16_t x11 = -1;
static uint16_t x19 = 31757U;
static int64_t x21 = INT64_MIN;
int32_t x24 = INT32_MIN;
volatile uint32_t t6 = 12743771U;
int16_t x30 = 929;
static int16_t x38 = -158;
int8_t x47 = -1;
static volatile int32_t x50 = -1;
int64_t x51 = INT64_MAX;
int32_t x54 = -6;
static uint64_t x56 = 1619880726427438511LLU;
uint16_t x63 = UINT16_MAX;
uint64_t t15 = 133236159616LLU;
volatile uint8_t x65 = 1U;
static int8_t x70 = INT8_MAX;
int8_t x74 = INT8_MIN;
int32_t t18 = -1012;
static int16_t x80 = -1024;
uint32_t x88 = UINT32_MAX;
volatile int8_t x91 = INT8_MIN;
uint8_t x93 = 41U;
int64_t x94 = -1LL;
uint64_t x98 = 82LLU;
int32_t x99 = INT32_MAX;
int32_t x102 = INT32_MIN;
static int64_t x105 = -1LL;
int32_t x106 = -1;
static int16_t x110 = INT16_MIN;
uint32_t t27 = 996040306U;
int8_t x124 = INT8_MIN;
int32_t x127 = -1;
int16_t x130 = INT16_MIN;
volatile int16_t x131 = -1;
int32_t t32 = INT32_MIN;
volatile int64_t t34 = -66897014635LL;
int64_t x151 = 1692LL;
volatile int32_t t36 = -9;
static int16_t x155 = -1;
int16_t x160 = INT16_MIN;
volatile int16_t x165 = -60;
uint64_t x169 = 76209477063740LLU;
static uint16_t x171 = 9791U;
volatile int32_t x172 = -654;
uint64_t x175 = UINT64_MAX;
int64_t x180 = 33471LL;
int64_t x192 = INT64_MAX;
static int64_t x193 = -1LL;
static int8_t x195 = 29;
volatile int32_t t48 = -3169;
uint32_t x209 = 1857382366U;
int8_t x214 = -1;
volatile int8_t x217 = -1;
uint16_t x218 = 42U;
static int32_t x219 = INT32_MIN;
volatile uint16_t x222 = 14U;
volatile uint32_t t53 = 4429U;
uint8_t x227 = 2U;
int64_t x228 = -1737645423196LL;
int32_t t55 = 1095727;
int16_t x240 = -7;
static uint64_t t58 = 5850599LLU;
int8_t x249 = -1;
uint64_t x261 = 784082380824055LLU;
int8_t x262 = 9;
uint16_t x264 = 74U;
volatile int32_t t64 = INT32_MAX;
int16_t x277 = INT16_MAX;
int32_t t67 = 1179;
uint16_t x290 = 1580U;
uint16_t x297 = UINT16_MAX;
volatile int64_t x300 = 101986933561LL;
int64_t x303 = INT64_MAX;
int32_t x306 = INT32_MIN;
int64_t t74 = -6936231537LL;
volatile int64_t x318 = -3156LL;
int16_t x325 = -7321;
volatile uint8_t x328 = 9U;
volatile int64_t t78 = -5367466938392LL;
volatile uint32_t x333 = UINT32_MAX;
volatile int64_t t80 = 90592066340987LL;
static volatile uint16_t x346 = 10U;
int32_t x347 = -25244;
int64_t t83 = -8816LL;
uint8_t x356 = 2U;
uint64_t x358 = 66245LLU;
static volatile int32_t x361 = 27703;
uint64_t x365 = UINT64_MAX;
int16_t x373 = INT16_MAX;
uint8_t x375 = 0U;
int32_t x376 = 3710114;
uint8_t x378 = 2U;
int8_t x380 = INT8_MAX;
int32_t x381 = INT32_MIN;
volatile uint32_t x384 = 2109179972U;
int64_t x385 = 10104745448LL;
volatile int8_t x387 = INT8_MIN;
volatile int64_t t92 = 5833LL;
int16_t x396 = INT16_MIN;
uint32_t t95 = 2555U;
static volatile int8_t x405 = -27;
static uint32_t t96 = 1145889U;
uint64_t x409 = UINT64_MAX;
volatile uint64_t t98 = 279017448985531LLU;
static int32_t x419 = INT32_MIN;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	static int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MIN;

	t0 = (x1*((x2<x3)%x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = INT64_MAX;
	uint16_t x7 = 6392U;
	static int8_t x8 = -1;
	volatile int64_t t1 = 1LL;

	t1 = (x5*((x6<x7)%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = -1;
	int64_t x12 = -1LL;
	static volatile int64_t t2 = 149627246LL;

	t2 = (x9*((x10<x11)%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	uint64_t x14 = 511963LLU;
	int16_t x15 = INT16_MAX;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -12670983;

	t3 = (x13*((x14<x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int64_t x18 = -18822763302LL;
	volatile uint32_t x20 = 2837896U;
	static uint32_t t4 = 461470474U;

	t4 = (x17*((x18<x19)%x20));

	if (t4 != 4294934528U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	int8_t x23 = INT8_MIN;
	int64_t t5 = -60LL;

	t5 = (x21*((x22<x23)%x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 11038306U;
	volatile int32_t x26 = -19278;
	uint16_t x27 = UINT16_MAX;
	static int16_t x28 = -1;

	t6 = (x25*((x26<x27)%x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x31 = INT32_MAX;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 5413892;

	t7 = (x29*((x30<x31)%x32));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	uint16_t x34 = 29U;
	uint64_t x35 = 801110LLU;
	uint16_t x36 = 28750U;
	volatile int32_t t8 = -16285;

	t8 = (x33*((x34<x35)%x36));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	static volatile int8_t x39 = -1;
	static uint16_t x40 = 4U;
	int64_t t9 = INT64_MAX;

	t9 = (x37*((x38<x39)%x40));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 0;
	uint64_t x42 = UINT64_MAX;
	volatile int64_t x43 = -1LL;
	int64_t x44 = -1LL;
	int64_t t10 = 3828469LL;

	t10 = (x41*((x42<x43)%x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	int64_t x46 = 7LL;
	static uint16_t x48 = UINT16_MAX;
	int32_t t11 = -21938;

	t11 = (x45*((x46<x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 12U;
	int8_t x52 = INT8_MIN;
	static int32_t t12 = -13;

	t12 = (x49*((x50<x51)%x52));

	if (t12 != 12) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 23610U;
	volatile uint8_t x55 = 0U;
	volatile uint64_t t13 = 11108644071LLU;

	t13 = (x53*((x54<x55)%x56));

	if (t13 != 23610LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 1LLU;
	static volatile int64_t x58 = -1LL;
	int64_t x59 = 2233749896LL;
	uint32_t x60 = 242956U;
	uint64_t t14 = 49254LLU;

	t14 = (x57*((x58<x59)%x60));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 2290005LLU;
	int8_t x62 = 29;
	uint16_t x64 = 3381U;

	t15 = (x61*((x62<x63)%x64));

	if (t15 != 2290005LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 12075;
	static volatile int64_t x67 = 2084990002025LL;
	uint64_t x68 = 3LLU;
	volatile uint64_t t16 = 392LLU;

	t16 = (x65*((x66<x67)%x68));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 41U;
	volatile int8_t x71 = INT8_MIN;
	uint32_t x72 = 18751U;
	static uint32_t t17 = 1000766301U;

	t17 = (x69*((x70<x71)%x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 1U;
	int16_t x75 = 42;
	static int16_t x76 = INT16_MIN;

	t18 = (x73*((x74<x75)%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MIN;
	static volatile int8_t x79 = INT8_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = (x77*((x78<x79)%x80));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = 0U;
	static uint64_t x86 = 272580835771918LLU;
	int16_t x87 = 1;
	volatile uint32_t t20 = 0U;

	t20 = (x85*((x86<x87)%x88));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = 228862U;
	static volatile uint64_t x92 = 2841588881LLU;
	volatile uint64_t t21 = 22LLU;

	t21 = (x89*((x90<x91)%x92));

	if (t21 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x95 = -1;
	int32_t x96 = INT32_MIN;
	int32_t t22 = 62718;

	t22 = (x93*((x94<x95)%x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -1;
	int8_t x100 = INT8_MIN;
	static int32_t t23 = 70489680;

	t23 = (x97*((x98<x99)%x100));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x101 = UINT32_MAX;
	uint32_t x103 = 136U;
	int8_t x104 = -14;
	static uint32_t t24 = 97U;

	t24 = (x101*((x102<x103)%x104));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x107 = INT16_MAX;
	volatile int16_t x108 = INT16_MAX;
	volatile int64_t t25 = 39082698875LL;

	t25 = (x105*((x106<x107)%x108));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x109 = 96321362U;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -147218293477LL;
	int64_t t26 = -575440213601LL;

	t26 = (x109*((x110<x111)%x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 1971736592U;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = 2U;
	uint16_t x116 = 858U;

	t27 = (x113*((x114<x115)%x116));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = 359;
	volatile int16_t x118 = 1;
	int32_t x119 = INT32_MIN;
	static uint32_t x120 = UINT32_MAX;
	volatile uint32_t t28 = 15U;

	t28 = (x117*((x118<x119)%x120));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -732LL;
	uint32_t x122 = 430274U;
	int16_t x123 = INT16_MIN;
	volatile int64_t t29 = -4110033457LL;

	t29 = (x121*((x122<x123)%x124));

	if (t29 != -732LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	volatile int16_t x126 = INT16_MIN;
	int8_t x128 = INT8_MAX;
	static volatile int32_t t30 = -30;

	t30 = (x125*((x126<x127)%x128));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = INT64_MIN;
	int64_t x132 = INT64_MIN;
	int64_t t31 = INT64_MIN;

	t31 = (x129*((x130<x131)%x132));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = INT32_MIN;
	static int64_t x134 = INT64_MIN;
	int8_t x135 = 1;
	int32_t x136 = -5;

	t32 = (x133*((x134<x135)%x136));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	static volatile int64_t x138 = 1LL;
	int8_t x139 = INT8_MIN;
	int32_t x140 = -1;
	int32_t t33 = -429978382;

	t33 = (x137*((x138<x139)%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 1U;
	int16_t x142 = INT16_MAX;
	uint16_t x143 = 4261U;
	int64_t x144 = -25232LL;

	t34 = (x141*((x142<x143)%x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = INT8_MAX;
	int32_t x146 = -1;
	int16_t x147 = INT16_MIN;
	static uint64_t x148 = UINT64_MAX;
	volatile uint64_t t35 = 20523LLU;

	t35 = (x145*((x146<x147)%x148));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = -1;
	uint16_t x150 = 363U;
	int8_t x152 = 1;

	t36 = (x149*((x150<x151)%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x153 = 444841685U;
	int64_t x154 = 279062LL;
	int8_t x156 = -1;
	volatile uint32_t t37 = 28320U;

	t37 = (x153*((x154<x155)%x156));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = INT64_MAX;
	static int32_t x158 = INT32_MAX;
	uint16_t x159 = 3U;
	int64_t t38 = 22736762281LL;

	t38 = (x157*((x158<x159)%x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 67549420533859970LLU;
	uint32_t x162 = 83084762U;
	int8_t x163 = INT8_MAX;
	volatile int64_t x164 = INT64_MIN;
	volatile uint64_t t39 = 10506596LLU;

	t39 = (x161*((x162<x163)%x164));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x166 = 2U;
	uint32_t x167 = 11401129U;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t40 = 92475544;

	t40 = (x165*((x166<x167)%x168));

	if (t40 != -60) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x170 = -8;
	volatile uint64_t t41 = 183723883602738LLU;

	t41 = (x169*((x170<x171)%x172));

	if (t41 != 76209477063740LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -16241;
	volatile uint32_t x174 = UINT32_MAX;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t42 = -4;

	t42 = (x173*((x174<x175)%x176));

	if (t42 != -16241) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = -1;
	static int64_t x178 = INT64_MAX;
	int32_t x179 = -4722;
	volatile int64_t t43 = -38LL;

	t43 = (x177*((x178<x179)%x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -35450994;
	int64_t x182 = INT64_MAX;
	volatile int8_t x183 = -19;
	int16_t x184 = -15;
	volatile int32_t t44 = -89096;

	t44 = (x181*((x182<x183)%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;
	int32_t x186 = INT32_MIN;
	static volatile uint16_t x187 = UINT16_MAX;
	int16_t x188 = 460;
	volatile int32_t t45 = INT32_MAX;

	t45 = (x185*((x186<x187)%x188));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = -8795991594LL;
	int32_t x190 = -1;
	static int8_t x191 = -1;
	int64_t t46 = 197LL;

	t46 = (x189*((x190<x191)%x192));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x194 = -1886442454LL;
	uint32_t x196 = 3053U;
	volatile int64_t t47 = -3421502551783946657LL;

	t47 = (x193*((x194<x195)%x196));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -22867595;
	static volatile uint8_t x198 = 4U;
	static uint16_t x199 = 28810U;
	uint16_t x200 = 9U;

	t48 = (x197*((x198<x199)%x200));

	if (t48 != -22867595) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x202 = UINT8_MAX;
	static volatile int64_t x203 = INT64_MIN;
	uint16_t x204 = UINT16_MAX;
	int64_t t49 = -145096LL;

	t49 = (x201*((x202<x203)%x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x210 = 12U;
	int16_t x211 = -1;
	static int32_t x212 = 122392;
	volatile uint32_t t50 = 0U;

	t50 = (x209*((x210<x211)%x212));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -116194871356LL;
	uint32_t x215 = 69512155U;
	int16_t x216 = -326;
	volatile int64_t t51 = -166118198LL;

	t51 = (x213*((x214<x215)%x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x220 = 1U;
	volatile int32_t t52 = 30249;

	t52 = (x217*((x218<x219)%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x221 = UINT8_MAX;
	static volatile uint8_t x223 = UINT8_MAX;
	uint32_t x224 = UINT32_MAX;

	t53 = (x221*((x222<x223)%x224));

	if (t53 != 255U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = -1;
	volatile int32_t x226 = 831;
	volatile int64_t t54 = -2219657LL;

	t54 = (x225*((x226<x227)%x228));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MAX;
	int64_t x230 = INT64_MAX;
	uint64_t x231 = 799181050LLU;
	int32_t x232 = INT32_MAX;

	t55 = (x229*((x230<x231)%x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	int16_t x234 = INT16_MAX;
	int32_t x235 = -76;
	int64_t x236 = -3613662LL;
	static volatile int64_t t56 = 41551898LL;

	t56 = (x233*((x234<x235)%x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x237 = UINT8_MAX;
	int64_t x238 = -8033742029159LL;
	int64_t x239 = -1LL;
	int32_t t57 = -16467799;

	t57 = (x237*((x238<x239)%x240));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int64_t x242 = 3803369366LL;
	uint8_t x243 = 0U;
	int64_t x244 = 178708675320747200LL;

	t58 = (x241*((x242<x243)%x244));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x245 = 2869U;
	uint32_t x246 = 972973392U;
	uint16_t x247 = 2U;
	uint64_t x248 = 70438407330451641LLU;
	volatile uint64_t t59 = 12805207832432LLU;

	t59 = (x245*((x246<x247)%x248));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	int8_t x252 = -1;
	int32_t t60 = 0;

	t60 = (x249*((x250<x251)%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x253 = 1692816390521186161LLU;
	int32_t x254 = INT32_MIN;
	volatile int64_t x255 = 10552LL;
	int16_t x256 = 54;
	uint64_t t61 = 202645907LLU;

	t61 = (x253*((x254<x255)%x256));

	if (t61 != 1692816390521186161LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = 13697U;
	int32_t x258 = INT32_MIN;
	uint8_t x259 = 4U;
	uint32_t x260 = UINT32_MAX;
	static uint32_t t62 = 1018819922U;

	t62 = (x257*((x258<x259)%x260));

	if (t62 != 13697U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x263 = INT64_MAX;
	uint64_t t63 = 276245LLU;

	t63 = (x261*((x262<x263)%x264));

	if (t63 != 784082380824055LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MAX;
	static volatile uint16_t x266 = UINT16_MAX;
	static volatile int64_t x267 = INT64_MAX;
	uint16_t x268 = 3718U;

	t64 = (x265*((x266<x267)%x268));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x269 = 123U;
	int8_t x270 = -1;
	int16_t x271 = INT16_MAX;
	int64_t x272 = -1LL;
	int64_t t65 = 971621379LL;

	t65 = (x269*((x270<x271)%x272));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x273 = -1LL;
	int16_t x274 = -1;
	int8_t x275 = 13;
	uint8_t x276 = 1U;
	int64_t t66 = 229LL;

	t66 = (x273*((x274<x275)%x276));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x278 = UINT32_MAX;
	static int16_t x279 = INT16_MIN;
	int16_t x280 = -5318;

	t67 = (x277*((x278<x279)%x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x281 = INT8_MAX;
	uint8_t x282 = UINT8_MAX;
	static uint8_t x283 = 1U;
	static uint16_t x284 = UINT16_MAX;
	volatile int32_t t68 = -657790064;

	t68 = (x281*((x282<x283)%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = INT32_MAX;
	int32_t t69 = -51924;

	t69 = (x289*((x290<x291)%x292));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x298 = 0U;
	uint64_t x299 = 124641714LLU;
	volatile int64_t t70 = -714493LL;

	t70 = (x297*((x298<x299)%x300));

	if (t70 != 65535LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = UINT8_MAX;
	int64_t x302 = INT64_MAX;
	uint8_t x304 = 40U;
	int32_t t71 = 230;

	t71 = (x301*((x302<x303)%x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x305 = INT8_MIN;
	volatile uint32_t x307 = 2675U;
	volatile int16_t x308 = INT16_MIN;
	int32_t t72 = 3625;

	t72 = (x305*((x306<x307)%x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = UINT8_MAX;
	int64_t x310 = 61LL;
	int32_t x311 = -1;
	volatile uint16_t x312 = UINT16_MAX;
	volatile int32_t t73 = -202;

	t73 = (x309*((x310<x311)%x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x313 = 174U;
	int64_t x314 = 15444LL;
	static int16_t x315 = INT16_MIN;
	static volatile int64_t x316 = -1LL;

	t74 = (x313*((x314<x315)%x316));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = -1;
	int32_t x319 = INT32_MIN;
	int16_t x320 = 2;
	int32_t t75 = -1156;

	t75 = (x317*((x318<x319)%x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = 4U;
	volatile uint8_t x324 = 10U;
	volatile int64_t t76 = INT64_MAX;

	t76 = (x321*((x322<x323)%x324));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x326 = -1549251;
	volatile int64_t x327 = -1LL;
	int32_t t77 = -91149197;

	t77 = (x325*((x326<x327)%x328));

	if (t77 != -7321) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = -1;
	int16_t x330 = INT16_MIN;
	static int64_t x331 = -1LL;
	int64_t x332 = -643383493046838LL;

	t78 = (x329*((x330<x331)%x332));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x334 = 29U;
	int8_t x335 = INT8_MIN;
	static volatile int32_t x336 = -1;
	volatile uint32_t t79 = 1512U;

	t79 = (x333*((x334<x335)%x336));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = -1LL;
	int8_t x338 = -1;
	int16_t x339 = INT16_MAX;
	static int32_t x340 = INT32_MIN;

	t80 = (x337*((x338<x339)%x340));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 22038U;
	int16_t x342 = -1;
	static int8_t x343 = INT8_MIN;
	int16_t x344 = -3765;
	volatile int32_t t81 = 0;

	t81 = (x341*((x342<x343)%x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MAX;
	static int32_t x348 = INT32_MIN;
	volatile int32_t t82 = -212598;

	t82 = (x345*((x346<x347)%x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MAX;
	volatile int32_t x350 = -7352402;
	volatile uint8_t x351 = 38U;
	int64_t x352 = INT64_MAX;

	t83 = (x349*((x350<x351)%x352));

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x353 = 0;
	static volatile int16_t x354 = INT16_MIN;
	int16_t x355 = -1;
	volatile int32_t t84 = 2984;

	t84 = (x353*((x354<x355)%x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x357 = INT32_MIN;
	volatile int32_t x359 = 0;
	int64_t x360 = INT64_MIN;
	volatile int64_t t85 = 389646168523LL;

	t85 = (x357*((x358<x359)%x360));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MAX;
	static uint8_t x364 = 1U;
	int32_t t86 = -10302;

	t86 = (x361*((x362<x363)%x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = INT64_MIN;
	static int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	static uint64_t t87 = UINT64_MAX;

	t87 = (x365*((x366<x367)%x368));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	volatile int32_t x371 = -1;
	uint16_t x372 = UINT16_MAX;
	int32_t t88 = 1933;

	t88 = (x369*((x370<x371)%x372));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x374 = 15989LLU;
	volatile int32_t t89 = 3010778;

	t89 = (x373*((x374<x375)%x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -118;
	volatile int64_t x379 = INT64_MIN;
	static int32_t t90 = -19454;

	t90 = (x377*((x378<x379)%x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x382 = INT32_MAX;
	int8_t x383 = 0;
	uint32_t t91 = 2823U;

	t91 = (x381*((x382<x383)%x384));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x386 = 0U;
	int32_t x388 = 11976;

	t92 = (x385*((x386<x387)%x388));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = INT64_MIN;
	int32_t x390 = -1;
	uint8_t x391 = 0U;
	static int64_t x392 = 919LL;
	int64_t t93 = INT64_MIN;

	t93 = (x389*((x390<x391)%x392));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = UINT8_MAX;
	int32_t x394 = INT32_MIN;
	uint8_t x395 = 60U;
	static int32_t t94 = -14369;

	t94 = (x393*((x394<x395)%x396));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = -1;
	int16_t x402 = -57;
	int32_t x403 = INT32_MIN;
	volatile uint32_t x404 = UINT32_MAX;

	t95 = (x401*((x402<x403)%x404));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x406 = UINT8_MAX;
	volatile int8_t x407 = 30;
	uint32_t x408 = 18U;

	t96 = (x405*((x406<x407)%x408));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x410 = UINT8_MAX;
	int64_t x411 = 1411710680LL;
	int8_t x412 = -1;
	uint64_t t97 = 22093871234LLU;

	t97 = (x409*((x410<x411)%x412));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x413 = 2;
	volatile int8_t x414 = 11;
	uint64_t x415 = UINT64_MAX;
	volatile uint64_t x416 = UINT64_MAX;

	t98 = (x413*((x414<x415)%x416));

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = -40;
	int64_t x418 = INT64_MIN;
	int16_t x420 = -144;
	volatile int32_t t99 = 1;

	t99 = (x417*((x418<x419)%x420));

	if (t99 != -40) { NG(); } else { ; }
	
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

