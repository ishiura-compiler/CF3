#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x101 = 46U;
static int8_t x104 = INT8_MIN;
uint16_t x164 = 120U;
volatile uint16_t x289 = 12U;
int32_t t4 = -16726212;
static uint8_t x331 = 4U;
int8_t x425 = 0;
int16_t x428 = INT16_MAX;
volatile int16_t x459 = INT16_MAX;
volatile uint64_t x585 = 923809481774LLU;
volatile uint64_t x597 = 7985594200LLU;
volatile uint64_t t10 = 2973838152738688LLU;
uint16_t x888 = 338U;
static int8_t x998 = 24;
static int8_t x999 = INT8_MIN;
static uint8_t x1066 = 5U;
volatile int32_t x1079 = INT32_MIN;
static int16_t x1136 = INT16_MAX;
static int64_t x1175 = 0LL;
int32_t x1339 = 0;
volatile int8_t x1340 = 1;
static uint64_t t22 = 165100988803533LLU;
static volatile uint32_t x1528 = 2U;
int32_t x1540 = INT32_MIN;
static int32_t x1787 = INT32_MIN;
uint8_t x1837 = 29U;
int8_t x1839 = INT8_MAX;
int8_t x1940 = INT8_MAX;
int16_t x1963 = 269;
static volatile int8_t x2029 = 1;
int32_t x2059 = -1;
static int16_t x2166 = 15;
volatile int64_t x2444 = -1LL;
volatile uint32_t x2769 = UINT32_MAX;
volatile uint8_t x2988 = UINT8_MAX;
static volatile uint64_t t40 = 21259841716265LLU;
static uint32_t x3012 = 1638593964U;
static uint8_t x3155 = 0U;
uint16_t x3233 = 37U;
volatile int8_t x3309 = 44;
volatile uint16_t x3330 = 31U;
uint64_t x3331 = 78826LLU;
volatile uint64_t t48 = 243750417265769LLU;
uint8_t x3510 = 1U;
volatile int32_t t51 = 0;
uint64_t x3717 = 30237LLU;
uint32_t t54 = 1U;
static uint8_t x3944 = 43U;
int16_t x4052 = INT16_MAX;
int16_t x4171 = INT16_MAX;
static int32_t t60 = -24008510;
static int8_t x4427 = -1;
int16_t x4475 = INT16_MAX;
uint32_t x4476 = 664140235U;
uint16_t x4657 = UINT16_MAX;
uint32_t x4659 = 24359085U;
int16_t x5035 = -1;
volatile int32_t x5063 = -1;
static int32_t t68 = -40689;
uint32_t x5138 = 0U;
int32_t t71 = 1402;
int64_t x5244 = INT64_MIN;
int32_t t74 = -448109;
int16_t x5285 = 2;
int32_t t75 = 43;
static int8_t x5308 = -1;
static int32_t t76 = 1;
volatile uint64_t t77 = 103018678653793LLU;
uint8_t x5409 = 29U;
int8_t x5414 = 0;
volatile int32_t x5485 = 12725;
uint8_t x5486 = 0U;
int8_t x5488 = INT8_MIN;
int64_t x5510 = 0LL;
uint16_t x5511 = 4U;
volatile int32_t t82 = -1434;
volatile int16_t x5528 = INT16_MIN;
static volatile uint32_t x5868 = 3867859U;
uint32_t x5917 = 243053U;
static int8_t x5920 = -1;
int16_t x5982 = 1;
int32_t x5996 = -1;
uint16_t x6122 = 1U;
uint16_t x6123 = UINT16_MAX;
int64_t x6124 = INT64_MIN;
int32_t t89 = -117;
int32_t x6272 = -36;
volatile uint64_t x6333 = UINT64_MAX;
static int8_t x6334 = 1;
uint8_t x6367 = 6U;
uint8_t x6746 = 7U;
int8_t x6748 = INT8_MIN;


void f0(void) {
	uint16_t x57 = UINT16_MAX;
	volatile uint16_t x58 = 6U;
	volatile uint8_t x59 = 62U;
	int16_t x60 = INT16_MIN;
	int32_t t0 = 796;

	t0 = (x57<<(x58|(x59<x60)));

	if (t0 != 4194240) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x102 = 0;
	int32_t x103 = INT32_MAX;
	static int32_t t1 = -3700;

	t1 = (x101<<(x102|(x103<x104)));

	if (t1 != 46) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x145 = 1447U;
	volatile uint8_t x146 = 4U;
	int8_t x147 = INT8_MIN;
	uint32_t x148 = 733593364U;
	static volatile int32_t t2 = 66893370;

	t2 = (x145<<(x146|(x147<x148)));

	if (t2 != 23152) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x161 = UINT8_MAX;
	volatile int8_t x162 = 0;
	int64_t x163 = 1869822724LL;
	volatile int32_t t3 = 366809258;

	t3 = (x161<<(x162|(x163<x164)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x290 = 0LLU;
	volatile uint32_t x291 = 17851629U;
	volatile int32_t x292 = -1;

	t4 = (x289<<(x290|(x291<x292)));

	if (t4 != 24) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x329 = 424U;
	int64_t x330 = 0LL;
	int8_t x332 = INT8_MIN;
	int32_t t5 = -11808;

	t5 = (x329<<(x330|(x331<x332)));

	if (t5 != 424) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x426 = 1;
	int16_t x427 = INT16_MIN;
	int32_t t6 = 1;

	t6 = (x425<<(x426|(x427<x428)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x457 = 257059831823033267LL;
	uint16_t x458 = 3U;
	static int8_t x460 = -1;
	int64_t t7 = 129495742698818LL;

	t7 = (x457<<(x458|(x459<x460)));

	if (t7 != 2056478654584266136LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x586 = 0U;
	int8_t x587 = INT8_MAX;
	uint8_t x588 = UINT8_MAX;
	uint64_t t8 = 304582913396564LLU;

	t8 = (x585<<(x586|(x587<x588)));

	if (t8 != 1847618963548LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x598 = 0;
	uint32_t x599 = 59U;
	volatile uint8_t x600 = 4U;
	uint64_t t9 = 570866088LLU;

	t9 = (x597<<(x598|(x599<x600)));

	if (t9 != 7985594200LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x629 = 253281415110282LLU;
	uint16_t x630 = 4U;
	int16_t x631 = 12833;
	uint16_t x632 = 511U;

	t10 = (x629<<(x630|(x631<x632)));

	if (t10 != 4052502641764512LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x633 = 1LLU;
	static uint32_t x634 = 63U;
	static int64_t x635 = 272318002224LL;
	volatile uint64_t x636 = 0LLU;
	static uint64_t t11 = 369210204576LLU;

	t11 = (x633<<(x634|(x635<x636)));

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x645 = INT16_MAX;
	uint8_t x646 = 4U;
	static uint16_t x647 = 175U;
	int64_t x648 = INT64_MIN;
	int32_t t12 = 9593339;

	t12 = (x645<<(x646|(x647<x648)));

	if (t12 != 524272) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x885 = 1;
	static volatile int8_t x886 = 5;
	volatile uint8_t x887 = 2U;
	int32_t t13 = -1;

	t13 = (x885<<(x886|(x887<x888)));

	if (t13 != 32) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x997 = 3U;
	static volatile uint16_t x1000 = 31U;
	volatile int32_t t14 = 7827250;

	t14 = (x997<<(x998|(x999<x1000)));

	if (t14 != 100663296) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x1065 = UINT8_MAX;
	int32_t x1067 = -1;
	static uint32_t x1068 = 88U;
	int32_t t15 = -7;

	t15 = (x1065<<(x1066|(x1067<x1068)));

	if (t15 != 8160) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1077 = 29U;
	uint16_t x1078 = 0U;
	volatile int32_t x1080 = INT32_MIN;
	volatile int32_t t16 = -3;

	t16 = (x1077<<(x1078|(x1079<x1080)));

	if (t16 != 29) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x1133 = 46U;
	volatile int8_t x1134 = 13;
	int16_t x1135 = INT16_MIN;
	volatile int32_t t17 = 171;

	t17 = (x1133<<(x1134|(x1135<x1136)));

	if (t17 != 376832) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1173 = 29U;
	int32_t x1174 = 4;
	volatile int16_t x1176 = INT16_MAX;
	int32_t t18 = 4751356;

	t18 = (x1173<<(x1174|(x1175<x1176)));

	if (t18 != 928) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1265 = INT8_MAX;
	int16_t x1266 = 1;
	uint8_t x1267 = 0U;
	uint64_t x1268 = 2426815LLU;
	int32_t t19 = -311876;

	t19 = (x1265<<(x1266|(x1267<x1268)));

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1337 = UINT64_MAX;
	int64_t x1338 = 50LL;
	volatile uint64_t t20 = 2LLU;

	t20 = (x1337<<(x1338|(x1339<x1340)));

	if (t20 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1457 = 97;
	static volatile int8_t x1458 = 2;
	uint16_t x1459 = 2215U;
	volatile int32_t x1460 = -1;
	static volatile int32_t t21 = -886076957;

	t21 = (x1457<<(x1458|(x1459<x1460)));

	if (t21 != 388) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1497 = 0LLU;
	uint8_t x1498 = 2U;
	static int8_t x1499 = INT8_MIN;
	uint64_t x1500 = UINT64_MAX;

	t22 = (x1497<<(x1498|(x1499<x1500)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1525 = 1;
	static volatile int8_t x1526 = 2;
	uint64_t x1527 = 3588092208800LLU;
	static volatile int32_t t23 = -2;

	t23 = (x1525<<(x1526|(x1527<x1528)));

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1537 = 1U;
	int32_t x1538 = 0;
	int64_t x1539 = -1LL;
	int32_t t24 = -203;

	t24 = (x1537<<(x1538|(x1539<x1540)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1785 = UINT64_MAX;
	static uint8_t x1786 = 10U;
	int16_t x1788 = INT16_MIN;
	uint64_t t25 = 15290842762931758LLU;

	t25 = (x1785<<(x1786|(x1787<x1788)));

	if (t25 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1838 = 0;
	int32_t x1840 = INT32_MAX;
	static volatile int32_t t26 = -698709138;

	t26 = (x1837<<(x1838|(x1839<x1840)));

	if (t26 != 58) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1857 = 2021364567LL;
	uint8_t x1858 = 1U;
	uint32_t x1859 = 965U;
	uint32_t x1860 = UINT32_MAX;
	volatile int64_t t27 = 5221LL;

	t27 = (x1857<<(x1858|(x1859<x1860)));

	if (t27 != 4042729134LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1893 = 13011377306916455LLU;
	int8_t x1894 = 1;
	static uint16_t x1895 = 26443U;
	uint8_t x1896 = UINT8_MAX;
	volatile uint64_t t28 = 1LLU;

	t28 = (x1893<<(x1894|(x1895<x1896)));

	if (t28 != 26022754613832910LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1925 = 1;
	uint8_t x1926 = 21U;
	uint64_t x1927 = 29910785LLU;
	int16_t x1928 = 5398;
	int32_t t29 = 10451;

	t29 = (x1925<<(x1926|(x1927<x1928)));

	if (t29 != 2097152) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1937 = 1;
	int8_t x1938 = 4;
	uint32_t x1939 = UINT32_MAX;
	volatile int32_t t30 = -7902;

	t30 = (x1937<<(x1938|(x1939<x1940)));

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1961 = UINT32_MAX;
	static uint8_t x1962 = 5U;
	int32_t x1964 = INT32_MIN;
	volatile uint32_t t31 = 14U;

	t31 = (x1961<<(x1962|(x1963<x1964)));

	if (t31 != 4294967264U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1981 = 593433U;
	volatile uint8_t x1982 = 1U;
	volatile int32_t x1983 = 0;
	int32_t x1984 = 1;
	uint32_t t32 = 100028U;

	t32 = (x1981<<(x1982|(x1983<x1984)));

	if (t32 != 1186866U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2030 = 0U;
	static int16_t x2031 = -878;
	volatile int32_t x2032 = INT32_MIN;
	volatile int32_t t33 = -1065;

	t33 = (x2029<<(x2030|(x2031<x2032)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2057 = UINT8_MAX;
	uint16_t x2058 = 0U;
	static int64_t x2060 = -45792856111277LL;
	volatile int32_t t34 = 1047773684;

	t34 = (x2057<<(x2058|(x2059<x2060)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2165 = 43;
	static int64_t x2167 = -123750680LL;
	uint16_t x2168 = UINT16_MAX;
	int32_t t35 = 596;

	t35 = (x2165<<(x2166|(x2167<x2168)));

	if (t35 != 1409024) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2305 = INT64_MAX;
	int16_t x2306 = 0;
	int64_t x2307 = INT64_MAX;
	int16_t x2308 = -1;
	static int64_t t36 = INT64_MAX;

	t36 = (x2305<<(x2306|(x2307<x2308)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2441 = 0;
	static int16_t x2442 = 13;
	int32_t x2443 = INT32_MAX;
	volatile int32_t t37 = 496403;

	t37 = (x2441<<(x2442|(x2443<x2444)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2637 = 41;
	volatile uint8_t x2638 = 18U;
	int64_t x2639 = -717856LL;
	static int64_t x2640 = 24138742232344LL;
	static volatile int32_t t38 = -225;

	t38 = (x2637<<(x2638|(x2639<x2640)));

	if (t38 != 21495808) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x2770 = 12U;
	static volatile int64_t x2771 = -106LL;
	static volatile int8_t x2772 = INT8_MIN;
	volatile uint32_t t39 = 14877691U;

	t39 = (x2769<<(x2770|(x2771<x2772)));

	if (t39 != 4294963200U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2985 = UINT64_MAX;
	int32_t x2986 = 33;
	int32_t x2987 = INT32_MIN;

	t40 = (x2985<<(x2986|(x2987<x2988)));

	if (t40 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x3009 = UINT32_MAX;
	volatile int16_t x3010 = 1;
	int16_t x3011 = INT16_MIN;
	uint32_t t41 = 23U;

	t41 = (x3009<<(x3010|(x3011<x3012)));

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3109 = UINT32_MAX;
	static uint8_t x3110 = 0U;
	uint16_t x3111 = 1301U;
	int8_t x3112 = INT8_MIN;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x3109<<(x3110|(x3111<x3112)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3153 = 5;
	uint32_t x3154 = 4U;
	static uint64_t x3156 = 20153441858LLU;
	static int32_t t43 = -4571682;

	t43 = (x3153<<(x3154|(x3155<x3156)));

	if (t43 != 160) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x3234 = 0;
	int32_t x3235 = INT32_MIN;
	int64_t x3236 = INT64_MIN;
	volatile int32_t t44 = 7;

	t44 = (x3233<<(x3234|(x3235<x3236)));

	if (t44 != 37) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3249 = 2369U;
	volatile uint32_t x3250 = 1U;
	int8_t x3251 = INT8_MAX;
	uint64_t x3252 = 692825455LLU;
	static int32_t t45 = -424780274;

	t45 = (x3249<<(x3250|(x3251<x3252)));

	if (t45 != 4738) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3269 = 11U;
	uint16_t x3270 = 15U;
	int16_t x3271 = INT16_MAX;
	uint16_t x3272 = 0U;
	static int32_t t46 = -78;

	t46 = (x3269<<(x3270|(x3271<x3272)));

	if (t46 != 360448) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x3310 = 1;
	volatile uint16_t x3311 = 0U;
	uint8_t x3312 = 20U;
	int32_t t47 = -5075813;

	t47 = (x3309<<(x3310|(x3311<x3312)));

	if (t47 != 88) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3329 = 961274918081LLU;
	static uint16_t x3332 = UINT16_MAX;

	t48 = (x3329<<(x3330|(x3331<x3332)));

	if (t48 != 16733575629726810112LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x3509 = UINT16_MAX;
	volatile int32_t x3511 = -1;
	static volatile int16_t x3512 = 0;
	int32_t t49 = -34217;

	t49 = (x3509<<(x3510|(x3511<x3512)));

	if (t49 != 131070) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3573 = 2;
	int8_t x3574 = 0;
	uint64_t x3575 = 8476394650327675LLU;
	uint64_t x3576 = UINT64_MAX;
	volatile int32_t t50 = 141572224;

	t50 = (x3573<<(x3574|(x3575<x3576)));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3665 = 46;
	uint8_t x3666 = 14U;
	uint16_t x3667 = 254U;
	int64_t x3668 = -2LL;

	t51 = (x3665<<(x3666|(x3667<x3668)));

	if (t51 != 753664) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3685 = 11294;
	int32_t x3686 = 1;
	uint8_t x3687 = 119U;
	static volatile int8_t x3688 = INT8_MAX;
	int32_t t52 = 106;

	t52 = (x3685<<(x3686|(x3687<x3688)));

	if (t52 != 22588) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x3718 = 1;
	int8_t x3719 = INT8_MIN;
	uint64_t x3720 = UINT64_MAX;
	uint64_t t53 = 449985522LLU;

	t53 = (x3717<<(x3718|(x3719<x3720)));

	if (t53 != 60474LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3789 = UINT32_MAX;
	static uint16_t x3790 = 25U;
	uint32_t x3791 = 110554850U;
	static int16_t x3792 = -1;

	t54 = (x3789<<(x3790|(x3791<x3792)));

	if (t54 != 4261412864U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x3941 = INT32_MAX;
	int16_t x3942 = 0;
	uint64_t x3943 = UINT64_MAX;
	int32_t t55 = INT32_MAX;

	t55 = (x3941<<(x3942|(x3943<x3944)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x4021 = 4LLU;
	static volatile int16_t x4022 = 1;
	volatile int32_t x4023 = INT32_MAX;
	static int8_t x4024 = INT8_MIN;
	static uint64_t t56 = 36252632544697060LLU;

	t56 = (x4021<<(x4022|(x4023<x4024)));

	if (t56 != 8LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x4049 = 5;
	static int32_t x4050 = 1;
	int64_t x4051 = INT64_MIN;
	int32_t t57 = 1056614412;

	t57 = (x4049<<(x4050|(x4051<x4052)));

	if (t57 != 10) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x4061 = INT16_MAX;
	volatile int16_t x4062 = 1;
	uint16_t x4063 = UINT16_MAX;
	int32_t x4064 = INT32_MIN;
	static int32_t t58 = 5379929;

	t58 = (x4061<<(x4062|(x4063<x4064)));

	if (t58 != 65534) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x4169 = 3243U;
	volatile int8_t x4170 = 0;
	uint16_t x4172 = UINT16_MAX;
	int32_t t59 = -330;

	t59 = (x4169<<(x4170|(x4171<x4172)));

	if (t59 != 6486) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x4197 = 9U;
	uint32_t x4198 = 1U;
	static int32_t x4199 = -52111767;
	int16_t x4200 = -1;

	t60 = (x4197<<(x4198|(x4199<x4200)));

	if (t60 != 18) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x4369 = 1U;
	int8_t x4370 = 1;
	volatile int8_t x4371 = -1;
	int16_t x4372 = INT16_MIN;
	static int32_t t61 = -34306041;

	t61 = (x4369<<(x4370|(x4371<x4372)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4425 = 102629150U;
	uint8_t x4426 = 3U;
	uint16_t x4428 = 0U;
	volatile uint32_t t62 = 40U;

	t62 = (x4425<<(x4426|(x4427<x4428)));

	if (t62 != 821033200U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4473 = 5455LL;
	volatile int32_t x4474 = 0;
	volatile int64_t t63 = 818540707751LL;

	t63 = (x4473<<(x4474|(x4475<x4476)));

	if (t63 != 10910LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4658 = 0;
	static volatile int64_t x4660 = -17198465689903571LL;
	static volatile int32_t t64 = -321734028;

	t64 = (x4657<<(x4658|(x4659<x4660)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x4753 = UINT32_MAX;
	volatile int8_t x4754 = 0;
	static volatile int8_t x4755 = 1;
	static int32_t x4756 = -1;
	uint32_t t65 = UINT32_MAX;

	t65 = (x4753<<(x4754|(x4755<x4756)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x5001 = 156U;
	uint8_t x5002 = 1U;
	uint16_t x5003 = UINT16_MAX;
	uint64_t x5004 = UINT64_MAX;
	volatile uint32_t t66 = 29171U;

	t66 = (x5001<<(x5002|(x5003<x5004)));

	if (t66 != 312U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x5033 = 15LLU;
	int16_t x5034 = 9;
	int64_t x5036 = -1LL;
	static uint64_t t67 = 81089639390741318LLU;

	t67 = (x5033<<(x5034|(x5035<x5036)));

	if (t67 != 7680LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x5061 = 394U;
	static int8_t x5062 = 0;
	volatile uint32_t x5064 = 27314U;

	t68 = (x5061<<(x5062|(x5063<x5064)));

	if (t68 != 394) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x5069 = 42243727U;
	int8_t x5070 = 0;
	int8_t x5071 = INT8_MAX;
	int32_t x5072 = -374605;
	volatile uint32_t t69 = 53U;

	t69 = (x5069<<(x5070|(x5071<x5072)));

	if (t69 != 42243727U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x5137 = UINT32_MAX;
	static uint8_t x5139 = UINT8_MAX;
	int8_t x5140 = -37;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x5137<<(x5138|(x5139<x5140)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x5145 = 6U;
	int8_t x5146 = 23;
	static uint32_t x5147 = 13298935U;
	static volatile int32_t x5148 = -1023;

	t71 = (x5145<<(x5146|(x5147<x5148)));

	if (t71 != 50331648) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5205 = 1;
	volatile int8_t x5206 = 5;
	int64_t x5207 = INT64_MIN;
	volatile uint8_t x5208 = UINT8_MAX;
	int32_t t72 = -1781250;

	t72 = (x5205<<(x5206|(x5207<x5208)));

	if (t72 != 32) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5209 = INT8_MAX;
	int32_t x5210 = 3;
	uint16_t x5211 = UINT16_MAX;
	static volatile uint32_t x5212 = UINT32_MAX;
	volatile int32_t t73 = -85;

	t73 = (x5209<<(x5210|(x5211<x5212)));

	if (t73 != 1016) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5241 = UINT8_MAX;
	static volatile int16_t x5242 = 1;
	int16_t x5243 = INT16_MAX;

	t74 = (x5241<<(x5242|(x5243<x5244)));

	if (t74 != 510) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5286 = 1U;
	int32_t x5287 = INT32_MIN;
	volatile int16_t x5288 = INT16_MIN;

	t75 = (x5285<<(x5286|(x5287<x5288)));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x5305 = 118;
	uint8_t x5306 = 1U;
	static int8_t x5307 = 2;

	t76 = (x5305<<(x5306|(x5307<x5308)));

	if (t76 != 236) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5329 = 2LLU;
	volatile int8_t x5330 = 1;
	uint16_t x5331 = 847U;
	volatile int32_t x5332 = INT32_MIN;

	t77 = (x5329<<(x5330|(x5331<x5332)));

	if (t77 != 4LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x5410 = 1U;
	volatile int16_t x5411 = 116;
	int64_t x5412 = INT64_MAX;
	static int32_t t78 = 0;

	t78 = (x5409<<(x5410|(x5411<x5412)));

	if (t78 != 58) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5413 = UINT64_MAX;
	static uint16_t x5415 = 24589U;
	int32_t x5416 = -1;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x5413<<(x5414|(x5415<x5416)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x5487 = UINT16_MAX;
	volatile int32_t t80 = 54573;

	t80 = (x5485<<(x5486|(x5487<x5488)));

	if (t80 != 12725) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5489 = UINT64_MAX;
	volatile uint8_t x5490 = 26U;
	uint8_t x5491 = 9U;
	int8_t x5492 = 59;
	uint64_t t81 = 4743LLU;

	t81 = (x5489<<(x5490|(x5491<x5492)));

	if (t81 != 18446744073575333888LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5509 = 0;
	uint32_t x5512 = UINT32_MAX;

	t82 = (x5509<<(x5510|(x5511<x5512)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x5525 = 16122725LL;
	int16_t x5526 = 1;
	uint16_t x5527 = 1U;
	int64_t t83 = -4952LL;

	t83 = (x5525<<(x5526|(x5527<x5528)));

	if (t83 != 32245450LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5845 = 6U;
	uint32_t x5846 = 1U;
	int8_t x5847 = -29;
	int64_t x5848 = 571663410635684LL;
	volatile uint32_t t84 = 2U;

	t84 = (x5845<<(x5846|(x5847<x5848)));

	if (t84 != 12U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5865 = UINT16_MAX;
	volatile int8_t x5866 = 3;
	static int16_t x5867 = -38;
	static int32_t t85 = -1;

	t85 = (x5865<<(x5866|(x5867<x5868)));

	if (t85 != 524280) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5918 = 12U;
	volatile uint8_t x5919 = UINT8_MAX;
	uint32_t t86 = 38499218U;

	t86 = (x5917<<(x5918|(x5919<x5920)));

	if (t86 != 995545088U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5981 = 7U;
	int8_t x5983 = 3;
	int16_t x5984 = -352;
	int32_t t87 = 1;

	t87 = (x5981<<(x5982|(x5983<x5984)));

	if (t87 != 14) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5993 = 1031LLU;
	volatile uint8_t x5994 = 58U;
	static volatile int8_t x5995 = INT8_MIN;
	uint64_t t88 = 782644090557LLU;

	t88 = (x5993<<(x5994|(x5995<x5996)));

	if (t88 != 4035225266123964416LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x6121 = 4623U;

	t89 = (x6121<<(x6122|(x6123<x6124)));

	if (t89 != 9246) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x6157 = 15U;
	static int64_t x6158 = 1LL;
	int16_t x6159 = INT16_MIN;
	uint64_t x6160 = 97254692599985233LLU;
	static volatile int32_t t90 = 215492585;

	t90 = (x6157<<(x6158|(x6159<x6160)));

	if (t90 != 30) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x6193 = 5155636031074LLU;
	static uint32_t x6194 = 20U;
	static volatile int64_t x6195 = INT64_MIN;
	volatile int8_t x6196 = 0;
	volatile uint64_t t91 = 182568LLU;

	t91 = (x6193<<(x6194|(x6195<x6196)));

	if (t91 != 10812152413838901248LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x6237 = 159953471LL;
	uint8_t x6238 = 3U;
	uint32_t x6239 = 11837U;
	int32_t x6240 = INT32_MAX;
	static volatile int64_t t92 = 799313099LL;

	t92 = (x6237<<(x6238|(x6239<x6240)));

	if (t92 != 1279627768LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6269 = 0U;
	int8_t x6270 = 1;
	static uint8_t x6271 = UINT8_MAX;
	volatile int32_t t93 = 8108406;

	t93 = (x6269<<(x6270|(x6271<x6272)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x6335 = UINT8_MAX;
	int8_t x6336 = INT8_MIN;
	uint64_t t94 = 814948567405452397LLU;

	t94 = (x6333<<(x6334|(x6335<x6336)));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6365 = INT8_MAX;
	uint32_t x6366 = 7U;
	int64_t x6368 = 45772184873572LL;
	int32_t t95 = -73914277;

	t95 = (x6365<<(x6366|(x6367<x6368)));

	if (t95 != 16256) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6469 = 1064U;
	uint8_t x6470 = 6U;
	uint16_t x6471 = UINT16_MAX;
	static volatile int32_t x6472 = INT32_MIN;
	volatile int32_t t96 = 1201270;

	t96 = (x6469<<(x6470|(x6471<x6472)));

	if (t96 != 68096) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6657 = INT16_MAX;
	int16_t x6658 = 12;
	uint64_t x6659 = 6119053LLU;
	int16_t x6660 = INT16_MAX;
	static int32_t t97 = -879913889;

	t97 = (x6657<<(x6658|(x6659<x6660)));

	if (t97 != 134213632) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6721 = 6254U;
	volatile uint16_t x6722 = 1U;
	static int32_t x6723 = INT32_MIN;
	int32_t x6724 = -1;
	volatile int32_t t98 = 61698632;

	t98 = (x6721<<(x6722|(x6723<x6724)));

	if (t98 != 12508) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6745 = INT16_MAX;
	uint32_t x6747 = 15U;
	int32_t t99 = 2011388;

	t99 = (x6745<<(x6746|(x6747<x6748)));

	if (t99 != 4194176) { NG(); } else { ; }
	
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

