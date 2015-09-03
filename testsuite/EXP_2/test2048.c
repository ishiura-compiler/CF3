#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x60 = 40;
uint32_t x186 = 7171U;
uint64_t x191 = UINT64_MAX;
uint32_t x373 = 0U;
uint16_t x375 = UINT16_MAX;
static volatile int16_t x428 = 10;
volatile int32_t x441 = 105473;
uint8_t x446 = 3U;
uint32_t x525 = 2876141U;
uint16_t x548 = 39U;
uint16_t x601 = 250U;
static uint8_t x603 = 1U;
volatile uint64_t t10 = 72166346LLU;
volatile int64_t x629 = INT64_MAX;
uint64_t x787 = 3248258LLU;
uint8_t x788 = 0U;
volatile uint8_t x812 = 38U;
static int64_t t13 = 4701730LL;
volatile uint64_t x834 = 516640218883LLU;
uint64_t t14 = 6240112932545874LLU;
volatile uint64_t t15 = 116601384201793297LLU;
int64_t x846 = -1LL;
static int16_t x847 = INT16_MIN;
int16_t x869 = INT16_MAX;
int8_t x870 = INT8_MIN;
static uint8_t x871 = 3U;
int32_t x943 = -146533;
volatile uint32_t t20 = 2U;
int64_t x1095 = INT64_MAX;
int64_t t24 = -2558485761310LL;
volatile int16_t x1178 = -1;
int8_t x1180 = 1;
int8_t x1195 = 1;
static volatile uint16_t x1209 = UINT16_MAX;
int32_t x1211 = -1;
int8_t x1212 = 31;
uint8_t x1232 = 27U;
int64_t t36 = -17499370749438588LL;
volatile int16_t x1543 = INT16_MAX;
volatile int16_t x1550 = -15489;
uint8_t x1552 = 1U;
static int16_t x1641 = -1;
static int64_t t39 = 6964470683470LL;
volatile uint64_t t40 = 282027LLU;
static int16_t x1846 = 4;
uint32_t t42 = 83U;
volatile uint64_t t43 = 0LLU;
int32_t x2059 = INT32_MIN;
volatile uint8_t x2080 = 3U;
volatile int8_t x2121 = -7;
int64_t x2137 = INT64_MIN;
static uint16_t x2140 = 0U;
uint16_t x2161 = UINT16_MAX;
int16_t x2192 = 17;
static int16_t x2281 = INT16_MIN;
int8_t x2283 = INT8_MIN;
uint16_t x2338 = UINT16_MAX;
uint32_t x2419 = 0U;
uint8_t x2500 = 2U;
int8_t x2507 = -1;
uint8_t x2557 = 0U;
uint32_t x2559 = 1850523U;
static int16_t x2573 = INT16_MIN;
uint16_t x2750 = 2U;
volatile uint8_t x2752 = 46U;
uint32_t x2808 = 39U;
int16_t x2990 = INT16_MIN;
static int64_t x2994 = INT64_MIN;
volatile int64_t x3054 = INT64_MIN;
uint8_t x3080 = 20U;
int64_t x3143 = INT64_MIN;
uint8_t x3225 = 0U;
uint32_t x3228 = 33U;
uint16_t x3261 = 3U;
static uint64_t x3285 = 3337031013LLU;
int64_t x3286 = -1LL;
static int16_t x3297 = INT16_MAX;
static volatile uint64_t t71 = 8635894651749228500LLU;
int8_t x3371 = 12;
int32_t x3374 = 479640251;
static int64_t x3518 = 0LL;
static int8_t x3613 = INT8_MIN;
uint32_t x3623 = 0U;
int32_t x3690 = -1;
static int8_t x3738 = INT8_MAX;
int16_t x3740 = 1;
int16_t x3814 = -1;
uint8_t x3857 = 0U;
static uint64_t x3880 = 0LLU;
uint8_t x3898 = UINT8_MAX;
static volatile uint8_t x3900 = 0U;
uint16_t x3914 = 26348U;
volatile uint8_t x3977 = 5U;
int32_t t88 = 0;
int16_t x4047 = INT16_MIN;
int64_t x4065 = 5696052LL;
volatile int64_t x4118 = -1LL;
volatile int64_t t93 = 7986984619LL;
uint16_t x4133 = 2U;
int64_t x4134 = INT64_MIN;
uint16_t x4136 = 9U;
volatile uint64_t t94 = 86392949341139LLU;
int8_t x4242 = 21;
int16_t x4393 = INT16_MAX;
int64_t x4398 = -1LL;
static volatile int64_t t98 = -900586143074LL;
static volatile int16_t x4412 = 26;


void f0(void) {
	static int8_t x57 = INT8_MIN;
	int64_t x58 = -22365662500LL;
	static int16_t x59 = 0;
	static volatile int64_t t0 = -2163948311857117LL;

	t0 = ((x57-(x58^x59))>>x60);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x181 = 375062128219283893LLU;
	volatile int64_t x182 = INT64_MAX;
	static uint16_t x183 = UINT16_MAX;
	uint16_t x184 = 9U;
	uint64_t t1 = 14587742323180235LLU;

	t1 = ((x181-(x182^x183))>>x184);

	if (t1 != 18746941728660400LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x185 = INT32_MIN;
	int8_t x187 = 36;
	volatile int8_t x188 = 7;
	uint32_t t2 = 192099619U;

	t2 = ((x185-(x186^x187))>>x188);

	if (t2 != 16777159U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x189 = -4;
	int32_t x190 = INT32_MIN;
	int64_t x192 = 4LL;
	static uint64_t t3 = 572816181474752LLU;

	t3 = ((x189-(x190^x191))>>x192);

	if (t3 != 1152921504472629247LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x374 = 426;
	int64_t x376 = 1LL;
	volatile uint32_t t4 = 20631140U;

	t4 = ((x373-(x374^x375))>>x376);

	if (t4 != 2147451093U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x425 = -10088;
	volatile int8_t x426 = -1;
	volatile uint64_t x427 = UINT64_MAX;
	uint64_t t5 = 14849287LLU;

	t5 = ((x425-(x426^x427))>>x428);

	if (t5 != 18014398509481974LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x442 = 49;
	static uint64_t x443 = UINT64_MAX;
	static int32_t x444 = 13;
	volatile uint64_t t6 = 489132LLU;

	t6 = ((x441-(x442^x443))>>x444);

	if (t6 != 12LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x445 = UINT64_MAX;
	static int16_t x447 = 1462;
	uint8_t x448 = 1U;
	static volatile uint64_t t7 = 14410430692LLU;

	t7 = ((x445-(x446^x447))>>x448);

	if (t7 != 9223372036854775077LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x526 = -1;
	static int8_t x527 = -1;
	uint8_t x528 = 8U;
	volatile uint32_t t8 = 22172U;

	t8 = ((x525-(x526^x527))>>x528);

	if (t8 != 11234U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x545 = INT16_MAX;
	static int8_t x546 = 16;
	uint64_t x547 = UINT64_MAX;
	uint64_t t9 = 38230338108325LLU;

	t9 = ((x545-(x546^x547))>>x548);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x602 = UINT64_MAX;
	uint32_t x604 = 3U;

	t10 = ((x601-(x602^x603))>>x604);

	if (t10 != 31LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x630 = 4LLU;
	static int32_t x631 = 3560127;
	int8_t x632 = 0;
	static volatile uint64_t t11 = 86451LLU;

	t11 = ((x629-(x630^x631))>>x632);

	if (t11 != 9223372036851215684LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x785 = 1302135120LL;
	static int8_t x786 = INT8_MAX;
	uint64_t t12 = 699LLU;

	t12 = ((x785-(x786^x787))>>x788);

	if (t12 != 1298886739LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x809 = -1LL;
	int32_t x810 = -1;
	uint16_t x811 = 702U;

	t13 = ((x809-(x810^x811))>>x812);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x833 = UINT32_MAX;
	volatile uint16_t x835 = UINT16_MAX;
	static int8_t x836 = 6;

	t14 = ((x833-(x834^x835))>>x836);

	if (t14 != 288230368146316412LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x841 = UINT64_MAX;
	int8_t x842 = INT8_MIN;
	int64_t x843 = -13986455LL;
	int16_t x844 = 3;

	t15 = ((x841-(x842^x843))>>x844);

	if (t15 != 2305843009211945634LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x845 = UINT32_MAX;
	uint8_t x848 = 5U;
	int64_t t16 = 25549732330599869LL;

	t16 = ((x845-(x846^x847))>>x848);

	if (t16 != 134216704LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x872 = 17LLU;
	volatile int32_t t17 = 1;

	t17 = ((x869-(x870^x871))>>x872);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x885 = -1;
	uint64_t x886 = 7107190247LLU;
	static uint32_t x887 = UINT32_MAX;
	volatile uint8_t x888 = 60U;
	uint64_t t18 = 4023914LLU;

	t18 = ((x885-(x886^x887))>>x888);

	if (t18 != 15LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x897 = -45;
	uint8_t x898 = UINT8_MAX;
	uint64_t x899 = UINT64_MAX;
	int8_t x900 = 31;
	uint64_t t19 = 65LLU;

	t19 = ((x897-(x898^x899))>>x900);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x941 = 3408U;
	static int32_t x942 = 147923;
	int8_t x944 = 0;

	t20 = ((x941-(x942^x943))>>x944);

	if (t20 != 35592U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x945 = 7986U;
	uint8_t x946 = 26U;
	uint16_t x947 = 72U;
	uint16_t x948 = 23U;
	volatile int32_t t21 = 5;

	t21 = ((x945-(x946^x947))>>x948);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1057 = 1897U;
	int64_t x1058 = -2659LL;
	int16_t x1059 = INT16_MAX;
	uint16_t x1060 = 12U;
	volatile int64_t t22 = -155884893509435378LL;

	t22 = ((x1057-(x1058^x1059))>>x1060);

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1061 = UINT32_MAX;
	int32_t x1062 = INT32_MAX;
	static int32_t x1063 = INT32_MAX;
	uint16_t x1064 = 5U;
	uint32_t t23 = 34682U;

	t23 = ((x1061-(x1062^x1063))>>x1064);

	if (t23 != 134217727U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1093 = -902;
	int16_t x1094 = INT16_MIN;
	uint8_t x1096 = 58U;

	t24 = ((x1093-(x1094^x1095))>>x1096);

	if (t24 != 31LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x1149 = UINT16_MAX;
	volatile uint64_t x1150 = 1506791524783529LLU;
	static int8_t x1151 = -1;
	static int32_t x1152 = 17;
	volatile uint64_t t25 = 639427962343334762LLU;

	t25 = ((x1149-(x1150^x1151))>>x1152);

	if (t25 != 11495907019LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1161 = -1;
	int16_t x1162 = INT16_MAX;
	int32_t x1163 = -1266346;
	static uint32_t x1164 = 3U;
	int32_t t26 = -4436664;

	t26 = ((x1161-(x1162^x1163))>>x1164);

	if (t26 != 157098) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1173 = 24;
	int32_t x1174 = INT32_MAX;
	int16_t x1175 = INT16_MIN;
	int8_t x1176 = 14;
	int32_t t27 = 1;

	t27 = ((x1173-(x1174^x1175))>>x1176);

	if (t27 != 131070) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1177 = INT16_MAX;
	uint8_t x1179 = 2U;
	volatile int32_t t28 = -239;

	t28 = ((x1177-(x1178^x1179))>>x1180);

	if (t28 != 16385) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1193 = UINT32_MAX;
	static volatile uint16_t x1194 = UINT16_MAX;
	static int8_t x1196 = 31;
	volatile uint32_t t29 = 6U;

	t29 = ((x1193-(x1194^x1195))>>x1196);

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1210 = 6LL;
	volatile int64_t t30 = -1550028LL;

	t30 = ((x1209-(x1210^x1211))>>x1212);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1229 = -1;
	int64_t x1230 = INT64_MIN;
	uint32_t x1231 = UINT32_MAX;
	int64_t t31 = 44301LL;

	t31 = ((x1229-(x1230^x1231))>>x1232);

	if (t31 != 68719476704LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1273 = 288717611LL;
	int8_t x1274 = INT8_MAX;
	static int32_t x1275 = INT32_MIN;
	static volatile uint8_t x1276 = 55U;
	int64_t t32 = 141254174609987793LL;

	t32 = ((x1273-(x1274^x1275))>>x1276);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1353 = INT16_MAX;
	int16_t x1354 = INT16_MAX;
	int16_t x1355 = -22;
	volatile uint8_t x1356 = 0U;
	int32_t t33 = -284;

	t33 = ((x1353-(x1354^x1355))>>x1356);

	if (t33 != 65514) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1381 = 27U;
	int16_t x1382 = INT16_MAX;
	int32_t x1383 = INT32_MIN;
	int8_t x1384 = 2;
	static volatile int32_t t34 = -382283;

	t34 = ((x1381-(x1382^x1383))>>x1384);

	if (t34 != 536862727) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1401 = UINT8_MAX;
	uint16_t x1402 = 0U;
	int64_t x1403 = -283450825409132LL;
	int8_t x1404 = 0;
	int64_t t35 = 56610351516LL;

	t35 = ((x1401-(x1402^x1403))>>x1404);

	if (t35 != 283450825409387LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1405 = INT8_MAX;
	int64_t x1406 = -9452422263199316LL;
	uint8_t x1407 = UINT8_MAX;
	int64_t x1408 = 3LL;

	t36 = ((x1405-(x1406^x1407))>>x1408);

	if (t36 != 1181552782899941LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1541 = 40995833287894965LLU;
	uint64_t x1542 = 137243332125346LLU;
	uint16_t x1544 = 5U;
	static uint64_t t37 = 1938565266LLU;

	t37 = ((x1541-(x1542^x1543))>>x1544);

	if (t37 != 1276830936117330LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1549 = -1;
	int8_t x1551 = 17;
	volatile int32_t t38 = 9;

	t38 = ((x1549-(x1550^x1551))>>x1552);

	if (t38 != 7752) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1642 = 23296145621LL;
	int32_t x1643 = -1;
	uint8_t x1644 = 2U;

	t39 = ((x1641-(x1642^x1643))>>x1644);

	if (t39 != 5824036405LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1657 = 142498610412329LLU;
	static volatile int8_t x1658 = INT8_MIN;
	int16_t x1659 = -1;
	volatile uint16_t x1660 = 5U;

	t40 = ((x1657-(x1658^x1659))>>x1660);

	if (t40 != 4453081575381LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1781 = INT32_MAX;
	static int8_t x1782 = -2;
	static int64_t x1783 = 14932674215794275LL;
	volatile uint32_t x1784 = 2U;
	volatile int64_t t41 = -61857074799482564LL;

	t41 = ((x1781-(x1782^x1783))>>x1784);

	if (t41 != 3733169090819480LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1845 = 0;
	static uint32_t x1847 = UINT32_MAX;
	static volatile int16_t x1848 = 11;

	t42 = ((x1845-(x1846^x1847))>>x1848);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2037 = INT64_MAX;
	int32_t x2038 = -1;
	uint64_t x2039 = UINT64_MAX;
	uint8_t x2040 = 3U;

	t43 = ((x2037-(x2038^x2039))>>x2040);

	if (t43 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2057 = UINT64_MAX;
	int8_t x2058 = INT8_MIN;
	int8_t x2060 = 0;
	static volatile uint64_t t44 = 114048021606761LLU;

	t44 = ((x2057-(x2058^x2059))>>x2060);

	if (t44 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2077 = UINT64_MAX;
	static int64_t x2078 = -1LL;
	int8_t x2079 = INT8_MIN;
	uint64_t t45 = 492725997260869264LLU;

	t45 = ((x2077-(x2078^x2079))>>x2080);

	if (t45 != 2305843009213693936LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2122 = INT32_MIN;
	int8_t x2123 = INT8_MAX;
	int8_t x2124 = 1;
	int32_t t46 = 0;

	t46 = ((x2121-(x2122^x2123))>>x2124);

	if (t46 != 1073741757) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2138 = INT64_MAX;
	int8_t x2139 = -1;
	volatile int64_t t47 = -1LL;

	t47 = ((x2137-(x2138^x2139))>>x2140);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2145 = INT32_MIN;
	int64_t x2146 = INT64_MIN;
	static volatile int32_t x2147 = INT32_MAX;
	static volatile uint64_t x2148 = 47LLU;
	int64_t t48 = -565367724567152LL;

	t48 = ((x2145-(x2146^x2147))>>x2148);

	if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2162 = 5674731U;
	int8_t x2163 = INT8_MIN;
	volatile uint32_t x2164 = 0U;
	uint32_t t49 = 1U;

	t49 = ((x2161-(x2162^x2163))>>x2164);

	if (t49 != 5740180U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2189 = INT64_MAX;
	uint8_t x2190 = 1U;
	volatile uint16_t x2191 = 12U;
	int64_t t50 = -1072320660627484LL;

	t50 = ((x2189-(x2190^x2191))>>x2192);

	if (t50 != 70368744177663LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2282 = UINT32_MAX;
	static volatile int8_t x2284 = 0;
	volatile uint32_t t51 = 90991U;

	t51 = ((x2281-(x2282^x2283))>>x2284);

	if (t51 != 4294934401U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x2337 = 542LLU;
	int16_t x2339 = 3;
	uint8_t x2340 = 4U;
	uint64_t t52 = 23560578027342639LLU;

	t52 = ((x2337-(x2338^x2339))>>x2340);

	if (t52 != 1152921504606842914LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x2357 = INT32_MAX;
	int8_t x2358 = 1;
	uint16_t x2359 = UINT16_MAX;
	int16_t x2360 = 0;
	static int32_t t53 = 23157;

	t53 = ((x2357-(x2358^x2359))>>x2360);

	if (t53 != 2147418113) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2417 = UINT16_MAX;
	int16_t x2418 = INT16_MIN;
	volatile uint8_t x2420 = 0U;
	volatile uint32_t t54 = 113575U;

	t54 = ((x2417-(x2418^x2419))>>x2420);

	if (t54 != 98303U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2497 = -1;
	uint16_t x2498 = 12U;
	int64_t x2499 = INT64_MIN;
	volatile int64_t t55 = 1LL;

	t55 = ((x2497-(x2498^x2499))>>x2500);

	if (t55 != 2305843009213693948LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2505 = 193375LLU;
	uint32_t x2506 = UINT32_MAX;
	uint8_t x2508 = 6U;
	volatile uint64_t t56 = 122LLU;

	t56 = ((x2505-(x2506^x2507))>>x2508);

	if (t56 != 3021LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2537 = -190;
	int64_t x2538 = INT64_MIN;
	uint64_t x2539 = 1222LLU;
	int8_t x2540 = 0;
	uint64_t t57 = 67920859520228673LLU;

	t57 = ((x2537-(x2538^x2539))>>x2540);

	if (t57 != 9223372036854774396LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2558 = 928;
	int8_t x2560 = 13;
	uint32_t t58 = 8047566U;

	t58 = ((x2557-(x2558^x2559))>>x2560);

	if (t58 != 524062U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2574 = 1401932LL;
	int16_t x2575 = INT16_MIN;
	uint8_t x2576 = 7U;
	volatile int64_t t59 = -1712781LL;

	t59 = ((x2573-(x2574^x2575))>>x2576);

	if (t59 != 10551LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2749 = 2U;
	uint64_t x2751 = UINT64_MAX;
	volatile uint64_t t60 = 1692267558517284691LLU;

	t60 = ((x2749-(x2750^x2751))>>x2752);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2805 = 253041LLU;
	int64_t x2806 = 68223LL;
	int16_t x2807 = INT16_MIN;
	uint64_t t61 = 227LLU;

	t61 = ((x2805-(x2806^x2807))>>x2808);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2925 = -391;
	int64_t x2926 = -190LL;
	uint16_t x2927 = 587U;
	int8_t x2928 = 45;
	static volatile int64_t t62 = -334LL;

	t62 = ((x2925-(x2926^x2927))>>x2928);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2989 = 11;
	static int16_t x2991 = 596;
	int16_t x2992 = 1;
	volatile int32_t t63 = 851833781;

	t63 = ((x2989-(x2990^x2991))>>x2992);

	if (t63 != 16091) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2993 = 1889155888293978LLU;
	int16_t x2995 = INT16_MIN;
	uint64_t x2996 = 0LLU;
	static uint64_t t64 = 236448745331293LLU;

	t64 = ((x2993-(x2994^x2995))>>x2996);

	if (t64 != 9225261192743102554LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3053 = 28556;
	int64_t x3055 = INT64_MIN;
	uint8_t x3056 = 13U;
	int64_t t65 = -36410113237672663LL;

	t65 = ((x3053-(x3054^x3055))>>x3056);

	if (t65 != 3LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3077 = UINT64_MAX;
	int16_t x3078 = -1;
	volatile uint8_t x3079 = 29U;
	uint64_t t66 = 220845LLU;

	t66 = ((x3077-(x3078^x3079))>>x3080);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3141 = INT8_MIN;
	uint32_t x3142 = 10U;
	uint8_t x3144 = 0U;
	int64_t t67 = 4671051LL;

	t67 = ((x3141-(x3142^x3143))>>x3144);

	if (t67 != 9223372036854775670LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3226 = INT8_MIN;
	volatile int64_t x3227 = INT64_MAX;
	static int64_t t68 = -18329869258814LL;

	t68 = ((x3225-(x3226^x3227))>>x3228);

	if (t68 != 1073741823LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3262 = 40U;
	int8_t x3263 = INT8_MIN;
	int8_t x3264 = 0;
	volatile int32_t t69 = 3;

	t69 = ((x3261-(x3262^x3263))>>x3264);

	if (t69 != 91) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x3287 = UINT64_MAX;
	uint8_t x3288 = 3U;
	static uint64_t t70 = 666LLU;

	t70 = ((x3285-(x3286^x3287))>>x3288);

	if (t70 != 417128876LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x3298 = INT16_MIN;
	uint64_t x3299 = 422LLU;
	static uint64_t x3300 = 0LLU;

	t71 = ((x3297-(x3298^x3299))>>x3300);

	if (t71 != 65113LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3369 = -1LL;
	uint64_t x3370 = 1064635799665LLU;
	int16_t x3372 = 0;
	volatile uint64_t t72 = 26416869423LLU;

	t72 = ((x3369-(x3370^x3371))>>x3372);

	if (t72 != 18446743009073751938LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3373 = 28251349074183LLU;
	int16_t x3375 = INT16_MAX;
	static uint8_t x3376 = 1U;
	volatile uint64_t t73 = 13586840575358LLU;

	t73 = ((x3373-(x3374^x3375))>>x3376);

	if (t73 != 14125434715617LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x3385 = INT8_MIN;
	int8_t x3386 = -1;
	static uint16_t x3387 = UINT16_MAX;
	static uint8_t x3388 = 29U;
	int32_t t74 = -232967719;

	t74 = ((x3385-(x3386^x3387))>>x3388);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x3517 = -224794072503LL;
	volatile int64_t x3519 = INT64_MIN;
	uint16_t x3520 = 17U;
	int64_t t75 = 39238LL;

	t75 = ((x3517-(x3518^x3519))>>x3520);

	if (t75 != 70368742462621LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3569 = 59;
	static int8_t x3570 = 0;
	uint64_t x3571 = 523043145601504214LLU;
	int8_t x3572 = 2;
	static uint64_t t76 = 1067LLU;

	t76 = ((x3569-(x3570^x3571))>>x3572);

	if (t76 != 4480925232027011865LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3614 = -1;
	uint32_t x3615 = 16U;
	uint8_t x3616 = 0U;
	volatile uint32_t t77 = 4054U;

	t77 = ((x3613-(x3614^x3615))>>x3616);

	if (t77 != 4294967185U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x3621 = 342U;
	int16_t x3622 = INT16_MIN;
	uint8_t x3624 = 12U;
	static uint32_t t78 = 10U;

	t78 = ((x3621-(x3622^x3623))>>x3624);

	if (t78 != 8U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3689 = UINT16_MAX;
	uint64_t x3691 = 4001304481LLU;
	static uint8_t x3692 = 1U;
	static volatile uint64_t t79 = 1448820901891246852LLU;

	t79 = ((x3689-(x3690^x3691))>>x3692);

	if (t79 != 2000685008LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x3725 = 10565410;
	uint16_t x3726 = 72U;
	int32_t x3727 = 5742872;
	uint8_t x3728 = 11U;
	volatile int32_t t80 = -27983;

	t80 = ((x3725-(x3726^x3727))>>x3728);

	if (t80 != 2354) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x3737 = INT32_MIN;
	int64_t x3739 = INT64_MIN;
	volatile int64_t t81 = 171078099223958LL;

	t81 = ((x3737-(x3738^x3739))>>x3740);

	if (t81 != 4611686017353646016LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3749 = -1LL;
	volatile int16_t x3750 = 983;
	int64_t x3751 = INT64_MIN;
	static int16_t x3752 = 2;
	volatile int64_t t82 = -46LL;

	t82 = ((x3749-(x3750^x3751))>>x3752);

	if (t82 != 2305843009213693706LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x3813 = -1;
	int64_t x3815 = INT64_MAX;
	uint8_t x3816 = 5U;
	int64_t t83 = -1LL;

	t83 = ((x3813-(x3814^x3815))>>x3816);

	if (t83 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x3858 = -1;
	uint32_t x3859 = 3137100U;
	static int16_t x3860 = 0;
	volatile uint32_t t84 = 55656305U;

	t84 = ((x3857-(x3858^x3859))>>x3860);

	if (t84 != 3137101U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x3877 = 820376LL;
	volatile int16_t x3878 = 152;
	static uint32_t x3879 = 4U;
	int64_t t85 = -236703LL;

	t85 = ((x3877-(x3878^x3879))>>x3880);

	if (t85 != 820220LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3897 = UINT64_MAX;
	static int64_t x3899 = INT64_MAX;
	uint64_t t86 = 12915543357492LLU;

	t86 = ((x3897-(x3898^x3899))>>x3900);

	if (t86 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3913 = UINT32_MAX;
	int16_t x3915 = -1;
	volatile uint8_t x3916 = 17U;
	uint32_t t87 = 249001331U;

	t87 = ((x3913-(x3914^x3915))>>x3916);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3978 = -1;
	static int8_t x3979 = -1;
	uint8_t x3980 = 6U;

	t88 = ((x3977-(x3978^x3979))>>x3980);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x3989 = 0U;
	int64_t x3990 = INT64_MAX;
	int64_t x3991 = INT64_MAX;
	uint8_t x3992 = 37U;
	volatile int64_t t89 = 6358537LL;

	t89 = ((x3989-(x3990^x3991))>>x3992);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x4045 = -1;
	static int32_t x4046 = 16414715;
	volatile uint8_t x4048 = 15U;
	int32_t t90 = 113;

	t90 = ((x4045-(x4046^x4047))>>x4048);

	if (t90 != 500) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4066 = 533217415347LLU;
	uint32_t x4067 = 1352641542U;
	int8_t x4068 = 59;
	volatile uint64_t t91 = 248LLU;

	t91 = ((x4065-(x4066^x4067))>>x4068);

	if (t91 != 31LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4089 = 1LLU;
	int16_t x4090 = 332;
	static uint16_t x4091 = UINT16_MAX;
	int64_t x4092 = 0LL;
	uint64_t t92 = 92333761133761LLU;

	t92 = ((x4089-(x4090^x4091))>>x4092);

	if (t92 != 18446744073709486414LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4117 = 54U;
	int16_t x4119 = -1;
	static int16_t x4120 = 11;

	t93 = ((x4117-(x4118^x4119))>>x4120);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4135 = 413352637505LLU;

	t94 = ((x4133-(x4134^x4135))>>x4136);

	if (t94 != 18014397702152613LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x4241 = INT8_MIN;
	static int32_t x4243 = -1875;
	uint8_t x4244 = 1U;
	static int32_t t95 = -460;

	t95 = ((x4241-(x4242^x4243))>>x4244);

	if (t95 != 868) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4365 = 5512634654LLU;
	int16_t x4366 = INT16_MAX;
	int16_t x4367 = INT16_MAX;
	static volatile uint8_t x4368 = 0U;
	uint64_t t96 = 251883064436770LLU;

	t96 = ((x4365-(x4366^x4367))>>x4368);

	if (t96 != 5512634654LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4394 = -1;
	int8_t x4395 = INT8_MIN;
	volatile uint8_t x4396 = 2U;
	volatile int32_t t97 = 799139754;

	t97 = ((x4393-(x4394^x4395))>>x4396);

	if (t97 != 8160) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4397 = -16;
	int32_t x4399 = 145;
	volatile uint32_t x4400 = 1U;

	t98 = ((x4397-(x4398^x4399))>>x4400);

	if (t98 != 65LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x4409 = INT64_MAX;
	volatile int64_t x4410 = -51LL;
	volatile uint64_t x4411 = 510757179988LLU;
	uint64_t t99 = 3165838694LLU;

	t99 = ((x4409-(x4410^x4411))>>x4412);

	if (t99 != 137438961082LLU) { NG(); } else { ; }
	
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

