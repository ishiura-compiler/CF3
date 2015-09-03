#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
int16_t x7 = INT16_MIN;
int32_t x11 = INT32_MAX;
static int16_t x14 = 7;
int16_t x18 = INT16_MAX;
volatile uint32_t x28 = 9U;
uint16_t x29 = 967U;
uint64_t x35 = UINT64_MAX;
uint16_t x48 = 14U;
static int16_t x51 = INT16_MIN;
volatile int16_t x60 = INT16_MIN;
int64_t x63 = -1LL;
int32_t x64 = INT32_MIN;
uint8_t x93 = UINT8_MAX;
int64_t t19 = INT64_MIN;
int32_t x104 = INT32_MIN;
static uint32_t t21 = 7734U;
static uint64_t x105 = 131346262993699LLU;
uint32_t x109 = UINT32_MAX;
uint64_t x118 = 286634425LLU;
uint64_t t25 = 13LLU;
uint64_t t27 = 367095324293710290LLU;
uint8_t x134 = UINT8_MAX;
volatile uint16_t x139 = 3959U;
int16_t x142 = 8;
int32_t x144 = -20774;
volatile int64_t t31 = 21177500016453LL;
uint32_t x158 = 35204849U;
int64_t x197 = -1LL;
uint64_t x198 = 50078608118LLU;
uint16_t x199 = 0U;
uint32_t x201 = 920784944U;
volatile uint64_t t43 = 59103LLU;
static int16_t x216 = 0;
volatile int32_t t46 = -266269;
volatile uint32_t x221 = UINT32_MAX;
int16_t x222 = -1;
static uint64_t x230 = 34886LLU;
volatile uint8_t x236 = 14U;
int32_t x239 = INT32_MIN;
volatile int64_t t55 = 107092815057873LL;
int8_t x274 = -1;
int8_t x282 = 12;
volatile uint64_t t61 = 281009431176363LLU;
int8_t x286 = INT8_MIN;
volatile int8_t x287 = INT8_MIN;
int32_t x292 = INT32_MIN;
int8_t x294 = 3;
volatile uint64_t t64 = 445900085LLU;
int8_t x298 = -1;
static volatile int16_t x301 = 9771;
static volatile uint32_t t66 = 20286U;
int16_t x307 = INT16_MIN;
int16_t x309 = -1;
int64_t x319 = -1LL;
static int16_t x320 = 28;
static int8_t x328 = INT8_MIN;
uint64_t x329 = 3374760814580669087LLU;
static int16_t x334 = INT16_MIN;
int16_t x340 = INT16_MAX;
int32_t t76 = -6403346;
volatile int16_t x363 = INT16_MAX;
uint16_t x365 = UINT16_MAX;
volatile int32_t t80 = 3;
int64_t x375 = -511588888LL;
int32_t x376 = INT32_MIN;
int8_t x380 = INT8_MIN;
int64_t x390 = -25798LL;
uint32_t x392 = 2841U;
static volatile uint64_t t85 = 1103392LLU;
int64_t x393 = INT64_MIN;
static int64_t x396 = -1105393599961LL;
static int16_t x408 = -1;
int16_t x414 = 199;
int8_t x416 = INT8_MIN;
int64_t t92 = -540768567790LL;
static int16_t x421 = -4;
static uint32_t x422 = 1623U;
static uint64_t x426 = 24842LLU;
uint64_t t94 = 111411820817LLU;
volatile int64_t t95 = 196212335868360984LL;
volatile uint32_t t96 = 813670815U;
static int8_t x438 = INT8_MAX;
int32_t t97 = 6325467;


void f0(void) {
	int32_t x6 = -1;
	static uint8_t x8 = 0U;
	static int64_t t0 = -119574358LL;

	t0 = ((x5-x6)&(x7&x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -1;
	int64_t x10 = INT64_MAX;
	static int32_t x12 = INT32_MIN;
	volatile int64_t t1 = 1668316700366LL;

	t1 = ((x9-x10)&(x11&x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = 116827532LLU;
	volatile int16_t x15 = INT16_MIN;
	uint32_t x16 = 228461U;
	volatile uint64_t t2 = 3937468LLU;

	t2 = ((x13-x14)&(x15&x16));

	if (t2 != 131072LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 38U;
	uint64_t x19 = 100678LLU;
	int64_t x20 = -2673737359928713431LL;
	static volatile uint64_t t3 = 0LLU;

	t3 = ((x17-x18)&(x19&x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static uint16_t x22 = UINT16_MAX;
	static int16_t x23 = INT16_MIN;
	uint8_t x24 = 115U;
	volatile int32_t t4 = -3;

	t4 = ((x21-x22)&(x23&x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MAX;
	int8_t x26 = -1;
	int32_t x27 = 23;
	uint32_t t5 = 58587165U;

	t5 = ((x25-x26)&(x27&x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x30 = 17U;
	int32_t x31 = INT32_MIN;
	static int8_t x32 = INT8_MAX;
	volatile int32_t t6 = -460694;

	t6 = ((x29-x30)&(x31&x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 69;
	static int8_t x34 = -1;
	int64_t x36 = INT64_MAX;
	uint64_t t7 = 1644718291002643092LLU;

	t7 = ((x33-x34)&(x35&x36));

	if (t7 != 70LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = -199451626828LL;
	uint32_t x42 = 18U;
	int16_t x43 = INT16_MIN;
	volatile int16_t x44 = 8123;
	volatile int64_t t8 = -6682746817LL;

	t8 = ((x41-x42)&(x43&x44));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = INT8_MIN;
	int64_t x46 = 2363627872832154LL;
	volatile int64_t x47 = INT64_MAX;
	volatile int64_t t9 = 39155LL;

	t9 = ((x45-x46)&(x47&x48));

	if (t9 != 6LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	uint32_t x50 = 5619U;
	static int64_t x52 = INT64_MIN;
	volatile int64_t t10 = 407165005059894LL;

	t10 = ((x49-x50)&(x51&x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	volatile int16_t x54 = INT16_MAX;
	int32_t x55 = -2;
	static volatile int16_t x56 = INT16_MIN;
	static volatile int32_t t11 = 2405174;

	t11 = ((x53-x54)&(x55&x56));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 5;
	static int8_t x58 = -1;
	uint64_t x59 = 10048771020733569LLU;
	uint64_t t12 = 24738567767383276LLU;

	t12 = ((x57-x58)&(x59&x60));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 0;
	static int32_t x62 = -789;
	int64_t t13 = -56015426575214LL;

	t13 = ((x61-x62)&(x63&x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -25LL;
	uint8_t x70 = 11U;
	volatile int16_t x71 = -1;
	uint64_t x72 = 16567775LLU;
	volatile uint64_t t14 = 3325289017217950309LLU;

	t14 = ((x69-x70)&(x71&x72));

	if (t14 != 16567772LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	volatile int8_t x74 = -12;
	static uint16_t x75 = 1U;
	uint32_t x76 = 156423U;
	static volatile int64_t t15 = -213177594LL;

	t15 = ((x73-x74)&(x75&x76));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 0U;
	uint8_t x78 = 0U;
	static int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MAX;
	volatile int32_t t16 = 18;

	t16 = ((x77-x78)&(x79&x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = -1;
	uint16_t x83 = 278U;
	int16_t x84 = INT16_MAX;
	int32_t t17 = -3;

	t17 = ((x81-x82)&(x83&x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = -1;
	int16_t x86 = INT16_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	static int8_t x88 = INT8_MAX;
	volatile uint64_t t18 = 266165570165860725LLU;

	t18 = ((x85-x86)&(x87&x88));

	if (t18 != 127LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -319416;

	t19 = ((x93-x94)&(x95&x96));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 3244689LLU;
	uint32_t x98 = 4U;
	static int64_t x99 = -1LL;
	int32_t x100 = INT32_MAX;
	volatile uint64_t t20 = 2062LLU;

	t20 = ((x97-x98)&(x99&x100));

	if (t20 != 3244685LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x101 = UINT32_MAX;
	int32_t x102 = -1940;
	static int16_t x103 = -12;

	t21 = ((x101-x102)&(x103&x104));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x106 = UINT16_MAX;
	static uint64_t x107 = UINT64_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t22 = 2593LLU;

	t22 = ((x105-x106)&(x107&x108));

	if (t22 != 131346262928164LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = -43;
	uint64_t x111 = 1591927LLU;
	uint64_t x112 = 94931304601204LLU;
	volatile uint64_t t23 = 54655373460352LLU;

	t23 = ((x109-x110)&(x111&x112));

	if (t23 != 32LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	int8_t x116 = 1;
	static int32_t t24 = 49201;

	t24 = ((x113-x114)&(x115&x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -117810941LL;
	uint16_t x119 = UINT16_MAX;
	volatile int8_t x120 = 23;

	t25 = ((x117-x118)&(x119&x120));

	if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -1;
	static int16_t x122 = INT16_MIN;
	uint32_t x123 = 6U;
	uint32_t x124 = 384455U;
	uint32_t t26 = 725341218U;

	t26 = ((x121-x122)&(x123&x124));

	if (t26 != 6U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 137775LLU;
	int8_t x126 = 10;
	static int64_t x127 = 3276LL;
	int16_t x128 = -1;

	t27 = ((x125-x126)&(x127&x128));

	if (t27 != 2052LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MAX;
	volatile uint16_t x130 = 8756U;
	static uint32_t x131 = 7499U;
	int64_t x132 = INT64_MIN;
	int64_t t28 = 3009509LL;

	t28 = ((x129-x130)&(x131&x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 2756722U;
	volatile int16_t x135 = -2221;
	int8_t x136 = INT8_MAX;
	uint32_t t29 = 1U;

	t29 = ((x133-x134)&(x135&x136));

	if (t29 != 83U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x137 = -1LL;
	static int16_t x138 = 0;
	int64_t x140 = -1LL;
	int64_t t30 = -2LL;

	t30 = ((x137-x138)&(x139&x140));

	if (t30 != 3959LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int64_t x143 = INT64_MIN;

	t31 = ((x141-x142)&(x143&x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -5;
	static int8_t x146 = 3;
	int8_t x147 = 4;
	static int32_t x148 = INT32_MIN;
	volatile int32_t t32 = -3072;

	t32 = ((x145-x146)&(x147&x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = 449426433069LLU;
	volatile int64_t x154 = 114954LL;
	int8_t x155 = INT8_MAX;
	int16_t x156 = -1015;
	uint64_t t33 = 59108148LLU;

	t33 = ((x153-x154)&(x155&x156));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = INT32_MAX;
	static int32_t x159 = INT32_MIN;
	uint32_t x160 = 47U;
	uint32_t t34 = 1015U;

	t34 = ((x157-x158)&(x159&x160));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	uint8_t x164 = UINT8_MAX;
	uint32_t t35 = 468225721U;

	t35 = ((x161-x162)&(x163&x164));

	if (t35 != 128U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	int32_t x167 = 2344052;
	static uint32_t x168 = 687U;
	volatile uint32_t t36 = 28651294U;

	t36 = ((x165-x166)&(x167&x168));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	int32_t x172 = 4;
	int64_t t37 = -870LL;

	t37 = ((x169-x170)&(x171&x172));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = -11219506147LL;
	int64_t x178 = 5989LL;
	int64_t x179 = 180LL;
	volatile uint32_t x180 = 25U;
	volatile int64_t t38 = -347328LL;

	t38 = ((x177-x178)&(x179&x180));

	if (t38 != 16LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -1;
	int32_t x182 = INT32_MIN;
	int32_t x183 = -1;
	uint64_t x184 = 522287LLU;
	uint64_t t39 = 398614984458203936LLU;

	t39 = ((x181-x182)&(x183&x184));

	if (t39 != 522287LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MAX;
	volatile int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MAX;
	int32_t x192 = -248;
	int64_t t40 = 21266976102LL;

	t40 = ((x189-x190)&(x191&x192));

	if (t40 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x193 = 37;
	int8_t x194 = -1;
	volatile int16_t x195 = -7842;
	static uint16_t x196 = 29540U;
	int32_t t41 = 4;

	t41 = ((x193-x194)&(x195&x196));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x200 = INT16_MIN;
	uint64_t t42 = 1731412LLU;

	t42 = ((x197-x198)&(x199&x200));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x202 = -1;
	int8_t x203 = 3;
	static uint64_t x204 = 103730395924549LLU;

	t43 = ((x201-x202)&(x203&x204));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x205 = UINT16_MAX;
	uint16_t x206 = 3U;
	static uint16_t x207 = 2U;
	static int32_t x208 = INT32_MIN;
	static int32_t t44 = 392820;

	t44 = ((x205-x206)&(x207&x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = 73598LL;
	int8_t x210 = 3;
	int8_t x211 = -1;
	static int32_t x212 = 3533;
	int64_t t45 = -6897647264LL;

	t45 = ((x209-x210)&(x211&x212));

	if (t45 != 3401LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x213 = 5830;
	static uint16_t x214 = UINT16_MAX;
	static int8_t x215 = -1;

	t46 = ((x213-x214)&(x215&x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x217 = -3;
	uint8_t x218 = 2U;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -1;
	int64_t t47 = INT64_MIN;

	t47 = ((x217-x218)&(x219&x220));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x223 = 50506;
	int64_t x224 = INT64_MAX;
	volatile int64_t t48 = 2028693426842201LL;

	t48 = ((x221-x222)&(x223&x224));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x225 = INT8_MAX;
	int32_t x226 = 143822;
	volatile uint8_t x227 = UINT8_MAX;
	uint32_t x228 = UINT32_MAX;
	uint32_t t49 = 113050U;

	t49 = ((x225-x226)&(x227&x228));

	if (t49 != 177U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = INT32_MAX;
	volatile int32_t x231 = -1;
	static uint32_t x232 = UINT32_MAX;
	uint64_t t50 = 8060345LLU;

	t50 = ((x229-x230)&(x231&x232));

	if (t50 != 2147448761LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x233 = 496797887912840411LL;
	int64_t x234 = -1LL;
	static volatile uint32_t x235 = 4837896U;
	int64_t t51 = -20064LL;

	t51 = ((x233-x234)&(x235&x236));

	if (t51 != 8LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x237 = INT64_MIN;
	volatile int64_t x238 = -17877265261LL;
	int16_t x240 = INT16_MIN;
	volatile int64_t t52 = -774427051LL;

	t52 = ((x237-x238)&(x239&x240));

	if (t52 != -9223372019674906624LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = -97;
	uint32_t x242 = 4092031U;
	volatile uint32_t x243 = UINT32_MAX;
	int8_t x244 = 1;
	uint32_t t53 = 906U;

	t53 = ((x241-x242)&(x243&x244));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x245 = INT64_MIN;
	volatile int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MAX;
	static volatile int16_t x248 = INT16_MAX;
	static volatile int64_t t54 = -2105026156487LL;

	t54 = ((x245-x246)&(x247&x248));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x249 = -202689LL;
	int64_t x250 = -1LL;
	volatile int32_t x251 = 839;
	static uint8_t x252 = 14U;

	t55 = ((x249-x250)&(x251&x252));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = 9182U;
	volatile int32_t x254 = INT32_MIN;
	static int32_t x255 = 622648;
	int16_t x256 = 31;
	volatile uint32_t t56 = 335U;

	t56 = ((x253-x254)&(x255&x256));

	if (t56 != 24U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = 274U;
	static int32_t x262 = INT32_MIN;
	int8_t x263 = -1;
	int8_t x264 = 9;
	uint32_t t57 = 1623902222U;

	t57 = ((x261-x262)&(x263&x264));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x265 = UINT64_MAX;
	uint16_t x266 = UINT16_MAX;
	int16_t x267 = INT16_MAX;
	uint8_t x268 = 28U;
	static uint64_t t58 = 7691521896873770LLU;

	t58 = ((x265-x266)&(x267&x268));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = 6;
	int16_t x270 = -1;
	uint64_t x271 = 27685127531LLU;
	uint16_t x272 = 2547U;
	volatile uint64_t t59 = 11869428020654962LLU;

	t59 = ((x269-x270)&(x271&x272));

	if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x273 = INT32_MIN;
	int8_t x275 = 0;
	volatile int64_t x276 = INT64_MAX;
	static int64_t t60 = -1032358LL;

	t60 = ((x273-x274)&(x275&x276));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x281 = UINT64_MAX;
	volatile int8_t x283 = 2;
	uint16_t x284 = UINT16_MAX;

	t61 = ((x281-x282)&(x283&x284));

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x285 = INT8_MAX;
	int32_t x288 = INT32_MIN;
	int32_t t62 = 90718859;

	t62 = ((x285-x286)&(x287&x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x289 = INT8_MIN;
	volatile int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MIN;
	volatile int32_t t63 = INT32_MIN;

	t63 = ((x289-x290)&(x291&x292));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x293 = 7531U;
	int32_t x295 = INT32_MIN;
	uint64_t x296 = 449127398LLU;

	t64 = ((x293-x294)&(x295&x296));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MIN;
	static int64_t x299 = 388258141040LL;
	uint8_t x300 = UINT8_MAX;
	volatile int64_t t65 = -250004436215597LL;

	t65 = ((x297-x298)&(x299&x300));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x302 = 0U;
	volatile uint16_t x303 = UINT16_MAX;
	uint32_t x304 = 16299351U;

	t66 = ((x301-x302)&(x303&x304));

	if (t66 != 9219U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MIN;
	int64_t x306 = 594LL;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t67 = 161334LLU;

	t67 = ((x305-x306)&(x307&x308));

	if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x310 = -17;
	int8_t x311 = INT8_MAX;
	volatile int32_t x312 = INT32_MAX;
	int32_t t68 = 369032608;

	t68 = ((x309-x310)&(x311&x312));

	if (t68 != 16) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MIN;
	volatile int64_t t69 = 968522530698151927LL;

	t69 = ((x317-x318)&(x319&x320));

	if (t69 != 28LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x321 = 259;
	volatile uint32_t x322 = UINT32_MAX;
	static volatile uint32_t x323 = 605030079U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t70 = 589448210700517LL;

	t70 = ((x321-x322)&(x323&x324));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x325 = -1;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	volatile uint64_t t71 = 82504403178LLU;

	t71 = ((x325-x326)&(x327&x328));

	if (t71 != 32640LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x330 = 810182U;
	static volatile int64_t x331 = INT64_MAX;
	int8_t x332 = INT8_MAX;
	uint64_t t72 = 72488042556LLU;

	t72 = ((x329-x330)&(x331&x332));

	if (t72 != 89LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = INT16_MIN;
	uint64_t x335 = 1LLU;
	int8_t x336 = INT8_MIN;
	uint64_t t73 = 54905LLU;

	t73 = ((x333-x334)&(x335&x336));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x337 = 6U;
	static uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	int32_t t74 = 1098;

	t74 = ((x337-x338)&(x339&x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = INT16_MAX;
	int16_t x346 = -1;
	int16_t x347 = -1;
	int32_t x348 = 4971379;
	volatile int32_t t75 = 1626;

	t75 = ((x345-x346)&(x347&x348));

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x349 = 6;
	static uint8_t x350 = 8U;
	int32_t x351 = INT32_MIN;
	static uint8_t x352 = UINT8_MAX;

	t76 = ((x349-x350)&(x351&x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x353 = INT16_MAX;
	uint32_t x354 = UINT32_MAX;
	uint64_t x355 = 19286042790LLU;
	volatile uint64_t x356 = UINT64_MAX;
	volatile uint64_t t77 = 507LLU;

	t77 = ((x353-x354)&(x355&x356));

	if (t77 != 32768LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x357 = -728725063833628487LL;
	uint32_t x358 = 28986U;
	static uint32_t x359 = 1949U;
	static volatile int32_t x360 = INT32_MIN;
	volatile int64_t t78 = -217LL;

	t78 = ((x357-x358)&(x359&x360));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;
	static uint16_t x364 = UINT16_MAX;
	volatile int64_t t79 = -291823819612519275LL;

	t79 = ((x361-x362)&(x363&x364));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x366 = 62U;
	static int16_t x367 = -1;
	static int32_t x368 = -1;

	t80 = ((x365-x366)&(x367&x368));

	if (t80 != 65473) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = -1;
	volatile int32_t x374 = INT32_MIN;
	static volatile int64_t t81 = -14889460LL;

	t81 = ((x373-x374)&(x375&x376));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x378 = INT16_MAX;
	int32_t x379 = INT32_MIN;
	int32_t t82 = -1088;

	t82 = ((x377-x378)&(x379&x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x381 = -12;
	static int8_t x382 = -1;
	int8_t x383 = 1;
	volatile int64_t x384 = INT64_MIN;
	int64_t t83 = -52702763402LL;

	t83 = ((x381-x382)&(x383&x384));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x385 = 97663068935420952LLU;
	volatile int32_t x386 = -1839073;
	static int32_t x387 = 584;
	volatile int64_t x388 = -1LL;
	uint64_t t84 = 103064705509075LLU;

	t84 = ((x385-x386)&(x387&x388));

	if (t84 != 584LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = 1543470LLU;
	int8_t x391 = INT8_MIN;

	t85 = ((x389-x390)&(x391&x392));

	if (t85 != 256LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	int64_t t86 = 6167259799682LL;

	t86 = ((x393-x394)&(x395&x396));

	if (t86 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x397 = UINT8_MAX;
	volatile uint16_t x398 = 15176U;
	int8_t x399 = INT8_MAX;
	volatile int64_t x400 = INT64_MIN;
	int64_t t87 = -1510433763401LL;

	t87 = ((x397-x398)&(x399&x400));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = INT16_MAX;
	int64_t x402 = INT64_MAX;
	int64_t x403 = -1LL;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t88 = 7317512581181455105LLU;

	t88 = ((x401-x402)&(x403&x404));

	if (t88 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = 17128722;
	int32_t x406 = INT32_MAX;
	int32_t x407 = 207441243;
	volatile int32_t t89 = -15958556;

	t89 = ((x405-x406)&(x407&x408));

	if (t89 != 347411) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MAX;
	int8_t x410 = INT8_MIN;
	volatile int64_t x411 = 38794053645LL;
	int64_t x412 = -1LL;
	volatile int64_t t90 = 6298682128223309LL;

	t90 = ((x409-x410)&(x411&x412));

	if (t90 != 13LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = -1;
	uint16_t x415 = 207U;
	volatile int32_t t91 = -15450;

	t91 = ((x413-x414)&(x415&x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x417 = INT16_MIN;
	volatile int64_t x418 = INT64_MIN;
	int8_t x419 = INT8_MAX;
	int8_t x420 = 30;

	t92 = ((x417-x418)&(x419&x420));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x423 = -1;
	uint8_t x424 = 0U;
	volatile uint32_t t93 = 19229486U;

	t93 = ((x421-x422)&(x423&x424));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = INT8_MIN;
	volatile int8_t x427 = 6;
	volatile int32_t x428 = 123832;

	t94 = ((x425-x426)&(x427&x428));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = -1LL;
	int64_t x430 = 3674616LL;
	volatile int8_t x431 = INT8_MAX;
	static int64_t x432 = INT64_MIN;

	t95 = ((x429-x430)&(x431&x432));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x433 = 7;
	static int8_t x434 = -6;
	static uint32_t x435 = UINT32_MAX;
	static int16_t x436 = INT16_MAX;

	t96 = ((x433-x434)&(x435&x436));

	if (t96 != 13U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = -4;
	uint8_t x439 = UINT8_MAX;
	int16_t x440 = 18;

	t97 = ((x437-x438)&(x439&x440));

	if (t97 != 16) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x441 = INT32_MIN;
	uint64_t x442 = UINT64_MAX;
	int16_t x443 = 1439;
	uint64_t x444 = 3LLU;
	static uint64_t t98 = 777218084809155LLU;

	t98 = ((x441-x442)&(x443&x444));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x445 = INT32_MIN;
	static int64_t x446 = -30035060981116814LL;
	int32_t x447 = -29072;
	int64_t x448 = -438026673168447LL;
	volatile int64_t t99 = 3980LL;

	t99 = ((x445-x446)&(x447&x448));

	if (t99 != 29889777269870080LL) { NG(); } else { ; }
	
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

