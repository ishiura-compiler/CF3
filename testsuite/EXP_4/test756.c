#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -4;
int32_t t0 = -6811;
static int8_t x25 = INT8_MAX;
volatile uint16_t x41 = 0U;
int8_t x44 = 3;
uint64_t x77 = 36765302685062007LLU;
uint64_t t3 = 605851874790432282LLU;
uint8_t x118 = 10U;
int32_t t6 = 0;
int32_t x173 = 3;
int32_t x176 = INT32_MIN;
static int8_t x180 = -1;
static int16_t x189 = INT16_MIN;
volatile uint64_t x190 = UINT64_MAX;
uint64_t t10 = 2861332620472802385LLU;
uint64_t t11 = 1870642728LLU;
int64_t x230 = INT64_MAX;
int64_t x349 = -663977040177262LL;
uint32_t x375 = 279568U;
uint64_t x377 = 14LLU;
uint16_t x383 = 25U;
volatile int16_t x395 = INT16_MIN;
volatile int8_t x396 = -1;
volatile int8_t x400 = 7;
volatile int16_t x435 = INT16_MIN;
volatile int64_t x492 = -1LL;
static int64_t t24 = 885376032LL;
int8_t x517 = -1;
uint16_t x534 = 14U;
int16_t x535 = -5720;
int8_t x536 = 1;
uint8_t x574 = 7U;
static uint32_t t30 = 16U;
volatile uint16_t x633 = 15706U;
volatile uint64_t x634 = 649LLU;
int32_t x639 = INT32_MIN;
int16_t x640 = INT16_MIN;
uint16_t x649 = 202U;
int64_t x650 = INT64_MAX;
int64_t x665 = -793LL;
int32_t x666 = 0;
int16_t x680 = INT16_MIN;
uint64_t x681 = 76683501505347287LLU;
uint8_t x682 = UINT8_MAX;
int64_t x683 = INT64_MAX;
volatile int64_t t39 = -2003777662LL;
int16_t x776 = 44;
uint32_t x778 = 36832481U;
volatile int64_t t42 = 1563106529250LL;
int32_t x837 = 0;
int32_t x867 = -1;
volatile int8_t x873 = INT8_MIN;
volatile int16_t x874 = INT16_MAX;
int8_t x892 = INT8_MIN;
uint16_t x902 = UINT16_MAX;
int32_t x904 = -1;
int8_t x919 = INT8_MIN;
static uint32_t x967 = UINT32_MAX;
volatile int32_t t58 = -4166;
int16_t x1009 = INT16_MAX;
uint16_t x1046 = 114U;
int8_t x1047 = -1;
static uint16_t x1111 = UINT16_MAX;
static uint32_t x1117 = UINT32_MAX;
volatile int64_t t68 = -8067398LL;
static uint32_t x1138 = UINT32_MAX;
uint32_t t70 = 0U;
uint8_t x1158 = 63U;
uint16_t x1159 = UINT16_MAX;
volatile int32_t t73 = -8037;
volatile uint32_t x1190 = 6105041U;
int16_t x1198 = 4;
int64_t x1281 = -1LL;
int32_t x1284 = -1;
uint64_t x1349 = UINT64_MAX;
int64_t x1351 = INT64_MIN;
int16_t x1364 = INT16_MIN;
uint64_t t82 = 1973653158LLU;
volatile int64_t x1403 = INT64_MIN;
uint64_t x1424 = 8LLU;
int64_t t85 = -7061634438016274LL;
uint8_t x1496 = 3U;
volatile int16_t x1516 = INT16_MIN;
static uint16_t x1543 = UINT16_MAX;
int8_t x1547 = 3;
int16_t x1586 = INT16_MAX;
int32_t x1587 = INT32_MIN;
int32_t x1588 = -1;
uint8_t x1597 = UINT8_MAX;
int8_t x1599 = INT8_MAX;
uint16_t x1614 = UINT16_MAX;
uint64_t t95 = 3166297732LLU;
uint32_t x1695 = 107404U;
volatile uint32_t t96 = 12261U;
int16_t x1779 = INT16_MIN;


void f0(void) {
	int8_t x1 = -1;
	static uint16_t x2 = UINT16_MAX;
	static int32_t x4 = -1;

	t0 = (x1-(x2>>(x3%x4)));

	if (t0 != -65536) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x26 = 7480071LL;
	volatile int16_t x27 = -1;
	static int8_t x28 = -1;
	static int64_t t1 = 197203826LL;

	t1 = (x25-(x26>>(x27%x28)));

	if (t1 != -7479944LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x42 = 1635549047LL;
	int32_t x43 = INT32_MAX;
	static volatile int64_t t2 = -17LL;

	t2 = (x41-(x42>>(x43%x44)));

	if (t2 != -817774523LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x78 = 0;
	uint8_t x79 = 5U;
	int16_t x80 = INT16_MIN;

	t3 = (x77-(x78>>(x79%x80)));

	if (t3 != 36765302685062007LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x81 = INT8_MIN;
	volatile int32_t x82 = 11362981;
	int64_t x83 = -61978558LL;
	int64_t x84 = -1LL;
	volatile int32_t t4 = -21;

	t4 = (x81-(x82>>(x83%x84)));

	if (t4 != -11363109) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x109 = 1202328483LL;
	uint32_t x110 = 13U;
	uint32_t x111 = 9U;
	uint8_t x112 = UINT8_MAX;
	int64_t t5 = -17526LL;

	t5 = (x109-(x110>>(x111%x112)));

	if (t5 != 1202328483LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x117 = INT8_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;

	t6 = (x117-(x118>>(x119%x120)));

	if (t6 != 117) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x121 = 122440806666817885LLU;
	uint16_t x122 = 7U;
	volatile int8_t x123 = -41;
	volatile int16_t x124 = -1;
	volatile uint64_t t7 = 32156LLU;

	t7 = (x121-(x122>>(x123%x124)));

	if (t7 != 122440806666817878LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x174 = 1384U;
	int16_t x175 = 11;
	volatile uint32_t t8 = 14905U;

	t8 = (x173-(x174>>(x175%x176)));

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x177 = 31U;
	uint32_t x178 = 109303U;
	int32_t x179 = INT32_MIN;
	volatile uint32_t t9 = 7977126U;

	t9 = (x177-(x178>>(x179%x180)));

	if (t9 != 4294858024U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x191 = UINT16_MAX;
	volatile int16_t x192 = INT16_MAX;

	t10 = (x189-(x190>>(x191%x192)));

	if (t10 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x197 = UINT64_MAX;
	int16_t x198 = INT16_MAX;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;

	t11 = (x197-(x198>>(x199%x200)));

	if (t11 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x229 = INT32_MIN;
	int32_t x231 = 56;
	int16_t x232 = -41;
	int64_t t12 = 46491848887LL;

	t12 = (x229-(x230>>(x231%x232)));

	if (t12 != -281477124194303LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x305 = INT64_MAX;
	static int16_t x306 = 6;
	static int16_t x307 = -3;
	volatile int32_t x308 = -1;
	int64_t t13 = -244185065178066664LL;

	t13 = (x305-(x306>>(x307%x308)));

	if (t13 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x350 = 230LLU;
	static uint8_t x351 = UINT8_MAX;
	int32_t x352 = -1;
	uint64_t t14 = 21LLU;

	t14 = (x349-(x350>>(x351%x352)));

	if (t14 != 18446080096669374124LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x373 = -1;
	static uint16_t x374 = UINT16_MAX;
	static int64_t x376 = -15LL;
	volatile int32_t t15 = 8193333;

	t15 = (x373-(x374>>(x375%x376)));

	if (t15 != -8) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x378 = 6183930LLU;
	int64_t x379 = -2893725366LL;
	uint64_t x380 = 236LLU;
	uint64_t t16 = 756675072LLU;

	t16 = (x377-(x378>>(x379%x380)));

	if (t16 != 14LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x381 = 91240952649865LL;
	uint16_t x382 = UINT16_MAX;
	int8_t x384 = -1;
	static volatile int64_t t17 = -16988LL;

	t17 = (x381-(x382>>(x383%x384)));

	if (t17 != 91240952584330LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = 19;
	static volatile int32_t t18 = -337;

	t18 = (x393-(x394>>(x395%x396)));

	if (t18 != 65516) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x397 = 3316629U;
	int32_t x398 = INT32_MAX;
	volatile uint16_t x399 = UINT16_MAX;
	uint32_t t19 = 2U;

	t19 = (x397-(x398>>(x399%x400)));

	if (t19 != 3224542102U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x401 = -17598500656426978LL;
	volatile uint32_t x402 = 1481434U;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;
	volatile int64_t t20 = 7122LL;

	t20 = (x401-(x402>>(x403%x404)));

	if (t20 != -17598500657908412LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x433 = 2U;
	static uint32_t x434 = UINT32_MAX;
	int16_t x436 = -1;
	volatile uint32_t t21 = 323179U;

	t21 = (x433-(x434>>(x435%x436)));

	if (t21 != 3U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x437 = INT8_MIN;
	int64_t x438 = 735176912171633426LL;
	int8_t x439 = 22;
	volatile uint32_t x440 = 5U;
	int64_t t22 = 10LL;

	t22 = (x437-(x438>>(x439%x440)));

	if (t22 != -183794228042908484LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x473 = 3757;
	static volatile uint8_t x474 = 92U;
	volatile uint16_t x475 = 24U;
	int8_t x476 = -2;
	volatile int32_t t23 = -565334;

	t23 = (x473-(x474>>(x475%x476)));

	if (t23 != 3665) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x489 = 103966782;
	int64_t x490 = INT64_MAX;
	int16_t x491 = 0;

	t24 = (x489-(x490>>(x491%x492)));

	if (t24 != -9223372036750809025LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x518 = INT64_MAX;
	static int64_t x519 = 27LL;
	volatile int64_t x520 = INT64_MIN;
	static volatile int64_t t25 = 3LL;

	t25 = (x517-(x518>>(x519%x520)));

	if (t25 != -68719476736LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x533 = -1;
	static int32_t t26 = -24556;

	t26 = (x533-(x534>>(x535%x536)));

	if (t26 != -15) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x553 = INT64_MAX;
	static int8_t x554 = INT8_MAX;
	volatile int16_t x555 = 160;
	uint8_t x556 = 36U;
	int64_t t27 = INT64_MAX;

	t27 = (x553-(x554>>(x555%x556)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x557 = 1;
	static uint32_t x558 = 7295U;
	static int64_t x559 = 1LL;
	volatile int64_t x560 = 411761372283LL;
	volatile uint32_t t28 = 212U;

	t28 = (x557-(x558>>(x559%x560)));

	if (t28 != 4294963650U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x573 = UINT64_MAX;
	volatile uint16_t x575 = 10U;
	static int32_t x576 = INT32_MIN;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x573-(x574>>(x575%x576)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x577 = UINT32_MAX;
	static uint32_t x578 = 210624932U;
	int8_t x579 = 0;
	static uint64_t x580 = UINT64_MAX;

	t30 = (x577-(x578>>(x579%x580)));

	if (t30 != 4084342363U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x635 = 49;
	static volatile int32_t x636 = -1989;
	static uint64_t t31 = 423206247040LLU;

	t31 = (x633-(x634>>(x635%x636)));

	if (t31 != 15706LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x637 = INT32_MAX;
	volatile int32_t x638 = 1;
	volatile int32_t t32 = -166285;

	t32 = (x637-(x638>>(x639%x640)));

	if (t32 != 2147483646) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x651 = 4009U;
	volatile int16_t x652 = 182;
	volatile int64_t t33 = -54016830604082LL;

	t33 = (x649-(x650>>(x651%x652)));

	if (t33 != -288230376151711541LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x667 = INT16_MAX;
	static int64_t x668 = -1LL;
	int64_t t34 = -1533282262838LL;

	t34 = (x665-(x666>>(x667%x668)));

	if (t34 != -793LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x677 = 7422;
	int16_t x678 = 14;
	int64_t x679 = INT64_MIN;
	volatile int32_t t35 = -1939;

	t35 = (x677-(x678>>(x679%x680)));

	if (t35 != 7408) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x684 = -1;
	static volatile uint64_t t36 = 5628237965840076LLU;

	t36 = (x681-(x682>>(x683%x684)));

	if (t36 != 76683501505347032LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x685 = 47221139173734574LLU;
	int16_t x686 = 21;
	int8_t x687 = INT8_MIN;
	int32_t x688 = -1;
	static volatile uint64_t t37 = 15520345LLU;

	t37 = (x685-(x686>>(x687%x688)));

	if (t37 != 47221139173734553LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x693 = INT64_MIN;
	static int8_t x694 = 1;
	int16_t x695 = INT16_MIN;
	uint32_t x696 = 9U;
	int64_t t38 = INT64_MIN;

	t38 = (x693-(x694>>(x695%x696)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x697 = 3216256085LL;
	static int16_t x698 = 567;
	uint32_t x699 = UINT32_MAX;
	int16_t x700 = -29;

	t39 = (x697-(x698>>(x699%x700)));

	if (t39 != 3216256085LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x721 = 1861559907LL;
	volatile uint8_t x722 = 27U;
	int16_t x723 = 3;
	static uint8_t x724 = 66U;
	volatile int64_t t40 = -33LL;

	t40 = (x721-(x722>>(x723%x724)));

	if (t40 != 1861559904LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x773 = -1;
	uint64_t x774 = 44471LLU;
	uint64_t x775 = UINT64_MAX;
	static volatile uint64_t t41 = 7678LLU;

	t41 = (x773-(x774>>(x775%x776)));

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x777 = -1LL;
	volatile int8_t x779 = 6;
	uint8_t x780 = 110U;

	t42 = (x777-(x778>>(x779%x780)));

	if (t42 != -575508LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x781 = UINT64_MAX;
	uint32_t x782 = 1770799010U;
	uint64_t x783 = UINT64_MAX;
	int32_t x784 = -1;
	uint64_t t43 = 2767629LLU;

	t43 = (x781-(x782>>(x783%x784)));

	if (t43 != 18446744071938752605LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x789 = INT32_MAX;
	int8_t x790 = INT8_MAX;
	uint16_t x791 = 8547U;
	static int8_t x792 = 27;
	int32_t t44 = INT32_MAX;

	t44 = (x789-(x790>>(x791%x792)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x825 = 134690853U;
	volatile uint8_t x826 = 0U;
	volatile int32_t x827 = INT32_MIN;
	uint8_t x828 = 2U;
	static uint32_t t45 = 1642131665U;

	t45 = (x825-(x826>>(x827%x828)));

	if (t45 != 134690853U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x838 = 0;
	uint8_t x839 = 14U;
	int16_t x840 = INT16_MAX;
	int32_t t46 = -17;

	t46 = (x837-(x838>>(x839%x840)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x865 = UINT8_MAX;
	uint64_t x866 = 1LLU;
	static uint64_t x868 = 3LLU;
	volatile uint64_t t47 = 80195LLU;

	t47 = (x865-(x866>>(x867%x868)));

	if (t47 != 254LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x875 = 25;
	int32_t x876 = INT32_MIN;
	int32_t t48 = 20147;

	t48 = (x873-(x874>>(x875%x876)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x877 = INT16_MAX;
	static uint32_t x878 = UINT32_MAX;
	int8_t x879 = INT8_MIN;
	volatile int8_t x880 = INT8_MIN;
	volatile uint32_t t49 = 83256U;

	t49 = (x877-(x878>>(x879%x880)));

	if (t49 != 32768U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x889 = INT16_MIN;
	int16_t x890 = 222;
	int32_t x891 = INT32_MIN;
	volatile int32_t t50 = -831;

	t50 = (x889-(x890>>(x891%x892)));

	if (t50 != -32990) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x901 = INT8_MIN;
	uint16_t x903 = 4U;
	static int32_t t51 = 1486;

	t51 = (x901-(x902>>(x903%x904)));

	if (t51 != -65663) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x909 = 36U;
	int16_t x910 = 1;
	static int64_t x911 = 301LL;
	int8_t x912 = -1;
	int32_t t52 = -182666;

	t52 = (x909-(x910>>(x911%x912)));

	if (t52 != 35) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x913 = INT16_MAX;
	uint32_t x914 = 468U;
	volatile int16_t x915 = INT16_MIN;
	int64_t x916 = -1LL;
	volatile uint32_t t53 = 4702289U;

	t53 = (x913-(x914>>(x915%x916)));

	if (t53 != 32299U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x917 = 45U;
	volatile int8_t x918 = 1;
	int32_t x920 = -1;
	volatile int32_t t54 = -43358349;

	t54 = (x917-(x918>>(x919%x920)));

	if (t54 != 44) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x937 = -577;
	int16_t x938 = 3165;
	volatile int32_t x939 = INT32_MAX;
	int32_t x940 = INT32_MAX;
	volatile int32_t t55 = 6347;

	t55 = (x937-(x938>>(x939%x940)));

	if (t55 != -3742) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x941 = INT16_MIN;
	uint64_t x942 = UINT64_MAX;
	volatile int8_t x943 = -1;
	volatile int16_t x944 = 1;
	volatile uint64_t t56 = 59LLU;

	t56 = (x941-(x942>>(x943%x944)));

	if (t56 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x957 = -15459;
	int8_t x958 = INT8_MAX;
	uint8_t x959 = 13U;
	static int32_t x960 = INT32_MIN;
	int32_t t57 = -2112;

	t57 = (x957-(x958>>(x959%x960)));

	if (t57 != -15459) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x965 = 38064898;
	volatile uint8_t x966 = 12U;
	int16_t x968 = -1;

	t58 = (x965-(x966>>(x967%x968)));

	if (t58 != 38064886) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x993 = INT16_MIN;
	volatile uint64_t x994 = 5622LLU;
	volatile int32_t x995 = INT32_MIN;
	int32_t x996 = INT32_MIN;
	uint64_t t59 = 405LLU;

	t59 = (x993-(x994>>(x995%x996)));

	if (t59 != 18446744073709513226LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1005 = INT64_MAX;
	uint64_t x1006 = UINT64_MAX;
	int8_t x1007 = 0;
	int32_t x1008 = 4868324;
	volatile uint64_t t60 = 1176987988534766423LLU;

	t60 = (x1005-(x1006>>(x1007%x1008)));

	if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1010 = INT32_MAX;
	int8_t x1011 = INT8_MIN;
	int8_t x1012 = -1;
	int32_t t61 = 458;

	t61 = (x1009-(x1010>>(x1011%x1012)));

	if (t61 != -2147450880) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1029 = UINT8_MAX;
	static uint16_t x1030 = 1756U;
	int8_t x1031 = 31;
	int16_t x1032 = -16230;
	volatile int32_t t62 = 3;

	t62 = (x1029-(x1030>>(x1031%x1032)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x1045 = UINT8_MAX;
	int8_t x1048 = -1;
	volatile int32_t t63 = -226;

	t63 = (x1045-(x1046>>(x1047%x1048)));

	if (t63 != 141) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1061 = 1U;
	static uint8_t x1062 = 12U;
	static uint16_t x1063 = UINT16_MAX;
	volatile uint16_t x1064 = 1U;
	int32_t t64 = 984434;

	t64 = (x1061-(x1062>>(x1063%x1064)));

	if (t64 != -11) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1073 = INT16_MIN;
	volatile uint8_t x1074 = 27U;
	int8_t x1075 = -1;
	int8_t x1076 = 1;
	volatile int32_t t65 = 1057425;

	t65 = (x1073-(x1074>>(x1075%x1076)));

	if (t65 != -32795) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1109 = 4502074912950401LL;
	volatile uint16_t x1110 = 1U;
	int16_t x1112 = 1;
	int64_t t66 = -4148540395644LL;

	t66 = (x1109-(x1110>>(x1111%x1112)));

	if (t66 != 4502074912950400LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1118 = INT32_MAX;
	static volatile uint8_t x1119 = 0U;
	int16_t x1120 = 3373;
	uint32_t t67 = 801382U;

	t67 = (x1117-(x1118>>(x1119%x1120)));

	if (t67 != 2147483648U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x1129 = -1296LL;
	uint32_t x1130 = 1U;
	static uint8_t x1131 = 28U;
	int8_t x1132 = -1;

	t68 = (x1129-(x1130>>(x1131%x1132)));

	if (t68 != -1297LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1137 = 33290936851442352LL;
	volatile uint8_t x1139 = 1U;
	uint32_t x1140 = 30U;
	static int64_t t69 = 1777469155377036LL;

	t69 = (x1137-(x1138>>(x1139%x1140)));

	if (t69 != 33290934703958705LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x1145 = UINT32_MAX;
	uint16_t x1146 = UINT16_MAX;
	int8_t x1147 = 1;
	volatile uint32_t x1148 = 22U;

	t70 = (x1145-(x1146>>(x1147%x1148)));

	if (t70 != 4294934528U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x1157 = 52;
	volatile int16_t x1160 = INT16_MAX;
	volatile int32_t t71 = -652;

	t71 = (x1157-(x1158>>(x1159%x1160)));

	if (t71 != 21) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x1169 = -1;
	uint64_t x1170 = 26576909269157330LLU;
	int64_t x1171 = INT64_MIN;
	int32_t x1172 = INT32_MIN;
	volatile uint64_t t72 = 128700990487654LLU;

	t72 = (x1169-(x1170>>(x1171%x1172)));

	if (t72 != 18420167164440394285LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1185 = 0;
	uint8_t x1186 = 60U;
	static int32_t x1187 = 15544;
	static int16_t x1188 = -9;

	t73 = (x1185-(x1186>>(x1187%x1188)));

	if (t73 != -30) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1189 = 1233U;
	int64_t x1191 = INT64_MIN;
	int32_t x1192 = -1;
	uint32_t t74 = 263997917U;

	t74 = (x1189-(x1190>>(x1191%x1192)));

	if (t74 != 4288863488U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1197 = 3U;
	uint16_t x1199 = 0U;
	int16_t x1200 = INT16_MAX;
	volatile int32_t t75 = 1819;

	t75 = (x1197-(x1198>>(x1199%x1200)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x1213 = INT64_MAX;
	uint16_t x1214 = UINT16_MAX;
	static int8_t x1215 = INT8_MIN;
	static int32_t x1216 = -1;
	static volatile int64_t t76 = 3LL;

	t76 = (x1213-(x1214>>(x1215%x1216)));

	if (t76 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1225 = 2022;
	uint8_t x1226 = 2U;
	int32_t x1227 = INT32_MAX;
	int16_t x1228 = INT16_MAX;
	volatile int32_t t77 = 37;

	t77 = (x1225-(x1226>>(x1227%x1228)));

	if (t77 != 2021) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1282 = 11U;
	static int8_t x1283 = 33;
	static volatile int64_t t78 = 169504900914984744LL;

	t78 = (x1281-(x1282>>(x1283%x1284)));

	if (t78 != -12LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1341 = INT16_MIN;
	static uint32_t x1342 = 105U;
	int32_t x1343 = -1;
	uint64_t x1344 = UINT64_MAX;
	static uint32_t t79 = 203636225U;

	t79 = (x1341-(x1342>>(x1343%x1344)));

	if (t79 != 4294934423U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1350 = 6982LLU;
	static volatile int32_t x1352 = INT32_MIN;
	static uint64_t t80 = 15078804442113914LLU;

	t80 = (x1349-(x1350>>(x1351%x1352)));

	if (t80 != 18446744073709544633LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x1361 = UINT16_MAX;
	int32_t x1362 = 124081;
	int32_t x1363 = 1;
	int32_t t81 = -33;

	t81 = (x1361-(x1362>>(x1363%x1364)));

	if (t81 != 3495) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1365 = 78428046LLU;
	uint16_t x1366 = 364U;
	static volatile uint8_t x1367 = 14U;
	int16_t x1368 = INT16_MIN;

	t82 = (x1365-(x1366>>(x1367%x1368)));

	if (t82 != 78428046LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x1389 = INT64_MIN;
	uint64_t x1390 = UINT64_MAX;
	uint32_t x1391 = 422615U;
	uint8_t x1392 = 6U;
	uint64_t t83 = 21838171056717097LLU;

	t83 = (x1389-(x1390>>(x1391%x1392)));

	if (t83 != 8646911284551352321LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1401 = INT64_MAX;
	volatile int8_t x1402 = INT8_MAX;
	static int8_t x1404 = INT8_MIN;
	int64_t t84 = 632543545654557428LL;

	t84 = (x1401-(x1402>>(x1403%x1404)));

	if (t84 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x1421 = INT32_MAX;
	int64_t x1422 = 791LL;
	int64_t x1423 = -1LL;

	t85 = (x1421-(x1422>>(x1423%x1424)));

	if (t85 != 2147483641LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1493 = 4924U;
	uint16_t x1494 = UINT16_MAX;
	uint32_t x1495 = UINT32_MAX;
	uint32_t t86 = 744454852U;

	t86 = (x1493-(x1494>>(x1495%x1496)));

	if (t86 != 4294906685U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1513 = 382;
	volatile int8_t x1514 = INT8_MAX;
	int64_t x1515 = INT64_MIN;
	int32_t t87 = 271548;

	t87 = (x1513-(x1514>>(x1515%x1516)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1541 = INT64_MAX;
	uint8_t x1542 = 15U;
	uint16_t x1544 = 40U;
	int64_t t88 = INT64_MAX;

	t88 = (x1541-(x1542>>(x1543%x1544)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1545 = INT8_MAX;
	int16_t x1546 = INT16_MAX;
	static int64_t x1548 = INT64_MAX;
	static int32_t t89 = -2088;

	t89 = (x1545-(x1546>>(x1547%x1548)));

	if (t89 != -3968) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1585 = 86U;
	uint32_t t90 = 65839U;

	t90 = (x1585-(x1586>>(x1587%x1588)));

	if (t90 != 4294934615U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1593 = UINT16_MAX;
	volatile int8_t x1594 = 1;
	static int64_t x1595 = INT64_MIN;
	int16_t x1596 = INT16_MIN;
	int32_t t91 = -2809337;

	t91 = (x1593-(x1594>>(x1595%x1596)));

	if (t91 != 65534) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1598 = 211U;
	volatile int8_t x1600 = INT8_MAX;
	int32_t t92 = -60538291;

	t92 = (x1597-(x1598>>(x1599%x1600)));

	if (t92 != 44) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x1613 = 55U;
	volatile uint64_t x1615 = UINT64_MAX;
	int8_t x1616 = -1;
	int32_t t93 = 261106656;

	t93 = (x1613-(x1614>>(x1615%x1616)));

	if (t93 != -65480) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x1621 = 3473U;
	int64_t x1622 = INT64_MAX;
	uint64_t x1623 = 221584490901617052LLU;
	int8_t x1624 = INT8_MAX;
	volatile int64_t t94 = -878602229640LL;

	t94 = (x1621-(x1622>>(x1623%x1624)));

	if (t94 != 2962LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1637 = INT8_MIN;
	uint64_t x1638 = 14775LLU;
	int8_t x1639 = 1;
	uint8_t x1640 = 94U;

	t95 = (x1637-(x1638>>(x1639%x1640)));

	if (t95 != 18446744073709544101LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1693 = -3;
	volatile uint32_t x1694 = 30840U;
	uint8_t x1696 = 4U;

	t96 = (x1693-(x1694>>(x1695%x1696)));

	if (t96 != 4294936453U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1721 = -14669514;
	uint8_t x1722 = UINT8_MAX;
	int8_t x1723 = -1;
	uint64_t x1724 = UINT64_MAX;
	int32_t t97 = -58073;

	t97 = (x1721-(x1722>>(x1723%x1724)));

	if (t97 != -14669769) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1777 = 163U;
	static uint32_t x1778 = 133474082U;
	static volatile int16_t x1780 = 1;
	volatile uint32_t t98 = 534488038U;

	t98 = (x1777-(x1778>>(x1779%x1780)));

	if (t98 != 4161493377U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x1785 = 0U;
	static volatile uint32_t x1786 = UINT32_MAX;
	int8_t x1787 = INT8_MIN;
	int32_t x1788 = -1;
	volatile uint32_t t99 = 1588U;

	t99 = (x1785-(x1786>>(x1787%x1788)));

	if (t99 != 1U) { NG(); } else { ; }
	
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

