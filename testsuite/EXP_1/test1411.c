#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MAX;
volatile uint32_t t0 = 820356090U;
static int64_t t1 = 19102LL;
uint16_t x31 = UINT16_MAX;
int8_t x35 = 2;
uint64_t x58 = 2270657875406LLU;
static uint32_t x60 = 11U;
uint64_t t5 = 106509LLU;
int16_t x86 = 22;
volatile uint64_t t6 = 16813090297LLU;
static uint8_t x112 = 39U;
static int32_t x126 = 48674;
volatile uint32_t x133 = UINT32_MAX;
int64_t t10 = -933128543LL;
int32_t x215 = INT32_MIN;
uint16_t x252 = 0U;
int16_t x315 = INT16_MAX;
int16_t x317 = 860;
int16_t x319 = INT16_MAX;
static int16_t x320 = 1;
int64_t x401 = INT64_MIN;
volatile uint64_t x404 = 8LLU;
int16_t x410 = INT16_MIN;
static uint8_t x412 = 11U;
static int8_t x421 = INT8_MIN;
int8_t x424 = 19;
uint8_t x494 = 57U;
int16_t x518 = -506;
static int8_t x548 = 1;
uint64_t x555 = 16077279235LLU;
int8_t x556 = 47;
volatile uint8_t x656 = 3U;
int16_t x663 = INT16_MIN;
static volatile int64_t t30 = -10747LL;
uint64_t t31 = 1LLU;
static int32_t t32 = 87;
static int64_t x806 = 5169793330960LL;
uint8_t x808 = 29U;
uint8_t x828 = 25U;
static volatile uint32_t x839 = 1007477U;
volatile int8_t x855 = 1;
volatile int32_t t38 = 475;
volatile int32_t t39 = -401572319;
uint8_t x884 = 1U;
static int32_t x890 = INT32_MIN;
volatile uint16_t x892 = 1U;
uint16_t x913 = UINT16_MAX;
uint32_t x915 = 275U;
int8_t x933 = -2;
uint8_t x1008 = 3U;
volatile uint64_t t44 = 5LLU;
int16_t x1011 = INT16_MAX;
static int32_t t48 = 0;
uint16_t x1127 = 201U;
static int64_t x1145 = INT64_MIN;
int8_t x1269 = INT8_MAX;
uint8_t x1272 = 5U;
static volatile int16_t x1377 = INT16_MIN;
int64_t x1385 = 0LL;
volatile int16_t x1433 = -5227;
volatile uint8_t x1532 = 30U;
volatile int16_t x1625 = -31;
static int16_t x1653 = -3;
uint32_t x1701 = UINT32_MAX;
volatile int16_t x1875 = INT16_MAX;
uint32_t x1950 = UINT32_MAX;
static uint16_t x1961 = 1U;
uint16_t x1963 = 1U;
int64_t x1969 = INT64_MIN;
int32_t x1971 = -1;
uint8_t x2014 = 52U;
static int64_t x2016 = 0LL;
volatile int32_t t68 = 183;
uint8_t x2018 = 7U;
uint32_t x2087 = 1972U;
volatile int16_t x2103 = -7920;
int32_t x2135 = INT32_MIN;
static int16_t x2148 = 0;
static volatile int32_t t78 = 114423684;
static volatile int64_t x2181 = 5882293089LL;
volatile int16_t x2183 = INT16_MIN;
volatile uint64_t x2184 = 0LLU;
int16_t x2197 = INT16_MAX;
int16_t x2201 = 343;
int16_t x2202 = INT16_MAX;
uint32_t x2204 = 0U;
uint32_t x2232 = 0U;
static int64_t x2245 = -34673LL;
static uint8_t x2284 = 2U;
volatile uint8_t x2334 = 3U;
uint16_t x2337 = 1U;
int64_t x2390 = -238243271041214LL;
uint8_t x2392 = 0U;
uint16_t x2394 = 1U;
volatile int64_t t93 = 135067053146630886LL;
volatile uint32_t x2422 = 129840669U;
static volatile int32_t x2423 = INT32_MIN;
uint8_t x2424 = 1U;
int64_t x2503 = INT64_MIN;
volatile uint8_t x2512 = 0U;
int32_t x2575 = -1;
static int8_t x2597 = INT8_MIN;
volatile int32_t t99 = 0;


void f0(void) {
	uint32_t x6 = UINT32_MAX;
	volatile uint32_t x7 = 4226U;
	uint32_t x8 = 2U;

	t0 = (((x5<x6)%x7)>>x8);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x21 = -56;
	volatile int16_t x22 = 350;
	int64_t x23 = -1LL;
	int16_t x24 = 1;

	t1 = (((x21<x22)%x23)>>x24);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x29 = 2842U;
	static volatile int32_t x30 = INT32_MIN;
	uint32_t x32 = 8U;
	volatile int32_t t2 = -549431;

	t2 = (((x29<x30)%x31)>>x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	uint8_t x36 = 1U;
	volatile int32_t t3 = 90;

	t3 = (((x33<x34)%x35)>>x36);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x45 = 1700171157U;
	volatile int8_t x46 = INT8_MIN;
	static int16_t x47 = -11476;
	static uint8_t x48 = 1U;
	static volatile int32_t t4 = -77;

	t4 = (((x45<x46)%x47)>>x48);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x57 = -359;
	uint64_t x59 = UINT64_MAX;

	t5 = (((x57<x58)%x59)>>x60);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x85 = -1;
	uint64_t x87 = UINT64_MAX;
	volatile uint8_t x88 = 34U;

	t6 = (((x85<x86)%x87)>>x88);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x109 = 100U;
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	static volatile int64_t t7 = -4000211845042074LL;

	t7 = (((x109<x110)%x111)>>x112);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x125 = 39U;
	uint64_t x127 = 4087333485193801LLU;
	int16_t x128 = 0;
	static volatile uint64_t t8 = 14797472292393LLU;

	t8 = (((x125<x126)%x127)>>x128);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x134 = INT8_MIN;
	volatile uint32_t x135 = 698430U;
	uint16_t x136 = 2U;
	volatile uint32_t t9 = 452874882U;

	t9 = (((x133<x134)%x135)>>x136);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = 11;
	int64_t x171 = INT64_MAX;
	uint8_t x172 = 27U;

	t10 = (((x169<x170)%x171)>>x172);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x209 = 1U;
	uint16_t x210 = UINT16_MAX;
	uint16_t x211 = 521U;
	static uint8_t x212 = 6U;
	int32_t t11 = 1;

	t11 = (((x209<x210)%x211)>>x212);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x213 = INT32_MIN;
	static int64_t x214 = -793LL;
	uint16_t x216 = 1U;
	int32_t t12 = 51;

	t12 = (((x213<x214)%x215)>>x216);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x249 = INT32_MAX;
	static volatile uint64_t x250 = 10LLU;
	volatile int8_t x251 = -1;
	volatile int32_t t13 = -69644249;

	t13 = (((x249<x250)%x251)>>x252);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x293 = INT8_MIN;
	volatile uint16_t x294 = 329U;
	uint64_t x295 = UINT64_MAX;
	volatile uint64_t x296 = 11LLU;
	uint64_t t14 = 63205LLU;

	t14 = (((x293<x294)%x295)>>x296);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x313 = UINT16_MAX;
	int32_t x314 = -241566657;
	int64_t x316 = 21LL;
	volatile int32_t t15 = -183;

	t15 = (((x313<x314)%x315)>>x316);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x318 = 25U;
	int32_t t16 = 42739;

	t16 = (((x317<x318)%x319)>>x320);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x373 = -1;
	int16_t x374 = INT16_MAX;
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 1U;
	volatile int32_t t17 = -1;

	t17 = (((x373<x374)%x375)>>x376);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x402 = -171;
	int64_t x403 = -1LL;
	volatile int64_t t18 = -423054LL;

	t18 = (((x401<x402)%x403)>>x404);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x409 = -1;
	volatile int32_t x411 = INT32_MIN;
	static volatile int32_t t19 = -1;

	t19 = (((x409<x410)%x411)>>x412);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x422 = 0;
	volatile int32_t x423 = INT32_MIN;
	volatile int32_t t20 = 14;

	t20 = (((x421<x422)%x423)>>x424);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x449 = INT32_MIN;
	uint32_t x450 = 54717202U;
	int8_t x451 = -6;
	uint8_t x452 = 20U;
	static volatile int32_t t21 = 253055117;

	t21 = (((x449<x450)%x451)>>x452);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x493 = INT64_MAX;
	static int8_t x495 = INT8_MIN;
	int64_t x496 = 3LL;
	volatile int32_t t22 = -671409;

	t22 = (((x493<x494)%x495)>>x496);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x517 = INT32_MAX;
	static int16_t x519 = -1;
	uint8_t x520 = 13U;
	int32_t t23 = -3;

	t23 = (((x517<x518)%x519)>>x520);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x545 = 28623U;
	uint8_t x546 = 10U;
	int64_t x547 = INT64_MAX;
	int64_t t24 = 20758145379985LL;

	t24 = (((x545<x546)%x547)>>x548);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x553 = INT16_MIN;
	int32_t x554 = INT32_MIN;
	volatile uint64_t t25 = 334356LLU;

	t25 = (((x553<x554)%x555)>>x556);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x609 = -21LL;
	static uint64_t x610 = UINT64_MAX;
	int32_t x611 = -16931;
	int16_t x612 = 2;
	int32_t t26 = 470511911;

	t26 = (((x609<x610)%x611)>>x612);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x645 = -3;
	int16_t x646 = 905;
	uint16_t x647 = UINT16_MAX;
	volatile uint16_t x648 = 4U;
	int32_t t27 = 3;

	t27 = (((x645<x646)%x647)>>x648);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x653 = INT32_MIN;
	int32_t x654 = INT32_MAX;
	uint64_t x655 = 43356LLU;
	uint64_t t28 = 185767LLU;

	t28 = (((x653<x654)%x655)>>x656);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x661 = INT8_MIN;
	int16_t x662 = INT16_MAX;
	uint8_t x664 = 2U;
	volatile int32_t t29 = 62423;

	t29 = (((x661<x662)%x663)>>x664);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x697 = INT64_MIN;
	static int8_t x698 = INT8_MIN;
	int64_t x699 = INT64_MAX;
	uint8_t x700 = 24U;

	t30 = (((x697<x698)%x699)>>x700);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x705 = 7U;
	static uint8_t x706 = 0U;
	uint64_t x707 = 39173729556898LLU;
	volatile int8_t x708 = 0;

	t31 = (((x705<x706)%x707)>>x708);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x745 = 391292403509LL;
	uint8_t x746 = 1U;
	uint8_t x747 = UINT8_MAX;
	uint64_t x748 = 5LLU;

	t32 = (((x745<x746)%x747)>>x748);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x769 = UINT32_MAX;
	int16_t x770 = INT16_MIN;
	volatile uint8_t x771 = 7U;
	volatile uint8_t x772 = 23U;
	int32_t t33 = 189442;

	t33 = (((x769<x770)%x771)>>x772);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x805 = 34;
	int16_t x807 = INT16_MAX;
	int32_t t34 = 13225146;

	t34 = (((x805<x806)%x807)>>x808);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x809 = INT8_MIN;
	uint16_t x810 = UINT16_MAX;
	int8_t x811 = INT8_MAX;
	uint8_t x812 = 24U;
	static volatile int32_t t35 = -42;

	t35 = (((x809<x810)%x811)>>x812);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x825 = INT16_MAX;
	int8_t x826 = INT8_MAX;
	int64_t x827 = -131439530368207104LL;
	volatile int64_t t36 = -7372560406LL;

	t36 = (((x825<x826)%x827)>>x828);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x837 = INT8_MIN;
	volatile uint32_t x838 = 3553462U;
	static uint32_t x840 = 2U;
	volatile uint32_t t37 = 735U;

	t37 = (((x837<x838)%x839)>>x840);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x853 = -1;
	static uint8_t x854 = UINT8_MAX;
	uint8_t x856 = 3U;

	t38 = (((x853<x854)%x855)>>x856);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x861 = INT8_MIN;
	static uint32_t x862 = UINT32_MAX;
	int16_t x863 = INT16_MAX;
	uint64_t x864 = 7LLU;

	t39 = (((x861<x862)%x863)>>x864);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x881 = INT64_MIN;
	uint32_t x882 = 1439U;
	static volatile uint8_t x883 = 107U;
	volatile int32_t t40 = 13638;

	t40 = (((x881<x882)%x883)>>x884);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x889 = 5502;
	int16_t x891 = INT16_MAX;
	int32_t t41 = -26900;

	t41 = (((x889<x890)%x891)>>x892);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x914 = 1;
	uint8_t x916 = 21U;
	volatile uint32_t t42 = 117U;

	t42 = (((x913<x914)%x915)>>x916);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x934 = INT64_MAX;
	int64_t x935 = 166566LL;
	static int16_t x936 = 47;
	int64_t t43 = 28LL;

	t43 = (((x933<x934)%x935)>>x936);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1005 = INT64_MIN;
	uint8_t x1006 = 18U;
	static uint64_t x1007 = 99006626LLU;

	t44 = (((x1005<x1006)%x1007)>>x1008);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1009 = -1;
	static int32_t x1010 = 15954786;
	static int8_t x1012 = 1;
	volatile int32_t t45 = 494255459;

	t45 = (((x1009<x1010)%x1011)>>x1012);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1021 = -1LL;
	uint16_t x1022 = 2579U;
	int64_t x1023 = INT64_MIN;
	int8_t x1024 = 13;
	int64_t t46 = -30468329303LL;

	t46 = (((x1021<x1022)%x1023)>>x1024);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1041 = INT32_MIN;
	volatile int8_t x1042 = INT8_MAX;
	uint8_t x1043 = UINT8_MAX;
	uint64_t x1044 = 2LLU;
	volatile int32_t t47 = -1;

	t47 = (((x1041<x1042)%x1043)>>x1044);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1093 = INT32_MAX;
	int8_t x1094 = 15;
	uint8_t x1095 = 59U;
	static uint32_t x1096 = 1U;

	t48 = (((x1093<x1094)%x1095)>>x1096);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1125 = -168205157;
	static uint64_t x1126 = UINT64_MAX;
	int8_t x1128 = 6;
	static int32_t t49 = 1905;

	t49 = (((x1125<x1126)%x1127)>>x1128);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1146 = INT32_MIN;
	int16_t x1147 = -1;
	static uint16_t x1148 = 1U;
	volatile int32_t t50 = 36931;

	t50 = (((x1145<x1146)%x1147)>>x1148);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x1270 = 637U;
	int32_t x1271 = INT32_MAX;
	int32_t t51 = -68763;

	t51 = (((x1269<x1270)%x1271)>>x1272);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1378 = -1;
	int8_t x1379 = INT8_MIN;
	int8_t x1380 = 3;
	volatile int32_t t52 = -62;

	t52 = (((x1377<x1378)%x1379)>>x1380);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1386 = UINT16_MAX;
	uint64_t x1387 = UINT64_MAX;
	int8_t x1388 = 6;
	volatile uint64_t t53 = 7302350184114486LLU;

	t53 = (((x1385<x1386)%x1387)>>x1388);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x1434 = 7;
	static uint8_t x1435 = 46U;
	volatile int16_t x1436 = 1;
	volatile int32_t t54 = 1282017;

	t54 = (((x1433<x1434)%x1435)>>x1436);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1529 = INT32_MAX;
	static volatile uint8_t x1530 = UINT8_MAX;
	uint16_t x1531 = 21U;
	int32_t t55 = 0;

	t55 = (((x1529<x1530)%x1531)>>x1532);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1569 = INT32_MIN;
	volatile uint64_t x1570 = UINT64_MAX;
	int16_t x1571 = INT16_MIN;
	uint8_t x1572 = 16U;
	int32_t t56 = -228;

	t56 = (((x1569<x1570)%x1571)>>x1572);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1626 = 26U;
	int16_t x1627 = INT16_MIN;
	static uint8_t x1628 = 0U;
	volatile int32_t t57 = 82162;

	t57 = (((x1625<x1626)%x1627)>>x1628);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1654 = INT32_MAX;
	static int16_t x1655 = -1;
	uint8_t x1656 = 1U;
	int32_t t58 = 168579176;

	t58 = (((x1653<x1654)%x1655)>>x1656);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1681 = 362389240665532127LL;
	static uint16_t x1682 = 507U;
	int32_t x1683 = INT32_MIN;
	uint8_t x1684 = 4U;
	volatile int32_t t59 = -1;

	t59 = (((x1681<x1682)%x1683)>>x1684);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1702 = 24U;
	static int32_t x1703 = INT32_MAX;
	int8_t x1704 = 1;
	volatile int32_t t60 = 8;

	t60 = (((x1701<x1702)%x1703)>>x1704);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x1829 = INT16_MIN;
	uint32_t x1830 = 488929U;
	int32_t x1831 = -1;
	uint8_t x1832 = 27U;
	volatile int32_t t61 = -52439692;

	t61 = (((x1829<x1830)%x1831)>>x1832);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x1873 = 28;
	int16_t x1874 = -1334;
	uint8_t x1876 = 0U;
	int32_t t62 = -16049894;

	t62 = (((x1873<x1874)%x1875)>>x1876);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1945 = INT32_MAX;
	uint32_t x1946 = 121U;
	int64_t x1947 = INT64_MIN;
	volatile uint32_t x1948 = 22U;
	volatile int64_t t63 = 4353281LL;

	t63 = (((x1945<x1946)%x1947)>>x1948);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1949 = UINT32_MAX;
	volatile int64_t x1951 = INT64_MIN;
	uint8_t x1952 = 5U;
	volatile int64_t t64 = 0LL;

	t64 = (((x1949<x1950)%x1951)>>x1952);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x1962 = INT32_MIN;
	uint8_t x1964 = 5U;
	int32_t t65 = -441;

	t65 = (((x1961<x1962)%x1963)>>x1964);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x1970 = UINT8_MAX;
	static uint8_t x1972 = 29U;
	static int32_t t66 = -108;

	t66 = (((x1969<x1970)%x1971)>>x1972);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2005 = INT16_MIN;
	volatile uint32_t x2006 = 1708U;
	int8_t x2007 = 38;
	static int16_t x2008 = 9;
	static int32_t t67 = -3932808;

	t67 = (((x2005<x2006)%x2007)>>x2008);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2013 = INT8_MAX;
	int8_t x2015 = INT8_MAX;

	t68 = (((x2013<x2014)%x2015)>>x2016);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2017 = -1081LL;
	int64_t x2019 = INT64_MIN;
	uint32_t x2020 = 14U;
	volatile int64_t t69 = 522827LL;

	t69 = (((x2017<x2018)%x2019)>>x2020);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2033 = 5827U;
	uint32_t x2034 = 231407893U;
	int32_t x2035 = -1;
	int8_t x2036 = 1;
	volatile int32_t t70 = -130;

	t70 = (((x2033<x2034)%x2035)>>x2036);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2073 = 1049;
	volatile uint32_t x2074 = 116200U;
	int64_t x2075 = INT64_MAX;
	uint64_t x2076 = 6LLU;
	static int64_t t71 = -56LL;

	t71 = (((x2073<x2074)%x2075)>>x2076);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2081 = INT8_MIN;
	volatile int16_t x2082 = INT16_MIN;
	static int32_t x2083 = -1;
	volatile int8_t x2084 = 5;
	int32_t t72 = 0;

	t72 = (((x2081<x2082)%x2083)>>x2084);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2085 = -16;
	int64_t x2086 = -1LL;
	static volatile uint8_t x2088 = 5U;
	volatile uint32_t t73 = 1030155U;

	t73 = (((x2085<x2086)%x2087)>>x2088);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2101 = 105U;
	int16_t x2102 = INT16_MIN;
	uint8_t x2104 = 1U;
	volatile int32_t t74 = -8086;

	t74 = (((x2101<x2102)%x2103)>>x2104);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2133 = UINT64_MAX;
	static int8_t x2134 = -1;
	uint8_t x2136 = 1U;
	static int32_t t75 = -1284317;

	t75 = (((x2133<x2134)%x2135)>>x2136);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2145 = -1LL;
	volatile int16_t x2146 = INT16_MIN;
	uint16_t x2147 = 22U;
	int32_t t76 = -9852377;

	t76 = (((x2145<x2146)%x2147)>>x2148);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2153 = INT16_MIN;
	static int8_t x2154 = INT8_MIN;
	uint32_t x2155 = 7124974U;
	int16_t x2156 = 5;
	volatile uint32_t t77 = 12U;

	t77 = (((x2153<x2154)%x2155)>>x2156);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2173 = INT32_MAX;
	volatile uint16_t x2174 = 6854U;
	int16_t x2175 = 5787;
	uint8_t x2176 = 4U;

	t78 = (((x2173<x2174)%x2175)>>x2176);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2182 = INT16_MIN;
	volatile int32_t t79 = 59421;

	t79 = (((x2181<x2182)%x2183)>>x2184);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2198 = INT32_MIN;
	int8_t x2199 = -1;
	int8_t x2200 = 12;
	volatile int32_t t80 = 35;

	t80 = (((x2197<x2198)%x2199)>>x2200);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2203 = INT64_MIN;
	int64_t t81 = -602828441097932LL;

	t81 = (((x2201<x2202)%x2203)>>x2204);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2209 = 100382883724LL;
	int32_t x2210 = INT32_MIN;
	static volatile int16_t x2211 = -1;
	volatile uint32_t x2212 = 1U;
	int32_t t82 = -868;

	t82 = (((x2209<x2210)%x2211)>>x2212);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2229 = INT8_MAX;
	static uint16_t x2230 = 10U;
	uint32_t x2231 = UINT32_MAX;
	volatile uint32_t t83 = 524250760U;

	t83 = (((x2229<x2230)%x2231)>>x2232);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2246 = 110515U;
	uint64_t x2247 = 114LLU;
	uint8_t x2248 = 2U;
	static uint64_t t84 = 323LLU;

	t84 = (((x2245<x2246)%x2247)>>x2248);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2281 = INT8_MIN;
	int8_t x2282 = INT8_MIN;
	int32_t x2283 = INT32_MIN;
	volatile int32_t t85 = 53;

	t85 = (((x2281<x2282)%x2283)>>x2284);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2301 = -1;
	int64_t x2302 = INT64_MAX;
	int16_t x2303 = -1;
	uint8_t x2304 = 4U;
	int32_t t86 = 3805;

	t86 = (((x2301<x2302)%x2303)>>x2304);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x2313 = 12U;
	uint16_t x2314 = 1U;
	static int8_t x2315 = -1;
	static int32_t x2316 = 0;
	static int32_t t87 = 5531;

	t87 = (((x2313<x2314)%x2315)>>x2316);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x2333 = 155U;
	volatile int64_t x2335 = INT64_MAX;
	uint8_t x2336 = 0U;
	static volatile int64_t t88 = -2062264432655520129LL;

	t88 = (((x2333<x2334)%x2335)>>x2336);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x2338 = INT32_MIN;
	static int32_t x2339 = INT32_MIN;
	int8_t x2340 = 28;
	int32_t t89 = -2;

	t89 = (((x2337<x2338)%x2339)>>x2340);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2349 = -1;
	uint8_t x2350 = 2U;
	int64_t x2351 = -1LL;
	uint8_t x2352 = 17U;
	volatile int64_t t90 = -882721536510LL;

	t90 = (((x2349<x2350)%x2351)>>x2352);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2389 = INT8_MIN;
	uint16_t x2391 = UINT16_MAX;
	int32_t t91 = -51186193;

	t91 = (((x2389<x2390)%x2391)>>x2392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x2393 = 486815297105LL;
	int8_t x2395 = -1;
	uint32_t x2396 = 6U;
	int32_t t92 = -2;

	t92 = (((x2393<x2394)%x2395)>>x2396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2413 = UINT64_MAX;
	int16_t x2414 = INT16_MIN;
	int64_t x2415 = INT64_MAX;
	volatile uint8_t x2416 = 0U;

	t93 = (((x2413<x2414)%x2415)>>x2416);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x2421 = 0U;
	volatile int32_t t94 = -819;

	t94 = (((x2421<x2422)%x2423)>>x2424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2501 = 6;
	static volatile uint32_t x2502 = UINT32_MAX;
	int8_t x2504 = 1;
	static int64_t t95 = 3457601924630332LL;

	t95 = (((x2501<x2502)%x2503)>>x2504);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x2509 = -51060052;
	int64_t x2510 = INT64_MAX;
	static volatile uint8_t x2511 = 2U;
	volatile int32_t t96 = 90186469;

	t96 = (((x2509<x2510)%x2511)>>x2512);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x2537 = -1;
	int8_t x2538 = 1;
	int64_t x2539 = INT64_MIN;
	int8_t x2540 = 1;
	int64_t t97 = 68057722024161170LL;

	t97 = (((x2537<x2538)%x2539)>>x2540);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2573 = INT16_MIN;
	int16_t x2574 = 2;
	uint8_t x2576 = 2U;
	volatile int32_t t98 = -53861;

	t98 = (((x2573<x2574)%x2575)>>x2576);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x2598 = 3484964825532150305LLU;
	int16_t x2599 = INT16_MIN;
	volatile int8_t x2600 = 0;

	t99 = (((x2597<x2598)%x2599)>>x2600);

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

