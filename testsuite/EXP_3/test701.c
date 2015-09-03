#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -292603957672619LL;
volatile uint64_t t3 = 5510027475LLU;
volatile uint32_t x21 = UINT32_MAX;
uint8_t x22 = UINT8_MAX;
uint8_t x24 = 53U;
int8_t x29 = 0;
int8_t x32 = INT8_MAX;
volatile int64_t t6 = -10781155740773LL;
volatile int32_t x43 = INT32_MIN;
uint32_t x47 = 97702579U;
uint64_t t9 = 45655044199716LLU;
volatile int8_t x51 = 4;
int32_t t10 = 1;
static int64_t t12 = 2118981020417LL;
uint16_t x82 = 406U;
uint8_t x86 = 4U;
int16_t x88 = INT16_MIN;
int64_t x91 = -1LL;
int8_t x93 = -3;
volatile int8_t x99 = -1;
uint64_t x110 = UINT64_MAX;
static int32_t x112 = -1;
volatile int16_t x117 = -1;
int32_t t24 = 21;
uint32_t x121 = UINT32_MAX;
int16_t x122 = -1;
uint16_t x130 = 2U;
uint64_t x132 = 105461947626633436LLU;
uint64_t x133 = 382513919378626LLU;
volatile uint32_t x136 = UINT32_MAX;
int32_t x137 = 5288643;
volatile int16_t x150 = INT16_MAX;
volatile int64_t t32 = -354LL;
uint64_t x159 = 195836406847588862LLU;
int32_t x166 = INT32_MAX;
static volatile int64_t t38 = -112073098792188852LL;
uint64_t x178 = 788329LLU;
static volatile uint64_t x196 = 20754LLU;
volatile uint8_t x199 = 18U;
uint64_t x202 = UINT64_MAX;
int64_t x205 = 2690853313LL;
int32_t x206 = INT32_MIN;
int64_t t43 = -7LL;
static uint32_t x211 = 3U;
uint32_t t44 = 1305020U;
volatile uint32_t x216 = 605228U;
int64_t x218 = INT64_MIN;
static uint32_t x224 = 1527469804U;
volatile uint32_t x225 = UINT32_MAX;
int64_t x226 = 3268531559451LL;
static uint32_t x232 = UINT32_MAX;
int16_t x240 = -6;
uint32_t t53 = 6153U;
volatile uint64_t t57 = 52LLU;
static volatile uint8_t x268 = 7U;
static uint32_t t58 = 728001U;
volatile uint8_t x273 = 5U;
int32_t x281 = INT32_MIN;
static uint64_t x287 = 1625112600559289LLU;
uint8_t x294 = UINT8_MAX;
int8_t x297 = INT8_MIN;
volatile int16_t x298 = -1;
int32_t x304 = -1;
int8_t x307 = -1;
volatile int64_t x311 = INT64_MIN;
static uint8_t x322 = 11U;
int64_t t72 = -7700943LL;
static int64_t x326 = -9382LL;
volatile uint64_t x342 = 163942LLU;
int16_t x356 = INT16_MAX;
static int32_t x370 = -1;
static int8_t x372 = 1;
static int64_t t79 = 1819942697104258714LL;
static int64_t x375 = 90408934249505LL;
int16_t x384 = INT16_MAX;
volatile uint64_t t81 = 230502LLU;
int32_t x385 = 9241;
uint64_t t83 = 1LLU;
static int32_t x400 = INT32_MIN;
volatile int32_t t86 = 1;
volatile uint32_t x406 = 23U;
int8_t x412 = INT8_MAX;
int16_t x414 = -1;
static int16_t x415 = INT16_MIN;
uint8_t x418 = UINT8_MAX;
int32_t t91 = 3085;
volatile int16_t x429 = -120;
static uint8_t x430 = 0U;
int32_t t93 = 0;
int32_t x437 = INT32_MIN;
static volatile int64_t x438 = INT64_MIN;
uint64_t t97 = 7418219LLU;
int32_t x451 = INT32_MIN;
static volatile uint64_t t98 = 16316LLU;


void f0(void) {
	int8_t x1 = 0;
	uint16_t x2 = 28603U;
	int16_t x3 = 10644;
	int64_t x4 = INT64_MIN;

	t0 = ((x1-x2)|(x3%x4));

	if (t0 != -17963LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	int8_t x8 = 1;
	int64_t t1 = 1804426462910LL;

	t1 = ((x5-x6)|(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = -1;
	volatile uint8_t x14 = 0U;
	volatile uint8_t x15 = 52U;
	uint64_t x16 = 3956822225LLU;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x13-x14)|(x15%x16));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = INT32_MIN;
	int64_t x20 = -1856930904286LL;

	t3 = ((x17-x18)|(x19%x20));

	if (t3 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x23 = 451U;
	static uint32_t t4 = 16384U;

	t4 = ((x21-x22)|(x23%x24));

	if (t4 != 4294967067U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = 269U;
	volatile int16_t x26 = INT16_MAX;
	static int64_t x27 = 347237184871679LL;
	int8_t x28 = INT8_MAX;
	int64_t t5 = 2LL;

	t5 = ((x25-x26)|(x27%x28));

	if (t5 != 4294934878LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = INT64_MIN;

	t6 = ((x29-x30)|(x31%x32));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 164319;
	int8_t x34 = -5;
	static volatile int32_t x35 = INT32_MIN;
	int64_t x36 = -12592210LL;
	volatile int64_t t7 = 9777757LL;

	t7 = ((x33-x34)|(x35%x36));

	if (t7 != -6643724LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	volatile uint32_t x42 = 760175U;
	volatile int8_t x44 = INT8_MIN;
	volatile uint64_t t8 = 366LLU;

	t8 = ((x41-x42)|(x43%x44));

	if (t8 != 18446744073708791440LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 37U;
	volatile int32_t x46 = -1;
	uint64_t x48 = UINT64_MAX;

	t9 = ((x45-x46)|(x47%x48));

	if (t9 != 97702583LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -53;
	int16_t x50 = INT16_MAX;
	static int32_t x52 = -1;

	t10 = ((x49-x50)|(x51%x52));

	if (t10 != -32820) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = 1;
	volatile int16_t x54 = INT16_MAX;
	int16_t x55 = -167;
	volatile int8_t x56 = 12;
	volatile int32_t t11 = -25319670;

	t11 = ((x53-x54)|(x55%x56));

	if (t11 != -9) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	volatile int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MIN;
	int32_t x60 = 18;

	t12 = ((x57-x58)|(x59%x60));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	volatile uint64_t x66 = 17LLU;
	int8_t x67 = -13;
	int16_t x68 = -812;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x65-x66)|(x67%x68));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = 2;
	uint16_t x74 = 1377U;
	int8_t x75 = -1;
	int16_t x76 = 752;
	volatile int32_t t14 = -5;

	t14 = ((x73-x74)|(x75%x76));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x81 = 2918;
	static int32_t x83 = 1;
	int64_t x84 = INT64_MIN;
	volatile int64_t t15 = -4736LL;

	t15 = ((x81-x82)|(x83%x84));

	if (t15 != 2513LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = INT8_MIN;
	static uint32_t x87 = 826U;
	volatile uint32_t t16 = 793717534U;

	t16 = ((x85-x86)|(x87%x88));

	if (t16 != 4294967166U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x89 = INT64_MIN;
	static int32_t x90 = INT32_MIN;
	int8_t x92 = -1;
	int64_t t17 = -2787LL;

	t17 = ((x89-x90)|(x91%x92));

	if (t17 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x94 = INT16_MAX;
	volatile int8_t x95 = INT8_MIN;
	volatile int64_t x96 = INT64_MAX;
	volatile int64_t t18 = 1LL;

	t18 = ((x93-x94)|(x95%x96));

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = 107108LL;
	uint8_t x98 = 18U;
	static int8_t x100 = -1;
	int64_t t19 = -198806973504LL;

	t19 = ((x97-x98)|(x99%x100));

	if (t19 != 107090LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 5717465U;
	static int32_t x102 = INT32_MIN;
	volatile int32_t x103 = INT32_MAX;
	uint8_t x104 = 2U;
	volatile uint32_t t20 = 0U;

	t20 = ((x101-x102)|(x103%x104));

	if (t20 != 2153201113U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 92553463915919LLU;
	int32_t x106 = -1;
	uint64_t x107 = 27164626337LLU;
	int16_t x108 = INT16_MIN;
	uint64_t t21 = 3LLU;

	t21 = ((x105-x106)|(x107%x108));

	if (t21 != 92562374782385LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	volatile int16_t x111 = INT16_MIN;
	volatile uint64_t t22 = 30856281901LLU;

	t22 = ((x109-x110)|(x111%x112));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = -1;
	uint8_t x114 = 19U;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t23 = -459300943;

	t23 = ((x113-x114)|(x115%x116));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = 215;
	int16_t x120 = INT16_MIN;

	t24 = ((x117-x118)|(x119%x120));

	if (t24 != -41) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x123 = UINT8_MAX;
	static int16_t x124 = 2;
	uint32_t t25 = 14U;

	t25 = ((x121-x122)|(x123%x124));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = 4U;
	static uint64_t x126 = 26LLU;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = INT8_MIN;
	uint64_t t26 = 338LLU;

	t26 = ((x125-x126)|(x127%x128));

	if (t26 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MAX;
	int8_t x131 = INT8_MAX;
	volatile uint64_t t27 = 1532391146014265067LLU;

	t27 = ((x129-x130)|(x131%x132));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x134 = UINT8_MAX;
	volatile uint64_t x135 = 1LLU;
	uint64_t t28 = 31755407196LLU;

	t28 = ((x133-x134)|(x135%x136));

	if (t28 != 382513919378371LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x138 = UINT8_MAX;
	static uint32_t x139 = UINT32_MAX;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t29 = 2224944637218413LLU;

	t29 = ((x137-x138)|(x139%x140));

	if (t29 != 4294967295LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -1;
	static volatile int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = 272815LLU;
	uint64_t t30 = 19420678LLU;

	t30 = ((x141-x142)|(x143%x144));

	if (t30 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x145 = INT32_MAX;
	volatile int32_t x146 = 76207358;
	int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	volatile int32_t t31 = 18980;

	t31 = ((x145-x146)|(x147%x148));

	if (t31 != 2071276289) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MIN;
	int64_t x151 = -1LL;
	volatile int64_t x152 = INT64_MAX;

	t32 = ((x149-x150)|(x151%x152));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -233202533LL;
	int32_t x154 = INT32_MAX;
	int32_t x155 = -1;
	int64_t x156 = -18414LL;
	volatile int64_t t33 = 103577978846LL;

	t33 = ((x153-x154)|(x155%x156));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x157 = INT8_MIN;
	uint16_t x158 = 12066U;
	static int64_t x160 = INT64_MAX;
	uint64_t t34 = 23594LLU;

	t34 = ((x157-x158)|(x159%x160));

	if (t34 != 18446744073709541886LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MIN;
	static uint32_t x162 = 51494181U;
	volatile int32_t x163 = INT32_MIN;
	int32_t x164 = 150;
	volatile uint32_t t35 = 15U;

	t35 = ((x161-x162)|(x163%x164));

	if (t35 != 4294967263U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MAX;
	static int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MIN;
	int64_t t36 = -1304596629090742238LL;

	t36 = ((x165-x166)|(x167%x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -1;
	uint16_t x170 = 827U;
	int32_t x171 = -1;
	static uint8_t x172 = UINT8_MAX;
	int32_t t37 = -65047;

	t37 = ((x169-x170)|(x171%x172));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = -1;
	static int64_t x175 = 34201792402539LL;
	volatile int64_t x176 = -1LL;

	t38 = ((x173-x174)|(x175%x176));

	if (t38 != -127LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	static int8_t x179 = -4;
	int64_t x180 = 275527238985LL;
	static uint64_t t39 = UINT64_MAX;

	t39 = ((x177-x178)|(x179%x180));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	uint32_t x195 = UINT32_MAX;
	uint64_t t40 = 54674500889966915LLU;

	t40 = ((x193-x194)|(x195%x196));

	if (t40 != 32667LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = 5;
	static volatile int8_t x198 = 2;
	uint16_t x200 = UINT16_MAX;
	static int32_t t41 = 36551;

	t41 = ((x197-x198)|(x199%x200));

	if (t41 != 19) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x201 = -1LL;
	uint16_t x203 = 6126U;
	static int16_t x204 = INT16_MAX;
	uint64_t t42 = 39274826330109910LLU;

	t42 = ((x201-x202)|(x203%x204));

	if (t42 != 6126LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x207 = 12U;
	int32_t x208 = -1;

	t43 = ((x205-x206)|(x207%x208));

	if (t43 != 4838336961LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = -471237861;
	int16_t x212 = INT16_MAX;

	t44 = ((x209-x210)|(x211%x212));

	if (t44 != 471205095U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MIN;
	static int32_t x214 = -13387;
	int8_t x215 = INT8_MIN;
	static volatile uint32_t t45 = 664U;

	t45 = ((x213-x214)|(x215%x216));

	if (t45 != 277483U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x217 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	volatile int64_t t46 = -2949169531083441417LL;

	t46 = ((x217-x218)|(x219%x220));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x221 = 154U;
	volatile int16_t x222 = INT16_MIN;
	int8_t x223 = -1;
	uint32_t t47 = 2883U;

	t47 = ((x221-x222)|(x223%x224));

	if (t47 != 1240060607U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x227 = UINT8_MAX;
	static int8_t x228 = -18;
	int64_t t48 = -69206LL;

	t48 = ((x225-x226)|(x227%x228));

	if (t48 != -3264236592153LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = -1;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = INT8_MIN;
	uint32_t t49 = 26U;

	t49 = ((x229-x230)|(x231%x232));

	if (t49 != 4294967168U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x233 = 469272416U;
	static int8_t x234 = INT8_MAX;
	int8_t x235 = 56;
	volatile uint64_t x236 = 1860918490LLU;
	volatile uint64_t t50 = 164725644LLU;

	t50 = ((x233-x234)|(x235%x236));

	if (t50 != 469272313LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = 0;
	volatile uint16_t x238 = 9U;
	uint64_t x239 = UINT64_MAX;
	uint64_t t51 = 3419315822310LLU;

	t51 = ((x237-x238)|(x239%x240));

	if (t51 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x241 = 115U;
	uint8_t x242 = 123U;
	static int16_t x243 = 347;
	static int16_t x244 = INT16_MIN;
	static int32_t t52 = 12838;

	t52 = ((x241-x242)|(x243%x244));

	if (t52 != -5) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x245 = UINT32_MAX;
	volatile uint16_t x246 = 6U;
	int32_t x247 = 15622146;
	int32_t x248 = -15716;

	t53 = ((x245-x246)|(x247%x248));

	if (t53 != 4294967291U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x249 = 0U;
	int16_t x250 = INT16_MIN;
	uint32_t x251 = 417353237U;
	int16_t x252 = -1;
	volatile uint32_t t54 = 5474984U;

	t54 = ((x249-x250)|(x251%x252));

	if (t54 != 417386005U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MIN;
	volatile int64_t x254 = INT64_MIN;
	static int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MIN;
	int64_t t55 = -360578933484LL;

	t55 = ((x253-x254)|(x255%x256));

	if (t55 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	volatile int64_t x259 = 684LL;
	static int8_t x260 = -1;
	static int64_t t56 = 4LL;

	t56 = ((x257-x258)|(x259%x260));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MIN;
	volatile int32_t x262 = INT32_MIN;
	static volatile uint8_t x263 = UINT8_MAX;
	uint64_t x264 = UINT64_MAX;

	t57 = ((x261-x262)|(x263%x264));

	if (t57 != 2147483647LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x265 = 14800U;
	uint32_t x266 = 313875416U;
	int8_t x267 = 36;

	t58 = ((x265-x266)|(x267%x268));

	if (t58 != 3981106681U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = 154748444475426LLU;
	int64_t x270 = INT64_MAX;
	volatile int8_t x271 = INT8_MAX;
	volatile int16_t x272 = -1;
	volatile uint64_t t59 = 4582656518LLU;

	t59 = ((x269-x270)|(x271%x272));

	if (t59 != 9223526785299251235LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x274 = INT8_MIN;
	static uint8_t x275 = UINT8_MAX;
	static int16_t x276 = -1;
	volatile int32_t t60 = 7678678;

	t60 = ((x273-x274)|(x275%x276));

	if (t60 != 133) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MAX;
	int64_t x279 = INT64_MAX;
	uint8_t x280 = 36U;
	volatile int64_t t61 = -1LL;

	t61 = ((x277-x278)|(x279%x280));

	if (t61 != -32889LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x282 = -2;
	uint64_t x283 = 305461278LLU;
	volatile int32_t x284 = 1632;
	uint64_t t62 = 1114409303282LLU;

	t62 = ((x281-x282)|(x283%x284));

	if (t62 != 18446744071562069438LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = 7;
	int8_t x288 = -2;
	static volatile uint64_t t63 = 226104022LLU;

	t63 = ((x285-x286)|(x287%x288));

	if (t63 != 1625112600575993LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x289 = 13LLU;
	int16_t x290 = -2;
	int16_t x291 = INT16_MAX;
	static int32_t x292 = INT32_MIN;
	static uint64_t t64 = 29168LLU;

	t64 = ((x289-x290)|(x291%x292));

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x293 = -2509LL;
	static int16_t x295 = INT16_MAX;
	int16_t x296 = -1;
	volatile int64_t t65 = 30LL;

	t65 = ((x293-x294)|(x295%x296));

	if (t65 != -2764LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x299 = 117311071606LL;
	int8_t x300 = 2;
	int64_t t66 = 5610LL;

	t66 = ((x297-x298)|(x299%x300));

	if (t66 != -127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = 3400;
	int32_t x302 = -1;
	int32_t x303 = -1;
	int32_t t67 = 465092847;

	t67 = ((x301-x302)|(x303%x304));

	if (t67 != 3401) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	static volatile uint16_t x308 = 6189U;
	int32_t t68 = 36127659;

	t68 = ((x305-x306)|(x307%x308));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = 1626654820997147LLU;
	volatile int64_t x310 = INT64_MIN;
	volatile int16_t x312 = INT16_MIN;
	static volatile uint64_t t69 = 840549547064801LLU;

	t69 = ((x309-x310)|(x311%x312));

	if (t69 != 9224998691675772955LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = -2441;
	int32_t x314 = 91483;
	int16_t x315 = -1;
	int16_t x316 = INT16_MIN;
	static int32_t t70 = 7;

	t70 = ((x313-x314)|(x315%x316));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x317 = INT8_MIN;
	uint32_t x318 = 403U;
	int16_t x319 = 61;
	int16_t x320 = -12813;
	static uint32_t t71 = 609U;

	t71 = ((x317-x318)|(x319%x320));

	if (t71 != 4294966781U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MAX;
	static int16_t x323 = -1;
	static int64_t x324 = 32041837897LL;

	t72 = ((x321-x322)|(x323%x324));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x325 = INT8_MIN;
	static uint64_t x327 = 5994406181LLU;
	static volatile int8_t x328 = INT8_MIN;
	uint64_t t73 = 121LLU;

	t73 = ((x325-x326)|(x327%x328));

	if (t73 != 5994407207LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x333 = 703449777LLU;
	int16_t x334 = INT16_MAX;
	static int32_t x335 = -1;
	uint32_t x336 = 7197445U;
	uint64_t t74 = 740499LLU;

	t74 = ((x333-x334)|(x335%x336));

	if (t74 != 704510715LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = -525616780054LL;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = -1;
	int16_t x340 = INT16_MAX;
	volatile int64_t t75 = -397928269LL;

	t75 = ((x337-x338)|(x339%x340));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = -40217;
	uint16_t x343 = 8U;
	int8_t x344 = INT8_MIN;
	uint64_t t76 = 733864LLU;

	t76 = ((x341-x342)|(x343%x344));

	if (t76 != 18446744073709347465LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MIN;
	volatile int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	static int32_t x348 = -1;
	int32_t t77 = 89600;

	t77 = ((x345-x346)|(x347%x348));

	if (t77 != -32640) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = -248924;
	int64_t x354 = -6LL;
	volatile int32_t x355 = -8534880;
	volatile int64_t t78 = -410053193885854137LL;

	t78 = ((x353-x354)|(x355%x356));

	if (t78 != -3138LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = INT16_MAX;
	int64_t x371 = INT64_MIN;

	t79 = ((x369-x370)|(x371%x372));

	if (t79 != 32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x373 = -1;
	volatile int32_t x374 = INT32_MIN;
	int32_t x376 = INT32_MIN;
	volatile int64_t t80 = -262402571LL;

	t80 = ((x373-x374)|(x375%x376));

	if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x381 = UINT64_MAX;
	int64_t x382 = -1LL;
	static volatile uint8_t x383 = 75U;

	t81 = ((x381-x382)|(x383%x384));

	if (t81 != 75LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 32U;
	uint32_t x388 = 11141U;
	volatile uint32_t t82 = 1U;

	t82 = ((x385-x386)|(x387%x388));

	if (t82 != 42041U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x389 = INT8_MAX;
	volatile uint8_t x390 = 96U;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;

	t83 = ((x389-x390)|(x391%x392));

	if (t83 != 18446744071562067999LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x393 = 13;
	uint16_t x394 = 9U;
	volatile int8_t x395 = INT8_MIN;
	static int16_t x396 = INT16_MAX;
	volatile int32_t t84 = 218863745;

	t84 = ((x393-x394)|(x395%x396));

	if (t84 != -124) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x397 = INT8_MIN;
	uint16_t x398 = 10U;
	uint64_t x399 = 3LLU;
	volatile uint64_t t85 = 397167LLU;

	t85 = ((x397-x398)|(x399%x400));

	if (t85 != 18446744073709551479LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x401 = -31;
	int32_t x402 = INT32_MIN;
	uint8_t x403 = 38U;
	static int8_t x404 = INT8_MIN;

	t86 = ((x401-x402)|(x403%x404));

	if (t86 != 2147483623) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x405 = UINT16_MAX;
	static int32_t x407 = INT32_MIN;
	volatile int16_t x408 = INT16_MIN;
	volatile uint32_t t87 = 601093U;

	t87 = ((x405-x406)|(x407%x408));

	if (t87 != 65512U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x409 = INT16_MAX;
	int64_t x410 = 33656589602LL;
	uint64_t x411 = 202600415LLU;
	volatile uint64_t t88 = 5948LLU;

	t88 = ((x409-x410)|(x411%x412));

	if (t88 != 18446744040052994813LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = 25U;
	static int16_t x416 = -3244;
	volatile uint32_t t89 = 210915867U;

	t89 = ((x413-x414)|(x415%x416));

	if (t89 != 4294966970U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x417 = 46251U;
	uint16_t x419 = 0U;
	uint32_t x420 = UINT32_MAX;
	uint32_t t90 = 42922U;

	t90 = ((x417-x418)|(x419%x420));

	if (t90 != 45996U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = -12;
	static int32_t x422 = -57;
	static int16_t x423 = 11499;
	static uint16_t x424 = UINT16_MAX;

	t91 = ((x421-x422)|(x423%x424));

	if (t91 != 11503) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x425 = -30638172988LL;
	uint32_t x426 = 1586034394U;
	uint64_t x427 = 2038390920285584LLU;
	uint64_t x428 = 100107LLU;
	volatile uint64_t t92 = 49497873157072LLU;

	t92 = ((x425-x426)|(x427%x428));

	if (t92 != 18446744041485369326LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x431 = 3191;
	int8_t x432 = 2;

	t93 = ((x429-x430)|(x431%x432));

	if (t93 != -119) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x433 = UINT8_MAX;
	int64_t x434 = -1LL;
	int16_t x435 = -1;
	volatile int16_t x436 = -1;
	static int64_t t94 = -187351881166032LL;

	t94 = ((x433-x434)|(x435%x436));

	if (t94 != 256LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x439 = 101;
	int64_t x440 = INT64_MIN;
	int64_t t95 = 83160290LL;

	t95 = ((x437-x438)|(x439%x440));

	if (t95 != 9223372034707292261LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x441 = INT8_MAX;
	int64_t x442 = -1LL;
	int16_t x443 = -1;
	int16_t x444 = INT16_MIN;
	volatile int64_t t96 = -3693LL;

	t96 = ((x441-x442)|(x443%x444));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x445 = INT64_MIN;
	volatile uint64_t x446 = 4301232190LLU;
	static volatile int8_t x447 = -9;
	static volatile int8_t x448 = -33;

	t97 = ((x445-x446)|(x447%x448));

	if (t97 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x449 = INT32_MAX;
	uint64_t x450 = UINT64_MAX;
	uint8_t x452 = 112U;

	t98 = ((x449-x450)|(x451%x452));

	if (t98 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x453 = 2899U;
	int32_t x454 = -1;
	int8_t x455 = INT8_MAX;
	static int16_t x456 = INT16_MAX;
	volatile int32_t t99 = 4;

	t99 = ((x453-x454)|(x455%x456));

	if (t99 != 2943) { NG(); } else { ; }
	
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

