#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x151 = UINT64_MAX;
volatile uint32_t x254 = 766241U;
int32_t x333 = 0;
volatile int64_t x498 = INT64_MAX;
uint16_t x577 = UINT16_MAX;
static uint8_t x874 = 30U;
uint8_t x948 = 12U;
static volatile uint64_t t8 = 6539937875313LLU;
int64_t x1203 = INT64_MAX;
static int8_t x1266 = 26;
volatile int32_t x1296 = 1;
volatile uint64_t t11 = 352922932307280315LLU;
int64_t x1367 = INT64_MAX;
volatile int64_t t12 = -35990096LL;
int8_t x1430 = INT8_MAX;
int32_t x1432 = 14;
int64_t x1637 = INT64_MIN;
volatile uint16_t x1638 = UINT16_MAX;
uint16_t x1829 = 69U;
static int16_t x1832 = 1;
static uint32_t x1849 = 22572925U;
uint16_t x1959 = UINT16_MAX;
static int32_t x1960 = 1;
uint8_t x2740 = 0U;
uint16_t x2746 = 21070U;
static int8_t x2748 = 3;
volatile int32_t x2807 = 23268;
uint32_t x2835 = 27940840U;
uint32_t x3006 = UINT32_MAX;
uint64_t x3008 = 13LLU;
volatile int16_t x3041 = -1;
static uint64_t x3042 = 1873170487285419LLU;
static uint8_t x3063 = UINT8_MAX;
volatile uint32_t t40 = 1598U;
int32_t t42 = 12;
static uint64_t t44 = 20887LLU;
int16_t x3310 = INT16_MIN;
int16_t x3445 = 2;
int8_t x3532 = 9;
volatile uint64_t x3671 = 4327986535969862867LLU;
int32_t x3699 = 9;
uint32_t x3700 = 1U;
int8_t x3893 = -1;
volatile int32_t t54 = 701054652;
volatile uint64_t x3966 = 257323033LLU;
uint8_t x3967 = 90U;
uint16_t x3993 = 1506U;
volatile uint8_t x4012 = 1U;
volatile int8_t x4413 = -1;
int32_t x4415 = INT32_MAX;
static int64_t x4495 = 35443LL;
int8_t x4496 = 8;
uint16_t x4634 = 109U;
uint32_t x4636 = 1U;
static int8_t x4689 = -3;
uint16_t x4704 = 4U;
static int32_t t67 = 27834;
uint64_t x4878 = UINT64_MAX;
static uint16_t x5207 = UINT16_MAX;
int64_t t71 = -17LL;
uint8_t x5571 = UINT8_MAX;
uint64_t x5719 = 15016976541702LLU;
uint16_t x5721 = 12624U;
uint8_t x5785 = 5U;
uint8_t x5786 = 3U;
int8_t x5821 = INT8_MIN;
static uint16_t x5824 = 6U;
uint32_t t77 = 511328727U;
int32_t x5846 = -1;
uint16_t x5847 = 23871U;
int8_t x5858 = INT8_MAX;
uint8_t x5859 = UINT8_MAX;
volatile uint64_t t80 = 818083392622LLU;
volatile uint64_t t81 = 788LLU;
static volatile int8_t x6317 = -1;
volatile uint32_t t82 = 38U;
uint8_t x6344 = 2U;
int64_t t84 = 1935LL;
int16_t x6382 = INT16_MIN;
volatile int32_t x6621 = INT32_MAX;
volatile int64_t x6622 = -1594416063936523849LL;
volatile uint8_t x6624 = 1U;
uint8_t x6691 = 115U;
int64_t t88 = -2592910851624LL;
volatile int32_t x6739 = 11161110;
uint8_t x7067 = UINT8_MAX;
static int8_t x7068 = 3;
volatile int8_t x7116 = 1;
volatile int32_t t95 = 204408550;
uint16_t x7247 = 12U;
volatile uint32_t t96 = 1530U;
uint32_t x7697 = 263U;


void f0(void) {
	int32_t x149 = INT32_MAX;
	int32_t x150 = INT32_MAX;
	uint64_t x152 = 14LLU;
	uint64_t t0 = 70582437004LLU;

	t0 = (x149%(x150&(x151>>x152)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x253 = 2006743643197610583LL;
	int16_t x255 = 36;
	int8_t x256 = 0;
	volatile int64_t t1 = -19471715866LL;

	t1 = (x253%(x254&(x255>>x256)));

	if (t1 != 23LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = 10;
	volatile int16_t x336 = 1;
	uint64_t t2 = 503512464242645LLU;

	t2 = (x333%(x334&(x335>>x336)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x497 = INT16_MIN;
	uint64_t x499 = 144334977267088088LLU;
	volatile uint8_t x500 = 1U;
	static uint64_t t3 = 5534275LLU;

	t3 = (x497%(x498&(x499>>x500)));

	if (t3 != 44034472155787628LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x578 = 151U;
	uint8_t x579 = 82U;
	volatile uint16_t x580 = 5U;
	int32_t t4 = -15604;

	t4 = (x577%(x578&(x579>>x580)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x597 = 710989745U;
	static uint16_t x598 = 1081U;
	static int32_t x599 = 16215619;
	static uint8_t x600 = 1U;
	uint32_t t5 = 42331U;

	t5 = (x597%(x598&(x599>>x600)));

	if (t5 != 809U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x873 = INT8_MIN;
	int64_t x875 = 17028721197905518LL;
	int8_t x876 = 1;
	int64_t t6 = 2796860441774791580LL;

	t6 = (x873%(x874&(x875>>x876)));

	if (t6 != -18LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x945 = -703;
	int64_t x946 = -1LL;
	uint32_t x947 = 595093490U;
	volatile int64_t t7 = 416706905827665LL;

	t7 = (x945%(x946&(x947>>x948)));

	if (t7 != -703LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x1137 = INT16_MAX;
	static int16_t x1138 = INT16_MAX;
	uint64_t x1139 = UINT64_MAX;
	int8_t x1140 = 15;

	t8 = (x1137%(x1138&(x1139>>x1140)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x1201 = 9;
	volatile int32_t x1202 = -1915233;
	static volatile uint64_t x1204 = 2LLU;
	volatile int64_t t9 = 34LL;

	t9 = (x1201%(x1202&(x1203>>x1204)));

	if (t9 != 9LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x1265 = INT32_MIN;
	int16_t x1267 = INT16_MAX;
	volatile uint64_t x1268 = 11LLU;
	volatile int32_t t10 = -3875441;

	t10 = (x1265%(x1266&(x1267>>x1268)));

	if (t10 != -8) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x1293 = UINT64_MAX;
	int16_t x1294 = INT16_MAX;
	static uint8_t x1295 = 4U;

	t11 = (x1293%(x1294&(x1295>>x1296)));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x1365 = 67U;
	static volatile uint16_t x1366 = UINT16_MAX;
	uint16_t x1368 = 14U;

	t12 = (x1365%(x1366&(x1367>>x1368)));

	if (t12 != 67LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x1429 = INT32_MIN;
	int64_t x1431 = INT64_MAX;
	volatile int64_t t13 = -241813598990421LL;

	t13 = (x1429%(x1430&(x1431>>x1432)));

	if (t13 != -8LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1457 = 72U;
	uint8_t x1458 = 7U;
	uint64_t x1459 = 75962508536824LLU;
	int8_t x1460 = 14;
	uint64_t t14 = 239228014888123LLU;

	t14 = (x1457%(x1458&(x1459>>x1460)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x1609 = 2U;
	int64_t x1610 = INT64_MAX;
	int32_t x1611 = INT32_MAX;
	static uint64_t x1612 = 3LLU;
	volatile int64_t t15 = 973675075946797LL;

	t15 = (x1609%(x1610&(x1611>>x1612)));

	if (t15 != 2LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x1639 = 9272U;
	int64_t x1640 = 1LL;
	static volatile int64_t t16 = 15989422190811LL;

	t16 = (x1637%(x1638&(x1639>>x1640)));

	if (t16 != -740LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1673 = 29520945720126LL;
	int32_t x1674 = INT32_MAX;
	uint64_t x1675 = 1559802919641690373LLU;
	uint8_t x1676 = 1U;
	uint64_t t17 = 0LLU;

	t17 = (x1673%(x1674&(x1675>>x1676)));

	if (t17 != 438751536LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x1741 = -656503986LL;
	int8_t x1742 = 1;
	uint32_t x1743 = UINT32_MAX;
	uint8_t x1744 = 21U;
	int64_t t18 = -14935017509368967LL;

	t18 = (x1741%(x1742&(x1743>>x1744)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1830 = INT8_MIN;
	uint64_t x1831 = 29537701278LLU;
	static uint64_t t19 = 19239957LLU;

	t19 = (x1829%(x1830&(x1831>>x1832)));

	if (t19 != 69LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1850 = 1U;
	int64_t x1851 = 10235159622586267LL;
	uint8_t x1852 = 0U;
	int64_t t20 = 7206233674448LL;

	t20 = (x1849%(x1850&(x1851>>x1852)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1957 = 112U;
	uint8_t x1958 = UINT8_MAX;
	volatile int32_t t21 = 61;

	t21 = (x1957%(x1958&(x1959>>x1960)));

	if (t21 != 112) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x2237 = 13;
	static volatile int32_t x2238 = INT32_MAX;
	uint16_t x2239 = UINT16_MAX;
	static uint16_t x2240 = 0U;
	volatile int32_t t22 = -40;

	t22 = (x2237%(x2238&(x2239>>x2240)));

	if (t22 != 13) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x2257 = 1045079989LLU;
	int32_t x2258 = -1;
	uint64_t x2259 = UINT64_MAX;
	static volatile int8_t x2260 = 2;
	volatile uint64_t t23 = 2623247472759LLU;

	t23 = (x2257%(x2258&(x2259>>x2260)));

	if (t23 != 1045079989LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x2549 = 9LLU;
	volatile int32_t x2550 = 3300477;
	volatile uint32_t x2551 = 4191157U;
	uint32_t x2552 = 1U;
	volatile uint64_t t24 = 33LLU;

	t24 = (x2549%(x2550&(x2551>>x2552)));

	if (t24 != 9LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x2601 = 6U;
	uint8_t x2602 = 73U;
	uint16_t x2603 = 6U;
	uint8_t x2604 = 1U;
	volatile int32_t t25 = 1144;

	t25 = (x2601%(x2602&(x2603>>x2604)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2657 = -1;
	int8_t x2658 = INT8_MIN;
	int32_t x2659 = INT32_MAX;
	uint8_t x2660 = 0U;
	int32_t t26 = -115474;

	t26 = (x2657%(x2658&(x2659>>x2660)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2737 = UINT32_MAX;
	uint16_t x2738 = 22U;
	int8_t x2739 = INT8_MAX;
	volatile uint32_t t27 = 3U;

	t27 = (x2737%(x2738&(x2739>>x2740)));

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2745 = INT8_MIN;
	int8_t x2747 = INT8_MAX;
	volatile int32_t t28 = -38093;

	t28 = (x2745%(x2746&(x2747>>x2748)));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2769 = INT64_MIN;
	int64_t x2770 = INT64_MAX;
	volatile uint32_t x2771 = 30097409U;
	volatile int8_t x2772 = 20;
	volatile int64_t t29 = 20268872LL;

	t29 = (x2769%(x2770&(x2771>>x2772)));

	if (t29 != -8LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2805 = INT8_MIN;
	int64_t x2806 = 1272047267LL;
	uint16_t x2808 = 0U;
	volatile int64_t t30 = 6758268387138LL;

	t30 = (x2805%(x2806&(x2807>>x2808)));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2829 = INT32_MIN;
	int32_t x2830 = -44245;
	int32_t x2831 = 150401;
	static int8_t x2832 = 0;
	static volatile int32_t t31 = -18;

	t31 = (x2829%(x2830&(x2831>>x2832)));

	if (t31 != -148073) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2833 = UINT64_MAX;
	int8_t x2834 = INT8_MIN;
	int16_t x2836 = 1;
	static uint64_t t32 = 606LLU;

	t32 = (x2833%(x2834&(x2835>>x2836)));

	if (t32 != 10889727LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x2885 = -1;
	uint8_t x2886 = UINT8_MAX;
	int64_t x2887 = INT64_MAX;
	volatile uint8_t x2888 = 1U;
	int64_t t33 = 3635017819727181LL;

	t33 = (x2885%(x2886&(x2887>>x2888)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2933 = -87097565LL;
	int32_t x2934 = -880833;
	uint8_t x2935 = 7U;
	int8_t x2936 = 0;
	volatile int64_t t34 = -23349552802229598LL;

	t34 = (x2933%(x2934&(x2935>>x2936)));

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2969 = 54U;
	int8_t x2970 = -1;
	int64_t x2971 = 7119948127889606LL;
	int8_t x2972 = 2;
	volatile int64_t t35 = 8128779803640LL;

	t35 = (x2969%(x2970&(x2971>>x2972)));

	if (t35 != 54LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x3005 = 17U;
	static int64_t x3007 = INT64_MAX;
	volatile int64_t t36 = 7LL;

	t36 = (x3005%(x3006&(x3007>>x3008)));

	if (t36 != 17LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x3025 = 6U;
	int8_t x3026 = INT8_MAX;
	uint8_t x3027 = 4U;
	uint8_t x3028 = 1U;
	volatile int32_t t37 = -174017;

	t37 = (x3025%(x3026&(x3027>>x3028)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x3043 = INT64_MAX;
	uint16_t x3044 = 24U;
	volatile uint64_t t38 = 6LLU;

	t38 = (x3041%(x3042&(x3043>>x3044)));

	if (t38 != 52317582697LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3061 = INT32_MAX;
	volatile int32_t x3062 = -2;
	static uint16_t x3064 = 4U;
	volatile int32_t t39 = -3595;

	t39 = (x3061%(x3062&(x3063>>x3064)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x3141 = UINT8_MAX;
	uint8_t x3142 = UINT8_MAX;
	uint32_t x3143 = 1564193U;
	static uint8_t x3144 = 3U;

	t40 = (x3141%(x3142&(x3143>>x3144)));

	if (t40 != 59U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3153 = -1;
	static int32_t x3154 = INT32_MAX;
	uint16_t x3155 = 3U;
	int16_t x3156 = 1;
	int32_t t41 = -9162;

	t41 = (x3153%(x3154&(x3155>>x3156)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3209 = -9;
	uint8_t x3210 = UINT8_MAX;
	static volatile uint16_t x3211 = UINT16_MAX;
	static uint16_t x3212 = 11U;

	t42 = (x3209%(x3210&(x3211>>x3212)));

	if (t42 != -9) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x3225 = UINT16_MAX;
	uint8_t x3226 = 107U;
	static uint16_t x3227 = 3785U;
	uint8_t x3228 = 0U;
	static int32_t t43 = 289;

	t43 = (x3225%(x3226&(x3227>>x3228)));

	if (t43 != 54) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3269 = 10;
	volatile int64_t x3270 = 97450585LL;
	uint64_t x3271 = 3962846149117LLU;
	int8_t x3272 = 1;

	t44 = (x3269%(x3270&(x3271>>x3272)));

	if (t44 != 10LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x3309 = 28617U;
	int64_t x3311 = INT64_MAX;
	uint64_t x3312 = 28LLU;
	volatile int64_t t45 = -1526838103101761137LL;

	t45 = (x3309%(x3310&(x3311>>x3312)));

	if (t45 != 28617LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3373 = UINT8_MAX;
	uint64_t x3374 = UINT64_MAX;
	uint32_t x3375 = 1799U;
	int8_t x3376 = 1;
	uint64_t t46 = 25146633LLU;

	t46 = (x3373%(x3374&(x3375>>x3376)));

	if (t46 != 255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3446 = UINT8_MAX;
	uint16_t x3447 = 214U;
	volatile uint32_t x3448 = 4U;
	int32_t t47 = -3;

	t47 = (x3445%(x3446&(x3447>>x3448)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3477 = INT16_MIN;
	int8_t x3478 = -23;
	int8_t x3479 = INT8_MAX;
	uint8_t x3480 = 3U;
	volatile int32_t t48 = 172;

	t48 = (x3477%(x3478&(x3479>>x3480)));

	if (t48 != -8) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3529 = INT64_MIN;
	static int32_t x3530 = 148441515;
	uint64_t x3531 = UINT64_MAX;
	volatile uint64_t t49 = 12825LLU;

	t49 = (x3529%(x3530&(x3531>>x3532)));

	if (t49 != 45943148LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3641 = INT16_MAX;
	int16_t x3642 = INT16_MIN;
	uint64_t x3643 = 518587240611406132LLU;
	static uint8_t x3644 = 0U;
	static volatile uint64_t t50 = 3563LLU;

	t50 = (x3641%(x3642&(x3643>>x3644)));

	if (t50 != 32767LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3669 = 1U;
	int64_t x3670 = 31LL;
	static uint8_t x3672 = 15U;
	volatile uint64_t t51 = 8046LLU;

	t51 = (x3669%(x3670&(x3671>>x3672)));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3697 = -4611;
	static uint8_t x3698 = 5U;
	volatile int32_t t52 = -257;

	t52 = (x3697%(x3698&(x3699>>x3700)));

	if (t52 != -3) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3713 = 17U;
	static uint8_t x3714 = 14U;
	uint32_t x3715 = 457270057U;
	static int8_t x3716 = 0;
	volatile uint32_t t53 = 166U;

	t53 = (x3713%(x3714&(x3715>>x3716)));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3894 = INT32_MAX;
	uint16_t x3895 = UINT16_MAX;
	uint32_t x3896 = 0U;

	t54 = (x3893%(x3894&(x3895>>x3896)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3965 = INT64_MIN;
	int64_t x3968 = 0LL;
	volatile uint64_t t55 = 242851585LLU;

	t55 = (x3965%(x3966&(x3967>>x3968)));

	if (t55 != 8LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3981 = 1236728972U;
	uint32_t x3982 = UINT32_MAX;
	uint64_t x3983 = 89695LLU;
	uint64_t x3984 = 4LLU;
	static volatile uint64_t t56 = 1092992LLU;

	t56 = (x3981%(x3982&(x3983>>x3984)));

	if (t56 != 2537LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3994 = INT16_MAX;
	static uint8_t x3995 = 1U;
	int8_t x3996 = 0;
	volatile int32_t t57 = 0;

	t57 = (x3993%(x3994&(x3995>>x3996)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4009 = 949;
	int64_t x4010 = INT64_MAX;
	int16_t x4011 = INT16_MAX;
	int64_t t58 = 118599LL;

	t58 = (x4009%(x4010&(x4011>>x4012)));

	if (t58 != 949LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x4037 = INT32_MIN;
	static volatile int64_t x4038 = -1LL;
	volatile int64_t x4039 = INT64_MAX;
	int32_t x4040 = 0;
	volatile int64_t t59 = 15LL;

	t59 = (x4037%(x4038&(x4039>>x4040)));

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x4089 = INT32_MIN;
	int16_t x4090 = 665;
	static uint8_t x4091 = UINT8_MAX;
	int16_t x4092 = 1;
	int32_t t60 = 36616900;

	t60 = (x4089%(x4090&(x4091>>x4092)));

	if (t60 != -23) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4173 = INT32_MIN;
	volatile int16_t x4174 = 119;
	int8_t x4175 = INT8_MAX;
	uint32_t x4176 = 3U;
	volatile int32_t t61 = -366658834;

	t61 = (x4173%(x4174&(x4175>>x4176)));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x4305 = INT32_MIN;
	int32_t x4306 = -403650;
	uint8_t x4307 = UINT8_MAX;
	uint8_t x4308 = 1U;
	volatile int32_t t62 = -63378983;

	t62 = (x4305%(x4306&(x4307>>x4308)));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4414 = UINT16_MAX;
	uint8_t x4416 = 2U;
	volatile int32_t t63 = 0;

	t63 = (x4413%(x4414&(x4415>>x4416)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4493 = INT16_MIN;
	int8_t x4494 = INT8_MIN;
	volatile int64_t t64 = 2202463891961399762LL;

	t64 = (x4493%(x4494&(x4495>>x4496)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x4633 = -3;
	int16_t x4635 = 21;
	int32_t t65 = -93713526;

	t65 = (x4633%(x4634&(x4635>>x4636)));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4690 = 6;
	uint16_t x4691 = 22632U;
	int8_t x4692 = 1;
	volatile int32_t t66 = 98441465;

	t66 = (x4689%(x4690&(x4691>>x4692)));

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4701 = INT8_MIN;
	static int8_t x4702 = -1;
	int8_t x4703 = INT8_MAX;

	t67 = (x4701%(x4702&(x4703>>x4704)));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x4757 = 541LLU;
	int64_t x4758 = -1LL;
	int16_t x4759 = INT16_MAX;
	static int8_t x4760 = 0;
	volatile uint64_t t68 = 234035494330315762LLU;

	t68 = (x4757%(x4758&(x4759>>x4760)));

	if (t68 != 541LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x4877 = -1;
	uint64_t x4879 = UINT64_MAX;
	int32_t x4880 = 28;
	volatile uint64_t t69 = 1LLU;

	t69 = (x4877%(x4878&(x4879>>x4880)));

	if (t69 != 268435455LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5205 = 11U;
	int32_t x5206 = -1;
	uint8_t x5208 = 0U;
	volatile int32_t t70 = 12;

	t70 = (x5205%(x5206&(x5207>>x5208)));

	if (t70 != 11) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x5309 = 0U;
	volatile int64_t x5310 = 11000953616LL;
	int16_t x5311 = 1676;
	uint16_t x5312 = 2U;

	t71 = (x5309%(x5310&(x5311>>x5312)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x5569 = 50344884LLU;
	uint8_t x5570 = 1U;
	int8_t x5572 = 4;
	uint64_t t72 = 477LLU;

	t72 = (x5569%(x5570&(x5571>>x5572)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x5717 = -1LL;
	static int8_t x5718 = INT8_MIN;
	volatile int8_t x5720 = 11;
	volatile uint64_t t73 = 15LLU;

	t73 = (x5717%(x5718&(x5719>>x5720)));

	if (t73 != 74800383LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5722 = INT32_MAX;
	int8_t x5723 = INT8_MAX;
	uint16_t x5724 = 3U;
	static int32_t t74 = 9;

	t74 = (x5721%(x5722&(x5723>>x5724)));

	if (t74 != 9) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x5761 = UINT16_MAX;
	int16_t x5762 = -3;
	uint32_t x5763 = UINT32_MAX;
	uint8_t x5764 = 31U;
	volatile uint32_t t75 = 3U;

	t75 = (x5761%(x5762&(x5763>>x5764)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5787 = UINT64_MAX;
	uint8_t x5788 = 42U;
	uint64_t t76 = 559942850LLU;

	t76 = (x5785%(x5786&(x5787>>x5788)));

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5822 = 1;
	static volatile uint32_t x5823 = 463579259U;

	t77 = (x5821%(x5822&(x5823>>x5824)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x5845 = INT8_MAX;
	volatile uint8_t x5848 = 5U;
	int32_t t78 = -1;

	t78 = (x5845%(x5846&(x5847>>x5848)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5857 = 108574685LLU;
	volatile int64_t x5860 = 0LL;
	static uint64_t t79 = 1623LLU;

	t79 = (x5857%(x5858&(x5859>>x5860)));

	if (t79 != 99LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x6073 = UINT64_MAX;
	int32_t x6074 = -1;
	uint32_t x6075 = UINT32_MAX;
	uint8_t x6076 = 6U;

	t80 = (x6073%(x6074&(x6075>>x6076)));

	if (t80 != 4095LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x6265 = 3200917347602387LLU;
	int16_t x6266 = INT16_MAX;
	static uint64_t x6267 = UINT64_MAX;
	uint16_t x6268 = 1U;

	t81 = (x6265%(x6266&(x6267>>x6268)));

	if (t81 != 22519LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x6318 = -1;
	static volatile uint32_t x6319 = 192U;
	static uint8_t x6320 = 4U;

	t82 = (x6317%(x6318&(x6319>>x6320)));

	if (t82 != 3U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x6333 = -1;
	int8_t x6334 = INT8_MIN;
	uint64_t x6335 = 18200581801LLU;
	uint8_t x6336 = 6U;
	volatile uint64_t t83 = 185747885426033943LLU;

	t83 = (x6333%(x6334&(x6335>>x6336)));

	if (t83 != 23599615LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x6341 = -1LL;
	uint8_t x6342 = UINT8_MAX;
	int64_t x6343 = 24392085048697239LL;

	t84 = (x6341%(x6342&(x6343>>x6344)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x6361 = 0U;
	uint16_t x6362 = UINT16_MAX;
	volatile int64_t x6363 = INT64_MAX;
	int16_t x6364 = 1;
	static int64_t t85 = 22273806512167LL;

	t85 = (x6361%(x6362&(x6363>>x6364)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x6381 = -5;
	int64_t x6383 = INT64_MAX;
	static uint64_t x6384 = 30LLU;
	volatile int64_t t86 = -1143243LL;

	t86 = (x6381%(x6382&(x6383>>x6384)));

	if (t86 != -5LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x6623 = 4885U;
	static int64_t t87 = -815100LL;

	t87 = (x6621%(x6622&(x6623>>x6624)));

	if (t87 != 53LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6689 = INT8_MIN;
	int64_t x6690 = -147588023343124LL;
	static uint8_t x6692 = 0U;

	t88 = (x6689%(x6690&(x6691>>x6692)));

	if (t88 != -32LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x6737 = INT32_MIN;
	int16_t x6738 = -1;
	uint8_t x6740 = 7U;
	int32_t t89 = -979;

	t89 = (x6737%(x6738&(x6739>>x6740)));

	if (t89 != -20560) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x6841 = 12365U;
	static int8_t x6842 = -6;
	uint32_t x6843 = UINT32_MAX;
	volatile uint8_t x6844 = 1U;
	uint32_t t90 = 308707U;

	t90 = (x6841%(x6842&(x6843>>x6844)));

	if (t90 != 12365U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x6861 = UINT16_MAX;
	uint8_t x6862 = 13U;
	int64_t x6863 = INT64_MAX;
	uint16_t x6864 = 58U;
	volatile int64_t t91 = 18358173LL;

	t91 = (x6861%(x6862&(x6863>>x6864)));

	if (t91 != 2LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x6925 = UINT16_MAX;
	uint32_t x6926 = UINT32_MAX;
	int16_t x6927 = INT16_MAX;
	int8_t x6928 = 1;
	volatile uint32_t t92 = 3670U;

	t92 = (x6925%(x6926&(x6927>>x6928)));

	if (t92 != 3U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6953 = 722543LL;
	int16_t x6954 = INT16_MIN;
	static int64_t x6955 = 4201666428472506LL;
	uint8_t x6956 = 0U;
	int64_t t93 = -4706882314539LL;

	t93 = (x6953%(x6954&(x6955>>x6956)));

	if (t93 != 722543LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x7065 = 0U;
	int64_t x7066 = -3582LL;
	int64_t t94 = -1706LL;

	t94 = (x7065%(x7066&(x7067>>x7068)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x7113 = 15;
	int8_t x7114 = 53;
	int32_t x7115 = INT32_MAX;

	t95 = (x7113%(x7114&(x7115>>x7116)));

	if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x7245 = INT32_MIN;
	static uint32_t x7246 = UINT32_MAX;
	volatile int32_t x7248 = 0;

	t96 = (x7245%(x7246&(x7247>>x7248)));

	if (t96 != 8U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x7485 = INT64_MIN;
	volatile int64_t x7486 = INT64_MAX;
	uint64_t x7487 = UINT64_MAX;
	static uint32_t x7488 = 1U;
	uint64_t t97 = 3884LLU;

	t97 = (x7485%(x7486&(x7487>>x7488)));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x7698 = 3450095U;
	volatile uint16_t x7699 = UINT16_MAX;
	volatile int8_t x7700 = 3;
	volatile uint32_t t98 = 128U;

	t98 = (x7697%(x7698&(x7699>>x7700)));

	if (t98 != 263U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x7741 = 4461U;
	uint32_t x7742 = 7333743U;
	static int8_t x7743 = 3;
	static int8_t x7744 = 0;
	uint32_t t99 = 883672331U;

	t99 = (x7741%(x7742&(x7743>>x7744)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

