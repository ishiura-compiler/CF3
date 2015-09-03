#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int64_t x3 = -1LL;
static int16_t x13 = -1;
int32_t x15 = INT32_MIN;
int32_t x21 = -1;
int64_t t5 = 393085137LL;
static int16_t x25 = INT16_MIN;
volatile int8_t x28 = -1;
static int64_t x31 = INT64_MIN;
int8_t x43 = 2;
int32_t x57 = INT32_MIN;
int8_t x62 = -13;
int64_t t17 = 48LL;
int16_t x74 = -1;
int32_t t20 = 19;
int8_t x89 = 1;
uint32_t x92 = 12678U;
volatile int32_t x96 = INT32_MIN;
int16_t x100 = -64;
int32_t x102 = -37;
uint8_t x114 = 1U;
volatile uint64_t t28 = 16273229370461707LLU;
uint64_t t30 = 564880558LLU;
int32_t x127 = -115985252;
int64_t x135 = INT64_MIN;
volatile uint8_t x140 = UINT8_MAX;
static volatile int64_t t37 = 108258LL;
uint8_t x155 = UINT8_MAX;
volatile int32_t t38 = -119946330;
int32_t x163 = -1;
int32_t x164 = -115135;
uint64_t x166 = UINT64_MAX;
int32_t x171 = INT32_MAX;
int32_t x176 = -1879426;
int64_t x186 = INT64_MIN;
int64_t x190 = -1LL;
int64_t t47 = -14430733LL;
int64_t t48 = -468897935242LL;
int64_t x202 = INT64_MIN;
volatile int32_t t52 = 1040746077;
uint8_t x215 = 33U;
static uint64_t x219 = 5211832761064204LLU;
volatile uint32_t x226 = 28U;
volatile int64_t t56 = 4LL;
volatile int8_t x230 = INT8_MAX;
int8_t x234 = -1;
static uint32_t x242 = 38470U;
volatile uint64_t t60 = 2LLU;
static int16_t x247 = 4;
int32_t x250 = -1;
static int32_t t62 = 76;
int16_t x253 = INT16_MIN;
int8_t x266 = INT8_MIN;
volatile int32_t x268 = INT32_MAX;
int8_t x270 = -1;
int32_t t67 = -7;
int64_t x290 = INT64_MIN;
static uint8_t x292 = 1U;
int8_t x294 = -1;
int64_t t74 = 331699LL;
static int32_t t75 = -1249;
volatile int16_t x306 = 0;
int64_t x308 = -6LL;
static volatile int16_t x312 = INT16_MIN;
static uint16_t x316 = 1657U;
uint32_t x317 = 4955712U;
volatile int32_t t81 = -5706099;
uint16_t x334 = 7U;
int16_t x343 = -369;
volatile int32_t t86 = 3300;
uint16_t x355 = UINT16_MAX;
uint8_t x359 = UINT8_MAX;
volatile int64_t x366 = INT64_MAX;
volatile int64_t x367 = 266663469105214272LL;
static int16_t x371 = -238;
uint32_t x372 = 390U;
int32_t x373 = INT32_MIN;
uint32_t x375 = 2141483206U;
uint32_t t93 = 2U;
volatile uint32_t x378 = 0U;
int64_t x381 = -1LL;
static uint16_t x384 = 111U;
volatile int8_t x395 = INT8_MIN;


void f0(void) {
	static int8_t x2 = INT8_MIN;
	int16_t x4 = -1;
	volatile int64_t t0 = -63582688354LL;

	t0 = ((x1|x2)^(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	static int16_t x7 = -1;
	int32_t x8 = 12574;
	int64_t t1 = 108257LL;

	t1 = ((x5|x6)^(x7&x8));

	if (t1 != -20194LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 22;
	int32_t x10 = INT32_MIN;
	static int16_t x11 = INT16_MAX;
	static int64_t x12 = -839174213LL;
	int64_t t2 = 749404714207809LL;

	t2 = ((x9|x10)^(x11&x12));

	if (t2 != -2147469395LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 8040U;
	uint64_t x16 = 3LLU;
	volatile uint64_t t3 = 6770263466LLU;

	t3 = ((x13|x14)^(x15&x16));

	if (t3 != 4294967295LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int16_t x18 = 0;
	uint16_t x19 = 19946U;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -3;

	t4 = ((x17|x18)^(x19&x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -1032552369051LL;
	int8_t x23 = -15;
	int16_t x24 = -1;

	t5 = ((x21|x22)^(x23&x24));

	if (t5 != 14LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -3252;
	int8_t x27 = INT8_MIN;
	int32_t t6 = -20;

	t6 = ((x25|x26)^(x27&x28));

	if (t6 != 3276) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int8_t x30 = INT8_MAX;
	static int64_t x32 = INT64_MIN;
	int64_t t7 = INT64_MAX;

	t7 = ((x29|x30)^(x31&x32));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static volatile uint8_t x34 = UINT8_MAX;
	static uint64_t x35 = 13770LLU;
	uint8_t x36 = 3U;
	volatile uint64_t t8 = 3812687820435544656LLU;

	t8 = ((x33|x34)^(x35&x36));

	if (t8 != 18446744073709519101LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	int32_t x38 = INT32_MIN;
	volatile int64_t x39 = 56546960804LL;
	int32_t x40 = -6851987;
	volatile int64_t t9 = 1440640275041371LL;

	t9 = ((x37|x38)^(x39&x40));

	if (t9 != -57275916325LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int16_t x42 = INT16_MIN;
	static int8_t x44 = INT8_MIN;
	int64_t t10 = 57519327698290919LL;

	t10 = ((x41|x42)^(x43&x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MAX;
	int16_t x46 = -244;
	int8_t x47 = INT8_MIN;
	static int32_t x48 = 1897857;
	volatile int32_t t11 = -17;

	t11 = ((x45|x46)^(x47&x48));

	if (t11 != -1897857) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -104523LL;
	static uint32_t x50 = 49U;
	uint8_t x51 = 81U;
	static int16_t x52 = -1;
	volatile int64_t t12 = -61181027450472LL;

	t12 = ((x49|x50)^(x51&x52));

	if (t12 != -104476LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	uint64_t x54 = 118LLU;
	int32_t x55 = -1;
	int8_t x56 = -2;
	volatile uint64_t t13 = 851050166778067928LLU;

	t13 = ((x53|x54)^(x55&x56));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 10U;
	static int8_t x59 = INT8_MIN;
	static volatile int16_t x60 = 0;
	int32_t t14 = -34;

	t14 = ((x57|x58)^(x59&x60));

	if (t14 != -2147483638) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	static uint16_t x63 = 58U;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -9032273;

	t15 = ((x61|x62)^(x63&x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 1U;
	int8_t x66 = INT8_MAX;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 889U;
	int32_t t16 = -46854686;

	t16 = ((x65|x66)^(x67&x68));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	volatile int64_t x70 = INT64_MIN;
	uint8_t x71 = 5U;
	int64_t x72 = INT64_MAX;

	t17 = ((x69|x70)^(x71&x72));

	if (t17 != -2147483643LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 51162719U;
	volatile int16_t x75 = INT16_MIN;
	int16_t x76 = 53;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = ((x73|x74)^(x75&x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 45LLU;
	volatile uint8_t x78 = UINT8_MAX;
	int8_t x79 = -1;
	int16_t x80 = 14226;
	static volatile uint64_t t19 = 362772877LLU;

	t19 = ((x77|x78)^(x79&x80));

	if (t19 != 14189LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -3;
	int16_t x82 = 16300;
	int8_t x83 = -9;
	int32_t x84 = INT32_MIN;

	t20 = ((x81|x82)^(x83&x84));

	if (t20 != 2147483645) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -61LL;
	int8_t x86 = -1;
	static int8_t x87 = INT8_MIN;
	volatile int64_t x88 = 207LL;
	int64_t t21 = -12645223LL;

	t21 = ((x85|x86)^(x87&x88));

	if (t21 != -129LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = 4271424413330LL;
	volatile int32_t x91 = INT32_MIN;
	static int64_t t22 = -7043582776LL;

	t22 = ((x89|x90)^(x91&x92));

	if (t22 != 4271424413331LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static uint16_t x94 = 1221U;
	static int64_t x95 = -1LL;
	static volatile int64_t t23 = -7LL;

	t23 = ((x93|x94)^(x95&x96));

	if (t23 != 2147483589LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 1U;
	static int8_t x98 = INT8_MAX;
	uint8_t x99 = UINT8_MAX;
	static int32_t t24 = -1;

	t24 = ((x97|x98)^(x99&x100));

	if (t24 != 191) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	static volatile int32_t x103 = INT32_MIN;
	volatile uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = 3U;

	t25 = ((x101|x102)^(x103&x104));

	if (t25 != 2147483611U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	volatile uint8_t x106 = 0U;
	int64_t x107 = INT64_MAX;
	int64_t x108 = 96371753566LL;
	static uint64_t t26 = 9991569LLU;

	t26 = ((x105|x106)^(x107&x108));

	if (t26 != 18446743977337798049LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 0U;
	static uint16_t x110 = UINT16_MAX;
	static int16_t x111 = INT16_MIN;
	uint32_t x112 = 16016065U;
	uint32_t t27 = 11027963U;

	t27 = ((x109|x110)^(x111&x112));

	if (t27 != 16056319U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 56220396999566881LLU;
	volatile uint8_t x115 = UINT8_MAX;
	int16_t x116 = INT16_MAX;

	t28 = ((x113|x114)^(x115&x116));

	if (t28 != 56220396999567070LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = -33;
	volatile uint32_t x119 = 65628299U;
	int32_t x120 = -1;
	uint32_t t29 = 1386U;

	t29 = ((x117|x118)^(x119&x120));

	if (t29 != 4229338964U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 833LL;
	int32_t x122 = 14;
	static volatile int64_t x123 = 71148557003102361LL;
	uint64_t x124 = 470490566736LLU;

	t30 = ((x121|x122)^(x123&x124));

	if (t30 != 189018411871LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = UINT8_MAX;
	volatile uint16_t x126 = 1499U;
	volatile int16_t x128 = 3622;
	static int32_t t31 = -28306071;

	t31 = ((x125|x126)^(x127&x128));

	if (t31 != 507) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	volatile int8_t x131 = INT8_MAX;
	int8_t x132 = -10;
	int32_t t32 = 625227;

	t32 = ((x129|x130)^(x131&x132));

	if (t32 != -10) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	static uint8_t x134 = 3U;
	volatile int8_t x136 = 0;
	volatile int64_t t33 = 1700284965072940LL;

	t33 = ((x133|x134)^(x135&x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x137 = -278123730528203241LL;
	int32_t x138 = -1;
	int32_t x139 = INT32_MIN;
	int64_t t34 = 14105555545LL;

	t34 = ((x137|x138)^(x139&x140));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 77776LLU;
	int8_t x142 = -34;
	int64_t x143 = INT64_MIN;
	static int64_t x144 = INT64_MIN;
	volatile uint64_t t35 = 118367861404536LLU;

	t35 = ((x141|x142)^(x143&x144));

	if (t35 != 9223372036854775774LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 58856714914LLU;
	int16_t x146 = -1;
	uint8_t x147 = 41U;
	volatile int32_t x148 = INT32_MAX;
	volatile uint64_t t36 = 790456797LLU;

	t36 = ((x145|x146)^(x147&x148));

	if (t36 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -2227249256170LL;
	volatile int8_t x150 = INT8_MIN;
	int16_t x151 = 6401;
	uint8_t x152 = UINT8_MAX;

	t37 = ((x149|x150)^(x151&x152));

	if (t37 != -105LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x153 = -1;
	uint16_t x154 = 0U;
	int8_t x156 = -14;

	t38 = ((x153|x154)^(x155&x156));

	if (t38 != -243) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 32631451U;
	int8_t x158 = INT8_MAX;
	volatile uint64_t x159 = 1677LLU;
	static int64_t x160 = 269658044757LL;
	uint64_t t39 = 101379LLU;

	t39 = ((x157|x158)^(x159&x160));

	if (t39 != 32631546LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MAX;
	int64_t x162 = INT64_MAX;
	volatile int64_t t40 = 13707LL;

	t40 = ((x161|x162)^(x163&x164));

	if (t40 != -9223372036854660674LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 64949918472LLU;
	static int64_t x167 = INT64_MIN;
	int16_t x168 = 6;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x165|x166)^(x167&x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = 1;
	int64_t x170 = -1827918034833047LL;
	int8_t x172 = -1;
	int64_t t42 = 3737191LL;

	t42 = ((x169|x170)^(x171&x172));

	if (t42 != -1827917325332842LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	volatile int64_t x174 = INT64_MAX;
	static volatile int32_t x175 = INT32_MAX;
	int64_t t43 = 485LL;

	t43 = ((x173|x174)^(x175&x176));

	if (t43 != -2145604223LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 179166948LLU;
	uint8_t x178 = 17U;
	uint64_t x179 = UINT64_MAX;
	uint8_t x180 = 11U;
	uint64_t t44 = 8848330067409223450LLU;

	t44 = ((x177|x178)^(x179&x180));

	if (t44 != 179166974LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = -1LL;
	volatile uint32_t x183 = UINT32_MAX;
	volatile uint64_t x184 = 52319LLU;
	static volatile uint64_t t45 = 14700727758332LLU;

	t45 = ((x181|x182)^(x183&x184));

	if (t45 != 18446744073709499296LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x187 = 87U;
	int16_t x188 = -1;
	volatile int64_t t46 = 12LL;

	t46 = ((x185|x186)^(x187&x188));

	if (t46 != -9223372036854775721LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	volatile int64_t x191 = -1LL;
	int16_t x192 = -1;

	t47 = ((x189|x190)^(x191&x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MIN;
	volatile int64_t x195 = INT64_MIN;
	uint32_t x196 = 5082925U;

	t48 = ((x193|x194)^(x195&x196));

	if (t48 != 4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	volatile int32_t x198 = INT32_MIN;
	volatile int16_t x199 = -1;
	int64_t x200 = INT64_MIN;
	int64_t t49 = INT64_MAX;

	t49 = ((x197|x198)^(x199&x200));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	int16_t x203 = -1;
	int64_t x204 = INT64_MIN;
	int64_t t50 = 3891326899LL;

	t50 = ((x201|x202)^(x203&x204));

	if (t50 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	volatile int8_t x206 = INT8_MAX;
	volatile int64_t x207 = INT64_MIN;
	static int8_t x208 = INT8_MIN;
	int64_t t51 = 3LL;

	t51 = ((x205|x206)^(x207&x208));

	if (t51 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -87394;
	static volatile int32_t x210 = -240;
	int32_t x211 = INT32_MIN;
	int8_t x212 = 13;

	t52 = ((x209|x210)^(x211&x212));

	if (t52 != -98) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 10;
	static int8_t x214 = 1;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = 3605743;

	t53 = ((x213|x214)^(x215&x216));

	if (t53 != 42) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = 53;
	uint64_t x218 = 255946602083144722LLU;
	static int8_t x220 = INT8_MIN;
	volatile uint64_t t54 = 2697630240LLU;

	t54 = ((x217|x218)^(x219&x220));

	if (t54 != 261149638750916407LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 96739;
	static int64_t x222 = INT64_MIN;
	static volatile int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MAX;
	static volatile int64_t t55 = 60063076LL;

	t55 = ((x221|x222)^(x223&x224));

	if (t55 != -9223372036854679069LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	static int32_t x227 = -1;
	volatile int64_t x228 = INT64_MAX;

	t56 = ((x225|x226)^(x227&x228));

	if (t56 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = -1;
	uint16_t x231 = 508U;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = -1;

	t57 = ((x229|x230)^(x231&x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = 5;
	volatile int16_t x235 = -13526;
	volatile uint64_t x236 = 51134LLU;
	uint64_t t58 = 468988LLU;

	t58 = ((x233|x234)^(x235&x236));

	if (t58 != 18446744073709501653LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = -1;
	int32_t x239 = 0;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = -448535;

	t59 = ((x237|x238)^(x239&x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 14U;
	volatile uint64_t x243 = UINT64_MAX;
	static int32_t x244 = INT32_MIN;

	t60 = ((x241|x242)^(x243&x244));

	if (t60 != 18446744071562106446LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x245 = 67U;
	volatile int32_t x246 = -1;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 536152942;

	t61 = ((x245|x246)^(x247&x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 1U;
	static int16_t x251 = INT16_MIN;
	static int16_t x252 = INT16_MAX;

	t62 = ((x249|x250)^(x251&x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x254 = 100952423173LL;
	uint64_t x255 = UINT64_MAX;
	uint8_t x256 = UINT8_MAX;
	static volatile uint64_t t63 = 116LLU;

	t63 = ((x253|x254)^(x255&x256));

	if (t63 != 18446744073709534202LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = 9;
	int32_t x258 = INT32_MAX;
	uint16_t x259 = 2560U;
	static int64_t x260 = INT64_MIN;
	volatile int64_t t64 = -89961284435LL;

	t64 = ((x257|x258)^(x259&x260));

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 6577590490948LL;
	int64_t x262 = -12133631993662732LL;
	volatile int64_t x263 = -1LL;
	uint64_t x264 = UINT64_MAX;
	uint64_t t65 = 6588976LLU;

	t65 = ((x261|x262)^(x263&x264));

	if (t65 != 12132011435100171LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -2955;
	int32_t x267 = INT32_MAX;
	static volatile int32_t t66 = 2111;

	t66 = ((x265|x266)^(x267&x268));

	if (t66 != -2147483638) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 4U;
	static uint16_t x271 = 6U;
	int32_t x272 = INT32_MIN;

	t67 = ((x269|x270)^(x271&x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	int32_t x274 = INT32_MAX;
	static int32_t x275 = -1;
	uint8_t x276 = UINT8_MAX;
	volatile uint32_t t68 = 244U;

	t68 = ((x273|x274)^(x275&x276));

	if (t68 != 4294967040U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 3798LLU;
	static int8_t x278 = -10;
	volatile int8_t x279 = INT8_MAX;
	int64_t x280 = INT64_MIN;
	uint64_t t69 = 3400813286LLU;

	t69 = ((x277|x278)^(x279&x280));

	if (t69 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 0U;
	volatile uint8_t x282 = UINT8_MAX;
	uint16_t x283 = 9470U;
	uint32_t x284 = UINT32_MAX;
	uint32_t t70 = 366U;

	t70 = ((x281|x282)^(x283&x284));

	if (t70 != 9217U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = 24;
	static int64_t x287 = INT64_MIN;
	static int8_t x288 = -1;
	volatile int64_t t71 = 25099240191151356LL;

	t71 = ((x285|x286)^(x287&x288));

	if (t71 != 9223372036854775704LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int8_t x291 = -1;
	volatile int64_t t72 = 7899LL;

	t72 = ((x289|x290)^(x291&x292));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 62U;
	static volatile int64_t x295 = -1LL;
	uint32_t x296 = 226276565U;
	int64_t t73 = 45275362065LL;

	t73 = ((x293|x294)^(x295&x296));

	if (t73 != -226276566LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 2U;
	int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MAX;
	volatile int32_t x300 = -115;

	t74 = ((x297|x298)^(x299&x300));

	if (t74 != -9223372036854743153LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MIN;
	uint8_t x302 = UINT8_MAX;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;

	t75 = ((x301|x302)^(x303&x304));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 257U;
	int32_t x307 = INT32_MIN;
	volatile int64_t t76 = 176923786LL;

	t76 = ((x305|x306)^(x307&x308));

	if (t76 != -2147483391LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = INT8_MAX;
	int32_t t77 = 15;

	t77 = ((x309|x310)^(x311&x312));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MAX;
	static int16_t x314 = INT16_MIN;
	volatile uint16_t x315 = UINT16_MAX;
	int64_t t78 = 110LL;

	t78 = ((x313|x314)^(x315&x316));

	if (t78 != -1658LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x318 = -1LL;
	int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MAX;
	static volatile int64_t t79 = 32114LL;

	t79 = ((x317|x318)^(x319&x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	static uint16_t x322 = 3578U;
	volatile int32_t x323 = 16283;
	int32_t x324 = -1;
	volatile int64_t t80 = -855LL;

	t80 = ((x321|x322)^(x323&x324));

	if (t80 != -16284LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = 0U;
	int32_t x326 = 226;
	uint16_t x327 = 215U;
	static uint16_t x328 = 166U;

	t81 = ((x325|x326)^(x327&x328));

	if (t81 != 100) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x329 = -15;
	int16_t x330 = INT16_MAX;
	uint8_t x331 = 0U;
	int8_t x332 = -1;
	volatile int32_t t82 = 99817755;

	t82 = ((x329|x330)^(x331&x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int8_t x335 = INT8_MIN;
	uint16_t x336 = 17U;
	volatile int32_t t83 = 14774102;

	t83 = ((x333|x334)^(x335&x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 1;
	int8_t x338 = 1;
	uint16_t x339 = 26382U;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 90165715;

	t84 = ((x337|x338)^(x339&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	volatile uint32_t x342 = 1528U;
	static volatile int16_t x344 = INT16_MAX;
	volatile uint32_t t85 = 319687U;

	t85 = ((x341|x342)^(x343&x344));

	if (t85 != 33136U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int8_t x346 = -1;
	static uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;

	t86 = ((x345|x346)^(x347&x348));

	if (t86 != -129) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 13U;
	static volatile int32_t x350 = -11;
	static volatile int8_t x351 = 61;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 40204925;

	t87 = ((x349|x350)^(x351&x352));

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 3095227513LL;
	uint8_t x354 = UINT8_MAX;
	static volatile uint8_t x356 = 0U;
	static int64_t t88 = -691203399288380LL;

	t88 = ((x353|x354)^(x355&x356));

	if (t88 != 3095227647LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	int16_t x358 = -1;
	int64_t x360 = INT64_MIN;
	int64_t t89 = 11LL;

	t89 = ((x357|x358)^(x359&x360));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 0;
	int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	volatile int64_t t90 = INT64_MIN;

	t90 = ((x361|x362)^(x363&x364));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 3672LLU;
	int8_t x368 = -2;
	static volatile uint64_t t91 = 58185394953LLU;

	t91 = ((x365|x366)^(x367&x368));

	if (t91 != 8956708567749561535LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 6884U;
	static int64_t x370 = 47368302LL;
	volatile int64_t t92 = -22997989LL;

	t92 = ((x369|x370)^(x371&x372));

	if (t92 != 47373292LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x374 = 1;
	int8_t x376 = INT8_MIN;

	t93 = ((x373|x374)^(x375&x376));

	if (t93 != 4288966785U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	int32_t x380 = 51;
	volatile int64_t t94 = 3180601518539LL;

	t94 = ((x377|x378)^(x379&x380));

	if (t94 != 4294934528LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = UINT64_MAX;
	uint16_t x383 = 11U;
	uint64_t t95 = 18712613929291LLU;

	t95 = ((x381|x382)^(x383&x384));

	if (t95 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 4804U;
	static int32_t x386 = -1;
	int16_t x387 = 1960;
	uint64_t x388 = 8491364206431656859LLU;
	volatile uint64_t t96 = 1975535660523LLU;

	t96 = ((x385|x386)^(x387&x388));

	if (t96 != 18446744073709550711LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x389 = -1;
	int64_t x390 = -1LL;
	int8_t x391 = -1;
	int32_t x392 = INT32_MIN;
	volatile int64_t t97 = 0LL;

	t97 = ((x389|x390)^(x391&x392));

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	volatile uint32_t x394 = 28772U;
	int16_t x396 = INT16_MIN;
	int64_t t98 = -30746LL;

	t98 = ((x393|x394)^(x395&x396));

	if (t98 != 9223372036854771812LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	uint64_t x398 = UINT64_MAX;
	volatile int64_t x399 = INT64_MIN;
	static int64_t x400 = INT64_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x397|x398)^(x399&x400));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

