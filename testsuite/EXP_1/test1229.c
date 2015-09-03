#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x44 = 1;
int8_t x127 = INT8_MIN;
int32_t t3 = 543;
int8_t x149 = INT8_MIN;
volatile int16_t x152 = 13;
uint32_t x189 = 53U;
static uint32_t x190 = 76226U;
static int8_t x260 = 27;
int16_t x269 = INT16_MIN;
uint8_t x272 = 3U;
int64_t t7 = -111720925LL;
static uint64_t x397 = 600109706542LLU;
static volatile int8_t x474 = 1;
uint8_t x476 = 1U;
volatile int16_t x562 = 2;
static int32_t x563 = -1;
volatile uint64_t x577 = 125922LLU;
static int32_t t17 = -6467;
uint8_t x628 = 1U;
volatile int64_t t22 = -4202516LL;
static volatile uint32_t x717 = 126073U;
volatile uint32_t x719 = 7U;
uint32_t t23 = 13442622U;
static int32_t x779 = -1;
int32_t t25 = 165182541;
int16_t x799 = INT16_MIN;
volatile int32_t t26 = -582790;
uint16_t x835 = 697U;
static uint8_t x836 = 7U;
int32_t t27 = -1;
uint8_t x843 = 4U;
volatile int8_t x987 = 2;
volatile uint32_t x992 = 1U;
volatile uint16_t x1078 = 4928U;
uint8_t x1080 = 15U;
int32_t t35 = 2372713;
int64_t x1109 = -1LL;
int32_t t36 = -1;
volatile uint16_t x1148 = 1U;
uint16_t x1177 = UINT16_MAX;
int8_t x1180 = 8;
volatile uint32_t t39 = 120934589U;
int8_t x1184 = 20;
volatile int64_t t40 = 512515LL;
uint8_t x1218 = 2U;
int8_t x1225 = 0;
int8_t x1247 = INT8_MIN;
int32_t t43 = -767905;
uint64_t x1251 = 7740LLU;
int32_t x1290 = -1;
int16_t x1301 = -2236;
int8_t x1303 = INT8_MIN;
volatile uint64_t x1327 = 24687073264LLU;
int8_t x1328 = 1;
static int16_t x1329 = INT16_MIN;
int32_t x1330 = INT32_MAX;
volatile int32_t t50 = -13969;
static int16_t x1365 = INT16_MIN;
uint32_t x1431 = 157600853U;
uint32_t x1435 = 117707352U;
static volatile uint32_t t54 = 4U;
volatile int32_t t56 = 23274;
int32_t x1491 = INT32_MIN;
uint32_t x1532 = 4U;
int8_t x1552 = 5;
int32_t x1609 = INT32_MAX;
int32_t x1611 = INT32_MAX;
int16_t x1629 = INT16_MIN;
int32_t t62 = 7046;
uint16_t x1717 = 7U;
uint32_t x1720 = 2U;
static int64_t x1739 = 152855LL;
int64_t x1757 = INT64_MIN;
volatile int64_t t66 = 2993LL;
uint16_t x1777 = 31U;
int32_t x1778 = INT32_MIN;
int64_t x1793 = INT64_MAX;
int16_t x1795 = INT16_MIN;
uint8_t x1796 = 2U;
volatile int64_t x1799 = INT64_MIN;
static int64_t x1873 = INT64_MIN;
volatile int16_t x1897 = INT16_MIN;
uint32_t x1936 = 0U;
volatile uint32_t x1939 = 1084499569U;
uint8_t x1965 = 36U;
uint8_t x1968 = 6U;
uint8_t x1997 = 28U;
int16_t x1999 = INT16_MIN;
int32_t x2000 = 1;
volatile int8_t x2007 = INT8_MIN;
int32_t t76 = 572451;
static int8_t x2013 = INT8_MAX;
int32_t x2014 = INT32_MIN;
int64_t x2079 = INT64_MIN;
static uint16_t x2084 = 8U;
static volatile uint64_t x2157 = UINT64_MAX;
int8_t x2191 = INT8_MIN;
volatile int32_t t83 = -62;
volatile uint64_t t84 = 894014092217LLU;
volatile uint8_t x2270 = UINT8_MAX;
uint32_t x2271 = 960270443U;
static volatile int32_t t86 = 35030;
int8_t x2465 = INT8_MIN;
uint8_t x2552 = 9U;
int8_t x2701 = 4;
static int16_t x2702 = -1;
uint32_t x2704 = 7U;
uint16_t x2755 = UINT16_MAX;
uint16_t x2756 = 0U;
uint32_t x2786 = 3602196U;
static int32_t t97 = -498;
static volatile int8_t x2851 = -1;
static int64_t x2854 = -71630LL;
volatile int32_t x2855 = INT32_MIN;
volatile int32_t t99 = -36;


void f0(void) {
	int64_t x21 = -1LL;
	int64_t x22 = INT64_MIN;
	uint16_t x23 = 2U;
	int8_t x24 = 1;
	volatile int32_t t0 = 615136;

	t0 = (((x21==x22)/x23)>>x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = INT64_MAX;
	int64_t x38 = -117998LL;
	int32_t x39 = 6462;
	uint8_t x40 = 4U;
	static int32_t t1 = 328;

	t1 = (((x37==x38)/x39)>>x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x41 = INT64_MAX;
	int64_t x42 = -6911868754535LL;
	volatile int16_t x43 = INT16_MIN;
	int32_t t2 = 894134;

	t2 = (((x41==x42)/x43)>>x44);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x125 = -1LL;
	volatile int16_t x126 = INT16_MAX;
	uint16_t x128 = 0U;

	t3 = (((x125==x126)/x127)>>x128);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x150 = 8050LLU;
	int16_t x151 = INT16_MIN;
	volatile int32_t t4 = 3688474;

	t4 = (((x149==x150)/x151)>>x152);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x191 = 57856372009LLU;
	volatile uint8_t x192 = 0U;
	volatile uint64_t t5 = 1619919703105LLU;

	t5 = (((x189==x190)/x191)>>x192);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x257 = 30;
	volatile int64_t x258 = -2278875617503317LL;
	uint8_t x259 = 2U;
	volatile int32_t t6 = -310;

	t6 = (((x257==x258)/x259)>>x260);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x270 = 15U;
	volatile int64_t x271 = INT64_MIN;

	t7 = (((x269==x270)/x271)>>x272);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x357 = UINT8_MAX;
	static int32_t x358 = 3;
	uint16_t x359 = 2U;
	uint8_t x360 = 9U;
	int32_t t8 = 23;

	t8 = (((x357==x358)/x359)>>x360);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x398 = 17U;
	volatile int16_t x399 = -1;
	int8_t x400 = 4;
	static int32_t t9 = 12329010;

	t9 = (((x397==x398)/x399)>>x400);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x401 = 319U;
	volatile int64_t x402 = INT64_MIN;
	int64_t x403 = -307754071180867037LL;
	uint8_t x404 = 1U;
	volatile int64_t t10 = 265371LL;

	t10 = (((x401==x402)/x403)>>x404);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x417 = INT8_MIN;
	uint32_t x418 = 313089U;
	static volatile uint16_t x419 = 879U;
	int8_t x420 = 1;
	int32_t t11 = 1346;

	t11 = (((x417==x418)/x419)>>x420);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x465 = INT64_MIN;
	int8_t x466 = -1;
	static int64_t x467 = INT64_MIN;
	int16_t x468 = 63;
	int64_t t12 = 7LL;

	t12 = (((x465==x466)/x467)>>x468);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x473 = INT16_MIN;
	int16_t x475 = -6;
	static volatile int32_t t13 = -1;

	t13 = (((x473==x474)/x475)>>x476);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x505 = 7U;
	uint32_t x506 = 21106U;
	int64_t x507 = INT64_MAX;
	volatile int16_t x508 = 0;
	static int64_t t14 = 43LL;

	t14 = (((x505==x506)/x507)>>x508);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x561 = INT64_MAX;
	uint8_t x564 = 13U;
	volatile int32_t t15 = 14545;

	t15 = (((x561==x562)/x563)>>x564);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x573 = -1;
	int64_t x574 = -1LL;
	int8_t x575 = INT8_MAX;
	uint16_t x576 = 15U;
	int32_t t16 = -75;

	t16 = (((x573==x574)/x575)>>x576);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x578 = 1390852LL;
	int8_t x579 = INT8_MAX;
	uint16_t x580 = 6U;

	t17 = (((x577==x578)/x579)>>x580);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x625 = INT32_MIN;
	int8_t x626 = 0;
	volatile uint64_t x627 = 2521LLU;
	volatile uint64_t t18 = 387823592078LLU;

	t18 = (((x625==x626)/x627)>>x628);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x661 = INT32_MIN;
	int64_t x662 = INT64_MIN;
	int64_t x663 = INT64_MIN;
	uint8_t x664 = 2U;
	volatile int64_t t19 = 113LL;

	t19 = (((x661==x662)/x663)>>x664);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x669 = 10670;
	uint64_t x670 = 1738LLU;
	int16_t x671 = INT16_MIN;
	uint8_t x672 = 3U;
	int32_t t20 = 574786;

	t20 = (((x669==x670)/x671)>>x672);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x681 = 77U;
	volatile int16_t x682 = INT16_MIN;
	volatile int8_t x683 = INT8_MIN;
	volatile uint8_t x684 = 2U;
	volatile int32_t t21 = -2433;

	t21 = (((x681==x682)/x683)>>x684);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x697 = 44453187LLU;
	int64_t x698 = INT64_MIN;
	volatile int64_t x699 = INT64_MIN;
	uint16_t x700 = 17U;

	t22 = (((x697==x698)/x699)>>x700);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x718 = INT64_MIN;
	uint8_t x720 = 1U;

	t23 = (((x717==x718)/x719)>>x720);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x769 = 19U;
	uint8_t x770 = 101U;
	static int32_t x771 = -10861059;
	volatile int16_t x772 = 0;
	volatile int32_t t24 = -175087407;

	t24 = (((x769==x770)/x771)>>x772);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x777 = 7288U;
	static int32_t x778 = INT32_MAX;
	volatile uint8_t x780 = 0U;

	t25 = (((x777==x778)/x779)>>x780);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x797 = INT64_MAX;
	volatile uint64_t x798 = UINT64_MAX;
	static uint8_t x800 = 11U;

	t26 = (((x797==x798)/x799)>>x800);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x833 = -1;
	volatile uint64_t x834 = 320578792731946573LLU;

	t27 = (((x833==x834)/x835)>>x836);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x841 = INT16_MIN;
	static uint64_t x842 = UINT64_MAX;
	uint16_t x844 = 0U;
	volatile int32_t t28 = -37196924;

	t28 = (((x841==x842)/x843)>>x844);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x957 = INT64_MAX;
	int64_t x958 = -1LL;
	uint16_t x959 = UINT16_MAX;
	static uint32_t x960 = 1U;
	volatile int32_t t29 = -5407;

	t29 = (((x957==x958)/x959)>>x960);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x965 = -1LL;
	volatile int16_t x966 = -14256;
	uint32_t x967 = UINT32_MAX;
	int8_t x968 = 3;
	volatile uint32_t t30 = 120235004U;

	t30 = (((x965==x966)/x967)>>x968);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x977 = 3;
	static int64_t x978 = INT64_MAX;
	uint16_t x979 = UINT16_MAX;
	int8_t x980 = 0;
	int32_t t31 = 2740105;

	t31 = (((x977==x978)/x979)>>x980);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x985 = INT32_MIN;
	static volatile int32_t x986 = INT32_MAX;
	static int32_t x988 = 1;
	int32_t t32 = 54;

	t32 = (((x985==x986)/x987)>>x988);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x989 = UINT64_MAX;
	uint32_t x990 = UINT32_MAX;
	int8_t x991 = INT8_MAX;
	volatile int32_t t33 = -167554469;

	t33 = (((x989==x990)/x991)>>x992);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1077 = INT64_MIN;
	int32_t x1079 = INT32_MIN;
	volatile int32_t t34 = -5;

	t34 = (((x1077==x1078)/x1079)>>x1080);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1093 = INT32_MIN;
	uint64_t x1094 = UINT64_MAX;
	int16_t x1095 = INT16_MIN;
	static int8_t x1096 = 0;

	t35 = (((x1093==x1094)/x1095)>>x1096);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1110 = -1;
	static volatile uint8_t x1111 = 109U;
	volatile uint32_t x1112 = 7U;

	t36 = (((x1109==x1110)/x1111)>>x1112);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x1129 = 8U;
	static volatile int32_t x1130 = 1408172;
	int64_t x1131 = INT64_MIN;
	volatile uint16_t x1132 = 23U;
	volatile int64_t t37 = -30167LL;

	t37 = (((x1129==x1130)/x1131)>>x1132);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1145 = INT8_MAX;
	int8_t x1146 = 24;
	int32_t x1147 = INT32_MAX;
	int32_t t38 = 1493;

	t38 = (((x1145==x1146)/x1147)>>x1148);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1178 = INT16_MAX;
	uint32_t x1179 = 928381U;

	t39 = (((x1177==x1178)/x1179)>>x1180);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1181 = UINT8_MAX;
	uint32_t x1182 = 66120732U;
	int64_t x1183 = INT64_MAX;

	t40 = (((x1181==x1182)/x1183)>>x1184);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1217 = -10;
	int64_t x1219 = 12440021203368136LL;
	static volatile int8_t x1220 = 16;
	volatile int64_t t41 = 397553LL;

	t41 = (((x1217==x1218)/x1219)>>x1220);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x1226 = 4U;
	int16_t x1227 = INT16_MAX;
	volatile uint8_t x1228 = 1U;
	volatile int32_t t42 = -41446;

	t42 = (((x1225==x1226)/x1227)>>x1228);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1245 = 3U;
	int32_t x1246 = -185408;
	int8_t x1248 = 0;

	t43 = (((x1245==x1246)/x1247)>>x1248);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1249 = 55;
	int16_t x1250 = INT16_MAX;
	int16_t x1252 = 16;
	static volatile uint64_t t44 = 18574LLU;

	t44 = (((x1249==x1250)/x1251)>>x1252);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x1285 = 3156U;
	static int32_t x1286 = -1;
	volatile int8_t x1287 = -1;
	int16_t x1288 = 7;
	volatile int32_t t45 = -16477828;

	t45 = (((x1285==x1286)/x1287)>>x1288);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1289 = -1;
	static uint16_t x1291 = 1100U;
	static int16_t x1292 = 4;
	volatile int32_t t46 = 3375361;

	t46 = (((x1289==x1290)/x1291)>>x1292);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1302 = UINT32_MAX;
	uint8_t x1304 = 1U;
	int32_t t47 = 13577;

	t47 = (((x1301==x1302)/x1303)>>x1304);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1325 = INT64_MIN;
	static uint8_t x1326 = 7U;
	static volatile uint64_t t48 = 1887278251280490LLU;

	t48 = (((x1325==x1326)/x1327)>>x1328);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x1331 = 2705U;
	static int16_t x1332 = 14;
	int32_t t49 = 478904;

	t49 = (((x1329==x1330)/x1331)>>x1332);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1333 = -1;
	static volatile uint64_t x1334 = 84817156175LLU;
	int16_t x1335 = INT16_MIN;
	uint64_t x1336 = 23LLU;

	t50 = (((x1333==x1334)/x1335)>>x1336);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x1366 = 226078U;
	int8_t x1367 = -1;
	volatile int16_t x1368 = 0;
	volatile int32_t t51 = 5698;

	t51 = (((x1365==x1366)/x1367)>>x1368);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1373 = INT8_MIN;
	static uint32_t x1374 = UINT32_MAX;
	volatile uint8_t x1375 = 13U;
	uint16_t x1376 = 26U;
	volatile int32_t t52 = 7673844;

	t52 = (((x1373==x1374)/x1375)>>x1376);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x1429 = 1965729051835LL;
	uint32_t x1430 = 1710635571U;
	static volatile uint16_t x1432 = 28U;
	static volatile uint32_t t53 = 7424904U;

	t53 = (((x1429==x1430)/x1431)>>x1432);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x1433 = INT16_MIN;
	static uint32_t x1434 = 22562385U;
	static uint8_t x1436 = 0U;

	t54 = (((x1433==x1434)/x1435)>>x1436);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x1445 = 2LLU;
	static int32_t x1446 = INT32_MIN;
	uint32_t x1447 = 14U;
	uint8_t x1448 = 22U;
	uint32_t t55 = 4U;

	t55 = (((x1445==x1446)/x1447)>>x1448);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1485 = 272178U;
	int16_t x1486 = INT16_MAX;
	int32_t x1487 = INT32_MIN;
	static int8_t x1488 = 16;

	t56 = (((x1485==x1486)/x1487)>>x1488);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1489 = -846884497878LL;
	uint64_t x1490 = 30327LLU;
	int8_t x1492 = 8;
	volatile int32_t t57 = -31;

	t57 = (((x1489==x1490)/x1491)>>x1492);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1529 = INT8_MIN;
	uint32_t x1530 = 1989390617U;
	volatile int16_t x1531 = INT16_MAX;
	static int32_t t58 = -8106;

	t58 = (((x1529==x1530)/x1531)>>x1532);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1549 = 6U;
	volatile int64_t x1550 = 13270773021LL;
	static int8_t x1551 = INT8_MAX;
	static int32_t t59 = 0;

	t59 = (((x1549==x1550)/x1551)>>x1552);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1581 = -1;
	static int8_t x1582 = INT8_MIN;
	int32_t x1583 = INT32_MIN;
	uint16_t x1584 = 11U;
	int32_t t60 = 33353279;

	t60 = (((x1581==x1582)/x1583)>>x1584);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x1610 = -2441695626673045490LL;
	static uint8_t x1612 = 1U;
	volatile int32_t t61 = 140742244;

	t61 = (((x1609==x1610)/x1611)>>x1612);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x1630 = INT64_MIN;
	uint8_t x1631 = 18U;
	uint8_t x1632 = 1U;

	t62 = (((x1629==x1630)/x1631)>>x1632);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1718 = INT64_MAX;
	uint32_t x1719 = UINT32_MAX;
	static uint32_t t63 = 1038754932U;

	t63 = (((x1717==x1718)/x1719)>>x1720);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1737 = INT64_MIN;
	uint64_t x1738 = UINT64_MAX;
	uint32_t x1740 = 24U;
	static int64_t t64 = -494773294LL;

	t64 = (((x1737==x1738)/x1739)>>x1740);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1758 = 34U;
	uint16_t x1759 = UINT16_MAX;
	int64_t x1760 = 8LL;
	volatile int32_t t65 = 491;

	t65 = (((x1757==x1758)/x1759)>>x1760);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1765 = 738195546U;
	uint32_t x1766 = 409534U;
	int64_t x1767 = 188137539565LL;
	int16_t x1768 = 28;

	t66 = (((x1765==x1766)/x1767)>>x1768);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1779 = INT32_MAX;
	volatile int16_t x1780 = 7;
	volatile int32_t t67 = -15575;

	t67 = (((x1777==x1778)/x1779)>>x1780);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1794 = 2274U;
	static int32_t t68 = 837668409;

	t68 = (((x1793==x1794)/x1795)>>x1796);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1797 = -5866517874019379LL;
	volatile int64_t x1798 = INT64_MAX;
	uint32_t x1800 = 2U;
	volatile int64_t t69 = 2005091LL;

	t69 = (((x1797==x1798)/x1799)>>x1800);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x1874 = 368400270135451703LLU;
	static uint8_t x1875 = UINT8_MAX;
	uint64_t x1876 = 0LLU;
	int32_t t70 = 3817538;

	t70 = (((x1873==x1874)/x1875)>>x1876);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1898 = -1LL;
	static int64_t x1899 = -9611607LL;
	int8_t x1900 = 0;
	int64_t t71 = -97377200839LL;

	t71 = (((x1897==x1898)/x1899)>>x1900);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x1933 = UINT64_MAX;
	int16_t x1934 = INT16_MAX;
	int8_t x1935 = INT8_MAX;
	volatile int32_t t72 = 2;

	t72 = (((x1933==x1934)/x1935)>>x1936);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1937 = INT32_MIN;
	volatile uint32_t x1938 = 5641U;
	int16_t x1940 = 23;
	volatile uint32_t t73 = 7583331U;

	t73 = (((x1937==x1938)/x1939)>>x1940);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x1966 = INT16_MIN;
	int32_t x1967 = INT32_MAX;
	volatile int32_t t74 = -416291;

	t74 = (((x1965==x1966)/x1967)>>x1968);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x1998 = UINT16_MAX;
	int32_t t75 = -1540037;

	t75 = (((x1997==x1998)/x1999)>>x2000);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2005 = 980390LLU;
	int8_t x2006 = -61;
	static int8_t x2008 = 1;

	t76 = (((x2005==x2006)/x2007)>>x2008);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x2015 = 527521839030665LL;
	int8_t x2016 = 3;
	int64_t t77 = -241560651LL;

	t77 = (((x2013==x2014)/x2015)>>x2016);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2077 = 65680980;
	int32_t x2078 = -8173398;
	uint16_t x2080 = 1U;
	int64_t t78 = 815051LL;

	t78 = (((x2077==x2078)/x2079)>>x2080);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2081 = INT64_MAX;
	int8_t x2082 = INT8_MIN;
	uint8_t x2083 = 45U;
	int32_t t79 = 101315;

	t79 = (((x2081==x2082)/x2083)>>x2084);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2093 = UINT32_MAX;
	int16_t x2094 = INT16_MAX;
	uint16_t x2095 = 2648U;
	static volatile uint8_t x2096 = 1U;
	int32_t t80 = 60984892;

	t80 = (((x2093==x2094)/x2095)>>x2096);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2121 = INT8_MAX;
	int16_t x2122 = -244;
	uint16_t x2123 = 2U;
	uint8_t x2124 = 1U;
	static volatile int32_t t81 = 2228277;

	t81 = (((x2121==x2122)/x2123)>>x2124);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2158 = INT16_MIN;
	uint32_t x2159 = 7041611U;
	volatile int32_t x2160 = 7;
	volatile uint32_t t82 = 6U;

	t82 = (((x2157==x2158)/x2159)>>x2160);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2189 = -1LL;
	uint32_t x2190 = 13282509U;
	volatile int16_t x2192 = 1;

	t83 = (((x2189==x2190)/x2191)>>x2192);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x2221 = 1122569271U;
	uint16_t x2222 = 1U;
	uint64_t x2223 = 354328962967611LLU;
	uint16_t x2224 = 1U;

	t84 = (((x2221==x2222)/x2223)>>x2224);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2269 = 10479U;
	int8_t x2272 = 1;
	volatile uint32_t t85 = 1U;

	t85 = (((x2269==x2270)/x2271)>>x2272);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2281 = INT16_MIN;
	int32_t x2282 = -1;
	volatile int32_t x2283 = INT32_MIN;
	static uint32_t x2284 = 30U;

	t86 = (((x2281==x2282)/x2283)>>x2284);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2337 = -10;
	int32_t x2338 = -1;
	int16_t x2339 = -560;
	volatile int8_t x2340 = 1;
	int32_t t87 = -38;

	t87 = (((x2337==x2338)/x2339)>>x2340);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2466 = 106857192472LL;
	uint16_t x2467 = UINT16_MAX;
	static int8_t x2468 = 4;
	volatile int32_t t88 = 59730250;

	t88 = (((x2465==x2466)/x2467)>>x2468);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2549 = 11U;
	int64_t x2550 = -51955856LL;
	static uint8_t x2551 = UINT8_MAX;
	int32_t t89 = -19669;

	t89 = (((x2549==x2550)/x2551)>>x2552);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x2561 = 21U;
	uint8_t x2562 = 1U;
	int64_t x2563 = INT64_MIN;
	uint8_t x2564 = 4U;
	volatile int64_t t90 = 15LL;

	t90 = (((x2561==x2562)/x2563)>>x2564);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x2633 = INT8_MAX;
	int32_t x2634 = INT32_MIN;
	volatile int16_t x2635 = -1;
	static volatile int8_t x2636 = 1;
	static int32_t t91 = 19;

	t91 = (((x2633==x2634)/x2635)>>x2636);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x2703 = -1;
	volatile int32_t t92 = 4;

	t92 = (((x2701==x2702)/x2703)>>x2704);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x2717 = 26U;
	static uint64_t x2718 = UINT64_MAX;
	int8_t x2719 = INT8_MIN;
	uint8_t x2720 = 2U;
	volatile int32_t t93 = -283384;

	t93 = (((x2717==x2718)/x2719)>>x2720);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2753 = 180804LLU;
	int16_t x2754 = 56;
	int32_t t94 = 5605953;

	t94 = (((x2753==x2754)/x2755)>>x2756);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2785 = INT16_MIN;
	volatile int16_t x2787 = -122;
	uint16_t x2788 = 11U;
	int32_t t95 = -11590568;

	t95 = (((x2785==x2786)/x2787)>>x2788);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x2817 = UINT32_MAX;
	int16_t x2818 = INT16_MIN;
	static int16_t x2819 = INT16_MIN;
	volatile int8_t x2820 = 31;
	int32_t t96 = -175615439;

	t96 = (((x2817==x2818)/x2819)>>x2820);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x2821 = INT32_MIN;
	uint16_t x2822 = UINT16_MAX;
	int8_t x2823 = -1;
	static int8_t x2824 = 12;

	t97 = (((x2821==x2822)/x2823)>>x2824);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x2849 = -879;
	int32_t x2850 = -1;
	uint16_t x2852 = 5U;
	int32_t t98 = -1889738;

	t98 = (((x2849==x2850)/x2851)>>x2852);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2853 = -1;
	volatile uint8_t x2856 = 7U;

	t99 = (((x2853==x2854)/x2855)>>x2856);

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

