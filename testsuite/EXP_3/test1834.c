#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x6 = INT16_MIN;
volatile uint64_t x12 = UINT64_MAX;
int32_t x17 = INT32_MAX;
volatile int8_t x23 = 0;
int8_t x24 = INT8_MAX;
static volatile int32_t t5 = -95224231;
int64_t x27 = -1LL;
int8_t x39 = -63;
int64_t t9 = 112120917482004LL;
static int32_t x44 = -36145417;
int8_t x53 = INT8_MIN;
int16_t x56 = INT16_MIN;
static int64_t t13 = -2381394611070807948LL;
uint8_t x62 = 0U;
static uint32_t t14 = 11U;
static int16_t x69 = 14;
int32_t x77 = 2;
int8_t x88 = -1;
static volatile uint16_t x95 = UINT16_MAX;
volatile int64_t t21 = -109LL;
int16_t x100 = 9453;
static volatile int32_t t22 = -1308;
uint32_t t23 = 2259U;
int16_t x105 = INT16_MAX;
int8_t x106 = INT8_MIN;
static int32_t t24 = -7;
uint8_t x110 = 1U;
static int16_t x113 = INT16_MIN;
volatile int32_t t26 = -3139;
static volatile uint32_t x119 = UINT32_MAX;
uint32_t t27 = 2332982U;
uint8_t x124 = UINT8_MAX;
int8_t x132 = INT8_MIN;
uint8_t x133 = 1U;
uint32_t t31 = 38U;
int64_t x137 = INT64_MIN;
uint32_t x138 = UINT32_MAX;
static volatile int32_t x142 = INT32_MIN;
int32_t x143 = INT32_MAX;
volatile int8_t x154 = -1;
int32_t x157 = -1;
uint8_t x159 = 3U;
volatile int8_t x170 = INT8_MAX;
static uint64_t x195 = 6581472669LLU;
int32_t x198 = -14381;
volatile uint64_t x201 = 2765506106064LLU;
static volatile int16_t x203 = 15078;
static int8_t x212 = 12;
volatile uint16_t x219 = 949U;
int64_t t50 = 462632828856605LL;
int64_t x221 = -1LL;
int16_t x222 = INT16_MIN;
volatile uint64_t t52 = UINT64_MAX;
volatile uint32_t x239 = 8967300U;
int8_t x241 = INT8_MIN;
static volatile uint64_t t57 = 8153LLU;
volatile int64_t x250 = INT64_MIN;
uint64_t t59 = 5230287160291000LLU;
static int64_t x259 = -1LL;
uint8_t x271 = UINT8_MAX;
int16_t x272 = INT16_MIN;
int32_t x274 = INT32_MIN;
int16_t x281 = -1;
int8_t x283 = INT8_MIN;
uint64_t x289 = 455LLU;
int8_t x290 = INT8_MAX;
int16_t x291 = -137;
uint64_t t69 = 5LLU;
volatile int64_t x311 = -1LL;
uint8_t x316 = 7U;
volatile int64_t x320 = 4084LL;
uint64_t t74 = 3132514207254109LLU;
static int64_t x323 = 17032LL;
static uint64_t x326 = 75128042663388LLU;
volatile int64_t x327 = INT64_MAX;
int32_t x329 = 45390;
volatile int8_t x331 = INT8_MAX;
static int64_t x334 = 2876328681079936622LL;
static volatile int16_t x339 = 0;
uint32_t t79 = 112556291U;
uint16_t x343 = UINT16_MAX;
volatile int32_t t80 = 2545;
int8_t x346 = -4;
int8_t x356 = -1;
uint64_t x360 = 1252509280626915LLU;
volatile int64_t x361 = INT64_MAX;
int16_t x363 = 0;
volatile uint32_t x366 = UINT32_MAX;
volatile uint32_t x378 = 260889356U;
volatile int64_t x379 = -136342540693322LL;
uint64_t x382 = UINT64_MAX;
uint64_t x391 = 853076421671LLU;
uint64_t t91 = 24552519228899393LLU;
int64_t x402 = -8436876003LL;
int8_t x403 = INT8_MIN;
volatile int64_t t94 = -42209767166LL;
volatile uint32_t x409 = UINT32_MAX;
volatile uint64_t t95 = 1904LLU;
int64_t t96 = INT64_MAX;
int16_t x417 = INT16_MIN;
int16_t x427 = 8;


void f0(void) {
	uint64_t x1 = 20937805132546066LLU;
	uint8_t x2 = 1U;
	static uint16_t x3 = 23U;
	uint64_t x4 = 8497008166722LLU;
	uint64_t t0 = 169551LLU;

	t0 = ((x1|x2)+(x3&x4));

	if (t0 != 20937805132546069LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int32_t x7 = INT32_MIN;
	static uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 969092370922LLU;

	t1 = ((x5|x6)+(x7&x8));

	if (t1 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 1716355375LLU;
	uint8_t x10 = 3U;
	int8_t x11 = INT8_MIN;
	static uint64_t t2 = 517867260LLU;

	t2 = ((x9|x10)+(x11&x12));

	if (t2 != 1716355247LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static volatile int16_t x14 = INT16_MAX;
	int8_t x15 = 56;
	int16_t x16 = 1715;
	int32_t t3 = -479517903;

	t3 = ((x13|x14)+(x15&x16));

	if (t3 != 47) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 12766LLU;
	int16_t x19 = 3;
	int16_t x20 = INT16_MIN;
	uint64_t t4 = 2065335046LLU;

	t4 = ((x17|x18)+(x19&x20));

	if (t4 != 2147483647LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int32_t x22 = INT32_MIN;

	t5 = ((x21|x22)+(x23&x24));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 408U;
	int8_t x26 = -1;
	static int8_t x28 = INT8_MIN;
	int64_t t6 = -215LL;

	t6 = ((x25|x26)+(x27&x28));

	if (t6 != -129LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 3136;
	uint64_t x30 = 40469LLU;
	int64_t x31 = INT64_MAX;
	volatile int8_t x32 = INT8_MIN;
	uint64_t t7 = 365504LLU;

	t7 = ((x29|x30)+(x31&x32));

	if (t7 != 9223372036854816213LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = 1951269834241353LL;
	int16_t x35 = -1;
	uint8_t x36 = 35U;
	static volatile int64_t t8 = -8907443067385066LL;

	t8 = ((x33|x34)+(x35&x36));

	if (t8 != -9221420767020534420LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	static int64_t x38 = INT64_MIN;
	volatile int16_t x40 = INT16_MIN;

	t9 = ((x37|x38)+(x39&x40));

	if (t9 != -32769LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -12972882;
	static volatile uint16_t x42 = 7U;
	int64_t x43 = -275345909783563LL;
	volatile int64_t t10 = 718179855002136578LL;

	t10 = ((x41|x42)+(x43&x44));

	if (t10 != -275345922953308LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x49 = 159LLU;
	uint32_t x50 = 5U;
	int32_t x51 = 5647;
	int64_t x52 = 336860401LL;
	uint64_t t11 = 22386024128LLU;

	t11 = ((x49|x50)+(x51&x52));

	if (t11 != 5280LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x54 = INT16_MIN;
	int8_t x55 = -1;
	int32_t t12 = 158687990;

	t12 = ((x53|x54)+(x55&x56));

	if (t12 != -32896) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MAX;
	int16_t x58 = INT16_MIN;
	static uint16_t x59 = 40U;
	int8_t x60 = INT8_MIN;

	t13 = ((x57|x58)+(x59&x60));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 1960563184U;
	uint16_t x63 = 149U;
	static int8_t x64 = -1;

	t14 = ((x61|x62)+(x63&x64));

	if (t14 != 1960563333U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -641;
	static uint32_t x66 = 42385U;
	int32_t x67 = 1;
	static volatile uint8_t x68 = 56U;
	volatile uint32_t t15 = 4U;

	t15 = ((x65|x66)+(x67&x68));

	if (t15 != 4294966783U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = -1;
	int64_t x71 = 10365623908LL;
	int32_t x72 = -1;
	static int64_t t16 = -8LL;

	t16 = ((x69|x70)+(x71&x72));

	if (t16 != 10365623907LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -58405659640289140LL;
	static int64_t x74 = INT64_MAX;
	volatile uint16_t x75 = 25U;
	uint16_t x76 = 89U;
	int64_t t17 = -9454389582LL;

	t17 = ((x73|x74)+(x75&x76));

	if (t17 != 24LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = INT64_MAX;
	volatile uint64_t x79 = UINT64_MAX;
	uint32_t x80 = 779455U;
	volatile uint64_t t18 = 101502949316342355LLU;

	t18 = ((x77|x78)+(x79&x80));

	if (t18 != 9223372036855555262LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	static int8_t x87 = INT8_MIN;
	int64_t t19 = -71784LL;

	t19 = ((x85|x86)+(x87&x88));

	if (t19 != -129LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x89 = 792389U;
	uint32_t x90 = UINT32_MAX;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = -187641524LL;
	uint64_t t20 = 58980973015139LLU;

	t20 = ((x89|x90)+(x91&x92));

	if (t20 != 4107325771LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = 446U;
	static int8_t x96 = INT8_MIN;

	t21 = ((x93|x94)+(x95&x96));

	if (t21 != -9223372036854709954LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -256992;
	uint16_t x98 = 3U;
	int16_t x99 = -9;

	t22 = ((x97|x98)+(x99&x100));

	if (t22 != -247544) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x102 = 31;
	uint32_t x103 = 214U;
	uint32_t x104 = 17783235U;

	t23 = ((x101|x102)+(x103&x104));

	if (t23 != 97U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x107 = 90;
	volatile int32_t x108 = 41494645;

	t24 = ((x105|x106)+(x107&x108));

	if (t24 != 79) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x109 = UINT8_MAX;
	static int64_t x111 = -1LL;
	uint64_t x112 = 78923766358416226LLU;
	volatile uint64_t t25 = 173707830499851539LLU;

	t25 = ((x109|x110)+(x111&x112));

	if (t25 != 78923766358416481LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = INT16_MIN;
	static int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MAX;

	t26 = ((x113|x114)+(x115&x116));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MAX;
	uint8_t x120 = 10U;

	t27 = ((x117|x118)+(x119&x120));

	if (t27 != 2147516425U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 2552U;
	int8_t x122 = 40;
	int64_t x123 = INT64_MIN;
	static int64_t t28 = 20257515LL;

	t28 = ((x121|x122)+(x123&x124));

	if (t28 != 2552LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	static int8_t x126 = -1;
	volatile int16_t x127 = -1;
	uint8_t x128 = 0U;
	volatile int32_t t29 = 867822;

	t29 = ((x125|x126)+(x127&x128));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = INT64_MAX;
	int8_t x130 = INT8_MIN;
	static int8_t x131 = 4;
	volatile int64_t t30 = -13884524569459LL;

	t30 = ((x129|x130)+(x131&x132));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x134 = INT16_MAX;
	volatile uint8_t x135 = 2U;
	static uint32_t x136 = 63U;

	t31 = ((x133|x134)+(x135&x136));

	if (t31 != 32769U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x139 = 7U;
	uint32_t x140 = UINT32_MAX;
	int64_t t32 = -28887188LL;

	t32 = ((x137|x138)+(x139&x140));

	if (t32 != -9223372032559808506LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MAX;
	volatile int8_t x144 = INT8_MIN;
	int32_t t33 = -1782761;

	t33 = ((x141|x142)+(x143&x144));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	volatile uint8_t x146 = 0U;
	int32_t x147 = 395;
	int16_t x148 = -1;
	static int32_t t34 = 29497632;

	t34 = ((x145|x146)+(x147&x148));

	if (t34 != 650) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	int16_t x155 = -1;
	int8_t x156 = INT8_MIN;
	int32_t t35 = -764645;

	t35 = ((x153|x154)+(x155&x156));

	if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x158 = -6;
	int8_t x160 = INT8_MIN;
	volatile int32_t t36 = -92;

	t36 = ((x157|x158)+(x159&x160));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -1;
	uint16_t x162 = 13509U;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MAX;
	volatile int64_t t37 = 3554154121LL;

	t37 = ((x161|x162)+(x163&x164));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x169 = INT16_MIN;
	int32_t x171 = -49;
	volatile uint8_t x172 = UINT8_MAX;
	volatile int32_t t38 = -106341713;

	t38 = ((x169|x170)+(x171&x172));

	if (t38 != -32434) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = 1784542368230LL;
	int8_t x174 = -1;
	volatile int32_t x175 = INT32_MIN;
	int8_t x176 = -2;
	int64_t t39 = -16363084LL;

	t39 = ((x173|x174)+(x175&x176));

	if (t39 != -2147483649LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = 63549LLU;
	int32_t x178 = 101067334;
	volatile int8_t x179 = INT8_MIN;
	static int32_t x180 = -23527365;
	volatile uint64_t t40 = 4032592921LLU;

	t40 = ((x177|x178)+(x179&x180));

	if (t40 != 77593215LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MAX;
	uint64_t x182 = UINT64_MAX;
	static int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	uint64_t t41 = 1277322392127LLU;

	t41 = ((x181|x182)+(x183&x184));

	if (t41 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x185 = INT32_MIN;
	static int16_t x186 = INT16_MIN;
	uint32_t x187 = 200600292U;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t42 = 179236LLU;

	t42 = ((x185|x186)+(x187&x188));

	if (t42 != 200567524LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x189 = 1U;
	uint8_t x190 = 1U;
	int8_t x191 = INT8_MIN;
	static uint8_t x192 = 1U;
	static int32_t t43 = -7175102;

	t43 = ((x189|x190)+(x191&x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x193 = INT32_MIN;
	int16_t x194 = -3;
	static volatile uint8_t x196 = UINT8_MAX;
	volatile uint64_t t44 = 14720LLU;

	t44 = ((x193|x194)+(x195&x196));

	if (t44 != 154LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = 22033LL;
	uint64_t x199 = 9109855255060003354LLU;
	int64_t x200 = INT64_MIN;
	uint64_t t45 = 3265784081LLU;

	t45 = ((x197|x198)+(x199&x200));

	if (t45 != 18446744073709541331LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x202 = -1LL;
	static int8_t x204 = INT8_MIN;
	static volatile uint64_t t46 = 433661LLU;

	t46 = ((x201|x202)+(x203&x204));

	if (t46 != 14975LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = 129U;
	int8_t x206 = INT8_MAX;
	uint64_t x207 = 4497873524554194LLU;
	int8_t x208 = INT8_MAX;
	volatile uint64_t t47 = 8LLU;

	t47 = ((x205|x206)+(x207&x208));

	if (t47 != 337LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -1;
	volatile uint8_t x210 = 84U;
	static int8_t x211 = 52;
	int32_t t48 = 2041080;

	t48 = ((x209|x210)+(x211&x212));

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = UINT64_MAX;
	static int16_t x214 = -1;
	volatile uint8_t x215 = 0U;
	uint32_t x216 = UINT32_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x213|x214)+(x215&x216));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x217 = -1;
	int64_t x218 = -186LL;
	uint8_t x220 = UINT8_MAX;

	t50 = ((x217|x218)+(x219&x220));

	if (t50 != 180LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x223 = INT8_MAX;
	int8_t x224 = 2;
	static int64_t t51 = 1010LL;

	t51 = ((x221|x222)+(x223&x224));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MIN;
	int32_t x228 = 26053;

	t52 = ((x225|x226)+(x227&x228));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = 13;
	int8_t x230 = 9;
	static int8_t x231 = -1;
	int32_t x232 = INT32_MIN;
	volatile int32_t t53 = -110351958;

	t53 = ((x229|x230)+(x231&x232));

	if (t53 != -2147483635) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x233 = 1812156919U;
	static int8_t x234 = 4;
	int8_t x235 = INT8_MAX;
	volatile int32_t x236 = 1;
	volatile uint32_t t54 = 11175U;

	t54 = ((x233|x234)+(x235&x236));

	if (t54 != 1812156920U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = -1;
	int64_t x238 = INT64_MIN;
	int64_t x240 = INT64_MIN;
	volatile int64_t t55 = 30429361266LL;

	t55 = ((x237|x238)+(x239&x240));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x242 = 0U;
	uint16_t x243 = 17792U;
	uint16_t x244 = 1146U;
	volatile int32_t t56 = 1892336;

	t56 = ((x241|x242)+(x243&x244));

	if (t56 != 896) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x245 = UINT64_MAX;
	uint8_t x246 = UINT8_MAX;
	int16_t x247 = INT16_MAX;
	uint8_t x248 = 36U;

	t57 = ((x245|x246)+(x247&x248));

	if (t57 != 35LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MAX;
	volatile int64_t x251 = INT64_MAX;
	uint64_t x252 = 3439960720699LLU;
	uint64_t t58 = 2014767LLU;

	t58 = ((x249|x250)+(x251&x252));

	if (t58 != 9223375476815496634LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = 124840374LL;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	int8_t x256 = INT8_MIN;

	t59 = ((x253|x254)+(x255&x256));

	if (t59 != 18446744073709545782LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x257 = INT16_MAX;
	uint64_t x258 = 152LLU;
	int8_t x260 = 44;
	volatile uint64_t t60 = 18654479818LLU;

	t60 = ((x257|x258)+(x259&x260));

	if (t60 != 32811LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 123U;
	volatile int64_t x262 = 348LL;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	int64_t t61 = 52505LL;

	t61 = ((x261|x262)+(x263&x264));

	if (t61 != -9223372036854775425LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 0U;
	int64_t x266 = -1LL;
	static int16_t x267 = -1;
	volatile int16_t x268 = -1;
	int64_t t62 = 17580022533548LL;

	t62 = ((x265|x266)+(x267&x268));

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x269 = -1;
	static int16_t x270 = 29;
	int32_t t63 = -43595921;

	t63 = ((x269|x270)+(x271&x272));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x275 = 83;
	volatile uint16_t x276 = 2486U;
	volatile int32_t t64 = 20257660;

	t64 = ((x273|x274)+(x275&x276));

	if (t64 != -2147483630) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = 0;
	int16_t x278 = 66;
	uint64_t x279 = 23520072662522LLU;
	int8_t x280 = -1;
	volatile uint64_t t65 = 137032356776LLU;

	t65 = ((x277|x278)+(x279&x280));

	if (t65 != 23520072662588LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x282 = -1;
	int64_t x284 = -1LL;
	static volatile int64_t t66 = -70LL;

	t66 = ((x281|x282)+(x283&x284));

	if (t66 != -129LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x292 = 59U;
	volatile uint64_t t67 = 34587183350483LLU;

	t67 = ((x289|x290)+(x291&x292));

	if (t67 != 562LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MIN;
	int8_t x295 = INT8_MAX;
	int32_t x296 = 1013;
	volatile uint64_t t68 = 253314936LLU;

	t68 = ((x293|x294)+(x295&x296));

	if (t68 != 116LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = 1U;
	int64_t x298 = -1LL;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MIN;

	t69 = ((x297|x298)+(x299&x300));

	if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x301 = 24790698621716647LL;
	int32_t x302 = INT32_MIN;
	int8_t x303 = 1;
	static int16_t x304 = 1;
	volatile int64_t t70 = 25841813933914LL;

	t70 = ((x301|x302)+(x303&x304));

	if (t70 != -787167064LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = 386568188381040LL;
	uint16_t x306 = UINT16_MAX;
	uint64_t x307 = 82898LLU;
	int8_t x308 = INT8_MAX;
	uint64_t t71 = 567374421595437899LLU;

	t71 = ((x305|x306)+(x307&x308));

	if (t71 != 386568188395601LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MIN;
	static int8_t x310 = INT8_MAX;
	volatile int32_t x312 = INT32_MIN;
	int64_t t72 = 57482103947525LL;

	t72 = ((x309|x310)+(x311&x312));

	if (t72 != -2147516289LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = 3208358273828LLU;
	volatile int64_t x314 = -530028430799640968LL;
	uint32_t x315 = UINT32_MAX;
	static volatile uint64_t t73 = 1LLU;

	t73 = ((x313|x314)+(x315&x316));

	if (t73 != 17916717876293560195LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x317 = 55426269485202627LLU;
	static uint64_t x318 = 490103078LLU;
	int16_t x319 = -26;

	t74 = ((x317|x318)+(x319&x320));

	if (t74 != 55426269486517707LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	static int16_t x322 = -1;
	static volatile uint32_t x324 = 0U;
	volatile int64_t t75 = -535648942215LL;

	t75 = ((x321|x322)+(x323&x324));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x325 = 0;
	static int16_t x328 = INT16_MIN;
	static volatile uint64_t t76 = 129482926786276610LLU;

	t76 = ((x325|x326)+(x327&x328));

	if (t76 != 9223447164897406428LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x330 = INT16_MAX;
	int16_t x332 = -1;
	int32_t t77 = -2;

	t77 = ((x329|x330)+(x331&x332));

	if (t77 != 65662) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = INT16_MIN;
	uint8_t x335 = 107U;
	uint64_t x336 = 850811514310LLU;
	uint64_t t78 = 96030852447LLU;

	t78 = ((x333|x334)+(x335&x336));

	if (t78 != 18446744073709524656LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x337 = 243U;
	static uint32_t x338 = 526U;
	int16_t x340 = -1;

	t79 = ((x337|x338)+(x339&x340));

	if (t79 != 767U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	volatile int32_t x342 = -1;
	int32_t x344 = INT32_MAX;

	t80 = ((x341|x342)+(x343&x344));

	if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MAX;
	int16_t x347 = -1;
	int32_t x348 = INT32_MAX;
	int32_t t81 = 1;

	t81 = ((x345|x346)+(x347&x348));

	if (t81 != 2147483646) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = UINT8_MAX;
	volatile uint64_t x350 = UINT64_MAX;
	volatile int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MAX;
	uint64_t t82 = 1807561803LLU;

	t82 = ((x349|x350)+(x351&x352));

	if (t82 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MIN;
	volatile int8_t x354 = -7;
	int16_t x355 = INT16_MIN;
	static int32_t t83 = 3;

	t83 = ((x353|x354)+(x355&x356));

	if (t83 != -32775) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = -1;
	static int8_t x359 = INT8_MAX;
	volatile uint64_t t84 = 633504580LLU;

	t84 = ((x357|x358)+(x359&x360));

	if (t84 != 98LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x362 = INT16_MAX;
	int16_t x364 = -5590;
	static int64_t t85 = INT64_MAX;

	t85 = ((x361|x362)+(x363&x364));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x365 = 45;
	uint64_t x367 = UINT64_MAX;
	uint32_t x368 = UINT32_MAX;
	static volatile uint64_t t86 = 2LLU;

	t86 = ((x365|x366)+(x367&x368));

	if (t86 != 8589934590LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x369 = 2252LLU;
	int8_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MAX;
	volatile uint64_t t87 = 188370060603LLU;

	t87 = ((x369|x370)+(x371&x372));

	if (t87 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x377 = -22;
	int32_t x380 = INT32_MAX;
	int64_t t88 = -402870571172LL;

	t88 = ((x377|x378)+(x379&x380));

	if (t88 != 5491085476LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 114U;
	static uint64_t t89 = UINT64_MAX;

	t89 = ((x381|x382)+(x383&x384));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MAX;
	int8_t x387 = -1;
	uint16_t x388 = 1U;
	static volatile int32_t t90 = -13;

	t90 = ((x385|x386)+(x387&x388));

	if (t90 != -2147450880) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = INT8_MAX;
	int64_t x390 = INT64_MIN;
	volatile int8_t x392 = INT8_MIN;

	t91 = ((x389|x390)+(x391&x392));

	if (t91 != 9223372889931197567LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x397 = -1LL;
	int16_t x398 = INT16_MAX;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = 1;
	int64_t t92 = -242LL;

	t92 = ((x397|x398)+(x399&x400));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = -1LL;
	int32_t x404 = -17179;
	volatile int64_t t93 = 897475295813519LL;

	t93 = ((x401|x402)+(x403&x404));

	if (t93 != -17281LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x405 = 864113196U;
	int32_t x406 = -1;
	volatile int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;

	t94 = ((x405|x406)+(x407&x408));

	if (t94 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x410 = 209LLU;
	int16_t x411 = -38;
	int8_t x412 = 2;

	t95 = ((x409|x410)+(x411&x412));

	if (t95 != 4294967297LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = 23;
	int64_t x414 = INT64_MAX;
	volatile uint8_t x415 = 63U;
	static volatile int64_t x416 = INT64_MIN;

	t96 = ((x413|x414)+(x415&x416));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x418 = UINT32_MAX;
	int64_t x419 = INT64_MIN;
	static int64_t x420 = INT64_MIN;
	volatile int64_t t97 = -47LL;

	t97 = ((x417|x418)+(x419&x420));

	if (t97 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int16_t x422 = INT16_MAX;
	int64_t x423 = -49739619259304708LL;
	volatile int16_t x424 = -5;
	static int64_t t98 = -133595LL;

	t98 = ((x421|x422)+(x423&x424));

	if (t98 != -49739614964337417LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x425 = -1;
	static volatile int64_t x426 = -1LL;
	int16_t x428 = -1;
	int64_t t99 = -27848381LL;

	t99 = ((x425|x426)+(x427&x428));

	if (t99 != 7LL) { NG(); } else { ; }
	
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

