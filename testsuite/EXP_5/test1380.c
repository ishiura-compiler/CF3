#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x1 = -1;
int32_t t0 = -1;
static int64_t x8 = 4LL;
int32_t x11 = INT32_MIN;
volatile int32_t t2 = 508828914;
uint32_t x20 = UINT32_MAX;
int16_t x21 = INT16_MIN;
int8_t x37 = -1;
volatile int16_t x40 = INT16_MAX;
int64_t x43 = INT64_MIN;
uint16_t x53 = 472U;
uint16_t x56 = 16593U;
volatile int32_t x64 = INT32_MIN;
int8_t x67 = -1;
volatile int64_t t17 = -63500244516387LL;
static int8_t x77 = INT8_MAX;
int8_t x78 = INT8_MIN;
volatile uint64_t x83 = UINT64_MAX;
int64_t x84 = INT64_MAX;
int32_t x86 = 555;
uint64_t x90 = UINT64_MAX;
int32_t x91 = 1395650;
int32_t x99 = INT32_MIN;
volatile int32_t t25 = -1;
volatile int64_t x107 = -5410LL;
int32_t x113 = INT32_MAX;
static int32_t t28 = INT32_MAX;
static int32_t x123 = INT32_MIN;
uint8_t x133 = 30U;
int16_t x137 = -1;
int64_t x140 = INT64_MIN;
int64_t x142 = 3894876LL;
static int64_t x147 = -1LL;
volatile int16_t x148 = 4;
int8_t x149 = INT8_MIN;
volatile int64_t x152 = INT64_MAX;
static int32_t x153 = 1;
int64_t x156 = 1521171153683LL;
volatile uint8_t x165 = 5U;
static int16_t x174 = INT16_MAX;
static uint64_t x179 = UINT64_MAX;
int64_t x180 = -1LL;
static int8_t x184 = INT8_MIN;
static int16_t x187 = INT16_MAX;
volatile int16_t x188 = INT16_MIN;
volatile int32_t t45 = 3;
int32_t x196 = -183700;
int32_t x197 = INT32_MIN;
static uint8_t x198 = 5U;
uint64_t x205 = 79654LLU;
volatile int32_t x213 = INT32_MIN;
static int16_t x214 = -1;
int16_t x215 = INT16_MIN;
static int32_t t51 = INT32_MIN;
uint32_t t52 = UINT32_MAX;
volatile int32_t t53 = 3182;
int8_t x225 = INT8_MAX;
static int64_t x229 = -1LL;
uint32_t x231 = UINT32_MAX;
volatile int64_t t55 = 1853LL;
int16_t x246 = -1;
int64_t x248 = INT64_MAX;
volatile int32_t t60 = -2086;
int32_t t61 = 43269;
static int8_t x262 = INT8_MAX;
int16_t x268 = INT16_MIN;
static uint32_t t65 = 25619450U;
static int32_t x276 = INT32_MIN;
int32_t t66 = 23390;
int8_t x292 = -1;
uint16_t x297 = 1U;
int32_t x299 = -1;
uint64_t t70 = 68328859513612LLU;
static int64_t t71 = -396541891445207LL;
uint64_t x305 = UINT64_MAX;
static int32_t x312 = -587732910;
int8_t x314 = INT8_MIN;
int32_t x315 = INT32_MIN;
static int8_t x319 = -1;
uint8_t x322 = UINT8_MAX;
volatile int32_t t76 = -2;
int32_t t77 = -18927;
int64_t x333 = INT64_MIN;
volatile int16_t x335 = INT16_MIN;
int64_t t80 = -112786301160LL;
volatile int64_t t82 = 3LL;
int64_t x352 = 487016676017976393LL;
static volatile int32_t x357 = INT32_MIN;
int64_t x360 = -724664407108LL;
uint64_t x363 = 11975318LLU;
static uint32_t x372 = 4444039U;
volatile int64_t x376 = INT64_MAX;
int8_t x380 = 0;
uint64_t x393 = 53243917LLU;
int64_t x405 = -14815340968LL;
volatile uint16_t x407 = 47U;
int16_t x411 = INT16_MIN;
int8_t x415 = -1;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MIN;
	int16_t x4 = 9;

	t0 = (x1-((x2<x3)*x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1482LLU;
	int16_t x6 = INT16_MIN;
	volatile uint32_t x7 = UINT32_MAX;
	static volatile uint64_t t1 = 65941631547LLU;

	t1 = (x5-((x6<x7)*x8));

	if (t1 != 1478LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -10915;
	volatile int32_t x10 = INT32_MIN;
	int16_t x12 = 1;

	t2 = (x9-((x10<x11)*x12));

	if (t2 != -10915) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 59540U;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = UINT32_MAX;
	static volatile int16_t x16 = 584;
	volatile uint32_t t3 = 361893U;

	t3 = (x13-((x14<x15)*x16));

	if (t3 != 58956U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 13;
	uint64_t x18 = 84636468245823458LLU;
	static int64_t x19 = 232LL;
	uint32_t t4 = 5532U;

	t4 = (x17-((x18<x19)*x20));

	if (t4 != 13U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	int32_t x23 = 2402627;
	static volatile int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -1815198;

	t5 = (x21-((x22<x23)*x24));

	if (t5 != 2147450880) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 3;
	int64_t x26 = INT64_MIN;
	static int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MAX;
	static int64_t t6 = 2155896LL;

	t6 = (x25-((x26<x27)*x28));

	if (t6 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 5741113678559LLU;
	int64_t x30 = INT64_MIN;
	int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MIN;
	uint64_t t7 = 261962176LLU;

	t7 = (x29-((x30<x31)*x32));

	if (t7 != 5741113678687LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -22912138332350000LL;
	int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MAX;
	volatile int64_t t8 = -52473081989LL;

	t8 = (x33-((x34<x35)*x36));

	if (t8 != -22912138332350000LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = 201;
	static uint32_t x39 = 27879962U;
	int32_t t9 = 8;

	t9 = (x37-((x38<x39)*x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MAX;
	uint16_t x44 = 30U;
	int32_t t10 = 243170;

	t10 = (x41-((x42<x43)*x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = UINT8_MAX;
	uint16_t x48 = 5772U;
	volatile int32_t t11 = -4;

	t11 = (x45-((x46<x47)*x48));

	if (t11 != 2147477875) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 39U;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = 14852873U;
	uint32_t t12 = 231U;

	t12 = (x49-((x50<x51)*x52));

	if (t12 != 39U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = UINT16_MAX;
	volatile int8_t x55 = 2;
	volatile int32_t t13 = -59947;

	t13 = (x53-((x54<x55)*x56));

	if (t13 != 472) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 47245743043759LLU;
	int32_t x58 = INT32_MIN;
	static volatile int32_t x59 = INT32_MAX;
	uint8_t x60 = 1U;
	volatile uint64_t t14 = 12301233LLU;

	t14 = (x57-((x58<x59)*x60));

	if (t14 != 47245743043758LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int16_t x62 = 1708;
	uint32_t x63 = 442U;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x61-((x62<x63)*x64));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	volatile int64_t x66 = -1LL;
	volatile uint8_t x68 = 13U;
	volatile int32_t t16 = -3;

	t16 = (x65-((x66<x67)*x68));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 2850819198113577LL;
	int64_t x70 = -1LL;
	int16_t x71 = INT16_MIN;
	int16_t x72 = -7617;

	t17 = (x69-((x70<x71)*x72));

	if (t17 != 2850819198113577LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MIN;
	static int16_t x76 = -1;
	int32_t t18 = 65947;

	t18 = (x73-((x74<x75)*x76));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x79 = INT16_MIN;
	uint64_t x80 = 4358673356188661LLU;
	volatile uint64_t t19 = 118300432LLU;

	t19 = (x77-((x78<x79)*x80));

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 56U;
	static int32_t x82 = -14825211;
	static int64_t t20 = 0LL;

	t20 = (x81-((x82<x83)*x84));

	if (t20 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 1U;
	int8_t x87 = -46;
	int8_t x88 = 11;
	volatile int32_t t21 = -13267;

	t21 = (x85-((x86<x87)*x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int32_t x92 = INT32_MAX;
	int32_t t22 = INT32_MIN;

	t22 = (x89-((x90<x91)*x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	int64_t x94 = -260719LL;
	volatile int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x93-((x94<x95)*x96));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = -1;
	int32_t x100 = INT32_MAX;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x97-((x98<x99)*x100));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -55;
	int8_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = 5444;

	t25 = (x101-((x102<x103)*x104));

	if (t25 != -5499) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	int32_t t26 = -1764599;

	t26 = (x105-((x106<x107)*x108));

	if (t26 != -33023) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 1792LLU;
	int32_t x110 = INT32_MIN;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = INT8_MAX;
	uint64_t t27 = 94915011LLU;

	t27 = (x109-((x110<x111)*x112));

	if (t27 != 1665LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = 5091000630210LLU;
	uint8_t x115 = 34U;
	static int16_t x116 = INT16_MAX;

	t28 = (x113-((x114<x115)*x116));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = UINT32_MAX;
	int16_t x118 = -1;
	static int16_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	uint32_t t29 = UINT32_MAX;

	t29 = (x117-((x118<x119)*x120));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	int64_t x124 = 447LL;
	volatile int64_t t30 = -1133186122186LL;

	t30 = (x121-((x122<x123)*x124));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MIN;
	volatile uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 57U;
	volatile int64_t x128 = -1000723207LL;
	int64_t t31 = 308708076401LL;

	t31 = (x125-((x126<x127)*x128));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 15;
	volatile uint64_t x130 = 248990LLU;
	static uint8_t x131 = 1U;
	static int8_t x132 = -6;
	int32_t t32 = 227;

	t32 = (x129-((x130<x131)*x132));

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x134 = INT16_MAX;
	int32_t x135 = INT32_MIN;
	int32_t x136 = 13383766;
	volatile int32_t t33 = 1;

	t33 = (x133-((x134<x135)*x136));

	if (t33 != 30) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MAX;
	uint32_t x139 = UINT32_MAX;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x137-((x138<x139)*x140));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = -1;
	volatile int32_t t35 = 83;

	t35 = (x141-((x142<x143)*x144));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = 1894;
	int32_t t36 = 2973;

	t36 = (x145-((x146<x147)*x148));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x150 = 1181LL;
	static int32_t x151 = 37;
	int64_t t37 = -1273497725LL;

	t37 = (x149-((x150<x151)*x152));

	if (t37 != -128LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MIN;
	static volatile int16_t x155 = -148;
	volatile int64_t t38 = -18703362287LL;

	t38 = (x153-((x154<x155)*x156));

	if (t38 != -1521171153682LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 45U;
	volatile uint16_t x162 = 5295U;
	uint16_t x163 = 3U;
	uint64_t x164 = UINT64_MAX;
	uint64_t t39 = 19369587583185873LLU;

	t39 = (x161-((x162<x163)*x164));

	if (t39 != 45LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x166 = UINT16_MAX;
	uint64_t x167 = UINT64_MAX;
	static int16_t x168 = INT16_MIN;
	int32_t t40 = 24054799;

	t40 = (x165-((x166<x167)*x168));

	if (t40 != 32773) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	static int16_t x170 = 301;
	int32_t x171 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;
	static int32_t t41 = -1924;

	t41 = (x169-((x170<x171)*x172));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x175 = 3245U;
	volatile int32_t x176 = INT32_MAX;
	volatile int32_t t42 = -17482;

	t42 = (x173-((x174<x175)*x176));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x177 = UINT64_MAX;
	uint8_t x178 = 1U;
	volatile uint64_t t43 = 11319LLU;

	t43 = (x177-((x178<x179)*x180));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = UINT64_MAX;
	int64_t x182 = INT64_MAX;
	uint32_t x183 = 409U;
	static uint64_t t44 = UINT64_MAX;

	t44 = (x181-((x182<x183)*x184));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = 520;
	int32_t x186 = INT32_MAX;

	t45 = (x185-((x186<x187)*x188));

	if (t45 != 520) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MIN;
	static uint64_t x190 = UINT64_MAX;
	volatile uint8_t x191 = 1U;
	int64_t x192 = -1LL;
	static int64_t t46 = -11432318014LL;

	t46 = (x189-((x190<x191)*x192));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 328LLU;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = 7U;
	volatile uint64_t t47 = 471612567LLU;

	t47 = (x193-((x194<x195)*x196));

	if (t47 != 328LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x199 = 1;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t48 = INT32_MIN;

	t48 = (x197-((x198<x199)*x200));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = UINT8_MAX;
	static uint8_t x202 = 3U;
	static int8_t x203 = INT8_MAX;
	int16_t x204 = 50;
	volatile int32_t t49 = 66811232;

	t49 = (x201-((x202<x203)*x204));

	if (t49 != 205) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x206 = -1;
	uint64_t x207 = 479082775LLU;
	volatile int64_t x208 = -1LL;
	volatile uint64_t t50 = 0LLU;

	t50 = (x205-((x206<x207)*x208));

	if (t50 != 79654LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x216 = INT8_MIN;

	t51 = (x213-((x214<x215)*x216));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x217 = -1;
	volatile int32_t x218 = INT32_MIN;
	volatile uint32_t x219 = 322664U;
	uint32_t x220 = 437070U;

	t52 = (x217-((x218<x219)*x220));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -10;
	static uint8_t x222 = 5U;
	int8_t x223 = -1;
	static uint16_t x224 = 7U;

	t53 = (x221-((x222<x223)*x224));

	if (t53 != -10) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x226 = INT64_MIN;
	uint8_t x227 = 8U;
	static uint32_t x228 = 102U;
	uint32_t t54 = 311988U;

	t54 = (x225-((x226<x227)*x228));

	if (t54 != 25U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x230 = 3453LLU;
	int64_t x232 = -1LL;

	t55 = (x229-((x230<x231)*x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -31;
	volatile int64_t x234 = INT64_MIN;
	static int16_t x235 = 3;
	int8_t x236 = INT8_MIN;
	int32_t t56 = -586522008;

	t56 = (x233-((x234<x235)*x236));

	if (t56 != 97) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = -1;
	uint64_t x238 = 509432889LLU;
	volatile int16_t x239 = -1;
	int8_t x240 = -1;
	int32_t t57 = 5;

	t57 = (x237-((x238<x239)*x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = UINT64_MAX;
	static volatile uint64_t x242 = 6089540135325LLU;
	int16_t x243 = INT16_MAX;
	uint16_t x244 = UINT16_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (x241-((x242<x243)*x244));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	static int64_t x247 = INT64_MIN;
	static volatile int64_t t59 = 260036466983346935LL;

	t59 = (x245-((x246<x247)*x248));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = UINT8_MAX;
	volatile uint8_t x250 = UINT8_MAX;
	uint64_t x251 = UINT64_MAX;
	int16_t x252 = INT16_MAX;

	t60 = (x249-((x250<x251)*x252));

	if (t60 != -32512) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = -1;
	static volatile int8_t x254 = INT8_MIN;
	static int8_t x255 = INT8_MAX;
	uint16_t x256 = UINT16_MAX;

	t61 = (x253-((x254<x255)*x256));

	if (t61 != -65536) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MAX;
	static uint32_t x260 = 1U;
	uint32_t t62 = 120U;

	t62 = (x257-((x258<x259)*x260));

	if (t62 != 65534U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int64_t x263 = INT64_MAX;
	static int64_t x264 = 92482036384219LL;
	volatile int64_t t63 = -6974851942868088LL;

	t63 = (x261-((x262<x263)*x264));

	if (t63 != -92482036383964LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x265 = INT8_MIN;
	static uint16_t x266 = 8511U;
	static int16_t x267 = -1;
	volatile int32_t t64 = 4;

	t64 = (x265-((x266<x267)*x268));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 96418U;
	volatile uint16_t x270 = 1605U;
	static int32_t x271 = INT32_MIN;
	uint32_t x272 = 1136841974U;

	t65 = (x269-((x270<x271)*x272));

	if (t65 != 96418U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -1462;
	static uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MAX;

	t66 = (x273-((x274<x275)*x276));

	if (t66 != 2147482186) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = 32157957;
	volatile int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	uint8_t x280 = 30U;
	int32_t t67 = -674;

	t67 = (x277-((x278<x279)*x280));

	if (t67 != 32157957) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	int64_t x290 = -244LL;
	int32_t x291 = 41337;
	static int32_t t68 = -11943;

	t68 = (x289-((x290<x291)*x292));

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = 10415477;
	static volatile int32_t x294 = INT32_MIN;
	int16_t x295 = -1;
	int16_t x296 = -1;
	volatile int32_t t69 = -112822820;

	t69 = (x293-((x294<x295)*x296));

	if (t69 != 10415478) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x298 = INT32_MIN;
	uint64_t x300 = 3947255776269655LLU;

	t70 = (x297-((x298<x299)*x300));

	if (t70 != 18442796817933281962LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MAX;
	int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	static int64_t x304 = INT64_MAX;

	t71 = (x301-((x302<x303)*x304));

	if (t71 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = -1;
	int16_t x308 = INT16_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = (x305-((x306<x307)*x308));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile int64_t x310 = -2744577197691LL;
	volatile int16_t x311 = 15;
	int32_t t73 = -40905041;

	t73 = (x309-((x310<x311)*x312));

	if (t73 != -1559750738) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x313 = INT16_MIN;
	int16_t x316 = -7724;
	static int32_t t74 = 1200082;

	t74 = (x313-((x314<x315)*x316));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x317 = 684473533332566LLU;
	uint32_t x318 = 2515033U;
	static volatile uint8_t x320 = 44U;
	uint64_t t75 = 0LLU;

	t75 = (x317-((x318<x319)*x320));

	if (t75 != 684473533332522LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x321 = 1;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = -5;

	t76 = (x321-((x322<x323)*x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -1;
	uint64_t x326 = 10627855LLU;
	int16_t x327 = -1;
	int8_t x328 = INT8_MIN;

	t77 = (x325-((x326<x327)*x328));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 1101708U;
	uint32_t x330 = 5U;
	int64_t x331 = -175765833312LL;
	uint64_t x332 = 8054LLU;
	static volatile uint64_t t78 = 221907184266LLU;

	t78 = (x329-((x330<x331)*x332));

	if (t78 != 1101708LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x334 = -34;
	volatile int8_t x336 = INT8_MIN;
	static int64_t t79 = INT64_MIN;

	t79 = (x333-((x334<x335)*x336));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = -1;
	static uint8_t x338 = 0U;
	int32_t x339 = INT32_MIN;
	int64_t x340 = 2116300849LL;

	t80 = (x337-((x338<x339)*x340));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	int64_t x342 = INT64_MIN;
	static int64_t x343 = INT64_MAX;
	uint16_t x344 = 0U;
	volatile int32_t t81 = 41;

	t81 = (x341-((x342<x343)*x344));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = UINT32_MAX;
	int32_t x346 = 10;
	static int16_t x347 = INT16_MIN;
	volatile int64_t x348 = -2349LL;

	t82 = (x345-((x346<x347)*x348));

	if (t82 != 4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = 5943;
	uint32_t x350 = UINT32_MAX;
	static volatile int32_t x351 = 530;
	int64_t t83 = -112LL;

	t83 = (x349-((x350<x351)*x352));

	if (t83 != 5943LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = 9015385849535147043LLU;
	static int64_t x354 = -1LL;
	int64_t x355 = INT64_MIN;
	uint8_t x356 = 12U;
	static volatile uint64_t t84 = 82LLU;

	t84 = (x353-((x354<x355)*x356));

	if (t84 != 9015385849535147043LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x358 = UINT64_MAX;
	static int16_t x359 = INT16_MAX;
	int64_t t85 = 2100809069726433261LL;

	t85 = (x357-((x358<x359)*x360));

	if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 1U;
	int32_t x362 = INT32_MIN;
	uint32_t x364 = 95851489U;
	static uint32_t t86 = 0U;

	t86 = (x361-((x362<x363)*x364));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -1;
	volatile int64_t x366 = 0LL;
	uint16_t x367 = UINT16_MAX;
	static uint16_t x368 = 2814U;
	static volatile int32_t t87 = 1738080;

	t87 = (x365-((x366<x367)*x368));

	if (t87 != -2815) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile uint8_t x370 = 12U;
	uint64_t x371 = 2LLU;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x369-((x370<x371)*x372));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 1U;
	int64_t t89 = INT64_MIN;

	t89 = (x373-((x374<x375)*x376));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -1;
	uint32_t x378 = UINT32_MAX;
	uint16_t x379 = UINT16_MAX;
	int32_t t90 = -4334006;

	t90 = (x377-((x378<x379)*x380));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = INT32_MIN;
	volatile int64_t x382 = 3LL;
	volatile uint32_t x383 = 12799935U;
	volatile int16_t x384 = -1;
	int32_t t91 = -22598290;

	t91 = (x381-((x382<x383)*x384));

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 354021LLU;
	uint32_t x386 = 828198788U;
	uint32_t x387 = 334935362U;
	uint8_t x388 = 11U;
	uint64_t t92 = 3523LLU;

	t92 = (x385-((x386<x387)*x388));

	if (t92 != 354021LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x389 = 878623830923LLU;
	static int64_t x390 = INT64_MAX;
	int16_t x391 = -12032;
	volatile int32_t x392 = INT32_MAX;
	uint64_t t93 = 586LLU;

	t93 = (x389-((x390<x391)*x392));

	if (t93 != 878623830923LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x394 = -1;
	volatile int16_t x395 = -1;
	static uint64_t x396 = UINT64_MAX;
	volatile uint64_t t94 = 2240330588601LLU;

	t94 = (x393-((x394<x395)*x396));

	if (t94 != 53243917LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 1LLU;
	int16_t x398 = -1;
	int8_t x399 = -1;
	static int64_t x400 = INT64_MIN;
	uint64_t t95 = 3147567001LLU;

	t95 = (x397-((x398<x399)*x400));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = -19;
	int64_t x402 = -735883870LL;
	volatile uint64_t x403 = UINT64_MAX;
	volatile int8_t x404 = INT8_MIN;
	static volatile int32_t t96 = -27946;

	t96 = (x401-((x402<x403)*x404));

	if (t96 != 109) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x406 = INT16_MIN;
	static volatile int16_t x408 = INT16_MAX;
	volatile int64_t t97 = 219LL;

	t97 = (x405-((x406<x407)*x408));

	if (t97 != -14815373735LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = INT64_MAX;
	int8_t x410 = -1;
	static int8_t x412 = INT8_MIN;
	int64_t t98 = INT64_MAX;

	t98 = (x409-((x410<x411)*x412));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = 29U;
	static uint8_t x414 = 7U;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t99 = 48443251;

	t99 = (x413-((x414<x415)*x416));

	if (t99 != 29) { NG(); } else { ; }
	
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

