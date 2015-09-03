#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x3 = -1;
uint8_t x5 = 3U;
static int32_t x8 = INT32_MIN;
int32_t t2 = -41435;
int64_t x15 = INT64_MIN;
int8_t x28 = INT8_MIN;
int32_t t6 = -1775533;
int16_t x29 = 1027;
uint64_t x31 = 15LLU;
uint8_t x36 = 7U;
int64_t x43 = INT64_MIN;
int16_t x49 = -1;
int8_t x50 = -1;
static volatile uint64_t x55 = UINT64_MAX;
uint16_t x61 = UINT16_MAX;
static int8_t x67 = 1;
int8_t x72 = 53;
static int8_t x74 = -1;
static volatile int32_t t18 = 74;
uint64_t x77 = 234413358130LLU;
int16_t x86 = INT16_MAX;
int8_t x95 = -1;
int64_t x96 = INT64_MIN;
static int64_t x103 = INT64_MIN;
int32_t x105 = INT32_MIN;
volatile int32_t t25 = INT32_MIN;
int64_t x110 = 14LL;
static volatile int64_t x111 = -3861898926LL;
uint32_t x113 = UINT32_MAX;
static int16_t x125 = -1;
volatile int16_t x130 = 63;
int64_t x131 = INT64_MIN;
int64_t x133 = INT64_MAX;
static uint8_t x135 = 2U;
int32_t x136 = 410761;
int32_t x142 = INT32_MIN;
uint16_t x144 = UINT16_MAX;
uint32_t x147 = 8191U;
static volatile int32_t t35 = 5041690;
uint8_t x156 = 29U;
uint16_t x158 = 14578U;
int32_t t38 = 127444;
uint8_t x163 = UINT8_MAX;
int64_t x167 = INT64_MIN;
int8_t x169 = INT8_MAX;
int8_t x185 = 0;
volatile int32_t t46 = -396297;
int8_t x196 = -27;
int8_t x197 = INT8_MIN;
int64_t x199 = -1LL;
int64_t x200 = -1316852417795LL;
int32_t x202 = -6;
volatile int32_t t49 = 6314;
uint8_t x218 = 2U;
volatile uint64_t x220 = 898084032LLU;
volatile int64_t x223 = -1LL;
uint64_t t54 = UINT64_MAX;
static int32_t x226 = -1;
static uint32_t x234 = 442093U;
static int32_t t57 = 7;
static volatile int16_t x237 = -1;
volatile uint8_t x239 = 2U;
volatile uint32_t x240 = UINT32_MAX;
int32_t x252 = 4000509;
static int16_t x259 = INT16_MIN;
uint8_t x261 = 33U;
volatile uint32_t t64 = 2452283U;
int64_t x280 = INT64_MIN;
int16_t x282 = INT16_MIN;
uint8_t x284 = 77U;
static volatile int8_t x290 = 63;
int8_t x306 = INT8_MAX;
int8_t x315 = 1;
volatile uint32_t t73 = 1U;
uint16_t x318 = UINT16_MAX;
static uint32_t x320 = 312954365U;
uint8_t x326 = 56U;
static uint16_t x331 = 5181U;
int8_t x341 = INT8_MAX;
int16_t x347 = -1;
int16_t x349 = INT16_MIN;
int16_t x352 = INT16_MIN;
volatile int32_t t82 = 114130;
static uint8_t x353 = 13U;
volatile int8_t x360 = INT8_MAX;
int16_t x371 = INT16_MIN;
int64_t t89 = 6LL;
int64_t x381 = -71182643393581714LL;
int8_t x382 = INT8_MIN;
int16_t x383 = -1;
static int64_t x392 = -1LL;
int32_t t92 = -5704;
int32_t x397 = INT32_MIN;
static int16_t x400 = 4;
int32_t t94 = INT32_MIN;
int8_t x403 = INT8_MIN;
int16_t x404 = INT16_MIN;
static int8_t x405 = INT8_MIN;
int32_t t96 = -15;


void f0(void) {
	volatile uint32_t x1 = 203240U;
	uint16_t x2 = 389U;
	static volatile uint64_t x4 = 322424037941LLU;
	volatile uint32_t t0 = 28738650U;

	t0 = (x1*((x2/x3)<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int8_t x7 = -1;
	static int32_t t1 = 1736108;

	t1 = (x5*((x6/x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	volatile int64_t x10 = 317335548269743LL;
	int8_t x11 = INT8_MIN;
	int8_t x12 = -1;

	t2 = (x9*((x10/x11)<x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint8_t x14 = 59U;
	int64_t x16 = 8870734034LL;
	volatile int32_t t3 = 14551;

	t3 = (x13*((x14/x15)<x16));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	int8_t x20 = -1;
	int32_t t4 = -60119;

	t4 = (x17*((x18/x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static int16_t x22 = -484;
	static int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MIN;
	uint32_t t5 = 3U;

	t5 = (x21*((x22/x23)<x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -1;
	uint8_t x26 = 2U;
	int16_t x27 = INT16_MIN;

	t6 = (x25*((x26/x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	static int8_t x32 = 2;
	int32_t t7 = 1;

	t7 = (x29*((x30/x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 40U;
	static int16_t x34 = INT16_MIN;
	int64_t x35 = -1LL;
	int32_t t8 = 8774;

	t8 = (x33*((x34/x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = 0;
	volatile uint16_t x38 = 15U;
	int8_t x39 = 55;
	static int16_t x40 = 15760;
	volatile int32_t t9 = 3238928;

	t9 = (x37*((x38/x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	uint8_t x42 = 40U;
	int8_t x44 = INT8_MIN;
	static uint32_t t10 = 215U;

	t10 = (x41*((x42/x43)<x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	static volatile int32_t x46 = INT32_MIN;
	volatile int8_t x47 = 50;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = -1219667401523948292LL;

	t11 = (x45*((x46/x47)<x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x51 = -1;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 3393;

	t12 = (x49*((x50/x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int8_t x54 = INT8_MIN;
	static int8_t x56 = INT8_MAX;
	static volatile int32_t t13 = -1;

	t13 = (x53*((x54/x55)<x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MIN;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 24;

	t14 = (x57*((x58/x59)<x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = 3323623377606LL;
	volatile int16_t x63 = INT16_MIN;
	uint32_t x64 = 2799321U;
	int32_t t15 = -5;

	t15 = (x61*((x62/x63)<x64));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 0U;
	int64_t x66 = INT64_MIN;
	int64_t x68 = INT64_MIN;
	volatile int32_t t16 = -11;

	t16 = (x65*((x66/x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 1U;
	volatile uint64_t x70 = 1520121816209824LLU;
	uint8_t x71 = UINT8_MAX;
	int32_t t17 = -4542;

	t17 = (x69*((x70/x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MAX;
	volatile int32_t x75 = INT32_MAX;
	int32_t x76 = INT32_MIN;

	t18 = (x73*((x74/x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile uint64_t t19 = 2482004483275645LLU;

	t19 = (x77*((x78/x79)<x80));

	if (t19 != 234413358130LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -26;
	int32_t x87 = -124059804;
	volatile uint32_t x88 = UINT32_MAX;
	volatile int32_t t20 = -28;

	t20 = (x85*((x86/x87)<x88));

	if (t20 != -26) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MIN;
	static int32_t x90 = -665947108;
	uint64_t x91 = 240829933460LLU;
	uint64_t x92 = UINT64_MAX;
	int32_t t21 = 803;

	t21 = (x89*((x90/x91)<x92));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MIN;
	uint32_t x94 = 265430825U;
	volatile int64_t t22 = 1108609491843828837LL;

	t22 = (x93*((x94/x95)<x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MAX;
	int16_t x100 = -7224;
	volatile int64_t t23 = -37071177LL;

	t23 = (x97*((x98/x99)<x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = 1;
	int16_t x102 = INT16_MIN;
	static uint64_t x104 = 41070549LLU;
	int32_t t24 = 0;

	t24 = (x101*((x102/x103)<x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = -1;
	int64_t x107 = INT64_MIN;
	static uint32_t x108 = 25645935U;

	t25 = (x105*((x106/x107)<x108));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 1U;
	static uint8_t x112 = 57U;
	volatile int32_t t26 = 11642662;

	t26 = (x109*((x110/x111)<x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x114 = 15;
	int64_t x115 = 456392311396384198LL;
	static uint64_t x116 = UINT64_MAX;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x113*((x114/x115)<x116));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x117 = 2U;
	uint32_t x118 = 62U;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t28 = -340537212;

	t28 = (x117*((x118/x119)<x120));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	uint32_t x122 = UINT32_MAX;
	uint8_t x123 = 17U;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t29 = 194677854;

	t29 = (x121*((x122/x123)<x124));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x126 = INT16_MIN;
	volatile int8_t x127 = 2;
	uint32_t x128 = 7813U;
	volatile int32_t t30 = -1049873;

	t30 = (x125*((x126/x127)<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -49436;
	int8_t x132 = -7;
	volatile int32_t t31 = 97;

	t31 = (x129*((x130/x131)<x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x134 = -1;
	int64_t t32 = INT64_MAX;

	t32 = (x133*((x134/x135)<x136));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 6;
	uint8_t x138 = 63U;
	int16_t x139 = INT16_MAX;
	uint8_t x140 = 7U;
	volatile int32_t t33 = 7;

	t33 = (x137*((x138/x139)<x140));

	if (t33 != 6) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x141 = 8308LLU;
	static volatile int64_t x143 = INT64_MIN;
	uint64_t t34 = 274882LLU;

	t34 = (x141*((x142/x143)<x144));

	if (t34 != 8308LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x145 = 848U;
	int32_t x146 = -1;
	uint32_t x148 = UINT32_MAX;

	t35 = (x145*((x146/x147)<x148));

	if (t35 != 848) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 2383U;
	static volatile int16_t x150 = -26;
	uint64_t x151 = 9817480976182LLU;
	int16_t x152 = INT16_MAX;
	volatile uint32_t t36 = 58971847U;

	t36 = (x149*((x150/x151)<x152));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 21157U;
	uint16_t x154 = UINT16_MAX;
	volatile int64_t x155 = INT64_MIN;
	uint32_t t37 = 98U;

	t37 = (x153*((x154/x155)<x156));

	if (t37 != 21157U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x159 = INT8_MAX;
	int64_t x160 = -1LL;

	t38 = (x157*((x158/x159)<x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = UINT32_MAX;
	uint16_t x162 = UINT16_MAX;
	int8_t x164 = INT8_MAX;
	uint32_t t39 = 47380U;

	t39 = (x161*((x162/x163)<x164));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x166 = -229463717952515231LL;
	volatile int32_t x168 = INT32_MIN;
	volatile uint64_t t40 = 99798795243LLU;

	t40 = (x165*((x166/x167)<x168));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MIN;
	int32_t t41 = 64412;

	t41 = (x169*((x170/x171)<x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	static volatile uint8_t x174 = 1U;
	static volatile uint32_t x175 = 437772U;
	int8_t x176 = -2;
	static volatile int32_t t42 = -46645;

	t42 = (x173*((x174/x175)<x176));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = 33114601;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = -378914345233491919LL;
	int64_t x180 = INT64_MIN;
	volatile int32_t t43 = 6;

	t43 = (x177*((x178/x179)<x180));

	if (t43 != 33114601) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = 1;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	static volatile int32_t x184 = INT32_MIN;
	int32_t t44 = 11;

	t44 = (x181*((x182/x183)<x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x186 = -1;
	uint64_t x187 = 3LLU;
	int32_t x188 = INT32_MAX;
	int32_t t45 = 4;

	t45 = (x185*((x186/x187)<x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 40U;
	int64_t x190 = -1LL;
	static int8_t x191 = 9;
	int32_t x192 = -1;

	t46 = (x189*((x190/x191)<x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = 284757565323LL;
	int32_t x194 = INT32_MAX;
	int64_t x195 = INT64_MAX;
	volatile int64_t t47 = -2454282756LL;

	t47 = (x193*((x194/x195)<x196));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x198 = -1;
	static int32_t t48 = 645421;

	t48 = (x197*((x198/x199)<x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MAX;
	static uint8_t x203 = 15U;
	int64_t x204 = INT64_MIN;

	t49 = (x201*((x202/x203)<x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x205 = INT64_MAX;
	int8_t x206 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = -63073LL;
	volatile int64_t t50 = 7343381733694084LL;

	t50 = (x205*((x206/x207)<x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -1;
	int32_t x210 = 394924;
	volatile int32_t x211 = INT32_MIN;
	int64_t x212 = 1012062394528120LL;
	static volatile int32_t t51 = 145097;

	t51 = (x209*((x210/x211)<x212));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x213 = UINT16_MAX;
	uint8_t x214 = 112U;
	volatile int32_t x215 = -1;
	uint8_t x216 = 16U;
	volatile int32_t t52 = 8148;

	t52 = (x213*((x214/x215)<x216));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MAX;
	volatile int16_t x219 = 1570;
	volatile int32_t t53 = -16139934;

	t53 = (x217*((x218/x219)<x220));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = UINT64_MAX;
	static int16_t x222 = 781;
	int64_t x224 = 158LL;

	t54 = (x221*((x222/x223)<x224));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -1;
	volatile int16_t x227 = 1;
	int16_t x228 = -1;
	int32_t t55 = -938840648;

	t55 = (x225*((x226/x227)<x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = 7U;
	uint64_t x230 = 224249695985573LLU;
	uint32_t x231 = 3U;
	volatile uint8_t x232 = 2U;
	volatile int32_t t56 = -181368;

	t56 = (x229*((x230/x231)<x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x233 = 0U;
	int16_t x235 = INT16_MIN;
	int8_t x236 = -1;

	t57 = (x233*((x234/x235)<x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x238 = -1;
	int32_t t58 = 2009602;

	t58 = (x237*((x238/x239)<x240));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x241 = 3LLU;
	int16_t x242 = 21;
	int32_t x243 = -223857;
	int16_t x244 = -1;
	uint64_t t59 = 67522508LLU;

	t59 = (x241*((x242/x243)<x244));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x245 = 3552U;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	volatile int32_t x248 = INT32_MIN;
	static uint32_t t60 = 115159958U;

	t60 = (x245*((x246/x247)<x248));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = INT8_MIN;
	uint64_t x250 = 163855896246776911LLU;
	static int64_t x251 = 22LL;
	int32_t t61 = 0;

	t61 = (x249*((x250/x251)<x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = UINT16_MAX;
	volatile uint64_t x258 = 4LLU;
	int8_t x260 = INT8_MIN;
	volatile int32_t t62 = 7;

	t62 = (x257*((x258/x259)<x260));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x262 = INT32_MIN;
	int32_t x263 = -27090;
	int8_t x264 = INT8_MAX;
	static volatile int32_t t63 = 0;

	t63 = (x261*((x262/x263)<x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = 260001U;
	static uint16_t x274 = 4U;
	uint32_t x275 = 195723U;
	volatile int16_t x276 = -3304;

	t64 = (x273*((x274/x275)<x276));

	if (t64 != 260001U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MIN;
	static int32_t x278 = INT32_MIN;
	uint8_t x279 = 12U;
	volatile int32_t t65 = -1;

	t65 = (x277*((x278/x279)<x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x281 = -27176922;
	static int64_t x283 = INT64_MAX;
	volatile int32_t t66 = 173;

	t66 = (x281*((x282/x283)<x284));

	if (t66 != -27176922) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x289 = -1;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -1;
	int32_t t67 = -32;

	t67 = (x289*((x290/x291)<x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -844585839;
	int64_t x295 = 4135100982950LL;
	volatile uint64_t x296 = 1471854028755LLU;
	volatile int32_t t68 = -95227147;

	t68 = (x293*((x294/x295)<x296));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MAX;
	int8_t x298 = -1;
	static int16_t x299 = 999;
	uint32_t x300 = 1800884300U;
	volatile int64_t t69 = INT64_MAX;

	t69 = (x297*((x298/x299)<x300));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = -11;
	int16_t x302 = INT16_MAX;
	static uint32_t x303 = 93799U;
	volatile int32_t x304 = -1;
	volatile int32_t t70 = -66;

	t70 = (x301*((x302/x303)<x304));

	if (t70 != -11) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x305 = 0;
	int64_t x307 = -1535LL;
	int8_t x308 = 1;
	int32_t t71 = 0;

	t71 = (x305*((x306/x307)<x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x309 = -1;
	int32_t x310 = -1;
	uint8_t x311 = 113U;
	int32_t x312 = 339751086;
	static int32_t t72 = 14;

	t72 = (x309*((x310/x311)<x312));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int16_t x314 = -1;
	uint64_t x316 = 13198291LLU;

	t73 = (x313*((x314/x315)<x316));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x317 = INT64_MAX;
	int32_t x319 = INT32_MIN;
	static int64_t t74 = INT64_MAX;

	t74 = (x317*((x318/x319)<x320));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = 12;
	int32_t x322 = INT32_MAX;
	volatile int32_t x323 = -1828;
	int8_t x324 = -1;
	int32_t t75 = 3556;

	t75 = (x321*((x322/x323)<x324));

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x325 = 32968808U;
	volatile uint64_t x327 = UINT64_MAX;
	static uint8_t x328 = 12U;
	static uint32_t t76 = 238U;

	t76 = (x325*((x326/x327)<x328));

	if (t76 != 32968808U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MIN;
	uint16_t x330 = 3558U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t77 = 89658745;

	t77 = (x329*((x330/x331)<x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = -4078LL;
	int8_t x334 = 4;
	volatile int8_t x335 = -3;
	volatile int64_t x336 = INT64_MIN;
	int64_t t78 = 2055015342265882928LL;

	t78 = (x333*((x334/x335)<x336));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x337 = 1U;
	int64_t x338 = -1345920013LL;
	uint8_t x339 = 13U;
	int16_t x340 = -3154;
	volatile int32_t t79 = 21;

	t79 = (x337*((x338/x339)<x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x342 = 30U;
	static volatile int32_t x343 = INT32_MIN;
	uint32_t x344 = 0U;
	static int32_t t80 = 430;

	t80 = (x341*((x342/x343)<x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = UINT16_MAX;
	volatile uint8_t x346 = 1U;
	uint64_t x348 = UINT64_MAX;
	int32_t t81 = 441597548;

	t81 = (x345*((x346/x347)<x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x350 = 4884822947923173302LLU;
	int32_t x351 = INT32_MAX;

	t82 = (x349*((x350/x351)<x352));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x354 = INT8_MAX;
	uint16_t x355 = 13261U;
	int32_t x356 = INT32_MAX;
	volatile int32_t t83 = 0;

	t83 = (x353*((x354/x355)<x356));

	if (t83 != 13) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x357 = UINT32_MAX;
	int32_t x358 = -1;
	int64_t x359 = -1LL;
	uint32_t t84 = UINT32_MAX;

	t84 = (x357*((x358/x359)<x360));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = -48772975863LL;
	uint64_t x362 = 999009624682044387LLU;
	volatile uint64_t x363 = 484865750047668019LLU;
	int16_t x364 = INT16_MIN;
	volatile int64_t t85 = -1LL;

	t85 = (x361*((x362/x363)<x364));

	if (t85 != -48772975863LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x365 = 19U;
	int8_t x366 = INT8_MIN;
	int64_t x367 = -385LL;
	int8_t x368 = -1;
	int32_t t86 = 15873;

	t86 = (x365*((x366/x367)<x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x369 = 1888U;
	volatile int32_t x370 = INT32_MAX;
	int16_t x372 = INT16_MIN;
	volatile uint32_t t87 = 3932544U;

	t87 = (x369*((x370/x371)<x372));

	if (t87 != 1888U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint32_t x374 = 25057280U;
	volatile int8_t x375 = -12;
	int32_t x376 = 3513720;
	uint64_t t88 = UINT64_MAX;

	t88 = (x373*((x374/x375)<x376));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -1LL;
	volatile int16_t x378 = INT16_MIN;
	volatile int16_t x379 = -2521;
	static volatile int16_t x380 = -1;

	t89 = (x377*((x378/x379)<x380));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x384 = 1U;
	int64_t t90 = 620150249LL;

	t90 = (x381*((x382/x383)<x384));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x385 = INT32_MAX;
	static uint8_t x386 = UINT8_MAX;
	uint64_t x387 = 340563LLU;
	int32_t x388 = INT32_MIN;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x385*((x386/x387)<x388));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x389 = 6U;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = 47U;

	t92 = (x389*((x390/x391)<x392));

	if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x393 = -1LL;
	int32_t x394 = -1;
	int16_t x395 = INT16_MAX;
	int64_t x396 = INT64_MIN;
	int64_t t93 = 1642282272275LL;

	t93 = (x393*((x394/x395)<x396));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x398 = 108291LLU;
	static int8_t x399 = -1;

	t94 = (x397*((x398/x399)<x400));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 12U;
	int16_t x402 = INT16_MIN;
	int32_t t95 = 24;

	t95 = (x401*((x402/x403)<x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x406 = 732;
	uint64_t x407 = 627536527LLU;
	int16_t x408 = INT16_MIN;

	t96 = (x405*((x406/x407)<x408));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x409 = 0;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	static volatile int8_t x412 = INT8_MAX;
	volatile int32_t t97 = 472;

	t97 = (x409*((x410/x411)<x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x413 = UINT64_MAX;
	volatile uint64_t x414 = 33LLU;
	uint32_t x415 = 45U;
	int8_t x416 = INT8_MIN;
	static volatile uint64_t t98 = UINT64_MAX;

	t98 = (x413*((x414/x415)<x416));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MIN;
	int64_t x418 = -1LL;
	static volatile uint64_t x419 = UINT64_MAX;
	static uint8_t x420 = UINT8_MAX;
	int32_t t99 = 5530629;

	t99 = (x417*((x418/x419)<x420));

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

