#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x21 = 9196622U;
uint8_t x22 = 1U;
volatile int8_t x36 = INT8_MIN;
static int32_t t2 = -411704;
volatile uint32_t t3 = 2524U;
uint16_t x77 = 6371U;
static int16_t x92 = INT16_MIN;
uint8_t x93 = 29U;
int64_t x95 = 28188LL;
int64_t x97 = INT64_MAX;
volatile int8_t x99 = 8;
volatile uint32_t x113 = 25U;
int8_t x115 = INT8_MIN;
int8_t x122 = INT8_MIN;
int64_t x127 = INT64_MAX;
uint16_t x131 = 10U;
uint64_t x133 = UINT64_MAX;
static volatile int8_t x134 = 8;
volatile uint64_t t13 = 761504882557255LLU;
uint16_t x141 = UINT16_MAX;
int32_t x143 = -422;
int32_t x186 = 0;
uint64_t x197 = 14253221LLU;
uint64_t t17 = 140651LLU;
volatile int8_t x267 = -1;
static volatile uint64_t t20 = 3LLU;
volatile uint16_t x341 = 3U;
uint32_t x353 = 43769210U;
uint32_t t22 = 1977U;
uint64_t x362 = 31LLU;
uint32_t x363 = 620U;
static volatile int32_t t24 = -6;
uint8_t x418 = UINT8_MAX;
volatile uint64_t t26 = 7004764188LLU;
int8_t x459 = INT8_MAX;
volatile uint64_t t28 = 1094375877718031LLU;
uint8_t x489 = 41U;
volatile int32_t t29 = -11954433;
int8_t x505 = 41;
int16_t x509 = 0;
static int8_t x525 = INT8_MAX;
int64_t x526 = 1451803630651LL;
uint16_t x534 = 2U;
int16_t x536 = INT16_MIN;
volatile uint8_t x566 = 17U;
uint16_t x590 = 49U;
int64_t x628 = INT64_MIN;
int8_t x678 = INT8_MIN;
volatile int64_t t39 = 3962LL;
static int32_t x716 = 2471019;
static uint8_t x718 = 53U;
int8_t x719 = -39;
int64_t x786 = 21104576486LL;
uint64_t t44 = 17226770961770LLU;
int32_t x818 = INT32_MIN;
static volatile uint32_t x820 = UINT32_MAX;
int32_t x850 = INT32_MIN;
int32_t x851 = INT32_MIN;
volatile int32_t t49 = -2665988;
uint64_t x881 = 1241787121228927591LLU;
static volatile int8_t x884 = INT8_MIN;
uint64_t t50 = 140366499957814983LLU;
int16_t x891 = -1;
int16_t x892 = INT16_MIN;
int64_t x893 = 26247176LL;
int8_t x896 = INT8_MAX;
volatile int64_t x899 = -1LL;
uint64_t t54 = 3351552264256636LLU;
int32_t t55 = -15649;
uint64_t x997 = UINT64_MAX;
uint64_t t57 = 11154614650789LLU;
int32_t x1018 = INT32_MIN;
static uint16_t x1027 = 139U;
static int32_t t59 = 115308157;
volatile uint8_t x1030 = 46U;
int16_t x1043 = INT16_MAX;
volatile int64_t x1089 = 733365265294101434LL;
int8_t x1090 = 40;
static uint16_t x1098 = 12U;
volatile uint32_t t64 = 96211551U;
uint16_t x1126 = UINT16_MAX;
volatile int64_t t65 = 5LL;
int32_t x1132 = INT32_MAX;
int32_t t66 = -1666;
static volatile int32_t t67 = -1;
int32_t x1183 = -1;
int16_t x1184 = -3;
uint8_t x1226 = 1U;
int8_t x1287 = INT8_MAX;
int64_t t72 = -1233604LL;
int16_t x1298 = 12;
volatile int16_t x1299 = -1;
uint16_t x1308 = UINT16_MAX;
static int32_t x1318 = INT32_MIN;
uint16_t x1321 = UINT16_MAX;
uint8_t x1357 = 107U;
uint16_t x1418 = 2U;
int8_t x1419 = -4;
static uint8_t x1435 = 1U;
int32_t t81 = -182821;
int16_t x1459 = INT16_MIN;
int64_t x1460 = INT64_MAX;
int64_t t82 = -7188LL;
uint16_t x1489 = 6U;
int32_t x1501 = INT32_MAX;
static int32_t t85 = 427635;
int64_t x1612 = INT64_MAX;
int64_t t87 = -35444431LL;
static int16_t x1646 = -87;
volatile int64_t t88 = 2554718207465050LL;
volatile uint64_t x1664 = UINT64_MAX;
volatile uint32_t x1678 = UINT32_MAX;
uint64_t x1682 = 342743919LLU;
int32_t x1703 = 2974;
int16_t x1704 = INT16_MAX;
int16_t x1706 = 50;
uint64_t x1710 = UINT64_MAX;
static int16_t x1765 = 517;
int8_t x1767 = INT8_MIN;
int32_t x1789 = 179661726;
uint64_t x1837 = 16LLU;
uint64_t t99 = 66LLU;


void f0(void) {
	int8_t x23 = INT8_MAX;
	static uint32_t x24 = 14720632U;
	volatile uint32_t t0 = 7U;

	t0 = ((x21>>(x22%x23))%x24);

	if (t0 != 4598311U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x33 = 187LL;
	int64_t x34 = INT64_MAX;
	static int8_t x35 = -1;
	static volatile int64_t t1 = -4255LL;

	t1 = ((x33>>(x34%x35))%x36);

	if (t1 != 59LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x41 = 1U;
	uint32_t x42 = 510U;
	volatile int64_t x43 = -1LL;
	int32_t x44 = -1;

	t2 = ((x41>>(x42%x43))%x44);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x53 = 0U;
	volatile uint8_t x54 = 0U;
	uint16_t x55 = UINT16_MAX;
	uint32_t x56 = UINT32_MAX;

	t3 = ((x53>>(x54%x55))%x56);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x78 = 0U;
	int8_t x79 = 2;
	volatile int32_t x80 = INT32_MIN;
	int32_t t4 = -1388;

	t4 = ((x77>>(x78%x79))%x80);

	if (t4 != 6371) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x89 = 36366U;
	static int32_t x90 = 11340184;
	static uint32_t x91 = 58U;
	volatile uint32_t t5 = 6727808U;

	t5 = ((x89>>(x90%x91))%x92);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x94 = 0U;
	volatile uint64_t x96 = 34982309376924LLU;
	volatile uint64_t t6 = 11247051188LLU;

	t6 = ((x93>>(x94%x95))%x96);

	if (t6 != 29LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x98 = -70314515086607240LL;
	int32_t x100 = -29989;
	volatile int64_t t7 = 41LL;

	t7 = ((x97>>(x98%x99))%x100);

	if (t7 != 148LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x105 = 0U;
	volatile uint8_t x106 = 4U;
	int32_t x107 = 20713;
	int64_t x108 = INT64_MAX;
	volatile int64_t t8 = 7902451539909676LL;

	t8 = ((x105>>(x106%x107))%x108);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x114 = 153512192LL;
	int64_t x116 = -15072623999084924LL;
	int64_t t9 = -46LL;

	t9 = ((x113>>(x114%x115))%x116);

	if (t9 != 25LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x121 = UINT8_MAX;
	uint8_t x123 = 1U;
	uint8_t x124 = 58U;
	static int32_t t10 = 29831;

	t10 = ((x121>>(x122%x123))%x124);

	if (t10 != 23) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x125 = 13169753LL;
	static int16_t x126 = 1;
	int32_t x128 = INT32_MAX;
	int64_t t11 = -2986101822245LL;

	t11 = ((x125>>(x126%x127))%x128);

	if (t11 != 6584876LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x129 = 175682922137LLU;
	int16_t x130 = INT16_MAX;
	static int16_t x132 = INT16_MIN;
	uint64_t t12 = 2193854LLU;

	t12 = ((x129>>(x130%x131))%x132);

	if (t12 != 1372522829LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x135 = INT64_MAX;
	volatile uint8_t x136 = 13U;

	t13 = ((x133>>(x134%x135))%x136);

	if (t13 != 8LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x142 = 6;
	static int16_t x144 = -5726;
	static volatile int32_t t14 = -637;

	t14 = ((x141>>(x142%x143))%x144);

	if (t14 != 1023) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x173 = 1;
	int16_t x174 = 0;
	int8_t x175 = 3;
	int64_t x176 = INT64_MAX;
	int64_t t15 = 0LL;

	t15 = ((x173>>(x174%x175))%x176);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x185 = INT8_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile uint64_t x188 = 1323530071LLU;
	uint64_t t16 = 2253529909804403358LLU;

	t16 = ((x185>>(x186%x187))%x188);

	if (t16 != 127LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x198 = 0U;
	int64_t x199 = INT64_MIN;
	int64_t x200 = INT64_MIN;

	t17 = ((x197>>(x198%x199))%x200);

	if (t17 != 14253221LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x265 = 1;
	int32_t x266 = INT32_MIN;
	uint16_t x268 = UINT16_MAX;
	int32_t t18 = 7150146;

	t18 = ((x265>>(x266%x267))%x268);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MIN;
	static int8_t x299 = -1;
	int8_t x300 = INT8_MAX;
	int32_t t19 = 1;

	t19 = ((x297>>(x298%x299))%x300);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x321 = 671U;
	int32_t x322 = 16;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = UINT64_MAX;

	t20 = ((x321>>(x322%x323))%x324);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MAX;
	uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t21 = 85731LLU;

	t21 = ((x341>>(x342%x343))%x344);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x354 = -1LL;
	volatile int64_t x355 = -1LL;
	uint16_t x356 = 715U;

	t22 = ((x353>>(x354%x355))%x356);

	if (t22 != 485U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x361 = 37U;
	int16_t x364 = INT16_MAX;
	volatile int32_t t23 = 533600094;

	t23 = ((x361>>(x362%x363))%x364);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x397 = 37;
	int16_t x398 = 1;
	int8_t x399 = 38;
	int32_t x400 = 2869923;

	t24 = ((x397>>(x398%x399))%x400);

	if (t24 != 18) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x409 = 702LLU;
	uint32_t x410 = 2847U;
	int64_t x411 = -1LL;
	int64_t x412 = 561093LL;
	static volatile uint64_t t25 = 792938614616497485LLU;

	t25 = ((x409>>(x410%x411))%x412);

	if (t25 != 702LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x417 = 1648080276161LLU;
	uint8_t x419 = UINT8_MAX;
	int64_t x420 = -1LL;

	t26 = ((x417>>(x418%x419))%x420);

	if (t26 != 1648080276161LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x457 = 15U;
	static int32_t x458 = INT32_MAX;
	int16_t x460 = INT16_MIN;
	static int32_t t27 = -35293762;

	t27 = ((x457>>(x458%x459))%x460);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x461 = 33271557;
	volatile int64_t x462 = INT64_MAX;
	uint16_t x463 = 3U;
	uint64_t x464 = 171974LLU;

	t28 = ((x461>>(x462%x463))%x464);

	if (t28 != 126274LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x490 = UINT64_MAX;
	volatile int64_t x491 = INT64_MAX;
	int16_t x492 = INT16_MIN;

	t29 = ((x489>>(x490%x491))%x492);

	if (t29 != 20) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x506 = INT16_MIN;
	int32_t x507 = -2;
	int32_t x508 = INT32_MAX;
	volatile int32_t t30 = 274745;

	t30 = ((x505>>(x506%x507))%x508);

	if (t30 != 41) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x510 = 25U;
	volatile int64_t x511 = -29LL;
	static int8_t x512 = INT8_MAX;
	volatile int32_t t31 = -3232197;

	t31 = ((x509>>(x510%x511))%x512);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x527 = 10U;
	static volatile int64_t x528 = INT64_MAX;
	volatile int64_t t32 = 80LL;

	t32 = ((x525>>(x526%x527))%x528);

	if (t32 != 63LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x533 = 18U;
	int16_t x535 = INT16_MAX;
	int32_t t33 = 321;

	t33 = ((x533>>(x534%x535))%x536);

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x565 = UINT8_MAX;
	static int16_t x567 = INT16_MAX;
	int16_t x568 = -1;
	static int32_t t34 = 26140390;

	t34 = ((x565>>(x566%x567))%x568);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x589 = INT64_MAX;
	static volatile int64_t x591 = -1LL;
	int32_t x592 = INT32_MIN;
	volatile int64_t t35 = 13LL;

	t35 = ((x589>>(x590%x591))%x592);

	if (t35 != 2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x625 = 1;
	static int64_t x626 = INT64_MIN;
	int16_t x627 = INT16_MIN;
	int64_t t36 = -52355920721575LL;

	t36 = ((x625>>(x626%x627))%x628);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x641 = 533503923112LLU;
	int8_t x642 = INT8_MIN;
	int8_t x643 = -1;
	uint8_t x644 = 9U;
	volatile uint64_t t37 = 25730001288LLU;

	t37 = ((x641>>(x642%x643))%x644);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x669 = 0;
	uint8_t x670 = 13U;
	volatile int64_t x671 = -196753542LL;
	int64_t x672 = INT64_MAX;
	int64_t t38 = 180875397LL;

	t38 = ((x669>>(x670%x671))%x672);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x677 = 0;
	int8_t x679 = INT8_MIN;
	int64_t x680 = 70LL;

	t39 = ((x677>>(x678%x679))%x680);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x689 = 200LLU;
	int64_t x690 = INT64_MAX;
	volatile int32_t x691 = INT32_MAX;
	int32_t x692 = -1;
	volatile uint64_t t40 = 114051698659946LLU;

	t40 = ((x689>>(x690%x691))%x692);

	if (t40 != 100LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x709 = INT8_MAX;
	uint8_t x710 = 19U;
	uint32_t x711 = UINT32_MAX;
	int32_t x712 = -26;
	int32_t t41 = -235245446;

	t41 = ((x709>>(x710%x711))%x712);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x713 = UINT64_MAX;
	uint32_t x714 = 1U;
	volatile int64_t x715 = INT64_MAX;
	volatile uint64_t t42 = 304043LLU;

	t42 = ((x713>>(x714%x715))%x716);

	if (t42 != 715798LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x717 = 12157LL;
	volatile uint32_t x720 = 85900338U;
	volatile int64_t t43 = -19523054888553LL;

	t43 = ((x717>>(x718%x719))%x720);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x785 = 4LLU;
	int64_t x787 = -1LL;
	uint16_t x788 = 6U;

	t44 = ((x785>>(x786%x787))%x788);

	if (t44 != 4LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x797 = 26;
	volatile int64_t x798 = -14423197451LL;
	int16_t x799 = 1;
	int32_t x800 = INT32_MIN;
	int32_t t45 = -30894694;

	t45 = ((x797>>(x798%x799))%x800);

	if (t45 != 26) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x817 = 754749169LLU;
	uint32_t x819 = 2U;
	volatile uint64_t t46 = 6860931994914795LLU;

	t46 = ((x817>>(x818%x819))%x820);

	if (t46 != 754749169LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x849 = 1815LLU;
	volatile int8_t x852 = INT8_MIN;
	static uint64_t t47 = 730521914488LLU;

	t47 = ((x849>>(x850%x851))%x852);

	if (t47 != 1815LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x857 = 11328U;
	uint32_t x858 = 34623U;
	int64_t x859 = -1LL;
	uint8_t x860 = 1U;
	volatile uint32_t t48 = 39U;

	t48 = ((x857>>(x858%x859))%x860);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x865 = 58U;
	uint16_t x866 = 72U;
	volatile int32_t x867 = 5;
	int16_t x868 = INT16_MAX;

	t49 = ((x865>>(x866%x867))%x868);

	if (t49 != 14) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x882 = 1;
	uint8_t x883 = 75U;

	t50 = ((x881>>(x882%x883))%x884);

	if (t50 != 620893560614463795LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x885 = 1U;
	uint64_t x886 = 14LLU;
	volatile uint32_t x887 = 11410U;
	int8_t x888 = INT8_MIN;
	int32_t t51 = 672;

	t51 = ((x885>>(x886%x887))%x888);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x889 = 3;
	int16_t x890 = INT16_MIN;
	int32_t t52 = 21959496;

	t52 = ((x889>>(x890%x891))%x892);

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x894 = 110668;
	static int8_t x895 = -2;
	int64_t t53 = 0LL;

	t53 = ((x893>>(x894%x895))%x896);

	if (t53 != 86LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x897 = 90988939786439LLU;
	volatile int64_t x898 = 3178LL;
	int32_t x900 = INT32_MAX;

	t54 = ((x897>>(x898%x899))%x900);

	if (t54 != 57663049LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x913 = 974U;
	static int32_t x914 = INT32_MAX;
	uint8_t x915 = 1U;
	volatile uint16_t x916 = UINT16_MAX;

	t55 = ((x913>>(x914%x915))%x916);

	if (t55 != 974) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x969 = UINT32_MAX;
	volatile int64_t x970 = 119LL;
	int64_t x971 = -1LL;
	static int16_t x972 = 1;
	volatile uint32_t t56 = 74499U;

	t56 = ((x969>>(x970%x971))%x972);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x998 = 1;
	int64_t x999 = -1LL;
	int16_t x1000 = 60;

	t57 = ((x997>>(x998%x999))%x1000);

	if (t57 != 15LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1017 = INT64_MAX;
	int16_t x1019 = -1;
	volatile uint8_t x1020 = 3U;
	int64_t t58 = -1835LL;

	t58 = ((x1017>>(x1018%x1019))%x1020);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1025 = 1472;
	uint8_t x1026 = 27U;
	int16_t x1028 = -1;

	t59 = ((x1025>>(x1026%x1027))%x1028);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1029 = 5U;
	int8_t x1031 = 4;
	volatile int32_t x1032 = INT32_MIN;
	volatile uint32_t t60 = 41U;

	t60 = ((x1029>>(x1030%x1031))%x1032);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1041 = UINT32_MAX;
	int32_t x1042 = INT32_MAX;
	int16_t x1044 = 10;
	volatile uint32_t t61 = 251579U;

	t61 = ((x1041>>(x1042%x1043))%x1044);

	if (t61 != 7U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1091 = 12U;
	volatile int64_t x1092 = -5863657LL;
	static volatile int64_t t62 = -1123LL;

	t62 = ((x1089>>(x1090%x1091))%x1092);

	if (t62 != 1652070LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1097 = 1554U;
	int16_t x1099 = INT16_MIN;
	static uint32_t x1100 = UINT32_MAX;
	static uint32_t t63 = 0U;

	t63 = ((x1097>>(x1098%x1099))%x1100);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1101 = 112U;
	volatile int16_t x1102 = INT16_MAX;
	uint64_t x1103 = 21LLU;
	uint8_t x1104 = UINT8_MAX;

	t64 = ((x1101>>(x1102%x1103))%x1104);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1125 = 1739446135LL;
	int32_t x1127 = -9;
	int16_t x1128 = -3442;

	t65 = ((x1125>>(x1126%x1127))%x1128);

	if (t65 != 813LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1129 = INT32_MAX;
	int64_t x1130 = INT64_MAX;
	int32_t x1131 = -1;

	t66 = ((x1129>>(x1130%x1131))%x1132);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x1133 = 15U;
	uint64_t x1134 = 762120666302LLU;
	volatile int32_t x1135 = 15;
	uint8_t x1136 = UINT8_MAX;

	t67 = ((x1133>>(x1134%x1135))%x1136);

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x1181 = UINT16_MAX;
	static volatile uint16_t x1182 = 22U;
	volatile int32_t t68 = 255448;

	t68 = ((x1181>>(x1182%x1183))%x1184);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1193 = UINT8_MAX;
	static int8_t x1194 = -1;
	static volatile int64_t x1195 = -1LL;
	uint8_t x1196 = UINT8_MAX;
	int32_t t69 = -55611;

	t69 = ((x1193>>(x1194%x1195))%x1196);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1225 = 2U;
	static uint16_t x1227 = UINT16_MAX;
	volatile int8_t x1228 = INT8_MIN;
	volatile int32_t t70 = -26;

	t70 = ((x1225>>(x1226%x1227))%x1228);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x1229 = UINT16_MAX;
	static uint8_t x1230 = 0U;
	int8_t x1231 = INT8_MAX;
	volatile uint64_t x1232 = 37923LLU;
	uint64_t t71 = 419390LLU;

	t71 = ((x1229>>(x1230%x1231))%x1232);

	if (t71 != 27612LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1285 = INT32_MAX;
	uint64_t x1286 = UINT64_MAX;
	int64_t x1288 = INT64_MIN;

	t72 = ((x1285>>(x1286%x1287))%x1288);

	if (t72 != 1073741823LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x1297 = 28U;
	volatile int64_t x1300 = INT64_MIN;
	volatile int64_t t73 = 191LL;

	t73 = ((x1297>>(x1298%x1299))%x1300);

	if (t73 != 28LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x1305 = 1U;
	volatile int16_t x1306 = INT16_MAX;
	static uint16_t x1307 = 15U;
	static int32_t t74 = -124681;

	t74 = ((x1305>>(x1306%x1307))%x1308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1317 = 1501U;
	static uint16_t x1319 = 2U;
	uint32_t x1320 = 547540U;
	uint32_t t75 = 76U;

	t75 = ((x1317>>(x1318%x1319))%x1320);

	if (t75 != 1501U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x1322 = 9U;
	int32_t x1323 = INT32_MIN;
	int8_t x1324 = INT8_MIN;
	int32_t t76 = -9;

	t76 = ((x1321>>(x1322%x1323))%x1324);

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1349 = 78U;
	static int32_t x1350 = INT32_MIN;
	volatile uint64_t x1351 = 1LLU;
	uint32_t x1352 = UINT32_MAX;
	volatile uint32_t t77 = 6763U;

	t77 = ((x1349>>(x1350%x1351))%x1352);

	if (t77 != 78U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1358 = INT32_MIN;
	volatile uint8_t x1359 = 4U;
	uint8_t x1360 = 51U;
	volatile int32_t t78 = -1;

	t78 = ((x1357>>(x1358%x1359))%x1360);

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1377 = UINT32_MAX;
	static int8_t x1378 = 8;
	static int16_t x1379 = -1;
	uint32_t x1380 = 9925821U;
	uint32_t t79 = 190594U;

	t79 = ((x1377>>(x1378%x1379))%x1380);

	if (t79 != 7012623U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1417 = 1U;
	uint32_t x1420 = 27U;
	uint32_t t80 = 3522U;

	t80 = ((x1417>>(x1418%x1419))%x1420);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x1433 = INT32_MAX;
	int8_t x1434 = INT8_MAX;
	int16_t x1436 = -1;

	t81 = ((x1433>>(x1434%x1435))%x1436);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x1457 = 12402U;
	static volatile int16_t x1458 = 2;

	t82 = ((x1457>>(x1458%x1459))%x1460);

	if (t82 != 3100LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1473 = 189534066894LL;
	int32_t x1474 = INT32_MIN;
	volatile int16_t x1475 = -1;
	static uint32_t x1476 = UINT32_MAX;
	int64_t t83 = 1LL;

	t83 = ((x1473>>(x1474%x1475))%x1476);

	if (t83 != 555505914LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x1490 = INT16_MIN;
	uint64_t x1491 = 1LLU;
	int16_t x1492 = -16105;
	static int32_t t84 = -203099873;

	t84 = ((x1489>>(x1490%x1491))%x1492);

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x1502 = 1;
	volatile int32_t x1503 = INT32_MIN;
	uint16_t x1504 = UINT16_MAX;

	t85 = ((x1501>>(x1502%x1503))%x1504);

	if (t85 != 16383) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x1561 = 110076441863892953LL;
	uint16_t x1562 = UINT16_MAX;
	int16_t x1563 = INT16_MAX;
	uint32_t x1564 = UINT32_MAX;
	volatile int64_t t86 = 1063329292925LL;

	t86 = ((x1561>>(x1562%x1563))%x1564);

	if (t86 != 1752916196LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x1609 = INT64_MAX;
	uint8_t x1610 = 38U;
	static volatile int16_t x1611 = 33;

	t87 = ((x1609>>(x1610%x1611))%x1612);

	if (t87 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1645 = 1;
	int64_t x1647 = -1LL;
	int64_t x1648 = INT64_MIN;

	t88 = ((x1645>>(x1646%x1647))%x1648);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1661 = INT32_MAX;
	int8_t x1662 = INT8_MIN;
	static int8_t x1663 = INT8_MIN;
	volatile uint64_t t89 = 463657067951625537LLU;

	t89 = ((x1661>>(x1662%x1663))%x1664);

	if (t89 != 2147483647LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1677 = 415170954LL;
	int16_t x1679 = -1;
	int8_t x1680 = 1;
	volatile int64_t t90 = -265898443956LL;

	t90 = ((x1677>>(x1678%x1679))%x1680);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1681 = 3LL;
	volatile int8_t x1683 = INT8_MAX;
	int32_t x1684 = -1;
	volatile int64_t t91 = 311811LL;

	t91 = ((x1681>>(x1682%x1683))%x1684);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x1701 = 48U;
	int64_t x1702 = 1LL;
	static volatile int32_t t92 = -2;

	t92 = ((x1701>>(x1702%x1703))%x1704);

	if (t92 != 24) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x1705 = INT64_MAX;
	int64_t x1707 = 8230291678LL;
	uint16_t x1708 = 2U;
	int64_t t93 = -426LL;

	t93 = ((x1705>>(x1706%x1707))%x1708);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x1709 = 2U;
	static int16_t x1711 = -1;
	static volatile int64_t x1712 = -1LL;
	static int64_t t94 = -1LL;

	t94 = ((x1709>>(x1710%x1711))%x1712);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x1737 = INT16_MAX;
	uint8_t x1738 = 2U;
	int8_t x1739 = INT8_MAX;
	uint8_t x1740 = UINT8_MAX;
	volatile int32_t t95 = 9657;

	t95 = ((x1737>>(x1738%x1739))%x1740);

	if (t95 != 31) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1766 = INT32_MIN;
	int32_t x1768 = INT32_MIN;
	int32_t t96 = 23548;

	t96 = ((x1765>>(x1766%x1767))%x1768);

	if (t96 != 517) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x1790 = INT8_MIN;
	int8_t x1791 = INT8_MIN;
	int64_t x1792 = -261978555276LL;
	volatile int64_t t97 = -40981LL;

	t97 = ((x1789>>(x1790%x1791))%x1792);

	if (t97 != 179661726LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x1821 = 3U;
	static uint8_t x1822 = 15U;
	int32_t x1823 = 175786946;
	static int16_t x1824 = INT16_MIN;
	volatile int32_t t98 = 219692221;

	t98 = ((x1821>>(x1822%x1823))%x1824);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x1838 = 1042423220014LLU;
	int8_t x1839 = 2;
	static int64_t x1840 = INT64_MIN;

	t99 = ((x1837>>(x1838%x1839))%x1840);

	if (t99 != 16LLU) { NG(); } else { ; }
	
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

