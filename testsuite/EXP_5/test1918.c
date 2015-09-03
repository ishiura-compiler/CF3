#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x111 = -1;
volatile int64_t t2 = INT64_MAX;
volatile uint32_t t4 = 87302U;
int8_t x162 = INT8_MIN;
int32_t x164 = -1;
int64_t x250 = INT64_MAX;
int32_t x259 = 5323;
int32_t x265 = INT32_MAX;
static volatile uint8_t x267 = 4U;
int32_t t10 = -4138868;
uint8_t x301 = 49U;
int8_t x303 = INT8_MAX;
volatile uint16_t x304 = 26U;
uint64_t x369 = UINT64_MAX;
static int64_t x372 = -1LL;
static uint64_t t14 = UINT64_MAX;
int32_t x399 = -182;
int8_t x546 = INT8_MAX;
static uint32_t x563 = 8329U;
volatile int32_t t21 = 0;
static int32_t t24 = -2337779;
static int8_t x662 = -1;
int8_t x685 = 8;
volatile uint64_t x686 = UINT64_MAX;
volatile uint32_t x716 = 158U;
int64_t x737 = 6444112LL;
int64_t x739 = INT64_MAX;
int64_t x781 = 134752008493LL;
volatile int64_t t34 = -181LL;
volatile int32_t t35 = 575489052;
int8_t x956 = INT8_MAX;
static volatile uint8_t x962 = 79U;
static int32_t x963 = 6804;
uint64_t x1021 = 90846924373LLU;
static int16_t x1023 = -1;
int64_t x1160 = -31240LL;
int32_t x1177 = 5;
uint8_t x1178 = UINT8_MAX;
int32_t t41 = -772702907;
static int32_t t42 = 11;
int64_t x1202 = INT64_MAX;
int8_t x1206 = -7;
uint64_t x1207 = 7566804097790806LLU;
static uint64_t x1214 = 1384184281458LLU;
int16_t x1215 = -31;
int32_t t45 = -9583;
int16_t x1258 = -1;
static uint16_t x1266 = 30631U;
int32_t x1278 = INT32_MIN;
int16_t x1291 = 1;
uint32_t x1310 = UINT32_MAX;
int32_t t52 = 173406;
uint8_t x1418 = 9U;
int64_t x1420 = INT64_MAX;
int64_t t56 = -30LL;
volatile uint32_t x1423 = UINT32_MAX;
uint64_t t57 = 6521978798132LLU;
int8_t x1460 = -7;
volatile int32_t t59 = 364;
int16_t x1494 = INT16_MIN;
int8_t x1496 = -1;
int64_t x1578 = INT64_MAX;
uint64_t x1579 = UINT64_MAX;
volatile uint16_t x1641 = 0U;
static int32_t x1663 = INT32_MIN;
uint8_t x1685 = UINT8_MAX;
int64_t x1741 = INT64_MAX;
uint64_t x1761 = 212071699LLU;
volatile uint16_t x1763 = 8U;
static int8_t x1767 = 56;
volatile uint64_t x1845 = 725197LLU;
int32_t x1874 = -123799343;
static int8_t x1876 = -1;
int64_t x1908 = -1LL;
int16_t x1981 = INT16_MAX;
int8_t x1991 = INT8_MIN;
uint8_t x2017 = 26U;
static int32_t t77 = 715074244;
volatile int8_t x2067 = -1;
volatile int32_t t79 = -426;
volatile uint32_t x2071 = 356000U;
int8_t x2102 = -2;
int32_t t81 = 664;
int8_t x2182 = 0;
volatile int64_t x2198 = -45184420LL;
volatile int32_t t84 = 562256;
volatile int16_t x2206 = INT16_MAX;
int16_t x2210 = -364;
int16_t x2212 = -1;
volatile int32_t t86 = 305;
int64_t x2226 = INT64_MIN;
static uint16_t x2257 = 37U;
volatile uint8_t x2258 = 3U;
static int8_t x2322 = INT8_MIN;
volatile int8_t x2396 = -1;
volatile int64_t x2436 = INT64_MAX;
int64_t x2445 = 2153503454581952345LL;
int8_t x2522 = INT8_MIN;
volatile int32_t x2523 = -1;
volatile int16_t x2546 = INT16_MAX;
static int32_t x2548 = -1;


void f0(void) {
	uint8_t x5 = 78U;
	uint8_t x6 = 0U;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -1;
	volatile int32_t t0 = -4929;

	t0 = (x5>>((x6|x7)%x8));

	if (t0 != 78) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x97 = 7312883U;
	uint8_t x98 = 54U;
	static int32_t x99 = INT32_MAX;
	volatile int16_t x100 = INT16_MAX;
	volatile uint32_t t1 = 357450U;

	t1 = (x97>>((x98|x99)%x100));

	if (t1 != 3656441U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MIN;
	uint64_t x112 = UINT64_MAX;

	t2 = (x109>>((x110|x111)%x112));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x113 = 179U;
	uint64_t x114 = 1598481583851292669LLU;
	static uint8_t x115 = UINT8_MAX;
	uint8_t x116 = UINT8_MAX;
	static int32_t t3 = -2947;

	t3 = (x113>>((x114|x115)%x116));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x137 = 3U;
	static int8_t x138 = 0;
	static int16_t x139 = 0;
	volatile int16_t x140 = INT16_MAX;

	t4 = (x137>>((x138|x139)%x140));

	if (t4 != 3U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x161 = 951435689LLU;
	volatile int32_t x163 = INT32_MIN;
	uint64_t t5 = 22639LLU;

	t5 = (x161>>((x162|x163)%x164));

	if (t5 != 951435689LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x197 = 19674549460480473LLU;
	static volatile uint32_t x198 = UINT32_MAX;
	int32_t x199 = INT32_MIN;
	volatile uint32_t x200 = UINT32_MAX;
	uint64_t t6 = 124LLU;

	t6 = (x197>>((x198|x199)%x200));

	if (t6 != 19674549460480473LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x249 = INT32_MAX;
	static uint64_t x251 = UINT64_MAX;
	volatile uint8_t x252 = 8U;
	int32_t t7 = -73614;

	t7 = (x249>>((x250|x251)%x252));

	if (t7 != 16777215) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x257 = 21U;
	volatile int8_t x258 = -8;
	static int16_t x260 = -1;
	volatile int32_t t8 = -3193000;

	t8 = (x257>>((x258|x259)%x260));

	if (t8 != 21) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x266 = UINT32_MAX;
	uint16_t x268 = 1U;
	int32_t t9 = INT32_MAX;

	t9 = (x265>>((x266|x267)%x268));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x285 = 2U;
	static uint64_t x286 = 252402700372557159LLU;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = -1;

	t10 = (x285>>((x286|x287)%x288));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x297 = 98U;
	uint64_t x298 = 842149777038LLU;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MAX;
	static int32_t t11 = 175272;

	t11 = (x297>>((x298|x299)%x300));

	if (t11 != 49) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x302 = 4;
	volatile int32_t t12 = 16;

	t12 = (x301>>((x302|x303)%x304));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x321 = 6U;
	uint64_t x322 = 1754946574626LLU;
	int16_t x323 = -1;
	static int16_t x324 = 4;
	volatile int32_t t13 = 1326156;

	t13 = (x321>>((x322|x323)%x324));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x370 = -963962;
	uint32_t x371 = 1356408230U;

	t14 = (x369>>((x370|x371)%x372));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x389 = 8U;
	static uint64_t x390 = UINT64_MAX;
	static uint8_t x391 = 79U;
	volatile int8_t x392 = INT8_MAX;
	static int32_t t15 = -93596;

	t15 = (x389>>((x390|x391)%x392));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x397 = 5U;
	static int8_t x398 = -1;
	static uint32_t x400 = UINT32_MAX;
	volatile int32_t t16 = -1644;

	t16 = (x397>>((x398|x399)%x400));

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x401 = 3940U;
	int8_t x402 = 2;
	int32_t x403 = 6;
	static volatile int8_t x404 = INT8_MIN;
	static int32_t t17 = -8759;

	t17 = (x401>>((x402|x403)%x404));

	if (t17 != 61) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x417 = UINT32_MAX;
	int64_t x418 = 39232LL;
	uint8_t x419 = 1U;
	int32_t x420 = -1;
	uint32_t t18 = UINT32_MAX;

	t18 = (x417>>((x418|x419)%x420));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x545 = UINT8_MAX;
	static int16_t x547 = INT16_MIN;
	int8_t x548 = -1;
	volatile int32_t t19 = 8201;

	t19 = (x545>>((x546|x547)%x548));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x561 = UINT16_MAX;
	int64_t x562 = -1LL;
	static int64_t x564 = -1LL;
	int32_t t20 = -11197;

	t20 = (x561>>((x562|x563)%x564));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x589 = 5588157;
	static int8_t x590 = 1;
	static int64_t x591 = INT64_MAX;
	int8_t x592 = -1;

	t21 = (x589>>((x590|x591)%x592));

	if (t21 != 5588157) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x593 = UINT16_MAX;
	static uint16_t x594 = 5134U;
	volatile int16_t x595 = INT16_MAX;
	int8_t x596 = -1;
	int32_t t22 = -113362;

	t22 = (x593>>((x594|x595)%x596));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x613 = 73;
	static int8_t x614 = INT8_MIN;
	uint64_t x615 = UINT64_MAX;
	static int16_t x616 = -1;
	volatile int32_t t23 = 12147;

	t23 = (x613>>((x614|x615)%x616));

	if (t23 != 73) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x617 = UINT8_MAX;
	uint64_t x618 = 223402425993696935LLU;
	int32_t x619 = 917;
	uint8_t x620 = 1U;

	t24 = (x617>>((x618|x619)%x620));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x661 = 919;
	static volatile int16_t x663 = 15528;
	static int32_t x664 = -1;
	volatile int32_t t25 = 5;

	t25 = (x661>>((x662|x663)%x664));

	if (t25 != 919) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x687 = INT32_MIN;
	uint32_t x688 = 17U;
	volatile int32_t t26 = -25893025;

	t26 = (x685>>((x686|x687)%x688));

	if (t26 != 8) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x713 = 169833278943LLU;
	static uint16_t x714 = 73U;
	int8_t x715 = -1;
	volatile uint64_t t27 = 88265385LLU;

	t27 = (x713>>((x714|x715)%x716));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x738 = 2;
	int8_t x740 = INT8_MAX;
	int64_t t28 = 30LL;

	t28 = (x737>>((x738|x739)%x740));

	if (t28 != 6444112LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x757 = 126334023083427878LL;
	int8_t x758 = INT8_MIN;
	static uint32_t x759 = UINT32_MAX;
	static int32_t x760 = INT32_MAX;
	volatile int64_t t29 = -6087159319LL;

	t29 = (x757>>((x758|x759)%x760));

	if (t29 != 63167011541713939LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x773 = UINT32_MAX;
	uint16_t x774 = UINT16_MAX;
	static volatile int64_t x775 = INT64_MAX;
	int8_t x776 = -15;
	volatile uint32_t t30 = 12995890U;

	t30 = (x773>>((x774|x775)%x776));

	if (t30 != 33554431U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x782 = 49;
	uint64_t x783 = 22088LLU;
	static int8_t x784 = INT8_MAX;
	static volatile int64_t t31 = 12258734004786LL;

	t31 = (x781>>((x782|x783)%x784));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x833 = 6;
	int32_t x834 = -3083;
	volatile uint16_t x835 = 10342U;
	volatile int64_t x836 = -1LL;
	volatile int32_t t32 = -469;

	t32 = (x833>>((x834|x835)%x836));

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x885 = 2LL;
	int8_t x886 = 0;
	uint8_t x887 = UINT8_MAX;
	static int32_t x888 = 1;
	volatile int64_t t33 = 68526586986812764LL;

	t33 = (x885>>((x886|x887)%x888));

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x933 = 16662664163092156LL;
	uint64_t x934 = UINT64_MAX;
	uint16_t x935 = 258U;
	volatile uint16_t x936 = 1U;

	t34 = (x933>>((x934|x935)%x936));

	if (t34 != 16662664163092156LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x949 = INT8_MAX;
	int32_t x950 = -1;
	static uint32_t x951 = 416U;
	int16_t x952 = -1;

	t35 = (x949>>((x950|x951)%x952));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x953 = UINT64_MAX;
	volatile uint16_t x954 = 455U;
	uint16_t x955 = UINT16_MAX;
	uint64_t t36 = 2682191990LLU;

	t36 = (x953>>((x954|x955)%x956));

	if (t36 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x961 = UINT32_MAX;
	int8_t x964 = 1;
	uint32_t t37 = UINT32_MAX;

	t37 = (x961>>((x962|x963)%x964));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x969 = 22;
	uint64_t x970 = 35LLU;
	uint64_t x971 = 845538946806LLU;
	volatile uint8_t x972 = 2U;
	int32_t t38 = -139;

	t38 = (x969>>((x970|x971)%x972));

	if (t38 != 11) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x1022 = UINT32_MAX;
	static int8_t x1024 = 7;
	volatile uint64_t t39 = 570441113983794997LLU;

	t39 = (x1021>>((x1022|x1023)%x1024));

	if (t39 != 11355865546LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1157 = INT16_MAX;
	uint8_t x1158 = 11U;
	static uint16_t x1159 = 2U;
	static volatile int32_t t40 = 24837;

	t40 = (x1157>>((x1158|x1159)%x1160));

	if (t40 != 15) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1179 = INT64_MIN;
	static int16_t x1180 = -1;

	t41 = (x1177>>((x1178|x1179)%x1180));

	if (t41 != 5) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x1185 = INT16_MAX;
	uint16_t x1186 = 2U;
	uint16_t x1187 = 0U;
	int64_t x1188 = -409LL;

	t42 = (x1185>>((x1186|x1187)%x1188));

	if (t42 != 8191) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1201 = 29U;
	uint8_t x1203 = UINT8_MAX;
	int8_t x1204 = -1;
	volatile int32_t t43 = 9247576;

	t43 = (x1201>>((x1202|x1203)%x1204));

	if (t43 != 29) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x1205 = INT8_MAX;
	uint64_t x1208 = UINT64_MAX;
	volatile int32_t t44 = -68;

	t44 = (x1205>>((x1206|x1207)%x1208));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1213 = 10570U;
	int8_t x1216 = 23;

	t45 = (x1213>>((x1214|x1215)%x1216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1225 = 7U;
	volatile int8_t x1226 = INT8_MIN;
	uint64_t x1227 = UINT64_MAX;
	uint8_t x1228 = 4U;
	volatile int32_t t46 = 1;

	t46 = (x1225>>((x1226|x1227)%x1228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1257 = 0U;
	static uint64_t x1259 = 886497746737LLU;
	static int64_t x1260 = INT64_MAX;
	volatile int32_t t47 = -17721171;

	t47 = (x1257>>((x1258|x1259)%x1260));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x1265 = 28U;
	int64_t x1267 = INT64_MIN;
	int64_t x1268 = -1LL;
	volatile int32_t t48 = 123164188;

	t48 = (x1265>>((x1266|x1267)%x1268));

	if (t48 != 28) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1277 = 272356717825388LLU;
	volatile int32_t x1279 = INT32_MAX;
	volatile int16_t x1280 = -1;
	static uint64_t t49 = 68791287352507LLU;

	t49 = (x1277>>((x1278|x1279)%x1280));

	if (t49 != 272356717825388LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1289 = 19U;
	int8_t x1290 = INT8_MIN;
	int8_t x1292 = -1;
	int32_t t50 = 0;

	t50 = (x1289>>((x1290|x1291)%x1292));

	if (t50 != 19) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1309 = 1;
	int32_t x1311 = INT32_MIN;
	int8_t x1312 = -1;
	volatile int32_t t51 = 1;

	t51 = (x1309>>((x1310|x1311)%x1312));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1333 = 4U;
	static int32_t x1334 = INT32_MIN;
	int64_t x1335 = INT64_MAX;
	int64_t x1336 = -1LL;

	t52 = (x1333>>((x1334|x1335)%x1336));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1341 = 184;
	uint64_t x1342 = UINT64_MAX;
	int8_t x1343 = INT8_MIN;
	volatile int8_t x1344 = INT8_MAX;
	static volatile int32_t t53 = -1;

	t53 = (x1341>>((x1342|x1343)%x1344));

	if (t53 != 92) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1353 = 2885;
	int16_t x1354 = INT16_MIN;
	int32_t x1355 = INT32_MIN;
	volatile int8_t x1356 = -1;
	volatile int32_t t54 = -16;

	t54 = (x1353>>((x1354|x1355)%x1356));

	if (t54 != 2885) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1365 = INT8_MAX;
	uint32_t x1366 = 10U;
	volatile uint16_t x1367 = 11U;
	int64_t x1368 = -14801LL;
	int32_t t55 = -105796492;

	t55 = (x1365>>((x1366|x1367)%x1368));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x1417 = 4229977274LL;
	static uint64_t x1419 = UINT64_MAX;

	t56 = (x1417>>((x1418|x1419)%x1420));

	if (t56 != 2114988637LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1421 = UINT64_MAX;
	int8_t x1422 = INT8_MAX;
	int8_t x1424 = 8;

	t57 = (x1421>>((x1422|x1423)%x1424));

	if (t57 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1425 = UINT64_MAX;
	int16_t x1426 = -1;
	uint64_t x1427 = UINT64_MAX;
	static int8_t x1428 = -1;
	uint64_t t58 = UINT64_MAX;

	t58 = (x1425>>((x1426|x1427)%x1428));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1457 = 3;
	int16_t x1458 = INT16_MIN;
	volatile int8_t x1459 = INT8_MAX;

	t59 = (x1457>>((x1458|x1459)%x1460));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1493 = 1;
	uint16_t x1495 = UINT16_MAX;
	volatile int32_t t60 = 6548642;

	t60 = (x1493>>((x1494|x1495)%x1496));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1577 = INT64_MAX;
	uint16_t x1580 = 25U;
	int64_t t61 = 1LL;

	t61 = (x1577>>((x1578|x1579)%x1580));

	if (t61 != 281474976710655LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1642 = 59648847441LL;
	uint32_t x1643 = 16450U;
	uint8_t x1644 = 10U;
	static volatile int32_t t62 = 168;

	t62 = (x1641>>((x1642|x1643)%x1644));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1661 = UINT64_MAX;
	uint16_t x1662 = 163U;
	int64_t x1664 = -1LL;
	static volatile uint64_t t63 = UINT64_MAX;

	t63 = (x1661>>((x1662|x1663)%x1664));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1686 = INT32_MAX;
	int8_t x1687 = INT8_MIN;
	volatile uint64_t x1688 = UINT64_MAX;
	volatile int32_t t64 = 0;

	t64 = (x1685>>((x1686|x1687)%x1688));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1742 = -1;
	uint64_t x1743 = 110886LLU;
	static int8_t x1744 = INT8_MAX;
	static volatile int64_t t65 = 313688050LL;

	t65 = (x1741>>((x1742|x1743)%x1744));

	if (t65 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1762 = 5LLU;
	int32_t x1764 = -190817;
	volatile uint64_t t66 = 125561308LLU;

	t66 = (x1761>>((x1762|x1763)%x1764));

	if (t66 != 25887LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1765 = 77917147526689657LLU;
	volatile uint8_t x1766 = UINT8_MAX;
	int32_t x1768 = -1;
	static uint64_t t67 = 10937945108305LLU;

	t67 = (x1765>>((x1766|x1767)%x1768));

	if (t67 != 77917147526689657LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x1769 = 4008355;
	int8_t x1770 = -3;
	uint32_t x1771 = UINT32_MAX;
	volatile int32_t x1772 = INT32_MAX;
	int32_t t68 = -24536;

	t68 = (x1769>>((x1770|x1771)%x1772));

	if (t68 != 2004177) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1797 = 9898919;
	int16_t x1798 = 540;
	int32_t x1799 = INT32_MIN;
	uint16_t x1800 = 1U;
	static int32_t t69 = 16552965;

	t69 = (x1797>>((x1798|x1799)%x1800));

	if (t69 != 9898919) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1846 = -13262;
	int16_t x1847 = INT16_MIN;
	int16_t x1848 = -1;
	volatile uint64_t t70 = 16715203LLU;

	t70 = (x1845>>((x1846|x1847)%x1848));

	if (t70 != 725197LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x1873 = UINT32_MAX;
	static int64_t x1875 = INT64_MIN;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = (x1873>>((x1874|x1875)%x1876));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1905 = INT32_MAX;
	static volatile int32_t x1906 = 51;
	int32_t x1907 = INT32_MIN;
	static int32_t t72 = INT32_MAX;

	t72 = (x1905>>((x1906|x1907)%x1908));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x1921 = UINT32_MAX;
	uint8_t x1922 = UINT8_MAX;
	uint16_t x1923 = UINT16_MAX;
	static uint16_t x1924 = 3U;
	uint32_t t73 = UINT32_MAX;

	t73 = (x1921>>((x1922|x1923)%x1924));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x1949 = 15U;
	uint16_t x1950 = 1531U;
	int32_t x1951 = INT32_MAX;
	int16_t x1952 = -9;
	volatile int32_t t74 = -8501;

	t74 = (x1949>>((x1950|x1951)%x1952));

	if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1982 = -24;
	volatile uint8_t x1983 = 44U;
	int64_t x1984 = -1LL;
	static int32_t t75 = 4432411;

	t75 = (x1981>>((x1982|x1983)%x1984));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1989 = 14U;
	uint32_t x1990 = UINT32_MAX;
	static volatile int8_t x1992 = -1;
	int32_t t76 = 1851538;

	t76 = (x1989>>((x1990|x1991)%x1992));

	if (t76 != 14) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2018 = UINT32_MAX;
	volatile uint64_t x2019 = 2LLU;
	int32_t x2020 = INT32_MAX;

	t77 = (x2017>>((x2018|x2019)%x2020));

	if (t77 != 13) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x2053 = 188042497848294471LL;
	int32_t x2054 = -117162;
	uint64_t x2055 = 4803043300463898LLU;
	uint32_t x2056 = 103U;
	int64_t t78 = -2LL;

	t78 = (x2053>>((x2054|x2055)%x2056));

	if (t78 != 734541007219900LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2065 = UINT16_MAX;
	static uint32_t x2066 = UINT32_MAX;
	int8_t x2068 = -5;

	t79 = (x2065>>((x2066|x2067)%x2068));

	if (t79 != 4095) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2069 = 34700537041920081LL;
	int32_t x2070 = -1;
	int8_t x2072 = -1;
	volatile int64_t t80 = -522LL;

	t80 = (x2069>>((x2070|x2071)%x2072));

	if (t80 != 34700537041920081LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2101 = UINT16_MAX;
	int8_t x2103 = INT8_MAX;
	int64_t x2104 = -1LL;

	t81 = (x2101>>((x2102|x2103)%x2104));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x2105 = 28631U;
	int32_t x2106 = -4;
	volatile int64_t x2107 = -503157458LL;
	int16_t x2108 = -1;
	int32_t t82 = 786644;

	t82 = (x2105>>((x2106|x2107)%x2108));

	if (t82 != 28631) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2181 = 491;
	int8_t x2183 = -1;
	uint32_t x2184 = 6U;
	volatile int32_t t83 = -515504728;

	t83 = (x2181>>((x2182|x2183)%x2184));

	if (t83 != 61) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2197 = 14;
	static uint64_t x2199 = UINT64_MAX;
	int32_t x2200 = -1;

	t84 = (x2197>>((x2198|x2199)%x2200));

	if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x2205 = UINT8_MAX;
	static uint32_t x2207 = 97795773U;
	int8_t x2208 = 15;
	volatile int32_t t85 = 1;

	t85 = (x2205>>((x2206|x2207)%x2208));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2209 = 3;
	uint32_t x2211 = UINT32_MAX;

	t86 = (x2209>>((x2210|x2211)%x2212));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2225 = 29633U;
	uint64_t x2227 = UINT64_MAX;
	uint64_t x2228 = UINT64_MAX;
	int32_t t87 = 258;

	t87 = (x2225>>((x2226|x2227)%x2228));

	if (t87 != 29633) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2259 = 23LL;
	volatile int8_t x2260 = -63;
	volatile int32_t t88 = -773083763;

	t88 = (x2257>>((x2258|x2259)%x2260));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2273 = INT16_MAX;
	int16_t x2274 = INT16_MIN;
	int16_t x2275 = -1;
	static volatile uint64_t x2276 = UINT64_MAX;
	volatile int32_t t89 = -14;

	t89 = (x2273>>((x2274|x2275)%x2276));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x2321 = 74333989LL;
	int8_t x2323 = INT8_MIN;
	int16_t x2324 = 1;
	volatile int64_t t90 = 15239LL;

	t90 = (x2321>>((x2322|x2323)%x2324));

	if (t90 != 74333989LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2393 = INT16_MAX;
	static int16_t x2394 = -1;
	int16_t x2395 = INT16_MIN;
	static int32_t t91 = 708;

	t91 = (x2393>>((x2394|x2395)%x2396));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2401 = 4012LL;
	int8_t x2402 = -1;
	uint32_t x2403 = UINT32_MAX;
	uint32_t x2404 = UINT32_MAX;
	volatile int64_t t92 = 101291LL;

	t92 = (x2401>>((x2402|x2403)%x2404));

	if (t92 != 4012LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2429 = 1U;
	uint8_t x2430 = UINT8_MAX;
	volatile uint16_t x2431 = 1045U;
	volatile uint8_t x2432 = 50U;
	static int32_t t93 = -5;

	t93 = (x2429>>((x2430|x2431)%x2432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x2433 = 4075U;
	uint64_t x2434 = 606453211334LLU;
	int32_t x2435 = -1;
	volatile int32_t t94 = 34;

	t94 = (x2433>>((x2434|x2435)%x2436));

	if (t94 != 2037) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x2446 = 1;
	static volatile uint16_t x2447 = 6U;
	uint64_t x2448 = 70539797087LLU;
	volatile int64_t t95 = -29435138931999LL;

	t95 = (x2445>>((x2446|x2447)%x2448));

	if (t95 != 16824245738921502LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2517 = INT64_MAX;
	int64_t x2518 = INT64_MIN;
	int64_t x2519 = INT64_MIN;
	static int32_t x2520 = INT32_MIN;
	int64_t t96 = INT64_MAX;

	t96 = (x2517>>((x2518|x2519)%x2520));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x2521 = UINT8_MAX;
	int16_t x2524 = -1;
	int32_t t97 = -2912860;

	t97 = (x2521>>((x2522|x2523)%x2524));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x2537 = 1U;
	uint8_t x2538 = 3U;
	static uint16_t x2539 = UINT16_MAX;
	volatile int8_t x2540 = 1;
	static volatile uint32_t t98 = 77030U;

	t98 = (x2537>>((x2538|x2539)%x2540));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x2545 = 1491;
	uint16_t x2547 = UINT16_MAX;
	int32_t t99 = 238897700;

	t99 = (x2545>>((x2546|x2547)%x2548));

	if (t99 != 1491) { NG(); } else { ; }
	
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

