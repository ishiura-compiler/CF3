#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x58 = 0;
volatile uint8_t x60 = 9U;
uint64_t x194 = 70582370304LLU;
uint64_t t4 = 3152061322171987992LLU;
volatile uint8_t x314 = 6U;
uint8_t x472 = 13U;
int64_t t7 = 1662625809349992LL;
volatile uint32_t x572 = 2U;
static uint32_t t9 = 11U;
static uint16_t x592 = 1U;
uint16_t x661 = 2U;
int8_t x663 = INT8_MAX;
int32_t t11 = -436106655;
int8_t x725 = 11;
uint64_t x727 = 10941804886LLU;
uint32_t x786 = 112231U;
static volatile uint64_t x818 = 5582192290895068769LLU;
volatile int32_t t16 = -763506806;
static int8_t x1113 = -1;
int8_t x1114 = INT8_MAX;
volatile uint8_t x1168 = 27U;
int32_t t20 = -26711;
volatile uint32_t x1366 = UINT32_MAX;
volatile uint64_t t21 = 1742LLU;
uint16_t x1378 = UINT16_MAX;
uint8_t x1424 = 3U;
int32_t t25 = -39450;
volatile int32_t t26 = INT32_MAX;
int8_t x1552 = 15;
volatile uint8_t x1572 = 0U;
static int64_t x1701 = -1LL;
uint32_t x1704 = 1U;
static volatile int64_t t30 = -106761055810LL;
uint64_t x1738 = 881101LLU;
static volatile uint32_t x1809 = 9241073U;
static uint16_t x1892 = 0U;
int64_t x2003 = 1711409189LL;
static int64_t t36 = 2755174867437007LL;
int16_t x2005 = INT16_MAX;
static int64_t x2006 = 20198294011LL;
volatile uint16_t x2007 = 12U;
static int64_t t37 = 41LL;
static uint64_t x2258 = 491417891170652LLU;
volatile uint64_t t39 = 1553257616061020LLU;
volatile uint32_t x2275 = 0U;
int16_t x2545 = INT16_MIN;
static int8_t x2559 = 57;
int32_t x2560 = 0;
int64_t x2941 = 214422432LL;
volatile uint8_t x2952 = 12U;
uint16_t x3123 = 1U;
volatile int8_t x3225 = -7;
static uint8_t x3228 = 0U;
uint16_t x3400 = 6U;
volatile uint64_t t50 = 1503252LLU;
int32_t x3421 = INT32_MAX;
volatile int32_t t51 = 179;
int8_t x3761 = INT8_MIN;
uint16_t x3859 = 583U;
volatile int32_t t54 = -99;
uint16_t x3918 = UINT16_MAX;
uint8_t x3919 = 105U;
int32_t x4030 = 4370;
volatile uint8_t x4032 = 5U;
int64_t t57 = 5780009LL;
volatile int32_t t59 = -121;
int8_t x4269 = INT8_MIN;
volatile int8_t x4355 = INT8_MAX;
int64_t x4543 = 48LL;
int8_t x4544 = 8;
int16_t x4633 = INT16_MIN;
uint32_t x4678 = 16329161U;
volatile int8_t x4700 = 0;
static int64_t x4781 = -2116704381LL;
uint16_t x4783 = 258U;
int8_t x4784 = 1;
volatile int16_t x4825 = INT16_MAX;
uint64_t t68 = 27LLU;
volatile int64_t x4909 = INT64_MAX;
int64_t x4910 = INT64_MAX;
uint64_t x4911 = 30951598271LLU;
volatile int32_t x5005 = -1;
uint8_t x5060 = 9U;
int64_t x5109 = INT64_MIN;
static int8_t x5143 = INT8_MAX;
volatile int32_t t75 = INT32_MIN;
static uint32_t t76 = 306U;
int64_t t77 = 1LL;
volatile int16_t x5177 = 18;
static volatile int64_t x5266 = INT64_MIN;
int16_t x5267 = 0;
uint64_t t79 = 5998409284709677185LLU;
uint32_t x5562 = 28630U;
int64_t x5653 = 181LL;
uint8_t x5656 = 17U;
volatile int64_t t83 = 667749LL;
volatile int32_t t84 = INT32_MIN;
uint32_t x5846 = 3863628U;
uint8_t x5847 = UINT8_MAX;
static uint32_t x6071 = 309U;
uint16_t x6138 = 9U;
uint16_t x6139 = 0U;
int8_t x6140 = 12;
static uint8_t x6148 = 9U;
static volatile int32_t t91 = 1;
volatile uint64_t x6299 = 16619021LLU;
uint16_t x6300 = 2U;
static volatile uint64_t t93 = 6603446497492998110LLU;
uint16_t x6458 = 5U;
volatile uint8_t x6621 = 2U;
static int32_t x6622 = INT32_MIN;
uint8_t x6623 = 12U;
uint32_t x6758 = 783451462U;
int8_t x6760 = 23;
volatile int8_t x6834 = -1;


void f0(void) {
	int64_t x57 = INT64_MIN;
	static int32_t x59 = INT32_MAX;
	volatile int64_t t0 = INT64_MIN;

	t0 = (x57+(x58*(x59>>x60)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x193 = -1LL;
	int8_t x195 = INT8_MAX;
	int8_t x196 = 15;
	uint64_t t1 = UINT64_MAX;

	t1 = (x193+(x194*(x195>>x196)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x197 = INT16_MIN;
	uint32_t x198 = UINT32_MAX;
	uint32_t x199 = UINT32_MAX;
	volatile uint16_t x200 = 14U;
	uint32_t t2 = 84U;

	t2 = (x197+(x198*(x199>>x200)));

	if (t2 != 4294672385U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x201 = -1LL;
	static uint16_t x202 = 2693U;
	volatile uint32_t x203 = 1881793U;
	int8_t x204 = 0;
	int64_t t3 = -899201277679LL;

	t3 = (x201+(x202*(x203>>x204)));

	if (t3 != 772701252LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x205 = -408089888879588186LL;
	uint64_t x206 = 27058LLU;
	uint32_t x207 = 1993U;
	static uint32_t x208 = 26U;

	t4 = (x205+(x206*(x207>>x208)));

	if (t4 != 18038654184829963430LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x313 = 190508231;
	static uint16_t x315 = UINT16_MAX;
	int16_t x316 = 20;
	volatile int32_t t5 = -173568;

	t5 = (x313+(x314*(x315>>x316)));

	if (t5 != 190508231) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x421 = UINT16_MAX;
	int16_t x422 = INT16_MIN;
	static int32_t x423 = INT32_MAX;
	static int8_t x424 = 23;
	volatile int32_t t6 = 3946;

	t6 = (x421+(x422*(x423>>x424)));

	if (t6 != -8290305) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x469 = INT16_MIN;
	static int64_t x470 = INT64_MIN;
	uint32_t x471 = 4949U;

	t7 = (x469+(x470*(x471>>x472)));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x553 = INT16_MAX;
	int16_t x554 = -1;
	uint32_t x555 = 5086U;
	volatile uint16_t x556 = 1U;
	uint32_t t8 = 1830U;

	t8 = (x553+(x554*(x555>>x556)));

	if (t8 != 30224U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x569 = 12175;
	volatile int16_t x570 = 7;
	uint32_t x571 = 1095U;

	t9 = (x569+(x570*(x571>>x572)));

	if (t9 != 14086U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x589 = 857U;
	int16_t x590 = 6599;
	uint64_t x591 = UINT64_MAX;
	volatile uint64_t t10 = 1203LLU;

	t10 = (x589+(x590*(x591>>x592)));

	if (t10 != 9223372036854770066LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x662 = INT8_MIN;
	static int16_t x664 = 6;

	t11 = (x661+(x662*(x663>>x664)));

	if (t11 != -126) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x726 = -1;
	volatile uint32_t x728 = 3U;
	uint64_t t12 = 0LLU;

	t12 = (x725+(x726*(x727>>x728)));

	if (t12 != 18446744072341826017LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x785 = 10692363LLU;
	int8_t x787 = INT8_MAX;
	int8_t x788 = 3;
	uint64_t t13 = 14LLU;

	t13 = (x785+(x786*(x787>>x788)));

	if (t13 != 12375828LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x817 = 689LL;
	uint8_t x819 = UINT8_MAX;
	uint32_t x820 = 3U;
	uint64_t t14 = 219373021196585224LLU;

	t14 = (x817+(x818*(x819>>x820)));

	if (t14 != 7027264354361167984LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x917 = 33U;
	static int32_t x918 = -1;
	uint64_t x919 = 0LLU;
	uint8_t x920 = 0U;
	volatile uint64_t t15 = 12773LLU;

	t15 = (x917+(x918*(x919>>x920)));

	if (t15 != 33LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x1013 = 80;
	static int32_t x1014 = -3094;
	int32_t x1015 = 3976755;
	static volatile int8_t x1016 = 17;

	t16 = (x1013+(x1014*(x1015>>x1016)));

	if (t16 != -92740) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1045 = 14U;
	int8_t x1046 = -44;
	static int16_t x1047 = INT16_MAX;
	int16_t x1048 = 3;
	uint32_t t17 = 3909021U;

	t17 = (x1045+(x1046*(x1047>>x1048)));

	if (t17 != 4294787130U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1115 = INT16_MAX;
	int64_t x1116 = 11LL;
	volatile int32_t t18 = 3;

	t18 = (x1113+(x1114*(x1115>>x1116)));

	if (t18 != 1904) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1165 = UINT64_MAX;
	int32_t x1166 = INT32_MAX;
	static uint64_t x1167 = 217753024253887920LLU;
	volatile uint64_t t19 = 16LLU;

	t19 = (x1165+(x1166*(x1167>>x1168)));

	if (t19 != 3484048385521768678LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1261 = -25;
	int16_t x1262 = -1;
	volatile uint16_t x1263 = UINT16_MAX;
	volatile uint8_t x1264 = 14U;

	t20 = (x1261+(x1262*(x1263>>x1264)));

	if (t20 != -28) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1365 = 3U;
	static uint64_t x1367 = 0LLU;
	uint8_t x1368 = 0U;

	t21 = (x1365+(x1366*(x1367>>x1368)));

	if (t21 != 3LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1377 = -1;
	uint32_t x1379 = 27554U;
	int16_t x1380 = 3;
	uint32_t t22 = 2799U;

	t22 = (x1377+(x1378*(x1379>>x1380)));

	if (t22 != 225702539U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1389 = UINT64_MAX;
	uint64_t x1390 = 7269966737425700073LLU;
	int16_t x1391 = INT16_MAX;
	int8_t x1392 = 1;
	uint64_t t23 = 203447637009492965LLU;

	t23 = (x1389+(x1390*(x1391>>x1392)));

	if (t23 != 11685319376379063062LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1393 = INT16_MIN;
	uint32_t x1394 = 206U;
	uint64_t x1395 = 319LLU;
	volatile int64_t x1396 = 0LL;
	uint64_t t24 = 6415LLU;

	t24 = (x1393+(x1394*(x1395>>x1396)));

	if (t24 != 32946LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x1421 = INT16_MIN;
	volatile int16_t x1422 = -1;
	int32_t x1423 = INT32_MAX;

	t25 = (x1421+(x1422*(x1423>>x1424)));

	if (t25 != -268468223) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1457 = INT32_MAX;
	int8_t x1458 = INT8_MIN;
	uint8_t x1459 = 1U;
	static uint32_t x1460 = 3U;

	t26 = (x1457+(x1458*(x1459>>x1460)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1549 = 126U;
	static volatile uint16_t x1550 = UINT16_MAX;
	volatile int8_t x1551 = 0;
	int32_t t27 = -991;

	t27 = (x1549+(x1550*(x1551>>x1552)));

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1569 = 0U;
	int16_t x1570 = INT16_MIN;
	uint8_t x1571 = 0U;
	volatile int32_t t28 = 310560;

	t28 = (x1569+(x1570*(x1571>>x1572)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1702 = INT16_MIN;
	uint16_t x1703 = 22U;
	volatile int64_t t29 = 6LL;

	t29 = (x1701+(x1702*(x1703>>x1704)));

	if (t29 != -360449LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1713 = 0;
	static int8_t x1714 = -51;
	volatile int64_t x1715 = 12905632927049326LL;
	uint32_t x1716 = 0U;

	t30 = (x1713+(x1714*(x1715>>x1716)));

	if (t30 != -658187279279515626LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1737 = 15236262541218LLU;
	static int64_t x1739 = 1594321271LL;
	int8_t x1740 = 6;
	static uint64_t t31 = 3851814091133810773LLU;

	t31 = (x1737+(x1738*(x1739>>x1740)));

	if (t31 != 37185606568387LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1745 = -1LL;
	static uint16_t x1746 = 222U;
	uint16_t x1747 = 23U;
	static uint16_t x1748 = 0U;
	static int64_t t32 = -1444LL;

	t32 = (x1745+(x1746*(x1747>>x1748)));

	if (t32 != 5105LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1810 = -1LL;
	static uint64_t x1811 = 480806LLU;
	uint32_t x1812 = 11U;
	volatile uint64_t t33 = 1LLU;

	t33 = (x1809+(x1810*(x1811>>x1812)));

	if (t33 != 9240839LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1889 = INT16_MIN;
	uint16_t x1890 = UINT16_MAX;
	static uint8_t x1891 = 41U;
	static volatile int32_t t34 = -113;

	t34 = (x1889+(x1890*(x1891>>x1892)));

	if (t34 != 2654167) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1897 = 33U;
	volatile int32_t x1898 = -1;
	uint64_t x1899 = 230498020300956007LLU;
	volatile int8_t x1900 = 1;
	uint64_t t35 = 984LLU;

	t35 = (x1897+(x1898*(x1899>>x1900)));

	if (t35 != 18331495063559073646LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2001 = INT64_MIN;
	int16_t x2002 = INT16_MAX;
	volatile uint32_t x2004 = 3U;

	t36 = (x2001+(x2002*(x2003>>x2004)));

	if (t36 != -9223365027136684292LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2008 = 0;

	t37 = (x2005+(x2006*(x2007>>x2008)));

	if (t37 != 242379560899LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2009 = INT32_MAX;
	uint32_t x2010 = UINT32_MAX;
	uint16_t x2011 = 1848U;
	static volatile int16_t x2012 = 4;
	uint32_t t38 = 35556294U;

	t38 = (x2009+(x2010*(x2011>>x2012)));

	if (t38 != 2147483532U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2257 = INT16_MIN;
	uint8_t x2259 = 15U;
	int8_t x2260 = 5;

	t39 = (x2257+(x2258*(x2259>>x2260)));

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2273 = UINT8_MAX;
	int32_t x2274 = -10662677;
	static uint16_t x2276 = 2U;
	uint32_t t40 = 836017U;

	t40 = (x2273+(x2274*(x2275>>x2276)));

	if (t40 != 255U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2546 = INT32_MIN;
	volatile int8_t x2547 = 8;
	uint8_t x2548 = 24U;
	static int32_t t41 = 54892302;

	t41 = (x2545+(x2546*(x2547>>x2548)));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2557 = 177U;
	int8_t x2558 = INT8_MAX;
	volatile int32_t t42 = 25413;

	t42 = (x2557+(x2558*(x2559>>x2560)));

	if (t42 != 7416) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2885 = 387U;
	static uint8_t x2886 = 1U;
	volatile uint32_t x2887 = UINT32_MAX;
	uint8_t x2888 = 3U;
	static volatile uint32_t t43 = 55236044U;

	t43 = (x2885+(x2886*(x2887>>x2888)));

	if (t43 != 536871298U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2909 = -24477;
	int16_t x2910 = INT16_MIN;
	int8_t x2911 = 3;
	uint8_t x2912 = 3U;
	static int32_t t44 = -7917136;

	t44 = (x2909+(x2910*(x2911>>x2912)));

	if (t44 != -24477) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2942 = -1;
	int8_t x2943 = INT8_MAX;
	uint8_t x2944 = 25U;
	static volatile int64_t t45 = -7117148LL;

	t45 = (x2941+(x2942*(x2943>>x2944)));

	if (t45 != 214422432LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2949 = 5U;
	static volatile int16_t x2950 = -445;
	static volatile uint32_t x2951 = 264174503U;
	volatile uint32_t t46 = 1028U;

	t46 = (x2949+(x2950*(x2951>>x2952)));

	if (t46 != 4266267026U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x3121 = INT32_MIN;
	int8_t x3122 = INT8_MAX;
	uint8_t x3124 = 2U;
	static volatile int32_t t47 = INT32_MIN;

	t47 = (x3121+(x3122*(x3123>>x3124)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3226 = -11;
	static uint16_t x3227 = UINT16_MAX;
	int32_t t48 = -16360830;

	t48 = (x3225+(x3226*(x3227>>x3228)));

	if (t48 != -720892) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3337 = 4009;
	int16_t x3338 = 14720;
	int16_t x3339 = 0;
	uint8_t x3340 = 1U;
	int32_t t49 = 63180;

	t49 = (x3337+(x3338*(x3339>>x3340)));

	if (t49 != 4009) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3397 = UINT8_MAX;
	int8_t x3398 = INT8_MIN;
	uint64_t x3399 = 45977276683LLU;

	t50 = (x3397+(x3398*(x3399>>x3400)));

	if (t50 != 18446743981754998527LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3422 = INT8_MIN;
	int32_t x3423 = 139556;
	volatile int8_t x3424 = 3;

	t51 = (x3421+(x3422*(x3423>>x3424)));

	if (t51 != 2145250815) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3762 = -1LL;
	static int16_t x3763 = INT16_MAX;
	volatile uint16_t x3764 = 7U;
	volatile int64_t t52 = 4120500181887812955LL;

	t52 = (x3761+(x3762*(x3763>>x3764)));

	if (t52 != -383LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x3857 = INT32_MIN;
	int64_t x3858 = INT64_MIN;
	int8_t x3860 = 13;
	volatile int64_t t53 = -28609489LL;

	t53 = (x3857+(x3858*(x3859>>x3860)));

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3881 = UINT8_MAX;
	int32_t x3882 = -1565;
	int8_t x3883 = 1;
	uint16_t x3884 = 5U;

	t54 = (x3881+(x3882*(x3883>>x3884)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3917 = -1;
	int8_t x3920 = 4;
	static int32_t t55 = -8470911;

	t55 = (x3917+(x3918*(x3919>>x3920)));

	if (t55 != 393209) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x4029 = INT64_MAX;
	static uint8_t x4031 = 9U;
	int64_t t56 = INT64_MAX;

	t56 = (x4029+(x4030*(x4031>>x4032)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x4157 = 2036350061450290LL;
	uint16_t x4158 = UINT16_MAX;
	static volatile int8_t x4159 = INT8_MAX;
	int8_t x4160 = 4;

	t57 = (x4157+(x4158*(x4159>>x4160)));

	if (t57 != 2036350061909035LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4197 = INT32_MIN;
	volatile uint32_t x4198 = 475U;
	uint64_t x4199 = UINT64_MAX;
	volatile int16_t x4200 = 0;
	static uint64_t t58 = 946759510897LLU;

	t58 = (x4197+(x4198*(x4199>>x4200)));

	if (t58 != 18446744071562067493LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4225 = INT16_MAX;
	static volatile int32_t x4226 = -1;
	static int16_t x4227 = 12;
	uint16_t x4228 = 14U;

	t59 = (x4225+(x4226*(x4227>>x4228)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4270 = 3188417191828764653LL;
	uint8_t x4271 = 14U;
	static int64_t x4272 = 6LL;
	static volatile int64_t t60 = -278999630LL;

	t60 = (x4269+(x4270*(x4271>>x4272)));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x4353 = UINT32_MAX;
	volatile int16_t x4354 = INT16_MIN;
	volatile uint8_t x4356 = 2U;
	static uint32_t t61 = 1461U;

	t61 = (x4353+(x4354*(x4355>>x4356)));

	if (t61 != 4293951487U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x4377 = INT16_MAX;
	uint8_t x4378 = 0U;
	int8_t x4379 = INT8_MAX;
	static int16_t x4380 = 0;
	volatile int32_t t62 = 1771;

	t62 = (x4377+(x4378*(x4379>>x4380)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4541 = 6408600279036739513LLU;
	int32_t x4542 = INT32_MIN;
	uint64_t t63 = 206051957382335104LLU;

	t63 = (x4541+(x4542*(x4543>>x4544)));

	if (t63 != 6408600279036739513LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x4634 = 753807195LLU;
	uint32_t x4635 = UINT32_MAX;
	static uint16_t x4636 = 1U;
	volatile uint64_t t64 = 84687921975476745LLU;

	t64 = (x4633+(x4634*(x4635>>x4636)));

	if (t64 != 1618788624253407397LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4677 = INT32_MIN;
	uint64_t x4679 = UINT64_MAX;
	uint8_t x4680 = 17U;
	uint64_t t65 = 65237754LLU;

	t65 = (x4677+(x4678*(x4679>>x4680)));

	if (t65 != 10728840947627906615LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4697 = 49U;
	static uint64_t x4698 = 4401085738819605626LLU;
	uint16_t x4699 = UINT16_MAX;
	static volatile uint64_t t66 = 33906619233068LLU;

	t66 = (x4697+(x4698*(x4699>>x4700)));

	if (t66 != 10310301094015183799LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x4782 = INT16_MIN;
	int64_t t67 = 7546473460LL;

	t67 = (x4781+(x4782*(x4783>>x4784)));

	if (t67 != -2120931453LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4826 = 1006LLU;
	uint8_t x4827 = 38U;
	uint8_t x4828 = 11U;

	t68 = (x4825+(x4826*(x4827>>x4828)));

	if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x4912 = 2LLU;
	uint64_t t69 = 544276790LLU;

	t69 = (x4909+(x4910*(x4911>>x4912)));

	if (t69 != 18446744065971652048LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x5006 = INT16_MAX;
	uint32_t x5007 = UINT32_MAX;
	int8_t x5008 = 5;
	volatile uint32_t t70 = 242211U;

	t70 = (x5005+(x5006*(x5007>>x5008)));

	if (t70 != 4160716800U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x5057 = UINT32_MAX;
	uint16_t x5058 = 13U;
	static int8_t x5059 = 0;
	static uint32_t t71 = UINT32_MAX;

	t71 = (x5057+(x5058*(x5059>>x5060)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x5077 = -3429867849LL;
	int64_t x5078 = 10619636134512019LL;
	volatile int16_t x5079 = INT16_MAX;
	int16_t x5080 = 6;
	volatile int64_t t72 = -249495686342838LL;

	t72 = (x5077+(x5078*(x5079>>x5080)));

	if (t72 != 5426634061305773860LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5110 = 1054U;
	uint64_t x5111 = 15926069689LLU;
	volatile int8_t x5112 = 0;
	uint64_t t73 = 3413730690156596LLU;

	t73 = (x5109+(x5110*(x5111>>x5112)));

	if (t73 != 9223388822932228014LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5113 = 1;
	volatile uint16_t x5114 = 19390U;
	uint32_t x5115 = 0U;
	static uint8_t x5116 = 4U;
	static volatile uint32_t t74 = 3U;

	t74 = (x5113+(x5114*(x5115>>x5116)));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x5141 = INT32_MIN;
	static uint16_t x5142 = UINT16_MAX;
	static uint8_t x5144 = 12U;

	t75 = (x5141+(x5142*(x5143>>x5144)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5153 = 19;
	int32_t x5154 = -682868852;
	uint32_t x5155 = 121U;
	uint64_t x5156 = 29LLU;

	t76 = (x5153+(x5154*(x5155>>x5156)));

	if (t76 != 19U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x5157 = -1132971571027588LL;
	int32_t x5158 = -1;
	static int32_t x5159 = 2621089;
	int8_t x5160 = 3;

	t77 = (x5157+(x5158*(x5159>>x5160)));

	if (t77 != -1132971571355224LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5178 = -1LL;
	int8_t x5179 = 1;
	static volatile int16_t x5180 = 4;
	static volatile int64_t t78 = 15027LL;

	t78 = (x5177+(x5178*(x5179>>x5180)));

	if (t78 != 18LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5265 = 1110789536202568LLU;
	uint16_t x5268 = 5U;

	t79 = (x5265+(x5266*(x5267>>x5268)));

	if (t79 != 1110789536202568LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5321 = -1;
	static int16_t x5322 = INT16_MIN;
	static uint8_t x5323 = 1U;
	int16_t x5324 = 1;
	volatile int32_t t80 = 9303433;

	t80 = (x5321+(x5322*(x5323>>x5324)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x5561 = -2680973364LL;
	volatile uint64_t x5563 = 1189581409LLU;
	uint8_t x5564 = 2U;
	static volatile uint64_t t81 = 647226LLU;

	t81 = (x5561+(x5562*(x5563>>x5564)));

	if (t81 != 8511747954396LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x5609 = INT16_MAX;
	static int16_t x5610 = INT16_MIN;
	volatile int16_t x5611 = 425;
	int32_t x5612 = 2;
	int32_t t82 = -7;

	t82 = (x5609+(x5610*(x5611>>x5612)));

	if (t82 != -3440641) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5654 = 11U;
	int16_t x5655 = 22;

	t83 = (x5653+(x5654*(x5655>>x5656)));

	if (t83 != 181LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5685 = INT32_MIN;
	volatile int16_t x5686 = INT16_MAX;
	int16_t x5687 = 979;
	int32_t x5688 = 23;

	t84 = (x5685+(x5686*(x5687>>x5688)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5765 = 846U;
	int8_t x5766 = INT8_MIN;
	uint32_t x5767 = 5350712U;
	int16_t x5768 = 1;
	uint32_t t85 = 2115608726U;

	t85 = (x5765+(x5766*(x5767>>x5768)));

	if (t85 != 3952522574U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x5801 = -1;
	int16_t x5802 = INT16_MIN;
	volatile uint32_t x5803 = 122319U;
	int32_t x5804 = 3;
	static uint32_t t86 = 10072U;

	t86 = (x5801+(x5802*(x5803>>x5804)));

	if (t86 != 3793977343U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x5845 = INT64_MIN;
	uint8_t x5848 = 0U;
	int64_t t87 = -220398643281964070LL;

	t87 = (x5845+(x5846*(x5847>>x5848)));

	if (t87 != -9223372035869550668LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x6069 = -1;
	volatile int8_t x6070 = -62;
	static uint32_t x6072 = 0U;
	volatile uint32_t t88 = 12924U;

	t88 = (x6069+(x6070*(x6071>>x6072)));

	if (t88 != 4294948137U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x6137 = 28U;
	static volatile int32_t t89 = -390;

	t89 = (x6137+(x6138*(x6139>>x6140)));

	if (t89 != 28) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x6145 = 22;
	int16_t x6146 = -1;
	static uint16_t x6147 = 89U;
	static int32_t t90 = 0;

	t90 = (x6145+(x6146*(x6147>>x6148)));

	if (t90 != 22) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x6257 = 0U;
	int32_t x6258 = 41633915;
	uint16_t x6259 = UINT16_MAX;
	uint16_t x6260 = 21U;

	t91 = (x6257+(x6258*(x6259>>x6260)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6265 = -1LL;
	volatile int8_t x6266 = -1;
	uint64_t x6267 = 76405LLU;
	static uint64_t x6268 = 5LLU;
	uint64_t t92 = 7651LLU;

	t92 = (x6265+(x6266*(x6267>>x6268)));

	if (t92 != 18446744073709549228LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x6297 = INT32_MAX;
	uint32_t x6298 = UINT32_MAX;

	t93 = (x6297+(x6298*(x6299>>x6300)));

	if (t93 != 17844538991221372LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6357 = INT8_MIN;
	int8_t x6358 = -1;
	int8_t x6359 = 1;
	volatile int16_t x6360 = 14;
	int32_t t94 = 470460;

	t94 = (x6357+(x6358*(x6359>>x6360)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6457 = 1625;
	uint8_t x6459 = 1U;
	uint8_t x6460 = 12U;
	volatile int32_t t95 = 678936790;

	t95 = (x6457+(x6458*(x6459>>x6460)));

	if (t95 != 1625) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x6624 = 4U;
	volatile int32_t t96 = 0;

	t96 = (x6621+(x6622*(x6623>>x6624)));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x6757 = INT64_MIN;
	int8_t x6759 = INT8_MAX;
	int64_t t97 = INT64_MIN;

	t97 = (x6757+(x6758*(x6759>>x6760)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x6833 = -1LL;
	static int32_t x6835 = 48;
	static uint8_t x6836 = 12U;
	int64_t t98 = -537920200293608LL;

	t98 = (x6833+(x6834*(x6835>>x6836)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x6865 = 788921066LLU;
	int32_t x6866 = -126;
	uint16_t x6867 = UINT16_MAX;
	uint16_t x6868 = 0U;
	volatile uint64_t t99 = 282833238596966255LLU;

	t99 = (x6865+(x6866*(x6867>>x6868)));

	if (t99 != 780663656LLU) { NG(); } else { ; }
	
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

