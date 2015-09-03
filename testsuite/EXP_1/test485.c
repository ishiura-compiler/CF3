#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 623LLU;
int16_t x16 = INT16_MAX;
volatile int64_t x17 = -1LL;
uint64_t x19 = 486386718594612LLU;
static int32_t x20 = -1;
uint64_t t3 = 11080841871831578LLU;
int16_t x22 = 1;
int8_t x25 = 1;
static volatile uint16_t x29 = 1U;
uint32_t x31 = 16110147U;
uint16_t x32 = 30U;
int8_t x35 = INT8_MIN;
int16_t x39 = INT16_MIN;
int32_t x49 = -1;
static uint32_t x67 = UINT32_MAX;
int8_t x74 = INT8_MIN;
int64_t x88 = -1007311169869LL;
volatile uint64_t t17 = 138004249008062LLU;
static int8_t x98 = INT8_MAX;
volatile int8_t x108 = -1;
volatile int8_t x112 = -1;
volatile uint64_t x128 = 78553899397861LLU;
uint16_t x130 = 12432U;
uint8_t x131 = 0U;
volatile int64_t t26 = 9101841LL;
int64_t x134 = INT64_MAX;
uint64_t t30 = 6942061261993105LLU;
int32_t x174 = -1;
volatile int64_t x175 = 136742802056778LL;
static volatile int64_t t32 = 396158635055527914LL;
uint32_t x177 = 202929U;
int16_t x178 = 36;
uint64_t t33 = 1066461033LLU;
int32_t x183 = INT32_MIN;
static uint8_t x187 = 8U;
volatile uint32_t t36 = 152376U;
int8_t x194 = INT8_MAX;
int8_t x195 = 1;
volatile uint32_t t37 = 1861U;
uint64_t t38 = 67211328383862101LLU;
static volatile int32_t x223 = INT32_MIN;
int8_t x226 = 0;
int32_t t45 = -4698;
uint32_t x247 = 122U;
int16_t x251 = -1;
int8_t x252 = INT8_MIN;
int16_t x258 = -1;
static int64_t x278 = -66554344609600597LL;
uint16_t x294 = 416U;
int16_t x297 = -79;
int8_t x298 = -1;
int16_t x311 = INT16_MIN;
volatile int64_t x315 = INT64_MIN;
uint16_t x316 = UINT16_MAX;
uint32_t x318 = UINT32_MAX;
volatile uint16_t x323 = 9479U;
int8_t x340 = -1;
int64_t x351 = INT64_MIN;
volatile int64_t t66 = 121532LL;
volatile int64_t x357 = -1LL;
int8_t x370 = INT8_MIN;
int64_t t71 = 28LL;
int32_t t72 = 107914343;
uint32_t x382 = UINT32_MAX;
static int8_t x384 = INT8_MAX;
uint64_t x390 = UINT64_MAX;
int16_t x393 = -31;
int16_t x398 = INT16_MAX;
uint32_t t79 = 247214495U;
uint8_t x409 = UINT8_MAX;
int16_t x410 = INT16_MIN;
int16_t x428 = -1;
uint16_t x440 = 6279U;
int64_t t82 = 964160228546LL;
static int64_t x452 = -5LL;
int8_t x462 = 1;
int8_t x464 = -1;
static int32_t x465 = 51045;
int16_t x469 = INT16_MIN;
uint32_t x470 = UINT32_MAX;
int16_t x471 = -1;
volatile uint8_t x476 = UINT8_MAX;
uint64_t x477 = 9LLU;
static uint32_t x479 = UINT32_MAX;
static volatile uint64_t t89 = 1LLU;
static int32_t x494 = INT32_MIN;
volatile int64_t x496 = 11LL;
int32_t x510 = 5482;
int32_t x516 = -1;
volatile int64_t t95 = INT64_MAX;
int64_t t96 = -52014406513212LL;
uint8_t x524 = UINT8_MAX;
static volatile uint16_t x535 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = 581446894LLU;
	uint32_t x2 = 47343488U;
	volatile int8_t x3 = INT8_MIN;
	static int8_t x4 = INT8_MIN;

	t0 = (((x1*x2)|x3)/x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = UINT32_MAX;
	uint8_t x10 = UINT8_MAX;
	int8_t x11 = INT8_MIN;
	int64_t x12 = -713422868719579LL;
	volatile int64_t t1 = 37259054205LL;

	t1 = (((x9*x10)|x11)/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MIN;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 232U;
	uint64_t t2 = 24904LLU;

	t2 = (((x13*x14)|x15)/x16);

	if (t2 != 65538LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x18 = 1;

	t3 = (((x17*x18)|x19)/x20);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -1LL;
	static int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	volatile int64_t t4 = 139984815225137972LL;

	t4 = (((x21*x22)|x23)/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x26 = INT32_MIN;
	volatile int64_t x27 = -1LL;
	int8_t x28 = INT8_MAX;
	volatile int64_t t5 = -2LL;

	t5 = (((x25*x26)|x27)/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x30 = 1U;
	uint32_t t6 = 12U;

	t6 = (((x29*x30)|x31)/x32);

	if (t6 != 537004U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MIN;
	uint64_t x34 = UINT64_MAX;
	int32_t x36 = -1;
	uint64_t t7 = 11190747LLU;

	t7 = (((x33*x34)|x35)/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x37 = 8;
	static int8_t x38 = INT8_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t8 = 280875186LLU;

	t8 = (((x37*x38)|x39)/x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x45 = 62U;
	volatile uint16_t x46 = 1U;
	uint16_t x47 = 167U;
	static uint8_t x48 = UINT8_MAX;
	volatile int32_t t9 = -24;

	t9 = (((x45*x46)|x47)/x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x50 = UINT32_MAX;
	uint64_t x51 = UINT64_MAX;
	volatile int8_t x52 = -1;
	uint64_t t10 = 987892LLU;

	t10 = (((x49*x50)|x51)/x52);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	uint64_t x54 = 10314941LLU;
	volatile int16_t x55 = -6603;
	static uint32_t x56 = 22U;
	uint64_t t11 = 5908206968021314LLU;

	t11 = (((x53*x54)|x55)/x56);

	if (t11 != 838488366986797500LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	uint64_t x62 = 7193LLU;
	static int16_t x63 = 18;
	int64_t x64 = INT64_MAX;
	uint64_t t12 = 1411466LLU;

	t12 = (((x61*x62)|x63)/x64);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	uint32_t x68 = UINT32_MAX;
	static volatile uint32_t t13 = 96280244U;

	t13 = (((x65*x66)|x67)/x68);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x69 = 2U;
	volatile int16_t x70 = INT16_MIN;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = 305928LL;
	int64_t t14 = -32639979984LL;

	t14 = (((x69*x70)|x71)/x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x73 = 43996440795LLU;
	volatile int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MAX;
	volatile uint64_t t15 = 180306352986LLU;

	t15 = (((x73*x74)|x75)/x76);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -1;
	static uint64_t x78 = UINT64_MAX;
	int32_t x79 = INT32_MAX;
	int32_t x80 = -1;
	static volatile uint64_t t16 = 11716948LLU;

	t16 = (((x77*x78)|x79)/x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = 50429;
	uint64_t x86 = 209807269421LLU;
	int16_t x87 = 20;

	t17 = (((x85*x86)|x87)/x88);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x93 = 3LLU;
	uint32_t x94 = 88535U;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t18 = 18768018661LLU;

	t18 = (((x93*x94)|x95)/x96);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = INT16_MAX;
	volatile int16_t x99 = INT16_MIN;
	volatile uint64_t x100 = 363384LLU;
	static volatile uint64_t t19 = 986404810933211LLU;

	t19 = (((x97*x98)|x99)/x100);

	if (t19 != 50763776263428LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = 188173;
	uint32_t x102 = 199U;
	uint64_t x103 = UINT64_MAX;
	uint64_t x104 = UINT64_MAX;
	static volatile uint64_t t20 = 113LLU;

	t20 = (((x101*x102)|x103)/x104);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -32;
	static int16_t x106 = 7;
	uint8_t x107 = 17U;
	static int32_t t21 = 9543981;

	t21 = (((x105*x106)|x107)/x108);

	if (t21 != 207) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x109 = UINT64_MAX;
	int16_t x110 = 1;
	static uint64_t x111 = 514296706123LLU;
	uint64_t t22 = 796261245097940LLU;

	t22 = (((x109*x110)|x111)/x112);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = -5;
	int8_t x118 = -2;
	uint64_t x119 = 124420LLU;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t23 = 1271879989376917LLU;

	t23 = (((x117*x118)|x119)/x120);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x121 = UINT64_MAX;
	volatile uint32_t x122 = 3964614U;
	static int64_t x123 = INT64_MIN;
	uint16_t x124 = 4U;
	volatile uint64_t t24 = 406888264104511893LLU;

	t24 = (((x121*x122)|x123)/x124);

	if (t24 != 4611686018426396750LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = -1;
	int8_t x126 = -1;
	int64_t x127 = -64185LL;
	volatile uint64_t t25 = 25714320LLU;

	t25 = (((x125*x126)|x127)/x128);

	if (t25 != 234829LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = 26822896873LL;
	volatile int16_t x132 = 2;

	t26 = (((x129*x130)|x131)/x132);

	if (t26 != 166731126962568LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x133 = -1;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = UINT8_MAX;
	int64_t t27 = 1LL;

	t27 = (((x133*x134)|x135)/x136);

	if (t27 != -8421504LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = -1;
	int8_t x150 = 1;
	volatile int32_t x151 = -2925;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t28 = 54158708;

	t28 = (((x149*x150)|x151)/x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x157 = 36;
	uint64_t x158 = 7780945409252LLU;
	volatile int32_t x159 = INT32_MIN;
	static int16_t x160 = -1;
	uint64_t t29 = 688327501424LLU;

	t29 = (((x157*x158)|x159)/x160);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x161 = 246419164LLU;
	int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MAX;
	static int16_t x164 = -3547;

	t30 = (((x161*x162)|x163)/x164);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = -1;
	volatile int16_t x170 = INT16_MAX;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = 41761305470650LLU;
	static volatile uint64_t t31 = 378279489013246058LLU;

	t31 = (((x169*x170)|x171)/x172);

	if (t31 != 441718LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x173 = INT8_MIN;
	int16_t x176 = INT16_MAX;

	t32 = (((x173*x174)|x175)/x176);

	if (t32 != 4173186500LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MIN;

	t33 = (((x177*x178)|x179)/x180);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int16_t x182 = -1;
	static uint16_t x184 = UINT16_MAX;
	uint32_t t34 = 27680360U;

	t34 = (((x181*x182)|x183)/x184);

	if (t34 != 32768U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x185 = 1U;
	uint64_t x186 = UINT64_MAX;
	static volatile int64_t x188 = INT64_MIN;
	uint64_t t35 = 2332629304LLU;

	t35 = (((x185*x186)|x187)/x188);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = -1;
	uint8_t x190 = 22U;
	static uint32_t x191 = 988746221U;
	uint16_t x192 = 6U;

	t36 = (((x189*x190)|x191)/x192);

	if (t36 != 715827879U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x193 = UINT32_MAX;
	int8_t x196 = 21;

	t37 = (((x193*x194)|x195)/x196);

	if (t37 != 204522246U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = INT32_MAX;
	uint64_t x198 = 389369LLU;
	static volatile uint8_t x199 = 1U;
	int64_t x200 = INT64_MIN;

	t38 = (((x197*x198)|x199)/x200);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x205 = 32400437745LLU;
	static int64_t x206 = INT64_MAX;
	int64_t x207 = -8280769771511LL;
	uint8_t x208 = 43U;
	static volatile uint64_t t39 = 1420LLU;

	t39 = (((x205*x206)|x207)/x208);

	if (t39 != 428994048225768174LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x209 = 36364;
	int8_t x210 = 21;
	static int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	static volatile int64_t t40 = 20851069645747LL;

	t40 = (((x209*x210)|x211)/x212);

	if (t40 != 72057594037921970LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x217 = 11U;
	volatile uint16_t x218 = 21310U;
	int32_t x219 = -527244;
	int32_t x220 = INT32_MIN;
	int32_t t41 = 201137;

	t41 = (((x217*x218)|x219)/x220);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = -12723951;
	volatile uint8_t x222 = 3U;
	int16_t x224 = INT16_MIN;
	int32_t t42 = -2;

	t42 = (((x221*x222)|x223)/x224);

	if (t42 != 1164) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = INT8_MIN;
	int32_t x227 = 40234237;
	int32_t x228 = -1;
	static int32_t t43 = -12603;

	t43 = (((x225*x226)|x227)/x228);

	if (t43 != -40234237) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x229 = -1;
	volatile int32_t x230 = -1;
	uint8_t x231 = 0U;
	uint8_t x232 = 24U;
	volatile int32_t t44 = -130055460;

	t44 = (((x229*x230)|x231)/x232);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = 253;
	uint16_t x234 = 7255U;
	static int8_t x235 = -1;
	int16_t x236 = INT16_MIN;

	t45 = (((x233*x234)|x235)/x236);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x237 = INT8_MIN;
	uint32_t x238 = 3673U;
	int32_t x239 = INT32_MIN;
	static int64_t x240 = INT64_MAX;
	volatile int64_t t46 = 827LL;

	t46 = (((x237*x238)|x239)/x240);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = -60;
	int32_t x246 = -1;
	static int64_t x248 = INT64_MAX;
	volatile int64_t t47 = -1576235929994622190LL;

	t47 = (((x245*x246)|x247)/x248);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x249 = 0;
	int16_t x250 = 306;
	static volatile int32_t t48 = -925;

	t48 = (((x249*x250)|x251)/x252);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = 106U;
	int8_t x254 = 0;
	volatile uint8_t x255 = 4U;
	int32_t x256 = INT32_MIN;
	volatile uint32_t t49 = 91179027U;

	t49 = (((x253*x254)|x255)/x256);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x257 = INT8_MAX;
	static int16_t x259 = -15951;
	volatile int64_t x260 = INT64_MIN;
	int64_t t50 = -118447LL;

	t50 = (((x257*x258)|x259)/x260);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x261 = 2041U;
	uint8_t x262 = 52U;
	uint16_t x263 = 11164U;
	int64_t x264 = -1LL;
	int64_t t51 = 1LL;

	t51 = (((x261*x262)|x263)/x264);

	if (t51 != -114588LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x265 = 122U;
	int8_t x266 = INT8_MAX;
	static int8_t x267 = -1;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t52 = 5784278076LLU;

	t52 = (((x265*x266)|x267)/x268);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x269 = 785020567LLU;
	volatile int16_t x270 = -2;
	int32_t x271 = -1;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t53 = 15023800257LLU;

	t53 = (((x269*x270)|x271)/x272);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x277 = 3461762116392964LLU;
	int8_t x279 = INT8_MAX;
	int32_t x280 = INT32_MIN;
	volatile uint64_t t54 = 20077196930754LLU;

	t54 = (((x277*x278)|x279)/x280);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x281 = UINT64_MAX;
	uint16_t x282 = 727U;
	int64_t x283 = INT64_MAX;
	volatile int32_t x284 = -847141462;
	static volatile uint64_t t55 = 24153863590LLU;

	t55 = (((x281*x282)|x283)/x284);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x285 = -9;
	uint8_t x286 = 5U;
	static int64_t x287 = -1519409281782LL;
	volatile uint32_t x288 = 16316289U;
	volatile int64_t t56 = -38933907LL;

	t56 = (((x285*x286)|x287)/x288);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x289 = 80U;
	uint32_t x290 = 129030340U;
	volatile int16_t x291 = -1;
	static uint64_t x292 = 1094633411519LLU;
	static uint64_t t57 = 22624666704736872LLU;

	t57 = (((x289*x290)|x291)/x292);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x293 = -1;
	uint32_t x295 = 14U;
	int64_t x296 = INT64_MAX;
	int64_t t58 = 16939LL;

	t58 = (((x293*x294)|x295)/x296);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x299 = 62U;
	uint64_t x300 = 833063153699983LLU;
	static volatile uint64_t t59 = 121518891920623LLU;

	t59 = (((x297*x298)|x299)/x300);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x309 = INT32_MIN;
	uint32_t x310 = 90074111U;
	volatile uint64_t x312 = 83200150128469927LLU;
	uint64_t t60 = 9791803624LLU;

	t60 = (((x309*x310)|x311)/x312);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x313 = 82426329416LLU;
	int64_t x314 = INT64_MAX;
	volatile uint64_t t61 = 571427251766859LLU;

	t61 = (((x313*x314)|x315)/x316);

	if (t61 != 281479270485743LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x317 = -1;
	int16_t x319 = INT16_MIN;
	int32_t x320 = -1;
	static volatile uint32_t t62 = 113081289U;

	t62 = (((x317*x318)|x319)/x320);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x321 = 48;
	static int8_t x322 = INT8_MAX;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t63 = -903;

	t63 = (((x321*x322)|x323)/x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = -1LL;
	int8_t x338 = -1;
	int8_t x339 = INT8_MAX;
	int64_t t64 = -78766995270LL;

	t64 = (((x337*x338)|x339)/x340);

	if (t64 != -127LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x341 = 104U;
	volatile uint8_t x342 = UINT8_MAX;
	int64_t x343 = -1LL;
	static uint64_t x344 = 1LLU;
	uint64_t t65 = UINT64_MAX;

	t65 = (((x341*x342)|x343)/x344);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x349 = UINT8_MAX;
	int16_t x350 = INT16_MIN;
	uint8_t x352 = UINT8_MAX;

	t66 = (((x349*x350)|x351)/x352);

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = -3720532252031LL;
	static volatile int64_t x355 = -1LL;
	uint16_t x356 = 11U;
	volatile int64_t t67 = 13LL;

	t67 = (((x353*x354)|x355)/x356);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x358 = 11U;
	int16_t x359 = -1;
	int8_t x360 = INT8_MIN;
	int64_t t68 = 486LL;

	t68 = (((x357*x358)|x359)/x360);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x361 = 111566U;
	static volatile int8_t x362 = -1;
	static int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MAX;
	uint32_t t69 = 137U;

	t69 = (((x361*x362)|x363)/x364);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = 352U;
	static int32_t x367 = INT32_MIN;
	static int16_t x368 = 6605;
	static volatile int32_t t70 = -1;

	t70 = (((x365*x366)|x367)/x368);

	if (t70 != -1746) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x369 = 3U;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;

	t71 = (((x369*x370)|x371)/x372);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x373 = UINT16_MAX;
	uint16_t x374 = 12U;
	int32_t x375 = INT32_MIN;
	volatile int8_t x376 = -1;

	t72 = (((x373*x374)|x375)/x376);

	if (t72 != 2146697228) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x377 = INT32_MIN;
	int64_t x378 = -23066LL;
	int64_t x379 = -1LL;
	volatile uint32_t x380 = 212478073U;
	static volatile int64_t t73 = 4160453627154535874LL;

	t73 = (((x377*x378)|x379)/x380);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = 6;
	volatile uint16_t x383 = 1436U;
	volatile uint32_t t74 = 6393U;

	t74 = (((x381*x382)|x383)/x384);

	if (t74 != 33818640U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x385 = UINT64_MAX;
	static uint32_t x386 = UINT32_MAX;
	uint16_t x387 = 0U;
	volatile int32_t x388 = INT32_MAX;
	static volatile uint64_t t75 = 16407810988LLU;

	t75 = (((x385*x386)|x387)/x388);

	if (t75 != 8589934594LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x389 = INT16_MAX;
	int16_t x391 = -1;
	uint32_t x392 = 3527U;
	volatile uint64_t t76 = 3591111LLU;

	t76 = (((x389*x390)|x391)/x392);

	if (t76 != 5230151424357684LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x394 = INT16_MIN;
	int32_t x395 = -1;
	volatile int64_t x396 = INT64_MAX;
	static volatile int64_t t77 = -112029509LL;

	t77 = (((x393*x394)|x395)/x396);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x397 = UINT32_MAX;
	static int16_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	volatile uint32_t t78 = 1734U;

	t78 = (((x397*x398)|x399)/x400);

	if (t78 != 65537U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x401 = -1;
	int8_t x402 = -5;
	static int8_t x403 = INT8_MIN;
	uint32_t x404 = UINT32_MAX;

	t79 = (((x401*x402)|x403)/x404);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x411 = -17515008;
	uint16_t x412 = 518U;
	volatile int32_t t80 = -2;

	t80 = (((x409*x410)|x411)/x412);

	if (t80 != -1424) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x425 = 7U;
	int32_t x426 = -145200531;
	static uint8_t x427 = 43U;
	static volatile int32_t t81 = 27;

	t81 = (((x425*x426)|x427)/x428);

	if (t81 != 1016403717) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x437 = -1LL;
	int16_t x438 = -589;
	int64_t x439 = -1LL;

	t82 = (((x437*x438)|x439)/x440);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x441 = UINT16_MAX;
	volatile uint32_t x442 = UINT32_MAX;
	volatile int64_t x443 = -7LL;
	uint32_t x444 = 4U;
	int64_t t83 = 103483745LL;

	t83 = (((x441*x442)|x443)/x444);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x449 = 1;
	static int8_t x450 = INT8_MAX;
	int16_t x451 = INT16_MIN;
	static int64_t t84 = 7917557LL;

	t84 = (((x449*x450)|x451)/x452);

	if (t84 != 6528LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x461 = -10;
	static int8_t x463 = INT8_MIN;
	volatile int32_t t85 = 46077744;

	t85 = (((x461*x462)|x463)/x464);

	if (t85 != 10) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x466 = 1;
	int64_t x467 = 571918878084486LL;
	int8_t x468 = INT8_MIN;
	volatile int64_t t86 = -38774086LL;

	t86 = (((x465*x466)|x467)/x468);

	if (t86 != -4468116235167LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x472 = UINT64_MAX;
	uint64_t t87 = 48LLU;

	t87 = (((x469*x470)|x471)/x472);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x473 = INT16_MAX;
	volatile int8_t x474 = INT8_MIN;
	int32_t x475 = INT32_MAX;
	static volatile int32_t t88 = -3942;

	t88 = (((x473*x474)|x475)/x476);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x478 = 0U;
	int32_t x480 = INT32_MIN;

	t89 = (((x477*x478)|x479)/x480);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x481 = INT32_MIN;
	int64_t x482 = 203LL;
	int8_t x483 = INT8_MIN;
	uint32_t x484 = 12U;
	int64_t t90 = -132724849546LL;

	t90 = (((x481*x482)|x483)/x484);

	if (t90 != -10LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x485 = UINT32_MAX;
	uint32_t x486 = UINT32_MAX;
	uint8_t x487 = UINT8_MAX;
	int32_t x488 = -1;
	volatile uint32_t t91 = 192314612U;

	t91 = (((x485*x486)|x487)/x488);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x493 = 321276U;
	int64_t x495 = -137439956300LL;
	static int64_t t92 = -428357866345LL;

	t92 = (((x493*x494)|x495)/x496);

	if (t92 != -12494541481LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x501 = UINT8_MAX;
	int8_t x502 = 41;
	int64_t x503 = -1LL;
	static uint8_t x504 = 23U;
	int64_t t93 = -1518386721LL;

	t93 = (((x501*x502)|x503)/x504);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x509 = INT16_MIN;
	volatile uint8_t x511 = 109U;
	uint8_t x512 = UINT8_MAX;
	int32_t t94 = 244;

	t94 = (((x509*x510)|x511)/x512);

	if (t94 != -704447) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x513 = -1;
	int8_t x514 = -1;
	int64_t x515 = INT64_MIN;

	t95 = (((x513*x514)|x515)/x516);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x517 = 31501156LL;
	volatile int16_t x518 = -1;
	static int8_t x519 = -1;
	uint32_t x520 = 323339U;

	t96 = (((x517*x518)|x519)/x520);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x521 = -1LL;
	uint32_t x522 = 3344U;
	static int64_t x523 = -1LL;
	int64_t t97 = 7496674683802571LL;

	t97 = (((x521*x522)|x523)/x524);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x529 = INT8_MIN;
	int16_t x530 = INT16_MAX;
	int16_t x531 = 0;
	volatile int64_t x532 = 37LL;
	static int64_t t98 = -1436LL;

	t98 = (((x529*x530)|x531)/x532);

	if (t98 != -113356LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x533 = -1;
	volatile int64_t x534 = 587446288127LL;
	int16_t x536 = INT16_MIN;
	static int64_t t99 = -530463693729LL;

	t99 = (((x533*x534)|x535)/x536);

	if (t99 != 17927436LL) { NG(); } else { ; }
	
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

