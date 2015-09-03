#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x68 = INT8_MAX;
uint16_t x137 = 360U;
static int16_t x140 = INT16_MIN;
static int16_t x194 = -4563;
int32_t x195 = INT32_MIN;
int16_t x221 = INT16_MAX;
int16_t x234 = INT16_MIN;
uint16_t x235 = 7U;
int16_t x269 = INT16_MAX;
int16_t x271 = INT16_MIN;
static uint8_t x314 = 3U;
uint16_t x316 = 19147U;
int32_t t13 = 11319;
volatile int32_t t15 = -13138;
uint32_t x406 = 209954U;
static int8_t x407 = INT8_MAX;
volatile uint64_t t17 = 817709243LLU;
volatile int32_t t20 = INT32_MAX;
volatile int16_t x505 = INT16_MAX;
static volatile uint32_t x573 = 3U;
volatile uint64_t t24 = 51282LLU;
volatile uint8_t x646 = 3U;
volatile int32_t t27 = -521085;
int32_t t28 = -41685953;
uint32_t t31 = 3498U;
uint8_t x753 = UINT8_MAX;
volatile int32_t t32 = -28;
int16_t x799 = INT16_MIN;
uint32_t x805 = 10512487U;
volatile uint16_t x834 = 26U;
uint8_t x899 = UINT8_MAX;
int16_t x971 = INT16_MIN;
volatile int32_t t38 = INT32_MAX;
uint32_t t39 = 97U;
volatile int32_t t40 = INT32_MAX;
int32_t x1201 = INT32_MAX;
int8_t x1204 = -1;
int32_t t43 = 805798;
volatile uint64_t t45 = 11524554LLU;
static int16_t x1280 = INT16_MAX;
static int64_t x1307 = -1LL;
int64_t x1358 = INT64_MIN;
uint64_t x1381 = UINT64_MAX;
uint8_t x1394 = 0U;
uint64_t x1505 = 226849LLU;
int16_t x1508 = INT16_MIN;
uint64_t t58 = 165095LLU;
static uint32_t x1540 = 212792U;
uint64_t x1556 = UINT64_MAX;
uint16_t x1624 = 207U;
int8_t x1675 = INT8_MIN;
int8_t x1739 = 58;
uint64_t x1740 = UINT64_MAX;
static int32_t x1770 = INT32_MIN;
static volatile int32_t t68 = 57;
uint8_t x1789 = 74U;
static volatile int64_t x1792 = 10233382LL;
int32_t t70 = -5571047;
volatile int64_t t71 = INT64_MAX;
int32_t x1829 = INT32_MAX;
uint32_t x1831 = 216097290U;
int16_t x1903 = -1;
int64_t x1954 = INT64_MIN;
static int16_t x1961 = 4;
int8_t x1974 = 18;
uint64_t x1976 = UINT64_MAX;
uint32_t x2009 = UINT32_MAX;
uint8_t x2010 = 3U;
volatile uint16_t x2012 = 608U;
static int32_t x2013 = INT32_MAX;
uint32_t x2016 = UINT32_MAX;
int16_t x2024 = -1;
int64_t x2031 = -1LL;
volatile int64_t t87 = 782915LL;
int16_t x2040 = INT16_MIN;
static int8_t x2113 = 0;
uint16_t x2114 = 4U;
uint64_t x2143 = 15LLU;
uint64_t x2190 = 12LLU;
uint8_t x2191 = 7U;
int16_t x2192 = -84;
int8_t x2228 = 9;
volatile int32_t t95 = -43138757;
volatile int8_t x2229 = INT8_MAX;
static volatile int64_t x2232 = 16699978LL;
uint8_t x2294 = 1U;


void f0(void) {
	static uint8_t x5 = UINT8_MAX;
	int8_t x6 = 47;
	static volatile int64_t x7 = -1LL;
	int32_t x8 = INT32_MIN;
	int32_t t0 = 6707855;

	t0 = (x5>>(x6&(x7*x8)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	int32_t x14 = INT32_MIN;
	int16_t x15 = -1;
	int8_t x16 = 0;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x13>>(x14&(x15*x16)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x65 = 1;
	uint16_t x66 = 25U;
	uint16_t x67 = 3U;
	volatile int32_t t2 = -42418923;

	t2 = (x65>>(x66&(x67*x68)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = 2;
	volatile uint64_t x127 = 994942LLU;
	uint64_t x128 = 22843910362LLU;
	volatile int64_t t3 = INT64_MAX;

	t3 = (x125>>(x126&(x127*x128)));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x138 = 25;
	static int64_t x139 = -1LL;
	int32_t t4 = 2366504;

	t4 = (x137>>(x138&(x139*x140)));

	if (t4 != 360) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x157 = 436U;
	volatile int16_t x158 = 52;
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	static int32_t t5 = 2525;

	t5 = (x157>>(x158&(x159*x160)));

	if (t5 != 436) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x193 = UINT16_MAX;
	int8_t x196 = 0;
	int32_t t6 = 3879886;

	t6 = (x193>>(x194&(x195*x196)));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x222 = 42;
	static int64_t x223 = 6241048LL;
	static volatile uint64_t x224 = 93085221543427LLU;
	int32_t t7 = 422918476;

	t7 = (x221>>(x222&(x223*x224)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x233 = INT16_MAX;
	int8_t x236 = 7;
	volatile int32_t t8 = 1523415;

	t8 = (x233>>(x234&(x235*x236)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x265 = INT64_MAX;
	int8_t x266 = 0;
	static uint16_t x267 = UINT16_MAX;
	int64_t x268 = -1LL;
	volatile int64_t t9 = INT64_MAX;

	t9 = (x265>>(x266&(x267*x268)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x270 = UINT8_MAX;
	static uint16_t x272 = UINT16_MAX;
	int32_t t10 = 0;

	t10 = (x269>>(x270&(x271*x272)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x309 = INT8_MAX;
	static int64_t x310 = -1726463800575LL;
	volatile int8_t x311 = -3;
	volatile int16_t x312 = -1;
	volatile int32_t t11 = -9966419;

	t11 = (x309>>(x310&(x311*x312)));

	if (t11 != 63) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x313 = 13LLU;
	static int8_t x315 = 0;
	uint64_t t12 = 380603559491477LLU;

	t12 = (x313>>(x314&(x315*x316)));

	if (t12 != 13LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x321 = 5U;
	int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MIN;
	volatile int8_t x324 = 0;

	t13 = (x321>>(x322&(x323*x324)));

	if (t13 != 5) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x341 = INT16_MAX;
	uint32_t x342 = 146U;
	static int32_t x343 = -21479;
	volatile int8_t x344 = 12;
	static volatile int32_t t14 = -6;

	t14 = (x341>>(x342&(x343*x344)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x377 = UINT16_MAX;
	volatile uint16_t x378 = UINT16_MAX;
	int8_t x379 = -1;
	volatile uint16_t x380 = UINT16_MAX;

	t15 = (x377>>(x378&(x379*x380)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x385 = 1;
	static volatile int8_t x386 = INT8_MAX;
	int32_t x387 = 916220288;
	int64_t x388 = 8839827629LL;
	int32_t t16 = -3701;

	t16 = (x385>>(x386&(x387*x388)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x405 = 105932081205LLU;
	uint16_t x408 = 3U;

	t17 = (x405>>(x406&(x407*x408)));

	if (t17 != 24LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x457 = 1763260U;
	int32_t x458 = 0;
	volatile uint16_t x459 = 111U;
	int8_t x460 = -19;
	volatile uint32_t t18 = 1U;

	t18 = (x457>>(x458&(x459*x460)));

	if (t18 != 1763260U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x461 = INT64_MAX;
	volatile uint8_t x462 = 70U;
	int32_t x463 = INT32_MIN;
	uint64_t x464 = 2803502407LLU;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x461>>(x462&(x463*x464)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x465 = INT32_MAX;
	int32_t x466 = -1;
	uint8_t x467 = 0U;
	uint16_t x468 = UINT16_MAX;

	t20 = (x465>>(x466&(x467*x468)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x506 = INT64_MIN;
	int16_t x507 = -1;
	volatile int16_t x508 = -1;
	volatile int32_t t21 = -176197;

	t21 = (x505>>(x506&(x507*x508)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x574 = 6;
	int16_t x575 = -1;
	static uint64_t x576 = 236820802133LLU;
	volatile uint32_t t22 = 290890U;

	t22 = (x573>>(x574&(x575*x576)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x593 = 69U;
	volatile int16_t x594 = -1;
	volatile int32_t x595 = INT32_MIN;
	static uint32_t x596 = 304076U;
	int32_t t23 = 699203405;

	t23 = (x593>>(x594&(x595*x596)));

	if (t23 != 69) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x613 = 961150125464120143LLU;
	int32_t x614 = INT32_MAX;
	int32_t x615 = INT32_MIN;
	static volatile uint32_t x616 = 26219463U;

	t24 = (x613>>(x614&(x615*x616)));

	if (t24 != 961150125464120143LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x625 = 3692272;
	volatile int16_t x626 = INT16_MAX;
	int64_t x627 = -1LL;
	int32_t x628 = INT32_MIN;
	volatile int32_t t25 = 7571065;

	t25 = (x625>>(x626&(x627*x628)));

	if (t25 != 3692272) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x629 = 7173418U;
	int32_t x630 = INT32_MIN;
	static uint16_t x631 = UINT16_MAX;
	static uint8_t x632 = UINT8_MAX;
	volatile uint32_t t26 = 1358800U;

	t26 = (x629>>(x630&(x631*x632)));

	if (t26 != 7173418U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x645 = 31U;
	int8_t x647 = INT8_MIN;
	volatile int32_t x648 = -1;

	t27 = (x645>>(x646&(x647*x648)));

	if (t27 != 31) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x717 = UINT16_MAX;
	int32_t x718 = -3993;
	volatile int32_t x719 = 1;
	int8_t x720 = 8;

	t28 = (x717>>(x718&(x719*x720)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x721 = INT32_MAX;
	int64_t x722 = INT64_MIN;
	uint16_t x723 = UINT16_MAX;
	static volatile uint16_t x724 = 12U;
	volatile int32_t t29 = INT32_MAX;

	t29 = (x721>>(x722&(x723*x724)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x729 = 27810U;
	int32_t x730 = 50684752;
	volatile int16_t x731 = INT16_MIN;
	int16_t x732 = 0;
	volatile int32_t t30 = 1;

	t30 = (x729>>(x730&(x731*x732)));

	if (t30 != 27810) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x741 = UINT32_MAX;
	uint8_t x742 = 5U;
	uint8_t x743 = 69U;
	volatile uint32_t x744 = 5448141U;

	t31 = (x741>>(x742&(x743*x744)));

	if (t31 != 2147483647U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x754 = INT16_MAX;
	int64_t x755 = -1LL;
	int8_t x756 = -1;

	t32 = (x753>>(x754&(x755*x756)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x797 = 283U;
	int8_t x798 = 13;
	static int8_t x800 = INT8_MAX;
	volatile int32_t t33 = 523;

	t33 = (x797>>(x798&(x799*x800)));

	if (t33 != 283) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x806 = -57;
	int16_t x807 = 0;
	uint64_t x808 = 123LLU;
	volatile uint32_t t34 = 1U;

	t34 = (x805>>(x806&(x807*x808)));

	if (t34 != 10512487U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x833 = 3064;
	int8_t x835 = INT8_MIN;
	int8_t x836 = -1;
	static int32_t t35 = 38663;

	t35 = (x833>>(x834&(x835*x836)));

	if (t35 != 3064) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x837 = 1;
	volatile int32_t x838 = INT32_MIN;
	uint8_t x839 = UINT8_MAX;
	int8_t x840 = 0;
	volatile int32_t t36 = 777964442;

	t36 = (x837>>(x838&(x839*x840)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x897 = 13278U;
	static int8_t x898 = 47;
	uint32_t x900 = 0U;
	volatile int32_t t37 = 127;

	t37 = (x897>>(x898&(x899*x900)));

	if (t37 != 13278) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x969 = INT32_MAX;
	int32_t x970 = INT32_MIN;
	volatile uint32_t x972 = UINT32_MAX;

	t38 = (x969>>(x970&(x971*x972)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1001 = 164097313U;
	uint16_t x1002 = 5U;
	volatile uint64_t x1003 = 3884370868464202674LLU;
	static volatile uint64_t x1004 = 178912737636323704LLU;

	t39 = (x1001>>(x1002&(x1003*x1004)));

	if (t39 != 164097313U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1005 = INT32_MAX;
	volatile int8_t x1006 = 0;
	volatile uint64_t x1007 = 4393509247782LLU;
	volatile int64_t x1008 = INT64_MAX;

	t40 = (x1005>>(x1006&(x1007*x1008)));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1049 = 226989929781453673LLU;
	static volatile uint8_t x1050 = 116U;
	int8_t x1051 = -1;
	int16_t x1052 = INT16_MAX;
	uint64_t t41 = 1981814LLU;

	t41 = (x1049>>(x1050&(x1051*x1052)));

	if (t41 != 226989929781453673LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x1081 = 2931U;
	static volatile int32_t x1082 = 34;
	static int64_t x1083 = -729293123759LL;
	static int8_t x1084 = INT8_MIN;
	volatile uint32_t t42 = 36U;

	t42 = (x1081>>(x1082&(x1083*x1084)));

	if (t42 != 2931U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1202 = -1;
	int8_t x1203 = -1;

	t43 = (x1201>>(x1202&(x1203*x1204)));

	if (t43 != 1073741823) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1225 = UINT16_MAX;
	uint8_t x1226 = 14U;
	uint32_t x1227 = 4412421U;
	static volatile int8_t x1228 = -20;
	static int32_t t44 = 8020;

	t44 = (x1225>>(x1226&(x1227*x1228)));

	if (t44 != 15) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1233 = 149617548862746LLU;
	volatile int32_t x1234 = INT32_MAX;
	int64_t x1235 = INT64_MIN;
	static int32_t x1236 = 0;

	t45 = (x1233>>(x1234&(x1235*x1236)));

	if (t45 != 149617548862746LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1277 = 13824;
	static volatile int8_t x1278 = INT8_MAX;
	static volatile int8_t x1279 = INT8_MAX;
	static volatile int32_t t46 = -30360170;

	t46 = (x1277>>(x1278&(x1279*x1280)));

	if (t46 != 6912) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1305 = UINT64_MAX;
	int16_t x1306 = INT16_MAX;
	static uint16_t x1308 = 0U;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x1305>>(x1306&(x1307*x1308)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1309 = 14474518LLU;
	uint64_t x1310 = 66088LLU;
	int8_t x1311 = INT8_MIN;
	int32_t x1312 = -1;
	volatile uint64_t t48 = 8594325095912LLU;

	t48 = (x1309>>(x1310&(x1311*x1312)));

	if (t48 != 14474518LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1321 = 1;
	volatile int16_t x1322 = 7;
	volatile uint32_t x1323 = UINT32_MAX;
	volatile uint16_t x1324 = 5U;
	volatile int32_t t49 = -1044203;

	t49 = (x1321>>(x1322&(x1323*x1324)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1341 = UINT8_MAX;
	volatile int16_t x1342 = 423;
	uint8_t x1343 = 0U;
	uint32_t x1344 = 32546U;
	static volatile int32_t t50 = -1441;

	t50 = (x1341>>(x1342&(x1343*x1344)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1357 = 1185647U;
	uint8_t x1359 = UINT8_MAX;
	uint32_t x1360 = 2037U;
	volatile uint32_t t51 = 2650866U;

	t51 = (x1357>>(x1358&(x1359*x1360)));

	if (t51 != 1185647U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x1369 = 3U;
	uint8_t x1370 = 91U;
	int8_t x1371 = INT8_MAX;
	uint16_t x1372 = UINT16_MAX;
	static int32_t t52 = 1920940;

	t52 = (x1369>>(x1370&(x1371*x1372)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1382 = -2;
	uint32_t x1383 = 0U;
	int8_t x1384 = -1;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = (x1381>>(x1382&(x1383*x1384)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1393 = 0;
	uint16_t x1395 = 62U;
	uint8_t x1396 = UINT8_MAX;
	volatile int32_t t54 = 92;

	t54 = (x1393>>(x1394&(x1395*x1396)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1409 = UINT8_MAX;
	volatile uint8_t x1410 = UINT8_MAX;
	static int32_t x1411 = -1;
	int64_t x1412 = INT64_MAX;
	static int32_t t55 = -1287082;

	t55 = (x1409>>(x1410&(x1411*x1412)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1445 = INT32_MAX;
	uint64_t x1446 = 0LLU;
	int16_t x1447 = INT16_MAX;
	int64_t x1448 = -31140206298LL;
	volatile int32_t t56 = INT32_MAX;

	t56 = (x1445>>(x1446&(x1447*x1448)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1473 = UINT64_MAX;
	uint8_t x1474 = 2U;
	volatile int16_t x1475 = -1;
	volatile int16_t x1476 = INT16_MIN;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x1473>>(x1474&(x1475*x1476)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1506 = 4127;
	int64_t x1507 = -20038493LL;

	t58 = (x1505>>(x1506&(x1507*x1508)));

	if (t58 != 226849LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1525 = INT32_MAX;
	int16_t x1526 = INT16_MAX;
	int8_t x1527 = 0;
	int16_t x1528 = -1;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x1525>>(x1526&(x1527*x1528)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x1533 = 698847;
	int8_t x1534 = INT8_MIN;
	volatile uint32_t x1535 = 0U;
	volatile int64_t x1536 = -1LL;
	int32_t t60 = -97;

	t60 = (x1533>>(x1534&(x1535*x1536)));

	if (t60 != 698847) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x1537 = UINT64_MAX;
	int8_t x1538 = -1;
	volatile int16_t x1539 = 0;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x1537>>(x1538&(x1539*x1540)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1553 = 119U;
	static int8_t x1554 = INT8_MAX;
	uint32_t x1555 = 931065202U;
	static int32_t t62 = 115889900;

	t62 = (x1553>>(x1554&(x1555*x1556)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1621 = 4855;
	int8_t x1622 = 14;
	int16_t x1623 = INT16_MIN;
	static volatile int32_t t63 = -6892416;

	t63 = (x1621>>(x1622&(x1623*x1624)));

	if (t63 != 4855) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x1649 = UINT64_MAX;
	static int16_t x1650 = INT16_MAX;
	int8_t x1651 = 0;
	int8_t x1652 = INT8_MIN;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x1649>>(x1650&(x1651*x1652)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x1673 = UINT8_MAX;
	volatile int64_t x1674 = -7529147812736LL;
	static uint64_t x1676 = 0LLU;
	int32_t t65 = -5237565;

	t65 = (x1673>>(x1674&(x1675*x1676)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1717 = 210U;
	uint64_t x1718 = 67070LLU;
	int8_t x1719 = -1;
	static volatile uint16_t x1720 = 0U;
	uint32_t t66 = 299234U;

	t66 = (x1717>>(x1718&(x1719*x1720)));

	if (t66 != 210U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x1737 = INT64_MAX;
	int8_t x1738 = 1;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x1737>>(x1738&(x1739*x1740)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x1769 = 0U;
	uint8_t x1771 = 0U;
	int64_t x1772 = 3226214102256292LL;

	t68 = (x1769>>(x1770&(x1771*x1772)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1773 = INT64_MAX;
	static volatile int8_t x1774 = 28;
	static uint16_t x1775 = UINT16_MAX;
	uint64_t x1776 = 382008231LLU;
	int64_t t69 = -4869568700921LL;

	t69 = (x1773>>(x1774&(x1775*x1776)));

	if (t69 != 549755813887LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1790 = 31;
	volatile int64_t x1791 = -1LL;

	t70 = (x1789>>(x1790&(x1791*x1792)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1805 = INT64_MAX;
	uint16_t x1806 = 5U;
	volatile int8_t x1807 = INT8_MIN;
	int16_t x1808 = INT16_MIN;

	t71 = (x1805>>(x1806&(x1807*x1808)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x1817 = 71186193217702165LL;
	static uint16_t x1818 = 56U;
	static int64_t x1819 = -1941541LL;
	int8_t x1820 = INT8_MIN;
	int64_t t72 = -618341473522994LL;

	t72 = (x1817>>(x1818&(x1819*x1820)));

	if (t72 != 71186193217702165LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x1830 = 15;
	volatile int16_t x1832 = INT16_MIN;
	int32_t t73 = INT32_MAX;

	t73 = (x1829>>(x1830&(x1831*x1832)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1833 = 3644U;
	int32_t x1834 = 133225;
	int32_t x1835 = INT32_MIN;
	uint64_t x1836 = UINT64_MAX;
	int32_t t74 = 927046001;

	t74 = (x1833>>(x1834&(x1835*x1836)));

	if (t74 != 3644) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1849 = UINT64_MAX;
	int8_t x1850 = 2;
	int8_t x1851 = INT8_MAX;
	volatile uint64_t x1852 = 5LLU;
	uint64_t t75 = 2224568LLU;

	t75 = (x1849>>(x1850&(x1851*x1852)));

	if (t75 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1897 = 11LL;
	uint16_t x1898 = UINT16_MAX;
	volatile int64_t x1899 = INT64_MAX;
	int64_t x1900 = -1LL;
	volatile int64_t t76 = 693422LL;

	t76 = (x1897>>(x1898&(x1899*x1900)));

	if (t76 != 5LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x1901 = INT16_MAX;
	volatile uint64_t x1902 = 2LLU;
	volatile int64_t x1904 = INT64_MAX;
	volatile int32_t t77 = -1058345116;

	t77 = (x1901>>(x1902&(x1903*x1904)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1905 = 1;
	int16_t x1906 = -1;
	volatile int8_t x1907 = 0;
	int64_t x1908 = -621414197712LL;
	static volatile int32_t t78 = 212607;

	t78 = (x1905>>(x1906&(x1907*x1908)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1929 = 1U;
	int32_t x1930 = INT32_MIN;
	uint64_t x1931 = UINT64_MAX;
	int16_t x1932 = -85;
	int32_t t79 = -85145887;

	t79 = (x1929>>(x1930&(x1931*x1932)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1953 = INT8_MAX;
	int64_t x1955 = -1LL;
	int8_t x1956 = INT8_MIN;
	volatile int32_t t80 = 19439082;

	t80 = (x1953>>(x1954&(x1955*x1956)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x1962 = 3U;
	volatile int8_t x1963 = -1;
	uint64_t x1964 = UINT64_MAX;
	static int32_t t81 = -38;

	t81 = (x1961>>(x1962&(x1963*x1964)));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1973 = UINT16_MAX;
	uint32_t x1975 = 77U;
	static int32_t t82 = 17076030;

	t82 = (x1973>>(x1974&(x1975*x1976)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1981 = INT8_MAX;
	static int64_t x1982 = INT64_MIN;
	static int16_t x1983 = 14629;
	volatile uint16_t x1984 = UINT16_MAX;
	volatile int32_t t83 = 42473522;

	t83 = (x1981>>(x1982&(x1983*x1984)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2011 = INT16_MIN;
	uint32_t t84 = UINT32_MAX;

	t84 = (x2009>>(x2010&(x2011*x2012)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2014 = 247U;
	uint16_t x2015 = UINT16_MAX;
	volatile int32_t t85 = -11612528;

	t85 = (x2013>>(x2014&(x2015*x2016)));

	if (t85 != 1073741823) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2021 = UINT8_MAX;
	uint8_t x2022 = 1U;
	uint16_t x2023 = 306U;
	static volatile int32_t t86 = -373;

	t86 = (x2021>>(x2022&(x2023*x2024)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2029 = 7025413LL;
	int8_t x2030 = -1;
	uint64_t x2032 = UINT64_MAX;

	t87 = (x2029>>(x2030&(x2031*x2032)));

	if (t87 != 3512706LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2037 = INT64_MAX;
	static uint16_t x2038 = 1786U;
	uint16_t x2039 = 1323U;
	int64_t t88 = INT64_MAX;

	t88 = (x2037>>(x2038&(x2039*x2040)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2101 = INT32_MAX;
	int64_t x2102 = INT64_MIN;
	volatile uint32_t x2103 = 5U;
	volatile uint8_t x2104 = 103U;
	int32_t t89 = INT32_MAX;

	t89 = (x2101>>(x2102&(x2103*x2104)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2115 = -657005621862LL;
	uint64_t x2116 = 523LLU;
	int32_t t90 = 205;

	t90 = (x2113>>(x2114&(x2115*x2116)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2141 = 511U;
	uint8_t x2142 = UINT8_MAX;
	uint16_t x2144 = 0U;
	uint32_t t91 = 10617605U;

	t91 = (x2141>>(x2142&(x2143*x2144)));

	if (t91 != 511U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x2161 = 271U;
	int16_t x2162 = 2266;
	int8_t x2163 = 0;
	static int32_t x2164 = -1;
	volatile int32_t t92 = 183822457;

	t92 = (x2161>>(x2162&(x2163*x2164)));

	if (t92 != 271) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2189 = 423480U;
	uint32_t t93 = 63304U;

	t93 = (x2189>>(x2190&(x2191*x2192)));

	if (t93 != 26467U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x2217 = INT32_MAX;
	static int32_t x2218 = -4569529;
	int8_t x2219 = -39;
	int32_t x2220 = -1;
	volatile int32_t t94 = 2160911;

	t94 = (x2217>>(x2218&(x2219*x2220)));

	if (t94 != 16777215) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2225 = 4297U;
	int64_t x2226 = INT64_MIN;
	int16_t x2227 = 51;

	t95 = (x2225>>(x2226&(x2227*x2228)));

	if (t95 != 4297) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x2230 = 58U;
	int32_t x2231 = INT32_MIN;
	volatile int32_t t96 = -18842952;

	t96 = (x2229>>(x2230&(x2231*x2232)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2237 = 2613U;
	int8_t x2238 = 0;
	volatile int8_t x2239 = INT8_MIN;
	int8_t x2240 = -5;
	volatile uint32_t t97 = 18U;

	t97 = (x2237>>(x2238&(x2239*x2240)));

	if (t97 != 2613U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2257 = UINT8_MAX;
	uint8_t x2258 = 1U;
	uint16_t x2259 = 10U;
	volatile int32_t x2260 = -1;
	int32_t t98 = -3250;

	t98 = (x2257>>(x2258&(x2259*x2260)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2293 = INT8_MAX;
	uint64_t x2295 = UINT64_MAX;
	uint64_t x2296 = 117922LLU;
	int32_t t99 = -1070;

	t99 = (x2293>>(x2294&(x2295*x2296)));

	if (t99 != 127) { NG(); } else { ; }
	
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

