#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = 220;
uint32_t x4 = UINT32_MAX;
static uint32_t x15 = 3467U;
volatile int32_t x17 = INT32_MIN;
int8_t x20 = INT8_MIN;
int16_t x26 = INT16_MAX;
uint32_t x32 = 973U;
uint32_t x38 = 32U;
int16_t x41 = -5;
int64_t x43 = -132015850232LL;
volatile int32_t x47 = INT32_MAX;
int32_t t9 = 15;
uint64_t x52 = 286LLU;
int32_t x53 = INT32_MIN;
volatile int32_t t11 = 154334184;
volatile uint32_t x59 = 4146941U;
int32_t x65 = -1;
static volatile int32_t t14 = 6643;
volatile int64_t t15 = -30758491008LL;
static int8_t x75 = INT8_MIN;
volatile uint32_t x79 = UINT32_MAX;
int32_t x85 = INT32_MIN;
int8_t x86 = -14;
volatile int64_t x93 = INT64_MIN;
int8_t x96 = INT8_MAX;
volatile int32_t x102 = -1;
int16_t x104 = -1;
uint64_t t22 = 0LLU;
static int32_t x108 = INT32_MIN;
int32_t x109 = -1;
int8_t x110 = -1;
int64_t x111 = -1LL;
int16_t x118 = -1;
static int16_t x129 = 145;
int64_t x132 = 77437LL;
volatile int64_t t28 = 154336028LL;
int16_t x134 = INT16_MIN;
static uint32_t x137 = 218568U;
int16_t x140 = INT16_MAX;
int16_t x156 = INT16_MAX;
int64_t t33 = -2333310LL;
static uint64_t x160 = 1LLU;
static volatile int64_t x163 = INT64_MIN;
uint8_t x164 = 73U;
static int32_t x167 = INT32_MIN;
uint64_t x171 = UINT64_MAX;
volatile uint64_t t37 = 76771332067669LLU;
int32_t x185 = INT32_MAX;
static int8_t x189 = INT8_MIN;
uint32_t x191 = UINT32_MAX;
int16_t x203 = INT16_MIN;
volatile int64_t t42 = 6748819266749LL;
uint32_t t43 = 26587550U;
static int8_t x215 = INT8_MIN;
static uint64_t x218 = 1197058371016820362LLU;
int8_t x219 = -1;
uint16_t x223 = 1U;
static volatile int8_t x228 = INT8_MIN;
volatile uint64_t t48 = 3690236234146LLU;
int16_t x230 = INT16_MIN;
volatile uint16_t x241 = 21U;
volatile int64_t x242 = -1LL;
int64_t t50 = 12485055649LL;
volatile uint64_t t51 = 88400589LLU;
uint8_t x249 = 0U;
static uint16_t x251 = 459U;
volatile int32_t t52 = 2016767;
int32_t x254 = INT32_MAX;
int8_t x265 = INT8_MIN;
volatile int16_t x270 = INT16_MIN;
volatile int64_t x275 = INT64_MIN;
int8_t x276 = 1;
int16_t x283 = -1;
int64_t x284 = INT64_MIN;
int64_t x285 = -1LL;
int64_t x287 = INT64_MIN;
static volatile uint64_t t62 = 1LLU;
int32_t x302 = INT32_MAX;
static uint8_t x304 = 4U;
int64_t x306 = INT64_MIN;
uint64_t x307 = 69LLU;
int8_t x310 = 3;
int64_t x311 = INT64_MIN;
int64_t x316 = INT64_MAX;
int8_t x317 = 1;
int64_t t69 = -473445679862LL;
static int8_t x329 = INT8_MAX;
volatile int8_t x333 = INT8_MIN;
volatile int32_t x334 = INT32_MIN;
int32_t x335 = INT32_MIN;
int64_t x338 = -67103843027700882LL;
static int8_t x340 = INT8_MAX;
static int64_t x349 = 4193236074536575668LL;
volatile int64_t t74 = 1134353LL;
volatile int64_t t75 = -1287LL;
uint16_t x363 = UINT16_MAX;
volatile int64_t t77 = 887091586LL;
static uint32_t x371 = 2454196U;
static volatile uint32_t t79 = 399864142U;
int16_t x378 = -205;
static uint16_t x379 = 407U;
int64_t x383 = INT64_MIN;
uint64_t t82 = 18143LLU;
static int64_t x385 = 21866LL;
int16_t x388 = INT16_MIN;
int8_t x394 = 37;
volatile uint64_t x400 = UINT64_MAX;
static volatile uint64_t t86 = 147527LLU;
static int64_t x407 = INT64_MIN;
static int8_t x413 = INT8_MIN;
static volatile int32_t x415 = INT32_MIN;
int64_t x425 = INT64_MIN;
static uint64_t x431 = UINT64_MAX;
int16_t x440 = -1;
static volatile int64_t x442 = -1LL;
volatile int8_t x443 = INT8_MAX;
int64_t x445 = 349185588LL;
static int8_t x453 = INT8_MIN;


void f0(void) {
	static int64_t x2 = 24992LL;
	int32_t x3 = -2042;
	volatile int64_t t0 = -640652927059598023LL;

	t0 = ((x1/x2)*(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x13 = -1LL;
	int8_t x14 = -1;
	uint16_t x16 = UINT16_MAX;
	volatile int64_t t1 = 2017961785646LL;

	t1 = ((x13/x14)*(x15&x16));

	if (t1 != 3467LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x18 = -592884818478225891LL;
	int8_t x19 = 33;
	volatile int64_t t2 = -55647223LL;

	t2 = ((x17/x18)*(x19&x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -741840811519LL;
	int32_t x22 = 1;
	uint16_t x23 = 113U;
	int32_t x24 = INT32_MIN;
	int64_t t3 = 69LL;

	t3 = ((x21/x22)*(x23&x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	volatile int32_t t4 = -325;

	t4 = ((x25/x26)*(x27&x28));

	if (t4 != 2147483646) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	uint8_t x30 = UINT8_MAX;
	volatile uint64_t x31 = 29LLU;
	static uint64_t t5 = 15177118858945LLU;

	t5 = ((x29/x30)*(x31&x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 1U;
	static int32_t x34 = INT32_MAX;
	int8_t x35 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;
	int32_t t6 = 526061723;

	t6 = ((x33/x34)*(x35&x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x37 = UINT16_MAX;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = -1;
	uint32_t t7 = 7U;

	t7 = ((x37/x38)*(x39&x40));

	if (t7 != 4294965249U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x42 = 62U;
	int32_t x44 = INT32_MAX;
	int64_t t8 = -321200660LL;

	t8 = ((x41/x42)*(x43&x44));

	if (t8 != 78150111459114760LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 239U;
	int32_t x46 = INT32_MIN;
	volatile int8_t x48 = 0;

	t9 = ((x45/x46)*(x47&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	uint64_t x51 = UINT64_MAX;
	uint64_t t10 = 23284235129LLU;

	t10 = ((x49/x50)*(x51&x52));

	if (t10 != 286LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = 394U;
	int32_t x55 = INT32_MIN;
	static int8_t x56 = INT8_MAX;

	t11 = ((x53/x54)*(x55&x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 6819439LLU;
	int8_t x58 = 49;
	static volatile int32_t x60 = INT32_MIN;
	uint64_t t12 = 891LLU;

	t12 = ((x57/x58)*(x59&x60));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x61 = 56U;
	int8_t x62 = 10;
	int8_t x63 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	int32_t t13 = -15874219;

	t13 = ((x61/x62)*(x63&x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x66 = INT16_MIN;
	int8_t x67 = -5;
	int32_t x68 = -62577;

	t14 = ((x65/x66)*(x67&x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = INT8_MIN;
	int64_t x70 = -1LL;
	uint8_t x71 = 3U;
	int64_t x72 = INT64_MIN;

	t15 = ((x69/x70)*(x71&x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	uint32_t x74 = 126289U;
	static volatile int8_t x76 = INT8_MAX;
	int64_t t16 = 115752902LL;

	t16 = ((x73/x74)*(x75&x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	int16_t x78 = -1;
	int16_t x80 = INT16_MIN;
	volatile uint32_t t17 = 2U;

	t17 = ((x77/x78)*(x79&x80));

	if (t17 != 4294934528U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x87 = 18374U;
	volatile int32_t x88 = -1;
	volatile uint32_t t18 = 3629442U;

	t18 = ((x85/x86)*(x87&x88));

	if (t18 != 920347510U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MIN;
	int32_t x91 = -1;
	int32_t x92 = 25070571;
	uint64_t t19 = 826488980487581381LLU;

	t19 = ((x89/x90)*(x91&x92));

	if (t19 != 25070571LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	volatile int64_t t20 = 213041434861989LL;

	t20 = ((x93/x94)*(x95&x96));

	if (t20 != 545460846592LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	int8_t x98 = -1;
	int32_t x99 = INT32_MAX;
	uint32_t x100 = UINT32_MAX;
	uint32_t t21 = 1U;

	t21 = ((x97/x98)*(x99&x100));

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x101 = 14097769572LLU;
	int32_t x103 = -517549226;

	t22 = ((x101/x102)*(x103&x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = -1;
	volatile uint16_t x106 = 30U;
	static uint8_t x107 = UINT8_MAX;
	static int32_t t23 = 113;

	t23 = ((x105/x106)*(x107&x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x112 = 9;
	int64_t t24 = -1565LL;

	t24 = ((x109/x110)*(x111&x112));

	if (t24 != 9LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	int64_t x114 = INT64_MIN;
	int8_t x115 = 22;
	int16_t x116 = INT16_MIN;
	static volatile int64_t t25 = -91LL;

	t25 = ((x113/x114)*(x115&x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 53;
	int16_t x119 = -61;
	int16_t x120 = INT16_MAX;
	int32_t t26 = -4106;

	t26 = ((x117/x118)*(x119&x120));

	if (t26 != -1733471) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x125 = 2901256745118096LLU;
	int64_t x126 = INT64_MAX;
	static int8_t x127 = INT8_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	uint64_t t27 = 110227471531533LLU;

	t27 = ((x125/x126)*(x127&x128));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x130 = UINT32_MAX;
	static volatile uint8_t x131 = 13U;

	t28 = ((x129/x130)*(x131&x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = UINT64_MAX;
	uint64_t x135 = 1046432000328918276LLU;
	uint64_t x136 = 888337808482200624LLU;
	volatile uint64_t t29 = 2666122496398794LLU;

	t29 = ((x133/x134)*(x135&x136));

	if (t29 != 865817046231835648LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x138 = -1LL;
	int16_t x139 = -1;
	volatile int64_t t30 = -519877641060015LL;

	t30 = ((x137/x138)*(x139&x140));

	if (t30 != -7161817656LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 1791LLU;
	int32_t x142 = -82;
	volatile int32_t x143 = INT32_MIN;
	static int64_t x144 = -1LL;
	volatile uint64_t t31 = 3906277LLU;

	t31 = ((x141/x142)*(x143&x144));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MAX;
	int16_t x150 = -193;
	int8_t x151 = 0;
	int64_t x152 = -64LL;
	int64_t t32 = -19203721506LL;

	t32 = ((x149/x150)*(x151&x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x153 = 97787972U;
	static int64_t x154 = INT64_MAX;
	int64_t x155 = -1LL;

	t33 = ((x153/x154)*(x155&x156));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x157 = INT8_MIN;
	uint8_t x158 = 30U;
	uint32_t x159 = UINT32_MAX;
	uint64_t t34 = 8525885886692314LLU;

	t34 = ((x157/x158)*(x159&x160));

	if (t34 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 77191LLU;
	static int8_t x162 = 3;
	uint64_t t35 = 4187786LLU;

	t35 = ((x161/x162)*(x163&x164));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x165 = 6376;
	uint64_t x166 = UINT64_MAX;
	int8_t x168 = -1;
	volatile uint64_t t36 = 1200476779293LLU;

	t36 = ((x165/x166)*(x167&x168));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x169 = INT8_MIN;
	int64_t x170 = 398LL;
	volatile uint32_t x172 = 58U;

	t37 = ((x169/x170)*(x171&x172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x173 = INT64_MAX;
	static int16_t x174 = -1;
	static int64_t x175 = INT64_MIN;
	uint32_t x176 = 100U;
	volatile int64_t t38 = 5358LL;

	t38 = ((x173/x174)*(x175&x176));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x186 = 3U;
	static int32_t x187 = INT32_MIN;
	int8_t x188 = 1;
	int32_t t39 = 8;

	t39 = ((x185/x186)*(x187&x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x190 = 7395151U;
	uint64_t x192 = UINT64_MAX;
	uint64_t t40 = 221769321971976181LLU;

	t40 = ((x189/x190)*(x191&x192));

	if (t40 != 2491081031100LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x197 = 3U;
	volatile uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	static uint16_t x200 = 3100U;
	volatile int32_t t41 = -848853;

	t41 = ((x197/x198)*(x199&x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x201 = 8U;
	static int64_t x202 = 194421085033366LL;
	volatile uint8_t x204 = 1U;

	t42 = ((x201/x202)*(x203&x204));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MAX;
	uint32_t x206 = UINT32_MAX;
	volatile uint32_t x207 = 3293U;
	int16_t x208 = INT16_MIN;

	t43 = ((x205/x206)*(x207&x208));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = -1;
	int16_t x210 = -1;
	static int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t44 = -365;

	t44 = ((x209/x210)*(x211&x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = 0;
	int64_t x214 = INT64_MIN;
	static uint16_t x216 = 12U;
	static int64_t t45 = -30384932678LL;

	t45 = ((x213/x214)*(x215&x216));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x217 = -1;
	volatile uint64_t x220 = 2149597016533152LLU;
	uint64_t t46 = 645927850LLU;

	t46 = ((x217/x218)*(x219&x220));

	if (t46 != 32243955247997280LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = 0;
	static uint64_t x222 = 99543929042LLU;
	int64_t x224 = 4013615431998906604LL;
	volatile uint64_t t47 = 16648512132LLU;

	t47 = ((x221/x222)*(x223&x224));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x225 = UINT64_MAX;
	static int32_t x226 = 220358;
	int16_t x227 = INT16_MAX;

	t48 = ((x225/x226)*(x227&x228));

	if (t48 != 2732379702873849600LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = INT64_MIN;
	volatile int16_t x231 = -207;
	uint64_t x232 = 3264LLU;
	volatile uint64_t t49 = 177206513773LLU;

	t49 = ((x229/x230)*(x231&x232));

	if (t49 != 864691128455135232LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x243 = -29932369LL;
	uint32_t x244 = 6226453U;

	t50 = ((x241/x242)*(x243&x244));

	if (t50 != -31653993LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = 2;
	int8_t x246 = -1;
	int32_t x247 = -2848258;
	uint64_t x248 = 12726972LLU;

	t51 = ((x245/x246)*(x247&x248));

	if (t51 != 18446744073684385416LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x250 = -1;
	int16_t x252 = -103;

	t52 = ((x249/x250)*(x251&x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x253 = -1;
	int8_t x255 = -11;
	int32_t x256 = INT32_MAX;
	static int32_t t53 = 314;

	t53 = ((x253/x254)*(x255&x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = 149126435LL;
	static uint16_t x259 = 3U;
	uint32_t x260 = UINT32_MAX;
	volatile int64_t t54 = 16628061LL;

	t54 = ((x257/x258)*(x259&x260));

	if (t54 != -185548029162LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = 34;
	uint8_t x262 = 25U;
	int16_t x263 = -3833;
	int16_t x264 = 15562;
	volatile int32_t t55 = 3797;

	t55 = ((x261/x262)*(x263&x264));

	if (t55 != 12290) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x266 = 25102334702684052LL;
	static int64_t x267 = -51534303712749901LL;
	uint32_t x268 = 230934U;
	volatile int64_t t56 = -114045LL;

	t56 = ((x265/x266)*(x267&x268));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x269 = INT8_MIN;
	int32_t x271 = 1878733;
	static volatile int64_t x272 = INT64_MIN;
	int64_t t57 = -7658LL;

	t57 = ((x269/x270)*(x271&x272));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x273 = INT16_MAX;
	volatile uint64_t x274 = UINT64_MAX;
	uint64_t t58 = 668731156185LLU;

	t58 = ((x273/x274)*(x275&x276));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x277 = 57;
	int8_t x278 = INT8_MIN;
	static int32_t x279 = INT32_MAX;
	int32_t x280 = INT32_MAX;
	volatile int32_t t59 = 23;

	t59 = ((x277/x278)*(x279&x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x281 = 1712U;
	int32_t x282 = 8319870;
	int64_t t60 = -943702834250073LL;

	t60 = ((x281/x282)*(x283&x284));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x286 = 12U;
	static uint16_t x288 = UINT16_MAX;
	int64_t t61 = -85LL;

	t61 = ((x285/x286)*(x287&x288));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x289 = -1;
	volatile uint8_t x290 = 1U;
	static volatile uint64_t x291 = UINT64_MAX;
	static int32_t x292 = 220;

	t62 = ((x289/x290)*(x291&x292));

	if (t62 != 18446744073709551396LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x297 = 64924U;
	int16_t x298 = -10410;
	volatile uint64_t x299 = 7061427442375875LLU;
	volatile int16_t x300 = INT16_MAX;
	uint64_t t63 = 4029LLU;

	t63 = ((x297/x298)*(x299&x300));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = INT32_MAX;
	int8_t x303 = INT8_MAX;
	volatile int32_t t64 = -115;

	t64 = ((x301/x302)*(x303&x304));

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = -1;
	static uint64_t x308 = UINT64_MAX;
	static volatile uint64_t t65 = 132051112364993LLU;

	t65 = ((x305/x306)*(x307&x308));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x309 = 1236655U;
	static int32_t x312 = INT32_MAX;
	int64_t t66 = 694106LL;

	t66 = ((x309/x310)*(x311&x312));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = -1;
	int8_t x314 = 63;
	static int32_t x315 = -1;
	int64_t t67 = 60833353LL;

	t67 = ((x313/x314)*(x315&x316));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = 311379LL;
	int64_t x320 = INT64_MIN;
	int64_t t68 = 4459249397768195LL;

	t68 = ((x317/x318)*(x319&x320));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = 1U;
	int64_t x322 = INT64_MAX;
	int64_t x323 = 12312LL;
	volatile int8_t x324 = INT8_MAX;

	t69 = ((x321/x322)*(x323&x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x330 = -5;
	int32_t x331 = INT32_MAX;
	volatile uint64_t x332 = UINT64_MAX;
	static volatile uint64_t t70 = 17184279LLU;

	t70 = ((x329/x330)*(x331&x332));

	if (t70 != 18446744020022460441LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x336 = UINT8_MAX;
	volatile int32_t t71 = 120533;

	t71 = ((x333/x334)*(x335&x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x337 = 109U;
	static int16_t x339 = 255;
	volatile int64_t t72 = -613853512309LL;

	t72 = ((x337/x338)*(x339&x340));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x345 = INT8_MAX;
	int32_t x346 = 51232;
	int64_t x347 = -1LL;
	static int8_t x348 = INT8_MIN;
	volatile int64_t t73 = 176280651151LL;

	t73 = ((x345/x346)*(x347&x348));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x350 = UINT16_MAX;
	int8_t x351 = 7;
	int32_t x352 = -645348;

	t74 = ((x349/x350)*(x351&x352));

	if (t74 != 255938724317480LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = -1LL;
	int64_t x354 = INT64_MIN;
	uint16_t x355 = 13299U;
	static int32_t x356 = -1;

	t75 = ((x353/x354)*(x355&x356));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x357 = UINT32_MAX;
	static uint64_t x358 = 38666LLU;
	uint8_t x359 = 119U;
	uint8_t x360 = UINT8_MAX;
	volatile uint64_t t76 = 4285LLU;

	t76 = ((x357/x358)*(x359&x360));

	if (t76 != 13218282LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = INT64_MIN;
	volatile int16_t x362 = INT16_MIN;
	uint32_t x364 = 7542211U;

	t77 = ((x361/x362)*(x363&x364));

	if (t77 != 1568097095255064576LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	volatile uint8_t x367 = UINT8_MAX;
	volatile uint32_t x368 = 41796U;
	int64_t t78 = -237158580LL;

	t78 = ((x365/x366)*(x367&x368));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = UINT16_MAX;
	static volatile uint8_t x372 = UINT8_MAX;

	t79 = ((x369/x370)*(x371&x372));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = 52U;
	static uint8_t x374 = 5U;
	static volatile int16_t x375 = 6;
	int64_t x376 = INT64_MIN;
	int64_t t80 = 340323LL;

	t80 = ((x373/x374)*(x375&x376));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x377 = 138U;
	static uint16_t x380 = 1099U;
	static volatile int32_t t81 = -12080051;

	t81 = ((x377/x378)*(x379&x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x381 = 389891013222662LLU;
	uint32_t x382 = UINT32_MAX;
	uint16_t x384 = 3U;

	t82 = ((x381/x382)*(x383&x384));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x386 = INT32_MIN;
	static int32_t x387 = -1;
	volatile int64_t t83 = -188066632525LL;

	t83 = ((x385/x386)*(x387&x388));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x389 = UINT8_MAX;
	uint64_t x390 = 351543542274231LLU;
	static int8_t x391 = 0;
	int16_t x392 = INT16_MAX;
	static volatile uint64_t t84 = 237880453104691LLU;

	t84 = ((x389/x390)*(x391&x392));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = 379U;
	int64_t x395 = 2009164LL;
	volatile uint64_t x396 = 6349011282924LLU;
	volatile uint64_t t85 = 104659LLU;

	t85 = ((x393/x394)*(x395&x396));

	if (t85 != 9605880LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x397 = 0U;
	volatile int32_t x398 = INT32_MAX;
	volatile int8_t x399 = 1;

	t86 = ((x397/x398)*(x399&x400));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = -909630900;
	int64_t x403 = -1090365LL;
	uint8_t x404 = UINT8_MAX;
	static int64_t t87 = 48342418127LL;

	t87 = ((x401/x402)*(x403&x404));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = -21;
	static uint64_t x406 = 1353767646933296LLU;
	int16_t x408 = -3367;
	uint64_t t88 = 7239842088LLU;

	t88 = ((x405/x406)*(x407&x408));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x414 = INT64_MIN;
	int16_t x416 = -58;
	int64_t t89 = -986LL;

	t89 = ((x413/x414)*(x415&x416));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x417 = INT32_MIN;
	int16_t x418 = INT16_MIN;
	uint32_t x419 = 1076794794U;
	volatile uint32_t x420 = UINT32_MAX;
	volatile uint32_t t90 = 245856U;

	t90 = ((x417/x418)*(x419&x420));

	if (t90 != 2510946304U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x421 = INT16_MAX;
	int64_t x422 = -149LL;
	int16_t x423 = INT16_MIN;
	volatile int16_t x424 = INT16_MAX;
	volatile int64_t t91 = 137776LL;

	t91 = ((x421/x422)*(x423&x424));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x426 = INT64_MIN;
	static volatile int16_t x427 = 60;
	uint16_t x428 = 1U;
	volatile int64_t t92 = -10837282LL;

	t92 = ((x425/x426)*(x427&x428));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = UINT32_MAX;
	uint16_t x430 = 1U;
	int16_t x432 = INT16_MIN;
	static volatile uint64_t t93 = 7786LLU;

	t93 = ((x429/x430)*(x431&x432));

	if (t93 != 18446603336221229056LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x433 = 4U;
	uint8_t x434 = UINT8_MAX;
	uint16_t x435 = 6524U;
	volatile int32_t x436 = -1;
	uint32_t t94 = 438U;

	t94 = ((x433/x434)*(x435&x436));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = 97052013LL;
	int8_t x438 = INT8_MIN;
	uint64_t x439 = 716344357LLU;
	uint64_t t95 = 6752778791495LLU;

	t95 = ((x437/x438)*(x439&x440));

	if (t95 != 18446200928523875790LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x441 = 43;
	static int8_t x444 = INT8_MIN;
	volatile int64_t t96 = 26363LL;

	t96 = ((x441/x442)*(x443&x444));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x446 = 6458288LLU;
	static int64_t x447 = INT64_MIN;
	static uint32_t x448 = 0U;
	volatile uint64_t t97 = 16449471783316LLU;

	t97 = ((x445/x446)*(x447&x448));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x449 = 61182U;
	int32_t x450 = -1556426;
	uint64_t x451 = 14LLU;
	static int16_t x452 = INT16_MIN;
	volatile uint64_t t98 = 65796135797LLU;

	t98 = ((x449/x450)*(x451&x452));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x454 = INT16_MIN;
	int8_t x455 = -55;
	static int32_t x456 = 7711;
	static int32_t t99 = 191430;

	t99 = ((x453/x454)*(x455&x456));

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

