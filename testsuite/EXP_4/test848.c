#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x86 = -1;
int8_t x223 = 14;
int8_t x385 = INT8_MIN;
uint8_t x524 = 5U;
static uint8_t x879 = 1U;
int32_t x1014 = INT32_MAX;
uint64_t x1015 = 162LLU;
volatile uint64_t t14 = 3051LLU;
int8_t x1120 = 7;
static int32_t x1137 = -903911;
int64_t x1557 = -1LL;
uint16_t x1920 = 5U;
uint8_t x2028 = 1U;
uint64_t t27 = 370522LLU;
volatile uint32_t t29 = 39U;
uint8_t x2241 = 3U;
int8_t x2244 = 0;
uint32_t x2403 = UINT32_MAX;
volatile uint32_t t32 = 6350843U;
uint32_t x2421 = 698U;
uint16_t x2422 = 9149U;
int8_t x2698 = INT8_MIN;
uint16_t x2842 = UINT16_MAX;
int64_t x2926 = INT64_MAX;
static uint8_t x3053 = 0U;
volatile int64_t t37 = -789492190LL;
uint16_t x3314 = 27U;
static int32_t t39 = 12532190;
static uint64_t x3367 = 2689376866461077LLU;
volatile uint64_t t41 = 0LLU;
volatile int32_t x3610 = 69;
int16_t x3746 = -1;
volatile int32_t x3777 = 292337;
static uint16_t x3779 = 2U;
static int8_t x3831 = 31;
static uint8_t x3832 = 1U;
uint8_t x4012 = 52U;
volatile uint64_t t51 = 232411970552852384LLU;
volatile uint8_t x4085 = 25U;
volatile uint64_t x4109 = 0LLU;
uint16_t x4176 = 3U;
uint32_t x4479 = UINT32_MAX;
int64_t x4503 = 23970864520180LL;
static uint8_t x4504 = 2U;
volatile uint64_t t60 = 158340938093152769LLU;
volatile uint32_t x4626 = 11695716U;
volatile int64_t x4627 = 8191932923LL;
int8_t x4628 = 1;
static int8_t x4724 = 1;
static uint64_t x4750 = 12LLU;
volatile uint64_t t63 = 759091624575LLU;
uint8_t x4808 = 10U;
volatile int16_t x5021 = -4;
uint32_t x5023 = UINT32_MAX;
static volatile uint32_t x5145 = 1660U;
int16_t x5147 = INT16_MAX;
volatile int8_t x5242 = INT8_MIN;
volatile uint64_t t72 = 91230833477791LLU;
volatile int32_t t73 = 3287;
uint8_t x5368 = 9U;
uint32_t t74 = 62066992U;
static int16_t x5742 = -1;
volatile int32_t x5796 = 0;
volatile uint64_t x5853 = UINT64_MAX;
volatile int16_t x5854 = INT16_MAX;
uint64_t x5885 = 40625899LLU;
static int8_t x5931 = 1;
volatile uint64_t x5966 = UINT64_MAX;
static volatile uint64_t t80 = 1787632483LLU;
int16_t x6121 = 14;
volatile int32_t t82 = -370;
static volatile uint16_t x6233 = 1U;
volatile uint16_t x6353 = UINT16_MAX;
static uint8_t x6355 = 18U;
uint32_t x6452 = 0U;
uint16_t x6483 = UINT16_MAX;
int16_t x6665 = INT16_MAX;
int32_t x6668 = 1;
int8_t x6681 = INT8_MIN;
static int64_t x6682 = 2062LL;
uint64_t t93 = 730360939320552LLU;
int8_t x7037 = INT8_MIN;
int8_t x7050 = INT8_MIN;
uint64_t t96 = 8452884504092LLU;
int8_t x7135 = INT8_MAX;
static volatile uint8_t x7244 = 5U;
static uint8_t x7259 = 2U;


void f0(void) {
	int8_t x9 = INT8_MIN;
	uint8_t x10 = UINT8_MAX;
	volatile uint16_t x11 = 3288U;
	static uint32_t x12 = 0U;
	static volatile int32_t t0 = 80035925;

	t0 = (x9*(x10+(x11<<x12)));

	if (t0 != -453504) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x49 = INT16_MIN;
	static uint16_t x50 = 297U;
	uint64_t x51 = UINT64_MAX;
	uint64_t x52 = 27LLU;
	uint64_t t1 = 1LLU;

	t1 = (x49*(x50+(x51<<x52)));

	if (t1 != 4398036779008LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x85 = 508U;
	int8_t x87 = INT8_MAX;
	static uint8_t x88 = 3U;
	static int32_t t2 = 3389;

	t2 = (x85*(x86+(x87<<x88)));

	if (t2 != 515620) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x181 = -1;
	static volatile int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	uint8_t x184 = 1U;
	int32_t t3 = 67441639;

	t3 = (x181*(x182+(x183<<x184)));

	if (t3 != -382) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x221 = UINT64_MAX;
	static volatile uint8_t x222 = UINT8_MAX;
	uint8_t x224 = 1U;
	volatile uint64_t t4 = 1188150800973450LLU;

	t4 = (x221*(x222+(x223<<x224)));

	if (t4 != 18446744073709551333LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x325 = 13664U;
	int32_t x326 = -1;
	static int16_t x327 = 113;
	static int32_t x328 = 0;
	uint32_t t5 = 234U;

	t5 = (x325*(x326+(x327<<x328)));

	if (t5 != 1530368U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x386 = 3U;
	volatile int8_t x387 = 1;
	static uint8_t x388 = 1U;
	volatile int32_t t6 = -137068;

	t6 = (x385*(x386+(x387<<x388)));

	if (t6 != -640) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x521 = 5168327LLU;
	int64_t x522 = -45LL;
	uint16_t x523 = UINT16_MAX;
	uint64_t t7 = 125LLU;

	t7 = (x521*(x522+(x523<<x524)));

	if (t7 != 10838369343525LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x549 = INT16_MIN;
	int32_t x550 = INT32_MIN;
	uint64_t x551 = UINT64_MAX;
	static volatile uint8_t x552 = 50U;
	uint64_t t8 = 3518785347713LLU;

	t8 = (x549*(x550+(x551<<x552)));

	if (t8 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x741 = 4U;
	volatile int16_t x742 = INT16_MAX;
	uint16_t x743 = 101U;
	uint16_t x744 = 0U;
	static uint32_t t9 = 47776U;

	t9 = (x741*(x742+(x743<<x744)));

	if (t9 != 131472U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x841 = -1;
	uint64_t x842 = 159307591436047LLU;
	volatile uint32_t x843 = UINT32_MAX;
	static uint16_t x844 = 15U;
	static volatile uint64_t t10 = 2199520224851418602LLU;

	t10 = (x841*(x842+(x843<<x844)));

	if (t10 != 18446584761823181041LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x873 = 62996602614LLU;
	volatile uint32_t x874 = 486548219U;
	uint64_t x875 = 58501524759862998LLU;
	uint8_t x876 = 21U;
	volatile uint64_t t11 = 3248LLU;

	t11 = (x873*(x874+(x875<<x876)));

	if (t11 != 14974982698463414066LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x877 = UINT32_MAX;
	int16_t x878 = 4831;
	int8_t x880 = 2;
	uint32_t t12 = 14U;

	t12 = (x877*(x878+(x879<<x880)));

	if (t12 != 4294962461U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1013 = UINT32_MAX;
	volatile uint16_t x1016 = 3U;
	static volatile uint64_t t13 = 1935LLU;

	t13 = (x1013*(x1014+(x1015<<x1016)));

	if (t13 != 9223377596689939185LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1053 = UINT64_MAX;
	uint64_t x1054 = 69657906883105702LLU;
	uint16_t x1055 = 93U;
	static uint8_t x1056 = 8U;

	t14 = (x1053*(x1054+(x1055<<x1056)));

	if (t14 != 18377086166826422106LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1077 = 3274789U;
	volatile int8_t x1078 = INT8_MIN;
	int8_t x1079 = INT8_MAX;
	static uint16_t x1080 = 3U;
	static volatile uint32_t t15 = 139U;

	t15 = (x1077*(x1078+(x1079<<x1080)));

	if (t15 != 2908012632U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1117 = -1LL;
	volatile int32_t x1118 = 5276;
	static volatile uint16_t x1119 = 108U;
	volatile int64_t t16 = 0LL;

	t16 = (x1117*(x1118+(x1119<<x1120)));

	if (t16 != -19100LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1138 = 137598558663999LLU;
	static uint64_t x1139 = UINT64_MAX;
	static uint16_t x1140 = 35U;
	volatile uint64_t t17 = 41186610837193LLU;

	t17 = (x1137*(x1138+(x1139<<x1140)));

	if (t17 != 4781415900900818471LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1225 = 6LL;
	int8_t x1226 = -1;
	volatile uint32_t x1227 = 1U;
	int8_t x1228 = 1;
	volatile int64_t t18 = 33572545203382515LL;

	t18 = (x1225*(x1226+(x1227<<x1228)));

	if (t18 != 6LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1558 = INT16_MIN;
	static uint64_t x1559 = 567032901685364050LLU;
	volatile uint8_t x1560 = 1U;
	uint64_t t19 = 97779350818LLU;

	t19 = (x1557*(x1558+(x1559<<x1560)));

	if (t19 != 17312678270338856284LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1589 = -1;
	int8_t x1590 = -5;
	volatile int8_t x1591 = INT8_MAX;
	uint8_t x1592 = 3U;
	volatile int32_t t20 = 65458609;

	t20 = (x1589*(x1590+(x1591<<x1592)));

	if (t20 != -1011) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1605 = INT32_MAX;
	int32_t x1606 = 1;
	uint32_t x1607 = UINT32_MAX;
	int32_t x1608 = 25;
	uint32_t t21 = 1939U;

	t21 = (x1605*(x1606+(x1607<<x1608)));

	if (t21 != 2181038079U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1625 = -1;
	uint16_t x1626 = 24U;
	static volatile uint16_t x1627 = UINT16_MAX;
	uint16_t x1628 = 1U;
	static volatile int32_t t22 = 0;

	t22 = (x1625*(x1626+(x1627<<x1628)));

	if (t22 != -131094) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1753 = 3;
	int16_t x1754 = 8;
	int8_t x1755 = 30;
	volatile uint8_t x1756 = 0U;
	int32_t t23 = 952529655;

	t23 = (x1753*(x1754+(x1755<<x1756)));

	if (t23 != 114) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1813 = 24339221U;
	volatile int8_t x1814 = INT8_MIN;
	uint64_t x1815 = UINT64_MAX;
	int8_t x1816 = 0;
	uint64_t t24 = 993LLU;

	t24 = (x1813*(x1814+(x1815<<x1816)));

	if (t24 != 18446744070569792107LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1917 = 877U;
	int32_t x1918 = -29226501;
	uint64_t x1919 = 15900165LLU;
	volatile uint64_t t25 = 161408LLU;

	t25 = (x1917*(x1918+(x1919<<x1920)));

	if (t25 != 420590589183LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2021 = 8U;
	static int16_t x2022 = INT16_MIN;
	int8_t x2023 = 1;
	int8_t x2024 = 7;
	static volatile int32_t t26 = 199134752;

	t26 = (x2021*(x2022+(x2023<<x2024)));

	if (t26 != -261120) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x2025 = UINT16_MAX;
	uint64_t x2026 = UINT64_MAX;
	static uint32_t x2027 = 139878943U;

	t27 = (x2025*(x2026+(x2027<<x2028)));

	if (t27 != 18333932993475LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x2045 = UINT64_MAX;
	static volatile int32_t x2046 = INT32_MIN;
	int64_t x2047 = 147790048603210020LL;
	uint16_t x2048 = 5U;
	uint64_t t28 = 481194714000417LLU;

	t28 = (x2045*(x2046+(x2047<<x2048)));

	if (t28 != 13717462520554314624LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2161 = INT8_MIN;
	uint32_t x2162 = 21080224U;
	int16_t x2163 = INT16_MAX;
	uint8_t x2164 = 0U;

	t29 = (x2161*(x2162+(x2163<<x2164)));

	if (t29 != 1592504448U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x2225 = INT16_MAX;
	int8_t x2226 = INT8_MIN;
	int64_t x2227 = 88346659033LL;
	uint8_t x2228 = 7U;
	static volatile int64_t t30 = 29003849303LL;

	t30 = (x2225*(x2226+(x2227<<x2228)));

	if (t30 != 370541436992197632LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2242 = -1;
	uint8_t x2243 = 1U;
	int32_t t31 = 2;

	t31 = (x2241*(x2242+(x2243<<x2244)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2401 = UINT32_MAX;
	int8_t x2402 = INT8_MAX;
	uint8_t x2404 = 1U;

	t32 = (x2401*(x2402+(x2403<<x2404)));

	if (t32 != 4294967171U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x2423 = 124305573LLU;
	uint8_t x2424 = 2U;
	uint64_t t33 = 1862LLU;

	t33 = (x2421*(x2422+(x2423<<x2424)));

	if (t33 != 347067545818LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2697 = -1;
	static uint64_t x2699 = 172928288329LLU;
	uint32_t x2700 = 9U;
	volatile uint64_t t34 = 5709899156883258LLU;

	t34 = (x2697*(x2698+(x2699<<x2700)));

	if (t34 != 18446655534425927296LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2841 = -1868;
	static uint32_t x2843 = 721318U;
	int8_t x2844 = 1;
	uint32_t t35 = 17231746U;

	t35 = (x2841*(x2842+(x2843<<x2844)));

	if (t35 != 1477703868U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2925 = INT32_MIN;
	uint64_t x2927 = 5604611796LLU;
	volatile uint8_t x2928 = 0U;
	volatile uint64_t t36 = 17932700178380LLU;

	t36 = (x2925*(x2926+(x2927<<x2928)));

	if (t36 != 6410931890559123456LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x3054 = 1;
	int64_t x3055 = 761LL;
	uint8_t x3056 = 3U;

	t37 = (x3053*(x3054+(x3055<<x3056)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3173 = 212LLU;
	int32_t x3174 = -1;
	uint64_t x3175 = UINT64_MAX;
	uint16_t x3176 = 6U;
	uint64_t t38 = 128990468251550LLU;

	t38 = (x3173*(x3174+(x3175<<x3176)));

	if (t38 != 18446744073709537836LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x3313 = INT8_MIN;
	static int8_t x3315 = INT8_MAX;
	volatile uint32_t x3316 = 0U;

	t39 = (x3313*(x3314+(x3315<<x3316)));

	if (t39 != -19712) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3365 = 36;
	static int8_t x3366 = INT8_MIN;
	int8_t x3368 = 0;
	volatile uint64_t t40 = 414892721510841LLU;

	t40 = (x3365*(x3366+(x3367<<x3368)));

	if (t40 != 96817567192594164LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x3429 = UINT64_MAX;
	int32_t x3430 = -177;
	uint64_t x3431 = UINT64_MAX;
	uint8_t x3432 = 11U;

	t41 = (x3429*(x3430+(x3431<<x3432)));

	if (t41 != 2225LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3453 = INT16_MAX;
	uint8_t x3454 = 44U;
	uint8_t x3455 = UINT8_MAX;
	uint8_t x3456 = 1U;
	int32_t t42 = -389877;

	t42 = (x3453*(x3454+(x3455<<x3456)));

	if (t42 != 18152918) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x3589 = 13U;
	int64_t x3590 = INT64_MIN;
	uint64_t x3591 = 108LLU;
	uint8_t x3592 = 33U;
	volatile uint64_t t43 = 94LLU;

	t43 = (x3589*(x3590+(x3591<<x3592)));

	if (t43 != 9223384097122942976LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x3609 = 1442252U;
	uint8_t x3611 = UINT8_MAX;
	uint8_t x3612 = 2U;
	uint32_t t44 = 2255672U;

	t44 = (x3609*(x3610+(x3611<<x3612)));

	if (t44 != 1570612428U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x3633 = INT16_MAX;
	static uint8_t x3634 = UINT8_MAX;
	int8_t x3635 = 0;
	int64_t x3636 = 7LL;
	volatile int32_t t45 = 4516819;

	t45 = (x3633*(x3634+(x3635<<x3636)));

	if (t45 != 8355585) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x3697 = INT8_MIN;
	int32_t x3698 = INT32_MAX;
	volatile uint32_t x3699 = 451579276U;
	volatile uint16_t x3700 = 6U;
	uint32_t t46 = 166063U;

	t46 = (x3697*(x3698+(x3699<<x3700)));

	if (t46 != 2924380288U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3745 = 50LLU;
	int32_t x3747 = INT32_MAX;
	uint8_t x3748 = 0U;
	volatile uint64_t t47 = 441820LLU;

	t47 = (x3745*(x3746+(x3747<<x3748)));

	if (t47 != 107374182300LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3778 = 2;
	uint8_t x3780 = 2U;
	int32_t t48 = 2438170;

	t48 = (x3777*(x3778+(x3779<<x3780)));

	if (t48 != 2923370) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3829 = UINT64_MAX;
	static uint32_t x3830 = 27172U;
	static uint64_t t49 = 764466692LLU;

	t49 = (x3829*(x3830+(x3831<<x3832)));

	if (t49 != 18446744073709524382LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3869 = -10;
	int16_t x3870 = -1;
	static volatile uint64_t x3871 = UINT64_MAX;
	static volatile uint16_t x3872 = 1U;
	static volatile uint64_t t50 = 1158694997522532230LLU;

	t50 = (x3869*(x3870+(x3871<<x3872)));

	if (t50 != 30LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x4009 = UINT64_MAX;
	int64_t x4010 = INT64_MIN;
	uint64_t x4011 = 33562133282387794LLU;

	t51 = (x4009*(x4010+(x4011<<x4012)));

	if (t51 != 783626335162466304LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x4017 = 117U;
	uint8_t x4018 = UINT8_MAX;
	int8_t x4019 = 21;
	uint16_t x4020 = 0U;
	volatile int32_t t52 = 1;

	t52 = (x4017*(x4018+(x4019<<x4020)));

	if (t52 != 32292) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x4086 = INT16_MIN;
	volatile int16_t x4087 = INT16_MAX;
	static volatile uint32_t x4088 = 0U;
	volatile int32_t t53 = -1725;

	t53 = (x4085*(x4086+(x4087<<x4088)));

	if (t53 != -25) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x4110 = -16355;
	int8_t x4111 = 1;
	static uint8_t x4112 = 0U;
	uint64_t t54 = 106545LLU;

	t54 = (x4109*(x4110+(x4111<<x4112)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x4173 = -1;
	volatile uint64_t x4174 = 103058LLU;
	static int8_t x4175 = 0;
	volatile uint64_t t55 = 235199028298LLU;

	t55 = (x4173*(x4174+(x4175<<x4176)));

	if (t55 != 18446744073709448558LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4345 = UINT64_MAX;
	int8_t x4346 = INT8_MIN;
	volatile uint16_t x4347 = 598U;
	static uint8_t x4348 = 0U;
	uint64_t t56 = 11029648813191607LLU;

	t56 = (x4345*(x4346+(x4347<<x4348)));

	if (t56 != 18446744073709551146LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x4353 = 1036783U;
	volatile int32_t x4354 = INT32_MIN;
	uint8_t x4355 = 0U;
	static int64_t x4356 = 4LL;
	volatile uint32_t t57 = 530U;

	t57 = (x4353*(x4354+(x4355<<x4356)));

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4409 = 766U;
	volatile int32_t x4410 = -310;
	volatile uint8_t x4411 = 48U;
	volatile uint8_t x4412 = 18U;
	uint32_t t58 = 4111692U;

	t58 = (x4409*(x4410+(x4411<<x4412)));

	if (t58 != 1048338540U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x4477 = 14U;
	volatile int8_t x4478 = -6;
	uint16_t x4480 = 3U;
	uint32_t t59 = 40285338U;

	t59 = (x4477*(x4478+(x4479<<x4480)));

	if (t59 != 4294967100U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x4501 = INT32_MIN;
	uint64_t x4502 = 452837324610518LLU;

	t60 = (x4501*(x4502+(x4503<<x4504)));

	if (t60 != 9103281371119353856LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4625 = 958LLU;
	uint64_t t61 = 381571597542219838LLU;

	t61 = (x4625*(x4626+(x4627<<x4628)));

	if (t61 != 15706947976396LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4721 = -15698;
	int16_t x4722 = 7;
	volatile uint64_t x4723 = 45484891173724772LLU;
	uint64_t t62 = 176561324141947086LLU;

	t62 = (x4721*(x4722+(x4723<<x4724)));

	if (t62 != 10802394459081974450LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x4749 = INT8_MIN;
	static volatile uint64_t x4751 = 18349581LLU;
	volatile int8_t x4752 = 16;

	t63 = (x4749*(x4750+(x4751<<x4752)));

	if (t63 != 18446590146267576832LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4805 = -1;
	int32_t x4806 = INT32_MIN;
	uint64_t x4807 = UINT64_MAX;
	uint64_t t64 = 736669251LLU;

	t64 = (x4805*(x4806+(x4807<<x4808)));

	if (t64 != 2147484672LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4845 = -1LL;
	uint64_t x4846 = 103795491052707LLU;
	int32_t x4847 = INT32_MAX;
	uint32_t x4848 = 0U;
	volatile uint64_t t65 = 224618603328LLU;

	t65 = (x4845*(x4846+(x4847<<x4848)));

	if (t65 != 18446640276071015262LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4881 = INT8_MIN;
	uint64_t x4882 = 4348644LLU;
	static uint32_t x4883 = UINT32_MAX;
	int8_t x4884 = 1;
	volatile uint64_t t66 = 128LLU;

	t66 = (x4881*(x4882+(x4883<<x4884)));

	if (t66 != 18446743523397111552LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4953 = 30U;
	volatile int16_t x4954 = INT16_MIN;
	static uint64_t x4955 = 104085657LLU;
	static uint8_t x4956 = 3U;
	volatile uint64_t t67 = 337LLU;

	t67 = (x4953*(x4954+(x4955<<x4956)));

	if (t67 != 24979574640LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x5022 = UINT64_MAX;
	uint16_t x5024 = 0U;
	uint64_t t68 = 7442398825289966781LLU;

	t68 = (x5021*(x5022+(x5023<<x5024)));

	if (t68 != 18446744056529682440LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x5146 = 1332U;
	uint8_t x5148 = 0U;
	volatile uint32_t t69 = 1935U;

	t69 = (x5145*(x5146+(x5147<<x5148)));

	if (t69 != 56604340U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x5229 = 244043;
	static uint64_t x5230 = 754870020102601425LLU;
	int16_t x5231 = 214;
	int16_t x5232 = 1;
	static uint64_t t70 = 9843LLU;

	t70 = (x5229*(x5230+(x5231<<x5232)));

	if (t70 != 11557995835681574303LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x5241 = INT32_MAX;
	static uint32_t x5243 = UINT32_MAX;
	uint64_t x5244 = 15LLU;
	uint32_t t71 = 561U;

	t71 = (x5241*(x5242+(x5243<<x5244)));

	if (t71 != 32896U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x5245 = 11464LL;
	static int16_t x5246 = -1;
	uint64_t x5247 = UINT64_MAX;
	uint16_t x5248 = 10U;

	t72 = (x5245*(x5246+(x5247<<x5248)));

	if (t72 != 18446744073697801016LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5269 = UINT16_MAX;
	int16_t x5270 = -60;
	static int8_t x5271 = 2;
	static int16_t x5272 = 0;

	t73 = (x5269*(x5270+(x5271<<x5272)));

	if (t73 != -3801030) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5365 = UINT32_MAX;
	int32_t x5366 = -1;
	uint32_t x5367 = 369397U;

	t74 = (x5365*(x5366+(x5367<<x5368)));

	if (t74 != 4105836033U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5741 = 0;
	uint64_t x5743 = 40164700238LLU;
	int16_t x5744 = 51;
	uint64_t t75 = 3515982795054LLU;

	t75 = (x5741*(x5742+(x5743<<x5744)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5793 = 2U;
	int16_t x5794 = INT16_MIN;
	uint16_t x5795 = 11253U;
	int32_t t76 = -16085;

	t76 = (x5793*(x5794+(x5795<<x5796)));

	if (t76 != -43030) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x5855 = 5LLU;
	int16_t x5856 = 1;
	uint64_t t77 = 2899598289792141LLU;

	t77 = (x5853*(x5854+(x5855<<x5856)));

	if (t77 != 18446744073709518839LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x5886 = UINT16_MAX;
	uint16_t x5887 = 20U;
	int32_t x5888 = 2;
	uint64_t t78 = 127669857040701206LLU;

	t78 = (x5885*(x5886+(x5887<<x5888)));

	if (t78 != 2665668362885LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x5929 = 7;
	static int64_t x5930 = -673LL;
	static volatile uint8_t x5932 = 0U;
	int64_t t79 = 211LL;

	t79 = (x5929*(x5930+(x5931<<x5932)));

	if (t79 != -4704LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x5965 = 186057777783986LL;
	volatile uint64_t x5967 = 10696LLU;
	uint8_t x5968 = 10U;

	t80 = (x5965*(x5966+(x5967<<x5968)));

	if (t80 != 8693732799946136398LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x6029 = 34874LLU;
	int32_t x6030 = 146;
	uint8_t x6031 = 44U;
	int16_t x6032 = 13;
	uint64_t t81 = 21954LLU;

	t81 = (x6029*(x6030+(x6031<<x6032)));

	if (t81 != 12575355156LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x6122 = INT8_MIN;
	int16_t x6123 = INT16_MAX;
	volatile uint8_t x6124 = 0U;

	t82 = (x6121*(x6122+(x6123<<x6124)));

	if (t82 != 456946) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x6153 = 75263LLU;
	int16_t x6154 = INT16_MIN;
	volatile uint16_t x6155 = 1U;
	static int16_t x6156 = 0;
	uint64_t t83 = 134LLU;

	t83 = (x6153*(x6154+(x6155<<x6156)));

	if (t83 != 18446744071243408895LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x6234 = UINT64_MAX;
	uint8_t x6235 = 1U;
	static volatile uint8_t x6236 = 7U;
	uint64_t t84 = 533618760LLU;

	t84 = (x6233*(x6234+(x6235<<x6236)));

	if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x6354 = 504501670798LL;
	int8_t x6356 = 2;
	int64_t t85 = -7LL;

	t85 = (x6353*(x6354+(x6355<<x6356)));

	if (t85 != 33062517000465450LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x6449 = -1;
	volatile uint64_t x6450 = UINT64_MAX;
	static volatile uint8_t x6451 = UINT8_MAX;
	volatile uint64_t t86 = 11084LLU;

	t86 = (x6449*(x6450+(x6451<<x6452)));

	if (t86 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x6481 = 131;
	uint64_t x6482 = 321494252648357324LLU;
	static uint8_t x6484 = 8U;
	volatile uint64_t t87 = 127996LLU;

	t87 = (x6481*(x6482+(x6483<<x6484)));

	if (t87 != 5222258951713487972LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x6569 = INT16_MIN;
	int8_t x6570 = INT8_MAX;
	uint32_t x6571 = 1184071U;
	volatile int16_t x6572 = 0;
	uint32_t t88 = 1U;

	t88 = (x6569*(x6570+(x6571<<x6572)));

	if (t88 != 4145872896U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x6666 = INT16_MIN;
	int16_t x6667 = INT16_MAX;
	static volatile int32_t t89 = 416;

	t89 = (x6665*(x6666+(x6667<<x6668)));

	if (t89 != 1073643522) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6683 = UINT64_MAX;
	uint8_t x6684 = 7U;
	uint64_t t90 = 8954LLU;

	t90 = (x6681*(x6682+(x6683<<x6684)));

	if (t90 != 18446744073709304064LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x6689 = INT32_MAX;
	uint32_t x6690 = 0U;
	int8_t x6691 = INT8_MAX;
	volatile int8_t x6692 = 0;
	uint32_t t91 = 32729022U;

	t91 = (x6689*(x6690+(x6691<<x6692)));

	if (t91 != 2147483521U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x6721 = UINT64_MAX;
	uint8_t x6722 = 14U;
	int8_t x6723 = 1;
	int16_t x6724 = 1;
	uint64_t t92 = 295196368345LLU;

	t92 = (x6721*(x6722+(x6723<<x6724)));

	if (t92 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6773 = 223U;
	int64_t x6774 = 1621LL;
	uint64_t x6775 = 1497121904386724123LLU;
	int8_t x6776 = 0;

	t93 = (x6773*(x6774+(x6775<<x6776)));

	if (t93 != 1816791351467911824LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x6957 = INT32_MIN;
	static int8_t x6958 = INT8_MIN;
	static uint64_t x6959 = 99961258LLU;
	int8_t x6960 = 0;
	volatile uint64_t t94 = 11010900LLU;

	t94 = (x6957*(x6958+(x6959<<x6960)));

	if (t94 != 18232079181598949376LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x7038 = 8381056;
	static uint8_t x7039 = 12U;
	static uint16_t x7040 = 1U;
	int32_t t95 = 229314576;

	t95 = (x7037*(x7038+(x7039<<x7040)));

	if (t95 != -1072778240) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x7049 = INT8_MIN;
	uint64_t x7051 = UINT64_MAX;
	uint8_t x7052 = 4U;

	t96 = (x7049*(x7050+(x7051<<x7052)));

	if (t96 != 18432LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x7133 = 0;
	int64_t x7134 = -1LL;
	uint8_t x7136 = 3U;
	int64_t t97 = 1089698425704LL;

	t97 = (x7133*(x7134+(x7135<<x7136)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x7241 = -1LL;
	int16_t x7242 = INT16_MIN;
	int16_t x7243 = INT16_MAX;
	static int64_t t98 = -11626LL;

	t98 = (x7241*(x7242+(x7243<<x7244)));

	if (t98 != -1015776LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x7257 = 3U;
	int16_t x7258 = 284;
	volatile int8_t x7260 = 0;
	volatile int32_t t99 = 0;

	t99 = (x7257*(x7258+(x7259<<x7260)));

	if (t99 != 858) { NG(); } else { ; }
	
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

