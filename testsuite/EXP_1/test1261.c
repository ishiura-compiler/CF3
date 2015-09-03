#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = -124LL;
int64_t x30 = INT64_MAX;
int16_t x81 = INT16_MAX;
int64_t x82 = INT64_MIN;
uint8_t x83 = 6U;
volatile int64_t t4 = -1LL;
uint64_t x105 = 410LLU;
uint8_t x127 = 11U;
int64_t x139 = 0LL;
volatile int32_t x266 = INT32_MAX;
int64_t t11 = -1827470646201042LL;
volatile int32_t x269 = INT32_MIN;
int32_t x271 = 1;
int32_t x305 = INT32_MIN;
uint16_t x308 = 2U;
volatile int32_t t14 = 45645;
int8_t x441 = INT8_MAX;
uint32_t x485 = UINT32_MAX;
static uint64_t x496 = 3990827237469847LLU;
uint64_t x508 = 1258217864596592LLU;
static uint8_t x522 = 4U;
int64_t x536 = INT64_MAX;
int64_t t24 = INT64_MAX;
int32_t t26 = -23;
static uint16_t x699 = 1U;
int64_t x710 = INT64_MIN;
static int8_t x712 = INT8_MAX;
static int8_t x722 = 2;
volatile int32_t t30 = -234963;
uint8_t x841 = 58U;
uint32_t x842 = UINT32_MAX;
static volatile uint64_t t32 = UINT64_MAX;
uint32_t x935 = 3U;
static volatile int8_t x975 = 1;
int64_t x990 = 90LL;
uint8_t x991 = 6U;
static int16_t x1014 = -1;
static int16_t x1016 = INT16_MIN;
int64_t x1026 = INT64_MIN;
volatile uint64_t x1042 = 401726728414LLU;
volatile uint32_t x1043 = 13U;
int16_t x1124 = -1;
static uint64_t x1152 = 928LLU;
int32_t x1168 = INT32_MIN;
int32_t t48 = -1;
int16_t x1262 = INT16_MAX;
static uint64_t x1360 = 9LLU;
static volatile uint64_t t51 = 527289181449992867LLU;
int8_t x1383 = 2;
int8_t x1457 = -30;
int64_t x1491 = 3LL;
uint8_t x1523 = 1U;
int16_t x1540 = INT16_MIN;
int8_t x1543 = 1;
static int32_t x1569 = INT32_MIN;
int8_t x1572 = -15;
volatile int64_t x1581 = INT64_MIN;
static volatile int32_t x1584 = -1;
int32_t t63 = 1348179;
int8_t x1661 = -4;
static volatile int32_t x1664 = INT32_MIN;
int8_t x1672 = -1;
int32_t t69 = -450;
static int32_t t72 = 1514089;
static volatile int32_t t76 = -15;
uint32_t x1871 = 9U;
int64_t x1896 = -1LL;
int16_t x2020 = -1;
static uint16_t x2064 = 77U;
uint8_t x2089 = 0U;
volatile uint16_t x2119 = 1U;
uint8_t x2220 = UINT8_MAX;
int32_t t90 = -263;
int16_t x2457 = INT16_MIN;
uint32_t x2542 = 109957010U;
volatile int32_t x2628 = INT32_MIN;
int16_t x2645 = INT16_MIN;


void f0(void) {
	volatile uint8_t x9 = 78U;
	int8_t x10 = -1;
	volatile uint8_t x11 = 3U;
	uint64_t x12 = 14352817785763LLU;
	static uint64_t t0 = 4539116LLU;

	t0 = (((x9==x10)<<x11)^x12);

	if (t0 != 14352817785763LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x13 = INT64_MAX;
	volatile int32_t x14 = INT32_MAX;
	uint8_t x15 = 23U;
	static int64_t x16 = 0LL;

	t1 = (((x13==x14)<<x15)^x16);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = -3356;
	int8_t x31 = 21;
	static uint8_t x32 = 0U;
	static int32_t t2 = -46200;

	t2 = (((x29==x30)<<x31)^x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x69 = 44;
	static int64_t x70 = -55501342237805LL;
	static int16_t x71 = 17;
	volatile uint64_t x72 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = (((x69==x70)<<x71)^x72);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x84 = -50782749672LL;

	t4 = (((x81==x82)<<x83)^x84);

	if (t4 != -50782749672LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x93 = -1;
	volatile uint8_t x94 = 2U;
	int32_t x95 = 0;
	uint16_t x96 = 4938U;
	volatile int32_t t5 = -79;

	t5 = (((x93==x94)<<x95)^x96);

	if (t5 != 4938) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x106 = 840016481625990765LLU;
	int16_t x107 = 27;
	volatile int64_t x108 = INT64_MIN;
	static int64_t t6 = INT64_MIN;

	t6 = (((x105==x106)<<x107)^x108);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x125 = 3390392521563LL;
	static int16_t x126 = -151;
	static int16_t x128 = 1;
	volatile int32_t t7 = -3;

	t7 = (((x125==x126)<<x127)^x128);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x137 = -1366;
	uint8_t x138 = UINT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t8 = INT32_MIN;

	t8 = (((x137==x138)<<x139)^x140);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x169 = 23725818678702041LLU;
	uint64_t x170 = 85162172770249451LLU;
	static volatile uint16_t x171 = 2U;
	int16_t x172 = -1;
	volatile int32_t t9 = -5216573;

	t9 = (((x169==x170)<<x171)^x172);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x205 = 26U;
	uint8_t x206 = UINT8_MAX;
	uint8_t x207 = 1U;
	int64_t x208 = -1LL;
	int64_t t10 = -15770LL;

	t10 = (((x205==x206)<<x207)^x208);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x265 = 55U;
	int16_t x267 = 7;
	static int64_t x268 = -1LL;

	t11 = (((x265==x266)<<x267)^x268);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x270 = 1389803LLU;
	uint16_t x272 = UINT16_MAX;
	int32_t t12 = 6096130;

	t12 = (((x269==x270)<<x271)^x272);

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x306 = 56U;
	uint8_t x307 = 0U;
	static volatile int32_t t13 = 467762871;

	t13 = (((x305==x306)<<x307)^x308);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x313 = 2U;
	volatile int64_t x314 = INT64_MIN;
	volatile int8_t x315 = 1;
	int16_t x316 = -1;

	t14 = (((x313==x314)<<x315)^x316);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x341 = 0U;
	int8_t x342 = -48;
	static uint64_t x343 = 8LLU;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t15 = INT32_MIN;

	t15 = (((x341==x342)<<x343)^x344);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x442 = 8;
	volatile uint8_t x443 = 17U;
	volatile int8_t x444 = INT8_MIN;
	int32_t t16 = 949942;

	t16 = (((x441==x442)<<x443)^x444);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x465 = INT16_MIN;
	static uint16_t x466 = UINT16_MAX;
	uint16_t x467 = 12U;
	uint64_t x468 = 24279550500415610LLU;
	uint64_t t17 = 196362812LLU;

	t17 = (((x465==x466)<<x467)^x468);

	if (t17 != 24279550500415610LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x481 = 4117528;
	static int32_t x482 = -2216;
	volatile int16_t x483 = 20;
	int32_t x484 = INT32_MIN;
	static int32_t t18 = INT32_MIN;

	t18 = (((x481==x482)<<x483)^x484);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x486 = UINT8_MAX;
	int8_t x487 = 12;
	uint32_t x488 = UINT32_MAX;
	uint32_t t19 = UINT32_MAX;

	t19 = (((x485==x486)<<x487)^x488);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x493 = INT32_MAX;
	volatile int64_t x494 = INT64_MAX;
	uint8_t x495 = 0U;
	uint64_t t20 = 3041463365242LLU;

	t20 = (((x493==x494)<<x495)^x496);

	if (t20 != 3990827237469847LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x505 = -1;
	static volatile int16_t x506 = INT16_MIN;
	uint32_t x507 = 2U;
	static volatile uint64_t t21 = 14504141340076LLU;

	t21 = (((x505==x506)<<x507)^x508);

	if (t21 != 1258217864596592LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x521 = INT32_MIN;
	uint8_t x523 = 6U;
	uint8_t x524 = 49U;
	volatile int32_t t22 = -204;

	t22 = (((x521==x522)<<x523)^x524);

	if (t22 != 49) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x525 = 94U;
	int64_t x526 = INT64_MIN;
	uint8_t x527 = 29U;
	volatile uint16_t x528 = UINT16_MAX;
	int32_t t23 = -1550;

	t23 = (((x525==x526)<<x527)^x528);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x533 = -1;
	int8_t x534 = 1;
	int8_t x535 = 1;

	t24 = (((x533==x534)<<x535)^x536);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x565 = INT16_MIN;
	uint8_t x566 = 48U;
	static volatile int8_t x567 = 3;
	int16_t x568 = 3;
	int32_t t25 = -21;

	t25 = (((x565==x566)<<x567)^x568);

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x625 = UINT32_MAX;
	int16_t x626 = -1;
	static int8_t x627 = 1;
	static int32_t x628 = 146;

	t26 = (((x625==x626)<<x627)^x628);

	if (t26 != 144) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x697 = 724793859969205LL;
	uint64_t x698 = 4LLU;
	int32_t x700 = INT32_MIN;
	int32_t t27 = INT32_MIN;

	t27 = (((x697==x698)<<x699)^x700);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x709 = 1;
	uint32_t x711 = 21U;
	volatile int32_t t28 = 0;

	t28 = (((x709==x710)<<x711)^x712);

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x721 = INT64_MAX;
	uint8_t x723 = 1U;
	uint16_t x724 = UINT16_MAX;
	int32_t t29 = 1;

	t29 = (((x721==x722)<<x723)^x724);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x837 = 42751815U;
	static uint64_t x838 = 941LLU;
	uint32_t x839 = 9U;
	volatile int8_t x840 = -1;

	t30 = (((x837==x838)<<x839)^x840);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x843 = 22U;
	static int16_t x844 = INT16_MIN;
	int32_t t31 = 41182;

	t31 = (((x841==x842)<<x843)^x844);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x861 = INT64_MAX;
	int8_t x862 = INT8_MAX;
	static uint8_t x863 = 25U;
	volatile uint64_t x864 = UINT64_MAX;

	t32 = (((x861==x862)<<x863)^x864);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x933 = INT16_MAX;
	int16_t x934 = -20;
	static int64_t x936 = INT64_MAX;
	int64_t t33 = INT64_MAX;

	t33 = (((x933==x934)<<x935)^x936);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x945 = -1;
	uint16_t x946 = 242U;
	uint8_t x947 = 7U;
	int32_t x948 = INT32_MIN;
	volatile int32_t t34 = INT32_MIN;

	t34 = (((x945==x946)<<x947)^x948);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x957 = INT16_MIN;
	volatile int64_t x958 = INT64_MAX;
	uint64_t x959 = 10LLU;
	volatile int64_t x960 = INT64_MAX;
	volatile int64_t t35 = INT64_MAX;

	t35 = (((x957==x958)<<x959)^x960);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x973 = INT8_MIN;
	uint8_t x974 = 15U;
	int8_t x976 = 0;
	volatile int32_t t36 = 16;

	t36 = (((x973==x974)<<x975)^x976);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x977 = INT64_MIN;
	int32_t x978 = INT32_MIN;
	static int32_t x979 = 14;
	uint8_t x980 = 79U;
	int32_t t37 = -1;

	t37 = (((x977==x978)<<x979)^x980);

	if (t37 != 79) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x989 = UINT32_MAX;
	volatile uint64_t x992 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x989==x990)<<x991)^x992);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x1013 = 1660235035U;
	static int8_t x1015 = 29;
	volatile int32_t t39 = -12218;

	t39 = (((x1013==x1014)<<x1015)^x1016);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1025 = UINT16_MAX;
	static uint16_t x1027 = 22U;
	static int8_t x1028 = -1;
	volatile int32_t t40 = 164070;

	t40 = (((x1025==x1026)<<x1027)^x1028);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1041 = INT64_MIN;
	uint64_t x1044 = UINT64_MAX;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (((x1041==x1042)<<x1043)^x1044);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x1085 = INT16_MIN;
	int8_t x1086 = INT8_MIN;
	uint8_t x1087 = 3U;
	static volatile uint8_t x1088 = 0U;
	static int32_t t42 = -1;

	t42 = (((x1085==x1086)<<x1087)^x1088);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1109 = 2;
	int32_t x1110 = INT32_MAX;
	uint8_t x1111 = 11U;
	int64_t x1112 = 13702294532864LL;
	static volatile int64_t t43 = -89559149441LL;

	t43 = (((x1109==x1110)<<x1111)^x1112);

	if (t43 != 13702294532864LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1121 = INT32_MIN;
	int8_t x1122 = INT8_MIN;
	int8_t x1123 = 30;
	volatile int32_t t44 = -1472;

	t44 = (((x1121==x1122)<<x1123)^x1124);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1149 = INT16_MIN;
	int64_t x1150 = INT64_MIN;
	uint8_t x1151 = 11U;
	volatile uint64_t t45 = 5040885910383LLU;

	t45 = (((x1149==x1150)<<x1151)^x1152);

	if (t45 != 928LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1157 = -1;
	int64_t x1158 = INT64_MIN;
	static uint32_t x1159 = 8U;
	int16_t x1160 = INT16_MAX;
	int32_t t46 = -5821025;

	t46 = (((x1157==x1158)<<x1159)^x1160);

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x1165 = 145341U;
	uint16_t x1166 = 8503U;
	volatile int16_t x1167 = 1;
	int32_t t47 = INT32_MIN;

	t47 = (((x1165==x1166)<<x1167)^x1168);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1217 = INT64_MIN;
	volatile int64_t x1218 = -1LL;
	uint64_t x1219 = 6LLU;
	int8_t x1220 = -1;

	t48 = (((x1217==x1218)<<x1219)^x1220);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1237 = UINT8_MAX;
	uint8_t x1238 = UINT8_MAX;
	int8_t x1239 = 1;
	static int32_t x1240 = 1;
	int32_t t49 = -31899824;

	t49 = (((x1237==x1238)<<x1239)^x1240);

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1261 = INT64_MAX;
	static uint16_t x1263 = 5U;
	uint64_t x1264 = 1975LLU;
	volatile uint64_t t50 = 57637445727LLU;

	t50 = (((x1261==x1262)<<x1263)^x1264);

	if (t50 != 1975LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1357 = INT16_MAX;
	int64_t x1358 = INT64_MIN;
	uint8_t x1359 = 1U;

	t51 = (((x1357==x1358)<<x1359)^x1360);

	if (t51 != 9LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1381 = INT8_MIN;
	int32_t x1382 = INT32_MIN;
	static volatile int32_t x1384 = INT32_MAX;
	int32_t t52 = INT32_MAX;

	t52 = (((x1381==x1382)<<x1383)^x1384);

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x1397 = INT16_MIN;
	int64_t x1398 = -1LL;
	uint8_t x1399 = 6U;
	volatile int16_t x1400 = INT16_MIN;
	static int32_t t53 = -11908777;

	t53 = (((x1397==x1398)<<x1399)^x1400);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x1417 = 54;
	int16_t x1418 = INT16_MIN;
	uint16_t x1419 = 0U;
	static volatile int8_t x1420 = INT8_MAX;
	static volatile int32_t t54 = -151556;

	t54 = (((x1417==x1418)<<x1419)^x1420);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1458 = 319617053201084037LLU;
	static int8_t x1459 = 0;
	int64_t x1460 = 86703904496874LL;
	static int64_t t55 = -20040932920794LL;

	t55 = (((x1457==x1458)<<x1459)^x1460);

	if (t55 != 86703904496874LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1489 = 47U;
	static int16_t x1490 = INT16_MAX;
	int8_t x1492 = INT8_MIN;
	int32_t t56 = -372;

	t56 = (((x1489==x1490)<<x1491)^x1492);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1509 = 9U;
	volatile int8_t x1510 = -9;
	uint8_t x1511 = 6U;
	uint8_t x1512 = 2U;
	int32_t t57 = -5;

	t57 = (((x1509==x1510)<<x1511)^x1512);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1517 = -2;
	uint8_t x1518 = 1U;
	uint16_t x1519 = 1U;
	int64_t x1520 = -232687772890LL;
	int64_t t58 = 480138896380001056LL;

	t58 = (((x1517==x1518)<<x1519)^x1520);

	if (t58 != -232687772890LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1521 = INT8_MIN;
	int64_t x1522 = -1LL;
	int64_t x1524 = -1LL;
	int64_t t59 = 4218LL;

	t59 = (((x1521==x1522)<<x1523)^x1524);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1537 = 4U;
	int64_t x1538 = 0LL;
	int8_t x1539 = 1;
	int32_t t60 = 14195721;

	t60 = (((x1537==x1538)<<x1539)^x1540);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1541 = -1;
	static int32_t x1542 = INT32_MIN;
	int16_t x1544 = INT16_MAX;
	int32_t t61 = -4964138;

	t61 = (((x1541==x1542)<<x1543)^x1544);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1570 = 6LLU;
	uint8_t x1571 = 0U;
	volatile int32_t t62 = 3;

	t62 = (((x1569==x1570)<<x1571)^x1572);

	if (t62 != -15) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x1582 = -256974LL;
	uint64_t x1583 = 9LLU;

	t63 = (((x1581==x1582)<<x1583)^x1584);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1593 = INT8_MIN;
	static int16_t x1594 = INT16_MIN;
	int16_t x1595 = 7;
	uint32_t x1596 = 1383U;
	uint32_t t64 = 6261U;

	t64 = (((x1593==x1594)<<x1595)^x1596);

	if (t64 != 1383U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1601 = 31566091408032953LLU;
	int16_t x1602 = -1;
	int8_t x1603 = 3;
	uint64_t x1604 = 9611265LLU;
	volatile uint64_t t65 = 1355389880LLU;

	t65 = (((x1601==x1602)<<x1603)^x1604);

	if (t65 != 9611265LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x1637 = -30;
	int16_t x1638 = INT16_MIN;
	volatile int16_t x1639 = 11;
	static int8_t x1640 = 1;
	int32_t t66 = 2232277;

	t66 = (((x1637==x1638)<<x1639)^x1640);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x1645 = UINT8_MAX;
	uint8_t x1646 = 5U;
	int16_t x1647 = 1;
	uint32_t x1648 = 1U;
	uint32_t t67 = 0U;

	t67 = (((x1645==x1646)<<x1647)^x1648);

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1662 = UINT64_MAX;
	uint16_t x1663 = 23U;
	int32_t t68 = INT32_MIN;

	t68 = (((x1661==x1662)<<x1663)^x1664);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x1669 = -1LL;
	uint32_t x1670 = UINT32_MAX;
	volatile uint16_t x1671 = 6U;

	t69 = (((x1669==x1670)<<x1671)^x1672);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1729 = INT16_MIN;
	volatile int8_t x1730 = INT8_MIN;
	int8_t x1731 = 25;
	uint8_t x1732 = UINT8_MAX;
	int32_t t70 = -2480906;

	t70 = (((x1729==x1730)<<x1731)^x1732);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1749 = INT8_MAX;
	int32_t x1750 = INT32_MAX;
	int16_t x1751 = 0;
	static uint32_t x1752 = 75U;
	volatile uint32_t t71 = 14498U;

	t71 = (((x1749==x1750)<<x1751)^x1752);

	if (t71 != 75U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x1765 = UINT16_MAX;
	int32_t x1766 = -1;
	static volatile int32_t x1767 = 1;
	int16_t x1768 = 5619;

	t72 = (((x1765==x1766)<<x1767)^x1768);

	if (t72 != 5619) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1817 = -1LL;
	static volatile int16_t x1818 = INT16_MIN;
	volatile uint8_t x1819 = 0U;
	static int64_t x1820 = -1LL;
	volatile int64_t t73 = -128183302LL;

	t73 = (((x1817==x1818)<<x1819)^x1820);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1841 = 1654U;
	static volatile int8_t x1842 = INT8_MAX;
	static uint8_t x1843 = 0U;
	int16_t x1844 = INT16_MIN;
	volatile int32_t t74 = 7128140;

	t74 = (((x1841==x1842)<<x1843)^x1844);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x1845 = UINT8_MAX;
	int32_t x1846 = INT32_MIN;
	uint8_t x1847 = 20U;
	volatile uint16_t x1848 = 4U;
	int32_t t75 = 13802;

	t75 = (((x1845==x1846)<<x1847)^x1848);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x1853 = 25U;
	static volatile int16_t x1854 = 2;
	uint32_t x1855 = 0U;
	volatile int16_t x1856 = INT16_MIN;

	t76 = (((x1853==x1854)<<x1855)^x1856);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x1869 = 2U;
	int64_t x1870 = -4071127303193931926LL;
	volatile int32_t x1872 = -253;
	int32_t t77 = -894;

	t77 = (((x1869==x1870)<<x1871)^x1872);

	if (t77 != -253) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x1893 = INT16_MAX;
	int8_t x1894 = INT8_MAX;
	volatile int8_t x1895 = 1;
	int64_t t78 = -10454389210102LL;

	t78 = (((x1893==x1894)<<x1895)^x1896);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1929 = INT16_MAX;
	uint32_t x1930 = UINT32_MAX;
	uint8_t x1931 = 0U;
	static int16_t x1932 = INT16_MIN;
	volatile int32_t t79 = -5459076;

	t79 = (((x1929==x1930)<<x1931)^x1932);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2017 = -188;
	int64_t x2018 = -3LL;
	volatile uint16_t x2019 = 1U;
	int32_t t80 = -3009884;

	t80 = (((x2017==x2018)<<x2019)^x2020);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x2061 = 1U;
	static int8_t x2062 = INT8_MAX;
	volatile int8_t x2063 = 0;
	int32_t t81 = -392;

	t81 = (((x2061==x2062)<<x2063)^x2064);

	if (t81 != 77) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2090 = INT16_MIN;
	uint8_t x2091 = 2U;
	uint32_t x2092 = 31U;
	volatile uint32_t t82 = 379784U;

	t82 = (((x2089==x2090)<<x2091)^x2092);

	if (t82 != 31U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2117 = UINT16_MAX;
	int8_t x2118 = INT8_MIN;
	uint64_t x2120 = 43565730728LLU;
	uint64_t t83 = 74489LLU;

	t83 = (((x2117==x2118)<<x2119)^x2120);

	if (t83 != 43565730728LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2189 = -1;
	volatile uint32_t x2190 = 1317988880U;
	uint8_t x2191 = 0U;
	volatile uint32_t x2192 = 378534532U;
	volatile uint32_t t84 = 0U;

	t84 = (((x2189==x2190)<<x2191)^x2192);

	if (t84 != 378534532U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2217 = -1;
	uint8_t x2218 = 15U;
	uint8_t x2219 = 0U;
	int32_t t85 = -161861432;

	t85 = (((x2217==x2218)<<x2219)^x2220);

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x2257 = 172U;
	uint64_t x2258 = 20662535885718957LLU;
	uint8_t x2259 = 9U;
	int16_t x2260 = 1;
	static int32_t t86 = 482008190;

	t86 = (((x2257==x2258)<<x2259)^x2260);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x2261 = 28;
	static int16_t x2262 = 0;
	volatile uint32_t x2263 = 0U;
	int32_t x2264 = -539513;
	volatile int32_t t87 = 3724;

	t87 = (((x2261==x2262)<<x2263)^x2264);

	if (t87 != -539513) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2277 = 172LL;
	volatile uint16_t x2278 = UINT16_MAX;
	int32_t x2279 = 0;
	static int64_t x2280 = 6756897LL;
	int64_t t88 = 1622059348895500LL;

	t88 = (((x2277==x2278)<<x2279)^x2280);

	if (t88 != 6756897LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2369 = 745718156186LLU;
	int16_t x2370 = INT16_MIN;
	int8_t x2371 = 7;
	uint64_t x2372 = 4776845737774527142LLU;
	uint64_t t89 = 940965357LLU;

	t89 = (((x2369==x2370)<<x2371)^x2372);

	if (t89 != 4776845737774527142LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x2373 = 1;
	int16_t x2374 = -1;
	uint8_t x2375 = 0U;
	static volatile uint8_t x2376 = 15U;

	t90 = (((x2373==x2374)<<x2375)^x2376);

	if (t90 != 15) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x2449 = 1783404LLU;
	volatile int64_t x2450 = -1957874372428800LL;
	int8_t x2451 = 28;
	int64_t x2452 = 2661855237282LL;
	volatile int64_t t91 = 421489LL;

	t91 = (((x2449==x2450)<<x2451)^x2452);

	if (t91 != 2661855237282LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2458 = -1;
	int8_t x2459 = 16;
	uint16_t x2460 = 2U;
	volatile int32_t t92 = -77283;

	t92 = (((x2457==x2458)<<x2459)^x2460);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x2469 = 836U;
	uint8_t x2470 = 48U;
	volatile int8_t x2471 = 3;
	uint32_t x2472 = 2U;
	static uint32_t t93 = 114U;

	t93 = (((x2469==x2470)<<x2471)^x2472);

	if (t93 != 2U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2537 = INT16_MIN;
	int8_t x2538 = -1;
	uint8_t x2539 = 0U;
	int64_t x2540 = -1LL;
	int64_t t94 = 8904659LL;

	t94 = (((x2537==x2538)<<x2539)^x2540);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2541 = INT8_MIN;
	uint8_t x2543 = 3U;
	volatile int8_t x2544 = -1;
	int32_t t95 = 5305;

	t95 = (((x2541==x2542)<<x2543)^x2544);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2561 = 8U;
	static int32_t x2562 = INT32_MIN;
	int8_t x2563 = 5;
	int16_t x2564 = INT16_MAX;
	int32_t t96 = 1;

	t96 = (((x2561==x2562)<<x2563)^x2564);

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2605 = 24615455246021247LLU;
	int32_t x2606 = -3;
	int16_t x2607 = 1;
	uint32_t x2608 = 5U;
	uint32_t t97 = 27U;

	t97 = (((x2605==x2606)<<x2607)^x2608);

	if (t97 != 5U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x2625 = -1;
	int64_t x2626 = -364367962502468LL;
	volatile uint8_t x2627 = 9U;
	int32_t t98 = INT32_MIN;

	t98 = (((x2625==x2626)<<x2627)^x2628);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2646 = -1;
	uint16_t x2647 = 3U;
	uint64_t x2648 = 2042400521541284LLU;
	volatile uint64_t t99 = 3778310735848159LLU;

	t99 = (((x2645==x2646)<<x2647)^x2648);

	if (t99 != 2042400521541284LLU) { NG(); } else { ; }
	
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

