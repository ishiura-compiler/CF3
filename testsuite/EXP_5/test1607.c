#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x34 = 300U;
int8_t x81 = -1;
int64_t x87 = -561LL;
static volatile uint16_t x142 = UINT16_MAX;
static uint8_t x143 = 0U;
static volatile int32_t t6 = -1;
int16_t x251 = -1;
static int32_t t8 = -3055;
int8_t x258 = INT8_MIN;
int16_t x271 = INT16_MIN;
volatile int8_t x279 = -1;
static uint8_t x312 = 3U;
int16_t x324 = 0;
volatile int32_t t16 = 13;
uint32_t x358 = 15855U;
volatile int16_t x506 = INT16_MIN;
volatile int32_t t19 = -157931;
static uint8_t x539 = 96U;
int32_t t21 = -54802;
int8_t x816 = 1;
int32_t x821 = -1;
uint8_t x934 = UINT8_MAX;
static uint16_t x936 = 9U;
int8_t x1073 = INT8_MIN;
uint32_t x1075 = 827037328U;
uint64_t x1161 = UINT64_MAX;
int8_t x1163 = INT8_MAX;
volatile int32_t t35 = -3415969;
volatile int8_t x1259 = -1;
int32_t t36 = -49242;
uint8_t x1267 = 2U;
uint8_t x1344 = 2U;
int16_t x1369 = 2;
static int16_t x1370 = -1;
int64_t x1379 = INT64_MAX;
volatile int32_t t42 = 3;
int16_t x1457 = INT16_MIN;
int16_t x1459 = -1;
int8_t x1509 = INT8_MAX;
int8_t x1510 = INT8_MAX;
uint16_t x1571 = 5U;
volatile int32_t t48 = -2;
static int64_t x1594 = -2888557218232896784LL;
static volatile uint8_t x1700 = 11U;
volatile int16_t x1708 = 6;
uint32_t x1770 = 2217379U;
int16_t x1771 = -11;
uint64_t x1802 = 8317796689LLU;
volatile int32_t t56 = 11;
volatile uint8_t x1828 = 1U;
int32_t t58 = -56011;
static uint32_t x1831 = 4108587U;
uint16_t x1832 = 1U;
volatile int32_t t61 = 60515;
static int8_t x1934 = INT8_MIN;
int32_t t63 = 0;
int8_t x1997 = INT8_MAX;
uint64_t x2000 = 0LLU;
volatile int32_t t64 = 131;
int8_t x2003 = -1;
int8_t x2004 = 0;
volatile int32_t t65 = 64278;
static int8_t x2064 = 3;
int64_t x2130 = INT64_MAX;
static volatile int8_t x2180 = 0;
uint8_t x2370 = UINT8_MAX;
int32_t x2543 = INT32_MIN;
static int64_t x2549 = INT64_MIN;
volatile int32_t x2552 = 4;
int64_t x2609 = INT64_MIN;
int64_t x2610 = -1LL;
int32_t t80 = 3747348;
int32_t x2686 = INT32_MIN;
int16_t x2723 = INT16_MAX;
volatile uint8_t x2726 = 77U;
int8_t x2765 = INT8_MIN;
static uint16_t x2823 = 15U;
static uint16_t x2854 = 716U;
volatile int32_t t87 = 42321;
static uint16_t x2861 = 246U;
static int64_t x2863 = INT64_MAX;
uint64_t x2875 = UINT64_MAX;
int32_t x3062 = INT32_MIN;
int8_t x3064 = 1;
int32_t x3075 = INT32_MAX;
uint32_t x3076 = 24U;
volatile int8_t x3082 = INT8_MIN;
volatile int64_t x3123 = INT64_MAX;
int16_t x3159 = -1;
static int64_t x3193 = -889912773634721LL;
int8_t x3194 = INT8_MIN;
uint8_t x3209 = UINT8_MAX;
int16_t x3212 = 0;


void f0(void) {
	volatile uint32_t x33 = 24334U;
	volatile uint32_t x35 = UINT32_MAX;
	volatile int8_t x36 = 9;
	int32_t t0 = 48110;

	t0 = (x33==((x34<=x35)>>x36));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x41 = INT64_MIN;
	static int32_t x42 = INT32_MAX;
	int64_t x43 = -199809103269567LL;
	uint16_t x44 = 0U;
	static int32_t t1 = -20731;

	t1 = (x41==((x42<=x43)>>x44));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x82 = 104U;
	int16_t x83 = -3;
	uint32_t x84 = 0U;
	volatile int32_t t2 = 9;

	t2 = (x81==((x82<=x83)>>x84));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x85 = -1;
	int64_t x86 = -77862856LL;
	int8_t x88 = 18;
	static volatile int32_t t3 = -1765650;

	t3 = (x85==((x86<=x87)>>x88));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x117 = -14;
	static int32_t x118 = INT32_MIN;
	int8_t x119 = -62;
	volatile uint8_t x120 = 0U;
	int32_t t4 = 11046936;

	t4 = (x117==((x118<=x119)>>x120));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x141 = 261088U;
	static uint8_t x144 = 31U;
	volatile int32_t t5 = 5;

	t5 = (x141==((x142<=x143)>>x144));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x197 = INT32_MAX;
	volatile int64_t x198 = INT64_MIN;
	int8_t x199 = INT8_MIN;
	static int8_t x200 = 16;

	t6 = (x197==((x198<=x199)>>x200));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = -1;
	int32_t x211 = INT32_MIN;
	int32_t x212 = 0;
	volatile int32_t t7 = 185;

	t7 = (x209==((x210<=x211)>>x212));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x249 = 1U;
	int64_t x250 = -1LL;
	int8_t x252 = 1;

	t8 = (x249==((x250<=x251)>>x252));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x257 = 11128U;
	static int32_t x259 = INT32_MIN;
	uint8_t x260 = 0U;
	volatile int32_t t9 = -97034;

	t9 = (x257==((x258<=x259)>>x260));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x269 = UINT32_MAX;
	int64_t x270 = INT64_MIN;
	uint16_t x272 = 1U;
	volatile int32_t t10 = 338976647;

	t10 = (x269==((x270<=x271)>>x272));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x277 = 6U;
	static uint64_t x278 = 15LLU;
	int16_t x280 = 8;
	static volatile int32_t t11 = -41836;

	t11 = (x277==((x278<=x279)>>x280));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x301 = -507;
	uint8_t x302 = 8U;
	int64_t x303 = INT64_MIN;
	volatile uint8_t x304 = 7U;
	int32_t t12 = -84800520;

	t12 = (x301==((x302<=x303)>>x304));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x305 = 7522921271615LLU;
	int64_t x306 = INT64_MIN;
	volatile int16_t x307 = INT16_MAX;
	volatile uint64_t x308 = 2LLU;
	volatile int32_t t13 = 8195;

	t13 = (x305==((x306<=x307)>>x308));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x309 = -37;
	static volatile uint64_t x310 = 17576818297370LLU;
	uint16_t x311 = 9103U;
	int32_t t14 = 1978973;

	t14 = (x309==((x310<=x311)>>x312));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x321 = INT64_MAX;
	int32_t x322 = -1;
	int16_t x323 = INT16_MAX;
	volatile int32_t t15 = 6228415;

	t15 = (x321==((x322<=x323)>>x324));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x325 = UINT32_MAX;
	int8_t x326 = INT8_MAX;
	int64_t x327 = INT64_MIN;
	uint16_t x328 = 1U;

	t16 = (x325==((x326<=x327)>>x328));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x357 = INT8_MIN;
	uint16_t x359 = 28206U;
	int8_t x360 = 5;
	volatile int32_t t17 = 1;

	t17 = (x357==((x358<=x359)>>x360));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x425 = -128264;
	volatile uint16_t x426 = UINT16_MAX;
	int64_t x427 = 3LL;
	volatile uint16_t x428 = 5U;
	static int32_t t18 = -119;

	t18 = (x425==((x426<=x427)>>x428));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x505 = -1;
	static int8_t x507 = INT8_MIN;
	volatile uint8_t x508 = 2U;

	t19 = (x505==((x506<=x507)>>x508));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x533 = -1;
	int8_t x534 = -1;
	uint8_t x535 = 55U;
	volatile int8_t x536 = 4;
	volatile int32_t t20 = -959;

	t20 = (x533==((x534<=x535)>>x536));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x537 = 96176;
	static volatile int16_t x538 = INT16_MAX;
	static uint8_t x540 = 1U;

	t21 = (x537==((x538<=x539)>>x540));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MIN;
	volatile int16_t x607 = 836;
	int32_t x608 = 5;
	volatile int32_t t22 = -3;

	t22 = (x605==((x606<=x607)>>x608));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x685 = -1;
	static uint32_t x686 = 0U;
	int16_t x687 = INT16_MIN;
	volatile uint64_t x688 = 0LLU;
	int32_t t23 = -15695648;

	t23 = (x685==((x686<=x687)>>x688));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x797 = 196U;
	int32_t x798 = INT32_MIN;
	int32_t x799 = INT32_MIN;
	uint8_t x800 = 0U;
	int32_t t24 = 15722;

	t24 = (x797==((x798<=x799)>>x800));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x813 = -15;
	int8_t x814 = -14;
	int8_t x815 = -1;
	int32_t t25 = 12;

	t25 = (x813==((x814<=x815)>>x816));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x822 = 4;
	int8_t x823 = 10;
	static volatile int8_t x824 = 7;
	volatile int32_t t26 = 175543;

	t26 = (x821==((x822<=x823)>>x824));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x933 = INT16_MIN;
	static int8_t x935 = INT8_MIN;
	int32_t t27 = 117;

	t27 = (x933==((x934<=x935)>>x936));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x941 = INT16_MAX;
	static volatile int8_t x942 = 7;
	int64_t x943 = 6202849718736593LL;
	static volatile uint8_t x944 = 26U;
	int32_t t28 = -142;

	t28 = (x941==((x942<=x943)>>x944));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x945 = 4U;
	int64_t x946 = -28827334196511LL;
	int8_t x947 = -1;
	int8_t x948 = 1;
	volatile int32_t t29 = -3;

	t29 = (x945==((x946<=x947)>>x948));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x961 = INT8_MAX;
	uint16_t x962 = 108U;
	static int8_t x963 = 0;
	int8_t x964 = 3;
	int32_t t30 = -1381260;

	t30 = (x961==((x962<=x963)>>x964));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1033 = 50LL;
	int16_t x1034 = -7;
	uint16_t x1035 = UINT16_MAX;
	volatile int8_t x1036 = 20;
	volatile int32_t t31 = -55;

	t31 = (x1033==((x1034<=x1035)>>x1036));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1074 = 4;
	int16_t x1076 = 5;
	int32_t t32 = 35;

	t32 = (x1073==((x1074<=x1075)>>x1076));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1109 = -213;
	volatile uint16_t x1110 = 1720U;
	uint8_t x1111 = 11U;
	static volatile uint8_t x1112 = 0U;
	static int32_t t33 = 225654254;

	t33 = (x1109==((x1110<=x1111)>>x1112));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1162 = 58U;
	uint8_t x1164 = 1U;
	int32_t t34 = 47480;

	t34 = (x1161==((x1162<=x1163)>>x1164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1205 = UINT8_MAX;
	uint64_t x1206 = UINT64_MAX;
	int8_t x1207 = -1;
	int8_t x1208 = 3;

	t35 = (x1205==((x1206<=x1207)>>x1208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1257 = 5543;
	int64_t x1258 = INT64_MIN;
	uint16_t x1260 = 3U;

	t36 = (x1257==((x1258<=x1259)>>x1260));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1265 = 889449566LLU;
	volatile uint16_t x1266 = 26U;
	uint8_t x1268 = 4U;
	int32_t t37 = 14559829;

	t37 = (x1265==((x1266<=x1267)>>x1268));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1289 = -1LL;
	int32_t x1290 = -1;
	volatile int16_t x1291 = INT16_MIN;
	static volatile int8_t x1292 = 2;
	static int32_t t38 = -758;

	t38 = (x1289==((x1290<=x1291)>>x1292));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1341 = INT64_MIN;
	volatile int16_t x1342 = INT16_MIN;
	volatile int8_t x1343 = -1;
	volatile int32_t t39 = 57648044;

	t39 = (x1341==((x1342<=x1343)>>x1344));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1365 = -1;
	volatile uint16_t x1366 = 2U;
	volatile int32_t x1367 = 2017;
	uint8_t x1368 = 15U;
	volatile int32_t t40 = -33164786;

	t40 = (x1365==((x1366<=x1367)>>x1368));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1371 = INT16_MAX;
	uint64_t x1372 = 3LLU;
	int32_t t41 = -8285752;

	t41 = (x1369==((x1370<=x1371)>>x1372));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1377 = INT32_MIN;
	static int32_t x1378 = -83650;
	volatile uint32_t x1380 = 24U;

	t42 = (x1377==((x1378<=x1379)>>x1380));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1397 = -1LL;
	static int32_t x1398 = -1;
	uint16_t x1399 = UINT16_MAX;
	int8_t x1400 = 5;
	int32_t t43 = 0;

	t43 = (x1397==((x1398<=x1399)>>x1400));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x1445 = 121U;
	volatile int8_t x1446 = INT8_MAX;
	int32_t x1447 = -422105917;
	int32_t x1448 = 11;
	int32_t t44 = -7382545;

	t44 = (x1445==((x1446<=x1447)>>x1448));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x1458 = UINT16_MAX;
	uint8_t x1460 = 0U;
	int32_t t45 = -1;

	t45 = (x1457==((x1458<=x1459)>>x1460));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1461 = -1;
	volatile uint32_t x1462 = UINT32_MAX;
	static int64_t x1463 = 0LL;
	uint32_t x1464 = 1U;
	static int32_t t46 = 348;

	t46 = (x1461==((x1462<=x1463)>>x1464));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1511 = -1;
	uint8_t x1512 = 24U;
	static int32_t t47 = 6387470;

	t47 = (x1509==((x1510<=x1511)>>x1512));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1569 = 169U;
	volatile int8_t x1570 = INT8_MAX;
	volatile uint8_t x1572 = 4U;

	t48 = (x1569==((x1570<=x1571)>>x1572));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1593 = -61996853;
	int8_t x1595 = INT8_MIN;
	uint8_t x1596 = 6U;
	static int32_t t49 = -5961;

	t49 = (x1593==((x1594<=x1595)>>x1596));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1633 = INT64_MIN;
	static uint64_t x1634 = 119425830LLU;
	static int32_t x1635 = -244203;
	uint8_t x1636 = 6U;
	volatile int32_t t50 = 7529296;

	t50 = (x1633==((x1634<=x1635)>>x1636));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1641 = 9U;
	int64_t x1642 = -1LL;
	uint16_t x1643 = UINT16_MAX;
	int8_t x1644 = 11;
	volatile int32_t t51 = 3939986;

	t51 = (x1641==((x1642<=x1643)>>x1644));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1697 = 61LL;
	int8_t x1698 = INT8_MAX;
	int64_t x1699 = 13341LL;
	int32_t t52 = 2213410;

	t52 = (x1697==((x1698<=x1699)>>x1700));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x1705 = -1;
	int32_t x1706 = 0;
	static volatile uint32_t x1707 = UINT32_MAX;
	volatile int32_t t53 = -1;

	t53 = (x1705==((x1706<=x1707)>>x1708));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x1769 = 34002373951197LLU;
	int8_t x1772 = 12;
	static volatile int32_t t54 = -1040;

	t54 = (x1769==((x1770<=x1771)>>x1772));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1789 = UINT8_MAX;
	static int16_t x1790 = INT16_MIN;
	volatile int64_t x1791 = INT64_MIN;
	uint16_t x1792 = 1U;
	int32_t t55 = -3761449;

	t55 = (x1789==((x1790<=x1791)>>x1792));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1801 = INT8_MIN;
	int16_t x1803 = 514;
	uint8_t x1804 = 14U;

	t56 = (x1801==((x1802<=x1803)>>x1804));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1809 = 4U;
	uint64_t x1810 = 103167LLU;
	uint8_t x1811 = 0U;
	uint8_t x1812 = 10U;
	static int32_t t57 = -4901103;

	t57 = (x1809==((x1810<=x1811)>>x1812));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1825 = 905U;
	int64_t x1826 = 5350463078867789LL;
	uint16_t x1827 = 12407U;

	t58 = (x1825==((x1826<=x1827)>>x1828));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1829 = 1U;
	int8_t x1830 = -1;
	int32_t t59 = 0;

	t59 = (x1829==((x1830<=x1831)>>x1832));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1857 = UINT16_MAX;
	int32_t x1858 = -1;
	static int32_t x1859 = INT32_MIN;
	uint16_t x1860 = 0U;
	static volatile int32_t t60 = -878885;

	t60 = (x1857==((x1858<=x1859)>>x1860));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1893 = UINT16_MAX;
	uint16_t x1894 = 249U;
	static int8_t x1895 = INT8_MIN;
	uint16_t x1896 = 11U;

	t61 = (x1893==((x1894<=x1895)>>x1896));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1933 = -1;
	int8_t x1935 = -1;
	uint16_t x1936 = 7U;
	int32_t t62 = 11402103;

	t62 = (x1933==((x1934<=x1935)>>x1936));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1973 = 553322514302479938LLU;
	uint32_t x1974 = UINT32_MAX;
	volatile int16_t x1975 = 44;
	volatile int16_t x1976 = 13;

	t63 = (x1973==((x1974<=x1975)>>x1976));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1998 = UINT8_MAX;
	volatile int64_t x1999 = INT64_MIN;

	t64 = (x1997==((x1998<=x1999)>>x2000));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2001 = UINT64_MAX;
	int8_t x2002 = INT8_MIN;

	t65 = (x2001==((x2002<=x2003)>>x2004));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x2049 = INT8_MIN;
	int16_t x2050 = INT16_MIN;
	uint8_t x2051 = 3U;
	uint32_t x2052 = 4U;
	volatile int32_t t66 = 1;

	t66 = (x2049==((x2050<=x2051)>>x2052));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2061 = 1036672116276387607LLU;
	int32_t x2062 = 49146;
	volatile int64_t x2063 = -1LL;
	int32_t t67 = 9637279;

	t67 = (x2061==((x2062<=x2063)>>x2064));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2109 = 1U;
	volatile uint64_t x2110 = 29LLU;
	uint16_t x2111 = UINT16_MAX;
	int16_t x2112 = 1;
	static int32_t t68 = 2;

	t68 = (x2109==((x2110<=x2111)>>x2112));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x2129 = -1;
	uint8_t x2131 = UINT8_MAX;
	int16_t x2132 = 1;
	int32_t t69 = -263308129;

	t69 = (x2129==((x2130<=x2131)>>x2132));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2145 = INT32_MIN;
	int16_t x2146 = -208;
	static int64_t x2147 = INT64_MIN;
	uint8_t x2148 = 10U;
	volatile int32_t t70 = 482496043;

	t70 = (x2145==((x2146<=x2147)>>x2148));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2177 = INT16_MAX;
	int8_t x2178 = -1;
	uint8_t x2179 = UINT8_MAX;
	int32_t t71 = -28129;

	t71 = (x2177==((x2178<=x2179)>>x2180));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x2233 = -257326;
	static uint32_t x2234 = 7U;
	int16_t x2235 = INT16_MIN;
	static uint16_t x2236 = 18U;
	int32_t t72 = -1287638;

	t72 = (x2233==((x2234<=x2235)>>x2236));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x2237 = INT32_MIN;
	int64_t x2238 = 247293959285LL;
	int8_t x2239 = INT8_MIN;
	uint8_t x2240 = 1U;
	int32_t t73 = 445215;

	t73 = (x2237==((x2238<=x2239)>>x2240));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2265 = INT32_MIN;
	volatile int64_t x2266 = 43906690LL;
	int32_t x2267 = INT32_MIN;
	volatile uint8_t x2268 = 16U;
	int32_t t74 = -2049686;

	t74 = (x2265==((x2266<=x2267)>>x2268));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2369 = INT64_MIN;
	static volatile int32_t x2371 = -1;
	uint16_t x2372 = 2U;
	int32_t t75 = 1;

	t75 = (x2369==((x2370<=x2371)>>x2372));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x2517 = INT64_MIN;
	volatile int8_t x2518 = 26;
	static uint8_t x2519 = 1U;
	uint8_t x2520 = 11U;
	int32_t t76 = -77152120;

	t76 = (x2517==((x2518<=x2519)>>x2520));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2537 = -1;
	int8_t x2538 = INT8_MAX;
	static uint8_t x2539 = 6U;
	uint8_t x2540 = 12U;
	static int32_t t77 = 865;

	t77 = (x2537==((x2538<=x2539)>>x2540));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2541 = INT64_MIN;
	int16_t x2542 = 969;
	volatile uint32_t x2544 = 7U;
	static volatile int32_t t78 = 7;

	t78 = (x2541==((x2542<=x2543)>>x2544));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2550 = -4;
	static uint32_t x2551 = 681707315U;
	volatile int32_t t79 = -707821690;

	t79 = (x2549==((x2550<=x2551)>>x2552));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2611 = -1;
	volatile uint32_t x2612 = 0U;

	t80 = (x2609==((x2610<=x2611)>>x2612));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2685 = 28200598U;
	uint8_t x2687 = 18U;
	static uint16_t x2688 = 0U;
	static volatile int32_t t81 = -15;

	t81 = (x2685==((x2686<=x2687)>>x2688));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2721 = -7LL;
	volatile int64_t x2722 = INT64_MIN;
	uint16_t x2724 = 4U;
	static int32_t t82 = -38;

	t82 = (x2721==((x2722<=x2723)>>x2724));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x2725 = 406481U;
	static int64_t x2727 = INT64_MAX;
	uint8_t x2728 = 12U;
	volatile int32_t t83 = 13861;

	t83 = (x2725==((x2726<=x2727)>>x2728));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x2745 = 0U;
	uint16_t x2746 = 81U;
	int16_t x2747 = -1;
	uint16_t x2748 = 3U;
	static int32_t t84 = -406;

	t84 = (x2745==((x2746<=x2747)>>x2748));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2766 = INT32_MIN;
	uint64_t x2767 = 14552631981LLU;
	static uint16_t x2768 = 11U;
	volatile int32_t t85 = 320;

	t85 = (x2765==((x2766<=x2767)>>x2768));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2821 = 3U;
	uint64_t x2822 = 16171377LLU;
	int8_t x2824 = 5;
	volatile int32_t t86 = 1;

	t86 = (x2821==((x2822<=x2823)>>x2824));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2853 = 72U;
	int64_t x2855 = 11153912LL;
	int8_t x2856 = 0;

	t87 = (x2853==((x2854<=x2855)>>x2856));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2862 = -1;
	uint32_t x2864 = 0U;
	int32_t t88 = -132339;

	t88 = (x2861==((x2862<=x2863)>>x2864));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x2873 = INT16_MIN;
	int8_t x2874 = -56;
	static uint16_t x2876 = 4U;
	int32_t t89 = 89747;

	t89 = (x2873==((x2874<=x2875)>>x2876));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2893 = INT16_MIN;
	int16_t x2894 = -324;
	int8_t x2895 = INT8_MAX;
	static int32_t x2896 = 2;
	int32_t t90 = -7823044;

	t90 = (x2893==((x2894<=x2895)>>x2896));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x3061 = 15LLU;
	int32_t x3063 = -1;
	volatile int32_t t91 = -343;

	t91 = (x3061==((x3062<=x3063)>>x3064));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x3073 = 5U;
	int8_t x3074 = 1;
	static int32_t t92 = 9;

	t92 = (x3073==((x3074<=x3075)>>x3076));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3081 = 10015U;
	int64_t x3083 = -1256267740687697LL;
	static int32_t x3084 = 5;
	static volatile int32_t t93 = -20;

	t93 = (x3081==((x3082<=x3083)>>x3084));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3121 = INT64_MAX;
	static int32_t x3122 = -1;
	int16_t x3124 = 26;
	static int32_t t94 = -48;

	t94 = (x3121==((x3122<=x3123)>>x3124));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x3133 = INT8_MIN;
	static uint8_t x3134 = 22U;
	int8_t x3135 = INT8_MAX;
	int32_t x3136 = 0;
	volatile int32_t t95 = 6;

	t95 = (x3133==((x3134<=x3135)>>x3136));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3149 = 1768352;
	volatile int8_t x3150 = INT8_MIN;
	volatile int8_t x3151 = INT8_MIN;
	int8_t x3152 = 11;
	volatile int32_t t96 = 3;

	t96 = (x3149==((x3150<=x3151)>>x3152));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3157 = 93U;
	static volatile uint8_t x3158 = UINT8_MAX;
	int8_t x3160 = 4;
	volatile int32_t t97 = 42328;

	t97 = (x3157==((x3158<=x3159)>>x3160));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3195 = 38U;
	uint8_t x3196 = 4U;
	int32_t t98 = -29;

	t98 = (x3193==((x3194<=x3195)>>x3196));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3210 = 41LL;
	int64_t x3211 = INT64_MIN;
	volatile int32_t t99 = -227014830;

	t99 = (x3209==((x3210<=x3211)>>x3212));

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

