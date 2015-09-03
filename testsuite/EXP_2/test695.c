#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 2;
static uint64_t x26 = 0LLU;
volatile uint32_t x250 = UINT32_MAX;
uint8_t x260 = 2U;
static uint32_t x291 = UINT32_MAX;
volatile uint32_t t7 = 19927U;
int64_t x347 = INT64_MIN;
static volatile uint16_t x348 = 5U;
int8_t x593 = 6;
uint16_t x594 = 0U;
uint16_t x596 = 5U;
volatile int8_t x601 = -4;
uint64_t x609 = 250LLU;
int8_t x623 = INT8_MAX;
static volatile uint64_t t14 = 15452906LLU;
int8_t x682 = INT8_MAX;
volatile int32_t x683 = INT32_MIN;
volatile int32_t t16 = 255245;
static int64_t t17 = -31152239412LL;
static uint64_t x735 = 251LLU;
uint8_t x736 = 18U;
int32_t x751 = INT32_MIN;
static int8_t x752 = 0;
static int16_t x837 = INT16_MIN;
static uint64_t x838 = 260146LLU;
static volatile int32_t t24 = 4;
uint32_t x1041 = 32U;
uint32_t x1043 = UINT32_MAX;
volatile uint16_t x1044 = 20U;
int64_t t25 = 31982584895204319LL;
static volatile uint32_t x1046 = UINT32_MAX;
static uint32_t t26 = 910238U;
uint64_t x1053 = 1163007430935773381LLU;
uint8_t x1112 = 2U;
volatile uint16_t x1313 = 5U;
volatile uint16_t x1314 = 1U;
int8_t x1315 = -14;
static int16_t x1342 = INT16_MIN;
static uint16_t x1346 = UINT16_MAX;
int8_t x1353 = -1;
int8_t x1450 = -1;
volatile uint64_t x1478 = UINT64_MAX;
int8_t x1593 = 7;
static uint64_t x1595 = UINT64_MAX;
volatile int8_t x1596 = 5;
static int32_t x1766 = INT32_MIN;
int8_t x1938 = -1;
int64_t t47 = 261876LL;
int64_t x2203 = -1LL;
int16_t x2204 = 13;
static uint16_t x2271 = UINT16_MAX;
int8_t x2310 = -1;
static uint64_t t53 = 2LLU;
uint8_t x2524 = 3U;
volatile int64_t t54 = -44951LL;
volatile int32_t x2590 = INT32_MAX;
int64_t t56 = 462954827LL;
volatile uint64_t t57 = 62214004LLU;
static volatile int8_t x2771 = -1;
int16_t x2842 = 1256;
static int64_t x3145 = INT64_MIN;
static int16_t x3148 = 13;
static int16_t x3194 = -63;
int8_t x3216 = 11;
uint64_t x3291 = 20641429153158962LLU;
volatile uint32_t x3385 = 85408267U;
uint32_t t70 = 6717344U;
uint64_t x3467 = UINT64_MAX;
int64_t x3554 = INT64_MIN;
int64_t t73 = 20LL;
static volatile uint8_t x3579 = 47U;
int8_t x3580 = 18;
static uint8_t x3609 = 2U;
uint32_t x3610 = 31733U;
volatile uint32_t x3657 = 1U;
int64_t x3659 = -1LL;
int16_t x3795 = 28;
static uint32_t x3854 = 66464789U;
uint64_t t84 = 9044LLU;
uint32_t x3956 = 9U;
int64_t x4107 = -7934531652783LL;
int16_t x4108 = 21;
volatile int64_t t88 = -1529LL;
static int16_t x4151 = INT16_MAX;
int8_t x4194 = INT8_MIN;
int16_t x4205 = 0;
static uint16_t x4337 = 8612U;
static volatile int8_t x4338 = INT8_MIN;
volatile uint64_t t95 = 498LLU;
volatile int64_t t96 = 11804146LL;


void f0(void) {
	static int16_t x1 = -229;
	static volatile uint64_t x3 = 5479LLU;
	int8_t x4 = 0;
	uint64_t t0 = 50133984169136370LLU;

	t0 = ((x1-(x2%x3))<<x4);

	if (t0 != 18446744073709551385LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	volatile uint64_t x7 = UINT64_MAX;
	uint16_t x8 = 12U;
	static volatile uint64_t t1 = 22131354508326LLU;

	t1 = ((x5-(x6%x7))<<x8);

	if (t1 != 18446744073575333888LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x17 = UINT64_MAX;
	static int32_t x18 = 565967478;
	int64_t x19 = INT64_MAX;
	int32_t x20 = 3;
	volatile uint64_t t2 = 720LLU;

	t2 = ((x17-(x18%x19))<<x20);

	if (t2 != 18446744069181811784LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = 48311785U;
	int16_t x27 = -1;
	int8_t x28 = 1;
	uint64_t t3 = 316009487LLU;

	t3 = ((x25-(x26%x27))<<x28);

	if (t3 != 96623570LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x225 = 4234528;
	int8_t x226 = -1;
	uint16_t x227 = 1U;
	int16_t x228 = 2;
	int32_t t4 = -2;

	t4 = ((x225-(x226%x227))<<x228);

	if (t4 != 16938112) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x249 = 5050;
	int16_t x251 = 6380;
	uint32_t x252 = 10U;
	static uint32_t t5 = 15331U;

	t5 = ((x249-(x250%x251))<<x252);

	if (t5 != 2780160U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x257 = -16;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	static int32_t t6 = -1535162;

	t6 = ((x257-(x258%x259))<<x260);

	if (t6 != 448) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x289 = INT16_MIN;
	static volatile uint8_t x290 = UINT8_MAX;
	int8_t x292 = 3;

	t7 = ((x289-(x290%x291))<<x292);

	if (t7 != 4294703112U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = -1652;
	int64_t x311 = INT64_MIN;
	volatile int8_t x312 = 5;
	int64_t t8 = 100989518500LL;

	t8 = ((x309-(x310%x311))<<x312);

	if (t8 != 48768LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x345 = -1;
	uint64_t x346 = 214301859538325673LLU;
	static uint64_t t9 = 1836085644050050043LLU;

	t9 = ((x345-(x346%x347))<<x348);

	if (t9 != 11589084568483130048LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int16_t x394 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	uint8_t x396 = 19U;
	uint64_t t10 = 1808052168670279949LLU;

	t10 = ((x393-(x394%x395))<<x396);

	if (t10 != 51539083264LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x595 = 226219887716166342LLU;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x593-(x594%x595))<<x596);

	if (t11 != 192LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x602 = 1073818008U;
	static int16_t x603 = 360;
	static uint64_t x604 = 0LLU;
	uint32_t t12 = 99634685U;

	t12 = ((x601-(x602%x603))<<x604);

	if (t12 != 4294967004U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x610 = 193U;
	int8_t x611 = INT8_MAX;
	int16_t x612 = 0;
	volatile uint64_t t13 = 143LLU;

	t13 = ((x609-(x610%x611))<<x612);

	if (t13 != 184LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x621 = 465956746348LLU;
	static int64_t x622 = -515535874362220LL;
	uint16_t x624 = 1U;

	t14 = ((x621-(x622%x623))<<x624);

	if (t14 != 931913492774LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x633 = INT8_MIN;
	uint32_t x634 = 53U;
	int16_t x635 = INT16_MIN;
	static int8_t x636 = 0;
	uint32_t t15 = 70U;

	t15 = ((x633-(x634%x635))<<x636);

	if (t15 != 4294967115U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x681 = UINT8_MAX;
	uint8_t x684 = 7U;

	t16 = ((x681-(x682%x683))<<x684);

	if (t16 != 16384) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x685 = 0;
	uint32_t x686 = 1299584U;
	int64_t x687 = -1LL;
	static int32_t x688 = 38;

	t17 = ((x685-(x686%x687))<<x688);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x733 = 79LLU;
	int8_t x734 = 37;
	volatile uint64_t t18 = 262104LLU;

	t18 = ((x733-(x734%x735))<<x736);

	if (t18 != 11010048LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x749 = INT32_MAX;
	int16_t x750 = 8;
	static volatile int32_t t19 = -1;

	t19 = ((x749-(x750%x751))<<x752);

	if (t19 != 2147483639) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x773 = UINT32_MAX;
	uint64_t x774 = UINT64_MAX;
	int8_t x775 = INT8_MAX;
	int8_t x776 = 1;
	volatile uint64_t t20 = 529094540145652LLU;

	t20 = ((x773-(x774%x775))<<x776);

	if (t20 != 8589934588LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x797 = 14U;
	uint32_t x798 = 470U;
	int8_t x799 = INT8_MAX;
	static uint8_t x800 = 4U;
	static volatile uint32_t t21 = 16U;

	t21 = ((x797-(x798%x799))<<x800);

	if (t21 != 4294966096U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x839 = 4U;
	uint8_t x840 = 9U;
	volatile uint64_t t22 = 209872111LLU;

	t22 = ((x837-(x838%x839))<<x840);

	if (t22 != 18446744073692773376LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x889 = UINT16_MAX;
	volatile uint8_t x890 = UINT8_MAX;
	uint8_t x891 = 5U;
	int8_t x892 = 1;
	volatile int32_t t23 = 3626;

	t23 = ((x889-(x890%x891))<<x892);

	if (t23 != 131070) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x993 = INT8_MAX;
	int16_t x994 = INT16_MAX;
	int8_t x995 = INT8_MIN;
	int8_t x996 = 1;

	t24 = ((x993-(x994%x995))<<x996);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1042 = -1LL;

	t25 = ((x1041-(x1042%x1043))<<x1044);

	if (t25 != 34603008LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1045 = 0;
	int8_t x1047 = 57;
	volatile uint8_t x1048 = 26U;

	t26 = ((x1045-(x1046%x1047))<<x1048);

	if (t26 != 2684354560U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1054 = -6660;
	volatile int16_t x1055 = -1;
	volatile uint32_t x1056 = 24U;
	static volatile uint64_t t27 = 3LLU;

	t27 = ((x1053-(x1054%x1055))<<x1056);

	if (t27 != 1781192347627814912LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1061 = 15U;
	int8_t x1062 = 0;
	volatile int16_t x1063 = -1;
	volatile int16_t x1064 = 0;
	int32_t t28 = -543175;

	t28 = ((x1061-(x1062%x1063))<<x1064);

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1093 = 3504;
	static volatile uint64_t x1094 = 64566559267146LLU;
	int16_t x1095 = -28;
	uint16_t x1096 = 11U;
	volatile uint64_t t29 = 48376349807531929LLU;

	t29 = ((x1093-(x1094%x1095))<<x1096);

	if (t29 != 18314511760337612800LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1109 = UINT64_MAX;
	uint32_t x1110 = 179U;
	int16_t x1111 = INT16_MAX;
	uint64_t t30 = 175724LLU;

	t30 = ((x1109-(x1110%x1111))<<x1112);

	if (t30 != 18446744073709550896LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1121 = INT32_MAX;
	int64_t x1122 = INT64_MIN;
	int16_t x1123 = INT16_MIN;
	uint8_t x1124 = 32U;
	int64_t t31 = 1078LL;

	t31 = ((x1121-(x1122%x1123))<<x1124);

	if (t31 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1213 = 1U;
	uint64_t x1214 = 902715082785023LLU;
	int16_t x1215 = INT16_MIN;
	uint8_t x1216 = 1U;
	static uint64_t t32 = 267LLU;

	t32 = ((x1213-(x1214%x1215))<<x1216);

	if (t32 != 18444938643543981572LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1316 = 1;
	volatile int32_t t33 = 61;

	t33 = ((x1313-(x1314%x1315))<<x1316);

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1341 = 7596LL;
	volatile int16_t x1343 = INT16_MIN;
	int8_t x1344 = 0;
	static int64_t t34 = 133866856LL;

	t34 = ((x1341-(x1342%x1343))<<x1344);

	if (t34 != 7596LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1345 = -6;
	uint64_t x1347 = 6474676349LLU;
	volatile uint8_t x1348 = 0U;
	uint64_t t35 = 4614022946676723620LLU;

	t35 = ((x1345-(x1346%x1347))<<x1348);

	if (t35 != 18446744073709486075LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1354 = 160441519435833LLU;
	int8_t x1355 = 17;
	static uint8_t x1356 = 3U;
	static uint64_t t36 = 47LLU;

	t36 = ((x1353-(x1354%x1355))<<x1356);

	if (t36 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1449 = UINT64_MAX;
	uint32_t x1451 = UINT32_MAX;
	int8_t x1452 = 4;
	volatile uint64_t t37 = 0LLU;

	t37 = ((x1449-(x1450%x1451))<<x1452);

	if (t37 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1477 = INT16_MIN;
	int8_t x1479 = INT8_MIN;
	uint32_t x1480 = 55U;
	static volatile uint64_t t38 = 20463LLU;

	t38 = ((x1477-(x1478%x1479))<<x1480);

	if (t38 != 13871086852301127680LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1561 = 2394669U;
	int32_t x1562 = INT32_MIN;
	volatile int32_t x1563 = INT32_MIN;
	uint8_t x1564 = 8U;
	volatile uint32_t t39 = 1611704233U;

	t39 = ((x1561-(x1562%x1563))<<x1564);

	if (t39 != 613035264U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1569 = UINT32_MAX;
	uint32_t x1570 = UINT32_MAX;
	static uint64_t x1571 = 722958811446476548LLU;
	uint8_t x1572 = 49U;
	uint64_t t40 = 32LLU;

	t40 = ((x1569-(x1570%x1571))<<x1572);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1589 = -31;
	static uint16_t x1590 = UINT16_MAX;
	uint32_t x1591 = 5U;
	uint64_t x1592 = 9LLU;
	uint32_t t41 = 4399U;

	t41 = ((x1589-(x1590%x1591))<<x1592);

	if (t41 != 4294951424U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1594 = INT8_MIN;
	static volatile uint64_t t42 = 38506375007306544LLU;

	t42 = ((x1593-(x1594%x1595))<<x1596);

	if (t42 != 4320LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1765 = UINT64_MAX;
	int64_t x1767 = INT64_MIN;
	int16_t x1768 = 2;
	volatile uint64_t t43 = 216964841LLU;

	t43 = ((x1765-(x1766%x1767))<<x1768);

	if (t43 != 8589934588LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x1797 = 2U;
	int8_t x1798 = -1;
	volatile int64_t x1799 = INT64_MAX;
	static uint8_t x1800 = 0U;
	static volatile int64_t t44 = -7727LL;

	t44 = ((x1797-(x1798%x1799))<<x1800);

	if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1937 = 7U;
	int16_t x1939 = INT16_MAX;
	volatile uint16_t x1940 = 1U;
	int32_t t45 = 11299986;

	t45 = ((x1937-(x1938%x1939))<<x1940);

	if (t45 != 16) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1945 = -1;
	int64_t x1946 = INT64_MIN;
	static int64_t x1947 = -12LL;
	static int16_t x1948 = 8;
	int64_t t46 = 10011855488241LL;

	t46 = ((x1945-(x1946%x1947))<<x1948);

	if (t46 != 1792LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1953 = 18543U;
	int8_t x1954 = INT8_MIN;
	volatile int64_t x1955 = -1LL;
	uint16_t x1956 = 1U;

	t47 = ((x1953-(x1954%x1955))<<x1956);

	if (t47 != 37086LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2085 = 3;
	volatile uint32_t x2086 = UINT32_MAX;
	int16_t x2087 = -1;
	uint32_t x2088 = 3U;
	volatile uint32_t t48 = 26683U;

	t48 = ((x2085-(x2086%x2087))<<x2088);

	if (t48 != 24U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x2201 = 20;
	int64_t x2202 = INT64_MIN;
	static volatile int64_t t49 = -817704122031191437LL;

	t49 = ((x2201-(x2202%x2203))<<x2204);

	if (t49 != 163840LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2269 = 1367093498747776LLU;
	volatile uint8_t x2270 = 2U;
	uint16_t x2272 = 2U;
	uint64_t t50 = 1040090105669LLU;

	t50 = ((x2269-(x2270%x2271))<<x2272);

	if (t50 != 5468373994991096LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2289 = INT32_MIN;
	uint64_t x2290 = UINT64_MAX;
	int16_t x2291 = INT16_MIN;
	static volatile uint32_t x2292 = 0U;
	volatile uint64_t t51 = 4LLU;

	t51 = ((x2289-(x2290%x2291))<<x2292);

	if (t51 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x2297 = INT32_MIN;
	static int8_t x2298 = INT8_MIN;
	uint32_t x2299 = UINT32_MAX;
	volatile int16_t x2300 = 3;
	uint32_t t52 = 211U;

	t52 = ((x2297-(x2298%x2299))<<x2300);

	if (t52 != 1024U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x2309 = UINT64_MAX;
	static int8_t x2311 = INT8_MAX;
	static int32_t x2312 = 1;

	t53 = ((x2309-(x2310%x2311))<<x2312);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2521 = -1LL;
	int16_t x2522 = -36;
	static uint16_t x2523 = 385U;

	t54 = ((x2521-(x2522%x2523))<<x2524);

	if (t54 != 280LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2589 = 1U;
	static int16_t x2591 = 2419;
	volatile uint8_t x2592 = 23U;
	uint32_t t55 = 3313U;

	t55 = ((x2589-(x2590%x2591))<<x2592);

	if (t55 != 1392508928U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2605 = 13LL;
	int32_t x2606 = INT32_MAX;
	static int32_t x2607 = -1;
	uint64_t x2608 = 51LLU;

	t56 = ((x2605-(x2606%x2607))<<x2608);

	if (t56 != 29273397577908224LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2737 = 4302100023687071066LLU;
	uint16_t x2738 = UINT16_MAX;
	volatile uint16_t x2739 = UINT16_MAX;
	uint16_t x2740 = 20U;

	t57 = ((x2737-(x2738%x2739))<<x2740);

	if (t57 != 1358188318220615680LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2749 = UINT32_MAX;
	volatile int16_t x2750 = INT16_MAX;
	int8_t x2751 = INT8_MIN;
	int8_t x2752 = 0;
	static volatile uint32_t t58 = 6U;

	t58 = ((x2749-(x2750%x2751))<<x2752);

	if (t58 != 4294967168U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x2769 = 22585LLU;
	uint64_t x2770 = UINT64_MAX;
	uint16_t x2772 = 5U;
	uint64_t t59 = 21989105822799LLU;

	t59 = ((x2769-(x2770%x2771))<<x2772);

	if (t59 != 722720LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2781 = INT64_MAX;
	int32_t x2782 = -1;
	uint64_t x2783 = 437393620232213436LLU;
	int32_t x2784 = 34;
	static uint64_t t60 = 28557967LLU;

	t60 = ((x2781-(x2782%x2783))<<x2784);

	if (t60 != 11660087028904624128LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2785 = 26;
	volatile int64_t x2786 = -1LL;
	int32_t x2787 = -1;
	uint16_t x2788 = 1U;
	static int64_t t61 = 743LL;

	t61 = ((x2785-(x2786%x2787))<<x2788);

	if (t61 != 52LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2821 = 22509347U;
	volatile int64_t x2822 = -1LL;
	uint32_t x2823 = 17U;
	volatile int32_t x2824 = 0;
	volatile int64_t t62 = -8708779111834931LL;

	t62 = ((x2821-(x2822%x2823))<<x2824);

	if (t62 != 22509348LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2841 = INT8_MIN;
	uint64_t x2843 = 592179703412170994LLU;
	uint32_t x2844 = 29U;
	static volatile uint64_t t63 = 70214765751051LLU;

	t63 = ((x2841-(x2842%x2843))<<x2844);

	if (t63 != 18446743330680209408LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2857 = 29U;
	int16_t x2858 = 1;
	uint64_t x2859 = 5582165038796885310LLU;
	uint8_t x2860 = 2U;
	static volatile uint64_t t64 = 8023256437343979LLU;

	t64 = ((x2857-(x2858%x2859))<<x2860);

	if (t64 != 112LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2925 = UINT64_MAX;
	int32_t x2926 = INT32_MIN;
	int8_t x2927 = INT8_MIN;
	uint16_t x2928 = 12U;
	uint64_t t65 = 370894182508521132LLU;

	t65 = ((x2925-(x2926%x2927))<<x2928);

	if (t65 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x3146 = INT8_MIN;
	uint64_t x3147 = 1LLU;
	volatile uint64_t t66 = 1704986804487702LLU;

	t66 = ((x3145-(x3146%x3147))<<x3148);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3193 = 6109U;
	int64_t x3195 = INT64_MAX;
	uint8_t x3196 = 9U;
	int64_t t67 = -12399LL;

	t67 = ((x3193-(x3194%x3195))<<x3196);

	if (t67 != 3160064LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3213 = UINT8_MAX;
	static int32_t x3214 = INT32_MIN;
	uint8_t x3215 = UINT8_MAX;
	volatile int32_t t68 = 6110720;

	t68 = ((x3213-(x3214%x3215))<<x3216);

	if (t68 != 784384) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x3289 = INT64_MIN;
	int8_t x3290 = INT8_MAX;
	uint8_t x3292 = 28U;
	static uint64_t t69 = 4027717251428042LLU;

	t69 = ((x3289-(x3290%x3291))<<x3292);

	if (t69 != 18446744039618248704LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x3386 = -345359;
	int8_t x3387 = INT8_MIN;
	int64_t x3388 = 2LL;

	t70 = ((x3385-(x3386%x3387))<<x3388);

	if (t70 != 341633128U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3465 = -4897;
	static int64_t x3466 = INT64_MIN;
	static uint16_t x3468 = 1U;
	uint64_t t71 = 449103987544957LLU;

	t71 = ((x3465-(x3466%x3467))<<x3468);

	if (t71 != 18446744073709541822LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3541 = 47768457LLU;
	int64_t x3542 = -1LL;
	uint16_t x3543 = UINT16_MAX;
	uint8_t x3544 = 52U;
	uint64_t t72 = 450368072011107453LLU;

	t72 = ((x3541-(x3542%x3543))<<x3544);

	if (t72 != 4080261262397669376LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3553 = INT32_MAX;
	volatile uint8_t x3555 = UINT8_MAX;
	uint32_t x3556 = 1U;

	t73 = ((x3553-(x3554%x3555))<<x3556);

	if (t73 != 4294967550LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3565 = 25262475U;
	static int64_t x3566 = INT64_MIN;
	int64_t x3567 = 30692715793LL;
	uint8_t x3568 = 13U;
	int64_t t74 = 1LL;

	t74 = ((x3565-(x3566%x3567))<<x3568);

	if (t74 != 169907067183104LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x3577 = UINT32_MAX;
	static uint16_t x3578 = UINT16_MAX;
	volatile uint32_t t75 = 1U;

	t75 = ((x3577-(x3578%x3579))<<x3580);

	if (t75 != 4290248704U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3611 = -1;
	uint8_t x3612 = 4U;
	uint32_t t76 = 934651355U;

	t76 = ((x3609-(x3610%x3611))<<x3612);

	if (t76 != 4294459600U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3658 = 122154154LL;
	volatile uint8_t x3660 = 1U;
	static volatile int64_t t77 = -128075507335959638LL;

	t77 = ((x3657-(x3658%x3659))<<x3660);

	if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3669 = INT16_MAX;
	static int32_t x3670 = INT32_MIN;
	uint16_t x3671 = 4235U;
	volatile int8_t x3672 = 8;
	volatile int32_t t78 = 1;

	t78 = ((x3669-(x3670%x3671))<<x3672);

	if (t78 != 9433600) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3721 = -17;
	static uint64_t x3722 = UINT64_MAX;
	volatile uint64_t x3723 = 8250548LLU;
	static uint8_t x3724 = 1U;
	volatile uint64_t t79 = 0LLU;

	t79 = ((x3721-(x3722%x3723))<<x3724);

	if (t79 != 18446744073696129552LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3725 = -1;
	uint32_t x3726 = 3U;
	int32_t x3727 = -30;
	volatile uint16_t x3728 = 7U;
	static uint32_t t80 = 5U;

	t80 = ((x3725-(x3726%x3727))<<x3728);

	if (t80 != 4294966784U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3793 = UINT32_MAX;
	int32_t x3794 = -1;
	uint8_t x3796 = 30U;
	volatile uint32_t t81 = 59U;

	t81 = ((x3793-(x3794%x3795))<<x3796);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3837 = 1U;
	static uint64_t x3838 = 1468LLU;
	int16_t x3839 = -1;
	volatile uint32_t x3840 = 1U;
	volatile uint64_t t82 = 252138152378LLU;

	t82 = ((x3837-(x3838%x3839))<<x3840);

	if (t82 != 18446744073709548682LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x3853 = INT32_MIN;
	uint16_t x3855 = UINT16_MAX;
	static int8_t x3856 = 0;
	uint32_t t83 = 12U;

	t83 = ((x3853-(x3854%x3855))<<x3856);

	if (t83 != 2147471349U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x3877 = 147773301492931777LLU;
	int32_t x3878 = -354887;
	volatile int16_t x3879 = INT16_MAX;
	static int16_t x3880 = 0;

	t84 = ((x3877-(x3878%x3879))<<x3880);

	if (t84 != 147773301492958994LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x3905 = UINT16_MAX;
	volatile int64_t x3906 = INT64_MIN;
	volatile uint8_t x3907 = 75U;
	uint16_t x3908 = 2U;
	volatile int64_t t85 = 43LL;

	t85 = ((x3905-(x3906%x3907))<<x3908);

	if (t85 != 262172LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3953 = UINT8_MAX;
	uint32_t x3954 = 32460290U;
	static uint16_t x3955 = 9168U;
	volatile uint32_t t86 = 4510321U;

	t86 = ((x3953-(x3954%x3955))<<x3956);

	if (t86 != 4292246016U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4069 = 266268007311924LL;
	volatile int16_t x4070 = -1;
	uint8_t x4071 = 2U;
	volatile uint8_t x4072 = 0U;
	static volatile int64_t t87 = -197351LL;

	t87 = ((x4069-(x4070%x4071))<<x4072);

	if (t87 != 266268007311925LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4105 = INT16_MIN;
	int16_t x4106 = INT16_MIN;

	t88 = ((x4105-(x4106%x4107))<<x4108);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4137 = 41960575U;
	int8_t x4138 = INT8_MIN;
	volatile int64_t x4139 = INT64_MIN;
	int8_t x4140 = 7;
	volatile int64_t t89 = 10542048146909651LL;

	t89 = ((x4137-(x4138%x4139))<<x4140);

	if (t89 != 5370969984LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4149 = UINT32_MAX;
	uint64_t x4150 = 2778315945544LLU;
	int8_t x4152 = 0;
	static uint64_t t90 = 11696064LLU;

	t90 = ((x4149-(x4150%x4151))<<x4152);

	if (t90 != 4294950538LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4193 = 24;
	volatile int16_t x4195 = INT16_MIN;
	uint8_t x4196 = 1U;
	int32_t t91 = -339346;

	t91 = ((x4193-(x4194%x4195))<<x4196);

	if (t91 != 304) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4206 = -1;
	volatile int8_t x4207 = INT8_MIN;
	static volatile int8_t x4208 = 11;
	volatile int32_t t92 = -1627432;

	t92 = ((x4205-(x4206%x4207))<<x4208);

	if (t92 != 2048) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4281 = 0U;
	int8_t x4282 = -60;
	volatile int32_t x4283 = INT32_MIN;
	int16_t x4284 = 1;
	volatile int32_t t93 = -6;

	t93 = ((x4281-(x4282%x4283))<<x4284);

	if (t93 != 120) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4305 = INT32_MIN;
	int8_t x4306 = -1;
	uint32_t x4307 = 46797842U;
	uint8_t x4308 = 6U;
	volatile uint32_t t94 = 29867U;

	t94 = ((x4305-(x4306%x4307))<<x4308);

	if (t94 != 1967692224U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x4339 = 91146014318528LLU;
	static volatile int8_t x4340 = 29;

	t95 = ((x4337-(x4338%x4339))<<x4340);

	if (t95 != 5288817731099951104LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4361 = INT8_MAX;
	static int32_t x4362 = -1;
	int64_t x4363 = INT64_MIN;
	int8_t x4364 = 15;

	t96 = ((x4361-(x4362%x4363))<<x4364);

	if (t96 != 4194304LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x4373 = UINT8_MAX;
	uint64_t x4374 = 22064LLU;
	int16_t x4375 = 405;
	int16_t x4376 = 1;
	uint64_t t97 = 34365LLU;

	t97 = ((x4373-(x4374%x4375))<<x4376);

	if (t97 != 122LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4385 = 0U;
	int32_t x4386 = INT32_MAX;
	int16_t x4387 = -1;
	volatile uint8_t x4388 = 12U;
	volatile int32_t t98 = 2392;

	t98 = ((x4385-(x4386%x4387))<<x4388);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x4493 = INT16_MAX;
	int8_t x4494 = -1;
	uint64_t x4495 = 12LLU;
	int8_t x4496 = 1;
	static volatile uint64_t t99 = 0LLU;

	t99 = ((x4493-(x4494%x4495))<<x4496);

	if (t99 != 65528LLU) { NG(); } else { ; }
	
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

