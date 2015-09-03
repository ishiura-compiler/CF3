#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 1U;
uint16_t x2 = UINT16_MAX;
static int8_t x3 = -6;
static int64_t t1 = 1LL;
int16_t x13 = 0;
static int16_t x16 = INT16_MIN;
static volatile int64_t x17 = 30038LL;
uint64_t x25 = UINT64_MAX;
static volatile int8_t x28 = INT8_MIN;
int16_t x72 = 86;
uint32_t x73 = 0U;
int32_t x77 = -86661530;
static int32_t x96 = INT32_MIN;
uint32_t t17 = 7U;
uint64_t x147 = 28243LLU;
int64_t x153 = -1008380516796781035LL;
int64_t t21 = 1LL;
static volatile int64_t x158 = 270930906098915LL;
uint32_t x170 = UINT32_MAX;
volatile uint64_t t23 = 15849LLU;
static int16_t x217 = -5;
int64_t x218 = 1802978618362443LL;
volatile int32_t x222 = 38777;
volatile int8_t x230 = 19;
uint16_t x232 = 1577U;
static uint32_t t27 = 146512U;
int64_t t28 = 2886635536LL;
static int8_t x257 = -1;
volatile uint16_t x262 = 10U;
volatile int64_t x277 = INT64_MIN;
volatile uint8_t x290 = UINT8_MAX;
int8_t x300 = -1;
int16_t x313 = INT16_MIN;
volatile int32_t t38 = -926729777;
volatile int16_t x333 = INT16_MIN;
static int32_t x345 = -6567;
uint32_t x346 = 2U;
int64_t x381 = INT64_MIN;
int8_t x383 = INT8_MAX;
int32_t x384 = INT32_MIN;
static int64_t t43 = 524478282063419888LL;
uint16_t x398 = 155U;
uint8_t x402 = 25U;
static int32_t x404 = -1;
volatile int8_t x411 = INT8_MAX;
int8_t x417 = INT8_MIN;
static uint8_t x418 = 2U;
int64_t x445 = -1LL;
uint64_t x446 = 767LLU;
int64_t x449 = 20533448LL;
uint8_t x450 = UINT8_MAX;
volatile uint32_t x452 = UINT32_MAX;
int64_t x465 = INT64_MIN;
int8_t x467 = -1;
int32_t x479 = 1117;
static volatile int64_t x483 = INT64_MIN;
uint16_t x491 = 3767U;
uint64_t t58 = 24958LLU;
int64_t x503 = INT64_MAX;
volatile int8_t x520 = INT8_MIN;
int32_t x525 = INT32_MIN;
static int32_t x529 = INT32_MIN;
static int32_t x545 = -1;
volatile int32_t x560 = INT32_MAX;
volatile uint32_t x572 = UINT32_MAX;
volatile int32_t x573 = -1;
int16_t x575 = -1;
int16_t x581 = -1;
int32_t x582 = 120779;
volatile int32_t t71 = -373243002;
int16_t x591 = -1;
uint64_t x603 = 5123075LLU;
volatile uint8_t x613 = UINT8_MAX;
uint32_t x619 = 171870U;
uint16_t x625 = 1U;
int16_t x628 = -1943;
uint16_t x646 = 0U;
int16_t x647 = 178;
uint64_t x649 = 2651843330303LLU;
volatile int32_t x653 = INT32_MIN;
uint8_t x654 = 0U;
volatile int32_t t82 = INT32_MIN;
int8_t x659 = INT8_MIN;
int16_t x660 = INT16_MIN;
volatile uint64_t x664 = UINT64_MAX;
static volatile int16_t x665 = INT16_MIN;
static int64_t x674 = INT64_MAX;
static int32_t x675 = INT32_MIN;
uint64_t t89 = 37068490978361768LLU;
volatile uint64_t x701 = 84434244142987LLU;
volatile uint8_t x704 = UINT8_MAX;
volatile int32_t x713 = -352;
int64_t x725 = INT64_MIN;
int8_t x726 = 1;
int16_t x730 = INT16_MAX;
int16_t x731 = -152;
int64_t x732 = INT64_MIN;
int32_t t94 = 15886;
volatile int8_t x746 = INT8_MAX;
uint8_t x758 = 21U;


void f0(void) {
	int8_t x4 = -1;
	int32_t t0 = 2;

	t0 = (x1+(x2<<(x3<x4)));

	if (t0 != 131071) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 259708924249334394LL;
	volatile uint16_t x6 = UINT16_MAX;
	static int64_t x7 = INT64_MAX;
	uint64_t x8 = UINT64_MAX;

	t1 = (x5+(x6<<(x7<x8)));

	if (t1 != 259708924249465464LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 0U;
	uint32_t x15 = UINT32_MAX;
	volatile uint32_t t2 = 2955268U;

	t2 = (x13+(x14<<(x15<x16)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x18 = INT16_MAX;
	int32_t x19 = INT32_MIN;
	uint64_t x20 = UINT64_MAX;
	volatile int64_t t3 = 994758482911258551LL;

	t3 = (x17+(x18<<(x19<x20)));

	if (t3 != 95572LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -658LL;
	static int8_t x22 = INT8_MAX;
	volatile int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MIN;
	int64_t t4 = -521318710079LL;

	t4 = (x21+(x22<<(x23<x24)));

	if (t4 != -531LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 1U;
	int8_t x27 = -1;
	static volatile uint64_t t5 = 117017562724581248LLU;

	t5 = (x25+(x26<<(x27<x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = -127097395;
	int32_t x30 = INT32_MAX;
	uint32_t x31 = UINT32_MAX;
	int64_t x32 = 3LL;
	volatile int32_t t6 = 0;

	t6 = (x29+(x30<<(x31<x32)));

	if (t6 != 2020386252) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	static uint64_t x38 = UINT64_MAX;
	int64_t x39 = -1LL;
	int32_t x40 = INT32_MIN;
	uint64_t t7 = 13231272326519272LLU;

	t7 = (x37+(x38<<(x39<x40)));

	if (t7 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x45 = -9;
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t8 = 1;

	t8 = (x45+(x46<<(x47<x48)));

	if (t8 != 246) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = INT16_MIN;
	static int8_t x58 = INT8_MAX;
	volatile uint64_t x59 = 601449024657358807LLU;
	static int16_t x60 = INT16_MIN;
	int32_t t9 = 19860;

	t9 = (x57+(x58<<(x59<x60)));

	if (t9 != -32514) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = INT32_MAX;
	uint64_t x66 = 6707837LLU;
	int32_t x67 = INT32_MIN;
	volatile uint64_t x68 = 82157718376870499LLU;
	volatile uint64_t t10 = 489639047738805LLU;

	t10 = (x65+(x66<<(x67<x68)));

	if (t10 != 2154191484LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 0U;
	uint32_t x70 = 10927252U;
	int16_t x71 = INT16_MIN;
	volatile uint32_t t11 = 23U;

	t11 = (x69+(x70<<(x71<x72)));

	if (t11 != 21854504U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x74 = 766;
	int16_t x75 = -1;
	volatile int16_t x76 = INT16_MAX;
	volatile uint32_t t12 = 375U;

	t12 = (x73+(x74<<(x75<x76)));

	if (t12 != 1532U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x78 = 76U;
	uint64_t x79 = UINT64_MAX;
	uint16_t x80 = UINT16_MAX;
	int32_t t13 = 163990;

	t13 = (x77+(x78<<(x79<x80)));

	if (t13 != -86661454) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x93 = 32348308U;
	int32_t x94 = INT32_MAX;
	int8_t x95 = -30;
	uint32_t t14 = 782910U;

	t14 = (x93+(x94<<(x95<x96)));

	if (t14 != 2179831955U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x105 = -1LL;
	static volatile int16_t x106 = 22;
	uint32_t x107 = 25156U;
	int16_t x108 = INT16_MIN;
	static volatile int64_t t15 = 1LL;

	t15 = (x105+(x106<<(x107<x108)));

	if (t15 != 43LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x117 = UINT32_MAX;
	uint8_t x118 = 52U;
	static int64_t x119 = INT64_MIN;
	int64_t x120 = -1LL;
	uint32_t t16 = 50U;

	t16 = (x117+(x118<<(x119<x120)));

	if (t16 != 103U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x121 = 659109U;
	uint8_t x122 = 10U;
	int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;

	t17 = (x121+(x122<<(x123<x124)));

	if (t17 != 659119U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x141 = INT8_MAX;
	volatile uint8_t x142 = 119U;
	int64_t x143 = INT64_MIN;
	int8_t x144 = -1;
	volatile int32_t t18 = -1;

	t18 = (x141+(x142<<(x143<x144)));

	if (t18 != 365) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x145 = -1LL;
	uint16_t x146 = 172U;
	volatile int32_t x148 = 4115;
	volatile int64_t t19 = 609LL;

	t19 = (x145+(x146<<(x147<x148)));

	if (t19 != 171LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x149 = 896635573U;
	uint8_t x150 = 3U;
	int8_t x151 = INT8_MIN;
	static volatile int64_t x152 = INT64_MAX;
	uint32_t t20 = 138780078U;

	t20 = (x149+(x150<<(x151<x152)));

	if (t20 != 896635579U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x154 = INT8_MAX;
	static volatile int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MAX;

	t21 = (x153+(x154<<(x155<x156)));

	if (t21 != -1008380516796780781LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x157 = INT64_MIN;
	int64_t x159 = -3356930LL;
	volatile int8_t x160 = -30;
	int64_t t22 = 3LL;

	t22 = (x157+(x158<<(x159<x160)));

	if (t22 != -9222830175042577978LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int32_t x171 = -1;
	int32_t x172 = INT32_MAX;

	t23 = (x169+(x170<<(x171<x172)));

	if (t23 != 4294967293LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x205 = -1;
	int16_t x206 = 0;
	uint32_t x207 = UINT32_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t24 = 817333621;

	t24 = (x205+(x206<<(x207<x208)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x219 = 11;
	static int32_t x220 = INT32_MAX;
	int64_t t25 = -7018477486288LL;

	t25 = (x217+(x218<<(x219<x220)));

	if (t25 != 3605957236724881LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x221 = -1328;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = 2251833U;
	volatile int32_t t26 = -101;

	t26 = (x221+(x222<<(x223<x224)));

	if (t26 != 37449) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x231 = 5;

	t27 = (x229+(x230<<(x231<x232)));

	if (t27 != 37U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x249 = 8827340929439LL;
	int32_t x250 = 87602581;
	int16_t x251 = INT16_MAX;
	int32_t x252 = INT32_MIN;

	t28 = (x249+(x250<<(x251<x252)));

	if (t28 != 8827428532020LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x258 = 63220658U;
	uint16_t x259 = 1U;
	uint32_t x260 = UINT32_MAX;
	uint32_t t29 = 4150760U;

	t29 = (x257+(x258<<(x259<x260)));

	if (t29 != 126441315U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x261 = 30U;
	uint8_t x263 = UINT8_MAX;
	uint16_t x264 = 9U;
	static int32_t t30 = 6275890;

	t30 = (x261+(x262<<(x263<x264)));

	if (t30 != 40) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x278 = 76270490240159830LLU;
	static int16_t x279 = 19;
	int64_t x280 = INT64_MIN;
	static volatile uint64_t t31 = 346876LLU;

	t31 = (x277+(x278<<(x279<x280)));

	if (t31 != 9299642527094935638LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x285 = 9485375355040LL;
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = INT64_MIN;
	static int64_t x288 = INT64_MIN;
	volatile uint64_t t32 = 467920505682581LLU;

	t32 = (x285+(x286<<(x287<x288)));

	if (t32 != 9485375355039LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x289 = 54U;
	uint8_t x291 = 47U;
	volatile int16_t x292 = INT16_MIN;
	int32_t t33 = -24699;

	t33 = (x289+(x290<<(x291<x292)));

	if (t33 != 309) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x297 = -12445LL;
	int16_t x298 = INT16_MAX;
	int32_t x299 = -79;
	volatile int64_t t34 = -1862383131210007083LL;

	t34 = (x297+(x298<<(x299<x300)));

	if (t34 != 53089LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x314 = 84412U;
	static int32_t x315 = INT32_MIN;
	int64_t x316 = -1LL;
	static volatile uint32_t t35 = 2U;

	t35 = (x313+(x314<<(x315<x316)));

	if (t35 != 136056U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x317 = -1LL;
	volatile int32_t x318 = 2929;
	int64_t x319 = -213543LL;
	volatile int32_t x320 = -1723;
	int64_t t36 = 123753075660189LL;

	t36 = (x317+(x318<<(x319<x320)));

	if (t36 != 5857LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x321 = 1U;
	int16_t x322 = 12;
	static volatile int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;
	volatile int32_t t37 = 1;

	t37 = (x321+(x322<<(x323<x324)));

	if (t37 != 13) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x329 = -1;
	uint8_t x330 = 17U;
	int8_t x331 = 1;
	static uint64_t x332 = 43LLU;

	t38 = (x329+(x330<<(x331<x332)));

	if (t38 != 33) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x334 = INT8_MAX;
	int64_t x335 = -1751370LL;
	static volatile int32_t x336 = INT32_MIN;
	static int32_t t39 = 747721775;

	t39 = (x333+(x334<<(x335<x336)));

	if (t39 != -32641) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x347 = 7U;
	uint32_t x348 = 1004517U;
	volatile uint32_t t40 = 52608541U;

	t40 = (x345+(x346<<(x347<x348)));

	if (t40 != 4294960733U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = INT16_MAX;
	static volatile int16_t x363 = -2;
	int16_t x364 = INT16_MIN;
	volatile uint32_t t41 = 3641U;

	t41 = (x361+(x362<<(x363<x364)));

	if (t41 != 32766U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = 2U;
	static volatile int64_t x371 = -1LL;
	int32_t x372 = -245955;
	volatile int64_t t42 = -210109088LL;

	t42 = (x369+(x370<<(x371<x372)));

	if (t42 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x382 = INT16_MAX;

	t43 = (x381+(x382<<(x383<x384)));

	if (t43 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x393 = 171LL;
	uint32_t x394 = 56U;
	volatile int64_t x395 = INT64_MIN;
	static volatile uint32_t x396 = 7527U;
	volatile int64_t t44 = -584935644LL;

	t44 = (x393+(x394<<(x395<x396)));

	if (t44 != 283LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x397 = 131116924059LLU;
	uint32_t x399 = 6694U;
	volatile int32_t x400 = -4274;
	uint64_t t45 = 3593712232473081987LLU;

	t45 = (x397+(x398<<(x399<x400)));

	if (t45 != 131116924369LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x401 = INT16_MAX;
	static int64_t x403 = 14208465319829LL;
	volatile int32_t t46 = 7791591;

	t46 = (x401+(x402<<(x403<x404)));

	if (t46 != 32792) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x409 = 0;
	static uint64_t x410 = 50441975LLU;
	int32_t x412 = -1;
	uint64_t t47 = 8912991980584091LLU;

	t47 = (x409+(x410<<(x411<x412)));

	if (t47 != 50441975LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x413 = 137827769U;
	volatile uint32_t x414 = 30299288U;
	int16_t x415 = 337;
	uint32_t x416 = UINT32_MAX;
	uint32_t t48 = 129891296U;

	t48 = (x413+(x414<<(x415<x416)));

	if (t48 != 198426345U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x419 = 11930477206LLU;
	uint64_t x420 = 8181876009LLU;
	static int32_t t49 = -23690082;

	t49 = (x417+(x418<<(x419<x420)));

	if (t49 != -126) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x447 = INT16_MAX;
	static volatile int32_t x448 = -7068;
	volatile uint64_t t50 = 232084376LLU;

	t50 = (x445+(x446<<(x447<x448)));

	if (t50 != 766LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x451 = INT8_MIN;
	volatile int64_t t51 = -4444744310299612207LL;

	t51 = (x449+(x450<<(x451<x452)));

	if (t51 != 20533958LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x453 = 8150491U;
	uint32_t x454 = 39U;
	volatile int64_t x455 = -1LL;
	uint32_t x456 = 595U;
	volatile uint32_t t52 = 3837U;

	t52 = (x453+(x454<<(x455<x456)));

	if (t52 != 8150569U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x461 = INT16_MIN;
	uint32_t x462 = UINT32_MAX;
	int32_t x463 = -5972826;
	int64_t x464 = INT64_MIN;
	uint32_t t53 = 60U;

	t53 = (x461+(x462<<(x463<x464)));

	if (t53 != 4294934527U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x466 = 1139;
	int64_t x468 = -1LL;
	static volatile int64_t t54 = 3930739768547042623LL;

	t54 = (x465+(x466<<(x467<x468)));

	if (t54 != -9223372036854774669LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x477 = 4610U;
	int64_t x478 = 1635518LL;
	uint16_t x480 = UINT16_MAX;
	int64_t t55 = -2014582321397892LL;

	t55 = (x477+(x478<<(x479<x480)));

	if (t55 != 3275646LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x481 = -1;
	uint64_t x482 = 79723047594LLU;
	uint64_t x484 = 31470736LLU;
	volatile uint64_t t56 = 557LLU;

	t56 = (x481+(x482<<(x483<x484)));

	if (t56 != 79723047593LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x489 = INT64_MIN;
	volatile int16_t x490 = INT16_MAX;
	uint8_t x492 = 3U;
	static volatile int64_t t57 = 938LL;

	t57 = (x489+(x490<<(x491<x492)));

	if (t57 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x497 = INT64_MIN;
	uint64_t x498 = 87721463504723LLU;
	static int32_t x499 = INT32_MIN;
	int64_t x500 = INT64_MIN;

	t58 = (x497+(x498<<(x499<x500)));

	if (t58 != 9223459758318280531LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x501 = INT16_MIN;
	uint64_t x502 = UINT64_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile uint64_t t59 = 454586689481LLU;

	t59 = (x501+(x502<<(x503<x504)));

	if (t59 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x513 = INT16_MAX;
	int32_t x514 = 7134;
	static uint8_t x515 = 4U;
	static int32_t x516 = -1;
	static volatile int32_t t60 = -3;

	t60 = (x513+(x514<<(x515<x516)));

	if (t60 != 39901) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x517 = -15;
	uint32_t x518 = UINT32_MAX;
	int32_t x519 = INT32_MIN;
	volatile uint32_t t61 = 168228U;

	t61 = (x517+(x518<<(x519<x520)));

	if (t61 != 4294967279U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x526 = 46;
	static volatile int64_t x527 = INT64_MIN;
	int32_t x528 = INT32_MAX;
	volatile int32_t t62 = -123;

	t62 = (x525+(x526<<(x527<x528)));

	if (t62 != -2147483556) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x530 = 7LLU;
	int32_t x531 = INT32_MIN;
	static int16_t x532 = 14;
	uint64_t t63 = 112548382892LLU;

	t63 = (x529+(x530<<(x531<x532)));

	if (t63 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x533 = -1LL;
	uint32_t x534 = 271368970U;
	volatile int64_t x535 = INT64_MIN;
	uint32_t x536 = UINT32_MAX;
	volatile int64_t t64 = 21080562LL;

	t64 = (x533+(x534<<(x535<x536)));

	if (t64 != 542737939LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x541 = -1LL;
	static volatile uint64_t x542 = UINT64_MAX;
	uint8_t x543 = 3U;
	uint32_t x544 = 7U;
	uint64_t t65 = 5151604652LLU;

	t65 = (x541+(x542<<(x543<x544)));

	if (t65 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x546 = UINT8_MAX;
	int8_t x547 = INT8_MAX;
	int64_t x548 = 18LL;
	volatile int32_t t66 = 1401994;

	t66 = (x545+(x546<<(x547<x548)));

	if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x553 = -6390;
	volatile uint64_t x554 = 60401185617855129LLU;
	int16_t x555 = -70;
	int32_t x556 = INT32_MIN;
	static volatile uint64_t t67 = 3253712LLU;

	t67 = (x553+(x554<<(x555<x556)));

	if (t67 != 60401185617848739LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x557 = 182;
	int16_t x558 = 214;
	uint32_t x559 = 3U;
	int32_t t68 = 1;

	t68 = (x557+(x558<<(x559<x560)));

	if (t68 != 610) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x569 = -1;
	uint64_t x570 = UINT64_MAX;
	uint8_t x571 = 94U;
	uint64_t t69 = 7291726977684LLU;

	t69 = (x569+(x570<<(x571<x572)));

	if (t69 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x574 = 13391155LLU;
	volatile int8_t x576 = INT8_MIN;
	uint64_t t70 = 814LLU;

	t70 = (x573+(x574<<(x575<x576)));

	if (t70 != 13391154LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x583 = INT64_MIN;
	volatile uint32_t x584 = UINT32_MAX;

	t71 = (x581+(x582<<(x583<x584)));

	if (t71 != 241557) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x585 = 889;
	uint32_t x586 = 12671125U;
	uint32_t x587 = UINT32_MAX;
	int64_t x588 = INT64_MIN;
	uint32_t t72 = 924975U;

	t72 = (x585+(x586<<(x587<x588)));

	if (t72 != 12672014U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x589 = 15770182;
	volatile int16_t x590 = 1;
	uint16_t x592 = 14629U;
	static int32_t t73 = -1046256964;

	t73 = (x589+(x590<<(x591<x592)));

	if (t73 != 15770184) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x601 = INT32_MIN;
	static int32_t x602 = 160;
	int32_t x604 = INT32_MIN;
	static int32_t t74 = 6048;

	t74 = (x601+(x602<<(x603<x604)));

	if (t74 != -2147483328) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x614 = UINT32_MAX;
	int16_t x615 = INT16_MIN;
	int64_t x616 = -93383898639914597LL;
	static uint32_t t75 = 2302097U;

	t75 = (x613+(x614<<(x615<x616)));

	if (t75 != 254U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x617 = 2U;
	int16_t x618 = 235;
	int32_t x620 = INT32_MAX;
	int32_t t76 = -11;

	t76 = (x617+(x618<<(x619<x620)));

	if (t76 != 472) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x626 = UINT32_MAX;
	static uint32_t x627 = UINT32_MAX;
	volatile uint32_t t77 = 134270U;

	t77 = (x625+(x626<<(x627<x628)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x629 = UINT64_MAX;
	int16_t x630 = 4;
	int32_t x631 = INT32_MIN;
	uint32_t x632 = UINT32_MAX;
	volatile uint64_t t78 = 326713288835LLU;

	t78 = (x629+(x630<<(x631<x632)));

	if (t78 != 7LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x641 = 8U;
	uint8_t x642 = UINT8_MAX;
	uint8_t x643 = UINT8_MAX;
	int32_t x644 = -784203508;
	static int32_t t79 = -3139110;

	t79 = (x641+(x642<<(x643<x644)));

	if (t79 != 263) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x645 = UINT32_MAX;
	static volatile int64_t x648 = INT64_MIN;
	uint32_t t80 = UINT32_MAX;

	t80 = (x645+(x646<<(x647<x648)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x650 = UINT64_MAX;
	int8_t x651 = INT8_MIN;
	uint32_t x652 = UINT32_MAX;
	static uint64_t t81 = 330034525283675776LLU;

	t81 = (x649+(x650<<(x651<x652)));

	if (t81 != 2651843330301LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x655 = -1LL;
	volatile int8_t x656 = INT8_MIN;

	t82 = (x653+(x654<<(x655<x656)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x657 = INT32_MIN;
	uint32_t x658 = UINT32_MAX;
	volatile uint32_t t83 = 63275187U;

	t83 = (x657+(x658<<(x659<x660)));

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x661 = 83U;
	uint32_t x662 = 1U;
	volatile int32_t x663 = INT32_MIN;
	volatile uint32_t t84 = 120113U;

	t84 = (x661+(x662<<(x663<x664)));

	if (t84 != 85U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x666 = 12;
	int64_t x667 = INT64_MAX;
	volatile int64_t x668 = INT64_MIN;
	static volatile int32_t t85 = 3787271;

	t85 = (x665+(x666<<(x667<x668)));

	if (t85 != -32756) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x673 = -1LL;
	uint64_t x676 = 1137086887398407651LLU;
	volatile int64_t t86 = -3LL;

	t86 = (x673+(x674<<(x675<x676)));

	if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x685 = 101137440551LLU;
	int8_t x686 = INT8_MAX;
	int32_t x687 = -860050921;
	uint8_t x688 = UINT8_MAX;
	uint64_t t87 = 27759LLU;

	t87 = (x685+(x686<<(x687<x688)));

	if (t87 != 101137440805LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x689 = 142U;
	uint32_t x690 = UINT32_MAX;
	uint32_t x691 = 1869665435U;
	uint32_t x692 = 2U;
	uint32_t t88 = 3U;

	t88 = (x689+(x690<<(x691<x692)));

	if (t88 != 141U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x693 = -1;
	uint64_t x694 = 67466LLU;
	int64_t x695 = INT64_MAX;
	int32_t x696 = INT32_MAX;

	t89 = (x693+(x694<<(x695<x696)));

	if (t89 != 67465LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x702 = 3859U;
	uint64_t x703 = UINT64_MAX;
	static uint64_t t90 = 1906067LLU;

	t90 = (x701+(x702<<(x703<x704)));

	if (t90 != 84434244146846LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x714 = UINT16_MAX;
	volatile uint32_t x715 = 341088657U;
	uint8_t x716 = UINT8_MAX;
	static int32_t t91 = 2040536;

	t91 = (x713+(x714<<(x715<x716)));

	if (t91 != 65183) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x727 = INT8_MAX;
	volatile int32_t x728 = INT32_MIN;
	int64_t t92 = 5861554239LL;

	t92 = (x725+(x726<<(x727<x728)));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x729 = 1350352130U;
	volatile uint32_t t93 = 178109891U;

	t93 = (x729+(x730<<(x731<x732)));

	if (t93 != 1350384897U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x737 = -1;
	volatile int16_t x738 = 3;
	int32_t x739 = 57634721;
	static uint64_t x740 = 518798483LLU;

	t94 = (x737+(x738<<(x739<x740)));

	if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x745 = -1LL;
	uint32_t x747 = 3825U;
	int8_t x748 = 0;
	static volatile int64_t t95 = 4809470LL;

	t95 = (x745+(x746<<(x747<x748)));

	if (t95 != 126LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x749 = UINT8_MAX;
	uint32_t x750 = 6U;
	int32_t x751 = INT32_MIN;
	volatile int64_t x752 = INT64_MIN;
	static uint32_t t96 = 4656U;

	t96 = (x749+(x750<<(x751<x752)));

	if (t96 != 261U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x753 = INT32_MIN;
	volatile uint64_t x754 = 7398369913431165181LLU;
	int64_t x755 = INT64_MIN;
	volatile uint32_t x756 = UINT32_MAX;
	static volatile uint64_t t97 = 0LLU;

	t97 = (x753+(x754<<(x755<x756)));

	if (t97 != 14796739824714846714LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x757 = INT16_MIN;
	uint32_t x759 = UINT32_MAX;
	volatile int32_t x760 = -39;
	volatile int32_t t98 = 9530121;

	t98 = (x757+(x758<<(x759<x760)));

	if (t98 != -32747) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x761 = INT32_MAX;
	uint64_t x762 = 25LLU;
	volatile uint64_t x763 = 17091325100124LLU;
	static volatile int8_t x764 = 7;
	uint64_t t99 = 0LLU;

	t99 = (x761+(x762<<(x763<x764)));

	if (t99 != 2147483672LLU) { NG(); } else { ; }
	
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

