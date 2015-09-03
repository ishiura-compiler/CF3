#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x57 = INT32_MIN;
int32_t t1 = -1268158;
volatile int64_t x134 = INT64_MIN;
int16_t x191 = INT16_MIN;
volatile int16_t x192 = 1;
int16_t x230 = 16359;
static int16_t x232 = 2;
int8_t x286 = INT8_MIN;
uint8_t x287 = UINT8_MAX;
static int32_t x341 = INT32_MAX;
static int16_t x391 = 973;
uint16_t x392 = 26U;
volatile int64_t x405 = -1LL;
volatile int32_t t13 = 1;
uint32_t x439 = 2169U;
volatile uint8_t x440 = 4U;
volatile int32_t t15 = 2;
int8_t x465 = -1;
uint32_t x467 = 98470036U;
static uint16_t x491 = UINT16_MAX;
static uint64_t x519 = UINT64_MAX;
int32_t t19 = 171;
int32_t t21 = -1021;
int64_t x594 = -901561214296337048LL;
int8_t x595 = INT8_MAX;
int64_t x617 = 0LL;
uint8_t x620 = 2U;
int64_t x770 = -1LL;
uint64_t x799 = 28990LLU;
int32_t t29 = 27;
uint16_t x989 = 8U;
int8_t x991 = INT8_MIN;
int32_t t31 = -4413979;
uint32_t x1013 = 2804U;
volatile int16_t x1064 = 1;
volatile int32_t t34 = 11984;
int8_t x1147 = INT8_MIN;
uint8_t x1164 = 6U;
volatile int64_t x1176 = 1LL;
static int32_t t41 = 1;
int8_t x1229 = INT8_MIN;
volatile int32_t t44 = 2;
static int16_t x1286 = INT16_MIN;
int32_t x1309 = INT32_MAX;
static int64_t x1310 = INT64_MIN;
int32_t t46 = -213401;
static int8_t x1372 = 0;
volatile uint64_t x1387 = 5879896954448879011LLU;
volatile int16_t x1393 = 134;
volatile int64_t x1494 = INT64_MIN;
uint8_t x1496 = 4U;
static uint32_t x1499 = UINT32_MAX;
volatile uint32_t x1500 = 6U;
int16_t x1506 = INT16_MIN;
static uint16_t x1512 = 5U;
uint16_t x1655 = 623U;
volatile int32_t t57 = 3;
int32_t t59 = -37;
int8_t x1734 = INT8_MIN;
int64_t x1735 = 38LL;
static int32_t t62 = 859967531;
int32_t t63 = 2;
volatile int16_t x1844 = 9;
int8_t x1846 = -6;
int8_t x1850 = INT8_MIN;
uint32_t x1865 = UINT32_MAX;
int64_t x1867 = -1LL;
int32_t t72 = -4;
int32_t x1898 = 1;
uint8_t x1900 = 8U;
int32_t t74 = 31;
int16_t x1946 = 10;
int32_t t76 = 963218547;
volatile int32_t t78 = -11;
volatile uint16_t x2158 = UINT16_MAX;
volatile uint8_t x2160 = 1U;
int8_t x2229 = INT8_MIN;
uint8_t x2232 = 11U;
int32_t t81 = 23723;
int32_t x2279 = -8457;
static int32_t t84 = 297;
int32_t x2327 = INT32_MAX;
int32_t t85 = 63933111;
int16_t x2342 = -22;
uint16_t x2344 = 14U;
volatile int32_t t86 = -328;
int16_t x2417 = -1;
static volatile int8_t x2418 = -1;
int8_t x2419 = -14;
uint8_t x2420 = 7U;
int32_t x2429 = INT32_MIN;
int32_t x2486 = -169;
volatile int32_t x2501 = INT32_MAX;
volatile int16_t x2502 = INT16_MIN;
uint64_t x2504 = 7LLU;
static uint16_t x2555 = 1191U;
static uint64_t x2556 = 6LLU;
int32_t x2649 = INT32_MIN;
uint32_t x2718 = 3U;


void f0(void) {
	uint32_t x58 = 417480U;
	int16_t x59 = INT16_MIN;
	int8_t x60 = 4;
	volatile int32_t t0 = -159695;

	t0 = (((x57<=x58)<=x59)<<x60);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x73 = INT64_MIN;
	uint16_t x74 = 1U;
	static uint8_t x75 = UINT8_MAX;
	uint8_t x76 = 2U;

	t1 = (((x73<=x74)<=x75)<<x76);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x133 = 3U;
	static uint64_t x135 = 8802870517850045LLU;
	int16_t x136 = 14;
	volatile int32_t t2 = -72;

	t2 = (((x133<=x134)<=x135)<<x136);

	if (t2 != 16384) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x185 = -34;
	uint32_t x186 = 1U;
	volatile uint16_t x187 = UINT16_MAX;
	volatile uint32_t x188 = 19U;
	static volatile int32_t t3 = -62;

	t3 = (((x185<=x186)<=x187)<<x188);

	if (t3 != 524288) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int16_t x190 = INT16_MIN;
	int32_t t4 = 378991;

	t4 = (((x189<=x190)<=x191)<<x192);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x197 = INT16_MAX;
	uint64_t x198 = 28953770263762LLU;
	int64_t x199 = -1LL;
	static volatile uint16_t x200 = 4U;
	volatile int32_t t5 = -1802941;

	t5 = (((x197<=x198)<=x199)<<x200);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x229 = INT64_MIN;
	static int8_t x231 = INT8_MAX;
	static int32_t t6 = -67;

	t6 = (((x229<=x230)<=x231)<<x232);

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x249 = 63439;
	int32_t x250 = INT32_MAX;
	int64_t x251 = -35393612399393561LL;
	uint64_t x252 = 25LLU;
	static volatile int32_t t7 = -15692282;

	t7 = (((x249<=x250)<=x251)<<x252);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x269 = -1;
	static int64_t x270 = -1LL;
	int8_t x271 = INT8_MAX;
	volatile int8_t x272 = 0;
	int32_t t8 = 8622;

	t8 = (((x269<=x270)<=x271)<<x272);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x285 = INT32_MIN;
	int8_t x288 = 7;
	static volatile int32_t t9 = -21738;

	t9 = (((x285<=x286)<=x287)<<x288);

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x342 = INT8_MAX;
	volatile uint8_t x343 = 3U;
	int16_t x344 = 1;
	int32_t t10 = 248165;

	t10 = (((x341<=x342)<=x343)<<x344);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x389 = 1;
	volatile int16_t x390 = INT16_MAX;
	volatile int32_t t11 = 405149644;

	t11 = (((x389<=x390)<=x391)<<x392);

	if (t11 != 67108864) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x406 = 65429328071LLU;
	uint64_t x407 = 2LLU;
	static int16_t x408 = 0;
	int32_t t12 = -21;

	t12 = (((x405<=x406)<=x407)<<x408);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x421 = INT8_MAX;
	int8_t x422 = INT8_MIN;
	int16_t x423 = -127;
	uint8_t x424 = 1U;

	t13 = (((x421<=x422)<=x423)<<x424);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x437 = UINT64_MAX;
	uint8_t x438 = 38U;
	volatile int32_t t14 = -168178;

	t14 = (((x437<=x438)<=x439)<<x440);

	if (t14 != 16) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x457 = 26LLU;
	static int64_t x458 = -1LL;
	volatile int32_t x459 = INT32_MIN;
	int8_t x460 = 1;

	t15 = (((x457<=x458)<=x459)<<x460);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x466 = -1;
	int8_t x468 = 2;
	volatile int32_t t16 = -2;

	t16 = (((x465<=x466)<=x467)<<x468);

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x489 = INT8_MIN;
	volatile int8_t x490 = -9;
	int8_t x492 = 1;
	int32_t t17 = -42879164;

	t17 = (((x489<=x490)<=x491)<<x492);

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x493 = 562841348U;
	volatile int16_t x494 = 427;
	int16_t x495 = -249;
	static volatile int8_t x496 = 4;
	volatile int32_t t18 = 344218958;

	t18 = (((x493<=x494)<=x495)<<x496);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x517 = 1604U;
	volatile int16_t x518 = -1;
	int16_t x520 = 25;

	t19 = (((x517<=x518)<=x519)<<x520);

	if (t19 != 33554432) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x537 = 8U;
	static volatile int8_t x538 = INT8_MIN;
	static int16_t x539 = INT16_MIN;
	static uint16_t x540 = 0U;
	volatile int32_t t20 = 677357865;

	t20 = (((x537<=x538)<=x539)<<x540);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x585 = -1LL;
	uint8_t x586 = UINT8_MAX;
	volatile int32_t x587 = -1;
	static volatile uint8_t x588 = 11U;

	t21 = (((x585<=x586)<=x587)<<x588);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x593 = 23U;
	int8_t x596 = 0;
	volatile int32_t t22 = 370;

	t22 = (((x593<=x594)<=x595)<<x596);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x618 = -1;
	int16_t x619 = INT16_MAX;
	volatile int32_t t23 = 4946;

	t23 = (((x617<=x618)<=x619)<<x620);

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x681 = 3733942U;
	int32_t x682 = -15710;
	static uint64_t x683 = 65404LLU;
	volatile int16_t x684 = 1;
	int32_t t24 = 124668;

	t24 = (((x681<=x682)<=x683)<<x684);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x745 = 0LL;
	static int16_t x746 = INT16_MIN;
	int8_t x747 = INT8_MAX;
	static uint16_t x748 = 11U;
	static volatile int32_t t25 = 1;

	t25 = (((x745<=x746)<=x747)<<x748);

	if (t25 != 2048) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x769 = -475;
	int32_t x771 = INT32_MIN;
	static uint8_t x772 = 7U;
	volatile int32_t t26 = 387634;

	t26 = (((x769<=x770)<=x771)<<x772);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x781 = 285165;
	uint32_t x782 = UINT32_MAX;
	volatile uint16_t x783 = 5396U;
	uint8_t x784 = 1U;
	static volatile int32_t t27 = 13689635;

	t27 = (((x781<=x782)<=x783)<<x784);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x797 = 1315;
	int16_t x798 = INT16_MAX;
	int8_t x800 = 27;
	volatile int32_t t28 = 1;

	t28 = (((x797<=x798)<=x799)<<x800);

	if (t28 != 134217728) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x897 = -1LL;
	uint32_t x898 = UINT32_MAX;
	uint64_t x899 = 106LLU;
	int64_t x900 = 5LL;

	t29 = (((x897<=x898)<=x899)<<x900);

	if (t29 != 32) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x929 = -1;
	int32_t x930 = INT32_MIN;
	static int16_t x931 = -1;
	static volatile int32_t x932 = 3;
	static int32_t t30 = 373346;

	t30 = (((x929<=x930)<=x931)<<x932);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x990 = INT16_MAX;
	uint8_t x992 = 14U;

	t31 = (((x989<=x990)<=x991)<<x992);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1014 = INT16_MAX;
	int8_t x1015 = INT8_MAX;
	uint16_t x1016 = 3U;
	int32_t t32 = 257200;

	t32 = (((x1013<=x1014)<=x1015)<<x1016);

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1049 = 577;
	int16_t x1050 = 86;
	static int32_t x1051 = 1031099537;
	static volatile uint8_t x1052 = 3U;
	volatile int32_t t33 = -190;

	t33 = (((x1049<=x1050)<=x1051)<<x1052);

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1061 = 14849U;
	volatile int16_t x1062 = 3375;
	uint32_t x1063 = 172570U;

	t34 = (((x1061<=x1062)<=x1063)<<x1064);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1065 = -19LL;
	int32_t x1066 = INT32_MIN;
	int16_t x1067 = -360;
	uint8_t x1068 = 2U;
	static volatile int32_t t35 = 239;

	t35 = (((x1065<=x1066)<=x1067)<<x1068);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1093 = 3589065018503406LLU;
	static uint16_t x1094 = UINT16_MAX;
	int32_t x1095 = INT32_MAX;
	uint16_t x1096 = 5U;
	volatile int32_t t36 = 17360694;

	t36 = (((x1093<=x1094)<=x1095)<<x1096);

	if (t36 != 32) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1129 = 2262;
	static uint64_t x1130 = UINT64_MAX;
	volatile uint32_t x1131 = UINT32_MAX;
	uint8_t x1132 = 16U;
	int32_t t37 = 29;

	t37 = (((x1129<=x1130)<=x1131)<<x1132);

	if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1145 = -1;
	volatile int16_t x1146 = INT16_MAX;
	int16_t x1148 = 0;
	volatile int32_t t38 = -2006524;

	t38 = (((x1145<=x1146)<=x1147)<<x1148);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1161 = INT64_MAX;
	static volatile int64_t x1162 = INT64_MIN;
	int32_t x1163 = -1;
	volatile int32_t t39 = -91531;

	t39 = (((x1161<=x1162)<=x1163)<<x1164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1173 = -1;
	volatile int16_t x1174 = 1145;
	int32_t x1175 = -1;
	int32_t t40 = -7254;

	t40 = (((x1173<=x1174)<=x1175)<<x1176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1177 = 3044333085953708LLU;
	volatile uint16_t x1178 = UINT16_MAX;
	int32_t x1179 = 1216595;
	volatile uint32_t x1180 = 0U;

	t41 = (((x1177<=x1178)<=x1179)<<x1180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1193 = -7;
	uint32_t x1194 = UINT32_MAX;
	int64_t x1195 = -28933LL;
	volatile int8_t x1196 = 0;
	int32_t t42 = -2;

	t42 = (((x1193<=x1194)<=x1195)<<x1196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1201 = 258237771836154LL;
	int16_t x1202 = INT16_MIN;
	static int8_t x1203 = 0;
	int8_t x1204 = 1;
	static int32_t t43 = 1205511;

	t43 = (((x1201<=x1202)<=x1203)<<x1204);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x1230 = INT64_MIN;
	int16_t x1231 = INT16_MIN;
	volatile uint8_t x1232 = 0U;

	t44 = (((x1229<=x1230)<=x1231)<<x1232);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1285 = UINT32_MAX;
	int8_t x1287 = INT8_MIN;
	uint32_t x1288 = 1U;
	volatile int32_t t45 = -32510;

	t45 = (((x1285<=x1286)<=x1287)<<x1288);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1311 = INT16_MIN;
	volatile int8_t x1312 = 10;

	t46 = (((x1309<=x1310)<=x1311)<<x1312);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1369 = 118982100U;
	int16_t x1370 = -1;
	static uint8_t x1371 = 3U;
	int32_t t47 = -14789127;

	t47 = (((x1369<=x1370)<=x1371)<<x1372);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1385 = INT32_MIN;
	static volatile uint32_t x1386 = UINT32_MAX;
	uint8_t x1388 = 1U;
	int32_t t48 = 0;

	t48 = (((x1385<=x1386)<=x1387)<<x1388);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1394 = -648911;
	uint32_t x1395 = UINT32_MAX;
	int16_t x1396 = 5;
	int32_t t49 = -1164137;

	t49 = (((x1393<=x1394)<=x1395)<<x1396);

	if (t49 != 32) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x1489 = 48LLU;
	int64_t x1490 = INT64_MIN;
	int32_t x1491 = 12467;
	uint16_t x1492 = 1U;
	static volatile int32_t t50 = -3008;

	t50 = (((x1489<=x1490)<=x1491)<<x1492);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1493 = INT32_MIN;
	static uint64_t x1495 = UINT64_MAX;
	int32_t t51 = -82;

	t51 = (((x1493<=x1494)<=x1495)<<x1496);

	if (t51 != 16) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1497 = -1;
	uint64_t x1498 = 586640543LLU;
	volatile int32_t t52 = -4949;

	t52 = (((x1497<=x1498)<=x1499)<<x1500);

	if (t52 != 64) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1505 = 174U;
	int32_t x1507 = INT32_MAX;
	int16_t x1508 = 1;
	int32_t t53 = 95450031;

	t53 = (((x1505<=x1506)<=x1507)<<x1508);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1509 = INT8_MIN;
	int8_t x1510 = -1;
	static uint16_t x1511 = 5U;
	volatile int32_t t54 = -75212;

	t54 = (((x1509<=x1510)<=x1511)<<x1512);

	if (t54 != 32) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x1545 = INT32_MIN;
	uint16_t x1546 = 9U;
	int8_t x1547 = INT8_MAX;
	int8_t x1548 = 9;
	int32_t t55 = 0;

	t55 = (((x1545<=x1546)<=x1547)<<x1548);

	if (t55 != 512) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1613 = 113U;
	static int16_t x1614 = -971;
	uint32_t x1615 = UINT32_MAX;
	volatile uint8_t x1616 = 3U;
	int32_t t56 = 3960228;

	t56 = (((x1613<=x1614)<=x1615)<<x1616);

	if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1653 = -1;
	uint16_t x1654 = 0U;
	static uint8_t x1656 = 15U;

	t57 = (((x1653<=x1654)<=x1655)<<x1656);

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1681 = INT64_MAX;
	volatile int8_t x1682 = INT8_MIN;
	int8_t x1683 = INT8_MIN;
	int16_t x1684 = 1;
	static volatile int32_t t58 = -118305;

	t58 = (((x1681<=x1682)<=x1683)<<x1684);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1705 = UINT64_MAX;
	int32_t x1706 = -176621;
	volatile uint32_t x1707 = 134155U;
	int8_t x1708 = 0;

	t59 = (((x1705<=x1706)<=x1707)<<x1708);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x1733 = INT16_MAX;
	static uint16_t x1736 = 2U;
	volatile int32_t t60 = -500506;

	t60 = (((x1733<=x1734)<=x1735)<<x1736);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1745 = UINT16_MAX;
	volatile int16_t x1746 = INT16_MAX;
	int32_t x1747 = -15503;
	uint32_t x1748 = 7U;
	static volatile int32_t t61 = 25514396;

	t61 = (((x1745<=x1746)<=x1747)<<x1748);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x1749 = INT16_MIN;
	int16_t x1750 = INT16_MIN;
	volatile uint16_t x1751 = 659U;
	static uint8_t x1752 = 9U;

	t62 = (((x1749<=x1750)<=x1751)<<x1752);

	if (t62 != 512) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x1773 = INT16_MAX;
	int8_t x1774 = INT8_MIN;
	int8_t x1775 = 10;
	uint16_t x1776 = 6U;

	t63 = (((x1773<=x1774)<=x1775)<<x1776);

	if (t63 != 64) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x1777 = INT8_MIN;
	volatile uint8_t x1778 = UINT8_MAX;
	volatile uint32_t x1779 = UINT32_MAX;
	volatile uint32_t x1780 = 24U;
	int32_t t64 = -467310937;

	t64 = (((x1777<=x1778)<=x1779)<<x1780);

	if (t64 != 16777216) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x1789 = -1;
	static volatile int8_t x1790 = 5;
	int32_t x1791 = -1;
	uint8_t x1792 = 1U;
	volatile int32_t t65 = 0;

	t65 = (((x1789<=x1790)<=x1791)<<x1792);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x1793 = 434U;
	volatile uint8_t x1794 = UINT8_MAX;
	static int16_t x1795 = -1;
	uint32_t x1796 = 4U;
	volatile int32_t t66 = 0;

	t66 = (((x1793<=x1794)<=x1795)<<x1796);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x1805 = UINT16_MAX;
	uint16_t x1806 = 2U;
	int64_t x1807 = -1060720LL;
	volatile uint64_t x1808 = 2LLU;
	static volatile int32_t t67 = 633;

	t67 = (((x1805<=x1806)<=x1807)<<x1808);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1833 = INT8_MAX;
	int8_t x1834 = INT8_MAX;
	uint64_t x1835 = 310833714394379479LLU;
	int16_t x1836 = 3;
	int32_t t68 = -1032831006;

	t68 = (((x1833<=x1834)<=x1835)<<x1836);

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1841 = 58010895638805907LLU;
	uint8_t x1842 = UINT8_MAX;
	uint8_t x1843 = UINT8_MAX;
	volatile int32_t t69 = -62437524;

	t69 = (((x1841<=x1842)<=x1843)<<x1844);

	if (t69 != 512) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x1845 = UINT32_MAX;
	uint16_t x1847 = UINT16_MAX;
	uint32_t x1848 = 1U;
	volatile int32_t t70 = -98488457;

	t70 = (((x1845<=x1846)<=x1847)<<x1848);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1849 = INT32_MIN;
	int16_t x1851 = -56;
	volatile uint8_t x1852 = 0U;
	static int32_t t71 = 54747;

	t71 = (((x1849<=x1850)<=x1851)<<x1852);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1866 = INT64_MIN;
	uint16_t x1868 = 31U;

	t72 = (((x1865<=x1866)<=x1867)<<x1868);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x1877 = 4U;
	int32_t x1878 = INT32_MIN;
	int64_t x1879 = INT64_MIN;
	uint8_t x1880 = 0U;
	static int32_t t73 = 376;

	t73 = (((x1877<=x1878)<=x1879)<<x1880);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1897 = INT64_MAX;
	int8_t x1899 = 1;

	t74 = (((x1897<=x1898)<=x1899)<<x1900);

	if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1925 = 1060664639LLU;
	static int8_t x1926 = -1;
	volatile int32_t x1927 = 60441964;
	int32_t x1928 = 0;
	int32_t t75 = -132967563;

	t75 = (((x1925<=x1926)<=x1927)<<x1928);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x1945 = 208LL;
	int8_t x1947 = -49;
	uint8_t x1948 = 23U;

	t76 = (((x1945<=x1946)<=x1947)<<x1948);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1993 = 1U;
	int8_t x1994 = INT8_MIN;
	int8_t x1995 = -20;
	int16_t x1996 = 22;
	volatile int32_t t77 = 3570174;

	t77 = (((x1993<=x1994)<=x1995)<<x1996);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2113 = INT32_MAX;
	volatile int32_t x2114 = 38806397;
	static int16_t x2115 = 10;
	uint8_t x2116 = 2U;

	t78 = (((x2113<=x2114)<=x2115)<<x2116);

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2157 = INT8_MAX;
	int32_t x2159 = INT32_MAX;
	static int32_t t79 = -3293245;

	t79 = (((x2157<=x2158)<=x2159)<<x2160);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x2181 = 5039LLU;
	uint16_t x2182 = 1U;
	int8_t x2183 = -1;
	int16_t x2184 = 0;
	volatile int32_t t80 = 24;

	t80 = (((x2181<=x2182)<=x2183)<<x2184);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x2230 = UINT64_MAX;
	static uint64_t x2231 = 4LLU;

	t81 = (((x2229<=x2230)<=x2231)<<x2232);

	if (t81 != 2048) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2277 = -1;
	volatile int8_t x2278 = -10;
	volatile uint32_t x2280 = 10U;
	int32_t t82 = -124874;

	t82 = (((x2277<=x2278)<=x2279)<<x2280);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2285 = 112U;
	uint64_t x2286 = 120096769946256111LLU;
	static uint64_t x2287 = 11758477996416LLU;
	uint8_t x2288 = 30U;
	volatile int32_t t83 = 4328640;

	t83 = (((x2285<=x2286)<=x2287)<<x2288);

	if (t83 != 1073741824) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2289 = INT8_MIN;
	uint32_t x2290 = 32546856U;
	static volatile int16_t x2291 = INT16_MAX;
	volatile uint8_t x2292 = 0U;

	t84 = (((x2289<=x2290)<=x2291)<<x2292);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2325 = UINT8_MAX;
	int32_t x2326 = -12376520;
	int8_t x2328 = 22;

	t85 = (((x2325<=x2326)<=x2327)<<x2328);

	if (t85 != 4194304) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2341 = -1;
	int32_t x2343 = 14;

	t86 = (((x2341<=x2342)<=x2343)<<x2344);

	if (t86 != 16384) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t t87 = -64;

	t87 = (((x2417<=x2418)<=x2419)<<x2420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2430 = UINT8_MAX;
	int64_t x2431 = INT64_MAX;
	uint8_t x2432 = 0U;
	volatile int32_t t88 = 105814;

	t88 = (((x2429<=x2430)<=x2431)<<x2432);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2485 = INT16_MIN;
	uint16_t x2487 = 27056U;
	uint8_t x2488 = 2U;
	static int32_t t89 = -960238;

	t89 = (((x2485<=x2486)<=x2487)<<x2488);

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2497 = -1LL;
	int8_t x2498 = INT8_MAX;
	uint8_t x2499 = 85U;
	volatile int16_t x2500 = 0;
	volatile int32_t t90 = 3328;

	t90 = (((x2497<=x2498)<=x2499)<<x2500);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x2503 = INT16_MAX;
	volatile int32_t t91 = -5;

	t91 = (((x2501<=x2502)<=x2503)<<x2504);

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x2505 = 9U;
	int64_t x2506 = -12292753962317485LL;
	uint8_t x2507 = 51U;
	uint8_t x2508 = 1U;
	volatile int32_t t92 = 1786;

	t92 = (((x2505<=x2506)<=x2507)<<x2508);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2525 = INT64_MIN;
	int8_t x2526 = -36;
	static int16_t x2527 = 25;
	uint8_t x2528 = 1U;
	int32_t t93 = -4004979;

	t93 = (((x2525<=x2526)<=x2527)<<x2528);

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2553 = INT16_MIN;
	int8_t x2554 = INT8_MIN;
	volatile int32_t t94 = 21718;

	t94 = (((x2553<=x2554)<=x2555)<<x2556);

	if (t94 != 64) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2633 = 2;
	static int32_t x2634 = INT32_MAX;
	int8_t x2635 = INT8_MIN;
	uint32_t x2636 = 24U;
	int32_t t95 = -1041;

	t95 = (((x2633<=x2634)<=x2635)<<x2636);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2650 = INT16_MIN;
	uint16_t x2651 = 423U;
	volatile int32_t x2652 = 1;
	int32_t t96 = -116535376;

	t96 = (((x2649<=x2650)<=x2651)<<x2652);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x2665 = UINT64_MAX;
	int64_t x2666 = -1LL;
	uint32_t x2667 = UINT32_MAX;
	uint8_t x2668 = 2U;
	int32_t t97 = -967;

	t97 = (((x2665<=x2666)<=x2667)<<x2668);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2717 = 0;
	static uint8_t x2719 = 119U;
	uint8_t x2720 = 8U;
	volatile int32_t t98 = 13;

	t98 = (((x2717<=x2718)<=x2719)<<x2720);

	if (t98 != 256) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x2789 = -1;
	static volatile uint8_t x2790 = UINT8_MAX;
	int16_t x2791 = INT16_MAX;
	uint64_t x2792 = 7LLU;
	static volatile int32_t t99 = 60717;

	t99 = (((x2789<=x2790)<=x2791)<<x2792);

	if (t99 != 128) { NG(); } else { ; }
	
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

