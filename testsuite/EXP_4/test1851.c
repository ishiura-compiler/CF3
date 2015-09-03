#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
uint64_t t0 = 36LLU;
static int8_t x8 = 1;
uint32_t x10 = UINT32_MAX;
int64_t t4 = -489269998901LL;
static volatile uint64_t x26 = 122374965690LLU;
volatile uint64_t t6 = 101850036LLU;
int8_t x33 = INT8_MIN;
uint64_t x41 = 2412345358839LLU;
volatile uint32_t x44 = UINT32_MAX;
int64_t x47 = INT64_MIN;
int64_t x49 = -4807438672LL;
static int32_t x51 = INT32_MAX;
int64_t x53 = 229LL;
int64_t t12 = -1539LL;
int8_t x57 = INT8_MIN;
int32_t x62 = 10;
static uint32_t x68 = 173404037U;
volatile int64_t x72 = INT64_MIN;
int64_t t16 = -37766872826632037LL;
uint32_t x76 = 27327660U;
int64_t x80 = -1947512780000084LL;
int16_t x84 = 0;
static int64_t x88 = INT64_MIN;
int16_t x104 = -470;
int16_t x105 = INT16_MIN;
static uint16_t x113 = UINT16_MAX;
uint64_t t26 = 75902560LLU;
int32_t x121 = 4;
volatile uint64_t t28 = 379584704453160837LLU;
uint16_t x126 = UINT16_MAX;
static int32_t x131 = INT32_MAX;
int8_t x134 = -1;
int64_t x137 = -1LL;
int8_t x138 = INT8_MIN;
int64_t t34 = 106339734789919LL;
volatile int64_t t35 = -15048717380LL;
int32_t t36 = 980167681;
int8_t x157 = 0;
int32_t x158 = INT32_MIN;
int64_t x160 = INT64_MIN;
volatile uint64_t t37 = 609615LLU;
int64_t x163 = -1LL;
int32_t x168 = -1;
volatile int32_t x171 = INT32_MAX;
volatile uint32_t x172 = UINT32_MAX;
int64_t x176 = -592950567391682LL;
uint32_t x178 = UINT32_MAX;
static volatile int64_t t42 = 44179581118130LL;
static int64_t x196 = INT64_MAX;
int32_t x199 = INT32_MIN;
static int32_t x202 = -6720;
int64_t t47 = 808669789448619LL;
uint8_t x207 = 29U;
int64_t x210 = INT64_MIN;
uint64_t x213 = UINT64_MAX;
int8_t x215 = INT8_MAX;
volatile uint64_t t50 = 4760308158LLU;
int8_t x221 = INT8_MAX;
static int8_t x223 = INT8_MIN;
int32_t x233 = -1;
volatile int16_t x235 = INT16_MAX;
int32_t t59 = -77693262;
uint64_t t62 = 2354304262318LLU;
static uint8_t x266 = UINT8_MAX;
int64_t x268 = INT64_MAX;
uint8_t x279 = 12U;
static uint32_t x291 = 38U;
static int64_t x292 = 1179014106471595LL;
volatile int64_t t69 = -399237116386842884LL;
int64_t x294 = -76713740452LL;
int64_t t70 = 125822239LL;
int16_t x298 = INT16_MIN;
static int16_t x315 = INT16_MIN;
int16_t x324 = INT16_MIN;
uint32_t t77 = 16U;
uint64_t x329 = 2048278LLU;
int64_t x336 = -1LL;
int64_t x337 = INT64_MAX;
volatile uint64_t x344 = 8042700321811019439LLU;
int32_t x347 = INT32_MIN;
volatile int32_t t83 = 1705;
volatile uint16_t x352 = 3U;
volatile int64_t t84 = -5620639928LL;
volatile int8_t x356 = 0;
static int64_t t85 = 1275387894858379106LL;
uint8_t x363 = 48U;
uint8_t x364 = 25U;
int8_t x367 = INT8_MAX;
uint64_t x370 = UINT64_MAX;
uint64_t t89 = 939863141LLU;
int16_t x374 = INT16_MIN;
int16_t x379 = -1;
volatile int32_t t92 = 210725;
int16_t x387 = -1;
int32_t x388 = -109502070;
uint32_t t94 = 0U;
int8_t x396 = -11;
static volatile int16_t x404 = 0;
int32_t x405 = INT32_MIN;
static uint32_t x409 = 169U;


void f0(void) {
	uint64_t x1 = 260703023378LLU;
	int64_t x2 = -603991998155712234LL;
	int64_t x4 = -19393LL;

	t0 = (x1%(x2^(x3&x4)));

	if (t0 != 260703023378LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x6 = 2285U;
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 6LLU;

	t1 = (x5%(x6^(x7&x8)));

	if (t1 != 2028LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int32_t x11 = INT32_MIN;
	int64_t x12 = 3791672461LL;
	volatile int64_t t2 = -6468818459086LL;

	t2 = (x9%(x10^(x11&x12)));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int8_t x14 = INT8_MAX;
	static uint8_t x15 = UINT8_MAX;
	uint8_t x16 = 66U;
	volatile int32_t t3 = -23127852;

	t3 = (x13%(x14^(x15&x16)));

	if (t3 != -59) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 10;
	int32_t x18 = INT32_MIN;
	int64_t x19 = 1LL;
	uint32_t x20 = 485396U;

	t4 = (x17%(x18^(x19&x20)));

	if (t4 != 10LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	uint64_t x22 = 885105LLU;
	int64_t x23 = INT64_MAX;
	volatile uint64_t x24 = UINT64_MAX;
	static volatile uint64_t t5 = 27129896090LLU;

	t5 = (x21%(x22^(x23&x24)));

	if (t5 != 9223372034708177266LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int16_t x27 = -1;
	int64_t x28 = -39582LL;

	t6 = (x25%(x26^(x27&x28)));

	if (t6 != 255LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	volatile int8_t x30 = INT8_MIN;
	static int16_t x31 = INT16_MIN;
	int16_t x32 = -1;
	volatile uint64_t t7 = 30994787LLU;

	t7 = (x29%(x30^(x31&x32)));

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = 13U;
	static int32_t x35 = INT32_MAX;
	volatile uint16_t x36 = 636U;
	static int32_t t8 = 1370;

	t8 = (x33%(x34^(x35&x36)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MIN;
	static int16_t x43 = INT16_MAX;
	static uint64_t t9 = 72332383LLU;

	t9 = (x41%(x42^(x43&x44)));

	if (t9 != 2887017384LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = INT32_MIN;
	static int32_t x48 = 4545;
	volatile int64_t t10 = 581522033221079LL;

	t10 = (x45%(x46^(x47&x48)));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MIN;
	int32_t x52 = 26;
	volatile int64_t t11 = -1LL;

	t11 = (x49%(x50^(x51&x52)));

	if (t11 != -512471428LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = 6836141;
	int64_t x55 = 34313637641LL;
	uint32_t x56 = 2U;

	t12 = (x53%(x54^(x55&x56)));

	if (t12 != 229LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x58 = UINT8_MAX;
	int64_t x59 = 3LL;
	static int32_t x60 = -1;
	int64_t t13 = 14LL;

	t13 = (x57%(x58^(x59&x60)));

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int32_t x63 = -1;
	volatile uint16_t x64 = UINT16_MAX;
	int32_t t14 = 29268;

	t14 = (x61%(x62^(x63&x64)));

	if (t14 != -32823) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	volatile int8_t x66 = INT8_MAX;
	static int64_t x67 = INT64_MIN;
	int64_t t15 = 139755902LL;

	t15 = (x65%(x66^(x67&x68)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	int32_t x71 = 1;

	t16 = (x69%(x70^(x71&x72)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MIN;
	int8_t x74 = -1;
	uint64_t x75 = 5LLU;
	volatile uint64_t t17 = 55LLU;

	t17 = (x73%(x74^(x75&x76)));

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x77 = UINT16_MAX;
	volatile int32_t x78 = INT32_MAX;
	int8_t x79 = INT8_MIN;
	int64_t t18 = 56992522697LL;

	t18 = (x77%(x78^(x79&x80)));

	if (t18 != 65535LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -9939;
	volatile int8_t x82 = -38;
	static int32_t x83 = -827620408;
	int32_t t19 = 378448;

	t19 = (x81%(x82^(x83&x84)));

	if (t19 != -21) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 14710718826099265LLU;
	int32_t x86 = INT32_MIN;
	static volatile int64_t x87 = INT64_MIN;
	volatile uint64_t t20 = 1955614775LLU;

	t20 = (x85%(x86^(x87&x88)));

	if (t20 != 14710718826099265LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 4U;
	int32_t x91 = -1;
	volatile uint16_t x92 = 5928U;
	int32_t t21 = -5;

	t21 = (x89%(x90^(x91&x92)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = -18817413172LL;
	static int64_t x94 = INT64_MIN;
	int16_t x95 = -350;
	static uint16_t x96 = 10339U;
	volatile int64_t t22 = 181050372345LL;

	t22 = (x93%(x94^(x95&x96)));

	if (t22 != -18817413172LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 25858828717LLU;
	int64_t x102 = INT64_MAX;
	int8_t x103 = -1;
	uint64_t t23 = 27LLU;

	t23 = (x101%(x102^(x103&x104)));

	if (t23 != 25858828717LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = 193103331LL;
	static int16_t x107 = INT16_MIN;
	uint8_t x108 = 28U;
	int64_t t24 = -14947501LL;

	t24 = (x105%(x106^(x107&x108)));

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = -482391LL;
	int32_t x110 = 6;
	volatile int32_t x111 = INT32_MIN;
	int8_t x112 = -1;
	int64_t t25 = -118160800LL;

	t25 = (x109%(x110^(x111&x112)));

	if (t25 != -482391LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = -1;
	volatile uint64_t x115 = 44398818625141LLU;
	int32_t x116 = 3803;

	t26 = (x113%(x114^(x115&x116)));

	if (t26 != 65535LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MAX;
	int32_t x119 = -1;
	int8_t x120 = 18;
	static int32_t t27 = -3494;

	t27 = (x117%(x118^(x119&x120)));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x122 = INT16_MIN;
	volatile uint64_t x123 = 4987408479LLU;
	volatile uint16_t x124 = 2064U;

	t28 = (x121%(x122^(x123&x124)));

	if (t28 != 4LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = -413214939602627LL;
	uint32_t x127 = 123U;
	int16_t x128 = INT16_MIN;
	volatile int64_t t29 = 0LL;

	t29 = (x125%(x126^(x127&x128)));

	if (t29 != -28742LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	int32_t x130 = INT32_MAX;
	static int8_t x132 = INT8_MAX;
	volatile int64_t t30 = -92193388269623034LL;

	t30 = (x129%(x130^(x131&x132)));

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x135 = INT16_MIN;
	int8_t x136 = -1;
	volatile uint64_t t31 = 100513LLU;

	t31 = (x133%(x134^(x135&x136)));

	if (t31 != 15LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x139 = INT64_MIN;
	int16_t x140 = -1;
	int64_t t32 = -8055806LL;

	t32 = (x137%(x138^(x139&x140)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = -9440;
	volatile uint64_t x142 = 3005699172745572594LLU;
	volatile int32_t x143 = INT32_MIN;
	uint32_t x144 = 29169227U;
	uint64_t t33 = 993885147LLU;

	t33 = (x141%(x142^(x143&x144)));

	if (t33 != 412549037236106612LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 13238367U;
	static uint16_t x146 = UINT16_MAX;
	volatile int8_t x147 = 33;
	int64_t x148 = INT64_MAX;

	t34 = (x145%(x146^(x147&x148)));

	if (t34 != 6963LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	uint16_t x150 = 8602U;
	uint32_t x151 = UINT32_MAX;
	int64_t x152 = -2028624533097411LL;

	t35 = (x149%(x150^(x151&x152)));

	if (t35 != -146188508LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 3U;
	volatile int16_t x154 = -1;
	static int32_t x155 = INT32_MIN;
	volatile int16_t x156 = INT16_MIN;

	t36 = (x153%(x154^(x155&x156)));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x159 = 24817178099828LLU;

	t37 = (x157%(x158^(x159&x160)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	static uint64_t x162 = 228LLU;
	int16_t x164 = -1;
	volatile uint64_t t38 = 2450LLU;

	t38 = (x161%(x162^(x163&x164)));

	if (t38 != 101LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 4411;
	volatile int16_t x166 = INT16_MIN;
	int32_t x167 = -1;
	volatile int32_t t39 = -351155860;

	t39 = (x165%(x166^(x167&x168)));

	if (t39 != 4411) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MAX;
	volatile int64_t x170 = INT64_MIN;
	int64_t t40 = -21345121458LL;

	t40 = (x169%(x170^(x171&x172)));

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MIN;
	static int8_t x175 = INT8_MIN;
	volatile int64_t t41 = 1991LL;

	t41 = (x173%(x174^(x175&x176)));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = -1;
	static int8_t x179 = 41;
	int64_t x180 = 6LL;

	t42 = (x177%(x178^(x179&x180)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -1;
	volatile int32_t x186 = INT32_MIN;
	uint64_t x187 = 4244615049LLU;
	static int16_t x188 = INT16_MAX;
	uint64_t t43 = 1641LLU;

	t43 = (x185%(x186^(x187&x188)));

	if (t43 != 2147471478LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 0U;
	int32_t x190 = 1040148597;
	volatile int16_t x191 = -1;
	volatile int64_t x192 = INT64_MIN;
	static int64_t t44 = 2713048210529731286LL;

	t44 = (x189%(x190^(x191&x192)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = 0;
	int32_t x194 = INT32_MIN;
	uint16_t x195 = 230U;
	int64_t t45 = 5949726307196LL;

	t45 = (x193%(x194^(x195&x196)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 164769266U;
	static volatile uint16_t x198 = UINT16_MAX;
	int8_t x200 = 0;
	uint32_t t46 = 1253091U;

	t46 = (x197%(x198^(x199&x200)));

	if (t46 != 14276U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -508830152LL;
	static uint8_t x203 = 4U;
	int64_t x204 = -7705LL;

	t47 = (x201%(x202^(x203&x204)));

	if (t47 != -5844LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -1;
	int32_t x206 = 159989913;
	uint8_t x208 = 44U;
	volatile int32_t t48 = -252079;

	t48 = (x205%(x206^(x207&x208)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = -1;
	int32_t x211 = INT32_MIN;
	static int32_t x212 = -1;
	static int64_t t49 = 11973LL;

	t49 = (x209%(x210^(x211&x212)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x214 = UINT64_MAX;
	int8_t x216 = 1;

	t50 = (x213%(x214^(x215&x216)));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = -19834;
	int8_t x218 = 1;
	volatile int16_t x219 = INT16_MIN;
	uint64_t x220 = 895229LLU;
	uint64_t t51 = 152290901675416LLU;

	t51 = (x217%(x218^(x219&x220)));

	if (t51 != 862539LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x222 = INT8_MAX;
	int64_t x224 = INT64_MAX;
	int64_t t52 = -18LL;

	t52 = (x221%(x222^(x223&x224)));

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MAX;
	uint64_t x226 = 2640099540269988LLU;
	static volatile int16_t x227 = -91;
	volatile int8_t x228 = -1;
	volatile uint64_t t53 = 97339LLU;

	t53 = (x225%(x226^(x227&x228)));

	if (t53 != 2147483647LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = 1014995053LL;
	int16_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MIN;
	volatile int64_t t54 = 1426626041LL;

	t54 = (x229%(x230^(x231&x232)));

	if (t54 != 1014995053LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x234 = INT64_MAX;
	uint8_t x236 = 0U;
	volatile int64_t t55 = 201487475LL;

	t55 = (x233%(x234^(x235&x236)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 18U;
	uint64_t x238 = 2201705420LLU;
	volatile int32_t x239 = INT32_MIN;
	int64_t x240 = -1372LL;
	uint64_t t56 = 3396322979815422LLU;

	t56 = (x237%(x238^(x239&x240)));

	if (t56 != 18LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x241 = 2726833470LLU;
	volatile uint16_t x242 = 347U;
	uint16_t x243 = 20596U;
	int64_t x244 = -35222342608915382LL;
	uint64_t t57 = 2972LLU;

	t57 = (x241%(x242^(x243&x244)));

	if (t57 != 7917LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x245 = -1LL;
	volatile uint32_t x246 = 109941U;
	int64_t x247 = INT64_MIN;
	int8_t x248 = 0;
	volatile int64_t t58 = 347LL;

	t58 = (x245%(x246^(x247&x248)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -217;
	static int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int16_t x252 = 1;

	t59 = (x249%(x250^(x251&x252)));

	if (t59 != -89) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x253 = INT8_MAX;
	volatile int64_t x254 = INT64_MIN;
	uint8_t x255 = 0U;
	uint64_t x256 = 40421253839LLU;
	volatile uint64_t t60 = 33338427209994LLU;

	t60 = (x253%(x254^(x255&x256)));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x257 = INT16_MIN;
	static uint8_t x258 = 18U;
	static volatile int8_t x259 = 0;
	uint32_t x260 = 184623117U;
	volatile uint32_t t61 = 27U;

	t61 = (x257%(x258^(x259&x260)));

	if (t61 != 14U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x262 = INT16_MAX;
	int8_t x263 = 0;
	uint32_t x264 = 10406877U;

	t62 = (x261%(x262^(x263&x264)));

	if (t62 != 15LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int16_t x267 = -1;
	int64_t t63 = -1LL;

	t63 = (x265%(x266^(x267&x268)));

	if (t63 != -256LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x269 = INT8_MIN;
	volatile int32_t x270 = INT32_MIN;
	static int32_t x271 = INT32_MIN;
	static uint64_t x272 = 540LLU;
	volatile uint64_t t64 = 6LLU;

	t64 = (x269%(x270^(x271&x272)));

	if (t64 != 2147483520LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x273 = 518815599U;
	static uint8_t x274 = UINT8_MAX;
	static int32_t x275 = INT32_MIN;
	uint8_t x276 = 0U;
	volatile uint32_t t65 = 88733913U;

	t65 = (x273%(x274^(x275&x276)));

	if (t65 != 249U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x277 = INT8_MIN;
	int32_t x278 = -1;
	int8_t x280 = INT8_MIN;
	int32_t t66 = -318;

	t66 = (x277%(x278^(x279&x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x281 = 19;
	int8_t x282 = INT8_MIN;
	uint8_t x283 = 27U;
	int16_t x284 = 1480;
	int32_t t67 = -13468041;

	t67 = (x281%(x282^(x283&x284)));

	if (t67 != 19) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MAX;
	int16_t x286 = 0;
	volatile int8_t x287 = -1;
	uint64_t x288 = UINT64_MAX;
	static uint64_t t68 = 336LLU;

	t68 = (x285%(x286^(x287&x288)));

	if (t68 != 127LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = -13;
	int32_t x290 = 53372176;

	t69 = (x289%(x290^(x291&x292)));

	if (t69 != -13LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x293 = INT64_MIN;
	int32_t x295 = -1;
	uint16_t x296 = 38U;

	t70 = (x293%(x294^(x295&x296)));

	if (t70 != -10765081148LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -1;
	static int32_t x299 = -74;
	static int32_t x300 = INT32_MIN;
	int32_t t71 = 4197;

	t71 = (x297%(x298^(x299&x300)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = 135182;
	volatile uint16_t x302 = UINT16_MAX;
	uint16_t x303 = 63U;
	static int64_t x304 = INT64_MAX;
	int64_t t72 = -209823LL;

	t72 = (x301%(x302^(x303&x304)));

	if (t72 != 4238LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x305 = -89124185163546332LL;
	volatile int16_t x306 = 124;
	int32_t x307 = 13;
	static uint8_t x308 = 6U;
	static int64_t t73 = -55863LL;

	t73 = (x305%(x306^(x307&x308)));

	if (t73 != -92LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x309 = UINT8_MAX;
	volatile uint16_t x310 = UINT16_MAX;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	volatile uint32_t t74 = 4331U;

	t74 = (x309%(x310^(x311&x312)));

	if (t74 != 255U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x313 = -1;
	int32_t x314 = INT32_MIN;
	int16_t x316 = 2435;
	volatile int32_t t75 = -282388;

	t75 = (x313%(x314^(x315&x316)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x317 = -13;
	volatile uint8_t x318 = UINT8_MAX;
	static int32_t x319 = -40805;
	volatile int32_t x320 = -1;
	int32_t t76 = 920048766;

	t76 = (x317%(x318^(x319&x320)));

	if (t76 != -13) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x321 = 0U;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = 1582U;

	t77 = (x321%(x322^(x323&x324)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MAX;
	int64_t x326 = INT64_MIN;
	uint8_t x327 = 11U;
	volatile uint32_t x328 = UINT32_MAX;
	int64_t t78 = -511118218895845LL;

	t78 = (x325%(x326^(x327&x328)));

	if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x330 = 1208703211U;
	int32_t x331 = INT32_MIN;
	static volatile int16_t x332 = INT16_MAX;
	static uint64_t t79 = 2LLU;

	t79 = (x329%(x330^(x331&x332)));

	if (t79 != 2048278LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = 3330093LL;
	int8_t x334 = INT8_MIN;
	int32_t x335 = -1;
	volatile int64_t t80 = -3192LL;

	t80 = (x333%(x334^(x335&x336)));

	if (t80 != 26LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x338 = -1LL;
	int64_t x339 = INT64_MAX;
	static int64_t x340 = INT64_MAX;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x337%(x338^(x339&x340)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = 389495272234500LL;
	int16_t x342 = 11;
	int16_t x343 = 24;
	uint64_t t82 = 81617237879LLU;

	t82 = (x341%(x342^(x343&x344)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = INT16_MIN;
	volatile uint16_t x346 = 21204U;
	int8_t x348 = INT8_MAX;

	t83 = (x345%(x346^(x347&x348)));

	if (t83 != -11564) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x349 = 46U;
	volatile int64_t x350 = -12688929885LL;
	static volatile int32_t x351 = INT32_MAX;

	t84 = (x349%(x350^(x351&x352)));

	if (t84 != 46LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MIN;

	t85 = (x353%(x354^(x355&x356)));

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = 5767;
	int16_t x358 = -99;
	volatile uint32_t x359 = 28U;
	static int16_t x360 = 5;
	static volatile uint32_t t86 = 605U;

	t86 = (x357%(x358^(x359&x360)));

	if (t86 != 5767U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MIN;
	uint16_t x362 = 2U;
	volatile int32_t t87 = -96755521;

	t87 = (x361%(x362^(x363&x364)));

	if (t87 != -8) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -17998924374LL;
	uint16_t x366 = UINT16_MAX;
	static int64_t x368 = -37LL;
	volatile int64_t t88 = 17331844551LL;

	t88 = (x365%(x366^(x367&x368)));

	if (t88 != -57386LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x371 = INT8_MAX;
	int8_t x372 = -1;

	t89 = (x369%(x370^(x371&x372)));

	if (t89 != 65535LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = 1321500226U;
	static volatile uint64_t x375 = 3627550LLU;
	int16_t x376 = INT16_MIN;
	uint64_t t90 = 132706LLU;

	t90 = (x373%(x374^(x375&x376)));

	if (t90 != 1321500226LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = UINT32_MAX;
	volatile int64_t x378 = -1LL;
	int16_t x380 = INT16_MAX;
	int64_t t91 = -12360476272596471LL;

	t91 = (x377%(x378^(x379&x380)));

	if (t91 != 32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = -1;
	static volatile uint16_t x382 = 11508U;
	volatile int16_t x383 = INT16_MAX;
	int8_t x384 = -1;

	t92 = (x381%(x382^(x383&x384)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = 4;
	static int8_t x386 = INT8_MIN;
	volatile int32_t t93 = -68096606;

	t93 = (x385%(x386^(x387&x388)));

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	static int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	volatile int32_t x392 = 75132;

	t94 = (x389%(x390^(x391&x392)));

	if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int8_t x395 = -1;
	static int32_t t95 = -184;

	t95 = (x393%(x394^(x395&x396)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 492U;
	volatile int8_t x399 = 1;
	static int8_t x400 = -4;
	volatile int32_t t96 = 996;

	t96 = (x397%(x398^(x399&x400)));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = 4090;
	int8_t x402 = INT8_MAX;
	volatile int64_t x403 = INT64_MIN;
	volatile int64_t t97 = 2LL;

	t97 = (x401%(x402^(x403&x404)));

	if (t97 != 26LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x406 = -546248417LL;
	volatile int32_t x407 = -32517086;
	int64_t x408 = INT64_MIN;
	volatile int64_t t98 = 980LL;

	t98 = (x405%(x406^(x407&x408)));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x410 = 128863;
	static uint64_t x411 = UINT64_MAX;
	int16_t x412 = -1;
	uint64_t t99 = 121122LLU;

	t99 = (x409%(x410^(x411&x412)));

	if (t99 != 169LLU) { NG(); } else { ; }
	
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

