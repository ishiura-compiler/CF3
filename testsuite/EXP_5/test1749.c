#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x15 = 1U;
int8_t x18 = -2;
static int64_t x29 = INT64_MAX;
int16_t x51 = INT16_MIN;
volatile uint16_t x75 = 8U;
volatile int32_t t6 = -21027;
int64_t x84 = -7687023325593676LL;
uint8_t x114 = UINT8_MAX;
volatile uint64_t x115 = 296LLU;
int32_t t12 = 2371882;
int16_t x192 = 14002;
int32_t t13 = -22264997;
int32_t x194 = INT32_MIN;
int32_t x222 = -1;
volatile int32_t t15 = -56272;
static int8_t x240 = 6;
uint16_t x253 = 1U;
int32_t t18 = -414;
uint64_t x293 = 39651134650920LLU;
int32_t x294 = INT32_MAX;
int64_t x304 = 153534245210LL;
int32_t t21 = 101;
uint16_t x329 = 1U;
uint8_t x330 = 2U;
static uint16_t x353 = UINT16_MAX;
int8_t x354 = 25;
static uint32_t x355 = 1630249U;
static volatile int32_t t23 = 571577319;
int16_t x359 = 13;
int32_t x390 = -1;
volatile int32_t t26 = 146559101;
volatile uint16_t x411 = 1U;
int64_t x438 = INT64_MIN;
int64_t x440 = INT64_MIN;
volatile int32_t x443 = -1276;
int32_t t30 = 4;
uint32_t x469 = 1U;
int8_t x472 = INT8_MIN;
static int32_t x483 = 150907801;
volatile int32_t t33 = -1114;
static uint64_t x485 = 919LLU;
uint8_t x561 = 99U;
int16_t x563 = INT16_MAX;
int16_t x582 = INT16_MAX;
uint64_t t40 = 31080LLU;
volatile int64_t x590 = INT64_MIN;
int32_t t41 = INT32_MAX;
static int32_t x595 = INT32_MIN;
uint16_t x613 = 10U;
uint16_t x664 = 7U;
static uint32_t x761 = 194420U;
uint64_t x810 = 188LLU;
static uint8_t x830 = 4U;
int32_t x836 = -1;
int16_t x855 = INT16_MIN;
static uint64_t x861 = 231846999LLU;
uint8_t x865 = 1U;
int16_t x866 = 0;
int64_t x883 = -10163092223816LL;
volatile uint64_t x899 = 32084059851716LLU;
volatile uint8_t x921 = 6U;
volatile int8_t x922 = 1;
static volatile int64_t t59 = -235358934711751294LL;
static uint8_t x948 = UINT8_MAX;
int32_t x1013 = INT32_MAX;
int32_t x1015 = -1;
static volatile int16_t x1016 = INT16_MIN;
static int32_t t63 = -75502794;
static volatile int64_t x1020 = -1LL;
static uint16_t x1025 = UINT16_MAX;
int8_t x1028 = -1;
int64_t x1039 = INT64_MIN;
static int32_t t68 = -75903001;
int64_t x1043 = INT64_MIN;
static volatile int64_t x1066 = INT64_MAX;
int32_t x1068 = -1;
int8_t x1083 = -1;
uint16_t x1106 = 6U;
int16_t x1144 = 5;
int64_t x1165 = 381787LL;
int16_t x1207 = INT16_MAX;
volatile int32_t t78 = 0;
int64_t x1209 = INT64_MAX;
int32_t x1212 = -18270346;
volatile int32_t t80 = 88;
volatile int8_t x1247 = 20;
int64_t x1248 = 27LL;
static uint32_t t82 = UINT32_MAX;
int64_t t84 = -592053227301LL;
int64_t x1312 = INT64_MIN;
int32_t x1324 = -13878651;
uint16_t x1367 = UINT16_MAX;
static uint64_t x1387 = 34009421LLU;
volatile int8_t x1388 = 7;
int8_t x1389 = INT8_MAX;
uint16_t x1392 = 2U;
volatile int32_t t95 = -3300221;
static volatile uint64_t x1397 = 11318LLU;
static int8_t x1401 = INT8_MAX;
volatile int8_t x1452 = 34;
static volatile uint32_t t98 = 115U;
int64_t x1454 = INT64_MIN;


void f0(void) {
	uint32_t x5 = 2U;
	int32_t x6 = -1;
	static uint32_t x7 = 3U;
	static volatile int64_t x8 = INT64_MIN;
	volatile uint32_t t0 = 1055821U;

	t0 = (x5>>((x6&x7)%x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = 1129;
	volatile int16_t x14 = -1;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t1 = -251245;

	t1 = (x13>>((x14&x15)%x16));

	if (t1 != 564) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x19 = INT64_MAX;
	int64_t x20 = -1LL;
	volatile int32_t t2 = -7145;

	t2 = (x17>>((x18&x19)%x20));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x30 = INT8_MIN;
	volatile int32_t x31 = 779411810;
	volatile uint8_t x32 = 30U;
	int64_t t3 = -89LL;

	t3 = (x29>>((x30&x31)%x32));

	if (t3 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = 398605974610310LLU;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = -1;
	static int8_t x36 = -1;
	static volatile uint64_t t4 = 46606103242LLU;

	t4 = (x33>>((x34&x35)%x36));

	if (t4 != 398605974610310LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x49 = 3499;
	volatile int32_t x50 = -1;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t5 = -567893273;

	t5 = (x49>>((x50&x51)%x52));

	if (t5 != 3499) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x73 = 1;
	int32_t x74 = INT32_MIN;
	uint8_t x76 = UINT8_MAX;

	t6 = (x73>>((x74&x75)%x76));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x81 = 35874974U;
	int16_t x82 = 3;
	int16_t x83 = INT16_MIN;
	static uint32_t t7 = 0U;

	t7 = (x81>>((x82&x83)%x84));

	if (t7 != 35874974U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x113 = UINT32_MAX;
	volatile int16_t x116 = 13;
	volatile uint32_t t8 = 580885U;

	t8 = (x113>>((x114&x115)%x116));

	if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x121 = 4U;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MAX;
	volatile int8_t x124 = INT8_MIN;
	static volatile int32_t t9 = -582219;

	t9 = (x121>>((x122&x123)%x124));

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x125 = 1565265085326LL;
	static uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile int64_t t10 = 166112433655368LL;

	t10 = (x125>>((x126&x127)%x128));

	if (t10 != 1565265085326LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x177 = 43;
	static uint64_t x178 = UINT64_MAX;
	static volatile int8_t x179 = -1;
	int8_t x180 = -1;
	static volatile int32_t t11 = -175;

	t11 = (x177>>((x178&x179)%x180));

	if (t11 != 43) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x181 = 94U;
	volatile int64_t x182 = -127226LL;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;

	t12 = (x181>>((x182&x183)%x184));

	if (t12 != 94) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x190 = 889457U;
	int32_t x191 = INT32_MIN;

	t13 = (x189>>((x190&x191)%x192));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x193 = 1;
	uint16_t x195 = UINT16_MAX;
	volatile int64_t x196 = INT64_MIN;
	static volatile int32_t t14 = 1;

	t14 = (x193>>((x194&x195)%x196));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x221 = 0;
	int32_t x223 = INT32_MAX;
	volatile int16_t x224 = -1;

	t15 = (x221>>((x222&x223)%x224));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x238 = 73506822LL;
	int32_t x239 = INT32_MIN;
	int32_t t16 = -93;

	t16 = (x237>>((x238&x239)%x240));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x245 = 85U;
	uint8_t x246 = 23U;
	volatile int32_t x247 = -109698;
	int32_t x248 = INT32_MAX;
	static int32_t t17 = 626468;

	t17 = (x245>>((x246&x247)%x248));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x254 = 1;
	volatile int16_t x255 = 4;
	int32_t x256 = 24149022;

	t18 = (x253>>((x254&x255)%x256));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x295 = 21U;
	static int8_t x296 = INT8_MAX;
	volatile uint64_t t19 = 175898297529586LLU;

	t19 = (x293>>((x294&x295)%x296));

	if (t19 != 18907134LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = -1;
	uint8_t x303 = 14U;
	int32_t t20 = 1;

	t20 = (x301>>((x302&x303)%x304));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x317 = UINT8_MAX;
	int16_t x318 = 1;
	int8_t x319 = INT8_MIN;
	volatile int8_t x320 = INT8_MIN;

	t21 = (x317>>((x318&x319)%x320));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x331 = INT32_MAX;
	static uint64_t x332 = 835300278016250827LLU;
	volatile int32_t t22 = -248914;

	t22 = (x329>>((x330&x331)%x332));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x356 = INT64_MIN;

	t23 = (x353>>((x354&x355)%x356));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x357 = 331046670830LLU;
	int64_t x358 = 11LL;
	int64_t x360 = -22117089713LL;
	uint64_t t24 = 3LLU;

	t24 = (x357>>((x358&x359)%x360));

	if (t24 != 646575528LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x389 = INT32_MAX;
	volatile int64_t x391 = INT64_MIN;
	static volatile int64_t x392 = -1LL;
	volatile int32_t t25 = INT32_MAX;

	t25 = (x389>>((x390&x391)%x392));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x393 = 13U;
	static uint8_t x394 = 6U;
	int32_t x395 = -1;
	int32_t x396 = 36;

	t26 = (x393>>((x394&x395)%x396));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x401 = 3U;
	static int32_t x402 = INT32_MIN;
	int64_t x403 = -5374879119LL;
	int8_t x404 = -1;
	static uint32_t t27 = 15941U;

	t27 = (x401>>((x402&x403)%x404));

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x409 = 45U;
	int16_t x410 = -570;
	int16_t x412 = -1;
	int32_t t28 = 19;

	t28 = (x409>>((x410&x411)%x412));

	if (t28 != 45) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x437 = 26U;
	uint64_t x439 = 5LLU;
	static int32_t t29 = 520603;

	t29 = (x437>>((x438&x439)%x440));

	if (t29 != 26) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x441 = INT8_MAX;
	static uint8_t x442 = 0U;
	uint32_t x444 = 727U;

	t30 = (x441>>((x442&x443)%x444));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x445 = UINT64_MAX;
	static volatile int8_t x446 = INT8_MAX;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = INT8_MAX;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x445>>((x446&x447)%x448));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x470 = -1;
	uint8_t x471 = 0U;
	static uint32_t t32 = 3663U;

	t32 = (x469>>((x470&x471)%x472));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x481 = 6941U;
	int64_t x482 = INT64_MAX;
	int8_t x484 = INT8_MIN;

	t33 = (x481>>((x482&x483)%x484));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x486 = -1LL;
	int8_t x487 = 0;
	static int8_t x488 = -1;
	static uint64_t t34 = 5606LLU;

	t34 = (x485>>((x486&x487)%x488));

	if (t34 != 919LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x505 = 387090135483LLU;
	int64_t x506 = 1170319613627LL;
	int8_t x507 = INT8_MIN;
	static uint8_t x508 = 10U;
	volatile uint64_t t35 = 115LLU;

	t35 = (x505>>((x506&x507)%x508));

	if (t35 != 1512070841LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x517 = INT32_MAX;
	int32_t x518 = -1;
	volatile int32_t x519 = INT32_MIN;
	volatile int16_t x520 = 1;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x517>>((x518&x519)%x520));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x525 = UINT32_MAX;
	uint16_t x526 = UINT16_MAX;
	static volatile int64_t x527 = INT64_MIN;
	int32_t x528 = -1;
	uint32_t t37 = UINT32_MAX;

	t37 = (x525>>((x526&x527)%x528));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x562 = -388;
	static volatile int8_t x564 = 16;
	volatile int32_t t38 = -1063108080;

	t38 = (x561>>((x562&x563)%x564));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x581 = INT32_MAX;
	volatile int64_t x583 = INT64_MIN;
	static volatile uint16_t x584 = 86U;
	volatile int32_t t39 = INT32_MAX;

	t39 = (x581>>((x582&x583)%x584));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x585 = 5330159421LLU;
	static uint16_t x586 = 8U;
	uint16_t x587 = 110U;
	int32_t x588 = INT32_MIN;

	t40 = (x585>>((x586&x587)%x588));

	if (t40 != 20820935LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x589 = INT32_MAX;
	static int64_t x591 = INT64_MIN;
	volatile int32_t x592 = -1;

	t41 = (x589>>((x590&x591)%x592));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x593 = UINT8_MAX;
	int64_t x594 = -1LL;
	int32_t x596 = INT32_MIN;
	static int32_t t42 = 29257;

	t42 = (x593>>((x594&x595)%x596));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x614 = INT32_MIN;
	int8_t x615 = INT8_MIN;
	int32_t x616 = -1;
	int32_t t43 = 1045359410;

	t43 = (x613>>((x614&x615)%x616));

	if (t43 != 10) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x661 = 123U;
	volatile uint32_t x662 = 70217U;
	static volatile int32_t x663 = -9284;
	int32_t t44 = -23471967;

	t44 = (x661>>((x662&x663)%x664));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x713 = 317;
	volatile uint64_t x714 = 124LLU;
	uint8_t x715 = UINT8_MAX;
	int16_t x716 = 96;
	int32_t t45 = -3;

	t45 = (x713>>((x714&x715)%x716));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x741 = 9;
	uint8_t x742 = UINT8_MAX;
	int16_t x743 = -1;
	int32_t x744 = -1;
	int32_t t46 = 7;

	t46 = (x741>>((x742&x743)%x744));

	if (t46 != 9) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x762 = INT16_MIN;
	volatile int32_t x763 = INT32_MAX;
	uint8_t x764 = 31U;
	uint32_t t47 = 53166U;

	t47 = (x761>>((x762&x763)%x764));

	if (t47 != 97210U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x805 = UINT64_MAX;
	uint16_t x806 = 6U;
	uint32_t x807 = UINT32_MAX;
	int8_t x808 = 1;
	uint64_t t48 = UINT64_MAX;

	t48 = (x805>>((x806&x807)%x808));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x809 = 53;
	volatile int32_t x811 = INT32_MIN;
	volatile int32_t x812 = -2759;
	static volatile int32_t t49 = 29982550;

	t49 = (x809>>((x810&x811)%x812));

	if (t49 != 53) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x829 = 39U;
	uint8_t x831 = UINT8_MAX;
	static int64_t x832 = INT64_MAX;
	int32_t t50 = 19462970;

	t50 = (x829>>((x830&x831)%x832));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x833 = INT32_MAX;
	int32_t x834 = INT32_MIN;
	volatile int8_t x835 = INT8_MIN;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x833>>((x834&x835)%x836));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x853 = 58U;
	static uint32_t x854 = 13U;
	int16_t x856 = INT16_MAX;
	volatile int32_t t52 = 2709567;

	t52 = (x853>>((x854&x855)%x856));

	if (t52 != 58) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x862 = 6U;
	static int64_t x863 = -1LL;
	int8_t x864 = -1;
	volatile uint64_t t53 = 1123520542786137LLU;

	t53 = (x861>>((x862&x863)%x864));

	if (t53 != 231846999LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x867 = 979;
	int8_t x868 = -1;
	int32_t t54 = 14707424;

	t54 = (x865>>((x866&x867)%x868));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x881 = INT8_MAX;
	uint16_t x882 = 8U;
	static int8_t x884 = -1;
	static int32_t t55 = -29;

	t55 = (x881>>((x882&x883)%x884));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x897 = 422950138034379LLU;
	uint8_t x898 = 17U;
	static int8_t x900 = -58;
	uint64_t t56 = 2695888983428409LLU;

	t56 = (x897>>((x898&x899)%x900));

	if (t56 != 422950138034379LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x917 = 34U;
	int64_t x918 = INT64_MAX;
	int64_t x919 = -1LL;
	uint16_t x920 = 468U;
	volatile int32_t t57 = 0;

	t57 = (x917>>((x918&x919)%x920));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x923 = -1LL;
	uint32_t x924 = 2058U;
	int32_t t58 = 2489;

	t58 = (x921>>((x922&x923)%x924));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x925 = 179935654190LL;
	static int64_t x926 = INT64_MIN;
	int64_t x927 = INT64_MAX;
	int32_t x928 = 12;

	t59 = (x925>>((x926&x927)%x928));

	if (t59 != 179935654190LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x945 = INT64_MAX;
	volatile int32_t x946 = 0;
	int64_t x947 = -10LL;
	volatile int64_t t60 = INT64_MAX;

	t60 = (x945>>((x946&x947)%x948));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x969 = 2;
	int32_t x970 = -889396;
	int64_t x971 = INT64_MAX;
	int16_t x972 = 9;
	volatile int32_t t61 = 67;

	t61 = (x969>>((x970&x971)%x972));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x1005 = INT32_MAX;
	uint8_t x1006 = 14U;
	uint32_t x1007 = 1046U;
	int64_t x1008 = INT64_MIN;
	int32_t t62 = 7;

	t62 = (x1005>>((x1006&x1007)%x1008));

	if (t62 != 33554431) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1014 = 1LLU;

	t63 = (x1013>>((x1014&x1015)%x1016));

	if (t63 != 1073741823) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1017 = 1;
	uint16_t x1018 = 385U;
	static volatile int64_t x1019 = INT64_MIN;
	static int32_t t64 = -328233;

	t64 = (x1017>>((x1018&x1019)%x1020));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1021 = 45;
	int16_t x1022 = INT16_MIN;
	uint64_t x1023 = UINT64_MAX;
	int16_t x1024 = INT16_MIN;
	int32_t t65 = -120981;

	t65 = (x1021>>((x1022&x1023)%x1024));

	if (t65 != 45) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1026 = 1U;
	int64_t x1027 = -55724LL;
	volatile int32_t t66 = 6495;

	t66 = (x1025>>((x1026&x1027)%x1028));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x1029 = 0;
	volatile int16_t x1030 = INT16_MIN;
	volatile uint8_t x1031 = 0U;
	volatile int64_t x1032 = -48LL;
	volatile int32_t t67 = -505;

	t67 = (x1029>>((x1030&x1031)%x1032));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x1037 = 2;
	uint32_t x1038 = UINT32_MAX;
	static volatile uint8_t x1040 = 4U;

	t68 = (x1037>>((x1038&x1039)%x1040));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1041 = INT16_MAX;
	uint8_t x1042 = 2U;
	int8_t x1044 = -1;
	int32_t t69 = -612337;

	t69 = (x1041>>((x1042&x1043)%x1044));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x1065 = 3525930LLU;
	volatile uint32_t x1067 = 917878U;
	volatile uint64_t t70 = 6LLU;

	t70 = (x1065>>((x1066&x1067)%x1068));

	if (t70 != 3525930LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x1081 = 264621010628LLU;
	static int16_t x1082 = INT16_MAX;
	int8_t x1084 = -7;
	static volatile uint64_t t71 = 10064522955109252LLU;

	t71 = (x1081>>((x1082&x1083)%x1084));

	if (t71 != 264621010628LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1101 = 44886;
	int64_t x1102 = INT64_MAX;
	volatile int8_t x1103 = INT8_MIN;
	int8_t x1104 = -1;
	int32_t t72 = -24;

	t72 = (x1101>>((x1102&x1103)%x1104));

	if (t72 != 44886) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1105 = 0;
	int16_t x1107 = INT16_MAX;
	int32_t x1108 = INT32_MAX;
	volatile int32_t t73 = 1329;

	t73 = (x1105>>((x1106&x1107)%x1108));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1121 = 2U;
	uint32_t x1122 = 8679837U;
	int8_t x1123 = 0;
	uint32_t x1124 = UINT32_MAX;
	static volatile uint32_t t74 = 211U;

	t74 = (x1121>>((x1122&x1123)%x1124));

	if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1141 = 64665147LLU;
	volatile int32_t x1142 = 168043296;
	static uint32_t x1143 = 109U;
	uint64_t t75 = 59419239090959LLU;

	t75 = (x1141>>((x1142&x1143)%x1144));

	if (t75 != 16166286LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1157 = 11980018005LLU;
	int8_t x1158 = 0;
	int32_t x1159 = 760;
	int16_t x1160 = -1;
	volatile uint64_t t76 = 36785LLU;

	t76 = (x1157>>((x1158&x1159)%x1160));

	if (t76 != 11980018005LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1166 = INT64_MIN;
	int16_t x1167 = 3148;
	int64_t x1168 = INT64_MIN;
	volatile int64_t t77 = -210696LL;

	t77 = (x1165>>((x1166&x1167)%x1168));

	if (t77 != 381787LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1205 = 44U;
	uint64_t x1206 = 857298621583921LLU;
	uint8_t x1208 = 4U;

	t78 = (x1205>>((x1206&x1207)%x1208));

	if (t78 != 22) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1210 = UINT8_MAX;
	int16_t x1211 = INT16_MIN;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x1209>>((x1210&x1211)%x1212));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1217 = 445U;
	static uint8_t x1218 = 0U;
	static int32_t x1219 = INT32_MAX;
	int16_t x1220 = -1;

	t80 = (x1217>>((x1218&x1219)%x1220));

	if (t80 != 445) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1225 = 3U;
	uint8_t x1226 = UINT8_MAX;
	int32_t x1227 = INT32_MIN;
	int16_t x1228 = 3317;
	volatile int32_t t81 = 0;

	t81 = (x1225>>((x1226&x1227)%x1228));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1245 = UINT32_MAX;
	int64_t x1246 = INT64_MIN;

	t82 = (x1245>>((x1246&x1247)%x1248));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1281 = INT32_MAX;
	volatile int64_t x1282 = INT64_MAX;
	uint32_t x1283 = 50751423U;
	static int64_t x1284 = -1LL;
	volatile int32_t t83 = INT32_MAX;

	t83 = (x1281>>((x1282&x1283)%x1284));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1289 = INT64_MAX;
	uint16_t x1290 = 3020U;
	static int8_t x1291 = 6;
	uint64_t x1292 = UINT64_MAX;

	t84 = (x1289>>((x1290&x1291)%x1292));

	if (t84 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1293 = 164548068LLU;
	int8_t x1294 = 0;
	int64_t x1295 = 4261539474717LL;
	uint32_t x1296 = 65004438U;
	volatile uint64_t t85 = 555032LLU;

	t85 = (x1293>>((x1294&x1295)%x1296));

	if (t85 != 164548068LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1305 = 258891;
	static uint8_t x1306 = 28U;
	uint32_t x1307 = UINT32_MAX;
	static int32_t x1308 = INT32_MAX;
	volatile int32_t t86 = 53958;

	t86 = (x1305>>((x1306&x1307)%x1308));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x1309 = 9;
	int16_t x1310 = INT16_MIN;
	static volatile uint16_t x1311 = 29U;
	int32_t t87 = -204328;

	t87 = (x1309>>((x1310&x1311)%x1312));

	if (t87 != 9) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1321 = 20636LLU;
	int64_t x1322 = 19937268LL;
	volatile int16_t x1323 = 0;
	uint64_t t88 = 12LLU;

	t88 = (x1321>>((x1322&x1323)%x1324));

	if (t88 != 20636LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1349 = 39U;
	int32_t x1350 = INT32_MAX;
	volatile int16_t x1351 = 0;
	int8_t x1352 = 13;
	int32_t t89 = 1;

	t89 = (x1349>>((x1350&x1351)%x1352));

	if (t89 != 39) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1361 = UINT16_MAX;
	int64_t x1362 = INT64_MIN;
	int8_t x1363 = INT8_MAX;
	uint32_t x1364 = 7228493U;
	static volatile int32_t t90 = -4;

	t90 = (x1361>>((x1362&x1363)%x1364));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x1365 = INT64_MAX;
	static int64_t x1366 = INT64_MIN;
	int32_t x1368 = INT32_MIN;
	int64_t t91 = INT64_MAX;

	t91 = (x1365>>((x1366&x1367)%x1368));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x1373 = 262018381LL;
	static int32_t x1374 = INT32_MAX;
	int32_t x1375 = INT32_MIN;
	int8_t x1376 = INT8_MAX;
	int64_t t92 = 2025440192613LL;

	t92 = (x1373>>((x1374&x1375)%x1376));

	if (t92 != 262018381LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1381 = INT64_MAX;
	static int64_t x1382 = -751781529LL;
	int32_t x1383 = 3;
	volatile int64_t x1384 = INT64_MIN;
	int64_t t93 = 667LL;

	t93 = (x1381>>((x1382&x1383)%x1384));

	if (t93 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1385 = 0U;
	volatile int32_t x1386 = INT32_MAX;
	volatile int32_t t94 = 10853799;

	t94 = (x1385>>((x1386&x1387)%x1388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1390 = -1LL;
	volatile int16_t x1391 = INT16_MAX;

	t95 = (x1389>>((x1390&x1391)%x1392));

	if (t95 != 63) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1398 = 10;
	static int16_t x1399 = -1;
	int32_t x1400 = -1;
	volatile uint64_t t96 = 9887367613910LLU;

	t96 = (x1397>>((x1398&x1399)%x1400));

	if (t96 != 11318LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1402 = 17697269U;
	uint8_t x1403 = 4U;
	int16_t x1404 = -3;
	volatile int32_t t97 = 8334797;

	t97 = (x1401>>((x1402&x1403)%x1404));

	if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1449 = 397020U;
	int64_t x1450 = 8241LL;
	int64_t x1451 = INT64_MAX;

	t98 = (x1449>>((x1450&x1451)%x1452));

	if (t98 != 48U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1453 = INT32_MAX;
	static volatile int64_t x1455 = INT64_MAX;
	int16_t x1456 = -3;
	int32_t t99 = INT32_MAX;

	t99 = (x1453>>((x1454&x1455)%x1456));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

