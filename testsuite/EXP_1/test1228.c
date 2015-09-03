#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x20 = 5U;
static int32_t x31 = INT32_MIN;
int32_t t1 = -275;
static uint8_t x100 = 0U;
int32_t x106 = 1;
volatile int32_t x107 = -1;
volatile int32_t x121 = INT32_MIN;
uint16_t x124 = 4U;
volatile int32_t t4 = -661573;
int32_t x135 = INT32_MIN;
volatile int32_t t6 = 1;
volatile int32_t t8 = -1246;
int64_t x237 = INT64_MIN;
volatile int32_t x242 = 4;
volatile int8_t x263 = INT8_MIN;
volatile int32_t x277 = INT32_MIN;
volatile int64_t t14 = -3468141239180LL;
int64_t x282 = INT64_MIN;
int32_t t15 = 6;
int16_t x314 = INT16_MAX;
int64_t x315 = 282327863576700LL;
static uint64_t x393 = 50LLU;
int32_t t19 = -3113339;
int16_t x446 = -1;
int16_t x473 = -5716;
int16_t x474 = -1769;
uint16_t x476 = 25U;
volatile int32_t t23 = 9561;
volatile int32_t x526 = INT32_MIN;
volatile int16_t x535 = INT16_MIN;
volatile uint32_t x614 = UINT32_MAX;
static uint64_t t27 = 441572701485LLU;
uint32_t x728 = 4U;
uint16_t x772 = 1U;
int8_t x792 = 14;
int16_t x795 = -1;
int16_t x796 = 1;
static volatile uint16_t x840 = 18U;
int32_t x885 = 36504;
int8_t x902 = -1;
uint8_t x904 = 2U;
int16_t x925 = 208;
int32_t x926 = 1568108;
int32_t x927 = INT32_MIN;
int32_t x1057 = INT32_MAX;
int64_t x1065 = INT64_MIN;
uint32_t x1066 = 505U;
static volatile int16_t x1198 = -1;
uint64_t x1200 = 0LLU;
int32_t x1218 = -1;
static int64_t x1273 = INT64_MIN;
int16_t x1274 = INT16_MIN;
int64_t x1321 = -1LL;
static int32_t x1347 = INT32_MIN;
uint16_t x1348 = 4U;
int16_t x1406 = -437;
int8_t x1410 = 6;
volatile int64_t x1431 = -1LL;
int64_t x1449 = -1LL;
uint64_t x1451 = 390LLU;
int8_t x1452 = 14;
static uint32_t x1546 = UINT32_MAX;
uint32_t x1548 = 7U;
uint32_t t56 = 129334188U;
uint8_t x1576 = 0U;
uint8_t x1618 = 7U;
int8_t x1667 = -1;
int32_t x1681 = -89269956;
static int64_t x1683 = INT64_MIN;
static int64_t t60 = -16669096679634579LL;
int8_t x1729 = -1;
volatile int8_t x1731 = INT8_MAX;
static uint8_t x1765 = 3U;
int8_t x1766 = 13;
static int16_t x1802 = -1;
int64_t x1804 = 3LL;
static int64_t x1854 = INT64_MIN;
volatile int32_t t67 = 25;
int16_t x1874 = -58;
int8_t x1875 = INT8_MIN;
int32_t t68 = -30385654;
static int32_t x2060 = 0;
volatile int32_t t70 = -432845523;
int32_t x2090 = 27601680;
volatile int16_t x2118 = -9398;
int64_t x2119 = 7296LL;
volatile uint8_t x2208 = 12U;
static volatile int32_t t76 = -792064426;
int64_t t77 = -632471LL;
static volatile int64_t x2287 = INT64_MAX;
volatile int32_t t80 = -66;
volatile int16_t x2347 = -1;
static uint16_t x2351 = UINT16_MAX;
static int16_t x2361 = 708;
int8_t x2482 = INT8_MIN;
int16_t x2483 = -316;
static int32_t t86 = -2656;
uint64_t x2578 = UINT64_MAX;
volatile int32_t t87 = -3;
volatile int64_t x2679 = INT64_MIN;
volatile uint32_t x2738 = 1U;
static uint32_t x2746 = UINT32_MAX;
static volatile uint32_t t91 = 0U;
int16_t x3009 = INT16_MIN;
int64_t x3058 = 9124864066LL;
volatile int64_t t95 = 276LL;
static volatile int32_t t96 = 63917;
int8_t x3205 = INT8_MAX;
int32_t x3247 = -1;


void f0(void) {
	int8_t x17 = -2;
	uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 12187178U;
	volatile uint32_t t0 = 2977U;

	t0 = (((x17==x18)/x19)<<x20);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x29 = -97151;
	uint16_t x30 = 21U;
	uint16_t x32 = 1U;

	t1 = (((x29==x30)/x31)<<x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x97 = 241;
	static uint16_t x98 = 55U;
	static volatile uint16_t x99 = UINT16_MAX;
	static volatile int32_t t2 = -17381028;

	t2 = (((x97==x98)/x99)<<x100);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x105 = 167053LLU;
	uint16_t x108 = 0U;
	int32_t t3 = -1;

	t3 = (((x105==x106)/x107)<<x108);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x122 = INT32_MAX;
	int32_t x123 = -1;

	t4 = (((x121==x122)/x123)<<x124);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x133 = 5291U;
	uint8_t x134 = 1U;
	uint16_t x136 = 7U;
	int32_t t5 = -550;

	t5 = (((x133==x134)/x135)<<x136);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = -1;
	volatile int16_t x167 = -437;
	uint8_t x168 = 2U;

	t6 = (((x165==x166)/x167)<<x168);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	static int64_t x223 = -1LL;
	uint8_t x224 = 0U;
	static int64_t t7 = -731LL;

	t7 = (((x221==x222)/x223)<<x224);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x225 = 780U;
	volatile int8_t x226 = -1;
	int8_t x227 = INT8_MIN;
	volatile int8_t x228 = 27;

	t8 = (((x225==x226)/x227)<<x228);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x229 = 21173U;
	int64_t x230 = INT64_MIN;
	uint64_t x231 = 258810706943LLU;
	static uint8_t x232 = 1U;
	uint64_t t9 = 7915LLU;

	t9 = (((x229==x230)/x231)<<x232);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x238 = -1LL;
	int16_t x239 = 36;
	int8_t x240 = 4;
	volatile int32_t t10 = 908;

	t10 = (((x237==x238)/x239)<<x240);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MAX;
	int32_t x244 = 8;
	int32_t t11 = -23;

	t11 = (((x241==x242)/x243)<<x244);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x253 = 473U;
	volatile int64_t x254 = -1LL;
	static int64_t x255 = INT64_MAX;
	volatile uint16_t x256 = 55U;
	int64_t t12 = 2385705LL;

	t12 = (((x253==x254)/x255)<<x256);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x261 = 2949194U;
	uint8_t x262 = 6U;
	static int8_t x264 = 1;
	int32_t t13 = 1274;

	t13 = (((x261==x262)/x263)<<x264);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x278 = 1U;
	int64_t x279 = -1LL;
	static uint16_t x280 = 17U;

	t14 = (((x277==x278)/x279)<<x280);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x281 = -1;
	int32_t x283 = 28;
	static int16_t x284 = 2;

	t15 = (((x281==x282)/x283)<<x284);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x293 = 1U;
	int32_t x294 = INT32_MIN;
	uint64_t x295 = 1571LLU;
	static int8_t x296 = 1;
	static uint64_t t16 = 25205088LLU;

	t16 = (((x293==x294)/x295)<<x296);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x313 = 1322044LLU;
	int8_t x316 = 42;
	volatile int64_t t17 = 792LL;

	t17 = (((x313==x314)/x315)<<x316);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x394 = -1;
	uint8_t x395 = UINT8_MAX;
	volatile int8_t x396 = 0;
	static int32_t t18 = 173511929;

	t18 = (((x393==x394)/x395)<<x396);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x429 = 2;
	uint8_t x430 = 41U;
	int8_t x431 = INT8_MIN;
	uint8_t x432 = 8U;

	t19 = (((x429==x430)/x431)<<x432);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x445 = INT32_MIN;
	int64_t x447 = -1110673LL;
	uint8_t x448 = 1U;
	int64_t t20 = -5041271561LL;

	t20 = (((x445==x446)/x447)<<x448);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x475 = -177107242327026LL;
	volatile int64_t t21 = 206LL;

	t21 = (((x473==x474)/x475)<<x476);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x501 = -1;
	volatile int16_t x502 = INT16_MIN;
	volatile uint16_t x503 = UINT16_MAX;
	int8_t x504 = 6;
	int32_t t22 = 10;

	t22 = (((x501==x502)/x503)<<x504);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x513 = INT8_MIN;
	int8_t x514 = 1;
	int32_t x515 = INT32_MIN;
	uint8_t x516 = 7U;

	t23 = (((x513==x514)/x515)<<x516);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x525 = INT8_MIN;
	uint32_t x527 = 216780U;
	volatile uint8_t x528 = 5U;
	static volatile uint32_t t24 = 151355247U;

	t24 = (((x525==x526)/x527)<<x528);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x533 = -359LL;
	int8_t x534 = -1;
	int32_t x536 = 19;
	volatile int32_t t25 = -5;

	t25 = (((x533==x534)/x535)<<x536);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x613 = INT16_MAX;
	static int64_t x615 = 11LL;
	int8_t x616 = 6;
	static int64_t t26 = 12LL;

	t26 = (((x613==x614)/x615)<<x616);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x641 = -211688;
	uint32_t x642 = 8922U;
	uint64_t x643 = 162LLU;
	uint8_t x644 = 53U;

	t27 = (((x641==x642)/x643)<<x644);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x689 = UINT32_MAX;
	int8_t x690 = 1;
	volatile int16_t x691 = INT16_MAX;
	volatile int8_t x692 = 1;
	volatile int32_t t28 = 3382428;

	t28 = (((x689==x690)/x691)<<x692);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x725 = INT16_MIN;
	int32_t x726 = INT32_MIN;
	static int64_t x727 = INT64_MAX;
	int64_t t29 = -7LL;

	t29 = (((x725==x726)/x727)<<x728);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x769 = INT16_MAX;
	static uint16_t x770 = UINT16_MAX;
	static uint16_t x771 = 2U;
	volatile int32_t t30 = -42582;

	t30 = (((x769==x770)/x771)<<x772);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x789 = -2;
	int8_t x790 = -1;
	int32_t x791 = INT32_MAX;
	static int32_t t31 = 855;

	t31 = (((x789==x790)/x791)<<x792);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x793 = INT32_MIN;
	int8_t x794 = 1;
	static volatile int32_t t32 = -6;

	t32 = (((x793==x794)/x795)<<x796);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x837 = UINT64_MAX;
	volatile int64_t x838 = -687101713285LL;
	int64_t x839 = 13799LL;
	static int64_t t33 = -30440455959005LL;

	t33 = (((x837==x838)/x839)<<x840);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x841 = 732686421LLU;
	volatile int32_t x842 = INT32_MIN;
	uint64_t x843 = 1LLU;
	int16_t x844 = 3;
	volatile uint64_t t34 = 0LLU;

	t34 = (((x841==x842)/x843)<<x844);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x849 = UINT16_MAX;
	int64_t x850 = INT64_MAX;
	static int16_t x851 = INT16_MIN;
	static uint16_t x852 = 2U;
	int32_t t35 = 243779884;

	t35 = (((x849==x850)/x851)<<x852);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x886 = 983195048583LLU;
	int8_t x887 = INT8_MIN;
	int32_t x888 = 1;
	static volatile int32_t t36 = -76;

	t36 = (((x885==x886)/x887)<<x888);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x897 = 66U;
	int8_t x898 = INT8_MIN;
	uint16_t x899 = 155U;
	uint16_t x900 = 8U;
	volatile int32_t t37 = 51;

	t37 = (((x897==x898)/x899)<<x900);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x901 = 37;
	uint32_t x903 = 1777U;
	volatile uint32_t t38 = 130960217U;

	t38 = (((x901==x902)/x903)<<x904);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x928 = 12U;
	volatile int32_t t39 = 3;

	t39 = (((x925==x926)/x927)<<x928);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x953 = INT32_MAX;
	int64_t x954 = -1LL;
	int16_t x955 = -1;
	int16_t x956 = 5;
	volatile int32_t t40 = 308917;

	t40 = (((x953==x954)/x955)<<x956);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x957 = INT64_MIN;
	int64_t x958 = INT64_MAX;
	volatile int32_t x959 = -12;
	volatile uint8_t x960 = 24U;
	int32_t t41 = -7804851;

	t41 = (((x957==x958)/x959)<<x960);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x969 = -16;
	int8_t x970 = -1;
	static int16_t x971 = INT16_MIN;
	uint8_t x972 = 20U;
	int32_t t42 = -5481138;

	t42 = (((x969==x970)/x971)<<x972);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1058 = INT16_MIN;
	static volatile uint8_t x1059 = 3U;
	static int8_t x1060 = 26;
	int32_t t43 = 63414;

	t43 = (((x1057==x1058)/x1059)<<x1060);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1067 = INT32_MAX;
	static uint32_t x1068 = 0U;
	static volatile int32_t t44 = -119354828;

	t44 = (((x1065==x1066)/x1067)<<x1068);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1197 = 0;
	uint64_t x1199 = 710835LLU;
	uint64_t t45 = 1145519LLU;

	t45 = (((x1197==x1198)/x1199)<<x1200);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x1217 = UINT32_MAX;
	uint8_t x1219 = UINT8_MAX;
	int16_t x1220 = 0;
	volatile int32_t t46 = 695648384;

	t46 = (((x1217==x1218)/x1219)<<x1220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1275 = UINT8_MAX;
	int32_t x1276 = 0;
	volatile int32_t t47 = -706;

	t47 = (((x1273==x1274)/x1275)<<x1276);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1285 = 378LLU;
	int64_t x1286 = INT64_MIN;
	uint64_t x1287 = UINT64_MAX;
	int8_t x1288 = 8;
	volatile uint64_t t48 = 5032344LLU;

	t48 = (((x1285==x1286)/x1287)<<x1288);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1322 = INT8_MIN;
	static int64_t x1323 = INT64_MIN;
	volatile int8_t x1324 = 0;
	volatile int64_t t49 = -1529364746786026LL;

	t49 = (((x1321==x1322)/x1323)<<x1324);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1345 = 1LL;
	uint64_t x1346 = UINT64_MAX;
	static volatile int32_t t50 = 3546;

	t50 = (((x1345==x1346)/x1347)<<x1348);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1369 = -3;
	int16_t x1370 = -12997;
	uint32_t x1371 = UINT32_MAX;
	volatile uint16_t x1372 = 2U;
	uint32_t t51 = 22009U;

	t51 = (((x1369==x1370)/x1371)<<x1372);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1405 = -1LL;
	uint32_t x1407 = UINT32_MAX;
	uint8_t x1408 = 0U;
	static volatile uint32_t t52 = 23577309U;

	t52 = (((x1405==x1406)/x1407)<<x1408);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x1409 = INT32_MIN;
	uint32_t x1411 = 252U;
	static uint16_t x1412 = 29U;
	volatile uint32_t t53 = 0U;

	t53 = (((x1409==x1410)/x1411)<<x1412);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x1429 = INT64_MIN;
	int8_t x1430 = INT8_MIN;
	static uint8_t x1432 = 4U;
	volatile int64_t t54 = -7279960977973758LL;

	t54 = (((x1429==x1430)/x1431)<<x1432);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1450 = 3U;
	uint64_t t55 = 172067293LLU;

	t55 = (((x1449==x1450)/x1451)<<x1452);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1545 = UINT8_MAX;
	static uint32_t x1547 = 686126U;

	t56 = (((x1545==x1546)/x1547)<<x1548);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1573 = INT16_MIN;
	int32_t x1574 = 2202;
	int32_t x1575 = 21361;
	volatile int32_t t57 = 15385;

	t57 = (((x1573==x1574)/x1575)<<x1576);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1617 = INT16_MIN;
	static volatile uint16_t x1619 = 27U;
	uint8_t x1620 = 1U;
	volatile int32_t t58 = 15003524;

	t58 = (((x1617==x1618)/x1619)<<x1620);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x1665 = INT16_MAX;
	int8_t x1666 = 0;
	uint8_t x1668 = 1U;
	volatile int32_t t59 = -43966548;

	t59 = (((x1665==x1666)/x1667)<<x1668);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1682 = 4547057678921554LLU;
	volatile uint8_t x1684 = 8U;

	t60 = (((x1681==x1682)/x1683)<<x1684);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x1730 = 1U;
	uint64_t x1732 = 0LLU;
	static volatile int32_t t61 = 1593161;

	t61 = (((x1729==x1730)/x1731)<<x1732);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x1753 = -1;
	uint32_t x1754 = 790U;
	static int32_t x1755 = 15998;
	static int8_t x1756 = 2;
	static volatile int32_t t62 = -15154;

	t62 = (((x1753==x1754)/x1755)<<x1756);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1767 = 1;
	uint8_t x1768 = 7U;
	volatile int32_t t63 = 767;

	t63 = (((x1765==x1766)/x1767)<<x1768);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1769 = -1LL;
	int16_t x1770 = 211;
	int64_t x1771 = INT64_MAX;
	int16_t x1772 = 22;
	static int64_t t64 = -2075657LL;

	t64 = (((x1769==x1770)/x1771)<<x1772);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x1801 = -1;
	uint8_t x1803 = 4U;
	static int32_t t65 = 2;

	t65 = (((x1801==x1802)/x1803)<<x1804);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1837 = UINT8_MAX;
	volatile int32_t x1838 = -129723717;
	int64_t x1839 = INT64_MIN;
	int16_t x1840 = 0;
	static volatile int64_t t66 = -360LL;

	t66 = (((x1837==x1838)/x1839)<<x1840);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x1853 = INT64_MIN;
	int16_t x1855 = INT16_MIN;
	volatile uint8_t x1856 = 3U;

	t67 = (((x1853==x1854)/x1855)<<x1856);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1873 = UINT32_MAX;
	uint8_t x1876 = 1U;

	t68 = (((x1873==x1874)/x1875)<<x1876);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1973 = INT8_MIN;
	static int32_t x1974 = -1;
	static int32_t x1975 = -1;
	uint8_t x1976 = 20U;
	static volatile int32_t t69 = -6364244;

	t69 = (((x1973==x1974)/x1975)<<x1976);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2057 = INT64_MAX;
	uint16_t x2058 = 122U;
	volatile uint8_t x2059 = UINT8_MAX;

	t70 = (((x2057==x2058)/x2059)<<x2060);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2089 = UINT16_MAX;
	volatile int64_t x2091 = 1LL;
	uint16_t x2092 = 7U;
	volatile int64_t t71 = 584142LL;

	t71 = (((x2089==x2090)/x2091)<<x2092);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x2117 = INT16_MIN;
	int8_t x2120 = 1;
	volatile int64_t t72 = 1LL;

	t72 = (((x2117==x2118)/x2119)<<x2120);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2153 = 27U;
	static uint16_t x2154 = UINT16_MAX;
	int16_t x2155 = -1397;
	uint16_t x2156 = 14U;
	int32_t t73 = -223327172;

	t73 = (((x2153==x2154)/x2155)<<x2156);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x2173 = UINT8_MAX;
	uint32_t x2174 = 1U;
	uint64_t x2175 = 111600863120591LLU;
	uint8_t x2176 = 3U;
	static uint64_t t74 = 3892217LLU;

	t74 = (((x2173==x2174)/x2175)<<x2176);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2205 = 106U;
	static int16_t x2206 = INT16_MAX;
	int16_t x2207 = INT16_MIN;
	volatile int32_t t75 = 69;

	t75 = (((x2205==x2206)/x2207)<<x2208);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x2229 = UINT64_MAX;
	static int16_t x2230 = -2035;
	volatile uint8_t x2231 = 1U;
	int16_t x2232 = 27;

	t76 = (((x2229==x2230)/x2231)<<x2232);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2245 = INT8_MAX;
	int16_t x2246 = -1;
	static int64_t x2247 = 927175LL;
	uint8_t x2248 = 17U;

	t77 = (((x2245==x2246)/x2247)<<x2248);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2273 = -120025;
	int16_t x2274 = 151;
	int32_t x2275 = INT32_MIN;
	volatile uint8_t x2276 = 20U;
	volatile int32_t t78 = 2087328;

	t78 = (((x2273==x2274)/x2275)<<x2276);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2285 = 6;
	volatile int16_t x2286 = -1;
	static uint8_t x2288 = 7U;
	int64_t t79 = -3344025580LL;

	t79 = (((x2285==x2286)/x2287)<<x2288);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2329 = INT8_MIN;
	int32_t x2330 = -143;
	int32_t x2331 = INT32_MIN;
	static volatile uint8_t x2332 = 1U;

	t80 = (((x2329==x2330)/x2331)<<x2332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x2345 = INT64_MIN;
	int16_t x2346 = INT16_MIN;
	volatile uint64_t x2348 = 3LLU;
	static int32_t t81 = -196237817;

	t81 = (((x2345==x2346)/x2347)<<x2348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2349 = INT16_MAX;
	int32_t x2350 = INT32_MIN;
	volatile uint64_t x2352 = 29LLU;
	int32_t t82 = 452856;

	t82 = (((x2349==x2350)/x2351)<<x2352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2362 = INT16_MIN;
	int16_t x2363 = INT16_MIN;
	uint8_t x2364 = 0U;
	volatile int32_t t83 = 1887;

	t83 = (((x2361==x2362)/x2363)<<x2364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2377 = INT16_MIN;
	uint8_t x2378 = 0U;
	int64_t x2379 = -1LL;
	uint64_t x2380 = 48LLU;
	volatile int64_t t84 = 20576633LL;

	t84 = (((x2377==x2378)/x2379)<<x2380);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2481 = -1LL;
	int16_t x2484 = 0;
	int32_t t85 = 7956317;

	t85 = (((x2481==x2482)/x2483)<<x2484);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2497 = INT16_MIN;
	int32_t x2498 = 615574;
	static int8_t x2499 = -1;
	uint8_t x2500 = 0U;

	t86 = (((x2497==x2498)/x2499)<<x2500);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x2577 = UINT32_MAX;
	int16_t x2579 = INT16_MIN;
	uint8_t x2580 = 3U;

	t87 = (((x2577==x2578)/x2579)<<x2580);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2677 = INT64_MIN;
	int8_t x2678 = INT8_MIN;
	volatile int8_t x2680 = 7;
	volatile int64_t t88 = -57228362LL;

	t88 = (((x2677==x2678)/x2679)<<x2680);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x2701 = UINT64_MAX;
	int8_t x2702 = INT8_MIN;
	volatile int32_t x2703 = -1053101916;
	static uint16_t x2704 = 1U;
	int32_t t89 = -38;

	t89 = (((x2701==x2702)/x2703)<<x2704);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2737 = 30;
	int16_t x2739 = INT16_MAX;
	volatile int32_t x2740 = 4;
	volatile int32_t t90 = 27843398;

	t90 = (((x2737==x2738)/x2739)<<x2740);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2745 = 3891U;
	static uint32_t x2747 = 237693327U;
	volatile int16_t x2748 = 0;

	t91 = (((x2745==x2746)/x2747)<<x2748);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2841 = INT8_MIN;
	volatile int16_t x2842 = INT16_MIN;
	uint32_t x2843 = UINT32_MAX;
	uint8_t x2844 = 25U;
	volatile uint32_t t92 = 29525U;

	t92 = (((x2841==x2842)/x2843)<<x2844);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2953 = INT8_MIN;
	int16_t x2954 = 663;
	volatile uint8_t x2955 = UINT8_MAX;
	uint8_t x2956 = 6U;
	volatile int32_t t93 = -98;

	t93 = (((x2953==x2954)/x2955)<<x2956);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3010 = INT8_MIN;
	static int8_t x3011 = INT8_MIN;
	static int32_t x3012 = 0;
	static int32_t t94 = 0;

	t94 = (((x3009==x3010)/x3011)<<x3012);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3057 = -17;
	int64_t x3059 = -8640758421334845LL;
	volatile uint8_t x3060 = 18U;

	t95 = (((x3057==x3058)/x3059)<<x3060);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x3073 = -46000615;
	uint16_t x3074 = UINT16_MAX;
	static volatile int8_t x3075 = INT8_MIN;
	int16_t x3076 = 0;

	t96 = (((x3073==x3074)/x3075)<<x3076);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x3206 = INT32_MAX;
	int8_t x3207 = -1;
	int64_t x3208 = 3LL;
	volatile int32_t t97 = 196824251;

	t97 = (((x3205==x3206)/x3207)<<x3208);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3245 = 23U;
	static volatile uint64_t x3246 = UINT64_MAX;
	static uint16_t x3248 = 1U;
	int32_t t98 = 1591;

	t98 = (((x3245==x3246)/x3247)<<x3248);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3309 = INT64_MIN;
	volatile uint8_t x3310 = 106U;
	volatile uint64_t x3311 = 11028453314LLU;
	int64_t x3312 = 0LL;
	volatile uint64_t t99 = 128755LLU;

	t99 = (((x3309==x3310)/x3311)<<x3312);

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

