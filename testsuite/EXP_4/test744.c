#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x57 = INT8_MIN;
volatile uint64_t x58 = 1502261LLU;
volatile uint8_t x59 = 2U;
volatile int8_t x93 = INT8_MIN;
volatile int8_t x95 = INT8_MIN;
volatile uint8_t x96 = 1U;
int64_t x131 = INT64_MIN;
int32_t x210 = 26796;
volatile uint64_t t4 = 3697113272LLU;
static uint16_t x235 = 5U;
volatile uint16_t x289 = 6U;
static uint16_t x292 = UINT16_MAX;
volatile int64_t x304 = -1LL;
volatile uint64_t t9 = 38908712650LLU;
static uint8_t x311 = UINT8_MAX;
int32_t t10 = -3269773;
uint8_t x323 = 1U;
int8_t x334 = 7;
int32_t t12 = 1;
int8_t x387 = INT8_MIN;
int32_t t17 = 14768384;
int64_t x497 = -360389318LL;
volatile uint16_t x538 = UINT16_MAX;
int64_t x539 = 3LL;
static int8_t x540 = -1;
uint64_t x575 = 5LLU;
static int32_t x628 = INT32_MAX;
volatile uint32_t t24 = 144U;
volatile uint64_t x658 = UINT64_MAX;
int64_t x659 = 651613123504942646LL;
volatile uint64_t t25 = 411375838718691903LLU;
static uint8_t x684 = 17U;
uint32_t x690 = UINT32_MAX;
int8_t x722 = 0;
static int16_t x725 = 4826;
int64_t x727 = 6332520251LL;
int64_t x753 = 168085782LL;
uint16_t x755 = 6186U;
volatile int32_t x784 = 6;
volatile int64_t x827 = 1601812213560290884LL;
volatile uint16_t x842 = 280U;
static int32_t t37 = -11741;
volatile uint8_t x877 = 44U;
static uint8_t x878 = 1U;
volatile uint32_t x879 = UINT32_MAX;
uint16_t x886 = 27U;
uint8_t x888 = UINT8_MAX;
volatile uint8_t x893 = 1U;
int64_t x945 = 677LL;
volatile uint32_t t44 = 1U;
int64_t x972 = 3145938703986208LL;
volatile int64_t t45 = -5LL;
static uint64_t x1026 = 22757LLU;
int16_t x1028 = -1;
static volatile uint64_t t48 = 49LLU;
int8_t x1049 = 7;
int32_t x1119 = INT32_MAX;
uint32_t t51 = 1681U;
int8_t x1134 = INT8_MAX;
int16_t x1135 = -1;
int8_t x1136 = -1;
static int16_t x1147 = INT16_MIN;
static volatile int64_t x1149 = -497066LL;
volatile uint32_t x1206 = 741960U;
static volatile uint32_t t55 = 617U;
int8_t x1295 = 0;
int8_t x1304 = INT8_MIN;
volatile int64_t x1346 = 3321091052529LL;
int8_t x1348 = -4;
int32_t x1376 = -1;
int16_t x1408 = -1;
volatile uint32_t t63 = 106U;
static int8_t x1490 = 0;
int64_t x1528 = INT64_MIN;
static volatile int32_t t68 = -39579161;
static uint64_t x1550 = UINT64_MAX;
volatile uint32_t x1567 = UINT32_MAX;
static int64_t x1617 = -1LL;
int16_t x1638 = INT16_MAX;
int8_t x1711 = 5;
int32_t x1713 = -1;
static int8_t x1761 = INT8_MIN;
uint8_t x1806 = 38U;
uint8_t x1807 = UINT8_MAX;
volatile int64_t t78 = -33313279556304LL;
static int64_t x1813 = 984469LL;
static int8_t x1815 = INT8_MIN;
uint8_t x1847 = 1U;
static uint8_t x1900 = 105U;
int8_t x2039 = 29;
volatile uint32_t t83 = 1394437454U;
int32_t x2194 = 0;
volatile int64_t t85 = 37637251LL;
volatile int64_t t86 = -505384LL;
volatile uint8_t x2290 = 23U;
int32_t x2377 = INT32_MIN;
volatile uint8_t x2380 = UINT8_MAX;
static volatile uint64_t t89 = 6973217013865572128LLU;
static int16_t x2383 = -1;
int8_t x2397 = INT8_MIN;
uint64_t t95 = 3575582239126145LLU;
int16_t x2644 = 6;
volatile uint32_t t96 = 81851U;
static uint64_t t98 = 5631567364LLU;
int8_t x2677 = INT8_MIN;


void f0(void) {
	int16_t x60 = 13;
	uint64_t t0 = 292074827LLU;

	t0 = (x57*(x58<<(x59%x60)));

	if (t0 != 18446744072940393984LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x94 = UINT64_MAX;
	volatile uint64_t t1 = 1285LLU;

	t1 = (x93*(x94<<(x95%x96)));

	if (t1 != 128LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x129 = -1;
	volatile int8_t x130 = 39;
	uint16_t x132 = 2U;
	volatile int32_t t2 = -1479538;

	t2 = (x129*(x130<<(x131%x132)));

	if (t2 != -39) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x169 = -1LL;
	volatile uint64_t x170 = 2145810935547LLU;
	int32_t x171 = 0;
	int16_t x172 = 8459;
	uint64_t t3 = 29LLU;

	t3 = (x169*(x170<<(x171%x172)));

	if (t3 != 18446741927898616069LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x209 = 45446672071948196LLU;
	int8_t x211 = 6;
	int8_t x212 = INT8_MIN;

	t4 = (x209*(x210<<(x211%x212)));

	if (t4 != 1003878332271463424LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x233 = 6285883U;
	static int8_t x234 = INT8_MAX;
	volatile int64_t x236 = INT64_MIN;
	volatile uint32_t t5 = 2659268U;

	t5 = (x233*(x234<<(x235%x236)));

	if (t5 != 4070992032U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x241 = 7U;
	int32_t x242 = 13593768;
	static uint8_t x243 = 3U;
	int32_t x244 = -1;
	volatile int32_t t6 = -4923;

	t6 = (x241*(x242<<(x243%x244)));

	if (t6 != 95156376) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x245 = 6087;
	uint8_t x246 = UINT8_MAX;
	static volatile uint16_t x247 = 2U;
	volatile int64_t x248 = -23LL;
	int32_t t7 = -142654;

	t7 = (x245*(x246<<(x247%x248)));

	if (t7 != 6208740) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x290 = 1858U;
	uint64_t x291 = UINT64_MAX;
	static uint32_t t8 = 475516U;

	t8 = (x289*(x290<<(x291%x292)));

	if (t8 != 11148U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x301 = UINT64_MAX;
	uint16_t x302 = UINT16_MAX;
	static int32_t x303 = -1;

	t9 = (x301*(x302<<(x303%x304)));

	if (t9 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x309 = -1;
	uint16_t x310 = 10U;
	int16_t x312 = 2;

	t10 = (x309*(x310<<(x311%x312)));

	if (t10 != -20) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x321 = 138521742959446LL;
	uint8_t x322 = UINT8_MAX;
	volatile int32_t x324 = INT32_MIN;
	static volatile int64_t t11 = 0LL;

	t11 = (x321*(x322<<(x323%x324)));

	if (t11 != 70646088909317460LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x333 = -4;
	volatile int8_t x335 = 12;
	int32_t x336 = INT32_MIN;

	t12 = (x333*(x334<<(x335%x336)));

	if (t12 != -114688) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = UINT32_MAX;
	int32_t x388 = 4;
	uint32_t t13 = 8127U;

	t13 = (x385*(x386<<(x387%x388)));

	if (t13 != 128U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x441 = 193517683LLU;
	int32_t x442 = INT32_MAX;
	uint8_t x443 = 0U;
	int8_t x444 = INT8_MIN;
	static uint64_t t14 = 130LLU;

	t14 = (x441*(x442<<(x443%x444)));

	if (t14 != 415576059647829901LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x453 = 0U;
	uint64_t x454 = 883955850742487826LLU;
	uint8_t x455 = 2U;
	uint64_t x456 = 1LLU;
	volatile uint64_t t15 = 473LLU;

	t15 = (x453*(x454<<(x455%x456)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x465 = -2LL;
	volatile uint32_t x466 = 17707590U;
	int16_t x467 = 1;
	int8_t x468 = -1;
	int64_t t16 = -286LL;

	t16 = (x465*(x466<<(x467%x468)));

	if (t16 != -35415180LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x493 = INT16_MIN;
	volatile int16_t x494 = 429;
	int16_t x495 = INT16_MAX;
	int32_t x496 = -1;

	t17 = (x493*(x494<<(x495%x496)));

	if (t17 != -14057472) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x498 = INT16_MAX;
	int8_t x499 = 1;
	volatile uint64_t x500 = 34798LLU;
	int64_t t18 = -1451986111186860090LL;

	t18 = (x497*(x498<<(x499%x500)));

	if (t18 != -23617753565812LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x537 = INT16_MIN;
	int32_t t19 = -429815285;

	t19 = (x537*(x538<<(x539%x540)));

	if (t19 != -2147450880) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x541 = INT8_MIN;
	int16_t x542 = INT16_MAX;
	int8_t x543 = 5;
	int64_t x544 = INT64_MIN;
	int32_t t20 = -1;

	t20 = (x541*(x542<<(x543%x544)));

	if (t20 != -134213632) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x545 = 7U;
	uint16_t x546 = 106U;
	volatile int64_t x547 = INT64_MAX;
	static int8_t x548 = -1;
	volatile int32_t t21 = 299;

	t21 = (x545*(x546<<(x547%x548)));

	if (t21 != 742) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x573 = 107U;
	uint64_t x574 = UINT64_MAX;
	static volatile int64_t x576 = INT64_MIN;
	volatile uint64_t t22 = 106LLU;

	t22 = (x573*(x574<<(x575%x576)));

	if (t22 != 18446744073709548192LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x609 = 7;
	int64_t x610 = 1LL;
	int16_t x611 = -1;
	uint64_t x612 = UINT64_MAX;
	volatile int64_t t23 = -19548397123736LL;

	t23 = (x609*(x610<<(x611%x612)));

	if (t23 != 7LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x625 = 484U;
	uint32_t x626 = 95870U;
	uint32_t x627 = UINT32_MAX;

	t24 = (x625*(x626<<(x627%x628)));

	if (t24 != 92802160U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x657 = -139;
	volatile uint8_t x660 = 11U;

	t25 = (x657*(x658<<(x659%x660)));

	if (t25 != 1112LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x661 = 3709802U;
	static volatile uint16_t x662 = UINT16_MAX;
	volatile uint64_t x663 = 102288796LLU;
	int8_t x664 = 1;
	uint32_t t26 = 4457845U;

	t26 = (x661*(x662<<(x663%x664)));

	if (t26 != 2603705494U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x681 = UINT8_MAX;
	uint32_t x682 = 3849405U;
	uint64_t x683 = 20868629474LLU;
	uint32_t t27 = 35790323U;

	t27 = (x681*(x682<<(x683%x684)));

	if (t27 != 268572672U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x689 = -1LL;
	volatile int32_t x691 = -1;
	int32_t x692 = 1;
	int64_t t28 = 276676713518022113LL;

	t28 = (x689*(x690<<(x691%x692)));

	if (t28 != -4294967295LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x721 = INT32_MIN;
	static volatile uint8_t x723 = UINT8_MAX;
	uint32_t x724 = 24U;
	volatile int32_t t29 = 129418;

	t29 = (x721*(x722<<(x723%x724)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x726 = UINT16_MAX;
	int32_t x728 = -1;
	volatile int32_t t30 = -26524;

	t30 = (x725*(x726<<(x727%x728)));

	if (t30 != 316271910) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x745 = 119404689U;
	static uint32_t x746 = UINT32_MAX;
	uint16_t x747 = 1110U;
	int16_t x748 = 15;
	volatile uint32_t t31 = 5955U;

	t31 = (x745*(x746<<(x747%x748)));

	if (t31 != 4175562607U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x754 = 69U;
	int64_t x756 = -13LL;
	volatile int64_t t32 = 856525807483LL;

	t32 = (x753*(x754<<(x755%x756)));

	if (t32 != 23752538025984LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x781 = 1LLU;
	static volatile uint64_t x782 = 5379174882274LLU;
	int32_t x783 = 1;
	uint64_t t33 = 2549LLU;

	t33 = (x781*(x782<<(x783%x784)));

	if (t33 != 10758349764548LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x801 = 4U;
	volatile int16_t x802 = 1;
	uint16_t x803 = UINT16_MAX;
	uint16_t x804 = 40U;
	int32_t t34 = -1130;

	t34 = (x801*(x802<<(x803%x804)));

	if (t34 != 131072) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x825 = INT16_MIN;
	uint8_t x826 = 1U;
	static int8_t x828 = 1;
	int32_t t35 = 15;

	t35 = (x825*(x826<<(x827%x828)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x829 = 0;
	int32_t x830 = 599;
	static int8_t x831 = 4;
	int16_t x832 = INT16_MAX;
	int32_t t36 = 1176319;

	t36 = (x829*(x830<<(x831%x832)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x841 = INT16_MIN;
	static int64_t x843 = INT64_MIN;
	static int64_t x844 = INT64_MIN;

	t37 = (x841*(x842<<(x843%x844)));

	if (t37 != -9175040) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x880 = 6;
	static volatile int32_t t38 = -72;

	t38 = (x877*(x878<<(x879%x880)));

	if (t38 != 352) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x885 = INT16_MIN;
	uint32_t x887 = UINT32_MAX;
	int32_t t39 = -10;

	t39 = (x885*(x886<<(x887%x888)));

	if (t39 != -884736) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x894 = INT8_MAX;
	volatile uint16_t x895 = 7U;
	volatile int64_t x896 = -1LL;
	volatile int32_t t40 = -1748382;

	t40 = (x893*(x894<<(x895%x896)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x929 = UINT32_MAX;
	int8_t x930 = 0;
	int32_t x931 = INT32_MAX;
	int16_t x932 = -26;
	uint32_t t41 = 18685U;

	t41 = (x929*(x930<<(x931%x932)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x946 = INT16_MAX;
	static int64_t x947 = INT64_MIN;
	int32_t x948 = INT32_MIN;
	volatile int64_t t42 = 282LL;

	t42 = (x945*(x946<<(x947%x948)));

	if (t42 != 22183259LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x957 = -11;
	volatile uint16_t x958 = 680U;
	static uint32_t x959 = UINT32_MAX;
	int16_t x960 = -1;
	volatile int32_t t43 = 261226516;

	t43 = (x957*(x958<<(x959%x960)));

	if (t43 != -7480) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x961 = 406U;
	int16_t x962 = 0;
	uint8_t x963 = 9U;
	static int16_t x964 = INT16_MAX;

	t44 = (x961*(x962<<(x963%x964)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x969 = -1LL;
	volatile int8_t x970 = INT8_MAX;
	uint8_t x971 = 15U;

	t45 = (x969*(x970<<(x971%x972)));

	if (t45 != -4161536LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1001 = 22075U;
	uint8_t x1002 = 6U;
	int16_t x1003 = INT16_MIN;
	int8_t x1004 = INT8_MIN;
	static volatile uint32_t t46 = 6U;

	t46 = (x1001*(x1002<<(x1003%x1004)));

	if (t46 != 132450U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1013 = 0U;
	uint64_t x1014 = 106360432258939983LLU;
	int32_t x1015 = 259932;
	uint16_t x1016 = 21U;
	volatile uint64_t t47 = 490497319618LLU;

	t47 = (x1013*(x1014<<(x1015%x1016)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1025 = -112;
	static uint16_t x1027 = 86U;

	t48 = (x1025*(x1026<<(x1027%x1028)));

	if (t48 != 18446744073707002832LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1050 = 154U;
	int16_t x1051 = -17;
	int32_t x1052 = -1;
	static uint32_t t49 = 134238U;

	t49 = (x1049*(x1050<<(x1051%x1052)));

	if (t49 != 1078U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1117 = -1LL;
	uint32_t x1118 = 20U;
	static int16_t x1120 = -1;
	static int64_t t50 = 4560782LL;

	t50 = (x1117*(x1118<<(x1119%x1120)));

	if (t50 != -20LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1129 = INT16_MIN;
	uint32_t x1130 = 156U;
	uint16_t x1131 = 18803U;
	uint16_t x1132 = 26U;

	t51 = (x1129*(x1130<<(x1131%x1132)));

	if (t51 != 4131389440U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1133 = -1;
	volatile int32_t t52 = -2829283;

	t52 = (x1133*(x1134<<(x1135%x1136)));

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1145 = INT8_MIN;
	uint16_t x1146 = 229U;
	volatile int32_t x1148 = -1;
	volatile int32_t t53 = 29;

	t53 = (x1145*(x1146<<(x1147%x1148)));

	if (t53 != -29312) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1150 = INT8_MAX;
	static uint8_t x1151 = 13U;
	int64_t x1152 = INT64_MIN;
	volatile int64_t t54 = 79LL;

	t54 = (x1149*(x1150<<(x1151%x1152)));

	if (t54 != -517139513344LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1205 = INT8_MIN;
	static int16_t x1207 = INT16_MIN;
	static int64_t x1208 = -1LL;

	t55 = (x1205*(x1206<<(x1207%x1208)));

	if (t55 != 4199996416U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1229 = UINT16_MAX;
	uint32_t x1230 = 248259338U;
	volatile uint8_t x1231 = 5U;
	static int32_t x1232 = INT32_MIN;
	uint32_t t56 = 1004U;

	t56 = (x1229*(x1230<<(x1231%x1232)));

	if (t56 != 2277220032U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1253 = INT8_MIN;
	uint16_t x1254 = 0U;
	uint32_t x1255 = 1U;
	static int16_t x1256 = -1;
	int32_t t57 = 2125;

	t57 = (x1253*(x1254<<(x1255%x1256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1293 = UINT32_MAX;
	uint64_t x1294 = 570761902810LLU;
	int8_t x1296 = INT8_MIN;
	volatile uint64_t t58 = 18109099LLU;

	t58 = (x1293*(x1294<<(x1295%x1296)));

	if (t58 != 16433488071257785638LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x1301 = INT16_MIN;
	static uint32_t x1302 = UINT32_MAX;
	int16_t x1303 = INT16_MIN;
	uint32_t t59 = 331U;

	t59 = (x1301*(x1302<<(x1303%x1304)));

	if (t59 != 32768U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1317 = 0U;
	volatile int32_t x1318 = INT32_MAX;
	int32_t x1319 = -78875;
	static int64_t x1320 = -1LL;
	volatile uint32_t t60 = 0U;

	t60 = (x1317*(x1318<<(x1319%x1320)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1345 = INT8_MAX;
	volatile int8_t x1347 = 3;
	volatile int64_t t61 = -30358LL;

	t61 = (x1345*(x1346<<(x1347%x1348)));

	if (t61 != 3374228509369464LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x1373 = 22;
	static uint16_t x1374 = 1332U;
	int8_t x1375 = 8;
	int32_t t62 = -668;

	t62 = (x1373*(x1374<<(x1375%x1376)));

	if (t62 != 29304) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x1405 = INT32_MAX;
	uint32_t x1406 = 127840U;
	int16_t x1407 = INT16_MIN;

	t63 = (x1405*(x1406<<(x1407%x1408)));

	if (t63 != 4294839456U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1445 = INT32_MIN;
	static uint8_t x1446 = 0U;
	volatile int8_t x1447 = INT8_MIN;
	int8_t x1448 = INT8_MIN;
	volatile int32_t t64 = -23;

	t64 = (x1445*(x1446<<(x1447%x1448)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1461 = -1LL;
	uint64_t x1462 = 734289089LLU;
	int64_t x1463 = INT64_MAX;
	int16_t x1464 = INT16_MAX;
	static volatile uint64_t t65 = 8806345LLU;

	t65 = (x1461*(x1462<<(x1463%x1464)));

	if (t65 != 18446743979720548224LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1489 = 1476;
	static uint8_t x1491 = 9U;
	static uint8_t x1492 = 41U;
	int32_t t66 = 6390;

	t66 = (x1489*(x1490<<(x1491%x1492)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x1501 = INT8_MIN;
	static int16_t x1502 = INT16_MAX;
	uint32_t x1503 = UINT32_MAX;
	static int16_t x1504 = -1;
	int32_t t67 = 114885184;

	t67 = (x1501*(x1502<<(x1503%x1504)));

	if (t67 != -4194176) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1525 = INT16_MIN;
	static uint16_t x1526 = 153U;
	uint8_t x1527 = 2U;

	t68 = (x1525*(x1526<<(x1527%x1528)));

	if (t68 != -20054016) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x1549 = 0U;
	int64_t x1551 = INT64_MIN;
	static int16_t x1552 = -1;
	uint64_t t69 = 4337437882591LLU;

	t69 = (x1549*(x1550<<(x1551%x1552)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1565 = UINT16_MAX;
	uint64_t x1566 = UINT64_MAX;
	int16_t x1568 = -1;
	uint64_t t70 = 91180784LLU;

	t70 = (x1565*(x1566<<(x1567%x1568)));

	if (t70 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x1618 = 2U;
	static uint8_t x1619 = 2U;
	int16_t x1620 = 3;
	volatile int64_t t71 = -5LL;

	t71 = (x1617*(x1618<<(x1619%x1620)));

	if (t71 != -8LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1629 = 100467408751840LLU;
	uint32_t x1630 = UINT32_MAX;
	uint64_t x1631 = UINT64_MAX;
	volatile uint32_t x1632 = 3U;
	uint64_t t72 = 26329572037956781LLU;

	t72 = (x1629*(x1630<<(x1631%x1632)));

	if (t72 != 16444174409449222944LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1637 = -1LL;
	int64_t x1639 = INT64_MIN;
	int8_t x1640 = INT8_MIN;
	volatile int64_t t73 = 520627274966LL;

	t73 = (x1637*(x1638<<(x1639%x1640)));

	if (t73 != -32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x1653 = UINT8_MAX;
	int16_t x1654 = 0;
	volatile uint8_t x1655 = 1U;
	static uint16_t x1656 = 6U;
	volatile int32_t t74 = -9190;

	t74 = (x1653*(x1654<<(x1655%x1656)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1709 = -1;
	uint8_t x1710 = 6U;
	static int16_t x1712 = INT16_MIN;
	int32_t t75 = -567167;

	t75 = (x1709*(x1710<<(x1711%x1712)));

	if (t75 != -192) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x1714 = 72U;
	volatile int64_t x1715 = -1LL;
	int16_t x1716 = -1;
	static volatile int32_t t76 = -2;

	t76 = (x1713*(x1714<<(x1715%x1716)));

	if (t76 != -72) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1762 = UINT64_MAX;
	int16_t x1763 = INT16_MIN;
	int64_t x1764 = 1LL;
	volatile uint64_t t77 = 1LLU;

	t77 = (x1761*(x1762<<(x1763%x1764)));

	if (t77 != 128LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x1805 = -47546LL;
	volatile int16_t x1808 = -17;

	t78 = (x1805*(x1806<<(x1807%x1808)));

	if (t78 != -1806748LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x1814 = UINT32_MAX;
	int16_t x1816 = -1;
	int64_t t79 = -27714137LL;

	t79 = (x1813*(x1814<<(x1815%x1816)));

	if (t79 != 4228262157941355LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x1845 = -26;
	uint32_t x1846 = 597816866U;
	uint32_t x1848 = 25019U;
	volatile uint32_t t80 = 496305129U;

	t80 = (x1845*(x1846<<(x1847%x1848)));

	if (t80 != 3273261336U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x1897 = -11LL;
	uint8_t x1898 = 32U;
	int32_t x1899 = INT32_MAX;
	volatile int64_t t81 = -16965066679211LL;

	t81 = (x1897*(x1898<<(x1899%x1900)));

	if (t81 != -1476395008LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x2037 = -4;
	int16_t x2038 = 1;
	volatile int64_t x2040 = -1LL;
	volatile int32_t t82 = -12;

	t82 = (x2037*(x2038<<(x2039%x2040)));

	if (t82 != -4) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2053 = 110U;
	volatile int16_t x2054 = 7124;
	int16_t x2055 = INT16_MIN;
	int8_t x2056 = -1;

	t83 = (x2053*(x2054<<(x2055%x2056)));

	if (t83 != 783640U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2181 = UINT64_MAX;
	volatile uint32_t x2182 = 10U;
	int32_t x2183 = INT32_MIN;
	static uint8_t x2184 = 8U;
	volatile uint64_t t84 = 338843LLU;

	t84 = (x2181*(x2182<<(x2183%x2184)));

	if (t84 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x2193 = INT64_MAX;
	static int64_t x2195 = INT64_MAX;
	int64_t x2196 = INT64_MAX;

	t85 = (x2193*(x2194<<(x2195%x2196)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2201 = 22614570395242LL;
	uint16_t x2202 = 15U;
	int64_t x2203 = INT64_MAX;
	volatile int32_t x2204 = INT32_MAX;

	t86 = (x2201*(x2202<<(x2203%x2204)));

	if (t86 != 678437111857260LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2233 = 41U;
	uint8_t x2234 = 28U;
	uint64_t x2235 = UINT64_MAX;
	volatile int8_t x2236 = 13;
	volatile int32_t t87 = 434;

	t87 = (x2233*(x2234<<(x2235%x2236)));

	if (t87 != 4592) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2289 = 0U;
	int64_t x2291 = INT64_MAX;
	volatile uint32_t x2292 = 3U;
	volatile int32_t t88 = -6357884;

	t88 = (x2289*(x2290<<(x2291%x2292)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2378 = 364125778LLU;
	int8_t x2379 = 0;

	t89 = (x2377*(x2378<<(x2379%x2380)));

	if (t89 != 17664789919639273472LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2381 = 0U;
	volatile uint8_t x2382 = 1U;
	static int8_t x2384 = -1;
	volatile uint32_t t90 = 13482U;

	t90 = (x2381*(x2382<<(x2383%x2384)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2398 = 12969U;
	static int16_t x2399 = INT16_MIN;
	int16_t x2400 = -1;
	int32_t t91 = -4838;

	t91 = (x2397*(x2398<<(x2399%x2400)));

	if (t91 != -1660032) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2485 = UINT32_MAX;
	static int16_t x2486 = 134;
	volatile int8_t x2487 = 0;
	static uint8_t x2488 = UINT8_MAX;
	volatile uint32_t t92 = 86U;

	t92 = (x2485*(x2486<<(x2487%x2488)));

	if (t92 != 4294967162U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2545 = 49909798352924LLU;
	int32_t x2546 = INT32_MAX;
	int32_t x2547 = -1;
	int64_t x2548 = -1LL;
	uint64_t t93 = 274180183LLU;

	t93 = (x2545*(x2546<<(x2547%x2548)));

	if (t93 != 4892719719329744868LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2597 = INT16_MAX;
	uint64_t x2598 = 56304LLU;
	int8_t x2599 = INT8_MIN;
	int16_t x2600 = 4;
	static volatile uint64_t t94 = 13114472LLU;

	t94 = (x2597*(x2598<<(x2599%x2600)));

	if (t94 != 1844913168LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x2637 = INT64_MAX;
	volatile uint64_t x2638 = UINT64_MAX;
	static int8_t x2639 = INT8_MIN;
	static volatile int16_t x2640 = -1;

	t95 = (x2637*(x2638<<(x2639%x2640)));

	if (t95 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x2641 = INT8_MAX;
	uint32_t x2642 = 77462U;
	static int16_t x2643 = 1;

	t96 = (x2641*(x2642<<(x2643%x2644)));

	if (t96 != 19675348U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x2645 = -1;
	int32_t x2646 = INT32_MAX;
	static uint32_t x2647 = UINT32_MAX;
	int64_t x2648 = -1LL;
	int32_t t97 = 10011;

	t97 = (x2645*(x2646<<(x2647%x2648)));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x2661 = UINT64_MAX;
	uint16_t x2662 = UINT16_MAX;
	int8_t x2663 = -1;
	static uint16_t x2664 = 1U;

	t98 = (x2661*(x2662<<(x2663%x2664)));

	if (t98 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x2678 = 12;
	uint8_t x2679 = 1U;
	int32_t x2680 = 880485;
	int32_t t99 = 56395;

	t99 = (x2677*(x2678<<(x2679%x2680)));

	if (t99 != -3072) { NG(); } else { ; }
	
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

