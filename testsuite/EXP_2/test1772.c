#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x26 = UINT8_MAX;
static int16_t x27 = INT16_MIN;
uint32_t x149 = 31563546U;
int16_t x151 = 2;
uint32_t t3 = 4079867U;
static int64_t x189 = 505LL;
int16_t x190 = 17;
uint32_t t7 = 1U;
uint32_t x238 = UINT32_MAX;
int32_t x265 = 1080;
static uint64_t x268 = 305640789515LLU;
volatile uint64_t t10 = 6353LLU;
volatile uint64_t x317 = UINT64_MAX;
volatile uint64_t t11 = 33170385572LLU;
int32_t x330 = INT32_MAX;
volatile int32_t t12 = -8654484;
int32_t x407 = -13030;
int16_t x408 = -1;
static int8_t x419 = -1;
volatile int64_t x442 = INT64_MIN;
int64_t x443 = 0LL;
uint16_t x445 = 759U;
volatile uint16_t x446 = 1651U;
static int64_t x463 = INT64_MIN;
static volatile int64_t t20 = 2006246LL;
uint16_t x669 = 35U;
int16_t x670 = INT16_MAX;
static uint8_t x671 = 1U;
volatile uint32_t x676 = UINT32_MAX;
volatile int64_t t28 = -30862099686LL;
static int16_t x691 = -4033;
uint64_t x744 = UINT64_MAX;
static volatile uint64_t t32 = 31LLU;
int32_t x754 = INT32_MIN;
uint32_t x755 = 24914555U;
int64_t x756 = INT64_MIN;
int8_t x762 = INT8_MAX;
int8_t x764 = -1;
volatile uint32_t x777 = 72U;
int32_t x778 = 4549646;
int64_t t37 = 5LL;
int64_t x794 = INT64_MIN;
uint16_t x795 = 395U;
uint16_t x801 = 143U;
static uint8_t x803 = 14U;
uint8_t x804 = 27U;
volatile uint64_t x828 = UINT64_MAX;
static uint16_t x846 = UINT16_MAX;
int8_t x847 = 1;
uint8_t x893 = 0U;
uint32_t x906 = 15821U;
volatile int32_t t45 = 3533682;
uint16_t x974 = 362U;
uint8_t x975 = 4U;
int32_t x985 = 9;
volatile uint32_t x989 = 15423258U;
volatile uint8_t x990 = UINT8_MAX;
volatile int16_t x998 = INT16_MIN;
uint16_t x1066 = 7U;
int64_t t52 = 16436811LL;
volatile uint16_t x1160 = 10U;
int64_t x1167 = -1LL;
static int32_t x1168 = 488228;
volatile int32_t t55 = -1071437244;
uint16_t x1214 = UINT16_MAX;
int16_t x1216 = INT16_MIN;
volatile int8_t x1252 = INT8_MIN;
volatile int32_t x1261 = 1008;
int64_t x1290 = INT64_MIN;
static uint16_t x1291 = UINT16_MAX;
static int32_t x1292 = 155993078;
static volatile int8_t x1339 = INT8_MAX;
volatile int32_t x1340 = INT32_MAX;
uint16_t x1425 = UINT16_MAX;
int8_t x1431 = 0;
int32_t x1432 = -1;
int32_t x1440 = -1;
volatile uint64_t t71 = 449665LLU;
uint8_t x1473 = 1U;
uint64_t x1514 = 2LLU;
uint32_t x1516 = 128474693U;
static uint64_t t75 = 9668494215LLU;
static volatile int8_t x1526 = 0;
int32_t t80 = -15147;
uint32_t x1685 = 1U;
uint32_t t82 = 940751U;
volatile uint64_t x1693 = 66971480LLU;
volatile int32_t x1695 = 2;
static uint64_t x1734 = 24LLU;
volatile int8_t x1735 = -25;
volatile uint64_t x1745 = 349409899LLU;
int8_t x1747 = 0;
volatile uint64_t t86 = 60LLU;
uint32_t x1771 = 1174585U;
int8_t x1796 = INT8_MAX;
uint16_t x1807 = 13U;
uint8_t x1830 = 7U;
static volatile uint16_t x1832 = 253U;
static volatile int64_t x1854 = 297597215LL;
int16_t x1856 = INT16_MIN;
volatile uint32_t t92 = 425U;
volatile uint32_t t93 = 617U;
int32_t x1944 = -1;
volatile int32_t t94 = 52;
uint8_t x1990 = 112U;
volatile int8_t x1992 = -1;
int16_t x2011 = 0;
int8_t x2041 = INT8_MAX;
uint16_t x2078 = 0U;
volatile int64_t t99 = -12818LL;


void f0(void) {
	static uint64_t x25 = 114367623923LLU;
	volatile uint8_t x28 = 60U;
	uint64_t t0 = 2896LLU;

	t0 = ((x25>>(x26&x27))/x28);

	if (t0 != 1906127065LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x65 = 807LLU;
	volatile int32_t x66 = INT32_MIN;
	uint8_t x67 = 4U;
	int8_t x68 = INT8_MAX;
	static uint64_t t1 = 19487971LLU;

	t1 = ((x65>>(x66&x67))/x68);

	if (t1 != 6LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x69 = 81U;
	int64_t x70 = INT64_MIN;
	static uint8_t x71 = 40U;
	uint32_t x72 = UINT32_MAX;
	static uint32_t t2 = 11175U;

	t2 = ((x69>>(x70&x71))/x72);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x150 = UINT64_MAX;
	int16_t x152 = 2;

	t3 = ((x149>>(x150&x151))/x152);

	if (t3 != 3945443U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x181 = 6U;
	volatile uint16_t x182 = 0U;
	static uint16_t x183 = UINT16_MAX;
	static int32_t x184 = -2688482;
	volatile int32_t t4 = 19098709;

	t4 = ((x181>>(x182&x183))/x184);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x185 = 36;
	static int64_t x186 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	static int16_t x188 = INT16_MIN;
	int32_t t5 = -1;

	t5 = ((x185>>(x186&x187))/x188);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x191 = 28U;
	int16_t x192 = INT16_MIN;
	volatile int64_t t6 = 3310403727021868276LL;

	t6 = ((x189>>(x190&x191))/x192);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x209 = 34U;
	volatile int16_t x210 = -6275;
	int8_t x211 = 22;
	uint32_t x212 = 514504494U;

	t7 = ((x209>>(x210&x211))/x212);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x217 = 1851696937184729532LL;
	int32_t x218 = -4574;
	static volatile uint8_t x219 = 0U;
	int32_t x220 = INT32_MAX;
	static volatile int64_t t8 = -38090939577125LL;

	t8 = ((x217>>(x218&x219))/x220);

	if (t8 != 862263579LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x237 = INT8_MAX;
	uint32_t x239 = 25U;
	volatile int16_t x240 = -117;
	volatile int32_t t9 = 50330981;

	t9 = ((x237>>(x238&x239))/x240);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x266 = 30U;
	volatile int64_t x267 = 1350708299204660847LL;

	t10 = ((x265>>(x266&x267))/x268);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x318 = -60;
	static uint16_t x319 = 10U;
	static int32_t x320 = INT32_MIN;

	t11 = ((x317>>(x318&x319))/x320);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x329 = UINT16_MAX;
	int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MIN;

	t12 = ((x329>>(x330&x331))/x332);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x345 = 632;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = 458416150U;
	int64_t x348 = INT64_MAX;
	static volatile int64_t t13 = -3293145LL;

	t13 = ((x345>>(x346&x347))/x348);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x365 = 1U;
	int32_t x366 = -216254789;
	static uint16_t x367 = 13U;
	uint64_t x368 = 1LLU;
	uint64_t t14 = 274452LLU;

	t14 = ((x365>>(x366&x367))/x368);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x377 = 249U;
	uint8_t x378 = 0U;
	int16_t x379 = 5;
	int64_t x380 = -33995996536LL;
	int64_t t15 = 910510LL;

	t15 = ((x377>>(x378&x379))/x380);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x405 = INT32_MAX;
	uint8_t x406 = 1U;
	volatile int32_t t16 = -16611407;

	t16 = ((x405>>(x406&x407))/x408);

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x417 = 2047137662472267433LLU;
	int8_t x418 = 0;
	int64_t x420 = INT64_MIN;
	volatile uint64_t t17 = 287742364832170158LLU;

	t17 = ((x417>>(x418&x419))/x420);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x441 = 0U;
	static int8_t x444 = 10;
	volatile int32_t t18 = 190;

	t18 = ((x441>>(x442&x443))/x444);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x447 = INT64_MIN;
	static volatile uint16_t x448 = 7U;
	volatile int32_t t19 = -9644;

	t19 = ((x445>>(x446&x447))/x448);

	if (t19 != 108) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x461 = 5179690U;
	uint16_t x462 = 2U;
	static volatile int64_t x464 = -1LL;

	t20 = ((x461>>(x462&x463))/x464);

	if (t20 != -5179690LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x497 = UINT64_MAX;
	static volatile int64_t x498 = INT64_MAX;
	uint8_t x499 = 0U;
	volatile int16_t x500 = -3;
	volatile uint64_t t21 = 35388569152692562LLU;

	t21 = ((x497>>(x498&x499))/x500);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x521 = 12U;
	uint16_t x522 = 190U;
	int8_t x523 = 3;
	int16_t x524 = INT16_MIN;
	int32_t t22 = 135587;

	t22 = ((x521>>(x522&x523))/x524);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x525 = 4915;
	uint8_t x526 = UINT8_MAX;
	volatile int16_t x527 = INT16_MIN;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t23 = 6582;

	t23 = ((x525>>(x526&x527))/x528);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x605 = 112U;
	static uint8_t x606 = 6U;
	int32_t x607 = -1;
	int16_t x608 = -47;
	int32_t t24 = -5;

	t24 = ((x605>>(x606&x607))/x608);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x609 = 82;
	uint8_t x610 = 8U;
	int32_t x611 = INT32_MIN;
	volatile int32_t x612 = -1551853;
	int32_t t25 = 12;

	t25 = ((x609>>(x610&x611))/x612);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x633 = INT8_MAX;
	uint64_t x634 = 61714813LLU;
	int32_t x635 = INT32_MIN;
	int64_t x636 = INT64_MAX;
	static int64_t t26 = 1202289228LL;

	t26 = ((x633>>(x634&x635))/x636);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x672 = INT8_MIN;
	int32_t t27 = -1;

	t27 = ((x669>>(x670&x671))/x672);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x673 = 1LL;
	uint8_t x674 = 48U;
	int64_t x675 = -1LL;

	t28 = ((x673>>(x674&x675))/x676);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x689 = 5U;
	static uint8_t x690 = 0U;
	uint8_t x692 = 1U;
	volatile int32_t t29 = 29612;

	t29 = ((x689>>(x690&x691))/x692);

	if (t29 != 5) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x733 = UINT16_MAX;
	uint8_t x734 = 10U;
	volatile uint32_t x735 = 2456U;
	static int64_t x736 = INT64_MIN;
	volatile int64_t t30 = -15LL;

	t30 = ((x733>>(x734&x735))/x736);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x741 = INT16_MAX;
	uint16_t x742 = UINT16_MAX;
	int8_t x743 = 0;
	volatile uint64_t t31 = 1278LLU;

	t31 = ((x741>>(x742&x743))/x744);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x745 = UINT32_MAX;
	int8_t x746 = INT8_MAX;
	int8_t x747 = INT8_MIN;
	uint64_t x748 = UINT64_MAX;

	t32 = ((x745>>(x746&x747))/x748);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x753 = 10;
	static int64_t t33 = -239020LL;

	t33 = ((x753>>(x754&x755))/x756);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x757 = 4U;
	volatile int64_t x758 = -544864LL;
	int16_t x759 = 0;
	int64_t x760 = INT64_MIN;
	int64_t t34 = -1LL;

	t34 = ((x757>>(x758&x759))/x760);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x761 = INT64_MAX;
	static volatile uint8_t x763 = 0U;
	int64_t t35 = 4102906LL;

	t35 = ((x761>>(x762&x763))/x764);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x773 = 6620U;
	uint16_t x774 = 2471U;
	int16_t x775 = 598;
	int64_t x776 = -64921369902LL;
	int64_t t36 = -13556LL;

	t36 = ((x773>>(x774&x775))/x776);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x779 = INT32_MIN;
	static int64_t x780 = INT64_MIN;

	t37 = ((x777>>(x778&x779))/x780);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x793 = 9003777462364LLU;
	static int16_t x796 = INT16_MIN;
	uint64_t t38 = 3LLU;

	t38 = ((x793>>(x794&x795))/x796);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x802 = -38035052799625LL;
	int32_t t39 = -119394;

	t39 = ((x801>>(x802&x803))/x804);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x825 = INT8_MAX;
	static int8_t x826 = 1;
	volatile int32_t x827 = -1;
	static uint64_t t40 = 384893437040384LLU;

	t40 = ((x825>>(x826&x827))/x828);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x845 = UINT16_MAX;
	int8_t x848 = -3;
	volatile int32_t t41 = 3034;

	t41 = ((x845>>(x846&x847))/x848);

	if (t41 != -10922) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x881 = 26;
	int16_t x882 = -8547;
	uint8_t x883 = 3U;
	int16_t x884 = 1629;
	int32_t t42 = 0;

	t42 = ((x881>>(x882&x883))/x884);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x894 = 0U;
	int16_t x895 = INT16_MIN;
	volatile int16_t x896 = INT16_MAX;
	static volatile int32_t t43 = 1427222;

	t43 = ((x893>>(x894&x895))/x896);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x905 = 24U;
	int64_t x907 = INT64_MIN;
	static int16_t x908 = -62;
	int32_t t44 = 11208732;

	t44 = ((x905>>(x906&x907))/x908);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x949 = 174;
	uint8_t x950 = 8U;
	volatile uint64_t x951 = UINT64_MAX;
	static int16_t x952 = INT16_MIN;

	t45 = ((x949>>(x950&x951))/x952);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x973 = 5063298;
	int64_t x976 = INT64_MAX;
	int64_t t46 = -665393330052126417LL;

	t46 = ((x973>>(x974&x975))/x976);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x986 = INT64_MIN;
	volatile uint16_t x987 = 597U;
	volatile int8_t x988 = -1;
	static int32_t t47 = 9308675;

	t47 = ((x985>>(x986&x987))/x988);

	if (t47 != -9) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x991 = INT16_MIN;
	static int64_t x992 = -388012LL;
	int64_t t48 = -1LL;

	t48 = ((x989>>(x990&x991))/x992);

	if (t48 != -39LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x997 = UINT16_MAX;
	static int8_t x999 = INT8_MAX;
	static int16_t x1000 = INT16_MIN;
	int32_t t49 = -284998;

	t49 = ((x997>>(x998&x999))/x1000);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1065 = INT8_MAX;
	int8_t x1067 = -3;
	volatile uint64_t x1068 = UINT64_MAX;
	static uint64_t t50 = 5946981LLU;

	t50 = ((x1065>>(x1066&x1067))/x1068);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1121 = 4581U;
	static int8_t x1122 = 0;
	volatile int8_t x1123 = INT8_MIN;
	static volatile uint16_t x1124 = UINT16_MAX;
	int32_t t51 = -31114401;

	t51 = ((x1121>>(x1122&x1123))/x1124);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x1137 = 3295;
	volatile int32_t x1138 = 3830697;
	int64_t x1139 = INT64_MIN;
	int64_t x1140 = 1LL;

	t52 = ((x1137>>(x1138&x1139))/x1140);

	if (t52 != 3295LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1153 = UINT16_MAX;
	int64_t x1154 = -431682074564LL;
	uint8_t x1155 = 1U;
	uint64_t x1156 = 5LLU;
	volatile uint64_t t53 = 2594079527608LLU;

	t53 = ((x1153>>(x1154&x1155))/x1156);

	if (t53 != 13107LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x1157 = 28U;
	int16_t x1158 = INT16_MIN;
	uint16_t x1159 = 433U;
	int32_t t54 = -134770;

	t54 = ((x1157>>(x1158&x1159))/x1160);

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1165 = INT32_MAX;
	static int32_t x1166 = 6;

	t55 = ((x1165>>(x1166&x1167))/x1168);

	if (t55 != 68) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1173 = UINT64_MAX;
	int32_t x1174 = INT32_MAX;
	int32_t x1175 = INT32_MIN;
	static int64_t x1176 = INT64_MAX;
	static uint64_t t56 = 249LLU;

	t56 = ((x1173>>(x1174&x1175))/x1176);

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x1193 = 0U;
	volatile int8_t x1194 = 22;
	int16_t x1195 = -1;
	uint64_t x1196 = 126185177LLU;
	static volatile uint64_t t57 = 709057783LLU;

	t57 = ((x1193>>(x1194&x1195))/x1196);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x1213 = UINT32_MAX;
	static int32_t x1215 = INT32_MIN;
	static uint32_t t58 = 41668977U;

	t58 = ((x1213>>(x1214&x1215))/x1216);

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x1249 = 10257;
	uint32_t x1250 = 610U;
	uint64_t x1251 = 60444LLU;
	volatile int32_t t59 = -13;

	t59 = ((x1249>>(x1250&x1251))/x1252);

	if (t59 != -80) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1253 = 25876U;
	uint32_t x1254 = 18U;
	int32_t x1255 = 4065913;
	static int32_t x1256 = -1;
	int32_t t60 = -396452845;

	t60 = ((x1253>>(x1254&x1255))/x1256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1262 = INT64_MIN;
	uint8_t x1263 = 72U;
	volatile uint32_t x1264 = 1U;
	volatile uint32_t t61 = 2895893U;

	t61 = ((x1261>>(x1262&x1263))/x1264);

	if (t61 != 1008U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1273 = 3988U;
	int32_t x1274 = INT32_MIN;
	int8_t x1275 = INT8_MAX;
	int16_t x1276 = INT16_MIN;
	static int32_t t62 = -2;

	t62 = ((x1273>>(x1274&x1275))/x1276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x1289 = UINT32_MAX;
	volatile uint32_t t63 = 50U;

	t63 = ((x1289>>(x1290&x1291))/x1292);

	if (t63 != 27U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x1297 = 90540939736309677LLU;
	int8_t x1298 = INT8_MIN;
	uint16_t x1299 = 1U;
	uint8_t x1300 = 63U;
	uint64_t t64 = 111203LLU;

	t64 = ((x1297>>(x1298&x1299))/x1300);

	if (t64 != 1437157773592217LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x1305 = INT32_MAX;
	uint8_t x1306 = UINT8_MAX;
	int64_t x1307 = INT64_MIN;
	int8_t x1308 = INT8_MAX;
	int32_t t65 = 695802;

	t65 = ((x1305>>(x1306&x1307))/x1308);

	if (t65 != 16909320) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x1317 = 0U;
	volatile int8_t x1318 = INT8_MIN;
	uint8_t x1319 = 0U;
	static int64_t x1320 = -1LL;
	volatile int64_t t66 = 34LL;

	t66 = ((x1317>>(x1318&x1319))/x1320);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1337 = 1;
	volatile int8_t x1338 = INT8_MIN;
	static int32_t t67 = -187761453;

	t67 = ((x1337>>(x1338&x1339))/x1340);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1341 = 2450;
	static uint16_t x1342 = 246U;
	uint8_t x1343 = 0U;
	static int32_t x1344 = INT32_MIN;
	volatile int32_t t68 = -471;

	t68 = ((x1341>>(x1342&x1343))/x1344);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1426 = UINT16_MAX;
	uint16_t x1427 = 28U;
	static uint32_t x1428 = UINT32_MAX;
	static volatile uint32_t t69 = 90638149U;

	t69 = ((x1425>>(x1426&x1427))/x1428);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1429 = INT64_MAX;
	uint8_t x1430 = UINT8_MAX;
	int64_t t70 = -112528292886684794LL;

	t70 = ((x1429>>(x1430&x1431))/x1432);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x1437 = 81068624196068LLU;
	static int64_t x1438 = INT64_MIN;
	int16_t x1439 = 135;

	t71 = ((x1437>>(x1438&x1439))/x1440);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1441 = 6882516671232LLU;
	int32_t x1442 = INT32_MIN;
	uint8_t x1443 = 47U;
	volatile uint32_t x1444 = 8828546U;
	volatile uint64_t t72 = 3706669666LLU;

	t72 = ((x1441>>(x1442&x1443))/x1444);

	if (t72 != 779575LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x1474 = 1;
	static uint8_t x1475 = 0U;
	int16_t x1476 = INT16_MAX;
	int32_t t73 = -11;

	t73 = ((x1473>>(x1474&x1475))/x1476);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x1501 = 49000396014087LLU;
	static uint64_t x1502 = 11447516106LLU;
	uint8_t x1503 = 6U;
	static int8_t x1504 = INT8_MIN;
	volatile uint64_t t74 = 3544247892LLU;

	t74 = ((x1501>>(x1502&x1503))/x1504);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x1513 = UINT64_MAX;
	int8_t x1515 = -1;

	t75 = ((x1513>>(x1514&x1515))/x1516);

	if (t75 != 35895676500LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x1525 = INT64_MAX;
	int32_t x1527 = INT32_MAX;
	int64_t x1528 = INT64_MAX;
	int64_t t76 = 59496048LL;

	t76 = ((x1525>>(x1526&x1527))/x1528);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x1533 = UINT32_MAX;
	volatile uint16_t x1534 = 236U;
	int32_t x1535 = INT32_MIN;
	static int64_t x1536 = INT64_MIN;
	int64_t t77 = 39LL;

	t77 = ((x1533>>(x1534&x1535))/x1536);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1589 = UINT64_MAX;
	static int64_t x1590 = INT64_MIN;
	uint16_t x1591 = 1439U;
	uint64_t x1592 = 3636447057746612456LLU;
	volatile uint64_t t78 = 64946298373LLU;

	t78 = ((x1589>>(x1590&x1591))/x1592);

	if (t78 != 5LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1597 = 37558931380774985LLU;
	int8_t x1598 = INT8_MIN;
	uint16_t x1599 = 8U;
	int64_t x1600 = INT64_MIN;
	volatile uint64_t t79 = 1099802LLU;

	t79 = ((x1597>>(x1598&x1599))/x1600);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1601 = UINT16_MAX;
	int8_t x1602 = INT8_MAX;
	static int8_t x1603 = INT8_MIN;
	volatile int8_t x1604 = -1;

	t80 = ((x1601>>(x1602&x1603))/x1604);

	if (t80 != -65535) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1605 = 13U;
	volatile int64_t x1606 = INT64_MIN;
	static volatile uint32_t x1607 = 1330969U;
	int64_t x1608 = -731655790442LL;
	volatile int64_t t81 = -1130795484589332020LL;

	t81 = ((x1605>>(x1606&x1607))/x1608);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1686 = -1;
	int8_t x1687 = 5;
	int16_t x1688 = INT16_MIN;

	t82 = ((x1685>>(x1686&x1687))/x1688);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1694 = 22925584U;
	volatile int16_t x1696 = INT16_MAX;
	volatile uint64_t t83 = 401907725LLU;

	t83 = ((x1693>>(x1694&x1695))/x1696);

	if (t83 != 2043LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1701 = 66617416020135LLU;
	volatile int16_t x1702 = -8263;
	int8_t x1703 = INT8_MAX;
	static volatile int64_t x1704 = -1LL;
	volatile uint64_t t84 = 2470540320LLU;

	t84 = ((x1701>>(x1702&x1703))/x1704);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x1733 = INT8_MAX;
	volatile uint32_t x1736 = 144U;
	uint32_t t85 = 434740785U;

	t85 = ((x1733>>(x1734&x1735))/x1736);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1746 = INT64_MIN;
	int64_t x1748 = 126723566230108455LL;

	t86 = ((x1745>>(x1746&x1747))/x1748);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1769 = 129377038LLU;
	uint8_t x1770 = 0U;
	uint32_t x1772 = UINT32_MAX;
	uint64_t t87 = 9LLU;

	t87 = ((x1769>>(x1770&x1771))/x1772);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x1785 = UINT8_MAX;
	uint16_t x1786 = 21U;
	int8_t x1787 = INT8_MAX;
	int8_t x1788 = -1;
	int32_t t88 = 487121887;

	t88 = ((x1785>>(x1786&x1787))/x1788);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1793 = INT64_MAX;
	static uint32_t x1794 = 17U;
	volatile uint8_t x1795 = 1U;
	volatile int64_t t89 = -184725831112LL;

	t89 = ((x1793>>(x1794&x1795))/x1796);

	if (t89 != 36312488334073920LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x1805 = UINT32_MAX;
	int16_t x1806 = 0;
	static int16_t x1808 = INT16_MAX;
	uint32_t t90 = 59534030U;

	t90 = ((x1805>>(x1806&x1807))/x1808);

	if (t90 != 131076U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1829 = INT16_MAX;
	int8_t x1831 = INT8_MIN;
	static int32_t t91 = -10299;

	t91 = ((x1829>>(x1830&x1831))/x1832);

	if (t91 != 129) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x1853 = 677844U;
	int8_t x1855 = 1;

	t92 = ((x1853>>(x1854&x1855))/x1856);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1889 = UINT32_MAX;
	uint16_t x1890 = UINT16_MAX;
	static int32_t x1891 = INT32_MIN;
	static volatile int32_t x1892 = INT32_MIN;

	t93 = ((x1889>>(x1890&x1891))/x1892);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1941 = INT32_MAX;
	volatile int64_t x1942 = 160486695LL;
	int8_t x1943 = 1;

	t94 = ((x1941>>(x1942&x1943))/x1944);

	if (t94 != -1073741823) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1969 = UINT64_MAX;
	uint32_t x1970 = 15U;
	volatile uint32_t x1971 = 20U;
	int64_t x1972 = -360650417999619764LL;
	uint64_t t95 = 53664829LLU;

	t95 = ((x1969>>(x1970&x1971))/x1972);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1989 = 5U;
	int16_t x1991 = 3;
	static int32_t t96 = -86;

	t96 = ((x1989>>(x1990&x1991))/x1992);

	if (t96 != -5) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2009 = 2003542700883802LLU;
	static int32_t x2010 = -1;
	int8_t x2012 = 3;
	static volatile uint64_t t97 = 6LLU;

	t97 = ((x2009>>(x2010&x2011))/x2012);

	if (t97 != 667847566961267LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2042 = 1;
	int32_t x2043 = INT32_MIN;
	int16_t x2044 = 12;
	volatile int32_t t98 = 1988109;

	t98 = ((x2041>>(x2042&x2043))/x2044);

	if (t98 != 10) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2077 = 1;
	int16_t x2079 = INT16_MIN;
	int64_t x2080 = -434015464796447LL;

	t99 = ((x2077>>(x2078&x2079))/x2080);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

