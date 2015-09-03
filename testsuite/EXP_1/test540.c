#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x34 = INT8_MIN;
static int64_t t2 = 963797749099540LL;
int64_t t3 = 328358LL;
uint16_t x80 = 1U;
int64_t t7 = 96452LL;
static int16_t x101 = -1;
volatile int64_t x134 = INT64_MAX;
volatile int16_t x164 = 1;
uint64_t t10 = 11139353LLU;
uint8_t x181 = 126U;
int64_t x187 = INT64_MAX;
volatile uint8_t x188 = 4U;
static uint32_t t13 = 139502U;
int64_t t14 = -452413563LL;
static int16_t x258 = -2481;
uint16_t x291 = 1U;
int32_t t16 = -620944;
uint8_t x364 = 2U;
static uint32_t x413 = 12777562U;
int32_t x414 = INT32_MAX;
int8_t x416 = 1;
uint8_t x453 = UINT8_MAX;
int16_t x454 = -3;
int16_t x477 = 81;
int32_t x478 = INT32_MAX;
volatile uint64_t t22 = 1647085740LLU;
uint64_t x589 = UINT64_MAX;
uint8_t x590 = 10U;
int64_t x591 = INT64_MIN;
int16_t x647 = INT16_MAX;
uint8_t x648 = 4U;
int8_t x663 = -1;
static uint32_t t27 = 373535929U;
int64_t x881 = -930549015LL;
int32_t x884 = 17;
int8_t x969 = INT8_MIN;
uint32_t x972 = 14U;
int64_t x1113 = -1LL;
int16_t x1115 = INT16_MAX;
static uint16_t x1116 = 0U;
volatile uint64_t t35 = 773889LLU;
volatile int64_t x1225 = -1LL;
int8_t x1226 = 4;
volatile int64_t t41 = -34151437897LL;
static uint64_t t43 = 16878092847862369LLU;
uint64_t x1574 = 35595LLU;
int16_t x1576 = 23;
int8_t x1580 = 1;
static int32_t x1588 = 3;
static uint64_t x1642 = UINT64_MAX;
uint64_t x1715 = 336443500420LLU;
int8_t x1773 = INT8_MAX;
uint64_t x1774 = 2317LLU;
static volatile int32_t x1785 = 960992;
static volatile uint64_t x1786 = UINT64_MAX;
int16_t x1788 = 0;
int64_t x1878 = -1LL;
static volatile uint64_t x1884 = 2LLU;
uint32_t x2007 = 1173692U;
volatile uint8_t x2045 = 8U;
static int8_t x2089 = 40;
volatile int8_t x2091 = 51;
volatile uint32_t x2161 = 6482U;
uint32_t x2257 = 1103U;
int64_t x2259 = -1LL;
uint32_t x2298 = 284346U;
int32_t x2318 = INT32_MIN;
int64_t x2353 = INT64_MAX;
int64_t x2354 = 7261415LL;
int16_t x2356 = 57;
int8_t x2431 = INT8_MIN;
uint16_t x2716 = 19U;
int64_t x2866 = -33673025627152818LL;
volatile int8_t x2868 = 9;
static int16_t x3060 = 26;
static uint64_t x3067 = 587LLU;
int8_t x3140 = 14;
uint64_t t80 = 0LLU;
static int32_t x3158 = INT32_MAX;
uint16_t x3205 = 74U;
int64_t x3207 = INT64_MAX;
int64_t x3267 = -1LL;
int32_t t86 = -1;
int16_t x3450 = -970;
static uint64_t x3478 = 1265991194369LLU;
uint16_t x3488 = 6U;
int64_t x3527 = -1LL;
uint16_t x3532 = 0U;
volatile uint64_t t95 = 1889089177959LLU;
int16_t x3560 = 0;
volatile int32_t x3683 = -1;
int32_t x3686 = INT32_MAX;
uint16_t x3687 = 3424U;


void f0(void) {
	uint8_t x29 = 110U;
	int32_t x30 = INT32_MAX;
	int32_t x31 = 2642;
	uint64_t x32 = 0LLU;
	volatile int32_t t0 = -96;

	t0 = (((x29/x30)*x31)>>x32);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = 59;
	static volatile uint64_t t1 = 1253295583760559LLU;

	t1 = (((x33/x34)*x35)>>x36);

	if (t1 != 31LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x41 = 1U;
	static volatile int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	uint8_t x44 = 6U;

	t2 = (((x41/x42)*x43)>>x44);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x45 = -1LL;
	static uint8_t x46 = 8U;
	int64_t x47 = INT64_MIN;
	volatile uint32_t x48 = 0U;

	t3 = (((x45/x46)*x47)>>x48);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x53 = 820510U;
	uint8_t x54 = UINT8_MAX;
	uint16_t x55 = 6U;
	static int16_t x56 = 1;
	volatile uint32_t t4 = 718216883U;

	t4 = (((x53/x54)*x55)>>x56);

	if (t4 != 9651U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x61 = INT32_MIN;
	static volatile int8_t x62 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;
	volatile uint8_t x64 = 2U;
	uint64_t t5 = 136260433006014LLU;

	t5 = (((x61/x62)*x63)>>x64);

	if (t5 != 4611686018423193600LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x77 = 1645LL;
	volatile uint16_t x78 = 6576U;
	volatile int64_t x79 = INT64_MAX;
	static volatile int64_t t6 = 1LL;

	t6 = (((x77/x78)*x79)>>x80);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x81 = INT64_MIN;
	static int8_t x82 = -54;
	static int16_t x83 = 0;
	uint16_t x84 = 30U;

	t7 = (((x81/x82)*x83)>>x84);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x102 = INT64_MIN;
	int16_t x103 = -1;
	int64_t x104 = 0LL;
	int64_t t8 = 143730873780LL;

	t8 = (((x101/x102)*x103)>>x104);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x133 = 256118498LL;
	int64_t x135 = 5763808786673353LL;
	int16_t x136 = 1;
	volatile int64_t t9 = 28LL;

	t9 = (((x133/x134)*x135)>>x136);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x161 = -16;
	uint64_t x162 = 1503239800LLU;
	uint8_t x163 = 44U;

	t10 = (((x161/x162)*x163)>>x164);

	if (t10 != 269969149032LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x182 = 65394LLU;
	int16_t x183 = INT16_MIN;
	int8_t x184 = 1;
	uint64_t t11 = 67681LLU;

	t11 = (((x181/x182)*x183)>>x184);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x185 = -1;
	static volatile int64_t x186 = INT64_MAX;
	volatile int64_t t12 = -206132LL;

	t12 = (((x185/x186)*x187)>>x188);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x205 = INT16_MIN;
	uint32_t x206 = 22U;
	uint8_t x207 = 36U;
	uint8_t x208 = 3U;

	t13 = (((x205/x206)*x207)>>x208);

	if (t13 != 341638420U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x241 = 44850LL;
	volatile uint32_t x242 = 52763U;
	int16_t x243 = INT16_MAX;
	uint8_t x244 = 4U;

	t14 = (((x241/x242)*x243)>>x244);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x257 = -3988;
	int64_t x259 = INT64_MAX;
	static volatile int8_t x260 = 13;
	volatile int64_t t15 = -92234LL;

	t15 = (((x257/x258)*x259)>>x260);

	if (t15 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x289 = 3U;
	int32_t x290 = INT32_MIN;
	uint8_t x292 = 4U;

	t16 = (((x289/x290)*x291)>>x292);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x293 = 10;
	uint32_t x294 = 482U;
	volatile int16_t x295 = INT16_MIN;
	uint16_t x296 = 2U;
	volatile uint32_t t17 = 12772U;

	t17 = (((x293/x294)*x295)>>x296);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x297 = -1;
	int16_t x298 = INT16_MIN;
	uint64_t x299 = 3LLU;
	int64_t x300 = 43LL;
	volatile uint64_t t18 = 1LLU;

	t18 = (((x297/x298)*x299)>>x300);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MIN;
	volatile int64_t x363 = -1LL;
	static volatile int64_t t19 = 63894152289132LL;

	t19 = (((x361/x362)*x363)>>x364);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x415 = INT32_MAX;
	static volatile uint32_t t20 = 2091449361U;

	t20 = (((x413/x414)*x415)>>x416);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x455 = 664485043888756LLU;
	static int8_t x456 = 1;
	uint64_t t21 = 3628LLU;

	t21 = (((x453/x454)*x455)>>x456);

	if (t21 != 9195131422489503678LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x479 = 81LLU;
	int64_t x480 = 3LL;

	t22 = (((x477/x478)*x479)>>x480);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x585 = INT8_MIN;
	int8_t x586 = -1;
	int16_t x587 = 170;
	int8_t x588 = 1;
	int32_t t23 = 1427;

	t23 = (((x585/x586)*x587)>>x588);

	if (t23 != 10880) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x592 = 0;
	volatile uint64_t t24 = 6202482518LLU;

	t24 = (((x589/x590)*x591)>>x592);

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x597 = 12;
	volatile int8_t x598 = INT8_MIN;
	volatile uint8_t x599 = UINT8_MAX;
	static uint8_t x600 = 1U;
	int32_t t25 = 22877414;

	t25 = (((x597/x598)*x599)>>x600);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x645 = 2U;
	static int64_t x646 = INT64_MIN;
	volatile int64_t t26 = -142078511132LL;

	t26 = (((x645/x646)*x647)>>x648);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x661 = 9U;
	uint16_t x662 = UINT16_MAX;
	uint8_t x664 = 24U;

	t27 = (((x661/x662)*x663)>>x664);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x677 = 53;
	int64_t x678 = INT64_MAX;
	int16_t x679 = INT16_MAX;
	uint8_t x680 = 47U;
	static volatile int64_t t28 = -5LL;

	t28 = (((x677/x678)*x679)>>x680);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x737 = -4713;
	static volatile uint64_t x738 = 1463LLU;
	static int16_t x739 = -1;
	static uint8_t x740 = 15U;
	static volatile uint64_t t29 = 7678050087132LLU;

	t29 = (((x737/x738)*x739)>>x740);

	if (t29 != 562565161928884LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x882 = 3255250755428557LL;
	int16_t x883 = 0;
	volatile int64_t t30 = -1159LL;

	t30 = (((x881/x882)*x883)>>x884);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x970 = INT64_MAX;
	int32_t x971 = INT32_MIN;
	volatile int64_t t31 = 13412089LL;

	t31 = (((x969/x970)*x971)>>x972);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1077 = INT16_MIN;
	volatile uint16_t x1078 = 6U;
	int8_t x1079 = INT8_MIN;
	uint8_t x1080 = 1U;
	int32_t t32 = 1130;

	t32 = (((x1077/x1078)*x1079)>>x1080);

	if (t32 != 349504) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1114 = INT64_MIN;
	volatile int64_t t33 = 20087102416065LL;

	t33 = (((x1113/x1114)*x1115)>>x1116);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1129 = INT32_MIN;
	static uint16_t x1130 = 3655U;
	int16_t x1131 = -1;
	uint16_t x1132 = 0U;
	static int32_t t34 = 112780610;

	t34 = (((x1129/x1130)*x1131)>>x1132);

	if (t34 != 587546) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1161 = UINT64_MAX;
	int64_t x1162 = -810265305918697661LL;
	int32_t x1163 = INT32_MIN;
	static uint8_t x1164 = 3U;

	t35 = (((x1161/x1162)*x1163)>>x1164);

	if (t35 != 2305843008945258496LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1227 = INT32_MIN;
	uint8_t x1228 = 0U;
	static volatile int64_t t36 = -47867305LL;

	t36 = (((x1225/x1226)*x1227)>>x1228);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1241 = 164;
	static uint32_t x1242 = 121U;
	int16_t x1243 = 2;
	volatile int32_t x1244 = 1;
	uint32_t t37 = 420750585U;

	t37 = (((x1241/x1242)*x1243)>>x1244);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x1257 = 5;
	static int16_t x1258 = INT16_MIN;
	int8_t x1259 = INT8_MIN;
	volatile uint16_t x1260 = 0U;
	volatile int32_t t38 = -2;

	t38 = (((x1257/x1258)*x1259)>>x1260);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1289 = INT16_MIN;
	uint64_t x1290 = 504519793097320LLU;
	uint64_t x1291 = 2LLU;
	static uint16_t x1292 = 31U;
	uint64_t t39 = 56501056582322LLU;

	t39 = (((x1289/x1290)*x1291)>>x1292);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1449 = 33U;
	uint32_t x1450 = 4U;
	uint64_t x1451 = UINT64_MAX;
	uint8_t x1452 = 9U;
	volatile uint64_t t40 = 1471307476806482705LLU;

	t40 = (((x1449/x1450)*x1451)>>x1452);

	if (t40 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1473 = -1;
	volatile int32_t x1474 = INT32_MAX;
	int64_t x1475 = -1LL;
	int8_t x1476 = 38;

	t41 = (((x1473/x1474)*x1475)>>x1476);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1485 = INT32_MIN;
	static uint16_t x1486 = UINT16_MAX;
	uint64_t x1487 = 1621971697LLU;
	uint8_t x1488 = 11U;
	volatile uint64_t t42 = 4802LLU;

	t42 = (((x1485/x1486)*x1487)>>x1488);

	if (t42 != 9007173303193840LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1533 = INT64_MIN;
	uint64_t x1534 = 795LLU;
	int16_t x1535 = INT16_MAX;
	static uint32_t x1536 = 7U;

	t43 = (((x1533/x1534)*x1535)>>x1536);

	if (t43 != 87647413125378863LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x1573 = UINT16_MAX;
	static uint8_t x1575 = 0U;
	uint64_t t44 = 1864964950228533LLU;

	t44 = (((x1573/x1574)*x1575)>>x1576);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1577 = UINT32_MAX;
	volatile uint8_t x1578 = UINT8_MAX;
	int32_t x1579 = -1;
	uint32_t t45 = 516281526U;

	t45 = (((x1577/x1578)*x1579)>>x1580);

	if (t45 != 2139062143U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1585 = 172;
	int8_t x1586 = INT8_MAX;
	uint16_t x1587 = 503U;
	volatile int32_t t46 = -5139228;

	t46 = (((x1585/x1586)*x1587)>>x1588);

	if (t46 != 62) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1617 = -30;
	static volatile uint64_t x1618 = UINT64_MAX;
	uint16_t x1619 = 2702U;
	volatile uint32_t x1620 = 1U;
	uint64_t t47 = 32657985LLU;

	t47 = (((x1617/x1618)*x1619)>>x1620);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1641 = 59U;
	uint64_t x1643 = 816810177366LLU;
	uint8_t x1644 = 3U;
	volatile uint64_t t48 = 1LLU;

	t48 = (((x1641/x1642)*x1643)>>x1644);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1713 = -1;
	int64_t x1714 = 18170621723092219LL;
	int8_t x1716 = 7;
	uint64_t t49 = 14105103369598258LLU;

	t49 = (((x1713/x1714)*x1715)>>x1716);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1775 = 314540U;
	int8_t x1776 = 1;
	volatile uint64_t t50 = 688346495LLU;

	t50 = (((x1773/x1774)*x1775)>>x1776);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1787 = -18;
	volatile uint64_t t51 = 52406081617LLU;

	t51 = (((x1785/x1786)*x1787)>>x1788);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1877 = 1U;
	volatile int16_t x1879 = INT16_MIN;
	uint16_t x1880 = 12U;
	volatile int64_t t52 = -31609537LL;

	t52 = (((x1877/x1878)*x1879)>>x1880);

	if (t52 != 8LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1881 = INT8_MAX;
	static volatile uint16_t x1882 = 219U;
	int32_t x1883 = INT32_MIN;
	int32_t t53 = 13590790;

	t53 = (((x1881/x1882)*x1883)>>x1884);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1909 = INT16_MAX;
	volatile int8_t x1910 = -1;
	uint64_t x1911 = 3439477LLU;
	uint8_t x1912 = 0U;
	static uint64_t t54 = 154431719922667080LLU;

	t54 = (((x1909/x1910)*x1911)>>x1912);

	if (t54 != 18446743961008208757LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2005 = UINT64_MAX;
	uint32_t x2006 = 247347852U;
	uint8_t x2008 = 1U;
	static volatile uint64_t t55 = 4250448828LLU;

	t55 = (((x2005/x2006)*x2007)>>x2008);

	if (t55 != 43765886321863706LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x2017 = -1;
	int64_t x2018 = -11780941243303764LL;
	volatile int64_t x2019 = INT64_MIN;
	int8_t x2020 = 1;
	int64_t t56 = 73142396840LL;

	t56 = (((x2017/x2018)*x2019)>>x2020);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2046 = INT16_MIN;
	volatile uint64_t x2047 = UINT64_MAX;
	uint8_t x2048 = 55U;
	uint64_t t57 = 456623190583071368LLU;

	t57 = (((x2045/x2046)*x2047)>>x2048);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2081 = -1;
	int64_t x2082 = -105931424084LL;
	static int16_t x2083 = INT16_MAX;
	int8_t x2084 = 3;
	static volatile int64_t t58 = 1976885LL;

	t58 = (((x2081/x2082)*x2083)>>x2084);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2090 = INT8_MIN;
	int8_t x2092 = 0;
	volatile int32_t t59 = -5817038;

	t59 = (((x2089/x2090)*x2091)>>x2092);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2137 = -3;
	int16_t x2138 = INT16_MIN;
	int64_t x2139 = INT64_MIN;
	static int8_t x2140 = 1;
	static int64_t t60 = -4198329LL;

	t60 = (((x2137/x2138)*x2139)>>x2140);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2153 = INT16_MIN;
	int32_t x2154 = -401;
	volatile uint32_t x2155 = UINT32_MAX;
	static int16_t x2156 = 1;
	volatile uint32_t t61 = 486775841U;

	t61 = (((x2153/x2154)*x2155)>>x2156);

	if (t61 != 2147483607U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x2162 = UINT32_MAX;
	uint64_t x2163 = 99338196LLU;
	uint8_t x2164 = 50U;
	static uint64_t t62 = 180431LLU;

	t62 = (((x2161/x2162)*x2163)>>x2164);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2241 = 398U;
	int8_t x2242 = INT8_MIN;
	int8_t x2243 = 44;
	volatile int32_t x2244 = 0;
	static uint32_t t63 = 360310094U;

	t63 = (((x2241/x2242)*x2243)>>x2244);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2245 = UINT16_MAX;
	uint32_t x2246 = 128592U;
	static int64_t x2247 = -19196809952LL;
	static uint16_t x2248 = 0U;
	volatile int64_t t64 = -96890203266743816LL;

	t64 = (((x2245/x2246)*x2247)>>x2248);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2258 = INT64_MAX;
	int16_t x2260 = 12;
	int64_t t65 = -18LL;

	t65 = (((x2257/x2258)*x2259)>>x2260);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2297 = 20U;
	uint64_t x2299 = UINT64_MAX;
	int8_t x2300 = 4;
	volatile uint64_t t66 = 150691299495303LLU;

	t66 = (((x2297/x2298)*x2299)>>x2300);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x2301 = 5U;
	int8_t x2302 = 1;
	volatile uint16_t x2303 = UINT16_MAX;
	uint16_t x2304 = 12U;
	static int32_t t67 = 184533;

	t67 = (((x2301/x2302)*x2303)>>x2304);

	if (t67 != 79) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2317 = -2326;
	static int64_t x2319 = INT64_MIN;
	volatile uint8_t x2320 = 4U;
	static int64_t t68 = -10098319544505166LL;

	t68 = (((x2317/x2318)*x2319)>>x2320);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x2355 = 9828462230594269LLU;
	volatile uint64_t t69 = 1342727689484LLU;

	t69 = (((x2353/x2354)*x2355)>>x2356);

	if (t69 != 45LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2357 = 3156U;
	int64_t x2358 = INT64_MAX;
	int16_t x2359 = -2;
	uint8_t x2360 = 10U;
	int64_t t70 = 118494075302064LL;

	t70 = (((x2357/x2358)*x2359)>>x2360);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2401 = INT32_MAX;
	uint32_t x2402 = UINT32_MAX;
	int8_t x2403 = INT8_MIN;
	int8_t x2404 = 1;
	volatile uint32_t t71 = 15798897U;

	t71 = (((x2401/x2402)*x2403)>>x2404);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2429 = -3;
	uint8_t x2430 = UINT8_MAX;
	uint8_t x2432 = 2U;
	static int32_t t72 = 62159523;

	t72 = (((x2429/x2430)*x2431)>>x2432);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2713 = 14;
	int64_t x2714 = -87890205213LL;
	int8_t x2715 = INT8_MAX;
	static int64_t t73 = -90750679144912119LL;

	t73 = (((x2713/x2714)*x2715)>>x2716);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2817 = INT16_MIN;
	uint32_t x2818 = 24020U;
	uint16_t x2819 = 1971U;
	uint8_t x2820 = 2U;
	static volatile uint32_t t74 = 300206U;

	t74 = (((x2817/x2818)*x2819)>>x2820);

	if (t74 != 88106656U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2865 = 62LLU;
	volatile int64_t x2867 = INT64_MIN;
	uint64_t t75 = 1LLU;

	t75 = (((x2865/x2866)*x2867)>>x2868);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x3005 = 1U;
	int64_t x3006 = 1205956629124304685LL;
	volatile uint16_t x3007 = 12U;
	int8_t x3008 = 48;
	int64_t t76 = 1221798975910LL;

	t76 = (((x3005/x3006)*x3007)>>x3008);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x3057 = INT8_MIN;
	int64_t x3058 = INT64_MIN;
	uint8_t x3059 = 3U;
	volatile int64_t t77 = 526661595322958LL;

	t77 = (((x3057/x3058)*x3059)>>x3060);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3065 = 14U;
	volatile int16_t x3066 = INT16_MIN;
	uint16_t x3068 = 62U;
	uint64_t t78 = 13828LLU;

	t78 = (((x3065/x3066)*x3067)>>x3068);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3129 = 2;
	int8_t x3130 = INT8_MAX;
	static uint16_t x3131 = 15U;
	uint32_t x3132 = 6U;
	static volatile int32_t t79 = 655;

	t79 = (((x3129/x3130)*x3131)>>x3132);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x3137 = 15316011976LLU;
	int16_t x3138 = INT16_MAX;
	uint64_t x3139 = 1894077527703LLU;

	t80 = (((x3137/x3138)*x3139)>>x3140);

	if (t80 != 54036353276151LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3157 = UINT64_MAX;
	int8_t x3159 = INT8_MAX;
	static uint8_t x3160 = 2U;
	uint64_t t81 = 727348643520172LLU;

	t81 = (((x3157/x3158)*x3159)>>x3160);

	if (t81 != 272730423423LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x3185 = INT32_MIN;
	static int64_t x3186 = INT64_MIN;
	int32_t x3187 = -65915;
	static uint8_t x3188 = 9U;
	volatile int64_t t82 = 34LL;

	t82 = (((x3185/x3186)*x3187)>>x3188);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3206 = INT64_MIN;
	int8_t x3208 = 3;
	int64_t t83 = 52790420609519LL;

	t83 = (((x3205/x3206)*x3207)>>x3208);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x3241 = -59;
	int32_t x3242 = INT32_MAX;
	uint16_t x3243 = 20U;
	int8_t x3244 = 0;
	int32_t t84 = -21268;

	t84 = (((x3241/x3242)*x3243)>>x3244);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x3265 = 956644706U;
	int8_t x3266 = INT8_MIN;
	uint8_t x3268 = 43U;
	int64_t t85 = -386811477LL;

	t85 = (((x3265/x3266)*x3267)>>x3268);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3297 = -1;
	int16_t x3298 = INT16_MAX;
	int16_t x3299 = 15;
	uint8_t x3300 = 0U;

	t86 = (((x3297/x3298)*x3299)>>x3300);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3301 = 11381U;
	int32_t x3302 = -1;
	static uint32_t x3303 = UINT32_MAX;
	uint32_t x3304 = 29U;
	static uint32_t t87 = 4633998U;

	t87 = (((x3301/x3302)*x3303)>>x3304);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x3357 = 15;
	int16_t x3358 = INT16_MIN;
	int64_t x3359 = -266076190202LL;
	int16_t x3360 = 10;
	static int64_t t88 = -1005497660660LL;

	t88 = (((x3357/x3358)*x3359)>>x3360);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x3389 = 5U;
	uint64_t x3390 = 3669LLU;
	static int16_t x3391 = INT16_MAX;
	int8_t x3392 = 5;
	uint64_t t89 = 1307134402LLU;

	t89 = (((x3389/x3390)*x3391)>>x3392);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x3449 = INT16_MAX;
	int8_t x3451 = -1;
	static uint16_t x3452 = 1U;
	static volatile int32_t t90 = 1071931904;

	t90 = (((x3449/x3450)*x3451)>>x3452);

	if (t90 != 16) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3469 = 68962;
	int64_t x3470 = 14849589960LL;
	int8_t x3471 = INT8_MIN;
	volatile uint16_t x3472 = 4U;
	int64_t t91 = -11LL;

	t91 = (((x3469/x3470)*x3471)>>x3472);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3477 = INT64_MIN;
	volatile int16_t x3479 = 31;
	volatile int8_t x3480 = 6;
	static uint64_t t92 = 642330LLU;

	t92 = (((x3477/x3478)*x3479)>>x3480);

	if (t92 != 3528911LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x3485 = 45;
	int64_t x3486 = -1LL;
	static volatile int32_t x3487 = INT32_MIN;
	int64_t t93 = 2120311954856766LL;

	t93 = (((x3485/x3486)*x3487)>>x3488);

	if (t93 != 1509949440LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3525 = -1;
	static int16_t x3526 = INT16_MIN;
	uint8_t x3528 = 19U;
	volatile int64_t t94 = 820105657LL;

	t94 = (((x3525/x3526)*x3527)>>x3528);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3529 = 812876097717LLU;
	static int64_t x3530 = -29827869255090011LL;
	static int16_t x3531 = INT16_MAX;

	t95 = (((x3529/x3530)*x3531)>>x3532);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x3557 = UINT64_MAX;
	volatile int64_t x3558 = INT64_MIN;
	volatile int8_t x3559 = 57;
	volatile uint64_t t96 = 43728707378165244LLU;

	t96 = (((x3557/x3558)*x3559)>>x3560);

	if (t96 != 57LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3621 = 277692U;
	static volatile int32_t x3622 = -1;
	uint8_t x3623 = 5U;
	static volatile uint16_t x3624 = 4U;
	static uint32_t t97 = 66U;

	t97 = (((x3621/x3622)*x3623)>>x3624);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3681 = 3920;
	static uint64_t x3682 = UINT64_MAX;
	int64_t x3684 = 19LL;
	volatile uint64_t t98 = 117557520581823LLU;

	t98 = (((x3681/x3682)*x3683)>>x3684);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3685 = 9356114U;
	volatile int16_t x3688 = 1;
	uint32_t t99 = 1237U;

	t99 = (((x3685/x3686)*x3687)>>x3688);

	if (t99 != 0U) { NG(); } else { ; }
	
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

