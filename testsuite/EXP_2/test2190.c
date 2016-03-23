
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x25 = 100U;
volatile int64_t x37 = 29622LL;
int64_t x98 = 1432555LL;
int8_t x99 = INT8_MIN;
int8_t x100 = 1;
static int8_t x127 = INT8_MIN;
static uint8_t x128 = 24U;
volatile int16_t x220 = 1;
int64_t x231 = 4LL;
uint8_t x232 = 45U;
uint32_t x293 = 77U;
uint16_t x296 = 6U;
volatile uint32_t t7 = 1114U;
uint64_t x327 = UINT64_MAX;
uint32_t x383 = UINT32_MAX;
volatile uint8_t x384 = 37U;
static int32_t x518 = INT32_MAX;
volatile uint32_t x519 = 1U;
static int64_t x646 = INT64_MIN;
uint16_t x647 = 1219U;
int8_t x883 = INT8_MAX;
int64_t x893 = -58634866806LL;
int64_t x894 = INT64_MIN;
static uint8_t x1001 = 1U;
uint16_t x1004 = 0U;
static uint32_t x1085 = 140031U;
int32_t x1169 = -122832155;
volatile int8_t x1197 = -1;
uint8_t x1312 = 6U;
volatile uint64_t t30 = 166969LLU;
uint32_t x1347 = 54708U;
static uint8_t x1392 = 3U;
volatile int64_t x1395 = INT64_MIN;
volatile uint64_t t33 = 70575537LLU;
uint8_t x1399 = UINT8_MAX;
uint16_t x1437 = 9273U;
int32_t x1439 = INT32_MAX;
static volatile int64_t t37 = 116456267LL;
uint64_t x1581 = 3013495375121639LLU;
int16_t x1687 = INT16_MIN;
int32_t x1718 = -1;
int16_t x1720 = 16;
int16_t x1786 = INT16_MAX;
uint32_t x1787 = UINT32_MAX;
static uint64_t t45 = 10985351LLU;
int32_t x1791 = INT32_MAX;
uint16_t x1793 = 3462U;
int32_t x1905 = -1;
static volatile int8_t x1906 = INT8_MIN;
uint32_t x2140 = 29U;
volatile int16_t x2261 = -1;
uint32_t x2376 = 29U;
uint64_t t56 = 6537743942353555LLU;
int32_t x2385 = INT32_MIN;
volatile int64_t t57 = -332694LL;
static uint64_t x2397 = 422026152659608LLU;
int16_t x2398 = INT16_MIN;
uint64_t t58 = 35052LLU;
uint16_t x2480 = 1U;
int32_t x2641 = INT32_MIN;
uint32_t x2670 = UINT32_MAX;
int32_t x2692 = 1;
int32_t x2702 = INT32_MAX;
static volatile int64_t x2734 = -1LL;
static uint32_t x2898 = UINT32_MAX;
int8_t x2933 = -1;
int64_t x2934 = -1LL;
static int16_t x3065 = INT16_MAX;
int32_t x3067 = INT32_MIN;
static int32_t t71 = 1812;
volatile int64_t x3173 = -1LL;
uint16_t x3175 = 9502U;
int8_t x3185 = INT8_MIN;
int32_t x3226 = INT32_MIN;
static volatile uint32_t t74 = 251575251U;
int64_t x3274 = 315202LL;
int64_t x3353 = INT64_MAX;
volatile uint64_t t78 = 277690482629312LLU;
int32_t x3777 = INT32_MIN;
int64_t t80 = -82LL;
static volatile int16_t x3857 = INT16_MIN;
int64_t x3858 = INT64_MIN;
static uint16_t x3869 = UINT16_MAX;
volatile int32_t x3874 = -29667;
int32_t t83 = 248;
uint64_t x4058 = UINT64_MAX;
uint16_t x4161 = UINT16_MAX;
int32_t x4215 = 1456;
uint64_t t91 = 1LLU;
uint8_t x4227 = UINT8_MAX;
int32_t t92 = 0;
int8_t x4332 = 1;
int32_t x4498 = INT32_MIN;
int32_t x4558 = -1;
uint64_t x4559 = 7504153729891599LLU;
volatile uint64_t t98 = 51LLU;
volatile uint32_t t99 = 1661998U;
volatile uint64_t t100 = 25LLU;
int16_t x4757 = INT16_MIN;
int8_t x4760 = 5;
uint8_t x4779 = UINT8_MAX;
volatile int32_t t104 = 51734149;
volatile uint32_t x4818 = 105U;
static int32_t x4864 = 0;
int32_t t106 = 4003;
static int8_t x4875 = INT8_MAX;
static int32_t x4876 = 0;
uint16_t x4924 = 6U;
int32_t t108 = 17;
static int64_t t109 = -9695386567LL;
int64_t x4990 = INT64_MIN;
int8_t x5004 = 12;
int32_t x5019 = INT32_MIN;
int64_t x5034 = 352047979LL;
uint8_t x5036 = 35U;
uint8_t x5040 = 30U;
uint64_t x5191 = 2848219602454463LLU;
int32_t x5195 = -15;
int64_t x5434 = INT64_MIN;
int16_t x5436 = 1;
volatile uint16_t x5468 = 3U;
volatile uint64_t x5495 = 1LLU;
int16_t x5496 = 11;
int64_t x5511 = INT64_MIN;
static uint16_t x5639 = 1076U;
static int64_t x5743 = -1LL;
static int8_t x5861 = INT8_MIN;
static uint64_t x5862 = 171977103371153LLU;
static volatile uint64_t t129 = 12384628781458880LLU;
int64_t x6185 = -1LL;
static uint64_t x6186 = 0LLU;
uint8_t x6188 = 40U;
int8_t x6247 = INT8_MIN;
uint16_t x6302 = 21169U;
uint16_t x6303 = 819U;
int8_t x6304 = 4;
uint8_t x6316 = 1U;
int8_t x6404 = 0;
int32_t x6650 = -1;
uint8_t x6652 = 0U;
static volatile int64_t x6782 = -1LL;
uint8_t x6783 = 0U;
int8_t x6855 = INT8_MAX;
int16_t x6873 = INT16_MAX;
int32_t t148 = 59;
volatile int32_t x6951 = INT32_MIN;
uint8_t x7038 = 1U;
volatile uint64_t t152 = 2019LLU;
volatile int16_t x7236 = 0;
int32_t x7394 = -1;
volatile int16_t x7413 = 1598;
uint8_t x7416 = 10U;
volatile int8_t x7433 = INT8_MIN;
volatile uint16_t x7434 = 2U;
uint16_t x7491 = 2U;
uint8_t x7492 = 0U;
uint32_t t165 = 1641602U;
uint32_t x7743 = 289437983U;
int8_t x7897 = INT8_MIN;
uint8_t x7929 = 1U;
static uint16_t x7936 = 0U;
uint8_t x8036 = 8U;
static int8_t x8061 = 27;
uint32_t x8077 = 23U;
static uint32_t t175 = 185U;
uint64_t t177 = 6004460738LLU;
static int8_t x8406 = INT8_MIN;
uint8_t x8408 = 5U;
volatile uint64_t t180 = 204010342LLU;
static uint32_t x8708 = 16U;
volatile int32_t x8739 = INT32_MIN;
volatile int64_t t182 = -112434188210695LL;
static uint64_t x8754 = UINT64_MAX;
uint8_t x8824 = 1U;
volatile int32_t t185 = -49757;
volatile int32_t x8865 = INT32_MIN;
static volatile uint64_t t186 = 641LLU;
uint64_t x8874 = UINT64_MAX;
uint32_t x8921 = 1U;
volatile int64_t x8965 = -1LL;
uint64_t x8967 = 10027207LLU;
uint64_t t190 = 12LLU;
uint16_t x9036 = 1U;
volatile int16_t x9113 = -1;
volatile uint64_t x9114 = 38715993586054LLU;
uint8_t x9116 = 4U;
uint64_t t192 = 3366370LLU;
int64_t x9165 = -16381460288LL;
uint64_t x9236 = 41LLU;
uint8_t x9475 = UINT8_MAX;
int64_t t198 = -5631540636090LL;
int8_t x9508 = 19;
static volatile int32_t t199 = 491;


void f0(void) {
    	int8_t x26 = INT8_MAX;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = 14U;
	static int32_t t0 = 66;

    t0 = ((x25*(x26&x27))<<x28);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x38 = INT8_MAX;
	int64_t x39 = -1LL;
	uint16_t x40 = 3U;
	int64_t t1 = 16048LL;

    t1 = ((x37*(x38&x39))<<x40);

    if (t1 != 30095952LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x97 = INT8_MAX;
	int64_t t2 = 14LL;

    t2 = ((x97*(x98&x99))<<x100);

    if (t2 != 363841792LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x125 = INT16_MIN;
	uint64_t x126 = 2288421655404747353LLU;
	volatile uint64_t t3 = 88631246490LLU;

    t3 = ((x125*(x126&x127))<<x128);

    if (t3 != 11885843841560870912LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x185 = INT8_MAX;
	volatile int16_t x186 = 1;
	uint64_t x187 = 238800LLU;
	volatile uint8_t x188 = 7U;
	uint64_t t4 = 2054057LLU;

    t4 = ((x185*(x186&x187))<<x188);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x217 = 1155751825599LLU;
	uint8_t x218 = 0U;
	int16_t x219 = INT16_MIN;
	uint64_t t5 = 85832129627842LLU;

    t5 = ((x217*(x218&x219))<<x220);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x229 = 1U;
	int8_t x230 = -1;
	volatile int64_t t6 = 1699917LL;

    t6 = ((x229*(x230&x231))<<x232);

    if (t6 != 140737488355328LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint16_t x294 = 2U;
	int16_t x295 = INT16_MIN;

    t7 = ((x293*(x294&x295))<<x296);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x325 = INT16_MIN;
	int64_t x326 = -1LL;
	volatile uint8_t x328 = 2U;
	volatile uint64_t t8 = 10LLU;

    t8 = ((x325*(x326&x327))<<x328);

    if (t8 != 131072LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x381 = INT32_MIN;
	volatile uint64_t x382 = 1517714LLU;
	uint64_t t9 = 36905890LLU;

    t9 = ((x381*(x382&x383))<<x384);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x417 = 57121;
	int16_t x418 = INT16_MAX;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = 3;
	volatile uint32_t t10 = 8487232U;

    t10 = ((x417*(x418&x419))<<x420);

    if (t10 != 2088568568U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x517 = UINT32_MAX;
	int64_t x520 = 14LL;
	static volatile uint32_t t11 = 7658094U;

    t11 = ((x517*(x518&x519))<<x520);

    if (t11 != 4294950912U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x549 = -1LL;
	uint8_t x550 = UINT8_MAX;
	int64_t x551 = INT64_MIN;
	int8_t x552 = 8;
	int64_t t12 = -2788108LL;

    t12 = ((x549*(x550&x551))<<x552);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x645 = 9911U;
	int8_t x648 = 0;
	volatile int64_t t13 = -19685LL;

    t13 = ((x645*(x646&x647))<<x648);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x705 = 6U;
	uint16_t x706 = UINT16_MAX;
	int16_t x707 = -11;
	uint8_t x708 = 5U;
	volatile int32_t t14 = 124;

    t14 = ((x705*(x706&x707))<<x708);

    if (t14 != 12580800) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x813 = INT16_MIN;
	volatile int32_t x814 = INT32_MIN;
	volatile uint16_t x815 = 11913U;
	volatile uint8_t x816 = 1U;
	static volatile int32_t t15 = -9;

    t15 = ((x813*(x814&x815))<<x816);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x829 = -30;
	volatile int8_t x830 = INT8_MAX;
	uint64_t x831 = UINT64_MAX;
	int16_t x832 = 33;
	static volatile uint64_t t16 = 1257870363036724LLU;

    t16 = ((x829*(x830&x831))<<x832);

    if (t16 != 18446711346058756096LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x881 = -61;
	int32_t x882 = INT32_MIN;
	volatile uint16_t x884 = 2U;
	volatile int32_t t17 = 2737086;

    t17 = ((x881*(x882&x883))<<x884);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x895 = 98U;
	int8_t x896 = 29;
	int64_t t18 = -867874304505LL;

    t18 = ((x893*(x894&x895))<<x896);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x933 = UINT8_MAX;
	static int16_t x934 = -580;
	int8_t x935 = INT8_MAX;
	uint8_t x936 = 13U;
	volatile int32_t t19 = 314366554;

    t19 = ((x933*(x934&x935))<<x936);

    if (t19 != 125337600) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x985 = 0;
	int16_t x986 = -96;
	int64_t x987 = 7348227909280422LL;
	uint32_t x988 = 9U;
	int64_t t20 = 221LL;

    t20 = ((x985*(x986&x987))<<x988);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1002 = -967;
	volatile int8_t x1003 = INT8_MAX;
	static volatile int32_t t21 = 201505293;

    t21 = ((x1001*(x1002&x1003))<<x1004);

    if (t21 != 57) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x1086 = 21810287525221LL;
	uint8_t x1087 = 16U;
	int8_t x1088 = 1;
	volatile int64_t t22 = 25253609846LL;

    t22 = ((x1085*(x1086&x1087))<<x1088);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x1089 = 6;
	int32_t x1090 = INT32_MAX;
	int64_t x1091 = -94276130952235LL;
	int8_t x1092 = 1;
	int64_t t23 = 117LL;

    t23 = ((x1089*(x1090&x1091))<<x1092);

    if (t23 != 6584143356LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x1113 = -1;
	static int8_t x1114 = INT8_MIN;
	uint32_t x1115 = 27U;
	uint8_t x1116 = 2U;
	volatile uint32_t t24 = 28U;

    t24 = ((x1113*(x1114&x1115))<<x1116);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x1170 = 473U;
	int64_t x1171 = INT64_MIN;
	int8_t x1172 = 52;
	static volatile int64_t t25 = -1442LL;

    t25 = ((x1169*(x1170&x1171))<<x1172);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1198 = 3450106U;
	int32_t x1199 = -1;
	int16_t x1200 = 0;
	static volatile uint32_t t26 = 802567U;

    t26 = ((x1197*(x1198&x1199))<<x1200);

    if (t26 != 4291517190U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1253 = -1LL;
	uint64_t x1254 = 5629130596572138974LLU;
	static int64_t x1255 = INT64_MIN;
	volatile uint8_t x1256 = 2U;
	volatile uint64_t t27 = 10887772487LLU;

    t27 = ((x1253*(x1254&x1255))<<x1256);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1281 = 1609659882489LLU;
	int32_t x1282 = INT32_MAX;
	static int8_t x1283 = INT8_MIN;
	uint8_t x1284 = 20U;
	uint64_t t28 = 374642LLU;

    t28 = ((x1281*(x1282&x1283))<<x1284);

    if (t28 != 2994430996184563712LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x1309 = INT16_MIN;
	int64_t x1310 = -204510846LL;
	uint64_t x1311 = UINT64_MAX;
	volatile uint64_t t29 = 397LLU;

    t29 = ((x1309*(x1310&x1311))<<x1312);

    if (t29 != 428890329710592LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x1325 = 2U;
	uint64_t x1326 = 5729184LLU;
	int16_t x1327 = INT16_MAX;
	uint8_t x1328 = 0U;

    t30 = ((x1325*(x1326&x1327))<<x1328);

    if (t30 != 55104LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1345 = 135980722221539LLU;
	uint16_t x1346 = 7117U;
	uint16_t x1348 = 60U;
	uint64_t t31 = 31777764213670877LLU;

    t31 = ((x1345*(x1346&x1347))<<x1348);

    if (t31 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1389 = UINT32_MAX;
	int16_t x1390 = 1506;
	int32_t x1391 = -11;
	uint32_t t32 = 306004U;

    t32 = ((x1389*(x1390&x1391))<<x1392);

    if (t32 != 4294955264U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1393 = UINT64_MAX;
	int32_t x1394 = INT32_MIN;
	int8_t x1396 = 4;

    t33 = ((x1393*(x1394&x1395))<<x1396);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1397 = 14397031LLU;
	int8_t x1398 = INT8_MAX;
	uint8_t x1400 = 3U;
	volatile uint64_t t34 = 158737362069285LLU;

    t34 = ((x1397*(x1398&x1399))<<x1400);

    if (t34 != 14627383496LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1401 = INT16_MIN;
	uint64_t x1402 = 200480409LLU;
	volatile int64_t x1403 = -1LL;
	int8_t x1404 = 0;
	uint64_t t35 = 4557772549532885407LLU;

    t35 = ((x1401*(x1402&x1403))<<x1404);

    if (t35 != 18446737504367509504LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1429 = -1;
	int32_t x1430 = -26202;
	static int16_t x1431 = INT16_MIN;
	uint8_t x1432 = 0U;
	volatile int32_t t36 = -7956653;

    t36 = ((x1429*(x1430&x1431))<<x1432);

    if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x1438 = -1LL;
	uint8_t x1440 = 1U;

    t37 = ((x1437*(x1438&x1439))<<x1440);

    if (t37 != 39827231717262LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x1469 = INT32_MIN;
	uint64_t x1470 = UINT64_MAX;
	uint32_t x1471 = UINT32_MAX;
	uint32_t x1472 = 6U;
	volatile uint64_t t38 = 6336387LLU;

    t38 = ((x1469*(x1470&x1471))<<x1472);

    if (t38 != 137438953472LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x1582 = UINT64_MAX;
	volatile int32_t x1583 = 1296495;
	uint64_t x1584 = 0LLU;
	uint64_t t39 = 13LLU;

    t39 = ((x1581*(x1582&x1583))<<x1584);

    if (t39 != 14718686815613964329LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1609 = 131034222331277LLU;
	volatile uint32_t x1610 = 38307366U;
	static int16_t x1611 = INT16_MIN;
	uint8_t x1612 = 21U;
	uint64_t t40 = 7LLU;

    t40 = ((x1609*(x1610&x1611))<<x1612);

    if (t40 != 11564555342650015744LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x1613 = 63U;
	volatile int8_t x1614 = -1;
	int32_t x1615 = INT32_MIN;
	static int8_t x1616 = 0;
	static uint32_t t41 = 234174U;

    t41 = ((x1613*(x1614&x1615))<<x1616);

    if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1685 = -1LL;
	int64_t x1686 = -1LL;
	uint16_t x1688 = 0U;
	int64_t t42 = -3448LL;

    t42 = ((x1685*(x1686&x1687))<<x1688);

    if (t42 != 32768LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x1717 = INT8_MIN;
	int32_t x1719 = -1;
	volatile int32_t t43 = 392;

    t43 = ((x1717*(x1718&x1719))<<x1720);

    if (t43 != 8388608) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x1737 = -1;
	int16_t x1738 = 3;
	uint8_t x1739 = 76U;
	uint8_t x1740 = 29U;
	int32_t t44 = -4;

    t44 = ((x1737*(x1738&x1739))<<x1740);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x1785 = 498LLU;
	uint16_t x1788 = 44U;

    t45 = ((x1785*(x1786&x1787))<<x1788);

    if (t45 != 10367532632811503616LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x1789 = INT16_MAX;
	uint16_t x1790 = 502U;
	uint16_t x1792 = 7U;
	int32_t t46 = 949;

    t46 = ((x1789*(x1790&x1791))<<x1792);

    if (t46 != 2105476352) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x1794 = UINT32_MAX;
	static int64_t x1795 = INT64_MIN;
	uint32_t x1796 = 0U;
	int64_t t47 = -42961008LL;

    t47 = ((x1793*(x1794&x1795))<<x1796);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x1833 = 72622479695LL;
	int32_t x1834 = 245035;
	int32_t x1835 = -3;
	int8_t x1836 = 7;
	volatile int64_t t48 = 118751729618LL;

    t48 = ((x1833*(x1834&x1835))<<x1836);

    if (t48 != 2277747720589431680LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x1897 = 97662401U;
	uint8_t x1898 = 1U;
	int16_t x1899 = -1;
	uint32_t x1900 = 1U;
	static uint32_t t49 = 1006U;

    t49 = ((x1897*(x1898&x1899))<<x1900);

    if (t49 != 195324802U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x1907 = INT8_MAX;
	uint64_t x1908 = 16LLU;
	static volatile int32_t t50 = -300;

    t50 = ((x1905*(x1906&x1907))<<x1908);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2001 = INT16_MIN;
	int64_t x2002 = INT64_MIN;
	volatile int32_t x2003 = 3;
	int32_t x2004 = 20;
	volatile int64_t t51 = 0LL;

    t51 = ((x2001*(x2002&x2003))<<x2004);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x2137 = UINT32_MAX;
	static uint8_t x2138 = UINT8_MAX;
	volatile uint8_t x2139 = 2U;
	volatile uint32_t t52 = 414546440U;

    t52 = ((x2137*(x2138&x2139))<<x2140);

    if (t52 != 3221225472U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x2262 = -61;
	int16_t x2263 = 0;
	uint32_t x2264 = 1U;
	static int32_t t53 = 3421879;

    t53 = ((x2261*(x2262&x2263))<<x2264);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x2285 = -1;
	static int32_t x2286 = INT32_MIN;
	int16_t x2287 = 0;
	int8_t x2288 = 4;
	int32_t t54 = 62914681;

    t54 = ((x2285*(x2286&x2287))<<x2288);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2333 = 5LLU;
	int32_t x2334 = INT32_MIN;
	volatile int32_t x2335 = -1568374;
	volatile uint8_t x2336 = 15U;
	volatile uint64_t t55 = 259LLU;

    t55 = ((x2333*(x2334&x2335))<<x2336);

    if (t55 != 18446392229988663296LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x2373 = -1LL;
	volatile uint64_t x2374 = 560617252424LLU;
	int64_t x2375 = -29045490798130399LL;

    t56 = ((x2373*(x2374&x2375))<<x2376);

    if (t56 != 12626826442873765888LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x2386 = INT64_MIN;
	int32_t x2387 = INT32_MAX;
	uint8_t x2388 = 55U;

    t57 = ((x2385*(x2386&x2387))<<x2388);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x2399 = 7866902360087LL;
	uint16_t x2400 = 5U;

    t58 = ((x2397*(x2398&x2399))<<x2400);

    if (t58 != 3445688128776437760LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2465 = -1;
	uint8_t x2466 = UINT8_MAX;
	uint32_t x2467 = 10922727U;
	int32_t x2468 = 1;
	uint32_t t59 = 25128U;

    t59 = ((x2465*(x2466&x2467))<<x2468);

    if (t59 != 4294966834U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x2477 = 4U;
	static int32_t x2478 = INT32_MIN;
	volatile uint32_t x2479 = 657734226U;
	uint32_t t60 = 189886U;

    t60 = ((x2477*(x2478&x2479))<<x2480);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x2642 = INT64_MIN;
	int8_t x2643 = INT8_MAX;
	static uint8_t x2644 = 45U;
	int64_t t61 = 43LL;

    t61 = ((x2641*(x2642&x2643))<<x2644);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2669 = 30278497523905LLU;
	uint32_t x2671 = 73059763U;
	volatile uint32_t x2672 = 12U;
	volatile uint64_t t62 = 17773LLU;

    t62 = ((x2669*(x2670&x2671))<<x2672);

    if (t62 != 13276469617020055552LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x2689 = 2U;
	int32_t x2690 = 5917700;
	static int32_t x2691 = INT32_MIN;
	int32_t t63 = -363221;

    t63 = ((x2689*(x2690&x2691))<<x2692);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2701 = -2;
	static int64_t x2703 = INT64_MIN;
	volatile uint16_t x2704 = 11U;
	int64_t t64 = 4360LL;

    t64 = ((x2701*(x2702&x2703))<<x2704);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2733 = -1;
	int8_t x2735 = INT8_MIN;
	uint8_t x2736 = 8U;
	int64_t t65 = 1LL;

    t65 = ((x2733*(x2734&x2735))<<x2736);

    if (t65 != 32768LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x2741 = UINT8_MAX;
	volatile uint16_t x2742 = 1U;
	uint32_t x2743 = 277U;
	int16_t x2744 = 1;
	uint32_t t66 = 2795848U;

    t66 = ((x2741*(x2742&x2743))<<x2744);

    if (t66 != 510U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x2757 = 2854LL;
	uint16_t x2758 = 15U;
	int32_t x2759 = INT32_MAX;
	int64_t x2760 = 7LL;
	volatile int64_t t67 = -5083759LL;

    t67 = ((x2757*(x2758&x2759))<<x2760);

    if (t67 != 5479680LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x2897 = INT32_MAX;
	volatile uint8_t x2899 = UINT8_MAX;
	int8_t x2900 = 5;
	volatile uint32_t t68 = 0U;

    t68 = ((x2897*(x2898&x2899))<<x2900);

    if (t68 != 4294959136U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x2905 = 56436442049512768LLU;
	uint8_t x2906 = UINT8_MAX;
	int8_t x2907 = 15;
	int8_t x2908 = 41;
	volatile uint64_t t69 = 12461LLU;

    t69 = ((x2905*(x2906&x2907))<<x2908);

    if (t69 != 8186840435117785088LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x2935 = INT16_MIN;
	uint8_t x2936 = 14U;
	int64_t t70 = 80LL;

    t70 = ((x2933*(x2934&x2935))<<x2936);

    if (t70 != 536870912LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x3066 = 3U;
	static volatile int8_t x3068 = 11;

    t71 = ((x3065*(x3066&x3067))<<x3068);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x3174 = INT16_MIN;
	int8_t x3176 = 0;
	int64_t t72 = 325886606580131LL;

    t72 = ((x3173*(x3174&x3175))<<x3176);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x3186 = 57795566;
	volatile uint64_t x3187 = UINT64_MAX;
	uint16_t x3188 = 3U;
	volatile uint64_t t73 = 7222599953151LLU;

    t73 = ((x3185*(x3186&x3187))<<x3188);

    if (t73 != 18446744014526892032LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x3225 = 2U;
	uint16_t x3227 = 4417U;
	static uint8_t x3228 = 1U;

    t74 = ((x3225*(x3226&x3227))<<x3228);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x3273 = 0;
	uint32_t x3275 = UINT32_MAX;
	uint32_t x3276 = 0U;
	int64_t t75 = -996772990774564LL;

    t75 = ((x3273*(x3274&x3275))<<x3276);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x3354 = 45U;
	int64_t x3355 = INT64_MIN;
	volatile int8_t x3356 = 1;
	volatile int64_t t76 = -6417LL;

    t76 = ((x3353*(x3354&x3355))<<x3356);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x3393 = INT8_MIN;
	int64_t x3394 = -1LL;
	volatile uint8_t x3395 = 0U;
	uint8_t x3396 = 38U;
	volatile int64_t t77 = 11414965299LL;

    t77 = ((x3393*(x3394&x3395))<<x3396);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x3477 = 467320127408LL;
	uint8_t x3478 = 1U;
	uint64_t x3479 = 212846450474578LLU;
	int16_t x3480 = 1;

    t78 = ((x3477*(x3478&x3479))<<x3480);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x3493 = 481477051U;
	volatile int64_t x3494 = INT64_MIN;
	uint8_t x3495 = UINT8_MAX;
	int8_t x3496 = 1;
	volatile int64_t t79 = -63858382409145734LL;

    t79 = ((x3493*(x3494&x3495))<<x3496);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x3778 = 0LL;
	int64_t x3779 = 84543648100477LL;
	uint8_t x3780 = 1U;

    t80 = ((x3777*(x3778&x3779))<<x3780);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x3859 = 49U;
	int16_t x3860 = 0;
	volatile int64_t t81 = -245667LL;

    t81 = ((x3857*(x3858&x3859))<<x3860);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x3870 = 0;
	int16_t x3871 = 1;
	uint64_t x3872 = 1LLU;
	volatile int32_t t82 = -1975994;

    t82 = ((x3869*(x3870&x3871))<<x3872);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x3873 = 168U;
	static int16_t x3875 = INT16_MAX;
	uint8_t x3876 = 3U;

    t83 = ((x3873*(x3874&x3875))<<x3876);

    if (t83 != 4167744) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x3885 = 42;
	volatile uint32_t x3886 = 20464692U;
	static volatile int32_t x3887 = 293863;
	int16_t x3888 = 3;
	volatile uint32_t t84 = 6424U;

    t84 = ((x3885*(x3886&x3887))<<x3888);

    if (t84 != 5517120U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x3973 = -1;
	int64_t x3974 = INT64_MIN;
	int8_t x3975 = 1;
	volatile uint16_t x3976 = 1U;
	int64_t t85 = 0LL;

    t85 = ((x3973*(x3974&x3975))<<x3976);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x4057 = INT16_MIN;
	volatile int32_t x4059 = -1;
	volatile uint8_t x4060 = 15U;
	volatile uint64_t t86 = 222411919530LLU;

    t86 = ((x4057*(x4058&x4059))<<x4060);

    if (t86 != 1073741824LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x4125 = 1U;
	uint32_t x4126 = UINT32_MAX;
	uint16_t x4127 = UINT16_MAX;
	uint8_t x4128 = 0U;
	volatile uint32_t t87 = 481U;

    t87 = ((x4125*(x4126&x4127))<<x4128);

    if (t87 != 65535U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x4162 = INT16_MAX;
	uint8_t x4163 = UINT8_MAX;
	uint8_t x4164 = 1U;
	volatile int32_t t88 = 96;

    t88 = ((x4161*(x4162&x4163))<<x4164);

    if (t88 != 33422850) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x4189 = -104168;
	uint8_t x4190 = 34U;
	uint8_t x4191 = 1U;
	static int32_t x4192 = 3;
	int32_t t89 = -32;

    t89 = ((x4189*(x4190&x4191))<<x4192);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x4205 = -1;
	uint8_t x4206 = 1U;
	int8_t x4207 = INT8_MIN;
	uint8_t x4208 = 2U;
	static volatile int32_t t90 = 7;

    t90 = ((x4205*(x4206&x4207))<<x4208);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x4213 = 7681991370624037848LLU;
	static volatile int16_t x4214 = INT16_MIN;
	uint8_t x4216 = 58U;

    t91 = ((x4213*(x4214&x4215))<<x4216);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x4225 = 0;
	volatile uint8_t x4226 = 88U;
	uint8_t x4228 = 15U;

    t92 = ((x4225*(x4226&x4227))<<x4228);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x4329 = UINT64_MAX;
	volatile int32_t x4330 = 8082;
	static volatile uint32_t x4331 = 1470211U;
	volatile uint64_t t93 = 365469LLU;

    t93 = ((x4329*(x4330&x4331))<<x4332);

    if (t93 != 18446744073709543932LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x4349 = INT32_MAX;
	uint64_t x4350 = UINT64_MAX;
	static int32_t x4351 = INT32_MAX;
	uint8_t x4352 = 1U;
	uint64_t t94 = 542019528055889LLU;

    t94 = ((x4349*(x4350&x4351))<<x4352);

    if (t94 != 9223372028264841218LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x4417 = -1LL;
	uint8_t x4418 = 3U;
	uint64_t x4419 = UINT64_MAX;
	volatile uint8_t x4420 = 2U;
	volatile uint64_t t95 = 7542431LLU;

    t95 = ((x4417*(x4418&x4419))<<x4420);

    if (t95 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x4485 = UINT8_MAX;
	volatile int16_t x4486 = 13327;
	uint8_t x4487 = 4U;
	uint8_t x4488 = 4U;
	int32_t t96 = 33133;

    t96 = ((x4485*(x4486&x4487))<<x4488);

    if (t96 != 16320) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x4497 = 2273;
	int64_t x4499 = 25531404615LL;
	static int8_t x4500 = 3;
	volatile int64_t t97 = -1LL;

    t97 = ((x4497*(x4498&x4499))<<x4500);

    if (t97 != 429548269207552LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x4557 = 259;
	int16_t x4560 = 3;

    t98 = ((x4557*(x4558&x4559))<<x4560);

    if (t98 != 15548606528335393128LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x4581 = 47;
	uint32_t x4582 = 179339877U;
	int16_t x4583 = INT16_MIN;
	uint8_t x4584 = 0U;

    t99 = ((x4581*(x4582&x4583))<<x4584);

    if (t99 != 4133978112U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x4629 = INT8_MIN;
	int8_t x4630 = INT8_MAX;
	uint64_t x4631 = UINT64_MAX;
	volatile uint8_t x4632 = 21U;

    t100 = ((x4629*(x4630&x4631))<<x4632);

    if (t100 != 18446744039618248704LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x4633 = INT16_MIN;
	int32_t x4634 = INT32_MIN;
	static uint64_t x4635 = 1325LLU;
	uint16_t x4636 = 4U;
	volatile uint64_t t101 = 701177940172LLU;

    t101 = ((x4633*(x4634&x4635))<<x4636);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x4758 = 20;
	static int64_t x4759 = INT64_MIN;
	int64_t t102 = 136752LL;

    t102 = ((x4757*(x4758&x4759))<<x4760);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x4773 = 154U;
	uint8_t x4774 = UINT8_MAX;
	volatile uint8_t x4775 = 3U;
	int8_t x4776 = 13;
	volatile int32_t t103 = 636;

    t103 = ((x4773*(x4774&x4775))<<x4776);

    if (t103 != 3784704) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x4777 = 161565;
	uint16_t x4778 = UINT16_MAX;
	uint32_t x4780 = 2U;

    t104 = ((x4777*(x4778&x4779))<<x4780);

    if (t104 != 164796300) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x4817 = 835U;
	uint64_t x4819 = 644066268643272939LLU;
	volatile uint8_t x4820 = 7U;
	uint64_t t105 = 112051056LLU;

    t105 = ((x4817*(x4818&x4819))<<x4820);

    if (t105 != 11222400LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x4861 = 60U;
	uint8_t x4862 = UINT8_MAX;
	static int16_t x4863 = INT16_MIN;

    t106 = ((x4861*(x4862&x4863))<<x4864);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x4873 = 1862U;
	int16_t x4874 = -28;
	uint32_t t107 = 519U;

    t107 = ((x4873*(x4874&x4875))<<x4876);

    if (t107 != 186200U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x4921 = 5U;
	int8_t x4922 = 2;
	int32_t x4923 = 2475;

    t108 = ((x4921*(x4922&x4923))<<x4924);

    if (t108 != 640) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x4941 = UINT32_MAX;
	int8_t x4942 = 32;
	static int64_t x4943 = 68890651154817LL;
	int32_t x4944 = 0;

    t109 = ((x4941*(x4942&x4943))<<x4944);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x4989 = INT8_MAX;
	uint8_t x4991 = 25U;
	uint16_t x4992 = 4U;
	int64_t t110 = 41875LL;

    t110 = ((x4989*(x4990&x4991))<<x4992);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x5001 = 1U;
	int16_t x5002 = INT16_MAX;
	uint64_t x5003 = UINT64_MAX;
	volatile uint64_t t111 = 1725201892345403LLU;

    t111 = ((x5001*(x5002&x5003))<<x5004);

    if (t111 != 134213632LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x5005 = 426LL;
	volatile int16_t x5006 = 9426;
	volatile int32_t x5007 = 257;
	volatile uint16_t x5008 = 1U;
	int64_t t112 = 4335700912167617LL;

    t112 = ((x5005*(x5006&x5007))<<x5008);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x5009 = -1;
	volatile uint64_t x5010 = 19821239440LLU;
	volatile int16_t x5011 = 1187;
	volatile int16_t x5012 = 1;
	uint64_t t113 = 3534310999319922099LLU;

    t113 = ((x5009*(x5010&x5011))<<x5012);

    if (t113 != 18446744073709549312LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x5017 = 102442826223268958LLU;
	uint8_t x5018 = UINT8_MAX;
	static int32_t x5020 = 4;
	volatile uint64_t t114 = 51702736590LLU;

    t114 = ((x5017*(x5018&x5019))<<x5020);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x5033 = UINT8_MAX;
	int8_t x5035 = 9;
	volatile int64_t t115 = -729LL;

    t115 = ((x5033*(x5034&x5035))<<x5036);

    if (t115 != 78855599554560LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x5037 = 293;
	volatile int64_t x5038 = INT64_MAX;
	uint16_t x5039 = 1U;
	volatile int64_t t116 = 3132239766232122LL;

    t116 = ((x5037*(x5038&x5039))<<x5040);

    if (t116 != 314606354432LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x5189 = 130;
	static uint16_t x5190 = 3285U;
	uint8_t x5192 = 3U;
	volatile uint64_t t117 = 468053828959435047LLU;

    t117 = ((x5189*(x5190&x5191))<<x5192);

    if (t117 != 1219920LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x5193 = INT64_MIN;
	volatile uint64_t x5194 = UINT64_MAX;
	volatile int8_t x5196 = 1;
	uint64_t t118 = 1681563LLU;

    t118 = ((x5193*(x5194&x5195))<<x5196);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x5209 = UINT64_MAX;
	uint32_t x5210 = 798U;
	static volatile int64_t x5211 = INT64_MIN;
	uint8_t x5212 = 3U;
	volatile uint64_t t119 = 1709886018408524LLU;

    t119 = ((x5209*(x5210&x5211))<<x5212);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x5433 = 8091217945LLU;
	volatile int16_t x5435 = INT16_MIN;
	uint64_t t120 = 38LLU;

    t120 = ((x5433*(x5434&x5435))<<x5436);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x5465 = 1686212U;
	uint64_t x5466 = 769076308LLU;
	uint32_t x5467 = 16823573U;
	volatile uint64_t t121 = 891269241219LLU;

    t121 = ((x5465*(x5466&x5467))<<x5468);

    if (t121 != 226444134398592LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x5493 = -1;
	volatile uint64_t x5494 = 6064442LLU;
	volatile uint64_t t122 = 1042821615LLU;

    t122 = ((x5493*(x5494&x5495))<<x5496);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x5509 = 119650654U;
	uint16_t x5510 = UINT16_MAX;
	static volatile uint8_t x5512 = 3U;
	static volatile int64_t t123 = -541255576117LL;

    t123 = ((x5509*(x5510&x5511))<<x5512);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x5625 = -1;
	int8_t x5626 = 1;
	int16_t x5627 = INT16_MIN;
	int32_t x5628 = 20;
	int32_t t124 = 126680411;

    t124 = ((x5625*(x5626&x5627))<<x5628);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x5637 = 77;
	int64_t x5638 = INT64_MIN;
	volatile int8_t x5640 = 6;
	volatile int64_t t125 = 26LL;

    t125 = ((x5637*(x5638&x5639))<<x5640);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x5685 = UINT8_MAX;
	uint16_t x5686 = 4299U;
	int8_t x5687 = INT8_MIN;
	uint8_t x5688 = 1U;
	int32_t t126 = 240761;

    t126 = ((x5685*(x5686&x5687))<<x5688);

    if (t126 != 2154240) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x5741 = 30U;
	volatile uint8_t x5742 = 29U;
	static uint64_t x5744 = 8LLU;
	int64_t t127 = -947LL;

    t127 = ((x5741*(x5742&x5743))<<x5744);

    if (t127 != 222720LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x5849 = 4977LL;
	static uint16_t x5850 = 3542U;
	int16_t x5851 = INT16_MIN;
	volatile int8_t x5852 = 1;
	volatile int64_t t128 = 788202986453745LL;

    t128 = ((x5849*(x5850&x5851))<<x5852);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x5863 = INT8_MAX;
	uint8_t x5864 = 1U;

    t129 = ((x5861*(x5862&x5863))<<x5864);

    if (t129 != 18446744073709547264LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x6009 = 30U;
	static volatile int8_t x6010 = INT8_MIN;
	uint64_t x6011 = 149118LLU;
	volatile uint8_t x6012 = 44U;
	volatile uint64_t t130 = 31267775153855LLU;

    t130 = ((x6009*(x6010&x6011))<<x6012);

    if (t130 != 4845873199050653696LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x6133 = -1LL;
	int64_t x6134 = INT64_MIN;
	int64_t x6135 = 962728517765335849LL;
	static volatile int16_t x6136 = 0;
	static volatile int64_t t131 = 87747335381433600LL;

    t131 = ((x6133*(x6134&x6135))<<x6136);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x6187 = -28890878690895268LL;
	uint64_t t132 = 52510644840440014LLU;

    t132 = ((x6185*(x6186&x6187))<<x6188);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x6245 = UINT8_MAX;
	uint8_t x6246 = 0U;
	int16_t x6248 = 0;
	volatile int32_t t133 = -4590;

    t133 = ((x6245*(x6246&x6247))<<x6248);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x6301 = 3U;
	int32_t t134 = -768309629;

    t134 = ((x6301*(x6302&x6303))<<x6304);

    if (t134 != 26928) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x6313 = -1LL;
	int32_t x6314 = INT32_MIN;
	int16_t x6315 = INT16_MIN;
	volatile int64_t t135 = 133029402759250LL;

    t135 = ((x6313*(x6314&x6315))<<x6316);

    if (t135 != 4294967296LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x6333 = UINT32_MAX;
	int64_t x6334 = 342331376420727397LL;
	uint16_t x6335 = 62U;
	uint16_t x6336 = 1U;
	volatile int64_t t136 = 2929397439LL;

    t136 = ((x6333*(x6334&x6335))<<x6336);

    if (t136 != 309237645240LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x6389 = 1375273758854153LLU;
	int32_t x6390 = INT32_MIN;
	static uint32_t x6391 = UINT32_MAX;
	int8_t x6392 = 12;
	volatile uint64_t t137 = 23144049095LLU;

    t137 = ((x6389*(x6390&x6391))<<x6392);

    if (t137 != 17032692955552415744LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x6401 = 1;
	uint16_t x6402 = 126U;
	uint64_t x6403 = UINT64_MAX;
	uint64_t t138 = 6174LLU;

    t138 = ((x6401*(x6402&x6403))<<x6404);

    if (t138 != 126LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x6425 = 7U;
	volatile uint8_t x6426 = 0U;
	int32_t x6427 = INT32_MIN;
	uint8_t x6428 = 25U;
	volatile int32_t t139 = 39737152;

    t139 = ((x6425*(x6426&x6427))<<x6428);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x6505 = 149LLU;
	int16_t x6506 = -3599;
	int32_t x6507 = INT32_MIN;
	static int16_t x6508 = 1;
	uint64_t t140 = 1454031087139227LLU;

    t140 = ((x6505*(x6506&x6507))<<x6508);

    if (t140 != 18446743433759424512LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x6613 = -1;
	uint16_t x6614 = 2943U;
	volatile int32_t x6615 = INT32_MIN;
	uint8_t x6616 = 1U;
	int32_t t141 = -920381;

    t141 = ((x6613*(x6614&x6615))<<x6616);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x6649 = UINT8_MAX;
	uint8_t x6651 = UINT8_MAX;
	int32_t t142 = -26;

    t142 = ((x6649*(x6650&x6651))<<x6652);

    if (t142 != 65025) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x6781 = 10LLU;
	uint8_t x6784 = 23U;
	uint64_t t143 = 1128975LLU;

    t143 = ((x6781*(x6782&x6783))<<x6784);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x6845 = INT16_MIN;
	int32_t x6846 = -13371;
	int16_t x6847 = -1;
	uint16_t x6848 = 1U;
	volatile int32_t t144 = -419383458;

    t144 = ((x6845*(x6846&x6847))<<x6848);

    if (t144 != 876281856) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x6853 = 31111584362173387LLU;
	static volatile int8_t x6854 = -6;
	volatile uint8_t x6856 = 4U;
	volatile uint64_t t145 = 409LLU;

    t145 = ((x6853*(x6854&x6855))<<x6856);

    if (t145 != 5389580453833796576LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x6874 = 52U;
	int64_t x6875 = INT64_MIN;
	uint8_t x6876 = 1U;
	int64_t t146 = 64531533LL;

    t146 = ((x6873*(x6874&x6875))<<x6876);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x6885 = 361620415LLU;
	int32_t x6886 = INT32_MIN;
	int16_t x6887 = INT16_MIN;
	static int8_t x6888 = 1;
	volatile uint64_t t147 = 2701LLU;

    t147 = ((x6885*(x6886&x6887))<<x6888);

    if (t147 != 16893596217718603776LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x6909 = 126;
	int8_t x6910 = INT8_MIN;
	uint16_t x6911 = 420U;
	uint16_t x6912 = 1U;

    t148 = ((x6909*(x6910&x6911))<<x6912);

    if (t148 != 96768) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x6933 = INT8_MIN;
	uint32_t x6934 = 40460U;
	int16_t x6935 = -1;
	volatile uint8_t x6936 = 10U;
	uint32_t t149 = 1U;

    t149 = ((x6933*(x6934&x6935))<<x6936);

    if (t149 != 3286761472U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x6937 = 4U;
	int64_t x6938 = INT64_MIN;
	static uint8_t x6939 = UINT8_MAX;
	int8_t x6940 = 6;
	int64_t t150 = -3LL;

    t150 = ((x6937*(x6938&x6939))<<x6940);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x6949 = 77561LLU;
	uint8_t x6950 = 57U;
	uint8_t x6952 = 3U;
	uint64_t t151 = 4424738LLU;

    t151 = ((x6949*(x6950&x6951))<<x6952);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x7037 = UINT64_MAX;
	int32_t x7039 = -1;
	uint8_t x7040 = 3U;

    t152 = ((x7037*(x7038&x7039))<<x7040);

    if (t152 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x7181 = INT8_MIN;
	int8_t x7182 = INT8_MIN;
	int32_t x7183 = 7;
	int8_t x7184 = 1;
	volatile int32_t t153 = -13;

    t153 = ((x7181*(x7182&x7183))<<x7184);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x7221 = 146132163U;
	uint16_t x7222 = 1U;
	volatile int8_t x7223 = INT8_MIN;
	uint16_t x7224 = 8U;
	volatile uint32_t t154 = 292119U;

    t154 = ((x7221*(x7222&x7223))<<x7224);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x7233 = -11;
	volatile uint8_t x7234 = 3U;
	static int8_t x7235 = INT8_MIN;
	volatile int32_t t155 = -6;

    t155 = ((x7233*(x7234&x7235))<<x7236);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x7245 = -1;
	static uint64_t x7246 = 225LLU;
	uint32_t x7247 = 56186U;
	uint16_t x7248 = 3U;
	uint64_t t156 = 744640753LLU;

    t156 = ((x7245*(x7246&x7247))<<x7248);

    if (t156 != 18446744073709550848LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x7257 = UINT64_MAX;
	static int16_t x7258 = INT16_MIN;
	static int32_t x7259 = INT32_MAX;
	uint8_t x7260 = 61U;
	uint64_t t157 = 11034LLU;

    t157 = ((x7257*(x7258&x7259))<<x7260);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x7301 = -485;
	uint64_t x7302 = UINT64_MAX;
	volatile int16_t x7303 = INT16_MAX;
	volatile uint16_t x7304 = 3U;
	volatile uint64_t t158 = 549519606245LLU;

    t158 = ((x7301*(x7302&x7303))<<x7304);

    if (t158 != 18446744073582415656LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x7369 = 7LLU;
	int64_t x7370 = -244117464375660LL;
	uint8_t x7371 = 1U;
	uint8_t x7372 = 61U;
	volatile uint64_t t159 = 1LLU;

    t159 = ((x7369*(x7370&x7371))<<x7372);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x7393 = INT16_MIN;
	int8_t x7395 = -1;
	static int8_t x7396 = 0;
	int32_t t160 = -4178021;

    t160 = ((x7393*(x7394&x7395))<<x7396);

    if (t160 != 32768) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x7414 = UINT64_MAX;
	int32_t x7415 = -1;
	uint64_t t161 = 1477957971940650620LLU;

    t161 = ((x7413*(x7414&x7415))<<x7416);

    if (t161 != 18446744073707915264LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x7417 = -691;
	int8_t x7418 = INT8_MIN;
	uint8_t x7419 = 1U;
	uint8_t x7420 = 1U;
	volatile int32_t t162 = 153;

    t162 = ((x7417*(x7418&x7419))<<x7420);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x7435 = INT8_MIN;
	uint32_t x7436 = 0U;
	static volatile int32_t t163 = 708;

    t163 = ((x7433*(x7434&x7435))<<x7436);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x7489 = 96U;
	int64_t x7490 = -1LL;
	int64_t t164 = -247316591126961220LL;

    t164 = ((x7489*(x7490&x7491))<<x7492);

    if (t164 != 192LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x7493 = 536787;
	volatile int32_t x7494 = INT32_MAX;
	uint32_t x7495 = UINT32_MAX;
	int32_t x7496 = 26;

    t165 = ((x7493*(x7494&x7495))<<x7496);

    if (t165 != 3019898880U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x7501 = INT8_MIN;
	static volatile int32_t x7502 = -1;
	uint32_t x7503 = UINT32_MAX;
	static uint8_t x7504 = 15U;
	volatile uint32_t t166 = 1U;

    t166 = ((x7501*(x7502&x7503))<<x7504);

    if (t166 != 4194304U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x7689 = INT8_MIN;
	int64_t x7690 = 41LL;
	static int16_t x7691 = -60;
	uint8_t x7692 = 59U;
	volatile int64_t t167 = 68976646LL;

    t167 = ((x7689*(x7690&x7691))<<x7692);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x7741 = INT8_MAX;
	static uint32_t x7742 = 304633U;
	uint16_t x7744 = 2U;
	static volatile uint32_t t168 = 628885U;

    t168 = ((x7741*(x7742&x7743))<<x7744);

    if (t168 != 4304284U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x7781 = -1;
	volatile uint8_t x7782 = 1U;
	static int64_t x7783 = 2LL;
	static uint8_t x7784 = 5U;
	int64_t t169 = 177544LL;

    t169 = ((x7781*(x7782&x7783))<<x7784);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x7898 = 0U;
	uint16_t x7899 = 8582U;
	uint8_t x7900 = 7U;
	volatile int32_t t170 = -83;

    t170 = ((x7897*(x7898&x7899))<<x7900);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x7930 = -1;
	int64_t x7931 = 7107514LL;
	int8_t x7932 = 1;
	int64_t t171 = -286579357854LL;

    t171 = ((x7929*(x7930&x7931))<<x7932);

    if (t171 != 14215028LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x7933 = INT8_MAX;
	uint8_t x7934 = UINT8_MAX;
	int64_t x7935 = INT64_MIN;
	int64_t t172 = 253839271360695140LL;

    t172 = ((x7933*(x7934&x7935))<<x7936);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x8033 = 9U;
	static uint8_t x8034 = 72U;
	volatile uint32_t x8035 = 715064U;
	uint32_t t173 = 3U;

    t173 = ((x8033*(x8034&x8035))<<x8036);

    if (t173 != 18432U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x8062 = -1;
	uint16_t x8063 = UINT16_MAX;
	static volatile int8_t x8064 = 3;
	int32_t t174 = -106;

    t174 = ((x8061*(x8062&x8063))<<x8064);

    if (t174 != 14155560) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x8078 = 4884U;
	uint8_t x8079 = 62U;
	static volatile int32_t x8080 = 1;

    t175 = ((x8077*(x8078&x8079))<<x8080);

    if (t175 != 920U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x8089 = INT32_MAX;
	int16_t x8090 = INT16_MIN;
	uint64_t x8091 = 5620320008447950720LLU;
	int16_t x8092 = 16;
	volatile uint64_t t176 = 123LLU;

    t176 = ((x8089*(x8090&x8091))<<x8092);

    if (t176 != 2070218152712601600LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x8221 = UINT64_MAX;
	uint16_t x8222 = 7609U;
	static volatile int32_t x8223 = INT32_MIN;
	volatile uint8_t x8224 = 2U;

    t177 = ((x8221*(x8222&x8223))<<x8224);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x8385 = -1LL;
	uint64_t x8386 = 6884088635091LLU;
	static uint16_t x8387 = 8U;
	uint8_t x8388 = 2U;
	volatile uint64_t t178 = 496023077000543783LLU;

    t178 = ((x8385*(x8386&x8387))<<x8388);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x8405 = INT8_MIN;
	int16_t x8407 = INT16_MIN;
	int32_t t179 = -85;

    t179 = ((x8405*(x8406&x8407))<<x8408);

    if (t179 != 134217728) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x8589 = 33392313;
	int16_t x8590 = -8099;
	uint64_t x8591 = UINT64_MAX;
	uint16_t x8592 = 22U;

    t180 = ((x8589*(x8590&x8591))<<x8592);

    if (t180 != 17312418284141805568LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x8705 = 42U;
	volatile int32_t x8706 = INT32_MIN;
	int32_t x8707 = -7;
	uint32_t t181 = 8U;

    t181 = ((x8705*(x8706&x8707))<<x8708);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x8737 = INT32_MAX;
	int64_t x8738 = 122LL;
	uint8_t x8740 = 2U;

    t182 = ((x8737*(x8738&x8739))<<x8740);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x8753 = 261377LL;
	static int64_t x8755 = -1LL;
	uint8_t x8756 = 26U;
	uint64_t t183 = 10011170858939159LLU;

    t183 = ((x8753*(x8754&x8755))<<x8756);

    if (t183 != 18446726532996005888LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint32_t x8761 = UINT32_MAX;
	uint16_t x8762 = 1U;
	int64_t x8763 = 86016890409116199LL;
	uint32_t x8764 = 0U;
	volatile int64_t t184 = 1224131385021LL;

    t184 = ((x8761*(x8762&x8763))<<x8764);

    if (t184 != 4294967295LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x8821 = 0;
	volatile uint16_t x8822 = 22696U;
	static uint16_t x8823 = UINT16_MAX;

    t185 = ((x8821*(x8822&x8823))<<x8824);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x8866 = 4186U;
	volatile uint64_t x8867 = 676562556928134609LLU;
	uint8_t x8868 = 2U;

    t186 = ((x8865*(x8866&x8867))<<x8868);

    if (t186 != 18446743386514784256LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x8869 = 5039U;
	int64_t x8870 = 67982023797LL;
	int64_t x8871 = INT64_MIN;
	volatile int8_t x8872 = 0;
	volatile int64_t t187 = 27656195LL;

    t187 = ((x8869*(x8870&x8871))<<x8872);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x8873 = 39;
	volatile int16_t x8875 = 810;
	int8_t x8876 = 4;
	uint64_t t188 = 0LLU;

    t188 = ((x8873*(x8874&x8875))<<x8876);

    if (t188 != 505440LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x8922 = 169;
	volatile int32_t x8923 = -1;
	uint32_t x8924 = 2U;
	volatile uint32_t t189 = 1737069317U;

    t189 = ((x8921*(x8922&x8923))<<x8924);

    if (t189 != 676U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x8966 = INT32_MIN;
	int8_t x8968 = 2;

    t190 = ((x8965*(x8966&x8967))<<x8968);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x9033 = 22577U;
	int64_t x9034 = -1LL;
	int8_t x9035 = 0;
	static volatile int64_t t191 = -21949870022308598LL;

    t191 = ((x9033*(x9034&x9035))<<x9036);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x9115 = 21LLU;

    t192 = ((x9113*(x9114&x9115))<<x9116);

    if (t192 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x9166 = INT64_MIN;
	static volatile int64_t x9167 = INT64_MAX;
	int64_t x9168 = 3LL;
	int64_t t193 = 106381390080179829LL;

    t193 = ((x9165*(x9166&x9167))<<x9168);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x9177 = 16U;
	static volatile uint64_t x9178 = 645675683393LLU;
	volatile int32_t x9179 = -1;
	int8_t x9180 = 0;
	volatile uint64_t t194 = 6645690566105LLU;

    t194 = ((x9177*(x9178&x9179))<<x9180);

    if (t194 != 10330810934288LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x9233 = INT8_MIN;
	uint64_t x9234 = 60748764LLU;
	static int32_t x9235 = INT32_MIN;
	uint64_t t195 = 30611318916113551LLU;

    t195 = ((x9233*(x9234&x9235))<<x9236);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x9353 = INT64_MIN;
	uint64_t x9354 = 1922134098999637LLU;
	static int64_t x9355 = 1741446294801935LL;
	uint8_t x9356 = 1U;
	uint64_t t196 = 18414LLU;

    t196 = ((x9353*(x9354&x9355))<<x9356);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x9389 = UINT64_MAX;
	volatile uint8_t x9390 = 31U;
	int32_t x9391 = INT32_MIN;
	volatile int32_t x9392 = 14;
	uint64_t t197 = 2400112LLU;

    t197 = ((x9389*(x9390&x9391))<<x9392);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x9473 = 355105002U;
	static int64_t x9474 = INT64_MIN;
	volatile int8_t x9476 = 7;

    t198 = ((x9473*(x9474&x9475))<<x9476);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x9505 = 47U;
	uint16_t x9506 = 210U;
	int32_t x9507 = INT32_MIN;

    t199 = ((x9505*(x9506&x9507))<<x9508);

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

