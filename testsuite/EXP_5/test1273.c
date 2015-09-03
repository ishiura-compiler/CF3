#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t3 = -59452;
uint64_t t4 = UINT64_MAX;
int8_t x149 = -38;
uint64_t x151 = 629084263604861LLU;
volatile uint32_t x177 = 436603U;
int8_t x178 = INT8_MIN;
uint32_t x205 = 1052879U;
uint8_t x208 = 1U;
volatile int32_t t9 = 239863;
int32_t x243 = 3;
int16_t x289 = 2;
uint32_t x292 = 2U;
int8_t x456 = 1;
int64_t x466 = INT64_MIN;
uint32_t x467 = 28502461U;
volatile int32_t t20 = -41640076;
int8_t x525 = -1;
volatile int32_t t21 = -324558992;
int32_t x591 = INT32_MAX;
int64_t t24 = INT64_MIN;
static int32_t x631 = -1;
int32_t x662 = INT32_MAX;
int16_t x681 = INT16_MAX;
int16_t x741 = INT16_MIN;
int32_t t30 = -16452;
volatile int8_t x745 = -63;
volatile int64_t x779 = INT64_MAX;
uint64_t x864 = 1LLU;
static int8_t x865 = -1;
int32_t t36 = -3;
static volatile int32_t t37 = 250264;
volatile int32_t x969 = INT32_MAX;
int32_t t39 = 48590342;
volatile uint32_t t41 = UINT32_MAX;
int32_t x1287 = -16909;
static volatile uint32_t t46 = 395685198U;
static uint32_t x1357 = 14063854U;
volatile uint32_t t47 = 1U;
int16_t x1397 = INT16_MIN;
uint8_t x1399 = 13U;
volatile int32_t t48 = 192323;
int16_t x1428 = 0;
int32_t t49 = -558601;
static int8_t x1468 = 0;
uint8_t x1498 = UINT8_MAX;
uint16_t x1638 = UINT16_MAX;
static uint32_t x1678 = UINT32_MAX;
static uint64_t x1685 = UINT64_MAX;
int64_t x1749 = -1LL;
uint16_t x1752 = 13U;
volatile int64_t x1891 = 3620386LL;
static uint16_t x1892 = 1U;
static uint8_t x1925 = 2U;
uint8_t x1964 = 18U;
uint32_t t68 = 29259257U;
int16_t x2123 = INT16_MAX;
int32_t t72 = 266;
volatile int16_t x2185 = INT16_MAX;
volatile int8_t x2225 = -1;
static uint8_t x2228 = 1U;
static uint8_t x2283 = UINT8_MAX;
int64_t x2302 = -1LL;
int16_t x2415 = 24;
int16_t x2435 = -1;
uint8_t x2512 = 23U;
static uint8_t x2552 = 10U;
volatile int32_t t84 = 216082;
int32_t x2617 = INT32_MIN;
uint8_t x2620 = 10U;
uint8_t x2624 = 9U;
volatile uint8_t x2698 = 24U;
uint32_t x2718 = 222514230U;
static int8_t x2720 = 0;
static uint64_t t90 = 1784LLU;
volatile uint64_t x2827 = 17764169LLU;
uint16_t x2828 = 2U;
volatile int64_t t91 = INT64_MIN;
int32_t x2913 = INT32_MIN;
uint16_t x2915 = 249U;
volatile uint8_t x2921 = 2U;
int16_t x2923 = INT16_MAX;
uint64_t x2924 = 1LLU;
int32_t t94 = 106631781;
volatile int64_t x2937 = INT64_MIN;
int64_t t95 = INT64_MIN;
uint32_t x2980 = 9U;
int64_t x3019 = -1LL;
volatile int32_t t98 = 147856;
uint64_t t99 = 54600LLU;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MAX;
	static volatile int8_t x7 = 45;
	uint16_t x8 = 3U;
	uint32_t t0 = UINT32_MAX;

	t0 = (x5|((x6==x7)>>x8));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = 1196;
	int16_t x14 = -1;
	uint64_t x15 = 259322783LLU;
	uint64_t x16 = 18LLU;
	int32_t t1 = -13427237;

	t1 = (x13|((x14==x15)>>x16));

	if (t1 != 1196) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MAX;
	volatile uint8_t x18 = UINT8_MAX;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = 9U;
	static int64_t t2 = INT64_MAX;

	t2 = (x17|((x18==x19)>>x20));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 116U;
	volatile uint8_t x30 = UINT8_MAX;
	volatile uint32_t x31 = 3275U;
	uint8_t x32 = 9U;

	t3 = (x29|((x30==x31)>>x32));

	if (t3 != 116) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	uint16_t x144 = 8U;

	t4 = (x141|((x142==x143)>>x144));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x150 = -1;
	int32_t x152 = 0;
	volatile int32_t t5 = 0;

	t5 = (x149|((x150==x151)>>x152));

	if (t5 != -38) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x153 = INT32_MIN;
	volatile uint8_t x154 = 62U;
	uint16_t x155 = 571U;
	uint8_t x156 = 13U;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x153|((x154==x155)>>x156));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x179 = -1;
	uint8_t x180 = 0U;
	uint32_t t7 = 51654184U;

	t7 = (x177|((x178==x179)>>x180));

	if (t7 != 436603U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x206 = -1;
	static int64_t x207 = -670118051402339014LL;
	volatile uint32_t t8 = 22234615U;

	t8 = (x205|((x206==x207)>>x208));

	if (t8 != 1052879U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x221 = INT16_MAX;
	int16_t x222 = INT16_MAX;
	uint16_t x223 = UINT16_MAX;
	volatile uint16_t x224 = 1U;

	t9 = (x221|((x222==x223)>>x224));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x241 = 244734699;
	uint16_t x242 = UINT16_MAX;
	int8_t x244 = 1;
	static volatile int32_t t10 = 1;

	t10 = (x241|((x242==x243)>>x244));

	if (t10 != 244734699) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile uint16_t x250 = 286U;
	uint32_t x251 = 1171U;
	static uint8_t x252 = 12U;
	static int32_t t11 = -4274;

	t11 = (x249|((x250==x251)>>x252));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x269 = 1U;
	volatile int16_t x270 = -1;
	int64_t x271 = INT64_MIN;
	uint16_t x272 = 14U;
	volatile int32_t t12 = -778744;

	t12 = (x269|((x270==x271)>>x272));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x290 = UINT8_MAX;
	static volatile int64_t x291 = INT64_MAX;
	int32_t t13 = 558958;

	t13 = (x289|((x290==x291)>>x292));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x293 = INT32_MAX;
	int16_t x294 = INT16_MAX;
	uint32_t x295 = 41081U;
	int8_t x296 = 1;
	int32_t t14 = INT32_MAX;

	t14 = (x293|((x294==x295)>>x296));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x317 = -1;
	volatile int8_t x318 = -1;
	static int8_t x319 = -3;
	int8_t x320 = 1;
	volatile int32_t t15 = -46738692;

	t15 = (x317|((x318==x319)>>x320));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x349 = INT16_MIN;
	static int8_t x350 = INT8_MIN;
	int16_t x351 = -1;
	int8_t x352 = 0;
	volatile int32_t t16 = 241;

	t16 = (x349|((x350==x351)>>x352));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MAX;
	int8_t x364 = 30;
	int32_t t17 = INT32_MIN;

	t17 = (x361|((x362==x363)>>x364));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x453 = INT64_MIN;
	volatile uint64_t x454 = UINT64_MAX;
	volatile int8_t x455 = -1;
	int64_t t18 = INT64_MIN;

	t18 = (x453|((x454==x455)>>x456));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x457 = INT64_MAX;
	volatile int64_t x458 = -1LL;
	uint8_t x459 = 7U;
	uint8_t x460 = 0U;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x457|((x458==x459)>>x460));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x465 = -1;
	volatile uint8_t x468 = 10U;

	t20 = (x465|((x466==x467)>>x468));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x526 = INT32_MIN;
	int64_t x527 = -112LL;
	int32_t x528 = 0;

	t21 = (x525|((x526==x527)>>x528));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x561 = UINT64_MAX;
	int16_t x562 = -1912;
	int16_t x563 = INT16_MIN;
	static uint32_t x564 = 1U;
	uint64_t t22 = UINT64_MAX;

	t22 = (x561|((x562==x563)>>x564));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x589 = 115;
	int32_t x590 = -2524;
	uint8_t x592 = 1U;
	volatile int32_t t23 = -600;

	t23 = (x589|((x590==x591)>>x592));

	if (t23 != 115) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x609 = INT64_MIN;
	int8_t x610 = INT8_MIN;
	int16_t x611 = INT16_MAX;
	uint8_t x612 = 0U;

	t24 = (x609|((x610==x611)>>x612));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x629 = 10U;
	uint16_t x630 = UINT16_MAX;
	static int32_t x632 = 0;
	volatile int32_t t25 = 42;

	t25 = (x629|((x630==x631)>>x632));

	if (t25 != 10) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x661 = 3LL;
	int16_t x663 = -1;
	static int16_t x664 = 22;
	static int64_t t26 = 64LL;

	t26 = (x661|((x662==x663)>>x664));

	if (t26 != 3LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x665 = 610;
	uint8_t x666 = 0U;
	int32_t x667 = INT32_MIN;
	uint8_t x668 = 6U;
	volatile int32_t t27 = 20112;

	t27 = (x665|((x666==x667)>>x668));

	if (t27 != 610) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x682 = -1;
	int32_t x683 = INT32_MAX;
	static int8_t x684 = 1;
	static volatile int32_t t28 = 6;

	t28 = (x681|((x682==x683)>>x684));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x725 = INT16_MAX;
	static volatile int16_t x726 = INT16_MIN;
	int32_t x727 = INT32_MIN;
	int8_t x728 = 0;
	int32_t t29 = -1;

	t29 = (x725|((x726==x727)>>x728));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x742 = 414;
	int8_t x743 = -1;
	uint8_t x744 = 14U;

	t30 = (x741|((x742==x743)>>x744));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x746 = 73012U;
	static volatile int16_t x747 = -137;
	volatile uint8_t x748 = 11U;
	volatile int32_t t31 = 282302330;

	t31 = (x745|((x746==x747)>>x748));

	if (t31 != -63) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x777 = -91907526;
	uint16_t x778 = 1443U;
	uint8_t x780 = 1U;
	volatile int32_t t32 = -14038;

	t32 = (x777|((x778==x779)>>x780));

	if (t32 != -91907526) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x861 = UINT64_MAX;
	static int16_t x862 = INT16_MIN;
	volatile int32_t x863 = INT32_MAX;
	uint64_t t33 = UINT64_MAX;

	t33 = (x861|((x862==x863)>>x864));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x866 = -1;
	static uint16_t x867 = 153U;
	volatile uint64_t x868 = 31LLU;
	int32_t t34 = -59438;

	t34 = (x865|((x866==x867)>>x868));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x889 = 30084521LLU;
	uint16_t x890 = 73U;
	volatile uint8_t x891 = 83U;
	static uint8_t x892 = 22U;
	uint64_t t35 = 14830192LLU;

	t35 = (x889|((x890==x891)>>x892));

	if (t35 != 30084521LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x905 = INT8_MIN;
	int16_t x906 = -4271;
	static int64_t x907 = INT64_MIN;
	volatile int64_t x908 = 0LL;

	t36 = (x905|((x906==x907)>>x908));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x957 = 256U;
	volatile int8_t x958 = 1;
	uint8_t x959 = 41U;
	static int64_t x960 = 3LL;

	t37 = (x957|((x958==x959)>>x960));

	if (t37 != 256) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x970 = INT8_MIN;
	static uint64_t x971 = 159215LLU;
	int8_t x972 = 4;
	int32_t t38 = INT32_MAX;

	t38 = (x969|((x970==x971)>>x972));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1049 = 2;
	volatile int16_t x1050 = INT16_MIN;
	int64_t x1051 = INT64_MAX;
	uint32_t x1052 = 29U;

	t39 = (x1049|((x1050==x1051)>>x1052));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1133 = 1;
	int16_t x1134 = INT16_MIN;
	static int32_t x1135 = 21;
	uint16_t x1136 = 12U;
	volatile int32_t t40 = 4;

	t40 = (x1133|((x1134==x1135)>>x1136));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1141 = UINT32_MAX;
	uint32_t x1142 = 297U;
	int64_t x1143 = -29894383040LL;
	uint8_t x1144 = 0U;

	t41 = (x1141|((x1142==x1143)>>x1144));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1145 = -23;
	int32_t x1146 = INT32_MAX;
	int32_t x1147 = INT32_MIN;
	int64_t x1148 = 2LL;
	int32_t t42 = 2564;

	t42 = (x1145|((x1146==x1147)>>x1148));

	if (t42 != -23) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1273 = -1;
	int8_t x1274 = -1;
	volatile int8_t x1275 = 1;
	int32_t x1276 = 31;
	volatile int32_t t43 = -1;

	t43 = (x1273|((x1274==x1275)>>x1276));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1285 = INT16_MIN;
	volatile uint32_t x1286 = 4811U;
	uint8_t x1288 = 1U;
	static int32_t t44 = -24695650;

	t44 = (x1285|((x1286==x1287)>>x1288));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x1305 = -1;
	int8_t x1306 = INT8_MAX;
	int16_t x1307 = INT16_MIN;
	int8_t x1308 = 0;
	static volatile int32_t t45 = 208758983;

	t45 = (x1305|((x1306==x1307)>>x1308));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1353 = 508728280U;
	volatile int8_t x1354 = -1;
	uint32_t x1355 = UINT32_MAX;
	static int8_t x1356 = 0;

	t46 = (x1353|((x1354==x1355)>>x1356));

	if (t46 != 508728281U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1358 = 392238185U;
	static uint8_t x1359 = 3U;
	uint8_t x1360 = 1U;

	t47 = (x1357|((x1358==x1359)>>x1360));

	if (t47 != 14063854U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x1398 = UINT16_MAX;
	static uint8_t x1400 = 8U;

	t48 = (x1397|((x1398==x1399)>>x1400));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1425 = 7U;
	int8_t x1426 = -1;
	static uint64_t x1427 = UINT64_MAX;

	t49 = (x1425|((x1426==x1427)>>x1428));

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x1465 = 14U;
	int16_t x1466 = 18;
	static int16_t x1467 = 67;
	static volatile int32_t t50 = 4;

	t50 = (x1465|((x1466==x1467)>>x1468));

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1489 = -1LL;
	uint16_t x1490 = 9906U;
	static uint16_t x1491 = UINT16_MAX;
	int8_t x1492 = 0;
	volatile int64_t t51 = 1LL;

	t51 = (x1489|((x1490==x1491)>>x1492));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1493 = INT16_MIN;
	static int16_t x1494 = 2;
	volatile int16_t x1495 = INT16_MAX;
	uint8_t x1496 = 22U;
	int32_t t52 = 637;

	t52 = (x1493|((x1494==x1495)>>x1496));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x1497 = 2U;
	int32_t x1499 = -772;
	static uint16_t x1500 = 16U;
	uint32_t t53 = 193U;

	t53 = (x1497|((x1498==x1499)>>x1500));

	if (t53 != 2U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1585 = 35589507472541924LLU;
	int32_t x1586 = INT32_MIN;
	static uint64_t x1587 = 5079177313283385112LLU;
	int8_t x1588 = 11;
	uint64_t t54 = 7LLU;

	t54 = (x1585|((x1586==x1587)>>x1588));

	if (t54 != 35589507472541924LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1637 = 1955U;
	uint8_t x1639 = 0U;
	int16_t x1640 = 1;
	volatile int32_t t55 = 3960;

	t55 = (x1637|((x1638==x1639)>>x1640));

	if (t55 != 1955) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1665 = INT32_MIN;
	static int16_t x1666 = INT16_MAX;
	int16_t x1667 = INT16_MAX;
	int8_t x1668 = 7;
	volatile int32_t t56 = INT32_MIN;

	t56 = (x1665|((x1666==x1667)>>x1668));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x1673 = INT16_MIN;
	int32_t x1674 = -867692882;
	int16_t x1675 = INT16_MIN;
	int8_t x1676 = 0;
	int32_t t57 = -27280;

	t57 = (x1673|((x1674==x1675)>>x1676));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1677 = 583LL;
	uint32_t x1679 = 5143U;
	static int8_t x1680 = 0;
	volatile int64_t t58 = -3807970680LL;

	t58 = (x1677|((x1678==x1679)>>x1680));

	if (t58 != 583LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1686 = INT64_MIN;
	uint8_t x1687 = 1U;
	uint8_t x1688 = 4U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x1685|((x1686==x1687)>>x1688));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x1693 = 31947679047LLU;
	int32_t x1694 = INT32_MIN;
	uint64_t x1695 = 44878911339575LLU;
	uint16_t x1696 = 26U;
	uint64_t t60 = 5239617044673LLU;

	t60 = (x1693|((x1694==x1695)>>x1696));

	if (t60 != 31947679047LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1750 = INT64_MAX;
	volatile int64_t x1751 = INT64_MAX;
	volatile int64_t t61 = -1LL;

	t61 = (x1749|((x1750==x1751)>>x1752));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1813 = 62433129399871734LL;
	int8_t x1814 = -1;
	int64_t x1815 = -1LL;
	uint16_t x1816 = 7U;
	volatile int64_t t62 = -60LL;

	t62 = (x1813|((x1814==x1815)>>x1816));

	if (t62 != 62433129399871734LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1889 = INT8_MAX;
	volatile int32_t x1890 = INT32_MIN;
	int32_t t63 = -2;

	t63 = (x1889|((x1890==x1891)>>x1892));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1905 = INT32_MAX;
	int64_t x1906 = INT64_MAX;
	int8_t x1907 = INT8_MIN;
	uint64_t x1908 = 0LLU;
	volatile int32_t t64 = INT32_MAX;

	t64 = (x1905|((x1906==x1907)>>x1908));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1926 = 3230U;
	int32_t x1927 = INT32_MAX;
	uint32_t x1928 = 0U;
	int32_t t65 = -822953598;

	t65 = (x1925|((x1926==x1927)>>x1928));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1961 = UINT8_MAX;
	uint64_t x1962 = 8482366255711889374LLU;
	static volatile int32_t x1963 = INT32_MAX;
	int32_t t66 = -31;

	t66 = (x1961|((x1962==x1963)>>x1964));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1993 = INT8_MIN;
	static uint64_t x1994 = 18624909LLU;
	int16_t x1995 = INT16_MAX;
	int8_t x1996 = 6;
	int32_t t67 = -46910;

	t67 = (x1993|((x1994==x1995)>>x1996));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2065 = 343387U;
	uint32_t x2066 = 113762380U;
	int32_t x2067 = 9062;
	volatile uint32_t x2068 = 4U;

	t68 = (x2065|((x2066==x2067)>>x2068));

	if (t68 != 343387U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2089 = 42819569815375750LLU;
	uint64_t x2090 = 18663102408046986LLU;
	int8_t x2091 = 1;
	uint16_t x2092 = 1U;
	uint64_t t69 = 34916468099350572LLU;

	t69 = (x2089|((x2090==x2091)>>x2092));

	if (t69 != 42819569815375750LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x2121 = INT64_MIN;
	int64_t x2122 = 2122LL;
	static uint16_t x2124 = 0U;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x2121|((x2122==x2123)>>x2124));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x2129 = UINT32_MAX;
	int8_t x2130 = INT8_MIN;
	int8_t x2131 = INT8_MAX;
	static uint8_t x2132 = 1U;
	static uint32_t t71 = UINT32_MAX;

	t71 = (x2129|((x2130==x2131)>>x2132));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2149 = INT8_MIN;
	uint32_t x2150 = UINT32_MAX;
	static int16_t x2151 = -1;
	uint16_t x2152 = 1U;

	t72 = (x2149|((x2150==x2151)>>x2152));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2186 = INT16_MIN;
	int8_t x2187 = -1;
	volatile uint32_t x2188 = 14U;
	static int32_t t73 = -1;

	t73 = (x2185|((x2186==x2187)>>x2188));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2226 = INT16_MIN;
	volatile int32_t x2227 = INT32_MIN;
	int32_t t74 = -35;

	t74 = (x2225|((x2226==x2227)>>x2228));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2281 = -1;
	int16_t x2282 = 13;
	int8_t x2284 = 2;
	int32_t t75 = -452;

	t75 = (x2281|((x2282==x2283)>>x2284));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2301 = 705809LL;
	volatile int32_t x2303 = INT32_MAX;
	volatile int16_t x2304 = 1;
	static volatile int64_t t76 = 3750807061828383307LL;

	t76 = (x2301|((x2302==x2303)>>x2304));

	if (t76 != 705809LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x2329 = 0LLU;
	int32_t x2330 = 14753;
	int32_t x2331 = 2;
	uint8_t x2332 = 1U;
	uint64_t t77 = 9606405629LLU;

	t77 = (x2329|((x2330==x2331)>>x2332));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2349 = 26;
	uint8_t x2350 = 0U;
	int32_t x2351 = -11;
	static uint8_t x2352 = 0U;
	int32_t t78 = 8;

	t78 = (x2349|((x2350==x2351)>>x2352));

	if (t78 != 26) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2413 = INT8_MIN;
	int16_t x2414 = -1;
	static volatile int32_t x2416 = 21;
	volatile int32_t t79 = 0;

	t79 = (x2413|((x2414==x2415)>>x2416));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2433 = INT64_MIN;
	uint64_t x2434 = 95076854799910063LLU;
	uint8_t x2436 = 3U;
	volatile int64_t t80 = INT64_MIN;

	t80 = (x2433|((x2434==x2435)>>x2436));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2441 = -1;
	int16_t x2442 = INT16_MIN;
	int8_t x2443 = -1;
	int32_t x2444 = 1;
	int32_t t81 = 1340;

	t81 = (x2441|((x2442==x2443)>>x2444));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2509 = -1;
	int32_t x2510 = INT32_MIN;
	int16_t x2511 = -7765;
	volatile int32_t t82 = 54;

	t82 = (x2509|((x2510==x2511)>>x2512));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2545 = -4110;
	int32_t x2546 = INT32_MAX;
	int16_t x2547 = -7021;
	volatile uint16_t x2548 = 2U;
	volatile int32_t t83 = -235713;

	t83 = (x2545|((x2546==x2547)>>x2548));

	if (t83 != -4110) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2549 = -2;
	volatile int32_t x2550 = 2415310;
	uint8_t x2551 = UINT8_MAX;

	t84 = (x2549|((x2550==x2551)>>x2552));

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x2581 = UINT64_MAX;
	uint8_t x2582 = 2U;
	static int32_t x2583 = INT32_MIN;
	static int8_t x2584 = 3;
	static volatile uint64_t t85 = UINT64_MAX;

	t85 = (x2581|((x2582==x2583)>>x2584));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2618 = INT32_MIN;
	int16_t x2619 = INT16_MAX;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x2617|((x2618==x2619)>>x2620));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2621 = UINT32_MAX;
	uint32_t x2622 = 1935U;
	int8_t x2623 = INT8_MAX;
	uint32_t t87 = UINT32_MAX;

	t87 = (x2621|((x2622==x2623)>>x2624));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x2665 = INT16_MAX;
	int8_t x2666 = INT8_MIN;
	int64_t x2667 = 38563668383445926LL;
	int16_t x2668 = 1;
	volatile int32_t t88 = 384275;

	t88 = (x2665|((x2666==x2667)>>x2668));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x2697 = 22065248314839293LLU;
	static volatile int16_t x2699 = INT16_MIN;
	int8_t x2700 = 1;
	uint64_t t89 = 133586150130LLU;

	t89 = (x2697|((x2698==x2699)>>x2700));

	if (t89 != 22065248314839293LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x2717 = 48020LLU;
	static int64_t x2719 = INT64_MAX;

	t90 = (x2717|((x2718==x2719)>>x2720));

	if (t90 != 48020LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x2825 = INT64_MIN;
	int8_t x2826 = INT8_MAX;

	t91 = (x2825|((x2826==x2827)>>x2828));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2845 = -1;
	uint32_t x2846 = UINT32_MAX;
	uint16_t x2847 = 4U;
	uint8_t x2848 = 0U;
	int32_t t92 = -1;

	t92 = (x2845|((x2846==x2847)>>x2848));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2914 = INT64_MIN;
	volatile uint32_t x2916 = 2U;
	volatile int32_t t93 = INT32_MIN;

	t93 = (x2913|((x2914==x2915)>>x2916));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2922 = -1;

	t94 = (x2921|((x2922==x2923)>>x2924));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2938 = INT16_MAX;
	uint16_t x2939 = UINT16_MAX;
	volatile int16_t x2940 = 7;

	t95 = (x2937|((x2938==x2939)>>x2940));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x2977 = INT16_MAX;
	static int16_t x2978 = -1;
	static int8_t x2979 = INT8_MIN;
	int32_t t96 = 928;

	t96 = (x2977|((x2978==x2979)>>x2980));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2993 = 8378;
	int32_t x2994 = -20;
	volatile int16_t x2995 = INT16_MIN;
	uint8_t x2996 = 0U;
	volatile int32_t t97 = -148;

	t97 = (x2993|((x2994==x2995)>>x2996));

	if (t97 != 8378) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3017 = -91538454;
	uint32_t x3018 = UINT32_MAX;
	volatile uint8_t x3020 = 2U;

	t98 = (x3017|((x3018==x3019)>>x3020));

	if (t98 != -91538454) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x3053 = 2711866LLU;
	static volatile int32_t x3054 = -1;
	uint32_t x3055 = 422U;
	uint32_t x3056 = 0U;

	t99 = (x3053|((x3054==x3055)>>x3056));

	if (t99 != 2711866LLU) { NG(); } else { ; }
	
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

