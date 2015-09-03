#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x25 = INT32_MAX;
int16_t x42 = 1;
volatile int64_t x43 = 1340789LL;
volatile int16_t x151 = -1;
uint64_t x181 = 22789815LLU;
uint8_t x234 = 20U;
int32_t x253 = INT32_MAX;
static uint16_t x335 = UINT16_MAX;
int8_t x411 = INT8_MAX;
uint16_t x450 = 0U;
volatile int32_t x452 = -2192608;
int8_t x657 = INT8_MAX;
static uint32_t t19 = 4U;
static uint32_t x707 = UINT32_MAX;
uint8_t x886 = 25U;
static int16_t x925 = INT16_MAX;
int8_t x928 = 2;
volatile uint32_t t23 = 1877U;
uint8_t x1045 = 0U;
int32_t x1048 = 652116219;
static int32_t t25 = 26762;
int64_t x1099 = -1LL;
uint8_t x1100 = UINT8_MAX;
int8_t x1215 = INT8_MIN;
volatile uint8_t x1252 = UINT8_MAX;
volatile int32_t t29 = -69377;
int32_t t34 = -15169;
volatile int32_t t35 = -32067995;
volatile uint64_t t36 = 6795314748087828427LLU;
volatile int8_t x1591 = INT8_MIN;
static int16_t x1651 = INT16_MAX;
int32_t t40 = 110014085;
int64_t x1975 = INT64_MIN;
int8_t x1976 = 1;
int32_t t41 = -76;
volatile int16_t x2043 = INT16_MIN;
static int64_t t43 = 895070LL;
uint64_t x2277 = 1283419634225LLU;
int32_t x2498 = 4;
uint32_t x2573 = UINT32_MAX;
uint16_t x2574 = 0U;
uint32_t x2582 = 21U;
static uint32_t x2590 = 10U;
int16_t x2592 = INT16_MIN;
static int64_t t51 = -494LL;
static uint32_t x2805 = UINT32_MAX;
static uint8_t x2806 = 0U;
int64_t x2827 = 163698612618159LL;
uint16_t x2843 = 11U;
volatile int32_t t54 = -40731957;
static uint32_t t55 = 395U;
uint16_t x2961 = 20454U;
static int16_t x3003 = INT16_MIN;
volatile uint64_t x3007 = 23077LLU;
uint16_t x3050 = 0U;
volatile int64_t t59 = -3729603976297762551LL;
int32_t x3191 = -58783246;
int8_t x3251 = INT8_MIN;
volatile int32_t t62 = -7;
int64_t x3386 = 0LL;
uint16_t x3446 = 14U;
static int32_t t68 = -1;
int32_t x3608 = 552935224;
volatile uint8_t x3615 = 26U;
uint8_t x3634 = 9U;
volatile int64_t x3636 = INT64_MAX;
static uint16_t x3794 = 0U;
volatile uint8_t x3827 = 0U;
int16_t x3990 = 16;
static volatile uint64_t t77 = 16453LLU;
uint64_t x4125 = 61693LLU;
volatile int8_t x4128 = INT8_MIN;
static int16_t x4136 = 1157;
int32_t t80 = -241156;
volatile int64_t t81 = -226782977934LL;
volatile uint32_t x4243 = 60351U;
volatile uint32_t t82 = 46965953U;
static int32_t x4400 = INT32_MIN;
static int64_t x4419 = 1491230352LL;
static uint64_t x4545 = 164642173666LLU;
uint32_t x4628 = UINT32_MAX;
volatile int64_t x4632 = INT64_MIN;
volatile int32_t t92 = -641051432;
volatile int32_t x4699 = INT32_MIN;
int8_t x4748 = INT8_MAX;
uint8_t x4958 = 7U;
int8_t x5061 = 1;
uint32_t x5062 = 14U;
volatile int32_t t97 = 11895;


void f0(void) {
	volatile uint32_t x9 = 254329111U;
	int8_t x10 = 2;
	int64_t x11 = 20263956LL;
	int16_t x12 = INT16_MIN;
	uint32_t t0 = 86595U;

	t0 = ((x9>>x10)*(x11<=x12));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x26 = 2U;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t1 = -121;

	t1 = ((x25>>x26)*(x27<=x28));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x41 = INT16_MAX;
	static volatile int64_t x44 = INT64_MAX;
	volatile int32_t t2 = 2;

	t2 = ((x41>>x42)*(x43<=x44));

	if (t2 != 16383) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x145 = 0;
	uint32_t x146 = 0U;
	static volatile int16_t x147 = -152;
	static int8_t x148 = INT8_MAX;
	volatile int32_t t3 = -3332;

	t3 = ((x145>>x146)*(x147<=x148));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x149 = UINT16_MAX;
	volatile uint8_t x150 = 3U;
	int32_t x152 = INT32_MIN;
	volatile int32_t t4 = 3;

	t4 = ((x149>>x150)*(x151<=x152));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x153 = 8U;
	uint32_t x154 = 2U;
	static volatile uint8_t x155 = 30U;
	uint32_t x156 = 7U;
	volatile int32_t t5 = -12;

	t5 = ((x153>>x154)*(x155<=x156));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x161 = 3;
	uint8_t x162 = 3U;
	uint16_t x163 = UINT16_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t6 = 46;

	t6 = ((x161>>x162)*(x163<=x164));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x182 = 7;
	int16_t x183 = 12156;
	uint64_t x184 = 57348793642LLU;
	volatile uint64_t t7 = 709303629399LLU;

	t7 = ((x181>>x182)*(x183<=x184));

	if (t7 != 178045LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x201 = INT64_MAX;
	uint32_t x202 = 62U;
	volatile int32_t x203 = INT32_MAX;
	volatile uint64_t x204 = 57308LLU;
	int64_t t8 = -10004928685510249LL;

	t8 = ((x201>>x202)*(x203<=x204));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x229 = 259LLU;
	int8_t x230 = 0;
	static int8_t x231 = INT8_MIN;
	static uint8_t x232 = 54U;
	static volatile uint64_t t9 = 5969LLU;

	t9 = ((x229>>x230)*(x231<=x232));

	if (t9 != 259LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x233 = 23048U;
	volatile int8_t x235 = -1;
	int16_t x236 = INT16_MIN;
	uint32_t t10 = 313562478U;

	t10 = ((x233>>x234)*(x235<=x236));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x254 = 9U;
	uint32_t x255 = 2104U;
	static int8_t x256 = INT8_MAX;
	int32_t t11 = -184;

	t11 = ((x253>>x254)*(x255<=x256));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x333 = 0;
	static uint8_t x334 = 0U;
	static int64_t x336 = INT64_MIN;
	static volatile int32_t t12 = 14;

	t12 = ((x333>>x334)*(x335<=x336));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x409 = 28;
	int8_t x410 = 0;
	volatile int64_t x412 = INT64_MIN;
	volatile int32_t t13 = 781;

	t13 = ((x409>>x410)*(x411<=x412));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x421 = 16;
	static volatile uint8_t x422 = 30U;
	int32_t x423 = INT32_MIN;
	uint8_t x424 = 36U;
	volatile int32_t t14 = 1;

	t14 = ((x421>>x422)*(x423<=x424));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x449 = 146298509U;
	int64_t x451 = INT64_MIN;
	volatile uint32_t t15 = 28342405U;

	t15 = ((x449>>x450)*(x451<=x452));

	if (t15 != 146298509U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x457 = 60U;
	volatile int16_t x458 = 4;
	volatile int64_t x459 = INT64_MIN;
	volatile int16_t x460 = INT16_MIN;
	int32_t t16 = -6;

	t16 = ((x457>>x458)*(x459<=x460));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x481 = 67583598767640LL;
	volatile uint8_t x482 = 53U;
	volatile int64_t x483 = INT64_MAX;
	static int64_t x484 = INT64_MIN;
	int64_t t17 = -16104962736485LL;

	t17 = ((x481>>x482)*(x483<=x484));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x658 = 22;
	volatile int32_t x659 = INT32_MIN;
	int8_t x660 = INT8_MIN;
	int32_t t18 = -29;

	t18 = ((x657>>x658)*(x659<=x660));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x669 = 4057023U;
	uint16_t x670 = 2U;
	int16_t x671 = INT16_MIN;
	static volatile int16_t x672 = INT16_MIN;

	t19 = ((x669>>x670)*(x671<=x672));

	if (t19 != 1014255U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x705 = UINT64_MAX;
	volatile uint8_t x706 = 7U;
	volatile uint16_t x708 = 20733U;
	uint64_t t20 = 114649LLU;

	t20 = ((x705>>x706)*(x707<=x708));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x885 = UINT8_MAX;
	static volatile int32_t x887 = -1;
	int8_t x888 = 5;
	int32_t t21 = 8;

	t21 = ((x885>>x886)*(x887<=x888));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x926 = 1;
	uint16_t x927 = 7364U;
	volatile int32_t t22 = -9396080;

	t22 = ((x925>>x926)*(x927<=x928));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x949 = 69393U;
	int16_t x950 = 1;
	static int32_t x951 = INT32_MIN;
	int16_t x952 = INT16_MIN;

	t23 = ((x949>>x950)*(x951<=x952));

	if (t23 != 34696U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1013 = 5030528;
	volatile uint8_t x1014 = 5U;
	int8_t x1015 = -1;
	static uint32_t x1016 = UINT32_MAX;
	static int32_t t24 = -6404454;

	t24 = ((x1013>>x1014)*(x1015<=x1016));

	if (t24 != 157204) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1046 = 0;
	static volatile uint32_t x1047 = 1U;

	t25 = ((x1045>>x1046)*(x1047<=x1048));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1097 = 2LLU;
	volatile uint16_t x1098 = 18U;
	volatile uint64_t t26 = 901583630LLU;

	t26 = ((x1097>>x1098)*(x1099<=x1100));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1161 = 1;
	static uint16_t x1162 = 20U;
	static uint16_t x1163 = UINT16_MAX;
	int8_t x1164 = -1;
	int32_t t27 = 1;

	t27 = ((x1161>>x1162)*(x1163<=x1164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1213 = 14603U;
	uint8_t x1214 = 12U;
	int16_t x1216 = -24;
	volatile uint32_t t28 = 2048420U;

	t28 = ((x1213>>x1214)*(x1215<=x1216));

	if (t28 != 3U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x1249 = 26704;
	int8_t x1250 = 0;
	int8_t x1251 = -1;

	t29 = ((x1249>>x1250)*(x1251<=x1252));

	if (t29 != 26704) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1277 = UINT32_MAX;
	volatile int8_t x1278 = 1;
	static int64_t x1279 = 49732466334984176LL;
	int32_t x1280 = INT32_MIN;
	uint32_t t30 = 9U;

	t30 = ((x1277>>x1278)*(x1279<=x1280));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1281 = INT64_MAX;
	uint8_t x1282 = 36U;
	static int32_t x1283 = 1;
	volatile uint32_t x1284 = UINT32_MAX;
	volatile int64_t t31 = 1140082587231414289LL;

	t31 = ((x1281>>x1282)*(x1283<=x1284));

	if (t31 != 134217727LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1361 = 2924;
	static uint32_t x1362 = 12U;
	uint16_t x1363 = UINT16_MAX;
	volatile int8_t x1364 = INT8_MIN;
	int32_t t32 = 0;

	t32 = ((x1361>>x1362)*(x1363<=x1364));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1397 = INT16_MAX;
	uint8_t x1398 = 9U;
	uint8_t x1399 = 71U;
	volatile int64_t x1400 = -6196951068850LL;
	volatile int32_t t33 = 658;

	t33 = ((x1397>>x1398)*(x1399<=x1400));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1429 = 1U;
	uint8_t x1430 = 0U;
	volatile uint32_t x1431 = 37U;
	int8_t x1432 = -1;

	t34 = ((x1429>>x1430)*(x1431<=x1432));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1433 = 4U;
	int16_t x1434 = 9;
	uint32_t x1435 = 182191933U;
	static uint32_t x1436 = UINT32_MAX;

	t35 = ((x1433>>x1434)*(x1435<=x1436));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1497 = 19683LLU;
	volatile uint16_t x1498 = 25U;
	static int16_t x1499 = INT16_MIN;
	uint16_t x1500 = 1493U;

	t36 = ((x1497>>x1498)*(x1499<=x1500));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1589 = UINT64_MAX;
	int64_t x1590 = 7LL;
	int8_t x1592 = INT8_MAX;
	volatile uint64_t t37 = 8912989657657272LLU;

	t37 = ((x1589>>x1590)*(x1591<=x1592));

	if (t37 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1625 = 36917065203LLU;
	int32_t x1626 = 18;
	uint64_t x1627 = UINT64_MAX;
	volatile int16_t x1628 = -1;
	volatile uint64_t t38 = 230887709LLU;

	t38 = ((x1625>>x1626)*(x1627<=x1628));

	if (t38 != 140827LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1649 = 11294U;
	uint8_t x1650 = 5U;
	static int32_t x1652 = INT32_MIN;
	static volatile int32_t t39 = -4488365;

	t39 = ((x1649>>x1650)*(x1651<=x1652));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x1821 = 20105U;
	volatile uint8_t x1822 = 6U;
	uint16_t x1823 = 3U;
	static int16_t x1824 = INT16_MIN;

	t40 = ((x1821>>x1822)*(x1823<=x1824));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1973 = INT16_MAX;
	int8_t x1974 = 6;

	t41 = ((x1973>>x1974)*(x1975<=x1976));

	if (t41 != 511) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2041 = UINT8_MAX;
	static int16_t x2042 = 4;
	uint8_t x2044 = 1U;
	static volatile int32_t t42 = -10934288;

	t42 = ((x2041>>x2042)*(x2043<=x2044));

	if (t42 != 15) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x2145 = 10029275626025432LL;
	int8_t x2146 = 1;
	int16_t x2147 = INT16_MAX;
	static volatile int64_t x2148 = 1537474LL;

	t43 = ((x2145>>x2146)*(x2147<=x2148));

	if (t43 != 5014637813012716LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2278 = 11U;
	static uint32_t x2279 = UINT32_MAX;
	volatile int8_t x2280 = -27;
	uint64_t t44 = 121590999757LLU;

	t44 = ((x2277>>x2278)*(x2279<=x2280));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2413 = 103U;
	static int16_t x2414 = 0;
	int32_t x2415 = INT32_MIN;
	uint8_t x2416 = 13U;
	volatile int32_t t45 = -262;

	t45 = ((x2413>>x2414)*(x2415<=x2416));

	if (t45 != 103) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2485 = 13;
	uint32_t x2486 = 20U;
	int64_t x2487 = INT64_MAX;
	int8_t x2488 = -42;
	volatile int32_t t46 = 27677459;

	t46 = ((x2485>>x2486)*(x2487<=x2488));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x2497 = 12949U;
	int16_t x2499 = 18;
	uint8_t x2500 = 0U;
	static volatile uint32_t t47 = 324828124U;

	t47 = ((x2497>>x2498)*(x2499<=x2500));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2501 = 237108;
	static int32_t x2502 = 2;
	uint8_t x2503 = 2U;
	uint16_t x2504 = 1U;
	volatile int32_t t48 = 13;

	t48 = ((x2501>>x2502)*(x2503<=x2504));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2575 = INT8_MIN;
	volatile int16_t x2576 = INT16_MAX;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = ((x2573>>x2574)*(x2575<=x2576));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2581 = UINT32_MAX;
	int8_t x2583 = INT8_MIN;
	uint64_t x2584 = 30732593832LLU;
	volatile uint32_t t50 = 74U;

	t50 = ((x2581>>x2582)*(x2583<=x2584));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x2589 = 45531335324784812LL;
	int8_t x2591 = -1;

	t51 = ((x2589>>x2590)*(x2591<=x2592));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x2807 = -1LL;
	static int16_t x2808 = -1;
	static volatile uint32_t t52 = UINT32_MAX;

	t52 = ((x2805>>x2806)*(x2807<=x2808));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2825 = 1U;
	uint64_t x2826 = 8LLU;
	uint16_t x2828 = UINT16_MAX;
	int32_t t53 = -182196447;

	t53 = ((x2825>>x2826)*(x2827<=x2828));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2841 = INT8_MAX;
	static volatile uint8_t x2842 = 16U;
	static uint32_t x2844 = 62142529U;

	t54 = ((x2841>>x2842)*(x2843<=x2844));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2877 = 647U;
	int8_t x2878 = 0;
	int64_t x2879 = 264LL;
	static uint8_t x2880 = UINT8_MAX;

	t55 = ((x2877>>x2878)*(x2879<=x2880));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2962 = 3;
	int32_t x2963 = 6;
	uint8_t x2964 = 9U;
	int32_t t56 = -56698;

	t56 = ((x2961>>x2962)*(x2963<=x2964));

	if (t56 != 2556) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3001 = UINT16_MAX;
	volatile uint8_t x3002 = 0U;
	int8_t x3004 = INT8_MIN;
	int32_t t57 = 95;

	t57 = ((x3001>>x3002)*(x3003<=x3004));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3005 = INT64_MAX;
	uint8_t x3006 = 1U;
	uint32_t x3008 = 45387U;
	int64_t t58 = 2663013196163LL;

	t58 = ((x3005>>x3006)*(x3007<=x3008));

	if (t58 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3049 = 26090974734258052LL;
	volatile int32_t x3051 = INT32_MAX;
	int8_t x3052 = -1;

	t59 = ((x3049>>x3050)*(x3051<=x3052));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3081 = UINT64_MAX;
	uint64_t x3082 = 0LLU;
	int32_t x3083 = 5074088;
	volatile int8_t x3084 = 0;
	volatile uint64_t t60 = 2028LLU;

	t60 = ((x3081>>x3082)*(x3083<=x3084));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x3189 = 3U;
	uint32_t x3190 = 3U;
	static uint64_t x3192 = UINT64_MAX;
	int32_t t61 = -173960;

	t61 = ((x3189>>x3190)*(x3191<=x3192));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3249 = 1;
	volatile uint16_t x3250 = 1U;
	static volatile uint32_t x3252 = UINT32_MAX;

	t62 = ((x3249>>x3250)*(x3251<=x3252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3253 = UINT64_MAX;
	uint8_t x3254 = 9U;
	int8_t x3255 = INT8_MIN;
	int16_t x3256 = -13;
	uint64_t t63 = 12LLU;

	t63 = ((x3253>>x3254)*(x3255<=x3256));

	if (t63 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3281 = 5U;
	int8_t x3282 = 0;
	uint16_t x3283 = 161U;
	uint8_t x3284 = 47U;
	volatile int32_t t64 = -24318651;

	t64 = ((x3281>>x3282)*(x3283<=x3284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x3329 = UINT16_MAX;
	int8_t x3330 = 5;
	uint8_t x3331 = 0U;
	static int64_t x3332 = 46756151928621690LL;
	int32_t t65 = 1737467;

	t65 = ((x3329>>x3330)*(x3331<=x3332));

	if (t65 != 2047) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x3385 = UINT32_MAX;
	int32_t x3387 = 0;
	volatile uint8_t x3388 = UINT8_MAX;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = ((x3385>>x3386)*(x3387<=x3388));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3445 = INT16_MAX;
	uint8_t x3447 = UINT8_MAX;
	int16_t x3448 = INT16_MAX;
	int32_t t67 = 3628737;

	t67 = ((x3445>>x3446)*(x3447<=x3448));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3565 = 120U;
	uint16_t x3566 = 3U;
	static int16_t x3567 = -2075;
	int32_t x3568 = INT32_MAX;

	t68 = ((x3565>>x3566)*(x3567<=x3568));

	if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3605 = INT16_MAX;
	int8_t x3606 = 3;
	volatile uint32_t x3607 = 27U;
	int32_t t69 = -2;

	t69 = ((x3605>>x3606)*(x3607<=x3608));

	if (t69 != 4095) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3613 = INT64_MAX;
	int8_t x3614 = 5;
	volatile uint32_t x3616 = 18173518U;
	volatile int64_t t70 = 24965820LL;

	t70 = ((x3613>>x3614)*(x3615<=x3616));

	if (t70 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3633 = 126U;
	uint64_t x3635 = UINT64_MAX;
	volatile int32_t t71 = -1251171;

	t71 = ((x3633>>x3634)*(x3635<=x3636));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x3641 = INT32_MAX;
	uint16_t x3642 = 0U;
	int8_t x3643 = 41;
	volatile int32_t x3644 = INT32_MIN;
	int32_t t72 = -45446272;

	t72 = ((x3641>>x3642)*(x3643<=x3644));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x3729 = 19544LLU;
	int8_t x3730 = 1;
	uint64_t x3731 = UINT64_MAX;
	int16_t x3732 = 18;
	volatile uint64_t t73 = 205103539LLU;

	t73 = ((x3729>>x3730)*(x3731<=x3732));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x3793 = INT32_MAX;
	int64_t x3795 = INT64_MIN;
	static int16_t x3796 = INT16_MAX;
	int32_t t74 = INT32_MAX;

	t74 = ((x3793>>x3794)*(x3795<=x3796));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3825 = UINT16_MAX;
	uint8_t x3826 = 0U;
	int16_t x3828 = -89;
	int32_t t75 = -1820318;

	t75 = ((x3825>>x3826)*(x3827<=x3828));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x3873 = 0;
	int8_t x3874 = 3;
	uint8_t x3875 = 1U;
	static int32_t x3876 = INT32_MAX;
	volatile int32_t t76 = -1099145;

	t76 = ((x3873>>x3874)*(x3875<=x3876));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x3989 = UINT64_MAX;
	int8_t x3991 = INT8_MIN;
	int8_t x3992 = 0;

	t77 = ((x3989>>x3990)*(x3991<=x3992));

	if (t77 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x4126 = 26U;
	int32_t x4127 = INT32_MIN;
	uint64_t t78 = 188158849391LLU;

	t78 = ((x4125>>x4126)*(x4127<=x4128));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4129 = 6407670002LL;
	uint8_t x4130 = 14U;
	uint32_t x4131 = 5690108U;
	static int8_t x4132 = INT8_MIN;
	volatile int64_t t79 = -34391413277440LL;

	t79 = ((x4129>>x4130)*(x4131<=x4132));

	if (t79 != 391093LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4133 = 17U;
	volatile uint8_t x4134 = 2U;
	volatile int32_t x4135 = INT32_MIN;

	t80 = ((x4133>>x4134)*(x4135<=x4136));

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4149 = INT64_MAX;
	uint8_t x4150 = 5U;
	int8_t x4151 = INT8_MIN;
	int8_t x4152 = INT8_MIN;

	t81 = ((x4149>>x4150)*(x4151<=x4152));

	if (t81 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x4241 = 1648494322U;
	uint32_t x4242 = 25U;
	int16_t x4244 = 0;

	t82 = ((x4241>>x4242)*(x4243<=x4244));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4305 = 3U;
	uint8_t x4306 = 9U;
	volatile int16_t x4307 = INT16_MIN;
	int64_t x4308 = -1LL;
	int32_t t83 = -11764;

	t83 = ((x4305>>x4306)*(x4307<=x4308));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4317 = UINT64_MAX;
	int8_t x4318 = 0;
	int32_t x4319 = INT32_MIN;
	int64_t x4320 = 2209179LL;
	uint64_t t84 = UINT64_MAX;

	t84 = ((x4317>>x4318)*(x4319<=x4320));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4385 = 242805125LL;
	uint8_t x4386 = 11U;
	int16_t x4387 = INT16_MIN;
	static int32_t x4388 = INT32_MAX;
	volatile int64_t t85 = 473211955431LL;

	t85 = ((x4385>>x4386)*(x4387<=x4388));

	if (t85 != 118557LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4397 = 127U;
	uint8_t x4398 = 1U;
	int16_t x4399 = -52;
	static int32_t t86 = -2;

	t86 = ((x4397>>x4398)*(x4399<=x4400));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4417 = 1124;
	volatile int16_t x4418 = 23;
	uint8_t x4420 = UINT8_MAX;
	volatile int32_t t87 = 0;

	t87 = ((x4417>>x4418)*(x4419<=x4420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4485 = 63;
	int8_t x4486 = 0;
	int8_t x4487 = 2;
	volatile int32_t x4488 = INT32_MIN;
	int32_t t88 = 5513;

	t88 = ((x4485>>x4486)*(x4487<=x4488));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4546 = 0;
	int32_t x4547 = INT32_MIN;
	volatile uint64_t x4548 = 10915260528LLU;
	volatile uint64_t t89 = 4LLU;

	t89 = ((x4545>>x4546)*(x4547<=x4548));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4625 = 7349LL;
	int8_t x4626 = 15;
	static volatile int64_t x4627 = -1LL;
	static int64_t t90 = 1425LL;

	t90 = ((x4625>>x4626)*(x4627<=x4628));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4629 = INT16_MAX;
	uint32_t x4630 = 0U;
	int64_t x4631 = INT64_MIN;
	volatile int32_t t91 = 7119770;

	t91 = ((x4629>>x4630)*(x4631<=x4632));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4657 = INT16_MAX;
	volatile int8_t x4658 = 1;
	volatile uint64_t x4659 = 14100215028LLU;
	int64_t x4660 = -1110674095916914572LL;

	t92 = ((x4657>>x4658)*(x4659<=x4660));

	if (t92 != 16383) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4697 = 3207U;
	uint16_t x4698 = 15U;
	int16_t x4700 = 13;
	volatile uint32_t t93 = 1U;

	t93 = ((x4697>>x4698)*(x4699<=x4700));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x4745 = 7483U;
	volatile uint8_t x4746 = 0U;
	int8_t x4747 = 0;
	int32_t t94 = 3253396;

	t94 = ((x4745>>x4746)*(x4747<=x4748));

	if (t94 != 7483) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x4957 = UINT32_MAX;
	volatile int16_t x4959 = INT16_MIN;
	volatile uint16_t x4960 = 401U;
	volatile uint32_t t95 = 506U;

	t95 = ((x4957>>x4958)*(x4959<=x4960));

	if (t95 != 33554431U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5063 = 546033638899469LLU;
	int8_t x5064 = INT8_MAX;
	int32_t t96 = 9287;

	t96 = ((x5061>>x5062)*(x5063<=x5064));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5177 = INT8_MAX;
	uint16_t x5178 = 4U;
	int64_t x5179 = INT64_MAX;
	static uint64_t x5180 = UINT64_MAX;

	t97 = ((x5177>>x5178)*(x5179<=x5180));

	if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5245 = 36;
	static volatile int8_t x5246 = 1;
	volatile int64_t x5247 = INT64_MIN;
	uint8_t x5248 = UINT8_MAX;
	static int32_t t98 = 352580185;

	t98 = ((x5245>>x5246)*(x5247<=x5248));

	if (t98 != 18) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5249 = INT32_MAX;
	uint8_t x5250 = 2U;
	volatile int32_t x5251 = INT32_MIN;
	int16_t x5252 = -1;
	volatile int32_t t99 = 0;

	t99 = ((x5249>>x5250)*(x5251<=x5252));

	if (t99 != 536870911) { NG(); } else { ; }
	
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

