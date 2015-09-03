#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t2 = 23503470154LLU;
static int16_t x16 = -1;
int32_t t3 = -56557;
int16_t x33 = -12;
int32_t x39 = -19;
int16_t x41 = INT16_MIN;
int64_t t10 = 1LL;
volatile uint64_t x49 = 703LLU;
volatile uint8_t x53 = 4U;
uint16_t x56 = 5U;
int64_t t13 = 3LL;
uint64_t x63 = 11984LLU;
int8_t x81 = INT8_MAX;
static volatile int8_t x83 = 30;
int8_t x87 = -6;
volatile uint64_t t21 = 239651LLU;
volatile uint32_t x108 = UINT32_MAX;
volatile uint16_t x116 = UINT16_MAX;
int32_t x123 = -1;
static int64_t t28 = -49785464LL;
int64_t t30 = -27835580LL;
static int16_t x139 = -1;
static volatile uint64_t t32 = UINT64_MAX;
int32_t t33 = -5514;
uint64_t t34 = 12LLU;
int32_t x149 = INT32_MIN;
int32_t x158 = INT32_MAX;
int16_t x164 = INT16_MIN;
int64_t t37 = 31952LL;
uint16_t x165 = 7U;
int64_t x170 = 6LL;
int32_t x175 = INT32_MAX;
static volatile uint8_t x176 = UINT8_MAX;
int8_t x184 = INT8_MAX;
uint32_t t42 = 1280053842U;
volatile int32_t x190 = INT32_MIN;
volatile int16_t x191 = INT16_MAX;
static int16_t x205 = -1;
int8_t x214 = -1;
uint32_t x215 = 19491U;
int8_t x219 = INT8_MIN;
static uint64_t x221 = 908903353729LLU;
int16_t x222 = INT16_MIN;
volatile uint64_t t50 = 6252LLU;
volatile int16_t x225 = INT16_MIN;
int64_t x228 = INT64_MIN;
static int32_t x231 = -1;
int32_t x241 = 1802;
volatile int32_t x244 = 4102;
volatile uint64_t t55 = 31682LLU;
int16_t x245 = -1;
int32_t t56 = 818758;
uint16_t x258 = UINT16_MAX;
uint64_t x260 = 1LLU;
int64_t x274 = INT64_MAX;
volatile uint64_t x278 = 214540979273LLU;
static uint32_t x280 = UINT32_MAX;
static uint64_t t64 = UINT64_MAX;
int16_t x286 = INT16_MIN;
uint64_t t66 = 7280951417315040742LLU;
uint32_t x292 = 1962735279U;
static uint32_t x293 = 30722431U;
int8_t x302 = INT8_MIN;
static volatile int16_t x310 = -3;
uint16_t x313 = 57U;
int8_t x318 = INT8_MAX;
volatile int32_t t74 = -16;
int32_t x328 = -1038743;
int64_t x335 = INT64_MIN;
int8_t x336 = 53;
static int32_t x337 = INT32_MAX;
int64_t x339 = INT64_MIN;
int32_t x341 = -398762296;
int16_t x342 = -20;
static uint16_t x348 = UINT16_MAX;
static int16_t x349 = -1;
int32_t t82 = -716;
static int64_t t83 = -2043493827561LL;
volatile uint64_t x359 = 24835027966124981LLU;
int16_t x363 = INT16_MIN;
volatile int16_t x365 = INT16_MIN;
int32_t t86 = 79794454;
int8_t x369 = INT8_MAX;
int8_t x370 = -6;
volatile uint8_t x376 = 12U;
static uint16_t x379 = 50U;
int32_t x380 = -14;
int32_t x384 = -760777031;
static int32_t x392 = -1127;
volatile int32_t x393 = INT32_MAX;
static int64_t x400 = INT64_MAX;
volatile int32_t x402 = INT32_MIN;
static volatile int64_t x404 = INT64_MIN;
int64_t x406 = INT64_MAX;
uint8_t x414 = UINT8_MAX;
int32_t x418 = INT32_MAX;


void f0(void) {
	int32_t x1 = -1;
	volatile uint32_t x2 = 120064U;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = 27077LL;
	int64_t t0 = 6504625039988435LL;

	t0 = (x1|((x2%x3)%x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	int16_t x7 = 1376;
	int32_t x8 = INT32_MIN;
	int64_t t1 = 5579857788579LL;

	t1 = (x5|((x6%x7)%x8));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 63LLU;
	volatile int8_t x10 = INT8_MAX;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = -1;

	t2 = (x9|((x10%x11)%x12));

	if (t2 != 63LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -5;
	int8_t x14 = 14;
	int16_t x15 = 852;

	t3 = (x13|((x14%x15)%x16));

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x18 = INT16_MIN;
	volatile int64_t x19 = -1LL;
	static volatile uint16_t x20 = 4669U;
	volatile int64_t t4 = -25783461969085LL;

	t4 = (x17|((x18%x19)%x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint32_t x22 = 2028179U;
	uint8_t x23 = 60U;
	int8_t x24 = INT8_MIN;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (x21|((x22%x23)%x24));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x26 = 1U;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t6 = 9LL;

	t6 = (x25|((x26%x27)%x28));

	if (t6 != -127LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = INT16_MIN;
	int16_t x35 = -1;
	volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t7 = -71;

	t7 = (x33|((x34%x35)%x36));

	if (t7 != -12) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 2;
	int8_t x38 = -15;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t8 = 5345278U;

	t8 = (x37|((x38%x39)%x40));

	if (t8 != 4294967283U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x42 = 0;
	int32_t x43 = 2710100;
	int16_t x44 = INT16_MIN;
	int32_t t9 = 5;

	t9 = (x41|((x42%x43)%x44));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = -1;
	int64_t x46 = INT64_MIN;
	static volatile int16_t x47 = -1;
	int64_t x48 = -333480150363384470LL;

	t10 = (x45|((x46%x47)%x48));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = UINT16_MAX;
	int16_t x51 = INT16_MIN;
	static uint16_t x52 = UINT16_MAX;
	uint64_t t11 = 4347971485846277LLU;

	t11 = (x49|((x50%x51)%x52));

	if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	volatile int32_t t12 = -1562776;

	t12 = (x53|((x54%x55)%x56));

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 1U;
	volatile uint32_t x58 = 115116U;
	static volatile int64_t x59 = 554LL;
	volatile int8_t x60 = INT8_MAX;

	t13 = (x57|((x58%x59)%x60));

	if (t13 != 57LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = -1;
	volatile uint16_t x62 = UINT16_MAX;
	uint64_t x64 = 18784567365287015LLU;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x61|((x62%x63)%x64));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	static uint64_t x66 = 8095304639112313LLU;
	int64_t x67 = INT64_MIN;
	volatile uint8_t x68 = 101U;
	volatile uint64_t t15 = 115829LLU;

	t15 = (x65|((x66%x67)%x68));

	if (t15 != 18446744073709518942LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 869;
	uint16_t x70 = 1U;
	uint16_t x71 = 48U;
	static int64_t x72 = INT64_MAX;
	static volatile int64_t t16 = -3761LL;

	t16 = (x69|((x70%x71)%x72));

	if (t16 != 869LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -1LL;
	int64_t x74 = 1637081477993849LL;
	uint16_t x75 = UINT16_MAX;
	static uint8_t x76 = 3U;
	int64_t t17 = -1320728528842007LL;

	t17 = (x73|((x74%x75)%x76));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -2;
	int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	uint16_t x80 = 4995U;
	static int32_t t18 = 7356785;

	t18 = (x77|((x78%x79)%x80));

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x82 = UINT8_MAX;
	int8_t x84 = -1;
	int32_t t19 = 0;

	t19 = (x81|((x82%x83)%x84));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 1730U;
	static uint16_t x86 = 0U;
	int8_t x88 = INT8_MAX;
	int32_t t20 = 245129448;

	t20 = (x85|((x86%x87)%x88));

	if (t20 != 1730) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	int8_t x94 = INT8_MAX;
	static int64_t x95 = INT64_MIN;
	static uint64_t x96 = 18417LLU;

	t21 = (x93|((x94%x95)%x96));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 0U;
	int32_t x98 = INT32_MIN;
	int64_t x99 = 19LL;
	static uint16_t x100 = 21U;
	static int64_t t22 = 1381680827991670LL;

	t22 = (x97|((x98%x99)%x100));

	if (t22 != -3LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	volatile int8_t x102 = -1;
	int16_t x103 = INT16_MIN;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t23 = -1841109;

	t23 = (x101|((x102%x103)%x104));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = INT32_MIN;
	static int16_t x106 = -1;
	int64_t x107 = INT64_MIN;
	static int64_t t24 = 27910434054724LL;

	t24 = (x105|((x106%x107)%x108));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = -1;
	volatile int64_t x110 = -1983833998LL;
	int32_t x111 = INT32_MAX;
	int32_t x112 = -56;
	int64_t t25 = 9287518LL;

	t25 = (x109|((x110%x111)%x112));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	volatile uint8_t x114 = 2U;
	volatile uint64_t x115 = 38360LLU;
	uint64_t t26 = 486522638015223LLU;

	t26 = (x113|((x114%x115)%x116));

	if (t26 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	volatile int64_t x118 = 1586933881LL;
	int8_t x119 = -3;
	int16_t x120 = INT16_MAX;
	int64_t t27 = -454848257900101LL;

	t27 = (x117|((x118%x119)%x120));

	if (t27 != 65535LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = INT16_MIN;
	static int32_t x122 = -527;
	int64_t x124 = -112242014LL;

	t28 = (x121|((x122%x123)%x124));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -4;
	uint16_t x126 = UINT16_MAX;
	static int8_t x127 = INT8_MAX;
	int64_t x128 = INT64_MIN;
	volatile int64_t t29 = 7LL;

	t29 = (x125|((x126%x127)%x128));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 85U;
	volatile int64_t x130 = INT64_MAX;
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;

	t30 = (x129|((x130%x131)%x132));

	if (t30 != 127LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MIN;
	static int16_t x134 = INT16_MIN;
	int64_t x135 = -1LL;
	int32_t x136 = INT32_MIN;
	static volatile int64_t t31 = -1291522227966720809LL;

	t31 = (x133|((x134%x135)%x136));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	int64_t x138 = INT64_MAX;
	uint64_t x140 = UINT64_MAX;

	t32 = (x137|((x138%x139)%x140));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 0;
	int32_t x142 = INT32_MAX;
	int8_t x143 = 26;
	uint8_t x144 = UINT8_MAX;

	t33 = (x141|((x142%x143)%x144));

	if (t33 != 23) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = INT32_MIN;
	static uint64_t x146 = UINT64_MAX;
	volatile int64_t x147 = INT64_MAX;
	uint32_t x148 = 27U;

	t34 = (x145|((x146%x147)%x148));

	if (t34 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x150 = -1;
	uint16_t x151 = 60U;
	uint16_t x152 = UINT16_MAX;
	static int32_t t35 = 27707749;

	t35 = (x149|((x150%x151)%x152));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static int8_t x159 = -4;
	int32_t x160 = INT32_MIN;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x157|((x158%x159)%x160));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = -235;
	static int64_t x162 = 4094114212802LL;
	volatile int32_t x163 = -1;

	t37 = (x161|((x162%x163)%x164));

	if (t37 != -235LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x166 = 47909860526LL;
	int32_t x167 = 4798768;
	static int32_t x168 = 11;
	volatile int64_t t38 = 472458806104302LL;

	t38 = (x165|((x166%x167)%x168));

	if (t38 != 7LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = UINT8_MAX;
	int64_t x171 = -102127067LL;
	volatile uint64_t x172 = 39131LLU;
	uint64_t t39 = 554090068995LLU;

	t39 = (x169|((x170%x171)%x172));

	if (t39 != 255LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = 96U;
	int8_t x174 = -1;
	volatile int32_t t40 = 44400484;

	t40 = (x173|((x174%x175)%x176));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = -1LL;
	uint64_t x178 = UINT64_MAX;
	static uint16_t x179 = UINT16_MAX;
	uint64_t x180 = UINT64_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = (x177|((x178%x179)%x180));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MAX;
	uint32_t x182 = 9U;
	uint16_t x183 = 201U;

	t42 = (x181|((x182%x183)%x184));

	if (t42 != 32767U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MAX;
	int64_t x192 = -1LL;
	int64_t t43 = -808LL;

	t43 = (x189|((x190%x191)%x192));

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x197 = INT64_MIN;
	static volatile uint16_t x198 = 159U;
	static int32_t x199 = -1;
	int8_t x200 = INT8_MAX;
	int64_t t44 = INT64_MIN;

	t44 = (x197|((x198%x199)%x200));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = INT64_MAX;
	uint32_t x202 = 2U;
	int8_t x203 = INT8_MIN;
	volatile int8_t x204 = INT8_MIN;
	static volatile int64_t t45 = INT64_MAX;

	t45 = (x201|((x202%x203)%x204));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x206 = INT32_MIN;
	volatile int16_t x207 = INT16_MIN;
	int64_t x208 = 7044962674884LL;
	static int64_t t46 = 3799240059LL;

	t46 = (x205|((x206%x207)%x208));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 15079000391LLU;
	uint64_t x210 = 4766989563406243851LLU;
	uint64_t x211 = 7658LLU;
	int32_t x212 = 33247313;
	static uint64_t t47 = 26181298LLU;

	t47 = (x209|((x210%x211)%x212));

	if (t47 != 15079005047LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MAX;
	uint32_t x216 = 5288292U;
	static uint32_t t48 = 0U;

	t48 = (x213|((x214%x215)%x216));

	if (t48 != 32767U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x217 = INT16_MIN;
	int16_t x218 = 76;
	volatile int64_t x220 = INT64_MIN;
	static volatile int64_t t49 = -11509LL;

	t49 = (x217|((x218%x219)%x220));

	if (t49 != -32692LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x223 = INT32_MAX;
	int32_t x224 = -1;

	t50 = (x221|((x222%x223)%x224));

	if (t50 != 908903353729LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x226 = 15;
	static uint32_t x227 = 4852558U;
	int64_t t51 = -104542255666283LL;

	t51 = (x225|((x226%x227)%x228));

	if (t51 != -32753LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x229 = -60;
	int32_t x230 = INT32_MIN;
	static int16_t x232 = 14509;
	int32_t t52 = 476;

	t52 = (x229|((x230%x231)%x232));

	if (t52 != -60) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x233 = 72U;
	volatile int16_t x234 = 2761;
	static volatile int8_t x235 = -3;
	static uint64_t x236 = UINT64_MAX;
	volatile uint64_t t53 = 1221LLU;

	t53 = (x233|((x234%x235)%x236));

	if (t53 != 73LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x237 = -1LL;
	static int16_t x238 = -1;
	volatile int8_t x239 = -1;
	int16_t x240 = -1;
	static int64_t t54 = -19LL;

	t54 = (x237|((x238%x239)%x240));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MIN;

	t55 = (x241|((x242%x243)%x244));

	if (t55 != 4063LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x246 = INT16_MAX;
	static int8_t x247 = INT8_MIN;
	static volatile int32_t x248 = 1284;

	t56 = (x245|((x246%x247)%x248));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = 844174739U;
	static uint8_t x250 = 0U;
	uint8_t x251 = 54U;
	volatile int16_t x252 = INT16_MIN;
	uint32_t t57 = 623181U;

	t57 = (x249|((x250%x251)%x252));

	if (t57 != 844174739U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 20525277673859989LLU;
	int64_t x254 = -16494289331336117LL;
	int32_t x255 = INT32_MAX;
	int16_t x256 = -1;
	uint64_t t58 = 162LLU;

	t58 = (x253|((x254%x255)%x256));

	if (t58 != 20525277673859989LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = 0;
	static uint16_t x259 = 164U;
	static uint64_t t59 = 151229549464LLU;

	t59 = (x257|((x258%x259)%x260));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MAX;
	volatile int64_t x262 = INT64_MIN;
	static int64_t x263 = INT64_MIN;
	volatile int16_t x264 = -8442;
	int64_t t60 = -359423926LL;

	t60 = (x261|((x262%x263)%x264));

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = -1;
	volatile int32_t x267 = -1;
	static volatile uint8_t x268 = 12U;
	static volatile int32_t t61 = -1;

	t61 = (x265|((x266%x267)%x268));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	static volatile uint8_t x272 = 1U;
	volatile int64_t t62 = INT64_MIN;

	t62 = (x269|((x270%x271)%x272));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = INT32_MAX;
	int64_t x275 = INT64_MAX;
	static uint32_t x276 = UINT32_MAX;
	volatile int64_t t63 = 16564054606114LL;

	t63 = (x273|((x274%x275)%x276));

	if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x277 = UINT64_MAX;
	int32_t x279 = INT32_MAX;

	t64 = (x277|((x278%x279)%x280));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x281 = -1LL;
	int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x281|((x282%x283)%x284));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x285 = 4637622325920567LL;
	volatile uint64_t x287 = UINT64_MAX;
	volatile uint32_t x288 = UINT32_MAX;

	t66 = (x285|((x286%x287)%x288));

	if (t66 != 4637624081826615LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x289|((x290%x291)%x292));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x294 = 5203U;
	static uint16_t x295 = UINT16_MAX;
	volatile int32_t x296 = 8;
	uint32_t t68 = 21515967U;

	t68 = (x293|((x294%x295)%x296));

	if (t68 != 30722431U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = INT32_MIN;
	uint8_t x298 = 20U;
	int16_t x299 = -1;
	int32_t x300 = INT32_MIN;
	static int32_t t69 = INT32_MIN;

	t69 = (x297|((x298%x299)%x300));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x301 = INT32_MIN;
	static int16_t x303 = -370;
	int16_t x304 = 8;
	int32_t t70 = INT32_MIN;

	t70 = (x301|((x302%x303)%x304));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	uint16_t x307 = UINT16_MAX;
	static int32_t x308 = INT32_MIN;
	int64_t t71 = -491646445057101828LL;

	t71 = (x305|((x306%x307)%x308));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x309 = INT16_MIN;
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t72 = 14;

	t72 = (x309|((x310%x311)%x312));

	if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x314 = 981474063LL;
	int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	int64_t t73 = -41370LL;

	t73 = (x313|((x314%x315)%x316));

	if (t73 != 57LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = -26;
	static int8_t x319 = -1;
	int16_t x320 = INT16_MIN;

	t74 = (x317|((x318%x319)%x320));

	if (t74 != -26) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = -1LL;
	volatile int64_t x322 = INT64_MIN;
	static volatile int64_t x323 = 561744170992158911LL;
	int64_t x324 = -1119243174LL;
	volatile int64_t t75 = -411258LL;

	t75 = (x321|((x322%x323)%x324));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x325 = 13U;
	int64_t x326 = -221LL;
	int32_t x327 = -80547;
	volatile int64_t t76 = -1049LL;

	t76 = (x325|((x326%x327)%x328));

	if (t76 != -209LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x329 = 189U;
	int16_t x330 = 19;
	uint64_t x331 = 8543147645LLU;
	int16_t x332 = 75;
	uint64_t t77 = 2301LLU;

	t77 = (x329|((x330%x331)%x332));

	if (t77 != 191LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = 475596;
	volatile int64_t t78 = 796113402362LL;

	t78 = (x333|((x334%x335)%x336));

	if (t78 != -2147483621LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x338 = INT8_MIN;
	volatile int8_t x340 = -1;
	volatile int64_t t79 = -45196978225081929LL;

	t79 = (x337|((x338%x339)%x340));

	if (t79 != 2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x343 = 9906065294479687LLU;
	int16_t x344 = INT16_MIN;
	static uint64_t t80 = 144150846637683123LLU;

	t80 = (x341|((x342%x343)%x344));

	if (t80 != 18446744073432457162LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MAX;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t t81 = 2436851158948188LLU;

	t81 = (x345|((x346%x347)%x348));

	if (t81 != 127LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MAX;
	uint8_t x352 = 117U;

	t82 = (x349|((x350%x351)%x352));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = 546046927LL;
	uint8_t x355 = 1U;
	uint32_t x356 = UINT32_MAX;

	t83 = (x353|((x354%x355)%x356));

	if (t83 != 127LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int8_t x358 = INT8_MIN;
	int16_t x360 = -10817;
	static uint64_t t84 = 138317111919345566LLU;

	t84 = (x357|((x358%x359)%x360));

	if (t84 != 19153322844880895LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x361 = INT64_MAX;
	int16_t x362 = -34;
	int64_t x364 = -2170062798016415LL;
	static int64_t t85 = -97682327LL;

	t85 = (x361|((x362%x363)%x364));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x366 = INT8_MIN;
	int32_t x367 = 33106803;
	int16_t x368 = -1;

	t86 = (x365|((x366%x367)%x368));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x371 = INT32_MIN;
	int8_t x372 = -45;
	int32_t t87 = 0;

	t87 = (x369|((x370%x371)%x372));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x373 = UINT32_MAX;
	static int64_t x374 = 888951101LL;
	static int64_t x375 = 20918383LL;
	volatile int64_t t88 = 64780479291147LL;

	t88 = (x373|((x374%x375)%x376));

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	int64_t t89 = -108205581034265LL;

	t89 = (x377|((x378%x379)%x380));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = 150490174452LLU;
	uint32_t x382 = UINT32_MAX;
	volatile uint32_t x383 = 362501262U;
	static uint64_t t90 = 72357LLU;

	t90 = (x381|((x382%x383)%x384));

	if (t90 != 150793347061LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x389 = INT32_MAX;
	volatile uint8_t x390 = 24U;
	int8_t x391 = 18;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x389|((x390%x391)%x392));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x394 = INT64_MAX;
	uint32_t x395 = 4U;
	int64_t x396 = INT64_MIN;
	volatile int64_t t92 = 6895526312106352LL;

	t92 = (x393|((x394%x395)%x396));

	if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x397 = 25751U;
	volatile uint64_t x398 = 5995986LLU;
	uint32_t x399 = UINT32_MAX;
	uint64_t t93 = 482149777006LLU;

	t93 = (x397|((x398%x399)%x400));

	if (t93 != 5995991LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x401 = -1;
	uint8_t x403 = 57U;
	volatile int64_t t94 = 1LL;

	t94 = (x401|((x402%x403)%x404));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = 30;
	volatile int8_t x407 = INT8_MIN;
	int16_t x408 = -1;
	volatile int64_t t95 = 93501008LL;

	t95 = (x405|((x406%x407)%x408));

	if (t95 != 30LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x409 = 5200096U;
	static volatile int8_t x410 = INT8_MIN;
	uint64_t x411 = 1527083489042LLU;
	int16_t x412 = INT16_MIN;
	static uint64_t t96 = 53LLU;

	t96 = (x409|((x410%x411)%x412));

	if (t96 != 55296622316LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x413 = UINT32_MAX;
	uint8_t x415 = 12U;
	int8_t x416 = 31;
	static volatile uint32_t t97 = UINT32_MAX;

	t97 = (x413|((x414%x415)%x416));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = 0;
	int8_t x419 = INT8_MIN;
	volatile int32_t x420 = -74269924;
	int32_t t98 = 223727;

	t98 = (x417|((x418%x419)%x420));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = 117U;
	int32_t x422 = INT32_MIN;
	static volatile int64_t x423 = INT64_MIN;
	uint64_t x424 = 793LLU;
	static volatile uint64_t t99 = 161203209750895563LLU;

	t99 = (x421|((x422%x423)%x424));

	if (t99 != 119LLU) { NG(); } else { ; }
	
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

