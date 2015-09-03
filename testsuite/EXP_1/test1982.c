#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x33 = 14975803LL;
int8_t x34 = INT8_MIN;
uint64_t x44 = 1LLU;
uint16_t x106 = UINT16_MAX;
int32_t t5 = 7875;
static uint32_t x110 = 8116087U;
int16_t x136 = 1;
uint8_t x137 = 6U;
int32_t t8 = 724338;
uint8_t x212 = 1U;
uint8_t x224 = 1U;
int32_t t11 = 1512587;
int8_t x277 = INT8_MIN;
int16_t x278 = 2029;
uint64_t x325 = UINT64_MAX;
uint8_t x328 = 12U;
uint32_t x333 = 24765833U;
int16_t x397 = INT16_MAX;
int32_t x398 = -11;
static volatile int32_t t17 = 40793;
int64_t x470 = -1LL;
volatile uint8_t x559 = UINT8_MAX;
int16_t x617 = INT16_MAX;
int16_t x636 = 1;
volatile int64_t x643 = 1LL;
static volatile int32_t t26 = -5161;
volatile uint16_t x651 = UINT16_MAX;
uint32_t x695 = 5U;
int32_t x786 = INT32_MIN;
volatile uint64_t x787 = UINT64_MAX;
int8_t x831 = INT8_MIN;
static volatile int8_t x833 = INT8_MAX;
static uint16_t x838 = 5U;
int8_t x840 = 0;
int32_t t37 = -171481;
static int64_t x881 = INT64_MIN;
int8_t x1017 = INT8_MIN;
int16_t x1024 = 1;
volatile int32_t t41 = 531407230;
static int32_t x1081 = -299957;
int8_t x1098 = 48;
static volatile int16_t x1165 = -1;
int8_t x1166 = INT8_MIN;
volatile int32_t t46 = 1047904;
int16_t x1314 = 62;
volatile uint8_t x1316 = 0U;
volatile int32_t t47 = -8121;
volatile int32_t t49 = -7;
static volatile int32_t x1343 = INT32_MIN;
volatile int32_t t50 = 0;
uint8_t x1348 = 11U;
int64_t x1398 = -16322766086688264LL;
int64_t x1430 = -1LL;
volatile uint16_t x1438 = 1308U;
uint16_t x1446 = UINT16_MAX;
int32_t x1503 = 560963;
volatile uint16_t x1564 = 2U;
uint16_t x1566 = 104U;
int16_t x1567 = INT16_MIN;
uint8_t x1582 = 1U;
static int16_t x1615 = INT16_MIN;
static volatile uint16_t x1616 = 23U;
volatile uint8_t x1633 = 0U;
uint16_t x1635 = 1U;
uint64_t x1636 = 0LLU;
int8_t x1685 = 2;
int32_t x1686 = 1;
int64_t x1687 = 66LL;
int32_t x1821 = -20;
int32_t t67 = -88619021;
static int16_t x2090 = 0;
volatile int16_t x2091 = INT16_MIN;
int16_t x2115 = -4790;
uint16_t x2140 = 3U;
volatile int32_t t75 = 3;
volatile uint64_t x2223 = UINT64_MAX;
volatile int32_t t76 = 471485452;
volatile uint32_t x2243 = 125U;
int32_t t77 = 528014348;
static int64_t x2245 = 16986261LL;
int64_t x2259 = -1LL;
static uint8_t x2260 = 2U;
int8_t x2324 = 6;
volatile int32_t t81 = 502186657;
int64_t x2413 = INT64_MAX;
volatile int32_t x2415 = 32787;
static uint32_t x2425 = 3U;
volatile int64_t x2427 = INT64_MIN;
volatile uint8_t x2439 = 14U;
volatile int32_t t86 = 1;
uint32_t x2550 = 67083944U;
volatile uint16_t x2595 = UINT16_MAX;
volatile int32_t t93 = 410;
static uint64_t x2742 = UINT64_MAX;
static int32_t t96 = -1561;
static int32_t x2894 = INT32_MIN;


void f0(void) {
	volatile int32_t x21 = -3;
	volatile int8_t x22 = INT8_MAX;
	uint64_t x23 = 1075LLU;
	uint8_t x24 = 18U;
	volatile int32_t t0 = -27691;

	t0 = (((x21|x22)<=x23)<<x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x35 = 0LLU;
	volatile int8_t x36 = 9;
	static int32_t t1 = 18;

	t1 = (((x33|x34)<=x35)<<x36);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x41 = -1;
	int32_t x42 = INT32_MIN;
	static uint16_t x43 = UINT16_MAX;
	volatile int32_t t2 = -36;

	t2 = (((x41|x42)<=x43)<<x44);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MAX;
	volatile uint16_t x52 = 25U;
	volatile int32_t t3 = 1;

	t3 = (((x49|x50)<=x51)<<x52);

	if (t3 != 33554432) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x57 = INT16_MIN;
	volatile uint16_t x58 = 14U;
	volatile int8_t x59 = -12;
	int16_t x60 = 0;
	int32_t t4 = -4;

	t4 = (((x57|x58)<=x59)<<x60);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x105 = INT32_MIN;
	volatile int8_t x107 = -1;
	int8_t x108 = 1;

	t5 = (((x105|x106)<=x107)<<x108);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x109 = 16148U;
	volatile int8_t x111 = INT8_MIN;
	uint16_t x112 = 5U;
	volatile int32_t t6 = 20;

	t6 = (((x109|x110)<=x111)<<x112);

	if (t6 != 32) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = -725;
	int64_t x135 = -78LL;
	int32_t t7 = 1;

	t7 = (((x133|x134)<=x135)<<x136);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x138 = 2802677U;
	static uint32_t x139 = 127250U;
	static uint8_t x140 = 1U;

	t8 = (((x137|x138)<=x139)<<x140);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x209 = INT16_MAX;
	int32_t x210 = -1;
	static int64_t x211 = INT64_MIN;
	volatile int32_t t9 = 133;

	t9 = (((x209|x210)<=x211)<<x212);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x221 = 107;
	volatile int32_t x222 = -123;
	static int32_t x223 = 1017;
	int32_t t10 = -3050;

	t10 = (((x221|x222)<=x223)<<x224);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x233 = 0;
	int32_t x234 = INT32_MIN;
	uint16_t x235 = UINT16_MAX;
	volatile int16_t x236 = 3;

	t11 = (((x233|x234)<=x235)<<x236);

	if (t11 != 8) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x279 = 857616U;
	uint8_t x280 = 0U;
	volatile int32_t t12 = 29;

	t12 = (((x277|x278)<=x279)<<x280);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x317 = 10673U;
	uint16_t x318 = 7U;
	int16_t x319 = -1;
	uint8_t x320 = 31U;
	volatile int32_t t13 = 1;

	t13 = (((x317|x318)<=x319)<<x320);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x326 = 2025U;
	int32_t x327 = INT32_MAX;
	volatile int32_t t14 = 31148126;

	t14 = (((x325|x326)<=x327)<<x328);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x334 = -1;
	static volatile int64_t x335 = INT64_MIN;
	static volatile uint8_t x336 = 3U;
	int32_t t15 = 3020;

	t15 = (((x333|x334)<=x335)<<x336);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x373 = -619094502LL;
	volatile uint32_t x374 = 1920U;
	int64_t x375 = INT64_MIN;
	uint16_t x376 = 2U;
	volatile int32_t t16 = -10262;

	t16 = (((x373|x374)<=x375)<<x376);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x399 = INT16_MIN;
	int8_t x400 = 1;

	t17 = (((x397|x398)<=x399)<<x400);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MAX;
	uint16_t x416 = 9U;
	volatile int32_t t18 = 9885;

	t18 = (((x413|x414)<=x415)<<x416);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x469 = UINT8_MAX;
	static int16_t x471 = -135;
	volatile uint8_t x472 = 24U;
	static volatile int32_t t19 = 2;

	t19 = (((x469|x470)<=x471)<<x472);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x549 = -356463;
	static int64_t x550 = 1261745854366639LL;
	uint64_t x551 = UINT64_MAX;
	static volatile uint8_t x552 = 2U;
	int32_t t20 = 1706;

	t20 = (((x549|x550)<=x551)<<x552);

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x557 = 495533933516262LLU;
	int64_t x558 = INT64_MIN;
	static int8_t x560 = 4;
	volatile int32_t t21 = 3;

	t21 = (((x557|x558)<=x559)<<x560);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x585 = INT32_MAX;
	volatile uint32_t x586 = UINT32_MAX;
	int64_t x587 = -16980939LL;
	int8_t x588 = 1;
	static int32_t t22 = 115;

	t22 = (((x585|x586)<=x587)<<x588);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x618 = INT16_MAX;
	int8_t x619 = -19;
	int32_t x620 = 19;
	volatile int32_t t23 = -129736502;

	t23 = (((x617|x618)<=x619)<<x620);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x621 = INT16_MIN;
	static int64_t x622 = INT64_MIN;
	int32_t x623 = -1;
	uint8_t x624 = 8U;
	int32_t t24 = -1149;

	t24 = (((x621|x622)<=x623)<<x624);

	if (t24 != 256) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x633 = UINT32_MAX;
	volatile int32_t x634 = INT32_MAX;
	volatile int8_t x635 = -12;
	int32_t t25 = -146303;

	t25 = (((x633|x634)<=x635)<<x636);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x641 = INT32_MIN;
	int8_t x642 = INT8_MAX;
	uint16_t x644 = 6U;

	t26 = (((x641|x642)<=x643)<<x644);

	if (t26 != 64) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x649 = 91U;
	static int16_t x650 = INT16_MAX;
	uint8_t x652 = 1U;
	int32_t t27 = 2937;

	t27 = (((x649|x650)<=x651)<<x652);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MAX;
	int64_t x679 = -296503LL;
	int8_t x680 = 1;
	static int32_t t28 = -1;

	t28 = (((x677|x678)<=x679)<<x680);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x689 = 74610258519456538LL;
	int64_t x690 = INT64_MAX;
	int16_t x691 = -1;
	int8_t x692 = 6;
	volatile int32_t t29 = -880093549;

	t29 = (((x689|x690)<=x691)<<x692);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x693 = -1805;
	int16_t x694 = INT16_MAX;
	volatile uint8_t x696 = 6U;
	volatile int32_t t30 = -8;

	t30 = (((x693|x694)<=x695)<<x696);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x697 = 0;
	static int64_t x698 = INT64_MIN;
	uint32_t x699 = 6103350U;
	static uint32_t x700 = 0U;
	int32_t t31 = 3;

	t31 = (((x697|x698)<=x699)<<x700);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x785 = 175U;
	volatile uint16_t x788 = 22U;
	static volatile int32_t t32 = -64105;

	t32 = (((x785|x786)<=x787)<<x788);

	if (t32 != 4194304) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x829 = 141478823U;
	static int16_t x830 = INT16_MIN;
	static uint8_t x832 = 4U;
	volatile int32_t t33 = 1;

	t33 = (((x829|x830)<=x831)<<x832);

	if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x834 = -251077;
	int32_t x835 = -1;
	int32_t x836 = 10;
	volatile int32_t t34 = 28;

	t34 = (((x833|x834)<=x835)<<x836);

	if (t34 != 1024) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x837 = 1877U;
	volatile int16_t x839 = -1;
	int32_t t35 = -713325;

	t35 = (((x837|x838)<=x839)<<x840);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x861 = 455U;
	int64_t x862 = INT64_MIN;
	volatile uint16_t x863 = UINT16_MAX;
	int8_t x864 = 10;
	static int32_t t36 = -213232094;

	t36 = (((x861|x862)<=x863)<<x864);

	if (t36 != 1024) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x877 = INT16_MAX;
	int16_t x878 = 0;
	int64_t x879 = -1LL;
	static volatile int8_t x880 = 6;

	t37 = (((x877|x878)<=x879)<<x880);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x882 = UINT32_MAX;
	static uint16_t x883 = 47U;
	static int8_t x884 = 2;
	static volatile int32_t t38 = -214213;

	t38 = (((x881|x882)<=x883)<<x884);

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x969 = -1LL;
	static int16_t x970 = INT16_MIN;
	int16_t x971 = INT16_MIN;
	static uint16_t x972 = 1U;
	volatile int32_t t39 = -749;

	t39 = (((x969|x970)<=x971)<<x972);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1018 = 811U;
	uint32_t x1019 = 8U;
	uint8_t x1020 = 0U;
	int32_t t40 = -30;

	t40 = (((x1017|x1018)<=x1019)<<x1020);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1021 = -1;
	static int8_t x1022 = -1;
	int32_t x1023 = 98875348;

	t41 = (((x1021|x1022)<=x1023)<<x1024);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1069 = 3577U;
	volatile int32_t x1070 = INT32_MIN;
	volatile int64_t x1071 = -1LL;
	static volatile uint8_t x1072 = 11U;
	int32_t t42 = 2683;

	t42 = (((x1069|x1070)<=x1071)<<x1072);

	if (t42 != 2048) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1082 = INT8_MAX;
	int64_t x1083 = INT64_MIN;
	volatile uint16_t x1084 = 8U;
	int32_t t43 = 1757;

	t43 = (((x1081|x1082)<=x1083)<<x1084);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1097 = INT32_MIN;
	uint64_t x1099 = UINT64_MAX;
	uint8_t x1100 = 3U;
	int32_t t44 = -3423808;

	t44 = (((x1097|x1098)<=x1099)<<x1100);

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1167 = INT8_MAX;
	static uint16_t x1168 = 3U;
	static volatile int32_t t45 = 392095806;

	t45 = (((x1165|x1166)<=x1167)<<x1168);

	if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1301 = 3393887131266969LL;
	int16_t x1302 = 0;
	int8_t x1303 = -1;
	volatile int8_t x1304 = 2;

	t46 = (((x1301|x1302)<=x1303)<<x1304);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1313 = 0U;
	static uint32_t x1315 = UINT32_MAX;

	t47 = (((x1313|x1314)<=x1315)<<x1316);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1333 = 5;
	int32_t x1334 = INT32_MIN;
	static int16_t x1335 = INT16_MAX;
	volatile uint8_t x1336 = 11U;
	static int32_t t48 = -111;

	t48 = (((x1333|x1334)<=x1335)<<x1336);

	if (t48 != 2048) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1337 = -1;
	volatile uint8_t x1338 = 1U;
	int32_t x1339 = INT32_MIN;
	uint16_t x1340 = 0U;

	t49 = (((x1337|x1338)<=x1339)<<x1340);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1341 = -7;
	volatile int8_t x1342 = 3;
	uint8_t x1344 = 1U;

	t50 = (((x1341|x1342)<=x1343)<<x1344);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1345 = 22884U;
	uint32_t x1346 = 62U;
	int16_t x1347 = INT16_MIN;
	int32_t t51 = 2582737;

	t51 = (((x1345|x1346)<=x1347)<<x1348);

	if (t51 != 2048) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1397 = -1;
	int16_t x1399 = INT16_MIN;
	uint8_t x1400 = 2U;
	static int32_t t52 = 561674444;

	t52 = (((x1397|x1398)<=x1399)<<x1400);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1425 = 922U;
	static uint16_t x1426 = 8569U;
	int64_t x1427 = INT64_MIN;
	uint8_t x1428 = 1U;
	volatile int32_t t53 = 8213;

	t53 = (((x1425|x1426)<=x1427)<<x1428);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1429 = INT8_MIN;
	int64_t x1431 = INT64_MIN;
	static int8_t x1432 = 0;
	int32_t t54 = 131267395;

	t54 = (((x1429|x1430)<=x1431)<<x1432);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1437 = INT8_MAX;
	static volatile int64_t x1439 = INT64_MIN;
	int16_t x1440 = 0;
	int32_t t55 = -228157550;

	t55 = (((x1437|x1438)<=x1439)<<x1440);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1445 = INT8_MIN;
	int16_t x1447 = 1;
	volatile uint32_t x1448 = 0U;
	int32_t t56 = -538676568;

	t56 = (((x1445|x1446)<=x1447)<<x1448);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1501 = INT16_MIN;
	int32_t x1502 = INT32_MIN;
	uint8_t x1504 = 3U;
	int32_t t57 = 23;

	t57 = (((x1501|x1502)<=x1503)<<x1504);

	if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1541 = 1;
	uint64_t x1542 = 0LLU;
	int64_t x1543 = -1LL;
	uint8_t x1544 = 0U;
	int32_t t58 = 1776;

	t58 = (((x1541|x1542)<=x1543)<<x1544);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1557 = 0;
	uint64_t x1558 = UINT64_MAX;
	volatile uint8_t x1559 = 15U;
	uint32_t x1560 = 18U;
	volatile int32_t t59 = 23197448;

	t59 = (((x1557|x1558)<=x1559)<<x1560);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1561 = -1;
	static volatile int8_t x1562 = 30;
	volatile uint16_t x1563 = 11277U;
	int32_t t60 = 2596;

	t60 = (((x1561|x1562)<=x1563)<<x1564);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1565 = INT8_MAX;
	uint16_t x1568 = 6U;
	int32_t t61 = 100;

	t61 = (((x1565|x1566)<=x1567)<<x1568);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1581 = 0;
	volatile int8_t x1583 = 0;
	uint16_t x1584 = 0U;
	int32_t t62 = 64;

	t62 = (((x1581|x1582)<=x1583)<<x1584);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x1613 = 6122141820LLU;
	int16_t x1614 = INT16_MAX;
	int32_t t63 = 7;

	t63 = (((x1613|x1614)<=x1615)<<x1616);

	if (t63 != 8388608) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1621 = UINT8_MAX;
	static int32_t x1622 = 20;
	uint32_t x1623 = 62188U;
	static uint32_t x1624 = 1U;
	volatile int32_t t64 = 12;

	t64 = (((x1621|x1622)<=x1623)<<x1624);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1634 = 2U;
	volatile int32_t t65 = -12345;

	t65 = (((x1633|x1634)<=x1635)<<x1636);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1688 = 7U;
	int32_t t66 = 0;

	t66 = (((x1685|x1686)<=x1687)<<x1688);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x1822 = 443066274U;
	int64_t x1823 = INT64_MIN;
	static uint16_t x1824 = 1U;

	t67 = (((x1821|x1822)<=x1823)<<x1824);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x1861 = 1;
	int8_t x1862 = INT8_MIN;
	int32_t x1863 = 0;
	uint8_t x1864 = 9U;
	volatile int32_t t68 = -3717;

	t68 = (((x1861|x1862)<=x1863)<<x1864);

	if (t68 != 512) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x1909 = 1U;
	static uint32_t x1910 = UINT32_MAX;
	static uint16_t x1911 = 22426U;
	uint16_t x1912 = 0U;
	int32_t t69 = -399554;

	t69 = (((x1909|x1910)<=x1911)<<x1912);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1945 = -1;
	int64_t x1946 = -4100832575635LL;
	static uint64_t x1947 = UINT64_MAX;
	int8_t x1948 = 24;
	static int32_t t70 = -689;

	t70 = (((x1945|x1946)<=x1947)<<x1948);

	if (t70 != 16777216) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2089 = INT64_MAX;
	uint8_t x2092 = 1U;
	volatile int32_t t71 = -1018;

	t71 = (((x2089|x2090)<=x2091)<<x2092);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x2093 = 12697243LLU;
	uint64_t x2094 = 56932888220901LLU;
	static uint16_t x2095 = 1U;
	uint8_t x2096 = 0U;
	volatile int32_t t72 = 0;

	t72 = (((x2093|x2094)<=x2095)<<x2096);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2113 = 362;
	uint32_t x2114 = UINT32_MAX;
	static uint8_t x2116 = 19U;
	static volatile int32_t t73 = -12;

	t73 = (((x2113|x2114)<=x2115)<<x2116);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x2137 = 30;
	static int64_t x2138 = INT64_MIN;
	volatile int16_t x2139 = INT16_MAX;
	int32_t t74 = -13130;

	t74 = (((x2137|x2138)<=x2139)<<x2140);

	if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2205 = -7540;
	static int64_t x2206 = INT64_MIN;
	int8_t x2207 = 0;
	static uint16_t x2208 = 0U;

	t75 = (((x2205|x2206)<=x2207)<<x2208);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2221 = INT64_MIN;
	volatile uint16_t x2222 = 4U;
	static uint32_t x2224 = 1U;

	t76 = (((x2221|x2222)<=x2223)<<x2224);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2241 = UINT32_MAX;
	int16_t x2242 = 19;
	static volatile uint8_t x2244 = 13U;

	t77 = (((x2241|x2242)<=x2243)<<x2244);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2246 = INT8_MIN;
	int64_t x2247 = 401453312LL;
	uint8_t x2248 = 5U;
	int32_t t78 = 5554;

	t78 = (((x2245|x2246)<=x2247)<<x2248);

	if (t78 != 32) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2257 = 2704;
	volatile int16_t x2258 = INT16_MAX;
	volatile int32_t t79 = -674835;

	t79 = (((x2257|x2258)<=x2259)<<x2260);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2321 = -1;
	int8_t x2322 = INT8_MAX;
	int8_t x2323 = -11;
	int32_t t80 = -493487;

	t80 = (((x2321|x2322)<=x2323)<<x2324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x2381 = 464;
	static volatile int16_t x2382 = INT16_MAX;
	uint32_t x2383 = 43377U;
	uint8_t x2384 = 22U;

	t81 = (((x2381|x2382)<=x2383)<<x2384);

	if (t81 != 4194304) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x2389 = -39051;
	int64_t x2390 = INT64_MIN;
	int8_t x2391 = -1;
	static uint32_t x2392 = 0U;
	static int32_t t82 = -16387008;

	t82 = (((x2389|x2390)<=x2391)<<x2392);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x2414 = -1185;
	uint8_t x2416 = 8U;
	volatile int32_t t83 = 6358358;

	t83 = (((x2413|x2414)<=x2415)<<x2416);

	if (t83 != 256) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x2426 = INT64_MAX;
	static int16_t x2428 = 0;
	int32_t t84 = 73;

	t84 = (((x2425|x2426)<=x2427)<<x2428);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x2437 = INT64_MIN;
	int32_t x2438 = INT32_MIN;
	volatile int16_t x2440 = 1;
	static int32_t t85 = -11;

	t85 = (((x2437|x2438)<=x2439)<<x2440);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2521 = 12U;
	volatile int64_t x2522 = INT64_MIN;
	volatile int8_t x2523 = -1;
	volatile int8_t x2524 = 0;

	t86 = (((x2521|x2522)<=x2523)<<x2524);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2545 = INT64_MIN;
	int8_t x2546 = 1;
	uint64_t x2547 = 85874228314LLU;
	int8_t x2548 = 2;
	volatile int32_t t87 = -14;

	t87 = (((x2545|x2546)<=x2547)<<x2548);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2549 = -38;
	uint64_t x2551 = 10LLU;
	uint16_t x2552 = 0U;
	volatile int32_t t88 = -25;

	t88 = (((x2549|x2550)<=x2551)<<x2552);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x2557 = INT8_MAX;
	static uint64_t x2558 = 1269704621359186LLU;
	int16_t x2559 = INT16_MIN;
	volatile uint64_t x2560 = 3LLU;
	volatile int32_t t89 = 102;

	t89 = (((x2557|x2558)<=x2559)<<x2560);

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x2585 = 8U;
	int32_t x2586 = INT32_MIN;
	volatile int64_t x2587 = -1679902900LL;
	static uint8_t x2588 = 1U;
	volatile int32_t t90 = -3;

	t90 = (((x2585|x2586)<=x2587)<<x2588);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2593 = 3U;
	int32_t x2594 = -18628088;
	uint8_t x2596 = 1U;
	int32_t t91 = -2;

	t91 = (((x2593|x2594)<=x2595)<<x2596);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x2629 = INT8_MIN;
	static int16_t x2630 = INT16_MIN;
	int8_t x2631 = -47;
	uint8_t x2632 = 14U;
	static volatile int32_t t92 = -825238;

	t92 = (((x2629|x2630)<=x2631)<<x2632);

	if (t92 != 16384) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2633 = -1;
	volatile int64_t x2634 = INT64_MIN;
	uint16_t x2635 = 196U;
	static int8_t x2636 = 0;

	t93 = (((x2633|x2634)<=x2635)<<x2636);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x2729 = INT8_MAX;
	int8_t x2730 = INT8_MAX;
	int32_t x2731 = INT32_MIN;
	int8_t x2732 = 1;
	int32_t t94 = 16979;

	t94 = (((x2729|x2730)<=x2731)<<x2732);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2741 = UINT16_MAX;
	volatile int64_t x2743 = -1546981LL;
	uint8_t x2744 = 13U;
	volatile int32_t t95 = 268;

	t95 = (((x2741|x2742)<=x2743)<<x2744);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2853 = 8;
	int8_t x2854 = -1;
	static uint8_t x2855 = UINT8_MAX;
	int32_t x2856 = 5;

	t96 = (((x2853|x2854)<=x2855)<<x2856);

	if (t96 != 32) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2861 = 555176938U;
	int16_t x2862 = -3100;
	uint64_t x2863 = 177457420959LLU;
	static int8_t x2864 = 23;
	static volatile int32_t t97 = 792394166;

	t97 = (((x2861|x2862)<=x2863)<<x2864);

	if (t97 != 8388608) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2881 = UINT8_MAX;
	int16_t x2882 = 1;
	static int8_t x2883 = INT8_MIN;
	uint16_t x2884 = 2U;
	static volatile int32_t t98 = -9799686;

	t98 = (((x2881|x2882)<=x2883)<<x2884);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2893 = INT64_MAX;
	volatile int8_t x2895 = INT8_MIN;
	static volatile int8_t x2896 = 19;
	volatile int32_t t99 = -19144;

	t99 = (((x2893|x2894)<=x2895)<<x2896);

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

