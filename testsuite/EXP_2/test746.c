#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x62 = INT16_MIN;
volatile int64_t x75 = -1LL;
volatile int64_t x125 = 416LL;
int8_t x127 = INT8_MIN;
uint8_t x129 = 0U;
uint32_t t8 = 123231U;
int8_t x186 = 0;
static int16_t x187 = INT16_MIN;
volatile uint32_t t9 = 300U;
uint64_t x244 = 1680843886796481LLU;
uint16_t x271 = 4U;
int32_t t12 = 2217;
volatile uint32_t x317 = 7789U;
int16_t x319 = -1;
static volatile int64_t t14 = -86210317995323521LL;
static int64_t t15 = -101743930368LL;
int8_t x352 = INT8_MIN;
uint8_t x357 = UINT8_MAX;
int8_t x399 = -1;
int16_t x400 = INT16_MIN;
int32_t t18 = -50;
int32_t x426 = INT32_MAX;
int32_t x429 = INT32_MAX;
volatile int32_t x430 = INT32_MIN;
uint64_t x544 = UINT64_MAX;
static volatile int64_t t25 = -28599LL;
int32_t x587 = INT32_MIN;
int16_t x632 = INT16_MIN;
uint64_t x635 = 119953289LLU;
uint64_t x685 = 177528121366LLU;
volatile int8_t x724 = -5;
int8_t x787 = -10;
static uint32_t x794 = 2U;
uint16_t x796 = 4848U;
volatile int8_t x808 = INT8_MIN;
volatile int64_t t37 = -33571577937LL;
int8_t x850 = 0;
volatile uint32_t t39 = 57271U;
static uint16_t x859 = 1U;
volatile int64_t x937 = INT64_MAX;
int16_t x965 = INT16_MAX;
volatile uint32_t t43 = 51U;
static int64_t t44 = 24780041047806323LL;
int8_t x995 = INT8_MIN;
static volatile int64_t t46 = 947792853581367LL;
uint64_t x1013 = 252213933LLU;
uint32_t x1016 = 6U;
uint64_t t47 = 2486257481LLU;
int16_t x1055 = -1;
volatile int16_t x1056 = INT16_MIN;
volatile int32_t t49 = 1527;
uint16_t x1193 = 484U;
int8_t x1195 = INT8_MIN;
int16_t x1205 = 3;
static volatile int64_t t54 = -828540628784LL;
static volatile uint64_t t55 = 818662743LLU;
int64_t x1224 = INT64_MIN;
int64_t t56 = 22LL;
int8_t x1301 = 23;
volatile uint32_t x1378 = UINT32_MAX;
int8_t x1380 = -1;
int64_t x1437 = INT64_MAX;
static int64_t x1438 = INT64_MIN;
volatile uint32_t t63 = 1938481U;
static int32_t t64 = 161464728;
volatile int64_t x1524 = INT64_MAX;
uint16_t x1618 = UINT16_MAX;
uint64_t t68 = 8210884678060461LLU;
static int16_t x1641 = 6;
int8_t x1661 = 2;
uint16_t x1669 = 320U;
volatile int16_t x1701 = INT16_MAX;
static int64_t x1704 = -1LL;
uint16_t x1725 = UINT16_MAX;
volatile int8_t x1727 = -1;
static volatile int32_t t75 = -1;
uint8_t x1733 = UINT8_MAX;
int8_t x1738 = 3;
static int64_t x1739 = 69211207661639LL;
volatile int8_t x1745 = INT8_MAX;
int8_t x1747 = 1;
volatile uint8_t x1778 = UINT8_MAX;
int64_t x1779 = 1LL;
static volatile int32_t t80 = -1042953756;
static int8_t x1881 = INT8_MAX;
static volatile uint8_t x1888 = 83U;
int32_t x1913 = 7522;
uint32_t t84 = 73U;
static int8_t x1923 = -46;
static volatile uint32_t t85 = 7710912U;
uint32_t x2001 = 20U;
static int8_t x2003 = -14;
int64_t t89 = -330451499LL;
static volatile uint32_t x2009 = 4170U;
volatile uint16_t x2011 = 18940U;
uint16_t x2012 = 1U;
volatile uint64_t t91 = 1339950LLU;
static uint32_t x2032 = 5258268U;
uint32_t t92 = 147851160U;
uint64_t x2059 = UINT64_MAX;
uint16_t x2094 = UINT16_MAX;
uint64_t x2096 = UINT64_MAX;
static volatile uint16_t x2102 = 8U;
int32_t x2103 = -1;
int32_t x2116 = INT32_MIN;
static int32_t t96 = -459975148;
volatile int8_t x2122 = 4;
int64_t x2142 = 1LL;
int64_t x2146 = INT64_MAX;


void f0(void) {
	uint32_t x37 = 1361351605U;
	int8_t x38 = INT8_MIN;
	volatile int32_t x39 = -1;
	int64_t x40 = -461369LL;
	static int64_t t0 = -2902LL;

	t0 = ((x37<<(x38%x39))%x40);

	if (t0 != 313055LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x41 = 1736;
	volatile int8_t x42 = 2;
	uint32_t x43 = UINT32_MAX;
	volatile uint64_t x44 = 705540313224384LLU;
	static uint64_t t1 = 458895120101290LLU;

	t1 = ((x41<<(x42%x43))%x44);

	if (t1 != 6944LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = 21;
	int16_t x63 = INT16_MIN;
	int64_t x64 = 59705410370LL;
	volatile int64_t t2 = 515665846659863172LL;

	t2 = ((x61<<(x62%x63))%x64);

	if (t2 != 21LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x73 = INT16_MAX;
	uint32_t x74 = 185571U;
	static int64_t x76 = INT64_MIN;
	static volatile int64_t t3 = 52046LL;

	t3 = ((x73<<(x74%x75))%x76);

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x126 = INT8_MIN;
	uint64_t x128 = 3557286078LLU;
	volatile uint64_t t4 = 7972676991542LLU;

	t4 = ((x125<<(x126%x127))%x128);

	if (t4 != 416LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x130 = 9U;
	int8_t x131 = 1;
	volatile int32_t x132 = -303;
	int32_t t5 = 2458;

	t5 = ((x129<<(x130%x131))%x132);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x137 = INT32_MAX;
	static int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t6 = 60807423U;

	t6 = ((x137<<(x138%x139))%x140);

	if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x165 = 47396873LLU;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = -1;
	static volatile uint16_t x168 = UINT16_MAX;
	uint64_t t7 = 8327862266LLU;

	t7 = ((x165<<(x166%x167))%x168);

	if (t7 != 15068LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x173 = 1906U;
	int64_t x174 = INT64_MAX;
	int16_t x175 = 99;
	static int32_t x176 = 770643;

	t8 = ((x173<<(x174%x175))%x176);

	if (t8 != 243968U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x185 = 38U;
	int8_t x188 = INT8_MAX;

	t9 = ((x185<<(x186%x187))%x188);

	if (t9 != 38U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x241 = 554U;
	int64_t x242 = 4LL;
	int8_t x243 = INT8_MIN;
	volatile uint64_t t10 = 492288428245LLU;

	t10 = ((x241<<(x242%x243))%x244);

	if (t10 != 8864LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x257 = 2063U;
	uint8_t x258 = 13U;
	int16_t x259 = INT16_MIN;
	static uint64_t x260 = 22231091877LLU;
	volatile uint64_t t11 = 495260861072040LLU;

	t11 = ((x257<<(x258%x259))%x260);

	if (t11 != 16900096LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x269 = INT8_MAX;
	static int64_t x270 = INT64_MIN;
	uint8_t x272 = UINT8_MAX;

	t12 = ((x269<<(x270%x271))%x272);

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MAX;
	static int8_t x283 = -1;
	volatile int16_t x284 = -1;
	uint32_t t13 = 380334U;

	t13 = ((x281<<(x282%x283))%x284);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x318 = UINT64_MAX;
	volatile int64_t x320 = -455937504401LL;

	t14 = ((x317<<(x318%x319))%x320);

	if (t14 != 7789LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x345 = INT64_MAX;
	int32_t x346 = INT32_MIN;
	volatile int8_t x347 = -1;
	int32_t x348 = INT32_MIN;

	t15 = ((x345<<(x346%x347))%x348);

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x349 = 29;
	int8_t x350 = INT8_MIN;
	int16_t x351 = -2;
	volatile int32_t t16 = -235371983;

	t16 = ((x349<<(x350%x351))%x352);

	if (t16 != 29) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x358 = 110U;
	int16_t x359 = -1;
	uint32_t x360 = 3636272U;
	static volatile uint32_t t17 = 3065U;

	t17 = ((x357<<(x358%x359))%x360);

	if (t17 != 255U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x397 = 8U;
	volatile int32_t x398 = INT32_MAX;

	t18 = ((x397<<(x398%x399))%x400);

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x425 = 5U;
	uint16_t x427 = 7U;
	int8_t x428 = INT8_MIN;
	volatile int32_t t19 = 19027540;

	t19 = ((x425<<(x426%x427))%x428);

	if (t19 != 10) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x431 = INT16_MIN;
	volatile uint8_t x432 = 1U;
	volatile int32_t t20 = -1;

	t20 = ((x429<<(x430%x431))%x432);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x433 = UINT16_MAX;
	volatile uint8_t x434 = UINT8_MAX;
	int8_t x435 = -1;
	uint16_t x436 = 138U;
	int32_t t21 = -230768;

	t21 = ((x433<<(x434%x435))%x436);

	if (t21 != 123) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x493 = UINT64_MAX;
	uint32_t x494 = UINT32_MAX;
	int16_t x495 = 42;
	uint16_t x496 = 22568U;
	uint64_t t22 = 986514066686885LLU;

	t22 = ((x493<<(x494%x495))%x496);

	if (t22 != 8LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x541 = 1U;
	static volatile int64_t x542 = INT64_MAX;
	static int32_t x543 = -1;
	uint64_t t23 = 15093LLU;

	t23 = ((x541<<(x542%x543))%x544);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x545 = INT64_MAX;
	volatile int16_t x546 = 1;
	static int8_t x547 = -1;
	int8_t x548 = INT8_MIN;
	static int64_t t24 = -240866118508LL;

	t24 = ((x545<<(x546%x547))%x548);

	if (t24 != 127LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x557 = INT64_MAX;
	int16_t x558 = INT16_MAX;
	int16_t x559 = -1;
	volatile int32_t x560 = INT32_MAX;

	t25 = ((x557<<(x558%x559))%x560);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x561 = 1513484LLU;
	int16_t x562 = -4086;
	int8_t x563 = -1;
	uint8_t x564 = 1U;
	uint64_t t26 = 59224194321LLU;

	t26 = ((x561<<(x562%x563))%x564);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x585 = 61038506;
	int64_t x586 = INT64_MIN;
	static volatile uint64_t x588 = 33256736989236869LLU;
	uint64_t t27 = 1515615LLU;

	t27 = ((x585<<(x586%x587))%x588);

	if (t27 != 61038506LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x629 = UINT8_MAX;
	uint32_t x630 = UINT32_MAX;
	uint16_t x631 = UINT16_MAX;
	int32_t t28 = -1;

	t28 = ((x629<<(x630%x631))%x632);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x633 = 11718444LLU;
	int8_t x634 = 5;
	uint8_t x636 = 5U;
	static volatile uint64_t t29 = 33033358254660LLU;

	t29 = ((x633<<(x634%x635))%x636);

	if (t29 != 3LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x641 = UINT32_MAX;
	int32_t x642 = INT32_MAX;
	uint8_t x643 = 46U;
	int16_t x644 = INT16_MIN;
	uint32_t t30 = 34087U;

	t30 = ((x641<<(x642%x643))%x644);

	if (t30 != 32736U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x686 = 22U;
	uint64_t x687 = 13LLU;
	int16_t x688 = INT16_MAX;
	static volatile uint64_t t31 = 142080141LLU;

	t31 = ((x685<<(x686%x687))%x688);

	if (t31 != 30542LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x721 = 28U;
	uint16_t x722 = 40U;
	int64_t x723 = 36LL;
	volatile int32_t t32 = 238;

	t32 = ((x721<<(x722%x723))%x724);

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x781 = INT32_MAX;
	uint32_t x782 = 63813052U;
	static volatile int64_t x783 = -1LL;
	static uint16_t x784 = 4509U;
	volatile int32_t t33 = 0;

	t33 = ((x781<<(x782%x783))%x784);

	if (t33 != 253) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x785 = 133376135011821LLU;
	uint32_t x786 = 1U;
	int16_t x788 = 1;
	volatile uint64_t t34 = 44318725LLU;

	t34 = ((x785<<(x786%x787))%x788);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x793 = 8U;
	static uint8_t x795 = 6U;
	int32_t t35 = -2742;

	t35 = ((x793<<(x794%x795))%x796);

	if (t35 != 32) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x805 = 9599591760110LLU;
	static int64_t x806 = INT64_MIN;
	volatile int8_t x807 = -1;
	static uint64_t t36 = 75773931641587LLU;

	t36 = ((x805<<(x806%x807))%x808);

	if (t36 != 9599591760110LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x821 = INT64_MAX;
	int64_t x822 = INT64_MIN;
	int32_t x823 = -1;
	volatile uint16_t x824 = 192U;

	t37 = ((x821<<(x822%x823))%x824);

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x845 = 2U;
	uint8_t x846 = 2U;
	uint32_t x847 = UINT32_MAX;
	static uint32_t x848 = 39U;
	static volatile uint32_t t38 = 135U;

	t38 = ((x845<<(x846%x847))%x848);

	if (t38 != 8U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x849 = 58022476U;
	static int32_t x851 = -1;
	uint16_t x852 = 431U;

	t39 = ((x849<<(x850%x851))%x852);

	if (t39 != 394U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x857 = UINT64_MAX;
	uint32_t x858 = 36737U;
	int8_t x860 = 9;
	uint64_t t40 = 26728220730LLU;

	t40 = ((x857<<(x858%x859))%x860);

	if (t40 != 6LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x938 = -1;
	static int8_t x939 = -1;
	uint16_t x940 = 868U;
	volatile int64_t t41 = -411LL;

	t41 = ((x937<<(x938%x939))%x940);

	if (t41 != 7LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x953 = UINT32_MAX;
	int16_t x954 = -4408;
	static volatile int16_t x955 = -1;
	int32_t x956 = -59;
	volatile uint32_t t42 = 59443U;

	t42 = ((x953<<(x954%x955))%x956);

	if (t42 != 58U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x966 = -1;
	int8_t x967 = -1;
	uint32_t x968 = UINT32_MAX;

	t43 = ((x965<<(x966%x967))%x968);

	if (t43 != 32767U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x973 = 509U;
	volatile uint32_t x974 = 1U;
	int16_t x975 = INT16_MIN;
	volatile int64_t x976 = 2034897869LL;

	t44 = ((x973<<(x974%x975))%x976);

	if (t44 != 1018LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x989 = 5791241U;
	static int8_t x990 = -1;
	int8_t x991 = -1;
	uint16_t x992 = UINT16_MAX;
	volatile uint32_t t45 = 830U;

	t45 = ((x989<<(x990%x991))%x992);

	if (t45 != 24161U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x993 = INT32_MAX;
	int32_t x994 = -61952;
	int64_t x996 = INT64_MIN;

	t46 = ((x993<<(x994%x995))%x996);

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1014 = 6U;
	uint64_t x1015 = 5483302LLU;

	t47 = ((x1013<<(x1014%x1015))%x1016);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1053 = UINT64_MAX;
	static int16_t x1054 = INT16_MAX;
	volatile uint64_t t48 = 12676900LLU;

	t48 = ((x1053<<(x1054%x1055))%x1056);

	if (t48 != 32767LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1081 = 27991U;
	int8_t x1082 = INT8_MAX;
	int16_t x1083 = 1;
	uint16_t x1084 = 299U;

	t49 = ((x1081<<(x1082%x1083))%x1084);

	if (t49 != 184) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1105 = 1;
	volatile int8_t x1106 = INT8_MIN;
	int32_t x1107 = -1;
	uint8_t x1108 = 3U;
	int32_t t50 = 20;

	t50 = ((x1105<<(x1106%x1107))%x1108);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1121 = 1442;
	int32_t x1122 = INT32_MAX;
	int16_t x1123 = -1;
	int16_t x1124 = INT16_MIN;
	volatile int32_t t51 = -16381;

	t51 = ((x1121<<(x1122%x1123))%x1124);

	if (t51 != 1442) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1153 = 31LLU;
	int16_t x1154 = INT16_MAX;
	int8_t x1155 = -1;
	volatile int16_t x1156 = INT16_MAX;
	volatile uint64_t t52 = 1699473680189898LLU;

	t52 = ((x1153<<(x1154%x1155))%x1156);

	if (t52 != 31LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x1194 = INT8_MIN;
	int64_t x1196 = 210837911531LL;
	int64_t t53 = -24LL;

	t53 = ((x1193<<(x1194%x1195))%x1196);

	if (t53 != 484LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x1206 = INT8_MIN;
	int16_t x1207 = -1;
	int64_t x1208 = -8219LL;

	t54 = ((x1205<<(x1206%x1207))%x1208);

	if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x1217 = 1370LLU;
	uint8_t x1218 = 2U;
	int32_t x1219 = INT32_MIN;
	uint64_t x1220 = 45971161LLU;

	t55 = ((x1217<<(x1218%x1219))%x1220);

	if (t55 != 5480LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1221 = INT32_MAX;
	int32_t x1222 = -1;
	int8_t x1223 = -1;

	t56 = ((x1221<<(x1222%x1223))%x1224);

	if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1302 = 6U;
	uint8_t x1303 = 63U;
	static uint16_t x1304 = 3069U;
	int32_t t57 = -23263;

	t57 = ((x1301<<(x1302%x1303))%x1304);

	if (t57 != 1472) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x1345 = UINT8_MAX;
	static int64_t x1346 = INT64_MAX;
	static int16_t x1347 = -246;
	static int32_t x1348 = INT32_MIN;
	int32_t t58 = -23;

	t58 = ((x1345<<(x1346%x1347))%x1348);

	if (t58 != 32640) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1377 = 659U;
	int8_t x1379 = INT8_MAX;
	volatile int32_t t59 = -2;

	t59 = ((x1377<<(x1378%x1379))%x1380);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1405 = 28140U;
	int32_t x1406 = INT32_MIN;
	int16_t x1407 = INT16_MIN;
	static int64_t x1408 = -1007496137LL;
	int64_t t60 = -1LL;

	t60 = ((x1405<<(x1406%x1407))%x1408);

	if (t60 != 28140LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1439 = INT32_MIN;
	uint8_t x1440 = 56U;
	static int64_t t61 = -2771680611399866LL;

	t61 = ((x1437<<(x1438%x1439))%x1440);

	if (t61 != 7LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1449 = 2483U;
	uint16_t x1450 = 32404U;
	int8_t x1451 = -1;
	int64_t x1452 = INT64_MIN;
	volatile int64_t t62 = 9141769LL;

	t62 = ((x1449<<(x1450%x1451))%x1452);

	if (t62 != 2483LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1497 = INT32_MAX;
	uint16_t x1498 = UINT16_MAX;
	uint16_t x1499 = 1U;
	static uint32_t x1500 = 63U;

	t63 = ((x1497<<(x1498%x1499))%x1500);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1509 = 23;
	uint32_t x1510 = 24U;
	int16_t x1511 = INT16_MIN;
	int16_t x1512 = -1;

	t64 = ((x1509<<(x1510%x1511))%x1512);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1513 = 48U;
	int32_t x1514 = -211;
	int64_t x1515 = -1LL;
	int32_t x1516 = -1;
	int32_t t65 = -386041;

	t65 = ((x1513<<(x1514%x1515))%x1516);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1521 = 62528189391705670LLU;
	uint8_t x1522 = 2U;
	static uint32_t x1523 = 6662350U;
	volatile uint64_t t66 = 7557495302794864444LLU;

	t66 = ((x1521<<(x1522%x1523))%x1524);

	if (t66 != 250112757566822680LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1617 = INT64_MAX;
	int64_t x1619 = -1LL;
	int8_t x1620 = INT8_MAX;
	int64_t t67 = -1268935901205194LL;

	t67 = ((x1617<<(x1618%x1619))%x1620);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1621 = 1895562036LLU;
	int16_t x1622 = INT16_MAX;
	int8_t x1623 = -9;
	int32_t x1624 = 5562024;

	t68 = ((x1621<<(x1622%x1623))%x1624);

	if (t68 != 5329680LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x1637 = 1;
	int64_t x1638 = INT64_MIN;
	static int32_t x1639 = INT32_MIN;
	volatile int16_t x1640 = INT16_MIN;
	volatile int32_t t69 = -154592752;

	t69 = ((x1637<<(x1638%x1639))%x1640);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x1642 = 1U;
	int32_t x1643 = 1;
	int64_t x1644 = -430591LL;
	int64_t t70 = -258417367988309142LL;

	t70 = ((x1641<<(x1642%x1643))%x1644);

	if (t70 != 6LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1662 = UINT16_MAX;
	int16_t x1663 = INT16_MAX;
	int8_t x1664 = INT8_MIN;
	volatile int32_t t71 = 56003702;

	t71 = ((x1661<<(x1662%x1663))%x1664);

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x1670 = -1;
	int16_t x1671 = -1;
	uint64_t x1672 = UINT64_MAX;
	volatile uint64_t t72 = 13024526LLU;

	t72 = ((x1669<<(x1670%x1671))%x1672);

	if (t72 != 320LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x1702 = INT8_MAX;
	static uint32_t x1703 = 41U;
	volatile int64_t t73 = 13872137990LL;

	t73 = ((x1701<<(x1702%x1703))%x1704);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1705 = UINT8_MAX;
	volatile int16_t x1706 = INT16_MAX;
	int64_t x1707 = -1LL;
	static volatile int8_t x1708 = -1;
	volatile int32_t t74 = -1915;

	t74 = ((x1705<<(x1706%x1707))%x1708);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x1726 = INT64_MIN;
	volatile int16_t x1728 = -13;

	t75 = ((x1725<<(x1726%x1727))%x1728);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1734 = -1;
	int64_t x1735 = -1LL;
	int32_t x1736 = INT32_MAX;
	static int32_t t76 = -27226543;

	t76 = ((x1733<<(x1734%x1735))%x1736);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1737 = UINT8_MAX;
	int8_t x1740 = INT8_MIN;
	volatile int32_t t77 = -12664040;

	t77 = ((x1737<<(x1738%x1739))%x1740);

	if (t77 != 120) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x1746 = UINT8_MAX;
	int8_t x1748 = 30;
	static int32_t t78 = -21742197;

	t78 = ((x1745<<(x1746%x1747))%x1748);

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1777 = INT64_MAX;
	uint16_t x1780 = UINT16_MAX;
	volatile int64_t t79 = -3906489286422403180LL;

	t79 = ((x1777<<(x1778%x1779))%x1780);

	if (t79 != 32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1809 = UINT16_MAX;
	int64_t x1810 = INT64_MAX;
	static int8_t x1811 = INT8_MAX;
	int8_t x1812 = INT8_MIN;

	t80 = ((x1809<<(x1810%x1811))%x1812);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x1817 = INT8_MAX;
	uint8_t x1818 = 0U;
	int64_t x1819 = 29067LL;
	static int32_t x1820 = 701;
	int32_t t81 = -26;

	t81 = ((x1817<<(x1818%x1819))%x1820);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1882 = 14U;
	int32_t x1883 = INT32_MIN;
	uint32_t x1884 = 62275188U;
	uint32_t t82 = 1787637179U;

	t82 = ((x1881<<(x1882%x1883))%x1884);

	if (t82 != 2080768U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x1885 = UINT8_MAX;
	uint8_t x1886 = 1U;
	static uint16_t x1887 = UINT16_MAX;
	int32_t t83 = 13266906;

	t83 = ((x1885<<(x1886%x1887))%x1888);

	if (t83 != 12) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1914 = 3;
	volatile uint16_t x1915 = 62U;
	uint32_t x1916 = UINT32_MAX;

	t84 = ((x1913<<(x1914%x1915))%x1916);

	if (t84 != 60176U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x1921 = UINT8_MAX;
	int8_t x1922 = 1;
	uint32_t x1924 = UINT32_MAX;

	t85 = ((x1921<<(x1922%x1923))%x1924);

	if (t85 != 510U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x1957 = UINT16_MAX;
	volatile uint16_t x1958 = 80U;
	volatile int8_t x1959 = -1;
	uint8_t x1960 = 2U;
	static int32_t t86 = -4297557;

	t86 = ((x1957<<(x1958%x1959))%x1960);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1993 = 251;
	uint8_t x1994 = 18U;
	volatile int16_t x1995 = INT16_MIN;
	int16_t x1996 = -220;
	volatile int32_t t87 = -747635;

	t87 = ((x1993<<(x1994%x1995))%x1996);

	if (t87 != 104) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x1997 = 84U;
	volatile uint8_t x1998 = 0U;
	static uint16_t x1999 = 69U;
	int16_t x2000 = INT16_MAX;
	volatile int32_t t88 = 151;

	t88 = ((x1997<<(x1998%x1999))%x2000);

	if (t88 != 84) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2002 = INT64_MAX;
	int64_t x2004 = 314245561429599LL;

	t89 = ((x2001<<(x2002%x2003))%x2004);

	if (t89 != 2560LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2010 = 18U;
	static volatile uint32_t t90 = 12632U;

	t90 = ((x2009<<(x2010%x2011))%x2012);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x2025 = UINT64_MAX;
	static int64_t x2026 = INT64_MIN;
	int32_t x2027 = -1;
	static volatile int8_t x2028 = INT8_MIN;

	t91 = ((x2025<<(x2026%x2027))%x2028);

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2029 = UINT32_MAX;
	static int8_t x2030 = INT8_MAX;
	uint8_t x2031 = 1U;

	t92 = ((x2029<<(x2030%x2031))%x2032);

	if (t92 != 4220607U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2057 = 35;
	uint8_t x2058 = 11U;
	uint64_t x2060 = UINT64_MAX;
	volatile uint64_t t93 = 2LLU;

	t93 = ((x2057<<(x2058%x2059))%x2060);

	if (t93 != 71680LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2093 = 35U;
	int16_t x2095 = -1;
	volatile uint64_t t94 = 25521614747LLU;

	t94 = ((x2093<<(x2094%x2095))%x2096);

	if (t94 != 35LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2101 = 2U;
	volatile int8_t x2104 = INT8_MIN;
	volatile int32_t t95 = -53;

	t95 = ((x2101<<(x2102%x2103))%x2104);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x2113 = 34U;
	int64_t x2114 = INT64_MAX;
	int64_t x2115 = -1LL;

	t96 = ((x2113<<(x2114%x2115))%x2116);

	if (t96 != 34) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x2121 = UINT8_MAX;
	uint8_t x2123 = 31U;
	static int16_t x2124 = INT16_MIN;
	int32_t t97 = 1;

	t97 = ((x2121<<(x2122%x2123))%x2124);

	if (t97 != 4080) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2141 = 4340LLU;
	static volatile uint64_t x2143 = UINT64_MAX;
	uint64_t x2144 = 193426882047221LLU;
	uint64_t t98 = 129778994351474LLU;

	t98 = ((x2141<<(x2142%x2143))%x2144);

	if (t98 != 8680LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2145 = 0;
	int32_t x2147 = INT32_MAX;
	volatile int8_t x2148 = INT8_MIN;
	volatile int32_t t99 = -466707;

	t99 = ((x2145<<(x2146%x2147))%x2148);

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

