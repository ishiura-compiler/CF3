#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x34 = INT64_MAX;
int8_t x67 = 11;
int16_t x127 = 764;
volatile int64_t t4 = 35LL;
int8_t x171 = INT8_MIN;
volatile uint32_t x180 = 2U;
int8_t x186 = INT8_MAX;
static uint8_t x187 = 126U;
int32_t t7 = -1121;
uint32_t t8 = 18U;
volatile uint64_t x214 = 602773340340835LLU;
uint32_t x216 = 381U;
static int8_t x259 = -1;
int64_t t12 = 12332830LL;
int16_t x320 = 12;
int64_t x333 = -1LL;
int16_t x342 = INT16_MAX;
volatile uint32_t x343 = 7U;
int8_t x449 = INT8_MIN;
int8_t x468 = INT8_MAX;
uint64_t t20 = 1535012250349LLU;
static volatile int16_t x469 = 3;
static uint32_t x579 = 0U;
int32_t t24 = -14;
uint32_t x641 = UINT32_MAX;
static volatile int32_t x642 = 2510;
static volatile int32_t x648 = 126;
uint64_t x735 = 183098547979LLU;
int8_t x736 = 1;
volatile uint16_t x756 = 3U;
int64_t t30 = -25LL;
static volatile uint32_t t31 = 306U;
int64_t x917 = INT64_MIN;
static int32_t x945 = 531541766;
uint8_t x966 = 4U;
static uint32_t x967 = 8533U;
int32_t x1007 = INT32_MAX;
uint16_t x1022 = UINT16_MAX;
uint8_t x1023 = 0U;
int32_t x1028 = -1;
int16_t x1032 = -1;
uint32_t t42 = 29U;
uint32_t x1065 = 3258U;
int16_t x1067 = INT16_MIN;
volatile int32_t x1068 = -1;
uint16_t x1069 = UINT16_MAX;
static volatile uint16_t x1070 = 263U;
volatile uint16_t x1071 = 402U;
volatile uint32_t x1158 = 5909504U;
int8_t x1160 = -1;
volatile int64_t x1180 = -1LL;
int64_t x1196 = -1LL;
static int8_t x1217 = INT8_MIN;
volatile uint32_t x1266 = UINT32_MAX;
static int16_t x1284 = -1;
static int32_t x1295 = INT32_MIN;
volatile uint16_t x1329 = 2551U;
uint64_t x1331 = UINT64_MAX;
volatile int16_t x1332 = 1;
volatile int32_t x1414 = 1;
uint16_t x1427 = 29U;
int32_t t59 = 1566;
int64_t x1449 = -1LL;
int64_t t60 = -7643LL;
int64_t x1474 = 2848LL;
int32_t x1495 = -1;
static int8_t x1529 = INT8_MIN;
int16_t x1537 = INT16_MAX;
int8_t x1547 = -1;
int32_t x1625 = -1;
uint32_t x1626 = UINT32_MAX;
static uint32_t t72 = UINT32_MAX;
int16_t x1635 = INT16_MAX;
int16_t x1636 = INT16_MAX;
volatile uint64_t t74 = 6LLU;
uint8_t x1696 = 90U;
volatile int16_t x1702 = INT16_MAX;
int16_t x1715 = -1;
static int8_t x1734 = 56;
uint8_t x1735 = UINT8_MAX;
static int8_t x1736 = -14;
int8_t x1783 = INT8_MIN;
uint32_t x1846 = 97199U;
int8_t x1847 = -1;
int32_t x1855 = -1;
uint32_t t86 = 29U;
int32_t x1872 = INT32_MIN;
int32_t t87 = -118524;
int32_t x1880 = INT32_MIN;
static volatile int32_t t88 = 1046554;
static int64_t x1881 = -34450632693353LL;
uint32_t x1968 = UINT32_MAX;
static int32_t x1973 = INT32_MIN;
volatile int64_t x1975 = 2226LL;
uint8_t x1976 = 2U;
volatile int64_t t92 = -1LL;
uint32_t x1998 = 11801195U;
int8_t x2003 = INT8_MIN;
int64_t t95 = -1413695773104857071LL;
uint16_t x2050 = 1034U;
uint32_t x2054 = 48763712U;
int16_t x2065 = -1;
static int8_t x2068 = INT8_MIN;


void f0(void) {
	volatile int16_t x33 = 939;
	static int8_t x35 = INT8_MIN;
	int16_t x36 = -1;
	int64_t t0 = 11385059LL;

	t0 = (x33/(x34>>(x35%x36)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = 17253;
	static volatile int64_t x68 = INT64_MIN;
	volatile int32_t t1 = -48568;

	t1 = (x65/(x66>>(x67%x68)));

	if (t1 != -4096) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x125 = 1LLU;
	volatile uint16_t x126 = UINT16_MAX;
	uint8_t x128 = 27U;
	uint64_t t2 = 35886183164279649LLU;

	t2 = (x125/(x126>>(x127%x128)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x145 = 1065LLU;
	static uint8_t x146 = 5U;
	static volatile uint64_t x147 = 1803332016LLU;
	int8_t x148 = 1;
	volatile uint64_t t3 = 0LLU;

	t3 = (x145/(x146>>(x147%x148)));

	if (t3 != 213LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x149 = INT64_MAX;
	int16_t x150 = 654;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = -1;

	t4 = (x149/(x150>>(x151%x152)));

	if (t4 != 14103015346872745LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x169 = -1;
	volatile int64_t x170 = 32LL;
	static int8_t x172 = INT8_MIN;
	volatile int64_t t5 = 1490687206537938LL;

	t5 = (x169/(x170>>(x171%x172)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x177 = UINT32_MAX;
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = INT32_MIN;
	volatile uint32_t t6 = 6U;

	t6 = (x177/(x178>>(x179%x180)));

	if (t6 != 16843009U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x185 = INT16_MIN;
	int16_t x188 = -1;

	t7 = (x185/(x186>>(x187%x188)));

	if (t7 != -258) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x194 = UINT32_MAX;
	volatile int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;

	t8 = (x193/(x194>>(x195%x196)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x213 = -1;
	static int32_t x215 = INT32_MIN;
	volatile uint64_t t9 = 199866LLU;

	t9 = (x213/(x214>>(x215%x216)));

	if (t9 != 7834398LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x257 = -130422695;
	volatile uint16_t x258 = 15U;
	int64_t x260 = -1LL;
	volatile int32_t t10 = 713759;

	t10 = (x257/(x258>>(x259%x260)));

	if (t10 != -8694846) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x277 = 1U;
	static uint16_t x278 = 340U;
	static volatile int32_t x279 = -7696;
	uint16_t x280 = 4U;
	int32_t t11 = -211175897;

	t11 = (x277/(x278>>(x279%x280)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x301 = INT64_MAX;
	int32_t x302 = 473;
	uint8_t x303 = 89U;
	int8_t x304 = -7;

	t12 = (x301/(x302>>(x303%x304)));

	if (t12 != 658812288346769700LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x317 = INT8_MAX;
	uint8_t x318 = 97U;
	int64_t x319 = 1LL;
	volatile int32_t t13 = -2390;

	t13 = (x317/(x318>>(x319%x320)));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x321 = -113810048622LL;
	volatile uint32_t x322 = 591178568U;
	int8_t x323 = 14;
	uint64_t x324 = 7778LLU;
	volatile int64_t t14 = 76507382276146LL;

	t14 = (x321/(x322>>(x323%x324)));

	if (t14 != -3154205LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x334 = 483179468475449LL;
	int8_t x335 = -1;
	volatile uint16_t x336 = 1U;
	int64_t t15 = 6398LL;

	t15 = (x333/(x334>>(x335%x336)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x341 = INT64_MIN;
	int32_t x344 = INT32_MAX;
	volatile int64_t t16 = 21LL;

	t16 = (x341/(x342>>(x343%x344)));

	if (t16 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x361 = 6;
	static uint8_t x362 = 1U;
	int16_t x363 = INT16_MAX;
	int32_t x364 = -1;
	static volatile int32_t t17 = -2022406;

	t17 = (x361/(x362>>(x363%x364)));

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x429 = 11U;
	uint32_t x430 = 16077U;
	int32_t x431 = INT32_MAX;
	int8_t x432 = -1;
	uint32_t t18 = 11954163U;

	t18 = (x429/(x430>>(x431%x432)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x450 = 5715164685794LLU;
	uint8_t x451 = 4U;
	static volatile int64_t x452 = INT64_MIN;
	static uint64_t t19 = 2800855392946092038LLU;

	t19 = (x449/(x450>>(x451%x452)));

	if (t19 != 51642939LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x465 = -1;
	uint64_t x466 = UINT64_MAX;
	uint64_t x467 = 13046341LLU;

	t20 = (x465/(x466>>(x467%x468)));

	if (t20 != 4096LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x470 = INT64_MAX;
	int8_t x471 = 1;
	volatile uint64_t x472 = 64619LLU;
	int64_t t21 = -6490324780LL;

	t21 = (x469/(x470>>(x471%x472)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x505 = -253191;
	uint8_t x506 = UINT8_MAX;
	volatile int32_t x507 = INT32_MIN;
	volatile int16_t x508 = INT16_MIN;
	volatile int32_t t22 = 47219976;

	t22 = (x505/(x506>>(x507%x508)));

	if (t22 != -992) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x569 = 273U;
	volatile uint8_t x570 = 4U;
	int16_t x571 = 60;
	int8_t x572 = -1;
	uint32_t t23 = 65267153U;

	t23 = (x569/(x570>>(x571%x572)));

	if (t23 != 68U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x577 = 1;
	static int8_t x578 = INT8_MAX;
	static int16_t x580 = -1;

	t24 = (x577/(x578>>(x579%x580)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x643 = INT64_MIN;
	uint8_t x644 = 1U;
	static uint32_t t25 = 627474011U;

	t25 = (x641/(x642>>(x643%x644)));

	if (t25 != 1711142U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x645 = UINT64_MAX;
	uint8_t x646 = UINT8_MAX;
	int8_t x647 = INT8_MAX;
	volatile uint64_t t26 = 2978130158535LLU;

	t26 = (x645/(x646>>(x647%x648)));

	if (t26 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x733 = 19360U;
	uint8_t x734 = UINT8_MAX;
	int32_t t27 = 1145;

	t27 = (x733/(x734>>(x735%x736)));

	if (t27 != 75) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x753 = 675287390U;
	uint64_t x754 = 72582265006642LLU;
	uint32_t x755 = UINT32_MAX;
	volatile uint64_t t28 = 247750899591722LLU;

	t28 = (x753/(x754>>(x755%x756)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x813 = UINT16_MAX;
	uint16_t x814 = UINT16_MAX;
	volatile int32_t x815 = 233264784;
	volatile int8_t x816 = -1;
	int32_t t29 = 5001;

	t29 = (x813/(x814>>(x815%x816)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x829 = -1809021277565092014LL;
	volatile uint8_t x830 = 126U;
	int8_t x831 = 0;
	static uint8_t x832 = 5U;

	t30 = (x829/(x830>>(x831%x832)));

	if (t30 != -14357311726707079LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x833 = INT8_MAX;
	uint32_t x834 = UINT32_MAX;
	static int16_t x835 = 0;
	static volatile int16_t x836 = 1117;

	t31 = (x833/(x834>>(x835%x836)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x885 = -1;
	int32_t x886 = 986;
	static volatile uint8_t x887 = 9U;
	static int8_t x888 = -1;
	int32_t t32 = -1;

	t32 = (x885/(x886>>(x887%x888)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x913 = 1U;
	int64_t x914 = 408543041LL;
	int32_t x915 = -23844444;
	int16_t x916 = -1;
	int64_t t33 = 491589166LL;

	t33 = (x913/(x914>>(x915%x916)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x918 = 4235LL;
	int32_t x919 = INT32_MIN;
	int16_t x920 = 1;
	int64_t t34 = -71730834353468909LL;

	t34 = (x917/(x918>>(x919%x920)));

	if (t34 != -2177891862303370LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x946 = INT32_MAX;
	uint64_t x947 = 13LLU;
	uint64_t x948 = UINT64_MAX;
	int32_t t35 = -1756926;

	t35 = (x945/(x946>>(x947%x948)));

	if (t35 != 2027) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x949 = INT8_MIN;
	uint32_t x950 = UINT32_MAX;
	uint16_t x951 = 13U;
	volatile uint8_t x952 = UINT8_MAX;
	uint32_t t36 = 16145U;

	t36 = (x949/(x950>>(x951%x952)));

	if (t36 != 8192U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x965 = -1;
	uint8_t x968 = 2U;
	volatile int32_t t37 = 161371008;

	t37 = (x965/(x966>>(x967%x968)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x969 = -9419237;
	static int8_t x970 = 1;
	volatile uint8_t x971 = 2U;
	int32_t x972 = -1;
	volatile int32_t t38 = -63214943;

	t38 = (x969/(x970>>(x971%x972)));

	if (t38 != -9419237) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1005 = INT64_MAX;
	static int64_t x1006 = INT64_MAX;
	static int16_t x1008 = INT16_MAX;
	volatile int64_t t39 = -4539295288LL;

	t39 = (x1005/(x1006>>(x1007%x1008)));

	if (t39 != 2LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1021 = UINT64_MAX;
	uint8_t x1024 = 2U;
	static uint64_t t40 = 519LLU;

	t40 = (x1021/(x1022>>(x1023%x1024)));

	if (t40 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1025 = 54704212785798LLU;
	int32_t x1026 = 47064;
	int16_t x1027 = -5;
	static uint64_t t41 = 317291122305LLU;

	t41 = (x1025/(x1026>>(x1027%x1028)));

	if (t41 != 1162336664LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1029 = 994547U;
	static uint8_t x1030 = UINT8_MAX;
	static int16_t x1031 = INT16_MIN;

	t42 = (x1029/(x1030>>(x1031%x1032)));

	if (t42 != 3900U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1037 = -1;
	uint64_t x1038 = 74909505683LLU;
	volatile int32_t x1039 = 6970951;
	int16_t x1040 = -207;
	uint64_t t43 = 36977520LLU;

	t43 = (x1037/(x1038>>(x1039%x1040)));

	if (t43 != 129108358695597LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1066 = UINT8_MAX;
	uint32_t t44 = 444U;

	t44 = (x1065/(x1066>>(x1067%x1068)));

	if (t44 != 12U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1072 = 1;
	int32_t t45 = 490345234;

	t45 = (x1069/(x1070>>(x1071%x1072)));

	if (t45 != 249) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1157 = 640U;
	int32_t x1159 = 313;
	volatile uint32_t t46 = 18031298U;

	t46 = (x1157/(x1158>>(x1159%x1160)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1177 = UINT64_MAX;
	uint8_t x1178 = 77U;
	volatile int16_t x1179 = INT16_MAX;
	static uint64_t t47 = 3800248205684LLU;

	t47 = (x1177/(x1178>>(x1179%x1180)));

	if (t47 != 239568104853370800LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1193 = -1LL;
	int32_t x1194 = 167832983;
	int32_t x1195 = INT32_MAX;
	static volatile int64_t t48 = 306460391641145476LL;

	t48 = (x1193/(x1194>>(x1195%x1196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1218 = 745647180U;
	volatile int8_t x1219 = INT8_MAX;
	int16_t x1220 = -14;
	volatile uint32_t t49 = 112U;

	t49 = (x1217/(x1218>>(x1219%x1220)));

	if (t49 != 11U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1265 = 634;
	static volatile int32_t x1267 = 8;
	uint16_t x1268 = 10529U;
	volatile uint32_t t50 = 9U;

	t50 = (x1265/(x1266>>(x1267%x1268)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1281 = INT8_MAX;
	static uint8_t x1282 = 1U;
	static int16_t x1283 = INT16_MIN;
	volatile int32_t t51 = 156;

	t51 = (x1281/(x1282>>(x1283%x1284)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1293 = UINT8_MAX;
	uint8_t x1294 = UINT8_MAX;
	static int16_t x1296 = INT16_MIN;
	volatile int32_t t52 = 5524429;

	t52 = (x1293/(x1294>>(x1295%x1296)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1330 = 377LLU;
	volatile uint64_t t53 = 480559632055829086LLU;

	t53 = (x1329/(x1330>>(x1331%x1332)));

	if (t53 != 6LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1341 = -163LL;
	int32_t x1342 = INT32_MAX;
	static uint16_t x1343 = UINT16_MAX;
	int8_t x1344 = -1;
	int64_t t54 = -5372LL;

	t54 = (x1341/(x1342>>(x1343%x1344)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x1349 = -1;
	uint64_t x1350 = UINT64_MAX;
	volatile int8_t x1351 = 0;
	int8_t x1352 = INT8_MAX;
	uint64_t t55 = 0LLU;

	t55 = (x1349/(x1350>>(x1351%x1352)));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x1353 = 1U;
	uint8_t x1354 = UINT8_MAX;
	int64_t x1355 = INT64_MIN;
	int64_t x1356 = -1LL;
	volatile int32_t t56 = 1;

	t56 = (x1353/(x1354>>(x1355%x1356)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1413 = -42;
	volatile int16_t x1415 = 0;
	static int8_t x1416 = 4;
	volatile int32_t t57 = -101921188;

	t57 = (x1413/(x1414>>(x1415%x1416)));

	if (t57 != -42) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1425 = INT32_MIN;
	volatile uint32_t x1426 = UINT32_MAX;
	int32_t x1428 = INT32_MAX;
	uint32_t t58 = 787U;

	t58 = (x1425/(x1426>>(x1427%x1428)));

	if (t58 != 306783378U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x1441 = 13510U;
	uint16_t x1442 = 29846U;
	uint8_t x1443 = 42U;
	static int32_t x1444 = -1;

	t59 = (x1441/(x1442>>(x1443%x1444)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1450 = 166U;
	static volatile uint16_t x1451 = UINT16_MAX;
	int16_t x1452 = INT16_MAX;

	t60 = (x1449/(x1450>>(x1451%x1452)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1473 = 10110285U;
	uint8_t x1475 = UINT8_MAX;
	int8_t x1476 = -1;
	int64_t t61 = -29687670281512LL;

	t61 = (x1473/(x1474>>(x1475%x1476)));

	if (t61 != 3549LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1493 = INT32_MIN;
	int64_t x1494 = 9485555644081822LL;
	static volatile uint32_t x1496 = UINT32_MAX;
	int64_t t62 = -2685LL;

	t62 = (x1493/(x1494>>(x1495%x1496)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x1501 = 59825LLU;
	int8_t x1502 = INT8_MAX;
	static int32_t x1503 = INT32_MIN;
	int32_t x1504 = INT32_MIN;
	static volatile uint64_t t63 = 22360859LLU;

	t63 = (x1501/(x1502>>(x1503%x1504)));

	if (t63 != 471LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1530 = 1643;
	uint8_t x1531 = 10U;
	volatile int32_t x1532 = INT32_MAX;
	int32_t t64 = -122;

	t64 = (x1529/(x1530>>(x1531%x1532)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1538 = 4769980676LLU;
	int8_t x1539 = 23;
	int32_t x1540 = INT32_MAX;
	volatile uint64_t t65 = 737991987LLU;

	t65 = (x1537/(x1538>>(x1539%x1540)));

	if (t65 != 57LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1545 = -1;
	int32_t x1546 = 584;
	int64_t x1548 = -1LL;
	int32_t t66 = 72672820;

	t66 = (x1545/(x1546>>(x1547%x1548)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x1549 = INT8_MIN;
	uint16_t x1550 = 1265U;
	uint16_t x1551 = UINT16_MAX;
	static uint16_t x1552 = UINT16_MAX;
	volatile int32_t t67 = -432;

	t67 = (x1549/(x1550>>(x1551%x1552)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1585 = INT16_MIN;
	volatile int16_t x1586 = INT16_MAX;
	volatile int32_t x1587 = INT32_MIN;
	int8_t x1588 = -1;
	static int32_t t68 = -58;

	t68 = (x1585/(x1586>>(x1587%x1588)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1593 = 32U;
	int64_t x1594 = 12839467987366LL;
	uint16_t x1595 = UINT16_MAX;
	int64_t x1596 = -1LL;
	volatile int64_t t69 = 3LL;

	t69 = (x1593/(x1594>>(x1595%x1596)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1609 = 32780590680376244LLU;
	uint64_t x1610 = UINT64_MAX;
	static uint32_t x1611 = 20428U;
	int16_t x1612 = 27;
	static uint64_t t70 = 702137751LLU;

	t70 = (x1609/(x1610>>(x1611%x1612)));

	if (t70 != 116LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x1613 = INT16_MIN;
	static int32_t x1614 = 2551;
	int64_t x1615 = -1LL;
	int8_t x1616 = -1;
	int32_t t71 = -228814;

	t71 = (x1613/(x1614>>(x1615%x1616)));

	if (t71 != -12) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x1627 = INT16_MAX;
	uint8_t x1628 = 48U;

	t72 = (x1625/(x1626>>(x1627%x1628)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x1633 = -21;
	volatile uint64_t x1634 = 542807LLU;
	volatile uint64_t t73 = 957023265852LLU;

	t73 = (x1633/(x1634>>(x1635%x1636)));

	if (t73 != 33983983393194LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1637 = INT16_MAX;
	static uint64_t x1638 = UINT64_MAX;
	volatile int32_t x1639 = INT32_MIN;
	int32_t x1640 = INT32_MIN;

	t74 = (x1637/(x1638>>(x1639%x1640)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1645 = 0;
	int32_t x1646 = INT32_MAX;
	int8_t x1647 = 27;
	static volatile uint64_t x1648 = 1699933742692664685LLU;
	static int32_t t75 = -2650;

	t75 = (x1645/(x1646>>(x1647%x1648)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1653 = INT32_MAX;
	int8_t x1654 = 12;
	volatile int16_t x1655 = 2823;
	volatile int16_t x1656 = -1;
	static volatile int32_t t76 = 4322;

	t76 = (x1653/(x1654>>(x1655%x1656)));

	if (t76 != 178956970) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1661 = 491U;
	uint16_t x1662 = UINT16_MAX;
	int64_t x1663 = -17530950763LL;
	int8_t x1664 = -1;
	static volatile int32_t t77 = 6;

	t77 = (x1661/(x1662>>(x1663%x1664)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1693 = INT64_MIN;
	uint32_t x1694 = UINT32_MAX;
	uint8_t x1695 = 0U;
	static int64_t t78 = -1LL;

	t78 = (x1693/(x1694>>(x1695%x1696)));

	if (t78 != -2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x1701 = UINT32_MAX;
	volatile int8_t x1703 = -1;
	static int32_t x1704 = -1;
	static volatile uint32_t t79 = 199258157U;

	t79 = (x1701/(x1702>>(x1703%x1704)));

	if (t79 != 131076U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1713 = INT32_MIN;
	int8_t x1714 = INT8_MAX;
	int64_t x1716 = -1LL;
	int32_t t80 = 233940224;

	t80 = (x1713/(x1714>>(x1715%x1716)));

	if (t80 != -16909320) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1733 = -1;
	int32_t t81 = 6;

	t81 = (x1733/(x1734>>(x1735%x1736)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1777 = INT64_MIN;
	static uint64_t x1778 = 252678391542763564LLU;
	int16_t x1779 = INT16_MAX;
	volatile uint8_t x1780 = 6U;
	volatile uint64_t t82 = 13508876942LLU;

	t82 = (x1777/(x1778>>(x1779%x1780)));

	if (t82 != 73LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1781 = 4325U;
	volatile uint64_t x1782 = 6773429157326244126LLU;
	int32_t x1784 = -1;
	uint64_t t83 = 8240121406443589LLU;

	t83 = (x1781/(x1782>>(x1783%x1784)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x1841 = UINT32_MAX;
	uint16_t x1842 = UINT16_MAX;
	uint8_t x1843 = 0U;
	int16_t x1844 = INT16_MAX;
	static volatile uint32_t t84 = 1207416261U;

	t84 = (x1841/(x1842>>(x1843%x1844)));

	if (t84 != 65537U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1845 = 2085U;
	uint32_t x1848 = UINT32_MAX;
	volatile uint32_t t85 = 234637651U;

	t85 = (x1845/(x1846>>(x1847%x1848)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1853 = INT16_MIN;
	static uint32_t x1854 = 39U;
	int16_t x1856 = -1;

	t86 = (x1853/(x1854>>(x1855%x1856)));

	if (t86 != 110126526U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x1869 = -1;
	static int16_t x1870 = INT16_MAX;
	int32_t x1871 = INT32_MIN;

	t87 = (x1869/(x1870>>(x1871%x1872)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1877 = 7130;
	uint16_t x1878 = UINT16_MAX;
	int64_t x1879 = 1LL;

	t88 = (x1877/(x1878>>(x1879%x1880)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1882 = 838U;
	int16_t x1883 = INT16_MAX;
	int8_t x1884 = INT8_MAX;
	int64_t t89 = -3444873084177LL;

	t89 = (x1881/(x1882>>(x1883%x1884)));

	if (t89 != -82221080413LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1893 = INT16_MIN;
	uint16_t x1894 = 99U;
	int64_t x1895 = INT64_MAX;
	volatile uint8_t x1896 = 3U;
	static volatile int32_t t90 = -30663;

	t90 = (x1893/(x1894>>(x1895%x1896)));

	if (t90 != -668) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x1965 = INT64_MAX;
	uint64_t x1966 = UINT64_MAX;
	static volatile int8_t x1967 = -1;
	uint64_t t91 = 16415775477LLU;

	t91 = (x1965/(x1966>>(x1967%x1968)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1974 = 831105769582392LL;

	t92 = (x1973/(x1974>>(x1975%x1976)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1997 = 19U;
	uint64_t x1999 = 11752072LLU;
	volatile int8_t x2000 = 42;
	volatile uint32_t t93 = 533589U;

	t93 = (x1997/(x1998>>(x1999%x2000)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2001 = INT32_MIN;
	uint32_t x2002 = 1U;
	int8_t x2004 = -1;
	volatile uint32_t t94 = 0U;

	t94 = (x2001/(x2002>>(x2003%x2004)));

	if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2009 = 18;
	int64_t x2010 = INT64_MAX;
	int64_t x2011 = INT64_MAX;
	int8_t x2012 = -2;

	t95 = (x2009/(x2010>>(x2011%x2012)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2025 = UINT8_MAX;
	uint32_t x2026 = 8U;
	int8_t x2027 = -4;
	static volatile int16_t x2028 = -1;
	volatile uint32_t t96 = 179157149U;

	t96 = (x2025/(x2026>>(x2027%x2028)));

	if (t96 != 31U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2049 = INT16_MAX;
	uint8_t x2051 = UINT8_MAX;
	int32_t x2052 = 1;
	volatile int32_t t97 = -486304;

	t97 = (x2049/(x2050>>(x2051%x2052)));

	if (t97 != 31) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2053 = -1;
	int8_t x2055 = -1;
	int64_t x2056 = -1LL;
	static volatile uint32_t t98 = 672851U;

	t98 = (x2053/(x2054>>(x2055%x2056)));

	if (t98 != 88U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x2066 = UINT32_MAX;
	uint32_t x2067 = 12U;
	uint32_t t99 = 738U;

	t99 = (x2065/(x2066>>(x2067%x2068)));

	if (t99 != 4096U) { NG(); } else { ; }
	
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

