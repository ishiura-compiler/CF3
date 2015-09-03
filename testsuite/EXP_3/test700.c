#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
uint8_t x5 = UINT8_MAX;
int32_t x13 = 25220212;
int16_t x14 = 1;
int64_t x20 = INT64_MIN;
int8_t x25 = -27;
uint32_t x27 = UINT32_MAX;
int64_t x32 = -9LL;
volatile int64_t x34 = -1LL;
uint8_t x46 = 0U;
int8_t x52 = -4;
static int16_t x58 = -1;
volatile int32_t t13 = -16520335;
uint16_t x63 = 83U;
uint64_t t14 = 2LLU;
volatile uint16_t x68 = 7U;
static int8_t x87 = INT8_MAX;
volatile int16_t x94 = -1;
uint32_t x111 = 18U;
static uint64_t x117 = 33509441297LLU;
static int8_t x123 = INT8_MAX;
uint16_t x126 = 0U;
int8_t x127 = 0;
uint16_t x128 = 2280U;
uint64_t x132 = 1025063706026417812LLU;
int64_t x138 = INT64_MIN;
int32_t x142 = -108;
static uint8_t x150 = 27U;
uint16_t x151 = UINT16_MAX;
int64_t t32 = 122716255612LL;
volatile int8_t x153 = -3;
static int32_t x154 = INT32_MIN;
uint8_t x155 = UINT8_MAX;
int64_t x169 = -925301LL;
volatile int64_t t36 = 117105LL;
volatile int64_t t37 = -154LL;
int64_t x177 = -1LL;
volatile int32_t t39 = 10206;
uint8_t x196 = 31U;
int32_t t42 = -510017767;
static uint32_t x201 = 1U;
int64_t t44 = -57LL;
static int16_t x209 = -199;
uint32_t x214 = 116566U;
volatile uint32_t t47 = 11935448U;
volatile int64_t x217 = INT64_MIN;
static int64_t x218 = -1LL;
uint64_t x227 = 2055787011882380LLU;
uint16_t x233 = 1044U;
volatile int16_t x234 = INT16_MIN;
volatile uint32_t t52 = 4454009U;
int64_t x237 = INT64_MIN;
uint64_t x238 = 173687663668750LLU;
int16_t x246 = INT16_MIN;
static volatile int32_t x247 = INT32_MIN;
volatile int32_t t55 = 1750;
int32_t x251 = 1;
volatile uint32_t x258 = UINT32_MAX;
volatile int16_t x260 = INT16_MAX;
static uint16_t x263 = 13U;
uint64_t x270 = UINT64_MAX;
int64_t x271 = INT64_MIN;
volatile uint8_t x275 = UINT8_MAX;
static int64_t x280 = -1LL;
static int16_t x286 = 1;
int64_t x289 = -11LL;
static int8_t x298 = -1;
volatile int32_t t67 = 858;
int32_t x302 = INT32_MAX;
int32_t x312 = -1;
volatile int32_t x313 = INT32_MAX;
uint64_t x322 = UINT64_MAX;
volatile uint64_t t73 = 999834947LLU;
uint64_t t74 = 43727361104821052LLU;
volatile int32_t x330 = INT32_MIN;
int8_t x333 = 0;
static uint16_t x334 = 4012U;
uint32_t x339 = UINT32_MAX;
int16_t x350 = -1;
static volatile uint64_t t79 = 2901233319944079759LLU;
volatile int64_t x367 = 1534193495LL;
int32_t x369 = 1;
volatile int64_t x370 = -1LL;
volatile int64_t t81 = 2LL;
int32_t x374 = -28;
uint8_t x378 = 5U;
static int8_t x379 = 2;
volatile int64_t x381 = INT64_MIN;
int64_t x382 = INT64_MIN;
uint16_t x387 = 1771U;
volatile int64_t x388 = INT64_MIN;
int64_t t85 = 647621776LL;
volatile int8_t x399 = INT8_MAX;
static int16_t x401 = INT16_MAX;
int16_t x404 = INT16_MIN;
volatile uint8_t x407 = 0U;
static uint64_t x410 = 731072678LLU;
volatile uint64_t t91 = 321932LLU;
static uint32_t x413 = 92U;
uint32_t x414 = UINT32_MAX;
int64_t x415 = -108628013046LL;
volatile int64_t t92 = 1LL;
uint32_t x419 = 1U;
static int64_t t93 = 8125113LL;
uint8_t x426 = 5U;
uint32_t x430 = 10U;
int8_t x438 = -23;
int16_t x441 = 56;
uint64_t x442 = 3753094856720463LLU;
uint32_t x443 = 6148U;
uint16_t x446 = 2274U;
static int16_t x447 = -1;
static uint64_t t98 = 2967LLU;
uint32_t x451 = 34845U;


void f0(void) {
	volatile uint8_t x2 = UINT8_MAX;
	int32_t x3 = INT32_MIN;
	int8_t x4 = -1;
	int32_t t0 = -372;

	t0 = ((x1-x2)&(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t x8 = INT32_MAX;
	int64_t t1 = -51818954976230922LL;

	t1 = ((x5-x6)&(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static volatile uint8_t x10 = 56U;
	int8_t x11 = -1;
	volatile int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 724698LLU;

	t2 = ((x9-x10)&(x11%x12));

	if (t2 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x15 = 77U;
	volatile int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -11802;

	t3 = ((x13-x14)&(x15%x16));

	if (t3 != 65) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 3384LLU;
	int8_t x18 = INT8_MIN;
	uint32_t x19 = 52277U;
	uint64_t t4 = 4292648697858LLU;

	t4 = ((x17-x18)&(x19%x20));

	if (t4 != 3120LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MAX;
	volatile uint32_t x28 = UINT32_MAX;
	volatile uint32_t t5 = 972043U;

	t5 = ((x25-x26)&(x27%x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	volatile int64_t t6 = -65LL;

	t6 = ((x29-x30)&(x31%x32));

	if (t6 != 32640LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MIN;
	static int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	int64_t t7 = 1489187243938LL;

	t7 = ((x33-x34)&(x35%x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 19;
	static int16_t x38 = INT16_MIN;
	int8_t x39 = 6;
	int32_t x40 = INT32_MIN;
	volatile int32_t t8 = 12041;

	t8 = ((x37-x38)&(x39%x40));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 7645277600829745LLU;
	static int32_t x42 = INT32_MAX;
	static volatile uint8_t x43 = 12U;
	int8_t x44 = INT8_MIN;
	static uint64_t t9 = 491904LLU;

	t9 = ((x41-x42)&(x43%x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = -4407;
	uint32_t x47 = 2563040U;
	uint8_t x48 = UINT8_MAX;
	volatile uint32_t t10 = 1470639U;

	t10 = ((x45-x46)&(x47%x48));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	int64_t x50 = -318959735LL;
	uint16_t x51 = UINT16_MAX;
	int64_t t11 = -1818347452443LL;

	t11 = ((x49-x50)&(x51%x52));

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MAX;
	static int16_t x54 = -1;
	int64_t x55 = -1LL;
	int64_t x56 = INT64_MIN;
	static int64_t t12 = -5LL;

	t12 = ((x53-x54)&(x55%x56));

	if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	volatile uint16_t x59 = 6309U;
	static int32_t x60 = 130175;

	t13 = ((x57-x58)&(x59%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x61 = 150U;
	uint64_t x62 = 23444276LLU;
	static volatile int32_t x64 = INT32_MIN;

	t14 = ((x61-x62)&(x63%x64));

	if (t14 != 66LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 14552U;
	int32_t x66 = -1841;
	static uint16_t x67 = 1U;
	volatile int32_t t15 = 3336567;

	t15 = ((x65-x66)&(x67%x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = 20;
	static int64_t x70 = -1LL;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MAX;
	volatile int64_t t16 = 16302124954694128LL;

	t16 = ((x69-x70)&(x71%x72));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x81 = 4;
	static int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	volatile int32_t t17 = 61440;

	t17 = ((x81-x82)&(x83%x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = 31;
	static int8_t x86 = -1;
	volatile uint8_t x88 = 4U;
	int32_t t18 = 24296728;

	t18 = ((x85-x86)&(x87%x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	static volatile int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = UINT64_MAX;
	uint64_t t19 = 15209495691LLU;

	t19 = ((x89-x90)&(x91%x92));

	if (t19 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 14411U;
	int16_t x95 = -1878;
	uint16_t x96 = UINT16_MAX;
	volatile uint32_t t20 = 4762596U;

	t20 = ((x93-x94)&(x95%x96));

	if (t20 != 14344U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MAX;
	volatile int8_t x98 = -1;
	static uint16_t x99 = 62U;
	static uint8_t x100 = 10U;
	volatile int32_t t21 = 738;

	t21 = ((x97-x98)&(x99%x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = INT64_MIN;
	static uint64_t x102 = 539126157977LLU;
	volatile int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MIN;
	uint64_t t22 = 12LLU;

	t22 = ((x101-x102)&(x103%x104));

	if (t22 != 2039721319LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x109 = 8U;
	uint32_t x110 = 499U;
	int16_t x112 = INT16_MIN;
	volatile uint32_t t23 = 59653967U;

	t23 = ((x109-x110)&(x111%x112));

	if (t23 != 16U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x113 = -1;
	int32_t x114 = INT32_MIN;
	static uint64_t x115 = 12710224679LLU;
	volatile int32_t x116 = INT32_MAX;
	uint64_t t24 = 438LLU;

	t24 = ((x113-x114)&(x115%x116));

	if (t24 != 1972806444LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x118 = UINT32_MAX;
	uint8_t x119 = UINT8_MAX;
	int32_t x120 = -814854204;
	volatile uint64_t t25 = 165LLU;

	t25 = ((x117-x118)&(x119%x120));

	if (t25 != 18LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x121 = INT32_MIN;
	int64_t x122 = 437776943LL;
	int8_t x124 = -1;
	volatile int64_t t26 = 253557282855012LL;

	t26 = ((x121-x122)&(x123%x124));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x125 = INT64_MAX;
	volatile int64_t t27 = 215958298670181243LL;

	t27 = ((x125-x126)&(x127%x128));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -49009555;
	int8_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	volatile uint64_t t28 = 400477490365752LLU;

	t28 = ((x129-x130)&(x131%x132));

	if (t28 != 4245957742LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MIN;
	volatile uint8_t x139 = UINT8_MAX;
	int64_t x140 = -15346532LL;
	int64_t t29 = -296LL;

	t29 = ((x137-x138)&(x139%x140));

	if (t29 != 128LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x141 = 33966977U;
	volatile int64_t x143 = -1LL;
	static int8_t x144 = INT8_MIN;
	volatile int64_t t30 = 208545LL;

	t30 = ((x141-x142)&(x143%x144));

	if (t30 != 33967085LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	static int8_t x146 = -7;
	static int64_t x147 = INT64_MAX;
	uint16_t x148 = UINT16_MAX;
	static volatile int64_t t31 = -1390639LL;

	t31 = ((x145-x146)&(x147%x148));

	if (t31 != 134LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = 4LL;
	int32_t x152 = 6769390;

	t32 = ((x149-x150)&(x151%x152));

	if (t32 != 65513LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x156 = INT32_MIN;
	volatile int32_t t33 = -5650269;

	t33 = ((x153-x154)&(x155%x156));

	if (t33 != 253) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x157 = 465919352U;
	int8_t x158 = -1;
	int64_t x159 = 1399771590519951494LL;
	int64_t x160 = INT64_MIN;
	int64_t t34 = 139936093206701LL;

	t34 = ((x157-x158)&(x159%x160));

	if (t34 != 58724352LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = 274U;
	int64_t x162 = INT64_MAX;
	uint32_t x163 = 27U;
	volatile uint64_t x164 = 1450509496LLU;
	volatile uint64_t t35 = 20LLU;

	t35 = ((x161-x162)&(x163%x164));

	if (t35 != 19LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x170 = -1;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -853;

	t36 = ((x169-x170)&(x171%x172));

	if (t36 != -925556LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x173 = INT8_MAX;
	int8_t x174 = -3;
	int8_t x175 = INT8_MAX;
	static int64_t x176 = 492LL;

	t37 = ((x173-x174)&(x175%x176));

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x178 = INT32_MIN;
	int32_t x179 = -1;
	static uint32_t x180 = 53286744U;
	int64_t t38 = -367LL;

	t38 = ((x177-x178)&(x179%x180));

	if (t38 != 32027775LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = UINT8_MAX;
	static int16_t x182 = INT16_MIN;
	static int8_t x183 = INT8_MAX;
	int16_t x184 = -1;

	t39 = ((x181-x182)&(x183%x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x185 = 390323669LL;
	int8_t x186 = INT8_MAX;
	static volatile int64_t x187 = INT64_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int64_t t40 = -17960339076940LL;

	t40 = ((x185-x186)&(x187%x188));

	if (t40 != 23894LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = -60;
	int32_t x190 = 1952859;
	uint8_t x191 = 83U;
	uint32_t x192 = 3242606U;
	uint32_t t41 = 38651950U;

	t41 = ((x189-x190)&(x191%x192));

	if (t41 != 65U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x193 = 0U;
	int8_t x194 = -31;
	uint8_t x195 = UINT8_MAX;

	t42 = ((x193-x194)&(x195%x196));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = 26051056001175LL;
	int16_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	volatile int16_t x200 = INT16_MAX;
	volatile int64_t t43 = -7643782976LL;

	t43 = ((x197-x198)&(x199%x200));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x202 = 19284048U;
	int64_t x203 = -1LL;
	int64_t x204 = INT64_MIN;

	t44 = ((x201-x202)&(x203%x204));

	if (t44 != 4275683249LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = 31U;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = 8517612700705901411LLU;
	int64_t x208 = INT64_MAX;
	uint64_t t45 = 526404323LLU;

	t45 = ((x205-x206)&(x207%x208));

	if (t45 != 3LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x210 = INT16_MIN;
	int64_t x211 = -1LL;
	uint32_t x212 = 55408U;
	volatile int64_t t46 = 15716876132LL;

	t46 = ((x209-x210)&(x211%x212));

	if (t46 != 32569LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = 0;
	static uint32_t x215 = UINT32_MAX;
	int16_t x216 = -3620;

	t47 = ((x213-x214)&(x215%x216));

	if (t47 != 2082U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MAX;
	static int64_t t48 = 222431LL;

	t48 = ((x217-x218)&(x219%x220));

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x221 = 62669947U;
	volatile uint16_t x222 = 15U;
	uint8_t x223 = UINT8_MAX;
	static int32_t x224 = INT32_MIN;
	uint32_t t49 = 15913U;

	t49 = ((x221-x222)&(x223%x224));

	if (t49 != 108U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MAX;
	volatile uint16_t x226 = UINT16_MAX;
	int8_t x228 = -1;
	volatile uint64_t t50 = 24LLU;

	t50 = ((x225-x226)&(x227%x228));

	if (t50 != 2055787011833856LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x229 = UINT64_MAX;
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = -33452428;
	static int64_t x232 = -1LL;
	static volatile uint64_t t51 = 34973684973510LLU;

	t51 = ((x229-x230)&(x231%x232));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x235 = 0U;
	int32_t x236 = -1;

	t52 = ((x233-x234)&(x235%x236));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x239 = -30;
	volatile int8_t x240 = -2;
	uint64_t t53 = 4222402LLU;

	t53 = ((x237-x238)&(x239%x240));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	volatile uint16_t x243 = 17U;
	uint64_t x244 = 4862752617312LLU;
	uint64_t t54 = 336317634LLU;

	t54 = ((x241-x242)&(x243%x244));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x245 = 107U;
	int32_t x248 = 16993839;

	t55 = ((x245-x246)&(x247%x248));

	if (t55 != 34) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = -1;
	int8_t x250 = 40;
	int64_t x252 = -1LL;
	int64_t t56 = -24927075095LL;

	t56 = ((x249-x250)&(x251%x252));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x253 = UINT8_MAX;
	static int32_t x254 = INT32_MAX;
	int8_t x255 = -1;
	int8_t x256 = 30;
	int32_t t57 = 3538225;

	t57 = ((x253-x254)&(x255%x256));

	if (t57 != -2147483392) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = -33;
	int16_t x259 = -1;
	volatile uint32_t t58 = 229717873U;

	t58 = ((x257-x258)&(x259%x260));

	if (t58 != 4294967264U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = -7;
	static int8_t x264 = 1;
	volatile int32_t t59 = -16181043;

	t59 = ((x261-x262)&(x263%x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x265 = 2;
	volatile uint64_t x266 = UINT64_MAX;
	uint8_t x267 = 12U;
	uint32_t x268 = 1244906U;
	uint64_t t60 = 370278034152551LLU;

	t60 = ((x265-x266)&(x267%x268));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -693;
	uint16_t x272 = UINT16_MAX;
	volatile uint64_t t61 = 8631997981953781LLU;

	t61 = ((x269-x270)&(x271%x272));

	if (t61 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = INT32_MAX;
	int32_t x274 = 3327860;
	int64_t x276 = -1LL;
	volatile int64_t t62 = -26347LL;

	t62 = ((x273-x274)&(x275%x276));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = 1475068719LLU;
	int8_t x278 = -1;
	static volatile int8_t x279 = INT8_MIN;
	uint64_t t63 = 1047302LLU;

	t63 = ((x277-x278)&(x279%x280));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x285 = INT8_MIN;
	volatile uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;
	uint64_t t64 = 66530834394410LLU;

	t64 = ((x285-x286)&(x287%x288));

	if (t64 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	int16_t x292 = -1;
	volatile int64_t t65 = -421893865LL;

	t65 = ((x289-x290)&(x291%x292));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	static int64_t x295 = INT64_MIN;
	uint32_t x296 = UINT32_MAX;
	int64_t t66 = -1173LL;

	t66 = ((x293-x294)&(x295%x296));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x297 = -1;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = UINT16_MAX;

	t67 = ((x297-x298)&(x299%x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x301 = 0U;
	int32_t x303 = INT32_MIN;
	int32_t x304 = -1;
	static int32_t t68 = 142;

	t68 = ((x301-x302)&(x303%x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = 1;
	volatile int32_t x306 = 0;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = 54;
	volatile int32_t t69 = 2505380;

	t69 = ((x305-x306)&(x307%x308));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = 3U;
	int32_t x310 = 4076233;
	int64_t x311 = -27465LL;
	int64_t t70 = -3939283920LL;

	t70 = ((x309-x310)&(x311%x312));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x314 = -1LL;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = INT32_MIN;
	int64_t t71 = -79LL;

	t71 = ((x313-x314)&(x315%x316));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = 220448587U;
	uint8_t x318 = UINT8_MAX;
	uint8_t x319 = 1U;
	uint64_t x320 = 253095745LLU;
	volatile uint64_t t72 = 55502LLU;

	t72 = ((x317-x318)&(x319%x320));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = 283568213;
	int64_t x323 = INT64_MAX;
	int64_t x324 = INT64_MIN;

	t73 = ((x321-x322)&(x323%x324));

	if (t73 != 283568214LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = -1;
	static int16_t x327 = -1;
	volatile uint64_t x328 = UINT64_MAX;

	t74 = ((x325-x326)&(x327%x328));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x329 = 318531174831517255LLU;
	uint64_t x331 = 229956033485942LLU;
	int16_t x332 = -1;
	volatile uint64_t t75 = 15261LLU;

	t75 = ((x329-x330)&(x331%x332));

	if (t75 != 140878243957830LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x335 = -4771;
	int64_t x336 = 28970LL;
	static int64_t t76 = -15338956761LL;

	t76 = ((x333-x334)&(x335%x336));

	if (t76 != -8108LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = INT8_MAX;
	uint8_t x338 = UINT8_MAX;
	int32_t x340 = -996;
	uint32_t t77 = 7U;

	t77 = ((x337-x338)&(x339%x340));

	if (t77 != 896U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int64_t x342 = -1LL;
	int16_t x343 = 1;
	uint16_t x344 = 185U;
	int64_t t78 = 0LL;

	t78 = ((x341-x342)&(x343%x344));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x349 = INT16_MIN;
	static uint64_t x351 = 315810591LLU;
	int8_t x352 = INT8_MIN;

	t79 = ((x349-x350)&(x351%x352));

	if (t79 != 315785217LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = -2731516682764394LL;
	int16_t x366 = 676;
	int64_t x368 = INT64_MIN;
	static int64_t t80 = -853LL;

	t80 = ((x365-x366)&(x367%x368));

	if (t80 != 308341842LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 3U;

	t81 = ((x369-x370)&(x371%x372));

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = 39;
	uint32_t x375 = 9U;
	static int8_t x376 = INT8_MIN;
	volatile uint32_t t82 = 2054584461U;

	t82 = ((x373-x374)&(x375%x376));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 50LLU;
	volatile uint16_t x380 = UINT16_MAX;
	uint64_t t83 = 4318761326624057946LLU;

	t83 = ((x377-x378)&(x379%x380));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x383 = -1;
	volatile uint32_t x384 = UINT32_MAX;
	int64_t t84 = -1LL;

	t84 = ((x381-x382)&(x383%x384));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x385 = -1;
	uint16_t x386 = 4298U;

	t85 = ((x385-x386)&(x387%x388));

	if (t85 != 1569LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = INT16_MAX;
	static volatile int64_t x390 = -2244LL;
	int32_t x391 = INT32_MIN;
	volatile uint8_t x392 = UINT8_MAX;
	volatile int64_t t86 = -10293LL;

	t86 = ((x389-x390)&(x391%x392));

	if (t86 != 34944LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x393 = 1U;
	uint64_t x394 = UINT64_MAX;
	volatile int16_t x395 = -1216;
	static volatile int16_t x396 = -1;
	volatile uint64_t t87 = 1105142943584343LLU;

	t87 = ((x393-x394)&(x395%x396));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x397 = 14U;
	int16_t x398 = -1;
	int16_t x400 = -53;
	static volatile int32_t t88 = -277357200;

	t88 = ((x397-x398)&(x399%x400));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = INT64_MIN;
	int64_t t89 = -3236LL;

	t89 = ((x401-x402)&(x403%x404));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x405 = -422;
	volatile uint32_t x406 = UINT32_MAX;
	uint32_t x408 = 3159U;
	volatile uint32_t t90 = 87U;

	t90 = ((x405-x406)&(x407%x408));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x409 = 5U;
	int16_t x411 = INT16_MAX;
	int64_t x412 = -5LL;

	t91 = ((x409-x410)&(x411%x412));

	if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x416 = 1;

	t92 = ((x413-x414)&(x415%x416));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x417 = INT64_MIN;
	int8_t x418 = -1;
	uint32_t x420 = UINT32_MAX;

	t93 = ((x417-x418)&(x419%x420));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x425 = 10639U;
	static volatile int32_t x427 = -1;
	uint8_t x428 = 15U;
	int32_t t94 = -4142237;

	t94 = ((x425-x426)&(x427%x428));

	if (t94 != 10634) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x429 = UINT8_MAX;
	int64_t x431 = INT64_MAX;
	uint16_t x432 = UINT16_MAX;
	static int64_t t95 = -934LL;

	t95 = ((x429-x430)&(x431%x432));

	if (t95 != 245LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = -800538LL;
	static int8_t x439 = 1;
	int8_t x440 = INT8_MIN;
	int64_t t96 = 400LL;

	t96 = ((x437-x438)&(x439%x440));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x444 = -1LL;
	volatile uint64_t t97 = 182034904104471193LLU;

	t97 = ((x441-x442)&(x443%x444));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x445 = 1591524808258LLU;
	static int32_t x448 = INT32_MIN;

	t98 = ((x445-x446)&(x447%x448));

	if (t98 != 1591524805984LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x449 = INT8_MIN;
	static int32_t x450 = -1;
	volatile int32_t x452 = 9;
	uint32_t t99 = 18313U;

	t99 = ((x449-x450)&(x451%x452));

	if (t99 != 0U) { NG(); } else { ; }
	
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

