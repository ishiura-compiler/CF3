#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 7U;
int32_t t1 = 109;
static volatile int8_t x64 = 0;
uint64_t x94 = 4192972332261442806LLU;
static int32_t t4 = INT32_MAX;
int16_t x102 = INT16_MIN;
volatile uint8_t x103 = UINT8_MAX;
int32_t t10 = 39978403;
int16_t x145 = INT16_MAX;
uint32_t x157 = 1302049109U;
static int16_t x158 = -1;
uint32_t x177 = 1977225U;
uint64_t x178 = 2497374LLU;
volatile int32_t x179 = INT32_MIN;
volatile uint32_t x197 = UINT32_MAX;
static int64_t x198 = -1LL;
volatile int8_t x209 = 1;
int16_t x211 = INT16_MAX;
uint8_t x224 = UINT8_MAX;
int8_t x229 = INT8_MAX;
int64_t x266 = INT64_MAX;
uint32_t x281 = UINT32_MAX;
static int64_t x335 = -142LL;
static int64_t x378 = 670460035528127LL;
int32_t t25 = 0;
static int16_t x387 = INT16_MIN;
static uint64_t x397 = UINT64_MAX;
int16_t x401 = 3;
uint8_t x421 = UINT8_MAX;
int16_t x423 = -1;
int64_t x424 = 39478LL;
static int16_t x425 = INT16_MAX;
uint64_t x428 = 3999567LLU;
uint16_t x467 = 30U;
uint32_t x477 = 52U;
int16_t x491 = INT16_MIN;
int8_t x492 = -1;
uint64_t x504 = 9535223160LLU;
uint64_t t36 = 24460444LLU;
volatile int64_t x524 = INT64_MAX;
int32_t t40 = 9481541;
volatile int16_t x582 = INT16_MIN;
volatile int32_t t42 = -497;
volatile int64_t x631 = INT64_MIN;
static volatile uint64_t t44 = UINT64_MAX;
volatile int32_t t46 = 15;
uint32_t x667 = 3741U;
int32_t t47 = 0;
int16_t x684 = INT16_MAX;
static uint8_t x689 = 32U;
static volatile int32_t x692 = INT32_MIN;
int32_t t50 = 824402812;
static uint64_t x702 = 33385272165771217LLU;
int8_t x704 = 0;
int16_t x726 = -1958;
int16_t x757 = INT16_MAX;
volatile int32_t t54 = 1808346;
int64_t x763 = INT64_MIN;
int16_t x774 = INT16_MIN;
int64_t x784 = -1LL;
uint32_t x837 = 9637526U;
static int32_t x838 = 6;
volatile uint8_t x866 = 45U;
volatile uint32_t x882 = 5393152U;
uint8_t x884 = UINT8_MAX;
int32_t x891 = INT32_MIN;
static int64_t x897 = INT64_MAX;
static uint8_t x898 = UINT8_MAX;
int64_t x899 = INT64_MIN;
static uint64_t x925 = 1577842178LLU;
volatile uint64_t x937 = 23875568608406LLU;
int64_t x939 = INT64_MIN;
uint8_t x945 = 18U;
uint8_t x948 = 5U;
uint64_t t69 = UINT64_MAX;
int16_t x990 = 643;
int16_t x1014 = -1;
int32_t x1017 = 1;
int32_t x1019 = -119;
int32_t t75 = -4;
static int8_t x1039 = 0;
uint64_t x1040 = UINT64_MAX;
static uint64_t t76 = 760794383LLU;
int64_t x1055 = INT64_MAX;
uint8_t x1096 = 9U;
static volatile uint8_t x1105 = 49U;
static int8_t x1107 = 57;
uint16_t x1108 = 629U;
static int64_t x1120 = INT64_MAX;
volatile int32_t t81 = 782431211;
uint32_t x1153 = UINT32_MAX;
int16_t x1154 = -1;
uint64_t x1181 = UINT64_MAX;
static int64_t x1189 = INT64_MAX;
uint8_t x1191 = 48U;
uint16_t x1224 = UINT16_MAX;
static volatile uint32_t t87 = UINT32_MAX;
uint32_t x1237 = UINT32_MAX;
int8_t x1255 = INT8_MIN;
static uint8_t x1261 = UINT8_MAX;
static int16_t x1313 = INT16_MAX;
int64_t x1316 = INT64_MAX;
volatile uint64_t t94 = 4464635LLU;
int32_t x1345 = 3733;
int64_t x1393 = INT64_MAX;


void f0(void) {
	uint16_t x1 = 187U;
	int16_t x2 = -13;
	int8_t x3 = -1;
	int32_t x4 = -1;
	int32_t t0 = -35663634;

	t0 = (x1>>(x2%(x3<=x4)));

	if (t0 != 187) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = 23LL;
	int64_t x7 = -1LL;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5>>(x6%(x7<=x8)));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x17 = INT32_MAX;
	uint32_t x18 = 1U;
	int8_t x19 = -1;
	static volatile int64_t x20 = -1LL;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x17>>(x18%(x19<=x20)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x61 = 63U;
	volatile int16_t x62 = INT16_MIN;
	volatile int64_t x63 = INT64_MIN;
	static volatile int32_t t3 = -940;

	t3 = (x61>>(x62%(x63<=x64)));

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x93 = INT32_MAX;
	static int16_t x95 = -1;
	uint16_t x96 = 3774U;

	t4 = (x93>>(x94%(x95<=x96)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x101 = 26134480340878637LLU;
	static uint32_t x104 = 1438U;
	uint64_t t5 = 4831LLU;

	t5 = (x101>>(x102%(x103<=x104)));

	if (t5 != 26134480340878637LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x117 = 11U;
	static uint64_t x118 = 5600LLU;
	uint64_t x119 = UINT64_MAX;
	static uint64_t x120 = UINT64_MAX;
	volatile int32_t t6 = 203145;

	t6 = (x117>>(x118%(x119<=x120)));

	if (t6 != 11) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x121 = INT8_MAX;
	volatile int64_t x122 = INT64_MAX;
	int8_t x123 = -15;
	static volatile int16_t x124 = -1;
	static int32_t t7 = 1;

	t7 = (x121>>(x122%(x123<=x124)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x125 = 43U;
	int8_t x126 = -1;
	volatile int8_t x127 = INT8_MAX;
	uint32_t x128 = 12190904U;
	volatile int32_t t8 = 1689;

	t8 = (x125>>(x126%(x127<=x128)));

	if (t8 != 43) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x137 = 200U;
	static int64_t x138 = -1648625429118793LL;
	uint64_t x139 = 1856LLU;
	volatile int32_t x140 = INT32_MAX;
	uint32_t t9 = 186U;

	t9 = (x137>>(x138%(x139<=x140)));

	if (t9 != 200U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x141 = 1;
	int8_t x142 = INT8_MIN;
	int16_t x143 = -58;
	uint16_t x144 = 2199U;

	t10 = (x141>>(x142%(x143<=x144)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x146 = 1120;
	static int64_t x147 = 7206LL;
	volatile int16_t x148 = INT16_MAX;
	int32_t t11 = 12580;

	t11 = (x145>>(x146%(x147<=x148)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x159 = INT16_MIN;
	uint16_t x160 = 0U;
	uint32_t t12 = 3U;

	t12 = (x157>>(x158%(x159<=x160)));

	if (t12 != 1302049109U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x180 = 1;
	uint32_t t13 = 103017U;

	t13 = (x177>>(x178%(x179<=x180)));

	if (t13 != 1977225U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x189 = 1;
	static int16_t x190 = INT16_MAX;
	static int16_t x191 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t14 = 53407718;

	t14 = (x189>>(x190%(x191<=x192)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x199 = INT32_MIN;
	static int32_t x200 = INT32_MIN;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = (x197>>(x198%(x199<=x200)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x210 = 15322U;
	volatile int16_t x212 = INT16_MAX;
	static volatile int32_t t16 = -13;

	t16 = (x209>>(x210%(x211<=x212)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x221 = 20U;
	int64_t x222 = 90054872571LL;
	volatile int32_t x223 = INT32_MIN;
	int32_t t17 = -8009690;

	t17 = (x221>>(x222%(x223<=x224)));

	if (t17 != 20) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x230 = 303;
	static int16_t x231 = -27;
	int16_t x232 = 0;
	volatile int32_t t18 = 10438256;

	t18 = (x229>>(x230%(x231<=x232)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x265 = 337733U;
	int8_t x267 = -1;
	uint16_t x268 = 45U;
	static uint32_t t19 = 275142U;

	t19 = (x265>>(x266%(x267<=x268)));

	if (t19 != 337733U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x269 = INT64_MAX;
	int8_t x270 = INT8_MIN;
	uint8_t x271 = 8U;
	uint16_t x272 = UINT16_MAX;
	volatile int64_t t20 = INT64_MAX;

	t20 = (x269>>(x270%(x271<=x272)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x282 = INT8_MIN;
	static volatile int16_t x283 = INT16_MIN;
	int64_t x284 = -1LL;
	uint32_t t21 = UINT32_MAX;

	t21 = (x281>>(x282%(x283<=x284)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x321 = INT64_MAX;
	volatile uint64_t x322 = 16388546466936995LLU;
	uint32_t x323 = 7926723U;
	volatile int16_t x324 = INT16_MIN;
	static volatile int64_t t22 = INT64_MAX;

	t22 = (x321>>(x322%(x323<=x324)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x333 = 1329U;
	volatile int8_t x334 = 1;
	volatile int64_t x336 = -1LL;
	static volatile uint32_t t23 = 892U;

	t23 = (x333>>(x334%(x335<=x336)));

	if (t23 != 1329U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x369 = 3U;
	uint16_t x370 = 5599U;
	int16_t x371 = INT16_MIN;
	static volatile uint32_t x372 = UINT32_MAX;
	uint32_t t24 = 152U;

	t24 = (x369>>(x370%(x371<=x372)));

	if (t24 != 3U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x377 = 60475;
	uint8_t x379 = UINT8_MAX;
	volatile uint32_t x380 = UINT32_MAX;

	t25 = (x377>>(x378%(x379<=x380)));

	if (t25 != 60475) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x385 = 3U;
	int64_t x386 = -1LL;
	int64_t x388 = 94LL;
	int32_t t26 = 241583451;

	t26 = (x385>>(x386%(x387<=x388)));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x398 = -391049457LL;
	uint8_t x399 = UINT8_MAX;
	int16_t x400 = 5479;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x397>>(x398%(x399<=x400)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = INT64_MIN;
	int32_t x404 = 1;
	int32_t t28 = -260;

	t28 = (x401>>(x402%(x403<=x404)));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x409 = 16U;
	uint32_t x410 = UINT32_MAX;
	uint64_t x411 = 36777870245456900LLU;
	uint64_t x412 = UINT64_MAX;
	int32_t t29 = 20869;

	t29 = (x409>>(x410%(x411<=x412)));

	if (t29 != 16) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x422 = 60U;
	volatile int32_t t30 = -10101353;

	t30 = (x421>>(x422%(x423<=x424)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x426 = 1543U;
	static int8_t x427 = 5;
	int32_t t31 = 7025;

	t31 = (x425>>(x426%(x427<=x428)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x449 = INT16_MAX;
	int8_t x450 = 7;
	static int32_t x451 = INT32_MIN;
	static volatile int8_t x452 = -1;
	volatile int32_t t32 = 1006;

	t32 = (x449>>(x450%(x451<=x452)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x465 = UINT16_MAX;
	volatile int64_t x466 = 0LL;
	int64_t x468 = INT64_MAX;
	volatile int32_t t33 = -25108;

	t33 = (x465>>(x466%(x467<=x468)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x478 = -1;
	static int8_t x479 = 1;
	int32_t x480 = 1165409;
	uint32_t t34 = 845204998U;

	t34 = (x477>>(x478%(x479<=x480)));

	if (t34 != 52U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x489 = 972990078585684065LLU;
	volatile int32_t x490 = 237;
	uint64_t t35 = 51679647635LLU;

	t35 = (x489>>(x490%(x491<=x492)));

	if (t35 != 972990078585684065LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x501 = 102042791LLU;
	int32_t x502 = INT32_MAX;
	uint8_t x503 = 44U;

	t36 = (x501>>(x502%(x503<=x504)));

	if (t36 != 102042791LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x513 = INT16_MAX;
	volatile int64_t x514 = INT64_MAX;
	volatile int16_t x515 = INT16_MAX;
	uint32_t x516 = 7972944U;
	volatile int32_t t37 = 1;

	t37 = (x513>>(x514%(x515<=x516)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x521 = 62U;
	int64_t x522 = 147437726022086113LL;
	int64_t x523 = INT64_MIN;
	volatile int32_t t38 = -53372;

	t38 = (x521>>(x522%(x523<=x524)));

	if (t38 != 62) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x529 = 112U;
	uint32_t x530 = 613568U;
	int64_t x531 = INT64_MIN;
	int64_t x532 = 910775897792026957LL;
	volatile int32_t t39 = 268172275;

	t39 = (x529>>(x530%(x531<=x532)));

	if (t39 != 112) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x545 = 4;
	uint16_t x546 = 3U;
	int64_t x547 = -23LL;
	int32_t x548 = -1;

	t40 = (x545>>(x546%(x547<=x548)));

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x565 = INT32_MAX;
	int8_t x566 = INT8_MIN;
	uint16_t x567 = 259U;
	int64_t x568 = INT64_MAX;
	static int32_t t41 = INT32_MAX;

	t41 = (x565>>(x566%(x567<=x568)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x581 = 796U;
	volatile int16_t x583 = 0;
	static uint64_t x584 = 214715121LLU;

	t42 = (x581>>(x582%(x583<=x584)));

	if (t42 != 796) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x593 = INT64_MAX;
	int16_t x594 = 8087;
	volatile int32_t x595 = INT32_MIN;
	static int8_t x596 = -1;
	int64_t t43 = INT64_MAX;

	t43 = (x593>>(x594%(x595<=x596)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x629 = UINT64_MAX;
	int16_t x630 = INT16_MAX;
	static int32_t x632 = INT32_MAX;

	t44 = (x629>>(x630%(x631<=x632)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x645 = UINT16_MAX;
	volatile int32_t x646 = -1;
	int16_t x647 = INT16_MIN;
	static int8_t x648 = -21;
	int32_t t45 = 1180314;

	t45 = (x645>>(x646%(x647<=x648)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x649 = 16U;
	int32_t x650 = 14002987;
	static uint8_t x651 = 58U;
	volatile uint32_t x652 = 392U;

	t46 = (x649>>(x650%(x651<=x652)));

	if (t46 != 16) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x665 = 3;
	int16_t x666 = INT16_MIN;
	uint32_t x668 = 113948193U;

	t47 = (x665>>(x666%(x667<=x668)));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x673 = 0U;
	static uint16_t x674 = UINT16_MAX;
	int64_t x675 = INT64_MIN;
	volatile int32_t x676 = -1;
	int32_t t48 = 517043519;

	t48 = (x673>>(x674%(x675<=x676)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x681 = UINT16_MAX;
	int64_t x682 = INT64_MIN;
	static int8_t x683 = INT8_MIN;
	volatile int32_t t49 = 27520;

	t49 = (x681>>(x682%(x683<=x684)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x690 = 5199;
	int64_t x691 = INT64_MIN;

	t50 = (x689>>(x690%(x691<=x692)));

	if (t50 != 32) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x701 = UINT32_MAX;
	static int8_t x703 = INT8_MIN;
	static uint32_t t51 = UINT32_MAX;

	t51 = (x701>>(x702%(x703<=x704)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x721 = UINT64_MAX;
	static int32_t x722 = INT32_MIN;
	int32_t x723 = INT32_MIN;
	int8_t x724 = INT8_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x721>>(x722%(x723<=x724)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x725 = 1U;
	volatile uint8_t x727 = UINT8_MAX;
	int64_t x728 = INT64_MAX;
	volatile uint32_t t53 = 344U;

	t53 = (x725>>(x726%(x727<=x728)));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x758 = 48;
	int8_t x759 = 49;
	static uint64_t x760 = UINT64_MAX;

	t54 = (x757>>(x758%(x759<=x760)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x761 = 502014958980439LLU;
	uint32_t x762 = 1572U;
	static int64_t x764 = INT64_MIN;
	static volatile uint64_t t55 = 7670740LLU;

	t55 = (x761>>(x762%(x763<=x764)));

	if (t55 != 502014958980439LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x773 = 1LLU;
	int64_t x775 = -46517943726787LL;
	int8_t x776 = INT8_MAX;
	volatile uint64_t t56 = 846412490485135LLU;

	t56 = (x773>>(x774%(x775<=x776)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x781 = 58U;
	volatile uint32_t x782 = 147409405U;
	uint64_t x783 = 287LLU;
	volatile uint32_t t57 = 45U;

	t57 = (x781>>(x782%(x783<=x784)));

	if (t57 != 58U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x839 = -1822202LL;
	volatile int64_t x840 = INT64_MAX;
	static uint32_t t58 = 4411U;

	t58 = (x837>>(x838%(x839<=x840)));

	if (t58 != 9637526U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x849 = INT64_MAX;
	static uint32_t x850 = UINT32_MAX;
	volatile int32_t x851 = INT32_MIN;
	uint8_t x852 = 6U;
	int64_t t59 = INT64_MAX;

	t59 = (x849>>(x850%(x851<=x852)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x865 = 413;
	volatile int16_t x867 = INT16_MIN;
	uint8_t x868 = 120U;
	int32_t t60 = 0;

	t60 = (x865>>(x866%(x867<=x868)));

	if (t60 != 413) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x873 = 779703040787390LL;
	int8_t x874 = INT8_MAX;
	static int64_t x875 = INT64_MIN;
	int64_t x876 = INT64_MIN;
	volatile int64_t t61 = 26471391076168LL;

	t61 = (x873>>(x874%(x875<=x876)));

	if (t61 != 779703040787390LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x881 = UINT8_MAX;
	static int32_t x883 = INT32_MIN;
	int32_t t62 = 40;

	t62 = (x881>>(x882%(x883<=x884)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x889 = INT8_MAX;
	int64_t x890 = -1LL;
	int16_t x892 = INT16_MAX;
	int32_t t63 = -4938;

	t63 = (x889>>(x890%(x891<=x892)));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x900 = INT64_MAX;
	int64_t t64 = INT64_MAX;

	t64 = (x897>>(x898%(x899<=x900)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x921 = UINT8_MAX;
	int8_t x922 = INT8_MAX;
	uint8_t x923 = 3U;
	static int32_t x924 = INT32_MAX;
	int32_t t65 = -184373919;

	t65 = (x921>>(x922%(x923<=x924)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x926 = 1U;
	int64_t x927 = INT64_MIN;
	static int32_t x928 = 2987;
	uint64_t t66 = 491317110969492LLU;

	t66 = (x925>>(x926%(x927<=x928)));

	if (t66 != 1577842178LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x938 = 292229703;
	int16_t x940 = INT16_MAX;
	volatile uint64_t t67 = 8274152306496317LLU;

	t67 = (x937>>(x938%(x939<=x940)));

	if (t67 != 23875568608406LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x946 = -7;
	int8_t x947 = -1;
	int32_t t68 = 49133;

	t68 = (x945>>(x946%(x947<=x948)));

	if (t68 != 18) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x961 = UINT64_MAX;
	int16_t x962 = 935;
	volatile int64_t x963 = INT64_MIN;
	uint32_t x964 = 89U;

	t69 = (x961>>(x962%(x963<=x964)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x985 = 1U;
	int8_t x986 = 0;
	int64_t x987 = -21755487369435LL;
	static uint32_t x988 = 8014406U;
	volatile int32_t t70 = 137;

	t70 = (x985>>(x986%(x987<=x988)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x989 = INT8_MAX;
	int8_t x991 = -1;
	int32_t x992 = INT32_MAX;
	volatile int32_t t71 = 8;

	t71 = (x989>>(x990%(x991<=x992)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x1001 = UINT32_MAX;
	static int16_t x1002 = INT16_MIN;
	static volatile int16_t x1003 = INT16_MIN;
	static volatile int64_t x1004 = INT64_MAX;
	uint32_t t72 = UINT32_MAX;

	t72 = (x1001>>(x1002%(x1003<=x1004)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x1005 = UINT8_MAX;
	static uint8_t x1006 = 1U;
	int32_t x1007 = -1;
	uint64_t x1008 = UINT64_MAX;
	static volatile int32_t t73 = -1994013;

	t73 = (x1005>>(x1006%(x1007<=x1008)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x1013 = 0;
	volatile uint32_t x1015 = 0U;
	static int32_t x1016 = INT32_MIN;
	volatile int32_t t74 = -2;

	t74 = (x1013>>(x1014%(x1015<=x1016)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x1018 = INT64_MAX;
	volatile uint64_t x1020 = UINT64_MAX;

	t75 = (x1017>>(x1018%(x1019<=x1020)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1037 = 801066LLU;
	static int32_t x1038 = INT32_MIN;

	t76 = (x1037>>(x1038%(x1039<=x1040)));

	if (t76 != 801066LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1045 = UINT16_MAX;
	int8_t x1046 = -1;
	int64_t x1047 = -96808809895564972LL;
	int32_t x1048 = 111159018;
	static int32_t t77 = 222;

	t77 = (x1045>>(x1046%(x1047<=x1048)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1053 = 8U;
	int32_t x1054 = -1;
	int64_t x1056 = INT64_MAX;
	int32_t t78 = -162;

	t78 = (x1053>>(x1054%(x1055<=x1056)));

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1093 = UINT8_MAX;
	uint8_t x1094 = 28U;
	int64_t x1095 = INT64_MIN;
	volatile int32_t t79 = 27;

	t79 = (x1093>>(x1094%(x1095<=x1096)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1106 = INT64_MIN;
	int32_t t80 = -5;

	t80 = (x1105>>(x1106%(x1107<=x1108)));

	if (t80 != 49) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1117 = 8;
	volatile int32_t x1118 = INT32_MIN;
	int16_t x1119 = -43;

	t81 = (x1117>>(x1118%(x1119<=x1120)));

	if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x1133 = 6691921209230407LLU;
	uint32_t x1134 = 5649U;
	volatile int8_t x1135 = INT8_MAX;
	uint16_t x1136 = 678U;
	uint64_t t82 = 134511944087522LLU;

	t82 = (x1133>>(x1134%(x1135<=x1136)));

	if (t82 != 6691921209230407LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1155 = 0U;
	static volatile int8_t x1156 = 26;
	static volatile uint32_t t83 = UINT32_MAX;

	t83 = (x1153>>(x1154%(x1155<=x1156)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1182 = 16U;
	int32_t x1183 = 1;
	int16_t x1184 = INT16_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x1181>>(x1182%(x1183<=x1184)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1190 = INT8_MIN;
	uint16_t x1192 = UINT16_MAX;
	static int64_t t85 = INT64_MAX;

	t85 = (x1189>>(x1190%(x1191<=x1192)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x1197 = UINT16_MAX;
	volatile int64_t x1198 = INT64_MIN;
	int32_t x1199 = INT32_MIN;
	uint16_t x1200 = 4U;
	volatile int32_t t86 = -86;

	t86 = (x1197>>(x1198%(x1199<=x1200)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1221 = UINT32_MAX;
	static int16_t x1222 = INT16_MIN;
	static int64_t x1223 = -1LL;

	t87 = (x1221>>(x1222%(x1223<=x1224)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1238 = -939;
	int8_t x1239 = -1;
	uint16_t x1240 = 71U;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x1237>>(x1238%(x1239<=x1240)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x1253 = UINT8_MAX;
	int8_t x1254 = INT8_MAX;
	int64_t x1256 = INT64_MAX;
	int32_t t89 = -1;

	t89 = (x1253>>(x1254%(x1255<=x1256)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1262 = 13179LL;
	int8_t x1263 = INT8_MIN;
	int32_t x1264 = INT32_MAX;
	static volatile int32_t t90 = 1221479;

	t90 = (x1261>>(x1262%(x1263<=x1264)));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x1281 = 1614LL;
	int16_t x1282 = INT16_MIN;
	uint8_t x1283 = 50U;
	uint32_t x1284 = 332U;
	int64_t t91 = -34158074895760760LL;

	t91 = (x1281>>(x1282%(x1283<=x1284)));

	if (t91 != 1614LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1301 = 84124575LL;
	int64_t x1302 = -394891919751LL;
	int64_t x1303 = -1LL;
	int8_t x1304 = -1;
	int64_t t92 = -31142206949300LL;

	t92 = (x1301>>(x1302%(x1303<=x1304)));

	if (t92 != 84124575LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1314 = -1;
	volatile int8_t x1315 = 1;
	int32_t t93 = 100978545;

	t93 = (x1313>>(x1314%(x1315<=x1316)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1321 = 2594734895330069056LLU;
	int16_t x1322 = INT16_MIN;
	static int16_t x1323 = -540;
	uint8_t x1324 = 34U;

	t94 = (x1321>>(x1322%(x1323<=x1324)));

	if (t94 != 2594734895330069056LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1341 = 6U;
	int8_t x1342 = -1;
	static int8_t x1343 = -1;
	uint64_t x1344 = UINT64_MAX;
	int32_t t95 = 1070948;

	t95 = (x1341>>(x1342%(x1343<=x1344)));

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x1346 = INT16_MIN;
	uint16_t x1347 = 4U;
	uint32_t x1348 = 12U;
	volatile int32_t t96 = 503133;

	t96 = (x1345>>(x1346%(x1347<=x1348)));

	if (t96 != 3733) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x1381 = UINT64_MAX;
	int64_t x1382 = INT64_MAX;
	int16_t x1383 = INT16_MIN;
	uint8_t x1384 = 7U;
	uint64_t t97 = UINT64_MAX;

	t97 = (x1381>>(x1382%(x1383<=x1384)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1394 = 13;
	uint16_t x1395 = UINT16_MAX;
	uint64_t x1396 = UINT64_MAX;
	int64_t t98 = INT64_MAX;

	t98 = (x1393>>(x1394%(x1395<=x1396)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x1417 = 1U;
	int16_t x1418 = INT16_MAX;
	int64_t x1419 = INT64_MIN;
	volatile int32_t x1420 = INT32_MIN;
	int32_t t99 = 183036;

	t99 = (x1417>>(x1418%(x1419<=x1420)));

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

