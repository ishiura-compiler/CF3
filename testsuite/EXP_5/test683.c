#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x211 = 110U;
uint64_t x212 = 0LLU;
static int32_t t1 = -28;
int64_t x712 = 2LL;
int32_t t3 = 208656331;
int16_t x950 = 568;
static uint32_t t6 = 266830U;
int8_t x1163 = INT8_MAX;
volatile int8_t x1248 = 0;
int32_t t8 = -3920551;
static uint32_t x1260 = 0U;
uint64_t x1761 = 437984809649586393LLU;
static int16_t x1763 = 337;
volatile int8_t x1835 = INT8_MAX;
static int64_t x1914 = 9LL;
uint8_t x1916 = 5U;
volatile int64_t x2065 = INT64_MAX;
static volatile int64_t t16 = -509LL;
volatile int64_t x2107 = INT64_MIN;
volatile uint16_t x2141 = UINT16_MAX;
uint64_t x2277 = 1970260136689254767LLU;
int16_t x2280 = -5;
int64_t x2295 = -1LL;
uint8_t x2296 = 6U;
int64_t x2330 = INT64_MIN;
static volatile int32_t t21 = 49400669;
uint32_t x2736 = 3U;
volatile int16_t x2784 = 5;
int16_t x2786 = INT16_MIN;
volatile int32_t x3037 = INT32_MAX;
volatile int32_t x3219 = INT32_MIN;
int64_t x3400 = -1LL;
uint64_t x3446 = 105465964328535206LLU;
int16_t x3575 = -68;
static uint16_t x3585 = UINT16_MAX;
static uint16_t x3586 = 282U;
int8_t x3587 = -1;
uint32_t x3669 = UINT32_MAX;
int16_t x3671 = INT16_MAX;
static int8_t x3906 = -1;
volatile int32_t x3907 = INT32_MIN;
volatile uint8_t x3909 = UINT8_MAX;
static int16_t x3910 = 3;
int32_t t36 = 19466;
int32_t t37 = 65;
static uint16_t x4056 = 0U;
int32_t t39 = 41340012;
uint32_t x4197 = 639050921U;
int64_t x4239 = -29283713490LL;
int16_t x4240 = -1;
volatile int32_t t41 = -2254505;
volatile int32_t t42 = -25;
volatile int64_t x4454 = 21LL;
static uint8_t x4456 = 3U;
volatile uint8_t x4537 = 9U;
int32_t x4539 = -1;
int32_t t44 = -1317804;
int8_t x4549 = 0;
static int8_t x4552 = 0;
uint32_t x4745 = UINT32_MAX;
volatile int8_t x4747 = INT8_MIN;
uint32_t t48 = 2U;
int32_t x4919 = -1;
int16_t x4986 = -1;
int8_t x5036 = 0;
volatile uint64_t x5073 = 356694902846LLU;
uint16_t x5074 = 12721U;
int16_t x5075 = 73;
uint16_t x5402 = 3U;
static int64_t x5822 = -25934757176172LL;
volatile int8_t x5888 = 1;
int32_t t61 = 144182153;
volatile int16_t x5930 = INT16_MIN;
int8_t x5946 = 5;
volatile int16_t x5947 = INT16_MAX;
int8_t x6092 = 3;
volatile int64_t t67 = 312357698941LL;
volatile int8_t x6317 = 0;
int8_t x6383 = INT8_MIN;
volatile int32_t t70 = INT32_MAX;
volatile int8_t x6403 = INT8_MIN;
static uint32_t x6544 = UINT32_MAX;
volatile int32_t t72 = -2;
volatile uint32_t x6627 = UINT32_MAX;
int64_t t73 = -960254LL;
uint32_t x6771 = UINT32_MAX;
int16_t x6772 = -243;
volatile int8_t x7032 = -4;
volatile uint32_t x7088 = 2U;
int32_t t78 = -115666803;
uint32_t x7265 = 8289629U;
int16_t x7439 = 131;
static int16_t x7463 = -1;
int32_t x7521 = 12504051;
static int8_t x7523 = -1;
volatile uint16_t x7824 = 12U;
volatile int32_t t85 = 2105;
int16_t x8235 = 275;
static uint8_t x8236 = 2U;
int16_t x8245 = INT16_MAX;
int8_t x8353 = 49;


void f0(void) {
	int32_t x209 = INT32_MAX;
	uint64_t x210 = UINT64_MAX;
	int32_t t0 = -19248567;

	t0 = (x209>>((x210%x211)+x212));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x281 = 122199;
	int8_t x282 = 2;
	static int32_t x283 = INT32_MAX;
	volatile uint64_t x284 = 12LLU;

	t1 = (x281>>((x282%x283)+x284));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x513 = INT64_MAX;
	uint16_t x514 = 1U;
	static int32_t x515 = INT32_MIN;
	int64_t x516 = -1LL;
	volatile int64_t t2 = INT64_MAX;

	t2 = (x513>>((x514%x515)+x516));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x709 = INT16_MAX;
	static int16_t x710 = -1;
	int32_t x711 = INT32_MIN;

	t3 = (x709>>((x710%x711)+x712));

	if (t3 != 16383) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x949 = 2;
	static int32_t x951 = -1;
	static volatile int8_t x952 = 0;
	int32_t t4 = -26997611;

	t4 = (x949>>((x950%x951)+x952));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x1033 = INT16_MAX;
	uint16_t x1034 = 5U;
	uint16_t x1035 = UINT16_MAX;
	int8_t x1036 = -1;
	static int32_t t5 = -3260;

	t5 = (x1033>>((x1034%x1035)+x1036));

	if (t5 != 2047) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x1093 = UINT32_MAX;
	volatile uint8_t x1094 = 29U;
	uint16_t x1095 = 1U;
	int16_t x1096 = 1;

	t6 = (x1093>>((x1094%x1095)+x1096));

	if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x1161 = 3;
	uint32_t x1162 = UINT32_MAX;
	int8_t x1164 = -2;
	volatile int32_t t7 = 7779;

	t7 = (x1161>>((x1162%x1163)+x1164));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x1245 = 36U;
	int64_t x1246 = 61620786811LL;
	int8_t x1247 = -1;

	t8 = (x1245>>((x1246%x1247)+x1248));

	if (t8 != 36) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x1257 = INT8_MAX;
	int16_t x1258 = -56;
	static volatile int16_t x1259 = -1;
	int32_t t9 = -5926802;

	t9 = (x1257>>((x1258%x1259)+x1260));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x1369 = 2130548U;
	uint8_t x1370 = 1U;
	int64_t x1371 = 1291813LL;
	int16_t x1372 = 3;
	static volatile uint32_t t10 = 93933294U;

	t10 = (x1369>>((x1370%x1371)+x1372));

	if (t10 != 133159U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x1589 = 32061322U;
	int16_t x1590 = 15598;
	int64_t x1591 = -6LL;
	uint16_t x1592 = 0U;
	uint32_t t11 = 1070772U;

	t11 = (x1589>>((x1590%x1591)+x1592));

	if (t11 != 2003832U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1762 = -1;
	uint8_t x1764 = 18U;
	volatile uint64_t t12 = 35747542308LLU;

	t12 = (x1761>>((x1762%x1763)+x1764));

	if (t12 != 3341558911511LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1833 = 30LLU;
	uint32_t x1834 = UINT32_MAX;
	static volatile int16_t x1836 = -1;
	volatile uint64_t t13 = 11061733834672LLU;

	t13 = (x1833>>((x1834%x1835)+x1836));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x1865 = UINT16_MAX;
	static uint8_t x1866 = UINT8_MAX;
	int8_t x1867 = 1;
	uint8_t x1868 = 14U;
	int32_t t14 = 342;

	t14 = (x1865>>((x1866%x1867)+x1868));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1913 = 1U;
	int8_t x1915 = 20;
	volatile int32_t t15 = 62;

	t15 = (x1913>>((x1914%x1915)+x1916));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x2066 = UINT64_MAX;
	volatile int16_t x2067 = INT16_MAX;
	int8_t x2068 = -3;

	t16 = (x2065>>((x2066%x2067)+x2068));

	if (t16 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x2105 = INT32_MAX;
	static int32_t x2106 = -1;
	uint8_t x2108 = 1U;
	static int32_t t17 = INT32_MAX;

	t17 = (x2105>>((x2106%x2107)+x2108));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x2142 = 123947831U;
	int64_t x2143 = -1LL;
	volatile int8_t x2144 = 0;
	volatile int32_t t18 = 2628;

	t18 = (x2141>>((x2142%x2143)+x2144));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x2278 = 508517209163658912LLU;
	int16_t x2279 = 46;
	static uint64_t t19 = 571074LLU;

	t19 = (x2277>>((x2278%x2279)+x2280));

	if (t19 != 985130068344627383LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x2293 = 1U;
	uint32_t x2294 = 7301075U;
	uint32_t t20 = 19033U;

	t20 = (x2293>>((x2294%x2295)+x2296));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x2329 = INT16_MAX;
	int16_t x2331 = -1;
	uint8_t x2332 = 0U;

	t21 = (x2329>>((x2330%x2331)+x2332));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x2733 = 14430921894728LLU;
	volatile uint64_t x2734 = 679820624LLU;
	static uint16_t x2735 = 14U;
	volatile uint64_t t22 = 211804742LLU;

	t22 = (x2733>>((x2734%x2735)+x2736));

	if (t22 != 1803865236841LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x2781 = 239362119U;
	int16_t x2782 = -1;
	int8_t x2783 = -1;
	uint32_t t23 = 494U;

	t23 = (x2781>>((x2782%x2783)+x2784));

	if (t23 != 7480066U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x2785 = 6U;
	int8_t x2787 = -1;
	uint8_t x2788 = 2U;
	int32_t t24 = 25508596;

	t24 = (x2785>>((x2786%x2787)+x2788));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x2813 = 0U;
	int32_t x2814 = INT32_MAX;
	static int16_t x2815 = -1;
	uint16_t x2816 = 2U;
	volatile int32_t t25 = 2676;

	t25 = (x2813>>((x2814%x2815)+x2816));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x3038 = 5;
	int8_t x3039 = -1;
	static uint8_t x3040 = 2U;
	volatile int32_t t26 = -78717531;

	t26 = (x3037>>((x3038%x3039)+x3040));

	if (t26 != 536870911) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x3217 = 11297;
	int32_t x3218 = INT32_MIN;
	volatile int32_t x3220 = 0;
	volatile int32_t t27 = -27682119;

	t27 = (x3217>>((x3218%x3219)+x3220));

	if (t27 != 11297) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x3225 = UINT8_MAX;
	int16_t x3226 = -1;
	int32_t x3227 = 6;
	int8_t x3228 = 2;
	volatile int32_t t28 = 2;

	t28 = (x3225>>((x3226%x3227)+x3228));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x3397 = UINT16_MAX;
	static uint32_t x3398 = UINT32_MAX;
	static volatile int32_t x3399 = -4;
	volatile int32_t t29 = 38;

	t29 = (x3397>>((x3398%x3399)+x3400));

	if (t29 != 16383) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x3445 = 411LLU;
	static int8_t x3447 = INT8_MAX;
	volatile int32_t x3448 = -1;
	static volatile uint64_t t30 = 65075165701LLU;

	t30 = (x3445>>((x3446%x3447)+x3448));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x3573 = 72299102858237LL;
	static volatile int32_t x3574 = 3359897;
	int16_t x3576 = -1;
	int64_t t31 = 923525948456707768LL;

	t31 = (x3573>>((x3574%x3575)+x3576));

	if (t31 != 1103196759LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x3588 = 29U;
	int32_t t32 = 53963;

	t32 = (x3585>>((x3586%x3587)+x3588));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x3670 = 4U;
	int16_t x3672 = -1;
	volatile uint32_t t33 = 119722073U;

	t33 = (x3669>>((x3670%x3671)+x3672));

	if (t33 != 536870911U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x3793 = 14U;
	uint64_t x3794 = UINT64_MAX;
	int16_t x3795 = INT16_MAX;
	static int8_t x3796 = -1;
	int32_t t34 = 44303;

	t34 = (x3793>>((x3794%x3795)+x3796));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x3905 = 10002161605LL;
	uint16_t x3908 = 51U;
	int64_t t35 = -1983517578456LL;

	t35 = (x3905>>((x3906%x3907)+x3908));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x3911 = 35973007547798276LL;
	int8_t x3912 = -3;

	t36 = (x3909>>((x3910%x3911)+x3912));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x3921 = INT8_MAX;
	int16_t x3922 = INT16_MIN;
	int64_t x3923 = -1LL;
	uint8_t x3924 = 5U;

	t37 = (x3921>>((x3922%x3923)+x3924));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x4053 = UINT32_MAX;
	static volatile int8_t x4054 = INT8_MIN;
	int8_t x4055 = INT8_MIN;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = (x4053>>((x4054%x4055)+x4056));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x4085 = 1182U;
	int8_t x4086 = 0;
	int64_t x4087 = 53608565076LL;
	uint8_t x4088 = 20U;

	t39 = (x4085>>((x4086%x4087)+x4088));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x4198 = -1;
	static uint8_t x4199 = 1U;
	uint8_t x4200 = 1U;
	volatile uint32_t t40 = 232U;

	t40 = (x4197>>((x4198%x4199)+x4200));

	if (t40 != 319525460U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x4237 = INT32_MAX;
	static volatile uint64_t x4238 = 7LLU;

	t41 = (x4237>>((x4238%x4239)+x4240));

	if (t41 != 33554431) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x4245 = 2667;
	uint64_t x4246 = 1LLU;
	int8_t x4247 = INT8_MIN;
	uint8_t x4248 = 7U;

	t42 = (x4245>>((x4246%x4247)+x4248));

	if (t42 != 10) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x4453 = 166925;
	int32_t x4455 = INT32_MAX;
	int32_t t43 = -19174;

	t43 = (x4453>>((x4454%x4455)+x4456));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x4538 = -1LL;
	uint16_t x4540 = 3U;

	t44 = (x4537>>((x4538%x4539)+x4540));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x4550 = -30;
	uint8_t x4551 = 2U;
	int32_t t45 = -15;

	t45 = (x4549>>((x4550%x4551)+x4552));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x4717 = 0;
	uint8_t x4718 = 18U;
	int16_t x4719 = INT16_MAX;
	static uint64_t x4720 = UINT64_MAX;
	static volatile int32_t t46 = -1;

	t46 = (x4717>>((x4718%x4719)+x4720));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x4729 = 9089876LLU;
	uint16_t x4730 = 11U;
	int16_t x4731 = INT16_MIN;
	static int16_t x4732 = -5;
	volatile uint64_t t47 = 382LLU;

	t47 = (x4729>>((x4730%x4731)+x4732));

	if (t47 != 142029LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x4746 = -1;
	uint8_t x4748 = 3U;

	t48 = (x4745>>((x4746%x4747)+x4748));

	if (t48 != 1073741823U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x4913 = 10U;
	volatile uint8_t x4914 = 2U;
	int64_t x4915 = 5LL;
	uint16_t x4916 = 2U;
	static int32_t t49 = 2;

	t49 = (x4913>>((x4914%x4915)+x4916));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x4917 = 0U;
	uint8_t x4918 = UINT8_MAX;
	int8_t x4920 = 0;
	int32_t t50 = 1;

	t50 = (x4917>>((x4918%x4919)+x4920));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x4985 = 461098864650438LLU;
	static int32_t x4987 = INT32_MIN;
	volatile int8_t x4988 = 14;
	static uint64_t t51 = 56648797333559LLU;

	t51 = (x4985>>((x4986%x4987)+x4988));

	if (t51 != 56286482501LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x5033 = UINT64_MAX;
	volatile int16_t x5034 = 0;
	int32_t x5035 = INT32_MIN;
	uint64_t t52 = UINT64_MAX;

	t52 = (x5033>>((x5034%x5035)+x5036));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x5053 = 13406640LLU;
	uint64_t x5054 = 31807924LLU;
	static uint8_t x5055 = 6U;
	int64_t x5056 = -1LL;
	uint64_t t53 = 6594609831LLU;

	t53 = (x5053>>((x5054%x5055)+x5056));

	if (t53 != 1675830LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x5076 = 1;
	static volatile uint64_t t54 = 16233LLU;

	t54 = (x5073>>((x5074%x5075)+x5076));

	if (t54 != 340170LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x5393 = 0U;
	static uint8_t x5394 = 3U;
	volatile uint64_t x5395 = 1013109890LLU;
	int8_t x5396 = -1;
	int32_t t55 = -6421;

	t55 = (x5393>>((x5394%x5395)+x5396));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x5401 = 21303626;
	volatile int32_t x5403 = 243892;
	volatile int8_t x5404 = 3;
	volatile int32_t t56 = 67880;

	t56 = (x5401>>((x5402%x5403)+x5404));

	if (t56 != 332869) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x5621 = 42187LLU;
	int16_t x5622 = INT16_MIN;
	static volatile int16_t x5623 = -1;
	int8_t x5624 = 13;
	volatile uint64_t t57 = 3828539330979350LLU;

	t57 = (x5621>>((x5622%x5623)+x5624));

	if (t57 != 5LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x5725 = 15U;
	static volatile uint16_t x5726 = 1U;
	uint64_t x5727 = UINT64_MAX;
	volatile uint8_t x5728 = 0U;
	volatile int32_t t58 = -6358406;

	t58 = (x5725>>((x5726%x5727)+x5728));

	if (t58 != 7) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x5821 = 1;
	volatile int8_t x5823 = -4;
	volatile uint16_t x5824 = 6U;
	int32_t t59 = -21;

	t59 = (x5821>>((x5822%x5823)+x5824));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x5877 = 100U;
	uint32_t x5878 = 5U;
	int64_t x5879 = 13317577823983LL;
	int16_t x5880 = -1;
	volatile int32_t t60 = -121223809;

	t60 = (x5877>>((x5878%x5879)+x5880));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x5885 = 14;
	volatile int32_t x5886 = INT32_MAX;
	volatile int32_t x5887 = -5;

	t61 = (x5885>>((x5886%x5887)+x5888));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x5929 = 290U;
	int64_t x5931 = -1LL;
	uint8_t x5932 = 4U;
	int32_t t62 = 5999;

	t62 = (x5929>>((x5930%x5931)+x5932));

	if (t62 != 18) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x5945 = 5656238U;
	static int8_t x5948 = 0;
	static volatile uint32_t t63 = 614337U;

	t63 = (x5945>>((x5946%x5947)+x5948));

	if (t63 != 176757U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x6089 = 57945386924464LL;
	int64_t x6090 = INT64_MIN;
	volatile int8_t x6091 = INT8_MAX;
	volatile int64_t t64 = 112054319950853798LL;

	t64 = (x6089>>((x6090%x6091)+x6092));

	if (t64 != 14486346731116LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x6101 = 111790367U;
	volatile uint16_t x6102 = 1U;
	uint32_t x6103 = UINT32_MAX;
	int64_t x6104 = 0LL;
	uint32_t t65 = 562260212U;

	t65 = (x6101>>((x6102%x6103)+x6104));

	if (t65 != 55895183U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x6173 = 31;
	uint8_t x6174 = 0U;
	uint16_t x6175 = 27275U;
	uint16_t x6176 = 1U;
	volatile int32_t t66 = -528;

	t66 = (x6173>>((x6174%x6175)+x6176));

	if (t66 != 15) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x6281 = INT64_MAX;
	static uint32_t x6282 = 266685U;
	uint8_t x6283 = 3U;
	static uint16_t x6284 = 1U;

	t67 = (x6281>>((x6282%x6283)+x6284));

	if (t67 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x6318 = 0U;
	static int64_t x6319 = -1LL;
	int8_t x6320 = 1;
	static int32_t t68 = 21399;

	t68 = (x6317>>((x6318%x6319)+x6320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x6349 = UINT16_MAX;
	int8_t x6350 = 6;
	int64_t x6351 = -2389LL;
	volatile int8_t x6352 = -1;
	volatile int32_t t69 = -3;

	t69 = (x6349>>((x6350%x6351)+x6352));

	if (t69 != 2047) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x6381 = INT32_MAX;
	int32_t x6382 = -1;
	uint8_t x6384 = 1U;

	t70 = (x6381>>((x6382%x6383)+x6384));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x6401 = 15071672968LLU;
	int32_t x6402 = 4264;
	static volatile uint8_t x6404 = 14U;
	uint64_t t71 = 2078794258521619LLU;

	t71 = (x6401>>((x6402%x6403)+x6404));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x6541 = 158;
	int16_t x6542 = 1;
	int8_t x6543 = INT8_MIN;

	t72 = (x6541>>((x6542%x6543)+x6544));

	if (t72 != 158) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x6625 = INT64_MAX;
	uint64_t x6626 = 13LLU;
	static uint64_t x6628 = UINT64_MAX;

	t73 = (x6625>>((x6626%x6627)+x6628));

	if (t73 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x6749 = INT8_MAX;
	uint16_t x6750 = 4U;
	int64_t x6751 = -131578846481545LL;
	uint64_t x6752 = UINT64_MAX;
	int32_t t74 = 25919;

	t74 = (x6749>>((x6750%x6751)+x6752));

	if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x6769 = 11748U;
	uint8_t x6770 = UINT8_MAX;
	int32_t t75 = 121055;

	t75 = (x6769>>((x6770%x6771)+x6772));

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x7029 = INT64_MAX;
	int16_t x7030 = INT16_MAX;
	volatile int16_t x7031 = 90;
	volatile int64_t t76 = -439377012668837919LL;

	t76 = (x7029>>((x7030%x7031)+x7032));

	if (t76 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x7041 = 6687U;
	static int32_t x7042 = INT32_MAX;
	int8_t x7043 = INT8_MAX;
	int8_t x7044 = 1;
	uint32_t t77 = 8041U;

	t77 = (x7041>>((x7042%x7043)+x7044));

	if (t77 != 26U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x7085 = 11U;
	static int16_t x7086 = -227;
	volatile int16_t x7087 = 3;

	t78 = (x7085>>((x7086%x7087)+x7088));

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x7145 = UINT64_MAX;
	uint64_t x7146 = UINT64_MAX;
	int16_t x7147 = -53;
	uint64_t x7148 = UINT64_MAX;
	static uint64_t t79 = 379280826LLU;

	t79 = (x7145>>((x7146%x7147)+x7148));

	if (t79 != 8191LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x7266 = UINT8_MAX;
	volatile uint8_t x7267 = UINT8_MAX;
	uint8_t x7268 = 2U;
	volatile uint32_t t80 = 379U;

	t80 = (x7265>>((x7266%x7267)+x7268));

	if (t80 != 2072407U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x7437 = 4U;
	int32_t x7438 = -1;
	uint8_t x7440 = 25U;
	volatile int32_t t81 = -1;

	t81 = (x7437>>((x7438%x7439)+x7440));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x7461 = INT16_MAX;
	volatile uint16_t x7462 = 606U;
	uint8_t x7464 = 1U;
	volatile int32_t t82 = 37;

	t82 = (x7461>>((x7462%x7463)+x7464));

	if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x7522 = INT32_MIN;
	int16_t x7524 = 0;
	static int32_t t83 = -250777401;

	t83 = (x7521>>((x7522%x7523)+x7524));

	if (t83 != 12504051) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x7821 = 27U;
	int64_t x7822 = 268282064352LL;
	int16_t x7823 = -9;
	volatile int32_t t84 = -155;

	t84 = (x7821>>((x7822%x7823)+x7824));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x7825 = 84U;
	static int8_t x7826 = INT8_MAX;
	int64_t x7827 = 1LL;
	int16_t x7828 = 9;

	t85 = (x7825>>((x7826%x7827)+x7828));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x7881 = INT64_MAX;
	volatile uint32_t x7882 = 13U;
	uint32_t x7883 = 618169799U;
	int8_t x7884 = -1;
	static volatile int64_t t86 = -256256179315625121LL;

	t86 = (x7881>>((x7882%x7883)+x7884));

	if (t86 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x7885 = INT32_MAX;
	uint8_t x7886 = 6U;
	volatile int16_t x7887 = -1066;
	static int16_t x7888 = -1;
	volatile int32_t t87 = 0;

	t87 = (x7885>>((x7886%x7887)+x7888));

	if (t87 != 67108863) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x7941 = INT8_MAX;
	static uint16_t x7942 = 1U;
	int8_t x7943 = INT8_MIN;
	int8_t x7944 = 0;
	volatile int32_t t88 = 29945277;

	t88 = (x7941>>((x7942%x7943)+x7944));

	if (t88 != 63) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x8001 = INT32_MAX;
	uint16_t x8002 = 315U;
	static int8_t x8003 = -1;
	uint64_t x8004 = 8LLU;
	static volatile int32_t t89 = 3266898;

	t89 = (x8001>>((x8002%x8003)+x8004));

	if (t89 != 8388607) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x8065 = 78381LLU;
	uint8_t x8066 = 6U;
	int64_t x8067 = INT64_MIN;
	volatile uint16_t x8068 = 12U;
	static volatile uint64_t t90 = 1303315604237669352LLU;

	t90 = (x8065>>((x8066%x8067)+x8068));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x8069 = 277168310148935LL;
	int32_t x8070 = INT32_MAX;
	volatile int32_t x8071 = -1;
	uint8_t x8072 = 13U;
	volatile int64_t t91 = 83549943099469016LL;

	t91 = (x8069>>((x8070%x8071)+x8072));

	if (t91 != 33834022234LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x8109 = INT16_MAX;
	volatile uint64_t x8110 = UINT64_MAX;
	uint32_t x8111 = UINT32_MAX;
	int16_t x8112 = 6;
	volatile int32_t t92 = -218;

	t92 = (x8109>>((x8110%x8111)+x8112));

	if (t92 != 511) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x8221 = 502U;
	uint64_t x8222 = UINT64_MAX;
	int8_t x8223 = INT8_MAX;
	int16_t x8224 = -1;
	int32_t t93 = 4239474;

	t93 = (x8221>>((x8222%x8223)+x8224));

	if (t93 != 502) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x8233 = INT64_MAX;
	static uint8_t x8234 = 5U;
	int64_t t94 = 56336877397681921LL;

	t94 = (x8233>>((x8234%x8235)+x8236));

	if (t94 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x8237 = UINT64_MAX;
	uint8_t x8238 = 7U;
	static int16_t x8239 = INT16_MAX;
	volatile uint16_t x8240 = 3U;
	volatile uint64_t t95 = 396072LLU;

	t95 = (x8237>>((x8238%x8239)+x8240));

	if (t95 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x8246 = INT64_MIN;
	int8_t x8247 = INT8_MAX;
	uint64_t x8248 = 13LLU;
	static volatile int32_t t96 = 88;

	t96 = (x8245>>((x8246%x8247)+x8248));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x8349 = 0U;
	int8_t x8350 = -1;
	int32_t x8351 = INT32_MIN;
	volatile int8_t x8352 = 1;
	volatile int32_t t97 = 1;

	t97 = (x8349>>((x8350%x8351)+x8352));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x8354 = -1;
	volatile uint16_t x8355 = 8058U;
	static int8_t x8356 = 13;
	volatile int32_t t98 = 8;

	t98 = (x8353>>((x8354%x8355)+x8356));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x8449 = 127010001511354752LLU;
	static int32_t x8450 = INT32_MAX;
	int8_t x8451 = INT8_MAX;
	static int8_t x8452 = -1;
	volatile uint64_t t99 = 6052984730253588016LLU;

	t99 = (x8449>>((x8450%x8451)+x8452));

	if (t99 != 1984531273614918LLU) { NG(); } else { ; }
	
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

