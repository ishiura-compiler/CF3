#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = INT64_MIN;
int16_t x8 = -9;
int8_t x10 = -1;
uint32_t x15 = 11102780U;
volatile int8_t x21 = INT8_MAX;
volatile uint16_t x24 = UINT16_MAX;
uint32_t x35 = UINT32_MAX;
static volatile uint16_t x37 = 32296U;
int8_t x38 = -1;
static uint32_t x44 = UINT32_MAX;
static uint16_t x54 = UINT16_MAX;
static uint32_t x68 = 28111884U;
volatile int32_t t16 = -272;
int8_t x80 = INT8_MAX;
int32_t t20 = -706;
int32_t x85 = INT32_MIN;
volatile uint8_t x88 = UINT8_MAX;
int64_t x90 = INT64_MIN;
static uint16_t x97 = UINT16_MAX;
uint16_t x100 = 12802U;
volatile uint8_t x103 = 15U;
volatile int32_t x107 = -1;
uint64_t x109 = UINT64_MAX;
int64_t x111 = -5086242LL;
uint64_t t26 = 1005228034LLU;
volatile int16_t x123 = 0;
static int32_t x124 = -359;
int16_t x125 = -2;
uint8_t x126 = 0U;
int8_t x135 = INT8_MIN;
uint16_t x144 = 1357U;
int32_t x146 = 581042161;
volatile uint16_t x150 = 0U;
uint64_t x154 = UINT64_MAX;
int32_t x155 = INT32_MIN;
static int32_t x159 = -3;
volatile uint32_t t42 = 834256U;
int32_t t43 = -2;
volatile int32_t t44 = 132;
uint32_t x187 = 99722534U;
int16_t x192 = INT16_MAX;
int32_t t47 = 849065;
int32_t x198 = 970697365;
int16_t x201 = INT16_MIN;
static uint16_t x203 = UINT16_MAX;
uint32_t x204 = 385344035U;
volatile int64_t t51 = -7728388218LL;
volatile int8_t x214 = INT8_MIN;
int8_t x219 = INT8_MIN;
int8_t x220 = -1;
static int16_t x224 = INT16_MIN;
int64_t t54 = 327965573LL;
uint32_t x227 = UINT32_MAX;
int64_t x241 = INT64_MAX;
volatile int16_t x243 = 0;
static volatile int64_t x249 = INT64_MAX;
int64_t x251 = 508255622994LL;
volatile int64_t t61 = 249781LL;
static int64_t x256 = INT64_MIN;
volatile int8_t x257 = -1;
static int16_t x266 = -1;
volatile int8_t x276 = -14;
static int16_t x280 = 23;
int32_t x283 = INT32_MIN;
volatile int32_t t68 = -1;
int8_t x285 = -1;
uint64_t x288 = UINT64_MAX;
int32_t t69 = -2745;
static volatile int16_t x295 = -293;
int32_t t71 = -26356459;
uint64_t x301 = 43LLU;
int8_t x308 = -1;
int32_t x313 = INT32_MIN;
int32_t x314 = INT32_MIN;
volatile uint64_t x315 = 23458560LLU;
volatile int8_t x321 = INT8_MIN;
volatile int32_t x322 = INT32_MIN;
int64_t x326 = INT64_MIN;
uint32_t x328 = UINT32_MAX;
int32_t t81 = -118861;
volatile int16_t x337 = INT16_MIN;
volatile uint32_t x342 = UINT32_MAX;
int32_t x355 = INT32_MIN;
volatile int8_t x358 = INT8_MAX;
static int8_t x364 = -36;
uint32_t x368 = 1U;
int32_t t89 = 73363;
static int64_t x369 = INT64_MIN;
volatile int32_t t91 = 4898;
int8_t x379 = INT8_MAX;
int64_t t92 = -4LL;
int16_t x387 = INT16_MIN;
int32_t x388 = INT32_MAX;
uint32_t t97 = 17242U;
int32_t x402 = INT32_MAX;
uint32_t x403 = 1168733U;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	volatile uint32_t x2 = 2630U;
	uint16_t x3 = 239U;
	uint64_t x4 = 32210964492866LLU;
	volatile int64_t t0 = -4LL;

	t0 = (x1&(x2==(x3/x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 27U;
	static int32_t x7 = -1;
	volatile int32_t t1 = 29;

	t1 = (x5&(x6==(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1561613LL;
	int64_t x11 = INT64_MAX;
	int32_t x12 = 784;
	volatile int64_t t2 = 47189681971427836LL;

	t2 = (x9&(x10==(x11/x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	volatile int64_t x14 = INT64_MIN;
	uint8_t x16 = 2U;
	int32_t t3 = -521;

	t3 = (x13&(x14==(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = -1;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = 53768LL;
	static int32_t t4 = -972;

	t4 = (x17&(x18==(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x22 = INT8_MIN;
	uint32_t x23 = 1447239629U;
	int32_t t5 = -685209;

	t5 = (x21&(x22==(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = 1477255150406170LLU;
	int32_t x28 = -6498743;
	volatile int32_t t6 = 58944;

	t6 = (x25&(x26==(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MIN;
	volatile int64_t x31 = INT64_MIN;
	uint8_t x32 = 1U;
	int32_t t7 = 83228;

	t7 = (x29&(x30==(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -206933134530175459LL;
	int8_t x34 = INT8_MAX;
	static int8_t x36 = 3;
	int64_t t8 = 24895652911602155LL;

	t8 = (x33&(x34==(x35/x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x39 = UINT32_MAX;
	int16_t x40 = 1664;
	int32_t t9 = 64103584;

	t9 = (x37&(x38==(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int8_t x42 = -63;
	int64_t x43 = INT64_MIN;
	int32_t t10 = -51033312;

	t10 = (x41&(x42==(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	uint32_t x46 = 328370U;
	static int8_t x47 = INT8_MIN;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = 46236;

	t11 = (x45&(x46==(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = INT16_MAX;
	volatile int8_t x50 = INT8_MIN;
	volatile uint64_t x51 = 8244754388247886LLU;
	uint32_t x52 = 12675818U;
	int32_t t12 = 21511259;

	t12 = (x49&(x50==(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x55 = 3968U;
	static uint64_t x56 = 61622475573LLU;
	int32_t t13 = 938;

	t13 = (x53&(x54==(x55/x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 29U;
	int64_t x60 = 3370428064222017695LL;
	static int32_t t14 = 151128;

	t14 = (x57&(x58==(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = -1;
	int16_t x64 = 652;
	static volatile int32_t t15 = 506733;

	t15 = (x61&(x62==(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x66 = INT64_MAX;
	uint16_t x67 = 272U;

	t16 = (x65&(x66==(x67/x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	volatile int32_t x70 = INT32_MIN;
	volatile uint16_t x71 = 240U;
	uint8_t x72 = 4U;
	volatile int32_t t17 = 23585257;

	t17 = (x69&(x70==(x71/x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 12U;
	static int64_t x74 = 24635LL;
	uint32_t x75 = 1U;
	static int16_t x76 = -11;
	volatile int32_t t18 = -1032;

	t18 = (x73&(x74==(x75/x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile int8_t x78 = 0;
	static volatile int8_t x79 = INT8_MAX;
	volatile int32_t t19 = 66092;

	t19 = (x77&(x78==(x79/x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = 1;
	static uint32_t x82 = 2894U;
	static int64_t x83 = INT64_MIN;
	uint64_t x84 = 1381491447857398LLU;

	t20 = (x81&(x82==(x83/x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MIN;
	volatile int32_t t21 = 406210188;

	t21 = (x85&(x86==(x87/x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 10U;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = -222;
	int32_t t22 = -25;

	t22 = (x89&(x90==(x91/x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = -3;
	static volatile uint8_t x99 = 14U;
	int32_t t23 = -2;

	t23 = (x97&(x98==(x99/x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -5183486176LL;
	volatile uint64_t x102 = UINT64_MAX;
	volatile int64_t x104 = -1LL;
	static int64_t t24 = 965952LL;

	t24 = (x101&(x102==(x103/x104)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	uint8_t x106 = UINT8_MAX;
	static uint16_t x108 = 16085U;
	int32_t t25 = -54385;

	t25 = (x105&(x106==(x107/x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x110 = 3;
	int64_t x112 = 123LL;

	t26 = (x109&(x110==(x111/x112)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	int8_t x114 = INT8_MIN;
	volatile uint32_t x115 = UINT32_MAX;
	int16_t x116 = 16;
	int64_t t27 = 103536007879LL;

	t27 = (x113&(x114==(x115/x116)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = INT8_MIN;
	static uint32_t x118 = 17580406U;
	int32_t x119 = 25032;
	static int64_t x120 = INT64_MIN;
	int32_t t28 = -1922;

	t28 = (x117&(x118==(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 13663159956629LL;
	int64_t x122 = INT64_MIN;
	int64_t t29 = -3617020672585258LL;

	t29 = (x121&(x122==(x123/x124)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x127 = INT32_MIN;
	uint64_t x128 = 22398234091762822LLU;
	volatile int32_t t30 = 101878235;

	t30 = (x125&(x126==(x127/x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 284873891545477086LLU;
	static volatile int16_t x130 = -6251;
	static int64_t x131 = 823561458323LL;
	volatile int16_t x132 = -62;
	static uint64_t t31 = 3777083LLU;

	t31 = (x129&(x130==(x131/x132)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MAX;
	int64_t x134 = INT64_MAX;
	int16_t x136 = INT16_MIN;
	static int64_t t32 = -25921368LL;

	t32 = (x133&(x134==(x135/x136)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	int64_t x138 = -1808LL;
	int64_t x139 = -25585617674LL;
	uint32_t x140 = 63001403U;
	volatile int32_t t33 = -5994;

	t33 = (x137&(x138==(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 27U;
	static int32_t x142 = INT32_MAX;
	uint64_t x143 = UINT64_MAX;
	volatile int32_t t34 = 3;

	t34 = (x141&(x142==(x143/x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x145 = 53U;
	int8_t x147 = INT8_MAX;
	volatile uint16_t x148 = UINT16_MAX;
	int32_t t35 = 4356043;

	t35 = (x145&(x146==(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = -1;
	static int8_t x151 = -1;
	uint8_t x152 = UINT8_MAX;
	static int32_t t36 = -444889990;

	t36 = (x149&(x150==(x151/x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x153 = -19402;
	int16_t x156 = INT16_MAX;
	volatile int32_t t37 = -4109117;

	t37 = (x153&(x154==(x155/x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x157 = 127065U;
	uint32_t x158 = 3361U;
	int32_t x160 = -2;
	volatile uint32_t t38 = 9U;

	t38 = (x157&(x158==(x159/x160)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = 1;
	volatile int8_t x162 = 28;
	int64_t x163 = 250901LL;
	uint64_t x164 = 3912752849596LLU;
	volatile int32_t t39 = 120;

	t39 = (x161&(x162==(x163/x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = -1;
	static volatile int16_t x166 = -1;
	uint64_t x167 = 1803055127642399LLU;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t40 = -1029532;

	t40 = (x165&(x166==(x167/x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x169 = INT16_MAX;
	uint64_t x170 = 785938295615LLU;
	int16_t x171 = -1;
	int16_t x172 = 10;
	volatile int32_t t41 = -292039332;

	t41 = (x169&(x170==(x171/x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x173 = UINT32_MAX;
	static int64_t x174 = -15016871222314LL;
	int32_t x175 = INT32_MIN;
	static int32_t x176 = INT32_MIN;

	t42 = (x173&(x174==(x175/x176)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	static int32_t x178 = -41618;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MAX;

	t43 = (x177&(x178==(x179/x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x182 = -4047;
	uint8_t x183 = 35U;
	int8_t x184 = -1;

	t44 = (x181&(x182==(x183/x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = -3;
	static int32_t x186 = INT32_MIN;
	volatile uint8_t x188 = UINT8_MAX;
	static int32_t t45 = -35398;

	t45 = (x185&(x186==(x187/x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x189 = UINT8_MAX;
	uint64_t x190 = 193LLU;
	int8_t x191 = INT8_MIN;
	volatile int32_t t46 = 5155;

	t46 = (x189&(x190==(x191/x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x193 = -268;
	static volatile int64_t x194 = 10164LL;
	volatile uint16_t x195 = 510U;
	int16_t x196 = INT16_MIN;

	t47 = (x193&(x194==(x195/x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x197 = 2U;
	int32_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	int32_t t48 = -13787458;

	t48 = (x197&(x198==(x199/x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x202 = -1;
	int32_t t49 = 10270690;

	t49 = (x201&(x202==(x203/x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -52;
	int64_t x206 = 189070148LL;
	int8_t x207 = INT8_MAX;
	volatile int64_t x208 = INT64_MIN;
	int32_t t50 = 0;

	t50 = (x205&(x206==(x207/x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MAX;
	int64_t x212 = -1LL;

	t51 = (x209&(x210==(x211/x212)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = 1;
	volatile uint64_t x215 = 6899555715353966414LLU;
	static uint8_t x216 = UINT8_MAX;
	int32_t t52 = 2961;

	t52 = (x213&(x214==(x215/x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x218 = 121U;
	static volatile int64_t t53 = -2554541085588LL;

	t53 = (x217&(x218==(x219/x220)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MAX;
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;

	t54 = (x221&(x222==(x223/x224)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -102;
	int32_t x226 = INT32_MIN;
	uint16_t x228 = 12635U;
	static volatile int32_t t55 = -17199069;

	t55 = (x225&(x226==(x227/x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = -87;
	uint64_t x230 = 985858711LLU;
	uint64_t x231 = 3LLU;
	static uint32_t x232 = 61240020U;
	int32_t t56 = -3610;

	t56 = (x229&(x230==(x231/x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x233 = INT64_MIN;
	uint8_t x234 = 102U;
	static int32_t x235 = INT32_MAX;
	volatile int64_t x236 = INT64_MIN;
	int64_t t57 = -291461085289767271LL;

	t57 = (x233&(x234==(x235/x236)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	static int32_t x239 = -1;
	int8_t x240 = -57;
	int64_t t58 = 1389867038998LL;

	t58 = (x237&(x238==(x239/x240)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x242 = -674179472LL;
	uint16_t x244 = 29U;
	volatile int64_t t59 = -69495448756262845LL;

	t59 = (x241&(x242==(x243/x244)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x245 = UINT8_MAX;
	int32_t x246 = INT32_MAX;
	int16_t x247 = -1;
	int32_t x248 = INT32_MIN;
	static int32_t t60 = 40226;

	t60 = (x245&(x246==(x247/x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x250 = 38185U;
	static uint64_t x252 = 16498538255957LLU;

	t61 = (x249&(x250==(x251/x252)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 22679268291LLU;
	static uint8_t x254 = UINT8_MAX;
	int8_t x255 = -2;
	volatile uint64_t t62 = 37982269LLU;

	t62 = (x253&(x254==(x255/x256)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x258 = INT16_MIN;
	volatile int64_t x259 = -1LL;
	int8_t x260 = INT8_MAX;
	volatile int32_t t63 = 27;

	t63 = (x257&(x258==(x259/x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = UINT64_MAX;
	static uint8_t x262 = 62U;
	int8_t x263 = INT8_MAX;
	uint64_t x264 = 595054024649LLU;
	uint64_t t64 = 518415414LLU;

	t64 = (x261&(x262==(x263/x264)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	int32_t x267 = -1;
	volatile int16_t x268 = -1;
	int32_t t65 = 360761675;

	t65 = (x265&(x266==(x267/x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x273 = INT64_MAX;
	volatile int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MAX;
	static int64_t t66 = 1341522112LL;

	t66 = (x273&(x274==(x275/x276)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = 1;
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	int32_t t67 = 1;

	t67 = (x277&(x278==(x279/x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x281 = -1;
	static uint64_t x282 = UINT64_MAX;
	static int16_t x284 = 1;

	t68 = (x281&(x282==(x283/x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x286 = 870411248LLU;
	int64_t x287 = INT64_MIN;

	t69 = (x285&(x286==(x287/x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 63U;
	uint16_t x290 = 249U;
	int8_t x291 = INT8_MIN;
	int16_t x292 = -1;
	int32_t t70 = -5638;

	t70 = (x289&(x290==(x291/x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MAX;
	static uint32_t x296 = 5781U;

	t71 = (x293&(x294==(x295/x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x297 = INT16_MAX;
	uint64_t x298 = 64209LLU;
	uint8_t x299 = UINT8_MAX;
	static volatile int16_t x300 = 15;
	int32_t t72 = -1;

	t72 = (x297&(x298==(x299/x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x302 = -1LL;
	static int64_t x303 = INT64_MAX;
	int64_t x304 = 24LL;
	uint64_t t73 = 4303851352434911124LLU;

	t73 = (x301&(x302==(x303/x304)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = UINT16_MAX;
	static int16_t x306 = 1;
	int64_t x307 = INT64_MAX;
	int32_t t74 = -197722;

	t74 = (x305&(x306==(x307/x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = -1LL;
	int64_t x310 = -15164154224225638LL;
	volatile int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MIN;
	int64_t t75 = 617198762569606279LL;

	t75 = (x309&(x310==(x311/x312)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x316 = -1;
	volatile int32_t t76 = 3496;

	t76 = (x313&(x314==(x315/x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x317 = INT64_MIN;
	int64_t x318 = -159867615LL;
	int8_t x319 = -1;
	int16_t x320 = INT16_MAX;
	volatile int64_t t77 = 1LL;

	t77 = (x317&(x318==(x319/x320)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x323 = -1LL;
	static uint64_t x324 = 656LLU;
	volatile int32_t t78 = 0;

	t78 = (x321&(x322==(x323/x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	int32_t x327 = -267370955;
	int32_t t79 = -76;

	t79 = (x325&(x326==(x327/x328)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x329 = 3U;
	int8_t x330 = INT8_MIN;
	uint8_t x331 = 1U;
	static int16_t x332 = -182;
	int32_t t80 = 16;

	t80 = (x329&(x330==(x331/x332)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = 113U;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = -1;
	uint8_t x336 = 127U;

	t81 = (x333&(x334==(x335/x336)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x338 = 83;
	int64_t x339 = INT64_MAX;
	static int16_t x340 = 8053;
	static volatile int32_t t82 = -1020583;

	t82 = (x337&(x338==(x339/x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x341 = -1LL;
	int16_t x343 = INT16_MIN;
	static int16_t x344 = 3560;
	volatile int64_t t83 = -20964010375LL;

	t83 = (x341&(x342==(x343/x344)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = UINT16_MAX;
	int32_t x346 = -747976421;
	int8_t x347 = -1;
	int8_t x348 = -1;
	int32_t t84 = 2482534;

	t84 = (x345&(x346==(x347/x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x349 = -1;
	static volatile int64_t x350 = -1LL;
	uint32_t x351 = 43032U;
	int32_t x352 = INT32_MIN;
	volatile int32_t t85 = 3;

	t85 = (x349&(x350==(x351/x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x353 = 203384U;
	static volatile int64_t x354 = -1LL;
	int32_t x356 = INT32_MAX;
	volatile uint32_t t86 = 10U;

	t86 = (x353&(x354==(x355/x356)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = -6;
	int32_t x359 = 946;
	uint8_t x360 = 1U;
	static int32_t t87 = -434;

	t87 = (x357&(x358==(x359/x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	static volatile int8_t x362 = -3;
	static int16_t x363 = -407;
	volatile int32_t t88 = -909704370;

	t88 = (x361&(x362==(x363/x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = 2;
	static volatile int32_t x366 = INT32_MIN;
	static int32_t x367 = INT32_MAX;

	t89 = (x365&(x366==(x367/x368)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x370 = INT8_MIN;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = INT8_MIN;
	int64_t t90 = -413931429880LL;

	t90 = (x369&(x370==(x371/x372)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MIN;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = INT32_MIN;
	volatile uint16_t x376 = 6650U;

	t91 = (x373&(x374==(x375/x376)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = -50864112925143874LL;
	int8_t x378 = 3;
	uint64_t x380 = UINT64_MAX;

	t92 = (x377&(x378==(x379/x380)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MAX;
	static int16_t x383 = 7;
	static int16_t x384 = 1402;
	volatile int32_t t93 = -431461726;

	t93 = (x381&(x382==(x383/x384)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x385 = 1U;
	int16_t x386 = -1677;
	int32_t t94 = 30144398;

	t94 = (x385&(x386==(x387/x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = UINT64_MAX;
	static uint16_t x390 = 112U;
	int8_t x391 = INT8_MIN;
	uint16_t x392 = 6U;
	uint64_t t95 = 15174LLU;

	t95 = (x389&(x390==(x391/x392)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x394 = -43886077178999LL;
	uint16_t x395 = 76U;
	volatile int8_t x396 = INT8_MAX;
	static int32_t t96 = 36;

	t96 = (x393&(x394==(x395/x396)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = UINT32_MAX;
	static uint16_t x398 = 61U;
	static int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MIN;

	t97 = (x397&(x398==(x399/x400)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x401 = -797513121;
	static int32_t x404 = INT32_MIN;
	static int32_t t98 = 22;

	t98 = (x401&(x402==(x403/x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = -95;
	uint64_t x407 = UINT64_MAX;
	static int16_t x408 = -143;
	volatile int32_t t99 = 29907933;

	t99 = (x405&(x406==(x407/x408)));

	if (t99 != 0) { NG(); } else { ; }
	
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

