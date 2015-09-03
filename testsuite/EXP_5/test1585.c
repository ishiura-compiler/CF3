#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = INT16_MAX;
uint8_t x5 = 1U;
volatile int64_t x7 = -1LL;
volatile int32_t t1 = -52;
int16_t x14 = INT16_MIN;
int32_t x17 = -43;
int64_t x19 = -1LL;
static int16_t x30 = -1;
uint64_t x35 = UINT64_MAX;
int8_t x37 = 0;
static volatile int32_t t9 = -5226;
int16_t x42 = INT16_MAX;
uint8_t x45 = 12U;
static int64_t t11 = -6095676015477137LL;
int32_t t14 = 116;
int8_t x68 = -1;
static int32_t x71 = INT32_MIN;
int8_t x73 = -1;
int8_t x74 = INT8_MIN;
uint16_t x81 = 242U;
int16_t x84 = INT16_MIN;
uint64_t x86 = 5LLU;
static uint32_t t21 = 0U;
int16_t x93 = INT16_MIN;
static int64_t x96 = INT64_MIN;
uint32_t x97 = 77U;
int16_t x103 = INT16_MIN;
int64_t t25 = -86771601176095494LL;
int64_t x110 = INT64_MAX;
int8_t x111 = -1;
uint16_t x117 = UINT16_MAX;
int64_t x125 = INT64_MIN;
int64_t t30 = 31279794732280190LL;
static volatile uint32_t x129 = UINT32_MAX;
int32_t x132 = -1;
int8_t x134 = INT8_MIN;
volatile int32_t x142 = INT32_MAX;
volatile uint32_t t34 = 29338U;
uint8_t x151 = 24U;
volatile int64_t x154 = 1LL;
int64_t x156 = -2389160979750150LL;
static uint32_t x158 = UINT32_MAX;
volatile int8_t x160 = -1;
static int8_t x165 = INT8_MIN;
uint16_t x166 = 3500U;
int16_t x169 = INT16_MIN;
int64_t x188 = -1LL;
int16_t x191 = INT16_MAX;
volatile uint8_t x194 = UINT8_MAX;
int64_t x203 = INT64_MIN;
static int16_t x204 = 7030;
int64_t x206 = INT64_MAX;
volatile uint32_t x211 = 912029U;
volatile uint64_t x233 = 4329478077LLU;
volatile uint64_t t55 = 12222997371295972LLU;
uint64_t x249 = UINT64_MAX;
uint32_t x252 = 1762745919U;
static int32_t t61 = -3;
int64_t x266 = INT64_MIN;
uint8_t x267 = UINT8_MAX;
uint32_t x270 = UINT32_MAX;
static int64_t t64 = 472716418LL;
int32_t x280 = 13;
static int64_t x281 = INT64_MIN;
int8_t x283 = INT8_MIN;
volatile int32_t x290 = -1;
int8_t x291 = 44;
int64_t t69 = -2618849LL;
uint32_t x294 = 44U;
volatile int64_t x299 = INT64_MIN;
int8_t x308 = INT8_MIN;
uint8_t x310 = 35U;
uint8_t x311 = 2U;
volatile int64_t x312 = INT64_MAX;
uint32_t x313 = 34819U;
int16_t x316 = INT16_MAX;
int64_t x317 = INT64_MAX;
uint8_t x323 = 12U;
int32_t x327 = 41;
uint64_t x328 = 62250533197250253LLU;
int32_t x334 = -1;
uint64_t t80 = 6820683LLU;
uint64_t x343 = UINT64_MAX;
int16_t x346 = INT16_MAX;
uint32_t x347 = UINT32_MAX;
static int32_t x353 = -1;
int32_t x356 = INT32_MIN;
int32_t t85 = 3;
static int64_t x360 = -1LL;
int16_t x361 = -73;
volatile uint32_t x367 = 1543373020U;
volatile int16_t x368 = INT16_MIN;
int16_t x369 = INT16_MAX;
int16_t x372 = -1847;
int8_t x374 = INT8_MIN;
volatile int32_t t90 = 331777;
volatile uint8_t x379 = 3U;
volatile uint64_t t91 = 1546267LLU;
static int64_t x398 = 4074400980989430921LL;
static int16_t x399 = INT16_MIN;
uint8_t x400 = 23U;
int8_t x401 = -14;
uint16_t x402 = 12U;
int32_t t98 = -1020585;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x2 = -1;
	static int16_t x3 = INT16_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2<=x3)%x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = 51U;
	int16_t x8 = INT16_MIN;

	t1 = (x5|((x6<=x7)%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	static int8_t x10 = INT8_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	int32_t x12 = 13380799;
	volatile int64_t t2 = INT64_MAX;

	t2 = (x9|((x10<=x11)%x12));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int16_t x15 = -7068;
	int16_t x16 = INT16_MIN;
	static volatile uint64_t t3 = UINT64_MAX;

	t3 = (x13|((x14<=x15)%x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 0;

	t4 = (x17|((x18<=x19)%x20));

	if (t4 != -43) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int32_t x22 = -1;
	int32_t x23 = 6;
	static int64_t x24 = INT64_MAX;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x21|((x22<=x23)%x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint32_t x26 = 659117U;
	uint8_t x27 = 3U;
	int8_t x28 = INT8_MAX;
	static int32_t t6 = 1;

	t6 = (x25|((x26<=x27)%x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 1470419;
	static int8_t x31 = -3;
	uint16_t x32 = UINT16_MAX;
	static volatile int32_t t7 = -3;

	t7 = (x29|((x30<=x31)%x32));

	if (t7 != 1470419) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	static int16_t x36 = INT16_MIN;
	int32_t t8 = 3433;

	t8 = (x33|((x34<=x35)%x36));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x38 = -1;
	int64_t x39 = -1LL;
	static int8_t x40 = INT8_MIN;

	t9 = (x37|((x38<=x39)%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int16_t x43 = -1;
	static int16_t x44 = -1;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x41|((x42<=x43)%x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -6554813;
	volatile uint64_t x47 = 2106LLU;
	int64_t x48 = INT64_MIN;

	t11 = (x45|((x46<=x47)%x48));

	if (t11 != 12LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;
	static int32_t x51 = INT32_MAX;
	volatile int16_t x52 = INT16_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x49|((x50<=x51)%x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x54 = 5888815U;
	static int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	int64_t t13 = INT64_MIN;

	t13 = (x53|((x54<=x55)%x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int32_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MAX;

	t14 = (x57|((x58<=x59)%x60));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 209128;
	volatile int64_t x62 = INT64_MAX;
	static uint8_t x63 = 74U;
	static volatile int16_t x64 = 1564;
	int32_t t15 = 1;

	t15 = (x61|((x62<=x63)%x64));

	if (t15 != 209128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	static int64_t x66 = -1476797416LL;
	volatile int32_t x67 = -1;
	volatile int64_t t16 = 5604752622795LL;

	t16 = (x65|((x66<=x67)%x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile int32_t x70 = 788222120;
	int64_t x72 = -1LL;
	volatile int64_t t17 = 1407LL;

	t17 = (x69|((x70<=x71)%x72));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x75 = 1;
	uint8_t x76 = 5U;
	static int32_t t18 = 3698760;

	t18 = (x73|((x74<=x75)%x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint16_t x78 = 6270U;
	int8_t x79 = 0;
	static uint32_t x80 = 397770501U;
	int64_t t19 = -324446794445653639LL;

	t19 = (x77|((x78<=x79)%x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x82 = 455U;
	volatile int64_t x83 = INT64_MIN;
	int32_t t20 = -5;

	t20 = (x81|((x82<=x83)%x84));

	if (t20 != 242) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = 3609986U;

	t21 = (x85|((x86<=x87)%x88));

	if (t21 != 127U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = 41;
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	static int16_t x92 = -1;
	volatile int32_t t22 = -1;

	t22 = (x89|((x90<=x91)%x92));

	if (t22 != 41) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 15U;
	int64_t x95 = INT64_MIN;
	volatile int64_t t23 = -33LL;

	t23 = (x93|((x94<=x95)%x96));

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = 1020;
	volatile int32_t x99 = -13901940;
	uint16_t x100 = UINT16_MAX;
	uint32_t t24 = 1971435U;

	t24 = (x97|((x98<=x99)%x100));

	if (t24 != 77U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	static int32_t x102 = -1;
	int64_t x104 = INT64_MIN;

	t25 = (x101|((x102<=x103)%x104));

	if (t25 != 255LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	int8_t x112 = INT8_MIN;
	volatile int32_t t26 = 67274;

	t26 = (x109|((x110<=x111)%x112));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = 29563701463027LL;
	static volatile int64_t x114 = INT64_MIN;
	static int8_t x115 = INT8_MAX;
	static int8_t x116 = INT8_MIN;
	int64_t t27 = -248559LL;

	t27 = (x113|((x114<=x115)%x116));

	if (t27 != 29563701463027LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	int8_t x120 = 1;
	volatile int32_t t28 = 161632;

	t28 = (x117|((x118<=x119)%x120));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 0U;
	static volatile int16_t x122 = INT16_MIN;
	uint32_t x123 = 8867U;
	volatile int32_t x124 = 271425;
	int32_t t29 = -5956933;

	t29 = (x121|((x122<=x123)%x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x126 = INT16_MAX;
	int64_t x127 = 36166608LL;
	volatile int8_t x128 = -15;

	t30 = (x125|((x126<=x127)%x128));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x130 = 412214LLU;
	static int32_t x131 = -971745947;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (x129|((x130<=x131)%x132));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 52;
	static uint32_t x135 = 788U;
	int64_t x136 = INT64_MIN;
	static volatile int64_t t32 = 1511183598565LL;

	t32 = (x133|((x134<=x135)%x136));

	if (t32 != 52LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = -3;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t33 = -770933;

	t33 = (x137|((x138<=x139)%x140));

	if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 7263U;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = 1434666U;

	t34 = (x141|((x142<=x143)%x144));

	if (t34 != 7263U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x145 = 14U;
	uint16_t x146 = UINT16_MAX;
	int64_t x147 = -1LL;
	static int32_t x148 = 374562;
	volatile int32_t t35 = -122;

	t35 = (x145|((x146<=x147)%x148));

	if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MAX;
	static int32_t x150 = -122282389;
	int32_t x152 = INT32_MAX;
	volatile int32_t t36 = -11707;

	t36 = (x149|((x150<=x151)%x152));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = 42;
	uint8_t x155 = 77U;
	volatile int64_t t37 = -13904650639492310LL;

	t37 = (x153|((x154<=x155)%x156));

	if (t37 != 43LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = INT8_MIN;
	uint32_t x159 = 31573U;
	volatile int32_t t38 = -14697072;

	t38 = (x157|((x158<=x159)%x160));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 1198U;
	static uint32_t x162 = 782220096U;
	int16_t x163 = INT16_MIN;
	volatile int16_t x164 = INT16_MIN;
	uint32_t t39 = 38U;

	t39 = (x161|((x162<=x163)%x164));

	if (t39 != 1199U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x167 = 1;
	static int32_t x168 = INT32_MAX;
	int32_t t40 = -243190;

	t40 = (x165|((x166<=x167)%x168));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MIN;
	int16_t x171 = 3927;
	uint32_t x172 = 1551U;
	uint32_t t41 = 13510U;

	t41 = (x169|((x170<=x171)%x172));

	if (t41 != 4294934529U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 4U;
	uint64_t x174 = 1150304467655LLU;
	static volatile int8_t x175 = INT8_MIN;
	volatile int16_t x176 = 3;
	volatile int32_t t42 = -173740835;

	t42 = (x173|((x174<=x175)%x176));

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = INT32_MAX;
	volatile int64_t x179 = INT64_MAX;
	volatile uint32_t x180 = 139U;
	uint32_t t43 = 1U;

	t43 = (x177|((x178<=x179)%x180));

	if (t43 != 127U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 3LLU;
	uint64_t x182 = UINT64_MAX;
	uint16_t x183 = UINT16_MAX;
	static int32_t x184 = -16228704;
	uint64_t t44 = 20652LLU;

	t44 = (x181|((x182<=x183)%x184));

	if (t44 != 3LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = INT32_MIN;
	uint64_t x186 = 6928599549959LLU;
	uint16_t x187 = 1212U;
	int64_t t45 = 13075951703LL;

	t45 = (x185|((x186<=x187)%x188));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x189 = 8U;
	int8_t x190 = INT8_MAX;
	static volatile int16_t x192 = INT16_MAX;
	int32_t t46 = 0;

	t46 = (x189|((x190<=x191)%x192));

	if (t46 != 9) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	uint32_t x195 = 1U;
	int16_t x196 = 3;
	volatile int32_t t47 = INT32_MAX;

	t47 = (x193|((x194<=x195)%x196));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = -19;
	volatile int16_t x198 = INT16_MIN;
	static int16_t x199 = INT16_MIN;
	static int16_t x200 = -1;
	int32_t t48 = -5;

	t48 = (x197|((x198<=x199)%x200));

	if (t48 != -19) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = INT32_MAX;
	uint16_t x202 = UINT16_MAX;
	static int32_t t49 = INT32_MAX;

	t49 = (x201|((x202<=x203)%x204));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x205 = INT8_MIN;
	int16_t x207 = -1;
	volatile uint8_t x208 = 1U;
	int32_t t50 = 0;

	t50 = (x205|((x206<=x207)%x208));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = UINT64_MAX;
	uint16_t x210 = 1U;
	static int32_t x212 = INT32_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = (x209|((x210<=x211)%x212));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 4U;
	static volatile uint32_t x218 = 219829347U;
	int16_t x219 = INT16_MAX;
	static int8_t x220 = INT8_MAX;
	static int32_t t52 = 567063;

	t52 = (x217|((x218<=x219)%x220));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x221 = INT16_MIN;
	volatile int32_t x222 = -1;
	uint16_t x223 = 30U;
	static volatile int64_t x224 = -1LL;
	static int64_t t53 = 7493537460118LL;

	t53 = (x221|((x222<=x223)%x224));

	if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = 4544U;
	int32_t x230 = -1;
	int8_t x231 = -1;
	uint32_t x232 = 660U;
	volatile uint32_t t54 = 772677015U;

	t54 = (x229|((x230<=x231)%x232));

	if (t54 != 4545U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x234 = INT16_MAX;
	int32_t x235 = -1;
	uint32_t x236 = 65441U;

	t55 = (x233|((x234<=x235)%x236));

	if (t55 != 4329478077LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = 661998U;
	uint8_t x238 = 88U;
	static uint64_t x239 = UINT64_MAX;
	int64_t x240 = -1LL;
	volatile int64_t t56 = 75665884551511LL;

	t56 = (x237|((x238<=x239)%x240));

	if (t56 != 661998LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x241 = INT32_MAX;
	int8_t x242 = -5;
	int8_t x243 = INT8_MIN;
	volatile int8_t x244 = 1;
	int32_t t57 = INT32_MAX;

	t57 = (x241|((x242<=x243)%x244));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	static volatile int64_t x246 = INT64_MAX;
	int64_t x247 = -31827160LL;
	int32_t x248 = 12;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x245|((x246<=x247)%x248));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x250 = 109786LLU;
	static int32_t x251 = INT32_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = (x249|((x250<=x251)%x252));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = 78464590802874LL;
	int8_t x254 = 1;
	int8_t x255 = INT8_MIN;
	int16_t x256 = -1;
	int64_t t60 = -27578051436LL;

	t60 = (x253|((x254<=x255)%x256));

	if (t60 != 78464590802874LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x257 = INT8_MIN;
	uint32_t x258 = 7081U;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -1;

	t61 = (x257|((x258<=x259)%x260));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x261 = INT32_MAX;
	int8_t x262 = -1;
	int64_t x263 = -404239326323LL;
	static volatile int32_t x264 = INT32_MIN;
	int32_t t62 = INT32_MAX;

	t62 = (x261|((x262<=x263)%x264));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x265 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t63 = 499265U;

	t63 = (x265|((x266<=x267)%x268));

	if (t63 != 4294967169U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -1;
	uint8_t x271 = 5U;
	int64_t x272 = 1LL;

	t64 = (x269|((x270<=x271)%x272));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = 230781756U;
	int8_t x274 = INT8_MAX;
	static int8_t x275 = -1;
	int64_t x276 = -1LL;
	int64_t t65 = 5LL;

	t65 = (x273|((x274<=x275)%x276));

	if (t65 != 230781756LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = 29U;
	int64_t x279 = 1304929863382316LL;
	volatile int32_t t66 = 0;

	t66 = (x277|((x278<=x279)%x280));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x282 = INT8_MAX;
	uint16_t x284 = 2U;
	int64_t t67 = INT64_MIN;

	t67 = (x281|((x282<=x283)%x284));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = 2981;
	uint32_t x286 = 15599098U;
	static int8_t x287 = INT8_MIN;
	static int32_t x288 = INT32_MAX;
	volatile int32_t t68 = -342670911;

	t68 = (x285|((x286<=x287)%x288));

	if (t68 != 2981) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -1;
	static volatile int64_t x292 = -610354760581058315LL;

	t69 = (x289|((x290<=x291)%x292));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = 14853U;
	uint8_t x295 = 23U;
	int8_t x296 = -25;
	int32_t t70 = -58949179;

	t70 = (x293|((x294<=x295)%x296));

	if (t70 != 14853) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -1;
	uint64_t x298 = 335LLU;
	int64_t x300 = -4164950LL;
	int64_t t71 = -58392230635800800LL;

	t71 = (x297|((x298<=x299)%x300));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = 530763U;
	uint8_t x303 = 70U;
	int16_t x304 = INT16_MAX;
	volatile int64_t t72 = INT64_MIN;

	t72 = (x301|((x302<=x303)%x304));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = -611;
	volatile int32_t x306 = INT32_MIN;
	uint16_t x307 = UINT16_MAX;
	int32_t t73 = 0;

	t73 = (x305|((x306<=x307)%x308));

	if (t73 != -611) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x309 = INT32_MIN;
	volatile int64_t t74 = 738526LL;

	t74 = (x309|((x310<=x311)%x312));

	if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x314 = 29759U;
	volatile uint32_t x315 = 20935U;
	volatile uint32_t t75 = 132126U;

	t75 = (x313|((x314<=x315)%x316));

	if (t75 != 34819U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 1526969225U;
	int64_t t76 = INT64_MAX;

	t76 = (x317|((x318<=x319)%x320));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = -1;
	uint64_t x322 = 8397629106208701LLU;
	int8_t x324 = -30;
	int32_t t77 = -84;

	t77 = (x321|((x322<=x323)%x324));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MIN;
	volatile int32_t x326 = INT32_MAX;
	static uint64_t t78 = 1468616864107LLU;

	t78 = (x325|((x326<=x327)%x328));

	if (t78 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = UINT8_MAX;
	int16_t x330 = INT16_MAX;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = 41LLU;
	uint64_t t79 = 30930981910426LLU;

	t79 = (x329|((x330<=x331)%x332));

	if (t79 != 255LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x333 = 2420106663LLU;
	static int32_t x335 = 21663;
	int64_t x336 = INT64_MAX;

	t80 = (x333|((x334<=x335)%x336));

	if (t80 != 2420106663LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = 1;
	uint32_t x338 = UINT32_MAX;
	int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	static int32_t t81 = -1;

	t81 = (x337|((x338<=x339)%x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = INT8_MAX;
	volatile uint16_t x342 = 0U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t82 = -58607;

	t82 = (x341|((x342<=x343)%x344));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = UINT64_MAX;
	static int16_t x348 = INT16_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = (x345|((x346<=x347)%x348));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	uint32_t x351 = 774365U;
	int16_t x352 = INT16_MIN;
	static int32_t t84 = -16639021;

	t84 = (x349|((x350<=x351)%x352));

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x354 = INT32_MAX;
	volatile int8_t x355 = INT8_MIN;

	t85 = (x353|((x354<=x355)%x356));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x357 = 263;
	int8_t x358 = INT8_MIN;
	int64_t x359 = INT64_MAX;
	static volatile int64_t t86 = -42LL;

	t86 = (x357|((x358<=x359)%x360));

	if (t86 != 263LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x362 = 2937853635110314750LLU;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MAX;
	static int32_t t87 = 4;

	t87 = (x361|((x362<=x363)%x364));

	if (t87 != -73) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x366 = -1522;
	volatile int32_t t88 = -32855584;

	t88 = (x365|((x366<=x367)%x368));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x370 = -1;
	int64_t x371 = INT64_MIN;
	int32_t t89 = -246185;

	t89 = (x369|((x370<=x371)%x372));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = UINT8_MAX;
	uint8_t x375 = UINT8_MAX;
	uint8_t x376 = UINT8_MAX;

	t90 = (x373|((x374<=x375)%x376));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x377 = 115976012026LLU;
	int16_t x378 = INT16_MAX;
	int16_t x380 = -50;

	t91 = (x377|((x378<=x379)%x380));

	if (t91 != 115976012026LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x381 = -1;
	static int32_t x382 = -1;
	int64_t x383 = -1LL;
	uint8_t x384 = 75U;
	int32_t t92 = -1;

	t92 = (x381|((x382<=x383)%x384));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = 2818851004428LLU;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = INT32_MIN;
	uint8_t x388 = UINT8_MAX;
	uint64_t t93 = 1068LLU;

	t93 = (x385|((x386<=x387)%x388));

	if (t93 != 2818851004428LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x389 = UINT8_MAX;
	static volatile int64_t x390 = INT64_MIN;
	volatile int64_t x391 = -58887646415667430LL;
	int64_t x392 = INT64_MIN;
	static volatile int64_t t94 = 27999997062759LL;

	t94 = (x389|((x390<=x391)%x392));

	if (t94 != 255LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = -1;
	static volatile int32_t x394 = INT32_MAX;
	int64_t x395 = INT64_MIN;
	static int32_t x396 = -1;
	volatile int32_t t95 = -1;

	t95 = (x393|((x394<=x395)%x396));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = -3;
	volatile int32_t t96 = -225;

	t96 = (x397|((x398<=x399)%x400));

	if (t96 != -3) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x403 = INT16_MIN;
	int16_t x404 = -14252;
	static int32_t t97 = -2115349;

	t97 = (x401|((x402<=x403)%x404));

	if (t97 != -14) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = -238938971;
	uint8_t x406 = 2U;
	int64_t x407 = -133350381081930LL;
	int8_t x408 = INT8_MAX;

	t98 = (x405|((x406<=x407)%x408));

	if (t98 != -238938971) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = -289062;
	int64_t x410 = -1038056009699328411LL;
	uint8_t x411 = 0U;
	uint64_t x412 = UINT64_MAX;
	uint64_t t99 = 7034793217716831LLU;

	t99 = (x409|((x410<=x411)%x412));

	if (t99 != 18446744073709262555LLU) { NG(); } else { ; }
	
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

