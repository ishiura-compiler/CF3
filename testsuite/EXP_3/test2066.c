#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 291U;
int32_t x4 = INT32_MIN;
static int8_t x8 = -1;
volatile int16_t x23 = 15;
static int64_t x24 = INT64_MAX;
uint16_t x34 = 2838U;
static int32_t x51 = INT32_MIN;
static uint32_t x52 = UINT32_MAX;
int8_t x54 = 13;
int64_t x55 = -1LL;
volatile int16_t x62 = -1;
uint8_t x69 = 10U;
int8_t x73 = INT8_MAX;
int32_t x80 = 28417080;
volatile int64_t t12 = 16796867753LL;
int8_t x83 = 2;
int32_t t13 = -1070098641;
int16_t x91 = INT16_MIN;
int32_t x92 = INT32_MAX;
volatile int64_t t15 = -215042102457LL;
int8_t x96 = -1;
volatile uint64_t x101 = UINT64_MAX;
int8_t x104 = 1;
int8_t x105 = INT8_MAX;
static int8_t x129 = INT8_MIN;
int16_t x132 = INT16_MAX;
volatile uint32_t t23 = 121359U;
int8_t x152 = INT8_MAX;
uint16_t x155 = 12U;
int64_t t26 = -267LL;
volatile int32_t x157 = INT32_MIN;
uint8_t x162 = UINT8_MAX;
int16_t x167 = INT16_MIN;
uint64_t x172 = 214LLU;
uint16_t x175 = 18135U;
int32_t t31 = 14998;
static uint32_t x183 = 795U;
volatile uint32_t t33 = 4748249U;
int8_t x186 = 11;
int8_t x203 = INT8_MIN;
static uint32_t t37 = 205U;
uint64_t x225 = 4052824258545LLU;
uint8_t x228 = 31U;
uint32_t x231 = 1951117902U;
int8_t x232 = 47;
static int32_t t44 = -3379;
uint8_t x245 = UINT8_MAX;
int16_t x252 = INT16_MAX;
uint64_t t48 = 21760711810602690LLU;
int64_t x266 = -59119LL;
static uint64_t t49 = 350257LLU;
volatile int8_t x276 = -1;
volatile uint32_t x277 = 11320U;
uint16_t x291 = UINT16_MAX;
static int32_t t54 = 3;
volatile int16_t x307 = 1;
uint64_t t55 = 2902394962053902LLU;
volatile uint8_t x313 = UINT8_MAX;
volatile int32_t x317 = -1;
int64_t x324 = -1LL;
uint64_t t59 = 8421755444385055623LLU;
uint32_t x353 = UINT32_MAX;
volatile int16_t x364 = INT16_MIN;
int64_t x366 = 0LL;
int16_t x375 = -193;
uint64_t t65 = 56921790833LLU;
volatile uint64_t t66 = 11140793306LLU;
int64_t x385 = -7LL;
volatile int32_t x386 = 0;
int16_t x390 = -1;
int64_t t68 = -1LL;
int16_t x395 = INT16_MAX;
int8_t x406 = INT8_MIN;
int64_t x409 = -137550311LL;
int8_t x414 = -21;
int16_t x416 = INT16_MIN;
int16_t x422 = INT16_MIN;
int64_t x430 = -1LL;
int16_t x443 = -1;
volatile uint32_t t78 = 70403U;
int64_t x452 = INT64_MIN;
static int64_t x470 = -28644021090612861LL;
uint64_t x471 = UINT64_MAX;
int16_t x473 = INT16_MIN;
static uint8_t x475 = UINT8_MAX;
static int64_t x480 = -4285425845LL;
uint64_t x488 = UINT64_MAX;
static uint64_t t85 = 0LLU;
uint8_t x491 = UINT8_MAX;
uint32_t t86 = 842751339U;
int16_t x493 = INT16_MAX;
int16_t x497 = INT16_MIN;
uint32_t x516 = UINT32_MAX;
uint64_t x537 = UINT64_MAX;
uint32_t x539 = UINT32_MAX;
int8_t x544 = -1;
uint32_t x550 = UINT32_MAX;
static int32_t x556 = INT32_MIN;
uint32_t x558 = 10U;
int64_t t98 = INT64_MAX;
int32_t t99 = -1461;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int32_t x2 = 1649758;
	static volatile uint64_t t0 = 1259701499125169420LLU;

	t0 = ((x1*x2)|(x3^x4));

	if (t0 != 18446744073707901859LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	int8_t x6 = INT8_MAX;
	uint32_t x7 = UINT32_MAX;
	volatile uint32_t t1 = 2477U;

	t1 = ((x5*x6)|(x7^x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	static volatile int64_t x10 = -53LL;
	int64_t x11 = 112592LL;
	uint8_t x12 = 3U;
	int64_t t2 = -3LL;

	t2 = ((x9*x10)|(x11^x12));

	if (t2 != 1816531LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1281951780014LL;
	static uint64_t x14 = UINT64_MAX;
	int64_t x15 = 13704520954983LL;
	int32_t x16 = 1600441;
	uint64_t t3 = 9001LLU;

	t3 = ((x13*x14)|(x15^x16));

	if (t3 != 14839099940862LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	static int16_t x22 = INT16_MAX;
	int64_t t4 = -1LL;

	t4 = ((x21*x22)|(x23^x24));

	if (t4 != -16LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -471560LL;
	volatile uint32_t x26 = 26313U;
	int64_t x27 = -1LL;
	volatile int8_t x28 = -1;
	int64_t t5 = 2572LL;

	t5 = ((x25*x26)|(x27^x28));

	if (t5 != -12408158280LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -1;
	uint16_t x35 = 17U;
	int64_t x36 = -2870148779526262890LL;
	int64_t t6 = -923358604055LL;

	t6 = ((x33*x34)|(x35^x36));

	if (t6 != -17LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 18U;
	static int16_t x50 = 192;
	static uint32_t t7 = 387329U;

	t7 = ((x49*x50)|(x51^x52));

	if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x53 = -1178211627105LL;
	uint64_t x56 = 33943045377865756LLU;
	uint64_t t8 = 72LLU;

	t8 = ((x53*x54)|(x55^x56));

	if (t8 != 18446738558702931955LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = 33980032507665414LLU;
	uint32_t x63 = 258895045U;
	static int8_t x64 = 30;
	volatile uint64_t t9 = 38089299068LLU;

	t9 = ((x61*x62)|(x63^x64));

	if (t9 != 18412764041319477243LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x70 = -1;
	volatile uint16_t x71 = 19U;
	static int32_t x72 = INT32_MIN;
	volatile int32_t t10 = -876;

	t10 = ((x69*x70)|(x71^x72));

	if (t10 != -9) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x74 = -1;
	uint8_t x75 = 107U;
	static volatile int64_t x76 = INT64_MIN;
	volatile int64_t t11 = 0LL;

	t11 = ((x73*x74)|(x75^x76));

	if (t11 != -21LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x77 = INT8_MIN;
	static int64_t x78 = 1170403LL;
	uint16_t x79 = 45U;

	t12 = ((x77*x78)|(x79^x80));

	if (t12 != -139223403LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = -3;
	int32_t x84 = -1;

	t13 = ((x81*x82)|(x83^x84));

	if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = 2;
	static int32_t x86 = 35677;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = INT32_MAX;
	static volatile int32_t t14 = -1;

	t14 = ((x85*x86)|(x87^x88));

	if (t14 != 2147483578) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = 277532021LL;
	volatile int8_t x90 = 0;

	t15 = ((x89*x90)|(x91^x92));

	if (t15 != -2147450881LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x93 = UINT32_MAX;
	uint8_t x94 = 1U;
	uint16_t x95 = 2U;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = ((x93*x94)|(x95^x96));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = 1608;
	static int8_t x98 = INT8_MAX;
	int64_t x99 = 1324875670190LL;
	int8_t x100 = 1;
	volatile int64_t t17 = 16910454048120LL;

	t17 = ((x97*x98)|(x99^x100));

	if (t17 != 1324875743167LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x102 = 26;
	static int8_t x103 = 5;
	volatile uint64_t t18 = 4168108112829446LLU;

	t18 = ((x101*x102)|(x103^x104));

	if (t18 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x106 = 5U;
	volatile uint64_t x107 = UINT64_MAX;
	static volatile int32_t x108 = INT32_MIN;
	volatile uint64_t t19 = 70538663LLU;

	t19 = ((x105*x106)|(x107^x108));

	if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = UINT64_MAX;
	volatile int8_t x119 = -1;
	int16_t x120 = 0;
	uint64_t t20 = UINT64_MAX;

	t20 = ((x117*x118)|(x119^x120));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x121 = -1;
	int16_t x122 = -1705;
	int16_t x123 = 79;
	int64_t x124 = INT64_MAX;
	volatile int64_t t21 = 2912898945LL;

	t21 = ((x121*x122)|(x123^x124));

	if (t21 != 9223372036854775737LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x130 = -121739;
	int64_t x131 = INT64_MIN;
	volatile int64_t t22 = -241969311LL;

	t22 = ((x129*x130)|(x131^x132));

	if (t22 != -9223372036839178241LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = -2;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = 101255U;
	int8_t x136 = 5;

	t23 = ((x133*x134)|(x135^x136));

	if (t23 != 101250U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x137 = -19;
	volatile int16_t x138 = 0;
	int16_t x139 = 11289;
	volatile int32_t x140 = -1;
	int32_t t24 = -370114;

	t24 = ((x137*x138)|(x139^x140));

	if (t24 != -11290) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x149 = 3U;
	uint8_t x150 = UINT8_MAX;
	static int32_t x151 = INT32_MIN;
	volatile int32_t t25 = -8;

	t25 = ((x149*x150)|(x151^x152));

	if (t25 != -2147482881) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x153 = UINT16_MAX;
	int16_t x154 = 1;
	volatile int64_t x156 = -505LL;

	t26 = ((x153*x154)|(x155^x156));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x158 = 7134993366988560238LLU;
	static int8_t x159 = INT8_MIN;
	uint16_t x160 = 1U;
	static uint64_t t27 = 3618LLU;

	t27 = ((x157*x158)|(x159^x160));

	if (t27 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x161 = -1LL;
	uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 1617U;
	uint64_t t28 = 2836960234LLU;

	t28 = ((x161*x162)|(x163^x164));

	if (t28 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x165 = 2149LLU;
	int16_t x166 = 1;
	int16_t x168 = 10705;
	static uint64_t t29 = 18301235LLU;

	t29 = ((x165*x166)|(x167^x168));

	if (t29 != 18446744073709529589LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x169 = INT32_MAX;
	static int16_t x170 = -1;
	uint16_t x171 = 0U;
	uint64_t t30 = 455462922110886LLU;

	t30 = ((x169*x170)|(x171^x172));

	if (t30 != 18446744071562068183LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x173 = 1U;
	int8_t x174 = INT8_MIN;
	volatile int8_t x176 = 1;

	t31 = ((x173*x174)|(x175^x176));

	if (t31 != -42) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x177 = 1U;
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = 3927535303LL;
	int32_t x180 = -67323436;
	volatile int64_t t32 = 214926667015100LL;

	t32 = ((x177*x178)|(x179^x180));

	if (t32 != -1847208173LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x181 = 9216U;
	static int16_t x182 = INT16_MIN;
	static int32_t x184 = -51890;

	t33 = ((x181*x182)|(x183^x184));

	if (t33 != 4294915669U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x185 = 11U;
	static uint16_t x187 = 490U;
	static int64_t x188 = INT64_MIN;
	volatile int64_t t34 = -593409847578LL;

	t34 = ((x185*x186)|(x187^x188));

	if (t34 != -9223372036854775301LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = 344;
	int8_t x194 = INT8_MIN;
	volatile int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t35 = 456;

	t35 = ((x193*x194)|(x195^x196));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x197 = INT32_MAX;
	uint8_t x198 = 0U;
	int32_t x199 = -1;
	int64_t x200 = INT64_MAX;
	int64_t t36 = INT64_MIN;

	t36 = ((x197*x198)|(x199^x200));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x201 = 6337617U;
	volatile uint32_t x202 = 1U;
	int16_t x204 = -1;

	t37 = ((x201*x202)|(x203^x204));

	if (t37 != 6337663U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x213 = 0U;
	int64_t x214 = -11364842440593LL;
	volatile int8_t x215 = INT8_MIN;
	uint32_t x216 = 26256768U;
	int64_t t38 = 190242517215840287LL;

	t38 = ((x213*x214)|(x215^x216));

	if (t38 != 4268710400LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x221 = INT64_MIN;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = -1;
	uint64_t x224 = 28792LLU;
	uint64_t t39 = 439008500152537043LLU;

	t39 = ((x221*x222)|(x223^x224));

	if (t39 != 18446744073709522823LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x226 = 61626;
	int64_t x227 = -1LL;
	static uint64_t t40 = 45534630432829LLU;

	t40 = ((x225*x226)|(x227^x228));

	if (t40 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x229 = 27764147445606206LLU;
	int8_t x230 = INT8_MIN;
	uint64_t t41 = 1186424132LLU;

	t41 = ((x229*x230)|(x231^x232));

	if (t41 != 14892933202622542689LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = 100LL;
	int32_t x235 = 20;
	static int32_t x236 = INT32_MAX;
	volatile int64_t t42 = 1LL;

	t42 = ((x233*x234)|(x235^x236));

	if (t42 != -21LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x237 = 3839642024102LLU;
	uint8_t x238 = 0U;
	uint32_t x239 = 543015485U;
	static int8_t x240 = INT8_MIN;
	volatile uint64_t t43 = 2122959591071LLU;

	t43 = ((x237*x238)|(x239^x240));

	if (t43 != 3751951805LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x241 = -1;
	uint8_t x242 = 59U;
	volatile int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;

	t44 = ((x241*x242)|(x243^x244));

	if (t44 != -59) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x246 = 2556;
	int32_t x247 = -6514;
	int8_t x248 = INT8_MIN;
	static int32_t t45 = 147;

	t45 = ((x245*x246)|(x247^x248));

	if (t45 != 654094) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x249 = 13U;
	uint64_t x250 = 3LLU;
	static int16_t x251 = INT16_MIN;
	uint64_t t46 = UINT64_MAX;

	t46 = ((x249*x250)|(x251^x252));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x258 = 126617735LLU;
	volatile int32_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	static volatile uint64_t t47 = 87003660404010LLU;

	t47 = ((x257*x258)|(x259^x260));

	if (t47 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x261 = 5U;
	uint64_t x262 = 7LLU;
	static volatile int8_t x263 = INT8_MIN;
	uint64_t x264 = UINT64_MAX;

	t48 = ((x261*x262)|(x263^x264));

	if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = 57410345;
	volatile uint64_t x267 = 62575060079270LLU;
	int16_t x268 = INT16_MAX;

	t49 = ((x265*x266)|(x267^x268));

	if (t49 != 18446740680273969145LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x273 = UINT16_MAX;
	static int16_t x274 = INT16_MIN;
	static int8_t x275 = INT8_MIN;
	volatile int32_t t50 = -27;

	t50 = ((x273*x274)|(x275^x276));

	if (t50 != -2147450753) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x278 = UINT16_MAX;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	volatile int64_t t51 = -991746LL;

	t51 = ((x277*x278)|(x279^x280));

	if (t51 != 9223372035449148360LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x285 = 303U;
	static int8_t x286 = -1;
	static int8_t x287 = -1;
	uint64_t x288 = UINT64_MAX;
	static uint64_t t52 = 395481819695975678LLU;

	t52 = ((x285*x286)|(x287^x288));

	if (t52 != 18446744073709551313LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x289 = INT8_MAX;
	uint8_t x290 = UINT8_MAX;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t53 = 1;

	t53 = ((x289*x290)|(x291^x292));

	if (t53 != -33025) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x293 = -22;
	int32_t x294 = 77966432;
	int16_t x295 = INT16_MAX;
	static volatile int32_t x296 = INT32_MAX;

	t54 = ((x293*x294)|(x295^x296));

	if (t54 != -20544) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x305 = 314U;
	static int32_t x306 = INT32_MIN;
	uint64_t x308 = UINT64_MAX;

	t55 = ((x305*x306)|(x307^x308));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x314 = 12455157487LL;
	volatile int32_t x315 = INT32_MIN;
	int64_t x316 = 1012LL;
	int64_t t56 = 1806127049LL;

	t56 = ((x313*x314)|(x315^x316));

	if (t56 != -63155211LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x318 = 21140U;
	int8_t x319 = INT8_MIN;
	volatile int64_t x320 = -1694750145737704442LL;
	volatile int64_t t57 = 32079LL;

	t57 = ((x317*x318)|(x319^x320));

	if (t57 != -4114LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x321 = 0U;
	uint16_t x322 = UINT16_MAX;
	static uint64_t x323 = 487019894989057LLU;
	static volatile uint64_t t58 = 160020063616LLU;

	t58 = ((x321*x322)|(x323^x324));

	if (t58 != 18446257053814562558LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x325 = -1;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MAX;

	t59 = ((x325*x326)|(x327^x328));

	if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x345 = 42U;
	uint32_t x346 = 922396U;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	volatile uint32_t t60 = 1944U;

	t60 = ((x345*x346)|(x347^x348));

	if (t60 != 38764440U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x354 = -34820;
	int16_t x355 = INT16_MAX;
	static uint8_t x356 = 2U;
	volatile uint32_t t61 = 102U;

	t61 = ((x353*x354)|(x355^x356));

	if (t61 != 65533U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x357 = 3179LLU;
	uint64_t x358 = 12715481LLU;
	static int32_t x359 = INT32_MIN;
	int32_t x360 = -96260247;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x357*x358)|(x359^x360));

	if (t62 != 40724578299LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x361 = UINT64_MAX;
	static uint64_t x362 = 242017LLU;
	int64_t x363 = INT64_MAX;
	volatile uint64_t t63 = 13234LLU;

	t63 = ((x361*x362)|(x363^x364));

	if (t63 != 18446744073709322239LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x365 = UINT16_MAX;
	uint32_t x367 = 1376248U;
	int16_t x368 = 0;
	int64_t t64 = 391923883728449814LL;

	t64 = ((x365*x366)|(x367^x368));

	if (t64 != 1376248LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x373 = UINT64_MAX;
	volatile int8_t x374 = 0;
	static volatile int8_t x376 = -1;

	t65 = ((x373*x374)|(x375^x376));

	if (t65 != 192LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x377 = INT16_MIN;
	volatile uint64_t x378 = 592561545958799626LLU;
	static uint64_t x379 = 75636101752420LLU;
	int32_t x380 = INT32_MAX;

	t66 = ((x377*x378)|(x379^x380));

	if (t66 != 7364771647204612507LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MIN;
	int64_t t67 = 60882796967231000LL;

	t67 = ((x385*x386)|(x387^x388));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x389 = INT16_MAX;
	volatile int64_t x391 = INT64_MIN;
	static volatile int8_t x392 = 18;

	t68 = ((x389*x390)|(x391^x392));

	if (t68 != -32749LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x393 = INT64_MIN;
	volatile uint64_t x394 = 3211274456LLU;
	int16_t x396 = -10;
	volatile uint64_t t69 = 32332330391LLU;

	t69 = ((x393*x394)|(x395^x396));

	if (t69 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x401 = 38U;
	int16_t x402 = INT16_MIN;
	uint64_t x403 = 3323081516728742341LLU;
	int32_t x404 = 21;
	static volatile uint64_t t70 = 223760084716LLU;

	t70 = ((x401*x402)|(x403^x404));

	if (t70 != 18446744073708335568LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x405 = 6601858;
	int64_t x407 = 347197LL;
	volatile int32_t x408 = -139;
	int64_t t71 = 481068555LL;

	t71 = ((x405*x406)|(x407^x408));

	if (t71 != -278712LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MIN;
	volatile int32_t x412 = -1;
	int64_t t72 = 1058733625738459822LL;

	t72 = ((x409*x410)|(x411^x412));

	if (t72 != 4507248623615LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x413 = 122U;
	static int32_t x415 = INT32_MAX;
	int32_t t73 = 23;

	t73 = ((x413*x414)|(x415^x416));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x421 = UINT64_MAX;
	int16_t x423 = 44;
	int32_t x424 = -1;
	static uint64_t t74 = 1947018LLU;

	t74 = ((x421*x422)|(x423^x424));

	if (t74 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x429 = INT16_MAX;
	int64_t x431 = 5027726948797360LL;
	int32_t x432 = INT32_MAX;
	volatile int64_t t75 = 383801345152644LL;

	t75 = ((x429*x430)|(x431^x432));

	if (t75 != -2993LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x433 = INT16_MIN;
	static uint16_t x434 = 166U;
	uint64_t x435 = UINT64_MAX;
	int32_t x436 = -5400739;
	volatile uint64_t t76 = 997662112949125246LLU;

	t76 = ((x433*x434)|(x435^x436));

	if (t76 != 18446744073709512866LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MIN;
	int64_t x444 = INT64_MIN;
	int64_t t77 = INT64_MAX;

	t77 = ((x441*x442)|(x443^x444));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x445 = 122145230U;
	int32_t x446 = INT32_MIN;
	int8_t x447 = -1;
	static uint16_t x448 = 558U;

	t78 = ((x445*x446)|(x447^x448));

	if (t78 != 4294966737U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x449 = INT8_MAX;
	static int32_t x450 = -32609;
	int16_t x451 = INT16_MAX;
	static volatile int64_t t79 = 1297905LL;

	t79 = ((x449*x450)|(x451^x452));

	if (t79 != -4128769LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x457 = INT16_MIN;
	uint8_t x458 = 25U;
	volatile int8_t x459 = 57;
	int64_t x460 = -1LL;
	static volatile int64_t t80 = 2143LL;

	t80 = ((x457*x458)|(x459^x460));

	if (t80 != -58LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x461 = INT8_MAX;
	uint64_t x462 = UINT64_MAX;
	int32_t x463 = INT32_MAX;
	int8_t x464 = -1;
	uint64_t t81 = 6026LLU;

	t81 = ((x461*x462)|(x463^x464));

	if (t81 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x469 = UINT8_MAX;
	static volatile uint32_t x472 = 85U;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x469*x470)|(x471^x472));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x474 = 0;
	static uint32_t x476 = 781977U;
	uint32_t t83 = 111370555U;

	t83 = ((x473*x474)|(x475^x476));

	if (t83 != 781926U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x477 = 942326774LLU;
	int32_t x478 = INT32_MIN;
	volatile int16_t x479 = 5938;
	uint64_t t84 = 4155398LLU;

	t84 = ((x477*x478)|(x479^x480));

	if (t84 != 18446744069424119929LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x485 = -1;
	int8_t x486 = 6;
	uint8_t x487 = UINT8_MAX;

	t85 = ((x485*x486)|(x487^x488));

	if (t85 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x489 = UINT32_MAX;
	uint16_t x490 = 7U;
	int32_t x492 = INT32_MAX;

	t86 = ((x489*x490)|(x491^x492));

	if (t86 != 4294967289U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x494 = -1;
	int32_t x495 = 4718;
	static int32_t x496 = 1;
	volatile int32_t t87 = -1;

	t87 = ((x493*x494)|(x495^x496));

	if (t87 != -28049) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x498 = 1;
	int16_t x499 = 50;
	uint16_t x500 = 1725U;
	volatile int32_t t88 = -531;

	t88 = ((x497*x498)|(x499^x500));

	if (t88 != -31089) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x501 = 242000414942628LL;
	uint64_t x502 = UINT64_MAX;
	volatile int64_t x503 = -1LL;
	uint8_t x504 = 41U;
	uint64_t t89 = 75514227535956LLU;

	t89 = ((x501*x502)|(x503^x504));

	if (t89 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x509 = 0;
	static int32_t x510 = INT32_MIN;
	uint16_t x511 = UINT16_MAX;
	int32_t x512 = -10;
	static volatile int32_t t90 = 107449535;

	t90 = ((x509*x510)|(x511^x512));

	if (t90 != -65527) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x513 = INT32_MIN;
	uint64_t x514 = 155185713594924637LLU;
	int8_t x515 = 12;
	static uint64_t t91 = 1LLU;

	t91 = ((x513*x514)|(x515^x516));

	if (t91 != 3853604439344545779LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x517 = UINT16_MAX;
	int16_t x518 = 6574;
	int32_t x519 = 1;
	int32_t x520 = INT32_MAX;
	int32_t t92 = -119984867;

	t92 = ((x517*x518)|(x519^x520));

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x538 = UINT16_MAX;
	int8_t x540 = INT8_MAX;
	uint64_t t93 = 7LLU;

	t93 = ((x537*x538)|(x539^x540));

	if (t93 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x541 = 8U;
	uint64_t x542 = 5LLU;
	int8_t x543 = INT8_MAX;
	static uint64_t t94 = 65116692826593720LLU;

	t94 = ((x541*x542)|(x543^x544));

	if (t94 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x545 = 1U;
	int16_t x546 = INT16_MIN;
	int64_t x547 = -2115530105376LL;
	static int64_t x548 = -1LL;
	volatile int64_t t95 = -1009375909LL;

	t95 = ((x545*x546)|(x547^x548));

	if (t95 != -24033LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x549 = INT8_MIN;
	int32_t x551 = INT32_MAX;
	static volatile uint8_t x552 = UINT8_MAX;
	uint32_t t96 = 40375U;

	t96 = ((x549*x550)|(x551^x552));

	if (t96 != 2147483520U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x553 = INT8_MIN;
	volatile int16_t x554 = INT16_MIN;
	int32_t x555 = INT32_MAX;
	int32_t t97 = -458843810;

	t97 = ((x553*x554)|(x555^x556));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x557 = INT32_MIN;
	volatile int16_t x559 = -1;
	int64_t x560 = INT64_MIN;

	t98 = ((x557*x558)|(x559^x560));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x561 = INT16_MIN;
	int32_t x562 = -1;
	uint16_t x563 = UINT16_MAX;
	int16_t x564 = 12421;

	t99 = ((x561*x562)|(x563^x564));

	if (t99 != 53114) { NG(); } else { ; }
	
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

