#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x14 = INT8_MAX;
uint16_t x39 = UINT16_MAX;
int16_t x75 = -1;
uint16_t x97 = 1538U;
int16_t x98 = -1;
int32_t x100 = INT32_MAX;
volatile int64_t t7 = -1LL;
static int32_t x149 = 27;
static int64_t x176 = -1LL;
int64_t t11 = 2008444033977489347LL;
uint64_t x181 = 1751601527LLU;
static uint16_t x190 = 5811U;
static uint64_t x197 = 2LLU;
volatile uint8_t x199 = 2U;
volatile uint16_t x208 = UINT16_MAX;
uint8_t x259 = UINT8_MAX;
volatile int32_t x295 = INT32_MIN;
uint8_t x317 = 5U;
int32_t x320 = 1459;
int8_t x337 = -1;
int16_t x383 = INT16_MAX;
volatile uint64_t t25 = 2LLU;
volatile uint64_t t26 = 111427674LLU;
static int32_t x405 = INT32_MIN;
static uint32_t x406 = 206U;
int8_t x408 = 2;
uint32_t t27 = 62U;
volatile int32_t t29 = -1;
int64_t t32 = -13LL;
uint16_t x517 = 40U;
uint64_t x518 = 128329LLU;
int64_t x520 = INT64_MIN;
static volatile uint64_t x527 = UINT64_MAX;
int8_t x528 = -1;
volatile int32_t t35 = -117;
static int32_t x613 = INT32_MAX;
volatile uint32_t t39 = 2330U;
uint64_t x630 = 7897849384671LLU;
volatile uint8_t x631 = 0U;
volatile uint64_t t40 = 0LLU;
int32_t x682 = 1;
uint64_t x684 = 50LLU;
uint8_t x688 = 19U;
int32_t x745 = INT32_MIN;
static uint64_t x746 = 215237626710539LLU;
int8_t x761 = INT8_MAX;
static uint64_t x763 = 0LLU;
uint8_t x785 = UINT8_MAX;
int16_t x787 = INT16_MAX;
static uint64_t t50 = 655440383954LLU;
uint32_t x857 = 951U;
int64_t x882 = -28LL;
int8_t x891 = INT8_MIN;
int32_t x897 = INT32_MIN;
static volatile int32_t t62 = 92462;
uint16_t x913 = UINT16_MAX;
int16_t x914 = 215;
static int8_t x948 = INT8_MIN;
uint8_t x951 = 5U;
int64_t x952 = INT64_MIN;
uint32_t t68 = 7332097U;
uint32_t x990 = UINT32_MAX;
volatile uint8_t x1005 = 1U;
int64_t x1006 = -484964LL;
uint32_t x1007 = 2U;
uint16_t x1013 = UINT16_MAX;
static volatile int8_t x1015 = INT8_MIN;
uint8_t x1051 = 1U;
int8_t x1117 = 0;
static int8_t x1118 = 1;
volatile uint64_t x1145 = 1568216655797LLU;
int32_t x1146 = -5659;
uint8_t x1190 = UINT8_MAX;
uint8_t x1211 = 4U;
int32_t x1239 = 29984434;
volatile int64_t x1242 = -865213389LL;
volatile uint16_t x1250 = 1U;
volatile int32_t t90 = 70694385;
uint64_t x1262 = 62139227098LLU;
static uint16_t x1273 = 904U;
uint64_t x1346 = 41265800985LLU;
volatile int16_t x1347 = -1;
volatile uint8_t x1397 = 44U;
int16_t x1405 = INT16_MIN;
int64_t x1408 = INT64_MAX;
static uint32_t x1409 = 79U;
int8_t x1412 = -1;


void f0(void) {
	uint8_t x13 = 1U;
	uint16_t x15 = 3U;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t0 = 2871306;

	t0 = ((x13%x14)<<(x15%x16));

	if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MIN;
	int16_t x40 = -29;
	volatile int64_t t1 = -79914483LL;

	t1 = ((x37%x38)<<(x39%x40));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x61 = 15125;
	int8_t x62 = INT8_MIN;
	volatile int32_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	static volatile int32_t t2 = -41977;

	t2 = ((x61%x62)<<(x63%x64));

	if (t2 != 21) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x65 = 61125;
	uint64_t x66 = 25267547LLU;
	int32_t x67 = -222014821;
	int32_t x68 = -1;
	uint64_t t3 = 1670LLU;

	t3 = ((x65%x66)<<(x67%x68));

	if (t3 != 61125LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x73 = INT64_MAX;
	uint64_t x74 = 3476LLU;
	int32_t x76 = -1;
	uint64_t t4 = 13811961577105LLU;

	t4 = ((x73%x74)<<(x75%x76));

	if (t4 != 1723LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x85 = INT8_MAX;
	uint64_t x86 = 1793823779LLU;
	static int8_t x87 = 7;
	static uint32_t x88 = UINT32_MAX;
	static volatile uint64_t t5 = 0LLU;

	t5 = ((x85%x86)<<(x87%x88));

	if (t5 != 16256LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x99 = 2U;
	static int32_t t6 = 1;

	t6 = ((x97%x98)<<(x99%x100));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x106 = -1LL;
	volatile uint8_t x107 = 36U;
	int16_t x108 = INT16_MAX;

	t7 = ((x105%x106)<<(x107%x108));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x117 = 32203747709LLU;
	volatile int16_t x118 = -1;
	int16_t x119 = 9362;
	static volatile int8_t x120 = INT8_MIN;
	volatile uint64_t t8 = 266080518LLU;

	t8 = ((x117%x118)<<(x119%x120));

	if (t8 != 8442019239428096LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x133 = 5905U;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = 2U;
	int8_t x136 = -1;
	volatile uint32_t t9 = 167941U;

	t9 = ((x133%x134)<<(x135%x136));

	if (t9 != 5905U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x150 = UINT8_MAX;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t10 = -1;

	t10 = ((x149%x150)<<(x151%x152));

	if (t10 != 27) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x173 = 23655036LL;
	static volatile int8_t x174 = 7;
	static int32_t x175 = INT32_MIN;

	t11 = ((x173%x174)<<(x175%x176));

	if (t11 != 6LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x182 = INT16_MAX;
	uint8_t x183 = 3U;
	volatile int8_t x184 = INT8_MIN;
	volatile uint64_t t12 = 902LLU;

	t12 = ((x181%x182)<<(x183%x184));

	if (t12 != 70200LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x189 = INT64_MAX;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MIN;
	int64_t t13 = -47045LL;

	t13 = ((x189%x190)<<(x191%x192));

	if (t13 != 5116LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x198 = INT16_MIN;
	uint32_t x200 = 101U;
	volatile uint64_t t14 = 8961336680470308217LLU;

	t14 = ((x197%x198)<<(x199%x200));

	if (t14 != 8LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x205 = 0U;
	static uint16_t x206 = 229U;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t t15 = -821;

	t15 = ((x205%x206)<<(x207%x208));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x209 = UINT8_MAX;
	int8_t x210 = -1;
	uint16_t x211 = 5U;
	uint32_t x212 = 94U;
	int32_t t16 = 1;

	t16 = ((x209%x210)<<(x211%x212));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x237 = 753;
	int8_t x238 = INT8_MIN;
	uint32_t x239 = UINT32_MAX;
	static uint8_t x240 = 11U;
	int32_t t17 = -3308;

	t17 = ((x237%x238)<<(x239%x240));

	if (t17 != 904) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MIN;
	uint8_t x260 = 2U;
	static int32_t t18 = -775353631;

	t18 = ((x257%x258)<<(x259%x260));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int32_t x274 = INT32_MIN;
	volatile int8_t x275 = 9;
	int8_t x276 = INT8_MAX;
	static volatile uint64_t t19 = 4229385011LLU;

	t19 = ((x273%x274)<<(x275%x276));

	if (t19 != 1099511627264LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x293 = -2753;
	uint64_t x294 = UINT64_MAX;
	volatile int8_t x296 = -1;
	uint64_t t20 = 5451LLU;

	t20 = ((x293%x294)<<(x295%x296));

	if (t20 != 18446744073709548863LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x309 = 4835U;
	uint32_t x310 = UINT32_MAX;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = -1LL;
	volatile uint32_t t21 = 57997788U;

	t21 = ((x309%x310)<<(x311%x312));

	if (t21 != 4835U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 7U;
	volatile int32_t t22 = -55299;

	t22 = ((x317%x318)<<(x319%x320));

	if (t22 != 640) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	int8_t x328 = -1;
	uint64_t t23 = 12262523715868LLU;

	t23 = ((x325%x326)<<(x327%x328));

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x338 = -1;
	static uint8_t x339 = 23U;
	int32_t x340 = 3032;
	int32_t t24 = -4;

	t24 = ((x337%x338)<<(x339%x340));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x381 = UINT32_MAX;
	uint64_t x382 = 7164308LLU;
	static uint16_t x384 = 3U;

	t25 = ((x381%x382)<<(x383%x384));

	if (t25 != 7093606LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x393 = 4509LL;
	static uint64_t x394 = 14321017934LLU;
	int16_t x395 = 102;
	static int32_t x396 = -1;

	t26 = ((x393%x394)<<(x395%x396));

	if (t26 != 4509LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x407 = 0U;

	t27 = ((x405%x406)<<(x407%x408));

	if (t27 != 186U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x409 = -4094LL;
	int64_t x410 = -1LL;
	uint32_t x411 = 21U;
	static int16_t x412 = 1;
	volatile int64_t t28 = 7417LL;

	t28 = ((x409%x410)<<(x411%x412));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x425 = 1388;
	static volatile int32_t x426 = -1;
	int64_t x427 = INT64_MIN;
	volatile int64_t x428 = -1LL;

	t29 = ((x425%x426)<<(x427%x428));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x465 = 981271469U;
	static uint64_t x466 = UINT64_MAX;
	int32_t x467 = INT32_MIN;
	int8_t x468 = INT8_MIN;
	volatile uint64_t t30 = 599110612623312615LLU;

	t30 = ((x465%x466)<<(x467%x468));

	if (t30 != 981271469LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x477 = 13U;
	int16_t x478 = 3;
	static volatile uint8_t x479 = 19U;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t31 = -21;

	t31 = ((x477%x478)<<(x479%x480));

	if (t31 != 524288) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x509 = 16339735403LL;
	static uint32_t x510 = 10510U;
	int64_t x511 = INT64_MIN;
	int16_t x512 = INT16_MIN;

	t32 = ((x509%x510)<<(x511%x512));

	if (t32 != 6563LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x519 = 16U;
	volatile uint64_t t33 = 2052736LLU;

	t33 = ((x517%x518)<<(x519%x520));

	if (t33 != 2621440LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x525 = 79446223;
	int64_t x526 = INT64_MAX;
	volatile int64_t t34 = 26828562853484269LL;

	t34 = ((x525%x526)<<(x527%x528));

	if (t34 != 79446223LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x577 = -7919890;
	int16_t x578 = 10;
	uint16_t x579 = 1U;
	static int16_t x580 = INT16_MIN;

	t35 = ((x577%x578)<<(x579%x580));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x589 = INT64_MIN;
	int32_t x590 = INT32_MIN;
	static int16_t x591 = INT16_MIN;
	volatile int16_t x592 = -1;
	volatile int64_t t36 = 877211683375358LL;

	t36 = ((x589%x590)<<(x591%x592));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x609 = 1;
	int64_t x610 = INT64_MAX;
	static int8_t x611 = -1;
	uint32_t x612 = 281U;
	int64_t t37 = -398382331091LL;

	t37 = ((x609%x610)<<(x611%x612));

	if (t37 != 17179869184LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x614 = -1LL;
	int8_t x615 = 9;
	int8_t x616 = INT8_MAX;
	int64_t t38 = -6378LL;

	t38 = ((x613%x614)<<(x615%x616));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x625 = 14U;
	uint32_t x626 = UINT32_MAX;
	int16_t x627 = -502;
	int8_t x628 = 1;

	t39 = ((x625%x626)<<(x627%x628));

	if (t39 != 14U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x629 = 13U;
	int8_t x632 = INT8_MIN;

	t40 = ((x629%x630)<<(x631%x632));

	if (t40 != 13LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x681 = UINT64_MAX;
	int16_t x683 = -1;
	uint64_t t41 = 137268434690LLU;

	t41 = ((x681%x682)<<(x683%x684));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x685 = INT32_MIN;
	volatile int8_t x686 = -1;
	static volatile uint8_t x687 = 1U;
	int32_t t42 = -704692818;

	t42 = ((x685%x686)<<(x687%x688));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x721 = 363903695;
	volatile int8_t x722 = INT8_MAX;
	int16_t x723 = 0;
	int32_t x724 = INT32_MIN;
	int32_t t43 = 7;

	t43 = ((x721%x722)<<(x723%x724));

	if (t43 != 54) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x747 = 17;
	int32_t x748 = -1;
	uint64_t t44 = 195154732277307009LLU;

	t44 = ((x745%x746)<<(x747%x748));

	if (t44 != 18511962033512LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x757 = -1;
	uint32_t x758 = 136003492U;
	int64_t x759 = INT64_MAX;
	uint64_t x760 = 3LLU;
	uint32_t t45 = 26266384U;

	t45 = ((x757%x758)<<(x759%x760));

	if (t45 != 157718086U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x762 = INT16_MIN;
	static int32_t x764 = 7;
	volatile int32_t t46 = 35;

	t46 = ((x761%x762)<<(x763%x764));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x769 = -1;
	volatile int64_t x770 = 1LL;
	int16_t x771 = 1;
	uint32_t x772 = 451772U;
	volatile int64_t t47 = 10239LL;

	t47 = ((x769%x770)<<(x771%x772));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x777 = 1U;
	int32_t x778 = -6;
	uint32_t x779 = 26U;
	volatile int32_t x780 = 20;
	static volatile int32_t t48 = -820875;

	t48 = ((x777%x778)<<(x779%x780));

	if (t48 != 64) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x786 = UINT8_MAX;
	int32_t x788 = -1;
	int32_t t49 = -69558978;

	t49 = ((x785%x786)<<(x787%x788));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x813 = 979143077017995307LLU;
	volatile int16_t x814 = -1;
	int8_t x815 = 5;
	int32_t x816 = INT32_MIN;

	t50 = ((x813%x814)<<(x815%x816));

	if (t50 != 12885834390866298208LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x829 = INT16_MIN;
	int16_t x830 = INT16_MIN;
	int8_t x831 = -1;
	static int16_t x832 = -1;
	volatile int32_t t51 = 652;

	t51 = ((x829%x830)<<(x831%x832));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x833 = -7;
	static int8_t x834 = -1;
	int64_t x835 = 1968083565674284152LL;
	static int32_t x836 = -1;
	int32_t t52 = -1;

	t52 = ((x833%x834)<<(x835%x836));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x841 = 44843;
	int32_t x842 = 1068289;
	int64_t x843 = -1LL;
	static int32_t x844 = -1;
	static int32_t t53 = -22257;

	t53 = ((x841%x842)<<(x843%x844));

	if (t53 != 44843) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x849 = 422105267LL;
	int16_t x850 = -1109;
	int16_t x851 = 0;
	volatile int16_t x852 = INT16_MIN;
	volatile int64_t t54 = -258351LL;

	t54 = ((x849%x850)<<(x851%x852));

	if (t54 != 1014LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x858 = INT16_MIN;
	uint8_t x859 = UINT8_MAX;
	static uint8_t x860 = 1U;
	uint32_t t55 = 1977093430U;

	t55 = ((x857%x858)<<(x859%x860));

	if (t55 != 951U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x865 = INT32_MAX;
	uint8_t x866 = 33U;
	int8_t x867 = INT8_MIN;
	static int8_t x868 = INT8_MIN;
	volatile int32_t t56 = 156;

	t56 = ((x865%x866)<<(x867%x868));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x869 = 14;
	int16_t x870 = INT16_MAX;
	uint16_t x871 = 11U;
	int8_t x872 = INT8_MIN;
	volatile int32_t t57 = -3034;

	t57 = ((x869%x870)<<(x871%x872));

	if (t57 != 28672) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x881 = UINT64_MAX;
	static volatile uint8_t x883 = 14U;
	int8_t x884 = INT8_MIN;
	volatile uint64_t t58 = 0LLU;

	t58 = ((x881%x882)<<(x883%x884));

	if (t58 != 442368LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x885 = 3LLU;
	int8_t x886 = 5;
	int8_t x887 = INT8_MIN;
	int32_t x888 = -1;
	volatile uint64_t t59 = 1561735LLU;

	t59 = ((x885%x886)<<(x887%x888));

	if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x889 = 240018LLU;
	uint32_t x890 = 171U;
	uint32_t x892 = 57U;
	volatile uint64_t t60 = 189743413242532LLU;

	t60 = ((x889%x890)<<(x891%x892));

	if (t60 != 215040LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x898 = UINT64_MAX;
	int16_t x899 = -223;
	static int64_t x900 = -1LL;
	volatile uint64_t t61 = 98144LLU;

	t61 = ((x897%x898)<<(x899%x900));

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x905 = 23;
	static int8_t x906 = -1;
	static int16_t x907 = INT16_MAX;
	int64_t x908 = 2LL;

	t62 = ((x905%x906)<<(x907%x908));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x915 = INT8_MAX;
	int32_t x916 = -1;
	int32_t t63 = -103;

	t63 = ((x913%x914)<<(x915%x916));

	if (t63 != 175) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x917 = UINT16_MAX;
	int16_t x918 = INT16_MIN;
	int8_t x919 = INT8_MIN;
	static int32_t x920 = -1;
	volatile int32_t t64 = 11393;

	t64 = ((x917%x918)<<(x919%x920));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x933 = INT32_MIN;
	uint32_t x934 = 336174U;
	volatile int16_t x935 = -54;
	static int32_t x936 = -1;
	volatile uint32_t t65 = 62565719U;

	t65 = ((x933%x934)<<(x935%x936));

	if (t65 != 4136U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x945 = INT16_MAX;
	int8_t x946 = -1;
	int64_t x947 = INT64_MIN;
	static volatile int32_t t66 = 4;

	t66 = ((x945%x946)<<(x947%x948));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x949 = 39LLU;
	static volatile uint64_t x950 = 7105754403LLU;
	uint64_t t67 = 251LLU;

	t67 = ((x949%x950)<<(x951%x952));

	if (t67 != 1248LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x957 = 14;
	uint32_t x958 = UINT32_MAX;
	int32_t x959 = INT32_MAX;
	int16_t x960 = INT16_MAX;

	t68 = ((x957%x958)<<(x959%x960));

	if (t68 != 28U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x961 = 1333125480054892987LLU;
	int64_t x962 = 346970159415207LL;
	uint8_t x963 = 17U;
	static volatile int16_t x964 = -1;
	volatile uint64_t t69 = 25089731LLU;

	t69 = ((x961%x962)<<(x963%x964));

	if (t69 != 66127581667693LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x985 = 29536U;
	static volatile int8_t x986 = -14;
	int32_t x987 = 1;
	uint8_t x988 = 1U;
	uint32_t t70 = 638403U;

	t70 = ((x985%x986)<<(x987%x988));

	if (t70 != 29536U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x989 = 4248U;
	volatile uint8_t x991 = UINT8_MAX;
	int8_t x992 = 14;
	uint32_t t71 = 251U;

	t71 = ((x989%x990)<<(x991%x992));

	if (t71 != 33984U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1008 = 6644956U;
	volatile int64_t t72 = -3866101703442LL;

	t72 = ((x1005%x1006)<<(x1007%x1008));

	if (t72 != 4LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1014 = 3219520LLU;
	int8_t x1016 = -1;
	uint64_t t73 = 307941176LLU;

	t73 = ((x1013%x1014)<<(x1015%x1016));

	if (t73 != 65535LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1029 = UINT8_MAX;
	static uint16_t x1030 = 6754U;
	static uint32_t x1031 = 159U;
	uint8_t x1032 = 17U;
	int32_t t74 = -3037;

	t74 = ((x1029%x1030)<<(x1031%x1032));

	if (t74 != 16320) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1033 = INT16_MAX;
	int8_t x1034 = INT8_MIN;
	int16_t x1035 = 2;
	static int64_t x1036 = INT64_MAX;
	int32_t t75 = 3;

	t75 = ((x1033%x1034)<<(x1035%x1036));

	if (t75 != 508) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x1049 = -16;
	int16_t x1050 = -1;
	static int32_t x1052 = -1;
	int32_t t76 = -370;

	t76 = ((x1049%x1050)<<(x1051%x1052));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x1057 = -15;
	int32_t x1058 = -1;
	uint8_t x1059 = 89U;
	int32_t x1060 = -10;
	volatile int32_t t77 = 72980;

	t77 = ((x1057%x1058)<<(x1059%x1060));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1069 = 14U;
	int64_t x1070 = INT64_MIN;
	uint32_t x1071 = UINT32_MAX;
	static int32_t x1072 = -1;
	int64_t t78 = 5798LL;

	t78 = ((x1069%x1070)<<(x1071%x1072));

	if (t78 != 14LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x1073 = UINT64_MAX;
	static int32_t x1074 = -1;
	int32_t x1075 = INT32_MIN;
	int32_t x1076 = INT32_MIN;
	volatile uint64_t t79 = 14510763990LLU;

	t79 = ((x1073%x1074)<<(x1075%x1076));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1085 = 16U;
	volatile uint16_t x1086 = 11U;
	static uint64_t x1087 = 202LLU;
	uint32_t x1088 = 5U;
	int32_t t80 = 24100909;

	t80 = ((x1085%x1086)<<(x1087%x1088));

	if (t80 != 20) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1113 = INT64_MAX;
	uint8_t x1114 = UINT8_MAX;
	int32_t x1115 = 0;
	int8_t x1116 = 3;
	volatile int64_t t81 = 24676LL;

	t81 = ((x1113%x1114)<<(x1115%x1116));

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x1119 = 1;
	volatile uint32_t x1120 = 36316468U;
	int32_t t82 = 0;

	t82 = ((x1117%x1118)<<(x1119%x1120));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1147 = UINT8_MAX;
	uint16_t x1148 = 22U;
	volatile uint64_t t83 = 1015LLU;

	t83 = ((x1145%x1146)<<(x1147%x1148));

	if (t83 != 12846830844289024LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x1157 = INT32_MIN;
	static int8_t x1158 = INT8_MIN;
	uint64_t x1159 = 7228730640559598102LLU;
	static uint8_t x1160 = 7U;
	int32_t t84 = 113;

	t84 = ((x1157%x1158)<<(x1159%x1160));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1173 = UINT16_MAX;
	int64_t x1174 = INT64_MIN;
	uint64_t x1175 = 4789316249265LLU;
	static volatile int8_t x1176 = INT8_MAX;
	int64_t t85 = -29872279LL;

	t85 = ((x1173%x1174)<<(x1175%x1176));

	if (t85 != 262140LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1189 = 9U;
	volatile int32_t x1191 = -296;
	int32_t x1192 = -1;
	int32_t t86 = 95621;

	t86 = ((x1189%x1190)<<(x1191%x1192));

	if (t86 != 9) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x1209 = 4U;
	int64_t x1210 = INT64_MAX;
	uint16_t x1212 = 426U;
	static int64_t t87 = -598228374021810LL;

	t87 = ((x1209%x1210)<<(x1211%x1212));

	if (t87 != 64LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x1237 = INT64_MAX;
	int16_t x1238 = INT16_MIN;
	volatile uint8_t x1240 = UINT8_MAX;
	volatile int64_t t88 = -648795LL;

	t88 = ((x1237%x1238)<<(x1239%x1240));

	if (t88 != 524272LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1241 = INT32_MAX;
	uint64_t x1243 = 6LLU;
	volatile int32_t x1244 = INT32_MAX;
	int64_t t89 = 1278782312372LL;

	t89 = ((x1241%x1242)<<(x1243%x1244));

	if (t89 != 26691639616LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x1249 = 4;
	int32_t x1251 = 14523741;
	uint8_t x1252 = 1U;

	t90 = ((x1249%x1250)<<(x1251%x1252));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1261 = INT64_MIN;
	int32_t x1263 = 4066;
	int16_t x1264 = -1;
	uint64_t t91 = 69324025996556129LLU;

	t91 = ((x1261%x1262)<<(x1263%x1264));

	if (t91 != 16417539406LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1265 = 95030LL;
	static int8_t x1266 = INT8_MIN;
	int8_t x1267 = INT8_MIN;
	uint16_t x1268 = 1U;
	int64_t t92 = 41136LL;

	t92 = ((x1265%x1266)<<(x1267%x1268));

	if (t92 != 54LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1274 = INT8_MIN;
	volatile int8_t x1275 = 4;
	static uint64_t x1276 = 151205848LLU;
	int32_t t93 = -132039410;

	t93 = ((x1273%x1274)<<(x1275%x1276));

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x1297 = 189U;
	uint32_t x1298 = 6802355U;
	uint32_t x1299 = 6U;
	int16_t x1300 = INT16_MAX;
	volatile uint32_t t94 = 19324U;

	t94 = ((x1297%x1298)<<(x1299%x1300));

	if (t94 != 12096U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1333 = UINT64_MAX;
	int32_t x1334 = INT32_MIN;
	uint8_t x1335 = 24U;
	int16_t x1336 = 12;
	volatile uint64_t t95 = 404901LLU;

	t95 = ((x1333%x1334)<<(x1335%x1336));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1345 = INT32_MAX;
	volatile uint32_t x1348 = UINT32_MAX;
	volatile uint64_t t96 = 18870175481LLU;

	t96 = ((x1345%x1346)<<(x1347%x1348));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1398 = UINT8_MAX;
	int8_t x1399 = -1;
	int64_t x1400 = -1LL;
	volatile int32_t t97 = 64716;

	t97 = ((x1397%x1398)<<(x1399%x1400));

	if (t97 != 44) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1406 = 587897020397LLU;
	uint64_t x1407 = UINT64_MAX;
	uint64_t t98 = 11615LLU;

	t98 = ((x1405%x1406)<<(x1407%x1408));

	if (t98 != 50258935550LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1410 = -1;
	int32_t x1411 = INT32_MIN;
	static uint32_t t99 = 62119U;

	t99 = ((x1409%x1410)<<(x1411%x1412));

	if (t99 != 79U) { NG(); } else { ; }
	
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

