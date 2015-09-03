#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 9;
int64_t x8 = -390662686138581501LL;
int64_t x9 = -1LL;
int64_t x10 = 6499019251LL;
static volatile int8_t x17 = INT8_MAX;
int8_t x20 = INT8_MIN;
int64_t x23 = -210823172627LL;
int64_t t5 = -796109116LL;
int16_t x25 = -1;
volatile int64_t x29 = INT64_MIN;
volatile int64_t x33 = INT64_MIN;
uint64_t x36 = UINT64_MAX;
static uint64_t t8 = 772LLU;
int64_t x48 = -1LL;
int64_t x57 = INT64_MAX;
uint8_t x69 = UINT8_MAX;
static int64_t x71 = INT64_MAX;
uint64_t x72 = 221439684200153LLU;
volatile int32_t x73 = -1;
uint32_t x75 = 140U;
int64_t t17 = 590387743736LL;
int32_t x79 = 20;
int16_t x82 = -1;
int16_t x83 = 1;
static uint8_t x88 = 1U;
int64_t t20 = -59LL;
static int16_t x89 = INT16_MIN;
uint16_t x91 = 7920U;
int32_t x96 = INT32_MAX;
volatile uint32_t t23 = UINT32_MAX;
int8_t x102 = INT8_MIN;
uint16_t x104 = 1U;
uint32_t t25 = UINT32_MAX;
int8_t x114 = -1;
volatile int8_t x117 = INT8_MIN;
uint64_t x124 = UINT64_MAX;
volatile int32_t x134 = INT32_MIN;
int32_t x136 = INT32_MIN;
int32_t x137 = -1;
static volatile int32_t x140 = INT32_MIN;
int32_t x141 = -11772;
uint64_t x142 = 128908628LLU;
int64_t x146 = -2745770212LL;
int8_t x154 = INT8_MAX;
int8_t x169 = INT8_MIN;
uint64_t t42 = 784262446LLU;
static int16_t x184 = -1;
uint64_t x187 = 1067369355562166LLU;
int64_t x189 = -1LL;
int16_t x190 = INT16_MIN;
static volatile int32_t x192 = INT32_MIN;
int32_t x195 = -71;
static volatile uint32_t x204 = UINT32_MAX;
static uint8_t x211 = 69U;
volatile int64_t t51 = -3967284401950LL;
int64_t x218 = 35907LL;
int64_t t52 = 34492050059LL;
int8_t x225 = INT8_MAX;
uint16_t x228 = 751U;
static uint64_t x234 = UINT64_MAX;
volatile uint64_t t56 = 44134256468485719LLU;
int32_t x240 = -364512733;
static int8_t x250 = -8;
int64_t x251 = INT64_MIN;
uint64_t t61 = 13116LLU;
volatile int8_t x269 = INT8_MAX;
int16_t x283 = -1;
uint64_t x296 = UINT64_MAX;
int16_t x298 = INT16_MIN;
int32_t t73 = -2706;
uint16_t x309 = UINT16_MAX;
int64_t x313 = -1LL;
int8_t x315 = INT8_MAX;
int32_t x316 = INT32_MIN;
uint64_t x317 = 342738596237843755LLU;
static uint8_t x325 = 55U;
uint32_t x334 = 112U;
static int8_t x341 = INT8_MIN;
uint32_t x342 = 228106U;
uint8_t x345 = UINT8_MAX;
static int16_t x348 = INT16_MIN;
uint8_t x349 = UINT8_MAX;
volatile uint64_t t84 = 1507059019LLU;
int64_t x354 = -109924464589LL;
int32_t x355 = -1;
volatile uint16_t x362 = 5014U;
static uint64_t x363 = UINT64_MAX;
int8_t x364 = INT8_MAX;
uint8_t x373 = 7U;
uint64_t x385 = 647837232584955LLU;
int16_t x386 = INT16_MAX;
volatile int32_t x393 = -1;
volatile uint32_t x396 = 11777U;
static uint32_t t93 = UINT32_MAX;
static volatile uint64_t x406 = 23135LLU;
int8_t x411 = INT8_MIN;
int64_t t98 = -501LL;


void f0(void) {
	int64_t x2 = -1LL;
	int16_t x3 = INT16_MIN;
	uint64_t x4 = 155LLU;
	uint64_t t0 = 222LLU;

	t0 = (x1|((x2-x3)^x4));

	if (t0 != 32621LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 115654U;
	uint16_t x6 = 8U;
	int8_t x7 = INT8_MIN;
	volatile int64_t t1 = 16291389788532LL;

	t1 = (x5|((x6-x7)^x8));

	if (t1 != -390662686138564657LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x11 = INT16_MIN;
	volatile int16_t x12 = -1;
	volatile int64_t t2 = -807110772760553LL;

	t2 = (x9|((x10-x11)^x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 10U;
	volatile int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	int32_t x16 = -1;
	int32_t t3 = 294580;

	t3 = (x13|((x14-x15)^x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 508921U;
	volatile uint16_t x19 = UINT16_MAX;
	volatile uint32_t t4 = 3U;

	t4 = (x17|((x18-x19)^x20));

	if (t4 != 4294524031U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 12U;
	int8_t x22 = -1;
	uint8_t x24 = UINT8_MAX;

	t5 = (x21|((x22-x23)^x24));

	if (t5 != 210823172845LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	int16_t x27 = 0;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = -14;

	t6 = (x25|((x26-x27)^x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	int64_t x31 = -16710611329638LL;
	static int8_t x32 = -1;
	volatile int64_t t7 = -48668LL;

	t7 = (x29|((x30-x31)^x32));

	if (t7 != -16710611329638LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MAX;
	uint64_t x35 = 1825424337LLU;

	t8 = (x33|((x34-x35)^x36));

	if (t8 != 9223372038680200017LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int64_t x38 = -1LL;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 0U;
	volatile int64_t t9 = -1626065223113165286LL;

	t9 = (x37|((x38-x39)^x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 183651601LLU;
	static int16_t x42 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	int16_t x44 = 1529;
	uint64_t t10 = 4483179381621146LLU;

	t10 = (x41|((x42-x43)^x44));

	if (t10 != 2147470841LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 2547825;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -1;
	volatile int64_t t11 = -79LL;

	t11 = (x45|((x46-x47)^x48));

	if (t11 != 2547839LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 285802073LLU;
	int8_t x50 = 6;
	int16_t x51 = 1;
	int8_t x52 = -1;
	uint64_t t12 = 748362LLU;

	t12 = (x49|((x50-x51)^x52));

	if (t12 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x58 = 26001U;
	int32_t x59 = INT32_MAX;
	int64_t x60 = -1368976LL;
	int64_t t13 = INT64_MAX;

	t13 = (x57|((x58-x59)^x60));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = -1;
	int32_t x62 = 2607;
	static int64_t x63 = -1LL;
	int64_t x64 = -1LL;
	int64_t t14 = 1900928089167970LL;

	t14 = (x61|((x62-x63)^x64));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = INT8_MAX;
	int64_t x66 = -1LL;
	volatile int32_t x67 = -2051892;
	int64_t x68 = INT64_MIN;
	int64_t t15 = 41655718584LL;

	t15 = (x65|((x66-x67)^x68));

	if (t15 != -9223372036852723841LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = 13671754461658LL;
	volatile uint64_t t16 = 23LLU;

	t16 = (x69|((x70-x71)^x72));

	if (t16 != 9223588686911125503LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x74 = -1000396692458493LL;
	int16_t x76 = 0;

	t17 = (x73|((x74-x75)^x76));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	int64_t x78 = -1LL;
	volatile int32_t x80 = -147;
	uint64_t t18 = UINT64_MAX;

	t18 = (x77|((x78-x79)^x80));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x84 = 40U;
	int32_t t19 = 4564871;

	t19 = (x81|((x82-x83)^x84));

	if (t19 != -42) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	uint8_t x86 = 98U;
	int16_t x87 = INT16_MIN;

	t20 = (x85|((x86-x87)^x88));

	if (t20 != -9223372036854742941LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x90 = INT64_MAX;
	volatile uint8_t x92 = 0U;
	volatile int64_t t21 = 22028LL;

	t21 = (x89|((x90-x91)^x92));

	if (t21 != -7921LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 400432944779498LL;
	static int32_t x94 = -1;
	int32_t x95 = INT32_MIN;
	int64_t t22 = -7051383064209261LL;

	t22 = (x93|((x94-x95)^x96));

	if (t22 != 400432944779498LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x97 = UINT32_MAX;
	static int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MIN;
	volatile int32_t x100 = INT32_MIN;

	t23 = (x97|((x98-x99)^x100));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MIN;
	int8_t x103 = INT8_MAX;
	volatile int32_t t24 = 4485134;

	t24 = (x101|((x102-x103)^x104));

	if (t24 != -256) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x106 = INT32_MIN;
	volatile int16_t x107 = INT16_MIN;
	volatile int16_t x108 = INT16_MAX;

	t25 = (x105|((x106-x107)^x108));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = INT16_MIN;
	static volatile int16_t x110 = INT16_MAX;
	int16_t x111 = INT16_MIN;
	int64_t x112 = INT64_MAX;
	volatile int64_t t26 = -151293LL;

	t26 = (x109|((x110-x111)^x112));

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 4074239340LLU;
	static int64_t x115 = INT64_MIN;
	volatile int16_t x116 = INT16_MIN;
	volatile uint64_t t27 = 10777904130163275LLU;

	t27 = (x113|((x114-x115)^x116));

	if (t27 != 9223372040929017855LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x118 = INT8_MAX;
	uint32_t x119 = 3870573U;
	int32_t x120 = -1;
	volatile uint32_t t28 = 0U;

	t28 = (x117|((x118-x119)^x120));

	if (t28 != 4294967277U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	uint32_t x122 = UINT32_MAX;
	volatile uint32_t x123 = 1942468U;
	uint64_t t29 = 27041411796329607LLU;

	t29 = (x121|((x122-x123)^x124));

	if (t29 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -1;
	uint32_t x126 = 155362679U;
	int32_t x127 = 69025926;
	int64_t x128 = -1LL;
	static volatile int64_t t30 = 7764396384LL;

	t30 = (x125|((x126-x127)^x128));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	volatile int8_t x135 = INT8_MIN;
	volatile int32_t t31 = 19;

	t31 = (x133|((x134-x135)^x136));

	if (t31 != -2147483520) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x138 = INT64_MAX;
	int16_t x139 = 75;
	static int64_t t32 = 16LL;

	t32 = (x137|((x138-x139)^x140));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x143 = INT8_MAX;
	uint32_t x144 = UINT32_MAX;
	uint64_t t33 = 1710036345398505LLU;

	t33 = (x141|((x142-x143)^x144));

	if (t33 != 18446744073709540142LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 195975U;
	static uint64_t x147 = UINT64_MAX;
	volatile uint16_t x148 = 232U;
	uint64_t t34 = 246275736988971032LLU;

	t34 = (x145|((x146-x147)^x148));

	if (t34 != 18446744070963789815LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -1LL;
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MAX;
	int8_t x152 = INT8_MAX;
	int64_t t35 = -2036647261LL;

	t35 = (x149|((x150-x151)^x152));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = -1;
	volatile uint8_t x155 = 25U;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t36 = -803007473;

	t36 = (x153|((x154-x155)^x156));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MIN;
	static uint16_t x158 = UINT16_MAX;
	int8_t x159 = 1;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t37 = 1;

	t37 = (x157|((x158-x159)^x160));

	if (t37 != -255) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = -1;
	static volatile int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	static int32_t x164 = INT32_MIN;
	volatile int64_t t38 = 86LL;

	t38 = (x161|((x162-x163)^x164));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 22;
	int16_t x166 = INT16_MAX;
	uint64_t x167 = 1529829012345558LLU;
	uint32_t x168 = UINT32_MAX;
	volatile uint64_t t39 = 789046LLU;

	t39 = (x165|((x166-x167)^x168));

	if (t39 != 18445214241034638038LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x170 = 0U;
	int32_t x171 = INT32_MAX;
	uint8_t x172 = 91U;
	volatile int32_t t40 = 447809;

	t40 = (x169|((x170-x171)^x172));

	if (t40 != -38) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	static int16_t x174 = INT16_MIN;
	int16_t x175 = -32;
	static volatile int8_t x176 = -23;
	int32_t t41 = 113530791;

	t41 = (x173|((x174-x175)^x176));

	if (t41 != -55) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MAX;
	int64_t x178 = INT64_MAX;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MIN;

	t42 = (x177|((x178-x179)^x180));

	if (t42 != 9223372034707292287LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -1563;
	int8_t x182 = -1;
	static int16_t x183 = INT16_MAX;
	volatile int32_t t43 = 327862181;

	t43 = (x181|((x182-x183)^x184));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = -1;
	int8_t x188 = INT8_MIN;
	uint64_t t44 = 35LLU;

	t44 = (x185|((x186-x187)^x188));

	if (t44 != 18446744073709538505LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x191 = INT8_MIN;
	volatile int64_t t45 = -4376344062774332219LL;

	t45 = (x189|((x190-x191)^x192));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = INT16_MAX;
	uint8_t x194 = UINT8_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t46 = 10LL;

	t46 = (x193|((x194-x195)^x196));

	if (t46 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = 14256;
	static int16_t x198 = 27;
	int16_t x199 = INT16_MIN;
	static volatile int16_t x200 = INT16_MIN;
	volatile int32_t t47 = -156414581;

	t47 = (x197|((x198-x199)^x200));

	if (t47 != -51269) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x201 = 19U;
	int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MIN;
	static volatile int64_t t48 = -276722652165139338LL;

	t48 = (x201|((x202-x203)^x204));

	if (t48 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = -1;
	int8_t x206 = -1;
	int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MAX;
	int64_t t49 = -60197LL;

	t49 = (x205|((x206-x207)^x208));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = 11104920064796LL;
	int16_t x210 = INT16_MIN;
	static volatile int16_t x212 = -1;
	int64_t t50 = 0LL;

	t50 = (x209|((x210-x211)^x212));

	if (t50 != 11104920064860LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = 1616;
	static int16_t x214 = -1171;
	int8_t x215 = INT8_MIN;
	volatile int64_t x216 = INT64_MAX;

	t51 = (x213|((x214-x215)^x216));

	if (t51 != -9223372036854774190LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = 109168;
	volatile uint32_t x219 = UINT32_MAX;
	volatile uint16_t x220 = UINT16_MAX;

	t52 = (x217|((x218-x219)^x220));

	if (t52 != -4294837253LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -1;
	int64_t x222 = 23371LL;
	int32_t x223 = -59;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int64_t t53 = -2871LL;

	t53 = (x221|((x222-x223)^x224));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x226 = INT32_MIN;
	static int16_t x227 = INT16_MIN;
	int32_t t54 = 1;

	t54 = (x225|((x226-x227)^x228));

	if (t54 != -2147450113) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	volatile int8_t x230 = -1;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 361U;
	int64_t t55 = 261428546373LL;

	t55 = (x229|((x230-x231)^x232));

	if (t55 != -362LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MIN;
	static uint8_t x235 = UINT8_MAX;
	int64_t x236 = 38043052431164625LL;

	t56 = (x233|((x234-x235)^x236));

	if (t56 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -1;
	volatile int8_t x238 = INT8_MAX;
	volatile int8_t x239 = INT8_MIN;
	static int32_t t57 = 475062801;

	t57 = (x237|((x238-x239)^x240));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -1LL;
	uint64_t x242 = 1992469LLU;
	int16_t x243 = INT16_MIN;
	volatile uint64_t x244 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (x241|((x242-x243)^x244));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 467U;
	int8_t x246 = INT8_MAX;
	static int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MAX;
	volatile int64_t t59 = 36134LL;

	t59 = (x245|((x246-x247)^x248));

	if (t59 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	static volatile int32_t x252 = -12108374;
	int64_t t60 = -48977827LL;

	t60 = (x249|((x250-x251)^x252));

	if (t60 != -9223372036842667393LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MAX;
	volatile uint32_t x254 = 63473279U;
	uint64_t x255 = 15420LLU;
	uint64_t x256 = UINT64_MAX;

	t61 = (x253|((x254-x255)^x256));

	if (t61 != 18446744073646112767LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -879151LL;
	int8_t x258 = INT8_MAX;
	volatile uint16_t x259 = 734U;
	int8_t x260 = 1;
	volatile int64_t t62 = 138064984LL;

	t62 = (x257|((x258-x259)^x260));

	if (t62 != -527LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = 23;
	int64_t x263 = 1159681LL;
	uint16_t x264 = 45U;
	static volatile int64_t t63 = -3259305260LL;

	t63 = (x261|((x262-x263)^x264));

	if (t63 != -1114113LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MAX;
	static int32_t x266 = -2213;
	int32_t x267 = -1;
	int64_t x268 = -629LL;
	int64_t t64 = INT64_MAX;

	t64 = (x265|((x266-x267)^x268));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x270 = INT16_MIN;
	uint32_t x271 = 121016U;
	uint32_t x272 = 6873647U;
	uint32_t t65 = 32847U;

	t65 = (x269|((x270-x271)^x272));

	if (t65 != 4287972735U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = -15;
	int16_t x275 = INT16_MAX;
	int64_t x276 = -1LL;
	int64_t t66 = 1928LL;

	t66 = (x273|((x274-x275)^x276));

	if (t66 != -2147450867LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x278 = INT16_MIN;
	volatile int32_t x279 = INT32_MIN;
	uint32_t x280 = 2288U;
	uint32_t t67 = UINT32_MAX;

	t67 = (x277|((x278-x279)^x280));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x281 = 1U;
	static int32_t x282 = -65376;
	static int8_t x284 = INT8_MIN;
	volatile uint32_t t68 = 332U;

	t68 = (x281|((x282-x283)^x284));

	if (t68 != 65313U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = 28;
	int16_t x286 = -1889;
	volatile uint16_t x287 = 710U;
	volatile int16_t x288 = -549;
	static int32_t t69 = 747;

	t69 = (x285|((x286-x287)^x288));

	if (t69 != 2078) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	volatile uint8_t x290 = 51U;
	uint16_t x291 = 0U;
	int32_t x292 = INT32_MAX;
	volatile int32_t t70 = 771;

	t70 = (x289|((x290-x291)^x292));

	if (t70 != -52) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = -7;
	int64_t x294 = -214154827256976LL;
	uint64_t x295 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x293|((x294-x295)^x296));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x297 = 5U;
	volatile int32_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t72 = -33448533;

	t72 = (x297|((x298-x299)^x300));

	if (t72 != -32769) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x301 = 7;
	volatile int8_t x302 = -37;
	volatile uint16_t x303 = 63U;
	uint16_t x304 = UINT16_MAX;

	t73 = (x301|((x302-x303)^x304));

	if (t73 != -65433) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = INT16_MIN;
	uint8_t x306 = 32U;
	int32_t x307 = 0;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t74 = 30432050;

	t74 = (x305|((x306-x307)^x308));

	if (t74 != -32736) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x310 = INT8_MAX;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = 250;
	volatile uint32_t t75 = 48U;

	t75 = (x309|((x310-x311)^x312));

	if (t75 != 65535U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x314 = 3596;
	volatile int64_t t76 = -6415892LL;

	t76 = (x313|((x314-x315)^x316));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x318 = INT8_MAX;
	static int16_t x319 = INT16_MIN;
	volatile int32_t x320 = -1254731;
	volatile uint64_t t77 = 76671793139789LLU;

	t77 = (x317|((x318-x319)^x320));

	if (t77 != 18446744073709477867LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x321 = INT64_MAX;
	int8_t x322 = INT8_MIN;
	int32_t x323 = 599;
	int8_t x324 = INT8_MAX;
	int64_t t78 = 873336929LL;

	t78 = (x321|((x322-x323)^x324));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x326 = UINT8_MAX;
	uint8_t x327 = 0U;
	int32_t x328 = -137219393;
	int32_t t79 = -769682;

	t79 = (x325|((x326-x327)^x328));

	if (t79 != -137219465) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = 0;
	int32_t x335 = -1;
	uint8_t x336 = 0U;
	volatile uint32_t t80 = 63U;

	t80 = (x333|((x334-x335)^x336));

	if (t80 != 113U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = -1LL;
	static uint8_t x338 = 5U;
	int32_t x339 = INT32_MAX;
	volatile uint64_t x340 = 13128LLU;
	uint64_t t81 = UINT64_MAX;

	t81 = (x337|((x338-x339)^x340));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t82 = 94510551LLU;

	t82 = (x341|((x342-x343)^x344));

	if (t82 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	int32_t t83 = -68395;

	t83 = (x345|((x346-x347)^x348));

	if (t83 != -2147483393) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x350 = 2874489862974653LLU;
	uint64_t x351 = 14371210LLU;
	int16_t x352 = INT16_MIN;

	t84 = (x349|((x350-x351)^x352));

	if (t84 != 18443869583860933631LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MAX;
	int8_t x356 = -1;
	volatile int64_t t85 = 22LL;

	t85 = (x353|((x354-x355)^x356));

	if (t85 != 109924464639LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 12U;
	int8_t x358 = -7;
	int32_t x359 = -1;
	static int64_t x360 = 1112254881969LL;
	static int64_t t86 = 2526894919319998LL;

	t86 = (x357|((x358-x359)^x360));

	if (t86 != -1112254881969LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x361 = UINT32_MAX;
	uint64_t t87 = 65868LLU;

	t87 = (x361|((x362-x363)^x364));

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MIN;
	volatile int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	static uint16_t x372 = 166U;
	static volatile int32_t t88 = 1;

	t88 = (x369|((x370-x371)^x372));

	if (t88 != -89) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x374 = -357;
	uint8_t x375 = 15U;
	int32_t x376 = INT32_MAX;
	static volatile int32_t t89 = 1886;

	t89 = (x373|((x374-x375)^x376));

	if (t89 != -2147483273) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = -15;
	volatile int16_t x378 = INT16_MAX;
	uint64_t x379 = 4592230LLU;
	volatile int16_t x380 = INT16_MAX;
	volatile uint64_t t90 = 433836537349645LLU;

	t90 = (x377|((x378-x379)^x380));

	if (t90 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x387 = -2;
	volatile uint64_t x388 = UINT64_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = (x385|((x386-x387)^x388));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MAX;
	int32_t x390 = -1;
	uint16_t x391 = 11U;
	volatile int8_t x392 = -1;
	static volatile int64_t t92 = INT64_MAX;

	t92 = (x389|((x390-x391)^x392));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x394 = -703;
	volatile int8_t x395 = INT8_MIN;

	t93 = (x393|((x394-x395)^x396));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x397 = INT8_MAX;
	int8_t x398 = 0;
	volatile uint64_t x399 = 417218LLU;
	int16_t x400 = INT16_MIN;
	uint64_t t94 = 4918LLU;

	t94 = (x397|((x398-x399)^x400));

	if (t94 != 402047LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x401 = INT64_MAX;
	uint16_t x402 = UINT16_MAX;
	int64_t x403 = -1LL;
	uint64_t x404 = 26819657655862237LLU;
	uint64_t t95 = 294475520327811LLU;

	t95 = (x401|((x402-x403)^x404));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MAX;
	int8_t x407 = INT8_MIN;
	static volatile int32_t x408 = INT32_MAX;
	static uint64_t t96 = 28145LLU;

	t96 = (x405|((x406-x407)^x408));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x409 = INT64_MIN;
	static int16_t x410 = -1308;
	int8_t x412 = INT8_MIN;
	static volatile int64_t t97 = 89LL;

	t97 = (x409|((x410-x411)^x412));

	if (t97 != -9223372036854774556LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -1;
	static int64_t x414 = INT64_MIN;
	volatile int16_t x415 = -6339;
	uint16_t x416 = 421U;

	t98 = (x413|((x414-x415)^x416));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = INT32_MIN;
	volatile int64_t x418 = 762297LL;
	int64_t x419 = 205656243LL;
	int8_t x420 = -43;
	static volatile int64_t t99 = -2457075LL;

	t99 = (x417|((x418-x419)^x420));

	if (t99 != -1942589741LL) { NG(); } else { ; }
	
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

