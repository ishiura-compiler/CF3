#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x11 = 98213LL;
uint64_t t2 = 19202802049LLU;
uint64_t x21 = 2109144179818978995LLU;
static int16_t x38 = INT16_MIN;
int64_t x40 = -1221361LL;
static volatile int8_t x41 = -59;
static int16_t x45 = INT16_MIN;
uint64_t x49 = UINT64_MAX;
static int16_t x50 = INT16_MIN;
static int16_t x51 = 1885;
volatile int64_t x63 = -81377566206922LL;
volatile int16_t x66 = -1;
int16_t x69 = INT16_MIN;
int32_t x81 = INT32_MIN;
int64_t x83 = -1LL;
int64_t x84 = INT64_MAX;
static volatile uint8_t x90 = 1U;
volatile int64_t t22 = -848758012LL;
static int8_t x120 = INT8_MIN;
uint64_t t26 = 120363LLU;
static int64_t x132 = INT64_MIN;
volatile int64_t t28 = 0LL;
volatile int32_t x172 = INT32_MIN;
volatile int32_t t35 = -5988113;
volatile uint32_t x175 = 33U;
uint32_t x178 = 993U;
uint64_t x179 = UINT64_MAX;
int8_t x181 = -1;
static volatile uint64_t x184 = 1569697600517LLU;
volatile uint8_t x187 = 112U;
uint32_t x188 = 238353069U;
static uint32_t t39 = 21004379U;
static volatile uint8_t x190 = 1U;
int16_t x194 = -15;
uint64_t x200 = 810181864LLU;
static volatile int64_t x202 = 526076LL;
int16_t x212 = 1;
volatile uint64_t x215 = 16662851427695199LLU;
int8_t x218 = INT8_MAX;
uint32_t x219 = UINT32_MAX;
int64_t t48 = 51396LL;
static int64_t t49 = 1507064865362LL;
int16_t x235 = 636;
uint32_t x239 = UINT32_MAX;
int64_t x240 = INT64_MIN;
static int16_t x242 = INT16_MAX;
int8_t x243 = 0;
int16_t x244 = INT16_MIN;
volatile int32_t t52 = -10;
static volatile int16_t x249 = INT16_MIN;
int64_t x254 = INT64_MIN;
int64_t x255 = 219LL;
int64_t x256 = INT64_MIN;
static uint32_t x258 = 5U;
static int32_t x260 = INT32_MAX;
volatile uint32_t t56 = 127U;
int16_t x279 = 2;
int64_t t60 = -21999691447LL;
static volatile int32_t x286 = INT32_MIN;
int8_t x287 = INT8_MAX;
static int16_t x289 = 1;
uint8_t x290 = 9U;
int32_t x291 = -1;
static int32_t t63 = 124970715;
static int32_t x294 = -350051;
uint64_t t64 = 2450LLU;
int64_t x307 = INT64_MAX;
static uint32_t x308 = 463738110U;
uint8_t x311 = UINT8_MAX;
int16_t x314 = -1;
int64_t t69 = -4212585996740LL;
int8_t x319 = -1;
volatile int64_t t71 = -762892754052444051LL;
static int16_t x338 = 317;
static uint16_t x343 = 47U;
int32_t x348 = INT32_MIN;
uint16_t x349 = UINT16_MAX;
static int16_t x352 = INT16_MIN;
uint8_t x355 = 60U;
int32_t x363 = INT32_MAX;
int32_t x364 = 220769;
volatile int64_t t79 = 907552LL;
uint8_t x366 = 1U;
volatile int16_t x368 = -1;
static int32_t t80 = 0;
uint32_t t83 = 5U;
int64_t t85 = -3055710LL;
static uint8_t x393 = 13U;
int16_t x396 = INT16_MIN;
uint8_t x399 = 1U;
static int16_t x400 = INT16_MIN;
int32_t t87 = -1;
int64_t x410 = INT64_MIN;
static uint8_t x411 = 40U;
static uint64_t t90 = 14769007831896211LLU;
uint16_t x421 = 1U;
int32_t x422 = INT32_MIN;
int8_t x424 = INT8_MIN;
volatile int64_t t92 = 472121LL;
uint8_t x431 = 84U;
volatile uint64_t t95 = 1296768969926325088LLU;
int8_t x440 = -28;
int64_t x444 = INT64_MIN;
volatile uint8_t x451 = 6U;
int64_t x452 = INT64_MIN;


void f0(void) {
	uint16_t x5 = 1U;
	uint16_t x6 = 30334U;
	int64_t x7 = 29LL;
	int32_t x8 = -1;
	int64_t t0 = -18220LL;

	t0 = ((x5/x6)*(x7/x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 5U;
	static int32_t x10 = -1;
	int64_t x12 = -5727534532LL;
	int64_t t1 = -80327684LL;

	t1 = ((x9/x10)*(x11/x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MAX;
	uint64_t x16 = 27LLU;

	t2 = ((x13/x14)*(x15/x16));

	if (t2 != 79536431LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 6U;
	int32_t x18 = INT32_MAX;
	uint64_t x19 = 1677603LLU;
	int8_t x20 = -1;
	volatile uint64_t t3 = 53638533751460863LLU;

	t3 = ((x17/x18)*(x19/x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	int32_t x24 = INT32_MIN;
	volatile uint64_t t4 = 90030414486LLU;

	t4 = ((x21/x22)*(x23/x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 1734966130482318LLU;
	int32_t x26 = -1;
	int16_t x27 = 26;
	int16_t x28 = INT16_MIN;
	uint64_t t5 = 128639775003845LLU;

	t5 = ((x25/x26)*(x27/x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = INT64_MIN;
	uint64_t x30 = UINT64_MAX;
	static int16_t x31 = -1;
	int16_t x32 = 33;
	volatile uint64_t t6 = 1002668328629LLU;

	t6 = ((x29/x30)*(x31/x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1620490978LL;
	int32_t x34 = INT32_MAX;
	uint64_t x35 = 250621899859LLU;
	volatile int16_t x36 = -3645;
	volatile uint64_t t7 = 5070407LLU;

	t7 = ((x33/x34)*(x35/x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	int32_t x39 = INT32_MIN;
	int64_t t8 = 22LL;

	t8 = ((x37/x38)*(x39/x40));

	if (t8 != 494833009057333248LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x42 = -1;
	int8_t x43 = INT8_MAX;
	uint16_t x44 = UINT16_MAX;
	static int32_t t9 = 204785686;

	t9 = ((x41/x42)*(x43/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x46 = 254447030654509LLU;
	uint8_t x47 = UINT8_MAX;
	volatile int16_t x48 = -663;
	uint64_t t10 = 256177349092506187LLU;

	t10 = ((x45/x46)*(x47/x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x52 = INT32_MIN;
	uint64_t t11 = 16420046LLU;

	t11 = ((x49/x50)*(x51/x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static int32_t x54 = -3602436;
	int64_t x55 = INT64_MAX;
	uint16_t x56 = 111U;
	volatile uint64_t t12 = 128410LLU;

	t12 = ((x53/x54)*(x55/x56));

	if (t12 != 83093441773466448LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -3886;
	int8_t x58 = INT8_MAX;
	int8_t x59 = 0;
	int16_t x60 = INT16_MIN;
	int32_t t13 = 94185068;

	t13 = ((x57/x58)*(x59/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -14;
	static uint64_t x62 = UINT64_MAX;
	volatile int16_t x64 = INT16_MIN;
	uint64_t t14 = 50152003LLU;

	t14 = ((x61/x62)*(x63/x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	static int16_t x67 = -1;
	int32_t x68 = INT32_MIN;
	int32_t t15 = -34966810;

	t15 = ((x65/x66)*(x67/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x70 = 95385249LLU;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = 1;
	volatile uint64_t t16 = 106054450809715LLU;

	t16 = ((x69/x70)*(x71/x72));

	if (t16 != 49314959997450LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 4390369684LL;
	static int32_t x74 = INT32_MIN;
	int8_t x75 = -1;
	int8_t x76 = -1;
	int64_t t17 = 1LL;

	t17 = ((x73/x74)*(x75/x76));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = UINT8_MAX;
	uint8_t x78 = 1U;
	int32_t x79 = -13100;
	static int64_t x80 = -2905LL;
	volatile int64_t t18 = 747352LL;

	t18 = ((x77/x78)*(x79/x80));

	if (t18 != 1020LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x82 = INT32_MIN;
	int64_t t19 = 2445486480252LL;

	t19 = ((x81/x82)*(x83/x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x85 = UINT64_MAX;
	int16_t x86 = -1;
	volatile uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	uint64_t t20 = 695213321LLU;

	t20 = ((x85/x86)*(x87/x88));

	if (t20 != 18446744073709551105LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MAX;
	int8_t x91 = INT8_MAX;
	int64_t x92 = INT64_MAX;
	int64_t t21 = -1715LL;

	t21 = ((x89/x90)*(x91/x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	int64_t x94 = INT64_MAX;
	int8_t x95 = -1;
	int16_t x96 = -925;

	t22 = ((x93/x94)*(x95/x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = 62758579;
	int32_t x102 = -104475500;
	int8_t x103 = 7;
	uint8_t x104 = 1U;
	volatile int32_t t23 = 1792082;

	t23 = ((x101/x102)*(x103/x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x105 = 21U;
	int64_t x106 = 181925564834LL;
	static volatile uint16_t x107 = 2U;
	int64_t x108 = -179388129000LL;
	volatile int64_t t24 = -1443599301LL;

	t24 = ((x105/x106)*(x107/x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = UINT8_MAX;
	static int32_t x111 = -1;
	int32_t x112 = -1;
	volatile int32_t t25 = 146382444;

	t25 = ((x109/x110)*(x111/x112));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MAX;
	uint64_t x118 = UINT64_MAX;
	volatile int32_t x119 = INT32_MIN;

	t26 = ((x117/x118)*(x119/x120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x121 = 879U;
	static int16_t x122 = INT16_MIN;
	uint64_t x123 = UINT64_MAX;
	static int32_t x124 = INT32_MAX;
	volatile uint64_t t27 = 146290LLU;

	t27 = ((x121/x122)*(x123/x124));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x129 = INT16_MAX;
	volatile int32_t x130 = -1;
	uint16_t x131 = 244U;

	t28 = ((x129/x130)*(x131/x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -1;
	uint32_t x134 = 6U;
	int8_t x135 = -32;
	static int64_t x136 = -694748882237LL;
	int64_t t29 = -526049205075926762LL;

	t29 = ((x133/x134)*(x135/x136));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = INT8_MIN;
	uint8_t x146 = 8U;
	int64_t x147 = -1LL;
	int8_t x148 = INT8_MIN;
	volatile int64_t t30 = -816962860364990595LL;

	t30 = ((x145/x146)*(x147/x148));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = -1LL;
	static volatile uint32_t x154 = UINT32_MAX;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MAX;
	volatile int64_t t31 = 0LL;

	t31 = ((x153/x154)*(x155/x156));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x157 = UINT32_MAX;
	static volatile int64_t x158 = INT64_MAX;
	uint16_t x159 = 15291U;
	int32_t x160 = 12;
	int64_t t32 = 2183672710379573404LL;

	t32 = ((x157/x158)*(x159/x160));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = -1;
	int8_t x162 = INT8_MIN;
	uint64_t x163 = 8215859027108086LLU;
	int8_t x164 = INT8_MIN;
	uint64_t t33 = 6218783641660176LLU;

	t33 = ((x161/x162)*(x163/x164));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = INT8_MAX;
	uint16_t x166 = 4U;
	static int64_t x167 = -1LL;
	volatile int64_t x168 = -1LL;
	static int64_t t34 = -40036014677368LL;

	t34 = ((x165/x166)*(x167/x168));

	if (t34 != 31LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x169 = 12;
	int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MIN;

	t35 = ((x169/x170)*(x171/x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 33U;
	int64_t x174 = -254446776883237LL;
	int8_t x176 = INT8_MIN;
	int64_t t36 = -576LL;

	t36 = ((x173/x174)*(x175/x176));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MAX;
	volatile int8_t x180 = -1;
	volatile uint64_t t37 = 6143LLU;

	t37 = ((x177/x178)*(x179/x180));

	if (t37 != 2162622LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x182 = INT32_MIN;
	int16_t x183 = -7960;
	volatile uint64_t t38 = 21LLU;

	t38 = ((x181/x182)*(x183/x184));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MAX;
	volatile int32_t x186 = 165672019;

	t39 = ((x185/x186)*(x187/x188));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = 122;
	static int16_t x191 = -1;
	static int8_t x192 = INT8_MIN;
	int32_t t40 = -6687535;

	t40 = ((x189/x190)*(x191/x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x195 = -1;
	volatile uint16_t x196 = 24U;
	static uint64_t t41 = 3367930LLU;

	t41 = ((x193/x194)*(x195/x196));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = -1;
	uint32_t x198 = UINT32_MAX;
	uint64_t x199 = 3045199540371912095LLU;
	uint64_t t42 = 68756LLU;

	t42 = ((x197/x198)*(x199/x200));

	if (t42 != 3758661697LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = 161;
	int64_t x203 = INT64_MAX;
	uint16_t x204 = UINT16_MAX;
	int64_t t43 = 1LL;

	t43 = ((x201/x202)*(x203/x204));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x209 = 779U;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = 68U;
	volatile int64_t t44 = -685444359056185385LL;

	t44 = ((x209/x210)*(x211/x212));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x213 = INT8_MIN;
	int32_t x214 = -1;
	static int8_t x216 = INT8_MIN;
	uint64_t t45 = 5LLU;

	t45 = ((x213/x214)*(x215/x216));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x217 = 4U;
	int16_t x220 = -5120;
	uint32_t t46 = 264553U;

	t46 = ((x217/x218)*(x219/x220));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x221 = -12;
	volatile int64_t x222 = INT64_MIN;
	static uint32_t x223 = UINT32_MAX;
	uint8_t x224 = 1U;
	int64_t t47 = -367523055958587LL;

	t47 = ((x221/x222)*(x223/x224));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = 0U;
	int64_t x226 = -1LL;
	int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;

	t48 = ((x225/x226)*(x227/x228));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = -1;
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = -26;
	int64_t x232 = -1LL;

	t49 = ((x229/x230)*(x231/x232));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x233 = INT8_MIN;
	uint64_t x234 = 789LLU;
	static int8_t x236 = INT8_MAX;
	volatile uint64_t t50 = 4068008854259534LLU;

	t50 = ((x233/x234)*(x235/x236));

	if (t50 != 116899518844800705LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = INT16_MIN;
	volatile uint64_t x238 = 16581507654877504LLU;
	volatile uint64_t t51 = 731658563614333941LLU;

	t51 = ((x237/x238)*(x239/x240));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = INT16_MIN;

	t52 = ((x241/x242)*(x243/x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x245 = 1U;
	int8_t x246 = 1;
	volatile uint64_t x247 = 57503234750344LLU;
	int32_t x248 = INT32_MIN;
	uint64_t t53 = 105508308985LLU;

	t53 = ((x245/x246)*(x247/x248));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	static int8_t x252 = 58;
	volatile int32_t t54 = 16;

	t54 = ((x249/x250)*(x251/x252));

	if (t54 != -564) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = -1;
	int64_t t55 = 497575180851957873LL;

	t55 = ((x253/x254)*(x255/x256));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x257 = UINT8_MAX;
	volatile int8_t x259 = -1;

	t56 = ((x257/x258)*(x259/x260));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x261 = UINT64_MAX;
	uint16_t x262 = 27728U;
	static int32_t x263 = INT32_MIN;
	static volatile uint32_t x264 = 291104200U;
	volatile uint64_t t57 = 2315564LLU;

	t57 = ((x261/x262)*(x263/x264));

	if (t57 != 4656924715665278LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = 160839190;
	int8_t x272 = -1;
	volatile uint64_t t58 = 391777LLU;

	t58 = ((x269/x270)*(x271/x272));

	if (t58 != 18446744073548712426LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x273 = 8;
	int16_t x274 = INT16_MAX;
	int16_t x275 = INT16_MAX;
	int16_t x276 = 654;
	int32_t t59 = 157353;

	t59 = ((x273/x274)*(x275/x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x277 = 2825901779827LL;
	int16_t x278 = -1;
	static int64_t x280 = 50647LL;

	t60 = ((x277/x278)*(x279/x280));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = INT32_MIN;
	uint16_t x282 = 715U;
	uint16_t x283 = 197U;
	uint64_t x284 = 1492432LLU;
	uint64_t t61 = 8LLU;

	t61 = ((x281/x282)*(x283/x284));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = -2667400742LL;
	int8_t x288 = INT8_MIN;
	static volatile int64_t t62 = -125945812204093180LL;

	t62 = ((x285/x286)*(x287/x288));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x292 = 1;

	t63 = ((x289/x290)*(x291/x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x295 = 1LLU;
	static uint64_t x296 = 26242619161916LLU;

	t64 = ((x293/x294)*(x295/x296));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = -18;
	int8_t x298 = INT8_MIN;
	volatile int32_t x299 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t65 = -9151459;

	t65 = ((x297/x298)*(x299/x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x301 = 320978LLU;
	int32_t x302 = INT32_MIN;
	int64_t x303 = -1LL;
	static int16_t x304 = INT16_MAX;
	volatile uint64_t t66 = 155LLU;

	t66 = ((x301/x302)*(x303/x304));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = -1;
	static volatile int64_t x306 = 1906187499344LL;
	static volatile int64_t t67 = -3123939LL;

	t67 = ((x305/x306)*(x307/x308));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x309 = 413U;
	static int16_t x310 = INT16_MIN;
	uint32_t x312 = UINT32_MAX;
	uint32_t t68 = 2U;

	t68 = ((x309/x310)*(x311/x312));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MAX;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = INT64_MIN;

	t69 = ((x313/x314)*(x315/x316));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	static uint32_t x318 = 64179U;
	int8_t x320 = INT8_MAX;
	static volatile uint32_t t70 = 1158038U;

	t70 = ((x317/x318)*(x319/x320));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = -213392879493LL;
	int32_t x326 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MIN;

	t71 = ((x325/x326)*(x327/x328));

	if (t71 != -99LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x333 = 403829578LLU;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = INT32_MIN;
	int32_t x336 = 40778082;
	static volatile uint64_t t72 = 1534LLU;

	t72 = ((x333/x334)*(x335/x336));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x337 = -1LL;
	int16_t x339 = INT16_MIN;
	static volatile int32_t x340 = INT32_MIN;
	int64_t t73 = 5643703LL;

	t73 = ((x337/x338)*(x339/x340));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = -36137012LL;
	static volatile int16_t x342 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	static volatile int64_t t74 = 47813893681713LL;

	t74 = ((x341/x342)*(x343/x344));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x345 = 4167143U;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = -1;
	uint32_t t75 = 1U;

	t75 = ((x345/x346)*(x347/x348));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x350 = INT8_MAX;
	uint64_t x351 = 489668506498LLU;
	uint64_t t76 = 2LLU;

	t76 = ((x349/x350)*(x351/x352));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x353 = INT8_MAX;
	int64_t x354 = -621LL;
	int8_t x356 = -58;
	static volatile int64_t t77 = 150635202020361LL;

	t77 = ((x353/x354)*(x355/x356));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x357 = 30990U;
	volatile int16_t x358 = -260;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = INT32_MIN;
	uint32_t t78 = 897767705U;

	t78 = ((x357/x358)*(x359/x360));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = INT64_MAX;
	static int32_t x362 = 66734;

	t79 = ((x361/x362)*(x363/x364));

	if (t79 != 1344378274979560957LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x365 = INT8_MAX;
	volatile uint8_t x367 = 9U;

	t80 = ((x365/x366)*(x367/x368));

	if (t80 != -1143) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x369 = INT64_MIN;
	static uint64_t x370 = 113214864244870430LLU;
	uint8_t x371 = 1U;
	int64_t x372 = INT64_MIN;
	uint64_t t81 = 1036829880511988742LLU;

	t81 = ((x369/x370)*(x371/x372));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x373 = 1U;
	static volatile int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t82 = 41037901363136LL;

	t82 = ((x373/x374)*(x375/x376));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x377 = -1;
	volatile int8_t x378 = 1;
	volatile uint8_t x379 = 13U;
	volatile uint32_t x380 = 82353U;

	t83 = ((x377/x378)*(x379/x380));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = 4U;
	static int64_t x382 = -9280LL;
	volatile int64_t x383 = -7LL;
	int64_t x384 = INT64_MIN;
	int64_t t84 = -47LL;

	t84 = ((x381/x382)*(x383/x384));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x385 = INT8_MIN;
	static int32_t x386 = INT32_MAX;
	int64_t x387 = -136412781760LL;
	static int16_t x388 = INT16_MIN;

	t85 = ((x385/x386)*(x387/x388));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x394 = -1;
	int64_t x395 = 25976393070183253LL;
	volatile int64_t t86 = -3322172860584804023LL;

	t86 = ((x393/x394)*(x395/x396));

	if (t86 != 10305575864025LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x397 = 41U;
	static int16_t x398 = 2242;

	t87 = ((x397/x398)*(x399/x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x401 = -1393;
	int8_t x402 = -7;
	int8_t x403 = -26;
	static int64_t x404 = INT64_MIN;
	volatile int64_t t88 = 2754936LL;

	t88 = ((x401/x402)*(x403/x404));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x405 = -6;
	uint8_t x406 = UINT8_MAX;
	int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MAX;
	int32_t t89 = -176794;

	t89 = ((x405/x406)*(x407/x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x409 = 16844581827764256LLU;
	uint8_t x412 = 1U;

	t90 = ((x409/x410)*(x411/x412));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = 36U;
	int64_t x418 = INT64_MIN;
	static uint32_t x419 = 2117020124U;
	uint16_t x420 = 23758U;
	static int64_t t91 = 2924649169388LL;

	t91 = ((x417/x418)*(x419/x420));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x423 = INT64_MAX;

	t92 = ((x421/x422)*(x423/x424));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x425 = 36221013LLU;
	volatile uint16_t x426 = 30U;
	int8_t x427 = INT8_MIN;
	static uint32_t x428 = 53321U;
	uint64_t t93 = 32545878964314333LLU;

	t93 = ((x425/x426)*(x427/x428));

	if (t93 != 97252204483LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x429 = 34133507541LLU;
	int64_t x430 = INT64_MIN;
	static uint16_t x432 = 7U;
	static uint64_t t94 = 86LLU;

	t94 = ((x429/x430)*(x431/x432));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x433 = INT64_MIN;
	int8_t x434 = 55;
	int32_t x435 = INT32_MIN;
	uint64_t x436 = UINT64_MAX;

	t95 = ((x433/x434)*(x435/x436));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = -11;
	volatile int32_t x438 = 3108;
	int16_t x439 = -1;
	int32_t t96 = -13;

	t96 = ((x437/x438)*(x439/x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x441 = 807U;
	volatile int32_t x442 = 3279;
	uint8_t x443 = 12U;
	volatile int64_t t97 = 157488375807LL;

	t97 = ((x441/x442)*(x443/x444));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = 83670417;
	volatile int64_t x446 = INT64_MIN;
	uint16_t x447 = 158U;
	uint64_t x448 = 315725LLU;
	volatile uint64_t t98 = 239115981058706LLU;

	t98 = ((x445/x446)*(x447/x448));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x449 = INT64_MAX;
	static volatile int64_t x450 = -1LL;
	int64_t t99 = 524674129LL;

	t99 = ((x449/x450)*(x451/x452));

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

