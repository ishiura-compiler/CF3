#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x37 = 84U;
int32_t x101 = INT32_MIN;
int8_t x113 = 22;
volatile int32_t t4 = -47967607;
int8_t x125 = -1;
volatile int32_t t5 = -925;
static int64_t x131 = 0LL;
uint8_t x132 = 36U;
volatile int64_t t8 = -1LL;
uint16_t x214 = UINT16_MAX;
int8_t x231 = INT8_MAX;
int16_t x261 = INT16_MIN;
uint16_t x263 = 4U;
uint16_t x693 = 3U;
volatile uint32_t x694 = 383U;
static uint32_t x713 = UINT32_MAX;
volatile uint64_t x716 = 0LLU;
int64_t t15 = 2821136391585LL;
int8_t x719 = 15;
static uint64_t x855 = 24LLU;
volatile int8_t x856 = 3;
volatile uint64_t t17 = 6631858827601216LLU;
int64_t x1053 = -1LL;
uint8_t x1056 = 10U;
uint64_t t19 = 2373761751129897LLU;
uint32_t x1159 = UINT32_MAX;
static uint8_t x1200 = 0U;
uint64_t t22 = 2865639257676LLU;
static volatile uint8_t x1238 = 17U;
uint8_t x1240 = 1U;
int16_t x1276 = 0;
int16_t x1353 = -1;
static int32_t t28 = -1;
uint32_t x1361 = UINT32_MAX;
int32_t x1402 = -1;
volatile uint64_t t31 = 2LLU;
int8_t x1537 = INT8_MIN;
uint32_t x1539 = 42U;
uint64_t t32 = 69073312103540LLU;
volatile int64_t x1601 = 112810577LL;
uint16_t x1604 = 0U;
static volatile int64_t t33 = -83013348244527075LL;
volatile uint64_t x1793 = UINT64_MAX;
static int64_t x1795 = INT64_MAX;
static uint16_t x1844 = 23U;
uint8_t x1938 = UINT8_MAX;
volatile uint32_t t38 = 297195U;
static volatile uint64_t x1943 = UINT64_MAX;
static uint8_t x1944 = 3U;
volatile uint64_t t39 = 75452444156LLU;
int32_t x1962 = 3834163;
uint8_t x1964 = 0U;
volatile int32_t t41 = 939303173;
uint64_t x2107 = 312736598244446LLU;
static uint32_t x2149 = 28U;
int8_t x2151 = 0;
uint8_t x2192 = 42U;
static volatile uint16_t x2196 = 7U;
static int16_t x2246 = -2312;
volatile int8_t x2247 = -1;
static volatile uint32_t x2295 = UINT32_MAX;
volatile uint8_t x2312 = 12U;
uint64_t t52 = 112764847053257580LLU;
int16_t x2407 = -1;
int32_t x2685 = INT32_MAX;
uint8_t x2688 = 2U;
static uint8_t x2697 = UINT8_MAX;
volatile uint64_t x2698 = 536847032LLU;
int16_t x2757 = INT16_MIN;
static volatile int64_t x2758 = -81LL;
int32_t x2833 = INT32_MIN;
int8_t x2836 = 24;
volatile uint16_t x3135 = 5U;
uint32_t t63 = 164665U;
int8_t x3183 = -14;
volatile uint8_t x3184 = 6U;
volatile int64_t t64 = 56LL;
static volatile int64_t t66 = -2115274621833LL;
uint32_t x3243 = 162309U;
static uint64_t x3305 = 3LLU;
uint8_t x3308 = 26U;
static uint8_t x3360 = 0U;
uint32_t t69 = 1131881U;
int16_t x3382 = 1164;
int8_t x3448 = 1;
static uint64_t x3483 = 20218LLU;
static volatile uint8_t x3484 = 7U;
volatile int16_t x3512 = 3;
int32_t t74 = -543;
uint32_t x3564 = 17U;
volatile uint64_t x3599 = UINT64_MAX;
volatile uint64_t t78 = 3LLU;
static uint32_t x3902 = 3U;
static int16_t x3904 = 0;
uint8_t x3906 = 0U;
volatile uint64_t x4089 = UINT64_MAX;
int8_t x4090 = -1;
volatile int8_t x4092 = 40;
volatile int32_t x4141 = 6;
int64_t x4142 = 913013793LL;
uint64_t x4143 = UINT64_MAX;
uint16_t x4345 = UINT16_MAX;
uint64_t t90 = 3LLU;
int8_t x4641 = INT8_MIN;
int64_t x4765 = INT64_MAX;
uint64_t t93 = 87005LLU;
int8_t x4911 = -34;
volatile int16_t x4991 = 313;
volatile int32_t t97 = 642;


void f0(void) {
	static uint32_t x13 = 196662064U;
	int8_t x14 = -6;
	static volatile uint16_t x15 = 3928U;
	uint8_t x16 = 28U;
	uint32_t t0 = 62687125U;

	t0 = ((x13^(x14-x15))<<x16);

	if (t0 != 536870912U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x38 = 98LL;
	int64_t x39 = -1LL;
	static volatile uint16_t x40 = 3U;
	volatile int64_t t1 = 93712LL;

	t1 = ((x37^(x38-x39))<<x40);

	if (t1 != 440LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x85 = UINT16_MAX;
	int8_t x86 = -1;
	int32_t x87 = -265;
	static volatile uint16_t x88 = 4U;
	int32_t t2 = 3394;

	t2 = ((x85^(x86-x87))<<x88);

	if (t2 != 1044336) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x102 = 1002365855742227LLU;
	int16_t x103 = INT16_MAX;
	int16_t x104 = 0;
	static volatile uint64_t t3 = 3735740892322097047LLU;

	t3 = ((x101^(x102-x103))<<x104);

	if (t3 != 18445741709892761876LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x114 = 1735;
	int32_t x115 = -1;
	uint8_t x116 = 3U;

	t4 = ((x113^(x114-x115))<<x116);

	if (t4 != 14064) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x126 = -1295;
	int8_t x127 = -1;
	int8_t x128 = 1;

	t5 = ((x125^(x126-x127))<<x128);

	if (t5 != 2586) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x129 = 23;
	static volatile uint32_t x130 = 48346817U;
	int64_t t6 = -10894LL;

	t6 = ((x129^(x130-x131))<<x132);

	if (t6 != 3322369409200160768LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x205 = 12650298079533096LLU;
	int8_t x206 = INT8_MIN;
	static int64_t x207 = 76051008LL;
	uint16_t x208 = 4U;
	volatile uint64_t t7 = 118655LLU;

	t7 = ((x205^(x206-x207))<<x208);

	if (t7 != 18244339303220860544LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x209 = INT16_MIN;
	uint16_t x210 = 1220U;
	int64_t x211 = 417663708025619132LL;
	volatile int8_t x212 = 2;

	t8 = ((x209^(x210-x211))<<x212);

	if (t8 != 1670654832102344736LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x213 = -1LL;
	uint64_t x215 = 3528150647805344LLU;
	int8_t x216 = 0;
	uint64_t t9 = 9140746090238LLU;

	t9 = ((x213^(x214-x215))<<x216);

	if (t9 != 3528150647739808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MIN;
	static int16_t x232 = 1;
	int32_t t10 = 22;

	t10 = ((x229^(x230-x231))<<x232);

	if (t10 != 65026) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x262 = 139U;
	uint64_t x264 = 1LLU;
	volatile uint32_t t11 = 1U;

	t11 = ((x261^(x262-x263))<<x264);

	if (t11 != 4294902030U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x365 = -1;
	int32_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	uint16_t x368 = 3U;
	static int32_t t12 = 0;

	t12 = ((x365^(x366-x367))<<x368);

	if (t12 != 2040) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x513 = 299608176237LLU;
	volatile uint8_t x514 = 0U;
	int8_t x515 = -1;
	static uint8_t x516 = 3U;
	volatile uint64_t t13 = 26470204784LLU;

	t13 = ((x513^(x514-x515))<<x516);

	if (t13 != 2396865409888LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x695 = -1;
	static volatile uint32_t x696 = 8U;
	volatile uint32_t t14 = 356U;

	t14 = ((x693^(x694-x695))<<x696);

	if (t14 != 99072U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x714 = 883LL;
	volatile int32_t x715 = -407;

	t15 = ((x713^(x714-x715))<<x716);

	if (t15 != 4294966005LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x717 = INT32_MIN;
	uint32_t x718 = 70026575U;
	uint8_t x720 = 7U;
	uint32_t t16 = 92332200U;

	t16 = ((x717^(x718-x719))<<x720);

	if (t16 != 373465088U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x853 = 1;
	int32_t x854 = 7349;

	t17 = ((x853^(x854-x855))<<x856);

	if (t17 != 58592LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x1054 = INT16_MIN;
	uint64_t x1055 = 22822714302778836LLU;
	uint64_t t18 = 699768LLU;

	t18 = ((x1053^(x1054-x1055))<<x1056);

	if (t18 != 4923715372369529856LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1125 = UINT64_MAX;
	static int8_t x1126 = INT8_MIN;
	int8_t x1127 = -1;
	volatile uint8_t x1128 = 0U;

	t19 = ((x1125^(x1126-x1127))<<x1128);

	if (t19 != 126LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1149 = UINT16_MAX;
	uint32_t x1150 = 354576976U;
	uint64_t x1151 = 186360LLU;
	uint8_t x1152 = 32U;
	volatile uint64_t t20 = 18768036095LLU;

	t20 = ((x1149^(x1150-x1151))<<x1152);

	if (t20 != 1522055763101483008LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1157 = 1815U;
	static uint8_t x1158 = UINT8_MAX;
	uint16_t x1160 = 4U;
	uint32_t t21 = 1347U;

	t21 = ((x1157^(x1158-x1159))<<x1160);

	if (t21 != 24944U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x1197 = UINT8_MAX;
	uint32_t x1198 = UINT32_MAX;
	volatile uint64_t x1199 = UINT64_MAX;

	t22 = ((x1197^(x1198-x1199))<<x1200);

	if (t22 != 4294967551LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x1237 = 7249;
	static uint64_t x1239 = 103LLU;
	volatile uint64_t t23 = 116347108LLU;

	t23 = ((x1237^(x1238-x1239))<<x1240);

	if (t23 != 18446744073709537270LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1273 = 1U;
	static uint32_t x1274 = 81U;
	int8_t x1275 = INT8_MIN;
	volatile uint32_t t24 = 950414878U;

	t24 = ((x1273^(x1274-x1275))<<x1276);

	if (t24 != 208U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1289 = INT16_MIN;
	uint64_t x1290 = 2772878957117LLU;
	int64_t x1291 = -245LL;
	uint16_t x1292 = 39U;
	uint64_t t25 = 71248621292LLU;

	t25 = ((x1289^(x1290-x1291))<<x1292);

	if (t25 != 14145130229919645696LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1293 = 2;
	int16_t x1294 = INT16_MAX;
	int16_t x1295 = -3816;
	int32_t x1296 = 9;
	volatile int32_t t26 = 21362;

	t26 = ((x1293^(x1294-x1295))<<x1296);

	if (t26 != 18729472) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1345 = -1;
	int16_t x1346 = INT16_MAX;
	static uint64_t x1347 = 480LLU;
	uint32_t x1348 = 5U;
	uint64_t t27 = 26LLU;

	t27 = ((x1345^(x1346-x1347))<<x1348);

	if (t27 != 18446744073708518400LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1354 = -5736;
	int32_t x1355 = 0;
	static int8_t x1356 = 0;

	t28 = ((x1353^(x1354-x1355))<<x1356);

	if (t28 != 5735) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1362 = INT16_MAX;
	volatile int8_t x1363 = -38;
	static volatile uint16_t x1364 = 11U;
	static volatile uint32_t t29 = 5413U;

	t29 = ((x1361^(x1362-x1363))<<x1364);

	if (t29 != 4227780608U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1401 = UINT32_MAX;
	static int8_t x1403 = INT8_MAX;
	uint16_t x1404 = 3U;
	volatile uint32_t t30 = 3U;

	t30 = ((x1401^(x1402-x1403))<<x1404);

	if (t30 != 1016U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x1505 = INT32_MIN;
	uint64_t x1506 = 97LLU;
	uint16_t x1507 = 15U;
	int16_t x1508 = 1;

	t31 = ((x1505^(x1506-x1507))<<x1508);

	if (t31 != 18446744069414584484LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1538 = 19456353730LLU;
	uint64_t x1540 = 0LLU;

	t32 = ((x1537^(x1538-x1539))<<x1540);

	if (t32 != 18446744054253197848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1602 = -2;
	int8_t x1603 = INT8_MIN;

	t33 = ((x1601^(x1602-x1603))<<x1604);

	if (t33 != 112810543LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1794 = 23;
	uint8_t x1796 = 11U;
	volatile uint64_t t34 = 919060485286527278LLU;

	t34 = ((x1793^(x1794-x1795))<<x1796);

	if (t34 != 18446744073709500416LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1829 = 3;
	uint64_t x1830 = 7367791221LLU;
	int8_t x1831 = -2;
	static int32_t x1832 = 1;
	uint64_t t35 = 128487837027100173LLU;

	t35 = ((x1829^(x1830-x1831))<<x1832);

	if (t35 != 14735582440LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1841 = INT32_MIN;
	volatile int32_t x1842 = INT32_MIN;
	int32_t x1843 = -1;
	int32_t t36 = 5;

	t36 = ((x1841^(x1842-x1843))<<x1844);

	if (t36 != 8388608) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1913 = UINT32_MAX;
	static int16_t x1914 = -1;
	static int8_t x1915 = -20;
	static volatile uint8_t x1916 = 2U;
	uint32_t t37 = 772419896U;

	t37 = ((x1913^(x1914-x1915))<<x1916);

	if (t37 != 4294967216U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1937 = UINT8_MAX;
	static uint32_t x1939 = 814746159U;
	int8_t x1940 = 1;

	t38 = ((x1937^(x1938-x1939))<<x1940);

	if (t38 != 2665475166U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1941 = INT64_MIN;
	uint64_t x1942 = 12394160151319957LLU;

	t39 = ((x1941^(x1942-x1943))<<x1944);

	if (t39 != 99153281210559664LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1949 = 20U;
	uint8_t x1950 = 1U;
	volatile uint16_t x1951 = 0U;
	int8_t x1952 = 1;
	volatile int32_t t40 = -8085;

	t40 = ((x1949^(x1950-x1951))<<x1952);

	if (t40 != 42) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x1961 = 24U;
	int8_t x1963 = 1;

	t41 = ((x1961^(x1962-x1963))<<x1964);

	if (t41 != 3834154) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2025 = INT16_MAX;
	volatile uint8_t x2026 = 23U;
	uint32_t x2027 = 9551084U;
	int16_t x2028 = 7;
	volatile uint32_t t42 = 423863U;

	t42 = ((x2025^(x2026-x2027))<<x2028);

	if (t42 != 3072223744U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2049 = -1;
	uint16_t x2050 = 52U;
	uint32_t x2051 = UINT32_MAX;
	static uint8_t x2052 = 12U;
	volatile uint32_t t43 = 19U;

	t43 = ((x2049^(x2050-x2051))<<x2052);

	if (t43 != 4294746112U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x2105 = -1;
	int64_t x2106 = -1LL;
	int8_t x2108 = 1;
	uint64_t t44 = 26553359068LLU;

	t44 = ((x2105^(x2106-x2107))<<x2108);

	if (t44 != 625473196488892LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2150 = INT16_MIN;
	uint8_t x2152 = 4U;
	static volatile uint32_t t45 = 292981U;

	t45 = ((x2149^(x2150-x2151))<<x2152);

	if (t45 != 4294443456U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2189 = -113191569508LL;
	static volatile uint8_t x2190 = UINT8_MAX;
	uint64_t x2191 = 11865174622367LLU;
	volatile uint64_t t46 = 162LLU;

	t46 = ((x2189^(x2190-x2191))<<x2192);

	if (t46 != 16996567401510207488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2193 = UINT32_MAX;
	static int8_t x2194 = INT8_MIN;
	static uint32_t x2195 = 0U;
	uint32_t t47 = 128675837U;

	t47 = ((x2193^(x2194-x2195))<<x2196);

	if (t47 != 16256U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2229 = -1;
	int8_t x2230 = INT8_MIN;
	uint8_t x2231 = 3U;
	uint8_t x2232 = 3U;
	int32_t t48 = -370322;

	t48 = ((x2229^(x2230-x2231))<<x2232);

	if (t48 != 1040) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2245 = 42179393U;
	static uint64_t x2248 = 0LLU;
	volatile uint32_t t49 = 53485983U;

	t49 = ((x2245^(x2246-x2247))<<x2248);

	if (t49 != 4252790200U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2293 = 31U;
	int8_t x2294 = -1;
	int32_t x2296 = 2;
	volatile uint32_t t50 = 11344U;

	t50 = ((x2293^(x2294-x2295))<<x2296);

	if (t50 != 124U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2309 = 3;
	uint16_t x2310 = 196U;
	volatile int16_t x2311 = -4;
	int32_t t51 = -36162;

	t51 = ((x2309^(x2310-x2311))<<x2312);

	if (t51 != 831488) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2325 = INT64_MIN;
	uint64_t x2326 = 12759680LLU;
	volatile uint8_t x2327 = 1U;
	uint8_t x2328 = 26U;

	t52 = ((x2325^(x2326-x2327))<<x2328);

	if (t52 != 856287562694656LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2405 = 56U;
	int16_t x2406 = -1;
	int8_t x2408 = 1;
	int32_t t53 = -97623571;

	t53 = ((x2405^(x2406-x2407))<<x2408);

	if (t53 != 112) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2686 = 27U;
	int32_t x2687 = -184807;
	uint32_t t54 = 364475U;

	t54 = ((x2685^(x2686-x2687))<<x2688);

	if (t54 != 4294227956U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2699 = -2812316;
	uint8_t x2700 = 0U;
	uint64_t t55 = 245755170LLU;

	t55 = ((x2697^(x2698-x2699))<<x2700);

	if (t55 != 539659435LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2717 = -30;
	uint32_t x2718 = 1479U;
	int16_t x2719 = -284;
	static uint8_t x2720 = 1U;
	static volatile uint32_t t56 = 8362033U;

	t56 = ((x2717^(x2718-x2719))<<x2720);

	if (t56 != 4294963714U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2759 = -1;
	uint16_t x2760 = 13U;
	static volatile int64_t t57 = 591487402202LL;

	t57 = ((x2757^(x2758-x2759))<<x2760);

	if (t57 != 267780096LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2834 = INT8_MIN;
	volatile int64_t x2835 = -1LL;
	static volatile int64_t t58 = -50688835975544LL;

	t58 = ((x2833^(x2834-x2835))<<x2836);

	if (t58 != 36028794888257536LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x2857 = INT64_MAX;
	uint64_t x2858 = UINT64_MAX;
	volatile uint16_t x2859 = 43U;
	uint16_t x2860 = 28U;
	uint64_t t59 = 49130034LLU;

	t59 = ((x2857^(x2858-x2859))<<x2860);

	if (t59 != 11542724608LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2917 = -1;
	uint16_t x2918 = 3483U;
	uint64_t x2919 = UINT64_MAX;
	static uint8_t x2920 = 4U;
	uint64_t t60 = 277514966062578LLU;

	t60 = ((x2917^(x2918-x2919))<<x2920);

	if (t60 != 18446744073709495856LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2961 = UINT16_MAX;
	uint64_t x2962 = 8669588LLU;
	volatile int16_t x2963 = 3;
	int16_t x2964 = 1;
	uint64_t t61 = 22LLU;

	t61 = ((x2961^(x2962-x2963))<<x2964);

	if (t61 != 17394908LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2965 = 623889428867LLU;
	static uint32_t x2966 = 1511229333U;
	volatile int64_t x2967 = -7861524LL;
	static uint8_t x2968 = 5U;
	uint64_t t62 = 4044467226512087LLU;

	t62 = ((x2965^(x2966-x2967))<<x2968);

	if (t62 != 19941663810880LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3133 = 1959336U;
	uint16_t x3134 = 375U;
	volatile int8_t x3136 = 1;

	t63 = ((x3133^(x3134-x3135))<<x3136);

	if (t63 != 3918260U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3181 = 1U;
	int64_t x3182 = 69LL;

	t64 = ((x3181^(x3182-x3183))<<x3184);

	if (t64 != 5248LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x3213 = -1LL;
	uint64_t x3214 = 1382711731238988216LLU;
	uint8_t x3215 = 56U;
	uint8_t x3216 = 0U;
	volatile uint64_t t65 = 96LLU;

	t65 = ((x3213^(x3214-x3215))<<x3216);

	if (t65 != 17064032342470563455LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x3237 = 32;
	static volatile uint32_t x3238 = UINT32_MAX;
	int64_t x3239 = -1LL;
	int8_t x3240 = 0;

	t66 = ((x3237^(x3238-x3239))<<x3240);

	if (t66 != 4294967328LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3241 = INT8_MIN;
	int32_t x3242 = -1;
	uint8_t x3244 = 3U;
	uint32_t t67 = 1647U;

	t67 = ((x3241^(x3242-x3243))<<x3244);

	if (t67 != 1299408U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3306 = INT8_MIN;
	int16_t x3307 = -9536;
	volatile uint64_t t68 = 9LLU;

	t68 = ((x3305^(x3306-x3307))<<x3308);

	if (t68 != 631561519104LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3357 = -1;
	static uint8_t x3358 = 1U;
	volatile uint32_t x3359 = 289U;

	t69 = ((x3357^(x3358-x3359))<<x3360);

	if (t69 != 287U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3381 = -1;
	uint32_t x3383 = 7172U;
	uint8_t x3384 = 0U;
	uint32_t t70 = 4U;

	t70 = ((x3381^(x3382-x3383))<<x3384);

	if (t70 != 6007U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3393 = INT32_MIN;
	int64_t x3394 = INT64_MAX;
	uint64_t x3395 = UINT64_MAX;
	volatile int16_t x3396 = 2;
	volatile uint64_t t71 = 5337895367968LLU;

	t71 = ((x3393^(x3394-x3395))<<x3396);

	if (t71 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3445 = 56118746LLU;
	static int16_t x3446 = -1;
	uint16_t x3447 = 1077U;
	uint64_t t72 = 862752925685969LLU;

	t72 = ((x3445^(x3446-x3447))<<x3448);

	if (t72 != 18446744073597316128LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x3481 = 781143330U;
	uint16_t x3482 = UINT16_MAX;
	static volatile uint64_t t73 = 19584669824227220LLU;

	t73 = ((x3481^(x3482-x3483))<<x3484);

	if (t73 != 99992081280LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x3509 = 38U;
	uint16_t x3510 = UINT16_MAX;
	int8_t x3511 = INT8_MAX;

	t74 = ((x3509^(x3510-x3511))<<x3512);

	if (t74 != 523568) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3561 = 3LLU;
	int32_t x3562 = -1;
	volatile uint64_t x3563 = UINT64_MAX;
	uint64_t t75 = 1747459883428427LLU;

	t75 = ((x3561^(x3562-x3563))<<x3564);

	if (t75 != 393216LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3581 = -1;
	volatile uint32_t x3582 = 32824U;
	uint32_t x3583 = 0U;
	static uint8_t x3584 = 11U;
	volatile uint32_t t76 = 487U;

	t76 = ((x3581^(x3582-x3583))<<x3584);

	if (t76 != 4227741696U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3597 = UINT8_MAX;
	int16_t x3598 = INT16_MIN;
	static int8_t x3600 = 4;
	static uint64_t t77 = 10LLU;

	t77 = ((x3597^(x3598-x3599))<<x3600);

	if (t77 != 18446744073709031392LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3625 = 200U;
	uint64_t x3626 = 48004317LLU;
	uint8_t x3627 = 19U;
	volatile uint16_t x3628 = 4U;

	t78 = ((x3625^(x3626-x3627))<<x3628);

	if (t78 != 768065568LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x3661 = 3770;
	volatile uint16_t x3662 = 1337U;
	uint64_t x3663 = 248768026767988LLU;
	uint16_t x3664 = 18U;
	volatile uint64_t t79 = 13247189608639196LLU;

	t79 = ((x3661^(x3662-x3663))<<x3664);

	if (t79 != 8573930686773985280LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3901 = INT64_MAX;
	volatile int16_t x3903 = 10;
	int64_t t80 = -124249LL;

	t80 = ((x3901^(x3902-x3903))<<x3904);

	if (t80 != 9223372032559808518LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3905 = 31393307LL;
	int8_t x3907 = -1;
	uint16_t x3908 = 9U;
	static int64_t t81 = 731LL;

	t81 = ((x3905^(x3906-x3907))<<x3908);

	if (t81 != 16073372672LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4005 = -1;
	static int32_t x4006 = -1;
	uint16_t x4007 = 12405U;
	int16_t x4008 = 1;
	volatile int32_t t82 = -192;

	t82 = ((x4005^(x4006-x4007))<<x4008);

	if (t82 != 24810) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4077 = 14703862U;
	int32_t x4078 = -425534;
	int8_t x4079 = 10;
	uint8_t x4080 = 0U;
	uint32_t t83 = 3735U;

	t83 = ((x4077^(x4078-x4079))<<x4080);

	if (t83 != 4279885134U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4091 = 8LL;
	uint64_t t84 = 1040357906039209LLU;

	t84 = ((x4089^(x4090-x4091))<<x4092);

	if (t84 != 8796093022208LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4144 = 13;
	uint64_t t85 = 499738LLU;

	t85 = ((x4141^(x4142-x4143))<<x4144);

	if (t85 != 7479409016832LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4153 = 13187U;
	volatile uint32_t x4154 = UINT32_MAX;
	uint64_t x4155 = 12109LLU;
	int8_t x4156 = 0;
	volatile uint64_t t86 = 120151011LLU;

	t86 = ((x4153^(x4154-x4155))<<x4156);

	if (t86 != 4294959921LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4249 = -3;
	volatile int8_t x4250 = INT8_MIN;
	int8_t x4251 = -1;
	uint8_t x4252 = 3U;
	int32_t t87 = 1415;

	t87 = ((x4249^(x4250-x4251))<<x4252);

	if (t87 != 992) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x4325 = 26;
	int8_t x4326 = 60;
	uint32_t x4327 = UINT32_MAX;
	uint8_t x4328 = 8U;
	static uint32_t t88 = 91U;

	t88 = ((x4325^(x4326-x4327))<<x4328);

	if (t88 != 9984U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4346 = -4677443501167LL;
	static uint64_t x4347 = 1LLU;
	static uint8_t x4348 = 54U;
	volatile uint64_t t89 = 85663062604LLU;

	t89 = ((x4345^(x4346-x4347))<<x4348);

	if (t89 != 1999598234552500224LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4365 = INT8_MIN;
	uint64_t x4366 = 35850815LLU;
	static int8_t x4367 = -1;
	uint8_t x4368 = 0U;

	t90 = ((x4365^(x4366-x4367))<<x4368);

	if (t90 != 18446744073673700800LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4577 = -1;
	uint64_t x4578 = 22585907118335LLU;
	int32_t x4579 = -2;
	int32_t x4580 = 0;
	volatile uint64_t t91 = 1332928313105754212LLU;

	t91 = ((x4577^(x4578-x4579))<<x4580);

	if (t91 != 18446721487802433278LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4642 = -75724;
	uint32_t x4643 = 502990477U;
	uint32_t x4644 = 28U;
	volatile uint32_t t92 = 1U;

	t92 = ((x4641^(x4642-x4643))<<x4644);

	if (t92 != 1879048192U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4766 = 54284663811035566LLU;
	volatile uint16_t x4767 = UINT16_MAX;
	int8_t x4768 = 1;

	t93 = ((x4765^(x4766-x4767))<<x4768);

	if (t93 != 18338174746087611552LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4829 = INT16_MIN;
	int16_t x4830 = INT16_MAX;
	uint64_t x4831 = UINT64_MAX;
	static volatile int8_t x4832 = 1;
	volatile uint64_t t94 = 154459805607324LLU;

	t94 = ((x4829^(x4830-x4831))<<x4832);

	if (t94 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x4909 = 0;
	int8_t x4910 = INT8_MAX;
	static uint8_t x4912 = 12U;
	volatile int32_t t95 = -13015;

	t95 = ((x4909^(x4910-x4911))<<x4912);

	if (t95 != 659456) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4953 = INT16_MIN;
	volatile uint64_t x4954 = 2381429LLU;
	int16_t x4955 = INT16_MIN;
	volatile uint8_t x4956 = 38U;
	static volatile uint64_t t96 = 536671890LLU;

	t96 = ((x4953^(x4954-x4955))<<x4956);

	if (t96 != 17786295201573109760LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4989 = INT32_MIN;
	volatile uint8_t x4990 = UINT8_MAX;
	static uint32_t x4992 = 0U;

	t97 = ((x4989^(x4990-x4991))<<x4992);

	if (t97 != 2147483590) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5021 = UINT32_MAX;
	int32_t x5022 = INT32_MIN;
	static volatile int16_t x5023 = INT16_MIN;
	uint16_t x5024 = 3U;
	volatile uint32_t t98 = 60278U;

	t98 = ((x5021^(x5022-x5023))<<x5024);

	if (t98 != 4294705144U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5041 = UINT64_MAX;
	static volatile int8_t x5042 = -1;
	uint16_t x5043 = UINT16_MAX;
	uint8_t x5044 = 4U;
	static uint64_t t99 = 10LLU;

	t99 = ((x5041^(x5042-x5043))<<x5044);

	if (t99 != 1048560LLU) { NG(); } else { ; }
	
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

