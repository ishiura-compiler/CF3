#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x154 = 0U;
volatile int16_t x169 = 63;
static uint8_t x174 = 0U;
uint64_t x189 = 51194256180847LLU;
int8_t x192 = -1;
volatile int16_t x209 = INT16_MAX;
uint64_t x224 = UINT64_MAX;
static uint32_t t8 = 38962U;
uint16_t x235 = UINT16_MAX;
int32_t t9 = INT32_MAX;
int8_t x241 = 29;
int8_t x386 = INT8_MAX;
volatile int32_t x447 = INT32_MAX;
static uint32_t x451 = UINT32_MAX;
uint8_t x458 = 1U;
uint8_t x485 = 2U;
volatile int32_t t21 = 14449141;
uint64_t x571 = 1236205586LLU;
volatile uint8_t x609 = 1U;
uint64_t x610 = 16LLU;
int64_t x612 = -1LL;
static int64_t x613 = INT64_MAX;
int32_t x615 = 10;
volatile int64_t x622 = INT64_MIN;
volatile int32_t x753 = 41;
int32_t t28 = 4093516;
volatile int64_t x814 = -1LL;
volatile int16_t x827 = 1;
int32_t t31 = -47732;
uint64_t x925 = 24653LLU;
static int64_t x928 = INT64_MAX;
static uint64_t x947 = 12730118987745465LLU;
uint64_t x948 = 253LLU;
volatile int32_t t35 = -1;
static int64_t x951 = INT64_MIN;
static uint32_t x1009 = 84408U;
int32_t x1011 = -1;
volatile int32_t x1027 = INT32_MIN;
uint32_t t39 = UINT32_MAX;
volatile uint64_t t40 = UINT64_MAX;
static uint8_t x1143 = 3U;
volatile uint16_t x1144 = 1U;
volatile int32_t x1205 = 411484685;
static volatile int64_t x1289 = 3628307333LL;
static int8_t x1327 = INT8_MIN;
static int32_t t46 = 94;
volatile int8_t x1334 = INT8_MAX;
int8_t x1335 = -6;
volatile int8_t x1336 = -6;
uint8_t x1346 = 2U;
static volatile uint8_t x1347 = 0U;
uint32_t x1393 = UINT32_MAX;
int32_t x1397 = 0;
uint64_t x1461 = UINT64_MAX;
static volatile int64_t x1462 = INT64_MIN;
uint64_t x1463 = 56899100LLU;
int64_t x1464 = 2243221LL;
volatile uint64_t t54 = UINT64_MAX;
int64_t x1535 = INT64_MIN;
uint32_t x1536 = UINT32_MAX;
static volatile int32_t t57 = 14031774;
int16_t x1558 = INT16_MIN;
volatile uint8_t x1559 = 0U;
volatile int64_t x1594 = INT64_MIN;
static uint32_t x1595 = UINT32_MAX;
uint64_t x1596 = 12362995486562803LLU;
int8_t x1603 = INT8_MAX;
int8_t x1604 = INT8_MAX;
int32_t x1639 = INT32_MAX;
static int16_t x1640 = -1;
volatile int64_t x1677 = 34474388404001LL;
int8_t x1679 = -3;
static int16_t x1715 = INT16_MIN;
volatile int32_t t69 = 516156886;
static int64_t x1843 = INT64_MIN;
int32_t t71 = 34736;
static uint32_t x1956 = 147017664U;
volatile uint32_t t73 = 47153673U;
int8_t x1958 = -1;
int16_t x1968 = INT16_MIN;
volatile int8_t x1999 = -1;
volatile uint16_t x2097 = 4175U;
uint16_t x2098 = 862U;
int16_t x2100 = 52;
uint64_t t80 = 954909413204577809LLU;
int8_t x2122 = INT8_MIN;
int32_t x2174 = 123451850;
uint32_t t83 = 2420U;
uint32_t x2205 = UINT32_MAX;
volatile uint32_t t84 = UINT32_MAX;
volatile int32_t t85 = 8;
int16_t x2458 = 6059;
static volatile int8_t x2476 = -1;
static uint64_t x2497 = UINT64_MAX;
volatile uint64_t t90 = UINT64_MAX;
volatile uint32_t x2517 = 31219U;
int16_t x2596 = 0;
uint32_t x2618 = 1071163293U;
int32_t x2619 = INT32_MIN;
int64_t x2620 = INT64_MIN;
uint8_t x2635 = 9U;
int8_t x2652 = 1;
int16_t x2696 = -10;


void f0(void) {
	uint64_t x85 = UINT64_MAX;
	uint16_t x86 = 1614U;
	uint32_t x87 = 184U;
	int8_t x88 = 1;
	uint64_t t0 = 7820218277699LLU;

	t0 = (x85>>(x86&(x87^x88)));

	if (t0 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x93 = 125267U;
	int8_t x94 = INT8_MAX;
	volatile int8_t x95 = 0;
	uint8_t x96 = 5U;
	volatile uint32_t t1 = 7666958U;

	t1 = (x93>>(x94&(x95^x96)));

	if (t1 != 3914U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 7U;
	static int64_t x115 = -63831247008321123LL;
	int8_t x116 = INT8_MIN;
	volatile int32_t t2 = 38;

	t2 = (x113>>(x114&(x115^x116)));

	if (t2 != 2047) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x153 = UINT8_MAX;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MAX;
	volatile int32_t t3 = 10315384;

	t3 = (x153>>(x154&(x155^x156)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x170 = 104U;
	static int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t4 = 0;

	t4 = (x169>>(x170&(x171^x172)));

	if (t4 != 63) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x173 = INT64_MAX;
	static int64_t x175 = INT64_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile int64_t t5 = INT64_MAX;

	t5 = (x173>>(x174&(x175^x176)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x190 = 0;
	int32_t x191 = INT32_MIN;
	static uint64_t t6 = 891522286611LLU;

	t6 = (x189>>(x190&(x191^x192)));

	if (t6 != 51194256180847LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x210 = 2U;
	uint64_t x211 = 1039423673777293LLU;
	static uint16_t x212 = 45U;
	static volatile int32_t t7 = -122;

	t7 = (x209>>(x210&(x211^x212)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x221 = 2035108630U;
	static uint16_t x222 = 194U;
	int32_t x223 = INT32_MAX;

	t8 = (x221>>(x222&(x223^x224)));

	if (t8 != 2035108630U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x233 = INT32_MAX;
	int64_t x234 = INT64_MIN;
	uint16_t x236 = UINT16_MAX;

	t9 = (x233>>(x234&(x235^x236)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x242 = INT64_MIN;
	int16_t x243 = -1;
	int64_t x244 = -1LL;
	volatile int32_t t10 = -6214;

	t10 = (x241>>(x242&(x243^x244)));

	if (t10 != 29) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x269 = UINT64_MAX;
	static uint32_t x270 = 931U;
	volatile int8_t x271 = 1;
	volatile uint32_t x272 = 10863668U;
	static volatile uint64_t t11 = 275621874438677578LLU;

	t11 = (x269>>(x270&(x271^x272)));

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x281 = 38U;
	static int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MAX;
	uint64_t x284 = 310279LLU;
	volatile uint32_t t12 = 173U;

	t12 = (x281>>(x282&(x283^x284)));

	if (t12 != 38U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x321 = 665;
	volatile int32_t x322 = INT32_MIN;
	uint16_t x323 = 9U;
	uint16_t x324 = UINT16_MAX;
	int32_t t13 = -5691;

	t13 = (x321>>(x322&(x323^x324)));

	if (t13 != 665) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x345 = UINT32_MAX;
	int32_t x346 = 107215885;
	volatile int32_t x347 = INT32_MIN;
	volatile int64_t x348 = INT64_MIN;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x345>>(x346&(x347^x348)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = INT8_MIN;
	int16_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x369>>(x370&(x371^x372)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x385 = INT16_MAX;
	uint8_t x387 = 31U;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t16 = -2;

	t16 = (x385>>(x386&(x387^x388)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x409 = 493123148U;
	static uint32_t x410 = 0U;
	static uint8_t x411 = 1U;
	int8_t x412 = INT8_MIN;
	uint32_t t17 = 12082U;

	t17 = (x409>>(x410&(x411^x412)));

	if (t17 != 493123148U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x445 = 145U;
	uint8_t x446 = 53U;
	volatile int8_t x448 = INT8_MAX;
	int32_t t18 = 105;

	t18 = (x445>>(x446&(x447^x448)));

	if (t18 != 145) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x449 = INT32_MAX;
	uint8_t x450 = UINT8_MAX;
	int8_t x452 = -1;
	int32_t t19 = INT32_MAX;

	t19 = (x449>>(x450&(x451^x452)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x457 = 331961LL;
	int32_t x459 = -1;
	int32_t x460 = INT32_MAX;
	int64_t t20 = -846160972984LL;

	t20 = (x457>>(x458&(x459^x460)));

	if (t20 != 331961LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x486 = 3U;
	volatile int64_t x487 = -7584147LL;
	uint16_t x488 = 7557U;

	t21 = (x485>>(x486&(x487^x488)));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x569 = 5;
	static uint8_t x570 = 6U;
	volatile uint64_t x572 = 27045491LLU;
	volatile int32_t t22 = -2162077;

	t22 = (x569>>(x570&(x571^x572)));

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x611 = -5964385;
	int32_t t23 = -2;

	t23 = (x609>>(x610&(x611^x612)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x614 = 3;
	static int8_t x616 = INT8_MIN;
	int64_t t24 = -8LL;

	t24 = (x613>>(x614&(x615^x616)));

	if (t24 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x621 = 6383U;
	static uint32_t x623 = 1257U;
	int16_t x624 = INT16_MAX;
	static volatile int32_t t25 = 78276;

	t25 = (x621>>(x622&(x623^x624)));

	if (t25 != 6383) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x661 = 7156937LLU;
	int16_t x662 = 58;
	int64_t x663 = -1LL;
	volatile int8_t x664 = -1;
	volatile uint64_t t26 = 954074417301390LLU;

	t26 = (x661>>(x662&(x663^x664)));

	if (t26 != 7156937LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x689 = 4U;
	static int32_t x690 = INT32_MIN;
	uint16_t x691 = 320U;
	int32_t x692 = 328;
	static uint32_t t27 = 180U;

	t27 = (x689>>(x690&(x691^x692)));

	if (t27 != 4U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x754 = 0;
	int32_t x755 = -1;
	int32_t x756 = INT32_MAX;

	t28 = (x753>>(x754&(x755^x756)));

	if (t28 != 41) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x813 = 1633681640525441LLU;
	static volatile int8_t x815 = -1;
	int8_t x816 = -2;
	uint64_t t29 = 175346959LLU;

	t29 = (x813>>(x814&(x815^x816)));

	if (t29 != 816840820262720LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x825 = INT16_MAX;
	uint8_t x826 = 13U;
	int64_t x828 = INT64_MIN;
	volatile int32_t t30 = -39;

	t30 = (x825>>(x826&(x827^x828)));

	if (t30 != 16383) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x873 = INT8_MAX;
	uint16_t x874 = 0U;
	int16_t x875 = -1;
	uint32_t x876 = UINT32_MAX;

	t31 = (x873>>(x874&(x875^x876)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x877 = 1;
	uint16_t x878 = 7U;
	int8_t x879 = -37;
	static uint32_t x880 = 14948U;
	volatile int32_t t32 = -1361;

	t32 = (x877>>(x878&(x879^x880)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x913 = 3LLU;
	int8_t x914 = 47;
	int16_t x915 = -1;
	int64_t x916 = 12031033782LL;
	uint64_t t33 = 11296385870300LLU;

	t33 = (x913>>(x914&(x915^x916)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x926 = UINT64_MAX;
	int64_t x927 = INT64_MAX;
	uint64_t t34 = 9329LLU;

	t34 = (x925>>(x926&(x927^x928)));

	if (t34 != 24653LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x945 = UINT8_MAX;
	volatile uint32_t x946 = 1296U;

	t35 = (x945>>(x946&(x947^x948)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x949 = UINT8_MAX;
	uint8_t x950 = 7U;
	uint32_t x952 = 260655U;
	static volatile int32_t t36 = -582;

	t36 = (x949>>(x950&(x951^x952)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x981 = 4535522729516088397LLU;
	int32_t x982 = INT32_MIN;
	int64_t x983 = -741218LL;
	int32_t x984 = INT32_MIN;
	uint64_t t37 = 22946268203LLU;

	t37 = (x981>>(x982&(x983^x984)));

	if (t37 != 4535522729516088397LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1010 = INT64_MIN;
	static int8_t x1012 = INT8_MIN;
	volatile uint32_t t38 = 951821U;

	t38 = (x1009>>(x1010&(x1011^x1012)));

	if (t38 != 84408U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x1025 = UINT32_MAX;
	uint8_t x1026 = 0U;
	int8_t x1028 = 15;

	t39 = (x1025>>(x1026&(x1027^x1028)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1053 = UINT64_MAX;
	volatile uint8_t x1054 = UINT8_MAX;
	volatile uint8_t x1055 = 2U;
	static uint8_t x1056 = 2U;

	t40 = (x1053>>(x1054&(x1055^x1056)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1109 = 1U;
	uint8_t x1110 = 9U;
	static int16_t x1111 = INT16_MIN;
	uint16_t x1112 = 445U;
	volatile int32_t t41 = -28534209;

	t41 = (x1109>>(x1110&(x1111^x1112)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1141 = 106418205144925LLU;
	int32_t x1142 = 1;
	uint64_t t42 = 8737811069489829LLU;

	t42 = (x1141>>(x1142&(x1143^x1144)));

	if (t42 != 106418205144925LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1157 = 58U;
	int8_t x1158 = INT8_MIN;
	int8_t x1159 = INT8_MIN;
	int32_t x1160 = -1;
	volatile int32_t t43 = 27;

	t43 = (x1157>>(x1158&(x1159^x1160)));

	if (t43 != 58) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x1206 = 0;
	static volatile int8_t x1207 = 0;
	int32_t x1208 = INT32_MIN;
	static int32_t t44 = -251743;

	t44 = (x1205>>(x1206&(x1207^x1208)));

	if (t44 != 411484685) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1290 = 1U;
	int8_t x1291 = -1;
	int8_t x1292 = INT8_MIN;
	volatile int64_t t45 = 613980605128598LL;

	t45 = (x1289>>(x1290&(x1291^x1292)));

	if (t45 != 1814153666LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1325 = 24U;
	uint16_t x1326 = 28U;
	uint8_t x1328 = UINT8_MAX;

	t46 = (x1325>>(x1326&(x1327^x1328)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1333 = INT16_MAX;
	int32_t t47 = -1654;

	t47 = (x1333>>(x1334&(x1335^x1336)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1345 = 36;
	static uint64_t x1348 = 41688467874LLU;
	static volatile int32_t t48 = 1558832;

	t48 = (x1345>>(x1346&(x1347^x1348)));

	if (t48 != 9) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x1361 = 1072U;
	int64_t x1362 = 99078LL;
	int8_t x1363 = -1;
	int32_t x1364 = INT32_MAX;
	int32_t t49 = 374642;

	t49 = (x1361>>(x1362&(x1363^x1364)));

	if (t49 != 1072) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1373 = 1699425105LL;
	uint16_t x1374 = 16988U;
	int16_t x1375 = -1;
	int64_t x1376 = -1LL;
	volatile int64_t t50 = 6984375566753035LL;

	t50 = (x1373>>(x1374&(x1375^x1376)));

	if (t50 != 1699425105LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1394 = INT64_MIN;
	int8_t x1395 = INT8_MAX;
	static uint32_t x1396 = 3144U;
	static volatile uint32_t t51 = UINT32_MAX;

	t51 = (x1393>>(x1394&(x1395^x1396)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1398 = 5U;
	static uint16_t x1399 = UINT16_MAX;
	uint16_t x1400 = UINT16_MAX;
	int32_t t52 = 4719;

	t52 = (x1397>>(x1398&(x1399^x1400)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1421 = 0U;
	int64_t x1422 = INT64_MIN;
	uint64_t x1423 = 53127151459LLU;
	int16_t x1424 = 14793;
	int32_t t53 = -9348;

	t53 = (x1421>>(x1422&(x1423^x1424)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {


	t54 = (x1461>>(x1462&(x1463^x1464)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1493 = 220502LL;
	volatile uint64_t x1494 = 938LLU;
	int32_t x1495 = INT32_MAX;
	int32_t x1496 = INT32_MAX;
	int64_t t55 = -13LL;

	t55 = (x1493>>(x1494&(x1495^x1496)));

	if (t55 != 220502LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1509 = 569;
	static int8_t x1510 = 0;
	volatile int32_t x1511 = -739834;
	int16_t x1512 = -891;
	int32_t t56 = 3;

	t56 = (x1509>>(x1510&(x1511^x1512)));

	if (t56 != 569) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x1533 = 1416U;
	uint8_t x1534 = 18U;

	t57 = (x1533>>(x1534&(x1535^x1536)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1541 = UINT32_MAX;
	int64_t x1542 = INT64_MIN;
	int8_t x1543 = INT8_MIN;
	int32_t x1544 = -260635686;
	uint32_t t58 = UINT32_MAX;

	t58 = (x1541>>(x1542&(x1543^x1544)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1557 = UINT64_MAX;
	uint8_t x1560 = 21U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x1557>>(x1558&(x1559^x1560)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x1589 = INT8_MAX;
	static int8_t x1590 = INT8_MAX;
	int16_t x1591 = INT16_MIN;
	int32_t x1592 = INT32_MIN;
	static int32_t t60 = 1;

	t60 = (x1589>>(x1590&(x1591^x1592)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1593 = 46U;
	uint32_t t61 = 709815830U;

	t61 = (x1593>>(x1594&(x1595^x1596)));

	if (t61 != 46U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1601 = 704694375275LL;
	static volatile int32_t x1602 = INT32_MIN;
	volatile int64_t t62 = 84LL;

	t62 = (x1601>>(x1602&(x1603^x1604)));

	if (t62 != 704694375275LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1629 = 66U;
	uint32_t x1630 = 502657U;
	int64_t x1631 = -1LL;
	int64_t x1632 = -1LL;
	static int32_t t63 = 176;

	t63 = (x1629>>(x1630&(x1631^x1632)));

	if (t63 != 66) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1637 = 46U;
	static uint16_t x1638 = UINT16_MAX;
	int32_t t64 = 1270;

	t64 = (x1637>>(x1638&(x1639^x1640)));

	if (t64 != 46) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1653 = INT8_MAX;
	uint32_t x1654 = 5554291U;
	uint64_t x1655 = UINT64_MAX;
	static volatile int32_t x1656 = INT32_MAX;
	static int32_t t65 = -1;

	t65 = (x1653>>(x1654&(x1655^x1656)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1678 = INT32_MAX;
	uint32_t x1680 = UINT32_MAX;
	int64_t t66 = -1LL;

	t66 = (x1677>>(x1678&(x1679^x1680)));

	if (t66 != 8618597101000LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1685 = 13695U;
	static volatile uint32_t x1686 = 23U;
	int16_t x1687 = INT16_MAX;
	int64_t x1688 = INT64_MAX;
	volatile int32_t t67 = 3;

	t67 = (x1685>>(x1686&(x1687^x1688)));

	if (t67 != 13695) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1713 = 393U;
	static volatile int64_t x1714 = 3LL;
	int32_t x1716 = INT32_MIN;
	volatile uint32_t t68 = 133U;

	t68 = (x1713>>(x1714&(x1715^x1716)));

	if (t68 != 393U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1717 = UINT8_MAX;
	uint8_t x1718 = 4U;
	int32_t x1719 = INT32_MIN;
	int8_t x1720 = -1;

	t69 = (x1717>>(x1718&(x1719^x1720)));

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1777 = 4568036LLU;
	int32_t x1778 = INT32_MIN;
	uint16_t x1779 = 1589U;
	int16_t x1780 = 5735;
	static uint64_t t70 = 335843993738345LLU;

	t70 = (x1777>>(x1778&(x1779^x1780)));

	if (t70 != 4568036LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x1841 = 109U;
	static int32_t x1842 = INT32_MIN;
	int64_t x1844 = INT64_MIN;

	t71 = (x1841>>(x1842&(x1843^x1844)));

	if (t71 != 109) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1921 = 57U;
	int32_t x1922 = INT32_MIN;
	int8_t x1923 = INT8_MAX;
	int8_t x1924 = INT8_MAX;
	static uint32_t t72 = 20052595U;

	t72 = (x1921>>(x1922&(x1923^x1924)));

	if (t72 != 57U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x1953 = 77327U;
	int64_t x1954 = INT64_MIN;
	static uint64_t x1955 = 838606911708827LLU;

	t73 = (x1953>>(x1954&(x1955^x1956)));

	if (t73 != 77327U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x1957 = UINT16_MAX;
	uint16_t x1959 = 26U;
	uint16_t x1960 = 4U;
	static int32_t t74 = -110;

	t74 = (x1957>>(x1958&(x1959^x1960)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x1965 = 20;
	static int32_t x1966 = INT32_MIN;
	int8_t x1967 = -63;
	static volatile int32_t t75 = 4;

	t75 = (x1965>>(x1966&(x1967^x1968)));

	if (t75 != 20) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1973 = 1;
	int8_t x1974 = 0;
	int16_t x1975 = INT16_MIN;
	volatile uint16_t x1976 = 45U;
	static int32_t t76 = 15;

	t76 = (x1973>>(x1974&(x1975^x1976)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x1997 = 66;
	int16_t x1998 = INT16_MIN;
	volatile int8_t x2000 = INT8_MIN;
	volatile int32_t t77 = 55420982;

	t77 = (x1997>>(x1998&(x1999^x2000)));

	if (t77 != 66) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x2049 = 8187;
	int8_t x2050 = 6;
	int16_t x2051 = -16;
	int16_t x2052 = -1;
	static volatile int32_t t78 = 1532;

	t78 = (x2049>>(x2050&(x2051^x2052)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2099 = -965473;
	volatile int32_t t79 = 305;

	t79 = (x2097>>(x2098&(x2099^x2100)));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2101 = 105617573LLU;
	int64_t x2102 = INT64_MIN;
	int8_t x2103 = 3;
	uint8_t x2104 = 60U;

	t80 = (x2101>>(x2102&(x2103^x2104)));

	if (t80 != 105617573LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x2121 = 1647756U;
	static int8_t x2123 = -1;
	int16_t x2124 = -1;
	volatile uint32_t t81 = 4356U;

	t81 = (x2121>>(x2122&(x2123^x2124)));

	if (t81 != 1647756U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2145 = 4656039LLU;
	uint32_t x2146 = 2144464394U;
	uint32_t x2147 = 39U;
	int16_t x2148 = 2;
	static uint64_t t82 = 1805815679614LLU;

	t82 = (x2145>>(x2146&(x2147^x2148)));

	if (t82 != 4656039LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2173 = 15349U;
	uint32_t x2175 = UINT32_MAX;
	int8_t x2176 = -1;

	t83 = (x2173>>(x2174&(x2175^x2176)));

	if (t83 != 15349U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2206 = INT16_MIN;
	uint32_t x2207 = UINT32_MAX;
	int8_t x2208 = INT8_MIN;

	t84 = (x2205>>(x2206&(x2207^x2208)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2209 = 0;
	uint16_t x2210 = UINT16_MAX;
	int8_t x2211 = -3;
	static volatile int32_t x2212 = INT32_MAX;

	t85 = (x2209>>(x2210&(x2211^x2212)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x2309 = 565186U;
	int32_t x2310 = 8813;
	static int64_t x2311 = INT64_MAX;
	int32_t x2312 = -1;
	uint32_t t86 = 19U;

	t86 = (x2309>>(x2310&(x2311^x2312)));

	if (t86 != 565186U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2321 = INT32_MAX;
	int64_t x2322 = INT64_MIN;
	int16_t x2323 = INT16_MIN;
	static volatile int32_t x2324 = -1761613;
	static volatile int32_t t87 = INT32_MAX;

	t87 = (x2321>>(x2322&(x2323^x2324)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2457 = 3052549374LLU;
	volatile int64_t x2459 = INT64_MIN;
	uint8_t x2460 = 24U;
	uint64_t t88 = 2093570LLU;

	t88 = (x2457>>(x2458&(x2459^x2460)));

	if (t88 != 11924020LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2473 = 927774U;
	static volatile int64_t x2474 = -4181092956LL;
	static int32_t x2475 = -1;
	static uint32_t t89 = 353512U;

	t89 = (x2473>>(x2474&(x2475^x2476)));

	if (t89 != 927774U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2498 = 35909U;
	int32_t x2499 = 2;
	int32_t x2500 = INT32_MIN;

	t90 = (x2497>>(x2498&(x2499^x2500)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2518 = 1;
	volatile uint16_t x2519 = 25U;
	static uint8_t x2520 = UINT8_MAX;
	static uint32_t t91 = 3U;

	t91 = (x2517>>(x2518&(x2519^x2520)));

	if (t91 != 31219U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2593 = 59964096LLU;
	int32_t x2594 = 1;
	int32_t x2595 = 772332934;
	static volatile uint64_t t92 = 794928752326154LLU;

	t92 = (x2593>>(x2594&(x2595^x2596)));

	if (t92 != 59964096LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2617 = 600LL;
	volatile int64_t t93 = 1026667252LL;

	t93 = (x2617>>(x2618&(x2619^x2620)));

	if (t93 != 600LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2633 = 56072443U;
	uint16_t x2634 = 1093U;
	volatile uint16_t x2636 = 4110U;
	volatile uint32_t t94 = 1134078U;

	t94 = (x2633>>(x2634&(x2635^x2636)));

	if (t94 != 1752263U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x2641 = 40479839U;
	static int32_t x2642 = 6816173;
	int16_t x2643 = -1;
	volatile int8_t x2644 = -2;
	volatile uint32_t t95 = 221U;

	t95 = (x2641>>(x2642&(x2643^x2644)));

	if (t95 != 20239919U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2649 = 110540;
	volatile uint64_t x2650 = 31LLU;
	static int64_t x2651 = INT64_MAX;
	volatile int32_t t96 = 53831;

	t96 = (x2649>>(x2650&(x2651^x2652)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2661 = 475U;
	volatile uint16_t x2662 = 0U;
	static int32_t x2663 = INT32_MIN;
	static uint64_t x2664 = 7828364543045LLU;
	volatile int32_t t97 = 241619;

	t97 = (x2661>>(x2662&(x2663^x2664)));

	if (t97 != 475) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x2693 = 2;
	volatile int8_t x2694 = -1;
	static uint64_t x2695 = UINT64_MAX;
	static int32_t t98 = -1808709;

	t98 = (x2693>>(x2694&(x2695^x2696)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2709 = 9;
	volatile int64_t x2710 = INT64_MIN;
	int32_t x2711 = -1;
	int32_t x2712 = -1;
	volatile int32_t t99 = 375174132;

	t99 = (x2709>>(x2710&(x2711^x2712)));

	if (t99 != 9) { NG(); } else { ; }
	
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

