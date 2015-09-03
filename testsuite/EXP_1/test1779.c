#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 1;
int32_t t2 = 6681;
uint8_t x107 = 7U;
uint64_t x108 = 9908756LLU;
uint32_t x160 = UINT32_MAX;
int64_t t6 = 6932LL;
static int64_t x214 = 598925LL;
int64_t x249 = 1LL;
int64_t x318 = 2162577679677203700LL;
int8_t x391 = 1;
static int32_t t12 = -33464;
volatile uint16_t x416 = 2U;
int32_t t15 = -31597132;
int64_t t18 = 7213163826539LL;
int32_t x597 = INT32_MAX;
int8_t x662 = INT8_MIN;
static int32_t x669 = INT32_MIN;
static int64_t x681 = INT64_MAX;
volatile uint64_t t22 = 22827LLU;
uint16_t x699 = 0U;
int32_t x718 = INT32_MAX;
int8_t x834 = 1;
uint64_t x884 = 6832581607LLU;
static volatile uint64_t t27 = 173LLU;
static uint16_t x983 = 0U;
volatile int64_t t28 = -497411969418LL;
volatile uint8_t x1055 = 28U;
int8_t x1056 = 1;
int8_t x1163 = 0;
uint8_t x1168 = 52U;
uint32_t x1183 = 1U;
static uint8_t x1341 = 5U;
static int32_t x1393 = -1;
volatile int64_t x1394 = INT64_MAX;
int64_t x1485 = 430080LL;
int64_t x1562 = INT64_MIN;
uint32_t x1563 = 58U;
uint32_t x1612 = UINT32_MAX;
static uint16_t x1647 = 3U;
int8_t x1648 = -1;
uint8_t x1653 = UINT8_MAX;
static volatile int8_t x1655 = 16;
int32_t t45 = 3;
static uint8_t x1767 = 2U;
int64_t x1790 = INT64_MIN;
int16_t x1791 = 23;
int8_t x1836 = INT8_MIN;
uint64_t t50 = 21LLU;
int32_t t53 = 75242135;
volatile uint32_t x1958 = UINT32_MAX;
uint16_t x1999 = 1U;
int16_t x2018 = INT16_MAX;
volatile uint8_t x2020 = UINT8_MAX;
static volatile uint64_t t57 = 254448909LLU;
volatile uint64_t t59 = 128384974LLU;
int16_t x2207 = 0;
int8_t x2208 = 0;
uint32_t x2240 = UINT32_MAX;
int64_t x2382 = INT64_MAX;
uint8_t x2383 = 19U;
uint32_t x2497 = 12717889U;
volatile int32_t x2499 = 6;
uint16_t x2870 = 21U;
uint8_t x2874 = 1U;
static volatile int32_t x2886 = INT32_MAX;
volatile int8_t x2916 = INT8_MIN;
int32_t t76 = 117864006;
uint64_t x2937 = UINT64_MAX;
uint8_t x2939 = 10U;
int8_t x2940 = -1;
static volatile uint64_t t77 = 26LLU;
int64_t x2973 = -1LL;
uint16_t x3040 = 1900U;
uint16_t x3118 = UINT16_MAX;
static int16_t x3145 = INT16_MIN;
uint32_t x3147 = 1U;
int32_t x3513 = 63017;
int32_t x3516 = INT32_MIN;
static int8_t x3608 = -1;
uint16_t x3651 = 0U;
uint8_t x3694 = 85U;
volatile int16_t x3731 = 7;
volatile uint32_t t96 = 2094969089U;
volatile int32_t t98 = 34751;


void f0(void) {
	volatile uint16_t x1 = 284U;
	int8_t x2 = INT8_MIN;
	volatile int64_t x4 = -2382075426888600185LL;
	static int64_t t0 = 336642606LL;

	t0 = (((x1&x2)>>x3)&x4);

	if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x49 = INT16_MAX;
	int32_t x50 = 48;
	uint16_t x51 = 19U;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t1 = 15;

	t1 = (((x49&x50)>>x51)&x52);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x61 = INT32_MIN;
	uint16_t x62 = 56U;
	uint32_t x63 = 18U;
	int32_t x64 = -156626311;

	t2 = (((x61&x62)>>x63)&x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x105 = 278492813LLU;
	volatile int64_t x106 = -697925159LL;
	volatile uint64_t t3 = 2LLU;

	t3 = (((x105&x106)>>x107)&x108);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x133 = 111U;
	int32_t x134 = -1;
	uint8_t x135 = 20U;
	int32_t x136 = INT32_MIN;
	int32_t t4 = 1054;

	t4 = (((x133&x134)>>x135)&x136);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x145 = INT32_MIN;
	volatile uint64_t x146 = UINT64_MAX;
	uint8_t x147 = 0U;
	uint16_t x148 = UINT16_MAX;
	uint64_t t5 = 18760956LLU;

	t5 = (((x145&x146)>>x147)&x148);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x157 = INT64_MIN;
	uint32_t x158 = UINT32_MAX;
	uint16_t x159 = 3U;

	t6 = (((x157&x158)>>x159)&x160);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x213 = 179757U;
	int8_t x215 = 2;
	volatile int16_t x216 = INT16_MIN;
	volatile int64_t t7 = 123548184895935LL;

	t7 = (((x213&x214)>>x215)&x216);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x217 = -1;
	static uint16_t x218 = 1669U;
	uint16_t x219 = 3U;
	static volatile int32_t x220 = -379783;
	volatile int32_t t8 = -1529;

	t8 = (((x217&x218)>>x219)&x220);

	if (t8 != 80) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x250 = -1156768322270389LL;
	static uint16_t x251 = 2U;
	int8_t x252 = INT8_MIN;
	int64_t t9 = -734323399035332058LL;

	t9 = (((x249&x250)>>x251)&x252);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x317 = -1;
	static uint8_t x319 = 1U;
	static int16_t x320 = -279;
	int64_t t10 = -147LL;

	t10 = (((x317&x318)>>x319)&x320);

	if (t10 != 1081288839838601832LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x377 = 1592191336639LLU;
	uint64_t x378 = UINT64_MAX;
	static uint8_t x379 = 21U;
	static int16_t x380 = -1;
	volatile uint64_t t11 = 4005556LLU;

	t11 = (((x377&x378)>>x379)&x380);

	if (t11 != 759215LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x389 = 3;
	static int16_t x390 = -11;
	int8_t x392 = 1;

	t12 = (((x389&x390)>>x391)&x392);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x401 = -5156209LL;
	uint8_t x402 = 57U;
	uint16_t x403 = 6U;
	int16_t x404 = -11587;
	volatile int64_t t13 = 3770220155370543408LL;

	t13 = (((x401&x402)>>x403)&x404);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x413 = 10;
	int8_t x414 = INT8_MIN;
	volatile uint32_t x415 = 1U;
	int32_t t14 = -536;

	t14 = (((x413&x414)>>x415)&x416);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x445 = INT16_MAX;
	int16_t x446 = INT16_MIN;
	int8_t x447 = 1;
	int16_t x448 = INT16_MIN;

	t15 = (((x445&x446)>>x447)&x448);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x529 = INT64_MIN;
	int8_t x530 = INT8_MAX;
	uint8_t x531 = 4U;
	uint32_t x532 = UINT32_MAX;
	volatile int64_t t16 = 453LL;

	t16 = (((x529&x530)>>x531)&x532);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x573 = -1LL;
	uint32_t x574 = 74U;
	static volatile uint32_t x575 = 7U;
	uint64_t x576 = 114527833946494LLU;
	uint64_t t17 = 83041487LLU;

	t17 = (((x573&x574)>>x575)&x576);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x585 = 1U;
	int64_t x586 = INT64_MIN;
	uint8_t x587 = 6U;
	static volatile int32_t x588 = -52601;

	t18 = (((x585&x586)>>x587)&x588);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x598 = -21;
	static int8_t x599 = 0;
	static int32_t x600 = 26086331;
	volatile int32_t t19 = 29278;

	t19 = (((x597&x598)>>x599)&x600);

	if (t19 != 26086315) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x661 = INT64_MAX;
	int32_t x663 = 15;
	uint64_t x664 = 1LLU;
	uint64_t t20 = 0LLU;

	t20 = (((x661&x662)>>x663)&x664);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x670 = 34U;
	static int8_t x671 = 0;
	volatile int32_t x672 = INT32_MIN;
	volatile int32_t t21 = -396612976;

	t21 = (((x669&x670)>>x671)&x672);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x682 = 2;
	static uint16_t x683 = 0U;
	uint64_t x684 = 30911217746LLU;

	t22 = (((x681&x682)>>x683)&x684);

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x697 = UINT16_MAX;
	int64_t x698 = INT64_MAX;
	volatile int32_t x700 = INT32_MAX;
	int64_t t23 = 1023649798198988185LL;

	t23 = (((x697&x698)>>x699)&x700);

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x717 = INT16_MIN;
	int8_t x719 = 1;
	static int8_t x720 = 15;
	volatile int32_t t24 = 198483775;

	t24 = (((x717&x718)>>x719)&x720);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x833 = -2727138897168119LL;
	volatile int64_t x835 = 1LL;
	static uint64_t x836 = 136070404325LLU;
	volatile uint64_t t25 = 6194143545022LLU;

	t25 = (((x833&x834)>>x835)&x836);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x841 = -1;
	uint8_t x842 = 0U;
	volatile int16_t x843 = 2;
	int16_t x844 = 3;
	int32_t t26 = 0;

	t26 = (((x841&x842)>>x843)&x844);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x881 = 972474;
	uint16_t x882 = UINT16_MAX;
	int16_t x883 = 6;

	t27 = (((x881&x882)>>x883)&x884);

	if (t27 != 834LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x981 = -1LL;
	int8_t x982 = INT8_MAX;
	int64_t x984 = INT64_MIN;

	t28 = (((x981&x982)>>x983)&x984);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1021 = 0;
	static uint32_t x1022 = 0U;
	uint8_t x1023 = 5U;
	volatile int32_t x1024 = INT32_MAX;
	uint32_t t29 = 975407U;

	t29 = (((x1021&x1022)>>x1023)&x1024);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1053 = 313;
	static int16_t x1054 = 1;
	volatile int32_t t30 = -370666838;

	t30 = (((x1053&x1054)>>x1055)&x1056);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1081 = 47U;
	int32_t x1082 = INT32_MAX;
	uint8_t x1083 = 1U;
	volatile int32_t x1084 = 33296179;
	int32_t t31 = 11675;

	t31 = (((x1081&x1082)>>x1083)&x1084);

	if (t31 != 19) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x1109 = UINT64_MAX;
	int64_t x1110 = INT64_MAX;
	uint32_t x1111 = 5U;
	int8_t x1112 = INT8_MIN;
	volatile uint64_t t32 = 1487603882088LLU;

	t32 = (((x1109&x1110)>>x1111)&x1112);

	if (t32 != 288230376151711616LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1161 = UINT64_MAX;
	uint16_t x1162 = 5475U;
	uint32_t x1164 = 1670060U;
	static volatile uint64_t t33 = 26997462LLU;

	t33 = (((x1161&x1162)>>x1163)&x1164);

	if (t33 != 4384LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1165 = 3680590503813LL;
	int32_t x1166 = -1;
	volatile uint8_t x1167 = 1U;
	int64_t t34 = -214840535293518LL;

	t34 = (((x1165&x1166)>>x1167)&x1168);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1181 = -1;
	uint64_t x1182 = 32LLU;
	static int16_t x1184 = INT16_MIN;
	uint64_t t35 = 14584476230LLU;

	t35 = (((x1181&x1182)>>x1183)&x1184);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1213 = INT8_MIN;
	uint64_t x1214 = UINT64_MAX;
	volatile uint8_t x1215 = 58U;
	volatile int8_t x1216 = 3;
	uint64_t t36 = 3105803749406866LLU;

	t36 = (((x1213&x1214)>>x1215)&x1216);

	if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1342 = 18;
	uint8_t x1343 = 0U;
	uint8_t x1344 = 25U;
	int32_t t37 = 77;

	t37 = (((x1341&x1342)>>x1343)&x1344);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1395 = 50U;
	int32_t x1396 = -1;
	volatile int64_t t38 = 32286889LL;

	t38 = (((x1393&x1394)>>x1395)&x1396);

	if (t38 != 8191LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1486 = 2U;
	uint8_t x1487 = 37U;
	uint64_t x1488 = 16463760LLU;
	volatile uint64_t t39 = 782976097895100LLU;

	t39 = (((x1485&x1486)>>x1487)&x1488);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x1501 = UINT32_MAX;
	int32_t x1502 = INT32_MIN;
	int16_t x1503 = 2;
	int64_t x1504 = INT64_MAX;
	volatile int64_t t40 = -501386257LL;

	t40 = (((x1501&x1502)>>x1503)&x1504);

	if (t40 != 536870912LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1505 = INT64_MAX;
	static volatile int8_t x1506 = INT8_MAX;
	uint16_t x1507 = 12U;
	int8_t x1508 = -6;
	volatile int64_t t41 = -760476998LL;

	t41 = (((x1505&x1506)>>x1507)&x1508);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1561 = 20U;
	uint8_t x1564 = 47U;
	volatile int64_t t42 = 1017064LL;

	t42 = (((x1561&x1562)>>x1563)&x1564);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1609 = 1;
	int8_t x1610 = INT8_MIN;
	uint8_t x1611 = 4U;
	volatile uint32_t t43 = 66368U;

	t43 = (((x1609&x1610)>>x1611)&x1612);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1645 = INT16_MIN;
	uint32_t x1646 = 119121U;
	uint32_t t44 = 203U;

	t44 = (((x1645&x1646)>>x1647)&x1648);

	if (t44 != 12288U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1654 = UINT16_MAX;
	static int16_t x1656 = 1282;

	t45 = (((x1653&x1654)>>x1655)&x1656);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1681 = 1134659352288166388LL;
	int32_t x1682 = -4831;
	volatile uint32_t x1683 = 0U;
	int64_t x1684 = INT64_MIN;
	int64_t t46 = 38688718896LL;

	t46 = (((x1681&x1682)>>x1683)&x1684);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1765 = 899810396219716209LLU;
	int32_t x1766 = 3364412;
	int8_t x1768 = -1;
	uint64_t t47 = 75632779730544927LLU;

	t47 = (((x1765&x1766)>>x1767)&x1768);

	if (t47 != 541836LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1789 = UINT16_MAX;
	volatile int8_t x1792 = INT8_MIN;
	static int64_t t48 = -245898710695580383LL;

	t48 = (((x1789&x1790)>>x1791)&x1792);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1833 = UINT64_MAX;
	uint16_t x1834 = UINT16_MAX;
	uint16_t x1835 = 7U;
	static uint64_t t49 = 9088360487397352LLU;

	t49 = (((x1833&x1834)>>x1835)&x1836);

	if (t49 != 384LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1845 = INT32_MAX;
	static uint64_t x1846 = 680948569951036LLU;
	uint8_t x1847 = 54U;
	int8_t x1848 = -17;

	t50 = (((x1845&x1846)>>x1847)&x1848);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1881 = INT8_MIN;
	volatile uint32_t x1882 = 1U;
	int8_t x1883 = 24;
	static uint64_t x1884 = UINT64_MAX;
	uint64_t t51 = 1172426289020554184LLU;

	t51 = (((x1881&x1882)>>x1883)&x1884);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1929 = INT64_MAX;
	int16_t x1930 = INT16_MIN;
	uint16_t x1931 = 1U;
	uint16_t x1932 = UINT16_MAX;
	volatile int64_t t52 = -230LL;

	t52 = (((x1929&x1930)>>x1931)&x1932);

	if (t52 != 49152LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1953 = UINT8_MAX;
	int16_t x1954 = INT16_MAX;
	int16_t x1955 = 0;
	int32_t x1956 = INT32_MAX;

	t53 = (((x1953&x1954)>>x1955)&x1956);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x1957 = INT64_MAX;
	uint16_t x1959 = 24U;
	volatile uint64_t x1960 = 93782579592042501LLU;
	static volatile uint64_t t54 = 204148749LLU;

	t54 = (((x1957&x1958)>>x1959)&x1960);

	if (t54 != 5LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1997 = 910U;
	int16_t x1998 = -116;
	int16_t x2000 = -1;
	volatile int32_t t55 = 48;

	t55 = (((x1997&x1998)>>x1999)&x2000);

	if (t55 != 454) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x2017 = 13U;
	static uint16_t x2019 = 16U;
	static int32_t t56 = 14;

	t56 = (((x2017&x2018)>>x2019)&x2020);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x2093 = 0;
	int8_t x2094 = INT8_MIN;
	int32_t x2095 = 0;
	uint64_t x2096 = UINT64_MAX;

	t57 = (((x2093&x2094)>>x2095)&x2096);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2153 = 0U;
	volatile uint16_t x2154 = 0U;
	uint8_t x2155 = 18U;
	static int32_t x2156 = INT32_MIN;
	static volatile int32_t t58 = -428799399;

	t58 = (((x2153&x2154)>>x2155)&x2156);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2157 = 1954LLU;
	int64_t x2158 = INT64_MIN;
	uint16_t x2159 = 3U;
	int32_t x2160 = INT32_MAX;

	t59 = (((x2157&x2158)>>x2159)&x2160);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2205 = 45233;
	uint16_t x2206 = UINT16_MAX;
	int32_t t60 = 2315;

	t60 = (((x2205&x2206)>>x2207)&x2208);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x2237 = 15463753U;
	static uint8_t x2238 = UINT8_MAX;
	uint16_t x2239 = 30U;
	uint32_t t61 = 159U;

	t61 = (((x2237&x2238)>>x2239)&x2240);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2285 = INT16_MIN;
	int32_t x2286 = 621364890;
	uint8_t x2287 = 3U;
	int64_t x2288 = 103191749624080LL;
	volatile int64_t t62 = -23665LL;

	t62 = (((x2285&x2286)>>x2287)&x2288);

	if (t62 != 8388608LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x2361 = INT16_MAX;
	volatile int16_t x2362 = 1;
	static uint16_t x2363 = 13U;
	int32_t x2364 = -7;
	int32_t t63 = 90;

	t63 = (((x2361&x2362)>>x2363)&x2364);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x2381 = UINT64_MAX;
	int32_t x2384 = -416365053;
	static uint64_t t64 = 10116LLU;

	t64 = (((x2381&x2382)>>x2383)&x2384);

	if (t64 != 17591769679363LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2393 = -1;
	int8_t x2394 = INT8_MAX;
	int16_t x2395 = 5;
	volatile int32_t x2396 = INT32_MIN;
	volatile int32_t t65 = 346081;

	t65 = (((x2393&x2394)>>x2395)&x2396);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2489 = INT8_MIN;
	volatile int8_t x2490 = 0;
	volatile uint32_t x2491 = 1U;
	uint16_t x2492 = 3U;
	volatile int32_t t66 = 410;

	t66 = (((x2489&x2490)>>x2491)&x2492);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x2498 = 51U;
	static int16_t x2500 = INT16_MIN;
	volatile uint32_t t67 = 27896U;

	t67 = (((x2497&x2498)>>x2499)&x2500);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x2593 = 22588471877LLU;
	volatile uint16_t x2594 = UINT16_MAX;
	uint64_t x2595 = 29LLU;
	int16_t x2596 = INT16_MIN;
	static uint64_t t68 = 648897182254LLU;

	t68 = (((x2593&x2594)>>x2595)&x2596);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x2637 = 4342927669724LLU;
	uint8_t x2638 = UINT8_MAX;
	volatile uint32_t x2639 = 4U;
	uint32_t x2640 = 94394933U;
	static uint64_t t69 = 27LLU;

	t69 = (((x2637&x2638)>>x2639)&x2640);

	if (t69 != 5LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2657 = INT64_MAX;
	uint32_t x2658 = 160323595U;
	static int16_t x2659 = 0;
	static volatile int8_t x2660 = INT8_MIN;
	volatile int64_t t70 = 6098219875785222LL;

	t70 = (((x2657&x2658)>>x2659)&x2660);

	if (t70 != 160323584LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2757 = -1;
	int32_t x2758 = INT32_MAX;
	int8_t x2759 = 10;
	volatile int32_t x2760 = INT32_MIN;
	volatile int32_t t71 = -651053993;

	t71 = (((x2757&x2758)>>x2759)&x2760);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2769 = INT32_MAX;
	int64_t x2770 = -1LL;
	static int16_t x2771 = 1;
	volatile uint64_t x2772 = 260735LLU;
	uint64_t t72 = 8369051LLU;

	t72 = (((x2769&x2770)>>x2771)&x2772);

	if (t72 != 260735LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2869 = 9961277LL;
	int8_t x2871 = 4;
	uint64_t x2872 = 571LLU;
	static volatile uint64_t t73 = 241601185LLU;

	t73 = (((x2869&x2870)>>x2871)&x2872);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2873 = -1;
	int8_t x2875 = 1;
	int8_t x2876 = 1;
	int32_t t74 = 22769417;

	t74 = (((x2873&x2874)>>x2875)&x2876);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2885 = 81U;
	int16_t x2887 = 0;
	int8_t x2888 = INT8_MIN;
	int32_t t75 = 22013915;

	t75 = (((x2885&x2886)>>x2887)&x2888);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2913 = INT32_MAX;
	static int32_t x2914 = -1;
	static int16_t x2915 = 0;

	t76 = (((x2913&x2914)>>x2915)&x2916);

	if (t76 != 2147483520) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2938 = -487;

	t77 = (((x2937&x2938)>>x2939)&x2940);

	if (t77 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2974 = INT16_MAX;
	int8_t x2975 = 0;
	static int16_t x2976 = INT16_MIN;
	static volatile int64_t t78 = -66901LL;

	t78 = (((x2973&x2974)>>x2975)&x2976);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2977 = UINT32_MAX;
	uint32_t x2978 = UINT32_MAX;
	volatile uint16_t x2979 = 0U;
	static int64_t x2980 = INT64_MAX;
	int64_t t79 = -373609292413LL;

	t79 = (((x2977&x2978)>>x2979)&x2980);

	if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x3037 = 0;
	volatile uint16_t x3038 = 13U;
	uint8_t x3039 = 0U;
	volatile int32_t t80 = -2907500;

	t80 = (((x3037&x3038)>>x3039)&x3040);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3117 = INT32_MIN;
	uint8_t x3119 = 12U;
	volatile int32_t x3120 = 0;
	int32_t t81 = 346;

	t81 = (((x3117&x3118)>>x3119)&x3120);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x3133 = -354553LL;
	int16_t x3134 = 3;
	int8_t x3135 = 49;
	volatile uint8_t x3136 = 14U;
	volatile int64_t t82 = -161327LL;

	t82 = (((x3133&x3134)>>x3135)&x3136);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3146 = UINT32_MAX;
	int64_t x3148 = -50LL;
	static volatile int64_t t83 = 3825LL;

	t83 = (((x3145&x3146)>>x3147)&x3148);

	if (t83 != 2147467264LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3337 = INT8_MAX;
	uint32_t x3338 = 3453344U;
	static volatile int8_t x3339 = 31;
	int32_t x3340 = -1968904;
	static uint32_t t84 = 138915U;

	t84 = (((x3337&x3338)>>x3339)&x3340);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3377 = INT32_MIN;
	static uint16_t x3378 = 2927U;
	uint8_t x3379 = 18U;
	int8_t x3380 = -4;
	volatile int32_t t85 = 2945551;

	t85 = (((x3377&x3378)>>x3379)&x3380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x3457 = -816212188785LL;
	int32_t x3458 = INT32_MAX;
	volatile int8_t x3459 = 4;
	int8_t x3460 = INT8_MAX;
	int64_t t86 = 16076807LL;

	t86 = (((x3457&x3458)>>x3459)&x3460);

	if (t86 != 24LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3481 = INT64_MIN;
	int32_t x3482 = INT32_MAX;
	volatile uint16_t x3483 = 2U;
	int8_t x3484 = 12;
	int64_t t87 = -2900532575139LL;

	t87 = (((x3481&x3482)>>x3483)&x3484);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3501 = INT64_MAX;
	static int8_t x3502 = -24;
	uint8_t x3503 = 7U;
	volatile int16_t x3504 = INT16_MAX;
	int64_t t88 = 52357813519558033LL;

	t88 = (((x3501&x3502)>>x3503)&x3504);

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3514 = 23U;
	int64_t x3515 = 0LL;
	int32_t t89 = -5;

	t89 = (((x3513&x3514)>>x3515)&x3516);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3549 = 26578U;
	int8_t x3550 = -1;
	static int16_t x3551 = 22;
	uint32_t x3552 = 7U;
	uint32_t t90 = 8889268U;

	t90 = (((x3549&x3550)>>x3551)&x3552);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3577 = INT32_MIN;
	uint16_t x3578 = 33U;
	volatile uint32_t x3579 = 29U;
	uint8_t x3580 = 109U;
	int32_t t91 = -26;

	t91 = (((x3577&x3578)>>x3579)&x3580);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3581 = UINT16_MAX;
	int16_t x3582 = 0;
	static uint8_t x3583 = 3U;
	int16_t x3584 = INT16_MAX;
	int32_t t92 = 626246597;

	t92 = (((x3581&x3582)>>x3583)&x3584);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3605 = 12U;
	volatile uint8_t x3606 = 60U;
	int8_t x3607 = 18;
	volatile int32_t t93 = -855125;

	t93 = (((x3605&x3606)>>x3607)&x3608);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3649 = 1144U;
	int32_t x3650 = INT32_MIN;
	uint32_t x3652 = 32858U;
	volatile uint32_t t94 = 8U;

	t94 = (((x3649&x3650)>>x3651)&x3652);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3693 = 11234U;
	volatile uint32_t x3695 = 3U;
	int32_t x3696 = 352;
	volatile int32_t t95 = -77265;

	t95 = (((x3693&x3694)>>x3695)&x3696);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3729 = -8074;
	uint8_t x3730 = UINT8_MAX;
	static volatile uint32_t x3732 = 55U;

	t96 = (((x3729&x3730)>>x3731)&x3732);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3781 = INT16_MIN;
	uint8_t x3782 = 1U;
	int16_t x3783 = 11;
	static int32_t x3784 = INT32_MAX;
	static int32_t t97 = 20093660;

	t97 = (((x3781&x3782)>>x3783)&x3784);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x3813 = INT8_MAX;
	int8_t x3814 = INT8_MIN;
	int8_t x3815 = 0;
	int8_t x3816 = 19;

	t98 = (((x3813&x3814)>>x3815)&x3816);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3905 = 15433;
	uint16_t x3906 = UINT16_MAX;
	volatile int8_t x3907 = 3;
	uint32_t x3908 = 208775977U;
	volatile uint32_t t99 = 59U;

	t99 = (((x3905&x3906)>>x3907)&x3908);

	if (t99 != 777U) { NG(); } else { ; }
	
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

