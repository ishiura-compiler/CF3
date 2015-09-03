#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x23 = -9;
static int8_t x46 = INT8_MIN;
volatile int32_t t1 = -309;
int8_t x87 = -1;
int8_t x162 = -1;
volatile uint16_t x193 = 82U;
int64_t x234 = -519376860163LL;
int16_t x247 = -11791;
int32_t t10 = -2;
uint32_t x275 = 2841U;
uint32_t x276 = 9U;
volatile int32_t t11 = -7;
volatile uint8_t x280 = 30U;
int32_t t12 = -3;
int8_t x377 = 19;
int64_t x386 = -1LL;
static int16_t x387 = INT16_MIN;
volatile int64_t x429 = INT64_MAX;
static volatile int32_t t17 = -2612;
uint16_t x492 = 0U;
volatile int32_t t19 = -7700019;
int64_t x558 = INT64_MIN;
int16_t x614 = 17;
static volatile int8_t x616 = 7;
volatile int64_t x706 = -1LL;
int32_t t23 = -1127;
uint16_t x725 = 31U;
static int8_t x755 = INT8_MIN;
volatile int16_t x756 = 0;
volatile int32_t t25 = 9767059;
int16_t x783 = -1;
volatile int32_t t27 = -4542848;
uint8_t x924 = 30U;
uint32_t x929 = 377969687U;
static uint16_t x944 = 3U;
uint8_t x957 = 1U;
static volatile uint64_t x958 = 63593LLU;
uint64_t x972 = 7LLU;
uint64_t x1037 = 1746LLU;
uint8_t x1049 = 9U;
uint16_t x1052 = 8U;
volatile int32_t t38 = 2;
volatile uint16_t x1067 = 3U;
uint64_t x1068 = 5LLU;
uint16_t x1076 = 8U;
static volatile int32_t t40 = 7951241;
uint16_t x1096 = 1U;
static volatile uint8_t x1136 = 2U;
int8_t x1244 = 31;
int32_t x1294 = INT32_MAX;
int16_t x1295 = INT16_MIN;
int32_t t47 = -982;
static int16_t x1303 = -1;
int16_t x1355 = INT16_MIN;
volatile int32_t t50 = -188;
volatile int16_t x1423 = -1;
uint64_t x1514 = 14872319LLU;
uint8_t x1646 = 13U;
int32_t t58 = -1321;
int32_t t61 = 4679510;
volatile int16_t x2013 = -2677;
static int16_t x2014 = 206;
int16_t x2023 = -9;
volatile int32_t t63 = 3542671;
int32_t x2037 = INT32_MIN;
int8_t x2039 = -21;
int8_t x2061 = INT8_MIN;
static volatile int8_t x2064 = 14;
int32_t t66 = -103;
int64_t x2098 = INT64_MIN;
int32_t x2099 = 9;
int64_t x2141 = INT64_MAX;
int32_t t69 = 0;
volatile int32_t t70 = -13043;
uint64_t x2182 = 44220023254508LLU;
static int8_t x2214 = INT8_MIN;
volatile int32_t x2244 = 1;
static int32_t t75 = -438350510;
static volatile uint8_t x2340 = 14U;
volatile int8_t x2345 = 1;
volatile int32_t t77 = 28353873;
volatile uint16_t x2353 = 1001U;
volatile int8_t x2387 = INT8_MIN;
int8_t x2439 = 1;
int32_t t80 = -12577;
int32_t x2515 = -1;
volatile int32_t t81 = -24082;
int32_t t82 = 149139985;
int64_t x2599 = 1009LL;
uint16_t x2625 = 12204U;
int32_t t86 = 55;
int16_t x2725 = INT16_MAX;
static uint16_t x2728 = 0U;
uint32_t x2753 = 28411U;
int32_t t88 = -6868601;
static int8_t x2790 = INT8_MIN;
uint8_t x2792 = 2U;
static volatile uint16_t x2801 = 0U;
int64_t x2802 = -1LL;
int8_t x2823 = INT8_MIN;
int8_t x2930 = 13;
int32_t x2931 = INT32_MIN;
int64_t x2951 = INT64_MAX;
uint32_t x3014 = 517007298U;


void f0(void) {
	static int16_t x21 = -19;
	uint64_t x22 = 6515548879423614LLU;
	uint8_t x24 = 3U;
	volatile int32_t t0 = 6360815;

	t0 = ((x21<=(x22%x23))<<x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x45 = 1U;
	static int8_t x47 = -12;
	static uint16_t x48 = 12U;

	t1 = ((x45<=(x46%x47))<<x48);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x69 = -379;
	static uint32_t x70 = 231850U;
	uint16_t x71 = 6U;
	uint16_t x72 = 7U;
	volatile int32_t t2 = 1001778;

	t2 = ((x69<=(x70%x71))<<x72);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = -1;
	volatile uint32_t x88 = 20U;
	volatile int32_t t3 = -7;

	t3 = ((x85<=(x86%x87))<<x88);

	if (t3 != 1048576) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x97 = -1;
	uint16_t x98 = 41U;
	static uint32_t x99 = UINT32_MAX;
	volatile int64_t x100 = 6LL;
	volatile int32_t t4 = -27696;

	t4 = ((x97<=(x98%x99))<<x100);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x161 = 15460314839LLU;
	int8_t x163 = -1;
	uint32_t x164 = 8U;
	volatile int32_t t5 = -12415;

	t5 = ((x161<=(x162%x163))<<x164);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x165 = INT32_MIN;
	int64_t x166 = -1LL;
	int8_t x167 = 3;
	int32_t x168 = 2;
	int32_t t6 = 1028;

	t6 = ((x165<=(x166%x167))<<x168);

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x194 = INT64_MAX;
	uint64_t x195 = 838542832044956LLU;
	uint8_t x196 = 3U;
	volatile int32_t t7 = 18429;

	t7 = ((x193<=(x194%x195))<<x196);

	if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x217 = INT8_MAX;
	int8_t x218 = 8;
	int32_t x219 = -1;
	volatile uint8_t x220 = 0U;
	static volatile int32_t t8 = -88364;

	t8 = ((x217<=(x218%x219))<<x220);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x233 = 8049;
	volatile int64_t x235 = -1LL;
	volatile uint32_t x236 = 0U;
	static volatile int32_t t9 = -1;

	t9 = ((x233<=(x234%x235))<<x236);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x245 = -1;
	static int64_t x246 = INT64_MAX;
	volatile uint64_t x248 = 27LLU;

	t10 = ((x245<=(x246%x247))<<x248);

	if (t10 != 134217728) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x273 = -1;
	uint8_t x274 = UINT8_MAX;

	t11 = ((x273<=(x274%x275))<<x276);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x277 = 60850755;
	static int64_t x278 = -1577439LL;
	uint16_t x279 = UINT16_MAX;

	t12 = ((x277<=(x278%x279))<<x280);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x309 = INT8_MIN;
	int16_t x310 = -37;
	volatile int8_t x311 = -1;
	int8_t x312 = 0;
	int32_t t13 = 54388;

	t13 = ((x309<=(x310%x311))<<x312);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x378 = 1;
	int32_t x379 = INT32_MAX;
	static uint16_t x380 = 2U;
	static int32_t t14 = 97;

	t14 = ((x377<=(x378%x379))<<x380);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x385 = INT16_MAX;
	uint16_t x388 = 1U;
	volatile int32_t t15 = -3;

	t15 = ((x385<=(x386%x387))<<x388);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x417 = 49LL;
	int16_t x418 = INT16_MAX;
	int8_t x419 = -29;
	uint32_t x420 = 0U;
	static volatile int32_t t16 = -960;

	t16 = ((x417<=(x418%x419))<<x420);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x430 = INT16_MAX;
	static int16_t x431 = -1;
	uint32_t x432 = 0U;

	t17 = ((x429<=(x430%x431))<<x432);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x437 = -1;
	static volatile uint64_t x438 = 20253237901LLU;
	static uint64_t x439 = 1635545535117533391LLU;
	volatile uint16_t x440 = 23U;
	int32_t t18 = -36653;

	t18 = ((x437<=(x438%x439))<<x440);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x489 = 4;
	static int32_t x490 = INT32_MAX;
	volatile int64_t x491 = INT64_MIN;

	t19 = ((x489<=(x490%x491))<<x492);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x557 = INT8_MIN;
	static uint32_t x559 = 1393460148U;
	int8_t x560 = 0;
	volatile int32_t t20 = -83663558;

	t20 = ((x557<=(x558%x559))<<x560);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x577 = INT16_MIN;
	uint16_t x578 = 123U;
	uint64_t x579 = 150396574028694LLU;
	uint16_t x580 = 6U;
	int32_t t21 = -5;

	t21 = ((x577<=(x578%x579))<<x580);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x613 = 1914U;
	static uint32_t x615 = UINT32_MAX;
	int32_t t22 = 1064420;

	t22 = ((x613<=(x614%x615))<<x616);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x705 = 120U;
	int64_t x707 = INT64_MIN;
	uint64_t x708 = 1LLU;

	t23 = ((x705<=(x706%x707))<<x708);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x726 = INT16_MIN;
	int8_t x727 = 3;
	volatile uint8_t x728 = 9U;
	volatile int32_t t24 = 1;

	t24 = ((x725<=(x726%x727))<<x728);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x753 = INT8_MAX;
	int8_t x754 = -1;

	t25 = ((x753<=(x754%x755))<<x756);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x781 = 0U;
	int64_t x782 = -1LL;
	uint8_t x784 = 30U;
	volatile int32_t t26 = 2681;

	t26 = ((x781<=(x782%x783))<<x784);

	if (t26 != 1073741824) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x789 = 0;
	uint8_t x790 = UINT8_MAX;
	static int32_t x791 = INT32_MAX;
	volatile uint8_t x792 = 16U;

	t27 = ((x789<=(x790%x791))<<x792);

	if (t27 != 65536) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x921 = INT32_MIN;
	int8_t x922 = INT8_MIN;
	volatile uint8_t x923 = 2U;
	int32_t t28 = 27;

	t28 = ((x921<=(x922%x923))<<x924);

	if (t28 != 1073741824) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x930 = INT8_MIN;
	volatile uint64_t x931 = UINT64_MAX;
	uint8_t x932 = 2U;
	int32_t t29 = 2096678;

	t29 = ((x929<=(x930%x931))<<x932);

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x941 = -1;
	volatile uint16_t x942 = UINT16_MAX;
	static int8_t x943 = -4;
	static volatile int32_t t30 = -6318145;

	t30 = ((x941<=(x942%x943))<<x944);

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x959 = 1U;
	int16_t x960 = 7;
	volatile int32_t t31 = -5083;

	t31 = ((x957<=(x958%x959))<<x960);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x969 = 122748;
	uint64_t x970 = UINT64_MAX;
	uint32_t x971 = 6105U;
	int32_t t32 = 85664175;

	t32 = ((x969<=(x970%x971))<<x972);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x997 = 18982U;
	static int16_t x998 = -6677;
	volatile uint64_t x999 = 18625785821837LLU;
	int8_t x1000 = 13;
	volatile int32_t t33 = 2;

	t33 = ((x997<=(x998%x999))<<x1000);

	if (t33 != 8192) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1009 = INT64_MIN;
	volatile uint64_t x1010 = 13LLU;
	int16_t x1011 = INT16_MIN;
	int16_t x1012 = 0;
	volatile int32_t t34 = -369961612;

	t34 = ((x1009<=(x1010%x1011))<<x1012);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1017 = UINT8_MAX;
	static volatile uint64_t x1018 = 66675597LLU;
	uint16_t x1019 = 447U;
	int8_t x1020 = 1;
	static int32_t t35 = 819;

	t35 = ((x1017<=(x1018%x1019))<<x1020);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1038 = INT32_MIN;
	int64_t x1039 = 565818LL;
	int16_t x1040 = 0;
	int32_t t36 = 19;

	t36 = ((x1037<=(x1038%x1039))<<x1040);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1041 = INT8_MAX;
	int32_t x1042 = INT32_MIN;
	uint16_t x1043 = 488U;
	static int32_t x1044 = 1;
	int32_t t37 = -475453234;

	t37 = ((x1041<=(x1042%x1043))<<x1044);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1050 = UINT64_MAX;
	uint16_t x1051 = UINT16_MAX;

	t38 = ((x1049<=(x1050%x1051))<<x1052);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1065 = 5222U;
	uint64_t x1066 = UINT64_MAX;
	int32_t t39 = -48477978;

	t39 = ((x1065<=(x1066%x1067))<<x1068);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1073 = UINT8_MAX;
	int16_t x1074 = -67;
	int8_t x1075 = -1;

	t40 = ((x1073<=(x1074%x1075))<<x1076);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1093 = INT32_MAX;
	uint8_t x1094 = 125U;
	int16_t x1095 = 6;
	int32_t t41 = -118774377;

	t41 = ((x1093<=(x1094%x1095))<<x1096);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1101 = UINT16_MAX;
	uint16_t x1102 = 22656U;
	int8_t x1103 = -1;
	uint8_t x1104 = 0U;
	int32_t t42 = 27481;

	t42 = ((x1101<=(x1102%x1103))<<x1104);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1133 = UINT64_MAX;
	int32_t x1134 = -1;
	volatile uint64_t x1135 = 347315303283608LLU;
	static volatile int32_t t43 = 3001233;

	t43 = ((x1133<=(x1134%x1135))<<x1136);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1197 = UINT64_MAX;
	static uint8_t x1198 = 108U;
	int32_t x1199 = -1;
	int8_t x1200 = 7;
	volatile int32_t t44 = -30;

	t44 = ((x1197<=(x1198%x1199))<<x1200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x1213 = 35361658843442505LLU;
	static uint8_t x1214 = 15U;
	uint64_t x1215 = 106876987168321509LLU;
	static uint16_t x1216 = 0U;
	int32_t t45 = 1;

	t45 = ((x1213<=(x1214%x1215))<<x1216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1241 = INT8_MAX;
	static volatile int32_t x1242 = INT32_MIN;
	static int16_t x1243 = INT16_MIN;
	volatile int32_t t46 = 36204995;

	t46 = ((x1241<=(x1242%x1243))<<x1244);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1293 = 4483U;
	volatile uint8_t x1296 = 8U;

	t47 = ((x1293<=(x1294%x1295))<<x1296);

	if (t47 != 256) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1301 = INT64_MIN;
	volatile int64_t x1302 = -5941656131818LL;
	static int8_t x1304 = 1;
	static volatile int32_t t48 = -32350362;

	t48 = ((x1301<=(x1302%x1303))<<x1304);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1341 = -1LL;
	uint8_t x1342 = 11U;
	uint32_t x1343 = 1840441056U;
	uint8_t x1344 = 2U;
	int32_t t49 = 2;

	t49 = ((x1341<=(x1342%x1343))<<x1344);

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1353 = 2457602177492066LLU;
	int32_t x1354 = INT32_MIN;
	uint32_t x1356 = 0U;

	t50 = ((x1353<=(x1354%x1355))<<x1356);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1421 = UINT64_MAX;
	static int8_t x1422 = 5;
	int8_t x1424 = 9;
	int32_t t51 = 10;

	t51 = ((x1421<=(x1422%x1423))<<x1424);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1425 = -1;
	int8_t x1426 = -6;
	int32_t x1427 = -40008;
	static volatile uint32_t x1428 = 2U;
	int32_t t52 = -19279;

	t52 = ((x1425<=(x1426%x1427))<<x1428);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1513 = -1;
	uint32_t x1515 = 14855387U;
	int64_t x1516 = 1LL;
	int32_t t53 = 1686302;

	t53 = ((x1513<=(x1514%x1515))<<x1516);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x1597 = 55U;
	static volatile uint64_t x1598 = UINT64_MAX;
	int64_t x1599 = INT64_MAX;
	int8_t x1600 = 23;
	volatile int32_t t54 = 8;

	t54 = ((x1597<=(x1598%x1599))<<x1600);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1629 = 36590;
	uint32_t x1630 = 135239U;
	int16_t x1631 = INT16_MIN;
	uint8_t x1632 = 12U;
	volatile int32_t t55 = -13484;

	t55 = ((x1629<=(x1630%x1631))<<x1632);

	if (t55 != 4096) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1645 = UINT32_MAX;
	int8_t x1647 = INT8_MIN;
	static uint8_t x1648 = 3U;
	int32_t t56 = -156613977;

	t56 = ((x1645<=(x1646%x1647))<<x1648);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1689 = INT32_MIN;
	volatile int16_t x1690 = INT16_MAX;
	volatile uint16_t x1691 = 472U;
	int16_t x1692 = 8;
	volatile int32_t t57 = -3603;

	t57 = ((x1689<=(x1690%x1691))<<x1692);

	if (t57 != 256) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x1701 = UINT8_MAX;
	int8_t x1702 = -1;
	static int64_t x1703 = INT64_MAX;
	int32_t x1704 = 14;

	t58 = ((x1701<=(x1702%x1703))<<x1704);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1717 = -1;
	uint64_t x1718 = 18916LLU;
	int64_t x1719 = INT64_MIN;
	uint8_t x1720 = 23U;
	int32_t t59 = -35;

	t59 = ((x1717<=(x1718%x1719))<<x1720);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1737 = INT64_MAX;
	uint8_t x1738 = 1U;
	int8_t x1739 = INT8_MIN;
	static int8_t x1740 = 1;
	static int32_t t60 = -6918145;

	t60 = ((x1737<=(x1738%x1739))<<x1740);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1793 = INT32_MIN;
	uint32_t x1794 = 20826671U;
	volatile int8_t x1795 = -1;
	int8_t x1796 = 1;

	t61 = ((x1793<=(x1794%x1795))<<x1796);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2015 = 470;
	static int16_t x2016 = 7;
	int32_t t62 = 21952419;

	t62 = ((x2013<=(x2014%x2015))<<x2016);

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2021 = -1;
	static volatile uint64_t x2022 = 104512340233383374LLU;
	uint8_t x2024 = 2U;

	t63 = ((x2021<=(x2022%x2023))<<x2024);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x2038 = 0;
	static uint32_t x2040 = 27U;
	volatile int32_t t64 = -2603955;

	t64 = ((x2037<=(x2038%x2039))<<x2040);

	if (t64 != 134217728) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2049 = 9U;
	volatile int64_t x2050 = -4LL;
	volatile int8_t x2051 = -1;
	volatile uint16_t x2052 = 0U;
	volatile int32_t t65 = -56;

	t65 = ((x2049<=(x2050%x2051))<<x2052);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2062 = INT64_MIN;
	int64_t x2063 = INT64_MIN;

	t66 = ((x2061<=(x2062%x2063))<<x2064);

	if (t66 != 16384) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2093 = 3811;
	uint32_t x2094 = 82924010U;
	int8_t x2095 = 15;
	int8_t x2096 = 0;
	static int32_t t67 = -129697;

	t67 = ((x2093<=(x2094%x2095))<<x2096);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2097 = 2052709179323281917LLU;
	static volatile int8_t x2100 = 0;
	volatile int32_t t68 = -1;

	t68 = ((x2097<=(x2098%x2099))<<x2100);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x2142 = INT64_MAX;
	static int64_t x2143 = INT64_MIN;
	volatile int16_t x2144 = 1;

	t69 = ((x2141<=(x2142%x2143))<<x2144);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2149 = 652468830872012LLU;
	int64_t x2150 = -6590720537439916LL;
	volatile int8_t x2151 = INT8_MAX;
	volatile uint32_t x2152 = 22U;

	t70 = ((x2149<=(x2150%x2151))<<x2152);

	if (t70 != 4194304) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x2181 = 0;
	int16_t x2183 = INT16_MAX;
	int16_t x2184 = 2;
	volatile int32_t t71 = 3977128;

	t71 = ((x2181<=(x2182%x2183))<<x2184);

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2185 = INT64_MIN;
	static int8_t x2186 = INT8_MAX;
	uint32_t x2187 = UINT32_MAX;
	static uint8_t x2188 = 0U;
	volatile int32_t t72 = 11359;

	t72 = ((x2185<=(x2186%x2187))<<x2188);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x2213 = 5U;
	int8_t x2215 = -1;
	uint16_t x2216 = 3U;
	int32_t t73 = -8519;

	t73 = ((x2213<=(x2214%x2215))<<x2216);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2241 = INT16_MAX;
	static int8_t x2242 = 0;
	static int16_t x2243 = INT16_MIN;
	volatile int32_t t74 = 3296250;

	t74 = ((x2241<=(x2242%x2243))<<x2244);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2273 = 192717652U;
	int16_t x2274 = -1;
	uint16_t x2275 = 84U;
	uint8_t x2276 = 2U;

	t75 = ((x2273<=(x2274%x2275))<<x2276);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2337 = -1LL;
	int64_t x2338 = 16068681LL;
	static uint8_t x2339 = UINT8_MAX;
	volatile int32_t t76 = -14;

	t76 = ((x2337<=(x2338%x2339))<<x2340);

	if (t76 != 16384) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x2346 = INT8_MAX;
	uint16_t x2347 = 31262U;
	uint8_t x2348 = 14U;

	t77 = ((x2345<=(x2346%x2347))<<x2348);

	if (t77 != 16384) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x2354 = INT64_MIN;
	static uint32_t x2355 = UINT32_MAX;
	uint16_t x2356 = 18U;
	volatile int32_t t78 = 282;

	t78 = ((x2353<=(x2354%x2355))<<x2356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x2385 = UINT8_MAX;
	volatile uint16_t x2386 = 737U;
	uint8_t x2388 = 18U;
	static volatile int32_t t79 = 570;

	t79 = ((x2385<=(x2386%x2387))<<x2388);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2437 = -1;
	int32_t x2438 = INT32_MIN;
	int32_t x2440 = 11;

	t80 = ((x2437<=(x2438%x2439))<<x2440);

	if (t80 != 2048) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2513 = INT64_MIN;
	int64_t x2514 = -1LL;
	int8_t x2516 = 1;

	t81 = ((x2513<=(x2514%x2515))<<x2516);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2565 = INT64_MIN;
	int32_t x2566 = INT32_MIN;
	static uint16_t x2567 = UINT16_MAX;
	uint8_t x2568 = 28U;

	t82 = ((x2565<=(x2566%x2567))<<x2568);

	if (t82 != 268435456) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2597 = 29878LLU;
	int16_t x2598 = -3295;
	static int8_t x2600 = 0;
	int32_t t83 = 1;

	t83 = ((x2597<=(x2598%x2599))<<x2600);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2626 = INT8_MAX;
	volatile uint16_t x2627 = UINT16_MAX;
	uint8_t x2628 = 7U;
	int32_t t84 = -4291;

	t84 = ((x2625<=(x2626%x2627))<<x2628);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x2637 = -1LL;
	volatile int8_t x2638 = 1;
	int64_t x2639 = -1LL;
	uint16_t x2640 = 2U;
	int32_t t85 = 16414720;

	t85 = ((x2637<=(x2638%x2639))<<x2640);

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x2713 = INT64_MIN;
	uint64_t x2714 = UINT64_MAX;
	volatile int64_t x2715 = 15LL;
	uint8_t x2716 = 1U;

	t86 = ((x2713<=(x2714%x2715))<<x2716);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2726 = INT8_MIN;
	int64_t x2727 = INT64_MAX;
	int32_t t87 = 856248;

	t87 = ((x2725<=(x2726%x2727))<<x2728);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2754 = UINT64_MAX;
	uint64_t x2755 = 700399014457413LLU;
	uint8_t x2756 = 27U;

	t88 = ((x2753<=(x2754%x2755))<<x2756);

	if (t88 != 134217728) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2789 = -1;
	uint32_t x2791 = 10711018U;
	static volatile int32_t t89 = 2717;

	t89 = ((x2789<=(x2790%x2791))<<x2792);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x2803 = 19520U;
	int32_t x2804 = 6;
	volatile int32_t t90 = -912141;

	t90 = ((x2801<=(x2802%x2803))<<x2804);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2817 = INT32_MIN;
	uint64_t x2818 = UINT64_MAX;
	static uint16_t x2819 = UINT16_MAX;
	uint64_t x2820 = 1LLU;
	int32_t t91 = 14;

	t91 = ((x2817<=(x2818%x2819))<<x2820);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2821 = INT64_MAX;
	volatile int8_t x2822 = -1;
	int32_t x2824 = 3;
	static int32_t t92 = -2274;

	t92 = ((x2821<=(x2822%x2823))<<x2824);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2861 = -14879122118396674LL;
	int16_t x2862 = INT16_MIN;
	volatile int16_t x2863 = 2327;
	static int8_t x2864 = 17;
	volatile int32_t t93 = -60;

	t93 = ((x2861<=(x2862%x2863))<<x2864);

	if (t93 != 131072) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x2913 = -3;
	uint8_t x2914 = 1U;
	int32_t x2915 = INT32_MIN;
	int16_t x2916 = 14;
	volatile int32_t t94 = 395545950;

	t94 = ((x2913<=(x2914%x2915))<<x2916);

	if (t94 != 16384) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2929 = 31621959U;
	int16_t x2932 = 0;
	int32_t t95 = 23783022;

	t95 = ((x2929<=(x2930%x2931))<<x2932);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x2949 = -1;
	int8_t x2950 = -1;
	uint8_t x2952 = 1U;
	int32_t t96 = 1;

	t96 = ((x2949<=(x2950%x2951))<<x2952);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x2989 = INT32_MAX;
	uint16_t x2990 = UINT16_MAX;
	static int8_t x2991 = 7;
	static int8_t x2992 = 0;
	volatile int32_t t97 = 10;

	t97 = ((x2989<=(x2990%x2991))<<x2992);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x3013 = INT32_MAX;
	static int64_t x3015 = INT64_MIN;
	static int16_t x3016 = 1;
	volatile int32_t t98 = 62174163;

	t98 = ((x3013<=(x3014%x3015))<<x3016);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x3033 = 6616;
	uint64_t x3034 = UINT64_MAX;
	uint8_t x3035 = 64U;
	uint16_t x3036 = 29U;
	volatile int32_t t99 = 1683;

	t99 = ((x3033<=(x3034%x3035))<<x3036);

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

