#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x95 = 0U;
uint64_t x114 = 13144LLU;
int16_t x369 = INT16_MAX;
uint16_t x372 = UINT16_MAX;
static volatile int8_t x390 = INT8_MIN;
static uint32_t t10 = 2516U;
int8_t x579 = INT8_MIN;
int64_t x585 = -1LL;
int64_t t12 = 839586930926202LL;
uint32_t x661 = 54127056U;
static int16_t x663 = 0;
static int8_t x790 = -1;
static uint8_t x988 = UINT8_MAX;
volatile int16_t x1126 = 1;
int64_t t19 = 4LL;
volatile int16_t x1187 = INT16_MIN;
static int8_t x1297 = 11;
uint32_t x1355 = 526294242U;
uint32_t x1757 = UINT32_MAX;
int64_t x1759 = INT64_MIN;
uint8_t x2011 = 0U;
volatile uint8_t x2012 = 62U;
int64_t x2026 = 20619068LL;
int8_t x2027 = INT8_MIN;
int16_t x2160 = 1;
volatile uint64_t x2190 = UINT64_MAX;
static uint32_t t34 = 13377U;
int64_t x2457 = -1LL;
volatile uint64_t x2458 = 0LLU;
volatile int8_t x2514 = -2;
volatile uint32_t t42 = 862342U;
volatile uint64_t x2963 = UINT64_MAX;
int32_t x2964 = -1;
int32_t t43 = -708;
uint16_t x3020 = 0U;
int8_t x3030 = INT8_MAX;
static uint32_t x3059 = 1269U;
int64_t t46 = 432840757620053880LL;
int8_t x3070 = INT8_MAX;
static int32_t x3072 = INT32_MIN;
volatile int32_t t48 = 3;
int8_t x3122 = -1;
volatile int8_t x3124 = -1;
uint64_t x3221 = 301394516693927327LLU;
volatile uint16_t x3285 = 8828U;
int16_t x3288 = -1;
uint64_t x3586 = UINT64_MAX;
int8_t x3650 = INT8_MIN;
int16_t x3651 = 0;
volatile int16_t x3659 = -1;
uint32_t x3751 = UINT32_MAX;
volatile uint32_t t56 = 333635882U;
uint32_t x3878 = UINT32_MAX;
int32_t x3879 = -1;
uint8_t x3880 = 0U;
volatile int32_t x3891 = 0;
static int32_t t59 = -64643;
volatile int32_t x3955 = -1;
uint64_t x4072 = 40LLU;
int16_t x4163 = -1;
volatile int64_t t63 = -3579060LL;
int32_t x4313 = 734;
volatile uint8_t x4319 = 0U;
int8_t x4398 = 2;
int16_t x4558 = 8;
uint16_t x4629 = 7278U;
static int64_t x4703 = -1LL;
uint16_t x4762 = 1U;
int8_t x4763 = 1;
volatile int32_t t74 = -2;
uint32_t x4809 = 488801449U;
uint32_t x5138 = 243U;
static int64_t x5301 = 66LL;
volatile uint64_t t79 = 8297737901951208LLU;
static volatile uint16_t x5369 = UINT16_MAX;
uint32_t t80 = 2041043U;
uint16_t x5378 = 400U;
int64_t x5494 = INT64_MAX;
int64_t t82 = 7914600426940LL;
volatile uint32_t x5514 = 13550352U;
int8_t x5641 = INT8_MIN;
uint64_t x5642 = UINT64_MAX;
int32_t x5690 = -1;
static volatile int8_t x5701 = -1;
int16_t x5800 = -1;
uint8_t x5876 = 0U;
volatile uint32_t t90 = 11060U;
uint16_t x6013 = UINT16_MAX;
volatile int32_t t92 = 69;
int8_t x6092 = -1;
int64_t x6163 = 1LL;
uint8_t x6216 = 1U;
volatile uint64_t x6241 = 122497258764LLU;
static uint8_t x6416 = 0U;
static int64_t x6444 = -1LL;


void f0(void) {
	uint8_t x93 = 3U;
	uint32_t x94 = 696U;
	int64_t x96 = -113LL;
	uint32_t t0 = 8534U;

	t0 = ((x93+x94)<<(x95*x96));

	if (t0 != 699U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int8_t x115 = -1;
	int8_t x116 = -1;
	uint64_t t1 = 2255LLU;

	t1 = ((x113+x114)<<(x115*x116));

	if (t1 != 8589960878LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x189 = 3;
	int8_t x190 = INT8_MAX;
	static int64_t x191 = 6809134623023LL;
	static uint8_t x192 = 0U;
	volatile int32_t t2 = -2;

	t2 = ((x189+x190)<<(x191*x192));

	if (t2 != 130) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x229 = 87180957829LL;
	static volatile int32_t x230 = -14081477;
	static uint32_t x231 = UINT32_MAX;
	volatile int8_t x232 = -1;
	int64_t t3 = -35283720443051LL;

	t3 = ((x229+x230)<<(x231*x232));

	if (t3 != 174333752704LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x289 = 0;
	static uint8_t x290 = UINT8_MAX;
	uint32_t x291 = 2U;
	int64_t x292 = 0LL;
	int32_t t4 = -1502752;

	t4 = ((x289+x290)<<(x291*x292));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x309 = -1;
	uint64_t x310 = 109LLU;
	int8_t x311 = -57;
	int16_t x312 = -1;
	uint64_t t5 = 9032669500920LLU;

	t5 = ((x309+x310)<<(x311*x312));

	if (t5 != 15564440312192434176LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x317 = 2453469U;
	int8_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = -1;
	uint32_t t6 = 2U;

	t6 = ((x317+x318)<<(x319*x320));

	if (t6 != 4906936U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x370 = 248597623;
	uint16_t x371 = 0U;
	volatile int32_t t7 = -218106697;

	t7 = ((x369+x370)<<(x371*x372));

	if (t7 != 248630390) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x389 = UINT8_MAX;
	uint32_t x391 = UINT32_MAX;
	static int8_t x392 = 0;
	static volatile int32_t t8 = -166157;

	t8 = ((x389+x390)<<(x391*x392));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x413 = -15144;
	uint16_t x414 = UINT16_MAX;
	uint32_t x415 = 860453U;
	static int8_t x416 = 0;
	int32_t t9 = 47799;

	t9 = ((x413+x414)<<(x415*x416));

	if (t9 != 50391) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x553 = 3728U;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = -1;
	int64_t x556 = -1LL;

	t10 = ((x553+x554)<<(x555*x556));

	if (t10 != 7454U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x577 = UINT16_MAX;
	int32_t x578 = -13;
	int16_t x580 = 0;
	static int32_t t11 = -114938;

	t11 = ((x577+x578)<<(x579*x580));

	if (t11 != 65522) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x586 = 200U;
	static int8_t x587 = -1;
	int8_t x588 = -27;

	t12 = ((x585+x586)<<(x587*x588));

	if (t12 != 26709327872LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x662 = INT8_MIN;
	int16_t x664 = -7;
	uint32_t t13 = 6U;

	t13 = ((x661+x662)<<(x663*x664));

	if (t13 != 54126928U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x697 = UINT32_MAX;
	volatile uint16_t x698 = 18U;
	uint8_t x699 = 0U;
	int16_t x700 = 58;
	uint32_t t14 = 3U;

	t14 = ((x697+x698)<<(x699*x700));

	if (t14 != 17U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x709 = 2U;
	volatile int64_t x710 = -1LL;
	volatile uint16_t x711 = 0U;
	volatile int32_t x712 = INT32_MIN;
	int64_t t15 = 76565645913LL;

	t15 = ((x709+x710)<<(x711*x712));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x789 = 2070;
	int16_t x791 = -1;
	int8_t x792 = -1;
	static int32_t t16 = -41441;

	t16 = ((x789+x790)<<(x791*x792));

	if (t16 != 4138) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x809 = 7286;
	uint32_t x810 = 636464951U;
	uint32_t x811 = UINT32_MAX;
	uint8_t x812 = 0U;
	uint32_t t17 = 413074U;

	t17 = ((x809+x810)<<(x811*x812));

	if (t17 != 636472237U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x985 = UINT16_MAX;
	static int64_t x986 = 92675358209906LL;
	volatile int8_t x987 = 0;
	volatile int64_t t18 = -1308108433834LL;

	t18 = ((x985+x986)<<(x987*x988));

	if (t18 != 92675358275441LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1125 = -1LL;
	int32_t x1127 = -2;
	volatile int8_t x1128 = -1;

	t19 = ((x1125+x1126)<<(x1127*x1128));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1185 = INT32_MAX;
	uint32_t x1186 = UINT32_MAX;
	uint8_t x1188 = 0U;
	volatile uint32_t t20 = 1U;

	t20 = ((x1185+x1186)<<(x1187*x1188));

	if (t20 != 2147483646U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1201 = UINT64_MAX;
	int32_t x1202 = INT32_MIN;
	int32_t x1203 = INT32_MIN;
	uint64_t x1204 = 0LLU;
	volatile uint64_t t21 = 6LLU;

	t21 = ((x1201+x1202)<<(x1203*x1204));

	if (t21 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1298 = UINT64_MAX;
	static volatile int16_t x1299 = INT16_MAX;
	int64_t x1300 = 0LL;
	static uint64_t t22 = 819431994LLU;

	t22 = ((x1297+x1298)<<(x1299*x1300));

	if (t22 != 10LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1353 = 73202U;
	int16_t x1354 = INT16_MIN;
	int32_t x1356 = INT32_MIN;
	static uint32_t t23 = 117422U;

	t23 = ((x1353+x1354)<<(x1355*x1356));

	if (t23 != 40434U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1397 = 3U;
	uint64_t x1398 = UINT64_MAX;
	uint8_t x1399 = 3U;
	uint8_t x1400 = 0U;
	volatile uint64_t t24 = 83140130LLU;

	t24 = ((x1397+x1398)<<(x1399*x1400));

	if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1673 = 1U;
	uint64_t x1674 = 182085LLU;
	static int16_t x1675 = 1;
	volatile uint32_t x1676 = 62U;
	uint64_t t25 = 615817LLU;

	t25 = ((x1673+x1674)<<(x1675*x1676));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1758 = UINT64_MAX;
	volatile int8_t x1760 = 0;
	volatile uint64_t t26 = 39377896LLU;

	t26 = ((x1757+x1758)<<(x1759*x1760));

	if (t26 != 4294967294LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1897 = 30U;
	volatile uint8_t x1898 = UINT8_MAX;
	int8_t x1899 = -3;
	static int8_t x1900 = -1;
	uint32_t t27 = 971839U;

	t27 = ((x1897+x1898)<<(x1899*x1900));

	if (t27 != 2280U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1953 = -106;
	static uint32_t x1954 = 16875046U;
	uint8_t x1955 = 0U;
	int16_t x1956 = 517;
	uint32_t t28 = 73U;

	t28 = ((x1953+x1954)<<(x1955*x1956));

	if (t28 != 16874940U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x2009 = UINT8_MAX;
	int8_t x2010 = INT8_MAX;
	static int32_t t29 = -1148173;

	t29 = ((x2009+x2010)<<(x2011*x2012));

	if (t29 != 382) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x2025 = INT8_MAX;
	volatile int16_t x2028 = 0;
	static int64_t t30 = -219196LL;

	t30 = ((x2025+x2026)<<(x2027*x2028));

	if (t30 != 20619195LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x2061 = UINT16_MAX;
	volatile int64_t x2062 = -123LL;
	static volatile int32_t x2063 = INT32_MIN;
	uint32_t x2064 = 163020490U;
	int64_t t31 = -128686786LL;

	t31 = ((x2061+x2062)<<(x2063*x2064));

	if (t31 != 65412LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2157 = 15U;
	int32_t x2158 = -1;
	uint8_t x2159 = 0U;
	uint32_t t32 = 4753144U;

	t32 = ((x2157+x2158)<<(x2159*x2160));

	if (t32 != 14U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x2189 = INT16_MAX;
	int8_t x2191 = -1;
	uint64_t x2192 = UINT64_MAX;
	volatile uint64_t t33 = 3355573LLU;

	t33 = ((x2189+x2190)<<(x2191*x2192));

	if (t33 != 65532LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2193 = 645U;
	int8_t x2194 = 6;
	int32_t x2195 = INT32_MIN;
	static uint8_t x2196 = 0U;

	t34 = ((x2193+x2194)<<(x2195*x2196));

	if (t34 != 651U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2301 = UINT16_MAX;
	int16_t x2302 = INT16_MIN;
	volatile int8_t x2303 = -1;
	int64_t x2304 = -1LL;
	int32_t t35 = 4;

	t35 = ((x2301+x2302)<<(x2303*x2304));

	if (t35 != 65534) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2459 = 0U;
	uint32_t x2460 = 4378045U;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x2457+x2458)<<(x2459*x2460));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2509 = 1U;
	static uint32_t x2510 = UINT32_MAX;
	static uint32_t x2511 = 30520792U;
	uint32_t x2512 = 0U;
	volatile uint32_t t37 = 12882U;

	t37 = ((x2509+x2510)<<(x2511*x2512));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2513 = 91U;
	static uint8_t x2515 = UINT8_MAX;
	static int16_t x2516 = 0;
	volatile int32_t t38 = -1245;

	t38 = ((x2513+x2514)<<(x2515*x2516));

	if (t38 != 89) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x2517 = INT8_MAX;
	uint8_t x2518 = UINT8_MAX;
	volatile int64_t x2519 = INT64_MIN;
	uint64_t x2520 = 3515197547466856LLU;
	int32_t t39 = -86;

	t39 = ((x2517+x2518)<<(x2519*x2520));

	if (t39 != 382) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x2561 = 12LL;
	volatile int8_t x2562 = INT8_MAX;
	volatile int8_t x2563 = 0;
	int64_t x2564 = 53185LL;
	static volatile int64_t t40 = -1081326LL;

	t40 = ((x2561+x2562)<<(x2563*x2564));

	if (t40 != 139LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2741 = 2U;
	uint32_t x2742 = 841U;
	static volatile int8_t x2743 = -1;
	static uint16_t x2744 = 0U;
	volatile uint32_t t41 = 8U;

	t41 = ((x2741+x2742)<<(x2743*x2744));

	if (t41 != 843U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2857 = 778U;
	int32_t x2858 = 555;
	static int32_t x2859 = 1;
	uint8_t x2860 = 23U;

	t42 = ((x2857+x2858)<<(x2859*x2860));

	if (t42 != 2592079872U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2961 = -1;
	volatile uint8_t x2962 = 1U;

	t43 = ((x2961+x2962)<<(x2963*x2964));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3017 = 62947U;
	static int8_t x3018 = -1;
	volatile int32_t x3019 = 4;
	uint32_t t44 = 52839U;

	t44 = ((x3017+x3018)<<(x3019*x3020));

	if (t44 != 62946U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x3029 = -1LL;
	int32_t x3031 = -1;
	volatile uint32_t x3032 = UINT32_MAX;
	volatile int64_t t45 = -34976257320593LL;

	t45 = ((x3029+x3030)<<(x3031*x3032));

	if (t45 != 252LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3057 = UINT8_MAX;
	static int64_t x3058 = 2453LL;
	volatile uint8_t x3060 = 0U;

	t46 = ((x3057+x3058)<<(x3059*x3060));

	if (t46 != 2708LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3061 = -1;
	uint32_t x3062 = UINT32_MAX;
	uint64_t x3063 = 1264585209519LLU;
	int32_t x3064 = 0;
	static uint32_t t47 = 1U;

	t47 = ((x3061+x3062)<<(x3063*x3064));

	if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3069 = 3;
	int16_t x3071 = 0;

	t48 = ((x3069+x3070)<<(x3071*x3072));

	if (t48 != 130) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x3121 = INT16_MAX;
	int32_t x3123 = -1;
	int32_t t49 = 171;

	t49 = ((x3121+x3122)<<(x3123*x3124));

	if (t49 != 65532) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3137 = 1014475845906LLU;
	static int8_t x3138 = INT8_MAX;
	volatile uint32_t x3139 = 58838U;
	int16_t x3140 = 0;
	uint64_t t50 = 2421727179LLU;

	t50 = ((x3137+x3138)<<(x3139*x3140));

	if (t50 != 1014475846033LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3222 = 1U;
	int8_t x3223 = -1;
	volatile int32_t x3224 = -1;
	uint64_t t51 = 1224LLU;

	t51 = ((x3221+x3222)<<(x3223*x3224));

	if (t51 != 602789033387854656LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3286 = 29001227313478LLU;
	int8_t x3287 = -1;
	volatile uint64_t t52 = 33807591139880005LLU;

	t52 = ((x3285+x3286)<<(x3287*x3288));

	if (t52 != 58002454644612LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3585 = -1LL;
	static uint8_t x3587 = 0U;
	int32_t x3588 = -1;
	uint64_t t53 = 12127448525200951LLU;

	t53 = ((x3585+x3586)<<(x3587*x3588));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3649 = UINT8_MAX;
	int16_t x3652 = -1;
	int32_t t54 = 20;

	t54 = ((x3649+x3650)<<(x3651*x3652));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3657 = UINT8_MAX;
	uint64_t x3658 = UINT64_MAX;
	volatile int16_t x3660 = -1;
	uint64_t t55 = 120854LLU;

	t55 = ((x3657+x3658)<<(x3659*x3660));

	if (t55 != 508LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3749 = 7686U;
	uint32_t x3750 = 542377385U;
	int16_t x3752 = -1;

	t56 = ((x3749+x3750)<<(x3751*x3752));

	if (t56 != 1084770142U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x3865 = 1;
	static int16_t x3866 = 6185;
	int8_t x3867 = 0;
	int64_t x3868 = INT64_MAX;
	volatile int32_t t57 = -195881497;

	t57 = ((x3865+x3866)<<(x3867*x3868));

	if (t57 != 6186) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3877 = -1;
	uint32_t t58 = 162621103U;

	t58 = ((x3877+x3878)<<(x3879*x3880));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x3889 = -1;
	static volatile int16_t x3890 = 1;
	volatile int8_t x3892 = INT8_MIN;

	t59 = ((x3889+x3890)<<(x3891*x3892));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3953 = INT8_MIN;
	volatile int32_t x3954 = 100664006;
	static int16_t x3956 = -1;
	int32_t t60 = -103962474;

	t60 = ((x3953+x3954)<<(x3955*x3956));

	if (t60 != 201327756) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4025 = UINT64_MAX;
	volatile uint64_t x4026 = 29LLU;
	static uint32_t x4027 = UINT32_MAX;
	int32_t x4028 = 0;
	volatile uint64_t t61 = 255LLU;

	t61 = ((x4025+x4026)<<(x4027*x4028));

	if (t61 != 28LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4069 = INT8_MIN;
	int32_t x4070 = 591975473;
	static volatile int64_t x4071 = INT64_MIN;
	static volatile int32_t t62 = -1755054;

	t62 = ((x4069+x4070)<<(x4071*x4072));

	if (t62 != 591975345) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4161 = 22LL;
	uint32_t x4162 = 23650585U;
	volatile int64_t x4164 = -1LL;

	t63 = ((x4161+x4162)<<(x4163*x4164));

	if (t63 != 47301214LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4314 = INT16_MAX;
	int64_t x4315 = -1LL;
	volatile int32_t x4316 = 0;
	volatile int32_t t64 = -389543;

	t64 = ((x4313+x4314)<<(x4315*x4316));

	if (t64 != 33501) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x4317 = -1LL;
	static uint64_t x4318 = 6629572537878501914LLU;
	static int16_t x4320 = INT16_MAX;
	static volatile uint64_t t65 = 2020056566026319633LLU;

	t65 = ((x4317+x4318)<<(x4319*x4320));

	if (t65 != 6629572537878501913LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4353 = 8864;
	uint16_t x4354 = UINT16_MAX;
	uint32_t x4355 = UINT32_MAX;
	int16_t x4356 = -1;
	volatile int32_t t66 = -6143;

	t66 = ((x4353+x4354)<<(x4355*x4356));

	if (t66 != 148798) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4393 = 569LLU;
	static int64_t x4394 = INT64_MAX;
	int8_t x4395 = 0;
	int64_t x4396 = INT64_MIN;
	volatile uint64_t t67 = 10156LLU;

	t67 = ((x4393+x4394)<<(x4395*x4396));

	if (t67 != 9223372036854776376LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x4397 = 182U;
	volatile uint8_t x4399 = 0U;
	int16_t x4400 = INT16_MIN;
	static int32_t t68 = -95;

	t68 = ((x4397+x4398)<<(x4399*x4400));

	if (t68 != 184) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4557 = 62545LL;
	uint8_t x4559 = 0U;
	uint32_t x4560 = 2U;
	int64_t t69 = 57686LL;

	t69 = ((x4557+x4558)<<(x4559*x4560));

	if (t69 != 62553LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4609 = -10;
	uint32_t x4610 = UINT32_MAX;
	volatile int32_t x4611 = -1;
	int16_t x4612 = -1;
	volatile uint32_t t70 = 122765U;

	t70 = ((x4609+x4610)<<(x4611*x4612));

	if (t70 != 4294967274U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4625 = INT16_MAX;
	uint64_t x4626 = UINT64_MAX;
	static volatile uint16_t x4627 = 13U;
	int16_t x4628 = 1;
	volatile uint64_t t71 = 471472427058630905LLU;

	t71 = ((x4625+x4626)<<(x4627*x4628));

	if (t71 != 268419072LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4630 = 1U;
	static int64_t x4631 = -1LL;
	uint8_t x4632 = 0U;
	volatile int32_t t72 = 826442810;

	t72 = ((x4629+x4630)<<(x4631*x4632));

	if (t72 != 7279) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4701 = 3232938318983LLU;
	int16_t x4702 = INT16_MIN;
	volatile uint64_t x4704 = UINT64_MAX;
	uint64_t t73 = 645LLU;

	t73 = ((x4701+x4702)<<(x4703*x4704));

	if (t73 != 6465876572430LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x4761 = 0U;
	static uint8_t x4764 = 27U;

	t74 = ((x4761+x4762)<<(x4763*x4764));

	if (t74 != 134217728) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4810 = 54680318;
	int32_t x4811 = -1;
	uint32_t x4812 = UINT32_MAX;
	volatile uint32_t t75 = 697U;

	t75 = ((x4809+x4810)<<(x4811*x4812));

	if (t75 != 1086963534U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x5137 = UINT32_MAX;
	volatile int32_t x5139 = 10511;
	volatile uint8_t x5140 = 0U;
	volatile uint32_t t76 = 96540392U;

	t76 = ((x5137+x5138)<<(x5139*x5140));

	if (t76 != 242U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5201 = UINT16_MAX;
	int8_t x5202 = -1;
	int8_t x5203 = 0;
	uint16_t x5204 = UINT16_MAX;
	int32_t t77 = -7294;

	t77 = ((x5201+x5202)<<(x5203*x5204));

	if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5285 = INT32_MAX;
	volatile int64_t x5286 = -31LL;
	int8_t x5287 = 0;
	int8_t x5288 = INT8_MAX;
	int64_t t78 = -445193377462LL;

	t78 = ((x5285+x5286)<<(x5287*x5288));

	if (t78 != 2147483616LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5302 = 44167082LLU;
	volatile uint16_t x5303 = 0U;
	int16_t x5304 = INT16_MIN;

	t79 = ((x5301+x5302)<<(x5303*x5304));

	if (t79 != 44167148LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5370 = 1641058U;
	volatile int16_t x5371 = -1;
	static uint32_t x5372 = UINT32_MAX;

	t80 = ((x5369+x5370)<<(x5371*x5372));

	if (t80 != 3413186U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x5377 = INT8_MAX;
	uint32_t x5379 = 0U;
	volatile uint16_t x5380 = 2574U;
	int32_t t81 = 0;

	t81 = ((x5377+x5378)<<(x5379*x5380));

	if (t81 != 527) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5493 = INT8_MIN;
	int8_t x5495 = 0;
	volatile int8_t x5496 = INT8_MIN;

	t82 = ((x5493+x5494)<<(x5495*x5496));

	if (t82 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x5513 = INT16_MIN;
	uint32_t x5515 = UINT32_MAX;
	int8_t x5516 = -25;
	volatile uint32_t t83 = 638288796U;

	t83 = ((x5513+x5514)<<(x5515*x5516));

	if (t83 != 536870912U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x5643 = UINT32_MAX;
	volatile int32_t x5644 = -1;
	static uint64_t t84 = 4LLU;

	t84 = ((x5641+x5642)<<(x5643*x5644));

	if (t84 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x5689 = UINT16_MAX;
	static int8_t x5691 = -1;
	int8_t x5692 = -3;
	static volatile int32_t t85 = 23049;

	t85 = ((x5689+x5690)<<(x5691*x5692));

	if (t85 != 524272) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5693 = INT64_MAX;
	int8_t x5694 = INT8_MIN;
	volatile uint16_t x5695 = 20288U;
	int8_t x5696 = 0;
	int64_t t86 = -392606420676573LL;

	t86 = ((x5693+x5694)<<(x5695*x5696));

	if (t86 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5702 = 743853LLU;
	int32_t x5703 = 0;
	int64_t x5704 = -790471223413496342LL;
	uint64_t t87 = 5239316494418471537LLU;

	t87 = ((x5701+x5702)<<(x5703*x5704));

	if (t87 != 743852LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x5749 = 273884U;
	int8_t x5750 = INT8_MAX;
	volatile uint8_t x5751 = UINT8_MAX;
	uint16_t x5752 = 0U;
	static volatile uint32_t t88 = 3450628U;

	t88 = ((x5749+x5750)<<(x5751*x5752));

	if (t88 != 274011U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x5797 = -1;
	uint64_t x5798 = UINT64_MAX;
	static int8_t x5799 = -1;
	uint64_t t89 = 156610829071262448LLU;

	t89 = ((x5797+x5798)<<(x5799*x5800));

	if (t89 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5873 = 0;
	volatile uint32_t x5874 = 2069397482U;
	int8_t x5875 = -1;

	t90 = ((x5873+x5874)<<(x5875*x5876));

	if (t90 != 2069397482U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x5885 = UINT16_MAX;
	int64_t x5886 = -1LL;
	int16_t x5887 = 0;
	uint32_t x5888 = 25529U;
	int64_t t91 = 0LL;

	t91 = ((x5885+x5886)<<(x5887*x5888));

	if (t91 != 65534LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6014 = INT16_MIN;
	uint8_t x6015 = 0U;
	int8_t x6016 = INT8_MAX;

	t92 = ((x6013+x6014)<<(x6015*x6016));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6089 = 3760;
	static volatile uint32_t x6090 = UINT32_MAX;
	int16_t x6091 = 0;
	uint32_t t93 = 16U;

	t93 = ((x6089+x6090)<<(x6091*x6092));

	if (t93 != 3759U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x6161 = -1;
	static volatile uint64_t x6162 = 255004005802LLU;
	static volatile int8_t x6164 = 31;
	static uint64_t t94 = 10756832LLU;

	t94 = ((x6161+x6162)<<(x6163*x6164));

	if (t94 != 12661354494567645184LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6213 = 0U;
	uint64_t x6214 = UINT64_MAX;
	uint8_t x6215 = 11U;
	volatile uint64_t t95 = 607297113530LLU;

	t95 = ((x6213+x6214)<<(x6215*x6216));

	if (t95 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6242 = INT8_MIN;
	volatile int16_t x6243 = -1;
	uint64_t x6244 = UINT64_MAX;
	uint64_t t96 = 46850363113503LLU;

	t96 = ((x6241+x6242)<<(x6243*x6244));

	if (t96 != 244994517272LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6345 = 4;
	static uint64_t x6346 = 4593386LLU;
	volatile int32_t x6347 = -47460360;
	volatile int8_t x6348 = 0;
	static uint64_t t97 = 20819327387LLU;

	t97 = ((x6345+x6346)<<(x6347*x6348));

	if (t97 != 4593390LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6413 = 1182LL;
	uint8_t x6414 = 20U;
	static uint32_t x6415 = 55U;
	int64_t t98 = 78850582134945LL;

	t98 = ((x6413+x6414)<<(x6415*x6416));

	if (t98 != 1202LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6441 = 18U;
	static int64_t x6442 = -1LL;
	uint64_t x6443 = UINT64_MAX;
	volatile int64_t t99 = -213204LL;

	t99 = ((x6441+x6442)<<(x6443*x6444));

	if (t99 != 34LL) { NG(); } else { ; }
	
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

