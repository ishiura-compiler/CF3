#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x19 = -1;
volatile uint32_t t0 = 6752U;
int8_t x32 = INT8_MAX;
int64_t x33 = INT64_MAX;
uint8_t x45 = 49U;
int32_t x54 = INT32_MIN;
volatile int64_t t7 = 2LL;
uint8_t x69 = 6U;
int16_t x70 = INT16_MAX;
int8_t x81 = INT8_MAX;
int16_t x82 = -1;
static volatile int32_t t13 = -1;
int64_t x88 = INT64_MIN;
uint16_t x109 = 262U;
static uint64_t x110 = 250763197633LLU;
int32_t x111 = INT32_MIN;
int32_t t15 = 1;
static uint64_t x113 = UINT64_MAX;
uint16_t x115 = UINT16_MAX;
int8_t x123 = 15;
int64_t x148 = INT64_MIN;
static int64_t t20 = 34369LL;
int8_t x155 = INT8_MIN;
int8_t x157 = 1;
static int8_t x159 = -1;
volatile int32_t t23 = -5323729;
int32_t t24 = 194223;
uint64_t x183 = UINT64_MAX;
volatile uint32_t t25 = 59U;
static volatile uint64_t x185 = UINT64_MAX;
uint16_t x192 = 3092U;
static int64_t x208 = INT64_MIN;
uint8_t x211 = 27U;
int16_t x230 = 1819;
int32_t t33 = 1;
int16_t x250 = INT16_MIN;
int8_t x252 = INT8_MAX;
static int32_t x259 = INT32_MIN;
int16_t x263 = 1583;
static volatile int8_t x273 = 8;
static int8_t x274 = 1;
uint64_t x297 = UINT64_MAX;
int64_t x299 = INT64_MIN;
volatile int32_t t43 = -4053;
uint64_t x338 = UINT64_MAX;
uint32_t x346 = 395675U;
volatile int64_t x347 = INT64_MAX;
uint64_t x352 = 25483089278LLU;
int8_t x368 = 1;
static volatile uint64_t x371 = UINT64_MAX;
int8_t x392 = INT8_MAX;
volatile uint64_t t53 = 95810799872570724LLU;
volatile int32_t x419 = INT32_MIN;
int64_t x422 = INT64_MIN;
uint32_t t57 = 98430U;
volatile int32_t t58 = -43187;
volatile int16_t x442 = -1;
uint32_t x444 = UINT32_MAX;
volatile uint32_t t60 = 80793U;
volatile uint32_t x448 = 50179U;
uint64_t x457 = UINT64_MAX;
int8_t x459 = INT8_MIN;
int8_t x473 = INT8_MAX;
int32_t x486 = INT32_MIN;
uint64_t x493 = 1899471582LLU;
static int64_t x501 = INT64_MAX;
int32_t x504 = INT32_MAX;
uint64_t x505 = UINT64_MAX;
volatile int16_t x507 = -1;
static int32_t x509 = 88759;
volatile int32_t t72 = 222672943;
int8_t x520 = -1;
uint16_t x521 = UINT16_MAX;
uint32_t x530 = 75004U;
int32_t x542 = 160159;
uint32_t x545 = 42673615U;
int16_t x548 = 2;
int16_t x561 = INT16_MAX;
uint8_t x563 = 2U;
volatile int32_t x580 = 108748003;
volatile uint32_t t82 = 6594U;
volatile uint32_t t84 = 29861U;
volatile int16_t x596 = INT16_MAX;
int8_t x601 = INT8_MAX;
volatile int16_t x604 = 86;
uint32_t x605 = UINT32_MAX;
uint32_t t87 = 306U;
volatile int64_t t88 = 0LL;
volatile uint8_t x628 = UINT8_MAX;
int64_t x634 = INT64_MIN;
int32_t x637 = INT32_MAX;
uint16_t x638 = 5543U;
uint32_t x655 = UINT32_MAX;
uint64_t t93 = 26032LLU;
volatile int64_t t95 = 4779390699388957LL;
uint8_t x675 = 1U;
int64_t x678 = 235709220466643434LL;
volatile int32_t x687 = INT32_MIN;


void f0(void) {
	static uint32_t x17 = 0U;
	static uint8_t x18 = 7U;
	static volatile uint16_t x20 = 825U;

	t0 = ((x17>>(x18==x19))%x20);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x21 = 170814601LLU;
	int16_t x22 = 26;
	int16_t x23 = -1;
	int64_t x24 = INT64_MIN;
	static volatile uint64_t t1 = 129538LLU;

	t1 = ((x21>>(x22==x23))%x24);

	if (t1 != 170814601LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x25 = 89U;
	int32_t x26 = INT32_MAX;
	static uint16_t x27 = 3U;
	int64_t x28 = INT64_MAX;
	volatile int64_t t2 = 1275509435539LL;

	t2 = ((x25>>(x26==x27))%x28);

	if (t2 != 89LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = 62LL;
	volatile uint8_t x31 = 41U;
	int32_t t3 = -113880021;

	t3 = ((x29>>(x30==x31))%x32);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x34 = 734;
	static uint32_t x35 = 478996U;
	int16_t x36 = INT16_MAX;
	volatile int64_t t4 = -16339434130LL;

	t4 = ((x33>>(x34==x35))%x36);

	if (t4 != 7LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x46 = UINT8_MAX;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = 5199;
	volatile int32_t t5 = 110392;

	t5 = ((x45>>(x46==x47))%x48);

	if (t5 != 49) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x49 = INT64_MAX;
	int8_t x50 = 2;
	int64_t x51 = INT64_MIN;
	static int16_t x52 = -1;
	volatile int64_t t6 = 78657LL;

	t6 = ((x49>>(x50==x51))%x52);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x53 = INT64_MAX;
	int8_t x55 = -6;
	int32_t x56 = INT32_MAX;

	t7 = ((x53>>(x54==x55))%x56);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x57 = UINT8_MAX;
	static volatile int8_t x58 = -41;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t8 = -384498608;

	t8 = ((x57>>(x58==x59))%x60);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x61 = UINT64_MAX;
	uint16_t x62 = 149U;
	int64_t x63 = INT64_MAX;
	int64_t x64 = 1374491924372190LL;
	uint64_t t9 = 14598253950962LLU;

	t9 = ((x61>>(x62==x63))%x64);

	if (t9 != 1062448634761815LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x71 = INT32_MIN;
	int16_t x72 = -1;
	int32_t t10 = 57;

	t10 = ((x69>>(x70==x71))%x72);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t11 = 927507;

	t11 = ((x73>>(x74==x75))%x76);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = 493458894844LL;
	uint8_t x78 = 8U;
	int32_t x79 = INT32_MAX;
	static uint64_t x80 = 996371LLU;
	uint64_t t12 = 81708785507987LLU;

	t12 = ((x77>>(x78==x79))%x80);

	if (t12 != 178868LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x83 = 203776U;
	uint16_t x84 = 1032U;

	t13 = ((x81>>(x82==x83))%x84);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x85 = INT64_MAX;
	volatile uint64_t x86 = UINT64_MAX;
	int8_t x87 = INT8_MIN;
	int64_t t14 = INT64_MAX;

	t14 = ((x85>>(x86==x87))%x88);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x112 = INT32_MAX;

	t15 = ((x109>>(x110==x111))%x112);

	if (t15 != 262) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x114 = INT32_MIN;
	uint64_t x116 = 10664007LLU;
	volatile uint64_t t16 = 2229115LLU;

	t16 = ((x113>>(x114==x115))%x116);

	if (t16 != 9493824LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x121 = 418609361285838939LLU;
	static volatile int16_t x122 = INT16_MIN;
	int8_t x124 = -2;
	volatile uint64_t t17 = 3199025385LLU;

	t17 = ((x121>>(x122==x123))%x124);

	if (t17 != 418609361285838939LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x129 = 1834117U;
	uint8_t x130 = 6U;
	uint8_t x131 = UINT8_MAX;
	volatile int16_t x132 = INT16_MIN;
	static volatile uint32_t t18 = 2U;

	t18 = ((x129>>(x130==x131))%x132);

	if (t18 != 1834117U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x133 = 376407774564192LLU;
	static volatile int16_t x134 = -11;
	int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MIN;
	volatile uint64_t t19 = 227608816740LLU;

	t19 = ((x133>>(x134==x135))%x136);

	if (t19 != 376407774564192LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x145 = UINT32_MAX;
	uint64_t x146 = 31172466454875279LLU;
	static uint64_t x147 = 13LLU;

	t20 = ((x145>>(x146==x147))%x148);

	if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MAX;
	volatile int64_t t21 = -6987841LL;

	t21 = ((x149>>(x150==x151))%x152);

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x153 = 5U;
	uint64_t x154 = UINT64_MAX;
	static uint16_t x156 = 20U;
	volatile int32_t t22 = -320;

	t22 = ((x153>>(x154==x155))%x156);

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x158 = INT16_MAX;
	int16_t x160 = INT16_MAX;

	t23 = ((x157>>(x158==x159))%x160);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x165 = 5U;
	volatile uint8_t x166 = 0U;
	int8_t x167 = INT8_MIN;
	uint16_t x168 = 305U;

	t24 = ((x165>>(x166==x167))%x168);

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x181 = 181U;
	uint16_t x182 = 940U;
	int8_t x184 = -1;

	t25 = ((x181>>(x182==x183))%x184);

	if (t25 != 181U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x186 = 16412715LLU;
	volatile int16_t x187 = -1;
	volatile int16_t x188 = INT16_MIN;
	volatile uint64_t t26 = 124241625853430LLU;

	t26 = ((x185>>(x186==x187))%x188);

	if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x189 = 2763036LL;
	int16_t x190 = INT16_MIN;
	uint8_t x191 = 27U;
	static volatile int64_t t27 = -1445365764LL;

	t27 = ((x189>>(x190==x191))%x192);

	if (t27 != 1880LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x193 = UINT8_MAX;
	int64_t x194 = INT64_MIN;
	volatile uint64_t x195 = 202784LLU;
	static int32_t x196 = -3066;
	volatile int32_t t28 = 198;

	t28 = ((x193>>(x194==x195))%x196);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x205 = 0U;
	volatile int64_t x206 = -1248672582789239LL;
	int8_t x207 = INT8_MAX;
	int64_t t29 = 533747490LL;

	t29 = ((x205>>(x206==x207))%x208);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x209 = 3239U;
	volatile uint32_t x210 = 3U;
	static volatile int16_t x212 = INT16_MIN;
	uint32_t t30 = 9587U;

	t30 = ((x209>>(x210==x211))%x212);

	if (t30 != 3239U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x217 = 86U;
	int16_t x218 = 0;
	static int32_t x219 = -1;
	int8_t x220 = -25;
	int32_t t31 = 2288115;

	t31 = ((x217>>(x218==x219))%x220);

	if (t31 != 11) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x229 = UINT8_MAX;
	volatile uint64_t x231 = 891247353LLU;
	int16_t x232 = -24;
	int32_t t32 = 452300;

	t32 = ((x229>>(x230==x231))%x232);

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x233 = INT32_MAX;
	int8_t x234 = -1;
	int32_t x235 = -1;
	volatile int8_t x236 = 1;

	t33 = ((x233>>(x234==x235))%x236);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x249 = INT64_MAX;
	int64_t x251 = -1LL;
	static int64_t t34 = -10452LL;

	t34 = ((x249>>(x250==x251))%x252);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x257 = 2352923875292699801LL;
	volatile uint64_t x258 = UINT64_MAX;
	uint64_t x260 = 55473469111579LLU;
	volatile uint64_t t35 = 84LLU;

	t35 = ((x257>>(x258==x259))%x260);

	if (t35 != 16682925076516LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x261 = 63U;
	int8_t x262 = -1;
	int64_t x264 = -1LL;
	volatile int64_t t36 = 131550LL;

	t36 = ((x261>>(x262==x263))%x264);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x265 = 0U;
	uint64_t x266 = UINT64_MAX;
	static uint8_t x267 = 1U;
	int8_t x268 = INT8_MIN;
	int32_t t37 = 5;

	t37 = ((x265>>(x266==x267))%x268);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x275 = 0U;
	static volatile int8_t x276 = INT8_MAX;
	static volatile int32_t t38 = -674760;

	t38 = ((x273>>(x274==x275))%x276);

	if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x277 = 3U;
	volatile int32_t x278 = 0;
	static int64_t x279 = INT64_MIN;
	static volatile int64_t x280 = INT64_MIN;
	static volatile int64_t t39 = -23320812184LL;

	t39 = ((x277>>(x278==x279))%x280);

	if (t39 != 3LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x298 = 1318252LLU;
	static int64_t x300 = INT64_MAX;
	static volatile uint64_t t40 = 3134709986451034LLU;

	t40 = ((x297>>(x298==x299))%x300);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x309 = INT8_MAX;
	static int64_t x310 = -3623023366195LL;
	int16_t x311 = INT16_MAX;
	static int32_t x312 = 3;
	int32_t t41 = -68;

	t41 = ((x309>>(x310==x311))%x312);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x313 = INT32_MAX;
	volatile int32_t x314 = -7414723;
	int8_t x315 = INT8_MIN;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t42 = -2;

	t42 = ((x313>>(x314==x315))%x316);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x321 = 0U;
	static volatile int32_t x322 = -1;
	int32_t x323 = 0;
	static int8_t x324 = -1;

	t43 = ((x321>>(x322==x323))%x324);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x337 = UINT8_MAX;
	uint8_t x339 = 31U;
	static int64_t x340 = -1LL;
	int64_t t44 = 2813356748697LL;

	t44 = ((x337>>(x338==x339))%x340);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x345 = UINT32_MAX;
	int32_t x348 = -1316;
	volatile uint32_t t45 = 123U;

	t45 = ((x345>>(x346==x347))%x348);

	if (t45 != 1315U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x349 = INT8_MAX;
	uint64_t x350 = 74985790823281044LLU;
	int32_t x351 = INT32_MAX;
	uint64_t t46 = 2060871076785346428LLU;

	t46 = ((x349>>(x350==x351))%x352);

	if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x357 = 0U;
	int32_t x358 = -278862;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MAX;
	uint32_t t47 = 112415U;

	t47 = ((x357>>(x358==x359))%x360);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x365 = 648321U;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = UINT32_MAX;
	uint32_t t48 = 12303388U;

	t48 = ((x365>>(x366==x367))%x368);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x370 = 4617;
	volatile int8_t x372 = -1;
	uint64_t t49 = 106LLU;

	t49 = ((x369>>(x370==x371))%x372);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x373 = 1047994484320342172LL;
	int64_t x374 = -192929181243LL;
	int32_t x375 = -121689079;
	int16_t x376 = -1;
	int64_t t50 = 0LL;

	t50 = ((x373>>(x374==x375))%x376);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x381 = INT32_MAX;
	int64_t x382 = INT64_MIN;
	int32_t x383 = -540334;
	static uint16_t x384 = 11588U;
	volatile int32_t t51 = 1;

	t51 = ((x381>>(x382==x383))%x384);

	if (t51 != 7075) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x385 = 0U;
	volatile int64_t x386 = INT64_MAX;
	uint8_t x387 = 8U;
	int8_t x388 = INT8_MIN;
	volatile int32_t t52 = 8283032;

	t52 = ((x385>>(x386==x387))%x388);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x389 = 13LLU;
	int64_t x390 = -1LL;
	int8_t x391 = 7;

	t53 = ((x389>>(x390==x391))%x392);

	if (t53 != 13LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x393 = UINT32_MAX;
	static volatile int64_t x394 = INT64_MIN;
	volatile uint32_t x395 = 7U;
	uint16_t x396 = UINT16_MAX;
	uint32_t t54 = 144497U;

	t54 = ((x393>>(x394==x395))%x396);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x405 = INT16_MAX;
	static uint16_t x406 = 2U;
	static int8_t x407 = 0;
	volatile uint32_t x408 = UINT32_MAX;
	uint32_t t55 = 179649U;

	t55 = ((x405>>(x406==x407))%x408);

	if (t55 != 32767U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x417 = UINT16_MAX;
	volatile int16_t x418 = 390;
	int16_t x420 = -3176;
	volatile int32_t t56 = 32385315;

	t56 = ((x417>>(x418==x419))%x420);

	if (t56 != 2015) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int64_t x423 = -30LL;
	int8_t x424 = INT8_MIN;

	t57 = ((x421>>(x422==x423))%x424);

	if (t57 != 127U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x433 = UINT8_MAX;
	int32_t x434 = 16799;
	int8_t x435 = 0;
	volatile uint16_t x436 = 40U;

	t58 = ((x433>>(x434==x435))%x436);

	if (t58 != 15) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x437 = 3U;
	volatile uint64_t x438 = UINT64_MAX;
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = INT16_MAX;
	int32_t t59 = 1010822187;

	t59 = ((x437>>(x438==x439))%x440);

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x441 = INT32_MAX;
	int64_t x443 = 0LL;

	t60 = ((x441>>(x442==x443))%x444);

	if (t60 != 2147483647U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x445 = 1722960U;
	int8_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint32_t t61 = 306U;

	t61 = ((x445>>(x446==x447))%x448);

	if (t61 != 16874U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x449 = UINT64_MAX;
	int8_t x450 = -11;
	volatile uint32_t x451 = 12211070U;
	volatile int64_t x452 = INT64_MIN;
	volatile uint64_t t62 = 31866929631719486LLU;

	t62 = ((x449>>(x450==x451))%x452);

	if (t62 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x458 = UINT16_MAX;
	int32_t x460 = -1;
	volatile uint64_t t63 = 1020737351986LLU;

	t63 = ((x457>>(x458==x459))%x460);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x465 = INT64_MAX;
	volatile int16_t x466 = INT16_MIN;
	int8_t x467 = INT8_MIN;
	int32_t x468 = INT32_MAX;
	int64_t t64 = -33LL;

	t64 = ((x465>>(x466==x467))%x468);

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x474 = 1656635LLU;
	volatile uint32_t x475 = 2U;
	uint64_t x476 = 546LLU;
	uint64_t t65 = 92LLU;

	t65 = ((x473>>(x474==x475))%x476);

	if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x477 = 1793167560289789LL;
	int8_t x478 = -48;
	uint16_t x479 = UINT16_MAX;
	int64_t x480 = -2LL;
	static int64_t t66 = 3546091224LL;

	t66 = ((x477>>(x478==x479))%x480);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x485 = 6U;
	int64_t x487 = INT64_MIN;
	uint32_t x488 = UINT32_MAX;
	static uint32_t t67 = 117528U;

	t67 = ((x485>>(x486==x487))%x488);

	if (t67 != 6U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x494 = INT32_MAX;
	int16_t x495 = -11295;
	int32_t x496 = INT32_MIN;
	static uint64_t t68 = 3LLU;

	t68 = ((x493>>(x494==x495))%x496);

	if (t68 != 1899471582LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x497 = 2;
	int64_t x498 = INT64_MIN;
	uint16_t x499 = 0U;
	int32_t x500 = INT32_MAX;
	volatile int32_t t69 = 1;

	t69 = ((x497>>(x498==x499))%x500);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x502 = 10534747000340463LL;
	static int8_t x503 = INT8_MIN;
	int64_t t70 = 13332433684950LL;

	t70 = ((x501>>(x502==x503))%x504);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x506 = INT16_MIN;
	int32_t x508 = INT32_MAX;
	uint64_t t71 = 194139402567453506LLU;

	t71 = ((x505>>(x506==x507))%x508);

	if (t71 != 3LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x510 = INT64_MIN;
	uint8_t x511 = UINT8_MAX;
	int32_t x512 = INT32_MAX;

	t72 = ((x509>>(x510==x511))%x512);

	if (t72 != 88759) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x513 = INT64_MAX;
	int8_t x514 = INT8_MIN;
	int64_t x515 = -1LL;
	volatile int32_t x516 = -1;
	volatile int64_t t73 = 879583982080345LL;

	t73 = ((x513>>(x514==x515))%x516);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x517 = UINT64_MAX;
	uint32_t x518 = 494042969U;
	static uint64_t x519 = UINT64_MAX;
	uint64_t t74 = 70293888815LLU;

	t74 = ((x517>>(x518==x519))%x520);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x522 = INT32_MAX;
	uint16_t x523 = UINT16_MAX;
	int8_t x524 = -22;
	volatile int32_t t75 = -9;

	t75 = ((x521>>(x522==x523))%x524);

	if (t75 != 19) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x529 = 53U;
	int32_t x531 = -1;
	static int64_t x532 = 615LL;
	static volatile int64_t t76 = 819587107LL;

	t76 = ((x529>>(x530==x531))%x532);

	if (t76 != 53LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x537 = INT8_MAX;
	uint64_t x538 = 14997459066997106LLU;
	static uint64_t x539 = 3LLU;
	volatile int8_t x540 = INT8_MIN;
	volatile int32_t t77 = 3;

	t77 = ((x537>>(x538==x539))%x540);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x541 = 1;
	int64_t x543 = INT64_MIN;
	static volatile int64_t x544 = INT64_MAX;
	volatile int64_t t78 = -1LL;

	t78 = ((x541>>(x542==x543))%x544);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x546 = INT16_MIN;
	static int32_t x547 = -1;
	volatile uint32_t t79 = 120001U;

	t79 = ((x545>>(x546==x547))%x548);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x562 = -481375LL;
	static uint32_t x564 = UINT32_MAX;
	volatile uint32_t t80 = 384091261U;

	t80 = ((x561>>(x562==x563))%x564);

	if (t80 != 32767U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x573 = 228048442LLU;
	int32_t x574 = -1;
	static int32_t x575 = 702010855;
	int64_t x576 = INT64_MIN;
	uint64_t t81 = 896LLU;

	t81 = ((x573>>(x574==x575))%x576);

	if (t81 != 228048442LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x577 = 193U;
	int8_t x578 = INT8_MIN;
	volatile int64_t x579 = INT64_MIN;

	t82 = ((x577>>(x578==x579))%x580);

	if (t82 != 193U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x585 = 106LL;
	volatile int16_t x586 = INT16_MIN;
	volatile int8_t x587 = INT8_MIN;
	int32_t x588 = -1;
	int64_t t83 = 5585LL;

	t83 = ((x585>>(x586==x587))%x588);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x589 = 1360910145U;
	int32_t x590 = -460879;
	int8_t x591 = INT8_MIN;
	int8_t x592 = INT8_MAX;

	t84 = ((x589>>(x590==x591))%x592);

	if (t84 != 116U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x593 = 12641060U;
	static int64_t x594 = INT64_MIN;
	static uint32_t x595 = UINT32_MAX;
	volatile uint32_t t85 = 3015U;

	t85 = ((x593>>(x594==x595))%x596);

	if (t85 != 25765U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x602 = 1U;
	uint8_t x603 = UINT8_MAX;
	int32_t t86 = 6955602;

	t86 = ((x601>>(x602==x603))%x604);

	if (t86 != 41) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x606 = -932753LL;
	int16_t x607 = -1;
	uint32_t x608 = 27U;

	t87 = ((x605>>(x606==x607))%x608);

	if (t87 != 21U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x621 = UINT8_MAX;
	int64_t x622 = INT64_MIN;
	int64_t x623 = 28821781413331LL;
	static int64_t x624 = 248417369523LL;

	t88 = ((x621>>(x622==x623))%x624);

	if (t88 != 255LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x625 = 11U;
	int8_t x626 = 3;
	int32_t x627 = INT32_MIN;
	volatile int32_t t89 = -2;

	t89 = ((x625>>(x626==x627))%x628);

	if (t89 != 11) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x633 = INT64_MAX;
	int64_t x635 = -1LL;
	int64_t x636 = INT64_MAX;
	volatile int64_t t90 = 11LL;

	t90 = ((x633>>(x634==x635))%x636);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x639 = 193768327LLU;
	int32_t x640 = 5;
	volatile int32_t t91 = -483884537;

	t91 = ((x637>>(x638==x639))%x640);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x645 = UINT32_MAX;
	int32_t x646 = -1;
	static int16_t x647 = -1;
	int64_t x648 = INT64_MIN;
	static int64_t t92 = -11543123326LL;

	t92 = ((x645>>(x646==x647))%x648);

	if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x653 = 60;
	static int32_t x654 = -22215;
	uint64_t x656 = 100778LLU;

	t93 = ((x653>>(x654==x655))%x656);

	if (t93 != 60LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x661 = UINT32_MAX;
	int32_t x662 = -82713;
	uint8_t x663 = 1U;
	int32_t x664 = -1;
	uint32_t t94 = 906938U;

	t94 = ((x661>>(x662==x663))%x664);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x665 = 4502984755995165284LL;
	int32_t x666 = INT32_MAX;
	int32_t x667 = -1;
	int16_t x668 = -1;

	t95 = ((x665>>(x666==x667))%x668);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x669 = UINT16_MAX;
	int64_t x670 = INT64_MAX;
	uint8_t x671 = 4U;
	volatile uint16_t x672 = 14686U;
	static volatile int32_t t96 = -3;

	t96 = ((x669>>(x670==x671))%x672);

	if (t96 != 6791) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x673 = UINT16_MAX;
	uint64_t x674 = 4468525582405658LLU;
	int32_t x676 = INT32_MAX;
	volatile int32_t t97 = 6232;

	t97 = ((x673>>(x674==x675))%x676);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x677 = INT8_MAX;
	uint32_t x679 = 2164863U;
	volatile int64_t x680 = INT64_MIN;
	volatile int64_t t98 = 109597168035777905LL;

	t98 = ((x677>>(x678==x679))%x680);

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x685 = 105;
	volatile int32_t x686 = INT32_MAX;
	int64_t x688 = 2972013LL;
	int64_t t99 = 40LL;

	t99 = ((x685>>(x686==x687))%x688);

	if (t99 != 105LL) { NG(); } else { ; }
	
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

