#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x14 = -621;
static volatile int16_t x15 = INT16_MAX;
uint8_t x16 = 6U;
volatile int32_t x65 = 139171;
uint16_t x66 = UINT16_MAX;
uint8_t x68 = 24U;
uint8_t x280 = 1U;
int16_t x642 = INT16_MIN;
int64_t x841 = 394916221720716983LL;
int8_t x842 = INT8_MIN;
static volatile uint32_t t12 = 55U;
int8_t x1245 = INT8_MIN;
int8_t x1248 = 1;
static uint16_t x1287 = UINT16_MAX;
static volatile int32_t x1288 = 5;
uint32_t t22 = 223U;
uint16_t x1615 = 44U;
static volatile int8_t x1642 = INT8_MIN;
uint64_t t25 = 19652920971LLU;
volatile uint64_t t27 = 5844596827LLU;
static volatile uint16_t x1942 = UINT16_MAX;
uint64_t t29 = 2899485490015199LLU;
uint32_t x2107 = 1620043U;
volatile uint8_t x2195 = 6U;
volatile uint32_t t32 = 470U;
volatile int16_t x2236 = 5;
static volatile int32_t t33 = -755570543;
int64_t x2257 = INT64_MIN;
uint8_t x2258 = 0U;


void f0(void) {
	uint32_t x13 = UINT32_MAX;
	uint32_t t0 = 7111119U;

	t0 = ((x13+x14)-(x15<<x16));

	if (t0 != 4292869586U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x67 = 46U;
	int32_t t1 = 490;

	t1 = ((x65+x66)-(x67<<x68));

	if (t1 != -771547230) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x221 = INT8_MIN;
	static int8_t x222 = 1;
	int16_t x223 = 71;
	int16_t x224 = 7;
	volatile int32_t t2 = -1;

	t2 = ((x221+x222)-(x223<<x224));

	if (t2 != -9215) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x277 = 34LLU;
	uint64_t x278 = 1851350023383LLU;
	static uint8_t x279 = 6U;
	volatile uint64_t t3 = 5670508597713142LLU;

	t3 = ((x277+x278)-(x279<<x280));

	if (t3 != 1851350023405LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x589 = -1;
	volatile int8_t x590 = INT8_MIN;
	static uint32_t x591 = 13309959U;
	int32_t x592 = 1;
	uint32_t t4 = 239748038U;

	t4 = ((x589+x590)-(x591<<x592));

	if (t4 != 4268347249U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x641 = 3821U;
	int64_t x643 = 3LL;
	static int16_t x644 = 58;
	static volatile int64_t t5 = 2711578975906386215LL;

	t5 = ((x641+x642)-(x643<<x644));

	if (t5 != -864691128455164179LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x737 = -38;
	int32_t x738 = -1;
	int64_t x739 = 3502766634175627194LL;
	int8_t x740 = 1;
	static volatile int64_t t6 = 87LL;

	t6 = ((x737+x738)-(x739<<x740));

	if (t6 != -7005533268351254427LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x773 = 358U;
	int32_t x774 = -1;
	volatile int16_t x775 = INT16_MAX;
	int16_t x776 = 4;
	static volatile int32_t t7 = 5;

	t7 = ((x773+x774)-(x775<<x776));

	if (t7 != -523915) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x777 = UINT32_MAX;
	static int8_t x778 = INT8_MAX;
	uint16_t x779 = 58U;
	volatile uint8_t x780 = 21U;
	static volatile uint32_t t8 = 23U;

	t8 = ((x777+x778)-(x779<<x780));

	if (t8 != 4173332606U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x817 = 813;
	int8_t x818 = INT8_MIN;
	uint8_t x819 = 27U;
	uint8_t x820 = 7U;
	int32_t t9 = 0;

	t9 = ((x817+x818)-(x819<<x820));

	if (t9 != -2771) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x843 = 3801268981525585LLU;
	volatile uint8_t x844 = 19U;
	static volatile uint64_t t10 = 7652461134284929776LLU;

	t10 = ((x841+x842)-(x843<<x844));

	if (t10 != 18130308469975934519LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x861 = 19U;
	uint8_t x862 = 0U;
	uint8_t x863 = UINT8_MAX;
	static uint16_t x864 = 3U;
	volatile int32_t t11 = 7;

	t11 = ((x861+x862)-(x863<<x864));

	if (t11 != -2021) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x957 = 1;
	uint8_t x958 = 12U;
	uint32_t x959 = 0U;
	int8_t x960 = 15;

	t12 = ((x957+x958)-(x959<<x960));

	if (t12 != 13U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x989 = INT32_MIN;
	int64_t x990 = 519935935845916920LL;
	volatile int32_t x991 = 26;
	int8_t x992 = 1;
	int64_t t13 = -24LL;

	t13 = ((x989+x990)-(x991<<x992));

	if (t13 != 519935933698433220LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1073 = 29LL;
	int16_t x1074 = INT16_MAX;
	uint16_t x1075 = UINT16_MAX;
	int8_t x1076 = 6;
	int64_t t14 = -3815LL;

	t14 = ((x1073+x1074)-(x1075<<x1076));

	if (t14 != -4161444LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1145 = INT16_MIN;
	int8_t x1146 = -13;
	static int16_t x1147 = 494;
	static volatile uint8_t x1148 = 11U;
	static int32_t t15 = 912640;

	t15 = ((x1145+x1146)-(x1147<<x1148));

	if (t15 != -1044493) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x1209 = INT32_MIN;
	static uint16_t x1210 = 1U;
	uint32_t x1211 = UINT32_MAX;
	uint64_t x1212 = 26LLU;
	uint32_t t16 = 11887474U;

	t16 = ((x1209+x1210)-(x1211<<x1212));

	if (t16 != 2214592513U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1213 = INT32_MIN;
	static uint64_t x1214 = UINT64_MAX;
	int64_t x1215 = 57827916622838LL;
	static uint16_t x1216 = 2U;
	static volatile uint64_t t17 = 514986348992117LLU;

	t17 = ((x1213+x1214)-(x1215<<x1216));

	if (t17 != 18446512759895576615LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1246 = UINT32_MAX;
	uint16_t x1247 = UINT16_MAX;
	static volatile uint32_t t18 = 118953757U;

	t18 = ((x1245+x1246)-(x1247<<x1248));

	if (t18 != 4294836097U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1257 = -1;
	int64_t x1258 = 254269489025565129LL;
	int16_t x1259 = 5204;
	volatile uint8_t x1260 = 1U;
	int64_t t19 = -8945LL;

	t19 = ((x1257+x1258)-(x1259<<x1260));

	if (t19 != 254269489025554720LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1285 = -79388618;
	int8_t x1286 = -1;
	int32_t t20 = -182236514;

	t20 = ((x1285+x1286)-(x1287<<x1288));

	if (t20 != -81485739) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1317 = 252012350U;
	int8_t x1318 = INT8_MIN;
	static uint16_t x1319 = UINT16_MAX;
	volatile uint32_t x1320 = 1U;
	static volatile uint32_t t21 = 510565U;

	t21 = ((x1317+x1318)-(x1319<<x1320));

	if (t21 != 251881152U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1445 = 100621855U;
	int16_t x1446 = INT16_MAX;
	volatile uint8_t x1447 = 4U;
	int16_t x1448 = 0;

	t22 = ((x1445+x1446)-(x1447<<x1448));

	if (t22 != 100654618U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1613 = 0;
	int64_t x1614 = -1LL;
	static int16_t x1616 = 23;
	volatile int64_t t23 = -14LL;

	t23 = ((x1613+x1614)-(x1615<<x1616));

	if (t23 != -369098753LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1633 = UINT64_MAX;
	uint8_t x1634 = UINT8_MAX;
	static uint64_t x1635 = 17564555226876LLU;
	int8_t x1636 = 4;
	static uint64_t t24 = 19656997375LLU;

	t24 = ((x1633+x1634)-(x1635<<x1636));

	if (t24 != 18446463040825921854LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1641 = 342LLU;
	volatile uint8_t x1643 = 0U;
	uint16_t x1644 = 5U;

	t25 = ((x1641+x1642)-(x1643<<x1644));

	if (t25 != 214LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1685 = 25U;
	int16_t x1686 = INT16_MAX;
	uint8_t x1687 = 40U;
	int8_t x1688 = 1;
	static int32_t t26 = 6124;

	t26 = ((x1685+x1686)-(x1687<<x1688));

	if (t26 != 32712) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1809 = 198172429LLU;
	int16_t x1810 = INT16_MIN;
	int32_t x1811 = 0;
	uint8_t x1812 = 0U;

	t27 = ((x1809+x1810)-(x1811<<x1812));

	if (t27 != 198139661LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1925 = INT32_MAX;
	int64_t x1926 = -1LL;
	uint64_t x1927 = UINT64_MAX;
	uint8_t x1928 = 4U;
	static volatile uint64_t t28 = 128899677464LLU;

	t28 = ((x1925+x1926)-(x1927<<x1928));

	if (t28 != 2147483662LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1941 = 1561;
	volatile uint64_t x1943 = UINT64_MAX;
	uint16_t x1944 = 1U;

	t29 = ((x1941+x1942)-(x1943<<x1944));

	if (t29 != 67098LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2105 = -1;
	volatile int8_t x2106 = -6;
	int16_t x2108 = 0;
	static uint32_t t30 = 457993458U;

	t30 = ((x2105+x2106)-(x2107<<x2108));

	if (t30 != 4293347246U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x2181 = -1;
	static volatile uint16_t x2182 = UINT16_MAX;
	static int64_t x2183 = 292684330LL;
	uint16_t x2184 = 4U;
	static volatile int64_t t31 = -272764373421125LL;

	t31 = ((x2181+x2182)-(x2183<<x2184));

	if (t31 != -4682883746LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x2193 = INT32_MIN;
	uint32_t x2194 = 101U;
	int8_t x2196 = 0;

	t32 = ((x2193+x2194)-(x2195<<x2196));

	if (t32 != 2147483743U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2233 = INT16_MAX;
	int8_t x2234 = 11;
	volatile int8_t x2235 = INT8_MAX;

	t33 = ((x2233+x2234)-(x2235<<x2236));

	if (t33 != 28714) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2259 = 91774LLU;
	static int8_t x2260 = 0;
	uint64_t t34 = 226597710089944324LLU;

	t34 = ((x2257+x2258)-(x2259<<x2260));

	if (t34 != 9223372036854684034LLU) { NG(); } else { ; }
	
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


    return 0;
}

