#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 1U;
uint64_t x5 = 3575900868955657LLU;
int32_t x8 = INT32_MAX;
uint16_t x22 = 4U;
volatile int32_t t4 = -2150165;
int64_t x25 = 968LL;
static int16_t x28 = INT16_MAX;
volatile int32_t t10 = 1081;
volatile int32_t x63 = -1;
int16_t x66 = 18;
volatile int32_t t12 = 1;
uint8_t x75 = 20U;
static volatile int32_t x79 = -7275455;
static int8_t x80 = 0;
int32_t t15 = 1;
static uint64_t x81 = UINT64_MAX;
int32_t x82 = -1;
int16_t x97 = -1;
uint32_t x115 = 1U;
static int32_t t22 = -1;
int32_t x129 = INT32_MIN;
static uint8_t x145 = 4U;
volatile uint16_t x157 = 2U;
uint64_t x168 = 3155LLU;
static int8_t x171 = 0;
int32_t t32 = -1;
int8_t x173 = INT8_MIN;
uint32_t x174 = 32U;
static volatile uint8_t x180 = UINT8_MAX;
uint16_t x182 = 115U;
int64_t x183 = -1LL;
uint8_t x188 = 2U;
int32_t t36 = 0;
int16_t x192 = INT16_MIN;
volatile int32_t t37 = -29876;
int16_t x194 = 2510;
static int16_t x207 = INT16_MIN;
volatile uint16_t x209 = 1U;
int32_t t41 = -172929;
int8_t x221 = -1;
static int32_t x223 = -600808;
int16_t x224 = INT16_MIN;
volatile int8_t x240 = INT8_MAX;
volatile int64_t x244 = INT64_MIN;
static int8_t x247 = -1;
int32_t x259 = INT32_MAX;
static uint8_t x268 = UINT8_MAX;
volatile int32_t x274 = 55;
static uint64_t x283 = 4935870033808213803LLU;
uint16_t x293 = 157U;
int32_t x295 = INT32_MAX;
int32_t t59 = 208282825;
volatile uint64_t x310 = 1358107274314790362LLU;
volatile int16_t x311 = -1;
volatile int32_t t61 = -115062;
static int8_t x314 = INT8_MIN;
int32_t x332 = INT32_MAX;
int64_t x350 = 71924895433555675LL;
static uint32_t x351 = UINT32_MAX;
int32_t x352 = INT32_MIN;
int64_t x359 = INT64_MIN;
int8_t x361 = INT8_MIN;
static int8_t x362 = 0;
volatile int8_t x363 = -1;
static int32_t t72 = -489842;
uint64_t x366 = 11169588492748784LLU;
int32_t x370 = INT32_MIN;
uint64_t x382 = UINT64_MAX;
static uint16_t x384 = 4U;
int32_t t77 = 26;
uint16_t x389 = UINT16_MAX;
int64_t x396 = 4401LL;
static int32_t x403 = INT32_MAX;
int8_t x412 = 16;
uint32_t x419 = 363U;
static int8_t x423 = INT8_MIN;
int64_t x431 = -155963LL;
int16_t x440 = INT16_MAX;
int32_t x451 = INT32_MIN;
volatile int32_t t91 = -208;
static int16_t x458 = INT16_MIN;
volatile int32_t x464 = -1;
int64_t x465 = -1546LL;
int32_t t94 = -1843;
int8_t x471 = -8;
static uint32_t x472 = 97790940U;
int16_t x481 = INT16_MIN;
static int8_t x483 = -1;
uint32_t x488 = UINT32_MAX;
int32_t t99 = -4982;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	static int64_t x4 = INT64_MIN;
	int32_t t0 = -29772363;

	t0 = ((x1*x2)==(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	uint64_t x7 = 48179750LLU;
	volatile int32_t t1 = -163834;

	t1 = ((x5*x6)==(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 11;
	uint8_t x10 = 0U;
	volatile int16_t x11 = INT16_MAX;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 126;

	t2 = ((x9*x10)==(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint32_t x14 = 204U;
	volatile uint64_t x15 = UINT64_MAX;
	volatile int8_t x16 = 1;
	static volatile int32_t t3 = -2;

	t3 = ((x13*x14)==(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	static int8_t x23 = 15;
	volatile int16_t x24 = INT16_MIN;

	t4 = ((x21*x22)==(x23==x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = UINT32_MAX;
	int64_t x27 = INT64_MIN;
	volatile int32_t t5 = -15253;

	t5 = ((x25*x26)==(x27==x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x37 = INT8_MAX;
	volatile uint32_t x38 = 3498737U;
	volatile int64_t x39 = 33520445417LL;
	int8_t x40 = -2;
	volatile int32_t t6 = -132747648;

	t6 = ((x37*x38)==(x39==x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t7 = 0;

	t7 = ((x41*x42)==(x43==x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 444387020U;
	int16_t x46 = -189;
	static volatile uint32_t x47 = 221U;
	int32_t x48 = -1;
	int32_t t8 = 419649373;

	t8 = ((x45*x46)==(x47==x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 7LLU;
	int16_t x54 = INT16_MAX;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t9 = -2015505;

	t9 = ((x53*x54)==(x55==x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x57 = -1;
	uint64_t x58 = 48757092740461LLU;
	volatile uint32_t x59 = 258580039U;
	int32_t x60 = INT32_MIN;

	t10 = ((x57*x58)==(x59==x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x61 = -2;
	int64_t x62 = -1LL;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t11 = -5859;

	t11 = ((x61*x62)==(x63==x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x65 = 3U;
	volatile uint64_t x67 = UINT64_MAX;
	uint8_t x68 = UINT8_MAX;

	t12 = ((x65*x66)==(x67==x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x70 = 0;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MAX;
	int32_t t13 = 35;

	t13 = ((x69*x70)==(x71==x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = 1U;
	uint32_t x74 = 8U;
	int8_t x76 = 13;
	volatile int32_t t14 = 310372963;

	t14 = ((x73*x74)==(x75==x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	uint64_t x78 = UINT64_MAX;

	t15 = ((x77*x78)==(x79==x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x83 = INT8_MIN;
	static volatile int16_t x84 = INT16_MIN;
	static int32_t t16 = 1760;

	t16 = ((x81*x82)==(x83==x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 4;
	int16_t x86 = INT16_MAX;
	static uint64_t x87 = 0LLU;
	int64_t x88 = INT64_MIN;
	int32_t t17 = 6;

	t17 = ((x85*x86)==(x87==x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x98 = -39353LL;
	volatile int64_t x99 = -1LL;
	volatile uint16_t x100 = 923U;
	volatile int32_t t18 = 35214;

	t18 = ((x97*x98)==(x99==x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x101 = 391U;
	int64_t x102 = 231253958867LL;
	uint64_t x103 = UINT64_MAX;
	static int16_t x104 = INT16_MIN;
	static volatile int32_t t19 = -5;

	t19 = ((x101*x102)==(x103==x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -54;
	uint8_t x106 = 6U;
	static uint64_t x107 = 74164688617LLU;
	volatile uint16_t x108 = 632U;
	int32_t t20 = -26461263;

	t20 = ((x105*x106)==(x107==x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = INT8_MAX;
	int32_t x114 = -8065;
	int64_t x116 = 140LL;
	int32_t t21 = -860349;

	t21 = ((x113*x114)==(x115==x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x117 = -20LL;
	uint8_t x118 = 1U;
	int32_t x119 = -1;
	static uint64_t x120 = 6733206120794199144LLU;

	t22 = ((x117*x118)==(x119==x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = -13928237;
	int8_t x122 = -4;
	static volatile int32_t x123 = 188334017;
	int8_t x124 = INT8_MAX;
	int32_t t23 = 146971670;

	t23 = ((x121*x122)==(x123==x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x130 = 0LL;
	int32_t x131 = -1;
	int64_t x132 = INT64_MAX;
	int32_t t24 = -262075253;

	t24 = ((x129*x130)==(x131==x132));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x137 = 9U;
	volatile int16_t x138 = INT16_MIN;
	uint8_t x139 = UINT8_MAX;
	int8_t x140 = INT8_MAX;
	int32_t t25 = 77655;

	t25 = ((x137*x138)==(x139==x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	uint8_t x142 = 45U;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t26 = 62360653;

	t26 = ((x141*x142)==(x143==x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x146 = 152353953U;
	uint16_t x147 = 1496U;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t27 = 80124023;

	t27 = ((x145*x146)==(x147==x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = 0;
	int64_t x150 = INT64_MAX;
	int16_t x151 = INT16_MAX;
	uint8_t x152 = 0U;
	int32_t t28 = 833820761;

	t28 = ((x149*x150)==(x151==x152));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x153 = 0U;
	static int64_t x154 = 2665485183247LL;
	static int8_t x155 = INT8_MAX;
	static volatile int8_t x156 = 4;
	int32_t t29 = 522438;

	t29 = ((x153*x154)==(x155==x156));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 2446308U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t30 = 94795;

	t30 = ((x157*x158)==(x159==x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x165 = -1;
	uint16_t x166 = 1U;
	static uint8_t x167 = 7U;
	int32_t t31 = 0;

	t31 = ((x165*x166)==(x167==x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MAX;
	int16_t x170 = -1;
	int64_t x172 = INT64_MIN;

	t32 = ((x169*x170)==(x171==x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x175 = 8641;
	int16_t x176 = INT16_MIN;
	int32_t t33 = 0;

	t33 = ((x173*x174)==(x175==x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MIN;
	volatile uint64_t x178 = 15364152LLU;
	uint8_t x179 = 9U;
	int32_t t34 = -3;

	t34 = ((x177*x178)==(x179==x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x181 = UINT32_MAX;
	volatile uint16_t x184 = 2U;
	volatile int32_t t35 = -81;

	t35 = ((x181*x182)==(x183==x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x185 = -2729200938158005LL;
	volatile uint8_t x186 = 82U;
	int16_t x187 = 332;

	t36 = ((x185*x186)==(x187==x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = -1LL;
	uint32_t x190 = 1314023430U;
	static uint8_t x191 = 8U;

	t37 = ((x189*x190)==(x191==x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x193 = -1;
	int64_t x195 = INT64_MAX;
	static int32_t x196 = -1;
	int32_t t38 = 38935206;

	t38 = ((x193*x194)==(x195==x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x201 = INT8_MIN;
	static volatile uint16_t x202 = UINT16_MAX;
	int64_t x203 = INT64_MAX;
	volatile uint8_t x204 = 2U;
	static int32_t t39 = -244867241;

	t39 = ((x201*x202)==(x203==x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x205 = 44941521U;
	uint64_t x206 = 112656245754902475LLU;
	uint8_t x208 = 2U;
	volatile int32_t t40 = 8078;

	t40 = ((x205*x206)==(x207==x208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x210 = -1;
	int16_t x211 = 6;
	int8_t x212 = INT8_MIN;

	t41 = ((x209*x210)==(x211==x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x213 = 410U;
	int64_t x214 = 34969781LL;
	static uint64_t x215 = UINT64_MAX;
	int8_t x216 = 58;
	static volatile int32_t t42 = 34007447;

	t42 = ((x213*x214)==(x215==x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x222 = INT8_MIN;
	static int32_t t43 = 24367;

	t43 = ((x221*x222)==(x223==x224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x225 = UINT64_MAX;
	uint32_t x226 = UINT32_MAX;
	volatile int32_t x227 = INT32_MAX;
	volatile int64_t x228 = -1LL;
	volatile int32_t t44 = -428568;

	t44 = ((x225*x226)==(x227==x228));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = 118654297;
	static uint64_t x230 = 60634469693869851LLU;
	static uint8_t x231 = UINT8_MAX;
	static volatile int32_t x232 = INT32_MIN;
	volatile int32_t t45 = 388507880;

	t45 = ((x229*x230)==(x231==x232));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x237 = INT64_MIN;
	static uint64_t x238 = UINT64_MAX;
	int32_t x239 = INT32_MIN;
	static int32_t t46 = -550030;

	t46 = ((x237*x238)==(x239==x240));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = -80LL;
	int32_t x242 = -1;
	int8_t x243 = -1;
	static int32_t t47 = 215692281;

	t47 = ((x241*x242)==(x243==x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = 20;
	int64_t x248 = -1LL;
	volatile int32_t t48 = 81814;

	t48 = ((x245*x246)==(x247==x248));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x249 = UINT32_MAX;
	int8_t x250 = 1;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = 527817580U;
	int32_t t49 = 40;

	t49 = ((x249*x250)==(x251==x252));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x253 = UINT16_MAX;
	uint8_t x254 = UINT8_MAX;
	static int16_t x255 = 587;
	static uint64_t x256 = 16538534314912901LLU;
	int32_t t50 = 343780657;

	t50 = ((x253*x254)==(x255==x256));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	int32_t x260 = 21;
	int32_t t51 = 2;

	t51 = ((x257*x258)==(x259==x260));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x261 = 22;
	int8_t x262 = -10;
	static volatile int64_t x263 = INT64_MIN;
	uint8_t x264 = 118U;
	static volatile int32_t t52 = -74221;

	t52 = ((x261*x262)==(x263==x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x265 = 1U;
	uint32_t x266 = 1148169U;
	volatile int16_t x267 = INT16_MIN;
	static int32_t t53 = 5197;

	t53 = ((x265*x266)==(x267==x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x273 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 3050U;
	static int32_t t54 = 125221;

	t54 = ((x273*x274)==(x275==x276));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	int64_t x279 = -1LL;
	uint32_t x280 = 1579007U;
	static int32_t t55 = 103954;

	t55 = ((x277*x278)==(x279==x280));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x281 = INT16_MIN;
	volatile uint8_t x282 = UINT8_MAX;
	int16_t x284 = -996;
	static volatile int32_t t56 = -1633449;

	t56 = ((x281*x282)==(x283==x284));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x285 = -1LL;
	int16_t x286 = 4996;
	int16_t x287 = INT16_MIN;
	static int16_t x288 = -1;
	int32_t t57 = -10322;

	t57 = ((x285*x286)==(x287==x288));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x289 = UINT64_MAX;
	static uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = INT8_MIN;
	volatile int16_t x292 = INT16_MAX;
	volatile int32_t t58 = -176;

	t58 = ((x289*x290)==(x291==x292));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x294 = 4U;
	volatile int16_t x296 = -71;

	t59 = ((x293*x294)==(x295==x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x305 = 17156278602389788LL;
	volatile int8_t x306 = 38;
	static int32_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t60 = -129843;

	t60 = ((x305*x306)==(x307==x308));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = -1;
	uint16_t x312 = 1U;

	t61 = ((x309*x310)==(x311==x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x313 = 46U;
	int16_t x315 = -1;
	static int8_t x316 = -1;
	int32_t t62 = -12872292;

	t62 = ((x313*x314)==(x315==x316));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x317 = 8678241410560224LLU;
	volatile int64_t x318 = -1LL;
	int32_t x319 = INT32_MIN;
	uint16_t x320 = 5U;
	int32_t t63 = 3126152;

	t63 = ((x317*x318)==(x319==x320));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x321 = INT64_MIN;
	uint64_t x322 = 122344LLU;
	int8_t x323 = INT8_MIN;
	volatile int16_t x324 = -1;
	volatile int32_t t64 = -11628532;

	t64 = ((x321*x322)==(x323==x324));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x329 = INT16_MIN;
	volatile uint16_t x330 = 182U;
	volatile int8_t x331 = 1;
	int32_t t65 = 159432;

	t65 = ((x329*x330)==(x331==x332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x337 = 8047LL;
	uint64_t x338 = 1LLU;
	static int32_t x339 = -361;
	volatile uint16_t x340 = 2U;
	int32_t t66 = 464;

	t66 = ((x337*x338)==(x339==x340));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = 153470571;
	static volatile uint32_t x342 = 13100U;
	int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t67 = -5474910;

	t67 = ((x341*x342)==(x343==x344));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x345 = 7592061826209897541LLU;
	static volatile int16_t x346 = INT16_MIN;
	int8_t x347 = -26;
	int16_t x348 = -1;
	volatile int32_t t68 = -29759;

	t68 = ((x345*x346)==(x347==x348));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x349 = 25U;
	int32_t t69 = 823;

	t69 = ((x349*x350)==(x351==x352));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x353 = 1U;
	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	volatile int64_t x356 = -3054703LL;
	volatile int32_t t70 = -95016;

	t70 = ((x353*x354)==(x355==x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = 1;
	volatile uint16_t x358 = UINT16_MAX;
	static uint32_t x360 = 541U;
	volatile int32_t t71 = 50802;

	t71 = ((x357*x358)==(x359==x360));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x364 = 33U;

	t72 = ((x361*x362)==(x363==x364));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x365 = 82335177054LLU;
	static uint16_t x367 = 574U;
	uint64_t x368 = UINT64_MAX;
	static int32_t t73 = -3127;

	t73 = ((x365*x366)==(x367==x368));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x369 = 0LLU;
	static uint32_t x371 = UINT32_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t74 = 9104;

	t74 = ((x369*x370)==(x371==x372));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x373 = -3;
	uint16_t x374 = UINT16_MAX;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = INT64_MIN;
	static volatile int32_t t75 = 6;

	t75 = ((x373*x374)==(x375==x376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = 1;
	int64_t x378 = 48176074358LL;
	int16_t x379 = 236;
	static int32_t x380 = -1;
	static int32_t t76 = -491;

	t76 = ((x377*x378)==(x379==x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x381 = 190354621LL;
	volatile int32_t x383 = 2;

	t77 = ((x381*x382)==(x383==x384));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x385 = UINT8_MAX;
	volatile int8_t x386 = INT8_MAX;
	int32_t x387 = INT32_MAX;
	volatile int16_t x388 = INT16_MAX;
	static int32_t t78 = -56907635;

	t78 = ((x385*x386)==(x387==x388));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x390 = 1568697805LL;
	uint8_t x391 = 40U;
	int64_t x392 = INT64_MIN;
	volatile int32_t t79 = -5942016;

	t79 = ((x389*x390)==(x391==x392));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x393 = 26785310376LLU;
	volatile int32_t x394 = 1807299;
	static int32_t x395 = 5427123;
	static volatile int32_t t80 = 1603;

	t80 = ((x393*x394)==(x395==x396));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	static volatile uint8_t x404 = UINT8_MAX;
	static int32_t t81 = -1086;

	t81 = ((x401*x402)==(x403==x404));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x409 = -1LL;
	int64_t x410 = -1LL;
	static int64_t x411 = 123101893335060LL;
	int32_t t82 = 232985;

	t82 = ((x409*x410)==(x411==x412));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x413 = 0;
	int8_t x414 = -12;
	uint64_t x415 = 4608331LLU;
	uint16_t x416 = 980U;
	int32_t t83 = 864066306;

	t83 = ((x413*x414)==(x415==x416));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x417 = 1;
	int16_t x418 = INT16_MIN;
	int8_t x420 = 1;
	int32_t t84 = -14161;

	t84 = ((x417*x418)==(x419==x420));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x421 = 86670870388LLU;
	volatile uint8_t x422 = UINT8_MAX;
	volatile int16_t x424 = -1;
	int32_t t85 = -62855;

	t85 = ((x421*x422)==(x423==x424));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x429 = INT32_MIN;
	volatile int16_t x430 = 1;
	static int8_t x432 = -24;
	volatile int32_t t86 = -62451782;

	t86 = ((x429*x430)==(x431==x432));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x437 = -1LL;
	int64_t x438 = 24390698LL;
	uint8_t x439 = UINT8_MAX;
	static volatile int32_t t87 = 458304;

	t87 = ((x437*x438)==(x439==x440));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x441 = UINT16_MAX;
	int16_t x442 = 464;
	int8_t x443 = INT8_MIN;
	static uint16_t x444 = 1U;
	volatile int32_t t88 = -483909114;

	t88 = ((x441*x442)==(x443==x444));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x445 = 288;
	uint8_t x446 = UINT8_MAX;
	static uint8_t x447 = 21U;
	uint16_t x448 = 10U;
	volatile int32_t t89 = -4;

	t89 = ((x445*x446)==(x447==x448));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x449 = 7U;
	uint32_t x450 = 48656088U;
	volatile uint8_t x452 = UINT8_MAX;
	volatile int32_t t90 = 180081835;

	t90 = ((x449*x450)==(x451==x452));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x453 = -1LL;
	int16_t x454 = -1;
	static int8_t x455 = 15;
	static int64_t x456 = INT64_MIN;

	t91 = ((x453*x454)==(x455==x456));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x457 = INT16_MIN;
	int8_t x459 = 0;
	static uint32_t x460 = 1012418U;
	volatile int32_t t92 = 0;

	t92 = ((x457*x458)==(x459==x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x461 = 945U;
	int64_t x462 = -8LL;
	volatile int16_t x463 = INT16_MAX;
	static volatile int32_t t93 = -521;

	t93 = ((x461*x462)==(x463==x464));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x466 = -1;
	uint16_t x467 = 24793U;
	int8_t x468 = INT8_MIN;

	t94 = ((x465*x466)==(x467==x468));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x469 = -380;
	volatile int16_t x470 = INT16_MIN;
	static volatile int32_t t95 = -8;

	t95 = ((x469*x470)==(x471==x472));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = INT16_MIN;
	static int16_t x474 = INT16_MIN;
	int32_t x475 = INT32_MAX;
	uint64_t x476 = 7126472LLU;
	int32_t t96 = -57987723;

	t96 = ((x473*x474)==(x475==x476));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x477 = 1;
	uint64_t x478 = 1063467186166414740LLU;
	int32_t x479 = -1003208;
	volatile int16_t x480 = INT16_MIN;
	volatile int32_t t97 = -105;

	t97 = ((x477*x478)==(x479==x480));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x482 = -17;
	int16_t x484 = 805;
	static int32_t t98 = -8;

	t98 = ((x481*x482)==(x483==x484));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x485 = 19U;
	uint16_t x486 = UINT16_MAX;
	int32_t x487 = -54819468;

	t99 = ((x485*x486)==(x487==x488));

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

