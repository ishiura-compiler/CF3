#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x16 = 1439522LL;
int64_t x20 = INT64_MIN;
uint64_t x24 = UINT64_MAX;
int64_t x25 = -115947136LL;
uint8_t x26 = 31U;
static int64_t t6 = 398666794LL;
int64_t x31 = INT64_MIN;
uint64_t t8 = 5546177672600LLU;
volatile int16_t x39 = -1;
int16_t x42 = -36;
static int16_t x56 = -1;
int8_t x62 = INT8_MIN;
int32_t x69 = INT32_MIN;
volatile int8_t x72 = -1;
volatile int32_t t17 = -3284;
int8_t x81 = -1;
uint16_t x98 = 25U;
int64_t x100 = -13986LL;
uint64_t t24 = 1598368490637200LLU;
volatile uint8_t x109 = 113U;
static int8_t x123 = INT8_MAX;
uint8_t x139 = 1U;
int32_t x140 = -1;
static int32_t x149 = -1;
int8_t x151 = 0;
int32_t x152 = INT32_MAX;
uint32_t x156 = 16313048U;
volatile uint64_t t37 = 14LLU;
volatile int32_t t38 = 200292;
static uint64_t x161 = 12924LLU;
uint64_t t39 = 416391788LLU;
int8_t x168 = -2;
int64_t t44 = 35873462897148493LL;
int8_t x191 = INT8_MIN;
static volatile int32_t x214 = INT32_MIN;
volatile uint8_t x216 = 5U;
static uint32_t x221 = 454252796U;
uint64_t x222 = 1879702LLU;
int32_t t52 = -143202;
int8_t x235 = 3;
int8_t x236 = 24;
uint16_t x248 = 2242U;
int64_t x257 = INT64_MIN;
int8_t x259 = -1;
int64_t t60 = 119263745645LL;
int16_t x273 = 205;
uint8_t x279 = UINT8_MAX;
int64_t x282 = INT64_MIN;
volatile uint8_t x284 = UINT8_MAX;
volatile int8_t x287 = INT8_MAX;
static uint32_t x289 = 7U;
int64_t x305 = -54023636686LL;
int8_t x308 = -1;
volatile int64_t t69 = -439278LL;
volatile int32_t t70 = 27658569;
static uint32_t x318 = 37U;
int16_t x319 = INT16_MIN;
int32_t x322 = INT32_MIN;
volatile uint64_t x324 = UINT64_MAX;
uint32_t x328 = UINT32_MAX;
volatile uint32_t t73 = 36373U;
int32_t x329 = -1;
int64_t x333 = 57800618305709LL;
static int16_t x338 = -1;
int32_t x342 = 4797645;
volatile int16_t x344 = -189;
volatile uint32_t t77 = 418516353U;
uint32_t x356 = 26436U;
int16_t x357 = INT16_MAX;
uint16_t x362 = 234U;
int32_t x367 = -1;
volatile int32_t x374 = INT32_MIN;
int8_t x377 = 63;
volatile uint32_t t86 = 213U;
static volatile uint32_t x382 = UINT32_MAX;
uint64_t x383 = UINT64_MAX;
uint8_t x384 = UINT8_MAX;
static volatile int64_t x385 = -51613824442LL;
volatile int64_t t90 = 758879063148620LL;
int16_t x398 = INT16_MIN;
int8_t x401 = INT8_MIN;
int32_t x403 = -299;
int16_t x408 = INT16_MIN;
volatile uint64_t x410 = 547527323849236538LLU;
static uint64_t t95 = 1986347844820LLU;
volatile uint64_t t96 = 408506180579LLU;
uint16_t x429 = UINT16_MAX;
volatile uint32_t t99 = 1762695U;


void f0(void) {
	int64_t x1 = -4263LL;
	uint64_t x2 = 73778509421668LLU;
	int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 835179360LLU;

	t0 = ((x1%x2)*(x3^x4));

	if (t0 != 4038289298206417879LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MAX;
	volatile int32_t x6 = -1;
	static int16_t x7 = INT16_MAX;
	static int64_t x8 = -3336943429LL;
	int64_t t1 = -229255207270LL;

	t1 = ((x5%x6)*(x7^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = -1;
	volatile int32_t x11 = -1;
	uint8_t x12 = 10U;
	static int32_t t2 = 244;

	t2 = ((x9%x10)*(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static volatile uint16_t x14 = 3U;
	int8_t x15 = -1;
	volatile int64_t t3 = 18582038760940LL;

	t3 = ((x13%x14)*(x15^x16));

	if (t3 != 2879046LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 19919LLU;
	volatile int32_t x18 = 65054301;
	static int32_t x19 = INT32_MIN;
	volatile uint64_t t4 = 8506LLU;

	t4 = ((x17%x18)*(x19^x20));

	if (t4 != 9223329261127991296LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 9U;
	static int16_t x22 = -1;
	uint64_t x23 = UINT64_MAX;
	volatile uint64_t t5 = 157808777842241405LLU;

	t5 = ((x21%x22)*(x23^x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x27 = 1U;
	int64_t x28 = -58139820257130LL;

	t6 = ((x25%x26)*(x27^x28));

	if (t6 != 348838921542774LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = -1324;
	int32_t x30 = INT32_MIN;
	static uint64_t x32 = 0LLU;
	uint64_t t7 = 156705LLU;

	t7 = ((x29%x30)*(x31^x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint64_t x34 = 208027497363214LLU;
	int16_t x35 = INT16_MAX;
	static uint64_t x36 = UINT64_MAX;

	t8 = ((x33%x34)*(x35^x36));

	if (t8 != 14718646011189657600LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile uint16_t x38 = 30U;
	volatile uint32_t x40 = 1932U;
	volatile uint32_t t9 = 165U;

	t9 = ((x37%x38)*(x39^x40));

	if (t9 != 1933U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int16_t x43 = 1;
	int32_t x44 = -1;
	volatile int32_t t10 = -7792;

	t10 = ((x41%x42)*(x43^x44));

	if (t10 != 40) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 3U;
	static int32_t x46 = 670;
	int32_t x47 = -1;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 30;

	t11 = ((x45%x46)*(x47^x48));

	if (t11 != 98301) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 110493165U;
	uint64_t x50 = 726337LLU;
	static uint64_t x51 = 8874431LLU;
	volatile uint64_t x52 = 458124LLU;
	volatile uint64_t t12 = 910974131468166LLU;

	t12 = ((x49%x50)*(x51^x52));

	if (t12 != 763786437103LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x54 = UINT32_MAX;
	uint32_t x55 = UINT32_MAX;
	uint32_t t13 = 1U;

	t13 = ((x53%x54)*(x55^x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	static uint16_t x58 = UINT16_MAX;
	volatile int16_t x59 = INT16_MAX;
	int8_t x60 = -1;
	int32_t t14 = -6;

	t14 = ((x57%x58)*(x59^x60));

	if (t14 != 1073741824) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x63 = 758;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 15632;

	t15 = ((x61%x62)*(x63^x64));

	if (t15 != -4065270) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	static int8_t x66 = INT8_MAX;
	uint16_t x67 = 6U;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -13396302;

	t16 = ((x65%x66)*(x67^x68));

	if (t16 != 976) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x70 = UINT16_MAX;
	static int8_t x71 = INT8_MAX;

	t17 = ((x69%x70)*(x71^x72));

	if (t17 != 4194304) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 6947;
	static int64_t x74 = INT64_MAX;
	uint32_t x75 = 141U;
	volatile uint32_t x76 = 6261184U;
	volatile int64_t t18 = -188998484815502LL;

	t18 = ((x73%x74)*(x75^x76));

	if (t18 != 43495646343LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 529931882U;
	static int64_t x80 = -1LL;
	int64_t t19 = -2572LL;

	t19 = ((x77%x78)*(x79^x80));

	if (t19 != 529931883LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -26480579684274237LL;
	static volatile int32_t x83 = 15470;
	volatile uint32_t x84 = UINT32_MAX;
	int64_t t20 = 962LL;

	t20 = ((x81%x82)*(x83^x84));

	if (t20 != -4294951825LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	int32_t x90 = INT32_MAX;
	static int64_t x91 = 2166148748153438LL;
	static volatile int8_t x92 = 7;
	volatile int64_t t21 = 2LL;

	t21 = ((x89%x90)*(x91^x92));

	if (t21 != 2166148748153433LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = -14743576LL;
	static uint32_t x94 = 1U;
	int64_t x95 = INT64_MAX;
	uint64_t x96 = UINT64_MAX;
	uint64_t t22 = 259253400837LLU;

	t22 = ((x93%x94)*(x95^x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 0U;
	int16_t x99 = 15;
	volatile int64_t t23 = -172022156310524571LL;

	t23 = ((x97%x98)*(x99^x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = 54829;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 57405786411236LLU;
	int16_t x104 = INT16_MIN;

	t24 = ((x101%x102)*(x103^x104));

	if (t24 != 18444160813321435156LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	int64_t x106 = 5LL;
	uint16_t x107 = 53U;
	int8_t x108 = -1;
	volatile int64_t t25 = -1LL;

	t25 = ((x105%x106)*(x107^x108));

	if (t25 != -108LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = -1;
	int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MAX;
	int32_t t26 = 5436681;

	t26 = ((x109%x110)*(x111^x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 6U;
	int32_t x114 = 5983;
	uint64_t x115 = 630264LLU;
	uint8_t x116 = UINT8_MAX;
	static volatile uint64_t t27 = 124416856LLU;

	t27 = ((x113%x114)*(x115^x116));

	if (t27 != 3780138LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int32_t x119 = 9215878;
	uint8_t x120 = UINT8_MAX;
	static volatile int32_t t28 = 13613571;

	t28 = ((x117%x118)*(x119^x120));

	if (t28 != -9215865) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = 5;
	int16_t x122 = -1;
	int64_t x124 = INT64_MIN;
	volatile int64_t t29 = -1409801169918686LL;

	t29 = ((x121%x122)*(x123^x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 240U;
	static volatile uint16_t x126 = 156U;
	int8_t x127 = INT8_MIN;
	static uint16_t x128 = 28U;
	uint32_t t30 = 13535169U;

	t30 = ((x125%x126)*(x127^x128));

	if (t30 != 4294958896U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 78U;
	volatile uint32_t x130 = UINT32_MAX;
	int16_t x131 = -1582;
	volatile int32_t x132 = -194460;
	volatile uint32_t t31 = 501014298U;

	t31 = ((x129%x130)*(x131^x132));

	if (t31 != 15050100U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	static volatile int64_t t32 = 151LL;

	t32 = ((x133%x134)*(x135^x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = -1LL;
	int16_t x138 = 12;
	int64_t t33 = -268516634296LL;

	t33 = ((x137%x138)*(x139^x140));

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 1U;
	volatile int16_t x142 = INT16_MIN;
	static volatile uint64_t x143 = 119027596304537LLU;
	uint8_t x144 = 1U;
	uint64_t t34 = 6667349440695392181LLU;

	t34 = ((x141%x142)*(x143^x144));

	if (t34 != 119027596304536LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MAX;
	volatile int64_t x146 = INT64_MAX;
	int8_t x147 = -1;
	int16_t x148 = INT16_MAX;
	volatile int64_t t35 = -775466733LL;

	t35 = ((x145%x146)*(x147^x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x150 = UINT64_MAX;
	static volatile uint64_t t36 = 71433250109284LLU;

	t36 = ((x149%x150)*(x151^x152));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MAX;
	uint64_t x155 = 100215413575954LLU;

	t37 = ((x153%x154)*(x155^x156));

	if (t37 != 18446643858283922486LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 44U;
	int32_t x158 = 38;
	int8_t x159 = -52;
	int8_t x160 = INT8_MAX;

	t38 = ((x157%x158)*(x159^x160));

	if (t38 != -462) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MIN;
	int32_t x163 = -1;
	volatile uint32_t x164 = 427996332U;

	t39 = ((x161%x162)*(x163^x164));

	if (t39 != 49976732725812LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 69U;
	static int32_t x166 = INT32_MIN;
	int8_t x167 = 13;
	int32_t t40 = -3708;

	t40 = ((x165%x166)*(x167^x168));

	if (t40 != -897) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 7U;
	uint16_t x170 = 1009U;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile uint64_t t41 = 4693572007310582LLU;

	t41 = ((x169%x170)*(x171^x172));

	if (t41 != 18446744043644780544LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x173 = -5412940519LL;
	int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MAX;
	volatile int64_t t42 = -11546LL;

	t42 = ((x173%x174)*(x175^x176));

	if (t42 != 2400792586960661225LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x177 = -1LL;
	uint8_t x178 = 11U;
	static int32_t x179 = INT32_MAX;
	uint32_t x180 = 0U;
	volatile int64_t t43 = -6723543154251LL;

	t43 = ((x177%x178)*(x179^x180));

	if (t43 != -2147483647LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = 4461667LL;
	static int8_t x182 = INT8_MIN;
	uint32_t x183 = UINT32_MAX;
	static int16_t x184 = 37;

	t44 = ((x181%x182)*(x183^x184));

	if (t44 != 425201758542LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x189 = INT16_MIN;
	int32_t x190 = -1;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t45 = 331259745295058LLU;

	t45 = ((x189%x190)*(x191^x192));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = 948;
	uint8_t x194 = 15U;
	volatile uint8_t x195 = 20U;
	volatile uint64_t x196 = 127254LLU;
	uint64_t t46 = 1061426LLU;

	t46 = ((x193%x194)*(x195^x196));

	if (t46 != 381702LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x209 = INT32_MIN;
	volatile int64_t x210 = INT64_MAX;
	static volatile int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	int64_t t47 = -11355566815588LL;

	t47 = ((x209%x210)*(x211^x212));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x213 = -5;
	int32_t x215 = -203771;
	volatile int32_t t48 = 76515;

	t48 = ((x213%x214)*(x215^x216));

	if (t48 != 1018880) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MAX;
	static int64_t x218 = INT64_MAX;
	volatile int32_t x219 = INT32_MIN;
	static int32_t x220 = INT32_MAX;
	int64_t t49 = 776497880LL;

	t49 = ((x217%x218)*(x219^x220));

	if (t49 != -127LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x223 = 289LL;
	int32_t x224 = -1;
	volatile uint64_t t50 = 151140789575249LLU;

	t50 = ((x221%x222)*(x223^x224));

	if (t50 != 18446744073348613556LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x225 = 840857LLU;
	volatile int16_t x226 = 1;
	int32_t x227 = INT32_MIN;
	volatile int16_t x228 = INT16_MAX;
	volatile uint64_t t51 = 1LLU;

	t51 = ((x225%x226)*(x227^x228));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = UINT16_MAX;
	volatile int32_t x230 = -19;
	static volatile uint8_t x231 = UINT8_MAX;
	static volatile int32_t x232 = -1;

	t52 = ((x229%x230)*(x231^x232));

	if (t52 != -1024) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = -1;
	int64_t x234 = -6346358574125LL;
	int64_t t53 = -8474200829095LL;

	t53 = ((x233%x234)*(x235^x236));

	if (t53 != -27LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	uint16_t x238 = 43U;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -3215;
	int32_t t54 = 1907;

	t54 = ((x237%x238)*(x239^x240));

	if (t54 != -59106) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = UINT16_MAX;
	static volatile int8_t x242 = -2;
	static int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MIN;
	volatile int32_t t55 = -245919278;

	t55 = ((x241%x242)*(x243^x244));

	if (t55 != -2147450881) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	volatile int64_t t56 = 318030876169LL;

	t56 = ((x245%x246)*(x247^x248));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x258 = INT64_MIN;
	volatile uint16_t x260 = 6U;
	int64_t t57 = -13082LL;

	t57 = ((x257%x258)*(x259^x260));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x261 = 20037191LLU;
	int32_t x262 = INT32_MIN;
	uint16_t x263 = 788U;
	uint16_t x264 = UINT16_MAX;
	uint64_t t58 = 485786LLU;

	t58 = ((x261%x262)*(x263^x264));

	if (t58 != 1297348005677LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = INT64_MAX;
	volatile int64_t x266 = -1LL;
	volatile int16_t x267 = -97;
	volatile int32_t x268 = INT32_MIN;
	static volatile int64_t t59 = 2297440694LL;

	t59 = ((x265%x266)*(x267^x268));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x269 = INT64_MIN;
	static uint32_t x270 = 50U;
	int16_t x271 = INT16_MAX;
	uint8_t x272 = UINT8_MAX;

	t60 = ((x269%x270)*(x271^x272));

	if (t60 != -260096LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x274 = 5U;
	int32_t x275 = -1391445;
	int32_t x276 = INT32_MAX;
	int32_t t61 = -904;

	t61 = ((x273%x274)*(x275^x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = -3981645252LL;
	int8_t x278 = INT8_MIN;
	int16_t x280 = -2;
	int64_t t62 = -16177LL;

	t62 = ((x277%x278)*(x279^x280));

	if (t62 != 17340LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	static int8_t x283 = INT8_MIN;
	volatile int64_t t63 = -65566920063185LL;

	t63 = ((x281%x282)*(x283^x284));

	if (t63 != 277025390592LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = -1;
	static volatile uint16_t x286 = 2600U;
	uint8_t x288 = UINT8_MAX;
	int32_t t64 = 2059331;

	t64 = ((x285%x286)*(x287^x288));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x290 = INT8_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MIN;
	static volatile uint32_t t65 = 3U;

	t65 = ((x289%x290)*(x291^x292));

	if (t65 != 2147485433U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = 1259LL;
	static int8_t x294 = -1;
	volatile uint16_t x295 = 31U;
	volatile uint32_t x296 = 87747U;
	int64_t t66 = -177920132440673427LL;

	t66 = ((x293%x294)*(x295^x296));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x297 = 0;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = -1LL;
	int64_t x300 = 236195496LL;
	int64_t t67 = 10062LL;

	t67 = ((x297%x298)*(x299^x300));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x306 = 5975U;
	int8_t x307 = -18;
	int64_t t68 = 24096915239LL;

	t68 = ((x305%x306)*(x307^x308));

	if (t68 != -84762LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MAX;
	int16_t x311 = -5;
	int32_t x312 = INT32_MIN;

	t69 = ((x309%x310)*(x311^x312));

	if (t69 != -17179869144LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x313 = INT32_MAX;
	int32_t x314 = -1;
	volatile int8_t x315 = -1;
	int16_t x316 = 20;

	t70 = ((x313%x314)*(x315^x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MAX;
	int32_t x320 = -1;
	uint32_t t71 = 556411U;

	t71 = ((x317%x318)*(x319^x320));

	if (t71 != 720874U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	int64_t x323 = -1LL;
	volatile uint64_t t72 = 1149LLU;

	t72 = ((x321%x322)*(x323^x324));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	int32_t x327 = INT32_MAX;

	t73 = ((x325%x326)*(x327^x328));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x330 = INT8_MAX;
	uint32_t x331 = UINT32_MAX;
	static int8_t x332 = 28;
	static volatile uint32_t t74 = 9U;

	t74 = ((x329%x330)*(x331^x332));

	if (t74 != 29U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x334 = 23457U;
	static uint16_t x335 = 17902U;
	static uint64_t x336 = UINT64_MAX;
	volatile uint64_t t75 = 10433012907026LLU;

	t75 = ((x333%x334)*(x335^x336));

	if (t75 != 18446744073621218214LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MIN;
	uint16_t x339 = 59U;
	volatile int32_t x340 = -1;
	static volatile int32_t t76 = -45;

	t76 = ((x337%x338)*(x339^x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x343 = 1158498711U;

	t77 = ((x341%x342)*(x343^x344));

	if (t77 != 3323862844U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	uint64_t x347 = 3617505LLU;
	int8_t x348 = 51;
	volatile uint64_t t78 = 841708525812491LLU;

	t78 = ((x345%x346)*(x347^x348));

	if (t78 != 18446743955171639296LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = UINT16_MAX;
	static uint8_t x350 = UINT8_MAX;
	static uint16_t x351 = 20U;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t79 = 26;

	t79 = ((x349%x350)*(x351^x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = 7LL;
	volatile uint8_t x355 = UINT8_MAX;
	int64_t t80 = -907LL;

	t80 = ((x353%x354)*(x355^x356));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x358 = UINT8_MAX;
	uint64_t x359 = UINT64_MAX;
	volatile int32_t x360 = INT32_MIN;
	volatile uint64_t t81 = 15720LLU;

	t81 = ((x357%x358)*(x359^x360));

	if (t81 != 272730423169LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MIN;
	int16_t x363 = INT16_MAX;
	volatile uint32_t x364 = 127U;
	uint32_t t82 = 223U;

	t82 = ((x361%x362)*(x363^x364));

	if (t82 != 4290789376U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = INT32_MIN;
	volatile int64_t x366 = INT64_MAX;
	int16_t x368 = -1;
	static int64_t t83 = 62445290089LL;

	t83 = ((x365%x366)*(x367^x368));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x369 = INT8_MAX;
	int8_t x370 = INT8_MAX;
	volatile uint8_t x371 = 35U;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t84 = 46397508184LLU;

	t84 = ((x369%x370)*(x371^x372));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x373 = -1;
	int32_t x375 = INT32_MIN;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t85 = 240;

	t85 = ((x373%x374)*(x375^x376));

	if (t85 != 2147418113) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x378 = 1034;
	volatile uint32_t x379 = 663U;
	volatile uint32_t x380 = 47U;

	t86 = ((x377%x378)*(x379^x380));

	if (t86 != 43848U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = 46;
	volatile uint64_t t87 = 3LLU;

	t87 = ((x381%x382)*(x383^x384));

	if (t87 != 18446744073709539840LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x386 = 1U;
	static int8_t x387 = -6;
	uint64_t x388 = UINT64_MAX;
	uint64_t t88 = 985423650262779LLU;

	t88 = ((x385%x386)*(x387^x388));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MAX;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MIN;
	uint64_t t89 = 124151400990401LLU;

	t89 = ((x389%x390)*(x391^x392));

	if (t89 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = INT8_MAX;
	int64_t x394 = INT64_MAX;
	int8_t x395 = -1;
	int64_t x396 = 225707LL;

	t90 = ((x393%x394)*(x395^x396));

	if (t90 != -28664916LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x397 = INT32_MAX;
	volatile uint32_t x399 = 7022617U;
	int8_t x400 = -1;
	uint32_t t91 = 36413986U;

	t91 = ((x397%x398)*(x399^x400));

	if (t91 != 1818109978U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x402 = -1;
	volatile int32_t x404 = 119;
	volatile int32_t t92 = -104958;

	t92 = ((x401%x402)*(x403^x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x405 = UINT8_MAX;
	uint64_t x406 = UINT64_MAX;
	uint16_t x407 = UINT16_MAX;
	volatile uint64_t t93 = 210315LLU;

	t93 = ((x405%x406)*(x407^x408));

	if (t93 != 18446744073701195521LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x409 = 31U;
	int32_t x411 = 348958916;
	uint8_t x412 = 86U;
	volatile uint64_t t94 = 1328249536419LLU;

	t94 = ((x409%x410)*(x411^x412));

	if (t94 != 10817724846LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = INT64_MIN;
	int16_t x414 = -16;
	volatile int16_t x415 = INT16_MIN;
	uint64_t x416 = UINT64_MAX;

	t95 = ((x413%x414)*(x415^x416));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x417 = 1;
	uint64_t x418 = UINT64_MAX;
	volatile int32_t x419 = 89232;
	uint16_t x420 = 28942U;

	t96 = ((x417%x418)*(x419^x420));

	if (t96 != 77214LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x421 = UINT32_MAX;
	static volatile int64_t x422 = -1LL;
	uint64_t x423 = 4237972LLU;
	volatile uint16_t x424 = 3U;
	volatile uint64_t t97 = 23845335LLU;

	t97 = ((x421%x422)*(x423^x424));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x430 = INT16_MAX;
	uint16_t x431 = UINT16_MAX;
	static uint16_t x432 = 6U;
	int32_t t98 = 21344859;

	t98 = ((x429%x430)*(x431^x432));

	if (t98 != 65529) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x433 = 62U;
	uint16_t x434 = 20508U;
	uint32_t x435 = 413U;
	int16_t x436 = INT16_MAX;

	t99 = ((x433%x434)*(x435^x436));

	if (t99 != 2005948U) { NG(); } else { ; }
	
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

