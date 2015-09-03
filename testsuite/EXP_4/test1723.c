#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x21 = 38U;
int8_t x23 = INT8_MIN;
volatile int32_t x57 = INT32_MAX;
static uint64_t x85 = 755909LLU;
uint64_t x217 = 311356LLU;
static volatile int32_t x218 = -372033939;
uint8_t x241 = UINT8_MAX;
int16_t x294 = INT16_MAX;
int64_t x295 = -1LL;
int8_t x296 = 0;
static int64_t x321 = INT64_MAX;
volatile int8_t x322 = -1;
int32_t x323 = -15;
int64_t t11 = -8LL;
int64_t x328 = INT64_MIN;
uint16_t x359 = 1U;
volatile int32_t t14 = 1;
uint32_t x377 = UINT32_MAX;
uint16_t x445 = UINT16_MAX;
volatile int32_t t17 = 222705;
volatile int64_t x468 = INT64_MIN;
static int64_t t18 = INT64_MAX;
static uint32_t x509 = UINT32_MAX;
volatile uint32_t t19 = UINT32_MAX;
volatile uint16_t x521 = 31U;
int16_t x529 = 21;
int32_t t22 = 682472;
volatile int16_t x640 = INT16_MIN;
uint64_t x693 = 29455055LLU;
int8_t x694 = 36;
static volatile uint16_t x711 = 1U;
uint32_t x730 = 6257346U;
static volatile uint16_t x742 = 0U;
volatile int32_t t30 = -64631142;
volatile int32_t t34 = INT32_MAX;
static int32_t x959 = INT32_MIN;
volatile int32_t t35 = -10;
static int64_t x976 = INT64_MIN;
int8_t x1018 = -5;
int16_t x1019 = INT16_MIN;
static volatile int16_t x1061 = 0;
int32_t t38 = 101890;
int64_t t39 = INT64_MAX;
int64_t x1093 = INT64_MAX;
int64_t x1140 = INT64_MIN;
int32_t x1159 = -708;
int32_t t45 = 3133743;
int64_t x1205 = INT64_MAX;
int8_t x1207 = INT8_MIN;
int8_t x1233 = INT8_MAX;
int8_t x1261 = 11;
static volatile uint8_t x1450 = 0U;
static uint8_t x1467 = 0U;
int32_t x1514 = INT32_MIN;
static volatile uint64_t x1538 = 1098494505435LLU;
uint16_t x1636 = 0U;
int64_t x1646 = INT64_MAX;
static int64_t x1648 = INT64_MIN;
uint64_t t64 = UINT64_MAX;
volatile uint8_t x1690 = 62U;
volatile int32_t t66 = 45672;
uint32_t x1865 = UINT32_MAX;
uint8_t x1875 = 0U;
volatile uint64_t t70 = 605030930LLU;
uint16_t x1888 = 446U;
int32_t x1898 = -1;
volatile int16_t x1941 = INT16_MAX;
uint8_t x1956 = 3U;
volatile int32_t t76 = -407442311;
static uint32_t x2009 = 13888U;
int64_t x2011 = INT64_MIN;
uint64_t x2029 = 185189885LLU;
int16_t x2030 = -1;
int64_t x2046 = 0LL;
static volatile int32_t t79 = -1813;
int16_t x2060 = -1;
int32_t x2072 = INT32_MIN;
int16_t x2081 = INT16_MAX;
uint64_t x2084 = 94LLU;
volatile int32_t t84 = 1;
volatile int32_t x2178 = -13203445;
uint16_t x2253 = UINT16_MAX;
volatile uint16_t x2265 = 27866U;
volatile uint8_t x2276 = 0U;
int8_t x2305 = 0;
uint8_t x2307 = 1U;
static int32_t x2342 = INT32_MIN;
int32_t x2426 = INT32_MIN;
volatile int32_t t93 = INT32_MAX;
static uint64_t x2438 = 525842999422LLU;
static volatile uint16_t x2613 = 13719U;
int64_t x2614 = 12196617LL;
volatile int32_t t96 = 123;
uint8_t x2651 = 5U;
int32_t x2652 = INT32_MIN;


void f0(void) {
	static int16_t x22 = INT16_MAX;
	static volatile int8_t x24 = INT8_MAX;
	volatile int32_t t0 = 739373742;

	t0 = (x21>>(x22*(x23&x24)));

	if (t0 != 38) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x58 = INT32_MAX;
	uint16_t x59 = 25U;
	int16_t x60 = INT16_MIN;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x57>>(x58*(x59&x60)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x86 = INT32_MIN;
	int8_t x87 = 1;
	int16_t x88 = INT16_MIN;
	uint64_t t2 = 113LLU;

	t2 = (x85>>(x86*(x87&x88)));

	if (t2 != 755909LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x185 = 80146U;
	volatile uint8_t x186 = 1U;
	uint8_t x187 = 0U;
	uint16_t x188 = 123U;
	volatile uint32_t t3 = 1419U;

	t3 = (x185>>(x186*(x187&x188)));

	if (t3 != 80146U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x219 = INT64_MIN;
	uint8_t x220 = 7U;
	uint64_t t4 = 232089418927144LLU;

	t4 = (x217>>(x218*(x219&x220)));

	if (t4 != 311356LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x225 = UINT8_MAX;
	uint8_t x226 = 2U;
	volatile int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t5 = 12;

	t5 = (x225>>(x226*(x227&x228)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x242 = 8U;
	int8_t x243 = -1;
	static int32_t x244 = INT32_MIN;
	static volatile int32_t t6 = -744226;

	t6 = (x241>>(x242*(x243&x244)));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x253 = 181;
	uint64_t x254 = 555780743472LLU;
	static int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t7 = -13044;

	t7 = (x253>>(x254*(x255&x256)));

	if (t7 != 181) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x265 = 0U;
	uint64_t x266 = 50912957991440LLU;
	volatile uint16_t x267 = 0U;
	int64_t x268 = INT64_MIN;
	static int32_t t8 = -41182739;

	t8 = (x265>>(x266*(x267&x268)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MIN;
	static int64_t x275 = -12605830LL;
	static uint64_t x276 = UINT64_MAX;
	static int64_t t9 = INT64_MAX;

	t9 = (x273>>(x274*(x275&x276)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x293 = 3;
	int32_t t10 = 84;

	t10 = (x293>>(x294*(x295&x296)));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x324 = UINT64_MAX;

	t11 = (x321>>(x322*(x323&x324)));

	if (t11 != 281474976710655LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x325 = 27U;
	volatile int8_t x326 = INT8_MIN;
	uint32_t x327 = 1U;
	uint32_t t12 = 43861U;

	t12 = (x325>>(x326*(x327&x328)));

	if (t12 != 27U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x357 = UINT8_MAX;
	int16_t x358 = INT16_MIN;
	static int16_t x360 = 9034;
	int32_t t13 = 12095080;

	t13 = (x357>>(x358*(x359&x360)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x361 = 1;
	int64_t x362 = 91LL;
	int64_t x363 = INT64_MIN;
	int64_t x364 = 67245773702LL;

	t14 = (x361>>(x362*(x363&x364)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x369 = INT64_MAX;
	int16_t x370 = -363;
	int16_t x371 = INT16_MIN;
	volatile uint8_t x372 = 5U;
	int64_t t15 = INT64_MAX;

	t15 = (x369>>(x370*(x371&x372)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x378 = 255499LLU;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = UINT8_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = (x377>>(x378*(x379&x380)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x446 = INT32_MIN;
	int8_t x447 = 0;
	uint32_t x448 = UINT32_MAX;

	t17 = (x445>>(x446*(x447&x448)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x465 = INT64_MAX;
	int32_t x466 = 0;
	static volatile int32_t x467 = INT32_MIN;

	t18 = (x465>>(x466*(x467&x468)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x510 = -48;
	uint64_t x511 = 87LLU;
	static uint64_t x512 = 14088LLU;

	t19 = (x509>>(x510*(x511&x512)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x522 = 1;
	static int64_t x523 = -184100855LL;
	uint8_t x524 = UINT8_MAX;
	int32_t t20 = 7;

	t20 = (x521>>(x522*(x523&x524)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x530 = 8;
	int16_t x531 = 1000;
	volatile int16_t x532 = 0;
	static int32_t t21 = 5068520;

	t21 = (x529>>(x530*(x531&x532)));

	if (t21 != 21) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x545 = 16;
	uint8_t x546 = 26U;
	static int64_t x547 = INT64_MIN;
	uint8_t x548 = 1U;

	t22 = (x545>>(x546*(x547&x548)));

	if (t22 != 16) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x625 = INT64_MAX;
	static int16_t x626 = INT16_MAX;
	int64_t x627 = INT64_MIN;
	volatile uint8_t x628 = 1U;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x625>>(x626*(x627&x628)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x637 = 3;
	int16_t x638 = INT16_MAX;
	static volatile int16_t x639 = 7;
	static int32_t t24 = -6345606;

	t24 = (x637>>(x638*(x639&x640)));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x653 = 973321;
	static volatile uint8_t x654 = 15U;
	int16_t x655 = INT16_MIN;
	int16_t x656 = INT16_MAX;
	volatile int32_t t25 = -10839;

	t25 = (x653>>(x654*(x655&x656)));

	if (t25 != 973321) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x669 = 526U;
	volatile uint8_t x670 = 1U;
	volatile int64_t x671 = INT64_MAX;
	int8_t x672 = 0;
	volatile uint32_t t26 = 96540U;

	t26 = (x669>>(x670*(x671&x672)));

	if (t26 != 526U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x695 = 225U;
	static uint64_t x696 = 1809LLU;
	volatile uint64_t t27 = 1697469LLU;

	t27 = (x693>>(x694*(x695&x696)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x709 = 20797731LL;
	int32_t x710 = 58307358;
	uint64_t x712 = 3229156907155122LLU;
	int64_t t28 = -1312LL;

	t28 = (x709>>(x710*(x711&x712)));

	if (t28 != 20797731LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x729 = UINT32_MAX;
	static uint32_t x731 = UINT32_MAX;
	int64_t x732 = INT64_MIN;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x729>>(x730*(x731&x732)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x741 = UINT16_MAX;
	volatile int32_t x743 = INT32_MAX;
	int32_t x744 = INT32_MIN;

	t30 = (x741>>(x742*(x743&x744)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x761 = UINT64_MAX;
	int32_t x762 = INT32_MAX;
	int8_t x763 = -28;
	uint8_t x764 = 0U;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x761>>(x762*(x763&x764)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x805 = 3021357613076LLU;
	volatile uint32_t x806 = 351U;
	volatile int16_t x807 = INT16_MIN;
	uint8_t x808 = 0U;
	uint64_t t32 = 12728075535553LLU;

	t32 = (x805>>(x806*(x807&x808)));

	if (t32 != 3021357613076LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x809 = 15U;
	int32_t x810 = INT32_MIN;
	int32_t x811 = -1;
	uint32_t x812 = 1874746448U;
	volatile int32_t t33 = 31540;

	t33 = (x809>>(x810*(x811&x812)));

	if (t33 != 15) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x933 = INT32_MAX;
	int16_t x934 = -7;
	int8_t x935 = 0;
	int8_t x936 = -1;

	t34 = (x933>>(x934*(x935&x936)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x957 = 5U;
	static int8_t x958 = INT8_MIN;
	static int16_t x960 = 4;

	t35 = (x957>>(x958*(x959&x960)));

	if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x973 = 1;
	uint64_t x974 = 741248421LLU;
	static uint16_t x975 = 55U;
	int32_t t36 = 1;

	t36 = (x973>>(x974*(x975&x976)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1017 = 26U;
	uint32_t x1020 = 26U;
	int32_t t37 = -21050;

	t37 = (x1017>>(x1018*(x1019&x1020)));

	if (t37 != 26) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x1062 = INT64_MIN;
	uint16_t x1063 = 57U;
	int64_t x1064 = INT64_MIN;

	t38 = (x1061>>(x1062*(x1063&x1064)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1073 = INT64_MAX;
	uint64_t x1074 = 55551343820271324LLU;
	int64_t x1075 = INT64_MIN;
	uint8_t x1076 = 3U;

	t39 = (x1073>>(x1074*(x1075&x1076)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1094 = -1015819LL;
	int8_t x1095 = INT8_MAX;
	int16_t x1096 = INT16_MIN;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x1093>>(x1094*(x1095&x1096)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1097 = UINT8_MAX;
	int64_t x1098 = INT64_MAX;
	int16_t x1099 = INT16_MIN;
	uint8_t x1100 = 1U;
	int32_t t41 = 22869725;

	t41 = (x1097>>(x1098*(x1099&x1100)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1109 = INT8_MAX;
	uint8_t x1110 = UINT8_MAX;
	uint16_t x1111 = UINT16_MAX;
	volatile uint8_t x1112 = 0U;
	volatile int32_t t42 = 429976;

	t42 = (x1109>>(x1110*(x1111&x1112)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1137 = 0;
	uint64_t x1138 = 12344342LLU;
	int32_t x1139 = -1;
	volatile int32_t t43 = 8598;

	t43 = (x1137>>(x1138*(x1139&x1140)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1149 = 1;
	uint8_t x1150 = 0U;
	static volatile int32_t x1151 = 59;
	int64_t x1152 = INT64_MIN;
	volatile int32_t t44 = -25947416;

	t44 = (x1149>>(x1150*(x1151&x1152)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1157 = UINT16_MAX;
	int32_t x1158 = 220;
	static uint8_t x1160 = 0U;

	t45 = (x1157>>(x1158*(x1159&x1160)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1189 = 18;
	static int64_t x1190 = INT64_MIN;
	volatile int64_t x1191 = INT64_MIN;
	static int8_t x1192 = INT8_MAX;
	volatile int32_t t46 = 87078600;

	t46 = (x1189>>(x1190*(x1191&x1192)));

	if (t46 != 18) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1206 = 1011206140;
	static volatile uint8_t x1208 = 2U;
	int64_t t47 = INT64_MAX;

	t47 = (x1205>>(x1206*(x1207&x1208)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1234 = INT8_MIN;
	uint64_t x1235 = 100571259LLU;
	int32_t x1236 = INT32_MIN;
	int32_t t48 = -12983531;

	t48 = (x1233>>(x1234*(x1235&x1236)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1245 = 2U;
	int32_t x1246 = INT32_MAX;
	static int16_t x1247 = -130;
	int8_t x1248 = 1;
	int32_t t49 = -47696;

	t49 = (x1245>>(x1246*(x1247&x1248)));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1262 = INT64_MAX;
	uint16_t x1263 = 488U;
	uint64_t x1264 = 5LLU;
	int32_t t50 = 515042757;

	t50 = (x1261>>(x1262*(x1263&x1264)));

	if (t50 != 11) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x1269 = 2388827LLU;
	volatile int32_t x1270 = -1;
	volatile int32_t x1271 = -1;
	uint32_t x1272 = UINT32_MAX;
	uint64_t t51 = 64LLU;

	t51 = (x1269>>(x1270*(x1271&x1272)));

	if (t51 != 1194413LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1313 = UINT8_MAX;
	int16_t x1314 = 1016;
	volatile uint8_t x1315 = UINT8_MAX;
	int16_t x1316 = INT16_MIN;
	volatile int32_t t52 = 56666538;

	t52 = (x1313>>(x1314*(x1315&x1316)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1361 = INT32_MAX;
	static volatile int8_t x1362 = INT8_MAX;
	volatile int8_t x1363 = 30;
	int32_t x1364 = 0;
	volatile int32_t t53 = INT32_MAX;

	t53 = (x1361>>(x1362*(x1363&x1364)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1393 = 89U;
	int16_t x1394 = -4232;
	volatile int64_t x1395 = INT64_MIN;
	volatile int64_t x1396 = 108560224985824615LL;
	volatile int32_t t54 = -46;

	t54 = (x1393>>(x1394*(x1395&x1396)));

	if (t54 != 89) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1449 = 91U;
	int16_t x1451 = INT16_MAX;
	uint32_t x1452 = 2092393U;
	int32_t t55 = -25;

	t55 = (x1449>>(x1450*(x1451&x1452)));

	if (t55 != 91) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1465 = UINT16_MAX;
	int32_t x1466 = INT32_MAX;
	uint8_t x1468 = UINT8_MAX;
	int32_t t56 = -211038;

	t56 = (x1465>>(x1466*(x1467&x1468)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1469 = INT64_MAX;
	static volatile int16_t x1470 = -1;
	int16_t x1471 = -1;
	int64_t x1472 = -1LL;
	static int64_t t57 = -1387224071889785173LL;

	t57 = (x1469>>(x1470*(x1471&x1472)));

	if (t57 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1513 = 1777330U;
	int8_t x1515 = INT8_MAX;
	static uint64_t x1516 = 16741504LLU;
	static volatile uint32_t t58 = 1U;

	t58 = (x1513>>(x1514*(x1515&x1516)));

	if (t58 != 1777330U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1537 = UINT32_MAX;
	int32_t x1539 = INT32_MIN;
	int16_t x1540 = 1631;
	uint32_t t59 = UINT32_MAX;

	t59 = (x1537>>(x1538*(x1539&x1540)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x1549 = 52U;
	int32_t x1550 = INT32_MIN;
	volatile uint64_t x1551 = 2083500391LLU;
	int32_t x1552 = INT32_MIN;
	volatile int32_t t60 = 0;

	t60 = (x1549>>(x1550*(x1551&x1552)));

	if (t60 != 52) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1565 = 353LL;
	uint8_t x1566 = 0U;
	int32_t x1567 = INT32_MIN;
	int32_t x1568 = INT32_MIN;
	volatile int64_t t61 = 343590232293213LL;

	t61 = (x1565>>(x1566*(x1567&x1568)));

	if (t61 != 353LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1625 = INT64_MAX;
	int64_t x1626 = INT64_MAX;
	volatile uint32_t x1627 = 6U;
	int32_t x1628 = INT32_MIN;
	int64_t t62 = INT64_MAX;

	t62 = (x1625>>(x1626*(x1627&x1628)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1633 = INT32_MAX;
	int32_t x1634 = INT32_MIN;
	int64_t x1635 = -1LL;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x1633>>(x1634*(x1635&x1636)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1645 = UINT64_MAX;
	uint8_t x1647 = UINT8_MAX;

	t64 = (x1645>>(x1646*(x1647&x1648)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1689 = UINT8_MAX;
	static int32_t x1691 = INT32_MIN;
	static int64_t x1692 = 6LL;
	int32_t t65 = 229;

	t65 = (x1689>>(x1690*(x1691&x1692)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x1805 = 917456588;
	int64_t x1806 = INT64_MIN;
	int64_t x1807 = INT64_MIN;
	static volatile uint64_t x1808 = UINT64_MAX;

	t66 = (x1805>>(x1806*(x1807&x1808)));

	if (t66 != 917456588) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x1821 = UINT16_MAX;
	static volatile uint32_t x1822 = UINT32_MAX;
	volatile int16_t x1823 = INT16_MIN;
	uint8_t x1824 = 1U;
	static int32_t t67 = 757507;

	t67 = (x1821>>(x1822*(x1823&x1824)));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1837 = 108403050LLU;
	volatile uint16_t x1838 = UINT16_MAX;
	volatile int64_t x1839 = INT64_MIN;
	int16_t x1840 = INT16_MAX;
	volatile uint64_t t68 = 979251LLU;

	t68 = (x1837>>(x1838*(x1839&x1840)));

	if (t68 != 108403050LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x1866 = 412955712U;
	uint8_t x1867 = 0U;
	volatile int16_t x1868 = INT16_MAX;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x1865>>(x1866*(x1867&x1868)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1873 = 376LLU;
	static volatile int16_t x1874 = INT16_MIN;
	uint32_t x1876 = 37U;

	t70 = (x1873>>(x1874*(x1875&x1876)));

	if (t70 != 376LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1885 = INT8_MAX;
	volatile uint8_t x1886 = 86U;
	static int16_t x1887 = 1;
	int32_t t71 = 148;

	t71 = (x1885>>(x1886*(x1887&x1888)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1889 = 1U;
	static int16_t x1890 = -1;
	volatile int8_t x1891 = 4;
	volatile int16_t x1892 = INT16_MIN;
	volatile int32_t t72 = 755185137;

	t72 = (x1889>>(x1890*(x1891&x1892)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1897 = 32LLU;
	int16_t x1899 = 1;
	static uint64_t x1900 = 1581848967055876832LLU;
	uint64_t t73 = 528669134LLU;

	t73 = (x1897>>(x1898*(x1899&x1900)));

	if (t73 != 32LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x1929 = INT64_MAX;
	volatile int32_t x1930 = INT32_MIN;
	int16_t x1931 = INT16_MIN;
	int8_t x1932 = 3;
	static volatile int64_t t74 = INT64_MAX;

	t74 = (x1929>>(x1930*(x1931&x1932)));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x1942 = UINT8_MAX;
	static uint64_t x1943 = UINT64_MAX;
	int8_t x1944 = 0;
	static volatile int32_t t75 = -95;

	t75 = (x1941>>(x1942*(x1943&x1944)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x1953 = 1U;
	int16_t x1954 = INT16_MIN;
	int64_t x1955 = -18723525468676LL;

	t76 = (x1953>>(x1954*(x1955&x1956)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2010 = -510;
	int32_t x2012 = INT32_MAX;
	uint32_t t77 = 73U;

	t77 = (x2009>>(x2010*(x2011&x2012)));

	if (t77 != 13888U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2031 = INT8_MIN;
	uint16_t x2032 = 2U;
	static volatile uint64_t t78 = 2769290567085631LLU;

	t78 = (x2029>>(x2030*(x2031&x2032)));

	if (t78 != 185189885LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x2045 = 1U;
	uint16_t x2047 = UINT16_MAX;
	int16_t x2048 = 1;

	t79 = (x2045>>(x2046*(x2047&x2048)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2057 = INT32_MAX;
	uint8_t x2058 = 0U;
	int16_t x2059 = INT16_MIN;
	static int32_t t80 = INT32_MAX;

	t80 = (x2057>>(x2058*(x2059&x2060)));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2069 = INT16_MAX;
	volatile int32_t x2070 = -642;
	static int16_t x2071 = INT16_MAX;
	int32_t t81 = 731;

	t81 = (x2069>>(x2070*(x2071&x2072)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x2082 = INT16_MAX;
	int8_t x2083 = INT8_MIN;
	int32_t t82 = -15671;

	t82 = (x2081>>(x2082*(x2083&x2084)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2093 = UINT8_MAX;
	int16_t x2094 = INT16_MIN;
	uint8_t x2095 = 6U;
	int64_t x2096 = 3813904278815539928LL;
	int32_t t83 = -573977870;

	t83 = (x2093>>(x2094*(x2095&x2096)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x2125 = 78U;
	int16_t x2126 = 0;
	static volatile int64_t x2127 = -7030LL;
	int64_t x2128 = INT64_MIN;

	t84 = (x2125>>(x2126*(x2127&x2128)));

	if (t84 != 78) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x2177 = 1704104377835LLU;
	int16_t x2179 = INT16_MAX;
	int32_t x2180 = INT32_MIN;
	uint64_t t85 = 1885205677LLU;

	t85 = (x2177>>(x2178*(x2179&x2180)));

	if (t85 != 1704104377835LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2254 = 22;
	int8_t x2255 = 4;
	static int64_t x2256 = INT64_MIN;
	static int32_t t86 = 26;

	t86 = (x2253>>(x2254*(x2255&x2256)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2266 = -4081567;
	int16_t x2267 = INT16_MIN;
	uint64_t x2268 = 762LLU;
	static volatile int32_t t87 = -9;

	t87 = (x2265>>(x2266*(x2267&x2268)));

	if (t87 != 27866) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x2273 = INT32_MAX;
	uint16_t x2274 = 2U;
	int16_t x2275 = INT16_MIN;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x2273>>(x2274*(x2275&x2276)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2297 = UINT64_MAX;
	int16_t x2298 = -795;
	int16_t x2299 = 15;
	int64_t x2300 = INT64_MIN;
	static uint64_t t89 = UINT64_MAX;

	t89 = (x2297>>(x2298*(x2299&x2300)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2306 = 18U;
	uint16_t x2308 = UINT16_MAX;
	volatile int32_t t90 = 691;

	t90 = (x2305>>(x2306*(x2307&x2308)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2333 = 11;
	uint32_t x2334 = UINT32_MAX;
	uint16_t x2335 = 15946U;
	volatile int8_t x2336 = 5;
	int32_t t91 = 254;

	t91 = (x2333>>(x2334*(x2335&x2336)));

	if (t91 != 11) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2341 = UINT8_MAX;
	int16_t x2343 = INT16_MIN;
	volatile uint32_t x2344 = 24U;
	int32_t t92 = -387676;

	t92 = (x2341>>(x2342*(x2343&x2344)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2425 = INT32_MAX;
	volatile int8_t x2427 = 8;
	uint64_t x2428 = 122426629474567LLU;

	t93 = (x2425>>(x2426*(x2427&x2428)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2437 = 12532489108754LLU;
	static int64_t x2439 = -757LL;
	static int16_t x2440 = 0;
	volatile uint64_t t94 = 3325LLU;

	t94 = (x2437>>(x2438*(x2439&x2440)));

	if (t94 != 12532489108754LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2601 = UINT32_MAX;
	int8_t x2602 = -23;
	volatile int16_t x2603 = 15;
	volatile int64_t x2604 = INT64_MIN;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x2601>>(x2602*(x2603&x2604)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2615 = 1726;
	int64_t x2616 = INT64_MIN;

	t96 = (x2613>>(x2614*(x2615&x2616)));

	if (t96 != 13719) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2617 = 140096609LL;
	uint32_t x2618 = UINT32_MAX;
	volatile int32_t x2619 = INT32_MAX;
	static int64_t x2620 = INT64_MIN;
	volatile int64_t t97 = -6721920LL;

	t97 = (x2617>>(x2618*(x2619&x2620)));

	if (t97 != 140096609LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2637 = 1U;
	int8_t x2638 = -1;
	uint8_t x2639 = 33U;
	int16_t x2640 = INT16_MIN;
	volatile int32_t t98 = -4878408;

	t98 = (x2637>>(x2638*(x2639&x2640)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2649 = UINT8_MAX;
	static uint8_t x2650 = UINT8_MAX;
	int32_t t99 = 11;

	t99 = (x2649>>(x2650*(x2651&x2652)));

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

