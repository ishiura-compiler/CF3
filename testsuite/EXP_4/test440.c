#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = 2;
int32_t x8 = INT32_MIN;
int32_t x9 = INT32_MIN;
volatile int16_t x16 = INT16_MIN;
int64_t x22 = 62061314880LL;
volatile int64_t x23 = -1LL;
volatile int32_t t5 = -1;
static int8_t x35 = INT8_MIN;
volatile int8_t x51 = -2;
volatile int8_t x56 = -1;
int32_t t10 = 218721549;
volatile int64_t x62 = INT64_MAX;
volatile uint8_t x67 = 5U;
volatile uint32_t t12 = 13867U;
static int64_t x86 = 273104LL;
static int16_t x118 = INT16_MIN;
uint64_t x123 = 702723929LLU;
int8_t x124 = INT8_MAX;
int32_t t23 = 2718780;
int64_t x125 = 241697867994661LL;
int32_t t25 = -64738;
int32_t x140 = INT32_MIN;
int16_t x141 = 117;
uint8_t x145 = 3U;
int8_t x147 = 5;
uint8_t x169 = 29U;
int64_t x171 = INT64_MAX;
int16_t x176 = INT16_MIN;
int64_t x177 = INT64_MIN;
int16_t x178 = INT16_MIN;
static int8_t x187 = INT8_MIN;
uint64_t x191 = UINT64_MAX;
int64_t x195 = 205127285779LL;
int8_t x199 = INT8_MIN;
int8_t x222 = -1;
uint64_t x223 = 571749632147LLU;
int8_t x225 = INT8_MIN;
static int8_t x226 = -1;
uint32_t x227 = 14362U;
static int16_t x228 = INT16_MIN;
int64_t x231 = -121736900LL;
volatile uint16_t x237 = UINT16_MAX;
static int8_t x261 = 16;
uint16_t x284 = 28U;
int8_t x300 = -1;
int8_t x301 = INT8_MIN;
uint8_t x303 = 63U;
int64_t x304 = 174110511858360LL;
volatile int64_t x305 = INT64_MAX;
uint64_t x307 = 7676250LLU;
int8_t x308 = INT8_MAX;
uint64_t x314 = 99LLU;
uint64_t x316 = 14LLU;
uint16_t x320 = 0U;
int32_t x324 = -1128;
int64_t x334 = INT64_MAX;
uint32_t x337 = 1704008519U;
static uint8_t x340 = 20U;
uint32_t t63 = 10U;
uint8_t x341 = UINT8_MAX;
volatile int64_t x343 = -367036981703LL;
static int64_t x362 = -1LL;
int32_t x365 = INT32_MIN;
volatile int8_t x368 = INT8_MAX;
uint8_t x382 = 37U;
int8_t x384 = 1;
static volatile int32_t t70 = -197;
int16_t x390 = INT16_MIN;
int16_t x402 = -2447;
int16_t x405 = INT16_MAX;
int32_t t73 = -451640261;
volatile uint64_t x423 = 10287181086112530LLU;
int64_t x424 = 1050517808198535LL;
static volatile uint16_t x431 = 0U;
uint8_t x436 = 4U;
int8_t x437 = 1;
int64_t t83 = 1805927252147045652LL;
int64_t x472 = INT64_MAX;
volatile int32_t t84 = -25776;
static uint8_t x495 = UINT8_MAX;
int16_t x499 = -87;
static uint32_t x500 = UINT32_MAX;
static int64_t x502 = INT64_MIN;
volatile int32_t t90 = 22532;
static uint8_t x505 = 112U;
volatile uint16_t x513 = 4786U;
int16_t x517 = -1685;
uint8_t x522 = UINT8_MAX;
int16_t x523 = INT16_MIN;
uint16_t x524 = UINT16_MAX;
int64_t x528 = -2LL;
int64_t x531 = -10LL;
int32_t t98 = 0;
int64_t x537 = 269846647777LL;


void f0(void) {
	int64_t x6 = -105265LL;
	uint64_t x7 = 4424316410996117LLU;
	int32_t t0 = -24371;

	t0 = (x5&(x6==(x7*x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = UINT16_MAX;
	volatile uint16_t x11 = 4U;
	static uint8_t x12 = 86U;
	volatile int32_t t1 = -975494415;

	t1 = (x9&(x10==(x11*x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	static int16_t x14 = INT16_MAX;
	int8_t x15 = 14;
	volatile uint32_t t2 = 2U;

	t2 = (x13&(x14==(x15*x16)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x21 = INT32_MIN;
	static uint16_t x24 = 0U;
	int32_t t3 = 1;

	t3 = (x21&(x22==(x23*x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	uint16_t x26 = 15723U;
	volatile int16_t x27 = INT16_MIN;
	uint16_t x28 = 488U;
	volatile int32_t t4 = 148774;

	t4 = (x25&(x26==(x27*x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	uint16_t x30 = 29U;
	volatile int16_t x31 = INT16_MAX;
	volatile int64_t x32 = -1LL;

	t5 = (x29&(x30==(x31*x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -26;
	int8_t x34 = INT8_MAX;
	uint8_t x36 = UINT8_MAX;
	int32_t t6 = -26;

	t6 = (x33&(x34==(x35*x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	volatile int8_t x38 = -1;
	static int32_t x39 = 463;
	int16_t x40 = INT16_MAX;
	int32_t t7 = -3;

	t7 = (x37&(x38==(x39*x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x41 = 252U;
	int64_t x42 = INT64_MIN;
	uint64_t x43 = UINT64_MAX;
	volatile int32_t x44 = -66839;
	int32_t t8 = 6642;

	t8 = (x41&(x42==(x43*x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x49 = 191373U;
	int16_t x50 = -34;
	uint32_t x52 = 610844826U;
	volatile uint32_t t9 = 545U;

	t9 = (x49&(x50==(x51*x52)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MIN;
	uint64_t x55 = UINT64_MAX;

	t10 = (x53&(x54==(x55*x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = INT8_MIN;
	volatile uint64_t x63 = 6310117621137LLU;
	static int64_t x64 = 186073LL;
	static volatile int32_t t11 = -9951943;

	t11 = (x61&(x62==(x63*x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 475U;
	int16_t x66 = -12222;
	uint16_t x68 = 125U;

	t12 = (x65&(x66==(x67*x68)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x69 = INT32_MAX;
	int64_t x70 = INT64_MAX;
	int32_t x71 = -117071648;
	uint8_t x72 = 3U;
	static volatile int32_t t13 = 19027989;

	t13 = (x69&(x70==(x71*x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 43U;
	static volatile int16_t x76 = INT16_MAX;
	static int32_t t14 = 60;

	t14 = (x73&(x74==(x75*x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = UINT16_MAX;
	static int8_t x78 = INT8_MAX;
	uint64_t x79 = UINT64_MAX;
	volatile uint64_t x80 = 1507LLU;
	volatile int32_t t15 = 0;

	t15 = (x77&(x78==(x79*x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -1LL;
	int32_t x82 = 115891769;
	volatile int8_t x83 = -16;
	static uint8_t x84 = UINT8_MAX;
	int64_t t16 = 30LL;

	t16 = (x81&(x82==(x83*x84)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -1;
	uint32_t x87 = 459U;
	static int64_t x88 = -1LL;
	volatile int32_t t17 = 3710678;

	t17 = (x85&(x86==(x87*x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = -1;
	uint64_t x90 = UINT64_MAX;
	uint16_t x91 = 466U;
	static uint8_t x92 = 35U;
	int32_t t18 = -732842;

	t18 = (x89&(x90==(x91*x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = INT32_MAX;
	static uint8_t x99 = 1U;
	static uint64_t x100 = 30183LLU;
	int32_t t19 = 46422;

	t19 = (x97&(x98==(x99*x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = 0;
	static int32_t x103 = -1;
	int16_t x104 = INT16_MIN;
	volatile int32_t t20 = -188935893;

	t20 = (x101&(x102==(x103*x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x109 = 370340833U;
	int64_t x110 = INT64_MAX;
	int8_t x111 = 0;
	static uint16_t x112 = UINT16_MAX;
	uint32_t t21 = 1578U;

	t21 = (x109&(x110==(x111*x112)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x117 = -13;
	uint16_t x119 = 29036U;
	int16_t x120 = INT16_MIN;
	volatile int32_t t22 = 1;

	t22 = (x117&(x118==(x119*x120)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x121 = 223U;
	volatile uint32_t x122 = 367557U;

	t23 = (x121&(x122==(x123*x124)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x126 = 1;
	uint32_t x127 = UINT32_MAX;
	volatile uint8_t x128 = 105U;
	int64_t t24 = -1818673614LL;

	t24 = (x125&(x126==(x127*x128)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x129 = INT16_MAX;
	int32_t x130 = INT32_MIN;
	volatile int8_t x131 = -40;
	int16_t x132 = -1;

	t25 = (x129&(x130==(x131*x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = INT32_MIN;
	static uint16_t x134 = UINT16_MAX;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = UINT64_MAX;
	int32_t t26 = -4060672;

	t26 = (x133&(x134==(x135*x136)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x137 = 1U;
	uint64_t x138 = 12685419195LLU;
	uint32_t x139 = 3U;
	volatile int32_t t27 = 43550;

	t27 = (x137&(x138==(x139*x140)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x142 = 61LL;
	static volatile int16_t x143 = -5909;
	int8_t x144 = INT8_MIN;
	int32_t t28 = 44;

	t28 = (x141&(x142==(x143*x144)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x146 = -1;
	uint8_t x148 = UINT8_MAX;
	int32_t t29 = -173194;

	t29 = (x145&(x146==(x147*x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x153 = 11609U;
	int16_t x154 = -1;
	uint16_t x155 = 6U;
	int8_t x156 = INT8_MIN;
	volatile int32_t t30 = -606477;

	t30 = (x153&(x154==(x155*x156)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = INT64_MIN;
	uint16_t x158 = UINT16_MAX;
	static volatile int8_t x159 = INT8_MIN;
	static uint8_t x160 = UINT8_MAX;
	volatile int64_t t31 = 28622392060975431LL;

	t31 = (x157&(x158==(x159*x160)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x170 = 417478261534655188LLU;
	int16_t x172 = -1;
	volatile int32_t t32 = 50331028;

	t32 = (x169&(x170==(x171*x172)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = 1;
	int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	static volatile int32_t t33 = -4479156;

	t33 = (x173&(x174==(x175*x176)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x179 = -11193LL;
	static uint64_t x180 = UINT64_MAX;
	volatile int64_t t34 = -1043596338516LL;

	t34 = (x177&(x178==(x179*x180)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x181 = 1381911677U;
	uint8_t x182 = 64U;
	volatile uint8_t x183 = UINT8_MAX;
	volatile int16_t x184 = -856;
	volatile uint32_t t35 = 12U;

	t35 = (x181&(x182==(x183*x184)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x185 = -2;
	int8_t x186 = INT8_MIN;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t36 = 6;

	t36 = (x185&(x186==(x187*x188)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x189 = UINT64_MAX;
	static int8_t x190 = INT8_MIN;
	static volatile int32_t x192 = -1;
	uint64_t t37 = 257807394689645466LLU;

	t37 = (x189&(x190==(x191*x192)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x193 = UINT16_MAX;
	int32_t x194 = INT32_MIN;
	uint32_t x196 = 1U;
	volatile int32_t t38 = -830;

	t38 = (x193&(x194==(x195*x196)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x197 = UINT32_MAX;
	volatile int8_t x198 = INT8_MIN;
	uint8_t x200 = UINT8_MAX;
	volatile uint32_t t39 = 44869U;

	t39 = (x197&(x198==(x199*x200)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x205 = UINT8_MAX;
	volatile int64_t x206 = INT64_MIN;
	int16_t x207 = -1;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t40 = -97;

	t40 = (x205&(x206==(x207*x208)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x209 = UINT16_MAX;
	uint8_t x210 = 15U;
	int8_t x211 = INT8_MAX;
	int16_t x212 = -882;
	int32_t t41 = 15208721;

	t41 = (x209&(x210==(x211*x212)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x217 = 0;
	static uint64_t x218 = UINT64_MAX;
	uint16_t x219 = 106U;
	int8_t x220 = INT8_MIN;
	int32_t t42 = -466178;

	t42 = (x217&(x218==(x219*x220)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x221 = INT32_MAX;
	int8_t x224 = -2;
	static volatile int32_t t43 = -3754183;

	t43 = (x221&(x222==(x223*x224)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t t44 = 0;

	t44 = (x225&(x226==(x227*x228)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MAX;
	int8_t x232 = -1;
	static int32_t t45 = -143827078;

	t45 = (x229&(x230==(x231*x232)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x233 = 50369797489LL;
	int32_t x234 = INT32_MAX;
	uint8_t x235 = UINT8_MAX;
	static uint8_t x236 = 5U;
	volatile int64_t t46 = -1383891308LL;

	t46 = (x233&(x234==(x235*x236)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x238 = 12;
	int16_t x239 = -1;
	static int16_t x240 = -6867;
	int32_t t47 = 0;

	t47 = (x237&(x238==(x239*x240)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = INT16_MAX;
	int8_t x242 = INT8_MIN;
	uint16_t x243 = 1083U;
	int32_t x244 = -1;
	int32_t t48 = 2149312;

	t48 = (x241&(x242==(x243*x244)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x262 = 18704U;
	uint64_t x263 = 540441175675688231LLU;
	volatile int16_t x264 = -2;
	static int32_t t49 = -2068265;

	t49 = (x261&(x262==(x263*x264)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x265 = 109U;
	uint64_t x266 = 106914137899LLU;
	int32_t x267 = -1;
	volatile int64_t x268 = -1LL;
	volatile int32_t t50 = -164684;

	t50 = (x265&(x266==(x267*x268)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x273 = INT8_MIN;
	uint64_t x274 = 5179885078525153817LLU;
	int16_t x275 = INT16_MIN;
	int8_t x276 = 0;
	static volatile int32_t t51 = -16689859;

	t51 = (x273&(x274==(x275*x276)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x281 = -1;
	volatile int32_t x282 = INT32_MAX;
	volatile int32_t x283 = 1698;
	static int32_t t52 = -998550;

	t52 = (x281&(x282==(x283*x284)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x285 = 2825;
	uint32_t x286 = 2425U;
	volatile int8_t x287 = 13;
	static uint8_t x288 = 15U;
	static volatile int32_t t53 = 130826387;

	t53 = (x285&(x286==(x287*x288)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x297 = UINT16_MAX;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = 21U;
	volatile int32_t t54 = 1;

	t54 = (x297&(x298==(x299*x300)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x302 = 257U;
	volatile int32_t t55 = -215;

	t55 = (x301&(x302==(x303*x304)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x306 = INT64_MIN;
	int64_t t56 = -2619716208572142692LL;

	t56 = (x305&(x306==(x307*x308)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x309 = -1LL;
	int64_t x310 = -353619525972551235LL;
	uint16_t x311 = 11U;
	uint8_t x312 = 5U;
	int64_t t57 = -22324347549122669LL;

	t57 = (x309&(x310==(x311*x312)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x313 = INT8_MAX;
	static int8_t x315 = 2;
	int32_t t58 = 6;

	t58 = (x313&(x314==(x315*x316)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x318 = 15586062808117110LLU;
	volatile int16_t x319 = INT16_MIN;
	volatile int64_t t59 = 259613985410LL;

	t59 = (x317&(x318==(x319*x320)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x321 = INT64_MAX;
	int8_t x322 = -1;
	uint8_t x323 = UINT8_MAX;
	int64_t t60 = -120630881645554LL;

	t60 = (x321&(x322==(x323*x324)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int32_t x330 = INT32_MIN;
	int32_t x331 = 30;
	int32_t x332 = 58880;
	volatile uint64_t t61 = 853979184577LLU;

	t61 = (x329&(x330==(x331*x332)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x333 = -14;
	volatile int16_t x335 = -1312;
	uint64_t x336 = UINT64_MAX;
	static int32_t t62 = 609194319;

	t62 = (x333&(x334==(x335*x336)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x338 = 4U;
	uint8_t x339 = 2U;

	t63 = (x337&(x338==(x339*x340)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x342 = UINT32_MAX;
	static int8_t x344 = 9;
	static int32_t t64 = -33;

	t64 = (x341&(x342==(x343*x344)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x353 = INT16_MIN;
	volatile int8_t x354 = -31;
	volatile int64_t x355 = 25034743870LL;
	int16_t x356 = -1;
	int32_t t65 = 9775;

	t65 = (x353&(x354==(x355*x356)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x361 = -1244515921001LL;
	static uint8_t x363 = 51U;
	static int8_t x364 = INT8_MIN;
	int64_t t66 = 11LL;

	t66 = (x361&(x362==(x363*x364)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x366 = INT32_MIN;
	static uint32_t x367 = UINT32_MAX;
	int32_t t67 = -2;

	t67 = (x365&(x366==(x367*x368)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x369 = 114U;
	int32_t x370 = -5507;
	static uint32_t x371 = 39U;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t68 = -581;

	t68 = (x369&(x370==(x371*x372)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x373 = -1LL;
	int8_t x374 = INT8_MAX;
	static volatile uint32_t x375 = UINT32_MAX;
	static int16_t x376 = 7903;
	int64_t t69 = -378LL;

	t69 = (x373&(x374==(x375*x376)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x381 = INT32_MIN;
	volatile int8_t x383 = 3;

	t70 = (x381&(x382==(x383*x384)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x389 = -21LL;
	int64_t x391 = INT64_MAX;
	int16_t x392 = -1;
	int64_t t71 = -6336722LL;

	t71 = (x389&(x390==(x391*x392)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x401 = INT16_MAX;
	static uint32_t x403 = UINT32_MAX;
	uint32_t x404 = 1U;
	volatile int32_t t72 = 0;

	t72 = (x401&(x402==(x403*x404)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x406 = -42LL;
	uint8_t x407 = 0U;
	int64_t x408 = INT64_MIN;

	t73 = (x405&(x406==(x407*x408)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x409 = INT16_MAX;
	uint32_t x410 = 1278936370U;
	int16_t x411 = -2124;
	uint8_t x412 = 7U;
	int32_t t74 = -8617;

	t74 = (x409&(x410==(x411*x412)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x413 = INT64_MIN;
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = INT16_MIN;
	static volatile uint8_t x416 = 45U;
	int64_t t75 = 456568LL;

	t75 = (x413&(x414==(x415*x416)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x417 = -1;
	uint16_t x418 = UINT16_MAX;
	volatile int16_t x419 = -1;
	int8_t x420 = -1;
	static volatile int32_t t76 = -47090191;

	t76 = (x417&(x418==(x419*x420)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x421 = 1U;
	static volatile int64_t x422 = INT64_MIN;
	int32_t t77 = -651;

	t77 = (x421&(x422==(x423*x424)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x429 = 2U;
	volatile uint16_t x430 = 34U;
	static uint32_t x432 = UINT32_MAX;
	static volatile uint32_t t78 = 2U;

	t78 = (x429&(x430==(x431*x432)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x433 = UINT64_MAX;
	int16_t x434 = -4;
	static int8_t x435 = -1;
	uint64_t t79 = 131562532291LLU;

	t79 = (x433&(x434==(x435*x436)));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x438 = INT32_MAX;
	uint16_t x439 = 0U;
	volatile uint16_t x440 = 2046U;
	volatile int32_t t80 = 869;

	t80 = (x437&(x438==(x439*x440)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x445 = -1;
	int64_t x446 = 324912LL;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = -1;
	volatile int32_t t81 = 105;

	t81 = (x445&(x446==(x447*x448)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x449 = INT16_MAX;
	volatile uint16_t x450 = 3U;
	volatile int32_t x451 = 3783709;
	uint32_t x452 = UINT32_MAX;
	int32_t t82 = 483532970;

	t82 = (x449&(x450==(x451*x452)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x461 = -1LL;
	uint8_t x462 = 31U;
	uint32_t x463 = 8049U;
	static volatile int8_t x464 = INT8_MIN;

	t83 = (x461&(x462==(x463*x464)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x469 = -1;
	int8_t x470 = INT8_MIN;
	static volatile uint8_t x471 = 1U;

	t84 = (x469&(x470==(x471*x472)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x477 = UINT16_MAX;
	volatile int16_t x478 = INT16_MIN;
	static int16_t x479 = INT16_MIN;
	static uint8_t x480 = 5U;
	volatile int32_t t85 = -16047;

	t85 = (x477&(x478==(x479*x480)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x485 = -1LL;
	int64_t x486 = -833417597139430LL;
	static int64_t x487 = 4972933464386892LL;
	volatile uint8_t x488 = UINT8_MAX;
	int64_t t86 = -7LL;

	t86 = (x485&(x486==(x487*x488)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x489 = UINT64_MAX;
	static volatile int16_t x490 = -1;
	int32_t x491 = INT32_MIN;
	static int64_t x492 = -39223608LL;
	volatile uint64_t t87 = 162LLU;

	t87 = (x489&(x490==(x491*x492)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x493 = 22;
	uint32_t x494 = UINT32_MAX;
	uint16_t x496 = 6U;
	int32_t t88 = -962985;

	t88 = (x493&(x494==(x495*x496)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x497 = -63579702675LL;
	int8_t x498 = INT8_MIN;
	volatile int64_t t89 = -491835843231062538LL;

	t89 = (x497&(x498==(x499*x500)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x501 = INT16_MAX;
	int8_t x503 = -1;
	int8_t x504 = -1;

	t90 = (x501&(x502==(x503*x504)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x506 = -5LL;
	static int16_t x507 = INT16_MIN;
	volatile int16_t x508 = INT16_MIN;
	static int32_t t91 = -64497414;

	t91 = (x505&(x506==(x507*x508)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x509 = -146;
	uint32_t x510 = 11637967U;
	static uint64_t x511 = 6643890713LLU;
	int8_t x512 = INT8_MIN;
	static int32_t t92 = 100;

	t92 = (x509&(x510==(x511*x512)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x514 = 0;
	volatile int16_t x515 = -1;
	int64_t x516 = INT64_MAX;
	static int32_t t93 = -4153107;

	t93 = (x513&(x514==(x515*x516)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x518 = -24;
	uint64_t x519 = UINT64_MAX;
	static volatile int32_t x520 = -976;
	volatile int32_t t94 = -27961;

	t94 = (x517&(x518==(x519*x520)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x521 = -1LL;
	volatile int64_t t95 = 213582LL;

	t95 = (x521&(x522==(x523*x524)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x525 = INT64_MIN;
	static int64_t x526 = INT64_MIN;
	int64_t x527 = 174LL;
	volatile int64_t t96 = 5916300LL;

	t96 = (x525&(x526==(x527*x528)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x529 = 1155U;
	volatile int32_t x530 = INT32_MAX;
	static int64_t x532 = 30049776589LL;
	volatile int32_t t97 = 619854;

	t97 = (x529&(x530==(x531*x532)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x533 = INT32_MAX;
	int8_t x534 = INT8_MAX;
	static uint64_t x535 = 2042703LLU;
	int16_t x536 = INT16_MIN;

	t98 = (x533&(x534==(x535*x536)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x538 = 28;
	int16_t x539 = 30;
	volatile int16_t x540 = INT16_MIN;
	int64_t t99 = 3LL;

	t99 = (x537&(x538==(x539*x540)));

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

