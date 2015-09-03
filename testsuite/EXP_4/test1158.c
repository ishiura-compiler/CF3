#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x48 = 21U;
uint64_t x50 = UINT64_MAX;
static volatile int16_t x69 = -479;
uint32_t x71 = 0U;
int32_t x121 = -1;
uint32_t t5 = 449900U;
volatile uint64_t t6 = 1749281490555477028LLU;
uint8_t x212 = 0U;
uint64_t t8 = 7405099733LLU;
int32_t t10 = 164;
static int64_t x617 = INT64_MIN;
volatile uint32_t x632 = 1U;
volatile uint16_t x789 = 589U;
static int16_t x791 = 0;
volatile int64_t t16 = 544728221060LL;
volatile int32_t x817 = INT32_MIN;
int8_t x820 = 0;
static volatile int32_t t17 = -9;
int16_t x897 = INT16_MIN;
int16_t x898 = INT16_MIN;
int8_t x904 = 10;
volatile int32_t t20 = 601;
uint32_t x917 = UINT32_MAX;
volatile uint32_t x920 = 1U;
uint16_t x924 = 3U;
uint64_t t22 = 1242209LLU;
int32_t x958 = INT32_MIN;
volatile int64_t x1013 = INT64_MIN;
uint16_t x1014 = 4U;
uint64_t x1015 = UINT64_MAX;
static uint8_t x1016 = 60U;
int64_t x1166 = -1LL;
volatile uint16_t x1475 = 6946U;
uint16_t x1548 = 1U;
volatile int32_t x1582 = -961866896;
uint8_t x1584 = 48U;
volatile int8_t x1675 = 0;
static volatile uint16_t x1824 = 0U;
int64_t x1905 = -1LL;
int64_t x1907 = INT64_MAX;
uint32_t x1973 = 0U;
uint64_t x1975 = UINT64_MAX;
uint8_t x2077 = UINT8_MAX;
uint16_t x2078 = 869U;
volatile int16_t x2079 = INT16_MAX;
int16_t x2293 = INT16_MAX;
int16_t x2304 = 33;
uint64_t x2383 = 3949LLU;
volatile uint16_t x2620 = 4U;
int32_t t43 = -405075623;
uint32_t x2623 = 512548386U;
volatile int64_t t44 = 81629LL;
uint16_t x2729 = UINT16_MAX;
uint16_t x2752 = 2U;
uint16_t x2796 = 1U;
uint32_t x2809 = 93354U;
volatile uint32_t t48 = 1218443U;
int32_t x3095 = INT32_MAX;
int16_t x3143 = 6754;
int16_t x3321 = INT16_MAX;
int32_t x3322 = -1;
uint16_t x3324 = 29U;
uint32_t x3481 = UINT32_MAX;
uint16_t x3483 = 67U;
static volatile int8_t x3552 = 0;
static uint16_t x3604 = 1U;
static int64_t x3709 = -37LL;
int16_t x3714 = INT16_MAX;
uint8_t x3813 = 110U;
volatile int8_t x3815 = 0;
uint64_t x4003 = UINT64_MAX;
int8_t x4126 = -1;
int16_t x4135 = 2999;
static volatile int32_t t66 = -487181;
uint16_t x4144 = 6U;
volatile uint16_t x4146 = 7U;
uint32_t x4165 = UINT32_MAX;
int32_t x4335 = 12794;
uint16_t x4336 = 3U;
int64_t t72 = -92706576LL;
int32_t x4477 = INT32_MIN;
static uint64_t x4491 = 549979060LLU;
int16_t x4492 = 1;
volatile uint8_t x4540 = 4U;
uint64_t x4542 = 44686709467810LLU;
uint32_t x4544 = 10U;
int16_t x4641 = -1;
uint8_t x4644 = 0U;
volatile int64_t x4702 = -1LL;
int8_t x4703 = 1;
uint8_t x4704 = 5U;
int16_t x4734 = 5727;
int16_t x4735 = 1;
uint32_t x4812 = 8U;
static volatile int64_t t86 = 195624588338464478LL;
int32_t x4918 = INT32_MIN;
int64_t t87 = -1LL;
uint32_t x4952 = 3U;
static int16_t x4964 = 55;
volatile uint16_t x5013 = 2343U;
uint16_t x5015 = 85U;
static volatile int64_t x5181 = INT64_MIN;
static int64_t t93 = 17869106LL;
int8_t x5286 = 7;
volatile int8_t x5601 = INT8_MIN;
uint32_t x5604 = 3U;
int32_t x5629 = -6349915;
int32_t x5632 = 7;


void f0(void) {
	int8_t x45 = INT8_MAX;
	static volatile uint16_t x46 = 14593U;
	volatile int8_t x47 = INT8_MAX;
	volatile int32_t t0 = -9622;

	t0 = (x45+(x46|(x47>>x48)));

	if (t0 != 14720) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x49 = INT32_MAX;
	int32_t x51 = 7;
	uint16_t x52 = 14U;
	volatile uint64_t t1 = 17LLU;

	t1 = (x49+(x50|(x51>>x52)));

	if (t1 != 2147483646LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x70 = INT8_MIN;
	static uint8_t x72 = 3U;
	volatile uint32_t t2 = 87773U;

	t2 = (x69+(x70|(x71>>x72)));

	if (t2 != 4294966689U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x89 = -1;
	int8_t x90 = 2;
	volatile uint32_t x91 = 2U;
	uint8_t x92 = 5U;
	uint32_t t3 = 2895U;

	t3 = (x89+(x90|(x91>>x92)));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x117 = -1;
	int32_t x118 = 5;
	static volatile int8_t x119 = 0;
	uint64_t x120 = 25LLU;
	int32_t t4 = 844;

	t4 = (x117+(x118|(x119>>x120)));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x122 = 0U;
	uint32_t x123 = UINT32_MAX;
	static int32_t x124 = 2;

	t5 = (x121+(x122|(x123>>x124)));

	if (t5 != 1073741822U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x149 = 360LLU;
	static uint16_t x150 = 8U;
	uint32_t x151 = 8248U;
	static int16_t x152 = 14;

	t6 = (x149+(x150|(x151>>x152)));

	if (t6 != 368LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x165 = INT16_MAX;
	uint32_t x166 = 73802U;
	static int16_t x167 = INT16_MAX;
	static uint8_t x168 = 3U;
	volatile uint32_t t7 = 8181948U;

	t7 = (x165+(x166|(x167>>x168)));

	if (t7 != 110590U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x209 = 2181462476020LLU;
	int32_t x210 = INT32_MAX;
	uint8_t x211 = 0U;

	t8 = (x209+(x210|(x211>>x212)));

	if (t8 != 2183609959667LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MAX;
	uint32_t x351 = 734U;
	uint8_t x352 = 26U;
	static uint32_t t9 = UINT32_MAX;

	t9 = (x349+(x350|(x351>>x352)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x473 = 0U;
	int32_t x474 = 208653;
	uint16_t x475 = UINT16_MAX;
	int8_t x476 = 1;

	t10 = (x473+(x474|(x475>>x476)));

	if (t10 != 229375) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x485 = INT32_MIN;
	static volatile uint64_t x486 = UINT64_MAX;
	static int8_t x487 = INT8_MAX;
	uint8_t x488 = 1U;
	static uint64_t t11 = 4099LLU;

	t11 = (x485+(x486|(x487>>x488)));

	if (t11 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x541 = 0;
	int16_t x542 = INT16_MIN;
	int64_t x543 = 16410572544545035LL;
	volatile uint32_t x544 = 19U;
	volatile int64_t t12 = 7LL;

	t12 = (x541+(x542|(x543>>x544)));

	if (t12 != -31390LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x618 = 7528U;
	uint64_t x619 = 15LLU;
	uint16_t x620 = 6U;
	volatile uint64_t t13 = 9LLU;

	t13 = (x617+(x618|(x619>>x620)));

	if (t13 != 9223372036854783336LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x629 = INT8_MIN;
	static volatile uint64_t x630 = 722LLU;
	static uint8_t x631 = 2U;
	uint64_t t14 = 3696271947905507528LLU;

	t14 = (x629+(x630|(x631>>x632)));

	if (t14 != 595LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x773 = 919U;
	static int16_t x774 = INT16_MIN;
	uint32_t x775 = 100858U;
	volatile int8_t x776 = 0;
	volatile uint32_t t15 = 44U;

	t15 = (x773+(x774|(x775>>x776)));

	if (t15 != 4294938001U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x790 = INT64_MIN;
	volatile uint8_t x792 = 0U;

	t16 = (x789+(x790|(x791>>x792)));

	if (t16 != -9223372036854775219LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x818 = 20;
	static int16_t x819 = 15;

	t17 = (x817+(x818|(x819>>x820)));

	if (t17 != -2147483617) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x861 = UINT16_MAX;
	volatile int16_t x862 = -1;
	uint64_t x863 = 1320165596136743LLU;
	int16_t x864 = 3;
	uint64_t t18 = 0LLU;

	t18 = (x861+(x862|(x863>>x864)));

	if (t18 != 65534LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x899 = 123U;
	volatile int8_t x900 = 1;
	volatile int32_t t19 = -2037146;

	t19 = (x897+(x898|(x899>>x900)));

	if (t19 != -65475) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x901 = 0U;
	static int16_t x902 = INT16_MIN;
	static uint8_t x903 = 40U;

	t20 = (x901+(x902|(x903>>x904)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x918 = INT32_MIN;
	uint8_t x919 = 3U;
	uint32_t t21 = 6634U;

	t21 = (x917+(x918|(x919>>x920)));

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x921 = 13597U;
	uint32_t x922 = 258863801U;
	uint64_t x923 = 7923LLU;

	t22 = (x921+(x922|(x923>>x924)));

	if (t22 != 258877724LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x957 = 9821U;
	volatile int16_t x959 = 7910;
	uint16_t x960 = 1U;
	static volatile int32_t t23 = -6;

	t23 = (x957+(x958|(x959>>x960)));

	if (t23 != -2147469872) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x997 = 6004U;
	volatile int32_t x998 = -1;
	uint8_t x999 = UINT8_MAX;
	uint16_t x1000 = 0U;
	volatile int32_t t24 = 7084592;

	t24 = (x997+(x998|(x999>>x1000)));

	if (t24 != 6003) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t t25 = 53985670032LLU;

	t25 = (x1013+(x1014|(x1015>>x1016)));

	if (t25 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1061 = -1;
	int64_t x1062 = INT64_MAX;
	volatile uint64_t x1063 = 11360259LLU;
	uint16_t x1064 = 46U;
	static uint64_t t26 = 5588982650981157LLU;

	t26 = (x1061+(x1062|(x1063>>x1064)));

	if (t26 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1165 = 161U;
	uint64_t x1167 = UINT64_MAX;
	uint8_t x1168 = 1U;
	static uint64_t t27 = 4111137LLU;

	t27 = (x1165+(x1166|(x1167>>x1168)));

	if (t27 != 160LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1473 = 4U;
	static volatile uint16_t x1474 = 102U;
	volatile int16_t x1476 = 0;
	volatile int32_t t28 = 6322;

	t28 = (x1473+(x1474|(x1475>>x1476)));

	if (t28 != 7018) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1481 = 359122263716681997LLU;
	int64_t x1482 = 899526LL;
	int64_t x1483 = INT64_MAX;
	uint16_t x1484 = 27U;
	uint64_t t29 = 992049236521727LLU;

	t29 = (x1481+(x1482|(x1483>>x1484)));

	if (t29 != 359122332436158732LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1545 = -1;
	static int32_t x1546 = INT32_MIN;
	uint64_t x1547 = 2093269508836LLU;
	volatile uint64_t t30 = 10461982LLU;

	t30 = (x1545+(x1546|(x1547>>x1548)));

	if (t30 != 18446744072372285809LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1581 = UINT8_MAX;
	volatile int64_t x1583 = 237394LL;
	volatile int64_t t31 = 34631562LL;

	t31 = (x1581+(x1582|(x1583>>x1584)));

	if (t31 != -961866641LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1673 = 27U;
	uint32_t x1674 = UINT32_MAX;
	static uint64_t x1676 = 1LLU;
	uint32_t t32 = 50535U;

	t32 = (x1673+(x1674|(x1675>>x1676)));

	if (t32 != 26U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1761 = UINT16_MAX;
	uint8_t x1762 = UINT8_MAX;
	static uint16_t x1763 = 522U;
	uint16_t x1764 = 2U;
	int32_t t33 = 1;

	t33 = (x1761+(x1762|(x1763>>x1764)));

	if (t33 != 65790) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1821 = 567;
	int16_t x1822 = INT16_MAX;
	volatile uint64_t x1823 = UINT64_MAX;
	uint64_t t34 = 125476656LLU;

	t34 = (x1821+(x1822|(x1823>>x1824)));

	if (t34 != 566LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1906 = 15;
	static int8_t x1908 = 48;
	int64_t t35 = -65915LL;

	t35 = (x1905+(x1906|(x1907>>x1908)));

	if (t35 != 32766LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1974 = UINT32_MAX;
	uint8_t x1976 = 4U;
	uint64_t t36 = 17284719593243LLU;

	t36 = (x1973+(x1974|(x1975>>x1976)));

	if (t36 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2009 = INT8_MAX;
	int32_t x2010 = INT32_MIN;
	static int64_t x2011 = INT64_MAX;
	uint8_t x2012 = 22U;
	int64_t t37 = 2000749LL;

	t37 = (x2009+(x2010|(x2011>>x2012)));

	if (t37 != 126LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2080 = 8;
	int32_t t38 = -1636548;

	t38 = (x2077+(x2078|(x2079>>x2080)));

	if (t38 != 1150) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x2261 = 26;
	int8_t x2262 = -1;
	uint16_t x2263 = 0U;
	uint8_t x2264 = 1U;
	int32_t t39 = -29497;

	t39 = (x2261+(x2262|(x2263>>x2264)));

	if (t39 != 25) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2294 = -3;
	int16_t x2295 = 1;
	uint32_t x2296 = 0U;
	int32_t t40 = 5715611;

	t40 = (x2293+(x2294|(x2295>>x2296)));

	if (t40 != 32764) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2301 = UINT8_MAX;
	static int8_t x2302 = -8;
	uint64_t x2303 = UINT64_MAX;
	volatile uint64_t t41 = 2136311966648377253LLU;

	t41 = (x2301+(x2302|(x2303>>x2304)));

	if (t41 != 254LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2381 = -1LL;
	int32_t x2382 = -11;
	uint8_t x2384 = 6U;
	volatile uint64_t t42 = 380433451170190LLU;

	t42 = (x2381+(x2382|(x2383>>x2384)));

	if (t42 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2617 = INT8_MAX;
	int8_t x2618 = 0;
	static int16_t x2619 = INT16_MAX;

	t43 = (x2617+(x2618|(x2619>>x2620)));

	if (t43 != 2174) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2621 = -139106547783324LL;
	static int16_t x2622 = -1;
	volatile uint32_t x2624 = 0U;

	t44 = (x2621+(x2622|(x2623>>x2624)));

	if (t44 != -139102252816029LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2730 = INT32_MIN;
	static int16_t x2731 = 16;
	volatile int64_t x2732 = 7LL;
	volatile int32_t t45 = 93652423;

	t45 = (x2729+(x2730|(x2731>>x2732)));

	if (t45 != -2147418113) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2749 = INT8_MIN;
	int8_t x2750 = 1;
	volatile uint8_t x2751 = UINT8_MAX;
	volatile int32_t t46 = 1;

	t46 = (x2749+(x2750|(x2751>>x2752)));

	if (t46 != -65) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2793 = 5636816LL;
	uint32_t x2794 = 477221U;
	uint8_t x2795 = 4U;
	int64_t t47 = 288834294284LL;

	t47 = (x2793+(x2794|(x2795>>x2796)));

	if (t47 != 6114039LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2810 = 93;
	uint16_t x2811 = 9U;
	static uint8_t x2812 = 25U;

	t48 = (x2809+(x2810|(x2811>>x2812)));

	if (t48 != 93447U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x2929 = UINT8_MAX;
	int64_t x2930 = 8128418LL;
	volatile uint8_t x2931 = 121U;
	uint8_t x2932 = 3U;
	volatile int64_t t49 = -448LL;

	t49 = (x2929+(x2930|(x2931>>x2932)));

	if (t49 != 8128686LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3093 = UINT8_MAX;
	int32_t x3094 = 2;
	uint16_t x3096 = 11U;
	static int32_t t50 = -23661983;

	t50 = (x3093+(x3094|(x3095>>x3096)));

	if (t50 != 1048830) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3141 = 6;
	int16_t x3142 = -1;
	static uint32_t x3144 = 9U;
	int32_t t51 = -999;

	t51 = (x3141+(x3142|(x3143>>x3144)));

	if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3169 = INT16_MAX;
	int16_t x3170 = INT16_MIN;
	static uint16_t x3171 = 0U;
	static uint16_t x3172 = 2U;
	volatile int32_t t52 = 483954;

	t52 = (x3169+(x3170|(x3171>>x3172)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3185 = INT16_MIN;
	int8_t x3186 = INT8_MAX;
	uint32_t x3187 = 1U;
	static uint8_t x3188 = 20U;
	volatile uint32_t t53 = 73620U;

	t53 = (x3185+(x3186|(x3187>>x3188)));

	if (t53 != 4294934655U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3323 = 284;
	static int32_t t54 = 2088919;

	t54 = (x3321+(x3322|(x3323>>x3324)));

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3482 = INT16_MIN;
	int8_t x3484 = 4;
	volatile uint32_t t55 = 364U;

	t55 = (x3481+(x3482|(x3483>>x3484)));

	if (t55 != 4294934531U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3513 = INT8_MIN;
	int8_t x3514 = INT8_MIN;
	uint16_t x3515 = 14575U;
	int64_t x3516 = 17LL;
	volatile int32_t t56 = 535407;

	t56 = (x3513+(x3514|(x3515>>x3516)));

	if (t56 != -256) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x3549 = INT8_MIN;
	volatile int8_t x3550 = -61;
	int16_t x3551 = 28;
	int32_t t57 = -41936129;

	t57 = (x3549+(x3550|(x3551>>x3552)));

	if (t57 != -161) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3601 = INT16_MIN;
	uint32_t x3602 = UINT32_MAX;
	uint64_t x3603 = 19LLU;
	uint64_t t58 = 399041340LLU;

	t58 = (x3601+(x3602|(x3603>>x3604)));

	if (t58 != 4294934527LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3710 = UINT8_MAX;
	static int32_t x3711 = INT32_MAX;
	int8_t x3712 = 3;
	volatile int64_t t59 = 59917354LL;

	t59 = (x3709+(x3710|(x3711>>x3712)));

	if (t59 != 268435418LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3713 = 26;
	int32_t x3715 = 72;
	static uint8_t x3716 = 0U;
	volatile int32_t t60 = -1;

	t60 = (x3713+(x3714|(x3715>>x3716)));

	if (t60 != 32793) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3729 = 1U;
	uint8_t x3730 = 13U;
	uint8_t x3731 = 9U;
	int16_t x3732 = 1;
	uint32_t t61 = 63U;

	t61 = (x3729+(x3730|(x3731>>x3732)));

	if (t61 != 14U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3814 = -1;
	uint8_t x3816 = 1U;
	volatile int32_t t62 = -13;

	t62 = (x3813+(x3814|(x3815>>x3816)));

	if (t62 != 109) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x3897 = 54;
	int16_t x3898 = INT16_MAX;
	int8_t x3899 = 8;
	uint32_t x3900 = 2U;
	static int32_t t63 = 262181662;

	t63 = (x3897+(x3898|(x3899>>x3900)));

	if (t63 != 32821) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4001 = 127704;
	int32_t x4002 = INT32_MAX;
	static uint16_t x4004 = 29U;
	static volatile uint64_t t64 = 16414732019569LLU;

	t64 = (x4001+(x4002|(x4003>>x4004)));

	if (t64 != 34359866071LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4125 = 0U;
	uint32_t x4127 = UINT32_MAX;
	static int8_t x4128 = 7;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = (x4125+(x4126|(x4127>>x4128)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4133 = INT16_MAX;
	static volatile int8_t x4134 = 0;
	static uint8_t x4136 = 8U;

	t66 = (x4133+(x4134|(x4135>>x4136)));

	if (t66 != 32778) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4141 = 14U;
	static uint32_t x4142 = UINT32_MAX;
	static uint32_t x4143 = 0U;
	static uint32_t t67 = 37827203U;

	t67 = (x4141+(x4142|(x4143>>x4144)));

	if (t67 != 13U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4145 = -1;
	uint64_t x4147 = 174132022LLU;
	static uint16_t x4148 = 52U;
	volatile uint64_t t68 = 264918LLU;

	t68 = (x4145+(x4146|(x4147>>x4148)));

	if (t68 != 6LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x4166 = UINT16_MAX;
	volatile int8_t x4167 = INT8_MAX;
	volatile uint16_t x4168 = 2U;
	volatile uint32_t t69 = 59U;

	t69 = (x4165+(x4166|(x4167>>x4168)));

	if (t69 != 65534U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4213 = 10;
	int64_t x4214 = INT64_MAX;
	uint64_t x4215 = UINT64_MAX;
	int8_t x4216 = 1;
	uint64_t t70 = 89778LLU;

	t70 = (x4213+(x4214|(x4215>>x4216)));

	if (t70 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4257 = INT32_MIN;
	int64_t x4258 = INT64_MIN;
	uint64_t x4259 = UINT64_MAX;
	uint8_t x4260 = 12U;
	uint64_t t71 = 379LLU;

	t71 = (x4257+(x4258|(x4259>>x4260)));

	if (t71 != 9227875634334662655LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4333 = UINT16_MAX;
	int64_t x4334 = -434207LL;

	t72 = (x4333+(x4334|(x4335>>x4336)));

	if (t72 != -368642LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4478 = INT8_MAX;
	static uint8_t x4479 = UINT8_MAX;
	uint16_t x4480 = 3U;
	volatile int32_t t73 = 6388998;

	t73 = (x4477+(x4478|(x4479>>x4480)));

	if (t73 != -2147483521) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4485 = -1;
	volatile uint32_t x4486 = UINT32_MAX;
	int32_t x4487 = INT32_MAX;
	uint32_t x4488 = 31U;
	volatile uint32_t t74 = 2052855U;

	t74 = (x4485+(x4486|(x4487>>x4488)));

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4489 = INT32_MAX;
	int8_t x4490 = INT8_MIN;
	volatile uint64_t t75 = 4076LLU;

	t75 = (x4489+(x4490|(x4491>>x4492)));

	if (t75 != 2147483609LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4537 = 131490365736LLU;
	int32_t x4538 = -1;
	uint8_t x4539 = 8U;
	uint64_t t76 = 85LLU;

	t76 = (x4537+(x4538|(x4539>>x4540)));

	if (t76 != 131490365735LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4541 = 1U;
	uint64_t x4543 = UINT64_MAX;
	static volatile uint64_t t77 = 1LLU;

	t77 = (x4541+(x4542|(x4543>>x4544)));

	if (t77 != 18014398509481984LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4565 = 43115U;
	int8_t x4566 = INT8_MIN;
	static uint64_t x4567 = 5071052328495LLU;
	static volatile int16_t x4568 = 1;
	volatile uint64_t t78 = 2808LLU;

	t78 = (x4565+(x4566|(x4567>>x4568)));

	if (t78 != 43010LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4629 = INT32_MIN;
	int8_t x4630 = 6;
	uint16_t x4631 = 1187U;
	uint16_t x4632 = 1U;
	volatile int32_t t79 = -622;

	t79 = (x4629+(x4630|(x4631>>x4632)));

	if (t79 != -2147483049) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4642 = -1;
	static int32_t x4643 = 0;
	int32_t t80 = 702137;

	t80 = (x4641+(x4642|(x4643>>x4644)));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4657 = 5313U;
	static uint8_t x4658 = 59U;
	static uint32_t x4659 = UINT32_MAX;
	uint64_t x4660 = 13LLU;
	volatile uint32_t t81 = 18244U;

	t81 = (x4657+(x4658|(x4659>>x4660)));

	if (t81 != 529600U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4701 = UINT64_MAX;
	uint64_t t82 = 175472009621LLU;

	t82 = (x4701+(x4702|(x4703>>x4704)));

	if (t82 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4733 = INT16_MIN;
	volatile int8_t x4736 = 0;
	static volatile int32_t t83 = 37414299;

	t83 = (x4733+(x4734|(x4735>>x4736)));

	if (t83 != -27041) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4781 = INT8_MAX;
	static int16_t x4782 = -1;
	static uint16_t x4783 = UINT16_MAX;
	int16_t x4784 = 0;
	static volatile int32_t t84 = -93472489;

	t84 = (x4781+(x4782|(x4783>>x4784)));

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4809 = -1;
	uint8_t x4810 = 1U;
	int64_t x4811 = INT64_MAX;
	volatile int64_t t85 = -1031033405359LL;

	t85 = (x4809+(x4810|(x4811>>x4812)));

	if (t85 != 36028797018963966LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x4885 = UINT8_MAX;
	int8_t x4886 = INT8_MAX;
	int64_t x4887 = INT64_MAX;
	uint16_t x4888 = 6U;

	t86 = (x4885+(x4886|(x4887>>x4888)));

	if (t86 != 144115188075856126LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4917 = -1;
	int64_t x4919 = INT64_MAX;
	volatile uint32_t x4920 = 1U;

	t87 = (x4917+(x4918|(x4919>>x4920)));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x4949 = 3U;
	uint8_t x4950 = UINT8_MAX;
	uint8_t x4951 = 6U;
	volatile int32_t t88 = 104;

	t88 = (x4949+(x4950|(x4951>>x4952)));

	if (t88 != 258) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x4961 = 9U;
	volatile int16_t x4962 = INT16_MIN;
	uint64_t x4963 = UINT64_MAX;
	volatile uint64_t t89 = 422114687296LLU;

	t89 = (x4961+(x4962|(x4963>>x4964)));

	if (t89 != 18446744073709519368LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x5014 = INT64_MIN;
	int16_t x5016 = 1;
	int64_t t90 = -13949195572957680LL;

	t90 = (x5013+(x5014|(x5015>>x5016)));

	if (t90 != -9223372036854773423LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5105 = 7405169446689994110LLU;
	int32_t x5106 = 661069628;
	uint64_t x5107 = 406432964578981799LLU;
	volatile uint32_t x5108 = 32U;
	uint64_t t91 = 24178289883429LLU;

	t91 = (x5105+(x5106|(x5107>>x5108)));

	if (t91 != 7405169447359509818LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5137 = -3;
	int32_t x5138 = 0;
	uint8_t x5139 = 1U;
	int16_t x5140 = 2;
	int32_t t92 = 677464093;

	t92 = (x5137+(x5138|(x5139>>x5140)));

	if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x5182 = UINT16_MAX;
	volatile uint8_t x5183 = 19U;
	int8_t x5184 = 26;

	t93 = (x5181+(x5182|(x5183>>x5184)));

	if (t93 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5285 = INT16_MIN;
	int16_t x5287 = 80;
	int64_t x5288 = 0LL;
	volatile int32_t t94 = 963337990;

	t94 = (x5285+(x5286|(x5287>>x5288)));

	if (t94 != -32681) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5301 = INT64_MIN;
	volatile uint16_t x5302 = 8U;
	uint16_t x5303 = 1U;
	uint8_t x5304 = 5U;
	int64_t t95 = -49447253115028LL;

	t95 = (x5301+(x5302|(x5303>>x5304)));

	if (t95 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5353 = 5543830770328416LLU;
	int8_t x5354 = INT8_MAX;
	uint16_t x5355 = UINT16_MAX;
	volatile int16_t x5356 = 0;
	uint64_t t96 = 1931392836561328LLU;

	t96 = (x5353+(x5354|(x5355>>x5356)));

	if (t96 != 5543830770393951LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5521 = -1;
	static int32_t x5522 = 169426782;
	static volatile int16_t x5523 = INT16_MAX;
	uint8_t x5524 = 6U;
	volatile int32_t t97 = 867;

	t97 = (x5521+(x5522|(x5523>>x5524)));

	if (t97 != 169426942) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x5602 = INT32_MIN;
	uint64_t x5603 = 13109248LLU;
	static volatile uint64_t t98 = 955LLU;

	t98 = (x5601+(x5602|(x5603>>x5604)));

	if (t98 != 18446744071563706496LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5630 = INT8_MAX;
	volatile uint8_t x5631 = UINT8_MAX;
	int32_t t99 = -462836408;

	t99 = (x5629+(x5630|(x5631>>x5632)));

	if (t99 != -6349788) { NG(); } else { ; }
	
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

