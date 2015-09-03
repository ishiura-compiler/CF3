#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x37 = INT16_MAX;
volatile int8_t x158 = -7;
uint64_t x159 = UINT64_MAX;
uint64_t x178 = UINT64_MAX;
int32_t x205 = INT32_MIN;
static uint32_t x207 = UINT32_MAX;
int16_t x208 = 0;
int64_t t6 = 834749029LL;
int8_t x632 = 1;
int8_t x849 = INT8_MAX;
static uint16_t x851 = 1U;
uint8_t x859 = UINT8_MAX;
int32_t x860 = 1;
static int64_t x1002 = INT64_MIN;
volatile uint32_t x1064 = 4U;
static volatile int8_t x1069 = 15;
static volatile int64_t x1070 = INT64_MIN;
uint64_t x1071 = 23678625831487539LLU;
uint64_t x1097 = 135009488282LLU;
volatile uint64_t t15 = 75022312528133322LLU;
static uint32_t x1135 = 1592U;
volatile int64_t t17 = -88003211892109LL;
uint64_t x1248 = 26LLU;
volatile int64_t t18 = -134737430LL;
uint8_t x1291 = UINT8_MAX;
static volatile int64_t t19 = 552401341003580255LL;
uint16_t x1353 = UINT16_MAX;
int8_t x1356 = 12;
volatile int64_t t21 = 74253808LL;
static int64_t x1412 = 0LL;
int8_t x1485 = -1;
static uint16_t x1487 = 1247U;
uint32_t x1555 = 1U;
volatile int64_t x1579 = INT64_MAX;
uint16_t x1694 = UINT16_MAX;
int16_t x1748 = 4;
int32_t t31 = 0;
uint32_t x1749 = 389U;
int8_t x1750 = INT8_MIN;
static uint16_t x1751 = 50U;
uint16_t x1804 = 29U;
uint8_t x1912 = 0U;
int64_t x1986 = -1LL;
int16_t x2207 = INT16_MAX;
volatile uint64_t t38 = 108361247LLU;
uint16_t x2356 = 19U;
uint64_t t40 = 78LLU;
volatile int64_t t41 = -10650920978LL;
int8_t x2666 = INT8_MIN;
uint8_t x2668 = 22U;
volatile uint64_t t45 = 78547LLU;
int32_t x2690 = -1;
int8_t x2692 = 3;
volatile uint32_t x2724 = 2U;
int32_t x2762 = -1;
volatile uint16_t x2921 = 0U;
static volatile uint32_t x3047 = UINT32_MAX;
int64_t x3167 = INT64_MAX;
uint32_t x3181 = 140353U;
volatile int32_t t54 = 297545;
volatile uint16_t x3317 = 1930U;
int8_t x3320 = 0;
static int32_t x3358 = INT32_MAX;
uint64_t x3409 = UINT64_MAX;
uint16_t x3411 = 1U;
static uint64_t x3465 = 6821081859083410LLU;
uint32_t x3639 = UINT32_MAX;
static volatile uint32_t t60 = 920267U;
uint16_t x3666 = 14856U;
volatile int32_t t61 = 827591;
int16_t x3691 = 57;
int32_t x3692 = 6;
int32_t t62 = -816;
int8_t x3741 = 0;
static int8_t x4056 = 12;
volatile uint64_t x4121 = UINT64_MAX;
volatile int8_t x4153 = -17;
volatile uint64_t t70 = 138826LLU;
volatile int16_t x4180 = 49;
int64_t x4198 = -1LL;
int16_t x4226 = INT16_MIN;
static int8_t x4228 = 10;
volatile int32_t x4462 = 79324;
static int16_t x4587 = INT16_MAX;
uint32_t x4608 = 0U;
int8_t x4652 = 9;
volatile uint64_t t79 = 170257537206891310LLU;
static int16_t x4726 = INT16_MIN;
int64_t x4941 = -23349000414LL;
uint64_t t86 = 13266387LLU;
volatile int32_t t87 = INT32_MIN;
static int32_t t89 = -4;
uint8_t x5180 = 10U;
volatile uint32_t x5217 = UINT32_MAX;
volatile int16_t x5220 = 3;
static volatile uint16_t x5562 = UINT16_MAX;
int32_t x5570 = INT32_MAX;
static int32_t x5572 = 0;
volatile int32_t t98 = -33167;


void f0(void) {
	uint8_t x38 = 29U;
	uint8_t x39 = UINT8_MAX;
	uint64_t x40 = 7LLU;
	volatile int32_t t0 = -7;

	t0 = ((x37%x38)-(x39>>x40));

	if (t0 != 25) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x145 = UINT32_MAX;
	volatile uint64_t x146 = 2333LLU;
	uint16_t x147 = UINT16_MAX;
	volatile int16_t x148 = 0;
	uint64_t t1 = 17157277593LLU;

	t1 = ((x145%x146)-(x147>>x148));

	if (t1 != 18446744073709486697LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x157 = 8152386261992LL;
	int8_t x160 = 4;
	volatile uint64_t t2 = 14217569LLU;

	t2 = ((x157%x158)-(x159>>x160));

	if (t2 != 17293822569102704641LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x177 = INT8_MIN;
	int16_t x179 = INT16_MAX;
	int16_t x180 = 1;
	volatile uint64_t t3 = 107582LLU;

	t3 = ((x177%x178)-(x179>>x180));

	if (t3 != 18446744073709535105LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x206 = INT8_MAX;
	uint32_t t4 = 108097U;

	t4 = ((x205%x206)-(x207>>x208));

	if (t4 != 4294967289U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x333 = -1;
	int8_t x334 = INT8_MAX;
	static int8_t x335 = INT8_MAX;
	int8_t x336 = 1;
	int32_t t5 = -5309858;

	t5 = ((x333%x334)-(x335>>x336));

	if (t5 != -64) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x517 = -105192898LL;
	int8_t x518 = -1;
	int64_t x519 = 80980191LL;
	uint32_t x520 = 3U;

	t6 = ((x517%x518)-(x519>>x520));

	if (t6 != -10122523LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x629 = -1;
	int32_t x630 = INT32_MIN;
	volatile int16_t x631 = INT16_MAX;
	int32_t t7 = 476;

	t7 = ((x629%x630)-(x631>>x632));

	if (t7 != -16384) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x850 = 3243U;
	static uint64_t x852 = 23LLU;
	int32_t t8 = -48;

	t8 = ((x849%x850)-(x851>>x852));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x857 = UINT8_MAX;
	static int64_t x858 = INT64_MIN;
	volatile int64_t t9 = 3LL;

	t9 = ((x857%x858)-(x859>>x860));

	if (t9 != 128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x1001 = INT64_MAX;
	int64_t x1003 = INT64_MAX;
	uint64_t x1004 = 15LLU;
	int64_t t10 = 768035932528786LL;

	t10 = ((x1001%x1002)-(x1003>>x1004));

	if (t10 != 9223090561878065152LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x1045 = INT16_MAX;
	int8_t x1046 = INT8_MAX;
	volatile uint64_t x1047 = 339LLU;
	volatile int8_t x1048 = 1;
	static uint64_t t11 = 8321316790LLU;

	t11 = ((x1045%x1046)-(x1047>>x1048));

	if (t11 != 18446744073709551448LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1061 = -58;
	int8_t x1062 = 18;
	uint64_t x1063 = 29581LLU;
	volatile uint64_t t12 = 38201145LLU;

	t12 = ((x1061%x1062)-(x1063>>x1064));

	if (t12 != 18446744073709549764LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1072 = 48;
	static uint64_t t13 = 52413343730LLU;

	t13 = ((x1069%x1070)-(x1071>>x1072));

	if (t13 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x1085 = 1LLU;
	uint16_t x1086 = 9U;
	uint64_t x1087 = 290511LLU;
	volatile uint8_t x1088 = 29U;
	volatile uint64_t t14 = 30LLU;

	t14 = ((x1085%x1086)-(x1087>>x1088));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1098 = 7;
	uint64_t x1099 = 20278074101LLU;
	static uint32_t x1100 = 0U;

	t15 = ((x1097%x1098)-(x1099>>x1100));

	if (t15 != 18446744053431477519LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1133 = INT32_MAX;
	uint64_t x1134 = 802573694170904645LLU;
	int8_t x1136 = 9;
	static volatile uint64_t t16 = 381133742121LLU;

	t16 = ((x1133%x1134)-(x1135>>x1136));

	if (t16 != 2147483644LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1201 = -1LL;
	volatile int8_t x1202 = INT8_MAX;
	int8_t x1203 = INT8_MAX;
	static uint8_t x1204 = 9U;

	t17 = ((x1201%x1202)-(x1203>>x1204));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1245 = UINT8_MAX;
	static int64_t x1246 = INT64_MAX;
	static uint8_t x1247 = 85U;

	t18 = ((x1245%x1246)-(x1247>>x1248));

	if (t18 != 255LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1289 = INT8_MIN;
	int64_t x1290 = -1LL;
	static uint8_t x1292 = 0U;

	t19 = ((x1289%x1290)-(x1291>>x1292));

	if (t19 != -255LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1354 = INT16_MIN;
	uint16_t x1355 = 5U;
	int32_t t20 = 388577;

	t20 = ((x1353%x1354)-(x1355>>x1356));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1385 = 2;
	static int64_t x1386 = -110918962744148LL;
	volatile uint32_t x1387 = 1752521460U;
	static int32_t x1388 = 14;

	t21 = ((x1385%x1386)-(x1387>>x1388));

	if (t21 != -106963LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1409 = INT32_MAX;
	static int8_t x1410 = INT8_MIN;
	uint32_t x1411 = 85295U;
	uint32_t t22 = 4674901U;

	t22 = ((x1409%x1410)-(x1411>>x1412));

	if (t22 != 4294882128U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1437 = -1LL;
	int32_t x1438 = INT32_MIN;
	uint64_t x1439 = 1156422117094092LLU;
	int8_t x1440 = 1;
	static uint64_t t23 = 416611126LLU;

	t23 = ((x1437%x1438)-(x1439>>x1440));

	if (t23 != 18446165862651004569LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1453 = 28;
	int32_t x1454 = -1;
	static uint64_t x1455 = UINT64_MAX;
	volatile int32_t x1456 = 3;
	volatile uint64_t t24 = 241876668670610224LLU;

	t24 = ((x1453%x1454)-(x1455>>x1456));

	if (t24 != 16140901064495857665LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1486 = -1;
	int32_t x1488 = 1;
	int32_t t25 = 232857;

	t25 = ((x1485%x1486)-(x1487>>x1488));

	if (t25 != -623) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1505 = 5204U;
	volatile int32_t x1506 = 59864;
	uint8_t x1507 = UINT8_MAX;
	static volatile int8_t x1508 = 9;
	volatile int32_t t26 = -214;

	t26 = ((x1505%x1506)-(x1507>>x1508));

	if (t26 != 5204) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1553 = -8;
	int64_t x1554 = -135787216LL;
	uint8_t x1556 = 2U;
	volatile int64_t t27 = -26LL;

	t27 = ((x1553%x1554)-(x1555>>x1556));

	if (t27 != -8LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1577 = UINT64_MAX;
	uint8_t x1578 = 95U;
	static uint8_t x1580 = 2U;
	volatile uint64_t t28 = 989242781034784LLU;

	t28 = ((x1577%x1578)-(x1579>>x1580));

	if (t28 != 16140901064495857700LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1657 = INT16_MAX;
	volatile int64_t x1658 = INT64_MIN;
	static volatile uint32_t x1659 = 151U;
	uint16_t x1660 = 1U;
	int64_t t29 = -11121038069343LL;

	t29 = ((x1657%x1658)-(x1659>>x1660));

	if (t29 != 32692LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x1693 = 122033U;
	int64_t x1695 = 31304876734594628LL;
	uint8_t x1696 = 16U;
	int64_t t30 = 21LL;

	t30 = ((x1693%x1694)-(x1695>>x1696));

	if (t30 != -477674454222LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1745 = INT8_MAX;
	int16_t x1746 = INT16_MIN;
	uint16_t x1747 = 11193U;

	t31 = ((x1745%x1746)-(x1747>>x1748));

	if (t31 != -572) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1752 = 0U;
	volatile uint32_t t32 = 5894U;

	t32 = ((x1749%x1750)-(x1751>>x1752));

	if (t32 != 339U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1801 = INT16_MIN;
	static int16_t x1802 = INT16_MAX;
	static uint8_t x1803 = 12U;
	int32_t t33 = -571400;

	t33 = ((x1801%x1802)-(x1803>>x1804));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x1885 = -54;
	int16_t x1886 = -1;
	uint8_t x1887 = 0U;
	uint16_t x1888 = 9U;
	volatile int32_t t34 = -328125399;

	t34 = ((x1885%x1886)-(x1887>>x1888));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1909 = 25224852;
	uint64_t x1910 = 120304500414LLU;
	volatile int8_t x1911 = INT8_MAX;
	static uint64_t t35 = 481349661312363515LLU;

	t35 = ((x1909%x1910)-(x1911>>x1912));

	if (t35 != 25224725LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1985 = -1;
	int16_t x1987 = 717;
	uint8_t x1988 = 0U;
	volatile int64_t t36 = -92163068LL;

	t36 = ((x1985%x1986)-(x1987>>x1988));

	if (t36 != -717LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2197 = -1;
	int16_t x2198 = INT16_MIN;
	int32_t x2199 = INT32_MAX;
	int16_t x2200 = 1;
	int32_t t37 = 5275636;

	t37 = ((x2197%x2198)-(x2199>>x2200));

	if (t37 != -1073741824) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2205 = -3;
	uint64_t x2206 = 2LLU;
	uint8_t x2208 = 1U;

	t38 = ((x2205%x2206)-(x2207>>x2208));

	if (t38 != 18446744073709535234LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2353 = 193154832LLU;
	int64_t x2354 = -152016063092LL;
	static int64_t x2355 = INT64_MAX;
	volatile uint64_t t39 = 1272079LLU;

	t39 = ((x2353%x2354)-(x2355>>x2356));

	if (t39 != 18446726481716662033LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2465 = UINT64_MAX;
	volatile int8_t x2466 = INT8_MAX;
	volatile int8_t x2467 = INT8_MAX;
	static uint16_t x2468 = 24U;

	t40 = ((x2465%x2466)-(x2467>>x2468));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2469 = INT8_MAX;
	volatile int16_t x2470 = INT16_MIN;
	int64_t x2471 = INT64_MAX;
	static volatile uint32_t x2472 = 0U;

	t41 = ((x2469%x2470)-(x2471>>x2472));

	if (t41 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2569 = 1353U;
	int16_t x2570 = INT16_MIN;
	volatile uint32_t x2571 = 352U;
	uint8_t x2572 = 25U;
	uint32_t t42 = 2417U;

	t42 = ((x2569%x2570)-(x2571>>x2572));

	if (t42 != 1353U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2637 = UINT16_MAX;
	int64_t x2638 = 19705476511LL;
	uint8_t x2639 = 7U;
	volatile uint16_t x2640 = 24U;
	int64_t t43 = 3845LL;

	t43 = ((x2637%x2638)-(x2639>>x2640));

	if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2645 = INT64_MIN;
	int64_t x2646 = -1LL;
	static int32_t x2647 = INT32_MAX;
	volatile uint16_t x2648 = 2U;
	static volatile int64_t t44 = 1LL;

	t44 = ((x2645%x2646)-(x2647>>x2648));

	if (t44 != -536870911LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2665 = 197U;
	volatile uint64_t x2667 = UINT64_MAX;

	t45 = ((x2665%x2666)-(x2667>>x2668));

	if (t45 != 18446739675663040582LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2689 = 19871222U;
	static volatile uint16_t x2691 = UINT16_MAX;
	static uint32_t t46 = 297935U;

	t46 = ((x2689%x2690)-(x2691>>x2692));

	if (t46 != 19863031U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x2721 = -1LL;
	int32_t x2722 = 2;
	uint16_t x2723 = 994U;
	volatile int64_t t47 = 1864526546404921016LL;

	t47 = ((x2721%x2722)-(x2723>>x2724));

	if (t47 != -249LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2761 = INT64_MAX;
	static uint64_t x2763 = 126114562460LLU;
	uint32_t x2764 = 15U;
	uint64_t t48 = 17168206554233119LLU;

	t48 = ((x2761%x2762)-(x2763>>x2764));

	if (t48 != 18446744073705702905LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2922 = UINT16_MAX;
	uint32_t x2923 = 6973U;
	uint8_t x2924 = 2U;
	uint32_t t49 = 23U;

	t49 = ((x2921%x2922)-(x2923>>x2924));

	if (t49 != 4294965553U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x3017 = INT8_MAX;
	static int64_t x3018 = -1679064LL;
	uint32_t x3019 = 41U;
	volatile uint8_t x3020 = 3U;
	static int64_t t50 = -39069595072247LL;

	t50 = ((x3017%x3018)-(x3019>>x3020));

	if (t50 != 122LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3045 = 25;
	int16_t x3046 = INT16_MAX;
	uint8_t x3048 = 12U;
	uint32_t t51 = 769617U;

	t51 = ((x3045%x3046)-(x3047>>x3048));

	if (t51 != 4293918746U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3165 = 0;
	static int64_t x3166 = INT64_MAX;
	uint8_t x3168 = 3U;
	int64_t t52 = -799776580081LL;

	t52 = ((x3165%x3166)-(x3167>>x3168));

	if (t52 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3182 = 15853U;
	int32_t x3183 = INT32_MAX;
	int8_t x3184 = 10;
	volatile uint32_t t53 = 338973U;

	t53 = ((x3181%x3182)-(x3183>>x3184));

	if (t53 != 4292883674U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3253 = -1;
	static int16_t x3254 = INT16_MAX;
	uint16_t x3255 = 167U;
	int16_t x3256 = 1;

	t54 = ((x3253%x3254)-(x3255>>x3256));

	if (t54 != -84) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3318 = UINT64_MAX;
	uint8_t x3319 = 0U;
	volatile uint64_t t55 = 1015987764LLU;

	t55 = ((x3317%x3318)-(x3319>>x3320));

	if (t55 != 1930LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3357 = 68U;
	volatile uint16_t x3359 = UINT16_MAX;
	static int32_t x3360 = 0;
	volatile int32_t t56 = 467274;

	t56 = ((x3357%x3358)-(x3359>>x3360));

	if (t56 != -65467) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3389 = INT64_MIN;
	static int32_t x3390 = INT32_MIN;
	volatile uint16_t x3391 = 2061U;
	uint8_t x3392 = 17U;
	int64_t t57 = -582LL;

	t57 = ((x3389%x3390)-(x3391>>x3392));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3410 = UINT64_MAX;
	uint8_t x3412 = 14U;
	volatile uint64_t t58 = 10LLU;

	t58 = ((x3409%x3410)-(x3411>>x3412));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x3466 = INT8_MIN;
	static volatile uint16_t x3467 = UINT16_MAX;
	int8_t x3468 = 14;
	volatile uint64_t t59 = 10984841259LLU;

	t59 = ((x3465%x3466)-(x3467>>x3468));

	if (t59 != 6821081859083407LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x3637 = 428;
	uint32_t x3638 = UINT32_MAX;
	int8_t x3640 = 11;

	t60 = ((x3637%x3638)-(x3639>>x3640));

	if (t60 != 4292870573U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3665 = -1;
	int32_t x3667 = INT32_MAX;
	uint16_t x3668 = 10U;

	t61 = ((x3665%x3666)-(x3667>>x3668));

	if (t61 != -2097152) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3689 = -1;
	int16_t x3690 = INT16_MIN;

	t62 = ((x3689%x3690)-(x3691>>x3692));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3742 = INT16_MAX;
	volatile uint64_t x3743 = UINT64_MAX;
	static int32_t x3744 = 7;
	uint64_t t63 = 3631200150371564LLU;

	t63 = ((x3741%x3742)-(x3743>>x3744));

	if (t63 != 18302628885633695745LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x3893 = INT32_MAX;
	static uint64_t x3894 = 15LLU;
	uint32_t x3895 = 10U;
	uint16_t x3896 = 2U;
	static uint64_t t64 = 380364321001414LLU;

	t64 = ((x3893%x3894)-(x3895>>x3896));

	if (t64 != 5LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3961 = 3U;
	uint8_t x3962 = 21U;
	int8_t x3963 = 7;
	uint16_t x3964 = 5U;
	int32_t t65 = -434395;

	t65 = ((x3961%x3962)-(x3963>>x3964));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x3977 = INT64_MAX;
	static uint64_t x3978 = 1593LLU;
	uint32_t x3979 = 283U;
	int64_t x3980 = 15LL;
	volatile uint64_t t66 = 2878366728394038LLU;

	t66 = ((x3977%x3978)-(x3979>>x3980));

	if (t66 != 916LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4053 = INT32_MIN;
	int16_t x4054 = INT16_MIN;
	volatile uint32_t x4055 = 941632901U;
	uint32_t t67 = 135U;

	t67 = ((x4053%x4054)-(x4055>>x4056));

	if (t67 != 4294737406U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4069 = INT64_MIN;
	uint32_t x4070 = UINT32_MAX;
	int16_t x4071 = 23;
	static volatile uint8_t x4072 = 0U;
	int64_t t68 = 12026972LL;

	t68 = ((x4069%x4070)-(x4071>>x4072));

	if (t68 != -2147483671LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4122 = INT16_MAX;
	uint16_t x4123 = 1U;
	uint8_t x4124 = 6U;
	uint64_t t69 = 24668346LLU;

	t69 = ((x4121%x4122)-(x4123>>x4124));

	if (t69 != 15LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x4154 = 21352LLU;
	static uint16_t x4155 = 26014U;
	int8_t x4156 = 8;

	t70 = ((x4153%x4154)-(x4155>>x4156));

	if (t70 != 2722LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4177 = INT64_MAX;
	int64_t x4178 = INT64_MAX;
	int64_t x4179 = INT64_MAX;
	static int64_t t71 = 62077699047842813LL;

	t71 = ((x4177%x4178)-(x4179>>x4180));

	if (t71 != -16383LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x4197 = INT16_MIN;
	static uint16_t x4199 = UINT16_MAX;
	volatile uint16_t x4200 = 26U;
	volatile int64_t t72 = 1502638310434LL;

	t72 = ((x4197%x4198)-(x4199>>x4200));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x4225 = -1570479051652033LL;
	int16_t x4227 = INT16_MAX;
	static int64_t t73 = 0LL;

	t73 = ((x4225%x4226)-(x4227>>x4228));

	if (t73 != -15328LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4457 = 7;
	int32_t x4458 = -1;
	uint64_t x4459 = 2320475LLU;
	uint16_t x4460 = 0U;
	uint64_t t74 = 18995891LLU;

	t74 = ((x4457%x4458)-(x4459>>x4460));

	if (t74 != 18446744073707231141LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4461 = INT16_MIN;
	uint16_t x4463 = UINT16_MAX;
	uint16_t x4464 = 0U;
	static volatile int32_t t75 = -63;

	t75 = ((x4461%x4462)-(x4463>>x4464));

	if (t75 != -98303) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4585 = 113;
	int16_t x4586 = -4;
	uint16_t x4588 = 1U;
	volatile int32_t t76 = 111;

	t76 = ((x4585%x4586)-(x4587>>x4588));

	if (t76 != -16382) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4605 = INT64_MIN;
	uint64_t x4606 = UINT64_MAX;
	static volatile int8_t x4607 = 0;
	uint64_t t77 = 3917LLU;

	t77 = ((x4605%x4606)-(x4607>>x4608));

	if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4649 = 110;
	uint64_t x4650 = 526129245553LLU;
	volatile uint16_t x4651 = 5U;
	static volatile uint64_t t78 = 7256138776499313199LLU;

	t78 = ((x4649%x4650)-(x4651>>x4652));

	if (t78 != 110LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4681 = 0LLU;
	int8_t x4682 = -1;
	static uint64_t x4683 = 0LLU;
	static int16_t x4684 = 8;

	t79 = ((x4681%x4682)-(x4683>>x4684));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4701 = 990100080LLU;
	int8_t x4702 = INT8_MIN;
	uint64_t x4703 = 2551953062LLU;
	static volatile int32_t x4704 = 1;
	volatile uint64_t t80 = 28943397778LLU;

	t80 = ((x4701%x4702)-(x4703>>x4704));

	if (t80 != 18446744073423675165LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4721 = 42263863920276459LLU;
	volatile uint8_t x4722 = 2U;
	uint8_t x4723 = UINT8_MAX;
	int16_t x4724 = 1;
	volatile uint64_t t81 = 6715804LLU;

	t81 = ((x4721%x4722)-(x4723>>x4724));

	if (t81 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x4725 = INT16_MIN;
	uint64_t x4727 = 7LLU;
	int8_t x4728 = 1;
	static volatile uint64_t t82 = 20LLU;

	t82 = ((x4725%x4726)-(x4727>>x4728));

	if (t82 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4737 = INT8_MIN;
	int16_t x4738 = INT16_MIN;
	uint32_t x4739 = UINT32_MAX;
	volatile uint16_t x4740 = 0U;
	volatile uint32_t t83 = 65339534U;

	t83 = ((x4737%x4738)-(x4739>>x4740));

	if (t83 != 4294967169U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4845 = INT16_MIN;
	uint8_t x4846 = 34U;
	volatile int16_t x4847 = 71;
	uint16_t x4848 = 7U;
	static int32_t t84 = -1;

	t84 = ((x4845%x4846)-(x4847>>x4848));

	if (t84 != -26) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4921 = INT32_MAX;
	int8_t x4922 = -1;
	int16_t x4923 = 7;
	int32_t x4924 = 3;
	static int32_t t85 = -627031;

	t85 = ((x4921%x4922)-(x4923>>x4924));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4942 = UINT64_MAX;
	volatile int64_t x4943 = 4227LL;
	int32_t x4944 = 15;

	t86 = ((x4941%x4942)-(x4943>>x4944));

	if (t86 != 18446744050360551202LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4965 = -1;
	int32_t x4966 = -11492508;
	static int32_t x4967 = INT32_MAX;
	uint32_t x4968 = 0U;

	t87 = ((x4965%x4966)-(x4967>>x4968));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4997 = UINT16_MAX;
	volatile uint64_t x4998 = UINT64_MAX;
	uint16_t x4999 = 271U;
	uint32_t x5000 = 8U;
	static uint64_t t88 = 576001215895207LLU;

	t88 = ((x4997%x4998)-(x4999>>x5000));

	if (t88 != 65534LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5017 = -1;
	static uint8_t x5018 = UINT8_MAX;
	int32_t x5019 = 1520744;
	int8_t x5020 = 6;

	t89 = ((x5017%x5018)-(x5019>>x5020));

	if (t89 != -23762) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5085 = INT64_MIN;
	int8_t x5086 = INT8_MAX;
	static uint64_t x5087 = UINT64_MAX;
	uint32_t x5088 = 17U;
	uint64_t t90 = 252440217641761938LLU;

	t90 = ((x5085%x5086)-(x5087>>x5088));

	if (t90 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5177 = INT64_MAX;
	int16_t x5178 = -1;
	int32_t x5179 = INT32_MAX;
	int64_t t91 = -242439642127LL;

	t91 = ((x5177%x5178)-(x5179>>x5180));

	if (t91 != -2097151LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5218 = INT16_MIN;
	volatile int32_t x5219 = 2071823;
	uint32_t t92 = 0U;

	t92 = ((x5217%x5218)-(x5219>>x5220));

	if (t92 != 4294741086U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5229 = INT16_MIN;
	uint8_t x5230 = UINT8_MAX;
	int64_t x5231 = INT64_MAX;
	uint8_t x5232 = 30U;
	volatile int64_t t93 = -47748478170534LL;

	t93 = ((x5229%x5230)-(x5231>>x5232));

	if (t93 != -8589934719LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5257 = 16U;
	uint8_t x5258 = 3U;
	volatile uint32_t x5259 = 928221U;
	volatile uint16_t x5260 = 6U;
	uint32_t t94 = 1U;

	t94 = ((x5257%x5258)-(x5259>>x5260));

	if (t94 != 4294952794U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x5277 = 4717LLU;
	int32_t x5278 = INT32_MIN;
	int16_t x5279 = 926;
	int64_t x5280 = 1LL;
	uint64_t t95 = 135504060LLU;

	t95 = ((x5277%x5278)-(x5279>>x5280));

	if (t95 != 4254LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x5417 = -1;
	volatile int16_t x5418 = INT16_MAX;
	uint16_t x5419 = UINT16_MAX;
	int32_t x5420 = 22;
	int32_t t96 = 113712425;

	t96 = ((x5417%x5418)-(x5419>>x5420));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5561 = 3444U;
	int64_t x5563 = INT64_MAX;
	uint16_t x5564 = 0U;
	int64_t t97 = 13988927505607LL;

	t97 = ((x5561%x5562)-(x5563>>x5564));

	if (t97 != -9223372036854772363LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5569 = 4;
	static int32_t x5571 = INT32_MAX;

	t98 = ((x5569%x5570)-(x5571>>x5572));

	if (t98 != -2147483643) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5597 = INT32_MAX;
	static int32_t x5598 = 391635684;
	uint32_t x5599 = 351441U;
	int32_t x5600 = 0;
	volatile uint32_t t99 = 84U;

	t99 = ((x5597%x5598)-(x5599>>x5600));

	if (t99 != 188953786U) { NG(); } else { ; }
	
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

