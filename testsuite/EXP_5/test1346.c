#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x67 = UINT8_MAX;
uint32_t x162 = 74748554U;
int16_t x195 = -1;
uint8_t x460 = 10U;
int32_t x550 = 96549561;
uint8_t x552 = 51U;
int16_t x727 = INT16_MIN;
int16_t x754 = -34;
uint16_t x755 = 14U;
int64_t x758 = INT64_MIN;
volatile int32_t t11 = 14914071;
volatile int64_t x971 = INT64_MAX;
int32_t t13 = 15029901;
int32_t x1066 = -3657859;
uint16_t x1067 = UINT16_MAX;
int8_t x1134 = -1;
uint32_t x1136 = 1U;
uint16_t x1177 = 6806U;
static int32_t x1322 = 0;
volatile uint64_t t19 = 63464100449677157LLU;
volatile uint8_t x1368 = 27U;
uint8_t x1428 = 0U;
int64_t x1433 = 15868945920LL;
volatile int16_t x1447 = INT16_MIN;
static int16_t x1525 = INT16_MAX;
static volatile int64_t x1763 = 790404095848257LL;
int32_t x1779 = -1;
int8_t x1890 = 0;
int32_t t29 = -669;
int64_t x1969 = INT64_MAX;
int16_t x1970 = INT16_MAX;
int16_t x2070 = 1;
static int32_t x2585 = INT32_MAX;
uint64_t x2641 = 21298024560307795LLU;
uint8_t x2644 = 0U;
uint64_t t38 = 485LLU;
uint64_t x2877 = UINT64_MAX;
int32_t t41 = 107;
uint8_t x2931 = 5U;
uint16_t x2932 = 3U;
static uint8_t x3001 = 110U;
uint64_t t45 = 3391434246667333LLU;
int32_t x3100 = 11;
volatile uint64_t t47 = 346982556LLU;
uint16_t x3187 = UINT16_MAX;
uint8_t x3219 = 10U;
static int32_t t51 = 110479505;
int64_t x3345 = INT64_MAX;
volatile int64_t t52 = 14727430LL;
int32_t x3486 = -184;
uint16_t x3537 = UINT16_MAX;
volatile int32_t t54 = 980947;
uint64_t t57 = 5LLU;
volatile int64_t t58 = INT64_MAX;
int8_t x3875 = INT8_MIN;
static volatile uint32_t x3876 = 0U;
static int8_t x4032 = 1;
uint32_t t61 = 152U;
volatile int8_t x4110 = INT8_MIN;
volatile int64_t x4205 = INT64_MAX;
volatile int64_t t63 = -232143878LL;
uint64_t x4465 = UINT64_MAX;
int64_t x4466 = INT64_MAX;
uint64_t x4467 = 7347136476287LLU;
volatile int8_t x4468 = 1;
int8_t x4502 = INT8_MIN;
int64_t x4530 = INT64_MIN;
uint8_t x4532 = 31U;
uint8_t x4655 = UINT8_MAX;
uint16_t x4726 = UINT16_MAX;
uint32_t x4728 = 0U;
int32_t x4843 = -1;
int8_t x5119 = INT8_MIN;
int8_t x5136 = 0;
static int16_t x5192 = 0;
volatile uint64_t t77 = 246468696282581603LLU;
int32_t t78 = 1;
uint16_t x5557 = 6405U;
int64_t x5559 = -91826913879396LL;
static int8_t x5562 = 1;
static uint32_t x5584 = 3U;
int16_t x5606 = -23;
volatile int32_t t84 = -347;
volatile int32_t x5681 = INT32_MAX;
int32_t x5691 = INT32_MAX;
volatile uint8_t x5692 = 9U;
uint16_t x5763 = 4736U;
static int8_t x5796 = 26;
uint32_t t89 = 90322U;
int8_t x5839 = 13;
volatile int16_t x5940 = 1;
static volatile uint64_t x6193 = UINT64_MAX;
volatile uint64_t t92 = 25680433806LLU;
int64_t x6235 = INT64_MIN;
volatile int64_t x6281 = 52738900519524592LL;
static int8_t x6332 = 1;
uint32_t t96 = 2U;
uint32_t x6390 = 487U;
static volatile int32_t t97 = 1;
uint64_t x6417 = UINT64_MAX;
int32_t t99 = -5342;


void f0(void) {
	int16_t x65 = INT16_MAX;
	uint32_t x66 = 8104U;
	static uint8_t x68 = 1U;
	int32_t t0 = 54401;

	t0 = (x65>>((x66==x67)^x68));

	if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x161 = 2LL;
	int16_t x163 = INT16_MAX;
	int8_t x164 = 0;
	static volatile int64_t t1 = -918744241063LL;

	t1 = (x161>>((x162==x163)^x164));

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x193 = 21;
	volatile uint32_t x194 = 105U;
	int8_t x196 = 25;
	volatile int32_t t2 = -12;

	t2 = (x193>>((x194==x195)^x196));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x257 = 67U;
	uint8_t x258 = 21U;
	volatile int16_t x259 = INT16_MIN;
	int8_t x260 = 1;
	volatile int32_t t3 = 0;

	t3 = (x257>>((x258==x259)^x260));

	if (t3 != 33) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x285 = 2936;
	static int16_t x286 = -1;
	int8_t x287 = -33;
	uint8_t x288 = 2U;
	int32_t t4 = 9;

	t4 = (x285>>((x286==x287)^x288));

	if (t4 != 734) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x457 = 805866251778963LLU;
	volatile int8_t x458 = -16;
	int32_t x459 = INT32_MIN;
	volatile uint64_t t5 = 2652074LLU;

	t5 = (x457>>((x458==x459)^x460));

	if (t5 != 786978761502LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x477 = UINT8_MAX;
	int8_t x478 = 1;
	uint16_t x479 = UINT16_MAX;
	uint16_t x480 = 0U;
	volatile int32_t t6 = 12982975;

	t6 = (x477>>((x478==x479)^x480));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x481 = 2LLU;
	int64_t x482 = INT64_MIN;
	static volatile uint32_t x483 = 33U;
	static uint32_t x484 = 6U;
	volatile uint64_t t7 = 18608206LLU;

	t7 = (x481>>((x482==x483)^x484));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x549 = INT64_MAX;
	uint64_t x551 = UINT64_MAX;
	volatile int64_t t8 = 2120LL;

	t8 = (x549>>((x550==x551)^x552));

	if (t8 != 4095LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x725 = 944769815090428LLU;
	uint16_t x726 = 134U;
	uint32_t x728 = 3U;
	uint64_t t9 = 78LLU;

	t9 = (x725>>((x726==x727)^x728));

	if (t9 != 118096226886303LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x753 = 15578;
	volatile uint16_t x756 = 5U;
	int32_t t10 = -117;

	t10 = (x753>>((x754==x755)^x756));

	if (t10 != 486) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x757 = 3U;
	int32_t x759 = 2489;
	int8_t x760 = 21;

	t11 = (x757>>((x758==x759)^x760));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x849 = UINT64_MAX;
	static uint32_t x850 = 1U;
	volatile int64_t x851 = -107503LL;
	volatile uint16_t x852 = 35U;
	volatile uint64_t t12 = 5948LLU;

	t12 = (x849>>((x850==x851)^x852));

	if (t12 != 536870911LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x969 = UINT8_MAX;
	int16_t x970 = INT16_MIN;
	int16_t x972 = 2;

	t13 = (x969>>((x970==x971)^x972));

	if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x1033 = 539U;
	int32_t x1034 = INT32_MAX;
	volatile int8_t x1035 = -1;
	uint16_t x1036 = 2U;
	uint32_t t14 = 692864061U;

	t14 = (x1033>>((x1034==x1035)^x1036));

	if (t14 != 134U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1065 = 7382U;
	uint16_t x1068 = 19U;
	volatile uint32_t t15 = 25849891U;

	t15 = (x1065>>((x1066==x1067)^x1068));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x1133 = UINT16_MAX;
	volatile uint16_t x1135 = 18602U;
	volatile int32_t t16 = -58199;

	t16 = (x1133>>((x1134==x1135)^x1136));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1178 = -1;
	static volatile int8_t x1179 = INT8_MIN;
	int8_t x1180 = 6;
	volatile int32_t t17 = 23659;

	t17 = (x1177>>((x1178==x1179)^x1180));

	if (t17 != 106) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x1321 = 27;
	static uint16_t x1323 = 1933U;
	uint32_t x1324 = 15U;
	volatile int32_t t18 = 275348;

	t18 = (x1321>>((x1322==x1323)^x1324));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x1325 = 252LLU;
	int8_t x1326 = 1;
	static int8_t x1327 = 2;
	int64_t x1328 = 56LL;

	t19 = (x1325>>((x1326==x1327)^x1328));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1365 = 1212441466303LL;
	int16_t x1366 = INT16_MIN;
	int32_t x1367 = 785;
	int64_t t20 = -46267903679934529LL;

	t20 = (x1365>>((x1366==x1367)^x1368));

	if (t20 != 9033LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1425 = INT8_MAX;
	int16_t x1426 = INT16_MIN;
	volatile uint16_t x1427 = 39U;
	int32_t t21 = -18124065;

	t21 = (x1425>>((x1426==x1427)^x1428));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1434 = INT16_MAX;
	int64_t x1435 = -1LL;
	static volatile int8_t x1436 = 6;
	static volatile int64_t t22 = -75373816869266879LL;

	t22 = (x1433>>((x1434==x1435)^x1436));

	if (t22 != 247952280LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1445 = UINT64_MAX;
	int32_t x1446 = -1;
	int8_t x1448 = 4;
	uint64_t t23 = 2377996330801637389LLU;

	t23 = (x1445>>((x1446==x1447)^x1448));

	if (t23 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1526 = INT32_MIN;
	uint16_t x1527 = UINT16_MAX;
	uint8_t x1528 = 20U;
	int32_t t24 = 211963;

	t24 = (x1525>>((x1526==x1527)^x1528));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1569 = INT32_MAX;
	int32_t x1570 = INT32_MAX;
	static int16_t x1571 = -1;
	int8_t x1572 = 0;
	int32_t t25 = INT32_MAX;

	t25 = (x1569>>((x1570==x1571)^x1572));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1585 = UINT64_MAX;
	static int64_t x1586 = 0LL;
	volatile uint32_t x1587 = 132U;
	uint8_t x1588 = 46U;
	static volatile uint64_t t26 = 190LLU;

	t26 = (x1585>>((x1586==x1587)^x1588));

	if (t26 != 262143LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1761 = 19U;
	static uint8_t x1762 = 51U;
	uint16_t x1764 = 3U;
	volatile int32_t t27 = 102956180;

	t27 = (x1761>>((x1762==x1763)^x1764));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1777 = 12703853LLU;
	volatile int32_t x1778 = -26991460;
	volatile int16_t x1780 = 7;
	uint64_t t28 = 274LLU;

	t28 = (x1777>>((x1778==x1779)^x1780));

	if (t28 != 99248LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1889 = 1844;
	int8_t x1891 = 7;
	uint8_t x1892 = 3U;

	t29 = (x1889>>((x1890==x1891)^x1892));

	if (t29 != 230) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1921 = INT8_MAX;
	static int16_t x1922 = 0;
	volatile int8_t x1923 = -1;
	uint16_t x1924 = 2U;
	static int32_t t30 = -557913768;

	t30 = (x1921>>((x1922==x1923)^x1924));

	if (t30 != 31) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1949 = 2;
	static int8_t x1950 = -62;
	static uint64_t x1951 = 3893829505LLU;
	uint64_t x1952 = 4LLU;
	int32_t t31 = 215;

	t31 = (x1949>>((x1950==x1951)^x1952));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1971 = -1;
	volatile uint16_t x1972 = 2U;
	static volatile int64_t t32 = -50734040LL;

	t32 = (x1969>>((x1970==x1971)^x1972));

	if (t32 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2069 = 4837781LLU;
	uint16_t x2071 = 450U;
	uint16_t x2072 = 5U;
	volatile uint64_t t33 = 58733LLU;

	t33 = (x2069>>((x2070==x2071)^x2072));

	if (t33 != 151180LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2249 = 1572285674267372214LLU;
	uint32_t x2250 = 1430831U;
	volatile int64_t x2251 = -1LL;
	volatile uint8_t x2252 = 45U;
	volatile uint64_t t34 = 287443415LLU;

	t34 = (x2249>>((x2250==x2251)^x2252));

	if (t34 != 44687LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x2325 = 665210LLU;
	volatile int8_t x2326 = 48;
	int16_t x2327 = -10;
	int64_t x2328 = 6LL;
	static volatile uint64_t t35 = 1155682714585672LLU;

	t35 = (x2325>>((x2326==x2327)^x2328));

	if (t35 != 10393LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2549 = 201457926LL;
	int64_t x2550 = -63242003449781LL;
	int8_t x2551 = INT8_MAX;
	static uint64_t x2552 = 21LLU;
	volatile int64_t t36 = 852278LL;

	t36 = (x2549>>((x2550==x2551)^x2552));

	if (t36 != 96LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2586 = -1;
	int64_t x2587 = -1361603716279351242LL;
	uint64_t x2588 = 0LLU;
	volatile int32_t t37 = INT32_MAX;

	t37 = (x2585>>((x2586==x2587)^x2588));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2642 = INT32_MIN;
	uint32_t x2643 = 419575U;

	t38 = (x2641>>((x2642==x2643)^x2644));

	if (t38 != 21298024560307795LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2701 = INT16_MAX;
	int64_t x2702 = -766005LL;
	static int64_t x2703 = -1LL;
	static int8_t x2704 = 1;
	volatile int32_t t39 = 0;

	t39 = (x2701>>((x2702==x2703)^x2704));

	if (t39 != 16383) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2878 = INT8_MAX;
	int32_t x2879 = INT32_MIN;
	int64_t x2880 = 1LL;
	volatile uint64_t t40 = 989324693548LLU;

	t40 = (x2877>>((x2878==x2879)^x2880));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2897 = INT32_MAX;
	uint8_t x2898 = 2U;
	uint64_t x2899 = 101849496LLU;
	uint32_t x2900 = 1U;

	t41 = (x2897>>((x2898==x2899)^x2900));

	if (t41 != 1073741823) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2929 = 49;
	int64_t x2930 = 1692667994LL;
	int32_t t42 = 950;

	t42 = (x2929>>((x2930==x2931)^x2932));

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2957 = UINT8_MAX;
	int8_t x2958 = -63;
	int8_t x2959 = -1;
	uint8_t x2960 = 17U;
	int32_t t43 = 1819;

	t43 = (x2957>>((x2958==x2959)^x2960));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3002 = 0;
	uint32_t x3003 = 226332U;
	int8_t x3004 = 1;
	volatile int32_t t44 = -32498;

	t44 = (x3001>>((x3002==x3003)^x3004));

	if (t44 != 55) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x3009 = UINT64_MAX;
	static int32_t x3010 = INT32_MAX;
	static uint32_t x3011 = 2U;
	uint8_t x3012 = 10U;

	t45 = (x3009>>((x3010==x3011)^x3012));

	if (t45 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3097 = 82261LL;
	int32_t x3098 = -834634356;
	static int32_t x3099 = INT32_MIN;
	static int64_t t46 = 469LL;

	t46 = (x3097>>((x3098==x3099)^x3100));

	if (t46 != 40LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3121 = 8061082470871LLU;
	int64_t x3122 = INT64_MIN;
	int64_t x3123 = INT64_MIN;
	uint8_t x3124 = 1U;

	t47 = (x3121>>((x3122==x3123)^x3124));

	if (t47 != 8061082470871LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3165 = 7711646260691247LLU;
	static uint32_t x3166 = UINT32_MAX;
	uint32_t x3167 = UINT32_MAX;
	volatile int16_t x3168 = 11;
	volatile uint64_t t48 = 3295202140LLU;

	t48 = (x3165>>((x3166==x3167)^x3168));

	if (t48 != 7530904551456LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3177 = 11713419U;
	uint16_t x3178 = 0U;
	volatile int8_t x3179 = INT8_MIN;
	volatile int8_t x3180 = 2;
	volatile uint32_t t49 = 3205548U;

	t49 = (x3177>>((x3178==x3179)^x3180));

	if (t49 != 2928354U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x3185 = 76U;
	uint16_t x3186 = UINT16_MAX;
	static uint16_t x3188 = 6U;
	int32_t t50 = 1151;

	t50 = (x3185>>((x3186==x3187)^x3188));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3217 = 23114U;
	uint64_t x3218 = 13522441569LLU;
	int8_t x3220 = 1;

	t51 = (x3217>>((x3218==x3219)^x3220));

	if (t51 != 11557) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x3346 = INT8_MAX;
	int16_t x3347 = 372;
	int16_t x3348 = 15;

	t52 = (x3345>>((x3346==x3347)^x3348));

	if (t52 != 281474976710655LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3485 = UINT16_MAX;
	int64_t x3487 = INT64_MIN;
	volatile int8_t x3488 = 0;
	int32_t t53 = -1;

	t53 = (x3485>>((x3486==x3487)^x3488));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3538 = UINT32_MAX;
	static int64_t x3539 = -5928178245724LL;
	static uint16_t x3540 = 0U;

	t54 = (x3537>>((x3538==x3539)^x3540));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x3593 = INT8_MAX;
	uint32_t x3594 = UINT32_MAX;
	int32_t x3595 = INT32_MAX;
	volatile int8_t x3596 = 5;
	int32_t t55 = -230;

	t55 = (x3593>>((x3594==x3595)^x3596));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3609 = 3898U;
	volatile uint64_t x3610 = UINT64_MAX;
	int64_t x3611 = 7062685LL;
	uint8_t x3612 = 6U;
	static int32_t t56 = -89202;

	t56 = (x3609>>((x3610==x3611)^x3612));

	if (t56 != 60) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3677 = 629LLU;
	int32_t x3678 = INT32_MIN;
	static int64_t x3679 = INT64_MIN;
	volatile uint64_t x3680 = 21LLU;

	t57 = (x3677>>((x3678==x3679)^x3680));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3693 = INT64_MAX;
	int64_t x3694 = -22611842730965436LL;
	int16_t x3695 = 0;
	uint16_t x3696 = 0U;

	t58 = (x3693>>((x3694==x3695)^x3696));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3873 = INT32_MAX;
	volatile int32_t x3874 = INT32_MIN;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x3873>>((x3874==x3875)^x3876));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3913 = 1U;
	static volatile int32_t x3914 = -15875;
	uint8_t x3915 = 20U;
	uint8_t x3916 = 1U;
	volatile int32_t t60 = 12206129;

	t60 = (x3913>>((x3914==x3915)^x3916));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x4029 = 352U;
	int16_t x4030 = INT16_MIN;
	int16_t x4031 = 1;

	t61 = (x4029>>((x4030==x4031)^x4032));

	if (t61 != 176U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4109 = INT32_MAX;
	uint64_t x4111 = UINT64_MAX;
	volatile int16_t x4112 = 1;
	volatile int32_t t62 = 49;

	t62 = (x4109>>((x4110==x4111)^x4112));

	if (t62 != 1073741823) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x4206 = -1370LL;
	uint32_t x4207 = 18366475U;
	int16_t x4208 = 31;

	t63 = (x4205>>((x4206==x4207)^x4208));

	if (t63 != 4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x4281 = 0;
	volatile int64_t x4282 = -56LL;
	int64_t x4283 = -1LL;
	static uint32_t x4284 = 0U;
	static int32_t t64 = -7730180;

	t64 = (x4281>>((x4282==x4283)^x4284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t t65 = 1LLU;

	t65 = (x4465>>((x4466==x4467)^x4468));

	if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4501 = UINT8_MAX;
	int8_t x4503 = 6;
	uint8_t x4504 = 2U;
	static volatile int32_t t66 = -112908;

	t66 = (x4501>>((x4502==x4503)^x4504));

	if (t66 != 63) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4529 = INT16_MAX;
	int32_t x4531 = -1;
	int32_t t67 = 28364577;

	t67 = (x4529>>((x4530==x4531)^x4532));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x4653 = INT32_MAX;
	uint16_t x4654 = 7U;
	volatile int8_t x4656 = 0;
	int32_t t68 = INT32_MAX;

	t68 = (x4653>>((x4654==x4655)^x4656));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4725 = 97032;
	uint64_t x4727 = UINT64_MAX;
	int32_t t69 = -480544646;

	t69 = (x4725>>((x4726==x4727)^x4728));

	if (t69 != 97032) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4841 = 25U;
	int32_t x4842 = -472844;
	int32_t x4844 = 11;
	volatile int32_t t70 = 1;

	t70 = (x4841>>((x4842==x4843)^x4844));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x4989 = 150U;
	volatile int8_t x4990 = INT8_MIN;
	uint32_t x4991 = UINT32_MAX;
	static uint8_t x4992 = 3U;
	volatile int32_t t71 = -749;

	t71 = (x4989>>((x4990==x4991)^x4992));

	if (t71 != 18) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x5093 = 16U;
	volatile int8_t x5094 = -1;
	int16_t x5095 = 1017;
	uint64_t x5096 = 1LLU;
	static volatile int32_t t72 = -18;

	t72 = (x5093>>((x5094==x5095)^x5096));

	if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x5109 = UINT64_MAX;
	volatile int64_t x5110 = 98LL;
	int64_t x5111 = INT64_MAX;
	int8_t x5112 = 0;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = (x5109>>((x5110==x5111)^x5112));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x5117 = INT64_MAX;
	static uint32_t x5118 = UINT32_MAX;
	uint8_t x5120 = 23U;
	int64_t t74 = 677893066541LL;

	t74 = (x5117>>((x5118==x5119)^x5120));

	if (t74 != 1099511627775LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x5133 = 51U;
	static uint8_t x5134 = 2U;
	volatile int16_t x5135 = 6;
	int32_t t75 = 0;

	t75 = (x5133>>((x5134==x5135)^x5136));

	if (t75 != 51) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5185 = INT32_MAX;
	int8_t x5186 = INT8_MIN;
	int64_t x5187 = INT64_MIN;
	uint8_t x5188 = 3U;
	volatile int32_t t76 = 261816686;

	t76 = (x5185>>((x5186==x5187)^x5188));

	if (t76 != 268435455) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5189 = 2151487521376092LLU;
	int16_t x5190 = 6352;
	static volatile int64_t x5191 = -238961590289LL;

	t77 = (x5189>>((x5190==x5191)^x5192));

	if (t77 != 2151487521376092LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x5481 = 18;
	volatile uint16_t x5482 = UINT16_MAX;
	int32_t x5483 = 141041197;
	int8_t x5484 = 0;

	t78 = (x5481>>((x5482==x5483)^x5484));

	if (t78 != 18) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5537 = INT8_MAX;
	int16_t x5538 = 118;
	int32_t x5539 = -1;
	uint64_t x5540 = 5LLU;
	static int32_t t79 = 12;

	t79 = (x5537>>((x5538==x5539)^x5540));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5558 = INT8_MIN;
	uint16_t x5560 = 3U;
	static int32_t t80 = -1;

	t80 = (x5557>>((x5558==x5559)^x5560));

	if (t80 != 800) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x5561 = 1U;
	int8_t x5563 = -1;
	int8_t x5564 = 0;
	int32_t t81 = -12;

	t81 = (x5561>>((x5562==x5563)^x5564));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5565 = UINT8_MAX;
	int8_t x5566 = -1;
	static uint8_t x5567 = UINT8_MAX;
	volatile int8_t x5568 = 0;
	int32_t t82 = -18;

	t82 = (x5565>>((x5566==x5567)^x5568));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x5581 = UINT8_MAX;
	uint32_t x5582 = 4U;
	static int64_t x5583 = INT64_MAX;
	static int32_t t83 = -60763;

	t83 = (x5581>>((x5582==x5583)^x5584));

	if (t83 != 31) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5605 = 39325701;
	static int64_t x5607 = -1LL;
	uint8_t x5608 = 0U;

	t84 = (x5605>>((x5606==x5607)^x5608));

	if (t84 != 39325701) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x5682 = 1U;
	int16_t x5683 = -1;
	int8_t x5684 = 1;
	int32_t t85 = -7237912;

	t85 = (x5681>>((x5682==x5683)^x5684));

	if (t85 != 1073741823) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5689 = 51U;
	int8_t x5690 = INT8_MIN;
	int32_t t86 = 6532;

	t86 = (x5689>>((x5690==x5691)^x5692));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5761 = 15U;
	volatile int16_t x5762 = INT16_MIN;
	static volatile uint32_t x5764 = 3U;
	static volatile int32_t t87 = 0;

	t87 = (x5761>>((x5762==x5763)^x5764));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5793 = UINT8_MAX;
	uint32_t x5794 = 533196374U;
	int8_t x5795 = INT8_MIN;
	int32_t t88 = -63916618;

	t88 = (x5793>>((x5794==x5795)^x5796));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5805 = UINT32_MAX;
	int32_t x5806 = -440491;
	volatile int8_t x5807 = -1;
	static int16_t x5808 = 7;

	t89 = (x5805>>((x5806==x5807)^x5808));

	if (t89 != 33554431U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5837 = 1759U;
	int8_t x5838 = INT8_MIN;
	uint8_t x5840 = 3U;
	static int32_t t90 = 9;

	t90 = (x5837>>((x5838==x5839)^x5840));

	if (t90 != 219) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5937 = 0;
	int16_t x5938 = INT16_MIN;
	volatile uint32_t x5939 = 3300U;
	volatile int32_t t91 = 25362953;

	t91 = (x5937>>((x5938==x5939)^x5940));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x6194 = 9U;
	volatile int64_t x6195 = INT64_MIN;
	volatile int8_t x6196 = 1;

	t92 = (x6193>>((x6194==x6195)^x6196));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6221 = UINT16_MAX;
	volatile int32_t x6222 = -258963085;
	volatile uint8_t x6223 = 1U;
	uint8_t x6224 = 14U;
	volatile int32_t t93 = -94210205;

	t93 = (x6221>>((x6222==x6223)^x6224));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x6233 = 166;
	int16_t x6234 = -1;
	uint8_t x6236 = 10U;
	volatile int32_t t94 = -486824806;

	t94 = (x6233>>((x6234==x6235)^x6236));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x6282 = 26709U;
	int32_t x6283 = INT32_MIN;
	uint8_t x6284 = 1U;
	static volatile int64_t t95 = 57252157LL;

	t95 = (x6281>>((x6282==x6283)^x6284));

	if (t95 != 26369450259762296LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6329 = UINT32_MAX;
	int16_t x6330 = INT16_MAX;
	int64_t x6331 = -32354720660LL;

	t96 = (x6329>>((x6330==x6331)^x6332));

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6389 = 119U;
	volatile uint16_t x6391 = 16U;
	volatile uint64_t x6392 = 0LLU;

	t97 = (x6389>>((x6390==x6391)^x6392));

	if (t97 != 119) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6418 = 14LLU;
	static volatile int16_t x6419 = -1;
	uint8_t x6420 = 13U;
	volatile uint64_t t98 = 212570836LLU;

	t98 = (x6417>>((x6418==x6419)^x6420));

	if (t98 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6437 = 88U;
	int8_t x6438 = -1;
	volatile int32_t x6439 = INT32_MIN;
	int64_t x6440 = 1LL;

	t99 = (x6437>>((x6438==x6439)^x6440));

	if (t99 != 44) { NG(); } else { ; }
	
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

