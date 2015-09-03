#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x119 = UINT16_MAX;
int32_t x149 = 7810;
int8_t x152 = 1;
volatile int32_t t7 = 328;
volatile int32_t x317 = INT32_MIN;
int8_t x319 = -1;
volatile uint16_t x350 = 1661U;
int32_t x398 = INT32_MIN;
int16_t x406 = -1;
int64_t x451 = INT64_MIN;
volatile uint32_t x482 = 221859U;
uint8_t x594 = UINT8_MAX;
static int8_t x596 = 3;
static int16_t x597 = INT16_MIN;
int32_t x603 = -1;
volatile uint8_t x609 = UINT8_MAX;
uint8_t x624 = 15U;
volatile int32_t x677 = INT32_MIN;
int32_t t22 = 40;
volatile uint16_t x702 = UINT16_MAX;
uint16_t x733 = 27U;
uint32_t x735 = 248529U;
int32_t x753 = 16;
static int64_t x754 = INT64_MIN;
uint32_t x839 = UINT32_MAX;
int64_t x889 = -2LL;
volatile int8_t x890 = 2;
static int64_t x891 = INT64_MIN;
static int32_t t31 = -5438;
uint32_t x961 = UINT32_MAX;
int64_t x999 = -512710022054253892LL;
static int32_t t33 = 388;
volatile int32_t t34 = 14;
int32_t x1016 = 5;
uint32_t x1017 = UINT32_MAX;
volatile int32_t t36 = -13054;
int32_t x1041 = -1;
uint16_t x1042 = 124U;
volatile int32_t t37 = -30010809;
uint16_t x1085 = UINT16_MAX;
int32_t x1087 = -1;
uint32_t x1117 = 1010U;
int8_t x1140 = 15;
volatile int32_t t40 = 0;
volatile int32_t t41 = -32781053;
int32_t t42 = 315776;
volatile uint8_t x1173 = UINT8_MAX;
int8_t x1178 = 1;
int32_t t44 = -14;
volatile uint16_t x1227 = UINT16_MAX;
int8_t x1228 = 1;
volatile int32_t x1337 = INT32_MIN;
uint32_t x1489 = UINT32_MAX;
uint32_t x1492 = 2U;
volatile int32_t t53 = 498;
int16_t x1543 = -1;
volatile int32_t t56 = -106919;
int16_t x1635 = INT16_MAX;
static uint64_t x1636 = 28LLU;
uint64_t x1645 = 61533LLU;
int64_t x1646 = -4453569508137271LL;
uint32_t x1680 = 1U;
volatile int8_t x1775 = INT8_MAX;
static int16_t x1853 = 107;
volatile int32_t t63 = 170598;
uint32_t x1907 = UINT32_MAX;
uint8_t x1983 = 95U;
volatile int16_t x1993 = INT16_MAX;
static int32_t t69 = 24;
int8_t x2045 = INT8_MAX;
volatile uint16_t x2048 = 9U;
int32_t x2187 = INT32_MIN;
uint8_t x2188 = 18U;
int64_t x2195 = INT64_MAX;
int32_t t74 = 2115;
int32_t x2217 = 14019;
uint8_t x2220 = 20U;
uint32_t x2402 = 8451U;
uint8_t x2500 = 2U;
volatile int32_t t85 = -4;
uint64_t x2586 = 28LLU;
int8_t x2644 = 1;
static int32_t t91 = 9882;
int16_t x2781 = INT16_MIN;
uint32_t x2782 = UINT32_MAX;
static int32_t x2786 = 293;
int16_t x2835 = -1;
uint16_t x2849 = 598U;
uint8_t x3080 = 15U;
int64_t x3097 = -1LL;


void f0(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = 16040;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = 2U;
	volatile int32_t t0 = -10468010;

	t0 = (((x9/x10)<x11)>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x21 = -1;
	int32_t x22 = -56;
	static volatile uint8_t x23 = 0U;
	static uint8_t x24 = 6U;
	volatile int32_t t1 = -23;

	t1 = (((x21/x22)<x23)>>x24);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x77 = 263211705U;
	static int16_t x78 = -1;
	uint16_t x79 = 21843U;
	volatile int8_t x80 = 0;
	int32_t t2 = -5;

	t2 = (((x77/x78)<x79)>>x80);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x81 = INT64_MAX;
	volatile uint32_t x82 = 1286968U;
	volatile int32_t x83 = 23;
	static int16_t x84 = 2;
	int32_t t3 = 12875;

	t3 = (((x81/x82)<x83)>>x84);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x97 = -1;
	uint64_t x98 = UINT64_MAX;
	static int16_t x99 = INT16_MAX;
	int16_t x100 = 2;
	int32_t t4 = 58861;

	t4 = (((x97/x98)<x99)>>x100);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MAX;
	uint16_t x120 = 17U;
	static volatile int32_t t5 = 1591244;

	t5 = (((x117/x118)<x119)>>x120);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = INT8_MAX;
	uint64_t x127 = UINT64_MAX;
	volatile uint64_t x128 = 0LLU;
	volatile int32_t t6 = 625;

	t6 = (((x125/x126)<x127)>>x128);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x150 = -4;
	int16_t x151 = -1;

	t7 = (((x149/x150)<x151)>>x152);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x169 = -1;
	volatile int32_t x170 = -1325367;
	int32_t x171 = 147739;
	volatile uint8_t x172 = 0U;
	int32_t t8 = 3;

	t8 = (((x169/x170)<x171)>>x172);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x193 = -46635LL;
	int64_t x194 = 132988380LL;
	int32_t x195 = -1;
	volatile uint32_t x196 = 27U;
	int32_t t9 = 522964;

	t9 = (((x193/x194)<x195)>>x196);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x318 = INT32_MAX;
	int8_t x320 = 0;
	static int32_t t10 = 751;

	t10 = (((x317/x318)<x319)>>x320);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x349 = 36033959473557LLU;
	int32_t x351 = INT32_MAX;
	static uint16_t x352 = 9U;
	volatile int32_t t11 = 76599941;

	t11 = (((x349/x350)<x351)>>x352);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x397 = UINT8_MAX;
	static int16_t x399 = -1;
	volatile uint8_t x400 = 10U;
	int32_t t12 = 95502;

	t12 = (((x397/x398)<x399)>>x400);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x405 = -626394277962LL;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 0;
	volatile int32_t t13 = 11317477;

	t13 = (((x405/x406)<x407)>>x408);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x449 = -204;
	int64_t x450 = -98668767593504LL;
	int16_t x452 = 2;
	volatile int32_t t14 = -73813070;

	t14 = (((x449/x450)<x451)>>x452);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x481 = INT16_MAX;
	volatile int8_t x483 = -1;
	int8_t x484 = 0;
	int32_t t15 = -3;

	t15 = (((x481/x482)<x483)>>x484);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x593 = 2U;
	uint16_t x595 = 3642U;
	volatile int32_t t16 = -248;

	t16 = (((x593/x594)<x595)>>x596);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x598 = 47LLU;
	int8_t x599 = INT8_MAX;
	volatile int64_t x600 = 5LL;
	int32_t t17 = -445;

	t17 = (((x597/x598)<x599)>>x600);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x601 = INT8_MIN;
	int16_t x602 = INT16_MAX;
	uint32_t x604 = 15U;
	volatile int32_t t18 = -2813548;

	t18 = (((x601/x602)<x603)>>x604);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x610 = INT32_MIN;
	volatile int32_t x611 = INT32_MAX;
	static int32_t x612 = 0;
	volatile int32_t t19 = -1;

	t19 = (((x609/x610)<x611)>>x612);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x621 = INT16_MAX;
	volatile int16_t x622 = -1;
	static uint8_t x623 = 76U;
	int32_t t20 = 31801604;

	t20 = (((x621/x622)<x623)>>x624);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x678 = 9LLU;
	uint64_t x679 = 14279191588LLU;
	volatile int16_t x680 = 3;
	static volatile int32_t t21 = 768;

	t21 = (((x677/x678)<x679)>>x680);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x697 = UINT16_MAX;
	uint32_t x698 = UINT32_MAX;
	uint32_t x699 = 3644U;
	int32_t x700 = 1;

	t22 = (((x697/x698)<x699)>>x700);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x701 = 46U;
	uint32_t x703 = 305791U;
	uint16_t x704 = 11U;
	volatile int32_t t23 = 7605822;

	t23 = (((x701/x702)<x703)>>x704);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x734 = -4262734501764521402LL;
	volatile int32_t x736 = 3;
	int32_t t24 = -3;

	t24 = (((x733/x734)<x735)>>x736);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x737 = 15U;
	int8_t x738 = INT8_MAX;
	volatile int16_t x739 = 3043;
	uint64_t x740 = 31LLU;
	volatile int32_t t25 = -93345;

	t25 = (((x737/x738)<x739)>>x740);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x755 = INT8_MAX;
	uint8_t x756 = 2U;
	static volatile int32_t t26 = 0;

	t26 = (((x753/x754)<x755)>>x756);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x797 = UINT8_MAX;
	static int8_t x798 = INT8_MAX;
	static int8_t x799 = INT8_MIN;
	static uint8_t x800 = 3U;
	int32_t t27 = -815914;

	t27 = (((x797/x798)<x799)>>x800);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x837 = -1;
	int32_t x838 = -1760;
	static int16_t x840 = 1;
	static int32_t t28 = 3209;

	t28 = (((x837/x838)<x839)>>x840);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x892 = 3;
	volatile int32_t t29 = 0;

	t29 = (((x889/x890)<x891)>>x892);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x905 = 201;
	volatile int32_t x906 = INT32_MAX;
	volatile int16_t x907 = INT16_MAX;
	static uint16_t x908 = 31U;
	volatile int32_t t30 = -332302423;

	t30 = (((x905/x906)<x907)>>x908);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x957 = -22;
	int32_t x958 = INT32_MIN;
	uint16_t x959 = 0U;
	volatile uint32_t x960 = 5U;

	t31 = (((x957/x958)<x959)>>x960);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x962 = 3775LLU;
	static uint64_t x963 = 258LLU;
	int8_t x964 = 0;
	static int32_t t32 = -12397;

	t32 = (((x961/x962)<x963)>>x964);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x997 = INT64_MAX;
	uint16_t x998 = UINT16_MAX;
	uint8_t x1000 = 5U;

	t33 = (((x997/x998)<x999)>>x1000);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1001 = -1;
	int32_t x1002 = 231305366;
	uint32_t x1003 = UINT32_MAX;
	int8_t x1004 = 0;

	t34 = (((x1001/x1002)<x1003)>>x1004);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1013 = UINT16_MAX;
	int32_t x1014 = INT32_MIN;
	int64_t x1015 = INT64_MIN;
	int32_t t35 = -24;

	t35 = (((x1013/x1014)<x1015)>>x1016);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1018 = -1;
	static uint32_t x1019 = 31U;
	uint32_t x1020 = 6U;

	t36 = (((x1017/x1018)<x1019)>>x1020);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1043 = 13929800LL;
	int16_t x1044 = 1;

	t37 = (((x1041/x1042)<x1043)>>x1044);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x1086 = 13330LL;
	uint32_t x1088 = 1U;
	int32_t t38 = 182707576;

	t38 = (((x1085/x1086)<x1087)>>x1088);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1118 = -8426;
	int8_t x1119 = 0;
	uint32_t x1120 = 12U;
	volatile int32_t t39 = 124;

	t39 = (((x1117/x1118)<x1119)>>x1120);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1137 = -1;
	int32_t x1138 = -1;
	static uint8_t x1139 = UINT8_MAX;

	t40 = (((x1137/x1138)<x1139)>>x1140);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1149 = UINT8_MAX;
	uint64_t x1150 = 6LLU;
	int8_t x1151 = INT8_MIN;
	volatile uint16_t x1152 = 5U;

	t41 = (((x1149/x1150)<x1151)>>x1152);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x1157 = -1;
	int16_t x1158 = INT16_MAX;
	int64_t x1159 = INT64_MIN;
	uint8_t x1160 = 4U;

	t42 = (((x1157/x1158)<x1159)>>x1160);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1174 = INT64_MIN;
	int16_t x1175 = -1;
	volatile uint8_t x1176 = 1U;
	volatile int32_t t43 = 1;

	t43 = (((x1173/x1174)<x1175)>>x1176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x1177 = 1886U;
	int32_t x1179 = -7031;
	volatile uint8_t x1180 = 0U;

	t44 = (((x1177/x1178)<x1179)>>x1180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1225 = -1LL;
	uint8_t x1226 = 1U;
	volatile int32_t t45 = -146937;

	t45 = (((x1225/x1226)<x1227)>>x1228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1233 = INT64_MIN;
	static uint16_t x1234 = UINT16_MAX;
	int16_t x1235 = -1;
	int8_t x1236 = 3;
	volatile int32_t t46 = -3;

	t46 = (((x1233/x1234)<x1235)>>x1236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1257 = INT8_MAX;
	uint16_t x1258 = 2662U;
	volatile int16_t x1259 = INT16_MIN;
	volatile int64_t x1260 = 0LL;
	int32_t t47 = 1735;

	t47 = (((x1257/x1258)<x1259)>>x1260);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1305 = INT8_MIN;
	int64_t x1306 = -1LL;
	static volatile int32_t x1307 = 34626060;
	uint16_t x1308 = 8U;
	int32_t t48 = -897890685;

	t48 = (((x1305/x1306)<x1307)>>x1308);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x1317 = 1U;
	int64_t x1318 = -12308865729207051LL;
	volatile uint8_t x1319 = 3U;
	uint16_t x1320 = 4U;
	static int32_t t49 = 28;

	t49 = (((x1317/x1318)<x1319)>>x1320);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1338 = 52;
	static int16_t x1339 = INT16_MAX;
	uint16_t x1340 = 2U;
	int32_t t50 = -14706813;

	t50 = (((x1337/x1338)<x1339)>>x1340);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1357 = INT16_MIN;
	int8_t x1358 = INT8_MIN;
	int8_t x1359 = INT8_MAX;
	static uint16_t x1360 = 1U;
	static volatile int32_t t51 = -11;

	t51 = (((x1357/x1358)<x1359)>>x1360);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x1490 = UINT16_MAX;
	static int8_t x1491 = 12;
	volatile int32_t t52 = -80251;

	t52 = (((x1489/x1490)<x1491)>>x1492);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1501 = 28U;
	static int8_t x1502 = INT8_MIN;
	int32_t x1503 = INT32_MIN;
	static int8_t x1504 = 8;

	t53 = (((x1501/x1502)<x1503)>>x1504);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1541 = -966520757;
	volatile int64_t x1542 = INT64_MIN;
	uint16_t x1544 = 0U;
	volatile int32_t t54 = 265018236;

	t54 = (((x1541/x1542)<x1543)>>x1544);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x1561 = INT64_MAX;
	int32_t x1562 = INT32_MIN;
	static uint8_t x1563 = 1U;
	static uint32_t x1564 = 0U;
	static int32_t t55 = -2341;

	t55 = (((x1561/x1562)<x1563)>>x1564);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x1589 = 0U;
	uint16_t x1590 = UINT16_MAX;
	volatile int8_t x1591 = INT8_MAX;
	uint8_t x1592 = 9U;

	t56 = (((x1589/x1590)<x1591)>>x1592);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1633 = -10;
	static uint16_t x1634 = UINT16_MAX;
	int32_t t57 = 0;

	t57 = (((x1633/x1634)<x1635)>>x1636);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1647 = 591905LLU;
	volatile int8_t x1648 = 2;
	volatile int32_t t58 = -17483024;

	t58 = (((x1645/x1646)<x1647)>>x1648);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x1677 = -1;
	int16_t x1678 = INT16_MAX;
	static int8_t x1679 = INT8_MAX;
	static int32_t t59 = 0;

	t59 = (((x1677/x1678)<x1679)>>x1680);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1757 = INT64_MIN;
	uint8_t x1758 = UINT8_MAX;
	static int32_t x1759 = -208502614;
	static uint8_t x1760 = 2U;
	volatile int32_t t60 = 185458;

	t60 = (((x1757/x1758)<x1759)>>x1760);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1773 = 46;
	volatile int64_t x1774 = -1LL;
	int16_t x1776 = 1;
	int32_t t61 = -5995;

	t61 = (((x1773/x1774)<x1775)>>x1776);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1833 = UINT64_MAX;
	uint8_t x1834 = 1U;
	int64_t x1835 = -330417623LL;
	volatile uint8_t x1836 = 14U;
	int32_t t62 = -13734500;

	t62 = (((x1833/x1834)<x1835)>>x1836);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1854 = 6396126;
	int16_t x1855 = 1;
	uint8_t x1856 = 0U;

	t63 = (((x1853/x1854)<x1855)>>x1856);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1905 = UINT64_MAX;
	int64_t x1906 = -1LL;
	int32_t x1908 = 14;
	volatile int32_t t64 = 435010;

	t64 = (((x1905/x1906)<x1907)>>x1908);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x1949 = -101006649LL;
	int64_t x1950 = INT64_MAX;
	uint64_t x1951 = 2362LLU;
	uint8_t x1952 = 1U;
	int32_t t65 = 467;

	t65 = (((x1949/x1950)<x1951)>>x1952);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1973 = 16795384929727LLU;
	volatile int8_t x1974 = -8;
	volatile int8_t x1975 = INT8_MIN;
	int64_t x1976 = 8LL;
	int32_t t66 = 13;

	t66 = (((x1973/x1974)<x1975)>>x1976);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1977 = 1;
	int8_t x1978 = INT8_MIN;
	int16_t x1979 = INT16_MIN;
	uint8_t x1980 = 3U;
	int32_t t67 = -208303;

	t67 = (((x1977/x1978)<x1979)>>x1980);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1981 = -54;
	int8_t x1982 = -16;
	uint8_t x1984 = 12U;
	volatile int32_t t68 = 0;

	t68 = (((x1981/x1982)<x1983)>>x1984);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1994 = 3027981U;
	int8_t x1995 = INT8_MIN;
	uint64_t x1996 = 7LLU;

	t69 = (((x1993/x1994)<x1995)>>x1996);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2046 = INT8_MAX;
	static uint16_t x2047 = 0U;
	static int32_t t70 = 58821;

	t70 = (((x2045/x2046)<x2047)>>x2048);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x2089 = INT8_MIN;
	uint64_t x2090 = 6364216142062973LLU;
	static uint16_t x2091 = 3903U;
	static uint8_t x2092 = 0U;
	int32_t t71 = -304619520;

	t71 = (((x2089/x2090)<x2091)>>x2092);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2121 = INT64_MIN;
	volatile int32_t x2122 = INT32_MIN;
	int16_t x2123 = -6022;
	static uint8_t x2124 = 9U;
	static volatile int32_t t72 = 8;

	t72 = (((x2121/x2122)<x2123)>>x2124);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2185 = -80;
	volatile uint32_t x2186 = 1234516U;
	static int32_t t73 = -439;

	t73 = (((x2185/x2186)<x2187)>>x2188);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2193 = 1U;
	int32_t x2194 = -928475;
	static uint16_t x2196 = 22U;

	t74 = (((x2193/x2194)<x2195)>>x2196);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2205 = 4;
	uint16_t x2206 = 572U;
	uint8_t x2207 = 7U;
	int16_t x2208 = 1;
	static int32_t t75 = 1;

	t75 = (((x2205/x2206)<x2207)>>x2208);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2209 = -13;
	volatile int64_t x2210 = 68468487045696LL;
	static int16_t x2211 = INT16_MIN;
	int8_t x2212 = 1;
	static int32_t t76 = 0;

	t76 = (((x2209/x2210)<x2211)>>x2212);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x2218 = INT32_MIN;
	volatile int16_t x2219 = -11;
	int32_t t77 = 45098903;

	t77 = (((x2217/x2218)<x2219)>>x2220);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2229 = 2541655U;
	static int8_t x2230 = INT8_MIN;
	volatile int32_t x2231 = 1;
	uint8_t x2232 = 22U;
	static volatile int32_t t78 = 2;

	t78 = (((x2229/x2230)<x2231)>>x2232);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2333 = 27746U;
	static int64_t x2334 = INT64_MAX;
	volatile int32_t x2335 = -1;
	int8_t x2336 = 28;
	volatile int32_t t79 = -2346163;

	t79 = (((x2333/x2334)<x2335)>>x2336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2365 = -6447;
	uint8_t x2366 = UINT8_MAX;
	int64_t x2367 = INT64_MAX;
	uint8_t x2368 = 13U;
	static volatile int32_t t80 = 934675;

	t80 = (((x2365/x2366)<x2367)>>x2368);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2369 = -1;
	int64_t x2370 = INT64_MIN;
	int8_t x2371 = 0;
	int8_t x2372 = 3;
	int32_t t81 = 249;

	t81 = (((x2369/x2370)<x2371)>>x2372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2397 = 617522U;
	int32_t x2398 = INT32_MIN;
	static int64_t x2399 = 1802LL;
	static int32_t x2400 = 1;
	static int32_t t82 = -1470;

	t82 = (((x2397/x2398)<x2399)>>x2400);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x2401 = -1;
	int16_t x2403 = 0;
	static int8_t x2404 = 17;
	static int32_t t83 = -251;

	t83 = (((x2401/x2402)<x2403)>>x2404);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2465 = -8637;
	int16_t x2466 = 9;
	int16_t x2467 = INT16_MAX;
	uint8_t x2468 = 9U;
	int32_t t84 = 3262501;

	t84 = (((x2465/x2466)<x2467)>>x2468);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2497 = -1;
	static volatile int64_t x2498 = INT64_MAX;
	int8_t x2499 = -8;

	t85 = (((x2497/x2498)<x2499)>>x2500);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2585 = INT64_MIN;
	int16_t x2587 = 2;
	volatile uint16_t x2588 = 6U;
	volatile int32_t t86 = 7032865;

	t86 = (((x2585/x2586)<x2587)>>x2588);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2617 = UINT32_MAX;
	uint32_t x2618 = 189U;
	int64_t x2619 = INT64_MAX;
	uint8_t x2620 = 7U;
	int32_t t87 = 13930;

	t87 = (((x2617/x2618)<x2619)>>x2620);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x2641 = INT8_MAX;
	volatile int16_t x2642 = 4;
	static int8_t x2643 = INT8_MIN;
	int32_t t88 = 93;

	t88 = (((x2641/x2642)<x2643)>>x2644);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2689 = INT16_MIN;
	int8_t x2690 = -1;
	int8_t x2691 = INT8_MAX;
	uint8_t x2692 = 1U;
	volatile int32_t t89 = 3120;

	t89 = (((x2689/x2690)<x2691)>>x2692);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2705 = UINT64_MAX;
	int16_t x2706 = INT16_MIN;
	uint64_t x2707 = UINT64_MAX;
	static uint8_t x2708 = 7U;
	int32_t t90 = -124947;

	t90 = (((x2705/x2706)<x2707)>>x2708);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2741 = -1;
	int64_t x2742 = 621LL;
	volatile int64_t x2743 = 0LL;
	int8_t x2744 = 1;

	t91 = (((x2741/x2742)<x2743)>>x2744);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2745 = -1;
	int32_t x2746 = -1;
	int64_t x2747 = INT64_MIN;
	uint16_t x2748 = 11U;
	int32_t t92 = -1023062513;

	t92 = (((x2745/x2746)<x2747)>>x2748);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2783 = -10903838;
	static int16_t x2784 = 3;
	int32_t t93 = -1581;

	t93 = (((x2781/x2782)<x2783)>>x2784);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2785 = UINT32_MAX;
	int8_t x2787 = INT8_MAX;
	uint8_t x2788 = 28U;
	static volatile int32_t t94 = -1;

	t94 = (((x2785/x2786)<x2787)>>x2788);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2833 = INT8_MAX;
	static int64_t x2834 = INT64_MIN;
	uint8_t x2836 = 14U;
	int32_t t95 = -7533021;

	t95 = (((x2833/x2834)<x2835)>>x2836);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2850 = UINT8_MAX;
	uint8_t x2851 = UINT8_MAX;
	volatile uint64_t x2852 = 0LLU;
	int32_t t96 = -151657;

	t96 = (((x2849/x2850)<x2851)>>x2852);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3013 = 27690379429918LLU;
	static int64_t x3014 = 7902567319981LL;
	int32_t x3015 = INT32_MAX;
	uint32_t x3016 = 2U;
	volatile int32_t t97 = -6;

	t97 = (((x3013/x3014)<x3015)>>x3016);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3077 = INT8_MAX;
	volatile int8_t x3078 = -1;
	int64_t x3079 = 1824981552524LL;
	int32_t t98 = -37801;

	t98 = (((x3077/x3078)<x3079)>>x3080);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3098 = 172509830434200LLU;
	int32_t x3099 = 13697;
	uint64_t x3100 = 13LLU;
	int32_t t99 = 241558;

	t99 = (((x3097/x3098)<x3099)>>x3100);

	if (t99 != 0) { NG(); } else { ; }
	
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

