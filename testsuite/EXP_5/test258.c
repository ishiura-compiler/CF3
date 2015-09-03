#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x21 = 3762;
uint32_t x23 = 208225U;
static uint8_t x115 = 35U;
int32_t x119 = INT32_MIN;
uint8_t x164 = 0U;
volatile int8_t x296 = 0;
int64_t t4 = -2LL;
uint64_t x311 = 0LLU;
int32_t x356 = 0;
uint16_t x688 = 54U;
int64_t x777 = 191372166496744359LL;
volatile int64_t t12 = -2627357144951LL;
int8_t x812 = 14;
volatile uint64_t x813 = UINT64_MAX;
uint32_t x845 = 1459U;
int32_t x847 = INT32_MIN;
uint8_t x848 = 26U;
static int64_t x882 = 1063712341628LL;
int16_t x986 = INT16_MAX;
uint8_t x1206 = 12U;
volatile int64_t t26 = 5184992777LL;
int64_t x1347 = INT64_MIN;
static uint16_t x1397 = 3U;
int8_t x1399 = -1;
int16_t x1400 = 4;
volatile int64_t x1495 = 1882215623404067149LL;
volatile int64_t t33 = 1384353247487592LL;
static int32_t x1650 = 28588;
uint8_t x1652 = 5U;
static int32_t t34 = -32221134;
uint16_t x1666 = UINT16_MAX;
static int32_t x1749 = 11919115;
uint8_t x1750 = 19U;
int8_t x1921 = -1;
int16_t x2077 = INT16_MIN;
uint8_t x2117 = 1U;
int16_t x2266 = -1;
uint8_t x2268 = 4U;
static uint64_t x2421 = 516325LLU;
volatile int16_t x2424 = 2;
volatile uint64_t t48 = 2LLU;
int16_t x2473 = -1;
int8_t x2474 = 0;
uint8_t x2476 = 6U;
static volatile uint8_t x2520 = 1U;
int8_t x2618 = INT8_MAX;
static int16_t x2620 = 0;
volatile uint32_t t57 = 64767238U;
uint32_t x3146 = 1U;
uint16_t x3148 = 11U;
int16_t x3203 = INT16_MIN;
int64_t x3437 = INT64_MIN;
uint32_t x3458 = 119715U;
int64_t t62 = 9076139967LL;
uint8_t x3501 = 24U;
int16_t x3517 = 5508;
static uint64_t x3591 = 1854223797881LLU;
int8_t x3726 = INT8_MIN;
uint32_t x3727 = UINT32_MAX;
int8_t x3729 = -9;
int64_t x3730 = 236401247306LL;
int16_t x3755 = INT16_MIN;
static int16_t x3998 = -1;
int32_t x4040 = 0;
int32_t x4123 = -149;
int32_t x4130 = 6;
static uint8_t x4186 = UINT8_MAX;
uint16_t x4388 = 57U;
uint64_t t84 = 19308462LLU;
uint32_t x4462 = 476912U;
uint64_t x4527 = UINT64_MAX;
static uint64_t x4573 = UINT64_MAX;
uint32_t x4574 = UINT32_MAX;
volatile int64_t x4613 = 909675730LL;
static uint8_t x4615 = 13U;
volatile int8_t x4616 = 1;
uint64_t x4872 = 9LLU;
int32_t t95 = -469;
volatile uint8_t x4907 = 0U;
static uint64_t x5076 = 27LLU;
uint8_t x5096 = 10U;


void f0(void) {
	uint8_t x22 = 28U;
	uint16_t x24 = 1U;
	volatile uint32_t t0 = 199891U;

	t0 = (x21&((x22-x23)>>x24));

	if (t0 != 2064U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x113 = 7958;
	uint8_t x114 = 101U;
	volatile int16_t x116 = 14;
	static int32_t t1 = 18871;

	t1 = (x113&((x114-x115)>>x116));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x117 = 286538443LL;
	uint64_t x118 = 62217472618LLU;
	volatile uint8_t x120 = 42U;
	volatile uint64_t t2 = 344LLU;

	t2 = (x117&((x118-x119)>>x120));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = 108418791;
	int8_t x163 = 4;
	volatile int32_t t3 = 1;

	t3 = (x161&((x162-x163)>>x164));

	if (t3 != 108396544) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x293 = INT32_MIN;
	int16_t x294 = -1;
	int64_t x295 = INT64_MIN;

	t4 = (x293&((x294-x295)>>x296));

	if (t4 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int8_t x312 = 9;
	uint64_t t5 = 265031268157808LLU;

	t5 = (x309&((x310-x311)>>x312));

	if (t5 != 36028797014769664LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x321 = UINT16_MAX;
	static int16_t x322 = INT16_MAX;
	static int8_t x323 = 0;
	int8_t x324 = 0;
	int32_t t6 = 1694992;

	t6 = (x321&((x322-x323)>>x324));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x325 = 620U;
	int32_t x326 = -28;
	int8_t x327 = INT8_MIN;
	int32_t x328 = 1;
	int32_t t7 = -120366;

	t7 = (x325&((x326-x327)>>x328));

	if (t7 != 32) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x353 = 1U;
	int8_t x354 = 26;
	static int32_t x355 = -1;
	int32_t t8 = -22908972;

	t8 = (x353&((x354-x355)>>x356));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x429 = INT64_MAX;
	static int16_t x430 = -1;
	volatile int16_t x431 = INT16_MIN;
	volatile uint8_t x432 = 21U;
	volatile int64_t t9 = 31LL;

	t9 = (x429&((x430-x431)>>x432));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x649 = -1LL;
	static uint32_t x650 = UINT32_MAX;
	volatile int16_t x651 = INT16_MIN;
	uint16_t x652 = 4U;
	static volatile int64_t t10 = -205748082007012LL;

	t10 = (x649&((x650-x651)>>x652));

	if (t10 != 2047LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x685 = 14;
	volatile uint64_t x686 = UINT64_MAX;
	volatile uint8_t x687 = 62U;
	volatile uint64_t t11 = 18LLU;

	t11 = (x685&((x686-x687)>>x688));

	if (t11 != 14LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x778 = UINT16_MAX;
	static uint32_t x779 = 113U;
	uint16_t x780 = 1U;

	t12 = (x777&((x778-x779)>>x780));

	if (t12 != 29575LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x809 = INT16_MIN;
	volatile int32_t x810 = 121675173;
	uint16_t x811 = UINT16_MAX;
	volatile int32_t t13 = 146183;

	t13 = (x809&((x810-x811)>>x812));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x814 = 24;
	uint8_t x815 = 1U;
	volatile uint32_t x816 = 13U;
	volatile uint64_t t14 = 624491067800LLU;

	t14 = (x813&((x814-x815)>>x816));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x846 = -1LL;
	static volatile int64_t t15 = 108739116494426LL;

	t15 = (x845&((x846-x847)>>x848));

	if (t15 != 19LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x857 = -1;
	uint32_t x858 = UINT32_MAX;
	int64_t x859 = -1LL;
	int16_t x860 = 0;
	int64_t t16 = -9950286473653LL;

	t16 = (x857&((x858-x859)>>x860));

	if (t16 != 4294967296LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x881 = INT8_MAX;
	volatile int16_t x883 = -2309;
	uint8_t x884 = 22U;
	volatile int64_t t17 = 2117593293100119848LL;

	t17 = (x881&((x882-x883)>>x884));

	if (t17 != 40LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x933 = UINT16_MAX;
	volatile uint16_t x934 = UINT16_MAX;
	volatile int64_t x935 = -1LL;
	volatile int16_t x936 = 55;
	static volatile int64_t t18 = 202LL;

	t18 = (x933&((x934-x935)>>x936));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x941 = 5;
	uint64_t x942 = 1223054LLU;
	int32_t x943 = INT32_MIN;
	int32_t x944 = 0;
	volatile uint64_t t19 = 47301099850944LLU;

	t19 = (x941&((x942-x943)>>x944));

	if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x981 = 203999364U;
	volatile int32_t x982 = INT32_MAX;
	static int8_t x983 = 13;
	uint16_t x984 = 0U;
	static uint32_t t20 = 1875U;

	t20 = (x981&((x982-x983)>>x984));

	if (t20 != 203999360U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x985 = 5;
	volatile int32_t x987 = -186368;
	static int32_t x988 = 0;
	volatile int32_t t21 = -11612525;

	t21 = (x985&((x986-x987)>>x988));

	if (t21 != 5) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1085 = 18LL;
	uint32_t x1086 = UINT32_MAX;
	static uint32_t x1087 = 107U;
	int32_t x1088 = 2;
	static int64_t t22 = 65708879337047LL;

	t22 = (x1085&((x1086-x1087)>>x1088));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1109 = INT8_MAX;
	int32_t x1110 = INT32_MAX;
	int64_t x1111 = -1194222138LL;
	static uint16_t x1112 = 1U;
	volatile int64_t t23 = 751297386LL;

	t23 = (x1109&((x1110-x1111)>>x1112));

	if (t23 != 28LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x1205 = INT64_MIN;
	static int8_t x1207 = INT8_MIN;
	uint64_t x1208 = 2LLU;
	int64_t t24 = 66344LL;

	t24 = (x1205&((x1206-x1207)>>x1208));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1305 = 4099133U;
	static uint16_t x1306 = 450U;
	volatile int16_t x1307 = INT16_MIN;
	int8_t x1308 = 9;
	volatile uint32_t t25 = 309001358U;

	t25 = (x1305&((x1306-x1307)>>x1308));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x1325 = 499U;
	int64_t x1326 = INT64_MAX;
	uint16_t x1327 = 0U;
	uint16_t x1328 = 22U;

	t26 = (x1325&((x1326-x1327)>>x1328));

	if (t26 != 499LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1345 = UINT16_MAX;
	int16_t x1346 = -1;
	uint32_t x1348 = 0U;
	volatile int64_t t27 = -454LL;

	t27 = (x1345&((x1346-x1347)>>x1348));

	if (t27 != 65535LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1398 = 1226U;
	volatile int32_t t28 = -100216;

	t28 = (x1397&((x1398-x1399)>>x1400));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1417 = INT64_MIN;
	static uint8_t x1418 = UINT8_MAX;
	uint32_t x1419 = UINT32_MAX;
	uint8_t x1420 = 26U;
	static volatile int64_t t29 = -483222226674609LL;

	t29 = (x1417&((x1418-x1419)>>x1420));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1461 = UINT32_MAX;
	int16_t x1462 = INT16_MAX;
	int32_t x1463 = -1;
	int8_t x1464 = 1;
	volatile uint32_t t30 = 585U;

	t30 = (x1461&((x1462-x1463)>>x1464));

	if (t30 != 16384U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1493 = UINT16_MAX;
	volatile uint64_t x1494 = 2198681380868LLU;
	int8_t x1496 = 0;
	uint64_t t31 = 688702152109805LLU;

	t31 = (x1493&((x1494-x1495)>>x1496));

	if (t31 != 52919LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1533 = INT16_MIN;
	static int64_t x1534 = -7231149LL;
	volatile int32_t x1535 = INT32_MIN;
	int8_t x1536 = 0;
	int64_t t32 = 2378695958151886LL;

	t32 = (x1533&((x1534-x1535)>>x1536));

	if (t32 != 2140241920LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1609 = INT32_MIN;
	int64_t x1610 = -49018658809949430LL;
	int64_t x1611 = INT64_MIN;
	static uint8_t x1612 = 9U;

	t33 = (x1609&((x1610-x1611)>>x1612));

	if (t33 != 17918657246003200LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1649 = 6473019;
	uint16_t x1651 = 1038U;

	t34 = (x1649&((x1650-x1651)>>x1652));

	if (t34 != 280) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1665 = 4U;
	uint32_t x1667 = 884870U;
	static volatile int16_t x1668 = 3;
	uint32_t t35 = 1892531323U;

	t35 = (x1665&((x1666-x1667)>>x1668));

	if (t35 != 4U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1751 = -1;
	static uint64_t x1752 = 14LLU;
	int32_t t36 = -15703;

	t36 = (x1749&((x1750-x1751)>>x1752));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1825 = 1;
	int8_t x1826 = -1;
	int64_t x1827 = -100827016LL;
	volatile uint8_t x1828 = 2U;
	int64_t t37 = 786047490LL;

	t37 = (x1825&((x1826-x1827)>>x1828));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1869 = 39772151U;
	static volatile int32_t x1870 = INT32_MAX;
	uint32_t x1871 = 795654899U;
	uint8_t x1872 = 2U;
	static uint32_t t38 = 499949174U;

	t38 = (x1869&((x1870-x1871)>>x1872));

	if (t38 != 315715U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1897 = 17416362078800898LL;
	int32_t x1898 = INT32_MIN;
	static int32_t x1899 = INT32_MIN;
	int8_t x1900 = 6;
	int64_t t39 = -391430694781261456LL;

	t39 = (x1897&((x1898-x1899)>>x1900));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1922 = 23020U;
	int8_t x1923 = -1;
	volatile uint16_t x1924 = 24U;
	static int32_t t40 = 1;

	t40 = (x1921&((x1922-x1923)>>x1924));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2029 = UINT64_MAX;
	int32_t x2030 = INT32_MIN;
	uint32_t x2031 = 1447U;
	static int64_t x2032 = 0LL;
	uint64_t t41 = 2436536753906LLU;

	t41 = (x2029&((x2030-x2031)>>x2032));

	if (t41 != 2147482201LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x2078 = UINT32_MAX;
	int32_t x2079 = INT32_MIN;
	int16_t x2080 = 13;
	uint32_t t42 = 623184585U;

	t42 = (x2077&((x2078-x2079)>>x2080));

	if (t42 != 229376U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2118 = INT32_MAX;
	int8_t x2119 = 1;
	uint8_t x2120 = 27U;
	volatile int32_t t43 = 123569;

	t43 = (x2117&((x2118-x2119)>>x2120));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x2213 = INT16_MIN;
	volatile uint32_t x2214 = 99576455U;
	uint64_t x2215 = UINT64_MAX;
	uint8_t x2216 = 2U;
	static uint64_t t44 = 267426244655967706LLU;

	t44 = (x2213&((x2214-x2215)>>x2216));

	if (t44 != 24870912LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2245 = 138052324U;
	uint64_t x2246 = 319LLU;
	int32_t x2247 = INT32_MIN;
	uint8_t x2248 = 1U;
	static volatile uint64_t t45 = 6070927LLU;

	t45 = (x2245&((x2246-x2247)>>x2248));

	if (t45 != 132LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2265 = INT16_MIN;
	int16_t x2267 = -1;
	volatile int32_t t46 = -164;

	t46 = (x2265&((x2266-x2267)>>x2268));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2397 = INT16_MIN;
	uint64_t x2398 = 413LLU;
	uint8_t x2399 = 5U;
	uint8_t x2400 = 62U;
	volatile uint64_t t47 = 10240064991LLU;

	t47 = (x2397&((x2398-x2399)>>x2400));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2422 = -15689069;
	int64_t x2423 = INT64_MIN;

	t48 = (x2421&((x2422-x2423)>>x2424));

	if (t48 != 270500LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2475 = -1LL;
	volatile int64_t t49 = -8710924569675732LL;

	t49 = (x2473&((x2474-x2475)>>x2476));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2481 = INT16_MIN;
	volatile uint64_t x2482 = 6379603649551151773LLU;
	static volatile uint32_t x2483 = UINT32_MAX;
	int32_t x2484 = 12;
	volatile uint64_t t50 = 660768106LLU;

	t50 = (x2481&((x2482-x2483)>>x2484));

	if (t50 != 1557520421191680LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2517 = -50586348LL;
	uint8_t x2518 = 122U;
	int32_t x2519 = -1;
	volatile int64_t t51 = -56762LL;

	t51 = (x2517&((x2518-x2519)>>x2520));

	if (t51 != 20LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2545 = INT64_MIN;
	static volatile uint64_t x2546 = 7353120LLU;
	int64_t x2547 = -3539652589479LL;
	int32_t x2548 = 0;
	uint64_t t52 = 345594438005LLU;

	t52 = (x2545&((x2546-x2547)>>x2548));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x2617 = UINT32_MAX;
	int64_t x2619 = 1LL;
	static volatile int64_t t53 = -97688645LL;

	t53 = (x2617&((x2618-x2619)>>x2620));

	if (t53 != 126LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x2673 = INT32_MIN;
	volatile int64_t x2674 = INT64_MAX;
	uint16_t x2675 = 26976U;
	static int8_t x2676 = 1;
	int64_t t54 = 63230051957426543LL;

	t54 = (x2673&((x2674-x2675)>>x2676));

	if (t54 != 4611686016279904256LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2797 = 0;
	int16_t x2798 = INT16_MIN;
	static int64_t x2799 = INT64_MIN;
	int32_t x2800 = 0;
	static int64_t t55 = 43LL;

	t55 = (x2797&((x2798-x2799)>>x2800));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2885 = INT16_MAX;
	int8_t x2886 = 56;
	volatile int16_t x2887 = -9;
	volatile int8_t x2888 = 31;
	static int32_t t56 = 47035;

	t56 = (x2885&((x2886-x2887)>>x2888));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3105 = 1U;
	uint32_t x3106 = 126U;
	volatile uint32_t x3107 = UINT32_MAX;
	uint8_t x3108 = 11U;

	t57 = (x3105&((x3106-x3107)>>x3108));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3145 = INT8_MAX;
	volatile int16_t x3147 = INT16_MIN;
	volatile uint32_t t58 = 221654154U;

	t58 = (x3145&((x3146-x3147)>>x3148));

	if (t58 != 16U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3201 = 32746;
	int8_t x3202 = 1;
	static volatile uint16_t x3204 = 18U;
	volatile int32_t t59 = -4367219;

	t59 = (x3201&((x3202-x3203)>>x3204));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3349 = INT32_MIN;
	static volatile uint16_t x3350 = UINT16_MAX;
	volatile uint32_t x3351 = 107505075U;
	uint16_t x3352 = 0U;
	uint32_t t60 = 13U;

	t60 = (x3349&((x3350-x3351)>>x3352));

	if (t60 != 2147483648U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3438 = INT16_MIN;
	uint32_t x3439 = UINT32_MAX;
	int32_t x3440 = 0;
	volatile int64_t t61 = 6175LL;

	t61 = (x3437&((x3438-x3439)>>x3440));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3457 = 987LL;
	static int32_t x3459 = 553184534;
	uint32_t x3460 = 11U;

	t62 = (x3457&((x3458-x3459)>>x3460));

	if (t62 != 280LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3502 = 2075995326778LL;
	int8_t x3503 = -1;
	int8_t x3504 = 2;
	static int64_t t63 = 74667794671LL;

	t63 = (x3501&((x3502-x3503)>>x3504));

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3518 = 1365954748184978LL;
	int16_t x3519 = INT16_MIN;
	static int16_t x3520 = 4;
	volatile int64_t t64 = -111LL;

	t64 = (x3517&((x3518-x3519)>>x3520));

	if (t64 != 5504LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x3589 = INT32_MIN;
	int64_t x3590 = 252LL;
	static volatile uint8_t x3592 = 35U;
	uint64_t t65 = 511626882271LLU;

	t65 = (x3589&((x3590-x3591)>>x3592));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3725 = INT8_MAX;
	int32_t x3728 = 0;
	static uint32_t t66 = 2057845228U;

	t66 = (x3725&((x3726-x3727)>>x3728));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3731 = 821U;
	uint32_t x3732 = 58U;
	int64_t t67 = -96224LL;

	t67 = (x3729&((x3730-x3731)>>x3732));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3737 = INT32_MAX;
	int8_t x3738 = INT8_MIN;
	uint32_t x3739 = 157013616U;
	volatile int8_t x3740 = 6;
	volatile uint32_t t68 = 1U;

	t68 = (x3737&((x3738-x3739)>>x3740));

	if (t68 != 64655524U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3753 = UINT64_MAX;
	int8_t x3754 = INT8_MIN;
	uint8_t x3756 = 6U;
	volatile uint64_t t69 = 894362196799LLU;

	t69 = (x3753&((x3754-x3755)>>x3756));

	if (t69 != 510LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3817 = 4;
	int8_t x3818 = INT8_MIN;
	uint32_t x3819 = 6U;
	static int8_t x3820 = 2;
	static volatile uint32_t t70 = 0U;

	t70 = (x3817&((x3818-x3819)>>x3820));

	if (t70 != 4U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3953 = -1LL;
	int8_t x3954 = -1;
	int32_t x3955 = INT32_MIN;
	static uint32_t x3956 = 10U;
	volatile int64_t t71 = -168780935260979LL;

	t71 = (x3953&((x3954-x3955)>>x3956));

	if (t71 != 2097151LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x3957 = -15122;
	uint32_t x3958 = UINT32_MAX;
	static volatile uint64_t x3959 = 400267593868381LLU;
	int8_t x3960 = 1;
	uint64_t t72 = 275962LLU;

	t72 = (x3957&((x3958-x3959)>>x3960));

	if (t72 != 9223171905205322944LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3961 = 8U;
	static uint32_t x3962 = UINT32_MAX;
	static volatile uint64_t x3963 = 207299467550LLU;
	volatile uint16_t x3964 = 4U;
	volatile uint64_t t73 = 29688549392375266LLU;

	t73 = (x3961&((x3962-x3963)>>x3964));

	if (t73 != 8LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3997 = 107895;
	static int32_t x3999 = -1;
	volatile int8_t x4000 = 1;
	int32_t t74 = 946672870;

	t74 = (x3997&((x3998-x3999)>>x4000));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4005 = 12U;
	uint16_t x4006 = 28765U;
	volatile int8_t x4007 = -1;
	uint16_t x4008 = 22U;
	int32_t t75 = 4;

	t75 = (x4005&((x4006-x4007)>>x4008));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4037 = 29;
	volatile int8_t x4038 = INT8_MAX;
	volatile uint8_t x4039 = 123U;
	int32_t t76 = 492794546;

	t76 = (x4037&((x4038-x4039)>>x4040));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4045 = INT32_MIN;
	int16_t x4046 = INT16_MAX;
	uint8_t x4047 = UINT8_MAX;
	static volatile int8_t x4048 = 1;
	volatile int32_t t77 = 4;

	t77 = (x4045&((x4046-x4047)>>x4048));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x4105 = INT16_MAX;
	uint8_t x4106 = 6U;
	volatile uint64_t x4107 = 6247019345086LLU;
	int16_t x4108 = 0;
	uint64_t t78 = 29848LLU;

	t78 = (x4105&((x4106-x4107)>>x4108));

	if (t78 != 2888LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4121 = 3855339806LL;
	uint16_t x4122 = UINT16_MAX;
	static uint16_t x4124 = 2U;
	volatile int64_t t79 = -56591682979861646LL;

	t79 = (x4121&((x4122-x4123)>>x4124));

	if (t79 != 16388LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4129 = UINT64_MAX;
	int16_t x4131 = INT16_MIN;
	static volatile int16_t x4132 = 16;
	static volatile uint64_t t80 = 35521LLU;

	t80 = (x4129&((x4130-x4131)>>x4132));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x4153 = -33;
	int16_t x4154 = INT16_MAX;
	int16_t x4155 = INT16_MAX;
	uint16_t x4156 = 26U;
	volatile int32_t t81 = -8547507;

	t81 = (x4153&((x4154-x4155)>>x4156));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4185 = INT32_MAX;
	uint32_t x4187 = 5U;
	volatile uint8_t x4188 = 1U;
	uint32_t t82 = 6U;

	t82 = (x4185&((x4186-x4187)>>x4188));

	if (t82 != 125U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4205 = 21U;
	static int64_t x4206 = -1LL;
	int8_t x4207 = INT8_MIN;
	uint32_t x4208 = 11U;
	static int64_t t83 = -728LL;

	t83 = (x4205&((x4206-x4207)>>x4208));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x4385 = -1LL;
	volatile uint64_t x4386 = UINT64_MAX;
	int64_t x4387 = -1LL;

	t84 = (x4385&((x4386-x4387)>>x4388));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4461 = INT32_MIN;
	volatile int8_t x4463 = INT8_MIN;
	int64_t x4464 = 10LL;
	static uint32_t t85 = 15U;

	t85 = (x4461&((x4462-x4463)>>x4464));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4469 = 413U;
	uint32_t x4470 = UINT32_MAX;
	int32_t x4471 = INT32_MAX;
	uint16_t x4472 = 1U;
	static uint32_t t86 = 2718U;

	t86 = (x4469&((x4470-x4471)>>x4472));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4525 = UINT32_MAX;
	int16_t x4526 = INT16_MAX;
	uint8_t x4528 = 1U;
	uint64_t t87 = 9LLU;

	t87 = (x4525&((x4526-x4527)>>x4528));

	if (t87 != 16384LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x4575 = -7195;
	uint16_t x4576 = 0U;
	uint64_t t88 = 10473622LLU;

	t88 = (x4573&((x4574-x4575)>>x4576));

	if (t88 != 7194LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x4609 = 0;
	int8_t x4610 = -6;
	volatile uint32_t x4611 = UINT32_MAX;
	int8_t x4612 = 29;
	uint32_t t89 = 76U;

	t89 = (x4609&((x4610-x4611)>>x4612));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4614 = INT8_MAX;
	int64_t t90 = 52LL;

	t90 = (x4613&((x4614-x4615)>>x4616));

	if (t90 != 16LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4621 = 21U;
	uint32_t x4622 = 530116815U;
	int32_t x4623 = 11612939;
	uint64_t x4624 = 3LLU;
	volatile uint32_t t91 = 1066727999U;

	t91 = (x4621&((x4622-x4623)>>x4624));

	if (t91 != 16U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x4685 = UINT32_MAX;
	volatile uint32_t x4686 = 5U;
	uint64_t x4687 = 0LLU;
	static int8_t x4688 = 36;
	uint64_t t92 = 2623833968214124LLU;

	t92 = (x4685&((x4686-x4687)>>x4688));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4701 = 1;
	uint8_t x4702 = 6U;
	int8_t x4703 = -2;
	int8_t x4704 = 14;
	volatile int32_t t93 = -2468;

	t93 = (x4701&((x4702-x4703)>>x4704));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4857 = INT16_MAX;
	uint16_t x4858 = UINT16_MAX;
	int64_t x4859 = -1LL;
	static volatile int8_t x4860 = 1;
	int64_t t94 = -4278853LL;

	t94 = (x4857&((x4858-x4859)>>x4860));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x4869 = 1U;
	static uint8_t x4870 = 4U;
	static int16_t x4871 = -1;

	t95 = (x4869&((x4870-x4871)>>x4872));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x4905 = -508164839877167LL;
	int32_t x4906 = INT32_MAX;
	uint16_t x4908 = 4U;
	volatile int64_t t96 = -15LL;

	t96 = (x4905&((x4906-x4907)>>x4908));

	if (t96 != 121329105LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x5073 = -1435536;
	int16_t x5074 = INT16_MAX;
	int64_t x5075 = -1390365LL;
	int64_t t97 = -769041739LL;

	t97 = (x5073&((x5074-x5075)>>x5076));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5093 = 7U;
	int16_t x5094 = 12;
	uint32_t x5095 = 1U;
	uint32_t t98 = 4310U;

	t98 = (x5093&((x5094-x5095)>>x5096));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x5133 = UINT8_MAX;
	int8_t x5134 = 1;
	volatile int8_t x5135 = 0;
	volatile int16_t x5136 = 6;
	volatile int32_t t99 = 4052958;

	t99 = (x5133&((x5134-x5135)>>x5136));

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

