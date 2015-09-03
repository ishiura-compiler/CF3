#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = INT32_MAX;
volatile uint32_t t1 = UINT32_MAX;
int32_t x10 = 122772581;
volatile int32_t t2 = 80631534;
static int8_t x14 = 6;
uint32_t x20 = 3607U;
uint32_t x23 = UINT32_MAX;
volatile int16_t x32 = 195;
static volatile uint32_t t7 = 15765U;
int32_t x37 = INT32_MIN;
int32_t x38 = -1;
int8_t x45 = INT8_MIN;
uint64_t x46 = 43441LLU;
int64_t x48 = INT64_MIN;
volatile uint64_t t11 = 3713LLU;
uint16_t x51 = 5U;
static volatile int32_t t12 = -1006816733;
uint64_t t13 = 3022LLU;
int16_t x58 = 6;
static volatile int32_t t15 = -13;
volatile int16_t x71 = 20;
int16_t x75 = INT16_MAX;
uint8_t x93 = 6U;
uint64_t x96 = UINT64_MAX;
volatile uint64_t t23 = UINT64_MAX;
volatile int64_t t29 = -2444667929004867504LL;
uint16_t x122 = UINT16_MAX;
int16_t x123 = -1;
volatile uint16_t x127 = UINT16_MAX;
uint64_t t31 = UINT64_MAX;
volatile uint64_t t32 = UINT64_MAX;
static volatile uint8_t x136 = 2U;
static volatile uint64_t t33 = 3LLU;
int16_t x139 = 739;
uint16_t x143 = 162U;
static volatile uint32_t x146 = 869312539U;
int16_t x147 = INT16_MIN;
int8_t x148 = INT8_MIN;
static int16_t x149 = 0;
int64_t x150 = INT64_MAX;
int8_t x151 = INT8_MIN;
int64_t x156 = 61658LL;
int8_t x159 = 19;
int8_t x161 = -1;
int8_t x163 = INT8_MAX;
int8_t x166 = -1;
int16_t x174 = -6664;
static uint8_t x175 = 115U;
int8_t x176 = INT8_MIN;
int64_t x179 = 83329498875332LL;
uint32_t x180 = UINT32_MAX;
static volatile uint16_t x181 = 1U;
uint64_t t45 = UINT64_MAX;
static volatile uint64_t t46 = UINT64_MAX;
uint32_t t48 = UINT32_MAX;
static uint8_t x199 = 0U;
volatile uint64_t x205 = UINT64_MAX;
int16_t x208 = -123;
int8_t x210 = INT8_MIN;
int16_t x215 = INT16_MIN;
volatile uint64_t t54 = 1705382196774LLU;
volatile int32_t t57 = -3587956;
uint32_t x236 = 11U;
volatile int64_t t59 = 2509055905LL;
uint64_t t61 = 84615LLU;
volatile int32_t x250 = 26;
uint8_t x253 = 4U;
volatile int64_t t64 = -19890670780625LL;
int64_t t67 = 41LL;
volatile uint64_t x276 = 6553461628LLU;
uint64_t t68 = 752825748LLU;
int64_t x280 = INT64_MIN;
static int64_t x281 = INT64_MIN;
static uint64_t x284 = UINT64_MAX;
uint64_t t70 = UINT64_MAX;
static int32_t x286 = INT32_MIN;
static uint16_t x287 = 5U;
uint64_t x294 = 742691554388LLU;
static int32_t x305 = -1;
volatile int32_t t78 = -1671;
uint64_t x320 = 6123676129217800432LLU;
uint16_t x333 = 3635U;
int16_t x336 = -1;
int32_t t83 = 1;
static volatile int8_t x340 = 2;
static int8_t x345 = INT8_MIN;
volatile int32_t x349 = INT32_MIN;
int32_t t87 = 55;
volatile uint64_t t89 = UINT64_MAX;
volatile uint64_t x362 = UINT64_MAX;
int32_t x366 = INT32_MIN;
uint8_t x367 = 6U;
int32_t t91 = 20;
uint64_t x372 = 365LLU;
int32_t x374 = -1;
uint64_t t97 = UINT64_MAX;


void f0(void) {
	int8_t x1 = -10;
	static int64_t x2 = INT64_MIN;
	int16_t x3 = -1;
	volatile int64_t t0 = 427599LL;

	t0 = ((x1|x2)|(x3|x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	uint32_t x6 = UINT32_MAX;
	static int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5|x6)|(x7|x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 48U;
	uint8_t x11 = 7U;
	int8_t x12 = INT8_MIN;

	t2 = ((x9|x10)|(x11|x12));

	if (t2 != -9) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile int8_t x15 = INT8_MIN;
	int8_t x16 = -2;
	int32_t t3 = -1649;

	t3 = ((x13|x14)|(x15|x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint16_t x18 = 12183U;
	uint64_t x19 = 3057977836247428LLU;
	volatile uint64_t t4 = 25002878561721LLU;

	t4 = ((x17|x18)|(x19|x20));

	if (t4 != 3057978060046335LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -2543406912770LL;
	int32_t x22 = INT32_MIN;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x21|x22)|(x23|x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	static int64_t x26 = -1LL;
	static uint8_t x27 = 94U;
	int16_t x28 = -110;
	int64_t t6 = 150823366314715143LL;

	t6 = ((x25|x26)|(x27|x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	static uint32_t x30 = 0U;
	static uint16_t x31 = UINT16_MAX;

	t7 = ((x29|x30)|(x31|x32));

	if (t7 != 65535U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	static int32_t x34 = -1;
	static uint64_t x35 = UINT64_MAX;
	int32_t x36 = -1;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x33|x34)|(x35|x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 1;

	t9 = ((x37|x38)|(x39|x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x41 = UINT64_MAX;
	int16_t x42 = INT16_MIN;
	uint32_t x43 = 25U;
	volatile uint32_t x44 = 3U;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41|x42)|(x43|x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x47 = 768U;

	t11 = ((x45|x46)|(x47|x48));

	if (t11 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 2817;
	int16_t x50 = INT16_MIN;
	int32_t x52 = INT32_MIN;

	t12 = ((x49|x50)|(x51|x52));

	if (t12 != -29947) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	uint32_t x54 = 24U;
	volatile uint64_t x55 = 337038261818LLU;
	int8_t x56 = INT8_MIN;

	t13 = ((x53|x54)|(x55|x56));

	if (t13 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MAX;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = 63692078;

	t14 = ((x57|x58)|(x59|x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int32_t x62 = -1;
	volatile int8_t x63 = -12;
	volatile int32_t x64 = INT32_MAX;

	t15 = ((x61|x62)|(x63|x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 10U;
	volatile int8_t x66 = 7;
	int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MAX;
	volatile int64_t t16 = 136247161LL;

	t16 = ((x65|x66)|(x67|x68));

	if (t16 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	volatile int16_t x70 = -1;
	static volatile int64_t x72 = INT64_MIN;
	volatile int64_t t17 = 222LL;

	t17 = ((x69|x70)|(x71|x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x73 = INT16_MIN;
	int8_t x74 = 48;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 1043898870;

	t18 = ((x73|x74)|(x75|x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -248575478356LL;
	static uint8_t x78 = 6U;
	static int8_t x79 = -1;
	uint64_t x80 = 189793002069189LLU;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x77|x78)|(x79|x80));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int64_t x82 = 7726316809598LL;
	int8_t x83 = 30;
	static int16_t x84 = INT16_MIN;
	volatile int64_t t20 = -72394656739058LL;

	t20 = ((x81|x82)|(x83|x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 265459080U;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MAX;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = ((x85|x86)|(x87|x88));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 1975LLU;
	int16_t x90 = 154;
	int16_t x91 = -1;
	int64_t x92 = INT64_MIN;
	static volatile uint64_t t22 = UINT64_MAX;

	t22 = ((x89|x90)|(x91|x92));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = -1;
	static uint16_t x95 = 1501U;

	t23 = ((x93|x94)|(x95|x96));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = 1;
	volatile uint32_t x99 = 318865U;
	int32_t x100 = INT32_MIN;
	static uint32_t t24 = 6707U;

	t24 = ((x97|x98)|(x99|x100));

	if (t24 != 4294958481U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -23;
	int64_t x102 = 4407542787LL;
	int64_t x103 = -6410529LL;
	volatile int16_t x104 = INT16_MIN;
	volatile int64_t t25 = 70884686LL;

	t25 = ((x101|x102)|(x103|x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 56;
	volatile uint16_t x106 = 12U;
	static uint16_t x107 = 0U;
	static int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = -239;

	t26 = ((x105|x106)|(x107|x108));

	if (t26 != -68) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 1U;
	int64_t x110 = 87948287761482377LL;
	int64_t x111 = 1580794413LL;
	volatile int8_t x112 = INT8_MIN;
	int64_t t27 = -10313841185763439LL;

	t27 = ((x109|x110)|(x111|x112));

	if (t27 != -83LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MAX;
	uint8_t x114 = 4U;
	uint32_t x115 = UINT32_MAX;
	static volatile uint8_t x116 = 0U;
	static volatile uint32_t t28 = UINT32_MAX;

	t28 = ((x113|x114)|(x115|x116));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 7U;
	static volatile uint8_t x118 = 0U;
	int64_t x119 = -11187051LL;
	static uint8_t x120 = 3U;

	t29 = ((x117|x118)|(x119|x120));

	if (t29 != -11187049LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = UINT16_MAX;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = 0;

	t30 = ((x121|x122)|(x123|x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 120708;
	uint64_t x126 = UINT64_MAX;
	static int16_t x128 = INT16_MAX;

	t31 = ((x125|x126)|(x127|x128));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -248;
	static uint64_t x130 = 169959LLU;
	int64_t x131 = 13171574551LL;
	volatile uint64_t x132 = 863LLU;

	t32 = ((x129|x130)|(x131|x132));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -33688539052495347LL;
	uint64_t x134 = 4809405574LLU;
	volatile int16_t x135 = INT16_MAX;

	t33 = ((x133|x134)|(x135|x136));

	if (t33 != 18413055535096004607LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int32_t x140 = 211634;
	volatile int32_t t34 = -2;

	t34 = ((x137|x138)|(x139|x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = 125;
	volatile int16_t x142 = INT16_MIN;
	uint64_t x144 = 47661222LLU;
	volatile uint64_t t35 = 2123108006LLU;

	t35 = ((x141|x142)|(x143|x144));

	if (t35 != 18446744073709535487LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = ((x145|x146)|(x147|x148));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x152 = INT64_MIN;
	static int64_t t37 = -1LL;

	t37 = ((x149|x150)|(x151|x152));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 1U;
	volatile int32_t x154 = -25502538;
	static int16_t x155 = -1;
	int64_t t38 = 2LL;

	t38 = ((x153|x154)|(x155|x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 1;
	volatile int64_t x158 = 1213458LL;
	volatile int16_t x160 = 1084;
	static int64_t t39 = -80692LL;

	t39 = ((x157|x158)|(x159|x160));

	if (t39 != 1213503LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = -1;
	static int8_t x164 = INT8_MIN;
	int32_t t40 = -2878421;

	t40 = ((x161|x162)|(x163|x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	uint16_t x167 = 2U;
	static int32_t x168 = INT32_MIN;
	uint32_t t41 = UINT32_MAX;

	t41 = ((x165|x166)|(x167|x168));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	static int32_t x170 = 303780;
	int64_t x171 = -1LL;
	uint32_t x172 = 3074955U;
	volatile int64_t t42 = -8467066936634LL;

	t42 = ((x169|x170)|(x171|x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 2;
	volatile int32_t t43 = -174939;

	t43 = ((x173|x174)|(x175|x176));

	if (t43 != -5) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 54U;
	int64_t t44 = 61611382469332046LL;

	t44 = ((x177|x178)|(x179|x180));

	if (t44 != 83330955476991LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x182 = INT8_MAX;
	uint64_t x183 = 1071859534158832711LLU;
	int8_t x184 = -49;

	t45 = ((x181|x182)|(x183|x184));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 61500LLU;
	volatile int64_t x186 = -1LL;
	volatile uint32_t x187 = 1663371U;
	int64_t x188 = INT64_MAX;

	t46 = ((x185|x186)|(x187|x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1990819390748LL;
	volatile int16_t x190 = -1;
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = 32;
	static int64_t t47 = -66LL;

	t47 = ((x189|x190)|(x191|x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 14611U;
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = INT16_MIN;
	static int8_t x196 = -1;

	t48 = ((x193|x194)|(x195|x196));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -98009;
	int8_t x198 = -1;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = -416545083;

	t49 = ((x197|x198)|(x199|x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 104;
	int64_t x202 = INT64_MIN;
	int16_t x203 = -28;
	uint64_t x204 = 89LLU;
	uint64_t t50 = 151167673863872252LLU;

	t50 = ((x201|x202)|(x203|x204));

	if (t50 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = UINT8_MAX;
	volatile int64_t x207 = INT64_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x205|x206)|(x207|x208));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int64_t x211 = 208088694LL;
	volatile uint32_t x212 = UINT32_MAX;
	volatile int64_t t52 = 5860329669LL;

	t52 = ((x209|x210)|(x211|x212));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	static uint32_t x214 = UINT32_MAX;
	uint16_t x216 = 84U;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = ((x213|x214)|(x215|x216));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 2U;
	uint32_t x218 = 220U;
	uint16_t x219 = UINT16_MAX;
	uint64_t x220 = 216110800092872LLU;

	t54 = ((x217|x218)|(x219|x220));

	if (t54 != 216110800109567LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int32_t x222 = INT32_MIN;
	static uint16_t x223 = 8U;
	static int64_t x224 = INT64_MAX;
	static int64_t t55 = 79372179165466LL;

	t55 = ((x221|x222)|(x223|x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MAX;
	volatile int64_t x228 = 46237515038LL;
	int64_t t56 = -1700836141287444668LL;

	t56 = ((x225|x226)|(x227|x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -30;
	int8_t x230 = -1;
	volatile uint16_t x231 = 102U;
	static uint8_t x232 = UINT8_MAX;

	t57 = ((x229|x230)|(x231|x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -18;
	volatile int32_t x234 = INT32_MIN;
	volatile int64_t x235 = INT64_MIN;
	int64_t t58 = 6281159LL;

	t58 = ((x233|x234)|(x235|x236));

	if (t58 != -17LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = -444;
	static int32_t x239 = -1;
	int8_t x240 = 3;

	t59 = ((x237|x238)|(x239|x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 961U;
	static int64_t x242 = INT64_MIN;
	volatile int8_t x243 = -1;
	int32_t x244 = INT32_MIN;
	static volatile int64_t t60 = 9LL;

	t60 = ((x241|x242)|(x243|x244));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = UINT8_MAX;
	uint16_t x246 = 5362U;
	uint64_t x247 = 1334067819119LLU;
	int64_t x248 = 15427781202LL;

	t61 = ((x245|x246)|(x247|x248));

	if (t61 != 1338414167807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static volatile int8_t x251 = INT8_MIN;
	uint16_t x252 = 0U;
	int32_t t62 = -16103;

	t62 = ((x249|x250)|(x251|x252));

	if (t62 != -102) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = -1;
	int32_t x255 = INT32_MIN;
	int8_t x256 = 0;
	static int32_t t63 = 8;

	t63 = ((x253|x254)|(x255|x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = -1LL;
	static uint16_t x259 = 1038U;
	static int32_t x260 = -1;

	t64 = ((x257|x258)|(x259|x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = UINT8_MAX;
	volatile uint32_t x264 = 211692U;
	uint32_t t65 = UINT32_MAX;

	t65 = ((x261|x262)|(x263|x264));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static int32_t x266 = 47378451;
	uint32_t x267 = 6642U;
	static volatile uint8_t x268 = 6U;
	volatile int64_t t66 = 31234794666256LL;

	t66 = ((x265|x266)|(x267|x268));

	if (t66 != -9223372036807394825LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	static int64_t x270 = 5345528LL;
	int64_t x271 = INT64_MIN;
	int32_t x272 = INT32_MIN;

	t67 = ((x269|x270)|(x271|x272));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	volatile int16_t x274 = INT16_MIN;
	int64_t x275 = -3534LL;

	t68 = ((x273|x274)|(x275|x276));

	if (t68 != 18446744073709548414LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 6U;
	uint16_t x278 = 1U;
	int8_t x279 = INT8_MIN;
	int64_t t69 = -252LL;

	t69 = ((x277|x278)|(x279|x280));

	if (t69 != -121LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MIN;

	t70 = ((x281|x282)|(x283|x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 1488U;
	int8_t x288 = -54;
	volatile int32_t t71 = 22437;

	t71 = ((x285|x286)|(x287|x288));

	if (t71 != -33) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = 7062;
	int64_t x290 = -29507037588034LL;
	static int64_t x291 = -1LL;
	int64_t x292 = 3087234082648131146LL;
	volatile int64_t t72 = -30703943958328302LL;

	t72 = ((x289|x290)|(x291|x292));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 11389U;
	uint64_t x295 = 3934342LLU;
	volatile uint8_t x296 = 3U;
	uint64_t t73 = 57062807LLU;

	t73 = ((x293|x294)|(x295|x296));

	if (t73 != 742693661951LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = -1;
	int64_t x299 = INT64_MIN;
	static volatile int64_t x300 = INT64_MIN;
	volatile int64_t t74 = -82797029LL;

	t74 = ((x297|x298)|(x299|x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 501U;
	volatile int64_t x302 = -1LL;
	static uint64_t x303 = 14109569162087378LLU;
	int32_t x304 = INT32_MIN;
	static volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x301|x302)|(x303|x304));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x306 = -1LL;
	volatile int32_t x307 = 1119;
	volatile int32_t x308 = INT32_MIN;
	volatile int64_t t76 = 749227401932333722LL;

	t76 = ((x305|x306)|(x307|x308));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	static int32_t x310 = INT32_MIN;
	volatile uint8_t x311 = 2U;
	int8_t x312 = INT8_MIN;
	int64_t t77 = -24508909LL;

	t77 = ((x309|x310)|(x311|x312));

	if (t77 != -126LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = INT8_MIN;
	static int8_t x314 = INT8_MIN;
	uint8_t x315 = 1U;
	int32_t x316 = INT32_MIN;

	t78 = ((x313|x314)|(x315|x316));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 0U;
	volatile uint16_t x318 = 301U;
	uint32_t x319 = 1039104475U;
	uint64_t t79 = 125081525653626LLU;

	t79 = ((x317|x318)|(x319|x320));

	if (t79 != 6123676129426405887LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	uint16_t x323 = 17U;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = ((x321|x322)|(x323|x324));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	static volatile uint32_t x326 = 5509U;
	volatile int32_t x327 = INT32_MIN;
	int64_t x328 = 865384156LL;
	static int64_t t81 = -65281852LL;

	t81 = ((x325|x326)|(x327|x328));

	if (t81 != -1282099235LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -1LL;
	int16_t x330 = -193;
	volatile int64_t x331 = -1LL;
	int32_t x332 = INT32_MAX;
	static int64_t t82 = 4548015601463LL;

	t82 = ((x329|x330)|(x331|x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MIN;

	t83 = ((x333|x334)|(x335|x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -36896LL;
	static volatile int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	volatile int64_t t84 = -69LL;

	t84 = ((x337|x338)|(x339|x340));

	if (t84 != -30LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 31;
	uint16_t x342 = 1U;
	int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	static int32_t t85 = 377547;

	t85 = ((x341|x342)|(x343|x344));

	if (t85 != -97) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x346 = 103U;
	uint16_t x347 = 125U;
	static volatile uint8_t x348 = 11U;
	volatile int32_t t86 = -1;

	t86 = ((x345|x346)|(x347|x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MAX;
	uint16_t x351 = 8U;
	int32_t x352 = INT32_MIN;

	t87 = ((x349|x350)|(x351|x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = 425;
	int8_t x354 = -1;
	int32_t x355 = INT32_MIN;
	static int16_t x356 = 1;
	volatile int32_t t88 = -3477740;

	t88 = ((x353|x354)|(x355|x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 518224LLU;
	uint8_t x358 = 12U;
	static int8_t x359 = 2;
	int32_t x360 = -1;

	t89 = ((x357|x358)|(x359|x360));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -1;
	static uint64_t t90 = UINT64_MAX;

	t90 = ((x361|x362)|(x363|x364));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	int16_t x368 = INT16_MAX;

	t91 = ((x365|x366)|(x367|x368));

	if (t91 != -2147450881) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 345U;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	volatile uint64_t t92 = 6LLU;

	t92 = ((x369|x370)|(x371|x372));

	if (t92 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 0U;
	int8_t x375 = -1;
	volatile int8_t x376 = INT8_MIN;
	uint32_t t93 = UINT32_MAX;

	t93 = ((x373|x374)|(x375|x376));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static volatile int16_t x378 = -1;
	volatile int64_t x379 = -1LL;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t94 = -25LL;

	t94 = ((x377|x378)|(x379|x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 468987390071753786LLU;
	uint8_t x382 = 72U;
	int16_t x383 = INT16_MIN;
	static uint16_t x384 = 1U;
	static volatile uint64_t t95 = 7959LLU;

	t95 = ((x381|x382)|(x383|x384));

	if (t95 != 18446744073709538427LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -32746835LL;
	volatile int64_t x386 = 8207341313977528LL;
	uint64_t x387 = 26167977130LLU;
	uint8_t x388 = 22U;
	static uint64_t t96 = 27156LLU;

	t96 = ((x385|x386)|(x387|x388));

	if (t96 != 18446744073705356991LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	int32_t x390 = -1;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = 1LLU;

	t97 = ((x389|x390)|(x391|x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	uint8_t x394 = 8U;
	volatile int8_t x395 = -58;
	int16_t x396 = INT16_MAX;
	volatile int32_t t98 = -116;

	t98 = ((x393|x394)|(x395|x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MAX;
	uint8_t x398 = 0U;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t99 = 117070812;

	t99 = ((x397|x398)|(x399|x400));

	if (t99 != -2147418113) { NG(); } else { ; }
	
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

