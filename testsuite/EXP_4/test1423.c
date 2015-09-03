#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x109 = UINT8_MAX;
uint8_t x266 = 1U;
int64_t t5 = 981LL;
int8_t x354 = 0;
int16_t x448 = 0;
volatile int16_t x455 = INT16_MAX;
volatile int32_t t10 = 4;
uint16_t x614 = 5U;
int8_t x616 = -1;
int32_t x725 = 0;
static uint8_t x726 = 3U;
static int32_t t13 = 154360904;
int8_t x770 = 1;
int8_t x838 = 0;
static int32_t x866 = 20;
uint64_t x868 = 484532103LLU;
volatile int16_t x948 = -3401;
int64_t x979 = 1869LL;
uint8_t x1165 = 23U;
int32_t t24 = -8888151;
int8_t x1454 = 7;
int16_t x1532 = INT16_MIN;
uint16_t x1545 = 1U;
static volatile int32_t t31 = -28051;
static uint64_t x1566 = 0LLU;
static int16_t x1568 = -1;
int32_t x1599 = INT32_MIN;
int16_t x1698 = 1;
volatile int32_t t35 = 90;
uint64_t x1729 = 201581437734151774LLU;
int8_t x1789 = INT8_MAX;
uint16_t x1977 = 9337U;
int8_t x1978 = 0;
int16_t x1979 = INT16_MAX;
static volatile uint16_t x2021 = UINT16_MAX;
int32_t t41 = -1;
uint16_t x2104 = 5471U;
volatile int64_t x2151 = 3331612886192LL;
int8_t x2173 = 1;
uint16_t x2174 = 0U;
static int16_t x2175 = INT16_MIN;
uint32_t x2371 = UINT32_MAX;
uint32_t x2443 = UINT32_MAX;
static uint64_t x2557 = 2LLU;
volatile uint64_t t49 = 235617LLU;
uint64_t t51 = 132547449LLU;
int32_t t53 = 2;
int32_t x3286 = 0;
int16_t x3304 = -31;
int64_t x3427 = -1LL;
int32_t x3428 = INT32_MIN;
static uint64_t x3432 = 881712863LLU;
uint64_t x3453 = 170024LLU;
static uint64_t t60 = 4909507746LLU;
static int16_t x3856 = INT16_MIN;
volatile uint32_t t65 = 971892U;
volatile uint32_t x3881 = 1472U;
static volatile uint64_t x3940 = UINT64_MAX;
uint16_t x3956 = 1584U;
uint64_t x4073 = UINT64_MAX;
volatile int32_t t70 = 24807888;
int8_t x4304 = INT8_MAX;
int32_t x4340 = -223935069;
int8_t x4362 = 1;
int32_t x4364 = -266;
uint8_t x4421 = 8U;
static int32_t x4523 = 1287;
static int8_t x4628 = INT8_MAX;
int32_t t79 = -1199;
int32_t t82 = -12;
int64_t x4797 = 156909018LL;
int64_t x4799 = INT64_MIN;
int16_t x4889 = INT16_MAX;
uint8_t x4891 = UINT8_MAX;
int8_t x4902 = 3;
uint16_t x4903 = UINT16_MAX;
int16_t x4904 = -1;
volatile int16_t x4907 = INT16_MAX;
static int16_t x5033 = 2;
volatile int32_t t88 = 726620;
volatile int32_t x5215 = -45463936;
uint8_t x5277 = 1U;
uint16_t x5279 = 21241U;
static uint16_t x5322 = 4U;
static volatile int32_t t91 = -1;
volatile uint16_t x5327 = UINT16_MAX;
volatile int32_t t92 = -9;
int32_t x5510 = 14;
uint8_t x5834 = 0U;
int16_t x5836 = INT16_MAX;
volatile int32_t t97 = 8;
static uint64_t t98 = UINT64_MAX;


void f0(void) {
	uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 25U;
	uint64_t x51 = 4773446917921274LLU;
	int8_t x52 = INT8_MAX;
	uint64_t t0 = 451136124384347681LLU;

	t0 = (x49<<(x50<<(x51<x52)));

	if (t0 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x105 = UINT32_MAX;
	volatile uint8_t x106 = 1U;
	static uint8_t x107 = UINT8_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile uint32_t t1 = 330299U;

	t1 = (x105<<(x106<<(x107<x108)));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x110 = 20;
	uint32_t x111 = 44789U;
	uint8_t x112 = UINT8_MAX;
	static volatile int32_t t2 = 1;

	t2 = (x109<<(x110<<(x111<x112)));

	if (t2 != 267386880) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x137 = 75U;
	static uint8_t x138 = 1U;
	int8_t x139 = INT8_MAX;
	static uint64_t x140 = UINT64_MAX;
	volatile int32_t t3 = 85506609;

	t3 = (x137<<(x138<<(x139<x140)));

	if (t3 != 300) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x153 = INT8_MAX;
	uint8_t x154 = 2U;
	uint64_t x155 = 533378LLU;
	uint64_t x156 = 837275231LLU;
	int32_t t4 = -1;

	t4 = (x153<<(x154<<(x155<x156)));

	if (t4 != 2032) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x265 = 14022LL;
	static uint8_t x267 = UINT8_MAX;
	int16_t x268 = INT16_MIN;

	t5 = (x265<<(x266<<(x267<x268)));

	if (t5 != 28044LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x353 = 38U;
	static int16_t x355 = -10;
	static volatile uint64_t x356 = 1017730531144817572LLU;
	volatile int32_t t6 = 32708780;

	t6 = (x353<<(x354<<(x355<x356)));

	if (t6 != 38) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x445 = 3U;
	uint16_t x446 = 3U;
	volatile uint8_t x447 = UINT8_MAX;
	volatile int32_t t7 = 447793;

	t7 = (x445<<(x446<<(x447<x448)));

	if (t7 != 24) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x453 = 7;
	uint8_t x454 = 6U;
	int32_t x456 = INT32_MIN;
	int32_t t8 = -13;

	t8 = (x453<<(x454<<(x455<x456)));

	if (t8 != 448) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x465 = INT8_MAX;
	static uint8_t x466 = 1U;
	uint32_t x467 = 188596U;
	volatile int32_t x468 = INT32_MAX;
	int32_t t9 = 236;

	t9 = (x465<<(x466<<(x467<x468)));

	if (t9 != 508) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x521 = 6770U;
	int32_t x522 = 5;
	static volatile int8_t x523 = -1;
	int8_t x524 = 1;

	t10 = (x521<<(x522<<(x523<x524)));

	if (t10 != 6932480) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x589 = INT8_MAX;
	static volatile uint16_t x590 = 1U;
	static uint32_t x591 = 1918U;
	static int32_t x592 = -1;
	volatile int32_t t11 = 1372;

	t11 = (x589<<(x590<<(x591<x592)));

	if (t11 != 508) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x613 = 12;
	uint8_t x615 = 93U;
	volatile int32_t t12 = 67303;

	t12 = (x613<<(x614<<(x615<x616)));

	if (t12 != 384) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x727 = INT64_MIN;
	int8_t x728 = -1;

	t13 = (x725<<(x726<<(x727<x728)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x749 = 1225U;
	uint32_t x750 = 10U;
	volatile int64_t x751 = -1063903265353165LL;
	int32_t x752 = INT32_MIN;
	volatile uint32_t t14 = 3U;

	t14 = (x749<<(x750<<(x751<x752)));

	if (t14 != 1284505600U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x753 = 3;
	int16_t x754 = 7;
	uint8_t x755 = 2U;
	static uint64_t x756 = 46031LLU;
	int32_t t15 = -2;

	t15 = (x753<<(x754<<(x755<x756)));

	if (t15 != 49152) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x769 = 7U;
	int16_t x771 = INT16_MIN;
	int64_t x772 = -90661349881482703LL;
	int32_t t16 = 4715188;

	t16 = (x769<<(x770<<(x771<x772)));

	if (t16 != 14) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x809 = 205LL;
	int8_t x810 = 49;
	volatile uint16_t x811 = 237U;
	int8_t x812 = INT8_MIN;
	int64_t t17 = 474184458LL;

	t17 = (x809<<(x810<<(x811<x812)));

	if (t17 != 115404740451368960LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x829 = 36U;
	volatile int16_t x830 = 1;
	int64_t x831 = 8611612559432LL;
	int64_t x832 = INT64_MIN;
	int32_t t18 = -505291;

	t18 = (x829<<(x830<<(x831<x832)));

	if (t18 != 72) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x837 = 1U;
	int32_t x839 = -183726;
	int16_t x840 = INT16_MIN;
	int32_t t19 = -79612;

	t19 = (x837<<(x838<<(x839<x840)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x865 = UINT8_MAX;
	volatile uint64_t x867 = UINT64_MAX;
	static volatile int32_t t20 = 3;

	t20 = (x865<<(x866<<(x867<x868)));

	if (t20 != 267386880) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x869 = 673U;
	uint32_t x870 = 2U;
	volatile int16_t x871 = INT16_MIN;
	volatile int64_t x872 = -1LL;
	static uint32_t t21 = 6276U;

	t21 = (x869<<(x870<<(x871<x872)));

	if (t21 != 10768U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x945 = 2854247132LL;
	uint32_t x946 = 11U;
	int16_t x947 = INT16_MIN;
	volatile int64_t t22 = 43861540LL;

	t22 = (x945<<(x946<<(x947<x948)));

	if (t22 != 11971580162736128LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x977 = 20;
	uint8_t x978 = 1U;
	int16_t x980 = -1;
	volatile int32_t t23 = -459;

	t23 = (x977<<(x978<<(x979<x980)));

	if (t23 != 40) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1166 = 4;
	uint8_t x1167 = UINT8_MAX;
	int32_t x1168 = INT32_MIN;

	t24 = (x1165<<(x1166<<(x1167<x1168)));

	if (t24 != 368) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1313 = 2333LLU;
	volatile int16_t x1314 = 27;
	int64_t x1315 = INT64_MAX;
	volatile int16_t x1316 = INT16_MIN;
	volatile uint64_t t25 = 3264994929089LLU;

	t25 = (x1313<<(x1314<<(x1315<x1316)));

	if (t25 != 313129959424LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1425 = 2110479020586719LLU;
	static volatile int8_t x1426 = 54;
	volatile uint32_t x1427 = 511803164U;
	volatile uint16_t x1428 = 0U;
	uint64_t t26 = 9283531LLU;

	t26 = (x1425<<(x1426<<(x1427<x1428)));

	if (t26 != 13240582904469258240LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1441 = 4341816600339078LLU;
	int16_t x1442 = 0;
	static int64_t x1443 = INT64_MIN;
	uint32_t x1444 = 907U;
	volatile uint64_t t27 = 830124LLU;

	t27 = (x1441<<(x1442<<(x1443<x1444)));

	if (t27 != 4341816600339078LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x1453 = UINT8_MAX;
	int8_t x1455 = INT8_MIN;
	int16_t x1456 = INT16_MIN;
	volatile int32_t t28 = -94;

	t28 = (x1453<<(x1454<<(x1455<x1456)));

	if (t28 != 32640) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1529 = 7386;
	int8_t x1530 = 0;
	int64_t x1531 = INT64_MIN;
	volatile int32_t t29 = -166209;

	t29 = (x1529<<(x1530<<(x1531<x1532)));

	if (t29 != 7386) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1546 = 4;
	uint64_t x1547 = 115580584LLU;
	int16_t x1548 = -1;
	int32_t t30 = -444066;

	t30 = (x1545<<(x1546<<(x1547<x1548)));

	if (t30 != 256) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1553 = 5142;
	uint8_t x1554 = 1U;
	static int64_t x1555 = -2360398350080LL;
	int32_t x1556 = INT32_MIN;

	t31 = (x1553<<(x1554<<(x1555<x1556)));

	if (t31 != 20568) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1565 = UINT32_MAX;
	int64_t x1567 = INT64_MAX;
	uint32_t t32 = UINT32_MAX;

	t32 = (x1565<<(x1566<<(x1567<x1568)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1597 = UINT16_MAX;
	volatile uint8_t x1598 = 1U;
	static volatile uint64_t x1600 = UINT64_MAX;
	volatile int32_t t33 = 7963498;

	t33 = (x1597<<(x1598<<(x1599<x1600)));

	if (t33 != 262140) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x1601 = UINT16_MAX;
	uint32_t x1602 = 5U;
	int8_t x1603 = 0;
	int8_t x1604 = -1;
	static volatile int32_t t34 = 465009;

	t34 = (x1601<<(x1602<<(x1603<x1604)));

	if (t34 != 2097120) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1697 = 2;
	uint16_t x1699 = 116U;
	static volatile int64_t x1700 = INT64_MIN;

	t35 = (x1697<<(x1698<<(x1699<x1700)));

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x1730 = 4;
	static int32_t x1731 = -1;
	uint8_t x1732 = 3U;
	uint64_t t36 = 44197470078943200LLU;

	t36 = (x1729<<(x1730<<(x1731<x1732)));

	if (t36 != 14711359912523750912LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1790 = 0;
	static int32_t x1791 = INT32_MIN;
	volatile uint16_t x1792 = 960U;
	int32_t t37 = 6019194;

	t37 = (x1789<<(x1790<<(x1791<x1792)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1837 = 53;
	volatile uint32_t x1838 = 4U;
	int32_t x1839 = -12;
	uint32_t x1840 = 28211994U;
	int32_t t38 = -213020;

	t38 = (x1837<<(x1838<<(x1839<x1840)));

	if (t38 != 848) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1980 = INT8_MIN;
	static volatile int32_t t39 = -29361;

	t39 = (x1977<<(x1978<<(x1979<x1980)));

	if (t39 != 9337) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2022 = 1LL;
	uint8_t x2023 = 15U;
	volatile int8_t x2024 = -1;
	int32_t t40 = 226676;

	t40 = (x2021<<(x2022<<(x2023<x2024)));

	if (t40 != 131070) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2053 = UINT16_MAX;
	uint8_t x2054 = 0U;
	static int16_t x2055 = -1;
	int32_t x2056 = -102;

	t41 = (x2053<<(x2054<<(x2055<x2056)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2085 = INT8_MAX;
	uint16_t x2086 = 1U;
	static volatile int8_t x2087 = INT8_MIN;
	uint32_t x2088 = 8323763U;
	int32_t t42 = 1;

	t42 = (x2085<<(x2086<<(x2087<x2088)));

	if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x2101 = 231U;
	uint32_t x2102 = 7U;
	int16_t x2103 = -653;
	static volatile int32_t t43 = -65320070;

	t43 = (x2101<<(x2102<<(x2103<x2104)));

	if (t43 != 3784704) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2149 = INT16_MAX;
	int8_t x2150 = 1;
	uint64_t x2152 = 97299LLU;
	int32_t t44 = -23;

	t44 = (x2149<<(x2150<<(x2151<x2152)));

	if (t44 != 65534) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x2176 = UINT32_MAX;
	volatile int32_t t45 = -59;

	t45 = (x2173<<(x2174<<(x2175<x2176)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2257 = INT16_MAX;
	volatile int32_t x2258 = 0;
	volatile uint16_t x2259 = UINT16_MAX;
	int32_t x2260 = INT32_MIN;
	volatile int32_t t46 = 7847;

	t46 = (x2257<<(x2258<<(x2259<x2260)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2369 = 64U;
	static uint8_t x2370 = 1U;
	int16_t x2372 = INT16_MAX;
	volatile int32_t t47 = 0;

	t47 = (x2369<<(x2370<<(x2371<x2372)));

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2441 = 0U;
	volatile uint16_t x2442 = 15U;
	uint8_t x2444 = 11U;
	static volatile int32_t t48 = -9;

	t48 = (x2441<<(x2442<<(x2443<x2444)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2558 = 5;
	int8_t x2559 = 2;
	int8_t x2560 = -1;

	t49 = (x2557<<(x2558<<(x2559<x2560)));

	if (t49 != 64LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2681 = 3;
	uint8_t x2682 = 1U;
	int16_t x2683 = INT16_MIN;
	int16_t x2684 = INT16_MIN;
	int32_t t50 = -5;

	t50 = (x2681<<(x2682<<(x2683<x2684)));

	if (t50 != 6) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2721 = UINT64_MAX;
	uint8_t x2722 = 1U;
	volatile int8_t x2723 = -1;
	static int32_t x2724 = 19009970;

	t51 = (x2721<<(x2722<<(x2723<x2724)));

	if (t51 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x2741 = 57LLU;
	uint16_t x2742 = 29U;
	uint32_t x2743 = 1000235780U;
	int16_t x2744 = -1;
	uint64_t t52 = 1562581652029866045LLU;

	t52 = (x2741<<(x2742<<(x2743<x2744)));

	if (t52 != 16429131440647569408LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2889 = 7;
	int16_t x2890 = 3;
	int16_t x2891 = -743;
	static int8_t x2892 = 1;

	t53 = (x2889<<(x2890<<(x2891<x2892)));

	if (t53 != 448) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3037 = 118U;
	int32_t x3038 = 0;
	static int64_t x3039 = INT64_MAX;
	int8_t x3040 = INT8_MAX;
	int32_t t54 = -12537724;

	t54 = (x3037<<(x3038<<(x3039<x3040)));

	if (t54 != 118) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3181 = 262047;
	uint8_t x3182 = 1U;
	int8_t x3183 = INT8_MIN;
	int32_t x3184 = -1;
	volatile int32_t t55 = -1659;

	t55 = (x3181<<(x3182<<(x3183<x3184)));

	if (t55 != 1048188) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3285 = 6891U;
	uint16_t x3287 = 1866U;
	static volatile uint16_t x3288 = 746U;
	volatile uint32_t t56 = 133719869U;

	t56 = (x3285<<(x3286<<(x3287<x3288)));

	if (t56 != 6891U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3301 = 84250215887929LLU;
	int16_t x3302 = 0;
	static int16_t x3303 = 1;
	static volatile uint64_t t57 = 6317324923126467711LLU;

	t57 = (x3301<<(x3302<<(x3303<x3304)));

	if (t57 != 84250215887929LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x3425 = INT8_MAX;
	static uint8_t x3426 = 0U;
	volatile int32_t t58 = 2547;

	t58 = (x3425<<(x3426<<(x3427<x3428)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3429 = 19161U;
	static int8_t x3430 = 0;
	int8_t x3431 = INT8_MAX;
	volatile int32_t t59 = 204439137;

	t59 = (x3429<<(x3430<<(x3431<x3432)));

	if (t59 != 19161) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3454 = 6U;
	volatile int64_t x3455 = INT64_MAX;
	int8_t x3456 = 0;

	t60 = (x3453<<(x3454<<(x3455<x3456)));

	if (t60 != 10881536LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3485 = INT16_MAX;
	uint16_t x3486 = 1U;
	int64_t x3487 = 1555602504068889240LL;
	static volatile int32_t x3488 = INT32_MAX;
	volatile int32_t t61 = -161517804;

	t61 = (x3485<<(x3486<<(x3487<x3488)));

	if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3609 = UINT64_MAX;
	uint8_t x3610 = 25U;
	volatile int8_t x3611 = INT8_MIN;
	int32_t x3612 = 1;
	static volatile uint64_t t62 = 119371222LLU;

	t62 = (x3609<<(x3610<<(x3611<x3612)));

	if (t62 != 18445618173802708992LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3625 = 55196484301284884LLU;
	volatile uint32_t x3626 = 1U;
	int64_t x3627 = INT64_MIN;
	int32_t x3628 = 3213183;
	uint64_t t63 = 815721763LLU;

	t63 = (x3625<<(x3626<<(x3627<x3628)));

	if (t63 != 220785937205139536LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3781 = UINT8_MAX;
	int8_t x3782 = 0;
	static int64_t x3783 = 487163696LL;
	static int8_t x3784 = INT8_MAX;
	int32_t t64 = -5378;

	t64 = (x3781<<(x3782<<(x3783<x3784)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3853 = 5721834U;
	static uint8_t x3854 = 0U;
	volatile int8_t x3855 = INT8_MAX;

	t65 = (x3853<<(x3854<<(x3855<x3856)));

	if (t65 != 5721834U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3882 = 0;
	uint16_t x3883 = 405U;
	volatile int16_t x3884 = -2;
	static uint32_t t66 = 5U;

	t66 = (x3881<<(x3882<<(x3883<x3884)));

	if (t66 != 1472U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3937 = 32123U;
	static uint8_t x3938 = 0U;
	int64_t x3939 = INT64_MIN;
	int32_t t67 = 200507211;

	t67 = (x3937<<(x3938<<(x3939<x3940)));

	if (t67 != 32123) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3953 = INT64_MAX;
	static uint8_t x3954 = 0U;
	static uint64_t x3955 = 26117798085867LLU;
	int64_t t68 = INT64_MAX;

	t68 = (x3953<<(x3954<<(x3955<x3956)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4074 = 28U;
	uint16_t x4075 = 135U;
	static volatile uint64_t x4076 = 658954LLU;
	volatile uint64_t t69 = 7977046811555532LLU;

	t69 = (x4073<<(x4074<<(x4075<x4076)));

	if (t69 != 18374686479671623680LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4249 = 1;
	int8_t x4250 = 0;
	int64_t x4251 = INT64_MIN;
	int8_t x4252 = INT8_MAX;

	t70 = (x4249<<(x4250<<(x4251<x4252)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4301 = 2112941254987311LLU;
	volatile uint8_t x4302 = 8U;
	int32_t x4303 = 9475;
	uint64_t t71 = 10821294LLU;

	t71 = (x4301<<(x4302<<(x4303<x4304)));

	if (t71 != 540912961276751616LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4337 = UINT64_MAX;
	uint8_t x4338 = 3U;
	int64_t x4339 = INT64_MIN;
	volatile uint64_t t72 = 27570667160419768LLU;

	t72 = (x4337<<(x4338<<(x4339<x4340)));

	if (t72 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4361 = INT16_MAX;
	int64_t x4363 = -1959313003643LL;
	volatile int32_t t73 = 151;

	t73 = (x4361<<(x4362<<(x4363<x4364)));

	if (t73 != 131068) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4373 = 51974U;
	static volatile int8_t x4374 = 13;
	static int32_t x4375 = INT32_MIN;
	uint64_t x4376 = 16784LLU;
	uint32_t t74 = 47928262U;

	t74 = (x4373<<(x4374<<(x4375<x4376)));

	if (t74 != 425771008U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4422 = 0;
	static int64_t x4423 = INT64_MAX;
	int16_t x4424 = INT16_MIN;
	volatile int32_t t75 = -1218142;

	t75 = (x4421<<(x4422<<(x4423<x4424)));

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4425 = 27;
	uint8_t x4426 = 1U;
	int32_t x4427 = INT32_MAX;
	static int32_t x4428 = INT32_MIN;
	static volatile int32_t t76 = 8;

	t76 = (x4425<<(x4426<<(x4427<x4428)));

	if (t76 != 54) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4505 = 1805414307LL;
	static volatile uint8_t x4506 = 4U;
	int8_t x4507 = 28;
	int16_t x4508 = INT16_MIN;
	volatile int64_t t77 = 24081171628LL;

	t77 = (x4505<<(x4506<<(x4507<x4508)));

	if (t77 != 28886628912LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4521 = 25010LLU;
	int8_t x4522 = 48;
	static uint8_t x4524 = 0U;
	volatile uint64_t t78 = 2270929LLU;

	t78 = (x4521<<(x4522<<(x4523<x4524)));

	if (t78 != 7039689167533506560LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x4625 = 76U;
	static uint8_t x4626 = 0U;
	volatile int8_t x4627 = -7;

	t79 = (x4625<<(x4626<<(x4627<x4628)));

	if (t79 != 76) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4725 = UINT64_MAX;
	static volatile int8_t x4726 = 58;
	int32_t x4727 = INT32_MIN;
	int64_t x4728 = -738629230231997322LL;
	volatile uint64_t t80 = 5534971362370LLU;

	t80 = (x4725<<(x4726<<(x4727<x4728)));

	if (t80 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x4749 = 50560766LL;
	volatile int8_t x4750 = 27;
	int16_t x4751 = INT16_MIN;
	int16_t x4752 = INT16_MIN;
	volatile int64_t t81 = -401LL;

	t81 = (x4749<<(x4750<<(x4751<x4752)));

	if (t81 != 6786151138459648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4765 = 1;
	int8_t x4766 = 2;
	int64_t x4767 = 8823406260LL;
	static volatile int16_t x4768 = INT16_MIN;

	t82 = (x4765<<(x4766<<(x4767<x4768)));

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4785 = 418LLU;
	uint16_t x4786 = 3U;
	int32_t x4787 = INT32_MIN;
	uint32_t x4788 = 6U;
	volatile uint64_t t83 = 543768448607577LLU;

	t83 = (x4785<<(x4786<<(x4787<x4788)));

	if (t83 != 3344LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4798 = 2U;
	int32_t x4800 = INT32_MIN;
	int64_t t84 = 0LL;

	t84 = (x4797<<(x4798<<(x4799<x4800)));

	if (t84 != 2510544288LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4890 = 7;
	volatile uint16_t x4892 = 0U;
	int32_t t85 = 37281;

	t85 = (x4889<<(x4890<<(x4891<x4892)));

	if (t85 != 4194176) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x4901 = 2048U;
	volatile uint32_t t86 = 1U;

	t86 = (x4901<<(x4902<<(x4903<x4904)));

	if (t86 != 16384U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4905 = UINT64_MAX;
	uint8_t x4906 = 6U;
	volatile int8_t x4908 = 2;
	volatile uint64_t t87 = 443373LLU;

	t87 = (x4905<<(x4906<<(x4907<x4908)));

	if (t87 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5034 = 0U;
	int16_t x5035 = -119;
	int64_t x5036 = -2516501378228638863LL;

	t88 = (x5033<<(x5034<<(x5035<x5036)));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5213 = 10U;
	uint8_t x5214 = 0U;
	static int8_t x5216 = -3;
	static int32_t t89 = 40894292;

	t89 = (x5213<<(x5214<<(x5215<x5216)));

	if (t89 != 10) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5278 = 3;
	static int8_t x5280 = INT8_MIN;
	volatile int32_t t90 = -5468381;

	t90 = (x5277<<(x5278<<(x5279<x5280)));

	if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5321 = INT16_MAX;
	static int8_t x5323 = INT8_MAX;
	uint32_t x5324 = 5684U;

	t91 = (x5321<<(x5322<<(x5323<x5324)));

	if (t91 != 8388352) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x5325 = 14716U;
	uint32_t x5326 = 1U;
	int64_t x5328 = INT64_MAX;

	t92 = (x5325<<(x5326<<(x5327<x5328)));

	if (t92 != 58864) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x5333 = INT8_MAX;
	volatile int32_t x5334 = 1;
	uint32_t x5335 = 11177824U;
	int32_t x5336 = INT32_MIN;
	static int32_t t93 = 24292646;

	t93 = (x5333<<(x5334<<(x5335<x5336)));

	if (t93 != 508) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x5509 = 40771U;
	volatile int64_t x5511 = 14765690365LL;
	volatile int64_t x5512 = INT64_MIN;
	volatile uint32_t t94 = 353845836U;

	t94 = (x5509<<(x5510<<(x5511<x5512)));

	if (t94 != 667992064U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x5633 = UINT8_MAX;
	volatile uint16_t x5634 = 3U;
	uint8_t x5635 = 2U;
	uint32_t x5636 = 24046702U;
	static int32_t t95 = -47216672;

	t95 = (x5633<<(x5634<<(x5635<x5636)));

	if (t95 != 16320) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5753 = UINT8_MAX;
	uint16_t x5754 = 2U;
	uint16_t x5755 = 62U;
	int8_t x5756 = INT8_MIN;
	int32_t t96 = 286331434;

	t96 = (x5753<<(x5754<<(x5755<x5756)));

	if (t96 != 1020) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5833 = UINT8_MAX;
	int16_t x5835 = -1;

	t97 = (x5833<<(x5834<<(x5835<x5836)));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5861 = UINT64_MAX;
	static uint16_t x5862 = 0U;
	uint8_t x5863 = 100U;
	int64_t x5864 = 4442LL;

	t98 = (x5861<<(x5862<<(x5863<x5864)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5933 = UINT64_MAX;
	volatile int16_t x5934 = 3;
	uint16_t x5935 = 5U;
	int64_t x5936 = INT64_MAX;
	uint64_t t99 = 3342207982LLU;

	t99 = (x5933<<(x5934<<(x5935<x5936)));

	if (t99 != 18446744073709551552LLU) { NG(); } else { ; }
	
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

