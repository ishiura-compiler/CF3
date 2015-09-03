#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x42 = -1;
int8_t x44 = 22;
int32_t x54 = INT32_MIN;
static int32_t t4 = 199;
static uint8_t x161 = UINT8_MAX;
static volatile uint16_t x163 = 280U;
volatile int64_t x203 = INT64_MIN;
volatile int32_t t8 = 655;
int32_t x229 = INT32_MAX;
int32_t x230 = INT32_MIN;
int16_t x262 = -197;
volatile int8_t x293 = -1;
uint8_t x296 = 1U;
int32_t x337 = 140780;
volatile int8_t x355 = -1;
int16_t x356 = 25;
volatile int32_t t16 = 1;
static int8_t x375 = INT8_MIN;
volatile int32_t t18 = -144214;
static int8_t x468 = 5;
static uint32_t x478 = UINT32_MAX;
int32_t t21 = -1;
uint16_t x521 = UINT16_MAX;
uint32_t x577 = 4259418U;
volatile int64_t x578 = 944768653557LL;
uint16_t x580 = 12U;
int32_t t24 = -10;
int8_t x677 = -1;
int8_t x680 = 5;
static int32_t t26 = 298;
int8_t x762 = 7;
int16_t x763 = INT16_MAX;
volatile int32_t x775 = -16521;
int64_t x778 = INT64_MIN;
volatile uint32_t x815 = UINT32_MAX;
uint16_t x876 = 0U;
volatile uint64_t x942 = 110219082LLU;
uint16_t x944 = 29U;
static int64_t x977 = 3568007043770730LL;
volatile int64_t x1025 = INT64_MIN;
uint8_t x1028 = 7U;
volatile int32_t t38 = -3277355;
uint32_t x1057 = 15385U;
int8_t x1058 = INT8_MIN;
volatile uint16_t x1088 = 15U;
volatile int32_t t42 = -369779009;
uint32_t x1174 = 16074316U;
int64_t x1177 = INT64_MIN;
int16_t x1178 = INT16_MIN;
int8_t x1186 = INT8_MIN;
volatile int8_t x1188 = 1;
volatile uint8_t x1220 = 11U;
static volatile uint16_t x1244 = 0U;
volatile int32_t t48 = -30625230;
uint16_t x1248 = 3U;
uint16_t x1250 = 4U;
volatile int32_t x1251 = -1;
uint16_t x1426 = UINT16_MAX;
static int32_t x1497 = INT32_MIN;
static int32_t x1500 = 28;
int32_t t56 = -94;
int64_t x1555 = INT64_MIN;
uint16_t x1556 = 3U;
volatile int32_t x1569 = INT32_MAX;
volatile uint32_t x1571 = UINT32_MAX;
volatile int32_t t60 = 2;
uint64_t x1769 = 918427238545991LLU;
int64_t x1770 = INT64_MIN;
int32_t x1771 = -1;
static int32_t x1814 = INT32_MAX;
uint16_t x1815 = 202U;
static uint8_t x1816 = 6U;
static int32_t t63 = -10254;
int16_t x1824 = 17;
uint32_t x1887 = UINT32_MAX;
int32_t t66 = -8097;
int64_t x1999 = -38622932LL;
static uint8_t x2000 = 0U;
volatile int64_t x2019 = 12LL;
uint8_t x2032 = 6U;
int64_t x2065 = INT64_MIN;
uint16_t x2068 = 11U;
int32_t t72 = 3;
int8_t x2136 = 7;
uint32_t x2148 = 13U;
static volatile int32_t t74 = 58145675;
int8_t x2208 = 1;
int32_t t76 = -2095;
static uint32_t x2233 = UINT32_MAX;
int8_t x2235 = INT8_MIN;
uint64_t x2238 = UINT64_MAX;
int32_t t79 = 1;
int16_t x2333 = INT16_MIN;
volatile int32_t t82 = -140254219;
volatile int64_t x2373 = -1LL;
volatile int32_t t83 = -497295755;
int16_t x2485 = INT16_MIN;
volatile int64_t x2488 = 0LL;
uint64_t x2550 = 1727720714LLU;
volatile int16_t x2646 = -1;
uint16_t x2669 = 156U;
uint8_t x2670 = UINT8_MAX;
static volatile uint16_t x2681 = UINT16_MAX;
uint8_t x2682 = UINT8_MAX;
volatile int32_t x2683 = INT32_MIN;
int32_t x2694 = -162711394;
static uint32_t x2696 = 7U;
uint64_t x2758 = 476960284879609LLU;
int32_t t99 = -49102498;


void f0(void) {
	int64_t x13 = 11939416852150LL;
	static uint64_t x14 = 63780LLU;
	static int16_t x15 = INT16_MAX;
	volatile int8_t x16 = 4;
	volatile int32_t t0 = 1;

	t0 = (((x13|x14)==x15)<<x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x41 = UINT32_MAX;
	static volatile int32_t x43 = INT32_MIN;
	volatile int32_t t1 = -368967455;

	t1 = (((x41|x42)==x43)<<x44);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x53 = 11;
	int8_t x55 = -1;
	volatile uint8_t x56 = 3U;
	int32_t t2 = 8070;

	t2 = (((x53|x54)==x55)<<x56);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x65 = UINT16_MAX;
	static volatile int16_t x66 = -1;
	volatile int32_t x67 = 1723;
	int16_t x68 = 7;
	volatile int32_t t3 = -11956415;

	t3 = (((x65|x66)==x67)<<x68);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x77 = 1094221104777LLU;
	uint8_t x78 = 56U;
	volatile int32_t x79 = INT32_MAX;
	uint16_t x80 = 1U;

	t4 = (((x77|x78)==x79)<<x80);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x162 = -2177120138075138LL;
	uint16_t x164 = 0U;
	static volatile int32_t t5 = 34;

	t5 = (((x161|x162)==x163)<<x164);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x189 = 420004280958548LL;
	int64_t x190 = -483214273593900LL;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = 18;
	volatile int32_t t6 = -232010;

	t6 = (((x189|x190)==x191)<<x192);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x201 = 1613U;
	static int32_t x202 = -51595994;
	static uint8_t x204 = 1U;
	volatile int32_t t7 = 264226;

	t7 = (((x201|x202)==x203)<<x204);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x209 = -1;
	int32_t x210 = 41775;
	int16_t x211 = INT16_MAX;
	int64_t x212 = 3LL;

	t8 = (((x209|x210)==x211)<<x212);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x231 = INT8_MIN;
	int8_t x232 = 15;
	int32_t t9 = 41828;

	t9 = (((x229|x230)==x231)<<x232);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x257 = UINT64_MAX;
	uint64_t x258 = 13225551669362016LLU;
	uint32_t x259 = 1069U;
	volatile uint8_t x260 = 30U;
	int32_t t10 = 1134787;

	t10 = (((x257|x258)==x259)<<x260);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x261 = UINT64_MAX;
	int16_t x263 = -1;
	uint8_t x264 = 28U;
	static volatile int32_t t11 = -132652745;

	t11 = (((x261|x262)==x263)<<x264);

	if (t11 != 268435456) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x289 = 54;
	volatile uint16_t x290 = 2313U;
	static int8_t x291 = INT8_MIN;
	volatile int8_t x292 = 0;
	int32_t t12 = 21;

	t12 = (((x289|x290)==x291)<<x292);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x294 = 5636467LLU;
	uint64_t x295 = UINT64_MAX;
	int32_t t13 = -249;

	t13 = (((x293|x294)==x295)<<x296);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x338 = -3;
	volatile int64_t x339 = INT64_MIN;
	uint8_t x340 = 1U;
	int32_t t14 = 18;

	t14 = (((x337|x338)==x339)<<x340);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x341 = 1;
	uint64_t x342 = UINT64_MAX;
	uint8_t x343 = 125U;
	uint16_t x344 = 7U;
	int32_t t15 = 1447;

	t15 = (((x341|x342)==x343)<<x344);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x353 = 1;
	int8_t x354 = INT8_MIN;

	t16 = (((x353|x354)==x355)<<x356);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x365 = 228U;
	volatile uint32_t x366 = 244856U;
	volatile int8_t x367 = INT8_MIN;
	static uint8_t x368 = 15U;
	volatile int32_t t17 = -1;

	t17 = (((x365|x366)==x367)<<x368);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x373 = 69U;
	uint32_t x374 = 92654649U;
	uint8_t x376 = 0U;

	t18 = (((x373|x374)==x375)<<x376);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x421 = UINT16_MAX;
	volatile int32_t x422 = INT32_MIN;
	int16_t x423 = -1;
	static uint8_t x424 = 16U;
	int32_t t19 = 10127;

	t19 = (((x421|x422)==x423)<<x424);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x465 = INT64_MIN;
	uint32_t x466 = 729961U;
	int16_t x467 = INT16_MIN;
	int32_t t20 = -3;

	t20 = (((x465|x466)==x467)<<x468);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x477 = 1004U;
	static uint64_t x479 = 12782560LLU;
	int32_t x480 = 6;

	t21 = (((x477|x478)==x479)<<x480);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x522 = 21820U;
	volatile uint32_t x523 = 380U;
	static uint32_t x524 = 5U;
	int32_t t22 = 277376224;

	t22 = (((x521|x522)==x523)<<x524);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x561 = UINT64_MAX;
	int64_t x562 = INT64_MAX;
	uint16_t x563 = UINT16_MAX;
	volatile uint8_t x564 = 1U;
	static volatile int32_t t23 = 3685;

	t23 = (((x561|x562)==x563)<<x564);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x579 = INT64_MIN;

	t24 = (((x577|x578)==x579)<<x580);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x661 = INT8_MAX;
	uint32_t x662 = UINT32_MAX;
	uint64_t x663 = 1989432638089041540LLU;
	int8_t x664 = 1;
	int32_t t25 = 1;

	t25 = (((x661|x662)==x663)<<x664);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x678 = INT32_MAX;
	int16_t x679 = INT16_MAX;

	t26 = (((x677|x678)==x679)<<x680);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x761 = INT64_MAX;
	int32_t x764 = 9;
	volatile int32_t t27 = 126557230;

	t27 = (((x761|x762)==x763)<<x764);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x773 = 0U;
	int8_t x774 = -1;
	int16_t x776 = 23;
	volatile int32_t t28 = 50;

	t28 = (((x773|x774)==x775)<<x776);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x777 = INT8_MIN;
	int16_t x779 = INT16_MIN;
	uint16_t x780 = 6U;
	volatile int32_t t29 = -17819557;

	t29 = (((x777|x778)==x779)<<x780);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x793 = INT32_MIN;
	volatile int32_t x794 = -12;
	uint8_t x795 = 7U;
	static uint8_t x796 = 4U;
	volatile int32_t t30 = 25149;

	t30 = (((x793|x794)==x795)<<x796);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x813 = -1;
	static uint64_t x814 = 1LLU;
	uint8_t x816 = 23U;
	static int32_t t31 = -581809;

	t31 = (((x813|x814)==x815)<<x816);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x873 = INT32_MIN;
	volatile uint16_t x874 = 6251U;
	uint32_t x875 = UINT32_MAX;
	int32_t t32 = -1;

	t32 = (((x873|x874)==x875)<<x876);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x889 = INT64_MIN;
	volatile int64_t x890 = -1LL;
	int8_t x891 = 3;
	static uint8_t x892 = 11U;
	int32_t t33 = 130268;

	t33 = (((x889|x890)==x891)<<x892);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x941 = INT32_MAX;
	int32_t x943 = INT32_MAX;
	volatile int32_t t34 = -218701405;

	t34 = (((x941|x942)==x943)<<x944);

	if (t34 != 536870912) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x978 = 0U;
	static uint32_t x979 = 1U;
	static uint64_t x980 = 5LLU;
	volatile int32_t t35 = -397396399;

	t35 = (((x977|x978)==x979)<<x980);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x981 = 102732939U;
	static volatile int16_t x982 = 5488;
	int16_t x983 = INT16_MAX;
	uint8_t x984 = 7U;
	volatile int32_t t36 = -136154;

	t36 = (((x981|x982)==x983)<<x984);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1021 = 0U;
	int64_t x1022 = INT64_MIN;
	int16_t x1023 = 0;
	uint8_t x1024 = 0U;
	volatile int32_t t37 = -885313376;

	t37 = (((x1021|x1022)==x1023)<<x1024);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1026 = INT32_MAX;
	uint8_t x1027 = 4U;

	t38 = (((x1025|x1026)==x1027)<<x1028);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1059 = INT16_MIN;
	static int16_t x1060 = 2;
	volatile int32_t t39 = -201660948;

	t39 = (((x1057|x1058)==x1059)<<x1060);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1085 = UINT8_MAX;
	static volatile int16_t x1086 = -84;
	volatile int64_t x1087 = INT64_MAX;
	volatile int32_t t40 = 565099;

	t40 = (((x1085|x1086)==x1087)<<x1088);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1093 = -1;
	uint64_t x1094 = 72842703295991LLU;
	int8_t x1095 = INT8_MIN;
	uint8_t x1096 = 1U;
	int32_t t41 = -429605415;

	t41 = (((x1093|x1094)==x1095)<<x1096);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1109 = -1;
	volatile uint8_t x1110 = 48U;
	volatile int16_t x1111 = -1;
	int16_t x1112 = 1;

	t42 = (((x1109|x1110)==x1111)<<x1112);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1173 = 25U;
	int8_t x1175 = INT8_MIN;
	int16_t x1176 = 0;
	int32_t t43 = -15851;

	t43 = (((x1173|x1174)==x1175)<<x1176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x1179 = UINT8_MAX;
	int8_t x1180 = 1;
	volatile int32_t t44 = 0;

	t44 = (((x1177|x1178)==x1179)<<x1180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x1185 = -1;
	static int64_t x1187 = INT64_MIN;
	volatile int32_t t45 = -55209144;

	t45 = (((x1185|x1186)==x1187)<<x1188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x1217 = INT32_MAX;
	volatile uint32_t x1218 = UINT32_MAX;
	int64_t x1219 = -1LL;
	static int32_t t46 = -45375;

	t46 = (((x1217|x1218)==x1219)<<x1220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1225 = 12U;
	int16_t x1226 = INT16_MIN;
	int64_t x1227 = INT64_MAX;
	uint8_t x1228 = 21U;
	static volatile int32_t t47 = 0;

	t47 = (((x1225|x1226)==x1227)<<x1228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1241 = INT32_MIN;
	int8_t x1242 = -6;
	static volatile int16_t x1243 = INT16_MIN;

	t48 = (((x1241|x1242)==x1243)<<x1244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1245 = INT64_MIN;
	int64_t x1246 = INT64_MAX;
	volatile uint64_t x1247 = 1058916096544869LLU;
	int32_t t49 = 1007066747;

	t49 = (((x1245|x1246)==x1247)<<x1248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1249 = 190U;
	static int16_t x1252 = 27;
	volatile int32_t t50 = 2;

	t50 = (((x1249|x1250)==x1251)<<x1252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1417 = 45517263708316903LLU;
	static int32_t x1418 = INT32_MIN;
	static int32_t x1419 = INT32_MIN;
	int8_t x1420 = 2;
	static int32_t t51 = 64874;

	t51 = (((x1417|x1418)==x1419)<<x1420);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x1425 = -1;
	int32_t x1427 = INT32_MAX;
	uint8_t x1428 = 2U;
	volatile int32_t t52 = 466031500;

	t52 = (((x1425|x1426)==x1427)<<x1428);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1445 = -1;
	volatile int32_t x1446 = 47241075;
	int64_t x1447 = INT64_MIN;
	uint8_t x1448 = 0U;
	static int32_t t53 = 1;

	t53 = (((x1445|x1446)==x1447)<<x1448);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1469 = 1597107U;
	int32_t x1470 = INT32_MAX;
	static volatile uint32_t x1471 = UINT32_MAX;
	volatile int32_t x1472 = 0;
	volatile int32_t t54 = 32;

	t54 = (((x1469|x1470)==x1471)<<x1472);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x1498 = 2022U;
	int8_t x1499 = -1;
	static volatile int32_t t55 = 749;

	t55 = (((x1497|x1498)==x1499)<<x1500);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1501 = INT16_MAX;
	uint64_t x1502 = UINT64_MAX;
	uint32_t x1503 = 2771U;
	uint16_t x1504 = 27U;

	t56 = (((x1501|x1502)==x1503)<<x1504);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x1553 = INT64_MIN;
	int32_t x1554 = INT32_MIN;
	int32_t t57 = 23069;

	t57 = (((x1553|x1554)==x1555)<<x1556);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1570 = INT64_MIN;
	volatile uint8_t x1572 = 2U;
	volatile int32_t t58 = 0;

	t58 = (((x1569|x1570)==x1571)<<x1572);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1641 = INT16_MIN;
	int64_t x1642 = -1890502829LL;
	uint64_t x1643 = 294318338153240407LLU;
	int8_t x1644 = 0;
	volatile int32_t t59 = -5;

	t59 = (((x1641|x1642)==x1643)<<x1644);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1665 = 122075876276604LLU;
	static uint16_t x1666 = 11222U;
	volatile int8_t x1667 = -15;
	int8_t x1668 = 1;

	t60 = (((x1665|x1666)==x1667)<<x1668);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1673 = -1;
	int64_t x1674 = -134702790212799156LL;
	int8_t x1675 = INT8_MIN;
	static uint8_t x1676 = 8U;
	volatile int32_t t61 = 824;

	t61 = (((x1673|x1674)==x1675)<<x1676);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x1772 = 3U;
	static int32_t t62 = -391261;

	t62 = (((x1769|x1770)==x1771)<<x1772);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1813 = -1;

	t63 = (((x1813|x1814)==x1815)<<x1816);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1821 = 6;
	int16_t x1822 = -1;
	uint16_t x1823 = UINT16_MAX;
	int32_t t64 = -903903326;

	t64 = (((x1821|x1822)==x1823)<<x1824);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1833 = 2U;
	int8_t x1834 = INT8_MAX;
	int8_t x1835 = INT8_MIN;
	uint32_t x1836 = 14U;
	static int32_t t65 = 61480;

	t65 = (((x1833|x1834)==x1835)<<x1836);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1885 = UINT32_MAX;
	int64_t x1886 = -1LL;
	int8_t x1888 = 0;

	t66 = (((x1885|x1886)==x1887)<<x1888);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1945 = -1;
	static uint16_t x1946 = 4999U;
	volatile uint64_t x1947 = 11718990011368LLU;
	volatile uint8_t x1948 = 28U;
	volatile int32_t t67 = -12;

	t67 = (((x1945|x1946)==x1947)<<x1948);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1997 = INT8_MAX;
	int32_t x1998 = INT32_MIN;
	volatile int32_t t68 = 21;

	t68 = (((x1997|x1998)==x1999)<<x2000);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2017 = UINT32_MAX;
	volatile int16_t x2018 = 129;
	static uint64_t x2020 = 6LLU;
	volatile int32_t t69 = 5543837;

	t69 = (((x2017|x2018)==x2019)<<x2020);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2029 = INT16_MIN;
	int32_t x2030 = INT32_MAX;
	uint64_t x2031 = 419341807457586367LLU;
	int32_t t70 = -691494;

	t70 = (((x2029|x2030)==x2031)<<x2032);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2053 = INT8_MIN;
	volatile int32_t x2054 = -252;
	static volatile int64_t x2055 = -1066923328576230LL;
	uint16_t x2056 = 18U;
	static int32_t t71 = 1;

	t71 = (((x2053|x2054)==x2055)<<x2056);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2066 = INT8_MAX;
	int8_t x2067 = INT8_MIN;

	t72 = (((x2065|x2066)==x2067)<<x2068);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2133 = INT16_MAX;
	static int8_t x2134 = -59;
	int16_t x2135 = -1;
	static volatile int32_t t73 = -19629;

	t73 = (((x2133|x2134)==x2135)<<x2136);

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2145 = 248142405U;
	uint32_t x2146 = 230232U;
	uint64_t x2147 = 18082794285LLU;

	t74 = (((x2145|x2146)==x2147)<<x2148);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2157 = UINT16_MAX;
	int64_t x2158 = -1LL;
	int16_t x2159 = -1;
	int16_t x2160 = 13;
	static int32_t t75 = -82397;

	t75 = (((x2157|x2158)==x2159)<<x2160);

	if (t75 != 8192) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2205 = INT8_MAX;
	int16_t x2206 = INT16_MIN;
	volatile uint16_t x2207 = 14344U;

	t76 = (((x2205|x2206)==x2207)<<x2208);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2234 = -1;
	int64_t x2236 = 4LL;
	volatile int32_t t77 = -200396519;

	t77 = (((x2233|x2234)==x2235)<<x2236);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x2237 = 243097646U;
	uint32_t x2239 = 1U;
	static int8_t x2240 = 0;
	volatile int32_t t78 = 16080;

	t78 = (((x2237|x2238)==x2239)<<x2240);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x2265 = INT16_MAX;
	static int32_t x2266 = -4062;
	int32_t x2267 = INT32_MIN;
	uint8_t x2268 = 18U;

	t79 = (((x2265|x2266)==x2267)<<x2268);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2289 = UINT32_MAX;
	static int32_t x2290 = INT32_MAX;
	static uint16_t x2291 = 49U;
	static int8_t x2292 = 1;
	int32_t t80 = 355355;

	t80 = (((x2289|x2290)==x2291)<<x2292);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2334 = -1;
	uint32_t x2335 = 9074U;
	int16_t x2336 = 1;
	volatile int32_t t81 = 3832;

	t81 = (((x2333|x2334)==x2335)<<x2336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2369 = -1LL;
	volatile uint32_t x2370 = 115783297U;
	static uint8_t x2371 = 4U;
	uint8_t x2372 = 17U;

	t82 = (((x2369|x2370)==x2371)<<x2372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2374 = INT16_MAX;
	uint8_t x2375 = 106U;
	volatile uint8_t x2376 = 9U;

	t83 = (((x2373|x2374)==x2375)<<x2376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x2385 = -1;
	int8_t x2386 = INT8_MAX;
	volatile int32_t x2387 = INT32_MIN;
	uint32_t x2388 = 18U;
	static volatile int32_t t84 = 1;

	t84 = (((x2385|x2386)==x2387)<<x2388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2425 = UINT64_MAX;
	uint64_t x2426 = 1424LLU;
	uint8_t x2427 = 122U;
	volatile uint16_t x2428 = 4U;
	volatile int32_t t85 = 23248075;

	t85 = (((x2425|x2426)==x2427)<<x2428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2433 = UINT64_MAX;
	static uint32_t x2434 = UINT32_MAX;
	volatile int8_t x2435 = -1;
	int16_t x2436 = 0;
	int32_t t86 = 64235;

	t86 = (((x2433|x2434)==x2435)<<x2436);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x2486 = INT8_MIN;
	volatile int64_t x2487 = INT64_MAX;
	volatile int32_t t87 = 37;

	t87 = (((x2485|x2486)==x2487)<<x2488);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2513 = INT32_MIN;
	volatile int16_t x2514 = 6495;
	int32_t x2515 = -1;
	uint8_t x2516 = 9U;
	int32_t t88 = 5;

	t88 = (((x2513|x2514)==x2515)<<x2516);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2537 = INT64_MIN;
	volatile uint32_t x2538 = UINT32_MAX;
	int8_t x2539 = 4;
	uint8_t x2540 = 2U;
	static int32_t t89 = 12;

	t89 = (((x2537|x2538)==x2539)<<x2540);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x2549 = UINT32_MAX;
	static uint8_t x2551 = 3U;
	uint32_t x2552 = 1U;
	int32_t t90 = -338;

	t90 = (((x2549|x2550)==x2551)<<x2552);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x2625 = INT32_MIN;
	uint16_t x2626 = UINT16_MAX;
	volatile uint16_t x2627 = 2U;
	static int8_t x2628 = 10;
	int32_t t91 = -12612787;

	t91 = (((x2625|x2626)==x2627)<<x2628);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x2645 = INT16_MIN;
	uint16_t x2647 = 7869U;
	int8_t x2648 = 0;
	static volatile int32_t t92 = -710;

	t92 = (((x2645|x2646)==x2647)<<x2648);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2653 = 947911921917396LL;
	int16_t x2654 = 2421;
	int64_t x2655 = INT64_MAX;
	uint16_t x2656 = 1U;
	static volatile int32_t t93 = 10;

	t93 = (((x2653|x2654)==x2655)<<x2656);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2671 = INT16_MIN;
	int16_t x2672 = 1;
	volatile int32_t t94 = 646087606;

	t94 = (((x2669|x2670)==x2671)<<x2672);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2684 = 3U;
	int32_t t95 = -62;

	t95 = (((x2681|x2682)==x2683)<<x2684);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x2693 = INT64_MAX;
	uint8_t x2695 = 1U;
	int32_t t96 = -22;

	t96 = (((x2693|x2694)==x2695)<<x2696);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x2729 = 52U;
	static int32_t x2730 = INT32_MAX;
	uint16_t x2731 = 6604U;
	uint8_t x2732 = 0U;
	volatile int32_t t97 = -901;

	t97 = (((x2729|x2730)==x2731)<<x2732);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x2757 = 79U;
	uint8_t x2759 = 15U;
	int64_t x2760 = 4LL;
	static volatile int32_t t98 = 2967;

	t98 = (((x2757|x2758)==x2759)<<x2760);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2789 = 5U;
	uint16_t x2790 = UINT16_MAX;
	int16_t x2791 = -1;
	uint8_t x2792 = 3U;

	t99 = (((x2789|x2790)==x2791)<<x2792);

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

