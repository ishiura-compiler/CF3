#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = 264LL;
int32_t x10 = -6;
int16_t x11 = -195;
int8_t x12 = -34;
int8_t x13 = -1;
static volatile int64_t t4 = -2LL;
uint8_t x37 = UINT8_MAX;
int8_t x38 = INT8_MIN;
int16_t x39 = -1;
volatile int64_t x40 = -1LL;
int8_t x44 = INT8_MAX;
int32_t x45 = INT32_MIN;
int64_t x71 = -4LL;
int16_t x91 = -1;
int8_t x93 = 12;
static int64_t x98 = INT64_MAX;
int64_t t24 = -316570LL;
volatile uint16_t x108 = 270U;
volatile int16_t x109 = -1;
uint32_t x110 = 171393514U;
uint16_t x112 = UINT16_MAX;
static uint32_t t27 = UINT32_MAX;
static int32_t x117 = -107;
int8_t x121 = INT8_MIN;
uint8_t x122 = 78U;
int64_t x126 = 3LL;
volatile int32_t x135 = INT32_MIN;
int8_t x144 = INT8_MIN;
int16_t x147 = -264;
int64_t x150 = INT64_MAX;
volatile uint32_t t38 = 3U;
int16_t x161 = -25;
int32_t x165 = INT32_MIN;
int64_t x172 = -1LL;
uint8_t x174 = 1U;
volatile int64_t x179 = -575322172354781329LL;
volatile uint16_t x184 = 6U;
static int64_t t45 = 61169180932598LL;
int16_t x188 = -1;
int8_t x190 = INT8_MAX;
volatile int64_t t49 = 1135321306355821LL;
uint32_t x208 = UINT32_MAX;
volatile uint32_t t51 = UINT32_MAX;
int64_t t52 = INT64_MAX;
static int16_t x216 = INT16_MAX;
int8_t x217 = -1;
volatile uint16_t x219 = UINT16_MAX;
volatile uint32_t x220 = UINT32_MAX;
static volatile int32_t x223 = -1;
uint16_t x225 = UINT16_MAX;
static int16_t x238 = -6;
int32_t x240 = 169979913;
int32_t x241 = INT32_MIN;
int8_t x242 = INT8_MIN;
volatile int16_t x252 = INT16_MAX;
int32_t x253 = INT32_MIN;
static uint16_t x254 = 281U;
volatile int8_t x273 = INT8_MAX;
uint16_t x278 = 1U;
uint8_t x283 = 61U;
int64_t x296 = -541229207652236012LL;
uint16_t x307 = UINT16_MAX;
int8_t x309 = INT8_MIN;
volatile uint16_t x313 = 15U;
static uint8_t x315 = 1U;
volatile int64_t t79 = -3829139LL;
static uint64_t x327 = 15LLU;
uint64_t x332 = 4681LLU;
int32_t x335 = INT32_MIN;
static volatile int16_t x338 = 531;
volatile uint64_t t86 = UINT64_MAX;
int16_t x349 = INT16_MIN;
volatile int16_t x350 = -1;
int32_t t87 = 224372;
static int32_t x358 = INT32_MIN;
int16_t x363 = INT16_MAX;
int8_t x367 = -1;
int32_t x371 = 79074;
static uint64_t t93 = 52703601491LLU;
uint64_t x377 = 12670241157110LLU;
static int16_t x379 = -1;
uint8_t x383 = UINT8_MAX;
uint8_t x384 = 3U;
volatile int8_t x387 = INT8_MAX;
static volatile uint64_t t97 = UINT64_MAX;
int64_t x393 = -1LL;


void f0(void) {
	int8_t x1 = -1;
	volatile int8_t x2 = 51;
	static int64_t x3 = 11529851924947LL;
	uint32_t x4 = 38U;

	t0 = (x1|((x2^x3)|x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 33U;
	static int16_t x6 = -3504;
	int8_t x7 = INT8_MIN;
	uint8_t x8 = 1U;
	static volatile int32_t t1 = -1280508;

	t1 = (x5|((x6^x7)|x8));

	if (t1 != 3569) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	volatile int64_t t2 = -3315401206777461270LL;

	t2 = (x9|((x10^x11)|x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = INT32_MIN;
	static int32_t x15 = 86;
	static uint32_t x16 = 85219U;
	static uint32_t t3 = UINT32_MAX;

	t3 = (x13|((x14^x15)|x16));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = 77999LL;
	volatile int16_t x19 = -1;
	static uint16_t x20 = 623U;

	t4 = (x17|((x18^x19)|x20));

	if (t4 != -77953LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 56;
	uint16_t x22 = 5U;
	int8_t x23 = -6;
	int64_t x24 = -737LL;
	int64_t t5 = 10477767785929LL;

	t5 = (x21|((x22^x23)|x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static volatile int8_t x26 = INT8_MAX;
	volatile uint16_t x27 = 47U;
	int32_t x28 = 14;
	volatile int32_t t6 = 40667008;

	t6 = (x25|((x26^x27)|x28));

	if (t6 != -2147483554) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	uint16_t x30 = 6U;
	volatile int64_t x31 = INT64_MAX;
	uint16_t x32 = 0U;
	int64_t t7 = INT64_MAX;

	t7 = (x29|((x30^x31)|x32));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 341U;
	int16_t x36 = -1;
	volatile int64_t t8 = -33360LL;

	t8 = (x33|((x34^x35)|x36));

	if (t8 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t t9 = -125451LL;

	t9 = (x37|((x38^x39)|x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 10U;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MAX;
	static volatile uint32_t t10 = 575648U;

	t10 = (x41|((x42^x43)|x44));

	if (t10 != 2147516415U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	static int64_t x47 = -1271656239LL;
	int8_t x48 = -1;
	volatile int64_t t11 = 0LL;

	t11 = (x45|((x46^x47)|x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	volatile uint32_t x50 = 4461629U;
	int32_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile int64_t t12 = -578095959071468254LL;

	t12 = (x49|((x50^x51)|x52));

	if (t12 != -9223372032559813694LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int16_t x54 = INT16_MIN;
	uint32_t x55 = 468U;
	int64_t x56 = 660270859812LL;
	int64_t t13 = 3623925412775922810LL;

	t13 = (x53|((x54^x55)|x56));

	if (t13 != 661424963583LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static volatile int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	uint64_t x60 = UINT64_MAX;
	static uint64_t t14 = UINT64_MAX;

	t14 = (x57|((x58^x59)|x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 38395495964LLU;
	uint8_t x62 = 12U;
	int32_t x63 = 53090;
	int16_t x64 = INT16_MAX;
	volatile uint64_t t15 = 50186424278216706LLU;

	t15 = (x61|((x62^x63)|x64));

	if (t15 != 38395510783LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint16_t x66 = 3U;
	int16_t x67 = 143;
	static volatile int64_t x68 = INT64_MIN;
	volatile int64_t t16 = -1518617345876925LL;

	t16 = (x65|((x66^x67)|x68));

	if (t16 != -116LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int16_t x70 = -44;
	int32_t x72 = INT32_MIN;
	int64_t t17 = -151530452293546941LL;

	t17 = (x69|((x70^x71)|x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	static uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	volatile int16_t x76 = -1;
	int32_t t18 = -71925883;

	t18 = (x73|((x74^x75)|x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 46314296922595LL;
	static int32_t x78 = -1;
	uint64_t x79 = 102LLU;
	int8_t x80 = INT8_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = (x77|((x78^x79)|x80));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int64_t x82 = -42148202621LL;
	uint16_t x83 = 14673U;
	uint8_t x84 = 2U;
	volatile int64_t t20 = 168909886664562542LL;

	t20 = (x81|((x82^x83)|x84));

	if (t20 != -42148167681LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	volatile int32_t x86 = INT32_MAX;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = 440690151111LLU;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (x85|((x86^x87)|x88));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -1;
	static int32_t x90 = INT32_MIN;
	int16_t x92 = -1;
	volatile int32_t t22 = 49890109;

	t22 = (x89|((x90^x91)|x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = INT8_MIN;
	volatile uint32_t x95 = 29353U;
	int64_t x96 = INT64_MIN;
	static int64_t t23 = 2LL;

	t23 = (x93|((x94^x95)|x96));

	if (t23 != -9223372032559837907LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	static uint8_t x99 = 7U;
	int64_t x100 = -1LL;

	t24 = (x97|((x98^x99)|x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	volatile uint8_t x102 = 6U;
	int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MAX;
	volatile int64_t t25 = 3LL;

	t25 = (x101|((x102^x103)|x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 119U;
	int32_t x106 = INT32_MIN;
	static int8_t x107 = INT8_MIN;
	volatile int32_t t26 = INT32_MAX;

	t26 = (x105|((x106^x107)|x108));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x111 = UINT16_MAX;

	t27 = (x109|((x110^x111)|x112));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x113 = -241194857;
	uint16_t x114 = UINT16_MAX;
	uint64_t x115 = 2643815LLU;
	static int16_t x116 = INT16_MIN;
	uint64_t t28 = 5889911807LLU;

	t28 = (x113|((x114^x115)|x116));

	if (t28 != 18446744073709529247LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = -1;
	int64_t x119 = -423279198069LL;
	int32_t x120 = -114329;
	int64_t t29 = -425346468LL;

	t29 = (x117|((x118^x119)|x120));

	if (t29 != -9LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = -1;
	static volatile int32_t x124 = INT32_MAX;
	static volatile int32_t t30 = -166915;

	t30 = (x121|((x122^x123)|x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -949535323;
	static volatile uint32_t x127 = UINT32_MAX;
	volatile int8_t x128 = INT8_MIN;
	int64_t t31 = -868613704LL;

	t31 = (x125|((x126^x127)|x128));

	if (t31 != -3LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	uint64_t x130 = 15LLU;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x129|((x130^x131)|x132));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int64_t x134 = INT64_MAX;
	int16_t x136 = -1;
	volatile int64_t t33 = -310340LL;

	t33 = (x133|((x134^x135)|x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = -1;
	int16_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 168;

	t34 = (x137|((x138^x139)|x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x141 = -1;
	static int8_t x142 = -1;
	uint8_t x143 = 9U;
	volatile int32_t t35 = 520638037;

	t35 = (x141|((x142^x143)|x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -273LL;
	uint16_t x146 = 21809U;
	int16_t x148 = -1;
	volatile int64_t t36 = 26637LL;

	t36 = (x145|((x146^x147)|x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	volatile int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MIN;
	int64_t t37 = 18504LL;

	t37 = (x149|((x150^x151)|x152));

	if (t37 != -2147483521LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	uint32_t x154 = UINT32_MAX;
	int32_t x155 = -204375521;
	volatile int16_t x156 = 55;

	t38 = (x153|((x154^x155)|x156));

	if (t38 != 2351859191U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	uint32_t x158 = 231452U;
	uint8_t x159 = 13U;
	uint64_t x160 = UINT64_MAX;
	uint64_t t39 = UINT64_MAX;

	t39 = (x157|((x158^x159)|x160));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x162 = 2556U;
	uint8_t x163 = UINT8_MAX;
	int64_t x164 = INT64_MAX;
	int64_t t40 = 26173465826308LL;

	t40 = (x161|((x162^x163)|x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = -1;
	uint64_t x167 = 5439043226670212848LLU;
	int64_t x168 = 47432651LL;
	uint64_t t41 = 213798LLU;

	t41 = (x165|((x166^x167)|x168));

	if (t41 != 18446744072347704271LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x169 = 1U;
	uint16_t x170 = 376U;
	int64_t x171 = INT64_MAX;
	static volatile int64_t t42 = -12189194680403LL;

	t42 = (x169|((x170^x171)|x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	static uint64_t x175 = 431474735LLU;
	int32_t x176 = INT32_MIN;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x173|((x174^x175)|x176));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static uint16_t x178 = UINT16_MAX;
	static volatile uint32_t x180 = 3468U;
	static volatile int64_t t44 = -48270800710468LL;

	t44 = (x177|((x178^x179)|x180));

	if (t44 != -100LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = -1936489;
	volatile int32_t x183 = -1;

	t45 = (x181|((x182^x183)|x184));

	if (t45 != -9223372036852839314LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 0LLU;
	int32_t x186 = 3708843;
	volatile uint16_t x187 = UINT16_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = (x185|((x186^x187)|x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 226;
	int32_t x191 = -1;
	uint64_t x192 = UINT64_MAX;
	uint64_t t47 = UINT64_MAX;

	t47 = (x189|((x190^x191)|x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	uint32_t x194 = 3995U;
	int8_t x195 = 1;
	int32_t x196 = INT32_MIN;
	volatile uint32_t t48 = 476U;

	t48 = (x193|((x194^x195)|x196));

	if (t48 != 2147487642U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = 32U;
	static int64_t x198 = 15630983LL;
	volatile int32_t x199 = -52032180;
	volatile uint8_t x200 = UINT8_MAX;

	t49 = (x197|((x198^x199)|x200));

	if (t49 != -66547713LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	volatile uint32_t x202 = 6U;
	static uint8_t x203 = 5U;
	int64_t x204 = INT64_MAX;
	int64_t t50 = -3838404306091395810LL;

	t50 = (x201|((x202^x203)|x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 527933719U;
	int32_t x206 = -1;
	volatile int8_t x207 = INT8_MIN;

	t51 = (x205|((x206^x207)|x208));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	static uint32_t x210 = 411872308U;
	static int16_t x211 = -1;
	uint32_t x212 = UINT32_MAX;

	t52 = (x209|((x210^x211)|x212));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static uint16_t x214 = 31U;
	int8_t x215 = INT8_MIN;
	volatile int32_t t53 = -31717855;

	t53 = (x213|((x214^x215)|x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = 7U;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x217|((x218^x219)|x220));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	static int8_t x222 = -3;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 30;

	t55 = (x221|((x222^x223)|x224));

	if (t55 != -32766) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MIN;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = -1;
	uint64_t t56 = UINT64_MAX;

	t56 = (x225|((x226^x227)|x228));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = 2U;
	static uint64_t t57 = 80LLU;

	t57 = (x229|((x230^x231)|x232));

	if (t57 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -2;
	uint32_t x234 = 153690U;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 26743844872LLU;
	volatile uint64_t t58 = 54591700512LLU;

	t58 = (x233|((x234^x235)|x236));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -10;
	int8_t x239 = 1;
	int32_t t59 = 3146555;

	t59 = (x237|((x238^x239)|x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x243 = INT32_MIN;
	volatile int8_t x244 = INT8_MIN;
	int32_t t60 = 256355;

	t60 = (x241|((x242^x243)|x244));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 26504199U;
	uint32_t x246 = 1725674871U;
	static int64_t x247 = INT64_MAX;
	int32_t x248 = -1;
	volatile int64_t t61 = -2LL;

	t61 = (x245|((x246^x247)|x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -3518591;
	int16_t x250 = INT16_MIN;
	int8_t x251 = -51;
	volatile int32_t t62 = 1;

	t62 = (x249|((x250^x251)|x252));

	if (t62 != -3506177) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x255 = -1;
	uint16_t x256 = 132U;
	volatile int32_t t63 = 6300;

	t63 = (x253|((x254^x255)|x256));

	if (t63 != -282) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	int64_t x258 = -1LL;
	uint32_t x259 = 479U;
	int8_t x260 = 57;
	volatile int64_t t64 = 62LL;

	t64 = (x257|((x258^x259)|x260));

	if (t64 != -455LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = 769762LL;
	uint32_t x263 = UINT32_MAX;
	int64_t x264 = -53083268LL;
	int64_t t65 = -92441LL;

	t65 = (x261|((x262^x263)|x264));

	if (t65 != -638083LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 15406;
	int8_t x266 = INT8_MIN;
	static int32_t x267 = -397295;
	uint32_t x268 = 5812U;
	uint32_t t66 = 2020535U;

	t66 = (x265|((x266^x267)|x268));

	if (t66 != 409535U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = UINT16_MAX;
	int32_t x270 = -472372051;
	static int8_t x271 = -4;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 4950109;

	t67 = (x269|((x270^x271)|x272));

	if (t67 != -1675100161) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = INT64_MIN;
	volatile uint8_t x275 = 17U;
	static uint16_t x276 = 966U;
	volatile int64_t t68 = 8616LL;

	t68 = (x273|((x274^x275)|x276));

	if (t68 != -9223372036854774785LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 1U;
	volatile uint8_t x279 = UINT8_MAX;
	int16_t x280 = 0;
	volatile int32_t t69 = -4754;

	t69 = (x277|((x278^x279)|x280));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	int32_t x282 = INT32_MAX;
	int32_t x284 = -1;
	static int64_t t70 = -3570935055LL;

	t70 = (x281|((x282^x283)|x284));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x285 = -193775640;
	uint64_t x286 = UINT64_MAX;
	uint64_t x287 = 135586499LLU;
	static volatile int8_t x288 = INT8_MIN;
	volatile uint64_t t71 = 1LLU;

	t71 = (x285|((x286^x287)|x288));

	if (t71 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 2U;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MAX;
	uint64_t x292 = 69597785566449803LLU;
	uint64_t t72 = UINT64_MAX;

	t72 = (x289|((x290^x291)|x292));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = 0U;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = 8132U;
	volatile int64_t t73 = 7077077898425890LL;

	t73 = (x293|((x294^x295)|x296));

	if (t73 != -541229207652229164LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	static int32_t x300 = 886;
	static volatile int32_t t74 = 468;

	t74 = (x297|((x298^x299)|x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 341U;
	uint8_t x302 = 3U;
	uint8_t x303 = UINT8_MAX;
	int64_t x304 = INT64_MIN;
	static int64_t t75 = 133581416LL;

	t75 = (x301|((x302^x303)|x304));

	if (t75 != -9223372036854775299LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	static int16_t x308 = INT16_MIN;
	int64_t t76 = 140LL;

	t76 = (x305|((x306^x307)|x308));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = UINT16_MAX;
	volatile uint8_t x311 = 72U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 0;

	t77 = (x309|((x310^x311)|x312));

	if (t77 != -73) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x314 = INT32_MIN;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t78 = -28132519;

	t78 = (x313|((x314^x315)|x316));

	if (t78 != -113) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = -6952413LL;
	static int16_t x318 = -1;
	int8_t x319 = -1;
	static int8_t x320 = -1;

	t79 = (x317|((x318^x319)|x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -50;
	uint64_t x322 = 279732LLU;
	static uint64_t x323 = 378647LLU;
	static uint16_t x324 = 23311U;
	static volatile uint64_t t80 = 7157059LLU;

	t80 = (x321|((x322^x323)|x324));

	if (t80 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = 1U;
	int64_t x326 = INT64_MAX;
	int16_t x328 = -4584;
	volatile uint64_t t81 = 59LLU;

	t81 = (x325|((x326^x327)|x328));

	if (t81 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MIN;
	volatile uint16_t x330 = 867U;
	uint16_t x331 = UINT16_MAX;
	volatile uint64_t t82 = 245LLU;

	t82 = (x329|((x330^x331)|x332));

	if (t82 != 9223372036854841053LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	uint8_t x334 = UINT8_MAX;
	int8_t x336 = -1;
	volatile int32_t t83 = 14909022;

	t83 = (x333|((x334^x335)|x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	int64_t t84 = 3148288318LL;

	t84 = (x337|((x338^x339)|x340));

	if (t84 != -109LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint64_t x342 = UINT64_MAX;
	static int32_t x343 = INT32_MIN;
	uint32_t x344 = 700129U;
	volatile uint64_t t85 = 110537178702627154LLU;

	t85 = (x341|((x342^x343)|x344));

	if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 1528230714124934377LL;
	uint8_t x346 = 50U;
	int32_t x347 = 145;
	uint64_t x348 = UINT64_MAX;

	t86 = (x345|((x346^x347)|x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x351 = UINT16_MAX;
	volatile int8_t x352 = -8;

	t87 = (x349|((x350^x351)|x352));

	if (t87 != -8) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 14;
	uint8_t x354 = 57U;
	int8_t x355 = -1;
	static int8_t x356 = INT8_MAX;
	int32_t t88 = -230695543;

	t88 = (x353|((x354^x355)|x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	int64_t x359 = -1LL;
	uint8_t x360 = 37U;
	volatile int64_t t89 = -13999319495597830LL;

	t89 = (x357|((x358^x359)|x360));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -195180852;
	int16_t x362 = -34;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = (x361|((x362^x363)|x364));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x365 = INT8_MAX;
	uint64_t x366 = 2589906814427201933LLU;
	static int32_t x368 = -1;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x365|((x366^x367)|x368));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 5664655268264443964LLU;
	int8_t x370 = 0;
	static uint32_t x372 = 15534055U;
	static uint64_t t92 = 19831693001595740LLU;

	t92 = (x369|((x370^x371)|x372));

	if (t92 != 5664655268265310207LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x373 = 3LLU;
	int64_t x374 = INT64_MAX;
	volatile uint32_t x375 = 1918U;
	int16_t x376 = INT16_MIN;

	t93 = (x373|((x374^x375)|x376));

	if (t93 != 18446744073709549699LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x378 = UINT32_MAX;
	int32_t x380 = 1;
	uint64_t t94 = 2006332LLU;

	t94 = (x377|((x378^x379)|x380));

	if (t94 != 12670241157111LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int64_t x382 = INT64_MAX;
	int64_t t95 = INT64_MAX;

	t95 = (x381|((x382^x383)|x384));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 5U;
	int32_t x386 = INT32_MIN;
	uint32_t x388 = 54U;
	volatile uint32_t t96 = 21536374U;

	t96 = (x385|((x386^x387)|x388));

	if (t96 != 2147483775U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -18226141770LL;
	int8_t x390 = -1;
	uint64_t x391 = 3529394024401LLU;
	int64_t x392 = INT64_MAX;

	t97 = (x389|((x390^x391)|x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MAX;
	int32_t x395 = INT32_MAX;
	uint32_t x396 = 80U;
	volatile int64_t t98 = 652439302LL;

	t98 = (x393|((x394^x395)|x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = 1;
	int64_t x399 = 34496236511408LL;
	int16_t x400 = 1;
	volatile int64_t t99 = -21661580LL;

	t99 = (x397|((x398^x399)|x400));

	if (t99 != 34496236511487LL) { NG(); } else { ; }
	
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

