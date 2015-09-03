#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
int64_t x7 = INT64_MAX;
int32_t t1 = -16;
uint32_t x13 = UINT32_MAX;
int32_t x27 = INT32_MIN;
int64_t x28 = INT64_MIN;
static int32_t t8 = 34057351;
uint32_t x40 = 51212767U;
static volatile uint32_t x42 = UINT32_MAX;
static volatile int16_t x48 = INT16_MIN;
volatile uint32_t t11 = 0U;
int8_t x50 = INT8_MIN;
volatile int64_t x53 = INT64_MIN;
int32_t x58 = 22;
uint64_t x66 = UINT64_MAX;
volatile int8_t x79 = INT8_MAX;
uint16_t x88 = 16U;
int64_t x90 = 2787LL;
static volatile uint8_t x96 = 0U;
int8_t x112 = INT8_MAX;
int8_t x116 = -6;
volatile int64_t t30 = 751LL;
volatile uint16_t x125 = UINT16_MAX;
uint32_t x127 = 16304236U;
static int16_t x133 = -1;
int8_t x134 = -1;
static uint16_t x136 = UINT16_MAX;
uint64_t x138 = 130078LLU;
static volatile uint64_t x140 = 801218008915700631LLU;
volatile int32_t t34 = -724120625;
int64_t x145 = INT64_MAX;
static int8_t x147 = 46;
uint32_t x153 = UINT32_MAX;
uint64_t x155 = 1036978LLU;
int32_t x159 = 810737;
int64_t x162 = 1LL;
int8_t x163 = INT8_MIN;
volatile uint8_t x167 = 55U;
int32_t x168 = INT32_MIN;
int32_t t41 = 1665175;
int32_t x169 = INT32_MAX;
uint32_t x181 = 966087U;
int8_t x186 = -1;
static int64_t x202 = INT64_MIN;
int64_t x203 = -1LL;
volatile int64_t t50 = -74164599000619905LL;
int32_t x207 = -1;
volatile uint32_t x215 = 11531380U;
int32_t x216 = 3140;
uint8_t x220 = 1U;
static int32_t t54 = 438478;
int64_t x221 = 197LL;
int64_t x224 = INT64_MIN;
int64_t t55 = 1935080611LL;
int16_t x230 = -1;
uint64_t x231 = UINT64_MAX;
int64_t x233 = -7355162670223237LL;
uint32_t x236 = 941U;
int16_t x239 = -1;
static volatile int32_t t59 = -3665;
int64_t t61 = 662796366917644LL;
volatile uint64_t x256 = 359387LLU;
int32_t x257 = 3;
volatile int8_t x272 = -1;
int32_t t69 = -23;
int32_t x281 = 33286689;
int16_t x282 = -11631;
static uint8_t x290 = UINT8_MAX;
uint32_t x291 = 109761U;
int32_t x300 = INT32_MAX;
volatile int32_t t74 = -2;
int64_t x302 = 1432352543205895999LL;
int8_t x303 = -6;
volatile int8_t x304 = 1;
int32_t x308 = -235;
volatile int32_t t76 = -3790;
volatile int16_t x309 = 104;
static volatile uint64_t x319 = 7995835894334003447LLU;
int32_t t79 = 71;
volatile int8_t x327 = INT8_MIN;
static int32_t x341 = -1;
uint16_t x342 = 84U;
int16_t x344 = INT16_MIN;
int32_t x354 = INT32_MAX;
volatile int16_t x355 = INT16_MAX;
uint32_t x358 = 58U;
volatile int32_t t89 = 658;
uint64_t x361 = UINT64_MAX;
volatile uint64_t t90 = UINT64_MAX;
uint16_t x365 = UINT16_MAX;
int8_t x372 = -1;
int32_t x374 = 6779;
uint32_t x376 = 14517U;
volatile int32_t t93 = 1081;
int8_t x379 = INT8_MAX;
int64_t x380 = INT64_MIN;
int64_t x383 = INT64_MIN;
int32_t x385 = -1;
int32_t x392 = -1;
volatile int32_t t97 = -47826;
volatile int32_t t98 = 293;
int32_t x399 = -190255;
static int32_t x400 = INT32_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int16_t x2 = 7;
	uint16_t x3 = 16U;
	static volatile int32_t t0 = -837053742;

	t0 = (x1*((x2<x3)<x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 4U;
	int32_t x6 = -1;
	static int8_t x8 = INT8_MIN;

	t1 = (x5*((x6<x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 213455;
	uint64_t x10 = UINT64_MAX;
	static int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 0;

	t2 = (x9*((x10<x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	static volatile int8_t x15 = 0;
	static uint32_t x16 = 11867U;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x13*((x14<x15)<x16));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MAX;
	uint32_t x18 = UINT32_MAX;
	static int16_t x19 = -343;
	volatile uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x17*((x18<x19)<x20));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -42;
	static uint32_t x22 = 280513U;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 13;

	t5 = (x21*((x22<x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	int16_t x26 = INT16_MIN;
	uint32_t t6 = 625526837U;

	t6 = (x25*((x26<x27)<x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int16_t x30 = 7;
	volatile uint16_t x31 = UINT16_MAX;
	int16_t x32 = 14358;
	volatile int32_t t7 = INT32_MIN;

	t7 = (x29*((x30<x31)<x32));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	uint64_t x36 = UINT64_MAX;

	t8 = (x33*((x34<x35)<x36));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint16_t x38 = 21803U;
	static int32_t x39 = -1;
	int32_t t9 = 39641191;

	t9 = (x37*((x38<x39)<x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	static int8_t x43 = INT8_MIN;
	int8_t x44 = -1;
	static volatile int64_t t10 = -2949560663478830LL;

	t10 = (x41*((x42<x43)<x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 0U;
	static int64_t x46 = -2255907531LL;
	static int64_t x47 = INT64_MAX;

	t11 = (x45*((x46<x47)<x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	uint32_t x51 = UINT32_MAX;
	static int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 5750611;

	t12 = (x49*((x50<x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	volatile int64_t x55 = -3701439LL;
	int32_t x56 = 1941;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x53*((x54<x55)<x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -2;
	uint32_t x59 = 1766093U;
	int16_t x60 = 177;
	volatile int32_t t14 = -206;

	t14 = (x57*((x58<x59)<x60));

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = -1;
	volatile uint32_t x63 = 3U;
	uint32_t x64 = UINT32_MAX;
	static int64_t t15 = INT64_MIN;

	t15 = (x61*((x62<x63)<x64));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	static int32_t x67 = -545107;
	int32_t x68 = 13491;
	int32_t t16 = INT32_MAX;

	t16 = (x65*((x66<x67)<x68));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = UINT16_MAX;
	static int32_t x72 = INT32_MAX;
	volatile int32_t t17 = -1;

	t17 = (x69*((x70<x71)<x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 3141LLU;
	int8_t x74 = INT8_MIN;
	static volatile uint16_t x75 = 0U;
	uint8_t x76 = 84U;
	volatile uint64_t t18 = 31439405099LLU;

	t18 = (x73*((x74<x75)<x76));

	if (t18 != 3141LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = -1;
	int64_t x80 = INT64_MIN;
	static volatile int32_t t19 = 130714924;

	t19 = (x77*((x78<x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static uint32_t x82 = 1020U;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MIN;
	volatile int64_t t20 = 215342744142985LL;

	t20 = (x81*((x82<x83)<x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	uint64_t x86 = 523694LLU;
	int16_t x87 = -129;
	int32_t t21 = 976409;

	t21 = (x85*((x86<x87)<x88));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = INT64_MIN;
	volatile int16_t x91 = -1;
	int16_t x92 = INT16_MIN;
	int64_t t22 = 3753LL;

	t22 = (x89*((x90<x91)<x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -1;
	uint16_t x94 = 5680U;
	uint32_t x95 = 48665508U;
	volatile int32_t t23 = 368;

	t23 = (x93*((x94<x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 26U;
	volatile uint16_t x98 = 5484U;
	static int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	int32_t t24 = 190601313;

	t24 = (x97*((x98<x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x102 = 7;
	volatile int8_t x103 = -1;
	int16_t x104 = INT16_MIN;
	int32_t t25 = 232712152;

	t25 = (x101*((x102<x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static int16_t x106 = INT16_MIN;
	volatile int64_t x107 = 12202617379514LL;
	int32_t x108 = INT32_MAX;
	volatile int64_t t26 = INT64_MIN;

	t26 = (x105*((x106<x107)<x108));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	static int64_t x110 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	int32_t t27 = -4910018;

	t27 = (x109*((x110<x111)<x112));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 10U;
	uint16_t x114 = UINT16_MAX;
	static uint32_t x115 = UINT32_MAX;
	volatile int32_t t28 = -4018;

	t28 = (x113*((x114<x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = 21;
	static uint8_t x118 = 5U;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = 26LL;
	volatile int32_t t29 = 0;

	t29 = (x117*((x118<x119)<x120));

	if (t29 != 21) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 1032LL;
	int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MIN;
	volatile int8_t x124 = 0;

	t30 = (x121*((x122<x123)<x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 1313137684U;
	static uint64_t x128 = UINT64_MAX;
	int32_t t31 = -968579877;

	t31 = (x125*((x126<x127)<x128));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x130 = 18122663270LL;
	static uint64_t x131 = UINT64_MAX;
	volatile int64_t x132 = 227242194355LL;
	uint32_t t32 = UINT32_MAX;

	t32 = (x129*((x130<x131)<x132));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x135 = INT32_MIN;
	static int32_t t33 = 95658;

	t33 = (x133*((x134<x135)<x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -1;
	volatile int64_t x139 = 410910291LL;

	t34 = (x137*((x138<x139)<x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int8_t x142 = 30;
	uint8_t x143 = 35U;
	uint16_t x144 = 55U;
	int32_t t35 = 27569472;

	t35 = (x141*((x142<x143)<x144));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = -1LL;
	int8_t x148 = INT8_MIN;
	volatile int64_t t36 = 468064LL;

	t36 = (x145*((x146<x147)<x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -11;
	volatile uint32_t x150 = 147808611U;
	int16_t x151 = -1;
	int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 158;

	t37 = (x149*((x150<x151)<x152));

	if (t37 != -11) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 10U;
	volatile int8_t x156 = -1;
	volatile uint32_t t38 = 862245U;

	t38 = (x153*((x154<x155)<x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1040;
	volatile uint64_t x158 = 264824740143962LLU;
	int8_t x160 = -1;
	static int32_t t39 = -1;

	t39 = (x157*((x158<x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = 304698LL;
	int64_t x164 = INT64_MAX;
	volatile int64_t t40 = 35755LL;

	t40 = (x161*((x162<x163)<x164));

	if (t40 != 304698LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint32_t x166 = 2U;

	t41 = (x165*((x166<x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = 0;
	int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MAX;
	int32_t t42 = INT32_MAX;

	t42 = (x169*((x170<x171)<x172));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = 770;
	uint8_t x174 = UINT8_MAX;
	int32_t x175 = 973861;
	static int64_t x176 = -39321158LL;
	static volatile int32_t t43 = -1417572;

	t43 = (x173*((x174<x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MIN;
	int32_t x179 = 2;
	static volatile uint16_t x180 = 11U;
	int32_t t44 = 9981414;

	t44 = (x177*((x178<x179)<x180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = 607650591342474192LL;
	static int32_t x183 = -58;
	int16_t x184 = -1;
	volatile uint32_t t45 = 17798686U;

	t45 = (x181*((x182<x183)<x184));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 29274600LL;
	int64_t x187 = -1LL;
	volatile uint32_t x188 = 10U;
	static volatile int64_t t46 = 84409LL;

	t46 = (x185*((x186<x187)<x188));

	if (t46 != 29274600LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	static int32_t x190 = INT32_MAX;
	int64_t x191 = -1LL;
	uint16_t x192 = UINT16_MAX;
	volatile int64_t t47 = 1742056LL;

	t47 = (x189*((x190<x191)<x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int64_t x194 = 1070706071301498LL;
	static int8_t x195 = INT8_MAX;
	static int64_t x196 = -1008536181900LL;
	int32_t t48 = 276541945;

	t48 = (x193*((x194<x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	static uint16_t x198 = 0U;
	uint8_t x199 = UINT8_MAX;
	uint64_t x200 = UINT64_MAX;
	static int32_t t49 = -227;

	t49 = (x197*((x198<x199)<x200));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 6422667789LL;
	uint32_t x204 = 3920U;

	t50 = (x201*((x202<x203)<x204));

	if (t50 != 6422667789LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 65;

	t51 = (x205*((x206<x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x209 = 7884679;
	volatile int8_t x210 = INT8_MIN;
	uint32_t x211 = UINT32_MAX;
	volatile int64_t x212 = INT64_MIN;
	int32_t t52 = -2;

	t52 = (x209*((x210<x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	volatile int8_t x214 = -1;
	static volatile int32_t t53 = -644510896;

	t53 = (x213*((x214<x215)<x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -1;
	static int32_t x218 = -1;
	int32_t x219 = INT32_MIN;

	t54 = (x217*((x218<x219)<x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x222 = INT8_MAX;
	uint8_t x223 = UINT8_MAX;

	t55 = (x221*((x222<x223)<x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	uint8_t x227 = 3U;
	static volatile uint16_t x228 = UINT16_MAX;
	volatile int64_t t56 = INT64_MIN;

	t56 = (x225*((x226<x227)<x228));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = 1;
	int8_t x232 = -1;
	volatile int32_t t57 = 188;

	t57 = (x229*((x230<x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x234 = INT64_MIN;
	uint32_t x235 = 51532U;
	volatile int64_t t58 = 211270648461085928LL;

	t58 = (x233*((x234<x235)<x236));

	if (t58 != -7355162670223237LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	static int64_t x238 = 5492289320092LL;
	uint16_t x240 = 20U;

	t59 = (x237*((x238<x239)<x240));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = -2365;
	volatile int8_t x243 = -3;
	int32_t x244 = INT32_MAX;
	int64_t t60 = INT64_MIN;

	t60 = (x241*((x242<x243)<x244));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 19856LL;
	static uint16_t x246 = 26710U;
	static volatile int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MIN;

	t61 = (x245*((x246<x247)<x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	int32_t x250 = -1;
	volatile uint16_t x251 = UINT16_MAX;
	int8_t x252 = -1;
	int32_t t62 = -534080;

	t62 = (x249*((x250<x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -10;
	volatile int64_t x254 = INT64_MAX;
	int64_t x255 = INT64_MAX;
	int32_t t63 = -22198959;

	t63 = (x253*((x254<x255)<x256));

	if (t63 != -10) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MAX;
	int64_t x259 = -18926884LL;
	int16_t x260 = -1;
	static int32_t t64 = -115069;

	t64 = (x257*((x258<x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MAX;
	volatile int32_t x263 = INT32_MAX;
	static uint8_t x264 = 0U;
	int32_t t65 = -3;

	t65 = (x261*((x262<x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 1795675LLU;
	volatile int16_t x266 = INT16_MIN;
	static int64_t x267 = 966027047181986LL;
	volatile uint32_t x268 = 58644U;
	volatile uint64_t t66 = 22LLU;

	t66 = (x265*((x266<x267)<x268));

	if (t66 != 1795675LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x270 = INT64_MIN;
	static uint16_t x271 = UINT16_MAX;
	volatile uint64_t t67 = 1823676377383LLU;

	t67 = (x269*((x270<x271)<x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = 3;
	int32_t x274 = INT32_MIN;
	int8_t x275 = -1;
	int8_t x276 = -31;
	volatile int32_t t68 = 353272140;

	t68 = (x273*((x274<x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = INT8_MIN;
	int16_t x278 = -1;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = 38;

	t69 = (x277*((x278<x279)<x280));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x283 = -1LL;
	static int32_t x284 = INT32_MIN;
	static volatile int32_t t70 = -1;

	t70 = (x281*((x282<x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	uint32_t x286 = 47118652U;
	uint64_t x287 = UINT64_MAX;
	static int16_t x288 = INT16_MIN;
	static uint64_t t71 = 31LLU;

	t71 = (x285*((x286<x287)<x288));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 15U;
	volatile int8_t x292 = -24;
	volatile int32_t t72 = -1;

	t72 = (x289*((x290<x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = INT16_MIN;
	volatile int32_t x294 = 5;
	static int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = -3375;

	t73 = (x293*((x294<x295)<x296));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 28U;
	uint16_t x298 = 17642U;
	static volatile uint64_t x299 = UINT64_MAX;

	t74 = (x297*((x298<x299)<x300));

	if (t74 != 28) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -3589;
	volatile int32_t t75 = 414325131;

	t75 = (x301*((x302<x303)<x304));

	if (t75 != -3589) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = 61;
	int64_t x306 = -1202179LL;
	volatile int8_t x307 = INT8_MAX;

	t76 = (x305*((x306<x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	volatile int8_t x312 = 5;
	volatile int32_t t77 = -130728550;

	t77 = (x309*((x310<x311)<x312));

	if (t77 != 104) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	static uint8_t x314 = 0U;
	uint32_t x315 = 495209U;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t78 = -152770193;

	t78 = (x313*((x314<x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1143;
	int8_t x318 = -1;
	uint16_t x320 = 2588U;

	t79 = (x317*((x318<x319)<x320));

	if (t79 != -1143) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	static uint8_t x322 = UINT8_MAX;
	int32_t x323 = -1;
	volatile uint32_t x324 = 135559U;
	static volatile int64_t t80 = 221870721LL;

	t80 = (x321*((x322<x323)<x324));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = 60926444U;
	uint32_t x326 = UINT32_MAX;
	int32_t x328 = -879;
	uint32_t t81 = 20U;

	t81 = (x325*((x326<x327)<x328));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -11;
	int64_t x330 = -1LL;
	static int32_t x331 = 305;
	volatile uint64_t x332 = 7856LLU;
	int32_t t82 = 0;

	t82 = (x329*((x330<x331)<x332));

	if (t82 != -11) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MAX;
	uint8_t x334 = 121U;
	uint64_t x335 = 34430946406LLU;
	static int32_t x336 = INT32_MIN;
	int64_t t83 = -19992949533LL;

	t83 = (x333*((x334<x335)<x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x337 = UINT32_MAX;
	int16_t x338 = -1;
	uint64_t x339 = 6LLU;
	uint8_t x340 = 1U;
	static uint32_t t84 = UINT32_MAX;

	t84 = (x337*((x338<x339)<x340));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x343 = 11387922668208LLU;
	int32_t t85 = 4690659;

	t85 = (x341*((x342<x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	uint8_t x346 = 0U;
	int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MAX;
	volatile int32_t t86 = 1417619;

	t86 = (x345*((x346<x347)<x348));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 55644U;
	uint64_t x350 = 32044772855LLU;
	uint32_t x351 = 57U;
	int16_t x352 = INT16_MIN;
	static uint32_t t87 = 15255U;

	t87 = (x349*((x350<x351)<x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -356753;
	volatile uint32_t x356 = UINT32_MAX;
	volatile int32_t t88 = -6;

	t88 = (x353*((x354<x355)<x356));

	if (t88 != -356753) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	uint16_t x359 = 305U;
	int16_t x360 = INT16_MIN;

	t89 = (x357*((x358<x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 89U;
	int32_t x363 = INT32_MAX;
	int8_t x364 = INT8_MAX;

	t90 = (x361*((x362<x363)<x364));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = UINT64_MAX;
	static volatile int16_t x367 = 46;
	uint64_t x368 = UINT64_MAX;
	int32_t t91 = 0;

	t91 = (x365*((x366<x367)<x368));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 6166;
	uint32_t x370 = 4U;
	int32_t x371 = -1;
	volatile int32_t t92 = 119217;

	t92 = (x369*((x370<x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -2;
	int8_t x375 = 2;

	t93 = (x373*((x374<x375)<x376));

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 50686584U;
	int8_t x378 = -2;
	volatile uint32_t t94 = 96020U;

	t94 = (x377*((x378<x379)<x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int32_t x382 = -1152240;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -16254476;

	t95 = (x381*((x382<x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = 7994791U;
	int16_t x387 = 23;
	int64_t x388 = -1LL;
	volatile int32_t t96 = 31634;

	t96 = (x385*((x386<x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = 8U;
	uint16_t x390 = 208U;
	volatile int32_t x391 = INT32_MIN;

	t97 = (x389*((x390<x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 1;
	static volatile uint8_t x394 = 3U;
	static int8_t x395 = INT8_MAX;
	volatile uint8_t x396 = 14U;

	t98 = (x393*((x394<x395)<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	static uint16_t x398 = 6U;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x397*((x398<x399)<x400));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

