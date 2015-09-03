#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 374027027859166LLU;
int16_t x5 = -1;
volatile uint32_t x7 = 912U;
uint64_t t2 = 651150362997463846LLU;
int32_t x13 = INT32_MIN;
int8_t x19 = -1;
int32_t x20 = -629437145;
static int16_t x23 = 0;
volatile int64_t x24 = 2039235586841698LL;
int8_t x37 = INT8_MIN;
int8_t x44 = -6;
uint64_t t10 = 1412180156590590LLU;
volatile int64_t t11 = -12167LL;
int32_t x58 = -258483874;
int32_t x66 = 1047603554;
static int64_t t15 = 12517827508275839LL;
static int8_t x73 = INT8_MIN;
volatile int8_t x77 = INT8_MIN;
static uint32_t t17 = UINT32_MAX;
volatile uint32_t t18 = 747U;
static volatile int64_t x85 = -1LL;
uint64_t x86 = 57LLU;
int32_t x88 = 247681;
volatile uint16_t x97 = 10U;
uint64_t x101 = 102267614909LLU;
int32_t x103 = INT32_MAX;
volatile uint32_t t22 = 332266U;
uint8_t x118 = UINT8_MAX;
volatile uint32_t x125 = UINT32_MAX;
int64_t x127 = INT64_MIN;
int32_t x134 = INT32_MIN;
static volatile int64_t t30 = -1LL;
int32_t t32 = 3387;
int16_t x169 = -1;
static int8_t x170 = -1;
static uint32_t x173 = UINT32_MAX;
static int8_t x179 = INT8_MAX;
static volatile int64_t x180 = -1623347639LL;
volatile int64_t t41 = -5436797550LL;
int8_t x194 = -63;
static int16_t x195 = INT16_MAX;
int64_t x196 = INT64_MAX;
int16_t x202 = INT16_MAX;
int16_t x206 = 3335;
int8_t x208 = -1;
int32_t x215 = -37752;
uint16_t x220 = 141U;
int32_t x224 = INT32_MIN;
volatile uint64_t t49 = 1039843438LLU;
uint64_t x228 = UINT64_MAX;
uint64_t t52 = 6718875921062LLU;
int32_t x237 = INT32_MIN;
int8_t x248 = -1;
int32_t t55 = 717227;
static int8_t x260 = INT8_MAX;
int32_t t57 = -12;
int8_t x277 = 30;
static int16_t x280 = 64;
static int64_t t62 = -83739977647023301LL;
uint16_t x289 = 581U;
int64_t x317 = INT64_MIN;
int32_t x322 = INT32_MIN;
uint32_t x323 = UINT32_MAX;
volatile uint64_t t71 = 7568109283828881LLU;
int8_t x326 = INT8_MIN;
volatile int32_t t75 = 4;
uint16_t x341 = 0U;
int64_t t77 = -11193438LL;
int16_t x354 = -1;
uint32_t x356 = 178U;
volatile int8_t x362 = INT8_MAX;
static uint64_t x365 = 497LLU;
int8_t x367 = INT8_MIN;
static int8_t x375 = 0;
int64_t x382 = 28574697336607LL;
int8_t x397 = INT8_MAX;
static volatile int64_t t87 = -3LL;
uint32_t x412 = UINT32_MAX;
volatile int64_t x416 = INT64_MIN;
volatile uint64_t t89 = 15524624658999LLU;
int64_t x418 = INT64_MIN;
int64_t x419 = INT64_MIN;
static volatile int64_t t90 = -6567746319868878LL;
volatile int32_t t93 = -35224743;
static volatile uint32_t x434 = 1U;
int32_t x437 = 12;
int64_t x438 = -53332LL;
volatile int64_t t97 = -138211LL;
int32_t x458 = 16624987;
static int64_t x460 = INT64_MIN;
volatile uint16_t x461 = 3177U;
int64_t x463 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int8_t x3 = -3;
	volatile int64_t x4 = INT64_MAX;
	uint64_t t0 = 6301608LLU;

	t0 = ((x1-x2)|(x3/x4));

	if (t0 != 18446370048829176097LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MAX;
	volatile uint64_t x8 = 6386656133292398LLU;
	uint64_t t1 = 5738383731LLU;

	t1 = ((x5-x6)|(x7/x8));

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	volatile uint8_t x10 = 127U;
	int32_t x11 = INT32_MAX;
	uint64_t x12 = 189995017807LLU;

	t2 = ((x9-x10)|(x11/x12));

	if (t2 != 128LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -33642590585224446LL;
	volatile int64_t x15 = -94605799LL;
	int64_t x16 = INT64_MAX;
	int64_t t3 = -891513148417LL;

	t3 = ((x13-x14)|(x15/x16));

	if (t3 != 33642588437740798LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	uint64_t x18 = 53601085311864LLU;
	uint64_t t4 = 1509538111630023LLU;

	t4 = ((x17-x18)|(x19/x20));

	if (t4 != 18446690472624206984LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	uint32_t x22 = 29612U;
	volatile int64_t t5 = 834700909LL;

	t5 = ((x21-x22)|(x23/x24));

	if (t5 != 35923LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	volatile int32_t x26 = INT32_MIN;
	volatile uint32_t x27 = 726925440U;
	volatile int16_t x28 = INT16_MAX;
	static uint32_t t6 = 360723U;

	t6 = ((x25-x26)|(x27/x28));

	if (t6 != 2147483560U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -246;
	volatile int64_t x34 = 115LL;
	int32_t x35 = -1;
	static volatile uint32_t x36 = UINT32_MAX;
	static volatile int64_t t7 = -9891009LL;

	t7 = ((x33-x34)|(x35/x36));

	if (t7 != -361LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x38 = INT8_MAX;
	int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MAX;
	volatile int64_t t8 = 3700LL;

	t8 = ((x37-x38)|(x39/x40));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	static volatile uint64_t x42 = UINT64_MAX;
	int16_t x43 = INT16_MIN;
	static volatile uint64_t t9 = 1LLU;

	t9 = ((x41-x42)|(x43/x44));

	if (t9 != 9223372036854781269LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = -1LL;
	static volatile uint64_t x46 = 674104LLU;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = INT8_MIN;

	t10 = ((x45-x46)|(x47/x48));

	if (t10 != 18446744073709551303LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MAX;
	uint32_t x51 = 1034901U;
	int64_t x52 = INT64_MIN;

	t11 = ((x49-x50)|(x51/x52));

	if (t11 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	int64_t x54 = -1LL;
	static int16_t x55 = INT16_MIN;
	int64_t x56 = 6334023067807LL;
	int64_t t12 = 123388942LL;

	t12 = ((x53-x54)|(x55/x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 0U;
	static uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 423224055LLU;
	static uint64_t t13 = 1352887784LLU;

	t13 = ((x57-x58)|(x59/x60));

	if (t13 != 258483874LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int64_t x62 = -1LL;
	uint16_t x63 = 29U;
	uint32_t x64 = 215032552U;
	int64_t t14 = -38658LL;

	t14 = ((x61-x62)|(x63/x64));

	if (t14 != 256LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	static int64_t x67 = -186994092325930087LL;
	static int16_t x68 = -11011;

	t15 = ((x65-x66)|(x67/x68));

	if (t15 != -876620129LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = INT8_MIN;
	static int8_t x75 = -1;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t16 = 538;

	t16 = ((x73-x74)|(x75/x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x78 = 3859U;
	int32_t x79 = 773815838;
	int32_t x80 = -145744851;

	t17 = ((x77-x78)|(x79/x80));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = UINT8_MAX;
	uint16_t x82 = 21U;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = -467900;

	t18 = ((x81-x82)|(x83/x84));

	if (t18 != 235U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x87 = INT64_MAX;
	uint64_t t19 = 74LLU;

	t19 = ((x85-x86)|(x87/x88));

	if (t19 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x98 = INT32_MAX;
	uint64_t x99 = 431333LLU;
	int8_t x100 = INT8_MAX;
	static volatile uint64_t t20 = 301973382783LLU;

	t20 = ((x97-x98)|(x99/x100));

	if (t20 != 18446744071562071375LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x102 = 2354819;
	int16_t x104 = INT16_MIN;
	static uint64_t t21 = 7972LLU;

	t21 = ((x101-x102)|(x103/x104));

	if (t21 != 18446744073709488187LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = INT16_MAX;
	volatile uint32_t x106 = UINT32_MAX;
	uint16_t x107 = UINT16_MAX;
	static int16_t x108 = -1;

	t22 = ((x105-x106)|(x107/x108));

	if (t22 != 4294934529U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 3535U;
	int16_t x110 = INT16_MAX;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 62003869U;
	volatile uint32_t t23 = 15U;

	t23 = ((x109-x110)|(x111/x112));

	if (t23 != 4294938098U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = -45;
	static volatile uint16_t x114 = 1696U;
	volatile int8_t x115 = -1;
	static int64_t x116 = INT64_MAX;
	int64_t t24 = 26177406836817209LL;

	t24 = ((x113-x114)|(x115/x116));

	if (t24 != -1741LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	volatile int32_t x120 = -29831079;
	int32_t t25 = -471790168;

	t25 = ((x117-x118)|(x119/x120));

	if (t25 != -32953) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x126 = -7215762971902LL;
	uint16_t x128 = 203U;
	int64_t t26 = 222057LL;

	t26 = ((x125-x126)|(x127/x128));

	if (t26 != -45433057980768259LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = 96568U;
	uint32_t x130 = 6857869U;
	volatile int32_t x131 = INT32_MAX;
	uint8_t x132 = UINT8_MAX;
	volatile uint32_t t27 = 3241808U;

	t27 = ((x129-x130)|(x131/x132));

	if (t27 != 4288205995U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	static uint64_t x136 = 260953317828146290LLU;
	volatile uint64_t t28 = 133578868756292798LLU;

	t28 = ((x133-x134)|(x135/x136));

	if (t28 != 9223372039002259526LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = INT16_MAX;
	static int64_t x138 = -260959779467249LL;
	int64_t x139 = -1LL;
	volatile int16_t x140 = INT16_MAX;
	int64_t t29 = 0LL;

	t29 = ((x137-x138)|(x139/x140));

	if (t29 != 260959779500016LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = 792299719412324LL;
	int8_t x142 = 7;
	uint32_t x143 = 254666U;
	uint16_t x144 = 22565U;

	t30 = ((x141-x142)|(x143/x144));

	if (t30 != 792299719412319LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x145 = 104U;
	volatile int32_t x146 = 526;
	uint32_t x147 = 7050U;
	volatile int32_t x148 = INT32_MIN;
	volatile uint32_t t31 = 57801U;

	t31 = ((x145-x146)|(x147/x148));

	if (t31 != 4294966874U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x149 = -1;
	int8_t x150 = -44;
	volatile uint8_t x151 = UINT8_MAX;
	int32_t x152 = INT32_MIN;

	t32 = ((x149-x150)|(x151/x152));

	if (t32 != 43) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x157 = INT64_MAX;
	uint32_t x158 = 46991084U;
	int8_t x159 = INT8_MAX;
	static int16_t x160 = INT16_MIN;
	int64_t t33 = 3128685345619LL;

	t33 = ((x157-x158)|(x159/x160));

	if (t33 != 9223372036807784723LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = 2U;
	int8_t x162 = INT8_MAX;
	uint32_t x163 = UINT32_MAX;
	uint8_t x164 = UINT8_MAX;
	static uint32_t t34 = 1639738944U;

	t34 = ((x161-x162)|(x163/x164));

	if (t34 != 4294967171U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 206132563018LLU;
	int32_t x166 = -1;
	static int16_t x167 = 5154;
	volatile int8_t x168 = -1;
	volatile uint64_t t35 = 18702328616368837LLU;

	t35 = ((x165-x166)|(x167/x168));

	if (t35 != 18446744073709547487LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	int64_t t36 = 1827LL;

	t36 = ((x169-x170)|(x171/x172));

	if (t36 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x174 = -1;
	static int32_t x175 = -1;
	static int16_t x176 = -1;
	volatile uint32_t t37 = 4205U;

	t37 = ((x173-x174)|(x175/x176));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = INT8_MAX;
	uint64_t x178 = UINT64_MAX;
	volatile uint64_t t38 = 0LLU;

	t38 = ((x177-x178)|(x179/x180));

	if (t38 != 128LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x181 = UINT8_MAX;
	int32_t x182 = -17514;
	int8_t x183 = 3;
	static int8_t x184 = 5;
	static volatile int32_t t39 = -6683;

	t39 = ((x181-x182)|(x183/x184));

	if (t39 != 17769) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x185 = 22U;
	volatile int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	static int32_t x188 = -1;
	static int32_t t40 = -1;

	t40 = ((x185-x186)|(x187/x188));

	if (t40 != -2147450857) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x189 = -1;
	uint32_t x190 = 10909U;
	static int16_t x191 = 4080;
	static volatile int64_t x192 = -120LL;

	t41 = ((x189-x190)|(x191/x192));

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x193 = -1;
	static volatile int64_t t42 = -35727984041LL;

	t42 = ((x193-x194)|(x195/x196));

	if (t42 != 62LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = 219;
	static uint8_t x198 = 9U;
	static int16_t x199 = INT16_MIN;
	int32_t x200 = -627856615;
	int32_t t43 = -11551;

	t43 = ((x197-x198)|(x199/x200));

	if (t43 != 210) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = 16U;
	uint32_t x203 = UINT32_MAX;
	uint64_t x204 = 82LLU;
	volatile uint64_t t44 = 165768826119622LLU;

	t44 = ((x201-x202)|(x203/x204));

	if (t44 != 18446744073709533233LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = -6483;
	int32_t x207 = -25059;
	int32_t t45 = -508;

	t45 = ((x205-x206)|(x207/x208));

	if (t45 != -1561) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = UINT64_MAX;
	volatile int16_t x210 = INT16_MIN;
	static int64_t x211 = -1LL;
	static int8_t x212 = -1;
	uint64_t t46 = 133158891058414376LLU;

	t46 = ((x209-x210)|(x211/x212));

	if (t46 != 32767LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MIN;
	int8_t x216 = -1;
	int64_t t47 = 4835LL;

	t47 = ((x213-x214)|(x215/x216));

	if (t47 != 9223372036854748024LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x217 = 285212496U;
	uint8_t x218 = 3U;
	volatile int16_t x219 = 5235;
	uint32_t t48 = 4109043U;

	t48 = ((x217-x218)|(x219/x220));

	if (t48 != 285212525U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x221 = UINT16_MAX;
	int8_t x222 = 1;
	uint64_t x223 = UINT64_MAX;

	t49 = ((x221-x222)|(x223/x224));

	if (t49 != 65535LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = 6917646923LL;
	volatile uint16_t x226 = 57U;
	static volatile int32_t x227 = -1;
	uint64_t t50 = 125475578115879LLU;

	t50 = ((x225-x226)|(x227/x228));

	if (t50 != 6917646867LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = 43U;
	int16_t x230 = INT16_MAX;
	int64_t x231 = -85942030895LL;
	int64_t x232 = INT64_MIN;
	volatile int64_t t51 = -37296528019395488LL;

	t51 = ((x229-x230)|(x231/x232));

	if (t51 != -32724LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MIN;
	uint64_t x234 = 0LLU;
	uint64_t x235 = 1LLU;
	int64_t x236 = 34LL;

	t52 = ((x233-x234)|(x235/x236));

	if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x238 = -497;
	int32_t x239 = INT32_MAX;
	int8_t x240 = INT8_MAX;
	volatile int32_t t53 = -288662;

	t53 = ((x237-x238)|(x239/x240));

	if (t53 != -2130573831) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = 0;
	volatile int16_t x242 = 7;
	int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MAX;
	static int32_t t54 = -396;

	t54 = ((x241-x242)|(x243/x244));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x245 = 1228813;
	volatile int32_t x246 = -238391945;
	int16_t x247 = INT16_MIN;

	t55 = ((x245-x246)|(x247/x248));

	if (t55 != 239653526) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x253 = UINT16_MAX;
	static uint32_t x254 = 24320U;
	int8_t x255 = INT8_MIN;
	volatile int64_t x256 = INT64_MAX;
	volatile int64_t t56 = -29093652LL;

	t56 = ((x253-x254)|(x255/x256));

	if (t56 != 41215LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = 0;
	static uint8_t x258 = UINT8_MAX;
	uint8_t x259 = 16U;

	t57 = ((x257-x258)|(x259/x260));

	if (t57 != -255) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x261 = INT32_MIN;
	uint64_t x262 = 61LLU;
	volatile int16_t x263 = 0;
	volatile int32_t x264 = 1;
	static uint64_t t58 = 236857403429LLU;

	t58 = ((x261-x262)|(x263/x264));

	if (t58 != 18446744071562067907LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x265 = INT16_MIN;
	uint8_t x266 = UINT8_MAX;
	static uint16_t x267 = 87U;
	int64_t x268 = -173LL;
	int64_t t59 = 10412LL;

	t59 = ((x265-x266)|(x267/x268));

	if (t59 != -33023LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x273 = INT32_MAX;
	volatile uint8_t x274 = UINT8_MAX;
	volatile uint64_t x275 = 997517043545301LLU;
	volatile int64_t x276 = INT64_MIN;
	static volatile uint64_t t60 = 84LLU;

	t60 = ((x273-x274)|(x275/x276));

	if (t60 != 2147483392LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = INT16_MIN;
	static uint32_t x279 = UINT32_MAX;
	uint32_t t61 = 500053U;

	t61 = ((x277-x278)|(x279/x280));

	if (t61 != 67108863U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	int32_t x283 = -1;
	int64_t x284 = INT64_MIN;

	t62 = ((x281-x282)|(x283/x284));

	if (t62 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = 7634;
	uint16_t x286 = 44U;
	int64_t x287 = INT64_MIN;
	int64_t x288 = 1512834078617LL;
	int64_t t63 = 889747LL;

	t63 = ((x285-x286)|(x287/x288));

	if (t63 != -6095434LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x290 = -1LL;
	uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 15733LLU;
	static uint64_t t64 = 8441494275008LLU;

	t64 = ((x289-x290)|(x291/x292));

	if (t64 != 582LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = -512234860669255LL;
	uint8_t x294 = 71U;
	static int8_t x295 = INT8_MIN;
	volatile int8_t x296 = INT8_MAX;
	static volatile int64_t t65 = -33619750534606905LL;

	t65 = ((x293-x294)|(x295/x296));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = -9487;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = 12;
	int64_t x300 = INT64_MAX;
	int64_t t66 = 1288LL;

	t66 = ((x297-x298)|(x299/x300));

	if (t66 != -75022LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 54340396LL;
	int64_t x302 = -1LL;
	uint16_t x303 = 5522U;
	int64_t x304 = INT64_MIN;
	static int64_t t67 = -33292869463LL;

	t67 = ((x301-x302)|(x303/x304));

	if (t67 != 54340397LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x305 = -6658841456070835LL;
	static int16_t x306 = INT16_MAX;
	int16_t x307 = -1;
	int8_t x308 = INT8_MAX;
	volatile int64_t t68 = -16596702654784LL;

	t68 = ((x305-x306)|(x307/x308));

	if (t68 != -6658841456103602LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	int16_t x310 = -1;
	static uint16_t x311 = UINT16_MAX;
	static uint32_t x312 = 6U;
	volatile uint64_t t69 = 809200739120450841LLU;

	t69 = ((x309-x310)|(x311/x312));

	if (t69 != 10922LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x318 = -1;
	int64_t x319 = -1LL;
	int32_t x320 = INT32_MAX;
	volatile int64_t t70 = -72960308957915381LL;

	t70 = ((x317-x318)|(x319/x320));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x321 = 4540622771424372LLU;
	static int32_t x324 = 20;

	t71 = ((x321-x322)|(x323/x324));

	if (t71 != 4540624927575292LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x325 = INT32_MIN;
	volatile uint64_t x327 = 7590820058LLU;
	volatile int64_t x328 = 14439620182473576LL;
	static volatile uint64_t t72 = 31393LLU;

	t72 = ((x325-x326)|(x327/x328));

	if (t72 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = 996548U;
	int64_t x330 = -7LL;
	int64_t x331 = -1LL;
	volatile uint32_t x332 = UINT32_MAX;
	volatile int64_t t73 = -186251887738210882LL;

	t73 = ((x329-x330)|(x331/x332));

	if (t73 != 996555LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x333 = 223072U;
	uint32_t x334 = UINT32_MAX;
	static volatile int16_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t74 = 5989846185077LLU;

	t74 = ((x333-x334)|(x335/x336));

	if (t74 != 223073LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MIN;

	t75 = ((x337-x338)|(x339/x340));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x342 = -5;
	volatile uint8_t x343 = 20U;
	int8_t x344 = INT8_MIN;
	volatile int32_t t76 = 13;

	t76 = ((x341-x342)|(x343/x344));

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x349 = -1755;
	static int64_t x350 = INT64_MIN;
	uint32_t x351 = 87673897U;
	volatile int16_t x352 = INT16_MAX;

	t77 = ((x349-x350)|(x351/x352));

	if (t77 != 9223372036854774647LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = -1;
	int64_t x355 = INT64_MAX;
	int64_t t78 = 163119173023360905LL;

	t78 = ((x353-x354)|(x355/x356));

	if (t78 != 51816696836262785LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MIN;
	static int16_t x358 = INT16_MIN;
	volatile int16_t x359 = INT16_MAX;
	uint64_t x360 = 30870974877LLU;
	uint64_t t79 = 295878LLU;

	t79 = ((x357-x358)|(x359/x360));

	if (t79 != 32640LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = 243362783225363713LL;
	int8_t x363 = -1;
	uint8_t x364 = 1U;
	static int64_t t80 = 2660736011549120226LL;

	t80 = ((x361-x362)|(x363/x364));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x366 = UINT64_MAX;
	uint8_t x368 = UINT8_MAX;
	uint64_t t81 = 821708LLU;

	t81 = ((x365-x366)|(x367/x368));

	if (t81 != 498LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x373 = UINT32_MAX;
	uint32_t x374 = 61U;
	volatile int64_t x376 = INT64_MIN;
	volatile int64_t t82 = 459LL;

	t82 = ((x373-x374)|(x375/x376));

	if (t82 != 4294967234LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x381 = -6254LL;
	int16_t x383 = -3444;
	static volatile int16_t x384 = 64;
	int64_t t83 = -1610610109LL;

	t83 = ((x381-x382)|(x383/x384));

	if (t83 != -5LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x385 = 1;
	int8_t x386 = INT8_MIN;
	int16_t x387 = -1;
	volatile int64_t x388 = INT64_MAX;
	static volatile int64_t t84 = 273446076375LL;

	t84 = ((x385-x386)|(x387/x388));

	if (t84 != 129LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x398 = 32U;
	int8_t x399 = -1;
	uint8_t x400 = 31U;
	int32_t t85 = 352;

	t85 = ((x397-x398)|(x399/x400));

	if (t85 != 95) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x401 = -1;
	static int32_t x402 = -1;
	uint32_t x403 = 55412U;
	int64_t x404 = INT64_MAX;
	volatile int64_t t86 = -473896711LL;

	t86 = ((x401-x402)|(x403/x404));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = -1;
	uint32_t x406 = 16016U;
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;

	t87 = ((x405-x406)|(x407/x408));

	if (t87 != 4294951279LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = -3;
	int32_t x410 = INT32_MIN;
	volatile uint16_t x411 = 5198U;
	volatile uint32_t t88 = 1760764U;

	t88 = ((x409-x410)|(x411/x412));

	if (t88 != 2147483645U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x413 = 48;
	static int8_t x414 = -27;
	volatile uint64_t x415 = 35055710266637LLU;

	t89 = ((x413-x414)|(x415/x416));

	if (t89 != 75LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MIN;
	volatile uint16_t x420 = 9U;

	t90 = ((x417-x418)|(x419/x420));

	if (t90 != -954437176LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x421 = INT8_MIN;
	static int16_t x422 = INT16_MIN;
	static volatile int32_t x423 = -7565639;
	volatile int16_t x424 = INT16_MAX;
	int32_t t91 = 3203495;

	t91 = ((x421-x422)|(x423/x424));

	if (t91 != -102) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = 4224534886966LLU;
	int16_t x426 = INT16_MIN;
	int8_t x427 = 1;
	int8_t x428 = 3;
	uint64_t t92 = 42138800379LLU;

	t92 = ((x425-x426)|(x427/x428));

	if (t92 != 4224534919734LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = INT8_MAX;
	uint16_t x430 = 4U;
	int32_t x431 = -7905115;
	int8_t x432 = INT8_MIN;

	t93 = ((x429-x430)|(x431/x432));

	if (t93 != 61823) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = 237;
	int32_t x435 = 3017173;
	int8_t x436 = -1;
	volatile uint32_t t94 = 960U;

	t94 = ((x433-x434)|(x435/x436));

	if (t94 != 4291950319U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x439 = INT16_MAX;
	int64_t x440 = -1LL;
	volatile int64_t t95 = -16492LL;

	t95 = ((x437-x438)|(x439/x440));

	if (t95 != -12191LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x441 = 0U;
	volatile int64_t x442 = 13LL;
	uint32_t x443 = 659U;
	int32_t x444 = -1;
	int64_t t96 = 55605472910LL;

	t96 = ((x441-x442)|(x443/x444));

	if (t96 != -13LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = -1;
	int32_t x446 = 6;
	volatile int64_t x447 = -1LL;
	volatile int16_t x448 = -117;

	t97 = ((x445-x446)|(x447/x448));

	if (t97 != -7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = INT16_MIN;
	static int64_t x459 = INT64_MIN;
	volatile int64_t t98 = -169545286117193LL;

	t98 = ((x457-x458)|(x459/x460));

	if (t98 != -16657755LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x462 = UINT32_MAX;
	int32_t x464 = INT32_MIN;
	int64_t t99 = -33741LL;

	t99 = ((x461-x462)|(x463/x464));

	if (t99 != 4294970474LL) { NG(); } else { ; }
	
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

