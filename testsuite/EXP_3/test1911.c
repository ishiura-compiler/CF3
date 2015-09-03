#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 25970914;
volatile uint32_t x17 = 60280U;
int64_t x19 = INT64_MAX;
int8_t x20 = 10;
int64_t t4 = -12158LL;
volatile int16_t x30 = -1;
volatile int32_t t6 = 9925374;
int64_t x44 = INT64_MAX;
int64_t x47 = 501628600947LL;
int8_t x49 = -18;
int64_t x51 = -1LL;
volatile int64_t t13 = -447438LL;
static int32_t t15 = 29990469;
int64_t x70 = 2797704LL;
static uint32_t x77 = 192281U;
int64_t x85 = -13641815LL;
int64_t x89 = -1LL;
uint64_t x99 = UINT64_MAX;
uint64_t t22 = 70459875LLU;
static volatile int16_t x101 = INT16_MIN;
volatile int32_t x108 = INT32_MAX;
uint64_t t25 = 59LLU;
uint64_t x114 = 440LLU;
uint8_t x119 = 5U;
int16_t x124 = -17;
static volatile uint64_t t29 = 53163939671312LLU;
int16_t x130 = INT16_MIN;
uint32_t x135 = 86U;
volatile uint32_t x144 = 1U;
uint32_t t33 = 23U;
static int32_t x147 = INT32_MIN;
int16_t x150 = -1864;
int16_t x155 = INT16_MIN;
int8_t x156 = INT8_MIN;
uint8_t x160 = 5U;
uint64_t t38 = 3534506705LLU;
volatile uint64_t t39 = 14049708520662LLU;
int32_t x169 = 96258174;
uint8_t x174 = 48U;
uint32_t x177 = 376298U;
static volatile uint64_t t42 = UINT64_MAX;
int16_t x187 = INT16_MIN;
int64_t x188 = INT64_MIN;
static int8_t x190 = INT8_MAX;
static int32_t x199 = INT32_MIN;
int64_t x205 = 9381445323LL;
int16_t x209 = INT16_MIN;
static int8_t x210 = INT8_MAX;
int16_t x211 = -1;
static int32_t t50 = 13155;
int64_t x213 = -1LL;
static uint64_t x214 = UINT64_MAX;
int32_t x215 = -240226;
int8_t x224 = -1;
int64_t x230 = -1LL;
volatile uint32_t x234 = 6U;
volatile int16_t x236 = INT16_MIN;
uint16_t x241 = 0U;
static int32_t t59 = 1;
int64_t x251 = -1LL;
volatile int64_t x252 = INT64_MIN;
static int64_t t60 = 898LL;
volatile int8_t x253 = -44;
int64_t x255 = -451398084593LL;
uint32_t x266 = UINT32_MAX;
int16_t x271 = 978;
static int16_t x277 = INT16_MIN;
volatile int32_t x279 = -1;
volatile int64_t t68 = 115239LL;
int64_t x290 = 121256734497291LL;
uint64_t x300 = 343757LLU;
int16_t x301 = INT16_MIN;
uint16_t x310 = UINT16_MAX;
uint64_t x311 = UINT64_MAX;
static int16_t x312 = INT16_MIN;
int64_t x318 = 30939553482016LL;
static int16_t x322 = INT16_MIN;
int8_t x332 = INT8_MIN;
int8_t x336 = INT8_MIN;
volatile uint64_t t82 = UINT64_MAX;
int16_t x341 = INT16_MAX;
volatile uint64_t x345 = 12LLU;
volatile int64_t x361 = -1LL;
uint64_t x362 = UINT64_MAX;
static uint8_t x363 = 0U;
int8_t x375 = INT8_MIN;
uint64_t x376 = 900268894467557865LLU;
int16_t x377 = INT16_MIN;
uint16_t x380 = UINT16_MAX;
volatile int32_t t92 = 83663857;
int64_t x383 = INT64_MIN;
int8_t x385 = -40;
int32_t x390 = -10;
volatile int64_t x399 = INT64_MIN;
uint64_t x401 = 0LLU;
uint16_t x402 = UINT16_MAX;
volatile int16_t x404 = INT16_MAX;
volatile int16_t x405 = 0;


void f0(void) {
	static int16_t x5 = 5192;
	static uint32_t x6 = 263296713U;
	int8_t x7 = INT8_MIN;
	int16_t x8 = 4;
	static uint32_t t0 = 130931U;

	t0 = ((x5/x6)^(x7|x8));

	if (t0 != 4294967172U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MAX;
	static uint16_t x10 = 15U;
	uint8_t x11 = 5U;
	int32_t x12 = -1;

	t1 = ((x9/x10)^(x11|x12));

	if (t1 != -9) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	int8_t x16 = INT8_MAX;
	int32_t t2 = -18017601;

	t2 = ((x13/x14)^(x15|x16));

	if (t2 != 16809983) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x18 = 969216964U;
	volatile int64_t t3 = INT64_MAX;

	t3 = ((x17/x18)^(x19|x20));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1596;
	uint8_t x22 = UINT8_MAX;
	int64_t x23 = -60948418760LL;
	int8_t x24 = INT8_MAX;

	t4 = ((x21/x22)^(x23|x24));

	if (t4 != 60948418693LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -17703935;
	volatile uint16_t x26 = 57U;
	static int8_t x27 = -1;
	int32_t x28 = INT32_MIN;
	int32_t t5 = -65;

	t5 = ((x25/x26)^(x27|x28));

	if (t5 != 310594) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 0U;
	uint16_t x31 = 5U;
	static int32_t x32 = -1883;

	t6 = ((x29/x30)^(x31|x32));

	if (t6 != -1883) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 1;
	int8_t x34 = INT8_MIN;
	static int8_t x35 = 13;
	volatile int64_t x36 = INT64_MIN;
	int64_t t7 = -1LL;

	t7 = ((x33/x34)^(x35|x36));

	if (t7 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	int32_t x38 = 1898;
	uint16_t x39 = 1U;
	int32_t x40 = -54857;
	volatile int32_t t8 = 1564;

	t8 = ((x37/x38)^(x39|x40));

	if (t8 != -54857) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = -53485LL;
	uint8_t x42 = 1U;
	volatile int8_t x43 = INT8_MIN;
	static volatile int64_t t9 = 14655581300330337LL;

	t9 = ((x41/x42)^(x43|x44));

	if (t9 != 53484LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = 0LLU;
	int64_t x46 = -1LL;
	static int64_t x48 = INT64_MAX;
	uint64_t t10 = 361547537004LLU;

	t10 = ((x45/x46)^(x47|x48));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MIN;
	volatile int32_t x52 = INT32_MAX;
	int64_t t11 = 15LL;

	t11 = ((x49/x50)^(x51|x52));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -128571323324347324LL;
	uint64_t x54 = UINT64_MAX;
	static int16_t x55 = -1;
	volatile int32_t x56 = -1;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x53/x54)^(x55|x56));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MIN;
	int32_t x59 = -1;
	int8_t x60 = -1;

	t13 = ((x57/x58)^(x59|x60));

	if (t13 != 72057594037927934LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	static volatile int32_t x62 = INT32_MIN;
	uint16_t x63 = 1262U;
	volatile int32_t x64 = INT32_MIN;
	int64_t t14 = -46LL;

	t14 = ((x61/x62)^(x63|x64));

	if (t14 != -6442449682LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	volatile int16_t x66 = INT16_MIN;
	uint16_t x67 = 9U;
	int8_t x68 = INT8_MIN;

	t15 = ((x65/x66)^(x67|x68));

	if (t15 != 118) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x71 = 6781444754375669LLU;
	uint8_t x72 = 122U;
	volatile uint64_t t16 = 2651430278LLU;

	t16 = ((x69/x70)^(x71|x72));

	if (t16 != 18439962628955176702LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 18699352428LLU;
	static int64_t x74 = -104LL;
	uint16_t x75 = 3U;
	uint16_t x76 = 5U;
	uint64_t t17 = 1816632853955630012LLU;

	t17 = ((x73/x74)^(x75|x76));

	if (t17 != 7LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x78 = 9880U;
	int16_t x79 = INT16_MIN;
	static volatile int64_t x80 = INT64_MIN;
	int64_t t18 = -448495LL;

	t18 = ((x77/x78)^(x79|x80));

	if (t18 != -32749LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MAX;
	volatile int32_t x82 = INT32_MIN;
	uint32_t x83 = 1552527963U;
	volatile uint32_t x84 = 2161U;
	uint32_t t19 = 12484933U;

	t19 = ((x81/x82)^(x83|x84));

	if (t19 != 1552530043U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x86 = 375U;
	int64_t x87 = INT64_MIN;
	volatile int64_t x88 = -44434537217040487LL;
	volatile int64_t t20 = -19075752671792505LL;

	t20 = ((x85/x86)^(x87|x88));

	if (t20 != 44434537217011327LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x90 = 45158222U;
	int64_t x91 = 2851102688879891187LL;
	uint16_t x92 = 1161U;
	volatile int64_t t21 = 4011LL;

	t21 = ((x89/x90)^(x91|x92));

	if (t21 != 2851102688879892219LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = -15;
	volatile uint64_t x98 = 493LLU;
	volatile int16_t x100 = 401;

	t22 = ((x97/x98)^(x99|x100));

	if (t22 != 18409326742931236095LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x102 = INT64_MIN;
	int64_t x103 = -23LL;
	volatile uint32_t x104 = 27744U;
	int64_t t23 = 114576344314LL;

	t23 = ((x101/x102)^(x103|x104));

	if (t23 != -23LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -3534749545588093155LL;
	volatile uint32_t x107 = 26057U;
	volatile int64_t t24 = -1458LL;

	t24 = ((x105/x106)^(x107|x108));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 1019U;
	uint64_t x110 = UINT64_MAX;
	volatile int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MIN;

	t25 = ((x109/x110)^(x111|x112));

	if (t25 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	static int16_t x115 = -1;
	uint16_t x116 = 17359U;
	volatile uint64_t t26 = 1683937709619008634LLU;

	t26 = ((x113/x114)^(x115|x116));

	if (t26 != 18425781864534881670LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 168721U;
	int64_t x118 = -1LL;
	volatile int32_t x120 = INT32_MIN;
	volatile int64_t t27 = -412257823LL;

	t27 = ((x117/x118)^(x119|x120));

	if (t27 != 2147314922LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	int64_t t28 = -1193LL;

	t28 = ((x121/x122)^(x123|x124));

	if (t28 != -72057594037927953LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -1;
	static int64_t x126 = -1LL;
	uint64_t x127 = UINT64_MAX;
	uint64_t x128 = UINT64_MAX;

	t29 = ((x125/x126)^(x127|x128));

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = INT64_MIN;
	int64_t x131 = 34119485335992LL;
	int16_t x132 = -1;
	int64_t t30 = -265966770003347LL;

	t30 = ((x129/x130)^(x131|x132));

	if (t30 != -281474976710657LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	int8_t x136 = INT8_MIN;
	volatile int64_t t31 = -41LL;

	t31 = ((x133/x134)^(x135|x136));

	if (t31 != 4294967255LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = -15840;
	static int32_t x138 = INT32_MIN;
	uint8_t x139 = 1U;
	int32_t x140 = 1;
	volatile int32_t t32 = 712877816;

	t32 = ((x137/x138)^(x139|x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = 1;
	int32_t x143 = INT32_MIN;

	t33 = ((x141/x142)^(x143|x144));

	if (t33 != 2147483902U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	int64_t x146 = -920611080314412LL;
	volatile uint8_t x148 = 3U;
	int64_t t34 = 1087673711292LL;

	t34 = ((x145/x146)^(x147|x148));

	if (t34 != 2147473629LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	volatile uint8_t x151 = 24U;
	static uint8_t x152 = UINT8_MAX;
	volatile int32_t t35 = -233637;

	t35 = ((x149/x150)^(x151|x152));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	uint64_t x154 = 876213566774087LLU;
	uint64_t t36 = 133265409135487LLU;

	t36 = ((x153/x154)^(x155|x156));

	if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	int64_t x158 = 44LL;
	int8_t x159 = INT8_MIN;
	volatile int64_t t37 = 735846011011017LL;

	t37 = ((x157/x158)^(x159|x160));

	if (t37 != -97612840LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x161 = -1;
	uint64_t x162 = 64720LLU;
	int32_t x163 = INT32_MIN;
	int32_t x164 = 2110478;

	t38 = ((x161/x162)^(x163|x164));

	if (t38 != 18446459050182509519LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 54370317286LLU;
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = 16;
	int16_t x168 = 0;

	t39 = ((x165/x166)^(x167|x168));

	if (t39 != 16LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x170 = 270U;
	static int16_t x171 = 0;
	volatile uint16_t x172 = 84U;
	int32_t t40 = 442265;

	t40 = ((x169/x170)^(x171|x172));

	if (t40 != 356555) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -1;
	int8_t x175 = -1;
	volatile int64_t x176 = INT64_MAX;
	int64_t t41 = 46629298047760LL;

	t41 = ((x173/x174)^(x175|x176));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x178 = 313468401U;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MIN;

	t42 = ((x177/x178)^(x179|x180));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = -1;
	static int64_t x182 = -2LL;
	static uint16_t x183 = UINT16_MAX;
	int8_t x184 = -1;
	volatile int64_t t43 = 24146063345289447LL;

	t43 = ((x181/x182)^(x183|x184));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = 6417LLU;
	volatile int64_t x186 = 372153800787249LL;
	uint64_t t44 = 97007481769175545LLU;

	t44 = ((x185/x186)^(x187|x188));

	if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	static uint8_t x191 = 74U;
	static int16_t x192 = INT16_MAX;
	int32_t t45 = 0;

	t45 = ((x189/x190)^(x191|x192));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MAX;
	static volatile int32_t x194 = -1;
	static uint8_t x195 = UINT8_MAX;
	static volatile int16_t x196 = -13;
	volatile int32_t t46 = -19651127;

	t46 = ((x193/x194)^(x195|x196));

	if (t46 != 126) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x197 = -1;
	int64_t x198 = 5367127821777964LL;
	static int32_t x200 = -2383;
	static volatile int64_t t47 = -1510LL;

	t47 = ((x197/x198)^(x199|x200));

	if (t47 != -2383LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 28U;
	int8_t x204 = INT8_MIN;
	volatile uint32_t t48 = 1093U;

	t48 = ((x201/x202)^(x203|x204));

	if (t48 != 4294967197U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x206 = INT64_MIN;
	static int32_t x207 = -15822687;
	uint64_t x208 = UINT64_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x205/x206)^(x207|x208));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x212 = UINT16_MAX;

	t50 = ((x209/x210)^(x211|x212));

	if (t50 != 257) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x216 = -110877685411474LL;
	uint64_t t51 = 562798894144LLU;

	t51 = ((x213/x214)^(x215|x216));

	if (t51 != 18446744073709475327LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x217 = -1;
	uint8_t x218 = 6U;
	int16_t x219 = INT16_MIN;
	volatile int16_t x220 = -1;
	int32_t t52 = 511;

	t52 = ((x217/x218)^(x219|x220));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 0U;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MAX;
	volatile int64_t t53 = 2214348184LL;

	t53 = ((x221/x222)^(x223|x224));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = -1;
	static int64_t x226 = 4278545433685397LL;
	uint8_t x227 = 1U;
	static int16_t x228 = -1;
	int64_t t54 = -1381539207807LL;

	t54 = ((x225/x226)^(x227|x228));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -710;
	int16_t x231 = 1874;
	int16_t x232 = 12762;
	int64_t t55 = 14702790170868LL;

	t55 = ((x229/x230)^(x231|x232));

	if (t55 != 13596LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x233 = 34492878LLU;
	volatile int64_t x235 = -380970715289572433LL;
	volatile uint64_t t56 = 6083199256140934811LLU;

	t56 = ((x233/x234)^(x235|x236));

	if (t56 != 18446744073703789538LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MAX;
	uint64_t x238 = 163247480LLU;
	uint64_t x239 = 2158899LLU;
	static int8_t x240 = INT8_MIN;
	volatile uint64_t t57 = 32873741710LLU;

	t57 = ((x237/x238)^(x239|x240));

	if (t57 != 18446744017210229087LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = -1;
	uint8_t x243 = 6U;
	int32_t x244 = -1;
	int32_t t58 = 3293737;

	t58 = ((x241/x242)^(x243|x244));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MAX;
	int8_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = -622;

	t59 = ((x245/x246)^(x247|x248));

	if (t59 != 638) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x249 = INT32_MIN;
	static volatile int16_t x250 = INT16_MIN;

	t60 = ((x249/x250)^(x251|x252));

	if (t60 != -65537LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x254 = UINT32_MAX;
	int8_t x256 = INT8_MAX;
	int64_t t61 = -20422169800970113LL;

	t61 = ((x253/x254)^(x255|x256));

	if (t61 != -451398084481LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = INT8_MIN;
	static volatile uint16_t x258 = 1003U;
	int64_t x259 = -1LL;
	int16_t x260 = INT16_MIN;
	int64_t t62 = -5740171896868LL;

	t62 = ((x257/x258)^(x259|x260));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = 247U;
	int8_t x263 = -1;
	int32_t x264 = INT32_MAX;
	int32_t t63 = 24;

	t63 = ((x261/x262)^(x263|x264));

	if (t63 != 8694264) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 3U;
	static int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	static uint32_t t64 = 156072U;

	t64 = ((x265/x266)^(x267|x268));

	if (t64 != 4294967168U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 59U;
	int64_t x270 = -1LL;
	uint32_t x272 = UINT32_MAX;
	volatile int64_t t65 = 2022154494906254929LL;

	t65 = ((x269/x270)^(x271|x272));

	if (t65 != -4294967238LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MAX;
	volatile int64_t x274 = INT64_MAX;
	uint64_t x275 = 1697324LLU;
	int64_t x276 = -1LL;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x273/x274)^(x275|x276));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x278 = -1;
	static volatile uint32_t x280 = 15236U;
	static volatile uint32_t t67 = 744715774U;

	t67 = ((x277/x278)^(x279|x280));

	if (t67 != 4294934527U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = INT64_MIN;
	volatile int64_t x283 = INT64_MIN;
	static int32_t x284 = -82690;

	t68 = ((x281/x282)^(x283|x284));

	if (t68 != -82690LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x286 = INT8_MIN;
	uint8_t x287 = 1U;
	volatile int16_t x288 = INT16_MIN;
	volatile uint32_t t69 = 11993U;

	t69 = ((x285/x286)^(x287|x288));

	if (t69 != 4294934528U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = 19U;
	int64_t t70 = -12321LL;

	t70 = ((x289/x290)^(x291|x292));

	if (t70 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MIN;
	volatile uint8_t x296 = 101U;
	volatile int32_t t71 = 10;

	t71 = ((x293/x294)^(x295|x296));

	if (t71 != -32667) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x297 = 93;
	int16_t x298 = 1113;
	static int32_t x299 = INT32_MAX;
	volatile uint64_t t72 = 754252LLU;

	t72 = ((x297/x298)^(x299|x300));

	if (t72 != 2147483647LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x302 = UINT8_MAX;
	volatile int32_t x303 = INT32_MIN;
	static int32_t x304 = INT32_MAX;
	int32_t t73 = 258052492;

	t73 = ((x301/x302)^(x303|x304));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x305 = 477U;
	int32_t x306 = INT32_MIN;
	static int8_t x307 = INT8_MAX;
	volatile int16_t x308 = 2;
	volatile uint32_t t74 = 33U;

	t74 = ((x305/x306)^(x307|x308));

	if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 501U;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x309/x310)^(x311|x312));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = 1;
	int32_t x314 = 184664718;
	static int32_t x315 = INT32_MAX;
	static int32_t x316 = -13738513;
	static volatile int32_t t76 = 172;

	t76 = ((x313/x314)^(x315|x316));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MIN;
	int8_t x319 = -1;
	int8_t x320 = INT8_MIN;
	int64_t t77 = -150577410580241LL;

	t77 = ((x317/x318)^(x319|x320));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = 110U;
	static int16_t x323 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	static uint32_t t78 = 18657884U;

	t78 = ((x321/x322)^(x323|x324));

	if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = 0;
	volatile int8_t x326 = INT8_MAX;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = 3310219;
	uint64_t t79 = UINT64_MAX;

	t79 = ((x325/x326)^(x327|x328));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x329 = INT64_MAX;
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = INT16_MAX;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x329/x330)^(x331|x332));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x333 = INT32_MIN;
	static uint8_t x334 = 11U;
	volatile uint16_t x335 = 44U;
	static int32_t t81 = 1008420;

	t81 = ((x333/x334)^(x335|x336));

	if (t81 != 195225834) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x337 = INT8_MAX;
	int32_t x338 = INT32_MIN;
	volatile int64_t x339 = -4098008498LL;
	volatile uint64_t x340 = UINT64_MAX;

	t82 = ((x337/x338)^(x339|x340));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x342 = 14U;
	volatile int64_t x343 = INT64_MIN;
	uint8_t x344 = 5U;
	static int64_t t83 = 2072185910LL;

	t83 = ((x341/x342)^(x343|x344));

	if (t83 != -9223372036854773471LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = 10;
	int64_t x347 = INT64_MAX;
	uint16_t x348 = 15151U;
	static volatile uint64_t t84 = 1943961LLU;

	t84 = ((x345/x346)^(x347|x348));

	if (t84 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x350 = 2335853189819285LLU;
	int64_t x351 = -841733609075204LL;
	volatile int8_t x352 = INT8_MAX;
	uint64_t t85 = 1203308358400271LLU;

	t85 = ((x349/x350)^(x351|x352));

	if (t85 != 18445902340100477734LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 51U;
	volatile int8_t x354 = -1;
	int32_t x355 = -1;
	int64_t x356 = INT64_MAX;
	volatile int64_t t86 = -655056391617LL;

	t86 = ((x353/x354)^(x355|x356));

	if (t86 != 50LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x357 = INT8_MIN;
	volatile int64_t x358 = -157643LL;
	static int16_t x359 = INT16_MIN;
	static int32_t x360 = -2081715;
	static volatile int64_t t87 = -9LL;

	t87 = ((x357/x358)^(x359|x360));

	if (t87 != -17331LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x364 = -86;
	volatile uint64_t t88 = 1LLU;

	t88 = ((x361/x362)^(x363|x364));

	if (t88 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = INT8_MIN;
	volatile int32_t x367 = 26850415;
	int16_t x368 = INT16_MIN;
	volatile int32_t t89 = 891796;

	t89 = ((x365/x366)^(x367|x368));

	if (t89 != -19089) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = -3;
	static volatile int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t90 = 23985528;

	t90 = ((x369/x370)^(x371|x372));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = 4;
	uint8_t x374 = UINT8_MAX;
	uint64_t t91 = 5327LLU;

	t91 = ((x373/x374)^(x375|x376));

	if (t91 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x378 = -32;
	int8_t x379 = INT8_MIN;

	t92 = ((x377/x378)^(x379|x380));

	if (t92 != -1025) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x381 = -1;
	int8_t x382 = INT8_MIN;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = ((x381/x382)^(x383|x384));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x386 = 109350965091049657LLU;
	uint8_t x387 = 1U;
	static uint64_t x388 = UINT64_MAX;
	static volatile uint64_t t94 = 33LLU;

	t94 = ((x385/x386)^(x387|x388));

	if (t94 != 18446744073709551447LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x389 = 112U;
	static int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	volatile int64_t t95 = -51637LL;

	t95 = ((x389/x390)^(x391|x392));

	if (t95 != 10LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = 1436134;
	int32_t x395 = 818;
	int32_t x396 = INT32_MIN;
	volatile int32_t t96 = 112501923;

	t96 = ((x393/x394)^(x395|x396));

	if (t96 != -2147482830) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = INT16_MIN;
	uint32_t x398 = 16U;
	volatile int8_t x400 = -1;
	int64_t t97 = -425146956781LL;

	t97 = ((x397/x398)^(x399|x400));

	if (t97 != -268433409LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x403 = 3;
	volatile uint64_t t98 = 3238LLU;

	t98 = ((x401/x402)^(x403|x404));

	if (t98 != 32767LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x406 = 52;
	static volatile int8_t x407 = 0;
	int16_t x408 = 1;
	volatile int32_t t99 = 41;

	t99 = ((x405/x406)^(x407|x408));

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

