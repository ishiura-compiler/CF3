#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 0U;
int8_t x17 = INT8_MIN;
int32_t t2 = -223177;
int64_t x27 = -1LL;
static volatile int8_t x31 = INT8_MAX;
int64_t x32 = INT64_MAX;
int8_t x42 = -11;
int32_t x43 = -1;
int16_t x44 = INT16_MAX;
static volatile int64_t x46 = -1LL;
static int16_t x50 = INT16_MAX;
volatile uint64_t x73 = 5148657915025986355LLU;
volatile int32_t t12 = -26;
static int32_t x138 = -1236262;
int64_t x141 = INT64_MIN;
uint32_t x143 = 477702585U;
volatile int32_t t16 = 9520;
volatile uint64_t x177 = 6681914LLU;
uint32_t x179 = 36952U;
static uint32_t x180 = 215917476U;
volatile int32_t x190 = INT32_MAX;
volatile int32_t t20 = -3537;
uint32_t x209 = 11015U;
static int64_t x210 = -2062478716922721LL;
int8_t x211 = INT8_MIN;
static int32_t t24 = 0;
uint32_t x234 = 5530U;
int64_t x235 = 38LL;
int8_t x239 = INT8_MIN;
int64_t x274 = INT64_MAX;
uint16_t x276 = UINT16_MAX;
int64_t x291 = -59652175LL;
int64_t x293 = -1LL;
int8_t x298 = -1;
int16_t x311 = INT16_MAX;
volatile int32_t t35 = 4400296;
volatile uint16_t x319 = 1U;
volatile int32_t t36 = 58556689;
volatile int64_t x329 = -1LL;
int32_t t37 = 902289;
int16_t x338 = -1;
int64_t x339 = INT64_MIN;
volatile int32_t x340 = INT32_MAX;
static int8_t x345 = INT8_MAX;
int32_t t40 = -6;
volatile int8_t x361 = -1;
int16_t x364 = INT16_MAX;
static uint16_t x372 = UINT16_MAX;
uint64_t x374 = 19137749717441LLU;
int16_t x379 = 14354;
uint32_t x380 = 13371644U;
static int8_t x386 = INT8_MAX;
int8_t x416 = -1;
int32_t t50 = 198349;
volatile int32_t t51 = -611517732;
volatile int32_t t52 = -609756828;
int8_t x461 = INT8_MIN;
static int32_t x462 = -6529;
int16_t x472 = INT16_MAX;
uint8_t x478 = 7U;
int32_t x480 = -1;
volatile int32_t t55 = -124;
static uint8_t x492 = 57U;
int64_t x504 = 23795813346847761LL;
int16_t x525 = INT16_MIN;
int8_t x537 = INT8_MIN;
int64_t x546 = INT64_MAX;
int8_t x561 = -1;
int8_t x562 = INT8_MIN;
static int32_t t66 = 77640;
int8_t x581 = INT8_MIN;
volatile int32_t t69 = -10340644;
uint64_t x594 = 534430027057LLU;
uint64_t x596 = UINT64_MAX;
static uint8_t x599 = 114U;
static int32_t t75 = -14189;
int64_t x660 = INT64_MAX;
int32_t t77 = 50261;
uint16_t x677 = 317U;
int32_t x679 = INT32_MIN;
volatile int32_t t79 = -48935;
int32_t x689 = -448379729;
int16_t x691 = -3166;
static uint32_t x692 = UINT32_MAX;
volatile int32_t t80 = 39;
volatile uint64_t x699 = 1LLU;
int32_t x702 = 543;
volatile uint32_t x720 = UINT32_MAX;
int16_t x722 = INT16_MAX;
static int16_t x723 = -1;
int64_t x730 = INT64_MAX;
volatile int16_t x749 = INT16_MIN;
int32_t t89 = 165;
uint64_t x756 = UINT64_MAX;
int64_t x759 = INT64_MIN;
int32_t x760 = -1;
static int16_t x763 = -13070;
volatile int8_t x770 = INT8_MIN;
static volatile int8_t x771 = INT8_MIN;
static uint64_t x774 = UINT64_MAX;
volatile int32_t x775 = -1;
static volatile int32_t t94 = 57;
static int64_t x795 = 43LL;
int8_t x799 = 0;
static uint64_t x822 = 34002435682LLU;


void f0(void) {
	static int8_t x2 = INT8_MIN;
	int32_t x3 = -1;
	uint16_t x4 = 5U;
	volatile int32_t t0 = -3584142;

	t0 = (x1==(x2/(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MAX;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t1 = -1;

	t1 = (x13==(x14/(x15<x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x18 = 5U;
	static uint16_t x19 = 2687U;
	static int32_t x20 = 5565;

	t2 = (x17==(x18/(x19<x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x25 = -1;
	static volatile uint8_t x26 = 4U;
	int64_t x28 = INT64_MAX;
	int32_t t3 = 5;

	t3 = (x25==(x26/(x27<x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = INT64_MAX;
	volatile int64_t x30 = 1331483LL;
	int32_t t4 = 29812633;

	t4 = (x29==(x30/(x31<x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = 489U;
	int32_t t5 = -60;

	t5 = (x41==(x42/(x43<x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 2978928317518LLU;
	int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MAX;
	volatile int32_t t6 = 559;

	t6 = (x45==(x46/(x47<x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x49 = 171727U;
	int32_t x51 = -1;
	uint16_t x52 = 11U;
	static int32_t t7 = 85699165;

	t7 = (x49==(x50/(x51<x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x61 = 2;
	static volatile int16_t x62 = 1347;
	static int32_t x63 = -274;
	static uint16_t x64 = 1015U;
	volatile int32_t t8 = -194053;

	t8 = (x61==(x62/(x63<x64)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	static uint32_t x71 = 82933694U;
	int32_t x72 = INT32_MAX;
	int32_t t9 = -3;

	t9 = (x69==(x70/(x71<x72)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 13646LLU;
	static int16_t x76 = -1;
	volatile int32_t t10 = 11004703;

	t10 = (x73==(x74/(x75<x76)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x105 = INT64_MAX;
	static volatile uint64_t x106 = 1246145LLU;
	int32_t x107 = -1;
	uint16_t x108 = 52U;
	volatile int32_t t11 = 1;

	t11 = (x105==(x106/(x107<x108)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x109 = -1LL;
	static int32_t x110 = -3377574;
	volatile int32_t x111 = -31243;
	int16_t x112 = -241;

	t12 = (x109==(x110/(x111<x112)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x133 = INT8_MAX;
	uint16_t x134 = 13597U;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 91855075U;
	volatile int32_t t13 = 32757200;

	t13 = (x133==(x134/(x135<x136)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x137 = 3000646LL;
	uint16_t x139 = 13U;
	static uint32_t x140 = UINT32_MAX;
	static int32_t t14 = 762;

	t14 = (x137==(x138/(x139<x140)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x142 = INT16_MIN;
	static int64_t x144 = INT64_MAX;
	static int32_t t15 = 337;

	t15 = (x141==(x142/(x143<x144)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x157 = -572;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	uint8_t x160 = UINT8_MAX;

	t16 = (x157==(x158/(x159<x160)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x178 = INT8_MAX;
	int32_t t17 = -5634;

	t17 = (x177==(x178/(x179<x180)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x181 = -1LL;
	int8_t x182 = -1;
	uint64_t x183 = 14580771633LLU;
	int8_t x184 = -5;
	static int32_t t18 = -614;

	t18 = (x181==(x182/(x183<x184)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x189 = INT32_MAX;
	static volatile int32_t x191 = INT32_MIN;
	uint8_t x192 = 1U;
	int32_t t19 = -4;

	t19 = (x189==(x190/(x191<x192)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x193 = 0;
	static int32_t x194 = INT32_MIN;
	uint32_t x195 = 2931U;
	int32_t x196 = INT32_MIN;

	t20 = (x193==(x194/(x195<x196)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x201 = 32;
	int32_t x202 = 6985583;
	int8_t x203 = INT8_MAX;
	uint32_t x204 = 226477544U;
	static volatile int32_t t21 = -18;

	t21 = (x201==(x202/(x203<x204)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x212 = 68;
	int32_t t22 = 664858;

	t22 = (x209==(x210/(x211<x212)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x225 = -1;
	static volatile uint8_t x226 = UINT8_MAX;
	uint64_t x227 = 13721602361LLU;
	int64_t x228 = INT64_MIN;
	static volatile int32_t t23 = -705265252;

	t23 = (x225==(x226/(x227<x228)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x229 = 0;
	int8_t x230 = 0;
	uint16_t x231 = 4367U;
	uint64_t x232 = 114297LLU;

	t24 = (x229==(x230/(x231<x232)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x233 = 4;
	int16_t x236 = INT16_MAX;
	static volatile int32_t t25 = -12;

	t25 = (x233==(x234/(x235<x236)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x237 = 1;
	int32_t x238 = INT32_MAX;
	int32_t x240 = -1;
	int32_t t26 = 23;

	t26 = (x237==(x238/(x239<x240)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x241 = -380158141521341789LL;
	static int64_t x242 = INT64_MIN;
	static uint32_t x243 = 554U;
	int32_t x244 = INT32_MIN;
	volatile int32_t t27 = -473567;

	t27 = (x241==(x242/(x243<x244)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x253 = INT8_MAX;
	int32_t x254 = INT32_MAX;
	int32_t x255 = -40817104;
	int32_t x256 = 5;
	volatile int32_t t28 = 2227743;

	t28 = (x253==(x254/(x255<x256)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MIN;
	static volatile int64_t x268 = 85LL;
	static volatile int32_t t29 = 654;

	t29 = (x265==(x266/(x267<x268)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x269 = UINT64_MAX;
	static uint16_t x270 = 10U;
	int64_t x271 = INT64_MIN;
	int16_t x272 = 8;
	static volatile int32_t t30 = -787918500;

	t30 = (x269==(x270/(x271<x272)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x273 = UINT64_MAX;
	uint32_t x275 = 23892U;
	volatile int32_t t31 = 75963;

	t31 = (x273==(x274/(x275<x276)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x289 = INT64_MIN;
	uint8_t x290 = UINT8_MAX;
	int8_t x292 = INT8_MAX;
	int32_t t32 = 105;

	t32 = (x289==(x290/(x291<x292)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x294 = INT32_MIN;
	int64_t x295 = -162LL;
	int8_t x296 = -1;
	int32_t t33 = 216822475;

	t33 = (x293==(x294/(x295<x296)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x297 = INT64_MAX;
	int16_t x299 = INT16_MIN;
	static int8_t x300 = INT8_MIN;
	static volatile int32_t t34 = -115620;

	t34 = (x297==(x298/(x299<x300)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x309 = INT8_MAX;
	static int8_t x310 = INT8_MIN;
	int64_t x312 = INT64_MAX;

	t35 = (x309==(x310/(x311<x312)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x317 = -1;
	int8_t x318 = INT8_MIN;
	uint64_t x320 = 49727322089389178LLU;

	t36 = (x317==(x318/(x319<x320)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x330 = 230U;
	volatile int8_t x331 = INT8_MIN;
	volatile int64_t x332 = -1LL;

	t37 = (x329==(x330/(x331<x332)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x337 = INT64_MIN;
	volatile int32_t t38 = -1;

	t38 = (x337==(x338/(x339<x340)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x346 = -1;
	int8_t x347 = INT8_MIN;
	int32_t x348 = -1;
	int32_t t39 = -184856671;

	t39 = (x345==(x346/(x347<x348)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x357 = 158U;
	int64_t x358 = INT64_MIN;
	uint64_t x359 = 122LLU;
	int8_t x360 = -1;

	t40 = (x357==(x358/(x359<x360)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x362 = -942783777;
	static int64_t x363 = -1LL;
	static int32_t t41 = -186510;

	t41 = (x361==(x362/(x363<x364)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x369 = 5U;
	static volatile int8_t x370 = -1;
	static uint8_t x371 = 31U;
	static volatile int32_t t42 = 204922;

	t42 = (x369==(x370/(x371<x372)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x373 = -1;
	volatile uint32_t x375 = 0U;
	static int64_t x376 = INT64_MAX;
	volatile int32_t t43 = 208;

	t43 = (x373==(x374/(x375<x376)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x377 = 245898608;
	int32_t x378 = INT32_MIN;
	volatile int32_t t44 = -1;

	t44 = (x377==(x378/(x379<x380)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x385 = INT64_MIN;
	volatile int32_t x387 = INT32_MIN;
	static uint64_t x388 = UINT64_MAX;
	volatile int32_t t45 = -159;

	t45 = (x385==(x386/(x387<x388)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = 1397188645656LL;
	int64_t x399 = -13860513842096LL;
	int8_t x400 = -1;
	static volatile int32_t t46 = -7489;

	t46 = (x397==(x398/(x399<x400)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x413 = 33U;
	int64_t x414 = -17620923083LL;
	int16_t x415 = -2;
	int32_t t47 = -696257;

	t47 = (x413==(x414/(x415<x416)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x425 = INT32_MIN;
	uint16_t x426 = UINT16_MAX;
	static int64_t x427 = -240234359119274941LL;
	int8_t x428 = INT8_MAX;
	static int32_t t48 = 1;

	t48 = (x425==(x426/(x427<x428)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x437 = INT16_MIN;
	volatile int16_t x438 = -1;
	int32_t x439 = -71834;
	int8_t x440 = INT8_MIN;
	int32_t t49 = -1;

	t49 = (x437==(x438/(x439<x440)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x441 = -20;
	volatile int16_t x442 = INT16_MIN;
	int64_t x443 = -353248956891295LL;
	static volatile int16_t x444 = -1;

	t50 = (x441==(x442/(x443<x444)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x445 = 10U;
	static volatile int32_t x446 = 84511;
	static int8_t x447 = -8;
	static uint16_t x448 = UINT16_MAX;

	t51 = (x445==(x446/(x447<x448)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x453 = INT64_MIN;
	int8_t x454 = -17;
	volatile int8_t x455 = -1;
	uint16_t x456 = 176U;

	t52 = (x453==(x454/(x455<x456)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x463 = INT32_MIN;
	int16_t x464 = -1722;
	volatile int32_t t53 = 96;

	t53 = (x461==(x462/(x463<x464)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x469 = -31;
	uint8_t x470 = UINT8_MAX;
	int16_t x471 = 1411;
	volatile int32_t t54 = 58892;

	t54 = (x469==(x470/(x471<x472)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x477 = 29572303486607278LLU;
	int32_t x479 = INT32_MIN;

	t55 = (x477==(x478/(x479<x480)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x481 = 65U;
	int16_t x482 = INT16_MAX;
	int16_t x483 = INT16_MAX;
	volatile int64_t x484 = 122645116862530866LL;
	int32_t t56 = -5473;

	t56 = (x481==(x482/(x483<x484)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x489 = INT16_MAX;
	static uint8_t x490 = UINT8_MAX;
	static int64_t x491 = INT64_MIN;
	static volatile int32_t t57 = 34617;

	t57 = (x489==(x490/(x491<x492)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x497 = INT64_MIN;
	uint16_t x498 = 7U;
	static int64_t x499 = INT64_MIN;
	int32_t x500 = -1;
	static int32_t t58 = -19511;

	t58 = (x497==(x498/(x499<x500)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x501 = UINT16_MAX;
	uint8_t x502 = 13U;
	static int32_t x503 = -1;
	volatile int32_t t59 = -103867576;

	t59 = (x501==(x502/(x503<x504)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x526 = -10;
	uint8_t x527 = 65U;
	uint16_t x528 = 260U;
	volatile int32_t t60 = -1;

	t60 = (x525==(x526/(x527<x528)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x538 = INT8_MIN;
	static int16_t x539 = -4634;
	int8_t x540 = -1;
	static int32_t t61 = -188711524;

	t61 = (x537==(x538/(x539<x540)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x545 = -1LL;
	volatile int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MAX;
	int32_t t62 = 39;

	t62 = (x545==(x546/(x547<x548)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x553 = INT16_MIN;
	int32_t x554 = -1;
	uint32_t x555 = 867952U;
	uint64_t x556 = 4966201739493LLU;
	static int32_t t63 = -1;

	t63 = (x553==(x554/(x555<x556)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x557 = UINT8_MAX;
	uint32_t x558 = 3306U;
	volatile int32_t x559 = -1;
	uint8_t x560 = UINT8_MAX;
	volatile int32_t t64 = -1020197523;

	t64 = (x557==(x558/(x559<x560)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x563 = -6LL;
	static volatile uint8_t x564 = 108U;
	static int32_t t65 = 0;

	t65 = (x561==(x562/(x563<x564)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x569 = 11U;
	int8_t x570 = -2;
	uint32_t x571 = 7160U;
	int32_t x572 = INT32_MAX;

	t66 = (x569==(x570/(x571<x572)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x573 = 705LLU;
	volatile int16_t x574 = 12668;
	int32_t x575 = -6;
	static int16_t x576 = -1;
	volatile int32_t t67 = -151435974;

	t67 = (x573==(x574/(x575<x576)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x582 = INT64_MAX;
	int32_t x583 = INT32_MIN;
	volatile int16_t x584 = -174;
	volatile int32_t t68 = -2498631;

	t68 = (x581==(x582/(x583<x584)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x585 = 11361;
	static volatile int32_t x586 = -411;
	int32_t x587 = -1234;
	uint16_t x588 = UINT16_MAX;

	t69 = (x585==(x586/(x587<x588)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x593 = 12U;
	int64_t x595 = INT64_MAX;
	int32_t t70 = 260389;

	t70 = (x593==(x594/(x595<x596)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x597 = UINT16_MAX;
	static int32_t x598 = -94376;
	static uint16_t x600 = 1427U;
	volatile int32_t t71 = 4;

	t71 = (x597==(x598/(x599<x600)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x605 = 578603637U;
	static int64_t x606 = INT64_MIN;
	int8_t x607 = 44;
	static int16_t x608 = INT16_MAX;
	volatile int32_t t72 = 13;

	t72 = (x605==(x606/(x607<x608)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x613 = INT64_MAX;
	uint32_t x614 = UINT32_MAX;
	uint64_t x615 = 16436LLU;
	uint64_t x616 = 13403307422LLU;
	int32_t t73 = -1;

	t73 = (x613==(x614/(x615<x616)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x629 = UINT8_MAX;
	static volatile int8_t x630 = -1;
	int64_t x631 = INT64_MIN;
	int16_t x632 = -1;
	static int32_t t74 = 23;

	t74 = (x629==(x630/(x631<x632)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x637 = INT16_MAX;
	static volatile int64_t x638 = INT64_MIN;
	int16_t x639 = INT16_MIN;
	int8_t x640 = -1;

	t75 = (x637==(x638/(x639<x640)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x649 = INT32_MIN;
	int32_t x650 = INT32_MAX;
	int32_t x651 = -1;
	static int16_t x652 = INT16_MAX;
	static volatile int32_t t76 = -1596;

	t76 = (x649==(x650/(x651<x652)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x657 = INT16_MIN;
	static int32_t x658 = -41;
	int64_t x659 = -1LL;

	t77 = (x657==(x658/(x659<x660)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x678 = -1;
	int32_t x680 = -1;
	volatile int32_t t78 = 52;

	t78 = (x677==(x678/(x679<x680)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x685 = INT64_MIN;
	int8_t x686 = INT8_MIN;
	int64_t x687 = INT64_MIN;
	int16_t x688 = INT16_MIN;

	t79 = (x685==(x686/(x687<x688)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x690 = 61535552;

	t80 = (x689==(x690/(x691<x692)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x693 = UINT64_MAX;
	int8_t x694 = 3;
	int8_t x695 = -1;
	uint8_t x696 = 20U;
	int32_t t81 = -7770472;

	t81 = (x693==(x694/(x695<x696)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x697 = 124501055U;
	volatile int64_t x698 = INT64_MIN;
	int32_t x700 = INT32_MIN;
	volatile int32_t t82 = -4441851;

	t82 = (x697==(x698/(x699<x700)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x701 = 0;
	int32_t x703 = INT32_MIN;
	int8_t x704 = -1;
	volatile int32_t t83 = -1026895759;

	t83 = (x701==(x702/(x703<x704)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x705 = UINT16_MAX;
	static uint8_t x706 = 0U;
	uint32_t x707 = UINT32_MAX;
	uint64_t x708 = UINT64_MAX;
	int32_t t84 = 3512;

	t84 = (x705==(x706/(x707<x708)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x717 = 13LLU;
	static volatile int8_t x718 = 7;
	uint8_t x719 = UINT8_MAX;
	static int32_t t85 = -3207269;

	t85 = (x717==(x718/(x719<x720)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x721 = -1;
	int64_t x724 = INT64_MAX;
	static int32_t t86 = -307715;

	t86 = (x721==(x722/(x723<x724)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x729 = UINT64_MAX;
	uint32_t x731 = 2U;
	static uint8_t x732 = 10U;
	static volatile int32_t t87 = 0;

	t87 = (x729==(x730/(x731<x732)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x745 = INT8_MIN;
	volatile int8_t x746 = INT8_MIN;
	int16_t x747 = 6;
	uint32_t x748 = 64481840U;
	volatile int32_t t88 = -43466;

	t88 = (x745==(x746/(x747<x748)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x750 = INT64_MIN;
	volatile int8_t x751 = -34;
	uint16_t x752 = UINT16_MAX;

	t89 = (x749==(x750/(x751<x752)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x753 = 4356747988471782LLU;
	int16_t x754 = INT16_MIN;
	int16_t x755 = 7296;
	int32_t t90 = -486820;

	t90 = (x753==(x754/(x755<x756)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x757 = 206339469892892450LLU;
	static volatile uint16_t x758 = 84U;
	volatile int32_t t91 = 297268;

	t91 = (x757==(x758/(x759<x760)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x761 = 5079335LL;
	uint64_t x762 = 3LLU;
	volatile int8_t x764 = INT8_MIN;
	static int32_t t92 = -93156858;

	t92 = (x761==(x762/(x763<x764)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x769 = 3351U;
	int8_t x772 = -1;
	volatile int32_t t93 = -8079;

	t93 = (x769==(x770/(x771<x772)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x773 = -2551;
	volatile int16_t x776 = 171;

	t94 = (x773==(x774/(x775<x776)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x793 = -581714581;
	int64_t x794 = INT64_MIN;
	uint16_t x796 = 239U;
	volatile int32_t t95 = -18557;

	t95 = (x793==(x794/(x795<x796)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x797 = INT8_MAX;
	static int8_t x798 = INT8_MAX;
	volatile int64_t x800 = INT64_MAX;
	int32_t t96 = 136443091;

	t96 = (x797==(x798/(x799<x800)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x813 = 6U;
	uint16_t x814 = UINT16_MAX;
	static int8_t x815 = INT8_MIN;
	int32_t x816 = -1;
	int32_t t97 = -896063990;

	t97 = (x813==(x814/(x815<x816)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x821 = 7;
	static volatile int8_t x823 = INT8_MIN;
	int32_t x824 = 181678960;
	int32_t t98 = 8118;

	t98 = (x821==(x822/(x823<x824)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x833 = 1050604077U;
	int8_t x834 = -3;
	static volatile int16_t x835 = INT16_MIN;
	int64_t x836 = -1LL;
	volatile int32_t t99 = 0;

	t99 = (x833==(x834/(x835<x836)));

	if (t99 != 0) { NG(); } else { ; }
	
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

