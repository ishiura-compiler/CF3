#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x11 = -1;
static volatile int8_t x12 = -5;
int8_t x15 = -9;
volatile int64_t t3 = -160613047LL;
volatile uint64_t t4 = 35865440LLU;
int8_t x21 = -1;
int32_t x23 = -25151476;
static int64_t t5 = 47163690971938LL;
int8_t x47 = INT8_MAX;
volatile uint64_t x67 = UINT64_MAX;
uint16_t x71 = 41U;
int8_t x78 = 1;
static volatile int8_t x79 = INT8_MIN;
int16_t x83 = -1;
volatile uint64_t x94 = UINT64_MAX;
uint64_t t18 = 15061LLU;
static uint32_t x99 = 464628U;
uint32_t t19 = 7172U;
int64_t x103 = 2015510LL;
volatile int8_t x113 = INT8_MIN;
uint64_t x116 = UINT64_MAX;
uint64_t t21 = 1533704842833117165LLU;
uint32_t t22 = 282349740U;
int64_t x145 = INT64_MAX;
volatile uint8_t x146 = 13U;
int16_t x158 = 1;
volatile int32_t x159 = -13686686;
int16_t x169 = INT16_MAX;
volatile int32_t t28 = 0;
int8_t x176 = INT8_MIN;
int8_t x194 = INT8_MAX;
uint32_t x195 = 425405602U;
volatile uint32_t t33 = 23U;
uint32_t x197 = 609992U;
uint32_t t34 = 366496U;
uint16_t x205 = UINT16_MAX;
static int64_t x208 = INT64_MAX;
volatile int8_t x209 = INT8_MAX;
uint64_t x210 = 908673889LLU;
int16_t x212 = 1189;
int16_t x215 = INT16_MAX;
int8_t x216 = INT8_MIN;
int16_t x221 = INT16_MIN;
int16_t x223 = -1;
uint64_t x225 = UINT64_MAX;
volatile uint64_t t40 = 128207623340LLU;
static uint8_t x233 = UINT8_MAX;
uint32_t t43 = 244U;
int16_t x260 = INT16_MIN;
uint32_t x263 = 21U;
volatile uint8_t x272 = 18U;
volatile int32_t t47 = 275174;
int8_t x274 = INT8_MIN;
volatile int64_t x276 = -1LL;
int16_t x277 = 82;
volatile int32_t x286 = INT32_MIN;
int8_t x294 = INT8_MIN;
volatile uint64_t x299 = 131051639743564LLU;
uint16_t x301 = 4009U;
int8_t x302 = 8;
int32_t x317 = INT32_MIN;
int8_t x323 = INT8_MAX;
static int16_t x324 = INT16_MIN;
uint64_t t59 = 222118114957027392LLU;
uint8_t x336 = UINT8_MAX;
volatile uint32_t t60 = 385106U;
volatile uint16_t x341 = UINT16_MAX;
uint64_t t62 = 36760640LLU;
static volatile int32_t x355 = 113228;
int64_t x359 = INT64_MIN;
uint16_t x367 = 9139U;
uint64_t x369 = 4355533476502LLU;
uint16_t x373 = UINT16_MAX;
int32_t x383 = 219981180;
static int16_t x387 = INT16_MIN;
int16_t x403 = 0;
volatile int64_t t74 = 3411LL;
static int64_t x409 = INT64_MAX;
int64_t x410 = 3LL;
int8_t x413 = 0;
static volatile uint16_t x415 = 1012U;
int8_t x416 = INT8_MAX;
uint16_t x417 = UINT16_MAX;
static int16_t x420 = -4204;
volatile uint64_t t77 = 25941139LLU;
uint32_t x424 = UINT32_MAX;
int32_t x425 = INT32_MIN;
static int16_t x439 = -7;
volatile int32_t t82 = -107073;
static int16_t x444 = INT16_MAX;
volatile int64_t t83 = -215554LL;
uint64_t x452 = 7382LLU;
static volatile uint64_t t85 = 1LLU;
int8_t x458 = -1;
int16_t x469 = -246;
static int64_t x470 = INT64_MIN;
uint16_t x501 = UINT16_MAX;
uint8_t x504 = 0U;
volatile int32_t x506 = 0;
uint64_t x511 = UINT64_MAX;
uint64_t t97 = 30076667LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static uint32_t x2 = 308U;
	uint8_t x3 = 12U;
	uint32_t x4 = 52408U;
	volatile uint32_t t0 = 8U;

	t0 = (x1+(x2|(x3+x4)));

	if (t0 != 52723U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -13;
	int64_t x6 = -1LL;
	uint16_t x7 = 3601U;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -4LL;

	t1 = (x5+(x6|(x7+x8)));

	if (t1 != -14LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int32_t x10 = -576;
	int32_t t2 = 89335940;

	t2 = (x9+(x10|(x11+x12)));

	if (t2 != -134) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int8_t x14 = INT8_MAX;
	int16_t x16 = INT16_MIN;

	t3 = (x13+(x14|(x15+x16)));

	if (t3 != -32770LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static volatile int64_t x18 = -125213950092096LL;
	int64_t x19 = -1LL;
	int8_t x20 = INT8_MIN;

	t4 = (x17+(x18|(x19+x20)));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = INT64_MAX;
	int8_t x24 = INT8_MAX;

	t5 = (x21+(x22|(x23+x24)));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	uint32_t x26 = 4173305U;
	static int32_t x27 = -1;
	uint8_t x28 = 1U;
	static volatile uint32_t t6 = 32219U;

	t6 = (x25+(x26|(x27+x28)));

	if (t6 != 4173304U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int16_t x30 = 1412;
	int64_t x31 = -1LL;
	static int16_t x32 = -1;
	uint64_t t7 = 1086763733328612LLU;

	t7 = (x29+(x30|(x31+x32)));

	if (t7 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int64_t x34 = -8226987192324LL;
	int32_t x35 = INT32_MIN;
	uint8_t x36 = 10U;
	volatile int64_t t8 = 40845139LL;

	t8 = (x33+(x34|(x35+x36)));

	if (t8 != -2124820483LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 349LL;
	int8_t x42 = INT8_MIN;
	uint32_t x43 = 62114U;
	volatile uint64_t x44 = 218109018556606732LLU;
	uint64_t t9 = 7LLU;

	t9 = (x41+(x42|(x43+x44)));

	if (t9 != 267LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	volatile uint32_t x46 = 250552U;
	uint8_t x48 = 0U;
	volatile uint32_t t10 = 107U;

	t10 = (x45+(x46|(x47+x48)));

	if (t10 != 217855U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	uint8_t x51 = 3U;
	volatile int32_t x52 = INT32_MIN;
	int32_t t11 = 92344;

	t11 = (x49+(x50|(x51+x52)));

	if (t11 != -253) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -26;
	uint8_t x62 = 6U;
	uint16_t x63 = 81U;
	static volatile uint32_t x64 = UINT32_MAX;
	uint32_t t12 = 101721U;

	t12 = (x61+(x62|(x63+x64)));

	if (t12 != 60U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = 16;
	static int16_t x66 = INT16_MIN;
	uint16_t x68 = 1944U;
	volatile uint64_t t13 = 1LLU;

	t13 = (x65+(x66|(x67+x68)));

	if (t13 != 18446744073709520807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 121355;
	static uint32_t x70 = UINT32_MAX;
	int8_t x72 = INT8_MAX;
	volatile uint32_t t14 = 1U;

	t14 = (x69+(x70|(x71+x72)));

	if (t14 != 121354U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x77 = -1;
	uint32_t x80 = 8946U;
	uint32_t t15 = 0U;

	t15 = (x77+(x78|(x79+x80)));

	if (t15 != 8818U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int8_t x82 = -1;
	uint64_t x84 = 112493917905LLU;
	uint64_t t16 = 268045LLU;

	t16 = (x81+(x82|(x83+x84)));

	if (t16 != 65534LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x85 = 1U;
	int32_t x86 = INT32_MIN;
	static volatile int64_t x87 = 3175886777339LL;
	int32_t x88 = -1;
	int64_t t17 = -42178541LL;

	t17 = (x85+(x86|(x87+x88)));

	if (t17 != -241538053LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	uint16_t x95 = 784U;
	static int16_t x96 = INT16_MIN;

	t18 = (x93+(x94|(x95+x96)));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = 2;
	int32_t x98 = 5950074;
	volatile int8_t x100 = INT8_MAX;

	t19 = (x97+(x98|(x99+x100)));

	if (t19 != 6283133U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = 0U;
	static volatile int8_t x102 = -55;
	static int8_t x104 = INT8_MIN;
	int64_t t20 = -1902484443674094878LL;

	t20 = (x101+(x102|(x103+x104)));

	if (t20 != -33LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x114 = INT64_MIN;
	int32_t x115 = 136743;

	t21 = (x113+(x114|(x115+x116)));

	if (t21 != 9223372036854912422LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x117 = 276U;
	static uint32_t x118 = 214155U;
	int32_t x119 = INT32_MIN;
	uint8_t x120 = 1U;

	t22 = (x117+(x118|(x119+x120)));

	if (t22 != 2147698079U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x121 = 12;
	int64_t x122 = 2LL;
	uint16_t x123 = 964U;
	volatile int64_t x124 = -13340645LL;
	static volatile int64_t t23 = -287761LL;

	t23 = (x121+(x122|(x123+x124)));

	if (t23 != -13339669LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = INT64_MIN;
	volatile int64_t x138 = 27854151LL;
	uint32_t x139 = 14620142U;
	int64_t x140 = -1LL;
	static volatile int64_t t24 = -19182516377178LL;

	t24 = (x137+(x138|(x139+x140)));

	if (t24 != -9223372036821281297LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x147 = 7642U;
	int16_t x148 = INT16_MIN;
	volatile int64_t t25 = 208944618851LL;

	t25 = (x145+(x146|(x147+x148)));

	if (t25 != 9223372036854750686LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x149 = -1;
	static volatile uint32_t x150 = UINT32_MAX;
	int8_t x151 = -1;
	static int8_t x152 = 1;
	uint32_t t26 = 1657U;

	t26 = (x149+(x150|(x151+x152)));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x157 = UINT64_MAX;
	volatile uint8_t x160 = 125U;
	uint64_t t27 = 74202119LLU;

	t27 = (x157+(x158|(x159+x160)));

	if (t27 != 18446744073695865054LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x170 = -3782;
	int32_t x171 = -1;
	int32_t x172 = INT32_MAX;

	t28 = (x169+(x170|(x171+x172)));

	if (t28 != 32765) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x173 = 2819U;
	int8_t x174 = INT8_MIN;
	int8_t x175 = -16;
	volatile int32_t t29 = -32890;

	t29 = (x173+(x174|(x175+x176)));

	if (t29 != 2803) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x181 = 0U;
	uint32_t x182 = UINT32_MAX;
	uint32_t x183 = 14283221U;
	int32_t x184 = INT32_MIN;
	static uint32_t t30 = UINT32_MAX;

	t30 = (x181+(x182|(x183+x184)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x185 = -167867LL;
	int32_t x186 = INT32_MAX;
	static volatile int8_t x187 = INT8_MIN;
	volatile int16_t x188 = 1;
	int64_t t31 = -3LL;

	t31 = (x185+(x186|(x187+x188)));

	if (t31 != -167868LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile int8_t x190 = 5;
	uint8_t x191 = UINT8_MAX;
	int8_t x192 = -6;
	int32_t t32 = -819;

	t32 = (x189+(x190|(x191+x192)));

	if (t32 != -2147483395) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x193 = 15U;
	volatile int16_t x196 = INT16_MAX;

	t33 = (x193+(x194|(x195+x196)));

	if (t33 != 425438478U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x198 = INT8_MIN;
	uint8_t x199 = UINT8_MAX;
	uint8_t x200 = 1U;

	t34 = (x197+(x198|(x199+x200)));

	if (t34 != 609864U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MAX;
	uint32_t x203 = 22U;
	int8_t x204 = INT8_MIN;
	static volatile int64_t t35 = 142003884139180LL;

	t35 = (x201+(x202|(x203+x204)));

	if (t35 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x206 = 4651U;
	static volatile int32_t x207 = INT32_MIN;
	volatile int64_t t36 = 746277701038LL;

	t36 = (x205+(x206|(x207+x208)));

	if (t36 != 9223372034707357694LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x211 = -3;
	uint64_t t37 = 3439917567411999665LLU;

	t37 = (x209+(x210|(x211+x212)));

	if (t37 != 908675170LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = 222188LL;
	static int16_t x214 = INT16_MIN;
	static int64_t t38 = -43140638688053LL;

	t38 = (x213+(x214|(x215+x216)));

	if (t38 != 222059LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x222 = INT8_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t39 = -12054825;

	t39 = (x221+(x222|(x223+x224)));

	if (t39 != -32769) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x226 = 426;
	volatile uint32_t x227 = UINT32_MAX;
	volatile int32_t x228 = -10125;

	t40 = (x225+(x226|(x227+x228)));

	if (t40 != 4294957561LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x229 = 233204;
	int64_t x230 = 8450295852LL;
	int32_t x231 = 1;
	int16_t x232 = -1;
	volatile int64_t t41 = -258920263324171373LL;

	t41 = (x229+(x230|(x231+x232)));

	if (t41 != 8450529056LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x234 = 8U;
	volatile uint16_t x235 = 11U;
	volatile int64_t x236 = INT64_MIN;
	volatile int64_t t42 = -439519LL;

	t42 = (x233+(x234|(x235+x236)));

	if (t42 != -9223372036854775542LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x237 = 2960941U;
	uint8_t x238 = 4U;
	static int8_t x239 = -1;
	volatile int8_t x240 = -4;

	t43 = (x237+(x238|(x239+x240)));

	if (t43 != 2960940U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x245 = 0U;
	int32_t x246 = INT32_MIN;
	uint64_t x247 = 164393829226LLU;
	int64_t x248 = -32LL;
	volatile uint64_t t44 = 41LLU;

	t44 = (x245+(x246|(x247+x248)));

	if (t44 != 18446744072747139914LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = 36767185U;
	static uint8_t x258 = 2U;
	uint64_t x259 = 119074LLU;
	uint64_t t45 = 766150359474548LLU;

	t45 = (x257+(x258|(x259+x260)));

	if (t45 != 36853491LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = -1;
	static volatile uint64_t x262 = UINT64_MAX;
	uint32_t x264 = 3943U;
	volatile uint64_t t46 = 7834237676748778LLU;

	t46 = (x261+(x262|(x263+x264)));

	if (t46 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = -1;
	volatile int16_t x271 = -1;

	t47 = (x269+(x270|(x271+x272)));

	if (t47 != -32769) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x273 = -58787974;
	uint16_t x275 = UINT16_MAX;
	volatile int64_t t48 = -605LL;

	t48 = (x273+(x274|(x275+x276)));

	if (t48 != -58787976LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x278 = 1673763455LLU;
	volatile int64_t x279 = -587LL;
	uint64_t x280 = 6858534783374LLU;
	static uint64_t t49 = 1181015403LLU;

	t49 = (x277+(x278|(x279+x280)));

	if (t49 != 6858589315025LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x281 = INT32_MAX;
	static volatile int8_t x282 = -31;
	int64_t x283 = INT64_MIN;
	static uint16_t x284 = 2U;
	volatile int64_t t50 = 231204741LL;

	t50 = (x281+(x282|(x283+x284)));

	if (t50 != 2147483618LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = INT8_MAX;
	int64_t x287 = -1LL;
	static uint32_t x288 = 18476072U;
	static volatile int64_t t51 = -977900593616589LL;

	t51 = (x285+(x286|(x287+x288)));

	if (t51 != -2129007450LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x289 = 1144795065088LLU;
	volatile uint64_t x290 = UINT64_MAX;
	static int8_t x291 = INT8_MAX;
	uint16_t x292 = UINT16_MAX;
	volatile uint64_t t52 = 6099045123207480889LLU;

	t52 = (x289+(x290|(x291+x292)));

	if (t52 != 1144795065087LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x293 = 532526LLU;
	volatile uint32_t x295 = 700U;
	static volatile int64_t x296 = 4445166112LL;
	uint64_t t53 = 279LLU;

	t53 = (x293+(x294|(x295+x296)));

	if (t53 != 532490LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x297 = UINT64_MAX;
	int16_t x298 = INT16_MIN;
	static uint64_t x300 = UINT64_MAX;
	volatile uint64_t t54 = 193336LLU;

	t54 = (x297+(x298|(x299+x300)));

	if (t54 != 18446744073709528138LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x303 = 139467U;
	int8_t x304 = INT8_MIN;
	volatile uint32_t t55 = 0U;

	t55 = (x301+(x302|(x303+x304)));

	if (t55 != 143348U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = INT8_MIN;
	static uint64_t x306 = 59683185LLU;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = 20U;
	static uint64_t t56 = 931469380421784LLU;

	t56 = (x305+(x306|(x307+x308)));

	if (t56 != 18446744073709531381LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x309 = -1LL;
	volatile uint8_t x310 = 0U;
	int16_t x311 = -10;
	int16_t x312 = INT16_MIN;
	volatile int64_t t57 = 32911621LL;

	t57 = (x309+(x310|(x311+x312)));

	if (t57 != -32779LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x318 = UINT8_MAX;
	static uint64_t x319 = 18075516149LLU;
	volatile uint32_t x320 = 40492U;
	volatile uint64_t t58 = 356738215577969596LLU;

	t58 = (x317+(x318|(x319+x320)));

	if (t58 != 15928073215LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = INT8_MIN;
	static uint64_t x322 = 7LLU;

	t59 = (x321+(x322|(x323+x324)));

	if (t59 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x333 = -6;
	int32_t x334 = INT32_MAX;
	uint32_t x335 = UINT32_MAX;

	t60 = (x333+(x334|(x335+x336)));

	if (t60 != 2147483641U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x342 = 334;
	int8_t x343 = INT8_MAX;
	int16_t x344 = INT16_MAX;
	volatile int32_t t61 = -337138;

	t61 = (x341+(x342|(x343+x344)));

	if (t61 != 98685) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x345 = 22029247515LLU;
	int64_t x346 = -1LL;
	volatile uint32_t x347 = UINT32_MAX;
	int32_t x348 = -1;

	t62 = (x345+(x346|(x347+x348)));

	if (t62 != 22029247514LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x349 = 4814LLU;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 41U;
	static uint64_t t63 = 23385219524333284LLU;

	t63 = (x349+(x350|(x351+x352)));

	if (t63 != 4294972109LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x353 = -1LL;
	static int32_t x354 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	static volatile int64_t t64 = 2699790207728LL;

	t64 = (x353+(x354|(x355+x356)));

	if (t64 != -2147370421LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x357 = INT32_MAX;
	int8_t x358 = INT8_MIN;
	uint32_t x360 = 6334U;
	int64_t t65 = -1601268LL;

	t65 = (x357+(x358|(x359+x360)));

	if (t65 != 2147483581LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = INT16_MIN;
	volatile uint64_t x362 = UINT64_MAX;
	int32_t x363 = -1;
	volatile int16_t x364 = INT16_MAX;
	volatile uint64_t t66 = 980572524947LLU;

	t66 = (x361+(x362|(x363+x364)));

	if (t66 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x365 = INT64_MIN;
	uint64_t x366 = 49979086LLU;
	static int16_t x368 = 0;
	static uint64_t t67 = 2100143103230352109LLU;

	t67 = (x365+(x366|(x367+x368)));

	if (t67 != 9223372036904763391LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x370 = 14;
	uint8_t x371 = 0U;
	int8_t x372 = INT8_MAX;
	uint64_t t68 = 1410162LLU;

	t68 = (x369+(x370|(x371+x372)));

	if (t68 != 4355533476629LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x374 = 1LLU;
	volatile int64_t x375 = 6165LL;
	static volatile int8_t x376 = 1;
	static uint64_t t69 = 39148821035010859LLU;

	t69 = (x373+(x374|(x375+x376)));

	if (t69 != 71702LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = INT8_MIN;
	volatile uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MAX;
	static volatile uint32_t t70 = 921U;

	t70 = (x377+(x378|(x379+x380)));

	if (t70 != 125U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x381 = UINT16_MAX;
	static uint16_t x382 = 17846U;
	uint16_t x384 = 3U;
	volatile int32_t t71 = -14043;

	t71 = (x381+(x382|(x383+x384)));

	if (t71 != 220063230) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x385 = INT32_MAX;
	static int16_t x386 = -670;
	int32_t x388 = INT32_MAX;
	volatile int32_t t72 = 1553;

	t72 = (x385+(x386|(x387+x388)));

	if (t72 != 2147483646) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = INT8_MIN;
	static volatile uint32_t x399 = UINT32_MAX;
	volatile int8_t x400 = INT8_MAX;
	volatile uint32_t t73 = 1505927468U;

	t73 = (x397+(x398|(x399+x400)));

	if (t73 != 253U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x401 = 81143454394LL;
	int8_t x402 = INT8_MIN;
	static int8_t x404 = -1;

	t74 = (x401+(x402|(x403+x404)));

	if (t74 != 81143454393LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x411 = -1;
	int16_t x412 = INT16_MIN;
	int64_t t75 = -3282LL;

	t75 = (x409+(x410|(x411+x412)));

	if (t75 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x414 = INT16_MAX;
	int32_t t76 = 0;

	t76 = (x413+(x414|(x415+x416)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x418 = 7LLU;
	volatile uint8_t x419 = 61U;

	t77 = (x417+(x418|(x419+x420)));

	if (t77 != 61398LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x421 = INT8_MIN;
	volatile uint8_t x422 = UINT8_MAX;
	static volatile int32_t x423 = 8;
	static volatile uint32_t t78 = 1190U;

	t78 = (x421+(x422|(x423+x424)));

	if (t78 != 127U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x426 = 24U;
	uint64_t x427 = 2571874213148624LLU;
	static uint16_t x428 = 1U;
	uint64_t t79 = 22LLU;

	t79 = (x425+(x426|(x427+x428)));

	if (t79 != 2571872065664985LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x429 = 3U;
	static uint64_t x430 = UINT64_MAX;
	int16_t x431 = INT16_MAX;
	volatile int32_t x432 = INT32_MIN;
	uint64_t t80 = 155176929481493LLU;

	t80 = (x429+(x430|(x431+x432)));

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x433 = INT64_MAX;
	int64_t x434 = -1LL;
	int32_t x435 = -1;
	int8_t x436 = 39;
	int64_t t81 = -1138627280506883LL;

	t81 = (x433+(x434|(x435+x436)));

	if (t81 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x437 = INT16_MIN;
	volatile int8_t x438 = INT8_MAX;
	int16_t x440 = INT16_MIN;

	t82 = (x437+(x438|(x439+x440)));

	if (t82 != -65537) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x441 = 282U;
	uint8_t x442 = 7U;
	static volatile int64_t x443 = INT64_MIN;

	t83 = (x441+(x442|(x443+x444)));

	if (t83 != -9223372036854742759LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x445 = 42U;
	volatile int8_t x446 = -1;
	uint64_t x447 = 22335722863LLU;
	uint32_t x448 = UINT32_MAX;
	volatile uint64_t t84 = 26757899LLU;

	t84 = (x445+(x446|(x447+x448)));

	if (t84 != 41LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x449 = 1;
	volatile int64_t x450 = INT64_MIN;
	int32_t x451 = INT32_MIN;

	t85 = (x449+(x450|(x451+x452)));

	if (t85 != 18446744071562075351LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x457 = INT8_MIN;
	uint16_t x459 = 2U;
	uint32_t x460 = 31466U;
	volatile uint32_t t86 = 741U;

	t86 = (x457+(x458|(x459+x460)));

	if (t86 != 4294967167U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x461 = 28U;
	int16_t x462 = -1;
	int8_t x463 = INT8_MIN;
	int32_t x464 = -4709324;
	volatile int32_t t87 = -7691;

	t87 = (x461+(x462|(x463+x464)));

	if (t87 != 27) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x471 = INT8_MAX;
	static uint8_t x472 = UINT8_MAX;
	int64_t t88 = 952LL;

	t88 = (x469+(x470|(x471+x472)));

	if (t88 != -9223372036854775672LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x473 = INT32_MAX;
	uint32_t x474 = 304668U;
	int16_t x475 = -66;
	int16_t x476 = INT16_MIN;
	uint32_t t89 = 0U;

	t89 = (x473+(x474|(x475+x476)));

	if (t89 != 2147483581U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x477 = INT16_MIN;
	volatile int8_t x478 = INT8_MIN;
	uint8_t x479 = 0U;
	static int32_t x480 = 373660731;
	int32_t t90 = -114499106;

	t90 = (x477+(x478|(x479+x480)));

	if (t90 != -32837) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x481 = 7;
	int32_t x482 = 55690595;
	uint64_t x483 = 2LLU;
	int8_t x484 = -1;
	volatile uint64_t t91 = 6519647299451LLU;

	t91 = (x481+(x482|(x483+x484)));

	if (t91 != 55690602LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x485 = INT16_MIN;
	static volatile uint64_t x486 = 304898829175LLU;
	uint64_t x487 = 74043905516LLU;
	int8_t x488 = INT8_MAX;
	uint64_t t92 = 60127096266900LLU;

	t92 = (x485+(x486|(x487+x488)));

	if (t92 != 377915080575LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x489 = INT16_MIN;
	uint8_t x490 = 2U;
	int64_t x491 = -1LL;
	int16_t x492 = -1;
	int64_t t93 = -638930128LL;

	t93 = (x489+(x490|(x491+x492)));

	if (t93 != -32770LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x497 = INT16_MIN;
	uint64_t x498 = UINT64_MAX;
	volatile uint64_t x499 = 1572249439520LLU;
	static int16_t x500 = INT16_MIN;
	volatile uint64_t t94 = 20025746763LLU;

	t94 = (x497+(x498|(x499+x500)));

	if (t94 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x502 = 7727193U;
	int8_t x503 = -1;
	volatile uint32_t t95 = 12878U;

	t95 = (x501+(x502|(x503+x504)));

	if (t95 != 65534U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x505 = INT8_MIN;
	int64_t x507 = -1LL;
	int32_t x508 = INT32_MIN;
	int64_t t96 = -143151610306191LL;

	t96 = (x505+(x506|(x507+x508)));

	if (t96 != -2147483777LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x509 = INT64_MIN;
	int64_t x510 = INT64_MIN;
	static int16_t x512 = INT16_MIN;

	t97 = (x509+(x510|(x511+x512)));

	if (t97 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x513 = INT8_MAX;
	volatile int64_t x514 = 1738614788169679LL;
	volatile int8_t x515 = 7;
	volatile int16_t x516 = -1;
	int64_t t98 = 2526185393LL;

	t98 = (x513+(x514|(x515+x516)));

	if (t98 != 1738614788169806LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x517 = INT8_MAX;
	static uint16_t x518 = 37U;
	uint8_t x519 = 63U;
	static int32_t x520 = -1;
	int32_t t99 = -460555;

	t99 = (x517+(x518|(x519+x520)));

	if (t99 != 190) { NG(); } else { ; }
	
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

