#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -190399583;
uint16_t x60 = 29U;
static volatile int64_t x71 = INT64_MIN;
int32_t t2 = 663;
int8_t x81 = INT8_MAX;
static uint64_t x97 = UINT64_MAX;
static int64_t x145 = INT64_MAX;
uint64_t x176 = 18LLU;
int16_t x183 = INT16_MIN;
static uint64_t x329 = 22076801492717395LLU;
int8_t x394 = -6;
uint8_t x416 = 0U;
int16_t x417 = INT16_MIN;
int64_t x419 = -1LL;
static volatile int32_t t20 = 17175179;
int16_t x446 = -1;
volatile int32_t t21 = -2539475;
uint8_t x450 = 0U;
int16_t x457 = INT16_MIN;
volatile uint64_t x459 = 11521LLU;
static volatile int64_t x460 = 0LL;
static int64_t x541 = INT64_MIN;
int8_t x547 = 10;
uint16_t x609 = 883U;
int8_t x610 = -4;
int8_t x684 = 20;
volatile int8_t x696 = 2;
int32_t t30 = -236;
static volatile int32_t t31 = 39545453;
int32_t t32 = 402909831;
int32_t t33 = -4465;
static int64_t x757 = 68745268590219LL;
int32_t t35 = -1696952;
static int32_t t38 = 11411565;
int16_t x1074 = INT16_MIN;
static volatile int32_t x1113 = INT32_MIN;
volatile int32_t t41 = -597488;
int32_t x1145 = INT32_MIN;
volatile uint32_t x1150 = 744213465U;
volatile uint8_t x1158 = UINT8_MAX;
int32_t x1191 = 385;
int8_t x1192 = 3;
uint8_t x1232 = 1U;
int8_t x1266 = -1;
volatile int16_t x1278 = INT16_MIN;
static uint64_t x1301 = UINT64_MAX;
uint8_t x1302 = 87U;
static int16_t x1304 = 1;
volatile uint8_t x1350 = 0U;
static uint16_t x1352 = 15U;
volatile int8_t x1367 = INT8_MAX;
volatile uint8_t x1466 = 6U;
int32_t t53 = 1956;
int16_t x1499 = -1;
static int8_t x1500 = 1;
int32_t x1506 = INT32_MIN;
static uint64_t x1525 = 1040706020792LLU;
uint16_t x1600 = 12U;
int8_t x1779 = -1;
uint8_t x1894 = UINT8_MAX;
uint64_t x1903 = 172824LLU;
int32_t t66 = -179051;
static int64_t x1990 = -280LL;
volatile int32_t t69 = 8;
int16_t x2233 = -1;
int32_t t74 = 101758727;
volatile int8_t x2242 = INT8_MAX;
volatile int32_t t78 = 290873100;
volatile uint32_t x2285 = UINT32_MAX;
volatile int32_t t80 = -51;
int32_t t81 = -447489763;
int32_t x2342 = INT32_MIN;
volatile int32_t t82 = 777176;
int64_t x2441 = INT64_MAX;
volatile int32_t x2530 = 540278;
uint32_t x2579 = 1U;
int8_t x2598 = 1;
int8_t x2599 = 0;
volatile uint16_t x2648 = 17U;
volatile int32_t t92 = 39;
int32_t x2693 = -3581677;
volatile int32_t t94 = 56261;
int8_t x2765 = INT8_MIN;
int32_t t98 = -392900;
int8_t x2849 = 5;
uint8_t x2850 = 3U;


void f0(void) {
	volatile int8_t x25 = 4;
	uint8_t x26 = 10U;
	int8_t x27 = 63;
	static volatile int32_t x28 = 3;

	t0 = (((x25^x26)<x27)>>x28);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x57 = INT16_MAX;
	uint32_t x58 = 26667U;
	static int32_t x59 = -1;
	static int32_t t1 = 14434;

	t1 = (((x57^x58)<x59)>>x60);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x69 = 1103U;
	volatile uint64_t x70 = UINT64_MAX;
	static uint16_t x72 = 0U;

	t2 = (((x69^x70)<x71)>>x72);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x82 = INT32_MIN;
	int64_t x83 = 1LL;
	uint32_t x84 = 0U;
	int32_t t3 = 258;

	t3 = (((x81^x82)<x83)>>x84);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	int8_t x100 = 1;
	volatile int32_t t4 = -155021494;

	t4 = (((x97^x98)<x99)>>x100);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x141 = INT64_MAX;
	static uint16_t x142 = 3U;
	int64_t x143 = INT64_MAX;
	uint16_t x144 = 14U;
	static volatile int32_t t5 = -51686764;

	t5 = (((x141^x142)<x143)>>x144);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x146 = 32026U;
	int64_t x147 = -1237796162130299LL;
	volatile int16_t x148 = 3;
	static volatile int32_t t6 = 4371;

	t6 = (((x145^x146)<x147)>>x148);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x173 = 1;
	int8_t x174 = -1;
	volatile int8_t x175 = INT8_MIN;
	volatile int32_t t7 = 47;

	t7 = (((x173^x174)<x175)>>x176);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x181 = 3LLU;
	uint16_t x182 = 1603U;
	uint8_t x184 = 4U;
	int32_t t8 = -12279;

	t8 = (((x181^x182)<x183)>>x184);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x205 = 0U;
	int16_t x206 = INT16_MIN;
	static uint32_t x207 = 231063U;
	uint16_t x208 = 1U;
	int32_t t9 = 963;

	t9 = (((x205^x206)<x207)>>x208);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x213 = 176649168485004LLU;
	int8_t x214 = -1;
	static volatile uint64_t x215 = UINT64_MAX;
	uint32_t x216 = 1U;
	volatile int32_t t10 = 37;

	t10 = (((x213^x214)<x215)>>x216);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x241 = 768004241860355LLU;
	static int8_t x242 = INT8_MIN;
	volatile int8_t x243 = 0;
	static int16_t x244 = 1;
	static volatile int32_t t11 = 4;

	t11 = (((x241^x242)<x243)>>x244);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x325 = UINT32_MAX;
	volatile int64_t x326 = INT64_MIN;
	volatile uint16_t x327 = 25U;
	uint8_t x328 = 15U;
	int32_t t12 = 25384;

	t12 = (((x325^x326)<x327)>>x328);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MAX;
	volatile int8_t x332 = 31;
	static volatile int32_t t13 = 162407;

	t13 = (((x329^x330)<x331)>>x332);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x361 = 353972U;
	uint16_t x362 = UINT16_MAX;
	static int8_t x363 = -1;
	volatile int8_t x364 = 5;
	static volatile int32_t t14 = -21031;

	t14 = (((x361^x362)<x363)>>x364);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x393 = -1LL;
	static uint8_t x395 = 23U;
	uint8_t x396 = 3U;
	volatile int32_t t15 = -109135442;

	t15 = (((x393^x394)<x395)>>x396);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x397 = INT8_MAX;
	uint32_t x398 = 47U;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 3U;
	volatile int32_t t16 = -167822;

	t16 = (((x397^x398)<x399)>>x400);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x413 = INT32_MAX;
	volatile uint64_t x414 = 33341175296214454LLU;
	uint8_t x415 = 53U;
	volatile int32_t t17 = -592766419;

	t17 = (((x413^x414)<x415)>>x416);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x418 = 5U;
	uint8_t x420 = 22U;
	volatile int32_t t18 = 362;

	t18 = (((x417^x418)<x419)>>x420);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x421 = 63U;
	uint16_t x422 = 2U;
	int8_t x423 = INT8_MIN;
	uint8_t x424 = 2U;
	int32_t t19 = -1757093;

	t19 = (((x421^x422)<x423)>>x424);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x425 = -1;
	int8_t x426 = INT8_MIN;
	static int16_t x427 = -1;
	static uint8_t x428 = 0U;

	t20 = (((x425^x426)<x427)>>x428);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x445 = -1922;
	uint64_t x447 = 278675612216813LLU;
	int8_t x448 = 2;

	t21 = (((x445^x446)<x447)>>x448);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x449 = 270U;
	uint64_t x451 = 801507780911LLU;
	uint32_t x452 = 22U;
	int32_t t22 = 30951914;

	t22 = (((x449^x450)<x451)>>x452);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x458 = 0U;
	int32_t t23 = 22506282;

	t23 = (((x457^x458)<x459)>>x460);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x542 = -1494;
	int16_t x543 = -1;
	static uint8_t x544 = 0U;
	static int32_t t24 = 1412;

	t24 = (((x541^x542)<x543)>>x544);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x545 = -1;
	int16_t x546 = INT16_MAX;
	uint8_t x548 = 26U;
	static volatile int32_t t25 = -35;

	t25 = (((x545^x546)<x547)>>x548);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x589 = UINT32_MAX;
	static int64_t x590 = -1LL;
	volatile uint32_t x591 = 1U;
	uint16_t x592 = 0U;
	volatile int32_t t26 = 2360255;

	t26 = (((x589^x590)<x591)>>x592);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x611 = 199;
	uint8_t x612 = 5U;
	volatile int32_t t27 = -690162;

	t27 = (((x609^x610)<x611)>>x612);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x681 = INT64_MAX;
	volatile uint32_t x682 = UINT32_MAX;
	uint8_t x683 = 2U;
	int32_t t28 = 1016629;

	t28 = (((x681^x682)<x683)>>x684);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x689 = -1;
	uint64_t x690 = 118221921993LLU;
	int64_t x691 = INT64_MIN;
	volatile int64_t x692 = 0LL;
	int32_t t29 = 7;

	t29 = (((x689^x690)<x691)>>x692);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x693 = -5005587;
	uint64_t x694 = 1401183761853504528LLU;
	int32_t x695 = -1;

	t30 = (((x693^x694)<x695)>>x696);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x701 = -1LL;
	int16_t x702 = 29;
	volatile uint16_t x703 = 25306U;
	static uint8_t x704 = 3U;

	t31 = (((x701^x702)<x703)>>x704);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x721 = UINT16_MAX;
	static int16_t x722 = 2;
	int8_t x723 = -1;
	static int16_t x724 = 3;

	t32 = (((x721^x722)<x723)>>x724);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x733 = -20;
	int64_t x734 = 130087323309279178LL;
	volatile uint32_t x735 = UINT32_MAX;
	uint8_t x736 = 7U;

	t33 = (((x733^x734)<x735)>>x736);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x741 = INT16_MIN;
	int64_t x742 = INT64_MIN;
	static uint64_t x743 = UINT64_MAX;
	volatile int8_t x744 = 0;
	int32_t t34 = -22215316;

	t34 = (((x741^x742)<x743)>>x744);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x758 = -1;
	int16_t x759 = INT16_MAX;
	int8_t x760 = 0;

	t35 = (((x757^x758)<x759)>>x760);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x781 = INT8_MAX;
	int32_t x782 = -1;
	static int8_t x783 = -1;
	int8_t x784 = 8;
	volatile int32_t t36 = 31;

	t36 = (((x781^x782)<x783)>>x784);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x841 = -151;
	int16_t x842 = -1;
	volatile int64_t x843 = -1LL;
	uint16_t x844 = 3U;
	int32_t t37 = 5;

	t37 = (((x841^x842)<x843)>>x844);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x873 = 6;
	uint32_t x874 = 46766U;
	int32_t x875 = INT32_MIN;
	int32_t x876 = 11;

	t38 = (((x873^x874)<x875)>>x876);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1021 = INT32_MIN;
	static int16_t x1022 = INT16_MIN;
	int32_t x1023 = INT32_MIN;
	int8_t x1024 = 1;
	static int32_t t39 = 1;

	t39 = (((x1021^x1022)<x1023)>>x1024);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1073 = 30U;
	uint32_t x1075 = 20U;
	volatile uint16_t x1076 = 8U;
	static volatile int32_t t40 = -13;

	t40 = (((x1073^x1074)<x1075)>>x1076);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x1114 = INT16_MAX;
	uint8_t x1115 = 47U;
	uint8_t x1116 = 7U;

	t41 = (((x1113^x1114)<x1115)>>x1116);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1146 = UINT16_MAX;
	int64_t x1147 = INT64_MIN;
	static volatile int16_t x1148 = 26;
	int32_t t42 = -3906;

	t42 = (((x1145^x1146)<x1147)>>x1148);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1149 = INT32_MAX;
	int8_t x1151 = INT8_MAX;
	uint16_t x1152 = 27U;
	int32_t t43 = 106304052;

	t43 = (((x1149^x1150)<x1151)>>x1152);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1157 = -1;
	volatile int32_t x1159 = -1;
	int8_t x1160 = 2;
	static int32_t t44 = -215213267;

	t44 = (((x1157^x1158)<x1159)>>x1160);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1189 = -1;
	uint16_t x1190 = UINT16_MAX;
	int32_t t45 = 424273583;

	t45 = (((x1189^x1190)<x1191)>>x1192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1229 = 2;
	uint16_t x1230 = UINT16_MAX;
	int32_t x1231 = INT32_MIN;
	int32_t t46 = 16370;

	t46 = (((x1229^x1230)<x1231)>>x1232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1265 = -1LL;
	int8_t x1267 = INT8_MAX;
	int8_t x1268 = 0;
	static int32_t t47 = 53;

	t47 = (((x1265^x1266)<x1267)>>x1268);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x1277 = 13234LLU;
	uint16_t x1279 = 722U;
	uint16_t x1280 = 1U;
	int32_t t48 = 1;

	t48 = (((x1277^x1278)<x1279)>>x1280);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1303 = UINT16_MAX;
	volatile int32_t t49 = -35194551;

	t49 = (((x1301^x1302)<x1303)>>x1304);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x1349 = 3;
	static uint32_t x1351 = 132433U;
	volatile int32_t t50 = 55;

	t50 = (((x1349^x1350)<x1351)>>x1352);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1365 = UINT64_MAX;
	uint16_t x1366 = 11232U;
	uint8_t x1368 = 9U;
	volatile int32_t t51 = -63457;

	t51 = (((x1365^x1366)<x1367)>>x1368);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1381 = 1260U;
	int8_t x1382 = INT8_MIN;
	int16_t x1383 = INT16_MIN;
	static uint16_t x1384 = 3U;
	int32_t t52 = 3611;

	t52 = (((x1381^x1382)<x1383)>>x1384);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1465 = INT64_MIN;
	int32_t x1467 = INT32_MIN;
	uint8_t x1468 = 29U;

	t53 = (((x1465^x1466)<x1467)>>x1468);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1497 = INT16_MAX;
	int32_t x1498 = -240;
	volatile int32_t t54 = 2730;

	t54 = (((x1497^x1498)<x1499)>>x1500);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1505 = 3U;
	static int8_t x1507 = 3;
	volatile uint8_t x1508 = 3U;
	static volatile int32_t t55 = 752420146;

	t55 = (((x1505^x1506)<x1507)>>x1508);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1526 = UINT16_MAX;
	int8_t x1527 = 1;
	volatile uint8_t x1528 = 0U;
	volatile int32_t t56 = -8353282;

	t56 = (((x1525^x1526)<x1527)>>x1528);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1573 = UINT16_MAX;
	static volatile uint8_t x1574 = 10U;
	int32_t x1575 = -2;
	uint8_t x1576 = 4U;
	volatile int32_t t57 = 550676;

	t57 = (((x1573^x1574)<x1575)>>x1576);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1597 = -1;
	static int64_t x1598 = -2134LL;
	volatile int16_t x1599 = -5485;
	int32_t t58 = -29;

	t58 = (((x1597^x1598)<x1599)>>x1600);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1653 = 461U;
	int16_t x1654 = 6195;
	volatile uint16_t x1655 = 100U;
	volatile int8_t x1656 = 5;
	static volatile int32_t t59 = 7;

	t59 = (((x1653^x1654)<x1655)>>x1656);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1685 = 1U;
	int64_t x1686 = -19162636090LL;
	static uint16_t x1687 = 435U;
	static uint8_t x1688 = 30U;
	int32_t t60 = 0;

	t60 = (((x1685^x1686)<x1687)>>x1688);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1777 = 36LLU;
	volatile int16_t x1778 = INT16_MIN;
	static volatile uint16_t x1780 = 4U;
	static volatile int32_t t61 = -192;

	t61 = (((x1777^x1778)<x1779)>>x1780);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1841 = INT32_MIN;
	uint32_t x1842 = UINT32_MAX;
	int64_t x1843 = INT64_MIN;
	uint16_t x1844 = 13U;
	volatile int32_t t62 = 335126524;

	t62 = (((x1841^x1842)<x1843)>>x1844);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1857 = 45972206986467LLU;
	static uint8_t x1858 = 60U;
	int16_t x1859 = -1;
	int8_t x1860 = 0;
	static int32_t t63 = 844982;

	t63 = (((x1857^x1858)<x1859)>>x1860);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x1893 = 496;
	static uint8_t x1895 = UINT8_MAX;
	static volatile uint8_t x1896 = 17U;
	volatile int32_t t64 = -129;

	t64 = (((x1893^x1894)<x1895)>>x1896);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1901 = 6355;
	volatile int8_t x1902 = INT8_MIN;
	uint16_t x1904 = 0U;
	volatile int32_t t65 = 196915338;

	t65 = (((x1901^x1902)<x1903)>>x1904);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x1973 = 451U;
	uint16_t x1974 = UINT16_MAX;
	int16_t x1975 = INT16_MIN;
	uint8_t x1976 = 0U;

	t66 = (((x1973^x1974)<x1975)>>x1976);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x1981 = 337500319U;
	int64_t x1982 = INT64_MAX;
	volatile uint8_t x1983 = UINT8_MAX;
	static uint16_t x1984 = 13U;
	volatile int32_t t67 = 1336787;

	t67 = (((x1981^x1982)<x1983)>>x1984);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1989 = 11;
	uint8_t x1991 = UINT8_MAX;
	int8_t x1992 = 1;
	int32_t t68 = 17822;

	t68 = (((x1989^x1990)<x1991)>>x1992);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2041 = -1;
	static int16_t x2042 = INT16_MIN;
	int64_t x2043 = INT64_MIN;
	uint64_t x2044 = 0LLU;

	t69 = (((x2041^x2042)<x2043)>>x2044);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2085 = INT8_MIN;
	int8_t x2086 = INT8_MAX;
	uint32_t x2087 = 163380675U;
	static int8_t x2088 = 1;
	int32_t t70 = -535532540;

	t70 = (((x2085^x2086)<x2087)>>x2088);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2089 = INT16_MIN;
	int16_t x2090 = INT16_MIN;
	volatile int64_t x2091 = INT64_MAX;
	uint8_t x2092 = 19U;
	static volatile int32_t t71 = -77431236;

	t71 = (((x2089^x2090)<x2091)>>x2092);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2141 = 335098U;
	int32_t x2142 = -526846657;
	volatile uint64_t x2143 = UINT64_MAX;
	uint16_t x2144 = 17U;
	volatile int32_t t72 = -19;

	t72 = (((x2141^x2142)<x2143)>>x2144);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2157 = -1;
	int32_t x2158 = -1;
	int32_t x2159 = INT32_MIN;
	int8_t x2160 = 3;
	volatile int32_t t73 = 1165862;

	t73 = (((x2157^x2158)<x2159)>>x2160);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2234 = 29176;
	int64_t x2235 = INT64_MIN;
	uint64_t x2236 = 6LLU;

	t74 = (((x2233^x2234)<x2235)>>x2236);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x2241 = -1;
	uint64_t x2243 = 5204594086361LLU;
	uint8_t x2244 = 2U;
	volatile int32_t t75 = 37127;

	t75 = (((x2241^x2242)<x2243)>>x2244);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2245 = 2887U;
	int32_t x2246 = INT32_MIN;
	uint64_t x2247 = 30001LLU;
	uint16_t x2248 = 2U;
	static volatile int32_t t76 = -40;

	t76 = (((x2245^x2246)<x2247)>>x2248);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x2257 = INT64_MIN;
	int64_t x2258 = 4342346162406179LL;
	static volatile int32_t x2259 = INT32_MIN;
	uint16_t x2260 = 1U;
	int32_t t77 = -18;

	t77 = (((x2257^x2258)<x2259)>>x2260);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2261 = -1;
	static uint16_t x2262 = 1U;
	volatile int32_t x2263 = -1;
	uint64_t x2264 = 1LLU;

	t78 = (((x2261^x2262)<x2263)>>x2264);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2286 = -316740091658349LL;
	int64_t x2287 = INT64_MAX;
	volatile uint16_t x2288 = 25U;
	int32_t t79 = 515966;

	t79 = (((x2285^x2286)<x2287)>>x2288);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2305 = -27093637165680LL;
	static uint64_t x2306 = 78650700010876758LLU;
	uint64_t x2307 = 1337578375233591389LLU;
	uint8_t x2308 = 0U;

	t80 = (((x2305^x2306)<x2307)>>x2308);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x2321 = 0;
	volatile uint16_t x2322 = 1U;
	int32_t x2323 = INT32_MIN;
	int8_t x2324 = 1;

	t81 = (((x2321^x2322)<x2323)>>x2324);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2341 = INT8_MIN;
	static uint8_t x2343 = UINT8_MAX;
	static int16_t x2344 = 30;

	t82 = (((x2341^x2342)<x2343)>>x2344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x2369 = INT8_MAX;
	static volatile int8_t x2370 = INT8_MIN;
	volatile int8_t x2371 = -1;
	static int32_t x2372 = 3;
	int32_t t83 = 292363172;

	t83 = (((x2369^x2370)<x2371)>>x2372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x2442 = 28U;
	int16_t x2443 = -3;
	static int16_t x2444 = 9;
	int32_t t84 = 233977330;

	t84 = (((x2441^x2442)<x2443)>>x2444);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2529 = INT8_MIN;
	static int64_t x2531 = INT64_MAX;
	volatile int32_t x2532 = 7;
	volatile int32_t t85 = -18053434;

	t85 = (((x2529^x2530)<x2531)>>x2532);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2577 = -103908;
	static int8_t x2578 = 41;
	uint32_t x2580 = 0U;
	int32_t t86 = -492;

	t86 = (((x2577^x2578)<x2579)>>x2580);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2597 = 14659404691LLU;
	volatile uint8_t x2600 = 25U;
	volatile int32_t t87 = 391549191;

	t87 = (((x2597^x2598)<x2599)>>x2600);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2601 = 119495762;
	int8_t x2602 = INT8_MAX;
	static uint64_t x2603 = 109719LLU;
	int8_t x2604 = 0;
	int32_t t88 = -57;

	t88 = (((x2601^x2602)<x2603)>>x2604);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2629 = 110815241232833LL;
	int64_t x2630 = INT64_MIN;
	int32_t x2631 = INT32_MAX;
	volatile int8_t x2632 = 1;
	volatile int32_t t89 = 1;

	t89 = (((x2629^x2630)<x2631)>>x2632);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2633 = INT8_MIN;
	int32_t x2634 = 16466502;
	volatile uint64_t x2635 = UINT64_MAX;
	int8_t x2636 = 1;
	volatile int32_t t90 = 650324;

	t90 = (((x2633^x2634)<x2635)>>x2636);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2645 = 5781049;
	int8_t x2646 = INT8_MIN;
	int32_t x2647 = -1;
	volatile int32_t t91 = 495;

	t91 = (((x2645^x2646)<x2647)>>x2648);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2657 = -76102136835LL;
	static int8_t x2658 = INT8_MIN;
	int32_t x2659 = INT32_MAX;
	uint8_t x2660 = 3U;

	t92 = (((x2657^x2658)<x2659)>>x2660);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x2661 = UINT32_MAX;
	int8_t x2662 = INT8_MAX;
	int32_t x2663 = INT32_MIN;
	int8_t x2664 = 14;
	volatile int32_t t93 = 356910;

	t93 = (((x2661^x2662)<x2663)>>x2664);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x2694 = -133LL;
	int16_t x2695 = -1;
	static uint16_t x2696 = 3U;

	t94 = (((x2693^x2694)<x2695)>>x2696);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2721 = INT64_MIN;
	int64_t x2722 = -1LL;
	static volatile int64_t x2723 = INT64_MAX;
	uint16_t x2724 = 3U;
	static volatile int32_t t95 = -15952;

	t95 = (((x2721^x2722)<x2723)>>x2724);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x2761 = INT8_MIN;
	uint64_t x2762 = UINT64_MAX;
	int32_t x2763 = INT32_MIN;
	int8_t x2764 = 26;
	int32_t t96 = -1;

	t96 = (((x2761^x2762)<x2763)>>x2764);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x2766 = UINT8_MAX;
	static volatile int64_t x2767 = INT64_MIN;
	int32_t x2768 = 0;
	volatile int32_t t97 = 106556;

	t97 = (((x2765^x2766)<x2767)>>x2768);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2821 = -1;
	int16_t x2822 = INT16_MIN;
	int64_t x2823 = -1LL;
	volatile uint16_t x2824 = 24U;

	t98 = (((x2821^x2822)<x2823)>>x2824);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2851 = INT64_MAX;
	int8_t x2852 = 1;
	int32_t t99 = 1775;

	t99 = (((x2849^x2850)<x2851)>>x2852);

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

