#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x15 = UINT8_MAX;
int32_t t0 = -3;
static uint64_t x29 = 47155126294LLU;
volatile uint64_t t3 = 50681LLU;
int8_t x54 = 0;
uint8_t x55 = UINT8_MAX;
int32_t x99 = INT32_MIN;
static int64_t x130 = -1LL;
static uint16_t x157 = UINT16_MAX;
volatile int32_t t8 = -174470;
volatile uint64_t x168 = 3560941516810LLU;
uint32_t x175 = UINT32_MAX;
uint64_t x176 = 24419751971964LLU;
int32_t x197 = 7213468;
volatile uint64_t x198 = UINT64_MAX;
int16_t x278 = INT16_MIN;
static int64_t x280 = INT64_MAX;
uint32_t x293 = 366758U;
static volatile int64_t x295 = -75315833219LL;
static int32_t x303 = 222884;
volatile int64_t x324 = INT64_MIN;
static uint32_t x341 = 39791712U;
uint16_t x343 = 1U;
volatile uint32_t t21 = 4281342U;
uint8_t x357 = 9U;
static int8_t x359 = -1;
int64_t x376 = INT64_MAX;
uint64_t x390 = UINT64_MAX;
volatile int32_t t25 = -3;
volatile int8_t x395 = -1;
uint64_t t26 = 13LLU;
int64_t x412 = 40894LL;
uint64_t x484 = 528689780449897714LLU;
volatile int8_t x494 = INT8_MIN;
uint8_t x495 = 17U;
static int64_t x507 = INT64_MAX;
static int32_t t33 = 25697240;
static int32_t t34 = 0;
int8_t x528 = INT8_MAX;
int32_t t37 = 1309170;
int16_t x650 = INT16_MIN;
int64_t t40 = -5443LL;
static int16_t x653 = 0;
volatile uint64_t x670 = 45009LLU;
int32_t x688 = -1;
uint16_t x699 = 0U;
uint32_t t47 = 20184U;
int32_t x782 = 2;
int64_t x797 = INT64_MAX;
volatile uint64_t x798 = 1636262LLU;
volatile int64_t t52 = INT64_MAX;
int8_t x808 = 2;
static volatile int64_t x809 = INT64_MAX;
uint32_t x825 = UINT32_MAX;
static int8_t x827 = -1;
static int64_t x828 = INT64_MIN;
volatile uint64_t t57 = 33994443229278LLU;
int8_t x862 = -1;
static volatile int32_t t59 = -925012013;
uint16_t x889 = UINT16_MAX;
uint64_t x891 = 238922275723LLU;
int16_t x892 = INT16_MIN;
uint32_t x913 = 771107U;
int8_t x915 = INT8_MIN;
volatile int64_t x949 = INT64_MAX;
uint16_t x957 = 191U;
volatile uint8_t x959 = 13U;
uint32_t x979 = UINT32_MAX;
int32_t x984 = INT32_MIN;
uint32_t t66 = UINT32_MAX;
uint8_t x1087 = UINT8_MAX;
static int64_t x1097 = 2072927277LL;
int32_t x1116 = -521;
static volatile int64_t t73 = 17821358838626019LL;
uint64_t x1136 = 1914084185652LLU;
uint64_t x1141 = UINT64_MAX;
uint16_t x1182 = UINT16_MAX;
static volatile int32_t t78 = -66197844;
static volatile int32_t t80 = -3707832;
int32_t x1221 = INT32_MAX;
uint64_t x1226 = 167889785801LLU;
uint64_t x1227 = 654LLU;
static int32_t x1240 = 379;
volatile uint16_t x1293 = 1U;
volatile uint64_t t86 = UINT64_MAX;
volatile int32_t t87 = 2;
static int64_t x1354 = -1LL;
static uint8_t x1355 = 0U;
uint64_t x1361 = 601LLU;
uint8_t x1362 = UINT8_MAX;
static uint8_t x1381 = 8U;
int8_t x1383 = -1;
volatile int32_t x1393 = INT32_MAX;
int32_t t91 = INT32_MAX;
int16_t x1434 = INT16_MAX;
int32_t x1435 = 287346;
int32_t x1447 = -1;
uint16_t x1457 = 7804U;
int16_t x1465 = INT16_MAX;


void f0(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x14 = -1;
	int16_t x16 = INT16_MIN;

	t0 = (x13<<((x14+x15)/x16));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x30 = INT8_MIN;
	static uint32_t x31 = 5039U;
	static uint64_t x32 = 582012862LLU;
	static volatile uint64_t t1 = 883265LLU;

	t1 = (x29<<((x30+x31)/x32));

	if (t1 != 47155126294LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x41 = 3U;
	int8_t x42 = INT8_MIN;
	static uint8_t x43 = 8U;
	volatile int32_t x44 = INT32_MAX;
	volatile int32_t t2 = -358;

	t2 = (x41<<((x42+x43)/x44));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x49 = 5578LLU;
	uint32_t x50 = 4209U;
	uint64_t x51 = 0LLU;
	int32_t x52 = INT32_MIN;

	t3 = (x49<<((x50+x51)/x52));

	if (t3 != 5578LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x53 = 1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t4 = -95778;

	t4 = (x53<<((x54+x55)/x56));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x97 = 104435961;
	uint64_t x98 = UINT64_MAX;
	int64_t x100 = INT64_MIN;
	volatile int32_t t5 = 5216371;

	t5 = (x97<<((x98+x99)/x100));

	if (t5 != 208871922) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x129 = 2671106893LLU;
	static uint64_t x131 = 220912782102438493LLU;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t6 = 4038154LLU;

	t6 = (x129<<((x130+x131)/x132));

	if (t6 != 2671106893LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x153 = UINT32_MAX;
	uint8_t x154 = 124U;
	int8_t x155 = INT8_MIN;
	static uint8_t x156 = 19U;
	uint32_t t7 = UINT32_MAX;

	t7 = (x153<<((x154+x155)/x156));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	volatile int16_t x160 = INT16_MIN;

	t8 = (x157<<((x158+x159)/x160));

	if (t8 != 262140) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x165 = 0U;
	uint16_t x166 = UINT16_MAX;
	int8_t x167 = 29;
	volatile int32_t t9 = 766070872;

	t9 = (x165<<((x166+x167)/x168));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x173 = 7;
	static int32_t x174 = -12;
	int32_t t10 = 0;

	t10 = (x173<<((x174+x175)/x176));

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x185 = 1237U;
	static int16_t x186 = INT16_MIN;
	int16_t x187 = 1;
	uint64_t x188 = UINT64_MAX;
	int32_t t11 = -1;

	t11 = (x185<<((x186+x187)/x188));

	if (t11 != 1237) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x193 = UINT32_MAX;
	int8_t x194 = INT8_MAX;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 12027;
	static volatile uint32_t t12 = UINT32_MAX;

	t12 = (x193<<((x194+x195)/x196));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MAX;
	volatile int32_t t13 = 200775;

	t13 = (x197<<((x198+x199)/x200));

	if (t13 != 14426936) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int8_t x214 = 23;
	uint64_t x215 = 2204381122272933LLU;
	int32_t x216 = -1;
	uint64_t t14 = UINT64_MAX;

	t14 = (x213<<((x214+x215)/x216));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x237 = INT16_MAX;
	int8_t x238 = INT8_MAX;
	volatile uint64_t x239 = 0LLU;
	int64_t x240 = INT64_MIN;
	int32_t t15 = -135;

	t15 = (x237<<((x238+x239)/x240));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x277 = 36858386LLU;
	int16_t x279 = -1;
	uint64_t t16 = 2180LLU;

	t16 = (x277<<((x278+x279)/x280));

	if (t16 != 36858386LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x294 = INT16_MAX;
	uint64_t x296 = UINT64_MAX;
	volatile uint32_t t17 = 1233U;

	t17 = (x293<<((x294+x295)/x296));

	if (t17 != 366758U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x301 = UINT32_MAX;
	static int16_t x302 = -7;
	int32_t x304 = 603824244;
	static uint32_t t18 = UINT32_MAX;

	t18 = (x301<<((x302+x303)/x304));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x321 = 1199973998861LL;
	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MAX;
	int64_t t19 = 391678091LL;

	t19 = (x321<<((x322+x323)/x324));

	if (t19 != 1199973998861LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x329 = UINT32_MAX;
	volatile int16_t x330 = INT16_MAX;
	static uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MIN;
	uint32_t t20 = UINT32_MAX;

	t20 = (x329<<((x330+x331)/x332));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x342 = INT8_MAX;
	int16_t x344 = INT16_MAX;

	t21 = (x341<<((x342+x343)/x344));

	if (t21 != 39791712U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x358 = -1;
	int16_t x360 = INT16_MIN;
	int32_t t22 = -1703108;

	t22 = (x357<<((x358+x359)/x360));

	if (t22 != 9) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x373 = 2;
	int32_t x374 = INT32_MAX;
	int64_t x375 = 2096870235LL;
	volatile int32_t t23 = 30096;

	t23 = (x373<<((x374+x375)/x376));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x381 = 0;
	uint64_t x382 = 5834095379997555774LLU;
	static int8_t x383 = -1;
	uint64_t x384 = UINT64_MAX;
	int32_t t24 = 781750464;

	t24 = (x381<<((x382+x383)/x384));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x389 = 3762;
	static int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MIN;

	t25 = (x389<<((x390+x391)/x392));

	if (t25 != 3762) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x393 = 4LLU;
	static uint8_t x394 = 1U;
	uint16_t x396 = 1U;

	t26 = (x393<<((x394+x395)/x396));

	if (t26 != 4LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x401 = UINT8_MAX;
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = INT16_MIN;
	static int16_t x404 = -1;
	int32_t t27 = -1;

	t27 = (x401<<((x402+x403)/x404));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x409 = 1;
	int16_t x410 = INT16_MAX;
	uint32_t x411 = 917921U;
	volatile int32_t t28 = -50;

	t28 = (x409<<((x410+x411)/x412));

	if (t28 != 8388608) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x417 = INT8_MAX;
	int8_t x418 = INT8_MAX;
	int16_t x419 = 862;
	int8_t x420 = INT8_MAX;
	static volatile int32_t t29 = 552832;

	t29 = (x417<<((x418+x419)/x420));

	if (t29 != 16256) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x469 = UINT16_MAX;
	int32_t x470 = INT32_MIN;
	uint32_t x471 = 5U;
	static int8_t x472 = -1;
	int32_t t30 = 288737515;

	t30 = (x469<<((x470+x471)/x472));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x481 = 9051;
	volatile int16_t x482 = -1;
	int8_t x483 = INT8_MAX;
	int32_t t31 = -4896176;

	t31 = (x481<<((x482+x483)/x484));

	if (t31 != 9051) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x493 = 1857U;
	uint16_t x496 = 537U;
	uint32_t t32 = 10857481U;

	t32 = (x493<<((x494+x495)/x496));

	if (t32 != 1857U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x505 = 152487016;
	int64_t x506 = INT64_MIN;
	static uint64_t x508 = UINT64_MAX;

	t33 = (x505<<((x506+x507)/x508));

	if (t33 != 304974032) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x509 = UINT8_MAX;
	static int16_t x510 = INT16_MAX;
	int16_t x511 = -1;
	static int16_t x512 = INT16_MAX;

	t34 = (x509<<((x510+x511)/x512));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x525 = UINT64_MAX;
	static int16_t x526 = -1;
	volatile uint8_t x527 = 94U;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x525<<((x526+x527)/x528));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x545 = 0;
	uint64_t x546 = 31063991029887LLU;
	static volatile int8_t x547 = 1;
	int16_t x548 = -1;
	volatile int32_t t36 = 1578;

	t36 = (x545<<((x546+x547)/x548));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x557 = 109U;
	int16_t x558 = -15;
	static volatile int8_t x559 = 0;
	uint8_t x560 = 40U;

	t37 = (x557<<((x558+x559)/x560));

	if (t37 != 109) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x613 = 13838;
	int32_t x614 = -1;
	uint16_t x615 = 8U;
	static int8_t x616 = INT8_MIN;
	static int32_t t38 = 1;

	t38 = (x613<<((x614+x615)/x616));

	if (t38 != 13838) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x641 = INT64_MAX;
	uint16_t x642 = 325U;
	int16_t x643 = -3262;
	int32_t x644 = INT32_MIN;
	static int64_t t39 = INT64_MAX;

	t39 = (x641<<((x642+x643)/x644));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x649 = 1378LL;
	static uint8_t x651 = UINT8_MAX;
	static int64_t x652 = INT64_MAX;

	t40 = (x649<<((x650+x651)/x652));

	if (t40 != 1378LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x654 = 118U;
	uint8_t x655 = 38U;
	uint64_t x656 = 72234254026256LLU;
	int32_t t41 = 58574136;

	t41 = (x653<<((x654+x655)/x656));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x661 = 1U;
	uint8_t x662 = UINT8_MAX;
	int16_t x663 = -1;
	int32_t x664 = INT32_MIN;
	int32_t t42 = 1409;

	t42 = (x661<<((x662+x663)/x664));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x665 = 51U;
	int16_t x666 = INT16_MIN;
	static uint64_t x667 = 313LLU;
	int8_t x668 = -1;
	volatile int32_t t43 = -789600;

	t43 = (x665<<((x666+x667)/x668));

	if (t43 != 51) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x669 = UINT16_MAX;
	int16_t x671 = INT16_MIN;
	static int8_t x672 = -1;
	int32_t t44 = 1;

	t44 = (x669<<((x670+x671)/x672));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x685 = INT64_MAX;
	int32_t x686 = INT32_MIN;
	static volatile uint32_t x687 = 11U;
	static int64_t t45 = INT64_MAX;

	t45 = (x685<<((x686+x687)/x688));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x689 = 1U;
	int8_t x690 = -1;
	volatile int8_t x691 = -1;
	static int32_t x692 = 18208875;
	uint32_t t46 = 752413033U;

	t46 = (x689<<((x690+x691)/x692));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x697 = UINT32_MAX;
	static volatile int8_t x698 = INT8_MIN;
	volatile int8_t x700 = INT8_MIN;

	t47 = (x697<<((x698+x699)/x700));

	if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x701 = 2889847303817472370LLU;
	uint8_t x702 = 0U;
	uint32_t x703 = 18716U;
	int64_t x704 = INT64_MAX;
	volatile uint64_t t48 = 6275751LLU;

	t48 = (x701<<((x702+x703)/x704));

	if (t48 != 2889847303817472370LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x761 = UINT64_MAX;
	int8_t x762 = INT8_MIN;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;
	static uint64_t t49 = UINT64_MAX;

	t49 = (x761<<((x762+x763)/x764));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x781 = UINT64_MAX;
	static uint32_t x783 = 1689946U;
	int16_t x784 = -51;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x781<<((x782+x783)/x784));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x785 = 3;
	volatile int8_t x786 = -1;
	int16_t x787 = INT16_MIN;
	int32_t x788 = INT32_MIN;
	int32_t t51 = -3102235;

	t51 = (x785<<((x786+x787)/x788));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x799 = UINT64_MAX;
	volatile int16_t x800 = INT16_MIN;

	t52 = (x797<<((x798+x799)/x800));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x805 = INT32_MAX;
	uint8_t x806 = 1U;
	static uint64_t x807 = UINT64_MAX;
	int32_t t53 = INT32_MAX;

	t53 = (x805<<((x806+x807)/x808));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x810 = 92U;
	uint8_t x811 = UINT8_MAX;
	uint32_t x812 = UINT32_MAX;
	int64_t t54 = INT64_MAX;

	t54 = (x809<<((x810+x811)/x812));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x826 = 2038LL;
	uint32_t t55 = UINT32_MAX;

	t55 = (x825<<((x826+x827)/x828));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x833 = 55U;
	static int8_t x834 = -63;
	static uint8_t x835 = UINT8_MAX;
	static uint32_t x836 = 14703943U;
	volatile int32_t t56 = -219419;

	t56 = (x833<<((x834+x835)/x836));

	if (t56 != 55) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x841 = 163512932574309LLU;
	uint8_t x842 = 2U;
	uint16_t x843 = 6U;
	int64_t x844 = INT64_MIN;

	t57 = (x841<<((x842+x843)/x844));

	if (t57 != 163512932574309LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x861 = 534786050002LL;
	uint64_t x863 = 29272902976064LLU;
	int64_t x864 = INT64_MAX;
	int64_t t58 = 3LL;

	t58 = (x861<<((x862+x863)/x864));

	if (t58 != 534786050002LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x865 = 24U;
	volatile uint8_t x866 = 19U;
	uint16_t x867 = UINT16_MAX;
	uint64_t x868 = 12634750066LLU;

	t59 = (x865<<((x866+x867)/x868));

	if (t59 != 24) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x890 = -1;
	int32_t t60 = 1;

	t60 = (x889<<((x890+x891)/x892));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x914 = 10565;
	int64_t x916 = 161644LL;
	static volatile uint32_t t61 = 30U;

	t61 = (x913<<((x914+x915)/x916));

	if (t61 != 771107U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x941 = 4U;
	static int32_t x942 = INT32_MIN;
	static uint64_t x943 = UINT64_MAX;
	int8_t x944 = INT8_MIN;
	volatile int32_t t62 = -414452;

	t62 = (x941<<((x942+x943)/x944));

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x950 = 11;
	uint64_t x951 = 26878991974LLU;
	int64_t x952 = INT64_MIN;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x949<<((x950+x951)/x952));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x958 = 5U;
	uint64_t x960 = UINT64_MAX;
	int32_t t64 = -9;

	t64 = (x957<<((x958+x959)/x960));

	if (t64 != 191) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x977 = 511;
	uint16_t x978 = 420U;
	volatile uint64_t x980 = 106192LLU;
	static int32_t t65 = 157845476;

	t65 = (x977<<((x978+x979)/x980));

	if (t65 != 511) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x981 = UINT32_MAX;
	static int32_t x982 = 833044;
	static uint32_t x983 = 1U;

	t66 = (x981<<((x982+x983)/x984));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x997 = UINT32_MAX;
	int16_t x998 = -1;
	int32_t x999 = 188;
	int64_t x1000 = -550564147LL;
	uint32_t t67 = UINT32_MAX;

	t67 = (x997<<((x998+x999)/x1000));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1001 = 1069746175690166279LL;
	static int64_t x1002 = INT64_MIN;
	uint64_t x1003 = 22118928346281974LLU;
	int8_t x1004 = -1;
	volatile int64_t t68 = -1057LL;

	t68 = (x1001<<((x1002+x1003)/x1004));

	if (t68 != 1069746175690166279LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x1009 = INT64_MAX;
	int16_t x1010 = 3;
	int8_t x1011 = -1;
	static int16_t x1012 = 111;
	static int64_t t69 = INT64_MAX;

	t69 = (x1009<<((x1010+x1011)/x1012));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1085 = 658U;
	static volatile int8_t x1086 = -1;
	static int8_t x1088 = 40;
	uint32_t t70 = 2078659U;

	t70 = (x1085<<((x1086+x1087)/x1088));

	if (t70 != 42112U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1098 = INT64_MAX;
	int64_t x1099 = -1LL;
	int64_t x1100 = INT64_MAX;
	volatile int64_t t71 = 7992LL;

	t71 = (x1097<<((x1098+x1099)/x1100));

	if (t71 != 2072927277LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1113 = 1U;
	uint32_t x1114 = UINT32_MAX;
	uint32_t x1115 = 334610765U;
	int32_t t72 = 157444417;

	t72 = (x1113<<((x1114+x1115)/x1116));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1125 = 47542389285746689LL;
	volatile int32_t x1126 = 6;
	uint64_t x1127 = 4137629LLU;
	uint32_t x1128 = 7965678U;

	t73 = (x1125<<((x1126+x1127)/x1128));

	if (t73 != 47542389285746689LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1133 = INT16_MAX;
	uint16_t x1134 = 0U;
	volatile int8_t x1135 = INT8_MAX;
	static int32_t t74 = -72607;

	t74 = (x1133<<((x1134+x1135)/x1136));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1142 = UINT64_MAX;
	volatile int32_t x1143 = -1;
	int32_t x1144 = INT32_MIN;
	uint64_t t75 = 2LLU;

	t75 = (x1141<<((x1142+x1143)/x1144));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1145 = 23902314U;
	static volatile int8_t x1146 = -1;
	uint32_t x1147 = 473621670U;
	static int64_t x1148 = -551480155173822419LL;
	uint32_t t76 = 6917U;

	t76 = (x1145<<((x1146+x1147)/x1148));

	if (t76 != 23902314U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1157 = 2826;
	int16_t x1158 = 14;
	volatile int16_t x1159 = INT16_MIN;
	int64_t x1160 = 738827008200038850LL;
	static int32_t t77 = -27892;

	t77 = (x1157<<((x1158+x1159)/x1160));

	if (t77 != 2826) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1181 = 59;
	int16_t x1183 = INT16_MAX;
	volatile int64_t x1184 = 116595563746392LL;

	t78 = (x1181<<((x1182+x1183)/x1184));

	if (t78 != 59) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1189 = 4;
	uint8_t x1190 = 1U;
	int8_t x1191 = INT8_MIN;
	int64_t x1192 = -18796653LL;
	int32_t t79 = -35998644;

	t79 = (x1189<<((x1190+x1191)/x1192));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x1205 = 5288;
	int32_t x1206 = -1;
	static int32_t x1207 = 203821991;
	volatile uint64_t x1208 = 976894630626683960LLU;

	t80 = (x1205<<((x1206+x1207)/x1208));

	if (t80 != 5288) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1222 = -5936LL;
	static uint64_t x1223 = 2638620322LLU;
	int8_t x1224 = INT8_MIN;
	static int32_t t81 = INT32_MAX;

	t81 = (x1221<<((x1222+x1223)/x1224));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1225 = UINT32_MAX;
	int16_t x1228 = INT16_MIN;
	uint32_t t82 = UINT32_MAX;

	t82 = (x1225<<((x1226+x1227)/x1228));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x1237 = INT32_MAX;
	int8_t x1238 = 58;
	uint32_t x1239 = 143U;
	volatile int32_t t83 = INT32_MAX;

	t83 = (x1237<<((x1238+x1239)/x1240));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1294 = -1;
	int8_t x1295 = -23;
	volatile int32_t x1296 = INT32_MIN;
	static volatile int32_t t84 = 360084;

	t84 = (x1293<<((x1294+x1295)/x1296));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x1297 = 933;
	uint8_t x1298 = 8U;
	uint32_t x1299 = 57U;
	int64_t x1300 = INT64_MIN;
	int32_t t85 = 458;

	t85 = (x1297<<((x1298+x1299)/x1300));

	if (t85 != 933) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x1305 = UINT64_MAX;
	uint8_t x1306 = 2U;
	int64_t x1307 = -6839431LL;
	static volatile int64_t x1308 = INT64_MIN;

	t86 = (x1305<<((x1306+x1307)/x1308));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1345 = 1U;
	int8_t x1346 = INT8_MIN;
	volatile int8_t x1347 = INT8_MIN;
	int16_t x1348 = INT16_MIN;

	t87 = (x1345<<((x1346+x1347)/x1348));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x1353 = 512645273084LLU;
	int8_t x1356 = INT8_MIN;
	uint64_t t88 = 399303045920158459LLU;

	t88 = (x1353<<((x1354+x1355)/x1356));

	if (t88 != 512645273084LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1363 = UINT64_MAX;
	int64_t x1364 = INT64_MIN;
	uint64_t t89 = 192177230LLU;

	t89 = (x1361<<((x1362+x1363)/x1364));

	if (t89 != 601LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1382 = 2742U;
	uint64_t x1384 = 107241279LLU;
	static volatile int32_t t90 = 23986;

	t90 = (x1381<<((x1382+x1383)/x1384));

	if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1394 = 1330517806691724LLU;
	uint8_t x1395 = 102U;
	int32_t x1396 = INT32_MIN;

	t91 = (x1393<<((x1394+x1395)/x1396));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1413 = UINT8_MAX;
	int32_t x1414 = -1;
	uint16_t x1415 = UINT16_MAX;
	uint16_t x1416 = UINT16_MAX;
	volatile int32_t t92 = 1;

	t92 = (x1413<<((x1414+x1415)/x1416));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1417 = 5724U;
	static int32_t x1418 = -1;
	int32_t x1419 = -4721;
	volatile int64_t x1420 = INT64_MAX;
	static int32_t t93 = 0;

	t93 = (x1417<<((x1418+x1419)/x1420));

	if (t93 != 5724) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1433 = 36169506911LL;
	uint32_t x1436 = 1432518721U;
	int64_t t94 = 20180028450181LL;

	t94 = (x1433<<((x1434+x1435)/x1436));

	if (t94 != 36169506911LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x1441 = 13U;
	uint8_t x1442 = 28U;
	volatile int16_t x1443 = -1;
	int8_t x1444 = INT8_MIN;
	static int32_t t95 = 582010529;

	t95 = (x1441<<((x1442+x1443)/x1444));

	if (t95 != 13) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1445 = INT32_MAX;
	int8_t x1446 = INT8_MIN;
	int32_t x1448 = -9211163;
	static int32_t t96 = INT32_MAX;

	t96 = (x1445<<((x1446+x1447)/x1448));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1458 = 1;
	int64_t x1459 = -1LL;
	uint64_t x1460 = 2LLU;
	static int32_t t97 = 10;

	t97 = (x1457<<((x1458+x1459)/x1460));

	if (t97 != 7804) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1466 = 4U;
	static uint8_t x1467 = UINT8_MAX;
	uint64_t x1468 = 1029LLU;
	static volatile int32_t t98 = -643;

	t98 = (x1465<<((x1466+x1467)/x1468));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x1517 = 858378;
	static uint8_t x1518 = 66U;
	static volatile uint32_t x1519 = 5542954U;
	int64_t x1520 = -8265551LL;
	int32_t t99 = 111461869;

	t99 = (x1517<<((x1518+x1519)/x1520));

	if (t99 != 858378) { NG(); } else { ; }
	
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

