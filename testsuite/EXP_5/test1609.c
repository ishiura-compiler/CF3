#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x109 = 31839189;
volatile uint16_t x110 = UINT16_MAX;
int32_t x111 = -1;
int32_t x114 = INT32_MIN;
uint8_t x116 = 9U;
int32_t t2 = -907;
volatile uint32_t x186 = UINT32_MAX;
int32_t x187 = 111;
int64_t x191 = INT64_MAX;
uint8_t x231 = UINT8_MAX;
int8_t x318 = INT8_MAX;
int32_t x327 = INT32_MAX;
int32_t x370 = INT32_MAX;
int16_t x371 = INT16_MAX;
int32_t t9 = 13999;
uint32_t x373 = UINT32_MAX;
uint16_t x380 = 1U;
int8_t x477 = -13;
int8_t x481 = -1;
volatile int32_t t15 = 587438;
int32_t x485 = -7602;
uint32_t x486 = 1643698U;
int32_t x520 = 2;
static volatile uint32_t x566 = 3085U;
uint16_t x568 = 21U;
static volatile int32_t x609 = -1;
int64_t x611 = INT64_MIN;
static uint8_t x626 = 5U;
uint16_t x671 = 201U;
uint8_t x672 = 14U;
uint8_t x720 = 25U;
volatile int32_t t25 = -35104970;
volatile int16_t x774 = INT16_MIN;
uint8_t x776 = 0U;
static int8_t x793 = INT8_MIN;
static int32_t x794 = 12497;
int32_t t28 = -30166;
int16_t x813 = INT16_MIN;
volatile int32_t t29 = 257;
int64_t x858 = INT64_MIN;
volatile int32_t t30 = 630;
int64_t x862 = INT64_MAX;
int32_t t31 = 32417;
volatile uint32_t x907 = 57U;
uint16_t x908 = 3U;
static int8_t x932 = 1;
volatile int32_t t33 = 0;
int8_t x981 = INT8_MIN;
int32_t t34 = 1;
static uint64_t x992 = 4LLU;
int64_t x1025 = INT64_MAX;
uint8_t x1043 = 2U;
static int32_t t37 = 132667968;
int8_t x1088 = 11;
int64_t x1089 = -1LL;
int32_t t40 = -2;
int64_t x1258 = INT64_MIN;
uint64_t x1289 = 96361LLU;
static volatile int32_t x1329 = INT32_MIN;
static volatile int8_t x1331 = INT8_MAX;
volatile uint16_t x1376 = 1U;
volatile int8_t x1391 = INT8_MIN;
int8_t x1421 = 4;
volatile int32_t x1423 = INT32_MIN;
static volatile int32_t t50 = 2;
static uint8_t x1448 = 1U;
static int32_t t51 = -119861;
uint8_t x1554 = 2U;
volatile int32_t t54 = -8705;
static int8_t x1616 = 1;
int8_t x1649 = INT8_MAX;
uint16_t x1652 = 0U;
int32_t t57 = -30800328;
uint8_t x1696 = 0U;
uint16_t x1732 = 6U;
int16_t x1776 = 3;
static int32_t t61 = -475985;
int32_t t65 = 10306;
int32_t x1973 = INT32_MIN;
volatile int32_t t67 = -1090578;
static volatile uint16_t x1996 = 11U;
volatile uint32_t x2073 = 2U;
int32_t x2135 = INT32_MIN;
static uint32_t x2136 = 2U;
int32_t t75 = 232478043;
volatile int8_t x2257 = -1;
int32_t t77 = -236;
volatile int32_t t78 = -1;
int32_t t79 = -58979004;
uint8_t x2474 = 1U;
volatile int32_t t80 = -17472569;
int8_t x2555 = 0;
uint64_t x2579 = 686471760939770552LLU;
int32_t x2613 = INT32_MIN;
volatile int32_t t85 = -32;
int64_t x2642 = INT64_MAX;
uint16_t x2811 = 108U;
static int8_t x3018 = -1;
int32_t t91 = -295145;
volatile int32_t t96 = 5;
int32_t x3362 = INT32_MIN;


void f0(void) {
	uint8_t x21 = 1U;
	static int64_t x22 = -5LL;
	static int8_t x23 = INT8_MAX;
	int16_t x24 = 6;
	static volatile int32_t t0 = -19210;

	t0 = (x21<=((x22<=x23)>>x24));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x112 = 9U;
	volatile int32_t t1 = -7200;

	t1 = (x109<=((x110<=x111)>>x112));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x113 = -1LL;
	uint64_t x115 = 36LLU;

	t2 = (x113<=((x114<=x115)>>x116));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x177 = UINT64_MAX;
	int64_t x178 = 778028090429280015LL;
	volatile int16_t x179 = 737;
	volatile uint64_t x180 = 6LLU;
	static volatile int32_t t3 = 242;

	t3 = (x177<=((x178<=x179)>>x180));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x185 = -1;
	volatile int64_t x188 = 7LL;
	int32_t t4 = -225745;

	t4 = (x185<=((x186<=x187)>>x188));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = -1;
	static volatile int16_t x192 = 1;
	static int32_t t5 = 62178;

	t5 = (x189<=((x190<=x191)>>x192));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x229 = 105926U;
	uint8_t x230 = 0U;
	uint8_t x232 = 3U;
	int32_t t6 = -483796312;

	t6 = (x229<=((x230<=x231)>>x232));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x317 = 0U;
	int16_t x319 = -8912;
	uint64_t x320 = 24LLU;
	volatile int32_t t7 = 77860;

	t7 = (x317<=((x318<=x319)>>x320));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = 1372267245LL;
	static uint8_t x328 = 2U;
	int32_t t8 = -6;

	t8 = (x325<=((x326<=x327)>>x328));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x369 = 8159U;
	uint32_t x372 = 14U;

	t9 = (x369<=((x370<=x371)>>x372));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x374 = INT64_MIN;
	static uint8_t x375 = 88U;
	static int8_t x376 = 9;
	int32_t t10 = -1420766;

	t10 = (x373<=((x374<=x375)>>x376));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x377 = UINT64_MAX;
	int8_t x378 = -1;
	static uint32_t x379 = 65572U;
	int32_t t11 = 259030063;

	t11 = (x377<=((x378<=x379)>>x380));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x429 = INT32_MAX;
	volatile int16_t x430 = -129;
	int8_t x431 = INT8_MIN;
	volatile int8_t x432 = 7;
	int32_t t12 = 3;

	t12 = (x429<=((x430<=x431)>>x432));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x457 = -1;
	int32_t x458 = INT32_MAX;
	static int32_t x459 = INT32_MIN;
	uint16_t x460 = 2U;
	int32_t t13 = 7653884;

	t13 = (x457<=((x458<=x459)>>x460));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x478 = INT16_MAX;
	uint64_t x479 = UINT64_MAX;
	int8_t x480 = 28;
	static volatile int32_t t14 = 0;

	t14 = (x477<=((x478<=x479)>>x480));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x482 = UINT16_MAX;
	volatile int64_t x483 = INT64_MIN;
	volatile int8_t x484 = 0;

	t15 = (x481<=((x482<=x483)>>x484));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x487 = 0;
	uint8_t x488 = 3U;
	int32_t t16 = -20564209;

	t16 = (x485<=((x486<=x487)>>x488));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x517 = INT64_MIN;
	uint64_t x518 = UINT64_MAX;
	static volatile int8_t x519 = 59;
	static int32_t t17 = -5366;

	t17 = (x517<=((x518<=x519)>>x520));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x565 = 4020585U;
	static uint16_t x567 = 0U;
	volatile int32_t t18 = 489646405;

	t18 = (x565<=((x566<=x567)>>x568));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x610 = 26455U;
	volatile uint8_t x612 = 0U;
	volatile int32_t t19 = 3098472;

	t19 = (x609<=((x610<=x611)>>x612));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x617 = 7841006765LLU;
	int32_t x618 = 1993;
	int32_t x619 = -44732;
	static uint8_t x620 = 6U;
	volatile int32_t t20 = -1;

	t20 = (x617<=((x618<=x619)>>x620));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x625 = -34549LL;
	uint8_t x627 = 0U;
	uint16_t x628 = 0U;
	volatile int32_t t21 = -16;

	t21 = (x625<=((x626<=x627)>>x628));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x665 = 0U;
	int64_t x666 = 2848477031901225LL;
	int8_t x667 = 1;
	uint8_t x668 = 6U;
	volatile int32_t t22 = 11;

	t22 = (x665<=((x666<=x667)>>x668));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x669 = INT8_MIN;
	volatile uint64_t x670 = UINT64_MAX;
	int32_t t23 = -1558192;

	t23 = (x669<=((x670<=x671)>>x672));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x717 = 4749510;
	volatile int8_t x718 = -1;
	int16_t x719 = 0;
	int32_t t24 = 686223;

	t24 = (x717<=((x718<=x719)>>x720));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x741 = INT16_MAX;
	volatile int16_t x742 = -30;
	int8_t x743 = INT8_MAX;
	uint32_t x744 = 12U;

	t25 = (x741<=((x742<=x743)>>x744));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x773 = -206531619378459749LL;
	int8_t x775 = 1;
	volatile int32_t t26 = -384480033;

	t26 = (x773<=((x774<=x775)>>x776));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x789 = INT32_MAX;
	static int64_t x790 = INT64_MIN;
	static volatile uint64_t x791 = 442287127505792LLU;
	uint16_t x792 = 2U;
	static int32_t t27 = 6201;

	t27 = (x789<=((x790<=x791)>>x792));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x795 = 920072685036066835LL;
	uint64_t x796 = 0LLU;

	t28 = (x793<=((x794<=x795)>>x796));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x814 = -1;
	static volatile int32_t x815 = -1;
	static volatile int8_t x816 = 4;

	t29 = (x813<=((x814<=x815)>>x816));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x857 = UINT8_MAX;
	int16_t x859 = -1;
	static uint64_t x860 = 5LLU;

	t30 = (x857<=((x858<=x859)>>x860));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x861 = 460969110LLU;
	static int8_t x863 = INT8_MAX;
	int16_t x864 = 1;

	t31 = (x861<=((x862<=x863)>>x864));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x905 = INT64_MIN;
	uint32_t x906 = 925884602U;
	int32_t t32 = -6301666;

	t32 = (x905<=((x906<=x907)>>x908));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x929 = INT64_MIN;
	int8_t x930 = -1;
	uint16_t x931 = UINT16_MAX;

	t33 = (x929<=((x930<=x931)>>x932));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x982 = 14;
	uint8_t x983 = UINT8_MAX;
	volatile uint8_t x984 = 2U;

	t34 = (x981<=((x982<=x983)>>x984));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x989 = -1LL;
	uint64_t x990 = 1LLU;
	int16_t x991 = 1;
	static int32_t t35 = 880230336;

	t35 = (x989<=((x990<=x991)>>x992));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1026 = -768579LL;
	uint32_t x1027 = UINT32_MAX;
	uint8_t x1028 = 7U;
	int32_t t36 = 512680;

	t36 = (x1025<=((x1026<=x1027)>>x1028));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1041 = INT64_MIN;
	uint8_t x1042 = 2U;
	int16_t x1044 = 0;

	t37 = (x1041<=((x1042<=x1043)>>x1044));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1085 = -1;
	uint16_t x1086 = UINT16_MAX;
	int32_t x1087 = -234334767;
	volatile int32_t t38 = 421;

	t38 = (x1085<=((x1086<=x1087)>>x1088));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1090 = -1;
	static int8_t x1091 = INT8_MIN;
	uint8_t x1092 = 1U;
	volatile int32_t t39 = -346;

	t39 = (x1089<=((x1090<=x1091)>>x1092));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1113 = INT32_MAX;
	int16_t x1114 = 441;
	static int32_t x1115 = INT32_MAX;
	volatile uint8_t x1116 = 1U;

	t40 = (x1113<=((x1114<=x1115)>>x1116));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1217 = INT8_MAX;
	int8_t x1218 = -1;
	int16_t x1219 = -1;
	uint32_t x1220 = 25U;
	volatile int32_t t41 = 39803;

	t41 = (x1217<=((x1218<=x1219)>>x1220));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1257 = 0U;
	uint32_t x1259 = 5U;
	int8_t x1260 = 29;
	int32_t t42 = -75146803;

	t42 = (x1257<=((x1258<=x1259)>>x1260));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x1290 = 4U;
	int8_t x1291 = INT8_MIN;
	uint16_t x1292 = 7U;
	static volatile int32_t t43 = 16961084;

	t43 = (x1289<=((x1290<=x1291)>>x1292));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1293 = -1;
	static uint32_t x1294 = 189U;
	int32_t x1295 = -5;
	volatile uint32_t x1296 = 27U;
	int32_t t44 = 5;

	t44 = (x1293<=((x1294<=x1295)>>x1296));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1305 = 16017U;
	uint16_t x1306 = UINT16_MAX;
	uint64_t x1307 = 483755LLU;
	int8_t x1308 = 7;
	int32_t t45 = 145100;

	t45 = (x1305<=((x1306<=x1307)>>x1308));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x1330 = INT32_MAX;
	uint16_t x1332 = 1U;
	volatile int32_t t46 = 16;

	t46 = (x1329<=((x1330<=x1331)>>x1332));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1369 = 1LL;
	static int16_t x1370 = 5;
	static int32_t x1371 = INT32_MIN;
	uint8_t x1372 = 1U;
	static volatile int32_t t47 = -6012;

	t47 = (x1369<=((x1370<=x1371)>>x1372));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1373 = INT8_MIN;
	volatile uint64_t x1374 = 629997542LLU;
	volatile uint64_t x1375 = 1493077457097LLU;
	volatile int32_t t48 = -31295;

	t48 = (x1373<=((x1374<=x1375)>>x1376));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x1389 = UINT64_MAX;
	volatile uint16_t x1390 = 2029U;
	uint8_t x1392 = 6U;
	static volatile int32_t t49 = -16391745;

	t49 = (x1389<=((x1390<=x1391)>>x1392));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x1422 = UINT32_MAX;
	static volatile uint8_t x1424 = 13U;

	t50 = (x1421<=((x1422<=x1423)>>x1424));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1445 = INT8_MIN;
	int32_t x1446 = INT32_MAX;
	int8_t x1447 = 5;

	t51 = (x1445<=((x1446<=x1447)>>x1448));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x1553 = 1833808463U;
	static volatile int64_t x1555 = INT64_MAX;
	uint8_t x1556 = 1U;
	volatile int32_t t52 = 2992;

	t52 = (x1553<=((x1554<=x1555)>>x1556));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1585 = INT16_MAX;
	static int16_t x1586 = INT16_MIN;
	static uint32_t x1587 = 1U;
	static int16_t x1588 = 13;
	int32_t t53 = 11040;

	t53 = (x1585<=((x1586<=x1587)>>x1588));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x1597 = INT32_MAX;
	volatile int16_t x1598 = 1;
	int32_t x1599 = 30756336;
	volatile uint64_t x1600 = 1LLU;

	t54 = (x1597<=((x1598<=x1599)>>x1600));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1613 = 135670489U;
	int32_t x1614 = INT32_MAX;
	int32_t x1615 = INT32_MIN;
	static int32_t t55 = -11;

	t55 = (x1613<=((x1614<=x1615)>>x1616));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1650 = 21U;
	uint32_t x1651 = 534155839U;
	volatile int32_t t56 = 555148;

	t56 = (x1649<=((x1650<=x1651)>>x1652));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1673 = 5U;
	int64_t x1674 = 1034102640647411LL;
	int64_t x1675 = -28544519361LL;
	uint8_t x1676 = 26U;

	t57 = (x1673<=((x1674<=x1675)>>x1676));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x1693 = INT16_MAX;
	int16_t x1694 = 0;
	volatile int8_t x1695 = INT8_MIN;
	static volatile int32_t t58 = 213;

	t58 = (x1693<=((x1694<=x1695)>>x1696));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1729 = UINT16_MAX;
	uint64_t x1730 = UINT64_MAX;
	volatile uint32_t x1731 = 32847U;
	static int32_t t59 = 1;

	t59 = (x1729<=((x1730<=x1731)>>x1732));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1773 = -1;
	static int16_t x1774 = -1957;
	uint64_t x1775 = 14639677753LLU;
	int32_t t60 = 1;

	t60 = (x1773<=((x1774<=x1775)>>x1776));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1825 = -1;
	static int32_t x1826 = INT32_MAX;
	uint16_t x1827 = 13U;
	volatile uint8_t x1828 = 7U;

	t61 = (x1825<=((x1826<=x1827)>>x1828));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1833 = -1;
	uint8_t x1834 = 6U;
	int16_t x1835 = INT16_MIN;
	int8_t x1836 = 4;
	int32_t t62 = -314;

	t62 = (x1833<=((x1834<=x1835)>>x1836));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x1885 = 463713115U;
	int16_t x1886 = -114;
	uint16_t x1887 = 5738U;
	static int32_t x1888 = 8;
	int32_t t63 = -41;

	t63 = (x1885<=((x1886<=x1887)>>x1888));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1913 = INT16_MIN;
	int8_t x1914 = INT8_MAX;
	int16_t x1915 = INT16_MIN;
	uint8_t x1916 = 2U;
	int32_t t64 = -205;

	t64 = (x1913<=((x1914<=x1915)>>x1916));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x1941 = -1;
	int64_t x1942 = INT64_MIN;
	int32_t x1943 = -76;
	uint64_t x1944 = 0LLU;

	t65 = (x1941<=((x1942<=x1943)>>x1944));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1949 = INT32_MIN;
	int64_t x1950 = INT64_MIN;
	int8_t x1951 = INT8_MIN;
	static uint8_t x1952 = 19U;
	int32_t t66 = 1;

	t66 = (x1949<=((x1950<=x1951)>>x1952));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1974 = INT16_MIN;
	int16_t x1975 = INT16_MIN;
	uint8_t x1976 = 1U;

	t67 = (x1973<=((x1974<=x1975)>>x1976));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1993 = INT8_MIN;
	uint8_t x1994 = 13U;
	volatile uint64_t x1995 = 304090891853963098LLU;
	volatile int32_t t68 = 409;

	t68 = (x1993<=((x1994<=x1995)>>x1996));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2021 = UINT8_MAX;
	volatile int64_t x2022 = INT64_MIN;
	int64_t x2023 = -51667397006LL;
	uint8_t x2024 = 30U;
	volatile int32_t t69 = 49380;

	t69 = (x2021<=((x2022<=x2023)>>x2024));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2029 = INT8_MIN;
	uint32_t x2030 = 2373U;
	int32_t x2031 = 50;
	uint32_t x2032 = 7U;
	static volatile int32_t t70 = 45;

	t70 = (x2029<=((x2030<=x2031)>>x2032));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2074 = 2433155019072762388LLU;
	uint64_t x2075 = 614223953690850499LLU;
	uint8_t x2076 = 1U;
	int32_t t71 = 0;

	t71 = (x2073<=((x2074<=x2075)>>x2076));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2081 = -1;
	int16_t x2082 = INT16_MIN;
	uint16_t x2083 = 3467U;
	volatile int8_t x2084 = 1;
	volatile int32_t t72 = -2943465;

	t72 = (x2081<=((x2082<=x2083)>>x2084));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2093 = 0;
	uint16_t x2094 = UINT16_MAX;
	int64_t x2095 = -2921LL;
	uint8_t x2096 = 1U;
	int32_t t73 = -282187;

	t73 = (x2093<=((x2094<=x2095)>>x2096));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x2097 = INT8_MIN;
	int64_t x2098 = -1414381LL;
	int16_t x2099 = INT16_MIN;
	volatile uint32_t x2100 = 1U;
	int32_t t74 = -74201;

	t74 = (x2097<=((x2098<=x2099)>>x2100));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2133 = INT16_MIN;
	int64_t x2134 = INT64_MIN;

	t75 = (x2133<=((x2134<=x2135)>>x2136));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2258 = 87653;
	uint32_t x2259 = 4509106U;
	int8_t x2260 = 1;
	int32_t t76 = 3322;

	t76 = (x2257<=((x2258<=x2259)>>x2260));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2337 = -1;
	int64_t x2338 = 43870817LL;
	int64_t x2339 = -1LL;
	volatile uint8_t x2340 = 13U;

	t77 = (x2337<=((x2338<=x2339)>>x2340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2361 = 1U;
	int32_t x2362 = -1;
	int16_t x2363 = 5;
	volatile int8_t x2364 = 0;

	t78 = (x2361<=((x2362<=x2363)>>x2364));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2413 = INT32_MIN;
	uint8_t x2414 = 31U;
	int8_t x2415 = -13;
	uint32_t x2416 = 0U;

	t79 = (x2413<=((x2414<=x2415)>>x2416));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x2473 = UINT64_MAX;
	int8_t x2475 = -1;
	static volatile uint8_t x2476 = 1U;

	t80 = (x2473<=((x2474<=x2475)>>x2476));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x2553 = INT8_MAX;
	uint8_t x2554 = UINT8_MAX;
	static uint16_t x2556 = 1U;
	volatile int32_t t81 = -213961427;

	t81 = (x2553<=((x2554<=x2555)>>x2556));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2577 = INT8_MIN;
	int32_t x2578 = -16767;
	static int16_t x2580 = 30;
	int32_t t82 = -472;

	t82 = (x2577<=((x2578<=x2579)>>x2580));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2593 = -1;
	uint8_t x2594 = UINT8_MAX;
	uint64_t x2595 = UINT64_MAX;
	int8_t x2596 = 1;
	int32_t t83 = 0;

	t83 = (x2593<=((x2594<=x2595)>>x2596));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x2597 = INT32_MAX;
	uint8_t x2598 = 26U;
	uint64_t x2599 = 9184297127313LLU;
	int8_t x2600 = 19;
	int32_t t84 = 1;

	t84 = (x2597<=((x2598<=x2599)>>x2600));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2614 = 1U;
	uint16_t x2615 = 222U;
	int32_t x2616 = 0;

	t85 = (x2613<=((x2614<=x2615)>>x2616));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x2641 = 1U;
	static volatile int32_t x2643 = INT32_MIN;
	uint32_t x2644 = 0U;
	volatile int32_t t86 = 123399825;

	t86 = (x2641<=((x2642<=x2643)>>x2644));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2809 = INT8_MAX;
	uint64_t x2810 = UINT64_MAX;
	volatile int8_t x2812 = 14;
	int32_t t87 = -27;

	t87 = (x2809<=((x2810<=x2811)>>x2812));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2837 = 10530U;
	static int32_t x2838 = 180082;
	static int64_t x2839 = INT64_MAX;
	uint8_t x2840 = 13U;
	volatile int32_t t88 = 115601;

	t88 = (x2837<=((x2838<=x2839)>>x2840));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2985 = -1;
	int16_t x2986 = INT16_MAX;
	int64_t x2987 = -8103764564242623LL;
	uint8_t x2988 = 0U;
	int32_t t89 = 6;

	t89 = (x2985<=((x2986<=x2987)>>x2988));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x3017 = -1;
	int8_t x3019 = INT8_MIN;
	uint16_t x3020 = 14U;
	int32_t t90 = -18;

	t90 = (x3017<=((x3018<=x3019)>>x3020));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x3065 = INT16_MIN;
	static volatile int16_t x3066 = INT16_MIN;
	uint32_t x3067 = 135U;
	int8_t x3068 = 7;

	t91 = (x3065<=((x3066<=x3067)>>x3068));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3073 = INT8_MIN;
	int16_t x3074 = 0;
	uint64_t x3075 = 12LLU;
	static uint16_t x3076 = 11U;
	volatile int32_t t92 = 365816;

	t92 = (x3073<=((x3074<=x3075)>>x3076));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x3113 = INT32_MAX;
	volatile int8_t x3114 = -56;
	static int64_t x3115 = INT64_MIN;
	uint8_t x3116 = 15U;
	int32_t t93 = 458754075;

	t93 = (x3113<=((x3114<=x3115)>>x3116));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3149 = -1LL;
	uint8_t x3150 = 5U;
	static int16_t x3151 = -1;
	int8_t x3152 = 1;
	volatile int32_t t94 = 9;

	t94 = (x3149<=((x3150<=x3151)>>x3152));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3245 = 598U;
	uint16_t x3246 = 94U;
	int32_t x3247 = -13180;
	int16_t x3248 = 0;
	int32_t t95 = 528;

	t95 = (x3245<=((x3246<=x3247)>>x3248));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3309 = INT32_MAX;
	uint8_t x3310 = 15U;
	uint16_t x3311 = 0U;
	uint8_t x3312 = 1U;

	t96 = (x3309<=((x3310<=x3311)>>x3312));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x3361 = INT16_MIN;
	int64_t x3363 = INT64_MIN;
	volatile int16_t x3364 = 7;
	volatile int32_t t97 = 1;

	t97 = (x3361<=((x3362<=x3363)>>x3364));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x3365 = 53330LLU;
	int8_t x3366 = 1;
	static int8_t x3367 = INT8_MAX;
	uint8_t x3368 = 1U;
	int32_t t98 = -86812;

	t98 = (x3365<=((x3366<=x3367)>>x3368));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x3457 = INT8_MIN;
	int8_t x3458 = INT8_MIN;
	uint32_t x3459 = 5575954U;
	uint8_t x3460 = 0U;
	volatile int32_t t99 = 214839;

	t99 = (x3457<=((x3458<=x3459)>>x3460));

	if (t99 != 1) { NG(); } else { ; }
	
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

