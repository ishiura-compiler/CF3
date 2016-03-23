
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x246 = 394299U;
volatile uint8_t x292 = 3U;
static int8_t x325 = INT8_MIN;
int8_t x506 = INT8_MIN;
int8_t x607 = 6;
int16_t x633 = -7622;
int16_t x860 = 13;
int16_t x869 = -1;
int8_t x921 = INT8_MIN;
static int32_t t18 = -1800856;
static int64_t x1013 = INT64_MAX;
uint64_t x1015 = 16464646734LLU;
uint8_t x1115 = 0U;
volatile int8_t x1306 = INT8_MAX;
uint8_t x1395 = 14U;
volatile int32_t x1396 = 0;
volatile int32_t t25 = -6498;
int32_t x1400 = 1;
volatile uint16_t x1405 = UINT16_MAX;
uint64_t x1442 = UINT64_MAX;
static int16_t x1443 = INT16_MAX;
int8_t x1649 = -1;
uint32_t t34 = 159118168U;
volatile int64_t x1885 = INT64_MIN;
uint32_t x1935 = 367495377U;
volatile int64_t t36 = -3378LL;
uint32_t x2106 = 52162045U;
volatile int8_t x2173 = INT8_MIN;
volatile int8_t x2301 = INT8_MIN;
int64_t x2302 = -250LL;
int32_t x2303 = 126;
volatile int16_t x2304 = 6;
int64_t t40 = -727345374504622395LL;
static int16_t x2339 = INT16_MAX;
volatile uint32_t t42 = 8U;
volatile uint8_t x2648 = 1U;
int16_t x2669 = -1;
static int8_t x2717 = INT8_MIN;
uint64_t x2931 = 7435852921LLU;
volatile uint64_t t47 = 1769LLU;
int16_t x3029 = 56;
uint32_t x3187 = UINT32_MAX;


void f0(void) {
    	int64_t x121 = -1073910968399385LL;
	int8_t x122 = INT8_MIN;
	volatile int8_t x123 = 6;
	volatile int16_t x124 = 0;
	int64_t t0 = 268438089458162LL;

    t0 = (x121+(x122+(x123<<x124)));

    if (t0 != -1073910968399507LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x145 = UINT16_MAX;
	int8_t x146 = INT8_MIN;
	uint8_t x147 = UINT8_MAX;
	uint8_t x148 = 0U;
	int32_t t1 = 119;

    t1 = (x145+(x146+(x147<<x148)));

    if (t1 != 65662) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x245 = INT8_MAX;
	static uint8_t x247 = 0U;
	static uint32_t x248 = 23U;
	static volatile uint32_t t2 = 149U;

    t2 = (x245+(x246+(x247<<x248)));

    if (t2 != 394426U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x249 = -1LL;
	int64_t x250 = INT64_MIN;
	int16_t x251 = 3;
	int32_t x252 = 12;
	volatile int64_t t3 = -6066551103091719LL;

    t3 = (x249+(x250+(x251<<x252)));

    if (t3 != -9223372036854763521LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x273 = 44U;
	static int8_t x274 = -2;
	uint8_t x275 = 6U;
	uint8_t x276 = 2U;
	int32_t t4 = 744755413;

    t4 = (x273+(x274+(x275<<x276)));

    if (t4 != 66) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x289 = INT8_MAX;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t5 = -958602;

    t5 = (x289+(x290+(x291<<x292)));

    if (t5 != -30601) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x313 = UINT64_MAX;
	int32_t x314 = -1;
	static int16_t x315 = INT16_MAX;
	uint32_t x316 = 2U;
	uint64_t t6 = 224619310167LLU;

    t6 = (x313+(x314+(x315<<x316)));

    if (t6 != 131066LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x326 = UINT32_MAX;
	uint8_t x327 = UINT8_MAX;
	int8_t x328 = 7;
	static uint32_t t7 = 5274796U;

    t7 = (x325+(x326+(x327<<x328)));

    if (t7 != 32511U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x329 = 47;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = 98830298LL;
	uint8_t x332 = 7U;
	volatile uint64_t t8 = 362768524996730492LLU;

    t8 = (x329+(x330+(x331<<x332)));

    if (t8 != 12650278190LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x485 = -1;
	static uint16_t x486 = UINT16_MAX;
	static uint16_t x487 = 18951U;
	uint8_t x488 = 12U;
	static int32_t t9 = 1;

    t9 = (x485+(x486+(x487<<x488)));

    if (t9 != 77688830) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x505 = INT32_MAX;
	volatile uint64_t x507 = 5254654443882269351LLU;
	uint8_t x508 = 1U;
	volatile uint64_t t10 = 869929475LLU;

    t10 = (x505+(x506+(x507<<x508)));

    if (t10 != 10509308889912022221LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x549 = INT16_MIN;
	int64_t x550 = -1LL;
	uint64_t x551 = 2826176879184LLU;
	static uint8_t x552 = 14U;
	volatile uint64_t t11 = 5079LLU;

    t11 = (x549+(x550+(x551<<x552)));

    if (t11 != 46304081988517887LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x605 = INT8_MIN;
	uint8_t x606 = UINT8_MAX;
	static uint8_t x608 = 0U;
	static int32_t t12 = -2758;

    t12 = (x605+(x606+(x607<<x608)));

    if (t12 != 133) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x634 = INT64_MAX;
	uint8_t x635 = 0U;
	volatile int16_t x636 = 2;
	volatile int64_t t13 = 877959088344126LL;

    t13 = (x633+(x634+(x635<<x636)));

    if (t13 != 9223372036854768185LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x733 = -1;
	volatile int16_t x734 = 1;
	int64_t x735 = 37856479667632LL;
	static uint8_t x736 = 15U;
	volatile int64_t t14 = -1833229080LL;

    t14 = (x733+(x734+(x735<<x736)));

    if (t14 != 1240481125748965376LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x857 = UINT8_MAX;
	uint8_t x858 = 59U;
	volatile uint32_t x859 = 525487998U;
	uint32_t t15 = 686U;

    t15 = (x857+(x858+(x859<<x860)));

    if (t15 != 1240449338U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x870 = INT64_MIN;
	uint8_t x871 = 12U;
	static volatile uint32_t x872 = 2U;
	int64_t t16 = -34873759923855608LL;

    t16 = (x869+(x870+(x871<<x872)));

    if (t16 != -9223372036854775761LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x877 = INT16_MIN;
	volatile int8_t x878 = -1;
	volatile uint8_t x879 = UINT8_MAX;
	volatile int8_t x880 = 0;
	int32_t t17 = -363;

    t17 = (x877+(x878+(x879<<x880)));

    if (t17 != -32514) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x922 = 1;
	uint16_t x923 = 1740U;
	static uint16_t x924 = 0U;

    t18 = (x921+(x922+(x923<<x924)));

    if (t18 != 1613) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x1014 = -37;
	int8_t x1016 = 1;
	volatile uint64_t t19 = 1458362LLU;

    t19 = (x1013+(x1014+(x1015<<x1016)));

    if (t19 != 9223372069784069238LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1113 = INT32_MIN;
	uint32_t x1114 = UINT32_MAX;
	int8_t x1116 = 1;
	uint32_t t20 = 45U;

    t20 = (x1113+(x1114+(x1115<<x1116)));

    if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1141 = UINT16_MAX;
	volatile int8_t x1142 = INT8_MIN;
	int8_t x1143 = INT8_MAX;
	uint8_t x1144 = 11U;
	static volatile int32_t t21 = 510709;

    t21 = (x1141+(x1142+(x1143<<x1144)));

    if (t21 != 325503) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x1165 = 13064U;
	volatile uint64_t x1166 = UINT64_MAX;
	static uint64_t x1167 = 8288456LLU;
	uint8_t x1168 = 27U;
	uint64_t t22 = 2154647545226LLU;

    t22 = (x1165+(x1166+(x1167<<x1168)));

    if (t22 != 1112457732961031LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x1257 = INT8_MAX;
	int64_t x1258 = INT64_MIN;
	volatile uint32_t x1259 = 1224707U;
	uint8_t x1260 = 20U;
	volatile int64_t t23 = 65723428568LL;

    t23 = (x1257+(x1258+(x1259<<x1260)));

    if (t23 != -9223372036851629953LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1305 = -1;
	static uint32_t x1307 = 2000U;
	int32_t x1308 = 2;
	uint32_t t24 = 678306457U;

    t24 = (x1305+(x1306+(x1307<<x1308)));

    if (t24 != 8126U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x1393 = 14;
	int32_t x1394 = INT32_MIN;

    t25 = (x1393+(x1394+(x1395<<x1396)));

    if (t25 != -2147483620) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x1397 = -1;
	static uint8_t x1398 = 1U;
	uint32_t x1399 = 24570U;
	volatile uint32_t t26 = 820295U;

    t26 = (x1397+(x1398+(x1399<<x1400)));

    if (t26 != 49140U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1406 = 2;
	static uint8_t x1407 = 2U;
	uint16_t x1408 = 1U;
	static volatile int32_t t27 = 14235;

    t27 = (x1405+(x1406+(x1407<<x1408)));

    if (t27 != 65541) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1409 = INT8_MIN;
	volatile int32_t x1410 = 5162;
	static uint16_t x1411 = 101U;
	uint8_t x1412 = 0U;
	volatile int32_t t28 = 53;

    t28 = (x1409+(x1410+(x1411<<x1412)));

    if (t28 != 5135) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x1441 = INT32_MAX;
	uint8_t x1444 = 5U;
	volatile uint64_t t29 = 2483987LLU;

    t29 = (x1441+(x1442+(x1443<<x1444)));

    if (t29 != 2148532190LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1525 = -1;
	int16_t x1526 = INT16_MIN;
	static uint16_t x1527 = 944U;
	int32_t x1528 = 9;
	int32_t t30 = -8;

    t30 = (x1525+(x1526+(x1527<<x1528)));

    if (t30 != 450559) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x1650 = INT8_MIN;
	uint64_t x1651 = 105596434956970LLU;
	volatile uint8_t x1652 = 13U;
	uint64_t t31 = 260378LLU;

    t31 = (x1649+(x1650+(x1651<<x1652)));

    if (t31 != 865045995167498111LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x1685 = 5933465930121127LLU;
	volatile int8_t x1686 = 3;
	int32_t x1687 = 3616105;
	int32_t x1688 = 0;
	volatile uint64_t t32 = 7109121080391270LLU;

    t32 = (x1685+(x1686+(x1687<<x1688)));

    if (t32 != 5933465933737235LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x1713 = INT8_MIN;
	volatile int8_t x1714 = 3;
	int8_t x1715 = 9;
	int8_t x1716 = 1;
	volatile int32_t t33 = -1491;

    t33 = (x1713+(x1714+(x1715<<x1716)));

    if (t33 != -107) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x1737 = 27915527U;
	volatile int8_t x1738 = -1;
	static uint16_t x1739 = 17373U;
	uint8_t x1740 = 1U;

    t34 = (x1737+(x1738+(x1739<<x1740)));

    if (t34 != 27950272U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x1886 = INT8_MIN;
	uint8_t x1887 = UINT8_MAX;
	volatile int64_t x1888 = 1LL;
	int64_t t35 = 3LL;

    t35 = (x1885+(x1886+(x1887<<x1888)));

    if (t35 != -9223372036854775426LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1933 = 2458114072849LL;
	int16_t x1934 = 0;
	volatile int16_t x1936 = 1;

    t36 = (x1933+(x1934+(x1935<<x1936)));

    if (t36 != 2458849063603LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2105 = INT8_MIN;
	int32_t x2107 = 13;
	static int16_t x2108 = 3;
	uint32_t t37 = 11529U;

    t37 = (x2105+(x2106+(x2107<<x2108)));

    if (t37 != 52162021U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x2174 = UINT8_MAX;
	uint32_t x2175 = UINT32_MAX;
	uint16_t x2176 = 3U;
	static volatile uint32_t t38 = 1127738U;

    t38 = (x2173+(x2174+(x2175<<x2176)));

    if (t38 != 119U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x2277 = INT32_MIN;
	static volatile int64_t x2278 = -8847272209115011LL;
	uint64_t x2279 = 55LLU;
	int32_t x2280 = 3;
	volatile uint64_t t39 = 1228545581860062094LLU;

    t39 = (x2277+(x2278+(x2279<<x2280)));

    if (t39 != 18437896799352953397LLU) { NG(); } else { ; }
	
}

void f40(void) {
    

    t40 = (x2301+(x2302+(x2303<<x2304)));

    if (t40 != 7686LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x2337 = -1;
	int32_t x2338 = INT32_MIN;
	int8_t x2340 = 0;
	volatile int32_t t41 = -61;

    t41 = (x2337+(x2338+(x2339<<x2340)));

    if (t41 != -2147450882) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x2501 = 128356126U;
	int8_t x2502 = INT8_MIN;
	uint32_t x2503 = 65158U;
	int8_t x2504 = 8;

    t42 = (x2501+(x2502+(x2503<<x2504)));

    if (t42 != 145036446U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x2585 = 1456756U;
	int64_t x2586 = INT64_MIN;
	static volatile uint32_t x2587 = 184906942U;
	static int16_t x2588 = 1;
	volatile int64_t t43 = 28002264296LL;

    t43 = (x2585+(x2586+(x2587<<x2588)));

    if (t43 != -9223372036483505168LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x2645 = 0U;
	uint32_t x2646 = 49U;
	volatile int16_t x2647 = 839;
	volatile uint32_t t44 = 1U;

    t44 = (x2645+(x2646+(x2647<<x2648)));

    if (t44 != 1727U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2670 = UINT16_MAX;
	volatile int8_t x2671 = 1;
	volatile uint8_t x2672 = 12U;
	static int32_t t45 = 48;

    t45 = (x2669+(x2670+(x2671<<x2672)));

    if (t45 != 69630) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x2718 = 4U;
	uint64_t x2719 = 1765823094099LLU;
	uint16_t x2720 = 6U;
	uint64_t t46 = 113163LLU;

    t46 = (x2717+(x2718+(x2719<<x2720)));

    if (t46 != 113012678022212LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x2929 = -75619;
	uint64_t x2930 = 937291171519979LLU;
	uint8_t x2932 = 1U;

    t47 = (x2929+(x2930+(x2931<<x2932)));

    if (t47 != 937306043150202LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x3025 = 4573U;
	int8_t x3026 = INT8_MIN;
	uint8_t x3027 = 2U;
	int16_t x3028 = 1;
	volatile uint32_t t48 = 234118U;

    t48 = (x3025+(x3026+(x3027<<x3028)));

    if (t48 != 4449U) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x3030 = -1;
	static uint32_t x3031 = 87644439U;
	uint16_t x3032 = 3U;
	volatile uint32_t t49 = 9U;

    t49 = (x3029+(x3030+(x3031<<x3032)));

    if (t49 != 701155567U) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x3057 = 53333806LLU;
	uint64_t x3058 = UINT64_MAX;
	int8_t x3059 = 5;
	uint32_t x3060 = 10U;
	volatile uint64_t t50 = 2143783292260LLU;

    t50 = (x3057+(x3058+(x3059<<x3060)));

    if (t50 != 53338925LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3185 = 75218;
	static uint64_t x3186 = 372620LLU;
	volatile uint8_t x3188 = 4U;
	uint64_t t51 = 702111340343777LLU;

    t51 = (x3185+(x3186+(x3187<<x3188)));

    if (t51 != 4295415118LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x3249 = -1;
	int32_t x3250 = INT32_MAX;
	int64_t x3251 = 0LL;
	int8_t x3252 = 0;
	int64_t t52 = -1648288519778LL;

    t52 = (x3249+(x3250+(x3251<<x3252)));

    if (t52 != 2147483646LL) { NG(); } else { ; }
	
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


    return 0;
}

