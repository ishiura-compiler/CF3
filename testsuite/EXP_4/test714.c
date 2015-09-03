#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = 531U;
int64_t x11 = 3354LL;
uint8_t x21 = UINT8_MAX;
static uint32_t x25 = 117602221U;
volatile uint32_t x26 = 7278172U;
volatile int64_t t5 = -68701603146169725LL;
static int32_t x36 = INT32_MIN;
int8_t x38 = INT8_MIN;
volatile int32_t t7 = 0;
int64_t x41 = INT64_MAX;
volatile int8_t x45 = INT8_MAX;
static int64_t x46 = INT64_MAX;
int16_t x48 = -367;
volatile uint64_t t9 = 1400517LLU;
volatile uint8_t x52 = 2U;
int8_t x53 = INT8_MIN;
volatile int16_t x57 = -1;
static int64_t x60 = 432960LL;
uint8_t x63 = 2U;
volatile int8_t x64 = INT8_MIN;
volatile int32_t t13 = 4;
static uint64_t x72 = 122934LLU;
int64_t x83 = -656LL;
uint32_t x87 = UINT32_MAX;
int32_t x89 = 26671;
static uint16_t x90 = 1299U;
int64_t t20 = 2481078072217158860LL;
volatile uint64_t t21 = UINT64_MAX;
int64_t x103 = INT64_MIN;
uint32_t t23 = 11486U;
int8_t x109 = INT8_MAX;
volatile int8_t x124 = -1;
uint64_t t27 = 3970231015271121LLU;
uint16_t x126 = 25U;
int8_t x128 = -1;
volatile uint32_t x129 = 2744U;
int16_t x140 = 994;
int64_t x155 = INT64_MIN;
uint64_t x157 = 19295889311LLU;
int8_t x159 = 3;
volatile int8_t x160 = INT8_MIN;
int64_t x167 = INT64_MIN;
volatile int16_t x168 = INT16_MIN;
uint64_t x169 = 407733610LLU;
int32_t x170 = INT32_MIN;
int16_t x172 = INT16_MIN;
int16_t x180 = INT16_MIN;
int32_t x183 = -1;
volatile int32_t t40 = -5085526;
uint16_t x187 = 0U;
uint32_t t41 = 21254U;
uint16_t x194 = UINT16_MAX;
int8_t x198 = INT8_MIN;
uint8_t x201 = 11U;
volatile uint32_t x210 = 4U;
volatile uint32_t x211 = UINT32_MAX;
int32_t x215 = INT32_MIN;
int64_t t50 = -16746279019777LL;
uint32_t x226 = UINT32_MAX;
static int8_t x228 = 11;
volatile int32_t x229 = INT32_MIN;
int16_t x230 = INT16_MAX;
int8_t x231 = INT8_MIN;
uint64_t x236 = 380LLU;
volatile uint64_t t53 = 5749964LLU;
static int32_t x237 = INT32_MIN;
static int64_t x238 = -1LL;
static uint32_t x240 = 199U;
static volatile int64_t x244 = INT64_MAX;
volatile uint64_t t55 = 941635091353304LLU;
int8_t x245 = INT8_MAX;
uint32_t x260 = 7884092U;
volatile uint32_t t59 = 8974293U;
int16_t x261 = 1053;
int32_t x263 = 210;
uint16_t x272 = 5287U;
static int16_t x280 = INT16_MIN;
uint16_t x281 = 282U;
int8_t x294 = -1;
volatile uint8_t x295 = 0U;
volatile int32_t x298 = -135;
int64_t t67 = 84220LL;
int16_t x307 = -16257;
static volatile int64_t t69 = 12739363642LL;
volatile int16_t x320 = -1;
volatile uint64_t t72 = 19844LLU;
volatile int8_t x332 = INT8_MIN;
static volatile int64_t x344 = 330134956LL;
uint64_t t77 = UINT64_MAX;
int32_t x351 = -58878229;
uint64_t x356 = 5292388412LLU;
static volatile uint64_t x360 = 42768452630963304LLU;
uint64_t t81 = 1LLU;
volatile int16_t x362 = INT16_MIN;
static int8_t x364 = INT8_MIN;
int16_t x368 = INT16_MIN;
int8_t x370 = INT8_MAX;
volatile int64_t t84 = -361327LL;
uint64_t x373 = 185113813412725053LLU;
static uint8_t x375 = UINT8_MAX;
int64_t x379 = INT64_MIN;
uint8_t x381 = UINT8_MAX;
volatile int32_t x382 = 795;
int64_t x385 = 32LL;
int32_t x393 = -1;
static int64_t t90 = -29592295699LL;
uint32_t t91 = 462U;
static uint64_t x402 = 10598033342LLU;
static uint32_t x406 = 13057725U;
volatile uint64_t t93 = UINT64_MAX;
int8_t x418 = INT8_MAX;
uint32_t x425 = UINT32_MAX;
volatile uint32_t t99 = 11U;


void f0(void) {
	static int32_t x5 = INT32_MAX;
	int32_t x6 = -1;
	volatile int16_t x7 = -2;
	int32_t x8 = INT32_MIN;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x5|(x6*(x7%x8)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 581LL;
	int8_t x12 = INT8_MIN;
	volatile int64_t t1 = -352780859683336068LL;

	t1 = (x9|(x10*(x11%x12)));

	if (t1 != 14319LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	int64_t x18 = -33304390LL;
	int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	int64_t t2 = INT64_MIN;

	t2 = (x17|(x18*(x19%x20)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x22 = UINT16_MAX;
	static int16_t x23 = -1;
	int32_t x24 = INT32_MAX;
	int32_t t3 = -289199058;

	t3 = (x21|(x22*(x23%x24)));

	if (t3 != -65281) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x27 = INT64_MAX;
	volatile int8_t x28 = INT8_MIN;
	volatile int64_t t4 = 2665820LL;

	t4 = (x25|(x26*(x27%x28)));

	if (t4 != 924483501LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MIN;
	int8_t x30 = -47;
	uint32_t x31 = 1562024865U;
	int32_t x32 = -3351130;

	t5 = (x29|(x30*(x31%x32)));

	if (t5 != -9223372032960533135LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = 11916;
	int16_t x35 = INT16_MAX;
	int32_t t6 = -15;

	t6 = (x33|(x34*(x35%x36)));

	if (t6 != -11916) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = UINT8_MAX;
	static int32_t x39 = -1;
	int8_t x40 = INT8_MAX;

	t7 = (x37|(x38*(x39%x40)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x42 = INT16_MIN;
	static uint16_t x43 = UINT16_MAX;
	static int64_t x44 = -658LL;
	static int64_t t8 = -7596LL;

	t8 = (x41|(x42*(x43%x44)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x47 = UINT64_MAX;

	t9 = (x45|(x46*(x47%x48)));

	if (t9 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = -1955857900193870121LL;
	static volatile int8_t x50 = -48;
	uint8_t x51 = 4U;
	int64_t t10 = 1725968LL;

	t10 = (x49|(x50*(x51%x52)));

	if (t10 != -1955857900193870121LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = 0;
	int8_t x56 = INT8_MIN;
	volatile int32_t t11 = -1814;

	t11 = (x53|(x54*(x55%x56)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = 126;
	int16_t x59 = INT16_MIN;
	int64_t t12 = -2LL;

	t12 = (x57|(x58*(x59%x60)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x61 = 1281U;
	int8_t x62 = -5;

	t13 = (x61|(x62*(x63%x64)));

	if (t13 != -9) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = 1378LL;
	uint16_t x67 = UINT16_MAX;
	uint16_t x68 = 141U;
	int64_t t14 = -2LL;

	t14 = (x65|(x66*(x67%x68)));

	if (t14 != -10882LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	volatile uint64_t t15 = 155LLU;

	t15 = (x69|(x70*(x71%x72)));

	if (t15 != 18446744073709092991LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x77|(x78*(x79%x80)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x81 = 17U;
	int8_t x82 = INT8_MAX;
	uint64_t x84 = 788794917740LLU;
	uint64_t t17 = 5264748495062318939LLU;

	t17 = (x81|(x82*(x83%x84)));

	if (t17 != 41370304645561LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x85 = 4U;
	int16_t x86 = 0;
	int32_t x88 = -190775641;
	static uint32_t t18 = 469207039U;

	t18 = (x85|(x86*(x87%x88)));

	if (t18 != 4U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x91 = UINT32_MAX;
	uint16_t x92 = 6610U;
	volatile uint32_t t19 = 167375U;

	t19 = (x89|(x90*(x91%x92)));

	if (t19 != 1077119U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = INT8_MIN;
	int8_t x94 = 23;
	static int64_t x95 = -1LL;
	int16_t x96 = 7445;

	t20 = (x93|(x94*(x95%x96)));

	if (t20 != -23LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x97 = UINT64_MAX;
	static int8_t x98 = 11;
	int32_t x99 = -53391;
	int32_t x100 = INT32_MIN;

	t21 = (x97|(x98*(x99%x100)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x101 = 1920U;
	int16_t x102 = -17;
	int64_t x104 = 3859879423116LL;
	volatile int64_t t22 = -7944LL;

	t22 = (x101|(x102*(x103%x104)));

	if (t22 != 17360865140644LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x105 = UINT8_MAX;
	int16_t x106 = 329;
	uint32_t x107 = 184U;
	int16_t x108 = 783;

	t23 = (x105|(x106*(x107%x108)));

	if (t23 != 60671U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x110 = INT8_MAX;
	static int16_t x111 = -1399;
	int32_t x112 = -1;
	int32_t t24 = 29;

	t24 = (x109|(x110*(x111%x112)));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x113 = 2U;
	static uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 6U;
	static uint32_t x116 = UINT32_MAX;
	volatile uint32_t t25 = 854488U;

	t25 = (x113|(x114*(x115%x116)));

	if (t25 != 393210U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = INT8_MIN;
	int16_t x118 = -1;
	static int8_t x119 = 2;
	int64_t x120 = INT64_MIN;
	static int64_t t26 = 0LL;

	t26 = (x117|(x118*(x119%x120)));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = 1LL;
	static volatile int32_t x122 = INT32_MIN;
	static uint64_t x123 = 1681134084381628638LLU;

	t27 = (x121|(x122*(x123%x124)));

	if (t27 != 9822583407018770433LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = INT16_MIN;
	static volatile uint16_t x127 = 1U;
	int32_t t28 = 24892;

	t28 = (x125|(x126*(x127%x128)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 930445U;
	uint64_t x132 = 20331898958592220LLU;
	volatile uint64_t t29 = 7223372089LLU;

	t29 = (x129|(x130*(x131%x132)));

	if (t29 != 9223372036854778552LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = -1;
	int16_t x138 = INT16_MAX;
	uint16_t x139 = UINT16_MAX;
	static volatile int32_t t30 = 163880072;

	t30 = (x137|(x138*(x139%x140)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -1;
	int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MAX;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x141|(x142*(x143%x144)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x145 = 0U;
	volatile uint64_t x146 = 140079973142LLU;
	static volatile int64_t x147 = INT64_MAX;
	int8_t x148 = INT8_MIN;
	volatile uint64_t t32 = 171024249389676465LLU;

	t32 = (x145|(x146*(x147%x148)));

	if (t32 != 17790156589034LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = INT64_MIN;
	static int32_t x156 = INT32_MIN;
	volatile int64_t t33 = 65450128LL;

	t33 = (x153|(x154*(x155%x156)));

	if (t33 != 4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x158 = INT8_MIN;
	volatile uint64_t t34 = 559575804203338LLU;

	t34 = (x157|(x158*(x159%x160)));

	if (t34 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x161 = 22U;
	volatile int16_t x162 = 54;
	static volatile int32_t x163 = -1;
	int16_t x164 = INT16_MIN;
	volatile int32_t t35 = -4050615;

	t35 = (x161|(x162*(x163%x164)));

	if (t35 != -34) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x165 = 54437LL;
	static uint16_t x166 = UINT16_MAX;
	int64_t t36 = 28612756921472LL;

	t36 = (x165|(x166*(x167%x168)));

	if (t36 != 54437LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x171 = INT16_MIN;
	volatile uint64_t t37 = 53LLU;

	t37 = (x169|(x170*(x171%x172)));

	if (t37 != 407733610LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = -6;
	int16_t x175 = 1002;
	uint64_t x176 = UINT64_MAX;
	uint64_t t38 = 918LLU;

	t38 = (x173|(x174*(x175%x176)));

	if (t38 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = -1;
	uint64_t x178 = 80845LLU;
	int64_t x179 = INT64_MAX;
	static volatile uint64_t t39 = UINT64_MAX;

	t39 = (x177|(x178*(x179%x180)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = 161U;
	static int16_t x182 = INT16_MIN;
	int16_t x184 = INT16_MAX;

	t40 = (x181|(x182*(x183%x184)));

	if (t40 != 32929) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	volatile uint32_t x186 = 3443U;
	int16_t x188 = INT16_MAX;

	t41 = (x185|(x186*(x187%x188)));

	if (t41 != 4294967168U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x189 = 0;
	uint64_t x190 = UINT64_MAX;
	static uint32_t x191 = 446846764U;
	volatile uint64_t x192 = 6LLU;
	volatile uint64_t t42 = 5243750087LLU;

	t42 = (x189|(x190*(x191%x192)));

	if (t42 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = -12;
	volatile int64_t x195 = -2LL;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t43 = 256774LL;

	t43 = (x193|(x194*(x195%x196)));

	if (t43 != -10LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -6923082373LL;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = 591;
	static int64_t t44 = -890LL;

	t44 = (x197|(x198*(x199%x200)));

	if (t44 != -66053LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x202 = INT8_MAX;
	int64_t x203 = 480928429187LL;
	int16_t x204 = INT16_MIN;
	int64_t t45 = 921044104LL;

	t45 = (x201|(x202*(x203%x204)));

	if (t45 != 3788031LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x205 = -1;
	int16_t x206 = -590;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t46 = -37816163;

	t46 = (x205|(x206*(x207%x208)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = 12U;
	volatile int8_t x212 = INT8_MAX;
	volatile uint32_t t47 = 21650386U;

	t47 = (x209|(x210*(x211%x212)));

	if (t47 != 60U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	uint64_t x216 = 1078655970051LLU;
	static uint64_t t48 = 318127151966LLU;

	t48 = (x213|(x214*(x215%x216)));

	if (t48 != 18444926042275676415LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = 0;
	int32_t x218 = -5629;
	uint16_t x219 = 46U;
	uint32_t x220 = 92219U;
	volatile uint32_t t49 = 8314428U;

	t49 = (x217|(x218*(x219%x220)));

	if (t49 != 4294708362U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = -4LL;
	static int16_t x223 = 6;
	int32_t x224 = INT32_MIN;

	t50 = (x221|(x222*(x223%x224)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x225 = -1;
	static int16_t x227 = 934;
	static uint32_t t51 = UINT32_MAX;

	t51 = (x225|(x226*(x227%x228)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x232 = UINT16_MAX;
	int32_t t52 = -1;

	t52 = (x229|(x230*(x231%x232)));

	if (t52 != -4194176) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 38U;
	uint32_t x234 = 6U;
	static int32_t x235 = 103999;

	t53 = (x233|(x234*(x235%x236)));

	if (t53 != 1590LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x239 = INT8_MIN;
	int64_t t54 = -28625LL;

	t54 = (x237|(x238*(x239%x240)));

	if (t54 != -117LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = 17034308LL;
	volatile int8_t x242 = 4;
	uint64_t x243 = 65384552621691669LLU;

	t55 = (x241|(x242*(x243%x244)));

	if (t55 != 261538210486938708LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x246 = -1;
	static int8_t x247 = 1;
	volatile uint32_t x248 = 2099U;
	uint32_t t56 = UINT32_MAX;

	t56 = (x245|(x246*(x247%x248)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = INT64_MIN;
	volatile int32_t x250 = -1;
	volatile uint64_t x251 = 186627478351043LLU;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t57 = 9212761562LLU;

	t57 = (x249|(x250*(x251%x252)));

	if (t57 != 18446557446231200573LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x253 = 204546888552428309LL;
	int32_t x254 = -953;
	volatile int16_t x255 = -339;
	int8_t x256 = INT8_MAX;
	int64_t t58 = -193LL;

	t58 = (x253|(x254*(x255%x256)));

	if (t58 != 204546888552497021LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 42U;
	int16_t x258 = 1820;
	int8_t x259 = 1;

	t59 = (x257|(x258*(x259%x260)));

	if (t59 != 1854U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x262 = INT8_MIN;
	int16_t x264 = INT16_MAX;
	static int32_t t60 = -265538984;

	t60 = (x261|(x262*(x263%x264)));

	if (t60 != -26851) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x269 = 0U;
	uint16_t x270 = 206U;
	uint8_t x271 = 0U;
	uint32_t t61 = 22U;

	t61 = (x269|(x270*(x271%x272)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = UINT64_MAX;
	static int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	int32_t x276 = 2468272;
	static uint64_t t62 = UINT64_MAX;

	t62 = (x273|(x274*(x275%x276)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = -1;
	volatile int64_t x278 = 85LL;
	int8_t x279 = INT8_MIN;
	volatile int64_t t63 = -3740180473LL;

	t63 = (x277|(x278*(x279%x280)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x282 = 187388U;
	uint16_t x283 = 3U;
	int8_t x284 = -1;
	volatile uint32_t t64 = 1U;

	t64 = (x281|(x282*(x283%x284)));

	if (t64 != 282U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 1U;
	volatile uint64_t x290 = 15579144723LLU;
	int64_t x291 = INT64_MAX;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t65 = 3LLU;

	t65 = (x289|(x290*(x291%x292)));

	if (t65 != 15009214453179293165LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x296 = INT8_MAX;
	static uint64_t t66 = UINT64_MAX;

	t66 = (x293|(x294*(x295%x296)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MAX;
	int64_t x299 = -1LL;
	int16_t x300 = 3;

	t67 = (x297|(x298*(x299%x300)));

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = 0;
	int16_t x302 = -1;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;
	uint32_t t68 = 2U;

	t68 = (x301|(x302*(x303%x304)));

	if (t68 != 128U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = 31161983U;
	int16_t x306 = -1;
	int64_t x308 = 30686200407375193LL;

	t69 = (x305|(x306*(x307%x308)));

	if (t69 != 31162367LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x313 = UINT8_MAX;
	volatile int16_t x314 = -1;
	static int32_t x315 = INT32_MIN;
	static uint32_t x316 = 1U;
	uint32_t t70 = 51782281U;

	t70 = (x313|(x314*(x315%x316)));

	if (t70 != 255U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x317 = 13U;
	int64_t x318 = INT64_MIN;
	static int32_t x319 = INT32_MIN;
	int64_t t71 = 7023842580134584LL;

	t71 = (x317|(x318*(x319%x320)));

	if (t71 != 13LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x321 = INT64_MAX;
	uint8_t x322 = 16U;
	uint8_t x323 = 75U;
	static uint64_t x324 = UINT64_MAX;

	t72 = (x321|(x322*(x323%x324)));

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = INT8_MIN;
	static volatile int64_t x326 = -317603883770LL;
	int8_t x327 = INT8_MIN;
	int8_t x328 = -1;
	static int64_t t73 = -3543970450854972794LL;

	t73 = (x325|(x326*(x327%x328)));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	int64_t t74 = 382315798831613LL;

	t74 = (x329|(x330*(x331%x332)));

	if (t74 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x333 = INT8_MAX;
	int64_t x334 = -1LL;
	static int8_t x335 = -1;
	static uint16_t x336 = 11129U;
	static int64_t t75 = 4416045418391859LL;

	t75 = (x333|(x334*(x335%x336)));

	if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x337 = UINT64_MAX;
	static int8_t x338 = -3;
	int32_t x339 = INT32_MIN;
	int16_t x340 = -56;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x337|(x338*(x339%x340)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x341 = UINT64_MAX;
	uint8_t x342 = 2U;
	static int32_t x343 = INT32_MIN;

	t77 = (x341|(x342*(x343%x344)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x345 = 5886287426864236537LLU;
	int64_t x346 = INT64_MAX;
	static int64_t x347 = -1LL;
	static volatile int8_t x348 = -1;
	volatile uint64_t t78 = 1111579590804LLU;

	t78 = (x345|(x346*(x347%x348)));

	if (t78 != 5886287426864236537LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	volatile int16_t x352 = 2828;
	static volatile int32_t t79 = -37202;

	t79 = (x349|(x350*(x351%x352)));

	if (t79 != -26496) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = -141;
	static uint64_t x354 = 7LLU;
	int32_t x355 = 3239837;
	uint64_t t80 = 85420401LLU;

	t80 = (x353|(x354*(x355%x356)));

	if (t80 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MAX;
	volatile int8_t x359 = -1;

	t81 = (x357|(x358*(x359%x360)));

	if (t81 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = INT32_MIN;
	int8_t x363 = INT8_MAX;
	volatile int32_t t82 = -11849595;

	t82 = (x361|(x362*(x363%x364)));

	if (t82 != -4161536) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x365 = UINT8_MAX;
	volatile int8_t x366 = 0;
	int64_t x367 = -1LL;
	int64_t t83 = -4400023419871998987LL;

	t83 = (x365|(x366*(x367%x368)));

	if (t83 != 255LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x369 = INT16_MAX;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = INT64_MIN;

	t84 = (x369|(x370*(x371%x372)));

	if (t84 != 545460846591LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x374 = UINT32_MAX;
	uint64_t x376 = UINT64_MAX;
	static uint64_t t85 = 29382904523622536LLU;

	t85 = (x373|(x374*(x375%x376)));

	if (t85 != 185114872869027645LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x377 = UINT16_MAX;
	volatile int8_t x378 = INT8_MIN;
	static volatile uint16_t x380 = 2709U;
	int64_t t86 = -9494655325501077LL;

	t86 = (x377|(x378*(x379%x380)));

	if (t86 != 65535LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x383 = 824;
	int8_t x384 = INT8_MAX;
	volatile int32_t t87 = 1767;

	t87 = (x381|(x382*(x383%x384)));

	if (t87 != 49407) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x386 = INT16_MIN;
	volatile int16_t x387 = -498;
	volatile int64_t x388 = INT64_MAX;
	static int64_t t88 = 769643514288383LL;

	t88 = (x385|(x386*(x387%x388)));

	if (t88 != 16318496LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MIN;
	uint64_t x390 = 30146211317312519LLU;
	volatile int64_t x391 = INT64_MAX;
	uint8_t x392 = 3U;
	volatile uint64_t t89 = 1456795LLU;

	t89 = (x389|(x390*(x391%x392)));

	if (t89 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x394 = INT8_MIN;
	volatile int64_t x395 = -1LL;
	static volatile int8_t x396 = 21;

	t90 = (x393|(x394*(x395%x396)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = -209;
	int8_t x398 = INT8_MIN;
	static volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = 299U;

	t91 = (x397|(x398*(x399%x400)));

	if (t91 != 4294967215U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = -122522;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = 1U;
	uint64_t t92 = 14326625LLU;

	t92 = (x401|(x402*(x403%x404)));

	if (t92 != 18446744073709429094LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x405 = UINT64_MAX;
	static int8_t x407 = INT8_MIN;
	int16_t x408 = INT16_MIN;

	t93 = (x405|(x406*(x407%x408)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = -1LL;
	int8_t x410 = 7;
	int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MIN;
	int64_t t94 = 985384LL;

	t94 = (x409|(x410*(x411%x412)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x413 = INT16_MAX;
	int8_t x414 = INT8_MIN;
	uint8_t x415 = 74U;
	static uint16_t x416 = 782U;
	volatile int32_t t95 = -4090;

	t95 = (x413|(x414*(x415%x416)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = 389U;
	uint16_t x419 = 9U;
	int32_t x420 = INT32_MAX;
	volatile uint32_t t96 = 13U;

	t96 = (x417|(x418*(x419%x420)));

	if (t96 != 1527U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = -1LL;
	static volatile int8_t x422 = 35;
	int64_t x423 = 27059872565331262LL;
	volatile int32_t x424 = INT32_MIN;
	int64_t t97 = -10398981042LL;

	t97 = (x421|(x422*(x423%x424)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x426 = -1LL;
	volatile uint16_t x427 = 60U;
	int8_t x428 = INT8_MIN;
	int64_t t98 = -3466015331871LL;

	t98 = (x425|(x426*(x427%x428)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x433 = 2U;
	uint8_t x434 = UINT8_MAX;
	int16_t x435 = -1084;
	int32_t x436 = INT32_MAX;

	t99 = (x433|(x434*(x435%x436)));

	if (t99 != 4294690878U) { NG(); } else { ; }
	
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

