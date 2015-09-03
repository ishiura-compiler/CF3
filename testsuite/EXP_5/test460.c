#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x15 = 3U;
uint16_t x85 = UINT16_MAX;
int32_t t2 = -73426434;
uint16_t x153 = UINT16_MAX;
int16_t x154 = INT16_MIN;
static volatile uint16_t x156 = 569U;
volatile int8_t x160 = -1;
int32_t t7 = -21410430;
int8_t x185 = 34;
volatile int32_t x187 = -1;
int64_t x188 = -1LL;
int8_t x201 = 1;
uint32_t x242 = 0U;
int32_t t11 = -14590697;
int8_t x247 = INT8_MIN;
int32_t x273 = -1;
int8_t x274 = INT8_MIN;
volatile int8_t x294 = -1;
int32_t t17 = -12;
int64_t x349 = INT64_MAX;
static int16_t x351 = -15;
int64_t x365 = INT64_MAX;
int32_t x396 = -1;
int32_t t24 = -1031;
uint32_t x403 = 5554U;
volatile uint32_t x470 = 0U;
static volatile uint32_t x471 = 373350U;
int16_t x487 = -1;
int32_t t32 = -149;
int64_t x515 = 0LL;
int16_t x517 = 485;
static volatile int32_t x520 = INT32_MIN;
uint8_t x537 = 69U;
static int32_t t36 = 1838285;
int16_t x547 = INT16_MIN;
uint32_t t37 = 4236994U;
int64_t t38 = 2866LL;
int16_t x584 = 28;
int8_t x592 = -1;
int16_t x605 = INT16_MIN;
uint64_t x608 = 7040069270697060802LLU;
int16_t x615 = -1;
uint32_t x633 = 893774U;
uint32_t t45 = 104671U;
uint64_t x655 = 24LLU;
int16_t x657 = INT16_MAX;
static int16_t x658 = -1;
int8_t x659 = INT8_MIN;
int32_t t47 = -256;
static uint16_t x666 = 82U;
volatile uint16_t x667 = 3134U;
uint64_t x668 = 14031874LLU;
static int16_t x669 = INT16_MIN;
volatile int32_t x678 = -1;
int8_t x695 = INT8_MIN;
int16_t x757 = INT16_MIN;
int32_t x769 = -206475;
volatile uint16_t x771 = 0U;
int32_t x772 = INT32_MIN;
int64_t x813 = INT64_MAX;
int64_t x825 = INT64_MAX;
volatile int64_t t59 = 1034872899332865LL;
int8_t x859 = -3;
int32_t t60 = -84084961;
int32_t x863 = INT32_MIN;
static uint32_t x884 = UINT32_MAX;
int8_t x885 = INT8_MIN;
volatile uint8_t x914 = 0U;
uint32_t t67 = 1636899U;
uint8_t x934 = 89U;
int16_t x950 = -1;
int16_t x953 = 12;
volatile int8_t x954 = -1;
volatile int32_t t71 = -3;
int8_t x1008 = INT8_MIN;
uint64_t x1043 = UINT64_MAX;
int64_t x1053 = -1LL;
volatile uint32_t t77 = 8694U;
volatile int8_t x1072 = -1;
volatile int8_t x1087 = -1;
volatile int32_t t79 = -7;
int64_t x1097 = -1133831401952617765LL;
int8_t x1117 = 31;
int32_t x1133 = INT32_MAX;
uint8_t x1144 = 31U;
static int64_t x1150 = 803LL;
uint8_t x1154 = UINT8_MAX;
volatile int64_t x1173 = -1LL;
int64_t t89 = 288088673LL;
uint32_t x1179 = 37045377U;
int32_t t90 = 113;
int32_t t91 = -2;
int16_t x1205 = 1;
int32_t t92 = 16;
int64_t x1246 = 2739035598424094LL;
static int8_t x1247 = INT8_MIN;
uint8_t x1258 = 5U;
volatile int16_t x1260 = INT16_MAX;
volatile uint8_t x1267 = UINT8_MAX;
int8_t x1270 = -1;
int16_t x1273 = -1;


void f0(void) {
	uint32_t x13 = 122182466U;
	int8_t x14 = INT8_MIN;
	static volatile int16_t x16 = 1890;
	volatile uint32_t t0 = 924U;

	t0 = (x13%((x14*x15)<=x16));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x45 = -7141;
	uint16_t x46 = 6U;
	static int16_t x47 = INT16_MIN;
	int64_t x48 = 34088636289LL;
	volatile int32_t t1 = -478571790;

	t1 = (x45%((x46*x47)<=x48));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x86 = INT32_MIN;
	volatile uint64_t x87 = 3225430LLU;
	int8_t x88 = -1;

	t2 = (x85%((x86*x87)<=x88));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x145 = INT8_MAX;
	volatile uint8_t x146 = 25U;
	static int16_t x147 = -1;
	static uint8_t x148 = 3U;
	volatile int32_t t3 = -6;

	t3 = (x145%((x146*x147)<=x148));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x155 = 3U;
	volatile int32_t t4 = -323732152;

	t4 = (x153%((x154*x155)<=x156));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x157 = UINT32_MAX;
	uint64_t x158 = UINT64_MAX;
	static int64_t x159 = 514981237322LL;
	volatile uint32_t t5 = 871U;

	t5 = (x157%((x158*x159)<=x160));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x161 = UINT64_MAX;
	static uint8_t x162 = UINT8_MAX;
	uint32_t x163 = 23U;
	volatile int16_t x164 = -6639;
	uint64_t t6 = 3520294674LLU;

	t6 = (x161%((x162*x163)<=x164));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x165 = INT16_MAX;
	static int32_t x166 = -1;
	static int16_t x167 = INT16_MAX;
	uint16_t x168 = 951U;

	t7 = (x165%((x166*x167)<=x168));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x186 = INT8_MAX;
	static int32_t t8 = -9;

	t8 = (x185%((x186*x187)<=x188));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x202 = 159LL;
	int64_t x203 = -1LL;
	static int64_t x204 = INT64_MAX;
	volatile int32_t t9 = 87502;

	t9 = (x201%((x202*x203)<=x204));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x209 = INT32_MAX;
	uint64_t x210 = UINT64_MAX;
	volatile int16_t x211 = -11;
	static volatile int16_t x212 = INT16_MIN;
	int32_t t10 = -7;

	t10 = (x209%((x210*x211)<=x212));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x243 = 15327LLU;
	int8_t x244 = -1;

	t11 = (x241%((x242*x243)<=x244));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x245 = -1LL;
	uint8_t x246 = UINT8_MAX;
	int8_t x248 = 4;
	volatile int64_t t12 = 3616918964124112793LL;

	t12 = (x245%((x246*x247)<=x248));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x249 = 10LLU;
	int8_t x250 = INT8_MAX;
	static int8_t x251 = INT8_MIN;
	static int8_t x252 = INT8_MIN;
	static uint64_t t13 = 1905501464315884101LLU;

	t13 = (x249%((x250*x251)<=x252));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x275 = 0;
	static int16_t x276 = 84;
	int32_t t14 = 11525;

	t14 = (x273%((x274*x275)<=x276));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x293 = 0U;
	uint64_t x295 = UINT64_MAX;
	int8_t x296 = INT8_MIN;
	int32_t t15 = 0;

	t15 = (x293%((x294*x295)<=x296));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x297 = 160U;
	int64_t x298 = 12LL;
	int32_t x299 = -1;
	static int8_t x300 = 53;
	int32_t t16 = 0;

	t16 = (x297%((x298*x299)<=x300));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x337 = INT8_MAX;
	volatile int8_t x338 = -10;
	static volatile uint16_t x339 = UINT16_MAX;
	int32_t x340 = -1;

	t17 = (x337%((x338*x339)<=x340));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x350 = INT8_MIN;
	int32_t x352 = INT32_MAX;
	int64_t t18 = -458668977155507LL;

	t18 = (x349%((x350*x351)<=x352));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x353 = INT8_MAX;
	uint16_t x354 = UINT16_MAX;
	volatile int16_t x355 = INT16_MIN;
	static int16_t x356 = -1;
	int32_t t19 = 4352;

	t19 = (x353%((x354*x355)<=x356));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x366 = -182643LL;
	static uint8_t x367 = UINT8_MAX;
	uint32_t x368 = UINT32_MAX;
	static int64_t t20 = 581LL;

	t20 = (x365%((x366*x367)<=x368));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x381 = -1LL;
	volatile int16_t x382 = INT16_MIN;
	static uint16_t x383 = 349U;
	volatile uint8_t x384 = UINT8_MAX;
	volatile int64_t t21 = -9200471656575LL;

	t21 = (x381%((x382*x383)<=x384));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x385 = -1;
	volatile uint64_t x386 = 128404LLU;
	uint8_t x387 = 3U;
	int16_t x388 = -540;
	volatile int32_t t22 = 53807300;

	t22 = (x385%((x386*x387)<=x388));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x389 = INT64_MIN;
	static uint32_t x390 = 1U;
	int16_t x391 = -1;
	int16_t x392 = -1;
	volatile int64_t t23 = 121939337LL;

	t23 = (x389%((x390*x391)<=x392));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x393 = INT8_MAX;
	uint32_t x394 = 9905012U;
	static int32_t x395 = 6569583;

	t24 = (x393%((x394*x395)<=x396));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x401 = 2U;
	static uint16_t x402 = 22U;
	uint32_t x404 = UINT32_MAX;
	static int32_t t25 = 3926764;

	t25 = (x401%((x402*x403)<=x404));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x413 = INT16_MIN;
	int16_t x414 = -13;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = -1;
	int32_t t26 = 6283;

	t26 = (x413%((x414*x415)<=x416));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x421 = INT8_MIN;
	int32_t x422 = 439099;
	static volatile int16_t x423 = -1;
	int8_t x424 = INT8_MIN;
	int32_t t27 = 579;

	t27 = (x421%((x422*x423)<=x424));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x445 = -32;
	uint8_t x446 = 1U;
	uint32_t x447 = 2U;
	uint16_t x448 = 7U;
	int32_t t28 = 29181403;

	t28 = (x445%((x446*x447)<=x448));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x453 = INT32_MIN;
	static int16_t x454 = -1;
	int8_t x455 = -4;
	uint16_t x456 = 14U;
	int32_t t29 = 47;

	t29 = (x453%((x454*x455)<=x456));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x469 = UINT32_MAX;
	uint32_t x472 = 3U;
	uint32_t t30 = 6520160U;

	t30 = (x469%((x470*x471)<=x472));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x477 = -136;
	uint64_t x478 = 13224737436253701LLU;
	int8_t x479 = INT8_MAX;
	int64_t x480 = INT64_MAX;
	static volatile int32_t t31 = -387661082;

	t31 = (x477%((x478*x479)<=x480));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x485 = 1U;
	uint8_t x486 = 11U;
	uint8_t x488 = 0U;

	t32 = (x485%((x486*x487)<=x488));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x505 = 116;
	uint64_t x506 = 318LLU;
	volatile int16_t x507 = -474;
	int16_t x508 = -1;
	volatile int32_t t33 = 106;

	t33 = (x505%((x506*x507)<=x508));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x513 = 788;
	volatile int32_t x514 = -1;
	uint32_t x516 = 1862668006U;
	int32_t t34 = 2446;

	t34 = (x513%((x514*x515)<=x516));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x518 = -11238434450597LL;
	uint8_t x519 = UINT8_MAX;
	int32_t t35 = -45;

	t35 = (x517%((x518*x519)<=x520));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x538 = 1;
	static int64_t x539 = INT64_MIN;
	uint8_t x540 = 7U;

	t36 = (x537%((x538*x539)<=x540));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x545 = 118354026U;
	int16_t x546 = 4957;
	int8_t x548 = -1;

	t37 = (x545%((x546*x547)<=x548));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x557 = 4464590919309033751LL;
	static uint8_t x558 = UINT8_MAX;
	static volatile int8_t x559 = 0;
	int16_t x560 = INT16_MAX;

	t38 = (x557%((x558*x559)<=x560));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x561 = INT64_MIN;
	int16_t x562 = INT16_MIN;
	uint32_t x563 = 848752U;
	int32_t x564 = -35;
	volatile int64_t t39 = -2529748804337179185LL;

	t39 = (x561%((x562*x563)<=x564));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x565 = INT8_MIN;
	int32_t x566 = INT32_MIN;
	uint32_t x567 = 168U;
	static int16_t x568 = INT16_MIN;
	int32_t t40 = 825;

	t40 = (x565%((x566*x567)<=x568));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x581 = UINT16_MAX;
	volatile uint8_t x582 = 14U;
	static int32_t x583 = -1;
	volatile int32_t t41 = -997;

	t41 = (x581%((x582*x583)<=x584));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x589 = 417479025;
	int16_t x590 = -51;
	int64_t x591 = 3162LL;
	int32_t t42 = -2580887;

	t42 = (x589%((x590*x591)<=x592));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x606 = -1;
	static int8_t x607 = INT8_MIN;
	volatile int32_t t43 = -996438;

	t43 = (x605%((x606*x607)<=x608));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x613 = 32115072411806225LL;
	static int64_t x614 = INT64_MAX;
	int64_t x616 = -1LL;
	volatile int64_t t44 = 2249727276299404172LL;

	t44 = (x613%((x614*x615)<=x616));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x634 = INT16_MIN;
	static int8_t x635 = 1;
	volatile int16_t x636 = INT16_MAX;

	t45 = (x633%((x634*x635)<=x636));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x653 = 0;
	uint8_t x654 = 0U;
	volatile uint8_t x656 = UINT8_MAX;
	volatile int32_t t46 = 1666020;

	t46 = (x653%((x654*x655)<=x656));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x660 = UINT64_MAX;

	t47 = (x657%((x658*x659)<=x660));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x665 = 0LL;
	volatile int64_t t48 = -132281LL;

	t48 = (x665%((x666*x667)<=x668));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x670 = UINT8_MAX;
	int8_t x671 = 0;
	uint32_t x672 = 49U;
	int32_t t49 = 10842928;

	t49 = (x669%((x670*x671)<=x672));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x677 = 36;
	int16_t x679 = INT16_MIN;
	uint32_t x680 = UINT32_MAX;
	int32_t t50 = 33432904;

	t50 = (x677%((x678*x679)<=x680));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x689 = -1;
	int64_t x690 = 386252LL;
	int8_t x691 = INT8_MIN;
	static int8_t x692 = INT8_MAX;
	static volatile int32_t t51 = 35745;

	t51 = (x689%((x690*x691)<=x692));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x693 = 7U;
	static uint8_t x694 = 26U;
	static int64_t x696 = -1LL;
	volatile int32_t t52 = 12694;

	t52 = (x693%((x694*x695)<=x696));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x753 = 1;
	int16_t x754 = 0;
	int32_t x755 = 131117571;
	uint64_t x756 = 94267LLU;
	int32_t t53 = -1;

	t53 = (x753%((x754*x755)<=x756));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x758 = 16287418608259181LLU;
	int8_t x759 = INT8_MIN;
	int16_t x760 = -1;
	int32_t t54 = -10520;

	t54 = (x757%((x758*x759)<=x760));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x770 = UINT64_MAX;
	volatile int32_t t55 = -30;

	t55 = (x769%((x770*x771)<=x772));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x793 = -1LL;
	static uint16_t x794 = 224U;
	int64_t x795 = -121708916122LL;
	static volatile int8_t x796 = -1;
	volatile int64_t t56 = 0LL;

	t56 = (x793%((x794*x795)<=x796));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x805 = INT8_MIN;
	int32_t x806 = -1;
	uint64_t x807 = 58138203611390LLU;
	int8_t x808 = -1;
	volatile int32_t t57 = 10264;

	t57 = (x805%((x806*x807)<=x808));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x814 = -1;
	static int8_t x815 = INT8_MAX;
	int32_t x816 = 200;
	int64_t t58 = 41213625731941LL;

	t58 = (x813%((x814*x815)<=x816));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x826 = 3U;
	volatile int8_t x827 = -1;
	volatile int8_t x828 = INT8_MAX;

	t59 = (x825%((x826*x827)<=x828));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x857 = -1;
	int8_t x858 = INT8_MIN;
	volatile uint64_t x860 = 476417910646LLU;

	t60 = (x857%((x858*x859)<=x860));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x861 = -454742772611511981LL;
	uint32_t x862 = 1558U;
	int32_t x864 = -1;
	int64_t t61 = -2LL;

	t61 = (x861%((x862*x863)<=x864));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x873 = -1389;
	static uint32_t x874 = UINT32_MAX;
	int8_t x875 = INT8_MIN;
	int16_t x876 = INT16_MAX;
	int32_t t62 = 123441;

	t62 = (x873%((x874*x875)<=x876));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x881 = 606U;
	static uint16_t x882 = UINT16_MAX;
	uint16_t x883 = 5853U;
	volatile int32_t t63 = 204869;

	t63 = (x881%((x882*x883)<=x884));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x886 = UINT32_MAX;
	static volatile int8_t x887 = -1;
	int16_t x888 = INT16_MIN;
	static volatile int32_t t64 = 14325414;

	t64 = (x885%((x886*x887)<=x888));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x889 = -1;
	uint16_t x890 = UINT16_MAX;
	int16_t x891 = -1;
	uint8_t x892 = 2U;
	volatile int32_t t65 = 724219351;

	t65 = (x889%((x890*x891)<=x892));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x909 = 6385947344LLU;
	int32_t x910 = -1;
	int64_t x911 = 126714956915581LL;
	volatile int32_t x912 = 7;
	uint64_t t66 = 1856LLU;

	t66 = (x909%((x910*x911)<=x912));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x913 = UINT32_MAX;
	uint8_t x915 = UINT8_MAX;
	volatile uint64_t x916 = UINT64_MAX;

	t67 = (x913%((x914*x915)<=x916));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x933 = 224136LL;
	static int8_t x935 = INT8_MIN;
	int64_t x936 = 98249355208612232LL;
	int64_t t68 = 277468460LL;

	t68 = (x933%((x934*x935)<=x936));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x949 = 16;
	int8_t x951 = INT8_MIN;
	uint32_t x952 = 275937597U;
	static volatile int32_t t69 = 331901958;

	t69 = (x949%((x950*x951)<=x952));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x955 = 52;
	int16_t x956 = -52;
	int32_t t70 = 7;

	t70 = (x953%((x954*x955)<=x956));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x973 = INT16_MIN;
	static uint8_t x974 = 88U;
	int16_t x975 = INT16_MIN;
	int64_t x976 = -1LL;

	t71 = (x973%((x974*x975)<=x976));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1001 = -23272833;
	uint16_t x1002 = 362U;
	int8_t x1003 = -1;
	uint16_t x1004 = UINT16_MAX;
	int32_t t72 = 0;

	t72 = (x1001%((x1002*x1003)<=x1004));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1005 = -1;
	int32_t x1006 = -67;
	volatile uint32_t x1007 = 22353U;
	volatile int32_t t73 = 1;

	t73 = (x1005%((x1006*x1007)<=x1008));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1041 = UINT8_MAX;
	int64_t x1042 = -2924910328LL;
	int32_t x1044 = INT32_MIN;
	int32_t t74 = -3381;

	t74 = (x1041%((x1042*x1043)<=x1044));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x1045 = -3;
	volatile int32_t x1046 = -1;
	static int64_t x1047 = 1089236LL;
	int8_t x1048 = INT8_MAX;
	int32_t t75 = -1751;

	t75 = (x1045%((x1046*x1047)<=x1048));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x1054 = 2488267835LLU;
	volatile uint32_t x1055 = 16U;
	int8_t x1056 = INT8_MIN;
	volatile int64_t t76 = 116396354324220466LL;

	t76 = (x1053%((x1054*x1055)<=x1056));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1065 = 1789325U;
	uint16_t x1066 = 3U;
	static int8_t x1067 = -1;
	int64_t x1068 = -1LL;

	t77 = (x1065%((x1066*x1067)<=x1068));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1069 = UINT64_MAX;
	volatile int32_t x1070 = INT32_MAX;
	uint64_t x1071 = 2935598646LLU;
	volatile uint64_t t78 = 410230342085409LLU;

	t78 = (x1069%((x1070*x1071)<=x1072));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1085 = 1;
	static int8_t x1086 = INT8_MAX;
	static uint16_t x1088 = 1U;

	t79 = (x1085%((x1086*x1087)<=x1088));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1098 = UINT64_MAX;
	uint32_t x1099 = 88112834U;
	int32_t x1100 = -6;
	static volatile int64_t t80 = -2398017680LL;

	t80 = (x1097%((x1098*x1099)<=x1100));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1118 = 299;
	uint32_t x1119 = 471136599U;
	int16_t x1120 = -1191;
	static int32_t t81 = 2768;

	t81 = (x1117%((x1118*x1119)<=x1120));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1134 = -1;
	volatile int8_t x1135 = -1;
	int64_t x1136 = 85721926LL;
	volatile int32_t t82 = 341;

	t82 = (x1133%((x1134*x1135)<=x1136));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1137 = -2;
	uint8_t x1138 = 92U;
	int32_t x1139 = -114;
	static uint8_t x1140 = 1U;
	static volatile int32_t t83 = -2442;

	t83 = (x1137%((x1138*x1139)<=x1140));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x1141 = INT32_MIN;
	static uint64_t x1142 = UINT64_MAX;
	int8_t x1143 = -3;
	volatile int32_t t84 = -345078;

	t84 = (x1141%((x1142*x1143)<=x1144));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1149 = INT64_MIN;
	int16_t x1151 = INT16_MIN;
	int8_t x1152 = INT8_MAX;
	volatile int64_t t85 = -5LL;

	t85 = (x1149%((x1150*x1151)<=x1152));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1153 = INT8_MAX;
	uint64_t x1155 = 5389209678LLU;
	int64_t x1156 = INT64_MAX;
	int32_t t86 = -3982;

	t86 = (x1153%((x1154*x1155)<=x1156));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x1157 = 3U;
	int64_t x1158 = -1LL;
	static uint8_t x1159 = UINT8_MAX;
	int8_t x1160 = -3;
	volatile int32_t t87 = -31467213;

	t87 = (x1157%((x1158*x1159)<=x1160));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1169 = INT32_MAX;
	int8_t x1170 = -24;
	static uint32_t x1171 = UINT32_MAX;
	int16_t x1172 = INT16_MIN;
	int32_t t88 = -19133756;

	t88 = (x1169%((x1170*x1171)<=x1172));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1174 = -64800676;
	int8_t x1175 = 12;
	volatile int8_t x1176 = INT8_MAX;

	t89 = (x1173%((x1174*x1175)<=x1176));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x1177 = 0;
	int32_t x1178 = -1;
	static int16_t x1180 = -15422;

	t90 = (x1177%((x1178*x1179)<=x1180));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1189 = -1;
	int64_t x1190 = -1LL;
	int16_t x1191 = INT16_MIN;
	volatile int64_t x1192 = INT64_MAX;

	t91 = (x1189%((x1190*x1191)<=x1192));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1206 = 0U;
	int16_t x1207 = INT16_MAX;
	uint16_t x1208 = 1U;

	t92 = (x1205%((x1206*x1207)<=x1208));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1233 = UINT32_MAX;
	int64_t x1234 = -1LL;
	int8_t x1235 = INT8_MIN;
	uint32_t x1236 = 3365541U;
	volatile uint32_t t93 = 25U;

	t93 = (x1233%((x1234*x1235)<=x1236));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1245 = UINT8_MAX;
	int8_t x1248 = INT8_MIN;
	volatile int32_t t94 = 5296023;

	t94 = (x1245%((x1246*x1247)<=x1248));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1257 = 4862;
	int16_t x1259 = INT16_MIN;
	volatile int32_t t95 = 126576;

	t95 = (x1257%((x1258*x1259)<=x1260));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x1265 = INT32_MIN;
	int16_t x1266 = INT16_MIN;
	uint8_t x1268 = 2U;
	int32_t t96 = 8601;

	t96 = (x1265%((x1266*x1267)<=x1268));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1269 = INT8_MIN;
	int64_t x1271 = 86547LL;
	int64_t x1272 = -1LL;
	static volatile int32_t t97 = -2;

	t97 = (x1269%((x1270*x1271)<=x1272));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1274 = UINT8_MAX;
	int64_t x1275 = -448083085432LL;
	int32_t x1276 = INT32_MIN;
	static int32_t t98 = -226368;

	t98 = (x1273%((x1274*x1275)<=x1276));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1281 = -2;
	volatile int16_t x1282 = 159;
	volatile int64_t x1283 = -1LL;
	int16_t x1284 = 4655;
	int32_t t99 = 62;

	t99 = (x1281%((x1282*x1283)<=x1284));

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

