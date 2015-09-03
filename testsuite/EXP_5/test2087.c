#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x102 = 8;
int16_t x103 = 0;
uint64_t t3 = 430841LLU;
int16_t x155 = 41;
int8_t x156 = -21;
volatile int16_t x190 = INT16_MIN;
int16_t x208 = -1;
int16_t x218 = INT16_MAX;
int8_t x219 = INT8_MIN;
int8_t x256 = INT8_MAX;
int32_t x276 = -1;
int16_t x329 = INT16_MAX;
uint8_t x332 = 7U;
int8_t x348 = INT8_MAX;
volatile uint64_t x369 = 2652LLU;
uint64_t t15 = 16915437315154LLU;
int32_t x375 = INT32_MAX;
int16_t x391 = 78;
int8_t x403 = INT8_MIN;
static volatile int32_t x437 = 24;
uint8_t x438 = 0U;
static volatile int16_t x482 = INT16_MAX;
static uint8_t x484 = UINT8_MAX;
int32_t t24 = 10187797;
int32_t x602 = INT32_MIN;
static int32_t x609 = 14043;
int64_t x611 = -1LL;
int64_t x612 = 242LL;
uint64_t x722 = UINT64_MAX;
volatile uint16_t x729 = 1U;
int64_t x730 = -1LL;
int32_t t30 = 34277;
volatile int8_t x735 = -1;
int8_t x739 = 1;
int16_t x764 = 11;
static uint8_t x834 = 39U;
volatile uint8_t x932 = UINT8_MAX;
int32_t x970 = -1;
uint16_t x975 = 7127U;
uint64_t t42 = 51114814775LLU;
int64_t x998 = -1LL;
volatile int32_t x1047 = INT32_MAX;
static int8_t x1093 = 0;
int16_t x1094 = -1;
volatile int16_t x1166 = -4003;
volatile int32_t x1167 = -21558114;
static uint64_t x1170 = UINT64_MAX;
uint64_t x1174 = UINT64_MAX;
int32_t x1186 = -1;
int16_t x1200 = -1;
int32_t t51 = INT32_MAX;
volatile int32_t t52 = 258;
int32_t x1284 = -1;
int8_t x1287 = -1;
int8_t x1304 = -1;
uint16_t x1319 = 10U;
int64_t x1331 = INT64_MIN;
int32_t t58 = 0;
uint16_t x1349 = 1U;
static volatile uint16_t x1350 = 0U;
uint8_t x1352 = 7U;
static volatile int32_t x1392 = INT32_MIN;
volatile int32_t t61 = 750588924;
uint64_t x1417 = 34732214629910LLU;
int8_t x1439 = -3;
volatile uint32_t x1478 = UINT32_MAX;
volatile int32_t t66 = 0;
int8_t x1543 = INT8_MAX;
volatile int32_t x1603 = INT32_MIN;
volatile int64_t x1605 = 6930LL;
uint8_t x1606 = 57U;
static uint64_t x1607 = 30452LLU;
static uint8_t x1622 = 5U;
int64_t x1690 = -1LL;
int16_t x1691 = INT16_MIN;
static int8_t x1702 = -1;
static volatile int32_t x1703 = INT32_MIN;
volatile uint32_t t73 = 1213U;
uint32_t x1840 = 1836708737U;
uint64_t t78 = UINT64_MAX;
volatile int32_t t80 = 292;
int64_t x1902 = -1LL;
volatile int32_t t85 = -871459995;
int8_t x1927 = 0;
uint8_t x1977 = UINT8_MAX;
int64_t x1979 = -1LL;
volatile int8_t x2008 = -13;
uint16_t x2041 = UINT16_MAX;
int32_t t89 = -746996729;
static uint16_t x2109 = UINT16_MAX;
int16_t x2111 = INT16_MAX;
int64_t x2138 = INT64_MAX;
int8_t x2229 = 6;
int32_t t92 = -253794;
uint8_t x2262 = 4U;
int64_t x2263 = INT64_MIN;
uint64_t t93 = 423680LLU;
uint32_t x2311 = UINT32_MAX;
volatile uint64_t x2441 = UINT64_MAX;
int32_t x2444 = -1;
int8_t x2455 = -1;


void f0(void) {
	volatile uint8_t x85 = 53U;
	int32_t x86 = INT32_MIN;
	volatile int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t0 = 106380373;

	t0 = (x85>>((x86^x87)%x88));

	if (t0 != 53) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x101 = UINT8_MAX;
	static int32_t x104 = INT32_MIN;
	int32_t t1 = -1;

	t1 = (x101>>((x102^x103)%x104));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x129 = 6729U;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = -1;
	int32_t x132 = INT32_MAX;
	int32_t t2 = -1;

	t2 = (x129>>((x130^x131)%x132));

	if (t2 != 3364) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x141 = 18953455511LLU;
	uint32_t x142 = 1517U;
	static int32_t x143 = -1;
	int64_t x144 = -1LL;

	t3 = (x141>>((x142^x143)%x144));

	if (t3 != 18953455511LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = 28762;
	uint64_t t4 = 163940709004LLU;

	t4 = (x153>>((x154^x155)%x156));

	if (t4 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x189 = UINT64_MAX;
	static uint16_t x191 = 33U;
	int16_t x192 = -1;
	uint64_t t5 = UINT64_MAX;

	t5 = (x189>>((x190^x191)%x192));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x205 = 205098855688992647LLU;
	static int16_t x206 = -1;
	int8_t x207 = -1;
	volatile uint64_t t6 = 5459LLU;

	t6 = (x205>>((x206^x207)%x208));

	if (t6 != 205098855688992647LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x220 = -1;
	volatile int32_t t7 = 1;

	t7 = (x217>>((x218^x219)%x220));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x221 = UINT64_MAX;
	volatile uint16_t x222 = 14U;
	static int32_t x223 = INT32_MAX;
	int8_t x224 = -13;
	uint64_t t8 = 8164541455LLU;

	t8 = (x221>>((x222^x223)%x224));

	if (t8 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x253 = UINT32_MAX;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x253>>((x254^x255)%x256));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x273 = 2619LL;
	static int16_t x274 = INT16_MAX;
	int32_t x275 = 44281442;
	volatile int64_t t10 = -595476994019LL;

	t10 = (x273>>((x274^x275)%x276));

	if (t10 != 2619LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x293 = 1U;
	uint32_t x294 = 341U;
	int16_t x295 = 15123;
	volatile int8_t x296 = 36;
	int32_t t11 = -4091753;

	t11 = (x293>>((x294^x295)%x296));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x330 = 0U;
	static uint16_t x331 = 4290U;
	int32_t t12 = 2704930;

	t12 = (x329>>((x330^x331)%x332));

	if (t12 != 511) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x345 = 163U;
	volatile uint8_t x346 = 2U;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t13 = 1;

	t13 = (x345>>((x346^x347)%x348));

	if (t13 != 81) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x349 = 362LLU;
	int8_t x350 = -1;
	static uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MIN;
	uint64_t t14 = 76150LLU;

	t14 = (x349>>((x350^x351)%x352));

	if (t14 != 362LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x370 = 0;
	static uint32_t x371 = 24U;
	int16_t x372 = -1;

	t15 = (x369>>((x370^x371)%x372));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x373 = UINT64_MAX;
	uint8_t x374 = UINT8_MAX;
	static uint8_t x376 = 47U;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x373>>((x374^x375)%x376));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x389 = 107572623659729555LL;
	static int32_t x390 = 234;
	uint8_t x392 = 28U;
	volatile int64_t t17 = 14981031707713196LL;

	t17 = (x389>>((x390^x391)%x392));

	if (t17 != 6411828020LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x401 = 0;
	int8_t x402 = INT8_MIN;
	int16_t x404 = 53;
	int32_t t18 = -1;

	t18 = (x401>>((x402^x403)%x404));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x433 = 1U;
	static int16_t x434 = INT16_MIN;
	volatile int32_t x435 = INT32_MIN;
	int16_t x436 = -8;
	volatile int32_t t19 = 457257541;

	t19 = (x433>>((x434^x435)%x436));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x439 = 7;
	uint32_t x440 = UINT32_MAX;
	int32_t t20 = 524;

	t20 = (x437>>((x438^x439)%x440));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x481 = 24434814980826559LL;
	int16_t x483 = 5453;
	volatile int64_t t21 = -94520857LL;

	t21 = (x481>>((x482^x483)%x484));

	if (t21 != 45513389LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x489 = UINT8_MAX;
	volatile int8_t x490 = 1;
	uint32_t x491 = 0U;
	uint32_t x492 = UINT32_MAX;
	int32_t t22 = 80683842;

	t22 = (x489>>((x490^x491)%x492));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x513 = 8798U;
	volatile int32_t x514 = -1;
	uint64_t x515 = UINT64_MAX;
	volatile int8_t x516 = INT8_MIN;
	volatile uint32_t t23 = 8U;

	t23 = (x513>>((x514^x515)%x516));

	if (t23 != 8798U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x525 = INT8_MAX;
	uint64_t x526 = UINT64_MAX;
	static int32_t x527 = -867207;
	uint8_t x528 = 1U;

	t24 = (x525>>((x526^x527)%x528));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x565 = UINT64_MAX;
	int64_t x566 = INT64_MIN;
	int16_t x567 = INT16_MIN;
	static int16_t x568 = 24;
	uint64_t t25 = UINT64_MAX;

	t25 = (x565>>((x566^x567)%x568));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x573 = 8;
	volatile int8_t x574 = -1;
	int64_t x575 = INT64_MIN;
	int64_t x576 = INT64_MAX;
	int32_t t26 = -181429386;

	t26 = (x573>>((x574^x575)%x576));

	if (t26 != 8) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x601 = 181LL;
	static int16_t x603 = INT16_MIN;
	int16_t x604 = 94;
	volatile int64_t t27 = 11LL;

	t27 = (x601>>((x602^x603)%x604));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x610 = UINT64_MAX;
	int32_t t28 = -66762549;

	t28 = (x609>>((x610^x611)%x612));

	if (t28 != 14043) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x721 = UINT16_MAX;
	volatile int32_t x723 = INT32_MAX;
	int8_t x724 = 12;
	static volatile int32_t t29 = 87;

	t29 = (x721>>((x722^x723)%x724));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x731 = INT8_MAX;
	int16_t x732 = -1;

	t30 = (x729>>((x730^x731)%x732));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x733 = UINT32_MAX;
	int8_t x734 = INT8_MAX;
	int8_t x736 = INT8_MIN;
	uint32_t t31 = UINT32_MAX;

	t31 = (x733>>((x734^x735)%x736));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x737 = 29763U;
	int16_t x738 = INT16_MIN;
	static int8_t x740 = -1;
	volatile int32_t t32 = -3069;

	t32 = (x737>>((x738^x739)%x740));

	if (t32 != 29763) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x741 = 500U;
	int32_t x742 = INT32_MIN;
	volatile uint64_t x743 = 28142644LLU;
	uint16_t x744 = 26U;
	static volatile int32_t t33 = -15432140;

	t33 = (x741>>((x742^x743)%x744));

	if (t33 != 125) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x761 = 710612924LLU;
	int16_t x762 = INT16_MAX;
	uint64_t x763 = 8238880033762845LLU;
	volatile uint64_t t34 = 6026063LLU;

	t34 = (x761>>((x762^x763)%x764));

	if (t34 != 710612924LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x781 = 1;
	volatile uint8_t x782 = 0U;
	static int8_t x783 = INT8_MAX;
	int8_t x784 = -2;
	int32_t t35 = 938;

	t35 = (x781>>((x782^x783)%x784));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x833 = 2;
	int16_t x835 = INT16_MAX;
	volatile int8_t x836 = -1;
	volatile int32_t t36 = 117821423;

	t36 = (x833>>((x834^x835)%x836));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x841 = 3177U;
	static int16_t x842 = INT16_MIN;
	static int8_t x843 = -1;
	static int8_t x844 = -1;
	volatile int32_t t37 = 113;

	t37 = (x841>>((x842^x843)%x844));

	if (t37 != 3177) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x905 = UINT32_MAX;
	uint64_t x906 = 497LLU;
	int64_t x907 = INT64_MAX;
	uint64_t x908 = 504LLU;
	uint32_t t38 = 2550U;

	t38 = (x905>>((x906^x907)%x908));

	if (t38 != 262143U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x929 = 125;
	int64_t x930 = INT64_MAX;
	int8_t x931 = INT8_MAX;
	int32_t t39 = -10626;

	t39 = (x929>>((x930^x931)%x932));

	if (t39 != 125) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x949 = 28U;
	int8_t x950 = 11;
	volatile uint64_t x951 = 10LLU;
	int32_t x952 = INT32_MAX;
	int32_t t40 = -243736289;

	t40 = (x949>>((x950^x951)%x952));

	if (t40 != 14) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x969 = 1U;
	int16_t x971 = INT16_MAX;
	int32_t x972 = -1;
	int32_t t41 = -874;

	t41 = (x969>>((x970^x971)%x972));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x973 = 249004085436835LLU;
	int16_t x974 = 0;
	uint8_t x976 = 74U;

	t42 = (x973>>((x974^x975)%x976));

	if (t42 != 29683600LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x993 = INT16_MAX;
	int16_t x994 = -2547;
	int32_t x995 = INT32_MAX;
	uint16_t x996 = 1U;
	int32_t t43 = 2792402;

	t43 = (x993>>((x994^x995)%x996));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x997 = 189;
	volatile uint8_t x999 = UINT8_MAX;
	int16_t x1000 = -1;
	volatile int32_t t44 = -1;

	t44 = (x997>>((x998^x999)%x1000));

	if (t44 != 189) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x1045 = UINT16_MAX;
	int64_t x1046 = -145268125LL;
	static int16_t x1048 = -1;
	volatile int32_t t45 = 0;

	t45 = (x1045>>((x1046^x1047)%x1048));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x1095 = -1;
	int32_t x1096 = -1;
	static volatile int32_t t46 = 1;

	t46 = (x1093>>((x1094^x1095)%x1096));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x1165 = 1353064LLU;
	int16_t x1168 = -1;
	volatile uint64_t t47 = 295983277811353LLU;

	t47 = (x1165>>((x1166^x1167)%x1168));

	if (t47 != 1353064LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1169 = 2341U;
	int16_t x1171 = -1;
	int32_t x1172 = 63;
	volatile int32_t t48 = 241411;

	t48 = (x1169>>((x1170^x1171)%x1172));

	if (t48 != 2341) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1173 = 0;
	static uint64_t x1175 = UINT64_MAX;
	int16_t x1176 = -1;
	volatile int32_t t49 = 37022;

	t49 = (x1173>>((x1174^x1175)%x1176));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1185 = 6LL;
	volatile int32_t x1187 = -1;
	int16_t x1188 = 4758;
	int64_t t50 = 233669054462005LL;

	t50 = (x1185>>((x1186^x1187)%x1188));

	if (t50 != 6LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1197 = INT32_MAX;
	volatile int16_t x1198 = -1;
	uint8_t x1199 = 7U;

	t51 = (x1197>>((x1198^x1199)%x1200));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1209 = 54U;
	static int16_t x1210 = INT16_MIN;
	volatile int8_t x1211 = INT8_MIN;
	int8_t x1212 = INT8_MIN;

	t52 = (x1209>>((x1210^x1211)%x1212));

	if (t52 != 54) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1245 = 1;
	int8_t x1246 = INT8_MIN;
	volatile int8_t x1247 = INT8_MIN;
	int64_t x1248 = -1LL;
	volatile int32_t t53 = -56452;

	t53 = (x1245>>((x1246^x1247)%x1248));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x1281 = UINT64_MAX;
	int32_t x1282 = -1;
	int16_t x1283 = INT16_MIN;
	uint64_t t54 = UINT64_MAX;

	t54 = (x1281>>((x1282^x1283)%x1284));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1285 = 1U;
	int32_t x1286 = -5799801;
	int16_t x1288 = -1;
	uint32_t t55 = 1017709U;

	t55 = (x1285>>((x1286^x1287)%x1288));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1301 = UINT16_MAX;
	int32_t x1302 = 123372;
	uint16_t x1303 = UINT16_MAX;
	static int32_t t56 = -3387;

	t56 = (x1301>>((x1302^x1303)%x1304));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1317 = INT8_MAX;
	uint32_t x1318 = 1007U;
	static int32_t x1320 = 15;
	static volatile int32_t t57 = -755269661;

	t57 = (x1317>>((x1318^x1319)%x1320));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1329 = 336446289;
	int8_t x1330 = -59;
	int32_t x1332 = -1;

	t58 = (x1329>>((x1330^x1331)%x1332));

	if (t58 != 336446289) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1351 = INT32_MAX;
	int32_t t59 = -40121;

	t59 = (x1349>>((x1350^x1351)%x1352));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x1381 = UINT32_MAX;
	int64_t x1382 = INT64_MIN;
	static int8_t x1383 = INT8_MAX;
	static volatile int8_t x1384 = -1;
	static uint32_t t60 = UINT32_MAX;

	t60 = (x1381>>((x1382^x1383)%x1384));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x1389 = 2;
	int32_t x1390 = INT32_MIN;
	int64_t x1391 = INT64_MIN;

	t61 = (x1389>>((x1390^x1391)%x1392));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x1397 = UINT64_MAX;
	volatile int64_t x1398 = INT64_MIN;
	int8_t x1399 = INT8_MIN;
	volatile uint8_t x1400 = 89U;
	uint64_t t62 = 1708519LLU;

	t62 = (x1397>>((x1398^x1399)%x1400));

	if (t62 != 33554431LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x1401 = UINT16_MAX;
	static volatile int8_t x1402 = -3;
	int64_t x1403 = -47901933442LL;
	int8_t x1404 = INT8_MIN;
	int32_t t63 = 23734;

	t63 = (x1401>>((x1402^x1403)%x1404));

	if (t63 != 8191) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1418 = INT32_MIN;
	uint8_t x1419 = 102U;
	volatile int64_t x1420 = -1LL;
	volatile uint64_t t64 = 19625LLU;

	t64 = (x1417>>((x1418^x1419)%x1420));

	if (t64 != 34732214629910LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x1437 = INT32_MAX;
	uint64_t x1438 = 32761LLU;
	uint64_t x1440 = 33LLU;
	volatile int32_t t65 = -148;

	t65 = (x1437>>((x1438^x1439)%x1440));

	if (t65 != 1023) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1477 = INT16_MAX;
	uint32_t x1479 = 3409548U;
	uint32_t x1480 = 1U;

	t66 = (x1477>>((x1478^x1479)%x1480));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1541 = UINT16_MAX;
	volatile uint8_t x1542 = UINT8_MAX;
	int8_t x1544 = -1;
	int32_t t67 = 5709200;

	t67 = (x1541>>((x1542^x1543)%x1544));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1601 = INT32_MAX;
	uint64_t x1602 = UINT64_MAX;
	volatile int8_t x1604 = INT8_MAX;
	volatile int32_t t68 = 700;

	t68 = (x1601>>((x1602^x1603)%x1604));

	if (t68 != 16777215) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1608 = 8U;
	volatile int64_t t69 = -3515564051970LL;

	t69 = (x1605>>((x1606^x1607)%x1608));

	if (t69 != 216LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x1621 = 49U;
	int8_t x1623 = INT8_MIN;
	static int32_t x1624 = -1;
	int32_t t70 = 35614;

	t70 = (x1621>>((x1622^x1623)%x1624));

	if (t70 != 49) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x1645 = 556968703727LLU;
	uint16_t x1646 = 1U;
	static int16_t x1647 = 57;
	int8_t x1648 = INT8_MAX;
	uint64_t t71 = 963577043416415899LLU;

	t71 = (x1645>>((x1646^x1647)%x1648));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x1689 = UINT8_MAX;
	int8_t x1692 = -1;
	int32_t t72 = -1;

	t72 = (x1689>>((x1690^x1691)%x1692));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1701 = 1901U;
	int16_t x1704 = 117;

	t73 = (x1701>>((x1702^x1703)%x1704));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x1765 = 50796440164500510LLU;
	static volatile int64_t x1766 = 8226353046LL;
	static uint16_t x1767 = 711U;
	uint16_t x1768 = 63U;
	uint64_t t74 = 73871LLU;

	t74 = (x1765>>((x1766^x1767)%x1768));

	if (t74 != 775092165596LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1785 = 110530571560635LLU;
	volatile int8_t x1786 = INT8_MIN;
	static uint64_t x1787 = 148880686LLU;
	static int8_t x1788 = 1;
	uint64_t t75 = 131084241524379048LLU;

	t75 = (x1785>>((x1786^x1787)%x1788));

	if (t75 != 110530571560635LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1817 = 8035U;
	int64_t x1818 = -100669308422641LL;
	static int8_t x1819 = INT8_MIN;
	int64_t x1820 = -1LL;
	static int32_t t76 = 1957;

	t76 = (x1817>>((x1818^x1819)%x1820));

	if (t76 != 8035) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1837 = 1984;
	volatile int8_t x1838 = -1;
	static int8_t x1839 = -1;
	volatile int32_t t77 = -98;

	t77 = (x1837>>((x1838^x1839)%x1840));

	if (t77 != 1984) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1857 = UINT64_MAX;
	volatile int32_t x1858 = INT32_MIN;
	int32_t x1859 = INT32_MIN;
	int8_t x1860 = INT8_MIN;

	t78 = (x1857>>((x1858^x1859)%x1860));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1865 = UINT8_MAX;
	int32_t x1866 = -1;
	int32_t x1867 = -1;
	int64_t x1868 = -2351902LL;
	static volatile int32_t t79 = 49436;

	t79 = (x1865>>((x1866^x1867)%x1868));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1877 = 76U;
	uint64_t x1878 = 12LLU;
	int16_t x1879 = 30;
	int16_t x1880 = -1;

	t80 = (x1877>>((x1878^x1879)%x1880));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1897 = 12U;
	int8_t x1898 = -1;
	volatile int16_t x1899 = INT16_MAX;
	volatile int16_t x1900 = INT16_MIN;
	int32_t t81 = 171658;

	t81 = (x1897>>((x1898^x1899)%x1900));

	if (t81 != 12) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1901 = UINT8_MAX;
	int64_t x1903 = -1LL;
	volatile uint16_t x1904 = 15U;
	int32_t t82 = -1;

	t82 = (x1901>>((x1902^x1903)%x1904));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1905 = 255U;
	int8_t x1906 = 0;
	volatile int16_t x1907 = 1;
	int8_t x1908 = INT8_MIN;
	static int32_t t83 = -7346;

	t83 = (x1905>>((x1906^x1907)%x1908));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x1913 = 18;
	int64_t x1914 = -51264909446537780LL;
	int8_t x1915 = INT8_MIN;
	static uint8_t x1916 = 28U;
	int32_t t84 = -9401;

	t84 = (x1913>>((x1914^x1915)%x1916));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1921 = UINT16_MAX;
	volatile int64_t x1922 = 10254243165309270LL;
	static int8_t x1923 = INT8_MAX;
	uint16_t x1924 = 62U;

	t85 = (x1921>>((x1922^x1923)%x1924));

	if (t85 != 2047) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x1925 = INT32_MAX;
	static int64_t x1926 = INT64_MIN;
	int8_t x1928 = 4;
	volatile int32_t t86 = INT32_MAX;

	t86 = (x1925>>((x1926^x1927)%x1928));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x1978 = UINT64_MAX;
	uint32_t x1980 = 14705U;
	static int32_t t87 = -248262;

	t87 = (x1977>>((x1978^x1979)%x1980));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2005 = UINT8_MAX;
	int64_t x2006 = INT64_MIN;
	static volatile int16_t x2007 = -1;
	volatile int32_t t88 = 941;

	t88 = (x2005>>((x2006^x2007)%x2008));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2042 = UINT16_MAX;
	volatile uint8_t x2043 = UINT8_MAX;
	int8_t x2044 = INT8_MAX;

	t89 = (x2041>>((x2042^x2043)%x2044));

	if (t89 != 16383) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2110 = 1513U;
	int8_t x2112 = 21;
	int32_t t90 = -8170;

	t90 = (x2109>>((x2110^x2111)%x2112));

	if (t90 != 1023) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2137 = UINT32_MAX;
	int16_t x2139 = INT16_MIN;
	uint16_t x2140 = 41U;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x2137>>((x2138^x2139)%x2140));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x2230 = -21;
	static uint32_t x2231 = UINT32_MAX;
	static int64_t x2232 = 117056088LL;

	t92 = (x2229>>((x2230^x2231)%x2232));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x2261 = 656212646LLU;
	int32_t x2264 = -1;

	t93 = (x2261>>((x2262^x2263)%x2264));

	if (t93 != 656212646LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2289 = 0U;
	int64_t x2290 = INT64_MAX;
	int8_t x2291 = INT8_MAX;
	volatile uint8_t x2292 = 1U;
	uint32_t t94 = 213U;

	t94 = (x2289>>((x2290^x2291)%x2292));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2309 = 5U;
	int64_t x2310 = 674111425606531694LL;
	static int16_t x2312 = -1;
	volatile int32_t t95 = 1;

	t95 = (x2309>>((x2310^x2311)%x2312));

	if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2409 = 876786427823068407LLU;
	int8_t x2410 = -1;
	int64_t x2411 = -1278178LL;
	volatile int16_t x2412 = -1;
	uint64_t t96 = 690787790848868020LLU;

	t96 = (x2409>>((x2410^x2411)%x2412));

	if (t96 != 876786427823068407LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x2442 = -342;
	int32_t x2443 = INT32_MIN;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x2441>>((x2442^x2443)%x2444));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2449 = 32025LLU;
	static uint8_t x2450 = 6U;
	static int64_t x2451 = 659591LL;
	volatile int8_t x2452 = INT8_MIN;
	uint64_t t98 = 86LLU;

	t98 = (x2449>>((x2450^x2451)%x2452));

	if (t98 != 16012LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x2453 = INT32_MAX;
	static int16_t x2454 = -4;
	int8_t x2456 = INT8_MIN;
	static volatile int32_t t99 = -964761624;

	t99 = (x2453>>((x2454^x2455)%x2456));

	if (t99 != 268435455) { NG(); } else { ; }
	
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

