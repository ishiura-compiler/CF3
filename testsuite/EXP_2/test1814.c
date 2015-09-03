#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
int8_t x76 = 13;
uint16_t x140 = 0U;
int16_t x159 = -26;
int8_t x161 = INT8_MIN;
volatile int32_t t5 = -29072088;
uint64_t x289 = UINT64_MAX;
static int32_t x291 = 7180472;
uint8_t x324 = 1U;
static uint16_t x362 = 1U;
uint32_t x424 = 29U;
static int32_t x547 = INT32_MIN;
volatile int32_t t16 = 664810;
static int8_t x595 = INT8_MIN;
static uint16_t x610 = 3669U;
int8_t x612 = 7;
int8_t x692 = 2;
volatile uint8_t x705 = UINT8_MAX;
uint8_t x708 = 17U;
static int8_t x816 = 11;
uint32_t x852 = 0U;
uint64_t x857 = UINT64_MAX;
volatile uint64_t x899 = UINT64_MAX;
uint8_t x939 = 25U;
volatile int8_t x940 = 8;
uint16_t x1036 = 8U;
volatile int64_t x1051 = INT64_MAX;
uint8_t x1060 = 0U;
uint8_t x1082 = UINT8_MAX;
static uint16_t x1083 = 626U;
int32_t t36 = 395;
int16_t x1139 = -1;
int16_t x1161 = INT16_MAX;
static uint16_t x1164 = 0U;
int32_t x1187 = -1;
int32_t t40 = 1010185397;
int64_t x1207 = -13LL;
uint8_t x1276 = 7U;
volatile int16_t x1277 = -1;
int64_t x1278 = -2090134121922LL;
int8_t x1279 = INT8_MIN;
int16_t x1289 = INT16_MIN;
static uint32_t x1290 = UINT32_MAX;
uint32_t x1339 = UINT32_MAX;
int8_t x1340 = 1;
uint8_t x1376 = 29U;
int8_t x1388 = 0;
int16_t x1484 = 3;
uint64_t x1497 = 6166543454264LLU;
volatile int32_t t52 = 1810601;
int32_t t53 = 7694;
uint64_t x1525 = UINT64_MAX;
uint16_t x1530 = UINT16_MAX;
static uint16_t x1589 = 16136U;
static int32_t x1690 = INT32_MAX;
uint16_t x1691 = UINT16_MAX;
volatile int8_t x1692 = 0;
int32_t x1778 = -1;
volatile uint16_t x1782 = UINT16_MAX;
int32_t x1794 = 13198137;
int8_t x1808 = 2;
int32_t x1922 = 434173096;
int8_t x1923 = 0;
uint32_t x1943 = 208U;
static volatile int32_t t72 = 4584;
int16_t x1958 = INT16_MIN;
static int32_t t75 = -114;
int32_t t76 = -5179;
int16_t x2137 = INT16_MAX;
volatile int8_t x2248 = 0;
uint16_t x2278 = UINT16_MAX;
volatile int32_t t79 = -224686;
int32_t x2281 = -8342979;
int8_t x2282 = INT8_MIN;
static volatile int8_t x2314 = INT8_MIN;
static uint8_t x2378 = UINT8_MAX;
int32_t x2410 = INT32_MAX;
int64_t x2414 = INT64_MAX;
int32_t x2462 = INT32_MIN;
static int8_t x2464 = 0;
uint32_t x2466 = 103364U;
int32_t t86 = -441961683;
uint32_t x2489 = 5376U;
uint32_t x2527 = 307015665U;
uint8_t x2660 = 17U;
int8_t x2710 = INT8_MIN;
static int16_t x2768 = 2;
uint8_t x2841 = 0U;
static int64_t x2881 = INT64_MIN;
static int16_t x2901 = INT16_MIN;
static uint8_t x3043 = 0U;
volatile int8_t x3044 = 31;


void f0(void) {
	int8_t x6 = INT8_MAX;
	static int32_t x7 = INT32_MIN;
	volatile uint8_t x8 = 0U;
	int32_t t0 = 8417;

	t0 = ((x5<=(x6&x7))>>x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x73 = INT32_MIN;
	volatile int64_t x74 = INT64_MIN;
	volatile int8_t x75 = INT8_MIN;
	volatile int32_t t1 = 0;

	t1 = ((x73<=(x74&x75))>>x76);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x137 = UINT16_MAX;
	uint16_t x138 = 15945U;
	static int8_t x139 = -1;
	int32_t t2 = -10689;

	t2 = ((x137<=(x138&x139))>>x140);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x157 = 72U;
	int32_t x158 = -1;
	static int8_t x160 = 10;
	int32_t t3 = -504064;

	t3 = ((x157<=(x158&x159))>>x160);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x162 = 0U;
	int8_t x163 = -11;
	uint8_t x164 = 0U;
	int32_t t4 = -241921;

	t4 = ((x161<=(x162&x163))>>x164);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x245 = 210U;
	int64_t x246 = INT64_MAX;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = 3;

	t5 = ((x245<=(x246&x247))>>x248);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x253 = -7;
	volatile uint8_t x254 = 46U;
	static uint16_t x255 = 0U;
	volatile int8_t x256 = 0;
	static volatile int32_t t6 = -19;

	t6 = ((x253<=(x254&x255))>>x256);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x290 = 48;
	static int32_t x292 = 13;
	static volatile int32_t t7 = 5603656;

	t7 = ((x289<=(x290&x291))>>x292);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x301 = 9U;
	volatile uint16_t x302 = 1U;
	int16_t x303 = 63;
	int8_t x304 = 3;
	int32_t t8 = 7736450;

	t8 = ((x301<=(x302&x303))>>x304);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x313 = 9U;
	int16_t x314 = INT16_MAX;
	uint32_t x315 = 308447U;
	uint8_t x316 = 0U;
	volatile int32_t t9 = -3;

	t9 = ((x313<=(x314&x315))>>x316);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x321 = 2400095LL;
	int8_t x322 = 1;
	static volatile uint8_t x323 = UINT8_MAX;
	int32_t t10 = -130743980;

	t10 = ((x321<=(x322&x323))>>x324);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = 644816306536609987LLU;
	int32_t x347 = INT32_MIN;
	static uint16_t x348 = 0U;
	volatile int32_t t11 = 2144;

	t11 = ((x345<=(x346&x347))>>x348);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x361 = -914;
	int32_t x363 = -1;
	volatile uint8_t x364 = 2U;
	int32_t t12 = 12;

	t12 = ((x361<=(x362&x363))>>x364);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x421 = -1;
	volatile int64_t x422 = -25839593LL;
	static volatile uint16_t x423 = UINT16_MAX;
	int32_t t13 = 39581468;

	t13 = ((x421<=(x422&x423))>>x424);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MIN;
	int64_t x443 = 2LL;
	volatile uint8_t x444 = 0U;
	int32_t t14 = 9314;

	t14 = ((x441<=(x442&x443))>>x444);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x445 = 215267261LLU;
	uint16_t x446 = 6U;
	int16_t x447 = -1;
	uint16_t x448 = 0U;
	int32_t t15 = 29499;

	t15 = ((x445<=(x446&x447))>>x448);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x545 = INT16_MAX;
	static int64_t x546 = 2545822190549LL;
	int8_t x548 = 0;

	t16 = ((x545<=(x546&x547))>>x548);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x593 = UINT32_MAX;
	uint8_t x594 = 27U;
	uint16_t x596 = 5U;
	int32_t t17 = 0;

	t17 = ((x593<=(x594&x595))>>x596);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x609 = INT8_MIN;
	uint16_t x611 = 84U;
	volatile int32_t t18 = 223;

	t18 = ((x609<=(x610&x611))>>x612);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x689 = INT8_MIN;
	uint32_t x690 = 3600U;
	static uint32_t x691 = UINT32_MAX;
	volatile int32_t t19 = 929;

	t19 = ((x689<=(x690&x691))>>x692);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x706 = INT32_MIN;
	static int16_t x707 = -7792;
	int32_t t20 = 0;

	t20 = ((x705<=(x706&x707))>>x708);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x809 = INT32_MIN;
	int64_t x810 = 94LL;
	int64_t x811 = -1LL;
	uint8_t x812 = 30U;
	static int32_t t21 = -7208012;

	t21 = ((x809<=(x810&x811))>>x812);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x813 = INT32_MIN;
	int64_t x814 = -6258916709218140LL;
	volatile uint32_t x815 = 74554U;
	int32_t t22 = 2;

	t22 = ((x813<=(x814&x815))>>x816);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x849 = 45U;
	volatile uint64_t x850 = UINT64_MAX;
	int64_t x851 = -271873329116LL;
	int32_t t23 = 47134;

	t23 = ((x849<=(x850&x851))>>x852);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x858 = -1;
	volatile int64_t x859 = INT64_MAX;
	uint8_t x860 = 13U;
	int32_t t24 = 2335;

	t24 = ((x857<=(x858&x859))>>x860);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x869 = INT8_MIN;
	int64_t x870 = -1LL;
	int16_t x871 = INT16_MIN;
	int8_t x872 = 1;
	volatile int32_t t25 = 4;

	t25 = ((x869<=(x870&x871))>>x872);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x897 = -1518LL;
	static int16_t x898 = -1;
	uint8_t x900 = 13U;
	volatile int32_t t26 = -1489;

	t26 = ((x897<=(x898&x899))>>x900);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x937 = 60U;
	int32_t x938 = -1;
	static int32_t t27 = 1372064;

	t27 = ((x937<=(x938&x939))>>x940);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x985 = -1LL;
	int16_t x986 = INT16_MIN;
	int32_t x987 = -1;
	int8_t x988 = 0;
	static volatile int32_t t28 = 11;

	t28 = ((x985<=(x986&x987))>>x988);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1009 = -1;
	static int16_t x1010 = INT16_MIN;
	volatile int16_t x1011 = -5;
	uint16_t x1012 = 0U;
	volatile int32_t t29 = 241;

	t29 = ((x1009<=(x1010&x1011))>>x1012);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1033 = -1;
	uint32_t x1034 = 219154413U;
	static int32_t x1035 = -4356544;
	volatile int32_t t30 = -25567;

	t30 = ((x1033<=(x1034&x1035))>>x1036);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1041 = INT16_MIN;
	static volatile int16_t x1042 = INT16_MIN;
	volatile int8_t x1043 = -1;
	int32_t x1044 = 20;
	volatile int32_t t31 = 106312579;

	t31 = ((x1041<=(x1042&x1043))>>x1044);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1049 = 0U;
	int32_t x1050 = INT32_MAX;
	int32_t x1052 = 0;
	int32_t t32 = -8120593;

	t32 = ((x1049<=(x1050&x1051))>>x1052);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1057 = UINT8_MAX;
	static int64_t x1058 = INT64_MIN;
	uint32_t x1059 = 645441U;
	volatile int32_t t33 = -10;

	t33 = ((x1057<=(x1058&x1059))>>x1060);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1081 = -193553262486LL;
	int8_t x1084 = 7;
	int32_t t34 = 46090;

	t34 = ((x1081<=(x1082&x1083))>>x1084);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1117 = -1;
	volatile int64_t x1118 = 1LL;
	volatile uint8_t x1119 = UINT8_MAX;
	uint16_t x1120 = 1U;
	int32_t t35 = -70443602;

	t35 = ((x1117<=(x1118&x1119))>>x1120);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1125 = 14843;
	uint16_t x1126 = 18011U;
	uint32_t x1127 = 25119U;
	volatile uint32_t x1128 = 30U;

	t36 = ((x1125<=(x1126&x1127))>>x1128);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1137 = 5;
	volatile int16_t x1138 = INT16_MIN;
	int32_t x1140 = 2;
	volatile int32_t t37 = -1019;

	t37 = ((x1137<=(x1138&x1139))>>x1140);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1162 = UINT8_MAX;
	int16_t x1163 = -11016;
	volatile int32_t t38 = -193296;

	t38 = ((x1161<=(x1162&x1163))>>x1164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1173 = UINT8_MAX;
	static volatile uint64_t x1174 = 2460577LLU;
	int16_t x1175 = -1;
	uint8_t x1176 = 16U;
	static int32_t t39 = -37813;

	t39 = ((x1173<=(x1174&x1175))>>x1176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x1185 = UINT16_MAX;
	int64_t x1186 = INT64_MIN;
	static int8_t x1188 = 1;

	t40 = ((x1185<=(x1186&x1187))>>x1188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x1205 = 16587175882156610LLU;
	int32_t x1206 = -108993008;
	uint16_t x1208 = 7U;
	int32_t t41 = -3133;

	t41 = ((x1205<=(x1206&x1207))>>x1208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1257 = 1;
	int8_t x1258 = -3;
	int8_t x1259 = -14;
	uint8_t x1260 = 0U;
	static volatile int32_t t42 = -3013;

	t42 = ((x1257<=(x1258&x1259))>>x1260);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1273 = INT8_MIN;
	uint64_t x1274 = 144LLU;
	uint8_t x1275 = UINT8_MAX;
	static int32_t t43 = 40753294;

	t43 = ((x1273<=(x1274&x1275))>>x1276);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1280 = 0U;
	volatile int32_t t44 = 27;

	t44 = ((x1277<=(x1278&x1279))>>x1280);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1291 = UINT16_MAX;
	uint8_t x1292 = 3U;
	volatile int32_t t45 = 632256981;

	t45 = ((x1289<=(x1290&x1291))>>x1292);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x1305 = 2134713LLU;
	uint8_t x1306 = UINT8_MAX;
	int16_t x1307 = -1;
	volatile uint8_t x1308 = 9U;
	volatile int32_t t46 = -29624450;

	t46 = ((x1305<=(x1306&x1307))>>x1308);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1337 = INT16_MIN;
	int8_t x1338 = 58;
	volatile int32_t t47 = -528769;

	t47 = ((x1337<=(x1338&x1339))>>x1340);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1373 = 243U;
	volatile uint16_t x1374 = 2U;
	static uint16_t x1375 = UINT16_MAX;
	int32_t t48 = -110420;

	t48 = ((x1373<=(x1374&x1375))>>x1376);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1385 = 4016U;
	int32_t x1386 = INT32_MIN;
	static uint32_t x1387 = 162U;
	volatile int32_t t49 = 1;

	t49 = ((x1385<=(x1386&x1387))>>x1388);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1405 = UINT16_MAX;
	static int64_t x1406 = -2963933521643026LL;
	int16_t x1407 = INT16_MAX;
	uint32_t x1408 = 6U;
	static int32_t t50 = -28288033;

	t50 = ((x1405<=(x1406&x1407))>>x1408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1481 = INT8_MIN;
	int8_t x1482 = -1;
	int8_t x1483 = -1;
	int32_t t51 = -327;

	t51 = ((x1481<=(x1482&x1483))>>x1484);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1498 = INT8_MAX;
	uint16_t x1499 = 2385U;
	volatile uint64_t x1500 = 5LLU;

	t52 = ((x1497<=(x1498&x1499))>>x1500);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1513 = 27269U;
	uint32_t x1514 = UINT32_MAX;
	volatile int32_t x1515 = INT32_MAX;
	uint8_t x1516 = 7U;

	t53 = ((x1513<=(x1514&x1515))>>x1516);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1526 = 1846315U;
	uint8_t x1527 = 43U;
	volatile int8_t x1528 = 1;
	volatile int32_t t54 = -30475881;

	t54 = ((x1525<=(x1526&x1527))>>x1528);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1529 = INT32_MIN;
	int32_t x1531 = -115048979;
	static int8_t x1532 = 1;
	int32_t t55 = -3823;

	t55 = ((x1529<=(x1530&x1531))>>x1532);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x1561 = 1073U;
	static int64_t x1562 = INT64_MIN;
	volatile int16_t x1563 = -5708;
	int8_t x1564 = 0;
	static volatile int32_t t56 = -32;

	t56 = ((x1561<=(x1562&x1563))>>x1564);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1573 = 4;
	static int32_t x1574 = -1;
	int16_t x1575 = -2;
	static int8_t x1576 = 2;
	volatile int32_t t57 = 1037778080;

	t57 = ((x1573<=(x1574&x1575))>>x1576);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1590 = INT64_MIN;
	static int32_t x1591 = -1460;
	static int32_t x1592 = 4;
	int32_t t58 = 64586;

	t58 = ((x1589<=(x1590&x1591))>>x1592);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x1665 = UINT64_MAX;
	int64_t x1666 = -1LL;
	int64_t x1667 = INT64_MAX;
	uint8_t x1668 = 1U;
	int32_t t59 = -20;

	t59 = ((x1665<=(x1666&x1667))>>x1668);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1689 = UINT8_MAX;
	volatile int32_t t60 = 98142154;

	t60 = ((x1689<=(x1690&x1691))>>x1692);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x1693 = INT64_MAX;
	volatile uint32_t x1694 = 666151U;
	uint16_t x1695 = UINT16_MAX;
	uint8_t x1696 = 24U;
	volatile int32_t t61 = 13;

	t61 = ((x1693<=(x1694&x1695))>>x1696);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1709 = 1LL;
	volatile uint8_t x1710 = UINT8_MAX;
	int16_t x1711 = INT16_MIN;
	static volatile uint64_t x1712 = 2LLU;
	static volatile int32_t t62 = -702305660;

	t62 = ((x1709<=(x1710&x1711))>>x1712);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1777 = INT32_MAX;
	int64_t x1779 = -36111014039LL;
	uint8_t x1780 = 31U;
	static volatile int32_t t63 = 132435899;

	t63 = ((x1777<=(x1778&x1779))>>x1780);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1781 = 3855;
	static volatile uint16_t x1783 = 26U;
	int8_t x1784 = 0;
	volatile int32_t t64 = 28;

	t64 = ((x1781<=(x1782&x1783))>>x1784);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1793 = -13583290007633LL;
	int16_t x1795 = -3561;
	static int16_t x1796 = 1;
	volatile int32_t t65 = -26824989;

	t65 = ((x1793<=(x1794&x1795))>>x1796);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1801 = -993515838;
	volatile uint8_t x1802 = 2U;
	int32_t x1803 = 131005570;
	uint8_t x1804 = 5U;
	int32_t t66 = -674024461;

	t66 = ((x1801<=(x1802&x1803))>>x1804);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1805 = 62985512339166807LL;
	uint16_t x1806 = 710U;
	uint32_t x1807 = 30554216U;
	volatile int32_t t67 = 6112526;

	t67 = ((x1805<=(x1806&x1807))>>x1808);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x1869 = INT32_MIN;
	volatile int16_t x1870 = INT16_MIN;
	uint64_t x1871 = 164843LLU;
	static volatile uint16_t x1872 = 2U;
	volatile int32_t t68 = 9054356;

	t68 = ((x1869<=(x1870&x1871))>>x1872);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1873 = 2094;
	int64_t x1874 = -10689437LL;
	int64_t x1875 = INT64_MIN;
	static int32_t x1876 = 21;
	static volatile int32_t t69 = -1;

	t69 = ((x1873<=(x1874&x1875))>>x1876);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1921 = -22534;
	static uint32_t x1924 = 3U;
	volatile int32_t t70 = 15095472;

	t70 = ((x1921<=(x1922&x1923))>>x1924);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1941 = INT8_MAX;
	uint16_t x1942 = 13U;
	static uint64_t x1944 = 7LLU;
	int32_t t71 = 559;

	t71 = ((x1941<=(x1942&x1943))>>x1944);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1953 = -83676345293294866LL;
	static int16_t x1954 = -1;
	uint32_t x1955 = 2U;
	volatile uint8_t x1956 = 25U;

	t72 = ((x1953<=(x1954&x1955))>>x1956);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1957 = 6909;
	volatile int16_t x1959 = -2223;
	volatile uint64_t x1960 = 1LLU;
	static volatile int32_t t73 = -9;

	t73 = ((x1957<=(x1958&x1959))>>x1960);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x1977 = UINT16_MAX;
	int16_t x1978 = INT16_MIN;
	volatile uint32_t x1979 = 27624U;
	volatile uint64_t x1980 = 2LLU;
	static int32_t t74 = -67521102;

	t74 = ((x1977<=(x1978&x1979))>>x1980);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2073 = INT32_MIN;
	uint64_t x2074 = 2LLU;
	static uint8_t x2075 = 7U;
	uint16_t x2076 = 1U;

	t75 = ((x2073<=(x2074&x2075))>>x2076);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2085 = -1694832;
	static int8_t x2086 = INT8_MAX;
	volatile int8_t x2087 = 10;
	uint8_t x2088 = 4U;

	t76 = ((x2085<=(x2086&x2087))>>x2088);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2138 = INT64_MIN;
	int8_t x2139 = -1;
	int16_t x2140 = 7;
	static int32_t t77 = -95800428;

	t77 = ((x2137<=(x2138&x2139))>>x2140);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2245 = 135229;
	int16_t x2246 = INT16_MIN;
	int32_t x2247 = -1;
	volatile int32_t t78 = -28513881;

	t78 = ((x2245<=(x2246&x2247))>>x2248);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2277 = -1;
	int8_t x2279 = -6;
	uint64_t x2280 = 2LLU;

	t79 = ((x2277<=(x2278&x2279))>>x2280);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2283 = INT32_MIN;
	int8_t x2284 = 3;
	static volatile int32_t t80 = 117226039;

	t80 = ((x2281<=(x2282&x2283))>>x2284);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x2313 = INT8_MIN;
	int8_t x2315 = -1;
	static int8_t x2316 = 0;
	int32_t t81 = -1;

	t81 = ((x2313<=(x2314&x2315))>>x2316);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2377 = 2LLU;
	uint16_t x2379 = 3U;
	uint8_t x2380 = 2U;
	static volatile int32_t t82 = 1;

	t82 = ((x2377<=(x2378&x2379))>>x2380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x2409 = 1U;
	volatile int8_t x2411 = 1;
	uint8_t x2412 = 26U;
	static int32_t t83 = -284600169;

	t83 = ((x2409<=(x2410&x2411))>>x2412);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2413 = 1943;
	volatile int64_t x2415 = 131259094082LL;
	static int16_t x2416 = 4;
	volatile int32_t t84 = -14;

	t84 = ((x2413<=(x2414&x2415))>>x2416);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x2461 = 3U;
	int64_t x2463 = 41818996913LL;
	volatile int32_t t85 = 435372624;

	t85 = ((x2461<=(x2462&x2463))>>x2464);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x2465 = 92881784939LL;
	static uint16_t x2467 = 1U;
	uint8_t x2468 = 29U;

	t86 = ((x2465<=(x2466&x2467))>>x2468);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2473 = INT64_MIN;
	static int32_t x2474 = -61;
	volatile uint64_t x2475 = 59938371244LLU;
	uint8_t x2476 = 5U;
	static int32_t t87 = -3813721;

	t87 = ((x2473<=(x2474&x2475))>>x2476);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x2490 = UINT16_MAX;
	int8_t x2491 = 4;
	uint8_t x2492 = 2U;
	volatile int32_t t88 = -29086810;

	t88 = ((x2489<=(x2490&x2491))>>x2492);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x2525 = INT64_MIN;
	int64_t x2526 = INT64_MIN;
	volatile uint16_t x2528 = 0U;
	volatile int32_t t89 = 298;

	t89 = ((x2525<=(x2526&x2527))>>x2528);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2657 = INT32_MAX;
	int32_t x2658 = -1;
	static int16_t x2659 = INT16_MAX;
	volatile int32_t t90 = 7966599;

	t90 = ((x2657<=(x2658&x2659))>>x2660);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2709 = INT8_MIN;
	int64_t x2711 = INT64_MIN;
	uint8_t x2712 = 1U;
	static volatile int32_t t91 = 2;

	t91 = ((x2709<=(x2710&x2711))>>x2712);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2765 = UINT8_MAX;
	static int32_t x2766 = INT32_MIN;
	static int32_t x2767 = INT32_MIN;
	volatile int32_t t92 = 50148;

	t92 = ((x2765<=(x2766&x2767))>>x2768);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2781 = UINT64_MAX;
	static int32_t x2782 = -29888689;
	static int32_t x2783 = 82;
	static uint16_t x2784 = 8U;
	int32_t t93 = 97234;

	t93 = ((x2781<=(x2782&x2783))>>x2784);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2801 = INT8_MIN;
	volatile int8_t x2802 = -29;
	int16_t x2803 = 2620;
	int32_t x2804 = 0;
	int32_t t94 = 31368;

	t94 = ((x2801<=(x2802&x2803))>>x2804);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2842 = 15;
	uint64_t x2843 = 2026776LLU;
	uint8_t x2844 = 1U;
	int32_t t95 = 11;

	t95 = ((x2841<=(x2842&x2843))>>x2844);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2882 = UINT64_MAX;
	volatile int64_t x2883 = INT64_MIN;
	volatile int8_t x2884 = 1;
	static int32_t t96 = -104;

	t96 = ((x2881<=(x2882&x2883))>>x2884);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x2902 = INT32_MIN;
	static int64_t x2903 = INT64_MIN;
	int16_t x2904 = 1;
	int32_t t97 = -175;

	t97 = ((x2901<=(x2902&x2903))>>x2904);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3037 = 3564717LLU;
	volatile uint32_t x3038 = 9921U;
	int32_t x3039 = 2391113;
	volatile uint16_t x3040 = 5U;
	int32_t t98 = 4058907;

	t98 = ((x3037<=(x3038&x3039))>>x3040);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3041 = UINT32_MAX;
	volatile int32_t x3042 = INT32_MIN;
	static volatile int32_t t99 = 738531814;

	t99 = ((x3041<=(x3042&x3043))>>x3044);

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

