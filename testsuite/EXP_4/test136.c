#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x104 = 28U;
static volatile uint32_t t2 = 464671U;
int8_t x109 = 2;
int8_t x112 = INT8_MAX;
volatile int32_t t3 = -411030;
int16_t x237 = 6769;
volatile uint64_t x266 = 123327487LLU;
volatile uint64_t t5 = 26071227916741LLU;
int8_t x286 = 16;
volatile int32_t x287 = INT32_MAX;
int32_t x321 = 344871488;
volatile int8_t x334 = INT8_MAX;
int64_t x365 = INT64_MAX;
static int32_t t11 = -5;
int16_t x402 = INT16_MIN;
uint8_t x457 = 108U;
volatile int32_t x458 = INT32_MIN;
int16_t x481 = 2231;
uint16_t x483 = 1U;
volatile uint16_t x521 = 701U;
static int16_t x522 = 310;
int64_t x524 = INT64_MIN;
volatile int32_t t18 = 3;
uint64_t x531 = 116889922LLU;
static int64_t x537 = INT64_MAX;
int32_t x556 = INT32_MAX;
volatile int32_t t22 = INT32_MAX;
uint64_t x577 = 193624LLU;
int64_t x579 = -1LL;
uint32_t x599 = UINT32_MAX;
static volatile int16_t x634 = INT16_MIN;
int8_t x844 = -1;
int64_t x940 = -1LL;
volatile int8_t x981 = INT8_MAX;
static int32_t x986 = INT32_MIN;
uint8_t x1049 = UINT8_MAX;
static int32_t x1050 = INT32_MIN;
uint64_t x1052 = UINT64_MAX;
int8_t x1056 = 6;
uint8_t x1175 = 7U;
int16_t x1176 = -1;
int32_t t44 = -262;
int64_t x1284 = INT64_MIN;
int16_t x1299 = 35;
int32_t x1331 = INT32_MAX;
volatile int64_t t50 = -254564542335041LL;
int16_t x1339 = INT16_MAX;
static int8_t x1340 = INT8_MIN;
int16_t x1361 = 42;
int32_t x1364 = INT32_MAX;
uint64_t x1368 = UINT64_MAX;
static int32_t t54 = -27318359;
static uint8_t x1382 = 0U;
static volatile int8_t x1402 = INT8_MIN;
uint16_t x1415 = 15U;
static volatile int32_t t57 = -42240;
int8_t x1419 = -1;
static uint32_t t59 = 1U;
static int32_t x1479 = INT32_MIN;
int32_t t60 = -6238;
static volatile uint32_t t61 = 1715U;
int64_t x1526 = INT64_MIN;
int64_t x1527 = -7148LL;
volatile int16_t x1541 = 1577;
volatile int16_t x1542 = -1;
uint8_t x1544 = 3U;
uint64_t x1649 = 472778LLU;
volatile int8_t x1650 = INT8_MAX;
int64_t x1651 = 2891286392LL;
uint64_t x1693 = 2289LLU;
uint64_t x1716 = 5943651LLU;
int32_t x1720 = -1;
static uint16_t x1740 = UINT16_MAX;
static uint8_t x1766 = 22U;
uint8_t x1794 = UINT8_MAX;
uint8_t x1796 = 2U;
volatile int64_t x1858 = INT64_MAX;
int32_t x1883 = 37670031;
uint16_t x1934 = 50U;
static int32_t t78 = 93325;
volatile uint64_t t79 = 98LLU;
uint16_t x2007 = UINT16_MAX;
volatile int32_t x2071 = -1;
volatile int8_t x2103 = -1;
uint8_t x2104 = 77U;
uint16_t x2118 = 5774U;
int8_t x2120 = 1;
static int32_t t87 = -21;
volatile int32_t t89 = 0;
uint32_t x2218 = 3U;
uint32_t x2334 = 10416U;
int16_t x2336 = 7;
static uint8_t x2358 = 12U;
int32_t x2360 = INT32_MIN;
static uint64_t t94 = 16355568865778LLU;
uint32_t x2462 = 1U;
volatile uint8_t x2464 = UINT8_MAX;
volatile int32_t t97 = 406437203;
uint32_t x2472 = 432U;
static int16_t x2485 = 14298;


void f0(void) {
	volatile uint16_t x73 = 2U;
	int64_t x74 = INT64_MIN;
	volatile int8_t x75 = 6;
	uint32_t x76 = UINT32_MAX;
	int32_t t0 = 54131;

	t0 = (x73<<(x74&(x75+x76)));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x89 = 792U;
	int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MAX;
	volatile int32_t t1 = -3583040;

	t1 = (x89<<(x90&(x91+x92)));

	if (t1 != 792) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x101 = 16227U;
	static int8_t x102 = INT8_MAX;
	int32_t x103 = INT32_MIN;

	t2 = (x101<<(x102&(x103+x104)));

	if (t2 != 805306368U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x110 = INT64_MIN;
	volatile uint8_t x111 = 7U;

	t3 = (x109<<(x110&(x111+x112)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x238 = 0LL;
	static int16_t x239 = INT16_MIN;
	int64_t x240 = 403362LL;
	volatile int32_t t4 = -3964401;

	t4 = (x237<<(x238&(x239+x240)));

	if (t4 != 6769) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x265 = 495717074545LLU;
	uint8_t x267 = 0U;
	volatile int32_t x268 = 2;

	t5 = (x265<<(x266&(x267+x268)));

	if (t5 != 1982868298180LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x285 = UINT32_MAX;
	int16_t x288 = INT16_MIN;
	uint32_t t6 = 1U;

	t6 = (x285<<(x286&(x287+x288)));

	if (t6 != 4294901760U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x322 = 49;
	uint16_t x323 = 65U;
	volatile uint16_t x324 = 7943U;
	int32_t t7 = 98;

	t7 = (x321<<(x322&(x323+x324)));

	if (t7 != 344871488) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x333 = INT16_MAX;
	int64_t x335 = INT64_MIN;
	int8_t x336 = 0;
	volatile int32_t t8 = -1;

	t8 = (x333<<(x334&(x335+x336)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x366 = INT16_MIN;
	static uint16_t x367 = 152U;
	static uint32_t x368 = UINT32_MAX;
	static int64_t t9 = INT64_MAX;

	t9 = (x365<<(x366&(x367+x368)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x373 = UINT16_MAX;
	static volatile uint64_t x374 = UINT64_MAX;
	static uint16_t x375 = 2U;
	int8_t x376 = 1;
	int32_t t10 = -475617;

	t10 = (x373<<(x374&(x375+x376)));

	if (t10 != 524280) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x377 = UINT16_MAX;
	static int16_t x378 = 1057;
	static volatile uint8_t x379 = 21U;
	static uint64_t x380 = UINT64_MAX;

	t11 = (x377<<(x378&(x379+x380)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x401 = 6U;
	static volatile int64_t x403 = -1LL;
	static uint16_t x404 = 1U;
	volatile int32_t t12 = -20845922;

	t12 = (x401<<(x402&(x403+x404)));

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x409 = 15199LLU;
	int16_t x410 = 5;
	int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MAX;
	uint64_t t13 = 382361092086176810LLU;

	t13 = (x409<<(x410&(x411+x412)));

	if (t13 != 486368LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x459 = -1LL;
	uint16_t x460 = 14804U;
	volatile int32_t t14 = -9;

	t14 = (x457<<(x458&(x459+x460)));

	if (t14 != 108) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x482 = -105;
	uint64_t x484 = UINT64_MAX;
	int32_t t15 = -56900363;

	t15 = (x481<<(x482&(x483+x484)));

	if (t15 != 2231) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x489 = INT16_MAX;
	uint16_t x490 = 899U;
	uint16_t x491 = 53U;
	int32_t x492 = 2087;
	volatile int32_t t16 = -4196400;

	t16 = (x489<<(x490&(x491+x492)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x505 = UINT16_MAX;
	uint8_t x506 = 2U;
	int32_t x507 = 1968945;
	int64_t x508 = INT64_MIN;
	volatile int32_t t17 = 2233;

	t17 = (x505<<(x506&(x507+x508)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x523 = 2U;

	t18 = (x521<<(x522&(x523+x524)));

	if (t18 != 2804) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x529 = 25265U;
	uint16_t x530 = 1U;
	int32_t x532 = INT32_MIN;
	int32_t t19 = -22;

	t19 = (x529<<(x530&(x531+x532)));

	if (t19 != 25265) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x533 = 0U;
	uint8_t x534 = 13U;
	int32_t x535 = -7769;
	int8_t x536 = INT8_MAX;
	volatile int32_t t20 = 357959;

	t20 = (x533<<(x534&(x535+x536)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x538 = INT64_MIN;
	static uint64_t x539 = 141724312LLU;
	int64_t x540 = -1LL;
	volatile int64_t t21 = INT64_MAX;

	t21 = (x537<<(x538&(x539+x540)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x553 = INT32_MAX;
	volatile int64_t x554 = INT64_MIN;
	volatile int32_t x555 = -1;

	t22 = (x553<<(x554&(x555+x556)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x578 = INT64_MIN;
	uint32_t x580 = 338707U;
	volatile uint64_t t23 = 52794346168135557LLU;

	t23 = (x577<<(x578&(x579+x580)));

	if (t23 != 193624LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x597 = 1;
	static volatile int32_t x598 = INT32_MIN;
	volatile int32_t x600 = INT32_MIN;
	volatile int32_t t24 = 233752;

	t24 = (x597<<(x598&(x599+x600)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x601 = 224786755816433LLU;
	volatile int32_t x602 = 1;
	int32_t x603 = INT32_MAX;
	int16_t x604 = INT16_MIN;
	volatile uint64_t t25 = 51129115769488871LLU;

	t25 = (x601<<(x602&(x603+x604)));

	if (t25 != 449573511632866LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x605 = 97546LLU;
	volatile uint32_t x606 = UINT32_MAX;
	volatile uint32_t x607 = 2U;
	static uint16_t x608 = 52U;
	volatile uint64_t t26 = 81930LLU;

	t26 = (x605<<(x606&(x607+x608)));

	if (t26 != 4791830003522207744LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x621 = INT16_MAX;
	uint64_t x622 = 2LLU;
	uint8_t x623 = UINT8_MAX;
	volatile int8_t x624 = -20;
	volatile int32_t t27 = -42;

	t27 = (x621<<(x622&(x623+x624)));

	if (t27 != 131068) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x633 = 27U;
	uint64_t x635 = 446LLU;
	volatile int8_t x636 = 0;
	volatile int32_t t28 = -22;

	t28 = (x633<<(x634&(x635+x636)));

	if (t28 != 27) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x661 = 133148447LL;
	volatile uint16_t x662 = 1U;
	uint64_t x663 = UINT64_MAX;
	uint32_t x664 = UINT32_MAX;
	int64_t t29 = -1814965723901395318LL;

	t29 = (x661<<(x662&(x663+x664)));

	if (t29 != 133148447LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x681 = 236817151293LL;
	volatile int64_t x682 = INT64_MIN;
	static volatile int64_t x683 = 175096841832LL;
	int8_t x684 = INT8_MAX;
	volatile int64_t t30 = -3269339484730LL;

	t30 = (x681<<(x682&(x683+x684)));

	if (t30 != 236817151293LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x793 = UINT32_MAX;
	uint8_t x794 = 21U;
	uint32_t x795 = 2U;
	volatile int32_t x796 = -1;
	uint32_t t31 = 6030U;

	t31 = (x793<<(x794&(x795+x796)));

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x813 = 236456112937062039LLU;
	uint32_t x814 = 11U;
	uint8_t x815 = 1U;
	int32_t x816 = -1;
	static uint64_t t32 = 256771533473985LLU;

	t32 = (x813<<(x814&(x815+x816)));

	if (t32 != 236456112937062039LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x841 = 510842185901091LL;
	uint16_t x842 = 6U;
	volatile int16_t x843 = -1;
	int64_t t33 = -347355761862LL;

	t33 = (x841<<(x842&(x843+x844)));

	if (t33 != 32693899897669824LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x901 = 1132116525326024097LLU;
	static int16_t x902 = 58;
	volatile int64_t x903 = INT64_MIN;
	static uint16_t x904 = 14674U;
	uint64_t t34 = 98206584LLU;

	t34 = (x901<<(x902&(x903+x904)));

	if (t34 != 6335757225994485760LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x937 = UINT16_MAX;
	uint8_t x938 = 5U;
	static int32_t x939 = INT32_MIN;
	static volatile int32_t t35 = -31;

	t35 = (x937<<(x938&(x939+x940)));

	if (t35 != 2097120) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x957 = 12039U;
	int32_t x958 = 8;
	uint16_t x959 = 19U;
	int8_t x960 = -1;
	volatile int32_t t36 = 1973371;

	t36 = (x957<<(x958&(x959+x960)));

	if (t36 != 12039) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x982 = 0U;
	int32_t x983 = INT32_MIN;
	uint32_t x984 = UINT32_MAX;
	volatile int32_t t37 = 8385;

	t37 = (x981<<(x982&(x983+x984)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x985 = 1;
	volatile int8_t x987 = -1;
	uint16_t x988 = 23394U;
	volatile int32_t t38 = -372472;

	t38 = (x985<<(x986&(x987+x988)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1051 = 1;
	volatile int32_t t39 = -4647024;

	t39 = (x1049<<(x1050&(x1051+x1052)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x1053 = 2U;
	int32_t x1054 = -1;
	int16_t x1055 = -1;
	int32_t t40 = 192;

	t40 = (x1053<<(x1054&(x1055+x1056)));

	if (t40 != 64) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1097 = 9;
	int32_t x1098 = INT32_MIN;
	int32_t x1099 = 73753;
	static int64_t x1100 = -1LL;
	volatile int32_t t41 = 495300;

	t41 = (x1097<<(x1098&(x1099+x1100)));

	if (t41 != 9) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1165 = 3756299U;
	int16_t x1166 = -1;
	static volatile int8_t x1167 = 14;
	uint32_t x1168 = UINT32_MAX;
	static volatile uint32_t t42 = 63060U;

	t42 = (x1165<<(x1166&(x1167+x1168)));

	if (t42 != 706830336U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1173 = 392465U;
	int32_t x1174 = 19;
	uint32_t t43 = 21243528U;

	t43 = (x1173<<(x1174&(x1175+x1176)));

	if (t43 != 1569860U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1185 = 7U;
	static int64_t x1186 = INT64_MIN;
	uint8_t x1187 = UINT8_MAX;
	volatile int16_t x1188 = INT16_MAX;

	t44 = (x1185<<(x1186&(x1187+x1188)));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1189 = 6LLU;
	uint16_t x1190 = 29364U;
	static int32_t x1191 = INT32_MIN;
	uint8_t x1192 = 2U;
	uint64_t t45 = 1716397374LLU;

	t45 = (x1189<<(x1190&(x1191+x1192)));

	if (t45 != 6LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1221 = 1;
	uint32_t x1222 = 16U;
	int8_t x1223 = INT8_MIN;
	int64_t x1224 = -4347685285549454LL;
	volatile int32_t t46 = 0;

	t46 = (x1221<<(x1222&(x1223+x1224)));

	if (t46 != 65536) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1229 = 2U;
	uint8_t x1230 = 0U;
	int32_t x1231 = INT32_MIN;
	volatile int32_t x1232 = 1;
	volatile int32_t t47 = -11;

	t47 = (x1229<<(x1230&(x1231+x1232)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1281 = 5451857563LLU;
	uint8_t x1282 = 27U;
	volatile uint16_t x1283 = 7U;
	static volatile uint64_t t48 = 3202388229395521066LLU;

	t48 = (x1281<<(x1282&(x1283+x1284)));

	if (t48 != 43614860504LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x1297 = 1945053399LLU;
	int64_t x1298 = -1LL;
	int16_t x1300 = -1;
	uint64_t t49 = 739475002819265LLU;

	t49 = (x1297<<(x1298&(x1299+x1300)));

	if (t49 != 14969018877005004800LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1329 = 116416LL;
	static uint8_t x1330 = 29U;
	static volatile int64_t x1332 = -1LL;

	t50 = (x1329<<(x1330&(x1331+x1332)));

	if (t50 != 31250182045696LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1337 = 0U;
	int8_t x1338 = 1;
	int32_t t51 = -5;

	t51 = (x1337<<(x1338&(x1339+x1340)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1362 = 3LL;
	int16_t x1363 = INT16_MIN;
	int32_t t52 = -1908;

	t52 = (x1361<<(x1362&(x1363+x1364)));

	if (t52 != 336) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1365 = 260777570LLU;
	uint8_t x1366 = 2U;
	uint64_t x1367 = 2LLU;
	uint64_t t53 = 164LLU;

	t53 = (x1365<<(x1366&(x1367+x1368)));

	if (t53 != 260777570LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1373 = UINT16_MAX;
	int16_t x1374 = 5;
	int32_t x1375 = -916349;
	int16_t x1376 = -1;

	t54 = (x1373<<(x1374&(x1375+x1376)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1381 = 41;
	static uint16_t x1383 = 15U;
	volatile uint32_t x1384 = UINT32_MAX;
	volatile int32_t t55 = 228401478;

	t55 = (x1381<<(x1382&(x1383+x1384)));

	if (t55 != 41) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1401 = 674784152436303LL;
	uint32_t x1403 = 5U;
	int32_t x1404 = -1;
	static int64_t t56 = 4456LL;

	t56 = (x1401<<(x1402&(x1403+x1404)));

	if (t56 != 674784152436303LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x1413 = UINT16_MAX;
	uint64_t x1414 = 12LLU;
	int8_t x1416 = 49;

	t57 = (x1413<<(x1414&(x1415+x1416)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1417 = INT16_MAX;
	volatile uint8_t x1418 = 16U;
	volatile int8_t x1420 = -1;
	static int32_t t58 = 189;

	t58 = (x1417<<(x1418&(x1419+x1420)));

	if (t58 != 2147418112) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x1457 = 413578565U;
	volatile int8_t x1458 = 0;
	int16_t x1459 = -15269;
	int16_t x1460 = INT16_MAX;

	t59 = (x1457<<(x1458&(x1459+x1460)));

	if (t59 != 413578565U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1477 = INT16_MAX;
	int16_t x1478 = 0;
	static uint32_t x1480 = 9898125U;

	t60 = (x1477<<(x1478&(x1479+x1480)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1493 = UINT32_MAX;
	uint8_t x1494 = UINT8_MAX;
	uint64_t x1495 = 39918717967LLU;
	int64_t x1496 = -1LL;

	t61 = (x1493<<(x1494&(x1495+x1496)));

	if (t61 != 4294950912U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x1525 = 2849U;
	static uint64_t x1528 = 645814803LLU;
	volatile uint32_t t62 = 152430U;

	t62 = (x1525<<(x1526&(x1527+x1528)));

	if (t62 != 2849U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1543 = UINT64_MAX;
	volatile int32_t t63 = 6;

	t63 = (x1541<<(x1542&(x1543+x1544)));

	if (t63 != 6308) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1652 = 27283;
	uint64_t t64 = 47192LLU;

	t64 = (x1649<<(x1650&(x1651+x1652)));

	if (t64 != 968249344LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1673 = 3U;
	static uint32_t x1674 = 27909U;
	uint8_t x1675 = 31U;
	volatile int16_t x1676 = INT16_MIN;
	volatile int32_t t65 = -393150;

	t65 = (x1673<<(x1674&(x1675+x1676)));

	if (t65 != 96) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x1694 = INT64_MIN;
	uint8_t x1695 = 54U;
	uint16_t x1696 = 1051U;
	uint64_t t66 = 190LLU;

	t66 = (x1693<<(x1694&(x1695+x1696)));

	if (t66 != 2289LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x1697 = INT32_MAX;
	volatile int32_t x1698 = 0;
	static int8_t x1699 = -1;
	static uint8_t x1700 = 25U;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x1697<<(x1698&(x1699+x1700)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1701 = 3372U;
	int32_t x1702 = 214;
	int16_t x1703 = INT16_MIN;
	int8_t x1704 = 4;
	volatile uint32_t t68 = 2575588U;

	t68 = (x1701<<(x1702&(x1703+x1704)));

	if (t68 != 53952U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1713 = UINT64_MAX;
	volatile int32_t x1714 = 0;
	uint64_t x1715 = UINT64_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x1713<<(x1714&(x1715+x1716)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1717 = 683656236;
	int16_t x1718 = INT16_MIN;
	uint32_t x1719 = 4U;
	static int32_t t70 = 1;

	t70 = (x1717<<(x1718&(x1719+x1720)));

	if (t70 != 683656236) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1733 = 1;
	int64_t x1734 = INT64_MIN;
	static int8_t x1735 = -1;
	int32_t x1736 = INT32_MAX;
	static volatile int32_t t71 = -4;

	t71 = (x1733<<(x1734&(x1735+x1736)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1737 = 860478581;
	int64_t x1738 = INT64_MIN;
	volatile uint64_t x1739 = 1239732295144LLU;
	static volatile int32_t t72 = -92;

	t72 = (x1737<<(x1738&(x1739+x1740)));

	if (t72 != 860478581) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1765 = 61U;
	int16_t x1767 = -1;
	int16_t x1768 = -1984;
	volatile int32_t t73 = 99;

	t73 = (x1765<<(x1766&(x1767+x1768)));

	if (t73 != 255852544) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x1793 = INT8_MAX;
	int64_t x1795 = -1LL;
	volatile int32_t t74 = 4304;

	t74 = (x1793<<(x1794&(x1795+x1796)));

	if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x1857 = UINT64_MAX;
	uint16_t x1859 = 12U;
	static int16_t x1860 = -1;
	static volatile uint64_t t75 = 207689436848385294LLU;

	t75 = (x1857<<(x1858&(x1859+x1860)));

	if (t75 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1873 = 81;
	static volatile int32_t x1874 = INT32_MIN;
	int8_t x1875 = INT8_MIN;
	volatile uint32_t x1876 = 1472U;
	volatile int32_t t76 = -33251724;

	t76 = (x1873<<(x1874&(x1875+x1876)));

	if (t76 != 81) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x1881 = 130U;
	static int8_t x1882 = INT8_MAX;
	uint16_t x1884 = UINT16_MAX;
	int32_t t77 = 10;

	t77 = (x1881<<(x1882&(x1883+x1884)));

	if (t77 != 2129920) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1933 = UINT8_MAX;
	int8_t x1935 = 1;
	int8_t x1936 = INT8_MIN;

	t78 = (x1933<<(x1934&(x1935+x1936)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1949 = 1819104803753422LLU;
	int32_t x1950 = INT32_MIN;
	volatile int16_t x1951 = -1;
	static int8_t x1952 = INT8_MAX;

	t79 = (x1949<<(x1950&(x1951+x1952)));

	if (t79 != 1819104803753422LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x1953 = 2439096U;
	uint16_t x1954 = 420U;
	int64_t x1955 = INT64_MIN;
	static uint32_t x1956 = 3U;
	uint32_t t80 = 557U;

	t80 = (x1953<<(x1954&(x1955+x1956)));

	if (t80 != 2439096U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1993 = 50061193586249LLU;
	uint32_t x1994 = 33U;
	int32_t x1995 = -1;
	int16_t x1996 = INT16_MIN;
	uint64_t t81 = 128487388515132002LLU;

	t81 = (x1993<<(x1994&(x1995+x1996)));

	if (t81 != 10327401085462904832LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x2005 = UINT64_MAX;
	int64_t x2006 = INT64_MIN;
	int16_t x2008 = -1;
	static uint64_t t82 = UINT64_MAX;

	t82 = (x2005<<(x2006&(x2007+x2008)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x2069 = UINT8_MAX;
	uint8_t x2070 = 1U;
	int32_t x2072 = INT32_MAX;
	int32_t t83 = -2599056;

	t83 = (x2069<<(x2070&(x2071+x2072)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x2089 = 3331LLU;
	int8_t x2090 = INT8_MAX;
	int64_t x2091 = 30936345344137LL;
	int64_t x2092 = INT64_MIN;
	volatile uint64_t t84 = 1622384890LLU;

	t84 = (x2089<<(x2090&(x2091+x2092)));

	if (t84 != 1705472LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2101 = UINT8_MAX;
	volatile int64_t x2102 = INT64_MIN;
	volatile int32_t t85 = -12034;

	t85 = (x2101<<(x2102&(x2103+x2104)));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x2117 = INT8_MAX;
	int16_t x2119 = -1;
	int32_t t86 = -49894;

	t86 = (x2117<<(x2118&(x2119+x2120)));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2129 = 1;
	uint16_t x2130 = 3867U;
	int32_t x2131 = INT32_MIN;
	int8_t x2132 = INT8_MAX;

	t87 = (x2129<<(x2130&(x2131+x2132)));

	if (t87 != 134217728) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x2141 = 13424U;
	int8_t x2142 = 0;
	static int16_t x2143 = INT16_MAX;
	int16_t x2144 = -1;
	int32_t t88 = 968;

	t88 = (x2141<<(x2142&(x2143+x2144)));

	if (t88 != 13424) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2197 = 6U;
	int32_t x2198 = INT32_MIN;
	uint8_t x2199 = 1U;
	volatile int64_t x2200 = -1LL;

	t89 = (x2197<<(x2198&(x2199+x2200)));

	if (t89 != 6) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2217 = UINT64_MAX;
	int8_t x2219 = -61;
	uint16_t x2220 = 4U;
	volatile uint64_t t90 = 211300843115LLU;

	t90 = (x2217<<(x2218&(x2219+x2220)));

	if (t90 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2285 = 3U;
	uint32_t x2286 = 0U;
	int32_t x2287 = 1;
	int16_t x2288 = 29;
	static int32_t t91 = -133450332;

	t91 = (x2285<<(x2286&(x2287+x2288)));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2325 = UINT16_MAX;
	int8_t x2326 = -1;
	uint64_t x2327 = UINT64_MAX;
	uint8_t x2328 = 2U;
	static int32_t t92 = -1464279;

	t92 = (x2325<<(x2326&(x2327+x2328)));

	if (t92 != 131070) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x2333 = 1182;
	static int64_t x2335 = -1LL;
	int32_t t93 = 14722;

	t93 = (x2333<<(x2334&(x2335+x2336)));

	if (t93 != 1182) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2357 = 158306773402530006LLU;
	volatile int32_t x2359 = 1;

	t94 = (x2357<<(x2358&(x2359+x2360)));

	if (t94 != 158306773402530006LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2433 = INT16_MAX;
	int32_t x2434 = INT32_MIN;
	static int64_t x2435 = 26LL;
	uint8_t x2436 = 26U;
	int32_t t95 = -1734;

	t95 = (x2433<<(x2434&(x2435+x2436)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2461 = 5U;
	int8_t x2463 = -1;
	volatile int32_t t96 = 2;

	t96 = (x2461<<(x2462&(x2463+x2464)));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x2465 = 7U;
	int8_t x2466 = 0;
	volatile uint64_t x2467 = UINT64_MAX;
	int8_t x2468 = INT8_MIN;

	t97 = (x2465<<(x2466&(x2467+x2468)));

	if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x2469 = 13U;
	volatile int16_t x2470 = INT16_MIN;
	uint16_t x2471 = 20U;
	int32_t t98 = -1;

	t98 = (x2469<<(x2470&(x2471+x2472)));

	if (t98 != 13) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x2486 = 46;
	int32_t x2487 = -53;
	int64_t x2488 = -1LL;
	volatile int32_t t99 = 32599898;

	t99 = (x2485<<(x2486&(x2487+x2488)));

	if (t99 != 14641152) { NG(); } else { ; }
	
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

