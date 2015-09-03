#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x22 = INT64_MAX;
volatile uint64_t t0 = 137290376531686374LLU;
volatile int16_t x27 = INT16_MIN;
static volatile uint64_t x42 = 510LLU;
volatile uint64_t x78 = 6056547168LLU;
int64_t x85 = INT64_MAX;
static int32_t x86 = INT32_MAX;
int8_t x103 = INT8_MAX;
volatile int32_t t7 = 320;
volatile int8_t x127 = INT8_MAX;
static int8_t x128 = INT8_MIN;
int16_t x225 = INT16_MAX;
volatile uint8_t x226 = 20U;
volatile uint64_t x227 = 1315552LLU;
uint16_t x228 = 12U;
int32_t x290 = INT32_MIN;
int8_t x306 = INT8_MAX;
int8_t x307 = INT8_MIN;
uint16_t x308 = 42U;
static int32_t x310 = INT32_MAX;
int64_t x311 = INT64_MIN;
int32_t x312 = 24016049;
volatile int16_t x366 = INT16_MIN;
volatile uint8_t x419 = 124U;
static volatile uint32_t t21 = 65U;
int32_t x509 = -1;
static int32_t t27 = 6;
int8_t x594 = INT8_MAX;
uint32_t x614 = 37381673U;
uint16_t x699 = 33U;
volatile uint64_t x706 = 12255323LLU;
int32_t x719 = INT32_MAX;
uint64_t t35 = 436892327465LLU;
volatile uint16_t x787 = 1U;
uint64_t x788 = 22LLU;
volatile uint32_t t36 = 927934U;
uint8_t x811 = UINT8_MAX;
uint64_t x814 = 12LLU;
uint64_t t38 = 2LLU;
uint16_t x876 = 14U;
int16_t x909 = INT16_MAX;
uint32_t t43 = UINT32_MAX;
uint64_t t44 = 3556383504328811LLU;
int8_t x943 = 38;
volatile int32_t x947 = 58;
static int32_t x948 = -1;
uint16_t x953 = 3U;
int32_t t47 = 3143880;
uint16_t x992 = 19U;
int16_t x993 = 1;
uint64_t x1041 = 126511117148LLU;
uint8_t x1042 = UINT8_MAX;
volatile int32_t t54 = 773;
uint8_t x1070 = 3U;
uint8_t x1071 = 9U;
int64_t x1072 = -1LL;
int64_t x1107 = 940980906980813977LL;
uint8_t x1108 = 3U;
int8_t x1139 = 12;
uint32_t x1194 = 29780U;
int8_t x1211 = INT8_MAX;
int8_t x1252 = INT8_MIN;
int64_t t62 = INT64_MAX;
int16_t x1274 = -1;
static uint64_t t66 = 1012464162335779LLU;
uint32_t t67 = 7U;
volatile uint64_t t68 = 71859159437LLU;
volatile int64_t x1488 = 47298648011651LL;
uint32_t t70 = 1172U;
uint32_t x1571 = 3917U;
volatile int32_t x1587 = -1;
static volatile uint32_t t73 = 50U;
uint64_t t75 = 1277920558200LLU;
volatile uint16_t x1776 = 0U;
static uint64_t t78 = 26146334793462LLU;
uint32_t x1842 = 12009297U;
int64_t t79 = INT64_MAX;
uint16_t x1860 = 6U;
int64_t t81 = INT64_MAX;
int8_t x1897 = -1;
volatile int16_t x1900 = INT16_MAX;
uint32_t x1906 = 22177247U;
int16_t x1973 = 12865;
int32_t x1974 = INT32_MAX;
int16_t x1989 = 3;
volatile uint64_t t88 = UINT64_MAX;
static uint8_t x2015 = 3U;
volatile int64_t t91 = -160664155804LL;
uint64_t x2067 = 183077786LLU;
int32_t x2096 = 3;
uint16_t x2100 = 2U;
static uint32_t x2133 = 13291U;
volatile uint32_t t97 = 3U;
int16_t x2167 = 52;
int16_t x2258 = 69;
static int32_t x2260 = 26;


void f0(void) {
	uint64_t x21 = 21356110574LLU;
	uint8_t x23 = UINT8_MAX;
	uint8_t x24 = 4U;

	t0 = ((x21|x22)<<(x23&x24));

	if (t0 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x25 = 91U;
	uint64_t x26 = 138391621154012LLU;
	static uint32_t x28 = 11U;
	static volatile uint64_t t1 = 4210041127339LLU;

	t1 = ((x25|x26)<<(x27&x28));

	if (t1 != 138391621154015LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x41 = UINT8_MAX;
	static int64_t x43 = 0LL;
	int16_t x44 = INT16_MAX;
	volatile uint64_t t2 = 10374LLU;

	t2 = ((x41|x42)<<(x43&x44));

	if (t2 != 511LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x53 = 135U;
	uint32_t x54 = UINT32_MAX;
	int64_t x55 = INT64_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = ((x53|x54)<<(x55&x56));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x61 = INT32_MIN;
	uint32_t x62 = 29U;
	int8_t x63 = INT8_MAX;
	int32_t x64 = INT32_MIN;
	volatile uint32_t t4 = 19U;

	t4 = ((x61|x62)<<(x63&x64));

	if (t4 != 2147483677U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x77 = -717358LL;
	volatile uint8_t x79 = 1U;
	static int32_t x80 = INT32_MIN;
	uint64_t t5 = 3442969708654LLU;

	t5 = ((x77|x78)<<(x79&x80));

	if (t5 != 18446744073709527026LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x87 = 0U;
	int16_t x88 = -1;
	int64_t t6 = INT64_MAX;

	t6 = ((x85|x86)<<(x87&x88));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x101 = 43U;
	uint8_t x102 = 1U;
	int8_t x104 = INT8_MIN;

	t7 = ((x101|x102)<<(x103&x104));

	if (t7 != 43) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x125 = UINT64_MAX;
	static int8_t x126 = INT8_MIN;
	static uint64_t t8 = UINT64_MAX;

	t8 = ((x125|x126)<<(x127&x128));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x133 = -14817;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = 153892LL;
	uint8_t x136 = UINT8_MAX;
	static uint64_t t9 = 259665155LLU;

	t9 = ((x133|x134)<<(x135&x136));

	if (t9 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x153 = UINT64_MAX;
	uint16_t x154 = 122U;
	volatile int8_t x155 = 5;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x153|x154)<<(x155&x156));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x165 = 12U;
	static uint8_t x166 = 3U;
	static uint16_t x167 = 6352U;
	static volatile uint64_t x168 = 5LLU;
	volatile int32_t t11 = -116;

	t11 = ((x165|x166)<<(x167&x168));

	if (t11 != 15) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t t12 = 1;

	t12 = ((x225|x226)<<(x227&x228));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x289 = 831411624252223LLU;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = 0U;
	volatile uint64_t t13 = 1046999644322458757LLU;

	t13 = ((x289|x290)<<(x291&x292));

	if (t13 != 18446744072007095103LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x305 = 1U;
	int32_t t14 = -13465;

	t14 = ((x305|x306)<<(x307&x308));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x309 = 6U;
	volatile int32_t t15 = INT32_MAX;

	t15 = ((x309|x310)<<(x311&x312));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x349 = 5173LLU;
	uint64_t x350 = UINT64_MAX;
	volatile int8_t x351 = 5;
	static uint32_t x352 = 33563453U;
	uint64_t t16 = 2139313710LLU;

	t16 = ((x349|x350)<<(x351&x352));

	if (t16 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x365 = 642U;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = UINT8_MAX;
	uint32_t t17 = 1026486U;

	t17 = ((x365|x366)<<(x367&x368));

	if (t17 != 4294935170U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x381 = UINT8_MAX;
	uint32_t x382 = 9562U;
	int64_t x383 = 1912282726186770479LL;
	int64_t x384 = INT64_MIN;
	uint32_t t18 = 1911891U;

	t18 = ((x381|x382)<<(x383&x384));

	if (t18 != 9727U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x389 = -1LL;
	volatile uint64_t x390 = 12LLU;
	volatile uint8_t x391 = 1U;
	volatile int32_t x392 = INT32_MAX;
	uint64_t t19 = 8091LLU;

	t19 = ((x389|x390)<<(x391&x392));

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x401 = 3U;
	uint8_t x402 = 1U;
	static int8_t x403 = 0;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t20 = 14;

	t20 = ((x401|x402)<<(x403&x404));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x417 = UINT32_MAX;
	int32_t x418 = 351340;
	int64_t x420 = -243473147LL;

	t21 = ((x417|x418)<<(x419&x420));

	if (t21 != 4294967280U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x425 = -23;
	uint32_t x426 = 799244549U;
	uint8_t x427 = 0U;
	uint8_t x428 = 24U;
	uint32_t t22 = 121U;

	t22 = ((x425|x426)<<(x427&x428));

	if (t22 != 4294967277U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x510 = 46496973LLU;
	static int8_t x511 = 1;
	int16_t x512 = INT16_MAX;
	uint64_t t23 = 67805585LLU;

	t23 = ((x509|x510)<<(x511&x512));

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x521 = 0;
	volatile int8_t x522 = 0;
	uint8_t x523 = 3U;
	int32_t x524 = -1;
	volatile int32_t t24 = -1990;

	t24 = ((x521|x522)<<(x523&x524));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x533 = UINT16_MAX;
	static volatile int16_t x534 = 36;
	int64_t x535 = INT64_MIN;
	volatile int64_t x536 = 30LL;
	int32_t t25 = 93948020;

	t25 = ((x533|x534)<<(x535&x536));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x537 = 1U;
	int8_t x538 = 7;
	static int16_t x539 = INT16_MAX;
	volatile int8_t x540 = 18;
	volatile uint32_t t26 = 13176453U;

	t26 = ((x537|x538)<<(x539&x540));

	if (t26 != 1835008U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x541 = 23U;
	int8_t x542 = INT8_MAX;
	int8_t x543 = 1;
	volatile int64_t x544 = 845811409841LL;

	t27 = ((x541|x542)<<(x543&x544));

	if (t27 != 254) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x577 = 12792092U;
	uint8_t x578 = 7U;
	int64_t x579 = INT64_MIN;
	int32_t x580 = INT32_MAX;
	static volatile uint32_t t28 = 6286U;

	t28 = ((x577|x578)<<(x579&x580));

	if (t28 != 12792095U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x593 = INT16_MAX;
	static int32_t x595 = -45803;
	int8_t x596 = 0;
	static int32_t t29 = 0;

	t29 = ((x593|x594)<<(x595&x596));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x613 = INT16_MIN;
	uint8_t x615 = 9U;
	static uint32_t x616 = 3297758U;
	uint32_t t30 = 2702U;

	t30 = ((x613|x614)<<(x615&x616));

	if (t30 != 4293273856U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x677 = 5U;
	volatile int8_t x678 = 32;
	int32_t x679 = INT32_MIN;
	uint16_t x680 = 3U;
	volatile int32_t t31 = 108;

	t31 = ((x677|x678)<<(x679&x680));

	if (t31 != 37) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x697 = INT8_MAX;
	uint16_t x698 = UINT16_MAX;
	int8_t x700 = INT8_MIN;
	volatile int32_t t32 = -219559;

	t32 = ((x697|x698)<<(x699&x700));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x705 = UINT64_MAX;
	static int64_t x707 = 1599342321392058000LL;
	static uint16_t x708 = 16U;
	volatile uint64_t t33 = 28245544LLU;

	t33 = ((x705|x706)<<(x707&x708));

	if (t33 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x717 = 3479;
	uint16_t x718 = 7134U;
	int16_t x720 = 0;
	int32_t t34 = 714;

	t34 = ((x717|x718)<<(x719&x720));

	if (t34 != 8159) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x773 = INT16_MAX;
	volatile uint64_t x774 = 6155313503328925799LLU;
	int32_t x775 = INT32_MIN;
	uint8_t x776 = 1U;

	t35 = ((x773|x774)<<(x775&x776));

	if (t35 != 6155313503328927743LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x785 = 908874U;
	uint32_t x786 = 10994U;

	t36 = ((x785|x786)<<(x787&x788));

	if (t36 != 917242U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x809 = 86823965LLU;
	int64_t x810 = -1LL;
	static uint32_t x812 = 0U;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x809|x810)<<(x811&x812));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x813 = -15059601;
	int64_t x815 = INT64_MIN;
	volatile int8_t x816 = INT8_MAX;

	t38 = ((x813|x814)<<(x815&x816));

	if (t38 != 18446744073694492015LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x817 = 338223323071952303LLU;
	static int8_t x818 = -1;
	int64_t x819 = INT64_MIN;
	int64_t x820 = INT64_MAX;
	static uint64_t t39 = UINT64_MAX;

	t39 = ((x817|x818)<<(x819&x820));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x849 = UINT32_MAX;
	int32_t x850 = -1;
	int32_t x851 = INT32_MAX;
	int32_t x852 = 14;
	uint32_t t40 = 294775U;

	t40 = ((x849|x850)<<(x851&x852));

	if (t40 != 4294950912U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x873 = 376U;
	int8_t x874 = 13;
	volatile int16_t x875 = -1;
	static volatile int32_t t41 = 171;

	t41 = ((x873|x874)<<(x875&x876));

	if (t41 != 6242304) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x905 = 3825U;
	uint8_t x906 = UINT8_MAX;
	uint32_t x907 = 2U;
	static int64_t x908 = INT64_MIN;
	volatile int32_t t42 = -547;

	t42 = ((x905|x906)<<(x907&x908));

	if (t42 != 3839) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x910 = UINT32_MAX;
	uint8_t x911 = 1U;
	uint64_t x912 = 40LLU;

	t43 = ((x909|x910)<<(x911&x912));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x937 = UINT64_MAX;
	int16_t x938 = -617;
	int32_t x939 = -730965;
	static int8_t x940 = INT8_MAX;

	t44 = ((x937|x938)<<(x939&x940));

	if (t44 != 18446735277616529408LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x941 = UINT8_MAX;
	uint64_t x942 = 128242897LLU;
	int64_t x944 = INT64_MIN;
	volatile uint64_t t45 = 1532394464LLU;

	t45 = ((x941|x942)<<(x943&x944));

	if (t45 != 128242943LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x945 = INT32_MAX;
	static uint64_t x946 = 30724591263880083LLU;
	volatile uint64_t t46 = 215721335969LLU;

	t46 = ((x945|x946)<<(x947&x948));

	if (t46 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x954 = UINT8_MAX;
	uint16_t x955 = 14986U;
	static int8_t x956 = 10;

	t47 = ((x953|x954)<<(x955&x956));

	if (t47 != 261120) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x989 = 1U;
	static int32_t x990 = 1895;
	int8_t x991 = 22;
	static volatile uint32_t t48 = 162611U;

	t48 = ((x989|x990)<<(x991&x992));

	if (t48 != 496762880U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x994 = 969;
	uint16_t x995 = 1U;
	int16_t x996 = INT16_MAX;
	int32_t t49 = -18;

	t49 = ((x993|x994)<<(x995&x996));

	if (t49 != 1938) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1021 = 11U;
	int32_t x1022 = INT32_MAX;
	static int8_t x1023 = INT8_MIN;
	static int8_t x1024 = 2;
	static int32_t t50 = INT32_MAX;

	t50 = ((x1021|x1022)<<(x1023&x1024));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1033 = INT8_MIN;
	volatile uint64_t x1034 = 112498LLU;
	uint8_t x1035 = 17U;
	int8_t x1036 = INT8_MAX;
	volatile uint64_t t51 = 59102LLU;

	t51 = ((x1033|x1034)<<(x1035&x1036));

	if (t51 != 18446744073707716608LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1043 = 25U;
	uint16_t x1044 = UINT16_MAX;
	volatile uint64_t t52 = 111315644614633LLU;

	t52 = ((x1041|x1042)<<(x1043&x1044));

	if (t52 != 4245008683055972352LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1045 = 11U;
	volatile uint32_t x1046 = 296365795U;
	static int8_t x1047 = 8;
	volatile uint8_t x1048 = UINT8_MAX;
	volatile uint32_t t53 = 42755U;

	t53 = ((x1045|x1046)<<(x1047&x1048));

	if (t53 != 2855201536U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1053 = 58U;
	uint8_t x1054 = 3U;
	int16_t x1055 = INT16_MIN;
	static uint8_t x1056 = UINT8_MAX;

	t54 = ((x1053|x1054)<<(x1055&x1056));

	if (t54 != 59) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x1069 = UINT32_MAX;
	volatile uint32_t t55 = 504089971U;

	t55 = ((x1069|x1070)<<(x1071&x1072));

	if (t55 != 4294966784U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1073 = INT32_MAX;
	static uint32_t x1074 = UINT32_MAX;
	static uint64_t x1075 = 140412731693572LLU;
	uint8_t x1076 = 0U;
	uint32_t t56 = UINT32_MAX;

	t56 = ((x1073|x1074)<<(x1075&x1076));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x1105 = 0U;
	uint16_t x1106 = 1U;
	volatile int32_t t57 = -102;

	t57 = ((x1105|x1106)<<(x1107&x1108));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1137 = UINT8_MAX;
	uint8_t x1138 = 2U;
	int16_t x1140 = INT16_MAX;
	volatile int32_t t58 = -78492187;

	t58 = ((x1137|x1138)<<(x1139&x1140));

	if (t58 != 1044480) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x1193 = 129570920389033771LLU;
	int16_t x1195 = INT16_MIN;
	uint64_t x1196 = 14080LLU;
	uint64_t t59 = 3968377901LLU;

	t59 = ((x1193|x1194)<<(x1195&x1196));

	if (t59 != 129570920389050239LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1209 = INT16_MAX;
	int16_t x1210 = 1;
	int64_t x1212 = INT64_MIN;
	int32_t t60 = 2824;

	t60 = ((x1209|x1210)<<(x1211&x1212));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x1233 = INT32_MAX;
	uint16_t x1234 = UINT16_MAX;
	volatile int16_t x1235 = INT16_MIN;
	uint16_t x1236 = 29878U;
	volatile int32_t t61 = INT32_MAX;

	t61 = ((x1233|x1234)<<(x1235&x1236));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1249 = INT64_MAX;
	int8_t x1250 = 16;
	volatile int8_t x1251 = 17;

	t62 = ((x1249|x1250)<<(x1251&x1252));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1257 = 2401720U;
	int32_t x1258 = -1;
	static uint8_t x1259 = 104U;
	int32_t x1260 = INT32_MIN;
	static volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x1257|x1258)<<(x1259&x1260));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1265 = 51324LLU;
	static int16_t x1266 = -1;
	int8_t x1267 = 0;
	int32_t x1268 = INT32_MIN;
	uint64_t t64 = UINT64_MAX;

	t64 = ((x1265|x1266)<<(x1267&x1268));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x1273 = UINT64_MAX;
	uint16_t x1275 = 13U;
	static int32_t x1276 = INT32_MAX;
	static uint64_t t65 = 44121663593293365LLU;

	t65 = ((x1273|x1274)<<(x1275&x1276));

	if (t65 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1321 = UINT64_MAX;
	static int32_t x1322 = -1;
	static uint64_t x1323 = UINT64_MAX;
	int16_t x1324 = 1;

	t66 = ((x1321|x1322)<<(x1323&x1324));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1325 = 33;
	uint32_t x1326 = 113860U;
	static int64_t x1327 = 27528208LL;
	volatile int32_t x1328 = INT32_MIN;

	t67 = ((x1325|x1326)<<(x1327&x1328));

	if (t67 != 113893U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1329 = 29313753803LLU;
	uint8_t x1330 = UINT8_MAX;
	static uint8_t x1331 = UINT8_MAX;
	uint8_t x1332 = 27U;

	t68 = ((x1329|x1330)<<(x1331&x1332));

	if (t68 != 3934425441569341440LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x1381 = 4480161U;
	uint64_t x1382 = UINT64_MAX;
	int16_t x1383 = INT16_MIN;
	uint16_t x1384 = 13139U;
	static volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x1381|x1382)<<(x1383&x1384));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x1485 = 2U;
	uint32_t x1486 = UINT32_MAX;
	uint8_t x1487 = 11U;

	t70 = ((x1485|x1486)<<(x1487&x1488));

	if (t70 != 4294967288U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x1513 = UINT8_MAX;
	uint32_t x1514 = UINT32_MAX;
	int8_t x1515 = INT8_MIN;
	uint8_t x1516 = 0U;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x1513|x1514)<<(x1515&x1516));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1569 = 1337571072303057485LLU;
	uint64_t x1570 = UINT64_MAX;
	volatile int32_t x1572 = INT32_MIN;
	static uint64_t t72 = UINT64_MAX;

	t72 = ((x1569|x1570)<<(x1571&x1572));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x1585 = -1;
	uint32_t x1586 = 148754663U;
	int32_t x1588 = 3;

	t73 = ((x1585|x1586)<<(x1587&x1588));

	if (t73 != 4294967288U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1593 = UINT64_MAX;
	int32_t x1594 = INT32_MIN;
	static volatile int32_t x1595 = INT32_MIN;
	volatile uint16_t x1596 = UINT16_MAX;
	static volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x1593|x1594)<<(x1595&x1596));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x1649 = 31U;
	static uint64_t x1650 = 377LLU;
	static volatile uint16_t x1651 = 10U;
	int32_t x1652 = 635834;

	t75 = ((x1649|x1650)<<(x1651&x1652));

	if (t75 != 392192LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1725 = UINT64_MAX;
	static int32_t x1726 = -1;
	volatile int32_t x1727 = -1;
	int16_t x1728 = 4;
	uint64_t t76 = 21876441908867093LLU;

	t76 = ((x1725|x1726)<<(x1727&x1728));

	if (t76 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1773 = 3LLU;
	int32_t x1774 = -355026;
	volatile int64_t x1775 = INT64_MIN;
	uint64_t t77 = 11LLU;

	t77 = ((x1773|x1774)<<(x1775&x1776));

	if (t77 != 18446744073709196591LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1789 = INT32_MIN;
	static uint64_t x1790 = UINT64_MAX;
	int32_t x1791 = INT32_MAX;
	static volatile int8_t x1792 = 13;

	t78 = ((x1789|x1790)<<(x1791&x1792));

	if (t78 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1841 = INT64_MAX;
	uint16_t x1843 = 0U;
	volatile int32_t x1844 = INT32_MIN;

	t79 = ((x1841|x1842)<<(x1843&x1844));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x1857 = 4;
	volatile int32_t x1858 = 18145818;
	int64_t x1859 = INT64_MIN;
	volatile int32_t t80 = -1796777;

	t80 = ((x1857|x1858)<<(x1859&x1860));

	if (t80 != 18145822) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1865 = INT64_MAX;
	static uint32_t x1866 = 218823815U;
	static int16_t x1867 = INT16_MIN;
	int64_t x1868 = 3LL;

	t81 = ((x1865|x1866)<<(x1867&x1868));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x1898 = 0U;
	int32_t x1899 = INT32_MIN;
	uint32_t t82 = UINT32_MAX;

	t82 = ((x1897|x1898)<<(x1899&x1900));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1905 = 6;
	volatile uint64_t x1907 = 188366722460LLU;
	volatile int64_t x1908 = INT64_MIN;
	uint32_t t83 = 39011U;

	t83 = ((x1905|x1906)<<(x1907&x1908));

	if (t83 != 22177247U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1969 = -1;
	static uint64_t x1970 = 4937853864698031LLU;
	int64_t x1971 = INT64_MIN;
	uint64_t x1972 = 13344950688LLU;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x1969|x1970)<<(x1971&x1972));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x1975 = 50U;
	int8_t x1976 = 4;
	int32_t t85 = INT32_MAX;

	t85 = ((x1973|x1974)<<(x1975&x1976));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1990 = 55LLU;
	uint32_t x1991 = 0U;
	int64_t x1992 = INT64_MIN;
	volatile uint64_t t86 = 53561957434158LLU;

	t86 = ((x1989|x1990)<<(x1991&x1992));

	if (t86 != 55LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1993 = -746;
	volatile uint64_t x1994 = UINT64_MAX;
	volatile int8_t x1995 = INT8_MAX;
	uint16_t x1996 = 2U;
	uint64_t t87 = 2LLU;

	t87 = ((x1993|x1994)<<(x1995&x1996));

	if (t87 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2001 = 1U;
	uint64_t x2002 = UINT64_MAX;
	int8_t x2003 = 4;
	volatile uint32_t x2004 = 0U;

	t88 = ((x2001|x2002)<<(x2003&x2004));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2005 = -5779;
	uint64_t x2006 = 13935109LLU;
	static int64_t x2007 = INT64_MIN;
	uint64_t x2008 = 15LLU;
	uint64_t t89 = 7885322LLU;

	t89 = ((x2005|x2006)<<(x2007&x2008));

	if (t89 != 18446744073709546349LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2013 = 3U;
	volatile uint8_t x2014 = 6U;
	volatile int8_t x2016 = 0;
	static int32_t t90 = -259;

	t90 = ((x2013|x2014)<<(x2015&x2016));

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2029 = 13351318LL;
	uint16_t x2030 = UINT16_MAX;
	uint16_t x2031 = 51U;
	int8_t x2032 = INT8_MIN;

	t91 = ((x2029|x2030)<<(x2031&x2032));

	if (t91 != 13369343LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2037 = 766U;
	int32_t x2038 = 1;
	int16_t x2039 = INT16_MIN;
	volatile uint8_t x2040 = 0U;
	volatile uint32_t t92 = 29347834U;

	t92 = ((x2037|x2038)<<(x2039&x2040));

	if (t92 != 767U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x2065 = 18U;
	int16_t x2066 = -2;
	uint16_t x2068 = 51U;
	static uint32_t t93 = 1U;

	t93 = ((x2065|x2066)<<(x2067&x2068));

	if (t93 != 4294443008U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x2093 = INT32_MAX;
	static uint32_t x2094 = 351U;
	uint16_t x2095 = 1U;
	volatile uint32_t t94 = 115999269U;

	t94 = ((x2093|x2094)<<(x2095&x2096));

	if (t94 != 4294967294U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2097 = 64726976U;
	int64_t x2098 = INT64_MAX;
	uint64_t x2099 = 14548261LLU;
	volatile int64_t t95 = INT64_MAX;

	t95 = ((x2097|x2098)<<(x2099&x2100));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2109 = 0U;
	static int64_t x2110 = INT64_MAX;
	int32_t x2111 = INT32_MIN;
	int32_t x2112 = 85829343;
	volatile int64_t t96 = INT64_MAX;

	t96 = ((x2109|x2110)<<(x2111&x2112));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2134 = INT8_MIN;
	int16_t x2135 = INT16_MIN;
	uint8_t x2136 = UINT8_MAX;

	t97 = ((x2133|x2134)<<(x2135&x2136));

	if (t97 != 4294967275U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2165 = 30329U;
	int32_t x2166 = 0;
	volatile int32_t x2168 = 19;
	static volatile uint32_t t98 = 87311688U;

	t98 = ((x2165|x2166)<<(x2167&x2168));

	if (t98 != 1987641344U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2257 = 12511324U;
	int16_t x2259 = -29;
	volatile uint32_t t99 = 1801990U;

	t99 = ((x2257|x2258)<<(x2259&x2260));

	if (t99 != 50045300U) { NG(); } else { ; }
	
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

