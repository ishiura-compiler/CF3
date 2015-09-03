#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -28;
uint16_t x11 = 10U;
uint16_t x17 = UINT16_MAX;
static volatile int8_t x22 = -26;
uint8_t x25 = UINT8_MAX;
volatile int32_t t6 = 1540;
int64_t x31 = INT64_MAX;
uint8_t x37 = UINT8_MAX;
uint64_t x41 = 1722LLU;
int8_t x42 = -38;
volatile int64_t x43 = -5403217681541LL;
uint64_t t10 = 57759161230672504LLU;
volatile uint64_t t13 = 7LLU;
uint32_t x57 = UINT32_MAX;
int8_t x62 = 2;
volatile uint32_t x64 = 771759U;
static volatile uint32_t t15 = 1919804U;
volatile int64_t t16 = 696010LL;
volatile int32_t t17 = 9;
static volatile int64_t x74 = INT64_MIN;
uint8_t x81 = 21U;
int64_t x85 = INT64_MAX;
volatile int16_t x87 = INT16_MIN;
int64_t t21 = -483761670629620101LL;
int8_t x92 = -9;
static int16_t x96 = -8;
static volatile int32_t t23 = -1;
static int64_t x104 = INT64_MAX;
int8_t x107 = -1;
int8_t x108 = INT8_MAX;
int32_t t26 = 7;
uint8_t x109 = UINT8_MAX;
int64_t x113 = INT64_MAX;
int32_t x116 = -1;
int64_t t28 = -5398LL;
volatile int32_t x120 = INT32_MIN;
int8_t x124 = INT8_MIN;
uint64_t t30 = 372299LLU;
int8_t x135 = -1;
int32_t t34 = 119074;
static volatile int64_t x141 = -441523997130464420LL;
int64_t x143 = INT64_MIN;
static volatile uint32_t x144 = UINT32_MAX;
uint8_t x150 = UINT8_MAX;
static int16_t x152 = INT16_MAX;
uint16_t x154 = 9U;
int32_t x155 = INT32_MIN;
int8_t x157 = INT8_MAX;
uint32_t x161 = 29U;
int64_t t41 = -13756057899LL;
int32_t x169 = 1;
int8_t x172 = 3;
static volatile int32_t t42 = -11;
int32_t x179 = -1;
uint32_t t44 = 2486U;
int8_t x193 = INT8_MIN;
uint8_t x194 = 0U;
int32_t x196 = INT32_MIN;
int64_t x197 = INT64_MAX;
static int64_t x209 = INT64_MIN;
volatile int32_t x222 = -26449298;
volatile uint16_t x244 = UINT16_MAX;
volatile uint64_t x247 = UINT64_MAX;
int32_t x253 = -1;
static volatile int8_t x259 = INT8_MIN;
volatile int32_t x269 = INT32_MAX;
static int16_t x274 = 12035;
volatile int8_t x276 = -1;
uint64_t x284 = 365700409779LLU;
static int32_t t71 = -4184;
volatile int32_t x290 = -1;
volatile uint16_t x294 = UINT16_MAX;
volatile int32_t t73 = -39;
volatile int8_t x304 = -11;
volatile uint32_t t75 = 0U;
int8_t x313 = 28;
int32_t x315 = -1;
volatile int32_t x317 = -147;
volatile int32_t x318 = -1;
int64_t x320 = INT64_MIN;
static volatile uint16_t x322 = 1U;
volatile int32_t x324 = INT32_MIN;
volatile uint16_t x325 = 1U;
uint8_t x327 = UINT8_MAX;
int8_t x329 = INT8_MIN;
uint32_t x330 = 452U;
volatile int32_t x331 = INT32_MAX;
static uint8_t x332 = 4U;
uint8_t x335 = 7U;
volatile int64_t t84 = 25206LL;
int64_t x345 = INT64_MAX;
volatile uint16_t x354 = 21U;
int8_t x355 = INT8_MIN;
static uint16_t x367 = 1U;
int8_t x368 = INT8_MIN;
int32_t t92 = 451552653;
int64_t x374 = 0LL;
static int16_t x387 = INT16_MIN;
int8_t x389 = -1;
uint32_t x391 = 34U;
volatile int32_t t97 = -178379;
int64_t x397 = INT64_MIN;


void f0(void) {
	uint32_t x1 = 2035U;
	uint64_t x3 = 4424342LLU;
	uint8_t x4 = 31U;
	static volatile uint32_t t0 = 4889777U;

	t0 = ((x1&(x2<x3))&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int8_t x6 = INT8_MIN;
	static int16_t x7 = -16;
	int8_t x8 = -1;
	int32_t t1 = 1605990;

	t1 = ((x5&(x6<x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int8_t x10 = INT8_MIN;
	static int16_t x12 = -1;
	volatile int32_t t2 = 1;

	t2 = ((x9&(x10<x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = 1161U;
	int32_t x16 = -366;
	int32_t t3 = -1;

	t3 = ((x13&(x14<x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	static int8_t x19 = INT8_MAX;
	volatile uint16_t x20 = UINT16_MAX;
	int32_t t4 = 18;

	t4 = ((x17&(x18<x19))&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	volatile int64_t x23 = -46466172440717087LL;
	int16_t x24 = -2;
	static int32_t t5 = 375170;

	t5 = ((x21&(x22<x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 3575226115LLU;
	int16_t x27 = 1;
	volatile int32_t x28 = -1424237;

	t6 = ((x25&(x26<x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	static int64_t x30 = -1LL;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -95252896;

	t7 = ((x29&(x30<x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	uint16_t x34 = UINT16_MAX;
	volatile uint32_t x35 = 654575192U;
	volatile int64_t x36 = INT64_MAX;
	int64_t t8 = 780374789950LL;

	t8 = ((x33&(x34<x35))&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 2U;
	int64_t x39 = -1LL;
	int16_t x40 = 166;
	int32_t t9 = 13242;

	t9 = ((x37&(x38<x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x44 = -4788;

	t10 = ((x41&(x42<x43))&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	static uint8_t x46 = 74U;
	int16_t x47 = INT16_MAX;
	int64_t x48 = 47458246448819LL;
	volatile int64_t t11 = 1LL;

	t11 = ((x45&(x46<x47))&x48);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 21U;
	int8_t x50 = -1;
	volatile int16_t x51 = INT16_MAX;
	static volatile int32_t x52 = INT32_MIN;
	int32_t t12 = -3974268;

	t12 = ((x49&(x50<x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = -6;
	static uint16_t x55 = 31891U;
	volatile uint64_t x56 = 2890429LLU;

	t13 = ((x53&(x54<x55))&x56);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = INT32_MIN;
	uint64_t x59 = UINT64_MAX;
	volatile uint16_t x60 = UINT16_MAX;
	volatile uint32_t t14 = 3U;

	t14 = ((x57&(x58<x59))&x60);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 1;
	uint64_t x63 = UINT64_MAX;

	t15 = ((x61&(x62<x63))&x64);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	int16_t x66 = 21;
	int16_t x67 = -1;
	volatile int64_t x68 = INT64_MIN;

	t16 = ((x65&(x66<x67))&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	volatile int16_t x70 = -57;
	uint8_t x71 = 1U;
	int16_t x72 = 4008;

	t17 = ((x69&(x70<x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1781U;
	int64_t x75 = INT64_MAX;
	volatile int32_t x76 = -1;
	volatile uint32_t t18 = 1197920U;

	t18 = ((x73&(x74<x75))&x76);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	static uint32_t x78 = UINT32_MAX;
	volatile int64_t x79 = INT64_MIN;
	volatile int64_t x80 = 54347117069154LL;
	int64_t t19 = -6426LL;

	t19 = ((x77&(x78<x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = INT32_MAX;
	int8_t x83 = -29;
	volatile int16_t x84 = INT16_MAX;
	int32_t t20 = 126333277;

	t20 = ((x81&(x82<x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	volatile int16_t x88 = 2;

	t21 = ((x85&(x86<x87))&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	static int16_t x90 = INT16_MIN;
	int32_t x91 = -1;
	int32_t t22 = 1796;

	t22 = ((x89&(x90<x91))&x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -61;
	static int16_t x94 = -2;
	volatile int32_t x95 = INT32_MAX;

	t23 = ((x93&(x94<x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = INT16_MAX;
	volatile int8_t x98 = INT8_MIN;
	static uint32_t x99 = 1275449U;
	int64_t x100 = INT64_MIN;
	int64_t t24 = -7772889541LL;

	t24 = ((x97&(x98<x99))&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint64_t x102 = 2535404354336LLU;
	volatile uint16_t x103 = UINT16_MAX;
	int64_t t25 = -100672827342429LL;

	t25 = ((x101&(x102<x103))&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x105 = INT8_MIN;
	int16_t x106 = -10;

	t26 = ((x105&(x106<x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	volatile int8_t x112 = INT8_MAX;
	int32_t t27 = -246934;

	t27 = ((x109&(x110<x111))&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 73U;
	static int64_t x115 = -1LL;

	t28 = ((x113&(x114<x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -14279491992912LL;
	int64_t x118 = -1LL;
	int64_t x119 = 6309LL;
	volatile int64_t t29 = -1LL;

	t29 = ((x117&(x118<x119))&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 433281368340373340LLU;
	static uint8_t x122 = 1U;
	uint64_t x123 = 328145334182989LLU;

	t30 = ((x121&(x122<x123))&x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 303692440859929683LLU;
	static int32_t x126 = INT32_MAX;
	uint8_t x127 = 7U;
	static volatile int16_t x128 = INT16_MIN;
	volatile uint64_t t31 = 201LLU;

	t31 = ((x125&(x126<x127))&x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 377410133U;
	uint32_t x130 = UINT32_MAX;
	static int8_t x131 = -43;
	volatile int16_t x132 = 1158;
	uint32_t t32 = 249U;

	t32 = ((x129&(x130<x131))&x132);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static int32_t x134 = INT32_MAX;
	int8_t x136 = 3;
	int32_t t33 = -2719370;

	t33 = ((x133&(x134<x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint64_t x138 = 23101916094752LLU;
	static int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MIN;

	t34 = ((x137&(x138<x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x142 = 2517U;
	volatile int64_t t35 = 2356998LL;

	t35 = ((x141&(x142<x143))&x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 2;
	int8_t x146 = -1;
	int64_t x147 = -1LL;
	static volatile int64_t x148 = -243960589339604048LL;
	int64_t t36 = 2446LL;

	t36 = ((x145&(x146<x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -1;
	int8_t x151 = INT8_MAX;
	volatile int32_t t37 = 9077;

	t37 = ((x149&(x150<x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -11243386;
	volatile int32_t x156 = 40704;
	int32_t t38 = -1167238;

	t38 = ((x153&(x154<x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = -466;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MAX;
	int32_t t39 = 5915700;

	t39 = ((x157&(x158<x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x162 = 69U;
	int32_t x163 = INT32_MAX;
	uint32_t x164 = UINT32_MAX;
	uint32_t t40 = 24U;

	t40 = ((x161&(x162<x163))&x164);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 2U;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	int64_t x168 = 1398321918578189625LL;

	t41 = ((x165&(x166<x167))&x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	static int16_t x171 = INT16_MAX;

	t42 = ((x169&(x170<x171))&x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	static uint64_t x174 = 11377LLU;
	volatile int16_t x175 = 0;
	int16_t x176 = INT16_MIN;
	static int32_t t43 = -604;

	t43 = ((x173&(x174<x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 6U;
	static int8_t x178 = INT8_MIN;
	int32_t x180 = -1;

	t44 = ((x177&(x178<x179))&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 183435643LLU;
	volatile int64_t x182 = -2783299573478418LL;
	static int32_t x183 = INT32_MAX;
	volatile int64_t x184 = -1LL;
	volatile uint64_t t45 = 1751207632050264LLU;

	t45 = ((x181&(x182<x183))&x184);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 1U;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 783;

	t46 = ((x185&(x186<x187))&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MAX;
	uint32_t x191 = 267U;
	static int16_t x192 = INT16_MAX;
	volatile int32_t t47 = 253;

	t47 = ((x189&(x190<x191))&x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x195 = -1LL;
	int32_t t48 = 1727;

	t48 = ((x193&(x194<x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 291965LLU;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = INT16_MIN;
	int64_t t49 = 652158782LL;

	t49 = ((x197&(x198<x199))&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -377209;
	volatile uint8_t x202 = 18U;
	volatile int16_t x203 = -675;
	static volatile int32_t x204 = -606217850;
	int32_t t50 = -111;

	t50 = ((x201&(x202<x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	int32_t x206 = 125507487;
	volatile uint16_t x207 = 13U;
	int8_t x208 = 3;
	static volatile uint64_t t51 = 2722LLU;

	t51 = ((x205&(x206<x207))&x208);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = -1LL;
	int32_t x211 = INT32_MIN;
	int64_t x212 = 1LL;
	volatile int64_t t52 = -8115LL;

	t52 = ((x209&(x210<x211))&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 32;
	int32_t x214 = INT32_MIN;
	static int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MAX;
	static int32_t t53 = -21511;

	t53 = ((x213&(x214<x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = UINT8_MAX;
	static int16_t x218 = -1;
	uint32_t x219 = 1998U;
	volatile int16_t x220 = 17;
	volatile int32_t t54 = -61932593;

	t54 = ((x217&(x218<x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 124750803U;
	static uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MAX;
	static volatile uint32_t t55 = 951U;

	t55 = ((x221&(x222<x223))&x224);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -1;
	static int64_t x226 = 28743401382LL;
	int16_t x227 = INT16_MAX;
	uint32_t x228 = UINT32_MAX;
	static uint32_t t56 = 216986U;

	t56 = ((x225&(x226<x227))&x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = -1;
	int8_t x231 = 1;
	uint64_t x232 = UINT64_MAX;
	uint64_t t57 = 2219481278230138LLU;

	t57 = ((x229&(x230<x231))&x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -1;
	uint32_t x234 = 15750965U;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = 9U;
	volatile int32_t t58 = 91412516;

	t58 = ((x233&(x234<x235))&x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x237 = 130U;
	volatile int32_t x238 = -1554;
	int16_t x239 = -1;
	uint32_t x240 = 25538U;
	volatile uint32_t t59 = 1U;

	t59 = ((x237&(x238<x239))&x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 3;
	static int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	int32_t t60 = 1;

	t60 = ((x241&(x242<x243))&x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	int64_t x248 = -114335603737656LL;
	int64_t t61 = 1165200360LL;

	t61 = ((x245&(x246<x247))&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -1;
	int16_t x250 = -1296;
	uint32_t x251 = 5U;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -17668413;

	t62 = ((x249&(x250<x251))&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = 10;
	volatile int16_t x255 = INT16_MIN;
	static int32_t x256 = INT32_MIN;
	int32_t t63 = 7345;

	t63 = ((x253&(x254<x255))&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	uint64_t x258 = 59492861860366LLU;
	int32_t x260 = -105363220;
	int64_t t64 = 122LL;

	t64 = ((x257&(x258<x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	int16_t x262 = 30;
	uint64_t x263 = UINT64_MAX;
	static int16_t x264 = INT16_MAX;
	static volatile int64_t t65 = 2012880135004020609LL;

	t65 = ((x261&(x262<x263))&x264);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	int64_t x266 = INT64_MIN;
	int8_t x267 = 1;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -115;

	t66 = ((x265&(x266<x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 3644413LLU;
	volatile int32_t x271 = 759109;
	int16_t x272 = 13617;
	int32_t t67 = 129372078;

	t67 = ((x269&(x270<x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -29;
	uint16_t x275 = 28U;
	volatile int32_t t68 = -4486;

	t68 = ((x273&(x274<x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 2U;
	volatile int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 322480U;
	static volatile uint32_t t69 = 79743234U;

	t69 = ((x277&(x278<x279))&x280);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	static int16_t x282 = 1;
	uint16_t x283 = UINT16_MAX;
	volatile uint64_t t70 = 15676477192LLU;

	t70 = ((x281&(x282<x283))&x284);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	volatile int32_t x288 = -1;

	t71 = ((x285&(x286<x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -7391572LL;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile int64_t t72 = 104070090374LL;

	t72 = ((x289&(x290<x291))&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = 11;
	volatile int16_t x295 = INT16_MIN;
	int16_t x296 = -2;

	t73 = ((x293&(x294<x295))&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 9972U;
	int64_t x298 = 25581738174600984LL;
	uint32_t x299 = 2492280U;
	int16_t x300 = -325;
	volatile int32_t t74 = 3;

	t74 = ((x297&(x298<x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	int8_t x302 = INT8_MIN;
	int64_t x303 = -251288870516478LL;

	t75 = ((x301&(x302<x303))&x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	int32_t x306 = 713843;
	volatile int16_t x307 = INT16_MAX;
	volatile int16_t x308 = 0;
	volatile int64_t t76 = 71840876474456809LL;

	t76 = ((x305&(x306<x307))&x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 1;
	volatile uint16_t x310 = UINT16_MAX;
	int64_t x311 = INT64_MIN;
	int16_t x312 = -1784;
	volatile int32_t t77 = -10357139;

	t77 = ((x309&(x310<x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = 0;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t78 = 2684581334122025LLU;

	t78 = ((x313&(x314<x315))&x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x319 = 133593537;
	int64_t t79 = 537371189992610555LL;

	t79 = ((x317&(x318<x319))&x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 5;
	int16_t x323 = -38;
	volatile int32_t t80 = 46;

	t80 = ((x321&(x322<x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x326 = INT32_MIN;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -421;

	t81 = ((x325&(x326<x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t t82 = 98;

	t82 = ((x329&(x330<x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	int64_t x334 = -1LL;
	int64_t x336 = -104739514LL;
	volatile int64_t t83 = -2961928LL;

	t83 = ((x333&(x334<x335))&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -884;
	int32_t x338 = INT32_MIN;
	int64_t x339 = -171482LL;
	volatile int64_t x340 = -1051963654920161LL;

	t84 = ((x337&(x338<x339))&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MAX;
	int32_t x342 = INT32_MIN;
	volatile int64_t x343 = INT64_MIN;
	uint32_t x344 = 21149U;
	volatile uint32_t t85 = 51U;

	t85 = ((x341&(x342<x343))&x344);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	volatile int64_t x348 = INT64_MAX;
	volatile int64_t t86 = -2658890598684782767LL;

	t86 = ((x345&(x346<x347))&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 40U;
	int8_t x350 = INT8_MIN;
	volatile uint16_t x351 = 8085U;
	uint32_t x352 = 656U;
	volatile uint32_t t87 = 33316100U;

	t87 = ((x349&(x350<x351))&x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	volatile uint64_t t88 = 1652549696LLU;

	t88 = ((x353&(x354<x355))&x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 7509LLU;
	static int64_t x358 = -1LL;
	int16_t x359 = INT16_MAX;
	uint16_t x360 = 13U;
	uint64_t t89 = 592LLU;

	t89 = ((x357&(x358<x359))&x360);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = -4343771963060LL;
	volatile int16_t x363 = INT16_MIN;
	static int8_t x364 = 2;
	int32_t t90 = 13600;

	t90 = ((x361&(x362<x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	volatile uint32_t x366 = UINT32_MAX;
	volatile int32_t t91 = 0;

	t91 = ((x365&(x366<x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 7961;
	uint16_t x370 = 90U;
	static int8_t x371 = INT8_MIN;
	volatile int8_t x372 = INT8_MAX;

	t92 = ((x369&(x370<x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int16_t x375 = 0;
	static int8_t x376 = 2;
	volatile int32_t t93 = -250249;

	t93 = ((x373&(x374<x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = -1;
	uint64_t x379 = 107211935228690LLU;
	volatile int64_t x380 = INT64_MIN;
	int64_t t94 = -1LL;

	t94 = ((x377&(x378<x379))&x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = 2032LL;
	int64_t x382 = INT64_MIN;
	int16_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	volatile int64_t t95 = 220893763314LL;

	t95 = ((x381&(x382<x383))&x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MAX;
	volatile int64_t x386 = -1LL;
	int64_t x388 = 1195464783450879LL;
	int64_t t96 = 10030LL;

	t96 = ((x385&(x386<x387))&x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = -1;
	static int32_t x392 = INT32_MAX;

	t97 = ((x389&(x390<x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = INT64_MIN;
	int8_t x394 = 6;
	static int16_t x395 = -1;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t98 = 8365053LLU;

	t98 = ((x393&(x394<x395))&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = 53;
	int8_t x399 = -1;
	int16_t x400 = 1;
	static int64_t t99 = 216LL;

	t99 = ((x397&(x398<x399))&x400);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

