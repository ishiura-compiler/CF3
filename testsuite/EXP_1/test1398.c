#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x13 = 118U;
static uint64_t x22 = 11725177916059677LLU;
volatile int16_t x90 = 1;
int64_t x113 = 237337002295285177LL;
uint16_t x116 = 0U;
int8_t x153 = INT8_MIN;
uint64_t x154 = 551504676584977417LLU;
int8_t x168 = 2;
volatile int8_t x262 = -1;
int32_t x291 = INT32_MIN;
static volatile int32_t t8 = -30451;
int16_t x374 = -1;
uint8_t x376 = 63U;
int8_t x379 = INT8_MIN;
static volatile uint16_t x380 = 17U;
int16_t x421 = 22;
static uint16_t x433 = UINT16_MAX;
volatile uint16_t x498 = 4U;
volatile int32_t t15 = 89546719;
int32_t x565 = INT32_MIN;
uint32_t x573 = UINT32_MAX;
static int8_t x605 = INT8_MIN;
int16_t x608 = 1;
int8_t x718 = 1;
volatile int32_t t22 = 182;
volatile int32_t t24 = -1524309;
volatile int32_t t25 = 1;
int32_t x924 = 0;
static int8_t x958 = 6;
int32_t x975 = INT32_MIN;
static uint32_t x999 = 268434296U;
int8_t x1112 = 54;
uint8_t x1124 = 0U;
volatile int32_t t33 = -4;
uint16_t x1133 = 5U;
int64_t x1171 = INT64_MAX;
int16_t x1178 = -1;
int8_t x1230 = INT8_MAX;
volatile int32_t t38 = -431201220;
volatile uint64_t x1242 = UINT64_MAX;
uint16_t x1244 = 1U;
volatile int64_t x1289 = -1LL;
int32_t t42 = 0;
uint8_t x1314 = 17U;
static int16_t x1315 = INT16_MIN;
static uint8_t x1316 = 22U;
volatile int8_t x1325 = INT8_MAX;
volatile int32_t t46 = -177249;
int64_t x1354 = INT64_MAX;
static volatile int16_t x1405 = 2290;
static int64_t x1433 = -1LL;
uint8_t x1512 = 0U;
int16_t x1626 = INT16_MIN;
static int8_t x1628 = 0;
uint8_t x1649 = UINT8_MAX;
volatile int16_t x1693 = -1;
static int16_t x1754 = -1;
uint8_t x1756 = 10U;
volatile int32_t t65 = -1990;
uint64_t x1809 = 115690398733LLU;
int8_t x1810 = 28;
int32_t t66 = -285070;
static volatile uint8_t x1828 = 0U;
volatile int64_t t67 = -23174488LL;
volatile uint8_t x1883 = UINT8_MAX;
static uint64_t x1951 = 2831721865457509LLU;
volatile int32_t x1977 = -1;
int32_t t72 = 6224858;
uint16_t x2280 = 28U;
uint64_t t76 = 29938285LLU;
int64_t x2309 = INT64_MIN;
uint64_t x2310 = 38496894667828LLU;
volatile int32_t t78 = 80;
uint16_t x2326 = 9726U;
volatile uint32_t t79 = 13731371U;
static int32_t x2349 = INT32_MAX;
int16_t x2358 = INT16_MAX;
volatile int32_t t83 = -13217;
uint32_t x2413 = 127U;
int64_t x2415 = INT64_MIN;
uint16_t x2422 = UINT16_MAX;
int32_t x2536 = 1;
int32_t x2554 = -150364781;
volatile int32_t x2555 = INT32_MIN;
static uint16_t x2624 = 52U;
uint8_t x2656 = 10U;
int16_t x2676 = 1;
static int32_t t91 = -66;
uint8_t x2702 = UINT8_MAX;
volatile int16_t x2704 = 2;
uint8_t x2732 = 3U;
int8_t x2752 = 0;
int64_t x2773 = INT64_MIN;
static volatile int32_t x2776 = 1;
static int64_t x2935 = INT64_MIN;
int64_t x3013 = INT64_MIN;
int32_t x3014 = INT32_MIN;
uint16_t x3016 = 2U;
int32_t t99 = 392206556;


void f0(void) {
	uint16_t x14 = 4038U;
	static volatile int64_t x15 = INT64_MIN;
	static volatile uint8_t x16 = 24U;
	volatile int64_t t0 = 276598786560688772LL;

	t0 = (((x13<x14)/x15)>>x16);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = -56;
	int16_t x23 = INT16_MIN;
	static volatile uint8_t x24 = 6U;
	int32_t t1 = 1220296;

	t1 = (((x21<x22)/x23)>>x24);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x89 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	static int8_t x92 = 3;
	int32_t t2 = -8;

	t2 = (((x89<x90)/x91)>>x92);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x114 = 795U;
	uint64_t x115 = 357350LLU;
	volatile uint64_t t3 = 493595027LLU;

	t3 = (((x113<x114)/x115)>>x116);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x155 = -1;
	uint8_t x156 = 12U;
	volatile int32_t t4 = 2;

	t4 = (((x153<x154)/x155)>>x156);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = 18;
	uint32_t x167 = 814363163U;
	uint32_t t5 = 837U;

	t5 = (((x165<x166)/x167)>>x168);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x181 = INT32_MIN;
	uint64_t x182 = UINT64_MAX;
	static int16_t x183 = 28;
	int16_t x184 = 24;
	volatile int32_t t6 = 3195;

	t6 = (((x181<x182)/x183)>>x184);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x261 = UINT64_MAX;
	uint8_t x263 = 2U;
	int8_t x264 = 1;
	static int32_t t7 = 2592;

	t7 = (((x261<x262)/x263)>>x264);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x289 = UINT64_MAX;
	static uint64_t x290 = 1LLU;
	int16_t x292 = 6;

	t8 = (((x289<x290)/x291)>>x292);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x373 = 3;
	int64_t x375 = INT64_MAX;
	int64_t t9 = -114471659139LL;

	t9 = (((x373<x374)/x375)>>x376);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x377 = 9504;
	int16_t x378 = INT16_MAX;
	int32_t t10 = 958;

	t10 = (((x377<x378)/x379)>>x380);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x409 = INT64_MAX;
	int16_t x410 = -2;
	uint16_t x411 = UINT16_MAX;
	static uint16_t x412 = 4U;
	int32_t t11 = 468;

	t11 = (((x409<x410)/x411)>>x412);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x422 = -1;
	uint8_t x423 = UINT8_MAX;
	static uint16_t x424 = 11U;
	volatile int32_t t12 = 1015;

	t12 = (((x421<x422)/x423)>>x424);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x425 = INT16_MAX;
	int16_t x426 = -1;
	static int16_t x427 = INT16_MIN;
	int8_t x428 = 1;
	int32_t t13 = 1222;

	t13 = (((x425<x426)/x427)>>x428);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x434 = -1;
	static int64_t x435 = 899076561441099LL;
	uint8_t x436 = 17U;
	volatile int64_t t14 = -10LL;

	t14 = (((x433<x434)/x435)>>x436);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x497 = INT32_MIN;
	uint8_t x499 = UINT8_MAX;
	volatile uint16_t x500 = 1U;

	t15 = (((x497<x498)/x499)>>x500);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x537 = 227U;
	int32_t x538 = -133057;
	int64_t x539 = -1LL;
	uint32_t x540 = 8U;
	volatile int64_t t16 = -781196135729094LL;

	t16 = (((x537<x538)/x539)>>x540);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x566 = 24157591671971LL;
	uint8_t x567 = 1U;
	int32_t x568 = 14;
	static int32_t t17 = -1;

	t17 = (((x565<x566)/x567)>>x568);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x574 = -1;
	uint8_t x575 = UINT8_MAX;
	uint8_t x576 = 13U;
	volatile int32_t t18 = 525514528;

	t18 = (((x573<x574)/x575)>>x576);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x606 = 28014U;
	static int64_t x607 = INT64_MIN;
	static volatile int64_t t19 = -10614992744LL;

	t19 = (((x605<x606)/x607)>>x608);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x713 = UINT8_MAX;
	volatile int8_t x714 = -1;
	int64_t x715 = -1LL;
	int16_t x716 = 21;
	int64_t t20 = -8750LL;

	t20 = (((x713<x714)/x715)>>x716);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x717 = 18368U;
	int64_t x719 = 591LL;
	int16_t x720 = 0;
	int64_t t21 = -4LL;

	t21 = (((x717<x718)/x719)>>x720);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x765 = -1LL;
	volatile int8_t x766 = 1;
	int32_t x767 = INT32_MIN;
	int32_t x768 = 30;

	t22 = (((x765<x766)/x767)>>x768);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x781 = INT64_MIN;
	static int16_t x782 = INT16_MAX;
	static uint8_t x783 = UINT8_MAX;
	uint8_t x784 = 0U;
	static int32_t t23 = 50;

	t23 = (((x781<x782)/x783)>>x784);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x841 = UINT64_MAX;
	uint8_t x842 = 19U;
	volatile int32_t x843 = INT32_MIN;
	int8_t x844 = 0;

	t24 = (((x841<x842)/x843)>>x844);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x917 = INT16_MIN;
	int64_t x918 = INT64_MAX;
	int8_t x919 = 3;
	int8_t x920 = 4;

	t25 = (((x917<x918)/x919)>>x920);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x921 = 8578;
	uint16_t x922 = UINT16_MAX;
	static int32_t x923 = -3;
	volatile int32_t t26 = 392749187;

	t26 = (((x921<x922)/x923)>>x924);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x957 = INT16_MAX;
	volatile uint64_t x959 = UINT64_MAX;
	int8_t x960 = 0;
	uint64_t t27 = 1391901327030486LLU;

	t27 = (((x957<x958)/x959)>>x960);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x961 = -1LL;
	int64_t x962 = -14444LL;
	int32_t x963 = -1;
	volatile int8_t x964 = 0;
	volatile int32_t t28 = -1654019;

	t28 = (((x961<x962)/x963)>>x964);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x973 = 4109076LL;
	uint32_t x974 = UINT32_MAX;
	int64_t x976 = 0LL;
	static int32_t t29 = -4;

	t29 = (((x973<x974)/x975)>>x976);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x997 = UINT64_MAX;
	static int32_t x998 = 920484911;
	uint16_t x1000 = 2U;
	volatile uint32_t t30 = 5075U;

	t30 = (((x997<x998)/x999)>>x1000);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1101 = 287378406LLU;
	uint64_t x1102 = 3012977683LLU;
	uint8_t x1103 = 78U;
	int8_t x1104 = 30;
	static volatile int32_t t31 = 87563;

	t31 = (((x1101<x1102)/x1103)>>x1104);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1109 = 6850U;
	int64_t x1110 = -1LL;
	uint64_t x1111 = UINT64_MAX;
	uint64_t t32 = 8442409985LLU;

	t32 = (((x1109<x1110)/x1111)>>x1112);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1121 = 14190366U;
	volatile int32_t x1122 = -1;
	volatile int8_t x1123 = 1;

	t33 = (((x1121<x1122)/x1123)>>x1124);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1134 = INT8_MIN;
	int8_t x1135 = INT8_MIN;
	uint64_t x1136 = 1LLU;
	int32_t t34 = -1;

	t34 = (((x1133<x1134)/x1135)>>x1136);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1169 = 64874LLU;
	volatile uint16_t x1170 = UINT16_MAX;
	uint64_t x1172 = 1LLU;
	static volatile int64_t t35 = 10604570840826LL;

	t35 = (((x1169<x1170)/x1171)>>x1172);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1177 = 0;
	int32_t x1179 = INT32_MIN;
	static int64_t x1180 = 1LL;
	int32_t t36 = -1903;

	t36 = (((x1177<x1178)/x1179)>>x1180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1221 = 10320205LLU;
	int32_t x1222 = 3342199;
	int64_t x1223 = -9850LL;
	static int8_t x1224 = 4;
	volatile int64_t t37 = 10430773LL;

	t37 = (((x1221<x1222)/x1223)>>x1224);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1229 = 21;
	static int8_t x1231 = 11;
	int64_t x1232 = 0LL;

	t38 = (((x1229<x1230)/x1231)>>x1232);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1241 = UINT64_MAX;
	int64_t x1243 = -441763178782592250LL;
	volatile int64_t t39 = 445661309931904LL;

	t39 = (((x1241<x1242)/x1243)>>x1244);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1277 = -1;
	int16_t x1278 = INT16_MIN;
	static int16_t x1279 = 5187;
	static uint32_t x1280 = 27U;
	int32_t t40 = -145989010;

	t40 = (((x1277<x1278)/x1279)>>x1280);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x1281 = 0;
	int64_t x1282 = -11211773LL;
	uint32_t x1283 = 178256250U;
	int8_t x1284 = 0;
	static volatile uint32_t t41 = 16850154U;

	t41 = (((x1281<x1282)/x1283)>>x1284);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x1290 = 447846072302286309LLU;
	uint8_t x1291 = 2U;
	uint8_t x1292 = 1U;

	t42 = (((x1289<x1290)/x1291)>>x1292);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1297 = INT64_MAX;
	uint64_t x1298 = 4107857LLU;
	volatile int64_t x1299 = -2431LL;
	uint8_t x1300 = 6U;
	volatile int64_t t43 = 17LL;

	t43 = (((x1297<x1298)/x1299)>>x1300);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1313 = 3371130260LL;
	static volatile int32_t t44 = 17601353;

	t44 = (((x1313<x1314)/x1315)>>x1316);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x1326 = INT8_MAX;
	int8_t x1327 = 3;
	volatile uint32_t x1328 = 21U;
	volatile int32_t t45 = -78939;

	t45 = (((x1325<x1326)/x1327)>>x1328);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x1329 = UINT64_MAX;
	uint64_t x1330 = UINT64_MAX;
	uint16_t x1331 = 25U;
	uint8_t x1332 = 0U;

	t46 = (((x1329<x1330)/x1331)>>x1332);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1349 = 1;
	uint64_t x1350 = 223147846902LLU;
	volatile uint64_t x1351 = 79840LLU;
	uint16_t x1352 = 10U;
	uint64_t t47 = 32316555815777LLU;

	t47 = (((x1349<x1350)/x1351)>>x1352);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1353 = -1;
	int64_t x1355 = -572650620LL;
	int8_t x1356 = 10;
	volatile int64_t t48 = 60737607557LL;

	t48 = (((x1353<x1354)/x1355)>>x1356);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1377 = UINT16_MAX;
	int16_t x1378 = 475;
	int32_t x1379 = INT32_MAX;
	uint32_t x1380 = 25U;
	int32_t t49 = 49297282;

	t49 = (((x1377<x1378)/x1379)>>x1380);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1406 = INT64_MIN;
	uint64_t x1407 = 5712829182LLU;
	volatile int8_t x1408 = 1;
	uint64_t t50 = 19002161LLU;

	t50 = (((x1405<x1406)/x1407)>>x1408);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1434 = INT8_MAX;
	int32_t x1435 = -4550962;
	uint64_t x1436 = 14LLU;
	volatile int32_t t51 = 317;

	t51 = (((x1433<x1434)/x1435)>>x1436);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1437 = -15;
	static int32_t x1438 = INT32_MIN;
	volatile int64_t x1439 = INT64_MIN;
	volatile uint32_t x1440 = 62U;
	volatile int64_t t52 = -582288018854529758LL;

	t52 = (((x1437<x1438)/x1439)>>x1440);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1457 = INT16_MIN;
	static uint32_t x1458 = 22874940U;
	static volatile int16_t x1459 = 1;
	int64_t x1460 = 3LL;
	volatile int32_t t53 = -423890064;

	t53 = (((x1457<x1458)/x1459)>>x1460);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x1489 = 5;
	int64_t x1490 = -6296LL;
	static int16_t x1491 = -81;
	int8_t x1492 = 2;
	volatile int32_t t54 = 3715102;

	t54 = (((x1489<x1490)/x1491)>>x1492);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1509 = 89U;
	volatile uint32_t x1510 = UINT32_MAX;
	volatile uint64_t x1511 = 26094989673044LLU;
	uint64_t t55 = 179714262119LLU;

	t55 = (((x1509<x1510)/x1511)>>x1512);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x1513 = 749122U;
	uint32_t x1514 = UINT32_MAX;
	int64_t x1515 = -221790LL;
	uint8_t x1516 = 9U;
	volatile int64_t t56 = -90036567071782LL;

	t56 = (((x1513<x1514)/x1515)>>x1516);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1569 = 89205;
	volatile uint8_t x1570 = 51U;
	int8_t x1571 = -1;
	uint16_t x1572 = 4U;
	volatile int32_t t57 = -196627;

	t57 = (((x1569<x1570)/x1571)>>x1572);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1625 = INT64_MIN;
	uint64_t x1627 = 3954647362602100212LLU;
	volatile uint64_t t58 = 1LLU;

	t58 = (((x1625<x1626)/x1627)>>x1628);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1645 = 39U;
	volatile int32_t x1646 = INT32_MAX;
	static int64_t x1647 = -1032964LL;
	uint8_t x1648 = 0U;
	volatile int64_t t59 = -1105527005338612LL;

	t59 = (((x1645<x1646)/x1647)>>x1648);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1650 = INT64_MAX;
	uint32_t x1651 = UINT32_MAX;
	static volatile uint8_t x1652 = 1U;
	uint32_t t60 = 389U;

	t60 = (((x1649<x1650)/x1651)>>x1652);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x1661 = -1LL;
	volatile int16_t x1662 = -3708;
	volatile int32_t x1663 = 20;
	volatile uint8_t x1664 = 9U;
	static int32_t t61 = 98427;

	t61 = (((x1661<x1662)/x1663)>>x1664);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1694 = -19;
	int32_t x1695 = -1;
	volatile uint8_t x1696 = 2U;
	volatile int32_t t62 = -61799;

	t62 = (((x1693<x1694)/x1695)>>x1696);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1737 = INT64_MIN;
	static int8_t x1738 = -8;
	static uint16_t x1739 = 590U;
	uint16_t x1740 = 8U;
	int32_t t63 = 3534696;

	t63 = (((x1737<x1738)/x1739)>>x1740);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x1753 = -1;
	static uint8_t x1755 = 4U;
	static int32_t t64 = -989445776;

	t64 = (((x1753<x1754)/x1755)>>x1756);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1757 = 3;
	uint32_t x1758 = 6370U;
	int16_t x1759 = INT16_MAX;
	int32_t x1760 = 17;

	t65 = (((x1757<x1758)/x1759)>>x1760);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x1811 = 13713U;
	int8_t x1812 = 2;

	t66 = (((x1809<x1810)/x1811)>>x1812);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1825 = UINT32_MAX;
	uint64_t x1826 = 20345380LLU;
	int64_t x1827 = INT64_MIN;

	t67 = (((x1825<x1826)/x1827)>>x1828);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x1881 = 45LL;
	static volatile int64_t x1882 = -1LL;
	int8_t x1884 = 0;
	static int32_t t68 = -1;

	t68 = (((x1881<x1882)/x1883)>>x1884);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1929 = INT8_MIN;
	int32_t x1930 = INT32_MIN;
	int8_t x1931 = INT8_MAX;
	uint8_t x1932 = 0U;
	volatile int32_t t69 = 150729;

	t69 = (((x1929<x1930)/x1931)>>x1932);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1949 = 866925377183318904LL;
	uint8_t x1950 = 45U;
	static int8_t x1952 = 1;
	static volatile uint64_t t70 = 664815293048890004LLU;

	t70 = (((x1949<x1950)/x1951)>>x1952);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x1953 = -1LL;
	uint16_t x1954 = 36U;
	volatile int64_t x1955 = INT64_MIN;
	int8_t x1956 = 53;
	static int64_t t71 = -28640096891822LL;

	t71 = (((x1953<x1954)/x1955)>>x1956);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x1978 = INT32_MIN;
	int32_t x1979 = INT32_MAX;
	uint8_t x1980 = 7U;

	t72 = (((x1977<x1978)/x1979)>>x1980);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x2017 = INT64_MIN;
	uint64_t x2018 = 7655365585LLU;
	int16_t x2019 = -3;
	static volatile uint16_t x2020 = 0U;
	int32_t t73 = -896186481;

	t73 = (((x2017<x2018)/x2019)>>x2020);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x2057 = 1087LL;
	static uint16_t x2058 = 6525U;
	volatile int32_t x2059 = 151023;
	static volatile int8_t x2060 = 1;
	volatile int32_t t74 = 65211;

	t74 = (((x2057<x2058)/x2059)>>x2060);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2113 = -699057;
	static uint32_t x2114 = 607U;
	volatile uint64_t x2115 = 21268125339LLU;
	volatile uint8_t x2116 = 0U;
	volatile uint64_t t75 = 239223634LLU;

	t75 = (((x2113<x2114)/x2115)>>x2116);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2277 = -16;
	uint8_t x2278 = 9U;
	uint64_t x2279 = 133150784520LLU;

	t76 = (((x2277<x2278)/x2279)>>x2280);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2293 = INT16_MAX;
	volatile int64_t x2294 = -994666380LL;
	int64_t x2295 = -1LL;
	static uint8_t x2296 = 46U;
	static int64_t t77 = -7739934LL;

	t77 = (((x2293<x2294)/x2295)>>x2296);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2311 = 1U;
	uint16_t x2312 = 2U;

	t78 = (((x2309<x2310)/x2311)>>x2312);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x2325 = INT32_MIN;
	volatile uint32_t x2327 = UINT32_MAX;
	static int32_t x2328 = 0;

	t79 = (((x2325<x2326)/x2327)>>x2328);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2350 = 3851704341272962995LLU;
	int32_t x2351 = INT32_MAX;
	static int32_t x2352 = 24;
	int32_t t80 = 40905;

	t80 = (((x2349<x2350)/x2351)>>x2352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2357 = -1;
	static volatile uint64_t x2359 = UINT64_MAX;
	uint8_t x2360 = 23U;
	volatile uint64_t t81 = 854LLU;

	t81 = (((x2357<x2358)/x2359)>>x2360);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2365 = 5476852LL;
	int8_t x2366 = 1;
	int64_t x2367 = INT64_MAX;
	volatile uint16_t x2368 = 4U;
	volatile int64_t t82 = 225518LL;

	t82 = (((x2365<x2366)/x2367)>>x2368);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2405 = INT64_MIN;
	int8_t x2406 = INT8_MAX;
	int8_t x2407 = 7;
	uint64_t x2408 = 10LLU;

	t83 = (((x2405<x2406)/x2407)>>x2408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2414 = INT32_MIN;
	uint16_t x2416 = 0U;
	int64_t t84 = 92070LL;

	t84 = (((x2413<x2414)/x2415)>>x2416);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2421 = UINT8_MAX;
	int32_t x2423 = 20012;
	static int8_t x2424 = 5;
	static volatile int32_t t85 = 2625230;

	t85 = (((x2421<x2422)/x2423)>>x2424);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2433 = 9672956786924LL;
	uint8_t x2434 = UINT8_MAX;
	int16_t x2435 = -13;
	int8_t x2436 = 0;
	volatile int32_t t86 = 119119126;

	t86 = (((x2433<x2434)/x2435)>>x2436);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2533 = -664136044272687440LL;
	volatile int16_t x2534 = INT16_MIN;
	int64_t x2535 = INT64_MAX;
	volatile int64_t t87 = 464038179063LL;

	t87 = (((x2533<x2534)/x2535)>>x2536);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2553 = -1LL;
	uint8_t x2556 = 24U;
	static int32_t t88 = 185;

	t88 = (((x2553<x2554)/x2555)>>x2556);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2621 = INT8_MIN;
	uint8_t x2622 = UINT8_MAX;
	static uint64_t x2623 = 12994792901LLU;
	volatile uint64_t t89 = 6149804LLU;

	t89 = (((x2621<x2622)/x2623)>>x2624);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2653 = -12;
	int32_t x2654 = 24;
	int32_t x2655 = -1541272;
	volatile int32_t t90 = -21367616;

	t90 = (((x2653<x2654)/x2655)>>x2656);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2673 = -1;
	static volatile int16_t x2674 = -1;
	uint16_t x2675 = UINT16_MAX;

	t91 = (((x2673<x2674)/x2675)>>x2676);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2701 = -3571661;
	uint32_t x2703 = 10846U;
	uint32_t t92 = 27187U;

	t92 = (((x2701<x2702)/x2703)>>x2704);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x2729 = INT64_MIN;
	uint64_t x2730 = UINT64_MAX;
	int8_t x2731 = INT8_MIN;
	volatile int32_t t93 = 2;

	t93 = (((x2729<x2730)/x2731)>>x2732);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2749 = INT32_MAX;
	uint64_t x2750 = 111889606814LLU;
	int64_t x2751 = 471872184LL;
	volatile int64_t t94 = -987391LL;

	t94 = (((x2749<x2750)/x2751)>>x2752);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2774 = 63U;
	volatile uint64_t x2775 = 3408LLU;
	volatile uint64_t t95 = 3351456671LLU;

	t95 = (((x2773<x2774)/x2775)>>x2776);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x2853 = UINT32_MAX;
	static int32_t x2854 = 3997200;
	static int32_t x2855 = 601670;
	uint8_t x2856 = 31U;
	volatile int32_t t96 = -112;

	t96 = (((x2853<x2854)/x2855)>>x2856);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x2933 = INT8_MIN;
	int64_t x2934 = -1LL;
	uint16_t x2936 = 44U;
	int64_t t97 = -1LL;

	t97 = (((x2933<x2934)/x2935)>>x2936);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x2957 = INT32_MIN;
	int64_t x2958 = -1LL;
	int8_t x2959 = INT8_MIN;
	int32_t x2960 = 1;
	static int32_t t98 = 196;

	t98 = (((x2957<x2958)/x2959)>>x2960);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3015 = INT16_MIN;

	t99 = (((x3013<x3014)/x3015)>>x3016);

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

