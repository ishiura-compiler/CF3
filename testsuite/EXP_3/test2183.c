#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -8660LL;
volatile int64_t x5 = -1LL;
uint8_t x6 = UINT8_MAX;
uint8_t x12 = 102U;
static volatile int64_t t2 = 465410562170481LL;
int32_t x19 = -18349;
static volatile uint64_t t4 = 58193774137LLU;
static volatile int64_t t6 = INT64_MAX;
int8_t x29 = INT8_MAX;
static int64_t x32 = INT64_MIN;
int16_t x36 = INT16_MIN;
static uint64_t t8 = UINT64_MAX;
int8_t x54 = -1;
static int64_t x55 = -1LL;
int64_t x57 = -1LL;
volatile uint16_t x70 = UINT16_MAX;
static uint64_t x76 = 86171814993198LLU;
uint64_t t18 = 12659489LLU;
uint32_t x82 = UINT32_MAX;
static volatile int64_t t20 = INT64_MAX;
uint16_t x85 = UINT16_MAX;
int32_t x87 = -1;
uint32_t x100 = 2080475396U;
int64_t x102 = INT64_MAX;
int8_t x106 = INT8_MIN;
int16_t x108 = -1;
uint64_t x111 = UINT64_MAX;
uint64_t x115 = UINT64_MAX;
static int32_t x117 = -1;
static volatile int16_t x120 = -1;
volatile int64_t x130 = 4329521474972155356LL;
static uint64_t x135 = 546293174043LLU;
uint64_t t33 = 802LLU;
int64_t x149 = 561917230870461085LL;
static uint32_t x162 = 9362377U;
int64_t x163 = -1LL;
uint16_t x171 = 686U;
int8_t x173 = INT8_MAX;
uint32_t x178 = 7107144U;
int64_t t45 = 1351723319LL;
volatile int64_t x186 = -255693110LL;
static int64_t t46 = -23702LL;
uint32_t x189 = 6U;
static uint32_t t47 = UINT32_MAX;
static int32_t x199 = INT32_MAX;
int8_t x201 = 18;
int16_t x203 = INT16_MIN;
volatile int8_t x206 = -45;
uint32_t x208 = 50441U;
int64_t t51 = 669LL;
uint64_t x210 = UINT64_MAX;
static int16_t x211 = INT16_MAX;
uint8_t x223 = UINT8_MAX;
volatile int32_t x230 = -1;
volatile int8_t x231 = INT8_MIN;
int16_t x234 = INT16_MAX;
uint8_t x253 = 4U;
uint8_t x258 = 4U;
static volatile uint64_t x266 = UINT64_MAX;
int8_t x268 = INT8_MAX;
static uint16_t x269 = 1705U;
static volatile int16_t x271 = INT16_MIN;
volatile uint64_t t70 = UINT64_MAX;
int16_t x290 = 4590;
uint32_t x295 = UINT32_MAX;
volatile int64_t t73 = 2741590974LL;
int8_t x297 = INT8_MIN;
uint8_t x301 = 29U;
int16_t x302 = 27;
static volatile uint16_t x308 = 21U;
int32_t x315 = INT32_MIN;
int16_t x316 = INT16_MAX;
int8_t x317 = INT8_MAX;
int16_t x319 = INT16_MAX;
volatile int32_t t80 = -205387720;
static int64_t x328 = INT64_MIN;
uint8_t x333 = 28U;
int32_t t84 = 19027768;
int8_t x342 = -3;
volatile uint32_t x343 = UINT32_MAX;
volatile uint64_t x344 = 21544483LLU;
int64_t x358 = INT64_MIN;
static int32_t t92 = -24;
volatile int64_t x375 = -3560304187LL;
uint16_t x380 = 30298U;
static int32_t x382 = -328954;
int32_t x387 = -41;
int64_t x392 = -79221748LL;
int16_t x395 = INT16_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	volatile uint32_t x2 = 123253U;
	int8_t x3 = INT8_MAX;
	static volatile int64_t x4 = INT64_MIN;

	t0 = ((x1|x2)|(x3^x4));

	if (t0 != -9223372032559816321LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x7 = 3U;
	static int64_t x8 = -4028LL;
	int64_t t1 = 44832LL;

	t1 = ((x5|x6)|(x7^x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 174248961LL;
	int64_t x10 = INT64_MIN;
	static uint8_t x11 = 5U;

	t2 = ((x9|x10)|(x11^x12));

	if (t2 != -9223372036680526749LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	volatile int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	uint8_t x16 = 5U;
	int64_t t3 = -2957803674LL;

	t3 = ((x13|x14)|(x15^x16));

	if (t3 != -2147483643LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 448173LLU;
	uint16_t x18 = 985U;
	int8_t x20 = INT8_MIN;

	t4 = ((x17|x18)|(x19^x20));

	if (t4 != 448511LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MAX;
	static uint64_t x23 = 1499061698LLU;
	static int32_t x24 = INT32_MAX;
	volatile uint64_t t5 = 706178022LLU;

	t5 = ((x21|x22)|(x23^x24));

	if (t5 != 18446744073709527679LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static int8_t x26 = INT8_MAX;
	volatile int64_t x27 = INT64_MIN;
	int64_t x28 = -15684216428340LL;

	t6 = ((x25|x26)|(x27^x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -1;
	static volatile uint16_t x31 = UINT16_MAX;
	volatile int64_t t7 = -637728411857906963LL;

	t7 = ((x29|x30)|(x31^x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int32_t x34 = -1;
	static uint64_t x35 = 723415319LLU;

	t8 = ((x33|x34)|(x35^x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -3;
	int8_t x38 = -1;
	uint64_t x39 = 28500171LLU;
	int32_t x40 = INT32_MIN;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x37|x38)|(x39^x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	volatile uint32_t x42 = 121U;
	volatile int64_t x43 = INT64_MIN;
	static int16_t x44 = INT16_MIN;
	volatile int64_t t10 = INT64_MAX;

	t10 = ((x41|x42)|(x43^x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	uint64_t x46 = 10083092640173LLU;
	uint16_t x47 = 44U;
	uint64_t x48 = UINT64_MAX;
	static uint64_t t11 = UINT64_MAX;

	t11 = ((x45|x46)|(x47^x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MAX;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = 5;

	t12 = ((x49|x50)|(x51^x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	volatile int32_t x56 = -163832;
	int64_t t13 = 22257426920770LL;

	t13 = ((x53|x54)|(x55^x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x58 = 79U;
	volatile int8_t x59 = 12;
	static int32_t x60 = INT32_MAX;
	volatile int64_t t14 = -1LL;

	t14 = ((x57|x58)|(x59^x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	volatile uint16_t x62 = 0U;
	volatile int64_t x63 = INT64_MAX;
	volatile int32_t x64 = -1;
	int64_t t15 = INT64_MIN;

	t15 = ((x61|x62)|(x63^x64));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -1;
	int8_t x66 = -1;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = -1;

	t16 = ((x65|x66)|(x67^x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x71 = 1;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -409977175;

	t17 = ((x69|x70)|(x71^x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 2563U;
	int32_t x74 = INT32_MIN;
	uint64_t x75 = UINT64_MAX;

	t18 = ((x73|x74)|(x75^x76));

	if (t18 != 18446744071823420115LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	static volatile int8_t x78 = INT8_MAX;
	volatile uint32_t x79 = UINT32_MAX;
	static int64_t x80 = 2149874562971640LL;
	volatile int64_t t19 = -2206LL;

	t19 = ((x77|x78)|(x79^x80));

	if (t19 != -765671297LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -928;
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MIN;

	t20 = ((x81|x82)|(x83^x84));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = 397332847395248LL;
	int8_t x88 = INT8_MAX;
	static int64_t t21 = -134682010340426LL;

	t21 = ((x85|x86)|(x87^x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x89 = UINT8_MAX;
	static int32_t x90 = -330;
	int16_t x91 = -1;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 1;

	t22 = ((x89|x90)|(x91^x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1937825161LL;
	int16_t x94 = -484;
	volatile int32_t x95 = 954;
	int32_t x96 = INT32_MIN;
	static volatile int64_t t23 = -14387173868496LL;

	t23 = ((x93|x94)|(x95^x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	uint16_t x98 = 160U;
	volatile int8_t x99 = 11;
	int64_t t24 = -4315706785032671LL;

	t24 = ((x97|x98)|(x99^x100));

	if (t24 != -9223372034774300241LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -230043393643356LL;
	volatile uint16_t x103 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	volatile int64_t t25 = 71760267613875071LL;

	t25 = ((x101|x102)|(x103^x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;
	uint32_t x107 = 4260U;
	static uint32_t t26 = 35U;

	t26 = ((x105|x106)|(x107^x108));

	if (t26 != 4294967259U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -1LL;
	int16_t x110 = INT16_MAX;
	uint32_t x112 = 56946U;
	static uint64_t t27 = UINT64_MAX;

	t27 = ((x109|x110)|(x111^x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 3874973000125125LLU;
	int8_t x114 = -1;
	static int8_t x116 = INT8_MIN;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x113|x114)|(x115^x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = -1;
	volatile int32_t x119 = -1;
	int32_t t29 = -147001;

	t29 = ((x117|x118)|(x119^x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	static uint32_t x122 = UINT32_MAX;
	uint64_t x123 = 78215787239357119LLU;
	int64_t x124 = -1LL;
	static volatile uint64_t t30 = 53761694125LLU;

	t30 = ((x121|x122)|(x123^x124));

	if (t30 != 18368528286843142143LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 1U;
	static volatile int64_t x126 = INT64_MIN;
	uint16_t x127 = UINT16_MAX;
	volatile int32_t x128 = -1;
	static int64_t t31 = 1061892550778LL;

	t31 = ((x125|x126)|(x127^x128));

	if (t31 != -65535LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int64_t x131 = -1LL;
	int64_t x132 = -1LL;
	int64_t t32 = 2536055768609147LL;

	t32 = ((x129|x130)|(x131^x132));

	if (t32 != 4329521474972155391LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x134 = 12U;
	int32_t x136 = 1049014405;

	t33 = ((x133|x134)|(x135^x136));

	if (t33 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 15549071123302958LLU;
	volatile int64_t x138 = INT64_MAX;
	int32_t x139 = INT32_MAX;
	static volatile int32_t x140 = INT32_MIN;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = ((x137|x138)|(x139^x140));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	volatile int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	volatile int64_t t35 = 699373LL;

	t35 = ((x141|x142)|(x143^x144));

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	static int16_t x146 = INT16_MIN;
	int64_t x147 = -1LL;
	uint8_t x148 = 29U;
	int64_t t36 = -8LL;

	t36 = ((x145|x146)|(x147^x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x150 = INT16_MAX;
	static int64_t x151 = INT64_MIN;
	int32_t x152 = -1;
	volatile int64_t t37 = INT64_MAX;

	t37 = ((x149|x150)|(x151^x152));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile uint16_t x154 = UINT16_MAX;
	static int16_t x155 = 91;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -7;

	t38 = ((x153|x154)|(x155^x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint32_t x158 = UINT32_MAX;
	int16_t x159 = -151;
	int64_t x160 = INT64_MAX;
	int64_t t39 = -146474926579021288LL;

	t39 = ((x157|x158)|(x159^x160));

	if (t39 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 193072917U;
	int8_t x164 = 0;
	volatile int64_t t40 = 1205942LL;

	t40 = ((x161|x162)|(x163^x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 206115U;
	uint64_t x166 = UINT64_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile int8_t x168 = 1;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x165|x166)|(x167^x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -387;
	static int64_t x170 = INT64_MIN;
	uint64_t x172 = 194082372703601LLU;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x169|x170)|(x171^x172));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = -1031;
	int64_t x175 = INT64_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x173|x174)|(x175^x176));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	int16_t x179 = -1;
	static volatile int8_t x180 = -1;
	volatile int64_t t44 = -198838710366097LL;

	t44 = ((x177|x178)|(x179^x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 1U;
	volatile int16_t x182 = INT16_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	int64_t x184 = INT64_MIN;

	t45 = ((x181|x182)|(x183^x184));

	if (t45 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x185 = 78U;
	static volatile int16_t x187 = INT16_MIN;
	int32_t x188 = -2701895;

	t46 = ((x185|x186)|(x187^x188));

	if (t46 != -253005825LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x190 = UINT16_MAX;
	int8_t x191 = -8;
	uint16_t x192 = 19U;

	t47 = ((x189|x190)|(x191^x192));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	volatile int16_t x194 = 334;
	volatile uint16_t x195 = 3522U;
	int64_t x196 = INT64_MAX;
	static int64_t t48 = -175953784095245924LL;

	t48 = ((x193|x194)|(x195^x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	volatile int32_t x200 = INT32_MIN;
	static volatile int64_t t49 = 9077428075129LL;

	t49 = ((x197|x198)|(x199^x200));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x202 = UINT16_MAX;
	uint16_t x204 = 72U;
	int32_t t50 = 27096407;

	t50 = ((x201|x202)|(x203^x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -315LL;
	static int8_t x207 = INT8_MIN;

	t51 = ((x205|x206)|(x207^x208));

	if (t51 != -33LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	volatile int32_t x212 = -4879;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x209|x210)|(x211^x212));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	static int16_t x214 = INT16_MIN;
	static int8_t x215 = INT8_MIN;
	uint16_t x216 = 18582U;
	volatile int32_t t53 = 465779565;

	t53 = ((x213|x214)|(x215^x216));

	if (t53 != -18561) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 118U;
	uint32_t x218 = 5260U;
	static int32_t x219 = -1;
	uint8_t x220 = 24U;
	uint32_t t54 = UINT32_MAX;

	t54 = ((x217|x218)|(x219^x220));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 24U;
	volatile int32_t x222 = INT32_MIN;
	int16_t x224 = -1684;
	volatile int32_t t55 = 3123751;

	t55 = ((x221|x222)|(x223^x224));

	if (t55 != -1637) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	volatile uint16_t x226 = 349U;
	static uint16_t x227 = UINT16_MAX;
	int32_t x228 = INT32_MAX;
	static int32_t t56 = 0;

	t56 = ((x225|x226)|(x227^x228));

	if (t56 != 2147418623) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MAX;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = -16836958LL;

	t57 = ((x229|x230)|(x231^x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -357121706;
	int32_t x235 = 117923;
	int64_t x236 = INT64_MIN;
	int64_t t58 = -218694LL;

	t58 = ((x233|x234)|(x235^x236));

	if (t58 != -357040129LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 35U;
	static volatile uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = 13133;
	static volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -211920;

	t59 = ((x237|x238)|(x239^x240));

	if (t59 != -19457) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 24704;
	uint8_t x242 = 1U;
	int64_t x243 = INT64_MAX;
	uint32_t x244 = UINT32_MAX;
	int64_t t60 = -761754833189LL;

	t60 = ((x241|x242)|(x243^x244));

	if (t60 != 9223372032559833217LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int16_t x246 = -5360;
	volatile uint64_t x247 = 122490379LLU;
	int8_t x248 = 8;
	uint64_t t61 = 134572089209LLU;

	t61 = ((x245|x246)|(x247^x248));

	if (t61 != 18446744073709547519LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MIN;
	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = UINT8_MAX;
	int16_t x252 = INT16_MIN;
	uint32_t t62 = UINT32_MAX;

	t62 = ((x249|x250)|(x251^x252));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x254 = INT8_MAX;
	uint8_t x255 = 103U;
	uint64_t x256 = 679724662416LLU;
	volatile uint64_t t63 = 1LLU;

	t63 = ((x253|x254)|(x255^x256));

	if (t63 != 679724662527LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 129731572840490079LLU;
	static int32_t x259 = -31433912;
	uint64_t x260 = 3LLU;
	uint64_t t64 = 4314985977442120825LLU;

	t64 = ((x257|x258)|(x259^x260));

	if (t64 != 18446744073700081503LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 138U;
	uint8_t x262 = UINT8_MAX;
	volatile int32_t x263 = -1;
	uint64_t x264 = 104523555945657LLU;
	volatile uint64_t t65 = 23168741176274405LLU;

	t65 = ((x261|x262)|(x263^x264));

	if (t65 != 18446639550153606143LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x265 = INT64_MIN;
	static int32_t x267 = INT32_MIN;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x265|x266)|(x267^x268));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x270 = INT16_MAX;
	int8_t x272 = -1;
	static volatile int32_t t67 = 190113;

	t67 = ((x269|x270)|(x271^x272));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -99032;
	volatile uint32_t x274 = 1302U;
	volatile uint64_t x275 = 1126640777103LLU;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t68 = 84LLU;

	t68 = ((x273|x274)|(x275^x276));

	if (t68 != 18446742948428021118LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	static volatile int32_t x278 = -159001256;
	static uint64_t x279 = 28018541715LLU;
	int32_t x280 = INT32_MAX;
	volatile uint64_t t69 = 12891681822987LLU;

	t69 = ((x277|x278)|(x279^x280));

	if (t69 != 30064771071LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	int16_t x282 = INT16_MIN;
	int8_t x283 = 28;
	volatile uint64_t x284 = 66366100881LLU;

	t70 = ((x281|x282)|(x283^x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = 212308;
	uint16_t x286 = UINT16_MAX;
	volatile int16_t x287 = -25;
	int64_t x288 = -1LL;
	volatile int64_t t71 = 506752LL;

	t71 = ((x285|x286)|(x287^x288));

	if (t71 != 262143LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 0U;
	static int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t72 = -16978623766LL;

	t72 = ((x289|x290)|(x291^x292));

	if (t72 != 9223372036854747630LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	static int16_t x296 = -1;

	t73 = ((x293|x294)|(x295^x296));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = -11418730286881193LL;
	uint32_t x299 = 1U;
	int16_t x300 = INT16_MAX;
	volatile int64_t t74 = 24LL;

	t74 = ((x297|x298)|(x299^x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 258538172;

	t75 = ((x301|x302)|(x303^x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = UINT32_MAX;
	static volatile uint64_t x306 = UINT64_MAX;
	static int8_t x307 = -3;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x305|x306)|(x307^x308));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = -7;
	uint32_t x311 = 22U;
	volatile uint32_t x312 = 1U;
	uint32_t t77 = UINT32_MAX;

	t77 = ((x309|x310)|(x311^x312));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 7707347;
	int16_t x314 = INT16_MIN;
	volatile int32_t t78 = 5362240;

	t78 = ((x313|x314)|(x315^x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = 51878898238051327LL;
	volatile int64_t x320 = INT64_MIN;
	static volatile int64_t t79 = 1LL;

	t79 = ((x317|x318)|(x319^x320));

	if (t79 != -9171493138616713217LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	int16_t x322 = -1;
	int16_t x323 = 4;
	static int32_t x324 = -1;

	t80 = ((x321|x322)|(x323^x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MAX;
	static uint32_t x326 = 739U;
	int8_t x327 = 1;
	static int64_t t81 = 111LL;

	t81 = ((x325|x326)|(x327^x328));

	if (t81 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 331U;
	int32_t x330 = INT32_MIN;
	int8_t x331 = 4;
	uint32_t x332 = 243898U;
	static volatile uint32_t t82 = 1717U;

	t82 = ((x329|x330)|(x331^x332));

	if (t82 != 2147727871U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x334 = INT16_MAX;
	uint32_t x335 = 412U;
	int32_t x336 = -160;
	uint32_t t83 = UINT32_MAX;

	t83 = ((x333|x334)|(x335^x336));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	int16_t x339 = 60;
	static volatile int8_t x340 = -1;

	t84 = ((x337|x338)|(x339^x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static uint64_t t85 = 163481990574LLU;

	t85 = ((x341|x342)|(x343^x344));

	if (t85 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	static uint8_t x346 = 12U;
	volatile uint8_t x347 = UINT8_MAX;
	static uint16_t x348 = 7625U;
	int32_t t86 = -5;

	t86 = ((x345|x346)|(x347^x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x349 = -1;
	int32_t x350 = -4169026;
	static uint32_t x351 = 18U;
	uint16_t x352 = 11U;
	uint32_t t87 = UINT32_MAX;

	t87 = ((x349|x350)|(x351^x352));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	int8_t x354 = -1;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = ((x353|x354)|(x355^x356));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 479414504LLU;
	uint16_t x359 = 18U;
	uint32_t x360 = 4U;
	uint64_t t89 = 37897LLU;

	t89 = ((x357|x358)|(x359^x360));

	if (t89 != 9223372037334190334LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int16_t x362 = -1;
	int32_t x363 = INT32_MIN;
	volatile int8_t x364 = 3;
	volatile int32_t t90 = -180770;

	t90 = ((x361|x362)|(x363^x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = 3U;
	static int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	uint32_t x368 = 10U;
	uint32_t t91 = 0U;

	t91 = ((x365|x366)|(x367^x368));

	if (t91 != 4294967287U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	static int32_t x370 = INT32_MIN;
	int32_t x371 = -1;
	volatile int8_t x372 = -1;

	t92 = ((x369|x370)|(x371^x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 913944523LLU;
	int16_t x374 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t93 = 2199LLU;

	t93 = ((x373|x374)|(x375^x376));

	if (t93 != 18446744073709535183LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MAX;
	static int8_t x379 = -1;
	static volatile int32_t t94 = 1221;

	t94 = ((x377|x378)|(x379^x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x383 = 60567839LLU;
	uint32_t x384 = 435752167U;
	uint64_t t95 = 51228611LLU;

	t95 = ((x381|x382)|(x383^x384));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 244U;
	static int16_t x386 = 4;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = -1LL;

	t96 = ((x385|x386)|(x387^x388));

	if (t96 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 746LLU;
	int64_t x390 = INT64_MAX;
	int64_t x391 = INT64_MIN;
	uint64_t t97 = 3522677LLU;

	t97 = ((x389|x390)|(x391^x392));

	if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	int32_t x394 = -7173;
	uint32_t x396 = 273940095U;
	static int64_t t98 = -114460817596486404LL;

	t98 = ((x393|x394)|(x395^x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -26;
	uint32_t x398 = UINT32_MAX;
	uint32_t x399 = 31731052U;
	static int8_t x400 = -1;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = ((x397|x398)|(x399^x400));

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

