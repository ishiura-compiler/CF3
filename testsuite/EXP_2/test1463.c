#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x22 = INT32_MIN;
static volatile int32_t x23 = 122715;
uint16_t x24 = 6U;
static volatile int32_t t4 = -93614617;
int8_t x154 = -1;
int8_t x165 = -1;
uint32_t x208 = 3U;
static volatile int32_t t10 = 23770765;
static int8_t x304 = 0;
uint64_t x386 = 2336817193773390LLU;
static int64_t x387 = INT64_MIN;
uint64_t x388 = 0LLU;
int64_t x491 = INT64_MAX;
int32_t t15 = 1672658;
volatile int16_t x510 = 1;
volatile uint32_t x512 = 4U;
uint64_t x515 = 1619167486LLU;
int32_t x557 = INT32_MAX;
volatile uint8_t x624 = 10U;
volatile int32_t t21 = 1182;
volatile int32_t t22 = -85998631;
static uint16_t x750 = 38U;
int64_t x845 = INT64_MIN;
int32_t t24 = -74;
static int8_t x865 = INT8_MIN;
int16_t x897 = 3;
uint8_t x898 = 0U;
static volatile int64_t x899 = -1LL;
uint8_t x900 = 8U;
uint64_t x921 = UINT64_MAX;
int64_t x924 = 16LL;
volatile int8_t x951 = INT8_MIN;
static uint8_t x968 = 0U;
uint16_t x1008 = 4U;
volatile uint8_t x1016 = 1U;
int64_t x1057 = INT64_MIN;
static int32_t x1101 = -1;
int16_t x1103 = 840;
static volatile uint8_t x1104 = 5U;
static int8_t x1120 = 0;
int16_t x1138 = -55;
int64_t x1161 = INT64_MIN;
int32_t x1170 = INT32_MIN;
int8_t x1193 = -1;
static volatile int16_t x1245 = 4951;
static int8_t x1248 = 21;
int32_t t44 = -253;
int64_t x1271 = INT64_MIN;
volatile uint16_t x1272 = 1U;
int32_t t45 = 174150;
uint16_t x1289 = 9665U;
static volatile int32_t t47 = 1;
volatile uint8_t x1300 = 1U;
int8_t x1406 = 0;
volatile int8_t x1408 = 0;
static volatile int32_t x1466 = -1;
int8_t x1467 = INT8_MIN;
volatile int64_t x1469 = INT64_MIN;
static uint64_t x1470 = 8016074183700LLU;
volatile int32_t t52 = 1;
static volatile uint16_t x1495 = UINT16_MAX;
int8_t x1508 = 0;
int64_t x1514 = INT64_MIN;
volatile uint16_t x1530 = 0U;
int32_t x1585 = 79;
int16_t x1605 = INT16_MAX;
int64_t x1752 = 0LL;
int32_t t62 = 19445;
uint64_t x1754 = UINT64_MAX;
static volatile uint8_t x1756 = 1U;
int32_t x1864 = 5;
uint16_t x2002 = 24U;
int16_t x2084 = 17;
volatile int32_t t74 = 32;
int64_t x2176 = 12LL;
volatile uint16_t x2188 = 24U;
volatile int32_t t78 = -287991;
static int8_t x2405 = INT8_MAX;
static volatile int32_t t79 = -1;
volatile uint32_t x2452 = 12U;
int16_t x2513 = INT16_MAX;
int8_t x2588 = 1;
static uint64_t x2659 = 2LLU;
static uint32_t x2885 = UINT32_MAX;
int32_t t89 = -8828896;
int32_t t90 = 1621408;
static int16_t x2903 = -111;
int16_t x2904 = 1;
int32_t x2910 = INT32_MIN;
int64_t x3069 = -2LL;
volatile int8_t x3072 = 1;
uint64_t x3075 = 71LLU;
static int8_t x3172 = 1;
int8_t x3183 = INT8_MIN;
static volatile int32_t t96 = -279456;
uint64_t x3217 = 6648754505LLU;
int32_t x3221 = INT32_MIN;


void f0(void) {
	static int16_t x13 = INT16_MIN;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = 0LL;
	int16_t x16 = 9;
	int32_t t0 = 0;

	t0 = ((x13<(x14<x15))>>x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = 106189LLU;
	int16_t x19 = -29;
	static uint8_t x20 = 0U;
	volatile int32_t t1 = 25;

	t1 = ((x17<(x18<x19))>>x20);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t t2 = 5966;

	t2 = ((x21<(x22<x23))>>x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = 2;
	int8_t x34 = -1;
	int64_t x35 = INT64_MAX;
	volatile int64_t x36 = 1LL;
	volatile int32_t t3 = -153;

	t3 = ((x33<(x34<x35))>>x36);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x69 = UINT16_MAX;
	uint32_t x70 = 243859U;
	static int8_t x71 = INT8_MIN;
	uint64_t x72 = 25LLU;

	t4 = ((x69<(x70<x71))>>x72);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x113 = -9LL;
	int64_t x114 = INT64_MIN;
	int8_t x115 = 4;
	static volatile uint16_t x116 = 0U;
	int32_t t5 = 726;

	t5 = ((x113<(x114<x115))>>x116);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x145 = -1890;
	int64_t x146 = -478345LL;
	uint8_t x147 = UINT8_MAX;
	int16_t x148 = 0;
	static int32_t t6 = 187;

	t6 = ((x145<(x146<x147))>>x148);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x153 = 1U;
	volatile int8_t x155 = INT8_MIN;
	uint8_t x156 = 0U;
	static int32_t t7 = 927;

	t7 = ((x153<(x154<x155))>>x156);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = 5U;
	volatile int32_t t8 = -22417301;

	t8 = ((x165<(x166<x167))>>x168);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x205 = -5500632943061422LL;
	static int32_t x206 = -33539;
	int16_t x207 = INT16_MIN;
	volatile int32_t t9 = 106284580;

	t9 = ((x205<(x206<x207))>>x208);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x245 = 2364590687152249LLU;
	static int8_t x246 = 57;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 1U;

	t10 = ((x245<(x246<x247))>>x248);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x269 = INT16_MAX;
	volatile int32_t x270 = -1;
	uint16_t x271 = UINT16_MAX;
	uint8_t x272 = 31U;
	static volatile int32_t t11 = -7;

	t11 = ((x269<(x270<x271))>>x272);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x301 = -6;
	int8_t x302 = 0;
	int16_t x303 = -1;
	volatile int32_t t12 = 221;

	t12 = ((x301<(x302<x303))>>x304);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x305 = INT16_MAX;
	static volatile uint32_t x306 = 2400U;
	int32_t x307 = INT32_MAX;
	uint8_t x308 = 6U;
	int32_t t13 = -5;

	t13 = ((x305<(x306<x307))>>x308);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x385 = 897394U;
	volatile int32_t t14 = 205;

	t14 = ((x385<(x386<x387))>>x388);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x489 = 26U;
	uint8_t x490 = 3U;
	int8_t x492 = 1;

	t15 = ((x489<(x490<x491))>>x492);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x509 = -229960LL;
	int64_t x511 = -1LL;
	int32_t t16 = 3121;

	t16 = ((x509<(x510<x511))>>x512);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x513 = 113646759LLU;
	uint8_t x514 = 3U;
	uint16_t x516 = 13U;
	int32_t t17 = -937410344;

	t17 = ((x513<(x514<x515))>>x516);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x558 = INT16_MIN;
	volatile int32_t x559 = INT32_MAX;
	uint16_t x560 = 2U;
	int32_t t18 = -61247;

	t18 = ((x557<(x558<x559))>>x560);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x569 = 15602;
	volatile uint16_t x570 = 176U;
	uint8_t x571 = UINT8_MAX;
	static uint32_t x572 = 3U;
	volatile int32_t t19 = 210468986;

	t19 = ((x569<(x570<x571))>>x572);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x589 = 0;
	int32_t x590 = -1;
	int16_t x591 = INT16_MIN;
	int16_t x592 = 3;
	volatile int32_t t20 = 347141;

	t20 = ((x589<(x590<x591))>>x592);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x621 = -11722;
	int32_t x622 = -1;
	int32_t x623 = 5020494;

	t21 = ((x621<(x622<x623))>>x624);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x673 = INT64_MIN;
	int16_t x674 = -1;
	uint16_t x675 = 1U;
	uint8_t x676 = 18U;

	t22 = ((x673<(x674<x675))>>x676);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x749 = 109178924921LLU;
	static int8_t x751 = INT8_MAX;
	static int16_t x752 = 0;
	volatile int32_t t23 = -311517399;

	t23 = ((x749<(x750<x751))>>x752);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x846 = 1376875;
	volatile uint8_t x847 = 31U;
	volatile int32_t x848 = 9;

	t24 = ((x845<(x846<x847))>>x848);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x866 = INT16_MIN;
	int64_t x867 = INT64_MAX;
	uint8_t x868 = 0U;
	static int32_t t25 = -36093415;

	t25 = ((x865<(x866<x867))>>x868);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t t26 = -1015420;

	t26 = ((x897<(x898<x899))>>x900);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x922 = 3;
	volatile int8_t x923 = INT8_MIN;
	volatile int32_t t27 = 124510;

	t27 = ((x921<(x922<x923))>>x924);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x949 = -1;
	volatile int32_t x950 = INT32_MIN;
	uint16_t x952 = 0U;
	int32_t t28 = -7069363;

	t28 = ((x949<(x950<x951))>>x952);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x965 = INT32_MAX;
	int16_t x966 = INT16_MIN;
	int8_t x967 = INT8_MIN;
	static volatile int32_t t29 = 126822170;

	t29 = ((x965<(x966<x967))>>x968);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x977 = -1;
	int8_t x978 = -1;
	uint64_t x979 = UINT64_MAX;
	static int8_t x980 = 1;
	volatile int32_t t30 = 7721047;

	t30 = ((x977<(x978<x979))>>x980);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1005 = 4;
	uint32_t x1006 = 3U;
	uint16_t x1007 = 7U;
	volatile int32_t t31 = 297567;

	t31 = ((x1005<(x1006<x1007))>>x1008);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1013 = INT16_MAX;
	volatile int32_t x1014 = INT32_MIN;
	int16_t x1015 = -687;
	int32_t t32 = -675859;

	t32 = ((x1013<(x1014<x1015))>>x1016);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1058 = 87764185550517LL;
	volatile int8_t x1059 = 4;
	volatile uint32_t x1060 = 8U;
	int32_t t33 = 182839;

	t33 = ((x1057<(x1058<x1059))>>x1060);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1102 = INT64_MIN;
	volatile int32_t t34 = -34913;

	t34 = ((x1101<(x1102<x1103))>>x1104);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1117 = UINT16_MAX;
	uint64_t x1118 = 794844275858943455LLU;
	static int64_t x1119 = 75LL;
	volatile int32_t t35 = 34582856;

	t35 = ((x1117<(x1118<x1119))>>x1120);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1137 = 11816463U;
	int64_t x1139 = INT64_MIN;
	static uint16_t x1140 = 11U;
	int32_t t36 = 14082226;

	t36 = ((x1137<(x1138<x1139))>>x1140);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1162 = 16;
	static int8_t x1163 = -1;
	static int8_t x1164 = 28;
	static volatile int32_t t37 = 208;

	t37 = ((x1161<(x1162<x1163))>>x1164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1169 = 2633021656LL;
	volatile int16_t x1171 = -1;
	static uint8_t x1172 = 10U;
	int32_t t38 = 270;

	t38 = ((x1169<(x1170<x1171))>>x1172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1181 = 19579576706LL;
	int32_t x1182 = 5999372;
	static int32_t x1183 = INT32_MIN;
	int32_t x1184 = 6;
	volatile int32_t t39 = -246050516;

	t39 = ((x1181<(x1182<x1183))>>x1184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1194 = 8U;
	int16_t x1195 = INT16_MIN;
	int16_t x1196 = 0;
	int32_t t40 = -35933;

	t40 = ((x1193<(x1194<x1195))>>x1196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1197 = 3036;
	volatile int32_t x1198 = INT32_MIN;
	volatile int8_t x1199 = -1;
	volatile int8_t x1200 = 1;
	volatile int32_t t41 = -877936010;

	t41 = ((x1197<(x1198<x1199))>>x1200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1205 = -1;
	int64_t x1206 = -1009880LL;
	volatile int32_t x1207 = INT32_MIN;
	uint8_t x1208 = 0U;
	volatile int32_t t42 = 102;

	t42 = ((x1205<(x1206<x1207))>>x1208);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x1225 = -1LL;
	uint32_t x1226 = UINT32_MAX;
	uint16_t x1227 = 10370U;
	volatile uint16_t x1228 = 14U;
	int32_t t43 = -7;

	t43 = ((x1225<(x1226<x1227))>>x1228);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1246 = UINT64_MAX;
	volatile int32_t x1247 = -1;

	t44 = ((x1245<(x1246<x1247))>>x1248);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1269 = 41;
	volatile uint64_t x1270 = 287599LLU;

	t45 = ((x1269<(x1270<x1271))>>x1272);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1273 = 0;
	uint8_t x1274 = UINT8_MAX;
	static int16_t x1275 = -125;
	uint8_t x1276 = 2U;
	volatile int32_t t46 = 1107509;

	t46 = ((x1273<(x1274<x1275))>>x1276);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1290 = 8U;
	int8_t x1291 = -1;
	static uint16_t x1292 = 2U;

	t47 = ((x1289<(x1290<x1291))>>x1292);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1297 = UINT16_MAX;
	uint64_t x1298 = 394346854LLU;
	static int8_t x1299 = -2;
	int32_t t48 = -1392;

	t48 = ((x1297<(x1298<x1299))>>x1300);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1325 = INT32_MIN;
	uint8_t x1326 = UINT8_MAX;
	int8_t x1327 = -1;
	static uint8_t x1328 = 15U;
	int32_t t49 = 157911966;

	t49 = ((x1325<(x1326<x1327))>>x1328);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1405 = 4U;
	int16_t x1407 = INT16_MAX;
	static volatile int32_t t50 = -1795390;

	t50 = ((x1405<(x1406<x1407))>>x1408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1465 = INT64_MIN;
	int64_t x1468 = 1LL;
	int32_t t51 = 33036;

	t51 = ((x1465<(x1466<x1467))>>x1468);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1471 = 28;
	volatile int8_t x1472 = 0;

	t52 = ((x1469<(x1470<x1471))>>x1472);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1493 = INT32_MIN;
	static int16_t x1494 = 58;
	uint16_t x1496 = 21U;
	int32_t t53 = -1465;

	t53 = ((x1493<(x1494<x1495))>>x1496);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1497 = UINT32_MAX;
	static int8_t x1498 = -3;
	int64_t x1499 = INT64_MIN;
	uint8_t x1500 = 1U;
	int32_t t54 = 233902;

	t54 = ((x1497<(x1498<x1499))>>x1500);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1505 = -1;
	int16_t x1506 = 447;
	int32_t x1507 = INT32_MIN;
	static int32_t t55 = -227800666;

	t55 = ((x1505<(x1506<x1507))>>x1508);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1513 = UINT32_MAX;
	uint32_t x1515 = 2828960U;
	static int16_t x1516 = 7;
	int32_t t56 = -41936371;

	t56 = ((x1513<(x1514<x1515))>>x1516);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1529 = INT32_MIN;
	int16_t x1531 = INT16_MAX;
	static uint32_t x1532 = 14U;
	volatile int32_t t57 = -1425187;

	t57 = ((x1529<(x1530<x1531))>>x1532);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x1577 = 25411LLU;
	int32_t x1578 = INT32_MIN;
	int16_t x1579 = -1;
	static uint64_t x1580 = 31LLU;
	int32_t t58 = 1;

	t58 = ((x1577<(x1578<x1579))>>x1580);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1586 = UINT8_MAX;
	int16_t x1587 = INT16_MIN;
	volatile uint16_t x1588 = 0U;
	int32_t t59 = 3156700;

	t59 = ((x1585<(x1586<x1587))>>x1588);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1593 = -1;
	static uint16_t x1594 = UINT16_MAX;
	volatile int16_t x1595 = INT16_MIN;
	int16_t x1596 = 1;
	int32_t t60 = -2;

	t60 = ((x1593<(x1594<x1595))>>x1596);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1606 = 1685223LLU;
	static int32_t x1607 = INT32_MIN;
	uint16_t x1608 = 12U;
	volatile int32_t t61 = 1;

	t61 = ((x1605<(x1606<x1607))>>x1608);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1749 = -1;
	uint16_t x1750 = 1U;
	int32_t x1751 = -1;

	t62 = ((x1749<(x1750<x1751))>>x1752);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1753 = UINT32_MAX;
	int16_t x1755 = INT16_MAX;
	volatile int32_t t63 = 1787;

	t63 = ((x1753<(x1754<x1755))>>x1756);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x1793 = 0LL;
	static uint32_t x1794 = UINT32_MAX;
	int32_t x1795 = -1;
	int64_t x1796 = 11LL;
	int32_t t64 = 93;

	t64 = ((x1793<(x1794<x1795))>>x1796);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1809 = INT32_MIN;
	int8_t x1810 = INT8_MIN;
	static uint16_t x1811 = 52U;
	volatile uint8_t x1812 = 9U;
	int32_t t65 = -61407;

	t65 = ((x1809<(x1810<x1811))>>x1812);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1861 = INT64_MIN;
	int16_t x1862 = INT16_MAX;
	static int32_t x1863 = -1;
	volatile int32_t t66 = 2527;

	t66 = ((x1861<(x1862<x1863))>>x1864);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x1897 = UINT64_MAX;
	uint8_t x1898 = 31U;
	int8_t x1899 = 35;
	int8_t x1900 = 0;
	int32_t t67 = 1521;

	t67 = ((x1897<(x1898<x1899))>>x1900);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1921 = INT8_MAX;
	int64_t x1922 = INT64_MIN;
	int8_t x1923 = -26;
	uint16_t x1924 = 1U;
	int32_t t68 = -120587;

	t68 = ((x1921<(x1922<x1923))>>x1924);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x1961 = -13;
	int16_t x1962 = 16;
	int32_t x1963 = -1;
	uint8_t x1964 = 0U;
	int32_t t69 = 4914681;

	t69 = ((x1961<(x1962<x1963))>>x1964);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2001 = 3605U;
	uint64_t x2003 = 27LLU;
	int8_t x2004 = 11;
	static volatile int32_t t70 = 6;

	t70 = ((x2001<(x2002<x2003))>>x2004);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2081 = -1539;
	static int16_t x2082 = INT16_MAX;
	static volatile int64_t x2083 = INT64_MAX;
	int32_t t71 = -426;

	t71 = ((x2081<(x2082<x2083))>>x2084);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x2101 = 1292340664726009079LLU;
	int16_t x2102 = INT16_MAX;
	uint32_t x2103 = 27089U;
	static int8_t x2104 = 28;
	static int32_t t72 = -273446539;

	t72 = ((x2101<(x2102<x2103))>>x2104);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2125 = INT64_MIN;
	uint8_t x2126 = 98U;
	int8_t x2127 = -1;
	volatile uint8_t x2128 = 23U;
	volatile int32_t t73 = 8;

	t73 = ((x2125<(x2126<x2127))>>x2128);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2145 = 101LLU;
	int8_t x2146 = INT8_MIN;
	int16_t x2147 = INT16_MIN;
	volatile uint64_t x2148 = 8LLU;

	t74 = ((x2145<(x2146<x2147))>>x2148);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2173 = 22;
	uint64_t x2174 = 25074206828LLU;
	uint8_t x2175 = 0U;
	static int32_t t75 = -299548305;

	t75 = ((x2173<(x2174<x2175))>>x2176);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2185 = 5853444LLU;
	int8_t x2186 = -1;
	int8_t x2187 = INT8_MAX;
	volatile int32_t t76 = 7;

	t76 = ((x2185<(x2186<x2187))>>x2188);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2237 = -1;
	volatile uint16_t x2238 = 7001U;
	int64_t x2239 = INT64_MAX;
	static uint32_t x2240 = 4U;
	int32_t t77 = 0;

	t77 = ((x2237<(x2238<x2239))>>x2240);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2261 = 125U;
	int32_t x2262 = 2508264;
	static uint16_t x2263 = 12U;
	int64_t x2264 = 0LL;

	t78 = ((x2261<(x2262<x2263))>>x2264);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x2406 = INT16_MIN;
	volatile int32_t x2407 = INT32_MIN;
	uint8_t x2408 = 13U;

	t79 = ((x2405<(x2406<x2407))>>x2408);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2449 = INT32_MIN;
	static int32_t x2450 = 135374;
	uint8_t x2451 = 7U;
	static int32_t t80 = -1030289;

	t80 = ((x2449<(x2450<x2451))>>x2452);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2465 = 49U;
	static uint64_t x2466 = 822335751348LLU;
	static volatile uint16_t x2467 = 380U;
	uint16_t x2468 = 8U;
	volatile int32_t t81 = 65714986;

	t81 = ((x2465<(x2466<x2467))>>x2468);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2469 = -1;
	static int32_t x2470 = -955479669;
	uint32_t x2471 = 2U;
	static uint32_t x2472 = 3U;
	int32_t t82 = 12213;

	t82 = ((x2469<(x2470<x2471))>>x2472);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2509 = INT16_MAX;
	uint64_t x2510 = 41644LLU;
	int16_t x2511 = 1520;
	static int32_t x2512 = 11;
	int32_t t83 = -13512;

	t83 = ((x2509<(x2510<x2511))>>x2512);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2514 = 2U;
	volatile int16_t x2515 = 1;
	uint16_t x2516 = 3U;
	int32_t t84 = -18;

	t84 = ((x2513<(x2514<x2515))>>x2516);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2585 = INT64_MAX;
	int32_t x2586 = INT32_MAX;
	volatile uint8_t x2587 = 1U;
	int32_t t85 = -1312678;

	t85 = ((x2585<(x2586<x2587))>>x2588);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2657 = 222U;
	volatile uint8_t x2658 = 0U;
	volatile int16_t x2660 = 1;
	static volatile int32_t t86 = 472302009;

	t86 = ((x2657<(x2658<x2659))>>x2660);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x2669 = INT64_MAX;
	static uint16_t x2670 = UINT16_MAX;
	int64_t x2671 = 13LL;
	uint8_t x2672 = 9U;
	volatile int32_t t87 = -38134;

	t87 = ((x2669<(x2670<x2671))>>x2672);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2837 = -1;
	int32_t x2838 = INT32_MIN;
	int16_t x2839 = INT16_MIN;
	uint8_t x2840 = 1U;
	int32_t t88 = -3012;

	t88 = ((x2837<(x2838<x2839))>>x2840);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2886 = UINT64_MAX;
	volatile int8_t x2887 = INT8_MIN;
	static uint64_t x2888 = 9LLU;

	t89 = ((x2885<(x2886<x2887))>>x2888);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x2893 = -187;
	static volatile int8_t x2894 = INT8_MIN;
	int8_t x2895 = INT8_MIN;
	volatile uint8_t x2896 = 2U;

	t90 = ((x2893<(x2894<x2895))>>x2896);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2901 = 32U;
	volatile int16_t x2902 = INT16_MAX;
	int32_t t91 = -20790;

	t91 = ((x2901<(x2902<x2903))>>x2904);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2909 = -59384886512LL;
	uint32_t x2911 = 7473150U;
	volatile int16_t x2912 = 1;
	int32_t t92 = 9314507;

	t92 = ((x2909<(x2910<x2911))>>x2912);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3070 = INT32_MIN;
	int32_t x3071 = INT32_MIN;
	volatile int32_t t93 = 2040;

	t93 = ((x3069<(x3070<x3071))>>x3072);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3073 = INT8_MAX;
	uint8_t x3074 = 6U;
	uint16_t x3076 = 28U;
	int32_t t94 = -114281456;

	t94 = ((x3073<(x3074<x3075))>>x3076);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3169 = INT16_MIN;
	volatile int64_t x3170 = INT64_MIN;
	uint8_t x3171 = 38U;
	int32_t t95 = -11582;

	t95 = ((x3169<(x3170<x3171))>>x3172);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x3181 = INT64_MIN;
	uint16_t x3182 = UINT16_MAX;
	volatile uint8_t x3184 = 0U;

	t96 = ((x3181<(x3182<x3183))>>x3184);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3218 = INT64_MIN;
	volatile int64_t x3219 = INT64_MAX;
	uint64_t x3220 = 0LLU;
	static volatile int32_t t97 = -25537;

	t97 = ((x3217<(x3218<x3219))>>x3220);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3222 = 256U;
	int64_t x3223 = 133936537724000653LL;
	static uint32_t x3224 = 29U;
	volatile int32_t t98 = 13659;

	t98 = ((x3221<(x3222<x3223))>>x3224);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3233 = INT32_MAX;
	int16_t x3234 = -1539;
	int64_t x3235 = INT64_MIN;
	int8_t x3236 = 8;
	int32_t t99 = -72094820;

	t99 = ((x3233<(x3234<x3235))>>x3236);

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

