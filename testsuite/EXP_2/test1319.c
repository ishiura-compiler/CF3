#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MAX;
int16_t x10 = 324;
uint8_t x12 = 0U;
static int32_t x38 = -1;
volatile int32_t t2 = -334691458;
static uint8_t x73 = UINT8_MAX;
int32_t x74 = 13541;
int32_t t3 = 1229;
int8_t x107 = INT8_MAX;
uint64_t x122 = UINT64_MAX;
static uint16_t x158 = 13U;
static int32_t x219 = INT32_MIN;
volatile int32_t t14 = -158783837;
int64_t x282 = -1LL;
static uint64_t x307 = UINT64_MAX;
uint32_t t19 = 617U;
int32_t x460 = 1;
uint32_t t24 = 605U;
uint8_t x592 = 9U;
static uint16_t x602 = UINT16_MAX;
int16_t x664 = 1;
static uint32_t x767 = UINT32_MAX;
int16_t x768 = 12;
int64_t t30 = 2819291291728LL;
uint16_t x794 = 4U;
int64_t x795 = -1LL;
int16_t x796 = 31;
static volatile int8_t x822 = INT8_MAX;
static int64_t x889 = -1LL;
int64_t t33 = 33LL;
int8_t x908 = 1;
int32_t t35 = 16;
volatile int64_t t37 = -9540090780793LL;
static int32_t x970 = INT32_MAX;
static int64_t x978 = 13143019984348LL;
static int64_t x979 = INT64_MIN;
volatile int32_t t39 = 4;
int32_t x999 = 21;
int16_t x1066 = -1;
int64_t t42 = 102349419633LL;
uint8_t x1128 = 19U;
volatile int32_t t44 = -32700;
int8_t x1229 = INT8_MIN;
uint16_t x1231 = 58U;
volatile int32_t t46 = 91152695;
uint64_t t48 = 2799LLU;
int32_t x1399 = -127;
volatile int64_t t51 = -160635260798LL;
uint32_t x1435 = 13U;
static int8_t x1436 = 1;
uint16_t x1442 = UINT16_MAX;
volatile int64_t t54 = -1946896830LL;
static volatile int8_t x1584 = 8;
volatile int32_t t56 = 1;
static int8_t x1589 = INT8_MIN;
uint32_t x1590 = UINT32_MAX;
int32_t t57 = -1950;
volatile uint16_t x1595 = 1215U;
volatile int32_t t60 = 28;
int8_t x1694 = -29;
volatile int32_t t61 = 16;
int8_t x1734 = INT8_MAX;
int16_t x1747 = -1;
static uint8_t x1748 = 0U;
int8_t x1766 = INT8_MAX;
static uint64_t x1805 = 2185888825203622782LLU;
static uint8_t x1808 = 60U;
static int16_t x1870 = INT16_MIN;
volatile int32_t t70 = 358911448;
int64_t x1906 = INT64_MIN;
int8_t x1908 = 21;
int16_t x1920 = 29;
uint8_t x1939 = UINT8_MAX;
int32_t x1946 = 105;
static int8_t x1964 = 1;
int64_t t80 = 528LL;
volatile uint64_t t81 = 79886471932LLU;
uint32_t x2060 = 1U;
uint32_t x2098 = 1764609U;
int32_t x2209 = 5139;
int8_t x2294 = INT8_MAX;
uint16_t x2311 = 7050U;
int16_t x2489 = INT16_MIN;
int32_t t96 = 0;
int16_t x2499 = INT16_MAX;
uint8_t x2508 = 1U;
int8_t x2534 = -16;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int64_t x2 = 1005009LL;
	volatile uint64_t x3 = 10399955LLU;
	uint8_t x4 = 2U;
	volatile int32_t t0 = 13764744;

	t0 = ((x1&(x2==x3))<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x11 = INT16_MIN;
	int64_t t1 = -61519LL;

	t1 = ((x9&(x10==x11))<<x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x37 = INT8_MIN;
	static int64_t x39 = -13923LL;
	int16_t x40 = 22;

	t2 = ((x37&(x38==x39))<<x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x75 = -3174;
	static uint8_t x76 = 11U;

	t3 = ((x73&(x74==x75))<<x76);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x85 = 23576596;
	int8_t x86 = 36;
	int64_t x87 = -30977138247LL;
	static int16_t x88 = 19;
	int32_t t4 = 111;

	t4 = ((x85&(x86==x87))<<x88);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x93 = INT8_MAX;
	volatile uint64_t x94 = 607960335642LLU;
	static uint16_t x95 = 0U;
	uint32_t x96 = 1U;
	int32_t t5 = 0;

	t5 = ((x93&(x94==x95))<<x96);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x105 = -1;
	int32_t x106 = INT32_MIN;
	static uint8_t x108 = 0U;
	volatile int32_t t6 = 0;

	t6 = ((x105&(x106==x107))<<x108);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x109 = -1;
	int16_t x110 = 0;
	volatile int64_t x111 = INT64_MIN;
	int8_t x112 = 1;
	volatile int32_t t7 = -7;

	t7 = ((x109&(x110==x111))<<x112);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int8_t x114 = -1;
	int8_t x115 = INT8_MIN;
	static int32_t x116 = 13;
	volatile int32_t t8 = 0;

	t8 = ((x113&(x114==x115))<<x116);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x121 = 850201LL;
	int32_t x123 = -3828;
	uint16_t x124 = 7U;
	int64_t t9 = 287978LL;

	t9 = ((x121&(x122==x123))<<x124);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x125 = INT16_MIN;
	static uint8_t x126 = 1U;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = 0U;
	volatile int32_t t10 = -3235975;

	t10 = ((x125&(x126==x127))<<x128);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x157 = -1;
	int8_t x159 = INT8_MAX;
	uint8_t x160 = 7U;
	int32_t t11 = -2;

	t11 = ((x157&(x158==x159))<<x160);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x193 = UINT64_MAX;
	int32_t x194 = INT32_MIN;
	uint16_t x195 = 19273U;
	uint16_t x196 = 54U;
	volatile uint64_t t12 = 130595451LLU;

	t12 = ((x193&(x194==x195))<<x196);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	uint8_t x220 = 2U;
	volatile int32_t t13 = 120240273;

	t13 = ((x217&(x218==x219))<<x220);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x245 = 51;
	int32_t x246 = 273280;
	int64_t x247 = INT64_MIN;
	uint8_t x248 = 4U;

	t14 = ((x245&(x246==x247))<<x248);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x281 = UINT32_MAX;
	uint64_t x283 = 135290234878LLU;
	static uint64_t x284 = 29LLU;
	volatile uint32_t t15 = 29121U;

	t15 = ((x281&(x282==x283))<<x284);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x305 = -1LL;
	uint16_t x306 = UINT16_MAX;
	uint8_t x308 = 59U;
	static volatile int64_t t16 = -2736717491867191684LL;

	t16 = ((x305&(x306==x307))<<x308);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x309 = INT8_MIN;
	volatile int32_t x310 = INT32_MAX;
	int32_t x311 = 1014496952;
	uint16_t x312 = 27U;
	volatile int32_t t17 = 8189582;

	t17 = ((x309&(x310==x311))<<x312);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x357 = INT8_MIN;
	uint64_t x358 = 65964823557LLU;
	uint64_t x359 = 17LLU;
	uint8_t x360 = 0U;
	volatile int32_t t18 = 38084701;

	t18 = ((x357&(x358==x359))<<x360);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x369 = 1U;
	int64_t x370 = INT64_MIN;
	static int16_t x371 = INT16_MAX;
	uint8_t x372 = 6U;

	t19 = ((x369&(x370==x371))<<x372);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x381 = 2140785054U;
	int16_t x382 = -6165;
	int8_t x383 = -1;
	int8_t x384 = 13;
	uint32_t t20 = 1532859U;

	t20 = ((x381&(x382==x383))<<x384);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x433 = 4U;
	uint32_t x434 = 44075967U;
	static int32_t x435 = -142;
	uint8_t x436 = 13U;
	uint32_t t21 = 288U;

	t21 = ((x433&(x434==x435))<<x436);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x441 = INT16_MIN;
	volatile uint8_t x442 = 5U;
	uint64_t x443 = UINT64_MAX;
	volatile int8_t x444 = 11;
	int32_t t22 = 233134;

	t22 = ((x441&(x442==x443))<<x444);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x457 = INT8_MIN;
	int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MIN;
	int32_t t23 = -44;

	t23 = ((x457&(x458==x459))<<x460);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x501 = UINT32_MAX;
	int16_t x502 = INT16_MIN;
	volatile uint64_t x503 = UINT64_MAX;
	uint16_t x504 = 0U;

	t24 = ((x501&(x502==x503))<<x504);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x589 = 322LLU;
	int64_t x590 = INT64_MIN;
	int64_t x591 = -7822LL;
	volatile uint64_t t25 = 285016431598412187LLU;

	t25 = ((x589&(x590==x591))<<x592);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x601 = 8162U;
	int32_t x603 = -3;
	uint8_t x604 = 3U;
	volatile uint32_t t26 = 390U;

	t26 = ((x601&(x602==x603))<<x604);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x661 = INT64_MAX;
	int32_t x662 = INT32_MIN;
	int8_t x663 = INT8_MIN;
	volatile int64_t t27 = 136468137773171LL;

	t27 = ((x661&(x662==x663))<<x664);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x681 = 308640767;
	int8_t x682 = INT8_MIN;
	int32_t x683 = -1;
	uint8_t x684 = 10U;
	static int32_t t28 = -93242;

	t28 = ((x681&(x682==x683))<<x684);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x749 = 133489174929686LLU;
	uint16_t x750 = UINT16_MAX;
	uint32_t x751 = 806U;
	uint8_t x752 = 3U;
	volatile uint64_t t29 = 1LLU;

	t29 = ((x749&(x750==x751))<<x752);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x765 = -11024007LL;
	int32_t x766 = 21573;

	t30 = ((x765&(x766==x767))<<x768);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x793 = -25704LL;
	volatile int64_t t31 = -10LL;

	t31 = ((x793&(x794==x795))<<x796);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x821 = INT32_MIN;
	static int8_t x823 = -3;
	volatile uint32_t x824 = 15U;
	static volatile int32_t t32 = -933911;

	t32 = ((x821&(x822==x823))<<x824);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x890 = INT8_MAX;
	int8_t x891 = INT8_MAX;
	static int8_t x892 = 1;

	t33 = ((x889&(x890==x891))<<x892);

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x905 = 1;
	int8_t x906 = -2;
	int32_t x907 = INT32_MAX;
	volatile int32_t t34 = 123;

	t34 = ((x905&(x906==x907))<<x908);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x953 = 1U;
	volatile int16_t x954 = INT16_MIN;
	static uint64_t x955 = 531800515781LLU;
	static volatile uint16_t x956 = 30U;

	t35 = ((x953&(x954==x955))<<x956);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x957 = INT32_MIN;
	uint16_t x958 = UINT16_MAX;
	static uint8_t x959 = UINT8_MAX;
	static volatile int8_t x960 = 0;
	volatile int32_t t36 = -270900150;

	t36 = ((x957&(x958==x959))<<x960);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x965 = INT64_MIN;
	int64_t x966 = -18236861429114LL;
	uint64_t x967 = UINT64_MAX;
	static uint8_t x968 = 29U;

	t37 = ((x965&(x966==x967))<<x968);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x969 = -1;
	uint8_t x971 = 105U;
	int8_t x972 = 0;
	static int32_t t38 = 12671;

	t38 = ((x969&(x970==x971))<<x972);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x977 = 60U;
	int16_t x980 = 2;

	t39 = ((x977&(x978==x979))<<x980);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x997 = -1LL;
	uint32_t x998 = 13U;
	volatile int32_t x1000 = 1;
	int64_t t40 = -251LL;

	t40 = ((x997&(x998==x999))<<x1000);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1065 = INT32_MIN;
	static int32_t x1067 = INT32_MIN;
	volatile uint32_t x1068 = 0U;
	int32_t t41 = 210;

	t41 = ((x1065&(x1066==x1067))<<x1068);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1077 = -301698LL;
	uint64_t x1078 = 506145098040740538LLU;
	int64_t x1079 = INT64_MIN;
	volatile int16_t x1080 = 33;

	t42 = ((x1077&(x1078==x1079))<<x1080);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1109 = -1LL;
	int16_t x1110 = -1;
	volatile uint32_t x1111 = UINT32_MAX;
	int8_t x1112 = 6;
	volatile int64_t t43 = 455974329715139LL;

	t43 = ((x1109&(x1110==x1111))<<x1112);

	if (t43 != 64LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1125 = 6U;
	volatile int32_t x1126 = INT32_MIN;
	static uint32_t x1127 = 202300U;

	t44 = ((x1125&(x1126==x1127))<<x1128);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1181 = INT16_MIN;
	int64_t x1182 = INT64_MAX;
	volatile uint64_t x1183 = UINT64_MAX;
	uint8_t x1184 = 5U;
	int32_t t45 = -3530876;

	t45 = ((x1181&(x1182==x1183))<<x1184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1230 = INT64_MIN;
	volatile int16_t x1232 = 0;

	t46 = ((x1229&(x1230==x1231))<<x1232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x1245 = UINT64_MAX;
	static int64_t x1246 = 601385095970494LL;
	int16_t x1247 = INT16_MAX;
	int8_t x1248 = 1;
	volatile uint64_t t47 = 84LLU;

	t47 = ((x1245&(x1246==x1247))<<x1248);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1273 = 149843282435757646LLU;
	volatile int32_t x1274 = -3254405;
	static uint16_t x1275 = UINT16_MAX;
	static volatile int8_t x1276 = 0;

	t48 = ((x1273&(x1274==x1275))<<x1276);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1297 = 480U;
	int64_t x1298 = INT64_MIN;
	int32_t x1299 = -532241286;
	volatile int64_t x1300 = 3LL;
	static int32_t t49 = -3;

	t49 = ((x1297&(x1298==x1299))<<x1300);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1313 = -1;
	volatile int16_t x1314 = INT16_MIN;
	int32_t x1315 = -196440;
	uint16_t x1316 = 0U;
	volatile int32_t t50 = -23;

	t50 = ((x1313&(x1314==x1315))<<x1316);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1397 = -3249180LL;
	int16_t x1398 = INT16_MIN;
	uint64_t x1400 = 16LLU;

	t51 = ((x1397&(x1398==x1399))<<x1400);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1433 = -1;
	int8_t x1434 = INT8_MAX;
	volatile int32_t t52 = 0;

	t52 = ((x1433&(x1434==x1435))<<x1436);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1441 = INT64_MAX;
	int64_t x1443 = INT64_MAX;
	static uint8_t x1444 = 10U;
	volatile int64_t t53 = -1051347026392834306LL;

	t53 = ((x1441&(x1442==x1443))<<x1444);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1517 = -1LL;
	uint8_t x1518 = 59U;
	int16_t x1519 = INT16_MAX;
	uint16_t x1520 = 5U;

	t54 = ((x1517&(x1518==x1519))<<x1520);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1569 = INT16_MIN;
	static int8_t x1570 = -22;
	volatile int32_t x1571 = INT32_MIN;
	int32_t x1572 = 3;
	static int32_t t55 = 61779562;

	t55 = ((x1569&(x1570==x1571))<<x1572);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1581 = UINT8_MAX;
	static uint16_t x1582 = 33U;
	volatile int8_t x1583 = -1;

	t56 = ((x1581&(x1582==x1583))<<x1584);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1591 = -1;
	uint32_t x1592 = 7U;

	t57 = ((x1589&(x1590==x1591))<<x1592);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x1593 = INT32_MIN;
	uint8_t x1594 = 5U;
	int8_t x1596 = 8;
	int32_t t58 = 3;

	t58 = ((x1593&(x1594==x1595))<<x1596);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1601 = -1;
	static int32_t x1602 = INT32_MIN;
	int8_t x1603 = -59;
	volatile uint64_t x1604 = 3LLU;
	static int32_t t59 = 164055084;

	t59 = ((x1601&(x1602==x1603))<<x1604);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1625 = 102287187;
	int32_t x1626 = -27;
	static int32_t x1627 = -1;
	uint64_t x1628 = 16LLU;

	t60 = ((x1625&(x1626==x1627))<<x1628);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1693 = UINT8_MAX;
	int8_t x1695 = -1;
	int64_t x1696 = 5LL;

	t61 = ((x1693&(x1694==x1695))<<x1696);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x1701 = INT32_MAX;
	int8_t x1702 = INT8_MIN;
	int16_t x1703 = 1;
	uint32_t x1704 = 22U;
	int32_t t62 = 585;

	t62 = ((x1701&(x1702==x1703))<<x1704);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x1705 = UINT16_MAX;
	int64_t x1706 = 52601118502899LL;
	uint8_t x1707 = 0U;
	uint16_t x1708 = 12U;
	static int32_t t63 = -17332;

	t63 = ((x1705&(x1706==x1707))<<x1708);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1725 = -55071;
	int16_t x1726 = INT16_MIN;
	int8_t x1727 = INT8_MIN;
	uint8_t x1728 = 11U;
	int32_t t64 = 190;

	t64 = ((x1725&(x1726==x1727))<<x1728);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x1733 = 1;
	static uint32_t x1735 = 222882062U;
	volatile uint16_t x1736 = 1U;
	static int32_t t65 = 1;

	t65 = ((x1733&(x1734==x1735))<<x1736);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x1745 = UINT32_MAX;
	int32_t x1746 = -22168;
	uint32_t t66 = 1U;

	t66 = ((x1745&(x1746==x1747))<<x1748);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1765 = INT64_MIN;
	static int32_t x1767 = -1;
	uint16_t x1768 = 7U;
	volatile int64_t t67 = 55876LL;

	t67 = ((x1765&(x1766==x1767))<<x1768);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1785 = 92LLU;
	int64_t x1786 = -2546945748LL;
	uint64_t x1787 = UINT64_MAX;
	int8_t x1788 = 47;
	uint64_t t68 = 104501895602751LLU;

	t68 = ((x1785&(x1786==x1787))<<x1788);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1806 = INT16_MAX;
	static int32_t x1807 = INT32_MIN;
	uint64_t t69 = 3LLU;

	t69 = ((x1805&(x1806==x1807))<<x1808);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1869 = 485U;
	volatile int8_t x1871 = INT8_MIN;
	int32_t x1872 = 1;

	t70 = ((x1869&(x1870==x1871))<<x1872);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1905 = 12546900LL;
	uint32_t x1907 = 1184867503U;
	volatile int64_t t71 = -505LL;

	t71 = ((x1905&(x1906==x1907))<<x1908);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1913 = 799U;
	int32_t x1914 = 6993;
	volatile uint16_t x1915 = 6U;
	int8_t x1916 = 2;
	int32_t t72 = -152637;

	t72 = ((x1913&(x1914==x1915))<<x1916);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x1917 = -48820184;
	uint8_t x1918 = 0U;
	volatile uint8_t x1919 = UINT8_MAX;
	int32_t t73 = -455211;

	t73 = ((x1917&(x1918==x1919))<<x1920);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x1937 = -3443766LL;
	uint32_t x1938 = 14459U;
	int8_t x1940 = 60;
	volatile int64_t t74 = -386781805496LL;

	t74 = ((x1937&(x1938==x1939))<<x1940);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1945 = INT8_MAX;
	volatile int16_t x1947 = -60;
	uint8_t x1948 = 1U;
	volatile int32_t t75 = 433;

	t75 = ((x1945&(x1946==x1947))<<x1948);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1953 = INT16_MAX;
	volatile uint16_t x1954 = UINT16_MAX;
	int8_t x1955 = INT8_MIN;
	static uint32_t x1956 = 3U;
	static volatile int32_t t76 = 489354;

	t76 = ((x1953&(x1954==x1955))<<x1956);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1961 = UINT16_MAX;
	int8_t x1962 = 7;
	uint32_t x1963 = 121906U;
	volatile int32_t t77 = 7054571;

	t77 = ((x1961&(x1962==x1963))<<x1964);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1989 = INT64_MIN;
	uint64_t x1990 = UINT64_MAX;
	int16_t x1991 = INT16_MIN;
	static uint8_t x1992 = 0U;
	static volatile int64_t t78 = 616299228439741LL;

	t78 = ((x1989&(x1990==x1991))<<x1992);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1993 = INT16_MIN;
	static uint16_t x1994 = 46U;
	int32_t x1995 = INT32_MIN;
	volatile uint8_t x1996 = 24U;
	int32_t t79 = -61570072;

	t79 = ((x1993&(x1994==x1995))<<x1996);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1997 = INT64_MAX;
	int64_t x1998 = -1470819048512685LL;
	volatile uint64_t x1999 = UINT64_MAX;
	uint8_t x2000 = 58U;

	t80 = ((x1997&(x1998==x1999))<<x2000);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2009 = 8996188738488LLU;
	static int64_t x2010 = INT64_MIN;
	volatile int16_t x2011 = INT16_MIN;
	int16_t x2012 = 9;

	t81 = ((x2009&(x2010==x2011))<<x2012);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2057 = -14324;
	volatile uint32_t x2058 = 1232U;
	static int64_t x2059 = INT64_MIN;
	int32_t t82 = 162317;

	t82 = ((x2057&(x2058==x2059))<<x2060);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2097 = INT32_MAX;
	uint32_t x2099 = UINT32_MAX;
	volatile uint8_t x2100 = 2U;
	int32_t t83 = -1941430;

	t83 = ((x2097&(x2098==x2099))<<x2100);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2177 = UINT64_MAX;
	static volatile int16_t x2178 = -1;
	uint8_t x2179 = UINT8_MAX;
	static uint8_t x2180 = 8U;
	static volatile uint64_t t84 = 2563016079502266345LLU;

	t84 = ((x2177&(x2178==x2179))<<x2180);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2210 = 279383LLU;
	volatile uint16_t x2211 = 102U;
	static int8_t x2212 = 1;
	volatile int32_t t85 = -1827;

	t85 = ((x2209&(x2210==x2211))<<x2212);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2217 = -1;
	int32_t x2218 = -1;
	static int8_t x2219 = 0;
	uint8_t x2220 = 31U;
	volatile int32_t t86 = -1499479;

	t86 = ((x2217&(x2218==x2219))<<x2220);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2229 = 1;
	int16_t x2230 = INT16_MAX;
	int64_t x2231 = INT64_MAX;
	static volatile int32_t x2232 = 0;
	volatile int32_t t87 = -28087;

	t87 = ((x2229&(x2230==x2231))<<x2232);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x2277 = -15;
	volatile int16_t x2278 = -6;
	uint32_t x2279 = 124051U;
	int8_t x2280 = 3;
	int32_t t88 = 161;

	t88 = ((x2277&(x2278==x2279))<<x2280);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2281 = -8039;
	int32_t x2282 = INT32_MAX;
	uint64_t x2283 = UINT64_MAX;
	int16_t x2284 = 1;
	volatile int32_t t89 = -40;

	t89 = ((x2281&(x2282==x2283))<<x2284);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2293 = 7U;
	int8_t x2295 = INT8_MAX;
	uint8_t x2296 = 0U;
	volatile int32_t t90 = 28094;

	t90 = ((x2293&(x2294==x2295))<<x2296);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x2309 = INT32_MAX;
	int8_t x2310 = -5;
	uint32_t x2312 = 17U;
	int32_t t91 = 55;

	t91 = ((x2309&(x2310==x2311))<<x2312);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2313 = -4;
	static uint64_t x2314 = 798477011683LLU;
	uint16_t x2315 = UINT16_MAX;
	static uint8_t x2316 = 1U;
	volatile int32_t t92 = 59527;

	t92 = ((x2313&(x2314==x2315))<<x2316);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2373 = INT8_MAX;
	int64_t x2374 = INT64_MIN;
	uint64_t x2375 = 1155897LLU;
	int16_t x2376 = 2;
	volatile int32_t t93 = 315;

	t93 = ((x2373&(x2374==x2375))<<x2376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x2425 = 2U;
	uint32_t x2426 = UINT32_MAX;
	static uint16_t x2427 = 315U;
	uint8_t x2428 = 4U;
	int32_t t94 = 29;

	t94 = ((x2425&(x2426==x2427))<<x2428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x2481 = 3026U;
	int8_t x2482 = -1;
	int16_t x2483 = 22;
	uint64_t x2484 = 10LLU;
	volatile uint32_t t95 = 46U;

	t95 = ((x2481&(x2482==x2483))<<x2484);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2490 = 909U;
	uint64_t x2491 = UINT64_MAX;
	uint8_t x2492 = 3U;

	t96 = ((x2489&(x2490==x2491))<<x2492);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x2497 = INT64_MIN;
	int16_t x2498 = INT16_MIN;
	static uint16_t x2500 = 39U;
	int64_t t97 = 46209490LL;

	t97 = ((x2497&(x2498==x2499))<<x2500);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x2505 = 5;
	int16_t x2506 = INT16_MIN;
	int64_t x2507 = -1LL;
	static volatile int32_t t98 = 750;

	t98 = ((x2505&(x2506==x2507))<<x2508);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2533 = INT32_MIN;
	uint16_t x2535 = UINT16_MAX;
	int8_t x2536 = 0;
	static volatile int32_t t99 = -3590344;

	t99 = ((x2533&(x2534==x2535))<<x2536);

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

