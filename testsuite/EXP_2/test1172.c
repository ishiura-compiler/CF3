#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x21 = 18;
int32_t t0 = 7679333;
uint16_t x34 = 5U;
int32_t t1 = -258;
volatile int64_t x62 = INT64_MAX;
uint16_t x69 = 2668U;
uint64_t x70 = 1644975065706034482LLU;
int32_t x72 = -7235278;
volatile int16_t x90 = 506;
volatile int16_t x91 = 1;
int32_t x92 = INT32_MIN;
int8_t x256 = INT8_MAX;
static int8_t x273 = -1;
uint8_t x274 = 6U;
uint16_t x365 = UINT16_MAX;
volatile int32_t t11 = -187491;
int16_t x374 = INT16_MAX;
volatile int64_t t12 = 3956LL;
int64_t x544 = -1LL;
int32_t x660 = -38;
uint32_t x715 = 3U;
static volatile int32_t t16 = 3170324;
int64_t x859 = 1LL;
int64_t x1057 = -44146LL;
volatile uint64_t t23 = 2163549904LLU;
volatile uint64_t t24 = 104751LLU;
uint16_t x1561 = UINT16_MAX;
volatile int64_t t26 = 6132363LL;
uint8_t x1599 = 4U;
static volatile int32_t x1600 = 460086;
uint64_t x1717 = 224LLU;
uint32_t x1718 = UINT32_MAX;
static uint8_t x1719 = 20U;
static int32_t x1720 = -2800;
uint64_t t31 = 509903020755LLU;
volatile uint32_t t32 = 48851U;
uint8_t x1863 = 3U;
static int32_t x2038 = INT32_MAX;
int16_t x2040 = INT16_MAX;
static uint16_t x2069 = UINT16_MAX;
int32_t t36 = 13148;
int8_t x2154 = 11;
static int8_t x2156 = INT8_MAX;
volatile int16_t x2253 = INT16_MIN;
uint64_t x2282 = 453910602534496LLU;
int16_t x2329 = -1;
static uint8_t x2443 = 3U;
uint64_t x2446 = 25197382533088084LLU;
uint32_t x2587 = 0U;
int32_t x2598 = 850285;
int16_t x2649 = INT16_MIN;
int32_t x2652 = INT32_MAX;
int16_t x2680 = -1;
static volatile uint8_t x2770 = 1U;
volatile uint64_t t49 = 5LLU;
uint32_t x2806 = 13U;
volatile uint32_t t50 = 10050794U;
int8_t x2843 = 0;
uint8_t x2890 = UINT8_MAX;
int64_t x3121 = 3468828949692508996LL;
uint8_t x3193 = UINT8_MAX;
static int8_t x3195 = 3;
volatile uint64_t t58 = 47999287LLU;
volatile uint16_t x3282 = 1670U;
int16_t x3283 = 18;
static volatile uint8_t x3299 = 0U;
int16_t x3483 = 0;
volatile uint8_t x3494 = 120U;
uint16_t x3495 = 1U;
int32_t x3749 = -1;
uint16_t x3750 = 0U;
int16_t x3751 = 1;
int64_t x3872 = 1148762164LL;
volatile int32_t t70 = 1;
int16_t x4004 = INT16_MIN;
uint16_t x4061 = 23U;
volatile int64_t x4064 = -1089015527513LL;
volatile int64_t x4141 = -230784397LL;
uint32_t x4142 = UINT32_MAX;
int32_t x4144 = INT32_MAX;
static uint32_t x4156 = UINT32_MAX;
static volatile uint8_t x4174 = 109U;
int32_t x4176 = INT32_MIN;
uint8_t x4247 = 9U;
int16_t x4265 = INT16_MAX;
uint64_t x4390 = UINT64_MAX;
static int64_t x4469 = 26859089057230LL;
static volatile int64_t t83 = 1785119775694114LL;
uint32_t x4589 = 7312U;
int32_t x4592 = INT32_MIN;
uint32_t t86 = 3U;
static volatile uint8_t x4890 = UINT8_MAX;
uint32_t x4891 = 13U;
int32_t t89 = 519132394;
int32_t x4920 = INT32_MIN;
static int64_t x4926 = INT64_MAX;
volatile uint8_t x4928 = UINT8_MAX;
int32_t x4950 = 6;
int64_t x4961 = -15LL;
static int16_t x5081 = -1;
int64_t x5084 = INT64_MAX;
volatile uint8_t x5150 = 5U;
uint32_t x5182 = 7089U;
uint8_t x5184 = 39U;
static uint8_t x5188 = 0U;
int32_t t98 = 7120;


void f0(void) {
	uint8_t x22 = 39U;
	uint8_t x23 = 2U;
	volatile int16_t x24 = 3;

	t0 = ((x21^(x22>>x23))-x24);

	if (t0 != 24) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x33 = INT32_MAX;
	int8_t x35 = 0;
	int16_t x36 = 1;

	t1 = ((x33^(x34>>x35))-x36);

	if (t1 != 2147483641) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x61 = -1;
	static volatile int8_t x63 = 5;
	static uint64_t x64 = 2148271LLU;
	static volatile uint64_t t2 = 549LLU;

	t2 = ((x61^(x62>>x63))-x64);

	if (t2 != 18158513697555691601LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x71 = 57;
	uint64_t t3 = 83349LLU;

	t3 = ((x69^(x70>>x71))-x72);

	if (t3 != 7237941LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x89 = INT32_MIN;
	static volatile int32_t t4 = 191;

	t4 = ((x89^(x90>>x91))-x92);

	if (t4 != 253) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x129 = INT8_MIN;
	uint32_t x130 = 354U;
	uint8_t x131 = 17U;
	int8_t x132 = -1;
	uint32_t t5 = 793U;

	t5 = ((x129^(x130>>x131))-x132);

	if (t5 != 4294967169U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x205 = -1;
	int32_t x206 = INT32_MAX;
	static int8_t x207 = 13;
	int32_t x208 = INT32_MIN;
	static int32_t t6 = -1149;

	t6 = ((x205^(x206>>x207))-x208);

	if (t6 != 2147221504) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x253 = -1LL;
	static int32_t x254 = INT32_MAX;
	uint64_t x255 = 3LLU;
	volatile int64_t t7 = -145715013334004LL;

	t7 = ((x253^(x254>>x255))-x256);

	if (t7 != -268435583LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x275 = 1U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t8 = -184740098;

	t8 = ((x273^(x274>>x275))-x276);

	if (t8 != 124) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x285 = 5U;
	uint16_t x286 = 22U;
	volatile uint32_t x287 = 3U;
	uint32_t x288 = 24U;
	volatile uint32_t t9 = 129092U;

	t9 = ((x285^(x286>>x287))-x288);

	if (t9 != 4294967279U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x349 = INT8_MIN;
	volatile int16_t x350 = 373;
	int32_t x351 = 0;
	uint16_t x352 = UINT16_MAX;
	static int32_t t10 = -9;

	t10 = ((x349^(x350>>x351))-x352);

	if (t10 != -65802) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x366 = INT32_MAX;
	uint16_t x367 = 1U;
	int32_t x368 = 101888;

	t11 = ((x365^(x366>>x367))-x368);

	if (t11 != 1073574400) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x373 = INT8_MAX;
	static volatile int16_t x375 = 26;
	int64_t x376 = INT64_MAX;

	t12 = ((x373^(x374>>x375))-x376);

	if (t12 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x541 = INT64_MAX;
	volatile uint64_t x542 = 62826129LLU;
	uint16_t x543 = 6U;
	uint64_t t13 = 86601654416575LLU;

	t13 = ((x541^(x542>>x543))-x544);

	if (t13 != 9223372036853794150LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x545 = UINT64_MAX;
	static uint64_t x546 = 10LLU;
	uint16_t x547 = 14U;
	volatile int8_t x548 = INT8_MIN;
	static volatile uint64_t t14 = 12LLU;

	t14 = ((x545^(x546>>x547))-x548);

	if (t14 != 127LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x657 = 7023U;
	volatile uint16_t x658 = 16U;
	int16_t x659 = 0;
	volatile int32_t t15 = -33356;

	t15 = ((x657^(x658>>x659))-x660);

	if (t15 != 7077) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x713 = INT16_MAX;
	int32_t x714 = INT32_MAX;
	uint16_t x716 = 3550U;

	t16 = ((x713^(x714>>x715))-x716);

	if (t16 != 268399138) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x857 = 5U;
	volatile uint16_t x858 = 729U;
	int32_t x860 = -1;
	int32_t t17 = 161767275;

	t17 = ((x857^(x858>>x859))-x860);

	if (t17 != 362) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x889 = -1;
	uint16_t x890 = UINT16_MAX;
	uint8_t x891 = 0U;
	int64_t x892 = INT64_MIN;
	volatile int64_t t18 = 22010228834388956LL;

	t18 = ((x889^(x890>>x891))-x892);

	if (t18 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x1058 = 2U;
	static volatile uint8_t x1059 = 0U;
	volatile int8_t x1060 = -1;
	volatile int64_t t19 = 1721608293LL;

	t19 = ((x1057^(x1058>>x1059))-x1060);

	if (t19 != -44147LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1105 = 92179318644LLU;
	int8_t x1106 = INT8_MAX;
	uint8_t x1107 = 3U;
	volatile int64_t x1108 = INT64_MIN;
	uint64_t t20 = 41291LLU;

	t20 = ((x1105^(x1106>>x1107))-x1108);

	if (t20 != 9223372129034094459LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1133 = 2U;
	uint64_t x1134 = UINT64_MAX;
	uint16_t x1135 = 9U;
	uint64_t x1136 = 1050LLU;
	volatile uint64_t t21 = 1416315950632592982LLU;

	t21 = ((x1133^(x1134>>x1135))-x1136);

	if (t21 != 36028797018962915LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1185 = 3;
	int32_t x1186 = INT32_MAX;
	static volatile uint32_t x1187 = 27U;
	int32_t x1188 = 3338268;
	int32_t t22 = -2186;

	t22 = ((x1185^(x1186>>x1187))-x1188);

	if (t22 != -3338256) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1225 = 806899466931950LLU;
	uint16_t x1226 = UINT16_MAX;
	uint8_t x1227 = 1U;
	int32_t x1228 = INT32_MAX;

	t23 = ((x1225^(x1226>>x1227))-x1228);

	if (t23 != 806897319473426LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1289 = UINT64_MAX;
	volatile int64_t x1290 = INT64_MAX;
	uint8_t x1291 = 0U;
	int32_t x1292 = INT32_MIN;

	t24 = ((x1289^(x1290>>x1291))-x1292);

	if (t24 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1377 = -1;
	uint16_t x1378 = UINT16_MAX;
	volatile uint64_t x1379 = 0LLU;
	int64_t x1380 = INT64_MIN;
	volatile int64_t t25 = 730423086LL;

	t25 = ((x1377^(x1378>>x1379))-x1380);

	if (t25 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1562 = 4360U;
	uint8_t x1563 = 8U;
	static int64_t x1564 = -1783LL;

	t26 = ((x1561^(x1562>>x1563))-x1564);

	if (t26 != 67301LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1569 = -1195;
	static uint64_t x1570 = 8946643726043LLU;
	uint8_t x1571 = 57U;
	int16_t x1572 = -1;
	uint64_t t27 = 1729LLU;

	t27 = ((x1569^(x1570>>x1571))-x1572);

	if (t27 != 18446744073709550422LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1577 = 23;
	uint64_t x1578 = 2917158LLU;
	uint64_t x1579 = 0LLU;
	int16_t x1580 = 11502;
	static volatile uint64_t t28 = 2366968957367550LLU;

	t28 = ((x1577^(x1578>>x1579))-x1580);

	if (t28 != 2905667LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1597 = INT8_MIN;
	uint16_t x1598 = 294U;
	int32_t t29 = 8506;

	t29 = ((x1597^(x1598>>x1599))-x1600);

	if (t29 != -460196) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1661 = INT32_MAX;
	int64_t x1662 = 140575963639261056LL;
	int16_t x1663 = 0;
	int8_t x1664 = INT8_MIN;
	static int64_t t30 = 591443404LL;

	t30 = ((x1661^(x1662>>x1663))-x1664);

	if (t30 != 140575964958742783LL) { NG(); } else { ; }
	
}

void f31(void) {


	t31 = ((x1717^(x1718>>x1719))-x1720);

	if (t31 != 6671LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1741 = 16277006U;
	static uint32_t x1742 = UINT32_MAX;
	static uint8_t x1743 = 4U;
	int8_t x1744 = INT8_MAX;

	t32 = ((x1741^(x1742>>x1743))-x1744);

	if (t32 != 252158322U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1861 = UINT32_MAX;
	uint64_t x1862 = UINT64_MAX;
	volatile int32_t x1864 = -1;
	uint64_t t33 = 43193LLU;

	t33 = ((x1861^(x1862>>x1863))-x1864);

	if (t33 != 2305843004918726657LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2037 = -3227074;
	uint32_t x2039 = 7U;
	int32_t t34 = 10;

	t34 = ((x2037^(x2038>>x2039))-x2040);

	if (t34 != -13582910) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x2070 = INT32_MAX;
	volatile int8_t x2071 = 1;
	int8_t x2072 = 1;
	static int32_t t35 = 1;

	t35 = ((x2069^(x2070>>x2071))-x2072);

	if (t35 != 1073676287) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2097 = -1;
	volatile uint8_t x2098 = UINT8_MAX;
	static volatile int64_t x2099 = 0LL;
	static int16_t x2100 = INT16_MIN;

	t36 = ((x2097^(x2098>>x2099))-x2100);

	if (t36 != 32512) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x2153 = INT16_MAX;
	uint16_t x2155 = 13U;
	static volatile int32_t t37 = -254211;

	t37 = ((x2153^(x2154>>x2155))-x2156);

	if (t37 != 32640) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2241 = 42U;
	int8_t x2242 = INT8_MAX;
	volatile int8_t x2243 = 8;
	int8_t x2244 = INT8_MAX;
	int32_t t38 = -7;

	t38 = ((x2241^(x2242>>x2243))-x2244);

	if (t38 != -85) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2254 = UINT16_MAX;
	static uint64_t x2255 = 27LLU;
	uint8_t x2256 = 0U;
	volatile int32_t t39 = -681243;

	t39 = ((x2253^(x2254>>x2255))-x2256);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2281 = 112983598U;
	static uint16_t x2283 = 0U;
	volatile int32_t x2284 = INT32_MAX;
	volatile uint64_t t40 = 940622199847842LLU;

	t40 = ((x2281^(x2282>>x2283))-x2284);

	if (t40 != 453908426305615LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2330 = INT16_MAX;
	uint8_t x2331 = 1U;
	uint32_t x2332 = UINT32_MAX;
	volatile uint32_t t41 = 16435854U;

	t41 = ((x2329^(x2330>>x2331))-x2332);

	if (t41 != 4294950913U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2405 = -1LL;
	static volatile int32_t x2406 = 12;
	static uint8_t x2407 = 2U;
	uint8_t x2408 = UINT8_MAX;
	int64_t t42 = -4412817748777324LL;

	t42 = ((x2405^(x2406>>x2407))-x2408);

	if (t42 != -259LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2441 = 605845024860436738LLU;
	uint16_t x2442 = UINT16_MAX;
	uint16_t x2444 = 58U;
	volatile uint64_t t43 = 79LLU;

	t43 = ((x2441^(x2442>>x2443))-x2444);

	if (t43 != 605845024860432067LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2445 = UINT8_MAX;
	static uint8_t x2447 = 11U;
	int32_t x2448 = INT32_MAX;
	volatile uint64_t t44 = 84LLU;

	t44 = ((x2445^(x2446>>x2447))-x2448);

	if (t44 != 12301261956112LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2585 = UINT16_MAX;
	uint64_t x2586 = 27753300731646077LLU;
	volatile int32_t x2588 = -92382;
	static volatile uint64_t t45 = 45571LLU;

	t45 = ((x2585^(x2586>>x2587))-x2588);

	if (t45 != 27753300731762784LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2597 = 11174339173936LLU;
	int16_t x2599 = 0;
	volatile uint8_t x2600 = UINT8_MAX;
	uint64_t t46 = 4209453LLU;

	t46 = ((x2597^(x2598>>x2599))-x2600);

	if (t46 != 11174339454558LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2650 = UINT64_MAX;
	int16_t x2651 = 0;
	volatile uint64_t t47 = 2777662LLU;

	t47 = ((x2649^(x2650>>x2651))-x2652);

	if (t47 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2677 = -1;
	static uint32_t x2678 = UINT32_MAX;
	uint8_t x2679 = 0U;
	volatile uint32_t t48 = 24U;

	t48 = ((x2677^(x2678>>x2679))-x2680);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2769 = 12430860717LLU;
	uint16_t x2771 = 15U;
	int32_t x2772 = 21;

	t49 = ((x2769^(x2770>>x2771))-x2772);

	if (t49 != 12430860696LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x2805 = INT8_MIN;
	volatile int8_t x2807 = 1;
	static int16_t x2808 = -1;

	t50 = ((x2805^(x2806>>x2807))-x2808);

	if (t50 != 4294967175U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2841 = INT32_MIN;
	int8_t x2842 = 4;
	static uint32_t x2844 = 720640560U;
	uint32_t t51 = 1610036U;

	t51 = ((x2841^(x2842>>x2843))-x2844);

	if (t51 != 1426843092U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2889 = 128U;
	uint16_t x2891 = 3U;
	int16_t x2892 = INT16_MIN;
	volatile uint32_t t52 = 615899U;

	t52 = ((x2889^(x2890>>x2891))-x2892);

	if (t52 != 32927U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x3029 = 1489U;
	int64_t x3030 = INT64_MAX;
	uint32_t x3031 = 3U;
	static int32_t x3032 = INT32_MIN;
	volatile int64_t t53 = 4356157886671428219LL;

	t53 = ((x3029^(x3030>>x3031))-x3032);

	if (t53 != 1152921506754329134LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3122 = INT32_MAX;
	volatile uint8_t x3123 = 3U;
	static int8_t x3124 = INT8_MIN;
	volatile int64_t t54 = 1604984830210659LL;

	t54 = ((x3121^(x3122>>x3123))-x3124);

	if (t54 != 3468828949792724283LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3129 = UINT32_MAX;
	uint64_t x3130 = 3807LLU;
	int16_t x3131 = 0;
	int32_t x3132 = INT32_MAX;
	uint64_t t55 = 65211875234109696LLU;

	t55 = ((x3129^(x3130>>x3131))-x3132);

	if (t55 != 2147479841LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x3157 = INT64_MIN;
	volatile uint8_t x3158 = 15U;
	static uint16_t x3159 = 0U;
	static int64_t x3160 = -52037720216LL;
	volatile int64_t t56 = -177286LL;

	t56 = ((x3157^(x3158>>x3159))-x3160);

	if (t56 != -9223371984817055577LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x3194 = 25U;
	int16_t x3196 = INT16_MIN;
	volatile int32_t t57 = 0;

	t57 = ((x3193^(x3194>>x3195))-x3196);

	if (t57 != 33020) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3201 = 5762018346187927157LLU;
	uint32_t x3202 = 702U;
	uint64_t x3203 = 1LLU;
	static int64_t x3204 = 26824402LL;

	t58 = ((x3201^(x3202>>x3203))-x3204);

	if (t58 != 5762018346161102936LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3281 = INT8_MIN;
	int8_t x3284 = -13;
	int32_t t59 = -162289780;

	t59 = ((x3281^(x3282>>x3283))-x3284);

	if (t59 != -115) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3297 = 18;
	uint16_t x3298 = 30U;
	static volatile uint64_t x3300 = 153502378506879106LLU;
	static volatile uint64_t t60 = 3289485177LLU;

	t60 = ((x3297^(x3298>>x3299))-x3300);

	if (t60 != 18293241695202672522LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3397 = 114143425U;
	static uint16_t x3398 = UINT16_MAX;
	int32_t x3399 = 7;
	volatile int64_t x3400 = INT64_MAX;
	volatile int64_t t61 = -4186762381LL;

	t61 = ((x3397^(x3398>>x3399))-x3400);

	if (t61 != -9223372036740632257LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3481 = INT32_MIN;
	volatile int32_t x3482 = 0;
	int16_t x3484 = INT16_MIN;
	volatile int32_t t62 = 30671013;

	t62 = ((x3481^(x3482>>x3483))-x3484);

	if (t62 != -2147450880) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3493 = 5569832405201LLU;
	int32_t x3496 = INT32_MIN;
	volatile uint64_t t63 = 5614449904LLU;

	t63 = ((x3493^(x3494>>x3495))-x3496);

	if (t63 != 5571979888877LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3677 = INT16_MIN;
	volatile int16_t x3678 = INT16_MAX;
	uint16_t x3679 = 0U;
	int32_t x3680 = INT32_MIN;
	volatile int32_t t64 = INT32_MAX;

	t64 = ((x3677^(x3678>>x3679))-x3680);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x3733 = -97272LL;
	int16_t x3734 = INT16_MAX;
	int8_t x3735 = 4;
	volatile int16_t x3736 = INT16_MIN;
	static volatile int64_t t65 = 2140762LL;

	t65 = ((x3733^(x3734>>x3735))-x3736);

	if (t65 != -64521LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x3737 = INT64_MAX;
	uint8_t x3738 = 108U;
	static int16_t x3739 = 0;
	uint16_t x3740 = 492U;
	volatile int64_t t66 = 22LL;

	t66 = ((x3737^(x3738>>x3739))-x3740);

	if (t66 != 9223372036854775207LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3752 = -25;
	volatile int32_t t67 = 485197871;

	t67 = ((x3749^(x3750>>x3751))-x3752);

	if (t67 != 24) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x3761 = -1;
	int16_t x3762 = INT16_MAX;
	int16_t x3763 = 1;
	volatile uint64_t x3764 = 843724245818332LLU;
	uint64_t t68 = 8222435918403458802LLU;

	t68 = ((x3761^(x3762>>x3763))-x3764);

	if (t68 != 18445900349463716900LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x3869 = 2541U;
	int64_t x3870 = INT64_MAX;
	uint32_t x3871 = 33U;
	int64_t t69 = 2136209714350136LL;

	t69 = ((x3869^(x3870>>x3871))-x3872);

	if (t69 != -75022882LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3905 = 59;
	static volatile int16_t x3906 = INT16_MAX;
	static int8_t x3907 = 0;
	int32_t x3908 = 213;

	t70 = ((x3905^(x3906>>x3907))-x3908);

	if (t70 != 32495) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4001 = -547;
	int64_t x4002 = 0LL;
	uint8_t x4003 = 2U;
	static volatile int64_t t71 = -605657529841352193LL;

	t71 = ((x4001^(x4002>>x4003))-x4004);

	if (t71 != 32221LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4025 = -11594675;
	volatile int64_t x4026 = INT64_MAX;
	uint8_t x4027 = 3U;
	static int64_t x4028 = INT64_MIN;
	volatile int64_t t72 = 140982246781981203LL;

	t72 = ((x4025^(x4026>>x4027))-x4028);

	if (t72 != 8070450532259523506LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x4029 = INT32_MAX;
	static int16_t x4030 = INT16_MAX;
	uint32_t x4031 = 8U;
	int32_t x4032 = 16547640;
	volatile int32_t t73 = 17335;

	t73 = ((x4029^(x4030>>x4031))-x4032);

	if (t73 != 2130935880) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4062 = 2;
	int8_t x4063 = 1;
	volatile int64_t t74 = -14734303425LL;

	t74 = ((x4061^(x4062>>x4063))-x4064);

	if (t74 != 1089015527535LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4143 = 27U;
	static int64_t t75 = 175774LL;

	t75 = ((x4141^(x4142>>x4143))-x4144);

	if (t75 != -2378268051LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4153 = INT8_MIN;
	volatile uint64_t x4154 = UINT64_MAX;
	uint32_t x4155 = 20U;
	volatile uint64_t t76 = 841LLU;

	t76 = ((x4153^(x4154>>x4155))-x4156);

	if (t76 != 18446726477228540032LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4157 = INT32_MAX;
	volatile int32_t x4158 = INT32_MAX;
	uint8_t x4159 = 10U;
	uint64_t x4160 = UINT64_MAX;
	uint64_t t77 = 154479827LLU;

	t77 = ((x4157^(x4158>>x4159))-x4160);

	if (t77 != 2145386497LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4173 = UINT32_MAX;
	int16_t x4175 = 5;
	static uint32_t t78 = 1U;

	t78 = ((x4173^(x4174>>x4175))-x4176);

	if (t78 != 2147483644U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x4245 = 8782044009186797LL;
	uint32_t x4246 = UINT32_MAX;
	static volatile uint32_t x4248 = 2304U;
	volatile int64_t t79 = 22045962934LL;

	t79 = ((x4245^(x4246>>x4247))-x4248);

	if (t79 != 8782044015243538LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4266 = 7;
	static uint32_t x4267 = 13U;
	int64_t x4268 = -855173LL;
	volatile int64_t t80 = -7470LL;

	t80 = ((x4265^(x4266>>x4267))-x4268);

	if (t80 != 887940LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4309 = INT16_MIN;
	uint64_t x4310 = 7380815606880248LLU;
	static uint8_t x4311 = 54U;
	uint16_t x4312 = UINT16_MAX;
	uint64_t t81 = 24443124594019LLU;

	t81 = ((x4309^(x4310>>x4311))-x4312);

	if (t81 != 18446744073709453313LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4389 = -1;
	static volatile uint32_t x4391 = 5U;
	static int32_t x4392 = -13612030;
	volatile uint64_t t82 = 1758LLU;

	t82 = ((x4389^(x4390>>x4391))-x4392);

	if (t82 != 17870283321419740158LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x4470 = 29767U;
	uint32_t x4471 = 1U;
	static int32_t x4472 = 44;

	t83 = ((x4469^(x4470>>x4471))-x4472);

	if (t83 != 26859089063873LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4553 = UINT8_MAX;
	uint16_t x4554 = UINT16_MAX;
	static volatile uint16_t x4555 = 2U;
	int32_t x4556 = 1;
	int32_t t84 = 853;

	t84 = ((x4553^(x4554>>x4555))-x4556);

	if (t84 != 16127) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x4590 = 0U;
	static uint8_t x4591 = 15U;
	volatile uint32_t t85 = 857U;

	t85 = ((x4589^(x4590>>x4591))-x4592);

	if (t85 != 2147490960U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4609 = INT32_MIN;
	uint32_t x4610 = 190878313U;
	int32_t x4611 = 7;
	uint8_t x4612 = UINT8_MAX;

	t86 = ((x4609^(x4610>>x4611))-x4612);

	if (t86 != 2148974629U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4781 = 6;
	static volatile int32_t x4782 = INT32_MAX;
	static uint8_t x4783 = 15U;
	int8_t x4784 = -62;
	volatile int32_t t87 = -2;

	t87 = ((x4781^(x4782>>x4783))-x4784);

	if (t87 != 65591) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4813 = UINT8_MAX;
	volatile uint64_t x4814 = 161290101LLU;
	int16_t x4815 = 28;
	static int8_t x4816 = -1;
	uint64_t t88 = 228652239LLU;

	t88 = ((x4813^(x4814>>x4815))-x4816);

	if (t88 != 256LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4889 = INT16_MIN;
	int8_t x4892 = INT8_MAX;

	t89 = ((x4889^(x4890>>x4891))-x4892);

	if (t89 != -32895) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4917 = 7647444U;
	int16_t x4918 = INT16_MAX;
	int8_t x4919 = 1;
	volatile uint32_t t90 = 147U;

	t90 = ((x4917^(x4918>>x4919))-x4920);

	if (t90 != 2155122475U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4925 = -1;
	static uint8_t x4927 = 43U;
	int64_t t91 = 18514341275970LL;

	t91 = ((x4925^(x4926>>x4927))-x4928);

	if (t91 != -1048831LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4949 = 90044716509090LL;
	volatile uint16_t x4951 = 1U;
	uint16_t x4952 = 58U;
	int64_t t92 = -45LL;

	t92 = ((x4949^(x4950>>x4951))-x4952);

	if (t92 != 90044716509031LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4962 = 82LLU;
	static volatile int16_t x4963 = 1;
	static int16_t x4964 = -1;
	volatile uint64_t t93 = 62436LLU;

	t93 = ((x4961^(x4962>>x4963))-x4964);

	if (t93 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5069 = UINT16_MAX;
	uint32_t x5070 = 4121306U;
	volatile uint16_t x5071 = 1U;
	int16_t x5072 = INT16_MIN;
	uint32_t t94 = 33337180U;

	t94 = ((x5069^(x5070>>x5071))-x5072);

	if (t94 != 2100882U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5082 = 7U;
	static volatile uint16_t x5083 = 20U;
	int64_t t95 = INT64_MIN;

	t95 = ((x5081^(x5082>>x5083))-x5084);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5149 = INT32_MAX;
	uint64_t x5151 = 14LLU;
	uint8_t x5152 = 35U;
	int32_t t96 = 3105;

	t96 = ((x5149^(x5150>>x5151))-x5152);

	if (t96 != 2147483612) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x5181 = 8816U;
	int8_t x5183 = 0;
	uint32_t t97 = 439772002U;

	t97 = ((x5181^(x5182>>x5183))-x5184);

	if (t97 != 14746U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5185 = 0;
	int16_t x5186 = INT16_MAX;
	int8_t x5187 = 1;

	t98 = ((x5185^(x5186>>x5187))-x5188);

	if (t98 != 16383) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5305 = INT8_MIN;
	uint16_t x5306 = 528U;
	uint16_t x5307 = 3U;
	int64_t x5308 = -1LL;
	int64_t t99 = -107244328602891LL;

	t99 = ((x5305^(x5306>>x5307))-x5308);

	if (t99 != -61LL) { NG(); } else { ; }
	
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

