#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 0LLU;
uint32_t t2 = 834832622U;
int32_t x195 = -2170;
static int8_t x196 = 16;
uint8_t x257 = 2U;
static volatile int8_t x258 = INT8_MIN;
uint64_t x259 = UINT64_MAX;
uint16_t x260 = 3U;
uint8_t x344 = 10U;
static int8_t x399 = 61;
uint32_t x761 = UINT32_MAX;
int32_t x859 = -16607500;
uint64_t t17 = 18542422097LLU;
uint64_t t18 = 11005329692843394LLU;
int8_t x926 = 2;
volatile uint32_t t19 = 8799718U;
int32_t x942 = INT32_MAX;
int8_t x977 = -1;
uint32_t x979 = 137913U;
static volatile uint8_t x1006 = 120U;
int64_t t22 = 1019LL;
uint8_t x1018 = UINT8_MAX;
uint64_t x1021 = UINT64_MAX;
uint64_t t24 = 97438164LLU;
uint8_t x1198 = 2U;
volatile uint16_t x1244 = 0U;
volatile int8_t x1269 = INT8_MIN;
volatile uint16_t x1287 = UINT16_MAX;
static int32_t t32 = -60;
static int8_t x1358 = INT8_MIN;
uint16_t x1554 = 10U;
volatile int8_t x1556 = 0;
int32_t x1642 = INT32_MAX;
uint8_t x1644 = 0U;
uint32_t x1836 = 4U;
int32_t t40 = 244018;
volatile uint64_t x1864 = 3LLU;
uint16_t x1890 = UINT16_MAX;
int32_t t42 = -21875232;
int64_t x1922 = INT64_MIN;
int32_t x1924 = 0;
int32_t x2005 = -1;
int64_t x2006 = -4LL;
volatile int16_t x2153 = -126;
static int16_t x2155 = INT16_MIN;
uint64_t x2248 = 15LLU;
static volatile int64_t t48 = -321982435256585926LL;
int8_t x2282 = INT8_MIN;
static int16_t x2338 = -1;
int8_t x2340 = 0;
uint32_t x2354 = 449U;
uint8_t x2355 = 1U;
static uint32_t x2356 = 4U;
static uint8_t x2373 = 41U;
volatile uint64_t t54 = 8LLU;
int8_t x2432 = 1;
volatile uint64_t x2551 = 57014778325803LLU;
int32_t x2567 = INT32_MAX;
int64_t x2625 = -1LL;
static int16_t x2657 = INT16_MIN;
uint16_t x2973 = 2822U;
int32_t x2976 = 0;
int16_t x3025 = -179;
uint32_t t66 = 1U;
int8_t x3229 = 63;
int64_t x3231 = 8271359896146LL;
static volatile int64_t t67 = -217082008615LL;
uint16_t x3242 = 3124U;
uint64_t x3243 = UINT64_MAX;
uint8_t x3244 = 7U;
uint8_t x3267 = UINT8_MAX;
static uint8_t x3321 = 10U;
uint32_t x3376 = 1U;
uint16_t x3476 = 4U;
uint32_t x3513 = UINT32_MAX;
int32_t x3515 = -1;
static int8_t x3537 = INT8_MAX;
int64_t x3721 = INT64_MIN;
int8_t x3722 = -1;
static uint32_t x3758 = 976420U;
uint8_t x3760 = 12U;
static int16_t x3802 = INT16_MIN;
int8_t x3869 = -1;
volatile uint64_t t82 = 101593LLU;
uint16_t x3968 = 0U;
int64_t x4038 = INT64_MIN;
int16_t x4108 = 6;
uint8_t x4125 = UINT8_MAX;
static int32_t x4126 = INT32_MIN;
volatile int32_t t87 = 173761170;
int16_t x4153 = 1;
volatile int32_t t88 = 0;
volatile uint64_t x4245 = UINT64_MAX;
volatile uint8_t x4246 = 116U;
volatile uint16_t x4261 = 904U;
volatile uint64_t t90 = 8792847142275LLU;
uint32_t x4429 = UINT32_MAX;
uint8_t x4431 = 49U;
static int32_t x4466 = -1;
volatile int16_t x4489 = INT16_MIN;
static int64_t t93 = 155921729LL;
int32_t x4578 = 15568;
uint64_t t95 = 1181LLU;
volatile int16_t x4717 = -1;
static volatile int32_t x4719 = -1;
uint8_t x4730 = UINT8_MAX;
uint8_t x4732 = 24U;
static volatile uint8_t x4756 = 28U;
uint64_t t99 = 20738LLU;


void f0(void) {
	int32_t x81 = -64;
	static uint16_t x82 = 711U;
	int16_t x83 = -1;
	static uint16_t x84 = 2U;
	int32_t t0 = 49634;

	t0 = (((x81%x82)^x83)<<x84);

	if (t0 != 252) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x149 = -135;
	static uint64_t x150 = 3444270465414LLU;
	static int64_t x151 = INT64_MAX;
	int8_t x152 = 1;

	t1 = (((x149%x150)^x151)<<x152);

	if (t1 != 18446738118636711180LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x173 = UINT32_MAX;
	volatile int16_t x174 = 1436;
	static int16_t x175 = -31;
	volatile int8_t x176 = 4;

	t2 = (((x173%x174)^x175)<<x176);

	if (t2 != 4294960352U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x193 = UINT32_MAX;
	static int32_t x194 = INT32_MAX;
	uint32_t t3 = 126U;

	t3 = (((x193%x194)^x195)<<x196);

	if (t3 != 4152819712U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x237 = -1LL;
	static volatile uint16_t x238 = 1364U;
	int64_t x239 = -1LL;
	static uint32_t x240 = 18U;
	static int64_t t4 = 104723348837LL;

	t4 = (((x237%x238)^x239)<<x240);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x245 = -1;
	static int8_t x246 = 2;
	volatile int64_t x247 = -1LL;
	volatile int32_t x248 = 0;
	int64_t t5 = -6985221LL;

	t5 = (((x245%x246)^x247)<<x248);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t t6 = 3229563163LLU;

	t6 = (((x257%x258)^x259)<<x260);

	if (t6 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x289 = 9633711779828LLU;
	uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = 1;
	static volatile uint64_t t7 = 44383736LLU;

	t7 = (((x289%x290)^x291)<<x292);

	if (t7 != 346LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = 25434277U;
	static uint8_t x319 = 6U;
	uint16_t x320 = 5U;
	uint32_t t8 = 106768U;

	t8 = (((x317%x318)^x319)<<x320);

	if (t8 != 352140096U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = 608855U;
	static uint32_t t9 = 15585U;

	t9 = (((x341%x342)^x343)<<x344);

	if (t9 != 623467520U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x397 = 4U;
	uint32_t x398 = 1394158U;
	int64_t x400 = 14LL;
	uint32_t t10 = 8U;

	t10 = (((x397%x398)^x399)<<x400);

	if (t10 != 933888U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x433 = INT64_MAX;
	uint64_t x434 = 14185LLU;
	int32_t x435 = 59806174;
	int16_t x436 = 4;
	volatile uint64_t t11 = 225581948LLU;

	t11 = (((x433%x434)^x435)<<x436);

	if (t11 != 956827664LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x513 = -1LL;
	uint8_t x514 = 30U;
	int64_t x515 = -1LL;
	uint8_t x516 = 20U;
	static int64_t t12 = 3923327094LL;

	t12 = (((x513%x514)^x515)<<x516);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x581 = UINT8_MAX;
	static int32_t x582 = -1;
	uint64_t x583 = UINT64_MAX;
	volatile uint16_t x584 = 2U;
	volatile uint64_t t13 = 2690LLU;

	t13 = (((x581%x582)^x583)<<x584);

	if (t13 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x741 = 1U;
	uint16_t x742 = UINT16_MAX;
	volatile int64_t x743 = 28028748954LL;
	int8_t x744 = 27;
	volatile int64_t t14 = -42478328137498LL;

	t14 = (((x741%x742)^x743)<<x744);

	if (t14 != 3761955003422474240LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x745 = 933614502;
	uint64_t x746 = 33722LLU;
	uint16_t x747 = 248U;
	uint8_t x748 = 42U;
	volatile uint64_t t15 = 208701LLU;

	t15 = (((x745%x746)^x747)<<x748);

	if (t15 != 91461775244918784LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x762 = -1;
	uint16_t x763 = 3U;
	int32_t x764 = 0;
	volatile uint32_t t16 = 106311162U;

	t16 = (((x761%x762)^x763)<<x764);

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x857 = 1627119524LLU;
	volatile int32_t x858 = INT32_MIN;
	int8_t x860 = 14;

	t17 = (((x857%x858)^x859)<<x860);

	if (t17 != 18446717678221787136LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x865 = UINT8_MAX;
	int32_t x866 = INT32_MAX;
	volatile uint64_t x867 = UINT64_MAX;
	static volatile uint16_t x868 = 7U;

	t18 = (((x865%x866)^x867)<<x868);

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x925 = INT16_MAX;
	uint32_t x927 = 8152502U;
	uint64_t x928 = 3LLU;

	t19 = (((x925%x926)^x927)<<x928);

	if (t19 != 65220024U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x941 = 495305445U;
	int8_t x943 = 1;
	int8_t x944 = 20;
	uint32_t t20 = 863U;

	t20 = (((x941%x942)^x943)<<x944);

	if (t20 != 775946240U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x978 = 5U;
	uint16_t x980 = 10U;
	static uint32_t t21 = 16744277U;

	t21 = (((x977%x978)^x979)<<x980);

	if (t21 != 4153743360U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1005 = 133713870430LL;
	uint32_t x1007 = 49U;
	uint8_t x1008 = 3U;

	t22 = (((x1005%x1006)^x1007)<<x1008);

	if (t22 != 952LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1017 = INT8_MAX;
	uint64_t x1019 = 1052793LLU;
	static volatile uint16_t x1020 = 18U;
	static uint64_t t23 = 4LLU;

	t23 = (((x1017%x1018)^x1019)<<x1020);

	if (t23 != 275953221632LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x1022 = 31U;
	volatile int64_t x1023 = -355712244295LL;
	uint16_t x1024 = 14U;

	t24 = (((x1021%x1022)^x1023)<<x1024);

	if (t24 != 18440916084298973184LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1053 = INT32_MAX;
	uint64_t x1054 = UINT64_MAX;
	static volatile int16_t x1055 = INT16_MIN;
	volatile uint8_t x1056 = 6U;
	uint64_t t25 = 29LLU;

	t25 = (((x1053%x1054)^x1055)<<x1056);

	if (t25 != 18446743936272695232LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1121 = -1;
	int8_t x1122 = INT8_MIN;
	volatile int64_t x1123 = -1LL;
	volatile uint16_t x1124 = 1U;
	volatile int64_t t26 = -1009473410122438374LL;

	t26 = (((x1121%x1122)^x1123)<<x1124);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1197 = 292035041U;
	uint8_t x1199 = UINT8_MAX;
	uint16_t x1200 = 10U;
	static uint32_t t27 = 1383U;

	t27 = (((x1197%x1198)^x1199)<<x1200);

	if (t27 != 260096U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1201 = INT64_MIN;
	int16_t x1202 = INT16_MIN;
	int32_t x1203 = INT32_MAX;
	uint16_t x1204 = 21U;
	int64_t t28 = -532294343687703426LL;

	t28 = (((x1201%x1202)^x1203)<<x1204);

	if (t28 != 4503599625273344LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1241 = INT64_MIN;
	static uint16_t x1242 = 9U;
	int64_t x1243 = -1LL;
	static volatile int64_t t29 = 107540192291260LL;

	t29 = (((x1241%x1242)^x1243)<<x1244);

	if (t29 != 7LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1270 = UINT64_MAX;
	volatile int8_t x1271 = INT8_MIN;
	uint8_t x1272 = 3U;
	volatile uint64_t t30 = 1304619885964LLU;

	t30 = (((x1269%x1270)^x1271)<<x1272);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1277 = 134190788957192LLU;
	static volatile uint32_t x1278 = 215951U;
	uint16_t x1279 = 69U;
	static int8_t x1280 = 0;
	static uint64_t t31 = 962089096902799230LLU;

	t31 = (((x1277%x1278)^x1279)<<x1280);

	if (t31 != 21492LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1285 = INT16_MAX;
	volatile int32_t x1286 = -1;
	uint16_t x1288 = 3U;

	t32 = (((x1285%x1286)^x1287)<<x1288);

	if (t32 != 524280) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1329 = INT16_MIN;
	static volatile int8_t x1330 = 4;
	int64_t x1331 = 0LL;
	uint32_t x1332 = 28U;
	volatile int64_t t33 = -1LL;

	t33 = (((x1329%x1330)^x1331)<<x1332);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1357 = 41;
	uint32_t x1359 = 1U;
	uint32_t x1360 = 0U;
	uint32_t t34 = 486U;

	t34 = (((x1357%x1358)^x1359)<<x1360);

	if (t34 != 40U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1361 = INT64_MIN;
	uint8_t x1362 = 58U;
	int32_t x1363 = -1765410;
	static uint16_t x1364 = 14U;
	static int64_t t35 = 54734012456LL;

	t35 = (((x1361%x1362)^x1363)<<x1364);

	if (t35 != 28924608512LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1541 = 7U;
	int16_t x1542 = INT16_MAX;
	int8_t x1543 = INT8_MAX;
	static uint8_t x1544 = 0U;
	volatile int32_t t36 = 4164383;

	t36 = (((x1541%x1542)^x1543)<<x1544);

	if (t36 != 120) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1553 = UINT64_MAX;
	int8_t x1555 = INT8_MAX;
	volatile uint64_t t37 = 362LLU;

	t37 = (((x1553%x1554)^x1555)<<x1556);

	if (t37 != 122LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1641 = -1;
	uint32_t x1643 = 52865161U;
	volatile uint32_t t38 = 168887U;

	t38 = (((x1641%x1642)^x1643)<<x1644);

	if (t38 != 4242102134U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1761 = 6U;
	int16_t x1762 = INT16_MIN;
	int16_t x1763 = 0;
	int8_t x1764 = 3;
	static volatile int32_t t39 = 10450;

	t39 = (((x1761%x1762)^x1763)<<x1764);

	if (t39 != 48) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1833 = 0;
	int32_t x1834 = INT32_MIN;
	int32_t x1835 = 40;

	t40 = (((x1833%x1834)^x1835)<<x1836);

	if (t40 != 640) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1861 = INT8_MIN;
	uint16_t x1862 = UINT16_MAX;
	static int16_t x1863 = -1985;
	volatile int32_t t41 = 30338;

	t41 = (((x1861%x1862)^x1863)<<x1864);

	if (t41 != 15864) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1889 = INT32_MIN;
	int8_t x1891 = INT8_MIN;
	uint64_t x1892 = 4LLU;

	t42 = (((x1889%x1890)^x1891)<<x1892);

	if (t42 != 522240) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1905 = -1LL;
	volatile int32_t x1906 = -99706880;
	int16_t x1907 = -435;
	uint8_t x1908 = 0U;
	static int64_t t43 = 51603154893279LL;

	t43 = (((x1905%x1906)^x1907)<<x1908);

	if (t43 != 434LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1921 = INT64_MAX;
	int8_t x1923 = INT8_MAX;
	int64_t t44 = -443487116358LL;

	t44 = (((x1921%x1922)^x1923)<<x1924);

	if (t44 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2007 = -1;
	uint16_t x2008 = 0U;
	volatile int64_t t45 = 12455246676996188LL;

	t45 = (((x2005%x2006)^x2007)<<x2008);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2154 = 40;
	uint16_t x2156 = 2U;
	static volatile int32_t t46 = -898;

	t46 = (((x2153%x2154)^x2155)<<x2156);

	if (t46 != 131048) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2225 = 2185937985568601910LLU;
	uint16_t x2226 = 12264U;
	static volatile int8_t x2227 = INT8_MAX;
	uint8_t x2228 = 0U;
	uint64_t t47 = 206LLU;

	t47 = (((x2225%x2226)^x2227)<<x2228);

	if (t47 != 4609LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2245 = 1790U;
	int64_t x2246 = 917824184026228LL;
	uint8_t x2247 = 35U;

	t48 = (((x2245%x2246)^x2247)<<x2248);

	if (t48 != 57573376LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2273 = UINT8_MAX;
	int16_t x2274 = INT16_MIN;
	uint32_t x2275 = 89123U;
	int16_t x2276 = 1;
	volatile uint32_t t49 = 80U;

	t49 = (((x2273%x2274)^x2275)<<x2276);

	if (t49 != 178616U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2281 = UINT32_MAX;
	int16_t x2283 = 1;
	uint8_t x2284 = 3U;
	static volatile uint32_t t50 = 187U;

	t50 = (((x2281%x2282)^x2283)<<x2284);

	if (t50 != 1008U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2337 = -102369902;
	uint64_t x2339 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = (((x2337%x2338)^x2339)<<x2340);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2353 = -30;
	volatile uint32_t t52 = 45098U;

	t52 = (((x2353%x2354)^x2355)<<x2356);

	if (t52 != 4720U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x2374 = 6U;
	uint8_t x2375 = 3U;
	static int8_t x2376 = 0;
	uint32_t t53 = 63968572U;

	t53 = (((x2373%x2374)^x2375)<<x2376);

	if (t53 != 6U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2413 = UINT64_MAX;
	volatile int16_t x2414 = -1;
	static uint8_t x2415 = 4U;
	static volatile uint16_t x2416 = 17U;

	t54 = (((x2413%x2414)^x2415)<<x2416);

	if (t54 != 524288LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2429 = 263594716201218525LLU;
	int64_t x2430 = -435140011LL;
	volatile uint64_t x2431 = 3736LLU;
	uint64_t t55 = 328LLU;

	t55 = (((x2429%x2430)^x2431)<<x2432);

	if (t55 != 527189432402443914LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2549 = -6;
	uint32_t x2550 = UINT32_MAX;
	volatile int8_t x2552 = 0;
	uint64_t t56 = 6734101287869474LLU;

	t56 = (((x2549%x2550)^x2551)<<x2552);

	if (t56 != 57012308415697LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2565 = UINT32_MAX;
	uint32_t x2566 = 1U;
	int16_t x2568 = 9;
	uint32_t t57 = 3658257U;

	t57 = (((x2565%x2566)^x2567)<<x2568);

	if (t57 != 4294966784U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2601 = -1;
	static uint32_t x2602 = 32899492U;
	int8_t x2603 = -1;
	volatile uint8_t x2604 = 0U;
	volatile uint32_t t58 = 197922046U;

	t58 = (((x2601%x2602)^x2603)<<x2604);

	if (t58 != 4276933960U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2626 = UINT8_MAX;
	int32_t x2627 = INT32_MIN;
	static uint8_t x2628 = 0U;
	static volatile int64_t t59 = -10475464LL;

	t59 = (((x2625%x2626)^x2627)<<x2628);

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x2629 = INT64_MIN;
	uint16_t x2630 = 2U;
	uint8_t x2631 = 1U;
	volatile uint8_t x2632 = 3U;
	int64_t t60 = 22297137417020302LL;

	t60 = (((x2629%x2630)^x2631)<<x2632);

	if (t60 != 8LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x2658 = 6;
	int64_t x2659 = -1LL;
	int8_t x2660 = 0;
	volatile int64_t t61 = 4283456LL;

	t61 = (((x2657%x2658)^x2659)<<x2660);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2801 = 27239057LLU;
	int32_t x2802 = -1;
	uint16_t x2803 = UINT16_MAX;
	int8_t x2804 = 1;
	static volatile uint64_t t62 = 1LLU;

	t62 = (((x2801%x2802)^x2803)<<x2804);

	if (t62 != 54442716LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x2897 = 109093LLU;
	int8_t x2898 = INT8_MIN;
	static int32_t x2899 = INT32_MIN;
	volatile uint32_t x2900 = 26U;
	uint64_t t63 = 451329953LLU;

	t63 = (((x2897%x2898)^x2899)<<x2900);

	if (t63 != 18302636206740996096LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2917 = 21LLU;
	int16_t x2918 = 15;
	uint32_t x2919 = 91900U;
	static uint8_t x2920 = 2U;
	static uint64_t t64 = 24715859656LLU;

	t64 = (((x2917%x2918)^x2919)<<x2920);

	if (t64 != 367592LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2974 = INT64_MAX;
	uint8_t x2975 = 9U;
	volatile int64_t t65 = 3945296158LL;

	t65 = (((x2973%x2974)^x2975)<<x2976);

	if (t65 != 2831LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3026 = UINT32_MAX;
	volatile uint16_t x3027 = 43U;
	static uint8_t x3028 = 1U;

	t66 = (((x3025%x3026)^x3027)<<x3028);

	if (t66 != 4294966988U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3230 = INT8_MIN;
	static int8_t x3232 = 6;

	t67 = (((x3229%x3230)^x3231)<<x3232);

	if (t67 != 529367033355072LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3241 = -1LL;
	uint64_t t68 = 2327481304942794215LLU;

	t68 = (((x3241%x3242)^x3243)<<x3244);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3265 = 6480U;
	uint64_t x3266 = 28285196730554606LLU;
	int8_t x3268 = 1;
	volatile uint64_t t69 = 7LLU;

	t69 = (((x3265%x3266)^x3267)<<x3268);

	if (t69 != 13150LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3322 = INT64_MIN;
	static uint8_t x3323 = 2U;
	uint32_t x3324 = 8U;
	static volatile int64_t t70 = 560126670016LL;

	t70 = (((x3321%x3322)^x3323)<<x3324);

	if (t70 != 2048LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3373 = INT16_MAX;
	uint32_t x3374 = 14685U;
	uint64_t x3375 = UINT64_MAX;
	static uint64_t t71 = 49108732LLU;

	t71 = (((x3373%x3374)^x3375)<<x3376);

	if (t71 != 18446744073709544820LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3417 = 0;
	static int32_t x3418 = 7341;
	uint8_t x3419 = 50U;
	int32_t x3420 = 1;
	static int32_t t72 = 232;

	t72 = (((x3417%x3418)^x3419)<<x3420);

	if (t72 != 100) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3473 = UINT8_MAX;
	int32_t x3474 = 400850;
	static uint8_t x3475 = 4U;
	int32_t t73 = -1;

	t73 = (((x3473%x3474)^x3475)<<x3476);

	if (t73 != 4016) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3485 = 23447640665937443LLU;
	static int16_t x3486 = INT16_MIN;
	static int8_t x3487 = -1;
	static uint8_t x3488 = 63U;
	uint64_t t74 = 7205102LLU;

	t74 = (((x3485%x3486)^x3487)<<x3488);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3514 = INT32_MIN;
	int16_t x3516 = 13;
	uint32_t t75 = 5U;

	t75 = (((x3513%x3514)^x3515)<<x3516);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3538 = UINT16_MAX;
	static uint16_t x3539 = 0U;
	uint8_t x3540 = 18U;
	volatile int32_t t76 = 128263512;

	t76 = (((x3537%x3538)^x3539)<<x3540);

	if (t76 != 33292288) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3565 = UINT64_MAX;
	int64_t x3566 = 16898897778644LL;
	int16_t x3567 = INT16_MIN;
	volatile uint32_t x3568 = 3U;
	volatile uint64_t t77 = 19589122057147009LLU;

	t77 = (((x3565%x3566)^x3567)<<x3568);

	if (t77 != 18446674858282290616LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3723 = 4535258763060620673LL;
	volatile uint64_t x3724 = 1LLU;
	int64_t t78 = 2315301702226809LL;

	t78 = (((x3721%x3722)^x3723)<<x3724);

	if (t78 != 9070517526121241346LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x3757 = INT8_MIN;
	int8_t x3759 = -1;
	volatile uint32_t t79 = 705488694U;

	t79 = (((x3757%x3758)^x3759)<<x3760);

	if (t79 != 1542418432U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3801 = INT64_MIN;
	static uint16_t x3803 = UINT16_MAX;
	volatile uint8_t x3804 = 13U;
	volatile int64_t t80 = -86581248238895672LL;

	t80 = (((x3801%x3802)^x3803)<<x3804);

	if (t80 != 536862720LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3870 = UINT32_MAX;
	int16_t x3871 = INT16_MIN;
	uint16_t x3872 = 1U;
	uint32_t t81 = 4U;

	t81 = (((x3869%x3870)^x3871)<<x3872);

	if (t81 != 4294901760U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x3885 = 5228156598LLU;
	int8_t x3886 = INT8_MIN;
	uint16_t x3887 = 0U;
	int8_t x3888 = 6;

	t82 = (((x3885%x3886)^x3887)<<x3888);

	if (t82 != 334602022272LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x3965 = INT32_MIN;
	volatile int32_t x3966 = INT32_MIN;
	uint8_t x3967 = 37U;
	int32_t t83 = 0;

	t83 = (((x3965%x3966)^x3967)<<x3968);

	if (t83 != 37) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x3969 = UINT16_MAX;
	uint32_t x3970 = 240173736U;
	int8_t x3971 = INT8_MIN;
	volatile uint8_t x3972 = 2U;
	uint32_t t84 = 1443866626U;

	t84 = (((x3969%x3970)^x3971)<<x3972);

	if (t84 != 4294705660U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4037 = -1;
	volatile int8_t x4039 = INT8_MIN;
	int16_t x4040 = 10;
	int64_t t85 = 15LL;

	t85 = (((x4037%x4038)^x4039)<<x4040);

	if (t85 != 130048LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4105 = INT16_MIN;
	static uint16_t x4106 = 849U;
	volatile int16_t x4107 = -2931;
	int32_t t86 = -1849984;

	t86 = (((x4105%x4106)^x4107)<<x4108);

	if (t86 != 172736) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4127 = INT8_MAX;
	static volatile int64_t x4128 = 2LL;

	t87 = (((x4125%x4126)^x4127)<<x4128);

	if (t87 != 512) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4154 = 10;
	uint16_t x4155 = 3658U;
	static uint16_t x4156 = 1U;

	t88 = (((x4153%x4154)^x4155)<<x4156);

	if (t88 != 7318) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4247 = INT8_MAX;
	uint8_t x4248 = 2U;
	static volatile uint64_t t89 = 1573740550805305310LLU;

	t89 = (((x4245%x4246)^x4247)<<x4248);

	if (t89 != 416LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4262 = INT32_MIN;
	static uint64_t x4263 = UINT64_MAX;
	int32_t x4264 = 15;

	t90 = (((x4261%x4262)^x4263)<<x4264);

	if (t90 != 18446744073679896576LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x4430 = -1;
	static uint8_t x4432 = 2U;
	uint32_t t91 = 1379U;

	t91 = (((x4429%x4430)^x4431)<<x4432);

	if (t91 != 196U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4465 = 21U;
	volatile int8_t x4467 = INT8_MAX;
	int8_t x4468 = 1;
	volatile int32_t t92 = -248534661;

	t92 = (((x4465%x4466)^x4467)<<x4468);

	if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4490 = INT64_MIN;
	int16_t x4491 = INT16_MIN;
	volatile uint16_t x4492 = 57U;

	t93 = (((x4489%x4490)^x4491)<<x4492);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4577 = -1;
	volatile uint32_t x4579 = 1U;
	volatile uint8_t x4580 = 5U;
	static volatile uint32_t t94 = 3828432U;

	t94 = (((x4577%x4578)^x4579)<<x4580);

	if (t94 != 4294967232U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4693 = INT64_MIN;
	volatile uint64_t x4694 = 1866776457968522805LLU;
	int16_t x4695 = INT16_MAX;
	static volatile uint8_t x4696 = 14U;

	t95 = (((x4693%x4694)^x4695)<<x4696);

	if (t95 != 16191491490553577472LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4718 = UINT64_MAX;
	int8_t x4720 = 4;
	uint64_t t96 = 1247901762483136LLU;

	t96 = (((x4717%x4718)^x4719)<<x4720);

	if (t96 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x4729 = 926525054300429849LL;
	volatile uint32_t x4731 = 29U;
	volatile int64_t t97 = 52988196LL;

	t97 = (((x4729%x4730)^x4731)<<x4732);

	if (t97 != 3741319168LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4753 = INT64_MIN;
	volatile uint16_t x4754 = 12453U;
	volatile uint64_t x4755 = 1556166LLU;
	volatile uint64_t t98 = 10822564783605885LLU;

	t98 = (((x4753%x4754)^x4755)<<x4756);

	if (t98 != 18446329659294482432LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4829 = -4;
	static uint64_t x4830 = UINT64_MAX;
	static uint8_t x4831 = 3U;
	static uint8_t x4832 = 56U;

	t99 = (((x4829%x4830)^x4831)<<x4832);

	if (t99 != 18374686479671623680LLU) { NG(); } else { ; }
	
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

