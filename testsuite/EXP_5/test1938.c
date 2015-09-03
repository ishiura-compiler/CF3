#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t3 = -129870547920675281LL;
volatile uint64_t x952 = 25LLU;
int8_t x967 = INT8_MAX;
volatile uint16_t x1048 = 6U;
static volatile uint8_t x1133 = 28U;
volatile int64_t x1135 = 11574LL;
static volatile int8_t x1201 = INT8_MAX;
uint32_t t14 = 2U;
volatile uint16_t x1544 = 18U;
static int16_t x1794 = INT16_MIN;
uint16_t x1993 = 98U;
volatile int32_t t18 = -18;
static uint16_t x2003 = UINT16_MAX;
volatile uint32_t x2004 = 1U;
uint32_t x2036 = 60U;
int16_t x2093 = 2565;
int32_t x2095 = 396459631;
volatile int64_t x2158 = INT64_MAX;
int8_t x2159 = 1;
int8_t x2320 = 1;
volatile int8_t x2438 = INT8_MIN;
uint32_t x2529 = 7U;
int8_t x2532 = 6;
uint32_t x2538 = 448269U;
uint16_t x2539 = UINT16_MAX;
int8_t x2604 = 11;
static int32_t x2643 = INT32_MAX;
uint64_t x2678 = UINT64_MAX;
volatile uint64_t t35 = 450LLU;
volatile uint64_t t37 = 167208LLU;
static uint64_t x3071 = 2423948031809LLU;
int64_t t39 = 1906LL;
int8_t x3246 = INT8_MAX;
int16_t x3257 = -218;
volatile uint16_t x3260 = 0U;
static volatile uint64_t t42 = 6932LLU;
int32_t x3331 = INT32_MIN;
int8_t x3332 = 3;
int16_t x3334 = INT16_MAX;
int32_t t46 = -12953;
uint64_t x3519 = 12LLU;
uint8_t x3520 = 34U;
static uint64_t t48 = 14173774343231153LLU;
uint32_t x3533 = UINT32_MAX;
uint16_t x3534 = 6U;
uint8_t x3535 = 0U;
volatile uint32_t x3554 = 4021056U;
int16_t x3555 = INT16_MAX;
int64_t t51 = INT64_MAX;
static int8_t x3736 = 0;
uint16_t x4093 = UINT16_MAX;
int16_t x4094 = -1086;
uint32_t x4095 = 95U;
volatile uint64_t t55 = UINT64_MAX;
int8_t x4202 = -1;
int32_t x4326 = INT32_MAX;
uint64_t x4386 = 3844269LLU;
int64_t x4673 = -3658000LL;
uint64_t t62 = 3294086LLU;
volatile int32_t x4689 = INT32_MIN;
uint64_t x4690 = UINT64_MAX;
volatile uint32_t t64 = 73799U;
uint16_t x4817 = 20U;
int8_t x4818 = 3;
uint64_t x4870 = UINT64_MAX;
uint8_t x4871 = 7U;
static volatile uint64_t t67 = 45LLU;
int8_t x4961 = 0;
static volatile int64_t t69 = 257635695LL;
int64_t x5074 = -1LL;
uint64_t x5075 = 187464LLU;
static uint16_t x5076 = 1U;
static volatile int64_t x5098 = INT64_MAX;
static int8_t x5273 = -1;
volatile uint16_t x5274 = 0U;
volatile uint32_t x5617 = UINT32_MAX;
volatile uint8_t x5701 = UINT8_MAX;
static uint32_t t77 = 190U;
uint16_t x5765 = 2U;
uint32_t x5767 = 28999849U;
uint64_t x5791 = 9LLU;
int16_t x5792 = 5;
volatile uint32_t x6038 = 15U;
int16_t x6039 = INT16_MIN;
volatile uint32_t t82 = 3U;
static int64_t x6130 = -1LL;
uint8_t x6150 = 5U;
volatile uint64_t x6163 = UINT64_MAX;
int16_t x6278 = INT16_MAX;
uint16_t x6280 = 2U;
uint32_t t89 = 3476634U;
uint64_t t90 = 45505656323LLU;
uint8_t x6578 = 20U;
static uint32_t x6579 = 51904U;
uint32_t x6643 = 103U;
static volatile int8_t x6760 = 1;
uint64_t x6794 = UINT64_MAX;
int32_t x6795 = INT32_MIN;


void f0(void) {
	static int32_t x165 = -63;
	uint32_t x166 = UINT32_MAX;
	int8_t x167 = 63;
	uint8_t x168 = 5U;
	volatile uint32_t t0 = 142472U;

	t0 = (x165+((x166|x167)>>x168));

	if (t0 != 134217664U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x170 = 46;
	static int32_t x171 = INT32_MAX;
	uint32_t x172 = 6U;
	int32_t t1 = -1;

	t1 = (x169+((x170|x171)>>x172));

	if (t1 != 33554686) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x245 = INT16_MIN;
	uint64_t x246 = UINT64_MAX;
	static uint64_t x247 = 8625884145LLU;
	static uint16_t x248 = 3U;
	uint64_t t2 = 2752677910363013LLU;

	t2 = (x245+((x246|x247)>>x248));

	if (t2 != 2305843009213661183LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x301 = INT16_MAX;
	volatile int64_t x302 = 145260242355959LL;
	int8_t x303 = 3;
	uint64_t x304 = 40LLU;

	t3 = (x301+((x302|x303)>>x304));

	if (t3 != 32899LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x573 = 86U;
	uint32_t x574 = UINT32_MAX;
	int64_t x575 = 6328840774712030LL;
	uint32_t x576 = 49U;
	static int64_t t4 = 72848178568531LL;

	t4 = (x573+((x574|x575)>>x576));

	if (t4 != 97LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x597 = INT16_MAX;
	static int32_t x598 = 2149334;
	static int32_t x599 = 7175;
	int8_t x600 = 1;
	int32_t t5 = -66;

	t5 = (x597+((x598|x599)>>x600));

	if (t5 != 1109994) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x881 = -1;
	volatile uint64_t x882 = 790521LLU;
	int64_t x883 = INT64_MIN;
	uint64_t x884 = 6LLU;
	static uint64_t t6 = 3LLU;

	t6 = (x881+((x882|x883)>>x884));

	if (t6 != 144115188075868222LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x949 = -1507;
	int8_t x950 = INT8_MAX;
	int32_t x951 = 71628042;
	volatile int32_t t7 = 7;

	t7 = (x949+((x950|x951)>>x952));

	if (t7 != -1505) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x965 = 1;
	uint32_t x966 = UINT32_MAX;
	uint16_t x968 = 6U;
	uint32_t t8 = 99U;

	t8 = (x965+((x966|x967)>>x968));

	if (t8 != 67108864U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x1045 = INT64_MAX;
	uint64_t x1046 = UINT64_MAX;
	static int16_t x1047 = INT16_MAX;
	volatile uint64_t t9 = 20699LLU;

	t9 = (x1045+((x1046|x1047)>>x1048));

	if (t9 != 9511602413006487550LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1134 = INT32_MAX;
	uint8_t x1136 = 26U;
	static volatile int64_t t10 = -44LL;

	t10 = (x1133+((x1134|x1135)>>x1136));

	if (t10 != 59LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1189 = INT64_MIN;
	int64_t x1190 = INT64_MAX;
	uint16_t x1191 = 0U;
	int8_t x1192 = 1;
	volatile int64_t t11 = 5LL;

	t11 = (x1189+((x1190|x1191)>>x1192));

	if (t11 != -4611686018427387905LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1202 = -1;
	uint32_t x1203 = 0U;
	int16_t x1204 = 0;
	volatile uint32_t t12 = 23242U;

	t12 = (x1201+((x1202|x1203)>>x1204));

	if (t12 != 126U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x1325 = INT32_MAX;
	static uint64_t x1326 = UINT64_MAX;
	uint8_t x1327 = UINT8_MAX;
	volatile int16_t x1328 = 31;
	volatile uint64_t t13 = 834177LLU;

	t13 = (x1325+((x1326|x1327)>>x1328));

	if (t13 != 10737418238LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1333 = 4U;
	int32_t x1334 = 0;
	static uint32_t x1335 = 678845U;
	int8_t x1336 = 0;

	t14 = (x1333+((x1334|x1335)>>x1336));

	if (t14 != 678849U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1421 = INT32_MIN;
	int32_t x1422 = INT32_MAX;
	uint64_t x1423 = 4LLU;
	uint16_t x1424 = 24U;
	volatile uint64_t t15 = 7505852378408720667LLU;

	t15 = (x1421+((x1422|x1423)>>x1424));

	if (t15 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1541 = 0;
	static uint64_t x1542 = 1424LLU;
	int8_t x1543 = -2;
	uint64_t t16 = 1LLU;

	t16 = (x1541+((x1542|x1543)>>x1544));

	if (t16 != 70368744177663LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1793 = -1;
	uint32_t x1795 = 60591U;
	static uint8_t x1796 = 14U;
	static uint32_t t17 = 37656723U;

	t17 = (x1793+((x1794|x1795)>>x1796));

	if (t17 != 262142U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1994 = UINT16_MAX;
	uint16_t x1995 = 2599U;
	volatile uint64_t x1996 = 0LLU;

	t18 = (x1993+((x1994|x1995)>>x1996));

	if (t18 != 65633) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x2001 = INT8_MIN;
	static int16_t x2002 = 293;
	static int32_t t19 = 2;

	t19 = (x2001+((x2002|x2003)>>x2004));

	if (t19 != 32639) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x2033 = -6;
	static int16_t x2034 = INT16_MIN;
	uint64_t x2035 = 2LLU;
	uint64_t t20 = 634613LLU;

	t20 = (x2033+((x2034|x2035)>>x2036));

	if (t20 != 9LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x2041 = INT32_MIN;
	int32_t x2042 = INT32_MAX;
	uint32_t x2043 = 540718204U;
	uint16_t x2044 = 1U;
	uint32_t t21 = 1U;

	t21 = (x2041+((x2042|x2043)>>x2044));

	if (t21 != 3221225471U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x2094 = INT16_MAX;
	volatile int8_t x2096 = 0;
	int32_t t22 = 12;

	t22 = (x2093+((x2094|x2095)>>x2096));

	if (t22 != 396462596) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x2157 = 7342LL;
	static int8_t x2160 = 5;
	volatile int64_t t23 = -1759876265138LL;

	t23 = (x2157+((x2158|x2159)>>x2160));

	if (t23 != 288230376151719085LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x2317 = INT32_MIN;
	int32_t x2318 = -910279;
	uint32_t x2319 = UINT32_MAX;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x2317+((x2318|x2319)>>x2320));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2377 = INT32_MIN;
	uint64_t x2378 = 34LLU;
	static volatile int64_t x2379 = 8422368842LL;
	int8_t x2380 = 0;
	volatile uint64_t t25 = 123812685133145LLU;

	t25 = (x2377+((x2378|x2379)>>x2380));

	if (t25 != 6274885226LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2397 = 0;
	uint64_t x2398 = 201LLU;
	static int32_t x2399 = 569315056;
	uint16_t x2400 = 0U;
	uint64_t t26 = 3752554947975164LLU;

	t26 = (x2397+((x2398|x2399)>>x2400));

	if (t26 != 569315065LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2437 = -226;
	uint32_t x2439 = 14U;
	uint8_t x2440 = 6U;
	uint32_t t27 = 31081U;

	t27 = (x2437+((x2438|x2439)>>x2440));

	if (t27 != 67108636U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x2530 = 10529U;
	static int16_t x2531 = 37;
	volatile uint32_t t28 = 3029U;

	t28 = (x2529+((x2530|x2531)>>x2532));

	if (t28 != 171U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x2537 = INT8_MAX;
	volatile uint16_t x2540 = 24U;
	volatile uint32_t t29 = 4U;

	t29 = (x2537+((x2538|x2539)>>x2540));

	if (t29 != 127U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2549 = -1695;
	uint64_t x2550 = 382964581905424LLU;
	uint8_t x2551 = 68U;
	volatile uint8_t x2552 = 0U;
	volatile uint64_t t30 = 113103LLU;

	t30 = (x2549+((x2550|x2551)>>x2552));

	if (t30 != 382964581903797LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x2601 = 52U;
	uint32_t x2602 = 82957236U;
	uint16_t x2603 = 37U;
	volatile uint32_t t31 = 2151896U;

	t31 = (x2601+((x2602|x2603)>>x2604));

	if (t31 != 40558U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x2641 = 1U;
	uint8_t x2642 = UINT8_MAX;
	uint16_t x2644 = 2U;
	int32_t t32 = 565;

	t32 = (x2641+((x2642|x2643)>>x2644));

	if (t32 != 536870912) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2677 = 2U;
	int16_t x2679 = 19;
	volatile int32_t x2680 = 49;
	static volatile uint64_t t33 = 1LLU;

	t33 = (x2677+((x2678|x2679)>>x2680));

	if (t33 != 32769LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2713 = 558LLU;
	int32_t x2714 = -1;
	volatile uint32_t x2715 = 118U;
	uint8_t x2716 = 3U;
	volatile uint64_t t34 = 57007LLU;

	t34 = (x2713+((x2714|x2715)>>x2716));

	if (t34 != 536871469LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2733 = 6U;
	uint64_t x2734 = 396593707LLU;
	uint16_t x2735 = UINT16_MAX;
	static int32_t x2736 = 1;

	t35 = (x2733+((x2734|x2735)>>x2736));

	if (t35 != 198311941LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2737 = UINT16_MAX;
	uint32_t x2738 = UINT32_MAX;
	static int8_t x2739 = -3;
	volatile uint16_t x2740 = 3U;
	static volatile uint32_t t36 = 3U;

	t36 = (x2737+((x2738|x2739)>>x2740));

	if (t36 != 536936446U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2757 = 48;
	uint16_t x2758 = 22U;
	uint64_t x2759 = UINT64_MAX;
	uint8_t x2760 = 0U;

	t37 = (x2757+((x2758|x2759)>>x2760));

	if (t37 != 47LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x3069 = 13719U;
	volatile int16_t x3070 = -1;
	uint8_t x3072 = 13U;
	uint64_t t38 = 119435025686946LLU;

	t38 = (x3069+((x3070|x3071)>>x3072));

	if (t38 != 2251799813698966LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x3117 = 13011U;
	int64_t x3118 = 435681225414829088LL;
	volatile uint32_t x3119 = UINT32_MAX;
	volatile uint8_t x3120 = 0U;

	t39 = (x3117+((x3118|x3119)>>x3120));

	if (t39 != 435681229103182546LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x3245 = INT8_MIN;
	uint32_t x3247 = 17U;
	int8_t x3248 = 1;
	static volatile uint32_t t40 = 229U;

	t40 = (x3245+((x3246|x3247)>>x3248));

	if (t40 != 4294967231U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x3249 = INT8_MIN;
	uint32_t x3250 = UINT32_MAX;
	int8_t x3251 = -1;
	volatile int8_t x3252 = 1;
	uint32_t t41 = 46090336U;

	t41 = (x3249+((x3250|x3251)>>x3252));

	if (t41 != 2147483519U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x3258 = 246623LLU;
	int8_t x3259 = INT8_MAX;

	t42 = (x3257+((x3258|x3259)>>x3260));

	if (t42 != 246437LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x3329 = INT16_MIN;
	uint32_t x3330 = UINT32_MAX;
	uint32_t t43 = 48960314U;

	t43 = (x3329+((x3330|x3331)>>x3332));

	if (t43 != 536838143U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x3333 = INT8_MIN;
	int16_t x3335 = 1693;
	int16_t x3336 = 1;
	static volatile int32_t t44 = 2;

	t44 = (x3333+((x3334|x3335)>>x3336));

	if (t44 != 16255) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x3401 = 20931LLU;
	static uint64_t x3402 = UINT64_MAX;
	static volatile int16_t x3403 = INT16_MIN;
	int8_t x3404 = 0;
	static uint64_t t45 = 3LLU;

	t45 = (x3401+((x3402|x3403)>>x3404));

	if (t45 != 20930LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3497 = 7U;
	volatile int8_t x3498 = INT8_MAX;
	static int32_t x3499 = INT32_MAX;
	int32_t x3500 = 31;

	t46 = (x3497+((x3498|x3499)>>x3500));

	if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3517 = UINT16_MAX;
	static uint32_t x3518 = 5U;
	static uint64_t t47 = 53687164868LLU;

	t47 = (x3517+((x3518|x3519)>>x3520));

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3521 = 2428766U;
	static int16_t x3522 = -1;
	uint64_t x3523 = 11739452369LLU;
	uint16_t x3524 = 0U;

	t48 = (x3521+((x3522|x3523)>>x3524));

	if (t48 != 2428765LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3536 = 11U;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x3533+((x3534|x3535)>>x3536));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x3553 = INT32_MAX;
	int8_t x3556 = 21;
	uint32_t t50 = 179780283U;

	t50 = (x3553+((x3554|x3555)>>x3556));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x3569 = INT64_MAX;
	volatile int32_t x3570 = 0;
	uint32_t x3571 = 2U;
	int32_t x3572 = 3;

	t51 = (x3569+((x3570|x3571)>>x3572));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3733 = UINT32_MAX;
	uint16_t x3734 = UINT16_MAX;
	static int32_t x3735 = INT32_MAX;
	static volatile uint32_t t52 = 353842U;

	t52 = (x3733+((x3734|x3735)>>x3736));

	if (t52 != 2147483646U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x4096 = 3U;
	volatile uint32_t t53 = 1071U;

	t53 = (x4093+((x4094|x4095)>>x4096));

	if (t53 != 536936314U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x4141 = -1;
	static uint64_t x4142 = 7598152LLU;
	volatile int32_t x4143 = INT32_MIN;
	int64_t x4144 = 14LL;
	uint64_t t54 = 565132816497LLU;

	t54 = (x4141+((x4142|x4143)>>x4144));

	if (t54 != 1125899906712014LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x4145 = INT64_MIN;
	uint32_t x4146 = 3U;
	static volatile uint64_t x4147 = UINT64_MAX;
	int8_t x4148 = 1;

	t55 = (x4145+((x4146|x4147)>>x4148));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x4177 = INT64_MIN;
	uint8_t x4178 = 70U;
	uint64_t x4179 = UINT64_MAX;
	int8_t x4180 = 7;
	uint64_t t56 = 12783212LLU;

	t56 = (x4177+((x4178|x4179)>>x4180));

	if (t56 != 9367487224930631679LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4201 = INT8_MIN;
	volatile uint64_t x4203 = 38221902823514606LLU;
	static uint64_t x4204 = 12LLU;
	uint64_t t57 = 3LLU;

	t57 = (x4201+((x4202|x4203)>>x4204));

	if (t57 != 4503599627370367LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x4217 = INT32_MIN;
	uint32_t x4218 = UINT32_MAX;
	uint64_t x4219 = 16LLU;
	static int32_t x4220 = 2;
	volatile uint64_t t58 = 827274LLU;

	t58 = (x4217+((x4218|x4219)>>x4220));

	if (t58 != 18446744072635809791LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x4325 = -1;
	uint8_t x4327 = UINT8_MAX;
	uint8_t x4328 = 1U;
	int32_t t59 = -371309847;

	t59 = (x4325+((x4326|x4327)>>x4328));

	if (t59 != 1073741822) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x4385 = -18;
	static volatile int8_t x4387 = INT8_MAX;
	volatile uint8_t x4388 = 13U;
	volatile uint64_t t60 = 1025257310LLU;

	t60 = (x4385+((x4386|x4387)>>x4388));

	if (t60 != 451LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4557 = 10U;
	uint32_t x4558 = 27U;
	uint8_t x4559 = 14U;
	volatile uint8_t x4560 = 3U;
	volatile uint32_t t61 = 2U;

	t61 = (x4557+((x4558|x4559)>>x4560));

	if (t61 != 13U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x4674 = 1345086LLU;
	int32_t x4675 = INT32_MIN;
	uint32_t x4676 = 8U;

	t62 = (x4673+((x4674|x4675)>>x4676));

	if (t62 != 72057594025886582LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4691 = INT64_MIN;
	volatile int16_t x4692 = 43;
	volatile uint64_t t63 = 50872261874LLU;

	t63 = (x4689+((x4690|x4691)>>x4692));

	if (t63 != 18446744071564165119LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4697 = 0U;
	uint16_t x4698 = 5290U;
	uint32_t x4699 = UINT32_MAX;
	uint32_t x4700 = 15U;

	t64 = (x4697+((x4698|x4699)>>x4700));

	if (t64 != 131071U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x4761 = 32U;
	static uint32_t x4762 = 32917961U;
	static int16_t x4763 = -550;
	uint64_t x4764 = 6LLU;
	volatile uint32_t t65 = 822453447U;

	t65 = (x4761+((x4762|x4763)>>x4764));

	if (t65 != 67108887U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x4819 = INT8_MAX;
	static int8_t x4820 = 0;
	int32_t t66 = 0;

	t66 = (x4817+((x4818|x4819)>>x4820));

	if (t66 != 147) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4869 = INT32_MIN;
	int8_t x4872 = 3;

	t67 = (x4869+((x4870|x4871)>>x4872));

	if (t67 != 2305843007066210303LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4877 = UINT64_MAX;
	volatile int32_t x4878 = INT32_MIN;
	uint32_t x4879 = UINT32_MAX;
	static volatile int32_t x4880 = 0;
	volatile uint64_t t68 = 46317391888125457LLU;

	t68 = (x4877+((x4878|x4879)>>x4880));

	if (t68 != 4294967294LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x4962 = INT64_MAX;
	volatile int16_t x4963 = 4;
	int16_t x4964 = 12;

	t69 = (x4961+((x4962|x4963)>>x4964));

	if (t69 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x5073 = 410496264LLU;
	static volatile uint64_t t70 = 3716473989901762781LLU;

	t70 = (x5073+((x5074|x5075)>>x5076));

	if (t70 != 9223372037265272071LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5097 = -3;
	int16_t x5099 = INT16_MAX;
	uint8_t x5100 = 1U;
	volatile int64_t t71 = -3459LL;

	t71 = (x5097+((x5098|x5099)>>x5100));

	if (t71 != 4611686018427387900LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x5275 = 548404979;
	int8_t x5276 = 1;
	int32_t t72 = 2883;

	t72 = (x5273+((x5274|x5275)>>x5276));

	if (t72 != 274202488) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5409 = 342198627443999804LLU;
	uint32_t x5410 = 0U;
	static int8_t x5411 = INT8_MAX;
	uint16_t x5412 = 0U;
	static volatile uint64_t t73 = 57170LLU;

	t73 = (x5409+((x5410|x5411)>>x5412));

	if (t73 != 342198627443999931LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x5437 = -1LL;
	static uint8_t x5438 = 123U;
	static int32_t x5439 = 4109;
	static uint8_t x5440 = 2U;
	volatile int64_t t74 = -70091742LL;

	t74 = (x5437+((x5438|x5439)>>x5440));

	if (t74 != 1054LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x5618 = UINT8_MAX;
	volatile uint16_t x5619 = UINT16_MAX;
	int16_t x5620 = 1;
	volatile uint32_t t75 = 426434U;

	t75 = (x5617+((x5618|x5619)>>x5620));

	if (t75 != 32766U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5669 = INT8_MAX;
	static volatile uint32_t x5670 = UINT32_MAX;
	int8_t x5671 = -1;
	int8_t x5672 = 0;
	volatile uint32_t t76 = 3880U;

	t76 = (x5669+((x5670|x5671)>>x5672));

	if (t76 != 126U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x5702 = 1;
	uint32_t x5703 = 1338388U;
	volatile uint16_t x5704 = 6U;

	t77 = (x5701+((x5702|x5703)>>x5704));

	if (t77 != 21167U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5766 = 775327662U;
	uint8_t x5768 = 3U;
	uint32_t t78 = 1086660104U;

	t78 = (x5765+((x5766|x5767)>>x5768));

	if (t78 != 100127223U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5789 = 444899U;
	uint64_t x5790 = UINT64_MAX;
	uint64_t t79 = 2690074LLU;

	t79 = (x5789+((x5790|x5791)>>x5792));

	if (t79 != 576460752303868386LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5797 = UINT16_MAX;
	static uint32_t x5798 = 17824500U;
	int64_t x5799 = INT64_MAX;
	uint8_t x5800 = 3U;
	volatile int64_t t80 = -1617LL;

	t80 = (x5797+((x5798|x5799)>>x5800));

	if (t80 != 1152921504606912510LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5913 = 8;
	static uint64_t x5914 = UINT64_MAX;
	int8_t x5915 = INT8_MIN;
	static volatile int32_t x5916 = 5;
	volatile uint64_t t81 = 5272340099481LLU;

	t81 = (x5913+((x5914|x5915)>>x5916));

	if (t81 != 576460752303423495LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x6037 = UINT32_MAX;
	static int16_t x6040 = 2;

	t82 = (x6037+((x6038|x6039)>>x6040));

	if (t82 != 1073733634U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x6129 = 485U;
	uint64_t x6131 = 15189117171064728LLU;
	uint8_t x6132 = 0U;
	uint64_t t83 = 519465629712LLU;

	t83 = (x6129+((x6130|x6131)>>x6132));

	if (t83 != 484LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x6141 = INT8_MIN;
	volatile uint64_t x6142 = 8227635745LLU;
	volatile uint32_t x6143 = 54U;
	volatile int8_t x6144 = 24;
	volatile uint64_t t84 = 41241LLU;

	t84 = (x6141+((x6142|x6143)>>x6144));

	if (t84 != 362LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x6149 = 115LL;
	uint8_t x6151 = UINT8_MAX;
	uint8_t x6152 = 3U;
	volatile int64_t t85 = -954LL;

	t85 = (x6149+((x6150|x6151)>>x6152));

	if (t85 != 146LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x6161 = INT64_MAX;
	static uint16_t x6162 = 182U;
	uint8_t x6164 = 6U;
	static uint64_t t86 = 47461498958LLU;

	t86 = (x6161+((x6162|x6163)>>x6164));

	if (t86 != 9511602413006487550LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x6273 = INT32_MAX;
	uint8_t x6274 = 5U;
	int64_t x6275 = 106643837808193577LL;
	uint32_t x6276 = 0U;
	int64_t t87 = -55LL;

	t87 = (x6273+((x6274|x6275)>>x6276));

	if (t87 != 106643839955677228LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6277 = INT8_MAX;
	uint32_t x6279 = UINT32_MAX;
	volatile uint32_t t88 = 124404452U;

	t88 = (x6277+((x6278|x6279)>>x6280));

	if (t88 != 1073741950U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x6321 = 0U;
	static int32_t x6322 = 1052275478;
	static uint8_t x6323 = 1U;
	int8_t x6324 = 3;

	t89 = (x6321+((x6322|x6323)>>x6324));

	if (t89 != 131534434U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x6437 = -1;
	volatile uint64_t x6438 = 1423692971LLU;
	uint32_t x6439 = UINT32_MAX;
	volatile uint8_t x6440 = 1U;

	t90 = (x6437+((x6438|x6439)>>x6440));

	if (t90 != 2147483646LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6441 = -3352;
	volatile uint64_t x6442 = 1845426454157LLU;
	int64_t x6443 = INT64_MAX;
	volatile int16_t x6444 = 3;
	static uint64_t t91 = 263459132LLU;

	t91 = (x6441+((x6442|x6443)>>x6444));

	if (t91 != 1152921504606843623LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6513 = -1;
	uint64_t x6514 = 728105LLU;
	volatile uint64_t x6515 = UINT64_MAX;
	uint8_t x6516 = 2U;
	volatile uint64_t t92 = 52LLU;

	t92 = (x6513+((x6514|x6515)>>x6516));

	if (t92 != 4611686018427387902LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x6521 = INT32_MIN;
	static uint16_t x6522 = 8056U;
	static uint64_t x6523 = 330756090LLU;
	static int64_t x6524 = 52LL;
	static uint64_t t93 = 489099364009842LLU;

	t93 = (x6521+((x6522|x6523)>>x6524));

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x6565 = 7332U;
	uint64_t x6566 = 59440765432699126LLU;
	int32_t x6567 = -1;
	int8_t x6568 = 1;
	static uint64_t t94 = 176230031549276754LLU;

	t94 = (x6565+((x6566|x6567)>>x6568));

	if (t94 != 9223372036854783139LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x6577 = INT8_MIN;
	static uint64_t x6580 = 1LLU;
	volatile uint32_t t95 = 13812U;

	t95 = (x6577+((x6578|x6579)>>x6580));

	if (t95 != 25834U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x6641 = INT64_MIN;
	int32_t x6642 = INT32_MIN;
	uint8_t x6644 = 14U;
	volatile int64_t t96 = -29879857904304LL;

	t96 = (x6641+((x6642|x6643)>>x6644));

	if (t96 != -9223372036854644736LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6757 = INT8_MIN;
	int32_t x6758 = INT32_MIN;
	uint64_t x6759 = UINT64_MAX;
	volatile uint64_t t97 = 43LLU;

	t97 = (x6757+((x6758|x6759)>>x6760));

	if (t97 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6793 = -3669981657249LL;
	uint8_t x6796 = 6U;
	volatile uint64_t t98 = 706417346LLU;

	t98 = (x6793+((x6794|x6795)>>x6796));

	if (t98 != 288226706170054494LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x6797 = -2;
	uint32_t x6798 = UINT32_MAX;
	int16_t x6799 = -1;
	static uint8_t x6800 = 7U;
	volatile uint32_t t99 = 416U;

	t99 = (x6797+((x6798|x6799)>>x6800));

	if (t99 != 33554429U) { NG(); } else { ; }
	
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

