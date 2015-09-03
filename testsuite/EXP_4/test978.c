#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x54 = 993U;
uint32_t t0 = 2U;
volatile uint16_t x170 = 767U;
uint64_t x171 = 5426482LLU;
uint64_t x559 = UINT64_MAX;
int32_t x571 = 0;
int8_t x587 = INT8_MAX;
uint8_t x607 = 7U;
volatile uint32_t t8 = 210807U;
int16_t x689 = INT16_MIN;
static int32_t x762 = 6995;
int32_t x818 = INT32_MIN;
uint16_t x870 = 8738U;
static uint64_t x871 = 260112997LLU;
uint64_t t12 = 3645LLU;
volatile uint64_t x1287 = 2598466017227LLU;
int8_t x1324 = 1;
volatile int32_t t18 = 7520643;
int64_t x1697 = 7380533062246055LL;
static uint64_t x1714 = UINT64_MAX;
static int8_t x2095 = INT8_MAX;
int32_t x2233 = -1;
volatile uint64_t t25 = 4234720164062883LLU;
int32_t x2497 = -139283532;
int16_t x2498 = -478;
volatile uint32_t x2499 = 145832U;
volatile uint8_t x2500 = 17U;
uint32_t t28 = 328U;
int32_t t30 = 858369;
static int16_t x2702 = -1;
uint64_t x3014 = UINT64_MAX;
int32_t t35 = -43704;
uint16_t x3357 = UINT16_MAX;
static uint16_t x3359 = 830U;
int32_t x3366 = -130786;
uint16_t x3378 = 6417U;
int16_t x3429 = INT16_MIN;
static int32_t x3505 = INT32_MIN;
volatile int64_t x3506 = INT64_MAX;
uint8_t x3508 = 1U;
int8_t x3546 = INT8_MIN;
volatile int32_t t42 = INT32_MIN;
volatile int64_t t43 = -492506016LL;
static int8_t x3630 = INT8_MIN;
uint32_t x3770 = UINT32_MAX;
int8_t x3853 = INT8_MIN;
int32_t x3854 = INT32_MIN;
uint8_t x3856 = 1U;
uint64_t x3959 = 8298008LLU;
volatile uint32_t x3987 = 16632U;
static int16_t x4034 = INT16_MIN;
uint16_t x4060 = 1U;
int32_t x4232 = 0;
int16_t x4242 = INT16_MIN;
static volatile int32_t x4244 = 2;
int16_t x4245 = -451;
uint8_t x4248 = 9U;
int8_t x4325 = INT8_MIN;
uint8_t x4463 = 7U;
volatile uint32_t t57 = 27616U;
uint8_t x4471 = 1U;
static volatile uint32_t t61 = 4614852U;
uint8_t x4611 = 38U;
int64_t x4625 = 201266589725745276LL;
int64_t t64 = -3211351958202LL;
int32_t x4842 = -3824;
uint16_t x4843 = UINT16_MAX;
int32_t x4873 = -1;
uint64_t x4874 = 1759083285771970646LLU;
uint16_t x4876 = 0U;
volatile int64_t t67 = 6844971120LL;
int32_t t69 = -2;
uint16_t x5233 = 3U;
int64_t x5349 = -1LL;
uint64_t x5350 = 7916713931658903417LLU;
int16_t x5398 = INT16_MIN;
uint8_t x5399 = 34U;
uint64_t x5400 = 1LLU;
volatile uint32_t t78 = 61778104U;
uint64_t x5953 = UINT64_MAX;
static uint8_t x5954 = UINT8_MAX;
static uint8_t x5956 = 3U;
uint8_t x6031 = 25U;
int16_t x6040 = 1;
uint8_t x6101 = UINT8_MAX;
int8_t x6295 = 2;
int32_t t89 = 534141662;
volatile uint8_t x6360 = 24U;
volatile int16_t x6485 = INT16_MIN;
volatile int64_t t94 = 430118LL;
static volatile uint64_t t97 = 1676LLU;
uint8_t x6718 = UINT8_MAX;
uint32_t x6797 = 7767951U;


void f0(void) {
	uint8_t x53 = 3U;
	uint16_t x55 = 0U;
	uint8_t x56 = 13U;

	t0 = (x53*(x54&(x55<<x56)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x73 = -6;
	static int8_t x74 = INT8_MIN;
	volatile uint16_t x75 = 242U;
	int16_t x76 = 4;
	volatile int32_t t1 = 126958;

	t1 = (x73*(x74&(x75<<x76)));

	if (t1 != -23040) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x97 = UINT64_MAX;
	int8_t x98 = -1;
	uint64_t x99 = 11254752LLU;
	int16_t x100 = 0;
	volatile uint64_t t2 = 129359085431LLU;

	t2 = (x97*(x98&(x99<<x100)));

	if (t2 != 18446744073698296864LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x169 = -1;
	int16_t x172 = 11;
	static uint64_t t3 = 942LLU;

	t3 = (x169*(x170&(x171<<x172)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MIN;
	volatile int32_t x267 = 1883265;
	static volatile int16_t x268 = 0;
	static volatile uint64_t t4 = 1789878356132401LLU;

	t4 = (x265*(x266&(x267<<x268)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x557 = -260279589;
	uint64_t x558 = UINT64_MAX;
	uint32_t x560 = 16U;
	static uint64_t t5 = 129584012166271030LLU;

	t5 = (x557*(x558&(x559<<x560)));

	if (t5 != 17057683144704LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x569 = INT16_MIN;
	static int32_t x570 = -1;
	int8_t x572 = 0;
	volatile int32_t t6 = -34117;

	t6 = (x569*(x570&(x571<<x572)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x585 = 273;
	uint32_t x586 = 663938984U;
	int8_t x588 = 8;
	uint32_t t7 = 10983U;

	t7 = (x585*(x586&(x587<<x588)));

	if (t7 != 7198464U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x605 = 30256U;
	static uint32_t x606 = UINT32_MAX;
	int16_t x608 = 2;

	t8 = (x605*(x606&(x607<<x608)));

	if (t8 != 847168U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x690 = 0U;
	static int8_t x691 = 1;
	uint8_t x692 = 12U;
	volatile int32_t t9 = -39;

	t9 = (x689*(x690&(x691<<x692)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x761 = -33315102668614LL;
	int16_t x763 = 380;
	volatile int8_t x764 = 7;
	volatile int64_t t10 = 384LL;

	t10 = (x761*(x762&(x763<<x764)));

	if (t10 != -221745323362294784LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x817 = -1;
	int32_t x819 = 3409;
	volatile int16_t x820 = 0;
	volatile int32_t t11 = 514132036;

	t11 = (x817*(x818&(x819<<x820)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x869 = 1182297052296545LLU;
	volatile uint16_t x872 = 0U;

	t12 = (x869*(x870&(x871<<x872)));

	if (t12 != 643169596449320480LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1161 = -40;
	int32_t x1162 = -204360;
	uint64_t x1163 = 230055979351177953LLU;
	volatile uint8_t x1164 = 30U;
	uint64_t t13 = 6938LLU;

	t13 = (x1161*(x1162&(x1163<<x1164)));

	if (t13 != 9452830449895211008LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1225 = 8041396;
	int32_t x1226 = 1009;
	uint8_t x1227 = UINT8_MAX;
	uint8_t x1228 = 0U;
	static volatile int32_t t14 = -27808;

	t14 = (x1225*(x1226&(x1227<<x1228)));

	if (t14 != 1937976436) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1285 = 3536U;
	int32_t x1286 = 0;
	volatile uint16_t x1288 = 0U;
	volatile uint64_t t15 = 86794412LLU;

	t15 = (x1285*(x1286&(x1287<<x1288)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1289 = INT16_MAX;
	static volatile int64_t x1290 = INT64_MAX;
	volatile int8_t x1291 = 1;
	uint8_t x1292 = 0U;
	volatile int64_t t16 = 32569293LL;

	t16 = (x1289*(x1290&(x1291<<x1292)));

	if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1321 = 13098175985695881LLU;
	volatile int8_t x1322 = -2;
	uint8_t x1323 = 15U;
	volatile uint64_t t17 = 28514567981662LLU;

	t17 = (x1321*(x1322&(x1323<<x1324)));

	if (t17 != 392945279570876430LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1585 = INT8_MAX;
	int16_t x1586 = -1;
	int16_t x1587 = INT16_MAX;
	uint64_t x1588 = 3LLU;

	t18 = (x1585*(x1586&(x1587<<x1588)));

	if (t18 != 33291272) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1685 = UINT8_MAX;
	int32_t x1686 = INT32_MIN;
	volatile uint64_t x1687 = 1022207255427903346LLU;
	int16_t x1688 = 1;
	static uint64_t t19 = 12863573591595LLU;

	t19 = (x1685*(x1686&(x1687<<x1688)));

	if (t19 != 4816865702898040832LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1698 = 1U;
	volatile uint32_t x1699 = 118797U;
	static uint8_t x1700 = 4U;
	volatile int64_t t20 = -15136580079LL;

	t20 = (x1697*(x1698&(x1699<<x1700)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1713 = 54;
	volatile int16_t x1715 = 420;
	uint8_t x1716 = 3U;
	volatile uint64_t t21 = 242229554516LLU;

	t21 = (x1713*(x1714&(x1715<<x1716)));

	if (t21 != 181440LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1905 = UINT8_MAX;
	int32_t x1906 = INT32_MIN;
	uint16_t x1907 = 4626U;
	int32_t x1908 = 13;
	int32_t t22 = -10425600;

	t22 = (x1905*(x1906&(x1907<<x1908)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x2093 = -187LL;
	int64_t x2094 = INT64_MIN;
	static int16_t x2096 = 4;
	volatile int64_t t23 = 5957987LL;

	t23 = (x2093*(x2094&(x2095<<x2096)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x2234 = INT32_MAX;
	uint64_t x2235 = 33306LLU;
	int8_t x2236 = 1;
	static volatile uint64_t t24 = 113LLU;

	t24 = (x2233*(x2234&(x2235<<x2236)));

	if (t24 != 18446744073709485004LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x2269 = 12915634275854LLU;
	int8_t x2270 = INT8_MAX;
	static volatile int8_t x2271 = INT8_MAX;
	int16_t x2272 = 3;

	t25 = (x2269*(x2270&(x2271<<x2272)));

	if (t25 != 1549876113102480LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x2301 = INT64_MIN;
	uint64_t x2302 = 484221498707222LLU;
	uint16_t x2303 = 477U;
	int16_t x2304 = 1;
	uint64_t t26 = 133901313919152033LLU;

	t26 = (x2301*(x2302&(x2303<<x2304)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2453 = 1987642948U;
	volatile int8_t x2454 = INT8_MIN;
	uint64_t x2455 = 39923902LLU;
	static int8_t x2456 = 14;
	static uint64_t t27 = 105557302816LLU;

	t27 = (x2453*(x2454&(x2455<<x2456)));

	if (t27 != 8871424621927071744LLU) { NG(); } else { ; }
	
}

void f28(void) {


	t28 = (x2497*(x2498&(x2499<<x2500)));

	if (t28 != 71303168U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2589 = -1;
	volatile int16_t x2590 = INT16_MIN;
	uint16_t x2591 = 13U;
	volatile uint64_t x2592 = 4LLU;
	volatile int32_t t29 = 1975;

	t29 = (x2589*(x2590&(x2591<<x2592)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2649 = INT16_MIN;
	uint16_t x2650 = 1813U;
	static int32_t x2651 = 1;
	uint8_t x2652 = 15U;

	t30 = (x2649*(x2650&(x2651<<x2652)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2701 = INT8_MIN;
	static int16_t x2703 = INT16_MAX;
	volatile int16_t x2704 = 2;
	int32_t t31 = 1044794536;

	t31 = (x2701*(x2702&(x2703<<x2704)));

	if (t31 != -16776704) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x2933 = -1LL;
	volatile uint64_t x2934 = UINT64_MAX;
	uint64_t x2935 = UINT64_MAX;
	int8_t x2936 = 1;
	static uint64_t t32 = 65588270890774LLU;

	t32 = (x2933*(x2934&(x2935<<x2936)));

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x3013 = INT64_MIN;
	static uint8_t x3015 = 3U;
	uint16_t x3016 = 0U;
	uint64_t t33 = 108148678290262854LLU;

	t33 = (x3013*(x3014&(x3015<<x3016)));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x3057 = 27097721335LLU;
	uint64_t x3058 = 215LLU;
	uint32_t x3059 = 324829U;
	int16_t x3060 = 17;
	volatile uint64_t t34 = 1126609990000585LLU;

	t34 = (x3057*(x3058&(x3059<<x3060)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x3209 = 8U;
	static int16_t x3210 = INT16_MIN;
	uint8_t x3211 = UINT8_MAX;
	uint8_t x3212 = 19U;

	t35 = (x3209*(x3210&(x3211<<x3212)));

	if (t35 != 1069547520) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x3221 = INT16_MIN;
	static int32_t x3222 = -131;
	uint32_t x3223 = UINT32_MAX;
	volatile uint8_t x3224 = 14U;
	static volatile uint32_t t36 = 377774496U;

	t36 = (x3221*(x3222&(x3223<<x3224)));

	if (t36 != 536870912U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x3358 = UINT16_MAX;
	uint32_t x3360 = 0U;
	volatile int32_t t37 = -259748236;

	t37 = (x3357*(x3358&(x3359<<x3360)));

	if (t37 != 54394050) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x3365 = -1LL;
	uint8_t x3367 = 0U;
	uint8_t x3368 = 2U;
	volatile int64_t t38 = -76950LL;

	t38 = (x3365*(x3366&(x3367<<x3368)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x3377 = 9222;
	uint32_t x3379 = 0U;
	volatile int16_t x3380 = 0;
	volatile uint32_t t39 = 1893465821U;

	t39 = (x3377*(x3378&(x3379<<x3380)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x3430 = 10U;
	uint64_t x3431 = 23929522595LLU;
	volatile uint8_t x3432 = 11U;
	volatile uint64_t t40 = 152987LLU;

	t40 = (x3429*(x3430&(x3431<<x3432)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x3507 = 0U;
	int64_t t41 = 29050183094388LL;

	t41 = (x3505*(x3506&(x3507<<x3508)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x3545 = INT16_MIN;
	int8_t x3547 = 1;
	uint8_t x3548 = 16U;

	t42 = (x3545*(x3546&(x3547<<x3548)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x3617 = INT64_MIN;
	uint32_t x3618 = 66693012U;
	uint8_t x3619 = 2U;
	static int32_t x3620 = 0;

	t43 = (x3617*(x3618&(x3619<<x3620)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x3629 = -1;
	static uint32_t x3631 = 10U;
	uint8_t x3632 = 31U;
	volatile uint32_t t44 = 19300155U;

	t44 = (x3629*(x3630&(x3631<<x3632)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x3769 = 634U;
	uint64_t x3771 = 12LLU;
	static uint8_t x3772 = 55U;
	volatile uint64_t t45 = 1651449618740LLU;

	t45 = (x3769*(x3770&(x3771<<x3772)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3855 = INT8_MAX;
	int32_t t46 = -616047399;

	t46 = (x3853*(x3854&(x3855<<x3856)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x3957 = UINT32_MAX;
	static int16_t x3958 = -11;
	int32_t x3960 = 8;
	volatile uint64_t t47 = 2036779894266158785LLU;

	t47 = (x3957*(x3958&(x3959<<x3960)));

	if (t47 != 9123756281253980160LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3985 = INT8_MIN;
	uint64_t x3986 = 1LLU;
	uint16_t x3988 = 27U;
	uint64_t t48 = 137822967172051LLU;

	t48 = (x3985*(x3986&(x3987<<x3988)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x4033 = 479663U;
	uint16_t x4035 = 470U;
	int32_t x4036 = 8;
	uint32_t t49 = 1U;

	t49 = (x4033*(x4034&(x4035<<x4036)));

	if (t49 != 4203118592U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x4057 = -445;
	uint64_t x4058 = UINT64_MAX;
	uint8_t x4059 = UINT8_MAX;
	uint64_t t50 = 418285278LLU;

	t50 = (x4057*(x4058&(x4059<<x4060)));

	if (t50 != 18446744073709324666LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x4197 = 0;
	static int64_t x4198 = INT64_MIN;
	uint64_t x4199 = UINT64_MAX;
	uint16_t x4200 = 3U;
	static uint64_t t51 = 4933469993404LLU;

	t51 = (x4197*(x4198&(x4199<<x4200)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4229 = INT8_MIN;
	int64_t x4230 = INT64_MIN;
	uint16_t x4231 = 651U;
	int64_t t52 = 29LL;

	t52 = (x4229*(x4230&(x4231<<x4232)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x4241 = INT8_MIN;
	int8_t x4243 = INT8_MAX;
	int32_t t53 = -222630;

	t53 = (x4241*(x4242&(x4243<<x4244)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x4246 = -1;
	uint64_t x4247 = UINT64_MAX;
	uint64_t t54 = 13199707LLU;

	t54 = (x4245*(x4246&(x4247<<x4248)));

	if (t54 != 230912LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x4326 = UINT32_MAX;
	uint8_t x4327 = 1U;
	uint16_t x4328 = 6U;
	uint32_t t55 = 79369526U;

	t55 = (x4325*(x4326&(x4327<<x4328)));

	if (t55 != 4294959104U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4449 = UINT8_MAX;
	uint8_t x4450 = UINT8_MAX;
	volatile int64_t x4451 = 22LL;
	int32_t x4452 = 29;
	int64_t t56 = -4702837729229LL;

	t56 = (x4449*(x4450&(x4451<<x4452)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x4461 = -393;
	uint32_t x4462 = UINT32_MAX;
	static uint8_t x4464 = 15U;

	t57 = (x4461*(x4462&(x4463<<x4464)));

	if (t57 != 4204822528U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4469 = -1;
	volatile uint16_t x4470 = 323U;
	uint8_t x4472 = 7U;
	int32_t t58 = -16;

	t58 = (x4469*(x4470&(x4471<<x4472)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4549 = 10211U;
	static uint64_t x4550 = 1034206241713LLU;
	static volatile uint16_t x4551 = 3U;
	int16_t x4552 = 9;
	uint64_t t59 = 383140LLU;

	t59 = (x4549*(x4550&(x4551<<x4552)));

	if (t59 != 5228032LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x4577 = -1;
	volatile int16_t x4578 = INT16_MAX;
	uint32_t x4579 = UINT32_MAX;
	volatile uint8_t x4580 = 0U;
	uint32_t t60 = 680U;

	t60 = (x4577*(x4578&(x4579<<x4580)));

	if (t60 != 4294934529U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4585 = -1;
	int32_t x4586 = 80;
	static uint32_t x4587 = 257929U;
	uint8_t x4588 = 9U;

	t61 = (x4585*(x4586&(x4587<<x4588)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4609 = -7;
	uint8_t x4610 = UINT8_MAX;
	int8_t x4612 = 2;
	volatile int32_t t62 = -8058;

	t62 = (x4609*(x4610&(x4611<<x4612)));

	if (t62 != -1064) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4626 = UINT32_MAX;
	static uint64_t x4627 = 130098LLU;
	int8_t x4628 = 1;
	static uint64_t t63 = 1812611LLU;

	t63 = (x4625*(x4626&(x4627<<x4628)));

	if (t63 != 16901899092310347888LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4757 = -2028152LL;
	int64_t x4758 = 7605090970LL;
	volatile uint32_t x4759 = UINT32_MAX;
	uint8_t x4760 = 29U;

	t64 = (x4757*(x4758&(x4759<<x4760)));

	if (t64 != -6533134883487744LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4841 = 0U;
	uint32_t x4844 = 0U;
	static int32_t t65 = 226;

	t65 = (x4841*(x4842&(x4843<<x4844)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x4875 = 849U;
	static volatile uint64_t t66 = 91064LLU;

	t66 = (x4873*(x4874&(x4875<<x4876)));

	if (t66 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4881 = 163;
	uint32_t x4882 = 0U;
	int64_t x4883 = 1484022102LL;
	uint64_t x4884 = 2LLU;

	t67 = (x4881*(x4882&(x4883<<x4884)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x5081 = UINT32_MAX;
	int32_t x5082 = INT32_MAX;
	int32_t x5083 = 799;
	static volatile uint16_t x5084 = 10U;
	volatile uint32_t t68 = 1625U;

	t68 = (x5081*(x5082&(x5083<<x5084)));

	if (t68 != 4294149120U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x5093 = 22U;
	uint16_t x5094 = 89U;
	int16_t x5095 = INT16_MAX;
	volatile int8_t x5096 = 2;

	t69 = (x5093*(x5094&(x5095<<x5096)));

	if (t69 != 1936) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x5205 = INT64_MIN;
	static int64_t x5206 = -1LL;
	uint64_t x5207 = UINT64_MAX;
	volatile uint8_t x5208 = 4U;
	volatile uint64_t t70 = 8277581077LLU;

	t70 = (x5205*(x5206&(x5207<<x5208)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x5234 = INT16_MIN;
	uint64_t x5235 = 149954783904LLU;
	static uint8_t x5236 = 16U;
	static uint64_t t71 = 208029693LLU;

	t71 = (x5233*(x5234&(x5235<<x5236)));

	if (t71 != 29482310153797632LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x5297 = 7;
	uint64_t x5298 = UINT64_MAX;
	volatile uint32_t x5299 = 13312570U;
	uint32_t x5300 = 12U;
	static volatile uint64_t t72 = 2688480014586117LLU;

	t72 = (x5297*(x5298&(x5299<<x5300)));

	if (t72 != 20920754176LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5351 = 66LLU;
	static int8_t x5352 = 0;
	volatile uint64_t t73 = 172218912325163784LLU;

	t73 = (x5349*(x5350&(x5351<<x5352)));

	if (t73 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x5377 = 4U;
	int32_t x5378 = 1;
	uint8_t x5379 = 1U;
	int64_t x5380 = 0LL;
	volatile int32_t t74 = 384149998;

	t74 = (x5377*(x5378&(x5379<<x5380)));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x5397 = 68483U;
	uint32_t t75 = 507726646U;

	t75 = (x5397*(x5398&(x5399<<x5400)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x5505 = 15U;
	volatile int16_t x5506 = 134;
	uint8_t x5507 = 55U;
	volatile int16_t x5508 = 1;
	int32_t t76 = 1;

	t76 = (x5505*(x5506&(x5507<<x5508)));

	if (t76 != 90) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5721 = -1;
	static volatile int16_t x5722 = 1;
	uint64_t x5723 = 136324850797LLU;
	volatile int32_t x5724 = 3;
	static volatile uint64_t t77 = 46365840404403LLU;

	t77 = (x5721*(x5722&(x5723<<x5724)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5917 = INT32_MIN;
	int8_t x5918 = INT8_MIN;
	uint32_t x5919 = 4560U;
	uint16_t x5920 = 4U;

	t78 = (x5917*(x5918&(x5919<<x5920)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5921 = UINT32_MAX;
	static int64_t x5922 = 3752833LL;
	uint64_t x5923 = 135538131159LLU;
	static int16_t x5924 = 0;
	static uint64_t t79 = 6025314LLU;

	t79 = (x5921*(x5922&(x5923<<x5924)));

	if (t79 != 13863196650553215LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5925 = 49786323111126416LLU;
	static volatile uint64_t x5926 = UINT64_MAX;
	int8_t x5927 = INT8_MAX;
	volatile int32_t x5928 = 1;
	uint64_t t80 = 7509208522785854LLU;

	t80 = (x5925*(x5926&(x5927<<x5928)));

	if (t80 != 12645726070226109664LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5945 = 9;
	static int16_t x5946 = INT16_MIN;
	int32_t x5947 = 1;
	static uint8_t x5948 = 3U;
	volatile int32_t t81 = 592418023;

	t81 = (x5945*(x5946&(x5947<<x5948)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5955 = 6735U;
	volatile uint64_t t82 = 591423137457514LLU;

	t82 = (x5953*(x5954&(x5955<<x5956)));

	if (t82 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x6005 = INT64_MAX;
	int64_t x6006 = INT64_MAX;
	static int8_t x6007 = 0;
	int8_t x6008 = 1;
	volatile int64_t t83 = -27185960680128LL;

	t83 = (x6005*(x6006&(x6007<<x6008)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x6029 = 8209535693LLU;
	int8_t x6030 = 0;
	int64_t x6032 = 1LL;
	volatile uint64_t t84 = 768053975LLU;

	t84 = (x6029*(x6030&(x6031<<x6032)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x6037 = INT16_MAX;
	uint64_t x6038 = 2402LLU;
	uint16_t x6039 = UINT16_MAX;
	uint64_t t85 = 12992651876216LLU;

	t85 = (x6037*(x6038&(x6039<<x6040)));

	if (t85 != 78706334LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x6102 = UINT64_MAX;
	static volatile uint8_t x6103 = UINT8_MAX;
	uint8_t x6104 = 19U;
	uint64_t t86 = 54LLU;

	t86 = (x6101*(x6102&(x6103<<x6104)));

	if (t86 != 34091827200LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6113 = -1;
	int64_t x6114 = -529424720550602LL;
	uint64_t x6115 = 141990591989088281LLU;
	uint8_t x6116 = 1U;
	volatile uint64_t t87 = 499767610LLU;

	t87 = (x6113*(x6114&(x6115<<x6116)));

	if (t87 != 18163010281062006734LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x6221 = 1U;
	uint64_t x6222 = UINT64_MAX;
	uint8_t x6223 = UINT8_MAX;
	uint8_t x6224 = 13U;
	uint64_t t88 = 4400937428477059LLU;

	t88 = (x6221*(x6222&(x6223<<x6224)));

	if (t88 != 2088960LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6293 = INT16_MIN;
	uint16_t x6294 = 30151U;
	int64_t x6296 = 0LL;

	t89 = (x6293*(x6294&(x6295<<x6296)));

	if (t89 != -65536) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x6297 = INT64_MAX;
	volatile int8_t x6298 = INT8_MAX;
	static int8_t x6299 = 62;
	uint8_t x6300 = 16U;
	int64_t t90 = 2400550972LL;

	t90 = (x6297*(x6298&(x6299<<x6300)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x6357 = -3;
	int16_t x6358 = 1;
	static uint8_t x6359 = 0U;
	static volatile int32_t t91 = 24438;

	t91 = (x6357*(x6358&(x6359<<x6360)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6365 = -1LL;
	int64_t x6366 = 251691169LL;
	int64_t x6367 = 28LL;
	static int32_t x6368 = 1;
	int64_t t92 = -392581114LL;

	t92 = (x6365*(x6366&(x6367<<x6368)));

	if (t92 != -32LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6445 = -566838763590793LL;
	int64_t x6446 = INT64_MIN;
	int8_t x6447 = INT8_MAX;
	uint16_t x6448 = 1U;
	int64_t t93 = -329519187LL;

	t93 = (x6445*(x6446&(x6447<<x6448)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x6486 = INT64_MIN;
	int64_t x6487 = 45831LL;
	volatile int32_t x6488 = 1;

	t94 = (x6485*(x6486&(x6487<<x6488)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x6501 = 47U;
	uint8_t x6502 = UINT8_MAX;
	int16_t x6503 = 1217;
	uint8_t x6504 = 12U;
	volatile int32_t t95 = 20;

	t95 = (x6501*(x6502&(x6503<<x6504)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6597 = -1;
	int16_t x6598 = INT16_MIN;
	uint64_t x6599 = 4330785508856LLU;
	volatile uint8_t x6600 = 0U;
	volatile uint64_t t96 = 315240813656LLU;

	t96 = (x6597*(x6598&(x6599<<x6600)));

	if (t96 != 18446739742924046336LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6673 = 302259865LLU;
	uint32_t x6674 = UINT32_MAX;
	static uint32_t x6675 = 8710U;
	volatile int32_t x6676 = 11;

	t97 = (x6673*(x6674&(x6675<<x6676)));

	if (t97 != 5391735652659200LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x6717 = -124;
	int16_t x6719 = 0;
	uint32_t x6720 = 0U;
	int32_t t98 = 918092;

	t98 = (x6717*(x6718&(x6719<<x6720)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6798 = -1;
	static uint64_t x6799 = 2LLU;
	uint16_t x6800 = 5U;
	static volatile uint64_t t99 = 997589673309910016LLU;

	t99 = (x6797*(x6798&(x6799<<x6800)));

	if (t99 != 497148864LLU) { NG(); } else { ; }
	
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

