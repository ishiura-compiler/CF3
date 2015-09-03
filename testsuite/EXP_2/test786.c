#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x63 = INT32_MIN;
static uint32_t x64 = 0U;
uint8_t x95 = 26U;
volatile int16_t x130 = INT16_MIN;
static int32_t x178 = INT32_MAX;
static int16_t x218 = -41;
int8_t x219 = -1;
int8_t x251 = 27;
static int32_t x291 = 330;
volatile int32_t t15 = -14;
uint16_t x423 = 31U;
int64_t x434 = INT64_MIN;
int64_t x435 = INT64_MIN;
int8_t x459 = INT8_MAX;
static volatile int8_t x471 = -47;
int8_t x517 = INT8_MAX;
int32_t t25 = -10;
uint16_t x662 = 35U;
int32_t x676 = 1;
uint8_t x681 = 0U;
volatile int32_t t30 = 3565;
int8_t x907 = 17;
int32_t t32 = -28657295;
int64_t x985 = 1LL;
static int32_t t34 = 261202571;
uint8_t x1028 = 11U;
volatile uint16_t x1083 = 1738U;
int32_t t38 = -214407782;
int8_t x1097 = 2;
int8_t x1098 = INT8_MIN;
int32_t t39 = 4918;
uint8_t x1132 = 22U;
uint32_t x1149 = 132U;
volatile uint8_t x1150 = 0U;
int32_t x1151 = INT32_MIN;
static int8_t x1153 = 1;
volatile int32_t t43 = 1;
volatile int8_t x1235 = -1;
uint16_t x1259 = UINT16_MAX;
volatile int32_t t46 = -896;
int32_t t47 = 0;
int16_t x1392 = 1;
uint16_t x1398 = UINT16_MAX;
volatile int32_t t50 = 194695022;
int16_t x1450 = -1;
uint32_t x1452 = 14U;
int32_t x1522 = INT32_MIN;
int64_t x1574 = -1LL;
static volatile int32_t x1600 = 5;
static uint32_t x1631 = 1869023U;
uint8_t x1632 = 1U;
uint8_t x1696 = 21U;
static int64_t x1723 = -1LL;
int32_t x1773 = -1;
int64_t x1835 = 242022590778924LL;
volatile uint32_t x1884 = 11U;
static int32_t t62 = 0;
volatile int32_t x1931 = INT32_MIN;
static int16_t x1967 = 1;
int16_t x2095 = -1;
uint32_t x2141 = 585U;
int32_t x2174 = -1;
uint8_t x2254 = 24U;
uint32_t x2255 = 975940665U;
volatile int32_t t68 = 13569367;
uint64_t x2301 = 50566091234LLU;
volatile int32_t x2302 = -1;
volatile uint32_t x2303 = UINT32_MAX;
volatile int32_t x2306 = INT32_MAX;
uint32_t x2340 = 26U;
int32_t t72 = -119;
volatile int64_t x2353 = INT64_MIN;
static uint16_t x2355 = 23460U;
static volatile uint16_t x2490 = 484U;
int64_t x2514 = -38212402678LL;
volatile uint8_t x2562 = 1U;
volatile int32_t x2563 = INT32_MAX;
uint8_t x2676 = 1U;
volatile uint32_t x2690 = 382463321U;
static uint8_t x2728 = 15U;
int32_t x2750 = 204;
int32_t x2848 = 1;
volatile int32_t t86 = -80136881;
int16_t x2921 = INT16_MIN;
int32_t x2924 = 0;
volatile int32_t t89 = 476578;
int32_t x3011 = 44;
uint16_t x3012 = 19U;
static volatile int32_t t90 = 29;
volatile uint16_t x3057 = UINT16_MAX;
int16_t x3122 = -1;
uint16_t x3259 = 428U;
int8_t x3277 = INT8_MAX;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	volatile int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = 4U;
	static volatile int32_t t0 = 5;

	t0 = ((x1<(x2%x3))<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x61 = UINT64_MAX;
	volatile int64_t x62 = 24814555840LL;
	static int32_t t1 = -7550826;

	t1 = ((x61<(x62%x63))<<x64);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x73 = -1;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 0LLU;
	int32_t t2 = -55094;

	t2 = ((x73<(x74%x75))<<x76);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x89 = UINT64_MAX;
	static uint64_t x90 = 673LLU;
	static int64_t x91 = INT64_MAX;
	volatile int16_t x92 = 0;
	int32_t t3 = -1346589;

	t3 = ((x89<(x90%x91))<<x92);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x93 = 658;
	int16_t x94 = -1;
	uint8_t x96 = 1U;
	static volatile int32_t t4 = -55412993;

	t4 = ((x93<(x94%x95))<<x96);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x129 = 43031U;
	static volatile int64_t x131 = -1LL;
	int8_t x132 = 0;
	static int32_t t5 = -13;

	t5 = ((x129<(x130%x131))<<x132);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x157 = INT8_MAX;
	volatile int64_t x158 = INT64_MIN;
	uint8_t x159 = 35U;
	int8_t x160 = 8;
	volatile int32_t t6 = -226214012;

	t6 = ((x157<(x158%x159))<<x160);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x173 = UINT32_MAX;
	int64_t x174 = 9225790087943LL;
	int32_t x175 = INT32_MIN;
	uint8_t x176 = 1U;
	int32_t t7 = 738523276;

	t7 = ((x173<(x174%x175))<<x176);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x177 = INT16_MIN;
	uint64_t x179 = 43127384769865137LLU;
	static volatile int16_t x180 = 1;
	int32_t t8 = 2763;

	t8 = ((x177<(x178%x179))<<x180);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x217 = 7U;
	int8_t x220 = 1;
	static volatile int32_t t9 = -156;

	t9 = ((x217<(x218%x219))<<x220);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x249 = 16U;
	static int8_t x250 = INT8_MAX;
	uint8_t x252 = 26U;
	volatile int32_t t10 = 1496654;

	t10 = ((x249<(x250%x251))<<x252);

	if (t10 != 67108864) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x253 = -481371277;
	uint32_t x254 = 10554U;
	uint32_t x255 = 53532U;
	uint32_t x256 = 1U;
	int32_t t11 = -14703521;

	t11 = ((x253<(x254%x255))<<x256);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x265 = INT32_MAX;
	uint16_t x266 = 1U;
	uint16_t x267 = 100U;
	uint32_t x268 = 4U;
	static volatile int32_t t12 = -54370;

	t12 = ((x265<(x266%x267))<<x268);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x289 = INT16_MAX;
	int32_t x290 = -45189938;
	uint16_t x292 = 3U;
	volatile int32_t t13 = 994;

	t13 = ((x289<(x290%x291))<<x292);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MAX;
	int64_t x303 = INT64_MIN;
	volatile uint16_t x304 = 1U;
	int32_t t14 = -56176830;

	t14 = ((x301<(x302%x303))<<x304);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x389 = INT8_MIN;
	static volatile uint32_t x390 = 1U;
	int8_t x391 = INT8_MIN;
	int8_t x392 = 1;

	t15 = ((x389<(x390%x391))<<x392);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x394 = -1;
	int32_t x395 = 255;
	int16_t x396 = 1;
	int32_t t16 = 20167170;

	t16 = ((x393<(x394%x395))<<x396);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x421 = 336LL;
	int16_t x422 = INT16_MAX;
	uint16_t x424 = 2U;
	static volatile int32_t t17 = -211;

	t17 = ((x421<(x422%x423))<<x424);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x425 = INT64_MIN;
	static int32_t x426 = -1;
	int16_t x427 = -65;
	int16_t x428 = 30;
	volatile int32_t t18 = -269122323;

	t18 = ((x425<(x426%x427))<<x428);

	if (t18 != 1073741824) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x433 = -1LL;
	static int8_t x436 = 0;
	int32_t t19 = 467087;

	t19 = ((x433<(x434%x435))<<x436);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x449 = -10;
	volatile int64_t x450 = -9512817LL;
	static int8_t x451 = -33;
	static volatile int8_t x452 = 7;
	int32_t t20 = 1009;

	t20 = ((x449<(x450%x451))<<x452);

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x457 = 60965U;
	int8_t x458 = INT8_MIN;
	static volatile int8_t x460 = 1;
	volatile int32_t t21 = 5096196;

	t21 = ((x457<(x458%x459))<<x460);

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x469 = 119578745U;
	uint16_t x470 = 5U;
	uint8_t x472 = 1U;
	volatile int32_t t22 = -204;

	t22 = ((x469<(x470%x471))<<x472);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x518 = UINT64_MAX;
	static int64_t x519 = 64262049LL;
	uint8_t x520 = 1U;
	int32_t t23 = -1;

	t23 = ((x517<(x518%x519))<<x520);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x553 = INT32_MIN;
	uint32_t x554 = 0U;
	int64_t x555 = INT64_MIN;
	volatile int8_t x556 = 21;
	volatile int32_t t24 = 48;

	t24 = ((x553<(x554%x555))<<x556);

	if (t24 != 2097152) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x577 = -560201749LL;
	static int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MAX;
	uint8_t x580 = 11U;

	t25 = ((x577<(x578%x579))<<x580);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x661 = INT16_MIN;
	int32_t x663 = INT32_MIN;
	int8_t x664 = 18;
	static volatile int32_t t26 = -78;

	t26 = ((x661<(x662%x663))<<x664);

	if (t26 != 262144) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x673 = -1;
	int32_t x674 = INT32_MAX;
	uint32_t x675 = 5959U;
	int32_t t27 = 191097;

	t27 = ((x673<(x674%x675))<<x676);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x682 = UINT64_MAX;
	uint32_t x683 = UINT32_MAX;
	uint8_t x684 = 24U;
	int32_t t28 = -112416478;

	t28 = ((x681<(x682%x683))<<x684);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x761 = INT8_MIN;
	int32_t x762 = -1;
	int32_t x763 = INT32_MIN;
	static uint16_t x764 = 4U;
	volatile int32_t t29 = 658865577;

	t29 = ((x761<(x762%x763))<<x764);

	if (t29 != 16) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x789 = -8395159218691487LL;
	uint16_t x790 = 3U;
	int32_t x791 = INT32_MIN;
	static uint16_t x792 = 0U;

	t30 = ((x789<(x790%x791))<<x792);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x845 = 0;
	int8_t x846 = 5;
	int16_t x847 = INT16_MIN;
	uint64_t x848 = 16LLU;
	int32_t t31 = 14268;

	t31 = ((x845<(x846%x847))<<x848);

	if (t31 != 65536) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x905 = INT64_MIN;
	int64_t x906 = INT64_MIN;
	static uint8_t x908 = 0U;

	t32 = ((x905<(x906%x907))<<x908);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x945 = 9U;
	volatile int8_t x946 = -1;
	uint64_t x947 = UINT64_MAX;
	uint8_t x948 = 0U;
	static volatile int32_t t33 = 827820;

	t33 = ((x945<(x946%x947))<<x948);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x986 = 20467901911061699LL;
	static int8_t x987 = INT8_MAX;
	volatile uint8_t x988 = 15U;

	t34 = ((x985<(x986%x987))<<x988);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x1025 = INT64_MIN;
	uint8_t x1026 = UINT8_MAX;
	int64_t x1027 = -1LL;
	int32_t t35 = 29;

	t35 = ((x1025<(x1026%x1027))<<x1028);

	if (t35 != 2048) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1037 = INT16_MIN;
	volatile uint32_t x1038 = UINT32_MAX;
	uint64_t x1039 = UINT64_MAX;
	uint8_t x1040 = 15U;
	int32_t t36 = 131807108;

	t36 = ((x1037<(x1038%x1039))<<x1040);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1069 = INT64_MAX;
	int32_t x1070 = -1;
	uint64_t x1071 = 1718178298994LLU;
	static uint8_t x1072 = 0U;
	int32_t t37 = 9983;

	t37 = ((x1069<(x1070%x1071))<<x1072);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1081 = INT8_MAX;
	int64_t x1082 = INT64_MIN;
	uint8_t x1084 = 0U;

	t38 = ((x1081<(x1082%x1083))<<x1084);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1099 = INT64_MIN;
	uint8_t x1100 = 4U;

	t39 = ((x1097<(x1098%x1099))<<x1100);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1109 = 13LLU;
	static uint32_t x1110 = 5567666U;
	int16_t x1111 = INT16_MIN;
	uint8_t x1112 = 13U;
	volatile int32_t t40 = 0;

	t40 = ((x1109<(x1110%x1111))<<x1112);

	if (t40 != 8192) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1129 = 1U;
	int64_t x1130 = INT64_MIN;
	uint8_t x1131 = UINT8_MAX;
	int32_t t41 = 474714272;

	t41 = ((x1129<(x1130%x1131))<<x1132);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x1152 = 2U;
	volatile int32_t t42 = 1;

	t42 = ((x1149<(x1150%x1151))<<x1152);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1154 = INT8_MIN;
	int8_t x1155 = INT8_MAX;
	int8_t x1156 = 1;

	t43 = ((x1153<(x1154%x1155))<<x1156);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1233 = INT32_MIN;
	uint8_t x1234 = UINT8_MAX;
	static uint8_t x1236 = 0U;
	static int32_t t44 = -1;

	t44 = ((x1233<(x1234%x1235))<<x1236);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1257 = UINT16_MAX;
	uint64_t x1258 = UINT64_MAX;
	uint16_t x1260 = 6U;
	volatile int32_t t45 = -401425551;

	t45 = ((x1257<(x1258%x1259))<<x1260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1361 = INT16_MIN;
	int16_t x1362 = INT16_MAX;
	static uint8_t x1363 = UINT8_MAX;
	uint16_t x1364 = 1U;

	t46 = ((x1361<(x1362%x1363))<<x1364);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1377 = 3;
	int8_t x1378 = -1;
	int8_t x1379 = INT8_MAX;
	static uint32_t x1380 = 1U;

	t47 = ((x1377<(x1378%x1379))<<x1380);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1389 = UINT32_MAX;
	static int16_t x1390 = INT16_MAX;
	int32_t x1391 = INT32_MIN;
	int32_t t48 = 0;

	t48 = ((x1389<(x1390%x1391))<<x1392);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1397 = UINT32_MAX;
	static int16_t x1399 = -5;
	uint8_t x1400 = 17U;
	int32_t t49 = -33902;

	t49 = ((x1397<(x1398%x1399))<<x1400);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x1405 = -1;
	int32_t x1406 = INT32_MIN;
	uint32_t x1407 = UINT32_MAX;
	static int64_t x1408 = 0LL;

	t50 = ((x1405<(x1406%x1407))<<x1408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x1449 = 3014LLU;
	static volatile int16_t x1451 = INT16_MIN;
	volatile int32_t t51 = 11;

	t51 = ((x1449<(x1450%x1451))<<x1452);

	if (t51 != 16384) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1481 = INT32_MIN;
	int32_t x1482 = INT32_MIN;
	static volatile int32_t x1483 = INT32_MIN;
	static int16_t x1484 = 0;
	volatile int32_t t52 = 661380;

	t52 = ((x1481<(x1482%x1483))<<x1484);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1489 = -1LL;
	int8_t x1490 = INT8_MIN;
	int64_t x1491 = INT64_MIN;
	int8_t x1492 = 10;
	int32_t t53 = 197131413;

	t53 = ((x1489<(x1490%x1491))<<x1492);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x1521 = INT64_MAX;
	uint16_t x1523 = 1U;
	int64_t x1524 = 15LL;
	volatile int32_t t54 = -1;

	t54 = ((x1521<(x1522%x1523))<<x1524);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1573 = -1377LL;
	static uint32_t x1575 = 1000617U;
	uint8_t x1576 = 10U;
	int32_t t55 = -7;

	t55 = ((x1573<(x1574%x1575))<<x1576);

	if (t55 != 1024) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1597 = UINT8_MAX;
	volatile int16_t x1598 = INT16_MAX;
	uint64_t x1599 = 95781LLU;
	static int32_t t56 = -7;

	t56 = ((x1597<(x1598%x1599))<<x1600);

	if (t56 != 32) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x1629 = 6U;
	int32_t x1630 = -3742;
	static volatile int32_t t57 = 14;

	t57 = ((x1629<(x1630%x1631))<<x1632);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x1693 = 5;
	int64_t x1694 = 20133155701540258LL;
	int8_t x1695 = INT8_MAX;
	volatile int32_t t58 = 1224695;

	t58 = ((x1693<(x1694%x1695))<<x1696);

	if (t58 != 2097152) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1721 = -1585585458172118031LL;
	static int64_t x1722 = 168LL;
	uint8_t x1724 = 29U;
	volatile int32_t t59 = -350922;

	t59 = ((x1721<(x1722%x1723))<<x1724);

	if (t59 != 536870912) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x1774 = -1;
	int64_t x1775 = -2023320394695795719LL;
	int16_t x1776 = 0;
	int32_t t60 = 9;

	t60 = ((x1773<(x1774%x1775))<<x1776);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x1833 = INT8_MIN;
	volatile int64_t x1834 = INT64_MIN;
	uint8_t x1836 = 3U;
	int32_t t61 = 49;

	t61 = ((x1833<(x1834%x1835))<<x1836);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x1881 = -18;
	volatile int8_t x1882 = -1;
	volatile int8_t x1883 = 1;

	t62 = ((x1881<(x1882%x1883))<<x1884);

	if (t62 != 2048) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1929 = -1;
	int8_t x1930 = INT8_MIN;
	uint32_t x1932 = 1U;
	volatile int32_t t63 = -9091580;

	t63 = ((x1929<(x1930%x1931))<<x1932);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1965 = INT32_MIN;
	int32_t x1966 = INT32_MIN;
	uint32_t x1968 = 0U;
	volatile int32_t t64 = 2;

	t64 = ((x1965<(x1966%x1967))<<x1968);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2093 = INT64_MIN;
	uint16_t x2094 = 161U;
	int64_t x2096 = 8LL;
	volatile int32_t t65 = -3442;

	t65 = ((x2093<(x2094%x2095))<<x2096);

	if (t65 != 256) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2142 = -197687473266231LL;
	int16_t x2143 = 1;
	uint16_t x2144 = 29U;
	volatile int32_t t66 = 253257253;

	t66 = ((x2141<(x2142%x2143))<<x2144);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x2173 = -658272369737432051LL;
	static int8_t x2175 = INT8_MIN;
	uint8_t x2176 = 6U;
	static int32_t t67 = -146735979;

	t67 = ((x2173<(x2174%x2175))<<x2176);

	if (t67 != 64) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2253 = 8;
	int8_t x2256 = 21;

	t68 = ((x2253<(x2254%x2255))<<x2256);

	if (t68 != 2097152) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2289 = -1;
	volatile int64_t x2290 = -1LL;
	int64_t x2291 = -1LL;
	volatile uint16_t x2292 = 12U;
	volatile int32_t t69 = -174783896;

	t69 = ((x2289<(x2290%x2291))<<x2292);

	if (t69 != 4096) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2304 = 2;
	static volatile int32_t t70 = -3459;

	t70 = ((x2301<(x2302%x2303))<<x2304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x2305 = INT64_MIN;
	int8_t x2307 = INT8_MIN;
	static uint8_t x2308 = 0U;
	static volatile int32_t t71 = 248;

	t71 = ((x2305<(x2306%x2307))<<x2308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2337 = 10U;
	int16_t x2338 = INT16_MIN;
	int64_t x2339 = INT64_MAX;

	t72 = ((x2337<(x2338%x2339))<<x2340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2354 = INT16_MIN;
	int8_t x2356 = 8;
	int32_t t73 = 1;

	t73 = ((x2353<(x2354%x2355))<<x2356);

	if (t73 != 256) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x2409 = -1;
	int16_t x2410 = -1;
	uint64_t x2411 = 18079037108LLU;
	static int8_t x2412 = 1;
	volatile int32_t t74 = -2;

	t74 = ((x2409<(x2410%x2411))<<x2412);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2421 = 293538887U;
	uint32_t x2422 = 400724U;
	int64_t x2423 = INT64_MIN;
	int16_t x2424 = 0;
	static int32_t t75 = 0;

	t75 = ((x2421<(x2422%x2423))<<x2424);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2489 = 40U;
	static volatile int16_t x2491 = -150;
	int8_t x2492 = 9;
	volatile int32_t t76 = 456;

	t76 = ((x2489<(x2490%x2491))<<x2492);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x2513 = -14;
	int16_t x2515 = INT16_MIN;
	uint16_t x2516 = 6U;
	static int32_t t77 = -842413;

	t77 = ((x2513<(x2514%x2515))<<x2516);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2561 = UINT16_MAX;
	volatile uint8_t x2564 = 4U;
	volatile int32_t t78 = 51294291;

	t78 = ((x2561<(x2562%x2563))<<x2564);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x2665 = INT32_MAX;
	int64_t x2666 = INT64_MIN;
	static int64_t x2667 = INT64_MIN;
	volatile int8_t x2668 = 7;
	volatile int32_t t79 = -247833934;

	t79 = ((x2665<(x2666%x2667))<<x2668);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x2673 = 3;
	uint64_t x2674 = 15907905275072LLU;
	static volatile uint32_t x2675 = 72234798U;
	static volatile int32_t t80 = 200895;

	t80 = ((x2673<(x2674%x2675))<<x2676);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x2689 = 9095074U;
	static uint16_t x2691 = UINT16_MAX;
	uint64_t x2692 = 1LLU;
	volatile int32_t t81 = 938005;

	t81 = ((x2689<(x2690%x2691))<<x2692);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x2701 = UINT64_MAX;
	static volatile int64_t x2702 = -1LL;
	static int64_t x2703 = -1LL;
	int16_t x2704 = 0;
	volatile int32_t t82 = -12283;

	t82 = ((x2701<(x2702%x2703))<<x2704);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x2725 = INT64_MIN;
	uint16_t x2726 = 5924U;
	int8_t x2727 = INT8_MIN;
	volatile int32_t t83 = -41403;

	t83 = ((x2725<(x2726%x2727))<<x2728);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2749 = -1;
	uint32_t x2751 = UINT32_MAX;
	static uint8_t x2752 = 0U;
	int32_t t84 = 0;

	t84 = ((x2749<(x2750%x2751))<<x2752);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x2769 = -1;
	static int64_t x2770 = 81412040LL;
	int16_t x2771 = -6;
	int64_t x2772 = 1LL;
	int32_t t85 = 31825801;

	t85 = ((x2769<(x2770%x2771))<<x2772);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2845 = 546U;
	static int16_t x2846 = INT16_MIN;
	static int16_t x2847 = INT16_MAX;

	t86 = ((x2845<(x2846%x2847))<<x2848);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2865 = -96;
	static int8_t x2866 = INT8_MIN;
	int32_t x2867 = -1;
	volatile uint32_t x2868 = 14U;
	int32_t t87 = 75971;

	t87 = ((x2865<(x2866%x2867))<<x2868);

	if (t87 != 16384) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2922 = 7996LLU;
	int64_t x2923 = -1272138059LL;
	int32_t t88 = 1092077;

	t88 = ((x2921<(x2922%x2923))<<x2924);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2985 = 2641;
	int64_t x2986 = 293692006LL;
	uint32_t x2987 = 13U;
	int16_t x2988 = 1;

	t89 = ((x2985<(x2986%x2987))<<x2988);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3009 = -1;
	int8_t x3010 = -62;

	t90 = ((x3009<(x3010%x3011))<<x3012);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x3029 = UINT32_MAX;
	volatile int64_t x3030 = INT64_MIN;
	int16_t x3031 = -6;
	uint8_t x3032 = 1U;
	volatile int32_t t91 = -33;

	t91 = ((x3029<(x3030%x3031))<<x3032);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3058 = -1LL;
	int64_t x3059 = INT64_MIN;
	uint16_t x3060 = 5U;
	volatile int32_t t92 = 297;

	t92 = ((x3057<(x3058%x3059))<<x3060);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3121 = 4U;
	uint64_t x3123 = 16137942242790674LLU;
	uint16_t x3124 = 10U;
	volatile int32_t t93 = 4653;

	t93 = ((x3121<(x3122%x3123))<<x3124);

	if (t93 != 1024) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3125 = INT64_MIN;
	static volatile int32_t x3126 = -41757846;
	int32_t x3127 = -27431;
	uint8_t x3128 = 1U;
	int32_t t94 = -47185341;

	t94 = ((x3125<(x3126%x3127))<<x3128);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3153 = -1;
	int8_t x3154 = INT8_MIN;
	int16_t x3155 = INT16_MIN;
	static uint32_t x3156 = 28U;
	static int32_t t95 = 4;

	t95 = ((x3153<(x3154%x3155))<<x3156);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3257 = 5814LL;
	int8_t x3258 = INT8_MIN;
	uint8_t x3260 = 15U;
	volatile int32_t t96 = 2;

	t96 = ((x3257<(x3258%x3259))<<x3260);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3278 = INT8_MAX;
	int8_t x3279 = -1;
	uint16_t x3280 = 3U;
	static volatile int32_t t97 = 1474;

	t97 = ((x3277<(x3278%x3279))<<x3280);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3385 = -1;
	static int64_t x3386 = INT64_MIN;
	uint32_t x3387 = UINT32_MAX;
	int8_t x3388 = 27;
	static volatile int32_t t98 = -2082;

	t98 = ((x3385<(x3386%x3387))<<x3388);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3409 = INT32_MIN;
	uint32_t x3410 = UINT32_MAX;
	static int16_t x3411 = 356;
	static uint16_t x3412 = 8U;
	static int32_t t99 = 24515489;

	t99 = ((x3409<(x3410%x3411))<<x3412);

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

