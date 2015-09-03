#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x34 = INT16_MIN;
static uint64_t t1 = 11999346170LLU;
volatile int16_t x103 = INT16_MIN;
uint8_t x104 = 6U;
int64_t x125 = INT64_MAX;
static uint8_t x135 = 39U;
volatile int8_t x192 = 10;
int8_t x204 = 7;
int32_t x209 = INT32_MAX;
int64_t x246 = 3LL;
uint16_t x266 = UINT16_MAX;
uint64_t x276 = 14LLU;
uint16_t x370 = 7439U;
volatile int32_t t17 = 0;
int16_t x489 = INT16_MAX;
static int32_t x492 = 13;
static uint32_t t19 = 23892U;
uint8_t x516 = 6U;
volatile uint8_t x529 = 0U;
static uint8_t x532 = 8U;
static int64_t x577 = -111180625984488LL;
int16_t x630 = -18;
uint32_t x633 = 489U;
uint8_t x657 = 31U;
volatile int64_t t26 = -20104987977207289LL;
int32_t x683 = -1;
uint32_t x684 = 13U;
int16_t x715 = -1;
volatile int64_t x734 = 26641772695181LL;
int64_t x735 = 89LL;
int8_t x746 = INT8_MIN;
uint64_t x751 = 906LLU;
static int32_t t32 = 448573;
int8_t x777 = 0;
volatile uint8_t x780 = 30U;
volatile uint64_t t34 = 369LLU;
static int64_t x822 = 675238314280LL;
uint16_t x823 = 31U;
uint8_t x824 = 46U;
volatile int64_t t35 = -13688LL;
int16_t x862 = INT16_MAX;
static uint8_t x864 = 3U;
int16_t x945 = INT16_MIN;
uint8_t x953 = UINT8_MAX;
volatile int32_t t39 = 28777872;
static uint32_t x975 = 4U;
static int64_t t40 = -181960807910521LL;
int16_t x998 = INT16_MIN;
volatile uint64_t t41 = 4626295844166291142LLU;
volatile int64_t t42 = -27779117238132295LL;
int32_t x1022 = INT32_MAX;
uint64_t x1023 = UINT64_MAX;
uint64_t x1024 = 45LLU;
static uint8_t x1078 = 1U;
volatile int64_t t46 = -58936710380LL;
int32_t x1209 = -9629866;
int8_t x1271 = 5;
int32_t x1295 = INT32_MIN;
int8_t x1298 = INT8_MAX;
int32_t t53 = 2544179;
int64_t x1346 = INT64_MAX;
static int32_t x1353 = INT32_MIN;
int64_t x1355 = 10LL;
volatile int64_t t56 = 473286919LL;
uint8_t x1412 = 5U;
static volatile int64_t t58 = 80032374392702LL;
int32_t x1435 = -1;
int64_t x1439 = 2LL;
int32_t x1493 = 189;
uint8_t x1494 = 5U;
uint8_t x1545 = 61U;
uint32_t x1548 = 5U;
uint16_t x1550 = 2U;
uint8_t x1552 = 14U;
uint64_t x1568 = 32LLU;
int16_t x1593 = INT16_MIN;
static volatile int32_t x1613 = INT32_MIN;
uint64_t x1671 = 10178771616006820LLU;
uint32_t x1739 = 3U;
static volatile int64_t x1749 = INT64_MIN;
static uint16_t x1750 = UINT16_MAX;
uint64_t x1751 = 3562115017267655LLU;
uint16_t x1769 = UINT16_MAX;
int16_t x1770 = -15915;
volatile uint32_t t74 = 474783U;
uint64_t x1777 = UINT64_MAX;
volatile uint64_t t75 = 10LLU;
volatile uint16_t x1921 = 200U;
uint8_t x2043 = 20U;
static volatile int16_t x2156 = 9;
int32_t x2263 = INT32_MIN;
uint8_t x2280 = 6U;
uint64_t t88 = 10LLU;
int16_t x2468 = 2;
static volatile int64_t t90 = 116888LL;
uint16_t x2534 = 0U;
int64_t x2605 = -1LL;
uint8_t x2606 = 62U;
volatile uint64_t x2607 = UINT64_MAX;
static uint16_t x2608 = 15U;
uint16_t x2721 = UINT16_MAX;
int64_t x2723 = 494732978092615LL;
int8_t x2761 = INT8_MAX;
static volatile int32_t t98 = 168;
static volatile int32_t x2768 = 15;
volatile int64_t t99 = -18741915165LL;


void f0(void) {
	int32_t x33 = -3994464;
	volatile int8_t x35 = INT8_MIN;
	uint16_t x36 = 1U;
	volatile int32_t t0 = -1609;

	t0 = (((x33&x34)%x35)>>x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x89 = 1390425423LLU;
	uint16_t x90 = 8396U;
	static uint8_t x91 = 48U;
	uint8_t x92 = 26U;

	t1 = (((x89&x90)%x91)>>x92);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x101 = 79087198355LLU;
	static uint32_t x102 = UINT32_MAX;
	uint64_t t2 = 524355174650LLU;

	t2 = (((x101&x102)%x103)>>x104);

	if (t2 != 27777922LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = -1;
	static int16_t x128 = 0;
	volatile uint64_t t3 = 10079079086344LLU;

	t3 = (((x125&x126)%x127)>>x128);

	if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x133 = 210807LL;
	static uint8_t x134 = 15U;
	volatile int32_t x136 = 0;
	volatile int64_t t4 = 802238687680572556LL;

	t4 = (((x133&x134)%x135)>>x136);

	if (t4 != 7LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x189 = INT32_MAX;
	int8_t x190 = 0;
	static uint16_t x191 = 168U;
	volatile int32_t t5 = -4913;

	t5 = (((x189&x190)%x191)>>x192);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x193 = INT8_MIN;
	volatile int32_t x194 = INT32_MAX;
	uint32_t x195 = 986531U;
	uint8_t x196 = 0U;
	uint32_t t6 = 2U;

	t6 = (((x193&x194)%x195)>>x196);

	if (t6 != 792064U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x201 = INT16_MAX;
	uint64_t x202 = 147309805525220043LLU;
	volatile int16_t x203 = INT16_MIN;
	static volatile uint64_t t7 = 910266426179LLU;

	t7 = (((x201&x202)%x203)>>x204);

	if (t7 != 117LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x210 = UINT16_MAX;
	static uint16_t x211 = 30972U;
	uint8_t x212 = 5U;
	static int32_t t8 = -1024430;

	t8 = (((x209&x210)%x211)>>x212);

	if (t8 != 112) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x245 = -1;
	int64_t x247 = INT64_MIN;
	uint16_t x248 = 7U;
	int64_t t9 = -43115492972604413LL;

	t9 = (((x245&x246)%x247)>>x248);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x265 = -5;
	int32_t x267 = INT32_MIN;
	volatile uint16_t x268 = 18U;
	volatile int32_t t10 = 1069;

	t10 = (((x265&x266)%x267)>>x268);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x273 = 393716047LL;
	int8_t x274 = INT8_MAX;
	int64_t x275 = INT64_MIN;
	static int64_t t11 = -704LL;

	t11 = (((x273&x274)%x275)>>x276);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x305 = INT16_MIN;
	static int8_t x306 = INT8_MAX;
	static int64_t x307 = -1LL;
	uint8_t x308 = 1U;
	volatile int64_t t12 = -95670LL;

	t12 = (((x305&x306)%x307)>>x308);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x317 = -1;
	static int16_t x318 = INT16_MAX;
	static int16_t x319 = -64;
	int8_t x320 = 1;
	int32_t t13 = -32983126;

	t13 = (((x317&x318)%x319)>>x320);

	if (t13 != 31) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x329 = 482;
	int32_t x330 = INT32_MAX;
	volatile uint32_t x331 = 47U;
	uint8_t x332 = 2U;
	static uint32_t t14 = 48920U;

	t14 = (((x329&x330)%x331)>>x332);

	if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x361 = INT32_MAX;
	int16_t x362 = -1;
	uint16_t x363 = 29U;
	static uint16_t x364 = 2U;
	volatile int32_t t15 = 3088;

	t15 = (((x361&x362)%x363)>>x364);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x369 = -1;
	int16_t x371 = INT16_MAX;
	volatile uint8_t x372 = 23U;
	int32_t t16 = 173810;

	t16 = (((x369&x370)%x371)>>x372);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x441 = INT32_MAX;
	int8_t x442 = 1;
	uint16_t x443 = 39U;
	uint8_t x444 = 8U;

	t17 = (((x441&x442)%x443)>>x444);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x445 = INT32_MIN;
	uint16_t x446 = 29U;
	volatile int8_t x447 = INT8_MIN;
	uint16_t x448 = 1U;
	volatile int32_t t18 = -9577135;

	t18 = (((x445&x446)%x447)>>x448);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x490 = INT16_MAX;
	uint32_t x491 = 1220776873U;

	t19 = (((x489&x490)%x491)>>x492);

	if (t19 != 3U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x513 = INT8_MAX;
	uint8_t x514 = 7U;
	uint8_t x515 = 31U;
	volatile int32_t t20 = 1260;

	t20 = (((x513&x514)%x515)>>x516);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x517 = -18;
	int16_t x518 = 311;
	int32_t x519 = INT32_MIN;
	int16_t x520 = 0;
	int32_t t21 = 4079729;

	t21 = (((x517&x518)%x519)>>x520);

	if (t21 != 294) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x530 = 1;
	static volatile int32_t x531 = INT32_MIN;
	volatile int32_t t22 = -1718;

	t22 = (((x529&x530)%x531)>>x532);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x578 = INT16_MIN;
	static int8_t x579 = INT8_MIN;
	int8_t x580 = 0;
	int64_t t23 = -1025128711591LL;

	t23 = (((x577&x578)%x579)>>x580);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x629 = 174812;
	uint8_t x631 = 4U;
	int8_t x632 = 0;
	volatile int32_t t24 = -1;

	t24 = (((x629&x630)%x631)>>x632);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x634 = INT16_MIN;
	volatile uint64_t x635 = 6421001623104599652LLU;
	int8_t x636 = 1;
	uint64_t t25 = 3663109873552LLU;

	t25 = (((x633&x634)%x635)>>x636);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x658 = 1103785369311323380LL;
	uint16_t x659 = 5873U;
	int8_t x660 = 0;

	t26 = (((x657&x658)%x659)>>x660);

	if (t26 != 20LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x681 = INT16_MIN;
	volatile int16_t x682 = 22;
	int32_t t27 = 5072;

	t27 = (((x681&x682)%x683)>>x684);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x713 = 62U;
	int8_t x714 = 0;
	int8_t x716 = 0;
	uint32_t t28 = 0U;

	t28 = (((x713&x714)%x715)>>x716);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x733 = 4U;
	int8_t x736 = 1;
	volatile int64_t t29 = 35926655879LL;

	t29 = (((x733&x734)%x735)>>x736);

	if (t29 != 2LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x745 = INT16_MIN;
	int8_t x747 = -1;
	uint16_t x748 = 3U;
	volatile int32_t t30 = -2715708;

	t30 = (((x745&x746)%x747)>>x748);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x749 = INT64_MIN;
	uint32_t x750 = 2U;
	int32_t x752 = 1;
	uint64_t t31 = 1031146LLU;

	t31 = (((x749&x750)%x751)>>x752);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x769 = INT16_MIN;
	volatile uint16_t x770 = 1U;
	int8_t x771 = INT8_MIN;
	uint8_t x772 = 2U;

	t32 = (((x769&x770)%x771)>>x772);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x778 = UINT8_MAX;
	int16_t x779 = -178;
	volatile int32_t t33 = 1;

	t33 = (((x777&x778)%x779)>>x780);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x817 = UINT64_MAX;
	int16_t x818 = INT16_MAX;
	int16_t x819 = 106;
	static uint8_t x820 = 3U;

	t34 = (((x817&x818)%x819)>>x820);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x821 = UINT16_MAX;

	t35 = (((x821&x822)%x823)>>x824);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x861 = -1;
	int32_t x863 = -1;
	volatile int32_t t36 = -1323084;

	t36 = (((x861&x862)%x863)>>x864);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x946 = UINT32_MAX;
	static uint8_t x947 = 49U;
	uint8_t x948 = 6U;
	volatile uint32_t t37 = 296U;

	t37 = (((x945&x946)%x947)>>x948);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x954 = 3;
	static uint32_t x955 = 67773U;
	volatile uint8_t x956 = 2U;
	volatile uint32_t t38 = 3812U;

	t38 = (((x953&x954)%x955)>>x956);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x969 = 1U;
	static volatile int32_t x970 = INT32_MAX;
	static int8_t x971 = INT8_MAX;
	static int16_t x972 = 6;

	t39 = (((x969&x970)%x971)>>x972);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x973 = INT8_MIN;
	int64_t x974 = -4000273LL;
	int8_t x976 = 1;

	t40 = (((x973&x974)%x975)>>x976);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x997 = 24721286LLU;
	int64_t x999 = INT64_MAX;
	uint8_t x1000 = 12U;

	t41 = (((x997&x998)%x999)>>x1000);

	if (t41 != 6032LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1001 = -17LL;
	int32_t x1002 = -11016;
	int64_t x1003 = -1LL;
	uint32_t x1004 = 0U;

	t42 = (((x1001&x1002)%x1003)>>x1004);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1005 = 0U;
	uint8_t x1006 = UINT8_MAX;
	uint32_t x1007 = 360640078U;
	static int16_t x1008 = 13;
	static uint32_t t43 = 49U;

	t43 = (((x1005&x1006)%x1007)>>x1008);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1021 = INT16_MAX;
	static volatile uint64_t t44 = 179683244273251112LLU;

	t44 = (((x1021&x1022)%x1023)>>x1024);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x1033 = INT64_MIN;
	int8_t x1034 = 2;
	static int16_t x1035 = -1;
	static int16_t x1036 = 7;
	volatile int64_t t45 = 97757369996LL;

	t45 = (((x1033&x1034)%x1035)>>x1036);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1077 = INT64_MIN;
	volatile uint16_t x1079 = 13849U;
	volatile int8_t x1080 = 16;

	t46 = (((x1077&x1078)%x1079)>>x1080);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1137 = 3952422740756LL;
	int16_t x1138 = INT16_MAX;
	int32_t x1139 = -1;
	volatile int8_t x1140 = 0;
	volatile int64_t t47 = 1181658368225688LL;

	t47 = (((x1137&x1138)%x1139)>>x1140);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1157 = INT64_MAX;
	int64_t x1158 = -136599LL;
	int8_t x1159 = INT8_MIN;
	int16_t x1160 = 48;
	volatile int64_t t48 = -1519LL;

	t48 = (((x1157&x1158)%x1159)>>x1160);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1210 = INT8_MAX;
	uint16_t x1211 = 1028U;
	uint8_t x1212 = 9U;
	int32_t t49 = -22798;

	t49 = (((x1209&x1210)%x1211)>>x1212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1217 = UINT8_MAX;
	volatile uint16_t x1218 = UINT16_MAX;
	int64_t x1219 = 6403665076973LL;
	uint16_t x1220 = 27U;
	int64_t t50 = 166760180624432LL;

	t50 = (((x1217&x1218)%x1219)>>x1220);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1269 = INT64_MIN;
	uint64_t x1270 = UINT64_MAX;
	uint64_t x1272 = 1LLU;
	volatile uint64_t t51 = 10972505560801115LLU;

	t51 = (((x1269&x1270)%x1271)>>x1272);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1293 = 997283889LL;
	static int64_t x1294 = 4256443137581LL;
	static uint8_t x1296 = 1U;
	volatile int64_t t52 = 8LL;

	t52 = (((x1293&x1294)%x1295)>>x1296);

	if (t52 != 27307024LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1297 = 20;
	int8_t x1299 = -22;
	uint8_t x1300 = 19U;

	t53 = (((x1297&x1298)%x1299)>>x1300);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1345 = -8;
	volatile uint16_t x1347 = 481U;
	static int32_t x1348 = 1;
	static int64_t t54 = 934378959967883454LL;

	t54 = (((x1345&x1346)%x1347)>>x1348);

	if (t54 != 221LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x1354 = 37U;
	uint8_t x1356 = 4U;
	int64_t t55 = 57898000LL;

	t55 = (((x1353&x1354)%x1355)>>x1356);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1381 = INT32_MIN;
	static int64_t x1382 = INT64_MIN;
	int16_t x1383 = INT16_MIN;
	int8_t x1384 = 8;

	t56 = (((x1381&x1382)%x1383)>>x1384);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x1409 = -629;
	static int64_t x1410 = INT64_MIN;
	uint64_t x1411 = UINT64_MAX;
	uint64_t t57 = 2LLU;

	t57 = (((x1409&x1410)%x1411)>>x1412);

	if (t57 != 288230376151711744LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1413 = INT16_MAX;
	static int64_t x1414 = INT64_MIN;
	uint32_t x1415 = UINT32_MAX;
	int8_t x1416 = 0;

	t58 = (((x1413&x1414)%x1415)>>x1416);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1433 = INT64_MAX;
	int64_t x1434 = INT64_MIN;
	uint8_t x1436 = 4U;
	int64_t t59 = 15876689LL;

	t59 = (((x1433&x1434)%x1435)>>x1436);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1437 = INT8_MIN;
	static volatile int8_t x1438 = -1;
	volatile int32_t x1440 = 7;
	int64_t t60 = -59151142594LL;

	t60 = (((x1437&x1438)%x1439)>>x1440);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1469 = INT32_MIN;
	static volatile uint16_t x1470 = 116U;
	static int8_t x1471 = INT8_MIN;
	int32_t x1472 = 15;
	int32_t t61 = 132944650;

	t61 = (((x1469&x1470)%x1471)>>x1472);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1477 = INT16_MIN;
	uint64_t x1478 = UINT64_MAX;
	static uint64_t x1479 = UINT64_MAX;
	uint64_t x1480 = 0LLU;
	uint64_t t62 = 9798462911LLU;

	t62 = (((x1477&x1478)%x1479)>>x1480);

	if (t62 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x1485 = 8;
	uint16_t x1486 = UINT16_MAX;
	static int64_t x1487 = INT64_MIN;
	static int8_t x1488 = 0;
	static volatile int64_t t63 = 117468352094165454LL;

	t63 = (((x1485&x1486)%x1487)>>x1488);

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1495 = INT16_MAX;
	int8_t x1496 = 15;
	int32_t t64 = -11719;

	t64 = (((x1493&x1494)%x1495)>>x1496);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1546 = UINT8_MAX;
	int32_t x1547 = -1;
	int32_t t65 = 1804366;

	t65 = (((x1545&x1546)%x1547)>>x1548);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1549 = -1LL;
	static uint64_t x1551 = UINT64_MAX;
	static volatile uint64_t t66 = 3162662879778108063LLU;

	t66 = (((x1549&x1550)%x1551)>>x1552);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1565 = INT16_MAX;
	int32_t x1566 = 82;
	int64_t x1567 = INT64_MAX;
	static volatile int64_t t67 = -1530813LL;

	t67 = (((x1565&x1566)%x1567)>>x1568);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x1594 = -171169225LL;
	static int8_t x1595 = INT8_MIN;
	volatile int8_t x1596 = 1;
	volatile int64_t t68 = -706086950278061LL;

	t68 = (((x1593&x1594)%x1595)>>x1596);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1614 = -1;
	int32_t x1615 = 1;
	static uint8_t x1616 = 5U;
	volatile int32_t t69 = 86515315;

	t69 = (((x1613&x1614)%x1615)>>x1616);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1669 = INT32_MIN;
	int16_t x1670 = INT16_MIN;
	int8_t x1672 = 29;
	volatile uint64_t t70 = 3625395LLU;

	t70 = (((x1669&x1670)%x1671)>>x1672);

	if (t70 != 5233852LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1689 = 5;
	uint8_t x1690 = 36U;
	volatile int8_t x1691 = -1;
	uint8_t x1692 = 1U;
	static int32_t t71 = -3708;

	t71 = (((x1689&x1690)%x1691)>>x1692);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x1737 = 2;
	int32_t x1738 = INT32_MIN;
	uint8_t x1740 = 6U;
	static volatile uint32_t t72 = 202584U;

	t72 = (((x1737&x1738)%x1739)>>x1740);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x1752 = 2LLU;
	volatile uint64_t t73 = 391LLU;

	t73 = (((x1749&x1750)%x1751)>>x1752);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1771 = 1867551U;
	int8_t x1772 = 1;

	t74 = (((x1769&x1770)%x1771)>>x1772);

	if (t74 != 24810U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1778 = 210U;
	static int16_t x1779 = INT16_MAX;
	static uint8_t x1780 = 0U;

	t75 = (((x1777&x1778)%x1779)>>x1780);

	if (t75 != 210LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1841 = 236953;
	int8_t x1842 = -7;
	volatile int64_t x1843 = -1LL;
	uint8_t x1844 = 6U;
	int64_t t76 = 63944LL;

	t76 = (((x1841&x1842)%x1843)>>x1844);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1922 = INT64_MIN;
	int32_t x1923 = INT32_MIN;
	static uint8_t x1924 = 29U;
	static volatile int64_t t77 = -1LL;

	t77 = (((x1921&x1922)%x1923)>>x1924);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1969 = -15;
	int8_t x1970 = INT8_MIN;
	int8_t x1971 = INT8_MIN;
	uint8_t x1972 = 1U;
	volatile int32_t t78 = 25187;

	t78 = (((x1969&x1970)%x1971)>>x1972);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x1993 = -2;
	static int8_t x1994 = -1;
	static int8_t x1995 = -1;
	static uint8_t x1996 = 5U;
	volatile int32_t t79 = -3;

	t79 = (((x1993&x1994)%x1995)>>x1996);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2041 = 25U;
	uint8_t x2042 = 12U;
	static uint8_t x2044 = 4U;
	uint32_t t80 = 2439891U;

	t80 = (((x2041&x2042)%x2043)>>x2044);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2053 = INT16_MAX;
	volatile int16_t x2054 = INT16_MAX;
	int64_t x2055 = INT64_MIN;
	uint8_t x2056 = 1U;
	volatile int64_t t81 = -77LL;

	t81 = (((x2053&x2054)%x2055)>>x2056);

	if (t81 != 16383LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2117 = UINT32_MAX;
	uint32_t x2118 = 4U;
	uint32_t x2119 = 1653U;
	uint8_t x2120 = 1U;
	volatile uint32_t t82 = 817U;

	t82 = (((x2117&x2118)%x2119)>>x2120);

	if (t82 != 2U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2153 = 27;
	static int8_t x2154 = -1;
	uint64_t x2155 = 180098252492248LLU;
	static uint64_t t83 = 1844183508229LLU;

	t83 = (((x2153&x2154)%x2155)>>x2156);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2261 = INT16_MAX;
	int8_t x2262 = INT8_MIN;
	volatile int32_t x2264 = 8;
	int32_t t84 = 39762;

	t84 = (((x2261&x2262)%x2263)>>x2264);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x2265 = UINT32_MAX;
	volatile uint8_t x2266 = 5U;
	int16_t x2267 = 4;
	uint16_t x2268 = 13U;
	uint32_t t85 = 3U;

	t85 = (((x2265&x2266)%x2267)>>x2268);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x2277 = -1;
	int32_t x2278 = -2728;
	volatile uint16_t x2279 = 2U;
	int32_t t86 = 364707839;

	t86 = (((x2277&x2278)%x2279)>>x2280);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2349 = INT64_MIN;
	int64_t x2350 = 1304668607LL;
	int8_t x2351 = -1;
	uint8_t x2352 = 1U;
	int64_t t87 = -5646LL;

	t87 = (((x2349&x2350)%x2351)>>x2352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2397 = UINT64_MAX;
	volatile int8_t x2398 = INT8_MIN;
	int32_t x2399 = -396350;
	static uint8_t x2400 = 1U;

	t88 = (((x2397&x2398)%x2399)>>x2400);

	if (t88 != 198111LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2433 = INT32_MIN;
	static int32_t x2434 = -129633008;
	int64_t x2435 = -1LL;
	static uint16_t x2436 = 6U;
	int64_t t89 = 90LL;

	t89 = (((x2433&x2434)%x2435)>>x2436);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2465 = 735722023246716LL;
	int32_t x2466 = INT32_MIN;
	volatile int32_t x2467 = INT32_MAX;

	t90 = (((x2465&x2466)%x2467)>>x2468);

	if (t90 != 85649LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x2533 = -1;
	int16_t x2535 = 27;
	static uint8_t x2536 = 15U;
	int32_t t91 = -1;

	t91 = (((x2533&x2534)%x2535)>>x2536);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x2553 = INT16_MIN;
	static int64_t x2554 = 1607958385324019831LL;
	int8_t x2555 = 15;
	uint16_t x2556 = 1U;
	volatile int64_t t92 = -3325LL;

	t92 = (((x2553&x2554)%x2555)>>x2556);

	if (t92 != 3LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2589 = 4303430870580898LLU;
	int32_t x2590 = -1;
	int8_t x2591 = INT8_MAX;
	volatile int16_t x2592 = 5;
	uint64_t t93 = 882LLU;

	t93 = (((x2589&x2590)%x2591)>>x2592);

	if (t93 != 3LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t t94 = 3LLU;

	t94 = (((x2605&x2606)%x2607)>>x2608);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x2673 = 1U;
	int32_t x2674 = -1;
	int32_t x2675 = -99153141;
	static uint8_t x2676 = 0U;
	volatile int32_t t95 = 30174121;

	t95 = (((x2673&x2674)%x2675)>>x2676);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x2722 = 24873377703LLU;
	uint8_t x2724 = 28U;
	static volatile uint64_t t96 = 295123368329105033LLU;

	t96 = (((x2721&x2722)%x2723)>>x2724);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2745 = INT8_MIN;
	int32_t x2746 = INT32_MAX;
	volatile int16_t x2747 = -1;
	int8_t x2748 = 1;
	static volatile int32_t t97 = -35;

	t97 = (((x2745&x2746)%x2747)>>x2748);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2762 = -32;
	int32_t x2763 = -1;
	int32_t x2764 = 0;

	t98 = (((x2761&x2762)%x2763)>>x2764);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2765 = INT64_MAX;
	uint8_t x2766 = UINT8_MAX;
	static volatile int64_t x2767 = 2557LL;

	t99 = (((x2765&x2766)%x2767)>>x2768);

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

