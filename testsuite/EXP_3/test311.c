#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x1 = INT16_MAX;
int32_t t1 = 1567;
int16_t x11 = -1;
int64_t x12 = -1LL;
static uint16_t x23 = 1U;
int8_t x26 = INT8_MIN;
int8_t x29 = INT8_MAX;
static int16_t x43 = INT16_MIN;
int32_t x44 = INT32_MIN;
volatile int32_t t10 = -616;
volatile uint32_t t11 = 2029983697U;
volatile int64_t x53 = -85326520603LL;
uint32_t x54 = 4052773U;
uint64_t t14 = 82LLU;
int64_t x68 = -1LL;
uint64_t x72 = 57883394LLU;
int16_t x77 = INT16_MAX;
int8_t x78 = INT8_MAX;
int64_t t17 = 1080879845426LL;
int64_t x82 = -1LL;
int16_t x88 = INT16_MAX;
int32_t x95 = INT32_MAX;
static int64_t x97 = INT64_MIN;
int32_t x98 = INT32_MAX;
volatile uint16_t x100 = UINT16_MAX;
int64_t t22 = 6LL;
volatile int32_t x102 = INT32_MIN;
int64_t x104 = -1LL;
int16_t x114 = INT16_MIN;
volatile int32_t t26 = 174;
int16_t x121 = -1;
uint32_t t27 = 1U;
int64_t x128 = -1LL;
uint64_t x135 = 4276064944023186LLU;
uint8_t x136 = 1U;
static int32_t x140 = -1;
int64_t t31 = 5495LL;
uint16_t x152 = 0U;
volatile int32_t x154 = 30431460;
volatile uint64_t x169 = 593048725661LLU;
uint64_t t39 = 330046LLU;
static volatile int8_t x174 = INT8_MIN;
uint64_t x176 = 259731204048LLU;
static uint8_t x193 = 0U;
int32_t x209 = INT32_MIN;
int16_t x211 = -29;
volatile int8_t x224 = 1;
volatile int32_t t47 = 78600;
volatile int64_t x233 = 1LL;
uint8_t x249 = 9U;
uint32_t x250 = 945249205U;
volatile uint16_t x253 = 1990U;
static int64_t x265 = -1LL;
uint64_t x270 = 1LLU;
static volatile uint64_t x271 = 1266LLU;
uint32_t x275 = 20U;
volatile int32_t t60 = -16306;
static int64_t x281 = INT64_MIN;
volatile uint8_t x283 = UINT8_MAX;
uint8_t x289 = 120U;
volatile uint32_t t64 = 206113228U;
volatile uint32_t t65 = UINT32_MAX;
volatile uint64_t x305 = 194908555546LLU;
static int16_t x306 = 4;
int32_t x310 = -393;
uint64_t x316 = UINT64_MAX;
volatile uint64_t t68 = 28865161341108807LLU;
uint64_t x322 = 5505441LLU;
int32_t t70 = 132731022;
volatile int16_t x330 = -1;
volatile uint64_t x333 = 144825595042499LLU;
int32_t x338 = -4978;
int32_t x360 = INT32_MAX;
static volatile uint32_t t77 = 2457U;
static uint16_t x367 = 217U;
volatile int16_t x369 = INT16_MIN;
uint32_t x374 = UINT32_MAX;
uint16_t x384 = 8U;
volatile int32_t x389 = INT32_MIN;
int64_t x390 = INT64_MAX;
int32_t x392 = INT32_MAX;
int32_t x399 = -75;
int32_t x400 = -670;
uint64_t t86 = 56508670108878559LLU;
int8_t x404 = INT8_MIN;
int16_t x405 = INT16_MIN;
volatile int32_t x406 = INT32_MAX;
uint8_t x407 = 24U;
uint64_t x409 = UINT64_MAX;
static int32_t x425 = INT32_MAX;
uint32_t x428 = 199U;
int32_t t94 = -2;
volatile int32_t x446 = INT32_MIN;
int64_t x451 = -1LL;
volatile int64_t t96 = 576885677513060333LL;
int64_t x454 = INT64_MIN;
uint32_t x456 = UINT32_MAX;
int16_t x458 = INT16_MIN;
volatile uint64_t x459 = 62810722807LLU;
int32_t x462 = INT32_MAX;
int16_t x464 = INT16_MAX;


void f0(void) {
	int8_t x2 = -1;
	int32_t x3 = -21543899;
	int64_t x4 = -1LL;
	int64_t t0 = -3LL;

	t0 = ((x1&x2)|(x3-x4));

	if (t0 != -21528577LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 19959U;
	static int8_t x6 = INT8_MIN;
	int16_t x7 = 1;
	uint16_t x8 = UINT16_MAX;

	t1 = ((x5&x6)|(x7-x8));

	if (t1 != -45694) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -372924LL;
	uint16_t x10 = 1U;
	int64_t t2 = 68487791260999LL;

	t2 = ((x9&x10)|(x11-x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int16_t x14 = INT16_MAX;
	int64_t x15 = -1LL;
	int16_t x16 = -1;
	int64_t t3 = -39386LL;

	t3 = ((x13&x14)|(x15-x16));

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 464053360350LL;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	uint64_t t4 = 122528672726910233LLU;

	t4 = ((x17&x18)|(x19-x20));

	if (t4 != 464053338239LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = 30LL;
	volatile uint64_t x24 = 139039116LLU;
	static volatile uint64_t t5 = 3739873417LLU;

	t5 = ((x21&x22)|(x23-x24));

	if (t5 != 18446744073570512501LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	uint64_t x27 = 120132790965LLU;
	int16_t x28 = INT16_MAX;
	uint64_t t6 = 1251471698033645358LLU;

	t6 = ((x25&x26)|(x27-x28));

	if (t6 != 9223372156987534006LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 0;
	int32_t x31 = -1;
	int32_t x32 = -2320;
	static volatile int32_t t7 = -34;

	t7 = ((x29&x30)|(x31-x32));

	if (t7 != 2319) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	static uint8_t x34 = UINT8_MAX;
	int16_t x35 = -1;
	int16_t x36 = INT16_MAX;
	volatile uint32_t t8 = 1065518081U;

	t8 = ((x33&x34)|(x35-x36));

	if (t8 != 4294934783U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 25U;
	uint64_t x38 = 36968331773686050LLU;
	uint8_t x39 = 62U;
	static int8_t x40 = INT8_MAX;
	uint64_t t9 = 2LLU;

	t9 = ((x37&x38)|(x39-x40));

	if (t9 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -72690;
	uint16_t x42 = UINT16_MAX;

	t10 = ((x41&x42)|(x43-x44));

	if (t10 != 2147476494) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	uint32_t x50 = UINT32_MAX;
	static uint8_t x51 = UINT8_MAX;
	static int8_t x52 = INT8_MIN;

	t11 = ((x49&x50)|(x51-x52));

	if (t11 != 2147484031U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x55 = UINT16_MAX;
	volatile uint16_t x56 = 7324U;
	volatile int64_t t12 = 655456883681438371LL;

	t12 = ((x53&x54)|(x55-x56));

	if (t12 != 2422631LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 0;
	static int64_t x58 = INT64_MAX;
	int64_t x59 = 100LL;
	volatile int64_t x60 = -505546841378LL;
	int64_t t13 = -14LL;

	t13 = ((x57&x58)|(x59-x60));

	if (t13 != 505546841478LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 2362171LLU;
	static volatile int16_t x62 = INT16_MIN;
	int8_t x63 = -1;
	uint8_t x64 = UINT8_MAX;

	t14 = ((x61&x62)|(x63-x64));

	if (t14 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	static uint64_t x66 = UINT64_MAX;
	volatile int8_t x67 = INT8_MAX;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = ((x65&x66)|(x67-x68));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	uint64_t x70 = UINT64_MAX;
	uint16_t x71 = UINT16_MAX;
	static volatile uint64_t t16 = 416612LLU;

	t16 = ((x69&x70)|(x71-x72));

	if (t16 != 18446744073651733759LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MIN;

	t17 = ((x77&x78)|(x79-x80));

	if (t17 != -9223372034707292033LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;
	int64_t t18 = 461525LL;

	t18 = ((x81&x82)|(x83-x84));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x85 = 7960U;
	int16_t x86 = 28;
	int16_t x87 = INT16_MIN;
	volatile uint32_t t19 = 133U;

	t19 = ((x85&x86)|(x87-x88));

	if (t19 != 4294901785U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MAX;
	int16_t x90 = -1;
	static volatile uint32_t x91 = UINT32_MAX;
	volatile int32_t x92 = INT32_MIN;
	volatile int64_t t20 = INT64_MAX;

	t20 = ((x89&x90)|(x91-x92));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 40125477;
	volatile int16_t x94 = INT16_MIN;
	static int8_t x96 = INT8_MAX;
	static volatile int32_t t21 = -721074;

	t21 = ((x93&x94)|(x95-x96));

	if (t21 != 2147483520) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x99 = INT64_MAX;

	t22 = ((x97&x98)|(x99-x100));

	if (t22 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	int8_t x103 = INT8_MAX;
	volatile int64_t t23 = -5LL;

	t23 = ((x101&x102)|(x103-x104));

	if (t23 != -2147483520LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -19796;
	volatile int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	volatile int64_t x112 = -873974401320371416LL;
	static volatile int64_t t24 = 167LL;

	t24 = ((x109&x110)|(x111-x112));

	if (t24 != -444840489LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -21;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;
	volatile int64_t t25 = -1349937267546LL;

	t25 = ((x113&x114)|(x115-x116));

	if (t25 != -32640LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = UINT16_MAX;
	int16_t x118 = -3;
	static uint16_t x119 = 35U;
	int16_t x120 = -1;

	t26 = ((x117&x118)|(x119-x120));

	if (t26 != 65533) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x122 = INT16_MIN;
	static int32_t x123 = 12669097;
	volatile uint32_t x124 = 3072U;

	t27 = ((x121&x122)|(x123-x124));

	if (t27 != 4294952105U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MAX;
	int16_t x127 = INT16_MAX;
	int64_t t28 = 55LL;

	t28 = ((x125&x126)|(x127-x128));

	if (t28 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 12U;
	int8_t x130 = -1;
	static int64_t x131 = 698683LL;
	volatile uint32_t x132 = 2U;
	int64_t t29 = 1489989583LL;

	t29 = ((x129&x130)|(x131-x132));

	if (t29 != 698685LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x133 = UINT8_MAX;
	uint8_t x134 = 3U;
	volatile uint64_t t30 = 13867212821387085LLU;

	t30 = ((x133&x134)|(x135-x136));

	if (t30 != 4276064944023187LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x137 = UINT32_MAX;
	static int64_t x138 = INT64_MIN;
	volatile int8_t x139 = 5;

	t31 = ((x137&x138)|(x139-x140));

	if (t31 != 6LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MAX;
	volatile int32_t x142 = INT32_MIN;
	static int64_t x143 = -2604511LL;
	volatile int16_t x144 = INT16_MIN;
	int64_t t32 = 35458425004239722LL;

	t32 = ((x141&x142)|(x143-x144));

	if (t32 != -2571743LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x145 = 68U;
	volatile int8_t x146 = -1;
	int8_t x147 = -1;
	int8_t x148 = -1;
	int32_t t33 = -6014;

	t33 = ((x145&x146)|(x147-x148));

	if (t33 != 68) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 74159513417304539LLU;
	int64_t x150 = INT64_MIN;
	int64_t x151 = -1LL;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = ((x149&x150)|(x151-x152));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = 204U;
	static uint64_t x155 = UINT64_MAX;
	int8_t x156 = -1;
	static volatile uint64_t t35 = 8617666124670000357LLU;

	t35 = ((x153&x154)|(x155-x156));

	if (t35 != 196LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x157 = 721U;
	volatile int8_t x158 = INT8_MIN;
	static int32_t x159 = INT32_MAX;
	static uint8_t x160 = 2U;
	volatile uint32_t t36 = 1760U;

	t36 = ((x157&x158)|(x159-x160));

	if (t36 != 2147483645U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	static int32_t x162 = INT32_MAX;
	volatile int16_t x163 = -1;
	volatile int16_t x164 = INT16_MAX;
	volatile int32_t t37 = 14669;

	t37 = ((x161&x162)|(x163-x164));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 118U;
	volatile uint16_t x166 = 18168U;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -6985;
	volatile uint32_t t38 = 44388555U;

	t38 = ((x165&x166)|(x167-x168));

	if (t38 != 7288U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x170 = 13732U;
	static int8_t x171 = 14;
	int32_t x172 = INT32_MAX;

	t39 = ((x169&x170)|(x171-x172));

	if (t39 != 18446744071562076303LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = UINT16_MAX;
	volatile uint16_t x175 = UINT16_MAX;
	static volatile uint64_t t40 = 130451444106LLU;

	t40 = ((x173&x174)|(x175-x176));

	if (t40 != 18446743813978455983LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -1;
	volatile int8_t x178 = -1;
	int16_t x179 = -20;
	static volatile int32_t x180 = -1;
	int32_t t41 = 3;

	t41 = ((x177&x178)|(x179-x180));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = 0;
	uint16_t x183 = UINT16_MAX;
	static int8_t x184 = INT8_MIN;
	int32_t t42 = -3535;

	t42 = ((x181&x182)|(x183-x184));

	if (t42 != 65663) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MIN;
	uint8_t x186 = UINT8_MAX;
	uint64_t x187 = 145952LLU;
	int64_t x188 = INT64_MIN;
	static volatile uint64_t t43 = 1933038206LLU;

	t43 = ((x185&x186)|(x187-x188));

	if (t43 != 9223372036854921760LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -6;
	int32_t x190 = -1;
	int32_t x191 = 14;
	volatile int16_t x192 = 1;
	volatile int32_t t44 = 1;

	t44 = ((x189&x190)|(x191-x192));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	static uint8_t x196 = 21U;
	int32_t t45 = 7432438;

	t45 = ((x193&x194)|(x195-x196));

	if (t45 != -32789) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x210 = -1LL;
	int8_t x212 = INT8_MIN;
	static volatile int64_t t46 = -315LL;

	t46 = ((x209&x210)|(x211-x212));

	if (t46 != -2147483549LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x221 = UINT16_MAX;
	static volatile int8_t x222 = -1;
	int32_t x223 = -1;

	t47 = ((x221&x222)|(x223-x224));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int16_t x226 = INT16_MIN;
	volatile int64_t x227 = -665057941LL;
	int64_t x228 = INT64_MIN;
	int64_t t48 = 190894104LL;

	t48 = ((x225&x226)|(x227-x228));

	if (t48 != 9223372036854744427LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x229 = UINT8_MAX;
	static volatile int16_t x230 = 840;
	uint32_t x231 = 31639889U;
	int32_t x232 = INT32_MIN;
	volatile uint32_t t49 = 1U;

	t49 = ((x229&x230)|(x231-x232));

	if (t49 != 2179123545U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x234 = 3028666U;
	volatile int32_t x235 = -1;
	int32_t x236 = INT32_MIN;
	static volatile int64_t t50 = 1031LL;

	t50 = ((x233&x234)|(x235-x236));

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x237 = INT16_MIN;
	int16_t x238 = -1;
	int8_t x239 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t51 = 1U;

	t51 = ((x237&x238)|(x239-x240));

	if (t51 != 4294967169U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = 803U;
	int8_t x246 = -1;
	volatile int16_t x247 = -12523;
	volatile uint64_t x248 = UINT64_MAX;
	uint64_t t52 = 46148651771856LLU;

	t52 = ((x245&x246)|(x247-x248));

	if (t52 != 18446744073709539127LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x251 = 119U;
	int16_t x252 = -1;
	volatile uint32_t t53 = 44101017U;

	t53 = ((x249&x250)|(x251-x252));

	if (t53 != 121U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x254 = 3U;
	uint16_t x255 = 9U;
	int8_t x256 = INT8_MAX;
	int32_t t54 = 8311;

	t54 = ((x253&x254)|(x255-x256));

	if (t54 != -118) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = -1LL;
	uint64_t x258 = 132510164LLU;
	int16_t x259 = 51;
	int8_t x260 = -26;
	static volatile uint64_t t55 = 11381769180829LLU;

	t55 = ((x257&x258)|(x259-x260));

	if (t55 != 132510173LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = INT32_MAX;
	static int64_t x262 = -14674228315766547LL;
	volatile uint32_t x263 = UINT32_MAX;
	volatile int16_t x264 = INT16_MAX;
	int64_t t56 = 99LL;

	t56 = ((x261&x262)|(x263-x264));

	if (t56 != 4294951149LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x266 = -7;
	int16_t x267 = 1;
	uint16_t x268 = 15249U;
	static volatile int64_t t57 = 32325715384LL;

	t57 = ((x265&x266)|(x267-x268));

	if (t57 != -7LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = INT8_MIN;
	int8_t x272 = -1;
	volatile uint64_t t58 = 161LLU;

	t58 = ((x269&x270)|(x271-x272));

	if (t58 != 1267LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x273 = 0U;
	static uint8_t x274 = 117U;
	volatile int64_t x276 = INT64_MAX;
	int64_t t59 = 434359109533055LL;

	t59 = ((x273&x274)|(x275-x276));

	if (t59 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = 493U;
	int16_t x278 = INT16_MAX;
	int8_t x279 = INT8_MAX;
	static uint8_t x280 = 14U;

	t60 = ((x277&x278)|(x279-x280));

	if (t60 != 509) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x282 = INT32_MIN;
	volatile int16_t x284 = -1;
	volatile int64_t t61 = -199LL;

	t61 = ((x281&x282)|(x283-x284));

	if (t61 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x285 = 12677U;
	int8_t x286 = INT8_MIN;
	uint64_t x287 = 27222LLU;
	static volatile uint64_t x288 = UINT64_MAX;
	uint64_t t62 = 6LLU;

	t62 = ((x285&x286)|(x287-x288));

	if (t62 != 31703LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x290 = INT16_MIN;
	uint32_t x291 = 6727259U;
	static int64_t x292 = 47561073624771LL;
	volatile int64_t t63 = -20LL;

	t63 = ((x289&x290)|(x291-x292));

	if (t63 != -47561066897512LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x293 = 1013984U;
	volatile int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	static int16_t x296 = -521;

	t64 = ((x293&x294)|(x295-x296));

	if (t64 != 2148498057U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = -1;
	uint32_t x299 = UINT32_MAX;
	int32_t x300 = INT32_MIN;

	t65 = ((x297&x298)|(x299-x300));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x307 = INT64_MIN;
	static int8_t x308 = INT8_MIN;
	volatile uint64_t t66 = 11LLU;

	t66 = ((x305&x306)|(x307-x308));

	if (t66 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x309 = -1;
	volatile int16_t x311 = 0;
	static int16_t x312 = 1997;
	volatile int32_t t67 = 7895;

	t67 = ((x309&x310)|(x311-x312));

	if (t67 != -393) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = -502564;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;

	t68 = ((x313&x314)|(x315-x316));

	if (t68 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x321 = INT16_MIN;
	int16_t x323 = -6;
	volatile uint8_t x324 = 0U;
	volatile uint64_t t69 = 7070126103821637LLU;

	t69 = ((x321&x322)|(x323-x324));

	if (t69 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = -1;
	int8_t x326 = 6;
	int16_t x327 = INT16_MIN;
	volatile int8_t x328 = INT8_MIN;

	t70 = ((x325&x326)|(x327-x328));

	if (t70 != -32634) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = 14617631543LLU;
	volatile int64_t x331 = -826855631LL;
	uint64_t x332 = 177229562073LLU;
	volatile uint64_t t71 = 3007493697897408LLU;

	t71 = ((x329&x330)|(x331-x332));

	if (t71 != 18446743901630365567LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x334 = INT32_MIN;
	uint64_t x335 = 577159LLU;
	static int16_t x336 = INT16_MAX;
	volatile uint64_t t72 = 2073883LLU;

	t72 = ((x333&x334)|(x335-x336));

	if (t72 != 144824150281864LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x337 = 37593324598894LLU;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = 5U;
	uint64_t t73 = 125LLU;

	t73 = ((x337&x338)|(x339-x340));

	if (t73 != 37593848741887LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x342 = 3281U;
	int32_t x343 = -200;
	volatile uint16_t x344 = UINT16_MAX;
	int64_t t74 = -25300LL;

	t74 = ((x341&x342)|(x343-x344));

	if (t74 != -65735LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = -1LL;
	volatile int64_t x346 = -1LL;
	volatile int16_t x347 = INT16_MIN;
	volatile int32_t x348 = 4230;
	static int64_t t75 = 6104416259LL;

	t75 = ((x345&x346)|(x347-x348));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x349 = 51;
	volatile uint32_t x350 = UINT32_MAX;
	volatile int64_t x351 = 14356765601LL;
	int8_t x352 = -1;
	volatile int64_t t76 = -267204747665504791LL;

	t76 = ((x349&x350)|(x351-x352));

	if (t76 != 14356765619LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x357 = 1592U;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = 0U;

	t77 = ((x357&x358)|(x359-x360));

	if (t77 != 2147483649U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x361 = 224867260897579LLU;
	volatile int64_t x362 = INT64_MAX;
	uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 14U;
	volatile uint64_t t78 = 5700544390995939LLU;

	t78 = ((x361&x362)|(x363-x364));

	if (t78 != 224867307749371LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = 477;
	int8_t x366 = INT8_MIN;
	static volatile uint64_t x368 = 2064869LLU;
	uint64_t t79 = 3LLU;

	t79 = ((x365&x366)|(x367-x368));

	if (t79 != 18446744073707487220LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	volatile uint32_t x372 = 357955475U;
	volatile uint64_t t80 = 22608LLU;

	t80 = ((x369&x370)|(x371-x372));

	if (t80 != 18446744073709521004LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x373 = UINT16_MAX;
	volatile int64_t x375 = -463065080549672LL;
	volatile uint16_t x376 = 12U;
	static volatile int64_t t81 = 68055785LL;

	t81 = ((x373&x374)|(x375-x376));

	if (t81 != -463065080528897LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x377 = INT64_MIN;
	static uint32_t x378 = 10248025U;
	int8_t x379 = 1;
	uint8_t x380 = 104U;
	static volatile int64_t t82 = 56634883LL;

	t82 = ((x377&x378)|(x379-x380));

	if (t82 != -103LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = -684;
	static uint64_t x383 = UINT64_MAX;
	uint64_t t83 = 5635554576LLU;

	t83 = ((x381&x382)|(x383-x384));

	if (t83 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x391 = 25886523U;
	static int64_t t84 = 0LL;

	t84 = ((x389&x390)|(x391-x392));

	if (t84 != 9223372034733178684LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x393 = 3935555;
	static int32_t x394 = 123401354;
	int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t85 = -476165116;

	t85 = ((x393&x394)|(x395-x396));

	if (t85 != 2147451906) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x397 = 15424U;
	uint64_t x398 = 335763068674LLU;

	t86 = ((x397&x398)|(x399-x400));

	if (t86 != 5715LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = 12;
	int16_t x402 = INT16_MAX;
	int16_t x403 = -6589;
	volatile int32_t t87 = -122916495;

	t87 = ((x401&x402)|(x403-x404));

	if (t87 != -6449) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x408 = -1LL;
	volatile int64_t t88 = 1600256LL;

	t88 = ((x405&x406)|(x407-x408));

	if (t88 != 2147450905LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x410 = UINT64_MAX;
	uint64_t x411 = 98061LLU;
	int8_t x412 = INT8_MIN;
	uint64_t t89 = UINT64_MAX;

	t89 = ((x409&x410)|(x411-x412));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x421 = 1458323642U;
	int16_t x422 = INT16_MIN;
	volatile int32_t x423 = INT32_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t90 = 1267482287LLU;

	t90 = ((x421&x422)|(x423-x424));

	if (t90 != 18446744073020375041LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x426 = -169689084275118LL;
	static uint64_t x427 = 1439138LLU;
	uint64_t t91 = 6061726464LLU;

	t91 = ((x425&x426)|(x427-x428));

	if (t91 != 780007131LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = INT32_MIN;
	int8_t x430 = INT8_MIN;
	static uint8_t x431 = 4U;
	int32_t x432 = 0;
	int32_t t92 = 10;

	t92 = ((x429&x430)|(x431-x432));

	if (t92 != -2147483644) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = INT8_MIN;
	int64_t x438 = 279325977988LL;
	int64_t x439 = -9735312086977948LL;
	uint16_t x440 = 2808U;
	int64_t t93 = -1112948098869200LL;

	t93 = ((x437&x438)|(x439-x440));

	if (t93 != -9735311950663700LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x441 = -341;
	int32_t x442 = -1;
	static int16_t x443 = -1;
	int16_t x444 = 151;

	t94 = ((x441&x442)|(x443-x444));

	if (t94 != -21) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x445 = 152562U;
	volatile int8_t x447 = -1;
	int16_t x448 = INT16_MAX;
	uint32_t t95 = 1311U;

	t95 = ((x445&x446)|(x447-x448));

	if (t95 != 4294934528U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x449 = INT64_MAX;
	uint32_t x450 = UINT32_MAX;
	int32_t x452 = INT32_MIN;

	t96 = ((x449&x450)|(x451-x452));

	if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x453 = -1;
	uint16_t x455 = 204U;
	volatile int64_t t97 = -1763193LL;

	t97 = ((x453&x454)|(x455-x456));

	if (t97 != -9223372036854775603LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = INT16_MAX;
	int8_t x460 = -1;
	volatile uint64_t t98 = 143918437942431907LLU;

	t98 = ((x457&x458)|(x459-x460));

	if (t98 != 62810722808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x461 = UINT32_MAX;
	volatile int32_t x463 = -21022;
	static uint32_t t99 = UINT32_MAX;

	t99 = ((x461&x462)|(x463-x464));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

