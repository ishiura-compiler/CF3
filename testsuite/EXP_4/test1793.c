#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = INT32_MIN;
int64_t x9 = INT64_MIN;
uint32_t x10 = UINT32_MAX;
int32_t x21 = 72;
volatile int16_t x24 = INT16_MIN;
static volatile int32_t t5 = -837;
int8_t x33 = -6;
static volatile int8_t x34 = -1;
int32_t x37 = INT32_MAX;
static int32_t x41 = -1;
int8_t x43 = INT8_MIN;
volatile int64_t t12 = -996542454564595641LL;
static uint16_t x61 = 42U;
uint8_t x62 = 6U;
uint32_t x68 = 1346721U;
volatile int32_t t16 = INT32_MIN;
volatile int8_t x70 = INT8_MIN;
uint32_t x71 = 1U;
int8_t x72 = INT8_MIN;
int32_t x75 = 461;
int16_t x76 = 14;
static uint8_t x83 = 12U;
int32_t t21 = 112010550;
volatile int32_t t22 = 290857;
static int32_t x93 = -1;
int16_t x97 = INT16_MIN;
static int32_t x100 = INT32_MIN;
int32_t t24 = -4;
int16_t x101 = -1;
uint64_t x103 = UINT64_MAX;
uint64_t x105 = 41894781LLU;
static volatile uint64_t t26 = 27497522230431LLU;
volatile int8_t x109 = -5;
static uint16_t x110 = UINT16_MAX;
static int16_t x111 = INT16_MIN;
int16_t x117 = -27;
volatile uint32_t x118 = 48U;
uint64_t x120 = UINT64_MAX;
int32_t x141 = INT32_MAX;
int16_t x142 = -1;
static int16_t x144 = INT16_MIN;
uint8_t x145 = 123U;
static uint32_t x147 = UINT32_MAX;
static uint16_t x152 = 22156U;
static uint32_t x159 = 81243U;
static uint32_t x165 = 85009506U;
int16_t x172 = INT16_MAX;
int32_t x174 = INT32_MAX;
int32_t x176 = -4;
volatile int16_t x177 = INT16_MIN;
int8_t x183 = -49;
int32_t x186 = 53;
int32_t t46 = -491;
static int8_t x190 = INT8_MAX;
volatile int8_t x203 = INT8_MIN;
static volatile int16_t x206 = INT16_MIN;
int16_t x208 = -1123;
int8_t x209 = -1;
int32_t t54 = -1;
volatile int8_t x224 = INT8_MAX;
int8_t x225 = -1;
uint32_t x230 = UINT32_MAX;
static uint64_t x234 = 213551586481194615LLU;
int32_t x239 = INT32_MIN;
int64_t x246 = INT64_MAX;
int32_t x248 = INT32_MIN;
static volatile uint64_t t61 = UINT64_MAX;
int64_t x252 = INT64_MIN;
int32_t x256 = INT32_MIN;
static volatile int64_t t63 = INT64_MIN;
int8_t x257 = INT8_MIN;
int64_t x267 = INT64_MIN;
uint8_t x280 = 15U;
volatile uint32_t x281 = 1U;
static uint64_t x282 = 3115354578LLU;
int16_t x289 = INT16_MAX;
uint64_t x291 = UINT64_MAX;
uint32_t x292 = 54U;
int32_t t72 = 952;
static volatile uint32_t x294 = 662356U;
uint16_t x301 = 8193U;
uint16_t x302 = 163U;
int32_t x303 = INT32_MIN;
int32_t t75 = -10;
int8_t x309 = INT8_MIN;
int32_t x312 = INT32_MIN;
int64_t x319 = INT64_MAX;
int32_t x320 = INT32_MIN;
int16_t x322 = INT16_MIN;
uint16_t x328 = 3261U;
int8_t x333 = 3;
static volatile int32_t t84 = INT32_MIN;
uint8_t x351 = UINT8_MAX;
int16_t x352 = INT16_MIN;
int8_t x356 = 56;
int16_t x358 = 366;
int32_t x362 = -1062771683;
static uint8_t x368 = UINT8_MAX;
int32_t t91 = -62155643;
int32_t x372 = INT32_MIN;
uint32_t x377 = 32U;
uint8_t x380 = 91U;
int16_t x391 = INT16_MAX;
uint16_t x392 = 1U;
int64_t x393 = -151LL;
uint64_t x395 = 659272139086LLU;


void f0(void) {
	int16_t x1 = 7124;
	volatile int32_t x3 = -1;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 656862024;

	t0 = (x1|(x2==(x3&x4)));

	if (t0 != 7125) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int8_t x6 = INT8_MAX;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = 93110556LLU;
	int64_t t1 = 14LL;

	t1 = (x5|(x6==(x7&x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x11 = 7U;
	uint8_t x12 = 6U;
	int64_t t2 = INT64_MIN;

	t2 = (x9|(x10==(x11&x12)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	static volatile uint16_t x15 = 19U;
	int64_t x16 = 2LL;
	volatile int32_t t3 = -40;

	t3 = (x13|(x14==(x15&x16)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 248U;
	int16_t x18 = -1;
	int8_t x19 = 3;
	int64_t x20 = INT64_MAX;
	volatile uint32_t t4 = 8U;

	t4 = (x17|(x18==(x19&x20)));

	if (t4 != 248U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = 0U;
	uint64_t x23 = UINT64_MAX;

	t5 = (x21|(x22==(x23&x24)));

	if (t5 != 72) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	static uint16_t x26 = UINT16_MAX;
	int8_t x27 = -1;
	int8_t x28 = 0;
	volatile int32_t t6 = 111397;

	t6 = (x25|(x26==(x27&x28)));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = INT16_MIN;
	uint32_t x30 = 2761427U;
	static int32_t x31 = INT32_MIN;
	static int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 338702270;

	t7 = (x29|(x30==(x31&x32)));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x35 = INT8_MAX;
	volatile int32_t x36 = -1;
	int32_t t8 = 3859;

	t8 = (x33|(x34==(x35&x36)));

	if (t8 != -6) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	static volatile uint32_t x39 = 143790U;
	volatile uint16_t x40 = 185U;
	static int32_t t9 = INT32_MAX;

	t9 = (x37|(x38==(x39&x40)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -29;
	uint8_t x44 = 54U;
	int32_t t10 = -7;

	t10 = (x41|(x42==(x43&x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static int16_t x46 = INT16_MAX;
	uint64_t x47 = 527897LLU;
	volatile int16_t x48 = -1;
	volatile int32_t t11 = -72186984;

	t11 = (x45|(x46==(x47&x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -33LL;
	static int16_t x50 = -1;
	int8_t x51 = 3;
	int64_t x52 = INT64_MAX;

	t12 = (x49|(x50==(x51&x52)));

	if (t12 != -33LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	static volatile int64_t x54 = 4442177992047LL;
	volatile int16_t x55 = INT16_MIN;
	static int32_t x56 = -339704;
	volatile int32_t t13 = -138838485;

	t13 = (x53|(x54==(x55&x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = 1LL;
	static uint32_t x59 = 216U;
	static uint8_t x60 = UINT8_MAX;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x57|(x58==(x59&x60)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = -1;
	uint16_t x64 = UINT16_MAX;
	static int32_t t15 = 9500762;

	t15 = (x61|(x62==(x63&x64)));

	if (t15 != 42) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MAX;
	volatile int16_t x67 = -1;

	t16 = (x65|(x66==(x67&x68)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 1454913361783267LLU;
	static volatile uint64_t t17 = 246993912022133LLU;

	t17 = (x69|(x70==(x71&x72)));

	if (t17 != 1454913361783267LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 3U;
	uint8_t x74 = UINT8_MAX;
	volatile uint32_t t18 = 126122231U;

	t18 = (x73|(x74==(x75&x76)));

	if (t18 != 3U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	static int32_t t19 = -22;

	t19 = (x77|(x78==(x79&x80)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	uint16_t x82 = 0U;
	static volatile int16_t x84 = 1;
	int64_t t20 = -52299385LL;

	t20 = (x81|(x82==(x83&x84)));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	int32_t x86 = INT32_MAX;
	int16_t x87 = 7;
	static uint16_t x88 = UINT16_MAX;

	t21 = (x85|(x86==(x87&x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = UINT8_MAX;
	int32_t x90 = 1;
	uint32_t x91 = 27455675U;
	static volatile uint16_t x92 = 23U;

	t22 = (x89|(x90==(x91&x92)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x94 = 1762284346U;
	volatile int64_t x95 = -69866839548LL;
	volatile int32_t x96 = 0;
	volatile int32_t t23 = 1;

	t23 = (x93|(x94==(x95&x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x98 = 4738168713697790602LLU;
	static volatile uint64_t x99 = 11237436LLU;

	t24 = (x97|(x98==(x99&x100)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -15;
	static uint32_t x104 = 13U;
	int32_t t25 = 40269;

	t25 = (x101|(x102==(x103&x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -1;
	volatile uint8_t x107 = UINT8_MAX;
	int32_t x108 = INT32_MIN;

	t26 = (x105|(x106==(x107&x108)));

	if (t26 != 41894781LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x112 = UINT32_MAX;
	volatile int32_t t27 = -1;

	t27 = (x109|(x110==(x111&x112)));

	if (t27 != -5) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -1;
	uint32_t x114 = 353474305U;
	uint16_t x115 = 31515U;
	int16_t x116 = 0;
	int32_t t28 = -978758846;

	t28 = (x113|(x114==(x115&x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x119 = 2388U;
	static volatile int32_t t29 = 1738;

	t29 = (x117|(x118==(x119&x120)));

	if (t29 != -27) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = -1;
	static int64_t x123 = 14804471287913LL;
	int8_t x124 = INT8_MIN;
	static volatile int64_t t30 = INT64_MIN;

	t30 = (x121|(x122==(x123&x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int64_t x126 = INT64_MAX;
	static uint16_t x127 = 688U;
	int32_t x128 = 25;
	static int32_t t31 = -399105070;

	t31 = (x125|(x126==(x127&x128)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static uint8_t x130 = 1U;
	static uint32_t x131 = 2785U;
	int64_t x132 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = (x129|(x130==(x131&x132)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	uint64_t x134 = 52155950203872LLU;
	static int64_t x135 = INT64_MIN;
	volatile int16_t x136 = -1;
	int32_t t33 = -1;

	t33 = (x133|(x134==(x135&x136)));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -564;
	static volatile uint64_t x138 = UINT64_MAX;
	static int8_t x139 = -1;
	static uint64_t x140 = 8517481LLU;
	volatile int32_t t34 = 11;

	t34 = (x137|(x138==(x139&x140)));

	if (t34 != -564) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x143 = UINT64_MAX;
	int32_t t35 = INT32_MAX;

	t35 = (x141|(x142==(x143&x144)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MIN;
	volatile int8_t x148 = -52;
	volatile int32_t t36 = -6;

	t36 = (x145|(x146==(x147&x148)));

	if (t36 != 123) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	uint8_t x151 = 75U;
	static volatile int32_t t37 = INT32_MIN;

	t37 = (x149|(x150==(x151&x152)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 225LLU;
	static volatile int32_t x154 = -8407535;
	int32_t x155 = INT32_MIN;
	static int8_t x156 = INT8_MIN;
	volatile uint64_t t38 = 3519104LLU;

	t38 = (x153|(x154==(x155&x156)));

	if (t38 != 225LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static uint8_t x158 = 109U;
	static volatile int64_t x160 = 83941848126225LL;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x157|(x158==(x159&x160)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 702U;
	int8_t x162 = -1;
	uint32_t x163 = 104826U;
	int64_t x164 = -1200310797LL;
	static volatile uint32_t t40 = 87386U;

	t40 = (x161|(x162==(x163&x164)));

	if (t40 != 702U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = 1;
	static uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 1U;
	volatile uint32_t t41 = 40701084U;

	t41 = (x165|(x166==(x167&x168)));

	if (t41 != 85009507U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 252229U;
	static int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MAX;
	volatile uint32_t t42 = 87982000U;

	t42 = (x169|(x170==(x171&x172)));

	if (t42 != 252229U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -3910517LL;
	static int16_t x175 = INT16_MIN;
	int64_t t43 = -505128LL;

	t43 = (x173|(x174==(x175&x176)));

	if (t43 != -3910517LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x178 = INT8_MAX;
	static uint16_t x179 = 3839U;
	int8_t x180 = 0;
	volatile int32_t t44 = 767358662;

	t44 = (x177|(x178==(x179&x180)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	volatile uint32_t x182 = 3136U;
	int8_t x184 = INT8_MAX;
	int32_t t45 = INT32_MAX;

	t45 = (x181|(x182==(x183&x184)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	static int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;

	t46 = (x185|(x186==(x187&x188)));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 43805LLU;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = UINT8_MAX;
	uint64_t t47 = 367607620532LLU;

	t47 = (x189|(x190==(x191&x192)));

	if (t47 != 43805LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	static int16_t x194 = -1;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = INT32_MIN;

	t48 = (x193|(x194==(x195&x196)));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = 123LL;
	int64_t x199 = 1LL;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 82371996;

	t49 = (x197|(x198==(x199&x200)));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int8_t x202 = -13;
	int64_t x204 = 462540071LL;
	static int32_t t50 = 469;

	t50 = (x201|(x202==(x203&x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -29;
	int8_t x207 = 5;
	volatile int32_t t51 = -78216;

	t51 = (x205|(x206==(x207&x208)));

	if (t51 != -29) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MAX;
	static uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = -94;

	t52 = (x209|(x210==(x211&x212)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x214 = INT64_MIN;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = -1;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x213|(x214==(x215&x216)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static int8_t x218 = INT8_MIN;
	static int16_t x219 = -164;
	int8_t x220 = INT8_MIN;

	t54 = (x217|(x218==(x219&x220)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int16_t x222 = -1;
	static int32_t x223 = -372320346;
	static volatile int32_t t55 = 50;

	t55 = (x221|(x222==(x223&x224)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = 530737966LLU;
	static int16_t x227 = INT16_MAX;
	uint32_t x228 = 117U;
	int32_t t56 = 26;

	t56 = (x225|(x226==(x227&x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 14U;
	int8_t x231 = -5;
	int64_t x232 = 57946LL;
	uint32_t t57 = 14746616U;

	t57 = (x229|(x230==(x231&x232)));

	if (t57 != 14U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	int16_t x235 = 11338;
	uint32_t x236 = UINT32_MAX;
	static int32_t t58 = 355978280;

	t58 = (x233|(x234==(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 0U;
	int32_t x238 = 17;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = -4112777;

	t59 = (x237|(x238==(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	int16_t x242 = -278;
	uint8_t x243 = 25U;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t60 = 587433;

	t60 = (x241|(x242==(x243&x244)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x247 = -1LL;

	t61 = (x245|(x246==(x247&x248)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = -1;
	uint16_t x251 = 2U;
	int32_t t62 = -943608315;

	t62 = (x249|(x250==(x251&x252)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	uint8_t x255 = 30U;

	t63 = (x253|(x254==(x255&x256)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x258 = 1;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 14;

	t64 = (x257|(x258==(x259&x260)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 711959785470LL;
	int64_t x262 = INT64_MAX;
	uint32_t x263 = 13009U;
	int16_t x264 = 0;
	static volatile int64_t t65 = -1LL;

	t65 = (x261|(x262==(x263&x264)));

	if (t65 != 711959785470LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 3U;
	uint32_t x266 = 316956U;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 11;

	t66 = (x265|(x266==(x267&x268)));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	static int32_t x270 = INT32_MAX;
	int32_t x271 = INT32_MAX;
	static uint8_t x272 = 14U;
	int32_t t67 = 1873;

	t67 = (x269|(x270==(x271&x272)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int32_t x274 = -1;
	int32_t x275 = 118;
	static int8_t x276 = -1;
	volatile int64_t t68 = INT64_MAX;

	t68 = (x273|(x274==(x275&x276)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 1LLU;
	int16_t x278 = 267;
	static uint64_t x279 = UINT64_MAX;
	volatile uint64_t t69 = 12731LLU;

	t69 = (x277|(x278==(x279&x280)));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	volatile uint32_t t70 = 488U;

	t70 = (x281|(x282==(x283&x284)));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 1U;
	static int64_t x286 = INT64_MIN;
	int8_t x287 = -1;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = -99;

	t71 = (x285|(x286==(x287&x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x290 = 0U;

	t72 = (x289|(x290==(x291&x292)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x295 = -3;
	int32_t x296 = -2;
	int32_t t73 = 1;

	t73 = (x293|(x294==(x295&x296)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	volatile int32_t x298 = -1;
	static int16_t x299 = INT16_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 36167;

	t74 = (x297|(x298==(x299&x300)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x304 = 7435930U;

	t75 = (x301|(x302==(x303&x304)));

	if (t75 != 8193) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = UINT8_MAX;
	int8_t x306 = -14;
	volatile int32_t x307 = INT32_MAX;
	int64_t x308 = -27LL;
	volatile int32_t t76 = 3;

	t76 = (x305|(x306==(x307&x308)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x310 = 0U;
	volatile int8_t x311 = 60;
	static volatile int32_t t77 = -4766002;

	t77 = (x309|(x310==(x311&x312)));

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 1U;
	int8_t x314 = INT8_MAX;
	static volatile int64_t x315 = -1LL;
	int8_t x316 = INT8_MAX;
	int32_t t78 = 338044;

	t78 = (x313|(x314==(x315&x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 22U;
	uint8_t x318 = 3U;
	int32_t t79 = 124183;

	t79 = (x317|(x318==(x319&x320)));

	if (t79 != 22) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 500895U;
	int32_t x323 = INT32_MAX;
	uint32_t x324 = UINT32_MAX;
	uint32_t t80 = 819U;

	t80 = (x321|(x322==(x323&x324)));

	if (t80 != 500895U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	static uint64_t x326 = 1054800343567LLU;
	int64_t x327 = INT64_MIN;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x325|(x326==(x327&x328)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	volatile int8_t x330 = INT8_MAX;
	int8_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x329|(x330==(x331&x332)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x334 = 1U;
	int8_t x335 = -1;
	uint16_t x336 = 201U;
	int32_t t83 = -3;

	t83 = (x333|(x334==(x335&x336)));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	volatile uint64_t x338 = 27LLU;
	int16_t x339 = INT16_MIN;
	uint16_t x340 = 11U;

	t84 = (x337|(x338==(x339&x340)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 3LL;
	uint32_t x342 = 24543U;
	int32_t x343 = 1617;
	static volatile int8_t x344 = 5;
	int64_t t85 = -847824278LL;

	t85 = (x341|(x342==(x343&x344)));

	if (t85 != 3LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 460U;
	volatile uint64_t x346 = 6LLU;
	int8_t x347 = -1;
	static uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 3816758;

	t86 = (x345|(x346==(x347&x348)));

	if (t86 != 460) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int32_t x350 = INT32_MAX;
	volatile int32_t t87 = -2;

	t87 = (x349|(x350==(x351&x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MIN;
	static int8_t x355 = INT8_MIN;
	volatile int32_t t88 = -585442813;

	t88 = (x353|(x354==(x355&x356)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1285;
	volatile int64_t x359 = -3607411728414336LL;
	uint64_t x360 = 4226883091671LLU;
	volatile int32_t t89 = -3;

	t89 = (x357|(x358==(x359&x360)));

	if (t89 != -1285) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MIN;
	uint64_t x363 = 127186280176LLU;
	static uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = 4;

	t90 = (x361|(x362==(x363&x364)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int32_t x366 = INT32_MIN;
	static uint32_t x367 = UINT32_MAX;

	t91 = (x365|(x366==(x367&x368)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int32_t x370 = INT32_MAX;
	int16_t x371 = INT16_MIN;
	volatile int64_t t92 = 546165041668533734LL;

	t92 = (x369|(x370==(x371&x372)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	int64_t x376 = -6904780864859925LL;
	int64_t t93 = INT64_MIN;

	t93 = (x373|(x374==(x375&x376)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x378 = 20486;
	int8_t x379 = INT8_MAX;
	uint32_t t94 = 3358U;

	t94 = (x377|(x378==(x379&x380)));

	if (t94 != 32U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	volatile int64_t x382 = INT64_MIN;
	static volatile uint8_t x383 = UINT8_MAX;
	int16_t x384 = 704;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x381|(x382==(x383&x384)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	volatile int16_t x386 = -1;
	uint32_t x387 = 21024U;
	static int32_t x388 = INT32_MIN;
	static int32_t t96 = -1682919;

	t96 = (x385|(x386==(x387&x388)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	static int8_t x390 = 0;
	int64_t t97 = INT64_MIN;

	t97 = (x389|(x390==(x391&x392)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x394 = UINT8_MAX;
	static volatile int32_t x396 = -1;
	volatile int64_t t98 = -30707889LL;

	t98 = (x393|(x394==(x395&x396)));

	if (t98 != -151LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int64_t x398 = 15153575029640LL;
	static volatile int64_t x399 = -100LL;
	int16_t x400 = INT16_MIN;
	int64_t t99 = -274140517262669LL;

	t99 = (x397|(x398==(x399&x400)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

