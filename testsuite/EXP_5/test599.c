#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 15745U;
uint16_t x2 = UINT16_MAX;
uint8_t x6 = 1U;
volatile int32_t t2 = 8350037;
int32_t x15 = INT32_MAX;
int8_t x16 = INT8_MIN;
int64_t x22 = -1LL;
int64_t x32 = -1LL;
int8_t x37 = 14;
int64_t x38 = -61572LL;
int64_t x39 = 342482168LL;
int16_t x43 = INT16_MIN;
uint64_t x46 = 24022968735845508LLU;
int32_t t13 = 187544048;
int32_t x57 = INT32_MIN;
int32_t x60 = -41936476;
int16_t x71 = 664;
volatile uint64_t x76 = UINT64_MAX;
static uint8_t x77 = 87U;
uint8_t x87 = 13U;
volatile int64_t x93 = INT64_MIN;
volatile int16_t x95 = INT16_MIN;
uint8_t x99 = UINT8_MAX;
volatile uint16_t x103 = UINT16_MAX;
int16_t x104 = INT16_MIN;
static volatile int32_t t26 = 1;
volatile uint8_t x110 = 3U;
int16_t x114 = INT16_MIN;
int8_t x123 = -1;
int32_t x134 = INT32_MIN;
static int8_t x139 = -2;
int16_t x160 = -1;
static int32_t t38 = INT32_MIN;
volatile int16_t x161 = -1;
volatile int8_t x168 = -1;
volatile int8_t x170 = 59;
int32_t x171 = -1;
static int32_t t42 = INT32_MIN;
volatile int32_t t43 = INT32_MIN;
int32_t x185 = INT32_MAX;
uint32_t x186 = UINT32_MAX;
uint64_t x190 = 59510082849LLU;
static int64_t x193 = -1LL;
static uint16_t x195 = UINT16_MAX;
volatile uint32_t t48 = UINT32_MAX;
int64_t x210 = -1LL;
uint16_t x212 = 4052U;
int32_t x214 = INT32_MIN;
volatile uint64_t x222 = 2084636044381LLU;
int64_t x223 = INT64_MAX;
int32_t t54 = -103718539;
int32_t x232 = -1;
static int32_t t58 = -3851;
volatile int32_t x253 = INT32_MIN;
int64_t x254 = INT64_MIN;
int64_t x256 = INT64_MIN;
static uint64_t x260 = UINT64_MAX;
int32_t t62 = -3530;
int8_t x266 = -1;
volatile uint16_t x270 = UINT16_MAX;
volatile int32_t x271 = INT32_MIN;
static volatile int8_t x286 = 28;
uint32_t x295 = UINT32_MAX;
static int32_t x307 = 5713;
uint64_t x308 = 86LLU;
int32_t t74 = 6544116;
volatile int16_t x310 = INT16_MIN;
uint32_t x311 = 55U;
volatile int64_t x324 = INT64_MIN;
int8_t x325 = INT8_MIN;
int32_t x326 = INT32_MAX;
uint32_t x331 = UINT32_MAX;
int64_t x332 = -21497092607324LL;
int32_t t80 = -54877948;
int8_t x341 = -1;
int16_t x344 = -1;
int32_t t83 = -413606;
static int16_t x351 = 974;
int16_t x360 = INT16_MIN;
volatile int32_t t89 = 77220431;
volatile uint64_t t92 = 4880781LLU;
uint16_t x396 = 3179U;
static volatile int32_t x397 = 3369;


void f0(void) {
	uint8_t x3 = 1U;
	int16_t x4 = INT16_MIN;
	static volatile uint32_t t0 = 62372999U;

	t0 = (x1+((x2/x3)==x4));

	if (t0 != 15745U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 49U;
	static int64_t x7 = INT64_MIN;
	static uint32_t x8 = UINT32_MAX;
	static volatile int32_t t1 = -119;

	t1 = (x5+((x6/x7)==x8));

	if (t1 != 49) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 0U;
	volatile uint16_t x10 = 213U;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = 6U;

	t2 = (x9+((x10/x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x14 = INT32_MIN;
	volatile int32_t t3 = -118068;

	t3 = (x13+((x14/x15)==x16));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	static volatile int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	volatile uint8_t x20 = 0U;
	volatile int32_t t4 = 189;

	t4 = (x17+((x18/x19)==x20));

	if (t4 != 256) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int64_t x23 = -469801165341735LL;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -48645023;

	t5 = (x21+((x22/x23)==x24));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 257266U;
	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MAX;
	int32_t x28 = 2;
	uint32_t t6 = 46419U;

	t6 = (x25+((x26/x27)==x28));

	if (t6 != 257266U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static uint16_t x30 = 177U;
	uint16_t x31 = UINT16_MAX;
	int32_t t7 = INT32_MAX;

	t7 = (x29+((x30/x31)==x32));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 69034298571LLU;
	uint64_t x34 = UINT64_MAX;
	volatile int8_t x35 = -30;
	static volatile int32_t x36 = 40270;
	volatile uint64_t t8 = 38553653LLU;

	t8 = (x33+((x34/x35)==x36));

	if (t8 != 69034298571LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x40 = 193LLU;
	static int32_t t9 = -8260712;

	t9 = (x37+((x38/x39)==x40));

	if (t9 != 14) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 40709860LLU;
	static int64_t x42 = INT64_MIN;
	static volatile int32_t x44 = 16730;
	volatile uint64_t t10 = 7049LLU;

	t10 = (x41+((x42/x43)==x44));

	if (t10 != 40709860LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int8_t x47 = INT8_MAX;
	static int8_t x48 = -1;
	volatile int32_t t11 = 3;

	t11 = (x45+((x46/x47)==x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MAX;
	static int8_t x50 = -2;
	static volatile int8_t x51 = -10;
	uint64_t x52 = 274614989648669LLU;
	int32_t t12 = -41134335;

	t12 = (x49+((x50/x51)==x52));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static uint16_t x54 = 1274U;
	int32_t x55 = INT32_MIN;
	int64_t x56 = 37679LL;

	t13 = (x53+((x54/x55)==x56));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x58 = INT16_MAX;
	volatile uint32_t x59 = 2627391U;
	int32_t t14 = INT32_MIN;

	t14 = (x57+((x58/x59)==x60));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = 27U;
	int8_t x62 = INT8_MIN;
	static int8_t x63 = INT8_MIN;
	int8_t x64 = -1;
	volatile uint32_t t15 = 1613497843U;

	t15 = (x61+((x62/x63)==x64));

	if (t15 != 27U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	static volatile uint32_t x66 = 1002U;
	int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MIN;
	volatile int64_t t16 = 1LL;

	t16 = (x65+((x66/x67)==x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	int32_t x72 = 230070;
	volatile int64_t t17 = INT64_MIN;

	t17 = (x69+((x70/x71)==x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int64_t x74 = 0LL;
	static int32_t x75 = INT32_MIN;
	int32_t t18 = 22;

	t18 = (x73+((x74/x75)==x76));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x78 = 573LL;
	volatile int64_t x79 = 237525231LL;
	int64_t x80 = -7790LL;
	int32_t t19 = 12;

	t19 = (x77+((x78/x79)==x80));

	if (t19 != 87) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MAX;
	uint8_t x82 = 2U;
	uint16_t x83 = 2062U;
	int32_t x84 = INT32_MIN;
	int32_t t20 = INT32_MAX;

	t20 = (x81+((x82/x83)==x84));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	volatile int16_t x86 = INT16_MAX;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = -1771;

	t21 = (x85+((x86/x87)==x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = -1LL;
	int64_t x90 = 7400LL;
	int64_t x91 = 64394LL;
	uint8_t x92 = 13U;
	int64_t t22 = -22LL;

	t22 = (x89+((x90/x91)==x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = INT64_MAX;
	static int64_t x96 = 2460281760LL;
	volatile int64_t t23 = INT64_MIN;

	t23 = (x93+((x94/x95)==x96));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile int64_t x98 = INT64_MAX;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = -1935935;

	t24 = (x97+((x98/x99)==x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 22;
	static uint16_t x102 = 484U;
	volatile int32_t t25 = 119167699;

	t25 = (x101+((x102/x103)==x104));

	if (t25 != 22) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int16_t x106 = 2;
	int32_t x107 = INT32_MIN;
	static uint8_t x108 = 4U;

	t26 = (x105+((x106/x107)==x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 2185LLU;
	static int8_t x111 = -1;
	int64_t x112 = INT64_MAX;
	uint64_t t27 = 902624798LLU;

	t27 = (x109+((x110/x111)==x112));

	if (t27 != 2185LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile uint32_t x115 = UINT32_MAX;
	uint8_t x116 = 123U;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x113+((x114/x115)==x116));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -30549504496LL;
	static int16_t x122 = INT16_MIN;
	volatile int32_t x124 = -19828144;
	int64_t t29 = 334LL;

	t29 = (x121+((x122/x123)==x124));

	if (t29 != -30549504496LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x125 = INT64_MIN;
	volatile int32_t x126 = -1;
	static volatile int8_t x127 = INT8_MAX;
	volatile int64_t x128 = INT64_MAX;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x125+((x126/x127)==x128));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MAX;
	int32_t t31 = 1640049;

	t31 = (x129+((x130/x131)==x132));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = 14;
	int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MIN;
	static volatile int32_t t32 = -4157622;

	t32 = (x133+((x134/x135)==x136));

	if (t32 != 14) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	static int8_t x138 = -1;
	int32_t x140 = INT32_MAX;
	volatile int32_t t33 = INT32_MIN;

	t33 = (x137+((x138/x139)==x140));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	static uint16_t x142 = UINT16_MAX;
	int8_t x143 = -1;
	int32_t x144 = -1;
	int32_t t34 = INT32_MIN;

	t34 = (x141+((x142/x143)==x144));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = 1;
	static int64_t x146 = INT64_MIN;
	int32_t x147 = INT32_MAX;
	int64_t x148 = 61LL;
	volatile int32_t t35 = -830207727;

	t35 = (x145+((x146/x147)==x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x149 = 0U;
	static int64_t x150 = -1LL;
	static int8_t x151 = -3;
	int32_t x152 = -794214637;
	volatile int32_t t36 = -5;

	t36 = (x149+((x150/x151)==x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = 23774086U;
	int64_t x154 = -24LL;
	static int8_t x155 = -1;
	uint64_t x156 = 210724LLU;
	uint32_t t37 = 2U;

	t37 = (x153+((x154/x155)==x156));

	if (t37 != 23774086U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = INT32_MIN;
	uint32_t x158 = 146814U;
	uint8_t x159 = UINT8_MAX;

	t38 = (x157+((x158/x159)==x160));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x162 = -1;
	static int16_t x163 = -2;
	int32_t x164 = -49037129;
	int32_t t39 = 3;

	t39 = (x161+((x162/x163)==x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 39U;
	int64_t x166 = -1LL;
	static int16_t x167 = 13356;
	volatile uint32_t t40 = 214684U;

	t40 = (x165+((x166/x167)==x168));

	if (t40 != 39U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = 1;
	uint32_t x172 = 3952U;
	int32_t t41 = -25693288;

	t41 = (x169+((x170/x171)==x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MIN;
	int64_t x174 = -1LL;
	uint64_t x175 = 627794102264149632LLU;
	int32_t x176 = INT32_MAX;

	t42 = (x173+((x174/x175)==x176));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = 57U;

	t43 = (x181+((x182/x183)==x184));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x187 = 300LL;
	uint32_t x188 = UINT32_MAX;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x185+((x186/x187)==x188));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x189 = INT64_MIN;
	volatile int32_t x191 = INT32_MIN;
	uint16_t x192 = 2440U;
	int64_t t45 = INT64_MIN;

	t45 = (x189+((x190/x191)==x192));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x194 = INT64_MIN;
	int32_t x196 = 6703;
	int64_t t46 = 2675023645LL;

	t46 = (x193+((x194/x195)==x196));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x197 = 1U;
	volatile uint8_t x198 = UINT8_MAX;
	volatile int16_t x199 = INT16_MAX;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t47 = -829053679;

	t47 = (x197+((x198/x199)==x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x201 = UINT32_MAX;
	static int8_t x202 = 0;
	uint16_t x203 = UINT16_MAX;
	volatile int8_t x204 = -29;

	t48 = (x201+((x202/x203)==x204));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	uint16_t x206 = 2110U;
	volatile int8_t x207 = 2;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t49 = 2;

	t49 = (x205+((x206/x207)==x208));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = UINT64_MAX;
	static int64_t x211 = -1LL;
	uint64_t t50 = UINT64_MAX;

	t50 = (x209+((x210/x211)==x212));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	volatile uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t51 = -377985;

	t51 = (x213+((x214/x215)==x216));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x217 = -241343LL;
	int64_t x218 = INT64_MIN;
	uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 43216878U;
	int64_t t52 = -854372LL;

	t52 = (x217+((x218/x219)==x220));

	if (t52 != -241343LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x221 = INT16_MAX;
	static uint64_t x224 = UINT64_MAX;
	volatile int32_t t53 = -265336;

	t53 = (x221+((x222/x223)==x224));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -94;
	volatile uint16_t x226 = UINT16_MAX;
	uint16_t x227 = 5U;
	static volatile int8_t x228 = INT8_MIN;

	t54 = (x225+((x226/x227)==x228));

	if (t54 != -94) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x230 = 1627890U;
	uint32_t x231 = UINT32_MAX;
	volatile int32_t t55 = 199782890;

	t55 = (x229+((x230/x231)==x232));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x233 = 5;
	static int32_t x234 = -219;
	int32_t x235 = 1002510;
	int8_t x236 = -19;
	int32_t t56 = -46;

	t56 = (x233+((x234/x235)==x236));

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MAX;
	volatile int32_t t57 = 9;

	t57 = (x237+((x238/x239)==x240));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = 866U;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = 1U;
	int8_t x244 = INT8_MIN;

	t58 = (x241+((x242/x243)==x244));

	if (t58 != 866) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 3U;
	int8_t x246 = -1;
	uint64_t x247 = 38147404038233183LLU;
	volatile uint8_t x248 = 1U;
	int32_t t59 = 508879;

	t59 = (x245+((x246/x247)==x248));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 1U;
	int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	int64_t x252 = -1LL;
	int32_t t60 = -493430;

	t60 = (x249+((x250/x251)==x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x255 = INT16_MAX;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x253+((x254/x255)==x256));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MAX;
	int8_t x258 = -3;
	int16_t x259 = INT16_MIN;

	t62 = (x257+((x258/x259)==x260));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x261 = UINT64_MAX;
	int16_t x262 = INT16_MIN;
	static int16_t x263 = INT16_MAX;
	volatile int16_t x264 = -1;
	volatile uint64_t t63 = 21883903495439135LLU;

	t63 = (x261+((x262/x263)==x264));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = 313;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t64 = -6;

	t64 = (x265+((x266/x267)==x268));

	if (t64 != 313) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 311592916U;
	int16_t x272 = -1;
	static volatile uint32_t t65 = 764710U;

	t65 = (x269+((x270/x271)==x272));

	if (t65 != 311592916U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x273 = 0;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MAX;
	volatile int32_t t66 = -387145;

	t66 = (x273+((x274/x275)==x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 5U;
	static volatile int32_t x278 = -1;
	int32_t x279 = INT32_MIN;
	volatile int16_t x280 = INT16_MIN;
	static volatile int32_t t67 = -343472;

	t67 = (x277+((x278/x279)==x280));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 12U;
	int64_t x282 = 109998562773154LL;
	uint32_t x283 = UINT32_MAX;
	int8_t x284 = INT8_MAX;
	volatile int32_t t68 = -5;

	t68 = (x281+((x282/x283)==x284));

	if (t68 != 12) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -1;
	volatile int32_t x287 = INT32_MAX;
	volatile uint64_t x288 = 423988LLU;
	volatile int32_t t69 = 16;

	t69 = (x285+((x286/x287)==x288));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1;
	int64_t x290 = INT64_MIN;
	uint16_t x291 = UINT16_MAX;
	uint8_t x292 = 2U;
	volatile int32_t t70 = -341606703;

	t70 = (x289+((x290/x291)==x292));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = 3993317099187517LL;
	int32_t x294 = -1;
	int64_t x296 = INT64_MIN;
	static int64_t t71 = 3908917LL;

	t71 = (x293+((x294/x295)==x296));

	if (t71 != 3993317099187517LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x298 = INT64_MIN;
	int16_t x299 = 1354;
	int8_t x300 = -1;
	int32_t t72 = 31;

	t72 = (x297+((x298/x299)==x300));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x301 = -1;
	int8_t x302 = INT8_MAX;
	uint32_t x303 = UINT32_MAX;
	static uint8_t x304 = 100U;
	static volatile int32_t t73 = 41062;

	t73 = (x301+((x302/x303)==x304));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = -1;
	int8_t x306 = INT8_MIN;

	t74 = (x305+((x306/x307)==x308));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = 1875061844LLU;
	int8_t x312 = INT8_MIN;
	uint64_t t75 = 4282206729683LLU;

	t75 = (x309+((x310/x311)==x312));

	if (t75 != 1875061844LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x313 = 4U;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = UINT32_MAX;
	static int16_t x316 = INT16_MAX;
	int32_t t76 = -5;

	t76 = (x313+((x314/x315)==x316));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -308814;
	volatile int64_t x318 = -1LL;
	static volatile int32_t x319 = 254489634;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t77 = -81299;

	t77 = (x317+((x318/x319)==x320));

	if (t77 != -308814) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x321 = 2519182U;
	int64_t x322 = -5199107979788LL;
	int8_t x323 = -1;
	static volatile uint32_t t78 = 9361U;

	t78 = (x321+((x322/x323)==x324));

	if (t78 != 2519182U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x327 = 1;
	volatile int32_t x328 = INT32_MAX;
	static int32_t t79 = 10839;

	t79 = (x325+((x326/x327)==x328));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = -1;
	int8_t x330 = -29;

	t80 = (x329+((x330/x331)==x332));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -10;
	volatile int32_t x334 = 3;
	static int32_t x335 = INT32_MAX;
	volatile int64_t x336 = -125324LL;
	int32_t t81 = 98075388;

	t81 = (x333+((x334/x335)==x336));

	if (t81 != -10) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x342 = 1;
	int64_t x343 = INT64_MAX;
	int32_t t82 = -8181220;

	t82 = (x341+((x342/x343)==x344));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 702U;
	int8_t x346 = INT8_MAX;
	static uint32_t x347 = 11501U;
	int32_t x348 = INT32_MAX;

	t83 = (x345+((x346/x347)==x348));

	if (t83 != 702) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = -15928LL;
	int16_t x350 = INT16_MAX;
	uint8_t x352 = 70U;
	int64_t t84 = -175910LL;

	t84 = (x349+((x350/x351)==x352));

	if (t84 != -15928LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	uint64_t x354 = 2684LLU;
	volatile int16_t x355 = INT16_MIN;
	uint32_t x356 = 5594U;
	int32_t t85 = -401622;

	t85 = (x353+((x354/x355)==x356));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x357 = 49U;
	uint16_t x358 = UINT16_MAX;
	volatile int8_t x359 = INT8_MAX;
	int32_t t86 = 2958401;

	t86 = (x357+((x358/x359)==x360));

	if (t86 != 49) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = -1LL;
	uint64_t x362 = 2215897022080993940LLU;
	volatile uint64_t x363 = 4272LLU;
	volatile int32_t x364 = -1;
	volatile int64_t t87 = 53402LL;

	t87 = (x361+((x362/x363)==x364));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = 5231LL;
	volatile uint64_t x367 = 357LLU;
	int16_t x368 = -1;
	volatile int32_t t88 = 41;

	t88 = (x365+((x366/x367)==x368));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = UINT16_MAX;
	uint8_t x370 = 123U;
	static int16_t x371 = -22;
	int8_t x372 = INT8_MIN;

	t89 = (x369+((x370/x371)==x372));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = -877331852440516138LL;
	static int64_t x374 = -12214675477702533LL;
	static int8_t x375 = INT8_MIN;
	int8_t x376 = -1;
	int64_t t90 = -141410042394274385LL;

	t90 = (x373+((x374/x375)==x376));

	if (t90 != -877331852440516138LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = -26190266440453LL;
	uint8_t x378 = 4U;
	uint16_t x379 = 38U;
	int16_t x380 = 4;
	int64_t t91 = 162855231667237511LL;

	t91 = (x377+((x378/x379)==x380));

	if (t91 != -26190266440453LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = 3283693319324LLU;
	int8_t x382 = INT8_MIN;
	static uint32_t x383 = UINT32_MAX;
	int64_t x384 = -1LL;

	t92 = (x381+((x382/x383)==x384));

	if (t92 != 3283693319324LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x385 = -1LL;
	uint8_t x386 = 77U;
	uint8_t x387 = 1U;
	int16_t x388 = 3874;
	int64_t t93 = 107400LL;

	t93 = (x385+((x386/x387)==x388));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MAX;
	static int8_t x390 = 0;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = INT32_MAX;
	int64_t t94 = INT64_MAX;

	t94 = (x389+((x390/x391)==x392));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	static volatile int64_t x394 = 6735987142LL;
	static int8_t x395 = INT8_MIN;
	static int64_t t95 = INT64_MIN;

	t95 = (x393+((x394/x395)==x396));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x398 = INT16_MAX;
	volatile uint32_t x399 = UINT32_MAX;
	uint8_t x400 = 26U;
	volatile int32_t t96 = 15801516;

	t96 = (x397+((x398/x399)==x400));

	if (t96 != 3369) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MAX;
	volatile int32_t x402 = -1;
	uint16_t x403 = 1793U;
	static int16_t x404 = 0;
	volatile int32_t t97 = -13786124;

	t97 = (x401+((x402/x403)==x404));

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = INT32_MIN;
	volatile int64_t x406 = -62602246LL;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = 14882624330655570LLU;
	static int32_t t98 = INT32_MIN;

	t98 = (x405+((x406/x407)==x408));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x409 = INT64_MIN;
	volatile uint64_t x410 = 48279284LLU;
	static int16_t x411 = 473;
	uint32_t x412 = UINT32_MAX;
	int64_t t99 = INT64_MIN;

	t99 = (x409+((x410/x411)==x412));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

