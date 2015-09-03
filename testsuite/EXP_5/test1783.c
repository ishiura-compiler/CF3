#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
uint8_t x4 = 6U;
uint16_t x11 = 392U;
volatile int32_t t2 = INT32_MIN;
static int32_t x21 = 12796;
volatile int32_t t4 = 343;
volatile uint32_t x25 = 80U;
uint8_t x26 = 3U;
static int16_t x28 = INT16_MAX;
int16_t x32 = 29;
static int16_t x33 = -1;
uint16_t x36 = UINT16_MAX;
uint16_t x48 = 1U;
volatile int32_t t10 = -371319563;
int32_t x51 = INT32_MIN;
int32_t x55 = -38119341;
uint16_t x59 = 27U;
static int8_t x63 = INT8_MAX;
volatile int8_t x70 = -1;
int32_t t17 = -5598604;
uint8_t x78 = 26U;
int32_t x82 = INT32_MIN;
int64_t x83 = INT64_MIN;
int32_t t23 = -28644;
volatile int64_t x102 = INT64_MIN;
static volatile int32_t x108 = 4025812;
static int8_t x109 = INT8_MIN;
uint8_t x115 = UINT8_MAX;
static int64_t t27 = INT64_MIN;
static int64_t x118 = -21928030717126589LL;
uint8_t x119 = UINT8_MAX;
int64_t x120 = -1LL;
volatile uint64_t x124 = 454LLU;
static uint16_t x144 = 3287U;
int8_t x155 = INT8_MIN;
static int16_t x156 = INT16_MAX;
int32_t t36 = -21;
int32_t x167 = -1;
uint16_t x175 = UINT16_MAX;
static uint32_t t41 = 7000U;
volatile uint16_t x181 = UINT16_MAX;
int8_t x188 = -1;
uint16_t x194 = 7808U;
uint16_t x196 = 2U;
static int32_t t47 = 4755966;
static int32_t t48 = 249602296;
uint32_t x209 = 127290U;
int64_t x213 = INT64_MIN;
int32_t x215 = INT32_MIN;
volatile int8_t x221 = -1;
static int32_t x227 = INT32_MAX;
static int32_t x228 = -48577;
int64_t x230 = 3367471801892LL;
int32_t t55 = INT32_MIN;
int32_t t56 = 630911773;
int32_t t57 = 15833529;
volatile int32_t x241 = INT32_MIN;
int8_t x246 = INT8_MIN;
int64_t x252 = INT64_MIN;
static int32_t t61 = INT32_MIN;
volatile int32_t t62 = INT32_MAX;
volatile uint32_t x262 = 31U;
volatile uint8_t x263 = 6U;
int8_t x270 = INT8_MIN;
volatile uint16_t x271 = 13242U;
static volatile int32_t t65 = -44910;
uint8_t x277 = UINT8_MAX;
volatile uint64_t x279 = UINT64_MAX;
uint8_t x282 = 61U;
static int32_t x289 = INT32_MIN;
int64_t x292 = INT64_MIN;
int64_t x294 = -2549115147082225LL;
int8_t x295 = INT8_MIN;
int64_t x298 = INT64_MAX;
volatile uint8_t x304 = 2U;
static int8_t x312 = -1;
static int16_t x314 = -24;
volatile uint16_t x321 = 818U;
static uint16_t x322 = 0U;
int16_t x323 = INT16_MAX;
uint64_t x326 = UINT64_MAX;
int8_t x328 = INT8_MIN;
volatile int32_t t80 = -696288700;
uint8_t x333 = UINT8_MAX;
uint64_t x341 = 1825721430749LLU;
int32_t x343 = INT32_MIN;
static int32_t x344 = -146926;
static uint64_t t83 = 36397687979LLU;
uint64_t x348 = 22835LLU;
uint16_t x352 = UINT16_MAX;
volatile int32_t t85 = 402;
int16_t x353 = -9;
static int32_t t86 = -96808019;
uint32_t x359 = UINT32_MAX;
volatile int32_t t87 = 25355;
static int32_t x367 = 3416175;
int64_t x368 = INT64_MIN;
volatile uint32_t t89 = 180858862U;
int32_t x370 = -1;
uint8_t x389 = UINT8_MAX;
int32_t t94 = 29658;
volatile uint8_t x397 = UINT8_MAX;
int64_t x399 = -1LL;
static int64_t x402 = -12250659126189LL;
int32_t t97 = -1;
static volatile int64_t x408 = INT64_MIN;
int32_t x410 = INT32_MAX;


void f0(void) {
	int8_t x1 = -1;
	int8_t x2 = -1;
	static volatile int32_t t0 = -104;

	t0 = (x1-((x2&x3)==x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MAX;
	uint8_t x10 = 45U;
	static int64_t x12 = -3424531766321LL;
	static volatile int32_t t1 = 189686;

	t1 = (x9-((x10&x11)==x12));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MIN;
	uint8_t x14 = 102U;
	int8_t x15 = -1;
	int32_t x16 = INT32_MIN;

	t2 = (x13-((x14&x15)==x16));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 3U;
	static uint8_t x18 = UINT8_MAX;
	int64_t x19 = -344745882LL;
	volatile int64_t x20 = INT64_MAX;
	int32_t t3 = 1;

	t3 = (x17-((x18&x19)==x20));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x22 = 1U;
	static volatile uint64_t x23 = UINT64_MAX;
	int32_t x24 = INT32_MAX;

	t4 = (x21-((x22&x23)==x24));

	if (t4 != 12796) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x27 = INT64_MIN;
	static volatile uint32_t t5 = 9285466U;

	t5 = (x25-((x26&x27)==x28));

	if (t5 != 80U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	static uint32_t x30 = 208U;
	int8_t x31 = INT8_MIN;
	static uint32_t t6 = UINT32_MAX;

	t6 = (x29-((x30&x31)==x32));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = INT16_MIN;
	volatile int16_t x35 = 0;
	volatile int32_t t7 = -34053526;

	t7 = (x33-((x34&x35)==x36));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = 766535071571706LL;
	uint64_t x38 = 1LLU;
	volatile int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	int64_t t8 = -141LL;

	t8 = (x37-((x38&x39)==x40));

	if (t8 != 766535071571706LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = INT64_MIN;
	uint32_t x42 = UINT32_MAX;
	static int8_t x43 = -1;
	uint32_t x44 = 9162796U;
	int64_t t9 = INT64_MIN;

	t9 = (x41-((x42&x43)==x44));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 2U;
	int8_t x46 = INT8_MIN;
	static int8_t x47 = INT8_MIN;

	t10 = (x45-((x46&x47)==x48));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -19;
	int8_t x50 = 12;
	static volatile uint8_t x52 = 0U;
	volatile int32_t t11 = -16;

	t11 = (x49-((x50&x51)==x52));

	if (t11 != -20) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = 1U;
	int16_t x54 = INT16_MAX;
	uint64_t x56 = 213915774454310477LLU;
	int32_t t12 = 29535754;

	t12 = (x53-((x54&x55)==x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int8_t x58 = -5;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t13 = 1;

	t13 = (x57-((x58&x59)==x60));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 17471633077402461LLU;
	volatile uint32_t x62 = UINT32_MAX;
	int8_t x64 = INT8_MIN;
	uint64_t t14 = 24957698685248595LLU;

	t14 = (x61-((x62&x63)==x64));

	if (t14 != 17471633077402461LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int64_t x66 = -1LL;
	int64_t x67 = INT64_MAX;
	int16_t x68 = INT16_MIN;
	static int32_t t15 = 232589660;

	t15 = (x65-((x66&x67)==x68));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MIN;
	int16_t x71 = -174;
	int32_t x72 = -1;
	volatile int32_t t16 = INT32_MIN;

	t16 = (x69-((x70&x71)==x72));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MAX;
	static volatile uint64_t x75 = 42131865LLU;
	static volatile int8_t x76 = 46;

	t17 = (x73-((x74&x75)==x76));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 220U;
	int64_t x79 = -35434209393779LL;
	static int8_t x80 = INT8_MAX;
	int32_t t18 = 80781430;

	t18 = (x77-((x78&x79)==x80));

	if (t18 != 220) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 22222210LL;
	int16_t x84 = INT16_MAX;
	int64_t t19 = 2583344LL;

	t19 = (x81-((x82&x83)==x84));

	if (t19 != 22222210LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	volatile uint16_t x86 = UINT16_MAX;
	int8_t x87 = -1;
	static int8_t x88 = INT8_MIN;
	int64_t t20 = INT64_MAX;

	t20 = (x85-((x86&x87)==x88));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -122539227;
	int64_t x90 = 94615968150LL;
	static int16_t x91 = -1;
	uint64_t x92 = 4053192LLU;
	volatile int32_t t21 = 20241326;

	t21 = (x89-((x90&x91)==x92));

	if (t21 != -122539227) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 0U;
	int8_t x94 = -1;
	static uint8_t x95 = UINT8_MAX;
	uint64_t x96 = 28154443268333110LLU;
	int32_t t22 = -13;

	t22 = (x93-((x94&x95)==x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 0U;
	uint8_t x98 = 2U;
	int16_t x99 = 2;
	int16_t x100 = -1168;

	t23 = (x97-((x98&x99)==x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MAX;
	int32_t x103 = -304578288;
	int8_t x104 = -1;
	volatile int32_t t24 = 40;

	t24 = (x101-((x102&x103)==x104));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = 3LL;
	int8_t x106 = 1;
	uint8_t x107 = UINT8_MAX;
	static int64_t t25 = -3028486LL;

	t25 = (x105-((x106&x107)==x108));

	if (t25 != 3LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x110 = UINT16_MAX;
	int64_t x111 = -1LL;
	int16_t x112 = 1802;
	volatile int32_t t26 = 291568;

	t26 = (x109-((x110&x111)==x112));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x114 = 180685210U;
	volatile int64_t x116 = -3745494645754669LL;

	t27 = (x113-((x114&x115)==x116));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 378587851648LLU;
	volatile uint64_t t28 = 1391078886077LLU;

	t28 = (x117-((x118&x119)==x120));

	if (t28 != 378587851648LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = UINT16_MAX;
	uint32_t x122 = 67U;
	uint64_t x123 = UINT64_MAX;
	int32_t t29 = 243039;

	t29 = (x121-((x122&x123)==x124));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 704773891333LLU;
	int8_t x126 = -1;
	volatile uint32_t x127 = UINT32_MAX;
	uint64_t x128 = 127503LLU;
	volatile uint64_t t30 = 2924LLU;

	t30 = (x125-((x126&x127)==x128));

	if (t30 != 704773891333LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = -3457098242779180201LL;
	int64_t x130 = -1LL;
	static int16_t x131 = 0;
	int64_t x132 = INT64_MAX;
	static int64_t t31 = 68LL;

	t31 = (x129-((x130&x131)==x132));

	if (t31 != -3457098242779180201LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	static int32_t x134 = -1;
	static int8_t x135 = -1;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x133-((x134&x135)==x136));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	int8_t x139 = -1;
	static volatile int64_t x140 = 0LL;
	int32_t t33 = -10929;

	t33 = (x137-((x138&x139)==x140));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = -968143781LL;
	int64_t x143 = INT64_MIN;
	volatile int32_t t34 = 9267299;

	t34 = (x141-((x142&x143)==x144));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	static int64_t x146 = INT64_MAX;
	static volatile uint8_t x147 = UINT8_MAX;
	uint64_t x148 = UINT64_MAX;
	int32_t t35 = 431786;

	t35 = (x145-((x146&x147)==x148));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 40U;
	volatile uint16_t x154 = 358U;

	t36 = (x153-((x154&x155)==x156));

	if (t36 != 40) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = -31630LL;
	volatile int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MAX;
	int32_t t37 = -1994457;

	t37 = (x157-((x158&x159)==x160));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MIN;
	volatile uint8_t x163 = 5U;
	int16_t x164 = -1;
	int32_t t38 = 477969;

	t38 = (x161-((x162&x163)==x164));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	static uint16_t x166 = UINT16_MAX;
	uint64_t x168 = UINT64_MAX;
	volatile int64_t t39 = INT64_MIN;

	t39 = (x165-((x166&x167)==x168));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	int64_t x172 = -1LL;
	int64_t t40 = INT64_MIN;

	t40 = (x169-((x170&x171)==x172));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 0U;
	int8_t x174 = INT8_MIN;
	int32_t x176 = INT32_MIN;

	t41 = (x173-((x174&x175)==x176));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	volatile int64_t x178 = -18LL;
	int32_t x179 = 98438636;
	int64_t x180 = 9768784238596609LL;
	int32_t t42 = -73648535;

	t42 = (x177-((x178&x179)==x180));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x182 = -1;
	volatile uint32_t x183 = 267739U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t43 = -26214460;

	t43 = (x181-((x182&x183)==x184));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = 0;
	volatile int16_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	volatile int32_t t44 = 5;

	t44 = (x185-((x186&x187)==x188));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x189 = 572509056U;
	volatile int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	int16_t x192 = -1;
	uint32_t t45 = 427192U;

	t45 = (x189-((x190&x191)==x192));

	if (t45 != 572509056U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = UINT16_MAX;
	uint16_t x195 = 48U;
	int32_t t46 = 411;

	t46 = (x193-((x194&x195)==x196));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MIN;
	static int16_t x199 = INT16_MAX;
	static int8_t x200 = INT8_MAX;

	t47 = (x197-((x198&x199)==x200));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = -1LL;
	int64_t x203 = INT64_MIN;
	volatile uint64_t x204 = UINT64_MAX;

	t48 = (x201-((x202&x203)==x204));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = 57618U;
	int32_t x206 = INT32_MAX;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = INT16_MIN;
	volatile uint32_t t49 = 152U;

	t49 = (x205-((x206&x207)==x208));

	if (t49 != 57618U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x210 = -1;
	int8_t x211 = -1;
	int8_t x212 = 1;
	volatile uint32_t t50 = 676U;

	t50 = (x209-((x210&x211)==x212));

	if (t50 != 127290U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x214 = 10826U;
	static volatile int32_t x216 = INT32_MIN;
	volatile int64_t t51 = INT64_MIN;

	t51 = (x213-((x214&x215)==x216));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = -1;
	int16_t x218 = INT16_MAX;
	static int8_t x219 = INT8_MIN;
	static int8_t x220 = INT8_MIN;
	static volatile int32_t t52 = -59;

	t52 = (x217-((x218&x219)==x220));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x222 = INT32_MIN;
	uint64_t x223 = 2LLU;
	uint64_t x224 = UINT64_MAX;
	int32_t t53 = -226;

	t53 = (x221-((x222&x223)==x224));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = -16;
	int8_t x226 = INT8_MAX;
	volatile int32_t t54 = 48325921;

	t54 = (x225-((x226&x227)==x228));

	if (t54 != -16) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = INT32_MIN;
	int16_t x231 = -117;
	static int8_t x232 = INT8_MIN;

	t55 = (x229-((x230&x231)==x232));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x233 = INT16_MIN;
	static int32_t x234 = -1;
	int32_t x235 = INT32_MIN;
	int16_t x236 = -1;

	t56 = (x233-((x234&x235)==x236));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	volatile uint32_t x239 = 1U;
	int32_t x240 = -1;

	t57 = (x237-((x238&x239)==x240));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x242 = 11862021;
	int32_t x243 = -9396824;
	int16_t x244 = -128;
	int32_t t58 = INT32_MIN;

	t58 = (x241-((x242&x243)==x244));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile uint32_t x248 = 3U;
	int64_t t59 = INT64_MAX;

	t59 = (x245-((x246&x247)==x248));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x249 = INT16_MIN;
	static int64_t x250 = 53613875951060LL;
	static volatile int64_t x251 = -34821895LL;
	int32_t t60 = -376509740;

	t60 = (x249-((x250&x251)==x252));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = INT32_MIN;
	volatile int8_t x254 = INT8_MIN;
	static int32_t x255 = INT32_MIN;
	volatile int64_t x256 = -1LL;

	t61 = (x253-((x254&x255)==x256));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MAX;
	uint32_t x258 = UINT32_MAX;
	static int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MIN;

	t62 = (x257-((x258&x259)==x260));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x261 = INT16_MIN;
	uint16_t x264 = 0U;
	volatile int32_t t63 = 45361;

	t63 = (x261-((x262&x263)==x264));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MAX;
	int32_t x267 = -12623;
	int16_t x268 = INT16_MIN;
	int32_t t64 = -639013651;

	t64 = (x265-((x266&x267)==x268));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = 305;
	volatile int32_t x272 = -1;

	t65 = (x269-((x270&x271)==x272));

	if (t65 != 305) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = -1;
	uint16_t x275 = 234U;
	int8_t x276 = 58;
	int64_t t66 = INT64_MIN;

	t66 = (x273-((x274&x275)==x276));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x278 = 5U;
	int8_t x280 = INT8_MIN;
	volatile int32_t t67 = 7;

	t67 = (x277-((x278&x279)==x280));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	static volatile int32_t x283 = -1;
	uint8_t x284 = 33U;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (x281-((x282&x283)==x284));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x285 = -1;
	static int32_t x286 = INT32_MIN;
	static int64_t x287 = INT64_MIN;
	uint32_t x288 = 134351U;
	int32_t t69 = -1;

	t69 = (x285-((x286&x287)==x288));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x290 = INT8_MIN;
	volatile int8_t x291 = -1;
	int32_t t70 = INT32_MIN;

	t70 = (x289-((x290&x291)==x292));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MIN;
	int64_t x296 = INT64_MIN;
	static volatile int64_t t71 = INT64_MIN;

	t71 = (x293-((x294&x295)==x296));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 43U;
	uint64_t x299 = UINT64_MAX;
	static volatile int32_t x300 = INT32_MAX;
	int32_t t72 = -1;

	t72 = (x297-((x298&x299)==x300));

	if (t72 != 43) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	static uint8_t x302 = UINT8_MAX;
	volatile uint64_t x303 = 5445342LLU;
	static volatile int32_t t73 = INT32_MIN;

	t73 = (x301-((x302&x303)==x304));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = 6U;
	static int8_t x306 = INT8_MIN;
	volatile uint32_t x307 = 5948U;
	volatile int32_t x308 = INT32_MIN;
	static int32_t t74 = -496880972;

	t74 = (x305-((x306&x307)==x308));

	if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x309 = 2066494LLU;
	volatile int64_t x310 = INT64_MAX;
	uint32_t x311 = 170894972U;
	volatile uint64_t t75 = 5681704944LLU;

	t75 = (x309-((x310&x311)==x312));

	if (t75 != 2066494LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = -1;
	static uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t76 = 238448;

	t76 = (x313-((x314&x315)==x316));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x317 = 12110LLU;
	int64_t x318 = INT64_MIN;
	uint8_t x319 = 0U;
	volatile int64_t x320 = INT64_MAX;
	uint64_t t77 = 3501023LLU;

	t77 = (x317-((x318&x319)==x320));

	if (t77 != 12110LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x324 = -37;
	int32_t t78 = -3011904;

	t78 = (x321-((x322&x323)==x324));

	if (t78 != 818) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MAX;
	uint16_t x327 = 3275U;
	int64_t t79 = INT64_MAX;

	t79 = (x325-((x326&x327)==x328));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = 113U;
	static volatile uint64_t x330 = 11722531LLU;
	uint32_t x331 = 2215313U;
	int32_t x332 = -1;

	t80 = (x329-((x330&x331)==x332));

	if (t80 != 113) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x334 = 0U;
	int64_t x335 = -26938831201055318LL;
	int8_t x336 = INT8_MIN;
	volatile int32_t t81 = -12728637;

	t81 = (x333-((x334&x335)==x336));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x338 = INT16_MIN;
	int64_t x339 = -584807132419248913LL;
	int16_t x340 = 0;
	int32_t t82 = 2;

	t82 = (x337-((x338&x339)==x340));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x342 = -135783419953569302LL;

	t83 = (x341-((x342&x343)==x344));

	if (t83 != 1825721430749LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x345 = INT32_MIN;
	volatile uint8_t x346 = UINT8_MAX;
	static int16_t x347 = -1;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x345-((x346&x347)==x348));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x349 = 4064;
	uint16_t x350 = 1U;
	int8_t x351 = 12;

	t85 = (x349-((x350&x351)==x352));

	if (t85 != 4064) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x354 = 239U;
	int8_t x355 = 31;
	volatile uint32_t x356 = UINT32_MAX;

	t86 = (x353-((x354&x355)==x356));

	if (t86 != -9) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = INT8_MIN;
	uint64_t x358 = 179938755045LLU;
	int16_t x360 = -1;

	t87 = (x357-((x358&x359)==x360));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x361 = 18U;
	volatile int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MIN;
	int64_t x364 = -704926953041LL;
	int32_t t88 = -7;

	t88 = (x361-((x362&x363)==x364));

	if (t88 != 18) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x365 = 964481U;
	int8_t x366 = INT8_MIN;

	t89 = (x365-((x366&x367)==x368));

	if (t89 != 964481U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = 3;
	volatile int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MIN;
	int32_t t90 = 1988161;

	t90 = (x369-((x370&x371)==x372));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MIN;
	int16_t x375 = -1;
	static int32_t x376 = INT32_MIN;
	static volatile int32_t t91 = 0;

	t91 = (x373-((x374&x375)==x376));

	if (t91 != 2147483646) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int32_t x383 = INT32_MIN;
	static uint16_t x384 = 1U;
	int32_t t92 = 1;

	t92 = (x381-((x382&x383)==x384));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = -1;
	static int16_t x387 = 1;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t93 = -46407940;

	t93 = (x385-((x386&x387)==x388));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x390 = -1LL;
	static uint16_t x391 = UINT16_MAX;
	uint64_t x392 = 2348703695LLU;

	t94 = (x389-((x390&x391)==x392));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x393 = INT32_MAX;
	uint32_t x394 = 1579112534U;
	int32_t x395 = INT32_MIN;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t95 = INT32_MAX;

	t95 = (x393-((x394&x395)==x396));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x398 = INT64_MIN;
	uint32_t x400 = 12U;
	volatile int32_t t96 = -4013737;

	t96 = (x397-((x398&x399)==x400));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = 5;
	int16_t x403 = INT16_MIN;
	static uint16_t x404 = 47U;

	t97 = (x401-((x402&x403)==x404));

	if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = -8;
	int64_t x406 = 136115523525LL;
	volatile uint8_t x407 = 0U;
	int32_t t98 = -847;

	t98 = (x405-((x406&x407)==x408));

	if (t98 != -8) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = 2LL;
	int64_t x411 = INT64_MIN;
	volatile uint8_t x412 = 62U;
	volatile int64_t t99 = 237737LL;

	t99 = (x409-((x410&x411)==x412));

	if (t99 != 2LL) { NG(); } else { ; }
	
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

