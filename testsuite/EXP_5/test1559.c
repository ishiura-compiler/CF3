#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -1LL;
int64_t x17 = -1LL;
static volatile uint32_t x21 = 20273622U;
int32_t x26 = -241738205;
int32_t x28 = INT32_MIN;
volatile int8_t x29 = -1;
uint8_t x31 = 3U;
uint8_t x38 = 3U;
static int32_t x51 = 28;
int64_t t12 = 62650162030708LL;
volatile int64_t x59 = -1LL;
int16_t x64 = -1;
static int64_t x74 = INT64_MIN;
volatile uint16_t x76 = 12617U;
int32_t x78 = -1;
int32_t x84 = 1113789;
volatile int64_t x87 = -1LL;
int8_t x90 = INT8_MIN;
static int32_t t22 = 6486204;
uint64_t x96 = 70LLU;
volatile int32_t t25 = -1313;
volatile uint32_t x106 = 7U;
uint32_t t26 = 1410165U;
uint32_t x111 = 185U;
uint64_t x112 = 482LLU;
static volatile int64_t x114 = 1LL;
int32_t x118 = INT32_MIN;
volatile uint64_t x119 = UINT64_MAX;
static volatile int32_t x123 = -1;
int32_t x132 = INT32_MIN;
uint8_t x142 = UINT8_MAX;
static volatile int32_t t35 = 23252;
uint64_t t36 = 29309135525363LLU;
int16_t x149 = INT16_MAX;
int8_t x156 = INT8_MIN;
volatile int32_t t38 = -894200;
static int64_t x157 = INT64_MIN;
int16_t x165 = INT16_MAX;
static int64_t x168 = INT64_MAX;
static int64_t t41 = INT64_MAX;
int32_t x169 = -5;
int64_t x172 = INT64_MIN;
int8_t x174 = INT8_MIN;
int32_t x175 = -1281575;
static uint32_t x176 = UINT32_MAX;
int64_t x191 = -1LL;
int64_t t47 = INT64_MIN;
volatile int64_t x193 = INT64_MIN;
int32_t x194 = INT32_MAX;
uint32_t x200 = UINT32_MAX;
volatile int64_t x209 = INT64_MIN;
static int64_t x211 = INT64_MIN;
uint8_t x218 = 7U;
static uint64_t x223 = UINT64_MAX;
volatile int8_t x234 = -1;
int32_t x248 = -1;
volatile int32_t t61 = 217711149;
int64_t x251 = -58114922LL;
int64_t x259 = 10289385LL;
static int32_t t64 = 826274541;
int16_t x273 = 52;
int32_t x274 = INT32_MIN;
int8_t x280 = -1;
static volatile int64_t x285 = 1130557LL;
uint64_t x287 = UINT64_MAX;
int64_t t71 = 28270220566403780LL;
volatile int8_t x289 = -28;
static volatile int16_t x294 = -8;
volatile uint64_t x295 = UINT64_MAX;
uint16_t x301 = UINT16_MAX;
int8_t x302 = -1;
volatile int32_t t75 = 15942008;
volatile int32_t x305 = -1;
volatile uint32_t t76 = UINT32_MAX;
volatile uint8_t x316 = 5U;
int32_t t78 = -12970530;
int64_t x317 = INT64_MAX;
static volatile uint64_t x319 = 2144LLU;
int32_t x322 = INT32_MIN;
volatile int64_t x323 = 3107742628LL;
uint64_t x339 = UINT64_MAX;
static int8_t x340 = INT8_MAX;
int8_t x345 = INT8_MAX;
int32_t x350 = 89;
int64_t x361 = INT64_MIN;
volatile uint64_t t91 = UINT64_MAX;
int32_t x370 = INT32_MAX;
int16_t x371 = INT16_MIN;
int32_t x378 = INT32_MIN;
uint32_t x379 = 85747U;
int64_t x380 = -1LL;
int64_t t94 = -815774872LL;
volatile int8_t x383 = INT8_MAX;
int16_t x384 = INT16_MIN;
static int16_t x386 = -1;
int8_t x394 = INT8_MAX;


void f0(void) {
	uint32_t x1 = 92U;
	int32_t x2 = 457893839;
	int8_t x3 = INT8_MAX;
	volatile uint32_t x4 = 1U;
	uint32_t t0 = 95647119U;

	t0 = (x1|((x2<=x3)*x4));

	if (t0 != 92U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 91U;
	volatile int16_t x6 = INT16_MAX;
	static uint16_t x8 = UINT16_MAX;
	int32_t t1 = -41935;

	t1 = (x5|((x6<=x7)*x8));

	if (t1 != 91) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 45;
	volatile int64_t x10 = -1LL;
	int32_t x11 = INT32_MAX;
	static volatile uint64_t x12 = 350718906263LLU;
	static uint64_t t2 = 3305183151029574LLU;

	t2 = (x9|((x10<=x11)*x12));

	if (t2 != 350718906303LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -5210;
	volatile int32_t x14 = -6;
	uint64_t x15 = 786838511145996LLU;
	static int64_t x16 = -1LL;
	int64_t t3 = -7214901673LL;

	t3 = (x13|((x14<=x15)*x16));

	if (t3 != -5210LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = 6;
	volatile uint32_t x19 = 62934U;
	volatile int16_t x20 = INT16_MIN;
	volatile int64_t t4 = 1436256860530704154LL;

	t4 = (x17|((x18<=x19)*x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 1;
	int64_t x23 = -1LL;
	static int32_t x24 = INT32_MIN;
	volatile uint32_t t5 = 14352U;

	t5 = (x21|((x22<=x23)*x24));

	if (t5 != 20273622U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	int32_t x27 = -41;
	volatile int32_t t6 = 3356020;

	t6 = (x25|((x26<=x27)*x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x30 = 39U;
	int32_t x32 = -1;
	static volatile int32_t t7 = 5428767;

	t7 = (x29|((x30<=x31)*x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	uint8_t x34 = UINT8_MAX;
	volatile int8_t x35 = -1;
	int8_t x36 = -1;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33|((x34<=x35)*x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static int64_t x39 = -79LL;
	uint64_t x40 = 368994LLU;
	uint64_t t9 = 255LLU;

	t9 = (x37|((x38<=x39)*x40));

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = 1522377037739129562LL;
	int32_t x43 = INT32_MIN;
	volatile int8_t x44 = 2;
	static volatile int32_t t10 = INT32_MIN;

	t10 = (x41|((x42<=x43)*x44));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint64_t x46 = 921742720514LLU;
	volatile int32_t x47 = INT32_MIN;
	volatile int32_t x48 = -9928;
	static int32_t t11 = 21908;

	t11 = (x45|((x46<=x47)*x48));

	if (t11 != -9729) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	uint64_t x50 = 55412LLU;
	int64_t x52 = -1LL;

	t12 = (x49|((x50<=x51)*x52));

	if (t12 != 127LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -8;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = 0;
	uint64_t x56 = 185424793588496LLU;
	uint64_t t13 = 1LLU;

	t13 = (x53|((x54<=x55)*x56));

	if (t13 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	static volatile uint16_t x58 = UINT16_MAX;
	int32_t x60 = -3888;
	int32_t t14 = 1;

	t14 = (x57|((x58<=x59)*x60));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	volatile int16_t x62 = INT16_MAX;
	int32_t x63 = INT32_MIN;
	int32_t t15 = 99;

	t15 = (x61|((x62<=x63)*x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 1U;
	uint8_t x66 = 18U;
	int16_t x67 = INT16_MIN;
	int8_t x68 = -1;
	static volatile uint32_t t16 = 40U;

	t16 = (x65|((x66<=x67)*x68));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MIN;
	uint32_t x70 = 393U;
	int16_t x71 = INT16_MAX;
	volatile uint32_t x72 = 151083497U;
	uint32_t t17 = 3U;

	t17 = (x69|((x70<=x71)*x72));

	if (t17 != 4294957545U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x75 = -38301408LL;
	static int64_t t18 = 3446819925265LL;

	t18 = (x73|((x74<=x75)*x76));

	if (t18 != -9223372036854763191LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x79 = UINT8_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -4517;

	t19 = (x77|((x78<=x79)*x80));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1551U;
	int8_t x82 = INT8_MIN;
	uint8_t x83 = 2U;
	volatile int32_t t20 = 2;

	t20 = (x81|((x82<=x83)*x84));

	if (t20 != 1113791) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 5627U;
	volatile int16_t x86 = -1;
	static volatile uint8_t x88 = 16U;
	int32_t t21 = 141929;

	t21 = (x85|((x86<=x87)*x88));

	if (t21 != 5627) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int16_t x91 = -2514;
	uint8_t x92 = 15U;

	t22 = (x89|((x90<=x91)*x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -1;
	static uint16_t x94 = UINT16_MAX;
	static int8_t x95 = INT8_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x93|((x94<=x95)*x96));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	uint16_t x98 = 4U;
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MIN;
	int64_t t24 = INT64_MAX;

	t24 = (x97|((x98<=x99)*x100));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MIN;
	static volatile uint16_t x103 = 421U;
	volatile int8_t x104 = -10;

	t25 = (x101|((x102<=x103)*x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 139U;
	uint64_t x107 = UINT64_MAX;
	int8_t x108 = 46;

	t26 = (x105|((x106<=x107)*x108));

	if (t26 != 175U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	static volatile uint32_t x110 = 185U;
	static uint64_t t27 = 10411650048LLU;

	t27 = (x109|((x110<=x111)*x112));

	if (t27 != 9223372036854776290LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	int8_t x115 = 2;
	int8_t x116 = INT8_MIN;
	int64_t t28 = -1184575835376551512LL;

	t28 = (x113|((x114<=x115)*x116));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 26164942LLU;
	volatile uint64_t x120 = 4416745726623925LLU;
	uint64_t t29 = 22914LLU;

	t29 = (x117|((x118<=x119)*x120));

	if (t29 != 4416745752198911LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	volatile int32_t x122 = 4042;
	uint64_t x124 = 405714943611769550LLU;
	uint64_t t30 = UINT64_MAX;

	t30 = (x121|((x122<=x123)*x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	volatile int64_t x126 = -1LL;
	volatile uint64_t x127 = 40LLU;
	volatile uint16_t x128 = UINT16_MAX;
	int32_t t31 = -56;

	t31 = (x125|((x126<=x127)*x128));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 0;
	int64_t x130 = INT64_MAX;
	uint64_t x131 = 8186369LLU;
	int32_t t32 = 378954069;

	t32 = (x129|((x130<=x131)*x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -6644;
	int32_t x134 = INT32_MIN;
	uint32_t x135 = 107U;
	int64_t x136 = 3049LL;
	volatile int64_t t33 = 0LL;

	t33 = (x133|((x134<=x135)*x136));

	if (t33 != -6644LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 2613440859LL;
	volatile uint16_t x138 = 44U;
	uint8_t x139 = 0U;
	int8_t x140 = INT8_MAX;
	static int64_t t34 = -332LL;

	t34 = (x137|((x138<=x139)*x140));

	if (t34 != 2613440859LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	static int64_t x143 = -1LL;
	volatile int8_t x144 = -1;

	t35 = (x141|((x142<=x143)*x144));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 29206632058163370LLU;
	static volatile int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MAX;
	static int64_t x148 = -7888720952702LL;

	t36 = (x145|((x146<=x147)*x148));

	if (t36 != 18446739503662994090LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = 660479826252060475LL;
	uint32_t x151 = 4027U;
	int8_t x152 = -23;
	static int32_t t37 = 848097590;

	t37 = (x149|((x150<=x151)*x152));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 1U;
	int32_t x154 = 7653844;
	static int64_t x155 = INT64_MIN;

	t38 = (x153|((x154<=x155)*x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x158 = UINT16_MAX;
	int64_t x159 = -1LL;
	int8_t x160 = 8;
	int64_t t39 = INT64_MIN;

	t39 = (x157|((x158<=x159)*x160));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	static int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MAX;
	int32_t x164 = -1;
	volatile int32_t t40 = -3503132;

	t40 = (x161|((x162<=x163)*x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = 1967062973465169LLU;
	int8_t x167 = INT8_MIN;

	t41 = (x165|((x166<=x167)*x168));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	int16_t x171 = 364;
	static int64_t t42 = 1766LL;

	t42 = (x169|((x170<=x171)*x172));

	if (t42 != -5LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static int64_t t43 = INT64_MIN;

	t43 = (x173|((x174<=x175)*x176));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x177 = INT16_MAX;
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = INT8_MAX;
	int64_t x180 = INT64_MAX;
	static int64_t t44 = -82968061884LL;

	t44 = (x177|((x178<=x179)*x180));

	if (t44 != 32767LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = 2U;
	uint8_t x184 = 5U;
	int32_t t45 = 31359618;

	t45 = (x181|((x182<=x183)*x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	volatile uint32_t x186 = 6U;
	static int64_t x187 = 104LL;
	volatile int64_t x188 = 632993LL;
	int64_t t46 = INT64_MAX;

	t46 = (x185|((x186<=x187)*x188));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	int16_t x190 = 36;
	int64_t x192 = INT64_MIN;

	t47 = (x189|((x190<=x191)*x192));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x195 = -1;
	int16_t x196 = -1;
	int64_t t48 = INT64_MIN;

	t48 = (x193|((x194<=x195)*x196));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	int32_t x198 = 0;
	static int32_t x199 = INT32_MIN;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x197|((x198<=x199)*x200));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	static int8_t x203 = -1;
	int64_t x204 = -13LL;
	volatile int64_t t50 = -56495LL;

	t50 = (x201|((x202<=x203)*x204));

	if (t50 != -13LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 1;
	int16_t x206 = INT16_MIN;
	int16_t x207 = -1;
	int64_t x208 = 142033489LL;
	int64_t t51 = 8675LL;

	t51 = (x205|((x206<=x207)*x208));

	if (t51 != 142033489LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x210 = 1;
	int32_t x212 = -48398704;
	volatile int64_t t52 = INT64_MIN;

	t52 = (x209|((x210<=x211)*x212));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = -1;
	volatile int64_t x214 = INT64_MIN;
	uint8_t x215 = 0U;
	static uint16_t x216 = 35U;
	volatile int32_t t53 = -13;

	t53 = (x213|((x214<=x215)*x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = 8LL;
	int32_t x219 = INT32_MAX;
	int16_t x220 = -1;
	int64_t t54 = 9965022332LL;

	t54 = (x217|((x218<=x219)*x220));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 15551665638163LLU;
	static int64_t x222 = 29760LL;
	volatile int8_t x224 = INT8_MIN;
	volatile uint64_t t55 = 7115636186495058395LLU;

	t55 = (x221|((x222<=x223)*x224));

	if (t55 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = 957438028U;
	uint64_t x226 = 22792536LLU;
	int32_t x227 = INT32_MIN;
	int8_t x228 = -1;
	uint32_t t56 = UINT32_MAX;

	t56 = (x225|((x226<=x227)*x228));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int16_t x230 = INT16_MAX;
	int32_t x231 = -85854801;
	int16_t x232 = INT16_MIN;
	int32_t t57 = INT32_MAX;

	t57 = (x229|((x230<=x231)*x232));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	int8_t x235 = INT8_MAX;
	volatile int32_t x236 = -1;
	int32_t t58 = -493;

	t58 = (x233|((x234<=x235)*x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 111U;
	volatile uint64_t x238 = 31780LLU;
	uint16_t x239 = UINT16_MAX;
	int64_t x240 = INT64_MAX;
	volatile int64_t t59 = INT64_MAX;

	t59 = (x237|((x238<=x239)*x240));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	uint16_t x242 = UINT16_MAX;
	uint16_t x243 = UINT16_MAX;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = (x241|((x242<=x243)*x244));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	volatile int16_t x246 = -1;
	int8_t x247 = -1;

	t61 = (x245|((x246<=x247)*x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MIN;
	uint32_t x250 = UINT32_MAX;
	volatile int32_t x252 = -1;
	volatile int32_t t62 = 15;

	t62 = (x249|((x250<=x251)*x252));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	volatile int32_t x254 = INT32_MIN;
	static volatile int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MAX;
	int32_t t63 = INT32_MAX;

	t63 = (x253|((x254<=x255)*x256));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MIN;
	uint8_t x260 = UINT8_MAX;

	t64 = (x257|((x258<=x259)*x260));

	if (t64 != -32513) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 123698662963903246LLU;
	int32_t x262 = INT32_MIN;
	static int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t65 = 90LLU;

	t65 = (x261|((x262<=x263)*x264));

	if (t65 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MAX;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x265|((x266<=x267)*x268));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	volatile int8_t x270 = 0;
	uint16_t x271 = 13913U;
	volatile int32_t x272 = INT32_MIN;
	static int32_t t67 = 75;

	t67 = (x269|((x270<=x271)*x272));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x275 = UINT16_MAX;
	static volatile int32_t x276 = INT32_MAX;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x273|((x274<=x275)*x276));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = INT8_MAX;
	static uint32_t t69 = UINT32_MAX;

	t69 = (x277|((x278<=x279)*x280));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 254572LLU;
	static int16_t x282 = INT16_MIN;
	volatile int64_t x283 = -1LL;
	int64_t x284 = INT64_MIN;
	volatile uint64_t t70 = 400579LLU;

	t70 = (x281|((x282<=x283)*x284));

	if (t70 != 9223372036855030380LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	volatile int64_t x288 = -127LL;

	t71 = (x285|((x286<=x287)*x288));

	if (t71 != -67LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x290 = INT32_MIN;
	uint32_t x291 = 8684464U;
	int8_t x292 = 58;
	volatile int32_t t72 = -245858217;

	t72 = (x289|((x290<=x291)*x292));

	if (t72 != -28) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = 3554;
	volatile int32_t x296 = 1;
	int32_t t73 = 411630479;

	t73 = (x293|((x294<=x295)*x296));

	if (t73 != 3555) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = 34851519480LL;
	uint16_t x299 = 12U;
	static uint32_t x300 = 38455U;
	static uint32_t t74 = 3888U;

	t74 = (x297|((x298<=x299)*x300));

	if (t74 != 2147483648U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x303 = INT16_MIN;
	volatile int8_t x304 = 1;

	t75 = (x301|((x302<=x303)*x304));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x306 = UINT8_MAX;
	uint32_t x307 = UINT32_MAX;
	volatile uint32_t x308 = 96440640U;

	t76 = (x305|((x306<=x307)*x308));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile uint8_t x310 = 12U;
	uint64_t x311 = UINT64_MAX;
	volatile uint64_t x312 = UINT64_MAX;
	static volatile uint64_t t77 = UINT64_MAX;

	t77 = (x309|((x310<=x311)*x312));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MIN;
	uint16_t x315 = 4235U;

	t78 = (x313|((x314<=x315)*x316));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x318 = 1U;
	uint16_t x320 = 59U;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x317|((x318<=x319)*x320));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -4;
	volatile int32_t x324 = -1;
	static volatile int32_t t80 = 1391427;

	t80 = (x321|((x322<=x323)*x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	static uint32_t x326 = UINT32_MAX;
	volatile int64_t x327 = INT64_MIN;
	static int64_t x328 = -58965918200888898LL;
	int64_t t81 = -153445568574LL;

	t81 = (x325|((x326<=x327)*x328));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	static volatile uint32_t x330 = 625078473U;
	static uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = 0LL;
	static int64_t t82 = INT64_MAX;

	t82 = (x329|((x330<=x331)*x332));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 6LLU;
	uint8_t x334 = 0U;
	static volatile int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MIN;
	static volatile uint64_t t83 = 288273185118LLU;

	t83 = (x333|((x334<=x335)*x336));

	if (t83 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	int32_t t84 = -53;

	t84 = (x337|((x338<=x339)*x340));

	if (t84 != -2147483521) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = UINT16_MAX;
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = UINT32_MAX;
	uint32_t t85 = UINT32_MAX;

	t85 = (x341|((x342<=x343)*x344));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -1;
	volatile int64_t x347 = INT64_MIN;
	int64_t x348 = -230LL;
	int64_t t86 = -10082LL;

	t86 = (x345|((x346<=x347)*x348));

	if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 1U;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = -1;
	volatile int32_t t87 = 155;

	t87 = (x349|((x350<=x351)*x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	int16_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -27;

	t88 = (x353|((x354<=x355)*x356));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -3158;
	volatile int32_t x358 = -44703901;
	static int16_t x359 = INT16_MIN;
	volatile int16_t x360 = INT16_MAX;
	static int32_t t89 = 107;

	t89 = (x357|((x358<=x359)*x360));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = INT32_MAX;
	int8_t x363 = 3;
	static volatile uint8_t x364 = 31U;
	static volatile int64_t t90 = INT64_MIN;

	t90 = (x361|((x362<=x363)*x364));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MAX;
	int16_t x367 = -552;
	int32_t x368 = INT32_MIN;

	t91 = (x365|((x366<=x367)*x368));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 16084474771214903LLU;
	int16_t x372 = 305;
	volatile uint64_t t92 = 1400121LLU;

	t92 = (x369|((x370<=x371)*x372));

	if (t92 != 16084474771214903LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 162U;
	int16_t x374 = -1;
	static int32_t x375 = 908399;
	uint64_t x376 = 7933LLU;
	static volatile uint64_t t93 = 126LLU;

	t93 = (x373|((x374<=x375)*x376));

	if (t93 != 7935LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x377 = 47U;

	t94 = (x377|((x378<=x379)*x380));

	if (t94 != 47LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = 2574LL;
	int64_t x382 = -60936384348036307LL;
	int64_t t95 = -3877028LL;

	t95 = (x381|((x382<=x383)*x384));

	if (t95 != -30194LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 3;
	static uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = -189597;

	t96 = (x385|((x386<=x387)*x388));

	if (t96 != -125) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	uint32_t x390 = 226255U;
	volatile int64_t x391 = INT64_MIN;
	static int32_t x392 = -1;
	static volatile int32_t t97 = -37041;

	t97 = (x389|((x390<=x391)*x392));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	volatile int32_t x396 = INT32_MIN;
	int64_t t98 = INT64_MAX;

	t98 = (x393|((x394<=x395)*x396));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = INT32_MAX;
	int64_t x399 = -13782457662LL;
	int16_t x400 = -1;
	volatile int32_t t99 = 8090067;

	t99 = (x397|((x398<=x399)*x400));

	if (t99 != 65535) { NG(); } else { ; }
	
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

