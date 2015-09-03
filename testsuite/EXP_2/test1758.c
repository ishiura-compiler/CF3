#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = -1LL;
uint64_t t1 = 64815444510445173LLU;
int64_t x39 = INT64_MIN;
int8_t x58 = INT8_MAX;
uint32_t x59 = 571U;
int32_t x60 = INT32_MAX;
static int32_t x66 = INT32_MIN;
volatile int16_t x68 = 3490;
volatile uint64_t x81 = UINT64_MAX;
int64_t x203 = -1716385LL;
volatile int32_t t7 = 23;
static volatile uint32_t t8 = 380278U;
volatile int8_t x230 = 29;
uint64_t t9 = 73088595343385286LLU;
int32_t x261 = 3;
static uint16_t x307 = 0U;
int64_t x308 = 3471515LL;
volatile int64_t t12 = 2052045348LL;
static int32_t x362 = 1;
volatile uint64_t t14 = 493057LLU;
volatile int8_t x366 = INT8_MAX;
int32_t x390 = -1;
uint32_t x391 = 13U;
volatile int8_t x392 = 1;
static int16_t x405 = 0;
int32_t x502 = 0;
static uint16_t x503 = 527U;
int16_t x552 = 94;
int32_t x589 = INT32_MAX;
int16_t x679 = 2;
static int32_t x684 = -1;
volatile int8_t x700 = INT8_MIN;
static volatile uint64_t t26 = 171LLU;
volatile int64_t x751 = INT64_MAX;
static uint32_t x769 = 6864482U;
uint64_t t31 = 425533101288216497LLU;
uint64_t x797 = 10953213LLU;
volatile int16_t x809 = INT16_MAX;
static int8_t x811 = INT8_MAX;
static uint32_t x812 = 1588552U;
uint32_t t34 = 14264957U;
int64_t x814 = 2LL;
volatile int32_t t35 = -11747315;
volatile int8_t x874 = INT8_MAX;
uint16_t x876 = 204U;
volatile uint8_t x910 = 0U;
uint64_t x935 = 111028966209968788LLU;
volatile int16_t x965 = INT16_MAX;
int16_t x966 = INT16_MIN;
int16_t x985 = 39;
int32_t x987 = INT32_MAX;
int8_t x988 = INT8_MIN;
volatile int32_t t40 = 277686;
uint32_t x990 = 3U;
int8_t x992 = -1;
int64_t t42 = -192798LL;
uint64_t x1113 = 11950585097641LLU;
int8_t x1114 = INT8_MAX;
int32_t x1116 = INT32_MAX;
int64_t x1167 = INT64_MAX;
int64_t x1180 = -1LL;
volatile int64_t t50 = -112492796501328LL;
uint32_t t51 = 62U;
int32_t x1215 = INT32_MIN;
uint64_t t56 = 79609656206511628LLU;
uint64_t x1523 = UINT64_MAX;
uint32_t x1555 = 1942258520U;
uint64_t x1556 = UINT64_MAX;
volatile uint64_t x1557 = 609847LLU;
uint8_t x1615 = 3U;
static uint16_t x1616 = UINT16_MAX;
volatile uint8_t x1620 = 126U;
uint64_t x1622 = 3511217291415973549LLU;
int64_t x1631 = INT64_MIN;
int16_t x1678 = 0;
volatile uint16_t x1700 = UINT16_MAX;
volatile uint32_t t74 = 112504506U;
volatile int16_t x1707 = INT16_MIN;
uint16_t x1715 = 13U;
int8_t x1716 = INT8_MAX;
volatile int16_t x1758 = INT16_MIN;
volatile int8_t x1764 = INT8_MIN;
uint32_t x1793 = 461U;
volatile uint8_t x1796 = 7U;
uint16_t x1841 = 2621U;
int16_t x1879 = INT16_MAX;
static uint32_t x1982 = 0U;
static volatile int32_t x1983 = -2;
int32_t x2015 = INT32_MIN;
uint32_t x2020 = UINT32_MAX;
volatile uint32_t x2025 = UINT32_MAX;
uint16_t x2027 = 3U;
uint8_t x2133 = UINT8_MAX;
int16_t x2134 = 61;
uint64_t x2136 = 1195350201996LLU;
uint16_t x2137 = 10225U;
int8_t x2177 = INT8_MAX;
int16_t x2178 = -1;
int64_t x2220 = 855LL;
int64_t t96 = -2791689716LL;
int8_t x2264 = INT8_MIN;
int64_t t97 = 20353059811LL;
int32_t x2274 = INT32_MIN;
uint16_t x2275 = UINT16_MAX;
volatile int64_t t98 = 1129254680082771LL;
static volatile uint64_t t99 = 1515LLU;


void f0(void) {
	int64_t x5 = 37536LL;
	volatile int8_t x6 = INT8_MIN;
	int8_t x7 = 1;
	int64_t t0 = -9577397153481LL;

	t0 = ((x5<<(x6&x7))*x8);

	if (t0 != -37536LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x29 = 198835951LLU;
	volatile int32_t x30 = -45315208;
	uint16_t x31 = 8U;
	volatile uint64_t x32 = 162270875614348LLU;

	t1 = ((x29<<(x30&x31))*x32);

	if (t1 != 14077444762092090368LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x37 = 47U;
	uint64_t x38 = 719101213LLU;
	static volatile int8_t x40 = 3;
	static int32_t t2 = -9584;

	t2 = ((x37<<(x38&x39))*x40);

	if (t2 != 141) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x57 = 1822868124576602LLU;
	volatile uint64_t t3 = 12436149385099056LLU;

	t3 = ((x57<<(x58&x59))*x60);

	if (t3 != 3458764513820540928LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x65 = 916U;
	static volatile uint16_t x67 = 3845U;
	volatile int32_t t4 = -12624;

	t4 = ((x65<<(x66&x67))*x68);

	if (t4 != 3196840) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x69 = 0U;
	volatile uint16_t x70 = 14U;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t5 = 164LLU;

	t5 = ((x69<<(x70&x71))*x72);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x82 = 3;
	volatile int16_t x83 = INT16_MIN;
	static int16_t x84 = INT16_MAX;
	volatile uint64_t t6 = 4739927LLU;

	t6 = ((x81<<(x82&x83))*x84);

	if (t6 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x201 = 0U;
	int8_t x202 = 1;
	static uint16_t x204 = UINT16_MAX;

	t7 = ((x201<<(x202&x203))*x204);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x205 = UINT16_MAX;
	uint32_t x206 = 224630628U;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = 97518416U;

	t8 = ((x205<<(x206&x207))*x208);

	if (t8 != 4253023408U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x229 = 2033341029923LLU;
	uint8_t x231 = 5U;
	int16_t x232 = INT16_MAX;

	t9 = ((x229<<(x230&x231))*x232);

	if (t9 != 2132047536879582112LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x257 = UINT32_MAX;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MAX;
	uint64_t x260 = 205280495111LLU;
	uint64_t t10 = 6064101620502281LLU;

	t10 = ((x257<<(x258&x259))*x260);

	if (t10 != 14676041338803468793LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x262 = -735;
	uint64_t x263 = 3LLU;
	int16_t x264 = INT16_MIN;
	volatile int32_t t11 = -77602;

	t11 = ((x261<<(x262&x263))*x264);

	if (t11 != -196608) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x305 = 29U;
	int32_t x306 = 211012929;

	t12 = ((x305<<(x306&x307))*x308);

	if (t12 != 100673935LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x329 = 2U;
	int16_t x330 = 1;
	static uint32_t x331 = UINT32_MAX;
	static volatile uint64_t x332 = UINT64_MAX;
	uint64_t t13 = 1648LLU;

	t13 = ((x329<<(x330&x331))*x332);

	if (t13 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x361 = 28609085638655597LLU;
	static int16_t x363 = INT16_MIN;
	uint64_t x364 = 10090517462813411LLU;

	t14 = ((x361<<(x362&x363))*x364);

	if (t14 != 5206266476236577959LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x365 = 0U;
	uint8_t x367 = 3U;
	int64_t x368 = 7148LL;
	int64_t t15 = 61253773849925LL;

	t15 = ((x365<<(x366&x367))*x368);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x389 = 0;
	volatile int32_t t16 = 30;

	t16 = ((x389<<(x390&x391))*x392);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x406 = 843LL;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	static volatile uint64_t t17 = 11029840733803846LLU;

	t17 = ((x405<<(x406&x407))*x408);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x501 = 3;
	int64_t x504 = -3LL;
	static volatile int64_t t18 = -45822544789LL;

	t18 = ((x501<<(x502&x503))*x504);

	if (t18 != -9LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x549 = UINT32_MAX;
	int8_t x550 = 8;
	volatile int64_t x551 = -1LL;
	uint32_t t19 = 103U;

	t19 = ((x549<<(x550&x551))*x552);

	if (t19 != 4294943232U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x557 = UINT64_MAX;
	volatile int64_t x558 = INT64_MAX;
	volatile uint8_t x559 = 2U;
	int32_t x560 = 88296957;
	uint64_t t20 = 6856633402927547LLU;

	t20 = ((x557<<(x558&x559))*x560);

	if (t20 != 18446744073356363788LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x590 = INT8_MIN;
	uint8_t x591 = 30U;
	int16_t x592 = -1;
	int32_t t21 = -91614;

	t21 = ((x589<<(x590&x591))*x592);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x629 = 3843U;
	static volatile int64_t x630 = INT64_MIN;
	uint8_t x631 = 1U;
	uint16_t x632 = 23778U;
	int32_t t22 = 562072;

	t22 = ((x629<<(x630&x631))*x632);

	if (t22 != 91378854) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x653 = 0;
	static int32_t x654 = INT32_MIN;
	int32_t x655 = INT32_MAX;
	int16_t x656 = INT16_MIN;
	int32_t t23 = 16684884;

	t23 = ((x653<<(x654&x655))*x656);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x677 = UINT8_MAX;
	int64_t x678 = -39LL;
	uint8_t x680 = 3U;
	volatile int32_t t24 = 90992099;

	t24 = ((x677<<(x678&x679))*x680);

	if (t24 != 765) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x681 = 18;
	volatile int64_t x682 = INT64_MIN;
	volatile int16_t x683 = 4;
	int32_t t25 = 0;

	t25 = ((x681<<(x682&x683))*x684);

	if (t25 != -18) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x697 = 3841356LLU;
	static int8_t x698 = -1;
	uint8_t x699 = 1U;

	t26 = ((x697<<(x698&x699))*x700);

	if (t26 != 18446744072726164480LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x749 = UINT8_MAX;
	uint32_t x750 = 4U;
	static int64_t x752 = 807538LL;
	volatile int64_t t27 = -1LL;

	t27 = ((x749<<(x750&x751))*x752);

	if (t27 != 3294755040LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x770 = UINT8_MAX;
	uint8_t x771 = 17U;
	uint8_t x772 = 4U;
	volatile uint32_t t28 = 699178657U;

	t28 = ((x769<<(x770&x771))*x772);

	if (t28 != 4077912064U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x773 = 6826LLU;
	volatile int8_t x774 = 26;
	int64_t x775 = -9127428878017LL;
	int64_t x776 = INT64_MAX;
	uint64_t t29 = 14099390709LLU;

	t29 = ((x773<<(x774&x775))*x776);

	if (t29 != 18446743615624445952LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x781 = INT32_MAX;
	volatile int16_t x782 = INT16_MIN;
	volatile uint16_t x783 = 21U;
	static int64_t x784 = -1LL;
	volatile int64_t t30 = 2868234LL;

	t30 = ((x781<<(x782&x783))*x784);

	if (t30 != -2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x785 = 234LLU;
	int32_t x786 = INT32_MAX;
	static uint8_t x787 = 5U;
	int16_t x788 = 13;

	t31 = ((x785<<(x786&x787))*x788);

	if (t31 != 97344LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x798 = INT32_MIN;
	int8_t x799 = 1;
	static volatile int32_t x800 = -6;
	static uint64_t t32 = 14974574573LLU;

	t32 = ((x797<<(x798&x799))*x800);

	if (t32 != 18446744073643832338LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x805 = 26U;
	uint8_t x806 = 5U;
	uint16_t x807 = 1U;
	static int32_t x808 = 31128697;
	volatile int32_t t33 = 92423;

	t33 = ((x805<<(x806&x807))*x808);

	if (t33 != 1618692244) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x810 = 0U;

	t34 = ((x809<<(x810&x811))*x812);

	if (t34 != 512475832U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x813 = 0U;
	static int32_t x815 = INT32_MAX;
	static volatile int16_t x816 = -1;

	t35 = ((x813<<(x814&x815))*x816);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x873 = UINT32_MAX;
	static int32_t x875 = INT32_MIN;
	static uint32_t t36 = 496U;

	t36 = ((x873<<(x874&x875))*x876);

	if (t36 != 4294967092U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x909 = INT8_MAX;
	static int16_t x911 = -1;
	static int16_t x912 = -2;
	int32_t t37 = -26779375;

	t37 = ((x909<<(x910&x911))*x912);

	if (t37 != -254) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x933 = 1386168;
	uint8_t x934 = 0U;
	volatile int32_t x936 = -1;
	int32_t t38 = 71713;

	t38 = ((x933<<(x934&x935))*x936);

	if (t38 != -1386168) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x967 = INT16_MAX;
	int32_t x968 = 1798;
	int32_t t39 = 119;

	t39 = ((x965<<(x966&x967))*x968);

	if (t39 != 58915066) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x986 = INT64_MIN;

	t40 = ((x985<<(x986&x987))*x988);

	if (t40 != -4992) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x989 = 22U;
	uint16_t x991 = UINT16_MAX;
	volatile int32_t t41 = 30845;

	t41 = ((x989<<(x990&x991))*x992);

	if (t41 != -176) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x993 = UINT32_MAX;
	uint8_t x994 = 12U;
	static int64_t x995 = -112918146942651LL;
	int64_t x996 = -1232LL;

	t42 = ((x993<<(x994&x995))*x996);

	if (t42 != -5291399688960LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1017 = UINT8_MAX;
	int16_t x1018 = -4701;
	uint64_t x1019 = 0LLU;
	uint64_t x1020 = 1539841LLU;
	static uint64_t t43 = 417159844197506352LLU;

	t43 = ((x1017<<(x1018&x1019))*x1020);

	if (t43 != 392659455LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1029 = 25U;
	int8_t x1030 = 3;
	volatile int16_t x1031 = INT16_MIN;
	static uint8_t x1032 = UINT8_MAX;
	volatile int32_t t44 = -27;

	t44 = ((x1029<<(x1030&x1031))*x1032);

	if (t44 != 6375) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1093 = 6U;
	static uint8_t x1094 = 1U;
	static int32_t x1095 = -11098977;
	int32_t x1096 = -1;
	int32_t t45 = 2;

	t45 = ((x1093<<(x1094&x1095))*x1096);

	if (t45 != -12) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1115 = 9;
	volatile uint64_t t46 = 10822LLU;

	t46 = ((x1113<<(x1114&x1115))*x1116);

	if (t46 != 6996320113526091264LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x1121 = 970;
	int64_t x1122 = INT64_MIN;
	uint32_t x1123 = 851147U;
	volatile uint8_t x1124 = 109U;
	static volatile int32_t t47 = -2;

	t47 = ((x1121<<(x1122&x1123))*x1124);

	if (t47 != 105730) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1145 = UINT16_MAX;
	static int64_t x1146 = 7663800LL;
	static int8_t x1147 = 0;
	uint8_t x1148 = 0U;
	int32_t t48 = 10;

	t48 = ((x1145<<(x1146&x1147))*x1148);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x1165 = UINT64_MAX;
	uint8_t x1166 = 10U;
	int64_t x1168 = -365766317LL;
	static volatile uint64_t t49 = 54LLU;

	t49 = ((x1165<<(x1166&x1167))*x1168);

	if (t49 != 374544708608LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1177 = INT16_MAX;
	int16_t x1178 = INT16_MIN;
	uint8_t x1179 = 117U;

	t50 = ((x1177<<(x1178&x1179))*x1180);

	if (t50 != -32767LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1201 = UINT32_MAX;
	int64_t x1202 = 333634LL;
	uint8_t x1203 = 1U;
	int16_t x1204 = INT16_MIN;

	t51 = ((x1201<<(x1202&x1203))*x1204);

	if (t51 != 32768U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1213 = 99U;
	static uint8_t x1214 = 15U;
	static volatile uint32_t x1216 = 663228U;
	volatile uint32_t t52 = 2566U;

	t52 = ((x1213<<(x1214&x1215))*x1216);

	if (t52 != 65659572U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1245 = 521942U;
	static int16_t x1246 = 0;
	uint64_t x1247 = 91390328LLU;
	uint64_t x1248 = 1117694LLU;
	volatile uint64_t t53 = 2131276067917449194LLU;

	t53 = ((x1245<<(x1246&x1247))*x1248);

	if (t53 != 583371441748LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1289 = 3193U;
	int32_t x1290 = INT32_MIN;
	static volatile int8_t x1291 = 9;
	int8_t x1292 = -4;
	volatile uint32_t t54 = 49136U;

	t54 = ((x1289<<(x1290&x1291))*x1292);

	if (t54 != 4294954524U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1365 = 12U;
	int8_t x1366 = INT8_MIN;
	static uint8_t x1367 = 57U;
	static int8_t x1368 = INT8_MIN;
	volatile int32_t t55 = 21765;

	t55 = ((x1365<<(x1366&x1367))*x1368);

	if (t55 != -1536) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1405 = 76432749LLU;
	uint32_t x1406 = 1578U;
	static uint8_t x1407 = UINT8_MAX;
	volatile uint32_t x1408 = UINT32_MAX;

	t56 = ((x1405<<(x1406&x1407))*x1408);

	if (t56 != 14333352326943735808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x1413 = 123542001U;
	static uint8_t x1414 = 38U;
	int64_t x1415 = INT64_MIN;
	int8_t x1416 = INT8_MAX;
	uint32_t t57 = 19262115U;

	t57 = ((x1413<<(x1414&x1415))*x1416);

	if (t57 != 2804932239U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1441 = 38;
	uint16_t x1442 = 11U;
	static volatile int64_t x1443 = INT64_MAX;
	int8_t x1444 = 4;
	static volatile int32_t t58 = -2059150;

	t58 = ((x1441<<(x1442&x1443))*x1444);

	if (t58 != 311296) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x1461 = 5U;
	uint8_t x1462 = UINT8_MAX;
	int32_t x1463 = INT32_MIN;
	volatile uint32_t x1464 = 1U;
	static uint32_t t59 = 915382U;

	t59 = ((x1461<<(x1462&x1463))*x1464);

	if (t59 != 5U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1465 = UINT16_MAX;
	int8_t x1466 = INT8_MAX;
	int16_t x1467 = INT16_MIN;
	int8_t x1468 = -1;
	int32_t t60 = 68;

	t60 = ((x1465<<(x1466&x1467))*x1468);

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x1477 = 31U;
	int8_t x1478 = INT8_MAX;
	volatile int8_t x1479 = INT8_MIN;
	int16_t x1480 = INT16_MIN;
	volatile int32_t t61 = -32270135;

	t61 = ((x1477<<(x1478&x1479))*x1480);

	if (t61 != -1015808) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1493 = UINT16_MAX;
	int8_t x1494 = 3;
	uint32_t x1495 = UINT32_MAX;
	volatile uint8_t x1496 = 0U;
	int32_t t62 = -1;

	t62 = ((x1493<<(x1494&x1495))*x1496);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1501 = INT16_MAX;
	int8_t x1502 = 1;
	uint32_t x1503 = 15U;
	int8_t x1504 = INT8_MIN;
	volatile int32_t t63 = 28;

	t63 = ((x1501<<(x1502&x1503))*x1504);

	if (t63 != -8388352) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x1521 = UINT8_MAX;
	uint16_t x1522 = 11U;
	static volatile int64_t x1524 = 4144LL;
	static int64_t t64 = 49LL;

	t64 = ((x1521<<(x1522&x1523))*x1524);

	if (t64 != 2164162560LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x1553 = 14778;
	int64_t x1554 = INT64_MIN;
	uint64_t t65 = 482772275397LLU;

	t65 = ((x1553<<(x1554&x1555))*x1556);

	if (t65 != 18446744073709536838LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1558 = 159LLU;
	int16_t x1559 = INT16_MIN;
	int32_t x1560 = INT32_MIN;
	static uint64_t t66 = 480879940987249LLU;

	t66 = ((x1557<<(x1558&x1559))*x1560);

	if (t66 != 18445434437249269760LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x1589 = INT32_MAX;
	uint16_t x1590 = 1870U;
	int64_t x1591 = INT64_MIN;
	int64_t x1592 = 48884767LL;
	int64_t t67 = -281LL;

	t67 = ((x1589<<(x1590&x1591))*x1592);

	if (t67 != 104979237719905249LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1601 = UINT64_MAX;
	int64_t x1602 = INT64_MAX;
	int64_t x1603 = INT64_MIN;
	int64_t x1604 = -1LL;
	uint64_t t68 = 114374081833267LLU;

	t68 = ((x1601<<(x1602&x1603))*x1604);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1613 = 1156LLU;
	volatile int64_t x1614 = -21905LL;
	volatile uint64_t t69 = 310LLU;

	t69 = ((x1613<<(x1614&x1615))*x1616);

	if (t69 != 606067680LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1617 = 1580U;
	static int64_t x1618 = INT64_MIN;
	uint16_t x1619 = 9U;
	uint32_t t70 = 45053U;

	t70 = ((x1617<<(x1618&x1619))*x1620);

	if (t70 != 199080U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x1621 = 103U;
	int64_t x1623 = INT64_MIN;
	int32_t x1624 = -1827;
	int32_t t71 = 40395884;

	t71 = ((x1621<<(x1622&x1623))*x1624);

	if (t71 != -188181) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1629 = INT16_MAX;
	uint16_t x1630 = UINT16_MAX;
	uint8_t x1632 = 3U;
	volatile int32_t t72 = -2;

	t72 = ((x1629<<(x1630&x1631))*x1632);

	if (t72 != 98301) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1677 = UINT64_MAX;
	int64_t x1679 = -1215582452569764LL;
	int8_t x1680 = 26;
	volatile uint64_t t73 = 64277477013551LLU;

	t73 = ((x1677<<(x1678&x1679))*x1680);

	if (t73 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x1697 = 6802U;
	uint32_t x1698 = 13980U;
	int32_t x1699 = INT32_MIN;

	t74 = ((x1697<<(x1698&x1699))*x1700);

	if (t74 != 445769070U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x1705 = 53177175U;
	int64_t x1706 = 43LL;
	int16_t x1708 = INT16_MIN;
	volatile uint32_t t75 = 7U;

	t75 = ((x1705<<(x1706&x1707))*x1708);

	if (t75 != 1247051776U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1713 = 6U;
	static int32_t x1714 = INT32_MIN;
	int32_t t76 = 2028;

	t76 = ((x1713<<(x1714&x1715))*x1716);

	if (t76 != 762) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1753 = 9409;
	int8_t x1754 = 0;
	int8_t x1755 = -1;
	int32_t x1756 = -15;
	int32_t t77 = -36;

	t77 = ((x1753<<(x1754&x1755))*x1756);

	if (t77 != -141135) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x1757 = 98U;
	uint16_t x1759 = 3U;
	uint8_t x1760 = 46U;
	static volatile int32_t t78 = 16501449;

	t78 = ((x1757<<(x1758&x1759))*x1760);

	if (t78 != 4508) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1761 = UINT64_MAX;
	uint16_t x1762 = 1U;
	int8_t x1763 = INT8_MAX;
	static volatile uint64_t t79 = 1671840131LLU;

	t79 = ((x1761<<(x1762&x1763))*x1764);

	if (t79 != 256LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x1794 = 3;
	static int32_t x1795 = 46;
	volatile uint32_t t80 = 9U;

	t80 = ((x1793<<(x1794&x1795))*x1796);

	if (t80 != 12908U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1842 = INT32_MIN;
	int16_t x1843 = INT16_MAX;
	int8_t x1844 = -1;
	int32_t t81 = -47621;

	t81 = ((x1841<<(x1842&x1843))*x1844);

	if (t81 != -2621) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x1877 = 25701U;
	int16_t x1878 = 0;
	int16_t x1880 = INT16_MIN;
	volatile int32_t t82 = 28459;

	t82 = ((x1877<<(x1878&x1879))*x1880);

	if (t82 != -842170368) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1981 = 4355897412117538LL;
	static int8_t x1984 = -1;
	static int64_t t83 = -40655209323LL;

	t83 = ((x1981<<(x1982&x1983))*x1984);

	if (t83 != -4355897412117538LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x2013 = 491;
	static uint32_t x2014 = 165847U;
	int8_t x2016 = INT8_MIN;
	volatile int32_t t84 = 28763;

	t84 = ((x2013<<(x2014&x2015))*x2016);

	if (t84 != -62848) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2017 = INT32_MAX;
	uint8_t x2018 = 29U;
	int8_t x2019 = INT8_MIN;
	volatile uint32_t t85 = 8U;

	t85 = ((x2017<<(x2018&x2019))*x2020);

	if (t85 != 2147483649U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2026 = INT16_MIN;
	uint64_t x2028 = UINT64_MAX;
	volatile uint64_t t86 = 4008LLU;

	t86 = ((x2025<<(x2026&x2027))*x2028);

	if (t86 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2093 = 47918242799926255LLU;
	int8_t x2094 = -1;
	volatile uint64_t x2095 = 29LLU;
	uint8_t x2096 = 15U;
	uint64_t t87 = 72087LLU;

	t87 = ((x2093<<(x2094&x2095))*x2096);

	if (t87 != 3938468655733407744LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x2135 = 11LL;
	uint64_t t88 = 3426803LLU;

	t88 = ((x2133<<(x2134&x2135))*x2136);

	if (t88 != 156064922372597760LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2138 = 6;
	volatile uint8_t x2139 = 1U;
	volatile uint64_t x2140 = UINT64_MAX;
	volatile uint64_t t89 = 54889LLU;

	t89 = ((x2137<<(x2138&x2139))*x2140);

	if (t89 != 18446744073709541391LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x2145 = 36U;
	int8_t x2146 = 6;
	int16_t x2147 = -1;
	volatile int8_t x2148 = 49;
	volatile int32_t t90 = -57253;

	t90 = ((x2145<<(x2146&x2147))*x2148);

	if (t90 != 112896) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2173 = UINT8_MAX;
	static uint16_t x2174 = 7195U;
	static int32_t x2175 = INT32_MIN;
	uint64_t x2176 = 172918LLU;
	uint64_t t91 = 35775951050LLU;

	t91 = ((x2173<<(x2174&x2175))*x2176);

	if (t91 != 44094090LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2179 = 1U;
	int16_t x2180 = -1;
	int32_t t92 = 227114;

	t92 = ((x2177<<(x2178&x2179))*x2180);

	if (t92 != -254) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x2217 = 1;
	uint32_t x2218 = 21604U;
	int32_t x2219 = INT32_MIN;
	volatile int64_t t93 = 36LL;

	t93 = ((x2217<<(x2218&x2219))*x2220);

	if (t93 != 855LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2225 = 13454058884511LL;
	volatile uint8_t x2226 = 13U;
	uint16_t x2227 = 30202U;
	int8_t x2228 = INT8_MIN;
	volatile int64_t t94 = -318621778012LL;

	t94 = ((x2225<<(x2226&x2227))*x2228);

	if (t94 != -440862601527656448LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2237 = 87674LL;
	static int32_t x2238 = -832339633;
	uint32_t x2239 = 17414U;
	volatile uint8_t x2240 = 1U;
	int64_t t95 = 16LL;

	t95 = ((x2237<<(x2238&x2239))*x2240);

	if (t95 != 5611136LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x2249 = 3792;
	uint8_t x2250 = UINT8_MAX;
	int16_t x2251 = INT16_MIN;
	static int64_t x2252 = -29666458LL;

	t96 = ((x2249<<(x2250&x2251))*x2252);

	if (t96 != -112495208736LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x2261 = 24040481456946901LL;
	int8_t x2262 = 3;
	static int64_t x2263 = INT64_MIN;

	t97 = ((x2261<<(x2262&x2263))*x2264);

	if (t97 != -3077181626489203328LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x2273 = 1LL;
	static int8_t x2276 = INT8_MIN;

	t98 = ((x2273<<(x2274&x2275))*x2276);

	if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2297 = 87320574176885262LLU;
	int8_t x2298 = 1;
	int32_t x2299 = INT32_MIN;
	uint8_t x2300 = 11U;

	t99 = ((x2297<<(x2298&x2299))*x2300);

	if (t99 != 960526315945737882LLU) { NG(); } else { ; }
	
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

