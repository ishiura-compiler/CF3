#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t1 = 256;
static int16_t x26 = INT16_MIN;
volatile int32_t t2 = -1;
int64_t x157 = INT64_MIN;
uint32_t x203 = UINT32_MAX;
volatile int32_t t6 = -3;
uint8_t x211 = 0U;
volatile int32_t t7 = 2132;
uint8_t x228 = 0U;
int32_t x233 = INT32_MIN;
uint16_t x257 = 1U;
volatile int32_t t10 = 5490537;
int8_t x448 = 0;
uint32_t x483 = UINT32_MAX;
volatile uint32_t x505 = 138349626U;
int64_t x506 = -1LL;
static volatile int16_t x507 = INT16_MIN;
int32_t t17 = 23;
volatile uint32_t x559 = 13U;
int8_t x560 = 12;
int64_t x665 = -1LL;
int64_t x668 = 0LL;
int8_t x716 = 18;
int32_t t24 = 9359794;
uint8_t x841 = UINT8_MAX;
uint16_t x897 = 47U;
int8_t x898 = -2;
uint32_t x900 = 13U;
volatile int8_t x937 = INT8_MAX;
int64_t x971 = 3304078LL;
uint8_t x972 = 3U;
int8_t x979 = -1;
int64_t x991 = -54458745LL;
uint8_t x992 = 10U;
int8_t x1017 = -1;
static int64_t x1106 = INT64_MIN;
int16_t x1161 = INT16_MIN;
int32_t x1192 = 1;
uint16_t x1201 = UINT16_MAX;
static int64_t x1202 = INT64_MIN;
volatile int32_t t44 = 452638;
int16_t x1207 = INT16_MIN;
int32_t t45 = -619858040;
int32_t x1213 = -60;
int8_t x1215 = INT8_MIN;
static int32_t x1221 = -1064730512;
int32_t x1224 = 3;
int8_t x1241 = INT8_MIN;
int64_t x1243 = INT64_MAX;
int8_t x1279 = 7;
volatile int8_t x1280 = 1;
volatile int32_t t50 = -8735379;
static volatile int16_t x1301 = -1;
static int16_t x1309 = -1;
static uint16_t x1311 = 756U;
volatile uint16_t x1365 = 54U;
uint8_t x1368 = 19U;
static int16_t x1459 = INT16_MIN;
static int32_t t56 = 37495;
volatile uint8_t x1520 = 6U;
uint16_t x1576 = 0U;
volatile int32_t t58 = 200515564;
int8_t x1812 = 6;
static volatile int32_t t60 = -1;
int64_t x1826 = INT64_MAX;
int64_t x1827 = INT64_MIN;
int64_t x1837 = INT64_MAX;
volatile uint8_t x1840 = 1U;
uint8_t x1877 = UINT8_MAX;
int64_t x1878 = INT64_MIN;
static uint64_t x1916 = 13LLU;
volatile uint16_t x1965 = UINT16_MAX;
uint8_t x1983 = UINT8_MAX;
volatile int8_t x1984 = 22;
static int8_t x2015 = -1;
static uint32_t x2026 = UINT32_MAX;
static int32_t x2261 = INT32_MAX;
static volatile int32_t t72 = -30943;
int16_t x2265 = 3248;
int32_t x2266 = -543421;
volatile int32_t t73 = 6;
uint8_t x2311 = UINT8_MAX;
int32_t x2433 = -26;
int8_t x2442 = INT8_MIN;
int8_t x2443 = INT8_MIN;
static volatile int32_t t79 = -2452373;
uint64_t x2481 = UINT64_MAX;
volatile int16_t x2482 = INT16_MAX;
static volatile int32_t t83 = -3;
volatile int32_t t84 = -1;
static int64_t x2627 = 12LL;
int64_t x2628 = 0LL;
static uint16_t x2646 = 3353U;
static int8_t x2701 = 1;
int32_t x2702 = -105672590;
static int32_t t87 = -18486398;
static volatile uint16_t x2760 = 1U;
int32_t t88 = -654;
int64_t x2782 = INT64_MAX;
uint8_t x2828 = 1U;
static int16_t x2834 = -1;
volatile int32_t t92 = -228459;
int32_t t94 = -114;
static int32_t t95 = -404775804;
static int32_t t97 = -681275;


void f0(void) {
	volatile int16_t x5 = -1;
	volatile int64_t x6 = 48472385LL;
	volatile uint8_t x7 = UINT8_MAX;
	uint16_t x8 = 0U;
	volatile int32_t t0 = -26528;

	t0 = (((x5&x6)<=x7)<<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	volatile int16_t x23 = INT16_MAX;
	volatile uint16_t x24 = 1U;

	t1 = (((x21&x22)<=x23)<<x24);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x25 = 2U;
	volatile uint8_t x27 = UINT8_MAX;
	uint32_t x28 = 1U;

	t2 = (((x25&x26)<=x27)<<x28);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x73 = INT8_MIN;
	int32_t x74 = -1;
	int32_t x75 = INT32_MIN;
	uint16_t x76 = 13U;
	volatile int32_t t3 = -405770;

	t3 = (((x73&x74)<=x75)<<x76);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x158 = 41;
	static volatile uint16_t x159 = 10360U;
	uint16_t x160 = 1U;
	volatile int32_t t4 = -39603;

	t4 = (((x157&x158)<=x159)<<x160);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x201 = INT16_MIN;
	uint16_t x202 = 0U;
	static uint16_t x204 = 1U;
	volatile int32_t t5 = -113969863;

	t5 = (((x201&x202)<=x203)<<x204);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x205 = 13U;
	volatile int16_t x206 = INT16_MIN;
	uint8_t x207 = 3U;
	uint8_t x208 = 14U;

	t6 = (((x205&x206)<=x207)<<x208);

	if (t6 != 16384) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x209 = UINT8_MAX;
	static volatile int32_t x210 = -7034244;
	uint8_t x212 = 8U;

	t7 = (((x209&x210)<=x211)<<x212);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x225 = -1;
	int16_t x226 = INT16_MAX;
	static uint8_t x227 = 8U;
	volatile int32_t t8 = 357418331;

	t8 = (((x225&x226)<=x227)<<x228);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x234 = INT16_MAX;
	int32_t x235 = -1;
	volatile uint8_t x236 = 30U;
	volatile int32_t t9 = 918;

	t9 = (((x233&x234)<=x235)<<x236);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x258 = -311184;
	volatile int8_t x259 = INT8_MAX;
	uint8_t x260 = 30U;

	t10 = (((x257&x258)<=x259)<<x260);

	if (t10 != 1073741824) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x313 = 2;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	static uint32_t x316 = 25U;
	volatile int32_t t11 = 0;

	t11 = (((x313&x314)<=x315)<<x316);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x349 = 423U;
	int8_t x350 = 0;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = 6U;
	volatile int32_t t12 = 6525;

	t12 = (((x349&x350)<=x351)<<x352);

	if (t12 != 64) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x389 = UINT16_MAX;
	uint64_t x390 = 14282LLU;
	static uint64_t x391 = 5927LLU;
	int16_t x392 = 18;
	volatile int32_t t13 = 995367;

	t13 = (((x389&x390)<=x391)<<x392);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = 2033811LL;
	int16_t x399 = -1;
	int8_t x400 = 1;
	volatile int32_t t14 = 1;

	t14 = (((x397&x398)<=x399)<<x400);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x445 = 4;
	static int8_t x446 = INT8_MAX;
	uint64_t x447 = UINT64_MAX;
	volatile int32_t t15 = -996215644;

	t15 = (((x445&x446)<=x447)<<x448);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x481 = INT32_MIN;
	uint64_t x482 = UINT64_MAX;
	int8_t x484 = 2;
	int32_t t16 = -6;

	t16 = (((x481&x482)<=x483)<<x484);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x508 = 2;

	t17 = (((x505&x506)<=x507)<<x508);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x557 = INT8_MIN;
	uint8_t x558 = 2U;
	volatile int32_t t18 = -1493937;

	t18 = (((x557&x558)<=x559)<<x560);

	if (t18 != 4096) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x601 = 1393563413768803871LL;
	static int8_t x602 = INT8_MAX;
	uint64_t x603 = 148537534LLU;
	static int32_t x604 = 6;
	volatile int32_t t19 = 547090142;

	t19 = (((x601&x602)<=x603)<<x604);

	if (t19 != 64) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x641 = 1060219305U;
	volatile int8_t x642 = -1;
	volatile int8_t x643 = INT8_MIN;
	static int8_t x644 = 3;
	volatile int32_t t20 = 320;

	t20 = (((x641&x642)<=x643)<<x644);

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x657 = INT16_MAX;
	static volatile uint64_t x658 = 1632337585873LLU;
	static int64_t x659 = -287911981404092LL;
	int8_t x660 = 2;
	int32_t t21 = 13;

	t21 = (((x657&x658)<=x659)<<x660);

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x666 = 80528324LL;
	static uint32_t x667 = UINT32_MAX;
	int32_t t22 = -29255895;

	t22 = (((x665&x666)<=x667)<<x668);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x713 = 0;
	int32_t x714 = INT32_MAX;
	int8_t x715 = -1;
	volatile int32_t t23 = 21;

	t23 = (((x713&x714)<=x715)<<x716);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x769 = 28494138U;
	int16_t x770 = -1;
	int32_t x771 = -60;
	volatile uint8_t x772 = 5U;

	t24 = (((x769&x770)<=x771)<<x772);

	if (t24 != 32) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x777 = 282679752U;
	int32_t x778 = INT32_MIN;
	uint8_t x779 = UINT8_MAX;
	uint8_t x780 = 0U;
	int32_t t25 = -3748835;

	t25 = (((x777&x778)<=x779)<<x780);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x842 = -1;
	uint16_t x843 = 479U;
	uint8_t x844 = 9U;
	volatile int32_t t26 = 5628;

	t26 = (((x841&x842)<=x843)<<x844);

	if (t26 != 512) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x853 = 886U;
	volatile int64_t x854 = -1LL;
	uint8_t x855 = UINT8_MAX;
	int16_t x856 = 0;
	volatile int32_t t27 = 217201;

	t27 = (((x853&x854)<=x855)<<x856);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x857 = 380697U;
	int8_t x858 = INT8_MIN;
	uint8_t x859 = UINT8_MAX;
	uint8_t x860 = 21U;
	int32_t t28 = 10615929;

	t28 = (((x857&x858)<=x859)<<x860);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x865 = -1;
	volatile uint32_t x866 = UINT32_MAX;
	volatile int64_t x867 = -69LL;
	uint32_t x868 = 25U;
	static int32_t t29 = -1;

	t29 = (((x865&x866)<=x867)<<x868);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x889 = 14150639;
	int8_t x890 = INT8_MAX;
	int8_t x891 = INT8_MIN;
	volatile uint16_t x892 = 26U;
	static volatile int32_t t30 = -1208;

	t30 = (((x889&x890)<=x891)<<x892);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x893 = INT64_MAX;
	static volatile int64_t x894 = INT64_MIN;
	volatile int16_t x895 = INT16_MIN;
	int64_t x896 = 27LL;
	int32_t t31 = -6;

	t31 = (((x893&x894)<=x895)<<x896);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x899 = -23;
	static volatile int32_t t32 = 0;

	t32 = (((x897&x898)<=x899)<<x900);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x938 = 96U;
	int16_t x939 = INT16_MIN;
	int8_t x940 = 1;
	volatile int32_t t33 = 2080;

	t33 = (((x937&x938)<=x939)<<x940);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x969 = -1;
	static uint32_t x970 = 0U;
	int32_t t34 = 399;

	t34 = (((x969&x970)<=x971)<<x972);

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x977 = INT8_MIN;
	int32_t x978 = -1;
	int16_t x980 = 0;
	int32_t t35 = 25279050;

	t35 = (((x977&x978)<=x979)<<x980);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x989 = INT8_MIN;
	int8_t x990 = INT8_MAX;
	volatile int32_t t36 = -76;

	t36 = (((x989&x990)<=x991)<<x992);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x1018 = 30U;
	static volatile uint16_t x1019 = 1867U;
	uint8_t x1020 = 17U;
	int32_t t37 = -91;

	t37 = (((x1017&x1018)<=x1019)<<x1020);

	if (t37 != 131072) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1021 = INT16_MIN;
	volatile uint8_t x1022 = UINT8_MAX;
	volatile uint16_t x1023 = 8U;
	uint8_t x1024 = 0U;
	volatile int32_t t38 = -26677;

	t38 = (((x1021&x1022)<=x1023)<<x1024);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1105 = INT64_MAX;
	static int32_t x1107 = INT32_MAX;
	volatile uint8_t x1108 = 0U;
	static volatile int32_t t39 = -1;

	t39 = (((x1105&x1106)<=x1107)<<x1108);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1162 = INT64_MAX;
	volatile int16_t x1163 = INT16_MIN;
	volatile int8_t x1164 = 1;
	int32_t t40 = 153109458;

	t40 = (((x1161&x1162)<=x1163)<<x1164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x1169 = UINT16_MAX;
	int64_t x1170 = 459523972588692169LL;
	int8_t x1171 = 1;
	static uint8_t x1172 = 10U;
	int32_t t41 = 28809722;

	t41 = (((x1169&x1170)<=x1171)<<x1172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1177 = INT32_MIN;
	int64_t x1178 = INT64_MIN;
	static int16_t x1179 = INT16_MIN;
	volatile int16_t x1180 = 6;
	volatile int32_t t42 = -2275819;

	t42 = (((x1177&x1178)<=x1179)<<x1180);

	if (t42 != 64) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1189 = -347;
	int16_t x1190 = 1;
	volatile int32_t x1191 = -254302;
	volatile int32_t t43 = -20;

	t43 = (((x1189&x1190)<=x1191)<<x1192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1203 = -1;
	volatile int64_t x1204 = 26LL;

	t44 = (((x1201&x1202)<=x1203)<<x1204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1205 = -1;
	uint8_t x1206 = 5U;
	static int8_t x1208 = 0;

	t45 = (((x1205&x1206)<=x1207)<<x1208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1214 = INT16_MIN;
	volatile uint8_t x1216 = 7U;
	int32_t t46 = 3999;

	t46 = (((x1213&x1214)<=x1215)<<x1216);

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1222 = UINT8_MAX;
	int8_t x1223 = INT8_MIN;
	volatile int32_t t47 = 0;

	t47 = (((x1221&x1222)<=x1223)<<x1224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1242 = 6;
	static int8_t x1244 = 16;
	static volatile int32_t t48 = 0;

	t48 = (((x1241&x1242)<=x1243)<<x1244);

	if (t48 != 65536) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1253 = INT64_MIN;
	static int64_t x1254 = INT64_MIN;
	static volatile uint32_t x1255 = UINT32_MAX;
	static uint8_t x1256 = 1U;
	int32_t t49 = 20474;

	t49 = (((x1253&x1254)<=x1255)<<x1256);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1277 = -1LL;
	int64_t x1278 = 1LL;

	t50 = (((x1277&x1278)<=x1279)<<x1280);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1289 = INT64_MAX;
	int16_t x1290 = 4;
	static volatile uint64_t x1291 = 2LLU;
	int8_t x1292 = 2;
	static int32_t t51 = -2482;

	t51 = (((x1289&x1290)<=x1291)<<x1292);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1302 = -1LL;
	static volatile int32_t x1303 = INT32_MIN;
	int8_t x1304 = 0;
	int32_t t52 = 494733;

	t52 = (((x1301&x1302)<=x1303)<<x1304);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1310 = -1;
	int64_t x1312 = 7LL;
	int32_t t53 = -33815;

	t53 = (((x1309&x1310)<=x1311)<<x1312);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1366 = INT16_MAX;
	uint64_t x1367 = UINT64_MAX;
	volatile int32_t t54 = 690067;

	t54 = (((x1365&x1366)<=x1367)<<x1368);

	if (t54 != 524288) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x1457 = 597U;
	int8_t x1458 = INT8_MIN;
	int16_t x1460 = 5;
	volatile int32_t t55 = 14710;

	t55 = (((x1457&x1458)<=x1459)<<x1460);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1465 = 1798816;
	volatile int8_t x1466 = INT8_MIN;
	int32_t x1467 = -1248972;
	volatile int8_t x1468 = 2;

	t56 = (((x1465&x1466)<=x1467)<<x1468);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x1517 = -791717732;
	uint32_t x1518 = UINT32_MAX;
	int16_t x1519 = -230;
	int32_t t57 = 0;

	t57 = (((x1517&x1518)<=x1519)<<x1520);

	if (t57 != 64) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1573 = INT32_MAX;
	static int8_t x1574 = INT8_MIN;
	int32_t x1575 = -1;

	t58 = (((x1573&x1574)<=x1575)<<x1576);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1713 = 9477343357805LLU;
	static volatile uint64_t x1714 = 1LLU;
	static int8_t x1715 = -1;
	int16_t x1716 = 24;
	int32_t t59 = 3;

	t59 = (((x1713&x1714)<=x1715)<<x1716);

	if (t59 != 16777216) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1809 = 0U;
	int32_t x1810 = INT32_MIN;
	volatile int32_t x1811 = INT32_MAX;

	t60 = (((x1809&x1810)<=x1811)<<x1812);

	if (t60 != 64) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1825 = -1LL;
	volatile int8_t x1828 = 0;
	volatile int32_t t61 = -111684864;

	t61 = (((x1825&x1826)<=x1827)<<x1828);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x1838 = 28U;
	uint32_t x1839 = 87U;
	int32_t t62 = -70028467;

	t62 = (((x1837&x1838)<=x1839)<<x1840);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1879 = UINT16_MAX;
	volatile uint16_t x1880 = 1U;
	volatile int32_t t63 = -20170134;

	t63 = (((x1877&x1878)<=x1879)<<x1880);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1909 = 7715U;
	int32_t x1910 = INT32_MAX;
	int64_t x1911 = INT64_MIN;
	uint8_t x1912 = 0U;
	volatile int32_t t64 = 0;

	t64 = (((x1909&x1910)<=x1911)<<x1912);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1913 = 4762;
	static uint32_t x1914 = UINT32_MAX;
	int8_t x1915 = -1;
	static volatile int32_t t65 = 23132773;

	t65 = (((x1913&x1914)<=x1915)<<x1916);

	if (t65 != 8192) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1949 = 1506547365435LLU;
	static int16_t x1950 = INT16_MIN;
	uint8_t x1951 = 1U;
	int8_t x1952 = 1;
	volatile int32_t t66 = 31480;

	t66 = (((x1949&x1950)<=x1951)<<x1952);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1966 = UINT64_MAX;
	int16_t x1967 = 14;
	static uint8_t x1968 = 23U;
	int32_t t67 = 972517;

	t67 = (((x1965&x1966)<=x1967)<<x1968);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x1981 = INT32_MIN;
	static int8_t x1982 = INT8_MIN;
	int32_t t68 = -26950;

	t68 = (((x1981&x1982)<=x1983)<<x1984);

	if (t68 != 4194304) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2013 = INT32_MIN;
	volatile int64_t x2014 = INT64_MIN;
	uint8_t x2016 = 0U;
	static volatile int32_t t69 = -4;

	t69 = (((x2013&x2014)<=x2015)<<x2016);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2025 = 58U;
	int8_t x2027 = -1;
	static uint8_t x2028 = 22U;
	static int32_t t70 = -894801752;

	t70 = (((x2025&x2026)<=x2027)<<x2028);

	if (t70 != 4194304) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2085 = INT8_MIN;
	volatile int16_t x2086 = 10198;
	uint8_t x2087 = UINT8_MAX;
	int32_t x2088 = 1;
	int32_t t71 = 461994343;

	t71 = (((x2085&x2086)<=x2087)<<x2088);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x2262 = 1079811582LLU;
	int64_t x2263 = 4LL;
	uint32_t x2264 = 11U;

	t72 = (((x2261&x2262)<=x2263)<<x2264);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2267 = -27;
	volatile uint8_t x2268 = 21U;

	t73 = (((x2265&x2266)<=x2267)<<x2268);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2309 = -1849877834LL;
	uint32_t x2310 = 109277375U;
	uint8_t x2312 = 1U;
	static int32_t t74 = -1072;

	t74 = (((x2309&x2310)<=x2311)<<x2312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x2381 = 24;
	int16_t x2382 = -1;
	static uint64_t x2383 = 791LLU;
	uint8_t x2384 = 14U;
	volatile int32_t t75 = -28;

	t75 = (((x2381&x2382)<=x2383)<<x2384);

	if (t75 != 16384) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2389 = -2;
	int32_t x2390 = 1;
	uint8_t x2391 = 6U;
	static int8_t x2392 = 2;
	int32_t t76 = -390;

	t76 = (((x2389&x2390)<=x2391)<<x2392);

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2434 = 0;
	uint8_t x2435 = UINT8_MAX;
	static int16_t x2436 = 0;
	volatile int32_t t77 = -32;

	t77 = (((x2433&x2434)<=x2435)<<x2436);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2441 = INT8_MIN;
	int8_t x2444 = 0;
	volatile int32_t t78 = 2;

	t78 = (((x2441&x2442)<=x2443)<<x2444);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2449 = INT16_MIN;
	int32_t x2450 = INT32_MIN;
	int8_t x2451 = INT8_MAX;
	static int8_t x2452 = 6;

	t79 = (((x2449&x2450)<=x2451)<<x2452);

	if (t79 != 64) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2483 = -49416LL;
	uint16_t x2484 = 19U;
	volatile int32_t t80 = -21;

	t80 = (((x2481&x2482)<=x2483)<<x2484);

	if (t80 != 524288) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2553 = 527470;
	static int16_t x2554 = INT16_MIN;
	int64_t x2555 = INT64_MAX;
	int8_t x2556 = 0;
	int32_t t81 = 1313;

	t81 = (((x2553&x2554)<=x2555)<<x2556);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2561 = INT32_MIN;
	uint32_t x2562 = 40U;
	int64_t x2563 = INT64_MIN;
	volatile int16_t x2564 = 0;
	volatile int32_t t82 = 4;

	t82 = (((x2561&x2562)<=x2563)<<x2564);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2565 = 1U;
	uint64_t x2566 = UINT64_MAX;
	uint64_t x2567 = 2125929269368518842LLU;
	uint8_t x2568 = 1U;

	t83 = (((x2565&x2566)<=x2567)<<x2568);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x2613 = 14783U;
	static int32_t x2614 = INT32_MIN;
	int32_t x2615 = -968152426;
	int16_t x2616 = 11;

	t84 = (((x2613&x2614)<=x2615)<<x2616);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x2625 = INT16_MAX;
	uint64_t x2626 = UINT64_MAX;
	int32_t t85 = 749629;

	t85 = (((x2625&x2626)<=x2627)<<x2628);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2645 = -1;
	int16_t x2647 = INT16_MIN;
	uint8_t x2648 = 2U;
	volatile int32_t t86 = 20676392;

	t86 = (((x2645&x2646)<=x2647)<<x2648);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2703 = INT8_MAX;
	static uint16_t x2704 = 1U;

	t87 = (((x2701&x2702)<=x2703)<<x2704);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2757 = 1LL;
	static int32_t x2758 = 923359300;
	volatile int16_t x2759 = INT16_MIN;

	t88 = (((x2757&x2758)<=x2759)<<x2760);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2769 = 41467898431LL;
	volatile int64_t x2770 = INT64_MIN;
	volatile int32_t x2771 = -1;
	static volatile uint16_t x2772 = 2U;
	volatile int32_t t89 = 3707172;

	t89 = (((x2769&x2770)<=x2771)<<x2772);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2781 = UINT64_MAX;
	int16_t x2783 = -697;
	uint8_t x2784 = 1U;
	volatile int32_t t90 = -94;

	t90 = (((x2781&x2782)<=x2783)<<x2784);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2825 = 67941LLU;
	int8_t x2826 = -1;
	uint8_t x2827 = 0U;
	int32_t t91 = 7;

	t91 = (((x2825&x2826)<=x2827)<<x2828);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2833 = 365U;
	int16_t x2835 = INT16_MIN;
	static uint8_t x2836 = 3U;

	t92 = (((x2833&x2834)<=x2835)<<x2836);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2837 = -38LL;
	int32_t x2838 = INT32_MAX;
	volatile uint8_t x2839 = 3U;
	static uint16_t x2840 = 18U;
	static int32_t t93 = 17364804;

	t93 = (((x2837&x2838)<=x2839)<<x2840);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2849 = INT16_MAX;
	volatile int8_t x2850 = INT8_MAX;
	int16_t x2851 = -826;
	uint8_t x2852 = 2U;

	t94 = (((x2849&x2850)<=x2851)<<x2852);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x2909 = 19U;
	uint16_t x2910 = UINT16_MAX;
	int64_t x2911 = -1LL;
	static uint8_t x2912 = 27U;

	t95 = (((x2909&x2910)<=x2911)<<x2912);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2941 = -433348089418274876LL;
	uint32_t x2942 = UINT32_MAX;
	int8_t x2943 = INT8_MAX;
	uint16_t x2944 = 5U;
	static int32_t t96 = 36909148;

	t96 = (((x2941&x2942)<=x2943)<<x2944);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2945 = 177292114733LLU;
	volatile int8_t x2946 = INT8_MIN;
	int64_t x2947 = 201425LL;
	int32_t x2948 = 1;

	t97 = (((x2945&x2946)<=x2947)<<x2948);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3017 = 1614;
	volatile uint32_t x3018 = UINT32_MAX;
	uint32_t x3019 = 9331896U;
	uint16_t x3020 = 0U;
	volatile int32_t t98 = -1217;

	t98 = (((x3017&x3018)<=x3019)<<x3020);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3037 = 3U;
	uint8_t x3038 = 1U;
	int8_t x3039 = 2;
	static uint8_t x3040 = 17U;
	int32_t t99 = -165532;

	t99 = (((x3037&x3038)<=x3039)<<x3040);

	if (t99 != 131072) { NG(); } else { ; }
	
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

