#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x34 = INT8_MAX;
int16_t x220 = INT16_MIN;
uint32_t x401 = 1169408U;
static volatile uint32_t t5 = 306230U;
volatile int16_t x599 = 34;
static uint8_t x621 = 1U;
volatile uint32_t t10 = 99U;
static int16_t x841 = INT16_MIN;
int8_t x844 = INT8_MIN;
uint32_t x877 = 0U;
static uint16_t x879 = 1U;
volatile uint32_t x880 = 103U;
uint32_t t12 = 51883U;
int16_t x1009 = INT16_MIN;
uint64_t x1012 = 30557939LLU;
uint32_t x1055 = 0U;
static uint16_t x1060 = 1U;
uint16_t x1075 = 9U;
static int64_t x1076 = -616714879189085251LL;
uint8_t x1185 = 0U;
volatile int64_t x1186 = INT64_MIN;
volatile uint64_t t21 = 8342200343325417833LLU;
volatile uint64_t x1242 = 1LLU;
uint8_t x1347 = 5U;
static uint16_t x1387 = 5U;
uint16_t x1391 = 11U;
static int8_t x1392 = -1;
volatile uint64_t t27 = 2746266LLU;
int16_t x1504 = 1;
int16_t x1529 = INT16_MIN;
int32_t t29 = -6;
uint8_t x1740 = UINT8_MAX;
uint64_t t32 = 21485225070865LLU;
static uint8_t x1779 = 31U;
int16_t x1784 = -1;
static uint32_t t37 = 772850U;
uint32_t x2110 = 1669404U;
uint64_t x2204 = 11235729LLU;
int8_t x2210 = INT8_MAX;
volatile int32_t t41 = 3;
static uint32_t x2357 = 8U;
static volatile uint32_t x2358 = UINT32_MAX;
static volatile int8_t x2670 = INT8_MIN;
static volatile int16_t x2671 = 0;
static uint32_t x2714 = 112653U;
volatile int8_t x2715 = 1;
volatile int8_t x2903 = 5;
uint32_t x2904 = 869196U;
int16_t x2943 = 3;
volatile uint32_t x3000 = UINT32_MAX;
int64_t t53 = -8472818804693LL;
uint8_t x3027 = 1U;
uint32_t x3117 = UINT32_MAX;
int32_t x3132 = -1;
int16_t x3407 = 0;
volatile int64_t t59 = 1414780818LL;
int32_t x3417 = INT32_MAX;
volatile uint64_t t60 = 12570LLU;
uint8_t x3523 = 0U;
volatile uint8_t x3535 = 0U;
uint16_t x3536 = 30U;
uint32_t x3561 = UINT32_MAX;
uint16_t x3574 = 129U;
int64_t x3656 = -39193341963LL;
static uint64_t t68 = 223476LLU;
int16_t x3740 = INT16_MIN;
int64_t x3947 = 1LL;
static int8_t x4191 = 14;
volatile int8_t x4193 = -1;
uint32_t t72 = 46790094U;
uint64_t x4261 = UINT64_MAX;
static int64_t x4476 = INT64_MAX;
volatile int32_t x4482 = -193110;
uint8_t x4483 = 1U;
uint16_t x4489 = 0U;
volatile uint64_t t78 = 0LLU;
static uint64_t x4598 = 45969228386LLU;
uint16_t x4739 = 22U;
uint8_t x4923 = 38U;
static uint32_t x4956 = 8U;
volatile int32_t x5033 = 411355;
volatile uint64_t x5109 = 4425334931LLU;
int16_t x5116 = 0;
volatile int64_t t90 = -1823678537LL;
uint32_t x5284 = 114790347U;
uint32_t x5429 = UINT32_MAX;
int8_t x5431 = 26;
static volatile uint16_t x5432 = 0U;
uint16_t x5696 = 30224U;
int8_t x6039 = 29;
uint64_t t98 = 8893073648520444838LLU;
static volatile uint32_t x6070 = 10215U;
uint64_t t99 = 1123798862864183344LLU;


void f0(void) {
	static uint16_t x33 = UINT16_MAX;
	uint8_t x35 = 2U;
	volatile int8_t x36 = -1;
	static int32_t t0 = 2741270;

	t0 = (((x33*x34)<<x35)-x36);

	if (t0 != 33291781) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x49 = 213737LLU;
	static volatile int32_t x50 = INT32_MAX;
	int8_t x51 = 0;
	uint64_t x52 = UINT64_MAX;
	uint64_t t1 = 499272LLU;

	t1 = (((x49*x50)<<x51)-x52);

	if (t1 != 458996712258840LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x197 = INT32_MIN;
	static uint32_t x198 = 134839290U;
	uint8_t x199 = 5U;
	uint32_t x200 = UINT32_MAX;
	static uint32_t t2 = 11295U;

	t2 = (((x197*x198)<<x199)-x200);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x205 = 0U;
	volatile int64_t x206 = 40086144615034670LL;
	uint8_t x207 = 0U;
	uint8_t x208 = 11U;
	int64_t t3 = 1766971226778832LL;

	t3 = (((x205*x206)<<x207)-x208);

	if (t3 != -11LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x217 = -1011;
	static int8_t x218 = -1;
	uint8_t x219 = 0U;
	volatile int32_t t4 = -92203;

	t4 = (((x217*x218)<<x219)-x220);

	if (t4 != 33779) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x402 = -1;
	uint16_t x403 = 13U;
	static int16_t x404 = INT16_MIN;

	t5 = (((x401*x402)<<x403)-x404);

	if (t5 != 3305144320U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x433 = UINT64_MAX;
	int32_t x434 = -172;
	uint8_t x435 = 0U;
	uint16_t x436 = 106U;
	volatile uint64_t t6 = 95840LLU;

	t6 = (((x433*x434)<<x435)-x436);

	if (t6 != 66LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x581 = -1;
	int64_t x582 = -1LL;
	static uint32_t x583 = 22U;
	int32_t x584 = INT32_MAX;
	static int64_t t7 = 4717462047160LL;

	t7 = (((x581*x582)<<x583)-x584);

	if (t7 != -2143289343LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x597 = 1420533183745444618LLU;
	int64_t x598 = INT64_MIN;
	uint16_t x600 = 6U;
	uint64_t t8 = 18107169614LLU;

	t8 = (((x597*x598)<<x599)-x600);

	if (t8 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x622 = UINT32_MAX;
	static volatile int32_t x623 = 0;
	int32_t x624 = -46;
	volatile uint32_t t9 = 53717344U;

	t9 = (((x621*x622)<<x623)-x624);

	if (t9 != 45U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x801 = -56662025;
	uint32_t x802 = 231U;
	uint8_t x803 = 9U;
	int16_t x804 = 4044;

	t10 = (((x801*x802)<<x803)-x804);

	if (t10 != 2912924212U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x842 = INT8_MIN;
	int16_t x843 = 4;
	static volatile int32_t t11 = 28865681;

	t11 = (((x841*x842)<<x843)-x844);

	if (t11 != 67108992) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x878 = 14U;

	t12 = (((x877*x878)<<x879)-x880);

	if (t12 != 4294967193U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x925 = 858;
	volatile uint16_t x926 = 1807U;
	int64_t x927 = 0LL;
	static int16_t x928 = INT16_MIN;
	volatile int32_t t13 = -58084938;

	t13 = (((x925*x926)<<x927)-x928);

	if (t13 != 1583174) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1010 = -40;
	int8_t x1011 = 0;
	uint64_t t14 = 950912LLU;

	t14 = (((x1009*x1010)<<x1011)-x1012);

	if (t14 != 18446744073680304397LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x1029 = UINT16_MAX;
	int16_t x1030 = INT16_MAX;
	uint8_t x1031 = 0U;
	static volatile int64_t x1032 = 1271LL;
	volatile int64_t t15 = -4319414398LL;

	t15 = (((x1029*x1030)<<x1031)-x1032);

	if (t15 != 2147384074LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x1053 = 2800LLU;
	volatile int64_t x1054 = INT64_MIN;
	int8_t x1056 = INT8_MIN;
	uint64_t t16 = 24904LLU;

	t16 = (((x1053*x1054)<<x1055)-x1056);

	if (t16 != 128LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1057 = 10;
	int16_t x1058 = INT16_MAX;
	static uint8_t x1059 = 3U;
	int32_t t17 = 32;

	t17 = (((x1057*x1058)<<x1059)-x1060);

	if (t17 != 2621359) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1073 = INT8_MIN;
	uint64_t x1074 = 177967LLU;
	uint64_t t18 = 1063172LLU;

	t18 = (((x1073*x1074)<<x1075)-x1076);

	if (t18 != 616714867525839939LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x1097 = INT32_MIN;
	static volatile uint32_t x1098 = UINT32_MAX;
	uint8_t x1099 = 11U;
	static int16_t x1100 = -1;
	uint32_t t19 = 7U;

	t19 = (((x1097*x1098)<<x1099)-x1100);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1187 = 7LLU;
	uint16_t x1188 = 23U;
	int64_t t20 = 67053185LL;

	t20 = (((x1185*x1186)<<x1187)-x1188);

	if (t20 != -23LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1233 = -1;
	uint64_t x1234 = UINT64_MAX;
	volatile int8_t x1235 = 0;
	volatile uint32_t x1236 = UINT32_MAX;

	t21 = (((x1233*x1234)<<x1235)-x1236);

	if (t21 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1241 = INT32_MAX;
	uint8_t x1243 = 61U;
	volatile uint32_t x1244 = 447370U;
	static uint64_t t22 = 23300592833941545LLU;

	t22 = (((x1241*x1242)<<x1243)-x1244);

	if (t22 != 16140901064495410294LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1265 = 2U;
	int16_t x1266 = 640;
	uint8_t x1267 = 2U;
	int8_t x1268 = 0;
	static int32_t t23 = -87;

	t23 = (((x1265*x1266)<<x1267)-x1268);

	if (t23 != 5120) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1345 = 9LLU;
	uint16_t x1346 = 240U;
	volatile int16_t x1348 = -597;
	uint64_t t24 = 43266LLU;

	t24 = (((x1345*x1346)<<x1347)-x1348);

	if (t24 != 69717LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1385 = 551;
	static uint64_t x1386 = UINT64_MAX;
	static int8_t x1388 = 2;
	volatile uint64_t t25 = 6192033LLU;

	t25 = (((x1385*x1386)<<x1387)-x1388);

	if (t25 != 18446744073709533982LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1389 = 116942133U;
	uint8_t x1390 = 38U;
	volatile uint32_t t26 = 404513917U;

	t26 = (((x1389*x1390)<<x1391)-x1392);

	if (t26 != 4163825665U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1469 = 3161;
	volatile uint64_t x1470 = 351125230LLU;
	static int8_t x1471 = 0;
	volatile int16_t x1472 = 897;

	t27 = (((x1469*x1470)<<x1471)-x1472);

	if (t27 != 1109906851133LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1501 = -1;
	int16_t x1502 = -1;
	uint16_t x1503 = 0U;
	int32_t t28 = -88405;

	t28 = (((x1501*x1502)<<x1503)-x1504);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1530 = -1;
	static uint8_t x1531 = 4U;
	int16_t x1532 = -10;

	t29 = (((x1529*x1530)<<x1531)-x1532);

	if (t29 != 524298) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1721 = 786416161LL;
	uint8_t x1722 = UINT8_MAX;
	uint16_t x1723 = 1U;
	uint64_t x1724 = 14976LLU;
	static volatile uint64_t t30 = 12588313362LLU;

	t30 = (((x1721*x1722)<<x1723)-x1724);

	if (t30 != 401072227134LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1737 = INT8_MAX;
	uint64_t x1738 = 29585976862LLU;
	uint16_t x1739 = 3U;
	uint64_t t31 = 1735709391486814LLU;

	t31 = (((x1737*x1738)<<x1739)-x1740);

	if (t31 != 30059352491537LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1753 = INT64_MAX;
	uint64_t x1754 = 4201372602401733040LLU;
	int8_t x1755 = 19;
	static uint64_t x1756 = 3780820459227LLU;

	t32 = (((x1753*x1754)<<x1755)-x1756);

	if (t32 != 14917613950635483429LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1773 = 60632697U;
	int16_t x1774 = INT16_MIN;
	static int32_t x1775 = 1;
	int16_t x1776 = -1;
	volatile uint32_t t33 = 347391270U;

	t33 = (((x1773*x1774)<<x1775)-x1776);

	if (t33 != 3515285505U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1777 = 10083667088962733LLU;
	int64_t x1778 = INT64_MAX;
	int64_t x1780 = -1LL;
	static volatile uint64_t t34 = 764720852563LLU;

	t34 = (((x1777*x1778)<<x1779)-x1780);

	if (t34 != 12002239969985822721LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1781 = -3;
	static int16_t x1782 = INT16_MIN;
	uint16_t x1783 = 9U;
	static volatile int32_t t35 = -14712539;

	t35 = (((x1781*x1782)<<x1783)-x1784);

	if (t35 != 50331649) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1929 = -1;
	int32_t x1930 = -1;
	int32_t x1931 = 12;
	int8_t x1932 = INT8_MIN;
	volatile int32_t t36 = 145888;

	t36 = (((x1929*x1930)<<x1931)-x1932);

	if (t36 != 4224) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2001 = 3823U;
	volatile int16_t x2002 = INT16_MIN;
	int8_t x2003 = 2;
	int8_t x2004 = -43;

	t37 = (((x2001*x2002)<<x2003)-x2004);

	if (t37 != 3793879083U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2021 = 0U;
	int8_t x2022 = -1;
	uint8_t x2023 = 26U;
	int64_t x2024 = -1LL;
	volatile int64_t t38 = 6808846862693309LL;

	t38 = (((x2021*x2022)<<x2023)-x2024);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2109 = 2645877U;
	int8_t x2111 = 2;
	int8_t x2112 = -23;
	uint32_t t39 = 1612466U;

	t39 = (((x2109*x2110)<<x2111)-x2112);

	if (t39 != 2950100807U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2201 = 36;
	uint32_t x2202 = 7922961U;
	uint32_t x2203 = 0U;
	volatile uint64_t t40 = 154721350397046513LLU;

	t40 = (((x2201*x2202)<<x2203)-x2204);

	if (t40 != 273990867LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2209 = INT8_MAX;
	static int32_t x2211 = 0;
	uint16_t x2212 = 1U;

	t41 = (((x2209*x2210)<<x2211)-x2212);

	if (t41 != 16128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2337 = UINT64_MAX;
	int16_t x2338 = INT16_MIN;
	volatile int8_t x2339 = 3;
	volatile int16_t x2340 = INT16_MIN;
	uint64_t t42 = 128464531LLU;

	t42 = (((x2337*x2338)<<x2339)-x2340);

	if (t42 != 294912LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x2359 = 29U;
	int64_t x2360 = INT64_MAX;
	volatile int64_t t43 = -325LL;

	t43 = (((x2357*x2358)<<x2359)-x2360);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x2513 = 14U;
	uint32_t x2514 = 34323U;
	uint8_t x2515 = 1U;
	int8_t x2516 = INT8_MIN;
	uint32_t t44 = 16794891U;

	t44 = (((x2513*x2514)<<x2515)-x2516);

	if (t44 != 961172U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2669 = UINT64_MAX;
	uint16_t x2672 = UINT16_MAX;
	volatile uint64_t t45 = 158242242LLU;

	t45 = (((x2669*x2670)<<x2671)-x2672);

	if (t45 != 18446744073709486209LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x2685 = UINT16_MAX;
	uint16_t x2686 = 496U;
	static uint8_t x2687 = 0U;
	int16_t x2688 = INT16_MIN;
	int32_t t46 = -97879876;

	t46 = (((x2685*x2686)<<x2687)-x2688);

	if (t46 != 32538128) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2713 = INT16_MAX;
	static int16_t x2716 = 14;
	volatile uint32_t t47 = 774688845U;

	t47 = (((x2713*x2714)<<x2715)-x2716);

	if (t47 != 3087634392U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2773 = UINT64_MAX;
	volatile int16_t x2774 = INT16_MIN;
	uint16_t x2775 = 27U;
	int64_t x2776 = -1LL;
	volatile uint64_t t48 = 1302273702910578LLU;

	t48 = (((x2773*x2774)<<x2775)-x2776);

	if (t48 != 4398046511105LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x2781 = UINT16_MAX;
	int8_t x2782 = INT8_MAX;
	uint64_t x2783 = 1LLU;
	uint64_t x2784 = 481LLU;
	static uint64_t t49 = 2697049553696247034LLU;

	t49 = (((x2781*x2782)<<x2783)-x2784);

	if (t49 != 16645409LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x2901 = INT16_MAX;
	uint8_t x2902 = 0U;
	static volatile uint32_t t50 = 14628959U;

	t50 = (((x2901*x2902)<<x2903)-x2904);

	if (t50 != 4294098100U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2941 = INT8_MAX;
	uint8_t x2942 = 16U;
	int32_t x2944 = -1;
	volatile int32_t t51 = 183;

	t51 = (((x2941*x2942)<<x2943)-x2944);

	if (t51 != 16257) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2965 = INT32_MAX;
	uint32_t x2966 = 1128U;
	uint64_t x2967 = 1LLU;
	static int16_t x2968 = INT16_MIN;
	volatile uint32_t t52 = 24903U;

	t52 = (((x2965*x2966)<<x2967)-x2968);

	if (t52 != 30512U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2997 = -1;
	volatile int64_t x2998 = -1LL;
	uint32_t x2999 = 17U;

	t53 = (((x2997*x2998)<<x2999)-x3000);

	if (t53 != -4294836223LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3025 = 24441;
	int8_t x3026 = INT8_MAX;
	uint8_t x3028 = UINT8_MAX;
	static volatile int32_t t54 = -43603;

	t54 = (((x3025*x3026)<<x3027)-x3028);

	if (t54 != 6207759) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3118 = 22475613U;
	int16_t x3119 = 1;
	int16_t x3120 = INT16_MIN;
	volatile uint32_t t55 = 3U;

	t55 = (((x3117*x3118)<<x3119)-x3120);

	if (t55 != 4250048838U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3129 = -1;
	int64_t x3130 = -1LL;
	static uint16_t x3131 = 39U;
	volatile int64_t t56 = 1709270118750553LL;

	t56 = (((x3129*x3130)<<x3131)-x3132);

	if (t56 != 549755813889LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x3225 = -1LL;
	static uint64_t x3226 = UINT64_MAX;
	volatile uint8_t x3227 = 3U;
	static int16_t x3228 = -3;
	uint64_t t57 = 4382196196556611120LLU;

	t57 = (((x3225*x3226)<<x3227)-x3228);

	if (t57 != 11LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3281 = 15846735495841515LLU;
	static int16_t x3282 = INT16_MIN;
	int16_t x3283 = 2;
	volatile int64_t x3284 = 30LL;
	volatile uint64_t t58 = 2208134707867749LLU;

	t58 = (((x3281*x3282)<<x3283)-x3284);

	if (t58 != 7418765418240278498LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3405 = 20;
	volatile uint32_t x3406 = 0U;
	static int64_t x3408 = INT64_MAX;

	t59 = (((x3405*x3406)<<x3407)-x3408);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3418 = 713800LLU;
	uint16_t x3419 = 3U;
	uint32_t x3420 = UINT32_MAX;

	t60 = (((x3417*x3418)<<x3419)-x3420);

	if (t60 != 12262986322861505LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3521 = 122123066LLU;
	static int32_t x3522 = INT32_MIN;
	static volatile int16_t x3524 = INT16_MIN;
	uint64_t t61 = 1362808704838675LLU;

	t61 = (((x3521*x3522)<<x3523)-x3524);

	if (t61 != 18184486786430959616LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3533 = -1091;
	static int64_t x3534 = -1LL;
	volatile int64_t t62 = -58043982LL;

	t62 = (((x3533*x3534)<<x3535)-x3536);

	if (t62 != 1061LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x3562 = UINT64_MAX;
	static uint8_t x3563 = 63U;
	volatile uint16_t x3564 = UINT16_MAX;
	static uint64_t t63 = 560LLU;

	t63 = (((x3561*x3562)<<x3563)-x3564);

	if (t63 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x3573 = 26U;
	uint8_t x3575 = 3U;
	int8_t x3576 = -1;
	int32_t t64 = -1672634;

	t64 = (((x3573*x3574)<<x3575)-x3576);

	if (t64 != 26833) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3581 = -1;
	static int64_t x3582 = -1LL;
	uint8_t x3583 = 14U;
	int8_t x3584 = INT8_MAX;
	int64_t t65 = -393601LL;

	t65 = (((x3581*x3582)<<x3583)-x3584);

	if (t65 != 16257LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x3609 = INT16_MIN;
	volatile uint64_t x3610 = 211LLU;
	uint8_t x3611 = 50U;
	int64_t x3612 = -1LL;
	volatile uint64_t t66 = 1042888LLU;

	t66 = (((x3609*x3610)<<x3611)-x3612);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x3653 = INT8_MAX;
	uint64_t x3654 = 5955LLU;
	volatile uint16_t x3655 = 1U;
	uint64_t t67 = 3182651412LLU;

	t67 = (((x3653*x3654)<<x3655)-x3656);

	if (t67 != 39194854533LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x3693 = -248820595;
	uint64_t x3694 = 6983549608LLU;
	volatile uint8_t x3695 = 7U;
	uint16_t x3696 = UINT16_MAX;

	t68 = (((x3693*x3694)<<x3695)-x3696);

	if (t68 != 17388348967878280193LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3737 = UINT16_MAX;
	int8_t x3738 = 1;
	static int8_t x3739 = 1;
	volatile int32_t t69 = 96863;

	t69 = (((x3737*x3738)<<x3739)-x3740);

	if (t69 != 163838) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x3945 = 1942U;
	uint32_t x3946 = UINT32_MAX;
	int16_t x3948 = INT16_MAX;
	volatile uint32_t t70 = 1347211U;

	t70 = (((x3945*x3946)<<x3947)-x3948);

	if (t70 != 4294930645U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4189 = 390924468086368247LLU;
	uint64_t x4190 = 5727840729LLU;
	static uint8_t x4192 = 5U;
	uint64_t t71 = 310943LLU;

	t71 = (((x4189*x4190)<<x4191)-x4192);

	if (t71 != 12388717536669581307LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x4194 = 85646U;
	int16_t x4195 = 10;
	int8_t x4196 = INT8_MIN;

	t72 = (((x4193*x4194)<<x4195)-x4196);

	if (t72 != 4207265920U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x4262 = UINT8_MAX;
	uint8_t x4263 = 8U;
	static int32_t x4264 = -7;
	volatile uint64_t t73 = 149LLU;

	t73 = (((x4261*x4262)<<x4263)-x4264);

	if (t73 != 18446744073709486343LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4385 = INT16_MIN;
	int8_t x4386 = -1;
	uint8_t x4387 = 4U;
	int32_t x4388 = -1;
	static volatile int32_t t74 = 472;

	t74 = (((x4385*x4386)<<x4387)-x4388);

	if (t74 != 524289) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4473 = 0U;
	int16_t x4474 = INT16_MAX;
	uint8_t x4475 = 2U;
	int64_t t75 = -983905295554LL;

	t75 = (((x4473*x4474)<<x4475)-x4476);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4481 = 1997U;
	static int16_t x4484 = 43;
	uint32_t t76 = 3411576U;

	t76 = (((x4481*x4482)<<x4483)-x4484);

	if (t76 != 3523685913U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x4490 = 56U;
	static uint8_t x4491 = 0U;
	volatile int16_t x4492 = -1;
	volatile int32_t t77 = -6310;

	t77 = (((x4489*x4490)<<x4491)-x4492);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x4497 = INT8_MIN;
	uint64_t x4498 = UINT64_MAX;
	int8_t x4499 = 1;
	volatile int16_t x4500 = -21;

	t78 = (((x4497*x4498)<<x4499)-x4500);

	if (t78 != 277LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4597 = -2419;
	int16_t x4599 = 24;
	int64_t x4600 = -1LL;
	uint64_t t79 = 139667788780717272LLU;

	t79 = (((x4597*x4598)<<x4599)-x4600);

	if (t79 != 15948800148046348289LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4737 = UINT64_MAX;
	int8_t x4738 = INT8_MIN;
	static int64_t x4740 = INT64_MIN;
	volatile uint64_t t80 = 5462LLU;

	t80 = (((x4737*x4738)<<x4739)-x4740);

	if (t80 != 9223372037391646720LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x4753 = UINT64_MAX;
	int32_t x4754 = -1;
	uint16_t x4755 = 39U;
	int32_t x4756 = INT32_MIN;
	volatile uint64_t t81 = 132204394886010442LLU;

	t81 = (((x4753*x4754)<<x4755)-x4756);

	if (t81 != 551903297536LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4921 = 3LLU;
	static int8_t x4922 = INT8_MIN;
	int32_t x4924 = INT32_MAX;
	volatile uint64_t t82 = 241LLU;

	t82 = (((x4921*x4922)<<x4923)-x4924);

	if (t82 != 18446638518445801473LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4953 = INT16_MAX;
	volatile uint32_t x4954 = UINT32_MAX;
	static uint8_t x4955 = 16U;
	uint32_t t83 = 29U;

	t83 = (((x4953*x4954)<<x4955)-x4956);

	if (t83 != 2147549176U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5034 = INT8_MAX;
	static uint8_t x5035 = 0U;
	volatile int8_t x5036 = -6;
	static volatile int32_t t84 = 23;

	t84 = (((x5033*x5034)<<x5035)-x5036);

	if (t84 != 52242091) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5057 = INT8_MIN;
	int64_t x5058 = -1LL;
	static uint16_t x5059 = 13U;
	uint8_t x5060 = 85U;
	static volatile int64_t t85 = 194801965190LL;

	t85 = (((x5057*x5058)<<x5059)-x5060);

	if (t85 != 1048491LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5077 = 8940138745930502LL;
	static uint64_t x5078 = 2366006198LLU;
	static int8_t x5079 = 9;
	uint32_t x5080 = UINT32_MAX;
	volatile uint64_t t86 = 38523LLU;

	t86 = (((x5077*x5078)<<x5079)-x5080);

	if (t86 != 202187827204622337LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x5110 = -1;
	uint16_t x5111 = 8U;
	int64_t x5112 = -1LL;
	uint64_t t87 = 284693LLU;

	t87 = (((x5109*x5110)<<x5111)-x5112);

	if (t87 != 18446742940823809281LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5113 = 458584U;
	int8_t x5114 = INT8_MIN;
	uint8_t x5115 = 30U;
	static volatile uint32_t t88 = 684U;

	t88 = (((x5113*x5114)<<x5115)-x5116);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5185 = INT8_MIN;
	int8_t x5186 = INT8_MIN;
	volatile int8_t x5187 = 1;
	volatile int64_t x5188 = INT64_MAX;
	static volatile int64_t t89 = 0LL;

	t89 = (((x5185*x5186)<<x5187)-x5188);

	if (t89 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5209 = -2023;
	int64_t x5210 = -724429315LL;
	static uint8_t x5211 = 3U;
	uint8_t x5212 = UINT8_MAX;

	t90 = (((x5209*x5210)<<x5211)-x5212);

	if (t90 != 11724164033705LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5281 = INT8_MIN;
	uint32_t x5282 = 48U;
	static int32_t x5283 = 17;
	static uint32_t t91 = 0U;

	t91 = (((x5281*x5282)<<x5283)-x5284);

	if (t91 != 3374870581U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5430 = 13LL;
	volatile int64_t t92 = -35029715730656LL;

	t92 = (((x5429*x5430)<<x5431)-x5432);

	if (t92 != 3746994889099837440LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x5693 = 93028891LLU;
	int16_t x5694 = INT16_MAX;
	volatile uint16_t x5695 = 2U;
	uint64_t t93 = 2826378LLU;

	t93 = (((x5693*x5694)<<x5695)-x5696);

	if (t93 != 12193110655364LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x5797 = UINT8_MAX;
	volatile int8_t x5798 = 0;
	int8_t x5799 = 31;
	volatile int32_t x5800 = -1;
	int32_t t94 = -22330838;

	t94 = (((x5797*x5798)<<x5799)-x5800);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5809 = 1U;
	int32_t x5810 = INT32_MIN;
	volatile uint32_t x5811 = 3U;
	int64_t x5812 = 111318189LL;
	int64_t t95 = 1LL;

	t95 = (((x5809*x5810)<<x5811)-x5812);

	if (t95 != -111318189LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5845 = 7U;
	uint32_t x5846 = UINT32_MAX;
	int8_t x5847 = 1;
	uint16_t x5848 = 290U;
	volatile uint32_t t96 = 5U;

	t96 = (((x5845*x5846)<<x5847)-x5848);

	if (t96 != 4294966992U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x5989 = 0U;
	int16_t x5990 = INT16_MAX;
	static int8_t x5991 = 0;
	volatile int32_t x5992 = 93412;
	volatile int32_t t97 = -372;

	t97 = (((x5989*x5990)<<x5991)-x5992);

	if (t97 != -93412) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x6037 = 6380672669612243563LLU;
	int64_t x6038 = -1LL;
	uint32_t x6040 = 0U;

	t98 = (((x6037*x6038)<<x6039)-x6040);

	if (t98 != 7815716445513318400LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x6069 = 63LLU;
	int32_t x6071 = 4;
	static uint32_t x6072 = 1U;

	t99 = (((x6069*x6070)<<x6071)-x6072);

	if (t99 != 10296719LLU) { NG(); } else { ; }
	
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

