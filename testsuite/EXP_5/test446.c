#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MAX;
uint32_t x12 = 1568797U;
int32_t t1 = INT32_MAX;
static int8_t x16 = INT8_MIN;
int32_t t2 = -1;
static int32_t t3 = 1285318;
static int8_t x28 = INT8_MAX;
int64_t x39 = INT64_MAX;
int16_t x40 = INT16_MIN;
volatile int16_t x55 = -1;
volatile int8_t x71 = INT8_MIN;
int32_t x86 = 978;
volatile int8_t x88 = 0;
int64_t t12 = INT64_MIN;
volatile int32_t x111 = INT32_MAX;
static volatile uint16_t x113 = 1786U;
volatile uint8_t x123 = 17U;
int8_t x124 = -5;
static uint64_t x133 = 2919886763744LLU;
volatile uint8_t x145 = UINT8_MAX;
static volatile uint64_t x150 = 549104259488944LLU;
int16_t x152 = INT16_MIN;
static volatile int32_t t21 = 227416;
int64_t x181 = 246134206LL;
volatile int32_t t24 = 54366;
int32_t t28 = 114624659;
uint64_t x290 = 259009913LLU;
int16_t x291 = INT16_MIN;
volatile int16_t x298 = 7;
int64_t x300 = INT64_MIN;
volatile uint64_t t30 = UINT64_MAX;
uint8_t x311 = UINT8_MAX;
static volatile int8_t x313 = INT8_MIN;
int8_t x314 = INT8_MIN;
volatile int32_t t35 = 8395;
int8_t x330 = INT8_MIN;
int8_t x331 = -1;
volatile int16_t x335 = INT16_MIN;
static volatile int8_t x336 = -1;
int16_t x344 = INT16_MIN;
volatile int16_t x352 = 18;
int8_t x355 = INT8_MIN;
static int8_t x356 = 2;
static uint32_t x362 = 174325010U;
static uint32_t x381 = UINT32_MAX;
static int8_t x390 = -1;
static int32_t t46 = -873;
int16_t x408 = -1;
volatile uint16_t x449 = 6U;
uint16_t x456 = UINT16_MAX;
int8_t x468 = INT8_MIN;
volatile int64_t t53 = INT64_MIN;
int32_t x469 = INT32_MIN;
int16_t x474 = -1;
int8_t x475 = 45;
volatile uint8_t x476 = 60U;
static volatile int32_t t55 = INT32_MAX;
int32_t x481 = 9859;
uint16_t x483 = 2U;
int8_t x487 = 3;
uint8_t x498 = UINT8_MAX;
static volatile int32_t t58 = 6527;
static volatile int32_t t59 = -79288;
int16_t x549 = -1;
int32_t t60 = -63219;
static uint32_t x553 = 3251042U;
uint8_t x572 = 52U;
int64_t x579 = -4949741616157LL;
int32_t x581 = INT32_MIN;
volatile uint64_t x583 = UINT64_MAX;
int16_t x584 = INT16_MIN;
int16_t x591 = -1884;
static int64_t x592 = INT64_MIN;
uint16_t x593 = 559U;
int64_t x609 = -1LL;
int64_t x622 = -1LL;
int32_t t68 = INT32_MAX;
int32_t x638 = -1;
static volatile int32_t t72 = 38934724;
uint32_t x655 = UINT32_MAX;
int64_t x690 = 4115448341914703LL;
static int8_t x691 = INT8_MIN;
uint16_t x695 = UINT16_MAX;
static int32_t t76 = -35445405;
int8_t x717 = -53;
volatile uint8_t x718 = 0U;
int32_t x719 = INT32_MAX;
int32_t x754 = INT32_MIN;
volatile uint64_t t79 = UINT64_MAX;
volatile uint8_t x765 = UINT8_MAX;
static int16_t x767 = -6;
volatile int32_t t80 = -472693;
uint64_t x800 = UINT64_MAX;
int8_t x806 = INT8_MAX;
int16_t x829 = INT16_MIN;
int16_t x841 = -83;
uint16_t x843 = 0U;
uint32_t x860 = UINT32_MAX;
volatile uint64_t x873 = UINT64_MAX;
int8_t x896 = INT8_MAX;
int64_t x899 = 128354306LL;
volatile uint64_t t94 = 31787LLU;
static volatile int32_t t95 = 6996202;
static uint8_t x913 = 125U;
int8_t x930 = INT8_MAX;
static volatile uint32_t x934 = 222228U;
int64_t x935 = -1LL;


void f0(void) {
	static volatile int32_t x5 = -11;
	int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MAX;
	uint16_t x8 = UINT16_MAX;
	static int32_t t0 = -37773361;

	t0 = (x5/((x6*x7)<x8));

	if (t0 != -11) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	uint8_t x11 = UINT8_MAX;

	t1 = (x9/((x10*x11)<x12));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = -1;
	int32_t x14 = -1;
	static uint64_t x15 = UINT64_MAX;

	t2 = (x13/((x14*x15)<x16));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 2047U;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 15951U;

	t3 = (x17/((x18*x19)<x20));

	if (t3 != 2047) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 6U;
	uint8_t x26 = UINT8_MAX;
	volatile int64_t x27 = -13134489254608LL;
	static volatile uint32_t t4 = 5932U;

	t4 = (x25/((x26*x27)<x28));

	if (t4 != 6U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = -15638;
	uint64_t x38 = UINT64_MAX;
	volatile int32_t t5 = -122;

	t5 = (x37/((x38*x39)<x40));

	if (t5 != -15638) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	volatile int32_t x42 = -1;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = 603U;
	int32_t t6 = -2744472;

	t6 = (x41/((x42*x43)<x44));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = 69U;
	volatile int8_t x47 = INT8_MIN;
	volatile int32_t x48 = 9;
	volatile int32_t t7 = 2;

	t7 = (x45/((x46*x47)<x48));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = -22649102;
	int32_t x54 = 3014584;
	int16_t x56 = INT16_MIN;
	int32_t t8 = 26;

	t8 = (x53/((x54*x55)<x56));

	if (t8 != -22649102) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x61 = 21;
	uint64_t x62 = UINT64_MAX;
	static volatile int16_t x63 = -1;
	int32_t x64 = -1;
	static volatile int32_t t9 = -1153278;

	t9 = (x61/((x62*x63)<x64));

	if (t9 != 21) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = INT8_MAX;
	uint16_t x70 = UINT16_MAX;
	volatile int16_t x72 = INT16_MIN;
	int32_t t10 = 1494;

	t10 = (x69/((x70*x71)<x72));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = -1;
	uint64_t x74 = 5017924598102359286LLU;
	static uint32_t x75 = 339U;
	static int8_t x76 = -1;
	volatile int32_t t11 = 29;

	t11 = (x73/((x74*x75)<x76));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x85 = INT64_MIN;
	int8_t x87 = INT8_MIN;

	t12 = (x85/((x86*x87)<x88));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x93 = UINT32_MAX;
	int16_t x94 = INT16_MIN;
	uint64_t x95 = 26640524053057LLU;
	int8_t x96 = INT8_MIN;
	uint32_t t13 = UINT32_MAX;

	t13 = (x93/((x94*x95)<x96));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x97 = INT32_MIN;
	static uint16_t x98 = UINT16_MAX;
	int16_t x99 = -5;
	int32_t x100 = 0;
	int32_t t14 = INT32_MIN;

	t14 = (x97/((x98*x99)<x100));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x109 = INT16_MIN;
	static int64_t x110 = -2205LL;
	int32_t x112 = -1;
	static volatile int32_t t15 = -175515;

	t15 = (x109/((x110*x111)<x112));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x114 = UINT8_MAX;
	static int64_t x115 = -171373822LL;
	static int64_t x116 = INT64_MAX;
	int32_t t16 = 5;

	t16 = (x113/((x114*x115)<x116));

	if (t16 != 1786) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x121 = 118U;
	uint64_t x122 = 41199LLU;
	volatile int32_t t17 = 180075;

	t17 = (x121/((x122*x123)<x124));

	if (t17 != 118) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x134 = INT16_MAX;
	volatile int16_t x135 = -12;
	int64_t x136 = INT64_MAX;
	uint64_t t18 = 65046695LLU;

	t18 = (x133/((x134*x135)<x136));

	if (t18 != 2919886763744LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x141 = -1;
	static int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MIN;
	static int8_t x144 = 1;
	static volatile int32_t t19 = 1;

	t19 = (x141/((x142*x143)<x144));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x146 = INT8_MAX;
	int8_t x147 = 0;
	uint16_t x148 = 4U;
	int32_t t20 = 0;

	t20 = (x145/((x146*x147)<x148));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x149 = 0;
	static volatile int64_t x151 = -3990LL;

	t21 = (x149/((x150*x151)<x152));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x157 = -22;
	int16_t x158 = INT16_MAX;
	int16_t x159 = -5826;
	static int32_t x160 = -178;
	int32_t t22 = 32045162;

	t22 = (x157/((x158*x159)<x160));

	if (t22 != -22) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x182 = 427U;
	volatile uint32_t x183 = UINT32_MAX;
	int64_t x184 = 158999679866787774LL;
	int64_t t23 = -272485288117702875LL;

	t23 = (x181/((x182*x183)<x184));

	if (t23 != 246134206LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x189 = -1;
	static int32_t x190 = INT32_MIN;
	static volatile uint64_t x191 = UINT64_MAX;
	static int16_t x192 = INT16_MIN;

	t24 = (x189/((x190*x191)<x192));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x205 = 62269224472LL;
	int16_t x206 = -1;
	int64_t x207 = INT64_MAX;
	int64_t x208 = 13526LL;
	volatile int64_t t25 = 7LL;

	t25 = (x205/((x206*x207)<x208));

	if (t25 != 62269224472LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x245 = 22791U;
	uint32_t x246 = 264120312U;
	static volatile int16_t x247 = INT16_MAX;
	static int32_t x248 = INT32_MIN;
	int32_t t26 = -728833;

	t26 = (x245/((x246*x247)<x248));

	if (t26 != 22791) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x265 = INT8_MAX;
	uint32_t x266 = 11U;
	int32_t x267 = -1;
	int64_t x268 = INT64_MAX;
	volatile int32_t t27 = -33599993;

	t27 = (x265/((x266*x267)<x268));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x273 = INT16_MIN;
	volatile uint32_t x274 = 79898861U;
	static uint32_t x275 = 4U;
	uint64_t x276 = UINT64_MAX;

	t28 = (x273/((x274*x275)<x276));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x289 = INT32_MIN;
	int16_t x292 = -26;
	int32_t t29 = INT32_MIN;

	t29 = (x289/((x290*x291)<x292));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x297 = UINT64_MAX;
	uint64_t x299 = 10235LLU;

	t30 = (x297/((x298*x299)<x300));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x301 = INT64_MIN;
	static volatile int16_t x302 = INT16_MIN;
	static int8_t x303 = -1;
	int32_t x304 = 5538168;
	volatile int64_t t31 = INT64_MIN;

	t31 = (x301/((x302*x303)<x304));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x309 = INT64_MAX;
	volatile int16_t x310 = -62;
	static uint64_t x312 = UINT64_MAX;
	volatile int64_t t32 = INT64_MAX;

	t32 = (x309/((x310*x311)<x312));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x315 = INT16_MAX;
	uint8_t x316 = 18U;
	int32_t t33 = -60547950;

	t33 = (x313/((x314*x315)<x316));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x317 = 15177183608LLU;
	uint8_t x318 = 3U;
	volatile int16_t x319 = INT16_MIN;
	static int64_t x320 = -1LL;
	uint64_t t34 = 42848309LLU;

	t34 = (x317/((x318*x319)<x320));

	if (t34 != 15177183608LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x321 = 48U;
	static int16_t x322 = 1;
	int8_t x323 = INT8_MIN;
	int8_t x324 = INT8_MAX;

	t35 = (x321/((x322*x323)<x324));

	if (t35 != 48) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x329 = INT64_MAX;
	uint32_t x332 = UINT32_MAX;
	volatile int64_t t36 = INT64_MAX;

	t36 = (x329/((x330*x331)<x332));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x333 = INT64_MAX;
	int8_t x334 = 1;
	static volatile int64_t t37 = INT64_MAX;

	t37 = (x333/((x334*x335)<x336));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x341 = 1156413U;
	static volatile uint8_t x342 = 32U;
	volatile uint64_t x343 = 26LLU;
	volatile uint32_t t38 = 50U;

	t38 = (x341/((x342*x343)<x344));

	if (t38 != 1156413U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static int16_t x350 = -1;
	static uint32_t x351 = 0U;
	uint64_t t39 = UINT64_MAX;

	t39 = (x349/((x350*x351)<x352));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x353 = 14224319963981149LLU;
	uint16_t x354 = 20729U;
	uint64_t t40 = 2077857687LLU;

	t40 = (x353/((x354*x355)<x356));

	if (t40 != 14224319963981149LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x361 = INT64_MAX;
	int32_t x363 = INT32_MIN;
	volatile int64_t x364 = INT64_MAX;
	static volatile int64_t t41 = INT64_MAX;

	t41 = (x361/((x362*x363)<x364));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x382 = 4U;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = -1;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x381/((x382*x383)<x384));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x389 = 926U;
	int16_t x391 = INT16_MAX;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t43 = -9;

	t43 = (x389/((x390*x391)<x392));

	if (t43 != 926) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x393 = -32;
	int16_t x394 = INT16_MIN;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = 2;
	int32_t t44 = 108680121;

	t44 = (x393/((x394*x395)<x396));

	if (t44 != -32) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x397 = UINT8_MAX;
	int32_t x398 = -1;
	uint8_t x399 = 15U;
	volatile uint16_t x400 = 14U;
	int32_t t45 = -3452336;

	t45 = (x397/((x398*x399)<x400));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x401 = INT8_MIN;
	uint64_t x402 = 18017LLU;
	volatile int8_t x403 = 5;
	volatile int16_t x404 = -1;

	t46 = (x401/((x402*x403)<x404));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x405 = -3;
	uint64_t x406 = 922895429139LLU;
	int64_t x407 = INT64_MIN;
	volatile int32_t t47 = -15351;

	t47 = (x405/((x406*x407)<x408));

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x421 = 4341515489793LLU;
	uint32_t x422 = 1158U;
	static volatile uint8_t x423 = 12U;
	volatile int32_t x424 = INT32_MIN;
	uint64_t t48 = 12317669174365LLU;

	t48 = (x421/((x422*x423)<x424));

	if (t48 != 4341515489793LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x429 = -606657246602LL;
	int32_t x430 = INT32_MAX;
	uint64_t x431 = 1LLU;
	int16_t x432 = INT16_MIN;
	int64_t t49 = 71894151560189911LL;

	t49 = (x429/((x430*x431)<x432));

	if (t49 != -606657246602LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x433 = -1;
	int64_t x434 = -1LL;
	volatile int64_t x435 = INT64_MAX;
	int32_t x436 = 1;
	volatile int32_t t50 = -3667765;

	t50 = (x433/((x434*x435)<x436));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x450 = -9;
	uint64_t x451 = UINT64_MAX;
	static uint64_t x452 = UINT64_MAX;
	volatile int32_t t51 = -37846248;

	t51 = (x449/((x450*x451)<x452));

	if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x453 = INT8_MIN;
	int8_t x454 = -2;
	int8_t x455 = INT8_MIN;
	int32_t t52 = 269904907;

	t52 = (x453/((x454*x455)<x456));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x465 = INT64_MIN;
	uint8_t x466 = UINT8_MAX;
	static int32_t x467 = -1;

	t53 = (x465/((x466*x467)<x468));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x470 = 124910477406LLU;
	int64_t x471 = INT64_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t54 = INT32_MIN;

	t54 = (x469/((x470*x471)<x472));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x473 = INT32_MAX;

	t55 = (x473/((x474*x475)<x476));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x482 = INT16_MAX;
	static uint64_t x484 = 2618086448571LLU;
	volatile int32_t t56 = 510;

	t56 = (x481/((x482*x483)<x484));

	if (t56 != 9859) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x485 = -1LL;
	uint32_t x486 = 38U;
	int32_t x488 = -2892751;
	volatile int64_t t57 = -145269176LL;

	t57 = (x485/((x486*x487)<x488));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x497 = INT8_MIN;
	uint8_t x499 = 0U;
	int64_t x500 = 5940802300603021LL;

	t58 = (x497/((x498*x499)<x500));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x505 = INT8_MIN;
	uint8_t x506 = 49U;
	uint32_t x507 = 6263U;
	int64_t x508 = 218995455175LL;

	t59 = (x505/((x506*x507)<x508));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x550 = -116;
	uint16_t x551 = 37U;
	volatile int8_t x552 = -62;

	t60 = (x549/((x550*x551)<x552));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x554 = 43189080LLU;
	uint8_t x555 = 0U;
	int64_t x556 = 179372LL;
	uint32_t t61 = 751725U;

	t61 = (x553/((x554*x555)<x556));

	if (t61 != 3251042U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x569 = 0;
	int8_t x570 = INT8_MAX;
	volatile int16_t x571 = -1;
	volatile int32_t t62 = -166;

	t62 = (x569/((x570*x571)<x572));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x577 = INT16_MIN;
	uint8_t x578 = 14U;
	static int32_t x580 = -1;
	int32_t t63 = -624241;

	t63 = (x577/((x578*x579)<x580));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x582 = -1;
	static volatile int32_t t64 = INT32_MIN;

	t64 = (x581/((x582*x583)<x584));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x589 = INT8_MIN;
	uint64_t x590 = UINT64_MAX;
	volatile int32_t t65 = -45;

	t65 = (x589/((x590*x591)<x592));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x594 = -33384697LL;
	uint16_t x595 = 69U;
	static int32_t x596 = 516091738;
	static volatile int32_t t66 = -313;

	t66 = (x593/((x594*x595)<x596));

	if (t66 != 559) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x610 = 0U;
	volatile uint64_t x611 = 36047269LLU;
	int8_t x612 = 1;
	static volatile int64_t t67 = 55536815172507LL;

	t67 = (x609/((x610*x611)<x612));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x621 = INT32_MAX;
	uint32_t x623 = UINT32_MAX;
	static uint32_t x624 = 1066877526U;

	t68 = (x621/((x622*x623)<x624));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x629 = INT64_MIN;
	static int8_t x630 = 1;
	int64_t x631 = -124LL;
	volatile int8_t x632 = INT8_MAX;
	int64_t t69 = INT64_MIN;

	t69 = (x629/((x630*x631)<x632));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x633 = 30906723U;
	uint8_t x634 = 69U;
	static int16_t x635 = INT16_MIN;
	static uint8_t x636 = 2U;
	static volatile uint32_t t70 = 645442721U;

	t70 = (x633/((x634*x635)<x636));

	if (t70 != 30906723U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x637 = INT32_MAX;
	int64_t x639 = 2LL;
	volatile uint32_t x640 = UINT32_MAX;
	volatile int32_t t71 = INT32_MAX;

	t71 = (x637/((x638*x639)<x640));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x641 = INT16_MAX;
	int64_t x642 = 34713421613018330LL;
	int8_t x643 = INT8_MIN;
	int64_t x644 = -1LL;

	t72 = (x641/((x642*x643)<x644));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x653 = INT64_MIN;
	volatile int8_t x654 = INT8_MIN;
	static int32_t x656 = -379317411;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x653/((x654*x655)<x656));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x681 = INT32_MIN;
	static uint32_t x682 = 35596U;
	int16_t x683 = 203;
	uint32_t x684 = 33115609U;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x681/((x682*x683)<x684));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x689 = 1157092682797290186LLU;
	volatile uint32_t x692 = UINT32_MAX;
	volatile uint64_t t75 = 474529336444LLU;

	t75 = (x689/((x690*x691)<x692));

	if (t75 != 1157092682797290186LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x693 = INT8_MAX;
	uint32_t x694 = 113U;
	int16_t x696 = -1;

	t76 = (x693/((x694*x695)<x696));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x720 = INT16_MAX;
	static volatile int32_t t77 = -302723;

	t77 = (x717/((x718*x719)<x720));

	if (t77 != -53) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x733 = UINT8_MAX;
	int16_t x734 = INT16_MIN;
	uint16_t x735 = UINT16_MAX;
	uint8_t x736 = 2U;
	volatile int32_t t78 = 21426;

	t78 = (x733/((x734*x735)<x736));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x753 = UINT64_MAX;
	uint32_t x755 = 64U;
	uint32_t x756 = UINT32_MAX;

	t79 = (x753/((x754*x755)<x756));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x766 = 0;
	volatile uint16_t x768 = 226U;

	t80 = (x765/((x766*x767)<x768));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x797 = 293541259LLU;
	uint64_t x798 = 32LLU;
	uint64_t x799 = 182334LLU;
	static uint64_t t81 = 1096341958118286LLU;

	t81 = (x797/((x798*x799)<x800));

	if (t81 != 293541259LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x805 = -390547902355LL;
	int64_t x807 = -1LL;
	static int32_t x808 = INT32_MAX;
	int64_t t82 = -1565LL;

	t82 = (x805/((x806*x807)<x808));

	if (t82 != -390547902355LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x825 = 21669U;
	uint16_t x826 = 60U;
	int8_t x827 = INT8_MIN;
	int8_t x828 = 23;
	static volatile int32_t t83 = -4;

	t83 = (x825/((x826*x827)<x828));

	if (t83 != 21669) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x830 = 23U;
	int32_t x831 = -1;
	int16_t x832 = 2797;
	static int32_t t84 = -18;

	t84 = (x829/((x830*x831)<x832));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x837 = INT8_MAX;
	int8_t x838 = INT8_MAX;
	volatile uint8_t x839 = UINT8_MAX;
	static uint32_t x840 = 7681854U;
	static int32_t t85 = 2630130;

	t85 = (x837/((x838*x839)<x840));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x842 = 63058787U;
	int32_t x844 = INT32_MIN;
	volatile int32_t t86 = -384;

	t86 = (x841/((x842*x843)<x844));

	if (t86 != -83) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x853 = INT64_MIN;
	uint64_t x854 = 732597442367LLU;
	static int32_t x855 = INT32_MAX;
	int32_t x856 = INT32_MIN;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x853/((x854*x855)<x856));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x857 = -21;
	int8_t x858 = -54;
	static int16_t x859 = INT16_MIN;
	volatile int32_t t88 = -53247;

	t88 = (x857/((x858*x859)<x860));

	if (t88 != -21) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x874 = 14651;
	int8_t x875 = INT8_MIN;
	volatile int16_t x876 = INT16_MIN;
	uint64_t t89 = UINT64_MAX;

	t89 = (x873/((x874*x875)<x876));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x881 = -408;
	volatile int32_t x882 = -3678088;
	static int8_t x883 = 5;
	uint8_t x884 = 8U;
	static int32_t t90 = -30;

	t90 = (x881/((x882*x883)<x884));

	if (t90 != -408) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x889 = INT32_MIN;
	int32_t x890 = INT32_MIN;
	static volatile uint64_t x891 = 45424018800968893LLU;
	static int32_t x892 = -1;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x889/((x890*x891)<x892));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x893 = UINT8_MAX;
	static uint16_t x894 = UINT16_MAX;
	int8_t x895 = INT8_MIN;
	volatile int32_t t92 = 699;

	t92 = (x893/((x894*x895)<x896));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x897 = UINT16_MAX;
	int16_t x898 = INT16_MIN;
	static int16_t x900 = -12;
	volatile int32_t t93 = 3668044;

	t93 = (x897/((x898*x899)<x900));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x901 = 26390LLU;
	int8_t x902 = 10;
	static volatile uint32_t x903 = 7U;
	volatile uint32_t x904 = 47825851U;

	t94 = (x901/((x902*x903)<x904));

	if (t94 != 26390LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x905 = -14;
	uint32_t x906 = 15418U;
	int16_t x907 = 35;
	int32_t x908 = INT32_MIN;

	t95 = (x905/((x906*x907)<x908));

	if (t95 != -14) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x914 = INT16_MIN;
	volatile int8_t x915 = -1;
	int32_t x916 = INT32_MAX;
	static volatile int32_t t96 = 67419;

	t96 = (x913/((x914*x915)<x916));

	if (t96 != 125) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x917 = INT32_MIN;
	uint8_t x918 = 63U;
	uint64_t x919 = 413340029LLU;
	int32_t x920 = INT32_MIN;
	int32_t t97 = INT32_MIN;

	t97 = (x917/((x918*x919)<x920));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x929 = INT64_MIN;
	int16_t x931 = INT16_MIN;
	int64_t x932 = -1LL;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x929/((x930*x931)<x932));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x933 = INT64_MIN;
	int8_t x936 = INT8_MAX;
	int64_t t99 = INT64_MIN;

	t99 = (x933/((x934*x935)<x936));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

