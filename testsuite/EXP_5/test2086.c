#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x151 = -1LL;
int16_t x184 = -1;
int16_t x249 = INT16_MAX;
int64_t x250 = 66749751616228LL;
static volatile int32_t t4 = 627029325;
volatile int8_t x261 = INT8_MAX;
int64_t x368 = -1LL;
volatile uint32_t t8 = 3735U;
volatile int32_t t9 = -167;
static int64_t x419 = INT64_MIN;
volatile uint16_t x501 = UINT16_MAX;
int8_t x531 = INT8_MIN;
uint8_t x533 = UINT8_MAX;
uint8_t x536 = 19U;
volatile int32_t t15 = -368151;
volatile int32_t x547 = -1;
int8_t x551 = INT8_MIN;
int32_t t18 = 64679;
int32_t t19 = -1;
static volatile int8_t x642 = INT8_MAX;
int64_t x643 = INT64_MAX;
uint32_t t20 = 485909U;
uint8_t x707 = 54U;
int8_t x716 = 2;
uint32_t x743 = UINT32_MAX;
uint8_t x821 = 1U;
static int16_t x887 = INT16_MIN;
volatile uint64_t x924 = 15LLU;
uint8_t x968 = 48U;
volatile int32_t x1011 = -1;
uint64_t x1013 = UINT64_MAX;
int16_t x1100 = -1;
volatile int32_t x1117 = 501916;
uint64_t x1118 = UINT64_MAX;
int32_t x1120 = INT32_MAX;
static uint64_t x1145 = 2854024436320LLU;
uint64_t x1173 = UINT64_MAX;
uint64_t x1174 = UINT64_MAX;
uint32_t x1192 = 425818399U;
uint8_t x1245 = 3U;
static int8_t x1248 = 5;
volatile int32_t t44 = -11;
static uint32_t x1351 = 5U;
int16_t x1354 = INT16_MIN;
int8_t x1367 = 0;
int64_t x1454 = 54124723645197LL;
volatile int64_t t51 = INT64_MAX;
static int16_t x1511 = INT16_MIN;
int8_t x1525 = 1;
volatile int32_t x1551 = 122;
int8_t x1554 = 2;
uint16_t x1603 = UINT16_MAX;
uint32_t x1604 = 45U;
volatile uint32_t t58 = UINT32_MAX;
uint8_t x1633 = 6U;
uint32_t x1645 = 1114U;
volatile int64_t x1647 = -1LL;
int16_t x1691 = INT16_MAX;
static volatile int32_t t62 = 1489;
uint64_t t66 = 1340509881594518461LLU;
uint8_t x1857 = 3U;
int64_t x1875 = 0LL;
uint8_t x1876 = UINT8_MAX;
int8_t x1927 = -1;
static uint16_t x2006 = 19U;
int16_t x2091 = 1;
int32_t t73 = -48;
static volatile int8_t x2105 = INT8_MAX;
int8_t x2108 = -1;
volatile uint32_t x2131 = 702924U;
uint8_t x2132 = UINT8_MAX;
uint32_t x2185 = 0U;
int64_t x2222 = INT64_MIN;
static int32_t x2224 = -1;
static int16_t x2282 = -1;
volatile uint32_t x2305 = 2672503U;
int16_t x2316 = INT16_MIN;
static volatile int8_t x2324 = -1;
int32_t t86 = -13806534;
int32_t t87 = 3;
volatile int64_t x2351 = 9099071LL;
int16_t x2402 = INT16_MIN;
int32_t x2403 = INT32_MAX;
int32_t x2416 = -1;
static int32_t t90 = 22037;
uint8_t x2429 = 83U;
static int64_t x2432 = INT64_MIN;
int32_t x2452 = -1;
volatile int32_t x2553 = 125099;
int32_t x2627 = -1;
int8_t x2666 = 1;
static int16_t x2668 = INT16_MIN;
int8_t x2685 = 12;
static volatile int16_t x2688 = 10;
volatile uint32_t x2701 = 579668942U;


void f0(void) {
	static volatile uint16_t x69 = 22302U;
	static int32_t x70 = INT32_MIN;
	int64_t x71 = INT64_MIN;
	static volatile int16_t x72 = INT16_MIN;
	volatile int32_t t0 = 88;

	t0 = (x69<<((x70^x71)%x72));

	if (t0 != 22302) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x149 = 350158226318LL;
	uint32_t x150 = UINT32_MAX;
	volatile int16_t x152 = INT16_MIN;
	static volatile int64_t t1 = -491LL;

	t1 = (x149<<((x150^x151)%x152));

	if (t1 != 350158226318LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x169 = INT32_MAX;
	uint16_t x170 = 26915U;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = 4;
	int32_t t2 = INT32_MAX;

	t2 = (x169<<((x170^x171)%x172));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x181 = 349U;
	int16_t x182 = INT16_MIN;
	int16_t x183 = 14;
	static int32_t t3 = 21114199;

	t3 = (x181<<((x182^x183)%x184));

	if (t3 != 349) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x251 = 14;
	int64_t x252 = -1LL;

	t4 = (x249<<((x250^x251)%x252));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x262 = 1517138421LL;
	uint32_t x263 = 154714U;
	uint16_t x264 = 11U;
	int32_t t5 = 64244863;

	t5 = (x261<<((x262^x263)%x264));

	if (t5 != 1016) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x281 = 4083713U;
	volatile int16_t x282 = -1;
	int8_t x283 = INT8_MIN;
	int16_t x284 = 14;
	static uint32_t t6 = 143U;

	t6 = (x281<<((x282^x283)%x284));

	if (t6 != 8167426U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x337 = 0;
	static int8_t x338 = -1;
	volatile int8_t x339 = 1;
	static int8_t x340 = -1;
	volatile int32_t t7 = 0;

	t7 = (x337<<((x338^x339)%x340));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x365 = 0U;
	int64_t x366 = 12181033135018LL;
	int64_t x367 = 2579979694441LL;

	t8 = (x365<<((x366^x367)%x368));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x413 = INT16_MAX;
	volatile int64_t x414 = INT64_MIN;
	static int64_t x415 = 264377923LL;
	static volatile int64_t x416 = -1LL;

	t9 = (x413<<((x414^x415)%x416));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x417 = 391799U;
	int64_t x418 = INT64_MAX;
	int16_t x420 = -1;
	uint32_t t10 = 246161U;

	t10 = (x417<<((x418^x419)%x420));

	if (t10 != 391799U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x429 = 5U;
	int32_t x430 = INT32_MIN;
	static uint32_t x431 = 40990U;
	static int64_t x432 = -1LL;
	volatile int32_t t11 = -15823;

	t11 = (x429<<((x430^x431)%x432));

	if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x502 = -1LL;
	volatile uint64_t x503 = 14943045LLU;
	int32_t x504 = 3;
	volatile int32_t t12 = -1404534;

	t12 = (x501<<((x502^x503)%x504));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x529 = 0U;
	int16_t x530 = INT16_MAX;
	int32_t x532 = -1;
	volatile int32_t t13 = 44629366;

	t13 = (x529<<((x530^x531)%x532));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x534 = UINT64_MAX;
	static int64_t x535 = -2447454491213838568LL;
	int32_t t14 = -6;

	t14 = (x533<<((x534^x535)%x536));

	if (t14 != 2040) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x537 = 601U;
	int64_t x538 = 966524172LL;
	static int16_t x539 = -1;
	int8_t x540 = -1;

	t15 = (x537<<((x538^x539)%x540));

	if (t15 != 601) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x545 = INT16_MAX;
	uint16_t x546 = UINT16_MAX;
	int64_t x548 = -1LL;
	int32_t t16 = -242;

	t16 = (x545<<((x546^x547)%x548));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x549 = INT8_MAX;
	int64_t x550 = INT64_MIN;
	int8_t x552 = INT8_MIN;
	static volatile int32_t t17 = -2568738;

	t17 = (x549<<((x550^x551)%x552));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x605 = UINT16_MAX;
	static int8_t x606 = INT8_MAX;
	uint8_t x607 = 7U;
	static int16_t x608 = -1;

	t18 = (x605<<((x606^x607)%x608));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x625 = 5U;
	static int16_t x626 = INT16_MIN;
	int64_t x627 = INT64_MAX;
	int16_t x628 = -1;

	t19 = (x625<<((x626^x627)%x628));

	if (t19 != 5) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x641 = 431115144U;
	int64_t x644 = -1LL;

	t20 = (x641<<((x642^x643)%x644));

	if (t20 != 431115144U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x645 = 17U;
	static int32_t x646 = INT32_MIN;
	int16_t x647 = 28;
	int64_t x648 = 20LL;
	uint32_t t21 = 257463U;

	t21 = (x645<<((x646^x647)%x648));

	if (t21 != 17U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x665 = 0U;
	int8_t x666 = -1;
	int64_t x667 = INT64_MIN;
	volatile int8_t x668 = INT8_MAX;
	uint32_t t22 = 572240U;

	t22 = (x665<<((x666^x667)%x668));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x705 = 975794309U;
	int8_t x706 = 1;
	int32_t x708 = -1;
	static volatile uint32_t t23 = 5U;

	t23 = (x705<<((x706^x707)%x708));

	if (t23 != 975794309U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x713 = UINT8_MAX;
	static uint16_t x714 = 0U;
	int32_t x715 = INT32_MIN;
	int32_t t24 = 484329952;

	t24 = (x713<<((x714^x715)%x716));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x741 = 47;
	uint16_t x742 = UINT16_MAX;
	uint16_t x744 = 1U;
	volatile int32_t t25 = 0;

	t25 = (x741<<((x742^x743)%x744));

	if (t25 != 47) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x822 = INT32_MIN;
	int32_t x823 = INT32_MIN;
	static uint64_t x824 = 75252774LLU;
	static volatile int32_t t26 = -3930605;

	t26 = (x821<<((x822^x823)%x824));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x877 = UINT16_MAX;
	int64_t x878 = -1LL;
	uint32_t x879 = 0U;
	static int64_t x880 = -1LL;
	int32_t t27 = 6;

	t27 = (x877<<((x878^x879)%x880));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x885 = 0;
	int16_t x886 = INT16_MIN;
	int8_t x888 = 35;
	int32_t t28 = 22000;

	t28 = (x885<<((x886^x887)%x888));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x913 = INT16_MAX;
	int8_t x914 = INT8_MIN;
	volatile uint32_t x915 = 3U;
	int8_t x916 = INT8_MIN;
	volatile int32_t t29 = -1279;

	t29 = (x913<<((x914^x915)%x916));

	if (t29 != 262136) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x921 = 15421U;
	int32_t x922 = -1;
	volatile int32_t x923 = -3962304;
	int32_t t30 = 326;

	t30 = (x921<<((x922^x923)%x924));

	if (t30 != 3947776) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x965 = 291799420LLU;
	int16_t x966 = INT16_MAX;
	uint64_t x967 = 40395865318LLU;
	uint64_t t31 = 27700534LLU;

	t31 = (x965<<((x966^x967)%x968));

	if (t31 != 14484412030460624896LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x969 = 1U;
	int32_t x970 = INT32_MAX;
	uint32_t x971 = 415344U;
	uint8_t x972 = 3U;
	volatile int32_t t32 = -186801399;

	t32 = (x969<<((x970^x971)%x972));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1009 = 42;
	int64_t x1010 = -7096719LL;
	int32_t x1012 = -21;
	volatile int32_t t33 = -34534908;

	t33 = (x1009<<((x1010^x1011)%x1012));

	if (t33 != 44040192) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1014 = INT16_MAX;
	int32_t x1015 = -1;
	volatile int16_t x1016 = INT16_MIN;
	uint64_t t34 = UINT64_MAX;

	t34 = (x1013<<((x1014^x1015)%x1016));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1097 = UINT16_MAX;
	int32_t x1098 = -5080218;
	int64_t x1099 = INT64_MIN;
	int32_t t35 = 0;

	t35 = (x1097<<((x1098^x1099)%x1100));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1119 = 3;
	volatile int32_t t36 = -48;

	t36 = (x1117<<((x1118^x1119)%x1120));

	if (t36 != 501916) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1146 = 21U;
	int16_t x1147 = INT16_MIN;
	int64_t x1148 = -1LL;
	volatile uint64_t t37 = 2066693110089110819LLU;

	t37 = (x1145<<((x1146^x1147)%x1148));

	if (t37 != 2854024436320LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1149 = 0LL;
	static int64_t x1150 = INT64_MAX;
	int16_t x1151 = 16265;
	int16_t x1152 = -3;
	int64_t t38 = -182394695946251LL;

	t38 = (x1149<<((x1150^x1151)%x1152));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1175 = -3;
	static int8_t x1176 = INT8_MIN;
	volatile uint64_t t39 = 196278LLU;

	t39 = (x1173<<((x1174^x1175)%x1176));

	if (t39 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1189 = 3U;
	volatile int16_t x1190 = -1;
	uint32_t x1191 = UINT32_MAX;
	static uint32_t t40 = 524U;

	t40 = (x1189<<((x1190^x1191)%x1192));

	if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1213 = INT64_MAX;
	static volatile int64_t x1214 = INT64_MAX;
	int32_t x1215 = INT32_MAX;
	volatile int8_t x1216 = INT8_MIN;
	static volatile int64_t t41 = INT64_MAX;

	t41 = (x1213<<((x1214^x1215)%x1216));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x1237 = INT16_MAX;
	int64_t x1238 = 0LL;
	volatile uint16_t x1239 = 249U;
	uint8_t x1240 = 1U;
	static volatile int32_t t42 = 1;

	t42 = (x1237<<((x1238^x1239)%x1240));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1246 = INT32_MAX;
	static volatile uint32_t x1247 = UINT32_MAX;
	volatile int32_t t43 = -9927;

	t43 = (x1245<<((x1246^x1247)%x1248));

	if (t43 != 24) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1301 = 51984;
	int32_t x1302 = INT32_MIN;
	uint64_t x1303 = 5742021420LLU;
	uint8_t x1304 = 6U;

	t44 = (x1301<<((x1302^x1303)%x1304));

	if (t44 != 51984) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1341 = 2816880U;
	static volatile int64_t x1342 = 3084912896845LL;
	static int32_t x1343 = -393716968;
	int32_t x1344 = -1;
	volatile uint32_t t45 = 447846U;

	t45 = (x1341<<((x1342^x1343)%x1344));

	if (t45 != 2816880U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1349 = 324742U;
	uint32_t x1350 = 7U;
	volatile int32_t x1352 = -130;
	volatile uint32_t t46 = 600U;

	t46 = (x1349<<((x1350^x1351)%x1352));

	if (t46 != 1298968U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1353 = 0U;
	int8_t x1355 = -1;
	static int16_t x1356 = -1;
	volatile int32_t t47 = 14255;

	t47 = (x1353<<((x1354^x1355)%x1356));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x1365 = UINT64_MAX;
	volatile int8_t x1366 = INT8_MAX;
	volatile uint8_t x1368 = 115U;
	volatile uint64_t t48 = 14250374030166187LLU;

	t48 = (x1365<<((x1366^x1367)%x1368));

	if (t48 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1421 = 219323U;
	int32_t x1422 = INT32_MAX;
	uint64_t x1423 = UINT64_MAX;
	int32_t x1424 = 474;
	uint32_t t49 = 125691U;

	t49 = (x1421<<((x1422^x1423)%x1424));

	if (t49 != 3959422976U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x1445 = UINT16_MAX;
	uint64_t x1446 = UINT64_MAX;
	int32_t x1447 = INT32_MIN;
	uint8_t x1448 = 1U;
	int32_t t50 = 1;

	t50 = (x1445<<((x1446^x1447)%x1448));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1453 = INT64_MAX;
	int8_t x1455 = 1;
	volatile uint64_t x1456 = 2LLU;

	t51 = (x1453<<((x1454^x1455)%x1456));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1481 = UINT32_MAX;
	static int16_t x1482 = -1;
	volatile int8_t x1483 = INT8_MIN;
	int16_t x1484 = -1;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x1481<<((x1482^x1483)%x1484));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x1509 = UINT64_MAX;
	int8_t x1510 = INT8_MIN;
	int8_t x1512 = -1;
	uint64_t t53 = UINT64_MAX;

	t53 = (x1509<<((x1510^x1511)%x1512));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1526 = INT64_MIN;
	int8_t x1527 = -1;
	static int16_t x1528 = -1;
	int32_t t54 = -4768292;

	t54 = (x1525<<((x1526^x1527)%x1528));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x1549 = 2441045537597521LLU;
	int8_t x1550 = INT8_MAX;
	int32_t x1552 = INT32_MIN;
	uint64_t t55 = 1LLU;

	t55 = (x1549<<((x1550^x1551)%x1552));

	if (t55 != 78113457203120672LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1553 = 145714942;
	static uint8_t x1555 = 0U;
	int16_t x1556 = INT16_MIN;
	volatile int32_t t56 = 3;

	t56 = (x1553<<((x1554^x1555)%x1556));

	if (t56 != 582859768) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x1581 = INT16_MAX;
	uint8_t x1582 = UINT8_MAX;
	static int32_t x1583 = INT32_MAX;
	int32_t x1584 = -1;
	volatile int32_t t57 = 49;

	t57 = (x1581<<((x1582^x1583)%x1584));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x1601 = UINT32_MAX;
	uint16_t x1602 = UINT16_MAX;

	t58 = (x1601<<((x1602^x1603)%x1604));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1634 = INT16_MIN;
	int32_t x1635 = -6861;
	static volatile int16_t x1636 = -1;
	static volatile int32_t t59 = -29150;

	t59 = (x1633<<((x1634^x1635)%x1636));

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1646 = INT16_MIN;
	int16_t x1648 = 1;
	volatile uint32_t t60 = 7547U;

	t60 = (x1645<<((x1646^x1647)%x1648));

	if (t60 != 1114U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x1689 = INT8_MAX;
	static int8_t x1690 = 1;
	int64_t x1692 = -1LL;
	static volatile int32_t t61 = -17;

	t61 = (x1689<<((x1690^x1691)%x1692));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x1701 = 49U;
	int8_t x1702 = 1;
	static int64_t x1703 = -1LL;
	uint8_t x1704 = 1U;

	t62 = (x1701<<((x1702^x1703)%x1704));

	if (t62 != 49) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x1705 = 0U;
	int16_t x1706 = 281;
	static volatile uint32_t x1707 = UINT32_MAX;
	uint8_t x1708 = 18U;
	volatile int32_t t63 = -1;

	t63 = (x1705<<((x1706^x1707)%x1708));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x1717 = INT8_MAX;
	volatile int64_t x1718 = -1LL;
	int32_t x1719 = INT32_MIN;
	int8_t x1720 = 1;
	int32_t t64 = -3031;

	t64 = (x1717<<((x1718^x1719)%x1720));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1785 = UINT64_MAX;
	int64_t x1786 = 1067565164448LL;
	int16_t x1787 = 267;
	static int8_t x1788 = 1;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x1785<<((x1786^x1787)%x1788));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1793 = 1438LLU;
	static int64_t x1794 = INT64_MIN;
	int32_t x1795 = 52460;
	static uint32_t x1796 = 1U;

	t66 = (x1793<<((x1794^x1795)%x1796));

	if (t66 != 1438LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x1858 = 64505247226727LL;
	int16_t x1859 = -2333;
	volatile int8_t x1860 = -1;
	int32_t t67 = 0;

	t67 = (x1857<<((x1858^x1859)%x1860));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1873 = 0;
	uint16_t x1874 = 2560U;
	volatile int32_t t68 = -24;

	t68 = (x1873<<((x1874^x1875)%x1876));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x1925 = 2;
	static int32_t x1926 = INT32_MIN;
	int32_t x1928 = -1;
	volatile int32_t t69 = -3367150;

	t69 = (x1925<<((x1926^x1927)%x1928));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1957 = INT16_MAX;
	static int32_t x1958 = INT32_MIN;
	int8_t x1959 = INT8_MIN;
	static int8_t x1960 = INT8_MAX;
	volatile int32_t t70 = 4323;

	t70 = (x1957<<((x1958^x1959)%x1960));

	if (t70 != 4194176) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2005 = 34;
	int64_t x2007 = -122564LL;
	volatile uint8_t x2008 = 1U;
	static int32_t t71 = 83990634;

	t71 = (x2005<<((x2006^x2007)%x2008));

	if (t71 != 34) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2069 = INT8_MAX;
	uint8_t x2070 = 52U;
	static int16_t x2071 = INT16_MIN;
	static uint32_t x2072 = 7U;
	volatile int32_t t72 = -8112;

	t72 = (x2069<<((x2070^x2071)%x2072));

	if (t72 != 8128) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2089 = INT8_MAX;
	uint32_t x2090 = 1480344U;
	volatile int16_t x2092 = 1;

	t73 = (x2089<<((x2090^x2091)%x2092));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2106 = -1LL;
	static int64_t x2107 = INT64_MAX;
	volatile int32_t t74 = -3332656;

	t74 = (x2105<<((x2106^x2107)%x2108));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2129 = UINT32_MAX;
	int16_t x2130 = INT16_MAX;
	uint32_t t75 = 1U;

	t75 = (x2129<<((x2130^x2131)%x2132));

	if (t75 != 4294967280U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2141 = UINT64_MAX;
	static int32_t x2142 = -2943623;
	uint32_t x2143 = UINT32_MAX;
	static uint8_t x2144 = 3U;
	volatile uint64_t t76 = 1218286401521843LLU;

	t76 = (x2141<<((x2142^x2143)%x2144));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x2145 = 61U;
	int8_t x2146 = 33;
	static uint8_t x2147 = UINT8_MAX;
	int16_t x2148 = -1;
	int32_t t77 = 4;

	t77 = (x2145<<((x2146^x2147)%x2148));

	if (t77 != 61) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x2165 = 114U;
	int32_t x2166 = -1;
	volatile uint8_t x2167 = 6U;
	static volatile int8_t x2168 = -1;
	int32_t t78 = 600677724;

	t78 = (x2165<<((x2166^x2167)%x2168));

	if (t78 != 114) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2186 = INT64_MIN;
	int64_t x2187 = INT64_MIN;
	int8_t x2188 = INT8_MIN;
	volatile uint32_t t79 = 48U;

	t79 = (x2185<<((x2186^x2187)%x2188));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2213 = UINT64_MAX;
	uint32_t x2214 = 198U;
	volatile int32_t x2215 = INT32_MIN;
	volatile uint16_t x2216 = 2U;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x2213<<((x2214^x2215)%x2216));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x2221 = 12599286118449LLU;
	uint16_t x2223 = 49U;
	uint64_t t81 = 71LLU;

	t81 = (x2221<<((x2222^x2223)%x2224));

	if (t81 != 12599286118449LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x2281 = 1;
	int64_t x2283 = -1LL;
	static uint64_t x2284 = 62821159445684690LLU;
	int32_t t82 = 8030278;

	t82 = (x2281<<((x2282^x2283)%x2284));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2301 = UINT16_MAX;
	int64_t x2302 = INT64_MIN;
	uint8_t x2303 = 62U;
	int16_t x2304 = -1;
	static int32_t t83 = -314711140;

	t83 = (x2301<<((x2302^x2303)%x2304));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2306 = -1;
	static uint32_t x2307 = UINT32_MAX;
	int64_t x2308 = INT64_MIN;
	static uint32_t t84 = 2741171U;

	t84 = (x2305<<((x2306^x2307)%x2308));

	if (t84 != 2672503U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x2313 = INT8_MAX;
	static int16_t x2314 = -1;
	static volatile uint32_t x2315 = UINT32_MAX;
	static int32_t t85 = 216553017;

	t85 = (x2313<<((x2314^x2315)%x2316));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2321 = INT16_MAX;
	uint8_t x2322 = 35U;
	static int32_t x2323 = 0;

	t86 = (x2321<<((x2322^x2323)%x2324));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2345 = UINT8_MAX;
	int16_t x2346 = -1;
	int32_t x2347 = INT32_MIN;
	uint8_t x2348 = 1U;

	t87 = (x2345<<((x2346^x2347)%x2348));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2349 = 195;
	int32_t x2350 = -2;
	int16_t x2352 = -1;
	int32_t t88 = 542;

	t88 = (x2349<<((x2350^x2351)%x2352));

	if (t88 != 195) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2401 = 1;
	int64_t x2404 = -1LL;
	int32_t t89 = -1096;

	t89 = (x2401<<((x2402^x2403)%x2404));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2413 = INT8_MAX;
	int16_t x2414 = -2273;
	uint8_t x2415 = 11U;

	t90 = (x2413<<((x2414^x2415)%x2416));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2430 = -1;
	static uint64_t x2431 = UINT64_MAX;
	volatile int32_t t91 = -11031858;

	t91 = (x2429<<((x2430^x2431)%x2432));

	if (t91 != 83) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2449 = INT16_MAX;
	int64_t x2450 = INT64_MAX;
	static int8_t x2451 = INT8_MAX;
	volatile int32_t t92 = 145;

	t92 = (x2449<<((x2450^x2451)%x2452));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x2554 = INT16_MAX;
	int32_t x2555 = INT32_MAX;
	uint16_t x2556 = UINT16_MAX;
	volatile int32_t t93 = 1941968;

	t93 = (x2553<<((x2554^x2555)%x2556));

	if (t93 != 125099) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2613 = UINT8_MAX;
	int64_t x2614 = INT64_MIN;
	int16_t x2615 = INT16_MIN;
	int8_t x2616 = INT8_MIN;
	volatile int32_t t94 = 275123;

	t94 = (x2613<<((x2614^x2615)%x2616));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x2625 = 526U;
	static int8_t x2626 = -1;
	static volatile uint8_t x2628 = 10U;
	static volatile int32_t t95 = 59;

	t95 = (x2625<<((x2626^x2627)%x2628));

	if (t95 != 526) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2645 = UINT64_MAX;
	volatile int8_t x2646 = 0;
	static volatile uint8_t x2647 = 0U;
	int32_t x2648 = INT32_MIN;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x2645<<((x2646^x2647)%x2648));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2665 = UINT32_MAX;
	static uint32_t x2667 = 6U;
	static volatile uint32_t t97 = 290U;

	t97 = (x2665<<((x2666^x2667)%x2668));

	if (t97 != 4294967168U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2686 = 1276498853344LLU;
	int8_t x2687 = -12;
	volatile int32_t t98 = -4272038;

	t98 = (x2685<<((x2686^x2687)%x2688));

	if (t98 != 12) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x2702 = UINT64_MAX;
	int16_t x2703 = INT16_MIN;
	uint16_t x2704 = 14U;
	volatile uint32_t t99 = 292812630U;

	t99 = (x2701<<((x2702^x2703)%x2704));

	if (t99 != 1183180544U) { NG(); } else { ; }
	
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

