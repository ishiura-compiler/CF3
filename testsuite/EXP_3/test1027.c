#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x49 = INT32_MAX;
int32_t t0 = 99027;
volatile uint16_t x160 = 4U;
static int16_t x232 = 1;
int16_t x375 = INT16_MAX;
static int8_t x379 = INT8_MAX;
uint64_t x571 = UINT64_MAX;
uint32_t x599 = UINT32_MAX;
volatile int64_t t13 = 4254654975063471LL;
volatile int16_t x867 = 0;
int64_t t15 = -1088168690LL;
uint64_t x989 = 640780942542LLU;
int64_t x993 = INT64_MAX;
volatile int8_t x996 = 1;
volatile int64_t t18 = 43338811756431LL;
uint16_t x1001 = UINT16_MAX;
int8_t x1002 = INT8_MIN;
uint16_t x1004 = 1U;
int64_t x1126 = -1LL;
volatile uint8_t x1192 = 2U;
static volatile uint64_t t21 = 122899692912277143LLU;
int64_t x1207 = 57451510539LL;
uint64_t x1211 = 3923LLU;
static int32_t x1271 = 33090470;
int16_t x1277 = INT16_MAX;
uint32_t x1280 = 7U;
volatile int32_t t25 = -265746817;
volatile uint32_t x1283 = 36492U;
uint16_t x1303 = 306U;
static volatile uint64_t t28 = 950447302090074980LLU;
volatile uint8_t x1401 = 3U;
uint16_t x1402 = 6U;
volatile int8_t x1423 = INT8_MAX;
int8_t x1497 = INT8_MAX;
static int16_t x1498 = INT16_MAX;
static int8_t x1618 = -1;
int8_t x1664 = 1;
int64_t x1865 = -10532096600LL;
volatile uint8_t x1867 = 3U;
static volatile int32_t x1939 = 14744662;
int8_t x1940 = 3;
uint16_t x2053 = 3U;
uint64_t x2123 = UINT64_MAX;
int64_t x2281 = 87265637411LL;
volatile int64_t t42 = -1LL;
int64_t x2429 = 0LL;
uint16_t x2431 = 65U;
uint16_t x2432 = 21U;
uint32_t x2466 = 1U;
static uint16_t x2468 = 28U;
int64_t x2706 = INT64_MIN;
int32_t x2753 = INT32_MAX;
uint32_t x2907 = 2999042U;
uint16_t x2934 = 13427U;
static uint16_t x2936 = 4U;
int16_t x3086 = 3;
uint64_t x3234 = 2606299LLU;
static uint32_t x3298 = UINT32_MAX;
static volatile uint32_t t60 = 1211679648U;
volatile int64_t t61 = 3LL;
int64_t t62 = INT64_MIN;
int8_t x3536 = 5;
uint64_t x3593 = UINT64_MAX;
int32_t x3621 = -8253;
volatile int64_t t66 = 38LL;
static int16_t x3680 = 5;
int8_t x3697 = 1;
int8_t x3790 = INT8_MIN;
uint16_t x3791 = UINT16_MAX;
int64_t x3894 = INT64_MAX;
volatile uint8_t x3895 = UINT8_MAX;
volatile uint8_t x4047 = 61U;
int64_t x4093 = INT64_MIN;
int64_t x4193 = 56168974LL;
uint8_t x4270 = 1U;
int8_t x4274 = -19;
int8_t x4292 = 1;
int16_t x4342 = 22;
int32_t t82 = -193;
volatile int32_t t83 = -1;
static int64_t x4369 = 671647861676555799LL;
int16_t x4430 = 0;
static volatile uint16_t x4493 = UINT16_MAX;
volatile uint32_t t87 = 1U;
volatile int64_t x4665 = -1492632594LL;
uint8_t x4668 = 12U;
int64_t t89 = -183121LL;
int32_t t92 = -518;
int32_t x4847 = INT32_MAX;
int16_t x4885 = INT16_MIN;
static volatile int8_t x4886 = -1;
int64_t x4921 = 12356552860505791LL;
int16_t x4922 = -394;
volatile int32_t x4987 = 2432;


void f0(void) {
	int32_t x50 = -1;
	int8_t x51 = INT8_MAX;
	volatile int8_t x52 = 15;

	t0 = ((x49+x50)^(x51>>x52));

	if (t0 != 2147483646) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x157 = -1LL;
	int8_t x158 = -1;
	static int64_t x159 = INT64_MAX;
	int64_t t1 = -2052668LL;

	t1 = ((x157+x158)^(x159>>x160));

	if (t1 != -576460752303423487LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x177 = INT8_MIN;
	uint32_t x178 = UINT32_MAX;
	volatile uint8_t x179 = UINT8_MAX;
	uint64_t x180 = 4LLU;
	volatile uint32_t t2 = 5U;

	t2 = ((x177+x178)^(x179>>x180));

	if (t2 != 4294967152U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x229 = -726LL;
	int32_t x230 = -3881318;
	uint16_t x231 = 5727U;
	int64_t t3 = -726170613530715LL;

	t3 = ((x229+x230)^(x231>>x232));

	if (t3 != -3880725LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x373 = INT8_MAX;
	uint32_t x374 = 19U;
	int16_t x376 = 0;
	uint32_t t4 = 40799482U;

	t4 = ((x373+x374)^(x375>>x376));

	if (t4 != 32621U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x377 = -475;
	volatile int64_t x378 = 1LL;
	uint8_t x380 = 2U;
	int64_t t5 = -2LL;

	t5 = ((x377+x378)^(x379>>x380));

	if (t5 != -455LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x413 = -1;
	volatile int8_t x414 = -42;
	static volatile int32_t x415 = INT32_MAX;
	int32_t x416 = 9;
	int32_t t6 = 35604605;

	t6 = ((x413+x414)^(x415>>x416));

	if (t6 != -4194262) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x569 = INT8_MIN;
	int64_t x570 = -920384950242792LL;
	static uint16_t x572 = 4U;
	volatile uint64_t t7 = 20432256718930LLU;

	t7 = ((x569+x570)^(x571>>x572));

	if (t7 != 17294742954052947559LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x597 = -1;
	uint8_t x598 = 69U;
	static uint8_t x600 = 14U;
	volatile uint32_t t8 = 1171U;

	t8 = ((x597+x598)^(x599>>x600));

	if (t8 != 262075U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x645 = INT16_MIN;
	int32_t x646 = 26694693;
	uint8_t x647 = 15U;
	int16_t x648 = 11;
	volatile int32_t t9 = -296454632;

	t9 = ((x645+x646)^(x647>>x648));

	if (t9 != 26661925) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x677 = INT16_MIN;
	uint8_t x678 = UINT8_MAX;
	uint16_t x679 = 0U;
	uint64_t x680 = 2LLU;
	volatile int32_t t10 = 3970;

	t10 = ((x677+x678)^(x679>>x680));

	if (t10 != -32513) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x689 = UINT64_MAX;
	volatile int16_t x690 = INT16_MAX;
	uint64_t x691 = 1511642LLU;
	static uint16_t x692 = 1U;
	volatile uint64_t t11 = 1LLU;

	t11 = ((x689+x690)^(x691>>x692));

	if (t11 != 784275LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x709 = 1U;
	static volatile int8_t x710 = 1;
	int64_t x711 = 255162459317484239LL;
	volatile uint32_t x712 = 2U;
	int64_t t12 = -33417401202LL;

	t12 = ((x709+x710)^(x711>>x712));

	if (t12 != 63790614829371057LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x745 = -1;
	volatile int16_t x746 = INT16_MAX;
	static int64_t x747 = INT64_MAX;
	static uint8_t x748 = 3U;

	t13 = ((x745+x746)^(x747>>x748));

	if (t13 != 1152921504606814209LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x749 = 37;
	uint64_t x750 = 17837986LLU;
	volatile uint16_t x751 = UINT16_MAX;
	int8_t x752 = 1;
	static volatile uint64_t t14 = 112429LLU;

	t14 = ((x749+x750)^(x751>>x752));

	if (t14 != 17846328LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x865 = 14U;
	int64_t x866 = INT64_MIN;
	static uint32_t x868 = 10U;

	t15 = ((x865+x866)^(x867>>x868));

	if (t15 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x929 = UINT64_MAX;
	volatile int16_t x930 = INT16_MAX;
	static uint64_t x931 = UINT64_MAX;
	static uint8_t x932 = 1U;
	uint64_t t16 = 533255803427448495LLU;

	t16 = ((x929+x930)^(x931>>x932));

	if (t16 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x990 = INT16_MIN;
	static volatile uint8_t x991 = UINT8_MAX;
	uint16_t x992 = 3U;
	static uint64_t t17 = 1LLU;

	t17 = ((x989+x990)^(x991>>x992));

	if (t17 != 640780909777LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x994 = -1LL;
	static uint8_t x995 = UINT8_MAX;

	t18 = ((x993+x994)^(x995>>x996));

	if (t18 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x1003 = UINT8_MAX;
	static int32_t t19 = -565;

	t19 = ((x1001+x1002)^(x1003>>x1004));

	if (t19 != 65280) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1125 = -1LL;
	int8_t x1127 = 1;
	int8_t x1128 = 1;
	volatile int64_t t20 = 3001744085LL;

	t20 = ((x1125+x1126)^(x1127>>x1128));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1189 = 44327U;
	int32_t x1190 = INT32_MAX;
	uint64_t x1191 = 347LLU;

	t21 = ((x1189+x1190)^(x1191>>x1192));

	if (t21 != 2147528048LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1205 = INT8_MAX;
	static uint8_t x1206 = 1U;
	uint32_t x1208 = 29U;
	int64_t t22 = 2593662829226LL;

	t22 = ((x1205+x1206)^(x1207>>x1208));

	if (t22 != 235LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1209 = 30;
	static int16_t x1210 = 751;
	static uint8_t x1212 = 0U;
	volatile uint64_t t23 = 25692LLU;

	t23 = ((x1209+x1210)^(x1211>>x1212));

	if (t23 != 3166LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1269 = INT8_MIN;
	int8_t x1270 = INT8_MAX;
	int16_t x1272 = 1;
	volatile int32_t t24 = -50659;

	t24 = ((x1269+x1270)^(x1271>>x1272));

	if (t24 != -16545236) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1278 = INT32_MIN;
	uint16_t x1279 = 14736U;

	t25 = ((x1277+x1278)^(x1279>>x1280));

	if (t25 != -2147450996) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1281 = UINT16_MAX;
	int8_t x1282 = -1;
	static uint8_t x1284 = 4U;
	volatile uint32_t t26 = 37U;

	t26 = ((x1281+x1282)^(x1283>>x1284));

	if (t26 != 63254U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1301 = UINT16_MAX;
	uint16_t x1302 = 67U;
	int8_t x1304 = 2;
	int32_t t27 = 203;

	t27 = ((x1301+x1302)^(x1303>>x1304));

	if (t27 != 65550) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1333 = 5U;
	static int16_t x1334 = INT16_MIN;
	static uint64_t x1335 = UINT64_MAX;
	static uint8_t x1336 = 48U;

	t28 = ((x1333+x1334)^(x1335>>x1336));

	if (t28 != 18446744073709518842LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1403 = 1935924145U;
	int8_t x1404 = 1;
	static volatile uint32_t t29 = 1926891U;

	t29 = ((x1401+x1402)^(x1403>>x1404));

	if (t29 != 967962065U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1421 = 22U;
	volatile uint64_t x1422 = UINT64_MAX;
	uint16_t x1424 = 1U;
	static volatile uint64_t t30 = 30752262576484LLU;

	t30 = ((x1421+x1422)^(x1423>>x1424));

	if (t30 != 42LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1437 = 9169;
	uint32_t x1438 = 47370U;
	uint16_t x1439 = 28627U;
	static int8_t x1440 = 1;
	static uint32_t t31 = 4101368U;

	t31 = ((x1437+x1438)^(x1439>>x1440));

	if (t31 != 60210U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1499 = INT16_MAX;
	volatile uint8_t x1500 = 0U;
	static volatile int32_t t32 = 75892987;

	t32 = ((x1497+x1498)^(x1499>>x1500));

	if (t32 != 65409) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x1617 = 3LLU;
	static uint16_t x1619 = 5U;
	int64_t x1620 = 2LL;
	static volatile uint64_t t33 = 666722028419LLU;

	t33 = ((x1617+x1618)^(x1619>>x1620));

	if (t33 != 3LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1661 = 194;
	uint64_t x1662 = UINT64_MAX;
	static uint64_t x1663 = 11474LLU;
	volatile uint64_t t34 = 11576435159750LLU;

	t34 = ((x1661+x1662)^(x1663>>x1664));

	if (t34 != 5800LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1669 = INT16_MAX;
	static int64_t x1670 = 5LL;
	uint16_t x1671 = 1990U;
	uint8_t x1672 = 1U;
	volatile int64_t t35 = 69575878715984LL;

	t35 = ((x1669+x1670)^(x1671>>x1672));

	if (t35 != 33767LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1866 = 0;
	static uint8_t x1868 = 5U;
	volatile int64_t t36 = 0LL;

	t36 = ((x1865+x1866)^(x1867>>x1868));

	if (t36 != -10532096600LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1937 = -1;
	uint32_t x1938 = UINT32_MAX;
	volatile uint32_t t37 = 102568741U;

	t37 = ((x1937+x1938)^(x1939>>x1940));

	if (t37 != 4293124212U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2054 = INT16_MAX;
	int32_t x2055 = INT32_MAX;
	int32_t x2056 = 6;
	static volatile int32_t t38 = 79460895;

	t38 = ((x2053+x2054)^(x2055>>x2056));

	if (t38 != 33521661) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2121 = UINT8_MAX;
	int8_t x2122 = INT8_MIN;
	int32_t x2124 = 30;
	volatile uint64_t t39 = 3368957416140739020LLU;

	t39 = ((x2121+x2122)^(x2123>>x2124));

	if (t39 != 17179869056LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2181 = -1243264726217LL;
	uint64_t x2182 = 51525658566LLU;
	volatile uint8_t x2183 = 3U;
	volatile int8_t x2184 = 1;
	static uint64_t t40 = 1779474LLU;

	t40 = ((x2181+x2182)^(x2183>>x2184));

	if (t40 != 18446742881970483964LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2221 = -1;
	static uint8_t x2222 = 122U;
	uint64_t x2223 = UINT64_MAX;
	volatile uint8_t x2224 = 15U;
	static volatile uint64_t t41 = 120752137234351868LLU;

	t41 = ((x2221+x2222)^(x2223>>x2224));

	if (t41 != 562949953421190LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2282 = -1;
	uint32_t x2283 = 325188U;
	uint16_t x2284 = 14U;

	t42 = ((x2281+x2282)^(x2283>>x2284));

	if (t42 != 87265637425LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2325 = 0LLU;
	int8_t x2326 = INT8_MAX;
	static uint32_t x2327 = 612178U;
	uint8_t x2328 = 0U;
	uint64_t t43 = 5206575LLU;

	t43 = ((x2325+x2326)^(x2327>>x2328));

	if (t43 != 612141LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2413 = 14U;
	int32_t x2414 = INT32_MIN;
	int8_t x2415 = INT8_MAX;
	uint32_t x2416 = 5U;
	volatile int32_t t44 = -110716035;

	t44 = ((x2413+x2414)^(x2415>>x2416));

	if (t44 != -2147483635) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2430 = 1U;
	volatile int64_t t45 = 11044802602502LL;

	t45 = ((x2429+x2430)^(x2431>>x2432));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2465 = 340U;
	uint64_t x2467 = UINT64_MAX;
	volatile uint64_t t46 = 0LLU;

	t46 = ((x2465+x2466)^(x2467>>x2468));

	if (t46 != 68719476394LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2537 = INT8_MAX;
	int64_t x2538 = 18729089141LL;
	volatile int64_t x2539 = 70330176354LL;
	static int64_t x2540 = 7LL;
	static int64_t t47 = 9064109155587LL;

	t47 = ((x2537+x2538)^(x2539>>x2540));

	if (t47 != 19270154834LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x2633 = -1;
	uint16_t x2634 = 133U;
	int64_t x2635 = 1226110624769784LL;
	static uint16_t x2636 = 11U;
	int64_t t48 = 16830067449LL;

	t48 = ((x2633+x2634)^(x2635>>x2636));

	if (t48 != 598686828368LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2705 = 0U;
	int32_t x2707 = 3191;
	static uint8_t x2708 = 4U;
	volatile int64_t t49 = -1947599772423908LL;

	t49 = ((x2705+x2706)^(x2707>>x2708));

	if (t49 != -9223372036854775609LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2754 = -1;
	volatile uint8_t x2755 = 13U;
	uint8_t x2756 = 16U;
	volatile int32_t t50 = 118572904;

	t50 = ((x2753+x2754)^(x2755>>x2756));

	if (t50 != 2147483646) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2869 = INT32_MIN;
	volatile int16_t x2870 = INT16_MAX;
	uint16_t x2871 = UINT16_MAX;
	uint8_t x2872 = 0U;
	int32_t t51 = 23406;

	t51 = ((x2869+x2870)^(x2871>>x2872));

	if (t51 != -2147450880) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x2901 = 10411LLU;
	volatile int16_t x2902 = INT16_MIN;
	uint64_t x2903 = 3641897389036553954LLU;
	uint16_t x2904 = 1U;
	uint64_t t52 = 4019323788131578LLU;

	t52 = ((x2901+x2902)^(x2903>>x2904));

	if (t52 != 16625795379191253978LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2905 = -1;
	int16_t x2906 = -1;
	volatile uint8_t x2908 = 4U;
	uint32_t t53 = 15874U;

	t53 = ((x2905+x2906)^(x2907>>x2908));

	if (t53 != 4294779854U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2933 = 104U;
	uint16_t x2935 = 34U;
	int32_t t54 = 92647521;

	t54 = ((x2933+x2934)^(x2935>>x2936));

	if (t54 != 13529) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x3081 = -1;
	volatile int64_t x3082 = 1054480850533LL;
	volatile uint8_t x3083 = 0U;
	uint8_t x3084 = 10U;
	volatile int64_t t55 = 48476200357LL;

	t55 = ((x3081+x3082)^(x3083>>x3084));

	if (t55 != 1054480850532LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3085 = INT8_MIN;
	volatile uint8_t x3087 = 21U;
	volatile int8_t x3088 = 0;
	int32_t t56 = 0;

	t56 = ((x3085+x3086)^(x3087>>x3088));

	if (t56 != -106) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3193 = -420;
	int64_t x3194 = -125677878128132LL;
	uint64_t x3195 = UINT64_MAX;
	volatile uint64_t x3196 = 41LLU;
	volatile uint64_t t57 = 40844881LLU;

	t57 = ((x3193+x3194)^(x3195>>x3196));

	if (t57 != 18446618395832496039LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3221 = 22567U;
	int32_t x3222 = 0;
	int64_t x3223 = INT64_MAX;
	static int8_t x3224 = 0;
	static int64_t t58 = -13LL;

	t58 = ((x3221+x3222)^(x3223>>x3224));

	if (t58 != 9223372036854753240LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3233 = -3;
	static uint16_t x3235 = UINT16_MAX;
	uint8_t x3236 = 2U;
	volatile uint64_t t59 = 12647LLU;

	t59 = ((x3233+x3234)^(x3235>>x3236));

	if (t59 != 2620199LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3297 = 110U;
	static uint32_t x3299 = UINT32_MAX;
	uint8_t x3300 = 20U;

	t60 = ((x3297+x3298)^(x3299>>x3300));

	if (t60 != 3986U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3433 = 15;
	uint32_t x3434 = 125854U;
	int64_t x3435 = 7612075134LL;
	int8_t x3436 = 0;

	t61 = ((x3433+x3434)^(x3435>>x3436));

	if (t61 != 7612065747LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3477 = INT64_MIN;
	static volatile int32_t x3478 = INT32_MAX;
	int32_t x3479 = INT32_MAX;
	static int8_t x3480 = 0;

	t62 = ((x3477+x3478)^(x3479>>x3480));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x3533 = UINT32_MAX;
	static int8_t x3534 = 3;
	static uint32_t x3535 = 3U;
	static volatile uint32_t t63 = 402U;

	t63 = ((x3533+x3534)^(x3535>>x3536));

	if (t63 != 2U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3569 = 45U;
	static volatile int8_t x3570 = 0;
	volatile uint16_t x3571 = 2U;
	int8_t x3572 = 1;
	static volatile int32_t t64 = -116072;

	t64 = ((x3569+x3570)^(x3571>>x3572));

	if (t64 != 44) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3594 = INT32_MIN;
	int8_t x3595 = INT8_MAX;
	volatile int8_t x3596 = 0;
	volatile uint64_t t65 = 28004432LLU;

	t65 = ((x3593+x3594)^(x3595>>x3596));

	if (t65 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3622 = -8;
	int64_t x3623 = INT64_MAX;
	uint8_t x3624 = 23U;

	t66 = ((x3621+x3622)^(x3623>>x3624));

	if (t66 != -1099511619516LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x3677 = 203424780681880461LL;
	int8_t x3678 = 0;
	int32_t x3679 = 0;
	volatile int64_t t67 = -287731234569326743LL;

	t67 = ((x3677+x3678)^(x3679>>x3680));

	if (t67 != 203424780681880461LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3698 = INT8_MIN;
	uint16_t x3699 = 1U;
	volatile uint8_t x3700 = 14U;
	int32_t t68 = 0;

	t68 = ((x3697+x3698)^(x3699>>x3700));

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3713 = 315LLU;
	uint8_t x3714 = UINT8_MAX;
	volatile uint32_t x3715 = 8917609U;
	int16_t x3716 = 0;
	volatile uint64_t t69 = 22LLU;

	t69 = ((x3713+x3714)^(x3715>>x3716));

	if (t69 != 8917075LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x3729 = 2;
	uint32_t x3730 = 352U;
	int8_t x3731 = 0;
	volatile uint8_t x3732 = 3U;
	uint32_t t70 = 652988U;

	t70 = ((x3729+x3730)^(x3731>>x3732));

	if (t70 != 354U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3789 = INT8_MIN;
	uint16_t x3792 = 7U;
	int32_t t71 = -1;

	t71 = ((x3789+x3790)^(x3791>>x3792));

	if (t71 != -257) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x3841 = INT8_MAX;
	uint16_t x3842 = UINT16_MAX;
	uint32_t x3843 = 9210U;
	uint8_t x3844 = 4U;
	volatile uint32_t t72 = 16260069U;

	t72 = ((x3841+x3842)^(x3843>>x3844));

	if (t72 != 66113U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x3865 = 2260U;
	int8_t x3866 = -1;
	uint64_t x3867 = 4002LLU;
	uint16_t x3868 = 0U;
	uint64_t t73 = 44LLU;

	t73 = ((x3865+x3866)^(x3867>>x3868));

	if (t73 != 1905LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3893 = 1765LLU;
	uint32_t x3896 = 30U;
	volatile uint64_t t74 = 3LLU;

	t74 = ((x3893+x3894)^(x3895>>x3896));

	if (t74 != 9223372036854777572LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x4045 = UINT64_MAX;
	uint64_t x4046 = 7740961807213193LLU;
	uint8_t x4048 = 6U;
	uint64_t t75 = 2905730082840803LLU;

	t75 = ((x4045+x4046)^(x4047>>x4048));

	if (t75 != 7740961807213192LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4061 = UINT64_MAX;
	static uint16_t x4062 = 17683U;
	int16_t x4063 = 104;
	int8_t x4064 = 0;
	static volatile uint64_t t76 = 45724464534LLU;

	t76 = ((x4061+x4062)^(x4063>>x4064));

	if (t76 != 17786LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4094 = 16653350U;
	volatile int32_t x4095 = INT32_MAX;
	volatile uint8_t x4096 = 3U;
	static int64_t t77 = 482315LL;

	t77 = ((x4093+x4094)^(x4095>>x4096));

	if (t77 != -9223372036602993703LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4194 = 557;
	uint16_t x4195 = 173U;
	uint64_t x4196 = 18LLU;
	volatile int64_t t78 = 398356LL;

	t78 = ((x4193+x4194)^(x4195>>x4196));

	if (t78 != 56169531LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4269 = UINT8_MAX;
	uint8_t x4271 = 1U;
	int8_t x4272 = 0;
	volatile int32_t t79 = -173164884;

	t79 = ((x4269+x4270)^(x4271>>x4272));

	if (t79 != 257) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4273 = INT16_MAX;
	static int16_t x4275 = 3727;
	int16_t x4276 = 11;
	int32_t t80 = 8;

	t80 = ((x4273+x4274)^(x4275>>x4276));

	if (t80 != 32749) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x4289 = 514468645578440760LLU;
	static uint32_t x4290 = 411U;
	static uint8_t x4291 = 87U;
	volatile uint64_t t81 = 1928274081577933LLU;

	t81 = ((x4289+x4290)^(x4291>>x4292));

	if (t81 != 514468645578441208LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x4341 = UINT16_MAX;
	static volatile int32_t x4343 = INT32_MAX;
	uint8_t x4344 = 1U;

	t82 = ((x4341+x4342)^(x4343>>x4344));

	if (t82 != 1073676266) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x4365 = 10594U;
	static int32_t x4366 = -2304354;
	uint16_t x4367 = UINT16_MAX;
	static volatile uint16_t x4368 = 2U;

	t83 = ((x4365+x4366)^(x4367>>x4368));

	if (t83 != -2277377) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x4370 = INT32_MIN;
	uint8_t x4371 = 32U;
	uint32_t x4372 = 12U;
	static int64_t t84 = -2510233664129079857LL;

	t84 = ((x4369+x4370)^(x4371>>x4372));

	if (t84 != 671647859529072151LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4393 = 22;
	static volatile int32_t x4394 = -1;
	uint32_t x4395 = UINT32_MAX;
	static int8_t x4396 = 0;
	volatile uint32_t t85 = 27335U;

	t85 = ((x4393+x4394)^(x4395>>x4396));

	if (t85 != 4294967274U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x4429 = -1;
	int32_t x4431 = INT32_MAX;
	volatile int8_t x4432 = 6;
	volatile int32_t t86 = 2070851;

	t86 = ((x4429+x4430)^(x4431>>x4432));

	if (t86 != -33554432) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4494 = 9222U;
	int8_t x4495 = 37;
	uint32_t x4496 = 27U;

	t87 = ((x4493+x4494)^(x4495>>x4496));

	if (t87 != 74757U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4505 = INT8_MAX;
	volatile uint64_t x4506 = 5521558026750106556LLU;
	int16_t x4507 = INT16_MAX;
	int32_t x4508 = 1;
	uint64_t t88 = 3557LLU;

	t88 = ((x4505+x4506)^(x4507>>x4508));

	if (t88 != 5521558026750108612LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4666 = 1;
	static uint16_t x4667 = UINT16_MAX;

	t89 = ((x4665+x4666)^(x4667>>x4668));

	if (t89 != -1492632608LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4681 = 2;
	int16_t x4682 = 905;
	uint8_t x4683 = UINT8_MAX;
	int8_t x4684 = 1;
	int32_t t90 = -231598038;

	t90 = ((x4681+x4682)^(x4683>>x4684));

	if (t90 != 1012) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4697 = UINT64_MAX;
	int32_t x4698 = INT32_MAX;
	static uint64_t x4699 = 5256623805263629947LLU;
	uint8_t x4700 = 2U;
	static volatile uint64_t t91 = 955397409761LLU;

	t91 = ((x4697+x4698)^(x4699>>x4700));

	if (t91 != 1314155953408019552LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4805 = UINT8_MAX;
	int8_t x4806 = INT8_MAX;
	int16_t x4807 = INT16_MAX;
	int8_t x4808 = 0;

	t92 = ((x4805+x4806)^(x4807>>x4808));

	if (t92 != 32385) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4845 = INT32_MIN;
	int8_t x4846 = 21;
	uint8_t x4848 = 24U;
	static int32_t t93 = 3047;

	t93 = ((x4845+x4846)^(x4847>>x4848));

	if (t93 != -2147483542) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x4887 = UINT16_MAX;
	uint8_t x4888 = 3U;
	int32_t t94 = -498109529;

	t94 = ((x4885+x4886)^(x4887>>x4888));

	if (t94 != -40960) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4923 = INT64_MAX;
	volatile uint8_t x4924 = 12U;
	volatile int64_t t95 = 58172796712906LL;

	t95 = ((x4921+x4922)^(x4923>>x4924));

	if (t95 != 12413245090032330LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x4949 = 0LLU;
	int8_t x4950 = INT8_MAX;
	uint8_t x4951 = 0U;
	int8_t x4952 = 1;
	volatile uint64_t t96 = 2981849LLU;

	t96 = ((x4949+x4950)^(x4951>>x4952));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4961 = -1;
	static uint16_t x4962 = 2U;
	volatile int64_t x4963 = INT64_MAX;
	volatile uint16_t x4964 = 12U;
	volatile int64_t t97 = 400176714890LL;

	t97 = ((x4961+x4962)^(x4963>>x4964));

	if (t97 != 2251799813685246LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x4985 = INT16_MAX;
	int8_t x4986 = -1;
	int8_t x4988 = 0;
	int32_t t98 = 59521;

	t98 = ((x4985+x4986)^(x4987>>x4988));

	if (t98 != 30334) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4997 = -5;
	int64_t x4998 = -1LL;
	int32_t x4999 = 285771690;
	int8_t x5000 = 0;
	volatile int64_t t99 = -8113520537459LL;

	t99 = ((x4997+x4998)^(x4999>>x5000));

	if (t99 != -285771696LL) { NG(); } else { ; }
	
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

