#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 265530666LLU;
uint32_t x3 = 0U;
static uint64_t x6 = UINT64_MAX;
uint64_t x138 = 1407517LLU;
int16_t x149 = 0;
uint64_t x153 = 71463799610LLU;
int8_t x154 = INT8_MAX;
static uint64_t t4 = 1495159574888LLU;
int8_t x222 = 3;
static int32_t t6 = -473206973;
volatile int8_t x285 = -1;
volatile uint64_t t8 = 123169891094103LLU;
static uint8_t x293 = 0U;
volatile int32_t t9 = 3026104;
volatile uint32_t x308 = 31061502U;
volatile int32_t x565 = -18973;
int32_t x568 = 904;
uint8_t x631 = 29U;
volatile uint8_t x679 = 1U;
uint64_t x768 = 430340LLU;
int16_t x821 = -1;
volatile uint64_t x822 = UINT64_MAX;
uint8_t x1347 = 6U;
static uint16_t x1461 = 2U;
static volatile uint32_t t27 = 8U;
static uint64_t t28 = 589891758989LLU;
volatile int16_t x1501 = INT16_MAX;
volatile int64_t x1612 = -1LL;
static uint64_t t31 = 6766231812798935027LLU;
int8_t x1651 = 17;
int8_t x1749 = INT8_MAX;
uint32_t x1750 = UINT32_MAX;
uint8_t x1801 = UINT8_MAX;
int32_t x2007 = 10;
uint64_t x2061 = 9707943LLU;
uint8_t x2062 = 2U;
static uint32_t x2082 = UINT32_MAX;
volatile uint32_t t43 = 2792U;
static int64_t t45 = -5465699LL;
static uint8_t x2470 = 0U;
static int32_t x2472 = -1;
static int8_t x2543 = 1;
volatile int8_t x2571 = 0;
int8_t x2988 = -48;
static int64_t x3065 = -1LL;
volatile int16_t x3282 = INT16_MAX;
int16_t x3306 = 852;
uint64_t t59 = 3544LLU;
static uint64_t x3449 = 13461035LLU;
static uint8_t x3451 = 3U;
volatile int64_t x3452 = INT64_MAX;
uint8_t x3633 = 116U;
static int32_t x3634 = 49;
int32_t t62 = 5459647;
uint16_t x3640 = 59U;
uint32_t x3641 = 79605345U;
uint32_t x3642 = 7U;
int32_t x3772 = INT32_MIN;
volatile int32_t x3817 = INT32_MIN;
volatile uint32_t x3818 = UINT32_MAX;
int16_t x3819 = 2;
static uint8_t x3886 = UINT8_MAX;
volatile uint8_t x3887 = 1U;
uint8_t x4015 = 2U;
uint64_t t69 = 22375675230LLU;
int64_t x4085 = INT64_MIN;
int8_t x4088 = INT8_MIN;
uint8_t x4225 = 21U;
int32_t x4331 = 1;
uint8_t x4374 = 1U;
int32_t x4420 = -1;
uint16_t x4542 = 40U;
static uint8_t x4543 = 0U;
volatile int16_t x4544 = INT16_MAX;
int32_t t76 = -62137;
static uint32_t t77 = 18U;
static int16_t x4701 = 0;
uint64_t x4871 = 24LLU;
int64_t x4934 = 2776914090348064LL;
uint64_t x4961 = UINT64_MAX;
volatile uint64_t t81 = 21049491LLU;
uint64_t t82 = 205LLU;
int8_t x5014 = 5;
uint32_t t83 = 1308U;
int64_t x5029 = INT64_MAX;
uint32_t x5031 = 15U;
volatile uint8_t x5084 = 27U;
int16_t x5121 = -1683;
uint16_t x5122 = 17U;
static int16_t x5244 = INT16_MAX;
int8_t x5276 = INT8_MIN;
static int16_t x5304 = INT16_MIN;
volatile uint64_t t91 = 17167758839LLU;
uint8_t x5340 = 1U;
uint32_t x5355 = 23U;
uint64_t t94 = 29689867953163LLU;
volatile uint16_t x5382 = 383U;
static volatile int16_t x5384 = -2254;
int64_t x5475 = 1LL;


void f0(void) {
	int64_t x2 = 8LL;
	static volatile int8_t x4 = INT8_MAX;
	volatile uint64_t t0 = 24501738496460976LLU;

	t0 = (x1&((x2<<x3)/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint16_t x7 = 28U;
	volatile int8_t x8 = INT8_MIN;
	uint64_t t1 = 73648056044758LLU;

	t1 = (x5&((x6<<x7)/x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x137 = INT8_MAX;
	uint64_t x139 = 2LLU;
	uint16_t x140 = UINT16_MAX;
	volatile uint64_t t2 = 133546953LLU;

	t2 = (x137&((x138<<x139)/x140));

	if (t2 != 85LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x150 = 1;
	int16_t x151 = 19;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t3 = 330U;

	t3 = (x149&((x150<<x151)/x152));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x155 = 0U;
	static int64_t x156 = INT64_MIN;

	t4 = (x153&((x154<<x155)/x156));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x181 = 1;
	uint64_t x182 = 62756790398LLU;
	volatile int8_t x183 = 0;
	int64_t x184 = INT64_MIN;
	uint64_t t5 = 12791LLU;

	t5 = (x181&((x182<<x183)/x184));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x221 = INT16_MAX;
	uint8_t x223 = 14U;
	int16_t x224 = INT16_MAX;

	t6 = (x221&((x222<<x223)/x224));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x286 = 165U;
	uint32_t x287 = 8U;
	int64_t x288 = INT64_MAX;
	static volatile int64_t t7 = -524LL;

	t7 = (x285&((x286<<x287)/x288));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x289 = 1;
	static volatile int16_t x290 = 95;
	volatile uint8_t x291 = 9U;
	uint64_t x292 = UINT64_MAX;

	t8 = (x289&((x290<<x291)/x292));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x294 = INT8_MAX;
	int16_t x295 = 0;
	static volatile int16_t x296 = -43;

	t9 = (x293&((x294<<x295)/x296));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x305 = 771U;
	uint32_t x306 = 5586U;
	static uint16_t x307 = 23U;
	volatile uint32_t t10 = 23031U;

	t10 = (x305&((x306<<x307)/x308));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x566 = 28191651;
	volatile uint8_t x567 = 2U;
	volatile int32_t t11 = -14540235;

	t11 = (x565&((x566<<x567)/x568));

	if (t11 != 107841) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x629 = 6;
	static uint32_t x630 = 1251349179U;
	int64_t x632 = 2309995855159000037LL;
	volatile int64_t t12 = -754802390552699525LL;

	t12 = (x629&((x630<<x631)/x632));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x677 = 97U;
	uint8_t x678 = 2U;
	int32_t x680 = 6140;
	volatile int32_t t13 = -943789218;

	t13 = (x677&((x678<<x679)/x680));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x689 = -8;
	volatile int32_t x690 = 5293;
	int16_t x691 = 0;
	static int32_t x692 = INT32_MIN;
	volatile int32_t t14 = -3363408;

	t14 = (x689&((x690<<x691)/x692));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x717 = INT32_MAX;
	static volatile uint16_t x718 = 309U;
	uint8_t x719 = 2U;
	uint32_t x720 = 125134232U;
	uint32_t t15 = 29523U;

	t15 = (x717&((x718<<x719)/x720));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x765 = 21U;
	static volatile uint16_t x766 = 157U;
	volatile uint8_t x767 = 10U;
	volatile uint64_t t16 = 2LLU;

	t16 = (x765&((x766<<x767)/x768));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x781 = INT64_MIN;
	uint8_t x782 = 79U;
	uint32_t x783 = 6U;
	uint64_t x784 = 2165335160382185LLU;
	static uint64_t t17 = 1119787LLU;

	t17 = (x781&((x782<<x783)/x784));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x813 = UINT64_MAX;
	uint16_t x814 = 1041U;
	int8_t x815 = 1;
	uint16_t x816 = 16372U;
	static volatile uint64_t t18 = 129724693097759LLU;

	t18 = (x813&((x814<<x815)/x816));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x823 = 54U;
	int64_t x824 = 14241LL;
	static volatile uint64_t t19 = 712434LLU;

	t19 = (x821&((x822<<x823)/x824));

	if (t19 != 1294061489726849LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x865 = INT64_MIN;
	volatile uint32_t x866 = 14596U;
	static uint16_t x867 = 25U;
	static int64_t x868 = INT64_MIN;
	volatile int64_t t20 = -10509LL;

	t20 = (x865&((x866<<x867)/x868));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x953 = 13;
	static uint64_t x954 = 7LLU;
	uint32_t x955 = 0U;
	uint32_t x956 = 12542425U;
	uint64_t t21 = 46604212654223497LLU;

	t21 = (x953&((x954<<x955)/x956));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x961 = UINT32_MAX;
	uint8_t x962 = UINT8_MAX;
	uint16_t x963 = 1U;
	static int32_t x964 = 25548717;
	volatile uint32_t t22 = 10335U;

	t22 = (x961&((x962<<x963)/x964));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1029 = -531049191;
	static int8_t x1030 = 6;
	static int64_t x1031 = 0LL;
	int8_t x1032 = INT8_MAX;
	int32_t t23 = -5967;

	t23 = (x1029&((x1030<<x1031)/x1032));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1141 = INT64_MIN;
	static int8_t x1142 = INT8_MAX;
	uint32_t x1143 = 0U;
	static volatile int16_t x1144 = INT16_MIN;
	volatile int64_t t24 = 43372227497610LL;

	t24 = (x1141&((x1142<<x1143)/x1144));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1201 = 38;
	static uint8_t x1202 = 14U;
	uint16_t x1203 = 3U;
	int8_t x1204 = -1;
	volatile int32_t t25 = -580306;

	t25 = (x1201&((x1202<<x1203)/x1204));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1345 = 16755038LLU;
	uint32_t x1346 = 145963725U;
	uint64_t x1348 = 765215411360650LLU;
	uint64_t t26 = 1548673232262LLU;

	t26 = (x1345&((x1346<<x1347)/x1348));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1462 = 15U;
	static uint8_t x1463 = 0U;
	int32_t x1464 = -1;

	t27 = (x1461&((x1462<<x1463)/x1464));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1497 = UINT64_MAX;
	uint8_t x1498 = 11U;
	int64_t x1499 = 5LL;
	uint32_t x1500 = UINT32_MAX;

	t28 = (x1497&((x1498<<x1499)/x1500));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1502 = 1254899086U;
	volatile uint8_t x1503 = 0U;
	int16_t x1504 = 7575;
	volatile uint32_t t29 = 2553U;

	t29 = (x1501&((x1502<<x1503)/x1504));

	if (t29 != 1823U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1573 = INT16_MIN;
	static int16_t x1574 = 425;
	uint16_t x1575 = 0U;
	uint8_t x1576 = 16U;
	int32_t t30 = 1759094;

	t30 = (x1573&((x1574<<x1575)/x1576));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1609 = 2792LL;
	uint64_t x1610 = 13955949430660LLU;
	uint8_t x1611 = 12U;

	t31 = (x1609&((x1610<<x1611)/x1612));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1649 = 6640U;
	int64_t x1650 = 627497LL;
	volatile int8_t x1652 = -1;
	volatile int64_t t32 = 28377LL;

	t32 = (x1649&((x1650<<x1651)/x1652));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1737 = 5055U;
	uint32_t x1738 = 29710U;
	int8_t x1739 = 27;
	int32_t x1740 = -1;
	uint32_t t33 = 6420377U;

	t33 = (x1737&((x1738<<x1739)/x1740));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1751 = 1U;
	int8_t x1752 = INT8_MIN;
	static volatile uint32_t t34 = 1482041759U;

	t34 = (x1749&((x1750<<x1751)/x1752));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1802 = 1U;
	uint64_t x1803 = 14LLU;
	static uint16_t x1804 = UINT16_MAX;
	volatile int32_t t35 = 87373;

	t35 = (x1801&((x1802<<x1803)/x1804));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1897 = INT16_MIN;
	static uint32_t x1898 = UINT32_MAX;
	uint16_t x1899 = 29U;
	uint16_t x1900 = UINT16_MAX;
	uint32_t t36 = 501280U;

	t36 = (x1897&((x1898<<x1899)/x1900));

	if (t36 != 32768U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2005 = 5690;
	uint32_t x2006 = 140415350U;
	int16_t x2008 = -6;
	uint32_t t37 = 1039106U;

	t37 = (x2005&((x2006<<x2007)/x2008));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x2033 = UINT8_MAX;
	uint32_t x2034 = 12U;
	uint8_t x2035 = 9U;
	int64_t x2036 = INT64_MIN;
	volatile int64_t t38 = 31LL;

	t38 = (x2033&((x2034<<x2035)/x2036));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x2045 = 0U;
	static volatile int32_t x2046 = 467;
	uint16_t x2047 = 0U;
	uint64_t x2048 = 161160LLU;
	uint64_t t39 = 133030814916LLU;

	t39 = (x2045&((x2046<<x2047)/x2048));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2063 = 9;
	static volatile int8_t x2064 = INT8_MIN;
	volatile uint64_t t40 = 103200LLU;

	t40 = (x2061&((x2062<<x2063)/x2064));

	if (t40 != 9707936LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2081 = -1;
	int16_t x2083 = 0;
	static uint64_t x2084 = 895616LLU;
	volatile uint64_t t41 = 2065LLU;

	t41 = (x2081&((x2082<<x2083)/x2084));

	if (t41 != 4795LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2113 = INT16_MIN;
	uint16_t x2114 = 19644U;
	volatile int16_t x2115 = 10;
	volatile uint64_t x2116 = 43261946246LLU;
	volatile uint64_t t42 = 283908721600268435LLU;

	t42 = (x2113&((x2114<<x2115)/x2116));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2185 = INT8_MIN;
	uint32_t x2186 = 13U;
	volatile int8_t x2187 = 1;
	uint16_t x2188 = UINT16_MAX;

	t43 = (x2185&((x2186<<x2187)/x2188));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2197 = INT8_MIN;
	static uint16_t x2198 = 43U;
	int32_t x2199 = 0;
	volatile int16_t x2200 = -929;
	int32_t t44 = -92940402;

	t44 = (x2197&((x2198<<x2199)/x2200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2229 = -1LL;
	int32_t x2230 = 1455;
	uint16_t x2231 = 6U;
	int32_t x2232 = INT32_MIN;

	t45 = (x2229&((x2230<<x2231)/x2232));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2249 = INT32_MIN;
	uint64_t x2250 = 1888625LLU;
	uint8_t x2251 = 29U;
	volatile int8_t x2252 = -1;
	static volatile uint64_t t46 = 3755802795155LLU;

	t46 = (x2249&((x2250<<x2251)/x2252));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2293 = INT8_MIN;
	int8_t x2294 = 1;
	volatile uint32_t x2295 = 1U;
	uint32_t x2296 = 107155068U;
	uint32_t t47 = 5U;

	t47 = (x2293&((x2294<<x2295)/x2296));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2429 = INT32_MAX;
	volatile int16_t x2430 = 2;
	int8_t x2431 = 1;
	uint16_t x2432 = UINT16_MAX;
	static int32_t t48 = 2008733;

	t48 = (x2429&((x2430<<x2431)/x2432));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2469 = UINT64_MAX;
	int16_t x2471 = 15;
	volatile uint64_t t49 = 6LLU;

	t49 = (x2469&((x2470<<x2471)/x2472));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2485 = UINT8_MAX;
	uint32_t x2486 = 1814U;
	static volatile uint8_t x2487 = 2U;
	int64_t x2488 = -290142781LL;
	int64_t t50 = 28LL;

	t50 = (x2485&((x2486<<x2487)/x2488));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x2541 = 143778451U;
	int8_t x2542 = 34;
	uint32_t x2544 = UINT32_MAX;
	volatile uint32_t t51 = 621U;

	t51 = (x2541&((x2542<<x2543)/x2544));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2569 = -1LL;
	int32_t x2570 = 137;
	int32_t x2572 = -1;
	int64_t t52 = 339876629LL;

	t52 = (x2569&((x2570<<x2571)/x2572));

	if (t52 != -137LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x2957 = 571666545U;
	volatile int16_t x2958 = INT16_MAX;
	uint32_t x2959 = 1U;
	uint16_t x2960 = 28413U;
	volatile uint32_t t53 = 3625U;

	t53 = (x2957&((x2958<<x2959)/x2960));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2985 = INT64_MIN;
	uint16_t x2986 = UINT16_MAX;
	int8_t x2987 = 3;
	static int64_t t54 = INT64_MIN;

	t54 = (x2985&((x2986<<x2987)/x2988));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x3066 = UINT32_MAX;
	static volatile uint16_t x3067 = 18U;
	volatile int32_t x3068 = 11993505;
	int64_t t55 = 11777358753052282LL;

	t55 = (x3065&((x3066<<x3067)/x3068));

	if (t55 != 358LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3281 = -1;
	volatile uint8_t x3283 = 0U;
	static volatile int16_t x3284 = -1;
	static volatile int32_t t56 = -10943654;

	t56 = (x3281&((x3282<<x3283)/x3284));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3289 = 1573;
	volatile uint8_t x3290 = 15U;
	uint16_t x3291 = 3U;
	static int16_t x3292 = 3761;
	volatile int32_t t57 = -352694;

	t57 = (x3289&((x3290<<x3291)/x3292));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3305 = -134252661LL;
	int16_t x3307 = 0;
	static uint16_t x3308 = UINT16_MAX;
	volatile int64_t t58 = 2983LL;

	t58 = (x3305&((x3306<<x3307)/x3308));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3317 = INT64_MIN;
	int8_t x3318 = 1;
	uint8_t x3319 = 13U;
	static uint64_t x3320 = UINT64_MAX;

	t59 = (x3317&((x3318<<x3319)/x3320));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3401 = 10958534538LLU;
	int8_t x3402 = 2;
	int8_t x3403 = 0;
	static volatile int32_t x3404 = INT32_MAX;
	uint64_t t60 = 549291215633657LLU;

	t60 = (x3401&((x3402<<x3403)/x3404));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3450 = 31989U;
	static uint64_t t61 = 31564148514902LLU;

	t61 = (x3449&((x3450<<x3451)/x3452));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3635 = 6U;
	volatile int8_t x3636 = -17;

	t62 = (x3633&((x3634<<x3635)/x3636));

	if (t62 != 64) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3637 = 50U;
	uint8_t x3638 = UINT8_MAX;
	volatile int8_t x3639 = 2;
	uint32_t t63 = 60004U;

	t63 = (x3637&((x3638<<x3639)/x3640));

	if (t63 != 16U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3643 = 9;
	volatile int16_t x3644 = INT16_MIN;
	uint32_t t64 = 84622U;

	t64 = (x3641&((x3642<<x3643)/x3644));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3769 = 3;
	uint32_t x3770 = 40520U;
	uint8_t x3771 = 3U;
	uint32_t t65 = 6903U;

	t65 = (x3769&((x3770<<x3771)/x3772));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3820 = INT16_MIN;
	volatile uint32_t t66 = 56649U;

	t66 = (x3817&((x3818<<x3819)/x3820));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3833 = 18572011LLU;
	int32_t x3834 = 2;
	volatile int8_t x3835 = 14;
	int8_t x3836 = INT8_MAX;
	uint64_t t67 = 309LLU;

	t67 = (x3833&((x3834<<x3835)/x3836));

	if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3885 = INT16_MIN;
	static int8_t x3888 = INT8_MIN;
	volatile int32_t t68 = -53;

	t68 = (x3885&((x3886<<x3887)/x3888));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4013 = -1424LL;
	uint64_t x4014 = 121096684LLU;
	int64_t x4016 = INT64_MIN;

	t69 = (x4013&((x4014<<x4015)/x4016));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4086 = 0U;
	static int8_t x4087 = 1;
	volatile int64_t t70 = 1LL;

	t70 = (x4085&((x4086<<x4087)/x4088));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4226 = 4;
	int8_t x4227 = 0;
	int32_t x4228 = INT32_MIN;
	static int32_t t71 = 90;

	t71 = (x4225&((x4226<<x4227)/x4228));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x4329 = -1;
	static uint64_t x4330 = 15LLU;
	int32_t x4332 = INT32_MIN;
	static volatile uint64_t t72 = 4640164337314801LLU;

	t72 = (x4329&((x4330<<x4331)/x4332));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4373 = 7393122341195LL;
	int16_t x4375 = 0;
	int32_t x4376 = INT32_MIN;
	int64_t t73 = 23104LL;

	t73 = (x4373&((x4374<<x4375)/x4376));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4385 = -14128LL;
	static volatile uint16_t x4386 = 3019U;
	int64_t x4387 = 3LL;
	int16_t x4388 = INT16_MAX;
	int64_t t74 = 5844LL;

	t74 = (x4385&((x4386<<x4387)/x4388));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4417 = INT8_MIN;
	uint32_t x4418 = UINT32_MAX;
	volatile uint8_t x4419 = 2U;
	uint32_t t75 = 5U;

	t75 = (x4417&((x4418<<x4419)/x4420));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4541 = 2U;

	t76 = (x4541&((x4542<<x4543)/x4544));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4685 = -29;
	uint32_t x4686 = UINT32_MAX;
	uint8_t x4687 = 14U;
	int8_t x4688 = INT8_MIN;

	t77 = (x4685&((x4686<<x4687)/x4688));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4702 = 5342U;
	int64_t x4703 = 0LL;
	int8_t x4704 = -1;
	int32_t t78 = -3;

	t78 = (x4701&((x4702<<x4703)/x4704));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4869 = UINT64_MAX;
	volatile uint64_t x4870 = 96298159145405LLU;
	volatile uint64_t x4872 = UINT64_MAX;
	volatile uint64_t t79 = 24782430LLU;

	t79 = (x4869&((x4870<<x4871)/x4872));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4933 = -1;
	int8_t x4935 = 7;
	uint64_t x4936 = 7LLU;
	uint64_t t80 = 29864LLU;

	t80 = (x4933&((x4934<<x4935)/x4936));

	if (t80 != 50777857652078884LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x4962 = UINT16_MAX;
	int8_t x4963 = 0;
	uint32_t x4964 = 198U;

	t81 = (x4961&((x4962<<x4963)/x4964));

	if (t81 != 330LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4969 = 49571226654518LLU;
	static uint32_t x4970 = 7762U;
	volatile uint8_t x4971 = 12U;
	int64_t x4972 = 1982683394210LL;

	t82 = (x4969&((x4970<<x4971)/x4972));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5013 = 95U;
	static int32_t x5015 = 0;
	int16_t x5016 = INT16_MIN;

	t83 = (x5013&((x5014<<x5015)/x5016));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5030 = UINT8_MAX;
	int8_t x5032 = INT8_MIN;
	static volatile int64_t t84 = -3297211311153546846LL;

	t84 = (x5029&((x5030<<x5031)/x5032));

	if (t84 != 9223372036854710528LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x5081 = -1LL;
	int8_t x5082 = 0;
	int16_t x5083 = 4;
	int64_t t85 = -53778880915786846LL;

	t85 = (x5081&((x5082<<x5083)/x5084));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x5123 = 1;
	uint16_t x5124 = 31U;
	static int32_t t86 = -900124390;

	t86 = (x5121&((x5122<<x5123)/x5124));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5241 = 7930;
	volatile uint16_t x5242 = UINT16_MAX;
	volatile int8_t x5243 = 4;
	int32_t t87 = 84911042;

	t87 = (x5241&((x5242<<x5243)/x5244));

	if (t87 != 32) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x5245 = -5;
	static volatile uint64_t x5246 = UINT64_MAX;
	volatile int8_t x5247 = 6;
	int8_t x5248 = -2;
	volatile uint64_t t88 = 968967630012717473LLU;

	t88 = (x5245&((x5246<<x5247)/x5248));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5273 = 32257707LL;
	static volatile uint32_t x5274 = 1486170U;
	uint16_t x5275 = 7U;
	int64_t t89 = 445LL;

	t89 = (x5273&((x5274<<x5275)/x5276));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5277 = -11654LL;
	uint32_t x5278 = 4053322U;
	static uint8_t x5279 = 1U;
	volatile int64_t x5280 = INT64_MIN;
	int64_t t90 = -2498913338817746LL;

	t90 = (x5277&((x5278<<x5279)/x5280));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x5301 = -1;
	static volatile uint64_t x5302 = 3406638185LLU;
	int32_t x5303 = 13;

	t91 = (x5301&((x5302<<x5303)/x5304));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5317 = 1U;
	uint8_t x5318 = 111U;
	uint32_t x5319 = 4U;
	int64_t x5320 = INT64_MIN;
	volatile int64_t t92 = -196680737709413052LL;

	t92 = (x5317&((x5318<<x5319)/x5320));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x5337 = -1;
	volatile uint32_t x5338 = 69854U;
	int16_t x5339 = 25;
	uint32_t t93 = 3U;

	t93 = (x5337&((x5338<<x5339)/x5340));

	if (t93 != 3154116608U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5353 = -1;
	uint64_t x5354 = 83285284913882LLU;
	int64_t x5356 = INT64_MIN;

	t94 = (x5353&((x5354<<x5355)/x5356));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5369 = -1LL;
	uint8_t x5370 = 54U;
	int64_t x5371 = 0LL;
	int8_t x5372 = INT8_MIN;
	static volatile int64_t t95 = -1449806406295376141LL;

	t95 = (x5369&((x5370<<x5371)/x5372));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5381 = -9;
	int32_t x5383 = 3;
	volatile int32_t t96 = -171;

	t96 = (x5381&((x5382<<x5383)/x5384));

	if (t96 != -9) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x5417 = UINT32_MAX;
	volatile int16_t x5418 = 3;
	uint16_t x5419 = 1U;
	static int64_t x5420 = INT64_MAX;
	static volatile int64_t t97 = 1183275165LL;

	t97 = (x5417&((x5418<<x5419)/x5420));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5473 = -1LL;
	uint8_t x5474 = UINT8_MAX;
	static volatile uint8_t x5476 = UINT8_MAX;
	volatile int64_t t98 = 698638920664LL;

	t98 = (x5473&((x5474<<x5475)/x5476));

	if (t98 != 2LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5557 = 22677023U;
	volatile uint16_t x5558 = 137U;
	static uint16_t x5559 = 7U;
	volatile int8_t x5560 = INT8_MIN;
	static uint32_t t99 = 29585912U;

	t99 = (x5557&((x5558<<x5559)/x5560));

	if (t99 != 22677015U) { NG(); } else { ; }
	
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

