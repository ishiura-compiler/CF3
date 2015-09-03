#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x62 = 130LLU;
uint16_t x63 = 1462U;
volatile int8_t x67 = 3;
static volatile uint16_t x89 = UINT16_MAX;
static int64_t x107 = -1LL;
int8_t x141 = 0;
int64_t x208 = INT64_MIN;
int16_t x247 = 52;
uint64_t t9 = 36LLU;
int8_t x249 = INT8_MAX;
volatile int16_t x312 = INT16_MAX;
static int8_t x322 = INT8_MIN;
int32_t x385 = 492568928;
volatile int32_t x387 = 192787;
uint8_t x388 = 45U;
int16_t x398 = -1;
static uint32_t x417 = 890879347U;
static uint64_t x420 = UINT64_MAX;
uint32_t t17 = 29669563U;
volatile uint64_t x522 = 6545771921LLU;
uint64_t x523 = UINT64_MAX;
uint16_t x650 = 2U;
uint64_t t26 = 790964907LLU;
static int64_t x699 = INT64_MIN;
volatile int32_t t29 = 352591;
static int16_t x774 = INT16_MIN;
static uint32_t x776 = 162U;
uint64_t x781 = 374619175315587962LLU;
uint8_t x783 = 6U;
uint8_t x805 = 39U;
int32_t x808 = INT32_MIN;
uint16_t x846 = 84U;
static volatile int64_t t36 = INT64_MAX;
int64_t x1036 = -1LL;
volatile uint32_t t38 = 10U;
int16_t x1040 = INT16_MIN;
static int64_t x1086 = INT64_MIN;
static volatile int16_t x1158 = INT16_MAX;
uint8_t x1166 = 7U;
uint16_t x1170 = 20U;
static int32_t t44 = 184254;
volatile uint64_t x1221 = 1LLU;
int8_t x1222 = INT8_MIN;
uint64_t x1278 = 8LLU;
static int8_t x1280 = 26;
uint32_t t48 = 408U;
volatile uint16_t x1461 = UINT16_MAX;
uint32_t x1464 = 253U;
static volatile int32_t t50 = 467;
static int64_t x1477 = 1082380LL;
static int8_t x1479 = -1;
int32_t x1506 = -34042;
int64_t x1510 = INT64_MIN;
volatile int16_t x1511 = 1;
int8_t x1532 = -1;
static uint8_t x1555 = UINT8_MAX;
static int8_t x1572 = INT8_MIN;
static uint8_t x1686 = 8U;
int64_t x1687 = INT64_MIN;
volatile uint64_t x1688 = 2LLU;
uint16_t x1721 = 2U;
uint16_t x1722 = UINT16_MAX;
int64_t x1723 = INT64_MIN;
int16_t x1741 = INT16_MAX;
uint64_t x1749 = UINT64_MAX;
uint8_t x1750 = UINT8_MAX;
uint16_t x1751 = UINT16_MAX;
static uint32_t x1752 = UINT32_MAX;
int64_t x1777 = INT64_MAX;
static int16_t x1779 = -1;
volatile int64_t x1780 = -1LL;
static volatile int64_t t65 = INT64_MAX;
static int32_t x1809 = INT32_MAX;
int64_t x1812 = -28LL;
volatile int64_t x1846 = INT64_MIN;
int16_t x1848 = -1;
uint32_t t70 = 112862867U;
volatile int32_t x1865 = 50;
int16_t x1875 = INT16_MIN;
static volatile int64_t t72 = -2581160936312875LL;
volatile int16_t x1879 = INT16_MAX;
int8_t x1880 = INT8_MAX;
uint8_t x1954 = 2U;
volatile uint16_t x1976 = 0U;
static volatile int32_t t77 = -15530;
int32_t x1984 = INT32_MAX;
uint64_t x2029 = 174LLU;
uint16_t x2076 = 3418U;
int32_t t81 = 50;
int64_t x2083 = 10LL;
uint8_t x2113 = UINT8_MAX;
int16_t x2135 = INT16_MIN;
static volatile uint32_t t84 = 68584270U;
static uint64_t x2137 = 31370993125LLU;
int64_t x2149 = 165690501648402973LL;
int8_t x2204 = INT8_MAX;
volatile int32_t t87 = -103438;
uint16_t x2233 = 489U;
int8_t x2236 = INT8_MIN;
volatile uint64_t x2255 = UINT64_MAX;
uint64_t x2311 = UINT64_MAX;
int32_t t90 = -73;
uint64_t t91 = 273119560924986LLU;
static volatile int32_t t92 = -1684669;
volatile int64_t x2379 = -1752210945514984653LL;
uint64_t x2417 = 152LLU;
static volatile int64_t t96 = INT64_MAX;
int32_t t99 = -102;


void f0(void) {
	uint64_t x21 = 227366449520LLU;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	static volatile int32_t x24 = -1;
	static volatile uint64_t t0 = 52LLU;

	t0 = (x21>>(x22&(x23-x24)));

	if (t0 != 227366449520LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x61 = 42546423U;
	volatile uint16_t x64 = 55U;
	uint32_t t1 = 130315U;

	t1 = (x61>>(x62&(x63-x64)));

	if (t1 != 10636605U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x65 = 114U;
	static int8_t x66 = 1;
	uint64_t x68 = 21031LLU;
	int32_t t2 = -11965302;

	t2 = (x65>>(x66&(x67-x68)));

	if (t2 != 114) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x90 = 23U;
	int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	volatile int32_t t3 = 8478;

	t3 = (x89>>(x90&(x91-x92)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x105 = UINT8_MAX;
	static int64_t x106 = INT64_MIN;
	int16_t x108 = -1;
	volatile int32_t t4 = -1;

	t4 = (x105>>(x106&(x107-x108)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x142 = 0;
	uint64_t x143 = 19203LLU;
	int16_t x144 = INT16_MIN;
	int32_t t5 = 11612;

	t5 = (x141>>(x142&(x143-x144)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x153 = 6;
	int16_t x154 = 0;
	static volatile uint64_t x155 = UINT64_MAX;
	int32_t x156 = 360;
	int32_t t6 = -32170;

	t6 = (x153>>(x154&(x155-x156)));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x205 = 0;
	int64_t x206 = 72288539LL;
	uint64_t x207 = 23LLU;
	int32_t t7 = 508313701;

	t7 = (x205>>(x206&(x207-x208)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x225 = 600303840U;
	static volatile int64_t x226 = INT64_MIN;
	static uint32_t x227 = UINT32_MAX;
	static volatile int16_t x228 = -1;
	static volatile uint32_t t8 = 223U;

	t8 = (x225>>(x226&(x227-x228)));

	if (t8 != 600303840U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x245 = 123718533007771644LLU;
	uint8_t x246 = 59U;
	int16_t x248 = INT16_MIN;

	t9 = (x245>>(x246&(x247-x248)));

	if (t9 != 439LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x250 = INT8_MAX;
	volatile int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MAX;
	static volatile int32_t t10 = 174643;

	t10 = (x249>>(x250&(x251-x252)));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x293 = 385;
	uint64_t x294 = 199787LLU;
	uint8_t x295 = 0U;
	static uint64_t x296 = UINT64_MAX;
	volatile int32_t t11 = 75243546;

	t11 = (x293>>(x294&(x295-x296)));

	if (t11 != 192) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x309 = 13U;
	int64_t x310 = INT64_MIN;
	volatile int16_t x311 = INT16_MAX;
	static volatile int32_t t12 = 4012;

	t12 = (x309>>(x310&(x311-x312)));

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x321 = INT64_MAX;
	int32_t x323 = INT32_MAX;
	int32_t x324 = INT32_MAX;
	int64_t t13 = INT64_MAX;

	t13 = (x321>>(x322&(x323-x324)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x325 = 95U;
	volatile uint32_t x326 = 54U;
	int16_t x327 = 391;
	int64_t x328 = INT64_MAX;
	int32_t t14 = 1306555;

	t14 = (x325>>(x326&(x327-x328)));

	if (t14 != 95) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x386 = 1;
	static volatile int32_t t15 = 0;

	t15 = (x385>>(x386&(x387-x388)));

	if (t15 != 492568928) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x397 = INT64_MAX;
	int32_t x399 = -1;
	int8_t x400 = -3;
	volatile int64_t t16 = -7844888229LL;

	t16 = (x397>>(x398&(x399-x400)));

	if (t16 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x418 = 2;
	int16_t x419 = 6;

	t17 = (x417>>(x418&(x419-x420)));

	if (t17 != 222719836U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x421 = 20873374LLU;
	uint16_t x422 = 1100U;
	uint32_t x423 = 347681722U;
	int16_t x424 = INT16_MIN;
	volatile uint64_t t18 = 11364150325345512LLU;

	t18 = (x421>>(x422&(x423-x424)));

	if (t18 != 81536LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x437 = 102LLU;
	uint64_t x438 = 49LLU;
	static int32_t x439 = -1;
	int16_t x440 = 26;
	uint64_t t19 = 8195343152586LLU;

	t19 = (x437>>(x438&(x439-x440)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x481 = UINT32_MAX;
	uint32_t x482 = 43570756U;
	int8_t x483 = 4;
	static int8_t x484 = INT8_MIN;
	uint32_t t20 = 477975U;

	t20 = (x481>>(x482&(x483-x484)));

	if (t20 != 268435455U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x489 = 637913467500880628LL;
	uint64_t x490 = 568LLU;
	static int16_t x491 = INT16_MAX;
	int8_t x492 = INT8_MIN;
	volatile int64_t t21 = 297071708488943786LL;

	t21 = (x489>>(x490&(x491-x492)));

	if (t21 != 8LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x521 = 4190LLU;
	volatile int16_t x524 = -1;
	uint64_t t22 = 3261912952815946LLU;

	t22 = (x521>>(x522&(x523-x524)));

	if (t22 != 4190LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x533 = 1710584U;
	int32_t x534 = -1;
	int16_t x535 = INT16_MIN;
	static int16_t x536 = INT16_MIN;
	volatile uint32_t t23 = 812U;

	t23 = (x533>>(x534&(x535-x536)));

	if (t23 != 1710584U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x597 = INT16_MAX;
	int64_t x598 = 17LL;
	uint64_t x599 = UINT64_MAX;
	uint32_t x600 = 0U;
	int32_t t24 = 169448010;

	t24 = (x597>>(x598&(x599-x600)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x649 = 26U;
	uint8_t x651 = 59U;
	volatile uint8_t x652 = UINT8_MAX;
	int32_t t25 = -7;

	t25 = (x649>>(x650&(x651-x652)));

	if (t25 != 26) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x693 = 0LLU;
	uint8_t x694 = 0U;
	int64_t x695 = 928621577591021625LL;
	int64_t x696 = -1LL;

	t26 = (x693>>(x694&(x695-x696)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x697 = 2006644LLU;
	uint8_t x698 = 3U;
	static int64_t x700 = -379544390LL;
	uint64_t t27 = 7669654LLU;

	t27 = (x697>>(x698&(x699-x700)));

	if (t27 != 501661LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x741 = 631;
	int32_t x742 = 3346783;
	int16_t x743 = INT16_MIN;
	int16_t x744 = INT16_MIN;
	int32_t t28 = 222502527;

	t28 = (x741>>(x742&(x743-x744)));

	if (t28 != 631) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x757 = 7481U;
	volatile uint8_t x758 = 14U;
	volatile int32_t x759 = -1;
	static volatile int32_t x760 = INT32_MIN;

	t29 = (x757>>(x758&(x759-x760)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x773 = 16U;
	static uint8_t x775 = UINT8_MAX;
	int32_t t30 = -14582;

	t30 = (x773>>(x774&(x775-x776)));

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x782 = 6677256LLU;
	static volatile uint8_t x784 = 1U;
	uint64_t t31 = 65549179288282565LLU;

	t31 = (x781>>(x782&(x783-x784)));

	if (t31 != 374619175315587962LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x806 = 24462217LLU;
	volatile int32_t x807 = INT32_MIN;
	volatile int32_t t32 = -315148;

	t32 = (x805>>(x806&(x807-x808)));

	if (t32 != 39) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x841 = UINT8_MAX;
	uint64_t x842 = 2LLU;
	static volatile int32_t x843 = INT32_MIN;
	static int16_t x844 = INT16_MIN;
	int32_t t33 = 1058873;

	t33 = (x841>>(x842&(x843-x844)));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x845 = 104U;
	int64_t x847 = -111427LL;
	static uint8_t x848 = 5U;
	static int32_t t34 = 336;

	t34 = (x845>>(x846&(x847-x848)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x977 = 0U;
	static volatile int8_t x978 = 1;
	int8_t x979 = -10;
	int16_t x980 = INT16_MIN;
	static int32_t t35 = 1602;

	t35 = (x977>>(x978&(x979-x980)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1001 = INT64_MAX;
	int64_t x1002 = INT64_MIN;
	uint8_t x1003 = UINT8_MAX;
	uint64_t x1004 = UINT64_MAX;

	t36 = (x1001>>(x1002&(x1003-x1004)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1025 = UINT8_MAX;
	volatile uint8_t x1026 = 2U;
	uint16_t x1027 = 2138U;
	uint64_t x1028 = UINT64_MAX;
	int32_t t37 = -29463;

	t37 = (x1025>>(x1026&(x1027-x1028)));

	if (t37 != 63) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1033 = 34474U;
	int32_t x1034 = INT32_MIN;
	static volatile uint16_t x1035 = 15612U;

	t38 = (x1033>>(x1034&(x1035-x1036)));

	if (t38 != 34474U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x1037 = INT64_MAX;
	int16_t x1038 = INT16_MAX;
	volatile int8_t x1039 = 0;
	volatile int64_t t39 = INT64_MAX;

	t39 = (x1037>>(x1038&(x1039-x1040)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1061 = 11577273U;
	static int8_t x1062 = 9;
	int8_t x1063 = INT8_MIN;
	static volatile int32_t x1064 = INT32_MIN;
	static volatile uint32_t t40 = 9687U;

	t40 = (x1061>>(x1062&(x1063-x1064)));

	if (t40 != 11577273U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1085 = UINT8_MAX;
	int8_t x1087 = -1;
	uint32_t x1088 = 3995712U;
	static volatile int32_t t41 = -1044698845;

	t41 = (x1085>>(x1086&(x1087-x1088)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1157 = 795185U;
	static int8_t x1159 = -1;
	uint64_t x1160 = UINT64_MAX;
	volatile uint32_t t42 = 292537U;

	t42 = (x1157>>(x1158&(x1159-x1160)));

	if (t42 != 795185U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1165 = 2U;
	uint16_t x1167 = 0U;
	static uint16_t x1168 = 26U;
	volatile int32_t t43 = -121;

	t43 = (x1165>>(x1166&(x1167-x1168)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1169 = INT8_MAX;
	static uint8_t x1171 = UINT8_MAX;
	volatile int16_t x1172 = INT16_MAX;

	t44 = (x1169>>(x1170&(x1171-x1172)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x1205 = 575U;
	int8_t x1206 = 1;
	int64_t x1207 = -1LL;
	uint16_t x1208 = UINT16_MAX;
	static volatile uint32_t t45 = 3U;

	t45 = (x1205>>(x1206&(x1207-x1208)));

	if (t45 != 575U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1223 = -1LL;
	volatile int16_t x1224 = -1;
	volatile uint64_t t46 = 53150LLU;

	t46 = (x1221>>(x1222&(x1223-x1224)));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1237 = 3892U;
	static uint16_t x1238 = 14723U;
	uint64_t x1239 = 241762368LLU;
	static int16_t x1240 = -1;
	volatile int32_t t47 = 2623090;

	t47 = (x1237>>(x1238&(x1239-x1240)));

	if (t47 != 1946) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1277 = 197U;
	volatile uint8_t x1279 = 0U;

	t48 = (x1277>>(x1278&(x1279-x1280)));

	if (t48 != 197U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x1297 = UINT64_MAX;
	volatile int16_t x1298 = INT16_MIN;
	int64_t x1299 = 1639LL;
	static volatile int8_t x1300 = -1;
	uint64_t t49 = UINT64_MAX;

	t49 = (x1297>>(x1298&(x1299-x1300)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x1462 = INT8_MAX;
	int16_t x1463 = -1137;

	t50 = (x1461>>(x1462&(x1463-x1464)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1478 = 671U;
	static int8_t x1480 = -1;
	static volatile int64_t t51 = 755150379828LL;

	t51 = (x1477>>(x1478&(x1479-x1480)));

	if (t51 != 1082380LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1505 = UINT32_MAX;
	volatile uint16_t x1507 = 75U;
	uint64_t x1508 = UINT64_MAX;
	uint32_t t52 = 10680167U;

	t52 = (x1505>>(x1506&(x1507-x1508)));

	if (t52 != 268435455U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x1509 = 5019784959006395LLU;
	int8_t x1512 = INT8_MIN;
	volatile uint64_t t53 = 1449879835569179362LLU;

	t53 = (x1509>>(x1510&(x1511-x1512)));

	if (t53 != 5019784959006395LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1513 = 20;
	int8_t x1514 = INT8_MIN;
	static uint8_t x1515 = 1U;
	int32_t x1516 = -1;
	volatile int32_t t54 = 24;

	t54 = (x1513>>(x1514&(x1515-x1516)));

	if (t54 != 20) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1517 = UINT32_MAX;
	static int16_t x1518 = 14;
	uint32_t x1519 = UINT32_MAX;
	int16_t x1520 = 1;
	static uint32_t t55 = 124475U;

	t55 = (x1517>>(x1518&(x1519-x1520)));

	if (t55 != 262143U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1529 = UINT64_MAX;
	uint16_t x1530 = UINT16_MAX;
	int32_t x1531 = INT32_MIN;
	static volatile uint64_t t56 = 17183475307594LLU;

	t56 = (x1529>>(x1530&(x1531-x1532)));

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1553 = 121U;
	uint32_t x1554 = 4U;
	uint32_t x1556 = 1620U;
	int32_t t57 = 1;

	t57 = (x1553>>(x1554&(x1555-x1556)));

	if (t57 != 121) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1569 = 20U;
	static int8_t x1570 = INT8_MAX;
	volatile uint64_t x1571 = 3620463238251911LLU;
	volatile int32_t t58 = 4056396;

	t58 = (x1569>>(x1570&(x1571-x1572)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1585 = INT32_MAX;
	volatile int8_t x1586 = 43;
	static volatile uint8_t x1587 = 4U;
	static uint64_t x1588 = 1LLU;
	volatile int32_t t59 = 87;

	t59 = (x1585>>(x1586&(x1587-x1588)));

	if (t59 != 268435455) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x1685 = 24U;
	volatile int32_t t60 = 157464027;

	t60 = (x1685>>(x1686&(x1687-x1688)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1724 = -1;
	volatile int32_t t61 = 342897;

	t61 = (x1721>>(x1722&(x1723-x1724)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x1737 = 0U;
	static volatile int16_t x1738 = INT16_MAX;
	int64_t x1739 = -1LL;
	int8_t x1740 = -1;
	volatile int32_t t62 = -1451707;

	t62 = (x1737>>(x1738&(x1739-x1740)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1742 = 3U;
	uint16_t x1743 = 7977U;
	int8_t x1744 = INT8_MAX;
	int32_t t63 = 4547;

	t63 = (x1741>>(x1742&(x1743-x1744)));

	if (t63 != 8191) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x1749>>(x1750&(x1751-x1752)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x1778 = 22;

	t65 = (x1777>>(x1778&(x1779-x1780)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1781 = INT16_MAX;
	int16_t x1782 = INT16_MIN;
	volatile int16_t x1783 = 20;
	int64_t x1784 = -1LL;
	static volatile int32_t t66 = -23285580;

	t66 = (x1781>>(x1782&(x1783-x1784)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1797 = 29752U;
	int64_t x1798 = INT64_MIN;
	int64_t x1799 = -1LL;
	volatile int32_t x1800 = INT32_MIN;
	volatile int32_t t67 = 6;

	t67 = (x1797>>(x1798&(x1799-x1800)));

	if (t67 != 29752) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1801 = 37LL;
	static uint32_t x1802 = UINT32_MAX;
	static uint64_t x1803 = UINT64_MAX;
	int8_t x1804 = -1;
	volatile int64_t t68 = -11213628LL;

	t68 = (x1801>>(x1802&(x1803-x1804)));

	if (t68 != 37LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1810 = 5;
	int32_t x1811 = -1;
	int32_t t69 = -59287804;

	t69 = (x1809>>(x1810&(x1811-x1812)));

	if (t69 != 1073741823) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1845 = 16U;
	volatile uint8_t x1847 = UINT8_MAX;

	t70 = (x1845>>(x1846&(x1847-x1848)));

	if (t70 != 16U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x1866 = 6185207182LL;
	static int8_t x1867 = -1;
	int16_t x1868 = -1;
	volatile int32_t t71 = 1983781;

	t71 = (x1865>>(x1866&(x1867-x1868)));

	if (t71 != 50) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x1873 = 119974600292LL;
	volatile int16_t x1874 = -1;
	int16_t x1876 = INT16_MIN;

	t72 = (x1873>>(x1874&(x1875-x1876)));

	if (t72 != 119974600292LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x1877 = 1LL;
	static int16_t x1878 = 0;
	int64_t t73 = 107125704LL;

	t73 = (x1877>>(x1878&(x1879-x1880)));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1949 = UINT8_MAX;
	static volatile uint64_t x1950 = 3555421086650213663LLU;
	int64_t x1951 = INT64_MIN;
	int8_t x1952 = INT8_MIN;
	volatile int32_t t74 = -59;

	t74 = (x1949>>(x1950&(x1951-x1952)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1953 = INT8_MAX;
	volatile int8_t x1955 = INT8_MIN;
	static uint32_t x1956 = UINT32_MAX;
	volatile int32_t t75 = 5127285;

	t75 = (x1953>>(x1954&(x1955-x1956)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1973 = 10LLU;
	int16_t x1974 = -1;
	uint32_t x1975 = 20U;
	static volatile uint64_t t76 = 2926445665LLU;

	t76 = (x1973>>(x1974&(x1975-x1976)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x1977 = 1012U;
	int16_t x1978 = INT16_MAX;
	int8_t x1979 = 1;
	uint64_t x1980 = UINT64_MAX;

	t77 = (x1977>>(x1978&(x1979-x1980)));

	if (t77 != 253) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x1981 = INT8_MAX;
	int8_t x1982 = INT8_MAX;
	static uint16_t x1983 = 9U;
	volatile int32_t t78 = -64988;

	t78 = (x1981>>(x1982&(x1983-x1984)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2030 = -1;
	int8_t x2031 = 24;
	uint8_t x2032 = 1U;
	volatile uint64_t t79 = 255313LLU;

	t79 = (x2029>>(x2030&(x2031-x2032)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2053 = 9;
	int32_t x2054 = INT32_MIN;
	int8_t x2055 = -30;
	volatile int16_t x2056 = INT16_MIN;
	volatile int32_t t80 = 1727422;

	t80 = (x2053>>(x2054&(x2055-x2056)));

	if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2073 = 836159165;
	int8_t x2074 = -1;
	static uint16_t x2075 = 3427U;

	t81 = (x2073>>(x2074&(x2075-x2076)));

	if (t81 != 1633123) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2081 = 55U;
	int32_t x2082 = INT32_MIN;
	int32_t x2084 = -1;
	static int32_t t82 = 2387;

	t82 = (x2081>>(x2082&(x2083-x2084)));

	if (t82 != 55) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x2114 = 30U;
	int32_t x2115 = -1;
	int8_t x2116 = INT8_MAX;
	volatile int32_t t83 = 24051;

	t83 = (x2113>>(x2114&(x2115-x2116)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x2133 = 893232130U;
	uint8_t x2134 = 13U;
	static int16_t x2136 = INT16_MIN;

	t84 = (x2133>>(x2134&(x2135-x2136)));

	if (t84 != 893232130U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2138 = 0U;
	int16_t x2139 = -739;
	int64_t x2140 = -1LL;
	volatile uint64_t t85 = 4LLU;

	t85 = (x2137>>(x2138&(x2139-x2140)));

	if (t85 != 31370993125LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2150 = 0;
	int8_t x2151 = -1;
	volatile uint8_t x2152 = 21U;
	int64_t t86 = -57030506LL;

	t86 = (x2149>>(x2150&(x2151-x2152)));

	if (t86 != 165690501648402973LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2201 = 6;
	uint8_t x2202 = 27U;
	static volatile uint8_t x2203 = 24U;

	t87 = (x2201>>(x2202&(x2203-x2204)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x2234 = INT32_MIN;
	volatile int8_t x2235 = 1;
	int32_t t88 = 641;

	t88 = (x2233>>(x2234&(x2235-x2236)));

	if (t88 != 489) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x2253 = INT32_MAX;
	int8_t x2254 = 12;
	uint8_t x2256 = 8U;
	static int32_t t89 = 60;

	t89 = (x2253>>(x2254&(x2255-x2256)));

	if (t89 != 134217727) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x2309 = 6;
	int8_t x2310 = -18;
	volatile int16_t x2312 = -1;

	t90 = (x2309>>(x2310&(x2311-x2312)));

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2325 = 1252591595274537LLU;
	static int8_t x2326 = 0;
	int32_t x2327 = -4;
	uint64_t x2328 = 781341732448041LLU;

	t91 = (x2325>>(x2326&(x2327-x2328)));

	if (t91 != 1252591595274537LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2341 = 91303;
	uint8_t x2342 = 0U;
	int64_t x2343 = INT64_MIN;
	static int16_t x2344 = 0;

	t92 = (x2341>>(x2342&(x2343-x2344)));

	if (t92 != 91303) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x2377 = 40;
	uint16_t x2378 = 1U;
	uint32_t x2380 = UINT32_MAX;
	volatile int32_t t93 = 113188181;

	t93 = (x2377>>(x2378&(x2379-x2380)));

	if (t93 != 40) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x2405 = 1;
	volatile uint64_t x2406 = 21LLU;
	int16_t x2407 = INT16_MAX;
	volatile int8_t x2408 = 3;
	int32_t t94 = 43051064;

	t94 = (x2405>>(x2406&(x2407-x2408)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2418 = 0;
	static volatile uint16_t x2419 = 0U;
	int8_t x2420 = INT8_MAX;
	static volatile uint64_t t95 = 29LLU;

	t95 = (x2417>>(x2418&(x2419-x2420)));

	if (t95 != 152LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2445 = INT64_MAX;
	static volatile int8_t x2446 = 0;
	volatile uint64_t x2447 = UINT64_MAX;
	static int32_t x2448 = -7537788;

	t96 = (x2445>>(x2446&(x2447-x2448)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2453 = 452U;
	uint8_t x2454 = 48U;
	static int64_t x2455 = INT64_MIN;
	int8_t x2456 = INT8_MIN;
	static volatile int32_t t97 = -22126;

	t97 = (x2453>>(x2454&(x2455-x2456)));

	if (t97 != 452) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x2529 = INT64_MAX;
	uint16_t x2530 = 3U;
	int32_t x2531 = -1;
	int8_t x2532 = INT8_MIN;
	volatile int64_t t98 = 1LL;

	t98 = (x2529>>(x2530&(x2531-x2532)));

	if (t98 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2533 = 4;
	int16_t x2534 = 0;
	int64_t x2535 = -1LL;
	int8_t x2536 = -1;

	t99 = (x2533>>(x2534&(x2535-x2536)));

	if (t99 != 4) { NG(); } else { ; }
	
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

