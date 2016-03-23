
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x205 = UINT64_MAX;
int32_t t1 = -84;
volatile uint64_t x276 = UINT64_MAX;
int64_t x335 = INT64_MIN;
int64_t x336 = INT64_MIN;
volatile int64_t x407 = -1LL;
static uint32_t x446 = 37U;
static volatile int32_t x451 = INT32_MIN;
int32_t x452 = INT32_MIN;
volatile int32_t t6 = -24486;
int16_t x501 = -1;
static int8_t x542 = INT8_MIN;
static uint8_t x546 = 4U;
int32_t x697 = -1;
static int32_t x698 = INT32_MAX;
int32_t x699 = -1;
static int32_t t12 = -77221;
int16_t x790 = -3;
int64_t x894 = -2616LL;
volatile int16_t x896 = INT16_MAX;
static uint32_t x953 = 28243U;
static int64_t x954 = INT64_MIN;
int32_t x1149 = 5;
static int8_t x1151 = -1;
volatile int32_t t21 = 0;
int32_t x1276 = -1;
int64_t x1376 = INT64_MIN;
int32_t x1405 = 252014118;
int32_t x1408 = -1;
int8_t x1488 = -1;
int8_t x1508 = INT8_MIN;
static int32_t x1532 = -1;
uint8_t x1541 = 2U;
int32_t t29 = -1;
static volatile uint32_t x1608 = UINT32_MAX;
volatile int32_t t30 = -1;
uint32_t x1634 = UINT32_MAX;
int8_t x1793 = INT8_MAX;
int16_t x1794 = -6;
int32_t t34 = 58;
int32_t x1837 = INT32_MIN;
volatile uint32_t x1994 = 3U;
int32_t x2009 = -35;
int32_t t40 = 0;
int8_t x2061 = 36;
volatile int16_t x2063 = -1;
int8_t x2174 = -1;
static uint32_t x2175 = UINT32_MAX;
uint32_t x2176 = UINT32_MAX;
int64_t x2193 = INT64_MAX;
int8_t x2194 = -2;
int32_t x2215 = -1;
static int32_t t46 = 19966;
int32_t x2292 = -1;
uint8_t x2297 = UINT8_MAX;
int32_t t51 = 268;
uint64_t x2454 = UINT64_MAX;
static volatile int16_t x2462 = 7;
volatile int32_t t53 = -40692;
int8_t x2522 = INT8_MIN;
int8_t x2535 = -1;
volatile int32_t t56 = 3;
volatile int16_t x2561 = INT16_MIN;
int64_t x2740 = -1LL;
uint64_t x2741 = 3664LLU;
volatile int16_t x2742 = INT16_MIN;
static int32_t t63 = -209919;
int64_t x2821 = -1904LL;
volatile int64_t x3088 = -1LL;
int32_t t67 = 1093004;
int32_t x3252 = -1;
int32_t t70 = -1283770;
volatile int16_t x3274 = INT16_MAX;
int16_t x3279 = INT16_MIN;
uint64_t x3453 = 2763LLU;
volatile int32_t t73 = -1;
int32_t x3495 = INT32_MIN;
int64_t x3648 = -1LL;
int64_t x3675 = INT64_MIN;
int64_t x3676 = INT64_MIN;
static uint8_t x3765 = UINT8_MAX;
static uint8_t x3766 = UINT8_MAX;
volatile int8_t x3768 = -15;
static volatile int16_t x3810 = -1;
uint32_t x3900 = UINT32_MAX;
int8_t x4021 = INT8_MIN;
static int8_t x4212 = -1;
uint32_t x4223 = UINT32_MAX;
uint16_t x4265 = 15U;
volatile uint32_t x4266 = 213566915U;
volatile uint32_t x4538 = UINT32_MAX;
int8_t x4539 = INT8_MIN;
int64_t x4693 = INT64_MIN;
volatile int32_t x4696 = -1;
int32_t t101 = 314;
int16_t x4791 = -1;
int8_t x4866 = 1;
int8_t x4979 = 5;
volatile int32_t t105 = -18506;
uint16_t x5001 = UINT16_MAX;
static int32_t x5003 = INT32_MIN;
volatile int32_t t106 = -8620166;
volatile int64_t x5116 = -1LL;
static volatile int16_t x5129 = 6293;
int8_t x5158 = INT8_MIN;
uint8_t x5159 = 1U;
uint64_t x5411 = UINT64_MAX;
int8_t x5412 = -1;
int8_t x5415 = 1;
int16_t x5462 = -1;
uint8_t x5464 = 0U;
int8_t x5563 = 0;
int8_t x5564 = -1;
int16_t x5632 = INT16_MAX;
static volatile uint8_t x5676 = 0U;
int16_t x5780 = -1;
static int16_t x5885 = INT16_MIN;
int32_t t125 = 2;
int8_t x5953 = INT8_MIN;
uint64_t x5954 = UINT64_MAX;
volatile int16_t x6150 = -5;
volatile int32_t t130 = 531994;
int8_t x6281 = INT8_MAX;
uint64_t x6322 = UINT64_MAX;
int32_t x6324 = INT32_MIN;
static int32_t t136 = -2624822;
int64_t x6602 = -1LL;
uint32_t x6604 = UINT32_MAX;
static int32_t x6643 = INT32_MIN;
static volatile int8_t x6675 = -1;
int8_t x6745 = 2;
int8_t x6747 = 1;
volatile int8_t x6748 = -1;
uint16_t x6837 = 3U;
volatile int32_t t143 = 1;
uint16_t x6883 = 1U;
volatile int32_t x7091 = -1;
int32_t t151 = 7;
int8_t x7473 = INT8_MAX;
static uint8_t x7517 = UINT8_MAX;
uint8_t x7653 = UINT8_MAX;
static uint32_t x7707 = 12U;
int8_t x7708 = 0;
static volatile int32_t t159 = -97626511;
int32_t x7716 = -1;
uint64_t x7720 = UINT64_MAX;
uint16_t x7743 = 0U;
volatile int32_t t163 = -807;
volatile int64_t x7864 = -1LL;
static volatile int32_t t165 = -13;
int16_t x7871 = INT16_MIN;
int8_t x7879 = 6;
static int8_t x7880 = 2;
uint16_t x7914 = UINT16_MAX;
int64_t x7919 = INT64_MAX;
int64_t x8149 = INT64_MIN;
int8_t x8152 = -1;
int16_t x8159 = -1;
int8_t x8178 = -26;
static int8_t x8190 = INT8_MAX;
int64_t x8202 = INT64_MAX;
static int32_t t180 = 1685261;
static int8_t x8273 = 40;
int64_t x8425 = INT64_MAX;
static int32_t x8428 = INT32_MIN;
int32_t t185 = -625;
int8_t x8825 = -26;
uint32_t x8882 = 5347U;
static volatile int32_t t192 = 0;
uint32_t x8979 = UINT32_MAX;
static int16_t x9077 = INT16_MAX;
volatile int16_t x9099 = -1;
int32_t t197 = 0;
int64_t x9152 = -1LL;
int8_t x9196 = 1;


void f0(void) {
    	static int64_t x206 = 127482019LL;
	static volatile int8_t x207 = 13;
	int8_t x208 = -1;
	static int32_t t0 = -2010;

    t0 = ((x205!=x206)>>(x207-x208));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x217 = 15629U;
	volatile int8_t x218 = INT8_MIN;
	static uint16_t x219 = 7U;
	int16_t x220 = -24;

    t1 = ((x217!=x218)>>(x219-x220));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x273 = -5775037956LL;
	static int8_t x274 = INT8_MAX;
	static uint64_t x275 = UINT64_MAX;
	int32_t t2 = -29537622;

    t2 = ((x273!=x274)>>(x275-x276));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x333 = 0U;
	static uint32_t x334 = 2461U;
	volatile int32_t t3 = 510132782;

    t3 = ((x333!=x334)>>(x335-x336));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x405 = UINT32_MAX;
	volatile uint8_t x406 = UINT8_MAX;
	static int32_t x408 = -1;
	volatile int32_t t4 = 2;

    t4 = ((x405!=x406)>>(x407-x408));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x445 = INT16_MIN;
	static int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MIN;
	int32_t t5 = -57;

    t5 = ((x445!=x446)>>(x447-x448));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x449 = INT32_MIN;
	int16_t x450 = -1;

    t6 = ((x449!=x450)>>(x451-x452));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x457 = -1;
	int64_t x458 = -102604990LL;
	int8_t x459 = 29;
	int8_t x460 = -1;
	int32_t t7 = 38;

    t7 = ((x457!=x458)>>(x459-x460));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x502 = 667862U;
	uint16_t x503 = 0U;
	int32_t x504 = -1;
	static int32_t t8 = -1714151;

    t8 = ((x501!=x502)>>(x503-x504));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x541 = -1LL;
	static uint8_t x543 = 0U;
	int32_t x544 = -1;
	int32_t t9 = -226369;

    t9 = ((x541!=x542)>>(x543-x544));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x545 = 0U;
	int8_t x547 = INT8_MIN;
	int8_t x548 = INT8_MIN;
	volatile int32_t t10 = 3;

    t10 = ((x545!=x546)>>(x547-x548));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x605 = 32945LLU;
	int64_t x606 = INT64_MIN;
	int16_t x607 = -1;
	int16_t x608 = -1;
	static volatile int32_t t11 = 935706;

    t11 = ((x605!=x606)>>(x607-x608));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x700 = -1;

    t12 = ((x697!=x698)>>(x699-x700));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x789 = INT32_MAX;
	int32_t x791 = INT32_MIN;
	int32_t x792 = INT32_MIN;
	volatile int32_t t13 = 221066;

    t13 = ((x789!=x790)>>(x791-x792));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x893 = UINT16_MAX;
	int16_t x895 = INT16_MAX;
	volatile int32_t t14 = 201991;

    t14 = ((x893!=x894)>>(x895-x896));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x955 = -1;
	int32_t x956 = -3;
	volatile int32_t t15 = -446;

    t15 = ((x953!=x954)>>(x955-x956));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x965 = INT8_MIN;
	volatile int64_t x966 = INT64_MIN;
	uint16_t x967 = 18U;
	uint8_t x968 = 1U;
	volatile int32_t t16 = -111229;

    t16 = ((x965!=x966)>>(x967-x968));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x985 = INT64_MIN;
	int8_t x986 = INT8_MAX;
	int16_t x987 = INT16_MIN;
	volatile int16_t x988 = INT16_MIN;
	int32_t t17 = -504591;

    t17 = ((x985!=x986)>>(x987-x988));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x1017 = 32731U;
	uint32_t x1018 = 114788U;
	int32_t x1019 = -1;
	uint32_t x1020 = UINT32_MAX;
	volatile int32_t t18 = -1193383;

    t18 = ((x1017!=x1018)>>(x1019-x1020));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x1129 = 1639238326197178745LLU;
	uint32_t x1130 = 4616U;
	static uint16_t x1131 = 18U;
	uint8_t x1132 = 0U;
	static volatile int32_t t19 = 0;

    t19 = ((x1129!=x1130)>>(x1131-x1132));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint8_t x1150 = 18U;
	volatile uint32_t x1152 = UINT32_MAX;
	volatile int32_t t20 = -422;

    t20 = ((x1149!=x1150)>>(x1151-x1152));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1153 = UINT16_MAX;
	int8_t x1154 = INT8_MIN;
	static uint32_t x1155 = 4U;
	int16_t x1156 = -22;

    t21 = ((x1153!=x1154)>>(x1155-x1156));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1273 = -56;
	static int8_t x1274 = -1;
	static uint8_t x1275 = 2U;
	volatile int32_t t22 = 744842;

    t22 = ((x1273!=x1274)>>(x1275-x1276));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1373 = -1;
	uint8_t x1374 = 16U;
	static int64_t x1375 = INT64_MIN;
	static volatile int32_t t23 = 3;

    t23 = ((x1373!=x1374)>>(x1375-x1376));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1406 = 2819U;
	int64_t x1407 = -1LL;
	volatile int32_t t24 = -12083264;

    t24 = ((x1405!=x1406)>>(x1407-x1408));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1449 = -1LL;
	volatile int32_t x1450 = INT32_MIN;
	static int8_t x1451 = -1;
	int32_t x1452 = -1;
	volatile int32_t t25 = -96;

    t25 = ((x1449!=x1450)>>(x1451-x1452));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1485 = INT8_MIN;
	uint8_t x1486 = 2U;
	int64_t x1487 = -1LL;
	int32_t t26 = 382048;

    t26 = ((x1485!=x1486)>>(x1487-x1488));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1505 = UINT16_MAX;
	int16_t x1506 = -1;
	int8_t x1507 = INT8_MIN;
	int32_t t27 = -72;

    t27 = ((x1505!=x1506)>>(x1507-x1508));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1529 = 2598470LLU;
	static int8_t x1530 = 63;
	int16_t x1531 = -1;
	volatile int32_t t28 = 699642;

    t28 = ((x1529!=x1530)>>(x1531-x1532));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1542 = 30423298LL;
	volatile uint8_t x1543 = UINT8_MAX;
	uint8_t x1544 = UINT8_MAX;

    t29 = ((x1541!=x1542)>>(x1543-x1544));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1605 = INT8_MIN;
	uint64_t x1606 = UINT64_MAX;
	uint8_t x1607 = 20U;

    t30 = ((x1605!=x1606)>>(x1607-x1608));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x1609 = 877919188578200964LLU;
	static volatile int32_t x1610 = INT32_MIN;
	int16_t x1611 = -1;
	volatile int32_t x1612 = -1;
	int32_t t31 = 35;

    t31 = ((x1609!=x1610)>>(x1611-x1612));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x1633 = INT8_MIN;
	int16_t x1635 = INT16_MIN;
	int16_t x1636 = INT16_MIN;
	int32_t t32 = 442651635;

    t32 = ((x1633!=x1634)>>(x1635-x1636));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x1765 = UINT64_MAX;
	volatile uint32_t x1766 = 5971U;
	uint16_t x1767 = 7U;
	int8_t x1768 = -6;
	int32_t t33 = -4;

    t33 = ((x1765!=x1766)>>(x1767-x1768));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x1795 = 0U;
	int8_t x1796 = -1;

    t34 = ((x1793!=x1794)>>(x1795-x1796));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x1821 = 133081LLU;
	int8_t x1822 = -1;
	volatile int16_t x1823 = 29;
	int16_t x1824 = -1;
	volatile int32_t t35 = -11852;

    t35 = ((x1821!=x1822)>>(x1823-x1824));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x1838 = UINT64_MAX;
	int32_t x1839 = -1;
	static int64_t x1840 = -1LL;
	static int32_t t36 = 4612;

    t36 = ((x1837!=x1838)>>(x1839-x1840));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1877 = 0;
	int16_t x1878 = -3;
	volatile int32_t x1879 = -1;
	uint64_t x1880 = UINT64_MAX;
	volatile int32_t t37 = 30;

    t37 = ((x1877!=x1878)>>(x1879-x1880));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x1941 = 59U;
	int16_t x1942 = INT16_MIN;
	static uint16_t x1943 = 153U;
	volatile int8_t x1944 = INT8_MAX;
	volatile int32_t t38 = 743;

    t38 = ((x1941!=x1942)>>(x1943-x1944));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1993 = UINT32_MAX;
	int8_t x1995 = INT8_MIN;
	int16_t x1996 = -144;
	static volatile int32_t t39 = 46854223;

    t39 = ((x1993!=x1994)>>(x1995-x1996));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2010 = -1;
	uint8_t x2011 = 10U;
	int16_t x2012 = -1;

    t40 = ((x2009!=x2010)>>(x2011-x2012));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2062 = -1;
	uint64_t x2064 = UINT64_MAX;
	static volatile int32_t t41 = -5;

    t41 = ((x2061!=x2062)>>(x2063-x2064));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x2173 = UINT16_MAX;
	volatile int32_t t42 = 1053;

    t42 = ((x2173!=x2174)>>(x2175-x2176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x2195 = -1;
	static volatile uint64_t x2196 = UINT64_MAX;
	int32_t t43 = -28357;

    t43 = ((x2193!=x2194)>>(x2195-x2196));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2197 = INT16_MIN;
	uint8_t x2198 = 4U;
	int8_t x2199 = INT8_MIN;
	int8_t x2200 = INT8_MIN;
	int32_t t44 = 1519301;

    t44 = ((x2197!=x2198)>>(x2199-x2200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x2213 = -141467905;
	int64_t x2214 = -1LL;
	static int64_t x2216 = -1LL;
	volatile int32_t t45 = 624532555;

    t45 = ((x2213!=x2214)>>(x2215-x2216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x2273 = -1;
	int16_t x2274 = INT16_MAX;
	int32_t x2275 = -1;
	int8_t x2276 = -1;

    t46 = ((x2273!=x2274)>>(x2275-x2276));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x2289 = INT16_MAX;
	int16_t x2290 = INT16_MIN;
	static uint32_t x2291 = UINT32_MAX;
	static volatile int32_t t47 = 91752;

    t47 = ((x2289!=x2290)>>(x2291-x2292));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x2298 = 0LL;
	static uint8_t x2299 = 8U;
	int64_t x2300 = -1LL;
	volatile int32_t t48 = 890280230;

    t48 = ((x2297!=x2298)>>(x2299-x2300));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x2353 = 1282273277LLU;
	volatile int64_t x2354 = INT64_MAX;
	volatile uint64_t x2355 = UINT64_MAX;
	int32_t x2356 = -1;
	int32_t t49 = -3402;

    t49 = ((x2353!=x2354)>>(x2355-x2356));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x2377 = 5945U;
	int64_t x2378 = -1LL;
	static int8_t x2379 = 0;
	uint32_t x2380 = UINT32_MAX;
	volatile int32_t t50 = -14;

    t50 = ((x2377!=x2378)>>(x2379-x2380));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x2401 = INT16_MAX;
	volatile uint32_t x2402 = 7435190U;
	int32_t x2403 = -1;
	int64_t x2404 = -1LL;

    t51 = ((x2401!=x2402)>>(x2403-x2404));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x2453 = 3122U;
	uint64_t x2455 = UINT64_MAX;
	int64_t x2456 = -1LL;
	static volatile int32_t t52 = -12468;

    t52 = ((x2453!=x2454)>>(x2455-x2456));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2461 = INT16_MAX;
	int16_t x2463 = -1;
	volatile uint32_t x2464 = UINT32_MAX;

    t53 = ((x2461!=x2462)>>(x2463-x2464));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x2485 = 21848737U;
	uint8_t x2486 = UINT8_MAX;
	static uint16_t x2487 = 30U;
	static uint8_t x2488 = 10U;
	volatile int32_t t54 = -342;

    t54 = ((x2485!=x2486)>>(x2487-x2488));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2521 = 37375749020767745LLU;
	int16_t x2523 = -1;
	static uint64_t x2524 = UINT64_MAX;
	volatile int32_t t55 = 1;

    t55 = ((x2521!=x2522)>>(x2523-x2524));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x2533 = INT16_MIN;
	int64_t x2534 = INT64_MIN;
	static uint32_t x2536 = UINT32_MAX;

    t56 = ((x2533!=x2534)>>(x2535-x2536));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x2545 = INT32_MAX;
	static uint8_t x2546 = UINT8_MAX;
	uint16_t x2547 = 1U;
	uint32_t x2548 = UINT32_MAX;
	volatile int32_t t57 = 1;

    t57 = ((x2545!=x2546)>>(x2547-x2548));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x2553 = INT32_MIN;
	int8_t x2554 = INT8_MAX;
	int16_t x2555 = -1;
	volatile int32_t x2556 = -1;
	volatile int32_t t58 = -45653;

    t58 = ((x2553!=x2554)>>(x2555-x2556));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2562 = 17965;
	volatile uint64_t x2563 = UINT64_MAX;
	static int8_t x2564 = -2;
	int32_t t59 = 52;

    t59 = ((x2561!=x2562)>>(x2563-x2564));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x2693 = -49;
	int32_t x2694 = INT32_MIN;
	volatile uint64_t x2695 = UINT64_MAX;
	static volatile int8_t x2696 = -1;
	int32_t t60 = 3338;

    t60 = ((x2693!=x2694)>>(x2695-x2696));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x2709 = 49U;
	volatile uint8_t x2710 = UINT8_MAX;
	int64_t x2711 = INT64_MIN;
	volatile int64_t x2712 = INT64_MIN;
	static volatile int32_t t61 = 274;

    t61 = ((x2709!=x2710)>>(x2711-x2712));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x2737 = -1LL;
	static uint8_t x2738 = UINT8_MAX;
	int16_t x2739 = -1;
	static int32_t t62 = 918370;

    t62 = ((x2737!=x2738)>>(x2739-x2740));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x2743 = 16;
	volatile int64_t x2744 = -1LL;

    t63 = ((x2741!=x2742)>>(x2743-x2744));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2781 = 253;
	static uint16_t x2782 = 3127U;
	int8_t x2783 = INT8_MAX;
	int8_t x2784 = INT8_MAX;
	volatile int32_t t64 = 407;

    t64 = ((x2781!=x2782)>>(x2783-x2784));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x2822 = 2LLU;
	int32_t x2823 = -1;
	uint64_t x2824 = UINT64_MAX;
	int32_t t65 = 2988;

    t65 = ((x2821!=x2822)>>(x2823-x2824));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x3085 = INT32_MAX;
	volatile uint8_t x3086 = UINT8_MAX;
	volatile int64_t x3087 = -1LL;
	volatile int32_t t66 = -21910;

    t66 = ((x3085!=x3086)>>(x3087-x3088));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3089 = INT16_MIN;
	int32_t x3090 = 117;
	static int64_t x3091 = -1LL;
	int8_t x3092 = -16;

    t67 = ((x3089!=x3090)>>(x3091-x3092));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x3145 = 44U;
	int16_t x3146 = INT16_MAX;
	uint64_t x3147 = UINT64_MAX;
	int64_t x3148 = -1LL;
	static volatile int32_t t68 = -696981482;

    t68 = ((x3145!=x3146)>>(x3147-x3148));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x3241 = -1;
	static uint64_t x3242 = 6655139684615516LLU;
	int16_t x3243 = INT16_MIN;
	int16_t x3244 = INT16_MIN;
	static volatile int32_t t69 = 1921274;

    t69 = ((x3241!=x3242)>>(x3243-x3244));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint8_t x3249 = 109U;
	uint64_t x3250 = 26630483LLU;
	int32_t x3251 = -1;

    t70 = ((x3249!=x3250)>>(x3251-x3252));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3273 = 699;
	volatile int64_t x3275 = INT64_MIN;
	int64_t x3276 = INT64_MIN;
	volatile int32_t t71 = -174179709;

    t71 = ((x3273!=x3274)>>(x3275-x3276));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x3277 = -1;
	uint16_t x3278 = UINT16_MAX;
	int16_t x3280 = INT16_MIN;
	volatile int32_t t72 = 964;

    t72 = ((x3277!=x3278)>>(x3279-x3280));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x3454 = -198822446;
	volatile uint32_t x3455 = UINT32_MAX;
	int16_t x3456 = -1;

    t73 = ((x3453!=x3454)>>(x3455-x3456));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3493 = 66;
	int8_t x3494 = -1;
	int32_t x3496 = INT32_MIN;
	volatile int32_t t74 = 11158188;

    t74 = ((x3493!=x3494)>>(x3495-x3496));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x3533 = INT8_MIN;
	uint16_t x3534 = 2U;
	int8_t x3535 = 0;
	int8_t x3536 = 0;
	volatile int32_t t75 = -17393300;

    t75 = ((x3533!=x3534)>>(x3535-x3536));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x3617 = -1;
	int8_t x3618 = -1;
	uint8_t x3619 = 25U;
	int16_t x3620 = -4;
	static int32_t t76 = 59901;

    t76 = ((x3617!=x3618)>>(x3619-x3620));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x3645 = -1;
	int8_t x3646 = INT8_MAX;
	volatile int64_t x3647 = -1LL;
	static volatile int32_t t77 = -986334871;

    t77 = ((x3645!=x3646)>>(x3647-x3648));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x3673 = UINT16_MAX;
	static int64_t x3674 = -1LL;
	int32_t t78 = -158;

    t78 = ((x3673!=x3674)>>(x3675-x3676));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x3767 = -1;
	volatile int32_t t79 = 1;

    t79 = ((x3765!=x3766)>>(x3767-x3768));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x3809 = 2034659946U;
	volatile int16_t x3811 = -1;
	int32_t x3812 = -1;
	int32_t t80 = -264905943;

    t80 = ((x3809!=x3810)>>(x3811-x3812));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x3897 = -22825039LL;
	volatile int32_t x3898 = INT32_MAX;
	int16_t x3899 = 0;
	static volatile int32_t t81 = -4143789;

    t81 = ((x3897!=x3898)>>(x3899-x3900));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x3909 = INT64_MIN;
	int64_t x3910 = -1LL;
	int8_t x3911 = -1;
	static int64_t x3912 = -1LL;
	int32_t t82 = 2767712;

    t82 = ((x3909!=x3910)>>(x3911-x3912));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x3917 = INT64_MIN;
	int16_t x3918 = 267;
	int16_t x3919 = 1;
	int32_t x3920 = -1;
	int32_t t83 = 3448202;

    t83 = ((x3917!=x3918)>>(x3919-x3920));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x3985 = 0U;
	static int32_t x3986 = -1;
	volatile int8_t x3987 = 1;
	volatile uint32_t x3988 = UINT32_MAX;
	volatile int32_t t84 = 1111;

    t84 = ((x3985!=x3986)>>(x3987-x3988));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x4017 = INT64_MIN;
	uint16_t x4018 = 0U;
	static volatile uint32_t x4019 = UINT32_MAX;
	int8_t x4020 = -2;
	volatile int32_t t85 = 10918;

    t85 = ((x4017!=x4018)>>(x4019-x4020));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x4022 = 7913U;
	static uint8_t x4023 = 16U;
	volatile uint64_t x4024 = UINT64_MAX;
	int32_t t86 = -1;

    t86 = ((x4021!=x4022)>>(x4023-x4024));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x4141 = 2145147079U;
	int64_t x4142 = -1LL;
	static int64_t x4143 = -1LL;
	int32_t x4144 = -1;
	int32_t t87 = 553572;

    t87 = ((x4141!=x4142)>>(x4143-x4144));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x4205 = -1;
	static volatile int8_t x4206 = INT8_MAX;
	int8_t x4207 = 7;
	uint32_t x4208 = UINT32_MAX;
	volatile int32_t t88 = -325355;

    t88 = ((x4205!=x4206)>>(x4207-x4208));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x4209 = 729;
	static int8_t x4210 = -1;
	int16_t x4211 = -1;
	volatile int32_t t89 = -25;

    t89 = ((x4209!=x4210)>>(x4211-x4212));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x4221 = -1;
	int32_t x4222 = INT32_MIN;
	uint32_t x4224 = UINT32_MAX;
	volatile int32_t t90 = -8478769;

    t90 = ((x4221!=x4222)>>(x4223-x4224));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x4249 = INT64_MAX;
	volatile int32_t x4250 = -69550;
	static uint16_t x4251 = UINT16_MAX;
	volatile uint16_t x4252 = UINT16_MAX;
	static volatile int32_t t91 = 37336;

    t91 = ((x4249!=x4250)>>(x4251-x4252));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x4257 = INT16_MIN;
	uint16_t x4258 = 748U;
	uint8_t x4259 = 19U;
	volatile int64_t x4260 = -1LL;
	volatile int32_t t92 = 2;

    t92 = ((x4257!=x4258)>>(x4259-x4260));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x4267 = 20U;
	uint8_t x4268 = 0U;
	int32_t t93 = 0;

    t93 = ((x4265!=x4266)>>(x4267-x4268));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x4333 = INT32_MIN;
	static uint32_t x4334 = 13U;
	uint8_t x4335 = 1U;
	int64_t x4336 = -1LL;
	volatile int32_t t94 = 153;

    t94 = ((x4333!=x4334)>>(x4335-x4336));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x4429 = 433236091359436249LLU;
	static int16_t x4430 = 0;
	int32_t x4431 = 2;
	uint8_t x4432 = 0U;
	volatile int32_t t95 = 298198;

    t95 = ((x4429!=x4430)>>(x4431-x4432));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x4537 = -6;
	int8_t x4540 = INT8_MIN;
	int32_t t96 = -191;

    t96 = ((x4537!=x4538)>>(x4539-x4540));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x4613 = 27671728454134LLU;
	uint8_t x4614 = 17U;
	int64_t x4615 = -1LL;
	int16_t x4616 = -1;
	int32_t t97 = 30;

    t97 = ((x4613!=x4614)>>(x4615-x4616));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x4633 = UINT16_MAX;
	volatile int32_t x4634 = 42;
	int8_t x4635 = 0;
	int64_t x4636 = -1LL;
	static volatile int32_t t98 = -4196156;

    t98 = ((x4633!=x4634)>>(x4635-x4636));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x4694 = UINT32_MAX;
	static uint8_t x4695 = 28U;
	int32_t t99 = 32168;

    t99 = ((x4693!=x4694)>>(x4695-x4696));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x4701 = INT8_MAX;
	uint32_t x4702 = 864926U;
	int32_t x4703 = 30;
	uint32_t x4704 = UINT32_MAX;
	static volatile int32_t t100 = -100241;

    t100 = ((x4701!=x4702)>>(x4703-x4704));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x4749 = 50274528LLU;
	volatile uint16_t x4750 = UINT16_MAX;
	int16_t x4751 = -1;
	int16_t x4752 = -1;

    t101 = ((x4749!=x4750)>>(x4751-x4752));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x4789 = -11;
	int64_t x4790 = -1LL;
	int64_t x4792 = -1LL;
	volatile int32_t t102 = 0;

    t102 = ((x4789!=x4790)>>(x4791-x4792));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x4813 = INT64_MIN;
	int16_t x4814 = INT16_MIN;
	static int16_t x4815 = -115;
	volatile int8_t x4816 = INT8_MIN;
	int32_t t103 = -10912;

    t103 = ((x4813!=x4814)>>(x4815-x4816));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x4865 = 236U;
	volatile int64_t x4867 = INT64_MAX;
	int64_t x4868 = INT64_MAX;
	static int32_t t104 = 225;

    t104 = ((x4865!=x4866)>>(x4867-x4868));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x4977 = INT8_MIN;
	uint32_t x4978 = 100U;
	int32_t x4980 = 0;

    t105 = ((x4977!=x4978)>>(x4979-x4980));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x5002 = 12;
	int32_t x5004 = INT32_MIN;

    t106 = ((x5001!=x5002)>>(x5003-x5004));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x5005 = INT32_MIN;
	int16_t x5006 = INT16_MAX;
	uint8_t x5007 = 4U;
	int32_t x5008 = -1;
	volatile int32_t t107 = 4793625;

    t107 = ((x5005!=x5006)>>(x5007-x5008));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x5073 = INT64_MIN;
	uint32_t x5074 = UINT32_MAX;
	int32_t x5075 = 1;
	int16_t x5076 = 0;
	static int32_t t108 = 158678780;

    t108 = ((x5073!=x5074)>>(x5075-x5076));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x5113 = 41335U;
	int16_t x5114 = INT16_MIN;
	static int32_t x5115 = -1;
	volatile int32_t t109 = -29435310;

    t109 = ((x5113!=x5114)>>(x5115-x5116));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x5130 = 1;
	int8_t x5131 = -1;
	static int8_t x5132 = -1;
	volatile int32_t t110 = 50;

    t110 = ((x5129!=x5130)>>(x5131-x5132));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x5157 = INT8_MAX;
	volatile int8_t x5160 = -1;
	volatile int32_t t111 = -505;

    t111 = ((x5157!=x5158)>>(x5159-x5160));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x5261 = INT32_MAX;
	static int16_t x5262 = INT16_MAX;
	int32_t x5263 = -1;
	int8_t x5264 = -11;
	volatile int32_t t112 = 5;

    t112 = ((x5261!=x5262)>>(x5263-x5264));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x5409 = INT32_MAX;
	int32_t x5410 = 29045234;
	int32_t t113 = -20655;

    t113 = ((x5409!=x5410)>>(x5411-x5412));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x5413 = 1689970U;
	volatile int8_t x5414 = INT8_MAX;
	int16_t x5416 = 1;
	int32_t t114 = -3;

    t114 = ((x5413!=x5414)>>(x5415-x5416));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x5457 = INT16_MAX;
	int32_t x5458 = INT32_MAX;
	volatile uint64_t x5459 = UINT64_MAX;
	volatile uint64_t x5460 = UINT64_MAX;
	static volatile int32_t t115 = 143902483;

    t115 = ((x5457!=x5458)>>(x5459-x5460));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x5461 = 42360363U;
	int32_t x5463 = 0;
	int32_t t116 = -61990863;

    t116 = ((x5461!=x5462)>>(x5463-x5464));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x5489 = -6931150364LL;
	int8_t x5490 = -1;
	volatile int8_t x5491 = -1;
	uint64_t x5492 = UINT64_MAX;
	volatile int32_t t117 = -7908962;

    t117 = ((x5489!=x5490)>>(x5491-x5492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x5561 = 7U;
	int32_t x5562 = -4436;
	int32_t t118 = 57238639;

    t118 = ((x5561!=x5562)>>(x5563-x5564));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x5625 = 29828U;
	volatile uint64_t x5626 = UINT64_MAX;
	int16_t x5627 = INT16_MIN;
	int16_t x5628 = INT16_MIN;
	volatile int32_t t119 = -190;

    t119 = ((x5625!=x5626)>>(x5627-x5628));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x5629 = 7718152118253706506LLU;
	int64_t x5630 = -1LL;
	int16_t x5631 = INT16_MAX;
	int32_t t120 = -47614472;

    t120 = ((x5629!=x5630)>>(x5631-x5632));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x5673 = UINT32_MAX;
	int32_t x5674 = 35375;
	uint64_t x5675 = 10LLU;
	volatile int32_t t121 = -1004;

    t121 = ((x5673!=x5674)>>(x5675-x5676));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x5777 = INT8_MIN;
	int64_t x5778 = INT64_MIN;
	int64_t x5779 = -1LL;
	int32_t t122 = 983305779;

    t122 = ((x5777!=x5778)>>(x5779-x5780));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x5817 = 10U;
	volatile int16_t x5818 = INT16_MIN;
	static volatile int8_t x5819 = -1;
	static volatile int32_t x5820 = -1;
	int32_t t123 = 7;

    t123 = ((x5817!=x5818)>>(x5819-x5820));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x5857 = -1;
	int32_t x5858 = -162447531;
	int16_t x5859 = -1;
	int64_t x5860 = -1LL;
	int32_t t124 = -54290815;

    t124 = ((x5857!=x5858)>>(x5859-x5860));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x5886 = INT8_MAX;
	int8_t x5887 = INT8_MIN;
	volatile int8_t x5888 = INT8_MIN;

    t125 = ((x5885!=x5886)>>(x5887-x5888));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x5955 = -1;
	static uint64_t x5956 = UINT64_MAX;
	int32_t t126 = -100234;

    t126 = ((x5953!=x5954)>>(x5955-x5956));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x6013 = 789U;
	uint64_t x6014 = 1383464LLU;
	int16_t x6015 = -1;
	volatile int64_t x6016 = -1LL;
	static volatile int32_t t127 = -13;

    t127 = ((x6013!=x6014)>>(x6015-x6016));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x6025 = 60203LL;
	uint32_t x6026 = UINT32_MAX;
	int8_t x6027 = 0;
	static int32_t x6028 = -1;
	static volatile int32_t t128 = -8494;

    t128 = ((x6025!=x6026)>>(x6027-x6028));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x6053 = -1;
	uint8_t x6054 = 3U;
	int8_t x6055 = INT8_MIN;
	int8_t x6056 = INT8_MIN;
	volatile int32_t t129 = -1;

    t129 = ((x6053!=x6054)>>(x6055-x6056));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x6149 = 2;
	int8_t x6151 = 31;
	uint64_t x6152 = 1LLU;

    t130 = ((x6149!=x6150)>>(x6151-x6152));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x6282 = INT16_MIN;
	int16_t x6283 = -1;
	static volatile int8_t x6284 = -1;
	volatile int32_t t131 = -9880789;

    t131 = ((x6281!=x6282)>>(x6283-x6284));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x6289 = INT8_MIN;
	uint64_t x6290 = UINT64_MAX;
	uint64_t x6291 = UINT64_MAX;
	static int8_t x6292 = -24;
	static volatile int32_t t132 = 1;

    t132 = ((x6289!=x6290)>>(x6291-x6292));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x6321 = UINT16_MAX;
	int32_t x6323 = INT32_MIN;
	int32_t t133 = -28;

    t133 = ((x6321!=x6322)>>(x6323-x6324));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x6417 = INT8_MIN;
	int32_t x6418 = -1;
	static int8_t x6419 = INT8_MIN;
	int8_t x6420 = INT8_MIN;
	int32_t t134 = -3;

    t134 = ((x6417!=x6418)>>(x6419-x6420));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x6549 = 15622U;
	volatile uint8_t x6550 = 0U;
	int16_t x6551 = INT16_MIN;
	volatile int16_t x6552 = INT16_MIN;
	int32_t t135 = 115228;

    t135 = ((x6549!=x6550)>>(x6551-x6552));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x6589 = -1LL;
	static int8_t x6590 = -1;
	volatile int64_t x6591 = INT64_MAX;
	int64_t x6592 = INT64_MAX;

    t136 = ((x6589!=x6590)>>(x6591-x6592));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x6601 = 1890LL;
	uint8_t x6603 = 7U;
	static int32_t t137 = 6070;

    t137 = ((x6601!=x6602)>>(x6603-x6604));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x6641 = -1;
	static uint8_t x6642 = UINT8_MAX;
	int32_t x6644 = INT32_MIN;
	static int32_t t138 = 338075;

    t138 = ((x6641!=x6642)>>(x6643-x6644));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x6653 = 68288854U;
	volatile int16_t x6654 = INT16_MIN;
	static int8_t x6655 = -1;
	int64_t x6656 = -1LL;
	int32_t t139 = 178739023;

    t139 = ((x6653!=x6654)>>(x6655-x6656));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x6673 = INT16_MIN;
	uint8_t x6674 = 3U;
	volatile uint32_t x6676 = UINT32_MAX;
	int32_t t140 = -756;

    t140 = ((x6673!=x6674)>>(x6675-x6676));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x6721 = UINT8_MAX;
	uint32_t x6722 = UINT32_MAX;
	int16_t x6723 = INT16_MIN;
	static int16_t x6724 = INT16_MIN;
	int32_t t141 = 55;

    t141 = ((x6721!=x6722)>>(x6723-x6724));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x6746 = 552U;
	static volatile int32_t t142 = -96;

    t142 = ((x6745!=x6746)>>(x6747-x6748));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x6838 = INT16_MIN;
	volatile int64_t x6839 = 9LL;
	int16_t x6840 = -11;

    t143 = ((x6837!=x6838)>>(x6839-x6840));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x6881 = 203184LLU;
	volatile int64_t x6882 = 127628893093043LL;
	int64_t x6884 = -1LL;
	volatile int32_t t144 = 106295;

    t144 = ((x6881!=x6882)>>(x6883-x6884));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x7005 = 22631U;
	static uint32_t x7006 = UINT32_MAX;
	uint8_t x7007 = 1U;
	uint64_t x7008 = UINT64_MAX;
	static volatile int32_t t145 = 7555599;

    t145 = ((x7005!=x7006)>>(x7007-x7008));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x7089 = INT16_MIN;
	int64_t x7090 = INT64_MAX;
	uint32_t x7092 = UINT32_MAX;
	volatile int32_t t146 = 1465;

    t146 = ((x7089!=x7090)>>(x7091-x7092));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x7129 = -53937LL;
	int8_t x7130 = INT8_MAX;
	int16_t x7131 = -1;
	static int32_t x7132 = -1;
	int32_t t147 = -45367;

    t147 = ((x7129!=x7130)>>(x7131-x7132));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x7161 = -1;
	int64_t x7162 = INT64_MIN;
	int8_t x7163 = INT8_MIN;
	int8_t x7164 = INT8_MIN;
	int32_t t148 = -21;

    t148 = ((x7161!=x7162)>>(x7163-x7164));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x7313 = INT64_MIN;
	volatile int32_t x7314 = INT32_MAX;
	static int64_t x7315 = -1LL;
	int64_t x7316 = -1LL;
	volatile int32_t t149 = -1;

    t149 = ((x7313!=x7314)>>(x7315-x7316));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x7353 = 25373LLU;
	int32_t x7354 = INT32_MAX;
	int8_t x7355 = -1;
	int8_t x7356 = -1;
	volatile int32_t t150 = 8135;

    t150 = ((x7353!=x7354)>>(x7355-x7356));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x7413 = 5;
	uint8_t x7414 = 4U;
	int16_t x7415 = -1;
	static int16_t x7416 = -1;

    t151 = ((x7413!=x7414)>>(x7415-x7416));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x7453 = -1;
	int32_t x7454 = -1;
	volatile int8_t x7455 = INT8_MIN;
	int8_t x7456 = INT8_MIN;
	volatile int32_t t152 = 7;

    t152 = ((x7453!=x7454)>>(x7455-x7456));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x7474 = -5;
	uint64_t x7475 = UINT64_MAX;
	int32_t x7476 = -1;
	volatile int32_t t153 = 39577;

    t153 = ((x7473!=x7474)>>(x7475-x7476));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x7518 = -1LL;
	static volatile int64_t x7519 = INT64_MIN;
	int64_t x7520 = INT64_MIN;
	static int32_t t154 = -2;

    t154 = ((x7517!=x7518)>>(x7519-x7520));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x7541 = UINT32_MAX;
	volatile int64_t x7542 = -1LL;
	int32_t x7543 = 8;
	uint16_t x7544 = 1U;
	volatile int32_t t155 = 23225;

    t155 = ((x7541!=x7542)>>(x7543-x7544));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x7609 = 2573790552980LLU;
	uint32_t x7610 = 436734U;
	uint8_t x7611 = 2U;
	int8_t x7612 = -7;
	static int32_t t156 = -20876;

    t156 = ((x7609!=x7610)>>(x7611-x7612));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x7633 = 9743856052LLU;
	uint32_t x7634 = 5332U;
	int64_t x7635 = INT64_MIN;
	volatile int64_t x7636 = INT64_MIN;
	int32_t t157 = -261;

    t157 = ((x7633!=x7634)>>(x7635-x7636));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x7654 = INT16_MIN;
	static uint64_t x7655 = UINT64_MAX;
	static volatile int8_t x7656 = -7;
	static int32_t t158 = -315;

    t158 = ((x7653!=x7654)>>(x7655-x7656));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x7705 = 13807U;
	static volatile int8_t x7706 = INT8_MIN;

    t159 = ((x7705!=x7706)>>(x7707-x7708));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x7713 = INT8_MAX;
	int64_t x7714 = -46470LL;
	volatile int32_t x7715 = -1;
	volatile int32_t t160 = 1253;

    t160 = ((x7713!=x7714)>>(x7715-x7716));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x7717 = -2187;
	int64_t x7718 = INT64_MIN;
	volatile int64_t x7719 = -1LL;
	volatile int32_t t161 = -10549139;

    t161 = ((x7717!=x7718)>>(x7719-x7720));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x7741 = UINT32_MAX;
	static int16_t x7742 = INT16_MIN;
	int8_t x7744 = -4;
	static volatile int32_t t162 = -325;

    t162 = ((x7741!=x7742)>>(x7743-x7744));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x7817 = 17810U;
	int16_t x7818 = INT16_MIN;
	uint16_t x7819 = 3U;
	int64_t x7820 = -1LL;

    t163 = ((x7817!=x7818)>>(x7819-x7820));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x7833 = INT64_MAX;
	uint64_t x7834 = 33087869062542LLU;
	volatile uint64_t x7835 = 0LLU;
	int32_t x7836 = -1;
	int32_t t164 = 251460210;

    t164 = ((x7833!=x7834)>>(x7835-x7836));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x7861 = INT64_MAX;
	int8_t x7862 = INT8_MIN;
	volatile int16_t x7863 = -1;

    t165 = ((x7861!=x7862)>>(x7863-x7864));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x7869 = 28U;
	int64_t x7870 = INT64_MIN;
	int16_t x7872 = INT16_MIN;
	static volatile int32_t t166 = 280;

    t166 = ((x7869!=x7870)>>(x7871-x7872));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x7877 = -1LL;
	static int64_t x7878 = 516306944946907874LL;
	volatile int32_t t167 = 9577;

    t167 = ((x7877!=x7878)>>(x7879-x7880));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x7881 = INT16_MAX;
	int16_t x7882 = INT16_MIN;
	int8_t x7883 = -1;
	volatile uint64_t x7884 = UINT64_MAX;
	volatile int32_t t168 = -916;

    t168 = ((x7881!=x7882)>>(x7883-x7884));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x7893 = INT16_MAX;
	uint8_t x7894 = 53U;
	int64_t x7895 = INT64_MAX;
	int64_t x7896 = INT64_MAX;
	int32_t t169 = -590;

    t169 = ((x7893!=x7894)>>(x7895-x7896));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x7913 = INT8_MAX;
	int32_t x7915 = INT32_MIN;
	int32_t x7916 = INT32_MIN;
	volatile int32_t t170 = 0;

    t170 = ((x7913!=x7914)>>(x7915-x7916));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x7917 = 1565150067351864LLU;
	int64_t x7918 = -21906392646409LL;
	int64_t x7920 = INT64_MAX;
	volatile int32_t t171 = -103645;

    t171 = ((x7917!=x7918)>>(x7919-x7920));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x8033 = INT16_MAX;
	int8_t x8034 = -4;
	int64_t x8035 = -1LL;
	int8_t x8036 = -1;
	volatile int32_t t172 = 936759060;

    t172 = ((x8033!=x8034)>>(x8035-x8036));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x8097 = UINT8_MAX;
	uint16_t x8098 = 651U;
	volatile uint16_t x8099 = 0U;
	int8_t x8100 = -1;
	int32_t t173 = -1;

    t173 = ((x8097!=x8098)>>(x8099-x8100));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x8129 = -1;
	volatile int32_t x8130 = INT32_MIN;
	volatile int32_t x8131 = -1;
	int32_t x8132 = -1;
	int32_t t174 = 1232635;

    t174 = ((x8129!=x8130)>>(x8131-x8132));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x8137 = INT8_MIN;
	volatile int32_t x8138 = 4;
	uint16_t x8139 = 3U;
	volatile int16_t x8140 = 1;
	volatile int32_t t175 = -24641383;

    t175 = ((x8137!=x8138)>>(x8139-x8140));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x8150 = 1315;
	volatile int64_t x8151 = -1LL;
	int32_t t176 = -509662;

    t176 = ((x8149!=x8150)>>(x8151-x8152));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x8157 = INT16_MIN;
	static int8_t x8158 = 0;
	volatile int8_t x8160 = -1;
	int32_t t177 = -2257;

    t177 = ((x8157!=x8158)>>(x8159-x8160));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x8177 = INT32_MIN;
	volatile int64_t x8179 = -1LL;
	int32_t x8180 = -1;
	volatile int32_t t178 = 3500;

    t178 = ((x8177!=x8178)>>(x8179-x8180));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x8189 = UINT64_MAX;
	int8_t x8191 = 1;
	volatile int16_t x8192 = -1;
	volatile int32_t t179 = 10156;

    t179 = ((x8189!=x8190)>>(x8191-x8192));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x8201 = INT32_MAX;
	static int16_t x8203 = 1;
	int8_t x8204 = 0;

    t180 = ((x8201!=x8202)>>(x8203-x8204));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x8274 = INT32_MIN;
	uint8_t x8275 = 9U;
	int8_t x8276 = 0;
	volatile int32_t t181 = -61412386;

    t181 = ((x8273!=x8274)>>(x8275-x8276));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x8285 = INT32_MIN;
	int8_t x8286 = INT8_MAX;
	int8_t x8287 = INT8_MIN;
	int8_t x8288 = INT8_MIN;
	int32_t t182 = 818843528;

    t182 = ((x8285!=x8286)>>(x8287-x8288));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x8377 = INT16_MAX;
	volatile int32_t x8378 = -1;
	volatile int32_t x8379 = INT32_MIN;
	int32_t x8380 = INT32_MIN;
	static volatile int32_t t183 = 1890;

    t183 = ((x8377!=x8378)>>(x8379-x8380));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x8381 = -489;
	int64_t x8382 = INT64_MAX;
	uint16_t x8383 = 19U;
	int32_t x8384 = -1;
	int32_t t184 = -1148;

    t184 = ((x8381!=x8382)>>(x8383-x8384));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x8426 = 747082;
	int32_t x8427 = INT32_MIN;

    t185 = ((x8425!=x8426)>>(x8427-x8428));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x8449 = -5;
	int64_t x8450 = INT64_MIN;
	volatile int8_t x8451 = -1;
	uint32_t x8452 = UINT32_MAX;
	volatile int32_t t186 = -524617385;

    t186 = ((x8449!=x8450)>>(x8451-x8452));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x8809 = UINT64_MAX;
	int32_t x8810 = -1;
	int16_t x8811 = -1;
	volatile int64_t x8812 = -1LL;
	volatile int32_t t187 = -236464;

    t187 = ((x8809!=x8810)>>(x8811-x8812));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x8826 = -1;
	static int16_t x8827 = INT16_MIN;
	int16_t x8828 = INT16_MIN;
	int32_t t188 = 62963021;

    t188 = ((x8825!=x8826)>>(x8827-x8828));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x8881 = 800924041523LLU;
	static uint64_t x8883 = UINT64_MAX;
	volatile int64_t x8884 = -3LL;
	volatile int32_t t189 = 355500281;

    t189 = ((x8881!=x8882)>>(x8883-x8884));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x8921 = 4144U;
	uint8_t x8922 = UINT8_MAX;
	int16_t x8923 = -1;
	int8_t x8924 = -1;
	int32_t t190 = -31748301;

    t190 = ((x8921!=x8922)>>(x8923-x8924));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x8941 = 0U;
	volatile int64_t x8942 = -1LL;
	uint8_t x8943 = 0U;
	static volatile int64_t x8944 = -1LL;
	int32_t t191 = -2236962;

    t191 = ((x8941!=x8942)>>(x8943-x8944));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x8953 = INT32_MAX;
	static uint8_t x8954 = 9U;
	static int16_t x8955 = 20;
	static uint8_t x8956 = 0U;

    t192 = ((x8953!=x8954)>>(x8955-x8956));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x8961 = 7998;
	volatile uint32_t x8962 = UINT32_MAX;
	volatile int32_t x8963 = INT32_MIN;
	volatile int32_t x8964 = INT32_MIN;
	volatile int32_t t193 = -967034;

    t193 = ((x8961!=x8962)>>(x8963-x8964));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x8977 = INT8_MIN;
	uint64_t x8978 = 696221485350LLU;
	static int16_t x8980 = -31;
	volatile int32_t t194 = 0;

    t194 = ((x8977!=x8978)>>(x8979-x8980));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x9001 = INT16_MIN;
	uint32_t x9002 = 159U;
	static uint32_t x9003 = 1U;
	volatile int64_t x9004 = -1LL;
	volatile int32_t t195 = 7063;

    t195 = ((x9001!=x9002)>>(x9003-x9004));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x9078 = 3105U;
	int8_t x9079 = INT8_MIN;
	int8_t x9080 = INT8_MIN;
	static volatile int32_t t196 = -56;

    t196 = ((x9077!=x9078)>>(x9079-x9080));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x9097 = 3722;
	int8_t x9098 = INT8_MIN;
	volatile int16_t x9100 = -1;

    t197 = ((x9097!=x9098)>>(x9099-x9100));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x9149 = 6586U;
	int16_t x9150 = 252;
	uint16_t x9151 = 12U;
	volatile int32_t t198 = 3;

    t198 = ((x9149!=x9150)>>(x9151-x9152));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x9193 = INT32_MAX;
	static int8_t x9194 = -59;
	static int8_t x9195 = 7;
	int32_t t199 = -707827350;

    t199 = ((x9193!=x9194)>>(x9195-x9196));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

