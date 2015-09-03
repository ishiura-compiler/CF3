#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x9 = 21U;
int32_t x16 = INT32_MIN;
uint64_t x17 = 1675436954776LLU;
int8_t x25 = 0;
int16_t x30 = -1;
volatile uint64_t x37 = 2LLU;
int16_t x44 = INT16_MIN;
int32_t x53 = 22;
uint8_t x63 = 7U;
static uint32_t t15 = UINT32_MAX;
uint32_t x68 = UINT32_MAX;
volatile int8_t x72 = INT8_MIN;
int8_t x75 = INT8_MIN;
volatile int8_t x90 = INT8_MIN;
static int8_t x96 = -1;
volatile int64_t t22 = 95737433964LL;
int8_t x101 = INT8_MIN;
volatile uint32_t x103 = 17U;
volatile int32_t x119 = -2;
uint16_t x127 = UINT16_MAX;
static uint16_t x130 = 6690U;
static int8_t x132 = INT8_MIN;
static uint64_t x143 = UINT64_MAX;
int8_t x146 = INT8_MIN;
int16_t x151 = INT16_MAX;
int32_t x154 = -88790891;
static int16_t x155 = INT16_MAX;
int16_t x156 = -30;
int16_t x164 = INT16_MAX;
int16_t x167 = INT16_MAX;
uint8_t x168 = UINT8_MAX;
volatile int32_t t39 = 18;
int64_t x171 = INT64_MIN;
static int16_t x172 = -4000;
int16_t x179 = INT16_MIN;
volatile int16_t x180 = INT16_MIN;
int64_t t43 = -107727220200LL;
static int64_t t44 = -37283598120LL;
volatile int64_t x198 = INT64_MIN;
uint8_t x202 = 12U;
static int64_t x203 = INT64_MAX;
uint8_t x204 = 1U;
static int64_t t47 = -41731002240LL;
int64_t x210 = -1LL;
static uint32_t x212 = 2539062U;
volatile int32_t x214 = INT32_MAX;
static uint32_t x228 = 1246946204U;
int8_t x236 = INT8_MIN;
static int16_t x237 = 0;
int16_t x241 = 3017;
int8_t x242 = -55;
int16_t x251 = INT16_MAX;
volatile uint64_t t57 = 12857763680208LLU;
int8_t x254 = INT8_MIN;
volatile int64_t x256 = INT64_MIN;
uint8_t x257 = UINT8_MAX;
uint32_t x260 = 3U;
uint16_t x262 = 3U;
static int64_t x265 = -1LL;
uint16_t x266 = 27289U;
int8_t x271 = INT8_MAX;
int64_t t62 = -1954024234217898LL;
static int8_t x289 = INT8_MIN;
static uint32_t x291 = 141U;
uint16_t x293 = UINT16_MAX;
int16_t x296 = -1;
int32_t x299 = INT32_MIN;
int64_t x300 = INT64_MIN;
uint32_t x303 = 96074U;
int16_t x305 = -68;
volatile int16_t x323 = 0;
volatile uint8_t x327 = 119U;
int64_t x333 = INT64_MIN;
volatile int16_t x372 = INT16_MIN;
uint64_t x387 = 186322840745734795LLU;
volatile int64_t x398 = INT64_MAX;
volatile int64_t t89 = 307LL;
int64_t x404 = -1LL;
uint16_t x414 = 12U;
int32_t x417 = INT32_MIN;
uint16_t x420 = UINT16_MAX;
uint64_t x421 = 114688213840480LLU;
volatile int8_t x445 = -1;
uint16_t x448 = UINT16_MAX;
volatile uint64_t x452 = 31434531524058LLU;
volatile uint64_t t99 = 5811958614192LLU;


void f0(void) {
	int8_t x1 = 1;
	int32_t x2 = 42193060;
	int16_t x3 = INT16_MIN;
	uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = 31906070573LLU;

	t0 = ((x1|x2)|(x3-x4));

	if (t0 != 18446744073709539493LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static uint32_t x6 = 492U;
	int8_t x7 = 0;
	int32_t x8 = INT32_MAX;
	static volatile uint32_t t1 = 2978U;

	t1 = ((x5|x6)|(x7-x8));

	if (t1 != 2147484159U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -127;
	int32_t t2 = -1;

	t2 = ((x9|x10)|(x11-x12));

	if (t2 != -32641) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -60;
	static volatile int8_t x14 = -1;
	uint64_t x15 = 357LLU;
	uint64_t t3 = UINT64_MAX;

	t3 = ((x13|x14)|(x15-x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 7U;
	static int16_t x19 = INT16_MIN;
	int16_t x20 = -12;
	static uint64_t t4 = 8163942381LLU;

	t4 = ((x17|x18)|(x19-x20));

	if (t4 != 18446744073709524127LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = -8;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -1746491;

	t5 = ((x21|x22)|(x23-x24));

	if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MAX;
	static int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x25|x26)|(x27-x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	uint64_t x31 = UINT64_MAX;
	static uint32_t x32 = 78818U;
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29|x30)|(x31-x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MAX;
	int16_t x35 = -16;
	volatile int16_t x36 = INT16_MAX;
	int32_t t8 = 239;

	t8 = ((x33|x34)|(x35-x36));

	if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	int32_t x39 = 316;
	uint16_t x40 = 812U;
	uint64_t t9 = 29637883LLU;

	t9 = ((x37|x38)|(x39-x40));

	if (t9 != 18446744073709551122LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int8_t x42 = 1;
	int32_t x43 = INT32_MIN;
	volatile int32_t t10 = 0;

	t10 = ((x41|x42)|(x43-x44));

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int16_t x46 = 126;
	uint8_t x47 = UINT8_MAX;
	static int32_t x48 = -1;
	int32_t t11 = 12612;

	t11 = ((x45|x46)|(x47-x48));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint8_t x50 = UINT8_MAX;
	uint32_t x51 = 396U;
	int16_t x52 = -7793;
	static volatile uint32_t t12 = 4842173U;

	t12 = ((x49|x50)|(x51-x52));

	if (t12 != 2147491839U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;
	volatile int64_t x55 = -151581974053864LL;
	volatile int32_t x56 = -12891337;
	static int64_t t13 = -63954LL;

	t13 = ((x53|x54)|(x55-x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -5486927;
	static int8_t x58 = -1;
	int64_t x59 = 1373LL;
	int8_t x60 = 1;
	int64_t t14 = -1041620592547205795LL;

	t14 = ((x57|x58)|(x59-x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = INT16_MIN;
	uint32_t x62 = UINT32_MAX;
	volatile uint32_t x64 = 16684392U;

	t15 = ((x61|x62)|(x63-x64));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = UINT16_MAX;
	static int32_t x66 = -3054921;
	volatile int8_t x67 = 0;
	volatile uint32_t t16 = 48U;

	t16 = ((x65|x66)|(x67-x68));

	if (t16 != 4291952639U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 0;
	static int64_t x70 = -34508LL;
	uint64_t x71 = UINT64_MAX;
	uint64_t t17 = 3724063594000673LLU;

	t17 = ((x69|x70)|(x71-x72));

	if (t17 != 18446744073709517183LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	volatile int32_t x74 = INT32_MIN;
	int16_t x76 = INT16_MAX;
	int32_t t18 = -15238634;

	t18 = ((x73|x74)|(x75-x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x81 = UINT64_MAX;
	uint16_t x82 = 0U;
	static volatile int32_t x83 = 1;
	int8_t x84 = INT8_MAX;
	static uint64_t t19 = UINT64_MAX;

	t19 = ((x81|x82)|(x83-x84));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MAX;
	static volatile int64_t t20 = 232709LL;

	t20 = ((x85|x86)|(x87-x88));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = INT8_MAX;
	int16_t x91 = 44;
	int8_t x92 = INT8_MIN;
	volatile int32_t t21 = 193;

	t21 = ((x89|x90)|(x91-x92));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x93 = UINT16_MAX;
	static int64_t x94 = 28744287319338763LL;
	uint32_t x95 = 757U;

	t22 = ((x93|x94)|(x95-x96));

	if (t22 != 28744287319359487LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x102 = 699806528U;
	int16_t x104 = -1;
	static uint32_t t23 = 136994U;

	t23 = ((x101|x102)|(x103-x104));

	if (t23 != 4294967250U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x105 = 843073;
	static uint32_t x106 = 2U;
	static uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MIN;
	uint32_t t24 = 128028U;

	t24 = ((x105|x106)|(x107-x108));

	if (t24 != 843263U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int16_t x110 = 1;
	int64_t x111 = -1LL;
	static uint64_t x112 = UINT64_MAX;
	volatile uint64_t t25 = 2973344845166700099LLU;

	t25 = ((x109|x110)|(x111-x112));

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 1219477482U;
	int16_t x114 = -73;
	int32_t x115 = INT32_MIN;
	static int64_t x116 = 61937810312812929LL;
	int64_t t26 = 714612037726LL;

	t26 = ((x113|x114)|(x115-x116));

	if (t26 != -61937809274961921LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 14U;
	uint32_t x118 = 1208188636U;
	uint32_t x120 = 1942312490U;
	volatile uint32_t t27 = 0U;

	t27 = ((x117|x118)|(x119-x120));

	if (t27 != 3426484190U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MAX;
	volatile int64_t x122 = -1LL;
	int16_t x123 = INT16_MAX;
	volatile int16_t x124 = -2;
	volatile int64_t t28 = -4045535746929640LL;

	t28 = ((x121|x122)|(x123-x124));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -1;
	int8_t x126 = INT8_MIN;
	uint8_t x128 = 22U;
	static int32_t t29 = -260486591;

	t29 = ((x125|x126)|(x127-x128));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -1;
	static int16_t x131 = INT16_MAX;
	int32_t t30 = 30497;

	t30 = ((x129|x130)|(x131-x132));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = INT16_MIN;
	static volatile uint16_t x134 = 2199U;
	int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MIN;
	volatile int64_t t31 = -17199394950530LL;

	t31 = ((x133|x134)|(x135-x136));

	if (t31 != -30569LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -23;
	static int64_t x138 = -359726495LL;
	uint64_t x139 = 96952337529515653LLU;
	static int16_t x140 = INT16_MIN;
	volatile uint64_t t32 = 15963LLU;

	t32 = ((x137|x138)|(x139-x140));

	if (t32 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MIN;
	static int64_t x142 = INT64_MIN;
	int32_t x144 = 8018;
	volatile uint64_t t33 = 1LLU;

	t33 = ((x141|x142)|(x143-x144));

	if (t33 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 193702073527293975LLU;
	uint16_t x147 = 1091U;
	int8_t x148 = -1;
	uint64_t t34 = 129278273174LLU;

	t34 = ((x145|x146)|(x147-x148));

	if (t34 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MIN;
	int64_t x152 = -1LL;
	volatile int64_t t35 = -15838564LL;

	t35 = ((x149|x150)|(x151-x152));

	if (t35 != -32641LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 7336;
	int32_t t36 = 5;

	t36 = ((x153|x154)|(x155-x156));

	if (t36 != -88752963) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -1;
	uint32_t x158 = 6875113U;
	uint32_t x159 = 22949368U;
	uint32_t x160 = 14987U;
	uint32_t t37 = UINT32_MAX;

	t37 = ((x157|x158)|(x159-x160));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MIN;
	uint8_t x162 = 21U;
	uint16_t x163 = UINT16_MAX;
	int64_t t38 = 24616869504563LL;

	t38 = ((x161|x162)|(x163-x164));

	if (t38 != -9223372036854743019LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = 204;

	t39 = ((x165|x166)|(x167-x168));

	if (t39 != -52) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x169 = -2837844LL;
	volatile uint32_t x170 = UINT32_MAX;
	int64_t t40 = -180921443910718LL;

	t40 = ((x169|x170)|(x171-x172));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MAX;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = -1;
	int32_t t41 = INT32_MAX;

	t41 = ((x173|x174)|(x175-x176));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = -3;
	static uint16_t x178 = UINT16_MAX;
	volatile int32_t t42 = -1;

	t42 = ((x177|x178)|(x179-x180));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = 1879923781232LL;
	int32_t x186 = INT32_MAX;
	int8_t x187 = INT8_MIN;
	uint8_t x188 = 1U;

	t43 = ((x185|x186)|(x187-x188));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -12188627776881LL;
	static volatile int32_t x190 = -548;
	int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MIN;

	t44 = ((x189|x190)|(x191-x192));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x193 = UINT16_MAX;
	int8_t x194 = -6;
	static uint32_t x195 = 1956U;
	static volatile int32_t x196 = INT32_MIN;
	uint32_t t45 = UINT32_MAX;

	t45 = ((x193|x194)|(x195-x196));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x197 = 432LLU;
	static int8_t x199 = INT8_MIN;
	int64_t x200 = -14LL;
	uint64_t t46 = 460735656LLU;

	t46 = ((x197|x198)|(x199-x200));

	if (t46 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;

	t47 = ((x201|x202)|(x203-x204));

	if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x209 = INT8_MAX;
	int8_t x211 = INT8_MAX;
	volatile int64_t t48 = -849677655LL;

	t48 = ((x209|x210)|(x211-x212));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x213 = -865886543;
	uint8_t x215 = 2U;
	volatile int32_t x216 = -1;
	volatile int32_t t49 = 4882;

	t49 = ((x213|x214)|(x215-x216));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x217 = 28U;
	uint64_t x218 = 427774409608382384LLU;
	static int16_t x219 = INT16_MAX;
	uint8_t x220 = UINT8_MAX;
	static uint64_t t50 = 3367098530LLU;

	t50 = ((x217|x218)|(x219-x220));

	if (t50 != 427774409608396732LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -1LL;
	uint32_t x222 = 1983U;
	uint8_t x223 = 17U;
	int64_t x224 = INT64_MAX;
	volatile int64_t t51 = 7682000339019347LL;

	t51 = ((x221|x222)|(x223-x224));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = 93122409637457502LL;
	int32_t x227 = -1;
	static volatile int64_t t52 = 18037290437LL;

	t52 = ((x225|x226)|(x227-x228));

	if (t52 != -1212301697LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x229 = -39071953;
	int8_t x230 = 0;
	int16_t x231 = INT16_MIN;
	volatile int8_t x232 = INT8_MIN;
	int32_t t53 = -663390234;

	t53 = ((x229|x230)|(x231-x232));

	if (t53 != -12369) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -2LL;
	int16_t x234 = INT16_MAX;
	volatile int32_t x235 = INT32_MIN;
	int64_t t54 = -32836LL;

	t54 = ((x233|x234)|(x235-x236));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	int32_t x240 = 3331;
	int32_t t55 = -8;

	t55 = ((x237|x238)|(x239-x240));

	if (t55 != -3) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x243 = -1;
	int64_t x244 = INT64_MIN;
	volatile int64_t t56 = -3349412461613131070LL;

	t56 = ((x241|x242)|(x243-x244));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x249 = INT32_MIN;
	int16_t x250 = INT16_MIN;
	uint64_t x252 = UINT64_MAX;

	t57 = ((x249|x250)|(x251-x252));

	if (t57 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = INT8_MAX;
	static int8_t x255 = INT8_MIN;
	volatile int64_t t58 = 0LL;

	t58 = ((x253|x254)|(x255-x256));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x258 = -1;
	uint16_t x259 = UINT16_MAX;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = ((x257|x258)|(x259-x260));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x261 = INT16_MIN;
	volatile int64_t x263 = INT64_MAX;
	uint8_t x264 = 0U;
	volatile int64_t t60 = 1965LL;

	t60 = ((x261|x262)|(x263-x264));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x267 = INT16_MIN;
	uint8_t x268 = UINT8_MAX;
	static volatile int64_t t61 = 787291908930LL;

	t61 = ((x265|x266)|(x267-x268));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MAX;
	volatile int64_t x270 = INT64_MIN;
	static int16_t x272 = INT16_MAX;

	t62 = ((x269|x270)|(x271-x272));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x277 = 148040347LLU;
	volatile uint64_t x278 = UINT64_MAX;
	int16_t x279 = 1;
	int32_t x280 = -23728;
	uint64_t t63 = UINT64_MAX;

	t63 = ((x277|x278)|(x279-x280));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = 172U;
	volatile int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MAX;
	uint32_t x284 = 20U;
	volatile int64_t t64 = 6624103187465LL;

	t64 = ((x281|x282)|(x283-x284));

	if (t64 != -9223372036854743057LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x285 = UINT64_MAX;
	static int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MAX;
	static int16_t x288 = 2870;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x285|x286)|(x287-x288));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x290 = INT16_MAX;
	static volatile int16_t x292 = INT16_MIN;
	uint32_t t66 = UINT32_MAX;

	t66 = ((x289|x290)|(x291-x292));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x294 = INT64_MIN;
	volatile int8_t x295 = 34;
	volatile int64_t t67 = 1470097094078225LL;

	t67 = ((x293|x294)|(x295-x296));

	if (t67 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x297 = INT32_MAX;
	static int32_t x298 = INT32_MIN;
	volatile int64_t t68 = -15294690790LL;

	t68 = ((x297|x298)|(x299-x300));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = 1602281;
	volatile uint8_t x302 = UINT8_MAX;
	int8_t x304 = INT8_MAX;
	volatile uint32_t t69 = 97U;

	t69 = ((x301|x302)|(x303-x304));

	if (t69 != 1668863U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MIN;
	static int32_t x308 = -1;
	int32_t t70 = 111371;

	t70 = ((x305|x306)|(x307-x308));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = -1;
	volatile uint32_t x311 = 12085291U;
	int8_t x312 = INT8_MAX;
	uint32_t t71 = UINT32_MAX;

	t71 = ((x309|x310)|(x311-x312));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MAX;
	volatile int16_t x318 = 25;
	static int64_t x319 = -1LL;
	volatile int8_t x320 = INT8_MIN;
	volatile int64_t t72 = -4331470LL;

	t72 = ((x317|x318)|(x319-x320));

	if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t73 = 3424530U;

	t73 = ((x321|x322)|(x323-x324));

	if (t73 != 4294934529U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 1759LLU;
	int8_t x326 = 0;
	uint32_t x328 = 910951U;
	static volatile uint64_t t74 = 11LLU;

	t74 = ((x325|x326)|(x327-x328));

	if (t74 != 4294057695LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MIN;
	int64_t t75 = -1566678866269LL;

	t75 = ((x329|x330)|(x331-x332));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x334 = UINT8_MAX;
	static uint16_t x335 = UINT16_MAX;
	static int16_t x336 = -21;
	int64_t t76 = -1438LL;

	t76 = ((x333|x334)|(x335-x336));

	if (t76 != -9223372036854710017LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	uint64_t x339 = 129724284LLU;
	volatile int32_t x340 = 4797;
	static volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x337|x338)|(x339-x340));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = -34;
	int16_t x343 = INT16_MIN;
	static uint64_t x344 = 235862545607LLU;
	uint64_t t78 = UINT64_MAX;

	t78 = ((x341|x342)|(x343-x344));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = 136LLU;
	int32_t x346 = 58767;
	int16_t x347 = -1;
	static volatile int16_t x348 = INT16_MIN;
	uint64_t t79 = 674LLU;

	t79 = ((x345|x346)|(x347-x348));

	if (t79 != 65535LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 80669U;
	uint16_t x350 = UINT16_MAX;
	int16_t x351 = 0;
	static uint32_t x352 = 139265U;
	uint32_t t80 = 874163U;

	t80 = ((x349|x350)|(x351-x352));

	if (t80 != 4294836223U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = INT64_MAX;
	static int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	volatile uint32_t x356 = 16U;
	volatile int64_t t81 = 9LL;

	t81 = ((x353|x354)|(x355-x356));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x357 = INT32_MAX;
	volatile uint16_t x358 = 11985U;
	int32_t x359 = INT32_MIN;
	int32_t x360 = -6613821;
	int32_t t82 = 2090609;

	t82 = ((x357|x358)|(x359-x360));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = -61742854433182677LL;
	static int64_t x362 = INT64_MIN;
	volatile uint32_t x363 = 0U;
	uint16_t x364 = UINT16_MAX;
	int64_t t83 = 1509613406742LL;

	t83 = ((x361|x362)|(x363-x364));

	if (t83 != -61742852119499733LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MIN;
	static uint32_t x367 = 10742984U;
	volatile int32_t x368 = INT32_MAX;
	static uint32_t t84 = 174964015U;

	t84 = ((x365|x366)|(x367-x368));

	if (t84 != 4294967241U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = -91761;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -1;
	volatile int32_t t85 = 62160;

	t85 = ((x369|x370)|(x371-x372));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x381 = 3U;
	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MAX;
	int32_t x384 = -6618133;
	volatile uint32_t t86 = 191606U;

	t86 = ((x381|x382)|(x383-x384));

	if (t86 != 2154134551U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = INT64_MIN;
	static int64_t x386 = INT64_MIN;
	int32_t x388 = INT32_MIN;
	static uint64_t t87 = 29798837LLU;

	t87 = ((x385|x386)|(x387-x388));

	if (t87 != 9409694879747994251LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x393 = UINT32_MAX;
	volatile int16_t x394 = -189;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = 15803254854569LL;
	volatile int64_t t88 = -63674695845492646LL;

	t88 = ((x393|x394)|(x395-x396));

	if (t88 != -15801184681985LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = -4;
	static uint8_t x399 = 1U;
	int8_t x400 = 0;

	t89 = ((x397|x398)|(x399-x400));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x401 = INT64_MIN;
	uint64_t x402 = UINT64_MAX;
	int8_t x403 = -1;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x401|x402)|(x403-x404));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = 3U;
	uint64_t x408 = UINT64_MAX;
	static volatile uint64_t t91 = 117985284800LLU;

	t91 = ((x405|x406)|(x407-x408));

	if (t91 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x413 = UINT16_MAX;
	uint32_t x415 = UINT32_MAX;
	int8_t x416 = -1;
	volatile uint32_t t92 = 125604313U;

	t92 = ((x413|x414)|(x415-x416));

	if (t92 != 65535U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x418 = INT16_MIN;
	uint32_t x419 = UINT32_MAX;
	static volatile uint32_t t93 = 672057U;

	t93 = ((x417|x418)|(x419-x420));

	if (t93 != 4294934528U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x422 = -1LL;
	int64_t x423 = -30338750071990LL;
	int8_t x424 = 39;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = ((x421|x422)|(x423-x424));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = -1;
	static int64_t x430 = INT64_MIN;
	volatile int32_t x431 = INT32_MAX;
	int64_t x432 = -1LL;
	int64_t t95 = -57145LL;

	t95 = ((x429|x430)|(x431-x432));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = -1;
	int8_t x434 = -14;
	uint64_t x435 = UINT64_MAX;
	static int64_t x436 = INT64_MIN;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x433|x434)|(x435-x436));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x446 = 51U;
	int8_t x447 = 7;
	static volatile int32_t t97 = -2;

	t97 = ((x445|x446)|(x447-x448));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x449 = 149259132U;
	static volatile uint16_t x450 = 2761U;
	static int32_t x451 = -113;
	static uint64_t t98 = 33649595LLU;

	t98 = ((x449|x450)|(x451-x452));

	if (t98 != 18446712639312608253LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = INT64_MIN;
	int8_t x454 = INT8_MAX;
	int8_t x455 = INT8_MAX;
	static uint64_t x456 = UINT64_MAX;

	t99 = ((x453|x454)|(x455-x456));

	if (t99 != 9223372036854776063LLU) { NG(); } else { ; }
	
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

