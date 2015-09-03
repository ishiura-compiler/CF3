#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x47 = -6;
volatile uint8_t x130 = 1U;
static uint64_t x131 = UINT64_MAX;
static uint64_t t1 = 3854052789668280155LLU;
volatile int16_t x169 = INT16_MAX;
int8_t x413 = INT8_MAX;
uint8_t x512 = 29U;
volatile int8_t x653 = -42;
static uint8_t x656 = 0U;
volatile int32_t t9 = -58;
int32_t x798 = -105550;
volatile int8_t x1038 = 52;
static uint8_t x1396 = 3U;
static uint64_t t13 = 2449498718590LLU;
uint8_t x1670 = 2U;
volatile int32_t t15 = 1;
static volatile int8_t x1763 = 3;
volatile int64_t x1998 = -937LL;
uint32_t x2044 = 5U;
volatile uint16_t x2234 = 1583U;
uint32_t x2235 = 0U;
uint32_t x2269 = UINT32_MAX;
uint8_t x2291 = UINT8_MAX;
uint8_t x2292 = 1U;
volatile uint8_t x2352 = 22U;
volatile uint8_t x2796 = 59U;
volatile int8_t x2905 = -1;
uint32_t x3053 = 24130U;
static uint16_t x3054 = 2U;
int8_t x3113 = 1;
volatile int32_t t33 = 36952633;
int8_t x3198 = INT8_MAX;
static int8_t x3212 = 21;
static uint32_t x3530 = 3603118U;
uint32_t x3574 = 28711U;
static int16_t x3576 = 3;
uint32_t t39 = 20015536U;
volatile int8_t x3633 = -1;
static uint16_t x3719 = 2140U;
volatile int32_t x3733 = -3263815;
uint64_t x3735 = UINT64_MAX;
uint16_t x3763 = 61U;
static volatile uint64_t t44 = 20216585832LLU;
uint8_t x4004 = 0U;
volatile int16_t x4109 = INT16_MIN;
uint8_t x4112 = 7U;
uint64_t t46 = 8020LLU;
int64_t x4294 = -1LL;
uint32_t x4586 = UINT32_MAX;
uint32_t x5181 = 241U;
int8_t x5182 = -1;
static volatile uint64_t x5227 = 229766138LLU;
uint32_t x5332 = 30U;
int64_t t57 = -8483735007073LL;
int8_t x5460 = 1;
int32_t x5551 = 215;
int32_t t60 = 56276048;
static uint64_t x5706 = 1LLU;
static uint64_t t63 = 4152805050048LLU;
volatile int16_t x5781 = -1;
uint8_t x5944 = 3U;
uint32_t t66 = 117055U;
int32_t x5992 = 0;
int8_t x6109 = INT8_MIN;
volatile uint16_t x6199 = 0U;
uint64_t t71 = 342945298897892LLU;
static uint32_t x6302 = UINT32_MAX;
int32_t x6303 = INT32_MIN;
int8_t x6304 = 5;
uint32_t t74 = 257U;
static uint64_t x6327 = 466025741042LLU;
uint8_t x6328 = 12U;
static uint64_t x6354 = 32913526855244738LLU;
int8_t x6355 = INT8_MIN;
volatile int64_t t78 = 10805111593880LL;
uint64_t x6405 = UINT64_MAX;
uint64_t t79 = 12511678987LLU;
uint8_t x6442 = UINT8_MAX;
uint64_t x6443 = UINT64_MAX;
uint8_t x6466 = 38U;
volatile uint64_t t83 = 2540796LLU;
static int16_t x6585 = 4;
int16_t x6588 = 3;
uint16_t x6590 = 546U;
int16_t x6854 = 133;
uint8_t x6949 = 4U;
static uint16_t x6951 = 3U;
int16_t x6952 = 52;
uint64_t t88 = 317140LLU;
volatile uint32_t x7158 = UINT32_MAX;
uint8_t x7216 = 6U;
int16_t x7376 = 23;
uint32_t x7451 = 1512870618U;
static int8_t x7452 = 1;
int8_t x7509 = -1;
int32_t t94 = -2;
static volatile uint32_t x7531 = 21689U;
volatile int64_t x7606 = INT64_MAX;
static int16_t x7730 = 0;
int16_t x7761 = INT16_MAX;


void f0(void) {
	static uint64_t x45 = 995LLU;
	uint64_t x46 = 423LLU;
	static uint16_t x48 = 2U;
	uint64_t t0 = 1177581054569788LLU;

	t0 = (x45*((x46|x47)>>x48));

	if (t0 != 13835058055282162717LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x129 = 881354703U;
	int16_t x132 = 4;

	t1 = (x129*((x130|x131)>>x132));

	if (t1 != 17293822568221349937LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x137 = INT16_MIN;
	volatile uint16_t x138 = UINT16_MAX;
	static uint16_t x139 = UINT16_MAX;
	int8_t x140 = 1;
	static volatile int32_t t2 = -1006592360;

	t2 = (x137*((x138|x139)>>x140));

	if (t2 != -1073709056) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x170 = 8U;
	int8_t x171 = 0;
	static int8_t x172 = 0;
	int32_t t3 = 197394795;

	t3 = (x169*((x170|x171)>>x172));

	if (t3 != 262136) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MIN;
	uint64_t x243 = 130100955706165LLU;
	uint8_t x244 = 0U;
	volatile uint64_t t4 = 70393039814803345LLU;

	t4 = (x241*((x242|x243)>>x244));

	if (t4 != 18446744073709532491LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x333 = 7132231LL;
	int8_t x334 = INT8_MAX;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = 0;
	int64_t t5 = 1778088340083035LL;

	t5 = (x333*((x334|x335)>>x336));

	if (t5 != 30632698885385145LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x414 = INT8_MAX;
	uint8_t x415 = 7U;
	int8_t x416 = 0;
	volatile int32_t t6 = 839;

	t6 = (x413*((x414|x415)>>x416));

	if (t6 != 16129) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x509 = INT16_MIN;
	uint8_t x510 = 9U;
	uint64_t x511 = UINT64_MAX;
	uint64_t t7 = 226241251LLU;

	t7 = (x509*((x510|x511)>>x512));

	if (t7 != 18445618173802741760LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x645 = 0U;
	volatile int8_t x646 = INT8_MIN;
	uint64_t x647 = UINT64_MAX;
	int16_t x648 = 35;
	volatile uint64_t t8 = 3270700LLU;

	t8 = (x645*((x646|x647)>>x648));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x654 = 12;
	static uint8_t x655 = 6U;

	t9 = (x653*((x654|x655)>>x656));

	if (t9 != -588) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x797 = -1;
	static uint32_t x799 = 4062U;
	uint8_t x800 = 5U;
	volatile uint32_t t10 = 933535U;

	t10 = (x797*((x798|x799)>>x800));

	if (t10 != 4160752769U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x1037 = 3U;
	static int8_t x1039 = INT8_MAX;
	int8_t x1040 = 3;
	volatile uint32_t t11 = 42839U;

	t11 = (x1037*((x1038|x1039)>>x1040));

	if (t11 != 45U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1365 = 0;
	uint16_t x1366 = 8823U;
	static volatile uint16_t x1367 = 7290U;
	uint16_t x1368 = 1U;
	static volatile int32_t t12 = -9;

	t12 = (x1365*((x1366|x1367)>>x1368));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x1393 = UINT16_MAX;
	uint64_t x1394 = UINT64_MAX;
	volatile uint32_t x1395 = 350U;

	t13 = (x1393*((x1394|x1395)>>x1396));

	if (t13 != 16140901064495792129LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1401 = UINT8_MAX;
	int32_t x1402 = INT32_MIN;
	uint32_t x1403 = 285U;
	uint8_t x1404 = 3U;
	static uint32_t t14 = 893634U;

	t14 = (x1401*((x1402|x1403)>>x1404));

	if (t14 != 4026540765U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1669 = INT32_MIN;
	static uint8_t x1671 = 39U;
	uint8_t x1672 = 13U;

	t15 = (x1669*((x1670|x1671)>>x1672));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1761 = INT64_MIN;
	static uint64_t x1762 = 13915LLU;
	uint16_t x1764 = 3U;
	volatile uint64_t t16 = 1825638469404LLU;

	t16 = (x1761*((x1762|x1763)>>x1764));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1769 = UINT64_MAX;
	volatile int16_t x1770 = INT16_MAX;
	int64_t x1771 = 98LL;
	uint8_t x1772 = 20U;
	uint64_t t17 = 916651051789597LLU;

	t17 = (x1769*((x1770|x1771)>>x1772));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1921 = -10528;
	static int16_t x1922 = INT16_MAX;
	int64_t x1923 = 93484561955921LL;
	int32_t x1924 = 15;
	volatile int64_t t18 = 3LL;

	t18 = (x1921*((x1922|x1923)>>x1924));

	if (t18 != -30035567258816LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1965 = -1;
	uint32_t x1966 = 48U;
	volatile int8_t x1967 = -1;
	int32_t x1968 = 1;
	volatile uint32_t t19 = 90983U;

	t19 = (x1965*((x1966|x1967)>>x1968));

	if (t19 != 2147483649U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1973 = INT64_MIN;
	uint8_t x1974 = UINT8_MAX;
	static uint64_t x1975 = 7030278823450965LLU;
	uint8_t x1976 = 3U;
	uint64_t t20 = 116163739653342LLU;

	t20 = (x1973*((x1974|x1975)>>x1976));

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1997 = 1814U;
	static uint64_t x1999 = UINT64_MAX;
	static int8_t x2000 = 32;
	volatile uint64_t t21 = 62766583019461027LLU;

	t21 = (x1997*((x1998|x1999)>>x2000));

	if (t21 != 7791070673130LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x2041 = INT32_MAX;
	uint64_t x2042 = 22878LLU;
	volatile int16_t x2043 = INT16_MIN;
	static volatile uint64_t t22 = 557LLU;

	t22 = (x2041*((x2042|x2043)>>x2044));

	if (t22 != 17870282655686197558LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x2137 = 1U;
	uint8_t x2138 = 2U;
	int64_t x2139 = INT64_MAX;
	int8_t x2140 = 0;
	static int64_t t23 = INT64_MAX;

	t23 = (x2137*((x2138|x2139)>>x2140));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x2233 = 1443U;
	int32_t x2236 = 5;
	uint32_t t24 = 2060736582U;

	t24 = (x2233*((x2234|x2235)>>x2236));

	if (t24 != 70707U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x2249 = UINT8_MAX;
	uint32_t x2250 = UINT32_MAX;
	uint8_t x2251 = 2U;
	uint8_t x2252 = 1U;
	volatile uint32_t t25 = 19U;

	t25 = (x2249*((x2250|x2251)>>x2252));

	if (t25 != 2147483393U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x2270 = 227765664LL;
	volatile uint8_t x2271 = UINT8_MAX;
	int16_t x2272 = 3;
	static int64_t t26 = 1729423081186LL;

	t26 = (x2269*((x2270|x2271)>>x2272));

	if (t26 != 122280806970135105LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x2289 = UINT64_MAX;
	uint32_t x2290 = 14585346U;
	volatile uint64_t t27 = 4008460LLU;

	t27 = (x2289*((x2290|x2291)>>x2292));

	if (t27 != 18446744073702258817LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2349 = INT32_MIN;
	static volatile uint32_t x2350 = 7U;
	static uint16_t x2351 = UINT16_MAX;
	static volatile uint32_t t28 = 1790U;

	t28 = (x2349*((x2350|x2351)>>x2352));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x2625 = UINT32_MAX;
	uint32_t x2626 = UINT32_MAX;
	volatile int16_t x2627 = 9734;
	uint8_t x2628 = 6U;
	uint32_t t29 = 235817095U;

	t29 = (x2625*((x2626|x2627)>>x2628));

	if (t29 != 4227858433U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2793 = UINT64_MAX;
	uint64_t x2794 = 663305760677673LLU;
	static int64_t x2795 = INT64_MIN;
	uint64_t t30 = 393566184883805651LLU;

	t30 = (x2793*((x2794|x2795)>>x2796));

	if (t30 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2906 = UINT32_MAX;
	uint64_t x2907 = 3545LLU;
	volatile int8_t x2908 = 55;
	uint64_t t31 = 499918413343852731LLU;

	t31 = (x2905*((x2906|x2907)>>x2908));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x3055 = INT32_MAX;
	volatile int16_t x3056 = 21;
	uint32_t t32 = 38800U;

	t32 = (x3053*((x3054|x3055)>>x3056));

	if (t32 != 24684990U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x3114 = 8U;
	int8_t x3115 = INT8_MAX;
	int16_t x3116 = 3;

	t33 = (x3113*((x3114|x3115)>>x3116));

	if (t33 != 15) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x3197 = 3;
	uint8_t x3199 = UINT8_MAX;
	uint8_t x3200 = 1U;
	volatile int32_t t34 = -193911;

	t34 = (x3197*((x3198|x3199)>>x3200));

	if (t34 != 381) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x3209 = 465850U;
	int32_t x3210 = INT32_MIN;
	uint32_t x3211 = UINT32_MAX;
	static volatile uint32_t t35 = 209824U;

	t35 = (x3209*((x3210|x3211)>>x3212));

	if (t35 != 953594950U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x3241 = INT16_MIN;
	uint8_t x3242 = UINT8_MAX;
	uint64_t x3243 = 3986573LLU;
	int8_t x3244 = 3;
	uint64_t t36 = 2340538757LLU;

	t36 = (x3241*((x3242|x3243)>>x3244));

	if (t36 != 18446744057380110336LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x3405 = INT32_MAX;
	uint32_t x3406 = 3176U;
	int32_t x3407 = INT32_MIN;
	uint8_t x3408 = 1U;
	volatile uint32_t t37 = 3U;

	t37 = (x3405*((x3406|x3407)>>x3408));

	if (t37 != 3221223884U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x3529 = UINT32_MAX;
	int16_t x3531 = -1;
	int32_t x3532 = 1;
	static uint32_t t38 = 449088U;

	t38 = (x3529*((x3530|x3531)>>x3532));

	if (t38 != 2147483649U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3573 = INT32_MIN;
	int16_t x3575 = -1;

	t39 = (x3573*((x3574|x3575)>>x3576));

	if (t39 != 2147483648U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x3634 = 15206001;
	int64_t x3635 = INT64_MAX;
	uint8_t x3636 = 25U;
	static int64_t t40 = -251670964358LL;

	t40 = (x3633*((x3634|x3635)>>x3636));

	if (t40 != -274877906943LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x3717 = 3U;
	volatile int16_t x3718 = INT16_MAX;
	int64_t x3720 = 0LL;
	static int32_t t41 = -40835;

	t41 = (x3717*((x3718|x3719)>>x3720));

	if (t41 != 98301) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x3734 = UINT8_MAX;
	uint16_t x3736 = 8U;
	uint64_t t42 = 66687LLU;

	t42 = (x3733*((x3734|x3735)>>x3736));

	if (t42 != 13330654897019931975LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3761 = 165LLU;
	volatile uint64_t x3762 = 102049473LLU;
	static volatile uint8_t x3764 = 21U;
	volatile uint64_t t43 = 3717414962712095LLU;

	t43 = (x3761*((x3762|x3763)>>x3764));

	if (t43 != 7920LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3829 = 59U;
	int64_t x3830 = INT64_MAX;
	uint64_t x3831 = UINT64_MAX;
	uint8_t x3832 = 1U;

	t44 = (x3829*((x3830|x3831)>>x3832));

	if (t44 != 9223372036854775749LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x4001 = INT16_MAX;
	int8_t x4002 = 0;
	uint16_t x4003 = 0U;
	int32_t t45 = 5608430;

	t45 = (x4001*((x4002|x4003)>>x4004));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x4110 = UINT64_MAX;
	static int32_t x4111 = INT32_MAX;

	t46 = (x4109*((x4110|x4111)>>x4112));

	if (t46 != 32768LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x4293 = 47584369487LLU;
	uint64_t x4295 = 15912206LLU;
	uint16_t x4296 = 5U;
	uint64_t t47 = 1426667LLU;

	t47 = (x4293*((x4294|x4295)>>x4296));

	if (t47 != 8646911236966982833LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x4413 = INT64_MIN;
	uint64_t x4414 = 1363551040525677LLU;
	volatile uint16_t x4415 = 1970U;
	volatile int64_t x4416 = 14LL;
	uint64_t t48 = 3477115LLU;

	t48 = (x4413*((x4414|x4415)>>x4416));

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x4509 = INT64_MAX;
	uint32_t x4510 = 1349361U;
	int64_t x4511 = 1LL;
	uint64_t x4512 = 31LLU;
	int64_t t49 = 0LL;

	t49 = (x4509*((x4510|x4511)>>x4512));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x4585 = INT32_MIN;
	uint32_t x4587 = 7U;
	int8_t x4588 = 0;
	uint32_t t50 = 1030U;

	t50 = (x4585*((x4586|x4587)>>x4588));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x4917 = -1474939774810848LL;
	int32_t x4918 = INT32_MIN;
	uint64_t x4919 = 3606LLU;
	static int64_t x4920 = 1LL;
	volatile uint64_t t51 = 68428LLU;

	t51 = (x4917*((x4918|x4919)>>x4920));

	if (t51 != 11992563022777210976LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x5029 = INT32_MIN;
	static uint64_t x5030 = 265883937053897LLU;
	int64_t x5031 = INT64_MIN;
	uint8_t x5032 = 0U;
	volatile uint64_t t52 = 73LLU;

	t52 = (x5029*((x5030|x5031)>>x5032));

	if (t52 != 662224426648993792LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x5121 = -41048LL;
	uint64_t x5122 = 423895173186191LLU;
	int32_t x5123 = -22781;
	int32_t x5124 = 0;
	uint64_t t53 = 199068536761LLU;

	t53 = (x5121*((x5122|x5123)>>x5124));

	if (t53 != 256837336LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x5183 = 55393508097LLU;
	static int32_t x5184 = 0;
	uint64_t t54 = 443935060839759158LLU;

	t54 = (x5181*((x5182|x5183)>>x5184));

	if (t54 != 18446744073709551375LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x5225 = -5;
	uint64_t x5226 = 5210509196781047LLU;
	uint8_t x5228 = 6U;
	uint64_t t55 = 167383719549LLU;

	t55 = (x5225*((x5226|x5227)>>x5228));

	if (t55 != 18446337002667821221LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x5329 = 370U;
	uint64_t x5330 = 61518272202654LLU;
	uint16_t x5331 = 24147U;
	volatile uint64_t t56 = 5058LLU;

	t56 = (x5329*((x5330|x5331)>>x5332));

	if (t56 != 21198410LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x5341 = -1LL;
	int32_t x5342 = 1798;
	int8_t x5343 = INT8_MAX;
	int16_t x5344 = 0;

	t57 = (x5341*((x5342|x5343)>>x5344));

	if (t57 != -1919LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x5457 = UINT8_MAX;
	uint8_t x5458 = UINT8_MAX;
	static uint8_t x5459 = UINT8_MAX;
	int32_t t58 = -891;

	t58 = (x5457*((x5458|x5459)>>x5460));

	if (t58 != 32385) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x5541 = 27U;
	volatile int64_t x5542 = 0LL;
	uint8_t x5543 = 5U;
	static int8_t x5544 = 2;
	int64_t t59 = 6894706LL;

	t59 = (x5541*((x5542|x5543)>>x5544));

	if (t59 != 27LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x5549 = INT8_MIN;
	int8_t x5550 = INT8_MAX;
	uint64_t x5552 = 0LLU;

	t60 = (x5549*((x5550|x5551)>>x5552));

	if (t60 != -32640) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x5629 = -1;
	int16_t x5630 = 60;
	static uint8_t x5631 = 120U;
	int16_t x5632 = 15;
	volatile int32_t t61 = 133134838;

	t61 = (x5629*((x5630|x5631)>>x5632));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x5701 = 159919629LLU;
	uint8_t x5702 = 54U;
	int32_t x5703 = 1835;
	volatile uint8_t x5704 = 0U;
	volatile uint64_t t62 = 0LLU;

	t62 = (x5701*((x5702|x5703)>>x5704));

	if (t62 != 296650911795LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x5705 = 77127508920643993LL;
	static int8_t x5707 = INT8_MIN;
	uint16_t x5708 = 12U;

	t63 = (x5705*((x5706|x5707)>>x5708));

	if (t63 != 1764844738673888871LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x5782 = 1U;
	int8_t x5783 = INT8_MIN;
	uint64_t x5784 = 2LLU;
	volatile uint32_t t64 = 12U;

	t64 = (x5781*((x5782|x5783)>>x5784));

	if (t64 != 3221225504U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x5789 = INT8_MIN;
	static int32_t x5790 = 11369;
	static uint8_t x5791 = 87U;
	static uint16_t x5792 = 2U;
	static int32_t t65 = -259535;

	t65 = (x5789*((x5790|x5791)>>x5792));

	if (t65 != -364416) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x5941 = 8U;
	volatile int16_t x5942 = 216;
	uint32_t x5943 = 61U;

	t66 = (x5941*((x5942|x5943)>>x5944));

	if (t66 != 248U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x5989 = 0;
	uint8_t x5990 = UINT8_MAX;
	uint16_t x5991 = 14U;
	volatile int32_t t67 = 2825727;

	t67 = (x5989*((x5990|x5991)>>x5992));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x6110 = INT8_MAX;
	uint16_t x6111 = 0U;
	uint16_t x6112 = 0U;
	volatile int32_t t68 = -8135744;

	t68 = (x6109*((x6110|x6111)>>x6112));

	if (t68 != -16256) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x6197 = -1;
	int32_t x6198 = INT32_MAX;
	static volatile uint32_t x6200 = 2U;
	int32_t t69 = -25427;

	t69 = (x6197*((x6198|x6199)>>x6200));

	if (t69 != -536870911) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x6237 = 26688U;
	uint64_t x6238 = 34607420067623085LLU;
	static int64_t x6239 = -14402424623697294LL;
	int8_t x6240 = 1;
	uint64_t t70 = 1LLU;

	t70 = (x6237*((x6238|x6239)>>x6240));

	if (t70 != 14563507456212334528LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x6261 = 3U;
	static int64_t x6262 = INT64_MIN;
	static uint64_t x6263 = 36533162LLU;
	static uint32_t x6264 = 63U;

	t71 = (x6261*((x6262|x6263)>>x6264));

	if (t71 != 3LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x6265 = INT64_MAX;
	uint32_t x6266 = 15U;
	uint8_t x6267 = 0U;
	volatile int8_t x6268 = 29;
	volatile int64_t t72 = 245956681037LL;

	t72 = (x6265*((x6266|x6267)>>x6268));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x6297 = UINT16_MAX;
	volatile uint32_t x6298 = 591518827U;
	volatile uint64_t x6299 = UINT64_MAX;
	int8_t x6300 = 7;
	uint64_t t73 = 512908199LLU;

	t73 = (x6297*((x6298|x6299)>>x6300));

	if (t73 != 18302628885633630209LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x6301 = -1;

	t74 = (x6301*((x6302|x6303)>>x6304));

	if (t74 != 4160749569U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x6325 = INT64_MIN;
	uint32_t x6326 = 12019145U;
	volatile uint64_t t75 = 230964985207489204LLU;

	t75 = (x6325*((x6326|x6327)>>x6328));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x6353 = UINT32_MAX;
	int16_t x6356 = 1;
	volatile uint64_t t76 = 21953714LLU;

	t76 = (x6353*((x6354|x6355)>>x6356));

	if (t76 != 9223371903710789663LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x6369 = 2366;
	static uint64_t x6370 = 682619782318636LLU;
	int32_t x6371 = INT32_MIN;
	uint8_t x6372 = 41U;
	static volatile uint64_t t77 = 4518279LLU;

	t77 = (x6369*((x6370|x6371)>>x6372));

	if (t77 != 19847444162LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x6389 = INT32_MIN;
	int64_t x6390 = 53421606LL;
	int16_t x6391 = INT16_MAX;
	volatile uint8_t x6392 = 7U;

	t78 = (x6389*((x6390|x6391)>>x6392));

	if (t78 != -896649584967680LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x6406 = 11180LLU;
	volatile int64_t x6407 = INT64_MIN;
	static uint8_t x6408 = 35U;

	t79 = (x6405*((x6406|x6407)>>x6408));

	if (t79 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x6441 = 10508;
	volatile int16_t x6444 = 0;
	uint64_t t80 = 4LLU;

	t80 = (x6441*((x6442|x6443)>>x6444));

	if (t80 != 18446744073709541108LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x6465 = 3331LLU;
	uint64_t x6467 = 1756522847570264500LLU;
	int8_t x6468 = 1;
	volatile uint64_t t81 = 42372470204992395LLU;

	t81 = (x6465*((x6466|x6467)>>x6468));

	if (t81 != 10903238982166372753LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x6469 = UINT64_MAX;
	int32_t x6470 = 5645235;
	uint16_t x6471 = 23U;
	uint16_t x6472 = 13U;
	uint64_t t82 = 75549712LLU;

	t82 = (x6469*((x6470|x6471)>>x6472));

	if (t82 != 18446744073709550927LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x6477 = INT64_MIN;
	static uint64_t x6478 = 857704753713391LLU;
	static int16_t x6479 = 3621;
	static uint16_t x6480 = 2U;

	t83 = (x6477*((x6478|x6479)>>x6480));

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x6586 = 35LLU;
	int16_t x6587 = INT16_MIN;
	volatile uint64_t t84 = 8LLU;

	t84 = (x6585*((x6586|x6587)>>x6588));

	if (t84 != 9223372036854759440LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x6589 = INT16_MAX;
	static uint64_t x6591 = 14779751LLU;
	volatile int8_t x6592 = 1;
	volatile uint64_t t85 = 171882LLU;

	t85 = (x6589*((x6590|x6591)>>x6592));

	if (t85 != 242152422477LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x6853 = UINT64_MAX;
	int32_t x6855 = INT32_MAX;
	static uint32_t x6856 = 29U;
	volatile uint64_t t86 = 62167LLU;

	t86 = (x6853*((x6854|x6855)>>x6856));

	if (t86 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x6885 = 12799107;
	uint32_t x6886 = UINT32_MAX;
	uint64_t x6887 = UINT64_MAX;
	int32_t x6888 = 45;
	volatile uint64_t t87 = 801436753LLU;

	t87 = (x6885*((x6886|x6887)>>x6888));

	if (t87 != 6710405411709LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x6950 = UINT64_MAX;

	t88 = (x6949*((x6950|x6951)>>x6952));

	if (t88 != 16380LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x7097 = INT8_MIN;
	int16_t x7098 = 10;
	uint16_t x7099 = 16U;
	volatile uint8_t x7100 = 0U;
	static int32_t t89 = 131;

	t89 = (x7097*((x7098|x7099)>>x7100));

	if (t89 != -3328) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x7157 = 92629720U;
	volatile int64_t x7159 = 27695LL;
	int32_t x7160 = 3;
	static volatile int64_t t90 = 1563372LL;

	t90 = (x7157*((x7158|x7159)>>x7160));

	if (t90 != 49730202162074920LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x7213 = 1U;
	uint16_t x7214 = UINT16_MAX;
	int16_t x7215 = 3;
	int32_t t91 = 1235;

	t91 = (x7213*((x7214|x7215)>>x7216));

	if (t91 != 1023) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x7373 = 0U;
	volatile int8_t x7374 = INT8_MAX;
	static uint32_t x7375 = 164360893U;
	uint32_t t92 = 30170U;

	t92 = (x7373*((x7374|x7375)>>x7376));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x7449 = 0;
	int16_t x7450 = INT16_MAX;
	volatile uint32_t t93 = 9U;

	t93 = (x7449*((x7450|x7451)>>x7452));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x7510 = 25;
	static int8_t x7511 = 5;
	int32_t x7512 = 1;

	t94 = (x7509*((x7510|x7511)>>x7512));

	if (t94 != -14) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x7529 = 6284598507LL;
	static int8_t x7530 = 0;
	int8_t x7532 = 1;
	volatile int64_t t95 = 39LL;

	t95 = (x7529*((x7530|x7531)>>x7532));

	if (t95 != 68150186209908LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x7605 = INT16_MIN;
	volatile uint64_t x7607 = UINT64_MAX;
	static int16_t x7608 = 0;
	uint64_t t96 = 52478LLU;

	t96 = (x7605*((x7606|x7607)>>x7608));

	if (t96 != 32768LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x7729 = 221262241U;
	int32_t x7731 = 4366;
	uint8_t x7732 = 1U;
	uint32_t t97 = 700232827U;

	t97 = (x7729*((x7730|x7731)>>x7732));

	if (t97 != 1979134951U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x7762 = 1;
	static uint64_t x7763 = 2613310LLU;
	uint8_t x7764 = 19U;
	volatile uint64_t t98 = 1LLU;

	t98 = (x7761*((x7762|x7763)>>x7764));

	if (t98 != 131068LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x7865 = -216;
	uint64_t x7866 = 102362166189929293LLU;
	uint8_t x7867 = UINT8_MAX;
	static uint8_t x7868 = 2U;
	uint64_t t99 = 358582293950671332LLU;

	t99 = (x7865*((x7866|x7867)>>x7868));

	if (t99 != 12919187099453360344LLU) { NG(); } else { ; }
	
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

