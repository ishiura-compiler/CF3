#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x20 = 1U;
int32_t x299 = INT32_MIN;
uint16_t x346 = 3U;
uint64_t x447 = 17713LLU;
int8_t x448 = 22;
static volatile uint32_t t9 = 725U;
uint64_t x601 = 23LLU;
int32_t x602 = 4065949;
volatile uint64_t x604 = 3LLU;
static int8_t x677 = -1;
int8_t x680 = 1;
static volatile uint32_t t12 = 1089789U;
int32_t x830 = -1;
uint16_t x831 = 30U;
volatile uint64_t t13 = 38785447408346LLU;
uint8_t x875 = UINT8_MAX;
static int32_t x880 = 0;
uint16_t x966 = 2106U;
uint8_t x972 = 42U;
uint8_t x1088 = 0U;
volatile int64_t t18 = 183494451883734LL;
static int32_t x1138 = -1;
int32_t x1140 = 0;
int64_t t20 = -149305654769LL;
volatile int16_t x1435 = -21;
uint8_t x1504 = 0U;
int8_t x1589 = INT8_MIN;
int64_t x1590 = -1LL;
int8_t x1592 = 2;
int64_t x1768 = 1LL;
uint8_t x1883 = 5U;
uint8_t x1904 = 22U;
static uint16_t x1996 = 5U;
int16_t x2067 = 38;
static uint8_t x2068 = 0U;
static uint64_t x2161 = 770455LLU;
volatile int64_t x2282 = -1982536784LL;
uint8_t x2284 = 1U;
int64_t t35 = -13094939518503LL;
int8_t x2424 = 0;
uint32_t t38 = 121758282U;
uint16_t x2807 = 953U;
volatile uint64_t t45 = 5046818842894247874LLU;
static volatile uint64_t x2890 = 232769889488LLU;
uint8_t x2902 = UINT8_MAX;
static int32_t x3040 = 0;
uint8_t x3112 = 2U;
uint32_t x3138 = 55919964U;
volatile int64_t t52 = 8544661061956106LL;
uint16_t x3473 = 13199U;
static int16_t x3558 = INT16_MIN;
int64_t x3578 = 48028744485LL;
uint32_t x3629 = UINT32_MAX;
int32_t x3630 = INT32_MIN;
int32_t x3753 = 7890690;
static int16_t x3754 = INT16_MIN;
int64_t x3755 = -1LL;
volatile int8_t x3857 = -11;
uint32_t x3860 = 5U;
uint16_t x3944 = 3U;
uint64_t t64 = 123142103591090125LLU;
volatile int32_t x3987 = 9346;
static int64_t x4163 = -1LL;
int32_t x4170 = 211;
volatile int64_t x4172 = 18LL;
uint64_t t68 = 125284402396LLU;
int8_t x4222 = 0;
int64_t x4362 = -1279482118016LL;
static int32_t t75 = -3;
int64_t x4653 = INT64_MAX;
uint64_t x4718 = 0LLU;
volatile int8_t x4828 = 0;
int8_t x4903 = -1;
int64_t t81 = 0LL;
uint64_t x4985 = 7707832404092118LLU;
int32_t x5257 = -3400;
int8_t x5390 = 63;
int8_t x5419 = -1;
uint8_t x5420 = 14U;
static int32_t t87 = 0;
uint64_t x5442 = UINT64_MAX;
uint64_t x5443 = UINT64_MAX;
uint64_t t88 = 198LLU;
volatile int16_t x5595 = 1;
uint64_t x5617 = 1909802738687LLU;
static int64_t x5714 = INT64_MIN;
int16_t x5716 = 0;
volatile int16_t x5795 = INT16_MIN;
uint64_t t95 = 10788947482669LLU;
int8_t x5837 = -37;
int32_t x5839 = 7328;
uint32_t x5973 = 27U;
static int8_t x5975 = -1;
static uint32_t x5976 = 12U;
volatile uint32_t t98 = 22475690U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int16_t x2 = INT16_MAX;
	volatile int64_t x3 = INT64_MAX;
	int8_t x4 = 3;
	int64_t t0 = 5610221797981LL;

	t0 = ((x1^(x2^x3))<<x4);

	if (t0 != 262136LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile uint8_t x6 = 36U;
	volatile int16_t x7 = INT16_MIN;
	static int8_t x8 = 10;
	int32_t t1 = 1591;

	t1 = ((x5^(x6^x7))<<x8);

	if (t1 != 33516544) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	static uint16_t x18 = 0U;
	int16_t x19 = INT16_MIN;
	static uint64_t t2 = 28636548LLU;

	t2 = ((x17^(x18^x19))<<x20);

	if (t2 != 65534LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x173 = UINT32_MAX;
	static volatile int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	int8_t x176 = 3;
	static volatile uint64_t t3 = 34LLU;

	t3 = ((x173^(x174^x175))<<x176);

	if (t3 != 34359737344LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x297 = UINT32_MAX;
	volatile int32_t x298 = 1487009;
	uint16_t x300 = 1U;
	uint32_t t4 = 142057814U;

	t4 = ((x297^(x298^x299))<<x300);

	if (t4 != 4291993276U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x345 = INT16_MAX;
	int16_t x347 = 938;
	int8_t x348 = 13;
	volatile int32_t t5 = 1056888827;

	t5 = ((x345^(x346^x347))<<x348);

	if (t5 != 260751360) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x445 = 226840483815325456LL;
	volatile int64_t x446 = INT64_MIN;
	uint64_t t6 = 1766406513LLU;

	t6 = ((x445^(x446^x447))<<x448);

	if (t6 != 10229538763260821504LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x453 = INT32_MIN;
	static volatile int8_t x454 = INT8_MIN;
	uint32_t x455 = 179725U;
	int32_t x456 = 1;
	uint32_t t7 = 1065492528U;

	t7 = ((x453^(x454^x455))<<x456);

	if (t7 != 4294607642U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x477 = 0;
	volatile uint16_t x478 = 10198U;
	volatile uint32_t x479 = UINT32_MAX;
	static volatile int8_t x480 = 15;
	uint32_t t8 = 12382U;

	t8 = ((x477^(x478^x479))<<x480);

	if (t8 != 3960766464U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x517 = INT16_MIN;
	static uint32_t x518 = 9U;
	static int16_t x519 = -1;
	uint8_t x520 = 11U;

	t9 = ((x517^(x518^x519))<<x520);

	if (t9 != 67088384U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x603 = INT32_MIN;
	uint64_t t10 = 13LLU;

	t10 = ((x601^(x602^x603))<<x604);

	if (t10 != 18446744056562209872LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x653 = 2U;
	int32_t x654 = 266;
	int8_t x655 = 11;
	static uint16_t x656 = 17U;
	volatile int32_t t11 = 701703;

	t11 = ((x653^(x654^x655))<<x656);

	if (t11 != 33947648) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x678 = 1592U;
	uint8_t x679 = 61U;

	t12 = ((x677^(x678^x679))<<x680);

	if (t12 != 4294964212U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x829 = 121LLU;
	int8_t x832 = 2;

	t13 = ((x829^(x830^x831))<<x832);

	if (t13 != 18446744073709551200LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x873 = INT32_MAX;
	uint32_t x874 = 47085173U;
	int64_t x876 = 5LL;
	uint32_t t14 = 13U;

	t14 = ((x873^(x874^x875))<<x876);

	if (t14 != 2788241056U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x877 = 9113561199751694599LLU;
	int8_t x878 = INT8_MAX;
	uint16_t x879 = UINT16_MAX;
	uint64_t t15 = 3LLU;

	t15 = ((x877^(x878^x879))<<x880);

	if (t15 != 9113561199751689863LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x965 = -178147628;
	int16_t x967 = -1;
	int8_t x968 = 0;
	static int32_t t16 = -36;

	t16 = ((x965^(x966^x967))<<x968);

	if (t16 != 178149649) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x969 = 9292LLU;
	int32_t x970 = INT32_MAX;
	uint16_t x971 = 53U;
	static volatile uint64_t t17 = 97160739LLU;

	t17 = ((x969^(x970^x971))<<x972);

	if (t17 != 18405675115388862464LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1085 = 15860424U;
	static volatile int64_t x1086 = INT64_MIN;
	volatile int32_t x1087 = INT32_MIN;

	t18 = ((x1085^(x1086^x1087))<<x1088);

	if (t18 != 9223372034723152584LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1137 = UINT64_MAX;
	int16_t x1139 = INT16_MIN;
	volatile uint64_t t19 = 1028765041LLU;

	t19 = ((x1137^(x1138^x1139))<<x1140);

	if (t19 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1145 = 1;
	int8_t x1146 = -1;
	int64_t x1147 = -1LL;
	uint64_t x1148 = 9LLU;

	t20 = ((x1145^(x1146^x1147))<<x1148);

	if (t20 != 512LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1221 = 2156LLU;
	int16_t x1222 = 1;
	int16_t x1223 = 1;
	uint16_t x1224 = 0U;
	uint64_t t21 = 227620LLU;

	t21 = ((x1221^(x1222^x1223))<<x1224);

	if (t21 != 2156LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1265 = INT32_MIN;
	uint64_t x1266 = 113691243960LLU;
	volatile uint32_t x1267 = 379494132U;
	uint8_t x1268 = 23U;
	uint64_t t22 = 34382481LLU;

	t22 = ((x1265^(x1266^x1267))<<x1268);

	if (t22 != 17507475363544956928LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1273 = INT32_MIN;
	uint32_t x1274 = 10U;
	uint16_t x1275 = 21U;
	static uint8_t x1276 = 2U;
	static volatile uint32_t t23 = 29412379U;

	t23 = ((x1273^(x1274^x1275))<<x1276);

	if (t23 != 124U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x1433 = 23U;
	static volatile uint32_t x1434 = 8U;
	uint8_t x1436 = 0U;
	volatile uint32_t t24 = 650422U;

	t24 = ((x1433^(x1434^x1435))<<x1436);

	if (t24 != 4294967284U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1501 = INT64_MIN;
	int32_t x1502 = 34626;
	int16_t x1503 = INT16_MIN;
	static int64_t t25 = 55914790LL;

	t25 = ((x1501^(x1502^x1503))<<x1504);

	if (t25 != 9223372036854712130LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1505 = 22101837793264398LLU;
	volatile uint64_t x1506 = UINT64_MAX;
	uint8_t x1507 = 0U;
	uint64_t x1508 = 15LLU;
	volatile uint64_t t26 = 214653819245LLU;

	t26 = ((x1505^(x1506^x1507))<<x1508);

	if (t26 != 13636742138694238208LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1591 = 1;
	int64_t t27 = 64671396496LL;

	t27 = ((x1589^(x1590^x1591))<<x1592);

	if (t27 != 504LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1765 = 337U;
	uint32_t x1766 = UINT32_MAX;
	uint8_t x1767 = 1U;
	volatile uint32_t t28 = 27641U;

	t28 = ((x1765^(x1766^x1767))<<x1768);

	if (t28 != 4294966622U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1881 = 1433141249688LLU;
	int8_t x1882 = INT8_MIN;
	volatile uint16_t x1884 = 30U;
	uint64_t t29 = 15182891482160LLU;

	t29 = ((x1881^(x1882^x1883))<<x1884);

	if (t29 != 10702802621439148032LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1901 = -1;
	uint32_t x1902 = 7938315U;
	int32_t x1903 = INT32_MAX;
	uint32_t t30 = 2146837700U;

	t30 = ((x1901^(x1902^x1903))<<x1904);

	if (t30 != 1119879168U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1993 = -19;
	uint64_t x1994 = 203869LLU;
	volatile int32_t x1995 = 1;
	static uint64_t t31 = 3260431825LLU;

	t31 = ((x1993^(x1994^x1995))<<x1996);

	if (t31 != 18446744073703028256LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x2065 = -51;
	static volatile int8_t x2066 = -7;
	volatile int32_t t32 = 1;

	t32 = ((x2065^(x2066^x2067))<<x2068);

	if (t32 != 18) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2097 = UINT32_MAX;
	static uint32_t x2098 = UINT32_MAX;
	volatile int8_t x2099 = INT8_MIN;
	uint8_t x2100 = 13U;
	volatile uint32_t t33 = 375U;

	t33 = ((x2097^(x2098^x2099))<<x2100);

	if (t33 != 4293918720U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2162 = -1LL;
	uint16_t x2163 = 15533U;
	volatile int8_t x2164 = 3;
	volatile uint64_t t34 = 366LLU;

	t34 = ((x2161^(x2162^x2163))<<x2164);

	if (t34 != 18446744073703265832LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2281 = INT32_MIN;
	static volatile uint16_t x2283 = 22U;

	t35 = ((x2281^(x2282^x2283))<<x2284);

	if (t35 != 329893708LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2373 = INT32_MIN;
	uint32_t x2374 = UINT32_MAX;
	uint64_t x2375 = 160255846500404LLU;
	static volatile uint8_t x2376 = 1U;
	volatile uint64_t t36 = 1019327247971LLU;

	t36 = ((x2373^(x2374^x2375))<<x2376);

	if (t36 != 18446423557721583510LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x2421 = UINT8_MAX;
	volatile int16_t x2422 = INT16_MAX;
	volatile uint16_t x2423 = UINT16_MAX;
	static volatile int32_t t37 = -71663643;

	t37 = ((x2421^(x2422^x2423))<<x2424);

	if (t37 != 33023) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2449 = UINT32_MAX;
	volatile int32_t x2450 = INT32_MAX;
	volatile int8_t x2451 = -9;
	volatile uint16_t x2452 = 0U;

	t38 = ((x2449^(x2450^x2451))<<x2452);

	if (t38 != 2147483639U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2485 = 29422462611966369LLU;
	uint64_t x2486 = 55621795618368LLU;
	int8_t x2487 = 6;
	volatile uint64_t x2488 = 16LLU;
	static volatile uint64_t t39 = 56LLU;

	t39 = ((x2485^(x2486^x2487))<<x2488);

	if (t39 != 13043723292532736000LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x2533 = 9840U;
	uint64_t x2534 = 32263802LLU;
	int64_t x2535 = 1875280648781908632LL;
	int8_t x2536 = 3;
	volatile uint64_t t40 = 832179LLU;

	t40 = ((x2533^(x2534^x2535))<<x2536);

	if (t40 != 15002245190299227280LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2553 = 1U;
	static int16_t x2554 = -1203;
	static volatile int16_t x2555 = -1;
	int16_t x2556 = 3;
	volatile int32_t t41 = 419979942;

	t41 = ((x2553^(x2554^x2555))<<x2556);

	if (t41 != 9624) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x2629 = 10;
	int32_t x2630 = -473785;
	int8_t x2631 = -3;
	static int8_t x2632 = 5;
	volatile int32_t t42 = -56308;

	t42 = ((x2629^(x2630^x2631))<<x2632);

	if (t42 != 15160832) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2681 = 26U;
	uint32_t x2682 = 62401U;
	int16_t x2683 = INT16_MIN;
	static volatile uint8_t x2684 = 11U;
	volatile uint32_t t43 = 7U;

	t43 = ((x2681^(x2682^x2683))<<x2684);

	if (t43 != 4221491200U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x2773 = 477924U;
	int8_t x2774 = INT8_MAX;
	volatile int8_t x2775 = INT8_MAX;
	uint8_t x2776 = 1U;
	uint32_t t44 = 59416226U;

	t44 = ((x2773^(x2774^x2775))<<x2776);

	if (t44 != 955848U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2805 = -1LL;
	uint64_t x2806 = UINT64_MAX;
	uint64_t x2808 = 1LLU;

	t45 = ((x2805^(x2806^x2807))<<x2808);

	if (t45 != 1906LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2889 = 40365376LL;
	int32_t x2891 = -1;
	int8_t x2892 = 1;
	static volatile uint64_t t46 = 4477870674LLU;

	t46 = ((x2889^(x2890^x2891))<<x2892);

	if (t46 != 18446743608232340702LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2901 = UINT64_MAX;
	volatile int8_t x2903 = -13;
	volatile int16_t x2904 = 0;
	uint64_t t47 = 122627090642682LLU;

	t47 = ((x2901^(x2902^x2903))<<x2904);

	if (t47 != 243LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3037 = 74844;
	volatile int32_t x3038 = 448982605;
	volatile int64_t x3039 = INT64_MAX;
	volatile int64_t t48 = 380251352531300LL;

	t48 = ((x3037^(x3038^x3039))<<x3040);

	if (t48 != 9223372036405736942LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x3109 = 57LLU;
	int64_t x3110 = -5648LL;
	int16_t x3111 = INT16_MIN;
	static volatile uint64_t t49 = 0LLU;

	t49 = ((x3109^(x3110^x3111))<<x3112);

	if (t49 != 108324LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3137 = INT16_MIN;
	int8_t x3139 = 25;
	int64_t x3140 = 1LL;
	static volatile uint32_t t50 = 141U;

	t50 = ((x3137^(x3138^x3139))<<x3140);

	if (t50 != 4183132810U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3205 = UINT64_MAX;
	uint16_t x3206 = 8U;
	int32_t x3207 = INT32_MAX;
	static int8_t x3208 = 21;
	static volatile uint64_t t51 = 132628106145095010LLU;

	t51 = ((x3205^(x3206^x3207))<<x3208);

	if (t51 != 18442240474098958336LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x3365 = INT32_MIN;
	uint8_t x3366 = 58U;
	static int64_t x3367 = -1LL;
	uint8_t x3368 = 9U;

	t52 = ((x3365^(x3366^x3367))<<x3368);

	if (t52 != 1099511597568LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3409 = UINT64_MAX;
	int16_t x3410 = INT16_MAX;
	int32_t x3411 = INT32_MIN;
	uint8_t x3412 = 8U;
	static volatile uint64_t t53 = 1922133582817LLU;

	t53 = ((x3409^(x3410^x3411))<<x3412);

	if (t53 != 549747425280LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3437 = INT32_MAX;
	uint64_t x3438 = 6731175892LLU;
	int8_t x3439 = 0;
	int8_t x3440 = 1;
	volatile uint64_t t54 = 290440110620LLU;

	t54 = ((x3437^(x3438^x3439))<<x3440);

	if (t54 != 16602419286LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3474 = 313097046229329LLU;
	uint8_t x3475 = UINT8_MAX;
	volatile uint32_t x3476 = 2U;
	volatile uint64_t t55 = 2372566666926825LLU;

	t55 = ((x3473^(x3474^x3475))<<x3476);

	if (t55 != 1252388184967300LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3549 = INT32_MAX;
	volatile int32_t x3550 = INT32_MIN;
	int64_t x3551 = -1064863258112408LL;
	int8_t x3552 = 13;
	int64_t t56 = -10430162118253LL;

	t56 = ((x3549^(x3550^x3551))<<x3552);

	if (t56 != 8723359810456838144LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3557 = INT32_MAX;
	volatile int32_t x3559 = INT32_MIN;
	int8_t x3560 = 1;
	int32_t t57 = -28;

	t57 = ((x3557^(x3558^x3559))<<x3560);

	if (t57 != 65534) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x3577 = INT8_MIN;
	static int8_t x3579 = INT8_MIN;
	int64_t x3580 = 3LL;
	int64_t t58 = 123LL;

	t58 = ((x3577^(x3578^x3579))<<x3580);

	if (t58 != 384229955880LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3631 = -624LL;
	uint8_t x3632 = 4U;
	volatile int64_t t59 = -8LL;

	t59 = ((x3629^(x3630^x3631))<<x3632);

	if (t59 != 34359748336LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3713 = 1U;
	int64_t x3714 = INT64_MIN;
	int16_t x3715 = -1;
	static uint16_t x3716 = 0U;
	volatile int64_t t60 = -979778281400LL;

	t60 = ((x3713^(x3714^x3715))<<x3716);

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3756 = 0U;
	volatile int64_t t61 = 124801LL;

	t61 = ((x3753^(x3754^x3755))<<x3756);

	if (t61 != 7870717LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3858 = 1U;
	uint8_t x3859 = UINT8_MAX;
	uint32_t t62 = 82U;

	t62 = ((x3857^(x3858^x3859))<<x3860);

	if (t62 != 4294959456U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3929 = 4537284807678308753LL;
	volatile int8_t x3930 = 0;
	volatile int16_t x3931 = INT16_MAX;
	uint8_t x3932 = 0U;
	volatile int64_t t63 = 8LL;

	t63 = ((x3929^(x3930^x3931))<<x3932);

	if (t63 != 4537284807678316142LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x3941 = INT16_MIN;
	volatile uint16_t x3942 = 391U;
	uint64_t x3943 = UINT64_MAX;

	t64 = ((x3941^(x3942^x3943))<<x3944);

	if (t64 != 259008LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3985 = 779;
	uint16_t x3986 = UINT16_MAX;
	static int8_t x3988 = 0;
	int32_t t65 = -4387041;

	t65 = ((x3985^(x3986^x3987))<<x3988);

	if (t65 != 55414) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4081 = 25193669;
	static int16_t x4082 = INT16_MAX;
	volatile uint32_t x4083 = 2703290U;
	uint32_t x4084 = 5U;
	static volatile uint32_t t66 = 2983U;

	t66 = ((x4081^(x4082^x4083))<<x4084);

	if (t66 != 891654144U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4161 = INT8_MIN;
	volatile uint8_t x4162 = 15U;
	uint8_t x4164 = 4U;
	volatile int64_t t67 = -9352560241679LL;

	t67 = ((x4161^(x4162^x4163))<<x4164);

	if (t67 != 1792LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4169 = 43U;
	uint64_t x4171 = 8414LLU;

	t68 = ((x4169^(x4170^x4171))<<x4172);

	if (t68 != 2157445120LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x4221 = INT32_MIN;
	volatile int32_t x4223 = -101036217;
	uint8_t x4224 = 0U;
	int32_t t69 = 1;

	t69 = ((x4221^(x4222^x4223))<<x4224);

	if (t69 != 2046447431) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x4297 = 6827460521932325LLU;
	static int16_t x4298 = INT16_MIN;
	uint16_t x4299 = 289U;
	static uint8_t x4300 = 22U;
	static uint64_t t70 = 214560145011758LLU;

	t70 = ((x4297^(x4298^x4299))<<x4300);

	if (t70 != 11348569467866054656LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4361 = UINT64_MAX;
	int16_t x4363 = -1;
	uint8_t x4364 = 58U;
	static volatile uint64_t t71 = 213821LLU;

	t71 = ((x4361^(x4362^x4363))<<x4364);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4477 = INT32_MAX;
	int64_t x4478 = -105243196521041LL;
	int8_t x4479 = INT8_MIN;
	uint32_t x4480 = 1U;
	int64_t t72 = 65644861796945LL;

	t72 = ((x4477^(x4478^x4479))<<x4480);

	if (t72 != 210484826475424LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x4561 = 3U;
	static uint16_t x4562 = 0U;
	int8_t x4563 = INT8_MIN;
	static uint8_t x4564 = 12U;
	uint32_t t73 = 8799U;

	t73 = ((x4561^(x4562^x4563))<<x4564);

	if (t73 != 4294455296U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4589 = -161;
	int32_t x4590 = -1;
	int32_t x4591 = 1;
	uint64_t x4592 = 1LLU;
	volatile int32_t t74 = -164479;

	t74 = ((x4589^(x4590^x4591))<<x4592);

	if (t74 != 322) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x4609 = 43U;
	int8_t x4610 = INT8_MIN;
	static int8_t x4611 = INT8_MIN;
	uint16_t x4612 = 4U;

	t75 = ((x4609^(x4610^x4611))<<x4612);

	if (t75 != 688) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4621 = -21;
	uint64_t x4622 = 9770860078LLU;
	int16_t x4623 = -1;
	volatile int64_t x4624 = 48LL;
	volatile uint64_t t76 = 966607LLU;

	t76 = ((x4621^(x4622^x4623))<<x4624);

	if (t76 != 9095582397428137984LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x4654 = INT16_MAX;
	static uint64_t x4655 = 26118LLU;
	int16_t x4656 = 8;
	uint64_t t77 = 512589LLU;

	t77 = ((x4653^(x4654^x4655))<<x4656);

	if (t77 != 18446744073707849216LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4717 = -227905009581214LL;
	volatile uint32_t x4719 = UINT32_MAX;
	static uint16_t x4720 = 3U;
	uint64_t t78 = 4170834089617243546LLU;

	t78 = ((x4717^(x4718^x4719))<<x4720);

	if (t78 != 18444920817832420584LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4773 = 10U;
	uint8_t x4774 = UINT8_MAX;
	uint8_t x4775 = 6U;
	volatile int8_t x4776 = 0;
	volatile int32_t t79 = -230500;

	t79 = ((x4773^(x4774^x4775))<<x4776);

	if (t79 != 243) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4825 = -1LL;
	int32_t x4826 = INT32_MIN;
	volatile uint64_t x4827 = 4810224131807679LLU;
	static uint64_t t80 = 2510604LLU;

	t80 = ((x4825^(x4826^x4827))<<x4828);

	if (t80 != 4810225585841728LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4901 = 2738U;
	int64_t x4902 = -1LL;
	uint32_t x4904 = 6U;

	t81 = ((x4901^(x4902^x4903))<<x4904);

	if (t81 != 175232LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4986 = 9U;
	uint16_t x4987 = 259U;
	volatile uint16_t x4988 = 0U;
	volatile uint64_t t82 = 98761692505024543LLU;

	t82 = ((x4985^(x4986^x4987))<<x4988);

	if (t82 != 7707832404092380LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5125 = 626U;
	int64_t x5126 = -1LL;
	int8_t x5127 = INT8_MIN;
	static uint8_t x5128 = 0U;
	static volatile int64_t t83 = 191859LL;

	t83 = ((x5125^(x5126^x5127))<<x5128);

	if (t83 != 525LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x5258 = -1;
	static volatile uint32_t x5259 = 331U;
	uint8_t x5260 = 7U;
	static uint32_t t84 = 14U;

	t84 = ((x5257^(x5258^x5259))<<x5260);

	if (t84 != 394752U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x5321 = 0U;
	volatile uint64_t x5322 = 112362565177289LLU;
	int32_t x5323 = 0;
	volatile uint16_t x5324 = 1U;
	uint64_t t85 = 476099868LLU;

	t85 = ((x5321^(x5322^x5323))<<x5324);

	if (t85 != 224725130354578LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5389 = INT32_MIN;
	uint64_t x5391 = 176045LLU;
	uint16_t x5392 = 6U;
	uint64_t t86 = 28393849144LLU;

	t86 = ((x5389^(x5390^x5391))<<x5392);

	if (t86 != 18446743936281863296LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x5417 = INT8_MAX;
	int16_t x5418 = INT16_MIN;

	t87 = ((x5417^(x5418^x5419))<<x5420);

	if (t87 != 534773760) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5441 = -1;
	volatile uint64_t x5444 = 1LLU;

	t88 = ((x5441^(x5442^x5443))<<x5444);

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x5445 = INT8_MAX;
	uint16_t x5446 = UINT16_MAX;
	uint16_t x5447 = 2158U;
	static int32_t x5448 = 7;
	volatile int32_t t89 = 64689;

	t89 = ((x5445^(x5446^x5447))<<x5448);

	if (t89 != 8124160) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x5513 = 0U;
	int16_t x5514 = INT16_MIN;
	uint32_t x5515 = 25586175U;
	int8_t x5516 = 5;
	volatile uint32_t t90 = 0U;

	t90 = ((x5513^(x5514^x5515))<<x5516);

	if (t90 != 3476897760U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5593 = 49589312275LL;
	uint32_t x5594 = 522U;
	volatile int64_t x5596 = 1LL;
	int64_t t91 = -1121236254497671LL;

	t91 = ((x5593^(x5594^x5595))<<x5596);

	if (t91 != 99178623536LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5618 = 50U;
	static int8_t x5619 = -1;
	volatile int8_t x5620 = 7;
	uint64_t t92 = 116511174545788LLU;

	t92 = ((x5617^(x5618^x5619))<<x5620);

	if (t92 != 18446499618959005952LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5713 = INT64_MIN;
	uint16_t x5715 = 20441U;
	int64_t t93 = 441958283739859LL;

	t93 = ((x5713^(x5714^x5715))<<x5716);

	if (t93 != 20441LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x5793 = UINT64_MAX;
	volatile int64_t x5794 = INT64_MIN;
	static uint8_t x5796 = 11U;
	volatile uint64_t t94 = 7880915834980LLU;

	t94 = ((x5793^(x5794^x5795))<<x5796);

	if (t94 != 67106816LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5797 = INT8_MIN;
	volatile uint64_t x5798 = 4LLU;
	uint64_t x5799 = 764821LLU;
	uint8_t x5800 = 3U;

	t95 = ((x5797^(x5798^x5799))<<x5800);

	if (t95 != 18446744073703432328LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5838 = -1644;
	uint16_t x5840 = 14U;
	static int32_t t96 = -11355;

	t96 = ((x5837^(x5838^x5839))<<x5840);

	if (t96 != 112967680) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5869 = 11U;
	int8_t x5870 = 1;
	volatile uint64_t x5871 = UINT64_MAX;
	static volatile uint32_t x5872 = 24U;
	static volatile uint64_t t97 = 678LLU;

	t97 = ((x5869^(x5870^x5871))<<x5872);

	if (t97 != 18446744073525002240LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x5974 = INT8_MIN;

	t98 = ((x5973^(x5974^x5975))<<x5976);

	if (t98 != 409600U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5993 = 5007U;
	int8_t x5994 = -1;
	int32_t x5995 = -1;
	static uint32_t x5996 = 16U;
	static int32_t t99 = -633451;

	t99 = ((x5993^(x5994^x5995))<<x5996);

	if (t99 != 328138752) { NG(); } else { ; }
	
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

