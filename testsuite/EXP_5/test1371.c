#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x61 = 36LL;
int32_t x217 = 342730184;
static int8_t x219 = INT8_MIN;
uint32_t x233 = UINT32_MAX;
int16_t x274 = -10;
uint8_t x289 = 0U;
int32_t x294 = 61071;
static uint64_t x296 = UINT64_MAX;
int32_t t9 = 197;
static int64_t x418 = INT64_MIN;
volatile int32_t x422 = INT32_MAX;
uint32_t x445 = 0U;
volatile int32_t x446 = INT32_MAX;
int32_t t16 = 20;
uint64_t t17 = 14LLU;
static int32_t x559 = -1;
int8_t x560 = -1;
static uint8_t x561 = UINT8_MAX;
static int64_t x562 = -1LL;
int16_t x563 = INT16_MIN;
int16_t x691 = -1116;
uint32_t x785 = 113748U;
uint64_t x788 = UINT64_MAX;
int8_t x818 = INT8_MAX;
int8_t x820 = -13;
int8_t x841 = 13;
uint32_t x921 = UINT32_MAX;
uint32_t t28 = 1530U;
static uint16_t x926 = 949U;
uint8_t x927 = 0U;
int16_t x970 = -62;
uint32_t t33 = 6U;
volatile int32_t t34 = -1;
int8_t x1074 = -3;
int16_t x1075 = -1;
int32_t t37 = 93065;
uint16_t x1131 = 315U;
volatile int32_t t38 = 1895269;
uint64_t x1361 = 31710772LLU;
int64_t x1363 = 8787330314880LL;
volatile uint8_t x1364 = 1U;
int8_t x1404 = 0;
int8_t x1446 = INT8_MAX;
static volatile int32_t t47 = 3954;
int16_t x1493 = 1;
static uint64_t x1502 = 1465LLU;
volatile int32_t t50 = -12457297;
static int16_t x1537 = 8460;
volatile uint8_t x1538 = 85U;
int16_t x1582 = INT16_MIN;
static uint64_t x1608 = UINT64_MAX;
int16_t x1614 = INT16_MIN;
int64_t x1773 = 57155303953016767LL;
uint32_t x1893 = UINT32_MAX;
int16_t x1896 = -1;
int32_t x1968 = -17;
uint32_t x2000 = 1U;
static volatile uint32_t t61 = 59U;
static int64_t x2019 = -1LL;
uint64_t t63 = 27673033096362371LLU;
volatile int32_t t64 = -3414;
int8_t x2157 = 0;
uint64_t x2167 = UINT64_MAX;
int8_t x2168 = -3;
volatile int32_t t66 = -40648;
volatile int64_t x2230 = INT64_MIN;
uint8_t x2231 = 58U;
int8_t x2375 = -1;
uint32_t t70 = 81686832U;
volatile uint8_t x2442 = 14U;
volatile uint64_t x2449 = UINT64_MAX;
volatile int8_t x2467 = INT8_MIN;
uint8_t x2505 = 0U;
volatile int8_t x2554 = -1;
int16_t x2638 = INT16_MIN;
int8_t x2661 = 1;
int16_t x2663 = INT16_MAX;
uint16_t x2677 = 1U;
uint64_t x2680 = UINT64_MAX;
uint8_t x2777 = 0U;
int8_t x2779 = -1;
static int32_t t81 = 1974932;
static uint8_t x2803 = 31U;
uint16_t x2813 = UINT16_MAX;
static uint16_t x2821 = 0U;
volatile int32_t x2910 = INT32_MAX;
int32_t x3053 = 2;
uint64_t x3060 = UINT64_MAX;
int32_t t88 = -60985;
int64_t x3102 = INT64_MAX;
int64_t x3157 = 534306937LL;
static int8_t x3238 = 1;
static uint32_t x3365 = UINT32_MAX;
static uint8_t x3405 = 0U;
int8_t x3408 = -1;
int16_t x3419 = -1;
uint64_t x3429 = 268612270129929LLU;
int16_t x3430 = INT16_MIN;
uint64_t t95 = 4092535LLU;
static int32_t x3466 = INT32_MIN;
int32_t t96 = -173;
static uint32_t x3493 = UINT32_MAX;
int32_t x3496 = -1;
volatile uint32_t t97 = 117U;
static volatile int32_t t98 = -2;


void f0(void) {
	static uint64_t x57 = 67847LLU;
	volatile uint16_t x58 = 9762U;
	volatile int16_t x59 = INT16_MIN;
	int8_t x60 = -1;
	static uint64_t t0 = 866LLU;

	t0 = (x57<<((x58<x59)-x60));

	if (t0 != 135694LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x62 = INT32_MAX;
	int64_t x63 = 1138011179567065LL;
	uint32_t x64 = UINT32_MAX;
	int64_t t1 = -1193934579066783355LL;

	t1 = (x61<<((x62<x63)-x64));

	if (t1 != 144LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x85 = 23U;
	uint16_t x86 = 906U;
	int64_t x87 = -1LL;
	int16_t x88 = -1;
	int32_t t2 = 1;

	t2 = (x85<<((x86<x87)-x88));

	if (t2 != 46) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x218 = -732;
	volatile int16_t x220 = -1;
	volatile int32_t t3 = -11006;

	t3 = (x217<<((x218<x219)-x220));

	if (t3 != 1370920736) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x229 = INT32_MAX;
	volatile uint64_t x230 = UINT64_MAX;
	uint8_t x231 = 30U;
	int8_t x232 = 0;
	int32_t t4 = INT32_MAX;

	t4 = (x229<<((x230<x231)-x232));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	volatile int16_t x236 = -1;
	uint32_t t5 = 3552U;

	t5 = (x233<<((x234<x235)-x236));

	if (t5 != 4294967292U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x261 = 0;
	volatile int32_t x262 = INT32_MIN;
	int8_t x263 = -1;
	int16_t x264 = -1;
	static int32_t t6 = 25712;

	t6 = (x261<<((x262<x263)-x264));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x273 = 462535LLU;
	uint64_t x275 = 1064570423756LLU;
	int8_t x276 = -1;
	uint64_t t7 = 5LLU;

	t7 = (x273<<((x274<x275)-x276));

	if (t7 != 925070LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = 4;
	uint64_t x292 = UINT64_MAX;
	static volatile int32_t t8 = -1;

	t8 = (x289<<((x290<x291)-x292));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x293 = 1U;
	int64_t x295 = INT64_MAX;

	t9 = (x293<<((x294<x295)-x296));

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x325 = INT32_MAX;
	int64_t x326 = 149399195704763122LL;
	int64_t x327 = INT64_MAX;
	int32_t x328 = 1;
	volatile int32_t t10 = INT32_MAX;

	t10 = (x325<<((x326<x327)-x328));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int8_t x346 = 1;
	int8_t x347 = INT8_MIN;
	uint32_t x348 = UINT32_MAX;
	uint32_t t11 = 11U;

	t11 = (x345<<((x346<x347)-x348));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x417 = 615U;
	int32_t x419 = -1;
	static int16_t x420 = 0;
	volatile int32_t t12 = -12;

	t12 = (x417<<((x418<x419)-x420));

	if (t12 != 1230) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x421 = 86964U;
	int8_t x423 = INT8_MIN;
	int8_t x424 = -1;
	static uint32_t t13 = 7062U;

	t13 = (x421<<((x422<x423)-x424));

	if (t13 != 173928U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x425 = UINT64_MAX;
	static uint32_t x426 = 72203U;
	volatile int64_t x427 = 110152422014LL;
	static int8_t x428 = -2;
	volatile uint64_t t14 = 1933789LLU;

	t14 = (x425<<((x426<x427)-x428));

	if (t14 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x447 = 6804LLU;
	static uint64_t x448 = UINT64_MAX;
	volatile uint32_t t15 = 6627U;

	t15 = (x445<<((x446<x447)-x448));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x481 = 26U;
	int32_t x482 = 7830;
	int8_t x483 = INT8_MIN;
	uint32_t x484 = UINT32_MAX;

	t16 = (x481<<((x482<x483)-x484));

	if (t16 != 52) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x521 = 45LLU;
	volatile int32_t x522 = -24108;
	uint16_t x523 = 52U;
	static volatile int8_t x524 = -15;

	t17 = (x521<<((x522<x523)-x524));

	if (t17 != 2949120LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x525 = 23U;
	static volatile int32_t x526 = -903152789;
	static int64_t x527 = -3059996636992LL;
	volatile uint8_t x528 = 0U;
	static int32_t t18 = -325;

	t18 = (x525<<((x526<x527)-x528));

	if (t18 != 23) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x557 = UINT8_MAX;
	int8_t x558 = 18;
	static volatile int32_t t19 = 5719;

	t19 = (x557<<((x558<x559)-x560));

	if (t19 != 510) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x564 = -1;
	volatile int32_t t20 = -3297;

	t20 = (x561<<((x562<x563)-x564));

	if (t20 != 510) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x589 = 153861334;
	int32_t x590 = INT32_MAX;
	volatile uint16_t x591 = 1U;
	static int8_t x592 = 0;
	static int32_t t21 = -340157319;

	t21 = (x589<<((x590<x591)-x592));

	if (t21 != 153861334) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x649 = 1752271;
	volatile int32_t x650 = INT32_MIN;
	volatile uint8_t x651 = UINT8_MAX;
	int64_t x652 = -1LL;
	volatile int32_t t22 = 7;

	t22 = (x649<<((x650<x651)-x652));

	if (t22 != 7009084) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x689 = 55;
	static int16_t x690 = -1;
	static volatile int32_t x692 = -1;
	int32_t t23 = -117861176;

	t23 = (x689<<((x690<x691)-x692));

	if (t23 != 110) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x786 = -1;
	static volatile uint16_t x787 = 597U;
	volatile uint32_t t24 = 12U;

	t24 = (x785<<((x786<x787)-x788));

	if (t24 != 454992U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x817 = 24U;
	int8_t x819 = 2;
	static uint32_t t25 = 128743535U;

	t25 = (x817<<((x818<x819)-x820));

	if (t25 != 196608U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x842 = 11291LLU;
	int32_t x843 = INT32_MIN;
	int8_t x844 = 1;
	volatile int32_t t26 = 1;

	t26 = (x841<<((x842<x843)-x844));

	if (t26 != 13) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x853 = UINT32_MAX;
	static int32_t x854 = INT32_MIN;
	volatile int32_t x855 = -1;
	static volatile uint16_t x856 = 0U;
	uint32_t t27 = 11421U;

	t27 = (x853<<((x854<x855)-x856));

	if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x922 = -1;
	uint8_t x923 = 8U;
	volatile uint8_t x924 = 0U;

	t28 = (x921<<((x922<x923)-x924));

	if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x925 = UINT16_MAX;
	int64_t x928 = -1LL;
	int32_t t29 = -164;

	t29 = (x925<<((x926<x927)-x928));

	if (t29 != 131070) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x953 = 16;
	volatile int64_t x954 = -1LL;
	static volatile int64_t x955 = INT64_MIN;
	int8_t x956 = 0;
	volatile int32_t t30 = 0;

	t30 = (x953<<((x954<x955)-x956));

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x969 = UINT8_MAX;
	volatile int8_t x971 = -1;
	int64_t x972 = -1LL;
	volatile int32_t t31 = 407;

	t31 = (x969<<((x970<x971)-x972));

	if (t31 != 1020) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1001 = 5339U;
	uint32_t x1002 = UINT32_MAX;
	static volatile int64_t x1003 = INT64_MIN;
	uint32_t x1004 = UINT32_MAX;
	int32_t t32 = 64716;

	t32 = (x1001<<((x1002<x1003)-x1004));

	if (t32 != 10678) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1013 = 3494U;
	int16_t x1014 = 895;
	uint32_t x1015 = UINT32_MAX;
	uint32_t x1016 = UINT32_MAX;

	t33 = (x1013<<((x1014<x1015)-x1016));

	if (t33 != 13976U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1033 = 127U;
	uint64_t x1034 = 407LLU;
	uint64_t x1035 = 100266LLU;
	int16_t x1036 = -1;

	t34 = (x1033<<((x1034<x1035)-x1036));

	if (t34 != 508) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1073 = 45;
	volatile uint32_t x1076 = UINT32_MAX;
	int32_t t35 = -23;

	t35 = (x1073<<((x1074<x1075)-x1076));

	if (t35 != 180) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1085 = 15307;
	int16_t x1086 = INT16_MIN;
	volatile int16_t x1087 = INT16_MIN;
	int8_t x1088 = 0;
	int32_t t36 = -64;

	t36 = (x1085<<((x1086<x1087)-x1088));

	if (t36 != 15307) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1125 = 5;
	uint64_t x1126 = 3218782297158303LLU;
	int16_t x1127 = INT16_MAX;
	int64_t x1128 = -1LL;

	t37 = (x1125<<((x1126<x1127)-x1128));

	if (t37 != 10) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1129 = 18U;
	int16_t x1130 = INT16_MAX;
	int8_t x1132 = 0;

	t38 = (x1129<<((x1130<x1131)-x1132));

	if (t38 != 18) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1153 = INT16_MAX;
	volatile uint16_t x1154 = UINT16_MAX;
	static uint64_t x1155 = UINT64_MAX;
	volatile int16_t x1156 = 1;
	int32_t t39 = -34778;

	t39 = (x1153<<((x1154<x1155)-x1156));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x1193 = 13856712562212LLU;
	int64_t x1194 = -211929947060311855LL;
	int32_t x1195 = -481;
	volatile int8_t x1196 = 0;
	static uint64_t t40 = 482357577654559401LLU;

	t40 = (x1193<<((x1194<x1195)-x1196));

	if (t40 != 27713425124424LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1201 = 0;
	uint64_t x1202 = 203533LLU;
	uint8_t x1203 = 57U;
	int8_t x1204 = -28;
	volatile int32_t t41 = -694199;

	t41 = (x1201<<((x1202<x1203)-x1204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1333 = 1U;
	int64_t x1334 = INT64_MIN;
	volatile int16_t x1335 = 278;
	volatile uint64_t x1336 = UINT64_MAX;
	int32_t t42 = 283197041;

	t42 = (x1333<<((x1334<x1335)-x1336));

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1362 = -1;
	uint64_t t43 = 72443908462LLU;

	t43 = (x1361<<((x1362<x1363)-x1364));

	if (t43 != 31710772LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1369 = 1504833634LLU;
	static uint64_t x1370 = UINT64_MAX;
	int8_t x1371 = -1;
	static int16_t x1372 = -1;
	uint64_t t44 = 12282LLU;

	t44 = (x1369<<((x1370<x1371)-x1372));

	if (t44 != 3009667268LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x1401 = 286U;
	int16_t x1402 = -1;
	uint64_t x1403 = UINT64_MAX;
	uint32_t t45 = 225U;

	t45 = (x1401<<((x1402<x1403)-x1404));

	if (t45 != 286U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1445 = 3U;
	static int64_t x1447 = INT64_MAX;
	volatile uint32_t x1448 = UINT32_MAX;
	volatile int32_t t46 = 395303630;

	t46 = (x1445<<((x1446<x1447)-x1448));

	if (t46 != 12) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1449 = 7U;
	uint64_t x1450 = UINT64_MAX;
	int8_t x1451 = -1;
	int32_t x1452 = -1;

	t47 = (x1449<<((x1450<x1451)-x1452));

	if (t47 != 14) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x1489 = 4480563544072246977LLU;
	uint8_t x1490 = 5U;
	uint32_t x1491 = 7162547U;
	int8_t x1492 = 1;
	volatile uint64_t t48 = 11837359055018725LLU;

	t48 = (x1489<<((x1490<x1491)-x1492));

	if (t48 != 4480563544072246977LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1494 = UINT16_MAX;
	uint64_t x1495 = UINT64_MAX;
	int8_t x1496 = 0;
	int32_t t49 = 1;

	t49 = (x1493<<((x1494<x1495)-x1496));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1501 = 15U;
	int32_t x1503 = -4952;
	int16_t x1504 = -2;

	t50 = (x1501<<((x1502<x1503)-x1504));

	if (t50 != 120) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1539 = -1LL;
	uint64_t x1540 = UINT64_MAX;
	volatile int32_t t51 = 15117;

	t51 = (x1537<<((x1538<x1539)-x1540));

	if (t51 != 16920) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1545 = 3U;
	int32_t x1546 = 0;
	int32_t x1547 = -1;
	volatile int32_t x1548 = -1;
	volatile int32_t t52 = -6;

	t52 = (x1545<<((x1546<x1547)-x1548));

	if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1581 = INT8_MAX;
	volatile int8_t x1583 = INT8_MIN;
	uint32_t x1584 = UINT32_MAX;
	static volatile int32_t t53 = -6985618;

	t53 = (x1581<<((x1582<x1583)-x1584));

	if (t53 != 508) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1605 = 1825U;
	int32_t x1606 = -1;
	int32_t x1607 = -7990;
	volatile int32_t t54 = -750;

	t54 = (x1605<<((x1606<x1607)-x1608));

	if (t54 != 3650) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1613 = INT8_MAX;
	static int32_t x1615 = INT32_MAX;
	int8_t x1616 = 1;
	volatile int32_t t55 = -2109;

	t55 = (x1613<<((x1614<x1615)-x1616));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1774 = -10;
	int8_t x1775 = INT8_MIN;
	uint32_t x1776 = UINT32_MAX;
	static int64_t t56 = 56299381LL;

	t56 = (x1773<<((x1774<x1775)-x1776));

	if (t56 != 114310607906033534LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x1894 = 2497601556421LL;
	uint8_t x1895 = 60U;
	volatile uint32_t t57 = 793853004U;

	t57 = (x1893<<((x1894<x1895)-x1896));

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1933 = 3499753U;
	volatile uint8_t x1934 = 26U;
	int32_t x1935 = INT32_MIN;
	static int16_t x1936 = 0;
	volatile uint32_t t58 = 290864159U;

	t58 = (x1933<<((x1934<x1935)-x1936));

	if (t58 != 3499753U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1941 = 561LLU;
	volatile int16_t x1942 = INT16_MIN;
	int32_t x1943 = INT32_MIN;
	int16_t x1944 = -1;
	volatile uint64_t t59 = 5115587057476136700LLU;

	t59 = (x1941<<((x1942<x1943)-x1944));

	if (t59 != 1122LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1965 = 7014;
	int32_t x1966 = -4473598;
	uint16_t x1967 = 245U;
	int32_t t60 = 348582;

	t60 = (x1965<<((x1966<x1967)-x1968));

	if (t60 != 1838678016) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1997 = 33938U;
	int8_t x1998 = INT8_MIN;
	int64_t x1999 = 158862862882939469LL;

	t61 = (x1997<<((x1998<x1999)-x2000));

	if (t61 != 33938U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2017 = 10561;
	int32_t x2018 = INT32_MIN;
	uint64_t x2020 = UINT64_MAX;
	int32_t t62 = 7;

	t62 = (x2017<<((x2018<x2019)-x2020));

	if (t62 != 42244) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2025 = UINT64_MAX;
	int32_t x2026 = INT32_MIN;
	volatile uint16_t x2027 = 0U;
	volatile int32_t x2028 = -1;

	t63 = (x2025<<((x2026<x2027)-x2028));

	if (t63 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2057 = UINT16_MAX;
	uint8_t x2058 = UINT8_MAX;
	volatile int16_t x2059 = -1;
	static volatile int8_t x2060 = -1;

	t64 = (x2057<<((x2058<x2059)-x2060));

	if (t64 != 131070) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2158 = 1U;
	int8_t x2159 = -4;
	static volatile int32_t x2160 = -1;
	int32_t t65 = 25645;

	t65 = (x2157<<((x2158<x2159)-x2160));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2165 = UINT8_MAX;
	volatile int64_t x2166 = -1LL;

	t66 = (x2165<<((x2166<x2167)-x2168));

	if (t66 != 2040) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x2229 = UINT32_MAX;
	uint32_t x2232 = UINT32_MAX;
	uint32_t t67 = 3164U;

	t67 = (x2229<<((x2230<x2231)-x2232));

	if (t67 != 4294967292U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x2297 = 114112395LLU;
	int16_t x2298 = INT16_MIN;
	uint64_t x2299 = 1266683435976LLU;
	int16_t x2300 = -1;
	volatile uint64_t t68 = 1442LLU;

	t68 = (x2297<<((x2298<x2299)-x2300));

	if (t68 != 228224790LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2329 = 2983U;
	volatile int8_t x2330 = -1;
	volatile int16_t x2331 = -1;
	static int32_t x2332 = -1;
	static volatile int32_t t69 = -93560647;

	t69 = (x2329<<((x2330<x2331)-x2332));

	if (t69 != 5966) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2373 = UINT32_MAX;
	int32_t x2374 = INT32_MIN;
	static int32_t x2376 = -1;

	t70 = (x2373<<((x2374<x2375)-x2376));

	if (t70 != 4294967292U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2441 = 14U;
	uint8_t x2443 = 3U;
	volatile int8_t x2444 = -1;
	volatile int32_t t71 = 1;

	t71 = (x2441<<((x2442<x2443)-x2444));

	if (t71 != 28) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2450 = INT16_MAX;
	volatile uint16_t x2451 = UINT16_MAX;
	uint64_t x2452 = UINT64_MAX;
	uint64_t t72 = 2612927990LLU;

	t72 = (x2449<<((x2450<x2451)-x2452));

	if (t72 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x2465 = 6308LLU;
	int8_t x2466 = INT8_MIN;
	int16_t x2468 = -1;
	volatile uint64_t t73 = 170LLU;

	t73 = (x2465<<((x2466<x2467)-x2468));

	if (t73 != 12616LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2506 = INT64_MAX;
	int8_t x2507 = -62;
	uint32_t x2508 = UINT32_MAX;
	int32_t t74 = -6;

	t74 = (x2505<<((x2506<x2507)-x2508));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2513 = UINT64_MAX;
	uint16_t x2514 = 61U;
	uint16_t x2515 = 3652U;
	int8_t x2516 = -1;
	volatile uint64_t t75 = 31721710LLU;

	t75 = (x2513<<((x2514<x2515)-x2516));

	if (t75 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2517 = INT8_MAX;
	uint64_t x2518 = 1LLU;
	static volatile uint16_t x2519 = 0U;
	uint32_t x2520 = UINT32_MAX;
	int32_t t76 = 13;

	t76 = (x2517<<((x2518<x2519)-x2520));

	if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2553 = 19U;
	int32_t x2555 = 2227;
	volatile int8_t x2556 = 1;
	volatile uint32_t t77 = 6U;

	t77 = (x2553<<((x2554<x2555)-x2556));

	if (t77 != 19U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2637 = 2029;
	int32_t x2639 = -1568810;
	uint64_t x2640 = UINT64_MAX;
	volatile int32_t t78 = 1249256;

	t78 = (x2637<<((x2638<x2639)-x2640));

	if (t78 != 4058) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2662 = INT32_MIN;
	static int64_t x2664 = -1LL;
	static int32_t t79 = -974684035;

	t79 = (x2661<<((x2662<x2663)-x2664));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x2678 = 1U;
	uint16_t x2679 = UINT16_MAX;
	volatile int32_t t80 = 3387;

	t80 = (x2677<<((x2678<x2679)-x2680));

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x2778 = -5420;
	volatile int8_t x2780 = -1;

	t81 = (x2777<<((x2778<x2779)-x2780));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2801 = 190763945701664417LLU;
	static int8_t x2802 = INT8_MIN;
	int16_t x2804 = -1;
	uint64_t t82 = 0LLU;

	t82 = (x2801<<((x2802<x2803)-x2804));

	if (t82 != 763055782806657668LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2814 = INT32_MIN;
	volatile int32_t x2815 = INT32_MIN;
	uint32_t x2816 = UINT32_MAX;
	static volatile int32_t t83 = 2;

	t83 = (x2813<<((x2814<x2815)-x2816));

	if (t83 != 131070) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2822 = INT64_MIN;
	int8_t x2823 = -1;
	int16_t x2824 = -1;
	int32_t t84 = 3275370;

	t84 = (x2821<<((x2822<x2823)-x2824));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x2909 = 42128718752998386LLU;
	static int64_t x2911 = INT64_MIN;
	int32_t x2912 = -1;
	uint64_t t85 = 218595216583864024LLU;

	t85 = (x2909<<((x2910<x2911)-x2912));

	if (t85 != 84257437505996772LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3033 = 3555827;
	int8_t x3034 = INT8_MIN;
	uint64_t x3035 = 2077509079848537831LLU;
	static uint64_t x3036 = UINT64_MAX;
	volatile int32_t t86 = 2481725;

	t86 = (x3033<<((x3034<x3035)-x3036));

	if (t86 != 7111654) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x3054 = INT64_MAX;
	int8_t x3055 = INT8_MIN;
	int8_t x3056 = -1;
	static int32_t t87 = -688;

	t87 = (x3053<<((x3054<x3055)-x3056));

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3057 = 2318U;
	static int32_t x3058 = -1;
	int64_t x3059 = -420134940032849LL;

	t88 = (x3057<<((x3058<x3059)-x3060));

	if (t88 != 4636) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3101 = 57U;
	int64_t x3103 = -8LL;
	uint32_t x3104 = UINT32_MAX;
	volatile int32_t t89 = 46;

	t89 = (x3101<<((x3102<x3103)-x3104));

	if (t89 != 114) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x3158 = INT16_MIN;
	int64_t x3159 = -14135575179LL;
	int64_t x3160 = -1LL;
	volatile int64_t t90 = 121824LL;

	t90 = (x3157<<((x3158<x3159)-x3160));

	if (t90 != 1068613874LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x3237 = UINT16_MAX;
	volatile uint8_t x3239 = 65U;
	uint32_t x3240 = 0U;
	volatile int32_t t91 = 506566;

	t91 = (x3237<<((x3238<x3239)-x3240));

	if (t91 != 131070) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x3366 = 2743112600LLU;
	static uint16_t x3367 = 18U;
	uint32_t x3368 = UINT32_MAX;
	uint32_t t92 = 822143U;

	t92 = (x3365<<((x3366<x3367)-x3368));

	if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x3406 = INT8_MAX;
	int32_t x3407 = -1;
	volatile int32_t t93 = 126164258;

	t93 = (x3405<<((x3406<x3407)-x3408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3417 = UINT64_MAX;
	static uint64_t x3418 = UINT64_MAX;
	int8_t x3420 = -7;
	uint64_t t94 = 579LLU;

	t94 = (x3417<<((x3418<x3419)-x3420));

	if (t94 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3431 = 0;
	int32_t x3432 = -1;

	t95 = (x3429<<((x3430<x3431)-x3432));

	if (t95 != 1074449080519716LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3465 = 9U;
	static int8_t x3467 = -1;
	uint32_t x3468 = UINT32_MAX;

	t96 = (x3465<<((x3466<x3467)-x3468));

	if (t96 != 36) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x3494 = INT8_MAX;
	volatile uint64_t x3495 = UINT64_MAX;

	t97 = (x3493<<((x3494<x3495)-x3496));

	if (t97 != 4294967292U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3509 = 408U;
	int64_t x3510 = INT64_MAX;
	static volatile int8_t x3511 = INT8_MIN;
	uint32_t x3512 = UINT32_MAX;

	t98 = (x3509<<((x3510<x3511)-x3512));

	if (t98 != 816) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3545 = 75;
	static uint8_t x3546 = 37U;
	int32_t x3547 = -36359869;
	uint32_t x3548 = UINT32_MAX;
	volatile int32_t t99 = -3815233;

	t99 = (x3545<<((x3546<x3547)-x3548));

	if (t99 != 150) { NG(); } else { ; }
	
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

