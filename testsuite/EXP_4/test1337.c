#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x11 = 331533071;
static uint8_t x17 = 35U;
static volatile int32_t t5 = -585;
uint32_t x25 = UINT32_MAX;
static int8_t x31 = INT8_MIN;
volatile int32_t x33 = 12;
static volatile int64_t x44 = -1LL;
uint64_t x47 = UINT64_MAX;
static int16_t x55 = INT16_MIN;
static int64_t x56 = INT64_MIN;
volatile int32_t x59 = -1;
volatile uint8_t x62 = 6U;
volatile uint8_t x64 = UINT8_MAX;
uint8_t x69 = 1U;
volatile int32_t t18 = INT32_MIN;
int64_t x79 = -34360LL;
uint16_t x84 = 1U;
static volatile int8_t x86 = INT8_MIN;
volatile uint64_t x90 = 77819872547LLU;
int32_t x94 = INT32_MIN;
int64_t x96 = -9970185LL;
int64_t x97 = -120564737LL;
int32_t x106 = -1;
int64_t x112 = INT64_MIN;
static volatile uint64_t t27 = 2545759149LLU;
volatile uint32_t t28 = 1U;
volatile int8_t x117 = INT8_MAX;
volatile int8_t x121 = -1;
uint32_t x129 = 3U;
int8_t x135 = 2;
int32_t x137 = -465873;
int32_t x140 = -2868;
int16_t x148 = INT16_MIN;
int64_t x149 = -1776LL;
int32_t x165 = INT32_MIN;
int32_t x172 = INT32_MIN;
static int32_t x175 = INT32_MIN;
volatile int64_t x177 = 19136992143377LL;
volatile int64_t t46 = INT64_MAX;
int8_t x190 = INT8_MIN;
int64_t t47 = -141677157LL;
int64_t x197 = INT64_MIN;
uint32_t x202 = UINT32_MAX;
volatile uint32_t t50 = UINT32_MAX;
static int16_t x205 = INT16_MIN;
uint16_t x207 = UINT16_MAX;
static volatile int64_t t54 = 1LL;
int16_t x224 = -1;
int32_t x228 = INT32_MIN;
int8_t x231 = -5;
volatile int32_t x232 = -1;
int32_t x236 = INT32_MAX;
volatile int32_t x241 = -723280;
uint8_t x242 = 10U;
int32_t x244 = -1;
int8_t x250 = -14;
uint16_t x251 = 19497U;
volatile int16_t x258 = -8410;
int64_t x263 = INT64_MAX;
static volatile int32_t x270 = INT32_MIN;
uint16_t x277 = 3U;
static volatile uint64_t t70 = 2165686830LLU;
uint32_t x286 = 19111U;
int32_t x298 = INT32_MIN;
static uint64_t x299 = 221121781LLU;
volatile int16_t x310 = 857;
uint32_t x311 = 28107477U;
volatile int32_t t77 = -584125010;
int8_t x320 = 0;
static volatile uint32_t t79 = 3605U;
volatile int32_t t81 = -15472;
int8_t x333 = -1;
int16_t x344 = INT16_MIN;
int64_t x356 = INT64_MIN;
int32_t x359 = 59918;
volatile int16_t x361 = INT16_MIN;
int64_t x362 = INT64_MIN;
volatile int64_t x364 = INT64_MIN;
int8_t x368 = -5;
static int16_t x374 = -4;
static uint64_t t93 = 226010865LLU;
int8_t x379 = INT8_MIN;
static uint64_t x389 = 113192041261LLU;
uint32_t t99 = 159488U;


void f0(void) {
	uint64_t x1 = 396306770LLU;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MAX;
	int8_t x4 = -55;
	uint64_t t0 = 2138232814462623182LLU;

	t0 = (x1&(x2|(x3==x4)));

	if (t0 != 396306688LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 7U;
	uint16_t x6 = 14181U;
	int8_t x7 = -1;
	int64_t x8 = -3LL;
	static uint32_t t1 = 1721215995U;

	t1 = (x5&(x6|(x7==x8)));

	if (t1 != 5U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	static int8_t x10 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 3671913;

	t2 = (x9&(x10|(x11==x12)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	uint32_t x14 = 7347164U;
	int64_t x15 = INT64_MAX;
	int16_t x16 = 1443;
	uint32_t t3 = 681283799U;

	t3 = (x13&(x14|(x15==x16)));

	if (t3 != 7347072U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	static int8_t x19 = 42;
	uint64_t x20 = 267948LLU;
	int32_t t4 = -79811;

	t4 = (x17&(x18|(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 11422U;
	int32_t x22 = -481;
	int32_t x23 = -1;
	int32_t x24 = -1;

	t5 = (x21&(x22|(x23==x24)));

	if (t5 != 11294) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MAX;
	int64_t x27 = 3LL;
	uint8_t x28 = UINT8_MAX;
	volatile int64_t t6 = 894846981286LL;

	t6 = (x25&(x26|(x27==x28)));

	if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 26U;
	volatile int8_t x30 = INT8_MAX;
	uint64_t x32 = 115611278LLU;
	static volatile int32_t t7 = 950753283;

	t7 = (x29&(x30|(x31==x32)));

	if (t7 != 26) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	int16_t x35 = INT16_MAX;
	int8_t x36 = 2;
	int64_t t8 = -8154245978339LL;

	t8 = (x33&(x34|(x35==x36)));

	if (t8 != 12LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -1;
	volatile int16_t x38 = INT16_MIN;
	static int16_t x39 = -1;
	volatile uint32_t x40 = 33744091U;
	int32_t t9 = -250941;

	t9 = (x37&(x38|(x39==x40)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 8U;
	uint32_t x42 = 23729U;
	int32_t x43 = INT32_MAX;
	uint32_t t10 = 348U;

	t10 = (x41&(x42|(x43==x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 0;
	uint16_t x46 = 4712U;
	static int64_t x48 = -1LL;
	volatile int32_t t11 = 0;

	t11 = (x45&(x46|(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	static int16_t x50 = INT16_MIN;
	static uint16_t x51 = 27782U;
	int16_t x52 = INT16_MIN;
	static volatile uint64_t t12 = 801427489215LLU;

	t12 = (x49&(x50|(x51==x52)));

	if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static int16_t x54 = 0;
	static volatile int32_t t13 = 367;

	t13 = (x53&(x54|(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = -1;
	uint64_t x60 = 6106255323204025403LLU;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x57&(x58|(x59==x60)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 120;
	volatile uint64_t x63 = 234556851030995827LLU;
	static volatile int32_t t15 = 2372;

	t15 = (x61&(x62|(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile uint16_t x66 = 2U;
	volatile int8_t x67 = 3;
	int8_t x68 = 10;
	volatile int32_t t16 = 118837;

	t16 = (x65&(x66|(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = UINT32_MAX;
	static volatile int32_t x71 = -2940010;
	static uint16_t x72 = 1U;
	uint32_t t17 = 1835U;

	t17 = (x69&(x70|(x71==x72)));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	volatile int16_t x74 = INT16_MIN;
	int64_t x75 = 608299064384LL;
	uint32_t x76 = 456155U;

	t18 = (x73&(x74|(x75==x76)));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	uint32_t x78 = UINT32_MAX;
	int16_t x80 = INT16_MIN;
	static uint32_t t19 = 1549853268U;

	t19 = (x77&(x78|(x79==x80)));

	if (t19 != 2147483648U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -11;
	int16_t x82 = -48;
	int16_t x83 = -8054;
	volatile int32_t t20 = 8869538;

	t20 = (x81&(x82|(x83==x84)));

	if (t20 != -48) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int8_t x87 = INT8_MIN;
	volatile int16_t x88 = 13;
	volatile int32_t t21 = -491;

	t21 = (x85&(x86|(x87==x88)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int32_t x91 = INT32_MAX;
	int8_t x92 = -1;
	uint64_t t22 = 7667682455685621198LLU;

	t22 = (x89&(x90|(x91==x92)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -1LL;
	uint32_t x95 = 194991U;
	volatile int64_t t23 = -35LL;

	t23 = (x93&(x94|(x95==x96)));

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 3558U;
	int32_t x99 = INT32_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	volatile int64_t t24 = -2640087LL;

	t24 = (x97&(x98|(x99==x100)));

	if (t24 != 486LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = UINT32_MAX;
	static uint16_t x102 = 2U;
	static volatile uint16_t x103 = UINT16_MAX;
	int8_t x104 = 12;
	static volatile uint32_t t25 = 403347U;

	t25 = (x101&(x102|(x103==x104)));

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	volatile uint16_t x107 = 95U;
	int16_t x108 = -1;
	int32_t t26 = -429414459;

	t26 = (x105&(x106|(x107==x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MAX;
	uint64_t x110 = 2434137091018LLU;
	uint8_t x111 = UINT8_MAX;

	t27 = (x109&(x110|(x111==x112)));

	if (t27 != 1038117834LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 0U;
	static uint16_t x114 = UINT16_MAX;
	int64_t x115 = -44892590LL;
	uint64_t x116 = UINT64_MAX;

	t28 = (x113&(x114|(x115==x116)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = INT32_MIN;
	static int64_t x119 = INT64_MIN;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = 89;

	t29 = (x117&(x118|(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = INT8_MAX;
	int8_t x123 = 58;
	int32_t x124 = 1;
	int32_t t30 = 812740;

	t30 = (x121&(x122|(x123==x124)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int8_t x126 = -1;
	static int64_t x127 = INT64_MIN;
	static uint8_t x128 = 4U;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x125&(x126|(x127==x128)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MIN;
	static volatile int32_t x131 = INT32_MAX;
	uint32_t x132 = UINT32_MAX;
	static int64_t t32 = 287573LL;

	t32 = (x129&(x130|(x131==x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MIN;
	int8_t x134 = -1;
	static int8_t x136 = INT8_MIN;
	volatile int32_t t33 = INT32_MIN;

	t33 = (x133&(x134|(x135==x136)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = UINT8_MAX;
	uint8_t x139 = UINT8_MAX;
	static int32_t t34 = -115;

	t34 = (x137&(x138|(x139==x140)));

	if (t34 != 47) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = 1586894971645666297LL;
	volatile uint32_t x144 = UINT32_MAX;
	uint64_t t35 = 241786400106808LLU;

	t35 = (x141&(x142|(x143==x144)));

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 2LL;
	uint8_t x146 = UINT8_MAX;
	volatile int32_t x147 = -243418886;
	volatile int64_t t36 = -1960177680361867895LL;

	t36 = (x145&(x146|(x147==x148)));

	if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	int64_t x151 = -1LL;
	static int32_t x152 = INT32_MIN;
	int64_t t37 = -15103LL;

	t37 = (x149&(x150|(x151==x152)));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1188196078728702LL;
	int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = 0U;
	volatile int64_t t38 = -371574778LL;

	t38 = (x153&(x154|(x155==x156)));

	if (t38 != -1188196259987456LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int32_t x158 = 126310385;
	int64_t x159 = -16145235311LL;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = -56;

	t39 = (x157&(x158|(x159==x160)));

	if (t39 != 126310272) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 527400592U;
	int64_t x162 = INT64_MIN;
	static int16_t x163 = 11799;
	static uint64_t x164 = UINT64_MAX;
	static int64_t t40 = -34037LL;

	t40 = (x161&(x162|(x163==x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = 204872219873940LL;
	int32_t x167 = -39;
	static int8_t x168 = -1;
	volatile int64_t t41 = -131103979575631493LL;

	t41 = (x165&(x166|(x167==x168)));

	if (t41 != 204872087502848LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 424U;
	static uint64_t x170 = UINT64_MAX;
	int64_t x171 = INT64_MIN;
	static volatile uint64_t t42 = 43928730LLU;

	t42 = (x169&(x170|(x171==x172)));

	if (t42 != 424LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 3040047LL;
	uint32_t x174 = 812098U;
	int64_t x176 = -1LL;
	int64_t t43 = 26392693LL;

	t43 = (x173&(x174|(x175==x176)));

	if (t43 != 811010LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 2U;
	volatile uint8_t x179 = 0U;
	int16_t x180 = INT16_MAX;
	static volatile int64_t t44 = 1993675LL;

	t44 = (x177&(x178|(x179==x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = 3;
	volatile int16_t x182 = 1;
	int32_t x183 = INT32_MAX;
	int64_t x184 = INT64_MIN;
	int32_t t45 = 3140362;

	t45 = (x181&(x182|(x183==x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -1;
	static int64_t x186 = INT64_MAX;
	uint8_t x187 = 1U;
	int16_t x188 = -6;

	t46 = (x185&(x186|(x187==x188)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	int64_t x191 = INT64_MAX;
	uint8_t x192 = 1U;

	t47 = (x189&(x190|(x191==x192)));

	if (t47 != -128LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	static int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MIN;
	static volatile int64_t t48 = 517550LL;

	t48 = (x193&(x194|(x195==x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x198 = 24;
	int64_t x199 = 4942300971364LL;
	static int64_t x200 = 2101676486LL;
	int64_t t49 = -1225LL;

	t49 = (x197&(x198|(x199==x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int64_t x203 = -1LL;
	uint64_t x204 = UINT64_MAX;

	t50 = (x201&(x202|(x203==x204)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 2011LLU;
	uint64_t x208 = 2063LLU;
	static uint64_t t51 = 469526060LLU;

	t51 = (x205&(x206|(x207==x208)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = 511893LL;
	int16_t x211 = INT16_MIN;
	int32_t x212 = -405;
	static int64_t t52 = -7764407LL;

	t52 = (x209&(x210|(x211==x212)));

	if (t52 != 511872LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = INT32_MAX;
	static volatile uint32_t x215 = UINT32_MAX;
	uint64_t x216 = 849036LLU;
	static volatile int32_t t53 = -220097196;

	t53 = (x213&(x214|(x215==x216)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 699462298LL;
	uint32_t x218 = 0U;
	int32_t x219 = -1;
	volatile int16_t x220 = INT16_MIN;

	t54 = (x217&(x218|(x219==x220)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 1;
	int8_t x222 = -5;
	static volatile int32_t x223 = -1;
	volatile int32_t t55 = -905869;

	t55 = (x221&(x222|(x223==x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 0;
	int8_t x226 = -47;
	volatile uint8_t x227 = 3U;
	int32_t t56 = -30668378;

	t56 = (x225&(x226|(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 35716171150623227LL;
	int8_t x230 = INT8_MAX;
	volatile int64_t t57 = -4LL;

	t57 = (x229&(x230|(x231==x232)));

	if (t57 != 123LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 3U;
	int16_t x234 = -1;
	int16_t x235 = -1;
	volatile int32_t t58 = -446112451;

	t58 = (x233&(x234|(x235==x236)));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	volatile int32_t x238 = INT32_MAX;
	static int32_t x239 = -1;
	int32_t x240 = INT32_MIN;
	int32_t t59 = 1;

	t59 = (x237&(x238|(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x243 = 26967U;
	int32_t t60 = -54;

	t60 = (x241&(x242|(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MAX;
	int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	static uint32_t x248 = 253092827U;
	int64_t t61 = -5145242639188LL;

	t61 = (x245&(x246|(x247==x248)));

	if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -419609LL;
	static int32_t x252 = -1;
	static int64_t t62 = 1LL;

	t62 = (x249&(x250|(x251==x252)));

	if (t62 != -419614LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -430;
	static int64_t x254 = -1LL;
	uint64_t x255 = 48973892258553507LLU;
	uint16_t x256 = UINT16_MAX;
	volatile int64_t t63 = -1603121230252683471LL;

	t63 = (x253&(x254|(x255==x256)));

	if (t63 != -430LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -3;
	int64_t x259 = -1LL;
	static uint32_t x260 = 5U;
	static volatile int32_t t64 = 129850278;

	t64 = (x257&(x258|(x259==x260)));

	if (t64 != -8412) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = 1LL;
	int8_t x262 = -1;
	uint8_t x264 = UINT8_MAX;
	static volatile int64_t t65 = 5605222065764LL;

	t65 = (x261&(x262|(x263==x264)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	int8_t x266 = 0;
	uint64_t x267 = 162813088050LLU;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 4;

	t66 = (x265&(x266|(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 1;
	int32_t x271 = 31482;
	uint64_t x272 = 27479820823LLU;
	volatile int32_t t67 = -41;

	t67 = (x269&(x270|(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = -102;
	uint32_t x274 = 241U;
	volatile int16_t x275 = 12154;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t68 = 191U;

	t68 = (x273&(x274|(x275==x276)));

	if (t68 != 144U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = INT16_MAX;
	int64_t x279 = -1LL;
	volatile int64_t x280 = INT64_MIN;
	volatile int32_t t69 = 7;

	t69 = (x277&(x278|(x279==x280)));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	volatile uint64_t x282 = UINT64_MAX;
	int64_t x283 = INT64_MAX;
	static int16_t x284 = INT16_MIN;

	t70 = (x281&(x282|(x283==x284)));

	if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int16_t x287 = -12;
	int32_t x288 = -78643243;
	volatile uint32_t t71 = 63U;

	t71 = (x285&(x286|(x287==x288)));

	if (t71 != 19111U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MAX;
	int32_t x290 = INT32_MAX;
	uint64_t x291 = 33923159431363819LLU;
	int32_t x292 = 0;
	volatile int32_t t72 = -8;

	t72 = (x289&(x290|(x291==x292)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MIN;
	int32_t x295 = 0;
	int16_t x296 = 2595;
	int64_t t73 = 2741129LL;

	t73 = (x293&(x294|(x295==x296)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 3U;
	uint16_t x300 = UINT16_MAX;
	static volatile int32_t t74 = 1095188;

	t74 = (x297&(x298|(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int32_t x302 = 1;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = UINT64_MAX;
	int32_t t75 = 0;

	t75 = (x301&(x302|(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int8_t x306 = INT8_MIN;
	int64_t x307 = -1LL;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 63559;

	t76 = (x305&(x306|(x307==x308)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 5888U;
	uint16_t x312 = 228U;

	t77 = (x309&(x310|(x311==x312)));

	if (t77 != 768) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 13174579U;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = 10863U;
	int16_t x316 = -1;
	volatile uint32_t t78 = 11753U;

	t78 = (x313&(x314|(x315==x316)));

	if (t78 != 1843U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 1958412567U;
	static uint16_t x318 = 610U;
	static volatile uint8_t x319 = 78U;

	t79 = (x317&(x318|(x319==x320)));

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	int8_t x322 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	static uint32_t x324 = 61889075U;
	volatile int32_t t80 = -2063;

	t80 = (x321&(x322|(x323==x324)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MAX;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MAX;

	t81 = (x325&(x326|(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	uint64_t x330 = 2917746686872LLU;
	static int16_t x331 = 5;
	uint32_t x332 = 10382U;
	volatile uint64_t t82 = 272128040913530990LLU;

	t82 = (x329&(x330|(x331==x332)));

	if (t82 != 2917746686872LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = UINT64_MAX;
	static int16_t x335 = INT16_MAX;
	int8_t x336 = INT8_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = (x333&(x334|(x335==x336)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	static int32_t x338 = -2;
	static uint8_t x339 = UINT8_MAX;
	uint32_t x340 = 60087U;
	int32_t t84 = -5096819;

	t84 = (x337&(x338|(x339==x340)));

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -39286937;
	int8_t x342 = INT8_MAX;
	static int32_t x343 = INT32_MAX;
	int32_t t85 = -2895;

	t85 = (x341&(x342|(x343==x344)));

	if (t85 != 103) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MAX;
	int64_t t86 = INT64_MIN;

	t86 = (x345&(x346|(x347==x348)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -1;
	static int32_t x350 = INT32_MAX;
	static uint64_t x351 = 27404708126LLU;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = INT32_MAX;

	t87 = (x349&(x350|(x351==x352)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 3U;
	uint32_t x354 = 65242551U;
	volatile int8_t x355 = -1;
	volatile uint32_t t88 = 530497349U;

	t88 = (x353&(x354|(x355==x356)));

	if (t88 != 3U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	volatile uint32_t x358 = 3402U;
	static int16_t x360 = -1;
	uint32_t t89 = 0U;

	t89 = (x357&(x358|(x359==x360)));

	if (t89 != 3328U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x363 = 14426831U;
	int64_t t90 = INT64_MIN;

	t90 = (x361&(x362|(x363==x364)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 8842052U;
	uint16_t x366 = 93U;
	int8_t x367 = INT8_MIN;
	volatile uint32_t t91 = 1U;

	t91 = (x365&(x366|(x367==x368)));

	if (t91 != 68U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = -495751184;
	static volatile int64_t x371 = INT64_MIN;
	volatile int64_t x372 = INT64_MIN;
	int32_t t92 = -15986;

	t92 = (x369&(x370|(x371==x372)));

	if (t92 != -495751296) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	int64_t x375 = -20563LL;
	int64_t x376 = INT64_MIN;

	t93 = (x373&(x374|(x375==x376)));

	if (t93 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = 101162706144LL;
	int32_t x380 = INT32_MIN;
	int64_t t94 = -466583608988030695LL;

	t94 = (x377&(x378|(x379==x380)));

	if (t94 != 101162680320LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 123U;
	int8_t x382 = INT8_MIN;
	uint8_t x383 = 65U;
	int8_t x384 = -1;
	volatile int32_t t95 = 43060352;

	t95 = (x381&(x382|(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -47;
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -16098716;

	t96 = (x385&(x386|(x387==x388)));

	if (t96 != 209) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x390 = INT8_MIN;
	int32_t x391 = -1;
	int16_t x392 = 8;
	volatile uint64_t t97 = 17093252902LLU;

	t97 = (x389&(x390|(x391==x392)));

	if (t97 != 113192041216LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = UINT8_MAX;
	volatile int8_t x394 = 1;
	volatile int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 211472697;

	t98 = (x393&(x394|(x395==x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MAX;
	volatile int16_t x400 = INT16_MIN;

	t99 = (x397&(x398|(x399==x400)));

	if (t99 != 4294934528U) { NG(); } else { ; }
	
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

