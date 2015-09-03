#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = 2109125LLU;
uint64_t x181 = UINT64_MAX;
uint16_t x226 = 0U;
volatile int32_t x307 = 1;
int8_t x308 = INT8_MIN;
uint8_t x315 = 6U;
int64_t t4 = 22738333139LL;
volatile int16_t x489 = INT16_MIN;
int32_t x490 = INT32_MAX;
volatile uint64_t t7 = 1029344LLU;
int64_t t8 = 111808439567467LL;
static uint64_t x644 = 39LLU;
static int32_t x673 = INT32_MAX;
static int8_t x773 = -1;
volatile int64_t t13 = 197LL;
volatile int16_t x805 = -1;
uint32_t x838 = 386107U;
uint16_t x840 = 13816U;
int64_t t16 = -482709351037184LL;
int32_t x901 = -1;
int64_t t17 = -122078LL;
static uint64_t x918 = 1654567934LLU;
volatile uint64_t t18 = 159138676LLU;
int16_t x932 = INT16_MAX;
uint16_t x1011 = 13U;
uint8_t x1051 = 8U;
uint16_t x1206 = UINT16_MAX;
static int16_t x1251 = 5;
volatile uint64_t x1577 = 349516LLU;
int8_t x1579 = 0;
uint8_t x1580 = 75U;
int64_t x1650 = INT64_MAX;
volatile uint8_t x1651 = 11U;
volatile int8_t x1668 = 3;
static int16_t x1702 = INT16_MAX;
volatile uint8_t x1721 = UINT8_MAX;
uint64_t x1749 = 949214LLU;
int32_t x1750 = INT32_MAX;
uint64_t t32 = 849538LLU;
volatile uint64_t t33 = 3223910939226855757LLU;
uint16_t x1785 = 1U;
uint32_t x1786 = 59643U;
int8_t x1805 = INT8_MAX;
int64_t x1944 = -1175652472573LL;
int16_t x2035 = 4;
int32_t t39 = 0;
uint16_t x2190 = 158U;
int32_t t40 = -540;
uint16_t x2253 = UINT16_MAX;
int64_t x2449 = -13910596LL;
static int64_t t44 = 14437040573706LL;
int32_t x2516 = -1;
static volatile int64_t x2608 = INT64_MAX;
uint8_t x2635 = 7U;
static uint8_t x2636 = 3U;
uint8_t x2664 = UINT8_MAX;
uint16_t x2744 = 6878U;
volatile uint64_t x2821 = UINT64_MAX;
int16_t x2823 = 4;
int64_t t55 = 92LL;
volatile int64_t x2996 = INT64_MAX;
volatile int32_t x3080 = -1;
uint32_t x3130 = 382899U;
static volatile int64_t t59 = -66652802LL;
uint64_t x3233 = 203162688130897LLU;
volatile uint64_t t60 = 30423877678LLU;
volatile int8_t x3313 = INT8_MAX;
uint32_t x3316 = UINT32_MAX;
uint64_t x3462 = UINT64_MAX;
int8_t x3463 = 1;
volatile uint8_t x3478 = 2U;
uint64_t t67 = 3371664958665LLU;
uint64_t x3509 = UINT64_MAX;
static int8_t x3511 = 31;
int32_t x3512 = -1;
int32_t x3558 = INT32_MAX;
volatile uint16_t x3559 = 9U;
volatile int32_t t71 = -40;
static int32_t x3749 = INT32_MIN;
volatile int64_t t72 = -768599181758LL;
int32_t x3761 = -1090;
uint16_t x3763 = 11U;
static volatile int32_t x3793 = INT32_MIN;
volatile int8_t x3837 = INT8_MIN;
uint64_t x3942 = 82339500488LLU;
int64_t t79 = -22963LL;
uint32_t t80 = 11U;
volatile uint8_t x4275 = 0U;
static int8_t x4288 = INT8_MAX;
uint8_t x4404 = 14U;
uint64_t t85 = 2005955332558LLU;
uint32_t x4547 = 1U;
volatile int8_t x4600 = 34;
int32_t x4639 = 1;
int32_t t90 = 53086;
uint64_t x4716 = UINT64_MAX;
int8_t x4738 = 43;
uint64_t t92 = 8464300926611075LLU;
static int8_t x4789 = -1;
uint16_t x4790 = 8086U;
uint64_t x4792 = 15499366293LLU;
uint64_t t93 = 107818748022248LLU;
int16_t x4796 = -1;
uint32_t x4806 = UINT32_MAX;
uint16_t x4807 = 4U;
uint64_t x4867 = 24LLU;
uint64_t x4878 = 3340LLU;


void f0(void) {
	static uint8_t x97 = UINT8_MAX;
	int16_t x98 = INT16_MAX;
	static uint8_t x99 = 15U;
	uint64_t x100 = 271464828LLU;

	t0 = ((x97+(x98>>x99))&x100);

	if (t0 != 124LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x182 = 28U;
	volatile uint16_t x183 = 0U;
	int64_t x184 = -251469843836515LL;
	static volatile uint64_t t1 = 503LLU;

	t1 = ((x181+(x182>>x183))&x184);

	if (t1 != 25LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x225 = INT64_MIN;
	int32_t x227 = 1;
	static uint64_t x228 = 5LLU;
	uint64_t t2 = 548181LLU;

	t2 = ((x225+(x226>>x227))&x228);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x305 = -1LL;
	uint8_t x306 = 31U;
	volatile int64_t t3 = -16806LL;

	t3 = ((x305+(x306>>x307))&x308);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x313 = -6698924514619284LL;
	int64_t x314 = 10541901LL;
	static int8_t x316 = INT8_MIN;

	t4 = ((x313+(x314>>x315))&x316);

	if (t4 != -6698924514454656LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = 1;
	volatile uint64_t x387 = 0LLU;
	uint32_t x388 = 8325156U;
	uint32_t t5 = 11270U;

	t5 = ((x385+(x386>>x387))&x388);

	if (t5 != 8323072U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x491 = 1U;
	int16_t x492 = INT16_MIN;
	int32_t t6 = -5665552;

	t6 = ((x489+(x490>>x491))&x492);

	if (t6 != 1073676288) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x493 = UINT8_MAX;
	static uint16_t x494 = 279U;
	uint16_t x495 = 20U;
	uint64_t x496 = 34995642LLU;

	t7 = ((x493+(x494>>x495))&x496);

	if (t7 != 186LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x505 = -188640841877776557LL;
	int16_t x506 = 7259;
	static volatile uint8_t x507 = 3U;
	static uint16_t x508 = UINT16_MAX;

	t8 = ((x505+(x506>>x507))&x508);

	if (t8 != 39646LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x633 = -1;
	uint64_t x634 = 61414171893746LLU;
	static uint16_t x635 = 1U;
	int8_t x636 = -1;
	volatile uint64_t t9 = 1142121LLU;

	t9 = ((x633+(x634>>x635))&x636);

	if (t9 != 30707085946872LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x641 = 18U;
	uint8_t x642 = 3U;
	volatile int8_t x643 = 9;
	uint64_t t10 = 1043237628LLU;

	t10 = ((x641+(x642>>x643))&x644);

	if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x674 = UINT64_MAX;
	uint8_t x675 = 7U;
	int16_t x676 = -63;
	static uint64_t t11 = 1973606005LLU;

	t11 = ((x673+(x674>>x675))&x676);

	if (t11 != 144115190223339456LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x713 = INT32_MAX;
	uint64_t x714 = 4897LLU;
	int32_t x715 = 0;
	uint64_t x716 = UINT64_MAX;
	uint64_t t12 = 271791842108485637LLU;

	t12 = ((x713+(x714>>x715))&x716);

	if (t12 != 2147488544LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x774 = 1698LL;
	uint16_t x775 = 7U;
	int8_t x776 = INT8_MIN;

	t13 = ((x773+(x774>>x775))&x776);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x806 = INT8_MAX;
	uint16_t x807 = 21U;
	static int32_t x808 = -1;
	int32_t t14 = 3243630;

	t14 = ((x805+(x806>>x807))&x808);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x837 = INT32_MIN;
	int16_t x839 = 10;
	uint32_t t15 = 12U;

	t15 = ((x837+(x838>>x839))&x840);

	if (t15 != 376U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x845 = -1;
	int64_t x846 = 13665545903LL;
	volatile uint16_t x847 = 0U;
	static uint16_t x848 = 1235U;

	t16 = ((x845+(x846>>x847))&x848);

	if (t16 != 1154LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x902 = 79406592718056942LL;
	int8_t x903 = 22;
	uint8_t x904 = 40U;

	t17 = ((x901+(x902>>x903))&x904);

	if (t17 != 8LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x917 = -1;
	int8_t x919 = 3;
	uint16_t x920 = UINT16_MAX;

	t18 = ((x917+(x918>>x919))&x920);

	if (t18 != 54910LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x929 = INT16_MIN;
	static volatile uint8_t x930 = 15U;
	int8_t x931 = 17;
	volatile int32_t t19 = -32728043;

	t19 = ((x929+(x930>>x931))&x932);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1009 = 1;
	int32_t x1010 = INT32_MAX;
	int64_t x1012 = 14LL;
	volatile int64_t t20 = -15602420695351LL;

	t20 = ((x1009+(x1010>>x1011))&x1012);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1049 = -1;
	static volatile int64_t x1050 = INT64_MAX;
	static volatile int32_t x1052 = INT32_MAX;
	int64_t t21 = -751579044LL;

	t21 = ((x1049+(x1050>>x1051))&x1052);

	if (t21 != 2147483646LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1141 = INT64_MIN;
	int64_t x1142 = 3569904513LL;
	int32_t x1143 = 19;
	int16_t x1144 = -2;
	volatile int64_t t22 = 773751LL;

	t22 = ((x1141+(x1142>>x1143))&x1144);

	if (t22 != -9223372036854769000LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1205 = INT64_MIN;
	uint16_t x1207 = 6U;
	int64_t x1208 = INT64_MIN;
	static int64_t t23 = INT64_MIN;

	t23 = ((x1205+(x1206>>x1207))&x1208);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1249 = INT16_MAX;
	uint32_t x1250 = UINT32_MAX;
	int16_t x1252 = -1;
	uint32_t t24 = 11U;

	t24 = ((x1249+(x1250>>x1251))&x1252);

	if (t24 != 134250494U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1578 = 35U;
	static uint64_t t25 = 9473483384403LLU;

	t25 = ((x1577+(x1578>>x1579))&x1580);

	if (t25 != 75LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1589 = -1LL;
	static uint64_t x1590 = 213252130LLU;
	int32_t x1591 = 41;
	int16_t x1592 = INT16_MIN;
	volatile uint64_t t26 = 21LLU;

	t26 = ((x1589+(x1590>>x1591))&x1592);

	if (t26 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1649 = INT64_MIN;
	int8_t x1652 = -2;
	static volatile int64_t t27 = -888026565217671038LL;

	t27 = ((x1649+(x1650>>x1651))&x1652);

	if (t27 != -9218868437227405314LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1657 = UINT8_MAX;
	static int16_t x1658 = INT16_MAX;
	static int8_t x1659 = 5;
	int8_t x1660 = -1;
	static volatile int32_t t28 = -4525048;

	t28 = ((x1657+(x1658>>x1659))&x1660);

	if (t28 != 1278) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1665 = INT8_MIN;
	uint16_t x1666 = 16543U;
	uint16_t x1667 = 0U;
	int32_t t29 = 448538691;

	t29 = ((x1665+(x1666>>x1667))&x1668);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1701 = 8892744128178LLU;
	uint16_t x1703 = 3U;
	int32_t x1704 = INT32_MAX;
	uint64_t t30 = 96575346439678609LLU;

	t30 = ((x1701+(x1702>>x1703))&x1704);

	if (t30 != 14345905LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1722 = INT32_MAX;
	volatile uint8_t x1723 = 13U;
	int8_t x1724 = -43;
	volatile int32_t t31 = 747;

	t31 = ((x1721+(x1722>>x1723))&x1724);

	if (t31 != 262356) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1751 = 22U;
	int64_t x1752 = INT64_MIN;

	t32 = ((x1749+(x1750>>x1751))&x1752);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1773 = 1U;
	uint64_t x1774 = 69240714327LLU;
	volatile int8_t x1775 = 0;
	static int64_t x1776 = INT64_MAX;

	t33 = ((x1773+(x1774>>x1775))&x1776);

	if (t33 != 69240714328LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1787 = 5U;
	int64_t x1788 = INT64_MIN;
	volatile int64_t t34 = 7520928712812733LL;

	t34 = ((x1785+(x1786>>x1787))&x1788);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1806 = 135;
	int16_t x1807 = 0;
	volatile int8_t x1808 = INT8_MIN;
	volatile int32_t t35 = 9182;

	t35 = ((x1805+(x1806>>x1807))&x1808);

	if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1821 = 1929973259U;
	static int8_t x1822 = INT8_MAX;
	static uint32_t x1823 = 2U;
	int64_t x1824 = INT64_MIN;
	int64_t t36 = 2LL;

	t36 = ((x1821+(x1822>>x1823))&x1824);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x1941 = -50;
	uint64_t x1942 = UINT64_MAX;
	int32_t x1943 = 4;
	static volatile uint64_t t37 = 155349LLU;

	t37 = ((x1941+(x1942>>x1943))&x1944);

	if (t37 != 1152920328954374401LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1985 = INT32_MAX;
	static uint16_t x1986 = 18U;
	uint16_t x1987 = 14U;
	static uint8_t x1988 = 1U;
	int32_t t38 = -3402107;

	t38 = ((x1985+(x1986>>x1987))&x1988);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2033 = 12;
	volatile uint16_t x2034 = 0U;
	uint8_t x2036 = UINT8_MAX;

	t39 = ((x2033+(x2034>>x2035))&x2036);

	if (t39 != 12) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2189 = 111U;
	volatile int16_t x2191 = 9;
	int8_t x2192 = INT8_MIN;

	t40 = ((x2189+(x2190>>x2191))&x2192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2254 = 0U;
	static volatile uint16_t x2255 = 0U;
	int32_t x2256 = INT32_MIN;
	int32_t t41 = 287;

	t41 = ((x2253+(x2254>>x2255))&x2256);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2293 = -514557559;
	uint64_t x2294 = UINT64_MAX;
	int32_t x2295 = 60;
	int16_t x2296 = -1;
	volatile uint64_t t42 = 414649LLU;

	t42 = ((x2293+(x2294>>x2295))&x2296);

	if (t42 != 18446744073194994072LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2341 = INT16_MIN;
	uint64_t x2342 = 5528LLU;
	int8_t x2343 = 2;
	int8_t x2344 = -1;
	uint64_t t43 = 4LLU;

	t43 = ((x2341+(x2342>>x2343))&x2344);

	if (t43 != 18446744073709520230LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x2450 = INT32_MAX;
	uint16_t x2451 = 3U;
	int64_t x2452 = -1LL;

	t44 = ((x2449+(x2450>>x2451))&x2452);

	if (t44 != 254524859LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2513 = 4U;
	uint64_t x2514 = 257157923656LLU;
	volatile int16_t x2515 = 6;
	volatile uint64_t t45 = 2037LLU;

	t45 = ((x2513+(x2514>>x2515))&x2516);

	if (t45 != 4018092561LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2589 = 6107012773294277927LLU;
	static uint16_t x2590 = UINT16_MAX;
	uint8_t x2591 = 13U;
	uint16_t x2592 = UINT16_MAX;
	volatile uint64_t t46 = 20042LLU;

	t46 = ((x2589+(x2590>>x2591))&x2592);

	if (t46 != 34094LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2605 = INT64_MIN;
	uint16_t x2606 = 992U;
	static volatile int16_t x2607 = 13;
	volatile int64_t t47 = -667109174778LL;

	t47 = ((x2605+(x2606>>x2607))&x2608);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2633 = UINT16_MAX;
	int8_t x2634 = 1;
	volatile int32_t t48 = -33032;

	t48 = ((x2633+(x2634>>x2635))&x2636);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2661 = INT8_MAX;
	int8_t x2662 = INT8_MAX;
	int8_t x2663 = 3;
	volatile int32_t t49 = -263;

	t49 = ((x2661+(x2662>>x2663))&x2664);

	if (t49 != 142) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2741 = INT8_MAX;
	static int8_t x2742 = INT8_MAX;
	uint16_t x2743 = 2U;
	volatile int32_t t50 = 1;

	t50 = ((x2741+(x2742>>x2743))&x2744);

	if (t50 != 158) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x2805 = 72U;
	int64_t x2806 = INT64_MAX;
	int16_t x2807 = 36;
	volatile uint32_t x2808 = UINT32_MAX;
	volatile int64_t t51 = -2028509LL;

	t51 = ((x2805+(x2806>>x2807))&x2808);

	if (t51 != 134217799LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2822 = 62U;
	int32_t x2824 = 5652;
	volatile uint64_t t52 = 93019577LLU;

	t52 = ((x2821+(x2822>>x2823))&x2824);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2829 = UINT64_MAX;
	int16_t x2830 = INT16_MAX;
	int32_t x2831 = 25;
	volatile int32_t x2832 = -10001820;
	uint64_t t53 = 8837045452302341306LLU;

	t53 = ((x2829+(x2830>>x2831))&x2832);

	if (t53 != 18446744073699549796LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2873 = -1;
	uint32_t x2874 = 19U;
	int16_t x2875 = 1;
	static int32_t x2876 = INT32_MIN;
	volatile uint32_t t54 = 252131U;

	t54 = ((x2873+(x2874>>x2875))&x2876);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2961 = -1;
	static int64_t x2962 = 0LL;
	uint32_t x2963 = 0U;
	int8_t x2964 = -1;

	t55 = ((x2961+(x2962>>x2963))&x2964);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2993 = 1700273LLU;
	uint8_t x2994 = 11U;
	uint8_t x2995 = 2U;
	static volatile uint64_t t56 = 5751193517375362LLU;

	t56 = ((x2993+(x2994>>x2995))&x2996);

	if (t56 != 1700275LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3041 = 1240U;
	volatile uint8_t x3042 = UINT8_MAX;
	int8_t x3043 = 1;
	uint64_t x3044 = UINT64_MAX;
	static volatile uint64_t t57 = 22256475157720LLU;

	t57 = ((x3041+(x3042>>x3043))&x3044);

	if (t57 != 1367LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3077 = 5U;
	static int32_t x3078 = 113337;
	uint8_t x3079 = 28U;
	volatile int32_t t58 = -47;

	t58 = ((x3077+(x3078>>x3079))&x3080);

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3129 = -19LL;
	int8_t x3131 = 27;
	int64_t x3132 = 3543LL;

	t59 = ((x3129+(x3130>>x3131))&x3132);

	if (t59 != 3525LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3234 = 25U;
	static uint32_t x3235 = 4U;
	static uint16_t x3236 = 2517U;

	t60 = ((x3233+(x3234>>x3235))&x3236);

	if (t60 != 2384LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3314 = INT64_MAX;
	static uint8_t x3315 = 23U;
	int64_t t61 = 8135924613LL;

	t61 = ((x3313+(x3314>>x3315))&x3316);

	if (t61 != 126LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3337 = -1;
	volatile uint64_t x3338 = 3829270854LLU;
	uint8_t x3339 = 2U;
	volatile int64_t x3340 = INT64_MIN;
	static uint64_t t62 = 384451145LLU;

	t62 = ((x3337+(x3338>>x3339))&x3340);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3365 = INT16_MIN;
	uint8_t x3366 = 2U;
	volatile uint8_t x3367 = 5U;
	int16_t x3368 = INT16_MIN;
	int32_t t63 = 1;

	t63 = ((x3365+(x3366>>x3367))&x3368);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3461 = 11;
	volatile uint16_t x3464 = 32536U;
	volatile uint64_t t64 = 9188823524574LLU;

	t64 = ((x3461+(x3462>>x3463))&x3464);

	if (t64 != 8LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3469 = 2;
	uint64_t x3470 = UINT64_MAX;
	volatile uint8_t x3471 = 1U;
	int16_t x3472 = INT16_MAX;
	volatile uint64_t t65 = 3LLU;

	t65 = ((x3469+(x3470>>x3471))&x3472);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3477 = -1;
	uint8_t x3479 = 4U;
	int32_t x3480 = INT32_MIN;
	static volatile int32_t t66 = INT32_MIN;

	t66 = ((x3477+(x3478>>x3479))&x3480);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3481 = UINT16_MAX;
	uint64_t x3482 = 234680213970229983LLU;
	static uint8_t x3483 = 14U;
	uint32_t x3484 = 448997U;

	t67 = ((x3481+(x3482>>x3483))&x3484);

	if (t67 != 397317LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3510 = UINT32_MAX;
	static uint64_t t68 = 2046059LLU;

	t68 = ((x3509+(x3510>>x3511))&x3512);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3557 = -1LL;
	volatile int64_t x3560 = -1LL;
	int64_t t69 = -230861LL;

	t69 = ((x3557+(x3558>>x3559))&x3560);

	if (t69 != 4194302LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x3693 = UINT8_MAX;
	int64_t x3694 = 826864859LL;
	static uint16_t x3695 = 0U;
	int32_t x3696 = -1;
	int64_t t70 = -37213378LL;

	t70 = ((x3693+(x3694>>x3695))&x3696);

	if (t70 != 826865114LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3709 = 379U;
	int32_t x3710 = INT32_MAX;
	int64_t x3711 = 3LL;
	static int8_t x3712 = -1;

	t71 = ((x3709+(x3710>>x3711))&x3712);

	if (t71 != 268435834) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x3750 = UINT32_MAX;
	int64_t x3751 = 1LL;
	static int64_t x3752 = INT64_MIN;

	t72 = ((x3749+(x3750>>x3751))&x3752);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x3762 = UINT32_MAX;
	uint64_t x3764 = 129LLU;
	uint64_t t73 = 49137LLU;

	t73 = ((x3761+(x3762>>x3763))&x3764);

	if (t73 != 129LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x3794 = 33405180LLU;
	int8_t x3795 = 1;
	int64_t x3796 = INT64_MAX;
	uint64_t t74 = 1021664189560721268LLU;

	t74 = ((x3793+(x3794>>x3795))&x3796);

	if (t74 != 9223372034723994750LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x3838 = 122U;
	uint16_t x3839 = 3U;
	int16_t x3840 = -1;
	volatile int32_t t75 = 4909;

	t75 = ((x3837+(x3838>>x3839))&x3840);

	if (t75 != -113) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x3941 = INT8_MAX;
	volatile int32_t x3943 = 4;
	static int8_t x3944 = 46;
	uint64_t t76 = 26605537882LLU;

	t76 = ((x3941+(x3942>>x3943))&x3944);

	if (t76 != 10LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x3965 = -3638248LL;
	volatile uint16_t x3966 = UINT16_MAX;
	uint16_t x3967 = 0U;
	int64_t x3968 = INT64_MAX;
	static int64_t t77 = 8611087245689LL;

	t77 = ((x3965+(x3966>>x3967))&x3968);

	if (t77 != 9223372036851203095LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4061 = -1;
	uint64_t x4062 = UINT64_MAX;
	int8_t x4063 = 2;
	int64_t x4064 = -1807LL;
	uint64_t t78 = 1529169LLU;

	t78 = ((x4061+(x4062>>x4063))&x4064);

	if (t78 != 4611686018427386096LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4157 = INT32_MIN;
	int64_t x4158 = INT64_MAX;
	static uint64_t x4159 = 0LLU;
	static int8_t x4160 = 0;

	t79 = ((x4157+(x4158>>x4159))&x4160);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x4213 = 17053U;
	uint32_t x4214 = 13361842U;
	uint8_t x4215 = 13U;
	uint8_t x4216 = UINT8_MAX;

	t80 = ((x4213+(x4214>>x4215))&x4216);

	if (t80 != 252U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4237 = 0U;
	uint16_t x4238 = 117U;
	int16_t x4239 = 1;
	int32_t x4240 = 755030450;
	volatile int32_t t81 = 131694473;

	t81 = ((x4237+(x4238>>x4239))&x4240);

	if (t81 != 50) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4273 = 15014U;
	volatile int64_t x4274 = 268LL;
	int32_t x4276 = INT32_MIN;
	volatile int64_t t82 = 3645467829328LL;

	t82 = ((x4273+(x4274>>x4275))&x4276);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4285 = UINT8_MAX;
	int64_t x4286 = INT64_MAX;
	static int32_t x4287 = 1;
	int64_t t83 = -109553590537LL;

	t83 = ((x4285+(x4286>>x4287))&x4288);

	if (t83 != 126LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4401 = -1;
	int8_t x4402 = 3;
	static int8_t x4403 = 1;
	static volatile int32_t t84 = -6;

	t84 = ((x4401+(x4402>>x4403))&x4404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4445 = -163;
	volatile uint64_t x4446 = UINT64_MAX;
	int8_t x4447 = 4;
	int16_t x4448 = 1063;

	t85 = ((x4445+(x4446>>x4447))&x4448);

	if (t85 != 1028LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4509 = 5676526LL;
	uint8_t x4510 = UINT8_MAX;
	uint64_t x4511 = 18LLU;
	static int32_t x4512 = -307425910;
	volatile int64_t t86 = 162110959002LL;

	t86 = ((x4509+(x4510>>x4511))&x4512);

	if (t86 != 265610LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4545 = -1LL;
	uint64_t x4546 = 5131121419LLU;
	volatile uint8_t x4548 = UINT8_MAX;
	uint64_t t87 = 4LLU;

	t87 = ((x4545+(x4546>>x4547))&x4548);

	if (t87 != 132LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4597 = 0;
	uint64_t x4598 = 73549988524LLU;
	int8_t x4599 = 49;
	volatile uint64_t t88 = 1593170794562LLU;

	t88 = ((x4597+(x4598>>x4599))&x4600);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x4637 = 79U;
	static int32_t x4638 = 16109010;
	uint32_t x4640 = UINT32_MAX;
	volatile uint32_t t89 = 30978U;

	t89 = ((x4637+(x4638>>x4639))&x4640);

	if (t89 != 8054584U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x4697 = -13;
	volatile uint8_t x4698 = 1U;
	volatile uint8_t x4699 = 7U;
	uint8_t x4700 = 92U;

	t90 = ((x4697+(x4698>>x4699))&x4700);

	if (t90 != 80) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4713 = -1;
	static int64_t x4714 = INT64_MAX;
	int8_t x4715 = 1;
	uint64_t t91 = 8722358305639LLU;

	t91 = ((x4713+(x4714>>x4715))&x4716);

	if (t91 != 4611686018427387902LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4737 = 90U;
	uint16_t x4739 = 0U;
	uint64_t x4740 = UINT64_MAX;

	t92 = ((x4737+(x4738>>x4739))&x4740);

	if (t92 != 133LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4791 = 7U;

	t93 = ((x4789+(x4790>>x4791))&x4792);

	if (t93 != 20LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4793 = 7U;
	int32_t x4794 = INT32_MAX;
	uint64_t x4795 = 7LLU;
	volatile int32_t t94 = 24747679;

	t94 = ((x4793+(x4794>>x4795))&x4796);

	if (t94 != 16777222) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4805 = 1388U;
	uint32_t x4808 = UINT32_MAX;
	volatile uint32_t t95 = 6650U;

	t95 = ((x4805+(x4806>>x4807))&x4808);

	if (t95 != 268436843U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4821 = 1;
	volatile uint32_t x4822 = UINT32_MAX;
	int16_t x4823 = 12;
	int32_t x4824 = INT32_MIN;
	static volatile uint32_t t96 = 208527U;

	t96 = ((x4821+(x4822>>x4823))&x4824);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4865 = INT8_MIN;
	int64_t x4866 = 0LL;
	int64_t x4868 = -23766382575167LL;
	volatile int64_t t97 = -7838198LL;

	t97 = ((x4865+(x4866>>x4867))&x4868);

	if (t97 != -23766382575232LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4877 = 33955130910LL;
	volatile int16_t x4879 = 30;
	uint8_t x4880 = UINT8_MAX;
	volatile uint64_t t98 = 275884026LLU;

	t98 = ((x4877+(x4878>>x4879))&x4880);

	if (t98 != 30LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4901 = -15LL;
	uint32_t x4902 = 307155116U;
	uint8_t x4903 = 3U;
	uint16_t x4904 = 0U;
	volatile int64_t t99 = -73246681688LL;

	t99 = ((x4901+(x4902>>x4903))&x4904);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

