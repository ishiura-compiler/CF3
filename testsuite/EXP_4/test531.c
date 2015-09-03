#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 422378460138493LLU;
static uint16_t x6 = UINT16_MAX;
int64_t x23 = 1718885215182127680LL;
int64_t x24 = -266595373778469621LL;
volatile int64_t t5 = 1423LL;
int32_t x26 = INT32_MAX;
int64_t t6 = -1LL;
static uint64_t x32 = 848341901389512LLU;
volatile int16_t x38 = INT16_MIN;
uint64_t t9 = 2717327767LLU;
uint64_t t10 = 761522LLU;
static int64_t t11 = 334965753283755366LL;
int32_t x57 = INT32_MIN;
volatile int64_t x61 = -22959LL;
int16_t x72 = INT16_MIN;
int64_t x73 = -1LL;
int32_t x74 = INT32_MAX;
int32_t x76 = INT32_MAX;
volatile int64_t t17 = 6141030990212LL;
static uint8_t x83 = UINT8_MAX;
int64_t x86 = INT64_MAX;
volatile int16_t x96 = INT16_MIN;
int16_t x109 = INT16_MAX;
volatile int16_t x111 = INT16_MAX;
int64_t x112 = INT64_MIN;
volatile uint8_t x113 = 22U;
int32_t x123 = 188105;
static uint32_t t28 = 426U;
uint64_t x129 = 2460005749797886LLU;
volatile int16_t x132 = INT16_MIN;
uint8_t x133 = UINT8_MAX;
int8_t x138 = -1;
static int16_t x141 = -133;
int16_t x143 = -1;
uint32_t x149 = 17023U;
volatile int64_t t35 = -3238LL;
int8_t x153 = 41;
int64_t x165 = INT64_MIN;
static int64_t x166 = -1LL;
uint32_t x169 = UINT32_MAX;
static volatile int8_t x173 = -1;
int32_t t41 = -71789;
int8_t x179 = 1;
uint64_t x185 = 8114321651204924856LLU;
int32_t x186 = INT32_MIN;
int16_t x188 = -1;
uint32_t x194 = UINT32_MAX;
uint64_t x196 = 118189LLU;
int64_t t47 = INT64_MIN;
uint64_t x202 = 1855444339442199LLU;
uint16_t x205 = 8U;
static volatile int8_t x206 = INT8_MIN;
static volatile int32_t x207 = INT32_MIN;
int64_t x211 = INT64_MIN;
int64_t x212 = INT64_MIN;
static int16_t x217 = -123;
volatile int32_t x218 = -1;
volatile uint64_t x220 = 27011605073864LLU;
int64_t x222 = -1283801775LL;
volatile uint32_t t56 = 1084507U;
static int16_t x241 = -1;
int16_t x242 = INT16_MAX;
int32_t x247 = INT32_MIN;
int32_t x249 = INT32_MIN;
uint64_t x255 = UINT64_MAX;
int32_t x263 = INT32_MIN;
static volatile uint64_t t63 = 3LLU;
int16_t x270 = INT16_MIN;
uint32_t x271 = 3097U;
int64_t x273 = INT64_MIN;
static int64_t t66 = INT64_MIN;
static uint32_t x277 = UINT32_MAX;
uint16_t x284 = 3221U;
int8_t x286 = INT8_MIN;
volatile int16_t x287 = -1;
static int16_t x293 = -1;
int32_t t72 = -24;
uint32_t x310 = 2994U;
volatile int16_t x313 = INT16_MAX;
int64_t x316 = -9LL;
static int16_t x318 = -1;
volatile int16_t x321 = 3;
uint32_t x329 = 2407U;
uint32_t t80 = 89695926U;
static int8_t x337 = INT8_MIN;
int64_t t83 = -4503374LL;
static int8_t x354 = INT8_MIN;
int64_t x358 = INT64_MIN;
uint32_t x359 = 9551U;
static int32_t x365 = -1;
static int64_t x368 = -2566658LL;
volatile int64_t t88 = 109922500882109099LL;
static volatile uint64_t x389 = 1LLU;
int64_t x398 = INT64_MIN;
uint32_t x405 = UINT32_MAX;
int32_t x406 = INT32_MIN;
volatile int32_t x414 = -8394;
int64_t t98 = -64LL;


void f0(void) {
	static uint64_t x1 = 22676442094880LLU;
	static uint16_t x2 = 6186U;
	int8_t x3 = 2;
	int64_t x4 = INT64_MAX;

	t0 = (x1&(x2-(x3/x4)));

	if (t0 != 6176LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	volatile uint32_t x7 = 10827U;
	int8_t x8 = -15;
	uint32_t t1 = 17816253U;

	t1 = (x5&(x6-(x7/x8)));

	if (t1 != 255U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = INT32_MAX;
	int8_t x11 = 53;
	volatile uint16_t x12 = 2U;
	static int32_t t2 = 58355;

	t2 = (x9&(x10-(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 363417955991843134LLU;
	volatile uint8_t x14 = 73U;
	int8_t x15 = 0;
	int8_t x16 = INT8_MIN;
	uint64_t t3 = 40375704316LLU;

	t3 = (x13&(x14-(x15/x16)));

	if (t3 != 8LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	static uint32_t x18 = 46U;
	static int16_t x19 = 42;
	int32_t x20 = -1026403005;
	uint32_t t4 = 1679994U;

	t4 = (x17&(x18-(x19/x20)));

	if (t4 != 46U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 5836U;
	static int16_t x22 = 25;

	t5 = (x21&(x22-(x23/x24)));

	if (t5 != 12LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 285U;
	uint32_t x27 = UINT32_MAX;
	int64_t x28 = 443155862041669LL;

	t6 = (x25&(x26-(x27/x28)));

	if (t6 != 285LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 0U;
	uint64_t x30 = 1370086LLU;
	int32_t x31 = 5072325;
	static volatile uint64_t t7 = 3895LLU;

	t7 = (x29&(x30-(x31/x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 3LLU;
	uint64_t x39 = 104LLU;
	volatile int64_t x40 = -1LL;
	uint64_t t8 = 71876910403498694LLU;

	t8 = (x37&(x38-(x39/x40)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint64_t x42 = 8326LLU;
	uint32_t x43 = UINT32_MAX;
	static int32_t x44 = -147071911;

	t9 = (x41&(x42-(x43/x44)));

	if (t9 != 8325LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 11812787096339LLU;
	int32_t x46 = -1;
	uint32_t x47 = 141U;
	static uint8_t x48 = 40U;

	t10 = (x45&(x46-(x47/x48)));

	if (t10 != 1627032336LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	volatile int16_t x50 = INT16_MAX;
	int64_t x51 = -1LL;
	static int32_t x52 = INT32_MAX;

	t11 = (x49&(x50-(x51/x52)));

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 9022LLU;
	static uint64_t x54 = 2630441302LLU;
	int16_t x55 = -1;
	volatile int16_t x56 = INT16_MIN;
	uint64_t t12 = 31LLU;

	t12 = (x53&(x54-(x55/x56)));

	if (t12 != 278LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = INT32_MAX;
	int16_t x59 = -685;
	int8_t x60 = INT8_MIN;
	int32_t t13 = -1965;

	t13 = (x57&(x58-(x59/x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MAX;
	uint16_t x63 = 201U;
	uint64_t x64 = UINT64_MAX;
	static volatile uint64_t t14 = 4LLU;

	t14 = (x61&(x62-(x63/x64)));

	if (t14 != 81LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x65 = 264551684LLU;
	uint8_t x66 = UINT8_MAX;
	static int64_t x67 = INT64_MIN;
	uint32_t x68 = 56U;
	uint64_t t15 = 505LLU;

	t15 = (x65&(x66-(x67/x68)));

	if (t15 != 151294208LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MIN;
	int8_t x71 = 1;
	volatile int32_t t16 = 464544;

	t16 = (x69&(x70-(x71/x72)));

	if (t16 != 2147483520) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x75 = -1LL;

	t17 = (x73&(x74-(x75/x76)));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MAX;
	int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MIN;
	volatile uint64_t t18 = 17LLU;

	t18 = (x77&(x78-(x79/x80)));

	if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	int64_t x82 = 66376783009720LL;
	uint32_t x84 = UINT32_MAX;
	volatile uint64_t t19 = 137803381884373LLU;

	t19 = (x81&(x82-(x83/x84)));

	if (t19 != 66376783009720LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = 7U;
	uint32_t x87 = 3090U;
	volatile uint16_t x88 = UINT16_MAX;
	volatile int64_t t20 = 8370087LL;

	t20 = (x85&(x86-(x87/x88)));

	if (t20 != 7LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 14944;
	uint16_t x90 = 3U;
	static volatile int8_t x91 = INT8_MAX;
	uint16_t x92 = 56U;
	volatile int32_t t21 = 24539512;

	t21 = (x89&(x90-(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 4;
	uint32_t x94 = 1710U;
	int8_t x95 = 0;
	static volatile uint32_t t22 = 236261U;

	t22 = (x93&(x94-(x95/x96)));

	if (t22 != 4U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 1;
	int32_t x98 = INT32_MIN;
	static uint64_t x99 = 1LLU;
	int64_t x100 = INT64_MIN;
	uint64_t t23 = 4338852384LLU;

	t23 = (x97&(x98-(x99/x100)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MAX;
	int64_t x103 = 1562136504034343079LL;
	volatile int8_t x104 = 1;
	int64_t t24 = -470350718829LL;

	t24 = (x101&(x102-(x103/x104)));

	if (t24 != -1562136503134453760LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 518725LLU;
	volatile uint8_t x106 = UINT8_MAX;
	static volatile int16_t x107 = INT16_MAX;
	static uint32_t x108 = UINT32_MAX;
	uint64_t t25 = 6114LLU;

	t25 = (x105&(x106-(x107/x108)));

	if (t25 != 69LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x110 = 21;
	static int64_t t26 = -4217178220673114273LL;

	t26 = (x109&(x110-(x111/x112)));

	if (t26 != 21LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = INT8_MIN;
	volatile uint8_t x115 = 25U;
	volatile int32_t x116 = 471876400;
	volatile int32_t t27 = -2492704;

	t27 = (x113&(x114-(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = UINT16_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	uint32_t x124 = UINT32_MAX;

	t28 = (x121&(x122-(x123/x124)));

	if (t28 != 65535U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = 2784870;
	volatile uint64_t x126 = UINT64_MAX;
	int32_t x127 = 9207821;
	static int16_t x128 = INT16_MIN;
	volatile uint64_t t29 = 5103LLU;

	t29 = (x125&(x126-(x127/x128)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x130 = INT64_MIN;
	int64_t x131 = 104LL;
	uint64_t t30 = 274212230980225976LLU;

	t30 = (x129&(x130-(x131/x132)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x134 = -1;
	volatile uint32_t x135 = 2889648U;
	int8_t x136 = INT8_MAX;
	uint32_t t31 = 3774U;

	t31 = (x133&(x134-(x135/x136)));

	if (t31 != 30U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x137 = UINT8_MAX;
	int64_t x139 = -1LL;
	volatile int16_t x140 = INT16_MIN;
	int64_t t32 = 155675094698210LL;

	t32 = (x137&(x138-(x139/x140)));

	if (t32 != 255LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x142 = INT16_MIN;
	volatile int8_t x144 = -1;
	int32_t t33 = -1203745;

	t33 = (x141&(x142-(x143/x144)));

	if (t33 != -32901) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -53007165412575294LL;
	int16_t x146 = INT16_MIN;
	volatile int32_t x147 = INT32_MIN;
	static volatile int8_t x148 = INT8_MIN;
	volatile int64_t t34 = -32350144961LL;

	t34 = (x145&(x146-(x147/x148)));

	if (t34 != -53007165429383168LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	int8_t x152 = INT8_MAX;

	t35 = (x149&(x150-(x151/x152)));

	if (t35 != 639LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x154 = INT8_MAX;
	int32_t x155 = INT32_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	uint64_t t36 = 518227764385LLU;

	t36 = (x153&(x154-(x155/x156)));

	if (t36 != 41LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 91U;
	static int16_t x158 = INT16_MAX;
	static volatile uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MIN;
	uint32_t t37 = 13379U;

	t37 = (x157&(x158-(x159/x160)));

	if (t37 != 90U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 663756U;
	int8_t x162 = 1;
	uint32_t x163 = 36989U;
	volatile int8_t x164 = 29;
	static uint32_t t38 = 7534U;

	t38 = (x161&(x162-(x163/x164)));

	if (t38 != 663556U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x167 = 1;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t39 = INT64_MIN;

	t39 = (x165&(x166-(x167/x168)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = 1657;
	int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	static int64_t t40 = -18875936485890LL;

	t40 = (x169&(x170-(x171/x172)));

	if (t40 != 1657LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = 3669;
	uint8_t x175 = 6U;
	uint8_t x176 = 11U;

	t41 = (x173&(x174-(x175/x176)));

	if (t41 != 3669) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	uint64_t x178 = 12349673LLU;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t42 = 170468423530371955LLU;

	t42 = (x177&(x178-(x179/x180)));

	if (t42 != 12349568LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	static int64_t x182 = 187LL;
	int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MIN;
	int64_t t43 = 17960LL;

	t43 = (x181&(x182-(x183/x184)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x187 = -742122085499913570LL;
	uint64_t t44 = 905958154688LLU;

	t44 = (x185&(x186-(x187/x188)));

	if (t44 != 8111915883993243800LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MAX;
	static volatile int64_t x190 = INT64_MIN;
	static int64_t x191 = INT64_MIN;
	static uint32_t x192 = 94U;
	int64_t t45 = -90405098744782588LL;

	t45 = (x189&(x190-(x191/x192)));

	if (t45 != 114LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	int16_t x195 = -1;
	uint64_t t46 = 37619LLU;

	t46 = (x193&(x194-(x195/x196)));

	if (t46 != 18446587999654805504LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	static int16_t x198 = 14;
	volatile int64_t x199 = INT64_MIN;
	static int16_t x200 = INT16_MIN;

	t47 = (x197&(x198-(x199/x200)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 0U;
	int16_t x203 = -3;
	int64_t x204 = -7420825LL;
	static uint64_t t48 = 93137696LLU;

	t48 = (x201&(x202-(x203/x204)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x208 = INT32_MAX;
	static int32_t t49 = 357329341;

	t49 = (x205&(x206-(x207/x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 1946193729U;
	int64_t x210 = -1LL;
	volatile int64_t t50 = 11683202518172501LL;

	t50 = (x209&(x210-(x211/x212)));

	if (t50 != 1946193728LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 0U;
	static uint64_t x215 = 3398071707LLU;
	static int8_t x216 = 2;
	static uint64_t t51 = 12822074203532077LLU;

	t51 = (x213&(x214-(x215/x216)));

	if (t51 != 18446744072010515763LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x219 = 1;
	uint64_t t52 = 85308301LLU;

	t52 = (x217&(x218-(x219/x220)));

	if (t52 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 0U;
	static int16_t x223 = -1;
	static volatile int32_t x224 = INT32_MAX;
	volatile int64_t t53 = -1LL;

	t53 = (x221&(x222-(x223/x224)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x225 = 3869074099734488LLU;
	uint16_t x226 = 292U;
	static int8_t x227 = INT8_MIN;
	static int32_t x228 = -2319120;
	uint64_t t54 = 4029LLU;

	t54 = (x225&(x226-(x227/x228)));

	if (t54 != 256LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 445U;
	uint8_t x230 = 2U;
	static uint8_t x231 = UINT8_MAX;
	int8_t x232 = -1;
	int32_t t55 = -723;

	t55 = (x229&(x230-(x231/x232)));

	if (t55 != 257) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x233 = 1;
	static uint32_t x234 = 249U;
	int32_t x235 = -694;
	int32_t x236 = -1;

	t56 = (x233&(x234-(x235/x236)));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = INT8_MIN;
	static int64_t x238 = 39LL;
	int8_t x239 = INT8_MIN;
	static uint64_t x240 = UINT64_MAX;
	uint64_t t57 = 1408527982948LLU;

	t57 = (x237&(x238-(x239/x240)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x243 = INT32_MAX;
	int32_t x244 = 278464;
	volatile int32_t t58 = -419319437;

	t58 = (x241&(x242-(x243/x244)));

	if (t58 != 25056) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x245 = INT8_MAX;
	uint16_t x246 = 807U;
	uint64_t x248 = 557112LLU;
	volatile uint64_t t59 = 3860133298658634LLU;

	t59 = (x245&(x246-(x247/x248)));

	if (t59 != 49LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x250 = 27U;
	int64_t x251 = INT64_MIN;
	volatile int8_t x252 = 12;
	int64_t t60 = -5232631763LL;

	t60 = (x249&(x250-(x251/x252)));

	if (t60 != 768614335688736768LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MIN;
	static uint16_t x256 = UINT16_MAX;
	static uint64_t t61 = 15LLU;

	t61 = (x253&(x254-(x255/x256)));

	if (t61 != 9223090555435548671LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t62 = INT32_MIN;

	t62 = (x257&(x258-(x259/x260)));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = UINT64_MAX;
	uint8_t x262 = 14U;
	uint8_t x264 = UINT8_MAX;

	t63 = (x261&(x262-(x263/x264)));

	if (t63 != 8421518LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MAX;
	int32_t x266 = INT32_MIN;
	static int32_t x267 = INT32_MIN;
	volatile int8_t x268 = INT8_MAX;
	int32_t t64 = 7;

	t64 = (x265&(x266-(x267/x268)));

	if (t64 != 16909320) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = 66U;
	int16_t x272 = -1;
	volatile uint32_t t65 = 1784343U;

	t65 = (x269&(x270-(x271/x272)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = INT16_MIN;
	int32_t x275 = 2;
	volatile uint16_t x276 = 39U;

	t66 = (x273&(x274-(x275/x276)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MAX;
	int64_t x280 = -3LL;
	volatile int64_t t67 = -3237331845258LL;

	t67 = (x277&(x278-(x279/x280)));

	if (t67 != 2863311529LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = INT64_MIN;
	uint8_t x282 = UINT8_MAX;
	static int8_t x283 = 1;
	volatile int64_t t68 = -202860745LL;

	t68 = (x281&(x282-(x283/x284)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = UINT64_MAX;
	static uint32_t x288 = 42953773U;
	static volatile uint64_t t69 = 62338538LLU;

	t69 = (x285&(x286-(x287/x288)));

	if (t69 != 4294967069LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -1LL;
	static uint16_t x290 = 144U;
	int64_t x291 = -1LL;
	int16_t x292 = -99;
	volatile int64_t t70 = -1358794209032318LL;

	t70 = (x289&(x290-(x291/x292)));

	if (t70 != 144LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x294 = INT16_MAX;
	int8_t x295 = 14;
	static uint32_t x296 = 1102094332U;
	uint32_t t71 = 423013U;

	t71 = (x293&(x294-(x295/x296)));

	if (t71 != 32767U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -1;
	static uint16_t x298 = UINT16_MAX;
	int8_t x299 = 1;
	uint16_t x300 = 81U;

	t72 = (x297&(x298-(x299/x300)));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MIN;
	uint16_t x304 = UINT16_MAX;
	int32_t t73 = 8962;

	t73 = (x301&(x302-(x303/x304)));

	if (t73 != -2147450880) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = 63U;
	static int32_t x306 = INT32_MAX;
	int16_t x307 = INT16_MIN;
	static int16_t x308 = INT16_MIN;
	volatile uint32_t t74 = 4975804U;

	t74 = (x305&(x306-(x307/x308)));

	if (t74 != 62U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x309 = -76201388338LL;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = -1;
	int64_t t75 = 175619008963975LL;

	t75 = (x309&(x310-(x311/x312)));

	if (t75 != 640LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x314 = INT8_MIN;
	static uint8_t x315 = 12U;
	static int64_t t76 = 25125511384098LL;

	t76 = (x313&(x314-(x315/x316)));

	if (t76 != 32641LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -1;
	int64_t x319 = INT64_MIN;
	int16_t x320 = 6;
	int64_t t77 = -24987389062784696LL;

	t77 = (x317&(x318-(x319/x320)));

	if (t77 != 1537228672809129300LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x322 = INT8_MIN;
	int64_t x323 = 1908676083051223LL;
	int64_t x324 = 46021972337914453LL;
	static int64_t t78 = 812717363924782755LL;

	t78 = (x321&(x322-(x323/x324)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = 24;
	int32_t x326 = INT32_MIN;
	int8_t x327 = -48;
	int32_t x328 = 723641;
	int32_t t79 = -1392;

	t79 = (x325&(x326-(x327/x328)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x330 = INT16_MIN;
	int16_t x331 = 5;
	int32_t x332 = -1;

	t80 = (x329&(x330-(x331/x332)));

	if (t80 != 5U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = 1568;
	int64_t x334 = -1LL;
	static volatile uint16_t x335 = 308U;
	int8_t x336 = INT8_MIN;
	static volatile int64_t t81 = -1LL;

	t81 = (x333&(x334-(x335/x336)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x338 = -1;
	static uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	volatile uint64_t t82 = 1718391LLU;

	t82 = (x337&(x338-(x339/x340)));

	if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x341 = INT32_MAX;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = 0U;
	static int64_t x344 = INT64_MIN;

	t83 = (x341&(x342-(x343/x344)));

	if (t83 != 2147450880LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = 912LL;
	int32_t x350 = 4;
	uint32_t x351 = 25971U;
	uint8_t x352 = 11U;
	static volatile int64_t t84 = 13693406LL;

	t84 = (x349&(x350-(x351/x352)));

	if (t84 != 640LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x353 = -1;
	static uint16_t x355 = 5U;
	int16_t x356 = INT16_MAX;
	static int32_t t85 = -3;

	t85 = (x353&(x354-(x355/x356)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x360 = INT32_MIN;
	volatile int64_t t86 = -5922220551LL;

	t86 = (x357&(x358-(x359/x360)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = 64;
	volatile int16_t x364 = -1;
	static volatile uint32_t t87 = 1820U;

	t87 = (x361&(x362-(x363/x364)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x366 = 26U;
	int8_t x367 = -19;

	t88 = (x365&(x366-(x367/x368)));

	if (t88 != 26LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = 1607023U;
	static int32_t x370 = -1;
	uint32_t x371 = 13068407U;
	uint32_t x372 = 1025852017U;
	volatile uint32_t t89 = 2473U;

	t89 = (x369&(x370-(x371/x372)));

	if (t89 != 1607023U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = 1;
	uint16_t x378 = 6U;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 1472U;
	volatile uint32_t t90 = 13662833U;

	t90 = (x377&(x378-(x379/x380)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = UINT64_MAX;
	uint8_t x382 = 18U;
	static int8_t x383 = 1;
	volatile int16_t x384 = -1;
	volatile uint64_t t91 = 84926LLU;

	t91 = (x381&(x382-(x383/x384)));

	if (t91 != 19LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x390 = -1;
	volatile int64_t x391 = -1LL;
	int32_t x392 = -1;
	static volatile uint64_t t92 = 31100299LLU;

	t92 = (x389&(x390-(x391/x392)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MIN;
	uint64_t x395 = 3658775084652991590LLU;
	uint8_t x396 = 13U;
	volatile uint64_t t93 = 515470741884241LLU;

	t93 = (x393&(x394-(x395/x396)));

	if (t93 != 8941927799573776327LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x397 = INT8_MIN;
	uint16_t x399 = UINT16_MAX;
	volatile uint32_t x400 = 590081U;
	int64_t t94 = INT64_MIN;

	t94 = (x397&(x398-(x399/x400)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	volatile uint16_t x403 = 186U;
	int8_t x404 = -1;
	int32_t t95 = -171817;

	t95 = (x401&(x402-(x403/x404)));

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x407 = INT8_MAX;
	static int8_t x408 = -6;
	uint32_t t96 = 6971U;

	t96 = (x405&(x406-(x407/x408)));

	if (t96 != 2147483669U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x409 = UINT16_MAX;
	int64_t x410 = INT64_MIN;
	uint64_t x411 = 7822343LLU;
	uint8_t x412 = 81U;
	static volatile uint64_t t97 = 67145885LLU;

	t97 = (x409&(x410-(x411/x412)));

	if (t97 != 34500LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = -127015648;
	int16_t x415 = -1;
	volatile int64_t x416 = -1LL;

	t98 = (x413&(x414-(x415/x416)));

	if (t98 != -127023840LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x417 = INT8_MAX;
	static int16_t x418 = -12;
	static int32_t x419 = INT32_MAX;
	int16_t x420 = INT16_MIN;
	volatile int32_t t99 = -4;

	t99 = (x417&(x418-(x419/x420)));

	if (t99 != 115) { NG(); } else { ; }
	
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

