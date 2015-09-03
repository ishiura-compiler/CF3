#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
int64_t x2 = -1LL;
uint64_t x11 = UINT64_MAX;
volatile uint64_t t1 = 906LLU;
int16_t x13 = 16;
int64_t t2 = 275LL;
uint8_t x19 = 5U;
uint64_t t4 = 10621LLU;
int32_t t6 = -586;
uint16_t x35 = 2367U;
int16_t x38 = INT16_MIN;
int32_t x47 = INT32_MAX;
volatile int8_t x48 = -3;
volatile uint32_t t13 = 9105889U;
int64_t x65 = -4169833522LL;
int64_t t17 = -1855836LL;
volatile int8_t x80 = INT8_MIN;
uint64_t x82 = 1384816789104LLU;
volatile int64_t t19 = 166340297027820154LL;
int8_t x85 = INT8_MIN;
uint16_t x92 = 10405U;
int16_t x96 = INT16_MAX;
int16_t x97 = -237;
uint32_t x100 = 5953260U;
uint32_t t23 = 73601U;
int16_t x105 = 0;
static int64_t t25 = 5379602707800068LL;
uint32_t x110 = UINT32_MAX;
uint8_t x119 = 0U;
static int32_t x122 = INT32_MIN;
static volatile uint64_t x126 = UINT64_MAX;
int32_t x135 = INT32_MIN;
int16_t x156 = INT16_MAX;
static volatile int32_t t36 = 1;
uint16_t x158 = UINT16_MAX;
static volatile int8_t x161 = 1;
volatile int32_t t39 = 41658;
int32_t x172 = -1;
volatile int64_t t40 = -20035840777LL;
int8_t x183 = -1;
int8_t x189 = -1;
int8_t x195 = 0;
volatile int8_t x198 = INT8_MIN;
int16_t x201 = -1;
volatile uint8_t x204 = 28U;
int64_t x206 = -1LL;
int8_t x210 = -1;
uint32_t t50 = 78U;
static int32_t x213 = 0;
volatile int32_t t51 = 1;
int16_t x224 = 584;
int32_t x234 = -20087;
int32_t x240 = -8127;
static uint32_t x242 = 23983739U;
int32_t x244 = -1;
int8_t x247 = INT8_MAX;
int64_t x261 = 1855894810550LL;
volatile int8_t x263 = -1;
int32_t x267 = INT32_MIN;
int64_t x269 = INT64_MAX;
int32_t t64 = -7;
int16_t x273 = INT16_MAX;
int8_t x274 = INT8_MAX;
volatile int16_t x279 = 553;
int16_t x288 = 31;
volatile uint8_t x289 = 58U;
int64_t x296 = -107559633LL;
uint16_t x297 = 1001U;
uint64_t x298 = 132LLU;
static uint8_t x302 = UINT8_MAX;
uint32_t x303 = 20U;
int8_t x308 = INT8_MIN;
volatile int64_t x309 = 4347244304637LL;
uint32_t x312 = 469667920U;
int8_t x317 = -3;
int16_t x323 = INT16_MIN;
int64_t x324 = INT64_MIN;
int64_t t76 = -55234074786LL;
volatile int64_t x329 = INT64_MIN;
int16_t x330 = -54;
int64_t x334 = INT64_MAX;
static int64_t x335 = 497540049248651146LL;
int32_t x337 = 350658;
static int32_t x342 = INT32_MAX;
volatile uint8_t x346 = 5U;
int8_t x347 = -1;
volatile int64_t x358 = -44LL;
volatile int64_t t85 = 10027996895LL;
static uint8_t x369 = 20U;
volatile int8_t x370 = -1;
static int16_t x379 = INT16_MAX;
volatile int32_t t90 = 8160793;
uint16_t x382 = UINT16_MAX;
uint8_t x383 = UINT8_MAX;
uint64_t x388 = 61585723352LLU;
uint64_t t93 = 368245115354342957LLU;
uint64_t x394 = 276018923727LLU;
static int16_t x399 = -1;
int64_t t95 = 1418368LL;
int32_t x406 = -1;
uint32_t x407 = 103168476U;
volatile uint64_t t97 = 238885015045131LLU;
int16_t x418 = INT16_MAX;
static int64_t t99 = -3616LL;


void f0(void) {
	uint32_t x3 = 21U;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 943579433LL;

	t0 = ((x1==x2)/(x3^x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = INT32_MIN;
	volatile int16_t x10 = INT16_MAX;
	volatile int64_t x12 = INT64_MAX;

	t1 = ((x9==x10)/(x11^x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = 17167861529747LLU;
	volatile int64_t x15 = INT64_MIN;
	volatile int64_t x16 = -1238473181697397LL;

	t2 = ((x13==x14)/(x15^x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t3 = 17039723531718250LL;

	t3 = ((x17==x18)/(x19^x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 12;
	static int8_t x22 = INT8_MIN;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 9765LLU;

	t4 = ((x21==x22)/(x23^x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int16_t x26 = -2283;
	static int8_t x27 = INT8_MAX;
	uint16_t x28 = 55U;
	int32_t t5 = -10733682;

	t5 = ((x25==x26)/(x27^x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	static uint32_t x30 = 114729U;
	static int16_t x31 = -1;
	uint16_t x32 = 500U;

	t6 = ((x29==x30)/(x31^x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x34 = 12U;
	static int8_t x36 = -8;
	int32_t t7 = -1;

	t7 = ((x33==x34)/(x35^x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -1;
	int8_t x39 = -1;
	uint32_t x40 = 48551U;
	volatile uint32_t t8 = 732U;

	t8 = ((x37==x38)/(x39^x40));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = -1;
	volatile int64_t x43 = -38697627180792LL;
	static int8_t x44 = INT8_MIN;
	int64_t t9 = 0LL;

	t9 = ((x41==x42)/(x43^x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	uint64_t x46 = 1255682371LLU;
	int32_t t10 = -4728;

	t10 = ((x45==x46)/(x47^x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	uint8_t x50 = 0U;
	static int8_t x51 = 5;
	uint16_t x52 = 7018U;
	static volatile int32_t t11 = -122389525;

	t11 = ((x49==x50)/(x51^x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x53 = -1;
	static int64_t x54 = -1LL;
	uint64_t x55 = 551993LLU;
	uint8_t x56 = UINT8_MAX;
	uint64_t t12 = 16LLU;

	t12 = ((x53==x54)/(x55^x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = -40;
	volatile int8_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = INT32_MAX;

	t13 = ((x57==x58)/(x59^x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = INT32_MIN;
	volatile int16_t x62 = 0;
	volatile int8_t x63 = -1;
	volatile int16_t x64 = -88;
	volatile int32_t t14 = 11;

	t14 = ((x61==x62)/(x63^x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = INT32_MIN;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t15 = 4818414785LLU;

	t15 = ((x65==x66)/(x67^x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 250109269690784168LL;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = 1214U;
	int64_t x72 = INT64_MIN;
	volatile int64_t t16 = 5880LL;

	t16 = ((x69==x70)/(x71^x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = 163294745LLU;
	static int64_t x74 = INT64_MAX;
	uint8_t x75 = 4U;
	static volatile int64_t x76 = INT64_MAX;

	t17 = ((x73==x74)/(x75^x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MAX;
	volatile int8_t x79 = INT8_MAX;
	static volatile int32_t t18 = -456929;

	t18 = ((x77==x78)/(x79^x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x83 = 7U;
	int64_t x84 = INT64_MIN;

	t19 = ((x81==x82)/(x83^x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x86 = 29;
	static int8_t x87 = INT8_MIN;
	uint64_t x88 = UINT64_MAX;
	uint64_t t20 = 26919592063LLU;

	t20 = ((x85==x86)/(x87^x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x90 = 20669U;
	static uint32_t x91 = 29U;
	volatile uint32_t t21 = 1117630503U;

	t21 = ((x89==x90)/(x91^x92));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x93 = 27043181U;
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	static volatile int32_t t22 = -795;

	t22 = ((x93==x94)/(x95^x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x98 = 44U;
	volatile int8_t x99 = -1;

	t23 = ((x97==x98)/(x99^x100));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 7U;
	uint32_t x102 = 63294441U;
	static uint8_t x103 = 1U;
	int16_t x104 = -1;
	volatile int32_t t24 = 137796;

	t24 = ((x101==x102)/(x103^x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x106 = -9;
	int64_t x107 = -1LL;
	uint16_t x108 = UINT16_MAX;

	t25 = ((x105==x106)/(x107^x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = 3016218;
	volatile int64_t x111 = -1LL;
	uint32_t x112 = 3U;
	volatile int64_t t26 = 6446659731923LL;

	t26 = ((x109==x110)/(x111^x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MAX;
	int8_t x114 = -1;
	int8_t x115 = INT8_MAX;
	int32_t x116 = INT32_MIN;
	static int32_t t27 = 3114825;

	t27 = ((x113==x114)/(x115^x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 27726LLU;
	static int8_t x118 = INT8_MIN;
	int32_t x120 = -456775417;
	volatile int32_t t28 = -7154;

	t28 = ((x117==x118)/(x119^x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	volatile int64_t x123 = INT64_MIN;
	volatile int32_t x124 = -48793;
	volatile int64_t t29 = -12123761LL;

	t29 = ((x121==x122)/(x123^x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 100U;
	int16_t x127 = INT16_MAX;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t30 = -4;

	t30 = ((x125==x126)/(x127^x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = 3344187300268621LL;
	int16_t x134 = -1;
	static volatile int8_t x136 = 1;
	int32_t t31 = 253;

	t31 = ((x133==x134)/(x135^x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -1;
	volatile uint16_t x138 = 1U;
	int16_t x139 = -1;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t32 = -1393;

	t32 = ((x137==x138)/(x139^x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = -1113LL;
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = INT32_MIN;
	static uint64_t x144 = 212717726332LLU;
	uint64_t t33 = 29838373137264309LLU;

	t33 = ((x141==x142)/(x143^x144));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 0;
	volatile uint32_t x146 = UINT32_MAX;
	volatile int16_t x147 = -1;
	uint8_t x148 = 7U;
	volatile int32_t t34 = 375650;

	t34 = ((x145==x146)/(x147^x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = INT8_MAX;
	volatile int8_t x150 = 0;
	uint16_t x151 = UINT16_MAX;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t35 = 2043885;

	t35 = ((x149==x150)/(x151^x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MAX;
	int32_t x154 = INT32_MIN;
	int32_t x155 = -7529500;

	t36 = ((x153==x154)/(x155^x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 12U;
	uint16_t x159 = UINT16_MAX;
	volatile int64_t x160 = -1LL;
	int64_t t37 = 101124276718432828LL;

	t37 = ((x157==x158)/(x159^x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x162 = UINT32_MAX;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 288U;
	uint32_t t38 = 87U;

	t38 = ((x161==x162)/(x163^x164));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MAX;
	int16_t x166 = INT16_MIN;
	int16_t x167 = 281;
	static uint16_t x168 = UINT16_MAX;

	t39 = ((x165==x166)/(x167^x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x169 = 14U;
	int32_t x170 = -1;
	int64_t x171 = 234LL;

	t40 = ((x169==x170)/(x171^x172));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = -1;
	uint8_t x176 = 1U;
	int32_t t41 = 14651358;

	t41 = ((x173==x174)/(x175^x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 27U;
	volatile int8_t x178 = -30;
	uint8_t x179 = 0U;
	static int8_t x180 = INT8_MIN;
	int32_t t42 = -18;

	t42 = ((x177==x178)/(x179^x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = 126557649063222LL;
	int64_t x182 = -397193101199872027LL;
	volatile uint16_t x184 = UINT16_MAX;
	volatile int32_t t43 = 87817899;

	t43 = ((x181==x182)/(x183^x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = 14;
	int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MIN;
	static volatile int64_t t44 = -38435LL;

	t44 = ((x185==x186)/(x187^x188));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x190 = 891196810267LL;
	uint16_t x191 = 20U;
	int32_t x192 = -6280;
	volatile int32_t t45 = -56405024;

	t45 = ((x189==x190)/(x191^x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = INT16_MIN;
	volatile int64_t x194 = INT64_MIN;
	int32_t x196 = INT32_MIN;
	int32_t t46 = -9463110;

	t46 = ((x193==x194)/(x195^x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	volatile uint16_t x199 = 2084U;
	volatile int8_t x200 = INT8_MAX;
	static volatile int32_t t47 = -21;

	t47 = ((x197==x198)/(x199^x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x202 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	volatile int32_t t48 = -15125400;

	t48 = ((x201==x202)/(x203^x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = 119U;
	static int16_t x207 = INT16_MIN;
	int8_t x208 = 1;
	int32_t t49 = 1538285;

	t49 = ((x205==x206)/(x207^x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 95U;
	uint32_t x211 = 46499U;
	int8_t x212 = -13;

	t50 = ((x209==x210)/(x211^x212));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x214 = 30161540035559LLU;
	int16_t x215 = -10056;
	int16_t x216 = INT16_MIN;

	t51 = ((x213==x214)/(x215^x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = -1;
	volatile int64_t x218 = INT64_MIN;
	volatile uint32_t x219 = UINT32_MAX;
	uint16_t x220 = UINT16_MAX;
	volatile uint32_t t52 = 191879753U;

	t52 = ((x217==x218)/(x219^x220));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	uint32_t x222 = 1360352334U;
	static int8_t x223 = INT8_MAX;
	int32_t t53 = 0;

	t53 = ((x221==x222)/(x223^x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MAX;
	volatile int32_t t54 = -7531403;

	t54 = ((x225==x226)/(x227^x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = 0;
	int32_t x230 = INT32_MIN;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = 24748370LL;
	volatile uint64_t t55 = 72683LLU;

	t55 = ((x229==x230)/(x231^x232));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	int64_t x235 = 3LL;
	static int8_t x236 = INT8_MAX;
	int64_t t56 = -3LL;

	t56 = ((x233==x234)/(x235^x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x237 = -1;
	static int8_t x238 = INT8_MIN;
	volatile uint64_t x239 = UINT64_MAX;
	uint64_t t57 = 2638715953788374686LLU;

	t57 = ((x237==x238)/(x239^x240));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MAX;
	volatile uint16_t x243 = UINT16_MAX;
	static volatile int32_t t58 = 1;

	t58 = ((x241==x242)/(x243^x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x245 = 0;
	static int64_t x246 = INT64_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t59 = -1;

	t59 = ((x245==x246)/(x247^x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = 14964;
	int32_t x250 = INT32_MIN;
	volatile uint64_t x251 = 115LLU;
	int16_t x252 = -109;
	volatile uint64_t t60 = 1028895489LLU;

	t60 = ((x249==x250)/(x251^x252));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = -1LL;
	volatile int8_t x258 = INT8_MIN;
	uint16_t x259 = 736U;
	static volatile int64_t x260 = -3812191712LL;
	volatile int64_t t61 = -464LL;

	t61 = ((x257==x258)/(x259^x260));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = -1LL;
	volatile int16_t x264 = INT16_MIN;
	int32_t t62 = -1;

	t62 = ((x261==x262)/(x263^x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x265 = INT32_MIN;
	volatile uint16_t x266 = 490U;
	uint16_t x268 = UINT16_MAX;
	static volatile int32_t t63 = -32;

	t63 = ((x265==x266)/(x267^x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x270 = INT8_MIN;
	uint16_t x271 = UINT16_MAX;
	volatile int8_t x272 = INT8_MIN;

	t64 = ((x269==x270)/(x271^x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x275 = -1LL;
	uint32_t x276 = 82113U;
	volatile int64_t t65 = 6644176LL;

	t65 = ((x273==x274)/(x275^x276));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = -1;
	int32_t x278 = INT32_MAX;
	int8_t x280 = 39;
	volatile int32_t t66 = 143;

	t66 = ((x277==x278)/(x279^x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = -1;
	volatile uint16_t x286 = 47U;
	int32_t x287 = -1;
	static volatile int32_t t67 = 4107204;

	t67 = ((x285==x286)/(x287^x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x290 = 41LL;
	volatile int64_t x291 = 64042LL;
	volatile int64_t x292 = -3890617643790420LL;
	static volatile int64_t t68 = 92391721LL;

	t68 = ((x289==x290)/(x291^x292));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -12;
	int16_t x294 = INT16_MAX;
	int16_t x295 = -1;
	int64_t t69 = 87LL;

	t69 = ((x293==x294)/(x295^x296));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x299 = -24LL;
	volatile int8_t x300 = INT8_MIN;
	int64_t t70 = 51513751LL;

	t70 = ((x297==x298)/(x299^x300));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = -14;
	static volatile uint16_t x304 = UINT16_MAX;
	uint32_t t71 = 5168U;

	t71 = ((x301==x302)/(x303^x304));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MAX;
	uint32_t x307 = 598940U;
	volatile uint32_t t72 = 33470747U;

	t72 = ((x305==x306)/(x307^x308));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x310 = INT16_MAX;
	uint64_t x311 = 66710325538LLU;
	volatile uint64_t t73 = 623151368869763929LLU;

	t73 = ((x309==x310)/(x311^x312));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = -1;
	volatile int64_t x314 = 21LL;
	static uint64_t x315 = 11LLU;
	uint8_t x316 = 3U;
	volatile uint64_t t74 = 15876801741830LLU;

	t74 = ((x313==x314)/(x315^x316));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x318 = -1;
	volatile int32_t x319 = INT32_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t75 = 1;

	t75 = ((x317==x318)/(x319^x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = INT32_MAX;
	uint8_t x322 = 18U;

	t76 = ((x321==x322)/(x323^x324));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x325 = 1;
	uint64_t x326 = 140162206622066LLU;
	uint32_t x327 = 3955310U;
	int64_t x328 = INT64_MIN;
	volatile int64_t t77 = -100983248242LL;

	t77 = ((x325==x326)/(x327^x328));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x331 = 2715283U;
	volatile int64_t x332 = INT64_MIN;
	static int64_t t78 = 6LL;

	t78 = ((x329==x330)/(x331^x332));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x333 = -1;
	int64_t x336 = -1LL;
	int64_t t79 = 394701671295684LL;

	t79 = ((x333==x334)/(x335^x336));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x338 = INT32_MIN;
	static int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	int64_t t80 = -3495371351134204226LL;

	t80 = ((x337==x338)/(x339^x340));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = 0;
	uint8_t x343 = 1U;
	static int64_t x344 = INT64_MIN;
	volatile int64_t t81 = -39771068798131690LL;

	t81 = ((x341==x342)/(x343^x344));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = UINT32_MAX;
	uint64_t x348 = 197338723487269LLU;
	uint64_t t82 = 20511893LLU;

	t82 = ((x345==x346)/(x347^x348));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = 7LL;
	volatile int32_t x350 = INT32_MIN;
	volatile uint8_t x351 = 18U;
	int32_t x352 = INT32_MAX;
	volatile int32_t t83 = 19998;

	t83 = ((x349==x350)/(x351^x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = 2;
	int16_t x354 = -5;
	int32_t x355 = INT32_MIN;
	static uint8_t x356 = 1U;
	int32_t t84 = -72;

	t84 = ((x353==x354)/(x355^x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int64_t x359 = INT64_MIN;
	uint32_t x360 = UINT32_MAX;

	t85 = ((x357==x358)/(x359^x360));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = INT32_MIN;
	volatile int64_t x362 = INT64_MAX;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;
	static int32_t t86 = 116720;

	t86 = ((x361==x362)/(x363^x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MIN;
	uint32_t x366 = 18U;
	int32_t x367 = -522029902;
	int8_t x368 = 2;
	volatile int32_t t87 = -289876035;

	t87 = ((x365==x366)/(x367^x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x371 = 7251U;
	uint8_t x372 = UINT8_MAX;
	int32_t t88 = 6;

	t88 = ((x369==x370)/(x371^x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = 863678890387LL;
	static uint32_t x374 = 7286160U;
	volatile uint64_t x375 = 94292LLU;
	int16_t x376 = INT16_MIN;
	static uint64_t t89 = 1120LLU;

	t89 = ((x373==x374)/(x375^x376));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = 766746138;
	uint16_t x380 = 1U;

	t90 = ((x377==x378)/(x379^x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x381 = 4;
	static uint8_t x384 = 9U;
	static int32_t t91 = 808;

	t91 = ((x381==x382)/(x383^x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x385 = -7455553LL;
	uint8_t x386 = 3U;
	static int16_t x387 = INT16_MAX;
	uint64_t t92 = 23LLU;

	t92 = ((x385==x386)/(x387^x388));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = 11157435;
	static uint64_t x390 = 33968LLU;
	static uint64_t x391 = 179LLU;
	uint8_t x392 = 3U;

	t93 = ((x389==x390)/(x391^x392));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x393 = 161814008199LLU;
	uint32_t x395 = 216250477U;
	uint64_t x396 = 10812633LLU;
	volatile uint64_t t94 = 1931140659789901LLU;

	t94 = ((x393==x394)/(x395^x396));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -1224395;
	static int16_t x398 = -1;
	static int64_t x400 = INT64_MIN;

	t95 = ((x397==x398)/(x399^x400));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x401 = 1U;
	int8_t x402 = 0;
	static volatile uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	uint64_t t96 = 889928LLU;

	t96 = ((x401==x402)/(x403^x404));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x405 = INT8_MAX;
	volatile uint64_t x408 = 207441766LLU;

	t97 = ((x405==x406)/(x407^x408));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x413 = INT16_MIN;
	uint16_t x414 = 625U;
	uint8_t x415 = 21U;
	int8_t x416 = -28;
	int32_t t98 = -93944;

	t98 = ((x413==x414)/(x415^x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MIN;
	int16_t x419 = -1;
	int64_t x420 = -3393228LL;

	t99 = ((x417==x418)/(x419^x420));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

