#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MIN;
static uint32_t x11 = 10511506U;
int32_t x27 = INT32_MIN;
static volatile int64_t x56 = 18LL;
uint64_t t7 = 5195229536LLU;
uint32_t x130 = 373U;
static int8_t x132 = INT8_MIN;
uint64_t x137 = UINT64_MAX;
int16_t x141 = INT16_MAX;
int64_t x209 = 70845LL;
int64_t t12 = 491094547173LL;
volatile uint32_t x290 = 106460U;
int16_t x291 = 1947;
int32_t x292 = 1;
static int8_t x314 = INT8_MIN;
int32_t t15 = 29;
uint32_t x323 = 26U;
uint32_t x386 = 1085483363U;
int8_t x388 = -1;
volatile int64_t x417 = -1LL;
uint8_t x418 = UINT8_MAX;
int64_t t19 = -2369079LL;
static int32_t x434 = -1;
static volatile int64_t x443 = INT64_MAX;
int8_t x444 = 0;
int8_t x457 = INT8_MAX;
int64_t x465 = 271777028821160LL;
volatile int32_t x469 = -1;
uint8_t x471 = 1U;
volatile uint64_t x472 = 3488384932817609LLU;
int32_t t24 = -26800;
volatile uint32_t t27 = 21513U;
static volatile uint32_t t28 = 778973128U;
volatile int64_t x555 = 22565LL;
int8_t x556 = 1;
static int8_t x569 = INT8_MAX;
int64_t x571 = INT64_MAX;
int16_t x573 = -1;
volatile int32_t t32 = 30471;
int32_t t33 = 5;
int32_t x596 = INT32_MAX;
volatile int32_t t35 = -15079;
static uint64_t x666 = 198455LLU;
static int8_t x667 = INT8_MIN;
int8_t x688 = 1;
int32_t x717 = 7;
volatile uint64_t x719 = 123LLU;
uint64_t x737 = 1642684522312140459LLU;
int16_t x740 = -2;
int8_t x900 = -1;
uint64_t x938 = 1225LLU;
int16_t x942 = INT16_MIN;
int8_t x943 = 61;
volatile int8_t x944 = -26;
int32_t x949 = INT32_MIN;
uint32_t x954 = 101U;
uint16_t x990 = 0U;
uint16_t x993 = 7U;
uint8_t x995 = 2U;
uint16_t x1009 = 441U;
int32_t t54 = 0;
int64_t x1013 = 30007794375092LL;
static uint8_t x1014 = 5U;
volatile int64_t t55 = 833209975552335988LL;
volatile int8_t x1031 = 0;
int8_t x1103 = 0;
volatile uint64_t x1133 = 1145153LLU;
static int8_t x1136 = -21;
uint64_t x1137 = UINT64_MAX;
static int32_t x1138 = -1;
int32_t x1140 = -7155;
int32_t t62 = 1;
int64_t x1175 = INT64_MIN;
uint32_t t64 = 5667U;
int32_t x1209 = -1;
static uint16_t x1211 = 1U;
static volatile int32_t t66 = 118659;
int8_t x1250 = INT8_MIN;
int32_t x1253 = INT32_MAX;
static volatile int8_t x1254 = INT8_MIN;
int8_t x1258 = INT8_MAX;
static int64_t x1259 = -3464694566832664LL;
static uint16_t x1298 = UINT16_MAX;
volatile int32_t t70 = -523427977;
int64_t x1309 = 2LL;
int64_t t71 = -3266LL;
uint16_t x1337 = 494U;
volatile int8_t x1340 = INT8_MIN;
uint16_t x1375 = 2648U;
int8_t x1401 = 33;
uint32_t x1402 = 9443U;
int64_t x1418 = 186214LL;
static uint32_t x1419 = 56040U;
int8_t x1429 = INT8_MAX;
uint32_t t77 = 0U;
static uint8_t x1505 = 1U;
uint8_t x1506 = 33U;
int8_t x1521 = INT8_MAX;
uint16_t x1522 = 7U;
int32_t x1523 = 0;
int8_t x1538 = -1;
int64_t x1539 = INT64_MIN;
volatile int32_t t81 = -18981;
int32_t x1558 = -95;
volatile int8_t x1624 = 1;
uint32_t x1635 = 1U;
int8_t x1643 = 1;
int16_t x1718 = 619;
volatile uint64_t t96 = 47777065359138765LLU;
uint8_t x1814 = 0U;
static volatile uint64_t x1815 = 2552757023LLU;
static int16_t x1857 = INT16_MAX;


void f0(void) {
	uint8_t x1 = 6U;
	uint32_t x2 = UINT32_MAX;
	static uint64_t x4 = 460750LLU;
	volatile uint32_t t0 = 364U;

	t0 = ((x1+x2)>>(x3&x4));

	if (t0 != 5U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 128787;
	int16_t x10 = 12867;
	static volatile uint16_t x12 = 593U;
	static volatile int32_t t1 = 638637;

	t1 = ((x9+x10)>>(x11&x12));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x25 = INT32_MIN;
	uint32_t x26 = 47617U;
	static volatile int32_t x28 = INT32_MAX;
	volatile uint32_t t2 = 2903383U;

	t2 = ((x25+x26)>>(x27&x28));

	if (t2 != 2147531265U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x37 = INT8_MIN;
	volatile int32_t x38 = INT32_MAX;
	static volatile int16_t x39 = -10487;
	uint8_t x40 = UINT8_MAX;
	int32_t t3 = 595;

	t3 = ((x37+x38)>>(x39&x40));

	if (t3 != 4194303) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x53 = 798;
	int16_t x54 = INT16_MAX;
	volatile int64_t x55 = INT64_MIN;
	volatile int32_t t4 = -30192707;

	t4 = ((x53+x54)>>(x55&x56));

	if (t4 != 33565) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x61 = INT8_MIN;
	static uint8_t x62 = UINT8_MAX;
	static int16_t x63 = 0;
	volatile int16_t x64 = -1;
	int32_t t5 = -1259198;

	t5 = ((x61+x62)>>(x63&x64));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x101 = 0;
	volatile int8_t x102 = 0;
	static int32_t x103 = -1;
	volatile int32_t x104 = 1;
	volatile int32_t t6 = 5876575;

	t6 = ((x101+x102)>>(x103&x104));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x125 = 26348LLU;
	int16_t x126 = INT16_MIN;
	int64_t x127 = -1LL;
	int32_t x128 = 4;

	t7 = ((x125+x126)>>(x127&x128));

	if (t7 != 1152921504606846574LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x129 = UINT32_MAX;
	volatile int8_t x131 = INT8_MAX;
	static volatile uint32_t t8 = 786919807U;

	t8 = ((x129+x130)>>(x131&x132));

	if (t8 != 372U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x138 = INT8_MIN;
	uint8_t x139 = 2U;
	int32_t x140 = -80823664;
	uint64_t t9 = 237777876649630738LLU;

	t9 = ((x137+x138)>>(x139&x140));

	if (t9 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x142 = -1LL;
	volatile int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MAX;
	volatile int64_t t10 = 12363221LL;

	t10 = ((x141+x142)>>(x143&x144));

	if (t10 != 32766LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x205 = -3929894;
	volatile uint32_t x206 = UINT32_MAX;
	static uint8_t x207 = 57U;
	int8_t x208 = INT8_MIN;
	uint32_t t11 = 21449706U;

	t11 = ((x205+x206)>>(x207&x208));

	if (t11 != 4291037401U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x210 = -1;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MAX;

	t12 = ((x209+x210)>>(x211&x212));

	if (t12 != 70844LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x265 = 474LLU;
	int64_t x266 = INT64_MAX;
	int8_t x267 = INT8_MAX;
	volatile int8_t x268 = INT8_MIN;
	volatile uint64_t t13 = 4355580373316449LLU;

	t13 = ((x265+x266)>>(x267&x268));

	if (t13 != 9223372036854776281LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x289 = UINT32_MAX;
	uint32_t t14 = 47079U;

	t14 = ((x289+x290)>>(x291&x292));

	if (t14 != 53229U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x313 = 29436U;
	uint32_t x315 = UINT32_MAX;
	static int64_t x316 = INT64_MIN;

	t15 = ((x313+x314)>>(x315&x316));

	if (t15 != 29308) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x321 = UINT8_MAX;
	uint64_t x322 = 306995444839090LLU;
	volatile int32_t x324 = INT32_MIN;
	volatile uint64_t t16 = 3506LLU;

	t16 = ((x321+x322)>>(x323&x324));

	if (t16 != 306995444839345LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x357 = 43093;
	int16_t x358 = INT16_MAX;
	volatile int64_t x359 = 18407173LL;
	int64_t x360 = INT64_MIN;
	volatile int32_t t17 = 0;

	t17 = ((x357+x358)>>(x359&x360));

	if (t17 != 75860) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x385 = -1LL;
	static int8_t x387 = 14;
	int64_t t18 = 22191167382882LL;

	t18 = ((x385+x386)>>(x387&x388));

	if (t18 != 66252LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x419 = -125293517;
	uint8_t x420 = 14U;

	t19 = ((x417+x418)>>(x419&x420));

	if (t19 != 63LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x433 = INT16_MAX;
	volatile int16_t x435 = -196;
	int64_t x436 = 0LL;
	static int32_t t20 = 22874;

	t20 = ((x433+x434)>>(x435&x436));

	if (t20 != 32766) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x441 = 225;
	static uint8_t x442 = 23U;
	int32_t t21 = -18560;

	t21 = ((x441+x442)>>(x443&x444));

	if (t21 != 248) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x458 = UINT16_MAX;
	int16_t x459 = INT16_MIN;
	static volatile int64_t x460 = 13367LL;
	volatile int32_t t22 = -296;

	t22 = ((x457+x458)>>(x459&x460));

	if (t22 != 65662) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x466 = -514100;
	volatile int8_t x467 = 3;
	int64_t x468 = -13195849218LL;
	int64_t t23 = -20255354846374511LL;

	t23 = ((x465+x466)>>(x467&x468));

	if (t23 != 67944257076765LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x470 = 1;

	t24 = ((x469+x470)>>(x471&x472));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x489 = INT16_MAX;
	uint16_t x490 = 0U;
	volatile int8_t x491 = INT8_MAX;
	static int32_t x492 = INT32_MIN;
	volatile int32_t t25 = -458;

	t25 = ((x489+x490)>>(x491&x492));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x497 = 15U;
	uint32_t x498 = UINT32_MAX;
	static volatile int64_t x499 = INT64_MIN;
	static int32_t x500 = 22423860;
	volatile uint32_t t26 = 162385U;

	t26 = ((x497+x498)>>(x499&x500));

	if (t26 != 14U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x537 = 2142149201U;
	uint16_t x538 = UINT16_MAX;
	volatile uint8_t x539 = 44U;
	static int64_t x540 = 37000705233953493LL;

	t27 = ((x537+x538)>>(x539&x540));

	if (t27 != 133888421U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x549 = 1;
	static uint32_t x550 = 578323U;
	uint16_t x551 = 187U;
	static int16_t x552 = -694;

	t28 = ((x549+x550)>>(x551&x552));

	if (t28 != 564U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x553 = UINT32_MAX;
	volatile uint8_t x554 = 0U;
	volatile uint32_t t29 = 36U;

	t29 = ((x553+x554)>>(x555&x556));

	if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x557 = INT32_MAX;
	int8_t x558 = INT8_MIN;
	int8_t x559 = -1;
	static int8_t x560 = 1;
	int32_t t30 = -67389;

	t30 = ((x557+x558)>>(x559&x560));

	if (t30 != 1073741759) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x570 = 90LLU;
	volatile uint8_t x572 = 6U;
	uint64_t t31 = 51LLU;

	t31 = ((x569+x570)>>(x571&x572));

	if (t31 != 3LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x574 = UINT8_MAX;
	volatile uint16_t x575 = 56U;
	static uint64_t x576 = 184663LLU;

	t32 = ((x573+x574)>>(x575&x576));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x581 = 15968U;
	int16_t x582 = -9501;
	int64_t x583 = INT64_MAX;
	uint8_t x584 = 24U;

	t33 = ((x581+x582)>>(x583&x584));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x593 = INT16_MAX;
	uint8_t x594 = 2U;
	int64_t x595 = INT64_MIN;
	static int32_t t34 = 45721;

	t34 = ((x593+x594)>>(x595&x596));

	if (t34 != 32769) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x601 = 14U;
	int32_t x602 = -1;
	uint8_t x603 = 15U;
	int8_t x604 = 3;

	t35 = ((x601+x602)>>(x603&x604));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x665 = 7;
	volatile int32_t x668 = 0;
	uint64_t t36 = 89LLU;

	t36 = ((x665+x666)>>(x667&x668));

	if (t36 != 198462LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x685 = 125U;
	uint64_t x686 = 1064817795LLU;
	int32_t x687 = INT32_MAX;
	volatile uint64_t t37 = 62970663353158LLU;

	t37 = ((x685+x686)>>(x687&x688));

	if (t37 != 532408960LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x689 = -724LL;
	int16_t x690 = INT16_MAX;
	int32_t x691 = 201472;
	volatile uint8_t x692 = 96U;
	static volatile int64_t t38 = 3395879LL;

	t38 = ((x689+x690)>>(x691&x692));

	if (t38 != 32043LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x718 = -1;
	volatile int64_t x720 = INT64_MIN;
	volatile int32_t t39 = -1;

	t39 = ((x717+x718)>>(x719&x720));

	if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x738 = INT8_MIN;
	uint8_t x739 = 14U;
	uint64_t t40 = 163026040571LLU;

	t40 = ((x737+x738)>>(x739&x740));

	if (t40 != 100261506488778LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x757 = UINT8_MAX;
	int64_t x758 = 3LL;
	static uint8_t x759 = 19U;
	static uint8_t x760 = 73U;
	volatile int64_t t41 = 18065LL;

	t41 = ((x757+x758)>>(x759&x760));

	if (t41 != 129LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x809 = -1;
	uint16_t x810 = 5588U;
	int8_t x811 = 5;
	int32_t x812 = 223424921;
	volatile int32_t t42 = 72;

	t42 = ((x809+x810)>>(x811&x812));

	if (t42 != 2793) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x821 = INT16_MAX;
	int8_t x822 = INT8_MAX;
	int64_t x823 = INT64_MIN;
	int8_t x824 = INT8_MAX;
	volatile int32_t t43 = 601287139;

	t43 = ((x821+x822)>>(x823&x824));

	if (t43 != 32894) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x837 = -1;
	int16_t x838 = 58;
	int8_t x839 = 0;
	uint64_t x840 = 3641965182867592801LLU;
	volatile int32_t t44 = -36809813;

	t44 = ((x837+x838)>>(x839&x840));

	if (t44 != 57) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x849 = -1;
	static volatile int32_t x850 = 3184945;
	volatile int8_t x851 = 5;
	int64_t x852 = INT64_MIN;
	volatile int32_t t45 = 36824640;

	t45 = ((x849+x850)>>(x851&x852));

	if (t45 != 3184944) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x897 = INT16_MAX;
	int64_t x898 = 1335919047483LL;
	int32_t x899 = 7;
	int64_t t46 = -23566339LL;

	t46 = ((x897+x898)>>(x899&x900));

	if (t46 != 10436867814LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x913 = INT32_MAX;
	static int8_t x914 = -1;
	int16_t x915 = INT16_MIN;
	uint8_t x916 = 23U;
	volatile int32_t t47 = 746275280;

	t47 = ((x913+x914)>>(x915&x916));

	if (t47 != 2147483646) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x937 = -1;
	static volatile int64_t x939 = INT64_MIN;
	static int64_t x940 = 2121767508536449LL;
	static uint64_t t48 = 3043160070144LLU;

	t48 = ((x937+x938)>>(x939&x940));

	if (t48 != 1224LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x941 = 13918163952LLU;
	uint64_t t49 = 290508388LLU;

	t49 = ((x941+x942)>>(x943&x944));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x950 = 3717381375LLU;
	int8_t x951 = 1;
	int8_t x952 = INT8_MIN;
	volatile uint64_t t50 = 7435487069043LLU;

	t50 = ((x949+x950)>>(x951&x952));

	if (t50 != 1569897727LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x953 = INT16_MAX;
	uint16_t x955 = 7U;
	uint32_t x956 = 541212205U;
	static volatile uint32_t t51 = 0U;

	t51 = ((x953+x954)>>(x955&x956));

	if (t51 != 1027U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x989 = 50U;
	int16_t x991 = INT16_MIN;
	int16_t x992 = 3299;
	int32_t t52 = 656436;

	t52 = ((x989+x990)>>(x991&x992));

	if (t52 != 50) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x994 = -1;
	int64_t x996 = INT64_MIN;
	static int32_t t53 = -91979;

	t53 = ((x993+x994)>>(x995&x996));

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x1010 = UINT8_MAX;
	uint32_t x1011 = 53U;
	int32_t x1012 = 48821708;

	t54 = ((x1009+x1010)>>(x1011&x1012));

	if (t54 != 43) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1015 = 13;
	int32_t x1016 = -795808612;

	t55 = ((x1013+x1014)>>(x1015&x1016));

	if (t55 != 7326121673LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x1029 = -1;
	uint8_t x1030 = 3U;
	volatile int64_t x1032 = -1LL;
	int32_t t56 = 4;

	t56 = ((x1029+x1030)>>(x1031&x1032));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1045 = 19U;
	int32_t x1046 = -1;
	int8_t x1047 = INT8_MIN;
	static volatile uint8_t x1048 = 4U;
	int32_t t57 = 55135;

	t57 = ((x1045+x1046)>>(x1047&x1048));

	if (t57 != 18) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1101 = INT16_MAX;
	static int8_t x1102 = -1;
	volatile int32_t x1104 = INT32_MIN;
	volatile int32_t t58 = 0;

	t58 = ((x1101+x1102)>>(x1103&x1104));

	if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1105 = 261132110261LL;
	uint8_t x1106 = 6U;
	volatile uint8_t x1107 = UINT8_MAX;
	volatile int16_t x1108 = INT16_MIN;
	volatile int64_t t59 = -2081735016649LL;

	t59 = ((x1105+x1106)>>(x1107&x1108));

	if (t59 != 261132110267LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1134 = INT16_MAX;
	uint8_t x1135 = 5U;
	uint64_t t60 = 118092464841950139LLU;

	t60 = ((x1133+x1134)>>(x1135&x1136));

	if (t60 != 588960LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1139 = 59U;
	uint64_t t61 = 1845644189677695769LLU;

	t61 = ((x1137+x1138)>>(x1139&x1140));

	if (t61 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1157 = UINT16_MAX;
	uint8_t x1158 = 9U;
	int32_t x1159 = 3;
	int32_t x1160 = -23293756;

	t62 = ((x1157+x1158)>>(x1159&x1160));

	if (t62 != 65544) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1169 = UINT64_MAX;
	int64_t x1170 = INT64_MIN;
	volatile uint8_t x1171 = 1U;
	int64_t x1172 = -1LL;
	volatile uint64_t t63 = 9531LLU;

	t63 = ((x1169+x1170)>>(x1171&x1172));

	if (t63 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1173 = -1;
	uint32_t x1174 = 2012055293U;
	uint32_t x1176 = 1U;

	t64 = ((x1173+x1174)>>(x1175&x1176));

	if (t64 != 2012055292U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1185 = 20250014U;
	int16_t x1186 = INT16_MAX;
	static uint16_t x1187 = 16917U;
	int16_t x1188 = INT16_MIN;
	uint32_t t65 = 652U;

	t65 = ((x1185+x1186)>>(x1187&x1188));

	if (t65 != 20282781U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x1210 = INT16_MAX;
	int16_t x1212 = INT16_MIN;

	t66 = ((x1209+x1210)>>(x1211&x1212));

	if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1249 = 2166U;
	uint16_t x1251 = UINT16_MAX;
	int8_t x1252 = 23;
	int32_t t67 = 1545;

	t67 = ((x1249+x1250)>>(x1251&x1252));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1255 = INT16_MIN;
	int8_t x1256 = 0;
	volatile int32_t t68 = 489767430;

	t68 = ((x1253+x1254)>>(x1255&x1256));

	if (t68 != 2147483519) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1257 = -1LL;
	uint8_t x1260 = 6U;
	int64_t t69 = -1392269159LL;

	t69 = ((x1257+x1258)>>(x1259&x1260));

	if (t69 != 126LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1297 = UINT16_MAX;
	uint16_t x1299 = 23868U;
	int32_t x1300 = INT32_MIN;

	t70 = ((x1297+x1298)>>(x1299&x1300));

	if (t70 != 131070) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x1310 = 15U;
	int32_t x1311 = 2;
	volatile int16_t x1312 = -1;

	t71 = ((x1309+x1310)>>(x1311&x1312));

	if (t71 != 4LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1338 = 5U;
	uint8_t x1339 = 29U;
	static int32_t t72 = 7279;

	t72 = ((x1337+x1338)>>(x1339&x1340));

	if (t72 != 499) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1373 = 1U;
	int32_t x1374 = -1;
	volatile int64_t x1376 = INT64_MIN;
	volatile uint32_t t73 = 163U;

	t73 = ((x1373+x1374)>>(x1375&x1376));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x1403 = 0U;
	static int16_t x1404 = -1663;
	static uint32_t t74 = 9571032U;

	t74 = ((x1401+x1402)>>(x1403&x1404));

	if (t74 != 9476U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1417 = 1;
	uint8_t x1420 = 0U;
	volatile int64_t t75 = 454353985LL;

	t75 = ((x1417+x1418)>>(x1419&x1420));

	if (t75 != 186215LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1430 = -8;
	volatile int8_t x1431 = -1;
	int32_t x1432 = 4;
	static int32_t t76 = 13401;

	t76 = ((x1429+x1430)>>(x1431&x1432));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1449 = INT8_MAX;
	uint32_t x1450 = UINT32_MAX;
	int64_t x1451 = INT64_MIN;
	int32_t x1452 = INT32_MAX;

	t77 = ((x1449+x1450)>>(x1451&x1452));

	if (t77 != 126U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x1453 = -120069;
	uint32_t x1454 = UINT32_MAX;
	uint32_t x1455 = 395U;
	int64_t x1456 = -121106885814775LL;
	static uint32_t t78 = 868U;

	t78 = ((x1453+x1454)>>(x1455&x1456));

	if (t78 != 8388373U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x1507 = 38U;
	int32_t x1508 = INT32_MIN;
	volatile int32_t t79 = -5165;

	t79 = ((x1505+x1506)>>(x1507&x1508));

	if (t79 != 34) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1524 = 193963166636871019LL;
	int32_t t80 = -18305731;

	t80 = ((x1521+x1522)>>(x1523&x1524));

	if (t80 != 134) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1537 = INT32_MAX;
	int8_t x1540 = 1;

	t81 = ((x1537+x1538)>>(x1539&x1540));

	if (t81 != 2147483646) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x1557 = 699672217U;
	volatile uint16_t x1559 = 1036U;
	int32_t x1560 = -3815393;
	static volatile uint32_t t82 = 5U;

	t82 = ((x1557+x1558)>>(x1559&x1560));

	if (t82 != 170818U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1613 = UINT32_MAX;
	static volatile int16_t x1614 = -1;
	static volatile int16_t x1615 = INT16_MAX;
	static int64_t x1616 = INT64_MIN;
	uint32_t t83 = 2907757U;

	t83 = ((x1613+x1614)>>(x1615&x1616));

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1621 = UINT8_MAX;
	static int32_t x1622 = -1;
	uint16_t x1623 = 20269U;
	int32_t t84 = -439844;

	t84 = ((x1621+x1622)>>(x1623&x1624));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x1633 = UINT64_MAX;
	int64_t x1634 = -1LL;
	int16_t x1636 = 5710;
	static volatile uint64_t t85 = 314618740780LLU;

	t85 = ((x1633+x1634)>>(x1635&x1636));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x1641 = -1;
	volatile int32_t x1642 = INT32_MAX;
	uint16_t x1644 = UINT16_MAX;
	int32_t t86 = 18156;

	t86 = ((x1641+x1642)>>(x1643&x1644));

	if (t86 != 1073741823) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1653 = 976868U;
	uint64_t x1654 = 10472LLU;
	volatile int16_t x1655 = INT16_MAX;
	static volatile int32_t x1656 = INT32_MIN;
	uint64_t t87 = 22215649328LLU;

	t87 = ((x1653+x1654)>>(x1655&x1656));

	if (t87 != 987340LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x1669 = 0U;
	int64_t x1670 = 1LL;
	static volatile int8_t x1671 = 1;
	uint32_t x1672 = 907U;
	static volatile int64_t t88 = 5851748188178LL;

	t88 = ((x1669+x1670)>>(x1671&x1672));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1717 = INT8_MIN;
	uint8_t x1719 = 0U;
	volatile uint8_t x1720 = 108U;
	static volatile int32_t t89 = 0;

	t89 = ((x1717+x1718)>>(x1719&x1720));

	if (t89 != 491) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1721 = -1;
	uint8_t x1722 = 6U;
	uint16_t x1723 = 5579U;
	int16_t x1724 = INT16_MIN;
	static volatile int32_t t90 = -285;

	t90 = ((x1721+x1722)>>(x1723&x1724));

	if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1737 = 640933868U;
	int32_t x1738 = INT32_MAX;
	static uint16_t x1739 = UINT16_MAX;
	uint32_t x1740 = 1U;
	uint32_t t91 = 0U;

	t91 = ((x1737+x1738)>>(x1739&x1740));

	if (t91 != 1394208757U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1745 = 4957;
	uint8_t x1746 = 0U;
	int32_t x1747 = 38406;
	uint8_t x1748 = 11U;
	int32_t t92 = 1452217;

	t92 = ((x1745+x1746)>>(x1747&x1748));

	if (t92 != 1239) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x1749 = 57424308LL;
	int16_t x1750 = -1;
	int16_t x1751 = INT16_MIN;
	uint32_t x1752 = 889U;
	int64_t t93 = 451732180690181963LL;

	t93 = ((x1749+x1750)>>(x1751&x1752));

	if (t93 != 57424307LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1753 = -1;
	volatile int32_t x1754 = INT32_MAX;
	volatile int64_t x1755 = INT64_MAX;
	uint32_t x1756 = 15U;
	static volatile int32_t t94 = 2278764;

	t94 = ((x1753+x1754)>>(x1755&x1756));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1761 = 3705321674732405LLU;
	int32_t x1762 = INT32_MIN;
	int8_t x1763 = 1;
	uint8_t x1764 = UINT8_MAX;
	static volatile uint64_t t95 = 198230LLU;

	t95 = ((x1761+x1762)>>(x1763&x1764));

	if (t95 != 1852659763624378LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1769 = 24U;
	uint64_t x1770 = 80849057548LLU;
	int32_t x1771 = -1;
	volatile uint16_t x1772 = 2U;

	t96 = ((x1769+x1770)>>(x1771&x1772));

	if (t96 != 20212264393LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1777 = 5247U;
	uint32_t x1778 = UINT32_MAX;
	int64_t x1779 = 278828LL;
	int32_t x1780 = INT32_MIN;
	uint32_t t97 = 57U;

	t97 = ((x1777+x1778)>>(x1779&x1780));

	if (t97 != 5246U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x1813 = UINT64_MAX;
	volatile uint16_t x1816 = 149U;
	volatile uint64_t t98 = 1847831211LLU;

	t98 = ((x1813+x1814)>>(x1815&x1816));

	if (t98 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1858 = 17U;
	int64_t x1859 = INT64_MIN;
	static uint8_t x1860 = 74U;
	volatile int32_t t99 = 53;

	t99 = ((x1857+x1858)>>(x1859&x1860));

	if (t99 != 32784) { NG(); } else { ; }
	
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

