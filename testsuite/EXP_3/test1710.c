#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
volatile uint64_t x11 = 1506LLU;
uint64_t t2 = 383213LLU;
int8_t x22 = INT8_MIN;
int8_t x165 = 63;
uint8_t x209 = UINT8_MAX;
static int16_t x254 = INT16_MIN;
int32_t x258 = 61734;
static uint32_t t11 = 3108398U;
static uint32_t x270 = 513764U;
uint64_t x272 = 3406377840668154LLU;
volatile int32_t t13 = -153;
uint8_t x325 = UINT8_MAX;
volatile uint32_t x338 = UINT32_MAX;
volatile int32_t x339 = INT32_MIN;
static uint64_t x349 = 98058LLU;
int64_t x351 = 13745751349448996LL;
static int16_t x356 = 1;
uint8_t x390 = UINT8_MAX;
static int64_t x391 = -196LL;
uint64_t t20 = 488643751334LLU;
int16_t x399 = INT16_MIN;
volatile uint64_t t21 = 17100346884295LLU;
uint64_t t23 = 7LLU;
int32_t x540 = INT32_MIN;
uint64_t t24 = 133975464179906LLU;
uint8_t x579 = 29U;
int8_t x591 = INT8_MAX;
volatile uint8_t x627 = 57U;
volatile int64_t x659 = INT64_MIN;
volatile int32_t t32 = 478879;
int8_t x688 = -1;
int8_t x707 = INT8_MIN;
int64_t t36 = -59390467109987LL;
int64_t x717 = 12380LL;
uint32_t x719 = 1764524148U;
volatile int64_t t39 = 28293LL;
volatile int32_t t40 = 6;
int32_t x787 = 1;
static int64_t t42 = -43968378402922LL;
int32_t x819 = 20525088;
volatile uint64_t t43 = 371LLU;
uint32_t x848 = UINT32_MAX;
static int64_t x871 = INT64_MIN;
uint64_t x894 = UINT64_MAX;
uint16_t x895 = 40U;
static int64_t x907 = INT64_MIN;
volatile int8_t x934 = INT8_MIN;
int64_t x979 = INT64_MIN;
volatile uint64_t t51 = 3908066250LLU;
uint64_t x989 = UINT64_MAX;
int8_t x1005 = INT8_MAX;
static int8_t x1006 = INT8_MAX;
int8_t x1008 = 19;
uint32_t t55 = 1989509387U;
volatile int64_t x1118 = 7691LL;
int32_t x1148 = INT32_MIN;
static int8_t x1156 = 1;
int8_t x1176 = -18;
static volatile int8_t x1184 = 14;
volatile uint8_t x1247 = 17U;
volatile uint32_t x1252 = 2U;
volatile uint32_t x1297 = 117U;
int64_t x1299 = INT64_MAX;
int32_t t68 = -797034;
volatile int32_t t69 = -1479;
int64_t x1370 = -1LL;
static int16_t x1418 = -1;
int32_t t71 = 479955;
static int16_t x1422 = INT16_MIN;
int8_t x1506 = 1;
int64_t t74 = -1877LL;
uint16_t x1513 = UINT16_MAX;
volatile int16_t x1516 = INT16_MIN;
uint32_t x1518 = 432U;
volatile uint32_t t76 = 6949296U;
uint16_t x1535 = 12U;
uint16_t x1552 = 9U;
uint64_t x1590 = 558613LLU;
int8_t x1605 = INT8_MIN;
uint16_t x1607 = 4U;
uint64_t x1649 = 9LLU;
uint8_t x1661 = 1U;
uint64_t x1675 = 10253LLU;
volatile uint64_t t84 = 151760862LLU;
static int32_t x1712 = INT32_MIN;
static uint64_t x1713 = 17LLU;
static int8_t x1716 = 1;
int64_t x1720 = -8294426997988266LL;
int16_t x1734 = -1;
volatile int32_t t90 = -1989;
uint16_t x1739 = 1U;
static int64_t x1766 = INT64_MIN;
volatile uint64_t t93 = 2284LLU;
uint64_t x1785 = 113104989744LLU;
uint8_t x1790 = 4U;
volatile uint32_t t96 = 122U;
uint8_t x1835 = 19U;
int32_t t98 = -2;


void f0(void) {
	static int64_t x1 = 5494146LL;
	int64_t x2 = -1LL;
	uint8_t x3 = 9U;
	volatile int64_t t0 = -305157356865654LL;

	t0 = ((x1-x2)>>(x3&x4));

	if (t0 != 5494147LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	uint64_t x10 = UINT64_MAX;
	volatile uint16_t x12 = 0U;
	volatile uint64_t t1 = 1995706966LLU;

	t1 = ((x9-x10)>>(x11&x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	uint64_t x18 = 13393085203LLU;
	static volatile int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MAX;

	t2 = ((x17-x18)>>(x19&x20));

	if (t2 != 18446744060316466285LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x21 = INT16_MAX;
	int8_t x23 = 5;
	static volatile int16_t x24 = INT16_MIN;
	int32_t t3 = 2933;

	t3 = ((x21-x22)>>(x23&x24));

	if (t3 != 32895) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x53 = UINT32_MAX;
	uint16_t x54 = UINT16_MAX;
	uint16_t x55 = 6046U;
	uint8_t x56 = 2U;
	static volatile uint32_t t4 = 16065731U;

	t4 = ((x53-x54)>>(x55&x56));

	if (t4 != 1073725440U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	int64_t x135 = -29013073524636285LL;
	volatile uint16_t x136 = 11U;
	volatile int32_t t5 = 26;

	t5 = ((x133-x134)>>(x135&x136));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x166 = INT16_MIN;
	static int16_t x167 = 4051;
	int32_t x168 = 1;
	static int32_t t6 = 0;

	t6 = ((x165-x166)>>(x167&x168));

	if (t6 != 16415) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x210 = 138;
	int8_t x211 = 3;
	int8_t x212 = 1;
	volatile int32_t t7 = 10225;

	t7 = ((x209-x210)>>(x211&x212));

	if (t7 != 58) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x217 = 2U;
	static uint32_t x218 = 495224005U;
	static uint32_t x219 = UINT32_MAX;
	uint8_t x220 = 23U;
	volatile uint32_t t8 = 14U;

	t8 = ((x217-x218)>>(x219&x220));

	if (t8 != 452U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x237 = 1169U;
	static int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 13U;
	volatile uint32_t t9 = 234144028U;

	t9 = ((x237-x238)>>(x239&x240));

	if (t9 != 33937U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x255 = 0;
	uint64_t x256 = 17134906183LLU;
	static int32_t t10 = -1170281;

	t10 = ((x253-x254)>>(x255&x256));

	if (t10 != 98303) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x257 = 1101U;
	uint32_t x259 = 2795U;
	static int16_t x260 = INT16_MIN;

	t11 = ((x257-x258)>>(x259&x260));

	if (t11 != 4294906663U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x269 = 29;
	int64_t x271 = INT64_MIN;
	uint32_t t12 = 2454U;

	t12 = ((x269-x270)>>(x271&x272));

	if (t12 != 4294453561U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x317 = INT8_MIN;
	static int32_t x318 = INT32_MIN;
	static uint8_t x319 = 2U;
	uint32_t x320 = UINT32_MAX;

	t13 = ((x317-x318)>>(x319&x320));

	if (t13 != 536870880) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x326 = 1LLU;
	static int32_t x327 = 1;
	uint16_t x328 = 3937U;
	uint64_t t14 = 1972121851904LLU;

	t14 = ((x325-x326)>>(x327&x328));

	if (t14 != 127LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x333 = INT64_MAX;
	uint8_t x334 = UINT8_MAX;
	static int8_t x335 = INT8_MIN;
	uint16_t x336 = 0U;
	static volatile int64_t t15 = 45604767576880LL;

	t15 = ((x333-x334)>>(x335&x336));

	if (t15 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x337 = INT32_MAX;
	int32_t x340 = INT32_MAX;
	static volatile uint32_t t16 = 38577596U;

	t16 = ((x337-x338)>>(x339&x340));

	if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x350 = 20U;
	uint8_t x352 = 42U;
	static uint64_t t17 = 6LLU;

	t17 = ((x349-x350)>>(x351&x352));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MIN;
	volatile int32_t x355 = 87707395;
	int64_t t18 = -196937095367LL;

	t18 = ((x353-x354)>>(x355&x356));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x373 = INT8_MIN;
	uint32_t x374 = UINT32_MAX;
	uint32_t x375 = 83U;
	volatile int16_t x376 = INT16_MIN;
	uint32_t t19 = 1404U;

	t19 = ((x373-x374)>>(x375&x376));

	if (t19 != 4294967169U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x389 = 138678919LLU;
	static int8_t x392 = 40;

	t20 = ((x389-x390)>>(x391&x392));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x397 = UINT64_MAX;
	volatile int32_t x398 = INT32_MIN;
	static int8_t x400 = 0;

	t21 = ((x397-x398)>>(x399&x400));

	if (t21 != 2147483647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x437 = 3U;
	int8_t x438 = -3;
	int32_t x439 = INT32_MIN;
	uint64_t x440 = 3LLU;
	volatile int32_t t22 = -142271883;

	t22 = ((x437-x438)>>(x439&x440));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x517 = 1022090299644451277LLU;
	int16_t x518 = INT16_MIN;
	int8_t x519 = -50;
	static volatile int16_t x520 = 0;

	t23 = ((x517-x518)>>(x519&x520));

	if (t23 != 1022090299644484045LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x537 = 9276336132LLU;
	int16_t x538 = -1;
	uint32_t x539 = 3842792U;

	t24 = ((x537-x538)>>(x539&x540));

	if (t24 != 9276336133LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x577 = INT64_MAX;
	uint16_t x578 = 2U;
	static int8_t x580 = INT8_MIN;
	int64_t t25 = 225313006359642675LL;

	t25 = ((x577-x578)>>(x579&x580));

	if (t25 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x589 = 6U;
	volatile int16_t x590 = INT16_MIN;
	uint32_t x592 = 1898887U;
	int32_t t26 = 1709;

	t26 = ((x589-x590)>>(x591&x592));

	if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x625 = UINT16_MAX;
	int8_t x626 = INT8_MIN;
	uint32_t x628 = 15276682U;
	int32_t t27 = -7067789;

	t27 = ((x625-x626)>>(x627&x628));

	if (t27 != 256) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x649 = -49;
	int64_t x650 = INT64_MIN;
	uint32_t x651 = UINT32_MAX;
	uint16_t x652 = 46U;
	volatile int64_t t28 = 23LL;

	t28 = ((x649-x650)>>(x651&x652));

	if (t28 != 131071LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x653 = 35;
	uint64_t x654 = 48LLU;
	int32_t x655 = -1;
	static uint32_t x656 = 27U;
	uint64_t t29 = 14LLU;

	t29 = ((x653-x654)>>(x655&x656));

	if (t29 != 137438953471LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x657 = -1;
	int16_t x658 = INT16_MIN;
	int32_t x660 = INT32_MAX;
	static volatile int32_t t30 = -46;

	t30 = ((x657-x658)>>(x659&x660));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x661 = INT16_MIN;
	static int64_t x662 = INT64_MIN;
	volatile int32_t x663 = 12;
	volatile uint16_t x664 = 221U;
	static volatile int64_t t31 = 5667810501933LL;

	t31 = ((x661-x662)>>(x663&x664));

	if (t31 != 2251799813685240LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MIN;
	uint8_t x667 = 41U;
	volatile uint64_t x668 = 13LLU;

	t32 = ((x665-x666)>>(x667&x668));

	if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x669 = INT64_MAX;
	volatile uint32_t x670 = UINT32_MAX;
	int16_t x671 = INT16_MAX;
	static uint8_t x672 = 63U;
	volatile int64_t t33 = 0LL;

	t33 = ((x669-x670)>>(x671&x672));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x685 = 4U;
	int32_t x686 = -1;
	uint16_t x687 = 1U;
	int32_t t34 = -1145;

	t34 = ((x685-x686)>>(x687&x688));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x689 = 216326679417145LLU;
	uint32_t x690 = 107408218U;
	int32_t x691 = INT32_MIN;
	uint8_t x692 = UINT8_MAX;
	uint64_t t35 = 18505370741LLU;

	t35 = ((x689-x690)>>(x691&x692));

	if (t35 != 216326572008927LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x705 = 1;
	int64_t x706 = -11LL;
	uint8_t x708 = 1U;

	t36 = ((x705-x706)>>(x707&x708));

	if (t36 != 12LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x718 = INT16_MIN;
	int8_t x720 = 0;
	int64_t t37 = 15LL;

	t37 = ((x717-x718)>>(x719&x720));

	if (t37 != 45148LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x721 = INT32_MAX;
	int64_t x722 = -3519322509983LL;
	volatile int8_t x723 = INT8_MAX;
	uint16_t x724 = 3U;
	int64_t t38 = -85555305528LL;

	t38 = ((x721-x722)>>(x723&x724));

	if (t38 != 440183749203LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x729 = 3717078416967LL;
	static int32_t x730 = 134444516;
	uint64_t x731 = 3827189799LLU;
	uint8_t x732 = UINT8_MAX;

	t39 = ((x729-x730)>>(x731&x732));

	if (t39 != 6LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x757 = 30U;
	static volatile int8_t x758 = 11;
	uint32_t x759 = UINT32_MAX;
	static uint8_t x760 = 10U;

	t40 = ((x757-x758)>>(x759&x760));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x785 = 41746891984983LL;
	uint64_t x786 = 1LLU;
	uint32_t x788 = UINT32_MAX;
	volatile uint64_t t41 = 6199236528238LLU;

	t41 = ((x785-x786)>>(x787&x788));

	if (t41 != 20873445992491LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x793 = 541U;
	int64_t x794 = -1LL;
	volatile int16_t x795 = -8583;
	int32_t x796 = 3;

	t42 = ((x793-x794)>>(x795&x796));

	if (t42 != 271LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x817 = UINT64_MAX;
	int16_t x818 = INT16_MIN;
	uint8_t x820 = 15U;

	t43 = ((x817-x818)>>(x819&x820));

	if (t43 != 32767LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x845 = 1287U;
	uint32_t x846 = 233757U;
	uint16_t x847 = 29U;
	static volatile uint32_t t44 = 1406467U;

	t44 = ((x845-x846)>>(x847&x848));

	if (t44 != 7U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x869 = INT16_MIN;
	int32_t x870 = INT32_MIN;
	int16_t x872 = 0;
	static volatile int32_t t45 = -1077414;

	t45 = ((x869-x870)>>(x871&x872));

	if (t45 != 2147450880) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x877 = 104U;
	uint64_t x878 = 113LLU;
	uint8_t x879 = 108U;
	uint16_t x880 = 8U;
	volatile uint64_t t46 = 63514675LLU;

	t46 = ((x877-x878)>>(x879&x880));

	if (t46 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x893 = INT8_MAX;
	int64_t x896 = INT64_MIN;
	volatile uint64_t t47 = 169825LLU;

	t47 = ((x893-x894)>>(x895&x896));

	if (t47 != 128LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x905 = 8087951U;
	volatile int16_t x906 = INT16_MIN;
	static int16_t x908 = INT16_MAX;
	volatile uint32_t t48 = 3378354U;

	t48 = ((x905-x906)>>(x907&x908));

	if (t48 != 8120719U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x929 = 417193498883192198LLU;
	int8_t x930 = INT8_MIN;
	int32_t x931 = INT32_MIN;
	int16_t x932 = 13555;
	volatile uint64_t t49 = 40074LLU;

	t49 = ((x929-x930)>>(x931&x932));

	if (t49 != 417193498883192326LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x933 = 1U;
	static int64_t x935 = INT64_MIN;
	volatile int8_t x936 = 7;
	volatile uint32_t t50 = 0U;

	t50 = ((x933-x934)>>(x935&x936));

	if (t50 != 129U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x977 = -1LL;
	volatile uint64_t x978 = 8327001446LLU;
	uint32_t x980 = 17U;

	t51 = ((x977-x978)>>(x979&x980));

	if (t51 != 18446744065382550169LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x990 = INT64_MIN;
	static uint8_t x991 = UINT8_MAX;
	uint8_t x992 = 14U;
	volatile uint64_t t52 = 108100903LLU;

	t52 = ((x989-x990)>>(x991&x992));

	if (t52 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1007 = 2384;
	int32_t t53 = 1458;

	t53 = ((x1005-x1006)>>(x1007&x1008));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1045 = 53233215923126618LL;
	int32_t x1046 = INT32_MIN;
	int32_t x1047 = INT32_MAX;
	int64_t x1048 = INT64_MIN;
	volatile int64_t t54 = 6507LL;

	t54 = ((x1045-x1046)>>(x1047&x1048));

	if (t54 != 53233218070610266LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x1113 = 234796361U;
	uint32_t x1114 = 203U;
	volatile int8_t x1115 = 58;
	static int16_t x1116 = INT16_MIN;

	t55 = ((x1113-x1114)>>(x1115&x1116));

	if (t55 != 234796158U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1117 = UINT64_MAX;
	int8_t x1119 = INT8_MAX;
	static uint8_t x1120 = 2U;
	static uint64_t t56 = 0LLU;

	t56 = ((x1117-x1118)>>(x1119&x1120));

	if (t56 != 4611686018427385981LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1121 = 893089434U;
	static uint8_t x1122 = 1U;
	int32_t x1123 = INT32_MIN;
	uint16_t x1124 = 17427U;
	volatile uint32_t t57 = 227331U;

	t57 = ((x1121-x1122)>>(x1123&x1124));

	if (t57 != 893089433U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x1145 = 1;
	volatile int8_t x1146 = INT8_MIN;
	int16_t x1147 = 632;
	int32_t t58 = 181;

	t58 = ((x1145-x1146)>>(x1147&x1148));

	if (t58 != 129) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1153 = 21118LLU;
	static uint32_t x1154 = 1912620U;
	static volatile int32_t x1155 = -1;
	volatile uint64_t t59 = 283873218506528LLU;

	t59 = ((x1153-x1154)>>(x1155&x1156));

	if (t59 != 9223372036853830057LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x1173 = INT64_MIN;
	uint64_t x1174 = 76784691014LLU;
	int8_t x1175 = 1;
	uint64_t t60 = 6678678LLU;

	t60 = ((x1173-x1174)>>(x1175&x1176));

	if (t60 != 9223371960070084794LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1181 = -1;
	int16_t x1182 = INT16_MIN;
	uint8_t x1183 = 54U;
	int32_t t61 = 3380894;

	t61 = ((x1181-x1182)>>(x1183&x1184));

	if (t61 != 511) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1245 = INT16_MAX;
	int64_t x1246 = -1LL;
	int16_t x1248 = INT16_MIN;
	static volatile int64_t t62 = -3953773009607840LL;

	t62 = ((x1245-x1246)>>(x1247&x1248));

	if (t62 != 32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x1249 = INT32_MAX;
	int64_t x1250 = -1LL;
	volatile uint8_t x1251 = 1U;
	int64_t t63 = 20475070465111736LL;

	t63 = ((x1249-x1250)>>(x1251&x1252));

	if (t63 != 2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1257 = 7506882LLU;
	static int64_t x1258 = INT64_MIN;
	uint8_t x1259 = 0U;
	int8_t x1260 = -19;
	uint64_t t64 = 488LLU;

	t64 = ((x1257-x1258)>>(x1259&x1260));

	if (t64 != 9223372036862282690LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1265 = 4610502LL;
	volatile int16_t x1266 = -147;
	uint8_t x1267 = 83U;
	int32_t x1268 = 2;
	volatile int64_t t65 = 13308881938LL;

	t65 = ((x1265-x1266)>>(x1267&x1268));

	if (t65 != 1152662LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1281 = 7U;
	int32_t x1282 = -1;
	int64_t x1283 = 649LL;
	int16_t x1284 = INT16_MIN;
	int32_t t66 = 178038;

	t66 = ((x1281-x1282)>>(x1283&x1284));

	if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1298 = UINT16_MAX;
	int64_t x1300 = INT64_MIN;
	volatile uint32_t t67 = 8U;

	t67 = ((x1297-x1298)>>(x1299&x1300));

	if (t67 != 4294901878U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1333 = -3871;
	static int32_t x1334 = INT32_MIN;
	uint16_t x1335 = 5U;
	static int16_t x1336 = -1;

	t68 = ((x1333-x1334)>>(x1335&x1336));

	if (t68 != 67108743) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1337 = UINT16_MAX;
	int16_t x1338 = INT16_MAX;
	volatile uint32_t x1339 = UINT32_MAX;
	uint8_t x1340 = 5U;

	t69 = ((x1337-x1338)>>(x1339&x1340));

	if (t69 != 1024) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x1369 = 5357504U;
	uint32_t x1371 = 203U;
	volatile int16_t x1372 = INT16_MIN;
	static int64_t t70 = -40381940LL;

	t70 = ((x1369-x1370)>>(x1371&x1372));

	if (t70 != 5357505LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1417 = 7U;
	int16_t x1419 = INT16_MAX;
	uint8_t x1420 = 17U;

	t71 = ((x1417-x1418)>>(x1419&x1420));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1421 = 7346765U;
	uint16_t x1423 = 713U;
	int32_t x1424 = INT32_MIN;
	volatile uint32_t t72 = 5030U;

	t72 = ((x1421-x1422)>>(x1423&x1424));

	if (t72 != 7379533U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x1429 = UINT8_MAX;
	volatile int64_t x1430 = -1LL;
	uint8_t x1431 = 14U;
	uint8_t x1432 = UINT8_MAX;
	volatile int64_t t73 = 1655755763LL;

	t73 = ((x1429-x1430)>>(x1431&x1432));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1505 = 66253586LL;
	int8_t x1507 = 21;
	volatile uint64_t x1508 = 406977668915872178LLU;

	t74 = ((x1505-x1506)>>(x1507&x1508));

	if (t74 != 1010LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1514 = -1LL;
	int8_t x1515 = INT8_MAX;
	static volatile int64_t t75 = 91232444163LL;

	t75 = ((x1513-x1514)>>(x1515&x1516));

	if (t75 != 65536LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1517 = UINT8_MAX;
	static int32_t x1519 = -1;
	int8_t x1520 = 0;

	t76 = ((x1517-x1518)>>(x1519&x1520));

	if (t76 != 4294967119U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1533 = -1LL;
	volatile int32_t x1534 = -10499;
	int64_t x1536 = INT64_MIN;
	static volatile int64_t t77 = 266814967LL;

	t77 = ((x1533-x1534)>>(x1535&x1536));

	if (t77 != 10498LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x1549 = 39134U;
	int32_t x1550 = INT32_MIN;
	int16_t x1551 = -40;
	uint32_t t78 = 354161468U;

	t78 = ((x1549-x1550)>>(x1551&x1552));

	if (t78 != 8388760U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1589 = 0U;
	static uint64_t x1591 = 43398LLU;
	volatile uint8_t x1592 = 5U;
	static uint64_t t79 = 1745996633605214374LLU;

	t79 = ((x1589-x1590)>>(x1591&x1592));

	if (t79 != 1152921504606812062LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x1593 = -1;
	static int64_t x1594 = INT64_MIN;
	volatile int8_t x1595 = 2;
	static int16_t x1596 = -53;
	volatile int64_t t80 = 14946LL;

	t80 = ((x1593-x1594)>>(x1595&x1596));

	if (t80 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1606 = UINT64_MAX;
	uint32_t x1608 = 7152312U;
	volatile uint64_t t81 = 12624272210358417LLU;

	t81 = ((x1605-x1606)>>(x1607&x1608));

	if (t81 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1650 = 22U;
	static int64_t x1651 = -6LL;
	int8_t x1652 = 25;
	static uint64_t t82 = 681991730LLU;

	t82 = ((x1649-x1650)>>(x1651&x1652));

	if (t82 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1662 = 3051613051632LLU;
	uint32_t x1663 = 21U;
	int32_t x1664 = -1;
	static uint64_t t83 = 3147956566932557LLU;

	t83 = ((x1661-x1662)>>(x1663&x1664));

	if (t83 != 8796091567085LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1673 = UINT64_MAX;
	int64_t x1674 = INT64_MIN;
	static volatile int64_t x1676 = INT64_MIN;

	t84 = ((x1673-x1674)>>(x1675&x1676));

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1681 = UINT32_MAX;
	int32_t x1682 = INT32_MIN;
	uint8_t x1683 = UINT8_MAX;
	uint32_t x1684 = 1U;
	uint32_t t85 = 490U;

	t85 = ((x1681-x1682)>>(x1683&x1684));

	if (t85 != 1073741823U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x1709 = 360307525542LL;
	int16_t x1710 = 3042;
	int32_t x1711 = 1800841;
	volatile int64_t t86 = -2766587057LL;

	t86 = ((x1709-x1710)>>(x1711&x1712));

	if (t86 != 360307522500LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x1714 = -1503585105037437157LL;
	uint8_t x1715 = 34U;
	static volatile uint64_t t87 = 974029LLU;

	t87 = ((x1713-x1714)>>(x1715&x1716));

	if (t87 != 1503585105037437174LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x1717 = 93U;
	int64_t x1718 = -154060221LL;
	uint8_t x1719 = 1U;
	int64_t t88 = -595789974LL;

	t88 = ((x1717-x1718)>>(x1719&x1720));

	if (t88 != 154060314LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x1729 = 187899;
	uint16_t x1730 = 2U;
	int64_t x1731 = 2296LL;
	int32_t x1732 = INT32_MIN;
	volatile int32_t t89 = -46;

	t89 = ((x1729-x1730)>>(x1731&x1732));

	if (t89 != 187897) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x1733 = 64;
	uint8_t x1735 = 47U;
	volatile int64_t x1736 = INT64_MIN;

	t90 = ((x1733-x1734)>>(x1735&x1736));

	if (t90 != 65) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1737 = INT8_MIN;
	static int32_t x1738 = -239932;
	int8_t x1740 = INT8_MIN;
	int32_t t91 = 3;

	t91 = ((x1737-x1738)>>(x1739&x1740));

	if (t91 != 239804) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x1757 = 659482LL;
	volatile int64_t x1758 = 4LL;
	int32_t x1759 = -1;
	static volatile uint8_t x1760 = 7U;
	static int64_t t92 = 4LL;

	t92 = ((x1757-x1758)>>(x1759&x1760));

	if (t92 != 5152LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x1765 = UINT64_MAX;
	uint64_t x1767 = 4771042LLU;
	int32_t x1768 = INT32_MIN;

	t93 = ((x1765-x1766)>>(x1767&x1768));

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1781 = INT16_MAX;
	uint8_t x1782 = UINT8_MAX;
	int8_t x1783 = 5;
	int8_t x1784 = INT8_MIN;
	volatile int32_t t94 = -7772;

	t94 = ((x1781-x1782)>>(x1783&x1784));

	if (t94 != 32512) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1786 = UINT32_MAX;
	uint16_t x1787 = UINT16_MAX;
	volatile int64_t x1788 = INT64_MIN;
	static uint64_t t95 = 0LLU;

	t95 = ((x1785-x1786)>>(x1787&x1788));

	if (t95 != 108810022449LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x1789 = 18123U;
	static int8_t x1791 = 9;
	int64_t x1792 = INT64_MAX;

	t96 = ((x1789-x1790)>>(x1791&x1792));

	if (t96 != 35U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x1793 = UINT64_MAX;
	int32_t x1794 = INT32_MAX;
	volatile uint64_t x1795 = 133473327451101780LLU;
	static volatile int8_t x1796 = 8;
	uint64_t t97 = 460950478LLU;

	t97 = ((x1793-x1794)>>(x1795&x1796));

	if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x1833 = -1;
	static volatile int8_t x1834 = INT8_MIN;
	int64_t x1836 = INT64_MIN;

	t98 = ((x1833-x1834)>>(x1835&x1836));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1869 = INT32_MIN;
	volatile uint32_t x1870 = 2809890U;
	int16_t x1871 = 2;
	int32_t x1872 = INT32_MAX;
	uint32_t t99 = 14U;

	t99 = ((x1869-x1870)>>(x1871&x1872));

	if (t99 != 536168439U) { NG(); } else { ; }
	
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

