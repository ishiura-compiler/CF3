#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 328018441038648LLU;
uint64_t t2 = 64392794704105LLU;
uint64_t x19 = 7352818685LLU;
volatile uint64_t t4 = 2LLU;
int64_t x31 = -1LL;
static int8_t x34 = INT8_MAX;
volatile uint64_t x35 = UINT64_MAX;
volatile uint64_t t8 = 275056991329LLU;
static volatile int32_t x46 = 1063;
int8_t x49 = INT8_MAX;
int32_t t12 = INT32_MAX;
uint8_t x57 = UINT8_MAX;
volatile int32_t x58 = INT32_MIN;
uint16_t x67 = 216U;
static int32_t x68 = INT32_MAX;
static int16_t x69 = -1;
uint64_t x70 = 5166104097950LLU;
int8_t x73 = 2;
volatile uint32_t x75 = UINT32_MAX;
static int32_t x80 = -126076347;
static int64_t x85 = -476975815278251919LL;
uint64_t t22 = 10063LLU;
int16_t x95 = INT16_MAX;
int8_t x97 = 5;
int32_t x99 = INT32_MIN;
int64_t t24 = 430074180866691916LL;
int64_t x103 = -38LL;
static int16_t x107 = INT16_MIN;
int16_t x111 = -1;
int64_t x112 = INT64_MIN;
uint32_t t28 = 197753U;
volatile uint8_t x118 = 1U;
uint16_t x121 = 145U;
volatile uint64_t t30 = 1LLU;
static volatile int8_t x129 = -1;
static volatile int16_t x130 = INT16_MIN;
int16_t x133 = INT16_MAX;
uint8_t x135 = UINT8_MAX;
int8_t x136 = INT8_MIN;
int8_t x137 = 7;
int32_t x138 = INT32_MAX;
static int8_t x141 = 0;
volatile uint64_t t37 = 344795195088LLU;
int16_t x159 = INT16_MIN;
int64_t t42 = -296065956195LL;
volatile uint8_t x182 = UINT8_MAX;
int8_t x185 = 31;
uint64_t x193 = UINT64_MAX;
volatile int32_t x197 = 33911299;
int8_t x199 = -3;
int32_t x200 = -1;
volatile uint64_t t49 = 1LLU;
uint32_t x206 = UINT32_MAX;
volatile int64_t t53 = -30615LL;
int16_t x218 = 91;
int8_t x220 = INT8_MAX;
volatile int32_t t54 = -254539;
uint32_t x223 = UINT32_MAX;
int8_t x225 = INT8_MAX;
int64_t x235 = 73235210287064162LL;
int64_t t58 = -11838965956LL;
int64_t x242 = 182826443056071093LL;
uint8_t x254 = 29U;
int8_t x256 = -1;
volatile uint32_t t62 = 214U;
int16_t x259 = 20;
volatile int32_t x261 = -5677973;
uint64_t x267 = 3610847632670LLU;
static volatile int64_t x277 = INT64_MAX;
static uint64_t x281 = 102LLU;
uint32_t x288 = 8U;
int32_t x295 = 704595289;
volatile int32_t x299 = -165129;
int32_t x306 = INT32_MIN;
static volatile int64_t t76 = 2313464501199140LL;
static int8_t x314 = -1;
static volatile int16_t x315 = 2022;
uint64_t t79 = 1LLU;
uint64_t x326 = 334387158643337003LLU;
static volatile uint64_t x328 = UINT64_MAX;
uint8_t x329 = 0U;
int8_t x334 = INT8_MIN;
static volatile int8_t x335 = INT8_MIN;
static int16_t x349 = -6;
int32_t x351 = 2;
static int32_t x353 = INT32_MIN;
static volatile int64_t t87 = 127833618LL;
volatile uint64_t x357 = 1213063302LLU;
static volatile int16_t x359 = -9938;
volatile int8_t x364 = INT8_MIN;
volatile uint64_t t90 = 110048990029609660LLU;
static volatile uint16_t x371 = UINT16_MAX;
static int64_t x374 = -25LL;
int64_t x382 = INT64_MIN;
int16_t x387 = -1;
int8_t x392 = 0;
int32_t x394 = INT32_MIN;
int64_t x395 = -1LL;
volatile int64_t t98 = -1784304079469040429LL;
int64_t x403 = INT64_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint64_t x2 = 200327034158LLU;
	int8_t x3 = -1;
	static int8_t x4 = -1;

	t0 = ((x1/x2)|(x3^x4));

	if (t0 != 46041574LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int16_t x6 = 7422;
	int64_t x7 = INT64_MAX;
	static int64_t x8 = INT64_MIN;
	static int64_t t1 = -44108686132LL;

	t1 = ((x5/x6)|(x7^x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static uint64_t x10 = UINT64_MAX;
	uint64_t x11 = 172LLU;
	volatile uint16_t x12 = UINT16_MAX;

	t2 = ((x9/x10)|(x11^x12));

	if (t2 != 65363LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	static int8_t x14 = -55;
	static int32_t x15 = INT32_MIN;
	int16_t x16 = -1;
	volatile int32_t t3 = INT32_MAX;

	t3 = ((x13/x14)|(x15^x16));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 162794U;
	int8_t x18 = 4;
	int16_t x20 = 462;

	t4 = ((x17/x18)|(x19^x20));

	if (t4 != 7352852219LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -50;
	static int16_t x22 = INT16_MAX;
	uint16_t x23 = 24U;
	uint32_t x24 = 18U;
	uint32_t t5 = 2103744439U;

	t5 = ((x21/x22)|(x23^x24));

	if (t5 != 10U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static uint32_t x26 = 283616854U;
	volatile uint8_t x27 = 1U;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -25520210235695LL;

	t6 = ((x25/x26)|(x27^x28));

	if (t6 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MIN;
	int32_t x32 = 18;
	volatile int64_t t7 = -245LL;

	t7 = ((x29/x30)|(x31^x32));

	if (t7 != -19LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int16_t x36 = INT16_MAX;

	t8 = ((x33/x34)|(x35^x36));

	if (t8 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	int8_t x38 = 13;
	volatile int16_t x39 = INT16_MAX;
	volatile uint64_t x40 = 17359731018776LLU;
	static volatile uint64_t t9 = 3400971248528305797LLU;

	t9 = ((x37/x38)|(x39^x40));

	if (t9 != 1418985571484414967LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = -1958520179541631638LL;
	uint32_t x43 = 4766U;
	int8_t x44 = INT8_MAX;
	int64_t t10 = 455450494LL;

	t10 = ((x41/x42)|(x43^x44));

	if (t10 != 4833LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 349463U;
	uint16_t x47 = 107U;
	int16_t x48 = -442;
	volatile uint32_t t11 = 431U;

	t11 = ((x45/x46)|(x47^x48));

	if (t11 != 4294967149U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 8315U;
	int32_t x51 = INT32_MIN;
	int32_t x52 = -1;

	t12 = ((x49/x50)|(x51^x52));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -3040;
	int16_t x54 = INT16_MAX;
	int64_t x55 = -13LL;
	static int8_t x56 = INT8_MAX;
	volatile int64_t t13 = -4938585472LL;

	t13 = ((x53/x54)|(x55^x56));

	if (t13 != -116LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x59 = INT64_MAX;
	static volatile uint8_t x60 = 19U;
	int64_t t14 = 154680979912LL;

	t14 = ((x57/x58)|(x59^x60));

	if (t14 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int16_t x62 = -1;
	int16_t x63 = 18;
	uint16_t x64 = 257U;
	int32_t t15 = -119982112;

	t15 = ((x61/x62)|(x63^x64));

	if (t15 != -2147483373) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int32_t x66 = INT32_MIN;
	int32_t t16 = 4661;

	t16 = ((x65/x66)|(x67^x68));

	if (t16 != 2147483431) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x71 = INT8_MIN;
	int16_t x72 = -172;
	static uint64_t t17 = 808979123LLU;

	t17 = ((x69/x70)|(x71^x72));

	if (t17 != 3570934LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x74 = 10U;
	static uint8_t x76 = UINT8_MAX;
	uint32_t t18 = 101U;

	t18 = ((x73/x74)|(x75^x76));

	if (t18 != 4294967040U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = UINT32_MAX;
	volatile int8_t x78 = -1;
	int64_t x79 = INT64_MIN;
	volatile int64_t t19 = 1124036758697330LL;

	t19 = ((x77/x78)|(x79^x80));

	if (t19 != 9223372036728699461LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static uint8_t x82 = 70U;
	static int32_t x83 = 1047;
	int32_t x84 = -1057;
	int64_t t20 = 5283887925LL;

	t20 = ((x81/x82)|(x83^x84));

	if (t20 != -56LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = -1;
	volatile int32_t x87 = 390822372;
	static uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = 260218LLU;

	t21 = ((x85/x86)|(x87^x88));

	if (t21 != 18446744073654816671LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = -1;
	uint64_t x90 = 88256442528567981LLU;
	int64_t x91 = 2456LL;
	static uint8_t x92 = 66U;

	t22 = ((x89/x90)|(x91^x92));

	if (t22 != 2523LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint16_t x94 = UINT16_MAX;
	int32_t x96 = -296;
	volatile int32_t t23 = 89904700;

	t23 = ((x93/x94)|(x95^x96));

	if (t23 != -32473) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	int64_t x100 = -46780LL;

	t24 = ((x97/x98)|(x99^x100));

	if (t24 != 2147436868LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -2071;
	int64_t x102 = -1LL;
	int64_t x104 = 804900LL;
	int64_t t25 = -2864LL;

	t25 = ((x101/x102)|(x103^x104));

	if (t25 != -802817LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -4LL;
	uint8_t x106 = 41U;
	int32_t x108 = -254791;
	int64_t t26 = 246633LL;

	t26 = ((x105/x106)|(x107^x108));

	if (t26 != 236729LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	static int16_t x110 = INT16_MIN;
	int64_t t27 = INT64_MAX;

	t27 = ((x109/x110)|(x111^x112));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 7890U;
	uint32_t x114 = 7785U;
	int32_t x115 = INT32_MAX;
	int8_t x116 = INT8_MIN;

	t28 = ((x113/x114)|(x115^x116));

	if (t28 != 2147483775U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = 17068459839LL;

	t29 = ((x117/x118)|(x119^x120));

	if (t29 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = 2;
	static int64_t x123 = 6909305LL;
	uint64_t x124 = 443386469912LLU;

	t30 = ((x121/x122)|(x123^x124));

	if (t30 != 443380790121LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	int32_t x126 = -1;
	static volatile int16_t x127 = -688;
	volatile uint64_t x128 = UINT64_MAX;
	uint64_t t31 = 329027761654410LLU;

	t31 = ((x125/x126)|(x127^x128));

	if (t31 != 687LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x131 = 15U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 229429782;

	t32 = ((x129/x130)|(x131^x132));

	if (t32 != -2147483633) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 2U;
	volatile int32_t t33 = 3320;

	t33 = ((x133/x134)|(x135^x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 6984;

	t34 = ((x137/x138)|(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x142 = INT8_MIN;
	static int16_t x143 = -12;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = -111622320;

	t35 = ((x141/x142)|(x143^x144));

	if (t35 != -245) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1;
	int64_t x146 = -25789155228581LL;
	int32_t x147 = -1980;
	uint32_t x148 = 3U;
	volatile int64_t t36 = 15816039LL;

	t36 = ((x145/x146)|(x147^x148));

	if (t36 != 4294965319LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	volatile uint16_t x150 = UINT16_MAX;
	uint8_t x151 = UINT8_MAX;
	uint64_t x152 = 42950580LLU;

	t37 = ((x149/x150)|(x151^x152));

	if (t37 != 281479314628427LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	uint32_t x156 = 268341U;
	volatile uint32_t t38 = 1U;

	t38 = ((x153/x154)|(x155^x156));

	if (t38 != 4294698954U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	static int64_t x158 = INT64_MIN;
	volatile int64_t x160 = INT64_MIN;
	volatile int64_t t39 = 7488LL;

	t39 = ((x157/x158)|(x159^x160));

	if (t39 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 246978U;
	int8_t x162 = -1;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t40 = -19477LL;

	t40 = ((x161/x162)|(x163^x164));

	if (t40 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	static int16_t x168 = INT16_MAX;
	volatile int32_t t41 = -628425729;

	t41 = ((x165/x166)|(x167^x168));

	if (t41 != -255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MAX;
	static volatile uint16_t x170 = 15U;
	int32_t x171 = -33016295;
	int64_t x172 = INT64_MIN;

	t42 = ((x169/x170)|(x171^x172));

	if (t42 != 9223372036830183065LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	uint8_t x174 = 26U;
	int64_t x175 = -1LL;
	int32_t x176 = INT32_MAX;
	static volatile int64_t t43 = 206201349085LL;

	t43 = ((x173/x174)|(x175^x176));

	if (t43 != -2064888124LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 1534858118LLU;
	int64_t x178 = INT64_MIN;
	uint64_t x179 = 2730545523467LLU;
	volatile uint32_t x180 = UINT32_MAX;
	static uint64_t t44 = 9LLU;

	t44 = ((x177/x178)|(x179^x180));

	if (t44 != 2728357909748LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = INT16_MIN;
	int32_t x183 = INT32_MAX;
	int8_t x184 = -1;
	int32_t t45 = -2;

	t45 = ((x181/x182)|(x183^x184));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -1LL;
	int16_t x187 = 1690;
	volatile int8_t x188 = INT8_MIN;
	int64_t t46 = -788895950301244819LL;

	t46 = ((x185/x186)|(x187^x188));

	if (t46 != -5LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	volatile int32_t x190 = 1;
	int64_t x191 = INT64_MAX;
	int32_t x192 = INT32_MIN;
	volatile int64_t t47 = -5025987341499224LL;

	t47 = ((x189/x190)|(x191^x192));

	if (t47 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x194 = 1222152LLU;
	static uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MAX;
	volatile uint64_t t48 = 470047677LLU;

	t48 = ((x193/x194)|(x195^x196));

	if (t48 != 9223372036854751442LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x198 = 248380582685879LLU;

	t49 = ((x197/x198)|(x199^x200));

	if (t49 != 2LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	static int8_t x202 = 5;
	uint16_t x203 = 7652U;
	int64_t x204 = -1LL;
	volatile int64_t t50 = 225111958776145311LL;

	t50 = ((x201/x202)|(x203^x204));

	if (t50 != -7653LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 338310577U;
	int32_t x207 = -1;
	int64_t x208 = 109493259LL;
	int64_t t51 = 8LL;

	t51 = ((x205/x206)|(x207^x208));

	if (t51 != -109493260LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -27804LL;
	int64_t x210 = -1LL;
	uint16_t x211 = UINT16_MAX;
	volatile int8_t x212 = INT8_MIN;
	volatile int64_t t52 = 49476706293364390LL;

	t52 = ((x209/x210)|(x211^x212));

	if (t52 != -37633LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -1LL;
	int64_t x214 = INT64_MIN;
	int32_t x215 = -68;
	volatile uint32_t x216 = 316542U;

	t53 = ((x213/x214)|(x215^x216));

	if (t53 != 4294650818LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	int32_t x219 = INT32_MIN;

	t54 = ((x217/x218)|(x219^x220));

	if (t54 != -2147483521) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 17U;
	uint8_t x222 = 5U;
	int32_t x224 = INT32_MAX;
	uint32_t t55 = 488471446U;

	t55 = ((x221/x222)|(x223^x224));

	if (t55 != 2147483651U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -1;
	uint32_t x227 = 0U;
	uint8_t x228 = UINT8_MAX;
	uint32_t t56 = UINT32_MAX;

	t56 = ((x225/x226)|(x227^x228));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 72U;
	static int64_t x230 = 1983449458870LL;
	static int8_t x231 = 27;
	int16_t x232 = INT16_MAX;
	int64_t t57 = -565LL;

	t57 = ((x229/x230)|(x231^x232));

	if (t57 != 32740LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = INT32_MIN;
	int32_t x236 = INT32_MAX;

	t58 = ((x233/x234)|(x235^x236));

	if (t58 != 73235211152382877LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	static uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MIN;
	static int64_t x240 = INT64_MIN;
	volatile uint64_t t59 = 64LLU;

	t59 = ((x237/x238)|(x239^x240));

	if (t59 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 10U;
	volatile int32_t x243 = INT32_MIN;
	static volatile uint16_t x244 = 3U;
	volatile int64_t t60 = -2LL;

	t60 = ((x241/x242)|(x243^x244));

	if (t60 != -2147483645LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -1LL;
	int32_t x246 = -1;
	uint32_t x247 = 21U;
	static uint32_t x248 = 4U;
	volatile int64_t t61 = -4967823821LL;

	t61 = ((x245/x246)|(x247^x248));

	if (t61 != 17LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x255 = 12;

	t62 = ((x253/x254)|(x255^x256));

	if (t62 != 4294967283U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int16_t x258 = INT16_MAX;
	uint64_t x260 = 24LLU;
	volatile uint64_t t63 = 988564LLU;

	t63 = ((x257/x258)|(x259^x260));

	if (t63 != 14LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x262 = -16;
	int32_t x263 = 1;
	int8_t x264 = INT8_MIN;
	volatile int32_t t64 = -39;

	t64 = ((x261/x262)|(x263^x264));

	if (t64 != -71) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = 171U;
	static uint16_t x266 = 289U;
	int8_t x268 = INT8_MIN;
	uint64_t t65 = 3111754162783LLU;

	t65 = ((x265/x266)|(x267^x268));

	if (t65 != 18446740462861918878LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = UINT8_MAX;
	uint32_t x270 = 4U;
	int8_t x271 = INT8_MIN;
	uint8_t x272 = UINT8_MAX;
	static volatile uint32_t t66 = 12203014U;

	t66 = ((x269/x270)|(x271^x272));

	if (t66 != 4294967167U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 1;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int8_t x276 = -1;
	int32_t t67 = -1456;

	t67 = ((x273/x274)|(x275^x276));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x278 = 43;
	static volatile int16_t x279 = -1;
	int64_t x280 = INT64_MIN;
	volatile int64_t t68 = INT64_MAX;

	t68 = ((x277/x278)|(x279^x280));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x282 = INT32_MIN;
	uint16_t x283 = UINT16_MAX;
	uint16_t x284 = UINT16_MAX;
	uint64_t t69 = 17566931387780LLU;

	t69 = ((x281/x282)|(x283^x284));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x285 = -1;
	volatile int16_t x286 = -1;
	int64_t x287 = INT64_MIN;
	volatile int64_t t70 = -44LL;

	t70 = ((x285/x286)|(x287^x288));

	if (t70 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x289 = 1064207848LL;
	uint64_t x290 = 1942768LLU;
	static int8_t x291 = INT8_MIN;
	static volatile uint32_t x292 = UINT32_MAX;
	volatile uint64_t t71 = 227748017LLU;

	t71 = ((x289/x290)|(x291^x292));

	if (t71 != 639LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MIN;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t72 = 288208362336282022LLU;

	t72 = ((x293/x294)|(x295^x296));

	if (t72 != 1442888359LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = 47U;
	uint32_t x298 = 259081U;
	int32_t x300 = -11;
	volatile uint32_t t73 = 126778U;

	t73 = ((x297/x298)|(x299^x300));

	if (t73 != 165122U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x301 = -13;
	uint32_t x302 = 169U;
	uint16_t x303 = 34U;
	uint64_t x304 = 3726LLU;
	volatile uint64_t t74 = 1267799LLU;

	t74 = ((x301/x302)|(x303^x304));

	if (t74 != 25415679LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MAX;
	uint32_t x307 = UINT32_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile uint32_t t75 = 659U;

	t75 = ((x305/x306)|(x307^x308));

	if (t75 != 4294967040U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	static int64_t x310 = INT64_MAX;
	uint8_t x311 = UINT8_MAX;
	static volatile uint16_t x312 = 940U;

	t76 = ((x309/x310)|(x311^x312));

	if (t76 != 851LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = 0LL;
	uint8_t x316 = 2U;
	int64_t t77 = 0LL;

	t77 = ((x313/x314)|(x315^x316));

	if (t77 != 2020LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	static int16_t x319 = INT16_MIN;
	static uint16_t x320 = 9U;
	int64_t t78 = 39536745LL;

	t78 = ((x317/x318)|(x319^x320));

	if (t78 != -32759LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = 189027875LLU;
	int16_t x322 = INT16_MIN;
	uint32_t x323 = 8645031U;
	int32_t x324 = INT32_MIN;

	t79 = ((x321/x322)|(x323^x324));

	if (t79 != 2156128679LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x325 = 28235669472580LLU;
	int16_t x327 = INT16_MIN;
	volatile uint64_t t80 = 6LLU;

	t80 = ((x325/x326)|(x327^x328));

	if (t80 != 32767LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MIN;
	int16_t x332 = 87;
	int32_t t81 = 6410490;

	t81 = ((x329/x330)|(x331^x332));

	if (t81 != -2147483561) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x333 = INT32_MIN;
	static volatile int8_t x336 = -1;
	int32_t t82 = 111;

	t82 = ((x333/x334)|(x335^x336));

	if (t82 != 16777343) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = UINT32_MAX;
	int16_t x338 = -1;
	uint32_t x339 = UINT32_MAX;
	int16_t x340 = INT16_MIN;
	uint32_t t83 = 156507599U;

	t83 = ((x337/x338)|(x339^x340));

	if (t83 != 32767U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = 9411;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = 3;
	int8_t x344 = -9;
	static volatile uint64_t t84 = 481670235670779LLU;

	t84 = ((x341/x342)|(x343^x344));

	if (t84 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x345 = UINT8_MAX;
	int16_t x346 = 6369;
	int64_t x347 = 639LL;
	int8_t x348 = INT8_MIN;
	int64_t t85 = -340711129LL;

	t85 = ((x345/x346)|(x347^x348));

	if (t85 != -513LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x350 = -1;
	int32_t x352 = INT32_MIN;
	volatile int32_t t86 = -90475884;

	t86 = ((x349/x350)|(x351^x352));

	if (t86 != -2147483642) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x354 = INT16_MIN;
	int16_t x355 = -7677;
	volatile int64_t x356 = 1043477303224LL;

	t87 = ((x353/x354)|(x355^x356));

	if (t87 != -1043477303877LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x358 = 18363090379LL;
	int64_t x360 = 496706LL;
	uint64_t t88 = 396328905877942LLU;

	t88 = ((x357/x358)|(x359^x360));

	if (t88 != 18446744073709047148LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x361 = 643U;
	int16_t x362 = INT16_MAX;
	uint8_t x363 = UINT8_MAX;
	uint32_t t89 = 8U;

	t89 = ((x361/x362)|(x363^x364));

	if (t89 != 4294967167U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x365 = 947LLU;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = 31U;
	int8_t x368 = INT8_MIN;

	t90 = ((x365/x366)|(x367^x368));

	if (t90 != 4294967199LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -30;
	uint16_t x370 = 15U;
	int64_t x372 = 2072592628600LL;
	int64_t t91 = -5332LL;

	t91 = ((x369/x370)|(x371^x372));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x375 = -45868538535042LL;
	volatile uint16_t x376 = 110U;
	static int64_t t92 = -256LL;

	t92 = ((x373/x374)|(x375^x376));

	if (t92 != -10LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x377 = -1;
	static int64_t x378 = 220450811LL;
	int64_t x379 = -2930119758310913LL;
	int16_t x380 = INT16_MIN;
	volatile int64_t t93 = -929218971LL;

	t93 = ((x377/x378)|(x379^x380));

	if (t93 != 2930119758287359LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x381 = 0U;
	static int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	static int64_t t94 = 25814428214784LL;

	t94 = ((x381/x382)|(x383^x384));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x385 = 367091594;
	int32_t x386 = INT32_MAX;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t95 = 7196U;

	t95 = ((x385/x386)|(x387^x388));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MAX;
	static int64_t t96 = INT64_MAX;

	t96 = ((x389/x390)|(x391^x392));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = INT8_MIN;
	int64_t x396 = -1LL;
	static volatile int64_t t97 = -199LL;

	t97 = ((x393/x394)|(x395^x396));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = INT8_MAX;
	int64_t x398 = -1LL;
	int32_t x399 = 1584163;
	int32_t x400 = -160059139;

	t98 = ((x397/x398)|(x399^x400));

	if (t98 != -33LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x401 = UINT16_MAX;
	int32_t x402 = INT32_MAX;
	int64_t x404 = -8458208797169739LL;
	int64_t t99 = -2405LL;

	t99 = ((x401/x402)|(x403^x404));

	if (t99 != -9214913828057606070LL) { NG(); } else { ; }
	
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

