#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 3086U;
int32_t t1 = 78;
uint8_t x24 = 23U;
static int16_t x43 = 3925;
int32_t x67 = INT32_MIN;
volatile int16_t x77 = 117;
static int32_t x119 = INT32_MAX;
int32_t t10 = -381;
volatile int32_t t11 = 51;
int8_t x197 = 0;
static uint16_t x317 = UINT16_MAX;
static uint32_t x405 = 28U;
uint8_t x406 = 1U;
static int32_t t16 = 1;
int8_t x426 = INT8_MIN;
static volatile int32_t t18 = -37403;
static volatile int64_t x551 = 2795687LL;
uint16_t x564 = 1U;
int32_t t22 = 9998;
int8_t x598 = INT8_MIN;
int32_t t23 = -211945932;
volatile int8_t x683 = INT8_MIN;
volatile int32_t t25 = -37889341;
int64_t x694 = INT64_MAX;
int8_t x712 = 12;
uint32_t x726 = 536U;
static uint64_t x727 = 30166LLU;
volatile int32_t t29 = 0;
int32_t t30 = 1;
volatile int16_t x756 = 0;
static volatile int32_t t31 = 1;
uint64_t x808 = 0LLU;
int32_t x810 = -1;
uint32_t x823 = 41U;
int32_t t34 = 11;
static int64_t x841 = INT64_MIN;
uint64_t x842 = UINT64_MAX;
static uint32_t x844 = 29U;
uint8_t x846 = 30U;
int8_t x879 = -1;
int16_t x888 = 1;
uint16_t x929 = 109U;
uint8_t x930 = 8U;
uint64_t x987 = UINT64_MAX;
volatile int32_t t43 = -41432;
static int32_t x1091 = 1459953;
int32_t t47 = 0;
int32_t t50 = 0;
volatile uint64_t x1226 = 57023977561LLU;
volatile int32_t t51 = 5270114;
volatile int32_t x1255 = INT32_MIN;
static volatile int32_t t53 = -1415;
static uint8_t x1267 = 4U;
static volatile uint8_t x1380 = 11U;
int16_t x1394 = -1;
int64_t x1407 = -1LL;
static volatile int32_t t59 = -4739456;
volatile int32_t t60 = -2436;
static int16_t x1446 = INT16_MIN;
volatile int32_t t61 = -1;
volatile int64_t x1457 = INT64_MIN;
int8_t x1458 = 1;
int32_t x1471 = INT32_MIN;
volatile int32_t t63 = 10360681;
uint16_t x1480 = 0U;
int32_t x1485 = INT32_MIN;
uint16_t x1572 = 2U;
int64_t x1606 = INT64_MAX;
int32_t x1633 = -1;
static int16_t x1635 = -9754;
static uint64_t x1679 = 8373719417LLU;
volatile int16_t x1691 = INT16_MAX;
volatile uint64_t x1706 = 474103798877829172LLU;
volatile int32_t x1707 = 16234765;
volatile int32_t t73 = -16256;
static volatile int32_t t74 = -46;
volatile int32_t t75 = -83583;
static volatile uint16_t x1799 = 5U;
static volatile int32_t t77 = 268322479;
uint16_t x1822 = UINT16_MAX;
int8_t x1830 = 44;
static uint16_t x1891 = 211U;
static int32_t x1923 = -101811441;
int64_t x1947 = INT64_MAX;
uint64_t x2035 = UINT64_MAX;
int8_t x2133 = -1;
static int16_t x2134 = -1;
volatile int32_t x2135 = INT32_MIN;
volatile uint8_t x2172 = 4U;
uint16_t x2240 = 1U;
volatile int32_t t93 = -47;
int16_t x2373 = INT16_MIN;
int32_t x2374 = INT32_MIN;
int8_t x2440 = 3;
static int8_t x2451 = INT8_MIN;
static uint8_t x2484 = 1U;
volatile int8_t x2499 = -1;
static uint8_t x2500 = 6U;


void f0(void) {
	int16_t x9 = 729;
	int8_t x10 = 1;
	volatile uint16_t x12 = 26U;
	int32_t t0 = 2;

	t0 = (x9<((x10<x11)<<x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x13 = 7388U;
	int64_t x14 = -1LL;
	int32_t x15 = -6;
	int8_t x16 = 12;

	t1 = (x13<((x14<x15)<<x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x21 = 2U;
	uint64_t x22 = 16059827331805LLU;
	uint64_t x23 = 3332797089789288227LLU;
	volatile int32_t t2 = 7;

	t2 = (x21<((x22<x23)<<x24));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x41 = 1LL;
	int16_t x42 = INT16_MIN;
	uint8_t x44 = 0U;
	static volatile int32_t t3 = 27734895;

	t3 = (x41<((x42<x43)<<x44));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x53 = 76123433LLU;
	int64_t x54 = -1846074098670LL;
	uint8_t x55 = 14U;
	int8_t x56 = 1;
	volatile int32_t t4 = 438260;

	t4 = (x53<((x54<x55)<<x56));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x57 = 3U;
	int32_t x58 = 40166264;
	uint32_t x59 = 526704606U;
	int8_t x60 = 4;
	int32_t t5 = 365156;

	t5 = (x57<((x58<x59)<<x60));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x65 = 58626936024LLU;
	volatile uint8_t x66 = 25U;
	int16_t x68 = 18;
	volatile int32_t t6 = 11;

	t6 = (x65<((x66<x67)<<x68));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x73 = 6U;
	int8_t x74 = -1;
	int8_t x75 = -1;
	uint8_t x76 = 11U;
	int32_t t7 = -101198;

	t7 = (x73<((x74<x75)<<x76));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x78 = -27239;
	volatile uint64_t x79 = 838341459459854LLU;
	uint8_t x80 = 0U;
	static int32_t t8 = -65696;

	t8 = (x77<((x78<x79)<<x80));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x113 = 1;
	int16_t x114 = -1;
	volatile int32_t x115 = -1;
	uint8_t x116 = 2U;
	int32_t t9 = 1;

	t9 = (x113<((x114<x115)<<x116));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = -1;
	int8_t x120 = 25;

	t10 = (x117<((x118<x119)<<x120));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x150 = -1;
	uint16_t x151 = 88U;
	int8_t x152 = 1;

	t11 = (x149<((x150<x151)<<x152));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x198 = INT32_MIN;
	uint16_t x199 = UINT16_MAX;
	static volatile int8_t x200 = 6;
	volatile int32_t t12 = 558;

	t12 = (x197<((x198<x199)<<x200));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MIN;
	int32_t x263 = -86;
	uint32_t x264 = 1U;
	volatile int32_t t13 = 192738;

	t13 = (x261<((x262<x263)<<x264));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x318 = -1;
	int32_t x319 = 1147774;
	volatile uint8_t x320 = 9U;
	int32_t t14 = -733076;

	t14 = (x317<((x318<x319)<<x320));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x365 = 36U;
	uint64_t x366 = 6280519307061976716LLU;
	int16_t x367 = -34;
	uint32_t x368 = 6U;
	int32_t t15 = 4;

	t15 = (x365<((x366<x367)<<x368));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x407 = -1LL;
	static uint8_t x408 = 2U;

	t16 = (x405<((x406<x407)<<x408));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x425 = UINT64_MAX;
	uint32_t x427 = 16U;
	int32_t x428 = 4;
	int32_t t17 = -362;

	t17 = (x425<((x426<x427)<<x428));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x457 = 83643;
	int16_t x458 = INT16_MAX;
	static int8_t x459 = INT8_MIN;
	int8_t x460 = 5;

	t18 = (x457<((x458<x459)<<x460));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x529 = -1;
	static int64_t x530 = INT64_MAX;
	int16_t x531 = 112;
	static int8_t x532 = 6;
	int32_t t19 = -308633;

	t19 = (x529<((x530<x531)<<x532));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x549 = INT8_MAX;
	uint8_t x550 = 1U;
	uint8_t x552 = 1U;
	volatile int32_t t20 = -235;

	t20 = (x549<((x550<x551)<<x552));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x561 = 8U;
	volatile uint64_t x562 = 708769313507509LLU;
	int32_t x563 = INT32_MIN;
	volatile int32_t t21 = 1;

	t21 = (x561<((x562<x563)<<x564));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x573 = 0U;
	uint32_t x574 = 23524U;
	uint64_t x575 = 76317369383LLU;
	uint16_t x576 = 15U;

	t22 = (x573<((x574<x575)<<x576));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x597 = INT16_MIN;
	int16_t x599 = 157;
	uint8_t x600 = 0U;

	t23 = (x597<((x598<x599)<<x600));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x637 = 14U;
	static int32_t x638 = INT32_MIN;
	uint32_t x639 = UINT32_MAX;
	int8_t x640 = 0;
	int32_t t24 = 689014148;

	t24 = (x637<((x638<x639)<<x640));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x681 = 89LLU;
	int32_t x682 = INT32_MAX;
	static int8_t x684 = 8;

	t25 = (x681<((x682<x683)<<x684));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x693 = INT64_MAX;
	volatile int16_t x695 = -1;
	int8_t x696 = 19;
	int32_t t26 = 249236100;

	t26 = (x693<((x694<x695)<<x696));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x709 = 155079LLU;
	volatile uint8_t x710 = 0U;
	uint8_t x711 = 0U;
	volatile int32_t t27 = 36692036;

	t27 = (x709<((x710<x711)<<x712));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x725 = -54618;
	int8_t x728 = 0;
	volatile int32_t t28 = 0;

	t28 = (x725<((x726<x727)<<x728));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x729 = INT8_MAX;
	uint16_t x730 = UINT16_MAX;
	int32_t x731 = INT32_MIN;
	uint32_t x732 = 10U;

	t29 = (x729<((x730<x731)<<x732));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x741 = 10800576LL;
	uint16_t x742 = 3U;
	static int8_t x743 = INT8_MIN;
	volatile int16_t x744 = 2;

	t30 = (x741<((x742<x743)<<x744));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x753 = 50U;
	uint64_t x754 = 4125748440LLU;
	int64_t x755 = INT64_MAX;

	t31 = (x753<((x754<x755)<<x756));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x805 = INT64_MAX;
	static uint16_t x806 = 27U;
	static uint16_t x807 = 3259U;
	volatile int32_t t32 = 0;

	t32 = (x805<((x806<x807)<<x808));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x809 = -1;
	uint64_t x811 = 290811LLU;
	uint8_t x812 = 2U;
	int32_t t33 = 1;

	t33 = (x809<((x810<x811)<<x812));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x821 = 33052928420LL;
	uint16_t x822 = UINT16_MAX;
	int16_t x824 = 9;

	t34 = (x821<((x822<x823)<<x824));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x843 = -3;
	int32_t t35 = -28422961;

	t35 = (x841<((x842<x843)<<x844));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x845 = 883770105U;
	int32_t x847 = -1;
	int32_t x848 = 1;
	int32_t t36 = 31283584;

	t36 = (x845<((x846<x847)<<x848));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x877 = -35478703756LL;
	int64_t x878 = 28051237851377696LL;
	int16_t x880 = 15;
	static int32_t t37 = 1005872002;

	t37 = (x877<((x878<x879)<<x880));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x885 = INT16_MIN;
	uint32_t x886 = 7194U;
	volatile uint32_t x887 = 28764U;
	volatile int32_t t38 = 1031810;

	t38 = (x885<((x886<x887)<<x888));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x897 = 27U;
	static volatile int8_t x898 = -1;
	static int32_t x899 = INT32_MAX;
	static int32_t x900 = 0;
	int32_t t39 = -5;

	t39 = (x897<((x898<x899)<<x900));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x931 = INT16_MIN;
	uint64_t x932 = 1LLU;
	volatile int32_t t40 = -34056635;

	t40 = (x929<((x930<x931)<<x932));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x933 = INT8_MIN;
	int64_t x934 = -10061LL;
	volatile uint8_t x935 = 1U;
	volatile uint16_t x936 = 7U;
	volatile int32_t t41 = 934577;

	t41 = (x933<((x934<x935)<<x936));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x977 = INT32_MAX;
	uint8_t x978 = 1U;
	static int64_t x979 = INT64_MAX;
	int8_t x980 = 5;
	static int32_t t42 = -190503555;

	t42 = (x977<((x978<x979)<<x980));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x985 = INT64_MIN;
	volatile int64_t x986 = INT64_MIN;
	int8_t x988 = 11;

	t43 = (x985<((x986<x987)<<x988));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x1017 = UINT64_MAX;
	uint64_t x1018 = UINT64_MAX;
	uint64_t x1019 = UINT64_MAX;
	uint8_t x1020 = 2U;
	int32_t t44 = -187798;

	t44 = (x1017<((x1018<x1019)<<x1020));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1089 = 0;
	int16_t x1090 = -1;
	static uint64_t x1092 = 1LLU;
	volatile int32_t t45 = -11;

	t45 = (x1089<((x1090<x1091)<<x1092));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x1101 = -3;
	int8_t x1102 = INT8_MIN;
	uint16_t x1103 = 22U;
	uint16_t x1104 = 0U;
	static volatile int32_t t46 = -797;

	t46 = (x1101<((x1102<x1103)<<x1104));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1105 = INT8_MIN;
	int32_t x1106 = -2227317;
	int16_t x1107 = 3;
	uint8_t x1108 = 1U;

	t47 = (x1105<((x1106<x1107)<<x1108));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1117 = INT32_MAX;
	int8_t x1118 = INT8_MAX;
	int16_t x1119 = INT16_MAX;
	uint8_t x1120 = 16U;
	volatile int32_t t48 = -1;

	t48 = (x1117<((x1118<x1119)<<x1120));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1177 = 6078U;
	static int64_t x1178 = INT64_MAX;
	static uint8_t x1179 = 53U;
	uint64_t x1180 = 9LLU;
	volatile int32_t t49 = 145328860;

	t49 = (x1177<((x1178<x1179)<<x1180));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1201 = INT64_MIN;
	int64_t x1202 = 130537914LL;
	int64_t x1203 = INT64_MIN;
	static uint32_t x1204 = 5U;

	t50 = (x1201<((x1202<x1203)<<x1204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x1225 = -1;
	volatile int64_t x1227 = INT64_MIN;
	uint8_t x1228 = 3U;

	t51 = (x1225<((x1226<x1227)<<x1228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x1253 = INT32_MAX;
	uint8_t x1254 = UINT8_MAX;
	uint16_t x1256 = 1U;
	int32_t t52 = 24;

	t52 = (x1253<((x1254<x1255)<<x1256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1257 = UINT64_MAX;
	static uint8_t x1258 = 50U;
	static volatile int32_t x1259 = INT32_MIN;
	uint8_t x1260 = 2U;

	t53 = (x1257<((x1258<x1259)<<x1260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1265 = -6;
	static uint64_t x1266 = 7LLU;
	int16_t x1268 = 1;
	volatile int32_t t54 = -20484;

	t54 = (x1265<((x1266<x1267)<<x1268));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x1273 = INT64_MIN;
	static int8_t x1274 = -61;
	int8_t x1275 = INT8_MIN;
	int16_t x1276 = 30;
	volatile int32_t t55 = -1961214;

	t55 = (x1273<((x1274<x1275)<<x1276));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1377 = INT32_MIN;
	uint8_t x1378 = 6U;
	uint64_t x1379 = UINT64_MAX;
	int32_t t56 = -60585;

	t56 = (x1377<((x1378<x1379)<<x1380));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x1393 = INT32_MIN;
	int16_t x1395 = -1;
	static int8_t x1396 = 0;
	static int32_t t57 = -11;

	t57 = (x1393<((x1394<x1395)<<x1396));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1405 = 1;
	uint64_t x1406 = 523626716122LLU;
	uint8_t x1408 = 0U;
	volatile int32_t t58 = 65;

	t58 = (x1405<((x1406<x1407)<<x1408));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x1409 = 3641844636400580681LL;
	volatile int32_t x1410 = -417844201;
	static uint64_t x1411 = UINT64_MAX;
	static volatile uint64_t x1412 = 0LLU;

	t59 = (x1409<((x1410<x1411)<<x1412));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1437 = INT64_MAX;
	uint16_t x1438 = 29U;
	static int32_t x1439 = -16170;
	uint16_t x1440 = 5U;

	t60 = (x1437<((x1438<x1439)<<x1440));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x1445 = INT64_MIN;
	static int8_t x1447 = -5;
	static uint8_t x1448 = 6U;

	t61 = (x1445<((x1446<x1447)<<x1448));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x1459 = -1;
	volatile int8_t x1460 = 0;
	static volatile int32_t t62 = 37266;

	t62 = (x1457<((x1458<x1459)<<x1460));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1469 = INT32_MIN;
	int64_t x1470 = 332258LL;
	volatile uint8_t x1472 = 6U;

	t63 = (x1469<((x1470<x1471)<<x1472));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1477 = -1;
	volatile int32_t x1478 = 64;
	int16_t x1479 = 75;
	volatile int32_t t64 = 1009193;

	t64 = (x1477<((x1478<x1479)<<x1480));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x1486 = INT8_MIN;
	volatile int16_t x1487 = INT16_MIN;
	volatile uint32_t x1488 = 28U;
	int32_t t65 = 77;

	t65 = (x1485<((x1486<x1487)<<x1488));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x1541 = 20215061063770LL;
	static uint8_t x1542 = 10U;
	volatile int32_t x1543 = INT32_MIN;
	uint8_t x1544 = 5U;
	volatile int32_t t66 = 7;

	t66 = (x1541<((x1542<x1543)<<x1544));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1569 = INT16_MAX;
	int8_t x1570 = INT8_MIN;
	volatile uint64_t x1571 = UINT64_MAX;
	static int32_t t67 = -3801;

	t67 = (x1569<((x1570<x1571)<<x1572));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1605 = 3322055U;
	static volatile int8_t x1607 = -1;
	int32_t x1608 = 7;
	int32_t t68 = 109261;

	t68 = (x1605<((x1606<x1607)<<x1608));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x1634 = 21;
	volatile int8_t x1636 = 6;
	int32_t t69 = -628;

	t69 = (x1633<((x1634<x1635)<<x1636));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1641 = -1;
	int64_t x1642 = INT64_MAX;
	static int64_t x1643 = -1LL;
	uint8_t x1644 = 0U;
	volatile int32_t t70 = -309186717;

	t70 = (x1641<((x1642<x1643)<<x1644));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1677 = 34U;
	volatile int32_t x1678 = INT32_MAX;
	uint8_t x1680 = 0U;
	volatile int32_t t71 = 12992219;

	t71 = (x1677<((x1678<x1679)<<x1680));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x1689 = INT64_MAX;
	int64_t x1690 = INT64_MAX;
	int8_t x1692 = 0;
	volatile int32_t t72 = 162482506;

	t72 = (x1689<((x1690<x1691)<<x1692));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1705 = INT64_MAX;
	static int8_t x1708 = 1;

	t73 = (x1705<((x1706<x1707)<<x1708));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1733 = INT8_MIN;
	int64_t x1734 = INT64_MAX;
	int16_t x1735 = -1;
	static int8_t x1736 = 2;

	t74 = (x1733<((x1734<x1735)<<x1736));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1753 = -1062431869LL;
	uint8_t x1754 = 3U;
	int16_t x1755 = 0;
	uint8_t x1756 = 1U;

	t75 = (x1753<((x1754<x1755)<<x1756));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1797 = -950;
	int16_t x1798 = INT16_MAX;
	uint64_t x1800 = 0LLU;
	int32_t t76 = -143955;

	t76 = (x1797<((x1798<x1799)<<x1800));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1805 = -1;
	volatile uint8_t x1806 = UINT8_MAX;
	int8_t x1807 = -1;
	int32_t x1808 = 1;

	t77 = (x1805<((x1806<x1807)<<x1808));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x1813 = -1;
	int32_t x1814 = -1;
	static int64_t x1815 = INT64_MIN;
	static int8_t x1816 = 1;
	int32_t t78 = -442110;

	t78 = (x1813<((x1814<x1815)<<x1816));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x1821 = INT16_MAX;
	int8_t x1823 = INT8_MAX;
	static int64_t x1824 = 1LL;
	static int32_t t79 = 64810;

	t79 = (x1821<((x1822<x1823)<<x1824));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x1829 = INT32_MIN;
	int32_t x1831 = INT32_MIN;
	static int8_t x1832 = 6;
	static volatile int32_t t80 = -2346002;

	t80 = (x1829<((x1830<x1831)<<x1832));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x1841 = UINT8_MAX;
	int8_t x1842 = 1;
	uint64_t x1843 = UINT64_MAX;
	volatile uint32_t x1844 = 13U;
	volatile int32_t t81 = -289;

	t81 = (x1841<((x1842<x1843)<<x1844));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x1889 = INT32_MAX;
	int8_t x1890 = -1;
	volatile uint8_t x1892 = 1U;
	volatile int32_t t82 = 9;

	t82 = (x1889<((x1890<x1891)<<x1892));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1921 = 348LLU;
	uint16_t x1922 = 222U;
	uint16_t x1924 = 3U;
	static int32_t t83 = 806;

	t83 = (x1921<((x1922<x1923)<<x1924));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x1941 = UINT64_MAX;
	int8_t x1942 = -1;
	uint32_t x1943 = 2698231U;
	int16_t x1944 = 6;
	volatile int32_t t84 = -102;

	t84 = (x1941<((x1942<x1943)<<x1944));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1945 = UINT8_MAX;
	volatile uint64_t x1946 = 663276867364LLU;
	int8_t x1948 = 0;
	static int32_t t85 = -1;

	t85 = (x1945<((x1946<x1947)<<x1948));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1977 = INT32_MAX;
	int8_t x1978 = -1;
	uint64_t x1979 = UINT64_MAX;
	static uint8_t x1980 = 1U;
	static volatile int32_t t86 = 332107916;

	t86 = (x1977<((x1978<x1979)<<x1980));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2033 = -1;
	uint32_t x2034 = 220798746U;
	uint8_t x2036 = 1U;
	volatile int32_t t87 = -12403165;

	t87 = (x2033<((x2034<x2035)<<x2036));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x2136 = 1;
	int32_t t88 = -91889230;

	t88 = (x2133<((x2134<x2135)<<x2136));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x2169 = INT8_MIN;
	static int8_t x2170 = INT8_MIN;
	int64_t x2171 = INT64_MIN;
	volatile int32_t t89 = 2525;

	t89 = (x2169<((x2170<x2171)<<x2172));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x2205 = 1;
	int8_t x2206 = INT8_MAX;
	static volatile int64_t x2207 = INT64_MIN;
	volatile int16_t x2208 = 18;
	int32_t t90 = -3093165;

	t90 = (x2205<((x2206<x2207)<<x2208));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x2217 = UINT64_MAX;
	uint64_t x2218 = UINT64_MAX;
	int8_t x2219 = 0;
	int16_t x2220 = 14;
	volatile int32_t t91 = 24507765;

	t91 = (x2217<((x2218<x2219)<<x2220));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2237 = INT32_MAX;
	int64_t x2238 = INT64_MIN;
	static uint64_t x2239 = UINT64_MAX;
	volatile int32_t t92 = -433224737;

	t92 = (x2237<((x2238<x2239)<<x2240));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x2249 = INT16_MIN;
	volatile int32_t x2250 = INT32_MIN;
	static int8_t x2251 = INT8_MAX;
	static uint16_t x2252 = 0U;

	t93 = (x2249<((x2250<x2251)<<x2252));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x2375 = UINT8_MAX;
	uint8_t x2376 = 2U;
	int32_t t94 = 31;

	t94 = (x2373<((x2374<x2375)<<x2376));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x2405 = INT64_MAX;
	int8_t x2406 = INT8_MAX;
	int64_t x2407 = INT64_MIN;
	static uint16_t x2408 = 0U;
	static int32_t t95 = -1053;

	t95 = (x2405<((x2406<x2407)<<x2408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x2437 = INT64_MAX;
	int8_t x2438 = -1;
	volatile int8_t x2439 = INT8_MAX;
	volatile int32_t t96 = -462694065;

	t96 = (x2437<((x2438<x2439)<<x2440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2449 = UINT32_MAX;
	static int16_t x2450 = 113;
	int8_t x2452 = 2;
	static volatile int32_t t97 = -26260;

	t97 = (x2449<((x2450<x2451)<<x2452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x2481 = -1;
	int64_t x2482 = -7334LL;
	volatile int16_t x2483 = INT16_MAX;
	static int32_t t98 = -150268048;

	t98 = (x2481<((x2482<x2483)<<x2484));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2497 = INT8_MIN;
	int8_t x2498 = -6;
	volatile int32_t t99 = 47303;

	t99 = (x2497<((x2498<x2499)<<x2500));

	if (t99 != 1) { NG(); } else { ; }
	
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

