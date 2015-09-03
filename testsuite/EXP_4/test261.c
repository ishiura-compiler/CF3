#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = 2U;
int16_t x2 = INT16_MIN;
uint8_t x22 = 70U;
static volatile int32_t t7 = 903103;
int32_t x41 = INT32_MAX;
uint64_t t11 = 230LLU;
uint8_t x62 = 1U;
volatile uint16_t x68 = 1236U;
uint8_t x69 = UINT8_MAX;
int64_t x71 = INT64_MIN;
volatile int32_t x78 = -240;
uint16_t x80 = UINT16_MAX;
uint64_t x84 = 11734959281067973LLU;
static volatile int16_t x85 = INT16_MIN;
uint32_t x88 = UINT32_MAX;
int8_t x91 = -1;
volatile uint32_t x94 = UINT32_MAX;
volatile int8_t x96 = -1;
static volatile uint64_t t22 = 4455095648119398LLU;
uint64_t x99 = 89739242166919LLU;
uint16_t x104 = 1U;
volatile int32_t x106 = INT32_MAX;
volatile uint32_t x108 = 5U;
int32_t x116 = INT32_MIN;
static uint32_t t28 = 12U;
static int64_t x129 = INT64_MAX;
int16_t x135 = INT16_MAX;
uint32_t x139 = 0U;
volatile uint8_t x140 = 25U;
int32_t t32 = -1035520398;
static int8_t x151 = INT8_MIN;
volatile uint16_t x157 = 3025U;
int16_t x164 = 415;
uint64_t x166 = 8055580465337944LLU;
volatile int32_t x169 = -1;
uint16_t x170 = 27U;
int32_t x176 = INT32_MIN;
static volatile int32_t t39 = 67;
uint16_t x183 = 8U;
volatile int32_t x184 = 6;
volatile uint64_t x186 = UINT64_MAX;
static volatile int8_t x189 = INT8_MAX;
uint32_t x190 = 27U;
uint16_t x205 = 18582U;
volatile int32_t t46 = 892929892;
int32_t t48 = INT32_MIN;
int32_t x224 = 101967629;
static uint16_t x228 = UINT16_MAX;
volatile uint32_t t52 = 0U;
int8_t x238 = INT8_MIN;
int32_t x244 = -6168;
int16_t x249 = INT16_MAX;
int8_t x252 = -1;
int64_t x257 = INT64_MAX;
static volatile int16_t x263 = INT16_MIN;
uint16_t x265 = 13U;
uint32_t t61 = 181U;
volatile uint32_t t62 = 308U;
volatile uint8_t x283 = UINT8_MAX;
uint64_t x290 = 15813653714661646LLU;
int8_t x292 = 17;
static int8_t x297 = INT8_MIN;
volatile int16_t x304 = -1;
static int8_t x312 = INT8_MAX;
volatile int32_t t72 = -332;
int64_t x326 = -3LL;
int8_t x331 = 1;
static int8_t x332 = 0;
volatile uint64_t x336 = 28173318LLU;
uint8_t x338 = UINT8_MAX;
int32_t t77 = INT32_MAX;
int32_t x345 = INT32_MAX;
int16_t x350 = -1;
static volatile int16_t x352 = INT16_MIN;
uint8_t x356 = UINT8_MAX;
static int32_t x362 = 1181;
int64_t x364 = -1LL;
uint32_t t85 = UINT32_MAX;
int16_t x377 = INT16_MIN;
int32_t t87 = 54982;
uint64_t x387 = 986593231LLU;
int32_t x390 = -1;
int32_t x396 = INT32_MIN;
int64_t x397 = INT64_MIN;
int32_t x398 = -1;
uint8_t x399 = 1U;
int8_t x405 = 1;
int8_t x409 = INT8_MIN;
uint64_t x411 = 14410736706LLU;
uint64_t t95 = 5986864880669LLU;
volatile int16_t x417 = INT16_MIN;
volatile int8_t x422 = INT8_MIN;
uint8_t x428 = 3U;
static int32_t t98 = -228;
uint16_t x430 = 354U;
uint64_t x431 = 64607599798855LLU;


void f0(void) {
	int16_t x3 = INT16_MAX;
	volatile uint16_t x4 = 20596U;
	static volatile int32_t t0 = 433001;

	t0 = (x1+(x2==(x3-x4)));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = -150883747;
	static uint16_t x11 = UINT16_MAX;
	int8_t x12 = 0;
	int32_t t1 = -1;

	t1 = (x9+(x10==(x11-x12)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 7;
	int32_t x14 = INT32_MIN;
	int32_t x15 = -117166950;
	int8_t x16 = INT8_MIN;
	int32_t t2 = -130432;

	t2 = (x13+(x14==(x15-x16)));

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -1;
	int32_t x18 = INT32_MIN;
	int8_t x19 = -1;
	int32_t x20 = INT32_MIN;
	volatile int32_t t3 = -85;

	t3 = (x17+(x18==(x19-x20)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 4931U;
	static volatile uint64_t x23 = 80672971225915624LLU;
	uint32_t x24 = 475U;
	static int32_t t4 = -1782;

	t4 = (x21+(x22==(x23-x24)));

	if (t4 != 4931) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = INT8_MAX;
	uint8_t x26 = 11U;
	static uint64_t x27 = 2370030265172163980LLU;
	int8_t x28 = -9;
	int32_t t5 = 35851;

	t5 = (x25+(x26==(x27-x28)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	static volatile int8_t x30 = -1;
	static uint8_t x31 = 13U;
	int8_t x32 = -1;
	volatile int32_t t6 = 260649493;

	t6 = (x29+(x30==(x31-x32)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	static int64_t x34 = 10868937897LL;
	static int32_t x35 = -1835;
	uint64_t x36 = 2187659874711LLU;

	t7 = (x33+(x34==(x35-x36)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 15U;
	volatile int8_t x38 = 7;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = UINT64_MAX;
	int32_t t8 = -751;

	t8 = (x37+(x38==(x39-x40)));

	if (t8 != 15) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x42 = 243U;
	int16_t x43 = 0;
	static uint64_t x44 = UINT64_MAX;
	int32_t t9 = INT32_MAX;

	t9 = (x41+(x42==(x43-x44)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	uint32_t x46 = 3U;
	volatile uint64_t x47 = 119603393905337LLU;
	uint32_t x48 = 256401U;
	static volatile int32_t t10 = -1784844;

	t10 = (x45+(x46==(x47-x48)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 17LLU;
	int64_t x50 = 349635LL;
	uint8_t x51 = 7U;
	int16_t x52 = INT16_MIN;

	t11 = (x49+(x50==(x51-x52)));

	if (t11 != 17LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MIN;
	static uint8_t x54 = 113U;
	static int8_t x55 = -23;
	static int32_t x56 = 39094493;
	int32_t t12 = INT32_MIN;

	t12 = (x53+(x54==(x55-x56)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = 50LL;
	uint8_t x58 = 1U;
	int8_t x59 = INT8_MAX;
	static uint64_t x60 = 10648910LLU;
	volatile int64_t t13 = -25044671LL;

	t13 = (x57+(x58==(x59-x60)));

	if (t13 != 50LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 3;
	uint64_t x63 = 68LLU;
	int32_t x64 = 0;
	volatile int32_t t14 = -92;

	t14 = (x61+(x62==(x63-x64)));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MAX;
	uint64_t x67 = UINT64_MAX;
	int32_t t15 = 1355628;

	t15 = (x65+(x66==(x67-x68)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x70 = 96U;
	volatile int8_t x72 = INT8_MIN;
	static volatile int32_t t16 = -526272232;

	t16 = (x69+(x70==(x71-x72)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 2U;
	uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = 3U;
	static int32_t t17 = 26491;

	t17 = (x73+(x74==(x75-x76)));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	int8_t x79 = 2;
	static int64_t t18 = INT64_MIN;

	t18 = (x77+(x78==(x79-x80)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 1;
	uint32_t x82 = UINT32_MAX;
	uint16_t x83 = UINT16_MAX;
	volatile int32_t t19 = 1;

	t19 = (x81+(x82==(x83-x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x86 = INT64_MAX;
	static int8_t x87 = INT8_MIN;
	static volatile int32_t t20 = -20330347;

	t20 = (x85+(x86==(x87-x88)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -20LL;
	static uint16_t x90 = UINT16_MAX;
	static uint64_t x92 = UINT64_MAX;
	static int64_t t21 = 1371544955770LL;

	t21 = (x89+(x90==(x91-x92)));

	if (t21 != -20LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 12697448596525906LLU;
	static int64_t x95 = -1LL;

	t22 = (x93+(x94==(x95-x96)));

	if (t22 != 12697448596525906LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	static int32_t x98 = -1;
	uint8_t x100 = 2U;
	static volatile uint64_t t23 = UINT64_MAX;

	t23 = (x97+(x98==(x99-x100)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 54U;
	static volatile uint64_t x102 = 98985255LLU;
	int8_t x103 = INT8_MIN;
	int32_t t24 = -20;

	t24 = (x101+(x102==(x103-x104)));

	if (t24 != 54) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = UINT16_MAX;
	int8_t x107 = INT8_MAX;
	int32_t t25 = 46734;

	t25 = (x105+(x106==(x107-x108)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	volatile int8_t x110 = 7;
	static uint32_t x111 = 30078U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = (x109+(x110==(x111-x112)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	static volatile uint32_t x114 = 62180847U;
	int32_t x115 = -1514911;
	static int32_t t27 = 13372568;

	t27 = (x113+(x114==(x115-x116)));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 968094U;
	int64_t x118 = INT64_MAX;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = -11096952LL;

	t28 = (x117+(x118==(x119-x120)));

	if (t28 != 968094U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -4;
	int32_t x126 = INT32_MIN;
	int16_t x127 = 8233;
	uint16_t x128 = 39U;
	int32_t t29 = -829594;

	t29 = (x125+(x126==(x127-x128)));

	if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = INT32_MIN;
	int16_t x131 = -1;
	uint16_t x132 = 6U;
	volatile int64_t t30 = INT64_MAX;

	t30 = (x129+(x130==(x131-x132)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 197U;
	uint64_t x134 = 1039LLU;
	int16_t x136 = INT16_MIN;
	static int32_t t31 = 86884;

	t31 = (x133+(x134==(x135-x136)));

	if (t31 != 197) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = UINT16_MAX;
	int8_t x138 = INT8_MIN;

	t32 = (x137+(x138==(x139-x140)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x149 = INT32_MIN;
	int64_t x150 = -1LL;
	int8_t x152 = INT8_MIN;
	int32_t t33 = INT32_MIN;

	t33 = (x149+(x150==(x151-x152)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x153 = INT32_MAX;
	int16_t x154 = 497;
	uint64_t x155 = 20318408303836LLU;
	int64_t x156 = -1LL;
	static volatile int32_t t34 = INT32_MAX;

	t34 = (x153+(x154==(x155-x156)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = INT16_MIN;
	uint16_t x159 = 1458U;
	static int32_t x160 = -427;
	volatile int32_t t35 = -22703721;

	t35 = (x157+(x158==(x159-x160)));

	if (t35 != 3025) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	int32_t x162 = -1;
	volatile uint16_t x163 = UINT16_MAX;
	volatile int32_t t36 = 790902965;

	t36 = (x161+(x162==(x163-x164)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int64_t x167 = -1LL;
	uint8_t x168 = 14U;
	int32_t t37 = -105750;

	t37 = (x165+(x166==(x167-x168)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MAX;
	static int32_t t38 = 1;

	t38 = (x169+(x170==(x171-x172)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = 297;
	volatile uint8_t x174 = UINT8_MAX;
	int16_t x175 = -1;

	t39 = (x173+(x174==(x175-x176)));

	if (t39 != 297) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -1;
	static uint8_t x178 = 7U;
	static uint16_t x179 = 7U;
	int32_t x180 = -346964;
	static volatile int32_t t40 = 12763389;

	t40 = (x177+(x178==(x179-x180)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MAX;
	uint16_t x182 = UINT16_MAX;
	static volatile int64_t t41 = INT64_MAX;

	t41 = (x181+(x182==(x183-x184)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x185 = INT16_MIN;
	uint16_t x187 = 9987U;
	uint16_t x188 = 14U;
	volatile int32_t t42 = 150372;

	t42 = (x185+(x186==(x187-x188)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = -3;
	static volatile int32_t t43 = -65972;

	t43 = (x189+(x190==(x191-x192)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = INT16_MAX;
	uint32_t x194 = 286U;
	int32_t x195 = INT32_MAX;
	int8_t x196 = INT8_MAX;
	int32_t t44 = 11259;

	t44 = (x193+(x194==(x195-x196)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x197 = 3U;
	int64_t x198 = -1LL;
	static int16_t x199 = 0;
	uint64_t x200 = 91920937LLU;
	volatile int32_t t45 = -9890676;

	t45 = (x197+(x198==(x199-x200)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x206 = INT16_MAX;
	uint16_t x207 = 4086U;
	volatile uint8_t x208 = 126U;

	t46 = (x205+(x206==(x207-x208)));

	if (t46 != 18582) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = -546;
	uint8_t x210 = 102U;
	uint64_t x211 = UINT64_MAX;
	int64_t x212 = -16884964139055LL;
	volatile int32_t t47 = -586786;

	t47 = (x209+(x210==(x211-x212)));

	if (t47 != -546) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x213 = INT32_MIN;
	static volatile int64_t x214 = INT64_MIN;
	int8_t x215 = 9;
	int32_t x216 = -1;

	t48 = (x213+(x214==(x215-x216)));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x217 = INT16_MAX;
	uint8_t x218 = 119U;
	volatile int32_t x219 = 19;
	volatile int64_t x220 = -1LL;
	static int32_t t49 = 68519;

	t49 = (x217+(x218==(x219-x220)));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = INT32_MIN;
	volatile uint64_t x222 = 3281970425293473059LLU;
	volatile int64_t x223 = INT64_MAX;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x221+(x222==(x223-x224)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x225 = 14837LLU;
	int8_t x226 = -2;
	int16_t x227 = INT16_MIN;
	volatile uint64_t t51 = 34025341041LLU;

	t51 = (x225+(x226==(x227-x228)));

	if (t51 != 14837LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = 4U;
	volatile int64_t x230 = INT64_MIN;
	int16_t x231 = -1;
	volatile int16_t x232 = -7101;

	t52 = (x229+(x230==(x231-x232)));

	if (t52 != 4U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = -1;
	int32_t x239 = -201553651;
	uint64_t x240 = 1022178295562073185LLU;
	int32_t t53 = 245;

	t53 = (x237+(x238==(x239-x240)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x241 = 5710;
	static uint8_t x242 = 5U;
	volatile int8_t x243 = INT8_MIN;
	volatile int32_t t54 = 380;

	t54 = (x241+(x242==(x243-x244)));

	if (t54 != 5710) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 2733207U;
	static int32_t x246 = INT32_MAX;
	volatile uint32_t x247 = 930005493U;
	volatile uint64_t x248 = 65389LLU;
	volatile uint32_t t55 = 1861759751U;

	t55 = (x245+(x246==(x247-x248)));

	if (t55 != 2733207U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	volatile int32_t t56 = 63001676;

	t56 = (x249+(x250==(x251-x252)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = -1;
	int32_t x254 = -82;
	uint64_t x255 = 17955LLU;
	static int32_t x256 = 19149216;
	volatile int32_t t57 = -1;

	t57 = (x253+(x254==(x255-x256)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x258 = -1;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = UINT32_MAX;
	static int64_t t58 = INT64_MAX;

	t58 = (x257+(x258==(x259-x260)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x261 = 15U;
	int64_t x262 = INT64_MIN;
	uint16_t x264 = 0U;
	volatile int32_t t59 = -5;

	t59 = (x261+(x262==(x263-x264)));

	if (t59 != 15) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x266 = INT8_MAX;
	static volatile int8_t x267 = -1;
	static uint8_t x268 = UINT8_MAX;
	volatile int32_t t60 = 800302;

	t60 = (x265+(x266==(x267-x268)));

	if (t60 != 13) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = 52110161U;
	int8_t x270 = -1;
	int32_t x271 = INT32_MIN;
	uint16_t x272 = 0U;

	t61 = (x269+(x270==(x271-x272)));

	if (t61 != 52110161U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = 15921U;
	int32_t x274 = -217;
	volatile uint64_t x275 = 1822338320LLU;
	int64_t x276 = INT64_MAX;

	t62 = (x273+(x274==(x275-x276)));

	if (t62 != 15921U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MIN;
	uint8_t x278 = 1U;
	static uint16_t x279 = 541U;
	uint16_t x280 = 27U;
	volatile int32_t t63 = -2;

	t63 = (x277+(x278==(x279-x280)));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MIN;
	volatile int16_t x284 = -2;
	volatile int64_t t64 = INT64_MIN;

	t64 = (x281+(x282==(x283-x284)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = 781198LL;
	volatile int64_t x286 = -1066024910970283LL;
	volatile int32_t x287 = INT32_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	volatile int64_t t65 = -4667747930425LL;

	t65 = (x285+(x286==(x287-x288)));

	if (t65 != 781198LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MIN;
	int32_t x291 = INT32_MAX;
	volatile int32_t t66 = -495638281;

	t66 = (x289+(x290==(x291-x292)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = -1LL;
	static int32_t x294 = INT32_MIN;
	volatile int64_t x295 = INT64_MIN;
	volatile int64_t x296 = -3531384292443135LL;
	int64_t t67 = 1538483701899LL;

	t67 = (x293+(x294==(x295-x296)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x298 = INT8_MIN;
	volatile uint32_t x299 = 1332399309U;
	static int32_t x300 = -1;
	int32_t t68 = -33581;

	t68 = (x297+(x298==(x299-x300)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x301 = INT16_MIN;
	uint8_t x302 = 93U;
	uint8_t x303 = 44U;
	volatile int32_t t69 = 253;

	t69 = (x301+(x302==(x303-x304)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x305 = INT8_MIN;
	uint64_t x306 = 737LLU;
	int32_t x307 = INT32_MIN;
	int32_t x308 = -1;
	volatile int32_t t70 = 2;

	t70 = (x305+(x306==(x307-x308)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x309 = 30;
	uint64_t x310 = 137994942170189LLU;
	int64_t x311 = -1LL;
	volatile int32_t t71 = 464510;

	t71 = (x309+(x310==(x311-x312)));

	if (t71 != 30) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x313 = INT8_MAX;
	int16_t x314 = -1;
	int32_t x315 = -531415587;
	volatile int64_t x316 = -116806574LL;

	t72 = (x313+(x314==(x315-x316)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = -11780;
	int64_t x322 = -2331220260545439LL;
	static int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	static int32_t t73 = 94627732;

	t73 = (x321+(x322==(x323-x324)));

	if (t73 != -11780) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = -1;
	int8_t x327 = INT8_MAX;
	uint8_t x328 = 2U;
	static volatile int32_t t74 = 33501530;

	t74 = (x325+(x326==(x327-x328)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x329 = 1779730U;
	int32_t x330 = INT32_MIN;
	static volatile uint32_t t75 = 457294U;

	t75 = (x329+(x330==(x331-x332)));

	if (t75 != 1779730U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = 42;
	int16_t x334 = -3;
	int32_t x335 = 3030;
	int32_t t76 = 790143;

	t76 = (x333+(x334==(x335-x336)));

	if (t76 != 42) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = INT32_MAX;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = UINT64_MAX;

	t77 = (x337+(x338==(x339-x340)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = INT32_MIN;
	int16_t x342 = -1;
	uint8_t x343 = 119U;
	uint64_t x344 = UINT64_MAX;
	int32_t t78 = INT32_MIN;

	t78 = (x341+(x342==(x343-x344)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x346 = 46343;
	static int8_t x347 = INT8_MIN;
	uint16_t x348 = UINT16_MAX;
	int32_t t79 = INT32_MAX;

	t79 = (x345+(x346==(x347-x348)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x349 = -1LL;
	int16_t x351 = -1;
	volatile int64_t t80 = 1259562888LL;

	t80 = (x349+(x350==(x351-x352)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = 23;
	int8_t x354 = -1;
	volatile int16_t x355 = 9;
	volatile int32_t t81 = -878821550;

	t81 = (x353+(x354==(x355-x356)));

	if (t81 != 23) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = -2113015823LL;
	static volatile int64_t x358 = INT64_MIN;
	volatile int32_t x359 = -12621179;
	int16_t x360 = INT16_MIN;
	int64_t t82 = -426270LL;

	t82 = (x357+(x358==(x359-x360)));

	if (t82 != -2113015823LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x361 = 111U;
	uint16_t x363 = 328U;
	volatile uint32_t t83 = 110082697U;

	t83 = (x361+(x362==(x363-x364)));

	if (t83 != 111U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x365 = UINT32_MAX;
	int16_t x366 = INT16_MIN;
	int64_t x367 = -1LL;
	int8_t x368 = INT8_MIN;
	static volatile uint32_t t84 = UINT32_MAX;

	t84 = (x365+(x366==(x367-x368)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x369 = UINT32_MAX;
	int64_t x370 = 1542495020LL;
	int16_t x371 = 735;
	int64_t x372 = -1LL;

	t85 = (x369+(x370==(x371-x372)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x373 = UINT8_MAX;
	uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 878141541235086432LLU;
	static uint32_t x376 = UINT32_MAX;
	int32_t t86 = -467383;

	t86 = (x373+(x374==(x375-x376)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x378 = INT8_MIN;
	int64_t x379 = -1LL;
	uint8_t x380 = 4U;

	t87 = (x377+(x378==(x379-x380)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = INT64_MAX;
	int16_t x386 = 11378;
	int16_t x388 = -1;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x385+(x386==(x387-x388)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = 3;
	int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MAX;
	int32_t t89 = -51873;

	t89 = (x389+(x390==(x391-x392)));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int64_t x394 = 119113437LL;
	int8_t x395 = -1;
	int32_t t90 = 1090104;

	t90 = (x393+(x394==(x395-x396)));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x400 = -1;
	volatile int64_t t91 = INT64_MIN;

	t91 = (x397+(x398==(x399-x400)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x401 = 413U;
	int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	int16_t x404 = 1;
	static uint32_t t92 = 31601881U;

	t92 = (x401+(x402==(x403-x404)));

	if (t92 != 413U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x406 = 457U;
	uint32_t x407 = 1237871153U;
	int64_t x408 = 4205908647590646LL;
	static int32_t t93 = -1;

	t93 = (x405+(x406==(x407-x408)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x410 = INT32_MAX;
	uint16_t x412 = 643U;
	volatile int32_t t94 = 0;

	t94 = (x409+(x410==(x411-x412)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x413 = 90485872LLU;
	static volatile uint32_t x414 = 2U;
	int64_t x415 = 328255173259843LL;
	uint16_t x416 = UINT16_MAX;

	t95 = (x413+(x414==(x415-x416)));

	if (t95 != 90485872LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x418 = 3U;
	volatile uint64_t x419 = 577218821512LLU;
	static volatile int32_t x420 = -232984435;
	volatile int32_t t96 = -4;

	t96 = (x417+(x418==(x419-x420)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = INT64_MIN;
	static volatile int32_t x423 = INT32_MAX;
	uint16_t x424 = 1433U;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x421+(x422==(x423-x424)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = 10;
	int8_t x426 = INT8_MIN;
	static int64_t x427 = -1LL;

	t98 = (x425+(x426==(x427-x428)));

	if (t98 != 10) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = INT32_MIN;
	volatile int8_t x432 = 0;
	volatile int32_t t99 = INT32_MIN;

	t99 = (x429+(x430==(x431-x432)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

