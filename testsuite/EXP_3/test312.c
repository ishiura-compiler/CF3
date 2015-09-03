#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -396145341LL;
volatile int32_t x7 = -922;
static uint32_t x12 = 706519640U;
int16_t x15 = INT16_MAX;
int16_t x18 = INT16_MIN;
int32_t x23 = INT32_MAX;
volatile uint64_t x30 = UINT64_MAX;
volatile int16_t x32 = INT16_MIN;
int32_t x47 = -105655;
int16_t x49 = INT16_MAX;
static volatile uint32_t t11 = 1022U;
volatile int16_t x72 = -1;
static uint32_t x76 = 1U;
static int8_t x82 = INT8_MAX;
int8_t x84 = -1;
int64_t x87 = -744225LL;
int8_t x88 = 4;
int64_t x94 = INT64_MAX;
int64_t x96 = -22860LL;
int32_t x97 = -5332;
int32_t x102 = INT32_MIN;
static uint32_t x105 = UINT32_MAX;
int16_t x120 = INT16_MIN;
int32_t t27 = 206842;
uint64_t x133 = 12025813621LLU;
static uint8_t x134 = 0U;
static uint16_t x135 = 20U;
uint16_t x136 = 80U;
int16_t x138 = -1;
int64_t x141 = -45685300LL;
volatile uint64_t x142 = UINT64_MAX;
int64_t x147 = -1LL;
volatile int16_t x150 = INT16_MAX;
static int16_t x151 = INT16_MIN;
uint64_t x152 = 275625LLU;
static volatile uint64_t t32 = 1163796LLU;
int64_t x161 = INT64_MIN;
int16_t x163 = -1;
uint64_t t34 = 1042820LLU;
int8_t x168 = 1;
static uint32_t x170 = 675353708U;
uint8_t x174 = 126U;
volatile int32_t x178 = INT32_MIN;
int8_t x188 = -1;
volatile int32_t x195 = 1;
static int16_t x196 = -14;
int32_t t42 = -30190947;
static uint8_t x197 = 37U;
int16_t x200 = INT16_MAX;
volatile int32_t t44 = 18;
int64_t x205 = -1LL;
int8_t x214 = INT8_MIN;
static volatile int64_t x215 = 840LL;
uint32_t x219 = 1763U;
volatile int16_t x226 = -1;
volatile int32_t x230 = -1;
volatile uint32_t t50 = 5642904U;
uint64_t x234 = 134688372528LLU;
volatile int64_t t52 = -217459654804429LL;
uint8_t x245 = 123U;
volatile int8_t x247 = 57;
static int32_t t57 = -4911;
static volatile int32_t x271 = -253147;
uint64_t x283 = 130LLU;
volatile int8_t x284 = -7;
int16_t x285 = -1;
int8_t x287 = INT8_MIN;
uint32_t x295 = UINT32_MAX;
int64_t t64 = 15018904078LL;
static volatile int64_t t65 = -561975LL;
volatile uint16_t x306 = UINT16_MAX;
int8_t x315 = INT8_MIN;
volatile uint16_t x316 = 539U;
int32_t x317 = INT32_MIN;
static uint16_t x322 = UINT16_MAX;
static int32_t x324 = INT32_MIN;
int8_t x334 = 13;
int8_t x335 = 6;
int16_t x346 = INT16_MAX;
uint8_t x348 = 1U;
int32_t t76 = -22931763;
uint8_t x355 = UINT8_MAX;
static uint64_t x377 = UINT64_MAX;
int64_t x379 = INT64_MIN;
uint8_t x380 = 0U;
volatile int16_t x382 = 143;
int8_t x384 = -4;
int64_t x389 = 2146426023676LL;
static uint8_t x394 = UINT8_MAX;
static volatile int64_t t86 = -448572LL;
int16_t x399 = -7506;
volatile int64_t t87 = -1143706189659LL;
uint8_t x402 = 102U;
static volatile uint16_t x413 = 856U;
int32_t x417 = -1;
uint32_t x419 = 157987U;
int8_t x427 = -36;
uint64_t t94 = 28LLU;
volatile int64_t t96 = 1LL;
volatile uint32_t t97 = 6U;
volatile int16_t x443 = INT16_MIN;
uint32_t x448 = 12U;
volatile int64_t t99 = -1247450516761181LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile int16_t x2 = -20;
	volatile int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;

	t0 = ((x1&x2)^(x3-x4));

	if (t0 != 9223372036854743168LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -16;
	int64_t x6 = 147428565LL;
	volatile int8_t x8 = 29;
	volatile int64_t t1 = -152607292412914735LL;

	t1 = ((x5&x6)^(x7-x8));

	if (t1 != -147429223LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int32_t x10 = -1;
	volatile uint64_t x11 = 477LLU;
	static volatile uint64_t t2 = 13213LLU;

	t2 = ((x9&x10)^(x11-x12));

	if (t2 != 1440964485LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	uint32_t x14 = 929414440U;
	int32_t x16 = INT32_MAX;
	uint32_t t3 = 1699U;

	t3 = ((x13&x14)^(x15-x16));

	if (t3 != 2147516416U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	uint32_t x19 = 20637U;
	volatile int16_t x20 = INT16_MIN;
	uint32_t t4 = 2U;

	t4 = ((x17&x18)^(x19-x20));

	if (t4 != 53405U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 40868LL;
	static volatile int32_t x22 = INT32_MIN;
	uint16_t x24 = UINT16_MAX;
	volatile int64_t t5 = 449LL;

	t5 = ((x21&x22)^(x23-x24));

	if (t5 != 2147418112LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	static uint32_t x31 = 3821U;
	uint64_t t6 = 2044LLU;

	t6 = ((x29&x30)^(x31-x32));

	if (t6 != 18446744073709515026LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	volatile uint32_t x34 = 4728316U;
	static uint8_t x35 = UINT8_MAX;
	int32_t x36 = INT32_MAX;
	volatile uint32_t t7 = 450U;

	t7 = ((x33&x34)^(x35-x36));

	if (t7 != 2152211584U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	volatile uint64_t x38 = 52518088039760189LLU;
	volatile uint8_t x39 = 3U;
	uint64_t x40 = UINT64_MAX;
	uint64_t t8 = 95624LLU;

	t8 = ((x37&x38)^(x39-x40));

	if (t8 != 52518088039759876LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 1U;
	uint64_t x42 = 946614LLU;
	volatile int32_t x43 = INT32_MIN;
	uint32_t x44 = 56698U;
	volatile uint64_t t9 = 1LLU;

	t9 = ((x41&x42)^(x43-x44));

	if (t9 != 2147426950LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	static volatile int64_t x46 = -1LL;
	volatile int16_t x48 = -117;
	static volatile int64_t t10 = -7560050367LL;

	t10 = ((x45&x46)^(x47-x48));

	if (t10 != -105535LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = INT16_MIN;
	int8_t x51 = -1;
	uint32_t x52 = 232606984U;

	t11 = ((x49&x50)^(x51-x52));

	if (t11 != 4062360311U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 1U;
	int32_t x54 = INT32_MIN;
	int8_t x55 = -21;
	uint64_t x56 = 7311LLU;
	uint64_t t12 = 932847LLU;

	t12 = ((x53&x54)^(x55-x56));

	if (t12 != 18446744073709544284LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MIN;
	static int16_t x58 = INT16_MIN;
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = -66;
	int64_t t13 = -40222780LL;

	t13 = ((x57&x58)^(x59-x60));

	if (t13 != 9223372036854775746LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MIN;
	int32_t x66 = 0;
	static int16_t x67 = 0;
	static int8_t x68 = INT8_MIN;
	static int32_t t14 = -2;

	t14 = ((x65&x66)^(x67-x68));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	static int8_t x70 = 1;
	int64_t x71 = INT64_MIN;
	volatile int64_t t15 = INT64_MIN;

	t15 = ((x69&x70)^(x71-x72));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = 92792279;
	int8_t x75 = -1;
	volatile uint32_t t16 = 0U;

	t16 = ((x73&x74)^(x75-x76));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1868;
	uint64_t x78 = UINT64_MAX;
	uint16_t x79 = 166U;
	uint64_t x80 = 1LLU;
	volatile uint64_t t17 = 0LLU;

	t17 = ((x77&x78)^(x79-x80));

	if (t17 != 18446744073709549585LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = -3866;
	volatile int32_t x83 = -34330262;
	volatile int32_t t18 = 261267;

	t18 = ((x81&x82)^(x83-x84));

	if (t18 != -34330355) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = UINT16_MAX;
	int16_t x86 = -7839;
	volatile int64_t t19 = -201224957090LL;

	t19 = ((x85&x86)^(x87-x88));

	if (t19 != -768582LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 53054LLU;
	uint64_t x95 = UINT64_MAX;
	static uint64_t t20 = 1734LLU;

	t20 = ((x93&x94)^(x95-x96));

	if (t20 != 38517LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x98 = 351U;
	int64_t x99 = 26042539493806707LL;
	static int32_t x100 = -1;
	int64_t t21 = 250637198182LL;

	t21 = ((x97&x98)^(x99-x100));

	if (t21 != 26042539493806968LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 0LLU;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = -180;
	static uint64_t t22 = 3921001LLU;

	t22 = ((x101&x102)^(x103-x104));

	if (t22 != 179LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x106 = UINT64_MAX;
	static int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t23 = 41746708445590LLU;

	t23 = ((x105&x106)^(x107-x108));

	if (t23 != 18446744069414617342LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x109 = 45U;
	volatile int64_t x110 = INT64_MIN;
	volatile int32_t x111 = INT32_MIN;
	static int8_t x112 = INT8_MIN;
	volatile int64_t t24 = 425476641491660697LL;

	t24 = ((x109&x110)^(x111-x112));

	if (t24 != -2147483520LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = 2U;
	int16_t x114 = INT16_MAX;
	uint16_t x115 = 195U;
	volatile int8_t x116 = INT8_MAX;
	volatile uint32_t t25 = 92U;

	t25 = ((x113&x114)^(x115-x116));

	if (t25 != 70U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 2184;
	int32_t x118 = INT32_MIN;
	int64_t x119 = INT64_MIN;
	int64_t t26 = -4536015387493224359LL;

	t26 = ((x117&x118)^(x119-x120));

	if (t26 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = INT16_MIN;
	int8_t x126 = 13;
	int16_t x127 = -1;
	int8_t x128 = -1;

	t27 = ((x125&x126)^(x127-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t t28 = 3361289525LLU;

	t28 = ((x133&x134)^(x135-x136));

	if (t28 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 4222399905314194LLU;
	int32_t x139 = INT32_MAX;
	uint16_t x140 = 2U;
	volatile uint64_t t29 = 4229304041020263LLU;

	t29 = ((x137&x138)^(x139-x140));

	if (t29 != 4222401299303023LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x143 = -6;
	static volatile uint32_t x144 = UINT32_MAX;
	uint64_t t30 = 0LLU;

	t30 = ((x141&x142)^(x143-x144));

	if (t30 != 18446744069460269623LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = -1LL;
	volatile int32_t x146 = -37878;
	int32_t x148 = -1;
	int64_t t31 = -1780LL;

	t31 = ((x145&x146)^(x147-x148));

	if (t31 != -37878LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;

	t32 = ((x149&x150)^(x151-x152));

	if (t32 != 18446744073709243223LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = 121U;
	uint32_t x158 = 25589U;
	static volatile uint64_t x159 = 323664728536LLU;
	int32_t x160 = -6313;
	volatile uint64_t t33 = 30LLU;

	t33 = ((x157&x158)^(x159-x160));

	if (t33 != 323664734960LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x162 = 105924LLU;
	static int32_t x164 = INT32_MIN;

	t34 = ((x161&x162)^(x163-x164));

	if (t34 != 2147483647LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = 2;
	static int8_t x166 = INT8_MAX;
	uint16_t x167 = 12344U;
	int32_t t35 = 13908974;

	t35 = ((x165&x166)^(x167-x168));

	if (t35 != 12341) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x169 = -1LL;
	static int64_t x171 = 43846435LL;
	int64_t x172 = 2001848724LL;
	volatile int64_t t36 = -7298756LL;

	t36 = ((x169&x170)^(x171-x172));

	if (t36 != -1559603741LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x173 = 1253U;
	static int16_t x175 = 0;
	static volatile int64_t x176 = INT64_MAX;
	int64_t t37 = -351385116484LL;

	t37 = ((x173&x174)^(x175-x176));

	if (t37 != -9223372036854775707LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x179 = INT8_MAX;
	uint16_t x180 = 13935U;
	uint32_t t38 = 1U;

	t38 = ((x177&x178)^(x179-x180));

	if (t38 != 2147469840U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x181 = INT16_MAX;
	uint64_t x182 = UINT64_MAX;
	uint32_t x183 = 19U;
	uint8_t x184 = 18U;
	volatile uint64_t t39 = 399LLU;

	t39 = ((x181&x182)^(x183-x184));

	if (t39 != 32766LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x185 = INT16_MIN;
	static uint8_t x186 = UINT8_MAX;
	uint64_t x187 = UINT64_MAX;
	static uint64_t t40 = 3122891936124856LLU;

	t40 = ((x185&x186)^(x187-x188));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = INT32_MIN;
	static uint32_t x190 = 0U;
	static uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 1252U;
	static uint64_t t41 = 767LLU;

	t41 = ((x189&x190)^(x191-x192));

	if (t41 != 18446744073709550363LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x193 = INT16_MIN;
	uint16_t x194 = 1303U;

	t42 = ((x193&x194)^(x195-x196));

	if (t42 != 15) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x198 = INT32_MIN;
	static uint32_t x199 = UINT32_MAX;
	volatile uint32_t t43 = 1816594U;

	t43 = ((x197&x198)^(x199-x200));

	if (t43 != 4294934528U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = -1;
	int32_t x203 = -1012523;
	int8_t x204 = -1;

	t44 = ((x201&x202)^(x203-x204));

	if (t44 != 986326) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x206 = 15632U;
	int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int64_t t45 = 242062860990693564LL;

	t45 = ((x205&x206)^(x207-x208));

	if (t45 != 4294951569LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x209 = 1340231LL;
	volatile int16_t x210 = 1;
	volatile int16_t x211 = INT16_MIN;
	int8_t x212 = -1;
	int64_t t46 = -143070LL;

	t46 = ((x209&x210)^(x211-x212));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x213 = 32134U;
	static int8_t x216 = -51;
	static volatile int64_t t47 = 633LL;

	t47 = ((x213&x214)^(x215-x216));

	if (t47 != 32507LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x217 = 857U;
	static uint64_t x218 = 6728632148LLU;
	uint8_t x220 = 1U;
	volatile uint64_t t48 = 3389LLU;

	t48 = ((x217&x218)^(x219-x220));

	if (t48 != 1458LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t49 = -225387482523880LL;

	t49 = ((x225&x226)^(x227-x228));

	if (t49 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = INT16_MIN;
	volatile int8_t x231 = INT8_MIN;
	volatile uint32_t x232 = UINT32_MAX;

	t50 = ((x229&x230)^(x231-x232));

	if (t50 != 32641U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = 20;
	int16_t x235 = 945;
	static int32_t x236 = -1;
	static uint64_t t51 = 36LLU;

	t51 = ((x233&x234)^(x235-x236));

	if (t51 != 930LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = INT64_MAX;
	static volatile int32_t x238 = 3970;
	int8_t x239 = 1;
	int8_t x240 = -10;

	t52 = ((x237&x238)^(x239-x240));

	if (t52 != 3977LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x246 = 3727560LL;
	int16_t x248 = INT16_MAX;
	static volatile int64_t t53 = -42822262909823LL;

	t53 = ((x245&x246)^(x247-x248));

	if (t53 != -32654LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = INT64_MAX;
	static volatile int8_t x250 = -1;
	uint8_t x251 = 17U;
	int16_t x252 = INT16_MIN;
	volatile int64_t t54 = 320254707969524550LL;

	t54 = ((x249&x250)^(x251-x252));

	if (t54 != 9223372036854743022LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = 23970U;
	uint8_t x254 = 27U;
	int8_t x255 = -1;
	int64_t x256 = -1LL;
	static int64_t t55 = 1066267052641294LL;

	t55 = ((x253&x254)^(x255-x256));

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = INT8_MAX;
	int8_t x258 = -1;
	int32_t x259 = -1;
	static volatile int16_t x260 = INT16_MIN;
	volatile int32_t t56 = 148356;

	t56 = ((x257&x258)^(x259-x260));

	if (t56 != 32640) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = 20U;
	volatile int32_t x266 = INT32_MIN;
	uint8_t x267 = 0U;
	static int8_t x268 = INT8_MIN;

	t57 = ((x265&x266)^(x267-x268));

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x269 = UINT32_MAX;
	static int32_t x270 = INT32_MAX;
	int8_t x272 = 3;
	volatile uint32_t t58 = 153561822U;

	t58 = ((x269&x270)^(x271-x272));

	if (t58 != 2147736797U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x273 = 6U;
	int16_t x274 = -1;
	uint16_t x275 = 23U;
	int8_t x276 = INT8_MAX;
	volatile int32_t t59 = -181;

	t59 = ((x273&x274)^(x275-x276));

	if (t59 != -98) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = 3;
	uint16_t x279 = 13036U;
	volatile uint32_t x280 = 1525U;
	uint32_t t60 = 1540476U;

	t60 = ((x277&x278)^(x279-x280));

	if (t60 != 11508U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = 13;
	int64_t x282 = 253323LL;
	volatile uint64_t t61 = 400LLU;

	t61 = ((x281&x282)^(x283-x284));

	if (t61 != 128LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x286 = UINT32_MAX;
	uint64_t x288 = 4289134252LLU;
	uint64_t t62 = 6806LLU;

	t62 = ((x285&x286)^(x287-x288));

	if (t62 != 18446744073703718699LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = 135;
	volatile int8_t x294 = -28;
	uint64_t x296 = 9345752LLU;
	uint64_t t63 = 1029207LLU;

	t63 = ((x293&x294)^(x295-x296));

	if (t63 != 4285621667LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = INT8_MIN;
	static int64_t x298 = -89029268LL;
	int32_t x299 = INT32_MAX;
	uint16_t x300 = 42U;

	t64 = ((x297&x298)^(x299-x300));

	if (t64 != -2058454315LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x301 = INT32_MIN;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = -4354614173891020973LL;
	static int16_t x304 = INT16_MIN;

	t65 = ((x301&x302)^(x303-x304));

	if (t65 != -4354614173890988205LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 3925LLU;
	static volatile uint8_t x307 = UINT8_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile uint64_t t66 = 1410685746801239192LLU;

	t66 = ((x305&x306)^(x307-x308));

	if (t66 != 3669LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = INT64_MIN;
	int16_t x310 = 4;
	uint32_t x311 = 197U;
	int8_t x312 = 7;
	volatile int64_t t67 = -6588610LL;

	t67 = ((x309&x310)^(x311-x312));

	if (t67 != 190LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = -1;
	int32_t x314 = INT32_MIN;
	volatile int32_t t68 = 35;

	t68 = ((x313&x314)^(x315-x316));

	if (t68 != 2147482981) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x318 = -1;
	volatile int64_t x319 = -1LL;
	static uint8_t x320 = 9U;
	int64_t t69 = -69946497272LL;

	t69 = ((x317&x318)^(x319-x320));

	if (t69 != 2147483638LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = INT64_MIN;
	int64_t x323 = INT64_MIN;
	int64_t t70 = 4453LL;

	t70 = ((x321&x322)^(x323-x324));

	if (t70 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MIN;
	int16_t x327 = -1;
	int8_t x328 = INT8_MAX;
	volatile int64_t t71 = -2037846646LL;

	t71 = ((x325&x326)^(x327-x328));

	if (t71 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x329 = -1;
	int8_t x330 = -2;
	int64_t x331 = -1LL;
	int16_t x332 = INT16_MIN;
	static int64_t t72 = 226LL;

	t72 = ((x329&x330)^(x331-x332));

	if (t72 != -32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = 1669965244005637271LLU;
	volatile uint32_t x336 = UINT32_MAX;
	uint64_t t73 = 31328588267115LLU;

	t73 = ((x333&x334)^(x335-x336));

	if (t73 != 2LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x338 = INT32_MIN;
	static uint32_t x339 = 861170519U;
	int32_t x340 = INT32_MIN;
	uint32_t t74 = 4042U;

	t74 = ((x337&x338)^(x339-x340));

	if (t74 != 861170519U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x341 = 8U;
	uint32_t x342 = 1558970459U;
	int64_t x343 = -2819188675908LL;
	static uint64_t x344 = 5114446617LLU;
	static volatile uint64_t t75 = 19790299670LLU;

	t75 = ((x341&x342)^(x343-x344));

	if (t75 != 18446741249406429099LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = -1;
	int8_t x347 = INT8_MIN;

	t76 = ((x345&x346)^(x347-x348));

	if (t76 != -32640) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x353 = 50022U;
	uint16_t x354 = UINT16_MAX;
	int32_t x356 = -1;
	volatile uint32_t t77 = 165562U;

	t77 = ((x353&x354)^(x355-x356));

	if (t77 != 49766U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x361 = INT32_MIN;
	volatile uint16_t x362 = UINT16_MAX;
	static int64_t x363 = -8171191897LL;
	int16_t x364 = 249;
	volatile int64_t t78 = 822547523LL;

	t78 = ((x361&x362)^(x363-x364));

	if (t78 != -8171192146LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x365 = UINT8_MAX;
	volatile uint32_t x366 = 1942U;
	int64_t x367 = -1LL;
	int64_t x368 = INT64_MIN;
	int64_t t79 = -6LL;

	t79 = ((x365&x366)^(x367-x368));

	if (t79 != 9223372036854775657LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x369 = 718LLU;
	volatile int8_t x370 = INT8_MIN;
	static int16_t x371 = -1;
	int32_t x372 = INT32_MAX;
	volatile uint64_t t80 = 689228LLU;

	t80 = ((x369&x370)^(x371-x372));

	if (t80 != 18446744071562068608LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x373 = 59;
	int16_t x374 = INT16_MIN;
	uint8_t x375 = 62U;
	int16_t x376 = -50;
	int32_t t81 = 14678;

	t81 = ((x373&x374)^(x375-x376));

	if (t81 != 112) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x378 = INT64_MIN;
	volatile uint64_t t82 = 70886LLU;

	t82 = ((x377&x378)^(x379-x380));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = 54;
	int16_t x383 = -1;
	int32_t t83 = 52471903;

	t83 = ((x381&x382)^(x383-x384));

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MAX;
	int64_t x388 = 349631722012817LL;
	int64_t t84 = -106376436420406LL;

	t84 = ((x385&x386)^(x387-x388));

	if (t84 != -349629574529170LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x390 = -1;
	int32_t x391 = INT32_MAX;
	uint8_t x392 = UINT8_MAX;
	int64_t t85 = -335184LL;

	t85 = ((x389&x390)^(x391-x392));

	if (t85 != 2146393788924LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x393 = 0U;
	int64_t x395 = INT64_MAX;
	uint32_t x396 = 18U;

	t86 = ((x393&x394)^(x395-x396));

	if (t86 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x397 = INT64_MAX;
	int32_t x398 = INT32_MIN;
	int8_t x400 = -15;

	t87 = ((x397&x398)^(x399-x400));

	if (t87 != -9223372034707299651LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x401 = 1742386109U;
	int64_t x403 = -149344205627LL;
	volatile int8_t x404 = INT8_MAX;
	volatile int64_t t88 = 57516114LL;

	t88 = ((x401&x402)^(x403-x404));

	if (t88 != -149344205726LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = 7492;
	static int64_t x406 = INT64_MIN;
	volatile int32_t x407 = 4187;
	static int8_t x408 = -1;
	int64_t t89 = 1940LL;

	t89 = ((x405&x406)^(x407-x408));

	if (t89 != 4188LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x409 = 914379602668LLU;
	static volatile int64_t x410 = INT64_MIN;
	int16_t x411 = -163;
	uint32_t x412 = UINT32_MAX;
	volatile uint64_t t90 = 4728441LLU;

	t90 = ((x409&x410)^(x411-x412));

	if (t90 != 4294967134LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x414 = INT16_MIN;
	volatile int64_t x415 = 139333851712LL;
	uint16_t x416 = UINT16_MAX;
	int64_t t91 = 1LL;

	t91 = ((x413&x414)^(x415-x416));

	if (t91 != 139333786177LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x418 = 21U;
	static int64_t x420 = -11333618284LL;
	static volatile int64_t t92 = -39985390476403LL;

	t92 = ((x417&x418)^(x419-x420));

	if (t92 != 11333776282LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = UINT64_MAX;
	uint32_t x422 = UINT32_MAX;
	int64_t x423 = -1LL;
	int8_t x424 = 1;
	volatile uint64_t t93 = 15973LLU;

	t93 = ((x421&x422)^(x423-x424));

	if (t93 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x425 = 53341874LLU;
	volatile int32_t x426 = INT32_MAX;
	static int8_t x428 = 1;

	t94 = ((x425&x426)^(x427-x428));

	if (t94 != 18446744073656209769LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x429 = UINT8_MAX;
	volatile uint32_t x430 = 494U;
	uint32_t x431 = 0U;
	int32_t x432 = 181;
	volatile uint32_t t95 = 130169925U;

	t95 = ((x429&x430)^(x431-x432));

	if (t95 != 4294967205U) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x433 = INT32_MIN;
	static int64_t x434 = INT64_MIN;
	uint8_t x435 = 10U;
	uint16_t x436 = 115U;

	t96 = ((x433&x434)^(x435-x436));

	if (t96 != 9223372036854775703LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x437 = 22240456U;
	static int32_t x438 = 4476;
	int16_t x439 = 7;
	int16_t x440 = INT16_MIN;

	t97 = ((x437&x438)^(x439-x440));

	if (t97 != 36943U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x441 = 3U;
	uint32_t x442 = 5910U;
	volatile int32_t x444 = INT32_MIN;
	uint32_t t98 = 169039U;

	t98 = ((x441&x442)^(x443-x444));

	if (t98 != 2147450882U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x445 = 2088759U;
	static int64_t x446 = 4748891LL;
	uint8_t x447 = 123U;

	t99 = ((x445&x446)^(x447-x448));

	if (t99 != 546428LL) { NG(); } else { ; }
	
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

