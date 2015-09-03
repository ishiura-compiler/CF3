#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x111 = 1U;
static int64_t x112 = INT64_MIN;
volatile int64_t x176 = -412603LL;
int64_t x181 = -1LL;
volatile int32_t t3 = 362193;
int8_t x531 = 0;
uint16_t x532 = 21333U;
int64_t x681 = -345413244LL;
static uint8_t x683 = 3U;
static int32_t x684 = INT32_MAX;
uint32_t x898 = 18688666U;
int64_t t11 = 1285140707289639728LL;
volatile uint32_t t12 = 774677U;
uint8_t x1554 = UINT8_MAX;
int16_t x1777 = -1;
uint8_t x1779 = 1U;
uint32_t x1802 = 90842918U;
int64_t t18 = 21625497688710106LL;
uint64_t t19 = 12031LLU;
int32_t t21 = -68291;
static int16_t x1948 = INT16_MIN;
static volatile uint64_t t23 = 396473LLU;
volatile uint32_t t24 = 958096392U;
uint64_t t26 = 89643826LLU;
volatile int16_t x2164 = -1;
volatile int32_t t28 = 141;
volatile uint16_t x2439 = 0U;
volatile uint32_t t33 = 11957732U;
uint32_t x2528 = 7774U;
static int16_t x2589 = INT16_MIN;
int64_t x2650 = INT64_MAX;
int64_t t38 = -1LL;
int8_t x2673 = 18;
uint16_t x2675 = 6U;
uint8_t x2676 = UINT8_MAX;
uint32_t t41 = 519594U;
uint64_t x2854 = 359964111348624994LLU;
static int8_t x2856 = INT8_MIN;
static volatile int8_t x2912 = INT8_MAX;
uint32_t x2976 = 144920138U;
static volatile uint16_t x3083 = 3U;
static int16_t x3181 = INT16_MIN;
uint8_t x3184 = 8U;
uint8_t x3295 = 1U;
int32_t t47 = -55;
int64_t t48 = 0LL;
uint8_t x3510 = 19U;
int8_t x3511 = 3;
int16_t x3521 = -313;
volatile uint8_t x3523 = 15U;
uint64_t x3525 = 156021702LLU;
static int16_t x3575 = 13;
uint8_t x3576 = 2U;
uint64_t x3581 = UINT64_MAX;
volatile uint64_t t55 = 208914984LLU;
static uint8_t x3597 = 50U;
int8_t x3625 = INT8_MIN;
int16_t x3627 = 2;
volatile uint64_t x3636 = UINT64_MAX;
uint32_t x3739 = 9U;
static int64_t x3740 = INT64_MAX;
static int32_t t62 = 783;
int8_t x3763 = 4;
static uint32_t x3833 = 3651680U;
uint16_t x3835 = 6U;
volatile uint8_t x3837 = UINT8_MAX;
uint8_t x3838 = UINT8_MAX;
int32_t t65 = -623;
static uint64_t x3852 = UINT64_MAX;
volatile uint64_t t68 = 5774791890247LLU;
uint16_t x4089 = 10468U;
uint32_t x4091 = 19U;
int32_t x4309 = INT32_MIN;
volatile int64_t t71 = 75788LL;
uint8_t x4330 = 13U;
int8_t x4331 = 0;
static int16_t x4421 = -1;
uint16_t x4619 = 0U;
int8_t x4620 = INT8_MAX;
uint64_t x4621 = UINT64_MAX;
int8_t x4622 = INT8_MAX;
int8_t x4624 = -1;
volatile uint64_t t77 = 13314LLU;
uint16_t x4682 = UINT16_MAX;
volatile int64_t x4684 = -143252474LL;
volatile int16_t x4691 = 1;
int8_t x4692 = INT8_MAX;
static int8_t x4738 = INT8_MAX;
static uint8_t x4755 = 5U;
uint32_t x4890 = 38715U;
uint8_t x5030 = UINT8_MAX;
int32_t t89 = -139865;
volatile int32_t x5189 = INT32_MAX;
static int32_t x5200 = INT32_MAX;
volatile int8_t x5309 = -3;
volatile uint32_t x5310 = 7285950U;
volatile int8_t x5387 = 2;
int8_t x5477 = INT8_MIN;
int16_t x5480 = 0;
int8_t x5612 = INT8_MAX;


void f0(void) {
	static volatile uint8_t x109 = 110U;
	int8_t x110 = 24;
	volatile int64_t t0 = 1LL;

	t0 = (x109^((x110<<x111)|x112));

	if (t0 != -9223372036854775714LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x173 = INT8_MIN;
	uint16_t x174 = 0U;
	static int16_t x175 = 1;
	int64_t t1 = -7154LL;

	t1 = (x173^((x174<<x175)|x176));

	if (t1 != 412613LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x182 = 37;
	static int16_t x183 = 14;
	static int16_t x184 = INT16_MIN;
	int64_t t2 = 60345662745583LL;

	t2 = (x181^((x182<<x183)|x184));

	if (t2 != 16383LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x393 = -96;
	int8_t x394 = 48;
	static uint32_t x395 = 3U;
	uint16_t x396 = 10951U;

	t3 = (x393^((x394<<x395)|x396));

	if (t3 != -11161) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x525 = INT16_MIN;
	static uint8_t x526 = 53U;
	int8_t x527 = 0;
	int32_t x528 = INT32_MIN;
	static int32_t t4 = 767419;

	t4 = (x525^((x526<<x527)|x528));

	if (t4 != 2147450933) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x529 = INT8_MIN;
	uint32_t x530 = 791U;
	uint32_t t5 = 906449622U;

	t5 = (x529^((x530<<x531)|x532));

	if (t5 != 4294946007U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x682 = 394U;
	volatile int64_t t6 = 27647744302LL;

	t6 = (x681^((x682<<x683)|x684));

	if (t6 != -1802070405LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x897 = -48;
	uint16_t x899 = 3U;
	int64_t x900 = INT64_MIN;
	volatile int64_t t7 = 184399630LL;

	t7 = (x897^((x898<<x899)|x900));

	if (t7 != 9223372036705266432LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x901 = -9242;
	uint8_t x902 = 0U;
	uint8_t x903 = 0U;
	static volatile uint64_t x904 = 1252LLU;
	uint64_t t8 = 251825180LLU;

	t8 = (x901^((x902<<x903)|x904));

	if (t8 != 18446744073709543170LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x1125 = -33;
	int64_t x1126 = 11LL;
	static volatile uint8_t x1127 = 25U;
	static int64_t x1128 = -43651564774LL;
	int64_t t9 = -13605685LL;

	t9 = (x1125^((x1126<<x1127)|x1128));

	if (t9 != 43651564741LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1141 = -1;
	int16_t x1142 = 1428;
	static int8_t x1143 = 1;
	uint16_t x1144 = UINT16_MAX;
	static int32_t t10 = 965374;

	t10 = (x1141^((x1142<<x1143)|x1144));

	if (t10 != -65536) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1257 = 13;
	volatile uint32_t x1258 = UINT32_MAX;
	int8_t x1259 = 1;
	int64_t x1260 = INT64_MIN;

	t11 = (x1257^((x1258<<x1259)|x1260));

	if (t11 != -9223372032559808525LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1481 = 1433065U;
	static uint8_t x1482 = 108U;
	uint8_t x1483 = 0U;
	int8_t x1484 = 42;

	t12 = (x1481^((x1482<<x1483)|x1484));

	if (t12 != 1432967U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x1553 = 233917317;
	uint8_t x1555 = 1U;
	int8_t x1556 = -1;
	volatile int32_t t13 = 3816;

	t13 = (x1553^((x1554<<x1555)|x1556));

	if (t13 != -233917318) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1617 = -1;
	uint32_t x1618 = 4837U;
	int16_t x1619 = 0;
	volatile uint16_t x1620 = 36U;
	uint32_t t14 = 28U;

	t14 = (x1617^((x1618<<x1619)|x1620));

	if (t14 != 4294962458U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1621 = 0;
	uint64_t x1622 = UINT64_MAX;
	uint64_t x1623 = 48LLU;
	uint64_t x1624 = 8367927LLU;
	uint64_t t15 = 14197LLU;

	t15 = (x1621^((x1622<<x1623)|x1624));

	if (t15 != 18446462598741208887LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1641 = 435580834U;
	uint32_t x1642 = 779365U;
	volatile int8_t x1643 = 11;
	uint8_t x1644 = 1U;
	volatile uint32_t t16 = 31U;

	t16 = (x1641^((x1642<<x1643)|x1644));

	if (t16 != 1188382627U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1778 = 165472752LLU;
	static uint32_t x1780 = 861U;
	volatile uint64_t t17 = 809007LLU;

	t17 = (x1777^((x1778<<x1779)|x1780));

	if (t17 != 18446744073378606082LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1801 = INT32_MAX;
	static volatile uint16_t x1803 = 2U;
	int64_t x1804 = INT64_MIN;

	t18 = (x1801^((x1802<<x1803)|x1804));

	if (t18 != -9223372035070663833LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1825 = 9296345U;
	volatile uint64_t x1826 = 2715658LLU;
	uint16_t x1827 = 1U;
	uint16_t x1828 = 27696U;

	t19 = (x1825^((x1826<<x1827)|x1828));

	if (t19 != 14628333LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1849 = UINT8_MAX;
	static volatile uint32_t x1850 = UINT32_MAX;
	static int64_t x1851 = 0LL;
	uint64_t x1852 = 10626493866901512LLU;
	volatile uint64_t t20 = 1324309210066894LLU;

	t20 = (x1849^((x1850<<x1851)|x1852));

	if (t20 != 10626496414613248LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1877 = INT8_MIN;
	volatile uint8_t x1878 = UINT8_MAX;
	int16_t x1879 = 1;
	int32_t x1880 = INT32_MIN;

	t21 = (x1877^((x1878<<x1879)|x1880));

	if (t21 != 2147483262) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1945 = INT8_MIN;
	int8_t x1946 = 1;
	uint8_t x1947 = 14U;
	static int32_t t22 = -203538230;

	t22 = (x1945^((x1946<<x1947)|x1948));

	if (t22 != 16256) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1989 = 0LLU;
	static int16_t x1990 = INT16_MAX;
	uint32_t x1991 = 10U;
	uint64_t x1992 = 1529410890161525LLU;

	t23 = (x1989^((x1990<<x1991)|x1992));

	if (t23 != 1529410909896053LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1993 = UINT8_MAX;
	static uint32_t x1994 = 54022943U;
	uint16_t x1995 = 22U;
	static int16_t x1996 = -1;

	t24 = (x1993^((x1994<<x1995)|x1996));

	if (t24 != 4294967040U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x2061 = 322U;
	volatile uint64_t x2062 = 629688LLU;
	uint16_t x2063 = 1U;
	volatile uint64_t x2064 = 53244LLU;
	volatile uint64_t t25 = 94879013598LLU;

	t25 = (x2061^((x2062<<x2063)|x2064));

	if (t25 != 1310398LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x2153 = 2577LLU;
	int64_t x2154 = 326471LL;
	uint8_t x2155 = 2U;
	uint64_t x2156 = UINT64_MAX;

	t26 = (x2153^((x2154<<x2155)|x2156));

	if (t26 != 18446744073709549038LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x2161 = -1;
	static volatile uint8_t x2162 = UINT8_MAX;
	int8_t x2163 = 0;
	static int32_t t27 = -31385;

	t27 = (x2161^((x2162<<x2163)|x2164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2201 = UINT16_MAX;
	uint16_t x2202 = 0U;
	int32_t x2203 = 5;
	static int8_t x2204 = INT8_MAX;

	t28 = (x2201^((x2202<<x2203)|x2204));

	if (t28 != 65408) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2241 = -1;
	int8_t x2242 = 0;
	uint8_t x2243 = 15U;
	int8_t x2244 = 12;
	volatile int32_t t29 = -317700;

	t29 = (x2241^((x2242<<x2243)|x2244));

	if (t29 != -13) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x2281 = 0U;
	uint16_t x2282 = UINT16_MAX;
	uint32_t x2283 = 1U;
	static int8_t x2284 = 1;
	volatile int32_t t30 = -4618277;

	t30 = (x2281^((x2282<<x2283)|x2284));

	if (t30 != 131071) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x2285 = INT64_MAX;
	uint32_t x2286 = UINT32_MAX;
	static uint8_t x2287 = 5U;
	uint8_t x2288 = 28U;
	volatile int64_t t31 = -1879747869LL;

	t31 = (x2285^((x2286<<x2287)|x2288));

	if (t31 != 9223372032559808515LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2437 = 160923214954013LLU;
	volatile uint64_t x2438 = 276966LLU;
	static uint8_t x2440 = 25U;
	static volatile uint64_t t32 = 1926500590172568LLU;

	t32 = (x2437^((x2438<<x2439)|x2440));

	if (t32 != 160923215202274LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2449 = -1;
	uint32_t x2450 = 12275U;
	static uint32_t x2451 = 12U;
	uint32_t x2452 = UINT32_MAX;

	t33 = (x2449^((x2450<<x2451)|x2452));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2469 = INT16_MAX;
	int8_t x2470 = INT8_MAX;
	int16_t x2471 = 10;
	int16_t x2472 = 55;
	static volatile int32_t t34 = -28426413;

	t34 = (x2469^((x2470<<x2471)|x2472));

	if (t34 != 99272) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2525 = INT16_MIN;
	int8_t x2526 = 1;
	int8_t x2527 = 9;
	static uint32_t t35 = 52652981U;

	t35 = (x2525^((x2526<<x2527)|x2528));

	if (t35 != 4294942302U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2557 = -1;
	uint8_t x2558 = 3U;
	uint16_t x2559 = 7U;
	int64_t x2560 = INT64_MIN;
	volatile int64_t t36 = 4578846266LL;

	t36 = (x2557^((x2558<<x2559)|x2560));

	if (t36 != 9223372036854775423LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2590 = 16U;
	int16_t x2591 = 1;
	static volatile uint16_t x2592 = 54U;
	volatile int32_t t37 = -386512;

	t37 = (x2589^((x2590<<x2591)|x2592));

	if (t37 != -32714) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2649 = INT16_MAX;
	int8_t x2651 = 0;
	uint16_t x2652 = 183U;

	t38 = (x2649^((x2650<<x2651)|x2652));

	if (t38 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2674 = 13596424;
	static int32_t t39 = -577882684;

	t39 = (x2673^((x2674<<x2675)|x2676));

	if (t39 != 870171373) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2801 = UINT64_MAX;
	static int8_t x2802 = INT8_MAX;
	int16_t x2803 = 1;
	int16_t x2804 = INT16_MAX;
	volatile uint64_t t40 = 1LLU;

	t40 = (x2801^((x2802<<x2803)|x2804));

	if (t40 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2849 = INT32_MIN;
	volatile uint32_t x2850 = 623672713U;
	static uint16_t x2851 = 3U;
	uint8_t x2852 = 2U;

	t41 = (x2849^((x2850<<x2851)|x2852));

	if (t41 != 2841898058U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2853 = INT64_MIN;
	uint16_t x2855 = 1U;
	volatile uint64_t t42 = 13LLU;

	t42 = (x2853^((x2854<<x2855)|x2856));

	if (t42 != 9223372036854775748LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2909 = INT8_MIN;
	static uint8_t x2910 = 8U;
	uint16_t x2911 = 1U;
	static volatile int32_t t43 = 2;

	t43 = (x2909^((x2910<<x2911)|x2912));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2973 = 64U;
	uint32_t x2974 = 4337500U;
	uint16_t x2975 = 3U;
	volatile uint32_t t44 = 82U;

	t44 = (x2973^((x2974<<x2975)|x2976));

	if (t44 != 179535530U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x3081 = -13;
	static uint8_t x3082 = UINT8_MAX;
	int8_t x3084 = INT8_MIN;
	int32_t t45 = 0;

	t45 = (x3081^((x3082<<x3083)|x3084));

	if (t45 != 11) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3182 = UINT16_MAX;
	int8_t x3183 = 7;
	volatile int32_t t46 = 33981850;

	t46 = (x3181^((x3182<<x3183)|x3184));

	if (t46 != -8355960) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x3293 = 7309U;
	volatile uint8_t x3294 = 15U;
	static int8_t x3296 = -1;

	t47 = (x3293^((x3294<<x3295)|x3296));

	if (t47 != -7310) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3373 = INT16_MIN;
	int32_t x3374 = INT32_MAX;
	volatile int32_t x3375 = 0;
	int64_t x3376 = -1646LL;

	t48 = (x3373^((x3374<<x3375)|x3376));

	if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x3449 = INT64_MIN;
	uint64_t x3450 = UINT64_MAX;
	int8_t x3451 = 7;
	uint16_t x3452 = 4009U;
	volatile uint64_t t49 = 490083529LLU;

	t49 = (x3449^((x3450<<x3451)|x3452));

	if (t49 != 9223372036854775721LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3509 = 620284LLU;
	int16_t x3512 = 1;
	uint64_t t50 = 6296855LLU;

	t50 = (x3509^((x3510<<x3511)|x3512));

	if (t50 != 620133LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3522 = UINT8_MAX;
	int8_t x3524 = INT8_MIN;
	volatile int32_t t51 = -4748;

	t51 = (x3521^((x3522<<x3523)|x3524));

	if (t51 != 327) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x3526 = 1U;
	int8_t x3527 = 19;
	static int32_t x3528 = -158945;
	static volatile uint64_t t52 = 24921889LLU;

	t52 = (x3525^((x3526<<x3527)|x3528));

	if (t52 != 18446744073553387737LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3565 = INT32_MIN;
	uint64_t x3566 = 225775LLU;
	int16_t x3567 = 1;
	int32_t x3568 = INT32_MIN;
	uint64_t t53 = 1LLU;

	t53 = (x3565^((x3566<<x3567)|x3568));

	if (t53 != 451550LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3573 = 4;
	volatile int16_t x3574 = INT16_MAX;
	int32_t t54 = -221;

	t54 = (x3573^((x3574<<x3575)|x3576));

	if (t54 != 268427270) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3582 = 950045986747015LLU;
	uint32_t x3583 = 18U;
	static int16_t x3584 = -24;

	t55 = (x3581^((x3582<<x3583)|x3584));

	if (t55 != 23LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x3598 = INT8_MAX;
	uint32_t x3599 = 1U;
	static int16_t x3600 = -1;
	static volatile int32_t t56 = 88364;

	t56 = (x3597^((x3598<<x3599)|x3600));

	if (t56 != -51) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x3601 = -1;
	int8_t x3602 = INT8_MAX;
	volatile int16_t x3603 = 0;
	int16_t x3604 = 7524;
	volatile int32_t t57 = 18102;

	t57 = (x3601^((x3602<<x3603)|x3604));

	if (t57 != -7552) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3626 = UINT32_MAX;
	int64_t x3628 = -12873160793LL;
	volatile int64_t t58 = -1424LL;

	t58 = (x3625^((x3626<<x3627)|x3628));

	if (t58 != 8589934719LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3633 = INT8_MIN;
	uint16_t x3634 = 477U;
	uint8_t x3635 = 6U;
	uint64_t t59 = 1400208LLU;

	t59 = (x3633^((x3634<<x3635)|x3636));

	if (t59 != 127LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x3733 = INT64_MIN;
	static uint32_t x3734 = 239860U;
	uint16_t x3735 = 3U;
	static int16_t x3736 = -1;
	int64_t t60 = 854569786924253512LL;

	t60 = (x3733^((x3734<<x3735)|x3736));

	if (t60 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3737 = INT64_MIN;
	int8_t x3738 = 1;
	static int64_t t61 = 16LL;

	t61 = (x3737^((x3738<<x3739)|x3740));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x3745 = INT8_MIN;
	uint8_t x3746 = UINT8_MAX;
	int16_t x3747 = 1;
	int8_t x3748 = INT8_MIN;

	t62 = (x3745^((x3746<<x3747)|x3748));

	if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3761 = 19206U;
	volatile int32_t x3762 = 103128840;
	uint8_t x3764 = 2U;
	volatile int32_t t63 = -14;

	t63 = (x3761^((x3762<<x3763)|x3764));

	if (t63 != 1650047876) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3834 = 79045459U;
	uint64_t x3836 = 381832540995114LLU;
	volatile uint64_t t64 = 11178LLU;

	t64 = (x3833^((x3834<<x3835)|x3836));

	if (t64 != 381833293285002LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3839 = 1U;
	volatile int16_t x3840 = -22;

	t65 = (x3837^((x3838<<x3839)|x3840));

	if (t65 != -255) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x3849 = UINT8_MAX;
	uint8_t x3850 = 16U;
	static int8_t x3851 = 4;
	static volatile uint64_t t66 = 10831LLU;

	t66 = (x3849^((x3850<<x3851)|x3852));

	if (t66 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3853 = UINT8_MAX;
	int32_t x3854 = 515429;
	uint32_t x3855 = 0U;
	volatile uint8_t x3856 = 45U;
	int32_t t67 = 6772162;

	t67 = (x3853^((x3854<<x3855)|x3856));

	if (t67 != 515474) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x3997 = UINT64_MAX;
	uint64_t x3998 = UINT64_MAX;
	int16_t x3999 = 51;
	int32_t x4000 = -1;

	t68 = (x3997^((x3998<<x3999)|x4000));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4090 = UINT64_MAX;
	static uint8_t x4092 = 1U;
	uint64_t t69 = 1LLU;

	t69 = (x4089^((x4090<<x4091)|x4092));

	if (t69 != 18446744073709037797LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4093 = INT64_MIN;
	uint8_t x4094 = 8U;
	uint16_t x4095 = 9U;
	int8_t x4096 = INT8_MAX;
	int64_t t70 = -51LL;

	t70 = (x4093^((x4094<<x4095)|x4096));

	if (t70 != -9223372036854771585LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4310 = 729U;
	uint8_t x4311 = 27U;
	int64_t x4312 = INT64_MIN;

	t71 = (x4309^((x4310<<x4311)|x4312));

	if (t71 != 9223372033767768064LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4329 = 1;
	volatile uint16_t x4332 = UINT16_MAX;
	int32_t t72 = -4;

	t72 = (x4329^((x4330<<x4331)|x4332));

	if (t72 != 65534) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4333 = INT64_MIN;
	volatile uint64_t x4334 = UINT64_MAX;
	int8_t x4335 = 8;
	static int64_t x4336 = 583624655373703777LL;
	uint64_t t73 = 8642796213376575855LLU;

	t73 = (x4333^((x4334<<x4335)|x4336));

	if (t73 != 9223372036854775649LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4357 = INT8_MIN;
	uint32_t x4358 = 727057106U;
	int8_t x4359 = 0;
	uint64_t x4360 = UINT64_MAX;
	volatile uint64_t t74 = 22355017LLU;

	t74 = (x4357^((x4358<<x4359)|x4360));

	if (t74 != 127LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4422 = 3U;
	volatile uint8_t x4423 = 0U;
	uint32_t x4424 = 483676U;
	uint32_t t75 = 179U;

	t75 = (x4421^((x4422<<x4423)|x4424));

	if (t75 != 4294483616U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x4617 = INT8_MAX;
	int64_t x4618 = INT64_MAX;
	int64_t t76 = -3121758LL;

	t76 = (x4617^((x4618<<x4619)|x4620));

	if (t76 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4623 = 4U;

	t77 = (x4621^((x4622<<x4623)|x4624));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x4681 = -1;
	int8_t x4683 = 3;
	int64_t t78 = -955182909916020843LL;

	t78 = (x4681^((x4682<<x4683)|x4684));

	if (t78 != 143130625LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x4685 = UINT32_MAX;
	static volatile uint64_t x4686 = 607843125744072171LLU;
	int16_t x4687 = 7;
	uint16_t x4688 = UINT16_MAX;
	volatile uint64_t t79 = 4251LLU;

	t79 = (x4685^((x4686<<x4687)|x4688));

	if (t79 != 4016943799808098304LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4689 = -1;
	static int16_t x4690 = INT16_MAX;
	volatile int32_t t80 = -108902;

	t80 = (x4689^((x4690<<x4691)|x4692));

	if (t80 != -65536) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4717 = -2;
	uint64_t x4718 = 2335381863436266LLU;
	static int32_t x4719 = 0;
	int16_t x4720 = INT16_MIN;
	uint64_t t81 = 58LLU;

	t81 = (x4717^((x4718<<x4719)|x4720));

	if (t81 != 28692LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4737 = 0;
	uint16_t x4739 = 1U;
	uint16_t x4740 = UINT16_MAX;
	volatile int32_t t82 = -3;

	t82 = (x4737^((x4738<<x4739)|x4740));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4753 = UINT8_MAX;
	int8_t x4754 = 0;
	static uint8_t x4756 = 95U;
	static volatile int32_t t83 = 954703;

	t83 = (x4753^((x4754<<x4755)|x4756));

	if (t83 != 160) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4837 = INT64_MIN;
	int16_t x4838 = 1;
	static volatile uint8_t x4839 = 0U;
	uint16_t x4840 = UINT16_MAX;
	int64_t t84 = 145015LL;

	t84 = (x4837^((x4838<<x4839)|x4840));

	if (t84 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4889 = INT32_MAX;
	uint32_t x4891 = 26U;
	int16_t x4892 = 38;
	uint32_t t85 = 30912U;

	t85 = (x4889^((x4890<<x4891)|x4892));

	if (t85 != 2483027929U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4949 = -2518;
	int16_t x4950 = 84;
	int8_t x4951 = 4;
	static int32_t x4952 = INT32_MIN;
	int32_t t86 = 3340;

	t86 = (x4949^((x4950<<x4951)|x4952));

	if (t86 != 2147480426) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4997 = 5168281U;
	static uint8_t x4998 = 3U;
	int8_t x4999 = 1;
	int8_t x5000 = INT8_MIN;
	uint32_t t87 = 33213U;

	t87 = (x4997^((x4998<<x4999)|x5000));

	if (t87 != 4289798943U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5029 = 3637U;
	volatile int8_t x5031 = 3;
	static uint32_t x5032 = 31810U;
	uint32_t t88 = 17389U;

	t88 = (x5029^((x5030<<x5031)|x5032));

	if (t88 != 29135U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5177 = 15407;
	uint16_t x5178 = 8159U;
	uint8_t x5179 = 1U;
	int8_t x5180 = INT8_MIN;

	t89 = (x5177^((x5178<<x5179)|x5180));

	if (t89 != -15471) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5190 = 9975LLU;
	int8_t x5191 = 48;
	uint64_t x5192 = 13546LLU;
	uint64_t t90 = 800694LLU;

	t90 = (x5189^((x5190<<x5191)|x5192));

	if (t90 != 2807712894836263701LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5197 = 0;
	volatile int8_t x5198 = 0;
	uint8_t x5199 = 21U;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x5197^((x5198<<x5199)|x5200));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x5301 = 1830631LLU;
	int64_t x5302 = 1LL;
	uint16_t x5303 = 6U;
	int16_t x5304 = -225;
	uint64_t t92 = 98LLU;

	t92 = (x5301^((x5302<<x5303)|x5304));

	if (t92 != 18446744073707721144LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5305 = -1142;
	int16_t x5306 = 1;
	static volatile int8_t x5307 = 0;
	int16_t x5308 = -2157;
	int32_t t93 = 52;

	t93 = (x5305^((x5306<<x5307)|x5308));

	if (t93 != 3097) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x5311 = 13U;
	uint16_t x5312 = 471U;
	static volatile uint32_t t94 = 189U;

	t94 = (x5309^((x5310<<x5311)|x5312));

	if (t94 != 443039274U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x5333 = 0U;
	int64_t x5334 = 120454LL;
	uint64_t x5335 = 25LLU;
	int64_t x5336 = -359983117616376LL;
	volatile int64_t t95 = 674LL;

	t95 = (x5333^((x5334<<x5335)|x5336));

	if (t95 != -356525534725368LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5385 = -1;
	uint32_t x5386 = 130854778U;
	int64_t x5388 = -1LL;
	int64_t t96 = -4157954683487918928LL;

	t96 = (x5385^((x5386<<x5387)|x5388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5478 = 0;
	volatile uint8_t x5479 = 1U;
	volatile int32_t t97 = 998895923;

	t97 = (x5477^((x5478<<x5479)|x5480));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5485 = 1059;
	volatile uint16_t x5486 = 2559U;
	static int32_t x5487 = 8;
	static uint64_t x5488 = UINT64_MAX;
	uint64_t t98 = 929LLU;

	t98 = (x5485^((x5486<<x5487)|x5488));

	if (t98 != 18446744073709550556LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5609 = -8726704411149158LL;
	uint8_t x5610 = 6U;
	int8_t x5611 = 1;
	volatile int64_t t99 = 140182309139190544LL;

	t99 = (x5609^((x5610<<x5611)|x5612));

	if (t99 != -8726704411149083LL) { NG(); } else { ; }
	
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

