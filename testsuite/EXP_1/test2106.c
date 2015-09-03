#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
volatile int8_t x11 = 4;
int32_t x186 = -27219;
int32_t x359 = 6;
static int8_t x360 = -3;
int32_t t6 = 0;
int32_t x498 = 693;
uint32_t x500 = 12892U;
int8_t x542 = 6;
int32_t x544 = 0;
int16_t x590 = INT16_MIN;
int16_t x732 = INT16_MIN;
volatile uint16_t x841 = UINT16_MAX;
int8_t x843 = 1;
volatile int64_t x897 = -1LL;
int8_t x905 = -1;
int64_t x906 = -1LL;
volatile int64_t t14 = 1065904978285769LL;
int8_t x957 = 0;
int64_t x969 = -1LL;
int64_t x1038 = -1LL;
uint32_t x1039 = 28U;
uint16_t x1075 = 1U;
uint32_t x1085 = 7058519U;
uint16_t x1114 = 2519U;
volatile int16_t x1203 = 27;
int32_t x1242 = INT32_MIN;
volatile uint64_t x1243 = 1LLU;
int64_t x1260 = INT64_MAX;
uint64_t x1307 = 13LLU;
int16_t x1507 = 3;
uint8_t x1527 = 1U;
volatile int16_t x1528 = 0;
volatile int32_t t29 = -150498732;
volatile int32_t x1579 = 3;
uint8_t x1725 = 35U;
volatile uint32_t t32 = 14314U;
volatile int8_t x1757 = -1;
volatile int16_t x1758 = INT16_MIN;
static uint16_t x1834 = UINT16_MAX;
volatile uint64_t t35 = 35LLU;
static uint64_t x1857 = 85229406LLU;
volatile int16_t x1859 = 0;
uint64_t x2002 = UINT64_MAX;
static uint16_t x2004 = 11U;
static int16_t x2062 = 1950;
int8_t x2113 = -1;
uint32_t x2116 = 267608177U;
int32_t x2193 = INT32_MAX;
static uint32_t x2194 = 63U;
static volatile uint16_t x2255 = 0U;
uint16_t x2263 = 18U;
static int16_t x2609 = -122;
uint8_t x2617 = UINT8_MAX;
uint64_t t51 = 3LLU;
static int16_t x2689 = -1;
int32_t x2690 = -1;
int32_t t52 = 938;
uint32_t x2780 = UINT32_MAX;
uint64_t x2848 = 46647LLU;
static uint32_t t57 = 14621366U;
uint8_t x3194 = 6U;
volatile uint32_t x3366 = 1027303091U;
int8_t x3573 = 0;
int64_t t67 = -17433912324046LL;
uint16_t x3751 = 1U;
static uint8_t x3761 = 0U;
static uint32_t x3763 = 0U;
volatile uint8_t x3798 = 0U;
uint32_t x3842 = 1U;
volatile uint64_t t72 = 52274115LLU;
volatile uint32_t x3974 = 0U;
uint16_t x3975 = 0U;
volatile uint32_t x3976 = 87U;
int64_t x3990 = INT64_MAX;
static volatile int64_t t75 = -434473173053019LL;
uint32_t x4005 = 162657856U;
int32_t x4029 = INT32_MIN;
int32_t x4030 = INT32_MIN;
volatile uint8_t x4061 = UINT8_MAX;
int8_t x4063 = 0;
int32_t x4180 = INT32_MIN;
uint32_t x4345 = 3799473U;
int8_t x4346 = INT8_MIN;
uint32_t x4347 = 3U;
volatile uint32_t t81 = 1005U;
volatile int32_t t83 = 181;
volatile int16_t x4581 = -231;
uint8_t x4839 = 9U;
volatile uint64_t t89 = 951411995LLU;
int64_t x4861 = INT64_MAX;
uint32_t x4864 = 21336574U;
static int32_t x4910 = 7;
uint8_t x4958 = UINT8_MAX;
volatile uint64_t t92 = 24866564276LLU;
uint8_t x4964 = 0U;
int16_t x4965 = 1;
static int64_t x5152 = INT64_MIN;
uint32_t t98 = 69489952U;


void f0(void) {
	int64_t x1 = -1LL;
	uint16_t x3 = 21U;
	volatile uint32_t x4 = UINT32_MAX;
	static volatile int64_t t0 = -21331359944971962LL;

	t0 = (((x1^x2)<<x3)^x4);

	if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 28297318U;
	static int8_t x10 = 1;
	int16_t x12 = INT16_MIN;
	uint32_t t1 = 1U;

	t1 = (((x9^x10)<<x11)^x12);

	if (t1 != 3842180720U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x25 = UINT32_MAX;
	uint16_t x26 = 0U;
	uint8_t x27 = 10U;
	int32_t x28 = INT32_MAX;
	uint32_t t2 = 191U;

	t2 = (((x25^x26)<<x27)^x28);

	if (t2 != 2147484671U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x161 = UINT64_MAX;
	static volatile int32_t x162 = -388;
	int16_t x163 = 16;
	uint16_t x164 = UINT16_MAX;
	volatile uint64_t t3 = 110030779LLU;

	t3 = (((x161^x162)<<x163)^x164);

	if (t3 != 25427967LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x187 = 0;
	static int16_t x188 = INT16_MIN;
	static int32_t t4 = 303061135;

	t4 = (((x185^x186)<<x187)^x188);

	if (t4 != -5587) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x205 = 934U;
	int16_t x206 = 6014;
	int8_t x207 = 3;
	volatile int32_t x208 = -32557524;
	int32_t t5 = 18;

	t5 = (((x205^x206)<<x207)^x208);

	if (t5 != -32534292) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x357 = UINT16_MAX;
	uint8_t x358 = 3U;

	t6 = (((x357^x358)<<x359)^x360);

	if (t6 != -4194051) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x457 = INT32_MIN;
	uint64_t x458 = 12991LLU;
	static int8_t x459 = 6;
	volatile int32_t x460 = -55;
	uint64_t t7 = 2371769895478244896LLU;

	t7 = (((x457^x458)<<x459)^x460);

	if (t7 != 137438121993LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x497 = UINT32_MAX;
	static uint16_t x499 = 15U;
	uint32_t t8 = 450U;

	t8 = (((x497^x498)<<x499)^x500);

	if (t8 != 4272239196U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x541 = 0LL;
	volatile int16_t x543 = 0;
	int64_t t9 = -1636927511969LL;

	t9 = (((x541^x542)<<x543)^x544);

	if (t9 != 6LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x589 = INT64_MIN;
	volatile int8_t x591 = 0;
	int8_t x592 = INT8_MIN;
	volatile int64_t t10 = 82697429046LL;

	t10 = (((x589^x590)<<x591)^x592);

	if (t10 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x729 = UINT64_MAX;
	int64_t x730 = INT64_MIN;
	int8_t x731 = 30;
	volatile uint64_t t11 = 45351691LLU;

	t11 = (((x729^x730)<<x731)^x732);

	if (t11 != 1073709056LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x842 = UINT32_MAX;
	uint16_t x844 = 20575U;
	volatile uint32_t t12 = 711U;

	t12 = (((x841^x842)<<x843)^x844);

	if (t12 != 4294856799U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x898 = INT32_MIN;
	uint8_t x899 = 9U;
	int32_t x900 = -1;
	static int64_t t13 = 3299574LL;

	t13 = (((x897^x898)<<x899)^x900);

	if (t13 != -1099511627265LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x907 = 0;
	volatile int32_t x908 = INT32_MIN;

	t14 = (((x905^x906)<<x907)^x908);

	if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x958 = UINT64_MAX;
	volatile uint8_t x959 = 34U;
	int64_t x960 = 115865497221396LL;
	uint64_t t15 = 3LLU;

	t15 = (((x957^x958)<<x959)^x960);

	if (t15 != 18446628199951350036LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x970 = INT16_MIN;
	uint16_t x971 = 3U;
	int64_t x972 = INT64_MIN;
	int64_t t16 = 44380LL;

	t16 = (((x969^x970)<<x971)^x972);

	if (t16 != -9223372036854513672LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x977 = INT16_MIN;
	uint32_t x978 = 62035U;
	int16_t x979 = 3;
	int64_t x980 = -2210441739LL;
	volatile int64_t t17 = 7124267507LL;

	t17 = (((x977^x978)<<x979)^x980);

	if (t17 != -2084255891LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1037 = INT16_MIN;
	int64_t x1040 = 52383LL;
	volatile int64_t t18 = 12111696605LL;

	t18 = (((x1037^x1038)<<x1039)^x1040);

	if (t18 != 8795824639135LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1073 = 0U;
	uint8_t x1074 = 8U;
	volatile int16_t x1076 = INT16_MIN;
	volatile int32_t t19 = -4;

	t19 = (((x1073^x1074)<<x1075)^x1076);

	if (t19 != -32752) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1086 = 18U;
	static uint8_t x1087 = 5U;
	int32_t x1088 = INT32_MAX;
	volatile uint32_t t20 = 994251145U;

	t20 = (((x1085^x1086)<<x1087)^x1088);

	if (t20 != 1921611615U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1113 = 20198;
	static int8_t x1115 = 3;
	int32_t x1116 = INT32_MIN;
	volatile int32_t t21 = 1;

	t21 = (((x1113^x1114)<<x1115)^x1116);

	if (t21 != -2147337848) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1201 = INT64_MAX;
	uint64_t x1202 = UINT64_MAX;
	uint8_t x1204 = UINT8_MAX;
	static volatile uint64_t t22 = 1616623873685418LLU;

	t22 = (((x1201^x1202)<<x1203)^x1204);

	if (t22 != 255LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1229 = INT16_MIN;
	volatile int32_t x1230 = -1;
	volatile uint8_t x1231 = 8U;
	static int64_t x1232 = INT64_MAX;
	static volatile int64_t t23 = -3731723LL;

	t23 = (((x1229^x1230)<<x1231)^x1232);

	if (t23 != 9223372036846387455LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1241 = INT32_MIN;
	volatile uint64_t x1244 = 2727510271LLU;
	volatile uint64_t t24 = 3223LLU;

	t24 = (((x1241^x1242)<<x1243)^x1244);

	if (t24 != 2727510271LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1253 = -1;
	volatile int32_t x1254 = -1;
	volatile int8_t x1255 = 14;
	uint32_t x1256 = 56331352U;
	uint32_t t25 = 2U;

	t25 = (((x1253^x1254)<<x1255)^x1256);

	if (t25 != 56331352U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1257 = 12U;
	int32_t x1258 = 1042;
	uint16_t x1259 = 12U;
	int64_t t26 = 30754041271209869LL;

	t26 = (((x1257^x1258)<<x1259)^x1260);

	if (t26 != 9223372036850458623LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1305 = INT8_MIN;
	int16_t x1306 = -1;
	uint64_t x1308 = 158867464LLU;
	uint64_t t27 = 327447205LLU;

	t27 = (((x1305^x1306)<<x1307)^x1308);

	if (t27 != 158842888LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1505 = UINT16_MAX;
	uint8_t x1506 = 120U;
	static volatile uint8_t x1508 = 1U;
	static volatile int32_t t28 = 3;

	t28 = (((x1505^x1506)<<x1507)^x1508);

	if (t28 != 523321) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1525 = 44;
	int16_t x1526 = INT16_MAX;

	t29 = (((x1525^x1526)<<x1527)^x1528);

	if (t29 != 65446) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1569 = INT64_MIN;
	volatile uint64_t x1570 = 1065982993023LLU;
	uint8_t x1571 = 0U;
	int8_t x1572 = INT8_MIN;
	static uint64_t t30 = 60LLU;

	t30 = (((x1569^x1570)<<x1571)^x1572);

	if (t30 != 9223370970871782911LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1577 = 16024U;
	volatile uint16_t x1578 = UINT16_MAX;
	int32_t x1580 = INT32_MAX;
	int32_t t31 = 5;

	t31 = (((x1577^x1578)<<x1579)^x1580);

	if (t31 != 2147087559) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1726 = 1U;
	static uint32_t x1727 = 4U;
	static volatile uint32_t x1728 = UINT32_MAX;

	t32 = (((x1725^x1726)<<x1727)^x1728);

	if (t32 != 4294966751U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1759 = 3U;
	static int32_t x1760 = INT32_MIN;
	volatile int32_t t33 = -279;

	t33 = (((x1757^x1758)<<x1759)^x1760);

	if (t33 != -2147221512) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1801 = 202299704LLU;
	int64_t x1802 = INT64_MIN;
	int8_t x1803 = 1;
	volatile uint8_t x1804 = UINT8_MAX;
	static uint64_t t34 = 91539102LLU;

	t34 = (((x1801^x1802)<<x1803)^x1804);

	if (t34 != 404599439LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1833 = 107558084088LLU;
	uint8_t x1835 = 1U;
	int8_t x1836 = 29;

	t35 = (((x1833^x1834)<<x1835)^x1836);

	if (t35 != 215116268563LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1858 = -77668057LL;
	static int8_t x1860 = -57;
	uint64_t t36 = 5049874730LLU;

	t36 = (((x1857^x1858)<<x1859)^x1860);

	if (t36 != 28664254LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1869 = 2841535U;
	static int32_t x1870 = -27876225;
	uint16_t x1871 = 30U;
	uint16_t x1872 = 9U;
	static uint32_t t37 = 1282787U;

	t37 = (((x1869^x1870)<<x1871)^x1872);

	if (t37 != 9U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x1909 = UINT16_MAX;
	uint16_t x1910 = UINT16_MAX;
	volatile uint8_t x1911 = 19U;
	static int8_t x1912 = 45;
	volatile int32_t t38 = -1;

	t38 = (((x1909^x1910)<<x1911)^x1912);

	if (t38 != 45) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1969 = UINT64_MAX;
	int64_t x1970 = INT64_MIN;
	int8_t x1971 = 6;
	int64_t x1972 = -78228763160LL;
	volatile uint64_t t39 = 37935819480271LLU;

	t39 = (((x1969^x1970)<<x1971)^x1972);

	if (t39 != 78228763176LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2001 = INT8_MAX;
	int8_t x2003 = 1;
	volatile uint64_t t40 = 69245913LLU;

	t40 = (((x2001^x2002)<<x2003)^x2004);

	if (t40 != 18446744073709551371LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x2061 = 28978945989LL;
	static uint8_t x2063 = 9U;
	int16_t x2064 = 15756;
	int64_t t41 = 34101LL;

	t41 = (((x2061^x2062)<<x2063)^x2064);

	if (t41 != 14837219363724LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2114 = -687;
	volatile uint8_t x2115 = 3U;
	uint32_t t42 = 11U;

	t42 = (((x2113^x2114)<<x2115)^x2116);

	if (t42 != 267613441U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2125 = 6U;
	uint8_t x2126 = 3U;
	uint8_t x2127 = 28U;
	uint64_t x2128 = UINT64_MAX;
	volatile uint64_t t43 = 28587362422LLU;

	t43 = (((x2125^x2126)<<x2127)^x2128);

	if (t43 != 18446744072367374335LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2195 = 28U;
	static int64_t x2196 = INT64_MIN;
	volatile int64_t t44 = INT64_MIN;

	t44 = (((x2193^x2194)<<x2195)^x2196);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2253 = INT8_MAX;
	uint64_t x2254 = UINT64_MAX;
	volatile uint16_t x2256 = 13U;
	volatile uint64_t t45 = 123632550223543728LLU;

	t45 = (((x2253^x2254)<<x2255)^x2256);

	if (t45 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2261 = 2;
	int8_t x2262 = 1;
	int8_t x2264 = INT8_MAX;
	volatile int32_t t46 = -145610179;

	t46 = (((x2261^x2262)<<x2263)^x2264);

	if (t46 != 786559) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2281 = UINT32_MAX;
	int32_t x2282 = 366;
	volatile int8_t x2283 = 0;
	static uint16_t x2284 = UINT16_MAX;
	uint32_t t47 = 153482550U;

	t47 = (((x2281^x2282)<<x2283)^x2284);

	if (t47 != 4294902126U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2301 = 247834U;
	int8_t x2302 = -1;
	static uint8_t x2303 = 4U;
	int8_t x2304 = INT8_MAX;
	volatile uint32_t t48 = 2040U;

	t48 = (((x2301^x2302)<<x2303)^x2304);

	if (t48 != 4291001903U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2601 = 10;
	static uint16_t x2602 = UINT16_MAX;
	static uint8_t x2603 = 0U;
	int16_t x2604 = INT16_MAX;
	int32_t t49 = -23251860;

	t49 = (((x2601^x2602)<<x2603)^x2604);

	if (t49 != 32778) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2610 = UINT64_MAX;
	uint8_t x2611 = 0U;
	static volatile int16_t x2612 = INT16_MAX;
	volatile uint64_t t50 = 869196924LLU;

	t50 = (((x2609^x2610)<<x2611)^x2612);

	if (t50 != 32646LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x2618 = INT64_MAX;
	int8_t x2619 = 0;
	volatile uint64_t x2620 = 98685752400009130LLU;

	t51 = (((x2617^x2618)<<x2619)^x2620);

	if (t51 != 9124686284454766762LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2691 = 8U;
	volatile int16_t x2692 = INT16_MIN;

	t52 = (((x2689^x2690)<<x2691)^x2692);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2777 = INT16_MIN;
	static int16_t x2778 = -1;
	static int8_t x2779 = 0;
	uint32_t t53 = 236U;

	t53 = (((x2777^x2778)<<x2779)^x2780);

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2801 = -1;
	static int64_t x2802 = -1LL;
	uint8_t x2803 = 5U;
	static volatile int8_t x2804 = 6;
	int64_t t54 = -127463147449830389LL;

	t54 = (((x2801^x2802)<<x2803)^x2804);

	if (t54 != 6LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2845 = INT32_MIN;
	int64_t x2846 = -1LL;
	uint8_t x2847 = 2U;
	volatile uint64_t t55 = 40LLU;

	t55 = (((x2845^x2846)<<x2847)^x2848);

	if (t55 != 8589887947LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2889 = UINT64_MAX;
	uint8_t x2890 = 95U;
	static uint8_t x2891 = 18U;
	int32_t x2892 = INT32_MAX;
	volatile uint64_t t56 = 1006223279374LLU;

	t56 = (((x2889^x2890)<<x2891)^x2892);

	if (t56 != 18446744071587233791LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2937 = 0U;
	uint32_t x2938 = 1302280759U;
	volatile uint8_t x2939 = 1U;
	volatile int16_t x2940 = 69;

	t57 = (((x2937^x2938)<<x2939)^x2940);

	if (t57 != 2604561451U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3017 = INT16_MIN;
	uint32_t x3018 = 0U;
	static int16_t x3019 = 6;
	int16_t x3020 = -1;
	volatile uint32_t t58 = 157U;

	t58 = (((x3017^x3018)<<x3019)^x3020);

	if (t58 != 2097151U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x3025 = INT8_MIN;
	int8_t x3026 = -23;
	volatile int32_t x3027 = 0;
	int8_t x3028 = INT8_MIN;
	int32_t t59 = 968756474;

	t59 = (((x3025^x3026)<<x3027)^x3028);

	if (t59 != -23) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3129 = INT16_MIN;
	uint32_t x3130 = 40763U;
	uint16_t x3131 = 18U;
	static int64_t x3132 = 420983LL;
	int64_t t60 = 3266954286816718LL;

	t60 = (((x3129^x3130)<<x3131)^x3132);

	if (t60 != 2095737975LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3177 = 11;
	static uint16_t x3178 = 381U;
	uint16_t x3179 = 6U;
	int8_t x3180 = INT8_MIN;
	int32_t t61 = 62178;

	t61 = (((x3177^x3178)<<x3179)^x3180);

	if (t61 != -24064) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x3193 = 4114355905572645509LLU;
	uint16_t x3195 = 10U;
	uint8_t x3196 = UINT8_MAX;
	uint64_t t62 = 58588447497847LLU;

	t62 = (((x3193^x3194)<<x3195)^x3196);

	if (t62 != 7242798500611230975LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3225 = UINT16_MAX;
	int32_t x3226 = INT32_MAX;
	int16_t x3227 = 0;
	volatile int16_t x3228 = -1;
	int32_t t63 = 28;

	t63 = (((x3225^x3226)<<x3227)^x3228);

	if (t63 != -2147418113) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x3365 = 15580U;
	volatile uint16_t x3367 = 2U;
	int64_t x3368 = INT64_MIN;
	volatile int64_t t64 = -9803375086LL;

	t64 = (((x3365^x3366)<<x3367)^x3368);

	if (t64 != -9223372032745576004LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3545 = INT16_MIN;
	static volatile int32_t x3546 = -1;
	int8_t x3547 = 2;
	uint32_t x3548 = 27514U;
	uint32_t t65 = 5436U;

	t65 = (((x3545^x3546)<<x3547)^x3548);

	if (t65 != 103558U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3574 = UINT64_MAX;
	int32_t x3575 = 18;
	int16_t x3576 = INT16_MIN;
	uint64_t t66 = 414596411794080LLU;

	t66 = (((x3573^x3574)<<x3575)^x3576);

	if (t66 != 229376LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3637 = -1LL;
	volatile int16_t x3638 = -2784;
	static int32_t x3639 = 12;
	int64_t x3640 = INT64_MIN;

	t67 = (((x3637^x3638)<<x3639)^x3640);

	if (t67 != -9223372036843376640LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3749 = INT16_MAX;
	static volatile uint8_t x3750 = 76U;
	uint16_t x3752 = UINT16_MAX;
	volatile int32_t t68 = 3885523;

	t68 = (((x3749^x3750)<<x3751)^x3752);

	if (t68 != 153) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x3762 = 1U;
	uint8_t x3764 = 34U;
	uint32_t t69 = 383237U;

	t69 = (((x3761^x3762)<<x3763)^x3764);

	if (t69 != 35U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3773 = -119004;
	uint64_t x3774 = UINT64_MAX;
	int8_t x3775 = 25;
	static int16_t x3776 = 0;
	volatile uint64_t t70 = 247LLU;

	t70 = (((x3773^x3774)<<x3775)^x3776);

	if (t70 != 3993078071296LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3797 = 31557U;
	static volatile uint8_t x3799 = 1U;
	int8_t x3800 = -1;
	uint32_t t71 = 520U;

	t71 = (((x3797^x3798)<<x3799)^x3800);

	if (t71 != 4294904181U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3841 = UINT64_MAX;
	int64_t x3843 = 60LL;
	int8_t x3844 = 7;

	t72 = (((x3841^x3842)<<x3843)^x3844);

	if (t72 != 16140901064495857671LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3973 = -125523182;
	volatile uint32_t t73 = 7746164U;

	t73 = (((x3973^x3974)<<x3975)^x3976);

	if (t73 != 4169444165U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3989 = 49839224LLU;
	static uint8_t x3991 = 0U;
	uint8_t x3992 = 20U;
	uint64_t t74 = 1497148090184824992LLU;

	t74 = (((x3989^x3990)<<x3991)^x3992);

	if (t74 != 9223372036804936595LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3993 = INT8_MIN;
	int64_t x3994 = -808378981412747461LL;
	volatile uint8_t x3995 = 0U;
	int8_t x3996 = INT8_MIN;

	t75 = (((x3993^x3994)<<x3995)^x3996);

	if (t75 != -808378981412747461LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4001 = 62U;
	static uint32_t x4002 = UINT32_MAX;
	static int8_t x4003 = 1;
	int64_t x4004 = INT64_MAX;
	int64_t t76 = -19053736190LL;

	t76 = (((x4001^x4002)<<x4003)^x4004);

	if (t76 != 9223372032559808637LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4006 = INT8_MIN;
	static volatile int16_t x4007 = 1;
	static int32_t x4008 = -46;
	static volatile uint32_t t77 = 274U;

	t77 = (((x4005^x4006)<<x4007)^x4008);

	if (t77 != 325315666U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4031 = 14;
	static volatile uint32_t x4032 = UINT32_MAX;
	uint32_t t78 = UINT32_MAX;

	t78 = (((x4029^x4030)<<x4031)^x4032);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4062 = 1753875U;
	int8_t x4064 = INT8_MIN;
	uint32_t t79 = 33768286U;

	t79 = (((x4061^x4062)<<x4063)^x4064);

	if (t79 != 4293213292U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4177 = 14887U;
	int16_t x4178 = INT16_MAX;
	uint8_t x4179 = 1U;
	int32_t t80 = 1085482;

	t80 = (((x4177^x4178)<<x4179)^x4180);

	if (t80 != -2147447888) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x4348 = 44141547U;

	t81 = (((x4345^x4346)<<x4347)^x4348);

	if (t81 != 4237408867U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x4393 = -242LL;
	int32_t x4394 = INT32_MIN;
	int16_t x4395 = 21;
	volatile uint8_t x4396 = 40U;
	volatile int64_t t82 = -1LL;

	t82 = (((x4393^x4394)<<x4395)^x4396);

	if (t82 != 4503599119859752LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4437 = INT16_MAX;
	int8_t x4438 = INT8_MAX;
	uint8_t x4439 = 3U;
	int32_t x4440 = 347252;

	t83 = (((x4437^x4438)<<x4439)^x4440);

	if (t83 != 438388) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4573 = -1;
	int8_t x4574 = INT8_MIN;
	int8_t x4575 = 2;
	volatile uint32_t x4576 = 110786668U;
	static uint32_t t84 = 2087546U;

	t84 = (((x4573^x4574)<<x4575)^x4576);

	if (t84 != 110786960U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4582 = INT16_MIN;
	uint64_t x4583 = 0LLU;
	static volatile int8_t x4584 = INT8_MAX;
	static volatile int32_t t85 = 23111073;

	t85 = (((x4581^x4582)<<x4583)^x4584);

	if (t85 != 32614) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4629 = UINT64_MAX;
	static int16_t x4630 = -1;
	uint16_t x4631 = 14U;
	int8_t x4632 = INT8_MIN;
	volatile uint64_t t86 = 18148LLU;

	t86 = (((x4629^x4630)<<x4631)^x4632);

	if (t86 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4745 = 25297854852LLU;
	int16_t x4746 = INT16_MAX;
	uint16_t x4747 = 11U;
	uint16_t x4748 = 21U;
	static volatile uint64_t t87 = 12133311060672424LLU;

	t87 = (((x4745^x4746)<<x4747)^x4748);

	if (t87 != 51810038700053LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4797 = 1981949253673185LLU;
	int16_t x4798 = INT16_MIN;
	int8_t x4799 = 1;
	static int32_t x4800 = 80;
	uint64_t t88 = 3188185644425LLU;

	t88 = (((x4797^x4798)<<x4799)^x4800);

	if (t88 != 18442780175202238866LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x4837 = 117237291U;
	uint64_t x4838 = 93345677559901348LLU;
	int16_t x4840 = INT16_MAX;

	t89 = (((x4837^x4838)<<x4839)^x4840);

	if (t89 != 10899498818669470207LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4862 = UINT8_MAX;
	volatile int64_t x4863 = 0LL;
	volatile int64_t t90 = 29698096037950744LL;

	t90 = (((x4861^x4862)<<x4863)^x4864);

	if (t90 != 9223372036833439486LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4909 = UINT8_MAX;
	volatile int16_t x4911 = 21;
	int32_t x4912 = -1426;
	volatile int32_t t91 = -2;

	t91 = (((x4909^x4910)<<x4911)^x4912);

	if (t91 != -520095122) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4957 = 118931031LLU;
	uint16_t x4959 = 49U;
	uint64_t x4960 = 1955844703566035235LLU;

	t92 = (((x4957^x4958)<<x4959)^x4960);

	if (t92 != 7382682254547482915LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x4961 = 3989494U;
	int16_t x4962 = -1;
	uint32_t x4963 = 1U;
	uint32_t t93 = 280103U;

	t93 = (((x4961^x4962)<<x4963)^x4964);

	if (t93 != 4286988306U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4966 = 10U;
	int32_t x4967 = 6;
	static int32_t x4968 = INT32_MIN;
	int32_t t94 = 278;

	t94 = (((x4965^x4966)<<x4967)^x4968);

	if (t94 != -2147482944) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5109 = INT8_MIN;
	uint64_t x5110 = 15777LLU;
	volatile uint8_t x5111 = 4U;
	uint8_t x5112 = 44U;
	uint64_t t95 = 52LLU;

	t95 = (((x5109^x5110)<<x5111)^x5112);

	if (t95 != 18446744073709298236LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5149 = -1270;
	static uint64_t x5150 = 992407057574729158LLU;
	static volatile int8_t x5151 = 1;
	volatile uint64_t t96 = 1103492433157453LLU;

	t96 = (((x5149^x5150)<<x5151)^x5152);

	if (t96 != 7238557921705319832LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x5233 = UINT64_MAX;
	uint32_t x5234 = 26U;
	uint32_t x5235 = 1U;
	uint8_t x5236 = 2U;
	static uint64_t t97 = 15338833656LLU;

	t97 = (((x5233^x5234)<<x5235)^x5236);

	if (t97 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5253 = -35;
	volatile int16_t x5254 = INT16_MIN;
	uint16_t x5255 = 15U;
	volatile uint32_t x5256 = 37U;

	t98 = (((x5253^x5254)<<x5255)^x5256);

	if (t98 != 1072594981U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5369 = 56;
	uint8_t x5370 = UINT8_MAX;
	static uint8_t x5371 = 16U;
	uint16_t x5372 = 0U;
	volatile int32_t t99 = 401613787;

	t99 = (((x5369^x5370)<<x5371)^x5372);

	if (t99 != 13041664) { NG(); } else { ; }
	
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

