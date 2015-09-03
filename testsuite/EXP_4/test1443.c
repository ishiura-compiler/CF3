#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 192U;
volatile uint32_t t1 = 11902U;
uint16_t x20 = 2718U;
uint16_t x26 = 13U;
static uint8_t x27 = UINT8_MAX;
int32_t x38 = INT32_MAX;
volatile uint64_t x39 = UINT64_MAX;
uint64_t x41 = 4242768LLU;
volatile int64_t x47 = 6842298894331797LL;
uint16_t x52 = 1886U;
int8_t x61 = INT8_MIN;
uint32_t t10 = 9U;
int16_t x70 = INT16_MAX;
uint64_t x86 = 521695864LLU;
static int64_t x93 = INT64_MIN;
volatile int16_t x103 = INT16_MAX;
int32_t x110 = 10;
volatile int32_t t17 = -3;
uint32_t x122 = 12335U;
uint32_t x124 = 3U;
int16_t x128 = 144;
int8_t x129 = INT8_MIN;
uint64_t x147 = 8151793101LLU;
volatile uint8_t x155 = 13U;
uint16_t x190 = 1417U;
uint8_t x195 = 16U;
volatile int32_t x205 = 2508;
volatile int64_t x211 = INT64_MAX;
uint16_t x215 = UINT16_MAX;
volatile int32_t x227 = 997;
int32_t t32 = -409174;
int32_t x235 = INT32_MIN;
uint8_t x241 = 13U;
int16_t x253 = 250;
int16_t x255 = -88;
volatile int64_t t37 = -26601238499232LL;
int16_t x280 = 1;
volatile uint64_t x286 = 51849LLU;
int8_t x287 = -1;
static volatile int16_t x316 = INT16_MIN;
static volatile int64_t t43 = 2LL;
uint8_t x318 = 29U;
uint16_t x322 = 249U;
int32_t t45 = 760101;
static uint8_t x326 = 3U;
uint64_t x329 = 311092644821854155LLU;
uint64_t x333 = 810774281LLU;
uint64_t x334 = 887850LLU;
int32_t x342 = INT32_MAX;
int32_t x356 = -55;
volatile int64_t t51 = 1513561LL;
static volatile int32_t t52 = -116595;
uint32_t x374 = UINT32_MAX;
uint64_t t54 = 2063304906528905461LLU;
int16_t x388 = INT16_MAX;
uint16_t x390 = 0U;
volatile uint32_t x393 = 5291337U;
int32_t x394 = INT32_MAX;
static volatile int64_t x396 = 2266894848LL;
static int16_t x407 = INT16_MIN;
static int16_t x408 = INT16_MIN;
uint8_t x409 = UINT8_MAX;
static int32_t x424 = INT32_MIN;
int32_t x440 = INT32_MIN;
static volatile uint32_t x449 = 6422716U;
uint32_t x452 = 8U;
volatile uint32_t t65 = 60U;
volatile int32_t t69 = -9;
static int64_t x471 = 217307LL;
int64_t x481 = 831471813LL;
volatile int64_t x494 = 27203734961039791LL;
volatile int32_t t75 = 4;
static uint8_t x501 = 62U;
volatile int8_t x504 = INT8_MIN;
int64_t x515 = INT64_MAX;
volatile uint16_t x526 = UINT16_MAX;
int32_t x527 = -1;
int8_t x528 = INT8_MIN;
static volatile int32_t t78 = 82154;
int8_t x537 = -1;
uint64_t x541 = 7082260488012341542LLU;
int16_t x575 = -1;
static int8_t x576 = INT8_MIN;
int32_t t86 = 658809;
volatile int32_t x581 = -1;
uint16_t x584 = 87U;
uint16_t x589 = UINT16_MAX;
uint16_t x594 = 17975U;
uint64_t x602 = 257382LLU;
static uint8_t x603 = 9U;
static uint64_t t91 = 5882063098LLU;
uint32_t x607 = 686751U;
static volatile int16_t x627 = INT16_MIN;
int64_t t94 = 605LL;
int16_t x637 = INT16_MIN;
int32_t x649 = 7813773;
volatile int32_t x658 = INT32_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x3 = -1;
	int8_t x4 = -1;
	volatile uint32_t t0 = 789829U;

	t0 = (x1^(x2>>(x3<x4)));

	if (t0 != 4294967103U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 161650U;
	volatile uint8_t x10 = UINT8_MAX;
	int64_t x11 = -1LL;
	int16_t x12 = 0;

	t1 = (x9^(x10>>(x11<x12)));

	if (t1 != 161549U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	int8_t x14 = INT8_MAX;
	uint8_t x15 = 0U;
	int32_t x16 = 699;
	volatile int32_t t2 = 3;

	t2 = (x13^(x14>>(x15<x16)));

	if (t2 != -64) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 5U;
	int8_t x18 = 0;
	int16_t x19 = INT16_MIN;
	int32_t t3 = 54;

	t3 = (x17^(x18>>(x19<x20)));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -2;
	int32_t x22 = 66390;
	int32_t x23 = INT32_MAX;
	uint64_t x24 = 165969624625LLU;
	volatile int32_t t4 = 0;

	t4 = (x21^(x22>>(x23<x24)));

	if (t4 != -33195) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 3796;
	volatile int16_t x28 = -1;
	int32_t t5 = -48;

	t5 = (x25^(x26>>(x27<x28)));

	if (t5 != 3801) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	static uint32_t x40 = 8515383U;
	volatile uint32_t t6 = 55U;

	t6 = (x37^(x38>>(x39<x40)));

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x42 = 53;
	static uint32_t x43 = UINT32_MAX;
	uint16_t x44 = UINT16_MAX;
	uint64_t t7 = 1788LLU;

	t7 = (x41^(x42>>(x43<x44)));

	if (t7 != 4242789LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 6087138LLU;
	static uint64_t x46 = 28312976001LLU;
	int8_t x48 = INT8_MIN;
	static volatile uint64_t t8 = 53008LLU;

	t8 = (x45^(x46>>(x47<x48)));

	if (t8 != 28316359523LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	volatile uint64_t x50 = 341774032697238538LLU;
	int16_t x51 = -14;
	uint64_t t9 = 447674283853859659LLU;

	t9 = (x49^(x50>>(x51<x52)));

	if (t9 != 18275857057360908805LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x62 = 1342022U;
	uint64_t x63 = 199823966428282031LLU;
	volatile int32_t x64 = INT32_MAX;

	t10 = (x61^(x62>>(x63<x64)));

	if (t10 != 4293625286U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = UINT32_MAX;
	static int32_t x71 = INT32_MIN;
	static int64_t x72 = INT64_MIN;
	uint32_t t11 = 24460U;

	t11 = (x69^(x70>>(x71<x72)));

	if (t11 != 4294934528U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = -1;
	static int8_t x74 = INT8_MAX;
	int64_t x75 = 3571072932597642LL;
	int16_t x76 = -25;
	volatile int32_t t12 = 10;

	t12 = (x73^(x74>>(x75<x76)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x85 = -1;
	static int32_t x87 = -232296;
	uint8_t x88 = 1U;
	uint64_t t13 = 4285346LLU;

	t13 = (x85^(x86>>(x87<x88)));

	if (t13 != 18446744073448703683LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x94 = 1089796269U;
	int16_t x95 = INT16_MIN;
	volatile int8_t x96 = -1;
	volatile int64_t t14 = -1LL;

	t14 = (x93^(x94>>(x95<x96)));

	if (t14 != -9223372036309877674LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x97 = INT8_MAX;
	static uint32_t x98 = UINT32_MAX;
	uint64_t x99 = 267457849569280LLU;
	int64_t x100 = INT64_MIN;
	volatile uint32_t t15 = 7039U;

	t15 = (x97^(x98>>(x99<x100)));

	if (t15 != 2147483520U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x101 = INT16_MAX;
	volatile int64_t x102 = 7660960578691061LL;
	int32_t x104 = INT32_MIN;
	volatile int64_t t16 = -3166724157LL;

	t16 = (x101^(x102>>(x103<x104)));

	if (t16 != 7660960578674698LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	uint8_t x112 = UINT8_MAX;

	t17 = (x109^(x110>>(x111<x112)));

	if (t17 != -118) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x117 = 123127419LL;
	static uint16_t x118 = UINT16_MAX;
	int16_t x119 = -1;
	int64_t x120 = INT64_MIN;
	volatile int64_t t18 = -7553280LL;

	t18 = (x117^(x118>>(x119<x120)));

	if (t18 != 123091332LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x121 = INT32_MAX;
	volatile int8_t x123 = -1;
	static uint32_t t19 = 5795859U;

	t19 = (x121^(x122>>(x123<x124)));

	if (t19 != 2147471312U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x125 = 45340640U;
	int32_t x126 = 24733049;
	int16_t x127 = INT16_MIN;
	static uint32_t t20 = 61052602U;

	t20 = (x125^(x126>>(x127<x128)));

	if (t20 != 34563420U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x130 = 117;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -52872921LL;
	int32_t t21 = 23565006;

	t21 = (x129^(x130>>(x131<x132)));

	if (t21 != -11) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = -1;
	volatile int16_t x138 = INT16_MAX;
	volatile int64_t x139 = INT64_MIN;
	static int16_t x140 = -858;
	volatile int32_t t22 = -6;

	t22 = (x137^(x138>>(x139<x140)));

	if (t22 != -16384) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x145 = 13U;
	volatile uint8_t x146 = 2U;
	volatile uint64_t x148 = 16546822744LLU;
	volatile int32_t t23 = -4253;

	t23 = (x145^(x146>>(x147<x148)));

	if (t23 != 12) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = -1;
	static uint32_t x154 = 1127612268U;
	int8_t x156 = INT8_MIN;
	volatile uint32_t t24 = 1634087373U;

	t24 = (x153^(x154>>(x155<x156)));

	if (t24 != 3167355027U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x189 = 223291LLU;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MAX;
	volatile uint64_t t25 = 52LLU;

	t25 = (x189^(x190>>(x191<x192)));

	if (t25 != 223999LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x193 = 372385581671470LLU;
	int16_t x194 = 39;
	int16_t x196 = -102;
	uint64_t t26 = 12350LLU;

	t26 = (x193^(x194>>(x195<x196)));

	if (t26 != 372385581671433LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x206 = UINT8_MAX;
	int16_t x207 = 84;
	uint8_t x208 = 2U;
	volatile int32_t t27 = 962833287;

	t27 = (x205^(x206>>(x207<x208)));

	if (t27 != 2355) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x209 = 3U;
	int64_t x210 = INT64_MAX;
	volatile int64_t x212 = INT64_MAX;
	int64_t t28 = 21396852263983538LL;

	t28 = (x209^(x210>>(x211<x212)));

	if (t28 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x213 = 485;
	static int16_t x214 = INT16_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t29 = 11;

	t29 = (x213^(x214>>(x215<x216)));

	if (t29 != 32282) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x221 = INT64_MIN;
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = 12;
	uint16_t x224 = 409U;
	int64_t t30 = 193250185141800LL;

	t30 = (x221^(x222>>(x223<x224)));

	if (t30 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x225 = 862U;
	int64_t x226 = 14353778011LL;
	volatile uint8_t x228 = UINT8_MAX;
	int64_t t31 = 92777LL;

	t31 = (x225^(x226>>(x227<x228)));

	if (t31 != 14353778181LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x229 = INT32_MAX;
	static int32_t x230 = INT32_MAX;
	uint8_t x231 = 10U;
	static uint32_t x232 = 0U;

	t32 = (x229^(x230>>(x231<x232)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x233 = 38494179235LLU;
	int16_t x234 = 12;
	int8_t x236 = 54;
	uint64_t t33 = 2294230507LLU;

	t33 = (x233^(x234>>(x235<x236)));

	if (t33 != 38494179237LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x242 = INT8_MAX;
	static int8_t x243 = 10;
	static uint32_t x244 = UINT32_MAX;
	int32_t t34 = -911;

	t34 = (x241^(x242>>(x243<x244)));

	if (t34 != 50) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MAX;
	static int64_t x247 = -1LL;
	int16_t x248 = -1;
	volatile int64_t t35 = -29LL;

	t35 = (x245^(x246>>(x247<x248)));

	if (t35 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x254 = INT32_MAX;
	uint32_t x256 = 108639004U;
	static int32_t t36 = -3;

	t36 = (x253^(x254>>(x255<x256)));

	if (t36 != 2147483397) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x257 = 3683;
	int64_t x258 = 508835811LL;
	static uint16_t x259 = 143U;
	int32_t x260 = -1;

	t37 = (x257^(x258>>(x259<x260)));

	if (t37 != 508836224LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x261 = -1LL;
	int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	static int32_t x264 = INT32_MIN;
	static volatile int64_t t38 = 2LL;

	t38 = (x261^(x262>>(x263<x264)));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x277 = UINT64_MAX;
	uint32_t x278 = 30090881U;
	int8_t x279 = -5;
	static volatile uint64_t t39 = 135216535958LLU;

	t39 = (x277^(x278>>(x279<x280)));

	if (t39 != 18446744073694506175LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x281 = INT16_MIN;
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = 1;
	static int64_t x284 = INT64_MIN;
	uint32_t t40 = 147232U;

	t40 = (x281^(x282>>(x283<x284)));

	if (t40 != 32767U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x285 = INT16_MIN;
	int8_t x288 = 58;
	volatile uint64_t t41 = 151159LLU;

	t41 = (x285^(x286>>(x287<x288)));

	if (t41 != 18446744073709544772LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x297 = UINT64_MAX;
	static int8_t x298 = INT8_MAX;
	int16_t x299 = INT16_MIN;
	int32_t x300 = -1;
	uint64_t t42 = 124426956449LLU;

	t42 = (x297^(x298>>(x299<x300)));

	if (t42 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x313 = 89;
	static int64_t x314 = 2881379941100909LL;
	int8_t x315 = INT8_MAX;

	t43 = (x313^(x314>>(x315<x316)));

	if (t43 != 2881379941100852LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x317 = -1;
	static uint32_t x319 = 234164020U;
	volatile int8_t x320 = INT8_MAX;
	int32_t t44 = 41514;

	t44 = (x317^(x318>>(x319<x320)));

	if (t44 != -30) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x323 = -3;
	uint16_t x324 = 0U;

	t45 = (x321^(x322>>(x323<x324)));

	if (t45 != 65411) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x325 = -1;
	int16_t x327 = INT16_MIN;
	static volatile uint32_t x328 = 282811U;
	static int32_t t46 = -735;

	t46 = (x325^(x326>>(x327<x328)));

	if (t46 != -4) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x330 = INT16_MAX;
	uint8_t x331 = 12U;
	int8_t x332 = INT8_MAX;
	volatile uint64_t t47 = 878705666LLU;

	t47 = (x329^(x330>>(x331<x332)));

	if (t47 != 311092644821850164LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x335 = -964;
	int64_t x336 = -501692164470LL;
	volatile uint64_t t48 = 60679219336484LLU;

	t48 = (x333^(x334>>(x335<x336)));

	if (t48 != 811524899LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x341 = -1LL;
	volatile uint64_t x343 = 70132350LLU;
	int32_t x344 = INT32_MAX;
	volatile int64_t t49 = 296LL;

	t49 = (x341^(x342>>(x343<x344)));

	if (t49 != -1073741824LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x345 = 61661250U;
	int16_t x346 = 578;
	uint32_t x347 = 1793U;
	int64_t x348 = -1LL;
	uint32_t t50 = 218U;

	t50 = (x345^(x346>>(x347<x348)));

	if (t50 != 61661696U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x353 = INT64_MIN;
	uint16_t x354 = 1319U;
	int8_t x355 = INT8_MIN;

	t51 = (x353^(x354>>(x355<x356)));

	if (t51 != -9223372036854775149LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x357 = -194891;
	static int16_t x358 = 0;
	int64_t x359 = INT64_MIN;
	int64_t x360 = INT64_MIN;

	t52 = (x357^(x358>>(x359<x360)));

	if (t52 != -194891) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x365 = 0;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = INT64_MIN;
	volatile uint8_t x368 = 14U;
	int32_t t53 = 0;

	t53 = (x365^(x366>>(x367<x368)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x373 = UINT64_MAX;
	static uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MIN;

	t54 = (x373^(x374>>(x375<x376)));

	if (t54 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x377 = -12713694;
	static uint16_t x378 = 895U;
	int64_t x379 = INT64_MIN;
	static uint8_t x380 = 15U;
	volatile int32_t t55 = -45033;

	t55 = (x377^(x378>>(x379<x380)));

	if (t55 != -12713827) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x381 = INT16_MAX;
	uint64_t x382 = 620988149596591LLU;
	uint8_t x383 = UINT8_MAX;
	static uint16_t x384 = UINT16_MAX;
	uint64_t t56 = 66288318LLU;

	t56 = (x381^(x382>>(x383<x384)));

	if (t56 != 310494074830632LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MAX;
	static int32_t x387 = 61;
	volatile int32_t t57 = -1009;

	t57 = (x385^(x386>>(x387<x388)));

	if (t57 != 32704) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x391 = INT32_MIN;
	static int16_t x392 = INT16_MIN;
	int32_t t58 = 3260;

	t58 = (x389^(x390>>(x391<x392)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x395 = INT16_MAX;
	static uint32_t t59 = 1968192U;

	t59 = (x393^(x394>>(x395<x396)));

	if (t59 != 1068450486U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x405 = UINT32_MAX;
	uint8_t x406 = 1U;
	uint32_t t60 = 483U;

	t60 = (x405^(x406>>(x407<x408)));

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x410 = 14834U;
	static volatile uint16_t x411 = 24U;
	uint32_t x412 = 2U;
	int32_t t61 = 198625;

	t61 = (x409^(x410>>(x411<x412)));

	if (t61 != 14605) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x421 = 263877U;
	int16_t x422 = 5;
	uint32_t x423 = 1678U;
	uint32_t t62 = 701U;

	t62 = (x421^(x422>>(x423<x424)));

	if (t62 != 263879U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x437 = 15U;
	uint64_t x438 = UINT64_MAX;
	int64_t x439 = INT64_MAX;
	volatile uint64_t t63 = 7811265LLU;

	t63 = (x437^(x438>>(x439<x440)));

	if (t63 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x445 = UINT16_MAX;
	static uint64_t x446 = UINT64_MAX;
	int8_t x447 = -2;
	volatile int32_t x448 = INT32_MIN;
	uint64_t t64 = 39582021255LLU;

	t64 = (x445^(x446>>(x447<x448)));

	if (t64 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x450 = 16U;
	int32_t x451 = INT32_MIN;

	t65 = (x449^(x450>>(x451<x452)));

	if (t65 != 6422700U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x453 = INT8_MIN;
	uint32_t x454 = 110535453U;
	int16_t x455 = -17;
	int32_t x456 = INT32_MAX;
	uint32_t t66 = 5U;

	t66 = (x453^(x454>>(x455<x456)));

	if (t66 != 4239699470U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x457 = -4555;
	volatile uint64_t x458 = 495983748139864277LLU;
	static int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MIN;
	static volatile uint64_t t67 = 6890996LLU;

	t67 = (x457^(x458>>(x459<x460)));

	if (t67 != 17950760325569691360LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x461 = INT32_MAX;
	uint8_t x462 = UINT8_MAX;
	static int16_t x463 = INT16_MAX;
	volatile int32_t x464 = -121997318;
	static volatile int32_t t68 = 5057784;

	t68 = (x461^(x462>>(x463<x464)));

	if (t68 != 2147483392) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x465 = INT32_MIN;
	uint16_t x466 = 38U;
	volatile int64_t x467 = INT64_MAX;
	volatile uint32_t x468 = 1593U;

	t69 = (x465^(x466>>(x467<x468)));

	if (t69 != -2147483610) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x469 = -5;
	uint8_t x470 = 10U;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t70 = 2;

	t70 = (x469^(x470>>(x471<x472)));

	if (t70 != -15) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x477 = 8;
	uint32_t x478 = UINT32_MAX;
	int16_t x479 = INT16_MIN;
	volatile int16_t x480 = INT16_MIN;
	volatile uint32_t t71 = 1321U;

	t71 = (x477^(x478>>(x479<x480)));

	if (t71 != 4294967287U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x482 = UINT8_MAX;
	int64_t x483 = INT64_MIN;
	volatile int8_t x484 = INT8_MIN;
	int64_t t72 = -276791129711852745LL;

	t72 = (x481^(x482>>(x483<x484)));

	if (t72 != 831471802LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x489 = 14U;
	static int32_t x490 = 88564;
	int16_t x491 = INT16_MIN;
	int16_t x492 = INT16_MIN;
	volatile uint32_t t73 = 73720052U;

	t73 = (x489^(x490>>(x491<x492)));

	if (t73 != 88570U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x493 = 98U;
	int64_t x495 = -8LL;
	volatile uint16_t x496 = 0U;
	static int64_t t74 = -1382559LL;

	t74 = (x493^(x494>>(x495<x496)));

	if (t74 != 13601867480519861LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x497 = -1;
	int8_t x498 = 1;
	int64_t x499 = INT64_MIN;
	volatile int8_t x500 = INT8_MIN;

	t75 = (x497^(x498>>(x499<x500)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x502 = INT64_MAX;
	volatile int64_t x503 = -1LL;
	static int64_t t76 = 1146LL;

	t76 = (x501^(x502>>(x503<x504)));

	if (t76 != 9223372036854775745LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x513 = 7477355273606842LLU;
	uint16_t x514 = 9853U;
	uint16_t x516 = UINT16_MAX;
	volatile uint64_t t77 = 63977444LLU;

	t77 = (x513^(x514>>(x515<x516)));

	if (t77 != 7477355273613511LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x525 = 1U;

	t78 = (x525^(x526>>(x527<x528)));

	if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x529 = 549727;
	volatile int16_t x530 = INT16_MAX;
	uint32_t x531 = 49668787U;
	volatile int8_t x532 = -1;
	volatile int32_t t79 = -52624748;

	t79 = (x529^(x530>>(x531<x532)));

	if (t79 != 548000) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x533 = -6951;
	static int8_t x534 = 52;
	uint64_t x535 = 30395581601LLU;
	uint8_t x536 = 0U;
	static int32_t t80 = -491147;

	t80 = (x533^(x534>>(x535<x536)));

	if (t80 != -6931) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x538 = INT8_MAX;
	volatile int8_t x539 = INT8_MIN;
	static volatile int16_t x540 = -14;
	static volatile int32_t t81 = -7891;

	t81 = (x537^(x538>>(x539<x540)));

	if (t81 != -64) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x542 = 122571;
	static int16_t x543 = INT16_MIN;
	uint32_t x544 = UINT32_MAX;
	volatile uint64_t t82 = 5LLU;

	t82 = (x541^(x542>>(x543<x544)));

	if (t82 != 7082260488012320323LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x545 = INT32_MAX;
	uint8_t x546 = UINT8_MAX;
	uint8_t x547 = 6U;
	uint16_t x548 = 191U;
	int32_t t83 = 468376;

	t83 = (x545^(x546>>(x547<x548)));

	if (t83 != 2147483520) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x553 = 16U;
	uint64_t x554 = 340984432090698LLU;
	int64_t x555 = -1LL;
	static int8_t x556 = INT8_MIN;
	uint64_t t84 = 2081111828141LLU;

	t84 = (x553^(x554>>(x555<x556)));

	if (t84 != 340984432090714LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x557 = UINT64_MAX;
	uint8_t x558 = UINT8_MAX;
	int32_t x559 = INT32_MIN;
	uint16_t x560 = 27103U;
	uint64_t t85 = 706963LLU;

	t85 = (x557^(x558>>(x559<x560)));

	if (t85 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x573 = -1;
	uint16_t x574 = UINT16_MAX;

	t86 = (x573^(x574>>(x575<x576)));

	if (t86 != -65536) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x582 = 16;
	int64_t x583 = -1LL;
	volatile int32_t t87 = 616226939;

	t87 = (x581^(x582>>(x583<x584)));

	if (t87 != -9) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x590 = 14984LLU;
	uint32_t x591 = 471106U;
	uint16_t x592 = UINT16_MAX;
	uint64_t t88 = 11563992LLU;

	t88 = (x589^(x590>>(x591<x592)));

	if (t88 != 50551LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x593 = 389463015754271LLU;
	static int8_t x595 = -1;
	static int32_t x596 = INT32_MIN;
	static volatile uint64_t t89 = 623165LLU;

	t89 = (x593^(x594>>(x595<x596)));

	if (t89 != 389463015771176LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x597 = INT64_MIN;
	static int32_t x598 = 4042008;
	volatile int64_t x599 = INT64_MAX;
	volatile uint16_t x600 = 3148U;
	int64_t t90 = -7741784LL;

	t90 = (x597^(x598>>(x599<x600)));

	if (t90 != -9223372036850733800LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x601 = -33466;
	uint64_t x604 = 163278151820555LLU;

	t91 = (x601^(x602>>(x603<x604)));

	if (t91 != 18446744073709456373LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x605 = INT32_MAX;
	int16_t x606 = INT16_MAX;
	static volatile uint16_t x608 = UINT16_MAX;
	int32_t t92 = -401973;

	t92 = (x605^(x606>>(x607<x608)));

	if (t92 != 2147450880) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x613 = INT16_MIN;
	static int32_t x614 = 57606;
	int16_t x615 = 4;
	int16_t x616 = INT16_MAX;
	static int32_t t93 = 3531;

	t93 = (x613^(x614>>(x615<x616)));

	if (t93 != -3965) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x625 = 5U;
	volatile int64_t x626 = INT64_MAX;
	int8_t x628 = -1;

	t94 = (x625^(x626>>(x627<x628)));

	if (t94 != 4611686018427387898LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x629 = INT8_MAX;
	static volatile int32_t x630 = 647201151;
	int8_t x631 = 3;
	int32_t x632 = -1;
	volatile int32_t t95 = -1325330;

	t95 = (x629^(x630>>(x631<x632)));

	if (t95 != 647201024) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x638 = 17650;
	int8_t x639 = INT8_MIN;
	int64_t x640 = 20283024683168181LL;
	static volatile int32_t t96 = 1;

	t96 = (x637^(x638>>(x639<x640)));

	if (t96 != -23943) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x650 = 14975363545567551LL;
	static int16_t x651 = -1;
	volatile int64_t x652 = 44584802531169563LL;
	volatile int64_t t97 = -1583317878335LL;

	t97 = (x649^(x650>>(x651<x652)));

	if (t97 != 7487681771942418LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x653 = 13254918U;
	static uint8_t x654 = 5U;
	int16_t x655 = -30;
	uint32_t x656 = UINT32_MAX;
	static volatile uint32_t t98 = 0U;

	t98 = (x653^(x654>>(x655<x656)));

	if (t98 != 13254916U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x657 = INT64_MIN;
	static uint32_t x659 = 1107U;
	int64_t x660 = -1LL;
	int64_t t99 = 149078767630LL;

	t99 = (x657^(x658>>(x659<x660)));

	if (t99 != -9223372034707292161LL) { NG(); } else { ; }
	
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

