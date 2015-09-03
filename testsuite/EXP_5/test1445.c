#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
uint64_t t1 = UINT64_MAX;
uint16_t x9 = 505U;
volatile int8_t x10 = INT8_MIN;
int32_t t2 = 0;
int32_t t3 = 287983;
uint32_t x17 = UINT32_MAX;
uint32_t t4 = UINT32_MAX;
int32_t t6 = -138374362;
static uint32_t x29 = 1219U;
int16_t x31 = -1;
uint64_t x34 = 614106175080432LLU;
int32_t x39 = INT32_MIN;
int64_t x44 = -1LL;
int16_t x51 = INT16_MAX;
volatile int32_t t12 = 225424;
int32_t x54 = INT32_MIN;
uint32_t t13 = UINT32_MAX;
volatile uint8_t x66 = UINT8_MAX;
volatile int32_t t17 = -405175;
static int16_t x79 = INT16_MIN;
int64_t x82 = INT64_MAX;
uint8_t x83 = 7U;
int32_t x87 = INT32_MIN;
static int16_t x89 = INT16_MAX;
int32_t t23 = -152;
int16_t x98 = -1;
uint64_t x100 = 3645077LLU;
static int32_t t25 = INT32_MAX;
int64_t x107 = -9420332LL;
volatile int32_t t26 = -20;
int64_t x124 = -1LL;
static uint64_t x134 = 804196137966416LLU;
int8_t x136 = INT8_MIN;
int16_t x147 = INT16_MAX;
static uint64_t x148 = 494224926313523LLU;
int32_t x149 = INT32_MAX;
static int16_t x151 = INT16_MAX;
uint16_t x157 = 6894U;
int8_t x159 = -1;
int32_t x160 = 189920;
int64_t x166 = INT64_MIN;
volatile int8_t x167 = INT8_MIN;
static volatile int8_t x170 = INT8_MAX;
uint64_t x175 = 213383591794LLU;
static int32_t t43 = -5099787;
uint16_t x177 = 1U;
volatile int32_t t45 = -809;
volatile int32_t t46 = 1;
static int8_t x191 = INT8_MIN;
int8_t x192 = -1;
int32_t t47 = -1;
int64_t x200 = -7LL;
volatile int32_t t50 = -342258;
int16_t x208 = INT16_MAX;
volatile int32_t t51 = -9584;
static uint8_t x212 = UINT8_MAX;
uint8_t x218 = 2U;
int32_t t54 = -27690;
uint64_t x224 = 609468002LLU;
volatile int32_t x230 = 169891;
int8_t x231 = -1;
int8_t x233 = -1;
int8_t x234 = -1;
volatile uint8_t x239 = UINT8_MAX;
static int64_t t59 = -13222LL;
int64_t x244 = INT64_MIN;
int32_t t60 = 17841665;
int8_t x245 = INT8_MIN;
int32_t x253 = INT32_MAX;
int64_t x254 = INT64_MIN;
int16_t x256 = -15;
uint64_t x257 = 6623071LLU;
volatile int8_t x260 = INT8_MAX;
volatile uint64_t t64 = 1303983855060107467LLU;
int8_t x262 = INT8_MIN;
static int8_t x270 = 0;
int16_t x274 = INT16_MAX;
int8_t x276 = INT8_MAX;
int32_t x282 = INT32_MAX;
int32_t x285 = -1;
volatile uint32_t x287 = UINT32_MAX;
static uint8_t x290 = 83U;
uint8_t x296 = 55U;
volatile uint32_t x300 = 108U;
volatile int32_t t74 = 1265618;
volatile int32_t t75 = -125966;
uint64_t x305 = 73LLU;
int32_t x307 = INT32_MAX;
int32_t x313 = INT32_MAX;
int64_t x319 = INT64_MIN;
int32_t x323 = -1;
static int32_t t81 = 812;
volatile int32_t t82 = -988;
int32_t x334 = INT32_MIN;
static uint8_t x343 = 3U;
static int32_t t85 = 49;
int64_t x345 = INT64_MIN;
volatile int64_t t86 = INT64_MIN;
int32_t x357 = 1063;
int64_t x361 = INT64_MAX;
volatile int64_t x370 = INT64_MAX;
int16_t x376 = INT16_MIN;
int64_t x382 = INT64_MIN;
uint64_t x388 = 2387254LLU;
int32_t x392 = INT32_MIN;
volatile int8_t x397 = -7;
volatile int32_t t99 = 983736;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static uint8_t x3 = 48U;
	int32_t x4 = -1;
	int32_t t0 = 3163;

	t0 = (x1-((x2<x3)==x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	int8_t x6 = INT8_MIN;
	volatile int32_t x7 = -13119020;
	int16_t x8 = INT16_MIN;

	t1 = (x5-((x6<x7)==x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 807158612729886455LLU;

	t2 = (x9-((x10<x11)==x12));

	if (t2 != 505) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 133U;
	int64_t x14 = -1LL;
	static uint8_t x15 = UINT8_MAX;
	int64_t x16 = INT64_MIN;

	t3 = (x13-((x14<x15)==x16));

	if (t3 != 133) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = 3U;
	int32_t x19 = -1502;
	volatile int8_t x20 = INT8_MAX;

	t4 = (x17-((x18<x19)==x20));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 4U;
	static volatile int64_t x22 = INT64_MIN;
	static uint32_t x23 = 3560911U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 184941;

	t5 = (x21-((x22<x23)==x24));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 2U;
	int16_t x26 = INT16_MIN;
	volatile int8_t x27 = INT8_MIN;
	uint32_t x28 = 23082U;

	t6 = (x25-((x26<x27)==x28));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = UINT16_MAX;
	uint16_t x32 = 1U;
	volatile uint32_t t7 = 2615931U;

	t7 = (x29-((x30<x31)==x32));

	if (t7 != 1219U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = 472;
	int16_t x35 = INT16_MIN;
	volatile int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 331;

	t8 = (x33-((x34<x35)==x36));

	if (t8 != 472) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint8_t x38 = 4U;
	uint64_t x40 = UINT64_MAX;
	int32_t t9 = 58592;

	t9 = (x37-((x38<x39)==x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	uint16_t x42 = 1715U;
	volatile int32_t x43 = INT32_MIN;
	volatile int32_t t10 = 4513865;

	t10 = (x41-((x42<x43)==x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -174;
	int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MAX;
	uint16_t x48 = 37U;
	static volatile int32_t t11 = -1;

	t11 = (x45-((x46<x47)==x48));

	if (t11 != -174) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -610;
	int16_t x50 = INT16_MIN;
	int64_t x52 = 54829403824LL;

	t12 = (x49-((x50<x51)==x52));

	if (t12 != -610) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	uint8_t x55 = 29U;
	uint8_t x56 = 121U;

	t13 = (x53-((x54<x55)==x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 4U;
	int16_t x58 = INT16_MIN;
	volatile int8_t x59 = INT8_MIN;
	static uint16_t x60 = 3893U;
	volatile int32_t t14 = 1006;

	t14 = (x57-((x58<x59)==x60));

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 60U;
	static int16_t x62 = -1;
	static volatile int8_t x63 = -1;
	uint32_t x64 = 113352622U;
	static volatile int32_t t15 = 0;

	t15 = (x61-((x62<x63)==x64));

	if (t15 != 60) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	volatile int8_t x67 = INT8_MAX;
	uint16_t x68 = 41U;
	volatile int32_t t16 = -18845;

	t16 = (x65-((x66<x67)==x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MAX;
	volatile int64_t x71 = 2031089LL;
	volatile int8_t x72 = 33;

	t17 = (x69-((x70<x71)==x72));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = -1LL;
	volatile uint16_t x75 = 1013U;
	static uint16_t x76 = UINT16_MAX;
	static volatile uint64_t t18 = UINT64_MAX;

	t18 = (x73-((x74<x75)==x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -296;
	volatile int64_t x78 = -1LL;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -127919;

	t19 = (x77-((x78<x79)==x80));

	if (t19 != -296) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 3U;
	static int32_t x84 = INT32_MAX;
	volatile int32_t t20 = 8168;

	t20 = (x81-((x82<x83)==x84));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 112402445;

	t21 = (x85-((x86<x87)==x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 88U;
	static int16_t x91 = INT16_MAX;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = 237188523;

	t22 = (x89-((x90<x91)==x92));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -1;
	volatile uint8_t x94 = 50U;
	uint64_t x95 = 5152111255753305LLU;
	int64_t x96 = INT64_MIN;

	t23 = (x93-((x94<x95)==x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int64_t x99 = INT64_MIN;
	static volatile int64_t t24 = 3LL;

	t24 = (x97-((x98<x99)==x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	int64_t x102 = -1LL;
	uint64_t x103 = 33109LLU;
	int16_t x104 = INT16_MIN;

	t25 = (x101-((x102<x103)==x104));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	static volatile int16_t x106 = INT16_MIN;
	uint16_t x108 = 734U;

	t26 = (x105-((x106<x107)==x108));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -66309686;
	uint64_t x110 = 1870171147581037792LLU;
	volatile uint8_t x111 = 56U;
	int8_t x112 = 44;
	volatile int32_t t27 = 610;

	t27 = (x109-((x110<x111)==x112));

	if (t27 != -66309686) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 23U;
	int32_t x114 = INT32_MAX;
	volatile int32_t x115 = -11788;
	volatile uint8_t x116 = 2U;
	volatile int32_t t28 = -5343;

	t28 = (x113-((x114<x115)==x116));

	if (t28 != 23) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 10LL;
	int64_t x118 = -1LL;
	uint32_t x119 = 12502U;
	volatile uint64_t x120 = UINT64_MAX;
	int64_t t29 = 92483LL;

	t29 = (x117-((x118<x119)==x120));

	if (t29 != 10LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	int64_t x122 = -120095358698LL;
	static int64_t x123 = INT64_MIN;
	int32_t t30 = INT32_MIN;

	t30 = (x121-((x122<x123)==x124));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = 12853;
	volatile int32_t x127 = 89015498;
	static int8_t x128 = -2;
	int32_t t31 = -29080475;

	t31 = (x125-((x126<x127)==x128));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int32_t x130 = 1;
	uint32_t x131 = 391545754U;
	int8_t x132 = INT8_MAX;
	static int32_t t32 = 966450;

	t32 = (x129-((x130<x131)==x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -581987301LL;
	uint8_t x135 = UINT8_MAX;
	volatile int64_t t33 = 1567368LL;

	t33 = (x133-((x134<x135)==x136));

	if (t33 != -581987301LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 548285876U;
	static volatile int64_t x138 = 26683LL;
	int8_t x139 = INT8_MIN;
	static int8_t x140 = INT8_MIN;
	static volatile uint32_t t34 = 99840U;

	t34 = (x137-((x138<x139)==x140));

	if (t34 != 548285876U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MIN;
	static uint64_t x144 = UINT64_MAX;
	int64_t t35 = INT64_MIN;

	t35 = (x141-((x142<x143)==x144));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 68394466993623070LLU;
	static uint16_t x146 = UINT16_MAX;
	volatile uint64_t t36 = 301604LLU;

	t36 = (x145-((x146<x147)==x148));

	if (t36 != 68394466993623070LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = -3289;
	uint32_t x152 = 30796795U;
	int32_t t37 = INT32_MAX;

	t37 = (x149-((x150<x151)==x152));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 1U;
	int64_t x154 = INT64_MAX;
	uint32_t x155 = UINT32_MAX;
	int16_t x156 = -2;
	int32_t t38 = 208140;

	t38 = (x153-((x154<x155)==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x158 = INT8_MIN;
	static int32_t t39 = -1;

	t39 = (x157-((x158<x159)==x160));

	if (t39 != 6894) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	int32_t x162 = 12532;
	uint16_t x163 = 1937U;
	uint32_t x164 = 4809U;
	volatile int32_t t40 = -16;

	t40 = (x161-((x162<x163)==x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = 29617U;
	int32_t x168 = INT32_MIN;
	uint32_t t41 = 27U;

	t41 = (x165-((x166<x167)==x168));

	if (t41 != 29617U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x171 = 19250U;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -8683246;

	t42 = (x169-((x170<x171)==x172));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MAX;
	volatile int32_t x174 = -16198826;
	int32_t x176 = INT32_MIN;

	t43 = (x173-((x174<x175)==x176));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -1;
	int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t44 = 194721;

	t44 = (x177-((x178<x179)==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 29U;
	static int8_t x182 = -1;
	uint16_t x183 = 13433U;
	uint64_t x184 = 70211537LLU;

	t45 = (x181-((x182<x183)==x184));

	if (t45 != 29) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -46;
	int32_t x186 = INT32_MIN;
	volatile int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;

	t46 = (x185-((x186<x187)==x188));

	if (t46 != -46) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	int64_t x190 = -1LL;

	t47 = (x189-((x190<x191)==x192));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	int16_t x194 = -1;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 47U;
	volatile int32_t t48 = 33812186;

	t48 = (x193-((x194<x195)==x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	volatile int64_t x198 = INT64_MIN;
	int32_t x199 = -17;
	volatile int32_t t49 = INT32_MIN;

	t49 = (x197-((x198<x199)==x200));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MIN;
	volatile int32_t x203 = INT32_MIN;
	int8_t x204 = 1;

	t50 = (x201-((x202<x203)==x204));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	int32_t x207 = 1;

	t51 = (x205-((x206<x207)==x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 129380126LLU;
	int16_t x210 = 21;
	volatile uint8_t x211 = 2U;
	uint64_t t52 = 119343755624622629LLU;

	t52 = (x209-((x210<x211)==x212));

	if (t52 != 129380126LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MIN;
	volatile int8_t x215 = INT8_MAX;
	volatile int64_t x216 = INT64_MIN;
	int32_t t53 = 0;

	t53 = (x213-((x214<x215)==x216));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = -2;

	t54 = (x217-((x218<x219)==x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -78007;
	static int8_t x222 = INT8_MAX;
	volatile int8_t x223 = INT8_MIN;
	int32_t t55 = 43889;

	t55 = (x221-((x222<x223)==x224));

	if (t55 != -78007) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MAX;
	uint16_t x228 = 0U;
	static uint32_t t56 = UINT32_MAX;

	t56 = (x225-((x226<x227)==x228));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 13;
	volatile int32_t x232 = 34375;
	int32_t t57 = -1405;

	t57 = (x229-((x230<x231)==x232));

	if (t57 != 13) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x235 = INT64_MAX;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = -96405;

	t58 = (x233-((x234<x235)==x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -18348976LL;
	volatile int8_t x238 = INT8_MIN;
	int16_t x240 = INT16_MIN;

	t59 = (x237-((x238<x239)==x240));

	if (t59 != -18348976LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 120U;
	int8_t x242 = -1;
	static volatile int32_t x243 = 3633;

	t60 = (x241-((x242<x243)==x244));

	if (t60 != 120) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = INT8_MIN;
	static int16_t x247 = 0;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = 0;

	t61 = (x245-((x246<x247)==x248));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 694200350U;
	static int64_t x250 = 16623822207709LL;
	int32_t x251 = 0;
	volatile int8_t x252 = INT8_MIN;
	static uint32_t t62 = 1559604U;

	t62 = (x249-((x250<x251)==x252));

	if (t62 != 694200350U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x255 = INT8_MAX;
	static int32_t t63 = INT32_MAX;

	t63 = (x253-((x254<x255)==x256));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 1LLU;
	static uint32_t x259 = 0U;

	t64 = (x257-((x258<x259)==x260));

	if (t64 != 6623071LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 55513U;
	static int16_t x263 = 102;
	static int16_t x264 = INT16_MIN;
	static volatile uint32_t t65 = 64114831U;

	t65 = (x261-((x262<x263)==x264));

	if (t65 != 55513U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	static int32_t x266 = INT32_MIN;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 4729240;

	t66 = (x265-((x266<x267)==x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	static int16_t x271 = INT16_MIN;
	uint32_t x272 = 4636U;
	volatile int32_t t67 = 40694;

	t67 = (x269-((x270<x271)==x272));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 670566716U;
	uint64_t x275 = UINT64_MAX;
	volatile uint32_t t68 = 76722U;

	t68 = (x273-((x274<x275)==x276));

	if (t68 != 670566716U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = 0;
	static volatile int16_t x279 = 6355;
	int32_t x280 = 0;
	int32_t t69 = INT32_MIN;

	t69 = (x277-((x278<x279)==x280));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static volatile int8_t x283 = INT8_MAX;
	uint32_t x284 = 1248701030U;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x281-((x282<x283)==x284));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	int64_t x288 = -265275934LL;
	int32_t t71 = 128385;

	t71 = (x285-((x286<x287)==x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -6444;
	static int16_t x291 = INT16_MIN;
	int32_t x292 = 40949184;
	volatile int32_t t72 = -2717;

	t72 = (x289-((x290<x291)==x292));

	if (t72 != -6444) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	int64_t x295 = 3897328LL;
	static volatile int32_t t73 = 1;

	t73 = (x293-((x294<x295)==x296));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -1;
	static int32_t x298 = -505835;
	int16_t x299 = -114;

	t74 = (x297-((x298<x299)==x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 1;
	int16_t x302 = -1;
	int64_t x303 = 748745969409583066LL;
	uint16_t x304 = 39U;

	t75 = (x301-((x302<x303)==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = 10821;
	int8_t x308 = 3;
	volatile uint64_t t76 = 1368020170489730373LLU;

	t76 = (x305-((x306<x307)==x308));

	if (t76 != 73LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 4U;
	int16_t x310 = INT16_MIN;
	int64_t x311 = 17725376630776197LL;
	int8_t x312 = 2;
	volatile int32_t t77 = 166039533;

	t77 = (x309-((x310<x311)==x312));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MAX;
	volatile int8_t x315 = INT8_MIN;
	volatile int32_t x316 = -1;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x313-((x314<x315)==x316));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int32_t x318 = INT32_MAX;
	static volatile int64_t x320 = -1LL;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x317-((x318<x319)==x320));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = INT16_MIN;
	int16_t x322 = 3920;
	int32_t x324 = INT32_MAX;
	int32_t t80 = -17236;

	t80 = (x321-((x322<x323)==x324));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MAX;
	uint8_t x326 = 1U;
	int64_t x327 = INT64_MAX;
	int16_t x328 = 0;

	t81 = (x325-((x326<x327)==x328));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = -405;
	int64_t x330 = 307617LL;
	static int64_t x331 = 198LL;
	static int64_t x332 = -1LL;

	t82 = (x329-((x330<x331)==x332));

	if (t82 != -405) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	int16_t x335 = INT16_MIN;
	volatile int8_t x336 = 13;
	int32_t t83 = 945536581;

	t83 = (x333-((x334<x335)==x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	uint64_t x338 = 441684606829741275LLU;
	int32_t x339 = INT32_MAX;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = 104938;

	t84 = (x337-((x338<x339)==x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MIN;
	int32_t x344 = -1;

	t85 = (x341-((x342<x343)==x344));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -1;
	int16_t x347 = INT16_MIN;
	static volatile uint8_t x348 = 123U;

	t86 = (x345-((x346<x347)==x348));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = 0LL;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	volatile int64_t x352 = INT64_MIN;
	int64_t t87 = -15792678LL;

	t87 = (x349-((x350<x351)==x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -7107;
	volatile int32_t x354 = -1;
	int16_t x355 = -94;
	uint64_t x356 = UINT64_MAX;
	int32_t t88 = -94623;

	t88 = (x353-((x354<x355)==x356));

	if (t88 != -7107) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 0U;
	volatile uint16_t x359 = UINT16_MAX;
	volatile int64_t x360 = -42111418554780LL;
	int32_t t89 = 14;

	t89 = (x357-((x358<x359)==x360));

	if (t89 != 1063) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = 884U;
	int8_t x363 = -5;
	int8_t x364 = -1;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x361-((x362<x363)==x364));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MAX;
	volatile int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int8_t x368 = 0;
	int32_t t91 = -17;

	t91 = (x365-((x366<x367)==x368));

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x371 = 2U;
	int64_t x372 = 9004086410LL;
	int64_t t92 = INT64_MIN;

	t92 = (x369-((x370<x371)==x372));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -6;
	volatile int16_t x374 = -3;
	uint8_t x375 = UINT8_MAX;
	volatile int32_t t93 = 1;

	t93 = (x373-((x374<x375)==x376));

	if (t93 != -6) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MAX;
	int32_t x378 = 1914;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -29;
	int32_t t94 = INT32_MAX;

	t94 = (x377-((x378<x379)==x380));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = 1008730974543580608LLU;
	uint32_t x383 = 27U;
	int64_t x384 = INT64_MAX;
	volatile uint64_t t95 = 634940922933643327LLU;

	t95 = (x381-((x382<x383)==x384));

	if (t95 != 1008730974543580608LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MAX;
	int64_t x387 = -125349LL;
	int32_t t96 = 0;

	t96 = (x385-((x386<x387)==x388));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 6058945221LLU;
	int64_t x390 = INT64_MAX;
	volatile uint16_t x391 = 15U;
	static volatile uint64_t t97 = 18LLU;

	t97 = (x389-((x390<x391)==x392));

	if (t97 != 6058945221LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 6763499U;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = -1;
	int8_t x396 = INT8_MAX;
	volatile uint32_t t98 = 799U;

	t98 = (x393-((x394<x395)==x396));

	if (t98 != 6763499U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MIN;
	volatile int16_t x400 = INT16_MIN;

	t99 = (x397-((x398<x399)==x400));

	if (t99 != -7) { NG(); } else { ; }
	
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

