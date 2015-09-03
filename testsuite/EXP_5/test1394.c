#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = 263547724LL;
int64_t x3 = -1LL;
int32_t x8 = INT32_MIN;
int32_t x11 = -5298;
static int8_t x12 = INT8_MIN;
int16_t x18 = -1;
int32_t t3 = -12;
static int8_t x25 = -1;
volatile int32_t x26 = INT32_MIN;
int8_t x29 = -1;
static volatile uint64_t t7 = 26813LLU;
static int32_t x39 = -1;
static int64_t x44 = 119875632LL;
static uint16_t x48 = 16149U;
static uint32_t x49 = 535448734U;
int16_t x58 = -1;
int64_t x59 = -6958396650831LL;
volatile int32_t x62 = -1;
int16_t x64 = -11;
volatile int32_t t14 = -203190;
int8_t x65 = INT8_MIN;
static int8_t x66 = INT8_MIN;
static int16_t x69 = INT16_MIN;
int8_t x70 = INT8_MIN;
volatile int32_t x76 = 7160124;
int64_t x79 = -1LL;
int32_t t19 = 0;
static volatile int8_t x95 = 56;
static int64_t x114 = -1LL;
volatile int32_t t27 = -193;
static int64_t t28 = -244558755LL;
int16_t x122 = -1;
int32_t x125 = INT32_MIN;
int8_t x135 = INT8_MIN;
uint8_t x137 = 4U;
static int32_t t33 = -368564085;
int8_t x149 = 3;
uint32_t t36 = 20779U;
static volatile int16_t x153 = -1;
uint32_t x158 = 914U;
uint8_t x159 = UINT8_MAX;
int64_t x161 = INT64_MIN;
volatile int64_t t39 = 40761827458158216LL;
volatile uint16_t x166 = 1U;
static uint32_t x167 = 1437410U;
volatile uint64_t x170 = 1472764000474277LLU;
int8_t x177 = INT8_MIN;
uint64_t x179 = 20620842800935245LLU;
int64_t t44 = 2402652538LL;
int64_t x187 = -1LL;
uint8_t x188 = 34U;
int32_t x200 = -1;
uint64_t x204 = 3707989LLU;
static volatile uint64_t t49 = 7258850546598LLU;
volatile int8_t x209 = -34;
int32_t x210 = INT32_MIN;
int16_t x215 = INT16_MIN;
int64_t x222 = 22779LL;
volatile uint64_t x234 = 8091LLU;
uint32_t x242 = 24919U;
volatile int64_t t59 = -16297198144733LL;
static int16_t x247 = -315;
int16_t x259 = -12;
uint64_t x260 = 266LLU;
uint32_t x261 = UINT32_MAX;
volatile int64_t x267 = 13904538LL;
int32_t x275 = INT32_MIN;
int64_t x281 = 1038233739443LL;
int8_t x282 = INT8_MIN;
static int8_t x283 = INT8_MAX;
volatile int32_t x290 = -205002906;
static volatile int64_t x299 = INT64_MIN;
volatile uint16_t x303 = 25495U;
static int32_t x311 = -10;
int16_t x312 = INT16_MIN;
int8_t x313 = INT8_MIN;
int64_t x315 = INT64_MIN;
volatile uint32_t x320 = 18U;
int64_t x321 = INT64_MIN;
volatile int64_t x322 = INT64_MIN;
uint64_t x323 = 0LLU;
static int64_t x329 = INT64_MAX;
volatile uint64_t x333 = 3797123LLU;
uint64_t t81 = 76132434LLU;
static int32_t x341 = -10859;
uint64_t x342 = 76LLU;
volatile int8_t x343 = INT8_MIN;
volatile uint32_t x344 = 85U;
static uint32_t x346 = 64U;
static volatile int32_t x353 = -1;
int8_t x356 = INT8_MAX;
volatile int32_t t86 = -666692;
uint64_t x360 = 16810LLU;
int8_t x367 = 4;
volatile int64_t t89 = 504LL;
int32_t x370 = 516833;
volatile int64_t t90 = 247873LL;
static volatile int64_t x376 = 1850565867851894LL;
static volatile uint8_t x377 = 0U;
int16_t x379 = INT16_MAX;
volatile int32_t t94 = 58958;
volatile uint16_t x390 = 1521U;
static int64_t x397 = INT64_MIN;
int64_t x412 = 971608187LL;


void f0(void) {
	uint8_t x1 = 96U;
	int8_t x4 = -1;
	int32_t t0 = 62962;

	t0 = (x1*((x2<x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 97492309647554LLU;
	int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MIN;
	static volatile uint64_t t1 = 51835556380240LLU;

	t1 = (x5*((x6<x7)/x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	volatile int32_t x10 = -182147924;
	volatile int32_t t2 = 20704;

	t2 = (x9*((x10<x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MAX;
	uint8_t x19 = UINT8_MAX;
	int8_t x20 = 16;

	t3 = (x17*((x18<x19)/x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	volatile uint8_t x22 = UINT8_MAX;
	static volatile int16_t x23 = -1;
	static int64_t x24 = 1LL;
	volatile int64_t t4 = -2LL;

	t4 = (x21*((x22<x23)/x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MAX;
	volatile int32_t t5 = -32984;

	t5 = (x25*((x26<x27)/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = INT64_MAX;
	int8_t x31 = -3;
	volatile uint8_t x32 = 32U;
	volatile int32_t t6 = -7021;

	t6 = (x29*((x30<x31)/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 56LLU;
	static int8_t x34 = INT8_MIN;
	int8_t x35 = 7;
	static int16_t x36 = INT16_MAX;

	t7 = (x33*((x34<x35)/x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 948;
	volatile int16_t x38 = -55;
	static uint16_t x40 = UINT16_MAX;
	static int32_t t8 = -13;

	t8 = (x37*((x38<x39)/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -6;
	volatile uint32_t x42 = 76006280U;
	static uint32_t x43 = 2U;
	volatile int64_t t9 = -164615480137415LL;

	t9 = (x41*((x42<x43)/x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = -1;
	static uint64_t x46 = UINT64_MAX;
	uint16_t x47 = 2033U;
	int32_t t10 = -1;

	t10 = (x45*((x46<x47)/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x50 = INT8_MIN;
	volatile int32_t x51 = -1;
	volatile int8_t x52 = -1;
	static volatile uint32_t t11 = 78530366U;

	t11 = (x49*((x50<x51)/x52));

	if (t11 != 3759518562U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 35U;
	int16_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -6308;

	t12 = (x53*((x54<x55)/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MAX;
	uint16_t x60 = 4618U;
	int32_t t13 = 867;

	t13 = (x57*((x58<x59)/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 25;
	uint16_t x63 = 6299U;

	t14 = (x61*((x62<x63)/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x67 = -1;
	int64_t x68 = -69LL;
	int64_t t15 = 13LL;

	t15 = (x65*((x66<x67)/x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x71 = INT8_MAX;
	uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t16 = 79392657441046LLU;

	t16 = (x69*((x70<x71)/x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = -1;
	static int16_t x74 = 4398;
	uint8_t x75 = 0U;
	int32_t t17 = -29292;

	t17 = (x73*((x74<x75)/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MAX;
	static int32_t x78 = -1;
	int32_t x80 = INT32_MIN;
	int32_t t18 = 509862715;

	t18 = (x77*((x78<x79)/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 0U;
	int32_t x82 = INT32_MIN;
	uint8_t x83 = 2U;
	volatile int8_t x84 = INT8_MIN;

	t19 = (x81*((x82<x83)/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -58;
	int64_t x86 = -734092006477106LL;
	uint64_t x87 = 385755418293409267LLU;
	int64_t x88 = -10336771211LL;
	volatile int64_t t20 = -41665939853314804LL;

	t20 = (x85*((x86<x87)/x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x90 = UINT32_MAX;
	uint64_t x91 = 13190LLU;
	int16_t x92 = INT16_MIN;
	int32_t t21 = 352;

	t21 = (x89*((x90<x91)/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -6;
	int8_t x94 = -1;
	int32_t x96 = -1;
	int32_t t22 = -1840924;

	t22 = (x93*((x94<x95)/x96));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MAX;
	int64_t x98 = 15685219019498LL;
	int64_t x99 = -1LL;
	int64_t x100 = -1LL;
	int64_t t23 = 52178622394943LL;

	t23 = (x97*((x98<x99)/x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = INT32_MIN;
	volatile int8_t x102 = 28;
	int64_t x103 = 281994LL;
	int16_t x104 = INT16_MAX;
	static int32_t t24 = 1;

	t24 = (x101*((x102<x103)/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = UINT8_MAX;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MAX;
	static uint64_t x108 = 197LLU;
	uint64_t t25 = 14457128942385LLU;

	t25 = (x105*((x106<x107)/x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = -1133437059948515079LL;
	static volatile int16_t x110 = INT16_MIN;
	volatile int8_t x111 = INT8_MIN;
	static int64_t x112 = -1LL;
	volatile int64_t t26 = -1LL;

	t26 = (x109*((x110<x111)/x112));

	if (t26 != 1133437059948515079LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	static int32_t x115 = -1;
	int16_t x116 = -1;

	t27 = (x113*((x114<x115)/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x117 = INT8_MIN;
	uint32_t x118 = 278266U;
	int64_t x119 = INT64_MIN;
	int64_t x120 = -3LL;

	t28 = (x117*((x118<x119)/x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = INT64_MAX;
	uint32_t x123 = 18327410U;
	int32_t x124 = -1;
	static volatile int64_t t29 = 1499541258098072516LL;

	t29 = (x121*((x122<x123)/x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = -1;
	int8_t x128 = 19;
	static int32_t t30 = -14658602;

	t30 = (x125*((x126<x127)/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 19LLU;
	int8_t x130 = INT8_MIN;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = 30;
	volatile uint64_t t31 = 3645912397002LLU;

	t31 = (x129*((x130<x131)/x132));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = INT32_MIN;
	static int8_t x134 = INT8_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t32 = 390871333;

	t32 = (x133*((x134<x135)/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x138 = INT32_MAX;
	int8_t x139 = -1;
	static volatile uint16_t x140 = 5U;

	t33 = (x137*((x138<x139)/x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = INT8_MIN;
	uint64_t x142 = 1500713102601021000LLU;
	int8_t x143 = 0;
	int16_t x144 = 1;
	volatile int32_t t34 = -3201246;

	t34 = (x141*((x142<x143)/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x145 = 0U;
	uint8_t x146 = UINT8_MAX;
	int16_t x147 = INT16_MIN;
	static int8_t x148 = INT8_MAX;
	int32_t t35 = -42794;

	t35 = (x145*((x146<x147)/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x150 = 14U;
	int16_t x151 = -8;
	uint32_t x152 = 5157U;

	t36 = (x149*((x150<x151)/x152));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MAX;
	static uint32_t x156 = UINT32_MAX;
	uint32_t t37 = 898U;

	t37 = (x153*((x154<x155)/x156));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t38 = 1;

	t38 = (x157*((x158<x159)/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	int16_t x164 = -1;

	t39 = (x161*((x162<x163)/x164));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t40 = 156879;

	t40 = (x165*((x166<x167)/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = 1;
	int8_t x171 = -1;
	static uint64_t x172 = 10439752534LLU;
	volatile uint64_t t41 = 34472605703923635LLU;

	t41 = (x169*((x170<x171)/x172));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x173 = -1LL;
	static int64_t x174 = -1LL;
	volatile int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	volatile int64_t t42 = 21256741433817LL;

	t42 = (x173*((x174<x175)/x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x178 = -1;
	volatile int64_t x180 = -659LL;
	int64_t t43 = -160610907LL;

	t43 = (x177*((x178<x179)/x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MAX;
	static int64_t x184 = -1LL;

	t44 = (x181*((x182<x183)/x184));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = -33;
	static int8_t x186 = INT8_MAX;
	volatile int32_t t45 = 21;

	t45 = (x185*((x186<x187)/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = -1LL;
	static uint8_t x191 = 0U;
	static uint8_t x192 = 1U;
	volatile int32_t t46 = 885;

	t46 = (x189*((x190<x191)/x192));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x193 = 0U;
	volatile int64_t x194 = 40114197697302619LL;
	static int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;
	int64_t t47 = -11834LL;

	t47 = (x193*((x194<x195)/x196));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 28;
	static int8_t x198 = INT8_MIN;
	static uint8_t x199 = UINT8_MAX;
	volatile int32_t t48 = -14;

	t48 = (x197*((x198<x199)/x200));

	if (t48 != -28) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = INT16_MIN;
	int8_t x203 = 7;

	t49 = (x201*((x202<x203)/x204));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	static int8_t x206 = INT8_MIN;
	static volatile uint8_t x207 = UINT8_MAX;
	int64_t x208 = INT64_MAX;
	int64_t t50 = -51785499895891LL;

	t50 = (x205*((x206<x207)/x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = -1;
	int32_t t51 = 913142279;

	t51 = (x209*((x210<x211)/x212));

	if (t51 != 34) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x213 = 3U;
	static volatile int32_t x214 = INT32_MIN;
	uint64_t x216 = 9267470LLU;
	uint64_t t52 = 1142LLU;

	t52 = (x213*((x214<x215)/x216));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = UINT8_MAX;
	int64_t x218 = -1LL;
	volatile int32_t x219 = INT32_MAX;
	volatile int32_t x220 = 1;
	volatile int32_t t53 = -466;

	t53 = (x217*((x218<x219)/x220));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x221 = 8432;
	static int32_t x223 = -1;
	static int64_t x224 = INT64_MAX;
	int64_t t54 = -44166518749574LL;

	t54 = (x221*((x222<x223)/x224));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = 4U;
	static int32_t x227 = -1;
	uint32_t x228 = 484844U;
	volatile uint32_t t55 = 1385U;

	t55 = (x225*((x226<x227)/x228));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -1;
	int32_t x230 = INT32_MIN;
	int8_t x231 = -1;
	int8_t x232 = INT8_MAX;
	int32_t t56 = -2017;

	t56 = (x229*((x230<x231)/x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -12;
	volatile int64_t x235 = 309523727148725LL;
	static volatile int32_t x236 = INT32_MAX;
	volatile int32_t t57 = -11;

	t57 = (x233*((x234<x235)/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = 213920875LL;
	volatile int64_t x238 = INT64_MAX;
	uint8_t x239 = UINT8_MAX;
	static int64_t x240 = -1LL;
	int64_t t58 = -3930372716625496LL;

	t58 = (x237*((x238<x239)/x240));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -13664;
	volatile uint64_t x243 = 53051540822LLU;
	int64_t x244 = INT64_MIN;

	t59 = (x241*((x242<x243)/x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = 7523U;
	volatile uint32_t x246 = UINT32_MAX;
	static int16_t x248 = -1;
	uint32_t t60 = 15823U;

	t60 = (x245*((x246<x247)/x248));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MAX;
	int64_t x251 = INT64_MAX;
	int64_t x252 = 57LL;
	int64_t t61 = 0LL;

	t61 = (x249*((x250<x251)/x252));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -3150;
	int32_t x254 = 38279;
	volatile int64_t x255 = -1LL;
	static volatile int64_t x256 = INT64_MIN;
	static int64_t t62 = -57419298868491538LL;

	t62 = (x253*((x254<x255)/x256));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x257 = INT32_MIN;
	uint64_t x258 = 6001782LLU;
	static volatile uint64_t t63 = 1198282LLU;

	t63 = (x257*((x258<x259)/x260));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x262 = 87501U;
	int8_t x263 = 39;
	static int8_t x264 = INT8_MAX;
	volatile uint32_t t64 = 2U;

	t64 = (x261*((x262<x263)/x264));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x265 = 265;
	uint64_t x266 = 626LLU;
	int64_t x268 = INT64_MIN;
	static int64_t t65 = 102LL;

	t65 = (x265*((x266<x267)/x268));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = -1LL;
	volatile int8_t x270 = 0;
	int32_t x271 = 0;
	volatile int8_t x272 = -1;
	int64_t t66 = 235812LL;

	t66 = (x269*((x270<x271)/x272));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x273 = 13806528LLU;
	int32_t x274 = 1021866;
	int16_t x276 = -1;
	volatile uint64_t t67 = 4LLU;

	t67 = (x273*((x274<x275)/x276));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -1;
	int16_t x278 = INT16_MAX;
	int32_t x279 = INT32_MIN;
	uint32_t x280 = UINT32_MAX;
	static volatile uint32_t t68 = 29U;

	t68 = (x277*((x278<x279)/x280));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x284 = 3237022135061615374LLU;
	static volatile uint64_t t69 = 343354962060368016LLU;

	t69 = (x281*((x282<x283)/x284));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x285 = INT64_MAX;
	int32_t x286 = 31397403;
	int32_t x287 = INT32_MIN;
	int32_t x288 = -58135;
	static int64_t t70 = 228LL;

	t70 = (x285*((x286<x287)/x288));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = 528073131U;
	static uint16_t x291 = 1559U;
	int64_t x292 = -165795555163268LL;
	int64_t t71 = -1998LL;

	t71 = (x289*((x290<x291)/x292));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = -247;
	int32_t x294 = INT32_MIN;
	int32_t x295 = -39755182;
	int16_t x296 = 2;
	volatile int32_t t72 = -1;

	t72 = (x293*((x294<x295)/x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x297 = 6974670U;
	volatile int16_t x298 = 2;
	int32_t x300 = INT32_MIN;
	volatile uint32_t t73 = 176U;

	t73 = (x297*((x298<x299)/x300));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x301 = 19795876062LLU;
	volatile uint64_t x302 = 481155911629359941LLU;
	int64_t x304 = 106391LL;
	volatile uint64_t t74 = 2LLU;

	t74 = (x301*((x302<x303)/x304));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = -1;
	uint64_t x310 = UINT64_MAX;
	int32_t t75 = 16592006;

	t75 = (x309*((x310<x311)/x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x314 = 2447251137LL;
	int8_t x316 = -1;
	volatile int32_t t76 = 25;

	t76 = (x313*((x314<x315)/x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -370448LL;
	int8_t x318 = INT8_MIN;
	int8_t x319 = -4;
	static volatile int64_t t77 = -15LL;

	t77 = (x317*((x318<x319)/x320));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x324 = -1LL;
	int64_t t78 = -39512607432155126LL;

	t78 = (x321*((x322<x323)/x324));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -1;
	int64_t x326 = INT64_MAX;
	volatile int8_t x327 = -51;
	int8_t x328 = INT8_MAX;
	static int32_t t79 = 11975;

	t79 = (x325*((x326<x327)/x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x330 = 39;
	uint8_t x331 = 124U;
	int64_t x332 = -1LL;
	volatile int64_t t80 = 3575335049377646097LL;

	t80 = (x329*((x330<x331)/x332));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x334 = 2;
	int8_t x335 = INT8_MAX;
	static int32_t x336 = INT32_MAX;

	t81 = (x333*((x334<x335)/x336));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x337 = 3358U;
	static int64_t x338 = 0LL;
	int32_t x339 = -3722;
	static volatile int8_t x340 = INT8_MIN;
	volatile int32_t t82 = -17;

	t82 = (x337*((x338<x339)/x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t t83 = 881U;

	t83 = (x341*((x342<x343)/x344));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = 6497U;
	int32_t x347 = -47;
	int8_t x348 = INT8_MIN;
	int32_t t84 = -28150226;

	t84 = (x345*((x346<x347)/x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = 34U;
	uint16_t x350 = 212U;
	int64_t x351 = INT64_MIN;
	volatile int32_t x352 = -1;
	static volatile int32_t t85 = 6335;

	t85 = (x349*((x350<x351)/x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x354 = 2696LL;
	static volatile int64_t x355 = 14771095287869401LL;

	t86 = (x353*((x354<x355)/x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -4554391683201375LL;
	uint64_t x358 = UINT64_MAX;
	uint8_t x359 = UINT8_MAX;
	uint64_t t87 = 845593LLU;

	t87 = (x357*((x358<x359)/x360));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = 887955851505710296LLU;
	int8_t x362 = INT8_MIN;
	int64_t x363 = -26834724LL;
	int8_t x364 = INT8_MAX;
	volatile uint64_t t88 = 32673875052783325LLU;

	t88 = (x361*((x362<x363)/x364));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = 2186U;
	volatile int32_t x366 = INT32_MIN;
	int64_t x368 = INT64_MAX;

	t89 = (x365*((x366<x367)/x368));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MIN;
	static int64_t x371 = INT64_MIN;
	int64_t x372 = -1LL;

	t90 = (x369*((x370<x371)/x372));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = -27628278;
	int32_t x374 = 2288492;
	int8_t x375 = 61;
	int64_t t91 = 29813LL;

	t91 = (x373*((x374<x375)/x376));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x378 = -1;
	int64_t x380 = INT64_MIN;
	int64_t t92 = 7825998LL;

	t92 = (x377*((x378<x379)/x380));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x381 = 7765105;
	volatile int64_t x382 = 60618186414932397LL;
	int8_t x383 = 1;
	uint16_t x384 = UINT16_MAX;
	int32_t t93 = 804542075;

	t93 = (x381*((x382<x383)/x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = INT16_MIN;
	static volatile int64_t x387 = INT64_MAX;
	int16_t x388 = -37;

	t94 = (x385*((x386<x387)/x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x389 = 2134;
	volatile uint32_t x391 = 6U;
	volatile uint32_t x392 = UINT32_MAX;
	uint32_t t95 = 33597U;

	t95 = (x389*((x390<x391)/x392));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x393 = 29365U;
	volatile int16_t x394 = INT16_MAX;
	volatile int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t96 = 234U;

	t96 = (x393*((x394<x395)/x396));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x398 = 1U;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;
	uint64_t t97 = 112770995550LLU;

	t97 = (x397*((x398<x399)/x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x405 = INT64_MIN;
	int16_t x406 = -1;
	int32_t x407 = INT32_MIN;
	static volatile uint32_t x408 = 320442627U;
	int64_t t98 = -153773LL;

	t98 = (x405*((x406<x407)/x408));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x409 = 38;
	uint8_t x410 = UINT8_MAX;
	volatile int16_t x411 = INT16_MIN;
	volatile int64_t t99 = 1923313LL;

	t99 = (x409*((x410<x411)/x412));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

