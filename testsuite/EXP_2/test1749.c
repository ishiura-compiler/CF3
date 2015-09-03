#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x83 = 4;
uint16_t x110 = UINT16_MAX;
int64_t x138 = INT64_MIN;
volatile int64_t t2 = -50224128964460771LL;
int64_t t3 = 28LL;
volatile int16_t x245 = -145;
static uint64_t x374 = UINT64_MAX;
int8_t x386 = -1;
int8_t x388 = 25;
uint8_t x400 = 58U;
int32_t x405 = -14414;
static uint64_t x430 = UINT64_MAX;
uint16_t x486 = UINT16_MAX;
static int16_t x631 = INT16_MIN;
int16_t x632 = 18;
uint64_t x741 = 1019966768310148LLU;
uint64_t x743 = 45928154702LLU;
uint8_t x797 = UINT8_MAX;
volatile uint8_t x800 = 5U;
volatile int64_t x825 = INT64_MIN;
static uint16_t x893 = 11U;
int64_t t21 = -2525LL;
volatile uint8_t x1056 = 24U;
int64_t x1070 = 7946LL;
int8_t x1071 = INT8_MAX;
volatile int64_t t24 = 2LL;
int8_t x1168 = 3;
uint16_t x1195 = 11382U;
int16_t x1300 = 1;
volatile uint64_t t27 = 36LLU;
int64_t x1306 = INT64_MAX;
int8_t x1308 = 1;
int8_t x1317 = -1;
int8_t x1320 = 0;
volatile uint32_t t29 = 237635U;
volatile uint64_t x1429 = 841736461020LLU;
static volatile uint8_t x1508 = 5U;
static uint8_t x1527 = UINT8_MAX;
int32_t x1553 = INT32_MAX;
int16_t x1587 = INT16_MIN;
static volatile uint32_t x1658 = UINT32_MAX;
static volatile int64_t t36 = 92477045643921169LL;
static uint8_t x1676 = 28U;
volatile int8_t x1714 = INT8_MIN;
uint8_t x1757 = 9U;
int16_t x1758 = 17;
int32_t t41 = 9;
static uint8_t x1984 = 1U;
int8_t x2014 = 12;
volatile uint8_t x2015 = 63U;
int16_t x2016 = 24;
int64_t x2151 = -1LL;
volatile uint16_t x2152 = 47U;
static int64_t x2209 = 698004913657065LL;
uint16_t x2275 = 388U;
volatile int32_t t54 = 24630043;
uint32_t x2281 = 41U;
static volatile uint32_t x2283 = UINT32_MAX;
uint16_t x2515 = 28U;
volatile int16_t x2625 = INT16_MAX;
int8_t x2702 = INT8_MIN;
uint32_t t61 = 75694730U;
int32_t x2744 = 8;
uint16_t x2798 = UINT16_MAX;
int8_t x2799 = INT8_MIN;
int32_t t65 = -65788;
static uint32_t x2811 = 681998U;
static int8_t x2887 = -1;
uint32_t x2910 = 40U;
uint32_t x2912 = 4U;
int8_t x2955 = -1;
static volatile int32_t x2966 = -157;
volatile uint8_t x2968 = 28U;
volatile int32_t t71 = -3156387;
static int16_t x3143 = INT16_MAX;
volatile int64_t x3214 = INT64_MAX;
int8_t x3216 = 17;
static uint32_t x3257 = 40765U;
volatile int32_t x3331 = 6;
volatile int64_t t77 = -1LL;
uint8_t x3333 = 0U;
volatile int64_t t78 = -89LL;
int64_t x3377 = 34236440468LL;
volatile int8_t x3486 = -1;
int64_t x3487 = INT64_MIN;
int16_t x3488 = 1;
static int64_t t80 = -10005753195105287LL;
static int16_t x3522 = -1;
volatile uint64_t x3524 = 0LLU;
uint16_t x3690 = 1657U;
int64_t x3835 = INT64_MAX;
static int32_t x3874 = 61537286;
uint16_t x3876 = 7U;
int32_t x3942 = 111;
uint32_t x3943 = 498U;
static uint16_t x4007 = 9013U;
uint16_t x4008 = 41U;
uint64_t x4182 = UINT64_MAX;
int32_t x4183 = -1;
volatile uint64_t t93 = 82031709056LLU;
uint32_t x4329 = UINT32_MAX;
static int16_t x4425 = INT16_MAX;
int64_t x4478 = INT64_MIN;
int8_t x4480 = 16;
volatile int64_t t96 = -520622055053966666LL;
static int8_t x4506 = INT8_MAX;
volatile uint32_t x4507 = 1587309U;
int8_t x4524 = 4;
static uint64_t t98 = 3362039890725243LLU;
int8_t x4570 = 18;


void f0(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = 15468;
	int8_t x84 = 27;
	static int32_t t0 = 21436429;

	t0 = ((x81%(x82&x83))>>x84);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x109 = UINT8_MAX;
	volatile uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 1U;
	volatile int32_t t1 = -32033;

	t1 = ((x109%(x110&x111))>>x112);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x137 = INT16_MAX;
	int16_t x139 = -835;
	int16_t x140 = 8;

	t2 = ((x137%(x138&x139))>>x140);

	if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x185 = 262967864569968546LL;
	int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	volatile uint16_t x188 = 40U;

	t3 = ((x185%(x186&x187))>>x188);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x246 = 1586686567LLU;
	uint64_t x247 = UINT64_MAX;
	static int16_t x248 = 28;
	uint64_t t4 = 1684638711LLU;

	t4 = ((x245%(x246&x247))>>x248);

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x273 = 32353U;
	static int64_t x274 = -1LL;
	static volatile int64_t x275 = -1LL;
	volatile int16_t x276 = 45;
	volatile int64_t t5 = 772398802LL;

	t5 = ((x273%(x274&x275))>>x276);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x373 = 251LL;
	static uint8_t x375 = UINT8_MAX;
	uint8_t x376 = 4U;
	volatile uint64_t t6 = 76253890LLU;

	t6 = ((x373%(x374&x375))>>x376);

	if (t6 != 15LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x385 = 10605196LLU;
	int64_t x387 = -1LL;
	uint64_t t7 = 7338964291159LLU;

	t7 = ((x385%(x386&x387))>>x388);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x397 = 1U;
	uint64_t x398 = 208147633171597LLU;
	int8_t x399 = INT8_MAX;
	volatile uint64_t t8 = 3239LLU;

	t8 = ((x397%(x398&x399))>>x400);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x406 = 2152102U;
	static volatile uint64_t x407 = UINT64_MAX;
	static volatile int8_t x408 = 32;
	volatile uint64_t t9 = 33740513040605LLU;

	t9 = ((x405%(x406&x407))>>x408);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x429 = INT32_MIN;
	static uint64_t x431 = 17672734984LLU;
	static uint8_t x432 = 9U;
	uint64_t t10 = 4LLU;

	t10 = ((x429%(x430&x431))>>x432);

	if (t10 != 13807483LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x473 = UINT8_MAX;
	static uint16_t x474 = 22U;
	static uint64_t x475 = UINT64_MAX;
	uint16_t x476 = 25U;
	volatile uint64_t t11 = 2491425126674930295LLU;

	t11 = ((x473%(x474&x475))>>x476);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x485 = 6059U;
	int8_t x487 = -1;
	uint64_t x488 = 0LLU;
	volatile int32_t t12 = 1513;

	t12 = ((x485%(x486&x487))>>x488);

	if (t12 != 6059) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x625 = 29001U;
	int8_t x626 = -15;
	uint16_t x627 = 22763U;
	int32_t x628 = 1;
	volatile int32_t t13 = -12347;

	t13 = ((x625%(x626&x627))>>x628);

	if (t13 != 3124) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x629 = INT32_MAX;
	int32_t x630 = INT32_MAX;
	static volatile int32_t t14 = 115231;

	t14 = ((x629%(x630&x631))>>x632);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x633 = INT32_MAX;
	static volatile int32_t x634 = -300292945;
	int8_t x635 = -1;
	int8_t x636 = 6;
	int32_t t15 = -55331;

	t15 = ((x633%(x634&x635))>>x636);

	if (t15 != 709891) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x742 = INT16_MAX;
	uint8_t x744 = 3U;
	uint64_t t16 = 17988987LLU;

	t16 = ((x741%(x742&x743))>>x744);

	if (t16 != 60LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x798 = 51750285U;
	volatile int8_t x799 = INT8_MAX;
	volatile uint32_t t17 = 8027887U;

	t17 = ((x797%(x798&x799))>>x800);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x826 = 9374LLU;
	static uint32_t x827 = 611U;
	static uint16_t x828 = 0U;
	uint64_t t18 = 5835149833LLU;

	t18 = ((x825%(x826&x827))>>x828);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x894 = 7U;
	uint8_t x895 = 7U;
	int8_t x896 = 2;
	volatile int32_t t19 = -65;

	t19 = ((x893%(x894&x895))>>x896);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x897 = UINT8_MAX;
	int64_t x898 = -174197156241617LL;
	volatile uint32_t x899 = UINT32_MAX;
	uint8_t x900 = 52U;
	volatile int64_t t20 = 271284155911966481LL;

	t20 = ((x897%(x898&x899))>>x900);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x913 = INT64_MAX;
	volatile int64_t x914 = -17495189185715LL;
	int16_t x915 = INT16_MIN;
	int32_t x916 = 60;

	t21 = ((x913%(x914&x915))>>x916);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1053 = 1536337881U;
	int32_t x1054 = -1;
	uint64_t x1055 = UINT64_MAX;
	volatile uint64_t t22 = 29LLU;

	t22 = ((x1053%(x1054&x1055))>>x1056);

	if (t22 != 91LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1069 = INT64_MAX;
	uint16_t x1072 = 0U;
	int64_t t23 = 29LL;

	t23 = ((x1069%(x1070&x1071))>>x1072);

	if (t23 != 7LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1125 = UINT16_MAX;
	int64_t x1126 = INT64_MIN;
	static volatile int64_t x1127 = INT64_MIN;
	uint16_t x1128 = 13U;

	t24 = ((x1125%(x1126&x1127))>>x1128);

	if (t24 != 7LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1165 = INT64_MAX;
	int32_t x1166 = -1553;
	volatile int8_t x1167 = 2;
	static int64_t t25 = 6324LL;

	t25 = ((x1165%(x1166&x1167))>>x1168);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x1193 = 402553825;
	int32_t x1194 = -1;
	uint16_t x1196 = 5U;
	int32_t t26 = -250;

	t26 = ((x1193%(x1194&x1195))>>x1196);

	if (t26 != 207) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1297 = 0U;
	uint64_t x1298 = UINT64_MAX;
	uint32_t x1299 = 658902232U;

	t27 = ((x1297%(x1298&x1299))>>x1300);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1305 = 753;
	uint64_t x1307 = 32557LLU;
	uint64_t t28 = 251LLU;

	t28 = ((x1305%(x1306&x1307))>>x1308);

	if (t28 != 376LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1318 = UINT32_MAX;
	uint8_t x1319 = UINT8_MAX;

	t29 = ((x1317%(x1318&x1319))>>x1320);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1325 = UINT8_MAX;
	int64_t x1326 = INT64_MIN;
	static volatile int64_t x1327 = -7LL;
	int8_t x1328 = 60;
	volatile int64_t t30 = 3267064297492LL;

	t30 = ((x1325%(x1326&x1327))>>x1328);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x1430 = -1;
	int16_t x1431 = INT16_MIN;
	volatile uint8_t x1432 = 1U;
	volatile uint64_t t31 = 68839181180768LLU;

	t31 = ((x1429%(x1430&x1431))>>x1432);

	if (t31 != 420868230510LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1505 = 33471400500486335LLU;
	uint64_t x1506 = 3931680732655863LLU;
	uint16_t x1507 = UINT16_MAX;
	volatile uint64_t t32 = 14390544795457LLU;

	t32 = ((x1505%(x1506&x1507))>>x1508);

	if (t32 != 343LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1525 = UINT16_MAX;
	volatile uint32_t x1526 = 998U;
	uint8_t x1528 = 1U;
	static uint32_t t33 = 2066132546U;

	t33 = ((x1525%(x1526&x1527))>>x1528);

	if (t33 != 107U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1554 = 2040628189254LL;
	int8_t x1555 = -9;
	uint8_t x1556 = 3U;
	static int64_t t34 = 434LL;

	t34 = ((x1553%(x1554&x1555))>>x1556);

	if (t34 != 268435455LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1585 = INT64_MAX;
	volatile int64_t x1586 = -1LL;
	int16_t x1588 = 2;
	int64_t t35 = 9623449LL;

	t35 = ((x1585%(x1586&x1587))>>x1588);

	if (t35 != 8191LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1657 = 14U;
	volatile int64_t x1659 = -12563206789888LL;
	int16_t x1660 = 5;

	t36 = ((x1657%(x1658&x1659))>>x1660);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1673 = -1;
	static uint32_t x1674 = 456U;
	int16_t x1675 = -1;
	volatile uint32_t t37 = 651309678U;

	t37 = ((x1673%(x1674&x1675))>>x1676);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1677 = 759LLU;
	int64_t x1678 = -1LL;
	uint32_t x1679 = 45579U;
	uint16_t x1680 = 11U;
	uint64_t t38 = 1LLU;

	t38 = ((x1677%(x1678&x1679))>>x1680);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1713 = -7;
	static volatile uint64_t x1715 = UINT64_MAX;
	static int16_t x1716 = 34;
	static uint64_t t39 = 105563223165LLU;

	t39 = ((x1713%(x1714&x1715))>>x1716);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x1759 = 141710554175LLU;
	int8_t x1760 = 11;
	volatile uint64_t t40 = 420568LLU;

	t40 = ((x1757%(x1758&x1759))>>x1760);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1793 = UINT16_MAX;
	int16_t x1794 = 116;
	int8_t x1795 = INT8_MAX;
	int16_t x1796 = 16;

	t41 = ((x1793%(x1794&x1795))>>x1796);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1809 = INT32_MAX;
	int16_t x1810 = INT16_MAX;
	int16_t x1811 = -1;
	int8_t x1812 = 3;
	int32_t t42 = 463542;

	t42 = ((x1809%(x1810&x1811))>>x1812);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1869 = -851;
	volatile uint32_t x1870 = 1073425U;
	int32_t x1871 = 28;
	static volatile int8_t x1872 = 19;
	volatile uint32_t t43 = 1U;

	t43 = ((x1869%(x1870&x1871))>>x1872);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1965 = INT16_MAX;
	volatile int16_t x1966 = -655;
	static uint64_t x1967 = 7434LLU;
	uint8_t x1968 = 3U;
	uint64_t t44 = 270324031LLU;

	t44 = ((x1965%(x1966&x1967))>>x1968);

	if (t44 != 383LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1981 = 1953LL;
	volatile int16_t x1982 = INT16_MIN;
	int32_t x1983 = INT32_MAX;
	int64_t t45 = 1406719063494411LL;

	t45 = ((x1981%(x1982&x1983))>>x1984);

	if (t45 != 976LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2013 = 1032542034LLU;
	volatile uint64_t t46 = 835420344LLU;

	t46 = ((x2013%(x2014&x2015))>>x2016);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2049 = INT64_MIN;
	int8_t x2050 = 2;
	uint32_t x2051 = 118454383U;
	static int16_t x2052 = 0;
	int64_t t47 = -14308458LL;

	t47 = ((x2049%(x2050&x2051))>>x2052);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2149 = UINT8_MAX;
	volatile int16_t x2150 = INT16_MIN;
	volatile int64_t t48 = -469720261LL;

	t48 = ((x2149%(x2150&x2151))>>x2152);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2205 = INT64_MAX;
	uint8_t x2206 = 98U;
	int64_t x2207 = INT64_MAX;
	volatile int8_t x2208 = 2;
	volatile int64_t t49 = -165LL;

	t49 = ((x2205%(x2206&x2207))>>x2208);

	if (t49 != 12LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2210 = 212645947U;
	uint32_t x2211 = 53564912U;
	static uint32_t x2212 = 2U;
	int64_t t50 = -43LL;

	t50 = ((x2209%(x2210&x2211))>>x2212);

	if (t50 != 398306LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2217 = 15;
	volatile uint64_t x2218 = UINT64_MAX;
	static uint16_t x2219 = UINT16_MAX;
	uint8_t x2220 = 50U;
	volatile uint64_t t51 = 5691705211LLU;

	t51 = ((x2217%(x2218&x2219))>>x2220);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2221 = UINT64_MAX;
	uint32_t x2222 = UINT32_MAX;
	static int64_t x2223 = INT64_MAX;
	static uint8_t x2224 = 1U;
	uint64_t t52 = 57467615LLU;

	t52 = ((x2221%(x2222&x2223))>>x2224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x2233 = 1U;
	uint16_t x2234 = UINT16_MAX;
	uint32_t x2235 = 8466866U;
	volatile uint16_t x2236 = 3U;
	static volatile uint32_t t53 = 1U;

	t53 = ((x2233%(x2234&x2235))>>x2236);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2273 = UINT8_MAX;
	int16_t x2274 = 1143;
	uint8_t x2276 = 10U;

	t54 = ((x2273%(x2274&x2275))>>x2276);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2282 = 47;
	static int8_t x2284 = 0;
	volatile uint32_t t55 = 111367U;

	t55 = ((x2281%(x2282&x2283))>>x2284);

	if (t55 != 41U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2317 = INT8_MIN;
	volatile uint8_t x2318 = UINT8_MAX;
	int8_t x2319 = 1;
	uint64_t x2320 = 7LLU;
	volatile int32_t t56 = 7196951;

	t56 = ((x2317%(x2318&x2319))>>x2320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2341 = 1823;
	static int8_t x2342 = -1;
	int64_t x2343 = INT64_MIN;
	static uint16_t x2344 = 40U;
	static int64_t t57 = -478424LL;

	t57 = ((x2341%(x2342&x2343))>>x2344);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x2513 = -316238;
	uint64_t x2514 = UINT64_MAX;
	int16_t x2516 = 4;
	uint64_t t58 = 1LLU;

	t58 = ((x2513%(x2514&x2515))>>x2516);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2626 = UINT64_MAX;
	volatile int16_t x2627 = -1808;
	int8_t x2628 = 39;
	volatile uint64_t t59 = 1LLU;

	t59 = ((x2625%(x2626&x2627))>>x2628);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2657 = 245;
	int32_t x2658 = -1;
	int8_t x2659 = INT8_MIN;
	uint8_t x2660 = 0U;
	volatile int32_t t60 = 7;

	t60 = ((x2657%(x2658&x2659))>>x2660);

	if (t60 != 117) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2701 = 23967U;
	static volatile int16_t x2703 = -1;
	static int64_t x2704 = 2LL;

	t61 = ((x2701%(x2702&x2703))>>x2704);

	if (t61 != 5991U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2741 = -47;
	int8_t x2742 = -20;
	uint32_t x2743 = 154756986U;
	volatile uint32_t t62 = 80U;

	t62 = ((x2741%(x2742&x2743))>>x2744);

	if (t62 != 455191U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x2769 = 1039U;
	static uint8_t x2770 = 2U;
	int32_t x2771 = -1;
	uint8_t x2772 = 1U;
	uint32_t t63 = 304244U;

	t63 = ((x2769%(x2770&x2771))>>x2772);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2781 = UINT32_MAX;
	static uint64_t x2782 = UINT64_MAX;
	volatile uint64_t x2783 = 5502163575442965369LLU;
	volatile uint8_t x2784 = 48U;
	static uint64_t t64 = 298261LLU;

	t64 = ((x2781%(x2782&x2783))>>x2784);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x2797 = 21128U;
	static int16_t x2800 = 1;

	t65 = ((x2797%(x2798&x2799))>>x2800);

	if (t65 != 10564) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x2809 = -48;
	int32_t x2810 = INT32_MAX;
	static uint32_t x2812 = 1U;
	volatile uint32_t t66 = 107315193U;

	t66 = ((x2809%(x2810&x2811))>>x2812);

	if (t66 != 212921U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2865 = 928685LLU;
	uint64_t x2866 = 1256007497938525928LLU;
	static uint32_t x2867 = 156329779U;
	static uint16_t x2868 = 62U;
	uint64_t t67 = 15997832801LLU;

	t67 = ((x2865%(x2866&x2867))>>x2868);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2885 = INT32_MAX;
	int16_t x2886 = 5;
	volatile int8_t x2888 = 29;
	volatile int32_t t68 = -1426521;

	t68 = ((x2885%(x2886&x2887))>>x2888);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2909 = UINT16_MAX;
	volatile int8_t x2911 = INT8_MAX;
	uint32_t t69 = 23175828U;

	t69 = ((x2909%(x2910&x2911))>>x2912);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2953 = UINT64_MAX;
	uint64_t x2954 = 461219454539342621LLU;
	static uint16_t x2956 = 28U;
	uint64_t t70 = 467466334LLU;

	t70 = ((x2953%(x2954&x2955))>>x2956);

	if (t70 != 1710598717LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2965 = INT8_MAX;
	uint16_t x2967 = 9U;

	t71 = ((x2965%(x2966&x2967))>>x2968);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3061 = 164U;
	uint8_t x3062 = UINT8_MAX;
	int8_t x3063 = INT8_MAX;
	volatile uint64_t x3064 = 5LLU;
	int32_t t72 = 1;

	t72 = ((x3061%(x3062&x3063))>>x3064);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3141 = INT8_MIN;
	uint32_t x3142 = 15511173U;
	int8_t x3144 = 7;
	uint32_t t73 = 1U;

	t73 = ((x3141%(x3142&x3143))>>x3144);

	if (t73 != 79U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3213 = 2U;
	int8_t x3215 = 3;
	volatile int64_t t74 = 68309204687076813LL;

	t74 = ((x3213%(x3214&x3215))>>x3216);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3225 = 23U;
	static int16_t x3226 = 117;
	static int16_t x3227 = 175;
	volatile uint8_t x3228 = 0U;
	volatile int32_t t75 = 959217283;

	t75 = ((x3225%(x3226&x3227))>>x3228);

	if (t75 != 23) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3258 = INT8_MAX;
	int32_t x3259 = 1117863;
	static int16_t x3260 = 18;
	static uint32_t t76 = 96303491U;

	t76 = ((x3257%(x3258&x3259))>>x3260);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x3329 = INT64_MAX;
	int32_t x3330 = INT32_MAX;
	uint32_t x3332 = 3U;

	t77 = ((x3329%(x3330&x3331))>>x3332);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3334 = INT64_MIN;
	int64_t x3335 = -351147426921568LL;
	volatile int32_t x3336 = 0;

	t78 = ((x3333%(x3334&x3335))>>x3336);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3378 = -224314672;
	static uint8_t x3379 = UINT8_MAX;
	uint8_t x3380 = 4U;
	int64_t t79 = 4004134499242LL;

	t79 = ((x3377%(x3378&x3379))>>x3380);

	if (t79 != 6LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3485 = UINT8_MAX;

	t80 = ((x3485%(x3486&x3487))>>x3488);

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3521 = INT8_MIN;
	volatile int16_t x3523 = -1;
	volatile int32_t t81 = -15;

	t81 = ((x3521%(x3522&x3523))>>x3524);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x3549 = INT8_MAX;
	volatile int64_t x3550 = -1LL;
	uint8_t x3551 = UINT8_MAX;
	int16_t x3552 = 1;
	volatile int64_t t82 = -1330046972LL;

	t82 = ((x3549%(x3550&x3551))>>x3552);

	if (t82 != 63LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x3625 = 51U;
	static volatile int32_t x3626 = 444300764;
	volatile uint64_t x3627 = 11460215328757838LLU;
	uint16_t x3628 = 16U;
	uint64_t t83 = 3LLU;

	t83 = ((x3625%(x3626&x3627))>>x3628);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3665 = UINT64_MAX;
	int64_t x3666 = -230LL;
	int16_t x3667 = INT16_MAX;
	int8_t x3668 = 0;
	volatile uint64_t t84 = 288710593LLU;

	t84 = ((x3665%(x3666&x3667))>>x3668);

	if (t84 != 26877LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3689 = UINT16_MAX;
	volatile int64_t x3691 = -1LL;
	int8_t x3692 = 53;
	static volatile int64_t t85 = 2406LL;

	t85 = ((x3689%(x3690&x3691))>>x3692);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3833 = 20378U;
	int16_t x3834 = -9;
	uint32_t x3836 = 1U;
	volatile int64_t t86 = 2LL;

	t86 = ((x3833%(x3834&x3835))>>x3836);

	if (t86 != 10189LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3873 = UINT32_MAX;
	volatile uint64_t x3875 = 488281LLU;
	static uint64_t t87 = 2075114600417372LLU;

	t87 = ((x3873%(x3874&x3875))>>x3876);

	if (t87 != 703LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3909 = 30U;
	volatile uint32_t x3910 = 1828U;
	uint64_t x3911 = UINT64_MAX;
	volatile int16_t x3912 = 12;
	static volatile uint64_t t88 = 1728LLU;

	t88 = ((x3909%(x3910&x3911))>>x3912);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3941 = UINT8_MAX;
	static volatile uint64_t x3944 = 0LLU;
	uint32_t t89 = 6U;

	t89 = ((x3941%(x3942&x3943))>>x3944);

	if (t89 != 59U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3961 = UINT16_MAX;
	uint64_t x3962 = 143090232106423755LLU;
	int32_t x3963 = INT32_MIN;
	static int16_t x3964 = 5;
	static uint64_t t90 = 6LLU;

	t90 = ((x3961%(x3962&x3963))>>x3964);

	if (t90 != 2047LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4005 = 2293135LLU;
	volatile uint8_t x4006 = UINT8_MAX;
	static uint64_t t91 = 2259LLU;

	t91 = ((x4005%(x4006&x4007))>>x4008);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4077 = 298;
	int32_t x4078 = -2525;
	int8_t x4079 = INT8_MIN;
	uint32_t x4080 = 5U;
	volatile int32_t t92 = 147;

	t92 = ((x4077%(x4078&x4079))>>x4080);

	if (t92 != 9) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4181 = INT32_MAX;
	uint16_t x4184 = 18U;

	t93 = ((x4181%(x4182&x4183))>>x4184);

	if (t93 != 8191LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x4330 = -1LL;
	int8_t x4331 = INT8_MIN;
	uint8_t x4332 = 20U;
	int64_t t94 = 1LL;

	t94 = ((x4329%(x4330&x4331))>>x4332);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x4426 = 2723U;
	int32_t x4427 = 308482031;
	uint64_t x4428 = 0LLU;
	uint32_t t95 = 1123U;

	t95 = ((x4425%(x4426&x4427))>>x4428);

	if (t95 != 91U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4477 = UINT16_MAX;
	int8_t x4479 = INT8_MIN;

	t96 = ((x4477%(x4478&x4479))>>x4480);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4505 = INT8_MIN;
	static uint16_t x4508 = 7U;
	volatile uint32_t t97 = 10350181U;

	t97 = ((x4505%(x4506&x4507))>>x4508);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4521 = 175718309LLU;
	int8_t x4522 = -2;
	volatile uint64_t x4523 = 114828LLU;

	t98 = ((x4521%(x4522&x4523))>>x4524);

	if (t98 != 1966LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4569 = UINT64_MAX;
	uint32_t x4571 = 948711U;
	volatile int8_t x4572 = 1;
	volatile uint64_t t99 = 129719209791439LLU;

	t99 = ((x4569%(x4570&x4571))>>x4572);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

