#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x6 = UINT8_MAX;
static volatile uint16_t x11 = UINT16_MAX;
volatile int16_t x12 = 13076;
int8_t x13 = 1;
static uint64_t x16 = 77987350617947579LLU;
int16_t x17 = 12663;
static uint32_t x21 = UINT32_MAX;
int32_t x23 = INT32_MAX;
static int16_t x27 = -1727;
int32_t x30 = -37500382;
int64_t x31 = 238LL;
volatile int32_t x33 = -936;
int32_t x36 = 5199;
int64_t t7 = -60LL;
int16_t x39 = INT16_MAX;
int64_t t9 = -2026927193743159664LL;
uint32_t x48 = UINT32_MAX;
int16_t x51 = INT16_MAX;
int8_t x52 = 1;
static int64_t t11 = -30LL;
int16_t x53 = -1;
static int16_t x57 = -1;
volatile int32_t t13 = 11;
int8_t x66 = INT8_MAX;
int16_t x77 = 2674;
uint16_t x79 = 9594U;
int16_t x81 = INT16_MIN;
uint32_t x82 = 259616153U;
int8_t x89 = INT8_MIN;
uint64_t x92 = 54LLU;
static int16_t x96 = -226;
uint32_t x100 = UINT32_MAX;
int32_t x122 = INT32_MIN;
int16_t x125 = 5;
uint32_t t28 = 167131U;
int8_t x129 = INT8_MIN;
static uint64_t x135 = UINT64_MAX;
uint16_t x139 = 2923U;
volatile int32_t t31 = -1;
uint32_t x144 = UINT32_MAX;
static volatile int32_t t32 = 2222;
static int16_t x150 = INT16_MAX;
uint16_t x151 = UINT16_MAX;
volatile int64_t x167 = INT64_MIN;
int32_t x177 = INT32_MAX;
uint32_t x180 = 881785811U;
static volatile int8_t x184 = INT8_MAX;
static volatile int32_t t44 = -1781;
volatile int8_t x199 = INT8_MAX;
static int16_t x201 = INT16_MIN;
int32_t t49 = -1;
volatile uint64_t t50 = 17247413509616LLU;
static int32_t x225 = 9083187;
volatile uint16_t x229 = UINT16_MAX;
int64_t x232 = INT64_MAX;
int16_t x234 = INT16_MIN;
static volatile uint8_t x240 = 41U;
static int8_t x243 = INT8_MIN;
int32_t x246 = INT32_MAX;
volatile int8_t x253 = -1;
int64_t x262 = INT64_MIN;
int16_t x263 = INT16_MAX;
int32_t x265 = 0;
static int16_t x276 = INT16_MIN;
int8_t x279 = -8;
volatile int64_t t63 = 76036136033LL;
int64_t x298 = INT64_MAX;
int16_t x300 = INT16_MIN;
volatile int64_t t66 = 1354LL;
int64_t x302 = -1LL;
int64_t x305 = -30740705758LL;
volatile int8_t x306 = -1;
int8_t x310 = -1;
volatile uint32_t t69 = 4261U;
static int16_t x319 = INT16_MIN;
int8_t x322 = -1;
static int32_t t72 = 123310584;
int16_t x326 = -5;
uint8_t x330 = 0U;
volatile int32_t x340 = -8077;
int64_t x341 = 28767844477LL;
volatile int64_t t77 = 146356694LL;
uint64_t x348 = 33338886LLU;
uint64_t x349 = UINT64_MAX;
int16_t x353 = 375;
int32_t x360 = INT32_MIN;
int32_t x369 = 5;
uint16_t x371 = 8403U;
volatile uint32_t x380 = 399381288U;
int8_t x386 = INT8_MIN;
volatile int32_t t90 = -449;
uint64_t x398 = UINT64_MAX;
volatile uint16_t x401 = 1215U;
volatile uint8_t x402 = UINT8_MAX;
int16_t x404 = 9;
volatile int32_t t92 = -48;
int32_t x409 = INT32_MIN;
int16_t x422 = INT16_MIN;
int16_t x427 = INT16_MAX;
volatile int32_t x429 = INT32_MAX;
int32_t t98 = 17;
volatile uint64_t x435 = 6120428044009LLU;


void f0(void) {
	volatile uint8_t x5 = 6U;
	uint16_t x7 = 25U;
	static uint8_t x8 = 21U;
	static volatile int32_t t0 = -44747276;

	t0 = (x5%(x6-(x7<x8)));

	if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -137;
	uint32_t x10 = 296814386U;
	uint32_t t1 = 889604019U;

	t1 = (x9%(x10-(x11<x12)));

	if (t1 != 139565755U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MAX;
	uint32_t x15 = UINT32_MAX;
	int64_t t2 = -1LL;

	t2 = (x13%(x14-(x15<x16)));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 2U;
	int8_t x19 = 0;
	volatile int64_t x20 = INT64_MIN;
	volatile int32_t t3 = 4572000;

	t3 = (x17%(x18-(x19<x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x22 = 1U;
	uint8_t x24 = 40U;
	volatile uint32_t t4 = 792U;

	t4 = (x21%(x22-(x23<x24)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 250247364878153648LLU;
	static int8_t x26 = INT8_MAX;
	int8_t x28 = INT8_MAX;
	static volatile uint64_t t5 = 1LLU;

	t5 = (x25%(x26-(x27<x28)));

	if (t5 != 110LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 6U;
	int64_t x32 = INT64_MIN;
	volatile uint32_t t6 = 106721360U;

	t6 = (x29%(x30-(x31<x32)));

	if (t6 != 6U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = -63LL;
	uint32_t x35 = UINT32_MAX;

	t7 = (x33%(x34-(x35<x36)));

	if (t7 != -54LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = -4333771578LL;
	static int32_t x38 = -1;
	volatile int32_t x40 = 1;
	int64_t t8 = 10238230209LL;

	t8 = (x37%(x38-(x39<x40)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	volatile uint64_t x43 = UINT64_MAX;
	volatile uint8_t x44 = 37U;

	t9 = (x41%(x42-(x43<x44)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	int16_t x46 = INT16_MAX;
	int64_t x47 = INT64_MAX;
	volatile int32_t t10 = -10718;

	t10 = (x45%(x46-(x47<x48)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = -1;
	volatile int64_t x50 = -39267453LL;

	t11 = (x49%(x50-(x51<x52)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -30;
	volatile uint64_t x55 = 2189730271429LLU;
	int64_t x56 = -1LL;
	static int32_t t12 = 406586269;

	t12 = (x53%(x54-(x55<x56)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = INT16_MIN;
	volatile uint16_t x59 = 28951U;
	uint16_t x60 = UINT16_MAX;

	t13 = (x57%(x58-(x59<x60)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 271791706628701LLU;
	int64_t x64 = -6436337LL;
	static uint64_t t14 = 50807520735596073LLU;

	t14 = (x61%(x62-(x63<x64)));

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = -1LL;
	int16_t x67 = -1;
	uint64_t x68 = 26540602LLU;
	volatile int64_t t15 = -1366142LL;

	t15 = (x65%(x66-(x67<x68)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = UINT8_MAX;
	uint8_t x74 = 34U;
	volatile int64_t x75 = -1LL;
	static int64_t x76 = 5321060LL;
	volatile int32_t t16 = -20469388;

	t16 = (x73%(x74-(x75<x76)));

	if (t16 != 24) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = -35;
	volatile uint16_t x80 = 0U;
	int32_t t17 = 92573841;

	t17 = (x77%(x78-(x79<x80)));

	if (t17 != 14) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x83 = INT16_MAX;
	int64_t x84 = 9257905880124LL;
	static uint32_t t18 = 30U;

	t18 = (x81%(x82-(x83<x84)));

	if (t18 != 141076096U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x85 = INT16_MAX;
	int64_t x86 = -109479969LL;
	uint16_t x87 = 128U;
	int16_t x88 = INT16_MAX;
	int64_t t19 = -1297968LL;

	t19 = (x85%(x86-(x87<x88)));

	if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MAX;
	int32_t x91 = INT32_MIN;
	static volatile int32_t t20 = 33;

	t20 = (x89%(x90-(x91<x92)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	uint32_t x94 = 456U;
	static int16_t x95 = INT16_MIN;
	volatile uint32_t t21 = 459U;

	t21 = (x93%(x94-(x95<x96)));

	if (t21 != 255U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 773822801;
	uint32_t x98 = UINT32_MAX;
	uint16_t x99 = UINT16_MAX;
	volatile uint32_t t22 = 465U;

	t22 = (x97%(x98-(x99<x100)));

	if (t22 != 773822801U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	uint64_t x106 = 91097760419LLU;
	int64_t x107 = INT64_MAX;
	int8_t x108 = INT8_MAX;
	uint64_t t23 = 1844460941301232LLU;

	t23 = (x105%(x106-(x107<x108)));

	if (t23 != 5681232431LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	uint16_t x110 = 75U;
	static volatile int64_t x111 = 7716702276LL;
	int8_t x112 = INT8_MIN;
	uint64_t t24 = 2198018024293LLU;

	t24 = (x109%(x110-(x111<x112)));

	if (t24 != 15LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	static int16_t x114 = INT16_MIN;
	int8_t x115 = INT8_MIN;
	static uint8_t x116 = 2U;
	int32_t t25 = 2;

	t25 = (x113%(x114-(x115<x116)));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = 1;
	volatile int32_t x118 = INT32_MAX;
	static volatile int16_t x119 = INT16_MAX;
	static uint32_t x120 = UINT32_MAX;
	volatile int32_t t26 = -21890;

	t26 = (x117%(x118-(x119<x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MAX;
	int32_t x123 = -1;
	uint32_t x124 = UINT32_MAX;
	static volatile int32_t t27 = 61974;

	t27 = (x121%(x122-(x123<x124)));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x126 = 5741510U;
	volatile uint8_t x127 = 91U;
	volatile uint32_t x128 = 13U;

	t28 = (x125%(x126-(x127<x128)));

	if (t28 != 5U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x130 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = 3;
	volatile int32_t t29 = 1;

	t29 = (x129%(x130-(x131<x132)));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	uint8_t x134 = 7U;
	static uint64_t x136 = UINT64_MAX;
	int32_t t30 = 177080;

	t30 = (x133%(x134-(x135<x136)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 5U;
	int16_t x138 = -10;
	int64_t x140 = -1LL;

	t31 = (x137%(x138-(x139<x140)));

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x141 = INT16_MIN;
	static int8_t x142 = INT8_MIN;
	volatile uint64_t x143 = UINT64_MAX;

	t32 = (x141%(x142-(x143<x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x145 = INT16_MIN;
	static uint64_t x146 = UINT64_MAX;
	static int32_t x147 = 4267;
	int8_t x148 = INT8_MIN;
	static volatile uint64_t t33 = 51329LLU;

	t33 = (x145%(x146-(x147<x148)));

	if (t33 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = UINT8_MAX;
	int16_t x152 = -1;
	static int32_t t34 = -265676676;

	t34 = (x149%(x150-(x151<x152)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	volatile int32_t x154 = 228810;
	volatile int64_t x155 = INT64_MAX;
	uint64_t x156 = 1285743LLU;
	volatile int32_t t35 = 41082439;

	t35 = (x153%(x154-(x155<x156)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = 9;
	int64_t x158 = INT64_MAX;
	int32_t x159 = -3;
	uint64_t x160 = UINT64_MAX;
	volatile int64_t t36 = 4173484LL;

	t36 = (x157%(x158-(x159<x160)));

	if (t36 != 9LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x161 = 1;
	uint16_t x162 = UINT16_MAX;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 6LLU;
	int32_t t37 = -4625016;

	t37 = (x161%(x162-(x163<x164)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x165 = 33U;
	int32_t x166 = -724756;
	int32_t x168 = -1;
	volatile int32_t t38 = -338581875;

	t38 = (x165%(x166-(x167<x168)));

	if (t38 != 33) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x169 = UINT32_MAX;
	static volatile int32_t x170 = 1;
	uint32_t x171 = UINT32_MAX;
	static int64_t x172 = INT64_MIN;
	uint32_t t39 = 39U;

	t39 = (x169%(x170-(x171<x172)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = 1;
	volatile int32_t x174 = -992559;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = INT16_MAX;
	int32_t t40 = 19840;

	t40 = (x173%(x174-(x175<x176)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x178 = INT8_MAX;
	volatile int8_t x179 = -1;
	int32_t t41 = -1193750;

	t41 = (x177%(x178-(x179<x180)));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -26;
	volatile int64_t x182 = -1LL;
	int32_t x183 = -1;
	int64_t t42 = 0LL;

	t42 = (x181%(x182-(x183<x184)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = -1;
	uint64_t x190 = 209461849997LLU;
	int8_t x191 = -1;
	int16_t x192 = 35;
	static volatile uint64_t t43 = 6342805LLU;

	t43 = (x189%(x190-(x191<x192)));

	if (t43 != 92857970899LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = INT32_MIN;
	uint32_t x196 = 77920U;

	t44 = (x193%(x194-(x195<x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = -1;
	static uint8_t x200 = 1U;
	volatile int32_t t45 = 105;

	t45 = (x197%(x198-(x199<x200)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x202 = INT32_MIN;
	static int16_t x203 = -1;
	int32_t x204 = -1;
	int32_t t46 = 133924989;

	t46 = (x201%(x202-(x203<x204)));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 45U;
	uint8_t x206 = UINT8_MAX;
	uint16_t x207 = 1912U;
	int16_t x208 = -3;
	volatile uint32_t t47 = 867813876U;

	t47 = (x205%(x206-(x207<x208)));

	if (t47 != 45U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = -1;
	int32_t x214 = INT32_MAX;
	static int8_t x215 = INT8_MIN;
	static uint8_t x216 = 7U;
	int32_t t48 = -4115;

	t48 = (x213%(x214-(x215<x216)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x217 = -1;
	volatile int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;

	t49 = (x217%(x218-(x219<x220)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x221 = 467LLU;
	uint32_t x222 = 133730010U;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = UINT8_MAX;

	t50 = (x221%(x222-(x223<x224)));

	if (t50 != 467LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x226 = INT16_MIN;
	int32_t x227 = 24718;
	int32_t x228 = -2;
	volatile int32_t t51 = 36282760;

	t51 = (x225%(x226-(x227<x228)));

	if (t51 != 6451) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x230 = 0U;
	int8_t x231 = INT8_MAX;
	volatile int32_t t52 = 3;

	t52 = (x229%(x230-(x231<x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -1;
	uint64_t x235 = 2193578051718852LLU;
	int64_t x236 = 21289LL;
	volatile int32_t t53 = -27778;

	t53 = (x233%(x234-(x235<x236)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -276086009963871539LL;
	uint32_t x238 = 209U;
	int16_t x239 = INT16_MIN;
	int64_t t54 = 0LL;

	t54 = (x237%(x238-(x239<x240)));

	if (t54 != -3LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x241 = INT32_MAX;
	int64_t x242 = -1LL;
	int64_t x244 = -16210850266652LL;
	volatile int64_t t55 = -146494893334767628LL;

	t55 = (x241%(x242-(x243<x244)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x245 = 211U;
	uint16_t x247 = 6U;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t56 = 3443;

	t56 = (x245%(x246-(x247<x248)));

	if (t56 != 211) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x254 = -1;
	volatile int32_t x255 = -332615;
	int16_t x256 = -97;
	static int32_t t57 = 1689128;

	t57 = (x253%(x254-(x255<x256)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x261 = 4793081962437LLU;
	volatile int32_t x264 = -1;
	uint64_t t58 = 8LLU;

	t58 = (x261%(x262-(x263<x264)));

	if (t58 != 4793081962437LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x266 = 5U;
	static int16_t x267 = INT16_MAX;
	volatile int8_t x268 = 1;
	volatile int32_t t59 = -21318333;

	t59 = (x265%(x266-(x267<x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x274 = 17815U;
	static int8_t x275 = -1;
	volatile int64_t t60 = -91018237LL;

	t60 = (x273%(x274-(x275<x276)));

	if (t60 != -16948LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x277 = INT16_MAX;
	static int8_t x278 = INT8_MAX;
	int32_t x280 = -342578918;
	int32_t t61 = -409373;

	t61 = (x277%(x278-(x279<x280)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = 1444416990717LLU;
	uint16_t x282 = 8973U;
	int16_t x283 = -1;
	int64_t x284 = INT64_MAX;
	uint64_t t62 = 566125440484067268LLU;

	t62 = (x281%(x282-(x283<x284)));

	if (t62 != 5609LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x285 = -55091816;
	static int64_t x286 = -1623045400632841246LL;
	static volatile uint16_t x287 = 3U;
	int32_t x288 = INT32_MIN;

	t63 = (x285%(x286-(x287<x288)));

	if (t63 != -55091816LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MIN;
	static uint16_t x290 = UINT16_MAX;
	volatile uint8_t x291 = 8U;
	int16_t x292 = -1;
	volatile int64_t t64 = 32597640594609741LL;

	t64 = (x289%(x290-(x291<x292)));

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x293 = 10424LL;
	uint16_t x294 = 2U;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MAX;
	volatile int64_t t65 = -3875LL;

	t65 = (x293%(x294-(x295<x296)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = INT8_MAX;
	volatile int8_t x299 = -1;

	t66 = (x297%(x298-(x299<x300)));

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	static int32_t x304 = INT32_MIN;
	int64_t t67 = -1985447155660649441LL;

	t67 = (x301%(x302-(x303<x304)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x307 = -3282077438786161315LL;
	int32_t x308 = -15494617;
	int64_t t68 = -21799600LL;

	t68 = (x305%(x306-(x307<x308)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = 88632U;
	volatile int32_t x311 = -1;
	volatile uint16_t x312 = 125U;

	t69 = (x309%(x310-(x311<x312)));

	if (t69 != 88632U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = -6;
	int32_t x314 = -281089;
	volatile uint8_t x315 = 2U;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t70 = -82333;

	t70 = (x313%(x314-(x315<x316)));

	if (t70 != -6) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = 0;
	int16_t x318 = INT16_MIN;
	int16_t x320 = 17;
	int32_t t71 = -11021;

	t71 = (x317%(x318-(x319<x320)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x321 = INT32_MAX;
	int8_t x323 = -3;
	static volatile uint64_t x324 = 403417235243LLU;

	t72 = (x321%(x322-(x323<x324)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = INT32_MIN;
	int8_t x327 = -1;
	int16_t x328 = -7;
	static volatile int32_t t73 = 1;

	t73 = (x325%(x326-(x327<x328)));

	if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x329 = 0U;
	uint8_t x331 = 0U;
	uint8_t x332 = 55U;
	int32_t t74 = -10762681;

	t74 = (x329%(x330-(x331<x332)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x333 = 17493746702517934LL;
	uint16_t x334 = 3U;
	uint32_t x335 = UINT32_MAX;
	static volatile uint16_t x336 = 9189U;
	volatile int64_t t75 = 934469307064389038LL;

	t75 = (x333%(x334-(x335<x336)));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = INT8_MAX;
	uint32_t x338 = UINT32_MAX;
	static int32_t x339 = INT32_MAX;
	uint32_t t76 = 126534U;

	t76 = (x337%(x338-(x339<x340)));

	if (t76 != 127U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x342 = -1011387829971132LL;
	volatile int32_t x343 = 106974967;
	int8_t x344 = INT8_MIN;

	t77 = (x341%(x342-(x343<x344)));

	if (t77 != 28767844477LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x345 = 4U;
	int8_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t t78 = 0;

	t78 = (x345%(x346-(x347<x348)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x350 = 87U;
	uint8_t x351 = UINT8_MAX;
	uint64_t x352 = 28048893628LLU;
	volatile uint64_t t79 = 249704519LLU;

	t79 = (x349%(x350-(x351<x352)));

	if (t79 != 83LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x354 = INT8_MIN;
	uint16_t x355 = 5U;
	int16_t x356 = INT16_MIN;
	volatile int32_t t80 = -1215;

	t80 = (x353%(x354-(x355<x356)));

	if (t80 != 119) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x357 = 164;
	static volatile int8_t x358 = INT8_MIN;
	uint16_t x359 = 0U;
	int32_t t81 = 65;

	t81 = (x357%(x358-(x359<x360)));

	if (t81 != 36) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x361 = 1168776858422LLU;
	int16_t x362 = INT16_MIN;
	uint32_t x363 = 120234768U;
	uint64_t x364 = UINT64_MAX;
	uint64_t t82 = 40943954162570LLU;

	t82 = (x361%(x362-(x363<x364)));

	if (t82 != 1168776858422LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = 3764;
	static uint32_t x366 = 200045U;
	int16_t x367 = 0;
	int8_t x368 = INT8_MIN;
	static uint32_t t83 = 345U;

	t83 = (x365%(x366-(x367<x368)));

	if (t83 != 3764U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x370 = UINT64_MAX;
	volatile int16_t x372 = -1;
	uint64_t t84 = 428701495093675513LLU;

	t84 = (x369%(x370-(x371<x372)));

	if (t84 != 5LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x374 = 1791U;
	volatile int8_t x375 = 1;
	uint64_t x376 = 217825209LLU;
	volatile int32_t t85 = -1580;

	t85 = (x373%(x374-(x375<x376)));

	if (t85 != -548) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x377 = 0U;
	uint32_t x378 = 102888U;
	volatile int32_t x379 = INT32_MIN;
	volatile uint32_t t86 = 120U;

	t86 = (x377%(x378-(x379<x380)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x381 = 2U;
	static uint16_t x382 = 248U;
	uint32_t x383 = 83291022U;
	volatile int32_t x384 = -580247;
	volatile int32_t t87 = 20431;

	t87 = (x381%(x382-(x383<x384)));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x385 = 30U;
	uint16_t x387 = 1U;
	static int8_t x388 = INT8_MIN;
	static volatile int32_t t88 = -66212221;

	t88 = (x385%(x386-(x387<x388)));

	if (t88 != 30) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x389 = INT16_MAX;
	int32_t x390 = -1;
	int16_t x391 = INT16_MIN;
	volatile uint8_t x392 = 15U;
	int32_t t89 = -93;

	t89 = (x389%(x390-(x391<x392)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x393 = -127;
	uint8_t x394 = 6U;
	int16_t x395 = -1;
	int32_t x396 = INT32_MAX;

	t90 = (x393%(x394-(x395<x396)));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = 9120U;
	int16_t x399 = -3025;
	volatile uint32_t x400 = 7166U;
	volatile uint64_t t91 = 9458574053437449LLU;

	t91 = (x397%(x398-(x399<x400)));

	if (t91 != 9120LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x403 = INT32_MIN;

	t92 = (x401%(x402-(x403<x404)));

	if (t92 != 199) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = -2226;
	static int8_t x406 = INT8_MAX;
	static uint64_t x407 = UINT64_MAX;
	volatile uint32_t x408 = UINT32_MAX;
	volatile int32_t t93 = 1030660;

	t93 = (x405%(x406-(x407<x408)));

	if (t93 != -67) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x410 = 34U;
	volatile uint64_t x411 = 11712339051531LLU;
	uint32_t x412 = UINT32_MAX;
	static volatile int32_t t94 = 177664370;

	t94 = (x409%(x410-(x411<x412)));

	if (t94 != -26) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = INT64_MIN;
	uint16_t x418 = UINT16_MAX;
	int32_t x419 = 195790;
	volatile int8_t x420 = -8;
	volatile int64_t t95 = -892337702852292660LL;

	t95 = (x417%(x418-(x419<x420)));

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = 3;
	static volatile int64_t x423 = INT64_MIN;
	uint64_t x424 = UINT64_MAX;
	int32_t t96 = -1146959;

	t96 = (x421%(x422-(x423<x424)));

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = INT16_MIN;
	volatile uint8_t x426 = 6U;
	static uint64_t x428 = 381862LLU;
	int32_t t97 = 2;

	t97 = (x425%(x426-(x427<x428)));

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x430 = 12915;
	static uint32_t x431 = 1617U;
	int64_t x432 = INT64_MIN;

	t98 = (x429%(x430-(x431<x432)));

	if (t98 != 3277) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MIN;
	int64_t x436 = 60454791LL;
	int32_t t99 = 50722;

	t99 = (x433%(x434-(x435<x436)));

	if (t99 != 0) { NG(); } else { ; }
	
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

