#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 1295674U;
int32_t t0 = -790;
int16_t x8 = -179;
uint32_t x12 = 735821U;
static int32_t t2 = 439271;
uint16_t x19 = 4U;
static uint32_t x22 = 58340U;
static volatile int64_t x23 = INT64_MIN;
uint16_t x25 = UINT16_MAX;
static int32_t x29 = INT32_MIN;
volatile int32_t t7 = -8;
int8_t x34 = INT8_MIN;
uint32_t x37 = 8U;
int32_t x43 = INT32_MIN;
volatile uint32_t x49 = UINT32_MAX;
int64_t x58 = INT64_MAX;
int32_t x60 = -270;
uint8_t x61 = 0U;
static volatile uint8_t x63 = UINT8_MAX;
volatile uint32_t x64 = 23U;
uint16_t x68 = 17U;
volatile int32_t t16 = 273682;
static volatile int32_t x70 = INT32_MAX;
int64_t x71 = INT64_MIN;
int32_t t18 = INT32_MAX;
static volatile uint32_t x78 = 2448036U;
uint8_t x80 = UINT8_MAX;
static uint32_t x94 = UINT32_MAX;
volatile int64_t x98 = -1LL;
static volatile int32_t x106 = INT32_MAX;
volatile int64_t x113 = -1LL;
int8_t x116 = INT8_MIN;
int16_t x120 = INT16_MIN;
int16_t x123 = 1;
static int8_t x127 = INT8_MAX;
uint32_t x129 = 2U;
volatile uint32_t x130 = UINT32_MAX;
int64_t x134 = -27569028323846794LL;
static volatile uint16_t x142 = 11U;
static volatile uint32_t x144 = UINT32_MAX;
int8_t x148 = -6;
int32_t t37 = -40379;
int64_t x153 = -1LL;
uint64_t x156 = UINT64_MAX;
int8_t x162 = -1;
uint64_t x164 = 2543723LLU;
int64_t x169 = INT64_MAX;
volatile uint16_t x179 = 3U;
int16_t x180 = INT16_MIN;
volatile int64_t x186 = INT64_MAX;
volatile uint8_t x191 = 2U;
int8_t x194 = 0;
volatile int32_t x200 = 2;
int8_t x203 = INT8_MIN;
int16_t x209 = INT16_MIN;
int16_t x214 = -1;
int32_t t53 = -12760;
uint8_t x229 = UINT8_MAX;
int8_t x233 = INT8_MAX;
volatile int32_t x234 = INT32_MIN;
int32_t x239 = -1;
uint8_t x240 = UINT8_MAX;
int16_t x241 = INT16_MIN;
int16_t x250 = -1;
uint8_t x255 = 26U;
volatile uint64_t x256 = 4680463961LLU;
uint32_t x269 = 50U;
int16_t x272 = 26;
volatile uint64_t x276 = 7080259069947LLU;
static uint8_t x277 = UINT8_MAX;
volatile int8_t x279 = INT8_MIN;
uint8_t x282 = 1U;
uint16_t x292 = UINT16_MAX;
volatile int32_t t74 = 15;
int32_t t76 = 204967;
volatile uint16_t x309 = 25927U;
volatile int32_t x312 = -1;
uint32_t x325 = UINT32_MAX;
int32_t x329 = INT32_MAX;
volatile int64_t x330 = INT64_MIN;
uint8_t x342 = 22U;
int16_t x347 = INT16_MIN;
static int64_t x350 = 27921LL;
uint64_t x351 = 60LLU;
volatile int16_t x366 = INT16_MIN;
uint32_t x367 = 1U;
uint8_t x368 = 11U;
int64_t t93 = INT64_MIN;
int64_t x377 = -3LL;
volatile int64_t x383 = -1LL;
static volatile int32_t t95 = 3268;
int32_t x387 = INT32_MIN;
volatile int32_t t97 = -24;
int32_t t98 = 1201;
int8_t x399 = -1;
int32_t t99 = -1877;


void f0(void) {
	int8_t x1 = 2;
	int8_t x3 = INT8_MAX;
	volatile int16_t x4 = INT16_MIN;

	t0 = (x1*((x2&x3)<x4));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 5;
	static volatile uint64_t x6 = 21590040LLU;
	static int64_t x7 = -17842LL;
	static int32_t t1 = 30134;

	t1 = (x5*((x6&x7)<x8));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int64_t x10 = -1LL;
	volatile uint32_t x11 = UINT32_MAX;

	t2 = (x9*((x10&x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	int8_t x14 = INT8_MIN;
	static volatile int64_t x15 = -133067915948LL;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 38;

	t3 = (x13*((x14&x15)<x16));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MAX;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -787075834485LL;

	t4 = (x17*((x18&x19)<x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x24 = -1;
	volatile int32_t t5 = -2;

	t5 = (x21*((x22&x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x26 = UINT64_MAX;
	uint64_t x27 = 1879544562LLU;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 288686;

	t6 = (x25*((x26&x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -53;
	int32_t x31 = 3182;
	int64_t x32 = -1LL;

	t7 = (x29*((x30&x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int8_t x35 = -2;
	static int16_t x36 = INT16_MAX;
	int32_t t8 = -13;

	t8 = (x33*((x34&x35)<x36));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MIN;
	volatile int64_t x40 = 2144996612346509LL;
	volatile uint32_t t9 = 311U;

	t9 = (x37*((x38&x39)<x40));

	if (t9 != 8U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 11LLU;
	volatile uint32_t x42 = UINT32_MAX;
	int16_t x44 = INT16_MAX;
	volatile uint64_t t10 = 1274724LLU;

	t10 = (x41*((x42&x43)<x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int16_t x46 = -479;
	volatile int64_t x47 = -1LL;
	static int16_t x48 = INT16_MAX;
	volatile int64_t t11 = -14776777052670300LL;

	t11 = (x45*((x46&x47)<x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x50 = INT32_MIN;
	static volatile int8_t x51 = -1;
	uint64_t x52 = UINT64_MAX;
	uint32_t t12 = UINT32_MAX;

	t12 = (x49*((x50&x51)<x52));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	volatile int16_t x54 = -2;
	int16_t x55 = -917;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -42924;

	t13 = (x53*((x54&x55)<x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	int8_t x59 = 18;
	volatile int32_t t14 = 6;

	t14 = (x57*((x58&x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x62 = INT32_MIN;
	int32_t t15 = -39;

	t15 = (x61*((x62&x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static volatile uint64_t x66 = UINT64_MAX;
	int32_t x67 = 60;

	t16 = (x65*((x66&x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile uint64_t x72 = UINT64_MAX;
	volatile int32_t t17 = 0;

	t17 = (x69*((x70&x71)<x72));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MAX;
	uint32_t x74 = 908U;
	static volatile uint64_t x75 = UINT64_MAX;
	uint32_t x76 = UINT32_MAX;

	t18 = (x73*((x74&x75)<x76));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = UINT32_MAX;
	int32_t x79 = -1;
	volatile uint32_t t19 = 629U;

	t19 = (x77*((x78&x79)<x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 118846968746LLU;
	volatile uint16_t x82 = 6U;
	volatile int8_t x83 = -1;
	uint64_t x84 = 1336LLU;
	uint64_t t20 = 34705LLU;

	t20 = (x81*((x82&x83)<x84));

	if (t20 != 118846968746LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int64_t x86 = -46814062LL;
	static int32_t x87 = INT32_MIN;
	volatile int64_t x88 = 3829LL;
	uint32_t t21 = UINT32_MAX;

	t21 = (x85*((x86&x87)<x88));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = 67LL;
	int16_t x91 = INT16_MAX;
	int8_t x92 = 25;
	volatile int32_t t22 = 18530765;

	t22 = (x89*((x90&x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -1;
	volatile int32_t t23 = 12;

	t23 = (x93*((x94&x95)<x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 0U;
	volatile int16_t x99 = 5234;
	volatile uint64_t x100 = 1222LLU;
	int32_t t24 = 3593;

	t24 = (x97*((x98&x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 28U;
	volatile uint32_t x102 = UINT32_MAX;
	uint64_t x103 = 963043811LLU;
	uint8_t x104 = UINT8_MAX;
	static volatile int32_t t25 = 7336970;

	t25 = (x101*((x102&x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint16_t x107 = 283U;
	int32_t x108 = 23410;
	int32_t t26 = INT32_MIN;

	t26 = (x105*((x106&x107)<x108));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int32_t x110 = INT32_MIN;
	volatile int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MIN;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x109*((x110&x111)<x112));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = 0;
	uint16_t x115 = 3902U;
	volatile int64_t t28 = -6832020192606410LL;

	t28 = (x113*((x114&x115)<x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = 482LL;
	volatile int16_t x118 = INT16_MIN;
	uint32_t x119 = UINT32_MAX;
	int64_t t29 = -13708LL;

	t29 = (x117*((x118&x119)<x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 125U;
	int32_t x122 = INT32_MIN;
	int16_t x124 = -1;
	uint32_t t30 = 2048184506U;

	t30 = (x121*((x122&x123)<x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 7263;
	volatile int16_t x126 = INT16_MAX;
	volatile int64_t x128 = -1LL;
	volatile int32_t t31 = 14231359;

	t31 = (x125*((x126&x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x131 = UINT64_MAX;
	int16_t x132 = -3406;
	uint32_t t32 = 3469476U;

	t32 = (x129*((x130&x131)<x132));

	if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MAX;
	volatile uint64_t x135 = 746775587LLU;
	int16_t x136 = -7;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x133*((x134&x135)<x136));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	static volatile int64_t x138 = -1LL;
	volatile int8_t x139 = INT8_MAX;
	int32_t x140 = -3635;
	volatile int64_t t34 = -54LL;

	t34 = (x137*((x138&x139)<x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -1;
	uint64_t x143 = 1576520048908LLU;
	int32_t t35 = -1;

	t35 = (x141*((x142&x143)<x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	volatile int64_t x146 = INT64_MIN;
	static int8_t x147 = -27;
	int32_t t36 = INT32_MIN;

	t36 = (x145*((x146&x147)<x148));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	uint8_t x151 = UINT8_MAX;
	int16_t x152 = INT16_MIN;

	t37 = (x149*((x150&x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 13U;
	int64_t x155 = INT64_MIN;
	static int64_t t38 = 3133753582727LL;

	t38 = (x153*((x154&x155)<x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 1;
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 1508;

	t39 = (x157*((x158&x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	uint32_t x163 = UINT32_MAX;
	int32_t t40 = -263257578;

	t40 = (x161*((x162&x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	volatile int16_t x166 = INT16_MAX;
	static int8_t x167 = -1;
	static volatile int32_t x168 = 0;
	int32_t t41 = -131676921;

	t41 = (x165*((x166&x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = INT8_MAX;
	volatile int8_t x171 = -7;
	int32_t x172 = INT32_MAX;
	volatile int64_t t42 = INT64_MAX;

	t42 = (x169*((x170&x171)<x172));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 0U;
	volatile int64_t x174 = INT64_MAX;
	uint32_t x175 = UINT32_MAX;
	static int64_t x176 = -1LL;
	volatile int32_t t43 = 36789;

	t43 = (x173*((x174&x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	static uint32_t x178 = UINT32_MAX;
	int32_t t44 = -1;

	t44 = (x177*((x178&x179)<x180));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	uint32_t x182 = 396101U;
	int16_t x183 = 58;
	int16_t x184 = -1;
	int32_t t45 = INT32_MIN;

	t45 = (x181*((x182&x183)<x184));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x187 = INT16_MAX;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = 5542037;

	t46 = (x185*((x186&x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 4U;
	int32_t x190 = INT32_MAX;
	volatile uint32_t x192 = UINT32_MAX;
	volatile int32_t t47 = -13;

	t47 = (x189*((x190&x191)<x192));

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	int32_t x195 = 526697;
	int16_t x196 = -179;
	volatile int32_t t48 = 0;

	t48 = (x193*((x194&x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	uint8_t x198 = 1U;
	static int16_t x199 = INT16_MIN;
	volatile int32_t t49 = -31;

	t49 = (x197*((x198&x199)<x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	static int64_t x202 = INT64_MIN;
	int16_t x204 = INT16_MAX;
	int32_t t50 = INT32_MAX;

	t50 = (x201*((x202&x203)<x204));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	uint64_t x206 = UINT64_MAX;
	static uint16_t x207 = UINT16_MAX;
	volatile int16_t x208 = INT16_MIN;
	int32_t t51 = -276;

	t51 = (x205*((x206&x207)<x208));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = -443LL;
	int16_t x211 = -1;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -9139554;

	t52 = (x209*((x210&x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 0;
	int16_t x215 = INT16_MIN;
	int32_t x216 = -1;

	t53 = (x213*((x214&x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = 6821U;
	int64_t x218 = INT64_MIN;
	static int64_t x219 = -1933981259504849132LL;
	static uint16_t x220 = 2U;
	static int32_t t54 = 138822862;

	t54 = (x217*((x218&x219)<x220));

	if (t54 != 6821) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MAX;
	int16_t x222 = INT16_MAX;
	int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	int64_t t55 = -137382240325LL;

	t55 = (x221*((x222&x223)<x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	static int64_t x226 = -1LL;
	int16_t x227 = INT16_MIN;
	static int16_t x228 = 22;
	static int64_t t56 = INT64_MAX;

	t56 = (x225*((x226&x227)<x228));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = 96;
	volatile int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 512355;

	t57 = (x229*((x230&x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x235 = -445;
	uint8_t x236 = 14U;
	int32_t t58 = 31731;

	t58 = (x233*((x234&x235)<x236));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MAX;
	volatile int8_t x238 = -17;
	static int32_t t59 = 15061;

	t59 = (x237*((x238&x239)<x240));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x242 = UINT8_MAX;
	int8_t x243 = INT8_MIN;
	static int8_t x244 = INT8_MIN;
	static volatile int32_t t60 = 0;

	t60 = (x241*((x242&x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 1874968U;
	static int16_t x246 = 10;
	int8_t x247 = INT8_MIN;
	volatile int16_t x248 = INT16_MIN;
	uint32_t t61 = 1310439U;

	t61 = (x245*((x246&x247)<x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int16_t x251 = -1;
	static int16_t x252 = -1;
	volatile int32_t t62 = 81;

	t62 = (x249*((x250&x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int32_t t63 = -5;

	t63 = (x253*((x254&x255)<x256));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int32_t x258 = INT32_MIN;
	int16_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 1;

	t64 = (x257*((x258&x259)<x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 3U;
	static int16_t x262 = -1;
	volatile int16_t x263 = 18;
	uint64_t x264 = UINT64_MAX;
	int32_t t65 = -11765;

	t65 = (x261*((x262&x263)<x264));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static int8_t x266 = INT8_MAX;
	uint16_t x267 = 4740U;
	static uint8_t x268 = 3U;
	static volatile int32_t t66 = 766676;

	t66 = (x265*((x266&x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MAX;
	volatile uint32_t t67 = 1U;

	t67 = (x269*((x270&x271)<x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	static int16_t x274 = INT16_MAX;
	int32_t x275 = INT32_MAX;
	volatile int32_t t68 = -1;

	t68 = (x273*((x274&x275)<x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = INT16_MIN;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -325;

	t69 = (x277*((x278&x279)<x280));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	uint8_t x283 = UINT8_MAX;
	volatile int64_t x284 = -1LL;
	int64_t t70 = 1LL;

	t70 = (x281*((x282&x283)<x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 12U;
	int64_t x286 = -64270748967LL;
	int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MAX;
	static int32_t t71 = 33;

	t71 = (x285*((x286&x287)<x288));

	if (t71 != 12) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 88822609899165819LLU;
	int32_t x290 = INT32_MIN;
	volatile int32_t x291 = INT32_MAX;
	volatile uint64_t t72 = 4LLU;

	t72 = (x289*((x290&x291)<x292));

	if (t72 != 88822609899165819LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int8_t x294 = 33;
	int64_t x295 = INT64_MIN;
	volatile int64_t x296 = -1LL;
	volatile int32_t t73 = 850608789;

	t73 = (x293*((x294&x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile int16_t x298 = INT16_MAX;
	uint32_t x299 = UINT32_MAX;
	static int8_t x300 = -1;

	t74 = (x297*((x298&x299)<x300));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 5384U;
	int16_t x302 = INT16_MIN;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = -27621701;

	t75 = (x301*((x302&x303)<x304));

	if (t75 != 5384) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 117U;
	int32_t x306 = INT32_MIN;
	uint64_t x307 = 3781555307LLU;
	int64_t x308 = INT64_MIN;

	t76 = (x305*((x306&x307)<x308));

	if (t76 != 117) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = 6931LL;
	uint8_t x311 = UINT8_MAX;
	volatile int32_t t77 = -1;

	t77 = (x309*((x310&x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = -1;
	int32_t x314 = INT32_MIN;
	static int64_t x315 = -413261532LL;
	volatile int16_t x316 = -1;
	static int32_t t78 = -53;

	t78 = (x313*((x314&x315)<x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int64_t x318 = INT64_MAX;
	volatile int16_t x319 = 82;
	int32_t x320 = INT32_MAX;
	static int32_t t79 = -932677664;

	t79 = (x317*((x318&x319)<x320));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x321 = 251481144307500LLU;
	static volatile uint16_t x322 = 7848U;
	int64_t x323 = -1LL;
	int8_t x324 = 1;
	volatile uint64_t t80 = 13779827LLU;

	t80 = (x321*((x322&x323)<x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -679;
	static int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	uint32_t t81 = UINT32_MAX;

	t81 = (x325*((x326&x327)<x328));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x331 = INT64_MIN;
	int64_t x332 = -1LL;
	int32_t t82 = INT32_MAX;

	t82 = (x329*((x330&x331)<x332));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 9362452;
	volatile uint8_t x334 = 0U;
	static int16_t x335 = INT16_MIN;
	volatile int8_t x336 = INT8_MAX;
	int32_t t83 = 743813236;

	t83 = (x333*((x334&x335)<x336));

	if (t83 != 9362452) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	uint16_t x338 = UINT16_MAX;
	static volatile int64_t x339 = INT64_MIN;
	volatile uint8_t x340 = 14U;
	static int64_t t84 = INT64_MIN;

	t84 = (x337*((x338&x339)<x340));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -3898;
	volatile int8_t x343 = INT8_MAX;
	int32_t x344 = -466;
	volatile int32_t t85 = 3354162;

	t85 = (x341*((x342&x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MAX;
	int16_t x346 = INT16_MAX;
	int16_t x348 = INT16_MIN;
	static int32_t t86 = -3665453;

	t86 = (x345*((x346&x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x352 = -1;
	int32_t t87 = -435;

	t87 = (x349*((x350&x351)<x352));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int64_t x354 = INT64_MIN;
	uint32_t x355 = 127U;
	int8_t x356 = 22;
	int32_t t88 = 5243;

	t88 = (x353*((x354&x355)<x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	volatile int8_t x358 = -2;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MAX;
	int32_t t89 = 4090;

	t89 = (x357*((x358&x359)<x360));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	static int16_t x362 = 686;
	uint32_t x363 = 75917U;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x361*((x362&x363)<x364));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 32U;
	int32_t t91 = -1;

	t91 = (x365*((x366&x367)<x368));

	if (t91 != 32) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	int64_t x370 = INT64_MIN;
	int64_t x371 = 0LL;
	uint8_t x372 = UINT8_MAX;
	static int32_t t92 = INT32_MAX;

	t92 = (x369*((x370&x371)<x372));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	uint8_t x374 = 1U;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MAX;

	t93 = (x373*((x374&x375)<x376));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	static int16_t x379 = -1;
	int32_t x380 = -1;
	int64_t t94 = 1566830645139LL;

	t94 = (x377*((x378&x379)<x380));

	if (t94 != -3LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -811333202;
	uint64_t x382 = 1355949694341207LLU;
	int16_t x384 = -1;

	t95 = (x381*((x382&x383)<x384));

	if (t95 != -811333202) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MAX;
	int32_t x386 = -1;
	static volatile int8_t x388 = INT8_MAX;
	int32_t t96 = 1659068;

	t96 = (x385*((x386&x387)<x388));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 93U;
	int16_t x390 = INT16_MIN;
	static int32_t x391 = INT32_MIN;
	volatile int8_t x392 = INT8_MIN;

	t97 = (x389*((x390&x391)<x392));

	if (t97 != 93) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	uint8_t x394 = 13U;
	int16_t x395 = -834;
	volatile int8_t x396 = -6;

	t98 = (x393*((x394&x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = 4;
	static int8_t x398 = 1;
	uint8_t x400 = UINT8_MAX;

	t99 = (x397*((x398&x399)<x400));

	if (t99 != 4) { NG(); } else { ; }
	
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

