#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x30 = 33U;
uint32_t x109 = UINT32_MAX;
uint64_t t3 = 66002810625LLU;
uint32_t x176 = 210U;
static int8_t x197 = INT8_MAX;
int16_t x198 = 72;
int64_t x202 = INT64_MAX;
int16_t x227 = INT16_MIN;
int8_t x228 = INT8_MIN;
int8_t x232 = 0;
int32_t t10 = -11538032;
int8_t x267 = INT8_MAX;
uint8_t x268 = 9U;
uint32_t x269 = 4045012U;
int16_t x367 = -1;
int32_t t16 = INT32_MAX;
uint16_t x382 = 4U;
int64_t x406 = INT64_MIN;
uint64_t x407 = 1750465853935LLU;
int16_t x408 = -1;
volatile int32_t x419 = INT32_MIN;
int32_t x420 = INT32_MIN;
static uint64_t x435 = UINT64_MAX;
static uint32_t x505 = 27073442U;
static int64_t x507 = INT64_MIN;
int8_t x510 = 1;
uint16_t x566 = 26891U;
uint64_t x640 = 17932LLU;
volatile uint32_t t27 = UINT32_MAX;
static volatile uint64_t x643 = 269564358447LLU;
int16_t x644 = 8404;
static volatile int32_t x682 = INT32_MIN;
static volatile uint64_t x684 = UINT64_MAX;
int16_t x713 = INT16_MAX;
volatile uint64_t x716 = 30LLU;
int32_t x722 = 0;
int64_t x723 = 13409478LL;
static int32_t x755 = INT32_MIN;
uint16_t x761 = 2025U;
static int32_t x763 = -1;
static uint64_t x764 = UINT64_MAX;
int32_t t34 = -3;
int16_t x770 = INT16_MIN;
int16_t x772 = INT16_MIN;
volatile uint32_t t35 = 896137U;
uint8_t x779 = UINT8_MAX;
int8_t x780 = INT8_MAX;
volatile uint32_t x836 = UINT32_MAX;
uint8_t x878 = 0U;
uint8_t x901 = UINT8_MAX;
static int32_t x903 = -1;
static volatile int64_t x909 = INT64_MAX;
static uint64_t x947 = 112611362978642LLU;
volatile int16_t x995 = -1;
int32_t x1019 = -1;
int8_t x1044 = INT8_MIN;
static uint32_t x1115 = UINT32_MAX;
int16_t x1139 = INT16_MIN;
uint16_t x1140 = 162U;
uint64_t x1158 = 14518145435LLU;
volatile uint16_t x1198 = 94U;
int32_t t59 = 375936;
int32_t t61 = 856;
volatile uint32_t x1311 = UINT32_MAX;
int16_t x1347 = -1;
uint16_t x1469 = 21457U;
volatile int32_t t67 = 430;
static int32_t x1522 = INT32_MIN;
int8_t x1608 = INT8_MAX;
static uint64_t x1630 = 17233773357845767LLU;
int16_t x1632 = -45;
static int64_t x1633 = 15LL;
int64_t x1634 = -1LL;
uint8_t x1653 = 3U;
int8_t x1655 = INT8_MAX;
int8_t x1656 = INT8_MAX;
static volatile int32_t t75 = 142178190;
int32_t x1660 = INT32_MIN;
uint8_t x1674 = UINT8_MAX;
volatile int64_t x1683 = -125895871939952LL;
volatile int8_t x1693 = INT8_MAX;
uint16_t x1749 = 0U;
volatile int64_t x1754 = INT64_MIN;
volatile uint32_t t85 = UINT32_MAX;
volatile uint32_t x1810 = 0U;
uint8_t x1812 = 5U;
static volatile uint64_t x1815 = UINT64_MAX;
uint8_t x1816 = UINT8_MAX;
int64_t x1832 = INT64_MIN;
int16_t x1849 = 5;
volatile int32_t t89 = 25421;
int16_t x1917 = INT16_MAX;
static uint64_t x1920 = 799919463031151712LLU;
static uint64_t x2017 = UINT64_MAX;
static volatile uint64_t t96 = 32844665217334LLU;
volatile uint16_t x2137 = UINT16_MAX;
int32_t x2139 = INT32_MAX;
int16_t x2166 = INT16_MIN;
volatile uint8_t x2167 = UINT8_MAX;


void f0(void) {
	int16_t x29 = 7877;
	int8_t x31 = -1;
	volatile uint64_t x32 = 238269LLU;
	volatile int32_t t0 = 1;

	t0 = (x29<<(x30&(x31-x32)));

	if (t0 != 7877) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x65 = 123U;
	uint8_t x66 = UINT8_MAX;
	volatile int32_t x67 = INT32_MIN;
	volatile int32_t x68 = INT32_MIN;
	uint32_t t1 = 128227252U;

	t1 = (x65<<(x66&(x67-x68)));

	if (t1 != 123U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x110 = INT8_MIN;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = -1LL;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x109<<(x110&(x111-x112)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x121 = 36043LLU;
	uint64_t x122 = 227145048LLU;
	static int32_t x123 = 51;
	int8_t x124 = -2;

	t3 = (x121<<(x122&(x123-x124)));

	if (t3 != 2362114048LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x165 = 152815749U;
	volatile int64_t x166 = -1LL;
	int16_t x167 = -1;
	static int64_t x168 = -1LL;
	static uint32_t t4 = 67U;

	t4 = (x165<<(x166&(x167-x168)));

	if (t4 != 152815749U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = 0;
	int8_t x175 = INT8_MIN;
	int32_t t5 = INT32_MAX;

	t5 = (x173<<(x174&(x175-x176)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x199 = INT16_MIN;
	int16_t x200 = 3819;
	volatile int32_t t6 = -60675;

	t6 = (x197<<(x198&(x199-x200)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x201 = INT8_MAX;
	volatile int64_t x203 = -1LL;
	int32_t x204 = -11;
	static int32_t t7 = 4;

	t7 = (x201<<(x202&(x203-x204)));

	if (t7 != 130048) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x217 = 2687;
	volatile int64_t x218 = -1LL;
	static int32_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t8 = -201099;

	t8 = (x217<<(x218&(x219-x220)));

	if (t8 != 2687) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x225 = 351970LLU;
	static uint32_t x226 = 5U;
	volatile uint64_t t9 = 1LLU;

	t9 = (x225<<(x226&(x227-x228)));

	if (t9 != 351970LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x229 = UINT16_MAX;
	volatile int16_t x230 = 99;
	static int16_t x231 = INT16_MIN;

	t10 = (x229<<(x230&(x231-x232)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x265 = 50U;
	int32_t x266 = INT32_MIN;
	static volatile int32_t t11 = -3841;

	t11 = (x265<<(x266&(x267-x268)));

	if (t11 != 50) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x270 = INT64_MAX;
	static int64_t x271 = INT64_MIN;
	volatile int64_t x272 = INT64_MIN;
	uint32_t t12 = 2517U;

	t12 = (x269<<(x270&(x271-x272)));

	if (t12 != 4045012U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x289 = 383U;
	uint64_t x290 = 982LLU;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = -1;
	uint32_t t13 = 46924U;

	t13 = (x289<<(x290&(x291-x292)));

	if (t13 != 383U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = 2;
	uint64_t x327 = 22LLU;
	uint32_t x328 = 0U;
	int32_t t14 = -1226;

	t14 = (x325<<(x326&(x327-x328)));

	if (t14 != 508) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x365 = INT8_MAX;
	uint8_t x366 = 23U;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t15 = 647432;

	t15 = (x365<<(x366&(x367-x368)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = 29573U;
	uint8_t x376 = UINT8_MAX;

	t16 = (x373<<(x374&(x375-x376)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x381 = UINT32_MAX;
	static int16_t x383 = INT16_MAX;
	volatile uint8_t x384 = UINT8_MAX;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x381<<(x382&(x383-x384)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x385 = 506804016539LLU;
	uint32_t x386 = 122U;
	int32_t x387 = INT32_MIN;
	static int64_t x388 = INT64_MIN;
	volatile uint64_t t18 = 42535205641810LLU;

	t18 = (x385<<(x386&(x387-x388)));

	if (t18 != 506804016539LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x405 = INT64_MAX;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x405<<(x406&(x407-x408)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x413 = INT8_MAX;
	static volatile uint64_t x414 = 5928906138372LLU;
	volatile int8_t x415 = INT8_MAX;
	int8_t x416 = -6;
	static volatile int32_t t20 = 2715682;

	t20 = (x413<<(x414&(x415-x416)));

	if (t20 != 2032) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x417 = UINT32_MAX;
	int32_t x418 = INT32_MIN;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x417<<(x418&(x419-x420)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x433 = 159U;
	static int8_t x434 = 47;
	static int32_t x436 = INT32_MAX;
	volatile int32_t t22 = 37456033;

	t22 = (x433<<(x434&(x435-x436)));

	if (t22 != 159) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x445 = UINT8_MAX;
	int64_t x446 = INT64_MIN;
	int8_t x447 = -1;
	int32_t x448 = INT32_MIN;
	volatile int32_t t23 = -5330;

	t23 = (x445<<(x446&(x447-x448)));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x506 = UINT32_MAX;
	volatile int64_t x508 = INT64_MIN;
	uint32_t t24 = 390U;

	t24 = (x505<<(x506&(x507-x508)));

	if (t24 != 27073442U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x509 = INT64_MAX;
	uint8_t x511 = 3U;
	uint8_t x512 = UINT8_MAX;
	int64_t t25 = INT64_MAX;

	t25 = (x509<<(x510&(x511-x512)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x565 = 0;
	volatile int64_t x567 = 164990LL;
	int64_t x568 = -1LL;
	static int32_t t26 = -33063505;

	t26 = (x565<<(x566&(x567-x568)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x637 = UINT32_MAX;
	volatile int64_t x638 = INT64_MIN;
	static int32_t x639 = INT32_MAX;

	t27 = (x637<<(x638&(x639-x640)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x641 = INT8_MAX;
	static uint32_t x642 = 3U;
	int32_t t28 = -179;

	t28 = (x641<<(x642&(x643-x644)));

	if (t28 != 1016) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x681 = 5U;
	uint32_t x683 = 101631U;
	int32_t t29 = -6;

	t29 = (x681<<(x682&(x683-x684)));

	if (t29 != 5) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x709 = 13LLU;
	volatile int16_t x710 = -1;
	static int8_t x711 = 35;
	int16_t x712 = -1;
	uint64_t t30 = 865LLU;

	t30 = (x709<<(x710&(x711-x712)));

	if (t30 != 893353197568LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x714 = 85;
	int32_t x715 = -927882208;
	int32_t t31 = -15970;

	t31 = (x713<<(x714&(x715-x716)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x721 = INT16_MAX;
	int16_t x724 = -107;
	volatile int32_t t32 = -29502203;

	t32 = (x721<<(x722&(x723-x724)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x753 = 22355084U;
	uint8_t x754 = 80U;
	uint32_t x756 = UINT32_MAX;
	volatile uint32_t t33 = 635U;

	t33 = (x753<<(x754&(x755-x756)));

	if (t33 != 22355084U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x762 = 2;

	t34 = (x761<<(x762&(x763-x764)));

	if (t34 != 2025) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x769 = 48862518U;
	volatile int64_t x771 = -1LL;

	t35 = (x769<<(x770&(x771-x772)));

	if (t35 != 48862518U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x777 = INT64_MAX;
	uint8_t x778 = 1U;
	int64_t t36 = INT64_MAX;

	t36 = (x777<<(x778&(x779-x780)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x833 = 0LLU;
	static int16_t x834 = INT16_MIN;
	volatile uint32_t x835 = UINT32_MAX;
	uint64_t t37 = 189124640398532LLU;

	t37 = (x833<<(x834&(x835-x836)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x845 = UINT8_MAX;
	int32_t x846 = INT32_MIN;
	volatile uint64_t x847 = 855250259LLU;
	int16_t x848 = 7;
	volatile int32_t t38 = 2705;

	t38 = (x845<<(x846&(x847-x848)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x877 = 1092156340U;
	static volatile int8_t x879 = 0;
	volatile int8_t x880 = INT8_MAX;
	static volatile uint32_t t39 = 1U;

	t39 = (x877<<(x878&(x879-x880)));

	if (t39 != 1092156340U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x893 = 815U;
	static volatile uint8_t x894 = 2U;
	uint64_t x895 = 972005525985LLU;
	volatile int16_t x896 = INT16_MIN;
	int32_t t40 = -791015;

	t40 = (x893<<(x894&(x895-x896)));

	if (t40 != 815) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x902 = -1LL;
	volatile int16_t x904 = -1;
	int32_t t41 = -45;

	t41 = (x901<<(x902&(x903-x904)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x905 = UINT8_MAX;
	uint32_t x906 = 390U;
	int32_t x907 = -1;
	int16_t x908 = -1060;
	int32_t t42 = -1;

	t42 = (x905<<(x906&(x907-x908)));

	if (t42 != 1020) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x910 = UINT32_MAX;
	int8_t x911 = INT8_MIN;
	static volatile int8_t x912 = INT8_MIN;
	int64_t t43 = INT64_MAX;

	t43 = (x909<<(x910&(x911-x912)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x945 = 23;
	static uint16_t x946 = 46U;
	int32_t x948 = -1;
	static volatile int32_t t44 = 20;

	t44 = (x945<<(x946&(x947-x948)));

	if (t44 != 92) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x993 = 5690;
	uint32_t x994 = 733U;
	uint64_t x996 = UINT64_MAX;
	int32_t t45 = 6;

	t45 = (x993<<(x994&(x995-x996)));

	if (t45 != 5690) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1017 = 7;
	uint16_t x1018 = UINT16_MAX;
	static int32_t x1020 = -1;
	volatile int32_t t46 = -100576;

	t46 = (x1017<<(x1018&(x1019-x1020)));

	if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1041 = UINT64_MAX;
	int8_t x1042 = INT8_MAX;
	int16_t x1043 = INT16_MIN;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x1041<<(x1042&(x1043-x1044)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1053 = 0U;
	volatile int32_t x1054 = 5582;
	static int64_t x1055 = -1LL;
	uint32_t x1056 = UINT32_MAX;
	int32_t t48 = 69100059;

	t48 = (x1053<<(x1054&(x1055-x1056)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x1073 = UINT16_MAX;
	int32_t x1074 = INT32_MIN;
	int8_t x1075 = INT8_MAX;
	uint32_t x1076 = UINT32_MAX;
	volatile int32_t t49 = -32450107;

	t49 = (x1073<<(x1074&(x1075-x1076)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1077 = 0U;
	int16_t x1078 = INT16_MIN;
	int32_t x1079 = -1;
	int8_t x1080 = INT8_MIN;
	volatile uint32_t t50 = 3U;

	t50 = (x1077<<(x1078&(x1079-x1080)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x1113 = UINT64_MAX;
	static int64_t x1114 = -1LL;
	int32_t x1116 = -1;
	uint64_t t51 = UINT64_MAX;

	t51 = (x1113<<(x1114&(x1115-x1116)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1129 = INT8_MAX;
	static uint16_t x1130 = 5U;
	int64_t x1131 = -374650466304079LL;
	static int32_t x1132 = INT32_MIN;
	static volatile int32_t t52 = -16132357;

	t52 = (x1129<<(x1130&(x1131-x1132)));

	if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1137 = UINT8_MAX;
	uint16_t x1138 = 47U;
	int32_t t53 = -27232;

	t53 = (x1137<<(x1138&(x1139-x1140)));

	if (t53 != 4177920) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1149 = 4;
	int8_t x1150 = INT8_MIN;
	volatile int16_t x1151 = -1;
	int16_t x1152 = -1;
	volatile int32_t t54 = -14096;

	t54 = (x1149<<(x1150&(x1151-x1152)));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x1157 = INT64_MAX;
	static int64_t x1159 = -1LL;
	int32_t x1160 = -1;
	int64_t t55 = INT64_MAX;

	t55 = (x1157<<(x1158&(x1159-x1160)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1181 = 1U;
	int8_t x1182 = -1;
	volatile uint8_t x1183 = 13U;
	int64_t x1184 = -1LL;
	int32_t t56 = -316586605;

	t56 = (x1181<<(x1182&(x1183-x1184)));

	if (t56 != 16384) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1189 = 6U;
	static int32_t x1190 = -1;
	uint32_t x1191 = UINT32_MAX;
	static int16_t x1192 = -1;
	int32_t t57 = -125;

	t57 = (x1189<<(x1190&(x1191-x1192)));

	if (t57 != 6) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x1197 = UINT32_MAX;
	int8_t x1199 = -1;
	static int32_t x1200 = -1;
	static volatile uint32_t t58 = UINT32_MAX;

	t58 = (x1197<<(x1198&(x1199-x1200)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1237 = 51;
	static uint64_t x1238 = 3731LLU;
	static int64_t x1239 = INT64_MIN;
	int32_t x1240 = INT32_MIN;

	t59 = (x1237<<(x1238&(x1239-x1240)));

	if (t59 != 51) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1261 = 242U;
	static int32_t x1262 = INT32_MAX;
	int32_t x1263 = -1;
	int16_t x1264 = -1;
	uint32_t t60 = 7937U;

	t60 = (x1261<<(x1262&(x1263-x1264)));

	if (t60 != 242U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x1277 = 11U;
	volatile int64_t x1278 = INT64_MIN;
	int64_t x1279 = INT64_MIN;
	static volatile uint64_t x1280 = 11302008918LLU;

	t61 = (x1277<<(x1278&(x1279-x1280)));

	if (t61 != 11) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1309 = UINT32_MAX;
	int64_t x1310 = INT64_MIN;
	int32_t x1312 = INT32_MIN;
	uint32_t t62 = UINT32_MAX;

	t62 = (x1309<<(x1310&(x1311-x1312)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x1345 = 0;
	static int32_t x1346 = INT32_MAX;
	volatile int64_t x1348 = INT64_MAX;
	int32_t t63 = 476;

	t63 = (x1345<<(x1346&(x1347-x1348)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1353 = 74008373021861062LLU;
	volatile uint8_t x1354 = 6U;
	int64_t x1355 = 1434664627LL;
	int16_t x1356 = INT16_MIN;
	static volatile uint64_t t64 = 2LLU;

	t64 = (x1353<<(x1354&(x1355-x1356)));

	if (t64 != 296033492087444248LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1397 = 1498187158U;
	int32_t x1398 = 1;
	static int16_t x1399 = INT16_MIN;
	uint8_t x1400 = 4U;
	volatile uint32_t t65 = 79978U;

	t65 = (x1397<<(x1398&(x1399-x1400)));

	if (t65 != 1498187158U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1413 = 2350U;
	int8_t x1414 = 28;
	static int16_t x1415 = INT16_MIN;
	static int8_t x1416 = INT8_MAX;
	static uint32_t t66 = 139283051U;

	t66 = (x1413<<(x1414&(x1415-x1416)));

	if (t66 != 2350U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x1470 = INT16_MIN;
	int8_t x1471 = 0;
	int16_t x1472 = -1;

	t67 = (x1469<<(x1470&(x1471-x1472)));

	if (t67 != 21457) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1521 = INT8_MAX;
	uint8_t x1523 = 11U;
	int16_t x1524 = -1;
	volatile int32_t t68 = 3;

	t68 = (x1521<<(x1522&(x1523-x1524)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1529 = 21802LL;
	volatile uint64_t x1530 = 0LLU;
	volatile int64_t x1531 = 29258260LL;
	int32_t x1532 = INT32_MIN;
	int64_t t69 = -1LL;

	t69 = (x1529<<(x1530&(x1531-x1532)));

	if (t69 != 21802LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1597 = 11135LLU;
	int32_t x1598 = INT32_MAX;
	int64_t x1599 = -1LL;
	int32_t x1600 = -1;
	uint64_t t70 = 1212843542790LLU;

	t70 = (x1597<<(x1598&(x1599-x1600)));

	if (t70 != 11135LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1605 = 5894;
	int8_t x1606 = 61;
	static int16_t x1607 = INT16_MAX;
	int32_t t71 = -1531435;

	t71 = (x1605<<(x1606&(x1607-x1608)));

	if (t71 != 5894) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1609 = UINT32_MAX;
	uint16_t x1610 = 4U;
	volatile int16_t x1611 = -56;
	int64_t x1612 = -1LL;
	uint32_t t72 = UINT32_MAX;

	t72 = (x1609<<(x1610&(x1611-x1612)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1629 = UINT64_MAX;
	static volatile int16_t x1631 = 0;
	volatile uint64_t t73 = 1004784692LLU;

	t73 = (x1629<<(x1630&(x1631-x1632)));

	if (t73 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1635 = UINT64_MAX;
	int64_t x1636 = -1LL;
	volatile int64_t t74 = -14879LL;

	t74 = (x1633<<(x1634&(x1635-x1636)));

	if (t74 != 15LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1654 = -43638;

	t75 = (x1653<<(x1654&(x1655-x1656)));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1657 = 10U;
	int64_t x1658 = INT64_MIN;
	int32_t x1659 = -3788;
	int32_t t76 = 7;

	t76 = (x1657<<(x1658&(x1659-x1660)));

	if (t76 != 10) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1673 = UINT32_MAX;
	volatile int8_t x1675 = 0;
	volatile int64_t x1676 = -1LL;
	uint32_t t77 = 238095U;

	t77 = (x1673<<(x1674&(x1675-x1676)));

	if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1681 = 155691585;
	int16_t x1682 = 2;
	int32_t x1684 = 67;
	volatile int32_t t78 = 28455;

	t78 = (x1681<<(x1682&(x1683-x1684)));

	if (t78 != 155691585) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1694 = -1;
	uint32_t x1695 = UINT32_MAX;
	static int8_t x1696 = -1;
	volatile int32_t t79 = 109624;

	t79 = (x1693<<(x1694&(x1695-x1696)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1717 = UINT64_MAX;
	uint64_t x1718 = 63450703357281872LLU;
	static uint8_t x1719 = 30U;
	uint64_t x1720 = UINT64_MAX;
	uint64_t t80 = 115221779LLU;

	t80 = (x1717<<(x1718&(x1719-x1720)));

	if (t80 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1729 = 2826;
	volatile int64_t x1730 = INT64_MIN;
	int64_t x1731 = 459135LL;
	int8_t x1732 = -27;
	volatile int32_t t81 = 5484;

	t81 = (x1729<<(x1730&(x1731-x1732)));

	if (t81 != 2826) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1750 = INT32_MIN;
	volatile uint16_t x1751 = 3058U;
	uint32_t x1752 = UINT32_MAX;
	static int32_t t82 = -866108;

	t82 = (x1749<<(x1750&(x1751-x1752)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x1753 = UINT8_MAX;
	uint64_t x1755 = 2911375050089773LLU;
	uint16_t x1756 = 315U;
	volatile int32_t t83 = 236;

	t83 = (x1753<<(x1754&(x1755-x1756)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1757 = 3395;
	uint64_t x1758 = 29066LLU;
	int8_t x1759 = -1;
	uint16_t x1760 = UINT16_MAX;
	int32_t t84 = 893;

	t84 = (x1757<<(x1758&(x1759-x1760)));

	if (t84 != 3395) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1797 = UINT32_MAX;
	uint8_t x1798 = 1U;
	int8_t x1799 = INT8_MAX;
	volatile uint32_t x1800 = UINT32_MAX;

	t85 = (x1797<<(x1798&(x1799-x1800)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1809 = UINT8_MAX;
	volatile uint64_t x1811 = 9723894102LLU;
	int32_t t86 = -708097;

	t86 = (x1809<<(x1810&(x1811-x1812)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1813 = INT16_MAX;
	uint16_t x1814 = 126U;
	int32_t t87 = 43466;

	t87 = (x1813<<(x1814&(x1815-x1816)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1829 = 1794227551978636LLU;
	volatile uint8_t x1830 = UINT8_MAX;
	static uint64_t x1831 = 2LLU;
	uint64_t t88 = 41219333LLU;

	t88 = (x1829<<(x1830&(x1831-x1832)));

	if (t88 != 7176910207914544LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x1850 = INT32_MIN;
	uint16_t x1851 = UINT16_MAX;
	int16_t x1852 = -16;

	t89 = (x1849<<(x1850&(x1851-x1852)));

	if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x1889 = 14586U;
	int32_t x1890 = INT32_MAX;
	static uint64_t x1891 = UINT64_MAX;
	int8_t x1892 = -1;
	static volatile int32_t t90 = -126785;

	t90 = (x1889<<(x1890&(x1891-x1892)));

	if (t90 != 14586) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1918 = 0;
	volatile int8_t x1919 = INT8_MIN;
	int32_t t91 = 24640;

	t91 = (x1917<<(x1918&(x1919-x1920)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x2018 = UINT8_MAX;
	uint32_t x2019 = UINT32_MAX;
	int32_t x2020 = 183907307;
	volatile uint64_t t92 = 2912LLU;

	t92 = (x2017<<(x2018&(x2019-x2020)));

	if (t92 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x2021 = 129976U;
	uint8_t x2022 = 0U;
	volatile int8_t x2023 = 1;
	uint32_t x2024 = 318U;
	uint32_t t93 = 1195U;

	t93 = (x2021<<(x2022&(x2023-x2024)));

	if (t93 != 129976U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x2029 = 1977U;
	static uint8_t x2030 = UINT8_MAX;
	int32_t x2031 = -1;
	int16_t x2032 = -1;
	int32_t t94 = -26;

	t94 = (x2029<<(x2030&(x2031-x2032)));

	if (t94 != 1977) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2045 = 1;
	static uint16_t x2046 = 6U;
	volatile int8_t x2047 = INT8_MIN;
	int16_t x2048 = -35;
	int32_t t95 = -1;

	t95 = (x2045<<(x2046&(x2047-x2048)));

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2117 = 1574LLU;
	int8_t x2118 = 1;
	int8_t x2119 = -1;
	volatile int32_t x2120 = -1;

	t96 = (x2117<<(x2118&(x2119-x2120)));

	if (t96 != 1574LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2121 = 51U;
	uint8_t x2122 = 39U;
	int8_t x2123 = 0;
	static uint64_t x2124 = 56181LLU;
	int32_t t97 = -2525;

	t97 = (x2121<<(x2122&(x2123-x2124)));

	if (t97 != 408) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2138 = 7U;
	uint32_t x2140 = UINT32_MAX;
	static int32_t t98 = 22158;

	t98 = (x2137<<(x2138&(x2139-x2140)));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x2165 = 12U;
	volatile int64_t x2168 = -1LL;
	volatile int32_t t99 = -68718;

	t99 = (x2165<<(x2166&(x2167-x2168)));

	if (t99 != 12) { NG(); } else { ; }
	
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

