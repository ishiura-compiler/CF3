#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -37;
uint32_t x8 = 1643U;
int8_t x10 = INT8_MIN;
int32_t x12 = -1;
int64_t t2 = -3244LL;
volatile int32_t x19 = INT32_MIN;
volatile int16_t x22 = INT16_MIN;
uint16_t x23 = 1945U;
int64_t x28 = 2497361317LL;
volatile int8_t x30 = 55;
static int32_t x32 = 1806261;
int32_t x42 = 237984;
volatile uint64_t x51 = 923854102LLU;
static int32_t x52 = -1;
uint16_t x64 = UINT16_MAX;
int32_t t15 = 165844;
int64_t x66 = -1LL;
uint16_t x69 = 59U;
int32_t t17 = -3;
static uint64_t x76 = 2893377020747579LLU;
uint8_t x77 = 1U;
int64_t x81 = -3952099593936472LL;
static uint8_t x84 = 0U;
static volatile int64_t t20 = -444563LL;
int64_t x88 = 4644192LL;
static int8_t x96 = 17;
volatile int32_t t23 = 88883200;
uint8_t x97 = 117U;
static int32_t t24 = -1;
uint32_t x106 = 1U;
int16_t x115 = -3;
static volatile int32_t t28 = -212530;
int32_t x118 = 207282185;
uint64_t x123 = UINT64_MAX;
int8_t x127 = -1;
uint8_t x128 = 22U;
volatile int64_t x134 = -714940LL;
volatile int32_t t35 = -205368;
static int32_t x145 = INT32_MIN;
int32_t x146 = 3382544;
uint16_t x148 = UINT16_MAX;
int16_t x151 = -1;
static volatile int64_t x155 = INT64_MIN;
int32_t t39 = 293;
int64_t x167 = -1LL;
uint16_t x174 = 10803U;
int32_t x181 = INT32_MIN;
volatile uint64_t x184 = UINT64_MAX;
static volatile uint64_t t46 = UINT64_MAX;
int8_t x190 = INT8_MAX;
volatile int16_t x192 = -1;
int32_t t47 = 0;
int8_t x196 = INT8_MIN;
static uint8_t x200 = UINT8_MAX;
int16_t x201 = INT16_MIN;
static uint8_t x209 = UINT8_MAX;
uint64_t x218 = UINT64_MAX;
uint32_t x220 = 6224U;
volatile int32_t t54 = 110546117;
uint32_t x224 = 920364668U;
static int32_t t56 = 119;
volatile int64_t x229 = -51LL;
volatile int8_t x231 = 52;
int8_t x241 = 1;
int16_t x244 = -1;
static uint64_t x245 = 6406257LLU;
uint64_t x246 = 230094LLU;
static int64_t x249 = INT64_MIN;
uint64_t x257 = 347923774620204250LLU;
volatile uint64_t t64 = 111558LLU;
int8_t x263 = -1;
int32_t x271 = 527786699;
int16_t x278 = INT16_MIN;
int64_t x282 = INT64_MIN;
static volatile int64_t t70 = INT64_MIN;
int32_t t72 = -61;
uint32_t x297 = UINT32_MAX;
int64_t x298 = INT64_MIN;
uint8_t x301 = 11U;
volatile int32_t t75 = -175;
int64_t x306 = 339659246231LL;
int8_t x307 = INT8_MIN;
int32_t x311 = 243;
uint64_t x317 = 21LLU;
volatile int8_t x325 = INT8_MIN;
int32_t x328 = -1;
volatile int32_t x329 = -603495;
int64_t x336 = -4LL;
int16_t x338 = INT16_MAX;
volatile int8_t x340 = -1;
uint64_t x343 = 4008230LLU;
uint32_t x346 = 6U;
uint64_t x351 = 196LLU;
int64_t x361 = -503493541719087LL;
volatile uint16_t x364 = 29205U;
volatile int64_t x365 = INT64_MIN;
static uint64_t x368 = UINT64_MAX;
int64_t t91 = INT64_MIN;
uint32_t t92 = 547077U;
volatile uint16_t x379 = UINT16_MAX;
int32_t t94 = -31;
int32_t x382 = INT32_MAX;
static uint64_t x387 = 2LLU;
uint16_t x390 = 12825U;
int64_t x391 = 1LL;
uint32_t t97 = 56319U;
static int32_t t98 = INT32_MAX;
int32_t x397 = INT32_MAX;
int16_t x400 = -1;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = -1;
	uint64_t x3 = 811621900065233LLU;
	int64_t x4 = -1LL;
	volatile int32_t t0 = 130874;

	t0 = (x1*(x2<(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -20428951564LL;
	int64_t x6 = -231430120063868920LL;
	volatile int64_t t1 = 11877168LL;

	t1 = (x5*(x6<(x7|x8)));

	if (t1 != -20428951564LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = -1LL;
	int8_t x11 = -2;

	t2 = (x9*(x10<(x11|x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	int64_t x14 = 28831LL;
	static int64_t x15 = INT64_MIN;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -1934758;

	t3 = (x13*(x14<(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int16_t x18 = -1;
	int32_t x20 = 1126;
	volatile uint64_t t4 = 1350579450513422521LLU;

	t4 = (x17*(x18<(x19|x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 449U;
	int8_t x24 = INT8_MIN;
	static int32_t t5 = -4;

	t5 = (x21*(x22<(x23|x24)));

	if (t5 != 449) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static int8_t x26 = INT8_MIN;
	uint64_t x27 = 8881346983285196LLU;
	int32_t t6 = 14;

	t6 = (x25*(x26<(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 98894;
	int64_t x31 = INT64_MIN;
	volatile int32_t t7 = 31924;

	t7 = (x29*(x30<(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -225603LL;
	uint8_t x35 = 0U;
	int64_t x36 = INT64_MIN;
	static volatile int32_t t8 = 62464593;

	t8 = (x33*(x34<(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = -1;
	uint64_t x38 = 55LLU;
	static uint16_t x39 = 5U;
	int16_t x40 = 3;
	volatile int32_t t9 = -8892514;

	t9 = (x37*(x38<(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 71985718186641643LLU;
	int32_t x43 = -1;
	static int8_t x44 = 1;
	static uint64_t t10 = 396052415LLU;

	t10 = (x41*(x42<(x43|x44)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = INT8_MIN;
	int64_t x47 = -1LL;
	static volatile int32_t x48 = 1;
	int32_t t11 = -20300152;

	t11 = (x45*(x46<(x47|x48)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 73510LLU;
	static int16_t x50 = 6;
	uint64_t t12 = 2190800927190395LLU;

	t12 = (x49*(x50<(x51|x52)));

	if (t12 != 73510LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -135999757437LL;
	int32_t x54 = INT32_MIN;
	volatile int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	int64_t t13 = 40772738791LL;

	t13 = (x53*(x54<(x55|x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 22338679804743LLU;
	int32_t x58 = -1;
	int64_t x59 = 3LL;
	static int64_t x60 = -18LL;
	volatile uint64_t t14 = 79LLU;

	t14 = (x57*(x58<(x59|x60)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = INT16_MAX;
	volatile int32_t x62 = -1;
	volatile int64_t x63 = INT64_MAX;

	t15 = (x61*(x62<(x63|x64)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x67 = INT32_MIN;
	volatile int64_t x68 = -1LL;
	volatile int32_t t16 = 500354872;

	t16 = (x65*(x66<(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	volatile int32_t x71 = -31633;
	int16_t x72 = 202;

	t17 = (x69*(x70<(x71|x72)));

	if (t17 != 59) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int64_t x74 = -674279LL;
	int16_t x75 = INT16_MIN;
	int32_t t18 = -51261313;

	t18 = (x73*(x74<(x75|x76)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = 86;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = 12468474U;
	int32_t t19 = -742074499;

	t19 = (x77*(x78<(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MIN;

	t20 = (x81*(x82<(x83|x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 148U;
	uint16_t x86 = UINT16_MAX;
	int8_t x87 = -44;
	static volatile int32_t t21 = 1402818;

	t21 = (x85*(x86<(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	uint8_t x90 = 9U;
	volatile int16_t x91 = 12;
	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t22 = 14;

	t22 = (x89*(x90<(x91|x92)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	int16_t x95 = 226;

	t23 = (x93*(x94<(x95|x96)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MAX;
	static int16_t x99 = INT16_MIN;
	static uint16_t x100 = 6381U;

	t24 = (x97*(x98<(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	uint32_t x102 = 24U;
	int16_t x103 = -1;
	uint8_t x104 = 20U;
	int32_t t25 = 93240479;

	t25 = (x101*(x102<(x103|x104)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x107 = -1;
	static int8_t x108 = 1;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (x105*(x106<(x107|x108)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 880U;
	uint16_t x110 = 3066U;
	static uint32_t x111 = 121163U;
	uint16_t x112 = 797U;
	int32_t t27 = 3;

	t27 = (x109*(x110<(x111|x112)));

	if (t27 != 880) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 2U;
	uint64_t x114 = 124691094LLU;
	uint16_t x116 = UINT16_MAX;

	t28 = (x113*(x114<(x115|x116)));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static int16_t x119 = INT16_MIN;
	volatile int64_t x120 = -1LL;
	static uint32_t t29 = 21419U;

	t29 = (x117*(x118<(x119|x120)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 2U;
	int64_t x122 = INT64_MAX;
	int64_t x124 = INT64_MIN;
	int32_t t30 = -185116;

	t30 = (x121*(x122<(x123|x124)));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 126170587LLU;
	int64_t x126 = INT64_MIN;
	volatile uint64_t t31 = 809782194722492175LLU;

	t31 = (x125*(x126<(x127|x128)));

	if (t31 != 126170587LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int64_t x130 = INT64_MIN;
	uint8_t x131 = UINT8_MAX;
	volatile int64_t x132 = INT64_MIN;
	static volatile uint32_t t32 = UINT32_MAX;

	t32 = (x129*(x130<(x131|x132)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -1;
	static int8_t x135 = -1;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 1273;

	t33 = (x133*(x134<(x135|x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 301043155262995970LLU;
	uint64_t x138 = 147521742041796732LLU;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = 0U;
	static uint64_t t34 = 3127949467LLU;

	t34 = (x137*(x138<(x139|x140)));

	if (t34 != 301043155262995970LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	static int32_t x142 = 1;
	int32_t x143 = INT32_MIN;
	volatile uint8_t x144 = 11U;

	t35 = (x141*(x142<(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x147 = -1LL;
	int32_t t36 = -1233442;

	t36 = (x145*(x146<(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int64_t x150 = INT64_MIN;
	static volatile uint8_t x152 = UINT8_MAX;
	int32_t t37 = INT32_MIN;

	t37 = (x149*(x150<(x151|x152)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	static volatile int32_t x154 = INT32_MIN;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x153*(x154<(x155|x156)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -7;
	volatile int8_t x158 = -1;
	int64_t x159 = INT64_MIN;
	int64_t x160 = -1108917514966181518LL;

	t39 = (x157*(x158<(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MAX;
	static volatile int32_t x162 = -943;
	static int16_t x163 = INT16_MIN;
	static volatile uint32_t x164 = 3109U;
	volatile int32_t t40 = -46283;

	t40 = (x161*(x162<(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 564906259U;
	uint32_t x166 = 30820395U;
	uint8_t x168 = 3U;
	uint32_t t41 = 13738620U;

	t41 = (x165*(x166<(x167|x168)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -30;
	int64_t x170 = INT64_MAX;
	int8_t x171 = -5;
	int16_t x172 = INT16_MIN;
	int32_t t42 = 221196;

	t42 = (x169*(x170<(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	int8_t x175 = 0;
	volatile int16_t x176 = -1;
	static volatile int64_t t43 = -833934837978287652LL;

	t43 = (x173*(x174<(x175|x176)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MIN;
	static uint32_t x178 = 893696384U;
	uint16_t x179 = 2286U;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x177*(x178<(x179|x180)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x182 = 2;
	volatile int32_t x183 = 5900134;
	volatile int32_t t45 = INT32_MIN;

	t45 = (x181*(x182<(x183|x184)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	uint64_t x186 = 229911579LLU;
	static int8_t x187 = INT8_MIN;
	uint16_t x188 = 832U;

	t46 = (x185*(x186<(x187|x188)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = 12726;
	int64_t x191 = -413LL;

	t47 = (x189*(x190<(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	static volatile int8_t x194 = -53;
	int16_t x195 = -1;
	int32_t t48 = -19;

	t48 = (x193*(x194<(x195|x196)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = -2150;
	int32_t x199 = INT32_MAX;
	static volatile int64_t t49 = INT64_MIN;

	t49 = (x197*(x198<(x199|x200)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 25338U;
	int8_t x203 = -1;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = -27148;

	t50 = (x201*(x202<(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	volatile uint8_t x206 = 1U;
	static uint64_t x207 = 9230189510LLU;
	static volatile int8_t x208 = INT8_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x205*(x206<(x207|x208)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 98314440010LLU;
	int16_t x211 = 0;
	volatile int32_t x212 = -1;
	volatile int32_t t52 = 55;

	t52 = (x209*(x210<(x211|x212)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -13;
	uint8_t x214 = 11U;
	volatile int32_t x215 = -1;
	uint64_t x216 = 2330350LLU;
	int32_t t53 = -115201652;

	t53 = (x213*(x214<(x215|x216)));

	if (t53 != -13) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 51U;
	int8_t x219 = -1;

	t54 = (x217*(x218<(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 4U;
	int16_t x222 = INT16_MIN;
	int16_t x223 = 1;
	uint32_t t55 = 5864533U;

	t55 = (x221*(x222<(x223|x224)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = -1;
	int16_t x227 = -1;
	int8_t x228 = 1;

	t56 = (x225*(x226<(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	int8_t x232 = INT8_MAX;
	volatile int64_t t57 = -4140056699LL;

	t57 = (x229*(x230<(x231|x232)));

	if (t57 != -51LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 2U;
	static int8_t x234 = -1;
	volatile uint8_t x235 = 64U;
	int16_t x236 = 4;
	volatile int32_t t58 = -536;

	t58 = (x233*(x234<(x235|x236)));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 3815;
	int32_t x238 = 3631;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = 1U;
	static volatile int32_t t59 = -2815552;

	t59 = (x237*(x238<(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = -1;
	static int32_t x243 = -280;
	int32_t t60 = 0;

	t60 = (x241*(x242<(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x247 = 6;
	int8_t x248 = INT8_MIN;
	static volatile uint64_t t61 = 1129630406883663416LLU;

	t61 = (x245*(x246<(x247|x248)));

	if (t61 != 6406257LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 1024215484LLU;
	int8_t x251 = INT8_MAX;
	static int16_t x252 = INT16_MIN;
	volatile int64_t t62 = INT64_MIN;

	t62 = (x249*(x250<(x251|x252)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 54;
	uint32_t x254 = 6U;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 1069U;
	static volatile int32_t t63 = 29;

	t63 = (x253*(x254<(x255|x256)));

	if (t63 != 54) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x258 = 12U;
	volatile int32_t x259 = -13110;
	uint16_t x260 = UINT16_MAX;

	t64 = (x257*(x258<(x259|x260)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	int64_t x264 = -1LL;
	int32_t t65 = -318936680;

	t65 = (x261*(x262<(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x265 = INT64_MAX;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = 1229;
	uint32_t x268 = UINT32_MAX;
	volatile int64_t t66 = -15492880909892714LL;

	t66 = (x265*(x266<(x267|x268)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 81524U;
	uint16_t x270 = 18U;
	uint16_t x272 = 42U;
	uint32_t t67 = 5782967U;

	t67 = (x269*(x270<(x271|x272)));

	if (t67 != 81524U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	volatile int8_t x274 = INT8_MIN;
	static uint16_t x275 = 8U;
	static int16_t x276 = INT16_MIN;
	volatile int64_t t68 = 15780844638763227LL;

	t68 = (x273*(x274<(x275|x276)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -60734;
	uint16_t x279 = 27U;
	volatile uint64_t x280 = 8982896335743301732LLU;
	int32_t t69 = -180376442;

	t69 = (x277*(x278<(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x283 = INT32_MAX;
	volatile int16_t x284 = 0;

	t70 = (x281*(x282<(x283|x284)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 484902924214077195LL;
	uint8_t x286 = 7U;
	int16_t x287 = INT16_MAX;
	static volatile int32_t x288 = INT32_MIN;
	volatile int64_t t71 = 2693868642817LL;

	t71 = (x285*(x286<(x287|x288)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MIN;
	int8_t x291 = 0;
	volatile int64_t x292 = INT64_MIN;

	t72 = (x289*(x290<(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = 0;
	int32_t x294 = INT32_MAX;
	static int16_t x295 = INT16_MIN;
	int64_t x296 = -1LL;
	volatile int32_t t73 = 61481;

	t73 = (x293*(x294<(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x299 = 105U;
	uint8_t x300 = 28U;
	uint32_t t74 = UINT32_MAX;

	t74 = (x297*(x298<(x299|x300)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x302 = 957382356521LL;
	int64_t x303 = INT64_MIN;
	int64_t x304 = 2101747283LL;

	t75 = (x301*(x302<(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int32_t x308 = INT32_MAX;
	volatile int32_t t76 = 21;

	t76 = (x305*(x306<(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 980U;
	volatile uint32_t x310 = UINT32_MAX;
	uint8_t x312 = 0U;
	volatile int32_t t77 = 53799179;

	t77 = (x309*(x310<(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = -126;
	uint16_t x314 = UINT16_MAX;
	volatile int8_t x315 = 0;
	int64_t x316 = INT64_MAX;
	static int32_t t78 = -13935;

	t78 = (x313*(x314<(x315|x316)));

	if (t78 != -126) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x318 = 19103LLU;
	static uint64_t x319 = 0LLU;
	uint32_t x320 = 3319U;
	static uint64_t t79 = 1528724LLU;

	t79 = (x317*(x318<(x319|x320)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 0;
	int8_t x322 = -1;
	static uint64_t x323 = 13943LLU;
	volatile uint64_t x324 = 218LLU;
	static volatile int32_t t80 = -32215;

	t80 = (x321*(x322<(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -1;
	int32_t x327 = INT32_MIN;
	static int32_t t81 = 56;

	t81 = (x325*(x326<(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = -1;
	int64_t x331 = -130311189716208LL;
	uint32_t x332 = 0U;
	volatile int32_t t82 = 0;

	t82 = (x329*(x330<(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = 42U;
	static int64_t x334 = -29661031245202085LL;
	uint16_t x335 = 493U;
	static int32_t t83 = -2327362;

	t83 = (x333*(x334<(x335|x336)));

	if (t83 != 42) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	int64_t x339 = INT64_MAX;
	int32_t t84 = 29;

	t84 = (x337*(x338<(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	uint32_t x342 = 184659060U;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t85 = 723891248;

	t85 = (x341*(x342<(x343|x344)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 0LLU;
	int64_t x347 = -3492447748LL;
	int8_t x348 = -1;
	uint64_t t86 = 2LLU;

	t86 = (x345*(x346<(x347|x348)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 510U;
	int16_t x350 = -1;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 4053;

	t87 = (x349*(x350<(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = -48;
	int32_t x354 = 31607;
	volatile int32_t x355 = -91;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -234595850;

	t88 = (x353*(x354<(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile uint8_t x358 = 38U;
	volatile uint16_t x359 = 35U;
	int8_t x360 = INT8_MIN;
	volatile int64_t t89 = 3159335141LL;

	t89 = (x357*(x358<(x359|x360)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = -1LL;
	uint8_t x363 = 4U;
	int64_t t90 = 0LL;

	t90 = (x361*(x362<(x363|x364)));

	if (t90 != -503493541719087LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x366 = -3911;
	int32_t x367 = INT32_MAX;

	t91 = (x365*(x366<(x367|x368)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 1U;
	int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	uint16_t x372 = 7930U;

	t92 = (x369*(x370<(x371|x372)));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 17;
	static int8_t x374 = 0;
	static uint8_t x375 = 1U;
	int16_t x376 = INT16_MAX;
	static volatile int32_t t93 = -4105509;

	t93 = (x373*(x374<(x375|x376)));

	if (t93 != 17) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint32_t x378 = 0U;
	static int32_t x380 = INT32_MIN;

	t94 = (x377*(x378<(x379|x380)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x381 = 39867009738314LLU;
	uint32_t x383 = 2U;
	static int8_t x384 = INT8_MAX;
	uint64_t t95 = 9187189233220411LLU;

	t95 = (x381*(x382<(x383|x384)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 399709LLU;
	int64_t x386 = INT64_MAX;
	int8_t x388 = 14;
	uint64_t t96 = 17302823149811924LLU;

	t96 = (x385*(x386<(x387|x388)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = 5U;
	int32_t x392 = -1;

	t97 = (x389*(x390<(x391|x392)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	uint64_t x394 = 125642LLU;
	int8_t x395 = INT8_MIN;
	static uint8_t x396 = UINT8_MAX;

	t98 = (x393*(x394<(x395|x396)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MAX;
	int8_t x399 = -10;
	volatile int32_t t99 = -2318244;

	t99 = (x397*(x398<(x399|x400)));

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

