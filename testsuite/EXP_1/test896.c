#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = INT64_MAX;
volatile int8_t x23 = -56;
volatile int64_t t1 = -29273098082LL;
uint8_t x52 = 12U;
int32_t x60 = INT32_MIN;
volatile int8_t x117 = INT8_MAX;
int8_t x120 = INT8_MAX;
int64_t t7 = 353992036698599LL;
int16_t x232 = -1;
uint32_t t8 = UINT32_MAX;
int8_t x246 = 10;
int64_t x427 = -1LL;
int32_t x428 = INT32_MIN;
int8_t x533 = INT8_MAX;
volatile uint16_t x534 = 2U;
uint16_t x542 = 2U;
int16_t x555 = -1;
int8_t x562 = 0;
volatile uint64_t t15 = 1694514313008274652LLU;
int8_t x775 = INT8_MIN;
volatile int16_t x776 = -1;
uint16_t x977 = 481U;
uint32_t x1031 = 15098U;
uint16_t x1120 = 24U;
static volatile uint16_t x1189 = 14U;
int8_t x1192 = -7;
volatile int16_t x1208 = INT16_MAX;
int16_t x1253 = INT16_MAX;
static uint16_t x1254 = 0U;
volatile uint64_t x1509 = 7863809LLU;
uint32_t x1510 = 6U;
static uint32_t x1511 = UINT32_MAX;
int64_t x1564 = 6381397264LL;
uint16_t x1818 = 12U;
int32_t x1820 = -1;
static uint64_t x1885 = 10476273160514206LLU;
int8_t x2274 = 11;
volatile uint64_t x2287 = UINT64_MAX;
static uint8_t x2288 = 38U;
volatile uint64_t t35 = 13019849918077LLU;
int8_t x2667 = INT8_MAX;
static uint32_t x2923 = 25459U;
uint8_t x3027 = UINT8_MAX;
uint32_t t40 = 82U;
uint32_t x3113 = 0U;
uint16_t x3187 = 3U;
int8_t x3269 = 0;
uint64_t x3571 = 5360234051750266LLU;
uint32_t x3775 = 5U;
static uint32_t t48 = 901565849U;
int64_t x3806 = 1LL;
static volatile uint8_t x3838 = 23U;
int32_t t53 = -54;
static uint16_t x4107 = UINT16_MAX;
uint8_t x4110 = 1U;
int32_t x4131 = INT32_MIN;
volatile uint8_t x4261 = 13U;
uint64_t x4369 = 394400740014LLU;
int8_t x4481 = 7;
int64_t x4483 = INT64_MIN;
int32_t t63 = 3113221;
static volatile uint16_t x4815 = 616U;
uint64_t t64 = 197LLU;
int32_t x4915 = 80;
static int8_t x4957 = INT8_MAX;
static volatile int32_t x4974 = 0;
uint64_t t68 = 17425492306168LLU;
uint64_t t69 = 125LLU;
static int16_t x5196 = INT16_MIN;
uint32_t t70 = 505256U;
uint16_t x5310 = 4U;
int64_t x5319 = -1LL;
volatile uint8_t x5320 = UINT8_MAX;
uint16_t x5349 = 2677U;
uint8_t x5426 = 3U;
int32_t x5437 = INT32_MAX;
uint64_t x5461 = UINT64_MAX;
static volatile uint8_t x5462 = 2U;
volatile int64_t x5464 = INT64_MAX;
static volatile uint64_t t76 = 4953LLU;
static int16_t x5676 = -1;
uint16_t x5739 = 10U;
uint8_t x5821 = 52U;
static volatile int8_t x5823 = 6;
uint8_t x5826 = 0U;
uint64_t x6001 = 1682749128LLU;
uint16_t x6077 = 0U;
static uint32_t x6118 = 1U;
uint32_t x6201 = UINT32_MAX;
uint32_t x6208 = 3805U;
int16_t x6226 = 6;
int16_t x6242 = 3;
volatile int32_t t94 = 11627252;
int8_t x6270 = 15;
uint64_t t96 = 420071597481644LLU;
int16_t x6342 = 2;
uint32_t x6344 = 114655U;
static uint32_t x6385 = 5865U;
int16_t x6386 = 1;
int16_t x6387 = -1428;


void f0(void) {
	static int8_t x13 = 1;
	uint32_t x14 = 5U;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MAX;

	t0 = (((x13<<x14)/x15)|x16);

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x21 = 120U;
	volatile uint8_t x22 = 0U;
	int64_t x24 = -17255863026149LL;

	t1 = (((x21<<x22)/x23)|x24);

	if (t1 != -17255863026149LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x41 = 0;
	int16_t x42 = 24;
	volatile uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t2 = -232;

	t2 = (((x41<<x42)/x43)|x44);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x49 = 5360;
	uint16_t x50 = 1U;
	static uint32_t x51 = 10888733U;
	uint32_t t3 = 30U;

	t3 = (((x49<<x50)/x51)|x52);

	if (t3 != 12U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x57 = INT8_MAX;
	int8_t x58 = 7;
	uint32_t x59 = UINT32_MAX;
	static volatile uint32_t t4 = 983824U;

	t4 = (((x57<<x58)/x59)|x60);

	if (t4 != 2147483648U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x118 = 3U;
	int32_t x119 = INT32_MAX;
	int32_t t5 = 106;

	t5 = (((x117<<x118)/x119)|x120);

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x165 = 16U;
	int16_t x166 = 0;
	uint64_t x167 = 90443LLU;
	int64_t x168 = -1LL;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (((x165<<x166)/x167)|x168);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x181 = 22U;
	int16_t x182 = 1;
	int64_t x183 = INT64_MAX;
	volatile int16_t x184 = INT16_MIN;

	t7 = (((x181<<x182)/x183)|x184);

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x229 = UINT32_MAX;
	uint8_t x230 = 3U;
	int16_t x231 = 3;

	t8 = (((x229<<x230)/x231)|x232);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x245 = UINT64_MAX;
	int8_t x247 = INT8_MIN;
	int16_t x248 = -1;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (((x245<<x246)/x247)|x248);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x425 = 3U;
	uint8_t x426 = 1U;
	int64_t t10 = 13983434336617LL;

	t10 = (((x425<<x426)/x427)|x428);

	if (t10 != -6LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x513 = 92522678U;
	uint16_t x514 = 4U;
	uint16_t x515 = 36U;
	int8_t x516 = -1;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (((x513<<x514)/x515)|x516);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x535 = INT16_MAX;
	uint64_t x536 = 79LLU;
	volatile uint64_t t12 = 2070172283LLU;

	t12 = (((x533<<x534)/x535)|x536);

	if (t12 != 79LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x541 = 10724U;
	volatile uint16_t x543 = UINT16_MAX;
	static int8_t x544 = -1;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (((x541<<x542)/x543)|x544);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x553 = 1;
	int8_t x554 = 1;
	int16_t x556 = 43;
	int32_t t14 = 1;

	t14 = (((x553<<x554)/x555)|x556);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x561 = 0;
	uint64_t x563 = 87155010LLU;
	uint32_t x564 = UINT32_MAX;

	t15 = (((x561<<x562)/x563)|x564);

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x565 = 28410LLU;
	uint8_t x566 = 1U;
	int64_t x567 = INT64_MIN;
	volatile uint64_t x568 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (((x565<<x566)/x567)|x568);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x617 = 31793LL;
	int16_t x618 = 4;
	static uint16_t x619 = 86U;
	volatile int16_t x620 = -2154;
	int64_t t17 = 1LL;

	t17 = (((x617<<x618)/x619)|x620);

	if (t17 != -2146LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x773 = INT8_MAX;
	static int8_t x774 = 0;
	static int32_t t18 = -121031;

	t18 = (((x773<<x774)/x775)|x776);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x921 = UINT64_MAX;
	int8_t x922 = 31;
	uint16_t x923 = 1U;
	uint8_t x924 = UINT8_MAX;
	volatile uint64_t t19 = 6LLU;

	t19 = (((x921<<x922)/x923)|x924);

	if (t19 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x978 = 1U;
	int64_t x979 = -170711713501LL;
	int32_t x980 = INT32_MIN;
	volatile int64_t t20 = 32890645013421LL;

	t20 = (((x977<<x978)/x979)|x980);

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x981 = 2U;
	volatile int8_t x982 = 0;
	int8_t x983 = -1;
	uint8_t x984 = 14U;
	int32_t t21 = 0;

	t21 = (((x981<<x982)/x983)|x984);

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x989 = 0;
	int16_t x990 = 27;
	uint64_t x991 = UINT64_MAX;
	int32_t x992 = INT32_MIN;
	volatile uint64_t t22 = 9665LLU;

	t22 = (((x989<<x990)/x991)|x992);

	if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1029 = 2497U;
	int32_t x1030 = 15;
	int64_t x1032 = INT64_MIN;
	volatile int64_t t23 = -176LL;

	t23 = (((x1029<<x1030)/x1031)|x1032);

	if (t23 != -9223372036854770389LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1117 = 2U;
	uint8_t x1118 = 8U;
	static volatile uint16_t x1119 = 7001U;
	int32_t t24 = 1;

	t24 = (((x1117<<x1118)/x1119)|x1120);

	if (t24 != 24) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1190 = 0U;
	int16_t x1191 = INT16_MIN;
	int32_t t25 = 21;

	t25 = (((x1189<<x1190)/x1191)|x1192);

	if (t25 != -7) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1205 = UINT8_MAX;
	uint8_t x1206 = 2U;
	static uint64_t x1207 = 26210312334580384LLU;
	uint64_t t26 = 4472LLU;

	t26 = (((x1205<<x1206)/x1207)|x1208);

	if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1255 = UINT64_MAX;
	int32_t x1256 = -1;
	uint64_t t27 = UINT64_MAX;

	t27 = (((x1253<<x1254)/x1255)|x1256);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1512 = INT16_MAX;
	static uint64_t t28 = 9871617492LLU;

	t28 = (((x1509<<x1510)/x1511)|x1512);

	if (t28 != 32767LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1533 = 32269U;
	volatile int8_t x1534 = 13;
	int64_t x1535 = -1LL;
	int32_t x1536 = -38654303;
	int64_t t29 = 12158249LL;

	t29 = (((x1533<<x1534)/x1535)|x1536);

	if (t29 != -37851487LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x1561 = 0;
	int64_t x1562 = 1LL;
	uint32_t x1563 = 411637U;
	volatile int64_t t30 = 177LL;

	t30 = (((x1561<<x1562)/x1563)|x1564);

	if (t30 != 6381397264LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1817 = 1937U;
	int64_t x1819 = INT64_MAX;
	static int64_t t31 = 1757462822956LL;

	t31 = (((x1817<<x1818)/x1819)|x1820);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1886 = 61U;
	static int16_t x1887 = 3294;
	int16_t x1888 = 29;
	uint64_t t32 = 2192488LLU;

	t32 = (((x1885<<x1886)/x1887)|x1888);

	if (t32 != 4200078341008575LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2161 = UINT16_MAX;
	int8_t x2162 = 3;
	static uint16_t x2163 = 6837U;
	static int32_t x2164 = 25580921;
	int32_t t33 = -415454950;

	t33 = (((x2161<<x2162)/x2163)|x2164);

	if (t33 != 25580925) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2273 = 0;
	static int8_t x2275 = INT8_MIN;
	static int32_t x2276 = 22304;
	volatile int32_t t34 = 424201;

	t34 = (((x2273<<x2274)/x2275)|x2276);

	if (t34 != 22304) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2285 = 0;
	static int8_t x2286 = 1;

	t35 = (((x2285<<x2286)/x2287)|x2288);

	if (t35 != 38LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2665 = 2U;
	int8_t x2666 = 1;
	int32_t x2668 = INT32_MIN;
	static volatile int32_t t36 = INT32_MIN;

	t36 = (((x2665<<x2666)/x2667)|x2668);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x2849 = 10;
	volatile uint8_t x2850 = 11U;
	static int8_t x2851 = INT8_MIN;
	int32_t x2852 = -150841420;
	static volatile int32_t t37 = 981825;

	t37 = (((x2849<<x2850)/x2851)|x2852);

	if (t37 != -12) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2921 = 905937738LLU;
	uint8_t x2922 = 2U;
	uint16_t x2924 = UINT16_MAX;
	uint64_t t38 = 21887LLU;

	t38 = (((x2921<<x2922)/x2923)|x2924);

	if (t38 != 196607LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x3013 = 46;
	volatile int16_t x3014 = 0;
	static int64_t x3015 = 174043923625LL;
	int8_t x3016 = -6;
	volatile int64_t t39 = 1071080418522266593LL;

	t39 = (((x3013<<x3014)/x3015)|x3016);

	if (t39 != -6LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x3025 = 971682U;
	int16_t x3026 = 5;
	uint8_t x3028 = 7U;

	t40 = (((x3025<<x3026)/x3027)|x3028);

	if (t40 != 121943U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x3061 = INT32_MAX;
	uint8_t x3062 = 0U;
	uint64_t x3063 = 1276878LLU;
	volatile uint32_t x3064 = UINT32_MAX;
	uint64_t t41 = 572LLU;

	t41 = (((x3061<<x3062)/x3063)|x3064);

	if (t41 != 4294967295LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x3114 = 31LLU;
	uint64_t x3115 = 4LLU;
	int32_t x3116 = -1264487;
	uint64_t t42 = 70101880930396LLU;

	t42 = (((x3113<<x3114)/x3115)|x3116);

	if (t42 != 18446744073708287129LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x3185 = UINT16_MAX;
	int32_t x3186 = 0;
	int64_t x3188 = INT64_MAX;
	int64_t t43 = INT64_MAX;

	t43 = (((x3185<<x3186)/x3187)|x3188);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3249 = 0U;
	int16_t x3250 = 0;
	int32_t x3251 = INT32_MIN;
	int32_t x3252 = 5637;
	int32_t t44 = -7124012;

	t44 = (((x3249<<x3250)/x3251)|x3252);

	if (t44 != 5637) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3270 = 10U;
	int8_t x3271 = -60;
	static int8_t x3272 = INT8_MIN;
	volatile int32_t t45 = 2968093;

	t45 = (((x3269<<x3270)/x3271)|x3272);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x3569 = 6U;
	volatile int8_t x3570 = 0;
	uint16_t x3572 = 3U;
	uint64_t t46 = 210LLU;

	t46 = (((x3569<<x3570)/x3571)|x3572);

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x3693 = 8U;
	static int32_t x3694 = 0;
	static volatile int64_t x3695 = -1LL;
	volatile uint8_t x3696 = 96U;
	volatile int64_t t47 = -179642LL;

	t47 = (((x3693<<x3694)/x3695)|x3696);

	if (t47 != -8LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3773 = 2U;
	uint8_t x3774 = 6U;
	static int8_t x3776 = INT8_MIN;

	t48 = (((x3773<<x3774)/x3775)|x3776);

	if (t48 != 4294967193U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3805 = 84764154641LLU;
	int16_t x3807 = -10;
	int64_t x3808 = -1LL;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (((x3805<<x3806)/x3807)|x3808);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x3813 = 1577697U;
	int32_t x3814 = 3;
	uint64_t x3815 = 47213940433643857LLU;
	volatile int16_t x3816 = INT16_MIN;
	volatile uint64_t t50 = 123688452408002999LLU;

	t50 = (((x3813<<x3814)/x3815)|x3816);

	if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3837 = UINT64_MAX;
	static volatile int16_t x3839 = -1;
	static volatile uint64_t x3840 = UINT64_MAX;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x3837<<x3838)/x3839)|x3840);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3901 = UINT8_MAX;
	static int8_t x3902 = 0;
	volatile int8_t x3903 = 1;
	int8_t x3904 = INT8_MIN;
	int32_t t52 = 756866034;

	t52 = (((x3901<<x3902)/x3903)|x3904);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3929 = UINT16_MAX;
	uint8_t x3930 = 0U;
	uint8_t x3931 = 31U;
	static int8_t x3932 = 12;

	t53 = (((x3929<<x3930)/x3931)|x3932);

	if (t53 != 2126) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4105 = UINT8_MAX;
	static volatile uint16_t x4106 = 7U;
	volatile uint16_t x4108 = 3U;
	volatile int32_t t54 = -4;

	t54 = (((x4105<<x4106)/x4107)|x4108);

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x4109 = UINT8_MAX;
	static int16_t x4111 = 9631;
	int32_t x4112 = 19046;
	static volatile int32_t t55 = 140857611;

	t55 = (((x4109<<x4110)/x4111)|x4112);

	if (t55 != 19046) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x4129 = 0;
	uint8_t x4130 = 1U;
	uint16_t x4132 = 101U;
	int32_t t56 = 10;

	t56 = (((x4129<<x4130)/x4131)|x4132);

	if (t56 != 101) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4262 = 22U;
	static volatile int32_t x4263 = INT32_MIN;
	int8_t x4264 = INT8_MAX;
	int32_t t57 = 6824;

	t57 = (((x4261<<x4262)/x4263)|x4264);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4341 = UINT32_MAX;
	uint16_t x4342 = 12U;
	static int8_t x4343 = INT8_MAX;
	int16_t x4344 = INT16_MIN;
	volatile uint32_t t58 = 284267312U;

	t58 = (((x4341<<x4342)/x4343)|x4344);

	if (t58 != 4294936559U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x4370 = 1;
	int32_t x4371 = INT32_MAX;
	int32_t x4372 = 4416;
	volatile uint64_t t59 = 90151891627587LLU;

	t59 = (((x4369<<x4370)/x4371)|x4372);

	if (t59 != 4463LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x4482 = 4U;
	int8_t x4484 = INT8_MIN;
	int64_t t60 = -857471948243LL;

	t60 = (((x4481<<x4482)/x4483)|x4484);

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4537 = INT16_MAX;
	volatile uint8_t x4538 = 8U;
	int64_t x4539 = 545389LL;
	int8_t x4540 = 49;
	int64_t t61 = -30522848660LL;

	t61 = (((x4537<<x4538)/x4539)|x4540);

	if (t61 != 63LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x4565 = 1;
	uint8_t x4566 = 0U;
	int8_t x4567 = -1;
	int64_t x4568 = -1LL;
	static volatile int64_t t62 = 2535766995685047LL;

	t62 = (((x4565<<x4566)/x4567)|x4568);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4641 = 221U;
	volatile uint8_t x4642 = 1U;
	int8_t x4643 = 4;
	static uint8_t x4644 = 0U;

	t63 = (((x4641<<x4642)/x4643)|x4644);

	if (t63 != 110) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4813 = 281472517158805813LLU;
	int8_t x4814 = 11;
	int16_t x4816 = INT16_MAX;

	t64 = (((x4813<<x4814)/x4815)|x4816);

	if (t64 != 7478326065332223LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4913 = 1U;
	volatile uint32_t x4914 = 0U;
	int32_t x4916 = INT32_MAX;
	int32_t t65 = INT32_MAX;

	t65 = (((x4913<<x4914)/x4915)|x4916);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4958 = 6U;
	int16_t x4959 = INT16_MAX;
	int8_t x4960 = INT8_MIN;
	volatile int32_t t66 = -27820381;

	t66 = (((x4957<<x4958)/x4959)|x4960);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4973 = INT16_MAX;
	uint64_t x4975 = 2259591106504073LLU;
	volatile int16_t x4976 = 1677;
	volatile uint64_t t67 = 3813833673245585150LLU;

	t67 = (((x4973<<x4974)/x4975)|x4976);

	if (t67 != 1677LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x5021 = 58700LLU;
	volatile uint16_t x5022 = 4U;
	static int16_t x5023 = 384;
	static uint8_t x5024 = 21U;

	t68 = (((x5021<<x5022)/x5023)|x5024);

	if (t68 != 2461LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x5173 = 4907385448949048LLU;
	uint8_t x5174 = 11U;
	volatile int64_t x5175 = 7LL;
	uint64_t x5176 = 108856LLU;

	t69 = (((x5173<<x5174)/x5175)|x5176);

	if (t69 != 1435760771349740409LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x5193 = UINT32_MAX;
	uint16_t x5194 = 1U;
	static uint16_t x5195 = UINT16_MAX;

	t70 = (((x5193<<x5194)/x5195)|x5196);

	if (t70 != 4294934528U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5309 = 89U;
	int16_t x5311 = INT16_MAX;
	int8_t x5312 = INT8_MIN;
	volatile uint32_t t71 = 16260U;

	t71 = (((x5309<<x5310)/x5311)|x5312);

	if (t71 != 4294967168U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x5317 = 1760326LLU;
	uint16_t x5318 = 33U;
	volatile uint64_t t72 = 47185967434LLU;

	t72 = (((x5317<<x5318)/x5319)|x5320);

	if (t72 != 255LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5350 = 0LLU;
	uint16_t x5351 = 2U;
	volatile int8_t x5352 = INT8_MIN;
	int32_t t73 = -1326;

	t73 = (((x5349<<x5350)/x5351)|x5352);

	if (t73 != -70) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5425 = UINT32_MAX;
	volatile uint64_t x5427 = 6507859685679651898LLU;
	static int32_t x5428 = 474;
	uint64_t t74 = 2043006LLU;

	t74 = (((x5425<<x5426)/x5427)|x5428);

	if (t74 != 474LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5438 = 0;
	int64_t x5439 = 8498446532061LL;
	int16_t x5440 = INT16_MAX;
	volatile int64_t t75 = -3687709616794158LL;

	t75 = (((x5437<<x5438)/x5439)|x5440);

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5463 = 3566U;

	t76 = (((x5461<<x5462)/x5463)|x5464);

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5497 = UINT8_MAX;
	uint16_t x5498 = 0U;
	static int32_t x5499 = -1;
	volatile uint64_t x5500 = 4126787640421215642LLU;
	volatile uint64_t t77 = 61195677536035LLU;

	t77 = (((x5497<<x5498)/x5499)|x5500);

	if (t77 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5673 = 1266311862346015LLU;
	int8_t x5674 = 10;
	int64_t x5675 = -142072248739164581LL;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (((x5673<<x5674)/x5675)|x5676);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5721 = 864U;
	int8_t x5722 = 0;
	static int8_t x5723 = 17;
	static uint16_t x5724 = 3U;
	volatile uint32_t t79 = 31U;

	t79 = (((x5721<<x5722)/x5723)|x5724);

	if (t79 != 51U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x5737 = INT8_MAX;
	volatile uint8_t x5738 = 3U;
	static uint8_t x5740 = 0U;
	volatile int32_t t80 = -20;

	t80 = (((x5737<<x5738)/x5739)|x5740);

	if (t80 != 101) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5822 = 1U;
	static int64_t x5824 = INT64_MIN;
	int64_t t81 = -2836933342LL;

	t81 = (((x5821<<x5822)/x5823)|x5824);

	if (t81 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x5825 = UINT16_MAX;
	int64_t x5827 = INT64_MIN;
	int32_t x5828 = INT32_MIN;
	int64_t t82 = -22774442450043LL;

	t82 = (((x5825<<x5826)/x5827)|x5828);

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5849 = 2023033584161756395LLU;
	int32_t x5850 = 0;
	int8_t x5851 = INT8_MIN;
	int16_t x5852 = -1;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (((x5849<<x5850)/x5851)|x5852);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5889 = UINT32_MAX;
	int8_t x5890 = 4;
	int32_t x5891 = INT32_MIN;
	volatile int16_t x5892 = INT16_MIN;
	volatile uint32_t t84 = 1U;

	t84 = (((x5889<<x5890)/x5891)|x5892);

	if (t84 != 4294934529U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x6002 = 1U;
	int32_t x6003 = INT32_MIN;
	uint16_t x6004 = UINT16_MAX;
	volatile uint64_t t85 = 32LLU;

	t85 = (((x6001<<x6002)/x6003)|x6004);

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x6033 = 11220418U;
	uint64_t x6034 = 13LLU;
	static int16_t x6035 = 2;
	volatile int32_t x6036 = INT32_MIN;
	uint32_t t86 = 5046U;

	t86 = (((x6033<<x6034)/x6035)|x6036);

	if (t86 != 3009159168U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6078 = 16;
	volatile int16_t x6079 = INT16_MIN;
	int32_t x6080 = INT32_MIN;
	static int32_t t87 = INT32_MIN;

	t87 = (((x6077<<x6078)/x6079)|x6080);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6117 = UINT8_MAX;
	int32_t x6119 = 264;
	int8_t x6120 = INT8_MIN;
	int32_t t88 = -648675660;

	t88 = (((x6117<<x6118)/x6119)|x6120);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x6193 = UINT16_MAX;
	uint16_t x6194 = 4U;
	static int8_t x6195 = -2;
	int8_t x6196 = INT8_MAX;
	static int32_t t89 = 170175;

	t89 = (((x6193<<x6194)/x6195)|x6196);

	if (t89 != -524161) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x6202 = 0U;
	int64_t x6203 = INT64_MIN;
	int16_t x6204 = 1;
	static volatile int64_t t90 = 1097LL;

	t90 = (((x6201<<x6202)/x6203)|x6204);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x6205 = 7435508533351133LLU;
	uint8_t x6206 = 3U;
	int64_t x6207 = -1LL;
	uint64_t t91 = 3900LLU;

	t91 = (((x6205<<x6206)/x6207)|x6208);

	if (t91 != 3805LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x6213 = 72953;
	static uint8_t x6214 = 11U;
	int8_t x6215 = -1;
	int16_t x6216 = -1840;
	int32_t t92 = -496164;

	t92 = (((x6213<<x6214)/x6215)|x6216);

	if (t92 != -1840) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6225 = 2392;
	int32_t x6227 = -1;
	static int16_t x6228 = -1;
	int32_t t93 = 63194097;

	t93 = (((x6225<<x6226)/x6227)|x6228);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6241 = UINT16_MAX;
	int32_t x6243 = -1;
	uint16_t x6244 = 489U;

	t94 = (((x6241<<x6242)/x6243)|x6244);

	if (t94 != -523799) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6269 = 291144030U;
	uint64_t x6271 = 2145581276525768LLU;
	int8_t x6272 = INT8_MAX;
	uint64_t t95 = 270504633620LLU;

	t95 = (((x6269<<x6270)/x6271)|x6272);

	if (t95 != 127LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6337 = UINT64_MAX;
	uint8_t x6338 = 1U;
	int64_t x6339 = -7261LL;
	static uint16_t x6340 = UINT16_MAX;

	t96 = (((x6337<<x6338)/x6339)|x6340);

	if (t96 != 65535LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6341 = 448409886323372LL;
	int32_t x6343 = -1028632558;
	volatile int64_t t97 = -174844009436565664LL;

	t97 = (((x6341<<x6342)/x6343)|x6344);

	if (t97 != -1703937LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6388 = INT16_MIN;
	uint32_t t98 = 0U;

	t98 = (((x6385<<x6386)/x6387)|x6388);

	if (t98 != 4294934528U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x6397 = 163352LLU;
	volatile int8_t x6398 = 0;
	int64_t x6399 = -2123644638514136LL;
	static int32_t x6400 = -1;
	static uint64_t t99 = UINT64_MAX;

	t99 = (((x6397<<x6398)/x6399)|x6400);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

