#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int64_t x6 = INT64_MAX;
volatile int16_t x12 = -15;
volatile int64_t x14 = INT64_MIN;
static volatile int8_t x21 = INT8_MIN;
uint64_t x22 = UINT64_MAX;
volatile int8_t x23 = -52;
uint16_t x36 = 4U;
static volatile int64_t t8 = 4818057LL;
int32_t t10 = -240258077;
uint8_t x62 = 0U;
volatile uint64_t t15 = 545013LLU;
int16_t x66 = INT16_MAX;
volatile uint8_t x72 = UINT8_MAX;
int16_t x85 = -1;
uint64_t x86 = 75836334035405386LLU;
int32_t t21 = 636995;
volatile int64_t x89 = INT64_MIN;
uint8_t x96 = 2U;
int32_t t23 = -38146;
static volatile int32_t x97 = INT32_MIN;
int32_t t24 = INT32_MIN;
int8_t x104 = INT8_MIN;
uint8_t x109 = UINT8_MAX;
int32_t t29 = 585;
static int8_t x126 = INT8_MAX;
uint8_t x133 = 62U;
int8_t x141 = INT8_MAX;
volatile int32_t t35 = -14856;
static volatile int32_t t36 = -1994;
uint8_t x149 = 9U;
uint8_t x151 = UINT8_MAX;
int64_t x153 = INT64_MIN;
static uint64_t x157 = 3126748083935010070LLU;
int16_t x158 = INT16_MAX;
int16_t x161 = INT16_MIN;
volatile uint16_t x163 = UINT16_MAX;
static int16_t x164 = INT16_MIN;
static uint16_t x166 = UINT16_MAX;
uint64_t x174 = 16734241537827166LLU;
volatile uint64_t x186 = UINT64_MAX;
uint8_t x187 = UINT8_MAX;
static int32_t x188 = INT32_MAX;
volatile uint32_t x190 = 2023122715U;
volatile uint16_t x191 = 48U;
int32_t x197 = -1;
volatile int32_t t49 = 57396;
int16_t x201 = -1;
int32_t t50 = 1692;
int16_t x206 = 15;
static uint32_t x208 = 36061U;
int64_t t51 = -1LL;
volatile int32_t t53 = 443308338;
int16_t x217 = 213;
volatile uint16_t x219 = 3U;
int64_t x223 = INT64_MIN;
uint8_t x224 = UINT8_MAX;
int64_t x227 = 26389079LL;
int16_t x232 = INT16_MAX;
int16_t x254 = INT16_MIN;
volatile uint16_t x258 = UINT16_MAX;
int32_t t63 = 278033;
int16_t x264 = -1;
static uint32_t x270 = UINT32_MAX;
volatile int64_t t68 = INT64_MAX;
int32_t x283 = INT32_MIN;
static int64_t x285 = INT64_MIN;
uint16_t x288 = 3U;
static int64_t x289 = INT64_MIN;
int32_t x290 = INT32_MIN;
static volatile uint64_t x292 = 55064154LLU;
volatile int16_t x293 = INT16_MAX;
int8_t x295 = INT8_MIN;
uint16_t x300 = 3836U;
static volatile int32_t t73 = 99071;
int8_t x301 = INT8_MAX;
static volatile uint16_t x306 = UINT16_MAX;
uint16_t x321 = UINT16_MAX;
int64_t x322 = INT64_MAX;
volatile int32_t t79 = 92;
volatile uint16_t x331 = UINT16_MAX;
int64_t t83 = -1021049970LL;
uint8_t x345 = 19U;
int16_t x349 = INT16_MIN;
int8_t x353 = 1;
uint16_t x359 = UINT16_MAX;
uint8_t x368 = 32U;
int32_t t90 = -49848848;
int64_t x374 = INT64_MAX;
volatile int32_t t92 = -10737;
uint16_t x377 = UINT16_MAX;
uint32_t x379 = UINT32_MAX;
uint16_t x381 = UINT16_MAX;
static uint8_t x388 = UINT8_MAX;
uint32_t x389 = 131014399U;
int64_t x391 = -1LL;
volatile int8_t x394 = INT8_MIN;
static int32_t x402 = INT32_MIN;
int8_t x406 = INT8_MAX;
int32_t t99 = 1;


void f0(void) {
	static uint64_t x1 = 9216266467LLU;
	int16_t x2 = INT16_MIN;
	uint32_t x3 = 3U;
	static int64_t x4 = -3050LL;
	static uint64_t t0 = 26161311744398045LLU;

	t0 = (x1|(x2<(x3/x4)));

	if (t0 != 9216266467LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = INT32_MIN;
	static uint8_t x8 = 54U;
	int32_t t1 = 10837892;

	t1 = (x5|(x6<(x7/x8)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int32_t x10 = -1;
	uint16_t x11 = 0U;
	volatile int32_t t2 = -32064324;

	t2 = (x9|(x10<(x11/x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int16_t x15 = 17;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 519099;

	t3 = (x13|(x14<(x15/x16)));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 30U;
	uint16_t x18 = 7U;
	volatile uint32_t x19 = UINT32_MAX;
	volatile int8_t x20 = 46;
	volatile int32_t t4 = -15923406;

	t4 = (x17|(x18<(x19/x20)));

	if (t4 != 31) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x24 = UINT32_MAX;
	int32_t t5 = -1533056;

	t5 = (x21|(x22<(x23/x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 5;
	uint8_t x26 = 1U;
	static volatile int64_t x27 = INT64_MAX;
	int8_t x28 = INT8_MAX;
	int32_t t6 = -332134668;

	t6 = (x25|(x26<(x27/x28)));

	if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 79LLU;
	volatile uint8_t x30 = 20U;
	int8_t x31 = 1;
	uint8_t x32 = 1U;
	volatile uint64_t t7 = 5999833481275128LLU;

	t7 = (x29|(x30<(x31/x32)));

	if (t7 != 79LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -146903LL;
	int64_t x34 = INT64_MAX;
	uint64_t x35 = 864430LLU;

	t8 = (x33|(x34<(x35/x36)));

	if (t8 != -146903LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1925LL;
	int32_t x38 = INT32_MAX;
	uint8_t x39 = 0U;
	int64_t x40 = 158031924LL;
	int64_t t9 = 8684890659400226LL;

	t9 = (x37|(x38<(x39/x40)));

	if (t9 != -1925LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 35U;
	int8_t x42 = INT8_MIN;
	uint8_t x43 = 96U;
	uint64_t x44 = 2469929593493356LLU;

	t10 = (x41|(x42<(x43/x44)));

	if (t10 != 35) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -440;
	volatile int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 58583190;

	t11 = (x45|(x46<(x47/x48)));

	if (t11 != -439) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 0U;
	int32_t x50 = -1;
	static volatile int8_t x51 = 29;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = 1;

	t12 = (x49|(x50<(x51/x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	uint8_t x54 = 2U;
	static int8_t x55 = -1;
	static int8_t x56 = 4;
	volatile int32_t t13 = -467497709;

	t13 = (x53|(x54<(x55/x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	uint16_t x58 = UINT16_MAX;
	static uint16_t x59 = 16407U;
	uint8_t x60 = 15U;
	volatile int32_t t14 = -407605;

	t14 = (x57|(x58<(x59/x60)));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 693526130LLU;
	int16_t x63 = INT16_MAX;
	int16_t x64 = INT16_MIN;

	t15 = (x61|(x62<(x63/x64)));

	if (t15 != 693526130LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 2209648547819191LLU;
	int16_t x67 = -1;
	int16_t x68 = -36;
	volatile uint64_t t16 = 0LLU;

	t16 = (x65|(x66<(x67/x68)));

	if (t16 != 2209648547819191LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MIN;
	volatile int64_t x71 = INT64_MIN;
	int32_t t17 = 7;

	t17 = (x69|(x70<(x71/x72)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	static int8_t x75 = INT8_MIN;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = INT32_MIN;

	t18 = (x73|(x74<(x75/x76)));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 24U;
	volatile int64_t x78 = INT64_MIN;
	volatile int64_t x79 = INT64_MIN;
	static int32_t x80 = INT32_MIN;
	uint32_t t19 = 4209150U;

	t19 = (x77|(x78<(x79/x80)));

	if (t19 != 25U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = -13;
	static int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = 2249;

	t20 = (x81|(x82<(x83/x84)));

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x87 = -1;
	int64_t x88 = INT64_MIN;

	t21 = (x85|(x86<(x87/x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = 335076403;
	static int8_t x91 = INT8_MAX;
	int32_t x92 = -969;
	volatile int64_t t22 = INT64_MIN;

	t22 = (x89|(x90<(x91/x92)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 5U;
	volatile int64_t x94 = INT64_MAX;
	volatile uint32_t x95 = UINT32_MAX;

	t23 = (x93|(x94<(x95/x96)));

	if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MAX;
	int16_t x99 = -16080;
	int32_t x100 = 571241;

	t24 = (x97|(x98<(x99/x100)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -2LL;
	volatile uint16_t x102 = 500U;
	static int32_t x103 = 0;
	static int64_t t25 = 64LL;

	t25 = (x101|(x102<(x103/x104)));

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	static int8_t x106 = 1;
	static uint32_t x107 = UINT32_MAX;
	uint32_t x108 = 147307552U;
	volatile int32_t t26 = -3799;

	t26 = (x105|(x106<(x107/x108)));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 80U;
	int32_t x111 = -1857568;
	volatile int32_t x112 = -1;
	int32_t t27 = 80565575;

	t27 = (x109|(x110<(x111/x112)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MIN;
	static volatile int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MIN;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113|(x114<(x115/x116)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -10489;
	int16_t x118 = -1;
	int16_t x119 = INT16_MIN;
	int32_t x120 = -1;

	t29 = (x117|(x118<(x119/x120)));

	if (t29 != -10489) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = 36;
	volatile uint32_t x122 = 1695U;
	int64_t x123 = INT64_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 35;

	t30 = (x121|(x122<(x123/x124)));

	if (t30 != 36) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	int16_t x127 = 6;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 7076;

	t31 = (x125|(x126<(x127/x128)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	int8_t x131 = 31;
	int16_t x132 = INT16_MAX;
	int32_t t32 = -283615620;

	t32 = (x129|(x130<(x131/x132)));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x134 = INT8_MAX;
	static uint16_t x135 = UINT16_MAX;
	uint32_t x136 = 2962152U;
	volatile int32_t t33 = -257025049;

	t33 = (x133|(x134<(x135/x136)));

	if (t33 != 62) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int16_t x138 = 386;
	int8_t x139 = INT8_MAX;
	int8_t x140 = -19;
	uint64_t t34 = UINT64_MAX;

	t34 = (x137|(x138<(x139/x140)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	volatile int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;

	t35 = (x141|(x142<(x143/x144)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x145 = 85;
	static int8_t x146 = INT8_MIN;
	static int8_t x147 = -1;
	volatile int16_t x148 = INT16_MIN;

	t36 = (x145|(x146<(x147/x148)));

	if (t36 != 85) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x150 = INT8_MIN;
	static int8_t x152 = INT8_MIN;
	static int32_t t37 = -1993;

	t37 = (x149|(x150<(x151/x152)));

	if (t37 != 9) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 1;
	static int16_t x155 = -1;
	int32_t x156 = 79872426;
	int64_t t38 = INT64_MIN;

	t38 = (x153|(x154<(x155/x156)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x159 = UINT32_MAX;
	int32_t x160 = 523636;
	volatile uint64_t t39 = 279317LLU;

	t39 = (x157|(x158<(x159/x160)));

	if (t39 != 3126748083935010070LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 1203120327853774269LLU;
	int32_t t40 = 44;

	t40 = (x161|(x162<(x163/x164)));

	if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = UINT64_MAX;
	uint32_t x167 = 213939U;
	int16_t x168 = INT16_MIN;
	uint64_t t41 = UINT64_MAX;

	t41 = (x165|(x166<(x167/x168)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -16162;
	volatile uint64_t x170 = 2413858550687LLU;
	int32_t x171 = -46791137;
	int32_t x172 = 251;
	static int32_t t42 = 7563324;

	t42 = (x169|(x170<(x171/x172)));

	if (t42 != -16161) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	int8_t x176 = -1;
	volatile int64_t t43 = INT64_MAX;

	t43 = (x173|(x174<(x175/x176)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	static volatile uint8_t x179 = 53U;
	int16_t x180 = -61;
	volatile int32_t t44 = -29230;

	t44 = (x177|(x178<(x179/x180)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 3573222696582547LL;
	static int16_t x182 = 3;
	int16_t x183 = INT16_MIN;
	int32_t x184 = -34801702;
	static int64_t t45 = -55575506691529LL;

	t45 = (x181|(x182<(x183/x184)));

	if (t45 != 3573222696582547LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	volatile int32_t t46 = INT32_MIN;

	t46 = (x185|(x186<(x187/x188)));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static int32_t x192 = INT32_MAX;
	int64_t t47 = INT64_MIN;

	t47 = (x189|(x190<(x191/x192)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int32_t x194 = 516154242;
	uint8_t x195 = 1U;
	volatile int8_t x196 = 6;
	int64_t t48 = INT64_MAX;

	t48 = (x193|(x194<(x195/x196)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x198 = -1;
	int32_t x199 = -1;
	volatile int8_t x200 = -1;

	t49 = (x197|(x198<(x199/x200)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = -658798425193LL;
	uint64_t x203 = 87475910LLU;
	int32_t x204 = INT32_MIN;

	t50 = (x201|(x202<(x203/x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x207 = 270618869U;

	t51 = (x205|(x206<(x207/x208)));

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 1441;
	static int8_t x210 = INT8_MIN;
	int8_t x211 = 0;
	uint64_t x212 = UINT64_MAX;
	static volatile int32_t t52 = 11255;

	t52 = (x209|(x210<(x211/x212)));

	if (t52 != 1441) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static uint16_t x214 = 553U;
	int16_t x215 = INT16_MIN;
	static uint16_t x216 = UINT16_MAX;

	t53 = (x213|(x214<(x215/x216)));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 264U;
	int64_t x220 = INT64_MIN;
	int32_t t54 = -7407687;

	t54 = (x217|(x218<(x219/x220)));

	if (t54 != 213) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 10350LLU;
	int16_t x222 = 1161;
	volatile uint64_t t55 = 1010061850LLU;

	t55 = (x221|(x222<(x223/x224)));

	if (t55 != 10350LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MAX;
	int8_t x228 = -1;
	int32_t t56 = -5698397;

	t56 = (x225|(x226<(x227/x228)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 686399553;
	static int32_t x230 = -2703;
	static int16_t x231 = INT16_MAX;
	int32_t t57 = 113112157;

	t57 = (x229|(x230<(x231/x232)));

	if (t57 != 686399553) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 27503U;
	uint64_t x234 = UINT64_MAX;
	volatile int32_t x235 = INT32_MAX;
	volatile int8_t x236 = INT8_MAX;
	static volatile int32_t t58 = 129435100;

	t58 = (x233|(x234<(x235/x236)));

	if (t58 != 27503) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	uint16_t x238 = 9U;
	int64_t x239 = 50335LL;
	uint64_t x240 = UINT64_MAX;
	int64_t t59 = INT64_MIN;

	t59 = (x237|(x238<(x239/x240)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x245 = 4333U;
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = 24U;
	static int64_t x248 = INT64_MIN;
	static int32_t t60 = -909;

	t60 = (x245|(x246<(x247/x248)));

	if (t60 != 4333) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = 4439;
	uint8_t x250 = UINT8_MAX;
	uint8_t x251 = 7U;
	volatile int16_t x252 = INT16_MIN;
	static volatile int32_t t61 = -12397;

	t61 = (x249|(x250<(x251/x252)));

	if (t61 != 4439) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -54;
	uint64_t x255 = UINT64_MAX;
	uint32_t x256 = 1327252209U;
	volatile int32_t t62 = 105238;

	t62 = (x253|(x254<(x255/x256)));

	if (t62 != -54) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x257 = UINT8_MAX;
	int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;

	t63 = (x257|(x258<(x259/x260)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 141473927765602279LLU;
	static int32_t x262 = 41;
	uint64_t x263 = 3LLU;
	uint64_t t64 = 379048LLU;

	t64 = (x261|(x262<(x263/x264)));

	if (t64 != 141473927765602279LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 23U;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MAX;
	uint8_t x268 = 15U;
	volatile uint32_t t65 = 2U;

	t65 = (x265|(x266<(x267/x268)));

	if (t65 != 23U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	uint8_t x271 = 0U;
	static uint16_t x272 = UINT16_MAX;
	volatile int32_t t66 = -133956;

	t66 = (x269|(x270<(x271/x272)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -41;
	static int64_t x274 = -7869545LL;
	uint8_t x275 = 0U;
	uint8_t x276 = 1U;
	volatile int32_t t67 = 1344;

	t67 = (x273|(x274<(x275/x276)));

	if (t67 != -41) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MAX;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = -6;
	int32_t x280 = 39813363;

	t68 = (x277|(x278<(x279/x280)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MAX;
	uint16_t x282 = 1405U;
	int32_t x284 = INT32_MAX;
	volatile int32_t t69 = -120965455;

	t69 = (x281|(x282<(x283/x284)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x286 = 51;
	uint8_t x287 = 14U;
	static volatile int64_t t70 = INT64_MIN;

	t70 = (x285|(x286<(x287/x288)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x291 = -13;
	static int64_t t71 = INT64_MIN;

	t71 = (x289|(x290<(x291/x292)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = INT8_MAX;
	int32_t x296 = -10509;
	volatile int32_t t72 = -130846;

	t72 = (x293|(x294<(x295/x296)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x297 = 119U;
	int32_t x298 = INT32_MIN;
	volatile int64_t x299 = 1987965719187275LL;

	t73 = (x297|(x298<(x299/x300)));

	if (t73 != 119) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x302 = 53U;
	static int8_t x303 = -1;
	uint64_t x304 = 50456600526LLU;
	int32_t t74 = -42351;

	t74 = (x301|(x302<(x303/x304)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	int32_t x307 = INT32_MIN;
	volatile int8_t x308 = INT8_MAX;
	int32_t t75 = INT32_MIN;

	t75 = (x305|(x306<(x307/x308)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x309 = -1104630098455755LL;
	uint8_t x310 = UINT8_MAX;
	volatile int64_t x311 = 495LL;
	int32_t x312 = -2;
	volatile int64_t t76 = 166LL;

	t76 = (x309|(x310<(x311/x312)));

	if (t76 != -1104630098455755LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	volatile uint8_t x314 = UINT8_MAX;
	int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x313|(x314<(x315/x316)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x318 = 16829101252LLU;
	int16_t x319 = INT16_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int64_t t78 = -76832LL;

	t78 = (x317|(x318<(x319/x320)));

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x323 = 951925280;
	int8_t x324 = INT8_MIN;

	t79 = (x321|(x322<(x323/x324)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x326 = -1LL;
	int8_t x327 = 2;
	int8_t x328 = INT8_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = (x325|(x326<(x327/x328)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = -1;
	static int64_t x330 = INT64_MAX;
	int64_t x332 = INT64_MIN;
	int32_t t81 = -14;

	t81 = (x329|(x330<(x331/x332)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = INT32_MAX;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = 0;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t82 = INT32_MAX;

	t82 = (x333|(x334<(x335/x336)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x337 = -32304830948679LL;
	static int8_t x338 = INT8_MAX;
	uint8_t x339 = UINT8_MAX;
	uint64_t x340 = 492830407806414LLU;

	t83 = (x337|(x338<(x339/x340)));

	if (t83 != -32304830948679LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MAX;
	int16_t x343 = -1;
	int32_t x344 = -1;
	volatile int64_t t84 = INT64_MIN;

	t84 = (x341|(x342<(x343/x344)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x346 = INT8_MIN;
	volatile int8_t x347 = -1;
	static int32_t x348 = INT32_MAX;
	int32_t t85 = -13;

	t85 = (x345|(x346<(x347/x348)));

	if (t85 != 19) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x350 = UINT16_MAX;
	uint8_t x351 = UINT8_MAX;
	uint8_t x352 = 14U;
	int32_t t86 = 8890;

	t86 = (x349|(x350<(x351/x352)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x354 = -2;
	int8_t x355 = INT8_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	int32_t t87 = -342944;

	t87 = (x353|(x354<(x355/x356)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	static int32_t t88 = 678768;

	t88 = (x357|(x358<(x359/x360)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x361 = 3100;
	int32_t x362 = -1;
	volatile uint64_t x363 = 14709LLU;
	static int32_t x364 = -1;
	int32_t t89 = -187;

	t89 = (x361|(x362<(x363/x364)));

	if (t89 != 3100) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x365 = 776U;
	uint8_t x366 = 1U;
	static int8_t x367 = -1;

	t90 = (x365|(x366<(x367/x368)));

	if (t90 != 776) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x369 = 12479U;
	uint32_t x370 = 527800857U;
	int64_t x371 = 8647836LL;
	int16_t x372 = 183;
	volatile uint32_t t91 = 87092U;

	t91 = (x369|(x370<(x371/x372)));

	if (t91 != 12479U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x373 = 3U;
	int16_t x375 = INT16_MAX;
	static int8_t x376 = INT8_MIN;

	t92 = (x373|(x374<(x375/x376)));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x378 = -1;
	int16_t x380 = -1;
	int32_t t93 = 933;

	t93 = (x377|(x378<(x379/x380)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	static int32_t t94 = 70;

	t94 = (x381|(x382<(x383/x384)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MAX;
	int32_t t95 = 357;

	t95 = (x385|(x386<(x387/x388)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x390 = -2;
	static int16_t x392 = -1;
	static uint32_t t96 = 4691U;

	t96 = (x389|(x390<(x391/x392)));

	if (t96 != 131014399U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x393 = 39LLU;
	uint8_t x395 = 0U;
	volatile int16_t x396 = -1;
	uint64_t t97 = 186742327276949LLU;

	t97 = (x393|(x394<(x395/x396)));

	if (t97 != 39LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = -31;
	int64_t x403 = INT64_MAX;
	volatile int64_t x404 = -1LL;
	volatile int32_t t98 = -11;

	t98 = (x401|(x402<(x403/x404)));

	if (t98 != -31) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x405 = 19660U;
	uint16_t x407 = 9U;
	int64_t x408 = INT64_MAX;

	t99 = (x405|(x406<(x407/x408)));

	if (t99 != 19660) { NG(); } else { ; }
	
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

