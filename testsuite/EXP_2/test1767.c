#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x82 = 0;
int64_t x88 = INT64_MIN;
int16_t x105 = 221;
int8_t x116 = -22;
static uint32_t x125 = 281U;
uint8_t x153 = 0U;
static int64_t x201 = 10847253421070LL;
int64_t t6 = 1LL;
int8_t x221 = 1;
int32_t x222 = INT32_MIN;
int8_t x261 = INT8_MAX;
uint16_t x289 = 30786U;
uint64_t x291 = 0LLU;
static int64_t x299 = INT64_MIN;
int64_t x307 = INT64_MAX;
int64_t x308 = INT64_MIN;
uint8_t x390 = 7U;
static uint32_t x437 = 7U;
int64_t t16 = 3039037LL;
int8_t x481 = INT8_MAX;
int8_t x491 = 30;
static volatile int32_t t19 = -836486;
volatile uint64_t t20 = 501LLU;
static uint64_t x513 = UINT64_MAX;
uint8_t x528 = 0U;
int32_t x534 = INT32_MAX;
uint8_t x535 = 1U;
static int64_t x536 = INT64_MAX;
uint16_t x607 = 52U;
uint64_t x633 = 261450933755841LLU;
int32_t x635 = 129534553;
static int64_t x636 = 462905782445401486LL;
volatile uint64_t t29 = 1793LLU;
uint8_t x654 = 1U;
uint32_t x655 = UINT32_MAX;
static volatile uint32_t t31 = UINT32_MAX;
int16_t x701 = 2;
static uint16_t x702 = 2U;
int32_t x704 = INT32_MAX;
volatile int64_t t35 = 1LL;
uint32_t x787 = 0U;
int64_t x810 = INT64_MIN;
int16_t x811 = 3;
static uint8_t x829 = 13U;
static int32_t x831 = INT32_MAX;
int8_t x833 = 0;
uint64_t x930 = 781LLU;
static volatile int16_t x964 = 14;
volatile uint32_t t47 = UINT32_MAX;
int32_t x973 = 915;
uint16_t x975 = 10474U;
int16_t x995 = 23;
volatile int8_t x1073 = INT8_MAX;
static int8_t x1092 = INT8_MAX;
volatile int32_t t53 = -7355347;
volatile int32_t t54 = 2;
uint32_t x1131 = 11U;
volatile int8_t x1168 = -1;
static int8_t x1186 = -1;
int64_t x1198 = INT64_MIN;
static volatile uint64_t t59 = UINT64_MAX;
int8_t x1214 = INT8_MIN;
int32_t t61 = -4949;
static uint8_t x1399 = 5U;
uint8_t x1437 = 26U;
int16_t x1515 = -39;
volatile uint32_t t68 = UINT32_MAX;
uint16_t x1524 = 59U;
static volatile int32_t t69 = -2;
volatile int32_t x1532 = INT32_MIN;
int32_t x1554 = INT32_MIN;
int8_t x1555 = 1;
volatile int32_t x1556 = INT32_MIN;
static int64_t x1558 = INT64_MIN;
int16_t x1667 = 13;
static int16_t x1676 = -60;
uint32_t x1679 = UINT32_MAX;
int32_t x1724 = 1;
volatile int32_t t79 = -1469;
static int8_t x1758 = 1;
static int8_t x1760 = -21;
volatile int8_t x1767 = INT8_MAX;
uint64_t x1853 = 726LLU;
uint64_t x1854 = 5335939190LLU;
static uint8_t x1886 = 0U;
volatile uint64_t t88 = 3LLU;
static int64_t x1979 = INT64_MIN;
int64_t x2035 = 1140399656052283LL;
uint16_t x2047 = 13U;
volatile int64_t t93 = 6320LL;
static int64_t x2058 = INT64_MIN;
uint32_t t95 = 5207U;
static uint32_t x2081 = 10392U;
uint8_t x2084 = 22U;
int16_t x2166 = INT16_MAX;
int8_t x2177 = INT8_MAX;
int64_t x2178 = INT64_MIN;


void f0(void) {
	uint8_t x81 = 43U;
	int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t0 = 29712901625277LL;

	t0 = ((x81<<(x82&x83))|x84);

	if (t0 != -9223372036854775765LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x85 = 9047901819213LLU;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = 1U;
	volatile uint64_t t1 = 9688LLU;

	t1 = ((x85<<(x86&x87))|x88);

	if (t1 != 9223381084756595021LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x106 = UINT8_MAX;
	volatile int8_t x107 = 0;
	volatile uint8_t x108 = UINT8_MAX;
	int32_t t2 = 42673252;

	t2 = ((x105<<(x106&x107))|x108);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x113 = 235LLU;
	volatile int8_t x114 = INT8_MAX;
	int64_t x115 = -321490259416891614LL;
	static uint64_t t3 = 83623640096376335LLU;

	t3 = ((x113<<(x114&x115))|x116);

	if (t3 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x126 = 3U;
	volatile int16_t x127 = INT16_MIN;
	uint16_t x128 = 766U;
	volatile uint32_t t4 = 1008U;

	t4 = ((x125<<(x126&x127))|x128);

	if (t4 != 1023U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x154 = 1U;
	int16_t x155 = INT16_MAX;
	volatile int16_t x156 = INT16_MAX;
	int32_t t5 = -64469204;

	t5 = ((x153<<(x154&x155))|x156);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x202 = INT8_MIN;
	volatile uint32_t x203 = 2U;
	int64_t x204 = 67458438747LL;

	t6 = ((x201<<(x202&x203))|x204);

	if (t6 != 10856452578911LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x223 = 24U;
	uint8_t x224 = 40U;
	volatile int32_t t7 = 0;

	t7 = ((x221<<(x222&x223))|x224);

	if (t7 != 41) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x262 = 18;
	uint16_t x263 = 26U;
	uint16_t x264 = 2U;
	static volatile int32_t t8 = 123;

	t8 = ((x261<<(x262&x263))|x264);

	if (t8 != 33292290) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x269 = 13089345LLU;
	uint32_t x270 = 17U;
	static volatile uint16_t x271 = 4U;
	uint32_t x272 = 1U;
	static volatile uint64_t t9 = 98864128122062257LLU;

	t9 = ((x269<<(x270&x271))|x272);

	if (t9 != 13089345LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x290 = -1;
	static uint8_t x292 = 1U;
	static int32_t t10 = 106372;

	t10 = ((x289<<(x290&x291))|x292);

	if (t10 != 30787) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x297 = INT32_MAX;
	static volatile int64_t x298 = INT64_MAX;
	uint64_t x300 = 32110326LLU;
	volatile uint64_t t11 = 887905596621557327LLU;

	t11 = ((x297<<(x298&x299))|x300);

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x305 = UINT8_MAX;
	uint16_t x306 = 5U;
	static int64_t t12 = 433012021069191906LL;

	t12 = ((x305<<(x306&x307))|x308);

	if (t12 != -9223372036854767648LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x317 = INT8_MAX;
	int64_t x318 = INT64_MIN;
	volatile uint32_t x319 = UINT32_MAX;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t13 = 22813;

	t13 = ((x317<<(x318&x319))|x320);

	if (t13 != -32641) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x365 = 4U;
	int64_t x366 = INT64_MIN;
	volatile uint8_t x367 = 3U;
	uint32_t x368 = 50638U;
	volatile uint32_t t14 = 1014337498U;

	t14 = ((x365<<(x366&x367))|x368);

	if (t14 != 50638U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x389 = 34344690627LLU;
	volatile uint64_t x391 = 107730271200690890LLU;
	int16_t x392 = 3;
	volatile uint64_t t15 = 7538089819582612LLU;

	t15 = ((x389<<(x390&x391))|x392);

	if (t15 != 137378762511LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x438 = INT16_MIN;
	int32_t x439 = 15;
	int64_t x440 = -29002522LL;

	t16 = ((x437<<(x438&x439))|x440);

	if (t16 != -29002521LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x449 = 2U;
	volatile int32_t x450 = INT32_MIN;
	int16_t x451 = INT16_MAX;
	static int64_t x452 = INT64_MIN;
	volatile int64_t t17 = -851282186LL;

	t17 = ((x449<<(x450&x451))|x452);

	if (t17 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x482 = 0;
	uint8_t x483 = UINT8_MAX;
	static int64_t x484 = INT64_MIN;
	volatile int64_t t18 = -69556574959898LL;

	t18 = ((x481<<(x482&x483))|x484);

	if (t18 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x489 = 7U;
	int64_t x490 = INT64_MIN;
	volatile uint8_t x492 = UINT8_MAX;

	t19 = ((x489<<(x490&x491))|x492);

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x497 = 41614U;
	int32_t x498 = INT32_MIN;
	int64_t x499 = 142641421LL;
	static uint64_t x500 = 1465057769301953LLU;

	t20 = ((x497<<(x498&x499))|x500);

	if (t20 != 1465057769334735LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x501 = 141;
	static uint64_t x502 = UINT64_MAX;
	static uint32_t x503 = 1U;
	static volatile uint32_t x504 = 600U;
	uint32_t t21 = 84U;

	t21 = ((x501<<(x502&x503))|x504);

	if (t21 != 858U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x514 = 1273522LLU;
	uint8_t x515 = 12U;
	int16_t x516 = -1;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = ((x513<<(x514&x515))|x516);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x525 = INT32_MAX;
	int16_t x526 = INT16_MIN;
	int16_t x527 = 6;
	static volatile int32_t t23 = INT32_MAX;

	t23 = ((x525<<(x526&x527))|x528);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x533 = 6U;
	int64_t t24 = INT64_MAX;

	t24 = ((x533<<(x534&x535))|x536);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x541 = 15U;
	static uint8_t x542 = 123U;
	int64_t x543 = INT64_MIN;
	static volatile int64_t x544 = 15569703LL;
	int64_t t25 = -1786193570932LL;

	t25 = ((x541<<(x542&x543))|x544);

	if (t25 != 15569711LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x573 = UINT32_MAX;
	uint32_t x574 = 660409U;
	volatile int32_t x575 = INT32_MIN;
	static int16_t x576 = INT16_MAX;
	uint32_t t26 = UINT32_MAX;

	t26 = ((x573<<(x574&x575))|x576);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x605 = UINT32_MAX;
	uint16_t x606 = 17116U;
	int64_t x608 = INT64_MIN;
	static volatile int64_t t27 = 1521LL;

	t27 = ((x605<<(x606&x607))|x608);

	if (t27 != -9223372032560857088LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x609 = INT64_MAX;
	int16_t x610 = 0;
	static int32_t x611 = -24528909;
	int16_t x612 = INT16_MIN;
	int64_t t28 = -446LL;

	t28 = ((x609<<(x610&x611))|x612);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x634 = 1;

	t29 = ((x633<<(x634&x635))|x636);

	if (t29 != 463268073943728014LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x653 = 157959;
	static int8_t x656 = INT8_MIN;
	volatile int32_t t30 = -7;

	t30 = ((x653<<(x654&x655))|x656);

	if (t30 != -114) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x677 = 668587U;
	int64_t x678 = INT64_MIN;
	static uint16_t x679 = 1086U;
	int16_t x680 = -1;

	t31 = ((x677<<(x678&x679))|x680);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x681 = 6747U;
	volatile int8_t x682 = 17;
	int16_t x683 = INT16_MIN;
	uint64_t x684 = UINT64_MAX;
	uint64_t t32 = UINT64_MAX;

	t32 = ((x681<<(x682&x683))|x684);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x703 = 3442U;
	volatile int32_t t33 = INT32_MAX;

	t33 = ((x701<<(x702&x703))|x704);

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x721 = 10U;
	static volatile uint8_t x722 = 113U;
	volatile int8_t x723 = INT8_MIN;
	uint16_t x724 = 730U;
	volatile uint32_t t34 = 1062641060U;

	t34 = ((x721<<(x722&x723))|x724);

	if (t34 != 730U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x777 = INT8_MAX;
	int32_t x778 = 3;
	int64_t x779 = -1LL;
	int64_t x780 = INT64_MIN;

	t35 = ((x777<<(x778&x779))|x780);

	if (t35 != -9223372036854774792LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x785 = 14347U;
	static uint16_t x786 = 29101U;
	static volatile int16_t x788 = INT16_MIN;
	volatile uint32_t t36 = 5095144U;

	t36 = ((x785<<(x786&x787))|x788);

	if (t36 != 4294948875U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x809 = UINT32_MAX;
	uint32_t x812 = 2446034U;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = ((x809<<(x810&x811))|x812);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x830 = 1;
	int64_t x832 = -735857394989203LL;
	int64_t t38 = -1377564701422889359LL;

	t38 = ((x829<<(x830&x831))|x832);

	if (t38 != -735857394989185LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x834 = INT8_MAX;
	static int16_t x835 = INT16_MIN;
	int32_t x836 = 23809;
	volatile int32_t t39 = 977;

	t39 = ((x833<<(x834&x835))|x836);

	if (t39 != 23809) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x865 = UINT8_MAX;
	uint8_t x866 = 5U;
	volatile int16_t x867 = INT16_MIN;
	int32_t x868 = -410786264;
	int32_t t40 = -25;

	t40 = ((x865<<(x866&x867))|x868);

	if (t40 != -410786049) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x873 = 4644;
	int16_t x874 = 90;
	int64_t x875 = INT64_MIN;
	volatile int32_t x876 = INT32_MIN;
	static int32_t t41 = -484055;

	t41 = ((x873<<(x874&x875))|x876);

	if (t41 != -2147479004) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x885 = UINT64_MAX;
	static volatile int32_t x886 = 45;
	static volatile uint32_t x887 = UINT32_MAX;
	volatile int16_t x888 = INT16_MIN;
	uint64_t t42 = 504115426879LLU;

	t42 = ((x885<<(x886&x887))|x888);

	if (t42 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x929 = 2;
	volatile int16_t x931 = INT16_MIN;
	uint8_t x932 = UINT8_MAX;
	int32_t t43 = 325649;

	t43 = ((x929<<(x930&x931))|x932);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x949 = 0;
	uint16_t x950 = 0U;
	volatile int8_t x951 = INT8_MAX;
	uint16_t x952 = UINT16_MAX;
	volatile int32_t t44 = -396;

	t44 = ((x949<<(x950&x951))|x952);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x953 = 5U;
	volatile int16_t x954 = INT16_MIN;
	uint8_t x955 = UINT8_MAX;
	int64_t x956 = INT64_MIN;
	int64_t t45 = 2870717362064210482LL;

	t45 = ((x953<<(x954&x955))|x956);

	if (t45 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x961 = UINT8_MAX;
	uint32_t x962 = 30808U;
	uint16_t x963 = 0U;
	int32_t t46 = 1262430;

	t46 = ((x961<<(x962&x963))|x964);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x965 = 52U;
	static volatile int64_t x966 = INT64_MIN;
	static uint32_t x967 = 3U;
	static uint32_t x968 = UINT32_MAX;

	t47 = ((x965<<(x966&x967))|x968);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x974 = 0LLU;
	uint64_t x976 = 104181197219LLU;
	volatile uint64_t t48 = 123031LLU;

	t48 = ((x973<<(x974&x975))|x976);

	if (t48 != 104181197747LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x993 = INT16_MAX;
	static int32_t x994 = INT32_MIN;
	uint8_t x996 = 25U;
	int32_t t49 = -1218;

	t49 = ((x993<<(x994&x995))|x996);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1057 = 0U;
	int8_t x1058 = 1;
	int32_t x1059 = INT32_MIN;
	volatile int16_t x1060 = 363;
	static uint32_t t50 = 750U;

	t50 = ((x1057<<(x1058&x1059))|x1060);

	if (t50 != 363U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1069 = 12836LL;
	int8_t x1070 = 2;
	volatile uint8_t x1071 = UINT8_MAX;
	volatile int16_t x1072 = INT16_MIN;
	static int64_t t51 = -929573006190776LL;

	t51 = ((x1069<<(x1070&x1071))|x1072);

	if (t51 != -14192LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x1074 = INT16_MAX;
	int64_t x1075 = INT64_MIN;
	volatile int16_t x1076 = INT16_MIN;
	volatile int32_t t52 = 81572567;

	t52 = ((x1073<<(x1074&x1075))|x1076);

	if (t52 != -32641) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1089 = 29476U;
	uint16_t x1090 = 106U;
	int8_t x1091 = INT8_MIN;

	t53 = ((x1089<<(x1090&x1091))|x1092);

	if (t53 != 29567) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1093 = 8;
	uint64_t x1094 = UINT64_MAX;
	int8_t x1095 = 0;
	volatile int8_t x1096 = INT8_MAX;

	t54 = ((x1093<<(x1094&x1095))|x1096);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1129 = 8578LLU;
	int16_t x1130 = INT16_MAX;
	uint8_t x1132 = 0U;
	volatile uint64_t t55 = 5679752960351LLU;

	t55 = ((x1129<<(x1130&x1131))|x1132);

	if (t55 != 17567744LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x1161 = UINT64_MAX;
	static int16_t x1162 = INT16_MIN;
	int8_t x1163 = INT8_MAX;
	int8_t x1164 = INT8_MIN;
	uint64_t t56 = UINT64_MAX;

	t56 = ((x1161<<(x1162&x1163))|x1164);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1165 = 5369165310438LLU;
	volatile int32_t x1166 = 510203;
	volatile int32_t x1167 = INT32_MIN;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x1165<<(x1166&x1167))|x1168);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1185 = UINT32_MAX;
	int16_t x1187 = 1;
	uint64_t x1188 = 1336434008604LLU;
	uint64_t t58 = 365180387LLU;

	t58 = ((x1185<<(x1186&x1187))|x1188);

	if (t58 != 1340029796350LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1197 = UINT64_MAX;
	static int8_t x1199 = INT8_MAX;
	uint32_t x1200 = 15985607U;

	t59 = ((x1197<<(x1198&x1199))|x1200);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1213 = UINT8_MAX;
	int8_t x1215 = 1;
	static volatile int64_t x1216 = 12269LL;
	volatile int64_t t60 = -1LL;

	t60 = ((x1213<<(x1214&x1215))|x1216);

	if (t60 != 12287LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1333 = 6;
	int64_t x1334 = INT64_MIN;
	int16_t x1335 = INT16_MAX;
	int16_t x1336 = INT16_MIN;

	t61 = ((x1333<<(x1334&x1335))|x1336);

	if (t61 != -32762) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1393 = 27906312LLU;
	static int64_t x1394 = 48407136851665LL;
	int64_t x1395 = INT64_MIN;
	volatile int32_t x1396 = 26;
	uint64_t t62 = 19884048599374LLU;

	t62 = ((x1393<<(x1394&x1395))|x1396);

	if (t62 != 27906330LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1397 = UINT32_MAX;
	uint64_t x1398 = 371393988501LLU;
	int8_t x1400 = INT8_MAX;
	uint32_t t63 = UINT32_MAX;

	t63 = ((x1397<<(x1398&x1399))|x1400);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1421 = INT8_MAX;
	int32_t x1422 = 17;
	int64_t x1423 = INT64_MIN;
	uint64_t x1424 = 91LLU;
	volatile uint64_t t64 = 102866848914LLU;

	t64 = ((x1421<<(x1422&x1423))|x1424);

	if (t64 != 127LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x1438 = 58U;
	int8_t x1439 = INT8_MIN;
	int16_t x1440 = INT16_MAX;
	int32_t t65 = -9804952;

	t65 = ((x1437<<(x1438&x1439))|x1440);

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x1481 = 16U;
	int32_t x1482 = INT32_MIN;
	uint8_t x1483 = 6U;
	int32_t x1484 = 167526;
	volatile int32_t t66 = 32073950;

	t66 = ((x1481<<(x1482&x1483))|x1484);

	if (t66 != 167542) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1497 = UINT16_MAX;
	uint64_t x1498 = UINT64_MAX;
	int8_t x1499 = 0;
	uint8_t x1500 = 1U;
	volatile int32_t t67 = -90591000;

	t67 = ((x1497<<(x1498&x1499))|x1500);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1513 = 1;
	volatile uint32_t x1514 = 0U;
	uint32_t x1516 = UINT32_MAX;

	t68 = ((x1513<<(x1514&x1515))|x1516);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1521 = 0;
	uint8_t x1522 = 30U;
	int64_t x1523 = 3650243717913065844LL;

	t69 = ((x1521<<(x1522&x1523))|x1524);

	if (t69 != 59) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x1529 = 420U;
	int16_t x1530 = INT16_MIN;
	uint8_t x1531 = 1U;
	uint32_t t70 = 23298495U;

	t70 = ((x1529<<(x1530&x1531))|x1532);

	if (t70 != 2147484068U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1553 = 672549461LLU;
	volatile uint64_t t71 = 110869389763759LLU;

	t71 = ((x1553<<(x1554&x1555))|x1556);

	if (t71 != 18446744072234617429LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x1557 = 0;
	uint8_t x1559 = UINT8_MAX;
	int16_t x1560 = INT16_MIN;
	int32_t t72 = -512;

	t72 = ((x1557<<(x1558&x1559))|x1560);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1561 = 81998LLU;
	static int32_t x1562 = INT32_MIN;
	static volatile uint8_t x1563 = UINT8_MAX;
	uint8_t x1564 = UINT8_MAX;
	uint64_t t73 = 1042021887LLU;

	t73 = ((x1561<<(x1562&x1563))|x1564);

	if (t73 != 82175LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x1573 = 6332170600195060LLU;
	int16_t x1574 = -1;
	static uint8_t x1575 = 2U;
	static volatile int64_t x1576 = -1LL;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x1573<<(x1574&x1575))|x1576);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1645 = UINT64_MAX;
	int8_t x1646 = INT8_MAX;
	volatile uint32_t x1647 = 216968U;
	volatile int16_t x1648 = INT16_MIN;
	volatile uint64_t t75 = 5790LLU;

	t75 = ((x1645<<(x1646&x1647))|x1648);

	if (t75 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x1665 = 30U;
	static int16_t x1666 = -172;
	int32_t x1668 = INT32_MAX;
	volatile int32_t t76 = INT32_MAX;

	t76 = ((x1665<<(x1666&x1667))|x1668);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1673 = 367U;
	int8_t x1674 = 47;
	int64_t x1675 = INT64_MIN;
	static volatile int32_t t77 = 46968768;

	t77 = ((x1673<<(x1674&x1675))|x1676);

	if (t77 != -17) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x1677 = 14U;
	static int64_t x1678 = INT64_MIN;
	int64_t x1680 = INT64_MIN;
	volatile int64_t t78 = 1375549LL;

	t78 = ((x1677<<(x1678&x1679))|x1680);

	if (t78 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x1721 = INT16_MAX;
	int32_t x1722 = 2945;
	static uint16_t x1723 = 16U;

	t79 = ((x1721<<(x1722&x1723))|x1724);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x1737 = 1495781187LLU;
	uint64_t x1738 = 8132942231LLU;
	static int64_t x1739 = INT64_MIN;
	static int32_t x1740 = 1304563;
	uint64_t t80 = 438752517591LLU;

	t80 = ((x1737<<(x1738&x1739))|x1740);

	if (t80 != 1496838131LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1757 = 0U;
	int8_t x1759 = 29;
	volatile int32_t t81 = -16;

	t81 = ((x1757<<(x1758&x1759))|x1760);

	if (t81 != -21) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1765 = 3;
	volatile int16_t x1766 = 0;
	uint8_t x1768 = 0U;
	volatile int32_t t82 = -183;

	t82 = ((x1765<<(x1766&x1767))|x1768);

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1793 = INT8_MAX;
	static volatile int16_t x1794 = 0;
	int32_t x1795 = INT32_MAX;
	int8_t x1796 = 1;
	int32_t t83 = -2101;

	t83 = ((x1793<<(x1794&x1795))|x1796);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1855 = INT64_MIN;
	int32_t x1856 = 258;
	uint64_t t84 = 54714602256LLU;

	t84 = ((x1853<<(x1854&x1855))|x1856);

	if (t84 != 982LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1873 = 2559;
	volatile int32_t x1874 = 4;
	uint8_t x1875 = 11U;
	volatile uint16_t x1876 = 4U;
	volatile int32_t t85 = 31632465;

	t85 = ((x1873<<(x1874&x1875))|x1876);

	if (t85 != 2559) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1885 = 7;
	static volatile uint32_t x1887 = 10866003U;
	int16_t x1888 = -629;
	int32_t t86 = 30880428;

	t86 = ((x1885<<(x1886&x1887))|x1888);

	if (t86 != -625) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1917 = INT64_MAX;
	int8_t x1918 = INT8_MIN;
	volatile int16_t x1919 = 11;
	static int8_t x1920 = INT8_MAX;
	int64_t t87 = INT64_MAX;

	t87 = ((x1917<<(x1918&x1919))|x1920);

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1941 = 3491098856438407757LLU;
	int16_t x1942 = INT16_MIN;
	uint8_t x1943 = UINT8_MAX;
	static int64_t x1944 = 1LL;

	t88 = ((x1941<<(x1942&x1943))|x1944);

	if (t88 != 3491098856438407757LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1977 = INT8_MAX;
	uint64_t x1978 = 188624688LLU;
	uint16_t x1980 = 60U;
	volatile int32_t t89 = -4612;

	t89 = ((x1977<<(x1978&x1979))|x1980);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2021 = INT8_MAX;
	int64_t x2022 = 32728397311125415LL;
	volatile int64_t x2023 = INT64_MIN;
	int64_t x2024 = -385000LL;
	static volatile int64_t t90 = -110017514220959LL;

	t90 = ((x2021<<(x2022&x2023))|x2024);

	if (t90 != -384897LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2033 = 1U;
	uint16_t x2034 = 1U;
	static int16_t x2036 = INT16_MAX;
	volatile uint32_t t91 = 5U;

	t91 = ((x2033<<(x2034&x2035))|x2036);

	if (t91 != 32767U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2045 = 131U;
	int64_t x2046 = INT64_MIN;
	int16_t x2048 = INT16_MIN;
	int32_t t92 = 19;

	t92 = ((x2045<<(x2046&x2047))|x2048);

	if (t92 != -32637) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2053 = 116U;
	static int8_t x2054 = 49;
	int32_t x2055 = INT32_MIN;
	int64_t x2056 = INT64_MIN;

	t93 = ((x2053<<(x2054&x2055))|x2056);

	if (t93 != -9223372036854775692LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2057 = UINT16_MAX;
	volatile int64_t x2059 = 297769837929LL;
	volatile uint16_t x2060 = 12863U;
	int32_t t94 = -740176;

	t94 = ((x2057<<(x2058&x2059))|x2060);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2069 = UINT32_MAX;
	static int32_t x2070 = 496973;
	volatile uint16_t x2071 = 185U;
	uint32_t x2072 = 50U;

	t95 = ((x2069<<(x2070&x2071))|x2072);

	if (t95 != 4294966834U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x2073 = INT32_MAX;
	int64_t x2074 = INT64_MAX;
	static volatile int8_t x2075 = 0;
	static uint16_t x2076 = UINT16_MAX;
	int32_t t96 = INT32_MAX;

	t96 = ((x2073<<(x2074&x2075))|x2076);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x2082 = 1;
	volatile int16_t x2083 = -1;
	uint32_t t97 = 23852U;

	t97 = ((x2081<<(x2082&x2083))|x2084);

	if (t97 != 20790U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x2165 = UINT16_MAX;
	int32_t x2167 = INT32_MIN;
	uint16_t x2168 = 499U;
	int32_t t98 = 1744;

	t98 = ((x2165<<(x2166&x2167))|x2168);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x2179 = 0;
	int8_t x2180 = 0;
	volatile int32_t t99 = 2682214;

	t99 = ((x2177<<(x2178&x2179))|x2180);

	if (t99 != 127) { NG(); } else { ; }
	
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

