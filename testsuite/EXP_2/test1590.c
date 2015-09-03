#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 41U;
int32_t x13 = 0;
uint16_t x14 = UINT16_MAX;
int16_t x18 = 287;
uint32_t x20 = UINT32_MAX;
static uint32_t x25 = UINT32_MAX;
int32_t x27 = INT32_MIN;
int8_t x44 = INT8_MAX;
int16_t x47 = 131;
int8_t x51 = INT8_MAX;
uint64_t x53 = UINT64_MAX;
int64_t t9 = -35LL;
int8_t x95 = INT8_MIN;
int16_t x98 = -1;
volatile int64_t t12 = 205LL;
int8_t x113 = INT8_MAX;
volatile int32_t t13 = 58;
static volatile uint8_t x121 = 1U;
uint32_t x123 = UINT32_MAX;
volatile int16_t x129 = 343;
static int32_t x139 = 160;
uint64_t x149 = 627LLU;
static int64_t x150 = -1LL;
static int8_t x152 = 19;
volatile uint64_t t18 = 13844LLU;
uint64_t t20 = 3585608LLU;
int64_t x174 = INT64_MIN;
int32_t x190 = INT32_MIN;
int64_t x220 = INT64_MAX;
volatile uint8_t x221 = 6U;
int16_t x228 = -1;
int32_t t30 = 815535;
static uint8_t x235 = 1U;
int16_t x249 = INT16_MAX;
static volatile int8_t x254 = INT8_MIN;
int64_t x255 = INT64_MIN;
static uint64_t t34 = 358938LLU;
volatile uint64_t t35 = 247183558924507975LLU;
volatile int8_t x267 = INT8_MAX;
static uint16_t x281 = UINT16_MAX;
volatile int8_t x285 = INT8_MAX;
uint8_t x297 = 85U;
int32_t x358 = INT32_MAX;
volatile int32_t t45 = -53;
int32_t x365 = INT32_MAX;
volatile uint32_t x368 = 396U;
int8_t x375 = INT8_MAX;
int32_t t47 = -2045;
uint8_t x389 = 1U;
volatile uint16_t x391 = 434U;
static uint8_t x403 = UINT8_MAX;
volatile uint8_t x412 = 27U;
uint8_t x433 = UINT8_MAX;
uint16_t x435 = 63U;
volatile uint32_t x437 = 156234989U;
static uint32_t x453 = 22U;
int16_t x454 = INT16_MIN;
volatile uint32_t t56 = 109005013U;
static int16_t x458 = INT16_MAX;
uint16_t x470 = UINT16_MAX;
uint64_t x471 = 56LLU;
int32_t x477 = 2916139;
int32_t x504 = 32055673;
uint32_t x508 = UINT32_MAX;
uint16_t x527 = UINT16_MAX;
int32_t x537 = 11;
int32_t x540 = -1;
uint8_t x547 = 6U;
int32_t t65 = -44;
static int8_t x589 = 2;
int8_t x606 = 11;
int64_t x607 = 1LL;
uint16_t x629 = UINT16_MAX;
int64_t x645 = 6297LL;
uint64_t x653 = 665270316971229LLU;
volatile uint16_t x669 = UINT16_MAX;
volatile uint64_t x674 = 327789LLU;
uint32_t t74 = 252565U;
volatile int64_t t76 = 140LL;
uint64_t x692 = 1606097089915LLU;
uint8_t x693 = UINT8_MAX;
int32_t t78 = 5975;
int64_t x702 = INT64_MAX;
int16_t x703 = -1;
volatile uint64_t t79 = 707313LLU;
int32_t x712 = INT32_MAX;
uint64_t x742 = 238LLU;
static volatile int64_t t83 = -158LL;
volatile uint16_t x757 = 488U;
int32_t x762 = 104266002;
volatile int64_t x764 = 784434LL;
volatile uint8_t x773 = 0U;
int8_t x775 = INT8_MIN;
uint64_t x779 = 247133LLU;
static volatile uint32_t t89 = 2222158U;
static int8_t x788 = INT8_MAX;
uint64_t t92 = 237741029184LLU;
static int32_t x802 = -1;
uint64_t x810 = 22088119LLU;
int32_t x826 = -1;
int32_t x828 = INT32_MIN;
uint16_t x829 = 371U;
volatile int64_t x839 = -1LL;
int64_t x846 = 285865LL;
volatile uint16_t x847 = 0U;


void f0(void) {
	int64_t x9 = INT64_MAX;
	static uint64_t x10 = 111LLU;
	int16_t x12 = -1;
	int64_t t0 = -824854608333133LL;

	t0 = ((x9<<(x10<=x11))/x12);

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x15 = -60020;
	static int8_t x16 = -1;
	static volatile int32_t t1 = 1;

	t1 = ((x13<<(x14<=x15))/x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 330692U;
	int16_t x19 = INT16_MAX;
	uint32_t t2 = 154336453U;

	t2 = ((x17<<(x18<=x19))/x20);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x26 = 7U;
	uint16_t x28 = UINT16_MAX;
	uint32_t t3 = 1340883U;

	t3 = ((x25<<(x26<=x27))/x28);

	if (t3 != 65537U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MIN;
	volatile int64_t x43 = INT64_MIN;
	volatile int64_t t4 = -311LL;

	t4 = ((x41<<(x42<=x43))/x44);

	if (t4 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x45 = UINT8_MAX;
	volatile int16_t x46 = -1;
	int8_t x48 = -5;
	int32_t t5 = -7775352;

	t5 = ((x45<<(x46<=x47))/x48);

	if (t5 != -102) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x49 = INT8_MAX;
	static int32_t x50 = INT32_MIN;
	volatile int32_t x52 = 1;
	static int32_t t6 = -19033;

	t6 = ((x49<<(x50<=x51))/x52);

	if (t6 != 254) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x54 = INT16_MAX;
	int8_t x55 = -1;
	int8_t x56 = INT8_MAX;
	volatile uint64_t t7 = 39280306351051LLU;

	t7 = ((x53<<(x54<=x55))/x56);

	if (t7 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x73 = 1;
	int32_t x74 = -11619;
	int8_t x75 = INT8_MAX;
	int8_t x76 = -1;
	volatile int32_t t8 = -163688389;

	t8 = ((x73<<(x74<=x75))/x76);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x89 = 4917;
	volatile int32_t x90 = INT32_MIN;
	int64_t x91 = -1LL;
	volatile int64_t x92 = -1LL;

	t9 = ((x89<<(x90<=x91))/x92);

	if (t9 != -9834LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x93 = INT8_MAX;
	static int8_t x94 = INT8_MIN;
	uint16_t x96 = 36U;
	int32_t t10 = 1810491;

	t10 = ((x93<<(x94<=x95))/x96);

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x97 = 1;
	uint32_t x99 = 3810505U;
	int32_t x100 = -1;
	volatile int32_t t11 = -6;

	t11 = ((x97<<(x98<=x99))/x100);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x101 = 10;
	static volatile int32_t x102 = INT32_MIN;
	int64_t x103 = -303185166813264198LL;
	volatile int64_t x104 = -14645696283116LL;

	t12 = ((x101<<(x102<=x103))/x104);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x114 = 2231912U;
	int32_t x115 = 20011650;
	int16_t x116 = INT16_MAX;

	t13 = ((x113<<(x114<=x115))/x116);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x122 = 54;
	volatile int8_t x124 = INT8_MIN;
	int32_t t14 = 3585;

	t14 = ((x121<<(x122<=x123))/x124);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x130 = UINT16_MAX;
	volatile int8_t x131 = 50;
	int64_t x132 = -1LL;
	volatile int64_t t15 = -730353739885518LL;

	t15 = ((x129<<(x130<=x131))/x132);

	if (t15 != -343LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = 15;
	volatile uint16_t x140 = UINT16_MAX;
	volatile uint64_t t16 = 448LLU;

	t16 = ((x137<<(x138<=x139))/x140);

	if (t16 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x141 = 420LLU;
	volatile uint16_t x142 = 5U;
	int8_t x143 = INT8_MAX;
	volatile int16_t x144 = -1;
	uint64_t t17 = 6LLU;

	t17 = ((x141<<(x142<=x143))/x144);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x151 = -56825451LL;

	t18 = ((x149<<(x150<=x151))/x152);

	if (t18 != 33LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x153 = 1;
	volatile int16_t x154 = INT16_MIN;
	uint64_t x155 = UINT64_MAX;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t19 = -4140597322270058223LL;

	t19 = ((x153<<(x154<=x155))/x156);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x161 = UINT32_MAX;
	int32_t x162 = -441363398;
	uint8_t x163 = 3U;
	volatile uint64_t x164 = 3064098LLU;

	t20 = ((x161<<(x162<=x163))/x164);

	if (t20 != 1401LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x173 = 989117665441LLU;
	int16_t x175 = INT16_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile uint64_t t21 = 350LLU;

	t21 = ((x173<<(x174<=x175))/x176);

	if (t21 != 30185936LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = INT16_MIN;
	static volatile int32_t x183 = 98494284;
	uint32_t x184 = 4442U;
	uint32_t t22 = 37745U;

	t22 = ((x181<<(x182<=x183))/x184);

	if (t22 != 14U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int16_t x191 = -1;
	volatile int64_t x192 = -2110823930LL;
	static volatile int64_t t23 = -30LL;

	t23 = ((x189<<(x190<=x191))/x192);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x193 = 0;
	volatile int32_t x194 = 2;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = INT64_MIN;
	volatile int64_t t24 = -12569235LL;

	t24 = ((x193<<(x194<=x195))/x196);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x197 = 2321;
	static int32_t x198 = -1;
	int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MAX;
	volatile int32_t t25 = -9769;

	t25 = ((x197<<(x198<=x199))/x200);

	if (t25 != 36) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x213 = 22U;
	uint16_t x214 = UINT16_MAX;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MAX;
	int64_t t26 = -64566701669LL;

	t26 = ((x213<<(x214<=x215))/x216);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x217 = UINT8_MAX;
	int8_t x218 = 8;
	uint16_t x219 = 2U;
	static int64_t t27 = -21961LL;

	t27 = ((x217<<(x218<=x219))/x220);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x222 = -1;
	int8_t x223 = INT8_MIN;
	static uint16_t x224 = UINT16_MAX;
	volatile int32_t t28 = 190;

	t28 = ((x221<<(x222<=x223))/x224);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x225 = 48U;
	static volatile uint16_t x226 = 0U;
	uint8_t x227 = UINT8_MAX;
	int32_t t29 = 13200;

	t29 = ((x225<<(x226<=x227))/x228);

	if (t29 != -96) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x229 = 33;
	static uint8_t x230 = 0U;
	volatile int16_t x231 = -9609;
	int8_t x232 = INT8_MAX;

	t30 = ((x229<<(x230<=x231))/x232);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x233 = 9920U;
	volatile int8_t x234 = -1;
	int16_t x236 = INT16_MIN;
	volatile uint32_t t31 = 0U;

	t31 = ((x233<<(x234<=x235))/x236);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x245 = 6;
	int8_t x246 = -1;
	int64_t x247 = 177305450315LL;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t32 = 22334493;

	t32 = ((x245<<(x246<=x247))/x248);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = -1;
	int16_t x252 = -1;
	int32_t t33 = -11491;

	t33 = ((x249<<(x250<=x251))/x252);

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x253 = 335833LLU;
	uint32_t x256 = UINT32_MAX;

	t34 = ((x253<<(x254<=x255))/x256);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x261 = 85669LLU;
	int64_t x262 = -1LL;
	volatile int32_t x263 = 1;
	int16_t x264 = INT16_MIN;

	t35 = ((x261<<(x262<=x263))/x264);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 42U;
	uint8_t x268 = 6U;
	int32_t t36 = -12599;

	t36 = ((x265<<(x266<=x267))/x268);

	if (t36 != 85) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x282 = -1;
	int32_t x283 = INT32_MIN;
	static int16_t x284 = -10262;
	int32_t t37 = 51523;

	t37 = ((x281<<(x282<=x283))/x284);

	if (t37 != -6) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x286 = -1;
	int32_t x287 = 1;
	int32_t x288 = INT32_MIN;
	int32_t t38 = -24391333;

	t38 = ((x285<<(x286<=x287))/x288);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x289 = 705472068022040683LLU;
	uint8_t x290 = 20U;
	int64_t x291 = INT64_MAX;
	int64_t x292 = INT64_MIN;
	uint64_t t39 = 11LLU;

	t39 = ((x289<<(x290<=x291))/x292);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x293 = UINT16_MAX;
	volatile uint8_t x294 = 85U;
	int16_t x295 = INT16_MIN;
	uint16_t x296 = 1U;
	int32_t t40 = 6920;

	t40 = ((x293<<(x294<=x295))/x296);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x298 = 6;
	int32_t x299 = 1739285;
	uint64_t x300 = 155449623175022698LLU;
	uint64_t t41 = 1056371167674838614LLU;

	t41 = ((x297<<(x298<=x299))/x300);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x313 = 889748830U;
	uint64_t x314 = 2LLU;
	int16_t x315 = -26;
	int8_t x316 = -5;
	volatile uint32_t t42 = 0U;

	t42 = ((x313<<(x314<=x315))/x316);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x317 = 0U;
	static int16_t x318 = INT16_MIN;
	static volatile int64_t x319 = INT64_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t43 = 781736LLU;

	t43 = ((x317<<(x318<=x319))/x320);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x337 = 12U;
	int16_t x338 = -1;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t44 = 591;

	t44 = ((x337<<(x338<=x339))/x340);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x357 = 3U;
	int8_t x359 = -1;
	uint16_t x360 = 2U;

	t45 = ((x357<<(x358<=x359))/x360);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x366 = 179609LL;
	static int16_t x367 = -344;
	uint32_t t46 = 26U;

	t46 = ((x365<<(x366<=x367))/x368);

	if (t46 != 5422938U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x373 = 30;
	uint16_t x374 = 1041U;
	int16_t x376 = INT16_MIN;

	t47 = ((x373<<(x374<=x375))/x376);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x390 = INT8_MIN;
	uint16_t x392 = 12U;
	int32_t t48 = 1798;

	t48 = ((x389<<(x390<=x391))/x392);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x393 = INT64_MAX;
	int16_t x394 = -280;
	uint32_t x395 = 1559847216U;
	int32_t x396 = -1;
	int64_t t49 = -49378671214983767LL;

	t49 = ((x393<<(x394<=x395))/x396);

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x401 = INT8_MAX;
	int16_t x402 = INT16_MAX;
	volatile uint64_t x404 = UINT64_MAX;
	uint64_t t50 = 17534374730LLU;

	t50 = ((x401<<(x402<=x403))/x404);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x409 = 168653049486462LLU;
	uint16_t x410 = UINT16_MAX;
	static int64_t x411 = -1LL;
	uint64_t t51 = 41622364LLU;

	t51 = ((x409<<(x410<=x411))/x412);

	if (t51 != 6246409240239LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x413 = 227244757088LLU;
	uint64_t x414 = UINT64_MAX;
	uint8_t x415 = 0U;
	int8_t x416 = -13;
	volatile uint64_t t52 = 6LLU;

	t52 = ((x413<<(x414<=x415))/x416);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x421 = 14U;
	uint32_t x422 = 11U;
	uint16_t x423 = 1815U;
	static volatile int8_t x424 = -1;
	volatile uint32_t t53 = 430U;

	t53 = ((x421<<(x422<=x423))/x424);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x434 = -1;
	static uint8_t x436 = UINT8_MAX;
	volatile int32_t t54 = -4129;

	t54 = ((x433<<(x434<=x435))/x436);

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x438 = -1;
	static int64_t x439 = 103376239044496LL;
	volatile int16_t x440 = INT16_MIN;
	volatile uint32_t t55 = 696U;

	t55 = ((x437<<(x438<=x439))/x440);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x455 = 2505872U;
	volatile int32_t x456 = INT32_MIN;

	t56 = ((x453<<(x454<=x455))/x456);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x457 = 44736768LL;
	uint64_t x459 = UINT64_MAX;
	static int16_t x460 = -1;
	volatile int64_t t57 = 1715841759141786LL;

	t57 = ((x457<<(x458<=x459))/x460);

	if (t57 != -89473536LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x469 = 3;
	int32_t x472 = INT32_MAX;
	volatile int32_t t58 = 119676686;

	t58 = ((x469<<(x470<=x471))/x472);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x478 = 1405U;
	int32_t x479 = -1;
	static uint16_t x480 = 56U;
	volatile int32_t t59 = 4990;

	t59 = ((x477<<(x478<=x479))/x480);

	if (t59 != 104147) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x501 = 1;
	uint32_t x502 = UINT32_MAX;
	uint64_t x503 = 30710784957884508LLU;
	int32_t t60 = -643;

	t60 = ((x501<<(x502<=x503))/x504);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x505 = UINT16_MAX;
	static int8_t x506 = INT8_MAX;
	int64_t x507 = -1LL;
	uint32_t t61 = 291U;

	t61 = ((x505<<(x506<=x507))/x508);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x509 = INT8_MAX;
	static int64_t x510 = INT64_MIN;
	volatile int16_t x511 = INT16_MIN;
	volatile uint16_t x512 = 35U;
	volatile int32_t t62 = -14858544;

	t62 = ((x509<<(x510<=x511))/x512);

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x525 = 8U;
	static int64_t x526 = INT64_MIN;
	uint32_t x528 = 552149721U;
	uint32_t t63 = 2094027U;

	t63 = ((x525<<(x526<=x527))/x528);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x538 = INT8_MIN;
	int64_t x539 = -1LL;
	int32_t t64 = -1;

	t64 = ((x537<<(x538<=x539))/x540);

	if (t64 != -22) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x545 = 27U;
	static int64_t x546 = INT64_MIN;
	static volatile int8_t x548 = INT8_MAX;

	t65 = ((x545<<(x546<=x547))/x548);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x549 = 213537711U;
	uint8_t x550 = 72U;
	int64_t x551 = INT64_MAX;
	int32_t x552 = -1;
	volatile uint32_t t66 = 2795519U;

	t66 = ((x549<<(x550<=x551))/x552);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x590 = -12950916LL;
	static volatile int64_t x591 = -193628868495LL;
	int16_t x592 = INT16_MIN;
	volatile int32_t t67 = 155123;

	t67 = ((x589<<(x590<=x591))/x592);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x605 = 28;
	int16_t x608 = -1;
	volatile int32_t t68 = -1;

	t68 = ((x605<<(x606<=x607))/x608);

	if (t68 != -28) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x630 = -1LL;
	int16_t x631 = -2;
	uint64_t x632 = 2271LLU;
	uint64_t t69 = 202602LLU;

	t69 = ((x629<<(x630<=x631))/x632);

	if (t69 != 28LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x641 = 79U;
	uint16_t x642 = 229U;
	int32_t x643 = INT32_MAX;
	volatile int32_t x644 = INT32_MAX;
	volatile int32_t t70 = -13836;

	t70 = ((x641<<(x642<=x643))/x644);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x646 = UINT32_MAX;
	int8_t x647 = INT8_MIN;
	volatile int32_t x648 = INT32_MIN;
	int64_t t71 = 2151304634199261LL;

	t71 = ((x645<<(x646<=x647))/x648);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x654 = 1;
	uint64_t x655 = 567LLU;
	int16_t x656 = -1;
	volatile uint64_t t72 = 60348633849LLU;

	t72 = ((x653<<(x654<=x655))/x656);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x670 = UINT32_MAX;
	int8_t x671 = -28;
	uint64_t x672 = 8955LLU;
	volatile uint64_t t73 = 8LLU;

	t73 = ((x669<<(x670<=x671))/x672);

	if (t73 != 7LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x673 = 76U;
	uint32_t x675 = 71U;
	uint32_t x676 = 84385U;

	t74 = ((x673<<(x674<=x675))/x676);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x681 = UINT8_MAX;
	int8_t x682 = -1;
	volatile uint32_t x683 = UINT32_MAX;
	uint16_t x684 = 1969U;
	int32_t t75 = 10153912;

	t75 = ((x681<<(x682<=x683))/x684);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x685 = 1;
	uint16_t x686 = 305U;
	uint32_t x687 = UINT32_MAX;
	volatile int64_t x688 = -15783415745714LL;

	t76 = ((x685<<(x686<=x687))/x688);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x689 = UINT16_MAX;
	volatile int32_t x690 = 254;
	volatile int8_t x691 = -1;
	uint64_t t77 = 344098901295836626LLU;

	t77 = ((x689<<(x690<=x691))/x692);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x694 = INT32_MAX;
	static int64_t x695 = -1LL;
	int8_t x696 = -1;

	t78 = ((x693<<(x694<=x695))/x696);

	if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x701 = 4571LLU;
	static int8_t x704 = INT8_MAX;

	t79 = ((x701<<(x702<=x703))/x704);

	if (t79 != 35LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x705 = UINT64_MAX;
	static volatile int64_t x706 = INT64_MIN;
	int32_t x707 = INT32_MIN;
	volatile int16_t x708 = -1;
	volatile uint64_t t80 = 43346360LLU;

	t80 = ((x705<<(x706<=x707))/x708);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x709 = INT16_MAX;
	uint64_t x710 = 703572LLU;
	uint16_t x711 = 134U;
	volatile int32_t t81 = -583;

	t81 = ((x709<<(x710<=x711))/x712);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x725 = UINT16_MAX;
	static int32_t x726 = -8995901;
	static int16_t x727 = INT16_MIN;
	int64_t x728 = 51LL;
	int64_t t82 = 0LL;

	t82 = ((x725<<(x726<=x727))/x728);

	if (t82 != 2570LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x741 = 1U;
	static volatile int16_t x743 = -1;
	int64_t x744 = INT64_MIN;

	t83 = ((x741<<(x742<=x743))/x744);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x753 = 8;
	static int16_t x754 = -4543;
	int8_t x755 = INT8_MAX;
	uint16_t x756 = 28U;
	volatile int32_t t84 = -47575;

	t84 = ((x753<<(x754<=x755))/x756);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x758 = 1LLU;
	uint64_t x759 = 285605014877LLU;
	uint32_t x760 = 15814U;
	uint32_t t85 = 61U;

	t85 = ((x757<<(x758<=x759))/x760);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x761 = UINT16_MAX;
	uint64_t x763 = 1564986528LLU;
	int64_t t86 = 6520788958004LL;

	t86 = ((x761<<(x762<=x763))/x764);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x769 = UINT8_MAX;
	volatile uint64_t x770 = UINT64_MAX;
	static volatile int32_t x771 = INT32_MIN;
	int32_t x772 = 1916;
	volatile int32_t t87 = -3822;

	t87 = ((x769<<(x770<=x771))/x772);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x774 = INT32_MIN;
	uint16_t x776 = 9U;
	int32_t t88 = -1701148;

	t88 = ((x773<<(x774<=x775))/x776);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x777 = UINT16_MAX;
	uint32_t x778 = UINT32_MAX;
	uint32_t x780 = 3U;

	t89 = ((x777<<(x778<=x779))/x780);

	if (t89 != 21845U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x781 = INT16_MAX;
	int8_t x782 = -26;
	int16_t x783 = -7285;
	volatile uint8_t x784 = 27U;
	volatile int32_t t90 = -403825;

	t90 = ((x781<<(x782<=x783))/x784);

	if (t90 != 1213) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x785 = 6627013411058038391LLU;
	volatile int8_t x786 = 1;
	volatile int64_t x787 = -1LL;
	uint64_t t91 = 48459743708LLU;

	t91 = ((x785<<(x786<=x787))/x788);

	if (t91 != 52181207961086916LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x789 = 50;
	int8_t x790 = -1;
	uint32_t x791 = 20205U;
	uint64_t x792 = 960529613318LLU;

	t92 = ((x789<<(x790<=x791))/x792);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x797 = 2951U;
	int16_t x798 = INT16_MAX;
	int16_t x799 = INT16_MAX;
	static int64_t x800 = -2312701068394920021LL;
	volatile int64_t t93 = 522874LL;

	t93 = ((x797<<(x798<=x799))/x800);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x801 = 264739171LL;
	int8_t x803 = INT8_MIN;
	int64_t x804 = INT64_MIN;
	int64_t t94 = -24LL;

	t94 = ((x801<<(x802<=x803))/x804);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x809 = 15U;
	uint8_t x811 = UINT8_MAX;
	static uint32_t x812 = 164884U;
	static uint32_t t95 = 394U;

	t95 = ((x809<<(x810<=x811))/x812);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x825 = INT16_MAX;
	int32_t x827 = -1;
	int32_t t96 = -3185;

	t96 = ((x825<<(x826<=x827))/x828);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x830 = INT8_MIN;
	uint16_t x831 = 1400U;
	uint32_t x832 = 3670820U;
	static volatile uint32_t t97 = 67528361U;

	t97 = ((x829<<(x830<=x831))/x832);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x837 = 329680205087LLU;
	int32_t x838 = INT32_MAX;
	int32_t x840 = INT32_MAX;
	uint64_t t98 = 1247LLU;

	t98 = ((x837<<(x838<=x839))/x840);

	if (t98 != 153LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x845 = UINT32_MAX;
	static int64_t x848 = -1LL;
	volatile int64_t t99 = -1208412577LL;

	t99 = ((x845<<(x846<=x847))/x848);

	if (t99 != -4294967295LL) { NG(); } else { ; }
	
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

