#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x49 = 8832U;
uint64_t x73 = 3977231642702635LLU;
volatile uint64_t t1 = 8295018354LLU;
int8_t x106 = INT8_MAX;
volatile int8_t x108 = 0;
volatile int64_t t2 = 41LL;
int16_t x256 = 1;
int8_t x266 = 1;
static int8_t x267 = -1;
volatile int32_t t6 = -1448631;
int64_t x315 = -1LL;
static volatile int8_t x316 = 0;
volatile uint32_t x329 = 28U;
int16_t x330 = 0;
static uint32_t x710 = 1614U;
volatile int16_t x726 = -1;
uint8_t x825 = 4U;
int8_t x828 = 30;
uint64_t t15 = 647341510082890LLU;
volatile uint32_t x842 = UINT32_MAX;
uint64_t x1054 = 159021826494669LLU;
int64_t x1077 = INT64_MIN;
static volatile int16_t x1173 = INT16_MIN;
int32_t x1206 = -1;
uint16_t x1208 = 0U;
static uint64_t t22 = 117296893597LLU;
uint8_t x1210 = UINT8_MAX;
uint8_t x1288 = 20U;
int16_t x1355 = INT16_MAX;
static int64_t x1356 = 1LL;
int16_t x1445 = -7;
volatile int64_t x1447 = 135479079952859150LL;
int64_t t30 = 1091900019102LL;
uint64_t x1805 = 49435LLU;
uint8_t x1846 = 1U;
uint8_t x1848 = 30U;
int32_t t34 = 31114792;
int64_t x1961 = INT64_MIN;
static volatile int32_t x1999 = -1257;
uint32_t t36 = 34965396U;
volatile int8_t x2020 = 1;
uint64_t t37 = 3289045745176337316LLU;
volatile int64_t x2053 = INT64_MIN;
static int8_t x2055 = INT8_MAX;
int32_t x2118 = INT32_MIN;
volatile uint32_t t39 = 3U;
static uint32_t x2124 = 14U;
volatile int64_t t40 = 3032498981136LL;
static volatile uint8_t x2160 = 7U;
uint32_t t41 = 60319765U;
uint32_t x2168 = 4U;
uint64_t t47 = 207515289LLU;
static int8_t x2350 = 20;
int32_t x2375 = INT32_MAX;
int8_t x2492 = 0;
uint8_t x2513 = 45U;
int64_t x2515 = INT64_MIN;
volatile uint64_t t54 = 204913LLU;
uint16_t x2646 = 3U;
int32_t x2661 = 0;
int64_t x2662 = INT64_MIN;
uint64_t x2777 = 995263LLU;
uint8_t x2824 = 3U;
static int32_t x2925 = -3;
int8_t x2928 = 6;
volatile int64_t x2938 = 225364687377LL;
int8_t x2978 = INT8_MIN;
volatile uint8_t x2979 = UINT8_MAX;
int16_t x2980 = 1;
volatile uint64_t t64 = 2912116734137LLU;
volatile int8_t x2996 = 21;
int32_t x3113 = INT32_MIN;
volatile int16_t x3158 = INT16_MIN;
uint16_t x3160 = 1U;
uint32_t x3284 = 2U;
uint32_t x3421 = UINT32_MAX;
uint16_t x3476 = 16U;
volatile uint64_t t74 = 30900581490988481LLU;
static volatile uint8_t x3633 = UINT8_MAX;
int8_t x3634 = -1;
int32_t x3635 = 9;
int64_t x3703 = INT64_MAX;
int64_t t79 = 3LL;
volatile uint8_t x3783 = 7U;
static int8_t x3793 = -1;
static uint16_t x3794 = 197U;
uint16_t x3796 = 0U;
volatile int32_t t82 = 10447136;
int8_t x3832 = 6;
static uint16_t x3839 = 2475U;
static uint16_t x4000 = 7U;
int16_t x4129 = INT16_MAX;
int64_t t90 = -7405339271458LL;
int32_t t91 = -95;
int32_t x4209 = -4097860;
int8_t x4211 = INT8_MIN;
volatile int32_t t92 = 1923967;
int32_t x4307 = 58192;
uint32_t x4313 = 8171795U;
uint32_t x4314 = 21874U;
static int32_t x4359 = -40254;
uint32_t t96 = 8298U;
volatile int32_t x4383 = INT32_MAX;
uint8_t x4468 = 8U;


void f0(void) {
	int8_t x50 = -1;
	static uint8_t x51 = 14U;
	uint8_t x52 = 12U;
	volatile int32_t t0 = -195600125;

	t0 = (x49-((x50&x51)>>x52));

	if (t0 != 8832) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x74 = INT64_MAX;
	int32_t x75 = -1679;
	uint8_t x76 = 8U;

	t1 = (x73-((x74&x75)>>x76));

	if (t1 != 18414692508333290290LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x105 = 90703U;
	int64_t x107 = INT64_MAX;

	t2 = (x105-((x106&x107)>>x108));

	if (t2 != 90576LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x217 = 4361912U;
	uint8_t x218 = 17U;
	int32_t x219 = -1543;
	int32_t x220 = 1;
	static volatile uint32_t t3 = 56U;

	t3 = (x217-((x218&x219)>>x220));

	if (t3 != 4361904U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x233 = UINT32_MAX;
	volatile uint64_t x234 = 48074533LLU;
	static volatile uint16_t x235 = 7U;
	uint32_t x236 = 2U;
	uint64_t t4 = 26683447379974LLU;

	t4 = (x233-((x234&x235)>>x236));

	if (t4 != 4294967294LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x253 = INT8_MIN;
	static uint16_t x254 = UINT16_MAX;
	uint64_t x255 = UINT64_MAX;
	uint64_t t5 = 28988881LLU;

	t5 = (x253-((x254&x255)>>x256));

	if (t5 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x265 = -1;
	volatile int64_t x268 = 2LL;

	t6 = (x265-((x266&x267)>>x268));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x313 = 4U;
	uint64_t x314 = UINT64_MAX;
	uint64_t t7 = 58528959101128LLU;

	t7 = (x313-((x314&x315)>>x316));

	if (t7 != 5LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x331 = INT64_MIN;
	uint16_t x332 = 2U;
	static volatile int64_t t8 = -37473957273436354LL;

	t8 = (x329-((x330&x331)>>x332));

	if (t8 != 28LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x365 = INT16_MAX;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = UINT16_MAX;
	uint32_t x368 = 22U;
	int64_t t9 = -17107191632910308LL;

	t9 = (x365-((x366&x367)>>x368));

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x537 = INT16_MIN;
	int32_t x538 = INT32_MAX;
	volatile int32_t x539 = INT32_MIN;
	uint8_t x540 = 1U;
	volatile int32_t t10 = -1078186;

	t10 = (x537-((x538&x539)>>x540));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x609 = 0LLU;
	uint8_t x610 = UINT8_MAX;
	int8_t x611 = INT8_MIN;
	static uint8_t x612 = 15U;
	uint64_t t11 = 1268334212LLU;

	t11 = (x609-((x610&x611)>>x612));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x673 = INT32_MIN;
	uint16_t x674 = UINT16_MAX;
	int64_t x675 = INT64_MIN;
	uint8_t x676 = 7U;
	int64_t t12 = 0LL;

	t12 = (x673-((x674&x675)>>x676));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x709 = INT8_MIN;
	uint32_t x711 = 88613U;
	uint32_t x712 = 22U;
	volatile uint32_t t13 = 2592U;

	t13 = (x709-((x710&x711)>>x712));

	if (t13 != 4294967168U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x725 = 776482004LLU;
	uint16_t x727 = UINT16_MAX;
	uint16_t x728 = 1U;
	static volatile uint64_t t14 = 3623825LLU;

	t14 = (x725-((x726&x727)>>x728));

	if (t14 != 776449237LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x826 = 1972000271LLU;
	volatile int32_t x827 = -585825247;

	t15 = (x825-((x826&x827)>>x828));

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x841 = 116470257470552447LL;
	int16_t x843 = INT16_MIN;
	volatile int8_t x844 = 1;
	volatile int64_t t16 = -6506414908LL;

	t16 = (x841-((x842&x843)>>x844));

	if (t16 != 116470255323085183LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x857 = 20616U;
	int16_t x858 = -1;
	volatile int64_t x859 = 199543217253833547LL;
	volatile int8_t x860 = 1;
	volatile int64_t t17 = -69336715908983LL;

	t17 = (x857-((x858&x859)>>x860));

	if (t17 != -99771608626896157LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1053 = 0U;
	int8_t x1055 = -19;
	volatile uint64_t x1056 = 15LLU;
	uint64_t t18 = 7965375388LLU;

	t18 = (x1053-((x1054&x1055)>>x1056));

	if (t18 != 18446744068856590603LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1078 = INT64_MIN;
	uint8_t x1079 = 0U;
	static uint32_t x1080 = 0U;
	static int64_t t19 = INT64_MIN;

	t19 = (x1077-((x1078&x1079)>>x1080));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x1149 = UINT16_MAX;
	uint32_t x1150 = 1655U;
	int8_t x1151 = -1;
	uint8_t x1152 = 1U;
	volatile uint32_t t20 = 298468305U;

	t20 = (x1149-((x1150&x1151)>>x1152));

	if (t20 != 64708U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1174 = INT8_MIN;
	int64_t x1175 = INT64_MAX;
	uint16_t x1176 = 3U;
	volatile int64_t t21 = 18773823281624LL;

	t21 = (x1173-((x1174&x1175)>>x1176));

	if (t21 != -1152921504606879728LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1205 = 4235567311909300LLU;
	uint64_t x1207 = 10948LLU;

	t22 = (x1205-((x1206&x1207)>>x1208));

	if (t22 != 4235567311898352LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1209 = 2730058U;
	int32_t x1211 = -1;
	int8_t x1212 = 3;
	volatile uint32_t t23 = 2U;

	t23 = (x1209-((x1210&x1211)>>x1212));

	if (t23 != 2730027U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1217 = INT16_MIN;
	int32_t x1218 = 1;
	uint16_t x1219 = UINT16_MAX;
	uint8_t x1220 = 8U;
	volatile int32_t t24 = 18304659;

	t24 = (x1217-((x1218&x1219)>>x1220));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1285 = 0;
	int8_t x1286 = 1;
	int64_t x1287 = INT64_MIN;
	int64_t t25 = 496LL;

	t25 = (x1285-((x1286&x1287)>>x1288));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1293 = INT32_MAX;
	volatile uint8_t x1294 = 29U;
	static volatile int16_t x1295 = INT16_MAX;
	int8_t x1296 = 2;
	int32_t t26 = -3;

	t26 = (x1293-((x1294&x1295)>>x1296));

	if (t26 != 2147483640) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1353 = UINT16_MAX;
	int8_t x1354 = INT8_MIN;
	volatile int32_t t27 = -108;

	t27 = (x1353-((x1354&x1355)>>x1356));

	if (t27 != 49215) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x1361 = 1LL;
	uint32_t x1362 = 1249006387U;
	int8_t x1363 = INT8_MIN;
	volatile uint8_t x1364 = 3U;
	int64_t t28 = 3701786915139LL;

	t28 = (x1361-((x1362&x1363)>>x1364));

	if (t28 != -156125791LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1373 = INT32_MAX;
	uint32_t x1374 = 2677U;
	volatile int64_t x1375 = 237329LL;
	int8_t x1376 = 1;
	static volatile int64_t t29 = 1487354007830088844LL;

	t29 = (x1373-((x1374&x1375)>>x1376));

	if (t29 != 2147482359LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1446 = INT32_MAX;
	static uint8_t x1448 = 51U;

	t30 = (x1445-((x1446&x1447)>>x1448));

	if (t30 != -7LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1469 = UINT32_MAX;
	int32_t x1470 = -1;
	int64_t x1471 = INT64_MAX;
	volatile uint16_t x1472 = 1U;
	volatile int64_t t31 = 4363769996231111169LL;

	t31 = (x1469-((x1470&x1471)>>x1472));

	if (t31 != -4611686014132420608LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1717 = INT16_MAX;
	uint32_t x1718 = 2001U;
	int64_t x1719 = INT64_MIN;
	uint8_t x1720 = 10U;
	static int64_t t32 = -23641203958187LL;

	t32 = (x1717-((x1718&x1719)>>x1720));

	if (t32 != 32767LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1806 = INT8_MAX;
	int64_t x1807 = -1192939408875885135LL;
	int8_t x1808 = 26;
	volatile uint64_t t33 = 4LLU;

	t33 = (x1805-((x1806&x1807)>>x1808));

	if (t33 != 49435LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1845 = -1;
	uint16_t x1847 = 7203U;

	t34 = (x1845-((x1846&x1847)>>x1848));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1962 = -1692076030112237LL;
	uint8_t x1963 = 15U;
	volatile uint8_t x1964 = 29U;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x1961-((x1962&x1963)>>x1964));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1997 = 333U;
	volatile uint16_t x1998 = 18U;
	uint8_t x2000 = 6U;

	t36 = (x1997-((x1998&x1999)>>x2000));

	if (t36 != 333U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2017 = 586;
	int32_t x2018 = INT32_MIN;
	uint64_t x2019 = UINT64_MAX;

	t37 = (x2017-((x2018&x2019)>>x2020));

	if (t37 != 9223372037928518218LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2054 = 47748206498LLU;
	uint8_t x2056 = 2U;
	uint64_t t38 = 17335092128LLU;

	t38 = (x2053-((x2054&x2055)>>x2056));

	if (t38 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2117 = 4808222U;
	uint8_t x2119 = 7U;
	uint16_t x2120 = 1U;

	t39 = (x2117-((x2118&x2119)>>x2120));

	if (t39 != 4808222U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2121 = INT32_MIN;
	static int16_t x2122 = -1;
	volatile int64_t x2123 = 13431108LL;

	t40 = (x2121-((x2122&x2123)>>x2124));

	if (t40 != -2147484467LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2157 = UINT16_MAX;
	uint32_t x2158 = 3987395U;
	int8_t x2159 = INT8_MIN;

	t41 = (x2157-((x2158&x2159)>>x2160));

	if (t41 != 34384U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2165 = INT64_MIN;
	uint8_t x2166 = UINT8_MAX;
	static int16_t x2167 = INT16_MIN;
	static volatile int64_t t42 = INT64_MIN;

	t42 = (x2165-((x2166&x2167)>>x2168));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2217 = INT16_MIN;
	int8_t x2218 = -1;
	int8_t x2219 = 39;
	volatile uint32_t x2220 = 31U;
	static volatile int32_t t43 = -26734823;

	t43 = (x2217-((x2218&x2219)>>x2220));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2229 = 14937391577753728LLU;
	static int64_t x2230 = -314099986181LL;
	static uint64_t x2231 = 237134242880141469LLU;
	uint8_t x2232 = 1U;
	uint64_t t44 = 6LLU;

	t44 = (x2229-((x2230&x2231)>>x2232));

	if (t44 != 18343114481561477172LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2241 = 1786U;
	int16_t x2242 = INT16_MAX;
	uint32_t x2243 = 42U;
	volatile int32_t x2244 = 1;
	volatile uint32_t t45 = 11880850U;

	t45 = (x2241-((x2242&x2243)>>x2244));

	if (t45 != 1765U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2253 = UINT32_MAX;
	volatile int16_t x2254 = INT16_MAX;
	volatile int16_t x2255 = 141;
	uint8_t x2256 = 16U;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x2253-((x2254&x2255)>>x2256));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2285 = 142718847694300545LLU;
	uint16_t x2286 = 1U;
	uint32_t x2287 = 14U;
	uint16_t x2288 = 13U;

	t47 = (x2285-((x2286&x2287)>>x2288));

	if (t47 != 142718847694300545LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2329 = -1;
	static uint16_t x2330 = UINT16_MAX;
	int32_t x2331 = INT32_MIN;
	uint8_t x2332 = 16U;
	int32_t t48 = -5;

	t48 = (x2329-((x2330&x2331)>>x2332));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2341 = 2U;
	int32_t x2342 = -1;
	static volatile uint32_t x2343 = UINT32_MAX;
	uint8_t x2344 = 2U;
	volatile uint32_t t49 = 8735678U;

	t49 = (x2341-((x2342&x2343)>>x2344));

	if (t49 != 3221225475U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2349 = INT8_MIN;
	volatile int16_t x2351 = -1703;
	volatile uint32_t x2352 = 12U;
	int32_t t50 = 957030237;

	t50 = (x2349-((x2350&x2351)>>x2352));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2373 = INT32_MAX;
	int16_t x2374 = INT16_MAX;
	volatile uint64_t x2376 = 2LLU;
	volatile int32_t t51 = -191719;

	t51 = (x2373-((x2374&x2375)>>x2376));

	if (t51 != 2147475456) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2489 = INT8_MAX;
	uint8_t x2490 = 25U;
	int16_t x2491 = -2334;
	volatile int32_t t52 = 401267510;

	t52 = (x2489-((x2490&x2491)>>x2492));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x2514 = 259320964835391LL;
	uint8_t x2516 = 6U;
	volatile int64_t t53 = -95420264577507LL;

	t53 = (x2513-((x2514&x2515)>>x2516));

	if (t53 != 45LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2557 = INT8_MIN;
	int64_t x2558 = INT64_MAX;
	uint64_t x2559 = 87921455310LLU;
	uint32_t x2560 = 1U;

	t54 = (x2557-((x2558&x2559)>>x2560));

	if (t54 != 18446744029748823833LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2613 = INT32_MAX;
	int64_t x2614 = INT64_MAX;
	uint32_t x2615 = 1988U;
	uint8_t x2616 = 1U;
	int64_t t55 = -7892645430LL;

	t55 = (x2613-((x2614&x2615)>>x2616));

	if (t55 != 2147482653LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2645 = INT16_MIN;
	int32_t x2647 = INT32_MIN;
	static int16_t x2648 = 17;
	volatile int32_t t56 = 624667923;

	t56 = (x2645-((x2646&x2647)>>x2648));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2663 = INT32_MAX;
	uint16_t x2664 = 7U;
	int64_t t57 = 2530LL;

	t57 = (x2661-((x2662&x2663)>>x2664));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2778 = -1;
	uint16_t x2779 = 2299U;
	volatile uint16_t x2780 = 11U;
	static volatile uint64_t t58 = 146855671LLU;

	t58 = (x2777-((x2778&x2779)>>x2780));

	if (t58 != 995262LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2821 = 11U;
	volatile int64_t x2822 = 48515974967641413LL;
	int16_t x2823 = 3064;
	volatile int64_t t59 = -102138076LL;

	t59 = (x2821-((x2822&x2823)>>x2824));

	if (t59 != -29LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2825 = 6035LLU;
	int64_t x2826 = INT64_MIN;
	uint64_t x2827 = UINT64_MAX;
	static volatile uint16_t x2828 = 0U;
	uint64_t t60 = 4569959461887738439LLU;

	t60 = (x2825-((x2826&x2827)>>x2828));

	if (t60 != 9223372036854781843LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2926 = 35319U;
	volatile int16_t x2927 = 3;
	static uint32_t t61 = 168521U;

	t61 = (x2925-((x2926&x2927)>>x2928));

	if (t61 != 4294967293U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x2937 = UINT8_MAX;
	uint16_t x2939 = UINT16_MAX;
	int8_t x2940 = 4;
	volatile int64_t t62 = -437LL;

	t62 = (x2937-((x2938&x2939)>>x2940));

	if (t62 != -674LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2977 = 1;
	volatile int32_t t63 = -501038;

	t63 = (x2977-((x2978&x2979)>>x2980));

	if (t63 != -63) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2985 = -98LL;
	int64_t x2986 = INT64_MAX;
	uint64_t x2987 = UINT64_MAX;
	uint64_t x2988 = 0LLU;

	t64 = (x2985-((x2986&x2987)>>x2988));

	if (t64 != 9223372036854775711LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2993 = -1;
	int64_t x2994 = -1LL;
	int8_t x2995 = INT8_MAX;
	int64_t t65 = -499764LL;

	t65 = (x2993-((x2994&x2995)>>x2996));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x3065 = 0U;
	static int8_t x3066 = INT8_MIN;
	int8_t x3067 = 0;
	int16_t x3068 = 2;
	int32_t t66 = 42389;

	t66 = (x3065-((x3066&x3067)>>x3068));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3114 = UINT16_MAX;
	static int8_t x3115 = 29;
	int8_t x3116 = 21;
	volatile int32_t t67 = INT32_MIN;

	t67 = (x3113-((x3114&x3115)>>x3116));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3145 = INT32_MAX;
	uint32_t x3146 = 13U;
	static int32_t x3147 = INT32_MIN;
	volatile uint8_t x3148 = 13U;
	uint32_t t68 = 2498539U;

	t68 = (x3145-((x3146&x3147)>>x3148));

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3157 = INT32_MIN;
	volatile uint32_t x3159 = 12U;
	volatile uint32_t t69 = 1111U;

	t69 = (x3157-((x3158&x3159)>>x3160));

	if (t69 != 2147483648U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x3237 = UINT64_MAX;
	uint8_t x3238 = 23U;
	int32_t x3239 = INT32_MIN;
	volatile int8_t x3240 = 0;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x3237-((x3238&x3239)>>x3240));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3281 = -554LL;
	uint32_t x3282 = 1310U;
	int64_t x3283 = 819LL;
	static volatile int64_t t71 = 1990879726425LL;

	t71 = (x3281-((x3282&x3283)>>x3284));

	if (t71 != -622LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3397 = 12659U;
	int8_t x3398 = -1;
	uint64_t x3399 = UINT64_MAX;
	uint8_t x3400 = 2U;
	volatile uint64_t t72 = 1779110625LLU;

	t72 = (x3397-((x3398&x3399)>>x3400));

	if (t72 != 13835058055282176372LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3422 = -1;
	static uint32_t x3423 = UINT32_MAX;
	volatile uint8_t x3424 = 3U;
	uint32_t t73 = 23664U;

	t73 = (x3421-((x3422&x3423)>>x3424));

	if (t73 != 3758096384U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x3473 = 3674038460LLU;
	int8_t x3474 = 3;
	volatile int64_t x3475 = -1LL;

	t74 = (x3473-((x3474&x3475)>>x3476));

	if (t74 != 3674038460LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3517 = -1;
	static int8_t x3518 = INT8_MAX;
	volatile int16_t x3519 = 176;
	uint16_t x3520 = 0U;
	volatile int32_t t75 = -836;

	t75 = (x3517-((x3518&x3519)>>x3520));

	if (t75 != -49) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3537 = 330368827U;
	static uint64_t x3538 = 105315832149942LLU;
	uint32_t x3539 = UINT32_MAX;
	volatile uint8_t x3540 = 6U;
	volatile uint64_t t76 = 256078LLU;

	t76 = (x3537-((x3538&x3539)>>x3540));

	if (t76 != 279836765LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3636 = 4;
	volatile int32_t t77 = -34;

	t77 = (x3633-((x3634&x3635)>>x3636));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3669 = 2959321826914LLU;
	uint16_t x3670 = UINT16_MAX;
	int64_t x3671 = INT64_MIN;
	uint8_t x3672 = 7U;
	volatile uint64_t t78 = 548549431341326LLU;

	t78 = (x3669-((x3670&x3671)>>x3672));

	if (t78 != 2959321826914LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3701 = 10;
	uint8_t x3702 = 36U;
	uint16_t x3704 = 0U;

	t79 = (x3701-((x3702&x3703)>>x3704));

	if (t79 != -26LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3729 = -653320;
	uint8_t x3730 = UINT8_MAX;
	int64_t x3731 = -17LL;
	uint8_t x3732 = 15U;
	int64_t t80 = 157LL;

	t80 = (x3729-((x3730&x3731)>>x3732));

	if (t80 != -653320LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3781 = 2U;
	static int64_t x3782 = INT64_MAX;
	uint8_t x3784 = 13U;
	volatile int64_t t81 = 21175LL;

	t81 = (x3781-((x3782&x3783)>>x3784));

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x3795 = INT16_MAX;

	t82 = (x3793-((x3794&x3795)>>x3796));

	if (t82 != -198) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3829 = 93U;
	int8_t x3830 = INT8_MAX;
	uint16_t x3831 = UINT16_MAX;
	volatile int32_t t83 = -21779855;

	t83 = (x3829-((x3830&x3831)>>x3832));

	if (t83 != 92) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x3837 = INT8_MAX;
	int16_t x3838 = INT16_MAX;
	uint8_t x3840 = 1U;
	volatile int32_t t84 = -3837812;

	t84 = (x3837-((x3838&x3839)>>x3840));

	if (t84 != -1110) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3849 = UINT64_MAX;
	int8_t x3850 = -1;
	uint16_t x3851 = UINT16_MAX;
	volatile uint8_t x3852 = 5U;
	volatile uint64_t t85 = 31072LLU;

	t85 = (x3849-((x3850&x3851)>>x3852));

	if (t85 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3997 = UINT16_MAX;
	uint64_t x3998 = 2572436191739LLU;
	uint64_t x3999 = 16200107928862880LLU;
	uint64_t t86 = 525002399158688797LLU;

	t86 = (x3997-((x3998&x3999)>>x4000));

	if (t86 != 18446744071545337854LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x4117 = 43610U;
	int8_t x4118 = 26;
	static int8_t x4119 = INT8_MIN;
	static uint8_t x4120 = 1U;
	uint32_t t87 = 58U;

	t87 = (x4117-((x4118&x4119)>>x4120));

	if (t87 != 43610U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4130 = 1058400648879227LL;
	int64_t x4131 = INT64_MIN;
	uint16_t x4132 = 1U;
	int64_t t88 = 1267229LL;

	t88 = (x4129-((x4130&x4131)>>x4132));

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x4145 = UINT64_MAX;
	volatile int16_t x4146 = 7664;
	int32_t x4147 = INT32_MIN;
	uint8_t x4148 = 3U;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x4145-((x4146&x4147)>>x4148));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4177 = INT32_MIN;
	int16_t x4178 = 0;
	int64_t x4179 = -1LL;
	uint16_t x4180 = 10U;

	t90 = (x4177-((x4178&x4179)>>x4180));

	if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x4193 = UINT16_MAX;
	int32_t x4194 = INT32_MAX;
	static int16_t x4195 = INT16_MIN;
	int64_t x4196 = 5LL;

	t91 = (x4193-((x4194&x4195)>>x4196));

	if (t91 != -67042305) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4210 = INT8_MAX;
	volatile int64_t x4212 = 0LL;

	t92 = (x4209-((x4210&x4211)>>x4212));

	if (t92 != -4097860) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x4305 = 1U;
	uint16_t x4306 = 26940U;
	static uint8_t x4308 = 0U;
	uint32_t t93 = 480U;

	t93 = (x4305-((x4306&x4307)>>x4308));

	if (t93 != 4294942449U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4315 = 0U;
	uint16_t x4316 = 0U;
	volatile uint32_t t94 = 122525U;

	t94 = (x4313-((x4314&x4315)>>x4316));

	if (t94 != 8171795U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x4325 = 2389U;
	static int64_t x4326 = -9LL;
	static volatile int64_t x4327 = INT64_MAX;
	int8_t x4328 = 0;
	volatile int64_t t95 = 4LL;

	t95 = (x4325-((x4326&x4327)>>x4328));

	if (t95 != -9223372036854773410LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4357 = 4068842U;
	uint8_t x4358 = 68U;
	static uint8_t x4360 = 11U;

	t96 = (x4357-((x4358&x4359)>>x4360));

	if (t96 != 4068842U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4381 = 5U;
	int32_t x4382 = 4893;
	int32_t x4384 = 5;
	static int32_t t97 = -18944373;

	t97 = (x4381-((x4382&x4383)>>x4384));

	if (t97 != -147) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4437 = 235619866698891LL;
	int32_t x4438 = -976085340;
	uint16_t x4439 = 3113U;
	uint16_t x4440 = 29U;
	volatile int64_t t98 = -15954399460334053LL;

	t98 = (x4437-((x4438&x4439)>>x4440));

	if (t98 != 235619866698891LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4465 = INT64_MAX;
	uint16_t x4466 = UINT16_MAX;
	uint32_t x4467 = UINT32_MAX;
	volatile int64_t t99 = -430835LL;

	t99 = (x4465-((x4466&x4467)>>x4468));

	if (t99 != 9223372036854775552LL) { NG(); } else { ; }
	
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

