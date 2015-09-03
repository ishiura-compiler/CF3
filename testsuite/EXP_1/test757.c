#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x184 = INT8_MAX;
int64_t t1 = -12750LL;
int16_t x194 = INT16_MAX;
int16_t x334 = INT16_MAX;
uint8_t x363 = 2U;
int64_t x364 = 65562610LL;
int64_t x444 = INT64_MAX;
int8_t x555 = 2;
uint32_t x640 = UINT32_MAX;
uint32_t x666 = 333U;
static int16_t x869 = INT16_MAX;
volatile int64_t x900 = INT64_MAX;
volatile int64_t t14 = 237LL;
uint32_t x930 = UINT32_MAX;
volatile int16_t x1213 = INT16_MAX;
int8_t x1223 = 0;
int64_t x1290 = INT64_MIN;
volatile int64_t t24 = -1814427424402999945LL;
volatile int64_t t25 = -4486361065345753LL;
volatile uint16_t x1469 = 27998U;
uint16_t x1470 = 623U;
int32_t t29 = -96193;
volatile int64_t t30 = -1098516983LL;
int8_t x1669 = INT8_MAX;
uint16_t x1671 = 9U;
uint64_t x1672 = 1195159LLU;
int8_t x1713 = INT8_MAX;
int16_t x1755 = 1;
volatile int32_t t34 = 12865721;
int16_t x1801 = -1;
volatile uint32_t t36 = 490006641U;
uint64_t x1936 = 22289671LLU;
volatile uint32_t x1982 = 423348028U;
volatile uint8_t x1983 = 5U;
volatile int64_t x2040 = -1LL;
volatile int64_t x2045 = INT64_MAX;
int64_t x2086 = 27LL;
uint8_t x2114 = 1U;
uint8_t x2115 = 10U;
int8_t x2116 = INT8_MIN;
uint16_t x2135 = 0U;
volatile uint64_t t45 = 61692567347LLU;
int8_t x2150 = -1;
volatile uint8_t x2152 = 78U;
volatile int32_t t46 = -135608580;
uint32_t x2160 = 2323U;
volatile uint32_t t47 = 1625735U;
uint64_t x2162 = UINT64_MAX;
uint8_t x2164 = UINT8_MAX;
uint64_t t48 = 1469946792921LLU;
int64_t x2342 = INT64_MIN;
uint8_t x2345 = 17U;
static uint8_t x2346 = UINT8_MAX;
volatile int32_t t51 = -3691;
static uint64_t t52 = 4573LLU;
static uint64_t t53 = 181840947444LLU;
static uint16_t x2576 = 385U;
volatile int16_t x2600 = -1;
static uint8_t x2654 = 5U;
volatile uint64_t t57 = 215730791329LLU;
int8_t x2775 = 0;
static uint32_t x2932 = 2875985U;
int16_t x3016 = INT16_MIN;
volatile int32_t t62 = 0;
uint16_t x3081 = 12912U;
static int64_t x3162 = -1LL;
uint8_t x3187 = 13U;
static volatile int64_t t67 = -54370047LL;
static uint64_t x3224 = 63217LLU;
static int64_t x3269 = INT64_MAX;
static uint8_t x3271 = 8U;
volatile int64_t x3377 = 50800LL;
static int16_t x3380 = -395;
volatile int64_t t71 = -611465236710121634LL;
uint16_t x3401 = 653U;
uint32_t x3633 = 3615U;
int64_t t76 = -896885LL;
int16_t x3695 = 1;
int32_t x3696 = INT32_MIN;
int64_t x3933 = INT64_MIN;
static int16_t x3938 = -1;
static int8_t x4038 = INT8_MIN;
static uint32_t x4039 = 12U;
int32_t x4040 = INT32_MIN;
uint32_t t88 = 19474425U;
volatile int8_t x4188 = 38;
volatile uint8_t x4223 = 29U;
volatile uint64_t t90 = 468337784458881877LLU;
int32_t x4225 = INT32_MAX;
uint64_t x4237 = 4246114597858LLU;
int16_t x4240 = INT16_MIN;
uint8_t x4263 = 3U;
uint8_t x4278 = 29U;
uint32_t x4280 = UINT32_MAX;
static uint64_t x4292 = 6116737737589669780LLU;
uint8_t x4351 = 2U;
int32_t t97 = -41451481;
static uint32_t x4386 = 5U;


void f0(void) {
	uint64_t x21 = 2448001875598809138LLU;
	static int8_t x22 = INT8_MIN;
	uint16_t x23 = 58U;
	volatile int64_t x24 = INT64_MIN;
	uint64_t t0 = 63242535LLU;

	t0 = (((x21%x22)>>x23)*x24);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = -377LL;
	uint16_t x183 = 2U;

	t1 = (((x181%x182)>>x183)*x184);

	if (t1 != 2286LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x193 = 3700LL;
	volatile uint16_t x195 = 3U;
	volatile uint8_t x196 = 123U;
	static int64_t t2 = 35LL;

	t2 = (((x193%x194)>>x195)*x196);

	if (t2 != 56826LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x281 = 60560601LLU;
	int32_t x282 = INT32_MAX;
	uint16_t x283 = 8U;
	static volatile int64_t x284 = INT64_MIN;
	uint64_t t3 = 110102LLU;

	t3 = (((x281%x282)>>x283)*x284);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x333 = 224U;
	uint64_t x335 = 6LLU;
	volatile int16_t x336 = -1;
	volatile int32_t t4 = 27605;

	t4 = (((x333%x334)>>x335)*x336);

	if (t4 != -3) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x361 = UINT64_MAX;
	static int64_t x362 = INT64_MAX;
	volatile uint64_t t5 = 452273591190866300LLU;

	t5 = (((x361%x362)>>x363)*x364);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x441 = UINT64_MAX;
	uint16_t x442 = 342U;
	volatile uint8_t x443 = 0U;
	uint64_t t6 = 56259661LLU;

	t6 = (((x441%x442)>>x443)*x444);

	if (t6 != 9223372036854775469LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x525 = 2736772U;
	volatile int16_t x526 = -873;
	static uint8_t x527 = 23U;
	int32_t x528 = INT32_MIN;
	uint32_t t7 = 7747U;

	t7 = (((x525%x526)>>x527)*x528);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x553 = -1LL;
	uint64_t x554 = 21695926LLU;
	static volatile int32_t x556 = INT32_MAX;
	static volatile uint64_t t8 = 35LLU;

	t8 = (((x553%x554)>>x555)*x556);

	if (t8 != 1792115905610793LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x637 = 24U;
	static int32_t x638 = INT32_MIN;
	uint8_t x639 = 4U;
	uint32_t t9 = UINT32_MAX;

	t9 = (((x637%x638)>>x639)*x640);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x665 = 6U;
	int32_t x667 = 24;
	uint32_t x668 = 0U;
	static volatile uint32_t t10 = 2U;

	t10 = (((x665%x666)>>x667)*x668);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x733 = UINT8_MAX;
	int64_t x734 = 3LL;
	uint8_t x735 = 57U;
	uint32_t x736 = UINT32_MAX;
	int64_t t11 = -3263514LL;

	t11 = (((x733%x734)>>x735)*x736);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x870 = 7U;
	uint16_t x871 = 1U;
	uint8_t x872 = UINT8_MAX;
	volatile int32_t t12 = 61298849;

	t12 = (((x869%x870)>>x871)*x872);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x885 = UINT32_MAX;
	volatile int16_t x886 = INT16_MIN;
	int8_t x887 = 20;
	uint16_t x888 = 7U;
	volatile uint32_t t13 = 7519U;

	t13 = (((x885%x886)>>x887)*x888);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x897 = 187U;
	static volatile uint16_t x898 = UINT16_MAX;
	uint8_t x899 = 8U;

	t14 = (((x897%x898)>>x899)*x900);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x929 = INT8_MIN;
	int16_t x931 = 0;
	int8_t x932 = 3;
	static uint32_t t15 = 3U;

	t15 = (((x929%x930)>>x931)*x932);

	if (t15 != 4294966912U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x945 = -1;
	uint64_t x946 = UINT64_MAX;
	int16_t x947 = 1;
	static int16_t x948 = INT16_MIN;
	volatile uint64_t t16 = 427250LLU;

	t16 = (((x945%x946)>>x947)*x948);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x953 = 501U;
	int8_t x954 = INT8_MAX;
	uint64_t x955 = 5LLU;
	int64_t x956 = -6934LL;
	int64_t t17 = -14333809438824904LL;

	t17 = (((x953%x954)>>x955)*x956);

	if (t17 != -20802LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1105 = UINT16_MAX;
	static volatile int8_t x1106 = 6;
	uint8_t x1107 = 31U;
	int16_t x1108 = -1;
	int32_t t18 = -1;

	t18 = (((x1105%x1106)>>x1107)*x1108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1181 = INT32_MAX;
	uint32_t x1182 = UINT32_MAX;
	int16_t x1183 = 2;
	int8_t x1184 = -46;
	volatile uint32_t t19 = 3918108U;

	t19 = (((x1181%x1182)>>x1183)*x1184);

	if (t19 != 1073741870U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1214 = -1;
	uint8_t x1215 = 13U;
	int32_t x1216 = INT32_MAX;
	int32_t t20 = -6;

	t20 = (((x1213%x1214)>>x1215)*x1216);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1221 = INT16_MAX;
	uint32_t x1222 = 159901U;
	int8_t x1224 = -1;
	volatile uint32_t t21 = 0U;

	t21 = (((x1221%x1222)>>x1223)*x1224);

	if (t21 != 4294934529U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x1229 = INT16_MAX;
	uint8_t x1230 = 15U;
	static int16_t x1231 = 18;
	int32_t x1232 = 471519704;
	int32_t t22 = 254009911;

	t22 = (((x1229%x1230)>>x1231)*x1232);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1281 = INT8_MIN;
	volatile uint64_t x1282 = 3001434971268717349LLU;
	int8_t x1283 = 1;
	volatile int8_t x1284 = INT8_MIN;
	volatile uint64_t t23 = 1546772096332727LLU;

	t23 = (((x1281%x1282)>>x1283)*x1284);

	if (t23 != 8852896397195270016LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1289 = 61U;
	uint8_t x1291 = 2U;
	static int16_t x1292 = -847;

	t24 = (((x1289%x1290)>>x1291)*x1292);

	if (t24 != -12705LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1369 = UINT16_MAX;
	int64_t x1370 = 5247LL;
	uint8_t x1371 = 27U;
	volatile uint8_t x1372 = 0U;

	t25 = (((x1369%x1370)>>x1371)*x1372);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1389 = 1604192020559205990LLU;
	uint16_t x1390 = UINT16_MAX;
	int8_t x1391 = 2;
	uint64_t x1392 = 161810LLU;
	static volatile uint64_t t26 = 1132622LLU;

	t26 = (((x1389%x1390)>>x1391)*x1392);

	if (t26 != 1592210400LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1393 = 237465;
	uint16_t x1394 = UINT16_MAX;
	static uint32_t x1395 = 0U;
	int16_t x1396 = -2697;
	int32_t t27 = -7;

	t27 = (((x1393%x1394)>>x1395)*x1396);

	if (t27 != -110199420) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1397 = INT16_MIN;
	int16_t x1398 = 1;
	uint8_t x1399 = 15U;
	int8_t x1400 = INT8_MIN;
	int32_t t28 = 1281;

	t28 = (((x1397%x1398)>>x1399)*x1400);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1471 = 1;
	int8_t x1472 = INT8_MIN;

	t29 = (((x1469%x1470)>>x1471)*x1472);

	if (t29 != -37504) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1665 = INT64_MIN;
	int64_t x1666 = INT64_MIN;
	int64_t x1667 = 0LL;
	int64_t x1668 = INT64_MIN;

	t30 = (((x1665%x1666)>>x1667)*x1668);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1670 = INT64_MAX;
	uint64_t t31 = 606711766LLU;

	t31 = (((x1669%x1670)>>x1671)*x1672);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1714 = INT8_MIN;
	int8_t x1715 = 1;
	int64_t x1716 = -104226069637590LL;
	int64_t t32 = 265758623080061659LL;

	t32 = (((x1713%x1714)>>x1715)*x1716);

	if (t32 != -6566242387168170LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1753 = 10178U;
	int32_t x1754 = -430503;
	static uint16_t x1756 = 112U;
	volatile int32_t t33 = -28305;

	t33 = (((x1753%x1754)>>x1755)*x1756);

	if (t33 != 569968) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1785 = 91U;
	int8_t x1786 = -1;
	volatile uint16_t x1787 = 2U;
	volatile int8_t x1788 = INT8_MIN;

	t34 = (((x1785%x1786)>>x1787)*x1788);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1802 = 400395556207796738LLU;
	uint16_t x1803 = 19U;
	uint32_t x1804 = UINT32_MAX;
	volatile uint64_t t35 = 6874318743LLU;

	t35 = (((x1801%x1802)>>x1803)*x1804);

	if (t35 != 12508285991131915293LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1913 = -191752119;
	uint32_t x1914 = 7125823U;
	uint8_t x1915 = 0U;
	int16_t x1916 = INT16_MIN;

	t36 = (((x1913%x1914)>>x1915)*x1916);

	if (t36 != 1025245184U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1933 = 2512285U;
	uint64_t x1934 = UINT64_MAX;
	volatile uint64_t x1935 = 0LLU;
	volatile uint64_t t37 = 135047008485LLU;

	t37 = (((x1933%x1934)>>x1935)*x1936);

	if (t37 != 55998006108235LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1981 = INT32_MAX;
	volatile int32_t x1984 = 36786041;
	static uint32_t t38 = 5767U;

	t38 = (((x1981%x1982)>>x1983)*x1984);

	if (t38 != 2609402606U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2037 = UINT64_MAX;
	volatile int8_t x2038 = 5;
	int8_t x2039 = 35;
	static volatile uint64_t t39 = 222977683220LLU;

	t39 = (((x2037%x2038)>>x2039)*x2040);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2046 = 103932130;
	int8_t x2047 = 12;
	int16_t x2048 = INT16_MIN;
	int64_t t40 = 368119911301LL;

	t40 = (((x2045%x2046)>>x2047)*x2048);

	if (t40 != -82870272LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2049 = -49729162039244279LL;
	int64_t x2050 = 1LL;
	volatile int16_t x2051 = 0;
	static volatile int8_t x2052 = INT8_MIN;
	static int64_t t41 = 491375012LL;

	t41 = (((x2049%x2050)>>x2051)*x2052);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2085 = 3;
	uint64_t x2087 = 55LLU;
	volatile int16_t x2088 = INT16_MIN;
	volatile int64_t t42 = -24448171567665LL;

	t42 = (((x2085%x2086)>>x2087)*x2088);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x2113 = INT32_MIN;
	static int32_t t43 = 7;

	t43 = (((x2113%x2114)>>x2115)*x2116);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2125 = 14U;
	uint64_t x2126 = 3232838LLU;
	uint16_t x2127 = 10U;
	uint32_t x2128 = 193174598U;
	volatile uint64_t t44 = 3621593612112LLU;

	t44 = (((x2125%x2126)>>x2127)*x2128);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2133 = UINT64_MAX;
	uint64_t x2134 = 11925659LLU;
	int64_t x2136 = INT64_MAX;

	t45 = (((x2133%x2134)>>x2135)*x2136);

	if (t45 != 18446744073705758642LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2149 = INT16_MAX;
	static int8_t x2151 = 6;

	t46 = (((x2149%x2150)>>x2151)*x2152);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2157 = 0;
	int16_t x2158 = -1;
	uint8_t x2159 = 0U;

	t47 = (((x2157%x2158)>>x2159)*x2160);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2161 = 6707;
	int16_t x2163 = 0;

	t48 = (((x2161%x2162)>>x2163)*x2164);

	if (t48 != 1710285LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2269 = INT32_MIN;
	static int16_t x2270 = INT16_MIN;
	int16_t x2271 = 2;
	int64_t x2272 = INT64_MIN;
	int64_t t49 = -66641702LL;

	t49 = (((x2269%x2270)>>x2271)*x2272);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x2341 = UINT16_MAX;
	static uint8_t x2343 = 15U;
	volatile int8_t x2344 = INT8_MAX;
	volatile int64_t t50 = 1LL;

	t50 = (((x2341%x2342)>>x2343)*x2344);

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2347 = 1;
	volatile int8_t x2348 = -1;

	t51 = (((x2345%x2346)>>x2347)*x2348);

	if (t51 != -8) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x2389 = 908398699529846118LLU;
	static uint8_t x2390 = UINT8_MAX;
	int16_t x2391 = 2;
	uint32_t x2392 = 382714913U;

	t52 = (((x2389%x2390)>>x2391)*x2392);

	if (t52 != 4592578956LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x2485 = INT8_MAX;
	uint64_t x2486 = UINT64_MAX;
	int8_t x2487 = 0;
	static volatile int8_t x2488 = INT8_MIN;

	t53 = (((x2485%x2486)>>x2487)*x2488);

	if (t53 != 18446744073709535360LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2553 = 4U;
	static int32_t x2554 = -1;
	uint16_t x2555 = 28U;
	uint64_t x2556 = 464631862448697LLU;
	volatile uint64_t t54 = 136003125618116LLU;

	t54 = (((x2553%x2554)>>x2555)*x2556);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x2573 = INT16_MAX;
	volatile int32_t x2574 = -1;
	uint8_t x2575 = 11U;
	volatile int32_t t55 = 3787764;

	t55 = (((x2573%x2574)>>x2575)*x2576);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2597 = 8471LLU;
	int64_t x2598 = 5894512LL;
	int8_t x2599 = 0;
	uint64_t t56 = 197476239018LLU;

	t56 = (((x2597%x2598)>>x2599)*x2600);

	if (t56 != 18446744073709543145LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2653 = 528764720054LLU;
	uint16_t x2655 = 29U;
	uint8_t x2656 = 0U;

	t57 = (((x2653%x2654)>>x2655)*x2656);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2773 = -1LL;
	int8_t x2774 = -1;
	int32_t x2776 = -1;
	volatile int64_t t58 = -79921334997030257LL;

	t58 = (((x2773%x2774)>>x2775)*x2776);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x2929 = 63U;
	int8_t x2930 = -1;
	uint16_t x2931 = 0U;
	uint32_t t59 = 23523345U;

	t59 = (((x2929%x2930)>>x2931)*x2932);

	if (t59 != 181187055U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2949 = UINT8_MAX;
	static uint64_t x2950 = 20312LLU;
	volatile uint16_t x2951 = 11U;
	uint64_t x2952 = 9286622969295462LLU;
	static uint64_t t60 = 198576825041390LLU;

	t60 = (((x2949%x2950)>>x2951)*x2952);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2953 = 656;
	static volatile uint32_t x2954 = 1079U;
	uint8_t x2955 = 1U;
	static volatile uint32_t x2956 = UINT32_MAX;
	static uint32_t t61 = 795U;

	t61 = (((x2953%x2954)>>x2955)*x2956);

	if (t61 != 4294966968U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3013 = INT32_MIN;
	volatile int32_t x3014 = -2;
	volatile int16_t x3015 = 11;

	t62 = (((x3013%x3014)>>x3015)*x3016);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3045 = 16;
	uint16_t x3046 = 72U;
	static uint16_t x3047 = 1U;
	int32_t x3048 = -1;
	int32_t t63 = -10;

	t63 = (((x3045%x3046)>>x3047)*x3048);

	if (t63 != -8) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3082 = INT8_MIN;
	int32_t x3083 = 0;
	int16_t x3084 = -290;
	int32_t t64 = -1;

	t64 = (((x3081%x3082)>>x3083)*x3084);

	if (t64 != -32480) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3161 = INT8_MIN;
	static uint8_t x3163 = 13U;
	uint32_t x3164 = 94440U;
	int64_t t65 = -3747360137094027LL;

	t65 = (((x3161%x3162)>>x3163)*x3164);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3185 = 1140066533LL;
	int64_t x3186 = INT64_MAX;
	int8_t x3188 = -44;
	int64_t t66 = -118933123243635874LL;

	t66 = (((x3185%x3186)>>x3187)*x3188);

	if (t66 != -6123392LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3193 = 2169319615846LL;
	volatile uint8_t x3194 = 1U;
	volatile uint32_t x3195 = 14U;
	volatile uint16_t x3196 = 869U;

	t67 = (((x3193%x3194)>>x3195)*x3196);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3221 = UINT16_MAX;
	volatile uint16_t x3222 = UINT16_MAX;
	uint16_t x3223 = 2U;
	volatile uint64_t t68 = 54638968382223153LLU;

	t68 = (((x3221%x3222)>>x3223)*x3224);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x3261 = INT16_MAX;
	int64_t x3262 = 4089835LL;
	uint8_t x3263 = 16U;
	int16_t x3264 = 2155;
	int64_t t69 = -9302480LL;

	t69 = (((x3261%x3262)>>x3263)*x3264);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3270 = INT8_MAX;
	static int8_t x3272 = INT8_MIN;
	volatile int64_t t70 = -859178417LL;

	t70 = (((x3269%x3270)>>x3271)*x3272);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3378 = 1799;
	uint8_t x3379 = 0U;

	t71 = (((x3377%x3378)>>x3379)*x3380);

	if (t71 != -169060LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3402 = UINT16_MAX;
	uint8_t x3403 = 0U;
	int64_t x3404 = -1LL;
	volatile int64_t t72 = -54273002042136LL;

	t72 = (((x3401%x3402)>>x3403)*x3404);

	if (t72 != -653LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3533 = 2533U;
	volatile int16_t x3534 = INT16_MIN;
	uint64_t x3535 = 3LLU;
	uint64_t x3536 = 19907657136271LLU;
	volatile uint64_t t73 = 755LLU;

	t73 = (((x3533%x3534)>>x3535)*x3536);

	if (t73 != 6290819655061636LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x3589 = UINT32_MAX;
	int64_t x3590 = -73053337817875056LL;
	uint16_t x3591 = 0U;
	int32_t x3592 = INT32_MIN;
	static volatile int64_t t74 = -1740611829484004270LL;

	t74 = (((x3589%x3590)>>x3591)*x3592);

	if (t74 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3634 = INT64_MIN;
	static uint32_t x3635 = 0U;
	int64_t x3636 = -1LL;
	volatile int64_t t75 = 2565LL;

	t75 = (((x3633%x3634)>>x3635)*x3636);

	if (t75 != -3615LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3641 = INT64_MAX;
	int16_t x3642 = 28;
	uint8_t x3643 = 2U;
	int64_t x3644 = 3267814650971783LL;

	t76 = (((x3641%x3642)>>x3643)*x3644);

	if (t76 != 3267814650971783LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3693 = UINT64_MAX;
	volatile int32_t x3694 = 2;
	static volatile uint64_t t77 = 1772196610527116344LLU;

	t77 = (((x3693%x3694)>>x3695)*x3696);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3749 = 11041695LL;
	uint64_t x3750 = 384561422851262580LLU;
	static uint8_t x3751 = 0U;
	int8_t x3752 = -1;
	uint64_t t78 = 306428909246398LLU;

	t78 = (((x3749%x3750)>>x3751)*x3752);

	if (t78 != 18446744073698509921LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3753 = INT16_MIN;
	volatile uint8_t x3754 = 1U;
	static uint8_t x3755 = 15U;
	int32_t x3756 = INT32_MIN;
	int32_t t79 = 685841137;

	t79 = (((x3753%x3754)>>x3755)*x3756);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3761 = -95764938LL;
	int8_t x3762 = -1;
	uint16_t x3763 = 48U;
	volatile int16_t x3764 = -1;
	int64_t t80 = -20572473122LL;

	t80 = (((x3761%x3762)>>x3763)*x3764);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3769 = INT16_MAX;
	int64_t x3770 = INT64_MIN;
	int16_t x3771 = 34;
	int64_t x3772 = -3284824384778LL;
	static int64_t t81 = -11251LL;

	t81 = (((x3769%x3770)>>x3771)*x3772);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3901 = UINT16_MAX;
	uint32_t x3902 = 7385201U;
	static volatile uint32_t x3903 = 5U;
	int8_t x3904 = INT8_MIN;
	uint32_t t82 = 1868636873U;

	t82 = (((x3901%x3902)>>x3903)*x3904);

	if (t82 != 4294705280U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3913 = 1429U;
	int16_t x3914 = INT16_MIN;
	static int16_t x3915 = 27;
	volatile int8_t x3916 = INT8_MIN;
	uint32_t t83 = 1U;

	t83 = (((x3913%x3914)>>x3915)*x3916);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3934 = 1;
	volatile uint8_t x3935 = 1U;
	int64_t x3936 = 66463767LL;
	int64_t t84 = 5548LL;

	t84 = (((x3933%x3934)>>x3935)*x3936);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3937 = 0U;
	int16_t x3939 = 0;
	int32_t x3940 = -1;
	static int32_t t85 = -8322;

	t85 = (((x3937%x3938)>>x3939)*x3940);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4037 = 2393LLU;
	uint64_t t86 = 1334477660788740739LLU;

	t86 = (((x4037%x4038)>>x4039)*x4040);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4077 = UINT64_MAX;
	int64_t x4078 = INT64_MIN;
	uint16_t x4079 = 15U;
	volatile int64_t x4080 = -1LL;
	uint64_t t87 = 190349937861LLU;

	t87 = (((x4077%x4078)>>x4079)*x4080);

	if (t87 != 18446462598732840961LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4149 = INT32_MIN;
	volatile uint32_t x4150 = 149U;
	uint8_t x4151 = 30U;
	uint32_t x4152 = 859210137U;

	t88 = (((x4149%x4150)>>x4151)*x4152);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x4185 = INT16_MIN;
	uint32_t x4186 = 16772963U;
	uint32_t x4187 = 2U;
	volatile uint32_t t89 = 1960664259U;

	t89 = (((x4185%x4186)>>x4187)*x4188);

	if (t89 != 10032000U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4221 = INT8_MIN;
	uint64_t x4222 = UINT64_MAX;
	volatile int64_t x4224 = INT64_MIN;

	t90 = (((x4221%x4222)>>x4223)*x4224);

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4226 = INT8_MIN;
	int8_t x4227 = 1;
	int8_t x4228 = INT8_MIN;
	static volatile int32_t t91 = -7;

	t91 = (((x4225%x4226)>>x4227)*x4228);

	if (t91 != -8064) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4238 = 1;
	uint8_t x4239 = 8U;
	volatile uint64_t t92 = 3370407241LLU;

	t92 = (((x4237%x4238)>>x4239)*x4240);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4261 = -358554673588932LL;
	static uint64_t x4262 = 417770595056490371LLU;
	uint32_t x4264 = 2099U;
	uint64_t t93 = 670200169818449523LLU;

	t93 = (((x4261%x4262)>>x4263)*x4264);

	if (t93 != 16917765927407621205LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4277 = 15U;
	static volatile uint8_t x4279 = 1U;
	volatile uint32_t t94 = 524U;

	t94 = (((x4277%x4278)>>x4279)*x4280);

	if (t94 != 4294967289U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x4281 = 1LLU;
	int16_t x4282 = -12;
	uint16_t x4283 = 5U;
	int64_t x4284 = 2077252310230347LL;
	volatile uint64_t t95 = 6753254049754LLU;

	t95 = (((x4281%x4282)>>x4283)*x4284);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x4289 = 443U;
	int16_t x4290 = -14145;
	uint8_t x4291 = 14U;
	uint64_t t96 = 3LLU;

	t96 = (((x4289%x4290)>>x4291)*x4292);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4349 = 0U;
	int16_t x4350 = -181;
	int16_t x4352 = -1;

	t97 = (((x4349%x4350)>>x4351)*x4352);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4353 = 5;
	volatile int8_t x4354 = INT8_MAX;
	volatile int16_t x4355 = 0;
	uint16_t x4356 = 156U;
	volatile int32_t t98 = -28;

	t98 = (((x4353%x4354)>>x4355)*x4356);

	if (t98 != 780) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4385 = 6211686U;
	int8_t x4387 = 17;
	uint64_t x4388 = 2103LLU;
	uint64_t t99 = 38LLU;

	t99 = (((x4385%x4386)>>x4387)*x4388);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

