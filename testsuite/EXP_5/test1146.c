#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t2 = 1738777901U;
int16_t x316 = -1;
uint8_t x343 = 7U;
uint16_t x352 = UINT16_MAX;
volatile int32_t t13 = 19267445;
volatile int64_t x516 = 930472LL;
uint8_t x555 = 15U;
volatile int64_t t15 = 258608402882LL;
uint32_t x591 = 0U;
static uint32_t x615 = 28U;
int64_t t18 = -1LL;
uint16_t x798 = UINT16_MAX;
int32_t t22 = 13;
int16_t x814 = 25;
int32_t t23 = INT32_MIN;
static int16_t x949 = -965;
int16_t x1031 = 1;
volatile int32_t x1050 = 144;
volatile uint64_t t28 = 444551253LLU;
static int8_t x1245 = 0;
static uint16_t x1282 = UINT16_MAX;
static int32_t x1284 = INT32_MAX;
int32_t t30 = 19980303;
uint8_t x1483 = 4U;
uint64_t t34 = 1234096120549609LLU;
volatile int64_t t37 = -31LL;
uint64_t x1742 = UINT64_MAX;
uint16_t x1743 = 2U;
uint64_t t38 = 4572321LLU;
volatile uint16_t x1919 = 10U;
volatile int64_t t41 = 30269480357390158LL;
static volatile uint64_t t43 = 1046127763847217216LLU;
volatile int8_t x2133 = -1;
volatile int32_t t44 = 420;
int64_t x2228 = -17LL;
int64_t x2261 = INT64_MIN;
volatile uint32_t x2345 = 390850439U;
int32_t x2396 = 28195498;
int16_t x2430 = INT16_MAX;
int8_t x2431 = 21;
uint32_t t51 = 8308U;
uint8_t x2767 = 6U;
int32_t x2940 = INT32_MIN;
static volatile int64_t x3081 = INT64_MIN;
uint32_t x3082 = 6U;
uint8_t x3106 = 0U;
uint16_t x3107 = 0U;
static int32_t x3137 = -1;
volatile uint16_t x3139 = 2U;
int32_t x3298 = INT32_MAX;
static int16_t x3300 = 0;
int8_t x3373 = INT8_MAX;
int16_t x3376 = -12;
uint32_t t61 = UINT32_MAX;
static int16_t x3489 = INT16_MIN;
volatile uint32_t x3528 = 198U;
volatile uint64_t x3618 = UINT64_MAX;
static int8_t x3651 = 11;
volatile uint8_t x3667 = 6U;
static uint16_t x3726 = 8190U;
volatile int64_t x3728 = 165800LL;
volatile int32_t t71 = -3978;
int32_t t74 = -15959875;
static volatile uint8_t x4130 = 1U;
int16_t x4132 = 24;
volatile uint32_t x4236 = 5U;
uint16_t x4451 = 2U;
int32_t x4605 = -129159;
uint8_t x5127 = 12U;
volatile int32_t t83 = -48506649;
volatile int64_t x5182 = 61537331LL;
uint8_t x5375 = 6U;
static volatile uint8_t x5414 = 0U;
volatile int64_t t87 = INT64_MAX;
int16_t x5641 = -1;
volatile int32_t x5644 = INT32_MIN;
uint8_t x5699 = 2U;
int8_t x5700 = INT8_MIN;
volatile int64_t t90 = -3120429112725LL;
int16_t x5736 = INT16_MAX;
static int32_t t91 = 1;
int64_t t94 = -3LL;
int64_t x5989 = -1LL;
int64_t x5992 = -129419655545170LL;
int8_t x6127 = 0;
volatile int32_t x6128 = -1;
uint64_t t98 = 774724525080215591LLU;
volatile int8_t x6253 = -7;


void f0(void) {
	int8_t x157 = INT8_MAX;
	int16_t x158 = INT16_MAX;
	uint8_t x159 = 14U;
	int16_t x160 = -1;
	static volatile int32_t t0 = 3147;

	t0 = (x157-((x158>>x159)&x160));

	if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x185 = -4305591042468890217LL;
	int64_t x186 = INT64_MAX;
	static int8_t x187 = 0;
	uint32_t x188 = 17849U;
	static volatile int64_t t1 = 71472030114092LL;

	t1 = (x185-((x186>>x187)&x188));

	if (t1 != -4305591042468908066LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x205 = 477168U;
	uint32_t x206 = 46195U;
	uint32_t x207 = 15U;
	static int32_t x208 = -1;

	t2 = (x205-((x206>>x207)&x208));

	if (t2 != 477167U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 25U;
	int32_t x216 = INT32_MAX;
	uint32_t t3 = 5408U;

	t3 = (x213-((x214>>x215)&x216));

	if (t3 != 4294967168U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x225 = INT64_MAX;
	uint16_t x226 = 18U;
	uint8_t x227 = 23U;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x225-((x226>>x227)&x228));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x273 = -1;
	uint16_t x274 = 657U;
	uint8_t x275 = 16U;
	int32_t x276 = 4619458;
	int32_t t5 = 1095;

	t5 = (x273-((x274>>x275)&x276));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x309 = UINT8_MAX;
	static int16_t x310 = INT16_MAX;
	static uint8_t x311 = 6U;
	int8_t x312 = 0;
	int32_t t6 = 3;

	t6 = (x309-((x310>>x311)&x312));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x313 = INT64_MAX;
	int32_t x314 = 17523849;
	volatile uint32_t x315 = 1U;
	int64_t t7 = 464039465133475571LL;

	t7 = (x313-((x314>>x315)&x316));

	if (t7 != 9223372036846013883LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x341 = -1;
	uint32_t x342 = 3U;
	int64_t x344 = 14844686LL;
	static volatile int64_t t8 = -67270748720294LL;

	t8 = (x341-((x342>>x343)&x344));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x349 = UINT64_MAX;
	uint16_t x350 = 184U;
	volatile uint8_t x351 = 25U;
	static volatile uint64_t t9 = UINT64_MAX;

	t9 = (x349-((x350>>x351)&x352));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x381 = INT16_MIN;
	uint64_t x382 = 54862113LLU;
	uint64_t x383 = 1LLU;
	volatile int8_t x384 = 3;
	volatile uint64_t t10 = 3LLU;

	t10 = (x381-((x382>>x383)&x384));

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x405 = 1965843U;
	uint32_t x406 = 76U;
	int8_t x407 = 0;
	volatile uint16_t x408 = 0U;
	volatile uint32_t t11 = 192480104U;

	t11 = (x405-((x406>>x407)&x408));

	if (t11 != 1965843U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x421 = -1LL;
	volatile uint64_t x422 = UINT64_MAX;
	uint8_t x423 = 14U;
	int64_t x424 = -94776593LL;
	volatile uint64_t t12 = 15109LLU;

	t12 = (x421-((x422>>x423)&x424));

	if (t12 != 18445618173897485584LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x465 = 1;
	int32_t x466 = INT32_MAX;
	uint8_t x467 = 9U;
	int32_t x468 = 5;

	t13 = (x465-((x466>>x467)&x468));

	if (t13 != -4) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x513 = UINT8_MAX;
	int8_t x514 = 23;
	uint64_t x515 = 0LLU;
	volatile int64_t t14 = 43019711LL;

	t14 = (x513-((x514>>x515)&x516));

	if (t14 != 255LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x553 = INT16_MIN;
	uint16_t x554 = UINT16_MAX;
	volatile int64_t x556 = INT64_MIN;

	t15 = (x553-((x554>>x555)&x556));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x589 = 116576578211520LLU;
	uint8_t x590 = 88U;
	uint16_t x592 = 0U;
	static uint64_t t16 = 3943957LLU;

	t16 = (x589-((x590>>x591)&x592));

	if (t16 != 116576578211520LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x593 = INT8_MIN;
	int8_t x594 = INT8_MAX;
	volatile uint8_t x595 = 0U;
	static int32_t x596 = INT32_MIN;
	int32_t t17 = -6392052;

	t17 = (x593-((x594>>x595)&x596));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x613 = -355;
	volatile uint16_t x614 = 8416U;
	int64_t x616 = INT64_MIN;

	t18 = (x613-((x614>>x615)&x616));

	if (t18 != -355LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x617 = 221;
	volatile uint32_t x618 = 963U;
	static volatile int8_t x619 = 1;
	volatile uint8_t x620 = 6U;
	volatile uint32_t t19 = 343287U;

	t19 = (x617-((x618>>x619)&x620));

	if (t19 != 221U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x757 = -1;
	static int32_t x758 = 31410;
	uint16_t x759 = 1U;
	volatile uint8_t x760 = 1U;
	volatile int32_t t20 = 128001;

	t20 = (x757-((x758>>x759)&x760));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x769 = UINT64_MAX;
	int64_t x770 = INT64_MAX;
	volatile int8_t x771 = 1;
	volatile uint8_t x772 = UINT8_MAX;
	volatile uint64_t t21 = 18398717222994599LLU;

	t21 = (x769-((x770>>x771)&x772));

	if (t21 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x797 = INT8_MIN;
	uint32_t x799 = 0U;
	int32_t x800 = INT32_MIN;

	t22 = (x797-((x798>>x799)&x800));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x813 = INT32_MIN;
	int8_t x815 = 3;
	int8_t x816 = INT8_MIN;

	t23 = (x813-((x814>>x815)&x816));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x877 = UINT32_MAX;
	static volatile uint32_t x878 = 14823U;
	uint8_t x879 = 2U;
	int32_t x880 = INT32_MIN;
	static uint32_t t24 = UINT32_MAX;

	t24 = (x877-((x878>>x879)&x880));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x950 = INT32_MAX;
	static uint16_t x951 = 19U;
	int32_t x952 = 48641;
	volatile int32_t t25 = -4472;

	t25 = (x949-((x950>>x951)&x952));

	if (t25 != -4550) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1029 = 12884U;
	uint32_t x1030 = 394860U;
	static volatile int64_t x1032 = INT64_MAX;
	volatile int64_t t26 = 0LL;

	t26 = (x1029-((x1030>>x1031)&x1032));

	if (t26 != -184546LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1049 = INT32_MAX;
	static int16_t x1051 = 4;
	int64_t x1052 = INT64_MIN;
	int64_t t27 = 8654695533LL;

	t27 = (x1049-((x1050>>x1051)&x1052));

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1053 = 3796U;
	volatile uint64_t x1054 = 113848LLU;
	volatile int16_t x1055 = 6;
	int8_t x1056 = INT8_MIN;

	t28 = (x1053-((x1054>>x1055)&x1056));

	if (t28 != 2132LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1246 = UINT64_MAX;
	uint8_t x1247 = 2U;
	int32_t x1248 = INT32_MIN;
	static volatile uint64_t t29 = 1651119284573LLU;

	t29 = (x1245-((x1246>>x1247)&x1248));

	if (t29 != 13835058057429647360LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1281 = INT8_MIN;
	static volatile int8_t x1283 = 1;

	t30 = (x1281-((x1282>>x1283)&x1284));

	if (t30 != -32895) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1445 = 25U;
	uint8_t x1446 = 0U;
	static uint8_t x1447 = 0U;
	static int8_t x1448 = INT8_MAX;
	volatile int32_t t31 = 57;

	t31 = (x1445-((x1446>>x1447)&x1448));

	if (t31 != 25) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1481 = 1825085152892521LLU;
	uint64_t x1482 = UINT64_MAX;
	volatile int32_t x1484 = INT32_MAX;
	volatile uint64_t t32 = 155463449040866293LLU;

	t32 = (x1481-((x1482>>x1483)&x1484));

	if (t32 != 1825083005408874LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1533 = -1;
	static int32_t x1534 = 34888319;
	uint16_t x1535 = 1U;
	int32_t x1536 = INT32_MAX;
	volatile int32_t t33 = 1999;

	t33 = (x1533-((x1534>>x1535)&x1536));

	if (t33 != -17444160) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1585 = INT16_MIN;
	uint64_t x1586 = 35LLU;
	volatile int8_t x1587 = 58;
	int64_t x1588 = INT64_MAX;

	t34 = (x1585-((x1586>>x1587)&x1588));

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1657 = 53038092U;
	uint64_t x1658 = 558394626102749LLU;
	static uint32_t x1659 = 11U;
	uint16_t x1660 = 56U;
	uint64_t t35 = 1626LLU;

	t35 = (x1657-((x1658>>x1659)&x1660));

	if (t35 != 53038052LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1681 = INT16_MAX;
	uint64_t x1682 = 3453838LLU;
	int8_t x1683 = 58;
	int16_t x1684 = -14;
	uint64_t t36 = 188218308650LLU;

	t36 = (x1681-((x1682>>x1683)&x1684));

	if (t36 != 32767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1729 = INT64_MAX;
	volatile uint16_t x1730 = 12993U;
	uint16_t x1731 = 2U;
	int8_t x1732 = -1;

	t37 = (x1729-((x1730>>x1731)&x1732));

	if (t37 != 9223372036854772559LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1741 = INT8_MIN;
	int32_t x1744 = -3651;

	t38 = (x1741-((x1742>>x1743)&x1744));

	if (t38 != 13835058055282167235LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1789 = INT32_MIN;
	uint32_t x1790 = 209635482U;
	uint64_t x1791 = 14LLU;
	volatile uint8_t x1792 = 116U;
	static uint32_t t39 = 22938686U;

	t39 = (x1789-((x1790>>x1791)&x1792));

	if (t39 != 2147483536U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1917 = 81U;
	static uint16_t x1918 = 1U;
	uint32_t x1920 = 533011476U;
	uint32_t t40 = 36668279U;

	t40 = (x1917-((x1918>>x1919)&x1920));

	if (t40 != 81U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1929 = -536884LL;
	uint8_t x1930 = 1U;
	volatile int8_t x1931 = 5;
	int32_t x1932 = INT32_MIN;

	t41 = (x1929-((x1930>>x1931)&x1932));

	if (t41 != -536884LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2049 = 2937227179921198LLU;
	uint64_t x2050 = UINT64_MAX;
	uint8_t x2051 = 1U;
	int8_t x2052 = INT8_MIN;
	uint64_t t42 = 306LLU;

	t42 = (x2049-((x2050>>x2051)&x2052));

	if (t42 != 9226309264034697134LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2089 = INT16_MIN;
	static volatile uint64_t x2090 = 8256054LLU;
	uint32_t x2091 = 9U;
	int16_t x2092 = 171;

	t43 = (x2089-((x2090>>x2091)&x2092));

	if (t43 != 18446744073709518679LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2134 = 0U;
	uint8_t x2135 = 7U;
	volatile int16_t x2136 = -1;

	t44 = (x2133-((x2134>>x2135)&x2136));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2225 = -69;
	static volatile uint16_t x2226 = 0U;
	uint32_t x2227 = 27U;
	static int64_t t45 = -6989560556484606LL;

	t45 = (x2225-((x2226>>x2227)&x2228));

	if (t45 != -69LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2262 = UINT64_MAX;
	static uint16_t x2263 = 53U;
	int32_t x2264 = 0;
	volatile uint64_t t46 = 143313046843LLU;

	t46 = (x2261-((x2262>>x2263)&x2264));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2346 = 334U;
	int32_t x2347 = 1;
	int16_t x2348 = 392;
	static uint32_t t47 = 682367U;

	t47 = (x2345-((x2346>>x2347)&x2348));

	if (t47 != 390850311U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2393 = INT16_MIN;
	int8_t x2394 = INT8_MAX;
	int8_t x2395 = 3;
	int32_t t48 = -266863054;

	t48 = (x2393-((x2394>>x2395)&x2396));

	if (t48 != -32778) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2429 = -1LL;
	uint16_t x2432 = 0U;
	volatile int64_t t49 = 291063LL;

	t49 = (x2429-((x2430>>x2431)&x2432));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2469 = 0U;
	uint32_t x2470 = 678396U;
	int8_t x2471 = 8;
	static volatile int16_t x2472 = -293;
	volatile uint32_t t50 = 1689U;

	t50 = (x2469-((x2470>>x2471)&x2472));

	if (t50 != 4294964647U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x2749 = 96304271U;
	uint32_t x2750 = 176U;
	uint8_t x2751 = 1U;
	uint8_t x2752 = 0U;

	t51 = (x2749-((x2750>>x2751)&x2752));

	if (t51 != 96304271U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2765 = INT64_MAX;
	int16_t x2766 = INT16_MAX;
	uint64_t x2768 = 6LLU;
	volatile uint64_t t52 = 0LLU;

	t52 = (x2765-((x2766>>x2767)&x2768));

	if (t52 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2885 = INT64_MAX;
	int32_t x2886 = 638423079;
	volatile int16_t x2887 = 4;
	int32_t x2888 = 637242475;
	volatile int64_t t53 = -215242281341767LL;

	t53 = (x2885-((x2886>>x2887)&x2888));

	if (t53 != 9223372036848449533LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2937 = 12726964643347965LLU;
	uint64_t x2938 = UINT64_MAX;
	static uint8_t x2939 = 50U;
	volatile uint64_t t54 = 1951LLU;

	t54 = (x2937-((x2938>>x2939)&x2940));

	if (t54 != 12726964643347965LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x3083 = 3LLU;
	static uint32_t x3084 = 0U;
	int64_t t55 = INT64_MIN;

	t55 = (x3081-((x3082>>x3083)&x3084));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x3105 = 212926719471730LLU;
	int8_t x3108 = INT8_MIN;
	volatile uint64_t t56 = 6339062788LLU;

	t56 = (x3105-((x3106>>x3107)&x3108));

	if (t56 != 212926719471730LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3138 = 112U;
	int64_t x3140 = 165277857682LL;
	volatile int64_t t57 = 25LL;

	t57 = (x3137-((x3138>>x3139)&x3140));

	if (t57 != -17LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3297 = 94LL;
	static uint8_t x3299 = 23U;
	int64_t t58 = 12537LL;

	t58 = (x3297-((x3298>>x3299)&x3300));

	if (t58 != 94LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3345 = 1849LLU;
	int16_t x3346 = 1;
	int16_t x3347 = 0;
	int8_t x3348 = 7;
	uint64_t t59 = 1539LLU;

	t59 = (x3345-((x3346>>x3347)&x3348));

	if (t59 != 1848LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3374 = 1;
	int8_t x3375 = 0;
	static int32_t t60 = 326;

	t60 = (x3373-((x3374>>x3375)&x3376));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3469 = UINT32_MAX;
	uint32_t x3470 = 8518U;
	static volatile int64_t x3471 = 25LL;
	int8_t x3472 = INT8_MIN;

	t61 = (x3469-((x3470>>x3471)&x3472));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3490 = 3584320094445LLU;
	int8_t x3491 = 0;
	int32_t x3492 = INT32_MIN;
	uint64_t t62 = 177LLU;

	t62 = (x3489-((x3490>>x3491)&x3492));

	if (t62 != 18446740489559310336LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3525 = UINT64_MAX;
	int16_t x3526 = 596;
	uint8_t x3527 = 0U;
	volatile uint64_t t63 = 7801960986862817LLU;

	t63 = (x3525-((x3526>>x3527)&x3528));

	if (t63 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x3529 = 9974U;
	uint64_t x3530 = UINT64_MAX;
	int8_t x3531 = 0;
	int64_t x3532 = INT64_MAX;
	static uint64_t t64 = 9726622266908LLU;

	t64 = (x3529-((x3530>>x3531)&x3532));

	if (t64 != 9223372036854785783LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3545 = -1;
	static volatile int32_t x3546 = INT32_MAX;
	int8_t x3547 = 0;
	uint8_t x3548 = 58U;
	static int32_t t65 = -897;

	t65 = (x3545-((x3546>>x3547)&x3548));

	if (t65 != -59) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x3617 = 2U;
	volatile uint8_t x3619 = 1U;
	uint64_t x3620 = 3093734572959405LLU;
	static uint64_t t66 = 342381915274301145LLU;

	t66 = (x3617-((x3618>>x3619)&x3620));

	if (t66 != 18443650339136592213LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3649 = 264781154U;
	volatile int64_t x3650 = 481666999LL;
	volatile uint32_t x3652 = UINT32_MAX;
	int64_t t67 = -686697555076139047LL;

	t67 = (x3649-((x3650>>x3651)&x3652));

	if (t67 != 264545966LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x3665 = UINT32_MAX;
	uint64_t x3666 = 815770314732LLU;
	uint8_t x3668 = UINT8_MAX;
	uint64_t t68 = 7743026177490LLU;

	t68 = (x3665-((x3666>>x3667)&x3668));

	if (t68 != 4294967136LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3689 = INT32_MIN;
	int16_t x3690 = INT16_MAX;
	static uint16_t x3691 = 29U;
	volatile int64_t x3692 = INT64_MIN;
	int64_t t69 = 578568749196LL;

	t69 = (x3689-((x3690>>x3691)&x3692));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3725 = INT16_MIN;
	static uint64_t x3727 = 1LLU;
	volatile int64_t t70 = 570LL;

	t70 = (x3725-((x3726>>x3727)&x3728));

	if (t70 != -34728LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3825 = INT16_MIN;
	uint16_t x3826 = 58U;
	int16_t x3827 = 1;
	static int32_t x3828 = INT32_MIN;

	t71 = (x3825-((x3826>>x3827)&x3828));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4049 = INT8_MIN;
	int16_t x4050 = INT16_MAX;
	int8_t x4051 = 1;
	static volatile int64_t x4052 = INT64_MIN;
	int64_t t72 = 728607LL;

	t72 = (x4049-((x4050>>x4051)&x4052));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4097 = 3809407;
	uint16_t x4098 = UINT16_MAX;
	uint32_t x4099 = 3U;
	volatile uint8_t x4100 = 1U;
	static int32_t t73 = -18684020;

	t73 = (x4097-((x4098>>x4099)&x4100));

	if (t73 != 3809406) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4117 = 3U;
	static int32_t x4118 = 61382;
	uint8_t x4119 = 9U;
	int8_t x4120 = 47;

	t74 = (x4117-((x4118>>x4119)&x4120));

	if (t74 != -36) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4129 = 1;
	uint8_t x4131 = 21U;
	static volatile int32_t t75 = 25283495;

	t75 = (x4129-((x4130>>x4131)&x4132));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4233 = -5LL;
	int16_t x4234 = INT16_MAX;
	static uint16_t x4235 = 0U;
	int64_t t76 = 0LL;

	t76 = (x4233-((x4234>>x4235)&x4236));

	if (t76 != -10LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4449 = INT16_MAX;
	uint64_t x4450 = UINT64_MAX;
	int8_t x4452 = INT8_MIN;
	volatile uint64_t t77 = 51772630179805027LLU;

	t77 = (x4449-((x4450>>x4451)&x4452));

	if (t77 != 13835058055282196607LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4481 = INT64_MIN;
	uint8_t x4482 = 116U;
	static int8_t x4483 = 1;
	uint64_t x4484 = 89262425343LLU;
	uint64_t t78 = 885050585604500LLU;

	t78 = (x4481-((x4482>>x4483)&x4484));

	if (t78 != 9223372036854775750LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4521 = INT32_MAX;
	volatile int16_t x4522 = 3;
	static int32_t x4523 = 5;
	uint32_t x4524 = UINT32_MAX;
	static volatile uint32_t t79 = 40112U;

	t79 = (x4521-((x4522>>x4523)&x4524));

	if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4606 = INT32_MAX;
	volatile uint8_t x4607 = 0U;
	static int64_t x4608 = INT64_MIN;
	volatile int64_t t80 = 31218367893LL;

	t80 = (x4605-((x4606>>x4607)&x4608));

	if (t80 != -129159LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4901 = INT64_MAX;
	static volatile uint16_t x4902 = 3253U;
	static uint8_t x4903 = 1U;
	int16_t x4904 = INT16_MIN;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x4901-((x4902>>x4903)&x4904));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5013 = INT32_MAX;
	uint32_t x5014 = 927270U;
	static int8_t x5015 = 7;
	int16_t x5016 = -1;
	uint32_t t82 = 0U;

	t82 = (x5013-((x5014>>x5015)&x5016));

	if (t82 != 2147476403U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5125 = -3082;
	int16_t x5126 = INT16_MAX;
	volatile int16_t x5128 = INT16_MIN;

	t83 = (x5125-((x5126>>x5127)&x5128));

	if (t83 != -3082) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5181 = INT16_MIN;
	uint8_t x5183 = 28U;
	volatile uint64_t x5184 = UINT64_MAX;
	volatile uint64_t t84 = 18946047415217128LLU;

	t84 = (x5181-((x5182>>x5183)&x5184));

	if (t84 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x5273 = UINT16_MAX;
	volatile uint64_t x5274 = 208448304776926LLU;
	uint8_t x5275 = 2U;
	int16_t x5276 = -1;
	static uint64_t t85 = 11LLU;

	t85 = (x5273-((x5274>>x5275)&x5276));

	if (t85 != 18446691961633422920LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5373 = UINT8_MAX;
	int64_t x5374 = INT64_MAX;
	int16_t x5376 = INT16_MIN;
	static int64_t t86 = -79498276293444728LL;

	t86 = (x5373-((x5374>>x5375)&x5376));

	if (t86 != -144115188075822849LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x5413 = INT64_MAX;
	volatile uint16_t x5415 = 1U;
	volatile uint16_t x5416 = UINT16_MAX;

	t87 = (x5413-((x5414>>x5415)&x5416));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5525 = 419U;
	int64_t x5526 = INT64_MAX;
	static volatile uint32_t x5527 = 0U;
	volatile int8_t x5528 = INT8_MAX;
	int64_t t88 = -9893824762464312LL;

	t88 = (x5525-((x5526>>x5527)&x5528));

	if (t88 != 292LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5642 = 1261571U;
	volatile int64_t x5643 = 2LL;
	uint32_t t89 = UINT32_MAX;

	t89 = (x5641-((x5642>>x5643)&x5644));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5697 = -1;
	int64_t x5698 = INT64_MAX;

	t90 = (x5697-((x5698>>x5699)&x5700));

	if (t90 != -2305843009213693825LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5733 = -635282;
	volatile int32_t x5734 = 459489;
	uint8_t x5735 = 16U;

	t91 = (x5733-((x5734>>x5735)&x5736));

	if (t91 != -635289) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5769 = UINT16_MAX;
	static volatile uint16_t x5770 = 445U;
	uint8_t x5771 = 26U;
	uint16_t x5772 = UINT16_MAX;
	volatile int32_t t92 = 0;

	t92 = (x5769-((x5770>>x5771)&x5772));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5881 = INT32_MIN;
	uint8_t x5882 = UINT8_MAX;
	static uint8_t x5883 = 27U;
	int16_t x5884 = INT16_MAX;
	volatile int32_t t93 = INT32_MIN;

	t93 = (x5881-((x5882>>x5883)&x5884));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x5885 = -1LL;
	static volatile int64_t x5886 = INT64_MAX;
	uint16_t x5887 = 1U;
	uint32_t x5888 = 14985U;

	t94 = (x5885-((x5886>>x5887)&x5888));

	if (t94 != -14986LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5913 = 1300U;
	uint8_t x5914 = 12U;
	static int8_t x5915 = 0;
	int32_t x5916 = -108;
	volatile int32_t t95 = 114236122;

	t95 = (x5913-((x5914>>x5915)&x5916));

	if (t95 != 1296) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5990 = 773221137U;
	volatile uint64_t x5991 = 7LLU;
	int64_t t96 = -13106805556787LL;

	t96 = (x5989-((x5990>>x5991)&x5992));

	if (t96 != -4467847LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x6125 = -1;
	static int64_t x6126 = 31397959LL;
	static volatile int64_t t97 = 1981815106540226335LL;

	t97 = (x6125-((x6126>>x6127)&x6128));

	if (t97 != -31397960LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6241 = 4640U;
	volatile uint64_t x6242 = UINT64_MAX;
	volatile int8_t x6243 = 7;
	int16_t x6244 = -1;

	t98 = (x6241-((x6242>>x6243)&x6244));

	if (t98 != 18302628885633700385LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x6254 = 186;
	volatile int8_t x6255 = 30;
	uint64_t x6256 = UINT64_MAX;
	uint64_t t99 = 4079376523292LLU;

	t99 = (x6253-((x6254>>x6255)&x6256));

	if (t99 != 18446744073709551609LLU) { NG(); } else { ; }
	
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

