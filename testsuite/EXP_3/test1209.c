#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x4 = 4496U;
int32_t t0 = 14106;
int16_t x9 = INT16_MIN;
static int8_t x19 = INT8_MIN;
volatile uint64_t t4 = 15833375239LLU;
static uint64_t x26 = 4901LLU;
int32_t x32 = INT32_MIN;
uint64_t x33 = 1390LLU;
uint64_t x44 = 504LLU;
volatile uint32_t t8 = 2U;
static int64_t x45 = 729078022180240497LL;
static int16_t x48 = INT16_MIN;
static uint16_t x50 = UINT16_MAX;
int32_t x58 = INT32_MAX;
uint64_t x62 = 489025903LLU;
volatile int16_t x63 = -944;
int64_t x79 = INT64_MIN;
volatile int32_t t15 = 262;
int64_t t16 = 1875040389LL;
int16_t x90 = INT16_MAX;
uint8_t x100 = 13U;
uint16_t x106 = 54U;
int32_t x109 = -3348425;
static uint64_t x114 = 7469130307929LLU;
int16_t x118 = -1;
int32_t t25 = 2650;
int64_t x126 = -1LL;
int64_t x143 = INT64_MAX;
uint8_t x144 = 1U;
static int32_t x146 = 763240;
static uint32_t x151 = 88475U;
volatile int64_t x154 = -1LL;
int32_t x162 = 19;
int8_t x164 = INT8_MAX;
volatile uint32_t t36 = 34130017U;
volatile int64_t t37 = -90989LL;
uint16_t x173 = UINT16_MAX;
int64_t x178 = -92LL;
uint64_t x179 = 62672815340292599LLU;
static int32_t x187 = INT32_MAX;
uint32_t x200 = UINT32_MAX;
uint64_t x203 = 1189LLU;
int64_t t45 = -281878770356LL;
volatile uint8_t x220 = UINT8_MAX;
volatile int64_t t50 = INT64_MIN;
uint8_t x229 = 1U;
uint8_t x231 = UINT8_MAX;
int64_t x232 = -42121338191982302LL;
uint64_t x234 = 3LLU;
static int32_t t53 = 258615;
uint64_t t56 = 145511244208470LLU;
static volatile uint32_t x257 = 5U;
static uint16_t x259 = 1U;
uint8_t x263 = UINT8_MAX;
int32_t t58 = 24;
uint32_t x265 = UINT32_MAX;
int32_t x274 = INT32_MIN;
uint32_t x275 = 299U;
int32_t t62 = -337312;
int8_t x286 = -6;
static int64_t x287 = -616584333380LL;
uint8_t x299 = 1U;
uint8_t x307 = UINT8_MAX;
volatile int64_t t67 = 1510LL;
int16_t x318 = 42;
int64_t x323 = INT64_MIN;
static int8_t x327 = INT8_MAX;
int8_t x329 = -1;
uint16_t x332 = 1829U;
uint16_t x333 = 604U;
volatile int32_t t77 = 92377505;
int8_t x362 = INT8_MIN;
int32_t x364 = INT32_MIN;
static volatile int32_t t78 = -1585;
int32_t x366 = -131;
int16_t x367 = INT16_MIN;
volatile int16_t x390 = -476;
static volatile uint64_t x393 = 11374139748LLU;
volatile int16_t x395 = INT16_MIN;
int64_t x396 = INT64_MIN;
static volatile int16_t x404 = INT16_MIN;
uint32_t x406 = 53U;
int32_t t89 = 1036308;
uint64_t x430 = 10373518827232604LLU;
volatile uint64_t t95 = 9336533730591729LLU;
int16_t x463 = -1;
int16_t x465 = -5;


void f0(void) {
	int8_t x1 = -1;
	volatile int8_t x2 = INT8_MIN;
	static volatile uint8_t x3 = 0U;

	t0 = ((x1-x2)^(x3==x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 2;
	uint8_t x6 = 0U;
	int16_t x7 = INT16_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 111;

	t1 = ((x5-x6)^(x7==x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -44;
	int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MAX;
	static int32_t t2 = 4;

	t2 = ((x9-x10)^(x11==x12));

	if (t2 != -32724) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x17 = -1;
	int32_t x18 = -1;
	static uint16_t x20 = UINT16_MAX;
	volatile int32_t t3 = 568514;

	t3 = ((x17-x18)^(x19==x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 8246769057518376LLU;
	volatile int64_t x22 = INT64_MIN;
	int32_t x23 = 208706;
	int16_t x24 = -288;

	t4 = ((x21-x22)^(x23==x24));

	if (t4 != 9231618805912294184LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint32_t x27 = UINT32_MAX;
	int64_t x28 = 191624636092635LL;
	uint64_t t5 = 2LLU;

	t5 = ((x25-x26)^(x27==x28));

	if (t5 != 60634LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 1U;
	int8_t x30 = INT8_MIN;
	static int8_t x31 = INT8_MIN;
	static int32_t t6 = 15731511;

	t6 = ((x29-x30)^(x31==x32));

	if (t6 != 129) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x34 = 48039U;
	int64_t x35 = INT64_MIN;
	int16_t x36 = -3276;
	uint64_t t7 = 6144855621LLU;

	t7 = ((x33-x34)^(x35==x36));

	if (t7 != 18446744073709504967LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 6U;
	uint16_t x42 = 70U;
	int64_t x43 = -4295365096053215LL;

	t8 = ((x41-x42)^(x43==x44));

	if (t8 != 4294967232U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x46 = 0;
	uint8_t x47 = 3U;
	int64_t t9 = 10348906963LL;

	t9 = ((x45-x46)^(x47==x48));

	if (t9 != 729078022180240497LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x49 = UINT64_MAX;
	int16_t x51 = 0;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t10 = 275LLU;

	t10 = ((x49-x50)^(x51==x52));

	if (t10 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = -307912471175746LL;
	volatile uint32_t x54 = UINT32_MAX;
	static uint32_t x55 = 4U;
	static int16_t x56 = -1;
	volatile int64_t t11 = -27516LL;

	t11 = ((x53-x54)^(x55==x56));

	if (t11 != -307916766143041LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	static volatile int16_t x59 = INT16_MIN;
	static uint8_t x60 = 1U;
	static int32_t t12 = INT32_MIN;

	t12 = ((x57-x58)^(x59==x60));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = INT32_MIN;
	static int8_t x64 = INT8_MAX;
	static volatile uint64_t t13 = 31663552LLU;

	t13 = ((x61-x62)^(x63==x64));

	if (t13 != 18446744071073042065LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	uint8_t x74 = 12U;
	static int8_t x75 = INT8_MIN;
	static volatile int32_t x76 = -1;
	static int32_t t14 = -434283225;

	t14 = ((x73-x74)^(x75==x76));

	if (t14 != -140) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	volatile int32_t x78 = -12366;
	volatile int8_t x80 = INT8_MIN;

	t15 = ((x77-x78)^(x79==x80));

	if (t15 != 12238) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = 56U;
	int64_t x82 = INT64_MAX;
	uint64_t x83 = 6256041546017147LLU;
	uint64_t x84 = 201512414LLU;

	t16 = ((x81-x82)^(x83==x84));

	if (t16 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x85 = 28U;
	int32_t x86 = 644;
	int64_t x87 = 3LL;
	uint8_t x88 = 6U;
	volatile uint32_t t17 = 524825897U;

	t17 = ((x85-x86)^(x87==x88));

	if (t17 != 4294966680U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -1;
	uint16_t x91 = UINT16_MAX;
	int8_t x92 = INT8_MIN;
	int32_t t18 = 78;

	t18 = ((x89-x90)^(x91==x92));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = 11142011LL;
	int8_t x94 = INT8_MAX;
	static uint64_t x95 = UINT64_MAX;
	int32_t x96 = 1861833;
	volatile int64_t t19 = 61LL;

	t19 = ((x93-x94)^(x95==x96));

	if (t19 != 11141884LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x97 = UINT8_MAX;
	int32_t x98 = -1;
	static volatile uint16_t x99 = 25367U;
	static int32_t t20 = -29630;

	t20 = ((x97-x98)^(x99==x100));

	if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = 0;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = UINT32_MAX;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t21 = 3316;

	t21 = ((x101-x102)^(x103==x104));

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 520U;
	uint32_t x107 = 1928U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t22 = -8198322;

	t22 = ((x105-x106)^(x107==x108));

	if (t22 != 466) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x110 = INT64_MIN;
	static volatile uint32_t x111 = 183351943U;
	uint32_t x112 = 112575809U;
	static volatile int64_t t23 = 17094517LL;

	t23 = ((x109-x110)^(x111==x112));

	if (t23 != 9223372036851427383LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = UINT8_MAX;
	static int16_t x115 = 13;
	int16_t x116 = 3796;
	volatile uint64_t t24 = 22058266LLU;

	t24 = ((x113-x114)^(x115==x116));

	if (t24 != 18446736604579243942LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	int8_t x119 = INT8_MAX;
	uint64_t x120 = UINT64_MAX;

	t25 = ((x117-x118)^(x119==x120));

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 6463749754540LLU;
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = INT8_MAX;
	int32_t x124 = INT32_MAX;
	uint64_t t26 = 6014067132825474853LLU;

	t26 = ((x121-x122)^(x123==x124));

	if (t26 != 6459454787245LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MAX;
	int16_t x127 = -580;
	volatile int64_t x128 = -1LL;
	int64_t t27 = 494540LL;

	t27 = ((x125-x126)^(x127==x128));

	if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x129 = 1804470601U;
	int64_t x130 = -1300628503885801LL;
	static uint32_t x131 = 1663409954U;
	int32_t x132 = INT32_MIN;
	int64_t t28 = 5303573LL;

	t28 = ((x129-x130)^(x131==x132));

	if (t28 != 1300630308356402LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -1;
	static volatile int64_t x134 = -1LL;
	int32_t x135 = 5;
	int8_t x136 = 23;
	int64_t t29 = 4LL;

	t29 = ((x133-x134)^(x135==x136));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MAX;
	uint32_t t30 = 61U;

	t30 = ((x137-x138)^(x139==x140));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x141 = 824918U;
	uint16_t x142 = UINT16_MAX;
	volatile uint32_t t31 = 2U;

	t31 = ((x141-x142)^(x143==x144));

	if (t31 != 759383U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = UINT64_MAX;
	volatile int8_t x147 = -1;
	uint8_t x148 = 0U;
	volatile uint64_t t32 = 248701LLU;

	t32 = ((x145-x146)^(x147==x148));

	if (t32 != 18446744073708788375LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x149 = UINT32_MAX;
	int8_t x150 = INT8_MIN;
	uint8_t x152 = 109U;
	volatile uint32_t t33 = 1948U;

	t33 = ((x149-x150)^(x151==x152));

	if (t33 != 127U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	int8_t x155 = INT8_MIN;
	volatile int16_t x156 = INT16_MAX;
	static int64_t t34 = 34813765LL;

	t34 = ((x153-x154)^(x155==x156));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = 47LL;
	int16_t x158 = INT16_MIN;
	int8_t x159 = -1;
	int64_t x160 = 73LL;
	int64_t t35 = -241208903346LL;

	t35 = ((x157-x158)^(x159==x160));

	if (t35 != 32815LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 120215569U;
	int16_t x163 = INT16_MIN;

	t36 = ((x161-x162)^(x163==x164));

	if (t36 != 120215550U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = INT8_MAX;
	static volatile int64_t x170 = -1LL;
	int64_t x171 = -1LL;
	int16_t x172 = 493;

	t37 = ((x169-x170)^(x171==x172));

	if (t37 != 128LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x174 = -1;
	uint8_t x175 = 113U;
	uint64_t x176 = UINT64_MAX;
	int32_t t38 = 118723339;

	t38 = ((x173-x174)^(x175==x176));

	if (t38 != 65536) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = 2;
	int64_t x180 = INT64_MIN;
	volatile int64_t t39 = 14886LL;

	t39 = ((x177-x178)^(x179==x180));

	if (t39 != 94LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 0;
	static int32_t x182 = -1;
	uint32_t x183 = 681240411U;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t40 = 1322633;

	t40 = ((x181-x182)^(x183==x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = 0;
	uint16_t x186 = 0U;
	static uint32_t x188 = 369U;
	static int32_t t41 = -407;

	t41 = ((x185-x186)^(x187==x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = -1019;
	static int8_t x190 = 11;
	static int32_t x191 = INT32_MIN;
	uint32_t x192 = UINT32_MAX;
	static int32_t t42 = 10619;

	t42 = ((x189-x190)^(x191==x192));

	if (t42 != -1030) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 177LLU;
	volatile int32_t x194 = -854;
	uint64_t x195 = UINT64_MAX;
	int64_t x196 = 291065LL;
	static uint64_t t43 = 340824387LLU;

	t43 = ((x193-x194)^(x195==x196));

	if (t43 != 1031LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MIN;
	static uint64_t x198 = 6625606571346397LLU;
	static int32_t x199 = INT32_MIN;
	volatile uint64_t t44 = 55LLU;

	t44 = ((x197-x198)^(x199==x200));

	if (t44 != 18440118467138172451LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -89186433LL;
	static int8_t x202 = 26;
	int32_t x204 = INT32_MAX;

	t45 = ((x201-x202)^(x203==x204));

	if (t45 != -89186459LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -3103755877807665522LL;
	volatile uint64_t x206 = 8562680700LLU;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = 8173362U;
	static uint64_t t46 = 170LLU;

	t46 = ((x205-x206)^(x207==x208));

	if (t46 != 15342988187339205394LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	static volatile uint16_t x211 = 126U;
	uint64_t x212 = 18504LLU;
	int32_t t47 = 3;

	t47 = ((x209-x210)^(x211==x212));

	if (t47 != 32640) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = INT8_MAX;
	uint16_t x214 = 19U;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	volatile int32_t t48 = -274;

	t48 = ((x213-x214)^(x215==x216));

	if (t48 != 109) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x217 = 14;
	uint16_t x218 = 880U;
	int32_t x219 = 7;
	int32_t t49 = -8153;

	t49 = ((x217-x218)^(x219==x220));

	if (t49 != -866) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = -1LL;
	int64_t x226 = INT64_MAX;
	uint8_t x227 = 2U;
	int16_t x228 = INT16_MIN;

	t50 = ((x225-x226)^(x227==x228));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x230 = -87160LL;
	volatile int64_t t51 = 28110LL;

	t51 = ((x229-x230)^(x231==x232));

	if (t51 != 87161LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = 4775529430LL;
	int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MAX;
	uint64_t t52 = 66LLU;

	t52 = ((x233-x234)^(x235==x236));

	if (t52 != 4775529427LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x237 = 6548U;
	volatile uint16_t x238 = 28466U;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = 1;

	t53 = ((x237-x238)^(x239==x240));

	if (t53 != -21918) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x241 = 1839890;
	volatile int32_t x242 = INT32_MAX;
	int64_t x243 = -1LL;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t54 = -992696589;

	t54 = ((x241-x242)^(x243==x244));

	if (t54 != -2145643757) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -1LL;
	volatile int16_t x250 = -1;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = 5U;
	volatile int64_t t55 = 62LL;

	t55 = ((x249-x250)^(x251==x252));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x253 = 311465733824LLU;
	int64_t x254 = -71110127279464LL;
	int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MIN;

	t56 = ((x253-x254)^(x255==x256));

	if (t56 != 71421593013288LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x258 = 0;
	volatile uint32_t x260 = 1830241564U;
	static volatile uint32_t t57 = 2021U;

	t57 = ((x257-x258)^(x259==x260));

	if (t57 != 5U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = 13U;
	volatile uint64_t x264 = 17LLU;

	t58 = ((x261-x262)^(x263==x264));

	if (t58 != -32781) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x266 = INT8_MIN;
	int8_t x267 = 0;
	uint16_t x268 = UINT16_MAX;
	uint32_t t59 = 165U;

	t59 = ((x265-x266)^(x267==x268));

	if (t59 != 127U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x273 = INT64_MIN;
	static int64_t x276 = -71359109024645LL;
	volatile int64_t t60 = -28LL;

	t60 = ((x273-x274)^(x275==x276));

	if (t60 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x277 = INT16_MIN;
	int64_t x278 = -4979156240LL;
	static volatile int8_t x279 = 0;
	static volatile uint16_t x280 = UINT16_MAX;
	volatile int64_t t61 = -2323000358LL;

	t61 = ((x277-x278)^(x279==x280));

	if (t61 != 4979123472LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x281 = INT16_MAX;
	int8_t x282 = 1;
	int64_t x283 = -1924505LL;
	int64_t x284 = -20390757365095LL;

	t62 = ((x281-x282)^(x283==x284));

	if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MIN;
	int16_t x288 = 5;
	volatile int32_t t63 = 295;

	t63 = ((x285-x286)^(x287==x288));

	if (t63 != -32762) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = 30;
	static int8_t x290 = INT8_MAX;
	uint16_t x291 = UINT16_MAX;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t64 = -49653;

	t64 = ((x289-x290)^(x291==x292));

	if (t64 != -97) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = 4946750823938LLU;
	int64_t x298 = 1098137956LL;
	static int16_t x300 = -1;
	volatile uint64_t t65 = 7060943927808695737LLU;

	t65 = ((x297-x298)^(x299==x300));

	if (t65 != 4945652685982LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MIN;
	int64_t x306 = 1022LL;
	int8_t x308 = -1;
	int64_t t66 = 2698570333251413164LL;

	t66 = ((x305-x306)^(x307==x308));

	if (t66 != -1150LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = 22;
	int64_t x310 = -1LL;
	int8_t x311 = -1;
	uint16_t x312 = UINT16_MAX;

	t67 = ((x309-x310)^(x311==x312));

	if (t67 != 23LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x313 = 1U;
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	static volatile int8_t x316 = INT8_MAX;
	volatile int32_t t68 = -2225233;

	t68 = ((x313-x314)^(x315==x316));

	if (t68 != 129) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 76U;
	int8_t x319 = 1;
	static int8_t x320 = INT8_MAX;
	volatile int32_t t69 = 27602;

	t69 = ((x317-x318)^(x319==x320));

	if (t69 != 34) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x321 = 0;
	int32_t x322 = INT32_MAX;
	volatile int16_t x324 = -1;
	int32_t t70 = 1;

	t70 = ((x321-x322)^(x323==x324));

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 2468923U;
	uint32_t x328 = 31879616U;
	uint64_t t71 = 114606535917LLU;

	t71 = ((x325-x326)^(x327==x328));

	if (t71 != 18446744073707082692LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x330 = -376;
	int8_t x331 = -1;
	static int32_t t72 = 26;

	t72 = ((x329-x330)^(x331==x332));

	if (t72 != 375) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x334 = UINT32_MAX;
	int64_t x335 = INT64_MIN;
	volatile int16_t x336 = INT16_MAX;
	volatile uint32_t t73 = 315286590U;

	t73 = ((x333-x334)^(x335==x336));

	if (t73 != 605U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x341 = 25819U;
	int8_t x342 = INT8_MAX;
	uint32_t x343 = 30366909U;
	static volatile uint8_t x344 = UINT8_MAX;
	volatile int32_t t74 = -1520796;

	t74 = ((x341-x342)^(x343==x344));

	if (t74 != 25692) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = UINT32_MAX;
	uint16_t x346 = UINT16_MAX;
	volatile uint64_t x347 = 7498LLU;
	int8_t x348 = -1;
	volatile uint32_t t75 = 767U;

	t75 = ((x345-x346)^(x347==x348));

	if (t75 != 4294901760U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x349 = 28961U;
	volatile uint32_t x350 = UINT32_MAX;
	uint16_t x351 = 6U;
	uint64_t x352 = 9706LLU;
	uint32_t t76 = 9449U;

	t76 = ((x349-x350)^(x351==x352));

	if (t76 != 28962U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x353 = -1;
	int16_t x354 = -113;
	static int16_t x355 = 62;
	int64_t x356 = -1LL;

	t77 = ((x353-x354)^(x355==x356));

	if (t77 != 112) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = INT8_MAX;
	static int16_t x363 = INT16_MAX;

	t78 = ((x361-x362)^(x363==x364));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x365 = 0U;
	uint16_t x368 = 39U;
	static int32_t t79 = 0;

	t79 = ((x365-x366)^(x367==x368));

	if (t79 != 131) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x369 = -218;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	int8_t x372 = -1;
	static int32_t t80 = 206;

	t80 = ((x369-x370)^(x371==x372));

	if (t80 != 2147483430) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = -1;
	int32_t x374 = -1;
	volatile uint32_t x375 = 337U;
	int16_t x376 = INT16_MIN;
	volatile int32_t t81 = -6;

	t81 = ((x373-x374)^(x375==x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MIN;
	int8_t x379 = 4;
	int32_t x380 = 8432;
	int64_t t82 = 276LL;

	t82 = ((x377-x378)^(x379==x380));

	if (t82 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = -5;
	int32_t x383 = -1;
	static int8_t x384 = -1;
	int64_t t83 = -582637252680338145LL;

	t83 = ((x381-x382)^(x383==x384));

	if (t83 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x389 = 101U;
	static volatile uint8_t x391 = 37U;
	uint64_t x392 = 264920LLU;
	int32_t t84 = 10353841;

	t84 = ((x389-x390)^(x391==x392));

	if (t84 != 577) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x394 = UINT64_MAX;
	uint64_t t85 = 11901LLU;

	t85 = ((x393-x394)^(x395==x396));

	if (t85 != 11374139749LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x397 = 14LL;
	uint8_t x398 = UINT8_MAX;
	int32_t x399 = 1;
	int8_t x400 = INT8_MIN;
	int64_t t86 = -4094198537621675208LL;

	t86 = ((x397-x398)^(x399==x400));

	if (t86 != -241LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	int64_t x403 = -327599072108852856LL;
	volatile int64_t t87 = 6509005LL;

	t87 = ((x401-x402)^(x403==x404));

	if (t87 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MAX;
	uint64_t x407 = 693LLU;
	int8_t x408 = -1;
	static volatile uint32_t t88 = 15900390U;

	t88 = ((x405-x406)^(x407==x408));

	if (t88 != 74U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = -1;
	int16_t x410 = 503;
	int32_t x411 = INT32_MAX;
	static uint64_t x412 = 32317310834474002LLU;

	t89 = ((x409-x410)^(x411==x412));

	if (t89 != -504) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x417 = 0;
	uint32_t x418 = UINT32_MAX;
	static int64_t x419 = INT64_MIN;
	int8_t x420 = INT8_MIN;
	volatile uint32_t t90 = 26315470U;

	t90 = ((x417-x418)^(x419==x420));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x421 = -42;
	int32_t x422 = INT32_MIN;
	volatile int16_t x423 = 81;
	static volatile uint32_t x424 = UINT32_MAX;
	volatile int32_t t91 = 87329;

	t91 = ((x421-x422)^(x423==x424));

	if (t91 != 2147483606) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x429 = INT8_MAX;
	volatile int32_t x431 = INT32_MIN;
	int64_t x432 = -1LL;
	volatile uint64_t t92 = 25667961271442LLU;

	t92 = ((x429-x430)^(x431==x432));

	if (t92 != 18436370554882319139LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x433 = 1700LLU;
	static volatile int64_t x434 = -1LL;
	int64_t x435 = INT64_MIN;
	static uint64_t x436 = UINT64_MAX;
	static volatile uint64_t t93 = 6199LLU;

	t93 = ((x433-x434)^(x435==x436));

	if (t93 != 1701LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x437 = UINT16_MAX;
	static int16_t x438 = -7;
	uint16_t x439 = 1193U;
	int64_t x440 = INT64_MIN;
	static int32_t t94 = 7244962;

	t94 = ((x437-x438)^(x439==x440));

	if (t94 != 65542) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x449 = UINT16_MAX;
	uint64_t x450 = UINT64_MAX;
	uint16_t x451 = 1277U;
	int32_t x452 = INT32_MIN;

	t95 = ((x449-x450)^(x451==x452));

	if (t95 != 65536LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x453 = INT64_MIN;
	volatile int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MAX;
	static int16_t x456 = INT16_MIN;
	volatile int64_t t96 = -3980399LL;

	t96 = ((x453-x454)^(x455==x456));

	if (t96 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x457 = 605524865244899561LLU;
	int16_t x458 = INT16_MAX;
	uint16_t x459 = UINT16_MAX;
	volatile int64_t x460 = INT64_MAX;
	static uint64_t t97 = 141073689502245LLU;

	t97 = ((x457-x458)^(x459==x460));

	if (t97 != 605524865244866794LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x461 = -11836LL;
	uint32_t x462 = 5676823U;
	int8_t x464 = -1;
	volatile int64_t t98 = -1456692149091972LL;

	t98 = ((x461-x462)^(x463==x464));

	if (t98 != -5688660LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x466 = 1;
	int16_t x467 = -1;
	int8_t x468 = -1;
	volatile int32_t t99 = 1754125;

	t99 = ((x465-x466)^(x467==x468));

	if (t99 != -5) { NG(); } else { ; }
	
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

