#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = 1;
static int64_t x113 = -40029LL;
int64_t x198 = -125954LL;
uint16_t x225 = 4131U;
int64_t x227 = INT64_MIN;
int64_t x242 = INT64_MAX;
static volatile int32_t x321 = INT32_MAX;
uint64_t x323 = 6215LLU;
int16_t x414 = INT16_MAX;
int32_t t16 = -11545;
int8_t x590 = INT8_MIN;
volatile uint64_t t22 = 1058161176677547LLU;
int8_t x699 = INT8_MAX;
volatile uint32_t t24 = 30557U;
int16_t x805 = INT16_MIN;
uint32_t x807 = UINT32_MAX;
volatile uint8_t x842 = 23U;
uint8_t x912 = 3U;
uint8_t x964 = 28U;
uint64_t t28 = 21LLU;
static int64_t x990 = 23724236664682930LL;
uint16_t x1068 = 0U;
int64_t x1107 = -650349103281LL;
uint8_t x1302 = 12U;
static volatile uint16_t x1326 = UINT16_MAX;
static int8_t x1340 = 13;
static int64_t x1453 = -1LL;
uint8_t x1457 = 9U;
uint64_t t40 = 279755175693264819LLU;
uint8_t x1466 = UINT8_MAX;
volatile int32_t t41 = -184212;
uint64_t x1559 = 61362664314152907LLU;
static int32_t x1569 = INT32_MIN;
uint16_t x1584 = 20U;
int32_t t44 = 55685;
static uint32_t x1610 = 6478U;
uint8_t x1612 = 27U;
int64_t t48 = 1448871LL;
static volatile int32_t t49 = -12;
uint64_t x1821 = UINT64_MAX;
static int8_t x1822 = -1;
int8_t x1824 = 4;
static int64_t x1895 = 21153897567LL;
volatile uint32_t t53 = 3U;
int8_t x1926 = INT8_MAX;
int64_t x1927 = INT64_MIN;
uint8_t x2028 = 7U;
volatile int64_t t56 = -782228LL;
uint8_t x2147 = 104U;
int32_t x2148 = 22;
volatile int32_t t58 = -14254927;
int32_t x2213 = 59;
volatile int64_t t61 = 23214889325011506LL;
int8_t x2223 = INT8_MAX;
int8_t x2224 = 7;
uint32_t t62 = UINT32_MAX;
int32_t x2365 = -12703;
volatile int8_t x2368 = 0;
volatile int8_t x2480 = 1;
int16_t x2503 = INT16_MAX;
volatile int32_t t68 = 100529734;
int16_t x2533 = INT16_MIN;
int64_t x2591 = INT64_MIN;
uint16_t x2673 = 1U;
uint64_t x2674 = 150224LLU;
static uint64_t x2719 = 5809769737LLU;
uint8_t x2720 = 16U;
volatile int8_t x2755 = INT8_MAX;
uint64_t x2798 = UINT64_MAX;
int8_t x2799 = -1;
static int16_t x2841 = -1;
static int8_t x2842 = -1;
int64_t x2849 = -104661LL;
uint16_t x2850 = UINT16_MAX;
static int32_t x2851 = INT32_MIN;
volatile int32_t t83 = 2974065;
static uint8_t x2901 = 96U;
int16_t x2933 = INT16_MIN;
int8_t x3025 = INT8_MAX;
int64_t x3029 = INT64_MIN;
static volatile uint8_t x3036 = 1U;
uint32_t x3074 = 41891U;
volatile uint8_t x3075 = 76U;
static volatile uint64_t t94 = 23201049299201833LLU;
int8_t x3265 = INT8_MIN;
int16_t x3363 = INT16_MAX;
volatile uint64_t t96 = 478978LLU;
int64_t x3404 = 1LL;
uint32_t x3514 = 87U;


void f0(void) {
	volatile int64_t x5 = 406112LL;
	static int8_t x6 = 15;
	static int16_t x7 = -36;
	volatile int64_t t0 = 9545756013LL;

	t0 = (x5+((x6&x7)>>x8));

	if (t0 != 406118LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x41 = INT32_MAX;
	volatile uint32_t x42 = 7220287U;
	int32_t x43 = 17504675;
	static volatile int8_t x44 = 0;
	volatile uint32_t t1 = 218U;

	t1 = (x41+((x42&x43)>>x44));

	if (t1 != 2148141090U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x57 = INT8_MIN;
	volatile int32_t x58 = 1003;
	int16_t x59 = 1010;
	uint8_t x60 = 5U;
	volatile int32_t t2 = 2615;

	t2 = (x57+((x58&x59)>>x60));

	if (t2 != -97) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MAX;
	int64_t x111 = -1LL;
	int8_t x112 = 0;
	static volatile int64_t t3 = 4412010749927216465LL;

	t3 = (x109+((x110&x111)>>x112));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x114 = UINT8_MAX;
	uint8_t x115 = UINT8_MAX;
	static uint8_t x116 = 13U;
	int64_t t4 = 178999510898095LL;

	t4 = (x113+((x114&x115)>>x116));

	if (t4 != -40029LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x197 = INT16_MIN;
	volatile uint64_t x199 = 15956566LLU;
	uint8_t x200 = 23U;
	static volatile uint64_t t5 = 549086106344LLU;

	t5 = (x197+((x198&x199)>>x200));

	if (t5 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x221 = -338;
	uint32_t x222 = 879U;
	int64_t x223 = -1LL;
	uint8_t x224 = 4U;
	volatile int64_t t6 = 2959896730LL;

	t6 = (x221+((x222&x223)>>x224));

	if (t6 != -284LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x226 = 48U;
	int8_t x228 = 1;
	volatile int64_t t7 = -5866258964468LL;

	t7 = (x225+((x226&x227)>>x228));

	if (t7 != 4131LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x241 = 11U;
	uint16_t x243 = 120U;
	uint8_t x244 = 1U;
	static volatile int64_t t8 = -9517LL;

	t8 = (x241+((x242&x243)>>x244));

	if (t8 != 71LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x322 = -1;
	int16_t x324 = 8;
	uint64_t t9 = 535634792492LLU;

	t9 = (x321+((x322&x323)>>x324));

	if (t9 != 2147483671LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x397 = INT64_MAX;
	int16_t x398 = 1099;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 17U;
	int64_t t10 = INT64_MAX;

	t10 = (x397+((x398&x399)>>x400));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x413 = INT64_MAX;
	int16_t x415 = INT16_MIN;
	uint8_t x416 = 20U;
	int64_t t11 = INT64_MAX;

	t11 = (x413+((x414&x415)>>x416));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x421 = 18901420LLU;
	volatile int16_t x422 = 589;
	uint32_t x423 = UINT32_MAX;
	static uint8_t x424 = 2U;
	uint64_t t12 = 3LLU;

	t12 = (x421+((x422&x423)>>x424));

	if (t12 != 18901567LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x425 = INT8_MAX;
	uint64_t x426 = 2004276933663552492LLU;
	int8_t x427 = INT8_MAX;
	uint16_t x428 = 13U;
	uint64_t t13 = 408248841575LLU;

	t13 = (x425+((x426&x427)>>x428));

	if (t13 != 127LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x445 = UINT32_MAX;
	static int32_t x446 = 1;
	int32_t x447 = INT32_MIN;
	static int8_t x448 = 15;
	uint32_t t14 = UINT32_MAX;

	t14 = (x445+((x446&x447)>>x448));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x457 = 16395213317083LLU;
	volatile int64_t x458 = 52858263793836LL;
	uint16_t x459 = 22U;
	int32_t x460 = 1;
	uint64_t t15 = 122003277913424LLU;

	t15 = (x457+((x458&x459)>>x460));

	if (t15 != 16395213317085LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x485 = 1520U;
	volatile int16_t x486 = -1;
	int16_t x487 = 0;
	volatile uint8_t x488 = 2U;

	t16 = (x485+((x486&x487)>>x488));

	if (t16 != 1520) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x501 = -1;
	int16_t x502 = INT16_MIN;
	volatile uint32_t x503 = 1196U;
	uint32_t x504 = 11U;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x501+((x502&x503)>>x504));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x509 = INT8_MIN;
	int16_t x510 = INT16_MIN;
	volatile uint16_t x511 = 11040U;
	static uint16_t x512 = 31U;
	volatile int32_t t18 = -207449789;

	t18 = (x509+((x510&x511)>>x512));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x521 = 1;
	uint64_t x522 = 33387LLU;
	int64_t x523 = -1LL;
	int8_t x524 = 0;
	volatile uint64_t t19 = 228048LLU;

	t19 = (x521+((x522&x523)>>x524));

	if (t19 != 33388LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x589 = INT64_MIN;
	static int8_t x591 = INT8_MAX;
	uint16_t x592 = 1U;
	int64_t t20 = INT64_MIN;

	t20 = (x589+((x590&x591)>>x592));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x601 = INT32_MAX;
	uint32_t x602 = UINT32_MAX;
	uint32_t x603 = 44312U;
	int64_t x604 = 9LL;
	uint32_t t21 = 10078619U;

	t21 = (x601+((x602&x603)>>x604));

	if (t21 != 2147483733U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x677 = INT8_MIN;
	uint64_t x678 = 239284609690655041LLU;
	int32_t x679 = -1816735;
	int8_t x680 = 1;

	t22 = (x677+((x678&x679)>>x680));

	if (t22 != 119642304844800032LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x697 = UINT16_MAX;
	uint16_t x698 = 24509U;
	int8_t x700 = 2;
	volatile int32_t t23 = -198;

	t23 = (x697+((x698&x699)>>x700));

	if (t23 != 65550) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x721 = INT16_MIN;
	static int8_t x722 = -1;
	uint32_t x723 = UINT32_MAX;
	static uint8_t x724 = 12U;

	t24 = (x721+((x722&x723)>>x724));

	if (t24 != 1015807U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x806 = -1LL;
	uint16_t x808 = 15U;
	volatile int64_t t25 = 57375888118201814LL;

	t25 = (x805+((x806&x807)>>x808));

	if (t25 != 98303LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x841 = -1;
	volatile uint8_t x843 = UINT8_MAX;
	int8_t x844 = 1;
	volatile int32_t t26 = 4982;

	t26 = (x841+((x842&x843)>>x844));

	if (t26 != 10) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x909 = INT8_MIN;
	int32_t x910 = -1;
	int16_t x911 = 6;
	volatile int32_t t27 = 1;

	t27 = (x909+((x910&x911)>>x912));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x961 = INT16_MAX;
	int64_t x962 = INT64_MIN;
	uint64_t x963 = UINT64_MAX;

	t28 = (x961+((x962&x963)>>x964));

	if (t28 != 34359771135LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x965 = UINT64_MAX;
	int8_t x966 = 0;
	int32_t x967 = -1;
	uint8_t x968 = 7U;
	static uint64_t t29 = UINT64_MAX;

	t29 = (x965+((x966&x967)>>x968));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x981 = INT32_MIN;
	volatile uint64_t x982 = 2009035311977026396LLU;
	static volatile int32_t x983 = INT32_MAX;
	uint16_t x984 = 62U;
	static uint64_t t30 = 3683488536004672302LLU;

	t30 = (x981+((x982&x983)>>x984));

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x989 = INT32_MIN;
	uint16_t x991 = 0U;
	uint16_t x992 = 8U;
	volatile int64_t t31 = 175408816766LL;

	t31 = (x989+((x990&x991)>>x992));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1045 = 22LL;
	int32_t x1046 = -1;
	uint8_t x1047 = UINT8_MAX;
	int8_t x1048 = 31;
	volatile int64_t t32 = 16767239199066610LL;

	t32 = (x1045+((x1046&x1047)>>x1048));

	if (t32 != 22LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1065 = -2980984692706963212LL;
	static int8_t x1066 = INT8_MAX;
	int32_t x1067 = -508;
	volatile int64_t t33 = 4235274482940LL;

	t33 = (x1065+((x1066&x1067)>>x1068));

	if (t33 != -2980984692706963208LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1105 = 9815U;
	volatile int16_t x1106 = 4;
	volatile uint8_t x1108 = 9U;
	static int64_t t34 = 511309754937965385LL;

	t34 = (x1105+((x1106&x1107)>>x1108));

	if (t34 != 9815LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1209 = INT16_MIN;
	uint16_t x1210 = UINT16_MAX;
	static int16_t x1211 = -5188;
	int32_t x1212 = 0;
	volatile int32_t t35 = -1;

	t35 = (x1209+((x1210&x1211)>>x1212));

	if (t35 != 27580) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1301 = INT8_MIN;
	int8_t x1303 = INT8_MIN;
	static volatile int8_t x1304 = 9;
	static volatile int32_t t36 = 27;

	t36 = (x1301+((x1302&x1303)>>x1304));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1325 = 202835U;
	int16_t x1327 = -27;
	int16_t x1328 = 1;
	static uint32_t t37 = 15147363U;

	t37 = (x1325+((x1326&x1327)>>x1328));

	if (t37 != 235589U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1337 = INT8_MIN;
	int64_t x1338 = -1LL;
	uint32_t x1339 = UINT32_MAX;
	volatile int64_t t38 = 3699327LL;

	t38 = (x1337+((x1338&x1339)>>x1340));

	if (t38 != 524159LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1454 = INT32_MIN;
	int32_t x1455 = 23;
	int8_t x1456 = 10;
	int64_t t39 = 18LL;

	t39 = (x1453+((x1454&x1455)>>x1456));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1458 = 6;
	uint64_t x1459 = 2101388424534586LLU;
	int32_t x1460 = 5;

	t40 = (x1457+((x1458&x1459)>>x1460));

	if (t40 != 9LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1465 = INT32_MIN;
	volatile uint8_t x1467 = UINT8_MAX;
	uint16_t x1468 = 6U;

	t41 = (x1465+((x1466&x1467)>>x1468));

	if (t41 != -2147483645) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1557 = 703;
	volatile int32_t x1558 = INT32_MIN;
	uint64_t x1560 = 42LLU;
	volatile uint64_t t42 = 225351988LLU;

	t42 = (x1557+((x1558&x1559)>>x1560));

	if (t42 != 14655LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1570 = 29493LL;
	int32_t x1571 = INT32_MIN;
	volatile uint64_t x1572 = 7LLU;
	int64_t t43 = 10879042762LL;

	t43 = (x1569+((x1570&x1571)>>x1572));

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1581 = INT8_MIN;
	int8_t x1582 = 52;
	uint8_t x1583 = 1U;

	t44 = (x1581+((x1582&x1583)>>x1584));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x1593 = 3113LL;
	volatile uint16_t x1594 = 2U;
	int32_t x1595 = 0;
	static uint16_t x1596 = 24U;
	int64_t t45 = 11878LL;

	t45 = (x1593+((x1594&x1595)>>x1596));

	if (t45 != 3113LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1609 = INT32_MAX;
	int64_t x1611 = INT64_MIN;
	volatile int64_t t46 = -16749380LL;

	t46 = (x1609+((x1610&x1611)>>x1612));

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1657 = INT32_MIN;
	uint32_t x1658 = UINT32_MAX;
	int32_t x1659 = INT32_MAX;
	uint8_t x1660 = 1U;
	static uint32_t t47 = 0U;

	t47 = (x1657+((x1658&x1659)>>x1660));

	if (t47 != 3221225471U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1673 = INT64_MIN;
	int64_t x1674 = INT64_MAX;
	int32_t x1675 = INT32_MIN;
	uint8_t x1676 = 2U;

	t48 = (x1673+((x1674&x1675)>>x1676));

	if (t48 != -6917529028177952768LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1681 = 1;
	int16_t x1682 = INT16_MAX;
	static uint8_t x1683 = UINT8_MAX;
	uint8_t x1684 = 15U;

	t49 = (x1681+((x1682&x1683)>>x1684));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1773 = INT32_MIN;
	int16_t x1774 = INT16_MAX;
	int32_t x1775 = INT32_MIN;
	int8_t x1776 = 0;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x1773+((x1774&x1775)>>x1776));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1823 = INT32_MAX;
	volatile uint64_t t51 = 11353885866LLU;

	t51 = (x1821+((x1822&x1823)>>x1824));

	if (t51 != 134217726LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1893 = 0;
	int16_t x1894 = INT16_MAX;
	static uint32_t x1896 = 0U;
	int64_t t52 = -92503307313LL;

	t52 = (x1893+((x1894&x1895)>>x1896));

	if (t52 != 23647LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1905 = INT32_MAX;
	static uint32_t x1906 = 22U;
	int32_t x1907 = INT32_MAX;
	volatile uint8_t x1908 = 17U;

	t53 = (x1905+((x1906&x1907)>>x1908));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1925 = 537233938573012216LLU;
	int32_t x1928 = 4;
	uint64_t t54 = 288092374478382589LLU;

	t54 = (x1925+((x1926&x1927)>>x1928));

	if (t54 != 537233938573012216LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2021 = 25U;
	int16_t x2022 = 456;
	int16_t x2023 = -1;
	uint32_t x2024 = 0U;
	static int32_t t55 = -28;

	t55 = (x2021+((x2022&x2023)>>x2024));

	if (t55 != 481) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2025 = INT32_MAX;
	int64_t x2026 = INT64_MAX;
	int16_t x2027 = -61;

	t56 = (x2025+((x2026&x2027)>>x2028));

	if (t56 != 72057596185411582LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2145 = 1;
	int64_t x2146 = INT64_MIN;
	volatile int64_t t57 = 390LL;

	t57 = (x2145+((x2146&x2147)>>x2148));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2193 = INT16_MAX;
	uint8_t x2194 = 14U;
	static int16_t x2195 = INT16_MIN;
	volatile int8_t x2196 = 2;

	t58 = (x2193+((x2194&x2195)>>x2196));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2201 = INT64_MIN;
	volatile uint16_t x2202 = 261U;
	int32_t x2203 = INT32_MIN;
	uint16_t x2204 = 6U;
	volatile int64_t t59 = INT64_MIN;

	t59 = (x2201+((x2202&x2203)>>x2204));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2209 = 958549990774639LLU;
	int32_t x2210 = INT32_MAX;
	static int16_t x2211 = INT16_MIN;
	int64_t x2212 = 0LL;
	uint64_t t60 = 3559071770580511276LLU;

	t60 = (x2209+((x2210&x2211)>>x2212));

	if (t60 != 958552138225519LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2214 = INT64_MIN;
	static volatile int8_t x2215 = 5;
	uint16_t x2216 = 15U;

	t61 = (x2213+((x2214&x2215)>>x2216));

	if (t61 != 59LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2221 = UINT32_MAX;
	int32_t x2222 = INT32_MIN;

	t62 = (x2221+((x2222&x2223)>>x2224));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2265 = INT16_MAX;
	uint32_t x2266 = 3223194U;
	int32_t x2267 = -28;
	uint32_t x2268 = 1U;
	volatile uint32_t t63 = 14912U;

	t63 = (x2265+((x2266&x2267)>>x2268));

	if (t63 != 1644351U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x2273 = -710854035053069LL;
	uint16_t x2274 = 1U;
	static int16_t x2275 = 0;
	static uint8_t x2276 = 2U;
	volatile int64_t t64 = 0LL;

	t64 = (x2273+((x2274&x2275)>>x2276));

	if (t64 != -710854035053069LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2349 = 1U;
	uint64_t x2350 = 362LLU;
	volatile int16_t x2351 = -1;
	int8_t x2352 = 6;
	uint64_t t65 = 5154631595013146LLU;

	t65 = (x2349+((x2350&x2351)>>x2352));

	if (t65 != 6LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2366 = INT64_MAX;
	int64_t x2367 = -360020870LL;
	volatile int64_t t66 = 322LL;

	t66 = (x2365+((x2366&x2367)>>x2368));

	if (t66 != 9223372036494742235LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x2477 = 5;
	int16_t x2478 = INT16_MIN;
	volatile int8_t x2479 = 0;
	int32_t t67 = -697656143;

	t67 = (x2477+((x2478&x2479)>>x2480));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2501 = INT32_MIN;
	int32_t x2502 = 1057182335;
	static uint8_t x2504 = 8U;

	t68 = (x2501+((x2502&x2503)>>x2504));

	if (t68 != -2147483566) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2521 = INT8_MIN;
	uint64_t x2522 = 2LLU;
	static volatile uint32_t x2523 = 9102340U;
	uint8_t x2524 = 0U;
	uint64_t t69 = 8290896269LLU;

	t69 = (x2521+((x2522&x2523)>>x2524));

	if (t69 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2534 = INT16_MAX;
	int8_t x2535 = -10;
	uint64_t x2536 = 3LLU;
	volatile int32_t t70 = 640;

	t70 = (x2533+((x2534&x2535)>>x2536));

	if (t70 != -28674) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x2541 = 3U;
	int16_t x2542 = INT16_MAX;
	volatile int16_t x2543 = INT16_MAX;
	uint32_t x2544 = 10U;
	volatile int32_t t71 = 108828805;

	t71 = (x2541+((x2542&x2543)>>x2544));

	if (t71 != 34) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x2569 = 11U;
	static int32_t x2570 = -1;
	static int8_t x2571 = INT8_MAX;
	uint8_t x2572 = 6U;
	volatile int32_t t72 = -85;

	t72 = (x2569+((x2570&x2571)>>x2572));

	if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2589 = INT16_MIN;
	uint32_t x2590 = UINT32_MAX;
	volatile int16_t x2592 = 34;
	static int64_t t73 = -226785310731LL;

	t73 = (x2589+((x2590&x2591)>>x2592));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2601 = 744U;
	int8_t x2602 = INT8_MIN;
	uint64_t x2603 = UINT64_MAX;
	volatile int32_t x2604 = 3;
	volatile uint64_t t74 = 771708LLU;

	t74 = (x2601+((x2602&x2603)>>x2604));

	if (t74 != 2305843009213694680LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x2609 = 0U;
	int8_t x2610 = 0;
	volatile int8_t x2611 = INT8_MIN;
	volatile uint8_t x2612 = 12U;
	static int32_t t75 = -14097;

	t75 = (x2609+((x2610&x2611)>>x2612));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2675 = INT64_MAX;
	uint8_t x2676 = 3U;
	volatile uint64_t t76 = 668742162658LLU;

	t76 = (x2673+((x2674&x2675)>>x2676));

	if (t76 != 18779LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x2717 = -1;
	static int32_t x2718 = INT32_MIN;
	uint64_t t77 = 14711LLU;

	t77 = (x2717+((x2718&x2719)>>x2720));

	if (t77 != 65535LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x2753 = INT32_MIN;
	int32_t x2754 = INT32_MIN;
	uint8_t x2756 = 5U;
	volatile int32_t t78 = INT32_MIN;

	t78 = (x2753+((x2754&x2755)>>x2756));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x2797 = 6359;
	static volatile uint16_t x2800 = 19U;
	static uint64_t t79 = 31488LLU;

	t79 = (x2797+((x2798&x2799)>>x2800));

	if (t79 != 35184372095190LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x2809 = 87536700LL;
	uint32_t x2810 = 1U;
	int64_t x2811 = 59556075864674881LL;
	int32_t x2812 = 3;
	int64_t t80 = -7253897308LL;

	t80 = (x2809+((x2810&x2811)>>x2812));

	if (t80 != 87536700LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2843 = 110818LL;
	int16_t x2844 = 26;
	int64_t t81 = -1511275484LL;

	t81 = (x2841+((x2842&x2843)>>x2844));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2852 = 18U;
	volatile int64_t t82 = 54417650587LL;

	t82 = (x2849+((x2850&x2851)>>x2852));

	if (t82 != -104661LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2893 = 0;
	int32_t x2894 = INT32_MIN;
	volatile uint16_t x2895 = 905U;
	uint16_t x2896 = 14U;

	t83 = (x2893+((x2894&x2895)>>x2896));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2902 = INT16_MAX;
	static volatile uint32_t x2903 = 32546U;
	static uint16_t x2904 = 0U;
	volatile uint32_t t84 = 8U;

	t84 = (x2901+((x2902&x2903)>>x2904));

	if (t84 != 32642U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x2925 = INT64_MIN;
	volatile uint32_t x2926 = 9119U;
	uint64_t x2927 = UINT64_MAX;
	static uint8_t x2928 = 35U;
	volatile uint64_t t85 = 19656941136LLU;

	t85 = (x2925+((x2926&x2927)>>x2928));

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2934 = UINT8_MAX;
	uint64_t x2935 = 196646076673534LLU;
	static volatile uint32_t x2936 = 10U;
	static uint64_t t86 = 768LLU;

	t86 = (x2933+((x2934&x2935)>>x2936));

	if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2965 = UINT32_MAX;
	int8_t x2966 = INT8_MIN;
	uint64_t x2967 = UINT64_MAX;
	uint8_t x2968 = 61U;
	volatile uint64_t t87 = 35884346092858LLU;

	t87 = (x2965+((x2966&x2967)>>x2968));

	if (t87 != 4294967302LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2989 = INT64_MIN;
	uint64_t x2990 = 896LLU;
	static uint16_t x2991 = 504U;
	uint8_t x2992 = 1U;
	volatile uint64_t t88 = 1542509058103LLU;

	t88 = (x2989+((x2990&x2991)>>x2992));

	if (t88 != 9223372036854776000LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3026 = UINT64_MAX;
	int8_t x3027 = -5;
	int8_t x3028 = 9;
	uint64_t t89 = 43056913459LLU;

	t89 = (x3025+((x3026&x3027)>>x3028));

	if (t89 != 36028797018964094LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x3030 = 3U;
	uint8_t x3031 = 10U;
	int16_t x3032 = 0;
	int64_t t90 = 505897801290815241LL;

	t90 = (x3029+((x3030&x3031)>>x3032));

	if (t90 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3033 = 43960571764962706LLU;
	uint8_t x3034 = 0U;
	int8_t x3035 = INT8_MAX;
	uint64_t t91 = 4719311698559642LLU;

	t91 = (x3033+((x3034&x3035)>>x3036));

	if (t91 != 43960571764962706LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x3073 = INT16_MIN;
	static uint32_t x3076 = 19U;
	uint32_t t92 = 3133438U;

	t92 = (x3073+((x3074&x3075)>>x3076));

	if (t92 != 4294934528U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x3149 = 239356185044520864LLU;
	int8_t x3150 = INT8_MIN;
	uint32_t x3151 = 243U;
	volatile uint16_t x3152 = 18U;
	static uint64_t t93 = 16598460LLU;

	t93 = (x3149+((x3150&x3151)>>x3152));

	if (t93 != 239356185044520864LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x3181 = INT8_MIN;
	volatile uint64_t x3182 = 6LLU;
	uint16_t x3183 = UINT16_MAX;
	volatile uint8_t x3184 = 4U;

	t94 = (x3181+((x3182&x3183)>>x3184));

	if (t94 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3266 = UINT8_MAX;
	int16_t x3267 = 8;
	uint32_t x3268 = 3U;
	int32_t t95 = -3;

	t95 = (x3265+((x3266&x3267)>>x3268));

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3361 = 2400U;
	uint64_t x3362 = 1015126280960761LLU;
	int32_t x3364 = 1;

	t96 = (x3361+((x3362&x3363)>>x3364));

	if (t96 != 18140LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x3377 = UINT8_MAX;
	uint8_t x3378 = UINT8_MAX;
	int32_t x3379 = INT32_MIN;
	uint8_t x3380 = 13U;
	int32_t t97 = -9605918;

	t97 = (x3377+((x3378&x3379)>>x3380));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3401 = -1;
	static uint64_t x3402 = 6135145LLU;
	int64_t x3403 = -358012911LL;
	volatile uint64_t t98 = 50136121503LLU;

	t98 = (x3401+((x3402&x3403)>>x3404));

	if (t98 != 295935LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3513 = 940;
	static volatile int16_t x3515 = 1;
	uint16_t x3516 = 6U;
	uint32_t t99 = 7611520U;

	t99 = (x3513+((x3514&x3515)>>x3516));

	if (t99 != 940U) { NG(); } else { ; }
	
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

