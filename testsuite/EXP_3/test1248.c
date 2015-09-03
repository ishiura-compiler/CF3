#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -9;
static uint16_t x14 = 21156U;
uint64_t x15 = 52572685763296054LLU;
volatile int32_t t6 = 10515;
uint8_t x37 = 83U;
static int16_t x40 = -28;
static uint32_t x42 = 42978U;
int16_t x44 = 90;
volatile int64_t t11 = 2034LL;
int64_t x59 = INT64_MIN;
volatile int64_t t15 = -11711LL;
volatile int32_t t16 = 1;
int16_t x74 = -1;
volatile uint64_t x77 = 749672015095482367LLU;
uint32_t x83 = 5U;
static int32_t t19 = 6;
uint64_t x89 = UINT64_MAX;
volatile int32_t x92 = 158;
uint64_t x102 = 7489482335LLU;
static int32_t x103 = INT32_MAX;
uint64_t t24 = 2500LLU;
int64_t t25 = 803075457162419LL;
int8_t x109 = 1;
volatile uint16_t x122 = 130U;
int64_t x124 = 1307685795912554LL;
int32_t t29 = -1;
uint8_t x126 = 2U;
int32_t t31 = -116;
volatile int64_t x135 = INT64_MAX;
uint32_t t32 = 235290407U;
volatile uint64_t x141 = 689129652433470LLU;
static volatile uint64_t x143 = 7LLU;
int16_t x150 = INT16_MAX;
int8_t x151 = INT8_MIN;
uint64_t x152 = 5468675926388678976LLU;
int32_t x172 = INT32_MIN;
static volatile int64_t x175 = INT64_MIN;
int32_t x182 = -3826;
int16_t x186 = 766;
static int32_t x188 = 6;
uint64_t t47 = 21856593377693085LLU;
volatile int64_t t48 = -115763390815LL;
static int64_t x209 = INT64_MIN;
int16_t x215 = -500;
static int64_t t52 = 2080LL;
volatile uint16_t x217 = UINT16_MAX;
int8_t x219 = -1;
int8_t x225 = INT8_MIN;
static int16_t x227 = INT16_MIN;
static int8_t x231 = INT8_MIN;
int32_t x232 = -1;
int64_t x233 = INT64_MAX;
int32_t x238 = INT32_MIN;
uint64_t x239 = UINT64_MAX;
int16_t x243 = -1;
volatile int32_t x250 = -11;
int32_t x251 = 83;
volatile uint8_t x252 = 18U;
static uint64_t t60 = 644430619268LLU;
int16_t x258 = -1;
int8_t x262 = -3;
uint32_t t64 = 1756124U;
volatile uint64_t t65 = 1LLU;
uint64_t x279 = UINT64_MAX;
static uint8_t x282 = 31U;
int64_t x283 = INT64_MIN;
volatile int32_t t68 = 4781;
volatile int16_t x286 = INT16_MAX;
uint8_t x298 = 61U;
static int8_t x299 = 18;
static uint32_t x300 = 2403279U;
int64_t x301 = INT64_MIN;
volatile int64_t t72 = 115920003847079874LL;
int32_t x307 = 5388;
uint8_t x308 = 0U;
volatile uint64_t x312 = 670LLU;
volatile int64_t x316 = INT64_MIN;
static int8_t x320 = 7;
int8_t x323 = INT8_MIN;
uint64_t t78 = 88680284LLU;
int32_t x330 = INT32_MIN;
uint32_t x332 = 7659U;
int64_t x350 = INT64_MAX;
static uint64_t x357 = UINT64_MAX;
static volatile uint64_t t85 = 12LLU;
volatile int64_t x364 = -1LL;
int32_t x366 = INT32_MIN;
int8_t x375 = -7;
static volatile int32_t t89 = 81;
volatile int8_t x380 = INT8_MIN;
volatile int8_t x382 = -18;
uint64_t x384 = 1835LLU;
volatile uint32_t x387 = 4055643U;
volatile int16_t x390 = -474;
int32_t x395 = 10;
uint8_t x396 = 1U;
uint64_t x402 = 846009483032813018LLU;
uint32_t x407 = 12762443U;
static int32_t t97 = 3;
int8_t x409 = 2;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -408313805;

	t0 = ((x1%x2)^(x3==x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	volatile int8_t x6 = INT8_MIN;
	int16_t x7 = -11;
	uint64_t x8 = 4518959486798128487LLU;

	t1 = ((x5%x6)^(x7==x8));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = UINT16_MAX;
	uint16_t x16 = 1938U;
	static volatile int32_t t2 = 823;

	t2 = ((x13%x14)^(x15==x16));

	if (t2 != 2067) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 12668066386334394LLU;
	static uint32_t x18 = 25140U;
	static int32_t x19 = -16;
	uint8_t x20 = 30U;
	volatile uint64_t t3 = 1530LLU;

	t3 = ((x17%x18)^(x19==x20));

	if (t3 != 6714LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x21 = 2043480492417384280LLU;
	uint16_t x22 = 74U;
	int32_t x23 = INT32_MIN;
	volatile uint16_t x24 = UINT16_MAX;
	static volatile uint64_t t4 = 16511783626LLU;

	t4 = ((x21%x22)^(x23==x24));

	if (t4 != 26LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	volatile int8_t x26 = 1;
	static int16_t x27 = -1;
	static volatile int8_t x28 = -3;
	uint32_t t5 = 4963U;

	t5 = ((x25%x26)^(x27==x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 36U;
	int16_t x30 = INT16_MIN;
	volatile int64_t x31 = 58582LL;
	uint16_t x32 = UINT16_MAX;

	t6 = ((x29%x30)^(x31==x32));

	if (t6 != 36) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = 1;
	int32_t x34 = INT32_MIN;
	uint8_t x35 = UINT8_MAX;
	int8_t x36 = -2;
	int32_t t7 = 11414259;

	t7 = ((x33%x34)^(x35==x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x38 = 3696U;
	int64_t x39 = INT64_MIN;
	volatile uint32_t t8 = 4U;

	t8 = ((x37%x38)^(x39==x40));

	if (t8 != 83U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 4;
	int16_t x43 = -1;
	uint32_t t9 = 43981U;

	t9 = ((x41%x42)^(x43==x44));

	if (t9 != 4U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MIN;
	uint8_t x46 = 6U;
	int64_t x47 = INT64_MIN;
	int8_t x48 = 44;
	int64_t t10 = -37993442LL;

	t10 = ((x45%x46)^(x47==x48));

	if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 14234U;
	volatile int64_t x50 = -490999633952331LL;
	int8_t x51 = -1;
	uint16_t x52 = 3U;

	t11 = ((x49%x50)^(x51==x52));

	if (t11 != 14234LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 29128711U;
	uint8_t x54 = 7U;
	static uint64_t x55 = 5309169761381813LLU;
	uint8_t x56 = 2U;
	volatile uint32_t t12 = 158399U;

	t12 = ((x53%x54)^(x55==x56));

	if (t12 != 3U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = 3;
	int16_t x58 = -1;
	int16_t x60 = -15;
	volatile int32_t t13 = -277082;

	t13 = ((x57%x58)^(x59==x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x61 = 1U;
	int16_t x62 = INT16_MIN;
	volatile uint64_t x63 = 661272211202340LLU;
	static volatile uint32_t x64 = 1U;
	int32_t t14 = 2204;

	t14 = ((x61%x62)^(x63==x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	volatile uint8_t x66 = UINT8_MAX;
	static uint16_t x67 = 382U;
	static int8_t x68 = INT8_MAX;

	t15 = ((x65%x66)^(x67==x68));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = 13711;
	int8_t x70 = -1;
	int32_t x71 = 7979613;
	int64_t x72 = -135185148393750LL;

	t16 = ((x69%x70)^(x71==x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 34U;
	int8_t x75 = -1;
	int16_t x76 = -2;
	volatile int32_t t17 = 393338;

	t17 = ((x73%x74)^(x75==x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 52378419U;
	uint64_t t18 = 253044883LLU;

	t18 = ((x77%x78)^(x79==x80));

	if (t18 != 749672015095482367LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 106;
	uint8_t x82 = UINT8_MAX;
	volatile int64_t x84 = INT64_MIN;

	t19 = ((x81%x82)^(x83==x84));

	if (t19 != 106) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	static uint64_t x86 = UINT64_MAX;
	volatile int16_t x87 = -1;
	int16_t x88 = INT16_MIN;
	static volatile uint64_t t20 = 1511540564LLU;

	t20 = ((x85%x86)^(x87==x88));

	if (t20 != 255LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x90 = UINT16_MAX;
	int64_t x91 = INT64_MIN;
	uint64_t t21 = 27787937716154LLU;

	t21 = ((x89%x90)^(x91==x92));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x93 = 4541U;
	int32_t x94 = 1722480;
	uint8_t x95 = 114U;
	static uint8_t x96 = UINT8_MAX;
	int32_t t22 = 414;

	t22 = ((x93%x94)^(x95==x96));

	if (t22 != 4541) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MAX;
	int8_t x98 = -16;
	volatile int16_t x99 = INT16_MIN;
	uint16_t x100 = UINT16_MAX;
	int32_t t23 = 123;

	t23 = ((x97%x98)^(x99==x100));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	uint16_t x104 = 15178U;

	t24 = ((x101%x102)^(x103==x104));

	if (t24 != 4458673440LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	static uint16_t x106 = UINT16_MAX;
	uint8_t x107 = 1U;
	volatile uint8_t x108 = 59U;

	t25 = ((x105%x106)^(x107==x108));

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MIN;
	int64_t x111 = 6350482LL;
	int16_t x112 = 1;
	volatile int32_t t26 = -26;

	t26 = ((x109%x110)^(x111==x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x113 = 154401952U;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = INT32_MAX;
	int8_t x116 = INT8_MAX;
	uint32_t t27 = 224781073U;

	t27 = ((x113%x114)^(x115==x116));

	if (t27 != 217U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	uint16_t x118 = UINT16_MAX;
	uint8_t x119 = UINT8_MAX;
	static uint32_t x120 = UINT32_MAX;
	volatile int32_t t28 = 1;

	t28 = ((x117%x118)^(x119==x120));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	static uint16_t x123 = 5958U;

	t29 = ((x121%x122)^(x123==x124));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -1;
	static int32_t x127 = -48218;
	int16_t x128 = -1;
	volatile int32_t t30 = -63120;

	t30 = ((x125%x126)^(x127==x128));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = -1;
	int16_t x130 = 8;
	int32_t x131 = -1;
	static int32_t x132 = INT32_MIN;

	t31 = ((x129%x130)^(x131==x132));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MIN;
	uint64_t x136 = UINT64_MAX;

	t32 = ((x133%x134)^(x135==x136));

	if (t32 != 32767U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	static volatile int8_t x138 = 11;
	static int32_t x139 = 15302;
	int32_t x140 = 877523;
	volatile uint32_t t33 = 1926591U;

	t33 = ((x137%x138)^(x139==x140));

	if (t33 != 3U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x142 = INT64_MAX;
	int64_t x144 = -1LL;
	static uint64_t t34 = 204894LLU;

	t34 = ((x141%x142)^(x143==x144));

	if (t34 != 689129652433470LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 3U;
	int16_t x146 = -313;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = UINT64_MAX;
	static volatile int32_t t35 = -175541501;

	t35 = ((x145%x146)^(x147==x148));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int32_t t36 = 7;

	t36 = ((x149%x150)^(x151==x152));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = INT32_MAX;
	static uint64_t x155 = UINT64_MAX;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t37 = 617052;

	t37 = ((x153%x154)^(x155==x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int16_t x158 = INT16_MIN;
	uint64_t x159 = 1LLU;
	uint64_t x160 = UINT64_MAX;
	uint64_t t38 = 71276705071541871LLU;

	t38 = ((x157%x158)^(x159==x160));

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -26;
	int8_t x162 = INT8_MAX;
	int32_t x163 = -1397979;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = 5665400;

	t39 = ((x161%x162)^(x163==x164));

	if (t39 != -26) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MAX;
	int64_t x166 = INT64_MAX;
	int8_t x167 = 62;
	int16_t x168 = -1;
	volatile int64_t t40 = 31799155520925904LL;

	t40 = ((x165%x166)^(x167==x168));

	if (t40 != 32767LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x170 = UINT64_MAX;
	static int16_t x171 = INT16_MIN;
	volatile uint64_t t41 = 912698LLU;

	t41 = ((x169%x170)^(x171==x172));

	if (t41 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = 61;
	int32_t x174 = INT32_MAX;
	int16_t x176 = -6;
	volatile int32_t t42 = -4;

	t42 = ((x173%x174)^(x175==x176));

	if (t42 != 61) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 14578U;
	uint16_t x178 = UINT16_MAX;
	volatile uint16_t x179 = 623U;
	volatile int64_t x180 = -215695056559LL;
	volatile int32_t t43 = 268;

	t43 = ((x177%x178)^(x179==x180));

	if (t43 != 14578) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	static uint16_t x183 = 98U;
	int16_t x184 = -2173;
	volatile int32_t t44 = -424;

	t44 = ((x181%x182)^(x183==x184));

	if (t44 != -3412) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 11104279263LLU;
	int8_t x187 = INT8_MIN;
	uint64_t t45 = 70611327LLU;

	t45 = ((x185%x186)^(x187==x188));

	if (t45 != 95LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = INT8_MAX;
	static volatile int64_t x190 = INT64_MAX;
	static int64_t x191 = INT64_MIN;
	volatile uint64_t x192 = UINT64_MAX;
	int64_t t46 = 1463842LL;

	t46 = ((x189%x190)^(x191==x192));

	if (t46 != 127LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 11633557831736037LLU;
	uint32_t x194 = UINT32_MAX;
	volatile int32_t x195 = INT32_MIN;
	static int64_t x196 = 528463921021008LL;

	t47 = ((x193%x194)^(x195==x196));

	if (t47 != 3258068877LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = 213989748LL;
	int64_t x198 = 123200203LL;
	volatile uint32_t x199 = 221492899U;
	uint64_t x200 = UINT64_MAX;

	t48 = ((x197%x198)^(x199==x200));

	if (t48 != 90789545LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = INT8_MIN;
	volatile int16_t x203 = INT16_MIN;
	uint16_t x204 = 951U;
	volatile int64_t t49 = -1439038284313648LL;

	t49 = ((x201%x202)^(x203==x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -138513;
	int32_t x206 = INT32_MIN;
	int16_t x207 = -130;
	int16_t x208 = -1;
	int32_t t50 = 2372;

	t50 = ((x205%x206)^(x207==x208));

	if (t50 != -138513) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x210 = 22;
	int64_t x211 = INT64_MIN;
	uint64_t x212 = 177LLU;
	volatile int64_t t51 = 269721108549497423LL;

	t51 = ((x209%x210)^(x211==x212));

	if (t51 != -8LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = 0LL;
	volatile uint32_t x214 = UINT32_MAX;
	static int32_t x216 = -1;

	t52 = ((x213%x214)^(x215==x216));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x218 = -1;
	int8_t x220 = 3;
	volatile int32_t t53 = 15148233;

	t53 = ((x217%x218)^(x219==x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x226 = INT32_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t54 = 37;

	t54 = ((x225%x226)^(x227==x228));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = 11U;
	volatile int16_t x230 = 34;
	int32_t t55 = 0;

	t55 = ((x229%x230)^(x231==x232));

	if (t55 != 11) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x234 = -1;
	static uint64_t x235 = UINT64_MAX;
	static int8_t x236 = INT8_MIN;
	int64_t t56 = -4296099874219LL;

	t56 = ((x233%x234)^(x235==x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = 38294289315LLU;
	int32_t x240 = -1;
	uint64_t t57 = 2037140014428LLU;

	t57 = ((x237%x238)^(x239==x240));

	if (t57 != 38294289314LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = 6U;
	uint64_t x242 = 4LLU;
	static int64_t x244 = INT64_MIN;
	uint64_t t58 = 117643LLU;

	t58 = ((x241%x242)^(x243==x244));

	if (t58 != 2LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x245 = -1LL;
	volatile int8_t x246 = -1;
	uint32_t x247 = 3U;
	uint64_t x248 = 44198LLU;
	static volatile int64_t t59 = 188647648LL;

	t59 = ((x245%x246)^(x247==x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 849673550LLU;

	t60 = ((x249%x250)^(x251==x252));

	if (t60 != 849673550LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x253 = 2893U;
	volatile int16_t x254 = 7;
	volatile int64_t x255 = INT64_MIN;
	int64_t x256 = 24005237050LL;
	static volatile int32_t t61 = 244460;

	t61 = ((x253%x254)^(x255==x256));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	int64_t x259 = INT64_MAX;
	static int64_t x260 = 334LL;
	int32_t t62 = 7;

	t62 = ((x257%x258)^(x259==x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x261 = UINT32_MAX;
	uint8_t x263 = 0U;
	static int32_t x264 = 65466320;
	uint32_t t63 = 20876U;

	t63 = ((x261%x262)^(x263==x264));

	if (t63 != 2U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x265 = 12821U;
	uint32_t x266 = UINT32_MAX;
	static int8_t x267 = INT8_MIN;
	volatile uint8_t x268 = 3U;

	t64 = ((x265%x266)^(x267==x268));

	if (t64 != 12821U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 125681259137083LLU;
	uint32_t x270 = 974832U;
	volatile int32_t x271 = INT32_MIN;
	uint64_t x272 = UINT64_MAX;

	t65 = ((x269%x270)^(x271==x272));

	if (t65 != 466843LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x273 = INT16_MAX;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = -5;
	uint16_t x276 = UINT16_MAX;
	uint32_t t66 = 188U;

	t66 = ((x273%x274)^(x275==x276));

	if (t66 != 32767U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = 1312918972417LLU;
	static int32_t x278 = -1;
	int32_t x280 = INT32_MAX;
	static volatile uint64_t t67 = 498521268LLU;

	t67 = ((x277%x278)^(x279==x280));

	if (t67 != 1312918972417LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	static int64_t x284 = INT64_MAX;

	t68 = ((x281%x282)^(x283==x284));

	if (t68 != -4) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = 5U;
	volatile uint16_t x287 = UINT16_MAX;
	int64_t x288 = INT64_MIN;
	static uint32_t t69 = 61825U;

	t69 = ((x285%x286)^(x287==x288));

	if (t69 != 5U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x293 = INT32_MIN;
	int32_t x294 = -12;
	volatile int16_t x295 = INT16_MAX;
	int8_t x296 = -1;
	static volatile int32_t t70 = 1;

	t70 = ((x293%x294)^(x295==x296));

	if (t70 != -8) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = 3554;
	int32_t t71 = -118;

	t71 = ((x297%x298)^(x299==x300));

	if (t71 != 16) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x302 = 945471462853LL;
	static volatile int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MIN;

	t72 = ((x301%x302)^(x303==x304));

	if (t72 != -93212962113LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MAX;
	int32_t t73 = -4936;

	t73 = ((x305%x306)^(x307==x308));

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = -29;
	uint16_t x310 = UINT16_MAX;
	int16_t x311 = 1823;
	int32_t t74 = -1061210;

	t74 = ((x309%x310)^(x311==x312));

	if (t74 != -29) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MAX;
	uint64_t x314 = 20953LLU;
	volatile int32_t x315 = 5924;
	uint64_t t75 = 94912790164683432LLU;

	t75 = ((x313%x314)^(x315==x316));

	if (t75 != 10677LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x317 = INT16_MIN;
	volatile int64_t x318 = INT64_MAX;
	volatile int16_t x319 = 63;
	static volatile int64_t t76 = -25701432LL;

	t76 = ((x317%x318)^(x319==x320));

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x321 = UINT16_MAX;
	int16_t x322 = INT16_MIN;
	uint32_t x324 = UINT32_MAX;
	int32_t t77 = -37;

	t77 = ((x321%x322)^(x323==x324));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MIN;
	int8_t x327 = 4;
	int32_t x328 = INT32_MIN;

	t78 = ((x325%x326)^(x327==x328));

	if (t78 != 32767LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = -81;
	volatile int8_t x331 = INT8_MIN;
	int32_t t79 = 3062;

	t79 = ((x329%x330)^(x331==x332));

	if (t79 != -81) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = 0U;
	uint8_t x334 = 96U;
	volatile int8_t x335 = -28;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t80 = -15829;

	t80 = ((x333%x334)^(x335==x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = 7357087897155031123LLU;
	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MAX;
	uint32_t x344 = 29034749U;
	static volatile uint64_t t81 = 2LLU;

	t81 = ((x341%x342)^(x343==x344));

	if (t81 != 7357087897155031123LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = -1304078329124LL;
	volatile uint16_t x346 = 12U;
	static int32_t x347 = INT32_MIN;
	volatile int16_t x348 = INT16_MIN;
	int64_t t82 = 417439LL;

	t82 = ((x345%x346)^(x347==x348));

	if (t82 != -8LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = 2542;
	int16_t x351 = INT16_MIN;
	uint16_t x352 = 0U;
	int64_t t83 = 99374760916054149LL;

	t83 = ((x349%x350)^(x351==x352));

	if (t83 != 2542LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MIN;
	static uint32_t x354 = 2567U;
	volatile int16_t x355 = INT16_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile int64_t t84 = 456372114LL;

	t84 = ((x353%x354)^(x355==x356));

	if (t84 != -1216LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x358 = INT32_MIN;
	static uint64_t x359 = 6678127212492LLU;
	int32_t x360 = INT32_MIN;

	t85 = ((x357%x358)^(x359==x360));

	if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 12U;
	static int32_t x362 = INT32_MAX;
	uint16_t x363 = 107U;
	int32_t t86 = 7820569;

	t86 = ((x361%x362)^(x363==x364));

	if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = -6055;
	volatile int32_t x367 = INT32_MAX;
	static int8_t x368 = INT8_MIN;
	int32_t t87 = 44280;

	t87 = ((x365%x366)^(x367==x368));

	if (t87 != -6055) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = 1LLU;
	int16_t x371 = 287;
	int8_t x372 = INT8_MIN;
	uint64_t t88 = 42003LLU;

	t88 = ((x369%x370)^(x371==x372));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = -47;
	static int16_t x374 = -10462;
	int32_t x376 = -1;

	t89 = ((x373%x374)^(x375==x376));

	if (t89 != -47) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	static int16_t x378 = INT16_MIN;
	volatile int32_t x379 = -1;
	volatile int64_t t90 = -5706686166395068LL;

	t90 = ((x377%x378)^(x379==x380));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x381 = INT64_MAX;
	int8_t x383 = -1;
	volatile int64_t t91 = -48405948338LL;

	t91 = ((x381%x382)^(x383==x384));

	if (t91 != 7LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x385 = -539391;
	static volatile int32_t x386 = INT32_MIN;
	volatile int16_t x388 = 14598;
	int32_t t92 = 72175;

	t92 = ((x385%x386)^(x387==x388));

	if (t92 != -539391) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x389 = 128536570U;
	static uint32_t x391 = UINT32_MAX;
	int8_t x392 = INT8_MIN;
	volatile uint32_t t93 = 16959692U;

	t93 = ((x389%x390)^(x391==x392));

	if (t93 != 128536570U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = INT8_MIN;
	volatile int16_t x394 = INT16_MIN;
	int32_t t94 = 405599937;

	t94 = ((x393%x394)^(x395==x396));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = 4;
	static uint16_t x398 = 2U;
	int8_t x399 = 1;
	int8_t x400 = INT8_MIN;
	static int32_t t95 = -468574016;

	t95 = ((x397%x398)^(x399==x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	volatile int64_t x403 = INT64_MIN;
	volatile uint64_t x404 = 6854LLU;
	volatile uint64_t t96 = 809749105178LLU;

	t96 = ((x401%x402)^(x403==x404));

	if (t96 != 680544927872994590LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x405 = UINT16_MAX;
	volatile int32_t x406 = -1;
	static uint32_t x408 = 24896U;

	t97 = ((x405%x406)^(x407==x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x410 = 501384573;
	uint32_t x411 = 58964U;
	static volatile uint8_t x412 = 84U;
	static volatile int32_t t98 = -980417207;

	t98 = ((x409%x410)^(x411==x412));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 9U;
	volatile int64_t x414 = 3047803934882504311LL;
	uint32_t x415 = UINT32_MAX;
	int32_t x416 = INT32_MIN;
	int64_t t99 = 889644651995981LL;

	t99 = ((x413%x414)^(x415==x416));

	if (t99 != 9LL) { NG(); } else { ; }
	
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

