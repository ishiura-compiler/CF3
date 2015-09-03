#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 822U;
static volatile int16_t x4 = INT16_MIN;
uint64_t x6 = UINT64_MAX;
int32_t x10 = -1;
static uint32_t x21 = 458272481U;
int32_t x23 = INT32_MIN;
uint64_t x24 = UINT64_MAX;
volatile int32_t t6 = -5;
uint64_t x30 = UINT64_MAX;
int64_t x32 = 4875459816794266LL;
volatile uint64_t t7 = 15298921152LLU;
int16_t x36 = 8505;
uint8_t x42 = 35U;
int16_t x50 = -1;
static int8_t x51 = INT8_MIN;
int8_t x52 = 0;
int32_t t12 = 15699651;
int32_t x53 = INT32_MIN;
uint32_t x66 = UINT32_MAX;
volatile int64_t x67 = -6046917052010LL;
int16_t x69 = -1;
static int16_t x71 = INT16_MIN;
static volatile int64_t t20 = -33379415261233983LL;
static uint8_t x93 = 0U;
int64_t t23 = -12488827152LL;
volatile int32_t x104 = INT32_MAX;
uint32_t x118 = 61802861U;
volatile uint16_t x122 = 28629U;
volatile int16_t x125 = 47;
volatile int32_t t31 = -726735;
volatile int32_t x138 = -1;
int32_t t33 = 0;
int8_t x141 = INT8_MIN;
int32_t x142 = INT32_MIN;
volatile int32_t t34 = -14168;
int32_t t35 = 2912;
volatile uint64_t t36 = 171763150366169LLU;
volatile int64_t t38 = 18813078189820174LL;
uint8_t x166 = UINT8_MAX;
volatile uint32_t t40 = 251U;
volatile uint64_t t41 = 116LLU;
static volatile int64_t x178 = INT64_MIN;
int8_t x188 = 7;
int32_t t44 = 5;
int16_t x199 = INT16_MIN;
volatile int64_t x208 = INT64_MIN;
uint32_t x210 = UINT32_MAX;
int64_t t50 = 65752107000803058LL;
int32_t x223 = 1501;
static volatile int32_t t52 = 0;
static uint64_t t55 = 29411LLU;
volatile uint8_t x241 = 3U;
int32_t x257 = INT32_MIN;
volatile int16_t x258 = 4034;
static int16_t x263 = INT16_MIN;
static volatile uint16_t x264 = 0U;
static volatile int32_t t60 = -1297;
volatile uint64_t x276 = 4LLU;
volatile uint64_t t62 = 1283LLU;
uint64_t t64 = 984047102849738260LLU;
uint64_t t65 = 10569606678956LLU;
int64_t x304 = -3326552285LL;
uint8_t x305 = 3U;
int8_t x309 = INT8_MIN;
volatile int32_t x310 = INT32_MIN;
static int64_t x311 = -102LL;
int8_t x316 = -1;
uint64_t x318 = 523298131112185752LLU;
int8_t x325 = -1;
int16_t x327 = INT16_MIN;
volatile int64_t t74 = -2903414856066LL;
int8_t x339 = -9;
uint64_t t76 = 36LLU;
int8_t x345 = INT8_MAX;
uint64_t t78 = 3909501320695LLU;
int8_t x364 = INT8_MIN;
volatile uint32_t x372 = 3487209U;
uint16_t x373 = 11U;
int8_t x381 = INT8_MAX;
int32_t t86 = -8839140;
int16_t x387 = -1;
static int16_t x396 = -196;
int8_t x401 = INT8_MIN;
int64_t t90 = 123991680LL;
volatile uint8_t x405 = 93U;
uint32_t x407 = 222762474U;
static volatile int64_t x413 = 17345038LL;
uint32_t x415 = 1704597U;
uint32_t x419 = 12773U;
volatile uint32_t t94 = 9U;
int16_t x424 = 116;
uint64_t x428 = 326685783288479LLU;
int32_t x429 = -1;
uint16_t x431 = 30U;
static uint64_t x437 = 16144438LLU;


void f0(void) {
	int64_t x2 = -1LL;
	uint64_t x3 = 232032845053369874LLU;
	volatile uint64_t t0 = 1161351732581LLU;

	t0 = (x1&(x2^(x3-x4)));

	if (t0 != 292LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int64_t x7 = INT64_MIN;
	int16_t x8 = 0;
	static volatile uint64_t t1 = 117526631807233LLU;

	t1 = (x5&(x6^(x7-x8)));

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int8_t x11 = -1;
	int16_t x12 = -1;
	volatile int64_t t2 = INT64_MIN;

	t2 = (x9&(x10^(x11-x12)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int16_t x14 = -1;
	uint16_t x15 = 201U;
	int32_t x16 = -351560;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13&(x14^(x15-x16)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint32_t x18 = 10131U;
	volatile uint64_t x19 = 536496948832438LLU;
	int64_t x20 = 86773855283886507LL;
	uint64_t t4 = 2111980034770647527LLU;

	t4 = (x17&(x18^(x19-x20)));

	if (t4 != 2200LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = 74290408U;
	static uint64_t t5 = 27653179260591LLU;

	t5 = (x21&(x22^(x23-x24)));

	if (t5 != 4228321LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int16_t x26 = INT16_MIN;
	uint16_t x27 = UINT16_MAX;
	volatile int8_t x28 = -7;

	t6 = (x25&(x26^(x27-x28)));

	if (t6 != -98304) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	static uint32_t x31 = 1U;

	t7 = (x29&(x30^(x31-x32)));

	if (t7 != 4875459816794264LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	int8_t x34 = -37;
	static int32_t x35 = -1;
	int32_t t8 = -817;

	t8 = (x33&(x34^(x35-x36)));

	if (t8 != 29) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int8_t x38 = -4;
	int16_t x39 = INT16_MIN;
	static uint16_t x40 = 25278U;
	volatile int64_t t9 = 9LL;

	t9 = (x37&(x38^(x39-x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = -111617LL;
	volatile int64_t t10 = -4078089929LL;

	t10 = (x41&(x42^(x43-x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int32_t x46 = -348172042;
	int16_t x47 = -1;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x45&(x46^(x47-x48)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;

	t12 = (x49&(x50^(x51-x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MAX;
	uint64_t x55 = 137401123630LLU;
	volatile int16_t x56 = -65;
	uint64_t t13 = 11LLU;

	t13 = (x53&(x54^(x55-x56)));

	if (t13 != 135291469824LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	volatile int64_t x60 = -1LL;
	volatile int64_t t14 = 0LL;

	t14 = (x57&(x58^(x59-x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = -1;
	int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (x61&(x62^(x63-x64)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile int8_t x68 = INT8_MAX;
	volatile int64_t t16 = 0LL;

	t16 = (x65&(x66^(x67-x68)));

	if (t16 != -6043415886208LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	volatile int64_t x72 = INT64_MIN;
	volatile int64_t t17 = -5885222LL;

	t17 = (x69&(x70^(x71-x72)));

	if (t17 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	uint64_t x74 = 5417732322862LLU;
	volatile int64_t x75 = -2779196LL;
	static volatile uint64_t x76 = 341LLU;
	volatile uint64_t t18 = 1992984LLU;

	t18 = (x73&(x74^(x75-x76)));

	if (t18 != 366420033LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	volatile int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MIN;
	uint8_t x80 = 11U;
	static int32_t t19 = -251;

	t19 = (x77&(x78^(x79-x80)));

	if (t19 != 138) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 2878;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = 12954U;
	static volatile int8_t x84 = 0;

	t20 = (x81&(x82^(x83-x84)));

	if (t20 != 538LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	volatile uint64_t x86 = 105217412819LLU;
	static uint64_t x87 = UINT64_MAX;
	int16_t x88 = -1;
	uint64_t t21 = 41114516LLU;

	t21 = (x85&(x86^(x87-x88)));

	if (t21 != 105217412819LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	static volatile int32_t x96 = INT32_MIN;
	static int32_t t22 = -7418145;

	t22 = (x93&(x94^(x95-x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x97 = 5520U;
	int8_t x98 = -1;
	static int8_t x99 = INT8_MAX;
	int64_t x100 = 14172929231635LL;

	t23 = (x97&(x98^(x99-x100)));

	if (t23 != 144LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	volatile int16_t x102 = INT16_MIN;
	int16_t x103 = -1;
	volatile int32_t t24 = 1;

	t24 = (x101&(x102^(x103-x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1064;
	int64_t x106 = INT64_MAX;
	int64_t x107 = -1LL;
	int32_t x108 = -14952375;
	int64_t t25 = 472835505LL;

	t25 = (x105&(x106^(x107-x108)));

	if (t25 != 9223372036839823432LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	static uint16_t x110 = 7996U;
	int16_t x111 = -7631;
	static volatile uint64_t x112 = 4987291885LLU;
	uint64_t t26 = 3558511408226766225LLU;

	t26 = (x109&(x110^(x111-x112)));

	if (t26 != 50808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	uint32_t x114 = 52148U;
	volatile int64_t x115 = -197386548060020415LL;
	uint64_t x116 = 492850621403LLU;
	volatile uint64_t t27 = 3584217LLU;

	t27 = (x113&(x114^(x115-x116)));

	if (t27 != 48850LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	int32_t x119 = -986765755;
	int8_t x120 = INT8_MIN;
	uint32_t t28 = 65U;

	t28 = (x117&(x118^(x119-x120)));

	if (t28 != 3330289576U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x121 = -1;
	volatile int32_t x123 = INT32_MIN;
	static volatile int16_t x124 = INT16_MIN;
	int32_t t29 = 102;

	t29 = (x121&(x122^(x123-x124)));

	if (t29 != -2147422251) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = 36LLU;
	int64_t x127 = INT64_MAX;
	uint8_t x128 = 1U;
	uint64_t t30 = 1075753160877034823LLU;

	t30 = (x125&(x126^(x127-x128)));

	if (t30 != 10LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x129 = 0U;
	static int8_t x130 = INT8_MIN;
	volatile int16_t x131 = -6480;
	int32_t x132 = INT32_MIN;

	t31 = (x129&(x130^(x131-x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = -1LL;
	uint64_t x135 = 55885830216LLU;
	uint16_t x136 = 149U;
	volatile uint64_t t32 = 7203040711LLU;

	t32 = (x133&(x134^(x135-x136)));

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = -1552;
	volatile int32_t x139 = INT32_MIN;
	int32_t x140 = -26;

	t33 = (x137&(x138^(x139-x140)));

	if (t33 != 2147482080) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x143 = 1;
	uint8_t x144 = 53U;

	t34 = (x141&(x142^(x143-x144)));

	if (t34 != 2147483520) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x145 = 378U;
	int32_t x146 = INT32_MIN;
	int8_t x147 = -1;
	static volatile uint16_t x148 = 21928U;

	t35 = (x145&(x146^(x147-x148)));

	if (t35 != 82) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = -5;
	volatile int32_t x150 = INT32_MAX;
	uint64_t x151 = 22456704780112309LLU;
	static int64_t x152 = -1LL;

	t36 = (x149&(x150^(x151-x152)));

	if (t36 != 22456706684513865LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	int32_t x154 = 10117048;
	uint64_t x155 = UINT64_MAX;
	static int64_t x156 = -1333675470189344898LL;
	volatile uint64_t t37 = 21971407091018LLU;

	t37 = (x153&(x154^(x155-x156)));

	if (t37 != 1333675470198400825LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	static volatile int8_t x158 = INT8_MIN;
	volatile int32_t x159 = -1;
	uint8_t x160 = 0U;

	t38 = (x157&(x158^(x159-x160)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x161 = -1;
	int32_t x162 = INT32_MIN;
	int32_t x163 = -1;
	int16_t x164 = -1;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x161&(x162^(x163-x164)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = -1;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MIN;

	t40 = (x165&(x166^(x167-x168)));

	if (t40 != 128U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 17867301LLU;
	uint8_t x170 = UINT8_MAX;
	uint8_t x171 = UINT8_MAX;
	uint16_t x172 = 69U;

	t41 = (x169&(x170^(x171-x172)));

	if (t41 != 5LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x173 = UINT64_MAX;
	int64_t x174 = -1LL;
	int8_t x175 = -2;
	uint8_t x176 = 1U;
	static uint64_t t42 = 1720223221793LLU;

	t42 = (x173&(x174^(x175-x176)));

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	int32_t x179 = -2836299;
	static uint64_t x180 = 52686LLU;
	volatile uint64_t t43 = 1LLU;

	t43 = (x177&(x178^(x179-x180)));

	if (t43 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = 890;
	int16_t x186 = -1;
	volatile int16_t x187 = INT16_MIN;

	t44 = (x185&(x186^(x187-x188)));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = INT64_MIN;
	int64_t x190 = -1LL;
	uint16_t x191 = 84U;
	int16_t x192 = 3;
	volatile int64_t t45 = INT64_MIN;

	t45 = (x189&(x190^(x191-x192)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x193 = 2U;
	static uint32_t x194 = UINT32_MAX;
	uint16_t x195 = 40U;
	static int64_t x196 = -8620068LL;
	int64_t t46 = 80729LL;

	t46 = (x193&(x194^(x195-x196)));

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MAX;
	uint64_t x198 = 67933724064807877LLU;
	static uint64_t x200 = 89569652497LLU;
	uint64_t t47 = 90734613361552LLU;

	t47 = (x197&(x198^(x199-x200)));

	if (t47 != 371059498LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MIN;
	static volatile int64_t x202 = INT64_MAX;
	uint64_t x203 = 1369489490533LLU;
	static int64_t x204 = -2925LL;
	uint64_t t48 = 10619489519LLU;

	t48 = (x201&(x202^(x203-x204)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = 140U;
	static int32_t x206 = INT32_MAX;
	static int64_t x207 = INT64_MIN;
	int64_t t49 = -42967309607961LL;

	t49 = (x205&(x206^(x207-x208)));

	if (t49 != 140LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = 16362625550208LL;
	int64_t x211 = -1LL;
	static uint32_t x212 = 3555587U;

	t50 = (x209&(x210^(x211-x212)));

	if (t50 != 16359533723904LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = -62;
	int32_t x214 = -1;
	static int32_t x215 = INT32_MAX;
	int16_t x216 = 1;
	volatile int32_t t51 = INT32_MIN;

	t51 = (x213&(x214^(x215-x216)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = INT8_MIN;
	int8_t x222 = 1;
	volatile int16_t x224 = -1;

	t52 = (x221&(x222^(x223-x224)));

	if (t52 != 1408) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	static uint8_t x230 = UINT8_MAX;
	uint8_t x231 = UINT8_MAX;
	static uint8_t x232 = UINT8_MAX;
	static volatile int64_t t53 = 0LL;

	t53 = (x229&(x230^(x231-x232)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x233 = 19932662U;
	volatile int8_t x234 = -14;
	int16_t x235 = INT16_MIN;
	int16_t x236 = -1;
	uint32_t t54 = 27016U;

	t54 = (x233&(x234^(x235-x236)));

	if (t54 != 9714U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = 3414927672893LLU;
	int16_t x238 = -2;
	volatile int64_t x239 = INT64_MAX;
	static int8_t x240 = 1;

	t55 = (x237&(x238^(x239-x240)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	int8_t x244 = -1;
	int32_t t56 = -2522599;

	t56 = (x241&(x242^(x243-x244)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MAX;
	int16_t x247 = 52;
	volatile int8_t x248 = 1;
	volatile int32_t t57 = 25;

	t57 = (x245&(x246^(x247-x248)));

	if (t57 != 2147483520) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x249 = -91674881;
	int32_t x250 = INT32_MAX;
	volatile int8_t x251 = INT8_MIN;
	int32_t x252 = -138114723;
	volatile int32_t t58 = -156978;

	t58 = (x249&(x250^(x251-x252)));

	if (t58 != 1920991452) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x259 = 0U;
	int64_t x260 = 3596483272563701LL;
	volatile int64_t t59 = 143388099528782433LL;

	t59 = (x257&(x258^(x259-x260)));

	if (t59 != -3596485354586112LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x261 = INT8_MIN;
	uint8_t x262 = 115U;

	t60 = (x261&(x262^(x263-x264)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x273 = INT32_MIN;
	uint32_t x274 = 20U;
	static int32_t x275 = -15;
	static volatile uint64_t t61 = 20507355LLU;

	t61 = (x273&(x274^(x275-x276)));

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MAX;
	static uint64_t x279 = 510976893LLU;
	volatile uint8_t x280 = 40U;

	t62 = (x277&(x278^(x279-x280)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	static int64_t x282 = -154309589945105795LL;
	int16_t x283 = 52;
	uint64_t x284 = UINT64_MAX;
	uint64_t t63 = 3126793035LLU;

	t63 = (x281&(x282^(x283-x284)));

	if (t63 != 18292434482256412672LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x285 = 1642U;
	uint16_t x286 = 242U;
	uint64_t x287 = 5965359552955624335LLU;
	int32_t x288 = -2;

	t64 = (x285&(x286^(x287-x288)));

	if (t64 != 610LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x289 = -2;
	uint8_t x290 = 107U;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = UINT64_MAX;

	t65 = (x289&(x290^(x291-x292)));

	if (t65 != 18446744071562068074LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x293 = 3409U;
	static volatile uint8_t x294 = UINT8_MAX;
	int32_t x295 = -17541133;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t66 = 25LLU;

	t66 = (x293&(x294^(x295-x296)));

	if (t66 != 1281LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x301 = INT32_MIN;
	int64_t x302 = 0LL;
	uint8_t x303 = 9U;
	volatile int64_t t67 = -20LL;

	t67 = (x301&(x302^(x303-x304)));

	if (t67 != 2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 61650142177957955LLU;
	uint8_t x308 = UINT8_MAX;
	uint64_t t68 = 55961LLU;

	t68 = (x305&(x306^(x307-x308)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x312 = INT8_MIN;
	static volatile int64_t t69 = -26LL;

	t69 = (x309&(x310^(x311-x312)));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x313 = UINT32_MAX;
	static volatile int32_t x314 = INT32_MAX;
	uint32_t x315 = 1659388792U;
	volatile uint32_t t70 = 804521026U;

	t70 = (x313&(x314^(x315-x316)));

	if (t70 != 488094854U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = -1;
	uint32_t x319 = 4187893U;
	static uint16_t x320 = 0U;
	uint64_t t71 = 81633238697166861LLU;

	t71 = (x317&(x318^(x319-x320)));

	if (t71 != 523298131114109293LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x326 = -1;
	uint16_t x328 = 0U;
	volatile int32_t t72 = -3708;

	t72 = (x325&(x326^(x327-x328)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = -1;
	int8_t x330 = INT8_MAX;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MAX;
	int32_t t73 = 139;

	t73 = (x329&(x330^(x331-x332)));

	if (t73 != 2147451007) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = -1LL;
	volatile int64_t x334 = INT64_MAX;
	int64_t x335 = -199803091897LL;
	volatile uint16_t x336 = 2001U;

	t74 = (x333&(x334^(x335-x336)));

	if (t74 != -9223371837051681911LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x337 = INT64_MAX;
	uint64_t x338 = UINT64_MAX;
	static int8_t x340 = 0;
	static volatile uint64_t t75 = 1LLU;

	t75 = (x337&(x338^(x339-x340)));

	if (t75 != 8LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = INT32_MIN;
	volatile uint64_t x342 = 3885362092199412729LLU;
	static uint64_t x343 = 109221LLU;
	int16_t x344 = INT16_MAX;

	t76 = (x341&(x342^(x343-x344)));

	if (t76 != 3885362091103617024LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x346 = 5U;
	volatile uint8_t x347 = 74U;
	int8_t x348 = INT8_MIN;
	uint32_t t77 = 171704U;

	t77 = (x345&(x346^(x347-x348)));

	if (t77 != 79U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = 32851300926LLU;

	t78 = (x349&(x350^(x351-x352)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = -1;
	int8_t x354 = 0;
	int64_t x355 = -1LL;
	static uint8_t x356 = UINT8_MAX;
	int64_t t79 = -8193816930223819LL;

	t79 = (x353&(x354^(x355-x356)));

	if (t79 != -256LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = 398;
	static volatile int64_t x358 = INT64_MIN;
	uint8_t x359 = 22U;
	volatile uint64_t x360 = 18LLU;
	uint64_t t80 = 7222453246326584273LLU;

	t80 = (x357&(x358^(x359-x360)));

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x362 = INT32_MIN;
	volatile int8_t x363 = INT8_MIN;
	volatile int32_t t81 = 28672130;

	t81 = (x361&(x362^(x363-x364)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = INT8_MIN;
	static uint8_t x366 = 2U;
	uint16_t x367 = UINT16_MAX;
	volatile int16_t x368 = 35;
	int32_t t82 = -25610334;

	t82 = (x365&(x366^(x367-x368)));

	if (t82 != 65408) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = INT16_MIN;
	int8_t x370 = INT8_MAX;
	uint8_t x371 = 11U;
	uint32_t t83 = 13U;

	t83 = (x369&(x370^(x371-x372)));

	if (t83 != 4291461120U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x374 = 271514110678431LLU;
	uint32_t x375 = 282U;
	static int8_t x376 = INT8_MAX;
	volatile uint64_t t84 = 6691LLU;

	t84 = (x373&(x374^(x375-x376)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = -1;
	static int64_t x378 = INT64_MAX;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MAX;
	static int64_t t85 = -1985LL;

	t85 = (x377&(x378^(x379-x380)));

	if (t85 != -4294967297LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x382 = UINT8_MAX;
	int32_t x383 = -1;
	static int16_t x384 = INT16_MAX;

	t86 = (x381&(x382^(x383-x384)));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x385 = INT16_MAX;
	int32_t x386 = INT32_MIN;
	int16_t x388 = 14;
	static volatile int32_t t87 = -1718;

	t87 = (x385&(x386^(x387-x388)));

	if (t87 != 32753) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = INT64_MAX;
	int8_t x394 = -2;
	static int8_t x395 = INT8_MIN;
	static volatile int64_t t88 = 8485665697811LL;

	t88 = (x393&(x394^(x395-x396)));

	if (t88 != 9223372036854775738LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x397 = UINT32_MAX;
	uint64_t x398 = 8009883LLU;
	int16_t x399 = -1;
	int64_t x400 = INT64_MIN;
	volatile uint64_t t89 = 0LLU;

	t89 = (x397&(x398^(x399-x400)));

	if (t89 != 4286957412LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x402 = INT64_MIN;
	int32_t x403 = -13;
	int64_t x404 = INT64_MIN;

	t90 = (x401&(x402^(x403-x404)));

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x406 = -1;
	int64_t x408 = -259150736819388110LL;
	volatile int64_t t91 = -19LL;

	t91 = (x405&(x406^(x407-x408)));

	if (t91 != 69LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x409 = 30LL;
	int16_t x410 = INT16_MAX;
	uint16_t x411 = 15906U;
	uint16_t x412 = 5143U;
	volatile int64_t t92 = -1996608034133087LL;

	t92 = (x409&(x410^(x411-x412)));

	if (t92 != 20LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x414 = INT16_MAX;
	volatile int32_t x416 = INT32_MAX;
	volatile int64_t t93 = -4141268743961LL;

	t93 = (x413&(x414^(x415-x416)));

	if (t93 != 534536LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x417 = INT16_MIN;
	volatile uint8_t x418 = 6U;
	uint16_t x420 = UINT16_MAX;

	t94 = (x417&(x418^(x419-x420)));

	if (t94 != 4294901760U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = -1LL;
	int8_t x422 = INT8_MIN;
	static uint32_t x423 = 784U;
	static int64_t t95 = 45532LL;

	t95 = (x421&(x422^(x423-x424)));

	if (t95 != 4294966556LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x425 = -1;
	static int8_t x426 = -15;
	volatile uint32_t x427 = 1010772U;
	volatile uint64_t t96 = 3320499447976173LLU;

	t96 = (x425&(x426^(x427-x428)));

	if (t96 != 326685782277700LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x430 = INT32_MIN;
	static int8_t x432 = -6;
	int32_t t97 = -2569;

	t97 = (x429&(x430^(x431-x432)));

	if (t97 != -2147483612) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x433 = 6095U;
	int64_t x434 = INT64_MIN;
	uint64_t x435 = 23303LLU;
	int64_t x436 = 169088588LL;
	uint64_t t98 = 257507730LLU;

	t98 = (x433&(x434^(x435-x436)));

	if (t98 != 1163LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x438 = INT16_MIN;
	int32_t x439 = INT32_MIN;
	static uint64_t x440 = 134107LLU;
	volatile uint64_t t99 = 16520042286333810LLU;

	t99 = (x437&(x438^(x439-x440)));

	if (t99 != 151588LLU) { NG(); } else { ; }
	
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

