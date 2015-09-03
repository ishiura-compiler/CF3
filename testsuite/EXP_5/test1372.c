#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x69 = 28U;
static uint64_t x114 = 5569LLU;
int8_t x115 = -1;
uint64_t x116 = UINT64_MAX;
uint32_t t1 = 36U;
uint64_t x123 = 35591LLU;
int64_t x183 = INT64_MIN;
int16_t x184 = -1;
volatile uint8_t x218 = UINT8_MAX;
int16_t x219 = INT16_MIN;
volatile uint32_t x281 = 2U;
int8_t x284 = -2;
static int8_t x310 = INT8_MAX;
static int16_t x323 = INT16_MAX;
static volatile int64_t x324 = -1LL;
int32_t x340 = -17;
uint16_t x432 = 1U;
static int8_t x436 = -17;
uint16_t x449 = 2790U;
int32_t x450 = -1;
int32_t x456 = -1;
volatile int8_t x479 = -12;
volatile uint16_t x501 = 19U;
static int32_t x504 = -1;
static int32_t t19 = -220144833;
volatile uint32_t t20 = 28U;
int32_t t21 = 6;
volatile int64_t x791 = 460153907897858943LL;
int8_t x858 = INT8_MIN;
int64_t x859 = -1LL;
int8_t x871 = -1;
int8_t x872 = -18;
volatile int8_t x915 = INT8_MIN;
int16_t x931 = INT16_MIN;
static volatile int64_t t28 = -970399978623LL;
uint16_t x937 = UINT16_MAX;
volatile int32_t x939 = INT32_MIN;
int16_t x940 = -2;
volatile int32_t t29 = -38392148;
uint32_t x954 = 21750907U;
static uint8_t x971 = 5U;
uint8_t x972 = 0U;
int8_t x1006 = 1;
static uint64_t x1008 = UINT64_MAX;
uint8_t x1011 = UINT8_MAX;
uint32_t x1015 = 1036611U;
static int32_t t34 = -218;
int16_t x1033 = 589;
uint64_t x1034 = 2LLU;
volatile int32_t t35 = 12;
uint32_t x1049 = UINT32_MAX;
volatile uint32_t t36 = 448906656U;
int64_t x1100 = -1LL;
uint32_t x1104 = UINT32_MAX;
volatile uint64_t t38 = 12578358027944LLU;
static int32_t x1202 = -1018;
static uint8_t x1203 = 3U;
static uint8_t x1205 = UINT8_MAX;
int8_t x1238 = -1;
int16_t x1240 = -2;
volatile int16_t x1246 = 7353;
volatile int32_t t42 = 871257;
int32_t x1374 = INT32_MIN;
int32_t t44 = -58272056;
uint16_t x1395 = 4502U;
volatile int32_t t45 = -31690521;
static volatile int16_t x1438 = -3204;
static int8_t x1444 = 0;
volatile int16_t x1462 = 137;
int8_t x1463 = INT8_MIN;
static uint64_t x1482 = 5801897035825108LLU;
static int32_t x1483 = INT32_MIN;
int32_t t53 = -56;
int64_t t54 = 4165821LL;
volatile int32_t t56 = 12368;
uint32_t t57 = 7537U;
static volatile uint16_t x1709 = 110U;
uint8_t x1717 = 4U;
volatile int8_t x1720 = -1;
int32_t t59 = 0;
int8_t x1723 = 43;
int64_t x1724 = -1LL;
int32_t x1725 = INT32_MAX;
int8_t x1749 = 1;
volatile uint64_t x1750 = 131528910877327940LLU;
volatile int16_t x1786 = INT16_MIN;
volatile uint64_t x1801 = UINT64_MAX;
volatile int64_t x1925 = 11213LL;
int64_t t67 = 705643990423577784LL;
int64_t x1975 = 1030998953850343LL;
uint64_t x1976 = UINT64_MAX;
volatile uint64_t t68 = 2LLU;
int16_t x2016 = -1;
uint32_t t73 = 3755720U;
static volatile int32_t t74 = -360;
int16_t x2110 = INT16_MIN;
volatile uint32_t t75 = 510417621U;
static int32_t x2124 = -1;
int32_t t76 = 3611340;
int16_t x2297 = 116;
int8_t x2298 = 1;
static int32_t x2302 = INT32_MIN;
int16_t x2331 = INT16_MIN;
static uint8_t x2333 = UINT8_MAX;
int64_t x2334 = INT64_MAX;
uint32_t x2377 = 27U;
int16_t x2435 = INT16_MIN;
int8_t x2444 = -1;
static volatile uint64_t t89 = 0LLU;
uint64_t t90 = 292770252783760LLU;
int16_t x2539 = 7;
int8_t x2584 = -1;
uint8_t x2619 = UINT8_MAX;
int64_t x2649 = 238341104076LL;
static int8_t x2651 = INT8_MIN;
int8_t x2652 = -49;
int64_t t95 = 675732LL;
uint8_t x2758 = UINT8_MAX;
int16_t x2759 = INT16_MIN;
volatile uint8_t x2760 = 0U;
int32_t t96 = 92007;
uint64_t x2856 = UINT64_MAX;
int8_t x2872 = -1;
static int64_t x2879 = -1LL;
int8_t x2880 = -7;


void f0(void) {
	volatile int16_t x70 = 19;
	static uint64_t x71 = 1912223212805915306LLU;
	volatile uint64_t x72 = UINT64_MAX;
	static int32_t t0 = 16381823;

	t0 = (x69>>((x70<x71)-x72));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x113 = UINT32_MAX;

	t1 = (x113>>((x114<x115)-x116));

	if (t1 != 1073741823U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x121 = 0;
	static volatile uint64_t x122 = 177922401755268LLU;
	uint16_t x124 = 0U;
	volatile int32_t t2 = -27180394;

	t2 = (x121>>((x122<x123)-x124));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = INT32_MAX;
	volatile int32_t t3 = -25736636;

	t3 = (x181>>((x182<x183)-x184));

	if (t3 != 1073741823) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x209 = 20U;
	int32_t x210 = -58939372;
	int8_t x211 = INT8_MIN;
	static int8_t x212 = -8;
	volatile int32_t t4 = -416;

	t4 = (x209>>((x210<x211)-x212));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x217 = UINT64_MAX;
	int64_t x220 = -1LL;
	volatile uint64_t t5 = 8549342816212LLU;

	t5 = (x217>>((x218<x219)-x220));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x282 = 19LL;
	static int32_t x283 = -239;
	uint32_t t6 = 949587U;

	t6 = (x281>>((x282<x283)-x284));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x309 = 5427U;
	int16_t x311 = 5;
	uint64_t x312 = UINT64_MAX;
	volatile uint32_t t7 = 55099U;

	t7 = (x309>>((x310<x311)-x312));

	if (t7 != 2713U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x321 = 0;
	int64_t x322 = INT64_MIN;
	int32_t t8 = 245880541;

	t8 = (x321>>((x322<x323)-x324));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x333 = 7U;
	int8_t x334 = INT8_MAX;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = 1;
	volatile int32_t t9 = 9;

	t9 = (x333>>((x334<x335)-x336));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x337 = 1403257;
	uint64_t x338 = 157431137099243LLU;
	volatile int64_t x339 = INT64_MAX;
	static volatile int32_t t10 = -52;

	t10 = (x337>>((x338<x339)-x340));

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x365 = 3860U;
	int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int64_t x368 = -1LL;
	int32_t t11 = -29872269;

	t11 = (x365>>((x366<x367)-x368));

	if (t11 != 1930) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x409 = UINT8_MAX;
	volatile int8_t x410 = -17;
	volatile int8_t x411 = 5;
	int8_t x412 = 1;
	static volatile int32_t t12 = 51861;

	t12 = (x409>>((x410<x411)-x412));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x429 = 57792002LL;
	int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MAX;
	volatile int64_t t13 = -57857986807791813LL;

	t13 = (x429>>((x430<x431)-x432));

	if (t13 != 57792002LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x433 = 96U;
	uint64_t x434 = 7133796067LLU;
	static uint64_t x435 = 99949877LLU;
	volatile int32_t t14 = 140;

	t14 = (x433>>((x434<x435)-x436));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x451 = UINT8_MAX;
	volatile int8_t x452 = -1;
	int32_t t15 = 50641;

	t15 = (x449>>((x450<x451)-x452));

	if (t15 != 697) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x453 = 1302655911636LLU;
	int32_t x454 = INT32_MAX;
	static int16_t x455 = INT16_MIN;
	volatile uint64_t t16 = 2253217451LLU;

	t16 = (x453>>((x454<x455)-x456));

	if (t16 != 651327955818LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x477 = 1;
	static int32_t x478 = INT32_MIN;
	int32_t x480 = -6;
	volatile int32_t t17 = 209;

	t17 = (x477>>((x478<x479)-x480));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x502 = INT64_MIN;
	int32_t x503 = INT32_MAX;
	volatile int32_t t18 = -16651673;

	t18 = (x501>>((x502<x503)-x504));

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x541 = UINT8_MAX;
	static uint8_t x542 = 0U;
	uint64_t x543 = 142435147684LLU;
	int16_t x544 = -1;

	t19 = (x541>>((x542<x543)-x544));

	if (t19 != 63) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x565 = 20360U;
	int8_t x566 = -7;
	uint16_t x567 = 3896U;
	volatile uint32_t x568 = UINT32_MAX;

	t20 = (x565>>((x566<x567)-x568));

	if (t20 != 5090U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x757 = UINT8_MAX;
	volatile uint32_t x758 = UINT32_MAX;
	uint64_t x759 = UINT64_MAX;
	volatile uint64_t x760 = UINT64_MAX;

	t21 = (x757>>((x758<x759)-x760));

	if (t21 != 63) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x789 = 2U;
	int64_t x790 = -1LL;
	int64_t x792 = -1LL;
	volatile int32_t t22 = -58;

	t22 = (x789>>((x790<x791)-x792));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x797 = INT8_MAX;
	int32_t x798 = -1;
	uint64_t x799 = 25158405868473LLU;
	static uint32_t x800 = UINT32_MAX;
	int32_t t23 = 116911521;

	t23 = (x797>>((x798<x799)-x800));

	if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x817 = UINT8_MAX;
	int16_t x818 = -1;
	uint16_t x819 = UINT16_MAX;
	int8_t x820 = -1;
	int32_t t24 = 27870;

	t24 = (x817>>((x818<x819)-x820));

	if (t24 != 63) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x857 = 3U;
	int16_t x860 = -1;
	volatile int32_t t25 = 5405;

	t25 = (x857>>((x858<x859)-x860));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x869 = INT64_MAX;
	int16_t x870 = -1;
	static volatile int64_t t26 = -37422203554LL;

	t26 = (x869>>((x870<x871)-x872));

	if (t26 != 35184372088831LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x913 = UINT8_MAX;
	uint8_t x914 = UINT8_MAX;
	uint64_t x916 = UINT64_MAX;
	static volatile int32_t t27 = -219705482;

	t27 = (x913>>((x914<x915)-x916));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x929 = 1136LL;
	static int16_t x930 = INT16_MIN;
	int64_t x932 = -1LL;

	t28 = (x929>>((x930<x931)-x932));

	if (t28 != 568LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x938 = 0;

	t29 = (x937>>((x938<x939)-x940));

	if (t29 != 16383) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x953 = UINT8_MAX;
	volatile uint64_t x955 = UINT64_MAX;
	uint64_t x956 = UINT64_MAX;
	volatile int32_t t30 = -2262;

	t30 = (x953>>((x954<x955)-x956));

	if (t30 != 63) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x969 = 130U;
	int16_t x970 = -5298;
	volatile uint32_t t31 = 47425392U;

	t31 = (x969>>((x970<x971)-x972));

	if (t31 != 65U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1005 = UINT32_MAX;
	static int32_t x1007 = INT32_MAX;
	uint32_t t32 = 70085630U;

	t32 = (x1005>>((x1006<x1007)-x1008));

	if (t32 != 1073741823U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1009 = UINT64_MAX;
	int64_t x1010 = INT64_MIN;
	int32_t x1012 = -1;
	uint64_t t33 = 1614868407475LLU;

	t33 = (x1009>>((x1010<x1011)-x1012));

	if (t33 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1013 = INT8_MAX;
	uint64_t x1014 = 84084LLU;
	uint64_t x1016 = UINT64_MAX;

	t34 = (x1013>>((x1014<x1015)-x1016));

	if (t34 != 31) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1035 = -1;
	int8_t x1036 = 1;

	t35 = (x1033>>((x1034<x1035)-x1036));

	if (t35 != 589) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1050 = INT16_MIN;
	volatile int64_t x1051 = 546375940LL;
	int32_t x1052 = -1;

	t36 = (x1049>>((x1050<x1051)-x1052));

	if (t36 != 1073741823U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1097 = UINT16_MAX;
	static int16_t x1098 = -776;
	uint64_t x1099 = 10278841860548075LLU;
	volatile int32_t t37 = 297893599;

	t37 = (x1097>>((x1098<x1099)-x1100));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x1101 = 5447783LLU;
	uint64_t x1102 = 115310772LLU;
	uint8_t x1103 = 41U;

	t38 = (x1101>>((x1102<x1103)-x1104));

	if (t38 != 2723891LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1201 = 1379220344LL;
	static uint32_t x1204 = UINT32_MAX;
	int64_t t39 = 6LL;

	t39 = (x1201>>((x1202<x1203)-x1204));

	if (t39 != 344805086LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1206 = 3141756;
	uint64_t x1207 = 4673LLU;
	int8_t x1208 = -1;
	volatile int32_t t40 = 3753260;

	t40 = (x1205>>((x1206<x1207)-x1208));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1237 = 17673228494760901LL;
	int32_t x1239 = -743;
	volatile int64_t t41 = -123532LL;

	t41 = (x1237>>((x1238<x1239)-x1240));

	if (t41 != 4418307123690225LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1245 = INT8_MAX;
	static int64_t x1247 = INT64_MIN;
	int32_t x1248 = -1;

	t42 = (x1245>>((x1246<x1247)-x1248));

	if (t42 != 63) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x1273 = 95U;
	volatile int8_t x1274 = INT8_MIN;
	int8_t x1275 = -1;
	int32_t x1276 = -1;
	volatile int32_t t43 = 0;

	t43 = (x1273>>((x1274<x1275)-x1276));

	if (t43 != 23) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1373 = INT32_MAX;
	static volatile uint16_t x1375 = UINT16_MAX;
	volatile int8_t x1376 = -1;

	t44 = (x1373>>((x1374<x1375)-x1376));

	if (t44 != 536870911) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1393 = INT8_MAX;
	int32_t x1394 = -82;
	int8_t x1396 = -16;

	t45 = (x1393>>((x1394<x1395)-x1396));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1401 = INT16_MAX;
	static int8_t x1402 = INT8_MIN;
	int16_t x1403 = -1;
	uint64_t x1404 = UINT64_MAX;
	volatile int32_t t46 = -53;

	t46 = (x1401>>((x1402<x1403)-x1404));

	if (t46 != 8191) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1437 = 24555LLU;
	uint16_t x1439 = 5U;
	int16_t x1440 = -1;
	volatile uint64_t t47 = 249800966LLU;

	t47 = (x1437>>((x1438<x1439)-x1440));

	if (t47 != 6138LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1441 = 20299851;
	int8_t x1442 = 48;
	static uint64_t x1443 = UINT64_MAX;
	volatile int32_t t48 = 31304543;

	t48 = (x1441>>((x1442<x1443)-x1444));

	if (t48 != 10149925) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1461 = INT64_MAX;
	static int32_t x1464 = -1;
	volatile int64_t t49 = 5994LL;

	t49 = (x1461>>((x1462<x1463)-x1464));

	if (t49 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1469 = UINT64_MAX;
	uint64_t x1470 = UINT64_MAX;
	int32_t x1471 = 0;
	static uint8_t x1472 = 0U;
	uint64_t t50 = UINT64_MAX;

	t50 = (x1469>>((x1470<x1471)-x1472));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1481 = 1;
	volatile uint32_t x1484 = UINT32_MAX;
	int32_t t51 = 3207;

	t51 = (x1481>>((x1482<x1483)-x1484));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1497 = UINT64_MAX;
	volatile int32_t x1498 = INT32_MIN;
	volatile uint64_t x1499 = UINT64_MAX;
	int8_t x1500 = -1;
	uint64_t t52 = 1520007LLU;

	t52 = (x1497>>((x1498<x1499)-x1500));

	if (t52 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x1513 = INT16_MAX;
	int16_t x1514 = -405;
	static int16_t x1515 = -1;
	int32_t x1516 = -10;

	t53 = (x1513>>((x1514<x1515)-x1516));

	if (t53 != 15) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1565 = 72662744448972LL;
	uint64_t x1566 = 5646908698394950517LLU;
	static int8_t x1567 = INT8_MAX;
	uint16_t x1568 = 0U;

	t54 = (x1565>>((x1566<x1567)-x1568));

	if (t54 != 72662744448972LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1609 = 15651U;
	int8_t x1610 = 0;
	uint32_t x1611 = 2066397U;
	static int32_t x1612 = -1;
	int32_t t55 = 425843;

	t55 = (x1609>>((x1610<x1611)-x1612));

	if (t55 != 3912) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1657 = 5;
	int64_t x1658 = INT64_MAX;
	int16_t x1659 = INT16_MIN;
	int32_t x1660 = -1;

	t56 = (x1657>>((x1658<x1659)-x1660));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1705 = 152U;
	static int8_t x1706 = -1;
	static uint32_t x1707 = 2040U;
	volatile int16_t x1708 = -6;

	t57 = (x1705>>((x1706<x1707)-x1708));

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1710 = 38918768LLU;
	int32_t x1711 = -30837054;
	static int64_t x1712 = -1LL;
	volatile int32_t t58 = 3;

	t58 = (x1709>>((x1710<x1711)-x1712));

	if (t58 != 27) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1718 = -25;
	uint8_t x1719 = UINT8_MAX;

	t59 = (x1717>>((x1718<x1719)-x1720));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1721 = INT32_MAX;
	uint32_t x1722 = 8131U;
	int32_t t60 = 1;

	t60 = (x1721>>((x1722<x1723)-x1724));

	if (t60 != 1073741823) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x1726 = 20115358U;
	uint16_t x1727 = 6637U;
	int8_t x1728 = -13;
	int32_t t61 = -854;

	t61 = (x1725>>((x1726<x1727)-x1728));

	if (t61 != 262143) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1751 = UINT32_MAX;
	int16_t x1752 = -1;
	int32_t t62 = -4597820;

	t62 = (x1749>>((x1750<x1751)-x1752));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x1785 = UINT64_MAX;
	int32_t x1787 = -120238;
	int32_t x1788 = -1;
	volatile uint64_t t63 = 1397133424430394791LLU;

	t63 = (x1785>>((x1786<x1787)-x1788));

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1802 = -148466380;
	int32_t x1803 = -1;
	uint64_t x1804 = UINT64_MAX;
	uint64_t t64 = 372222042LLU;

	t64 = (x1801>>((x1802<x1803)-x1804));

	if (t64 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1861 = UINT64_MAX;
	int64_t x1862 = -1LL;
	static int8_t x1863 = 9;
	int16_t x1864 = -3;
	volatile uint64_t t65 = 196744780LLU;

	t65 = (x1861>>((x1862<x1863)-x1864));

	if (t65 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x1897 = 2U;
	int64_t x1898 = INT64_MAX;
	uint32_t x1899 = UINT32_MAX;
	static int32_t x1900 = -1;
	static int32_t t66 = 536843379;

	t66 = (x1897>>((x1898<x1899)-x1900));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1926 = 1;
	int32_t x1927 = INT32_MAX;
	volatile int32_t x1928 = 0;

	t67 = (x1925>>((x1926<x1927)-x1928));

	if (t67 != 5606LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x1973 = 77214889706LLU;
	int64_t x1974 = -1LL;

	t68 = (x1973>>((x1974<x1975)-x1976));

	if (t68 != 19303722426LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1997 = 1831449294473543LL;
	volatile int64_t x1998 = INT64_MAX;
	uint32_t x1999 = 1579174985U;
	volatile uint32_t x2000 = UINT32_MAX;
	static volatile int64_t t69 = 3787270LL;

	t69 = (x1997>>((x1998<x1999)-x2000));

	if (t69 != 915724647236771LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2013 = UINT64_MAX;
	int8_t x2014 = INT8_MAX;
	int8_t x2015 = -1;
	volatile uint64_t t70 = 120602802LLU;

	t70 = (x2013>>((x2014<x2015)-x2016));

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2021 = 120659245LL;
	int64_t x2022 = INT64_MIN;
	uint32_t x2023 = 5946155U;
	static int32_t x2024 = -7;
	static int64_t t71 = -295611729670547933LL;

	t71 = (x2021>>((x2022<x2023)-x2024));

	if (t71 != 471325LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2041 = 86150U;
	uint8_t x2042 = 29U;
	int64_t x2043 = INT64_MAX;
	volatile int16_t x2044 = -1;
	volatile uint32_t t72 = 5871U;

	t72 = (x2041>>((x2042<x2043)-x2044));

	if (t72 != 21537U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2057 = 3063U;
	int16_t x2058 = INT16_MAX;
	int16_t x2059 = INT16_MIN;
	int8_t x2060 = -13;

	t73 = (x2057>>((x2058<x2059)-x2060));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x2077 = INT8_MAX;
	uint16_t x2078 = 3U;
	static int16_t x2079 = -1;
	uint32_t x2080 = UINT32_MAX;

	t74 = (x2077>>((x2078<x2079)-x2080));

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x2109 = 77672346U;
	static uint32_t x2111 = 3620244U;
	volatile uint32_t x2112 = 0U;

	t75 = (x2109>>((x2110<x2111)-x2112));

	if (t75 != 77672346U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2121 = INT16_MAX;
	static int8_t x2122 = -8;
	uint16_t x2123 = 0U;

	t76 = (x2121>>((x2122<x2123)-x2124));

	if (t76 != 8191) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2141 = 279649414U;
	static int64_t x2142 = -1LL;
	uint64_t x2143 = UINT64_MAX;
	uint64_t x2144 = UINT64_MAX;
	uint32_t t77 = 663557285U;

	t77 = (x2141>>((x2142<x2143)-x2144));

	if (t77 != 139824707U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2249 = 378483853U;
	int16_t x2250 = INT16_MIN;
	int64_t x2251 = INT64_MAX;
	uint64_t x2252 = UINT64_MAX;
	uint32_t t78 = 160286085U;

	t78 = (x2249>>((x2250<x2251)-x2252));

	if (t78 != 94620963U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2269 = 31;
	volatile uint16_t x2270 = 17061U;
	uint8_t x2271 = 7U;
	uint64_t x2272 = UINT64_MAX;
	volatile int32_t t79 = -243376;

	t79 = (x2269>>((x2270<x2271)-x2272));

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2299 = 373529774U;
	static int32_t x2300 = -1;
	int32_t t80 = -11961;

	t80 = (x2297>>((x2298<x2299)-x2300));

	if (t80 != 29) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2301 = UINT32_MAX;
	volatile uint8_t x2303 = UINT8_MAX;
	int64_t x2304 = -1LL;
	static uint32_t t81 = 112U;

	t81 = (x2301>>((x2302<x2303)-x2304));

	if (t81 != 1073741823U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x2329 = 457840489LLU;
	int64_t x2330 = -54388088LL;
	int16_t x2332 = 1;
	volatile uint64_t t82 = 8520925054LLU;

	t82 = (x2329>>((x2330<x2331)-x2332));

	if (t82 != 457840489LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x2335 = -229;
	int32_t x2336 = -1;
	volatile int32_t t83 = -1;

	t83 = (x2333>>((x2334<x2335)-x2336));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2369 = 0U;
	uint16_t x2370 = UINT16_MAX;
	uint64_t x2371 = 24354843553LLU;
	volatile uint8_t x2372 = 1U;
	int32_t t84 = 7951;

	t84 = (x2369>>((x2370<x2371)-x2372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2378 = 0LLU;
	volatile uint8_t x2379 = 1U;
	volatile uint64_t x2380 = UINT64_MAX;
	uint32_t t85 = 1201U;

	t85 = (x2377>>((x2378<x2379)-x2380));

	if (t85 != 6U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2389 = 6;
	volatile uint16_t x2390 = 1427U;
	int64_t x2391 = INT64_MIN;
	int64_t x2392 = -1LL;
	volatile int32_t t86 = -283;

	t86 = (x2389>>((x2390<x2391)-x2392));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2405 = UINT16_MAX;
	static int16_t x2406 = -1398;
	volatile int32_t x2407 = INT32_MAX;
	int32_t x2408 = -1;
	int32_t t87 = -9085;

	t87 = (x2405>>((x2406<x2407)-x2408));

	if (t87 != 16383) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x2433 = 5U;
	uint16_t x2434 = 3U;
	int16_t x2436 = -5;
	uint32_t t88 = 1797799769U;

	t88 = (x2433>>((x2434<x2435)-x2436));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2441 = UINT64_MAX;
	static uint64_t x2442 = UINT64_MAX;
	int64_t x2443 = INT64_MIN;

	t89 = (x2441>>((x2442<x2443)-x2444));

	if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2461 = 28LLU;
	static int16_t x2462 = -4;
	static int8_t x2463 = INT8_MIN;
	uint64_t x2464 = UINT64_MAX;

	t90 = (x2461>>((x2462<x2463)-x2464));

	if (t90 != 14LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2477 = 58910812996663971LLU;
	int64_t x2478 = -1629583348LL;
	uint64_t x2479 = 20841877139777LLU;
	int8_t x2480 = -1;
	static uint64_t t91 = 33LLU;

	t91 = (x2477>>((x2478<x2479)-x2480));

	if (t91 != 29455406498331985LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2537 = 346449799LLU;
	uint32_t x2538 = 145U;
	uint8_t x2540 = 0U;
	volatile uint64_t t92 = 838971LLU;

	t92 = (x2537>>((x2538<x2539)-x2540));

	if (t92 != 346449799LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2581 = 39224276LL;
	volatile int32_t x2582 = 4;
	int64_t x2583 = -3274LL;
	static volatile int64_t t93 = 4150316040049020720LL;

	t93 = (x2581>>((x2582<x2583)-x2584));

	if (t93 != 19612138LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2617 = INT16_MAX;
	static int64_t x2618 = INT64_MIN;
	volatile uint64_t x2620 = UINT64_MAX;
	int32_t t94 = 187934;

	t94 = (x2617>>((x2618<x2619)-x2620));

	if (t94 != 8191) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2650 = INT64_MAX;

	t95 = (x2649>>((x2650<x2651)-x2652));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2757 = 8U;

	t96 = (x2757>>((x2758<x2759)-x2760));

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2853 = INT8_MAX;
	uint16_t x2854 = 3021U;
	static int8_t x2855 = -1;
	int32_t t97 = -756553775;

	t97 = (x2853>>((x2854<x2855)-x2856));

	if (t97 != 63) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2869 = UINT8_MAX;
	int32_t x2870 = -10889;
	int32_t x2871 = 9216599;
	static int32_t t98 = -108307;

	t98 = (x2869>>((x2870<x2871)-x2872));

	if (t98 != 63) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x2877 = INT16_MAX;
	int16_t x2878 = INT16_MAX;
	volatile int32_t t99 = 999697;

	t99 = (x2877>>((x2878<x2879)-x2880));

	if (t99 != 255) { NG(); } else { ; }
	
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

