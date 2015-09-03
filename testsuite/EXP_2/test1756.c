#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x74 = 22;
uint16_t x87 = 1U;
volatile uint32_t t2 = 855U;
int8_t x92 = -1;
int32_t t3 = -1374;
int32_t x94 = INT32_MIN;
uint32_t x96 = 2561430U;
volatile uint64_t t6 = 7294234272LLU;
volatile uint32_t x189 = 2093425047U;
int16_t x191 = 7;
int8_t x194 = 5;
int64_t x195 = -1LL;
uint64_t x202 = 3LLU;
uint32_t x203 = 179U;
volatile int32_t x204 = -599934316;
uint8_t x238 = 13U;
uint32_t x268 = UINT32_MAX;
uint16_t x277 = UINT16_MAX;
volatile int64_t t15 = 47581426501178625LL;
static uint8_t x314 = 0U;
int64_t x315 = -1LL;
int16_t x318 = -812;
volatile uint64_t t17 = 273966397812LLU;
uint32_t x321 = 489094997U;
uint8_t x322 = 5U;
volatile int32_t x324 = INT32_MIN;
volatile uint32_t x325 = 239796437U;
static int8_t x327 = 27;
static uint8_t x339 = UINT8_MAX;
int8_t x370 = 1;
static int64_t t21 = 980751095LL;
int32_t x415 = INT32_MIN;
int64_t t25 = 463LL;
uint64_t x449 = 1029877320419LLU;
int8_t x488 = INT8_MAX;
static volatile int32_t t28 = 152410754;
uint64_t x514 = 26617752409466LLU;
int8_t x515 = 7;
static uint8_t x547 = 0U;
int16_t x548 = -1;
uint16_t x634 = UINT16_MAX;
static int32_t x644 = 11;
int64_t t34 = -64104696LL;
int16_t x674 = 1;
volatile uint32_t x679 = 45U;
static uint32_t x681 = 7693U;
int64_t x705 = INT64_MAX;
int8_t x718 = 56;
int32_t x747 = INT32_MAX;
volatile int32_t t42 = -7668;
uint8_t x757 = UINT8_MAX;
uint16_t x769 = UINT16_MAX;
int32_t t46 = 0;
static int64_t x793 = 6LL;
int64_t t47 = 23153098595LL;
uint16_t x818 = 139U;
volatile int8_t x820 = INT8_MIN;
static volatile int32_t t48 = 454952;
int32_t x850 = INT32_MIN;
volatile uint32_t x860 = 96504U;
uint8_t x886 = 1U;
static volatile uint8_t x887 = 1U;
uint32_t t54 = 169U;
int64_t x993 = INT64_MAX;
uint8_t x995 = 21U;
volatile uint64_t t58 = 2528725LLU;
uint32_t x1073 = UINT32_MAX;
volatile int8_t x1074 = 1;
int64_t x1079 = INT64_MIN;
int64_t t62 = 310964LL;
static int32_t t63 = 23318037;
uint8_t x1100 = UINT8_MAX;
volatile uint32_t t64 = 78U;
uint16_t x1101 = 13U;
int32_t x1102 = INT32_MIN;
volatile int16_t x1103 = 0;
volatile int16_t x1153 = 93;
uint32_t x1193 = UINT32_MAX;
int32_t x1237 = 87;
static volatile int32_t t74 = 41;
static int32_t x1254 = -1;
int16_t x1258 = INT16_MIN;
uint16_t x1259 = 2476U;
uint16_t x1260 = UINT16_MAX;
volatile uint32_t t76 = 3130U;
int16_t x1276 = -52;
int64_t x1366 = INT64_MIN;
uint8_t x1393 = 0U;
volatile int32_t t83 = 869;
int16_t x1411 = -1;
uint64_t x1469 = 9712612656687LLU;
uint64_t t87 = 110903520316LLU;
int8_t x1580 = INT8_MIN;
static int32_t x1583 = INT32_MAX;
static uint64_t x1584 = 8748494149372392LLU;
int32_t t91 = 1796;
int16_t x1644 = INT16_MAX;
int32_t t92 = 0;
static volatile int8_t x1645 = INT8_MAX;
uint16_t x1646 = UINT16_MAX;
uint16_t x1742 = 192U;
int16_t x1745 = INT16_MAX;
uint16_t x1823 = UINT16_MAX;
int32_t x1824 = 11;
static int32_t x1847 = INT32_MIN;


void f0(void) {
	volatile uint8_t x5 = 26U;
	int32_t x6 = INT32_MIN;
	volatile int8_t x7 = INT8_MAX;
	int16_t x8 = 92;
	int32_t t0 = 240;

	t0 = ((x5<<(x6&x7))+x8);

	if (t0 != 118) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x73 = 91808145124916901LL;
	int16_t x75 = INT16_MIN;
	static uint16_t x76 = UINT16_MAX;
	volatile int64_t t1 = 26297LL;

	t1 = ((x73<<(x74&x75))+x76);

	if (t1 != 91808145124982436LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x85 = 84U;
	uint64_t x86 = 1003147601653051286LLU;
	uint32_t x88 = 380265U;

	t2 = ((x85<<(x86&x87))+x88);

	if (t2 != 380349U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x89 = INT16_MAX;
	static uint16_t x90 = 1497U;
	int64_t x91 = INT64_MIN;

	t3 = ((x89<<(x90&x91))+x92);

	if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x93 = 526389940277859LLU;
	uint32_t x95 = 42685855U;
	volatile uint64_t t4 = 31940659198LLU;

	t4 = ((x93<<(x94&x95))+x96);

	if (t4 != 526389942839289LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x129 = 1;
	int8_t x130 = 1;
	volatile int32_t x131 = INT32_MIN;
	static uint32_t x132 = 934U;
	uint32_t t5 = 85158U;

	t5 = ((x129<<(x130&x131))+x132);

	if (t5 != 935U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MIN;
	int32_t x139 = 127424385;
	volatile uint64_t x140 = 30629608LLU;

	t6 = ((x137<<(x138&x139))+x140);

	if (t6 != 30695143LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x190 = -6083LL;
	static uint64_t x192 = 4614LLU;
	static volatile uint64_t t7 = 4030438957480706663LLU;

	t7 = ((x189<<(x190&x191))+x192);

	if (t7 != 2565096678LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x193 = 45268196LLU;
	static uint64_t x196 = UINT64_MAX;
	uint64_t t8 = 491LLU;

	t8 = ((x193<<(x194&x195))+x196);

	if (t8 != 1448582271LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x201 = 1883;
	int32_t t9 = 127;

	t9 = ((x201<<(x202&x203))+x204);

	if (t9 != -599919252) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x237 = INT16_MAX;
	volatile int64_t x239 = -1LL;
	int16_t x240 = 3171;
	volatile int32_t t10 = -1;

	t10 = ((x237<<(x238&x239))+x240);

	if (t10 != 268430435) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x257 = 30485;
	int8_t x258 = 1;
	int64_t x259 = -1158420930921LL;
	int16_t x260 = INT16_MAX;
	static int32_t t11 = 31224113;

	t11 = ((x257<<(x258&x259))+x260);

	if (t11 != 93737) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x265 = 7U;
	volatile uint8_t x266 = 24U;
	static int16_t x267 = -10101;
	uint32_t t12 = 2483U;

	t12 = ((x265<<(x266&x267))+x268);

	if (t12 != 1791U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x273 = INT8_MAX;
	uint16_t x274 = 6U;
	int32_t x275 = INT32_MIN;
	int64_t x276 = -544368575250LL;
	int64_t t13 = 212807172260759759LL;

	t13 = ((x273<<(x274&x275))+x276);

	if (t13 != -544368575123LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x278 = INT8_MAX;
	static int32_t x279 = INT32_MIN;
	static volatile int8_t x280 = INT8_MIN;
	int32_t t14 = -3;

	t14 = ((x277<<(x278&x279))+x280);

	if (t14 != 65407) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x297 = UINT8_MAX;
	int64_t x298 = INT64_MIN;
	volatile int16_t x299 = INT16_MAX;
	static int64_t x300 = INT64_MIN;

	t15 = ((x297<<(x298&x299))+x300);

	if (t15 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x313 = 6U;
	volatile int32_t x316 = INT32_MIN;
	int32_t t16 = 1;

	t16 = ((x313<<(x314&x315))+x316);

	if (t16 != -2147483642) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x317 = 4059LLU;
	uint8_t x319 = 15U;
	int32_t x320 = -1;

	t17 = ((x317<<(x318&x319))+x320);

	if (t17 != 64943LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x323 = UINT64_MAX;
	volatile uint32_t t18 = 4U;

	t18 = ((x321<<(x322&x323))+x324);

	if (t18 != 618654368U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x326 = -1;
	int16_t x328 = -12106;
	static uint32_t t19 = 20327577U;

	t19 = ((x325<<(x326&x327))+x328);

	if (t19 != 2818560182U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x337 = 0;
	volatile int8_t x338 = 0;
	int16_t x340 = INT16_MIN;
	int32_t t20 = 76421;

	t20 = ((x337<<(x338&x339))+x340);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x369 = 731087LL;
	uint32_t x371 = UINT32_MAX;
	static volatile int8_t x372 = INT8_MAX;

	t21 = ((x369<<(x370&x371))+x372);

	if (t21 != 1462301LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x373 = 8493459869682706993LLU;
	static uint16_t x374 = 1U;
	uint64_t x375 = 1354768595511281694LLU;
	uint16_t x376 = UINT16_MAX;
	volatile uint64_t t22 = 542113983LLU;

	t22 = ((x373<<(x374&x375))+x376);

	if (t22 != 8493459869682772528LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x389 = UINT32_MAX;
	static int16_t x390 = 802;
	static int32_t x391 = INT32_MIN;
	int16_t x392 = 210;
	uint32_t t23 = 17818845U;

	t23 = ((x389<<(x390&x391))+x392);

	if (t23 != 209U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x397 = 1U;
	volatile int64_t x398 = INT64_MIN;
	static int8_t x399 = 0;
	int32_t x400 = -1;
	volatile uint32_t t24 = 29525U;

	t24 = ((x397<<(x398&x399))+x400);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x413 = 61118702540977994LL;
	volatile int16_t x414 = 57;
	volatile int16_t x416 = INT16_MAX;

	t25 = ((x413<<(x414&x415))+x416);

	if (t25 != 61118702541010761LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x450 = 1;
	int8_t x451 = INT8_MIN;
	static uint16_t x452 = 11U;
	volatile uint64_t t26 = 1135467162629LLU;

	t26 = ((x449<<(x450&x451))+x452);

	if (t26 != 1029877320430LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x461 = 11065;
	uint64_t x462 = 80LLU;
	int8_t x463 = 3;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t27 = 4773678866238LLU;

	t27 = ((x461<<(x462&x463))+x464);

	if (t27 != 11064LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x485 = UINT16_MAX;
	int64_t x486 = -23195587172698LL;
	uint16_t x487 = 4U;

	t28 = ((x485<<(x486&x487))+x488);

	if (t28 != 1048687) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x513 = 1U;
	int8_t x516 = -1;
	int32_t t29 = 120036394;

	t29 = ((x513<<(x514&x515))+x516);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x521 = 28U;
	volatile uint64_t x522 = 75LLU;
	uint64_t x523 = 824936584LLU;
	static volatile int32_t x524 = -1707;
	int32_t t30 = 48;

	t30 = ((x521<<(x522&x523))+x524);

	if (t30 != 5461) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x545 = 4255136255494803LLU;
	static int64_t x546 = 486LL;
	static volatile uint64_t t31 = 8LLU;

	t31 = ((x545<<(x546&x547))+x548);

	if (t31 != 4255136255494802LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x633 = UINT8_MAX;
	int64_t x635 = INT64_MIN;
	static uint8_t x636 = UINT8_MAX;
	int32_t t32 = -1;

	t32 = ((x633<<(x634&x635))+x636);

	if (t32 != 510) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x641 = INT16_MAX;
	volatile int32_t x642 = INT32_MIN;
	uint8_t x643 = 0U;
	int32_t t33 = 52279;

	t33 = ((x641<<(x642&x643))+x644);

	if (t33 != 32778) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x661 = UINT32_MAX;
	uint32_t x662 = UINT32_MAX;
	volatile int8_t x663 = 0;
	static int64_t x664 = -1LL;

	t34 = ((x661<<(x662&x663))+x664);

	if (t34 != 4294967294LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x673 = 11U;
	int64_t x675 = INT64_MIN;
	int32_t x676 = INT32_MIN;
	int32_t t35 = 13669;

	t35 = ((x673<<(x674&x675))+x676);

	if (t35 != -2147483637) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x677 = 442U;
	int16_t x678 = INT16_MIN;
	uint64_t x680 = 1549321206854592LLU;
	static volatile uint64_t t36 = 85347735953LLU;

	t36 = ((x677<<(x678&x679))+x680);

	if (t36 != 1549321206855034LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x682 = 21U;
	int64_t x683 = INT64_MAX;
	int8_t x684 = INT8_MIN;
	volatile uint32_t t37 = 12788U;

	t37 = ((x681<<(x682&x683))+x684);

	if (t37 != 3248488320U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x706 = INT16_MIN;
	uint16_t x707 = 29528U;
	uint8_t x708 = 0U;
	volatile int64_t t38 = INT64_MAX;

	t38 = ((x705<<(x706&x707))+x708);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x717 = UINT16_MAX;
	int16_t x719 = -700;
	int16_t x720 = INT16_MAX;
	int32_t t39 = -4;

	t39 = ((x717<<(x718&x719))+x720);

	if (t39 != 98302) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x737 = 111590LL;
	static int16_t x738 = 46;
	static int64_t x739 = 59LL;
	int8_t x740 = 0;
	volatile int64_t t40 = -2551389LL;

	t40 = ((x737<<(x738&x739))+x740);

	if (t40 != 490778010174095360LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x741 = 3031LLU;
	int8_t x742 = 3;
	volatile int16_t x743 = 0;
	int32_t x744 = INT32_MAX;
	uint64_t t41 = 15249701LLU;

	t41 = ((x741<<(x742&x743))+x744);

	if (t41 != 2147486678LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x745 = 19;
	static uint8_t x746 = 0U;
	int8_t x748 = INT8_MAX;

	t42 = ((x745<<(x746&x747))+x748);

	if (t42 != 146) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x758 = UINT32_MAX;
	int64_t x759 = INT64_MIN;
	volatile int32_t x760 = -6885176;
	static volatile int32_t t43 = 2830910;

	t43 = ((x757<<(x758&x759))+x760);

	if (t43 != -6884921) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x761 = INT16_MAX;
	int32_t x762 = 0;
	int16_t x763 = INT16_MAX;
	uint16_t x764 = 56U;
	volatile int32_t t44 = -6681741;

	t44 = ((x761<<(x762&x763))+x764);

	if (t44 != 32823) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x770 = 0U;
	volatile uint32_t x771 = UINT32_MAX;
	static int64_t x772 = -1LL;
	volatile int64_t t45 = 21078LL;

	t45 = ((x769<<(x770&x771))+x772);

	if (t45 != 65534LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x781 = 73459;
	volatile int16_t x782 = INT16_MIN;
	volatile uint8_t x783 = UINT8_MAX;
	uint8_t x784 = 98U;

	t46 = ((x781<<(x782&x783))+x784);

	if (t46 != 73557) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x794 = 3;
	int32_t x795 = -149237570;
	int32_t x796 = INT32_MAX;

	t47 = ((x793<<(x794&x795))+x796);

	if (t47 != 2147483671LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x817 = INT16_MAX;
	static int64_t x819 = INT64_MIN;

	t48 = ((x817<<(x818&x819))+x820);

	if (t48 != 32639) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x845 = 9410;
	int8_t x846 = 5;
	volatile uint32_t x847 = 97U;
	volatile int64_t x848 = INT64_MIN;
	volatile int64_t t49 = 86539009LL;

	t49 = ((x845<<(x846&x847))+x848);

	if (t49 != -9223372036854756988LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x849 = INT64_MAX;
	int8_t x851 = 0;
	int32_t x852 = -1;
	volatile int64_t t50 = -12997LL;

	t50 = ((x849<<(x850&x851))+x852);

	if (t50 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x857 = INT8_MAX;
	uint16_t x858 = 12U;
	int8_t x859 = INT8_MAX;
	uint32_t t51 = 1535U;

	t51 = ((x857<<(x858&x859))+x860);

	if (t51 != 616696U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x865 = 267LLU;
	uint32_t x866 = 980753U;
	volatile int32_t x867 = INT32_MIN;
	uint64_t x868 = 46705365LLU;
	volatile uint64_t t52 = 1855825LLU;

	t52 = ((x865<<(x866&x867))+x868);

	if (t52 != 46705632LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x885 = 56898725796LL;
	static volatile int32_t x888 = INT32_MAX;
	int64_t t53 = 415260737738LL;

	t53 = ((x885<<(x886&x887))+x888);

	if (t53 != 115944935239LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x937 = 1013701336U;
	static int32_t x938 = 29;
	static int8_t x939 = INT8_MAX;
	int32_t x940 = INT32_MAX;

	t54 = ((x937<<(x938&x939))+x940);

	if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x985 = UINT8_MAX;
	static volatile uint16_t x986 = 15U;
	static uint16_t x987 = 1364U;
	int64_t x988 = -1LL;
	int64_t t55 = -751737LL;

	t55 = ((x985<<(x986&x987))+x988);

	if (t55 != 4079LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x994 = 0;
	volatile int64_t x996 = -1LL;
	volatile int64_t t56 = 623332653LL;

	t56 = ((x993<<(x994&x995))+x996);

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x997 = 722LL;
	int8_t x998 = 3;
	volatile int64_t x999 = -1LL;
	uint64_t x1000 = 268334296LLU;
	uint64_t t57 = 1LLU;

	t57 = ((x997<<(x998&x999))+x1000);

	if (t57 != 268340072LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1025 = 2165530LLU;
	static int8_t x1026 = 0;
	static volatile int32_t x1027 = 1;
	uint8_t x1028 = UINT8_MAX;

	t58 = ((x1025<<(x1026&x1027))+x1028);

	if (t58 != 2165785LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1053 = 67128591355525LL;
	int8_t x1054 = -32;
	uint16_t x1055 = 11U;
	uint8_t x1056 = UINT8_MAX;
	int64_t t59 = 1497136683166375795LL;

	t59 = ((x1053<<(x1054&x1055))+x1056);

	if (t59 != 67128591355780LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1075 = -1;
	static uint16_t x1076 = UINT16_MAX;
	volatile uint32_t t60 = 18U;

	t60 = ((x1073<<(x1074&x1075))+x1076);

	if (t60 != 65533U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x1077 = INT32_MAX;
	int8_t x1078 = INT8_MAX;
	int8_t x1080 = -1;
	volatile int32_t t61 = -123625896;

	t61 = ((x1077<<(x1078&x1079))+x1080);

	if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1081 = INT64_MAX;
	int32_t x1082 = INT32_MIN;
	volatile int32_t x1083 = INT32_MAX;
	static int32_t x1084 = -100795288;

	t62 = ((x1081<<(x1082&x1083))+x1084);

	if (t62 != 9223372036753980519LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1089 = 124U;
	int64_t x1090 = -1LL;
	uint8_t x1091 = 7U;
	int16_t x1092 = INT16_MIN;

	t63 = ((x1089<<(x1090&x1091))+x1092);

	if (t63 != -16896) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1097 = UINT32_MAX;
	int16_t x1098 = INT16_MIN;
	int32_t x1099 = 8;

	t64 = ((x1097<<(x1098&x1099))+x1100);

	if (t64 != 254U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1104 = 8;
	int32_t t65 = 15014;

	t65 = ((x1101<<(x1102&x1103))+x1104);

	if (t65 != 21) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1105 = 19U;
	uint16_t x1106 = 2699U;
	volatile int16_t x1107 = INT16_MIN;
	int16_t x1108 = -1;
	static int32_t t66 = -254;

	t66 = ((x1105<<(x1106&x1107))+x1108);

	if (t66 != 18) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1141 = INT8_MAX;
	int16_t x1142 = 2092;
	static int64_t x1143 = -7088LL;
	static uint8_t x1144 = UINT8_MAX;
	static volatile int32_t t67 = -18920;

	t67 = ((x1141<<(x1142&x1143))+x1144);

	if (t67 != 382) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1154 = INT32_MIN;
	int64_t x1155 = 7244898LL;
	int8_t x1156 = INT8_MIN;
	volatile int32_t t68 = 22509425;

	t68 = ((x1153<<(x1154&x1155))+x1156);

	if (t68 != -35) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1165 = 7;
	static uint32_t x1166 = 1U;
	static uint16_t x1167 = 5U;
	volatile int8_t x1168 = 0;
	volatile int32_t t69 = -1450;

	t69 = ((x1165<<(x1166&x1167))+x1168);

	if (t69 != 14) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1173 = 118LL;
	int16_t x1174 = -1;
	int8_t x1175 = 0;
	volatile int8_t x1176 = INT8_MIN;
	volatile int64_t t70 = -2605LL;

	t70 = ((x1173<<(x1174&x1175))+x1176);

	if (t70 != -10LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1194 = INT64_MIN;
	static volatile int16_t x1195 = INT16_MAX;
	int32_t x1196 = INT32_MAX;
	volatile uint32_t t71 = 1U;

	t71 = ((x1193<<(x1194&x1195))+x1196);

	if (t71 != 2147483646U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1213 = 15722U;
	volatile int16_t x1214 = INT16_MIN;
	uint16_t x1215 = 17U;
	uint8_t x1216 = 9U;
	volatile int32_t t72 = -114731;

	t72 = ((x1213<<(x1214&x1215))+x1216);

	if (t72 != 15731) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1229 = UINT8_MAX;
	static int16_t x1230 = 9;
	static uint8_t x1231 = 6U;
	int8_t x1232 = -1;
	volatile int32_t t73 = -45611;

	t73 = ((x1229<<(x1230&x1231))+x1232);

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x1238 = UINT16_MAX;
	int64_t x1239 = INT64_MIN;
	static int16_t x1240 = INT16_MIN;

	t74 = ((x1237<<(x1238&x1239))+x1240);

	if (t74 != -32681) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1253 = 5U;
	uint8_t x1255 = 3U;
	volatile int16_t x1256 = INT16_MAX;
	static volatile uint32_t t75 = 1083U;

	t75 = ((x1253<<(x1254&x1255))+x1256);

	if (t75 != 32807U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x1257 = UINT32_MAX;

	t76 = ((x1257<<(x1258&x1259))+x1260);

	if (t76 != 65534U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1273 = UINT32_MAX;
	static volatile uint64_t x1274 = 28017855672748LLU;
	uint32_t x1275 = 3U;
	static uint32_t t77 = 21U;

	t77 = ((x1273<<(x1274&x1275))+x1276);

	if (t77 != 4294967243U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1297 = UINT16_MAX;
	int32_t x1298 = -7680;
	int32_t x1299 = 423;
	int64_t x1300 = -1LL;
	int64_t t78 = -1962113150LL;

	t78 = ((x1297<<(x1298&x1299))+x1300);

	if (t78 != 65534LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x1317 = 254LLU;
	static uint16_t x1318 = 2U;
	volatile int16_t x1319 = INT16_MIN;
	int64_t x1320 = -1LL;
	static volatile uint64_t t79 = 6108LLU;

	t79 = ((x1317<<(x1318&x1319))+x1320);

	if (t79 != 253LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x1365 = INT16_MAX;
	uint32_t x1367 = 12445U;
	volatile int8_t x1368 = -1;
	int32_t t80 = 976332341;

	t80 = ((x1365<<(x1366&x1367))+x1368);

	if (t80 != 32766) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1369 = 57018706U;
	static int64_t x1370 = INT64_MIN;
	int32_t x1371 = INT32_MAX;
	volatile int64_t x1372 = -1539623553115072842LL;
	volatile int64_t t81 = 31103LL;

	t81 = ((x1369<<(x1370&x1371))+x1372);

	if (t81 != -1539623553058054136LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x1389 = 7U;
	uint16_t x1390 = 1U;
	int8_t x1391 = 0;
	uint64_t x1392 = 4778382814719652787LLU;
	uint64_t t82 = 1847749375471035209LLU;

	t82 = ((x1389<<(x1390&x1391))+x1392);

	if (t82 != 4778382814719652794LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x1394 = INT16_MAX;
	int64_t x1395 = INT64_MIN;
	int32_t x1396 = -241841549;

	t83 = ((x1393<<(x1394&x1395))+x1396);

	if (t83 != -241841549) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1401 = INT16_MAX;
	int8_t x1402 = INT8_MIN;
	uint64_t x1403 = 20LLU;
	int8_t x1404 = -21;
	int32_t t84 = 614;

	t84 = ((x1401<<(x1402&x1403))+x1404);

	if (t84 != 32746) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x1409 = UINT8_MAX;
	static uint16_t x1410 = 11U;
	int16_t x1412 = INT16_MIN;
	volatile int32_t t85 = 2218;

	t85 = ((x1409<<(x1410&x1411))+x1412);

	if (t85 != 489472) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x1421 = INT16_MAX;
	int16_t x1422 = 6;
	volatile int32_t x1423 = INT32_MIN;
	volatile uint16_t x1424 = 25504U;
	static int32_t t86 = 2;

	t86 = ((x1421<<(x1422&x1423))+x1424);

	if (t86 != 58271) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x1470 = 120U;
	uint8_t x1471 = 1U;
	int32_t x1472 = 80141;

	t87 = ((x1469<<(x1470&x1471))+x1472);

	if (t87 != 9712612736828LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1565 = 124927163LLU;
	static uint64_t x1566 = 31526397676LLU;
	int64_t x1567 = INT64_MIN;
	int8_t x1568 = INT8_MIN;
	static uint64_t t88 = 34731507510LLU;

	t88 = ((x1565<<(x1566&x1567))+x1568);

	if (t88 != 124927035LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1577 = 1;
	uint32_t x1578 = 1032U;
	int64_t x1579 = INT64_MIN;
	volatile int32_t t89 = -7;

	t89 = ((x1577<<(x1578&x1579))+x1580);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x1581 = UINT16_MAX;
	int64_t x1582 = INT64_MIN;
	uint64_t t90 = 6428113536754075LLU;

	t90 = ((x1581<<(x1582&x1583))+x1584);

	if (t90 != 8748494149437927LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1589 = 7U;
	int16_t x1590 = INT16_MIN;
	static uint32_t x1591 = 83U;
	int32_t x1592 = -1;

	t91 = ((x1589<<(x1590&x1591))+x1592);

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1641 = 40;
	static uint8_t x1642 = 101U;
	int32_t x1643 = 7169;

	t92 = ((x1641<<(x1642&x1643))+x1644);

	if (t92 != 32847) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x1647 = 11U;
	int64_t x1648 = 35136697LL;
	volatile int64_t t93 = -59066840393505869LL;

	t93 = ((x1645<<(x1646&x1647))+x1648);

	if (t93 != 35396793LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1709 = UINT8_MAX;
	uint64_t x1710 = 3LLU;
	volatile int8_t x1711 = INT8_MAX;
	int64_t x1712 = 1533LL;
	volatile int64_t t94 = -43667595LL;

	t94 = ((x1709<<(x1710&x1711))+x1712);

	if (t94 != 3573LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1717 = UINT16_MAX;
	uint8_t x1718 = 1U;
	int8_t x1719 = 2;
	static int32_t x1720 = -1;
	int32_t t95 = -246;

	t95 = ((x1717<<(x1718&x1719))+x1720);

	if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x1741 = 1;
	int16_t x1743 = INT16_MIN;
	uint64_t x1744 = 101524893LLU;
	volatile uint64_t t96 = 165552LLU;

	t96 = ((x1741<<(x1742&x1743))+x1744);

	if (t96 != 101524894LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1746 = INT16_MIN;
	static int8_t x1747 = 18;
	volatile int64_t x1748 = 8580755919564022LL;
	volatile int64_t t97 = 3559586016945920125LL;

	t97 = ((x1745<<(x1746&x1747))+x1748);

	if (t97 != 8580755919596789LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1821 = INT16_MAX;
	int32_t x1822 = INT32_MIN;
	volatile int32_t t98 = -16770777;

	t98 = ((x1821<<(x1822&x1823))+x1824);

	if (t98 != 32778) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1845 = 32264893795381494LLU;
	volatile int64_t x1846 = 0LL;
	int64_t x1848 = INT64_MIN;
	volatile uint64_t t99 = 2063713145LLU;

	t99 = ((x1845<<(x1846&x1847))+x1848);

	if (t99 != 9255636930650157302LLU) { NG(); } else { ; }
	
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

