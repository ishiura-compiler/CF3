#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x30 = INT16_MIN;
static uint16_t x32 = 5795U;
volatile int32_t t0 = 1;
int8_t x45 = 1;
int8_t x50 = -5;
volatile int32_t t2 = -23021445;
uint32_t x97 = 310631U;
int32_t x99 = -577182;
uint32_t t3 = 8367U;
uint64_t x115 = 29LLU;
volatile uint64_t x124 = UINT64_MAX;
uint32_t x161 = 21U;
uint32_t t6 = 1664828605U;
uint32_t x181 = 1943543U;
static int16_t x182 = INT16_MIN;
int8_t x191 = INT8_MIN;
uint64_t t10 = 1906035846129031LLU;
volatile uint8_t x266 = UINT8_MAX;
uint16_t x339 = UINT16_MAX;
volatile int8_t x350 = 1;
int8_t x351 = INT8_MAX;
int8_t x354 = -1;
static uint16_t x355 = 4166U;
int16_t x366 = INT16_MIN;
uint64_t t19 = 23LLU;
int8_t x386 = -15;
volatile uint64_t t21 = 11994501071416LLU;
static uint64_t x409 = 610002058LLU;
int16_t x423 = INT16_MIN;
volatile uint64_t t23 = 53160681938360374LLU;
uint16_t x449 = 0U;
uint16_t x451 = 406U;
uint16_t x456 = 0U;
int8_t x472 = 4;
uint32_t x497 = 184117U;
int8_t x500 = INT8_MIN;
static int8_t x552 = 22;
volatile int32_t t32 = 439740;
int16_t x564 = -1;
int8_t x566 = 24;
int32_t x622 = INT32_MIN;
int32_t t38 = 60261878;
int8_t x676 = 1;
volatile int64_t x738 = -1LL;
uint32_t t41 = 7U;
uint32_t x742 = UINT32_MAX;
int64_t t42 = -4117LL;
int64_t x751 = 2255690834LL;
int8_t x762 = -2;
static int16_t x764 = INT16_MAX;
int32_t x774 = -2127800;
int64_t x775 = INT64_MIN;
volatile uint32_t t47 = 2U;
static uint16_t x809 = UINT16_MAX;
int64_t x811 = INT64_MIN;
uint8_t x828 = 0U;
volatile int16_t x856 = -1;
volatile uint64_t x862 = 92606243933LLU;
uint32_t x901 = 2020794615U;
static int32_t x951 = -1;
int32_t x984 = -1;
volatile uint64_t x986 = 8566534LLU;
uint32_t x994 = 173569570U;
static int32_t x1003 = INT32_MAX;
int16_t x1004 = -107;
int32_t t60 = -369493;
int16_t x1007 = INT16_MIN;
volatile uint32_t t61 = 54067745U;
static uint32_t x1009 = UINT32_MAX;
static int16_t x1012 = INT16_MIN;
int32_t x1058 = INT32_MIN;
int8_t x1060 = -6;
uint32_t x1062 = 519450U;
uint64_t t65 = 1110851289329897807LLU;
uint32_t t66 = 1U;
int64_t t67 = 1621534575LL;
static volatile uint64_t x1132 = 6053LLU;
static uint64_t x1136 = 456055372586251325LLU;
int64_t x1143 = INT64_MAX;
uint8_t x1144 = 6U;
uint16_t x1148 = UINT16_MAX;
volatile uint16_t x1149 = 385U;
volatile uint8_t x1152 = 24U;
volatile int8_t x1165 = INT8_MAX;
static int8_t x1185 = 55;
uint8_t x1186 = UINT8_MAX;
volatile uint16_t x1282 = UINT16_MAX;
uint32_t x1287 = 197213591U;
uint8_t x1305 = 27U;
int16_t x1307 = INT16_MAX;
uint8_t x1340 = 1U;
int64_t x1366 = -1LL;
volatile int64_t t85 = -147728LL;
uint32_t t86 = 8624374U;
uint8_t x1410 = UINT8_MAX;
uint32_t x1411 = UINT32_MAX;
static int8_t x1418 = -23;
uint16_t x1455 = 11703U;
int64_t x1482 = -1LL;
int32_t x1510 = 61;
static volatile int8_t x1514 = -1;
int32_t x1574 = -1;
int8_t x1575 = INT8_MIN;
volatile int16_t x1610 = 361;
int8_t x1612 = -1;


void f0(void) {
	int16_t x29 = 13360;
	static int32_t x31 = INT32_MAX;

	t0 = ((x29<<(x30/x31))*x32);

	if (t0 != 77421200) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x46 = UINT64_MAX;
	volatile int8_t x47 = -12;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t1 = 28194U;

	t1 = ((x45<<(x46/x47))*x48);

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x49 = INT32_MAX;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -1;

	t2 = ((x49<<(x50/x51))*x52);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x98 = INT8_MIN;
	uint16_t x100 = 881U;

	t3 = ((x97<<(x98/x99))*x100);

	if (t3 != 273665911U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x113 = 17767U;
	static int16_t x114 = 2;
	static volatile uint8_t x116 = 27U;
	int32_t t4 = -487619;

	t4 = ((x113<<(x114/x115))*x116);

	if (t4 != 479709) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x121 = 438316116636LLU;
	volatile int8_t x122 = INT8_MIN;
	static int64_t x123 = INT64_MAX;
	volatile uint64_t t5 = 182547637856490LLU;

	t5 = ((x121<<(x122/x123))*x124);

	if (t5 != 18446743635393434980LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x162 = UINT16_MAX;
	int64_t x163 = INT64_MIN;
	int16_t x164 = 14;

	t6 = ((x161<<(x162/x163))*x164);

	if (t6 != 294U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x183 = 204738459209720113LL;
	uint32_t x184 = 79299U;
	uint32_t t7 = 891U;

	t7 = ((x181<<(x182/x183))*x184);

	if (t7 != 3797160997U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x189 = 3431U;
	uint8_t x190 = 23U;
	uint16_t x192 = 7628U;
	volatile int32_t t8 = 13;

	t8 = ((x189<<(x190/x191))*x192);

	if (t8 != 26171668) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x205 = 2;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = 352750444746684LL;
	int8_t x208 = INT8_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x205<<(x206/x207))*x208);

	if (t9 != -256) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x225 = 3U;
	static uint32_t x226 = UINT32_MAX;
	volatile int16_t x227 = -30;
	static uint64_t x228 = 12276062834801LLU;

	t10 = ((x225<<(x226/x227))*x228);

	if (t10 != 73656377008806LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x241 = 1857U;
	uint8_t x242 = 5U;
	uint16_t x243 = 15U;
	volatile int32_t x244 = -1;
	int32_t t11 = -173497;

	t11 = ((x241<<(x242/x243))*x244);

	if (t11 != -1857) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x265 = 1U;
	volatile int64_t x267 = 642777000061032LL;
	static int16_t x268 = -1;
	int32_t t12 = 4080915;

	t12 = ((x265<<(x266/x267))*x268);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x269 = 884563407045656512LLU;
	int8_t x270 = 14;
	static uint16_t x271 = 2740U;
	int32_t x272 = -175520;
	volatile uint64_t t13 = 18540032LLU;

	t13 = ((x269<<(x270/x271))*x272);

	if (t13 != 7675663759664965632LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x313 = 4988U;
	volatile int8_t x314 = -1;
	int8_t x315 = -1;
	int8_t x316 = INT8_MAX;
	int32_t t14 = 11340173;

	t14 = ((x313<<(x314/x315))*x316);

	if (t14 != 1266952) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x329 = INT8_MAX;
	int16_t x330 = 423;
	volatile int64_t x331 = INT64_MAX;
	static int8_t x332 = -2;
	static volatile int32_t t15 = -4663;

	t15 = ((x329<<(x330/x331))*x332);

	if (t15 != -254) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x337 = UINT32_MAX;
	uint16_t x338 = 110U;
	int16_t x340 = INT16_MIN;
	static volatile uint32_t t16 = 0U;

	t16 = ((x337<<(x338/x339))*x340);

	if (t16 != 32768U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x349 = INT64_MAX;
	volatile int16_t x352 = -1;
	int64_t t17 = -22359984259LL;

	t17 = ((x349<<(x350/x351))*x352);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x353 = UINT32_MAX;
	uint64_t x356 = UINT64_MAX;
	static uint64_t t18 = 136862LLU;

	t18 = ((x353<<(x354/x355))*x356);

	if (t18 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x365 = 19LLU;
	int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;

	t19 = ((x365<<(x366/x367))*x368);

	if (t19 != 9223372036854775789LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x385 = 2U;
	int32_t x387 = INT32_MIN;
	uint8_t x388 = 1U;
	int32_t t20 = 0;

	t20 = ((x385<<(x386/x387))*x388);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x401 = UINT64_MAX;
	static volatile int8_t x402 = INT8_MAX;
	int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MIN;

	t21 = ((x401<<(x402/x403))*x404);

	if (t21 != 2147483648LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x410 = -1;
	int16_t x411 = -224;
	int32_t x412 = -161870641;
	uint64_t t22 = 306881230638622826LLU;

	t22 = ((x409<<(x410/x411))*x412);

	if (t22 != 18348002649569772438LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x421 = INT64_MAX;
	volatile int8_t x422 = INT8_MIN;
	static volatile uint64_t x424 = 148468329318839172LLU;

	t23 = ((x421<<(x422/x423))*x424);

	if (t23 != 18298275744390712444LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x450 = -1;
	uint32_t x452 = 1U;
	volatile uint32_t t24 = 0U;

	t24 = ((x449<<(x450/x451))*x452);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x453 = 1U;
	int16_t x454 = 2;
	uint32_t x455 = 30U;
	volatile int32_t t25 = 229734647;

	t25 = ((x453<<(x454/x455))*x456);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x469 = 493878LLU;
	uint64_t x470 = 155305LLU;
	volatile uint64_t x471 = 60092346537630374LLU;
	static uint64_t t26 = 81890400999562637LLU;

	t26 = ((x469<<(x470/x471))*x472);

	if (t26 != 1975512LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x485 = INT8_MAX;
	uint8_t x486 = 0U;
	static volatile uint16_t x487 = UINT16_MAX;
	int8_t x488 = INT8_MAX;
	static volatile int32_t t27 = 987890796;

	t27 = ((x485<<(x486/x487))*x488);

	if (t27 != 16129) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x498 = INT64_MIN;
	uint64_t x499 = UINT64_MAX;
	uint32_t t28 = 10942U;

	t28 = ((x497<<(x498/x499))*x500);

	if (t28 != 4271400320U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x513 = 4U;
	uint64_t x514 = 0LLU;
	volatile int16_t x515 = INT16_MIN;
	static uint8_t x516 = UINT8_MAX;
	int32_t t29 = 66827363;

	t29 = ((x513<<(x514/x515))*x516);

	if (t29 != 1020) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x517 = 1U;
	int8_t x518 = 1;
	int32_t x519 = INT32_MIN;
	static uint16_t x520 = 2U;
	volatile int32_t t30 = 15;

	t30 = ((x517<<(x518/x519))*x520);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x525 = 2975U;
	int16_t x526 = -1;
	static int8_t x527 = INT8_MAX;
	uint8_t x528 = 0U;
	int32_t t31 = 1667;

	t31 = ((x525<<(x526/x527))*x528);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x549 = 1U;
	volatile int16_t x550 = 42;
	uint32_t x551 = 100U;

	t32 = ((x549<<(x550/x551))*x552);

	if (t32 != 22) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x561 = 15612802307LL;
	static int32_t x562 = -1;
	int32_t x563 = INT32_MIN;
	int64_t t33 = 51091519LL;

	t33 = ((x561<<(x562/x563))*x564);

	if (t33 != -15612802307LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x565 = 367765668LL;
	static volatile uint32_t x567 = UINT32_MAX;
	int8_t x568 = 5;
	volatile int64_t t34 = -26LL;

	t34 = ((x565<<(x566/x567))*x568);

	if (t34 != 1838828340LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x581 = 16895213U;
	uint32_t x582 = 1997138190U;
	int32_t x583 = INT32_MIN;
	int16_t x584 = INT16_MAX;
	uint32_t t35 = 14004535U;

	t35 = ((x581<<(x582/x583))*x584);

	if (t35 != 3849630483U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x621 = 20U;
	static int64_t x623 = INT64_MAX;
	static volatile int16_t x624 = INT16_MIN;
	volatile int32_t t36 = 166;

	t36 = ((x621<<(x622/x623))*x624);

	if (t36 != -655360) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x637 = 3663LL;
	int8_t x638 = 13;
	static uint32_t x639 = 477826U;
	int8_t x640 = -7;
	int64_t t37 = 2876855051LL;

	t37 = ((x637<<(x638/x639))*x640);

	if (t37 != -25641LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x665 = 7U;
	int16_t x666 = 56;
	static volatile uint16_t x667 = UINT16_MAX;
	volatile int32_t x668 = -271492536;

	t38 = ((x665<<(x666/x667))*x668);

	if (t38 != -1900447752) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x673 = 49U;
	int64_t x674 = INT64_MAX;
	static int64_t x675 = INT64_MIN;
	int32_t t39 = -308770;

	t39 = ((x673<<(x674/x675))*x676);

	if (t39 != 49) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x689 = 1U;
	volatile int8_t x690 = -1;
	static volatile int8_t x691 = INT8_MIN;
	static int32_t x692 = INT32_MIN;
	static int32_t t40 = INT32_MIN;

	t40 = ((x689<<(x690/x691))*x692);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x737 = UINT32_MAX;
	volatile uint8_t x739 = 39U;
	static int16_t x740 = 7;

	t41 = ((x737<<(x738/x739))*x740);

	if (t41 != 4294967289U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x741 = INT32_MAX;
	int64_t x743 = INT64_MIN;
	static int64_t x744 = -1LL;

	t42 = ((x741<<(x742/x743))*x744);

	if (t42 != -2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x749 = 0U;
	volatile uint64_t x750 = 1LLU;
	static volatile int8_t x752 = 1;
	static int32_t t43 = 256;

	t43 = ((x749<<(x750/x751))*x752);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x761 = 1159842799100726LLU;
	volatile int16_t x763 = -1329;
	uint64_t t44 = 4300144151076LLU;

	t44 = ((x761<<(x762/x763))*x764);

	if (t44 != 1111080850714385610LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x773 = UINT64_MAX;
	uint32_t x776 = UINT32_MAX;
	volatile uint64_t t45 = 9LLU;

	t45 = ((x773<<(x774/x775))*x776);

	if (t45 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x793 = 38U;
	uint32_t x794 = 1011187U;
	int32_t x795 = INT32_MIN;
	volatile uint8_t x796 = 31U;
	volatile int32_t t46 = 19;

	t46 = ((x793<<(x794/x795))*x796);

	if (t46 != 1178) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x797 = 11U;
	static int8_t x798 = INT8_MIN;
	uint32_t x799 = UINT32_MAX;
	volatile uint32_t x800 = 1535383U;

	t47 = ((x797<<(x798/x799))*x800);

	if (t47 != 16889213U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x810 = -5;
	uint8_t x812 = UINT8_MAX;
	static volatile int32_t t48 = 500005441;

	t48 = ((x809<<(x810/x811))*x812);

	if (t48 != 16711425) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x825 = INT64_MAX;
	uint8_t x826 = 0U;
	volatile int64_t x827 = -398LL;
	static int64_t t49 = -706LL;

	t49 = ((x825<<(x826/x827))*x828);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x853 = 194;
	volatile uint32_t x854 = 1785U;
	int8_t x855 = INT8_MIN;
	volatile int32_t t50 = -4433;

	t50 = ((x853<<(x854/x855))*x856);

	if (t50 != -194) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x861 = 14U;
	uint32_t x863 = UINT32_MAX;
	uint32_t x864 = 3829U;
	static uint32_t t51 = 5U;

	t51 = ((x861<<(x862/x863))*x864);

	if (t51 != 750780416U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x873 = 40U;
	int8_t x874 = -11;
	uint32_t x875 = UINT32_MAX;
	int16_t x876 = -1;
	int32_t t52 = 325550403;

	t52 = ((x873<<(x874/x875))*x876);

	if (t52 != -40) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x902 = 295210434U;
	static int32_t x903 = -1;
	uint16_t x904 = 4U;
	volatile uint32_t t53 = 19793797U;

	t53 = ((x901<<(x902/x903))*x904);

	if (t53 != 3788211164U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x925 = 61;
	int8_t x926 = INT8_MIN;
	int64_t x927 = INT64_MIN;
	static volatile uint16_t x928 = UINT16_MAX;
	int32_t t54 = 41;

	t54 = ((x925<<(x926/x927))*x928);

	if (t54 != 3997635) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x941 = INT16_MAX;
	int16_t x942 = INT16_MIN;
	volatile int32_t x943 = INT32_MAX;
	uint64_t x944 = UINT64_MAX;
	uint64_t t55 = 1444184513LLU;

	t55 = ((x941<<(x942/x943))*x944);

	if (t55 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x949 = 23658U;
	volatile uint64_t x950 = UINT64_MAX;
	volatile uint64_t x952 = UINT64_MAX;
	static uint64_t t56 = 1363607987LLU;

	t56 = ((x949<<(x950/x951))*x952);

	if (t56 != 18446744073709504300LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x981 = 123;
	volatile int8_t x982 = 11;
	int32_t x983 = -53391;
	static volatile int32_t t57 = 149661;

	t57 = ((x981<<(x982/x983))*x984);

	if (t57 != -123) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x985 = 13428U;
	int8_t x987 = INT8_MIN;
	int64_t x988 = 1621929851LL;
	int64_t t58 = 5179712077LL;

	t58 = ((x985<<(x986/x987))*x988);

	if (t58 != 21779274039228LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x993 = 3;
	int64_t x995 = INT64_MIN;
	static uint8_t x996 = 2U;
	volatile int32_t t59 = 2881;

	t59 = ((x993<<(x994/x995))*x996);

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1001 = INT8_MAX;
	static volatile uint16_t x1002 = 5160U;

	t60 = ((x1001<<(x1002/x1003))*x1004);

	if (t60 != -13589) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x1005 = 49;
	volatile int8_t x1006 = INT8_MIN;
	static uint32_t x1008 = 63642580U;

	t61 = ((x1005<<(x1006/x1007))*x1008);

	if (t61 != 3118486420U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1010 = INT8_MIN;
	int8_t x1011 = INT8_MIN;
	uint32_t t62 = 5U;

	t62 = ((x1009<<(x1010/x1011))*x1012);

	if (t62 != 65536U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1057 = 5U;
	int64_t x1059 = INT64_MAX;
	static volatile int32_t t63 = -287512;

	t63 = ((x1057<<(x1058/x1059))*x1060);

	if (t63 != -30) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x1061 = 36323940U;
	volatile int8_t x1063 = INT8_MIN;
	int16_t x1064 = -1;
	static volatile uint32_t t64 = 1979639U;

	t64 = ((x1061<<(x1062/x1063))*x1064);

	if (t64 != 4258643356U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1077 = INT8_MAX;
	uint16_t x1078 = 14U;
	volatile int64_t x1079 = INT64_MIN;
	uint64_t x1080 = UINT64_MAX;

	t65 = ((x1077<<(x1078/x1079))*x1080);

	if (t65 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x1081 = 1;
	int16_t x1082 = 19;
	int32_t x1083 = INT32_MIN;
	uint32_t x1084 = 13563360U;

	t66 = ((x1081<<(x1082/x1083))*x1084);

	if (t66 != 13563360U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x1085 = 1U;
	uint32_t x1086 = 286U;
	uint16_t x1087 = 2997U;
	int64_t x1088 = 1990LL;

	t67 = ((x1085<<(x1086/x1087))*x1088);

	if (t67 != 1990LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1105 = 11;
	uint8_t x1106 = 3U;
	int8_t x1107 = 31;
	volatile int64_t x1108 = -1LL;
	volatile int64_t t68 = -114259073518321LL;

	t68 = ((x1105<<(x1106/x1107))*x1108);

	if (t68 != -11LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1109 = 74893015U;
	int16_t x1110 = -1;
	volatile int64_t x1111 = 4050602020007618LL;
	uint8_t x1112 = UINT8_MAX;
	static uint32_t t69 = 1U;

	t69 = ((x1109<<(x1110/x1111))*x1112);

	if (t69 != 1917849641U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1129 = 11U;
	volatile uint8_t x1130 = 3U;
	static volatile int32_t x1131 = 17190221;
	uint64_t t70 = 7LLU;

	t70 = ((x1129<<(x1130/x1131))*x1132);

	if (t70 != 66583LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1133 = 62U;
	volatile int16_t x1134 = -1;
	volatile int32_t x1135 = -1;
	uint64_t t71 = 4594950554502621LLU;

	t71 = ((x1133<<(x1134/x1135))*x1136);

	if (t71 != 1210633979566509452LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x1141 = 84247U;
	int8_t x1142 = INT8_MAX;
	static volatile uint32_t t72 = 44U;

	t72 = ((x1141<<(x1142/x1143))*x1144);

	if (t72 != 505482U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x1145 = UINT32_MAX;
	int8_t x1146 = INT8_MIN;
	static int16_t x1147 = INT16_MIN;
	volatile uint32_t t73 = 1551723U;

	t73 = ((x1145<<(x1146/x1147))*x1148);

	if (t73 != 4294901761U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1150 = -1LL;
	volatile uint8_t x1151 = 127U;
	volatile int32_t t74 = 9878843;

	t74 = ((x1149<<(x1150/x1151))*x1152);

	if (t74 != 9240) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1166 = 47;
	int8_t x1167 = INT8_MIN;
	uint64_t x1168 = UINT64_MAX;
	uint64_t t75 = 4626LLU;

	t75 = ((x1165<<(x1166/x1167))*x1168);

	if (t75 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x1187 = 1005712349LL;
	int8_t x1188 = INT8_MIN;
	volatile int32_t t76 = -6216821;

	t76 = ((x1185<<(x1186/x1187))*x1188);

	if (t76 != -7040) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x1281 = 40219LL;
	int64_t x1283 = INT64_MIN;
	uint32_t x1284 = 4U;
	int64_t t77 = 14193LL;

	t77 = ((x1281<<(x1282/x1283))*x1284);

	if (t77 != 160876LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x1285 = 10339399589624LLU;
	int32_t x1286 = INT32_MIN;
	uint32_t x1288 = 3776U;
	volatile uint64_t t78 = 111410144LLU;

	t78 = ((x1285<<(x1286/x1287))*x1288);

	if (t78 != 3085082451411206144LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1306 = INT8_MIN;
	int8_t x1308 = 20;
	volatile int32_t t79 = -57910;

	t79 = ((x1305<<(x1306/x1307))*x1308);

	if (t79 != 540) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1325 = UINT16_MAX;
	static uint16_t x1326 = 1U;
	static int64_t x1327 = INT64_MAX;
	static int8_t x1328 = -12;
	int32_t t80 = -5212;

	t80 = ((x1325<<(x1326/x1327))*x1328);

	if (t80 != -786420) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1329 = 83U;
	int32_t x1330 = -1;
	static int16_t x1331 = INT16_MAX;
	volatile uint64_t x1332 = 249636096LLU;
	uint64_t t81 = 3LLU;

	t81 = ((x1329<<(x1330/x1331))*x1332);

	if (t81 != 20719795968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x1337 = 22U;
	int16_t x1338 = INT16_MAX;
	int64_t x1339 = INT64_MAX;
	int32_t t82 = 25;

	t82 = ((x1337<<(x1338/x1339))*x1340);

	if (t82 != 22) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x1353 = 167579570063910LLU;
	volatile int8_t x1354 = INT8_MIN;
	int16_t x1355 = INT16_MIN;
	int32_t x1356 = INT32_MIN;
	static uint64_t t83 = 247LLU;

	t83 = ((x1353<<(x1354/x1355))*x1356);

	if (t83 != 3143682882602532864LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1357 = INT64_MAX;
	volatile int64_t x1358 = 558370898611485LL;
	volatile int64_t x1359 = INT64_MAX;
	uint64_t x1360 = 56639976405LLU;
	volatile uint64_t t84 = 0LLU;

	t84 = ((x1357<<(x1358/x1359))*x1360);

	if (t84 != 9223371980214799403LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1365 = 2U;
	int16_t x1367 = INT16_MIN;
	static int64_t x1368 = -1LL;

	t85 = ((x1365<<(x1366/x1367))*x1368);

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x1377 = 343U;
	int16_t x1378 = INT16_MAX;
	uint64_t x1379 = UINT64_MAX;
	volatile int8_t x1380 = -43;

	t86 = ((x1377<<(x1378/x1379))*x1380);

	if (t86 != 4294952547U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1409 = UINT8_MAX;
	uint16_t x1412 = 16350U;
	static volatile int32_t t87 = 206423988;

	t87 = ((x1409<<(x1410/x1411))*x1412);

	if (t87 != 4169250) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x1413 = 54U;
	int32_t x1414 = -1;
	int32_t x1415 = INT32_MAX;
	static int8_t x1416 = INT8_MIN;
	int32_t t88 = -3595760;

	t88 = ((x1413<<(x1414/x1415))*x1416);

	if (t88 != -6912) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1417 = 24033LL;
	int16_t x1419 = -118;
	static int16_t x1420 = -1;
	int64_t t89 = 165210LL;

	t89 = ((x1417<<(x1418/x1419))*x1420);

	if (t89 != -24033LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x1453 = 16U;
	volatile int8_t x1454 = 24;
	uint16_t x1456 = 6115U;
	uint32_t t90 = 695831U;

	t90 = ((x1453<<(x1454/x1455))*x1456);

	if (t90 != 97840U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x1461 = 6982;
	int64_t x1462 = -1LL;
	uint32_t x1463 = 19U;
	uint8_t x1464 = 0U;
	int32_t t91 = 3;

	t91 = ((x1461<<(x1462/x1463))*x1464);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x1481 = UINT8_MAX;
	int64_t x1483 = INT64_MIN;
	uint8_t x1484 = UINT8_MAX;
	int32_t t92 = -529;

	t92 = ((x1481<<(x1482/x1483))*x1484);

	if (t92 != 65025) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x1489 = 1284613983U;
	int64_t x1490 = -1LL;
	static int8_t x1491 = INT8_MIN;
	uint32_t x1492 = 12195U;
	volatile uint32_t t93 = 29U;

	t93 = ((x1489<<(x1490/x1491))*x1492);

	if (t93 != 2121794173U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1509 = 9U;
	uint64_t x1511 = 335738992LLU;
	int16_t x1512 = INT16_MIN;
	int32_t t94 = -1094;

	t94 = ((x1509<<(x1510/x1511))*x1512);

	if (t94 != -294912) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1513 = 26440U;
	static int64_t x1515 = INT64_MIN;
	int8_t x1516 = -1;
	volatile int32_t t95 = -965;

	t95 = ((x1513<<(x1514/x1515))*x1516);

	if (t95 != -26440) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1549 = UINT8_MAX;
	static uint16_t x1550 = 0U;
	int64_t x1551 = INT64_MIN;
	static volatile uint64_t x1552 = UINT64_MAX;
	uint64_t t96 = 390993535LLU;

	t96 = ((x1549<<(x1550/x1551))*x1552);

	if (t96 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x1573 = INT8_MAX;
	int32_t x1576 = -1;
	static volatile int32_t t97 = -1037379501;

	t97 = ((x1573<<(x1574/x1575))*x1576);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1593 = INT64_MAX;
	uint8_t x1594 = UINT8_MAX;
	static volatile uint16_t x1595 = 13737U;
	int16_t x1596 = -1;
	volatile int64_t t98 = -119887LL;

	t98 = ((x1593<<(x1594/x1595))*x1596);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x1609 = INT32_MAX;
	int64_t x1611 = INT64_MIN;
	int32_t t99 = 2649;

	t99 = ((x1609<<(x1610/x1611))*x1612);

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

