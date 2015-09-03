#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
volatile uint64_t t0 = 345829887470083387LLU;
volatile uint64_t t1 = 1107LLU;
volatile uint64_t t2 = 129770838759LLU;
uint32_t x124 = 56846510U;
static int8_t x136 = -7;
volatile int64_t x409 = 222192189654LL;
volatile uint16_t x411 = 6U;
uint64_t x442 = 4126537832659434LLU;
static int64_t x453 = 415366547222LL;
static uint8_t x455 = 1U;
int64_t t8 = 21456677131556LL;
static uint64_t x646 = UINT64_MAX;
int64_t x647 = 5LL;
static uint8_t x886 = 99U;
int32_t t11 = 20559;
volatile int64_t x913 = 183130077043718781LL;
int16_t x915 = 8;
int64_t t13 = -335LL;
int8_t x982 = INT8_MAX;
int32_t x984 = -58323;
static int8_t x1060 = INT8_MAX;
volatile uint32_t x1212 = 79128402U;
int32_t x1248 = -1268;
uint64_t x1250 = 57438471264730290LLU;
static int16_t x1296 = INT16_MAX;
int64_t t20 = 79LL;
static uint8_t x1514 = 2U;
int32_t t21 = 332;
static volatile uint64_t x1544 = 18612267145LLU;
int64_t t23 = -6LL;
volatile uint8_t x1670 = 29U;
static uint64_t t29 = 4LLU;
static uint64_t x2125 = UINT64_MAX;
int16_t x2169 = 4480;
volatile uint16_t x2170 = UINT16_MAX;
uint32_t t31 = 6812U;
int32_t x2196 = INT32_MAX;
int32_t x2218 = 443;
volatile int8_t x2219 = 0;
int32_t t33 = -977141;
volatile int32_t x2275 = 8;
volatile int32_t t34 = 0;
static int16_t x2349 = INT16_MIN;
int8_t x2351 = 1;
uint64_t x2365 = 275176288538LLU;
volatile int8_t x2545 = INT8_MAX;
uint8_t x2651 = 0U;


void f0(void) {
	uint8_t x5 = 100U;
	int8_t x7 = 11;
	volatile uint64_t x8 = 659015276404413875LLU;

	t0 = (x5-((x6<<x7)-x8));

	if (t0 != 659015272109448727LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x21 = INT32_MIN;
	static int8_t x22 = INT8_MAX;
	int8_t x23 = 2;
	uint64_t x24 = 1770345250LLU;

	t1 = (x21-((x22<<x23)-x24));

	if (t1 != 18446744073332412710LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 8914252267LLU;
	volatile uint8_t x43 = 1U;
	uint64_t x44 = UINT64_MAX;

	t2 = (x41-((x42<<x43)-x44));

	if (t2 != 18446744055881047336LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x121 = 465805485693LLU;
	uint32_t x122 = 758277U;
	uint16_t x123 = 0U;
	static uint64_t t3 = 914244828321347801LLU;

	t3 = (x121-((x122<<x123)-x124));

	if (t3 != 461566606630LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x133 = 2644167753293576LL;
	uint32_t x134 = 54U;
	static volatile uint16_t x135 = 11U;
	int64_t t4 = 23063LL;

	t4 = (x133-((x134<<x135)-x136));

	if (t4 != 2644167753182977LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x209 = 8082800U;
	uint64_t x210 = UINT64_MAX;
	static uint16_t x211 = 0U;
	uint64_t x212 = UINT64_MAX;
	static volatile uint64_t t5 = 60114404LLU;

	t5 = (x209-((x210<<x211)-x212));

	if (t5 != 8082800LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x410 = INT16_MAX;
	int32_t x412 = -1;
	volatile int64_t t6 = 27462340604548800LL;

	t6 = (x409-((x410<<x411)-x412));

	if (t6 != 222190092565LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x441 = 53384;
	uint16_t x443 = 35U;
	uint32_t x444 = UINT32_MAX;
	volatile uint64_t t7 = 2630498LLU;

	t7 = (x441-((x442<<x443)-x444));

	if (t7 != 5956064043964878983LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x454 = UINT32_MAX;
	uint8_t x456 = 0U;

	t8 = (x453-((x454<<x455)-x456));

	if (t8 != 411071579928LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x529 = INT8_MAX;
	static uint64_t x530 = 895475LLU;
	int8_t x531 = 0;
	int16_t x532 = 40;
	uint64_t t9 = 3400035LLU;

	t9 = (x529-((x530<<x531)-x532));

	if (t9 != 18446744073708656308LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x645 = 16U;
	int16_t x648 = INT16_MIN;
	uint64_t t10 = 831460108597271837LLU;

	t10 = (x645-((x646<<x647)-x648));

	if (t10 != 18446744073709518896LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x885 = -1;
	volatile int16_t x887 = 7;
	uint16_t x888 = 989U;

	t11 = (x885-((x886<<x887)-x888));

	if (t11 != -11684) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x901 = INT64_MIN;
	uint64_t x902 = 272LLU;
	static uint16_t x903 = 1U;
	volatile uint32_t x904 = UINT32_MAX;
	static uint64_t t12 = 117420191867LLU;

	t12 = (x901-((x902<<x903)-x904));

	if (t12 != 9223372041149742559LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x914 = 13U;
	uint16_t x916 = 11U;

	t13 = (x913-((x914<<x915)-x916));

	if (t13 != 183130077043715464LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x981 = 208595LLU;
	uint8_t x983 = 6U;
	uint64_t t14 = 140613LLU;

	t14 = (x981-((x982<<x983)-x984));

	if (t14 != 142144LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1057 = 843U;
	uint64_t x1058 = 885947280426049587LLU;
	uint8_t x1059 = 3U;
	uint64_t t15 = 462709847LLU;

	t15 = (x1057-((x1058<<x1059)-x1060));

	if (t15 != 11359165830301155890LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x1209 = -1;
	uint64_t x1210 = UINT64_MAX;
	uint16_t x1211 = 10U;
	static volatile uint64_t t16 = 3969279378603276LLU;

	t16 = (x1209-((x1210<<x1211)-x1212));

	if (t16 != 79129425LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1237 = INT8_MAX;
	int32_t x1238 = 43;
	uint8_t x1239 = 1U;
	volatile int8_t x1240 = INT8_MIN;
	int32_t t17 = -45903905;

	t17 = (x1237-((x1238<<x1239)-x1240));

	if (t17 != -87) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x1245 = 556LL;
	uint64_t x1246 = 4344LLU;
	static int32_t x1247 = 0;
	static volatile uint64_t t18 = 15LLU;

	t18 = (x1245-((x1246<<x1247)-x1248));

	if (t18 != 18446744073709546560LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1249 = -1;
	static volatile uint8_t x1251 = 21U;
	static int64_t x1252 = INT64_MIN;
	volatile uint64_t t19 = 2517586388580468LLU;

	t19 = (x1249-((x1250<<x1251)-x1252));

	if (t19 != 9257283588569694207LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1293 = -1LL;
	int16_t x1294 = INT16_MAX;
	uint16_t x1295 = 1U;

	t20 = (x1293-((x1294<<x1295)-x1296));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1513 = UINT16_MAX;
	int8_t x1515 = 0;
	uint8_t x1516 = UINT8_MAX;

	t21 = (x1513-((x1514<<x1515)-x1516));

	if (t21 != 65788) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1541 = -1;
	int16_t x1542 = 50;
	uint32_t x1543 = 1U;
	uint64_t t22 = 7311042780003213411LLU;

	t22 = (x1541-((x1542<<x1543)-x1544));

	if (t22 != 18612267044LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1565 = INT64_MAX;
	static int16_t x1566 = INT16_MAX;
	int8_t x1567 = 1;
	static uint8_t x1568 = 6U;

	t23 = (x1565-((x1566<<x1567)-x1568));

	if (t23 != 9223372036854710279LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1585 = -1;
	static int16_t x1586 = 24;
	volatile int8_t x1587 = 0;
	uint8_t x1588 = UINT8_MAX;
	int32_t t24 = 15;

	t24 = (x1585-((x1586<<x1587)-x1588));

	if (t24 != 230) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1665 = 1;
	static int64_t x1666 = 4089LL;
	int8_t x1667 = 5;
	int64_t x1668 = -443034715269LL;
	volatile int64_t t25 = -387691LL;

	t25 = (x1665-((x1666<<x1667)-x1668));

	if (t25 != -443034846116LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1669 = UINT64_MAX;
	uint8_t x1671 = 18U;
	uint16_t x1672 = 1U;
	uint64_t t26 = 3246472541LLU;

	t26 = (x1669-((x1670<<x1671)-x1672));

	if (t26 != 18446744073701949440LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1753 = INT16_MIN;
	uint8_t x1754 = 16U;
	uint8_t x1755 = 24U;
	int8_t x1756 = INT8_MAX;
	volatile int32_t t27 = 57746882;

	t27 = (x1753-((x1754<<x1755)-x1756));

	if (t27 != -268468097) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1821 = 4U;
	int8_t x1822 = 48;
	static volatile uint8_t x1823 = 2U;
	volatile int8_t x1824 = INT8_MIN;
	static int32_t t28 = 1207;

	t28 = (x1821-((x1822<<x1823)-x1824));

	if (t28 != -316) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2053 = -261309981994265041LL;
	uint64_t x2054 = UINT64_MAX;
	int16_t x2055 = 20;
	uint16_t x2056 = 27377U;

	t29 = (x2053-((x2054<<x2055)-x2056));

	if (t29 != 18185434091716362528LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2126 = UINT64_MAX;
	uint32_t x2127 = 7U;
	int16_t x2128 = INT16_MAX;
	volatile uint64_t t30 = 62671433499871120LLU;

	t30 = (x2125-((x2126<<x2127)-x2128));

	if (t30 != 32894LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2171 = 1U;
	static uint32_t x2172 = UINT32_MAX;

	t31 = (x2169-((x2170<<x2171)-x2172));

	if (t31 != 4294840705U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2193 = 951095804U;
	static volatile uint64_t x2194 = 31487968LLU;
	uint8_t x2195 = 14U;
	volatile uint64_t t32 = 32599428935830LLU;

	t32 = (x2193-((x2194<<x2195)-x2196));

	if (t32 != 18446743560909263355LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2217 = -1;
	int8_t x2220 = INT8_MAX;

	t33 = (x2217-((x2218<<x2219)-x2220));

	if (t33 != -317) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2273 = INT8_MIN;
	int16_t x2274 = 15725;
	static int16_t x2276 = 12;

	t34 = (x2273-((x2274<<x2275)-x2276));

	if (t34 != -4025716) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2350 = 58806255LLU;
	uint32_t x2352 = 21U;
	uint64_t t35 = 1748027LLU;

	t35 = (x2349-((x2350<<x2351)-x2352));

	if (t35 != 18446744073591906359LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2366 = 1U;
	volatile uint8_t x2367 = 18U;
	int64_t x2368 = -1LL;
	uint64_t t36 = 7LLU;

	t36 = (x2365-((x2366<<x2367)-x2368));

	if (t36 != 275176026393LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2429 = -108;
	volatile uint32_t x2430 = UINT32_MAX;
	uint8_t x2431 = 6U;
	volatile int16_t x2432 = INT16_MAX;
	uint32_t t37 = 10136869U;

	t37 = (x2429-((x2430<<x2431)-x2432));

	if (t37 != 32723U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2497 = 61U;
	static uint64_t x2498 = 1990282365LLU;
	int8_t x2499 = 60;
	int32_t x2500 = INT32_MIN;
	uint64_t t38 = 1724404631LLU;

	t38 = (x2497-((x2498<<x2499)-x2500));

	if (t38 != 3458764511673057341LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2546 = INT64_MAX;
	volatile uint8_t x2547 = 0U;
	volatile int32_t x2548 = INT32_MAX;
	volatile int64_t t39 = 418199254LL;

	t39 = (x2545-((x2546<<x2547)-x2548));

	if (t39 != -9223372034707292033LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2601 = 56724678318490LLU;
	int8_t x2602 = 28;
	int16_t x2603 = 0;
	int16_t x2604 = INT16_MIN;
	volatile uint64_t t40 = 494747849LLU;

	t40 = (x2601-((x2602<<x2603)-x2604));

	if (t40 != 56724678285694LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2649 = 3818611966100897267LL;
	uint8_t x2650 = 26U;
	int8_t x2652 = -2;
	int64_t t41 = 8196771120182681LL;

	t41 = (x2649-((x2650<<x2651)-x2652));

	if (t41 != 3818611966100897239LL) { NG(); } else { ; }
	
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


    return 0;
}

