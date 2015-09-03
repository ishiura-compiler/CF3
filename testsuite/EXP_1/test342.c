#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint16_t x4 = 16604U;
static int8_t x10 = -1;
static int32_t x35 = 2812467;
int16_t x41 = INT16_MAX;
uint64_t x47 = 15106868012711833LLU;
volatile int64_t t7 = -94394932210LL;
uint16_t x65 = 1U;
volatile uint64_t x66 = 1712681089216LLU;
int16_t x70 = INT16_MAX;
int32_t x76 = -1;
uint64_t x90 = 121LLU;
static int8_t x91 = -8;
int64_t x95 = -1LL;
uint64_t x98 = 1655LLU;
volatile int16_t x105 = INT16_MIN;
uint16_t x107 = 1U;
uint64_t t17 = 657831688148935LLU;
static int8_t x109 = INT8_MAX;
volatile int64_t x111 = -1LL;
uint16_t x137 = UINT16_MAX;
uint32_t x146 = UINT32_MAX;
uint64_t x162 = UINT64_MAX;
volatile uint64_t t27 = 38966056145093693LLU;
int32_t x179 = INT32_MIN;
volatile int8_t x181 = 1;
uint64_t t30 = 236021LLU;
int32_t x194 = -1;
volatile int16_t x196 = -1;
static int16_t x203 = -4065;
int16_t x210 = INT16_MIN;
static volatile int32_t t36 = 3359459;
int16_t x213 = INT16_MAX;
volatile uint8_t x215 = 28U;
int64_t t37 = -251LL;
static volatile uint64_t x225 = UINT64_MAX;
int8_t x228 = -1;
uint64_t t40 = 1984497898461LLU;
int8_t x246 = INT8_MAX;
int32_t x249 = -1;
int16_t x271 = -7798;
static int16_t x273 = -1;
int32_t x274 = -1;
volatile uint32_t x275 = UINT32_MAX;
volatile uint8_t x276 = 6U;
uint8_t x278 = UINT8_MAX;
static volatile uint8_t x279 = 0U;
volatile uint64_t t48 = 15542607675LLU;
int32_t x284 = INT32_MAX;
uint8_t x301 = 9U;
int64_t x303 = -1LL;
int64_t t51 = -303627353742935LL;
uint16_t x307 = 7U;
volatile int8_t x312 = 4;
volatile uint32_t x316 = 388419739U;
int16_t x320 = -1;
uint16_t x349 = UINT16_MAX;
int64_t x355 = -3047LL;
int8_t x357 = 27;
int16_t x366 = 7;
volatile int64_t x367 = INT64_MIN;
uint64_t x368 = UINT64_MAX;
static int8_t x371 = INT8_MIN;
static volatile uint64_t x385 = 965617366053624LLU;
int16_t x387 = INT16_MIN;
int32_t x398 = 1627237;
static int16_t x399 = 245;
static volatile uint32_t x406 = UINT32_MAX;
volatile uint32_t t66 = 338054U;
static uint16_t x414 = UINT16_MAX;
static int16_t x419 = 840;
int64_t x420 = -15860LL;
int64_t x427 = INT64_MIN;
uint32_t x432 = 32759009U;
volatile uint64_t t71 = 22201832747LLU;
static volatile int64_t x433 = -1LL;
int16_t x434 = -1;
static volatile int64_t x460 = -1LL;
static uint64_t x467 = 898LLU;
uint64_t x483 = UINT64_MAX;
int64_t x486 = -1LL;
volatile int32_t x488 = INT32_MIN;
int64_t t80 = -38427576275962LL;
volatile int8_t x490 = -36;
static int16_t x492 = INT16_MIN;
int32_t t81 = 28232534;
int32_t x496 = INT32_MIN;
int32_t x507 = INT32_MAX;
int16_t x517 = -5264;
uint32_t t84 = 2475249U;
uint32_t x522 = UINT32_MAX;
uint32_t t85 = 46992U;
int32_t x525 = -11;
int8_t x526 = -1;
uint32_t x549 = UINT32_MAX;
static uint64_t x558 = UINT64_MAX;
uint64_t t91 = 943609134LLU;
int32_t x566 = INT32_MIN;
static int8_t x569 = -1;
uint8_t x572 = 8U;
uint64_t x573 = 1LLU;
int16_t x578 = INT16_MAX;
volatile int32_t x580 = INT32_MIN;
static uint16_t x581 = 0U;
static int64_t t96 = -6694464147LL;
volatile uint16_t x587 = 462U;
uint32_t x593 = 57U;
uint16_t x595 = 1U;
int8_t x599 = -8;
static uint16_t x600 = UINT16_MAX;


void f0(void) {
	static int8_t x1 = -39;
	static volatile int8_t x2 = -1;
	int32_t t0 = -148615857;

	t0 = (((x1*x2)+x3)/x4);

	if (t0 != -129335) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = UINT32_MAX;
	volatile int32_t x11 = 5;
	int64_t x12 = INT64_MIN;
	volatile int64_t t1 = 5463678LL;

	t1 = (((x9*x10)+x11)/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MIN;
	int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = 5U;
	volatile int32_t t2 = -907312462;

	t2 = (((x13*x14)+x15)/x16);

	if (t2 != 214748339) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x29 = 122824608U;
	int32_t x30 = INT32_MIN;
	static uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MIN;
	volatile uint64_t t3 = 14234176648470LLU;

	t3 = (((x29*x30)+x31)/x32);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = -1;
	int64_t x34 = INT64_MAX;
	static int32_t x36 = INT32_MAX;
	volatile int64_t t4 = -710365LL;

	t4 = (((x33*x34)+x35)/x36);

	if (t4 != -4294967297LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x42 = INT16_MAX;
	volatile int8_t x43 = INT8_MIN;
	static uint32_t x44 = 3U;
	static volatile uint32_t t5 = 17127U;

	t5 = (((x41*x42)+x43)/x44);

	if (t5 != 357892053U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = 38;
	volatile int16_t x46 = -28;
	int8_t x48 = 3;
	volatile uint64_t t6 = 11836960501353601LLU;

	t6 = (((x45*x46)+x47)/x48);

	if (t6 != 5035622670903589LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x53 = -1LL;
	int16_t x54 = 16194;
	uint16_t x55 = 3U;
	static int32_t x56 = INT32_MIN;

	t7 = (((x53*x54)+x55)/x56);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x57 = -1LL;
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = -1LL;
	int32_t x60 = INT32_MAX;
	int64_t t8 = -6358475661619974LL;

	t8 = (((x57*x58)+x59)/x60);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x67 = UINT64_MAX;
	uint8_t x68 = 57U;
	volatile uint64_t t9 = 131288238408LLU;

	t9 = (((x65*x66)+x67)/x68);

	if (t9 != 30047036652LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = INT16_MAX;
	int16_t x71 = 29;
	uint32_t x72 = 124U;
	volatile uint32_t t10 = 138371499U;

	t10 = (((x69*x70)+x71)/x72);

	if (t10 != 8658679U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x73 = 117693323269LLU;
	int32_t x74 = -1;
	int8_t x75 = -1;
	uint64_t t11 = 4531256051005898698LLU;

	t11 = (((x73*x74)+x75)/x76);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MIN;
	static int8_t x78 = 6;
	volatile int32_t x79 = -1;
	uint16_t x80 = 6224U;
	volatile int32_t t12 = -4709109;

	t12 = (((x77*x78)+x79)/x80);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int32_t x92 = INT32_MIN;
	volatile uint64_t t13 = 34676140012671430LLU;

	t13 = (((x89*x90)+x91)/x92);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = INT8_MAX;
	uint16_t x94 = 2822U;
	int32_t x96 = INT32_MAX;
	int64_t t14 = 334201928LL;

	t14 = (((x93*x94)+x95)/x96);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = -1;
	int8_t x99 = INT8_MIN;
	int8_t x100 = -1;
	static volatile uint64_t t15 = 78934736643431214LLU;

	t15 = (((x97*x98)+x99)/x100);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x102 = INT16_MAX;
	uint16_t x103 = 191U;
	static volatile uint8_t x104 = UINT8_MAX;
	uint64_t t16 = 14890LLU;

	t16 = (((x101*x102)+x103)/x104);

	if (t16 != 72340172838076545LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x106 = UINT64_MAX;
	volatile uint8_t x108 = UINT8_MAX;

	t17 = (((x105*x106)+x107)/x108);

	if (t17 != 128LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x110 = UINT32_MAX;
	static volatile int8_t x112 = INT8_MIN;
	int64_t t18 = -1130957676LL;

	t18 = (((x109*x110)+x111)/x112);

	if (t18 != -33554431LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x125 = -1;
	int64_t x126 = -5424701LL;
	int64_t x127 = -43LL;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t19 = 54LL;

	t19 = (((x125*x126)+x127)/x128);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x129 = 0U;
	uint64_t x130 = UINT64_MAX;
	uint64_t x131 = 443308716LLU;
	uint16_t x132 = 214U;
	uint64_t t20 = 2072652082310LLU;

	t20 = (((x129*x130)+x131)/x132);

	if (t20 != 2071536LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x133 = -136810;
	uint64_t x134 = UINT64_MAX;
	volatile uint16_t x135 = 3U;
	volatile int32_t x136 = INT32_MIN;
	uint64_t t21 = 6585140838249LLU;

	t21 = (((x133*x134)+x135)/x136);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x138 = INT16_MAX;
	int32_t x139 = -1;
	int32_t x140 = INT32_MAX;
	volatile int32_t t22 = 9572280;

	t22 = (((x137*x138)+x139)/x140);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x145 = 20U;
	int8_t x147 = -22;
	static int64_t x148 = -1LL;
	int64_t t23 = -6LL;

	t23 = (((x145*x146)+x147)/x148);

	if (t23 != -4294967254LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = INT16_MAX;
	uint32_t x150 = 1488674U;
	volatile uint64_t x151 = 27553826LLU;
	volatile uint64_t x152 = 32LLU;
	uint64_t t24 = 125870188846634722LLU;

	t24 = (((x149*x150)+x151)/x152);

	if (t24 != 48821704LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x153 = INT8_MIN;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = 507289U;
	int32_t x156 = INT32_MIN;
	volatile uint32_t t25 = 5089894U;

	t25 = (((x153*x154)+x155)/x156);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x157 = 25022U;
	int16_t x158 = -23;
	static int64_t x159 = INT64_MIN;
	int16_t x160 = -1;
	int64_t t26 = 123799132795LL;

	t26 = (((x157*x158)+x159)/x160);

	if (t26 != 9223372032560384018LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x161 = UINT64_MAX;
	uint32_t x163 = 52150183U;
	uint8_t x164 = 111U;

	t27 = (((x161*x162)+x163)/x164);

	if (t27 != 469821LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x169 = 66220953233210260LLU;
	int32_t x170 = INT32_MIN;
	int32_t x171 = -558;
	volatile uint8_t x172 = UINT8_MAX;
	volatile uint64_t t28 = 101304LLU;

	t28 = (((x169*x170)+x171)/x172);

	if (t28 != 30214278614085613LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x177 = INT8_MIN;
	int32_t x178 = -1;
	int8_t x180 = INT8_MAX;
	volatile int32_t t29 = -546455126;

	t29 = (((x177*x178)+x179)/x180);

	if (t29 != -16909319) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x182 = -1;
	int64_t x183 = INT64_MAX;
	uint64_t x184 = UINT64_MAX;

	t30 = (((x181*x182)+x183)/x184);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x185 = 1U;
	int32_t x186 = -1;
	static int16_t x187 = INT16_MAX;
	volatile uint64_t x188 = 26114375109832LLU;
	volatile uint64_t t31 = 3425LLU;

	t31 = (((x185*x186)+x187)/x188);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x189 = 818992611118LLU;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	volatile uint64_t t32 = 12711289982161852LLU;

	t32 = (((x189*x190)+x191)/x192);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x193 = -1LL;
	uint32_t x195 = UINT32_MAX;
	volatile int64_t t33 = 1254042348425LL;

	t33 = (((x193*x194)+x195)/x196);

	if (t33 != -4294967296LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x201 = -795LL;
	int32_t x202 = INT32_MIN;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t34 = 945886LL;

	t34 = (((x201*x202)+x203)/x204);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x205 = -4421831382LL;
	static uint16_t x206 = 5721U;
	volatile int32_t x207 = INT32_MIN;
	volatile uint64_t x208 = UINT64_MAX;
	static volatile uint64_t t35 = 7LLU;

	t35 = (((x205*x206)+x207)/x208);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x209 = 0;
	int32_t x211 = -3575;
	int32_t x212 = -1;

	t36 = (((x209*x210)+x211)/x212);

	if (t36 != 3575) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x214 = -1;
	static int64_t x216 = INT64_MIN;

	t37 = (((x213*x214)+x215)/x216);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x217 = 94921804LLU;
	int64_t x218 = INT64_MIN;
	uint64_t x219 = UINT64_MAX;
	uint64_t x220 = UINT64_MAX;
	uint64_t t38 = 2053412896808LLU;

	t38 = (((x217*x218)+x219)/x220);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x221 = 1U;
	volatile int8_t x222 = -1;
	static int8_t x223 = -1;
	static uint32_t x224 = 98677U;
	static uint32_t t39 = 3431U;

	t39 = (((x221*x222)+x223)/x224);

	if (t39 != 43525U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x226 = -1;
	int64_t x227 = 340373990859581LL;

	t40 = (((x225*x226)+x227)/x228);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x229 = 141868800428789LL;
	int8_t x230 = INT8_MAX;
	int32_t x231 = INT32_MAX;
	int16_t x232 = INT16_MIN;
	int64_t t41 = -118LL;

	t41 = (((x229*x230)+x231)/x232);

	if (t41 != -549845575010LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x233 = 0U;
	uint64_t x234 = UINT64_MAX;
	int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MIN;
	uint64_t t42 = 7LLU;

	t42 = (((x233*x234)+x235)/x236);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x241 = UINT8_MAX;
	static int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MAX;
	int16_t x244 = -1;
	volatile int32_t t43 = 98;

	t43 = (((x241*x242)+x243)/x244);

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = -1;
	int64_t x247 = -1LL;
	int16_t x248 = -90;
	static volatile int64_t t44 = -398889251874398LL;

	t44 = (((x245*x246)+x247)/x248);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x250 = -1;
	int64_t x251 = INT64_MIN;
	uint64_t x252 = 151LLU;
	static uint64_t t45 = 7743932011449700834LLU;

	t45 = (((x249*x250)+x251)/x252);

	if (t45 != 61081934018905800LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x269 = -1;
	volatile uint32_t x270 = 9U;
	static int64_t x272 = -1LL;
	int64_t t46 = 32513LL;

	t46 = (((x269*x270)+x271)/x272);

	if (t46 != -4294959489LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t t47 = 39956U;

	t47 = (((x273*x274)+x275)/x276);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x277 = 21LLU;
	uint32_t x280 = 491698U;

	t48 = (((x277*x278)+x279)/x280);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = 41;
	uint64_t x283 = 796500924661LLU;
	volatile uint64_t t49 = 2268647811741658419LLU;

	t49 = (((x281*x282)+x283)/x284);

	if (t49 != 370LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x293 = INT16_MAX;
	static int16_t x294 = -1;
	int32_t x295 = INT32_MAX;
	static int32_t x296 = INT32_MAX;
	static volatile int32_t t50 = 34562889;

	t50 = (((x293*x294)+x295)/x296);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x302 = 52U;
	int64_t x304 = INT64_MIN;

	t51 = (((x301*x302)+x303)/x304);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x305 = 1;
	int16_t x306 = -1;
	static int64_t x308 = INT64_MAX;
	int64_t t52 = 24574LL;

	t52 = (((x305*x306)+x307)/x308);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x309 = 2;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MAX;
	volatile uint32_t t53 = 189476U;

	t53 = (((x309*x310)+x311)/x312);

	if (t53 != 8191U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x313 = -1;
	int32_t x314 = -1;
	int32_t x315 = INT32_MIN;
	uint32_t t54 = 264122442U;

	t54 = (((x313*x314)+x315)/x316);

	if (t54 != 5U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x317 = 14366500094700561LLU;
	volatile int16_t x318 = -3;
	static uint64_t x319 = 128468328804LLU;
	volatile uint64_t t55 = 144266992025762287LLU;

	t55 = (((x317*x318)+x319)/x320);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x345 = INT16_MAX;
	int8_t x346 = INT8_MIN;
	static volatile int16_t x347 = INT16_MIN;
	static volatile int64_t x348 = -1LL;
	int64_t t56 = -197229LL;

	t56 = (((x345*x346)+x347)/x348);

	if (t56 != 4226944LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x350 = UINT64_MAX;
	static uint32_t x351 = 4U;
	volatile int8_t x352 = -1;
	volatile uint64_t t57 = 99625859491280605LLU;

	t57 = (((x349*x350)+x351)/x352);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = INT16_MAX;
	int32_t x356 = 32389;
	int64_t t58 = -4133543126025702LL;

	t58 = (((x353*x354)+x355)/x356);

	if (t58 != 66299LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x358 = 12379257662651LLU;
	uint8_t x359 = 0U;
	static volatile uint64_t x360 = 245835541LLU;
	uint64_t t59 = 231852871678LLU;

	t59 = (((x357*x358)+x359)/x360);

	if (t59 != 1359607LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x365 = UINT32_MAX;
	uint64_t t60 = 1466278737967541LLU;

	t60 = (((x365*x366)+x367)/x368);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x369 = 176LLU;
	int32_t x370 = INT32_MIN;
	static int16_t x372 = 13;
	volatile uint64_t t61 = 97918575LLU;

	t61 = (((x369*x370)+x371)/x372);

	if (t61 != 1418980284288648418LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x381 = 536358962702935178LLU;
	int16_t x382 = INT16_MAX;
	uint8_t x383 = 75U;
	uint64_t x384 = 565056LLU;
	uint64_t t62 = 1438010347035LLU;

	t62 = (((x381*x382)+x383)/x384);

	if (t62 != 24021995546607LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x386 = INT32_MIN;
	int8_t x388 = -37;
	uint64_t t63 = 1098418LLU;

	t63 = (((x385*x386)+x387)/x388);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x389 = 21375958U;
	static int16_t x390 = -16259;
	volatile int64_t x391 = -1LL;
	int16_t x392 = 1546;
	int64_t t64 = 187443222493LL;

	t64 = (((x389*x390)+x391)/x392);

	if (t64 != 220342LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x397 = -1;
	static int16_t x400 = INT16_MIN;
	int32_t t65 = 1;

	t65 = (((x397*x398)+x399)/x400);

	if (t65 != 49) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x405 = UINT8_MAX;
	int8_t x407 = INT8_MIN;
	static int32_t x408 = -1;

	t66 = (((x405*x406)+x407)/x408);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x409 = 42;
	static uint32_t x410 = UINT32_MAX;
	uint8_t x411 = UINT8_MAX;
	int64_t x412 = 2757332927437491LL;
	volatile int64_t t67 = -3141469809LL;

	t67 = (((x409*x410)+x411)/x412);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x413 = 12532791LL;
	volatile int32_t x415 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	int64_t t68 = -361LL;

	t68 = (((x413*x414)+x415)/x416);

	if (t68 != -24999663LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x417 = INT8_MIN;
	int64_t x418 = 11775640LL;
	volatile int64_t t69 = 0LL;

	t69 = (((x417*x418)+x419)/x420);

	if (t69 != 95036LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x425 = -1;
	volatile int16_t x426 = -1;
	static int32_t x428 = INT32_MIN;
	volatile int64_t t70 = 7617161436LL;

	t70 = (((x425*x426)+x427)/x428);

	if (t70 != 4294967295LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x429 = -1;
	uint8_t x430 = UINT8_MAX;
	uint64_t x431 = UINT64_MAX;

	t71 = (((x429*x430)+x431)/x432);

	if (t71 != 563104460019LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x435 = INT8_MIN;
	static int16_t x436 = -1;
	volatile int64_t t72 = -1603LL;

	t72 = (((x433*x434)+x435)/x436);

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x445 = UINT8_MAX;
	static uint64_t x446 = UINT64_MAX;
	volatile uint8_t x447 = 6U;
	volatile uint8_t x448 = UINT8_MAX;
	volatile uint64_t t73 = 114585439734LLU;

	t73 = (((x445*x446)+x447)/x448);

	if (t73 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x457 = 12990U;
	int8_t x458 = 26;
	static volatile int8_t x459 = INT8_MIN;
	volatile int64_t t74 = -19410907239195430LL;

	t74 = (((x457*x458)+x459)/x460);

	if (t74 != -337612LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x461 = 24678U;
	static volatile uint8_t x462 = UINT8_MAX;
	int16_t x463 = -474;
	int8_t x464 = -1;
	uint32_t t75 = 231U;

	t75 = (((x461*x462)+x463)/x464);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x465 = UINT64_MAX;
	static int32_t x466 = -1;
	static int64_t x468 = INT64_MIN;
	uint64_t t76 = 121539763436869909LLU;

	t76 = (((x465*x466)+x467)/x468);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x469 = -1;
	int32_t x470 = -1;
	uint64_t x471 = 9000391270511236748LLU;
	int16_t x472 = -1;
	volatile uint64_t t77 = 1LLU;

	t77 = (((x469*x470)+x471)/x472);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x473 = 2249909031235LLU;
	int16_t x474 = 103;
	uint8_t x475 = 1U;
	int32_t x476 = INT32_MIN;
	volatile uint64_t t78 = 3728792623LLU;

	t78 = (((x473*x474)+x475)/x476);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x481 = -4669;
	volatile uint8_t x482 = 1U;
	static int16_t x484 = -1;
	static volatile uint64_t t79 = 8431550354215129LLU;

	t79 = (((x481*x482)+x483)/x484);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x485 = 7223LL;
	volatile uint32_t x487 = 14994U;

	t80 = (((x485*x486)+x487)/x488);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x489 = 6U;
	static volatile int32_t x491 = -30783110;

	t81 = (((x489*x490)+x491)/x492);

	if (t81 != 939) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x493 = INT8_MIN;
	volatile uint16_t x494 = UINT16_MAX;
	static int32_t x495 = INT32_MAX;
	int32_t t82 = 139;

	t82 = (((x493*x494)+x495)/x496);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x505 = INT8_MIN;
	uint8_t x506 = 6U;
	int8_t x508 = -1;
	volatile int32_t t83 = 2916778;

	t83 = (((x505*x506)+x507)/x508);

	if (t83 != -2147482879) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x518 = INT8_MIN;
	static volatile uint32_t x519 = 0U;
	int8_t x520 = INT8_MAX;

	t84 = (((x517*x518)+x519)/x520);

	if (t84 != 5305U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x521 = 28761912U;
	int32_t x523 = INT32_MIN;
	uint16_t x524 = 26U;

	t85 = (((x521*x522)+x523)/x524);

	if (t85 != 81489297U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x527 = UINT32_MAX;
	static int64_t x528 = 33269891435LL;
	static int64_t t86 = 224LL;

	t86 = (((x525*x526)+x527)/x528);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x529 = 2U;
	volatile int32_t x530 = -85041;
	volatile int64_t x531 = -17940423LL;
	int16_t x532 = -1;
	static volatile int64_t t87 = 248695314LL;

	t87 = (((x529*x530)+x531)/x532);

	if (t87 != 18110505LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x545 = UINT32_MAX;
	uint16_t x546 = 3U;
	int32_t x547 = 1;
	int32_t x548 = INT32_MAX;
	uint32_t t88 = 32U;

	t88 = (((x545*x546)+x547)/x548);

	if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x550 = INT32_MAX;
	volatile int8_t x551 = -1;
	int32_t x552 = INT32_MIN;
	uint32_t t89 = 0U;

	t89 = (((x549*x550)+x551)/x552);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x553 = -964034026;
	uint32_t x554 = UINT32_MAX;
	volatile int32_t x555 = INT32_MAX;
	int32_t x556 = INT32_MIN;
	volatile uint32_t t90 = 127798U;

	t90 = (((x553*x554)+x555)/x556);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x557 = 20U;
	uint8_t x559 = 16U;
	uint16_t x560 = 14U;

	t91 = (((x557*x558)+x559)/x560);

	if (t91 != 1317624576693539400LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x565 = 54LL;
	int8_t x567 = -32;
	int16_t x568 = 1;
	volatile int64_t t92 = -28120LL;

	t92 = (((x565*x566)+x567)/x568);

	if (t92 != -115964117024LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x570 = -1;
	uint8_t x571 = 2U;
	volatile int32_t t93 = -780829141;

	t93 = (((x569*x570)+x571)/x572);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x574 = -22;
	static int8_t x575 = INT8_MAX;
	int32_t x576 = INT32_MIN;
	static uint64_t t94 = 4940804638725LLU;

	t94 = (((x573*x574)+x575)/x576);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x577 = 12588U;
	int64_t x579 = INT64_MIN;
	int64_t t95 = -6423602LL;

	t95 = (((x577*x578)+x579)/x580);

	if (t95 != 4294967295LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x582 = 65LL;
	int64_t x583 = INT64_MIN;
	int8_t x584 = 4;

	t96 = (((x581*x582)+x583)/x584);

	if (t96 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x585 = INT32_MAX;
	int64_t x586 = 476807503LL;
	int16_t x588 = INT16_MIN;
	volatile int64_t t97 = 1LL;

	t97 = (((x585*x586)+x587)/x588);

	if (t97 != -31248056502057LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x594 = UINT8_MAX;
	volatile int16_t x596 = INT16_MIN;
	static volatile uint32_t t98 = 11U;

	t98 = (((x593*x594)+x595)/x596);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x597 = 16;
	volatile int16_t x598 = INT16_MAX;
	int32_t t99 = 20164;

	t99 = (((x597*x598)+x599)/x600);

	if (t99 != 7) { NG(); } else { ; }
	
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

