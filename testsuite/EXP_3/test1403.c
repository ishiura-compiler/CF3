#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
volatile int8_t x9 = 26;
static int64_t x10 = 82620270143587974LL;
int16_t x13 = 70;
uint8_t x16 = 3U;
static uint64_t x25 = UINT64_MAX;
uint64_t x26 = 383558LLU;
int64_t x32 = -66489997LL;
static volatile int8_t x35 = INT8_MIN;
volatile int64_t x37 = INT64_MIN;
uint16_t x38 = UINT16_MAX;
volatile int16_t x40 = 61;
int8_t x43 = 0;
int32_t t11 = 24193;
static uint16_t x50 = 11U;
int8_t x70 = -1;
int32_t t17 = -32;
volatile int64_t t20 = -1111939426LL;
uint16_t x89 = UINT16_MAX;
uint8_t x90 = 30U;
uint64_t x94 = 6994808LLU;
volatile int64_t x97 = -1LL;
int64_t x99 = INT64_MIN;
volatile int64_t t25 = 5722LL;
int8_t x112 = INT8_MIN;
uint64_t x115 = 30449826087LLU;
int64_t x120 = INT64_MIN;
static int32_t t29 = -3732;
int8_t x127 = 1;
int8_t x128 = -1;
volatile int32_t x132 = 14656337;
int16_t x137 = -13;
static int16_t x139 = -1;
int8_t x141 = INT8_MIN;
int32_t x145 = -1;
static uint64_t x149 = 77474183774LLU;
int16_t x150 = INT16_MIN;
uint16_t x151 = UINT16_MAX;
int32_t x152 = 14;
uint8_t x160 = 24U;
int16_t x161 = 14103;
uint64_t x165 = UINT64_MAX;
static int64_t x166 = INT64_MAX;
int64_t x169 = -36592548LL;
uint8_t x171 = UINT8_MAX;
volatile int64_t t41 = -41926206276314LL;
volatile uint16_t x175 = 2U;
int16_t x178 = INT16_MIN;
int8_t x194 = -1;
int16_t x200 = INT16_MAX;
volatile int16_t x203 = INT16_MIN;
int8_t x211 = INT8_MAX;
int64_t x212 = -1LL;
uint32_t x218 = UINT32_MAX;
int8_t x220 = INT8_MIN;
static int32_t x223 = -1;
int16_t x224 = -11;
uint8_t x227 = 106U;
uint8_t x228 = UINT8_MAX;
int64_t x229 = INT64_MAX;
static int32_t x230 = INT32_MIN;
uint64_t x232 = 5627783283902133LLU;
static int8_t x234 = INT8_MAX;
uint64_t x236 = UINT64_MAX;
int32_t t57 = 378845;
int16_t x243 = INT16_MAX;
uint16_t x246 = 4U;
int32_t x247 = INT32_MIN;
int16_t x248 = INT16_MIN;
volatile uint64_t t62 = 74076344547748311LLU;
static int16_t x260 = 0;
volatile int64_t t64 = 2491945395LL;
int32_t x269 = 9;
int8_t x273 = INT8_MIN;
int8_t x275 = 5;
static int32_t t67 = 48139062;
int64_t x285 = INT64_MIN;
int16_t x286 = INT16_MIN;
int32_t x287 = -46204;
static volatile int64_t t70 = -2719LL;
static int16_t x289 = INT16_MIN;
int16_t x292 = 6;
int32_t t72 = 16779;
int32_t x303 = 946475;
static int64_t x305 = -1621LL;
uint32_t x316 = 1010012075U;
static int8_t x338 = INT8_MAX;
volatile uint64_t x339 = 1990156103783278634LLU;
uint32_t x340 = UINT32_MAX;
uint64_t t84 = 65223027199509LLU;
uint8_t x355 = 7U;
int32_t x356 = INT32_MIN;
volatile int64_t t86 = -1674712296787918LL;
volatile int32_t t89 = -4736746;
int64_t x371 = 497742657LL;
int16_t x375 = -101;
volatile int8_t x376 = INT8_MIN;
int32_t x377 = INT32_MIN;
int16_t x378 = INT16_MAX;
static int32_t x384 = INT32_MIN;
int8_t x385 = -1;
int64_t x386 = -1LL;
uint16_t x387 = 4U;
int8_t x390 = -1;
static uint64_t x391 = 40056553658979927LLU;
int8_t x393 = INT8_MIN;
static volatile uint64_t x402 = UINT64_MAX;
int64_t x403 = -8998683632695237LL;


void f0(void) {
	uint16_t x1 = 1531U;
	int64_t x2 = -1LL;
	int16_t x4 = INT16_MIN;
	static int64_t t0 = -219197433485LL;

	t0 = ((x1/x2)|(x3<x4));

	if (t0 != -1531LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 121;
	int32_t x6 = -21265238;
	volatile int64_t x7 = -47504233833LL;
	static int32_t x8 = 1;
	volatile int32_t t1 = 43;

	t1 = ((x5/x6)|(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x11 = INT64_MIN;
	int64_t x12 = -67070990LL;
	volatile int64_t t2 = -1LL;

	t2 = ((x9/x10)|(x11<x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = UINT32_MAX;
	int32_t t3 = 6206;

	t3 = ((x13/x14)|(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static volatile uint8_t x18 = 34U;
	int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = 23U;
	static int32_t t4 = -9630939;

	t4 = ((x17/x18)|(x19<x20));

	if (t4 != -963) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint32_t x22 = 222586848U;
	int32_t x23 = INT32_MAX;
	static int16_t x24 = INT16_MAX;
	volatile int64_t t5 = 816419LL;

	t5 = ((x21/x22)|(x23<x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MIN;
	uint64_t t6 = 13875041466863373LLU;

	t6 = ((x25/x26)|(x27<x28));

	if (t6 != 48093753939976LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 16932170907584LL;
	static volatile int16_t x30 = -1;
	uint16_t x31 = UINT16_MAX;
	volatile int64_t t7 = 993904825LL;

	t7 = ((x29/x30)|(x31<x32));

	if (t7 != -16932170907584LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -5653721581415LL;
	static volatile int8_t x34 = INT8_MIN;
	volatile uint64_t x36 = 2786LLU;
	int64_t t8 = 3071531039237LL;

	t8 = ((x33/x34)|(x35<x36));

	if (t8 != 44169699854LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = INT16_MIN;
	int64_t t9 = 7455892979LL;

	t9 = ((x37/x38)|(x39<x40));

	if (t9 != -140739635871743LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	volatile int32_t x42 = INT32_MIN;
	volatile int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 173;

	t10 = ((x41/x42)|(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 97U;
	int16_t x46 = 16;
	int64_t x47 = INT64_MIN;
	int32_t x48 = -1;

	t11 = ((x45/x46)|(x47<x48));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -1;
	volatile uint8_t x51 = 3U;
	int64_t x52 = INT64_MAX;
	int32_t t12 = -2112;

	t12 = ((x49/x50)|(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int8_t x54 = -1;
	int16_t x55 = 8383;
	uint16_t x56 = UINT16_MAX;
	volatile int64_t t13 = 2345925371935LL;

	t13 = ((x53/x54)|(x55<x56));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	volatile uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MIN;
	volatile int32_t x64 = INT32_MAX;
	int64_t t14 = -15161795146192LL;

	t14 = ((x61/x62)|(x63<x64));

	if (t14 != 2147483649LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 559U;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	uint8_t x68 = 3U;
	static int64_t t15 = -931835LL;

	t15 = ((x65/x66)|(x67<x68));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 1449LL;
	int16_t x71 = -7;
	int32_t x72 = -1;
	volatile int64_t t16 = 7913458LL;

	t16 = ((x69/x70)|(x71<x72));

	if (t16 != -1449LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int16_t x74 = -1;
	uint8_t x75 = 92U;
	int8_t x76 = 2;

	t17 = ((x73/x74)|(x75<x76));

	if (t17 != -255) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	int16_t x78 = -1;
	int16_t x79 = INT16_MAX;
	int8_t x80 = INT8_MIN;
	int32_t t18 = 28;

	t18 = ((x77/x78)|(x79<x80));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 21U;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MAX;
	volatile int64_t x84 = INT64_MIN;
	volatile int32_t t19 = 328858;

	t19 = ((x81/x82)|(x83<x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -977LL;
	volatile int8_t x86 = 48;
	int64_t x87 = INT64_MIN;
	int32_t x88 = -572250791;

	t20 = ((x85/x86)|(x87<x88));

	if (t20 != -19LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x91 = 276U;
	int16_t x92 = 5;
	int32_t t21 = 93;

	t21 = ((x89/x90)|(x91<x92));

	if (t21 != 2184) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	uint8_t x95 = UINT8_MAX;
	static int32_t x96 = INT32_MIN;
	volatile uint64_t t22 = 963LLU;

	t22 = ((x93/x94)|(x95<x96));

	if (t22 != 614LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x98 = INT8_MAX;
	static uint64_t x100 = 85390LLU;
	volatile int64_t t23 = 110347073LL;

	t23 = ((x97/x98)|(x99<x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	volatile uint64_t x102 = UINT64_MAX;
	volatile int32_t x103 = INT32_MIN;
	int8_t x104 = -1;
	uint64_t t24 = 285799320LLU;

	t24 = ((x101/x102)|(x103<x104));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = INT8_MIN;
	volatile int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	uint64_t x108 = 23LLU;

	t25 = ((x105/x106)|(x107<x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 51U;
	int32_t x110 = 154;
	int64_t x111 = INT64_MIN;
	static volatile int32_t t26 = 32134222;

	t26 = ((x109/x110)|(x111<x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 3299U;
	static volatile int64_t x114 = INT64_MAX;
	int64_t x116 = -13359442983LL;
	int64_t t27 = -422LL;

	t27 = ((x113/x114)|(x115<x116));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 63259276LL;
	int32_t x118 = INT32_MIN;
	static int16_t x119 = -46;
	int64_t t28 = -5496394988371LL;

	t28 = ((x117/x118)|(x119<x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	volatile uint16_t x122 = UINT16_MAX;
	int64_t x123 = -1LL;
	int8_t x124 = INT8_MIN;

	t29 = ((x121/x122)|(x123<x124));

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MAX;
	static int64_t t30 = 1591762921146LL;

	t30 = ((x125/x126)|(x127<x128));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 7U;
	int16_t x130 = -11404;
	int64_t x131 = INT64_MIN;
	static volatile int32_t t31 = 0;

	t31 = ((x129/x130)|(x131<x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MAX;
	int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile int64_t t32 = 12LL;

	t32 = ((x133/x134)|(x135<x136));

	if (t32 != -4294967298LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x138 = INT32_MIN;
	static int8_t x140 = INT8_MAX;
	int32_t t33 = 273410;

	t33 = ((x137/x138)|(x139<x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = -2610477315578800813LL;
	int64_t x143 = -3496798873166306LL;
	int64_t x144 = INT64_MAX;
	volatile int64_t t34 = 0LL;

	t34 = ((x141/x142)|(x143<x144));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x146 = INT8_MAX;
	volatile int16_t x147 = -6;
	volatile int16_t x148 = INT16_MAX;
	static int32_t t35 = 638993;

	t35 = ((x145/x146)|(x147<x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t t36 = 361334950135LLU;

	t36 = ((x149/x150)|(x151<x152));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -27;
	static volatile int8_t x154 = -1;
	int32_t x155 = -1;
	uint16_t x156 = 33U;
	static volatile int32_t t37 = 1;

	t37 = ((x153/x154)|(x155<x156));

	if (t37 != 27) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = -1;
	int8_t x159 = INT8_MIN;
	volatile int32_t t38 = -5;

	t38 = ((x157/x158)|(x159<x160));

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MAX;
	volatile int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MAX;
	int32_t t39 = 135493824;

	t39 = ((x161/x162)|(x163<x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x167 = 8428161288LL;
	uint32_t x168 = UINT32_MAX;
	volatile uint64_t t40 = 1LLU;

	t40 = ((x165/x166)|(x167<x168));

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x170 = 13;
	int64_t x172 = -15446LL;

	t41 = ((x169/x170)|(x171<x172));

	if (t41 != -2814811LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 12937890LLU;
	static volatile int64_t x174 = -1LL;
	int32_t x176 = 118803;
	uint64_t t42 = 373782841451LLU;

	t42 = ((x173/x174)|(x175<x176));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	static int32_t t43 = -1012;

	t43 = ((x177/x178)|(x179<x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x181 = -7;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = INT64_MIN;
	int16_t x184 = -12679;
	uint64_t t44 = 2081249404506LLU;

	t44 = ((x181/x182)|(x183<x184));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MIN;
	static volatile int64_t x188 = 3724LL;
	volatile uint64_t t45 = 40170820LLU;

	t45 = ((x185/x186)|(x187<x188));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 45U;
	uint8_t x190 = 1U;
	static int32_t x191 = -1;
	volatile uint64_t x192 = 2212995437162786LLU;
	static int32_t t46 = 89404;

	t46 = ((x189/x190)|(x191<x192));

	if (t46 != 45) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	int16_t x195 = 1;
	static volatile int64_t x196 = INT64_MIN;
	int32_t t47 = 6771968;

	t47 = ((x193/x194)|(x195<x196));

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MAX;
	volatile int64_t x198 = INT64_MAX;
	int8_t x199 = 7;
	int64_t t48 = 165145349105961LL;

	t48 = ((x197/x198)|(x199<x200));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = 81;
	static volatile int32_t x202 = INT32_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t49 = 885;

	t49 = ((x201/x202)|(x203<x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = INT16_MIN;
	uint32_t x206 = 133464U;
	uint32_t x207 = UINT32_MAX;
	int8_t x208 = -1;
	volatile uint32_t t50 = 133734225U;

	t50 = ((x205/x206)|(x207<x208));

	if (t50 != 32180U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int32_t x210 = -17883;
	static volatile int32_t t51 = 989822;

	t51 = ((x209/x210)|(x211<x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = 39;
	static int8_t x214 = 31;
	int64_t x215 = 141256052228LL;
	volatile int32_t x216 = INT32_MIN;
	int32_t t52 = -718608;

	t52 = ((x213/x214)|(x215<x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 126807856LL;
	volatile uint16_t x219 = 1275U;
	volatile int64_t t53 = -155LL;

	t53 = ((x217/x218)|(x219<x220));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = UINT8_MAX;
	int64_t x222 = 71176278641819LL;
	int64_t t54 = -21LL;

	t54 = ((x221/x222)|(x223<x224));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1826390604863180289LL;
	int8_t x226 = -1;
	int64_t t55 = 4960986254LL;

	t55 = ((x225/x226)|(x227<x228));

	if (t55 != 1826390604863180289LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x231 = -1;
	volatile int64_t t56 = -288181LL;

	t56 = ((x229/x230)|(x231<x232));

	if (t56 != -4294967295LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -2;
	volatile uint64_t x235 = 1014LLU;

	t57 = ((x233/x234)|(x235<x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x237 = INT16_MAX;
	uint16_t x238 = UINT16_MAX;
	static volatile uint64_t x239 = 5627679225283980688LLU;
	uint32_t x240 = 50376U;
	volatile int32_t t58 = -214683;

	t58 = ((x237/x238)|(x239<x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = INT64_MIN;
	uint32_t x242 = 29649U;
	volatile int64_t x244 = INT64_MAX;
	volatile int64_t t59 = 352878797172964LL;

	t59 = ((x241/x242)|(x243<x244));

	if (t59 != -311085434141277LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x245 = INT32_MIN;
	int32_t t60 = 273556458;

	t60 = ((x245/x246)|(x247<x248));

	if (t60 != -536870911) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MAX;
	uint16_t x252 = 1798U;
	static int32_t t61 = 26894;

	t61 = ((x249/x250)|(x251<x252));

	if (t61 != 65536) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	uint64_t x255 = 56596184875520321LLU;
	int8_t x256 = INT8_MAX;

	t62 = ((x253/x254)|(x255<x256));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x257 = INT16_MIN;
	uint64_t x258 = UINT64_MAX;
	volatile int64_t x259 = -1LL;
	uint64_t t63 = 241280091426935LLU;

	t63 = ((x257/x258)|(x259<x260));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x261 = -99LL;
	int64_t x262 = INT64_MAX;
	static int8_t x263 = -41;
	uint32_t x264 = UINT32_MAX;

	t64 = ((x261/x262)|(x263<x264));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MIN;
	static int8_t x266 = 45;
	volatile uint16_t x267 = 20845U;
	static volatile uint64_t x268 = 6589375500116820922LLU;
	static int64_t t65 = -31896748675099LL;

	t65 = ((x265/x266)|(x267<x268));

	if (t65 != -204963823041217239LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x270 = INT8_MIN;
	static uint32_t x271 = 17199U;
	uint64_t x272 = 1934695LLU;
	volatile int32_t t66 = -599285;

	t66 = ((x269/x270)|(x271<x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x274 = -13;
	int32_t x276 = 2;

	t67 = ((x273/x274)|(x275<x276));

	if (t67 != 9) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = 19;
	int16_t x278 = 13;
	static int16_t x279 = INT16_MAX;
	volatile int32_t x280 = -1;
	volatile int32_t t68 = -1;

	t68 = ((x277/x278)|(x279<x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 12U;
	int32_t x282 = -1;
	static int32_t x283 = -45559971;
	int8_t x284 = 34;
	volatile uint32_t t69 = 14635U;

	t69 = ((x281/x282)|(x283<x284));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x288 = -216LL;

	t70 = ((x285/x286)|(x287<x288));

	if (t70 != 281474976710657LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x290 = -1;
	static uint32_t x291 = 33892379U;
	volatile int32_t t71 = -24056;

	t71 = ((x289/x290)|(x291<x292));

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = UINT8_MAX;
	uint16_t x298 = 29280U;
	int64_t x299 = 221870266942774LL;
	static uint16_t x300 = 1U;

	t72 = ((x297/x298)|(x299<x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MAX;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t73 = 7752939957814LLU;

	t73 = ((x301/x302)|(x303<x304));

	if (t73 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x306 = -1685;
	int64_t x307 = -1LL;
	int8_t x308 = 1;
	int64_t t74 = -4522192206456LL;

	t74 = ((x305/x306)|(x307<x308));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = UINT8_MAX;
	static int8_t x310 = INT8_MIN;
	uint64_t x311 = 5646752776819847905LLU;
	int16_t x312 = 842;
	volatile int32_t t75 = 31;

	t75 = ((x309/x310)|(x311<x312));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = -1;
	volatile uint16_t x314 = 1U;
	static int64_t x315 = INT64_MAX;
	volatile int32_t t76 = 1900455;

	t76 = ((x313/x314)|(x315<x316));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MAX;
	volatile int64_t x318 = INT64_MAX;
	int8_t x319 = 22;
	int8_t x320 = -1;
	int64_t t77 = 10LL;

	t77 = ((x317/x318)|(x319<x320));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MAX;
	volatile int64_t x322 = INT64_MIN;
	uint32_t x323 = 24U;
	volatile int8_t x324 = INT8_MIN;
	volatile int64_t t78 = -32235375724LL;

	t78 = ((x321/x322)|(x323<x324));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = 436212LLU;
	uint16_t x326 = 18U;
	static int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	volatile uint64_t t79 = 3771150573454LLU;

	t79 = ((x325/x326)|(x327<x328));

	if (t79 != 24234LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = 0;
	int32_t x330 = -92688706;
	uint32_t x331 = UINT32_MAX;
	volatile int8_t x332 = INT8_MIN;
	int32_t t80 = -420;

	t80 = ((x329/x330)|(x331<x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x333 = 0;
	static int32_t x334 = INT32_MIN;
	static uint16_t x335 = UINT16_MAX;
	uint32_t x336 = 85989177U;
	volatile int32_t t81 = -82;

	t81 = ((x333/x334)|(x335<x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MIN;
	volatile int32_t t82 = -82;

	t82 = ((x337/x338)|(x339<x340));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = -1;
	int32_t x343 = -1;
	uint32_t x344 = 65U;
	static volatile int32_t t83 = -5935529;

	t83 = ((x341/x342)|(x343<x344));

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = UINT64_MAX;
	int16_t x346 = INT16_MAX;
	static int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MAX;

	t84 = ((x345/x346)|(x347<x348));

	if (t84 != 562967133814801LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MAX;
	volatile uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MIN;
	static int64_t x352 = INT64_MAX;
	volatile int32_t t85 = -4876002;

	t85 = ((x349/x350)|(x351<x352));

	if (t85 != 32769) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = 385749U;
	static int64_t x354 = 247522466342470144LL;

	t86 = ((x353/x354)|(x355<x356));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x357 = UINT64_MAX;
	int8_t x358 = 9;
	int16_t x359 = INT16_MAX;
	static volatile int64_t x360 = 61660613LL;
	volatile uint64_t t87 = 192437677508LLU;

	t87 = ((x357/x358)|(x359<x360));

	if (t87 != 2049638230412172401LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = 0;
	volatile int8_t x362 = INT8_MIN;
	static int32_t x363 = INT32_MIN;
	static volatile uint64_t x364 = 90654010040080416LLU;
	volatile int32_t t88 = 63;

	t88 = ((x361/x362)|(x363<x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = INT32_MIN;
	volatile int64_t x367 = -710128LL;
	volatile uint64_t x368 = UINT64_MAX;

	t89 = ((x365/x366)|(x367<x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	volatile int32_t t90 = -656;

	t90 = ((x369/x370)|(x371<x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = -29;
	static uint8_t x374 = 7U;
	int32_t t91 = 134357;

	t91 = ((x373/x374)|(x375<x376));

	if (t91 != -4) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	static int32_t t92 = -5178;

	t92 = ((x377/x378)|(x379<x380));

	if (t92 != -65538) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x381 = 105U;
	int16_t x382 = INT16_MAX;
	static int32_t x383 = INT32_MIN;
	volatile uint32_t t93 = 289021490U;

	t93 = ((x381/x382)|(x383<x384));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x388 = 5053691U;
	int64_t t94 = 39946LL;

	t94 = ((x385/x386)|(x387<x388));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -1LL;
	static int64_t x392 = INT64_MAX;
	static int64_t t95 = -1LL;

	t95 = ((x389/x390)|(x391<x392));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x394 = INT16_MIN;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MAX;
	volatile int32_t t96 = 8593588;

	t96 = ((x393/x394)|(x395<x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MAX;
	int32_t x398 = -30443747;
	static volatile int8_t x399 = INT8_MIN;
	static uint64_t x400 = 63792433414067LLU;
	int32_t t97 = -2;

	t97 = ((x397/x398)|(x399<x400));

	if (t97 != -70) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = 11881U;
	volatile int16_t x404 = INT16_MIN;
	volatile uint64_t t98 = 857796018953LLU;

	t98 = ((x401/x402)|(x403<x404));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int8_t x407 = -46;
	static int64_t x408 = INT64_MAX;
	volatile int32_t t99 = -241563434;

	t99 = ((x405/x406)|(x407<x408));

	if (t99 != 1) { NG(); } else { ; }
	
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

