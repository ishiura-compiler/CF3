#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x35 = -1;
volatile int32_t t0 = -110;
static uint32_t x52 = UINT32_MAX;
int16_t x53 = INT16_MAX;
int16_t x64 = 0;
static int32_t t3 = -4052791;
int16_t x68 = -1;
int32_t x86 = 316;
static int32_t x88 = -1;
uint64_t x108 = UINT64_MAX;
int8_t x169 = 1;
int64_t x171 = INT64_MAX;
volatile int8_t x172 = -1;
int32_t x272 = -1;
volatile uint16_t x290 = 18U;
volatile int8_t x292 = -1;
static volatile uint8_t x293 = UINT8_MAX;
int32_t x329 = 4828;
uint8_t x330 = UINT8_MAX;
uint16_t x361 = UINT16_MAX;
volatile int8_t x364 = -1;
int64_t t15 = 6565830802651LL;
volatile int32_t t16 = -3465606;
static uint16_t x494 = 6U;
int16_t x496 = -1;
uint64_t x652 = UINT64_MAX;
uint16_t x695 = UINT16_MAX;
int16_t x700 = -1;
volatile int16_t x731 = INT16_MIN;
int64_t x732 = -1LL;
volatile int32_t x782 = -3004;
int32_t t28 = -47449;
volatile int8_t x816 = 0;
uint64_t x878 = UINT64_MAX;
uint8_t x914 = 59U;
volatile uint32_t t33 = 1U;
uint16_t x957 = 242U;
static int32_t x960 = -1;
int64_t x980 = -1LL;
int16_t x1044 = -1;
static uint8_t x1047 = 1U;
uint8_t x1049 = 3U;
int32_t t39 = 363944;
static uint64_t x1077 = 4214445457841853900LLU;
int16_t x1080 = -1;
int32_t x1142 = INT32_MIN;
uint8_t x1143 = 0U;
int8_t x1144 = 0;
int8_t x1151 = -1;
int16_t x1152 = -1;
static uint32_t t45 = 0U;
uint16_t x1181 = 11913U;
static int32_t t47 = 227243568;
volatile uint8_t x1228 = 0U;
int64_t x1251 = INT64_MIN;
static int32_t x1252 = -1;
uint64_t x1290 = UINT64_MAX;
static int8_t x1356 = -7;
int64_t x1375 = -198206899734542156LL;
volatile int8_t x1705 = 0;
int16_t x1708 = -1;
uint32_t x1712 = UINT32_MAX;
uint64_t x1750 = 2819449LLU;
int32_t x1771 = INT32_MIN;
int16_t x1817 = INT16_MAX;
volatile uint16_t x1939 = UINT16_MAX;
int32_t t67 = 807344;
static volatile uint32_t x2137 = UINT32_MAX;
volatile uint16_t x2314 = 0U;
uint64_t x2333 = 581207662395770258LLU;
uint32_t x2336 = UINT32_MAX;
volatile uint64_t t73 = 12LLU;
volatile uint16_t x2347 = UINT16_MAX;
int8_t x2348 = -6;
int64_t x2357 = 14LL;
uint64_t x2369 = 10839344LLU;
uint64_t x2372 = UINT64_MAX;
volatile uint8_t x2428 = 0U;
uint32_t x2497 = 0U;
int64_t t82 = 57LL;
int16_t x2655 = INT16_MIN;
int32_t t84 = 196;
volatile int32_t x2746 = -1;
uint64_t x2765 = 2320501770LLU;
volatile uint64_t t86 = 128990170768425849LLU;
uint64_t x2774 = 1LLU;
uint64_t x2781 = UINT64_MAX;
volatile uint64_t t88 = 0LLU;
volatile uint32_t x2804 = UINT32_MAX;
uint8_t x2985 = 0U;
int32_t x2988 = -1;
volatile int32_t t92 = 3630;
int8_t x3035 = -1;
static int8_t x3036 = -3;
static uint64_t x3222 = 9100883LLU;
volatile uint32_t x3269 = UINT32_MAX;
static volatile int32_t x3272 = -1;
volatile uint32_t t99 = 91964379U;


void f0(void) {
	int16_t x33 = INT16_MAX;
	uint16_t x34 = 19824U;
	uint32_t x36 = UINT32_MAX;

	t0 = (x33<<((x34==x35)-x36));

	if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x49 = 71;
	int8_t x50 = INT8_MIN;
	uint8_t x51 = UINT8_MAX;
	volatile int32_t t1 = -1704;

	t1 = (x49<<((x50==x51)-x52));

	if (t1 != 142) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x54 = UINT8_MAX;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -6;
	volatile int32_t t2 = -11937655;

	t2 = (x53<<((x54==x55)-x56));

	if (t2 != 2097088) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x61 = 1;
	volatile int64_t x62 = INT64_MAX;
	static int16_t x63 = INT16_MIN;

	t3 = (x61<<((x62==x63)-x64));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x65 = 6373256LLU;
	int32_t x66 = INT32_MIN;
	volatile uint32_t x67 = 889204544U;
	uint64_t t4 = 4936174613086LLU;

	t4 = (x65<<((x66==x67)-x68));

	if (t4 != 12746512LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x73 = INT16_MAX;
	uint64_t x74 = 18105712LLU;
	uint8_t x75 = 6U;
	volatile uint32_t x76 = UINT32_MAX;
	int32_t t5 = 26206815;

	t5 = (x73<<((x74==x75)-x76));

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x85 = 0LL;
	volatile uint16_t x87 = 0U;
	volatile int64_t t6 = -485435841478930LL;

	t6 = (x85<<((x86==x87)-x88));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x105 = 2689410U;
	static uint16_t x106 = UINT16_MAX;
	static int32_t x107 = 1152;
	volatile uint32_t t7 = 1876204U;

	t7 = (x105<<((x106==x107)-x108));

	if (t7 != 5378820U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x137 = 0U;
	int16_t x138 = INT16_MIN;
	int16_t x139 = -10650;
	static int16_t x140 = -1;
	uint32_t t8 = 0U;

	t8 = (x137<<((x138==x139)-x140));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x170 = 928715292660087LL;
	static volatile int32_t t9 = 189670673;

	t9 = (x169<<((x170==x171)-x172));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 33541683768346LLU;
	static int32_t x271 = INT32_MIN;
	static volatile int32_t t10 = 6841;

	t10 = (x269<<((x270==x271)-x272));

	if (t10 != 131070) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x289 = UINT32_MAX;
	static int64_t x291 = 514910889807529LL;
	uint32_t t11 = 6842U;

	t11 = (x289<<((x290==x291)-x292));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x294 = -1;
	int64_t x295 = INT64_MIN;
	volatile int8_t x296 = -10;
	int32_t t12 = 10;

	t12 = (x293<<((x294==x295)-x296));

	if (t12 != 261120) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x331 = -2409924870210937LL;
	int64_t x332 = -1LL;
	int32_t t13 = 1362202;

	t13 = (x329<<((x330==x331)-x332));

	if (t13 != 9656) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x362 = INT32_MAX;
	static volatile int64_t x363 = 116LL;
	static int32_t t14 = 1794812;

	t14 = (x361<<((x362==x363)-x364));

	if (t14 != 131070) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x373 = 2049603433969LL;
	volatile uint64_t x374 = 463LLU;
	uint32_t x375 = UINT32_MAX;
	static int32_t x376 = -1;

	t15 = (x373<<((x374==x375)-x376));

	if (t15 != 4099206867938LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x405 = 37;
	int8_t x406 = INT8_MAX;
	static volatile uint64_t x407 = 36468513LLU;
	int8_t x408 = 0;

	t16 = (x405<<((x406==x407)-x408));

	if (t16 != 37) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x461 = UINT32_MAX;
	static int64_t x462 = -419LL;
	uint8_t x463 = 41U;
	int16_t x464 = -1;
	static volatile uint32_t t17 = 1815959355U;

	t17 = (x461<<((x462==x463)-x464));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x493 = UINT8_MAX;
	static uint64_t x495 = 16799LLU;
	volatile int32_t t18 = -84;

	t18 = (x493<<((x494==x495)-x496));

	if (t18 != 510) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x501 = UINT32_MAX;
	int8_t x502 = INT8_MIN;
	volatile uint8_t x503 = 100U;
	int32_t x504 = -1;
	uint32_t t19 = 1U;

	t19 = (x501<<((x502==x503)-x504));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x629 = 0;
	int32_t x630 = INT32_MIN;
	int32_t x631 = INT32_MIN;
	int64_t x632 = -1LL;
	volatile int32_t t20 = -56;

	t20 = (x629<<((x630==x631)-x632));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x649 = 3103;
	int64_t x650 = INT64_MAX;
	int64_t x651 = -159087504050159LL;
	int32_t t21 = 12;

	t21 = (x649<<((x650==x651)-x652));

	if (t21 != 6206) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x669 = 41407318;
	int16_t x670 = -13;
	int32_t x671 = 81;
	int8_t x672 = -1;
	int32_t t22 = 1;

	t22 = (x669<<((x670==x671)-x672));

	if (t22 != 82814636) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x693 = 76397143LLU;
	volatile uint32_t x694 = UINT32_MAX;
	static int32_t x696 = -1;
	uint64_t t23 = 241836118295510428LLU;

	t23 = (x693<<((x694==x695)-x696));

	if (t23 != 152794286LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x697 = 4U;
	volatile uint32_t x698 = 1769495277U;
	uint16_t x699 = UINT16_MAX;
	static int32_t t24 = 208842;

	t24 = (x697<<((x698==x699)-x700));

	if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x701 = UINT64_MAX;
	static int32_t x702 = -1;
	uint32_t x703 = 66421U;
	int32_t x704 = -1;
	uint64_t t25 = 16523LLU;

	t25 = (x701<<((x702==x703)-x704));

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x729 = UINT32_MAX;
	int16_t x730 = -1;
	uint32_t t26 = 0U;

	t26 = (x729<<((x730==x731)-x732));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x741 = UINT64_MAX;
	volatile int64_t x742 = 602LL;
	uint16_t x743 = 9U;
	uint32_t x744 = UINT32_MAX;
	volatile uint64_t t27 = 7229LLU;

	t27 = (x741<<((x742==x743)-x744));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x781 = 0;
	uint64_t x783 = UINT64_MAX;
	volatile int8_t x784 = 0;

	t28 = (x781<<((x782==x783)-x784));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x813 = 1517665456U;
	int8_t x814 = INT8_MIN;
	int32_t x815 = -1;
	volatile uint32_t t29 = 2802082U;

	t29 = (x813<<((x814==x815)-x816));

	if (t29 != 1517665456U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x877 = 1;
	static int8_t x879 = INT8_MAX;
	uint32_t x880 = UINT32_MAX;
	static int32_t t30 = 3583762;

	t30 = (x877<<((x878==x879)-x880));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x881 = UINT16_MAX;
	int32_t x882 = INT32_MIN;
	int64_t x883 = INT64_MIN;
	int8_t x884 = -1;
	int32_t t31 = 13;

	t31 = (x881<<((x882==x883)-x884));

	if (t31 != 131070) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x913 = 30U;
	volatile int32_t x915 = 10;
	int16_t x916 = -1;
	static volatile uint32_t t32 = 686U;

	t32 = (x913<<((x914==x915)-x916));

	if (t32 != 60U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x921 = UINT32_MAX;
	uint64_t x922 = 14749LLU;
	uint16_t x923 = UINT16_MAX;
	uint32_t x924 = UINT32_MAX;

	t33 = (x921<<((x922==x923)-x924));

	if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x958 = 5116;
	volatile int16_t x959 = INT16_MIN;
	volatile int32_t t34 = 26902073;

	t34 = (x957<<((x958==x959)-x960));

	if (t34 != 484) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x977 = 2U;
	int32_t x978 = -1;
	uint32_t x979 = UINT32_MAX;
	int32_t t35 = 385;

	t35 = (x977<<((x978==x979)-x980));

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1025 = 22507428950307651LL;
	uint64_t x1026 = 7860931430782670752LLU;
	volatile int64_t x1027 = INT64_MIN;
	uint32_t x1028 = UINT32_MAX;
	int64_t t36 = 47017808LL;

	t36 = (x1025<<((x1026==x1027)-x1028));

	if (t36 != 45014857900615302LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1041 = UINT64_MAX;
	uint8_t x1042 = 5U;
	volatile uint32_t x1043 = 46U;
	uint64_t t37 = 353783486023LLU;

	t37 = (x1041<<((x1042==x1043)-x1044));

	if (t37 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1045 = UINT16_MAX;
	uint32_t x1046 = 23U;
	static int16_t x1048 = -1;
	int32_t t38 = -5;

	t38 = (x1045<<((x1046==x1047)-x1048));

	if (t38 != 131070) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1050 = INT64_MIN;
	static uint16_t x1051 = UINT16_MAX;
	uint64_t x1052 = UINT64_MAX;

	t39 = (x1049<<((x1050==x1051)-x1052));

	if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1078 = UINT8_MAX;
	volatile uint8_t x1079 = UINT8_MAX;
	uint64_t t40 = 139291LLU;

	t40 = (x1077<<((x1078==x1079)-x1080));

	if (t40 != 16857781831367415600LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x1141 = 1581161712268LLU;
	static volatile uint64_t t41 = 202326265LLU;

	t41 = (x1141<<((x1142==x1143)-x1144));

	if (t41 != 1581161712268LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1149 = 73227LL;
	int8_t x1150 = INT8_MIN;
	volatile int64_t t42 = -440965813773994LL;

	t42 = (x1149<<((x1150==x1151)-x1152));

	if (t42 != 146454LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1153 = UINT16_MAX;
	volatile int16_t x1154 = INT16_MIN;
	int32_t x1155 = INT32_MIN;
	int16_t x1156 = -1;
	int32_t t43 = -464357276;

	t43 = (x1153<<((x1154==x1155)-x1156));

	if (t43 != 131070) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x1165 = 2616LLU;
	int64_t x1166 = -1LL;
	int16_t x1167 = INT16_MAX;
	volatile int32_t x1168 = -1;
	uint64_t t44 = 1149639689627464121LLU;

	t44 = (x1165<<((x1166==x1167)-x1168));

	if (t44 != 5232LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1169 = 31U;
	int8_t x1170 = INT8_MIN;
	uint32_t x1171 = 1370728U;
	static int64_t x1172 = -1LL;

	t45 = (x1169<<((x1170==x1171)-x1172));

	if (t45 != 62U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1182 = INT64_MIN;
	static volatile int64_t x1183 = 0LL;
	int16_t x1184 = -1;
	volatile int32_t t46 = -372504937;

	t46 = (x1181<<((x1182==x1183)-x1184));

	if (t46 != 23826) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1185 = INT8_MAX;
	static int64_t x1186 = -1LL;
	uint8_t x1187 = UINT8_MAX;
	volatile int8_t x1188 = -1;

	t47 = (x1185<<((x1186==x1187)-x1188));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1225 = 1U;
	static int32_t x1226 = INT32_MIN;
	int64_t x1227 = INT64_MIN;
	int32_t t48 = 9654;

	t48 = (x1225<<((x1226==x1227)-x1228));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1245 = 4826943U;
	static int8_t x1246 = -14;
	int8_t x1247 = 4;
	uint32_t x1248 = UINT32_MAX;
	static uint32_t t49 = 2142707U;

	t49 = (x1245<<((x1246==x1247)-x1248));

	if (t49 != 9653886U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1249 = UINT16_MAX;
	uint32_t x1250 = 68U;
	int32_t t50 = 0;

	t50 = (x1249<<((x1250==x1251)-x1252));

	if (t50 != 131070) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1289 = 9;
	volatile int64_t x1291 = -1LL;
	volatile int64_t x1292 = -1LL;
	volatile int32_t t51 = -6202;

	t51 = (x1289<<((x1290==x1291)-x1292));

	if (t51 != 36) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x1353 = UINT32_MAX;
	int8_t x1354 = -3;
	static volatile int16_t x1355 = INT16_MIN;
	volatile uint32_t t52 = 51U;

	t52 = (x1353<<((x1354==x1355)-x1356));

	if (t52 != 4294967168U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1373 = 23;
	volatile uint64_t x1374 = 7LLU;
	int8_t x1376 = -1;
	volatile int32_t t53 = -155399;

	t53 = (x1373<<((x1374==x1375)-x1376));

	if (t53 != 46) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1421 = INT8_MAX;
	int16_t x1422 = 11;
	int32_t x1423 = INT32_MAX;
	static volatile int8_t x1424 = 0;
	int32_t t54 = -109;

	t54 = (x1421<<((x1422==x1423)-x1424));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x1489 = 6U;
	int8_t x1490 = INT8_MIN;
	uint8_t x1491 = UINT8_MAX;
	int64_t x1492 = -1LL;
	int32_t t55 = 11;

	t55 = (x1489<<((x1490==x1491)-x1492));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1689 = 1U;
	int32_t x1690 = -1;
	int8_t x1691 = -1;
	uint8_t x1692 = 1U;
	static volatile int32_t t56 = 7592530;

	t56 = (x1689<<((x1690==x1691)-x1692));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x1706 = INT16_MIN;
	uint32_t x1707 = UINT32_MAX;
	volatile int32_t t57 = -12633310;

	t57 = (x1705<<((x1706==x1707)-x1708));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x1709 = 0LLU;
	int64_t x1710 = 237665540425092657LL;
	int8_t x1711 = INT8_MIN;
	volatile uint64_t t58 = 31974328994LLU;

	t58 = (x1709<<((x1710==x1711)-x1712));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1749 = 1;
	static int64_t x1751 = -1LL;
	volatile int64_t x1752 = -1LL;
	int32_t t59 = 29477;

	t59 = (x1749<<((x1750==x1751)-x1752));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x1753 = 3833339069905277444LLU;
	int32_t x1754 = -9528;
	static int32_t x1755 = -48283475;
	int8_t x1756 = -1;
	static volatile uint64_t t60 = 66959635962146LLU;

	t60 = (x1753<<((x1754==x1755)-x1756));

	if (t60 != 7666678139810554888LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1761 = 2189500488668689652LLU;
	int64_t x1762 = INT64_MIN;
	volatile int32_t x1763 = INT32_MIN;
	int16_t x1764 = -5;
	uint64_t t61 = 0LLU;

	t61 = (x1761<<((x1762==x1763)-x1764));

	if (t61 != 14723783416269414016LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x1769 = 1;
	volatile uint64_t x1770 = UINT64_MAX;
	volatile int16_t x1772 = -1;
	int32_t t62 = -22;

	t62 = (x1769<<((x1770==x1771)-x1772));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x1801 = UINT32_MAX;
	uint32_t x1802 = UINT32_MAX;
	uint16_t x1803 = 222U;
	volatile int32_t x1804 = -1;
	volatile uint32_t t63 = 938U;

	t63 = (x1801<<((x1802==x1803)-x1804));

	if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1818 = 927472LL;
	volatile uint16_t x1819 = 498U;
	volatile int8_t x1820 = -1;
	volatile int32_t t64 = 12829;

	t64 = (x1817<<((x1818==x1819)-x1820));

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1825 = 2250U;
	static int8_t x1826 = 29;
	static volatile uint8_t x1827 = 0U;
	static int64_t x1828 = -1LL;
	int32_t t65 = -135141900;

	t65 = (x1825<<((x1826==x1827)-x1828));

	if (t65 != 4500) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x1937 = 97;
	uint32_t x1938 = 6634910U;
	uint64_t x1940 = UINT64_MAX;
	volatile int32_t t66 = -10417;

	t66 = (x1937<<((x1938==x1939)-x1940));

	if (t66 != 194) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1953 = 1786;
	volatile int8_t x1954 = INT8_MIN;
	volatile int32_t x1955 = 101;
	static int16_t x1956 = 0;

	t67 = (x1953<<((x1954==x1955)-x1956));

	if (t67 != 1786) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2081 = 0;
	int16_t x2082 = INT16_MAX;
	int32_t x2083 = INT32_MAX;
	static uint64_t x2084 = UINT64_MAX;
	int32_t t68 = 438645664;

	t68 = (x2081<<((x2082==x2083)-x2084));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2138 = -1;
	volatile int32_t x2139 = INT32_MAX;
	int32_t x2140 = -1;
	volatile uint32_t t69 = 225U;

	t69 = (x2137<<((x2138==x2139)-x2140));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x2217 = 23U;
	static uint8_t x2218 = 122U;
	static int16_t x2219 = -42;
	int16_t x2220 = -1;
	static volatile int32_t t70 = 53;

	t70 = (x2217<<((x2218==x2219)-x2220));

	if (t70 != 46) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2289 = 1U;
	static int8_t x2290 = 2;
	static uint32_t x2291 = 104557U;
	int8_t x2292 = -1;
	volatile int32_t t71 = 2603698;

	t71 = (x2289<<((x2290==x2291)-x2292));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2313 = INT8_MAX;
	int16_t x2315 = -1;
	int32_t x2316 = -1;
	volatile int32_t t72 = -109803;

	t72 = (x2313<<((x2314==x2315)-x2316));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2334 = UINT32_MAX;
	int8_t x2335 = -17;

	t73 = (x2333<<((x2334==x2335)-x2336));

	if (t73 != 1162415324791540516LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2345 = 14U;
	int8_t x2346 = -37;
	int32_t t74 = 4;

	t74 = (x2345<<((x2346==x2347)-x2348));

	if (t74 != 896) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2358 = INT16_MAX;
	int16_t x2359 = INT16_MIN;
	int8_t x2360 = -1;
	int64_t t75 = -284169646334354LL;

	t75 = (x2357<<((x2358==x2359)-x2360));

	if (t75 != 28LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2370 = 505412LLU;
	static int64_t x2371 = INT64_MAX;
	uint64_t t76 = 3503826138235514LLU;

	t76 = (x2369<<((x2370==x2371)-x2372));

	if (t76 != 21678688LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x2385 = UINT8_MAX;
	uint64_t x2386 = 666636898LLU;
	static uint32_t x2387 = 67312173U;
	int8_t x2388 = -1;
	int32_t t77 = 5214436;

	t77 = (x2385<<((x2386==x2387)-x2388));

	if (t77 != 510) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2397 = 286U;
	int16_t x2398 = INT16_MIN;
	uint64_t x2399 = 27466LLU;
	static int16_t x2400 = -1;
	uint32_t t78 = 924U;

	t78 = (x2397<<((x2398==x2399)-x2400));

	if (t78 != 572U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2425 = UINT8_MAX;
	volatile uint64_t x2426 = 2146324227549878011LLU;
	volatile int32_t x2427 = INT32_MIN;
	static volatile int32_t t79 = 413164501;

	t79 = (x2425<<((x2426==x2427)-x2428));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2485 = UINT32_MAX;
	static int16_t x2486 = 3967;
	int8_t x2487 = INT8_MIN;
	static int64_t x2488 = -1LL;
	uint32_t t80 = 8009365U;

	t80 = (x2485<<((x2486==x2487)-x2488));

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2498 = UINT16_MAX;
	static volatile uint64_t x2499 = 483860LLU;
	static int16_t x2500 = -1;
	volatile uint32_t t81 = 5240U;

	t81 = (x2497<<((x2498==x2499)-x2500));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2597 = 8594092327285LL;
	static int32_t x2598 = INT32_MAX;
	int8_t x2599 = -30;
	int16_t x2600 = -1;

	t82 = (x2597<<((x2598==x2599)-x2600));

	if (t82 != 17188184654570LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2653 = 4019;
	volatile int32_t x2654 = INT32_MIN;
	uint32_t x2656 = UINT32_MAX;
	static int32_t t83 = 117140;

	t83 = (x2653<<((x2654==x2655)-x2656));

	if (t83 != 8038) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x2725 = 1640U;
	uint8_t x2726 = 109U;
	uint16_t x2727 = 4887U;
	int64_t x2728 = -1LL;

	t84 = (x2725<<((x2726==x2727)-x2728));

	if (t84 != 3280) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2745 = 494920066729LLU;
	int32_t x2747 = INT32_MIN;
	uint32_t x2748 = UINT32_MAX;
	volatile uint64_t t85 = 6LLU;

	t85 = (x2745<<((x2746==x2747)-x2748));

	if (t85 != 989840133458LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2766 = 9749037358LL;
	int64_t x2767 = 1486785219LL;
	uint64_t x2768 = UINT64_MAX;

	t86 = (x2765<<((x2766==x2767)-x2768));

	if (t86 != 4641003540LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x2773 = 2596195LLU;
	int64_t x2775 = INT64_MAX;
	volatile uint64_t x2776 = UINT64_MAX;
	static volatile uint64_t t87 = 316808136921004828LLU;

	t87 = (x2773<<((x2774==x2775)-x2776));

	if (t87 != 5192390LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2782 = INT16_MIN;
	static volatile int8_t x2783 = INT8_MIN;
	int8_t x2784 = -49;

	t88 = (x2781<<((x2782==x2783)-x2784));

	if (t88 != 18446181123756130304LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2801 = 6812LL;
	uint8_t x2802 = UINT8_MAX;
	int16_t x2803 = INT16_MIN;
	static int64_t t89 = -470050284548LL;

	t89 = (x2801<<((x2802==x2803)-x2804));

	if (t89 != 13624LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2817 = INT8_MAX;
	uint8_t x2818 = UINT8_MAX;
	static volatile int8_t x2819 = -1;
	int64_t x2820 = -1LL;
	volatile int32_t t90 = 128014;

	t90 = (x2817<<((x2818==x2819)-x2820));

	if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x2949 = UINT64_MAX;
	int8_t x2950 = INT8_MIN;
	static int8_t x2951 = -22;
	uint64_t x2952 = 0LLU;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x2949<<((x2950==x2951)-x2952));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x2986 = INT32_MIN;
	int64_t x2987 = -1LL;

	t92 = (x2985<<((x2986==x2987)-x2988));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3033 = UINT32_MAX;
	int32_t x3034 = INT32_MIN;
	uint32_t t93 = 3944U;

	t93 = (x3033<<((x3034==x3035)-x3036));

	if (t93 != 4294967288U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3093 = INT8_MAX;
	int8_t x3094 = INT8_MIN;
	static int16_t x3095 = INT16_MIN;
	int16_t x3096 = -1;
	volatile int32_t t94 = -13572629;

	t94 = (x3093<<((x3094==x3095)-x3096));

	if (t94 != 254) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3125 = 18U;
	uint16_t x3126 = 25039U;
	volatile int16_t x3127 = INT16_MIN;
	int16_t x3128 = -1;
	int32_t t95 = -487285;

	t95 = (x3125<<((x3126==x3127)-x3128));

	if (t95 != 36) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3205 = 21762LLU;
	uint64_t x3206 = 818844242LLU;
	uint8_t x3207 = UINT8_MAX;
	volatile int32_t x3208 = -1;
	static uint64_t t96 = 3975192276LLU;

	t96 = (x3205<<((x3206==x3207)-x3208));

	if (t96 != 43524LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3221 = 0LLU;
	volatile uint8_t x3223 = 6U;
	static int32_t x3224 = -1;
	static uint64_t t97 = 5336259042LLU;

	t97 = (x3221<<((x3222==x3223)-x3224));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x3241 = 17U;
	volatile int16_t x3242 = -8;
	static uint64_t x3243 = UINT64_MAX;
	int8_t x3244 = -26;
	uint32_t t98 = 111169877U;

	t98 = (x3241<<((x3242==x3243)-x3244));

	if (t98 != 1140850688U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3270 = INT8_MIN;
	int8_t x3271 = -1;

	t99 = (x3269<<((x3270==x3271)-x3272));

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

