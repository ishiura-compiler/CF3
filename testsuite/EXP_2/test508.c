#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
int16_t x8 = 9;
volatile int64_t t2 = -7795828277LL;
int64_t x18 = -1LL;
int64_t x20 = 4417027045023740LL;
uint8_t x23 = 21U;
uint16_t x24 = UINT16_MAX;
int32_t t5 = -19756827;
static int16_t x45 = 120;
int64_t t9 = -15126775582LL;
uint32_t x61 = 2156035U;
int64_t x72 = INT64_MIN;
volatile uint8_t x73 = 15U;
volatile int32_t x94 = INT32_MIN;
int16_t x107 = 5359;
volatile uint64_t x113 = UINT64_MAX;
int16_t x117 = 100;
uint32_t x120 = UINT32_MAX;
static int32_t x127 = 1692225;
uint8_t x129 = UINT8_MAX;
static volatile uint8_t x137 = 7U;
int8_t x139 = -1;
int8_t x140 = 3;
static int64_t t28 = 86716544298859871LL;
int8_t x153 = INT8_MIN;
uint8_t x154 = 1U;
int8_t x156 = -1;
static uint64_t t32 = 1022838LLU;
int16_t x167 = INT16_MIN;
int8_t x168 = INT8_MIN;
static int8_t x169 = 27;
int8_t x178 = 60;
uint64_t x186 = UINT64_MAX;
uint8_t x192 = 3U;
volatile uint64_t t39 = 13215149866LLU;
int64_t t40 = 4928727329071027LL;
int16_t x203 = 1029;
int8_t x205 = INT8_MIN;
int64_t t43 = 3597656364780583LL;
int16_t x216 = INT16_MIN;
int8_t x219 = 53;
uint8_t x221 = UINT8_MAX;
int32_t x223 = INT32_MAX;
static int32_t x224 = INT32_MIN;
int8_t x227 = INT8_MIN;
volatile uint8_t x231 = 7U;
int64_t x238 = 107942720LL;
uint64_t t50 = 241935180278022560LLU;
static volatile int8_t x249 = INT8_MAX;
int64_t t53 = 48738841548168857LL;
volatile uint16_t x261 = 9038U;
static int32_t x262 = INT32_MAX;
int16_t x264 = -692;
volatile int32_t t55 = 252315;
int8_t x265 = 1;
int16_t x266 = INT16_MAX;
int32_t x270 = -893882;
volatile uint16_t x274 = 263U;
int16_t x296 = INT16_MAX;
int64_t x299 = 4LL;
static volatile uint8_t x308 = 7U;
int16_t x313 = -1;
int8_t x316 = -1;
int8_t x320 = -1;
static volatile int64_t x330 = INT64_MIN;
static int16_t x338 = -1;
volatile int64_t x344 = -1566LL;
volatile int16_t x349 = -1;
static int8_t x350 = -3;
volatile uint32_t t76 = 105676931U;
int64_t x362 = -1LL;
uint8_t x363 = 4U;
uint64_t x380 = UINT64_MAX;
static volatile int32_t x384 = 24;
static uint32_t x385 = 5U;
static volatile uint64_t t85 = 14632LLU;
int8_t x405 = 8;
int8_t x406 = INT8_MAX;
int64_t t87 = 2152LL;
volatile int32_t x413 = -1;
int8_t x415 = INT8_MIN;
uint32_t x416 = 17389127U;
int32_t x425 = -1;
static int16_t x434 = -114;
static volatile int64_t t93 = 432LL;
volatile int64_t x439 = INT64_MAX;
static int64_t t94 = -3544811337997LL;
volatile int16_t x441 = 15;
int64_t x458 = -1LL;
int32_t t98 = 7580;
uint64_t x481 = 189931LLU;
int16_t x483 = INT16_MIN;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int64_t x2 = 183249552561780LL;
	static uint64_t x3 = 1372596LLU;
	volatile uint64_t t0 = 15066LLU;

	t0 = ((x1+(x2/x3))+x4);

	if (t0 != 9223372036988281752LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 1;
	int16_t x6 = -1;
	uint8_t x7 = 1U;
	int32_t t1 = 175;

	t1 = ((x5+(x6/x7))+x8);

	if (t1 != 9) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MAX;
	int64_t x15 = INT64_MIN;
	int16_t x16 = -1;

	t2 = ((x13+(x14/x15))+x16);

	if (t2 != -129LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	uint32_t x19 = 9517U;
	volatile int64_t t3 = 628LL;

	t3 = ((x17+(x18/x19))+x20);

	if (t3 != 4417027045023739LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	int64_t x22 = -723237345647404LL;
	volatile int64_t t4 = -2328852LL;

	t4 = ((x21+(x22/x23))+x24);

	if (t4 != -34437726053075LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MAX;
	uint8_t x28 = UINT8_MAX;

	t5 = ((x25+(x26/x27))+x28);

	if (t5 != 253) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = 183345741594016LL;
	static volatile int16_t x31 = 3854;
	static uint64_t x32 = 252700476281LLU;
	uint64_t t6 = 440693326566238376LLU;

	t6 = ((x29+(x30/x31))+x32);

	if (t6 != 9223372337128096301LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 3U;
	int64_t x38 = INT64_MAX;
	int32_t x39 = INT32_MIN;
	volatile uint32_t x40 = UINT32_MAX;
	int64_t t7 = 577LL;

	t7 = ((x37+(x38/x39))+x40);

	if (t7 != 3LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x46 = 2627U;
	int32_t x47 = INT32_MIN;
	volatile uint16_t x48 = 27895U;
	volatile int32_t t8 = 6379;

	t8 = ((x45+(x46/x47))+x48);

	if (t8 != 28015) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -918245887691LL;
	volatile int16_t x50 = 13;
	uint16_t x51 = UINT16_MAX;
	int16_t x52 = -1;

	t9 = ((x49+(x50/x51))+x52);

	if (t9 != -918245887692LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -1029870821022733922LL;
	int64_t x54 = -1LL;
	uint8_t x55 = UINT8_MAX;
	static int8_t x56 = -1;
	static volatile int64_t t10 = 31332822281463498LL;

	t10 = ((x53+(x54/x55))+x56);

	if (t10 != -1029870821022733923LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	static int32_t x59 = -417651;
	volatile int64_t x60 = -1LL;
	static int64_t t11 = 43285195592126LL;

	t11 = ((x57+(x58/x59))+x60);

	if (t11 != -27628LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x62 = 245500089LL;
	static volatile uint64_t x63 = 1011373296067LLU;
	volatile int8_t x64 = 1;
	volatile uint64_t t12 = 1014531799662469LLU;

	t12 = ((x61+(x62/x63))+x64);

	if (t12 != 2156036LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 1611608U;
	static volatile int8_t x70 = INT8_MIN;
	int16_t x71 = -1;
	int64_t t13 = 6LL;

	t13 = ((x69+(x70/x71))+x72);

	if (t13 != -9223372036853164072LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x74 = 7U;
	int8_t x75 = INT8_MAX;
	static volatile uint32_t x76 = 2U;
	uint32_t t14 = 391198046U;

	t14 = ((x73+(x74/x75))+x76);

	if (t14 != 17U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x85 = 1U;
	int32_t x86 = INT32_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	int16_t x88 = 11;
	volatile uint64_t t15 = 79771036909140327LLU;

	t15 = ((x85+(x86/x87))+x88);

	if (t15 != 12LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x89 = 25U;
	int8_t x90 = -5;
	int8_t x91 = 9;
	int32_t x92 = INT32_MIN;
	int32_t t16 = -14;

	t16 = ((x89+(x90/x91))+x92);

	if (t16 != -2147483623) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	uint8_t x95 = 27U;
	static uint32_t x96 = UINT32_MAX;
	uint32_t t17 = 28747U;

	t17 = ((x93+(x94/x95))+x96);

	if (t17 != 4215398096U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 8479122U;
	uint64_t x102 = UINT64_MAX;
	static uint16_t x103 = UINT16_MAX;
	int32_t x104 = INT32_MIN;
	volatile uint64_t t18 = 363610792585LLU;

	t18 = ((x101+(x102/x103))+x104);

	if (t18 != 281477132738963LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = 7U;
	static uint64_t x106 = UINT64_MAX;
	int8_t x108 = -1;
	volatile uint64_t t19 = 20800021060223919LLU;

	t19 = ((x105+(x106/x107))+x108);

	if (t19 != 3442198931462881LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile uint64_t x110 = 1026014LLU;
	uint64_t x111 = 26LLU;
	static int16_t x112 = 2;
	uint64_t t20 = 387033122210298LLU;

	t20 = ((x109+(x110/x111))+x112);

	if (t20 != 6696LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x114 = -1;
	uint16_t x115 = UINT16_MAX;
	int8_t x116 = -1;
	volatile uint64_t t21 = 7185677LLU;

	t21 = ((x113+(x114/x115))+x116);

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x118 = 25881U;
	int64_t x119 = -1LL;
	volatile int64_t t22 = -2177411692373843903LL;

	t22 = ((x117+(x118/x119))+x120);

	if (t22 != 4294941514LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = 14;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	int8_t x124 = -1;
	static volatile int64_t t23 = 950566355380LL;

	t23 = ((x121+(x122/x123))+x124);

	if (t23 != 72057594037927949LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x125 = INT32_MIN;
	uint32_t x126 = UINT32_MAX;
	static volatile int16_t x128 = -1499;
	uint32_t t24 = 11099717U;

	t24 = ((x125+(x126/x127))+x128);

	if (t24 != 2147484687U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x130 = 304454895911788286LL;
	int64_t x131 = 51LL;
	int8_t x132 = INT8_MIN;
	static int64_t t25 = -611140LL;

	t25 = ((x129+(x130/x131))+x132);

	if (t25 != 5969703841407740LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = 8;
	uint16_t x134 = 341U;
	volatile uint32_t x135 = 3351829U;
	int16_t x136 = -1;
	volatile uint32_t t26 = 2265993U;

	t26 = ((x133+(x134/x135))+x136);

	if (t26 != 7U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x138 = INT64_MAX;
	volatile int64_t t27 = -172216424709244451LL;

	t27 = ((x137+(x138/x139))+x140);

	if (t27 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = INT32_MIN;
	static int64_t x142 = INT64_MAX;
	int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MAX;

	t28 = ((x141+(x142/x143))+x144);

	if (t28 != 281481419456519LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x145 = INT64_MIN;
	uint64_t x146 = 270937953346LLU;
	static int64_t x147 = INT64_MIN;
	int32_t x148 = -131320518;
	static volatile uint64_t t29 = 1024902LLU;

	t29 = ((x145+(x146/x147))+x148);

	if (t29 != 9223372036723455290LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x155 = UINT64_MAX;
	uint64_t t30 = 96298LLU;

	t30 = ((x153+(x154/x155))+x156);

	if (t30 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = UINT64_MAX;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	static volatile uint64_t t31 = 13466175165886377LLU;

	t31 = ((x157+(x158/x159))+x160);

	if (t31 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x161 = 79;
	int8_t x162 = INT8_MAX;
	static int8_t x163 = -1;
	uint64_t x164 = 131736944564LLU;

	t32 = ((x161+(x162/x163))+x164);

	if (t32 != 131736944516LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x165 = 18626U;
	volatile uint32_t x166 = 17363U;
	uint32_t t33 = 24351U;

	t33 = ((x165+(x166/x167))+x168);

	if (t33 != 18498U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t34 = 4352414U;

	t34 = ((x169+(x170/x171))+x172);

	if (t34 != 26U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MAX;
	uint64_t x174 = 29022088906124LLU;
	static int16_t x175 = INT16_MIN;
	int16_t x176 = -5336;
	uint64_t t35 = 53044761LLU;

	t35 = ((x173+(x174/x175))+x176);

	if (t35 != 2147478311LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = UINT32_MAX;
	uint8_t x179 = 1U;
	volatile int64_t x180 = -1LL;
	int64_t t36 = -430LL;

	t36 = ((x177+(x178/x179))+x180);

	if (t36 != 58LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x181 = 7923U;
	uint16_t x182 = 16160U;
	uint16_t x183 = UINT16_MAX;
	uint8_t x184 = 10U;
	int32_t t37 = 260377419;

	t37 = ((x181+(x182/x183))+x184);

	if (t37 != 7933) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x187 = 1;
	uint16_t x188 = 14U;
	volatile uint64_t t38 = 24290880899724LLU;

	t38 = ((x185+(x186/x187))+x188);

	if (t38 != 12LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = INT64_MIN;
	uint8_t x190 = 18U;
	uint64_t x191 = UINT64_MAX;

	t39 = ((x189+(x190/x191))+x192);

	if (t39 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x193 = 17U;
	static int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;

	t40 = ((x193+(x194/x195))+x196);

	if (t40 != 4294967185LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x197 = 7;
	volatile uint64_t x198 = 12402LLU;
	uint16_t x199 = UINT16_MAX;
	volatile uint8_t x200 = 13U;
	static volatile uint64_t t41 = 10468235LLU;

	t41 = ((x197+(x198/x199))+x200);

	if (t41 != 20LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x201 = 31U;
	static int16_t x202 = -1;
	static uint32_t x204 = 261822022U;
	static uint32_t t42 = 23606U;

	t42 = ((x201+(x202/x203))+x204);

	if (t42 != 261822053U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x206 = -41349953275361597LL;
	int16_t x207 = -1;
	int16_t x208 = INT16_MIN;

	t43 = ((x205+(x206/x207))+x208);

	if (t43 != 41349953275328701LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = 38205166366385345LL;
	static int16_t x210 = INT16_MAX;
	int8_t x211 = 13;
	static int64_t x212 = INT64_MIN;
	volatile int64_t t44 = -810864429166922LL;

	t44 = ((x209+(x210/x211))+x212);

	if (t44 != -9185166870488387943LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x213 = INT8_MAX;
	int32_t x214 = 44889;
	static int16_t x215 = INT16_MIN;
	static volatile int32_t t45 = 709272001;

	t45 = ((x213+(x214/x215))+x216);

	if (t45 != -32642) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x217 = 1U;
	int64_t x218 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	static int64_t t46 = 65049940618LL;

	t46 = ((x217+(x218/x219))+x220);

	if (t46 != -174025889635309605LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x222 = -29579LL;
	static volatile int64_t t47 = 30220014031LL;

	t47 = ((x221+(x222/x223))+x224);

	if (t47 != -2147483393LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x226 = 40653070929LLU;
	int8_t x228 = INT8_MAX;
	uint64_t t48 = 1212584472LLU;

	t48 = ((x225+(x226/x227))+x228);

	if (t48 != 32894LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 124U;
	volatile int16_t x230 = INT16_MIN;
	static uint8_t x232 = 29U;
	volatile int32_t t49 = -37051962;

	t49 = ((x229+(x230/x231))+x232);

	if (t49 != -4528) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x237 = -434;
	volatile uint64_t x239 = 8528481778457LLU;
	volatile uint16_t x240 = 408U;

	t50 = ((x237+(x238/x239))+x240);

	if (t50 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	static int32_t x242 = -1;
	volatile int32_t x243 = -1;
	static int64_t x244 = -691LL;
	static volatile int64_t t51 = -7675098782695LL;

	t51 = ((x241+(x242/x243))+x244);

	if (t51 != -33458LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = 27;
	int8_t x246 = 13;
	uint32_t x247 = 564586748U;
	uint64_t x248 = 129016811LLU;
	volatile uint64_t t52 = 31074052876LLU;

	t52 = ((x245+(x246/x247))+x248);

	if (t52 != 129016838LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x250 = INT16_MAX;
	int64_t x251 = -1LL;
	int32_t x252 = INT32_MAX;

	t53 = ((x249+(x250/x251))+x252);

	if (t53 != 2147451007LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = 8;
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 1U;
	uint16_t x260 = 39U;
	int32_t t54 = -21;

	t54 = ((x257+(x258/x259))+x260);

	if (t54 != -32721) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x263 = INT8_MAX;

	t55 = ((x261+(x262/x263))+x264);

	if (t55 != 16917666) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x267 = 3;
	static uint64_t x268 = UINT64_MAX;
	volatile uint64_t t56 = 10729315846519209LLU;

	t56 = ((x265+(x266/x267))+x268);

	if (t56 != 10922LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = -1;
	static int16_t x271 = INT16_MAX;
	int64_t x272 = -281185LL;
	static volatile int64_t t57 = 7631LL;

	t57 = ((x269+(x270/x271))+x272);

	if (t57 != -281213LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x273 = 0U;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = 20305U;
	volatile int32_t t58 = 8026026;

	t58 = ((x273+(x274/x275))+x276);

	if (t58 != 20303) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x277 = -1;
	static volatile int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	int32_t x280 = -1;
	static int64_t t59 = -50117743LL;

	t59 = ((x277+(x278/x279))+x280);

	if (t59 != 126LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = -1;
	static int64_t x282 = INT64_MAX;
	int64_t x283 = INT64_MIN;
	volatile uint32_t x284 = 12010U;
	volatile int64_t t60 = 6378619548LL;

	t60 = ((x281+(x282/x283))+x284);

	if (t60 != 12009LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x285 = -36;
	int32_t x286 = INT32_MAX;
	static int8_t x287 = INT8_MIN;
	volatile int8_t x288 = INT8_MIN;
	static int32_t t61 = -324;

	t61 = ((x285+(x286/x287))+x288);

	if (t61 != -16777379) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x289 = -1;
	volatile int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MAX;
	int32_t x292 = -6;
	volatile int32_t t62 = -1696;

	t62 = ((x289+(x290/x291))+x292);

	if (t62 != -65545) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x293 = -3LL;
	int8_t x294 = -5;
	int32_t x295 = -2;
	volatile int64_t t63 = 5954113214341LL;

	t63 = ((x293+(x294/x295))+x296);

	if (t63 != 32766LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	volatile int8_t x298 = INT8_MAX;
	int32_t x300 = INT32_MIN;
	static int64_t t64 = 92895405277LL;

	t64 = ((x297+(x298/x299))+x300);

	if (t64 != -2147516385LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x301 = 585LLU;
	uint16_t x302 = 81U;
	volatile int64_t x303 = INT64_MIN;
	static int64_t x304 = INT64_MAX;
	uint64_t t65 = 8750785950388049LLU;

	t65 = ((x301+(x302/x303))+x304);

	if (t65 != 9223372036854776392LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x305 = 5960LL;
	int64_t x306 = -897910052844847LL;
	uint64_t x307 = 2021604441392LLU;
	static uint64_t t66 = 861915024LLU;

	t66 = ((x305+(x306/x307))+x308);

	if (t66 != 9130326LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x314 = INT64_MAX;
	int8_t x315 = INT8_MIN;
	static int64_t t67 = 1409977106579893LL;

	t67 = ((x313+(x314/x315))+x316);

	if (t67 != -72057594037927937LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x317 = 104U;
	int16_t x318 = -3;
	int8_t x319 = -1;
	int32_t t68 = -2597260;

	t68 = ((x317+(x318/x319))+x320);

	if (t68 != 106) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x321 = 5;
	static int32_t x322 = INT32_MAX;
	static volatile uint64_t x323 = 44364109001623LLU;
	int16_t x324 = -1;
	static volatile uint64_t t69 = 109035043842665996LLU;

	t69 = ((x321+(x322/x323))+x324);

	if (t69 != 4LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = -4099804272964750LL;
	static int16_t x326 = -1;
	int32_t x327 = 367;
	int8_t x328 = INT8_MIN;
	int64_t t70 = -511110810807731791LL;

	t70 = ((x325+(x326/x327))+x328);

	if (t70 != -4099804272964878LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x329 = 5301U;
	uint32_t x331 = UINT32_MAX;
	int32_t x332 = -1;
	int64_t t71 = 208387244767949806LL;

	t71 = ((x329+(x330/x331))+x332);

	if (t71 != -2147478348LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = INT16_MIN;
	static uint64_t x334 = 2898767881355166923LLU;
	int16_t x335 = INT16_MIN;
	uint64_t x336 = 1545716204LLU;
	volatile uint64_t t72 = 118LLU;

	t72 = ((x333+(x334/x335))+x336);

	if (t72 != 1545683436LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 74061949LLU;
	int64_t x339 = INT64_MIN;
	int8_t x340 = -2;
	uint64_t t73 = 216125LLU;

	t73 = ((x337+(x338/x339))+x340);

	if (t73 != 74061947LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x341 = -2;
	int16_t x342 = INT16_MIN;
	volatile int64_t x343 = -2287226285734LL;
	int64_t t74 = -3418089922748621338LL;

	t74 = ((x341+(x342/x343))+x344);

	if (t74 != -1568LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x351 = 754U;
	int32_t x352 = INT32_MAX;
	int32_t t75 = -2963964;

	t75 = ((x349+(x350/x351))+x352);

	if (t75 != 2147483646) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x353 = 743;
	uint32_t x354 = UINT32_MAX;
	static volatile uint32_t x355 = 380656757U;
	static uint16_t x356 = 32468U;

	t76 = ((x353+(x354/x355))+x356);

	if (t76 != 33222U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x361 = INT64_MIN;
	int64_t x364 = 67053349695LL;
	volatile int64_t t77 = 3183LL;

	t77 = ((x361+(x362/x363))+x364);

	if (t77 != -9223371969801426113LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x365 = INT64_MIN;
	static int64_t x366 = INT64_MAX;
	uint64_t x367 = 669956684574086605LLU;
	int8_t x368 = 1;
	uint64_t t78 = 254855134716029LLU;

	t78 = ((x365+(x366/x367))+x368);

	if (t78 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = 10U;
	uint8_t x372 = 3U;
	int32_t t79 = 38386;

	t79 = ((x369+(x370/x371))+x372);

	if (t79 != 32758) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = 177195962265668LL;
	int16_t x375 = INT16_MAX;
	int16_t x376 = 1162;
	int64_t t80 = -259865757LL;

	t80 = ((x373+(x374/x375))+x376);

	if (t80 != 5407725047LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x378 = -4444;
	volatile uint16_t x379 = 306U;
	static volatile uint64_t t81 = 8230LLU;

	t81 = ((x377+(x378/x379))+x380);

	if (t81 != 65520LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x381 = 10U;
	int16_t x382 = INT16_MAX;
	uint16_t x383 = 279U;
	uint32_t t82 = 1030614079U;

	t82 = ((x381+(x382/x383))+x384);

	if (t82 != 151U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x386 = 0;
	static volatile int16_t x387 = INT16_MIN;
	volatile uint32_t x388 = 3U;
	volatile uint32_t t83 = 1694238830U;

	t83 = ((x385+(x386/x387))+x388);

	if (t83 != 8U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = INT16_MAX;
	volatile int16_t x390 = INT16_MIN;
	static volatile int32_t x391 = -1;
	volatile uint32_t x392 = 0U;
	volatile uint32_t t84 = 1U;

	t84 = ((x389+(x390/x391))+x392);

	if (t84 != 65535U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = UINT32_MAX;
	volatile uint64_t x394 = 19642464411209LLU;
	volatile uint8_t x395 = 1U;
	int8_t x396 = INT8_MIN;

	t85 = ((x393+(x394/x395))+x396);

	if (t85 != 19646759378376LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x397 = 11389U;
	static int64_t x398 = INT64_MAX;
	volatile int64_t x399 = INT64_MIN;
	uint16_t x400 = 9775U;
	static int64_t t86 = -4983LL;

	t86 = ((x397+(x398/x399))+x400);

	if (t86 != 21164LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x407 = 120854LL;
	int32_t x408 = 188;

	t87 = ((x405+(x406/x407))+x408);

	if (t87 != 196LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x414 = 0U;
	volatile uint32_t t88 = 1U;

	t88 = ((x413+(x414/x415))+x416);

	if (t88 != 17389126U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MAX;
	int64_t x419 = -6058990980LL;
	int16_t x420 = INT16_MAX;
	int64_t t89 = -997754LL;

	t89 = ((x417+(x418/x419))+x420);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x421 = 15U;
	uint64_t x422 = 3LLU;
	int32_t x423 = INT32_MAX;
	uint16_t x424 = 10143U;
	volatile uint64_t t90 = 10131646872257599LLU;

	t90 = ((x421+(x422/x423))+x424);

	if (t90 != 10158LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x426 = INT16_MAX;
	int16_t x427 = INT16_MIN;
	int64_t x428 = INT64_MAX;
	volatile int64_t t91 = -7810259243LL;

	t91 = ((x425+(x426/x427))+x428);

	if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x429 = 29908U;
	int8_t x430 = INT8_MAX;
	uint64_t x431 = UINT64_MAX;
	uint8_t x432 = 49U;
	static volatile uint64_t t92 = 7371LLU;

	t92 = ((x429+(x430/x431))+x432);

	if (t92 != 29957LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = -1LL;
	int16_t x435 = -1;
	volatile int32_t x436 = INT32_MIN;

	t93 = ((x433+(x434/x435))+x436);

	if (t93 != -2147483535LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = INT16_MAX;
	volatile int16_t x438 = INT16_MIN;
	int32_t x440 = -150;

	t94 = ((x437+(x438/x439))+x440);

	if (t94 != 32617LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x442 = -1;
	volatile int32_t x443 = INT32_MAX;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t95 = 10059321;

	t95 = ((x441+(x442/x443))+x444);

	if (t95 != 65550) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x457 = -1LL;
	uint64_t x459 = UINT64_MAX;
	volatile uint16_t x460 = 117U;
	uint64_t t96 = 2585228LLU;

	t96 = ((x457+(x458/x459))+x460);

	if (t96 != 117LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x461 = 2U;
	int8_t x462 = 13;
	int8_t x463 = INT8_MIN;
	static int16_t x464 = INT16_MAX;
	static int32_t t97 = 1843;

	t97 = ((x461+(x462/x463))+x464);

	if (t97 != 32769) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x473 = UINT16_MAX;
	int16_t x474 = -1;
	uint8_t x475 = 96U;
	int16_t x476 = -1;

	t98 = ((x473+(x474/x475))+x476);

	if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x482 = 35705093780LLU;
	int64_t x484 = INT64_MIN;
	uint64_t t99 = 110793821057889043LLU;

	t99 = ((x481+(x482/x483))+x484);

	if (t99 != 9223372036854965739LLU) { NG(); } else { ; }
	
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

