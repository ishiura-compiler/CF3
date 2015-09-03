#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 2172687365372738LLU;
int16_t x12 = INT16_MIN;
static int32_t t1 = 2;
volatile uint32_t x18 = 92U;
int16_t x30 = 74;
volatile int32_t t5 = -1;
volatile uint32_t x53 = 511U;
uint32_t x56 = 1149563064U;
int8_t x65 = 41;
volatile int32_t x73 = INT32_MIN;
int64_t x85 = -1LL;
int32_t x94 = -49;
int16_t x98 = -1;
int32_t t17 = 60958106;
volatile int32_t t18 = 107677;
int16_t x117 = INT16_MAX;
volatile int64_t t19 = -77810573848065LL;
volatile uint16_t x128 = UINT16_MAX;
static uint64_t x147 = UINT64_MAX;
uint64_t t23 = 1241478707905LLU;
int64_t x171 = INT64_MIN;
static int8_t x180 = -1;
int8_t x183 = 3;
int8_t x205 = INT8_MIN;
uint8_t x231 = UINT8_MAX;
uint16_t x235 = 15U;
int64_t t41 = -602LL;
volatile uint8_t x242 = 6U;
int16_t x260 = INT16_MIN;
volatile int8_t x261 = 1;
static uint32_t t46 = 1181U;
int32_t x281 = 54155;
static int64_t x284 = INT64_MIN;
volatile int64_t x289 = INT64_MAX;
static volatile int32_t x299 = INT32_MIN;
uint64_t x300 = 3169298976612136LLU;
static uint64_t x310 = 17985289LLU;
int16_t x313 = INT16_MIN;
static volatile int64_t x315 = -16262793671LL;
uint16_t x321 = UINT16_MAX;
volatile uint16_t x330 = 496U;
int32_t x345 = 161418883;
int16_t x346 = -1;
int8_t x349 = -1;
volatile int64_t x351 = INT64_MIN;
static int8_t x369 = INT8_MIN;
volatile uint8_t x372 = 1U;
static volatile uint64_t t67 = 2LLU;
int16_t x377 = INT16_MAX;
int64_t x383 = 11664058LL;
static uint8_t x392 = 11U;
uint64_t x398 = 8005503LLU;
int8_t x399 = INT8_MIN;
uint64_t t72 = 149LLU;
static volatile int32_t x416 = -27718066;
uint64_t t81 = 453LLU;
uint16_t x445 = 18U;
int8_t x449 = INT8_MAX;
uint64_t x454 = UINT64_MAX;
int16_t x455 = INT16_MIN;
volatile uint64_t t84 = 3772220278840LLU;
int64_t x459 = INT64_MAX;
static volatile int32_t x460 = INT32_MAX;
static uint16_t x461 = 1U;
static int64_t t86 = -26106968620720LL;
int16_t x478 = 1317;
volatile int32_t x479 = INT32_MIN;
int32_t x483 = INT32_MIN;
int8_t x492 = 14;
volatile uint8_t x495 = 7U;
static uint16_t x496 = 31U;
uint32_t t94 = 3U;
volatile int64_t t96 = 1811584704434372LL;
volatile int8_t x517 = INT8_MIN;


void f0(void) {
	uint8_t x2 = 14U;
	uint64_t x3 = UINT64_MAX;
	static uint32_t x4 = 398U;
	uint64_t t0 = 371LLU;

	t0 = ((x1+x2)-(x3-x4));

	if (t0 != 2172687365373151LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	static int32_t x10 = INT32_MAX;
	uint8_t x11 = UINT8_MAX;

	t1 = ((x9+x10)-(x11-x12));

	if (t1 != 2147417856) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = 0U;
	uint16_t x14 = UINT16_MAX;
	int32_t x15 = 566864780;
	uint32_t x16 = UINT32_MAX;
	uint32_t t2 = 1U;

	t2 = ((x13+x14)-(x15-x16));

	if (t2 != 3728168050U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -242LL;
	static uint64_t x19 = 444547653LLU;
	static volatile int8_t x20 = INT8_MIN;
	volatile uint64_t t3 = 60702159055LLU;

	t3 = ((x17+x18)-(x19-x20));

	if (t3 != 18446744073265003685LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -17830055000829192LL;
	static int64_t x22 = -1LL;
	int8_t x23 = INT8_MIN;
	int8_t x24 = -16;
	static int64_t t4 = 13159783152013LL;

	t4 = ((x21+x22)-(x23-x24));

	if (t4 != -17830055000829081LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MAX;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = UINT16_MAX;

	t5 = ((x29+x30)-(x31-x32));

	if (t5 != 98249) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = 7538;
	static int8_t x38 = INT8_MAX;
	int16_t x39 = 1;
	int8_t x40 = -1;
	volatile int32_t t6 = 2;

	t6 = ((x37+x38)-(x39-x40));

	if (t6 != 7663) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = -510;
	int16_t x50 = -1;
	int16_t x51 = -3706;
	uint64_t x52 = 26767481604633LLU;
	volatile uint64_t t7 = 59654063137LLU;

	t7 = ((x49+x50)-(x51-x52));

	if (t7 != 26767481607828LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x54 = 770750LLU;
	static uint8_t x55 = 54U;
	uint64_t t8 = 1778159692869617LLU;

	t8 = ((x53+x54)-(x55-x56));

	if (t8 != 18446744070564918591LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x66 = -1LL;
	uint64_t x67 = 415134435LLU;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t9 = 59418819LLU;

	t9 = ((x65+x66)-(x67-x68));

	if (t9 != 18446744071146933573LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x69 = INT64_MAX;
	static uint64_t x70 = 66772181727653841LLU;
	int16_t x71 = 0;
	int8_t x72 = -1;
	uint64_t t10 = 273224629863LLU;

	t10 = ((x69+x70)-(x71-x72));

	if (t10 != 9290144218582429647LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x74 = 1116LLU;
	int64_t x75 = 3599544719920389LL;
	uint32_t x76 = UINT32_MAX;
	volatile uint64_t t11 = 287251LLU;

	t11 = ((x73+x74)-(x75-x76));

	if (t11 != 18443144531137115990LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	static volatile int64_t x88 = INT64_MIN;
	int64_t t12 = -54960LL;

	t12 = ((x85+x86)-(x87-x88));

	if (t12 != -129LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x93 = 2049LLU;
	volatile uint64_t x95 = 43922736534804348LLU;
	int64_t x96 = INT64_MIN;
	uint64_t t13 = 501547867634313LLU;

	t13 = ((x93+x94)-(x95-x96));

	if (t13 != 9179449300319973460LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x97 = 5LLU;
	int32_t x99 = -28467129;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t14 = 38031378574LLU;

	t14 = ((x97+x98)-(x99-x100));

	if (t14 != 18446744071590535101LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x101 = 1U;
	uint32_t x102 = UINT32_MAX;
	static int16_t x103 = INT16_MAX;
	volatile int16_t x104 = INT16_MIN;
	uint32_t t15 = 165752610U;

	t15 = ((x101+x102)-(x103-x104));

	if (t15 != 4294901761U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x105 = INT8_MIN;
	static int32_t x106 = -1;
	volatile int8_t x107 = INT8_MAX;
	int16_t x108 = -1;
	volatile int32_t t16 = 1240;

	t16 = ((x105+x106)-(x107-x108));

	if (t16 != -257) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x109 = 2U;
	int16_t x110 = -1;
	static uint16_t x111 = 354U;
	uint8_t x112 = 6U;

	t17 = ((x109+x110)-(x111-x112));

	if (t17 != -347) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = -1;
	int16_t x114 = -5734;
	static int16_t x115 = INT16_MAX;
	uint8_t x116 = 6U;

	t18 = ((x113+x114)-(x115-x116));

	if (t18 != -38496) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x118 = INT64_MIN;
	int32_t x119 = -314467983;
	int16_t x120 = -121;

	t19 = ((x117+x118)-(x119-x120));

	if (t19 != -9223372036540275179LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x125 = 0U;
	uint16_t x126 = 122U;
	int8_t x127 = INT8_MIN;
	static int32_t t20 = -61925168;

	t20 = ((x125+x126)-(x127-x128));

	if (t20 != 65785) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x129 = 58U;
	static uint16_t x130 = 0U;
	int8_t x131 = -2;
	static int32_t x132 = 94481891;
	volatile int32_t t21 = -501471560;

	t21 = ((x129+x130)-(x131-x132));

	if (t21 != 94481951) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = -1;
	static int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MIN;
	static int16_t x136 = 33;
	static int32_t t22 = -116;

	t22 = ((x133+x134)-(x135-x136));

	if (t22 != 65567) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x145 = INT32_MIN;
	uint32_t x146 = 44693022U;
	static int32_t x148 = INT32_MIN;

	t23 = ((x145+x146)-(x147-x148));

	if (t23 != 44693023LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x153 = INT8_MAX;
	uint8_t x154 = 11U;
	int64_t x155 = 0LL;
	int32_t x156 = 11;
	static int64_t t24 = -531246LL;

	t24 = ((x153+x154)-(x155-x156));

	if (t24 != 149LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x157 = 49U;
	static int8_t x158 = 1;
	int16_t x159 = -1;
	int8_t x160 = -25;
	static uint32_t t25 = 21026336U;

	t25 = ((x157+x158)-(x159-x160));

	if (t25 != 26U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x161 = INT8_MIN;
	int8_t x162 = -10;
	int64_t x163 = 226560536149LL;
	uint16_t x164 = UINT16_MAX;
	volatile int64_t t26 = 5011491690522LL;

	t26 = ((x161+x162)-(x163-x164));

	if (t26 != -226560470752LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x165 = 0U;
	static uint64_t x166 = 38644425853LLU;
	int64_t x167 = -108901265023940005LL;
	volatile int64_t x168 = -1LL;
	static volatile uint64_t t27 = 0LLU;

	t27 = ((x165+x166)-(x167-x168));

	if (t27 != 108901303668365857LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x169 = UINT8_MAX;
	static volatile int16_t x170 = INT16_MIN;
	int16_t x172 = INT16_MIN;
	static int64_t t28 = -595476356LL;

	t28 = ((x169+x170)-(x171-x172));

	if (t28 != 9223372036854710527LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x173 = 7701136141LLU;
	volatile int64_t x174 = INT64_MIN;
	int32_t x175 = -1;
	int16_t x176 = INT16_MAX;
	volatile uint64_t t29 = 4LLU;

	t29 = ((x173+x174)-(x175-x176));

	if (t29 != 9223372044555944717LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x177 = 14;
	uint64_t x178 = 47088385LLU;
	int32_t x179 = -624421943;
	volatile uint64_t t30 = 716196368897381LLU;

	t30 = ((x177+x178)-(x179-x180));

	if (t30 != 671510341LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MAX;
	int64_t x184 = -1LL;
	volatile int64_t t31 = 403379LL;

	t31 = ((x181+x182)-(x183-x184));

	if (t31 != 250LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x185 = 6292258862LL;
	static volatile uint8_t x186 = 10U;
	uint16_t x187 = 26582U;
	int16_t x188 = INT16_MIN;
	static volatile int64_t t32 = 452603LL;

	t32 = ((x185+x186)-(x187-x188));

	if (t32 != 6292199522LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = -1;
	volatile uint8_t x190 = UINT8_MAX;
	static volatile int64_t x191 = INT64_MIN;
	static int32_t x192 = INT32_MIN;
	volatile int64_t t33 = 267724949184396LL;

	t33 = ((x189+x190)-(x191-x192));

	if (t33 != 9223372034707292414LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x193 = -1;
	int16_t x194 = -1134;
	int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MIN;
	volatile int32_t t34 = 146904;

	t34 = ((x193+x194)-(x195-x196));

	if (t34 != -1135) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x197 = 264U;
	uint64_t x198 = UINT64_MAX;
	static int64_t x199 = INT64_MAX;
	volatile uint8_t x200 = UINT8_MAX;
	volatile uint64_t t35 = 42210025566452847LLU;

	t35 = ((x197+x198)-(x199-x200));

	if (t35 != 9223372036854776327LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x206 = UINT16_MAX;
	volatile int64_t x207 = -1LL;
	uint8_t x208 = 4U;
	volatile int64_t t36 = -1402255978LL;

	t36 = ((x205+x206)-(x207-x208));

	if (t36 != 65412LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x221 = 104LLU;
	volatile int16_t x222 = INT16_MIN;
	int32_t x223 = -3618;
	int64_t x224 = -1LL;
	uint64_t t37 = 6890212729800896LLU;

	t37 = ((x221+x222)-(x223-x224));

	if (t37 != 18446744073709522569LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x225 = -7564347LL;
	volatile int16_t x226 = INT16_MIN;
	uint8_t x227 = 41U;
	static uint16_t x228 = 5U;
	volatile int64_t t38 = 67LL;

	t38 = ((x225+x226)-(x227-x228));

	if (t38 != -7597151LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x229 = -5877788127LL;
	volatile int8_t x230 = -22;
	uint64_t x232 = 178977381LLU;
	uint64_t t39 = 4550200599LLU;

	t39 = ((x229+x230)-(x231-x232));

	if (t39 != 18446744068010740593LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x233 = INT64_MIN;
	static int32_t x234 = INT32_MAX;
	volatile int32_t x236 = 2;
	int64_t t40 = 4120271226820132536LL;

	t40 = ((x233+x234)-(x235-x236));

	if (t40 != -9223372034707292174LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x237 = INT32_MIN;
	static volatile uint8_t x238 = UINT8_MAX;
	static uint8_t x239 = 0U;
	int64_t x240 = -1LL;

	t41 = ((x237+x238)-(x239-x240));

	if (t41 != -2147483394LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x241 = INT16_MIN;
	static int8_t x243 = -16;
	volatile int16_t x244 = INT16_MAX;
	volatile int32_t t42 = -13382;

	t42 = ((x241+x242)-(x243-x244));

	if (t42 != 21) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x253 = UINT32_MAX;
	volatile int16_t x254 = -1020;
	volatile uint8_t x255 = 1U;
	static uint32_t x256 = 4U;
	volatile uint32_t t43 = 2011875513U;

	t43 = ((x253+x254)-(x255-x256));

	if (t43 != 4294966278U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x257 = INT16_MAX;
	int16_t x258 = INT16_MIN;
	static int64_t x259 = INT64_MIN;
	int64_t t44 = 9277996313LL;

	t44 = ((x257+x258)-(x259-x260));

	if (t44 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x262 = -1;
	uint64_t x263 = 360747323952828LLU;
	int64_t x264 = -1LL;
	uint64_t t45 = 163451LLU;

	t45 = ((x261+x262)-(x263-x264));

	if (t45 != 18446383326385598787LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int8_t x266 = 22;
	uint16_t x267 = 11462U;
	uint8_t x268 = 24U;

	t46 = ((x265+x266)-(x267-x268));

	if (t46 != 4294955879U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x269 = 5897U;
	int16_t x270 = -14;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;
	static int32_t t47 = -52;

	t47 = ((x269+x270)-(x271-x272));

	if (t47 != 104186) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x273 = -1;
	int32_t x274 = 120;
	int16_t x275 = 10;
	int8_t x276 = INT8_MIN;
	int32_t t48 = -125;

	t48 = ((x273+x274)-(x275-x276));

	if (t48 != -19) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x277 = -1;
	uint64_t x278 = 1258LLU;
	int8_t x279 = 0;
	uint64_t x280 = 91898131LLU;
	uint64_t t49 = 474657LLU;

	t49 = ((x277+x278)-(x279-x280));

	if (t49 != 91899388LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x282 = -4;
	int8_t x283 = -14;
	volatile int64_t t50 = 124330795LL;

	t50 = ((x281+x282)-(x283-x284));

	if (t50 != -9223372036854721643LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x290 = INT64_MIN;
	int16_t x291 = INT16_MIN;
	uint64_t x292 = UINT64_MAX;
	uint64_t t51 = 30LLU;

	t51 = ((x289+x290)-(x291-x292));

	if (t51 != 32766LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x293 = 75100U;
	int8_t x294 = INT8_MAX;
	volatile int8_t x295 = INT8_MIN;
	volatile int64_t x296 = -27935LL;
	static volatile int64_t t52 = 241354375742LL;

	t52 = ((x293+x294)-(x295-x296));

	if (t52 != 47420LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x297 = 0;
	volatile int64_t x298 = -43LL;
	volatile uint64_t t53 = 939217695787074LLU;

	t53 = ((x297+x298)-(x299-x300));

	if (t53 != 3169301124095741LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x301 = -1;
	static uint32_t x302 = 193U;
	volatile int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	int64_t t54 = 17055298576LL;

	t54 = ((x301+x302)-(x303-x304));

	if (t54 != 192LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x309 = INT64_MIN;
	int8_t x311 = INT8_MIN;
	static volatile int16_t x312 = -1;
	uint64_t t55 = 38530428559655LLU;

	t55 = ((x309+x310)-(x311-x312));

	if (t55 != 9223372036872761224LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x314 = -1;
	int64_t x316 = INT64_MIN;
	int64_t t56 = -3202138413177395LL;

	t56 = ((x313+x314)-(x315-x316));

	if (t56 != -9223372020592014906LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x317 = -1;
	static int16_t x318 = 178;
	int8_t x319 = INT8_MIN;
	volatile int64_t x320 = INT64_MIN;
	int64_t t57 = 204LL;

	t57 = ((x317+x318)-(x319-x320));

	if (t57 != -9223372036854775503LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x322 = INT8_MAX;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = UINT8_MAX;
	static volatile int32_t t58 = 78605625;

	t58 = ((x321+x322)-(x323-x324));

	if (t58 != 98685) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x329 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	static uint64_t t59 = 379027113000LLU;

	t59 = ((x329+x330)-(x331-x332));

	if (t59 != 33135LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x337 = INT8_MIN;
	static uint64_t x338 = 233980364873031147LLU;
	int8_t x339 = 35;
	static volatile int8_t x340 = -40;
	uint64_t t60 = 20934100768LLU;

	t60 = ((x337+x338)-(x339-x340));

	if (t60 != 233980364873030944LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x341 = 0U;
	volatile int8_t x342 = -1;
	volatile uint32_t x343 = 2668U;
	int64_t x344 = -1LL;
	volatile int64_t t61 = 3489435792621LL;

	t61 = ((x341+x342)-(x343-x344));

	if (t61 != -2670LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t62 = 44861;

	t62 = ((x345+x346)-(x347-x348));

	if (t62 != 161418499) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x350 = -66053267;
	static int64_t x352 = INT64_MIN;
	int64_t t63 = 227816104LL;

	t63 = ((x349+x350)-(x351-x352));

	if (t63 != -66053268LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x353 = 13U;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = 38069774LLU;
	int16_t x356 = 1;
	static volatile uint64_t t64 = 247064963332019LLU;

	t64 = ((x353+x354)-(x355-x356));

	if (t64 != 18446744071523998208LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x361 = -14;
	static volatile int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MIN;
	int64_t x364 = -1LL;
	int64_t t65 = -1850219256881LL;

	t65 = ((x361+x362)-(x363-x364));

	if (t65 != 240LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x370 = INT16_MAX;
	uint64_t x371 = UINT64_MAX;
	static uint64_t t66 = 55012889LLU;

	t66 = ((x369+x370)-(x371-x372));

	if (t66 != 32641LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x373 = 1U;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	uint64_t x376 = 252326905LLU;

	t67 = ((x373+x374)-(x375-x376));

	if (t67 != 252261243LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x378 = 1066U;
	static int32_t x379 = -1663735;
	int16_t x380 = INT16_MIN;
	uint32_t t68 = 2230U;

	t68 = ((x377+x378)-(x379-x380));

	if (t68 != 1664800U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x381 = -1LL;
	int32_t x382 = 3522292;
	uint32_t x384 = 63984U;
	volatile int64_t t69 = 1LL;

	t69 = ((x381+x382)-(x383-x384));

	if (t69 != -8077783LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x385 = UINT32_MAX;
	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	int64_t x388 = -1LL;
	static volatile int64_t t70 = 19195LL;

	t70 = ((x385+x386)-(x387-x388));

	if (t70 != -9223372032559808386LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x389 = 6671750LL;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 57U;
	static volatile int64_t t71 = -6LL;

	t71 = ((x389+x390)-(x391-x392));

	if (t71 != 6638936LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x397 = 112132U;
	int8_t x400 = 10;

	t72 = ((x397+x398)-(x399-x400));

	if (t72 != 8117773LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x409 = -16643599492LL;
	static int32_t x410 = INT32_MAX;
	static uint16_t x411 = 933U;
	static int16_t x412 = INT16_MIN;
	int64_t t73 = 35423709981LL;

	t73 = ((x409+x410)-(x411-x412));

	if (t73 != -14496149546LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x413 = -1;
	static volatile int16_t x414 = -9879;
	int16_t x415 = INT16_MIN;
	int32_t t74 = 773;

	t74 = ((x413+x414)-(x415-x416));

	if (t74 != -27695178) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x417 = UINT32_MAX;
	volatile uint64_t x418 = 35LLU;
	volatile uint8_t x419 = UINT8_MAX;
	int32_t x420 = -472;
	uint64_t t75 = 52LLU;

	t75 = ((x417+x418)-(x419-x420));

	if (t75 != 4294966603LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x421 = UINT16_MAX;
	int32_t x422 = 1910;
	uint64_t x423 = UINT64_MAX;
	static uint8_t x424 = 83U;
	volatile uint64_t t76 = 230776756897450LLU;

	t76 = ((x421+x422)-(x423-x424));

	if (t76 != 67529LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x425 = 8;
	int64_t x426 = INT64_MIN;
	int16_t x427 = INT16_MIN;
	uint64_t x428 = 17366465LLU;
	volatile uint64_t t77 = 3015776556196268987LLU;

	t77 = ((x425+x426)-(x427-x428));

	if (t77 != 9223372036872175049LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x429 = INT8_MIN;
	int64_t x430 = -126LL;
	int8_t x431 = -1;
	volatile uint16_t x432 = UINT16_MAX;
	int64_t t78 = 953792908683LL;

	t78 = ((x429+x430)-(x431-x432));

	if (t78 != 65282LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x433 = -15540;
	int8_t x434 = -1;
	int64_t x435 = -1LL;
	int32_t x436 = -325;
	int64_t t79 = -591046234LL;

	t79 = ((x433+x434)-(x435-x436));

	if (t79 != -15865LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = INT32_MIN;
	int64_t x438 = -23350LL;
	static int16_t x439 = INT16_MIN;
	static uint8_t x440 = 89U;
	volatile int64_t t80 = 144346985213881988LL;

	t80 = ((x437+x438)-(x439-x440));

	if (t80 != -2147474141LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x441 = 6U;
	uint64_t x442 = 13LLU;
	static uint64_t x443 = 494317805155LLU;
	int8_t x444 = 0;

	t81 = ((x441+x442)-(x443-x444));

	if (t81 != 18446743579391746480LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x446 = UINT64_MAX;
	uint64_t x447 = 0LLU;
	int32_t x448 = -1;
	uint64_t t82 = 53415LLU;

	t82 = ((x445+x446)-(x447-x448));

	if (t82 != 16LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x450 = -1LL;
	volatile int8_t x451 = -1;
	volatile uint16_t x452 = 1677U;
	volatile int64_t t83 = 166941356185363LL;

	t83 = ((x449+x450)-(x451-x452));

	if (t83 != 1804LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x453 = INT8_MIN;
	int32_t x456 = -1;

	t84 = ((x453+x454)-(x455-x456));

	if (t84 != 32638LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x457 = INT64_MAX;
	static uint64_t x458 = 6LLU;
	volatile uint64_t t85 = 2LLU;

	t85 = ((x457+x458)-(x459-x460));

	if (t85 != 2147483653LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x462 = -1LL;
	uint16_t x463 = UINT16_MAX;
	static volatile int32_t x464 = -743606991;

	t86 = ((x461+x462)-(x463-x464));

	if (t86 != -743672526LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x465 = INT8_MIN;
	int32_t x466 = 0;
	volatile int16_t x467 = INT16_MAX;
	int32_t x468 = INT32_MAX;
	static volatile int32_t t87 = -33244216;

	t87 = ((x465+x466)-(x467-x468));

	if (t87 != 2147450752) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x477 = 6LLU;
	int64_t x480 = 55875938666LL;
	static volatile uint64_t t88 = 26299LLU;

	t88 = ((x477+x478)-(x479-x480));

	if (t88 != 58023423637LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x481 = 5U;
	static int32_t x482 = 4;
	int8_t x484 = -33;
	volatile int32_t t89 = -2994134;

	t89 = ((x481+x482)-(x483-x484));

	if (t89 != 2147483624) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x485 = INT16_MIN;
	int8_t x486 = -1;
	int16_t x487 = INT16_MAX;
	volatile int16_t x488 = -1;
	volatile int32_t t90 = -529761;

	t90 = ((x485+x486)-(x487-x488));

	if (t90 != -65537) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x489 = INT8_MIN;
	static uint8_t x490 = 6U;
	uint64_t x491 = 234855LLU;
	static uint64_t t91 = 6316735221LLU;

	t91 = ((x489+x490)-(x491-x492));

	if (t91 != 18446744073709316653LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x493 = 22U;
	static uint32_t x494 = 37909594U;
	uint32_t t92 = 2U;

	t92 = ((x493+x494)-(x495-x496));

	if (t92 != 37909640U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x501 = -6956;
	uint8_t x502 = 20U;
	volatile int64_t x503 = -1LL;
	int16_t x504 = 8128;
	int64_t t93 = 59188235018380LL;

	t93 = ((x501+x502)-(x503-x504));

	if (t93 != 1193LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x505 = 5U;
	int16_t x506 = -312;
	int16_t x507 = -1;
	static int32_t x508 = INT32_MIN;

	t94 = ((x505+x506)-(x507-x508));

	if (t94 != 2147483342U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x509 = 13606953050LLU;
	static uint8_t x510 = 6U;
	static uint64_t x511 = UINT64_MAX;
	static volatile int16_t x512 = 46;
	volatile uint64_t t95 = 1279287045903258871LLU;

	t95 = ((x509+x510)-(x511-x512));

	if (t95 != 13606953103LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x513 = INT32_MAX;
	int64_t x514 = 0LL;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = UINT16_MAX;

	t96 = ((x513+x514)-(x515-x516));

	if (t96 != 2147581950LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x518 = INT32_MAX;
	int8_t x519 = INT8_MIN;
	int16_t x520 = INT16_MIN;
	volatile int32_t t97 = 17;

	t97 = ((x517+x518)-(x519-x520));

	if (t97 != 2147450879) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x521 = -2;
	volatile int16_t x522 = -1;
	uint16_t x523 = UINT16_MAX;
	volatile uint32_t x524 = 3072381U;
	uint32_t t98 = 140025U;

	t98 = ((x521+x522)-(x523-x524));

	if (t98 != 3006843U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x525 = INT8_MIN;
	volatile int16_t x526 = 10;
	int32_t x527 = INT32_MIN;
	int16_t x528 = INT16_MIN;
	volatile int32_t t99 = -1856128;

	t99 = ((x525+x526)-(x527-x528));

	if (t99 != 2147450762) { NG(); } else { ; }
	
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

