#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = -10722653;
int32_t x15 = INT32_MIN;
uint32_t x20 = UINT32_MAX;
int32_t x23 = 34964652;
int32_t t5 = -424529836;
uint32_t x27 = 420U;
int64_t x28 = INT64_MIN;
volatile int16_t x34 = 0;
uint32_t x36 = UINT32_MAX;
int32_t t8 = 222186;
volatile int32_t t9 = 206638;
int16_t x44 = 4874;
int64_t x45 = -7LL;
uint8_t x55 = 99U;
volatile int16_t x59 = -1;
volatile int8_t x60 = INT8_MAX;
int16_t x68 = -281;
volatile int32_t t15 = 1;
volatile int32_t x73 = INT32_MIN;
volatile int32_t t18 = 1;
int16_t x88 = 1516;
static volatile int32_t t19 = 1;
uint32_t x89 = 236U;
int64_t x93 = -6644LL;
uint16_t x102 = 9U;
int8_t x104 = -1;
uint32_t x108 = UINT32_MAX;
static int32_t t24 = -32332664;
volatile int32_t t25 = 11;
int64_t x115 = INT64_MIN;
int16_t x124 = INT16_MIN;
int64_t x126 = INT64_MIN;
int16_t x133 = INT16_MIN;
int8_t x142 = -15;
int32_t x144 = INT32_MIN;
int8_t x148 = INT8_MIN;
int64_t x150 = 1273470438LL;
volatile int32_t t34 = 69814;
uint32_t x155 = 14904676U;
volatile int64_t x157 = 3378820196745888158LL;
uint8_t x162 = 3U;
volatile int8_t x166 = INT8_MIN;
uint16_t x167 = 8U;
uint16_t x173 = UINT16_MAX;
uint64_t x176 = 5LLU;
uint32_t x177 = 5U;
int64_t x183 = -1554781972LL;
uint16_t x185 = UINT16_MAX;
int64_t x194 = 1LL;
static uint32_t x195 = UINT32_MAX;
static uint32_t x196 = 25769144U;
int32_t t44 = -15863;
static int32_t x199 = INT32_MIN;
int8_t x202 = INT8_MIN;
volatile int32_t t48 = 2;
int8_t x213 = INT8_MIN;
uint8_t x216 = UINT8_MAX;
int32_t x218 = -1;
int32_t x219 = INT32_MIN;
uint8_t x222 = 7U;
int32_t x228 = INT32_MIN;
volatile int32_t t52 = 56;
uint8_t x239 = UINT8_MAX;
volatile int32_t t55 = -49;
static int32_t t56 = 86237785;
static int16_t x260 = -1;
static uint64_t x263 = UINT64_MAX;
uint8_t x271 = 3U;
int64_t x272 = 29LL;
int32_t x278 = INT32_MIN;
int32_t t64 = -2;
static uint16_t x284 = 1U;
volatile uint8_t x285 = UINT8_MAX;
static int32_t x286 = INT32_MIN;
static int16_t x287 = -1;
static volatile int32_t t66 = -33;
int8_t x290 = INT8_MIN;
uint64_t x293 = 775739453871LLU;
static volatile int32_t t68 = -1;
int32_t t69 = 0;
int32_t t70 = 20170709;
static int32_t x305 = INT32_MIN;
volatile uint16_t x310 = UINT16_MAX;
int8_t x312 = INT8_MIN;
static volatile int32_t t73 = -31981987;
int32_t x318 = 3;
static volatile uint8_t x319 = 113U;
volatile int32_t t74 = 42196440;
int8_t x332 = INT8_MIN;
int16_t x342 = -1;
uint64_t x348 = 579459554073LLU;
volatile int32_t t81 = -208828448;
int64_t x353 = -1LL;
int32_t t85 = 684315;
static int16_t x370 = 498;
volatile uint64_t x372 = 2LLU;
int16_t x375 = INT16_MIN;
static int32_t t87 = -144;
volatile int64_t x382 = -1LL;
static int32_t x391 = 207639;
int32_t t91 = 51755740;
uint64_t x394 = 1734466435656935LLU;
int64_t x395 = 4757LL;
static volatile int64_t x402 = INT64_MAX;
static int32_t x403 = -228689;
uint64_t x408 = 13308LLU;
int8_t x411 = 2;
uint64_t x412 = UINT64_MAX;
int32_t t98 = 1;
volatile int32_t t99 = 7;


void f0(void) {
	volatile int16_t x1 = -1;
	volatile int32_t x2 = -1;
	int32_t x3 = 2;
	int16_t x4 = -1;
	volatile int32_t t0 = 38008;

	t0 = (x1==(x2&(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = -860720436050639257LL;
	int32_t x7 = -2;
	uint8_t x8 = 33U;
	volatile int32_t t1 = 5947;

	t1 = (x5==(x6&(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 45U;
	volatile int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	static int32_t t2 = 52199588;

	t2 = (x9==(x10&(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	volatile int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 1033698;

	t3 = (x13==(x14&(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MAX;
	int32_t x18 = 3296;
	static int16_t x19 = 232;
	volatile int32_t t4 = 254;

	t4 = (x17==(x18&(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	static uint64_t x24 = 33LLU;

	t5 = (x21==(x22&(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint64_t x26 = 955178LLU;
	volatile int32_t t6 = 573798050;

	t6 = (x25==(x26&(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	uint8_t x30 = 6U;
	uint32_t x31 = 37501U;
	static uint8_t x32 = UINT8_MAX;
	int32_t t7 = -578758;

	t7 = (x29==(x30&(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int32_t x35 = INT32_MIN;

	t8 = (x33==(x34&(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	int16_t x38 = 16092;
	uint16_t x39 = UINT16_MAX;
	int64_t x40 = 259758083321525344LL;

	t9 = (x37==(x38&(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -90487713282318LL;
	int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	int32_t t10 = -2;

	t10 = (x41==(x42&(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -583330;
	int8_t x47 = INT8_MAX;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = 66538468;

	t11 = (x45==(x46&(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = INT64_MAX;
	static int64_t x56 = -1LL;
	int32_t t12 = 109870;

	t12 = (x53==(x54&(x55/x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -4065;
	int8_t x58 = INT8_MAX;
	volatile int32_t t13 = -12678675;

	t13 = (x57==(x58&(x59/x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = UINT64_MAX;
	int64_t x62 = -483949774LL;
	static int8_t x63 = INT8_MAX;
	uint16_t x64 = UINT16_MAX;
	int32_t t14 = -152310342;

	t14 = (x61==(x62&(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint8_t x66 = 49U;
	int32_t x67 = -1;

	t15 = (x65==(x66&(x67/x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int64_t x70 = INT64_MIN;
	static int32_t x71 = INT32_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t16 = 128587;

	t16 = (x69==(x70&(x71/x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x74 = INT16_MIN;
	static volatile int64_t x75 = INT64_MAX;
	uint16_t x76 = 27U;
	int32_t t17 = 63;

	t17 = (x73==(x74&(x75/x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = UINT8_MAX;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MIN;

	t18 = (x77==(x78&(x79/x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	uint8_t x87 = 95U;

	t19 = (x85==(x86&(x87/x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = INT16_MAX;
	static int16_t x91 = 18;
	uint32_t x92 = 2565385U;
	int32_t t20 = -327060;

	t20 = (x89==(x90&(x91/x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = INT32_MAX;
	static int16_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	int32_t t21 = -15;

	t21 = (x93==(x94&(x95/x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 101U;
	int32_t x98 = -17;
	volatile uint16_t x99 = 4U;
	int16_t x100 = INT16_MAX;
	volatile int32_t t22 = 528227355;

	t22 = (x97==(x98&(x99/x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x101 = 0;
	int64_t x103 = 9499000197LL;
	volatile int32_t t23 = 124;

	t23 = (x101==(x102&(x103/x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x105 = 74U;
	uint16_t x106 = UINT16_MAX;
	volatile int32_t x107 = INT32_MIN;

	t24 = (x105==(x106&(x107/x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 62975409916866LLU;
	static volatile uint32_t x110 = 1229022U;
	static int64_t x111 = 28LL;
	int16_t x112 = -3;

	t25 = (x109==(x110&(x111/x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 3LLU;
	int64_t x114 = 10426734LL;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t26 = -14;

	t26 = (x113==(x114&(x115/x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = -1;
	int16_t x122 = -1136;
	int64_t x123 = -36604962LL;
	static volatile int32_t t27 = -15009421;

	t27 = (x121==(x122&(x123/x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x125 = UINT16_MAX;
	static volatile uint32_t x127 = 301U;
	int8_t x128 = INT8_MIN;
	int32_t t28 = -66062532;

	t28 = (x125==(x126&(x127/x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 13U;
	volatile int16_t x130 = INT16_MIN;
	static int16_t x131 = 3;
	int32_t x132 = INT32_MAX;
	volatile int32_t t29 = -8552;

	t29 = (x129==(x130&(x131/x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x134 = 570442004345822LL;
	int8_t x135 = 0;
	static volatile uint8_t x136 = UINT8_MAX;
	int32_t t30 = 8029;

	t30 = (x133==(x134&(x135/x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	int16_t x139 = 2;
	uint16_t x140 = 655U;
	volatile int32_t t31 = 104;

	t31 = (x137==(x138&(x139/x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = INT64_MAX;
	int8_t x143 = INT8_MAX;
	int32_t t32 = -14412130;

	t32 = (x141==(x142&(x143/x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x145 = 2;
	uint32_t x146 = 2296375U;
	uint64_t x147 = 1090428013208LLU;
	int32_t t33 = -1;

	t33 = (x145==(x146&(x147/x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	static int8_t x151 = INT8_MIN;
	volatile uint8_t x152 = 123U;

	t34 = (x149==(x150&(x151/x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x153 = 0U;
	volatile uint32_t x154 = 1172061554U;
	int16_t x156 = INT16_MIN;
	volatile int32_t t35 = 2;

	t35 = (x153==(x154&(x155/x156)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t36 = 1538;

	t36 = (x157==(x158&(x159/x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = INT16_MIN;
	uint16_t x163 = UINT16_MAX;
	volatile uint16_t x164 = 102U;
	static int32_t t37 = 28;

	t37 = (x161==(x162&(x163/x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MAX;
	uint16_t x168 = 4744U;
	int32_t t38 = -464325813;

	t38 = (x165==(x166&(x167/x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 9213U;
	volatile int8_t x170 = INT8_MIN;
	uint16_t x171 = 4406U;
	int32_t x172 = INT32_MAX;
	int32_t t39 = -13;

	t39 = (x169==(x170&(x171/x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	volatile int32_t t40 = -3;

	t40 = (x173==(x174&(x175/x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = 256LL;
	int64_t x180 = INT64_MAX;
	volatile int32_t t41 = -428;

	t41 = (x177==(x178&(x179/x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = 282;
	int16_t x182 = -1;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t42 = 14049721;

	t42 = (x181==(x182&(x183/x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = 274470944594LL;
	volatile uint32_t x187 = 4461871U;
	int16_t x188 = 2;
	int32_t t43 = 703299586;

	t43 = (x185==(x186&(x187/x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x193 = INT32_MIN;

	t44 = (x193==(x194&(x195/x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MAX;
	static uint64_t x198 = 3418LLU;
	volatile int16_t x200 = INT16_MAX;
	int32_t t45 = 53015;

	t45 = (x197==(x198&(x199/x200)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x201 = INT16_MIN;
	int32_t x203 = 188398547;
	int8_t x204 = INT8_MIN;
	int32_t t46 = -1;

	t46 = (x201==(x202&(x203/x204)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x205 = 3472910U;
	static int8_t x206 = -1;
	uint64_t x207 = 107LLU;
	static int32_t x208 = -224;
	int32_t t47 = 240;

	t47 = (x205==(x206&(x207/x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = INT8_MAX;
	uint8_t x211 = 12U;
	uint32_t x212 = 4087133U;

	t48 = (x209==(x210&(x211/x212)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x214 = UINT32_MAX;
	int32_t x215 = 3223012;
	volatile int32_t t49 = -2864;

	t49 = (x213==(x214&(x215/x216)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = 882LLU;
	int32_t x220 = 373;
	volatile int32_t t50 = -168452833;

	t50 = (x217==(x218&(x219/x220)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 1U;
	int32_t x223 = -62435;
	uint8_t x224 = 17U;
	static int32_t t51 = -35285114;

	t51 = (x221==(x222&(x223/x224)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	int32_t x227 = -1;

	t52 = (x225==(x226&(x227/x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = -1LL;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MIN;
	int32_t t53 = -1;

	t53 = (x229==(x230&(x231/x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile int64_t x234 = 3LL;
	int8_t x235 = -1;
	int8_t x236 = INT8_MAX;
	int32_t t54 = -38627;

	t54 = (x233==(x234&(x235/x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MAX;
	volatile uint16_t x238 = 9U;
	int8_t x240 = INT8_MIN;

	t55 = (x237==(x238&(x239/x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = INT32_MAX;
	int16_t x242 = 979;
	int64_t x243 = -1722382796LL;
	static int32_t x244 = -1;

	t56 = (x241==(x242&(x243/x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MAX;
	volatile int32_t x246 = INT32_MIN;
	static uint16_t x247 = 210U;
	int16_t x248 = INT16_MIN;
	static int32_t t57 = -18424258;

	t57 = (x245==(x246&(x247/x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -1;
	int64_t x250 = INT64_MIN;
	static int8_t x251 = 35;
	int64_t x252 = -1LL;
	volatile int32_t t58 = 0;

	t58 = (x249==(x250&(x251/x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x253 = INT16_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	uint8_t x255 = UINT8_MAX;
	static int8_t x256 = INT8_MIN;
	volatile int32_t t59 = -5535832;

	t59 = (x253==(x254&(x255/x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = INT8_MIN;
	static volatile uint8_t x258 = 3U;
	int64_t x259 = INT64_MAX;
	int32_t t60 = -263927;

	t60 = (x257==(x258&(x259/x260)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x261 = 788346LL;
	int32_t x262 = -1;
	int16_t x264 = 224;
	int32_t t61 = 27831390;

	t61 = (x261==(x262&(x263/x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x269 = 3U;
	int16_t x270 = INT16_MIN;
	int32_t t62 = -79;

	t62 = (x269==(x270&(x271/x272)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = 4;
	static int64_t x274 = -1LL;
	int16_t x275 = INT16_MAX;
	int16_t x276 = -1;
	int32_t t63 = 64539;

	t63 = (x273==(x274&(x275/x276)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x277 = 0;
	int16_t x279 = INT16_MIN;
	int16_t x280 = -1;

	t64 = (x277==(x278&(x279/x280)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = UINT32_MAX;
	uint32_t x282 = 57U;
	int32_t x283 = INT32_MAX;
	static int32_t t65 = 99809;

	t65 = (x281==(x282&(x283/x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x288 = INT32_MIN;

	t66 = (x285==(x286&(x287/x288)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x289 = -1LL;
	static uint64_t x291 = 442723325794451901LLU;
	int8_t x292 = INT8_MIN;
	int32_t t67 = -7;

	t67 = (x289==(x290&(x291/x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x294 = 7457429U;
	int8_t x295 = -1;
	static int16_t x296 = 85;

	t68 = (x293==(x294&(x295/x296)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = -44245732;
	volatile int64_t x298 = INT64_MIN;
	uint8_t x299 = 29U;
	int32_t x300 = INT32_MIN;

	t69 = (x297==(x298&(x299/x300)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = -131833180725LL;
	uint16_t x302 = UINT16_MAX;
	int32_t x303 = INT32_MAX;
	int16_t x304 = 1013;

	t70 = (x301==(x302&(x303/x304)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x306 = 8338U;
	uint8_t x307 = 71U;
	static volatile uint64_t x308 = 30748LLU;
	int32_t t71 = 347569;

	t71 = (x305==(x306&(x307/x308)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MAX;
	uint8_t x311 = UINT8_MAX;
	static volatile int32_t t72 = 461;

	t72 = (x309==(x310&(x311/x312)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = -6;
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	int16_t x316 = -1;

	t73 = (x313==(x314&(x315/x316)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = -218;
	int32_t x320 = -1;

	t74 = (x317==(x318&(x319/x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x321 = 0;
	static int64_t x322 = INT64_MIN;
	static int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	volatile int32_t t75 = 0;

	t75 = (x321==(x322&(x323/x324)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x325 = -1;
	int64_t x326 = 4741716734159745LL;
	static uint32_t x327 = 72279380U;
	static volatile uint32_t x328 = 1U;
	volatile int32_t t76 = 10573;

	t76 = (x325==(x326&(x327/x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x329 = 1266669172LLU;
	int8_t x330 = -1;
	int16_t x331 = 1;
	int32_t t77 = 0;

	t77 = (x329==(x330&(x331/x332)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = -1;
	uint8_t x334 = 7U;
	int64_t x335 = INT64_MAX;
	uint16_t x336 = UINT16_MAX;
	int32_t t78 = 937340733;

	t78 = (x333==(x334&(x335/x336)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	volatile int64_t x339 = -31LL;
	int16_t x340 = INT16_MIN;
	volatile int32_t t79 = 6643;

	t79 = (x337==(x338&(x339/x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x343 = 1U;
	int32_t x344 = -1;
	int32_t t80 = 463;

	t80 = (x341==(x342&(x343/x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 2U;
	int64_t x346 = INT64_MIN;
	volatile uint64_t x347 = 210LLU;

	t81 = (x345==(x346&(x347/x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x349 = 1543781313881978LLU;
	volatile int64_t x350 = INT64_MAX;
	static int8_t x351 = INT8_MAX;
	int64_t x352 = -35699583596285LL;
	int32_t t82 = -22941987;

	t82 = (x349==(x350&(x351/x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x354 = 10U;
	uint32_t x355 = 74854U;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t83 = 16;

	t83 = (x353==(x354&(x355/x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = -36;
	static volatile int32_t x362 = 255517913;
	volatile uint32_t x363 = 20U;
	static int16_t x364 = INT16_MAX;
	volatile int32_t t84 = -5;

	t84 = (x361==(x362&(x363/x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x365 = 806U;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = INT8_MIN;
	volatile int8_t x368 = INT8_MAX;

	t85 = (x365==(x366&(x367/x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x369 = -14;
	volatile int16_t x371 = 5;
	volatile int32_t t86 = -83785681;

	t86 = (x369==(x370&(x371/x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 53U;
	static volatile int8_t x374 = 7;
	uint16_t x376 = 1U;

	t87 = (x373==(x374&(x375/x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x377 = 11289U;
	uint16_t x378 = 973U;
	int64_t x379 = INT64_MIN;
	volatile int64_t x380 = -366080235LL;
	int32_t t88 = -1476423;

	t88 = (x377==(x378&(x379/x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = 3;
	int8_t x383 = INT8_MAX;
	int64_t x384 = INT64_MIN;
	static volatile int32_t t89 = 1;

	t89 = (x381==(x382&(x383/x384)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = INT32_MAX;
	static uint64_t x387 = UINT64_MAX;
	int32_t x388 = -1;
	volatile int32_t t90 = -274298975;

	t90 = (x385==(x386&(x387/x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = -6464860528219LL;
	int32_t x390 = 3932;
	volatile int64_t x392 = -1LL;

	t91 = (x389==(x390&(x391/x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x393 = INT32_MAX;
	static int16_t x396 = 1;
	int32_t t92 = -1;

	t92 = (x393==(x394&(x395/x396)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x397 = 966U;
	uint8_t x398 = 15U;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MAX;
	static int32_t t93 = -221648042;

	t93 = (x397==(x398&(x399/x400)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x401 = -1683;
	int64_t x404 = -1LL;
	static int32_t t94 = -560709;

	t94 = (x401==(x402&(x403/x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x405 = 17U;
	int16_t x406 = -1;
	int64_t x407 = INT64_MAX;
	int32_t t95 = 1;

	t95 = (x405==(x406&(x407/x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = 205200887747030869LL;
	int64_t x410 = INT64_MIN;
	int32_t t96 = -479792456;

	t96 = (x409==(x410&(x411/x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x413 = 127U;
	int16_t x414 = INT16_MAX;
	int64_t x415 = -1LL;
	int16_t x416 = -1;
	volatile int32_t t97 = -1948871;

	t97 = (x413==(x414&(x415/x416)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = 54;
	uint32_t x418 = 4864U;
	int32_t x419 = INT32_MAX;
	int8_t x420 = 1;

	t98 = (x417==(x418&(x419/x420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = 8;
	int16_t x422 = -1;
	static uint16_t x423 = 2143U;
	static int64_t x424 = INT64_MIN;

	t99 = (x421==(x422&(x423/x424)));

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

