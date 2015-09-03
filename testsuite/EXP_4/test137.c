#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x31 = UINT64_MAX;
static int16_t x72 = -1;
int16_t x106 = 6;
volatile int32_t t3 = -1180;
int8_t x143 = 0;
uint32_t x153 = 219710369U;
int32_t x198 = 1;
volatile int32_t t6 = INT32_MAX;
int32_t t8 = -31116687;
static int16_t x267 = -1;
uint32_t x339 = 451U;
volatile uint32_t t13 = 24299U;
int32_t t14 = -96421023;
uint16_t x481 = 25U;
static uint16_t x482 = UINT16_MAX;
int32_t t16 = -256628589;
volatile int32_t x492 = INT32_MIN;
volatile uint64_t t17 = 127442851427317LLU;
int16_t x510 = -3;
static volatile int32_t t18 = -127389;
uint16_t x545 = 14869U;
uint32_t x592 = UINT32_MAX;
volatile uint32_t x597 = UINT32_MAX;
uint64_t x598 = UINT64_MAX;
volatile int16_t x615 = INT16_MIN;
uint8_t x622 = 0U;
int64_t x623 = -406777486015LL;
uint32_t t24 = UINT32_MAX;
int64_t x686 = 203LL;
static uint8_t x687 = 10U;
volatile uint64_t x693 = 4692765LLU;
int64_t x694 = INT64_MIN;
int64_t x723 = -1LL;
int32_t t27 = 1;
int16_t x801 = INT16_MAX;
uint64_t x803 = UINT64_MAX;
static int16_t x888 = INT16_MIN;
volatile int32_t t33 = -2851;
int32_t t35 = -2;
uint64_t x981 = 1394112964213862LLU;
uint8_t x984 = 1U;
volatile uint64_t t37 = 587199082519LLU;
int64_t x993 = 12LL;
int16_t x1061 = 0;
static int64_t x1170 = INT64_MIN;
int16_t x1172 = 4302;
uint64_t x1202 = 25LLU;
static int32_t t45 = 3513779;
uint16_t x1214 = UINT16_MAX;
static int8_t x1215 = -1;
volatile int32_t x1245 = 3;
int8_t x1247 = 1;
static int16_t x1319 = INT16_MIN;
uint8_t x1327 = 2U;
uint32_t x1343 = 9945U;
static int16_t x1414 = INT16_MIN;
uint32_t x1415 = 25215U;
int16_t x1437 = INT16_MAX;
uint64_t x1444 = UINT64_MAX;
int32_t x1532 = -1;
static int64_t x1533 = INT64_MAX;
uint8_t x1557 = 19U;
int64_t x1560 = 7686LL;
int32_t t61 = 425;
uint16_t x1660 = 1U;
int64_t x1702 = INT64_MIN;
int64_t t65 = 8890935244069264LL;
uint8_t x1782 = 2U;
static int32_t x1783 = INT32_MIN;
int8_t x1824 = -1;
uint8_t x1889 = 68U;
static volatile int64_t x1951 = INT64_MIN;
static int32_t t70 = 115725792;
static volatile int64_t x1983 = -15LL;
int32_t x2012 = -1;
static int32_t t72 = 41;
static volatile int16_t x2021 = INT16_MAX;
uint8_t x2066 = 1U;
int8_t x2074 = 2;
int32_t x2091 = -5;
volatile int32_t t82 = -831;
int8_t x2188 = -1;
int32_t x2257 = INT32_MAX;
int32_t t87 = 777;
volatile int64_t t88 = 559603995808039LL;
int8_t x2403 = -43;
int8_t x2431 = INT8_MIN;
static uint32_t x2478 = 18U;
int32_t t92 = 1021;
uint64_t x2485 = UINT64_MAX;
int64_t x2486 = -16701LL;
int64_t x2514 = INT64_MIN;
int32_t t94 = 46254338;
uint64_t x2555 = 4368LLU;
static uint16_t x2558 = 34U;
static int32_t x2560 = 72314247;
volatile uint32_t t97 = 1767U;
int8_t x2694 = INT8_MIN;


void f0(void) {
	int32_t x29 = INT32_MAX;
	uint32_t x30 = 14U;
	int64_t x32 = 28LL;
	volatile int32_t t0 = 1;

	t0 = (x29>>(x30&(x31+x32)));

	if (t0 != 2097151) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = 1LL;
	static int64_t x71 = -380501888507297761LL;
	int64_t t1 = INT64_MAX;

	t1 = (x69>>(x70&(x71+x72)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x81 = 100909157686379LLU;
	int8_t x82 = 0;
	static int8_t x83 = INT8_MIN;
	volatile int32_t x84 = INT32_MAX;
	static volatile uint64_t t2 = 12713143229LLU;

	t2 = (x81>>(x82&(x83+x84)));

	if (t2 != 100909157686379LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x105 = INT16_MAX;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -1LL;

	t3 = (x105>>(x106&(x107+x108)));

	if (t3 != 511) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x141 = 382912574LL;
	int32_t x142 = INT32_MIN;
	uint16_t x144 = 217U;
	int64_t t4 = 89727648LL;

	t4 = (x141>>(x142&(x143+x144)));

	if (t4 != 382912574LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x154 = INT64_MIN;
	volatile uint8_t x155 = 49U;
	static volatile uint8_t x156 = 10U;
	static volatile uint32_t t5 = 189416U;

	t5 = (x153>>(x154&(x155+x156)));

	if (t5 != 219710369U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x197 = INT32_MAX;
	int16_t x199 = -1;
	static int32_t x200 = INT32_MAX;

	t6 = (x197>>(x198&(x199+x200)));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x213 = 32062U;
	volatile int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MAX;
	int16_t x216 = INT16_MIN;
	static int32_t t7 = 85212;

	t7 = (x213>>(x214&(x215+x216)));

	if (t7 != 32062) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x249 = 9;
	int32_t x250 = INT32_MIN;
	static int8_t x251 = INT8_MAX;
	int16_t x252 = 13;

	t8 = (x249>>(x250&(x251+x252)));

	if (t8 != 9) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x265 = UINT16_MAX;
	int64_t x266 = INT64_MIN;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t9 = -3943;

	t9 = (x265>>(x266&(x267+x268)));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x277 = 3U;
	int32_t x278 = INT32_MAX;
	uint8_t x279 = 4U;
	uint32_t x280 = 3U;
	static volatile int32_t t10 = 1000043678;

	t10 = (x277>>(x278&(x279+x280)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x297 = INT64_MAX;
	int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	uint16_t x300 = UINT16_MAX;
	volatile int64_t t11 = INT64_MAX;

	t11 = (x297>>(x298&(x299+x300)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x317 = 1477080700U;
	int64_t x318 = 1410LL;
	uint8_t x319 = 69U;
	int8_t x320 = -2;
	uint32_t t12 = 10U;

	t12 = (x317>>(x318&(x319+x320)));

	if (t12 != 369270175U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x337 = 58703784U;
	int64_t x338 = INT64_MIN;
	int32_t x340 = -2;

	t13 = (x337>>(x338&(x339+x340)));

	if (t13 != 58703784U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x381 = 5U;
	uint8_t x382 = 5U;
	static int16_t x383 = INT16_MAX;
	volatile int64_t x384 = INT64_MIN;

	t14 = (x381>>(x382&(x383+x384)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x393 = 658127998U;
	int16_t x394 = 4;
	volatile int16_t x395 = INT16_MIN;
	volatile int8_t x396 = -1;
	uint32_t t15 = 507298251U;

	t15 = (x393>>(x394&(x395+x396)));

	if (t15 != 41132999U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x483 = 1;
	int32_t x484 = INT32_MIN;

	t16 = (x481>>(x482&(x483+x484)));

	if (t16 != 12) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x489 = 98351307521179LLU;
	uint64_t x490 = 4303LLU;
	uint16_t x491 = 1U;

	t17 = (x489>>(x490&(x491+x492)));

	if (t17 != 49175653760589LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x509 = UINT8_MAX;
	int64_t x511 = -1LL;
	uint8_t x512 = 10U;

	t18 = (x509>>(x510&(x511+x512)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x546 = INT32_MIN;
	uint32_t x547 = 3900525U;
	static uint16_t x548 = UINT16_MAX;
	int32_t t19 = 5161228;

	t19 = (x545>>(x546&(x547+x548)));

	if (t19 != 14869) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x569 = INT32_MAX;
	uint8_t x570 = 9U;
	uint64_t x571 = 275LLU;
	static int32_t x572 = INT32_MIN;
	int32_t t20 = -306;

	t20 = (x569>>(x570&(x571+x572)));

	if (t20 != 1073741823) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x589 = UINT16_MAX;
	uint16_t x590 = 0U;
	static volatile uint32_t x591 = 0U;
	int32_t t21 = -47996177;

	t21 = (x589>>(x590&(x591+x592)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x599 = 2;
	static uint16_t x600 = 0U;
	uint32_t t22 = 48U;

	t22 = (x597>>(x598&(x599+x600)));

	if (t22 != 1073741823U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x613 = 1;
	int16_t x614 = 7;
	int64_t x616 = -605769LL;
	int32_t t23 = -12;

	t23 = (x613>>(x614&(x615+x616)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x621 = UINT32_MAX;
	volatile int8_t x624 = INT8_MIN;

	t24 = (x621>>(x622&(x623+x624)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x685 = 2U;
	int16_t x688 = -1;
	static volatile int32_t t25 = -1775620;

	t25 = (x685>>(x686&(x687+x688)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x695 = -441;
	static int64_t x696 = 220356064912650LL;
	volatile uint64_t t26 = 13026398414041086LLU;

	t26 = (x693>>(x694&(x695+x696)));

	if (t26 != 4692765LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x721 = UINT8_MAX;
	int16_t x722 = INT16_MIN;
	volatile uint8_t x724 = 20U;

	t27 = (x721>>(x722&(x723+x724)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x745 = 1690U;
	static int64_t x746 = INT64_MIN;
	uint8_t x747 = 106U;
	static uint16_t x748 = UINT16_MAX;
	int32_t t28 = -15186;

	t28 = (x745>>(x746&(x747+x748)));

	if (t28 != 1690) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x753 = INT32_MAX;
	volatile int64_t x754 = 4042128394015LL;
	static uint8_t x755 = UINT8_MAX;
	int8_t x756 = -49;
	volatile int32_t t29 = -1;

	t29 = (x753>>(x754&(x755+x756)));

	if (t29 != 131071) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x781 = 56LLU;
	volatile int64_t x782 = INT64_MIN;
	uint16_t x783 = UINT16_MAX;
	static int8_t x784 = -1;
	volatile uint64_t t30 = 8784129128195000LLU;

	t30 = (x781>>(x782&(x783+x784)));

	if (t30 != 56LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x785 = INT8_MAX;
	uint8_t x786 = UINT8_MAX;
	uint8_t x787 = 1U;
	int8_t x788 = 1;
	volatile int32_t t31 = -39996;

	t31 = (x785>>(x786&(x787+x788)));

	if (t31 != 31) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x802 = 12U;
	int16_t x804 = -1;
	volatile int32_t t32 = 958529;

	t32 = (x801>>(x802&(x803+x804)));

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x885 = 70U;
	uint16_t x886 = 0U;
	int16_t x887 = INT16_MIN;

	t33 = (x885>>(x886&(x887+x888)));

	if (t33 != 70) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x909 = INT8_MAX;
	static int32_t x910 = INT32_MIN;
	static int16_t x911 = INT16_MIN;
	int32_t x912 = INT32_MAX;
	int32_t t34 = 211346;

	t34 = (x909>>(x910&(x911+x912)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x937 = UINT8_MAX;
	uint64_t x938 = 276501LLU;
	static uint16_t x939 = 9U;
	int32_t x940 = -1;

	t35 = (x937>>(x938&(x939+x940)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x953 = 35U;
	int8_t x954 = 0;
	static volatile uint8_t x955 = UINT8_MAX;
	int64_t x956 = INT64_MIN;
	int32_t t36 = -790320032;

	t36 = (x953>>(x954&(x955+x956)));

	if (t36 != 35) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x982 = 24914LLU;
	int64_t x983 = -1LL;

	t37 = (x981>>(x982&(x983+x984)));

	if (t37 != 1394112964213862LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x985 = UINT16_MAX;
	uint16_t x986 = 2U;
	int16_t x987 = INT16_MIN;
	uint32_t x988 = 66U;
	int32_t t38 = -58116;

	t38 = (x985>>(x986&(x987+x988)));

	if (t38 != 16383) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x994 = 5;
	uint8_t x995 = 8U;
	static uint64_t x996 = 84LLU;
	volatile int64_t t39 = 17473032920238756LL;

	t39 = (x993>>(x994&(x995+x996)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1062 = INT16_MIN;
	int16_t x1063 = -20;
	static int16_t x1064 = 664;
	static volatile int32_t t40 = -521320;

	t40 = (x1061>>(x1062&(x1063+x1064)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1141 = UINT8_MAX;
	static int64_t x1142 = INT64_MIN;
	int8_t x1143 = INT8_MAX;
	int16_t x1144 = INT16_MAX;
	volatile int32_t t41 = -1;

	t41 = (x1141>>(x1142&(x1143+x1144)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1145 = 19U;
	volatile int64_t x1146 = INT64_MIN;
	uint32_t x1147 = UINT32_MAX;
	uint64_t x1148 = 222755578786155547LLU;
	uint32_t t42 = 0U;

	t42 = (x1145>>(x1146&(x1147+x1148)));

	if (t42 != 19U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1169 = INT32_MAX;
	uint64_t x1171 = UINT64_MAX;
	static int32_t t43 = INT32_MAX;

	t43 = (x1169>>(x1170&(x1171+x1172)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x1189 = 22U;
	static volatile int8_t x1190 = 17;
	volatile int8_t x1191 = INT8_MIN;
	static volatile int16_t x1192 = -459;
	static volatile int32_t t44 = -286393865;

	t44 = (x1189>>(x1190&(x1191+x1192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1201 = UINT8_MAX;
	uint8_t x1203 = 0U;
	int64_t x1204 = -14995835LL;

	t45 = (x1201>>(x1202&(x1203+x1204)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1213 = 3573531U;
	int32_t x1216 = 22;
	volatile uint32_t t46 = 3211U;

	t46 = (x1213>>(x1214&(x1215+x1216)));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1246 = 3U;
	static volatile int16_t x1248 = 1;
	int32_t t47 = -162;

	t47 = (x1245>>(x1246&(x1247+x1248)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1317 = 1299910LL;
	uint8_t x1318 = 34U;
	int16_t x1320 = INT16_MAX;
	int64_t t48 = 405484337943298LL;

	t48 = (x1317>>(x1318&(x1319+x1320)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1325 = 9721U;
	int16_t x1326 = 19;
	static uint16_t x1328 = 144U;
	int32_t t49 = -124;

	t49 = (x1325>>(x1326&(x1327+x1328)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1341 = 12;
	int8_t x1342 = 1;
	uint8_t x1344 = UINT8_MAX;
	volatile int32_t t50 = 254;

	t50 = (x1341>>(x1342&(x1343+x1344)));

	if (t50 != 12) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1369 = INT64_MAX;
	uint8_t x1370 = 4U;
	int8_t x1371 = 12;
	uint64_t x1372 = 14256727LLU;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x1369>>(x1370&(x1371+x1372)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1385 = UINT8_MAX;
	int16_t x1386 = 49;
	uint16_t x1387 = 11271U;
	int32_t x1388 = -20080;
	int32_t t52 = 2336686;

	t52 = (x1385>>(x1386&(x1387+x1388)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x1393 = 26;
	uint64_t x1394 = 240578602119696LLU;
	volatile uint8_t x1395 = 0U;
	volatile int8_t x1396 = 0;
	static int32_t t53 = 1;

	t53 = (x1393>>(x1394&(x1395+x1396)));

	if (t53 != 26) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x1413 = 2U;
	int8_t x1416 = INT8_MIN;
	volatile int32_t t54 = -1;

	t54 = (x1413>>(x1414&(x1415+x1416)));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1438 = 1U;
	int64_t x1439 = INT64_MIN;
	uint32_t x1440 = 1729740855U;
	int32_t t55 = 67;

	t55 = (x1437>>(x1438&(x1439+x1440)));

	if (t55 != 16383) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1441 = 0U;
	int32_t x1442 = INT32_MIN;
	volatile uint64_t x1443 = 87455LLU;
	int32_t t56 = 7555;

	t56 = (x1441>>(x1442&(x1443+x1444)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1469 = INT32_MAX;
	static volatile uint16_t x1470 = 175U;
	uint16_t x1471 = 76U;
	uint32_t x1472 = UINT32_MAX;
	static int32_t t57 = -5171375;

	t57 = (x1469>>(x1470&(x1471+x1472)));

	if (t57 != 1048575) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1505 = 485737021U;
	static int32_t x1506 = 535;
	static uint16_t x1507 = 3443U;
	int8_t x1508 = 62;
	volatile uint32_t t58 = 2U;

	t58 = (x1505>>(x1506&(x1507+x1508)));

	if (t58 != 3705U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1529 = INT32_MAX;
	int8_t x1530 = 33;
	volatile uint16_t x1531 = 923U;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x1529>>(x1530&(x1531+x1532)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x1534 = 2U;
	uint8_t x1535 = UINT8_MAX;
	volatile int64_t x1536 = -1LL;
	int64_t t60 = 188465786637524LL;

	t60 = (x1533>>(x1534&(x1535+x1536)));

	if (t60 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1558 = 4893568680138LL;
	int16_t x1559 = 25;

	t61 = (x1557>>(x1558&(x1559+x1560)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1657 = INT32_MAX;
	int8_t x1658 = 1;
	uint16_t x1659 = 1699U;
	static int32_t t62 = INT32_MAX;

	t62 = (x1657>>(x1658&(x1659+x1660)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1661 = 10242418491814LLU;
	volatile int64_t x1662 = INT64_MIN;
	uint64_t x1663 = 18940872LLU;
	static uint8_t x1664 = UINT8_MAX;
	uint64_t t63 = 0LLU;

	t63 = (x1661>>(x1662&(x1663+x1664)));

	if (t63 != 10242418491814LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x1689 = 1U;
	uint8_t x1690 = 1U;
	int8_t x1691 = -2;
	int16_t x1692 = 1;
	volatile uint32_t t64 = 283417U;

	t64 = (x1689>>(x1690&(x1691+x1692)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x1701 = 334093724035399LL;
	volatile int32_t x1703 = 438;
	uint32_t x1704 = 997235U;

	t65 = (x1701>>(x1702&(x1703+x1704)));

	if (t65 != 334093724035399LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1781 = INT8_MAX;
	volatile int8_t x1784 = 30;
	int32_t t66 = -94718993;

	t66 = (x1781>>(x1782&(x1783+x1784)));

	if (t66 != 31) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1821 = 25428U;
	volatile uint8_t x1822 = 4U;
	int16_t x1823 = INT16_MIN;
	static int32_t t67 = 1;

	t67 = (x1821>>(x1822&(x1823+x1824)));

	if (t67 != 1589) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1890 = INT32_MAX;
	int64_t x1891 = 1LL;
	static int64_t x1892 = -1LL;
	int32_t t68 = 33279;

	t68 = (x1889>>(x1890&(x1891+x1892)));

	if (t68 != 68) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1941 = 1;
	volatile int16_t x1942 = -1;
	uint8_t x1943 = 13U;
	uint8_t x1944 = 0U;
	int32_t t69 = -214891694;

	t69 = (x1941>>(x1942&(x1943+x1944)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1949 = UINT8_MAX;
	uint32_t x1950 = 50U;
	uint32_t x1952 = 985517762U;

	t70 = (x1949>>(x1950&(x1951+x1952)));

	if (t70 != 63) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1981 = INT8_MAX;
	static uint8_t x1982 = 5U;
	int8_t x1984 = -1;
	volatile int32_t t71 = 127758521;

	t71 = (x1981>>(x1982&(x1983+x1984)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x2009 = UINT16_MAX;
	static int16_t x2010 = 24;
	int8_t x2011 = INT8_MIN;

	t72 = (x2009>>(x2010&(x2011+x2012)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2013 = 0U;
	static uint32_t x2014 = 613U;
	static int16_t x2015 = 22;
	int8_t x2016 = 1;
	int32_t t73 = 11;

	t73 = (x2013>>(x2014&(x2015+x2016)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x2022 = INT8_MIN;
	uint32_t x2023 = UINT32_MAX;
	uint8_t x2024 = 46U;
	static int32_t t74 = -2990625;

	t74 = (x2021>>(x2022&(x2023+x2024)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x2065 = 858371506U;
	int32_t x2067 = INT32_MIN;
	uint64_t x2068 = 1116479933515426LLU;
	static volatile uint32_t t75 = 298U;

	t75 = (x2065>>(x2066&(x2067+x2068)));

	if (t75 != 858371506U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2073 = INT8_MAX;
	static int64_t x2075 = -1LL;
	volatile uint8_t x2076 = 97U;
	int32_t t76 = 7162708;

	t76 = (x2073>>(x2074&(x2075+x2076)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x2089 = 591784843757LLU;
	static int32_t x2090 = INT32_MAX;
	uint16_t x2092 = 33U;
	static volatile uint64_t t77 = 650504277160064LLU;

	t77 = (x2089>>(x2090&(x2091+x2092)));

	if (t77 != 2204LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2105 = 174421;
	static int16_t x2106 = INT16_MIN;
	static volatile int16_t x2107 = -1;
	uint8_t x2108 = 1U;
	volatile int32_t t78 = 2432;

	t78 = (x2105>>(x2106&(x2107+x2108)));

	if (t78 != 174421) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2109 = UINT32_MAX;
	int64_t x2110 = INT64_MIN;
	volatile int64_t x2111 = 5349071LL;
	static volatile int32_t x2112 = -1;
	uint32_t t79 = UINT32_MAX;

	t79 = (x2109>>(x2110&(x2111+x2112)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2133 = UINT64_MAX;
	uint8_t x2134 = 41U;
	int8_t x2135 = -1;
	int64_t x2136 = -1804080753LL;
	uint64_t t80 = 30117LLU;

	t80 = (x2133>>(x2134&(x2135+x2136)));

	if (t80 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x2137 = 0LL;
	static int16_t x2138 = INT16_MAX;
	volatile uint64_t x2139 = UINT64_MAX;
	uint8_t x2140 = 7U;
	int64_t t81 = 83LL;

	t81 = (x2137>>(x2138&(x2139+x2140)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2181 = UINT16_MAX;
	int64_t x2182 = INT64_MIN;
	volatile uint64_t x2183 = UINT64_MAX;
	uint8_t x2184 = UINT8_MAX;

	t82 = (x2181>>(x2182&(x2183+x2184)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2185 = INT32_MAX;
	uint8_t x2186 = UINT8_MAX;
	uint8_t x2187 = 16U;
	int32_t t83 = 594;

	t83 = (x2185>>(x2186&(x2187+x2188)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2221 = 2548614546LLU;
	int8_t x2222 = INT8_MIN;
	uint16_t x2223 = 5U;
	int16_t x2224 = -1;
	uint64_t t84 = 128888LLU;

	t84 = (x2221>>(x2222&(x2223+x2224)));

	if (t84 != 2548614546LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2258 = 109U;
	uint64_t x2259 = 4055553836451983LLU;
	uint8_t x2260 = UINT8_MAX;
	volatile int32_t t85 = 964992;

	t85 = (x2257>>(x2258&(x2259+x2260)));

	if (t85 != 524287) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2265 = INT32_MAX;
	uint8_t x2266 = 0U;
	int64_t x2267 = INT64_MIN;
	uint32_t x2268 = 8U;
	int32_t t86 = INT32_MAX;

	t86 = (x2265>>(x2266&(x2267+x2268)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x2369 = INT32_MAX;
	uint8_t x2370 = 12U;
	volatile int8_t x2371 = 1;
	static int8_t x2372 = -43;

	t87 = (x2369>>(x2370&(x2371+x2372)));

	if (t87 != 134217727) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2377 = 133LL;
	int64_t x2378 = INT64_MIN;
	static volatile int32_t x2379 = 1;
	int16_t x2380 = INT16_MAX;

	t88 = (x2377>>(x2378&(x2379+x2380)));

	if (t88 != 133LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2401 = 116;
	static uint16_t x2402 = 5U;
	uint32_t x2404 = 289810164U;
	volatile int32_t t89 = -1353656;

	t89 = (x2401>>(x2402&(x2403+x2404)));

	if (t89 != 58) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x2429 = 804540349361237LLU;
	int16_t x2430 = INT16_MIN;
	volatile uint8_t x2432 = UINT8_MAX;
	uint64_t t90 = 92414536045725LLU;

	t90 = (x2429>>(x2430&(x2431+x2432)));

	if (t90 != 804540349361237LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2473 = UINT64_MAX;
	int64_t x2474 = INT64_MIN;
	uint8_t x2475 = 1U;
	uint8_t x2476 = 54U;
	uint64_t t91 = UINT64_MAX;

	t91 = (x2473>>(x2474&(x2475+x2476)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2477 = UINT8_MAX;
	uint16_t x2479 = 0U;
	volatile int8_t x2480 = INT8_MIN;

	t92 = (x2477>>(x2478&(x2479+x2480)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x2487 = -1LL;
	uint16_t x2488 = 36U;
	uint64_t t93 = 14659152322710223LLU;

	t93 = (x2485>>(x2486&(x2487+x2488)));

	if (t93 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2513 = 215;
	static int8_t x2515 = -1;
	volatile uint64_t x2516 = 266444117753780480LLU;

	t94 = (x2513>>(x2514&(x2515+x2516)));

	if (t94 != 215) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x2553 = UINT16_MAX;
	int32_t x2554 = 6;
	int32_t x2556 = -1;
	volatile int32_t t95 = 0;

	t95 = (x2553>>(x2554&(x2555+x2556)));

	if (t95 != 1023) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2557 = 34569415392464LLU;
	int16_t x2559 = -1;
	static uint64_t t96 = 11682880LLU;

	t96 = (x2557>>(x2558&(x2559+x2560)));

	if (t96 != 8642353848116LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2625 = 2072998U;
	static uint8_t x2626 = UINT8_MAX;
	uint16_t x2627 = 1U;
	volatile int32_t x2628 = 2;

	t97 = (x2625>>(x2626&(x2627+x2628)));

	if (t97 != 259124U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2645 = INT64_MAX;
	int32_t x2646 = INT32_MIN;
	uint16_t x2647 = UINT16_MAX;
	static volatile uint64_t x2648 = 179205133LLU;
	static volatile int64_t t98 = INT64_MAX;

	t98 = (x2645>>(x2646&(x2647+x2648)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2693 = INT8_MAX;
	volatile int16_t x2695 = 102;
	static uint64_t x2696 = UINT64_MAX;
	static volatile int32_t t99 = 876440581;

	t99 = (x2693>>(x2694&(x2695+x2696)));

	if (t99 != 127) { NG(); } else { ; }
	
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

