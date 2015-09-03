#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x94 = INT8_MAX;
int8_t x96 = -1;
volatile uint8_t x102 = 20U;
volatile uint8_t x104 = 85U;
static uint32_t x170 = 822U;
uint64_t x430 = 4540LLU;
uint32_t x432 = 1659731U;
volatile int32_t x515 = 1;
static int32_t t8 = 2;
uint8_t x519 = 4U;
uint64_t t10 = 15416186LLU;
static uint64_t t11 = 9802459LLU;
uint16_t x839 = 0U;
volatile int64_t x840 = -1LL;
uint16_t x886 = 26042U;
int32_t t13 = -16612746;
uint64_t x913 = 90307LLU;
static volatile int32_t t15 = -818074378;
int32_t x1259 = 1;
uint64_t x1407 = 6LLU;
volatile int16_t x1408 = INT16_MAX;
static int16_t x1424 = INT16_MIN;
static uint32_t x1555 = 12U;
static int8_t x1677 = -1;
volatile uint8_t x1679 = 9U;
int16_t x1680 = INT16_MIN;
static uint8_t x1681 = 1U;
volatile uint64_t t25 = 66LLU;
uint16_t x2083 = 1U;
volatile int32_t t26 = -955;
volatile uint16_t x2172 = UINT16_MAX;
uint16_t x2475 = 1U;
static volatile int32_t x2501 = -4885;
uint8_t x2765 = 32U;
uint8_t x2767 = 2U;
static int8_t x3268 = INT8_MIN;
static uint8_t x3279 = 0U;
int32_t t36 = -741877;
volatile uint32_t x3341 = 1340151238U;
uint8_t x3343 = 6U;
uint32_t t37 = 867U;
volatile int64_t x3374 = 15LL;
volatile uint64_t x3418 = 53311997071152572LLU;
int32_t x3485 = 4;
uint8_t x3488 = 1U;
volatile uint16_t x3501 = 82U;
uint8_t x3503 = 21U;
static int32_t x3572 = INT32_MAX;
uint32_t x3696 = UINT32_MAX;
uint32_t t45 = 2031186851U;
int32_t x3862 = INT32_MAX;
static volatile uint32_t t46 = 17074U;
uint16_t x4518 = 0U;
int8_t x4519 = 3;
int64_t x4655 = 10LL;
volatile int64_t x4656 = 31616893778534LL;
int64_t x4725 = INT64_MAX;
int8_t x4726 = INT8_MAX;
volatile uint8_t x4739 = 16U;
static volatile uint64_t t54 = 2975734783770935097LLU;
uint32_t t55 = 83U;
volatile uint8_t x4843 = 1U;
static int8_t x4868 = -17;
volatile uint64_t t58 = 28078LLU;
uint8_t x4930 = 2U;
int16_t x4931 = 3;
int64_t t59 = 2293527458913962LL;
volatile int8_t x4937 = INT8_MIN;
uint32_t x4938 = UINT32_MAX;
static int16_t x4940 = INT16_MIN;
uint32_t x5033 = UINT32_MAX;
volatile uint32_t x5186 = UINT32_MAX;
uint64_t x5188 = UINT64_MAX;
uint64_t t62 = 7068887515LLU;
static uint32_t t63 = 1U;
int16_t x5392 = -1;
static uint32_t x5393 = 622U;
volatile uint8_t x5479 = 3U;
static int64_t t66 = -1193667182436LL;
static int64_t x5769 = -1LL;
static int16_t x5772 = -3569;
volatile uint64_t t69 = 216581907LLU;
int32_t t70 = 96483588;
int8_t x6167 = 0;
static uint8_t x6265 = 28U;
uint8_t x6309 = UINT8_MAX;
int32_t x6311 = 1;


void f0(void) {
	static uint32_t x93 = UINT32_MAX;
	int8_t x95 = 7;
	uint32_t t0 = 4U;

	t0 = (x93*((x94<<x95)|x96));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x101 = INT8_MIN;
	uint16_t x103 = 0U;
	volatile int32_t t1 = 1;

	t1 = (x101*((x102<<x103)|x104));

	if (t1 != -10880) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x169 = INT32_MIN;
	static int8_t x171 = 1;
	uint16_t x172 = 961U;
	volatile uint32_t t2 = 4U;

	t2 = (x169*((x170<<x171)|x172));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x249 = 179960266;
	uint64_t x250 = 14LLU;
	static int16_t x251 = 2;
	static int16_t x252 = 7;
	volatile uint64_t t3 = 58608LLU;

	t3 = (x249*((x250<<x251)|x252));

	if (t3 != 11337496758LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x329 = UINT32_MAX;
	uint16_t x330 = 10222U;
	int64_t x331 = 8LL;
	static int32_t x332 = -882;
	volatile uint32_t t4 = 5737U;

	t4 = (x329*((x330<<x331)|x332));

	if (t4 != 370U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = 1825007;
	uint16_t x407 = 2U;
	volatile uint64_t x408 = 5334983293944359733LLU;
	volatile uint64_t t5 = 33817224LLU;

	t5 = (x405*((x406<<x407)|x408));

	if (t5 != 3061010411280236544LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x417 = -2;
	static uint32_t x418 = 2678U;
	uint8_t x419 = 1U;
	int16_t x420 = 1;
	volatile uint32_t t6 = 19150422U;

	t6 = (x417*((x418<<x419)|x420));

	if (t6 != 4294956582U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x429 = 19U;
	uint16_t x431 = 15U;
	uint64_t t7 = 1486664878093043442LLU;

	t7 = (x429*((x430<<x431)|x432));

	if (t7 != 2828218153LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x513 = UINT8_MAX;
	uint16_t x514 = 16614U;
	int16_t x516 = -1;

	t8 = (x513*((x514<<x515)|x516));

	if (t8 != -255) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x517 = UINT32_MAX;
	static volatile uint32_t x518 = UINT32_MAX;
	int16_t x520 = -1;
	uint32_t t9 = 276157290U;

	t9 = (x517*((x518<<x519)|x520));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x597 = 66717778284418406LLU;
	uint64_t x598 = 1LLU;
	int32_t x599 = 10;
	uint32_t x600 = UINT32_MAX;

	t10 = (x597*((x598<<x599)|x600));

	if (t10 != 4750046288507529882LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x725 = -218;
	uint64_t x726 = UINT64_MAX;
	uint8_t x727 = 0U;
	static uint8_t x728 = 82U;

	t11 = (x725*((x726<<x727)|x728));

	if (t11 != 218LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x837 = INT16_MAX;
	volatile int32_t x838 = 128370102;
	volatile int64_t t12 = -5340684799LL;

	t12 = (x837*((x838<<x839)|x840));

	if (t12 != -32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x885 = INT16_MIN;
	int16_t x887 = 0;
	uint16_t x888 = 11607U;

	t13 = (x885*((x886<<x887)|x888));

	if (t13 != -922714112) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x914 = 12412LLU;
	uint32_t x915 = 0U;
	int16_t x916 = -1062;
	uint64_t t14 = 992489764LLU;

	t14 = (x913*((x914<<x915)|x916));

	if (t14 != 18446744073616896634LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1041 = 104U;
	uint16_t x1042 = 13U;
	volatile int16_t x1043 = 1;
	uint16_t x1044 = UINT16_MAX;

	t15 = (x1041*((x1042<<x1043)|x1044));

	if (t15 != 6815640) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1257 = INT8_MIN;
	int8_t x1258 = 21;
	int8_t x1260 = INT8_MIN;
	int32_t t16 = -70042;

	t16 = (x1257*((x1258<<x1259)|x1260));

	if (t16 != 11008) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1293 = INT32_MIN;
	uint16_t x1294 = 935U;
	int16_t x1295 = 0;
	uint64_t x1296 = UINT64_MAX;
	static volatile uint64_t t17 = 59324623LLU;

	t17 = (x1293*((x1294<<x1295)|x1296));

	if (t17 != 2147483648LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1405 = 3U;
	uint32_t x1406 = 585034U;
	uint32_t t18 = 0U;

	t18 = (x1405*((x1406<<x1407)|x1408));

	if (t18 != 112361469U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1421 = 4034785811274531275LLU;
	static uint64_t x1422 = 1338196176967864LLU;
	int8_t x1423 = 0;
	volatile uint64_t t19 = 15441LLU;

	t19 = (x1421*((x1422<<x1423)|x1424));

	if (t19 != 16230872237439635944LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1441 = 0;
	int32_t x1442 = 1753;
	uint32_t x1443 = 15U;
	static int16_t x1444 = INT16_MAX;
	volatile int32_t t20 = -2013113;

	t20 = (x1441*((x1442<<x1443)|x1444));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1553 = -106871;
	uint32_t x1554 = 956650U;
	int8_t x1556 = 53;
	volatile uint32_t t21 = 100059787U;

	t21 = (x1553*((x1554<<x1555)|x1556));

	if (t21 != 465384029U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1678 = INT8_MAX;
	static volatile int32_t t22 = 435675;

	t22 = (x1677*((x1678<<x1679)|x1680));

	if (t22 != 512) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1682 = INT8_MAX;
	static volatile uint32_t x1683 = 1U;
	static int16_t x1684 = INT16_MIN;
	int32_t t23 = -39087;

	t23 = (x1681*((x1682<<x1683)|x1684));

	if (t23 != -32514) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x2001 = 30U;
	static uint64_t x2002 = 3614LLU;
	static int8_t x2003 = 1;
	volatile uint32_t x2004 = 101U;
	uint64_t t24 = 961133116341LLU;

	t24 = (x2001*((x2002<<x2003)|x2004));

	if (t24 != 218790LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x2033 = 7U;
	uint64_t x2034 = 32LLU;
	static int16_t x2035 = 1;
	static int32_t x2036 = 2849179;

	t25 = (x2033*((x2034<<x2035)|x2036));

	if (t25 != 19944701LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2081 = -1;
	static int32_t x2082 = 193;
	int8_t x2084 = INT8_MAX;

	t26 = (x2081*((x2082<<x2083)|x2084));

	if (t26 != -511) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x2169 = INT32_MAX;
	uint64_t x2170 = 160LLU;
	uint8_t x2171 = 28U;
	static uint64_t t27 = 98803406187LLU;

	t27 = (x2169*((x2170<<x2171)|x2172));

	if (t27 != 140692391133185LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2273 = INT8_MIN;
	int32_t x2274 = 206;
	int16_t x2275 = 1;
	int8_t x2276 = INT8_MAX;
	int32_t t28 = 2882;

	t28 = (x2273*((x2274<<x2275)|x2276));

	if (t28 != -65408) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2473 = 1;
	uint16_t x2474 = 104U;
	int16_t x2476 = 8;
	int32_t t29 = 1;

	t29 = (x2473*((x2474<<x2475)|x2476));

	if (t29 != 216) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2502 = UINT64_MAX;
	uint8_t x2503 = 7U;
	int32_t x2504 = 293453204;
	volatile uint64_t t30 = 107386LLU;

	t30 = (x2501*((x2502<<x2503)|x2504));

	if (t30 != 527580LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2673 = -3;
	uint64_t x2674 = UINT64_MAX;
	volatile uint8_t x2675 = 10U;
	static int64_t x2676 = INT64_MIN;
	static volatile uint64_t t31 = 67124790209LLU;

	t31 = (x2673*((x2674<<x2675)|x2676));

	if (t31 != 3072LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2713 = UINT16_MAX;
	static uint8_t x2714 = UINT8_MAX;
	static int64_t x2715 = 0LL;
	int8_t x2716 = -1;
	static volatile int32_t t32 = 166;

	t32 = (x2713*((x2714<<x2715)|x2716));

	if (t32 != -65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2766 = 29360;
	int64_t x2768 = -108LL;
	volatile int64_t t33 = -21512LL;

	t33 = (x2765*((x2766<<x2767)|x2768));

	if (t33 != -1408LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x3081 = -1;
	int64_t x3082 = 121633LL;
	static volatile uint8_t x3083 = 1U;
	volatile int32_t x3084 = INT32_MAX;
	volatile int64_t t34 = -38627LL;

	t34 = (x3081*((x3082<<x3083)|x3084));

	if (t34 != -2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x3265 = 1;
	static uint64_t x3266 = 10096491239LLU;
	int8_t x3267 = 7;
	uint64_t t35 = 6624483571324540802LLU;

	t35 = (x3265*((x3266<<x3267)|x3268));

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x3277 = 1U;
	uint8_t x3278 = 8U;
	static uint16_t x3280 = UINT16_MAX;

	t36 = (x3277*((x3278<<x3279)|x3280));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x3342 = INT8_MAX;
	int8_t x3344 = INT8_MIN;

	t37 = (x3341*((x3342<<x3343)|x3344));

	if (t37 != 129666688U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x3373 = INT16_MAX;
	volatile int8_t x3375 = 12;
	static uint8_t x3376 = 49U;
	volatile int64_t t38 = 6069547151LL;

	t38 = (x3373*((x3374<<x3375)|x3376));

	if (t38 != 2014810063LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x3417 = INT64_MIN;
	uint8_t x3419 = 15U;
	volatile int16_t x3420 = 0;
	volatile uint64_t t39 = 517232846221LLU;

	t39 = (x3417*((x3418<<x3419)|x3420));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x3441 = -1;
	static int8_t x3442 = 2;
	uint8_t x3443 = 0U;
	int64_t x3444 = INT64_MIN;
	int64_t t40 = 194425098775LL;

	t40 = (x3441*((x3442<<x3443)|x3444));

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x3486 = 90U;
	uint8_t x3487 = 8U;
	uint32_t t41 = 1405105U;

	t41 = (x3485*((x3486<<x3487)|x3488));

	if (t41 != 92164U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3502 = 102855105U;
	volatile int64_t x3504 = -208653944552856LL;
	volatile int64_t t42 = 518724204589LL;

	t42 = (x3501*((x3502<<x3503)|x3504));

	if (t42 != -17109612275514032LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3569 = 12919608272LLU;
	static int32_t x3570 = 1282483;
	uint8_t x3571 = 3U;
	uint64_t t43 = 177718015435LLU;

	t43 = (x3569*((x3570<<x3571)|x3572));

	if (t43 != 9297903416056376368LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3657 = INT32_MIN;
	int64_t x3658 = 7781743504LL;
	int8_t x3659 = 20;
	int64_t x3660 = -1LL;
	volatile int64_t t44 = -206518688LL;

	t44 = (x3657*((x3658<<x3659)|x3660));

	if (t44 != 2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x3693 = 0;
	uint8_t x3694 = 116U;
	uint32_t x3695 = 1U;

	t45 = (x3693*((x3694<<x3695)|x3696));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3861 = INT32_MIN;
	volatile uint8_t x3863 = 0U;
	uint32_t x3864 = 0U;

	t46 = (x3861*((x3862<<x3863)|x3864));

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x4117 = 1U;
	uint16_t x4118 = UINT16_MAX;
	uint16_t x4119 = 1U;
	uint16_t x4120 = 13343U;
	volatile int32_t t47 = -2031625;

	t47 = (x4117*((x4118<<x4119)|x4120));

	if (t47 != 131071) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x4289 = UINT8_MAX;
	uint64_t x4290 = 19LLU;
	int8_t x4291 = 5;
	volatile int16_t x4292 = -118;
	static volatile uint64_t t48 = 70200564LLU;

	t48 = (x4289*((x4290<<x4291)|x4292));

	if (t48 != 18446744073709546006LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x4473 = -284;
	volatile int16_t x4474 = 7;
	uint32_t x4475 = 3U;
	int32_t x4476 = -1;
	int32_t t49 = -1380467;

	t49 = (x4473*((x4474<<x4475)|x4476));

	if (t49 != 284) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x4513 = INT8_MIN;
	uint64_t x4514 = 4322650397LLU;
	uint8_t x4515 = 1U;
	uint8_t x4516 = 42U;
	volatile uint64_t t50 = 1632899173851LLU;

	t50 = (x4513*((x4514<<x4515)|x4516));

	if (t50 != 18446742967111049984LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x4517 = -1LL;
	int8_t x4520 = 0;
	int64_t t51 = 244068395LL;

	t51 = (x4517*((x4518<<x4519)|x4520));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x4653 = 5;
	int64_t x4654 = 8838259LL;
	int64_t t52 = -1099466172587343LL;

	t52 = (x4653*((x4654<<x4655)|x4656));

	if (t52 != 158129620908030LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x4727 = 1;
	static uint64_t x4728 = 1161323847488LLU;
	uint64_t t53 = 208218846636LLU;

	t53 = (x4725*((x4726<<x4727)|x4728));

	if (t53 != 18446742912385703938LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4737 = UINT64_MAX;
	static uint32_t x4738 = UINT32_MAX;
	uint32_t x4740 = 9726U;

	t54 = (x4737*((x4738<<x4739)|x4740));

	if (t54 != 18446744069414640130LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x4797 = INT8_MAX;
	static uint32_t x4798 = UINT32_MAX;
	int64_t x4799 = 26LL;
	static int32_t x4800 = -3444;

	t55 = (x4797*((x4798<<x4799)|x4800));

	if (t55 != 4294529908U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x4841 = 15;
	uint16_t x4842 = UINT16_MAX;
	int8_t x4844 = INT8_MIN;
	int32_t t56 = -189;

	t56 = (x4841*((x4842<<x4843)|x4844));

	if (t56 != -30) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4865 = 1U;
	uint16_t x4866 = UINT16_MAX;
	volatile uint8_t x4867 = 1U;
	volatile int32_t t57 = -1460;

	t57 = (x4865*((x4866<<x4867)|x4868));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x4905 = 15661009365LLU;
	static uint64_t x4906 = 1698642060345491247LLU;
	static volatile uint8_t x4907 = 18U;
	int8_t x4908 = INT8_MIN;

	t58 = (x4905*((x4906<<x4907)|x4908));

	if (t58 != 18446742069100352896LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4929 = -1LL;
	int8_t x4932 = 16;

	t59 = (x4929*((x4930<<x4931)|x4932));

	if (t59 != -16LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4939 = 6LLU;
	volatile uint32_t t60 = 1851U;

	t60 = (x4937*((x4938<<x4939)|x4940));

	if (t60 != 8192U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x5034 = 2U;
	uint32_t x5035 = 20U;
	static int16_t x5036 = INT16_MIN;
	volatile uint32_t t61 = 0U;

	t61 = (x5033*((x5034<<x5035)|x5036));

	if (t61 != 32768U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x5185 = -294031127613LL;
	uint16_t x5187 = 2U;

	t62 = (x5185*((x5186<<x5187)|x5188));

	if (t62 != 294031127613LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x5289 = 3U;
	uint32_t x5290 = 719U;
	volatile int8_t x5291 = 4;
	int8_t x5292 = -1;

	t63 = (x5289*((x5290<<x5291)|x5292));

	if (t63 != 4294967293U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x5389 = 74533LLU;
	volatile uint8_t x5390 = 126U;
	volatile int16_t x5391 = 2;
	static volatile uint64_t t64 = 1475964LLU;

	t64 = (x5389*((x5390<<x5391)|x5392));

	if (t64 != 18446744073709477083LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x5394 = UINT64_MAX;
	uint8_t x5395 = 48U;
	int64_t x5396 = INT64_MIN;
	volatile uint64_t t65 = 43471156LLU;

	t65 = (x5393*((x5394<<x5395)|x5396));

	if (t65 != 18271666638195523584LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x5477 = -1LL;
	uint16_t x5478 = UINT16_MAX;
	uint8_t x5480 = 22U;

	t66 = (x5477*((x5478<<x5479)|x5480));

	if (t66 != -524286LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x5705 = INT32_MIN;
	int8_t x5706 = 1;
	uint8_t x5707 = 1U;
	static volatile int64_t x5708 = 103362615LL;
	volatile int64_t t67 = -234715486301681595LL;

	t67 = (x5705*((x5706<<x5707)|x5708));

	if (t67 != -221969525527019520LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x5770 = 4U;
	int8_t x5771 = 2;
	int64_t t68 = 8587541909738528LL;

	t68 = (x5769*((x5770<<x5771)|x5772));

	if (t68 != -4294963743LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x5925 = 3LLU;
	int8_t x5926 = INT8_MAX;
	static uint16_t x5927 = 1U;
	int32_t x5928 = -432859;

	t69 = (x5925*((x5926<<x5927)|x5928));

	if (t69 != 18446744073708253693LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x5953 = -1;
	uint8_t x5954 = 0U;
	volatile uint8_t x5955 = 0U;
	volatile int8_t x5956 = INT8_MIN;

	t70 = (x5953*((x5954<<x5955)|x5956));

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x6077 = -1LL;
	uint8_t x6078 = 99U;
	static uint8_t x6079 = 11U;
	uint64_t x6080 = UINT64_MAX;
	volatile uint64_t t71 = 112728625739477868LLU;

	t71 = (x6077*((x6078<<x6079)|x6080));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x6165 = -1;
	static uint32_t x6166 = 4126U;
	int32_t x6168 = INT32_MIN;
	static uint32_t t72 = 6508U;

	t72 = (x6165*((x6166<<x6167)|x6168));

	if (t72 != 2147479522U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x6266 = 324513937802974LL;
	static uint8_t x6267 = 6U;
	int32_t x6268 = 1235938;
	int64_t t73 = -2117LL;

	t73 = (x6265*((x6266<<x6267)|x6268));

	if (t73 != 581528976547118264LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x6310 = 665U;
	int16_t x6312 = -1;
	volatile int32_t t74 = 5267;

	t74 = (x6309*((x6310<<x6311)|x6312));

	if (t74 != -255) { NG(); } else { ; }
	
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


    return 0;
}

