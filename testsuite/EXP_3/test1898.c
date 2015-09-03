#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 176785U;
uint64_t t1 = 29838087277LLU;
int64_t x18 = -1LL;
int64_t t2 = 384078LL;
int16_t x32 = -4121;
int64_t t4 = -146414376449776053LL;
uint64_t x36 = 35406848154LLU;
volatile int32_t x49 = -13176161;
static volatile uint64_t x51 = UINT64_MAX;
static int16_t x57 = 807;
int8_t x59 = -1;
int32_t x61 = INT32_MIN;
static volatile int16_t x65 = 46;
static volatile int8_t x71 = -1;
volatile uint32_t x73 = 225080U;
volatile uint64_t x75 = 20105719374066985LLU;
volatile uint64_t x76 = UINT64_MAX;
uint8_t x77 = UINT8_MAX;
int8_t x81 = 3;
static int64_t x83 = 1975456161697280448LL;
static int32_t x95 = INT32_MIN;
static uint16_t x100 = UINT16_MAX;
volatile int32_t t18 = 2543;
int8_t x105 = 1;
volatile uint16_t x114 = 2U;
static int16_t x119 = INT16_MAX;
uint32_t t21 = 47U;
volatile uint32_t x121 = 2U;
int8_t x124 = 1;
int64_t x128 = -9070LL;
volatile int64_t t23 = -9119LL;
static uint16_t x130 = UINT16_MAX;
int32_t x138 = -115;
int64_t x147 = INT64_MIN;
volatile int64_t x149 = INT64_MIN;
static int8_t x151 = -42;
volatile int8_t x158 = 8;
static volatile int32_t x160 = INT32_MIN;
volatile uint32_t t29 = 429695U;
uint16_t x186 = 853U;
static int8_t x190 = -1;
uint64_t x195 = 3951646851719216LLU;
int64_t x196 = -169LL;
volatile uint8_t x197 = UINT8_MAX;
volatile int64_t t36 = -2965LL;
volatile int16_t x217 = INT16_MIN;
static uint32_t x222 = 0U;
uint32_t x224 = 483415525U;
volatile uint32_t t41 = 55U;
int16_t x231 = INT16_MIN;
int32_t x241 = INT32_MAX;
uint16_t x254 = UINT16_MAX;
static volatile int8_t x260 = INT8_MIN;
static volatile int64_t t47 = 3130259117865747123LL;
static uint64_t x267 = UINT64_MAX;
int8_t x268 = 1;
int64_t t50 = 4306501646606121938LL;
int16_t x273 = INT16_MAX;
volatile int16_t x279 = INT16_MIN;
int32_t x281 = -4;
int32_t x283 = INT32_MIN;
static uint32_t x289 = 3U;
volatile uint8_t x290 = UINT8_MAX;
volatile uint32_t t55 = 266238U;
int32_t t57 = 251;
int32_t x303 = -18033620;
static int64_t x312 = 19667LL;
uint64_t x314 = 185974118LLU;
volatile uint16_t x323 = 9421U;
uint32_t x349 = UINT32_MAX;
int16_t x380 = INT16_MIN;
volatile int8_t x381 = 22;
int64_t x384 = 347764962388528953LL;
int64_t t73 = 741553355825LL;
static uint64_t x386 = UINT64_MAX;
uint64_t t74 = 280511697497144LLU;
uint16_t x395 = UINT16_MAX;
static int64_t x399 = INT64_MIN;
static int8_t x406 = 0;
uint16_t x408 = 3392U;
int16_t x417 = 191;
uint16_t x421 = 7U;
volatile uint32_t t85 = 25433U;
int16_t x438 = INT16_MAX;
volatile int32_t t87 = 1;
int8_t x443 = 0;
int16_t x444 = INT16_MIN;
static int8_t x450 = -7;
static int64_t x456 = INT64_MAX;
int16_t x470 = -1;
volatile int32_t x475 = 52;
int32_t x476 = 434;
volatile uint64_t t95 = 64490999350488LLU;
int16_t x482 = INT16_MIN;
static uint32_t x483 = UINT32_MAX;
int64_t t96 = -3181787863785539LL;
int8_t x487 = 0;
volatile int64_t x492 = -15170797985414877LL;
volatile int16_t x495 = 684;


void f0(void) {
	static volatile int64_t x1 = 14744298110350LL;
	int8_t x2 = INT8_MIN;
	volatile int64_t x3 = INT64_MAX;
	volatile int64_t t0 = -263791631425408LL;

	t0 = ((x1*x2)^(x3|x4));

	if (t0 != -9221484766696651009LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = 575625131;
	static uint64_t x6 = UINT64_MAX;
	volatile int16_t x7 = -1;
	int8_t x8 = -1;

	t1 = ((x5*x6)^(x7|x8));

	if (t1 != 575625130LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	int8_t x19 = -1;
	volatile int8_t x20 = INT8_MIN;

	t2 = ((x17*x18)^(x19|x20));

	if (t2 != -32769LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -3784271303684LL;
	uint8_t x22 = 24U;
	int64_t x23 = -1LL;
	int16_t x24 = INT16_MIN;
	volatile int64_t t3 = -55058118LL;

	t3 = ((x21*x22)^(x23|x24));

	if (t3 != 90822511288415LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = -1;
	int64_t x30 = 3252LL;
	int8_t x31 = INT8_MIN;

	t4 = ((x29*x30)^(x31|x32));

	if (t4 != 3243LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x33 = UINT64_MAX;
	volatile int16_t x34 = INT16_MAX;
	int32_t x35 = -1;
	volatile uint64_t t5 = 27623509249LLU;

	t5 = ((x33*x34)^(x35|x36));

	if (t5 != 32766LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 14LL;
	static volatile uint32_t x38 = 37440U;
	uint64_t x39 = 39LLU;
	uint16_t x40 = 3105U;
	uint64_t t6 = 211060703LLU;

	t6 = ((x37*x38)^(x39|x40));

	if (t6 != 521127LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x50 = -1;
	uint8_t x52 = UINT8_MAX;
	uint64_t t7 = 99092485923258LLU;

	t7 = ((x49*x50)^(x51|x52));

	if (t7 != 18446744073696375454LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x58 = INT16_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t8 = 33;

	t8 = ((x57*x58)^(x59|x60));

	if (t8 != 26443775) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x62 = -23275889LL;
	volatile uint64_t x63 = 174LLU;
	volatile int8_t x64 = INT8_MIN;
	uint64_t t9 = 87135737440073LLU;

	t9 = ((x61*x62)^(x63|x64));

	if (t9 != 18396759482689388462LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x66 = -1;
	int16_t x67 = INT16_MIN;
	static volatile uint8_t x68 = 1U;
	volatile int32_t t10 = -68296753;

	t10 = ((x65*x66)^(x67|x68));

	if (t10 != 32723) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x69 = 255531461LLU;
	volatile int32_t x70 = -1;
	static uint64_t x72 = 44191348198456LLU;
	volatile uint64_t t11 = 466LLU;

	t11 = ((x69*x70)^(x71|x72));

	if (t11 != 255531460LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x74 = -1883254;
	static uint64_t t12 = 254LLU;

	t12 = ((x73*x74)^(x75|x76));

	if (t12 != 18446744072390599631LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x78 = UINT8_MAX;
	static uint32_t x79 = 548U;
	int64_t x80 = INT64_MAX;
	volatile int64_t t13 = -4865820LL;

	t13 = ((x77*x78)^(x79|x80));

	if (t13 != 9223372036854710782LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x82 = UINT64_MAX;
	volatile int8_t x84 = -1;
	uint64_t t14 = 309LLU;

	t14 = ((x81*x82)^(x83|x84));

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x85 = 1;
	int64_t x86 = INT64_MAX;
	static uint8_t x87 = 22U;
	uint16_t x88 = 93U;
	static int64_t t15 = -8449990563LL;

	t15 = ((x85*x86)^(x87|x88));

	if (t15 != 9223372036854775712LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x89 = 3U;
	volatile int64_t x90 = 3LL;
	int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MAX;
	volatile int64_t t16 = 8842838970169623LL;

	t16 = ((x89*x90)^(x91|x92));

	if (t16 != -10LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x93 = UINT64_MAX;
	volatile int64_t x94 = INT64_MIN;
	volatile int32_t x96 = 249555;
	volatile uint64_t t17 = 966448819928LLU;

	t17 = ((x93*x94)^(x95|x96));

	if (t17 != 9223372034707541715LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MIN;
	static volatile int16_t x98 = INT16_MAX;
	int8_t x99 = -1;

	t18 = ((x97*x98)^(x99|x100));

	if (t18 != 4194175) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	static int16_t x108 = -1;
	volatile int32_t t19 = INT32_MAX;

	t19 = ((x105*x106)^(x107|x108));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = 46;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t20 = 17953;

	t20 = ((x113*x114)^(x115|x116));

	if (t20 != -32676) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x117 = INT8_MIN;
	static uint8_t x118 = UINT8_MAX;
	volatile uint32_t x120 = UINT32_MAX;

	t21 = ((x117*x118)^(x119|x120));

	if (t21 != 32639U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x122 = INT16_MAX;
	volatile int8_t x123 = -1;
	volatile uint32_t t22 = 419279U;

	t22 = ((x121*x122)^(x123|x124));

	if (t22 != 4294901761U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x125 = INT8_MIN;
	int16_t x126 = -10;
	static int64_t x127 = INT64_MIN;

	t23 = ((x125*x126)^(x127|x128));

	if (t23 != -9838LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = UINT32_MAX;
	uint16_t x131 = 730U;
	static int8_t x132 = -1;
	uint32_t t24 = 156984U;

	t24 = ((x129*x130)^(x131|x132));

	if (t24 != 65534U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x139 = INT64_MAX;
	int16_t x140 = INT16_MIN;
	volatile int64_t t25 = -3693298LL;

	t25 = ((x137*x138)^(x139|x140));

	if (t25 != -116LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = 0;
	static uint16_t x142 = UINT16_MAX;
	int64_t x143 = 15464104893LL;
	int8_t x144 = 0;
	volatile int64_t t26 = -52067612633692238LL;

	t26 = ((x141*x142)^(x143|x144));

	if (t26 != 15464104893LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = -1;
	int64_t x146 = INT64_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint64_t t27 = 21204LLU;

	t27 = ((x145*x146)^(x147|x148));

	if (t27 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x150 = 0U;
	static int16_t x152 = INT16_MIN;
	volatile int64_t t28 = 105800940183222650LL;

	t28 = ((x149*x150)^(x151|x152));

	if (t28 != -42LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x157 = 34U;
	static uint32_t x159 = 116U;

	t29 = ((x157*x158)^(x159|x160));

	if (t29 != 2147484004U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x170 = INT8_MAX;
	volatile uint8_t x171 = UINT8_MAX;
	int16_t x172 = INT16_MAX;
	static volatile uint64_t t30 = 15368042321578137LLU;

	t30 = ((x169*x170)^(x171|x172));

	if (t30 != 18446744073709518974LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x177 = 149LL;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = INT8_MAX;
	static int8_t x180 = -1;
	volatile int64_t t31 = -1LL;

	t31 = ((x177*x178)^(x179|x180));

	if (t31 != -9764716LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x185 = -1LL;
	int64_t x187 = -3297889254959LL;
	static int32_t x188 = INT32_MIN;
	int64_t t32 = -3458LL;

	t32 = ((x185*x186)^(x187|x188));

	if (t32 != 1501855098LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x189 = UINT16_MAX;
	static int32_t x191 = -1;
	int16_t x192 = -10;
	volatile int32_t t33 = 3869;

	t33 = ((x189*x190)^(x191|x192));

	if (t33 != 65534) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x193 = 49819810161LLU;
	volatile int8_t x194 = INT8_MAX;
	uint64_t t34 = 5621843717LLU;

	t34 = ((x193*x194)^(x195|x196));

	if (t34 != 18446737746593661048LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x198 = 58U;
	int16_t x199 = -1;
	volatile int64_t x200 = INT64_MIN;
	int64_t t35 = -2LL;

	t35 = ((x197*x198)^(x199|x200));

	if (t35 != -14791LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x201 = INT8_MIN;
	volatile uint8_t x202 = 4U;
	volatile uint8_t x203 = UINT8_MAX;
	volatile int64_t x204 = INT64_MIN;

	t36 = ((x201*x202)^(x203|x204));

	if (t36 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x205 = 2U;
	volatile uint32_t x206 = UINT32_MAX;
	int16_t x207 = -1;
	static int64_t x208 = INT64_MIN;
	int64_t t37 = -184834645914LL;

	t37 = ((x205*x206)^(x207|x208));

	if (t37 != -4294967295LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x213 = INT32_MIN;
	int64_t x214 = -1LL;
	uint16_t x215 = UINT16_MAX;
	uint32_t x216 = UINT32_MAX;
	int64_t t38 = -1578806812582LL;

	t38 = ((x213*x214)^(x215|x216));

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x218 = 1;
	int32_t x219 = INT32_MIN;
	static volatile uint64_t x220 = UINT64_MAX;
	static volatile uint64_t t39 = 3975433909921LLU;

	t39 = ((x217*x218)^(x219|x220));

	if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = 1;
	static int64_t x223 = -183493219532527514LL;
	int64_t t40 = 0LL;

	t40 = ((x221*x222)^(x223|x224));

	if (t40 != -183493219385704985LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = 1;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = 834037U;

	t41 = ((x225*x226)^(x227|x228));

	if (t41 != 117U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = -1;
	int8_t x230 = INT8_MIN;
	uint8_t x232 = 23U;
	volatile int32_t t42 = -503;

	t42 = ((x229*x230)^(x231|x232));

	if (t42 != -32617) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = 1U;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t43 = 828995402LLU;

	t43 = ((x233*x234)^(x235|x236));

	if (t43 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x237 = -5;
	int8_t x238 = -1;
	int16_t x239 = INT16_MIN;
	int16_t x240 = 3417;
	static volatile int32_t t44 = 142;

	t44 = ((x237*x238)^(x239|x240));

	if (t44 != -29348) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x242 = -1;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 291027U;
	uint32_t t45 = 2216U;

	t45 = ((x241*x242)^(x243|x244));

	if (t45 != 2147483602U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	int64_t t46 = -13680583396LL;

	t46 = ((x253*x254)^(x255|x256));

	if (t46 != -2130772223LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x257 = -449LL;
	static int8_t x258 = -1;
	int32_t x259 = 193091566;

	t47 = ((x257*x258)^(x259|x260));

	if (t47 != -465LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = 16U;
	int32_t x262 = -1;
	volatile int32_t x263 = INT32_MIN;
	static uint8_t x264 = UINT8_MAX;
	int32_t t48 = 37913824;

	t48 = ((x261*x262)^(x263|x264));

	if (t48 != 2147483407) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x265 = 0;
	int16_t x266 = INT16_MIN;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x265*x266)^(x267|x268));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x269 = 12145452216840LL;
	static int8_t x270 = 1;
	int64_t x271 = -1LL;
	int32_t x272 = -1;

	t50 = ((x269*x270)^(x271|x272));

	if (t50 != -12145452216841LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x274 = 1791352LLU;
	int8_t x275 = INT8_MIN;
	static volatile uint8_t x276 = 35U;
	volatile uint64_t t51 = 565434891225538LLU;

	t51 = ((x273*x274)^(x275|x276));

	if (t51 != 18446744015012320555LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x277 = 565269771U;
	static int8_t x278 = INT8_MAX;
	volatile uint8_t x280 = UINT8_MAX;
	volatile uint32_t t52 = 843723U;

	t52 = ((x277*x278)^(x279|x280));

	if (t52 != 1225175178U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x282 = 1391LLU;
	int16_t x284 = 95;
	uint64_t t53 = 432007138LLU;

	t53 = ((x281*x282)^(x283|x284));

	if (t53 != 2147478043LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x285 = 43U;
	static int64_t x286 = -1LL;
	int32_t x287 = -21695364;
	int16_t x288 = -6589;
	int64_t t54 = -1LL;

	t54 = ((x285*x286)^(x287|x288));

	if (t54 != 2474LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x291 = 56;
	int32_t x292 = INT32_MIN;

	t55 = ((x289*x290)^(x291|x292));

	if (t55 != 2147484357U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x293 = UINT16_MAX;
	static volatile int64_t x294 = -1LL;
	static int64_t x295 = INT64_MAX;
	static int16_t x296 = -1;
	int64_t t56 = 289028072LL;

	t56 = ((x293*x294)^(x295|x296));

	if (t56 != 65534LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x297 = INT32_MAX;
	volatile int8_t x298 = 1;
	int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MAX;

	t57 = ((x297*x298)^(x299|x300));

	if (t57 != 2147450880) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x301 = -1;
	static int16_t x302 = -413;
	uint16_t x304 = 610U;
	volatile int32_t t58 = 13884;

	t58 = ((x301*x302)^(x303|x304));

	if (t58 != -18032653) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x309 = INT8_MAX;
	volatile int8_t x310 = 2;
	int32_t x311 = -3;
	static int64_t t59 = -33LL;

	t59 = ((x309*x310)^(x311|x312));

	if (t59 != -255LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x313 = 7U;
	volatile int8_t x315 = INT8_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	static volatile uint64_t t60 = 991261447LLU;

	t60 = ((x313*x314)^(x315|x316));

	if (t60 != 18446744072407732789LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x321 = -5;
	static uint64_t x322 = 72LLU;
	int16_t x324 = -619;
	volatile uint64_t t61 = 17813305950460LLU;

	t61 = ((x321*x322)^(x323|x324));

	if (t61 != 837LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x325 = INT8_MAX;
	uint32_t x326 = 2U;
	int64_t x327 = 3LL;
	uint64_t x328 = 54461502030LLU;
	uint64_t t62 = 57846658645184133LLU;

	t62 = ((x325*x326)^(x327|x328));

	if (t62 != 54461502129LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x329 = 10;
	volatile uint8_t x330 = 13U;
	uint16_t x331 = 9U;
	uint64_t x332 = 58138071892030232LLU;
	uint64_t t63 = 310LLU;

	t63 = ((x329*x330)^(x331|x332));

	if (t63 != 58138071892030363LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x333 = 14874253401167LLU;
	int32_t x334 = INT32_MAX;
	int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = 439786354U;
	volatile uint64_t t64 = 23161506602115768LLU;

	t64 = ((x333*x334)^(x335|x336));

	if (t64 != 10901948750592678979LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x345 = 13183U;
	static uint64_t x346 = 3218LLU;
	static int16_t x347 = 13;
	int64_t x348 = -1963056999493115LL;
	uint64_t t65 = 5721152372LLU;

	t65 = ((x345*x346)^(x347|x348));

	if (t65 != 18444781016734777443LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x350 = -1;
	int32_t x351 = 1;
	volatile int8_t x352 = INT8_MAX;
	volatile uint32_t t66 = 2U;

	t66 = ((x349*x350)^(x351|x352));

	if (t66 != 126U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x353 = -2;
	int64_t x354 = -6775968LL;
	int32_t x355 = 227927765;
	int8_t x356 = 3;
	int64_t t67 = -16957794371542LL;

	t67 = ((x353*x354)^(x355|x356));

	if (t67 != 224079767LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x357 = INT64_MIN;
	static uint32_t x358 = 0U;
	uint16_t x359 = 326U;
	static volatile int64_t x360 = INT64_MIN;
	volatile int64_t t68 = -1383344808223LL;

	t68 = ((x357*x358)^(x359|x360));

	if (t68 != -9223372036854775482LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = 1;
	int32_t x363 = 935;
	static int16_t x364 = 99;
	int64_t t69 = 6LL;

	t69 = ((x361*x362)^(x363|x364));

	if (t69 != -9223372036854774809LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x369 = INT16_MAX;
	uint8_t x370 = 1U;
	static uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MAX;
	volatile int32_t t70 = 361;

	t70 = ((x369*x370)^(x371|x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x373 = 31;
	volatile int8_t x374 = -34;
	uint8_t x375 = UINT8_MAX;
	static int8_t x376 = 0;
	static volatile int32_t t71 = -22332275;

	t71 = ((x373*x374)^(x375|x376));

	if (t71 != -1251) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x377 = -1;
	uint8_t x378 = UINT8_MAX;
	static volatile int8_t x379 = 0;
	int32_t t72 = 73476160;

	t72 = ((x377*x378)^(x379|x380));

	if (t72 != 32513) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x382 = 18U;
	volatile uint16_t x383 = 0U;

	t73 = ((x381*x382)^(x383|x384));

	if (t73 != 347764962388528821LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x385 = -1LL;
	static int32_t x387 = -677;
	uint16_t x388 = 15871U;

	t74 = ((x385*x386)^(x387|x388));

	if (t74 != 18446744073709551102LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x389 = INT8_MAX;
	static int8_t x390 = INT8_MAX;
	static volatile int8_t x391 = INT8_MIN;
	int32_t x392 = -1;
	volatile int32_t t75 = 2098064;

	t75 = ((x389*x390)^(x391|x392));

	if (t75 != -16130) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x393 = 86U;
	uint8_t x394 = 0U;
	int8_t x396 = -37;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = ((x393*x394)^(x395|x396));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x397 = INT16_MIN;
	uint32_t x398 = 57U;
	int64_t x400 = 315983943504287834LL;
	volatile int64_t t77 = 58588300592759LL;

	t77 = ((x397*x398)^(x399|x400));

	if (t77 != -8907388097219569574LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x401 = INT8_MAX;
	uint64_t x402 = 635LLU;
	static int32_t x403 = 433182107;
	int32_t x404 = -1;
	uint64_t t78 = 1423LLU;

	t78 = ((x401*x402)^(x403|x404));

	if (t78 != 18446744073709470970LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x405 = -2;
	uint32_t x407 = 1884158U;
	uint32_t t79 = 59U;

	t79 = ((x405*x406)^(x407|x408));

	if (t79 != 1884158U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x409 = 4;
	uint32_t x410 = 13808977U;
	int64_t x411 = 209597279274738LL;
	static int32_t x412 = INT32_MIN;
	volatile int64_t t80 = 49LL;

	t80 = ((x409*x410)^(x411|x412));

	if (t80 != -1473621066LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x413 = 0U;
	int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	static int64_t x416 = INT64_MAX;
	int64_t t81 = 499694895LL;

	t81 = ((x413*x414)^(x415|x416));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x418 = 280841469026245LLU;
	static int32_t x419 = -1;
	static volatile int8_t x420 = 5;
	volatile uint64_t t82 = 86037467LLU;

	t82 = ((x417*x418)^(x419|x420));

	if (t82 != 18393103353125538820LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x422 = 5;
	uint64_t x423 = 1817LLU;
	volatile int32_t x424 = -1;
	volatile uint64_t t83 = 5011214LLU;

	t83 = ((x421*x422)^(x423|x424));

	if (t83 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x425 = 961491U;
	uint64_t x426 = 125076647047902285LLU;
	static int16_t x427 = INT16_MIN;
	int16_t x428 = -1;
	volatile uint64_t t84 = 14789LLU;

	t84 = ((x425*x426)^(x427|x428));

	if (t84 != 12700913851660629384LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x429 = INT8_MAX;
	uint32_t x430 = 123U;
	uint16_t x431 = UINT16_MAX;
	static uint32_t x432 = 995U;

	t85 = ((x429*x430)^(x431|x432));

	if (t85 != 49914U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x433 = 88U;
	int16_t x434 = INT16_MIN;
	static int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MAX;
	static volatile int64_t t86 = -38611838664029LL;

	t86 = ((x433*x434)^(x435|x436));

	if (t86 != 2883583LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x437 = INT16_MIN;
	int8_t x439 = INT8_MAX;
	volatile int32_t x440 = -1;

	t87 = ((x437*x438)^(x439|x440));

	if (t87 != 1073709055) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x441 = UINT64_MAX;
	int64_t x442 = INT64_MIN;
	uint64_t t88 = 6LLU;

	t88 = ((x441*x442)^(x443|x444));

	if (t88 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x449 = -1;
	static int32_t x451 = INT32_MIN;
	volatile int8_t x452 = INT8_MIN;
	static volatile int32_t t89 = -8753555;

	t89 = ((x449*x450)^(x451|x452));

	if (t89 != -121) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x453 = INT16_MIN;
	volatile uint64_t x454 = 2200158824364LLU;
	int8_t x455 = -1;
	uint64_t t90 = 35613877605LLU;

	t90 = ((x453*x454)^(x455|x456));

	if (t90 != 72094804356759551LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x457 = 49U;
	volatile int16_t x458 = 0;
	int16_t x459 = INT16_MAX;
	volatile uint8_t x460 = 6U;
	int32_t t91 = 92169;

	t91 = ((x457*x458)^(x459|x460));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x461 = INT16_MAX;
	int16_t x462 = -5105;
	uint32_t x463 = 4181U;
	uint32_t x464 = 105U;
	uint32_t t92 = 132349575U;

	t92 = ((x461*x462)^(x463|x464));

	if (t92 != 4127687564U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x469 = 2192U;
	int8_t x471 = INT8_MIN;
	int16_t x472 = INT16_MIN;
	volatile uint32_t t93 = 229U;

	t93 = ((x469*x470)^(x471|x472));

	if (t93 != 2288U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x473 = 2746898358132987159LLU;
	int8_t x474 = INT8_MIN;
	static uint64_t t94 = 1540096985LLU;

	t94 = ((x473*x474)^(x475|x476));

	if (t94 != 17331891633168676150LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x477 = 587002205LLU;
	static int32_t x478 = -447004;
	int32_t x479 = INT32_MIN;
	int32_t x480 = INT32_MIN;

	t95 = ((x477*x478)^(x479|x480));

	if (t95 != 262390392901588LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x481 = 121650789075784LL;
	int8_t x484 = -1;

	t96 = ((x481*x482)^(x483|x484));

	if (t96 != -3986253053024796673LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x485 = UINT32_MAX;
	int16_t x486 = INT16_MAX;
	int8_t x488 = INT8_MIN;
	uint32_t t97 = 57842U;

	t97 = ((x485*x486)^(x487|x488));

	if (t97 != 32641U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x489 = -1;
	static int16_t x490 = INT16_MAX;
	int32_t x491 = INT32_MIN;
	int64_t t98 = -368LL;

	t98 = ((x489*x490)^(x491|x492));

	if (t98 != 685850914LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x493 = INT32_MIN;
	static int64_t x494 = -1LL;
	int64_t x496 = -23599440136095794LL;
	static int64_t t99 = -361419413966545LL;

	t99 = ((x493*x494)^(x495|x496));

	if (t99 != -23599437988612114LL) { NG(); } else { ; }
	
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

