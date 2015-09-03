#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = INT64_MIN;
uint16_t x8 = 20523U;
static int32_t x17 = -1;
int8_t x19 = INT8_MIN;
uint16_t x23 = 5939U;
int64_t x32 = INT64_MIN;
volatile uint32_t t8 = 12U;
uint64_t x40 = UINT64_MAX;
int64_t x71 = 190932842425734779LL;
int64_t x72 = -1LL;
static uint16_t x74 = UINT16_MAX;
int8_t x84 = -1;
int64_t t20 = INT64_MIN;
uint8_t x85 = UINT8_MAX;
int16_t x87 = INT16_MAX;
static uint32_t x89 = UINT32_MAX;
int64_t x90 = INT64_MIN;
static int32_t t23 = -91;
int64_t x98 = -66553055561898904LL;
int32_t x101 = 187466;
volatile int32_t x104 = INT32_MIN;
static int8_t x112 = INT8_MAX;
int16_t x113 = 15619;
int64_t x116 = INT64_MIN;
volatile int32_t t31 = 5197;
int64_t x129 = INT64_MAX;
static uint8_t x134 = UINT8_MAX;
volatile int64_t x136 = 7235LL;
int64_t x139 = -41231LL;
volatile int32_t t36 = 47225;
uint64_t x152 = UINT64_MAX;
volatile int8_t x153 = 3;
volatile int64_t x156 = INT64_MIN;
static int64_t x163 = -174068625931640779LL;
static int32_t t40 = -44;
int16_t x166 = INT16_MIN;
static volatile int32_t t41 = INT32_MIN;
int8_t x171 = -1;
volatile int32_t t42 = -597683;
volatile int32_t t43 = -82945;
static uint64_t x179 = 38322LLU;
static uint32_t t44 = 96596782U;
static volatile int64_t x182 = INT64_MIN;
uint32_t x184 = 788364276U;
int16_t x186 = 2668;
int32_t x187 = -1;
volatile int32_t x191 = INT32_MAX;
volatile int8_t x194 = INT8_MIN;
static int8_t x195 = INT8_MAX;
uint64_t x196 = UINT64_MAX;
uint32_t x203 = 912U;
int32_t t50 = 6985250;
static volatile int64_t x205 = INT64_MIN;
int32_t x211 = INT32_MIN;
static int16_t x221 = -2;
uint16_t x223 = 171U;
int16_t x227 = INT16_MIN;
int32_t t56 = 106678985;
uint32_t x234 = 163510714U;
int64_t x235 = -1LL;
static volatile int64_t x236 = INT64_MIN;
int64_t t58 = -794252452493LL;
uint64_t x237 = 13667594522LLU;
volatile int64_t x238 = INT64_MIN;
int64_t x239 = -611175LL;
volatile uint64_t t59 = 1093443667225338846LLU;
volatile int16_t x243 = INT16_MAX;
int32_t t60 = 5;
static volatile uint32_t x246 = UINT32_MAX;
int32_t x250 = 113859712;
static uint64_t x251 = 836509LLU;
int16_t x252 = -1;
int64_t x256 = -16335493906LL;
static int64_t x257 = INT64_MAX;
uint16_t x263 = 118U;
int8_t x264 = INT8_MAX;
int64_t x270 = -339911835502121527LL;
int32_t x278 = 0;
int8_t x283 = INT8_MIN;
int16_t x290 = INT16_MIN;
uint16_t x293 = UINT16_MAX;
int8_t x298 = -1;
uint64_t x300 = 2281763532182582LLU;
static int32_t x304 = 2010333;
int8_t x307 = INT8_MIN;
static volatile int32_t x319 = INT32_MIN;
static int8_t x320 = -1;
volatile int32_t t79 = -17442065;
static volatile uint16_t x328 = UINT16_MAX;
uint16_t x329 = UINT16_MAX;
volatile int32_t t83 = -14280;
volatile uint64_t x339 = UINT64_MAX;
uint32_t t85 = UINT32_MAX;
static int8_t x350 = 1;
static uint32_t x351 = 127U;
static volatile int32_t x354 = -1;
int16_t x356 = -1;
int8_t x358 = INT8_MAX;
uint32_t x361 = 705932U;
static int32_t x365 = -46546;
static uint8_t x370 = 60U;
int8_t x371 = 0;
volatile uint8_t x372 = UINT8_MAX;
volatile int32_t x380 = -1;
int16_t x382 = INT16_MIN;
static int64_t t95 = -258661390866322LL;
volatile uint64_t x396 = 112LLU;
uint64_t t98 = 11627096LLU;
uint16_t x399 = 0U;
int64_t x400 = INT64_MAX;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	volatile uint8_t x2 = 9U;
	int16_t x3 = INT16_MIN;
	int16_t x4 = -14;

	t0 = (x1+((x2^x3)==x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 46834LLU;
	volatile int32_t x6 = INT32_MAX;
	uint64_t x7 = 0LLU;
	uint64_t t1 = 1641LLU;

	t1 = (x5+((x6^x7)==x8));

	if (t1 != 46834LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile uint16_t x10 = 127U;
	volatile uint64_t x11 = UINT64_MAX;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 11225590;

	t2 = (x9+((x10^x11)==x12));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = INT32_MAX;

	t3 = (x13+((x14^x15)==x16));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = 267463717;

	t4 = (x17+((x18^x19)==x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	volatile int32_t x22 = INT32_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -6;

	t5 = (x21+((x22^x23)==x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int32_t x26 = -1;
	static volatile uint32_t x27 = 22801952U;
	int32_t x28 = -1;
	volatile int32_t t6 = 76493064;

	t6 = (x25+((x26^x27)==x28));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = 6723LL;
	uint64_t x31 = 35394294889647278LLU;
	int32_t t7 = INT32_MIN;

	t7 = (x29+((x30^x31)==x32));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 441684455U;
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = 439;
	int32_t x36 = 33389;

	t8 = (x33+((x34^x35)==x36));

	if (t8 != 441684455U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 173487576LLU;
	static uint64_t x38 = UINT64_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	uint64_t t9 = 250991444357LLU;

	t9 = (x37+((x38^x39)==x40));

	if (t9 != 173487576LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 0U;
	volatile uint16_t x42 = 25U;
	int8_t x43 = INT8_MIN;
	int32_t x44 = -1;
	uint32_t t10 = 3U;

	t10 = (x41+((x42^x43)==x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 753U;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 0U;
	static int16_t x48 = INT16_MIN;
	uint32_t t11 = 4U;

	t11 = (x45+((x46^x47)==x48));

	if (t11 != 754U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1525LLU;
	uint8_t x50 = 18U;
	static int8_t x51 = -14;
	int16_t x52 = -1;
	volatile uint64_t t12 = 10347LLU;

	t12 = (x49+((x50^x51)==x52));

	if (t12 != 1525LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static uint64_t x54 = 165671133391LLU;
	volatile int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x53+((x54^x55)==x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x58 = 27469669381LLU;
	int16_t x59 = 1246;
	int32_t x60 = INT32_MIN;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x57+((x58^x59)==x60));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	volatile int8_t x63 = INT8_MIN;
	uint16_t x64 = 1097U;
	int32_t t15 = 8127144;

	t15 = (x61+((x62^x63)==x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	volatile int64_t x66 = -1LL;
	volatile uint32_t x67 = 219U;
	static uint16_t x68 = 929U;
	volatile int32_t t16 = -22955941;

	t16 = (x65+((x66^x67)==x68));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	static int32_t x70 = 470374674;
	int32_t t17 = -7;

	t17 = (x69+((x70^x71)==x72));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 2U;
	static int64_t x75 = INT64_MIN;
	static int64_t x76 = -1LL;
	volatile int32_t t18 = -206942922;

	t18 = (x73+((x74^x75)==x76));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MIN;
	int32_t x79 = 2267480;
	int64_t x80 = 2023264472733532LL;
	volatile int32_t t19 = -97751496;

	t19 = (x77+((x78^x79)==x80));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int32_t x82 = -1974692;
	static int16_t x83 = -126;

	t20 = (x81+((x82^x83)==x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -13220;
	uint16_t x88 = 5U;
	int32_t t21 = -2064736;

	t21 = (x85+((x86^x87)==x88));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x91 = -2726838980LL;
	int8_t x92 = INT8_MIN;
	static uint32_t t22 = UINT32_MAX;

	t22 = (x89+((x90^x91)==x92));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 19U;
	volatile uint16_t x94 = 6U;
	volatile uint8_t x95 = 117U;
	int16_t x96 = INT16_MIN;

	t23 = (x93+((x94^x95)==x96));

	if (t23 != 19) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	uint32_t x99 = 403017U;
	volatile int16_t x100 = -1;
	int64_t t24 = -36LL;

	t24 = (x97+((x98^x99)==x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x102 = 34424LLU;
	int16_t x103 = INT16_MAX;
	volatile int32_t t25 = 0;

	t25 = (x101+((x102^x103)==x104));

	if (t25 != 187466) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 3U;
	int16_t x106 = -1;
	static int32_t x107 = INT32_MAX;
	uint32_t x108 = 0U;
	int32_t t26 = 94;

	t26 = (x105+((x106^x107)==x108));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	volatile int64_t x111 = INT64_MIN;
	volatile int32_t t27 = 22;

	t27 = (x109+((x110^x111)==x112));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x114 = 528800201489288495LLU;
	int64_t x115 = INT64_MAX;
	volatile int32_t t28 = -937890080;

	t28 = (x113+((x114^x115)==x116));

	if (t28 != 15619) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	volatile uint16_t x118 = 432U;
	int16_t x119 = -1;
	int64_t x120 = 45447LL;
	volatile int32_t t29 = -16;

	t29 = (x117+((x118^x119)==x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 1378U;
	uint8_t x122 = UINT8_MAX;
	static uint16_t x123 = 597U;
	volatile int8_t x124 = 58;
	int32_t t30 = -2;

	t30 = (x121+((x122^x123)==x124));

	if (t30 != 1378) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	volatile uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MIN;
	int8_t x128 = 32;

	t31 = (x125+((x126^x127)==x128));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 72U;
	static int8_t x131 = 23;
	int16_t x132 = 642;
	int64_t t32 = INT64_MAX;

	t32 = (x129+((x130^x131)==x132));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 35U;
	volatile int32_t x135 = INT32_MIN;
	volatile int32_t t33 = -65853327;

	t33 = (x133+((x134^x135)==x136));

	if (t33 != 35) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	volatile int64_t x138 = -1LL;
	int8_t x140 = 1;
	static volatile int32_t t34 = -447776126;

	t34 = (x137+((x138^x139)==x140));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	static uint16_t x142 = UINT16_MAX;
	static uint16_t x143 = 22U;
	volatile uint64_t x144 = 8549504794932866LLU;
	static int32_t t35 = INT32_MIN;

	t35 = (x141+((x142^x143)==x144));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 14U;
	uint8_t x146 = 22U;
	int16_t x147 = INT16_MAX;
	static int32_t x148 = INT32_MIN;

	t36 = (x145+((x146^x147)==x148));

	if (t36 != 14) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	uint16_t x150 = 2009U;
	static int32_t x151 = INT32_MIN;
	int32_t t37 = -19;

	t37 = (x149+((x150^x151)==x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 23;
	int16_t x155 = INT16_MIN;
	int32_t t38 = 593298;

	t38 = (x153+((x154^x155)==x156));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MIN;
	static uint16_t x159 = UINT16_MAX;
	volatile uint32_t x160 = 32638U;
	int32_t t39 = INT32_MIN;

	t39 = (x157+((x158^x159)==x160));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -7658127;
	int8_t x162 = -1;
	uint64_t x164 = 8208975904745536721LLU;

	t40 = (x161+((x162^x163)==x164));

	if (t40 != -7658127) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x167 = 68U;
	uint64_t x168 = 33LLU;

	t41 = (x165+((x166^x167)==x168));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x170 = 2U;
	int16_t x172 = INT16_MIN;

	t42 = (x169+((x170^x171)==x172));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int8_t x174 = INT8_MIN;
	static volatile int8_t x175 = -4;
	int64_t x176 = INT64_MAX;

	t43 = (x173+((x174^x175)==x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 2133487929U;
	int32_t x178 = 23;
	static uint32_t x180 = 60U;

	t44 = (x177+((x178^x179)==x180));

	if (t44 != 2133487929U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x181 = 1185243U;
	int16_t x183 = -1;
	static volatile uint32_t t45 = 37302U;

	t45 = (x181+((x182^x183)==x184));

	if (t45 != 1185243U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -9;
	static uint16_t x188 = UINT16_MAX;
	int32_t t46 = -5165176;

	t46 = (x185+((x186^x187)==x188));

	if (t46 != -9) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -44;
	uint32_t x190 = 36935U;
	int8_t x192 = INT8_MAX;
	static volatile int32_t t47 = 0;

	t47 = (x189+((x190^x191)==x192));

	if (t47 != -44) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 0U;
	volatile uint32_t t48 = 96333104U;

	t48 = (x193+((x194^x195)==x196));

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = INT8_MIN;
	int16_t x199 = 1466;
	uint64_t x200 = UINT64_MAX;
	int32_t t49 = 214297;

	t49 = (x197+((x198^x199)==x200));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 3;
	int32_t x202 = INT32_MIN;
	int32_t x204 = -1;

	t50 = (x201+((x202^x203)==x204));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x206 = INT32_MIN;
	volatile int16_t x207 = -1;
	int16_t x208 = 2598;
	int64_t t51 = INT64_MIN;

	t51 = (x205+((x206^x207)==x208));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -13;
	uint32_t x210 = 0U;
	volatile int64_t x212 = 2784418LL;
	int32_t t52 = -1854706;

	t52 = (x209+((x210^x211)==x212));

	if (t52 != -13) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static volatile uint32_t x214 = 140U;
	int16_t x215 = -1;
	static uint8_t x216 = UINT8_MAX;
	static int32_t t53 = -777;

	t53 = (x213+((x214^x215)==x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = 3U;
	int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MIN;
	static volatile int32_t t54 = -135079901;

	t54 = (x217+((x218^x219)==x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = 3249;
	uint8_t x224 = UINT8_MAX;
	int32_t t55 = 7;

	t55 = (x221+((x222^x223)==x224));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	static int64_t x226 = -1LL;
	int8_t x228 = INT8_MIN;

	t56 = (x225+((x226^x227)==x228));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	static volatile int8_t x230 = -2;
	volatile int8_t x231 = INT8_MIN;
	uint32_t x232 = 1470885U;
	static volatile int32_t t57 = 18;

	t57 = (x229+((x230^x231)==x232));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -2555892143439265LL;

	t58 = (x233+((x234^x235)==x236));

	if (t58 != -2555892143439265LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x240 = INT32_MAX;

	t59 = (x237+((x238^x239)==x240));

	if (t59 != 13667594522LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	static volatile int8_t x242 = INT8_MIN;
	volatile uint64_t x244 = UINT64_MAX;

	t60 = (x241+((x242^x243)==x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	int16_t x247 = -1;
	volatile int32_t x248 = -1;
	int32_t t61 = -33016492;

	t61 = (x245+((x246^x247)==x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int32_t t62 = -7329082;

	t62 = (x249+((x250^x251)==x252));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MIN;
	uint16_t x254 = 3193U;
	volatile int16_t x255 = INT16_MIN;
	volatile int32_t t63 = INT32_MIN;

	t63 = (x253+((x254^x255)==x256));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = 68U;
	uint32_t x259 = 8196U;
	uint64_t x260 = 622333836356870LLU;
	int64_t t64 = INT64_MAX;

	t64 = (x257+((x258^x259)==x260));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 50398900282483427LLU;
	uint16_t x262 = UINT16_MAX;
	volatile uint64_t t65 = 470200LLU;

	t65 = (x261+((x262^x263)==x264));

	if (t65 != 50398900282483427LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	volatile int32_t x266 = -21;
	volatile int16_t x267 = 836;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -3336855;

	t66 = (x265+((x266^x267)==x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 29367U;
	uint64_t x271 = 1687587791943047LLU;
	int32_t x272 = INT32_MIN;
	volatile uint32_t t67 = 1518035U;

	t67 = (x269+((x270^x271)==x272));

	if (t67 != 29367U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = UINT32_MAX;
	static int64_t x274 = -1LL;
	static uint64_t x275 = 133680772071LLU;
	volatile int16_t x276 = INT16_MIN;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x273+((x274^x275)==x276));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 13706U;
	int64_t x279 = 91602901649LL;
	uint8_t x280 = 5U;
	volatile int32_t t69 = 1;

	t69 = (x277+((x278^x279)==x280));

	if (t69 != 13706) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	static uint64_t x282 = UINT64_MAX;
	static uint8_t x284 = 1U;
	uint32_t t70 = UINT32_MAX;

	t70 = (x281+((x282^x283)==x284));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -682;
	static uint64_t x286 = UINT64_MAX;
	uint64_t x287 = UINT64_MAX;
	static int32_t x288 = 2521222;
	static volatile int32_t t71 = 3;

	t71 = (x285+((x286^x287)==x288));

	if (t71 != -682) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	volatile int32_t x291 = INT32_MIN;
	static int32_t x292 = -13;
	volatile int32_t t72 = 4427629;

	t72 = (x289+((x290^x291)==x292));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 1318U;
	static int32_t x295 = INT32_MAX;
	uint16_t x296 = 3U;
	static volatile int32_t t73 = -4745654;

	t73 = (x293+((x294^x295)==x296));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	uint8_t x299 = 51U;
	static int32_t t74 = -387944;

	t74 = (x297+((x298^x299)==x300));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 17U;
	uint64_t x302 = UINT64_MAX;
	volatile int8_t x303 = INT8_MIN;
	volatile int32_t t75 = -939059687;

	t75 = (x301+((x302^x303)==x304));

	if (t75 != 17) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MIN;
	volatile int8_t x308 = -1;
	int64_t t76 = INT64_MIN;

	t76 = (x305+((x306^x307)==x308));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 1040932147258650342LLU;
	int32_t x310 = INT32_MAX;
	int64_t x311 = 29412LL;
	uint8_t x312 = 0U;
	static uint64_t t77 = 10156LLU;

	t77 = (x309+((x310^x311)==x312));

	if (t77 != 1040932147258650342LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = 2862;
	int64_t x314 = 24138LL;
	int16_t x315 = INT16_MAX;
	volatile int8_t x316 = 0;
	volatile int32_t t78 = 525;

	t78 = (x313+((x314^x315)==x316));

	if (t78 != 2862) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	static int8_t x318 = -1;

	t79 = (x317+((x318^x319)==x320));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1050646346LL;
	int32_t x322 = INT32_MAX;
	uint32_t x323 = 1020U;
	volatile int32_t x324 = -488701;
	volatile int64_t t80 = -658160131474LL;

	t80 = (x321+((x322^x323)==x324));

	if (t80 != -1050646346LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = 1;
	int16_t x326 = 182;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t t81 = -3757203;

	t81 = (x325+((x326^x327)==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MAX;
	int16_t x331 = -1;
	int16_t x332 = -7279;
	static int32_t t82 = -628;

	t82 = (x329+((x330^x331)==x332));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	uint32_t x334 = 35356912U;
	static int64_t x335 = -2403339903LL;
	int64_t x336 = 401665LL;

	t83 = (x333+((x334^x335)==x336));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	volatile int16_t x338 = -1;
	volatile uint32_t x340 = UINT32_MAX;
	int32_t t84 = 92;

	t84 = (x337+((x338^x339)==x340));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = UINT32_MAX;
	uint64_t x342 = UINT64_MAX;
	uint32_t x343 = 509U;
	int16_t x344 = 2516;

	t85 = (x341+((x342^x343)==x344));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 4U;
	uint8_t x346 = 4U;
	uint32_t x347 = 4U;
	static int16_t x348 = INT16_MIN;
	volatile uint32_t t86 = 3928U;

	t86 = (x345+((x346^x347)==x348));

	if (t86 != 4U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	uint32_t x352 = 70058854U;
	int32_t t87 = 725;

	t87 = (x349+((x350^x351)==x352));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	static volatile int8_t x355 = INT8_MAX;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x353+((x354^x355)==x356));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 13223691U;
	int64_t x359 = -141126613919972LL;
	static int64_t x360 = INT64_MAX;
	uint32_t t89 = 15449852U;

	t89 = (x357+((x358^x359)==x360));

	if (t89 != 13223691U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 27251U;
	uint32_t x363 = 711024051U;
	int64_t x364 = -1LL;
	uint32_t t90 = 57898U;

	t90 = (x361+((x362^x363)==x364));

	if (t90 != 705932U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = 5890200696112LL;
	int16_t x367 = INT16_MIN;
	int16_t x368 = 15837;
	int32_t t91 = -52;

	t91 = (x365+((x366^x367)==x368));

	if (t91 != -46546) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	static int64_t t92 = 2LL;

	t92 = (x369+((x370^x371)==x372));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	volatile int64_t x374 = -1LL;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = -7;
	static volatile int64_t t93 = INT64_MIN;

	t93 = (x373+((x374^x375)==x376));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	static volatile uint64_t x378 = 2958LLU;
	int8_t x379 = INT8_MIN;
	volatile int32_t t94 = 199400;

	t94 = (x377+((x378^x379)==x380));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int64_t x383 = -1684528749LL;
	static int8_t x384 = 0;

	t95 = (x381+((x382^x383)==x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	int64_t x386 = INT64_MIN;
	static int16_t x387 = INT16_MIN;
	static int32_t x388 = INT32_MIN;
	int32_t t96 = 1685;

	t96 = (x385+((x386^x387)==x388));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -1;
	int16_t x390 = INT16_MIN;
	volatile int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 3405;

	t97 = (x389+((x390^x391)==x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 398668492152LLU;
	int64_t x394 = -6495LL;
	int32_t x395 = INT32_MIN;

	t98 = (x393+((x394^x395)==x396));

	if (t98 != 398668492152LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MAX;
	int32_t x398 = INT32_MIN;
	int32_t t99 = -7498;

	t99 = (x397+((x398^x399)==x400));

	if (t99 != 127) { NG(); } else { ; }
	
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

