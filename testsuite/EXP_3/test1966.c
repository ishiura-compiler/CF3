#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 13U;
static uint64_t x21 = UINT64_MAX;
int8_t x24 = INT8_MIN;
int32_t x36 = INT32_MIN;
volatile int64_t t10 = -73411612LL;
static uint32_t x52 = 1629U;
int64_t t12 = -34519892887LL;
volatile int8_t x63 = -5;
int16_t x71 = INT16_MIN;
int8_t x80 = 1;
volatile int32_t t19 = 2;
uint32_t x81 = UINT32_MAX;
static uint16_t x85 = 6859U;
int16_t x86 = 6;
uint8_t x87 = 1U;
int8_t x90 = 52;
volatile int16_t x95 = INT16_MIN;
int64_t x96 = INT64_MAX;
uint32_t x98 = UINT32_MAX;
volatile uint32_t x103 = 6U;
volatile uint64_t t25 = 736LLU;
int16_t x106 = INT16_MIN;
static int32_t x108 = INT32_MIN;
int16_t x113 = 615;
static int8_t x114 = -1;
static uint64_t x115 = 28723LLU;
uint8_t x120 = UINT8_MAX;
volatile int32_t x121 = INT32_MIN;
static uint32_t x124 = UINT32_MAX;
volatile int16_t x126 = INT16_MIN;
int32_t t31 = -983;
int8_t x131 = -1;
int32_t t32 = 1;
uint32_t x133 = 1699337U;
volatile uint32_t x134 = 23U;
int16_t x145 = 106;
uint8_t x146 = UINT8_MAX;
int64_t x149 = INT64_MAX;
int8_t x162 = -1;
uint16_t x170 = 632U;
int64_t x176 = 31529909LL;
static volatile int16_t x181 = INT16_MIN;
int8_t x192 = -1;
static int32_t t47 = 1;
static uint8_t x197 = UINT8_MAX;
static volatile uint32_t x200 = UINT32_MAX;
int32_t x201 = 104905148;
volatile int32_t t51 = -11;
int64_t x211 = -1LL;
uint8_t x226 = UINT8_MAX;
static int32_t x229 = -1;
int8_t x236 = INT8_MAX;
uint32_t x241 = UINT32_MAX;
int32_t x244 = INT32_MIN;
volatile int64_t t60 = -3LL;
static volatile int16_t x245 = -762;
volatile uint16_t x248 = 3553U;
static int8_t x254 = INT8_MIN;
volatile int16_t x256 = -10032;
uint64_t t63 = 4006831362276425LLU;
static volatile int16_t x258 = INT16_MIN;
static int8_t x259 = -1;
static int16_t x262 = INT16_MAX;
uint16_t x266 = 1184U;
uint32_t x267 = 1299665U;
int8_t x271 = 6;
int16_t x275 = INT16_MIN;
int32_t t69 = 0;
uint32_t x281 = 358295584U;
int64_t x283 = -33135129871515033LL;
static volatile int64_t t70 = -24LL;
static uint32_t x286 = 12687U;
int32_t x293 = -1;
static int8_t x300 = INT8_MIN;
int16_t x308 = INT16_MAX;
int64_t x311 = -4LL;
uint8_t x312 = UINT8_MAX;
static int64_t x313 = INT64_MIN;
int16_t x315 = INT16_MIN;
uint16_t x318 = 0U;
int8_t x322 = -1;
int32_t x330 = 4822;
int64_t x338 = INT64_MAX;
volatile uint16_t x340 = 8U;
volatile int32_t t84 = 422;
int32_t x341 = INT32_MIN;
uint8_t x347 = 56U;
volatile int64_t t87 = -264012LL;
uint32_t x356 = UINT32_MAX;
int16_t x360 = 599;
int64_t x361 = -176LL;
volatile int32_t x365 = -15;
volatile uint64_t t91 = 108855982786LLU;
uint16_t x377 = 61U;
int8_t x378 = INT8_MIN;
static int32_t x382 = INT32_MIN;
int32_t x383 = INT32_MIN;
static int8_t x393 = INT8_MIN;
int32_t x394 = INT32_MAX;


void f0(void) {
	int64_t x2 = INT64_MIN;
	static volatile uint64_t x3 = UINT64_MAX;
	int32_t x4 = -1222374;
	uint64_t t0 = 531032364208LLU;

	t0 = ((x1<x2)*(x3|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x6 = INT16_MIN;
	static volatile int64_t x7 = INT64_MAX;
	volatile uint32_t x8 = UINT32_MAX;
	int64_t t1 = 1917788696463758LL;

	t1 = ((x5<x6)*(x7|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int8_t x10 = 2;
	volatile int32_t x11 = 0;
	int8_t x12 = -46;
	volatile int32_t t2 = -2686485;

	t2 = ((x9<x10)*(x11|x12));

	if (t2 != -46) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = -11;
	static volatile int8_t x15 = INT8_MIN;
	volatile int16_t x16 = INT16_MAX;
	int32_t t3 = 3467;

	t3 = ((x13<x14)*(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	uint16_t x19 = 27U;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -1825015217503815LL;

	t4 = ((x17<x18)*(x19|x20));

	if (t4 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = 27;
	volatile uint64_t x23 = 29419LLU;
	uint64_t t5 = 506591502827514967LLU;

	t5 = ((x21<x22)*(x23|x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	static int8_t x26 = -1;
	uint16_t x27 = UINT16_MAX;
	int64_t x28 = -68754613696LL;
	int64_t t6 = 4079138409900021303LL;

	t6 = ((x25<x26)*(x27|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	uint8_t x30 = 1U;
	int32_t x31 = -1;
	volatile int64_t x32 = 61LL;
	int64_t t7 = 951LL;

	t7 = ((x29<x30)*(x31|x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	uint32_t x34 = 1315821U;
	int64_t x35 = -4322038653667846LL;
	volatile int64_t t8 = -95458364225845LL;

	t8 = ((x33<x34)*(x35|x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	int32_t x38 = -1;
	volatile int32_t x39 = INT32_MIN;
	int8_t x40 = INT8_MAX;
	int32_t t9 = -2;

	t9 = ((x37<x38)*(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -619728;
	int64_t x42 = -9871705LL;
	int64_t x43 = -1LL;
	volatile uint8_t x44 = UINT8_MAX;

	t10 = ((x41<x42)*(x43|x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -163;
	uint64_t x46 = 4LLU;
	static int8_t x47 = -1;
	static volatile uint32_t x48 = UINT32_MAX;
	uint32_t t11 = 8092707U;

	t11 = ((x45<x46)*(x47|x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	static volatile int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MIN;

	t12 = ((x49<x50)*(x51|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = INT64_MAX;
	static volatile uint16_t x55 = 12U;
	uint8_t x56 = 21U;
	static int32_t t13 = 714410;

	t13 = ((x53<x54)*(x55|x56));

	if (t13 != 29) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = -57;
	uint16_t x60 = 1349U;
	int32_t t14 = 67997;

	t14 = ((x57<x58)*(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 81U;
	int16_t x62 = -1;
	int8_t x64 = -1;
	static int32_t t15 = -2408;

	t15 = ((x61<x62)*(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile int8_t x66 = -1;
	volatile int16_t x67 = INT16_MAX;
	volatile int16_t x68 = -1;
	int32_t t16 = -279821;

	t16 = ((x65<x66)*(x67|x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 5173LL;
	int64_t x70 = -1LL;
	static int16_t x72 = 897;
	int32_t t17 = -54865;

	t17 = ((x69<x70)*(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 8003248LLU;
	int16_t x74 = 1;
	int32_t x75 = -1;
	int16_t x76 = INT16_MIN;
	static int32_t t18 = 4357;

	t18 = ((x73<x74)*(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -27;
	int8_t x78 = INT8_MIN;
	int16_t x79 = -497;

	t19 = ((x77<x78)*(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	int16_t x83 = INT16_MIN;
	static volatile int64_t x84 = INT64_MAX;
	int64_t t20 = 17LL;

	t20 = ((x81<x82)*(x83|x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x88 = 2317;
	int32_t t21 = 189144;

	t21 = ((x85<x86)*(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	static int32_t x91 = 0;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = -18753025069LL;

	t22 = ((x89<x90)*(x91|x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 1U;
	int64_t x94 = INT64_MIN;
	static volatile int64_t t23 = 44650537LL;

	t23 = ((x93<x94)*(x95|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = -102856616;
	static uint64_t t24 = UINT64_MAX;

	t24 = ((x97<x98)*(x99|x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	uint16_t x102 = UINT16_MAX;
	volatile uint64_t x104 = 66LLU;

	t25 = ((x101<x102)*(x103|x104));

	if (t25 != 70LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -236;
	static int32_t x107 = INT32_MIN;
	int32_t t26 = 232037512;

	t26 = ((x105<x106)*(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x109 = 13263020318627968LLU;
	int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MAX;
	int8_t x112 = -1;
	int64_t t27 = -994LL;

	t27 = ((x109<x110)*(x111|x112));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x116 = -550875899540LL;
	volatile uint64_t t28 = 1001LLU;

	t28 = ((x113<x114)*(x115|x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	volatile int64_t x118 = INT64_MAX;
	uint16_t x119 = UINT16_MAX;
	volatile int32_t t29 = 3;

	t29 = ((x117<x118)*(x119|x120));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x122 = INT32_MIN;
	uint32_t x123 = UINT32_MAX;
	uint32_t t30 = 46571U;

	t30 = ((x121<x122)*(x123|x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	uint16_t x127 = 3984U;
	volatile int32_t x128 = INT32_MIN;

	t31 = ((x125<x126)*(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 3;
	static uint16_t x130 = UINT16_MAX;
	int16_t x132 = -1;

	t32 = ((x129<x130)*(x131|x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x135 = 3U;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -296;

	t33 = ((x133<x134)*(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 154253950U;
	static int64_t x138 = INT64_MAX;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = -53;
	int32_t t34 = -23745612;

	t34 = ((x137<x138)*(x139|x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = 1U;
	int16_t x142 = -1;
	uint16_t x143 = 9U;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 74477085;

	t35 = ((x141<x142)*(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x147 = 1;
	uint16_t x148 = 793U;
	int32_t t36 = 30;

	t36 = ((x145<x146)*(x147|x148));

	if (t36 != 793) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MAX;
	int16_t x151 = -1;
	static uint16_t x152 = 327U;
	int32_t t37 = -16301703;

	t37 = ((x149<x150)*(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	volatile uint8_t x154 = 24U;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = INT64_MIN;
	volatile int64_t t38 = -901891560040680LL;

	t38 = ((x153<x154)*(x155|x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MAX;
	static volatile int8_t x158 = -1;
	static int32_t x159 = -1;
	uint32_t x160 = 3U;
	uint32_t t39 = 5083722U;

	t39 = ((x157<x158)*(x159|x160));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -2155733;
	int64_t x163 = INT64_MAX;
	uint64_t x164 = UINT64_MAX;
	static uint64_t t40 = UINT64_MAX;

	t40 = ((x161<x162)*(x163|x164));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	uint8_t x166 = 2U;
	int32_t x167 = INT32_MIN;
	uint64_t x168 = 20605LLU;
	static volatile uint64_t t41 = 2071923LLU;

	t41 = ((x165<x166)*(x167|x168));

	if (t41 != 18446744071562088573LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -17;
	int16_t x171 = INT16_MIN;
	volatile int8_t x172 = INT8_MIN;
	int32_t t42 = -6143;

	t42 = ((x169<x170)*(x171|x172));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	static int64_t x174 = -1LL;
	static uint8_t x175 = 0U;
	int64_t t43 = -1335381LL;

	t43 = ((x173<x174)*(x175|x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	uint32_t x178 = 7U;
	int32_t x179 = -1;
	int16_t x180 = 45;
	volatile int32_t t44 = -1842;

	t44 = ((x177<x178)*(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	static int32_t x183 = 0;
	volatile int32_t x184 = -428561;
	volatile int32_t t45 = -871198267;

	t45 = ((x181<x182)*(x183|x184));

	if (t45 != -428561) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MAX;
	int64_t x186 = INT64_MIN;
	volatile int64_t x187 = INT64_MIN;
	static int32_t x188 = -13427;
	static volatile int64_t t46 = -29730598527325412LL;

	t46 = ((x185<x186)*(x187|x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	uint16_t x190 = 2832U;
	int16_t x191 = INT16_MIN;

	t47 = ((x189<x190)*(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -24144;
	int8_t x194 = -54;
	volatile int32_t x195 = -6;
	int64_t x196 = INT64_MIN;
	static int64_t t48 = 5956939471LL;

	t48 = ((x193<x194)*(x195|x196));

	if (t48 != -6LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -24920216545646LL;
	int8_t x199 = INT8_MIN;
	static volatile uint32_t t49 = 0U;

	t49 = ((x197<x198)*(x199|x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x202 = INT64_MIN;
	int8_t x203 = -1;
	int32_t x204 = 6;
	static int32_t t50 = 247950645;

	t50 = ((x201<x202)*(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	int32_t x206 = -61887;
	volatile int16_t x207 = INT16_MIN;
	volatile int8_t x208 = INT8_MAX;

	t51 = ((x205<x206)*(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 15129;
	volatile int64_t x210 = INT64_MIN;
	static volatile uint32_t x212 = 112U;
	int64_t t52 = 52814LL;

	t52 = ((x209<x210)*(x211|x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = INT8_MAX;
	int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MIN;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -12;

	t53 = ((x213<x214)*(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 45;
	uint8_t x218 = UINT8_MAX;
	static int8_t x219 = -1;
	uint64_t x220 = 17632807LLU;
	static uint64_t t54 = UINT64_MAX;

	t54 = ((x217<x218)*(x219|x220));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	volatile int16_t x222 = 1;
	int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MAX;
	int64_t t55 = 142050139759LL;

	t55 = ((x221<x222)*(x223|x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	volatile int16_t x227 = -1;
	int16_t x228 = -1;
	int32_t t56 = -58;

	t56 = ((x225<x226)*(x227|x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;
	static uint16_t x231 = 530U;
	uint16_t x232 = 596U;
	int32_t t57 = -477439;

	t57 = ((x229<x230)*(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 22;
	static int64_t x234 = INT64_MIN;
	static volatile uint16_t x235 = 11618U;
	volatile int32_t t58 = -905590;

	t58 = ((x233<x234)*(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = 1644600LL;
	int64_t x238 = INT64_MIN;
	static int16_t x239 = INT16_MIN;
	volatile uint64_t x240 = UINT64_MAX;
	uint64_t t59 = 0LLU;

	t59 = ((x237<x238)*(x239|x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = 13;
	int64_t x243 = -2285788252973LL;

	t60 = ((x241<x242)*(x243|x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x246 = -2723LL;
	volatile int16_t x247 = INT16_MIN;
	int32_t t61 = 6930503;

	t61 = ((x245<x246)*(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 2U;
	int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	volatile int32_t x252 = -1;
	volatile int32_t t62 = -358;

	t62 = ((x249<x250)*(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MAX;
	uint64_t x255 = 2LLU;

	t63 = ((x253<x254)*(x255|x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 551U;
	uint16_t x260 = 3006U;
	volatile int32_t t64 = 209;

	t64 = ((x257<x258)*(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 13U;
	int32_t x263 = 41539;
	volatile uint8_t x264 = 1U;
	int32_t t65 = -20;

	t65 = ((x261<x262)*(x263|x264));

	if (t65 != 41539) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 860991LLU;
	static uint32_t x268 = 214869U;
	uint32_t t66 = 20U;

	t66 = ((x265<x266)*(x267|x268));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -1;
	volatile int8_t x270 = -13;
	volatile uint32_t x272 = 521121596U;
	uint32_t t67 = 1U;

	t67 = ((x269<x270)*(x271|x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	volatile uint32_t x274 = 115U;
	uint64_t x276 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

	t68 = ((x273<x274)*(x275|x276));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 11;
	volatile int16_t x278 = -11828;
	int32_t x279 = 21300835;
	volatile int16_t x280 = -1;

	t69 = ((x277<x278)*(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = 1891329U;
	int8_t x284 = 25;

	t70 = ((x281<x282)*(x283|x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	volatile int64_t x287 = -2089973LL;
	uint16_t x288 = 104U;
	static volatile int64_t t71 = 16239LL;

	t71 = ((x285<x286)*(x287|x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	static int8_t x290 = -58;
	int16_t x291 = -17;
	static int16_t x292 = -1;
	static int32_t t72 = 1119249;

	t72 = ((x289<x290)*(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x294 = 67757168745326LLU;
	int16_t x295 = -1;
	int64_t x296 = INT64_MIN;
	static int64_t t73 = -119318094889607LL;

	t73 = ((x293<x294)*(x295|x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 3U;
	volatile uint16_t x298 = 2149U;
	int16_t x299 = INT16_MIN;
	volatile int32_t t74 = 353720;

	t74 = ((x297<x298)*(x299|x300));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 32741U;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = -2;
	uint64_t x304 = UINT64_MAX;
	static uint64_t t75 = UINT64_MAX;

	t75 = ((x301<x302)*(x303|x304));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	static int64_t x306 = -1LL;
	uint16_t x307 = 500U;
	static volatile int32_t t76 = -85114811;

	t76 = ((x305<x306)*(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	volatile int16_t x310 = -1;
	int64_t t77 = -1LL;

	t77 = ((x309<x310)*(x311|x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = 57;
	uint32_t x316 = 30667161U;
	volatile uint32_t t78 = 390U;

	t78 = ((x313<x314)*(x315|x316));

	if (t78 != 4294963609U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int32_t x319 = INT32_MIN;
	static int8_t x320 = -1;
	int32_t t79 = 10;

	t79 = ((x317<x318)*(x319|x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 93U;
	static volatile int16_t x323 = INT16_MIN;
	uint64_t x324 = 462172LLU;
	uint64_t t80 = 713869261LLU;

	t80 = ((x321<x322)*(x323|x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	static uint16_t x326 = UINT16_MAX;
	int16_t x327 = -1;
	static volatile uint64_t x328 = 51694111110630LLU;
	static uint64_t t81 = UINT64_MAX;

	t81 = ((x325<x326)*(x327|x328));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	uint64_t x331 = 540825405630LLU;
	int32_t x332 = -1;
	static volatile uint64_t t82 = 31892572906479LLU;

	t82 = ((x329<x330)*(x331|x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	volatile int16_t x334 = INT16_MIN;
	int64_t x335 = INT64_MIN;
	uint32_t x336 = 544520726U;
	int64_t t83 = 667447LL;

	t83 = ((x333<x334)*(x335|x336));

	if (t83 != -9223372036310255082LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = -1;
	volatile int16_t x339 = INT16_MIN;

	t84 = ((x337<x338)*(x339|x340));

	if (t84 != -32760) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MIN;
	volatile int8_t x343 = INT8_MIN;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t85 = 1254970005072711LL;

	t85 = ((x341<x342)*(x343|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1513024;
	uint16_t x346 = UINT16_MAX;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = -481;

	t86 = ((x345<x346)*(x347|x348));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	volatile uint16_t x351 = UINT16_MAX;
	int64_t x352 = INT64_MIN;

	t87 = ((x349<x350)*(x351|x352));

	if (t87 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 2414245;
	uint16_t x354 = UINT16_MAX;
	uint64_t x355 = 253595LLU;
	static volatile uint64_t t88 = 113621240LLU;

	t88 = ((x353<x354)*(x355|x356));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 48U;
	static int16_t x358 = INT16_MAX;
	volatile uint8_t x359 = UINT8_MAX;
	int32_t t89 = 566691393;

	t89 = ((x357<x358)*(x359|x360));

	if (t89 != 767) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x362 = -1;
	static uint64_t x363 = 586748LLU;
	int16_t x364 = INT16_MIN;
	uint64_t t90 = 280547043104643979LLU;

	t90 = ((x361<x362)*(x363|x364));

	if (t90 != 18446744073709548540LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x366 = 1731U;
	uint16_t x367 = 243U;
	static uint64_t x368 = 25721008128LLU;

	t91 = ((x365<x366)*(x367|x368));

	if (t91 != 25721008371LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = 64U;
	int32_t x371 = -1;
	int16_t x372 = 2;
	static int32_t t92 = 27;

	t92 = ((x369<x370)*(x371|x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	uint16_t x374 = UINT16_MAX;
	static int64_t x375 = INT64_MIN;
	int32_t x376 = 48;
	volatile int64_t t93 = 1LL;

	t93 = ((x373<x374)*(x375|x376));

	if (t93 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x379 = 7;
	uint8_t x380 = UINT8_MAX;
	int32_t t94 = -989303;

	t94 = ((x377<x378)*(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 97341979U;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 587;

	t95 = ((x381<x382)*(x383|x384));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = 1;
	int8_t x387 = 1;
	volatile uint64_t x388 = 7627807660108LLU;
	uint64_t t96 = 2320764817LLU;

	t96 = ((x385<x386)*(x387|x388));

	if (t96 != 7627807660109LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	static int8_t x390 = INT8_MIN;
	uint64_t x391 = 14039177921394341LLU;
	static uint32_t x392 = 977U;
	volatile uint64_t t97 = 4075359LLU;

	t97 = ((x389<x390)*(x391|x392));

	if (t97 != 14039177921394677LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x395 = INT64_MAX;
	uint64_t x396 = 54LLU;
	volatile uint64_t t98 = 480774LLU;

	t98 = ((x393<x394)*(x395|x396));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 1422498575326LL;
	int32_t x398 = -1;
	int32_t x399 = 1659;
	static int32_t x400 = INT32_MIN;
	volatile int32_t t99 = -322;

	t99 = ((x397<x398)*(x399|x400));

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

