#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x57 = 1U;
int8_t x58 = INT8_MIN;
int64_t x60 = 18LL;
volatile int32_t t0 = 5831140;
volatile int32_t t1 = -808556;
static int16_t x229 = INT16_MIN;
uint32_t x386 = UINT32_MAX;
int8_t x438 = -52;
int8_t x440 = 0;
static int16_t x441 = INT16_MAX;
uint8_t x444 = 19U;
static uint32_t t5 = 1781790897U;
uint64_t x458 = 1831377246487795418LLU;
uint64_t x531 = 364161689333223150LLU;
volatile int64_t x661 = INT64_MAX;
uint8_t x664 = 4U;
volatile uint64_t t10 = 1299754680006646LLU;
uint8_t x774 = 0U;
volatile uint16_t x775 = 2330U;
int32_t x776 = 0;
uint64_t x846 = 261562LLU;
volatile uint8_t x848 = 61U;
int64_t x853 = INT64_MIN;
uint16_t x854 = UINT16_MAX;
static uint32_t x855 = 1149U;
static volatile int64_t t13 = 32520260141362LL;
uint16_t x867 = UINT16_MAX;
volatile int32_t t15 = -108171;
static int64_t x1016 = 0LL;
int16_t x1126 = INT16_MIN;
volatile uint8_t x1128 = 5U;
uint32_t x1184 = 0U;
static int32_t x1203 = 23814;
int8_t x1204 = 13;
volatile int32_t t25 = -984;
int8_t x1223 = -58;
uint64_t x1249 = 3751183905944372LLU;
int8_t x1252 = 0;
volatile uint64_t t27 = 244827499104932867LLU;
int64_t t28 = -80891109544090814LL;
uint32_t x1293 = UINT32_MAX;
static volatile uint16_t x1295 = 14U;
int8_t x1296 = 1;
volatile uint16_t x1320 = 3U;
uint64_t x1337 = UINT64_MAX;
uint16_t x1359 = UINT16_MAX;
int8_t x1360 = 3;
uint32_t t37 = 367383587U;
uint32_t x1482 = 1U;
volatile uint64_t x1511 = 418LLU;
uint64_t t40 = 51852LLU;
static int64_t x1629 = INT64_MIN;
uint64_t x1642 = 9727LLU;
uint64_t x1644 = 1LLU;
volatile int8_t x1674 = INT8_MAX;
int64_t x1811 = INT64_MAX;
static uint8_t x1812 = 35U;
int64_t t46 = -1LL;
static volatile int32_t x1886 = 78;
static int64_t x1984 = 3LL;
uint8_t x2084 = 0U;
volatile int64_t t52 = -3875762LL;
volatile int8_t x2149 = 0;
int16_t x2151 = INT16_MIN;
int64_t t54 = -403LL;
uint32_t x2246 = UINT32_MAX;
uint8_t x2248 = 2U;
uint32_t x2268 = 6U;
int64_t t57 = 195759571239386LL;
volatile int32_t t58 = -39754;
static int64_t x2294 = 8138LL;
int32_t x2443 = -125397;
uint32_t x2444 = 3U;
volatile uint8_t x2492 = 37U;
static int16_t x2699 = INT16_MIN;
int8_t x2724 = 9;
volatile uint16_t x2731 = 57U;
int32_t x2758 = -1;
int8_t x2760 = 9;
static int64_t x2799 = 76LL;
volatile uint64_t t66 = 251567084615LLU;
uint32_t t67 = 749664U;
uint16_t x3000 = 49U;
int32_t x3110 = -3;
volatile int8_t x3162 = -1;
volatile uint32_t t74 = 2128571U;
uint64_t x3318 = 1810LLU;
static volatile uint64_t t76 = 237016004082671796LLU;
volatile uint64_t t78 = 859608533LLU;
int16_t x3465 = 0;
volatile uint8_t x3467 = 20U;
volatile uint16_t x3487 = 28660U;
uint16_t x3494 = 14292U;
static uint64_t x3495 = UINT64_MAX;
uint64_t t81 = 404450555344107LLU;
uint8_t x3568 = 11U;
static int64_t x3606 = 31844158885LL;
int32_t x3726 = INT32_MIN;
int64_t x3806 = INT64_MAX;
int64_t t86 = 32LL;
int16_t x3969 = 55;
volatile uint64_t t88 = 1656303LLU;
int8_t x4013 = -52;
volatile int64_t x4014 = -364273651659LL;
volatile int32_t x4039 = INT32_MIN;
uint8_t x4087 = UINT8_MAX;
volatile uint32_t x4088 = 0U;
volatile int32_t t93 = -14044;
static int8_t x4251 = -1;
volatile int32_t t96 = 12;
int32_t t97 = -3380;
uint16_t x4264 = 10U;
uint32_t t98 = 3U;
uint64_t x4268 = 14LLU;


void f0(void) {
	int32_t x59 = -1;

	t0 = (((x57&x58)*x59)>>x60);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x125 = 3;
	uint16_t x126 = 32U;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = 7U;

	t1 = (((x125&x126)*x127)>>x128);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x230 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	static uint8_t x232 = 8U;
	static volatile uint64_t t2 = 75LLU;

	t2 = (((x229&x230)*x231)>>x232);

	if (t2 != 128LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x385 = 7U;
	uint32_t x387 = UINT32_MAX;
	static int8_t x388 = 0;
	volatile uint32_t t3 = 13U;

	t3 = (((x385&x386)*x387)>>x388);

	if (t3 != 4294967289U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x437 = 2U;
	uint64_t x439 = UINT64_MAX;
	volatile uint64_t t4 = 126LLU;

	t4 = (((x437&x438)*x439)>>x440);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x442 = -1;
	uint32_t x443 = 15U;

	t5 = (((x441&x442)*x443)>>x444);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x457 = 5100383307630LLU;
	static int8_t x459 = INT8_MIN;
	int8_t x460 = 45;
	uint64_t t6 = 33649LLU;

	t6 = (((x457&x458)*x459)>>x460);

	if (t6 != 524285LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x529 = UINT8_MAX;
	int64_t x530 = -4433364001LL;
	uint8_t x532 = 7U;
	uint64_t t7 = 233625LLU;

	t7 = (((x529&x530)*x531)>>x532);

	if (t7 != 57977190831801218LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x649 = UINT64_MAX;
	volatile int32_t x650 = INT32_MIN;
	int8_t x651 = INT8_MIN;
	uint8_t x652 = 1U;
	volatile uint64_t t8 = 508101598880LLU;

	t8 = (((x649&x650)*x651)>>x652);

	if (t8 != 137438953472LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x662 = INT32_MAX;
	static volatile uint64_t x663 = 102552LLU;
	uint64_t t9 = 16645813558429021LLU;

	t9 = (((x661&x662)*x663)>>x664);

	if (t9 != 13764296435446LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x693 = INT32_MAX;
	uint64_t x694 = UINT64_MAX;
	static int16_t x695 = INT16_MIN;
	static uint8_t x696 = 7U;

	t10 = (((x693&x694)*x695)>>x696);

	if (t10 != 144114638320042240LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x773 = 0LLU;
	static uint64_t t11 = 2LLU;

	t11 = (((x773&x774)*x775)>>x776);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x845 = 3;
	static int64_t x847 = -8415926490686LL;
	uint64_t t12 = 3391207113LLU;

	t12 = (((x845&x846)*x847)>>x848);

	if (t12 != 7LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x856 = 0;

	t13 = (((x853&x854)*x855)>>x856);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x865 = UINT64_MAX;
	uint32_t x866 = 245937U;
	uint8_t x868 = 30U;
	volatile uint64_t t14 = 29LLU;

	t14 = (((x865&x866)*x867)>>x868);

	if (t14 != 15LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x885 = -5;
	uint16_t x886 = UINT16_MAX;
	uint8_t x887 = UINT8_MAX;
	uint16_t x888 = 9U;

	t15 = (((x885&x886)*x887)>>x888);

	if (t15 != 32637) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1001 = -3;
	int8_t x1002 = -1;
	uint64_t x1003 = 55481387838761LLU;
	volatile int8_t x1004 = 20;
	volatile uint64_t t16 = 3LLU;

	t16 = (((x1001&x1002)*x1003)>>x1004);

	if (t16 != 17592027310892LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1013 = INT32_MIN;
	int8_t x1014 = -1;
	int64_t x1015 = -1LL;
	int64_t t17 = -13739272LL;

	t17 = (((x1013&x1014)*x1015)>>x1016);

	if (t17 != 2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1021 = INT32_MIN;
	int16_t x1022 = INT16_MAX;
	static uint16_t x1023 = UINT16_MAX;
	static int16_t x1024 = 0;
	int32_t t18 = 19480;

	t18 = (((x1021&x1022)*x1023)>>x1024);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1045 = INT32_MIN;
	uint16_t x1046 = UINT16_MAX;
	uint8_t x1047 = UINT8_MAX;
	int8_t x1048 = 0;
	volatile int32_t t19 = 55649;

	t19 = (((x1045&x1046)*x1047)>>x1048);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1093 = INT64_MIN;
	int64_t x1094 = 210929201LL;
	volatile int16_t x1095 = INT16_MAX;
	volatile uint8_t x1096 = 4U;
	int64_t t20 = -94438752139287189LL;

	t20 = (((x1093&x1094)*x1095)>>x1096);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1097 = UINT32_MAX;
	int64_t x1098 = INT64_MIN;
	uint16_t x1099 = UINT16_MAX;
	static int16_t x1100 = 1;
	volatile int64_t t21 = -628407255256610LL;

	t21 = (((x1097&x1098)*x1099)>>x1100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1125 = -1LL;
	static int32_t x1127 = -53425;
	int64_t t22 = -83911065659282LL;

	t22 = (((x1125&x1126)*x1127)>>x1128);

	if (t22 != 54707200LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1149 = INT64_MAX;
	int8_t x1150 = INT8_MIN;
	static uint64_t x1151 = 2465888939270LLU;
	volatile int64_t x1152 = 18LL;
	uint64_t t23 = 3345140LLU;

	t23 = (((x1149&x1150)*x1151)>>x1152);

	if (t23 != 70367540130330LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1181 = INT16_MIN;
	int32_t x1182 = INT32_MAX;
	int8_t x1183 = 0;
	int32_t t24 = -73;

	t24 = (((x1181&x1182)*x1183)>>x1184);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1201 = -1;
	uint16_t x1202 = UINT16_MAX;

	t25 = (((x1201&x1202)*x1203)>>x1204);

	if (t25 != 190509) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1221 = INT64_MAX;
	uint64_t x1222 = 2671921LLU;
	uint8_t x1224 = 21U;
	volatile uint64_t t26 = 72239589LLU;

	t26 = (((x1221&x1222)*x1223)>>x1224);

	if (t26 != 8796093022134LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1250 = 109U;
	static uint8_t x1251 = 6U;

	t27 = (((x1249&x1250)*x1251)>>x1252);

	if (t27 != 216LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1285 = UINT16_MAX;
	static volatile int64_t x1286 = INT64_MIN;
	int32_t x1287 = -1;
	static uint8_t x1288 = 10U;

	t28 = (((x1285&x1286)*x1287)>>x1288);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1294 = INT16_MIN;
	volatile uint32_t t29 = 5279U;

	t29 = (((x1293&x1294)*x1295)>>x1296);

	if (t29 != 2147254272U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1317 = 77LLU;
	static uint64_t x1318 = 551403386819498386LLU;
	volatile int32_t x1319 = INT32_MAX;
	static volatile uint64_t t30 = 103LLU;

	t30 = (((x1317&x1318)*x1319)>>x1320);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1338 = INT32_MAX;
	volatile uint64_t x1339 = 12LLU;
	int16_t x1340 = 4;
	uint64_t t31 = 656773923704977260LLU;

	t31 = (((x1337&x1338)*x1339)>>x1340);

	if (t31 != 1610612735LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1357 = 51963U;
	static uint8_t x1358 = 2U;
	static volatile uint32_t t32 = 2U;

	t32 = (((x1357&x1358)*x1359)>>x1360);

	if (t32 != 16383U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1373 = 3;
	int8_t x1374 = 2;
	uint8_t x1375 = 45U;
	uint32_t x1376 = 22U;
	volatile int32_t t33 = 3;

	t33 = (((x1373&x1374)*x1375)>>x1376);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1381 = 1U;
	int8_t x1382 = -4;
	static int64_t x1383 = -918LL;
	int8_t x1384 = 0;
	volatile int64_t t34 = 12046743099756355LL;

	t34 = (((x1381&x1382)*x1383)>>x1384);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1397 = INT16_MAX;
	int64_t x1398 = INT64_MIN;
	int8_t x1399 = INT8_MAX;
	volatile uint8_t x1400 = 3U;
	int64_t t35 = -1081520611144LL;

	t35 = (((x1397&x1398)*x1399)>>x1400);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1417 = INT16_MIN;
	uint64_t x1418 = 10563709LLU;
	int8_t x1419 = INT8_MIN;
	uint8_t x1420 = 10U;
	uint64_t t36 = 8462531311LLU;

	t36 = (((x1417&x1418)*x1419)>>x1420);

	if (t36 != 18014398508163072LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1429 = INT8_MIN;
	uint32_t x1430 = 6536U;
	static uint32_t x1431 = 471414U;
	volatile int16_t x1432 = 3;

	t37 = (((x1429&x1430)*x1431)>>x1432);

	if (t37 != 384673824U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1481 = UINT32_MAX;
	volatile uint8_t x1483 = UINT8_MAX;
	static uint16_t x1484 = 5U;
	uint32_t t38 = 29729U;

	t38 = (((x1481&x1482)*x1483)>>x1484);

	if (t38 != 7U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1509 = INT16_MIN;
	int64_t x1510 = INT64_MIN;
	volatile uint32_t x1512 = 17U;
	uint64_t t39 = 209441599844487313LLU;

	t39 = (((x1509&x1510)*x1511)>>x1512);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1521 = -1;
	uint64_t x1522 = 1278706563LLU;
	int8_t x1523 = -1;
	volatile uint16_t x1524 = 0U;

	t40 = (((x1521&x1522)*x1523)>>x1524);

	if (t40 != 18446744072430845053LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x1630 = 3010LLU;
	int64_t x1631 = -3LL;
	static volatile uint16_t x1632 = 13U;
	uint64_t t41 = 1LLU;

	t41 = (((x1629&x1630)*x1631)>>x1632);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1641 = -1LL;
	volatile uint64_t x1643 = 2690441077146LLU;
	uint64_t t42 = 21948758283639168LLU;

	t42 = (((x1641&x1642)*x1643)>>x1644);

	if (t42 != 13084960178699571LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1645 = UINT64_MAX;
	static uint8_t x1646 = 8U;
	volatile int16_t x1647 = INT16_MIN;
	int8_t x1648 = 0;
	uint64_t t43 = 6420073141268LLU;

	t43 = (((x1645&x1646)*x1647)>>x1648);

	if (t43 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1673 = 57291LLU;
	int16_t x1675 = INT16_MAX;
	static int32_t x1676 = 1;
	static volatile uint64_t t44 = 53955LLU;

	t44 = (((x1673&x1674)*x1675)>>x1676);

	if (t44 != 1228762LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x1689 = UINT64_MAX;
	int16_t x1690 = INT16_MIN;
	int8_t x1691 = INT8_MIN;
	static int8_t x1692 = 6;
	uint64_t t45 = 135LLU;

	t45 = (((x1689&x1690)*x1691)>>x1692);

	if (t45 != 65536LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1809 = UINT16_MAX;
	int32_t x1810 = INT32_MIN;

	t46 = (((x1809&x1810)*x1811)>>x1812);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1885 = 700U;
	static int8_t x1887 = INT8_MIN;
	uint16_t x1888 = 0U;
	volatile uint32_t t47 = 36U;

	t47 = (((x1885&x1886)*x1887)>>x1888);

	if (t47 != 4294965760U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1981 = -1;
	int8_t x1982 = INT8_MAX;
	int16_t x1983 = INT16_MAX;
	int32_t t48 = 3341;

	t48 = (((x1981&x1982)*x1983)>>x1984);

	if (t48 != 520176) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1993 = INT32_MAX;
	static int64_t x1994 = INT64_MIN;
	uint16_t x1995 = 142U;
	int32_t x1996 = 50;
	int64_t t49 = -1124170390936LL;

	t49 = (((x1993&x1994)*x1995)>>x1996);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2061 = UINT64_MAX;
	uint8_t x2062 = 0U;
	static uint16_t x2063 = 1876U;
	int8_t x2064 = 53;
	volatile uint64_t t50 = 205023119936448493LLU;

	t50 = (((x2061&x2062)*x2063)>>x2064);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2081 = UINT8_MAX;
	static int64_t x2082 = 7325594LL;
	static volatile int32_t x2083 = INT32_MAX;
	int64_t t51 = 3726092402LL;

	t51 = (((x2081&x2082)*x2083)>>x2084);

	if (t51 != 330712481638LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2097 = -73928328;
	uint16_t x2098 = 0U;
	int64_t x2099 = 1653LL;
	int64_t x2100 = 1LL;

	t52 = (((x2097&x2098)*x2099)>>x2100);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2141 = 462LLU;
	uint8_t x2142 = UINT8_MAX;
	int32_t x2143 = 27;
	int32_t x2144 = 3;
	static volatile uint64_t t53 = 32292331071LLU;

	t53 = (((x2141&x2142)*x2143)>>x2144);

	if (t53 != 695LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2150 = INT64_MIN;
	volatile uint8_t x2152 = 1U;

	t54 = (((x2149&x2150)*x2151)>>x2152);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2245 = -1LL;
	static volatile uint64_t x2247 = 576453LLU;
	uint64_t t55 = 29LLU;

	t55 = (((x2245&x2246)*x2247)>>x2248);

	if (t55 != 618961695526158LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2249 = -1;
	uint8_t x2250 = UINT8_MAX;
	volatile uint64_t x2251 = 162505866608804788LLU;
	int16_t x2252 = 22;
	volatile uint64_t t56 = 33455950LLU;

	t56 = (((x2249&x2250)*x2251)>>x2252);

	if (t56 != 1083733519989LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2265 = 1;
	int64_t x2266 = -1829402396457LL;
	volatile uint32_t x2267 = 38U;

	t57 = (((x2265&x2266)*x2267)>>x2268);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2285 = -9282;
	uint8_t x2286 = 50U;
	static uint16_t x2287 = 11U;
	uint8_t x2288 = 11U;

	t58 = (((x2285&x2286)*x2287)>>x2288);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x2293 = -47246574LL;
	int16_t x2295 = INT16_MAX;
	int16_t x2296 = 0;
	volatile int64_t t59 = 252LL;

	t59 = (((x2293&x2294)*x2295)>>x2296);

	if (t59 != 159444222LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2441 = INT8_MIN;
	int8_t x2442 = 9;
	static int32_t t60 = 7;

	t60 = (((x2441&x2442)*x2443)>>x2444);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2489 = 1U;
	int64_t x2490 = -2927993216LL;
	uint16_t x2491 = 13307U;
	volatile int64_t t61 = 1028620003088404LL;

	t61 = (((x2489&x2490)*x2491)>>x2492);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x2697 = INT32_MIN;
	uint8_t x2698 = 13U;
	volatile uint8_t x2700 = 4U;
	int32_t t62 = 29;

	t62 = (((x2697&x2698)*x2699)>>x2700);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2721 = UINT8_MAX;
	static int64_t x2722 = INT64_MIN;
	static uint8_t x2723 = 4U;
	volatile int64_t t63 = -51190520072205LL;

	t63 = (((x2721&x2722)*x2723)>>x2724);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2729 = INT16_MIN;
	uint64_t x2730 = 23LLU;
	int64_t x2732 = 1LL;
	uint64_t t64 = 39LLU;

	t64 = (((x2729&x2730)*x2731)>>x2732);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2757 = 1600675LLU;
	uint64_t x2759 = 18500LLU;
	volatile uint64_t t65 = 114159313LLU;

	t65 = (((x2757&x2758)*x2759)>>x2760);

	if (t65 != 57836889LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2797 = 26541034895LLU;
	uint8_t x2798 = UINT8_MAX;
	int8_t x2800 = 48;

	t66 = (((x2797&x2798)*x2799)>>x2800);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2897 = INT16_MIN;
	int16_t x2898 = INT16_MAX;
	uint32_t x2899 = UINT32_MAX;
	volatile uint8_t x2900 = 3U;

	t67 = (((x2897&x2898)*x2899)>>x2900);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x2997 = UINT16_MAX;
	uint64_t x2998 = UINT64_MAX;
	uint64_t x2999 = UINT64_MAX;
	uint64_t t68 = 37107636576921526LLU;

	t68 = (((x2997&x2998)*x2999)>>x3000);

	if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x3033 = 0;
	int16_t x3034 = INT16_MIN;
	static int16_t x3035 = INT16_MIN;
	uint16_t x3036 = 2U;
	int32_t t69 = 2;

	t69 = (((x3033&x3034)*x3035)>>x3036);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3085 = -1;
	int8_t x3086 = INT8_MIN;
	volatile int8_t x3087 = INT8_MIN;
	int8_t x3088 = 6;
	volatile int32_t t70 = 7;

	t70 = (((x3085&x3086)*x3087)>>x3088);

	if (t70 != 256) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x3105 = -1LL;
	static int8_t x3106 = -1;
	volatile uint64_t x3107 = 1LLU;
	uint64_t x3108 = 1LLU;
	uint64_t t71 = 1LLU;

	t71 = (((x3105&x3106)*x3107)>>x3108);

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x3109 = 0;
	uint64_t x3111 = 382564352LLU;
	uint8_t x3112 = 12U;
	static volatile uint64_t t72 = 118219193347LLU;

	t72 = (((x3109&x3110)*x3111)>>x3112);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x3161 = INT64_MIN;
	static uint64_t x3163 = 132884LLU;
	uint64_t x3164 = 4LLU;
	uint64_t t73 = 43608193300729LLU;

	t73 = (((x3161&x3162)*x3163)>>x3164);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x3269 = 6245U;
	int16_t x3270 = INT16_MAX;
	volatile uint32_t x3271 = 1936884424U;
	uint16_t x3272 = 2U;

	t74 = (((x3269&x3270)*x3271)>>x3272);

	if (t74 != 303830586U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3301 = INT64_MIN;
	uint16_t x3302 = 2U;
	static uint8_t x3303 = 101U;
	volatile int8_t x3304 = 38;
	int64_t t75 = 393469279646162LL;

	t75 = (((x3301&x3302)*x3303)>>x3304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3317 = -1;
	int64_t x3319 = -231763446LL;
	uint8_t x3320 = 21U;

	t76 = (((x3317&x3318)*x3319)>>x3320);

	if (t76 != 8796092822178LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x3413 = -604;
	uint8_t x3414 = UINT8_MAX;
	int64_t x3415 = 890492010217LL;
	uint8_t x3416 = 2U;
	volatile int64_t t77 = 1148434280527356794LL;

	t77 = (((x3413&x3414)*x3415)>>x3416);

	if (t77 != 36510172418897LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3437 = 10;
	int64_t x3438 = 871204533189217LL;
	uint64_t x3439 = 2115510651LLU;
	volatile uint8_t x3440 = 0U;

	t78 = (((x3437&x3438)*x3439)>>x3440);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x3466 = INT32_MIN;
	int8_t x3468 = 0;
	volatile int32_t t79 = -2065260;

	t79 = (((x3465&x3466)*x3467)>>x3468);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x3485 = INT16_MIN;
	static uint16_t x3486 = UINT16_MAX;
	volatile int8_t x3488 = 3;
	volatile int32_t t80 = -1;

	t80 = (((x3485&x3486)*x3487)>>x3488);

	if (t80 != 117391360) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3493 = INT16_MAX;
	int32_t x3496 = 6;

	t81 = (((x3493&x3494)*x3495)>>x3496);

	if (t81 != 288230376151711520LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3533 = 57054258143965220LLU;
	volatile int8_t x3534 = INT8_MIN;
	int32_t x3535 = INT32_MIN;
	volatile uint16_t x3536 = 17U;
	volatile uint64_t t82 = 1815446LLU;

	t82 = (((x3533&x3534)*x3535)>>x3536);

	if (t82 != 24850479448064LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x3565 = 2555;
	static int32_t x3566 = INT32_MIN;
	int8_t x3567 = INT8_MAX;
	int32_t t83 = -1;

	t83 = (((x3565&x3566)*x3567)>>x3568);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x3605 = -8;
	int16_t x3607 = 6;
	int16_t x3608 = 0;
	static int64_t t84 = 7017LL;

	t84 = (((x3605&x3606)*x3607)>>x3608);

	if (t84 != 191064953280LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3725 = UINT64_MAX;
	int8_t x3727 = 10;
	int32_t x3728 = 7;
	uint64_t t85 = 1784152LLU;

	t85 = (((x3725&x3726)*x3727)>>x3728);

	if (t85 != 144115187908083712LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x3805 = INT64_MIN;
	int64_t x3807 = -1LL;
	int16_t x3808 = 1;

	t86 = (((x3805&x3806)*x3807)>>x3808);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x3861 = INT32_MAX;
	uint64_t x3862 = UINT64_MAX;
	int16_t x3863 = 4942;
	uint16_t x3864 = 3U;
	volatile uint64_t t87 = 4420861LLU;

	t87 = (((x3861&x3862)*x3863)>>x3864);

	if (t87 != 1326608022934LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3970 = INT8_MIN;
	uint64_t x3971 = UINT64_MAX;
	static uint16_t x3972 = 0U;

	t88 = (((x3969&x3970)*x3971)>>x3972);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4015 = -4;
	static uint16_t x4016 = 3U;
	volatile int64_t t89 = -17966965987457165LL;

	t89 = (((x4013&x4014)*x4015)>>x4016);

	if (t89 != 182136825854LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4037 = 0U;
	int64_t x4038 = -1LL;
	static uint8_t x4040 = 4U;
	int64_t t90 = -2313114LL;

	t90 = (((x4037&x4038)*x4039)>>x4040);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4061 = -1;
	uint32_t x4062 = 2U;
	int16_t x4063 = INT16_MIN;
	int16_t x4064 = 12;
	uint32_t t91 = 44672U;

	t91 = (((x4061&x4062)*x4063)>>x4064);

	if (t91 != 1048560U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4085 = 0;
	int16_t x4086 = -1;
	int32_t t92 = 2655513;

	t92 = (((x4085&x4086)*x4087)>>x4088);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x4101 = UINT8_MAX;
	int32_t x4102 = INT32_MAX;
	int16_t x4103 = INT16_MAX;
	static uint8_t x4104 = 8U;

	t93 = (((x4101&x4102)*x4103)>>x4104);

	if (t93 != 32639) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x4169 = UINT16_MAX;
	int8_t x4170 = -19;
	uint8_t x4171 = UINT8_MAX;
	uint8_t x4172 = 5U;
	int32_t t94 = -22;

	t94 = (((x4169&x4170)*x4171)>>x4172);

	if (t94 != 522088) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x4221 = 174;
	static uint32_t x4222 = UINT32_MAX;
	uint8_t x4223 = 1U;
	int8_t x4224 = 0;
	uint32_t t95 = 50603697U;

	t95 = (((x4221&x4222)*x4223)>>x4224);

	if (t95 != 174U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4249 = INT32_MAX;
	int32_t x4250 = INT32_MIN;
	uint16_t x4252 = 0U;

	t96 = (((x4249&x4250)*x4251)>>x4252);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x4253 = 11580;
	static int32_t x4254 = INT32_MAX;
	volatile uint16_t x4255 = 76U;
	volatile uint8_t x4256 = 2U;

	t97 = (((x4253&x4254)*x4255)>>x4256);

	if (t97 != 220020) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4261 = 92359127U;
	int16_t x4262 = INT16_MAX;
	int16_t x4263 = INT16_MIN;

	t98 = (((x4261&x4262)*x4263)>>x4264);

	if (t98 != 3589408U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x4265 = -1;
	volatile uint16_t x4266 = UINT16_MAX;
	static volatile uint8_t x4267 = UINT8_MAX;
	static volatile int32_t t99 = 22;

	t99 = (((x4265&x4266)*x4267)>>x4268);

	if (t99 != 1019) { NG(); } else { ; }
	
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

