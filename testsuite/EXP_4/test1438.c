#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 3;
int64_t x17 = INT64_MIN;
int16_t x21 = -1;
volatile int8_t x40 = -1;
static int16_t x41 = -152;
int32_t x46 = INT32_MAX;
int8_t x52 = INT8_MIN;
int32_t t10 = -6;
int16_t x81 = INT16_MAX;
uint8_t x82 = 82U;
volatile uint16_t x83 = 309U;
int32_t x108 = INT32_MIN;
static uint64_t x123 = 18048545479LLU;
int8_t x124 = INT8_MAX;
int32_t x129 = 10;
int16_t x144 = 886;
int16_t x145 = -22;
static int32_t x149 = INT32_MIN;
volatile int32_t x158 = INT32_MAX;
uint64_t x160 = UINT64_MAX;
int32_t t19 = -83;
static int32_t t22 = 1066020;
uint8_t x192 = UINT8_MAX;
int8_t x193 = INT8_MIN;
int64_t x209 = INT64_MIN;
volatile int64_t x215 = -1933LL;
int32_t x216 = INT32_MAX;
uint16_t x223 = UINT16_MAX;
static int32_t t29 = 57518463;
int32_t t30 = 5077;
static int32_t x240 = -1611;
volatile int32_t t32 = 0;
static int64_t x271 = INT64_MAX;
int32_t t33 = -149;
volatile int64_t x279 = INT64_MIN;
volatile int32_t x280 = -1;
static int32_t t35 = -16081066;
uint64_t x299 = UINT64_MAX;
static int64_t x316 = INT64_MAX;
static int16_t x317 = INT16_MAX;
int8_t x322 = 1;
static int16_t x324 = 673;
int32_t x325 = INT32_MAX;
volatile uint64_t x328 = 16346417541LLU;
static volatile uint64_t x329 = UINT64_MAX;
volatile int16_t x335 = INT16_MIN;
uint64_t x352 = 436LLU;
static int32_t x355 = INT32_MIN;
uint32_t x377 = 256064U;
static int32_t t50 = -7937;
int64_t x388 = -1LL;
uint16_t x390 = 18827U;
int32_t t52 = -1407070;
int32_t t54 = 105150;
uint8_t x415 = 23U;
volatile int32_t t55 = 6;
static uint32_t x419 = UINT32_MAX;
uint8_t x420 = 15U;
int32_t x427 = -8;
volatile int32_t t57 = 488295009;
int32_t x433 = -1;
volatile int32_t t58 = 50;
static int32_t t59 = -904458;
int16_t x448 = INT16_MAX;
int64_t x457 = INT64_MAX;
int8_t x469 = INT8_MIN;
int64_t x472 = -1LL;
static int64_t x477 = -1LL;
int16_t x482 = INT16_MAX;
int64_t x488 = -135185106640LL;
uint64_t x494 = UINT64_MAX;
int64_t x507 = 3LL;
int32_t x514 = 160329;
static uint8_t x526 = 1U;
uint8_t x544 = UINT8_MAX;
uint64_t x549 = 1051355579911477LLU;
uint16_t x550 = 762U;
uint32_t x554 = 474U;
int32_t x556 = -7;
volatile uint8_t x563 = 1U;
static int64_t x584 = INT64_MIN;
uint16_t x594 = UINT16_MAX;
int64_t x602 = 121LL;
int16_t x603 = -40;
uint32_t x614 = UINT32_MAX;
static int8_t x623 = INT8_MIN;
volatile int32_t t86 = -1211;
volatile int32_t x653 = INT32_MIN;
uint32_t x654 = 36675U;
static int32_t x666 = INT32_MAX;
static int32_t x667 = 106939;
volatile int32_t t90 = 4;
int16_t x677 = INT16_MAX;
uint64_t x681 = 1115734LLU;
static int32_t t93 = 14537;
static int16_t x694 = 3;
volatile int32_t t94 = -20;
static int8_t x709 = -10;
int16_t x725 = -1;
uint8_t x733 = 0U;
volatile int8_t x735 = INT8_MIN;


void f0(void) {
	int16_t x13 = 1959;
	volatile uint16_t x14 = UINT16_MAX;
	int8_t x15 = 0;
	static uint32_t x16 = UINT32_MAX;

	t0 = (x13==(x14>>(x15<x16)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x18 = 3666293524521457LL;
	int16_t x19 = INT16_MIN;
	int16_t x20 = -25;
	volatile int32_t t1 = 5;

	t1 = (x17==(x18>>(x19<x20)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x22 = 456966U;
	int16_t x23 = INT16_MIN;
	static volatile uint8_t x24 = UINT8_MAX;
	volatile int32_t t2 = 389380673;

	t2 = (x21==(x22>>(x23<x24)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = INT64_MAX;
	volatile int32_t x27 = INT32_MAX;
	static int32_t x28 = INT32_MIN;
	int32_t t3 = 1282614;

	t3 = (x25==(x26>>(x27<x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = -10;
	int16_t x30 = 89;
	int32_t x31 = INT32_MAX;
	volatile int16_t x32 = -1;
	volatile int32_t t4 = -1;

	t4 = (x29==(x30>>(x31<x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	static int8_t x34 = INT8_MAX;
	static int8_t x35 = INT8_MIN;
	volatile uint16_t x36 = 0U;
	int32_t t5 = -157375353;

	t5 = (x33==(x34>>(x35<x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = 12990;
	volatile uint16_t x38 = 463U;
	volatile int8_t x39 = -1;
	volatile int32_t t6 = -466;

	t6 = (x37==(x38>>(x39<x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x42 = 5U;
	int32_t x43 = -1;
	static int32_t x44 = -259045026;
	int32_t t7 = 1530;

	t7 = (x41==(x42>>(x43<x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 997U;
	int16_t x47 = -1;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t8 = -798687;

	t8 = (x45==(x46>>(x47<x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = UINT64_MAX;
	volatile uint16_t x50 = 15U;
	int64_t x51 = -1LL;
	int32_t t9 = -2298875;

	t9 = (x49==(x50>>(x51<x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x73 = -499421929;
	uint64_t x74 = 837114502LLU;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 749121182619LLU;

	t10 = (x73==(x74>>(x75<x76)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x84 = UINT64_MAX;
	volatile int32_t t11 = 101;

	t11 = (x81==(x82>>(x83<x84)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x105 = -1;
	volatile uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 7U;
	volatile int32_t t12 = -29212;

	t12 = (x105==(x106>>(x107<x108)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x117 = 3U;
	int64_t x118 = 1056336856377LL;
	static volatile int64_t x119 = 31354269974479LL;
	uint16_t x120 = 25824U;
	static int32_t t13 = 928;

	t13 = (x117==(x118>>(x119<x120)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x121 = INT64_MIN;
	static uint32_t x122 = 2027U;
	volatile int32_t t14 = 1271;

	t14 = (x121==(x122>>(x123<x124)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x130 = 24175517175746143LL;
	int16_t x131 = -1;
	int32_t x132 = INT32_MAX;
	static int32_t t15 = 0;

	t15 = (x129==(x130>>(x131<x132)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x141 = 6765998260LLU;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	volatile int32_t t16 = -212279243;

	t16 = (x141==(x142>>(x143<x144)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x146 = INT8_MAX;
	uint64_t x147 = 215037835LLU;
	volatile int32_t x148 = 9;
	int32_t t17 = 946645;

	t17 = (x145==(x146>>(x147<x148)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x150 = 5230019026427292LLU;
	int16_t x151 = 14;
	static volatile int32_t x152 = -1;
	static int32_t t18 = 153269;

	t18 = (x149==(x150>>(x151<x152)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x157 = 1U;
	uint64_t x159 = 223379170492667LLU;

	t19 = (x157==(x158>>(x159<x160)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x161 = INT8_MIN;
	volatile int64_t x162 = 74681565762027LL;
	volatile int32_t x163 = -222;
	uint64_t x164 = 23412LLU;
	volatile int32_t t20 = 682822917;

	t20 = (x161==(x162>>(x163<x164)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = 2U;
	uint8_t x167 = 13U;
	static int16_t x168 = INT16_MIN;
	volatile int32_t t21 = -1664807;

	t21 = (x165==(x166>>(x167<x168)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x177 = -1;
	static uint16_t x178 = 100U;
	volatile int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;

	t22 = (x177==(x178>>(x179<x180)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x189 = INT32_MIN;
	int16_t x190 = 2642;
	int16_t x191 = INT16_MAX;
	int32_t t23 = 3297;

	t23 = (x189==(x190>>(x191<x192)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x194 = INT8_MAX;
	uint16_t x195 = 4392U;
	int16_t x196 = -44;
	static int32_t t24 = 33;

	t24 = (x193==(x194>>(x195<x196)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MAX;
	int64_t x203 = 49368259LL;
	int16_t x204 = -11;
	int32_t t25 = 21653052;

	t25 = (x201==(x202>>(x203<x204)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x210 = 3;
	uint32_t x211 = 260U;
	volatile uint64_t x212 = 36782002895LLU;
	volatile int32_t t26 = -1;

	t26 = (x209==(x210>>(x211<x212)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x213 = -1;
	uint16_t x214 = 0U;
	volatile int32_t t27 = 109;

	t27 = (x213==(x214>>(x215<x216)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = 1;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;
	int32_t t28 = 56689;

	t28 = (x217==(x218>>(x219<x220)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x221 = 20314320U;
	uint64_t x222 = 628022LLU;
	volatile uint16_t x224 = 730U;

	t29 = (x221==(x222>>(x223<x224)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x229 = INT16_MIN;
	static uint32_t x230 = 665452240U;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;

	t30 = (x229==(x230>>(x231<x232)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x237 = INT64_MAX;
	int8_t x238 = INT8_MAX;
	int8_t x239 = INT8_MIN;
	volatile int32_t t31 = -14019;

	t31 = (x237==(x238>>(x239<x240)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x253 = 10U;
	uint16_t x254 = 3U;
	uint64_t x255 = 84277336733065671LLU;
	int8_t x256 = INT8_MIN;

	t32 = (x253==(x254>>(x255<x256)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x269 = INT16_MIN;
	volatile int64_t x270 = INT64_MAX;
	int8_t x272 = 0;

	t33 = (x269==(x270>>(x271<x272)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x277 = INT64_MAX;
	int16_t x278 = 5;
	int32_t t34 = 8;

	t34 = (x277==(x278>>(x279<x280)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x281 = 315;
	uint8_t x282 = 2U;
	static uint32_t x283 = 4805131U;
	static volatile int8_t x284 = INT8_MIN;

	t35 = (x281==(x282>>(x283<x284)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x285 = 1;
	int16_t x286 = 0;
	int16_t x287 = -1411;
	static int64_t x288 = -1LL;
	volatile int32_t t36 = 13001387;

	t36 = (x285==(x286>>(x287<x288)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x297 = UINT8_MAX;
	volatile uint8_t x298 = 22U;
	uint8_t x300 = 0U;
	volatile int32_t t37 = 0;

	t37 = (x297==(x298>>(x299<x300)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x301 = 0U;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MAX;
	int64_t x304 = 298003781076668807LL;
	volatile int32_t t38 = 15;

	t38 = (x301==(x302>>(x303<x304)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = 0;
	uint64_t x315 = UINT64_MAX;
	int32_t t39 = -27;

	t39 = (x313==(x314>>(x315<x316)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x318 = 0U;
	int32_t x319 = INT32_MAX;
	static uint32_t x320 = 17281U;
	volatile int32_t t40 = -118196431;

	t40 = (x317==(x318>>(x319<x320)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int32_t x323 = 703171092;
	int32_t t41 = -2378;

	t41 = (x321==(x322>>(x323<x324)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x326 = INT16_MAX;
	int8_t x327 = -12;
	volatile int32_t t42 = 274;

	t42 = (x325==(x326>>(x327<x328)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x330 = 8U;
	volatile uint16_t x331 = 61U;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t43 = 104;

	t43 = (x329==(x330>>(x331<x332)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x333 = -1;
	static volatile int8_t x334 = 49;
	volatile uint16_t x336 = 5U;
	int32_t t44 = -10351;

	t44 = (x333==(x334>>(x335<x336)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x337 = -5LL;
	static uint8_t x338 = UINT8_MAX;
	static uint8_t x339 = 0U;
	int64_t x340 = 78423308LL;
	int32_t t45 = 0;

	t45 = (x337==(x338>>(x339<x340)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x349 = 16526111071633433LLU;
	static volatile int8_t x350 = INT8_MAX;
	int32_t x351 = INT32_MAX;
	volatile int32_t t46 = -209524;

	t46 = (x349==(x350>>(x351<x352)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x353 = INT16_MIN;
	int8_t x354 = 11;
	int8_t x356 = -7;
	volatile int32_t t47 = 108736;

	t47 = (x353==(x354>>(x355<x356)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x357 = INT64_MAX;
	uint16_t x358 = 69U;
	volatile uint16_t x359 = 1U;
	int16_t x360 = INT16_MIN;
	int32_t t48 = -87263528;

	t48 = (x357==(x358>>(x359<x360)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x378 = 170180163U;
	uint16_t x379 = 0U;
	int64_t x380 = INT64_MAX;
	static volatile int32_t t49 = -155857;

	t49 = (x377==(x378>>(x379<x380)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x381 = INT16_MAX;
	int16_t x382 = INT16_MAX;
	int8_t x383 = -3;
	int8_t x384 = -27;

	t50 = (x381==(x382>>(x383<x384)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MAX;
	uint8_t x387 = 13U;
	int32_t t51 = 24290338;

	t51 = (x385==(x386>>(x387<x388)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x391 = 32822885U;
	uint32_t x392 = UINT32_MAX;

	t52 = (x389==(x390>>(x391<x392)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x393 = 980;
	int64_t x394 = 3436296647686564405LL;
	uint8_t x395 = 1U;
	int8_t x396 = INT8_MAX;
	volatile int32_t t53 = -10184;

	t53 = (x393==(x394>>(x395<x396)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x405 = 56;
	uint8_t x406 = 97U;
	int16_t x407 = 90;
	static uint8_t x408 = 0U;

	t54 = (x405==(x406>>(x407<x408)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x413 = INT8_MIN;
	static int8_t x414 = 4;
	uint16_t x416 = 24995U;

	t55 = (x413==(x414>>(x415<x416)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x417 = UINT64_MAX;
	int8_t x418 = 0;
	int32_t t56 = -3;

	t56 = (x417==(x418>>(x419<x420)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x425 = INT64_MAX;
	int16_t x426 = INT16_MAX;
	uint8_t x428 = 0U;

	t57 = (x425==(x426>>(x427<x428)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x434 = 1431129U;
	uint64_t x435 = 152283228516LLU;
	static uint16_t x436 = UINT16_MAX;

	t58 = (x433==(x434>>(x435<x436)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x437 = UINT32_MAX;
	static uint16_t x438 = 24230U;
	int16_t x439 = INT16_MIN;
	uint64_t x440 = UINT64_MAX;

	t59 = (x437==(x438>>(x439<x440)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x445 = 7512U;
	uint16_t x446 = UINT16_MAX;
	int32_t x447 = -1;
	int32_t t60 = 7;

	t60 = (x445==(x446>>(x447<x448)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x458 = 3830358432068524998LLU;
	uint8_t x459 = 1U;
	uint64_t x460 = UINT64_MAX;
	static volatile int32_t t61 = 110;

	t61 = (x457==(x458>>(x459<x460)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x470 = INT8_MAX;
	int64_t x471 = INT64_MIN;
	volatile int32_t t62 = 938386;

	t62 = (x469==(x470>>(x471<x472)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x478 = 636;
	static int16_t x479 = INT16_MIN;
	int32_t x480 = INT32_MIN;
	static volatile int32_t t63 = 77137836;

	t63 = (x477==(x478>>(x479<x480)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x481 = UINT32_MAX;
	int64_t x483 = -240LL;
	volatile uint32_t x484 = 1034558260U;
	static volatile int32_t t64 = -824071822;

	t64 = (x481==(x482>>(x483<x484)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x485 = 55U;
	int64_t x486 = 1769LL;
	uint32_t x487 = UINT32_MAX;
	volatile int32_t t65 = 573296;

	t65 = (x485==(x486>>(x487<x488)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x493 = 1;
	uint32_t x495 = 58U;
	volatile int32_t x496 = 664026;
	int32_t t66 = -10;

	t66 = (x493==(x494>>(x495<x496)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x505 = INT16_MAX;
	uint16_t x506 = UINT16_MAX;
	int32_t x508 = -274288;
	volatile int32_t t67 = 0;

	t67 = (x505==(x506>>(x507<x508)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x513 = 501;
	int32_t x515 = INT32_MIN;
	int32_t x516 = INT32_MIN;
	static volatile int32_t t68 = 1679986;

	t68 = (x513==(x514>>(x515<x516)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x525 = INT32_MIN;
	int64_t x527 = INT64_MIN;
	volatile int64_t x528 = -217343116392LL;
	volatile int32_t t69 = -1;

	t69 = (x525==(x526>>(x527<x528)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x541 = 4U;
	static uint8_t x542 = UINT8_MAX;
	volatile uint16_t x543 = UINT16_MAX;
	int32_t t70 = 5304;

	t70 = (x541==(x542>>(x543<x544)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x551 = INT32_MIN;
	static uint32_t x552 = UINT32_MAX;
	static int32_t t71 = 1056730222;

	t71 = (x549==(x550>>(x551<x552)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x553 = 2U;
	volatile int32_t x555 = INT32_MIN;
	int32_t t72 = -6;

	t72 = (x553==(x554>>(x555<x556)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x557 = 1130U;
	uint64_t x558 = UINT64_MAX;
	int32_t x559 = INT32_MIN;
	static int16_t x560 = INT16_MAX;
	int32_t t73 = -490;

	t73 = (x557==(x558>>(x559<x560)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x561 = 108U;
	volatile int16_t x562 = INT16_MAX;
	static int32_t x564 = 15;
	volatile int32_t t74 = -12;

	t74 = (x561==(x562>>(x563<x564)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x573 = INT16_MIN;
	int16_t x574 = 1;
	volatile int16_t x575 = INT16_MAX;
	static int64_t x576 = 12721411387LL;
	int32_t t75 = 2;

	t75 = (x573==(x574>>(x575<x576)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x577 = INT8_MAX;
	int64_t x578 = 926929717209LL;
	static int8_t x579 = INT8_MAX;
	volatile int64_t x580 = -86532224LL;
	static int32_t t76 = -8869891;

	t76 = (x577==(x578>>(x579<x580)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x581 = INT16_MIN;
	uint8_t x582 = 58U;
	static int64_t x583 = INT64_MIN;
	volatile int32_t t77 = -5400;

	t77 = (x581==(x582>>(x583<x584)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x589 = INT64_MIN;
	int64_t x590 = INT64_MAX;
	int32_t x591 = INT32_MIN;
	uint32_t x592 = 368638U;
	static volatile int32_t t78 = -2;

	t78 = (x589==(x590>>(x591<x592)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x593 = INT32_MAX;
	static uint64_t x595 = 2135929162561493LLU;
	volatile int32_t x596 = -1;
	volatile int32_t t79 = -18;

	t79 = (x593==(x594>>(x595<x596)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x601 = 4017707857302LL;
	int32_t x604 = -1;
	volatile int32_t t80 = -347394;

	t80 = (x601==(x602>>(x603<x604)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x609 = INT16_MAX;
	volatile uint32_t x610 = UINT32_MAX;
	int8_t x611 = INT8_MAX;
	uint8_t x612 = UINT8_MAX;
	static int32_t t81 = -100;

	t81 = (x609==(x610>>(x611<x612)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x613 = -1172;
	static int16_t x615 = 219;
	static uint8_t x616 = 0U;
	volatile int32_t t82 = 10;

	t82 = (x613==(x614>>(x615<x616)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x621 = INT16_MIN;
	uint8_t x622 = 2U;
	static int8_t x624 = INT8_MIN;
	volatile int32_t t83 = 6;

	t83 = (x621==(x622>>(x623<x624)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x625 = 0;
	static volatile uint8_t x626 = 62U;
	int32_t x627 = -172136631;
	volatile uint16_t x628 = UINT16_MAX;
	volatile int32_t t84 = -7;

	t84 = (x625==(x626>>(x627<x628)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x637 = -1;
	volatile uint64_t x638 = 7415804381371LLU;
	static uint16_t x639 = UINT16_MAX;
	uint64_t x640 = UINT64_MAX;
	int32_t t85 = -51;

	t85 = (x637==(x638>>(x639<x640)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x641 = UINT8_MAX;
	volatile uint32_t x642 = 80U;
	int8_t x643 = INT8_MIN;
	int8_t x644 = INT8_MAX;

	t86 = (x641==(x642>>(x643<x644)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x649 = 68U;
	int64_t x650 = 39445513199555LL;
	volatile int16_t x651 = 2;
	int16_t x652 = -1;
	volatile int32_t t87 = 518522515;

	t87 = (x649==(x650>>(x651<x652)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x655 = -1LL;
	int32_t x656 = 100066;
	int32_t t88 = -563864;

	t88 = (x653==(x654>>(x655<x656)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x661 = 0U;
	volatile uint64_t x662 = UINT64_MAX;
	static uint16_t x663 = 2224U;
	int64_t x664 = INT64_MIN;
	static int32_t t89 = -684;

	t89 = (x661==(x662>>(x663<x664)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x665 = -1LL;
	volatile uint16_t x668 = 243U;

	t90 = (x665==(x666>>(x667<x668)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x669 = -16;
	int64_t x670 = INT64_MAX;
	volatile int16_t x671 = -16155;
	volatile uint16_t x672 = 604U;
	int32_t t91 = -19372777;

	t91 = (x669==(x670>>(x671<x672)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x678 = INT16_MAX;
	uint16_t x679 = UINT16_MAX;
	int16_t x680 = 11;
	int32_t t92 = 125082778;

	t92 = (x677==(x678>>(x679<x680)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x682 = UINT8_MAX;
	uint16_t x683 = 12816U;
	static uint16_t x684 = 0U;

	t93 = (x681==(x682>>(x683<x684)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x693 = UINT32_MAX;
	int64_t x695 = -1LL;
	uint64_t x696 = UINT64_MAX;

	t94 = (x693==(x694>>(x695<x696)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x705 = INT8_MAX;
	uint32_t x706 = UINT32_MAX;
	int8_t x707 = 17;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t95 = -3516474;

	t95 = (x705==(x706>>(x707<x708)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x710 = 863984431818888LLU;
	int8_t x711 = -1;
	uint64_t x712 = UINT64_MAX;
	volatile int32_t t96 = 27108955;

	t96 = (x709==(x710>>(x711<x712)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x713 = -1LL;
	int16_t x714 = 1;
	int64_t x715 = INT64_MIN;
	static volatile uint32_t x716 = 321123U;
	int32_t t97 = 71;

	t97 = (x713==(x714>>(x715<x716)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x726 = INT16_MAX;
	static int32_t x727 = INT32_MIN;
	int8_t x728 = -2;
	int32_t t98 = 420;

	t98 = (x725==(x726>>(x727<x728)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x734 = 1;
	static uint8_t x736 = UINT8_MAX;
	volatile int32_t t99 = -7392360;

	t99 = (x733==(x734>>(x735<x736)));

	if (t99 != 1) { NG(); } else { ; }
	
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

