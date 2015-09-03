#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x5 = 1U;
int64_t t1 = 6048LL;
static volatile int64_t t2 = 42144509559990LL;
int64_t x24 = INT64_MIN;
static volatile int32_t x29 = INT32_MIN;
uint8_t x30 = 120U;
volatile int32_t t6 = -522539292;
uint64_t x54 = UINT64_MAX;
int32_t t8 = -41631;
int32_t x65 = INT32_MIN;
static uint32_t x70 = 10160107U;
int64_t t10 = -2378LL;
static uint64_t x82 = 1176733303464LLU;
int32_t x104 = INT32_MIN;
int16_t x113 = INT16_MAX;
uint64_t x121 = 79371881359438348LLU;
static volatile uint8_t x122 = 82U;
uint16_t x124 = 1776U;
uint32_t t16 = 405U;
uint32_t x154 = 752038U;
volatile uint32_t t23 = 137568U;
static int64_t x186 = INT64_MAX;
volatile int64_t x199 = -473982682384LL;
int64_t t26 = 4096758925LL;
static uint16_t x206 = 7U;
int32_t t28 = -632;
int16_t x217 = -221;
int64_t x218 = 2465863LL;
int64_t t31 = 52247994017LL;
volatile int8_t x235 = 11;
int32_t x248 = INT32_MAX;
volatile uint8_t x261 = 115U;
static int64_t x291 = INT64_MIN;
uint64_t x302 = 25532191137380LLU;
static uint16_t x303 = UINT16_MAX;
volatile int64_t x309 = -79076506435729392LL;
static uint32_t x322 = 0U;
volatile uint64_t x325 = UINT64_MAX;
uint64_t x326 = 32LLU;
static int32_t x327 = INT32_MIN;
uint64_t t41 = 404LLU;
int16_t x347 = 0;
int64_t t42 = 1LL;
static volatile int32_t t44 = -34632;
int8_t x364 = INT8_MAX;
uint64_t t45 = 3720684135402LLU;
int64_t x371 = -15LL;
uint8_t x373 = 64U;
int8_t x374 = INT8_MAX;
volatile int64_t x377 = INT64_MIN;
static int16_t x379 = INT16_MAX;
uint16_t x385 = UINT16_MAX;
volatile uint64_t t49 = 1711376LLU;
uint16_t x406 = 12959U;
uint64_t t51 = 80658194223335LLU;
int8_t x426 = 1;
uint64_t x428 = 3260628432512296876LLU;
uint32_t x451 = UINT32_MAX;
static int32_t x459 = INT32_MAX;
uint8_t x462 = 44U;
uint64_t x486 = 277201276164658LLU;
int16_t x496 = INT16_MAX;
int32_t x498 = INT32_MAX;
uint16_t x499 = 20U;
int64_t x510 = 34360LL;
volatile uint8_t x517 = 30U;
int8_t x520 = -31;
int32_t x526 = INT32_MAX;
uint32_t x533 = UINT32_MAX;
int16_t x535 = -1;
uint8_t x540 = UINT8_MAX;
uint8_t x563 = 2U;
int8_t x572 = INT8_MIN;
uint64_t x574 = 194251253810919LLU;
uint8_t x577 = 29U;
static uint16_t x590 = 168U;
uint32_t x594 = 1855147397U;
int64_t x596 = INT64_MIN;
uint64_t x605 = 65558941624943LLU;
uint64_t x606 = 968LLU;
uint64_t x607 = UINT64_MAX;
volatile int32_t x611 = -57966556;
static int32_t t80 = 48;
uint16_t x639 = 7U;
int32_t x640 = -8338144;
volatile uint64_t t86 = 1980103810691LLU;
int32_t x665 = -1;
int16_t x668 = 539;
int64_t x673 = -1LL;
volatile uint64_t x678 = 52671LLU;
volatile uint64_t t89 = 0LLU;
int64_t x688 = INT64_MIN;
int32_t x714 = 12995774;
int16_t x742 = 90;
int32_t x743 = -3806;
int16_t x745 = -88;


void f0(void) {
	static uint64_t x6 = 493995LLU;
	volatile uint32_t x7 = 19128609U;
	uint32_t x8 = 956U;
	volatile uint64_t t0 = 423441848LLU;

	t0 = (x5+(x6>>(x7<=x8)));

	if (t0 != 493996LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 261366316LL;
	static uint16_t x10 = UINT16_MAX;
	static uint64_t x11 = UINT64_MAX;
	volatile int64_t x12 = INT64_MIN;

	t1 = (x9+(x10>>(x11<=x12)));

	if (t1 != 261431851LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = -1;
	volatile int32_t x16 = INT32_MIN;

	t2 = (x13+(x14>>(x15<=x16)));

	if (t2 != 254LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 710610U;
	int16_t x22 = INT16_MAX;
	int64_t x23 = -473954175979207LL;
	uint32_t t3 = 607U;

	t3 = (x21+(x22>>(x23<=x24)));

	if (t3 != 743377U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	int16_t x26 = 6;
	static volatile uint64_t x27 = UINT64_MAX;
	volatile int64_t x28 = -1LL;
	int32_t t4 = 874095;

	t4 = (x25+(x26>>(x27<=x28)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MAX;
	volatile int32_t t5 = -280682992;

	t5 = (x29+(x30>>(x31<=x32)));

	if (t5 != -2147483588) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = -37;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = UINT32_MAX;

	t6 = (x49+(x50>>(x51<=x52)));

	if (t6 != 32730) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x53 = -1LL;
	volatile uint8_t x55 = UINT8_MAX;
	uint16_t x56 = UINT16_MAX;
	uint64_t t7 = 292205484LLU;

	t7 = (x53+(x54>>(x55<=x56)));

	if (t7 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = INT8_MIN;
	volatile uint8_t x62 = 2U;
	int64_t x63 = INT64_MIN;
	uint32_t x64 = UINT32_MAX;

	t8 = (x61+(x62>>(x63<=x64)));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x66 = 4;
	int8_t x67 = INT8_MIN;
	static uint32_t x68 = 805468650U;
	volatile int32_t t9 = 0;

	t9 = (x65+(x66>>(x67<=x68)));

	if (t9 != -2147483644) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x69 = 361216537396LL;
	int8_t x71 = INT8_MIN;
	uint8_t x72 = UINT8_MAX;

	t10 = (x69+(x70>>(x71<=x72)));

	if (t10 != 361221617449LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x81 = INT32_MIN;
	static int8_t x83 = 4;
	int16_t x84 = -38;
	static uint64_t t11 = 1LLU;

	t11 = (x81+(x82>>(x83<=x84)));

	if (t11 != 1174585819816LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 312U;
	static uint32_t x103 = UINT32_MAX;
	uint32_t t12 = 116051U;

	t12 = (x101+(x102>>(x103<=x104)));

	if (t12 != 65847U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x114 = 7541;
	static volatile int32_t x115 = 202167;
	uint32_t x116 = 27594U;
	int32_t t13 = -18525;

	t13 = (x113+(x114>>(x115<=x116)));

	if (t13 != 40308) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x123 = 27350845U;
	uint64_t t14 = 766642071LLU;

	t14 = (x121+(x122>>(x123<=x124)));

	if (t14 != 79371881359438430LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x133 = -65374567176135LL;
	volatile uint16_t x134 = 13U;
	int64_t x135 = INT64_MIN;
	static uint32_t x136 = 118400U;
	static volatile int64_t t15 = 538352357626LL;

	t15 = (x133+(x134>>(x135<=x136)));

	if (t15 != -65374567176129LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x145 = 109116706U;
	volatile uint32_t x146 = UINT32_MAX;
	volatile int16_t x147 = INT16_MIN;
	uint8_t x148 = 2U;

	t16 = (x145+(x146>>(x147<=x148)));

	if (t16 != 2256600353U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x149 = 14U;
	uint16_t x150 = 6062U;
	static uint8_t x151 = 0U;
	uint8_t x152 = 2U;
	static int32_t t17 = 26495789;

	t17 = (x149+(x150>>(x151<=x152)));

	if (t17 != 3045) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x153 = -1;
	int32_t x155 = -1;
	uint64_t x156 = 716595142LLU;
	volatile uint32_t t18 = 0U;

	t18 = (x153+(x154>>(x155<=x156)));

	if (t18 != 752037U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x157 = 2595918U;
	volatile uint8_t x158 = 7U;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = 4101412340075LL;
	volatile uint32_t t19 = 5511492U;

	t19 = (x157+(x158>>(x159<=x160)));

	if (t19 != 2595921U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x165 = INT8_MIN;
	static int64_t x166 = INT64_MAX;
	volatile int16_t x167 = 30;
	uint32_t x168 = 2462365U;
	int64_t t20 = -1LL;

	t20 = (x165+(x166>>(x167<=x168)));

	if (t20 != 4611686018427387775LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x169 = -2;
	volatile uint32_t x170 = 26U;
	uint8_t x171 = 15U;
	uint64_t x172 = UINT64_MAX;
	uint32_t t21 = 7U;

	t21 = (x169+(x170>>(x171<=x172)));

	if (t21 != 11U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x173 = 46U;
	uint64_t x174 = 315637566739LLU;
	int32_t x175 = -1;
	int8_t x176 = INT8_MAX;
	volatile uint64_t t22 = 490LLU;

	t22 = (x173+(x174>>(x175<=x176)));

	if (t22 != 157818783415LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x177 = UINT32_MAX;
	volatile uint16_t x178 = 59U;
	int64_t x179 = -1LL;
	volatile uint16_t x180 = 23864U;

	t23 = (x177+(x178>>(x179<=x180)));

	if (t23 != 28U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x181 = INT64_MIN;
	static uint16_t x182 = UINT16_MAX;
	uint16_t x183 = 22U;
	int32_t x184 = -1;
	volatile int64_t t24 = -15977387784113LL;

	t24 = (x181+(x182>>(x183<=x184)));

	if (t24 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x185 = -1652210016LL;
	volatile int32_t x187 = 63832706;
	int32_t x188 = -5;
	int64_t t25 = 839267415960262786LL;

	t25 = (x185+(x186>>(x187<=x188)));

	if (t25 != 9223372035202565791LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x197 = INT32_MIN;
	volatile int64_t x198 = 1150400285465LL;
	uint16_t x200 = UINT16_MAX;

	t26 = (x197+(x198>>(x199<=x200)));

	if (t26 != 573052659084LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x205 = INT16_MIN;
	volatile int8_t x207 = -1;
	int16_t x208 = -3;
	int32_t t27 = -443;

	t27 = (x205+(x206>>(x207<=x208)));

	if (t27 != -32761) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x209 = -1;
	static uint16_t x210 = 24045U;
	volatile int64_t x211 = INT64_MIN;
	uint16_t x212 = UINT16_MAX;

	t28 = (x209+(x210>>(x211<=x212)));

	if (t28 != 12021) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x219 = 25803551542LLU;
	uint64_t x220 = UINT64_MAX;
	int64_t t29 = -32438941LL;

	t29 = (x217+(x218>>(x219<=x220)));

	if (t29 != 1232710LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x226 = INT32_MAX;
	static int16_t x227 = -1;
	static uint8_t x228 = 1U;
	static volatile int32_t t30 = 1014122;

	t30 = (x225+(x226>>(x227<=x228)));

	if (t30 != 1073807358) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x229 = -1LL;
	uint8_t x230 = 8U;
	uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 27476020U;

	t31 = (x229+(x230>>(x231<=x232)));

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x233 = UINT16_MAX;
	static uint64_t x234 = UINT64_MAX;
	static int64_t x236 = INT64_MAX;
	volatile uint64_t t32 = 5430031387LLU;

	t32 = (x233+(x234>>(x235<=x236)));

	if (t32 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = UINT64_MAX;
	uint64_t x247 = 2020305835786LLU;
	volatile uint64_t t33 = 24666451572LLU;

	t33 = (x245+(x246>>(x247<=x248)));

	if (t33 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x253 = INT32_MIN;
	static int32_t x254 = INT32_MAX;
	volatile int16_t x255 = -1;
	int32_t x256 = INT32_MAX;
	static int32_t t34 = -20191183;

	t34 = (x253+(x254>>(x255<=x256)));

	if (t34 != -1073741825) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = INT8_MAX;
	int16_t x264 = -1;
	uint32_t t35 = 785409221U;

	t35 = (x261+(x262>>(x263<=x264)));

	if (t35 != 114U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MAX;
	int32_t x292 = -398829628;
	static volatile int32_t t36 = -1072746120;

	t36 = (x289+(x290>>(x291<=x292)));

	if (t36 != 1073709055) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x293 = 1;
	uint8_t x294 = 30U;
	int8_t x295 = 16;
	uint8_t x296 = 47U;
	volatile int32_t t37 = 15762;

	t37 = (x293+(x294>>(x295<=x296)));

	if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x301 = 12;
	uint32_t x304 = UINT32_MAX;
	static volatile uint64_t t38 = 242610LLU;

	t38 = (x301+(x302>>(x303<=x304)));

	if (t38 != 12766095568702LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x310 = 4866LLU;
	static volatile int8_t x311 = -12;
	static int16_t x312 = INT16_MIN;
	volatile uint64_t t39 = 507LLU;

	t39 = (x309+(x310>>(x311<=x312)));

	if (t39 != 18367667567273827090LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x321 = -9;
	int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t40 = 2U;

	t40 = (x321+(x322>>(x323<=x324)));

	if (t40 != 4294967287U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x328 = UINT16_MAX;

	t41 = (x325+(x326>>(x327<=x328)));

	if (t41 != 15LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x345 = -1LL;
	int64_t x346 = INT64_MAX;
	uint8_t x348 = UINT8_MAX;

	t42 = (x345+(x346>>(x347<=x348)));

	if (t42 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x353 = 14528U;
	uint32_t x354 = 810534U;
	int16_t x355 = -428;
	int16_t x356 = -36;
	volatile uint32_t t43 = 30U;

	t43 = (x353+(x354>>(x355<=x356)));

	if (t43 != 419795U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x357 = -1;
	uint8_t x358 = 3U;
	static int32_t x359 = INT32_MIN;
	int32_t x360 = -1510369;

	t44 = (x357+(x358>>(x359<=x360)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x361 = INT16_MIN;
	static uint64_t x362 = UINT64_MAX;
	int64_t x363 = 43142LL;

	t45 = (x361+(x362>>(x363<=x364)));

	if (t45 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x369 = INT64_MIN;
	static int64_t x370 = 1217129204587LL;
	volatile int8_t x372 = 2;
	volatile int64_t t46 = 449381195668LL;

	t46 = (x369+(x370>>(x371<=x372)));

	if (t46 != -9223371428290173515LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 127U;
	static volatile int32_t t47 = 969822573;

	t47 = (x373+(x374>>(x375<=x376)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x378 = 11U;
	int32_t x380 = INT32_MAX;
	static volatile int64_t t48 = 1093076317LL;

	t48 = (x377+(x378>>(x379<=x380)));

	if (t48 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x386 = 2894712960013704487LLU;
	int64_t x387 = INT64_MAX;
	int16_t x388 = INT16_MIN;

	t49 = (x385+(x386>>(x387<=x388)));

	if (t49 != 2894712960013770022LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x405 = 1348368544887500948LLU;
	volatile int64_t x407 = INT64_MAX;
	int8_t x408 = -14;
	volatile uint64_t t50 = 133600777LLU;

	t50 = (x405+(x406>>(x407<=x408)));

	if (t50 != 1348368544887513907LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x409 = INT32_MAX;
	uint64_t x410 = 18LLU;
	static int64_t x411 = INT64_MAX;
	int8_t x412 = 0;

	t51 = (x409+(x410>>(x411<=x412)));

	if (t51 != 2147483665LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x413 = 0U;
	int8_t x414 = INT8_MAX;
	uint32_t x415 = UINT32_MAX;
	int32_t x416 = INT32_MAX;
	int32_t t52 = 626436031;

	t52 = (x413+(x414>>(x415<=x416)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MAX;
	int32_t x419 = -490;
	uint8_t x420 = 28U;
	int32_t t53 = 57722078;

	t53 = (x417+(x418>>(x419<=x420)));

	if (t53 != -65) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x425 = 567;
	static uint8_t x427 = 6U;
	static volatile int32_t t54 = 0;

	t54 = (x425+(x426>>(x427<=x428)));

	if (t54 != 567) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x449 = 88634522534077718LLU;
	static volatile uint32_t x450 = 1453U;
	int32_t x452 = INT32_MAX;
	volatile uint64_t t55 = 1037584367515LLU;

	t55 = (x449+(x450>>(x451<=x452)));

	if (t55 != 88634522534079171LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x457 = 3849442LLU;
	int16_t x458 = INT16_MAX;
	static uint32_t x460 = 1630415U;
	uint64_t t56 = 1387LLU;

	t56 = (x457+(x458>>(x459<=x460)));

	if (t56 != 3882209LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x461 = 100015518LLU;
	uint8_t x463 = 1U;
	static int32_t x464 = INT32_MAX;
	volatile uint64_t t57 = 5407458392658LLU;

	t57 = (x461+(x462>>(x463<=x464)));

	if (t57 != 100015540LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x477 = 90U;
	uint64_t x478 = UINT64_MAX;
	static volatile int32_t x479 = -1;
	static uint32_t x480 = 10710435U;
	uint64_t t58 = 13341265539582LLU;

	t58 = (x477+(x478>>(x479<=x480)));

	if (t58 != 89LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x485 = -1;
	int64_t x487 = INT64_MAX;
	int32_t x488 = -1;
	volatile uint64_t t59 = 2000662LLU;

	t59 = (x485+(x486>>(x487<=x488)));

	if (t59 != 277201276164657LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x493 = INT8_MIN;
	static int16_t x494 = INT16_MAX;
	volatile int32_t x495 = -220;
	static int32_t t60 = -122458681;

	t60 = (x493+(x494>>(x495<=x496)));

	if (t60 != 16255) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x497 = INT32_MIN;
	int32_t x500 = INT32_MAX;
	volatile int32_t t61 = -8930463;

	t61 = (x497+(x498>>(x499<=x500)));

	if (t61 != -1073741825) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x509 = INT8_MIN;
	int8_t x511 = INT8_MIN;
	int8_t x512 = 1;
	volatile int64_t t62 = -10LL;

	t62 = (x509+(x510>>(x511<=x512)));

	if (t62 != 17052LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x513 = 28942362978LLU;
	volatile int16_t x514 = INT16_MAX;
	int8_t x515 = 19;
	volatile uint32_t x516 = 12309905U;
	uint64_t t63 = 12LLU;

	t63 = (x513+(x514>>(x515<=x516)));

	if (t63 != 28942379361LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x518 = 26551U;
	volatile uint64_t x519 = UINT64_MAX;
	int32_t t64 = 15;

	t64 = (x517+(x518>>(x519<=x520)));

	if (t64 != 26581) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x525 = 76U;
	int8_t x527 = INT8_MIN;
	volatile uint64_t x528 = UINT64_MAX;
	int32_t t65 = 482;

	t65 = (x525+(x526>>(x527<=x528)));

	if (t65 != 1073741899) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x529 = -1;
	int64_t x530 = 3LL;
	volatile uint64_t x531 = UINT64_MAX;
	int32_t x532 = INT32_MIN;
	int64_t t66 = 14816623567195LL;

	t66 = (x529+(x530>>(x531<=x532)));

	if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x534 = UINT8_MAX;
	int64_t x536 = 4LL;
	volatile uint32_t t67 = 1U;

	t67 = (x533+(x534>>(x535<=x536)));

	if (t67 != 126U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x537 = -22891259LL;
	int8_t x538 = 22;
	int64_t x539 = INT64_MIN;
	volatile int64_t t68 = 1LL;

	t68 = (x537+(x538>>(x539<=x540)));

	if (t68 != -22891248LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x541 = 14605721LLU;
	int64_t x542 = 2642261780LL;
	int32_t x543 = INT32_MIN;
	static volatile int16_t x544 = 2;
	volatile uint64_t t69 = 26650251933601512LLU;

	t69 = (x541+(x542>>(x543<=x544)));

	if (t69 != 1335736611LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x561 = -1;
	static int64_t x562 = INT64_MAX;
	int16_t x564 = 1;
	int64_t t70 = 18928301982LL;

	t70 = (x561+(x562>>(x563<=x564)));

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x569 = INT8_MIN;
	int8_t x570 = INT8_MAX;
	int64_t x571 = INT64_MAX;
	volatile int32_t t71 = 63;

	t71 = (x569+(x570>>(x571<=x572)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x573 = 0U;
	uint32_t x575 = 3U;
	int8_t x576 = -1;
	uint64_t t72 = 50294184LLU;

	t72 = (x573+(x574>>(x575<=x576)));

	if (t72 != 97125626905459LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x578 = INT8_MAX;
	int8_t x579 = -1;
	int64_t x580 = -1310211LL;
	volatile int32_t t73 = -47686;

	t73 = (x577+(x578>>(x579<=x580)));

	if (t73 != 156) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x589 = INT64_MIN;
	int64_t x591 = -1LL;
	static volatile int64_t x592 = INT64_MIN;
	volatile int64_t t74 = 6249432748073LL;

	t74 = (x589+(x590>>(x591<=x592)));

	if (t74 != -9223372036854775640LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x593 = INT64_MIN;
	static int32_t x595 = INT32_MIN;
	static int64_t t75 = -442200LL;

	t75 = (x593+(x594>>(x595<=x596)));

	if (t75 != -9223372034999628411LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x608 = -1;
	volatile uint64_t t76 = 1446864771227874970LLU;

	t76 = (x605+(x606>>(x607<=x608)));

	if (t76 != 65558941625427LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x609 = INT32_MAX;
	uint64_t x610 = UINT64_MAX;
	int32_t x612 = INT32_MAX;
	uint64_t t77 = 99LLU;

	t77 = (x609+(x610>>(x611<=x612)));

	if (t77 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x613 = INT32_MIN;
	uint8_t x614 = UINT8_MAX;
	int32_t x615 = 120;
	static int64_t x616 = INT64_MIN;
	volatile int32_t t78 = 1;

	t78 = (x613+(x614>>(x615<=x616)));

	if (t78 != -2147483393) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x617 = -1;
	static uint8_t x618 = 2U;
	int64_t x619 = 87333442263LL;
	int16_t x620 = 1;
	volatile int32_t t79 = -25598409;

	t79 = (x617+(x618>>(x619<=x620)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x621 = INT32_MIN;
	static volatile uint16_t x622 = UINT16_MAX;
	uint8_t x623 = UINT8_MAX;
	int64_t x624 = INT64_MIN;

	t80 = (x621+(x622>>(x623<=x624)));

	if (t80 != -2147418113) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x629 = 143952687U;
	uint64_t x630 = 1880873742305LLU;
	int32_t x631 = INT32_MAX;
	uint8_t x632 = 0U;
	uint64_t t81 = 7LLU;

	t81 = (x629+(x630>>(x631<=x632)));

	if (t81 != 1881017694992LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x637 = INT8_MAX;
	int64_t x638 = 1831586948247LL;
	int64_t t82 = -130LL;

	t82 = (x637+(x638>>(x639<=x640)));

	if (t82 != 1831586948374LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x641 = INT32_MIN;
	volatile int64_t x642 = 158714LL;
	volatile int32_t x643 = -4190414;
	uint64_t x644 = UINT64_MAX;
	int64_t t83 = 22259475LL;

	t83 = (x641+(x642>>(x643<=x644)));

	if (t83 != -2147404291LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x649 = INT8_MIN;
	static uint64_t x650 = UINT64_MAX;
	static int32_t x651 = INT32_MAX;
	int64_t x652 = -49890819654456714LL;
	uint64_t t84 = 58163LLU;

	t84 = (x649+(x650>>(x651<=x652)));

	if (t84 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x653 = UINT8_MAX;
	static uint16_t x654 = 4659U;
	uint16_t x655 = 104U;
	uint64_t x656 = UINT64_MAX;
	volatile int32_t t85 = -1003359;

	t85 = (x653+(x654>>(x655<=x656)));

	if (t85 != 2584) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x657 = 1715LLU;
	int16_t x658 = 0;
	int16_t x659 = -128;
	static int32_t x660 = -1;

	t86 = (x657+(x658>>(x659<=x660)));

	if (t86 != 1715LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x666 = INT64_MAX;
	volatile int64_t x667 = INT64_MIN;
	volatile int64_t t87 = -14836651457092LL;

	t87 = (x665+(x666>>(x667<=x668)));

	if (t87 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x674 = 29U;
	static uint32_t x675 = UINT32_MAX;
	int64_t x676 = INT64_MIN;
	int64_t t88 = -552669549095LL;

	t88 = (x673+(x674>>(x675<=x676)));

	if (t88 != 28LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x677 = INT16_MAX;
	volatile uint64_t x679 = 1797LLU;
	uint8_t x680 = 29U;

	t89 = (x677+(x678>>(x679<=x680)));

	if (t89 != 85438LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x685 = INT32_MIN;
	static int16_t x686 = 0;
	int64_t x687 = -1LL;
	static volatile int32_t t90 = INT32_MIN;

	t90 = (x685+(x686>>(x687<=x688)));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x689 = -1;
	uint32_t x690 = UINT32_MAX;
	uint8_t x691 = 55U;
	static int32_t x692 = -1;
	uint32_t t91 = 9U;

	t91 = (x689+(x690>>(x691<=x692)));

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x701 = INT64_MIN;
	static uint64_t x702 = 4047LLU;
	volatile uint32_t x703 = 379U;
	uint16_t x704 = 134U;
	volatile uint64_t t92 = 28357601551LLU;

	t92 = (x701+(x702>>(x703<=x704)));

	if (t92 != 9223372036854779855LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x713 = INT8_MAX;
	int32_t x715 = INT32_MIN;
	volatile uint16_t x716 = 80U;
	volatile int32_t t93 = -38492;

	t93 = (x713+(x714>>(x715<=x716)));

	if (t93 != 6498014) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x725 = -669656512;
	uint8_t x726 = 59U;
	int16_t x727 = INT16_MIN;
	int8_t x728 = -1;
	volatile int32_t t94 = -4363;

	t94 = (x725+(x726>>(x727<=x728)));

	if (t94 != -669656483) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x729 = INT64_MIN;
	uint64_t x730 = 3050171287284782LLU;
	static int8_t x731 = 53;
	volatile int8_t x732 = INT8_MIN;
	static uint64_t t95 = 19LLU;

	t95 = (x729+(x730>>(x731<=x732)));

	if (t95 != 9226422208142060590LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x733 = INT64_MIN;
	uint32_t x734 = 17921U;
	int16_t x735 = -11;
	int64_t x736 = -1LL;
	int64_t t96 = 65850101188LL;

	t96 = (x733+(x734>>(x735<=x736)));

	if (t96 != -9223372036854766848LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x737 = -8;
	int16_t x738 = INT16_MAX;
	int32_t x739 = -1;
	static uint64_t x740 = 28241633087351LLU;
	volatile int32_t t97 = -3969;

	t97 = (x737+(x738>>(x739<=x740)));

	if (t97 != 32759) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x741 = INT64_MIN;
	volatile int32_t x744 = INT32_MIN;
	static int64_t t98 = -81186507LL;

	t98 = (x741+(x742>>(x743<=x744)));

	if (t98 != -9223372036854775718LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x746 = INT8_MAX;
	uint8_t x747 = 12U;
	uint32_t x748 = UINT32_MAX;
	volatile int32_t t99 = 101572;

	t99 = (x745+(x746>>(x747<=x748)));

	if (t99 != -25) { NG(); } else { ; }
	
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

