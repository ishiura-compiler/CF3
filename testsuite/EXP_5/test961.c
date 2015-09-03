#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x127 = 9;
static int32_t x209 = -4023376;
uint64_t x210 = UINT64_MAX;
int64_t x357 = 829964797646544377LL;
volatile uint8_t x498 = 45U;
volatile uint64_t x669 = 1092862015LLU;
uint8_t x671 = 3U;
static uint32_t x672 = UINT32_MAX;
uint64_t t9 = 33337LLU;
volatile int32_t x785 = INT32_MIN;
volatile uint32_t x786 = 97U;
uint16_t x943 = 1U;
int32_t t14 = 0;
uint16_t x1489 = UINT16_MAX;
uint64_t x1490 = UINT64_MAX;
uint8_t x1541 = 44U;
int16_t x1811 = 0;
int8_t x2093 = INT8_MIN;
volatile uint64_t x2094 = 6919342550030898536LLU;
uint16_t x2095 = 1U;
volatile int64_t t23 = -5229699LL;
static int8_t x2140 = 0;
int8_t x2164 = -1;
int8_t x2273 = 21;
uint16_t x2319 = 3U;
static int64_t t29 = INT64_MAX;
int16_t x2805 = -1;
int8_t x2806 = INT8_MAX;
static volatile int32_t t32 = 812771;
int8_t x2821 = INT8_MIN;
volatile uint8_t x2823 = 2U;
volatile int16_t x2824 = INT16_MAX;
uint32_t x2848 = 3100U;
int32_t x2997 = -1;
int64_t x3049 = 290609478847LL;
volatile int8_t x3083 = 3;
int64_t x3256 = INT64_MIN;
volatile int32_t t40 = -130;
uint16_t x3454 = 22443U;
static int32_t x3472 = 95;
int32_t t42 = -243184;
static uint16_t x3783 = 0U;
int32_t x3784 = -2734;
int8_t x3845 = INT8_MIN;
static int64_t x3847 = 0LL;
int8_t x4049 = INT8_MIN;
int8_t x4085 = INT8_MAX;
volatile uint8_t x4087 = 0U;
int32_t x4101 = INT32_MAX;
static uint16_t x4206 = 584U;
static int8_t x4231 = 1;
volatile int64_t t53 = INT64_MIN;
static int64_t x4286 = 2915LL;
uint16_t x4287 = 13U;
volatile int32_t x4304 = -10477810;
uint8_t x4349 = 25U;
volatile int8_t x4429 = INT8_MAX;
uint64_t x4430 = UINT64_MAX;
int16_t x4431 = 1;
int32_t x4449 = INT32_MAX;
static int32_t t61 = -20;
uint16_t x4515 = 22U;
int32_t x4542 = 94591;
static uint64_t t63 = 173147664LLU;
static int16_t x4855 = 0;
volatile uint32_t x4978 = 2664U;
static uint16_t x5029 = 2853U;
volatile int16_t x5031 = 1;
volatile int32_t t67 = 33;
static volatile int64_t t68 = -14299130LL;
int64_t x5189 = INT64_MIN;
int64_t x5220 = INT64_MAX;
uint64_t x5311 = 3LLU;
volatile int64_t t73 = -14371LL;
uint64_t x5442 = 621547638620198506LLU;
static int64_t x5444 = INT64_MAX;
volatile int32_t t74 = -15;
uint16_t x5463 = 0U;
volatile int32_t t76 = 127;
int16_t x5513 = -1;
uint16_t x5522 = 8U;
int64_t x5524 = INT64_MIN;
int64_t t78 = INT64_MIN;
volatile int32_t x5545 = -329;
uint16_t x5546 = UINT16_MAX;
uint64_t x5674 = UINT64_MAX;
volatile int32_t x5721 = -387844;
int32_t t83 = 18;
uint8_t x5763 = 12U;
int64_t x5845 = INT64_MAX;
uint64_t x5846 = 1112752963530165162LLU;
volatile uint32_t x5847 = 4U;
volatile int32_t t88 = 24973;
int32_t x6101 = INT32_MAX;
volatile uint8_t x6104 = UINT8_MAX;
int64_t x6107 = 3LL;
int16_t x6108 = 2180;
uint8_t x6142 = 38U;
uint8_t x6144 = 0U;
volatile uint32_t x6268 = 145U;
volatile uint16_t x6302 = UINT16_MAX;
static uint16_t x6303 = 2U;
static int32_t t93 = 0;
volatile uint64_t x6334 = 103412779LLU;
int8_t x6355 = 1;
int64_t x6361 = INT64_MIN;
int8_t x6363 = 1;
uint16_t x6561 = 7U;
int64_t x6562 = 22097267678319LL;
int32_t t99 = -1;


void f0(void) {
	volatile int8_t x45 = 38;
	int8_t x46 = INT8_MAX;
	uint16_t x47 = 0U;
	volatile int16_t x48 = -1;
	int32_t t0 = -3;

	t0 = (x45|((x46<<x47)<x48));

	if (t0 != 38) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x125 = 15851;
	static uint16_t x126 = UINT16_MAX;
	uint64_t x128 = 81314LLU;
	volatile int32_t t1 = -2;

	t1 = (x125|((x126<<x127)<x128));

	if (t1 != 15851) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x185 = -1LL;
	uint16_t x186 = 193U;
	volatile int8_t x187 = 5;
	static uint64_t x188 = 5381LLU;
	volatile int64_t t2 = 3770270991962597LL;

	t2 = (x185|((x186<<x187)<x188));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x211 = 1U;
	int16_t x212 = 121;
	int32_t t3 = -1817;

	t3 = (x209|((x210<<x211)<x212));

	if (t3 != -4023376) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 85U;
	volatile uint16_t x355 = 16U;
	int64_t x356 = INT64_MIN;
	static volatile int32_t t4 = 700872387;

	t4 = (x353|((x354<<x355)<x356));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x358 = 383283943106LLU;
	uint32_t x359 = 10U;
	static int8_t x360 = INT8_MAX;
	int64_t t5 = 1990564LL;

	t5 = (x357|((x358<<x359)<x360));

	if (t5 != 829964797646544377LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x497 = -1;
	static uint8_t x499 = 15U;
	static int64_t x500 = -357973LL;
	static volatile int32_t t6 = -165;

	t6 = (x497|((x498<<x499)<x500));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x601 = 449LLU;
	uint64_t x602 = UINT64_MAX;
	uint16_t x603 = 39U;
	uint16_t x604 = 2452U;
	volatile uint64_t t7 = 32958154LLU;

	t7 = (x601|((x602<<x603)<x604));

	if (t7 != 449LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x661 = 88U;
	uint8_t x662 = UINT8_MAX;
	int8_t x663 = 6;
	int64_t x664 = 325751253658LL;
	volatile int32_t t8 = 15;

	t8 = (x661|((x662<<x663)<x664));

	if (t8 != 89) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x670 = INT16_MAX;

	t9 = (x669|((x670<<x671)<x672));

	if (t9 != 1092862015LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x787 = 1U;
	int32_t x788 = -1;
	volatile int32_t t10 = -124277;

	t10 = (x785|((x786<<x787)<x788));

	if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x817 = INT16_MIN;
	volatile uint64_t x818 = 62032808LLU;
	int8_t x819 = 0;
	int16_t x820 = INT16_MAX;
	volatile int32_t t11 = 1992628;

	t11 = (x817|((x818<<x819)<x820));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x941 = 14;
	int16_t x942 = 8;
	uint8_t x944 = 9U;
	int32_t t12 = 0;

	t12 = (x941|((x942<<x943)<x944));

	if (t12 != 14) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x1073 = INT8_MAX;
	int64_t x1074 = 17313LL;
	int16_t x1075 = 1;
	int16_t x1076 = -247;
	static volatile int32_t t13 = -8;

	t13 = (x1073|((x1074<<x1075)<x1076));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1133 = 1;
	int32_t x1134 = 239642502;
	int16_t x1135 = 2;
	int16_t x1136 = -7;

	t14 = (x1133|((x1134<<x1135)<x1136));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1345 = INT16_MIN;
	uint8_t x1346 = 0U;
	uint8_t x1347 = 0U;
	int16_t x1348 = INT16_MIN;
	int32_t t15 = 167;

	t15 = (x1345|((x1346<<x1347)<x1348));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1491 = 7U;
	static int32_t x1492 = INT32_MIN;
	volatile int32_t t16 = -4;

	t16 = (x1489|((x1490<<x1491)<x1492));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1542 = INT64_MAX;
	int32_t x1543 = 0;
	uint64_t x1544 = 2241474597316451050LLU;
	int32_t t17 = 1302009;

	t17 = (x1541|((x1542<<x1543)<x1544));

	if (t17 != 44) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1593 = INT8_MIN;
	static uint8_t x1594 = 32U;
	uint8_t x1595 = 0U;
	uint64_t x1596 = UINT64_MAX;
	volatile int32_t t18 = 16;

	t18 = (x1593|((x1594<<x1595)<x1596));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1809 = UINT8_MAX;
	volatile uint64_t x1810 = UINT64_MAX;
	int16_t x1812 = -11489;
	volatile int32_t t19 = 0;

	t19 = (x1809|((x1810<<x1811)<x1812));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1933 = 0U;
	uint64_t x1934 = 4121527LLU;
	uint64_t x1935 = 18LLU;
	volatile int64_t x1936 = -1LL;
	volatile uint32_t t20 = 24094159U;

	t20 = (x1933|((x1934<<x1935)<x1936));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x2025 = 32U;
	volatile uint16_t x2026 = UINT16_MAX;
	uint8_t x2027 = 0U;
	uint32_t x2028 = 83118U;
	static volatile int32_t t21 = -2463;

	t21 = (x2025|((x2026<<x2027)<x2028));

	if (t21 != 33) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x2096 = 1744658U;
	int32_t t22 = 29523446;

	t22 = (x2093|((x2094<<x2095)<x2096));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x2121 = -1LL;
	static uint64_t x2122 = 0LLU;
	int16_t x2123 = 0;
	int8_t x2124 = 21;

	t23 = (x2121|((x2122<<x2123)<x2124));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x2137 = 1901887648309LLU;
	volatile uint16_t x2138 = UINT16_MAX;
	volatile uint16_t x2139 = 3U;
	volatile uint64_t t24 = 1630591221268303LLU;

	t24 = (x2137|((x2138<<x2139)<x2140));

	if (t24 != 1901887648309LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x2161 = -387;
	uint16_t x2162 = 115U;
	int8_t x2163 = 1;
	static int32_t t25 = -556947460;

	t25 = (x2161|((x2162<<x2163)<x2164));

	if (t25 != -387) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x2213 = 99056198U;
	uint32_t x2214 = 5682U;
	static int8_t x2215 = 27;
	int32_t x2216 = INT32_MAX;
	uint32_t t26 = 1691058U;

	t26 = (x2213|((x2214<<x2215)<x2216));

	if (t26 != 99056198U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2274 = 2;
	uint8_t x2275 = 9U;
	volatile int8_t x2276 = INT8_MIN;
	volatile int32_t t27 = -66350052;

	t27 = (x2273|((x2274<<x2275)<x2276));

	if (t27 != 21) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2317 = -33;
	volatile uint64_t x2318 = UINT64_MAX;
	int8_t x2320 = INT8_MIN;
	volatile int32_t t28 = -1294;

	t28 = (x2317|((x2318<<x2319)<x2320));

	if (t28 != -33) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2425 = INT64_MAX;
	uint8_t x2426 = UINT8_MAX;
	volatile int8_t x2427 = 1;
	int16_t x2428 = -37;

	t29 = (x2425|((x2426<<x2427)<x2428));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x2697 = UINT16_MAX;
	uint32_t x2698 = UINT32_MAX;
	uint8_t x2699 = 0U;
	uint32_t x2700 = UINT32_MAX;
	volatile int32_t t30 = -86;

	t30 = (x2697|((x2698<<x2699)<x2700));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x2757 = 176U;
	uint64_t x2758 = UINT64_MAX;
	uint32_t x2759 = 7U;
	int64_t x2760 = INT64_MIN;
	static volatile int32_t t31 = -9;

	t31 = (x2757|((x2758<<x2759)<x2760));

	if (t31 != 176) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2807 = 3;
	int8_t x2808 = 0;

	t32 = (x2805|((x2806<<x2807)<x2808));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2822 = UINT32_MAX;
	int32_t t33 = 1;

	t33 = (x2821|((x2822<<x2823)<x2824));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2845 = INT16_MIN;
	int8_t x2846 = 1;
	int64_t x2847 = 0LL;
	static volatile int32_t t34 = 358849687;

	t34 = (x2845|((x2846<<x2847)<x2848));

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2949 = 1;
	uint16_t x2950 = 3105U;
	int8_t x2951 = 7;
	static uint32_t x2952 = 2069432796U;
	int32_t t35 = -7420356;

	t35 = (x2949|((x2950<<x2951)<x2952));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2998 = 350204848660LLU;
	uint8_t x2999 = 9U;
	int8_t x3000 = 0;
	static volatile int32_t t36 = 402;

	t36 = (x2997|((x2998<<x2999)<x3000));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x3001 = INT64_MIN;
	int8_t x3002 = INT8_MAX;
	static uint8_t x3003 = 0U;
	int64_t x3004 = INT64_MAX;
	volatile int64_t t37 = -13LL;

	t37 = (x3001|((x3002<<x3003)<x3004));

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x3050 = INT8_MAX;
	uint8_t x3051 = 23U;
	static uint8_t x3052 = 6U;
	int64_t t38 = 430364LL;

	t38 = (x3049|((x3050<<x3051)<x3052));

	if (t38 != 290609478847LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3081 = 582089367LLU;
	static uint32_t x3082 = 12247082U;
	volatile int8_t x3084 = -15;
	uint64_t t39 = 10027352010LLU;

	t39 = (x3081|((x3082<<x3083)<x3084));

	if (t39 != 582089367LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3253 = 1;
	uint16_t x3254 = 31U;
	int8_t x3255 = 3;

	t40 = (x3253|((x3254<<x3255)<x3256));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3453 = INT64_MIN;
	static int8_t x3455 = 0;
	int32_t x3456 = -1;
	int64_t t41 = INT64_MIN;

	t41 = (x3453|((x3454<<x3455)<x3456));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x3469 = 260213;
	uint64_t x3470 = 3915307737867LLU;
	uint8_t x3471 = 38U;

	t42 = (x3469|((x3470<<x3471)<x3472));

	if (t42 != 260213) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x3761 = -1;
	uint8_t x3762 = UINT8_MAX;
	uint16_t x3763 = 0U;
	static uint8_t x3764 = 5U;
	int32_t t43 = 0;

	t43 = (x3761|((x3762<<x3763)<x3764));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x3781 = 12U;
	volatile uint16_t x3782 = 4390U;
	static int32_t t44 = -1908;

	t44 = (x3781|((x3782<<x3783)<x3784));

	if (t44 != 12) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3837 = INT64_MIN;
	int8_t x3838 = 0;
	volatile int16_t x3839 = 10;
	int64_t x3840 = -959460228376084546LL;
	static int64_t t45 = INT64_MIN;

	t45 = (x3837|((x3838<<x3839)<x3840));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3846 = 3736243U;
	int32_t x3848 = -1;
	volatile int32_t t46 = -3209;

	t46 = (x3845|((x3846<<x3847)<x3848));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x4025 = 27444;
	static volatile int16_t x4026 = INT16_MAX;
	volatile int32_t x4027 = 0;
	static int64_t x4028 = INT64_MIN;
	volatile int32_t t47 = -8587;

	t47 = (x4025|((x4026<<x4027)<x4028));

	if (t47 != 27444) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x4050 = INT16_MAX;
	int8_t x4051 = 0;
	int64_t x4052 = INT64_MIN;
	volatile int32_t t48 = 3;

	t48 = (x4049|((x4050<<x4051)<x4052));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x4061 = 8;
	uint32_t x4062 = 11239U;
	static uint8_t x4063 = 13U;
	int8_t x4064 = INT8_MIN;
	volatile int32_t t49 = 0;

	t49 = (x4061|((x4062<<x4063)<x4064));

	if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x4086 = UINT32_MAX;
	int16_t x4088 = -55;
	int32_t t50 = 727573670;

	t50 = (x4085|((x4086<<x4087)<x4088));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x4102 = 15LLU;
	int16_t x4103 = 21;
	uint8_t x4104 = UINT8_MAX;
	int32_t t51 = INT32_MAX;

	t51 = (x4101|((x4102<<x4103)<x4104));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x4205 = INT64_MAX;
	uint8_t x4207 = 2U;
	volatile uint32_t x4208 = 7680U;
	volatile int64_t t52 = INT64_MAX;

	t52 = (x4205|((x4206<<x4207)<x4208));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x4229 = INT64_MIN;
	static int16_t x4230 = INT16_MAX;
	static uint16_t x4232 = 18033U;

	t53 = (x4229|((x4230<<x4231)<x4232));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x4269 = -1;
	static volatile uint8_t x4270 = 1U;
	int32_t x4271 = 1;
	volatile int16_t x4272 = 0;
	int32_t t54 = 0;

	t54 = (x4269|((x4270<<x4271)<x4272));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x4285 = 0U;
	static int8_t x4288 = INT8_MIN;
	volatile int32_t t55 = -664659147;

	t55 = (x4285|((x4286<<x4287)<x4288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x4301 = -578;
	uint8_t x4302 = UINT8_MAX;
	int32_t x4303 = 7;
	volatile int32_t t56 = -56678;

	t56 = (x4301|((x4302<<x4303)<x4304));

	if (t56 != -578) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x4350 = 14712657;
	static int64_t x4351 = 0LL;
	uint8_t x4352 = 13U;
	int32_t t57 = 728352950;

	t57 = (x4349|((x4350<<x4351)<x4352));

	if (t57 != 25) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x4377 = INT64_MIN;
	int16_t x4378 = INT16_MAX;
	uint16_t x4379 = 2U;
	volatile int64_t x4380 = INT64_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (x4377|((x4378<<x4379)<x4380));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4432 = 25868U;
	int32_t t59 = -1634;

	t59 = (x4429|((x4430<<x4431)<x4432));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4450 = 1973U;
	static int8_t x4451 = 1;
	volatile uint16_t x4452 = UINT16_MAX;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x4449|((x4450<<x4451)<x4452));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4469 = -1;
	static uint64_t x4470 = 1040399734LLU;
	uint16_t x4471 = 51U;
	static int16_t x4472 = -1;

	t61 = (x4469|((x4470<<x4471)<x4472));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4513 = INT32_MIN;
	int8_t x4514 = INT8_MAX;
	volatile uint16_t x4516 = 0U;
	volatile int32_t t62 = INT32_MIN;

	t62 = (x4513|((x4514<<x4515)<x4516));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4541 = 1050LLU;
	volatile uint16_t x4543 = 6U;
	static volatile int16_t x4544 = -136;

	t63 = (x4541|((x4542<<x4543)<x4544));

	if (t63 != 1050LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4837 = 10;
	uint32_t x4838 = UINT32_MAX;
	int16_t x4839 = 1;
	uint8_t x4840 = 3U;
	int32_t t64 = -482968868;

	t64 = (x4837|((x4838<<x4839)<x4840));

	if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4853 = 31802U;
	uint32_t x4854 = 313U;
	volatile uint8_t x4856 = 22U;
	uint32_t t65 = 0U;

	t65 = (x4853|((x4854<<x4855)<x4856));

	if (t65 != 31802U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x4977 = UINT64_MAX;
	static uint16_t x4979 = 18U;
	uint64_t x4980 = 3423543891533LLU;
	uint64_t t66 = UINT64_MAX;

	t66 = (x4977|((x4978<<x4979)<x4980));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x5030 = 727148;
	int32_t x5032 = INT32_MIN;

	t67 = (x5029|((x5030<<x5031)<x5032));

	if (t67 != 2853) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x5129 = INT64_MIN;
	int8_t x5130 = INT8_MAX;
	int8_t x5131 = 0;
	uint64_t x5132 = 571585478680LLU;

	t68 = (x5129|((x5130<<x5131)<x5132));

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5190 = INT16_MAX;
	int64_t x5191 = 14LL;
	int32_t x5192 = INT32_MIN;
	static int64_t t69 = INT64_MIN;

	t69 = (x5189|((x5190<<x5191)<x5192));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x5217 = INT32_MIN;
	int64_t x5218 = INT64_MAX;
	int16_t x5219 = 0;
	volatile int32_t t70 = INT32_MIN;

	t70 = (x5217|((x5218<<x5219)<x5220));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5221 = UINT32_MAX;
	static uint64_t x5222 = UINT64_MAX;
	static uint8_t x5223 = 22U;
	int64_t x5224 = INT64_MAX;
	uint32_t t71 = UINT32_MAX;

	t71 = (x5221|((x5222<<x5223)<x5224));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x5309 = UINT16_MAX;
	uint32_t x5310 = 490929U;
	int16_t x5312 = 53;
	int32_t t72 = -5191652;

	t72 = (x5309|((x5310<<x5311)<x5312));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x5393 = -189607713310LL;
	int32_t x5394 = INT32_MAX;
	int8_t x5395 = 0;
	static int32_t x5396 = -116;

	t73 = (x5393|((x5394<<x5395)<x5396));

	if (t73 != -189607713310LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x5441 = UINT8_MAX;
	volatile int8_t x5443 = 1;

	t74 = (x5441|((x5442<<x5443)<x5444));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5461 = INT32_MIN;
	int8_t x5462 = 1;
	static int8_t x5464 = 7;
	static volatile int32_t t75 = -23;

	t75 = (x5461|((x5462<<x5463)<x5464));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5477 = -36509;
	volatile int16_t x5478 = 1;
	static volatile int64_t x5479 = 18LL;
	volatile int8_t x5480 = INT8_MIN;

	t76 = (x5477|((x5478<<x5479)<x5480));

	if (t76 != -36509) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5514 = UINT16_MAX;
	static uint8_t x5515 = 9U;
	volatile int64_t x5516 = 3844362284674488222LL;
	volatile int32_t t77 = 2098851;

	t77 = (x5513|((x5514<<x5515)<x5516));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x5521 = INT64_MIN;
	volatile int8_t x5523 = 12;

	t78 = (x5521|((x5522<<x5523)<x5524));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x5547 = 13U;
	volatile uint32_t x5548 = 118177U;
	volatile int32_t t79 = -6601;

	t79 = (x5545|((x5546<<x5547)<x5548));

	if (t79 != -329) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5557 = 73162U;
	int8_t x5558 = 1;
	int8_t x5559 = 4;
	uint8_t x5560 = 7U;
	uint32_t t80 = 1017351U;

	t80 = (x5557|((x5558<<x5559)<x5560));

	if (t80 != 73162U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x5673 = 9535U;
	int32_t x5675 = 14;
	volatile int64_t x5676 = INT64_MIN;
	uint32_t t81 = 50969661U;

	t81 = (x5673|((x5674<<x5675)<x5676));

	if (t81 != 9535U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5722 = 0;
	uint16_t x5723 = 0U;
	int16_t x5724 = INT16_MAX;
	volatile int32_t t82 = 1453;

	t82 = (x5721|((x5722<<x5723)<x5724));

	if (t82 != -387843) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x5741 = -151859334;
	int32_t x5742 = 11662164;
	static int16_t x5743 = 1;
	static int32_t x5744 = 593487;

	t83 = (x5741|((x5742<<x5743)<x5744));

	if (t83 != -151859334) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5749 = 8U;
	uint64_t x5750 = UINT64_MAX;
	uint16_t x5751 = 2U;
	uint64_t x5752 = 18529575LLU;
	volatile uint32_t t84 = 17733496U;

	t84 = (x5749|((x5750<<x5751)<x5752));

	if (t84 != 8U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5761 = -1LL;
	uint32_t x5762 = 243U;
	int8_t x5764 = INT8_MAX;
	volatile int64_t t85 = -7LL;

	t85 = (x5761|((x5762<<x5763)<x5764));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x5781 = -215506281210LL;
	uint8_t x5782 = 52U;
	volatile uint64_t x5783 = 2LLU;
	int32_t x5784 = -327;
	volatile int64_t t86 = 9341010LL;

	t86 = (x5781|((x5782<<x5783)<x5784));

	if (t86 != -215506281210LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5848 = 1115U;
	volatile int64_t t87 = INT64_MAX;

	t87 = (x5845|((x5846<<x5847)<x5848));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6081 = 2U;
	static volatile uint32_t x6082 = 780730169U;
	int32_t x6083 = 1;
	static uint64_t x6084 = UINT64_MAX;

	t88 = (x6081|((x6082<<x6083)<x6084));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6102 = 1159429LLU;
	uint8_t x6103 = 22U;
	static int32_t t89 = INT32_MAX;

	t89 = (x6101|((x6102<<x6103)<x6104));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6105 = INT16_MIN;
	int64_t x6106 = 69236616LL;
	int32_t t90 = -7502;

	t90 = (x6105|((x6106<<x6107)<x6108));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6141 = INT32_MIN;
	volatile uint8_t x6143 = 8U;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x6141|((x6142<<x6143)<x6144));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6265 = -1LL;
	uint16_t x6266 = 1U;
	uint8_t x6267 = 8U;
	volatile int64_t t92 = 4914LL;

	t92 = (x6265|((x6266<<x6267)<x6268));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x6301 = -47416;
	int32_t x6304 = INT32_MAX;

	t93 = (x6301|((x6302<<x6303)<x6304));

	if (t93 != -47415) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6333 = UINT32_MAX;
	static uint16_t x6335 = 7U;
	int64_t x6336 = INT64_MIN;
	static volatile uint32_t t94 = UINT32_MAX;

	t94 = (x6333|((x6334<<x6335)<x6336));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6349 = 3;
	static int16_t x6350 = INT16_MAX;
	int8_t x6351 = 10;
	int32_t x6352 = -1;
	static volatile int32_t t95 = 0;

	t95 = (x6349|((x6350<<x6351)<x6352));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6353 = 5;
	volatile int16_t x6354 = INT16_MAX;
	static int64_t x6356 = 918LL;
	int32_t t96 = 31383;

	t96 = (x6353|((x6354<<x6355)<x6356));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6362 = 168214959;
	int32_t x6364 = INT32_MIN;
	int64_t t97 = INT64_MIN;

	t97 = (x6361|((x6362<<x6363)<x6364));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x6461 = 2U;
	static int32_t x6462 = 1171076;
	uint8_t x6463 = 1U;
	static uint32_t x6464 = 1733459U;
	volatile int32_t t98 = 736;

	t98 = (x6461|((x6462<<x6463)<x6464));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x6563 = 1U;
	int16_t x6564 = INT16_MAX;

	t99 = (x6561|((x6562<<x6563)<x6564));

	if (t99 != 7) { NG(); } else { ; }
	
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

