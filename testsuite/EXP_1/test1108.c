#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x127 = 235930330;
static int16_t x147 = 73;
int16_t x148 = INT16_MAX;
static int32_t x241 = 295241;
static volatile int16_t x244 = -184;
static volatile int32_t t5 = 19;
int8_t x570 = 29;
static uint16_t x572 = 91U;
uint64_t x613 = 11023746022329LLU;
static uint8_t x614 = 0U;
int64_t t11 = -446049195407LL;
static int32_t x619 = INT32_MAX;
int32_t t12 = 419550;
volatile int32_t x825 = INT32_MAX;
int64_t x837 = 70916747737285006LL;
static int16_t x927 = -1;
int8_t x965 = INT8_MAX;
volatile int64_t t20 = -152737029307097LL;
static uint16_t x1029 = UINT16_MAX;
volatile int32_t x1076 = -33387562;
int64_t x1085 = 58352443872233LL;
int16_t x1089 = 6415;
volatile uint16_t x1105 = 1934U;
int16_t x1106 = 14;
static uint8_t x1197 = UINT8_MAX;
static int64_t x1256 = INT64_MIN;
int16_t x1289 = 492;
volatile uint32_t x1292 = 222U;
volatile uint16_t x1308 = UINT16_MAX;
uint8_t x1445 = UINT8_MAX;
volatile uint8_t x1486 = 18U;
int32_t t33 = -165748729;
uint8_t x1658 = 1U;
static volatile uint8_t x2001 = UINT8_MAX;
int32_t t37 = -437402862;
uint8_t x2052 = 2U;
uint8_t x2457 = UINT8_MAX;
static uint8_t x2614 = 0U;
static uint64_t x2850 = 1LLU;
volatile uint64_t t44 = 1556659642LLU;
volatile int8_t x2943 = -1;
static volatile int64_t t45 = -111992330LL;
int8_t x2948 = 30;
volatile uint64_t x2971 = UINT64_MAX;
volatile int32_t x2972 = INT32_MAX;
int32_t x3132 = 52552;
uint8_t x3174 = 12U;
uint8_t x3176 = UINT8_MAX;
int32_t t49 = -9202756;
uint16_t x3221 = 23554U;
volatile int16_t x3223 = INT16_MIN;
int16_t x3304 = INT16_MIN;
uint16_t x3386 = 2U;
volatile int64_t t53 = -123LL;
static uint32_t x3722 = 3U;
int16_t x3743 = -7471;
volatile int64_t t59 = 10LL;
volatile uint64_t x3745 = 16039587047LLU;
int32_t x3796 = -133;
int8_t x3809 = 7;
volatile int16_t x3811 = INT16_MIN;
int8_t x3882 = 1;
volatile uint16_t x3884 = UINT16_MAX;
int16_t x4060 = INT16_MIN;
volatile int8_t x4194 = 1;
static volatile int16_t x4195 = INT16_MIN;
uint8_t x4259 = UINT8_MAX;
uint64_t t69 = 9116LLU;
static uint8_t x4294 = 18U;
uint64_t t71 = 1009318640139LLU;
volatile int64_t t72 = 218456800573455LL;
static uint32_t x4507 = 0U;
int64_t t74 = -60905145LL;
static uint32_t x4587 = UINT32_MAX;
volatile int32_t t77 = 29674740;
uint32_t x4689 = 1239648U;
int32_t x4717 = 0;
int16_t x4735 = INT16_MIN;
static int64_t x4736 = -19683727LL;
volatile int64_t t80 = -6769466LL;
int32_t x4773 = INT32_MAX;
volatile int16_t x4775 = INT16_MAX;
volatile uint8_t x4798 = 28U;
int8_t x4885 = 1;
static volatile uint32_t x4886 = 1U;
uint8_t x4890 = 15U;
volatile int32_t x4952 = INT32_MIN;
static int32_t t85 = 37;
int32_t x5071 = INT32_MIN;
uint64_t x5072 = 3012779448576LLU;
volatile int32_t t87 = 113081528;
uint64_t x5240 = 10LLU;
static volatile uint16_t x5363 = 1507U;
volatile int64_t t92 = -1360075086575LL;
uint8_t x5461 = 0U;
static int16_t x5529 = 4;
volatile int64_t x5531 = -1LL;
int8_t x5633 = 0;


void f0(void) {
	uint64_t x1 = 29576487235LLU;
	uint8_t x2 = 12U;
	int8_t x3 = -1;
	uint64_t x4 = 1874145158988LLU;
	volatile uint64_t t0 = 11664438831LLU;

	t0 = (((x1>>x2)==x3)*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x69 = 5;
	volatile uint8_t x70 = 1U;
	int64_t x71 = -1LL;
	int32_t x72 = INT32_MIN;
	int32_t t1 = -5;

	t1 = (((x69>>x70)==x71)*x72);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x81 = 2749LL;
	static int8_t x82 = 0;
	int64_t x83 = INT64_MAX;
	int64_t x84 = -3344956630763LL;
	int64_t t2 = 3371LL;

	t2 = (((x81>>x82)==x83)*x84);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x125 = 107082819LLU;
	int16_t x126 = 27;
	int16_t x128 = INT16_MAX;
	volatile int32_t t3 = 70408;

	t3 = (((x125>>x126)==x127)*x128);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x145 = 14U;
	uint16_t x146 = 0U;
	volatile int32_t t4 = 10;

	t4 = (((x145>>x146)==x147)*x148);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x242 = 1;
	int64_t x243 = 17550LL;

	t5 = (((x241>>x242)==x243)*x244);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x253 = 173U;
	int16_t x254 = 3;
	uint32_t x255 = 2018298405U;
	int8_t x256 = INT8_MIN;
	static int32_t t6 = 120240;

	t6 = (((x253>>x254)==x255)*x256);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x321 = 12271473U;
	uint32_t x322 = 2U;
	uint16_t x323 = 46U;
	int8_t x324 = INT8_MAX;
	static int32_t t7 = 84;

	t7 = (((x321>>x322)==x323)*x324);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x409 = INT16_MAX;
	uint16_t x410 = 0U;
	static volatile uint32_t x411 = 2U;
	static int16_t x412 = INT16_MIN;
	volatile int32_t t8 = -5;

	t8 = (((x409>>x410)==x411)*x412);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x569 = 31U;
	int64_t x571 = -1LL;
	volatile int32_t t9 = 26528;

	t9 = (((x569>>x570)==x571)*x572);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x605 = 691LLU;
	uint8_t x606 = 36U;
	int16_t x607 = INT16_MIN;
	static volatile int32_t x608 = INT32_MIN;
	volatile int32_t t10 = 2631;

	t10 = (((x605>>x606)==x607)*x608);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x615 = INT32_MAX;
	static int64_t x616 = 107087393796318LL;

	t11 = (((x613>>x614)==x615)*x616);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x617 = 0;
	uint16_t x618 = 5U;
	int16_t x620 = INT16_MAX;

	t12 = (((x617>>x618)==x619)*x620);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x637 = 127295892;
	int8_t x638 = 1;
	volatile int32_t x639 = INT32_MIN;
	static uint64_t x640 = 691494509321449951LLU;
	volatile uint64_t t13 = 490094341378723LLU;

	t13 = (((x637>>x638)==x639)*x640);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x826 = 2U;
	int64_t x827 = INT64_MIN;
	static int8_t x828 = 56;
	static int32_t t14 = -57092328;

	t14 = (((x825>>x826)==x827)*x828);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x838 = 39U;
	int8_t x839 = INT8_MIN;
	int16_t x840 = -1;
	int32_t t15 = -27483681;

	t15 = (((x837>>x838)==x839)*x840);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x845 = 76645374773907LLU;
	uint8_t x846 = 37U;
	int64_t x847 = -1LL;
	volatile int64_t x848 = INT64_MAX;
	int64_t t16 = -311244526LL;

	t16 = (((x845>>x846)==x847)*x848);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x921 = 31935548U;
	uint8_t x922 = 29U;
	int32_t x923 = 1014;
	uint32_t x924 = UINT32_MAX;
	volatile uint32_t t17 = 376741720U;

	t17 = (((x921>>x922)==x923)*x924);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x925 = 9;
	int8_t x926 = 2;
	int16_t x928 = -312;
	int32_t t18 = -17851;

	t18 = (((x925>>x926)==x927)*x928);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x966 = 29U;
	int8_t x967 = 3;
	static volatile uint32_t x968 = 1735318U;
	static volatile uint32_t t19 = 33U;

	t19 = (((x965>>x966)==x967)*x968);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x985 = 109379617LL;
	int8_t x986 = 4;
	static int64_t x987 = 130294744378LL;
	int64_t x988 = INT64_MIN;

	t20 = (((x985>>x986)==x987)*x988);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1030 = 1;
	int64_t x1031 = INT64_MIN;
	int16_t x1032 = INT16_MAX;
	volatile int32_t t21 = 19782;

	t21 = (((x1029>>x1030)==x1031)*x1032);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1073 = 47U;
	uint32_t x1074 = 11U;
	int64_t x1075 = INT64_MAX;
	int32_t t22 = 164;

	t22 = (((x1073>>x1074)==x1075)*x1076);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1086 = 14;
	int64_t x1087 = -1LL;
	static int32_t x1088 = -2816;
	static int32_t t23 = 5;

	t23 = (((x1085>>x1086)==x1087)*x1088);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1090 = 9U;
	int32_t x1091 = 2423;
	int16_t x1092 = -1;
	int32_t t24 = -403548953;

	t24 = (((x1089>>x1090)==x1091)*x1092);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1107 = UINT64_MAX;
	uint64_t x1108 = 10LLU;
	uint64_t t25 = 85LLU;

	t25 = (((x1105>>x1106)==x1107)*x1108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1198 = 0;
	volatile int32_t x1199 = -1;
	int16_t x1200 = 0;
	volatile int32_t t26 = 13;

	t26 = (((x1197>>x1198)==x1199)*x1200);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1253 = 4U;
	uint8_t x1254 = 1U;
	int32_t x1255 = INT32_MIN;
	volatile int64_t t27 = 827594953519849LL;

	t27 = (((x1253>>x1254)==x1255)*x1256);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1290 = 13U;
	int16_t x1291 = INT16_MAX;
	volatile uint32_t t28 = 256060134U;

	t28 = (((x1289>>x1290)==x1291)*x1292);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1293 = 36;
	static uint16_t x1294 = 6U;
	int16_t x1295 = INT16_MIN;
	int8_t x1296 = INT8_MIN;
	static int32_t t29 = -773333;

	t29 = (((x1293>>x1294)==x1295)*x1296);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1305 = 9594548LLU;
	int8_t x1306 = 1;
	int64_t x1307 = INT64_MIN;
	static int32_t t30 = -1874344;

	t30 = (((x1305>>x1306)==x1307)*x1308);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1381 = 9888718LL;
	uint8_t x1382 = 4U;
	volatile int16_t x1383 = INT16_MIN;
	volatile int64_t x1384 = INT64_MIN;
	int64_t t31 = 1243543LL;

	t31 = (((x1381>>x1382)==x1383)*x1384);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1446 = 2U;
	int16_t x1447 = INT16_MAX;
	uint32_t x1448 = 11620U;
	uint32_t t32 = 13U;

	t32 = (((x1445>>x1446)==x1447)*x1448);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1485 = 16;
	int64_t x1487 = 773696437804123LL;
	int8_t x1488 = 12;

	t33 = (((x1485>>x1486)==x1487)*x1488);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1657 = UINT32_MAX;
	uint16_t x1659 = 1717U;
	uint16_t x1660 = 116U;
	volatile int32_t t34 = 6009;

	t34 = (((x1657>>x1658)==x1659)*x1660);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1941 = 87738U;
	int8_t x1942 = 1;
	volatile int16_t x1943 = 0;
	int32_t x1944 = INT32_MIN;
	volatile int32_t t35 = 331;

	t35 = (((x1941>>x1942)==x1943)*x1944);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1953 = 2U;
	int16_t x1954 = 1;
	static uint64_t x1955 = 34285293410LLU;
	int16_t x1956 = 5066;
	static int32_t t36 = -1;

	t36 = (((x1953>>x1954)==x1955)*x1956);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2002 = 3U;
	uint16_t x2003 = 0U;
	volatile int8_t x2004 = INT8_MIN;

	t37 = (((x2001>>x2002)==x2003)*x2004);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2049 = INT64_MAX;
	uint8_t x2050 = 1U;
	int16_t x2051 = -1;
	int32_t t38 = -81451599;

	t38 = (((x2049>>x2050)==x2051)*x2052);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2169 = UINT32_MAX;
	static uint8_t x2170 = 19U;
	int32_t x2171 = -130262127;
	static volatile uint64_t x2172 = UINT64_MAX;
	static volatile uint64_t t39 = 317169817821LLU;

	t39 = (((x2169>>x2170)==x2171)*x2172);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2237 = 152251234;
	uint8_t x2238 = 3U;
	volatile int16_t x2239 = INT16_MIN;
	uint8_t x2240 = 9U;
	int32_t t40 = -169;

	t40 = (((x2237>>x2238)==x2239)*x2240);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2458 = 14LL;
	static uint16_t x2459 = UINT16_MAX;
	static int8_t x2460 = 5;
	volatile int32_t t41 = 1489;

	t41 = (((x2457>>x2458)==x2459)*x2460);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2613 = UINT8_MAX;
	static int32_t x2615 = INT32_MAX;
	uint64_t x2616 = 7203198492765590819LLU;
	uint64_t t42 = 176739098794453288LLU;

	t42 = (((x2613>>x2614)==x2615)*x2616);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x2849 = 18U;
	volatile int8_t x2851 = 37;
	volatile uint32_t x2852 = UINT32_MAX;
	volatile uint32_t t43 = 120U;

	t43 = (((x2849>>x2850)==x2851)*x2852);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2857 = 2737U;
	uint8_t x2858 = 4U;
	volatile uint8_t x2859 = UINT8_MAX;
	uint64_t x2860 = 3214682700551106LLU;

	t44 = (((x2857>>x2858)==x2859)*x2860);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2941 = 204291407U;
	static uint64_t x2942 = 0LLU;
	int64_t x2944 = INT64_MAX;

	t45 = (((x2941>>x2942)==x2943)*x2944);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2945 = 510867LLU;
	uint16_t x2946 = 50U;
	int8_t x2947 = INT8_MAX;
	int32_t t46 = 2263473;

	t46 = (((x2945>>x2946)==x2947)*x2948);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2969 = 41;
	volatile uint16_t x2970 = 12U;
	int32_t t47 = -438;

	t47 = (((x2969>>x2970)==x2971)*x2972);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3129 = 13698LLU;
	static uint8_t x3130 = 12U;
	int16_t x3131 = INT16_MAX;
	int32_t t48 = -356864838;

	t48 = (((x3129>>x3130)==x3131)*x3132);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x3173 = INT32_MAX;
	int32_t x3175 = INT32_MIN;

	t49 = (((x3173>>x3174)==x3175)*x3176);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x3222 = 4;
	int64_t x3224 = INT64_MIN;
	static volatile int64_t t50 = -20797695752LL;

	t50 = (((x3221>>x3222)==x3223)*x3224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3301 = 25946U;
	static int8_t x3302 = 0;
	int64_t x3303 = INT64_MIN;
	int32_t t51 = -299;

	t51 = (((x3301>>x3302)==x3303)*x3304);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x3385 = 213894769LLU;
	int32_t x3387 = 481;
	uint8_t x3388 = UINT8_MAX;
	volatile int32_t t52 = 3239510;

	t52 = (((x3385>>x3386)==x3387)*x3388);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3461 = 15LL;
	uint8_t x3462 = 1U;
	static uint16_t x3463 = 0U;
	int64_t x3464 = -1LL;

	t53 = (((x3461>>x3462)==x3463)*x3464);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3469 = 40494391U;
	int8_t x3470 = 3;
	volatile uint8_t x3471 = 30U;
	int32_t x3472 = 12674333;
	volatile int32_t t54 = -4;

	t54 = (((x3469>>x3470)==x3471)*x3472);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3633 = UINT16_MAX;
	int8_t x3634 = 0;
	uint32_t x3635 = 1U;
	volatile int8_t x3636 = INT8_MAX;
	volatile int32_t t55 = 3299;

	t55 = (((x3633>>x3634)==x3635)*x3636);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3697 = 0;
	volatile uint8_t x3698 = 5U;
	int8_t x3699 = INT8_MAX;
	uint64_t x3700 = 71581831LLU;
	uint64_t t56 = 8602949307915387103LLU;

	t56 = (((x3697>>x3698)==x3699)*x3700);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3721 = 526293LL;
	int16_t x3723 = -1;
	volatile int32_t x3724 = INT32_MIN;
	volatile int32_t t57 = -42;

	t57 = (((x3721>>x3722)==x3723)*x3724);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3737 = UINT32_MAX;
	static volatile int16_t x3738 = 0;
	int64_t x3739 = INT64_MIN;
	int64_t x3740 = INT64_MIN;
	static int64_t t58 = 847LL;

	t58 = (((x3737>>x3738)==x3739)*x3740);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3741 = 3U;
	volatile int32_t x3742 = 2;
	int64_t x3744 = INT64_MIN;

	t59 = (((x3741>>x3742)==x3743)*x3744);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3746 = 0;
	uint32_t x3747 = 42686667U;
	static int8_t x3748 = 3;
	int32_t t60 = 1512;

	t60 = (((x3745>>x3746)==x3747)*x3748);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3793 = 8U;
	uint8_t x3794 = 31U;
	int32_t x3795 = -1;
	static int32_t t61 = -362;

	t61 = (((x3793>>x3794)==x3795)*x3796);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x3810 = 1U;
	uint32_t x3812 = UINT32_MAX;
	volatile uint32_t t62 = 1567U;

	t62 = (((x3809>>x3810)==x3811)*x3812);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3881 = UINT32_MAX;
	int8_t x3883 = -4;
	static volatile int32_t t63 = 31;

	t63 = (((x3881>>x3882)==x3883)*x3884);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x4053 = 1570922190U;
	static int8_t x4054 = 2;
	int32_t x4055 = -1;
	uint32_t x4056 = UINT32_MAX;
	static volatile uint32_t t64 = 338295193U;

	t64 = (((x4053>>x4054)==x4055)*x4056);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4057 = 9145616315128219LLU;
	int16_t x4058 = 0;
	volatile uint64_t x4059 = UINT64_MAX;
	int32_t t65 = 404364653;

	t65 = (((x4057>>x4058)==x4059)*x4060);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4125 = 292U;
	uint16_t x4126 = 1U;
	static int64_t x4127 = INT64_MAX;
	volatile int64_t x4128 = 1034648564956LL;
	volatile int64_t t66 = -1363002968254010926LL;

	t66 = (((x4125>>x4126)==x4127)*x4128);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4153 = UINT32_MAX;
	static volatile int32_t x4154 = 0;
	uint64_t x4155 = 1743LLU;
	int32_t x4156 = 122;
	int32_t t67 = 62900205;

	t67 = (((x4153>>x4154)==x4155)*x4156);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x4193 = 38445590515520442LLU;
	int16_t x4196 = INT16_MIN;
	int32_t t68 = 13609;

	t68 = (((x4193>>x4194)==x4195)*x4196);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4257 = INT64_MAX;
	int8_t x4258 = 15;
	volatile uint64_t x4260 = UINT64_MAX;

	t69 = (((x4257>>x4258)==x4259)*x4260);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4293 = UINT8_MAX;
	int32_t x4295 = INT32_MIN;
	static uint16_t x4296 = 16U;
	volatile int32_t t70 = -128;

	t70 = (((x4293>>x4294)==x4295)*x4296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4301 = 2;
	static int16_t x4302 = 5;
	int64_t x4303 = 11952624376918386LL;
	uint64_t x4304 = 4045154006712LLU;

	t71 = (((x4301>>x4302)==x4303)*x4304);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4393 = UINT32_MAX;
	static volatile uint16_t x4394 = 29U;
	uint8_t x4395 = 50U;
	int64_t x4396 = 1502304000LL;

	t72 = (((x4393>>x4394)==x4395)*x4396);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4405 = INT32_MAX;
	static volatile int8_t x4406 = 3;
	static int16_t x4407 = INT16_MIN;
	static uint64_t x4408 = 4310385334358LLU;
	uint64_t t73 = 6533099867LLU;

	t73 = (((x4405>>x4406)==x4407)*x4408);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x4505 = UINT8_MAX;
	uint8_t x4506 = 15U;
	int64_t x4508 = -1LL;

	t74 = (((x4505>>x4506)==x4507)*x4508);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4573 = 0U;
	volatile uint8_t x4574 = 3U;
	int64_t x4575 = INT64_MIN;
	int32_t x4576 = -1;
	volatile int32_t t75 = -19812;

	t75 = (((x4573>>x4574)==x4575)*x4576);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4585 = 750080133391319LLU;
	uint16_t x4586 = 2U;
	volatile uint16_t x4588 = 16U;
	int32_t t76 = -1193;

	t76 = (((x4585>>x4586)==x4587)*x4588);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x4681 = 16096U;
	static uint8_t x4682 = 3U;
	static uint32_t x4683 = 296U;
	int32_t x4684 = -1;

	t77 = (((x4681>>x4682)==x4683)*x4684);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x4690 = 2LLU;
	uint64_t x4691 = 81413482193446571LLU;
	int32_t x4692 = INT32_MIN;
	volatile int32_t t78 = -24351441;

	t78 = (((x4689>>x4690)==x4691)*x4692);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x4718 = 5U;
	int64_t x4719 = -54295219LL;
	int16_t x4720 = INT16_MIN;
	int32_t t79 = -261288;

	t79 = (((x4717>>x4718)==x4719)*x4720);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4733 = INT64_MAX;
	int8_t x4734 = 61;

	t80 = (((x4733>>x4734)==x4735)*x4736);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4774 = 20U;
	static uint16_t x4776 = 81U;
	volatile int32_t t81 = -64546871;

	t81 = (((x4773>>x4774)==x4775)*x4776);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4797 = 9;
	volatile int64_t x4799 = 40714LL;
	int64_t x4800 = 1281726345LL;
	volatile int64_t t82 = 16053229664218092LL;

	t82 = (((x4797>>x4798)==x4799)*x4800);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4887 = INT32_MIN;
	int32_t x4888 = INT32_MIN;
	static int32_t t83 = 1;

	t83 = (((x4885>>x4886)==x4887)*x4888);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4889 = UINT64_MAX;
	int64_t x4891 = -888725784053009049LL;
	static int16_t x4892 = -1;
	volatile int32_t t84 = -4174754;

	t84 = (((x4889>>x4890)==x4891)*x4892);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x4949 = UINT8_MAX;
	int64_t x4950 = 0LL;
	static uint8_t x4951 = 11U;

	t85 = (((x4949>>x4950)==x4951)*x4952);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5069 = UINT64_MAX;
	uint8_t x5070 = 3U;
	uint64_t t86 = 2632LLU;

	t86 = (((x5069>>x5070)==x5071)*x5072);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5105 = UINT16_MAX;
	int8_t x5106 = 4;
	int16_t x5107 = INT16_MAX;
	uint8_t x5108 = UINT8_MAX;

	t87 = (((x5105>>x5106)==x5107)*x5108);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5165 = 8;
	int8_t x5166 = 0;
	int16_t x5167 = INT16_MAX;
	uint32_t x5168 = UINT32_MAX;
	uint32_t t88 = 3591390U;

	t88 = (((x5165>>x5166)==x5167)*x5168);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5237 = 5LLU;
	static uint16_t x5238 = 14U;
	static int64_t x5239 = 4138008057LL;
	uint64_t t89 = 8033000668719655323LLU;

	t89 = (((x5237>>x5238)==x5239)*x5240);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x5321 = UINT8_MAX;
	static uint16_t x5322 = 2U;
	volatile uint16_t x5323 = UINT16_MAX;
	int64_t x5324 = INT64_MIN;
	static volatile int64_t t90 = -11177059593LL;

	t90 = (((x5321>>x5322)==x5323)*x5324);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x5361 = 29878U;
	uint16_t x5362 = 3U;
	int32_t x5364 = 609;
	int32_t t91 = 44276;

	t91 = (((x5361>>x5362)==x5363)*x5364);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5377 = 135481689513755LL;
	uint8_t x5378 = 1U;
	static uint8_t x5379 = 28U;
	volatile int64_t x5380 = INT64_MIN;

	t92 = (((x5377>>x5378)==x5379)*x5380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5401 = 1;
	volatile uint16_t x5402 = 1U;
	uint32_t x5403 = 524U;
	static int32_t x5404 = -1;
	volatile int32_t t93 = 1;

	t93 = (((x5401>>x5402)==x5403)*x5404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x5462 = 3LLU;
	volatile int8_t x5463 = -1;
	int16_t x5464 = INT16_MAX;
	int32_t t94 = -13;

	t94 = (((x5461>>x5462)==x5463)*x5464);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5530 = 6;
	static int64_t x5532 = INT64_MAX;
	int64_t t95 = -191019LL;

	t95 = (((x5529>>x5530)==x5531)*x5532);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5617 = UINT32_MAX;
	static uint8_t x5618 = 11U;
	int16_t x5619 = 5263;
	uint16_t x5620 = 1U;
	int32_t t96 = 637482152;

	t96 = (((x5617>>x5618)==x5619)*x5620);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5634 = 2;
	int16_t x5635 = -1;
	int8_t x5636 = -1;
	volatile int32_t t97 = -2866;

	t97 = (((x5633>>x5634)==x5635)*x5636);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5641 = UINT16_MAX;
	uint16_t x5642 = 0U;
	int64_t x5643 = -1LL;
	volatile int8_t x5644 = 4;
	int32_t t98 = 167659;

	t98 = (((x5641>>x5642)==x5643)*x5644);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x5685 = 5U;
	static uint8_t x5686 = 3U;
	int8_t x5687 = INT8_MIN;
	volatile uint16_t x5688 = 0U;
	int32_t t99 = -6171;

	t99 = (((x5685>>x5686)==x5687)*x5688);

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

