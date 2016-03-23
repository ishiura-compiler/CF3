
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x8 = -1LL;
static int8_t x12 = INT8_MIN;
uint32_t x15 = 705132274U;
int16_t x16 = -1;
int16_t x31 = 204;
int32_t t4 = -754894812;
volatile int32_t t11 = 9601009;
volatile uint32_t x127 = 13565519U;
int32_t t14 = -65;
uint8_t x131 = 4U;
volatile int32_t t15 = 188308;
int16_t x134 = INT16_MAX;
static int64_t x135 = -1LL;
int8_t x136 = INT8_MIN;
uint16_t x167 = 223U;
volatile int32_t t19 = -158;
int8_t x172 = -1;
uint8_t x184 = 13U;
uint64_t x194 = 7548572393734705LLU;
static uint64_t x206 = 17847LLU;
volatile int32_t t25 = -203022;
uint64_t x215 = 69709053159971LLU;
int16_t x224 = 1;
static int32_t t27 = 40;
int64_t x225 = 40371LL;
int32_t t28 = -14;
uint16_t x251 = 60U;
uint32_t x270 = UINT32_MAX;
volatile uint32_t x278 = UINT32_MAX;
static volatile int32_t t34 = 50;
int64_t x285 = -1LL;
uint32_t x286 = 85590U;
int32_t t36 = -1;
int32_t t40 = 5;
uint32_t x360 = 1U;
volatile int32_t t41 = 0;
uint8_t x386 = 26U;
volatile int8_t x401 = INT8_MAX;
static volatile int64_t x403 = INT64_MAX;
int32_t t48 = 33685823;
uint16_t x426 = UINT16_MAX;
volatile int32_t t49 = -9161151;
volatile int32_t t50 = -3303;
uint64_t x454 = 5309LLU;
int8_t x455 = INT8_MIN;
int16_t x456 = INT16_MIN;
int32_t t51 = 457209830;
uint16_t x462 = UINT16_MAX;
volatile int64_t x464 = INT64_MAX;
uint16_t x474 = 765U;
volatile int32_t t53 = 1854;
volatile uint16_t x491 = 0U;
volatile int8_t x498 = INT8_MAX;
static int16_t x500 = -4;
int32_t t55 = 0;
static int8_t x509 = -1;
static int32_t x512 = -1;
volatile int32_t t58 = 26512131;
uint32_t x538 = 3U;
uint32_t x540 = UINT32_MAX;
uint8_t x562 = UINT8_MAX;
int32_t t63 = -488700153;
int16_t x576 = INT16_MIN;
volatile uint16_t x597 = UINT16_MAX;
volatile int64_t x598 = 5LL;
volatile int32_t t68 = -3572;
static int64_t x610 = 3047LL;
int32_t t69 = 3;
static int16_t x617 = INT16_MIN;
static volatile int8_t x633 = -57;
int32_t x657 = INT32_MAX;
volatile int8_t x660 = INT8_MIN;
int32_t x662 = INT32_MAX;
int64_t x664 = INT64_MIN;
int8_t x675 = INT8_MAX;
int32_t t76 = 2015812;
uint8_t x679 = 81U;
int16_t x684 = INT16_MIN;
volatile uint32_t x688 = 36909059U;
volatile int32_t t81 = 298561544;
static int16_t x713 = 263;
int8_t x718 = 0;
static uint16_t x732 = 107U;
static int32_t t85 = 190278;
int8_t x744 = 7;
volatile int16_t x750 = INT16_MAX;
volatile int16_t x783 = INT16_MAX;
uint64_t x807 = UINT64_MAX;
int32_t x808 = INT32_MAX;
uint64_t x810 = 735601582542501101LLU;
uint16_t x822 = 2U;
uint16_t x827 = UINT16_MAX;
int32_t t96 = -3;
volatile int16_t x838 = INT16_MAX;
int32_t x843 = INT32_MAX;
volatile int32_t t100 = 20607954;
uint32_t x876 = UINT32_MAX;
volatile uint8_t x899 = 4U;
static volatile int32_t t104 = -212275;
int32_t x901 = -1;
volatile int32_t t106 = -17;
static volatile int8_t x921 = 14;
int8_t x923 = -1;
int32_t t108 = -276;
static int32_t x941 = 189583;
volatile int16_t x944 = -1;
static volatile int32_t t110 = 8361850;
int64_t x968 = INT64_MAX;
int32_t x981 = INT32_MAX;
uint16_t x984 = UINT16_MAX;
uint16_t x990 = 4U;
int64_t x1039 = INT64_MIN;
uint64_t x1044 = 1281084964444LLU;
static uint32_t x1046 = 2836194U;
volatile int32_t x1049 = INT32_MAX;
int32_t x1059 = INT32_MAX;
int8_t x1093 = -1;
volatile int64_t x1096 = -1LL;
static volatile int64_t x1116 = -3727884049943135LL;
volatile int8_t x1118 = INT8_MAX;
int64_t x1120 = INT64_MIN;
volatile uint64_t x1124 = UINT64_MAX;
volatile uint64_t x1126 = UINT64_MAX;
int32_t t131 = -7670423;
int64_t x1132 = INT64_MIN;
volatile int16_t x1135 = -7692;
uint32_t x1138 = 459342U;
int64_t x1140 = 2318570344LL;
static int32_t x1141 = -151;
uint32_t x1144 = 11U;
uint16_t x1146 = 13U;
volatile int32_t t136 = 832;
uint64_t x1152 = UINT64_MAX;
static uint16_t x1154 = 0U;
volatile int64_t x1188 = INT64_MAX;
static int64_t x1203 = INT64_MAX;
int32_t t143 = 26700;
volatile uint8_t x1207 = UINT8_MAX;
int8_t x1209 = INT8_MAX;
uint64_t x1218 = 10785407653LLU;
int64_t x1224 = -1LL;
static uint8_t x1245 = UINT8_MAX;
int32_t x1248 = INT32_MIN;
int32_t x1264 = INT32_MAX;
static int32_t t150 = -40;
uint16_t x1266 = 103U;
static int16_t x1279 = 0;
int32_t t152 = -829986068;
int64_t x1316 = INT64_MIN;
uint8_t x1321 = 0U;
int16_t x1343 = -14;
static int32_t x1344 = INT32_MAX;
int16_t x1345 = 10;
uint32_t x1346 = 931576183U;
int16_t x1347 = INT16_MIN;
int32_t x1372 = INT32_MIN;
volatile int64_t x1373 = -41115327245LL;
int8_t x1376 = -1;
volatile int32_t t159 = 7990212;
volatile uint32_t x1378 = 59U;
int64_t x1383 = INT64_MIN;
uint8_t x1384 = 17U;
static volatile uint32_t x1390 = UINT32_MAX;
volatile int32_t t164 = -433874;
int8_t x1416 = -23;
static int32_t t166 = -64605;
uint32_t x1439 = 461U;
volatile int32_t t170 = 19;
volatile int32_t t174 = -30617;
static volatile uint8_t x1477 = UINT8_MAX;
int16_t x1479 = INT16_MAX;
int8_t x1500 = -1;
uint32_t x1512 = UINT32_MAX;
int32_t x1520 = INT32_MIN;
uint32_t x1533 = 12721821U;
uint16_t x1547 = 14U;
int64_t x1550 = 222568LL;
uint64_t x1551 = UINT64_MAX;
int8_t x1566 = INT8_MAX;
static int32_t x1573 = 104;
int16_t x1576 = INT16_MIN;
int16_t x1578 = 10;
int8_t x1582 = 3;
uint8_t x1583 = 2U;
static int32_t t191 = 24089;
uint16_t x1585 = 13U;
uint32_t x1592 = 66059U;
uint64_t x1595 = UINT64_MAX;
int16_t x1596 = INT16_MIN;
uint64_t x1617 = 66LLU;
int64_t x1624 = -132467580698724370LL;
int32_t t196 = -1646;
volatile int32_t t197 = -52070;
volatile int8_t x1643 = INT8_MIN;
volatile int32_t t198 = 39841349;
static int32_t x1647 = INT32_MAX;


void f0(void) {
    	uint8_t x1 = 54U;
	static int32_t x2 = INT32_MAX;
	int8_t x3 = INT8_MIN;
	static int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -77053029;

    t0 = (x1>(x2<<(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 1208U;
	static volatile uint16_t x6 = UINT16_MAX;
	static volatile int8_t x7 = -1;
	int32_t t1 = 1;

    t1 = (x5>(x6<<(x7<=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint64_t x10 = 372552523LLU;
	uint8_t x11 = 2U;
	static volatile int32_t t2 = -36483;

    t2 = (x9>(x10<<(x11<=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 12U;
	uint16_t x14 = 12U;
	static volatile int32_t t3 = 274707;

    t3 = (x13>(x14<<(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x29 = -1LL;
	int32_t x30 = INT32_MAX;
	uint8_t x32 = 2U;

    t4 = (x29>(x30<<(x31<=x32)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x49 = 37LLU;
	int32_t x50 = 125656;
	int32_t x51 = INT32_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	int32_t t5 = -57760;

    t5 = (x49>(x50<<(x51<=x52)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x77 = INT32_MIN;
	volatile uint16_t x78 = 4U;
	static int16_t x79 = -1;
	uint16_t x80 = UINT16_MAX;
	int32_t t6 = 68782;

    t6 = (x77>(x78<<(x79<=x80)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x81 = INT64_MIN;
	volatile int32_t x82 = 149571552;
	uint32_t x83 = 857U;
	static uint64_t x84 = 139297012077202575LLU;
	int32_t t7 = 1698;

    t7 = (x81>(x82<<(x83<=x84)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x85 = -1;
	uint8_t x86 = 3U;
	volatile int8_t x87 = INT8_MIN;
	int64_t x88 = 7363LL;
	int32_t t8 = 3613264;

    t8 = (x85>(x86<<(x87<=x88)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x93 = INT16_MIN;
	int32_t x94 = 212;
	int64_t x95 = -1LL;
	volatile int8_t x96 = -1;
	int32_t t9 = -33;

    t9 = (x93>(x94<<(x95<=x96)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x97 = 0;
	int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t10 = 953200;

    t10 = (x97>(x98<<(x99<=x100)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x109 = -200;
	uint16_t x110 = 266U;
	static uint32_t x111 = UINT32_MAX;
	int16_t x112 = -1;

    t11 = (x109>(x110<<(x111<=x112)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x113 = -1;
	uint16_t x114 = 15U;
	static uint8_t x115 = UINT8_MAX;
	volatile int16_t x116 = -241;
	static volatile int32_t t12 = 32101448;

    t12 = (x113>(x114<<(x115<=x116)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x121 = -1;
	static int16_t x122 = 1487;
	uint32_t x123 = 275668U;
	int8_t x124 = -1;
	int32_t t13 = -32;

    t13 = (x121>(x122<<(x123<=x124)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x125 = -1;
	volatile int32_t x126 = 453122;
	int8_t x128 = INT8_MIN;

    t14 = (x125>(x126<<(x127<=x128)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x129 = INT8_MAX;
	static uint64_t x130 = 41763467LLU;
	int64_t x132 = -1LL;

    t15 = (x129>(x130<<(x131<=x132)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x133 = 1;
	int32_t t16 = -859;

    t16 = (x133>(x134<<(x135<=x136)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x149 = 1U;
	int16_t x150 = 0;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	volatile int32_t t17 = 257753;

    t17 = (x149>(x150<<(x151<=x152)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x157 = 1488551517LLU;
	volatile uint16_t x158 = 6U;
	static uint64_t x159 = 1817567862403434800LLU;
	static int64_t x160 = INT64_MIN;
	int32_t t18 = 324152228;

    t18 = (x157>(x158<<(x159<=x160)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x165 = INT64_MIN;
	static uint8_t x166 = UINT8_MAX;
	volatile int32_t x168 = INT32_MAX;

    t19 = (x165>(x166<<(x167<=x168)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x169 = 450162094482258193LLU;
	volatile uint32_t x170 = UINT32_MAX;
	int16_t x171 = -1;
	int32_t t20 = -1;

    t20 = (x169>(x170<<(x171<=x172)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x181 = 82U;
	uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MIN;
	int32_t t21 = 2619;

    t21 = (x181>(x182<<(x183<=x184)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x185 = -1;
	int64_t x186 = 827030LL;
	uint64_t x187 = 3783LLU;
	int8_t x188 = INT8_MIN;
	volatile int32_t t22 = 30054;

    t22 = (x185>(x186<<(x187<=x188)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x189 = INT16_MAX;
	int32_t x190 = 62304263;
	static int32_t x191 = INT32_MIN;
	int32_t x192 = -85163;
	volatile int32_t t23 = -55;

    t23 = (x189>(x190<<(x191<=x192)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x193 = 4U;
	uint8_t x195 = 3U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t24 = 1058;

    t24 = (x193>(x194<<(x195<=x196)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x205 = INT64_MIN;
	volatile int8_t x207 = -5;
	uint64_t x208 = UINT64_MAX;

    t25 = (x205>(x206<<(x207<=x208)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x213 = -1;
	int64_t x214 = 136076469722588596LL;
	int64_t x216 = INT64_MAX;
	volatile int32_t t26 = 558;

    t26 = (x213>(x214<<(x215<=x216)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x221 = INT8_MIN;
	static uint32_t x222 = UINT32_MAX;
	int8_t x223 = -1;

    t27 = (x221>(x222<<(x223<=x224)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x226 = 1U;
	static int8_t x227 = -1;
	int32_t x228 = 214;

    t28 = (x225>(x226<<(x227<=x228)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x233 = INT32_MAX;
	int64_t x234 = 552314922718LL;
	int64_t x235 = INT64_MIN;
	static int64_t x236 = INT64_MIN;
	volatile int32_t t29 = 18;

    t29 = (x233>(x234<<(x235<=x236)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x237 = 3960U;
	int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MIN;
	static int64_t x240 = INT64_MIN;
	static volatile int32_t t30 = -509;

    t30 = (x237>(x238<<(x239<=x240)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x241 = -1LL;
	uint8_t x242 = UINT8_MAX;
	static int16_t x243 = 13;
	uint32_t x244 = 666866705U;
	volatile int32_t t31 = -872;

    t31 = (x241>(x242<<(x243<=x244)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x249 = -6599;
	uint32_t x250 = 12495U;
	static uint32_t x252 = UINT32_MAX;
	static volatile int32_t t32 = 11185324;

    t32 = (x249>(x250<<(x251<=x252)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x269 = INT64_MIN;
	uint16_t x271 = 1U;
	int64_t x272 = -11295071794307LL;
	static volatile int32_t t33 = -28713200;

    t33 = (x269>(x270<<(x271<=x272)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x277 = 1;
	uint32_t x279 = 240990702U;
	uint32_t x280 = UINT32_MAX;

    t34 = (x277>(x278<<(x279<=x280)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x281 = 0;
	static volatile int64_t x282 = INT64_MAX;
	int16_t x283 = -1;
	volatile int64_t x284 = INT64_MIN;
	static int32_t t35 = 1;

    t35 = (x281>(x282<<(x283<=x284)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MIN;

    t36 = (x285>(x286<<(x287<=x288)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x329 = -1;
	uint16_t x330 = UINT16_MAX;
	int32_t x331 = INT32_MIN;
	uint32_t x332 = UINT32_MAX;
	int32_t t37 = 28;

    t37 = (x329>(x330<<(x331<=x332)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x333 = INT32_MIN;
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = 636;
	uint8_t x336 = UINT8_MAX;
	int32_t t38 = -62976;

    t38 = (x333>(x334<<(x335<=x336)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x345 = -1;
	static volatile uint64_t x346 = 6575476LLU;
	static int64_t x347 = INT64_MAX;
	int32_t x348 = 58;
	int32_t t39 = 264264763;

    t39 = (x345>(x346<<(x347<=x348)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x349 = INT32_MAX;
	uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MIN;
	int32_t x352 = INT32_MIN;

    t40 = (x349>(x350<<(x351<=x352)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x357 = INT8_MIN;
	uint32_t x358 = UINT32_MAX;
	int16_t x359 = INT16_MAX;

    t41 = (x357>(x358<<(x359<=x360)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x361 = -1LL;
	int8_t x362 = INT8_MAX;
	static int8_t x363 = INT8_MAX;
	uint32_t x364 = 1U;
	int32_t t42 = -34028;

    t42 = (x361>(x362<<(x363<=x364)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x385 = INT32_MAX;
	volatile uint64_t x387 = 95004463262642308LLU;
	int64_t x388 = INT64_MIN;
	volatile int32_t t43 = -105;

    t43 = (x385>(x386<<(x387<=x388)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x397 = 1238;
	uint64_t x398 = 4168616355006995823LLU;
	uint8_t x399 = 16U;
	int32_t x400 = -1;
	int32_t t44 = -2;

    t44 = (x397>(x398<<(x399<=x400)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x402 = UINT16_MAX;
	uint16_t x404 = UINT16_MAX;
	int32_t t45 = 16312845;

    t45 = (x401>(x402<<(x403<=x404)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x405 = INT32_MIN;
	uint32_t x406 = UINT32_MAX;
	uint64_t x407 = 128029658363821LLU;
	int32_t x408 = INT32_MIN;
	int32_t t46 = 329;

    t46 = (x405>(x406<<(x407<=x408)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x413 = -1LL;
	uint64_t x414 = UINT64_MAX;
	volatile int64_t x415 = -47612435169342LL;
	uint16_t x416 = 5U;
	static volatile int32_t t47 = -6583;

    t47 = (x413>(x414<<(x415<=x416)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x417 = 0;
	int8_t x418 = 1;
	static int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;

    t48 = (x417>(x418<<(x419<=x420)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x425 = INT8_MIN;
	uint32_t x427 = 15068U;
	int32_t x428 = INT32_MAX;

    t49 = (x425>(x426<<(x427<=x428)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x445 = -130842999723LL;
	static int8_t x446 = 1;
	int64_t x447 = INT64_MAX;
	uint16_t x448 = 3U;

    t50 = (x445>(x446<<(x447<=x448)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x453 = 661923299U;

    t51 = (x453>(x454<<(x455<=x456)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x461 = 0;
	int32_t x463 = -1;
	int32_t t52 = 355921;

    t52 = (x461>(x462<<(x463<=x464)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x473 = INT16_MIN;
	volatile int8_t x475 = INT8_MAX;
	uint8_t x476 = 62U;

    t53 = (x473>(x474<<(x475<=x476)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x489 = 31645248007LLU;
	uint32_t x490 = 85105U;
	volatile int16_t x492 = INT16_MIN;
	static volatile int32_t t54 = -1;

    t54 = (x489>(x490<<(x491<=x492)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x497 = UINT16_MAX;
	int32_t x499 = INT32_MIN;

    t55 = (x497>(x498<<(x499<=x500)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x501 = -1;
	volatile uint64_t x502 = 130729349975LLU;
	int64_t x503 = -3341LL;
	uint8_t x504 = 1U;
	static int32_t t56 = 2154408;

    t56 = (x501>(x502<<(x503<=x504)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	uint16_t x506 = UINT16_MAX;
	static int64_t x507 = INT64_MIN;
	int64_t x508 = INT64_MIN;
	int32_t t57 = -367491;

    t57 = (x505>(x506<<(x507<=x508)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x510 = UINT16_MAX;
	static volatile uint32_t x511 = 729162U;

    t58 = (x509>(x510<<(x511<=x512)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x529 = -1LL;
	uint8_t x530 = 1U;
	int8_t x531 = -54;
	uint32_t x532 = 25413U;
	int32_t t59 = 209;

    t59 = (x529>(x530<<(x531<=x532)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x537 = -1411;
	static int64_t x539 = -1LL;
	static volatile int32_t t60 = 107326;

    t60 = (x537>(x538<<(x539<=x540)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x549 = UINT64_MAX;
	uint64_t x550 = UINT64_MAX;
	int64_t x551 = 847442940522895432LL;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t61 = -1309856;

    t61 = (x549>(x550<<(x551<=x552)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x561 = 31923801456211LLU;
	uint64_t x563 = 6616224346LLU;
	int64_t x564 = INT64_MAX;
	int32_t t62 = -457346361;

    t62 = (x561>(x562<<(x563<=x564)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x565 = UINT64_MAX;
	uint32_t x566 = 44557874U;
	static volatile int32_t x567 = INT32_MAX;
	static int16_t x568 = -1;

    t63 = (x565>(x566<<(x567<=x568)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x573 = 17959U;
	static uint32_t x574 = 649U;
	volatile int8_t x575 = -4;
	volatile int32_t t64 = -6383626;

    t64 = (x573>(x574<<(x575<=x576)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x577 = INT8_MIN;
	uint16_t x578 = 3U;
	int16_t x579 = INT16_MAX;
	uint64_t x580 = UINT64_MAX;
	int32_t t65 = 12300;

    t65 = (x577>(x578<<(x579<=x580)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x593 = 1;
	uint32_t x594 = 15059241U;
	uint16_t x595 = 4U;
	int64_t x596 = -155LL;
	volatile int32_t t66 = 1421314;

    t66 = (x593>(x594<<(x595<=x596)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x599 = INT8_MIN;
	uint64_t x600 = 182707458589LLU;
	volatile int32_t t67 = -108754;

    t67 = (x597>(x598<<(x599<=x600)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x605 = 3725902839LLU;
	uint64_t x606 = UINT64_MAX;
	uint8_t x607 = 7U;
	volatile uint16_t x608 = 732U;

    t68 = (x605>(x606<<(x607<=x608)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x609 = 47223674398636667LLU;
	int8_t x611 = INT8_MAX;
	int8_t x612 = INT8_MIN;

    t69 = (x609>(x610<<(x611<=x612)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x618 = 4;
	static int8_t x619 = -1;
	volatile int8_t x620 = 53;
	int32_t t70 = -46189426;

    t70 = (x617>(x618<<(x619<=x620)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x629 = 3753U;
	int32_t x630 = 22;
	int32_t x631 = -1776459;
	uint16_t x632 = 3U;
	volatile int32_t t71 = -111527;

    t71 = (x629>(x630<<(x631<=x632)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x634 = 7986U;
	int32_t x635 = -1;
	volatile int16_t x636 = INT16_MIN;
	int32_t t72 = -8372173;

    t72 = (x633>(x634<<(x635<=x636)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x653 = -39083671;
	int64_t x654 = 52106071111LL;
	uint16_t x655 = 1641U;
	uint8_t x656 = 61U;
	static int32_t t73 = 123216;

    t73 = (x653>(x654<<(x655<=x656)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x658 = UINT8_MAX;
	int64_t x659 = -1LL;
	volatile int32_t t74 = 36;

    t74 = (x657>(x658<<(x659<=x660)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x661 = INT32_MIN;
	int32_t x663 = INT32_MAX;
	int32_t t75 = 24166;

    t75 = (x661>(x662<<(x663<=x664)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x673 = INT64_MIN;
	volatile uint32_t x674 = 36242658U;
	uint64_t x676 = UINT64_MAX;

    t76 = (x673>(x674<<(x675<=x676)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x677 = INT16_MIN;
	uint16_t x678 = 12U;
	uint32_t x680 = 1860U;
	int32_t t77 = 497488;

    t77 = (x677>(x678<<(x679<=x680)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x681 = 63;
	static volatile int32_t x682 = 3;
	volatile uint16_t x683 = 1832U;
	int32_t t78 = -203962465;

    t78 = (x681>(x682<<(x683<=x684)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x685 = INT16_MIN;
	int32_t x686 = 733300;
	volatile int16_t x687 = -5;
	volatile int32_t t79 = -1;

    t79 = (x685>(x686<<(x687<=x688)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x689 = 135LLU;
	uint32_t x690 = UINT32_MAX;
	volatile int32_t x691 = INT32_MIN;
	static int16_t x692 = -200;
	volatile int32_t t80 = -117565;

    t80 = (x689>(x690<<(x691<=x692)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x697 = INT32_MAX;
	uint64_t x698 = UINT64_MAX;
	static uint16_t x699 = 51U;
	uint32_t x700 = UINT32_MAX;

    t81 = (x697>(x698<<(x699<=x700)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x714 = 1;
	int32_t x715 = INT32_MIN;
	static int8_t x716 = -15;
	static int32_t t82 = -93;

    t82 = (x713>(x714<<(x715<=x716)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x717 = UINT32_MAX;
	static int8_t x719 = -8;
	int32_t x720 = -5069048;
	volatile int32_t t83 = -1;

    t83 = (x717>(x718<<(x719<=x720)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x721 = UINT64_MAX;
	static int32_t x722 = 12087;
	volatile uint64_t x723 = 7LLU;
	volatile uint16_t x724 = UINT16_MAX;
	volatile int32_t t84 = 940527;

    t84 = (x721>(x722<<(x723<=x724)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x729 = 37;
	uint32_t x730 = UINT32_MAX;
	int32_t x731 = -1;

    t85 = (x729>(x730<<(x731<=x732)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x741 = INT32_MIN;
	int8_t x742 = 33;
	static int16_t x743 = -1;
	volatile int32_t t86 = -4491;

    t86 = (x741>(x742<<(x743<=x744)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x745 = 9U;
	volatile uint32_t x746 = 7743U;
	volatile int64_t x747 = INT64_MAX;
	static int64_t x748 = INT64_MIN;
	int32_t t87 = -49219013;

    t87 = (x745>(x746<<(x747<=x748)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x749 = 0LLU;
	int64_t x751 = INT64_MAX;
	static int64_t x752 = INT64_MAX;
	volatile int32_t t88 = -33264;

    t88 = (x749>(x750<<(x751<=x752)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x753 = INT64_MIN;
	int8_t x754 = 1;
	int32_t x755 = -1;
	uint32_t x756 = UINT32_MAX;
	static int32_t t89 = 174;

    t89 = (x753>(x754<<(x755<=x756)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x781 = 113U;
	uint32_t x782 = UINT32_MAX;
	int8_t x784 = INT8_MAX;
	static int32_t t90 = 31;

    t90 = (x781>(x782<<(x783<=x784)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x785 = 1;
	static volatile int32_t x786 = 72542776;
	int32_t x787 = INT32_MAX;
	uint64_t x788 = UINT64_MAX;
	volatile int32_t t91 = 56477575;

    t91 = (x785>(x786<<(x787<=x788)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x789 = -1;
	uint64_t x790 = 96191188LLU;
	uint32_t x791 = UINT32_MAX;
	int64_t x792 = -1LL;
	int32_t t92 = -8;

    t92 = (x789>(x790<<(x791<=x792)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x805 = 330884U;
	volatile uint8_t x806 = UINT8_MAX;
	int32_t t93 = -1;

    t93 = (x805>(x806<<(x807<=x808)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x809 = UINT8_MAX;
	int16_t x811 = INT16_MIN;
	static int16_t x812 = -1;
	static volatile int32_t t94 = 488600387;

    t94 = (x809>(x810<<(x811<=x812)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x821 = 90U;
	volatile int8_t x823 = -1;
	static int64_t x824 = INT64_MIN;
	volatile int32_t t95 = 92789443;

    t95 = (x821>(x822<<(x823<=x824)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x825 = 389753210;
	uint8_t x826 = 11U;
	volatile uint8_t x828 = 2U;

    t96 = (x825>(x826<<(x827<=x828)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x837 = INT32_MIN;
	uint16_t x839 = 7U;
	uint32_t x840 = UINT32_MAX;
	static int32_t t97 = 3537087;

    t97 = (x837>(x838<<(x839<=x840)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x841 = INT32_MAX;
	int16_t x842 = INT16_MAX;
	uint8_t x844 = UINT8_MAX;
	int32_t t98 = 364;

    t98 = (x841>(x842<<(x843<=x844)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x857 = 8U;
	static uint8_t x858 = UINT8_MAX;
	int32_t x859 = INT32_MAX;
	static uint8_t x860 = UINT8_MAX;
	int32_t t99 = 345689;

    t99 = (x857>(x858<<(x859<=x860)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x865 = INT16_MAX;
	volatile int8_t x866 = 8;
	int8_t x867 = INT8_MIN;
	int16_t x868 = INT16_MAX;

    t100 = (x865>(x866<<(x867<=x868)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x869 = -1;
	uint32_t x870 = 54536198U;
	uint16_t x871 = UINT16_MAX;
	int16_t x872 = INT16_MIN;
	static int32_t t101 = -71;

    t101 = (x869>(x870<<(x871<=x872)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x873 = 0;
	uint64_t x874 = UINT64_MAX;
	uint16_t x875 = 3U;
	int32_t t102 = 2733545;

    t102 = (x873>(x874<<(x875<=x876)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x893 = 9414U;
	uint32_t x894 = UINT32_MAX;
	volatile int16_t x895 = INT16_MAX;
	int64_t x896 = -1LL;
	int32_t t103 = 4844951;

    t103 = (x893>(x894<<(x895<=x896)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x897 = INT32_MAX;
	uint64_t x898 = 4173LLU;
	uint16_t x900 = UINT16_MAX;

    t104 = (x897>(x898<<(x899<=x900)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x902 = 8U;
	uint32_t x903 = 445502U;
	int64_t x904 = INT64_MAX;
	volatile int32_t t105 = 20636;

    t105 = (x901>(x902<<(x903<=x904)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x909 = 2LLU;
	static uint16_t x910 = 18U;
	volatile int16_t x911 = -1;
	uint8_t x912 = 15U;

    t106 = (x909>(x910<<(x911<=x912)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x922 = 194575LLU;
	int8_t x924 = INT8_MIN;
	int32_t t107 = 186299174;

    t107 = (x921>(x922<<(x923<=x924)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x925 = INT8_MAX;
	uint64_t x926 = 231554LLU;
	int8_t x927 = INT8_MAX;
	uint64_t x928 = 1274098114399346408LLU;

    t108 = (x925>(x926<<(x927<=x928)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x942 = 31705U;
	uint8_t x943 = 18U;
	int32_t t109 = -187;

    t109 = (x941>(x942<<(x943<=x944)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x961 = 293U;
	uint8_t x962 = 90U;
	volatile int32_t x963 = 1254;
	uint8_t x964 = 75U;

    t110 = (x961>(x962<<(x963<=x964)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x965 = -1;
	uint64_t x966 = UINT64_MAX;
	int64_t x967 = INT64_MIN;
	int32_t t111 = -39;

    t111 = (x965>(x966<<(x967<=x968)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x982 = INT16_MAX;
	uint16_t x983 = 3U;
	static int32_t t112 = 1;

    t112 = (x981>(x982<<(x983<=x984)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x989 = 116U;
	int64_t x991 = -7038344LL;
	int64_t x992 = -189800LL;
	int32_t t113 = -13893588;

    t113 = (x989>(x990<<(x991<=x992)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x993 = INT64_MIN;
	volatile uint16_t x994 = 19809U;
	uint8_t x995 = 12U;
	int16_t x996 = INT16_MIN;
	volatile int32_t t114 = 86;

    t114 = (x993>(x994<<(x995<=x996)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x1005 = 8881110598353337LL;
	uint32_t x1006 = 29U;
	uint64_t x1007 = UINT64_MAX;
	uint32_t x1008 = 562162595U;
	int32_t t115 = -404588;

    t115 = (x1005>(x1006<<(x1007<=x1008)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x1009 = 40;
	uint64_t x1010 = UINT64_MAX;
	int32_t x1011 = INT32_MIN;
	int8_t x1012 = -9;
	volatile int32_t t116 = 658;

    t116 = (x1009>(x1010<<(x1011<=x1012)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x1013 = 95U;
	volatile int8_t x1014 = 33;
	int32_t x1015 = -3510;
	static uint16_t x1016 = UINT16_MAX;
	int32_t t117 = 547807;

    t117 = (x1013>(x1014<<(x1015<=x1016)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1021 = -8;
	int64_t x1022 = INT64_MAX;
	volatile int32_t x1023 = INT32_MAX;
	static int8_t x1024 = INT8_MIN;
	static volatile int32_t t118 = 44;

    t118 = (x1021>(x1022<<(x1023<=x1024)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x1037 = -55350;
	volatile uint8_t x1038 = UINT8_MAX;
	static volatile int64_t x1040 = INT64_MAX;
	volatile int32_t t119 = 145;

    t119 = (x1037>(x1038<<(x1039<=x1040)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x1041 = -1LL;
	uint64_t x1042 = 12LLU;
	int16_t x1043 = -1;
	int32_t t120 = 2641082;

    t120 = (x1041>(x1042<<(x1043<=x1044)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x1045 = 2002U;
	volatile uint16_t x1047 = 255U;
	volatile int64_t x1048 = INT64_MIN;
	int32_t t121 = 46902;

    t121 = (x1045>(x1046<<(x1047<=x1048)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x1050 = 0U;
	int16_t x1051 = INT16_MAX;
	int16_t x1052 = 186;
	int32_t t122 = -279839;

    t122 = (x1049>(x1050<<(x1051<=x1052)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x1057 = 633923U;
	volatile uint8_t x1058 = UINT8_MAX;
	int8_t x1060 = INT8_MIN;
	int32_t t123 = 5236;

    t123 = (x1057>(x1058<<(x1059<=x1060)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x1069 = 2U;
	int8_t x1070 = 4;
	volatile int32_t x1071 = -21667746;
	uint32_t x1072 = 222U;
	int32_t t124 = -1851876;

    t124 = (x1069>(x1070<<(x1071<=x1072)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x1077 = 0U;
	volatile uint64_t x1078 = 910305409LLU;
	int16_t x1079 = INT16_MIN;
	uint64_t x1080 = 9252294448790436LLU;
	volatile int32_t t125 = 53660;

    t125 = (x1077>(x1078<<(x1079<=x1080)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x1094 = INT64_MAX;
	static volatile uint32_t x1095 = 124582U;
	static int32_t t126 = 51;

    t126 = (x1093>(x1094<<(x1095<=x1096)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x1105 = INT8_MAX;
	static volatile int16_t x1106 = 1296;
	volatile uint16_t x1107 = 825U;
	int8_t x1108 = INT8_MIN;
	int32_t t127 = 554;

    t127 = (x1105>(x1106<<(x1107<=x1108)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x1113 = -1;
	static int8_t x1114 = INT8_MAX;
	static int64_t x1115 = -175811049LL;
	volatile int32_t t128 = -16052725;

    t128 = (x1113>(x1114<<(x1115<=x1116)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x1117 = INT32_MAX;
	int16_t x1119 = -1;
	static volatile int32_t t129 = 277476;

    t129 = (x1117>(x1118<<(x1119<=x1120)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x1121 = UINT16_MAX;
	uint64_t x1122 = 589439810633385LLU;
	static uint64_t x1123 = 231311757021LLU;
	static volatile int32_t t130 = -330031;

    t130 = (x1121>(x1122<<(x1123<=x1124)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint32_t x1125 = 17033776U;
	uint16_t x1127 = 0U;
	uint32_t x1128 = 31131421U;

    t131 = (x1125>(x1126<<(x1127<=x1128)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x1129 = -1030068LL;
	static uint8_t x1130 = 3U;
	uint32_t x1131 = 7713U;
	volatile int32_t t132 = 1;

    t132 = (x1129>(x1130<<(x1131<=x1132)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x1133 = 974047614U;
	uint32_t x1134 = 33470504U;
	int16_t x1136 = 42;
	volatile int32_t t133 = -46324;

    t133 = (x1133>(x1134<<(x1135<=x1136)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1137 = 0;
	int8_t x1139 = -1;
	int32_t t134 = 2;

    t134 = (x1137>(x1138<<(x1139<=x1140)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1142 = UINT32_MAX;
	int16_t x1143 = INT16_MAX;
	int32_t t135 = -9978;

    t135 = (x1141>(x1142<<(x1143<=x1144)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x1145 = -1LL;
	int32_t x1147 = -1;
	volatile int32_t x1148 = 2220;

    t136 = (x1145>(x1146<<(x1147<=x1148)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1149 = -1;
	static uint32_t x1150 = 176517U;
	uint32_t x1151 = 31U;
	int32_t t137 = -7;

    t137 = (x1149>(x1150<<(x1151<=x1152)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1153 = INT32_MAX;
	int32_t x1155 = INT32_MAX;
	uint32_t x1156 = UINT32_MAX;
	volatile int32_t t138 = -44696;

    t138 = (x1153>(x1154<<(x1155<=x1156)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1181 = 93550383;
	volatile int8_t x1182 = 18;
	volatile int8_t x1183 = INT8_MAX;
	int16_t x1184 = -1;
	volatile int32_t t139 = 11297;

    t139 = (x1181>(x1182<<(x1183<=x1184)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1185 = 4U;
	uint64_t x1186 = 9318759184788LLU;
	static uint8_t x1187 = UINT8_MAX;
	volatile int32_t t140 = 5100896;

    t140 = (x1185>(x1186<<(x1187<=x1188)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1193 = 13878062;
	uint32_t x1194 = 735U;
	uint8_t x1195 = 1U;
	int16_t x1196 = INT16_MIN;
	int32_t t141 = 0;

    t141 = (x1193>(x1194<<(x1195<=x1196)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1197 = -6384;
	static volatile int32_t x1198 = 29955;
	static int8_t x1199 = INT8_MIN;
	volatile uint32_t x1200 = UINT32_MAX;
	int32_t t142 = 70084396;

    t142 = (x1197>(x1198<<(x1199<=x1200)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1201 = UINT16_MAX;
	static uint64_t x1202 = 794432269860LLU;
	int8_t x1204 = INT8_MIN;

    t143 = (x1201>(x1202<<(x1203<=x1204)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1205 = 30U;
	volatile uint64_t x1206 = UINT64_MAX;
	volatile int32_t x1208 = INT32_MIN;
	volatile int32_t t144 = 153433;

    t144 = (x1205>(x1206<<(x1207<=x1208)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x1210 = 101131495286110LLU;
	uint16_t x1211 = 425U;
	volatile uint32_t x1212 = 58U;
	volatile int32_t t145 = -200550;

    t145 = (x1209>(x1210<<(x1211<=x1212)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1217 = -1;
	int16_t x1219 = 3813;
	int16_t x1220 = INT16_MAX;
	int32_t t146 = -83;

    t146 = (x1217>(x1218<<(x1219<=x1220)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x1221 = INT64_MIN;
	volatile uint16_t x1222 = 6490U;
	uint16_t x1223 = 3U;
	static volatile int32_t t147 = -187299;

    t147 = (x1221>(x1222<<(x1223<=x1224)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1246 = 11U;
	static int8_t x1247 = INT8_MAX;
	volatile int32_t t148 = 559;

    t148 = (x1245>(x1246<<(x1247<=x1248)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1249 = -4;
	static uint64_t x1250 = 6251995294LLU;
	static int32_t x1251 = INT32_MIN;
	static int32_t x1252 = -1;
	int32_t t149 = 80977;

    t149 = (x1249>(x1250<<(x1251<=x1252)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x1261 = 7U;
	static uint8_t x1262 = UINT8_MAX;
	int64_t x1263 = INT64_MIN;

    t150 = (x1261>(x1262<<(x1263<=x1264)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1265 = INT64_MIN;
	int16_t x1267 = INT16_MIN;
	int64_t x1268 = INT64_MAX;
	int32_t t151 = 56080402;

    t151 = (x1265>(x1266<<(x1267<=x1268)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1277 = -23;
	int64_t x1278 = 474LL;
	static int8_t x1280 = INT8_MAX;

    t152 = (x1277>(x1278<<(x1279<=x1280)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x1297 = 19723U;
	uint32_t x1298 = UINT32_MAX;
	int32_t x1299 = -7868365;
	int64_t x1300 = INT64_MIN;
	volatile int32_t t153 = 355454838;

    t153 = (x1297>(x1298<<(x1299<=x1300)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1313 = 0;
	uint32_t x1314 = 218977802U;
	volatile int16_t x1315 = 558;
	volatile int32_t t154 = 3;

    t154 = (x1313>(x1314<<(x1315<=x1316)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1322 = INT64_MAX;
	static int8_t x1323 = 1;
	int64_t x1324 = INT64_MIN;
	volatile int32_t t155 = 899878;

    t155 = (x1321>(x1322<<(x1323<=x1324)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1341 = -1;
	uint8_t x1342 = 0U;
	int32_t t156 = 3;

    t156 = (x1341>(x1342<<(x1343<=x1344)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1348 = UINT64_MAX;
	int32_t t157 = -268152370;

    t157 = (x1345>(x1346<<(x1347<=x1348)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1369 = -1;
	static uint8_t x1370 = 15U;
	int64_t x1371 = INT64_MIN;
	volatile int32_t t158 = 834295;

    t158 = (x1369>(x1370<<(x1371<=x1372)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1374 = 19U;
	uint8_t x1375 = UINT8_MAX;

    t159 = (x1373>(x1374<<(x1375<=x1376)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x1377 = INT8_MIN;
	int8_t x1379 = INT8_MAX;
	int8_t x1380 = INT8_MAX;
	static int32_t t160 = -779313;

    t160 = (x1377>(x1378<<(x1379<=x1380)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1381 = INT32_MIN;
	static volatile uint16_t x1382 = 34U;
	int32_t t161 = -6544;

    t161 = (x1381>(x1382<<(x1383<=x1384)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1385 = UINT8_MAX;
	static int64_t x1386 = 771388914222LL;
	uint8_t x1387 = UINT8_MAX;
	uint64_t x1388 = 13807515458344087LLU;
	volatile int32_t t162 = -5;

    t162 = (x1385>(x1386<<(x1387<=x1388)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x1389 = 4U;
	uint8_t x1391 = 123U;
	int16_t x1392 = INT16_MIN;
	volatile int32_t t163 = -9219;

    t163 = (x1389>(x1390<<(x1391<=x1392)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x1401 = UINT16_MAX;
	uint16_t x1402 = UINT16_MAX;
	int16_t x1403 = 244;
	static uint8_t x1404 = UINT8_MAX;

    t164 = (x1401>(x1402<<(x1403<=x1404)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1413 = -245;
	static uint64_t x1414 = 172LLU;
	uint16_t x1415 = UINT16_MAX;
	volatile int32_t t165 = -84;

    t165 = (x1413>(x1414<<(x1415<=x1416)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x1417 = 2U;
	uint8_t x1418 = UINT8_MAX;
	int16_t x1419 = -1;
	volatile int64_t x1420 = -1LL;

    t166 = (x1417>(x1418<<(x1419<=x1420)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x1425 = -119;
	uint16_t x1426 = UINT16_MAX;
	int8_t x1427 = INT8_MIN;
	int64_t x1428 = 51460749LL;
	int32_t t167 = 1423;

    t167 = (x1425>(x1426<<(x1427<=x1428)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x1433 = -1LL;
	uint64_t x1434 = UINT64_MAX;
	static uint32_t x1435 = 1727U;
	volatile int64_t x1436 = -1LL;
	volatile int32_t t168 = 500271578;

    t168 = (x1433>(x1434<<(x1435<=x1436)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1437 = INT32_MIN;
	static uint16_t x1438 = UINT16_MAX;
	int32_t x1440 = INT32_MIN;
	volatile int32_t t169 = 16842;

    t169 = (x1437>(x1438<<(x1439<=x1440)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x1441 = 283U;
	uint16_t x1442 = 3U;
	int16_t x1443 = INT16_MAX;
	uint16_t x1444 = 568U;

    t170 = (x1441>(x1442<<(x1443<=x1444)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1445 = INT32_MIN;
	uint64_t x1446 = UINT64_MAX;
	volatile uint32_t x1447 = 16014U;
	volatile int8_t x1448 = INT8_MIN;
	volatile int32_t t171 = -2431;

    t171 = (x1445>(x1446<<(x1447<=x1448)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1449 = INT16_MAX;
	uint64_t x1450 = 3839142727LLU;
	int64_t x1451 = INT64_MAX;
	int32_t x1452 = INT32_MAX;
	static int32_t t172 = -574853;

    t172 = (x1449>(x1450<<(x1451<=x1452)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x1453 = -1LL;
	static int32_t x1454 = INT32_MAX;
	volatile int64_t x1455 = INT64_MAX;
	volatile int16_t x1456 = -1;
	volatile int32_t t173 = 812;

    t173 = (x1453>(x1454<<(x1455<=x1456)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x1457 = INT32_MIN;
	volatile uint8_t x1458 = UINT8_MAX;
	int64_t x1459 = -5249LL;
	int16_t x1460 = INT16_MIN;

    t174 = (x1457>(x1458<<(x1459<=x1460)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1461 = 11U;
	uint64_t x1462 = UINT64_MAX;
	volatile int32_t x1463 = INT32_MIN;
	static uint64_t x1464 = UINT64_MAX;
	int32_t t175 = 5819;

    t175 = (x1461>(x1462<<(x1463<=x1464)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1478 = 617;
	volatile int64_t x1480 = -640805LL;
	int32_t t176 = 450368;

    t176 = (x1477>(x1478<<(x1479<=x1480)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1485 = INT16_MIN;
	static int8_t x1486 = 1;
	int32_t x1487 = INT32_MIN;
	static int64_t x1488 = INT64_MIN;
	volatile int32_t t177 = -10;

    t177 = (x1485>(x1486<<(x1487<=x1488)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1497 = INT64_MIN;
	uint16_t x1498 = 1487U;
	static int8_t x1499 = -1;
	int32_t t178 = -2027;

    t178 = (x1497>(x1498<<(x1499<=x1500)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1501 = 122509U;
	int64_t x1502 = INT64_MAX;
	volatile uint16_t x1503 = 4079U;
	int64_t x1504 = -50LL;
	volatile int32_t t179 = -5;

    t179 = (x1501>(x1502<<(x1503<=x1504)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x1509 = 4147792202651650LLU;
	int16_t x1510 = INT16_MAX;
	uint32_t x1511 = 4U;
	static int32_t t180 = -41657;

    t180 = (x1509>(x1510<<(x1511<=x1512)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1517 = 11278U;
	int32_t x1518 = 38157;
	int8_t x1519 = INT8_MAX;
	int32_t t181 = -383;

    t181 = (x1517>(x1518<<(x1519<=x1520)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1534 = INT16_MAX;
	static volatile int64_t x1535 = INT64_MIN;
	static int32_t x1536 = INT32_MIN;
	volatile int32_t t182 = 13383576;

    t182 = (x1533>(x1534<<(x1535<=x1536)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1537 = 32174014;
	uint8_t x1538 = 55U;
	static volatile int8_t x1539 = -17;
	uint64_t x1540 = 6645844692298859859LLU;
	int32_t t183 = -55236;

    t183 = (x1537>(x1538<<(x1539<=x1540)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x1541 = INT32_MIN;
	int64_t x1542 = 275117424049609334LL;
	uint16_t x1543 = 111U;
	int32_t x1544 = -1;
	volatile int32_t t184 = 898610028;

    t184 = (x1541>(x1542<<(x1543<=x1544)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1545 = UINT16_MAX;
	uint64_t x1546 = 1084825719872894LLU;
	uint16_t x1548 = 1U;
	int32_t t185 = 0;

    t185 = (x1545>(x1546<<(x1547<=x1548)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1549 = -1;
	uint32_t x1552 = UINT32_MAX;
	volatile int32_t t186 = 99;

    t186 = (x1549>(x1550<<(x1551<=x1552)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1557 = -14824;
	uint64_t x1558 = 386725963826893332LLU;
	int16_t x1559 = 0;
	int8_t x1560 = INT8_MAX;
	int32_t t187 = -108302;

    t187 = (x1557>(x1558<<(x1559<=x1560)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1565 = -6;
	int16_t x1567 = -1;
	int64_t x1568 = 3118074489370LL;
	static int32_t t188 = -1325;

    t188 = (x1565>(x1566<<(x1567<=x1568)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1574 = INT8_MAX;
	static uint64_t x1575 = UINT64_MAX;
	static int32_t t189 = 30;

    t189 = (x1573>(x1574<<(x1575<=x1576)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1577 = INT64_MIN;
	uint32_t x1579 = 4734U;
	int64_t x1580 = INT64_MAX;
	int32_t t190 = 2;

    t190 = (x1577>(x1578<<(x1579<=x1580)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1581 = 1;
	static int8_t x1584 = INT8_MIN;

    t191 = (x1581>(x1582<<(x1583<=x1584)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x1586 = UINT8_MAX;
	static int8_t x1587 = -1;
	int8_t x1588 = INT8_MIN;
	int32_t t192 = -3961034;

    t192 = (x1585>(x1586<<(x1587<=x1588)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1589 = 0U;
	static uint32_t x1590 = 1914U;
	int16_t x1591 = 3;
	int32_t t193 = 15;

    t193 = (x1589>(x1590<<(x1591<=x1592)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1593 = 2815LLU;
	volatile int8_t x1594 = 41;
	volatile int32_t t194 = 7381962;

    t194 = (x1593>(x1594<<(x1595<=x1596)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1618 = 3U;
	static int64_t x1619 = 20157133397952LL;
	int16_t x1620 = 0;
	volatile int32_t t195 = 21013722;

    t195 = (x1617>(x1618<<(x1619<=x1620)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1621 = INT32_MIN;
	uint16_t x1622 = 231U;
	int16_t x1623 = -10212;

    t196 = (x1621>(x1622<<(x1623<=x1624)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1633 = -1620;
	volatile uint8_t x1634 = 119U;
	volatile int16_t x1635 = -3;
	int8_t x1636 = INT8_MIN;

    t197 = (x1633>(x1634<<(x1635<=x1636)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1641 = 3U;
	volatile int64_t x1642 = 61775860LL;
	uint64_t x1644 = UINT64_MAX;

    t198 = (x1641>(x1642<<(x1643<=x1644)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1645 = 0;
	static uint16_t x1646 = UINT16_MAX;
	static int32_t x1648 = INT32_MAX;
	static volatile int32_t t199 = 2126075;

    t199 = (x1645>(x1646<<(x1647<=x1648)));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

