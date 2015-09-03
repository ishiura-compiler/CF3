#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 0;
volatile uint32_t x9 = 140U;
volatile int8_t x10 = -1;
int64_t x17 = INT64_MIN;
static int8_t x22 = INT8_MIN;
int32_t t4 = -216734125;
int32_t x33 = INT32_MIN;
int64_t x34 = INT64_MIN;
int16_t x37 = -7;
static uint64_t x39 = 7285858731201380762LLU;
int32_t t9 = -4;
int16_t x48 = INT16_MIN;
int64_t x60 = INT64_MIN;
int32_t x61 = -1;
static int32_t x65 = INT32_MAX;
int16_t x73 = -59;
volatile int32_t t15 = 23702509;
int64_t x78 = INT64_MIN;
static int8_t x79 = 8;
volatile int32_t t16 = -2;
static int16_t x82 = INT16_MIN;
volatile uint64_t t18 = 7733406961665954LLU;
int16_t x97 = -15736;
int8_t x102 = INT8_MIN;
int16_t x103 = 341;
int8_t x104 = -43;
static int32_t t21 = 22187;
int16_t x105 = 3;
int8_t x106 = INT8_MIN;
static uint16_t x110 = UINT16_MAX;
static int16_t x112 = INT16_MIN;
volatile uint32_t x120 = UINT32_MAX;
static volatile uint32_t t24 = 3U;
volatile uint64_t t26 = 14919869606970LLU;
int8_t x131 = INT8_MIN;
uint64_t t27 = 7007LLU;
static uint8_t x151 = 15U;
static int8_t x154 = 1;
int16_t x162 = 10807;
uint8_t x163 = UINT8_MAX;
int32_t t33 = 0;
uint64_t x167 = 10LLU;
uint32_t x169 = UINT32_MAX;
static volatile uint8_t x172 = UINT8_MAX;
int8_t x173 = INT8_MAX;
static int32_t x174 = -1;
volatile int16_t x176 = -1;
int64_t x184 = INT64_MIN;
static uint32_t x185 = UINT32_MAX;
volatile uint32_t t39 = 1U;
static uint64_t x195 = UINT64_MAX;
int32_t x198 = -1;
int8_t x199 = 1;
uint32_t x204 = 114267039U;
volatile int32_t t44 = 4;
int32_t x213 = INT32_MAX;
int32_t x215 = -1;
int64_t x218 = -24812LL;
uint16_t x219 = UINT16_MAX;
int16_t x223 = -1;
static uint8_t x226 = 0U;
static int8_t x233 = -1;
volatile int64_t x238 = INT64_MIN;
uint32_t t53 = 16U;
int8_t x249 = INT8_MIN;
volatile int64_t x253 = -1LL;
volatile uint16_t x254 = 5260U;
uint8_t x258 = 1U;
uint64_t x260 = 4LLU;
int32_t t56 = -10528630;
uint8_t x268 = 35U;
int32_t t59 = 740;
int32_t x277 = 493;
uint16_t x278 = 1185U;
int32_t x279 = -1;
static uint64_t x284 = 58402LLU;
volatile uint32_t t61 = 1934U;
volatile int32_t x290 = INT32_MIN;
int16_t x295 = -1;
int32_t x297 = -11226919;
int16_t x299 = 1569;
static int8_t x302 = -1;
static int32_t t66 = 0;
volatile uint64_t x307 = 1LLU;
int32_t x311 = INT32_MIN;
int8_t x320 = 13;
uint32_t x322 = 2909U;
uint64_t t72 = UINT64_MAX;
uint16_t x330 = 2U;
int64_t t73 = -197719LL;
volatile int8_t x339 = 0;
volatile int32_t t76 = 4848;
int16_t x345 = -1;
static int16_t x356 = 455;
static volatile int32_t t79 = 32925;
int16_t x363 = INT16_MIN;
int64_t x364 = -651906835126423LL;
uint16_t x367 = UINT16_MAX;
static int64_t x368 = 9371717LL;
int32_t x369 = INT32_MAX;
int16_t x372 = INT16_MIN;
int16_t x373 = INT16_MIN;
int32_t x382 = INT32_MAX;
int16_t x384 = -1;
int64_t t86 = INT64_MIN;
static volatile int16_t x407 = INT16_MIN;
volatile uint64_t t91 = 5112LLU;
static int32_t x423 = INT32_MIN;
volatile int32_t x427 = INT32_MIN;
uint64_t x431 = 2186064559988526LLU;
uint64_t t94 = 0LLU;
uint64_t x436 = 138450LLU;
static int8_t x437 = INT8_MAX;
static int64_t x438 = INT64_MIN;
static int16_t x439 = -10;
volatile int32_t t96 = 9590597;
int32_t t97 = -4213;
volatile int16_t x447 = INT16_MAX;
static int16_t x448 = -1;
uint64_t x449 = UINT64_MAX;
int16_t x451 = INT16_MIN;


void f0(void) {
	uint8_t x5 = 11U;
	volatile int8_t x6 = INT8_MIN;
	static int16_t x7 = INT16_MAX;
	volatile int64_t x8 = 1356LL;

	t0 = (x5^(x6<(x7-x8)));

	if (t0 != 10) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x11 = -1;
	static uint16_t x12 = 120U;
	static volatile uint32_t t1 = 796U;

	t1 = (x9^(x10<(x11-x12)));

	if (t1 != 140U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -1LL;
	volatile int16_t x14 = INT16_MAX;
	volatile int32_t x15 = INT32_MAX;
	volatile int16_t x16 = INT16_MAX;
	static int64_t t2 = -4564323985011532LL;

	t2 = (x13^(x14<(x15-x16)));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = INT32_MIN;
	volatile int32_t x19 = -1;
	static int8_t x20 = -14;
	volatile int64_t t3 = -2455805476391733840LL;

	t3 = (x17^(x18<(x19-x20)));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x23 = 7;
	int8_t x24 = -1;

	t4 = (x21^(x22<(x23-x24)));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static volatile int32_t x26 = INT32_MIN;
	int64_t x27 = 23153827888012LL;
	uint16_t x28 = UINT16_MAX;
	static volatile int32_t t5 = 193924;

	t5 = (x25^(x26<(x27-x28)));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	uint8_t x30 = UINT8_MAX;
	uint64_t x31 = 7286493LLU;
	static uint32_t x32 = 0U;
	int32_t t6 = -2214;

	t6 = (x29^(x30<(x31-x32)));

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x35 = -32760LL;
	volatile int8_t x36 = INT8_MAX;
	int32_t t7 = -10;

	t7 = (x33^(x34<(x35-x36)));

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x38 = -3;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t8 = -1;

	t8 = (x37^(x38<(x39-x40)));

	if (t8 != -7) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = INT32_MAX;
	uint64_t x42 = 175149LLU;
	uint8_t x43 = 24U;
	int64_t x44 = INT64_MAX;

	t9 = (x41^(x42<(x43-x44)));

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 1;
	static volatile int16_t x46 = INT16_MAX;
	int8_t x47 = -1;
	static int32_t t10 = 799160962;

	t10 = (x45^(x46<(x47-x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -1;
	uint32_t x58 = 175U;
	static uint64_t x59 = UINT64_MAX;
	static int32_t t11 = 95669;

	t11 = (x57^(x58<(x59-x60)));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x62 = UINT32_MAX;
	int16_t x63 = INT16_MAX;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t12 = -43;

	t12 = (x61^(x62<(x63-x64)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x66 = -674;
	volatile int64_t x67 = -201984190258LL;
	int16_t x68 = INT16_MAX;
	static int32_t t13 = INT32_MAX;

	t13 = (x65^(x66<(x67-x68)));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	static int8_t x70 = INT8_MIN;
	static uint32_t x71 = 4798509U;
	uint64_t x72 = 7LLU;
	int64_t t14 = INT64_MIN;

	t14 = (x69^(x70<(x71-x72)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x74 = INT32_MAX;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 44071534926463598LLU;

	t15 = (x73^(x74<(x75-x76)));

	if (t15 != -60) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -5;
	static uint64_t x80 = UINT64_MAX;

	t16 = (x77^(x78<(x79-x80)));

	if (t16 != -5) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	uint8_t x83 = UINT8_MAX;
	uint8_t x84 = UINT8_MAX;
	int32_t t17 = 0;

	t17 = (x81^(x82<(x83-x84)));

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 920583LLU;
	int8_t x90 = 0;
	volatile int32_t x91 = INT32_MAX;
	volatile int32_t x92 = 1;

	t18 = (x89^(x90<(x91-x92)));

	if (t18 != 920582LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x93 = 696177;
	int16_t x94 = 8;
	int64_t x95 = INT64_MIN;
	static volatile int16_t x96 = INT16_MIN;
	int32_t t19 = 4356425;

	t19 = (x93^(x94<(x95-x96)));

	if (t19 != 696177) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x98 = INT32_MAX;
	int64_t x99 = 14LL;
	uint64_t x100 = 563747LLU;
	int32_t t20 = -12567;

	t20 = (x97^(x98<(x99-x100)));

	if (t20 != -15735) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;

	t21 = (x101^(x102<(x103-x104)));

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x107 = 0;
	static int32_t x108 = -1;
	int32_t t22 = 1;

	t22 = (x105^(x106<(x107-x108)));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MAX;
	volatile int8_t x111 = -1;
	volatile int32_t t23 = -1;

	t23 = (x109^(x110<(x111-x112)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x118 = INT64_MIN;
	static volatile uint8_t x119 = 1U;

	t24 = (x117^(x118<(x119-x120)));

	if (t24 != 4294967294U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -1;
	static int64_t x122 = -1LL;
	static int16_t x123 = INT16_MIN;
	int64_t x124 = -95045951328981LL;
	static int32_t t25 = 30;

	t25 = (x121^(x122<(x123-x124)));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 2627450567LLU;
	volatile int64_t x126 = INT64_MAX;
	int16_t x127 = INT16_MIN;
	volatile uint64_t x128 = UINT64_MAX;

	t26 = (x125^(x126<(x127-x128)));

	if (t26 != 2627450566LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = 12LLU;
	int64_t x130 = INT64_MIN;
	uint8_t x132 = 52U;

	t27 = (x129^(x130<(x131-x132)));

	if (t27 != 13LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x133 = -1LL;
	uint32_t x134 = 3U;
	uint64_t x135 = 4LLU;
	volatile int32_t x136 = INT32_MIN;
	volatile int64_t t28 = -215631889255668010LL;

	t28 = (x133^(x134<(x135-x136)));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x145 = INT64_MIN;
	static int32_t x146 = -814724;
	uint64_t x147 = 1LLU;
	uint32_t x148 = 25175459U;
	static int64_t t29 = INT64_MIN;

	t29 = (x145^(x146<(x147-x148)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int8_t x150 = -16;
	int64_t x152 = 29167917493979LL;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x149^(x150<(x151-x152)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x153 = INT16_MIN;
	static uint16_t x155 = 1U;
	int8_t x156 = INT8_MIN;
	static int32_t t31 = 59;

	t31 = (x153^(x154<(x155-x156)));

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x157 = 2;
	uint8_t x158 = 55U;
	volatile uint64_t x159 = UINT64_MAX;
	static int64_t x160 = INT64_MIN;
	int32_t t32 = -76256;

	t32 = (x157^(x158<(x159-x160)));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = INT8_MIN;
	volatile int64_t x164 = -2201941712865673LL;

	t33 = (x161^(x162<(x163-x164)));

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MIN;
	static uint8_t x168 = UINT8_MAX;
	int32_t t34 = -12288132;

	t34 = (x165^(x166<(x167-x168)));

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x170 = INT64_MIN;
	volatile int16_t x171 = -13140;
	uint32_t t35 = 1362668280U;

	t35 = (x169^(x170<(x171-x172)));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x175 = -1;
	int32_t t36 = -10275;

	t36 = (x173^(x174<(x175-x176)));

	if (t36 != 126) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x177 = -927;
	uint32_t x178 = 1145394540U;
	uint32_t x179 = 159U;
	int32_t x180 = INT32_MIN;
	int32_t t37 = -29212876;

	t37 = (x177^(x178<(x179-x180)));

	if (t37 != -928) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = -1LL;
	static int64_t x183 = INT64_MIN;
	static uint32_t t38 = 493956342U;

	t38 = (x181^(x182<(x183-x184)));

	if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x186 = INT16_MIN;
	static int32_t x187 = INT32_MAX;
	int32_t x188 = 0;

	t39 = (x185^(x186<(x187-x188)));

	if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = 8787;
	int8_t x190 = -1;
	static volatile int8_t x191 = INT8_MIN;
	volatile int8_t x192 = -1;
	int32_t t40 = 21750;

	t40 = (x189^(x190<(x191-x192)));

	if (t40 != 8787) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x193 = INT64_MAX;
	uint64_t x194 = 29LLU;
	int32_t x196 = -1;
	int64_t t41 = INT64_MAX;

	t41 = (x193^(x194<(x195-x196)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MAX;
	volatile int64_t x200 = 4102950483LL;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x197^(x198<(x199-x200)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x201 = 0LLU;
	int8_t x202 = -1;
	int32_t x203 = INT32_MAX;
	volatile uint64_t t43 = 0LLU;

	t43 = (x201^(x202<(x203-x204)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x205 = 2795U;
	uint16_t x206 = UINT16_MAX;
	int32_t x207 = 58411;
	int64_t x208 = -1LL;

	t44 = (x205^(x206<(x207-x208)));

	if (t44 != 2795) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x214 = 1398U;
	int16_t x216 = -13096;
	volatile int32_t t45 = 1;

	t45 = (x213^(x214<(x215-x216)));

	if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = -95776120LL;
	int16_t x220 = -1;
	volatile int64_t t46 = 5822LL;

	t46 = (x217^(x218<(x219-x220)));

	if (t46 != -95776119LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = INT64_MIN;
	uint16_t x222 = 1U;
	int32_t x224 = INT32_MIN;
	volatile int64_t t47 = 5506697LL;

	t47 = (x221^(x222<(x223-x224)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MAX;
	int16_t x227 = -1;
	volatile int16_t x228 = -1;
	volatile int32_t t48 = 120812936;

	t48 = (x225^(x226<(x227-x228)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = -116;
	static int64_t x230 = INT64_MIN;
	static volatile int32_t x231 = 33186054;
	static volatile int16_t x232 = -1;
	volatile int32_t t49 = 18499;

	t49 = (x229^(x230<(x231-x232)));

	if (t49 != -115) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x234 = 25365066U;
	int32_t x235 = -4404621;
	int16_t x236 = 153;
	volatile int32_t t50 = -1665044;

	t50 = (x233^(x234<(x235-x236)));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = UINT16_MAX;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = -1LL;
	int32_t t51 = 126;

	t51 = (x237^(x238<(x239-x240)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 2820U;
	int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MIN;
	static uint64_t x244 = 53023526867752351LLU;
	volatile int32_t t52 = 14359;

	t52 = (x241^(x242<(x243-x244)));

	if (t52 != 2820) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x245 = 21337637U;
	int16_t x246 = -1790;
	int64_t x247 = -1LL;
	int8_t x248 = -1;

	t53 = (x245^(x246<(x247-x248)));

	if (t53 != 21337636U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x250 = -1;
	volatile int64_t x251 = INT64_MIN;
	int16_t x252 = -1;
	volatile int32_t t54 = 7;

	t54 = (x249^(x250<(x251-x252)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x255 = 323U;
	uint32_t x256 = 1004U;
	volatile int64_t t55 = 13LL;

	t55 = (x253^(x254<(x255-x256)));

	if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x257 = -1;
	int16_t x259 = INT16_MAX;

	t56 = (x257^(x258<(x259-x260)));

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = 7410U;
	static int64_t x262 = INT64_MIN;
	static int8_t x263 = -1;
	volatile uint64_t x264 = UINT64_MAX;
	int32_t t57 = -787016;

	t57 = (x261^(x262<(x263-x264)));

	if (t57 != 7410) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x265 = 24U;
	static int32_t x266 = INT32_MIN;
	volatile int8_t x267 = -44;
	int32_t t58 = -63017653;

	t58 = (x265^(x266<(x267-x268)));

	if (t58 != 25) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = -1;
	volatile int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = 14009026U;

	t59 = (x273^(x274<(x275-x276)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x280 = -1LL;
	int32_t t60 = -1;

	t60 = (x277^(x278<(x279-x280)));

	if (t60 != 493) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = 6106U;
	int16_t x282 = -1;
	volatile int16_t x283 = -1;

	t61 = (x281^(x282<(x283-x284)));

	if (t61 != 6106U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x285 = UINT64_MAX;
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = -1;
	uint8_t x288 = 49U;
	static uint64_t t62 = UINT64_MAX;

	t62 = (x285^(x286<(x287-x288)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x289 = -1LL;
	int32_t x291 = -1;
	volatile int64_t x292 = INT64_MIN;
	volatile int64_t t63 = -7086305863623LL;

	t63 = (x289^(x290<(x291-x292)));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t64 = INT32_MIN;

	t64 = (x293^(x294<(x295-x296)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x298 = -1;
	uint16_t x300 = 1916U;
	int32_t t65 = 6;

	t65 = (x297^(x298<(x299-x300)));

	if (t65 != -11226919) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = 3;
	int16_t x303 = INT16_MIN;
	int32_t x304 = 2885992;

	t66 = (x301^(x302<(x303-x304)));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x305 = 194942776U;
	int32_t x306 = -2695;
	static uint8_t x308 = UINT8_MAX;
	volatile uint32_t t67 = 0U;

	t67 = (x305^(x306<(x307-x308)));

	if (t67 != 194942777U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = INT16_MIN;
	static int16_t x310 = INT16_MAX;
	volatile uint32_t x312 = 8013U;
	volatile int32_t t68 = 0;

	t68 = (x309^(x310<(x311-x312)));

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x313 = -50;
	static int32_t x314 = INT32_MAX;
	int8_t x315 = 8;
	uint64_t x316 = 650LLU;
	int32_t t69 = -56;

	t69 = (x313^(x314<(x315-x316)));

	if (t69 != -49) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x317 = -1LL;
	uint32_t x318 = 62U;
	int32_t x319 = INT32_MAX;
	static volatile int64_t t70 = 95731040LL;

	t70 = (x317^(x318<(x319-x320)));

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x321 = INT16_MAX;
	static int16_t x323 = -1;
	uint64_t x324 = 1556813166526598LLU;
	volatile int32_t t71 = 0;

	t71 = (x321^(x322<(x323-x324)));

	if (t71 != 32766) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MAX;
	int16_t x327 = -1;
	int16_t x328 = 35;

	t72 = (x325^(x326<(x327-x328)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MIN;
	volatile int8_t x331 = INT8_MAX;
	uint32_t x332 = 407643664U;

	t73 = (x329^(x330<(x331-x332)));

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x333 = UINT8_MAX;
	static int16_t x334 = -4898;
	int8_t x335 = -3;
	static int16_t x336 = 23;
	int32_t t74 = -35;

	t74 = (x333^(x334<(x335-x336)));

	if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = 1;
	int16_t x340 = 1;
	volatile int32_t t75 = INT32_MIN;

	t75 = (x337^(x338<(x339-x340)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = -1;
	int32_t x342 = -1;
	int64_t x343 = -3497374011LL;
	int8_t x344 = -1;

	t76 = (x341^(x342<(x343-x344)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x346 = INT8_MIN;
	int32_t x347 = -3395;
	volatile uint32_t x348 = 2315015U;
	static volatile int32_t t77 = 391;

	t77 = (x345^(x346<(x347-x348)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x349 = 5U;
	int8_t x350 = INT8_MAX;
	uint32_t x351 = 484U;
	int32_t x352 = 1;
	volatile int32_t t78 = 3;

	t78 = (x349^(x350<(x351-x352)));

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x353 = 20U;
	int32_t x354 = INT32_MAX;
	int32_t x355 = INT32_MAX;

	t79 = (x353^(x354<(x355-x356)));

	if (t79 != 20) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x357 = INT64_MIN;
	uint32_t x358 = 17U;
	int8_t x359 = 1;
	uint64_t x360 = UINT64_MAX;
	static volatile int64_t t80 = INT64_MIN;

	t80 = (x357^(x358<(x359-x360)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = 89U;
	uint8_t x362 = 4U;
	volatile uint32_t t81 = 104U;

	t81 = (x361^(x362<(x363-x364)));

	if (t81 != 88U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = -507;
	volatile int32_t t82 = INT32_MIN;

	t82 = (x365^(x366<(x367-x368)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x370 = INT64_MIN;
	int8_t x371 = -1;
	volatile int32_t t83 = 106;

	t83 = (x369^(x370<(x371-x372)));

	if (t83 != 2147483646) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x374 = -119LL;
	static uint8_t x375 = 3U;
	static uint8_t x376 = UINT8_MAX;
	static int32_t t84 = -618;

	t84 = (x373^(x374<(x375-x376)));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = -1LL;
	int16_t x383 = INT16_MAX;
	int64_t t85 = -32368417741LL;

	t85 = (x381^(x382<(x383-x384)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x385 = INT64_MIN;
	static int8_t x386 = -1;
	uint64_t x387 = UINT64_MAX;
	int64_t x388 = INT64_MIN;

	t86 = (x385^(x386<(x387-x388)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = 126784;
	int64_t x398 = INT64_MAX;
	volatile int64_t x399 = INT64_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t87 = -26507509;

	t87 = (x397^(x398<(x399-x400)));

	if (t87 != 126784) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = INT16_MIN;
	static int64_t x402 = INT64_MIN;
	volatile int16_t x403 = INT16_MIN;
	uint64_t x404 = 1093141732175LLU;
	int32_t t88 = -2506057;

	t88 = (x401^(x402<(x403-x404)));

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = INT16_MIN;
	uint8_t x406 = 5U;
	uint32_t x408 = 1283566638U;
	int32_t t89 = 7;

	t89 = (x405^(x406<(x407-x408)));

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x409 = INT16_MAX;
	int64_t x410 = 9335544032072LL;
	volatile int16_t x411 = -1;
	int64_t x412 = -11760339173LL;
	int32_t t90 = -6;

	t90 = (x409^(x410<(x411-x412)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 294291220019293466LLU;
	int64_t x414 = -4860862018327985LL;
	static volatile int64_t x415 = 1191532LL;
	int32_t x416 = INT32_MIN;

	t91 = (x413^(x414<(x415-x416)));

	if (t91 != 294291220019293467LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = 55410668831169286LL;
	int64_t x422 = 1342402617492928LL;
	static volatile uint64_t x424 = UINT64_MAX;
	volatile int64_t t92 = 4LL;

	t92 = (x421^(x422<(x423-x424)));

	if (t92 != 55410668831169287LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = INT64_MIN;
	uint64_t x426 = UINT64_MAX;
	uint32_t x428 = 142U;
	int64_t t93 = INT64_MIN;

	t93 = (x425^(x426<(x427-x428)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x429 = 4764211860LLU;
	int64_t x430 = INT64_MIN;
	int64_t x432 = INT64_MIN;

	t94 = (x429^(x430<(x431-x432)));

	if (t94 != 4764211861LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x433 = INT64_MAX;
	uint8_t x434 = 0U;
	static uint16_t x435 = 2313U;
	static int64_t t95 = -126217921103917LL;

	t95 = (x433^(x434<(x435-x436)));

	if (t95 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x440 = INT8_MIN;

	t96 = (x437^(x438<(x439-x440)));

	if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = INT32_MIN;
	static volatile int16_t x442 = INT16_MIN;
	static int32_t x443 = -1;
	uint8_t x444 = UINT8_MAX;

	t97 = (x441^(x442<(x443-x444)));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x445 = 742041903U;
	volatile uint16_t x446 = 22U;
	volatile uint32_t t98 = 33100501U;

	t98 = (x445^(x446<(x447-x448)));

	if (t98 != 742041902U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x450 = UINT16_MAX;
	volatile int16_t x452 = INT16_MIN;
	uint64_t t99 = UINT64_MAX;

	t99 = (x449^(x450<(x451-x452)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

