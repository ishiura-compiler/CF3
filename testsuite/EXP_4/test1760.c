#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x18 = INT16_MAX;
int32_t x19 = 412213;
int32_t t1 = 402834713;
int64_t x25 = 14072804374599LL;
int32_t x27 = INT32_MIN;
int8_t x94 = 1;
volatile uint8_t x95 = 0U;
int64_t x96 = INT64_MAX;
int64_t x97 = INT64_MAX;
static volatile uint16_t x98 = UINT16_MAX;
int64_t x101 = INT64_MIN;
int8_t x102 = 3;
static int64_t t5 = 186084902476LL;
volatile int8_t x184 = 9;
int32_t x191 = INT32_MIN;
uint16_t x192 = 508U;
volatile uint64_t t10 = 471LLU;
uint32_t x194 = 77811U;
int8_t x207 = -1;
static volatile uint8_t x270 = 1U;
int32_t x271 = INT32_MAX;
int64_t x272 = INT64_MIN;
int8_t x313 = INT8_MAX;
volatile int32_t x341 = INT32_MIN;
static int16_t x347 = 7;
uint64_t t17 = 4359490382554316LLU;
volatile int8_t x349 = 41;
static int32_t x384 = 0;
int32_t t19 = -8934564;
static uint32_t x461 = 26607264U;
int64_t t22 = -299378118686LL;
int32_t t23 = 5591476;
volatile uint64_t t25 = 27371269826967563LLU;
uint16_t x671 = 241U;
volatile uint64_t t26 = 71373092702364019LLU;
int16_t x700 = INT16_MIN;
int32_t x763 = 2;
int32_t x764 = INT32_MAX;
static uint64_t x773 = 598005716841269370LLU;
int16_t x776 = INT16_MIN;
uint64_t t34 = 1183155274668889645LLU;
static int8_t x829 = -1;
volatile uint8_t x830 = 31U;
volatile uint32_t t38 = 138U;
uint32_t x925 = UINT32_MAX;
uint16_t x927 = 10302U;
volatile uint32_t t39 = 186U;
uint64_t t44 = 4LLU;
int16_t x1127 = INT16_MIN;
volatile uint64_t t49 = 178137LLU;
uint64_t x1142 = 453921145994LLU;
uint64_t t50 = 223303148488293114LLU;
int32_t x1226 = 13929;
uint8_t x1227 = 6U;
static uint16_t x1262 = 7179U;
int64_t t55 = 635353844466248873LL;
volatile int32_t x1339 = INT32_MIN;
uint8_t x1340 = UINT8_MAX;
uint32_t x1369 = 43354U;
volatile int32_t t59 = 1;
uint64_t x1466 = UINT64_MAX;
int16_t x1507 = INT16_MIN;
volatile int16_t x1508 = INT16_MAX;
int32_t t63 = 9;
int32_t t64 = 4;
static volatile uint32_t x1575 = UINT32_MAX;
uint8_t x1678 = 8U;
volatile uint64_t t71 = 153526339533734LLU;
volatile uint32_t t72 = 24117U;
uint8_t x1736 = 0U;
int64_t x1801 = -1LL;
static volatile uint64_t x1802 = UINT64_MAX;
static int8_t x1805 = INT8_MAX;
uint16_t x1842 = 7066U;
uint32_t x1884 = 118409930U;
int16_t x1991 = INT16_MIN;
int8_t x2021 = INT8_MIN;
volatile int16_t x2110 = INT16_MAX;
int8_t x2126 = 10;
int32_t t85 = -121407309;
uint32_t x2154 = 11867U;
uint16_t x2192 = 225U;
static uint64_t t88 = 133322886531LLU;
uint32_t x2219 = 0U;
int64_t t90 = 47690LL;
int8_t x2226 = 36;
int32_t x2227 = 35;
volatile int16_t x2265 = INT16_MIN;
int8_t x2267 = 1;
static int32_t t93 = 127;
static int8_t x2345 = 31;
int64_t t95 = 1392LL;
int32_t x2381 = INT32_MIN;
static uint16_t x2384 = 5047U;
uint32_t x2398 = 370U;


void f0(void) {
	int64_t x5 = 100790LL;
	uint64_t x6 = 15363804836LLU;
	static uint32_t x7 = 63U;
	int8_t x8 = INT8_MIN;
	static volatile uint64_t t0 = 5364755LLU;

	t0 = (x5%(x6<<(x7&x8)));

	if (t0 != 100790LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x17 = 49U;
	uint8_t x20 = 6U;

	t1 = (x17%(x18<<(x19&x20)));

	if (t1 != 49) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x26 = 25LLU;
	uint8_t x28 = 0U;
	uint64_t t2 = 3372435LLU;

	t2 = (x25%(x26<<(x27&x28)));

	if (t2 != 24LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x93 = INT16_MAX;
	static volatile int32_t t3 = -308;

	t3 = (x93%(x94<<(x95&x96)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x99 = 12;
	uint16_t x100 = 0U;
	volatile int64_t t4 = -30120LL;

	t4 = (x97%(x98<<(x99&x100)));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x103 = 1;
	int8_t x104 = -1;

	t5 = (x101%(x102<<(x103&x104)));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x121 = 137397;
	uint16_t x122 = 226U;
	static int16_t x123 = INT16_MIN;
	volatile uint8_t x124 = 7U;
	volatile int32_t t6 = -5;

	t6 = (x121%(x122<<(x123&x124)));

	if (t6 != 215) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x129 = INT32_MIN;
	uint64_t x130 = 50030LLU;
	uint64_t x131 = 21LLU;
	int8_t x132 = -1;
	uint64_t t7 = 275758152388414122LLU;

	t7 = (x129%(x130<<(x131&x132)));

	if (t7 != 63090720768LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x161 = -1;
	uint16_t x162 = 14966U;
	static int16_t x163 = 4;
	int64_t x164 = 12777191870057LL;
	volatile int32_t t8 = 311;

	t8 = (x161%(x162<<(x163&x164)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x182 = 13938U;
	uint8_t x183 = 66U;
	int64_t t9 = -1833909LL;

	t9 = (x181%(x182<<(x183&x184)));

	if (t9 != -13826LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x189 = 1724261U;
	uint64_t x190 = UINT64_MAX;

	t10 = (x189%(x190<<(x191&x192)));

	if (t10 != 1724261LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x193 = 6425;
	uint8_t x195 = UINT8_MAX;
	uint8_t x196 = 1U;
	volatile uint32_t t11 = 181157549U;

	t11 = (x193%(x194<<(x195&x196)));

	if (t11 != 6425U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x205 = 1LLU;
	int32_t x206 = 59967553;
	uint8_t x208 = 1U;
	uint64_t t12 = 3LLU;

	t12 = (x205%(x206<<(x207&x208)));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x257 = INT64_MIN;
	static volatile uint8_t x258 = 1U;
	static volatile int16_t x259 = INT16_MIN;
	int8_t x260 = 0;
	volatile int64_t t13 = 2822101591945325LL;

	t13 = (x257%(x258<<(x259&x260)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x269 = INT16_MIN;
	static volatile int32_t t14 = 103784;

	t14 = (x269%(x270<<(x271&x272)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x314 = 1U;
	int8_t x315 = 12;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t15 = -11644;

	t15 = (x313%(x314<<(x315&x316)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x342 = 935193908U;
	uint32_t x343 = 1944820U;
	int32_t x344 = INT32_MIN;
	volatile uint32_t t16 = 5474327U;

	t16 = (x341%(x342<<(x343&x344)));

	if (t16 != 277095832U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x345 = 29;
	uint64_t x346 = UINT64_MAX;
	uint16_t x348 = UINT16_MAX;

	t17 = (x345%(x346<<(x347&x348)));

	if (t17 != 29LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x350 = UINT8_MAX;
	uint16_t x351 = 12U;
	int8_t x352 = -6;
	static int32_t t18 = 217281;

	t18 = (x349%(x350<<(x351&x352)));

	if (t18 != 41) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x381 = 27U;
	int8_t x382 = 53;
	volatile int8_t x383 = 0;

	t19 = (x381%(x382<<(x383&x384)));

	if (t19 != 27) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x413 = UINT8_MAX;
	static uint16_t x414 = UINT16_MAX;
	uint16_t x415 = 2U;
	int64_t x416 = -1LL;
	int32_t t20 = 432599942;

	t20 = (x413%(x414<<(x415&x416)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x462 = 1513314812U;
	int8_t x463 = 13;
	uint16_t x464 = 4194U;
	static uint32_t t21 = 7683664U;

	t21 = (x461%(x462<<(x463&x464)));

	if (t21 != 26607264U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x489 = 22102U;
	static int64_t x490 = 5538LL;
	int64_t x491 = INT64_MIN;
	static int16_t x492 = INT16_MAX;

	t22 = (x489%(x490<<(x491&x492)));

	if (t22 != 5488LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x493 = UINT8_MAX;
	volatile int8_t x494 = INT8_MAX;
	static uint8_t x495 = 5U;
	static int32_t x496 = -1;

	t23 = (x493%(x494<<(x495&x496)));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x557 = INT16_MIN;
	int8_t x558 = 1;
	volatile int32_t x559 = 793806;
	uint16_t x560 = 35U;
	volatile int32_t t24 = 13392;

	t24 = (x557%(x558<<(x559&x560)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x565 = INT16_MAX;
	uint64_t x566 = UINT64_MAX;
	static uint16_t x567 = 518U;
	int32_t x568 = INT32_MIN;

	t25 = (x565%(x566<<(x567&x568)));

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x669 = -1;
	uint64_t x670 = 143662891357818LLU;
	int16_t x672 = INT16_MIN;

	t26 = (x669%(x670<<(x671&x672)));

	if (t26 != 141497583004779LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x693 = INT8_MIN;
	volatile uint64_t x694 = UINT64_MAX;
	uint16_t x695 = 2U;
	int32_t x696 = -2;
	volatile uint64_t t27 = 1LLU;

	t27 = (x693%(x694<<(x695&x696)));

	if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x697 = 10;
	uint8_t x698 = 4U;
	volatile uint16_t x699 = 33U;
	static int32_t t28 = 3;

	t28 = (x697%(x698<<(x699&x700)));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x725 = 46U;
	uint8_t x726 = 35U;
	int64_t x727 = INT64_MIN;
	uint16_t x728 = 109U;
	int32_t t29 = -1633059;

	t29 = (x725%(x726<<(x727&x728)));

	if (t29 != 11) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x749 = 2U;
	static int64_t x750 = INT64_MAX;
	uint16_t x751 = 0U;
	uint8_t x752 = 6U;
	static volatile int64_t t30 = -265999799981LL;

	t30 = (x749%(x750<<(x751&x752)));

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x753 = UINT32_MAX;
	int16_t x754 = 1;
	volatile uint16_t x755 = 1U;
	int64_t x756 = INT64_MIN;
	volatile uint32_t t31 = 377U;

	t31 = (x753%(x754<<(x755&x756)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x761 = -1;
	static uint32_t x762 = 472U;
	uint32_t t32 = 17895U;

	t32 = (x761%(x762<<(x763&x764)));

	if (t32 != 1407U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x765 = 1;
	volatile uint64_t x766 = 340LLU;
	volatile int8_t x767 = 0;
	int16_t x768 = INT16_MIN;
	uint64_t t33 = 35739529067LLU;

	t33 = (x765%(x766<<(x767&x768)));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x774 = 63U;
	static uint16_t x775 = 109U;

	t34 = (x773%(x774<<(x775&x776)));

	if (t34 != 18LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x793 = 32U;
	static uint16_t x794 = 14U;
	int32_t x795 = 17093513;
	int64_t x796 = INT64_MIN;
	volatile uint32_t t35 = 2621035U;

	t35 = (x793%(x794<<(x795&x796)));

	if (t35 != 4U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x831 = 237344871U;
	int16_t x832 = 18;
	volatile int32_t t36 = -44098;

	t36 = (x829%(x830<<(x831&x832)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x857 = -157626LL;
	volatile int8_t x858 = INT8_MAX;
	int32_t x859 = INT32_MAX;
	static int64_t x860 = INT64_MIN;
	int64_t t37 = -237899LL;

	t37 = (x857%(x858<<(x859&x860)));

	if (t37 != -19LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x917 = 1;
	static uint32_t x918 = UINT32_MAX;
	uint8_t x919 = 0U;
	static int16_t x920 = INT16_MAX;

	t38 = (x917%(x918<<(x919&x920)));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x926 = INT8_MAX;
	int16_t x928 = 3;

	t39 = (x925%(x926<<(x927&x928)));

	if (t39 != 15U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x941 = 1LLU;
	volatile uint16_t x942 = 46U;
	int16_t x943 = 1;
	static int8_t x944 = -1;
	uint64_t t40 = 27326LLU;

	t40 = (x941%(x942<<(x943&x944)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x949 = 27047U;
	volatile int32_t x950 = INT32_MAX;
	volatile int32_t x951 = 0;
	int16_t x952 = -1;
	int32_t t41 = 385;

	t41 = (x949%(x950<<(x951&x952)));

	if (t41 != 27047) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x965 = UINT64_MAX;
	int16_t x966 = INT16_MAX;
	int64_t x967 = INT64_MIN;
	static int8_t x968 = 3;
	volatile uint64_t t42 = 6LLU;

	t42 = (x965%(x966<<(x967&x968)));

	if (t42 != 15LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x973 = UINT8_MAX;
	int64_t x974 = 4622191010187LL;
	static int16_t x975 = 1;
	volatile int16_t x976 = -1;
	volatile int64_t t43 = -3LL;

	t43 = (x973%(x974<<(x975&x976)));

	if (t43 != 255LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x985 = -1758LL;
	uint64_t x986 = UINT64_MAX;
	uint8_t x987 = 20U;
	static int16_t x988 = INT16_MAX;

	t44 = (x985%(x986<<(x987&x988)));

	if (t44 != 1046818LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1009 = 841U;
	volatile uint64_t x1010 = 1416LLU;
	int8_t x1011 = INT8_MAX;
	uint8_t x1012 = 20U;
	uint64_t t45 = 741768249LLU;

	t45 = (x1009%(x1010<<(x1011&x1012)));

	if (t45 != 841LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1045 = -750;
	uint32_t x1046 = 500228508U;
	static uint64_t x1047 = 6LLU;
	static volatile uint8_t x1048 = UINT8_MAX;
	volatile uint32_t t46 = 10U;

	t46 = (x1045%(x1046<<(x1047&x1048)));

	if (t46 != 395259666U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1109 = INT64_MAX;
	uint32_t x1110 = 464377731U;
	static volatile uint8_t x1111 = 2U;
	uint64_t x1112 = 13108600489115LLU;
	volatile int64_t t47 = 47966463LL;

	t47 = (x1109%(x1110<<(x1111&x1112)));

	if (t47 != 1099302427LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1125 = -18523956965699LL;
	static volatile uint32_t x1126 = 63517079U;
	int8_t x1128 = INT8_MAX;
	int64_t t48 = 1860LL;

	t48 = (x1125%(x1126<<(x1127&x1128)));

	if (t48 != -26597376LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1129 = 1U;
	static uint64_t x1130 = 232835874992022360LLU;
	int8_t x1131 = 0;
	uint64_t x1132 = UINT64_MAX;

	t49 = (x1129%(x1130<<(x1131&x1132)));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1141 = -17524824LL;
	static volatile int16_t x1143 = -363;
	int8_t x1144 = INT8_MAX;

	t50 = (x1141%(x1142<<(x1143&x1144)));

	if (t50 != 359852929583454120LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1205 = -1;
	uint16_t x1206 = 60U;
	volatile int16_t x1207 = 1;
	int32_t x1208 = -44;
	static volatile int32_t t51 = -16;

	t51 = (x1205%(x1206<<(x1207&x1208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1225 = INT16_MIN;
	uint64_t x1228 = 1815983LLU;
	volatile int32_t t52 = 4017;

	t52 = (x1225%(x1226<<(x1227&x1228)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1253 = 80U;
	uint64_t x1254 = UINT64_MAX;
	int16_t x1255 = INT16_MIN;
	volatile int32_t x1256 = 0;
	volatile uint64_t t53 = 49865285819LLU;

	t53 = (x1253%(x1254<<(x1255&x1256)));

	if (t53 != 80LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1261 = UINT16_MAX;
	static uint32_t x1263 = 5U;
	static int16_t x1264 = -1;
	int32_t t54 = 8346;

	t54 = (x1261%(x1262<<(x1263&x1264)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1297 = INT64_MIN;
	int8_t x1298 = INT8_MAX;
	volatile uint16_t x1299 = 206U;
	uint8_t x1300 = 3U;

	t55 = (x1297%(x1298<<(x1299&x1300)));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1337 = INT8_MIN;
	volatile int16_t x1338 = INT16_MAX;
	int32_t t56 = 444;

	t56 = (x1337%(x1338<<(x1339&x1340)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1353 = -1LL;
	int16_t x1354 = INT16_MAX;
	int16_t x1355 = INT16_MIN;
	uint8_t x1356 = UINT8_MAX;
	static int64_t t57 = 24544LL;

	t57 = (x1353%(x1354<<(x1355&x1356)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1370 = UINT8_MAX;
	uint8_t x1371 = 5U;
	int32_t x1372 = INT32_MIN;
	static uint32_t t58 = 9421187U;

	t58 = (x1369%(x1370<<(x1371&x1372)));

	if (t58 != 4U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1385 = 2U;
	int32_t x1386 = 497384;
	static uint32_t x1387 = 0U;
	int32_t x1388 = INT32_MAX;

	t59 = (x1385%(x1386<<(x1387&x1388)));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1465 = INT16_MIN;
	int8_t x1467 = -1;
	static volatile uint8_t x1468 = 25U;
	uint64_t t60 = 1407LLU;

	t60 = (x1465%(x1466<<(x1467&x1468)));

	if (t60 != 33521664LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1477 = INT32_MIN;
	volatile uint16_t x1478 = 80U;
	uint64_t x1479 = 4443798739210361765LLU;
	uint16_t x1480 = 5U;
	volatile int32_t t61 = -588667389;

	t61 = (x1477%(x1478<<(x1479&x1480)));

	if (t61 != -2048) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x1505 = 20307LL;
	static int64_t x1506 = INT64_MAX;
	int64_t t62 = -4403482LL;

	t62 = (x1505%(x1506<<(x1507&x1508)));

	if (t62 != 20307LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1509 = INT16_MIN;
	volatile int16_t x1510 = INT16_MAX;
	volatile int16_t x1511 = INT16_MIN;
	static uint8_t x1512 = 12U;

	t63 = (x1509%(x1510<<(x1511&x1512)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1513 = 8U;
	static volatile uint16_t x1514 = 5588U;
	static uint8_t x1515 = 104U;
	uint8_t x1516 = 2U;

	t64 = (x1513%(x1514<<(x1515&x1516)));

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x1573 = 9U;
	int64_t x1574 = 3LL;
	volatile int8_t x1576 = 18;
	int64_t t65 = -19908316192152457LL;

	t65 = (x1573%(x1574<<(x1575&x1576)));

	if (t65 != 9LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1577 = -1;
	uint64_t x1578 = 365154LLU;
	volatile uint32_t x1579 = 30U;
	volatile int32_t x1580 = -4269;
	volatile uint64_t t66 = 217242372586LLU;

	t66 = (x1577%(x1578<<(x1579&x1580)));

	if (t66 != 24320671743LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1633 = 2244U;
	int32_t x1634 = 23847;
	volatile uint32_t x1635 = 1U;
	static volatile int16_t x1636 = -6657;
	volatile int32_t t67 = 1554;

	t67 = (x1633%(x1634<<(x1635&x1636)));

	if (t67 != 2244) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1645 = -126;
	uint64_t x1646 = UINT64_MAX;
	uint64_t x1647 = 942LLU;
	static volatile int64_t x1648 = INT64_MIN;
	static uint64_t t68 = 224LLU;

	t68 = (x1645%(x1646<<(x1647&x1648)));

	if (t68 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x1673 = 1537725LL;
	uint32_t x1674 = 1512U;
	uint8_t x1675 = UINT8_MAX;
	static int16_t x1676 = INT16_MIN;
	static volatile int64_t t69 = 17078301LL;

	t69 = (x1673%(x1674<<(x1675&x1676)));

	if (t69 != 21LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1677 = 1;
	static uint32_t x1679 = UINT32_MAX;
	int32_t x1680 = 17;
	volatile int32_t t70 = -3;

	t70 = (x1677%(x1678<<(x1679&x1680)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1689 = 527851138260921086LLU;
	volatile uint32_t x1690 = UINT32_MAX;
	int16_t x1691 = 3;
	int64_t x1692 = -1LL;

	t71 = (x1689%(x1690<<(x1691&x1692)));

	if (t71 != 2163104126LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1717 = -11015125;
	static uint32_t x1718 = 140253976U;
	static uint32_t x1719 = 228457U;
	uint32_t x1720 = 0U;

	t72 = (x1717%(x1718<<(x1719&x1720)));

	if (t72 != 76332891U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1733 = -38;
	static uint32_t x1734 = 30173U;
	volatile int8_t x1735 = -1;
	volatile uint32_t t73 = 537583908U;

	t73 = (x1733%(x1734<<(x1735&x1736)));

	if (t73 != 21746U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1749 = INT8_MIN;
	int16_t x1750 = INT16_MAX;
	volatile uint8_t x1751 = 6U;
	uint32_t x1752 = UINT32_MAX;
	volatile int32_t t74 = -4882442;

	t74 = (x1749%(x1750<<(x1751&x1752)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1803 = 59U;
	volatile uint32_t x1804 = 232582366U;
	volatile uint64_t t75 = 45038555280149LLU;

	t75 = (x1801%(x1802<<(x1803&x1804)));

	if (t75 != 67108863LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x1806 = 13399;
	int8_t x1807 = 1;
	uint64_t x1808 = 1917154LLU;
	volatile int32_t t76 = -1285;

	t76 = (x1805%(x1806<<(x1807&x1808)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1841 = 31U;
	int64_t x1843 = INT64_MIN;
	uint8_t x1844 = 20U;
	int32_t t77 = 54;

	t77 = (x1841%(x1842<<(x1843&x1844)));

	if (t77 != 31) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1881 = 604835867516LLU;
	int8_t x1882 = INT8_MAX;
	int8_t x1883 = 18;
	static volatile uint64_t t78 = 79158096567789151LLU;

	t78 = (x1881%(x1882<<(x1883&x1884)));

	if (t78 != 228LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1989 = -3;
	volatile uint32_t x1990 = UINT32_MAX;
	uint64_t x1992 = 29LLU;
	uint32_t t79 = 2634830U;

	t79 = (x1989%(x1990<<(x1991&x1992)));

	if (t79 != 4294967293U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1993 = INT32_MIN;
	int32_t x1994 = INT32_MAX;
	uint32_t x1995 = 4U;
	int16_t x1996 = INT16_MIN;
	int32_t t80 = 7648896;

	t80 = (x1993%(x1994<<(x1995&x1996)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2022 = 32041279660240LL;
	int8_t x2023 = 3;
	static volatile int8_t x2024 = 15;
	volatile int64_t t81 = -1LL;

	t81 = (x2021%(x2022<<(x2023&x2024)));

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x2077 = 2028U;
	uint32_t x2078 = UINT32_MAX;
	volatile uint8_t x2079 = 3U;
	volatile int8_t x2080 = INT8_MIN;
	volatile uint32_t t82 = 1400924897U;

	t82 = (x2077%(x2078<<(x2079&x2080)));

	if (t82 != 2028U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2109 = UINT8_MAX;
	uint16_t x2111 = UINT16_MAX;
	uint8_t x2112 = 6U;
	int32_t t83 = 31978810;

	t83 = (x2109%(x2110<<(x2111&x2112)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2117 = -1;
	static uint32_t x2118 = 7U;
	static volatile uint16_t x2119 = 758U;
	int16_t x2120 = INT16_MIN;
	uint32_t t84 = 1726811U;

	t84 = (x2117%(x2118<<(x2119&x2120)));

	if (t84 != 3U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2125 = -1;
	uint16_t x2127 = 120U;
	int64_t x2128 = INT64_MIN;

	t85 = (x2125%(x2126<<(x2127&x2128)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2153 = UINT16_MAX;
	int16_t x2155 = -1;
	int64_t x2156 = 0LL;
	uint32_t t86 = 125U;

	t86 = (x2153%(x2154<<(x2155&x2156)));

	if (t86 != 6200U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2189 = INT16_MAX;
	uint8_t x2190 = UINT8_MAX;
	int64_t x2191 = INT64_MIN;
	volatile int32_t t87 = 109414;

	t87 = (x2189%(x2190<<(x2191&x2192)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2205 = -34;
	uint64_t x2206 = 13LLU;
	uint32_t x2207 = UINT32_MAX;
	uint8_t x2208 = 12U;

	t88 = (x2205%(x2206<<(x2207&x2208)));

	if (t88 != 12254LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2209 = 4039;
	volatile uint16_t x2210 = 163U;
	static volatile uint16_t x2211 = 0U;
	int64_t x2212 = 224745227253LL;
	static volatile int32_t t89 = -60034427;

	t89 = (x2209%(x2210<<(x2211&x2212)));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2217 = -1;
	int64_t x2218 = INT64_MAX;
	int64_t x2220 = INT64_MAX;

	t90 = (x2217%(x2218<<(x2219&x2220)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2225 = 31;
	volatile int64_t x2228 = INT64_MIN;
	int32_t t91 = 8175529;

	t91 = (x2225%(x2226<<(x2227&x2228)));

	if (t91 != 31) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x2266 = INT64_MAX;
	int32_t x2268 = INT32_MIN;
	static volatile int64_t t92 = 878972478LL;

	t92 = (x2265%(x2266<<(x2267&x2268)));

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x2277 = 51;
	volatile uint8_t x2278 = 102U;
	static uint16_t x2279 = 1019U;
	volatile int8_t x2280 = 3;

	t93 = (x2277%(x2278<<(x2279&x2280)));

	if (t93 != 51) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2346 = 56;
	static int8_t x2347 = 7;
	uint32_t x2348 = 522U;
	volatile int32_t t94 = 444;

	t94 = (x2345%(x2346<<(x2347&x2348)));

	if (t94 != 31) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2357 = -1073278507LL;
	uint32_t x2358 = 14135448U;
	volatile uint8_t x2359 = 0U;
	int16_t x2360 = 0;

	t95 = (x2357%(x2358<<(x2359&x2360)));

	if (t95 != -13119907LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2382 = 6;
	int16_t x2383 = INT16_MIN;
	int32_t t96 = 371351784;

	t96 = (x2381%(x2382<<(x2383&x2384)));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2389 = -6100;
	static uint16_t x2390 = UINT16_MAX;
	volatile int64_t x2391 = INT64_MIN;
	volatile int32_t x2392 = 65082;
	int32_t t97 = -310602277;

	t97 = (x2389%(x2390<<(x2391&x2392)));

	if (t97 != -6100) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x2397 = INT32_MAX;
	uint32_t x2399 = UINT32_MAX;
	static int64_t x2400 = INT64_MIN;
	uint32_t t98 = 19289U;

	t98 = (x2397%(x2398<<(x2399&x2400)));

	if (t98 != 317U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2405 = 440447748863LL;
	static int8_t x2406 = 3;
	volatile int16_t x2407 = 1859;
	volatile int16_t x2408 = INT16_MIN;
	volatile int64_t t99 = -40LL;

	t99 = (x2405%(x2406<<(x2407&x2408)));

	if (t99 != 2LL) { NG(); } else { ; }
	
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

