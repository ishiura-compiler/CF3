#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x25 = INT8_MIN;
int32_t x26 = INT32_MIN;
int32_t x27 = 1802;
int64_t x121 = 7047977LL;
int8_t x301 = INT8_MAX;
volatile uint64_t t2 = 4391127604497LLU;
volatile int32_t x451 = INT32_MAX;
uint64_t t3 = 7155078LLU;
volatile int32_t t4 = -125404;
static uint32_t x580 = 11U;
int64_t x653 = INT64_MIN;
int32_t t7 = -2651332;
uint8_t x729 = UINT8_MAX;
volatile uint8_t x730 = 1U;
static uint64_t x790 = 4025358078527LLU;
static int16_t x791 = INT16_MAX;
volatile uint64_t t9 = 5506977736657063828LLU;
int32_t x864 = 0;
int16_t x939 = 15188;
static volatile int8_t x1105 = 0;
int16_t x1107 = INT16_MAX;
int32_t x1138 = -1;
uint32_t t13 = 58600575U;
static uint8_t x1460 = 12U;
uint32_t t17 = 17796638U;
int8_t x1513 = 0;
int8_t x1516 = 0;
int32_t t18 = 3;
int16_t x1685 = INT16_MIN;
static uint32_t x1693 = 2677583U;
uint32_t x1695 = 3308U;
volatile uint32_t t23 = 631403279U;
int64_t t25 = -1123693883654LL;
volatile uint8_t x2172 = 29U;
volatile uint64_t x2221 = 15356136646462178LLU;
uint64_t x2224 = 1LLU;
volatile int16_t x2229 = INT16_MIN;
int8_t x2232 = 3;
int64_t x2236 = 0LL;
uint32_t x2368 = 10U;
uint16_t x2395 = UINT16_MAX;
static uint8_t x2479 = 3U;
int32_t x2605 = 63;
int8_t x2606 = INT8_MAX;
uint8_t x2615 = 1U;
int16_t x2626 = 352;
int8_t x2641 = INT8_MAX;
int8_t x2644 = 1;
uint8_t x3113 = 1U;
int16_t x3115 = 12555;
volatile uint32_t x3116 = 2U;
uint64_t t44 = 458510LLU;
int8_t x3341 = -4;
int64_t x3381 = 217LL;
static int16_t x3382 = INT16_MIN;
uint8_t x3384 = 26U;
uint32_t x3438 = 247271U;
static uint8_t x3440 = 5U;
volatile uint32_t t47 = 168U;
int32_t x3515 = 119141;
int8_t x3581 = INT8_MAX;
int16_t x3582 = INT16_MIN;
static uint32_t x3583 = 13U;
volatile int8_t x3584 = 1;
uint8_t x3593 = UINT8_MAX;
uint16_t x3595 = 178U;
uint16_t x3703 = 3U;
static volatile uint32_t t52 = 7U;
int64_t x3893 = -7145853522LL;
static volatile int64_t t54 = -7LL;
static volatile int8_t x3920 = 0;
volatile int32_t t55 = -3187;
uint64_t t56 = 37346LLU;
volatile int16_t x3980 = 12;
uint8_t x4032 = 7U;
uint8_t x4240 = 8U;
int64_t t59 = -1230377982018577LL;
uint8_t x4255 = UINT8_MAX;
uint32_t x4308 = 0U;
static uint64_t x4366 = 49LLU;
static uint16_t x4367 = UINT16_MAX;
volatile int64_t x4418 = INT64_MIN;
volatile uint64_t t64 = 996LLU;
int32_t x4614 = 7977;
volatile int32_t t65 = -7414562;
static volatile uint32_t x4676 = 2U;
uint16_t x4795 = 103U;
int8_t x4796 = 0;
int8_t x5008 = 7;
int16_t x5009 = INT16_MIN;
uint16_t x5011 = 0U;
volatile int16_t x5018 = INT16_MIN;
int64_t x5020 = 7LL;
uint64_t t71 = 606875607727LLU;
volatile int32_t t72 = 367;
int32_t x5097 = 3771590;
uint8_t x5133 = 0U;
static int32_t t75 = -879820741;
static uint8_t x5208 = 5U;
volatile int16_t x5282 = INT16_MIN;
volatile int8_t x5283 = 0;
static uint8_t x5341 = 1U;
int32_t t79 = -1;
volatile int16_t x5686 = INT16_MIN;
static uint32_t t81 = 12841U;
uint8_t x5711 = 2U;
volatile uint32_t x5712 = 0U;
static uint64_t t82 = 23686LLU;
int16_t x5987 = INT16_MAX;
uint8_t x5988 = 12U;
volatile int16_t x6005 = -1;
uint64_t x6007 = UINT64_MAX;
static int32_t x6205 = -1;
int32_t x6207 = 3;
static volatile uint8_t x6301 = UINT8_MAX;
uint64_t x6302 = 5712195694916348306LLU;
uint64_t x6398 = UINT64_MAX;
volatile uint64_t t89 = 16LLU;
int64_t x6430 = 1247081806574LL;
int8_t x6435 = 0;
int16_t x6528 = 1;
int32_t x6649 = -11238978;
uint64_t t94 = 62064289068538LLU;
static int8_t x6981 = INT8_MIN;
int16_t x6982 = INT16_MIN;
static volatile uint64_t t98 = 2514032514330062645LLU;


void f0(void) {
	uint8_t x28 = 26U;
	int32_t t0 = -9953663;

	t0 = ((x25-x26)*(x27>>x28));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x122 = INT16_MIN;
	int32_t x123 = 1;
	int8_t x124 = 1;
	volatile int64_t t1 = -383957970959LL;

	t1 = ((x121-x122)*(x123>>x124));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x302 = INT8_MIN;
	uint64_t x303 = 3772879684406584556LLU;
	uint16_t x304 = 0U;

	t2 = ((x301-x302)*(x303>>x304));

	if (t2 != 2853627690782377748LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x449 = UINT64_MAX;
	static int32_t x450 = -1;
	int64_t x452 = 0LL;

	t3 = ((x449-x450)*(x451>>x452));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x545 = INT32_MAX;
	uint16_t x546 = 25U;
	volatile int8_t x547 = 0;
	int32_t x548 = 5;

	t4 = ((x545-x546)*(x547>>x548));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x577 = 41U;
	int8_t x578 = -1;
	static uint8_t x579 = UINT8_MAX;
	uint32_t t5 = 16U;

	t5 = ((x577-x578)*(x579>>x580));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x654 = -42;
	static int8_t x655 = 1;
	uint8_t x656 = 1U;
	int64_t t6 = -5158342791386LL;

	t6 = ((x653-x654)*(x655>>x656));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x697 = INT16_MAX;
	int32_t x698 = -105944;
	volatile uint8_t x699 = UINT8_MAX;
	int8_t x700 = 0;

	t7 = ((x697-x698)*(x699>>x700));

	if (t7 != 35371305) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x731 = 579;
	static int8_t x732 = 5;
	int32_t t8 = 59655;

	t8 = ((x729-x730)*(x731>>x732));

	if (t8 != 4572) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x789 = 474111LLU;
	static int32_t x792 = 0;

	t9 = ((x789-x790)*(x791>>x792));

	if (t9 != 18314845181085652544LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x861 = 4877268678320781LL;
	uint32_t x862 = 7358094U;
	uint8_t x863 = 39U;
	static int64_t t10 = -279198452259146386LL;

	t10 = ((x861-x862)*(x863>>x864));

	if (t10 != 190213478167544793LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x937 = 41U;
	int16_t x938 = INT16_MIN;
	int8_t x940 = 1;
	int32_t t11 = -125978;

	t11 = ((x937-x938)*(x939>>x940));

	if (t11 != 249151546) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x1106 = -1;
	int8_t x1108 = 13;
	static volatile int32_t t12 = -43;

	t12 = ((x1105-x1106)*(x1107>>x1108));

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1137 = INT8_MAX;
	uint32_t x1139 = UINT32_MAX;
	uint8_t x1140 = 2U;

	t13 = ((x1137-x1138)*(x1139>>x1140));

	if (t13 != 4294967168U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1213 = INT8_MAX;
	uint64_t x1214 = 1951064LLU;
	uint64_t x1215 = 7188955644771276LLU;
	uint8_t x1216 = 1U;
	static volatile uint64_t t14 = 4434515042369835308LLU;

	t14 = ((x1213-x1214)*(x1215>>x1216));

	if (t14 != 15609712711769722890LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1217 = 706400LLU;
	int32_t x1218 = INT32_MIN;
	uint64_t x1219 = 3596236363LLU;
	int64_t x1220 = 0LL;
	volatile uint64_t t15 = 4LLU;

	t15 = ((x1217-x1218)*(x1219>>x1220));

	if (t15 != 7725399165252315424LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x1457 = 1014U;
	uint32_t x1458 = 306836U;
	uint8_t x1459 = 81U;
	volatile uint32_t t16 = 427U;

	t16 = ((x1457-x1458)*(x1459>>x1460));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1461 = 47;
	static uint32_t x1462 = UINT32_MAX;
	static int8_t x1463 = INT8_MAX;
	static volatile uint8_t x1464 = 2U;

	t17 = ((x1461-x1462)*(x1463>>x1464));

	if (t17 != 1488U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1514 = 0;
	static uint16_t x1515 = 20961U;

	t18 = ((x1513-x1514)*(x1515>>x1516));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1686 = -71932110077196720LL;
	uint64_t x1687 = 20914336287501298LLU;
	volatile uint64_t x1688 = 0LLU;
	uint64_t t19 = 1051097066916512281LLU;

	t19 = ((x1685-x1686)*(x1687>>x1688));

	if (t19 != 15493731656372230240LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1694 = -1;
	int8_t x1696 = 2;
	uint32_t t20 = 63U;

	t20 = ((x1693-x1694)*(x1695>>x1696));

	if (t20 != 2214361968U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1857 = INT32_MAX;
	static int8_t x1858 = 45;
	uint64_t x1859 = 1634045430LLU;
	static uint8_t x1860 = 1U;
	static volatile uint64_t t21 = 20LLU;

	t21 = ((x1857-x1858)*(x1859>>x1860));

	if (t21 != 1754542882924019430LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1881 = 6;
	volatile uint16_t x1882 = 622U;
	uint8_t x1883 = 8U;
	int16_t x1884 = 0;
	volatile int32_t t22 = -484101862;

	t22 = ((x1881-x1882)*(x1883>>x1884));

	if (t22 != -4928) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1957 = 420653;
	static volatile int8_t x1958 = 19;
	volatile uint32_t x1959 = 1070845733U;
	int16_t x1960 = 6;

	t23 = ((x1957-x1958)*(x1959>>x1960));

	if (t23 != 2876514328U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1985 = 0LL;
	uint32_t x1986 = 1U;
	int64_t x1987 = 141728494099424759LL;
	int16_t x1988 = 1;
	int64_t t24 = -348301052LL;

	t24 = ((x1985-x1986)*(x1987>>x1988));

	if (t24 != -70864247049712379LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x2085 = -32593084983421LL;
	uint32_t x2086 = UINT32_MAX;
	volatile int8_t x2087 = 4;
	uint8_t x2088 = 7U;

	t25 = ((x2085-x2086)*(x2087>>x2088));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2169 = INT32_MIN;
	static volatile int64_t x2170 = -257655169LL;
	int64_t x2171 = 196LL;
	int64_t t26 = -104LL;

	t26 = ((x2169-x2170)*(x2171>>x2172));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2222 = -49930671953221LL;
	static int32_t x2223 = INT32_MAX;
	uint64_t t27 = 19882LLU;

	t27 = ((x2221-x2222)*(x2223>>x2224));

	if (t27 != 2612892957872332761LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2230 = 215524969245LL;
	int16_t x2231 = 817;
	static int64_t t28 = -275434847845666LL;

	t28 = ((x2229-x2230)*(x2231>>x2232));

	if (t28 != -21983550205326LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x2233 = 45845U;
	uint64_t x2234 = 15540601LLU;
	uint32_t x2235 = 54860U;
	uint64_t t29 = 133401074553731409LLU;

	t29 = ((x2233-x2234)*(x2235>>x2236));

	if (t29 != 18446743223667237456LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2273 = UINT64_MAX;
	uint32_t x2274 = 65203523U;
	uint64_t x2275 = 24195974LLU;
	static volatile int8_t x2276 = 0;
	volatile uint64_t t30 = 249LLU;

	t30 = ((x2273-x2274)*(x2275>>x2276));

	if (t30 != 18445166410938139240LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2365 = 0;
	static volatile int16_t x2366 = -1;
	uint32_t x2367 = UINT32_MAX;
	uint32_t t31 = 110793361U;

	t31 = ((x2365-x2366)*(x2367>>x2368));

	if (t31 != 4194303U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x2393 = -7;
	uint8_t x2394 = 6U;
	uint8_t x2396 = 2U;
	volatile int32_t t32 = 8731;

	t32 = ((x2393-x2394)*(x2395>>x2396));

	if (t32 != -212979) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2477 = INT16_MIN;
	static int32_t x2478 = -176181542;
	static int16_t x2480 = 0;
	int32_t t33 = 91189;

	t33 = ((x2477-x2478)*(x2479>>x2480));

	if (t33 != 528446322) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2597 = UINT64_MAX;
	uint16_t x2598 = 3200U;
	volatile int64_t x2599 = INT64_MAX;
	int8_t x2600 = 0;
	static volatile uint64_t t34 = 242612316504655589LLU;

	t34 = ((x2597-x2598)*(x2599>>x2600));

	if (t34 != 9223372036854779009LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2607 = 872;
	static volatile int16_t x2608 = 21;
	volatile int32_t t35 = -110953;

	t35 = ((x2605-x2606)*(x2607>>x2608));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2613 = INT8_MIN;
	static uint64_t x2614 = 8LLU;
	static int8_t x2616 = 14;
	uint64_t t36 = 12426903546LLU;

	t36 = ((x2613-x2614)*(x2615>>x2616));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2625 = 18762353U;
	int32_t x2627 = 85383825;
	volatile uint16_t x2628 = 1U;
	volatile uint32_t t37 = 3447U;

	t37 = ((x2625-x2626)*(x2627>>x2628));

	if (t37 != 64735688U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2642 = INT16_MIN;
	volatile uint16_t x2643 = UINT16_MAX;
	static volatile int32_t t38 = -12758;

	t38 = ((x2641-x2642)*(x2643>>x2644));

	if (t38 != 1077870465) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2673 = 17630036U;
	int64_t x2674 = 53LL;
	uint64_t x2675 = 224827201683652118LLU;
	uint8_t x2676 = 1U;
	uint64_t t39 = 3346637680927174914LLU;

	t39 = ((x2673-x2674)*(x2675>>x2676));

	if (t39 != 5475507119721710421LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2777 = UINT16_MAX;
	static int8_t x2778 = INT8_MIN;
	static uint16_t x2779 = 214U;
	uint8_t x2780 = 7U;
	int32_t t40 = -1;

	t40 = ((x2777-x2778)*(x2779>>x2780));

	if (t40 != 65663) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2941 = INT32_MAX;
	uint32_t x2942 = UINT32_MAX;
	volatile uint32_t x2943 = UINT32_MAX;
	int8_t x2944 = 4;
	uint32_t t41 = 17U;

	t41 = ((x2941-x2942)*(x2943>>x2944));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3114 = -1;
	volatile int32_t t42 = 5068235;

	t42 = ((x3113-x3114)*(x3115>>x3116));

	if (t42 != 6276) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x3129 = UINT8_MAX;
	int8_t x3130 = 0;
	uint8_t x3131 = 0U;
	int16_t x3132 = 10;
	static volatile int32_t t43 = 6727121;

	t43 = ((x3129-x3130)*(x3131>>x3132));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x3221 = INT64_MIN;
	static uint64_t x3222 = 966952615LLU;
	int32_t x3223 = 619161;
	static uint32_t x3224 = 21U;

	t44 = ((x3221-x3222)*(x3223>>x3224));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x3342 = INT8_MIN;
	uint32_t x3343 = 3383U;
	static uint8_t x3344 = 1U;
	uint32_t t45 = 2395197U;

	t45 = ((x3341-x3342)*(x3343>>x3344));

	if (t45 != 209684U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3383 = UINT16_MAX;
	volatile int64_t t46 = -727761LL;

	t46 = ((x3381-x3382)*(x3383>>x3384));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3437 = 2235161U;
	uint8_t x3439 = 13U;

	t47 = ((x3437-x3438)*(x3439>>x3440));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3513 = INT8_MIN;
	int16_t x3514 = -1469;
	uint8_t x3516 = 1U;
	int32_t t48 = 402423355;

	t48 = ((x3513-x3514)*(x3515>>x3516));

	if (t48 != 79883370) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t t49 = 7312U;

	t49 = ((x3581-x3582)*(x3583>>x3584));

	if (t49 != 197370U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3594 = INT16_MIN;
	static uint8_t x3596 = 22U;
	int32_t t50 = 982120;

	t50 = ((x3593-x3594)*(x3595>>x3596));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3661 = INT8_MIN;
	static uint16_t x3662 = 35U;
	int16_t x3663 = INT16_MAX;
	uint16_t x3664 = 0U;
	volatile int32_t t51 = -1;

	t51 = ((x3661-x3662)*(x3663>>x3664));

	if (t51 != -5341021) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x3701 = 1420423U;
	uint8_t x3702 = UINT8_MAX;
	volatile uint16_t x3704 = 1U;

	t52 = ((x3701-x3702)*(x3703>>x3704));

	if (t52 != 1420168U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3813 = -4;
	volatile int64_t x3814 = -1LL;
	static int32_t x3815 = INT32_MAX;
	uint8_t x3816 = 1U;
	volatile int64_t t53 = -462LL;

	t53 = ((x3813-x3814)*(x3815>>x3816));

	if (t53 != -3221225469LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3894 = 5;
	uint32_t x3895 = 57U;
	uint8_t x3896 = 1U;

	t54 = ((x3893-x3894)*(x3895>>x3896));

	if (t54 != -200083898756LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x3917 = INT16_MIN;
	int32_t x3918 = -1;
	uint16_t x3919 = UINT16_MAX;

	t55 = ((x3917-x3918)*(x3919>>x3920));

	if (t55 != -2147385345) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3929 = INT32_MIN;
	uint64_t x3930 = 0LLU;
	static uint8_t x3931 = 2U;
	static uint16_t x3932 = 5U;

	t56 = ((x3929-x3930)*(x3931>>x3932));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3977 = INT16_MIN;
	int16_t x3978 = -1;
	uint16_t x3979 = UINT16_MAX;
	int32_t t57 = 193426321;

	t57 = ((x3977-x3978)*(x3979>>x3980));

	if (t57 != -491505) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4029 = 0U;
	volatile uint32_t x4030 = 2U;
	uint64_t x4031 = 1LLU;
	volatile uint64_t t58 = 4676128009247773LLU;

	t58 = ((x4029-x4030)*(x4031>>x4032));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4237 = 1LL;
	int32_t x4238 = -1;
	uint8_t x4239 = 0U;

	t59 = ((x4237-x4238)*(x4239>>x4240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4241 = 1771;
	int64_t x4242 = -463232438LL;
	uint64_t x4243 = 1330685390918064446LLU;
	uint8_t x4244 = 3U;
	uint64_t t60 = 441175892092800217LLU;

	t60 = ((x4241-x4242)*(x4243>>x4244));

	if (t60 != 10720689120421894023LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4253 = INT16_MIN;
	volatile int16_t x4254 = INT16_MAX;
	static uint16_t x4256 = 1U;
	int32_t t61 = -2875;

	t61 = ((x4253-x4254)*(x4255>>x4256));

	if (t61 != -8322945) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4305 = INT8_MAX;
	int16_t x4306 = INT16_MIN;
	int8_t x4307 = 7;
	volatile int32_t t62 = 240886517;

	t62 = ((x4305-x4306)*(x4307>>x4308));

	if (t62 != 230265) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x4365 = -1;
	uint8_t x4368 = 3U;
	volatile uint64_t t63 = 2134841938759816056LLU;

	t63 = ((x4365-x4366)*(x4367>>x4368));

	if (t63 != 18446744073709142066LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4417 = INT64_MIN;
	volatile uint64_t x4419 = UINT64_MAX;
	static volatile uint8_t x4420 = 6U;

	t64 = ((x4417-x4418)*(x4419>>x4420));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4613 = INT16_MIN;
	int8_t x4615 = INT8_MAX;
	uint8_t x4616 = 5U;

	t65 = ((x4613-x4614)*(x4615>>x4616));

	if (t65 != -122235) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4673 = 24LLU;
	int32_t x4674 = 61769;
	uint8_t x4675 = 1U;
	uint64_t t66 = 35720LLU;

	t66 = ((x4673-x4674)*(x4675>>x4676));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x4677 = UINT32_MAX;
	int16_t x4678 = -1;
	uint64_t x4679 = 93779579636325LLU;
	int8_t x4680 = 15;
	volatile uint64_t t67 = 2092325941761203LLU;

	t67 = ((x4677-x4678)*(x4679>>x4680));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4793 = 4U;
	static volatile uint8_t x4794 = UINT8_MAX;
	int32_t t68 = 192;

	t68 = ((x4793-x4794)*(x4795>>x4796));

	if (t68 != -25853) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x5005 = INT32_MIN;
	volatile int32_t x5006 = INT32_MIN;
	uint32_t x5007 = 2U;
	static uint32_t t69 = 145U;

	t69 = ((x5005-x5006)*(x5007>>x5008));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x5010 = -1LL;
	uint8_t x5012 = 6U;
	static volatile int64_t t70 = -2214LL;

	t70 = ((x5009-x5010)*(x5011>>x5012));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5017 = INT8_MIN;
	volatile uint64_t x5019 = UINT64_MAX;

	t71 = ((x5017-x5018)*(x5019>>x5020));

	if (t71 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x5077 = -1;
	int32_t x5078 = -538;
	static uint8_t x5079 = 7U;
	static volatile uint8_t x5080 = 5U;

	t72 = ((x5077-x5078)*(x5079>>x5080));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5098 = UINT64_MAX;
	uint32_t x5099 = 3847807U;
	volatile uint64_t x5100 = 0LLU;
	volatile uint64_t t73 = 13LLU;

	t73 = ((x5097-x5098)*(x5099>>x5100));

	if (t73 != 14512354250937LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5121 = 1;
	int32_t x5122 = 3738592;
	uint8_t x5123 = 0U;
	uint8_t x5124 = 5U;
	static int32_t t74 = 6549;

	t74 = ((x5121-x5122)*(x5123>>x5124));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x5134 = -1;
	uint8_t x5135 = UINT8_MAX;
	static volatile int32_t x5136 = 1;

	t75 = ((x5133-x5134)*(x5135>>x5136));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x5181 = 14408U;
	uint8_t x5182 = 7U;
	uint16_t x5183 = UINT16_MAX;
	volatile int8_t x5184 = 0;
	uint32_t t76 = 157944258U;

	t76 = ((x5181-x5182)*(x5183>>x5184));

	if (t76 != 943769535U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5205 = UINT64_MAX;
	int8_t x5206 = INT8_MIN;
	int64_t x5207 = 3045933061691764762LL;
	uint64_t t77 = 414662750005LLU;

	t77 = ((x5205-x5206)*(x5207>>x5208));

	if (t77 != 12088546838589191296LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5281 = -5;
	uint16_t x5284 = 9U;
	int32_t t78 = -129810822;

	t78 = ((x5281-x5282)*(x5283>>x5284));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x5342 = 95087393;
	int32_t x5343 = 1610;
	int64_t x5344 = 9LL;

	t79 = ((x5341-x5342)*(x5343>>x5344));

	if (t79 != -285262176) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5345 = INT64_MIN;
	int16_t x5346 = INT16_MIN;
	uint8_t x5347 = 29U;
	uint8_t x5348 = 6U;
	volatile int64_t t80 = -544393129918LL;

	t80 = ((x5345-x5346)*(x5347>>x5348));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x5685 = INT8_MIN;
	uint32_t x5687 = 3139309U;
	uint16_t x5688 = 1U;

	t81 = ((x5685-x5686)*(x5687>>x5688));

	if (t81 != 3988866304U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5709 = 121342428LLU;
	int32_t x5710 = -409;

	t82 = ((x5709-x5710)*(x5711>>x5712));

	if (t82 != 242685674LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x5881 = UINT32_MAX;
	static uint32_t x5882 = 10U;
	uint64_t x5883 = UINT64_MAX;
	uint8_t x5884 = 0U;
	uint64_t t83 = 5406928690357576LLU;

	t83 = ((x5881-x5882)*(x5883>>x5884));

	if (t83 != 18446744069414584331LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5985 = UINT8_MAX;
	uint8_t x5986 = 2U;
	static int32_t t84 = 755;

	t84 = ((x5985-x5986)*(x5987>>x5988));

	if (t84 != 1771) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x6006 = INT8_MIN;
	uint8_t x6008 = 1U;
	uint64_t t85 = 1961538785524216647LLU;

	t85 = ((x6005-x6006)*(x6007>>x6008));

	if (t85 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x6149 = -94661089105LL;
	static uint64_t x6150 = 1890LLU;
	int32_t x6151 = 27490;
	volatile uint8_t x6152 = 11U;
	volatile uint64_t t86 = 1249095450939LLU;

	t86 = ((x6149-x6150)*(x6151>>x6152));

	if (t86 != 18446742843115368681LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x6206 = 11097;
	static uint32_t x6208 = 2U;
	int32_t t87 = 861378;

	t87 = ((x6205-x6206)*(x6207>>x6208));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x6303 = 3990241899LL;
	volatile int8_t x6304 = 1;
	uint64_t t88 = 31283689LLU;

	t88 = ((x6301-x6302)*(x6303>>x6304));

	if (t88 != 11444584947434038929LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x6397 = 5U;
	uint32_t x6399 = UINT32_MAX;
	int16_t x6400 = 1;

	t89 = ((x6397-x6398)*(x6399>>x6400));

	if (t89 != 12884901882LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x6429 = 204062LLU;
	static volatile uint16_t x6431 = 8573U;
	int8_t x6432 = 10;
	static volatile uint64_t t90 = 37675860119LLU;

	t90 = ((x6429-x6430)*(x6431>>x6432));

	if (t90 != 18446734097056731520LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6433 = INT32_MIN;
	static int64_t x6434 = INT64_MIN;
	volatile uint16_t x6436 = 14U;
	volatile int64_t t91 = -869689LL;

	t91 = ((x6433-x6434)*(x6435>>x6436));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6525 = INT8_MIN;
	static int16_t x6526 = -1018;
	static uint16_t x6527 = 353U;
	int32_t t92 = 1330499;

	t92 = ((x6525-x6526)*(x6527>>x6528));

	if (t92 != 156640) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6650 = 12134U;
	uint16_t x6651 = 127U;
	static uint8_t x6652 = 8U;
	uint32_t t93 = 3967U;

	t93 = ((x6649-x6650)*(x6651>>x6652));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x6677 = 10;
	static int16_t x6678 = INT16_MIN;
	static uint64_t x6679 = 4719071964511LLU;
	uint16_t x6680 = 7U;

	t94 = ((x6677-x6678)*(x6679>>x6680));

	if (t94 != 1208451100387716LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6717 = UINT16_MAX;
	uint64_t x6718 = 1501LLU;
	volatile int16_t x6719 = INT16_MAX;
	uint32_t x6720 = 30U;
	static uint64_t t95 = 828276034221240790LLU;

	t95 = ((x6717-x6718)*(x6719>>x6720));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x6901 = INT8_MIN;
	static int8_t x6902 = INT8_MIN;
	static uint64_t x6903 = 676943187114LLU;
	int8_t x6904 = 0;
	uint64_t t96 = 278147959534161693LLU;

	t96 = ((x6901-x6902)*(x6903>>x6904));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6983 = 8U;
	uint8_t x6984 = 25U;
	int32_t t97 = 221;

	t97 = ((x6981-x6982)*(x6983>>x6984));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x7009 = INT32_MIN;
	int64_t x7010 = -1LL;
	volatile uint64_t x7011 = UINT64_MAX;
	uint8_t x7012 = 1U;

	t98 = ((x7009-x7010)*(x7011>>x7012));

	if (t98 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x7097 = -1;
	int8_t x7098 = INT8_MIN;
	uint32_t x7099 = 419U;
	uint8_t x7100 = 3U;
	uint32_t t99 = 3171U;

	t99 = ((x7097-x7098)*(x7099>>x7100));

	if (t99 != 6604U) { NG(); } else { ; }
	
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

