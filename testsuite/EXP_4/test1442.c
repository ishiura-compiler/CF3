#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x21 = INT8_MIN;
static uint32_t x32 = 855U;
int64_t t5 = -9589LL;
int32_t t6 = -1;
volatile uint64_t x70 = 8588021411785830LLU;
volatile int8_t x71 = 52;
int16_t x80 = -1;
int32_t x82 = 21;
static int8_t x83 = INT8_MIN;
volatile int32_t t9 = 1625655;
uint8_t x89 = UINT8_MAX;
int32_t x92 = -1;
uint64_t x113 = 446639628705959308LLU;
static uint16_t x114 = 4069U;
static int32_t x132 = INT32_MAX;
uint8_t x134 = 0U;
static uint64_t x150 = 59084516985184533LLU;
int8_t x156 = INT8_MAX;
static volatile int32_t t17 = -62127;
static uint8_t x179 = 1U;
int8_t x192 = 15;
int64_t x193 = -1932836896710897LL;
int8_t x205 = INT8_MAX;
int32_t x217 = -1;
volatile uint32_t x219 = UINT32_MAX;
volatile uint16_t x222 = 5939U;
static volatile int64_t t25 = 102364642583LL;
int64_t x229 = INT64_MIN;
static int64_t x231 = -1LL;
uint8_t x238 = UINT8_MAX;
uint64_t x240 = 23985LLU;
int32_t x245 = -983725;
uint32_t x269 = UINT32_MAX;
static volatile int32_t x272 = INT32_MAX;
volatile uint16_t x278 = 10887U;
int32_t t35 = -6;
uint16_t x282 = 447U;
uint16_t x294 = 964U;
int32_t t38 = 3;
int32_t t39 = -6297;
volatile int32_t t40 = -7142;
uint32_t x315 = UINT32_MAX;
int32_t x316 = INT32_MIN;
static volatile int32_t t41 = -225286;
uint64_t x318 = UINT64_MAX;
static int16_t x321 = 1;
int8_t x323 = INT8_MIN;
static uint16_t x324 = 3611U;
int32_t x333 = INT32_MAX;
uint64_t x334 = 12753LLU;
uint32_t t45 = 35U;
int8_t x347 = -1;
static int32_t x352 = INT32_MAX;
volatile int64_t t48 = 812524077588LL;
static int8_t x365 = 3;
int32_t x368 = INT32_MIN;
int16_t x383 = -1;
int64_t x389 = 45727LL;
uint32_t x390 = 25U;
uint8_t x393 = UINT8_MAX;
volatile int32_t t56 = -7432;
int8_t x420 = INT8_MIN;
uint32_t t59 = 6446U;
static int32_t t61 = -22;
int16_t x450 = INT16_MAX;
uint64_t x455 = 26831378468758579LLU;
uint32_t x458 = UINT32_MAX;
int16_t x465 = 3;
static volatile uint32_t x486 = 610014376U;
int8_t x488 = -3;
uint64_t x498 = 75433700392LLU;
uint32_t x499 = 5617U;
int8_t x500 = INT8_MIN;
uint8_t x503 = UINT8_MAX;
int8_t x505 = INT8_MAX;
int8_t x506 = 4;
int64_t x507 = 204814476319261LL;
int64_t x518 = 5LL;
volatile int8_t x519 = INT8_MIN;
uint8_t x523 = UINT8_MAX;
uint64_t x538 = 14103663123015215LLU;
volatile uint64_t t77 = UINT64_MAX;
static volatile int64_t t78 = -104080139641831318LL;
int8_t x558 = INT8_MAX;
int16_t x559 = INT16_MIN;
uint8_t x563 = UINT8_MAX;
volatile int32_t x572 = INT32_MAX;
int16_t x574 = 25;
static volatile int32_t t85 = -15806;
static int64_t x583 = INT64_MIN;
static uint8_t x586 = 63U;
volatile int8_t x587 = INT8_MAX;
static volatile uint32_t x588 = 32U;
int32_t t87 = 188921353;
int64_t x593 = -83110196LL;
int8_t x594 = 7;
static volatile int8_t x609 = -1;
static uint8_t x613 = 1U;
static uint32_t x614 = 9178U;
int64_t x616 = -187LL;
int64_t x619 = -1LL;
int64_t x620 = -1LL;
volatile int32_t x621 = 37206804;
int8_t x623 = INT8_MIN;
int8_t x624 = INT8_MAX;
int32_t x632 = -1;
volatile uint32_t t94 = 45U;
int16_t x637 = 52;
static int64_t t98 = 114944758LL;
int64_t x666 = INT64_MAX;
static volatile int64_t t99 = -381LL;


void f0(void) {
	volatile uint8_t x22 = 1U;
	int64_t x23 = -1LL;
	volatile int64_t x24 = -1LL;
	int32_t t0 = 428127051;

	t0 = (x21|(x22>>(x23<x24)));

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x29 = -44;
	volatile int16_t x30 = 7;
	int8_t x31 = INT8_MIN;
	int32_t t1 = -62;

	t1 = (x29|(x30>>(x31<x32)));

	if (t1 != -41) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x33 = INT32_MIN;
	int32_t x34 = INT32_MAX;
	volatile int8_t x35 = 5;
	static uint64_t x36 = 28295640211171227LLU;
	int32_t t2 = 29436;

	t2 = (x33|(x34>>(x35<x36)));

	if (t2 != -1073741825) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x37 = UINT64_MAX;
	uint32_t x38 = 475898890U;
	static int16_t x39 = INT16_MIN;
	static volatile uint16_t x40 = 22U;
	uint64_t t3 = UINT64_MAX;

	t3 = (x37|(x38>>(x39<x40)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x49 = 70U;
	volatile int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MIN;
	int64_t x52 = -1060340834932226LL;
	volatile int32_t t4 = 707624187;

	t4 = (x49|(x50>>(x51<x52)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x61 = 382U;
	int64_t x62 = 130LL;
	static int64_t x63 = -5LL;
	volatile uint8_t x64 = UINT8_MAX;

	t5 = (x61|(x62>>(x63<x64)));

	if (t5 != 383LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	int16_t x68 = -1;

	t6 = (x65|(x66>>(x67<x68)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x69 = 2U;
	volatile uint32_t x72 = 3904631U;
	uint64_t t7 = 163152LLU;

	t7 = (x69|(x70>>(x71<x72)));

	if (t7 != 4294010705892915LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x77 = UINT8_MAX;
	static int16_t x78 = 103;
	static int8_t x79 = -9;
	static volatile int32_t t8 = -2196654;

	t8 = (x77|(x78>>(x79<x80)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x81 = INT8_MIN;
	volatile int64_t x84 = INT64_MAX;

	t9 = (x81|(x82>>(x83<x84)));

	if (t9 != -118) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x90 = 859434U;
	uint8_t x91 = 125U;
	uint32_t t10 = 3U;

	t10 = (x89|(x90>>(x91<x92)));

	if (t10 != 859647U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x105 = -3755LL;
	volatile uint64_t x106 = 7LLU;
	uint32_t x107 = 5078830U;
	int16_t x108 = -25;
	uint64_t t11 = 2734951526102667LLU;

	t11 = (x105|(x106>>(x107<x108)));

	if (t11 != 18446744073709547863LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x115 = INT64_MIN;
	uint64_t x116 = 7520388357486472165LLU;
	uint64_t t12 = 527339497LLU;

	t12 = (x113|(x114>>(x115<x116)));

	if (t12 != 446639628705959917LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MIN;
	uint32_t t13 = UINT32_MAX;

	t13 = (x129|(x130>>(x131<x132)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x133 = -483942575;
	int32_t x135 = -1;
	volatile int64_t x136 = -1933905LL;
	static volatile int32_t t14 = -691496;

	t14 = (x133|(x134>>(x135<x136)));

	if (t14 != -483942575) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x149 = 4LLU;
	volatile int16_t x151 = -1;
	int16_t x152 = -1;
	uint64_t t15 = 202LLU;

	t15 = (x149|(x150>>(x151<x152)));

	if (t15 != 59084516985184533LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x153 = INT16_MAX;
	static int16_t x154 = INT16_MAX;
	int16_t x155 = INT16_MIN;
	volatile int32_t t16 = 8990;

	t16 = (x153|(x154>>(x155<x156)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x165 = 341;
	static volatile uint16_t x166 = UINT16_MAX;
	static uint16_t x167 = UINT16_MAX;
	uint32_t x168 = 85U;

	t17 = (x165|(x166>>(x167<x168)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x177 = -4;
	int64_t x178 = 1LL;
	int8_t x180 = 1;
	int64_t t18 = -1543LL;

	t18 = (x177|(x178>>(x179<x180)));

	if (t18 != -3LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x181 = UINT32_MAX;
	volatile int8_t x182 = INT8_MAX;
	volatile uint32_t x183 = UINT32_MAX;
	uint64_t x184 = 3264LLU;
	uint32_t t19 = UINT32_MAX;

	t19 = (x181|(x182>>(x183<x184)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x189 = 6LLU;
	uint16_t x190 = UINT16_MAX;
	int64_t x191 = INT64_MIN;
	uint64_t t20 = 15224115LLU;

	t20 = (x189|(x190>>(x191<x192)));

	if (t20 != 32767LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x194 = 303U;
	volatile int8_t x195 = INT8_MIN;
	uint64_t x196 = 963748687LLU;
	int64_t t21 = 572834382192653LL;

	t21 = (x193|(x194>>(x195<x196)));

	if (t21 != -1932836896710865LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x206 = 15217092LL;
	int16_t x207 = INT16_MIN;
	int16_t x208 = -35;
	int64_t t22 = 61110410754220LL;

	t22 = (x205|(x206>>(x207<x208)));

	if (t22 != 7608575LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x213 = -1;
	int64_t x214 = 2042LL;
	int32_t x215 = -194;
	static volatile int8_t x216 = INT8_MIN;
	int64_t t23 = 44LL;

	t23 = (x213|(x214>>(x215<x216)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x218 = 4U;
	volatile int16_t x220 = 1;
	static volatile int32_t t24 = 0;

	t24 = (x217|(x218>>(x219<x220)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x221 = -3648407LL;
	volatile uint8_t x223 = UINT8_MAX;
	int64_t x224 = INT64_MIN;

	t25 = (x221|(x222>>(x223<x224)));

	if (t25 != -3647621LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x230 = 28U;
	int8_t x232 = INT8_MIN;
	int64_t t26 = 30752LL;

	t26 = (x229|(x230>>(x231<x232)));

	if (t26 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x233 = -267330;
	static uint32_t x234 = 33096U;
	uint32_t x235 = 463953U;
	static int64_t x236 = INT64_MIN;
	uint32_t t27 = 57U;

	t27 = (x233|(x234>>(x235<x236)));

	if (t27 != 4294700030U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x237 = INT32_MIN;
	int32_t x239 = INT32_MIN;
	int32_t t28 = 181;

	t28 = (x237|(x238>>(x239<x240)));

	if (t28 != -2147483393) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x241 = 4;
	uint8_t x242 = 4U;
	volatile int16_t x243 = 3698;
	int16_t x244 = INT16_MIN;
	int32_t t29 = 547691536;

	t29 = (x241|(x242>>(x243<x244)));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x246 = 16U;
	int64_t x247 = INT64_MAX;
	volatile uint64_t x248 = UINT64_MAX;
	uint32_t t30 = 13614464U;

	t30 = (x245|(x246>>(x247<x248)));

	if (t30 != 4293983579U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x253 = 24;
	int8_t x254 = 1;
	volatile int8_t x255 = -1;
	int32_t x256 = INT32_MAX;
	volatile int32_t t31 = 1313610;

	t31 = (x253|(x254>>(x255<x256)));

	if (t31 != 24) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	static int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	int32_t t32 = -165;

	t32 = (x257|(x258>>(x259<x260)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x261 = 327818LLU;
	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = 0U;
	int8_t x264 = INT8_MIN;
	uint64_t t33 = 989144381899177LLU;

	t33 = (x261|(x262>>(x263<x264)));

	if (t33 != 393215LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = 99130;
	uint64_t t34 = 66742152245996594LLU;

	t34 = (x269|(x270>>(x271<x272)));

	if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x277 = 0U;
	static uint8_t x279 = 0U;
	int8_t x280 = INT8_MIN;

	t35 = (x277|(x278>>(x279<x280)));

	if (t35 != 10887) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x281 = 23U;
	volatile int8_t x283 = -3;
	int16_t x284 = -1;
	static volatile int32_t t36 = 520551;

	t36 = (x281|(x282>>(x283<x284)));

	if (t36 != 223) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x289 = UINT32_MAX;
	int32_t x290 = INT32_MAX;
	int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MAX;
	uint32_t t37 = UINT32_MAX;

	t37 = (x289|(x290>>(x291<x292)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x293 = 138U;
	uint64_t x295 = 11246491771789752LLU;
	volatile int8_t x296 = INT8_MIN;

	t38 = (x293|(x294>>(x295<x296)));

	if (t38 != 490) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MAX;
	volatile int64_t x299 = 515526LL;
	volatile uint8_t x300 = 1U;

	t39 = (x297|(x298>>(x299<x300)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x309 = 5U;
	int8_t x310 = 1;
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MAX;

	t40 = (x309|(x310>>(x311<x312)));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x313 = INT16_MAX;
	uint16_t x314 = 1U;

	t41 = (x313|(x314>>(x315<x316)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x317 = UINT64_MAX;
	volatile uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 1U;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = (x317|(x318>>(x319<x320)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x322 = UINT32_MAX;
	uint32_t t43 = 7124U;

	t43 = (x321|(x322>>(x323<x324)));

	if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x335 = -1LL;
	static int32_t x336 = 0;
	uint64_t t44 = 51390LLU;

	t44 = (x333|(x334>>(x335<x336)));

	if (t44 != 2147483647LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x341 = 11332U;
	volatile uint32_t x342 = 13888U;
	uint64_t x343 = 1727886070LLU;
	int32_t x344 = -264702971;

	t45 = (x341|(x342>>(x343<x344)));

	if (t45 != 16228U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x345 = 25401U;
	volatile uint64_t x346 = UINT64_MAX;
	static int64_t x348 = INT64_MIN;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = (x345|(x346>>(x347<x348)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x349 = INT8_MIN;
	int32_t x350 = 7387;
	int8_t x351 = INT8_MIN;
	volatile int32_t t47 = 195;

	t47 = (x349|(x350>>(x351<x352)));

	if (t47 != -19) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x357 = 0U;
	int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MIN;
	static int8_t x360 = INT8_MAX;

	t48 = (x357|(x358>>(x359<x360)));

	if (t48 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x361 = 28U;
	volatile int64_t x362 = 31342254LL;
	int64_t x363 = INT64_MAX;
	int8_t x364 = -1;
	int64_t t49 = 2787669235751LL;

	t49 = (x361|(x362>>(x363<x364)));

	if (t49 != 31342270LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x366 = INT8_MAX;
	int16_t x367 = INT16_MIN;
	static volatile int32_t t50 = -1;

	t50 = (x365|(x366>>(x367<x368)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x377 = -1;
	static int32_t x378 = 5627;
	volatile int32_t x379 = -1;
	int16_t x380 = INT16_MIN;
	static volatile int32_t t51 = 2;

	t51 = (x377|(x378>>(x379<x380)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x382 = 1;
	int64_t x384 = 2561866518607088LL;
	volatile int32_t t52 = 2928137;

	t52 = (x381|(x382>>(x383<x384)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x385 = 199031LLU;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = 80U;
	uint64_t x388 = UINT64_MAX;
	uint64_t t53 = 491LLU;

	t53 = (x385|(x386>>(x387<x388)));

	if (t53 != 2147483647LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x391 = INT64_MAX;
	int16_t x392 = INT16_MIN;
	volatile int64_t t54 = -327298555766853LL;

	t54 = (x389|(x390>>(x391<x392)));

	if (t54 != 45727LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x394 = 47;
	uint16_t x395 = 104U;
	uint16_t x396 = 0U;
	volatile int32_t t55 = -846;

	t55 = (x393|(x394>>(x395<x396)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x397 = INT16_MAX;
	static int8_t x398 = 2;
	int8_t x399 = 44;
	int64_t x400 = 98469388660LL;

	t56 = (x397|(x398>>(x399<x400)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x409 = 2;
	volatile uint16_t x410 = UINT16_MAX;
	int32_t x411 = INT32_MIN;
	static int16_t x412 = 170;
	int32_t t57 = 0;

	t57 = (x409|(x410>>(x411<x412)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x417 = -1;
	uint32_t x418 = UINT32_MAX;
	volatile int32_t x419 = INT32_MAX;
	uint32_t t58 = UINT32_MAX;

	t58 = (x417|(x418>>(x419<x420)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x425 = UINT8_MAX;
	static uint32_t x426 = 2U;
	static uint16_t x427 = 30U;
	int16_t x428 = INT16_MIN;

	t59 = (x425|(x426>>(x427<x428)));

	if (t59 != 255U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x433 = INT64_MAX;
	uint64_t x434 = 14328479492LLU;
	static uint8_t x435 = UINT8_MAX;
	static int64_t x436 = INT64_MIN;
	volatile uint64_t t60 = 319043517284962954LLU;

	t60 = (x433|(x434>>(x435<x436)));

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x441 = -1;
	int8_t x442 = INT8_MAX;
	int32_t x443 = 772711;
	static uint64_t x444 = UINT64_MAX;

	t61 = (x441|(x442>>(x443<x444)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x449 = INT64_MIN;
	int16_t x451 = INT16_MIN;
	uint32_t x452 = 352858549U;
	volatile int64_t t62 = 608674LL;

	t62 = (x449|(x450>>(x451<x452)));

	if (t62 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x453 = -1506942LL;
	static volatile uint32_t x454 = 9072U;
	uint8_t x456 = UINT8_MAX;
	volatile int64_t t63 = 3817787860LL;

	t63 = (x453|(x454>>(x455<x456)));

	if (t63 != -1498126LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x457 = INT8_MIN;
	uint8_t x459 = 37U;
	static int32_t x460 = INT32_MIN;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (x457|(x458>>(x459<x460)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x461 = UINT8_MAX;
	uint32_t x462 = UINT32_MAX;
	static uint64_t x463 = 49301840283LLU;
	volatile int16_t x464 = -1;
	uint32_t t65 = 16U;

	t65 = (x461|(x462>>(x463<x464)));

	if (t65 != 2147483647U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x466 = INT64_MAX;
	static int8_t x467 = -1;
	static int8_t x468 = -24;
	static volatile int64_t t66 = INT64_MAX;

	t66 = (x465|(x466>>(x467<x468)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x473 = 1;
	int8_t x474 = 1;
	uint32_t x475 = 58644U;
	uint32_t x476 = 24U;
	int32_t t67 = 6;

	t67 = (x473|(x474>>(x475<x476)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x481 = -18;
	uint64_t x482 = UINT64_MAX;
	int8_t x483 = INT8_MAX;
	int16_t x484 = -35;
	uint64_t t68 = UINT64_MAX;

	t68 = (x481|(x482>>(x483<x484)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x485 = 340411U;
	static int8_t x487 = 16;
	uint32_t t69 = 361511560U;

	t69 = (x485|(x486>>(x487<x488)));

	if (t69 != 610088379U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x497 = 20U;
	uint64_t t70 = 4382022966701269227LLU;

	t70 = (x497|(x498>>(x499<x500)));

	if (t70 != 37716850196LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x501 = INT64_MIN;
	uint8_t x502 = 1U;
	int8_t x504 = -1;
	int64_t t71 = 3888707LL;

	t71 = (x501|(x502>>(x503<x504)));

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x508 = 1728;
	static volatile int32_t t72 = 32956;

	t72 = (x505|(x506>>(x507<x508)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x517 = UINT64_MAX;
	volatile uint8_t x520 = 3U;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x517|(x518>>(x519<x520)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x521 = INT16_MIN;
	int32_t x522 = INT32_MAX;
	int16_t x524 = -1624;
	static int32_t t74 = -469;

	t74 = (x521|(x522>>(x523<x524)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x525 = INT8_MIN;
	static uint64_t x526 = 4LLU;
	int8_t x527 = -1;
	static volatile int8_t x528 = INT8_MAX;
	volatile uint64_t t75 = 18598671LLU;

	t75 = (x525|(x526>>(x527<x528)));

	if (t75 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x529 = INT64_MAX;
	uint8_t x530 = 4U;
	static int8_t x531 = -1;
	static int16_t x532 = 1;
	static int64_t t76 = INT64_MAX;

	t76 = (x529|(x530>>(x531<x532)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x537 = UINT64_MAX;
	static int8_t x539 = 7;
	int8_t x540 = INT8_MIN;

	t77 = (x537|(x538>>(x539<x540)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x549 = 130551LL;
	static uint32_t x550 = UINT32_MAX;
	static uint16_t x551 = 0U;
	static int16_t x552 = -1;

	t78 = (x549|(x550>>(x551<x552)));

	if (t78 != 4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x553 = -1;
	uint32_t x554 = 2555984U;
	uint32_t x555 = 1140U;
	int16_t x556 = -148;
	static volatile uint32_t t79 = UINT32_MAX;

	t79 = (x553|(x554>>(x555<x556)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x557 = 1U;
	int32_t x560 = -1;
	static volatile int32_t t80 = 139034394;

	t80 = (x557|(x558>>(x559<x560)));

	if (t80 != 63) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x561 = -3;
	uint64_t x562 = 2063963859989350LLU;
	uint64_t x564 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (x561|(x562>>(x563<x564)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x565 = INT8_MIN;
	int32_t x566 = INT32_MAX;
	int32_t x567 = INT32_MIN;
	int16_t x568 = INT16_MAX;
	volatile int32_t t82 = 75232;

	t82 = (x565|(x566>>(x567<x568)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x569 = INT64_MIN;
	volatile int64_t x570 = INT64_MAX;
	int16_t x571 = INT16_MIN;
	int64_t t83 = -7LL;

	t83 = (x569|(x570>>(x571<x572)));

	if (t83 != -4611686018427387905LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x573 = 5U;
	int32_t x575 = 258;
	int32_t x576 = -53098273;
	static int32_t t84 = 1;

	t84 = (x573|(x574>>(x575<x576)));

	if (t84 != 29) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x577 = UINT16_MAX;
	uint8_t x578 = UINT8_MAX;
	int16_t x579 = -1;
	int8_t x580 = 6;

	t85 = (x577|(x578>>(x579<x580)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x581 = -1;
	uint32_t x582 = 1069202289U;
	static int32_t x584 = -1;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x581|(x582>>(x583<x584)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x585 = 5U;

	t87 = (x585|(x586>>(x587<x588)));

	if (t87 != 63) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x595 = -1;
	int64_t x596 = INT64_MAX;
	volatile int64_t t88 = -739277082267005LL;

	t88 = (x593|(x594>>(x595<x596)));

	if (t88 != -83110193LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x610 = 0U;
	volatile int64_t x611 = INT64_MIN;
	int16_t x612 = 1;
	static volatile int32_t t89 = -13264;

	t89 = (x609|(x610>>(x611<x612)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x615 = -1;
	volatile uint32_t t90 = 3583582U;

	t90 = (x613|(x614>>(x615<x616)));

	if (t90 != 9179U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x617 = INT32_MIN;
	uint16_t x618 = 0U;
	static int32_t t91 = INT32_MIN;

	t91 = (x617|(x618>>(x619<x620)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x622 = UINT64_MAX;
	uint64_t t92 = 2LLU;

	t92 = (x621|(x622>>(x623<x624)));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x625 = 1697U;
	uint64_t x626 = 6LLU;
	int64_t x627 = INT64_MAX;
	uint64_t x628 = UINT64_MAX;
	uint64_t t93 = 104057112321216LLU;

	t93 = (x625|(x626>>(x627<x628)));

	if (t93 != 1699LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x629 = INT16_MAX;
	uint32_t x630 = UINT32_MAX;
	int64_t x631 = INT64_MIN;

	t94 = (x629|(x630>>(x631<x632)));

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x638 = INT16_MAX;
	int32_t x639 = 164;
	int64_t x640 = -853LL;
	int32_t t95 = -443;

	t95 = (x637|(x638>>(x639<x640)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x645 = 36U;
	int64_t x646 = 35LL;
	int64_t x647 = INT64_MIN;
	uint8_t x648 = 4U;
	volatile int64_t t96 = 15060186633727LL;

	t96 = (x645|(x646>>(x647<x648)));

	if (t96 != 53LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x653 = 9;
	static volatile int16_t x654 = 453;
	int16_t x655 = INT16_MIN;
	int8_t x656 = 44;
	int32_t t97 = 9;

	t97 = (x653|(x654>>(x655<x656)));

	if (t97 != 235) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x657 = INT32_MAX;
	volatile int64_t x658 = INT64_MAX;
	static int64_t x659 = INT64_MIN;
	int64_t x660 = 72LL;

	t98 = (x657|(x658>>(x659<x660)));

	if (t98 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x665 = INT8_MIN;
	uint32_t x667 = 0U;
	static int16_t x668 = -6;

	t99 = (x665|(x666>>(x667<x668)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

