#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x38 = 1;
uint8_t x118 = 119U;
static volatile int32_t t2 = -1;
static int32_t t6 = 105755805;
uint64_t x501 = 4039514191230779LLU;
volatile int8_t x502 = 3;
int64_t x503 = 545016195LL;
volatile int16_t x561 = 1;
int32_t x597 = 341334;
static volatile int8_t x598 = 1;
int32_t t10 = 6589835;
volatile uint8_t x714 = 0U;
int8_t x715 = INT8_MIN;
int32_t x716 = INT32_MIN;
volatile int64_t x771 = 0LL;
static uint64_t x776 = UINT64_MAX;
uint16_t x823 = 1U;
volatile int32_t x880 = INT32_MIN;
volatile int32_t t18 = -57081135;
int16_t x929 = INT16_MAX;
uint64_t x971 = 46266944LLU;
int32_t t20 = -2911;
int32_t x1022 = 7;
int64_t x1024 = -1LL;
uint32_t x1087 = UINT32_MAX;
volatile uint32_t x1088 = UINT32_MAX;
uint64_t t25 = 1027515LLU;
int8_t x1166 = INT8_MAX;
int16_t x1167 = INT16_MIN;
uint64_t t27 = 1LLU;
static int8_t x1233 = 0;
int16_t x1236 = INT16_MAX;
int32_t t28 = 171841;
int64_t x1425 = INT64_MAX;
volatile int16_t x1427 = INT16_MAX;
int16_t x1428 = INT16_MAX;
uint64_t x1449 = UINT64_MAX;
int8_t x1635 = -1;
int64_t t35 = 18805LL;
static uint16_t x1678 = 31U;
int64_t x1712 = INT64_MIN;
volatile int32_t t37 = -3947119;
volatile uint8_t x1721 = UINT8_MAX;
int64_t x1723 = INT64_MIN;
volatile int32_t t38 = -6207;
volatile uint16_t x1791 = UINT16_MAX;
int64_t x1792 = INT64_MAX;
int64_t x1885 = 515892416636LL;
static volatile int32_t x1888 = INT32_MAX;
int8_t x1904 = INT8_MIN;
int64_t t42 = 601LL;
int32_t x1992 = -1;
int32_t t44 = 0;
int32_t x2166 = 0;
volatile int64_t x2168 = 2057638816826597869LL;
int64_t x2253 = INT64_MAX;
volatile uint8_t x2256 = 54U;
int64_t t47 = 998751587021554LL;
volatile int64_t x2335 = -1LL;
static volatile int32_t t54 = 1771814;
static uint64_t x2555 = 625LLU;
volatile uint64_t x2556 = 1LLU;
volatile int32_t t55 = -1;
uint64_t x2733 = 342149LLU;
volatile uint16_t x2734 = 1U;
int8_t x2739 = INT8_MIN;
volatile int32_t t57 = -17560675;
volatile int16_t x2976 = INT16_MIN;
uint32_t t62 = 19U;
int32_t t63 = 2;
static uint32_t t64 = 27U;
volatile int16_t x3470 = 29;
volatile uint32_t x3501 = UINT32_MAX;
int64_t x3541 = 1740361942196LL;
static int16_t x3543 = INT16_MIN;
volatile int8_t x3594 = INT8_MAX;
uint32_t x3595 = 54U;
static uint8_t x3613 = 1U;
volatile int8_t x3614 = 5;
int8_t x3639 = INT8_MIN;
uint16_t x3754 = 50U;
int64_t x3760 = -1LL;
volatile uint64_t x3770 = 15LLU;
volatile uint64_t t76 = 334100476LLU;
int8_t x3850 = 5;
int64_t x3904 = -1LL;
static int64_t x3975 = -1LL;
int32_t x4009 = 3788126;
uint16_t x4010 = 1U;
static int32_t x4173 = INT32_MAX;
volatile int32_t t82 = INT32_MAX;
uint16_t x4185 = UINT16_MAX;
static int8_t x4295 = 1;
int8_t x4296 = 8;
int16_t x4310 = 10;
static int16_t x4324 = -1;
volatile int8_t x4326 = 60;
volatile uint64_t x4328 = 12191450645802159LLU;
uint16_t x4438 = 7U;
uint8_t x4486 = 6U;
int32_t t92 = -30652;
volatile int16_t x4528 = INT16_MIN;
uint64_t t93 = 2075683948217656LLU;
static volatile uint8_t x4606 = 1U;
static volatile int64_t x4641 = 32028LL;
int64_t t95 = -13612900370536LL;
int16_t x4653 = INT16_MAX;
uint64_t x4661 = UINT64_MAX;
uint8_t x4662 = 56U;
static volatile uint64_t t97 = 110LLU;
uint16_t x4780 = UINT16_MAX;
volatile int32_t x4887 = INT32_MIN;


void f0(void) {
	volatile uint64_t x37 = UINT64_MAX;
	uint64_t x39 = 2532LLU;
	static uint16_t x40 = UINT16_MAX;
	static uint64_t t0 = UINT64_MAX;

	t0 = (x37>>(x38>>(x39<x40)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x117 = 26476359956LLU;
	int32_t x119 = -1;
	int64_t x120 = INT64_MAX;
	static uint64_t t1 = 34889969406520018LLU;

	t1 = (x117>>(x118>>(x119<x120)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x381 = 10U;
	volatile uint8_t x382 = 0U;
	uint32_t x383 = 699520U;
	volatile uint32_t x384 = 1771U;

	t2 = (x381>>(x382>>(x383<x384)));

	if (t2 != 10) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x393 = INT32_MAX;
	static uint8_t x394 = 0U;
	int8_t x395 = INT8_MAX;
	int64_t x396 = -52680LL;
	int32_t t3 = INT32_MAX;

	t3 = (x393>>(x394>>(x395<x396)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x401 = INT32_MAX;
	int16_t x402 = 3;
	uint16_t x403 = 30422U;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t4 = 428223893;

	t4 = (x401>>(x402>>(x403<x404)));

	if (t4 != 1073741823) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x425 = UINT64_MAX;
	uint8_t x426 = 19U;
	int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MIN;
	uint64_t t5 = 2044LLU;

	t5 = (x425>>(x426>>(x427<x428)));

	if (t5 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x473 = UINT16_MAX;
	uint8_t x474 = 0U;
	int32_t x475 = -706;
	volatile int16_t x476 = INT16_MAX;

	t6 = (x473>>(x474>>(x475<x476)));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x504 = INT64_MIN;
	volatile uint64_t t7 = 329851131182281LLU;

	t7 = (x501>>(x502>>(x503<x504)));

	if (t7 != 504939273903847LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x562 = 2LL;
	volatile int16_t x563 = INT16_MIN;
	static volatile uint16_t x564 = UINT16_MAX;
	static int32_t t8 = -25;

	t8 = (x561>>(x562>>(x563<x564)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x569 = 7U;
	static volatile int8_t x570 = 0;
	int16_t x571 = INT16_MIN;
	static volatile int8_t x572 = INT8_MIN;
	uint32_t t9 = 5U;

	t9 = (x569>>(x570>>(x571<x572)));

	if (t9 != 7U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x599 = 32U;
	int64_t x600 = INT64_MIN;

	t10 = (x597>>(x598>>(x599<x600)));

	if (t10 != 170667) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x637 = UINT64_MAX;
	static int8_t x638 = 34;
	int8_t x639 = -1;
	uint64_t x640 = 714881865106538LLU;
	volatile uint64_t t11 = 5776LLU;

	t11 = (x637>>(x638>>(x639<x640)));

	if (t11 != 1073741823LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x653 = UINT16_MAX;
	uint16_t x654 = 0U;
	uint32_t x655 = 1U;
	volatile int8_t x656 = -12;
	int32_t t12 = 827843;

	t12 = (x653>>(x654>>(x655<x656)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x713 = 21U;
	static int32_t t13 = 1;

	t13 = (x713>>(x714>>(x715<x716)));

	if (t13 != 21) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x769 = 2373556185572954LL;
	static int16_t x770 = 3;
	int32_t x772 = -348617;
	volatile int64_t t14 = 9260417259LL;

	t14 = (x769>>(x770>>(x771<x772)));

	if (t14 != 296694523196619LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x773 = UINT32_MAX;
	static int64_t x774 = 0LL;
	uint16_t x775 = 3U;
	static uint32_t t15 = UINT32_MAX;

	t15 = (x773>>(x774>>(x775<x776)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x793 = UINT64_MAX;
	volatile uint16_t x794 = 12U;
	int8_t x795 = -3;
	static uint32_t x796 = UINT32_MAX;
	volatile uint64_t t16 = 442475103510LLU;

	t16 = (x793>>(x794>>(x795<x796)));

	if (t16 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x821 = 15813U;
	static int16_t x822 = 15;
	int8_t x824 = 1;
	int32_t t17 = -1;

	t17 = (x821>>(x822>>(x823<x824)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x877 = 440522;
	static uint8_t x878 = 22U;
	volatile uint64_t x879 = 370LLU;

	t18 = (x877>>(x878>>(x879<x880)));

	if (t18 != 215) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x930 = 30U;
	volatile int16_t x931 = INT16_MIN;
	volatile int16_t x932 = INT16_MIN;
	int32_t t19 = -139830062;

	t19 = (x929>>(x930>>(x931<x932)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x969 = UINT8_MAX;
	uint8_t x970 = 16U;
	int64_t x972 = INT64_MIN;

	t20 = (x969>>(x970>>(x971<x972)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x985 = UINT64_MAX;
	static int16_t x986 = 3;
	static uint64_t x987 = 7231LLU;
	int16_t x988 = INT16_MAX;
	volatile uint64_t t21 = 396LLU;

	t21 = (x985>>(x986>>(x987<x988)));

	if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1021 = UINT32_MAX;
	int8_t x1023 = -4;
	uint32_t t22 = 2074512027U;

	t22 = (x1021>>(x1022>>(x1023<x1024)));

	if (t22 != 536870911U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1029 = 2U;
	volatile int8_t x1030 = 0;
	uint8_t x1031 = 6U;
	volatile int64_t x1032 = INT64_MAX;
	uint32_t t23 = 3U;

	t23 = (x1029>>(x1030>>(x1031<x1032)));

	if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1085 = 10;
	static uint8_t x1086 = 16U;
	int32_t t24 = 108104;

	t24 = (x1085>>(x1086>>(x1087<x1088)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1097 = 5753454955772819LLU;
	uint8_t x1098 = 19U;
	volatile int64_t x1099 = INT64_MIN;
	int8_t x1100 = 52;

	t25 = (x1097>>(x1098>>(x1099<x1100)));

	if (t25 != 11237216710493LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1157 = UINT32_MAX;
	volatile uint8_t x1158 = 3U;
	uint16_t x1159 = 13506U;
	int32_t x1160 = INT32_MIN;
	volatile uint32_t t26 = 2027872506U;

	t26 = (x1157>>(x1158>>(x1159<x1160)));

	if (t26 != 536870911U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1165 = UINT64_MAX;
	uint8_t x1168 = UINT8_MAX;

	t27 = (x1165>>(x1166>>(x1167<x1168)));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1234 = 1U;
	int8_t x1235 = INT8_MIN;

	t28 = (x1233>>(x1234>>(x1235<x1236)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1261 = 172897U;
	uint8_t x1262 = 23U;
	int8_t x1263 = -1;
	volatile int8_t x1264 = INT8_MIN;
	volatile uint32_t t29 = 52U;

	t29 = (x1261>>(x1262>>(x1263<x1264)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1353 = 53;
	int8_t x1354 = 23;
	int8_t x1355 = INT8_MIN;
	static int32_t x1356 = INT32_MIN;
	volatile int32_t t30 = 13;

	t30 = (x1353>>(x1354>>(x1355<x1356)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1397 = 200031330U;
	int8_t x1398 = 3;
	int32_t x1399 = 585656;
	static uint16_t x1400 = UINT16_MAX;
	volatile uint32_t t31 = 1336U;

	t31 = (x1397>>(x1398>>(x1399<x1400)));

	if (t31 != 25003916U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1426 = 10U;
	int64_t t32 = -34085120LL;

	t32 = (x1425>>(x1426>>(x1427<x1428)));

	if (t32 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1450 = 14U;
	uint8_t x1451 = 42U;
	int32_t x1452 = INT32_MIN;
	volatile uint64_t t33 = 80353443264559889LLU;

	t33 = (x1449>>(x1450>>(x1451<x1452)));

	if (t33 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x1493 = 0U;
	int16_t x1494 = 5;
	int16_t x1495 = -5967;
	uint16_t x1496 = 152U;
	int32_t t34 = 239739885;

	t34 = (x1493>>(x1494>>(x1495<x1496)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x1633 = 5578907541200152LL;
	uint8_t x1634 = 13U;
	int64_t x1636 = INT64_MIN;

	t35 = (x1633>>(x1634>>(x1635<x1636)));

	if (t35 != 681018986962LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1677 = INT64_MAX;
	int8_t x1679 = -6;
	int16_t x1680 = INT16_MIN;
	volatile int64_t t36 = -754742879191104314LL;

	t36 = (x1677>>(x1678>>(x1679<x1680)));

	if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1709 = 3;
	volatile int16_t x1710 = 1;
	int32_t x1711 = -1514;

	t37 = (x1709>>(x1710>>(x1711<x1712)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1722 = 1U;
	int64_t x1724 = 128766232367LL;

	t38 = (x1721>>(x1722>>(x1723<x1724)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1789 = INT64_MAX;
	uint8_t x1790 = 1U;
	static int64_t t39 = INT64_MAX;

	t39 = (x1789>>(x1790>>(x1791<x1792)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1886 = 3;
	uint64_t x1887 = 2LLU;
	int64_t t40 = 388526116LL;

	t40 = (x1885>>(x1886>>(x1887<x1888)));

	if (t40 != 257946208318LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1901 = 44;
	int16_t x1902 = 0;
	int64_t x1903 = 89551LL;
	int32_t t41 = 55;

	t41 = (x1901>>(x1902>>(x1903<x1904)));

	if (t41 != 44) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1905 = 15640LL;
	int8_t x1906 = 0;
	uint16_t x1907 = 2164U;
	uint64_t x1908 = 12703359506LLU;

	t42 = (x1905>>(x1906>>(x1907<x1908)));

	if (t42 != 15640LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1917 = 1204569U;
	uint32_t x1918 = 6U;
	int16_t x1919 = 465;
	int8_t x1920 = INT8_MIN;
	volatile uint32_t t43 = 4171U;

	t43 = (x1917>>(x1918>>(x1919<x1920)));

	if (t43 != 18821U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1989 = UINT8_MAX;
	static volatile int8_t x1990 = 0;
	uint16_t x1991 = UINT16_MAX;

	t44 = (x1989>>(x1990>>(x1991<x1992)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x2033 = INT64_MAX;
	uint16_t x2034 = 7U;
	uint32_t x2035 = UINT32_MAX;
	int64_t x2036 = INT64_MAX;
	volatile int64_t t45 = -894508LL;

	t45 = (x2033>>(x2034>>(x2035<x2036)));

	if (t45 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2165 = 310539U;
	uint8_t x2167 = UINT8_MAX;
	volatile uint32_t t46 = 22550541U;

	t46 = (x2165>>(x2166>>(x2167<x2168)));

	if (t46 != 310539U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2254 = 30;
	int32_t x2255 = INT32_MIN;

	t47 = (x2253>>(x2254>>(x2255<x2256)));

	if (t47 != 281474976710655LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2305 = INT64_MAX;
	uint8_t x2306 = 6U;
	int32_t x2307 = INT32_MAX;
	int16_t x2308 = INT16_MAX;
	int64_t t48 = 1433LL;

	t48 = (x2305>>(x2306>>(x2307<x2308)));

	if (t48 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2333 = 10;
	volatile uint16_t x2334 = 1U;
	int64_t x2336 = INT64_MIN;
	static volatile int32_t t49 = -293877;

	t49 = (x2333>>(x2334>>(x2335<x2336)));

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2377 = 112197899LLU;
	volatile int8_t x2378 = 0;
	volatile int16_t x2379 = INT16_MAX;
	static volatile int32_t x2380 = -1;
	uint64_t t50 = 4551565636397LLU;

	t50 = (x2377>>(x2378>>(x2379<x2380)));

	if (t50 != 112197899LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2437 = INT32_MAX;
	volatile uint8_t x2438 = 3U;
	static volatile int16_t x2439 = INT16_MAX;
	int64_t x2440 = INT64_MIN;
	static int32_t t51 = -14;

	t51 = (x2437>>(x2438>>(x2439<x2440)));

	if (t51 != 268435455) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2465 = 14;
	volatile uint16_t x2466 = 6U;
	int16_t x2467 = INT16_MIN;
	volatile uint64_t x2468 = 1941171523121975957LLU;
	static int32_t t52 = 485898716;

	t52 = (x2465>>(x2466>>(x2467<x2468)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2481 = INT8_MAX;
	volatile uint16_t x2482 = 54U;
	static int8_t x2483 = INT8_MIN;
	uint8_t x2484 = 3U;
	static volatile int32_t t53 = 1023220;

	t53 = (x2481>>(x2482>>(x2483<x2484)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2489 = 473371603;
	volatile uint16_t x2490 = 3U;
	volatile uint64_t x2491 = 6710LLU;
	int32_t x2492 = 3;

	t54 = (x2489>>(x2490>>(x2491<x2492)));

	if (t54 != 59171450) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x2553 = UINT8_MAX;
	uint16_t x2554 = 3U;

	t55 = (x2553>>(x2554>>(x2555<x2556)));

	if (t55 != 31) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2735 = INT16_MAX;
	int64_t x2736 = -1LL;
	uint64_t t56 = 485517287LLU;

	t56 = (x2733>>(x2734>>(x2735<x2736)));

	if (t56 != 171074LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2737 = 2261;
	static int8_t x2738 = 3;
	static volatile int64_t x2740 = -1LL;

	t57 = (x2737>>(x2738>>(x2739<x2740)));

	if (t57 != 1130) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2853 = 3747;
	int8_t x2854 = 54;
	uint8_t x2855 = 0U;
	volatile int16_t x2856 = 21;
	volatile int32_t t58 = -332791382;

	t58 = (x2853>>(x2854>>(x2855<x2856)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2973 = 6;
	uint8_t x2974 = 0U;
	int64_t x2975 = -134106318192870689LL;
	int32_t t59 = -154;

	t59 = (x2973>>(x2974>>(x2975<x2976)));

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3149 = 15U;
	uint8_t x3150 = 1U;
	volatile int64_t x3151 = INT64_MAX;
	static volatile int32_t x3152 = 1;
	volatile uint32_t t60 = 4410U;

	t60 = (x3149>>(x3150>>(x3151<x3152)));

	if (t60 != 7U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3237 = 14179756LLU;
	static volatile int8_t x3238 = INT8_MAX;
	int32_t x3239 = INT32_MIN;
	volatile uint64_t x3240 = UINT64_MAX;
	static volatile uint64_t t61 = 1055945LLU;

	t61 = (x3237>>(x3238>>(x3239<x3240)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x3397 = 120711466U;
	int64_t x3398 = 28LL;
	static volatile uint64_t x3399 = 126910458LLU;
	uint64_t x3400 = UINT64_MAX;

	t62 = (x3397>>(x3398>>(x3399<x3400)));

	if (t62 != 7367U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3449 = 8557736;
	uint8_t x3450 = 30U;
	int32_t x3451 = 27713;
	static int8_t x3452 = INT8_MIN;

	t63 = (x3449>>(x3450>>(x3451<x3452)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x3453 = UINT32_MAX;
	volatile uint8_t x3454 = 43U;
	static int16_t x3455 = INT16_MIN;
	volatile uint8_t x3456 = 11U;

	t64 = (x3453>>(x3454>>(x3455<x3456)));

	if (t64 != 2047U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x3469 = INT32_MAX;
	int16_t x3471 = -24;
	volatile uint8_t x3472 = 4U;
	int32_t t65 = -69979;

	t65 = (x3469>>(x3470>>(x3471<x3472)));

	if (t65 != 131071) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3477 = 40;
	int16_t x3478 = 2;
	int8_t x3479 = INT8_MAX;
	int64_t x3480 = INT64_MIN;
	static volatile int32_t t66 = -48450;

	t66 = (x3477>>(x3478>>(x3479<x3480)));

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x3502 = 23U;
	int32_t x3503 = INT32_MIN;
	uint32_t x3504 = UINT32_MAX;
	uint32_t t67 = 75640817U;

	t67 = (x3501>>(x3502>>(x3503<x3504)));

	if (t67 != 2097151U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3542 = 19U;
	int64_t x3544 = 13328866023879LL;
	volatile int64_t t68 = -28476098142LL;

	t68 = (x3541>>(x3542>>(x3543<x3544)));

	if (t68 != 3399144418LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3593 = 220211337894LLU;
	int16_t x3596 = INT16_MIN;
	volatile uint64_t t69 = 847139LLU;

	t69 = (x3593>>(x3594>>(x3595<x3596)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3615 = 66U;
	uint8_t x3616 = 62U;
	int32_t t70 = 7;

	t70 = (x3613>>(x3614>>(x3615<x3616)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3637 = 28925U;
	int8_t x3638 = 3;
	int64_t x3640 = -6936210310111LL;
	volatile uint32_t t71 = 5U;

	t71 = (x3637>>(x3638>>(x3639<x3640)));

	if (t71 != 3615U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3749 = 113U;
	uint8_t x3750 = 1U;
	uint8_t x3751 = 10U;
	int64_t x3752 = INT64_MIN;
	int32_t t72 = 7849511;

	t72 = (x3749>>(x3750>>(x3751<x3752)));

	if (t72 != 56) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3753 = 31197082;
	volatile int16_t x3755 = -1;
	uint16_t x3756 = 29947U;
	static int32_t t73 = 19;

	t73 = (x3753>>(x3754>>(x3755<x3756)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x3757 = 22U;
	uint8_t x3758 = 1U;
	int32_t x3759 = -1;
	volatile int32_t t74 = -1350393;

	t74 = (x3757>>(x3758>>(x3759<x3760)));

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3769 = 40U;
	int64_t x3771 = -229555210286181544LL;
	static int16_t x3772 = INT16_MIN;
	static int32_t t75 = 71370303;

	t75 = (x3769>>(x3770>>(x3771<x3772)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x3821 = UINT64_MAX;
	uint8_t x3822 = 2U;
	int16_t x3823 = 377;
	uint8_t x3824 = 2U;

	t76 = (x3821>>(x3822>>(x3823<x3824)));

	if (t76 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3849 = UINT8_MAX;
	static int8_t x3851 = -12;
	int64_t x3852 = INT64_MIN;
	int32_t t77 = -1;

	t77 = (x3849>>(x3850>>(x3851<x3852)));

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3901 = INT32_MAX;
	volatile uint32_t x3902 = 7U;
	static int8_t x3903 = -1;
	volatile int32_t t78 = 43;

	t78 = (x3901>>(x3902>>(x3903<x3904)));

	if (t78 != 16777215) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3973 = INT16_MAX;
	int16_t x3974 = 9;
	int64_t x3976 = INT64_MIN;
	int32_t t79 = -25568456;

	t79 = (x3973>>(x3974>>(x3975<x3976)));

	if (t79 != 63) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4011 = INT64_MIN;
	int8_t x4012 = -3;
	volatile int32_t t80 = 5568964;

	t80 = (x4009>>(x4010>>(x4011<x4012)));

	if (t80 != 3788126) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x4061 = UINT16_MAX;
	int16_t x4062 = 0;
	static int16_t x4063 = INT16_MAX;
	static uint8_t x4064 = 11U;
	int32_t t81 = 38738;

	t81 = (x4061>>(x4062>>(x4063<x4064)));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4174 = 0;
	static int32_t x4175 = INT32_MAX;
	int32_t x4176 = INT32_MAX;

	t82 = (x4173>>(x4174>>(x4175<x4176)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4186 = 0U;
	uint32_t x4187 = 326U;
	static uint32_t x4188 = 5U;
	static volatile int32_t t83 = -206;

	t83 = (x4185>>(x4186>>(x4187<x4188)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4249 = 1;
	static uint8_t x4250 = 27U;
	int16_t x4251 = 0;
	static int64_t x4252 = -1LL;
	volatile int32_t t84 = -107770;

	t84 = (x4249>>(x4250>>(x4251<x4252)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4293 = 98U;
	int8_t x4294 = 0;
	int32_t t85 = 1297;

	t85 = (x4293>>(x4294>>(x4295<x4296)));

	if (t85 != 98) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x4309 = 24609410776327LL;
	uint16_t x4311 = UINT16_MAX;
	int64_t x4312 = INT64_MIN;
	int64_t t86 = 416668057471LL;

	t86 = (x4309>>(x4310>>(x4311<x4312)));

	if (t86 != 24032627711LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4321 = 142LLU;
	uint8_t x4322 = 4U;
	volatile int8_t x4323 = -1;
	uint64_t t87 = 35087174860533LLU;

	t87 = (x4321>>(x4322>>(x4323<x4324)));

	if (t87 != 8LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4325 = INT16_MAX;
	int32_t x4327 = 62329565;
	volatile int32_t t88 = -15;

	t88 = (x4325>>(x4326>>(x4327<x4328)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4357 = 48;
	static volatile uint8_t x4358 = 55U;
	int8_t x4359 = -4;
	volatile int32_t x4360 = 939014;
	int32_t t89 = 1960058;

	t89 = (x4357>>(x4358>>(x4359<x4360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4437 = 4LLU;
	int32_t x4439 = -142;
	volatile int8_t x4440 = -1;
	volatile uint64_t t90 = 3418908492151811983LLU;

	t90 = (x4437>>(x4438>>(x4439<x4440)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4477 = INT32_MAX;
	uint8_t x4478 = 30U;
	static uint8_t x4479 = 54U;
	static int8_t x4480 = -1;
	static int32_t t91 = -1;

	t91 = (x4477>>(x4478>>(x4479<x4480)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4485 = UINT16_MAX;
	uint32_t x4487 = 227U;
	int64_t x4488 = -1LL;

	t92 = (x4485>>(x4486>>(x4487<x4488)));

	if (t92 != 1023) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x4525 = 2958LLU;
	uint64_t x4526 = 0LLU;
	int64_t x4527 = 2778151989978765LL;

	t93 = (x4525>>(x4526>>(x4527<x4528)));

	if (t93 != 2958LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4605 = UINT16_MAX;
	int64_t x4607 = -1LL;
	int16_t x4608 = INT16_MIN;
	volatile int32_t t94 = -2473167;

	t94 = (x4605>>(x4606>>(x4607<x4608)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4642 = 51LLU;
	int8_t x4643 = -1;
	int64_t x4644 = -106130LL;

	t95 = (x4641>>(x4642>>(x4643<x4644)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4654 = 57U;
	int16_t x4655 = INT16_MAX;
	uint64_t x4656 = 82495113718LLU;
	int32_t t96 = -20;

	t96 = (x4653>>(x4654>>(x4655<x4656)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4663 = -1;
	int64_t x4664 = -13901LL;

	t97 = (x4661>>(x4662>>(x4663<x4664)));

	if (t97 != 255LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4777 = 12U;
	int16_t x4778 = 52;
	int16_t x4779 = -1;
	int32_t t98 = 6650;

	t98 = (x4777>>(x4778>>(x4779<x4780)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4885 = UINT32_MAX;
	static volatile int16_t x4886 = 0;
	uint64_t x4888 = 196839912377LLU;
	static uint32_t t99 = UINT32_MAX;

	t99 = (x4885>>(x4886>>(x4887<x4888)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

