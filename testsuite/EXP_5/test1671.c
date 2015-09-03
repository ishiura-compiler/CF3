#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x21 = INT8_MAX;
uint16_t x23 = UINT16_MAX;
int32_t x108 = 1;
volatile uint64_t t2 = 30795079497LLU;
uint32_t x144 = 2U;
static int32_t x242 = -44948460;
int8_t x257 = 23;
int8_t x267 = 3;
static int16_t x268 = 15;
uint16_t x361 = 11U;
int32_t x416 = 20;
volatile int64_t x774 = -1LL;
static int16_t x776 = 6;
uint32_t x844 = 15U;
int32_t t16 = 2077644;
int8_t x859 = INT8_MIN;
static int32_t t19 = 748039189;
int8_t x973 = INT8_MAX;
volatile int16_t x1051 = 0;
static int64_t x1129 = INT64_MAX;
int32_t x1130 = 5984439;
int8_t x1131 = -1;
static int32_t x1151 = INT32_MAX;
static uint64_t x1169 = UINT64_MAX;
volatile uint8_t x1205 = 3U;
uint8_t x1206 = 2U;
volatile int64_t x1241 = INT64_MAX;
volatile uint64_t x1301 = 1040423434911LLU;
static int64_t x1385 = INT64_MAX;
static uint32_t x1393 = UINT32_MAX;
int16_t x1575 = -1;
volatile uint8_t x1576 = 0U;
uint8_t x1648 = 10U;
int8_t x1751 = INT8_MAX;
uint64_t x2262 = 33371541LLU;
int8_t x2263 = INT8_MIN;
volatile int8_t x2337 = INT8_MAX;
volatile int64_t x2338 = -1LL;
uint8_t x2339 = UINT8_MAX;
int32_t x2495 = INT32_MAX;
volatile uint64_t t46 = 9643887LLU;
volatile int32_t t48 = 17382262;
uint64_t t52 = 12313LLU;
int32_t t53 = -120111747;
static uint16_t x2829 = 3153U;
volatile int8_t x2832 = 13;
static int64_t x3197 = INT64_MAX;
volatile uint8_t x3198 = UINT8_MAX;
int32_t x3246 = -42187153;
int32_t t59 = -465399;
uint64_t x3385 = 281107780LLU;
volatile uint64_t t60 = 5361LLU;
uint32_t x3469 = 660198U;
int32_t x3593 = 0;
uint16_t x3594 = UINT16_MAX;
volatile uint8_t x3596 = 3U;
uint8_t x3656 = 1U;
volatile int32_t x3843 = -1;
int32_t t66 = -193956;
uint32_t x4009 = UINT32_MAX;
int16_t x4011 = INT16_MIN;
static int8_t x4087 = 27;
static int8_t x4098 = 14;
volatile int8_t x4100 = 0;
static int32_t t70 = 125777605;
uint64_t t71 = 1338998307831LLU;
uint8_t x4144 = 1U;
int32_t t72 = 1789;
uint16_t x4188 = 1U;
int32_t t73 = 14;
volatile uint8_t x4220 = 15U;
uint64_t t75 = 562179323321LLU;
static uint64_t x4225 = 4452315415426LLU;
uint64_t t77 = 0LLU;
int64_t x4307 = INT64_MAX;
static uint8_t x4373 = 100U;
uint64_t x4374 = 198860516LLU;
int64_t x4381 = 1LL;
static volatile int32_t x4383 = -1;
static volatile uint16_t x4388 = 1U;
int32_t t83 = -27;
volatile int64_t x4482 = 108814640867LL;
static volatile int32_t x4483 = INT32_MIN;
int16_t x4494 = -1;
static uint64_t x4495 = 3241426646LLU;
static int64_t t89 = -3487988988827404191LL;
volatile int64_t x4688 = 0LL;
static int32_t t93 = -163735049;
uint8_t x4896 = 0U;
uint64_t x4943 = UINT64_MAX;
uint16_t x4951 = 35U;
int64_t x4990 = INT64_MAX;
int8_t x4992 = 6;
int32_t x5007 = INT32_MIN;


void f0(void) {
	uint8_t x22 = 19U;
	uint8_t x24 = 14U;
	int32_t t0 = 5088;

	t0 = (x21>>((x22<=x23)|x24));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x105 = 151LLU;
	volatile int8_t x106 = 0;
	uint8_t x107 = 3U;
	volatile uint64_t t1 = 250315617LLU;

	t1 = (x105>>((x106<=x107)|x108));

	if (t1 != 75LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x133 = 1207176901LLU;
	static int64_t x134 = INT64_MAX;
	int32_t x135 = 12;
	volatile uint8_t x136 = 16U;

	t2 = (x133>>((x134<=x135)|x136));

	if (t2 != 18420LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x141 = UINT32_MAX;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = UINT64_MAX;
	volatile uint32_t t3 = 117501U;

	t3 = (x141>>((x142<=x143)|x144));

	if (t3 != 536870911U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x225 = 680;
	uint32_t x226 = 54604930U;
	int64_t x227 = INT64_MIN;
	uint16_t x228 = 8U;
	volatile int32_t t4 = 10009;

	t4 = (x225>>((x226<=x227)|x228));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x243 = -11;
	uint16_t x244 = 1U;
	volatile int32_t t5 = 54;

	t5 = (x241>>((x242<=x243)|x244));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x258 = UINT8_MAX;
	int32_t x259 = INT32_MIN;
	static uint8_t x260 = 0U;
	int32_t t6 = -7796;

	t6 = (x257>>((x258<=x259)|x260));

	if (t6 != 23) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x265 = 453725983995258LLU;
	static int8_t x266 = INT8_MIN;
	volatile uint64_t t7 = 846LLU;

	t7 = (x265>>((x266<=x267)|x268));

	if (t7 != 13846618163LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x269 = UINT32_MAX;
	static int64_t x270 = INT64_MAX;
	static volatile uint8_t x271 = UINT8_MAX;
	volatile uint8_t x272 = 6U;
	volatile uint32_t t8 = 1067333920U;

	t8 = (x269>>((x270<=x271)|x272));

	if (t8 != 67108863U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x362 = 98LLU;
	int16_t x363 = 39;
	static volatile int8_t x364 = 5;
	int32_t t9 = -257396957;

	t9 = (x361>>((x362<=x363)|x364));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x413 = INT16_MAX;
	int64_t x414 = INT64_MAX;
	static volatile uint16_t x415 = 3738U;
	static volatile int32_t t10 = -428;

	t10 = (x413>>((x414<=x415)|x416));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x433 = INT64_MAX;
	static volatile int32_t x434 = INT32_MAX;
	uint64_t x435 = 2006605LLU;
	static uint32_t x436 = 22U;
	int64_t t11 = -2046653191003LL;

	t11 = (x433>>((x434<=x435)|x436));

	if (t11 != 2199023255551LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x621 = 2U;
	int16_t x622 = INT16_MAX;
	int64_t x623 = 9730197369LL;
	uint8_t x624 = 31U;
	static volatile int32_t t12 = 239;

	t12 = (x621>>((x622<=x623)|x624));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x661 = INT32_MAX;
	int8_t x662 = -4;
	int16_t x663 = -83;
	uint32_t x664 = 2U;
	int32_t t13 = 3085787;

	t13 = (x661>>((x662<=x663)|x664));

	if (t13 != 536870911) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x669 = 31199429620LLU;
	int8_t x670 = -1;
	uint16_t x671 = 0U;
	uint8_t x672 = 29U;
	uint64_t t14 = 22LLU;

	t14 = (x669>>((x670<=x671)|x672));

	if (t14 != 58LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x773 = UINT16_MAX;
	int64_t x775 = -9729578916LL;
	int32_t t15 = 1025138;

	t15 = (x773>>((x774<=x775)|x776));

	if (t15 != 1023) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x841 = 2415;
	int64_t x842 = -25543371931LL;
	volatile int32_t x843 = 114;

	t16 = (x841>>((x842<=x843)|x844));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x857 = INT8_MAX;
	uint64_t x858 = 4815LLU;
	int16_t x860 = 0;
	int32_t t17 = 792371547;

	t17 = (x857>>((x858<=x859)|x860));

	if (t17 != 63) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x897 = 2139291378421899LLU;
	int16_t x898 = INT16_MAX;
	static volatile uint8_t x899 = 26U;
	volatile uint32_t x900 = 1U;
	volatile uint64_t t18 = 597815593LLU;

	t18 = (x897>>((x898<=x899)|x900));

	if (t18 != 1069645689210949LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x969 = UINT16_MAX;
	int32_t x970 = INT32_MIN;
	uint32_t x971 = 1415243U;
	volatile int8_t x972 = 27;

	t19 = (x969>>((x970<=x971)|x972));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x974 = UINT16_MAX;
	uint8_t x975 = UINT8_MAX;
	volatile int8_t x976 = 26;
	static volatile int32_t t20 = -247;

	t20 = (x973>>((x974<=x975)|x976));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x985 = 9;
	int64_t x986 = -1411468LL;
	uint8_t x987 = 7U;
	static int16_t x988 = 0;
	volatile int32_t t21 = 22701;

	t21 = (x985>>((x986<=x987)|x988));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1049 = UINT16_MAX;
	volatile int8_t x1050 = 0;
	volatile uint8_t x1052 = 0U;
	int32_t t22 = 151;

	t22 = (x1049>>((x1050<=x1051)|x1052));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1132 = 1;
	volatile int64_t t23 = -13LL;

	t23 = (x1129>>((x1130<=x1131)|x1132));

	if (t23 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1149 = 0;
	static int32_t x1150 = 3904484;
	int16_t x1152 = 1;
	int32_t t24 = -863390903;

	t24 = (x1149>>((x1150<=x1151)|x1152));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1157 = 5;
	int32_t x1158 = 1428;
	volatile uint64_t x1159 = 22359541145850LLU;
	static uint8_t x1160 = 18U;
	static volatile int32_t t25 = -966692676;

	t25 = (x1157>>((x1158<=x1159)|x1160));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1170 = 21047994U;
	int64_t x1171 = INT64_MAX;
	uint8_t x1172 = 23U;
	volatile uint64_t t26 = 17649436667492306LLU;

	t26 = (x1169>>((x1170<=x1171)|x1172));

	if (t26 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1207 = 568636468093820LLU;
	volatile uint8_t x1208 = 0U;
	int32_t t27 = 806230;

	t27 = (x1205>>((x1206<=x1207)|x1208));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1242 = INT16_MIN;
	int8_t x1243 = -1;
	static uint8_t x1244 = 5U;
	int64_t t28 = 6169LL;

	t28 = (x1241>>((x1242<=x1243)|x1244));

	if (t28 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1302 = 57;
	uint8_t x1303 = 1U;
	static int64_t x1304 = 29LL;
	volatile uint64_t t29 = 10245059708380LLU;

	t29 = (x1301>>((x1302<=x1303)|x1304));

	if (t29 != 1937LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1386 = INT8_MIN;
	static int8_t x1387 = INT8_MIN;
	uint32_t x1388 = 1U;
	int64_t t30 = 1592036541LL;

	t30 = (x1385>>((x1386<=x1387)|x1388));

	if (t30 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x1394 = 1;
	uint16_t x1395 = 589U;
	uint8_t x1396 = 1U;
	volatile uint32_t t31 = 84U;

	t31 = (x1393>>((x1394<=x1395)|x1396));

	if (t31 != 2147483647U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1437 = 950U;
	int16_t x1438 = INT16_MIN;
	static volatile uint8_t x1439 = UINT8_MAX;
	uint16_t x1440 = 9U;
	static volatile uint32_t t32 = 505895736U;

	t32 = (x1437>>((x1438<=x1439)|x1440));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1573 = UINT16_MAX;
	uint32_t x1574 = 53895666U;
	volatile int32_t t33 = -19;

	t33 = (x1573>>((x1574<=x1575)|x1576));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1645 = 86626LL;
	int8_t x1646 = INT8_MIN;
	uint32_t x1647 = 153U;
	int64_t t34 = 7873535634246433LL;

	t34 = (x1645>>((x1646<=x1647)|x1648));

	if (t34 != 84LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1701 = 39;
	int8_t x1702 = INT8_MIN;
	int64_t x1703 = -8090284924616419LL;
	static int8_t x1704 = 1;
	volatile int32_t t35 = -497129;

	t35 = (x1701>>((x1702<=x1703)|x1704));

	if (t35 != 19) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1745 = 2U;
	volatile int64_t x1746 = -1109541LL;
	uint32_t x1747 = 236499857U;
	uint16_t x1748 = 11U;
	volatile uint32_t t36 = 9727371U;

	t36 = (x1745>>((x1746<=x1747)|x1748));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1749 = 101U;
	uint8_t x1750 = 9U;
	volatile uint8_t x1752 = 6U;
	volatile int32_t t37 = 634356095;

	t37 = (x1749>>((x1750<=x1751)|x1752));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1809 = UINT64_MAX;
	volatile uint16_t x1810 = 797U;
	volatile int16_t x1811 = INT16_MIN;
	int8_t x1812 = 0;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x1809>>((x1810<=x1811)|x1812));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1953 = UINT8_MAX;
	int64_t x1954 = -1LL;
	static int32_t x1955 = INT32_MAX;
	uint64_t x1956 = 0LLU;
	int32_t t39 = 31137685;

	t39 = (x1953>>((x1954<=x1955)|x1956));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x2005 = 28U;
	uint8_t x2006 = 15U;
	static uint64_t x2007 = UINT64_MAX;
	int8_t x2008 = 3;
	static int32_t t40 = 96;

	t40 = (x2005>>((x2006<=x2007)|x2008));

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2261 = INT32_MAX;
	int16_t x2264 = 0;
	int32_t t41 = -91;

	t41 = (x2261>>((x2262<=x2263)|x2264));

	if (t41 != 1073741823) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2340 = 0;
	volatile int32_t t42 = -175448510;

	t42 = (x2337>>((x2338<=x2339)|x2340));

	if (t42 != 63) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2357 = INT32_MAX;
	int32_t x2358 = 1;
	int16_t x2359 = -32;
	uint8_t x2360 = 0U;
	int32_t t43 = INT32_MAX;

	t43 = (x2357>>((x2358<=x2359)|x2360));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2449 = 33265145LLU;
	static int8_t x2450 = INT8_MAX;
	static int64_t x2451 = 61641810LL;
	volatile int8_t x2452 = 58;
	volatile uint64_t t44 = 408268229700348LLU;

	t44 = (x2449>>((x2450<=x2451)|x2452));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2465 = INT64_MAX;
	int64_t x2466 = -1842309398LL;
	int16_t x2467 = 0;
	int8_t x2468 = 12;
	volatile int64_t t45 = 147065403419LL;

	t45 = (x2465>>((x2466<=x2467)|x2468));

	if (t45 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2493 = 633LLU;
	int16_t x2494 = -1;
	volatile uint32_t x2496 = 0U;

	t46 = (x2493>>((x2494<=x2495)|x2496));

	if (t46 != 316LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2521 = 4076LL;
	int8_t x2522 = -1;
	static int16_t x2523 = 1;
	int32_t x2524 = 48;
	int64_t t47 = -4707LL;

	t47 = (x2521>>((x2522<=x2523)|x2524));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2609 = 15;
	uint32_t x2610 = 1752713071U;
	int8_t x2611 = INT8_MAX;
	static uint16_t x2612 = 2U;

	t48 = (x2609>>((x2610<=x2611)|x2612));

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x2633 = INT16_MAX;
	volatile int16_t x2634 = 0;
	uint64_t x2635 = 576004158LLU;
	int8_t x2636 = 1;
	int32_t t49 = 969942458;

	t49 = (x2633>>((x2634<=x2635)|x2636));

	if (t49 != 16383) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2673 = 29U;
	uint64_t x2674 = 66325615LLU;
	uint64_t x2675 = 841759579LLU;
	static uint16_t x2676 = 11U;
	int32_t t50 = -8246724;

	t50 = (x2673>>((x2674<=x2675)|x2676));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2677 = 43U;
	int32_t x2678 = -1;
	static int32_t x2679 = -1;
	static uint8_t x2680 = 21U;
	static int32_t t51 = 1432;

	t51 = (x2677>>((x2678<=x2679)|x2680));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2733 = 126146903521892LLU;
	volatile int32_t x2734 = 39;
	volatile int64_t x2735 = -1LL;
	static uint64_t x2736 = 1LLU;

	t52 = (x2733>>((x2734<=x2735)|x2736));

	if (t52 != 63073451760946LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2797 = 2U;
	volatile int32_t x2798 = INT32_MAX;
	uint32_t x2799 = 42443762U;
	uint8_t x2800 = 31U;

	t53 = (x2797>>((x2798<=x2799)|x2800));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2830 = -4;
	uint64_t x2831 = 35LLU;
	int32_t t54 = -306287;

	t54 = (x2829>>((x2830<=x2831)|x2832));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2917 = UINT16_MAX;
	volatile int16_t x2918 = INT16_MAX;
	volatile int64_t x2919 = 55216394874LL;
	static uint8_t x2920 = 4U;
	volatile int32_t t55 = 14283720;

	t55 = (x2917>>((x2918<=x2919)|x2920));

	if (t55 != 2047) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3097 = 341281LLU;
	int32_t x3098 = INT32_MIN;
	int8_t x3099 = -1;
	uint16_t x3100 = 6U;
	volatile uint64_t t56 = 94321952LLU;

	t56 = (x3097>>((x3098<=x3099)|x3100));

	if (t56 != 2666LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3137 = UINT32_MAX;
	int64_t x3138 = 221633474LL;
	uint16_t x3139 = 18661U;
	int16_t x3140 = 0;
	static volatile uint32_t t57 = UINT32_MAX;

	t57 = (x3137>>((x3138<=x3139)|x3140));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3199 = -1;
	uint8_t x3200 = 3U;
	int64_t t58 = 22080497838LL;

	t58 = (x3197>>((x3198<=x3199)|x3200));

	if (t58 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3245 = 122U;
	uint32_t x3247 = 1873944182U;
	uint16_t x3248 = 20U;

	t59 = (x3245>>((x3246<=x3247)|x3248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3386 = -17;
	volatile int16_t x3387 = -1;
	volatile uint8_t x3388 = 3U;

	t60 = (x3385>>((x3386<=x3387)|x3388));

	if (t60 != 35138472LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x3457 = 46U;
	static uint64_t x3458 = UINT64_MAX;
	int64_t x3459 = 7656195841299LL;
	volatile uint16_t x3460 = 22U;
	volatile int32_t t61 = -238695;

	t61 = (x3457>>((x3458<=x3459)|x3460));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3470 = -26;
	int32_t x3471 = INT32_MIN;
	volatile int16_t x3472 = 1;
	volatile uint32_t t62 = 11966034U;

	t62 = (x3469>>((x3470<=x3471)|x3472));

	if (t62 != 330099U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x3569 = INT64_MAX;
	static volatile uint16_t x3570 = 11830U;
	int64_t x3571 = INT64_MIN;
	int8_t x3572 = 9;
	int64_t t63 = -99LL;

	t63 = (x3569>>((x3570<=x3571)|x3572));

	if (t63 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3595 = 3986;
	volatile int32_t t64 = 2;

	t64 = (x3593>>((x3594<=x3595)|x3596));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3653 = UINT8_MAX;
	int8_t x3654 = INT8_MIN;
	volatile int64_t x3655 = -1LL;
	volatile int32_t t65 = -525983733;

	t65 = (x3653>>((x3654<=x3655)|x3656));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3841 = 17;
	volatile uint32_t x3842 = 556893U;
	uint8_t x3844 = 11U;

	t66 = (x3841>>((x3842<=x3843)|x3844));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4010 = INT8_MIN;
	uint32_t x4012 = 26U;
	uint32_t t67 = 7464998U;

	t67 = (x4009>>((x4010<=x4011)|x4012));

	if (t67 != 63U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4065 = 1U;
	int8_t x4066 = -1;
	uint16_t x4067 = UINT16_MAX;
	volatile uint8_t x4068 = 2U;
	int32_t t68 = -64441;

	t68 = (x4065>>((x4066<=x4067)|x4068));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4085 = UINT64_MAX;
	uint8_t x4086 = 110U;
	uint8_t x4088 = 2U;
	uint64_t t69 = 3999925285132694LLU;

	t69 = (x4085>>((x4086<=x4087)|x4088));

	if (t69 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x4097 = 59;
	uint32_t x4099 = 560955U;

	t70 = (x4097>>((x4098<=x4099)|x4100));

	if (t70 != 29) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4129 = 9917060251430019LLU;
	int32_t x4130 = INT32_MIN;
	int16_t x4131 = 1;
	uint8_t x4132 = 6U;

	t71 = (x4129>>((x4130<=x4131)|x4132));

	if (t71 != 77477033214297LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4141 = 9U;
	int8_t x4142 = INT8_MIN;
	volatile int16_t x4143 = -1;

	t72 = (x4141>>((x4142<=x4143)|x4144));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4185 = UINT16_MAX;
	int8_t x4186 = -1;
	static volatile int8_t x4187 = 0;

	t73 = (x4185>>((x4186<=x4187)|x4188));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x4209 = 1625LLU;
	int32_t x4210 = 43;
	uint32_t x4211 = UINT32_MAX;
	int8_t x4212 = 4;
	static volatile uint64_t t74 = 146187691757LLU;

	t74 = (x4209>>((x4210<=x4211)|x4212));

	if (t74 != 50LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4217 = UINT64_MAX;
	int64_t x4218 = INT64_MIN;
	volatile int8_t x4219 = -63;

	t75 = (x4217>>((x4218<=x4219)|x4220));

	if (t75 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4226 = INT8_MIN;
	static uint64_t x4227 = UINT64_MAX;
	uint16_t x4228 = 27U;
	volatile uint64_t t76 = 219440LLU;

	t76 = (x4225>>((x4226<=x4227)|x4228));

	if (t76 != 33172LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4245 = 33447362LLU;
	uint64_t x4246 = 171062LLU;
	uint64_t x4247 = 109551LLU;
	uint32_t x4248 = 17U;

	t77 = (x4245>>((x4246<=x4247)|x4248));

	if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x4305 = INT8_MAX;
	int8_t x4306 = INT8_MAX;
	uint8_t x4308 = 11U;
	int32_t t78 = 61654;

	t78 = (x4305>>((x4306<=x4307)|x4308));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4375 = 2;
	int16_t x4376 = 12;
	int32_t t79 = -442663;

	t79 = (x4373>>((x4374<=x4375)|x4376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x4382 = 62LLU;
	uint32_t x4384 = 20U;
	volatile int64_t t80 = -1LL;

	t80 = (x4381>>((x4382<=x4383)|x4384));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4385 = 290623U;
	static int32_t x4386 = INT32_MIN;
	uint8_t x4387 = 33U;
	volatile uint32_t t81 = 965300087U;

	t81 = (x4385>>((x4386<=x4387)|x4388));

	if (t81 != 145311U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4397 = 3548802360LL;
	uint8_t x4398 = 1U;
	int64_t x4399 = INT64_MIN;
	int16_t x4400 = 0;
	int64_t t82 = -461833136061226260LL;

	t82 = (x4397>>((x4398<=x4399)|x4400));

	if (t82 != 3548802360LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4421 = 12U;
	static uint16_t x4422 = 2U;
	uint16_t x4423 = 1272U;
	static volatile int8_t x4424 = 1;

	t83 = (x4421>>((x4422<=x4423)|x4424));

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x4481 = INT32_MAX;
	static uint8_t x4484 = 3U;
	static int32_t t84 = 22276999;

	t84 = (x4481>>((x4482<=x4483)|x4484));

	if (t84 != 268435455) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x4493 = UINT16_MAX;
	int16_t x4496 = 21;
	int32_t t85 = 146394;

	t85 = (x4493>>((x4494<=x4495)|x4496));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4501 = 19753U;
	int16_t x4502 = INT16_MAX;
	volatile uint8_t x4503 = 5U;
	int32_t x4504 = 0;
	volatile int32_t t86 = -4406;

	t86 = (x4501>>((x4502<=x4503)|x4504));

	if (t86 != 19753) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x4541 = 161715032058573LL;
	static int8_t x4542 = INT8_MAX;
	static int16_t x4543 = -107;
	uint16_t x4544 = 1U;
	volatile int64_t t87 = -6731LL;

	t87 = (x4541>>((x4542<=x4543)|x4544));

	if (t87 != 80857516029286LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x4585 = 3U;
	static uint64_t x4586 = 10531444209490LLU;
	int8_t x4587 = -1;
	uint8_t x4588 = 20U;
	int32_t t88 = -136564;

	t88 = (x4585>>((x4586<=x4587)|x4588));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4629 = 6433148570LL;
	uint64_t x4630 = 4852LLU;
	volatile int64_t x4631 = INT64_MIN;
	static int32_t x4632 = 0;

	t89 = (x4629>>((x4630<=x4631)|x4632));

	if (t89 != 3216574285LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x4653 = 28362LLU;
	uint32_t x4654 = 839U;
	static volatile uint16_t x4655 = 236U;
	volatile uint16_t x4656 = 1U;
	uint64_t t90 = 299204LLU;

	t90 = (x4653>>((x4654<=x4655)|x4656));

	if (t90 != 14181LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x4685 = INT64_MAX;
	static int64_t x4686 = INT64_MIN;
	int8_t x4687 = INT8_MAX;
	volatile int64_t t91 = 4791999823673LL;

	t91 = (x4685>>((x4686<=x4687)|x4688));

	if (t91 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4701 = 25605U;
	int64_t x4702 = INT64_MIN;
	uint16_t x4703 = 438U;
	static int32_t x4704 = 10;
	static int32_t t92 = -54895888;

	t92 = (x4701>>((x4702<=x4703)|x4704));

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4869 = 0;
	int32_t x4870 = 1;
	uint32_t x4871 = 18992U;
	uint8_t x4872 = 20U;

	t93 = (x4869>>((x4870<=x4871)|x4872));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x4893 = 58U;
	uint16_t x4894 = 27457U;
	volatile int64_t x4895 = 0LL;
	volatile int32_t t94 = 1719;

	t94 = (x4893>>((x4894<=x4895)|x4896));

	if (t94 != 58) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x4905 = 939U;
	int8_t x4906 = INT8_MAX;
	volatile int32_t x4907 = 15;
	volatile int16_t x4908 = 23;
	volatile uint32_t t95 = 252315138U;

	t95 = (x4905>>((x4906<=x4907)|x4908));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x4941 = INT64_MAX;
	int8_t x4942 = -26;
	int64_t x4944 = 0LL;
	volatile int64_t t96 = -38368315017LL;

	t96 = (x4941>>((x4942<=x4943)|x4944));

	if (t96 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4949 = 31853647101LLU;
	uint16_t x4950 = UINT16_MAX;
	volatile int8_t x4952 = 5;
	volatile uint64_t t97 = 145LLU;

	t97 = (x4949>>((x4950<=x4951)|x4952));

	if (t97 != 995426471LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4989 = INT8_MAX;
	static volatile uint32_t x4991 = UINT32_MAX;
	static int32_t t98 = 74531;

	t98 = (x4989>>((x4990<=x4991)|x4992));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x5005 = INT16_MAX;
	static uint32_t x5006 = 995376295U;
	static uint8_t x5008 = 1U;
	volatile int32_t t99 = -570871;

	t99 = (x5005>>((x5006<=x5007)|x5008));

	if (t99 != 16383) { NG(); } else { ; }
	
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

