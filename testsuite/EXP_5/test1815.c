#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = -1;
uint64_t x5 = 56026545LLU;
static int64_t x10 = -1LL;
static int32_t x11 = -1954778;
int32_t x13 = -1;
int8_t x14 = INT8_MIN;
static volatile int32_t x15 = 3839;
volatile int16_t x19 = INT16_MIN;
static volatile int32_t t8 = 0;
volatile int32_t x37 = 2;
volatile int16_t x43 = INT16_MIN;
uint8_t x45 = UINT8_MAX;
uint32_t x49 = 266966494U;
uint16_t x54 = 0U;
int32_t x71 = INT32_MAX;
static int16_t x74 = INT16_MIN;
uint32_t x78 = 212U;
static int16_t x85 = INT16_MAX;
int16_t x87 = 14;
int32_t t21 = -52;
int64_t x89 = INT64_MIN;
volatile int32_t t22 = -1379;
int64_t x98 = 993445673854321LL;
int32_t x100 = 68;
static volatile int32_t t26 = -26280;
volatile int16_t x112 = -1931;
uint16_t x114 = 18063U;
static int32_t x116 = -211;
volatile int32_t t28 = 21847;
volatile uint8_t x120 = 51U;
static uint64_t x126 = 105413810LLU;
volatile int32_t t31 = -1253;
volatile int32_t x134 = INT32_MIN;
int32_t x137 = -244;
static volatile uint64_t x140 = UINT64_MAX;
uint8_t x141 = 52U;
int32_t x148 = 125;
static volatile int32_t t36 = -951;
int16_t x149 = INT16_MAX;
int8_t x158 = INT8_MIN;
int8_t x160 = 8;
int64_t x162 = -1LL;
static int32_t t40 = 7458928;
int32_t x170 = -70871437;
int32_t t48 = -2253;
int16_t x198 = -1;
int16_t x200 = INT16_MAX;
int32_t t50 = -91461;
int32_t x211 = -1;
static int64_t x214 = 168LL;
int32_t x215 = -1;
volatile int32_t t53 = 162026103;
static volatile uint32_t x217 = UINT32_MAX;
int32_t t54 = 52548908;
static volatile uint8_t x222 = UINT8_MAX;
static int16_t x225 = 0;
int32_t x226 = INT32_MIN;
int32_t x227 = INT32_MIN;
int8_t x228 = INT8_MIN;
int32_t x234 = INT32_MAX;
uint64_t x237 = 110328LLU;
static uint64_t x243 = UINT64_MAX;
volatile int32_t t61 = 205;
int8_t x249 = INT8_MAX;
volatile int32_t x257 = INT32_MIN;
static volatile int32_t t67 = -183689;
static volatile int32_t x283 = INT32_MAX;
int8_t x288 = -1;
volatile int32_t x289 = INT32_MAX;
uint8_t x291 = 1U;
volatile int32_t x293 = 323668;
static uint8_t x294 = 1U;
uint8_t x295 = 27U;
uint8_t x296 = 113U;
volatile int32_t t73 = -123851;
int32_t t74 = 194502;
int8_t x305 = 0;
int8_t x307 = INT8_MAX;
volatile int64_t x308 = INT64_MIN;
int64_t x311 = -1LL;
int16_t x317 = 3964;
volatile uint16_t x331 = UINT16_MAX;
static uint8_t x338 = 4U;
volatile int8_t x340 = -1;
int32_t t85 = -32054;
int64_t x346 = INT64_MIN;
int32_t t86 = 0;
static int32_t x352 = 121;
int32_t t88 = 57908;
int8_t x359 = INT8_MIN;
int8_t x361 = INT8_MIN;
volatile int32_t x362 = INT32_MIN;
int8_t x370 = INT8_MIN;
int8_t x375 = INT8_MIN;
int16_t x377 = INT16_MIN;
uint8_t x379 = 14U;
uint16_t x398 = 2U;
int8_t x400 = -14;


void f0(void) {
	int8_t x1 = 1;
	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	volatile int32_t t0 = -43500;

	t0 = (x1==((x2&x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int16_t x7 = INT16_MIN;
	int16_t x8 = -1;
	volatile int32_t t1 = -8709607;

	t1 = (x5==((x6&x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int8_t x12 = -2;
	int32_t t2 = 30699361;

	t2 = (x9==((x10&x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = 28896;

	t3 = (x13==((x14&x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 24U;
	uint32_t x18 = 1U;
	int8_t x20 = -8;
	int32_t t4 = 0;

	t4 = (x17==((x18&x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x22 = -1;
	uint32_t x23 = UINT32_MAX;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -4399947;

	t5 = (x21==((x22&x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 3651032584240LLU;
	int32_t x26 = INT32_MIN;
	int16_t x27 = -1;
	static uint8_t x28 = 28U;
	int32_t t6 = -12277;

	t6 = (x25==((x26&x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 1;
	int8_t x30 = INT8_MIN;
	volatile int64_t x31 = -1655038263682753442LL;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -3921;

	t7 = (x29==((x30&x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static volatile int8_t x34 = INT8_MAX;
	volatile int16_t x35 = INT16_MIN;
	volatile uint16_t x36 = 11626U;

	t8 = (x33==((x34&x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MAX;
	uint16_t x39 = 649U;
	int64_t x40 = -1LL;
	static volatile int32_t t9 = 864;

	t9 = (x37==((x38&x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int64_t x42 = INT64_MIN;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 17588;

	t10 = (x41==((x42&x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MAX;
	volatile int32_t x48 = -8;
	volatile int32_t t11 = 0;

	t11 = (x45==((x46&x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	uint8_t x51 = 18U;
	int32_t x52 = -1;
	volatile int32_t t12 = -19689069;

	t12 = (x49==((x50&x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x55 = -29;
	static volatile uint16_t x56 = 6300U;
	volatile int32_t t13 = 4;

	t13 = (x53==((x54&x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 338U;
	uint16_t x58 = 14U;
	int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MAX;
	int32_t t14 = 73;

	t14 = (x57==((x58&x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int32_t x62 = -1;
	int16_t x63 = INT16_MIN;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -723;

	t15 = (x61==((x62&x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	static uint64_t x66 = 3232662016335LLU;
	uint64_t x67 = 3228242495031LLU;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -895950344;

	t16 = (x65==((x66&x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = INT64_MAX;
	int8_t x72 = 0;
	volatile int32_t t17 = -14;

	t17 = (x69==((x70&x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 80U;
	int16_t x75 = 28;
	uint64_t x76 = 7752739532504LLU;
	static int32_t t18 = 57186621;

	t18 = (x73==((x74&x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 1397803961461LL;
	uint16_t x79 = 630U;
	int32_t x80 = -3179527;
	volatile int32_t t19 = -876473208;

	t19 = (x77==((x78&x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint8_t x82 = 0U;
	int16_t x83 = INT16_MAX;
	uint16_t x84 = 0U;
	static int32_t t20 = -1;

	t20 = (x81==((x82&x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -1;
	static volatile int8_t x88 = 6;

	t21 = (x85==((x86&x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x90 = INT64_MAX;
	uint16_t x91 = UINT16_MAX;
	uint8_t x92 = 11U;

	t22 = (x89==((x90&x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 17U;
	uint8_t x94 = UINT8_MAX;
	int16_t x95 = -1;
	int64_t x96 = -1LL;
	volatile int32_t t23 = 15065772;

	t23 = (x93==((x94&x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -58;
	volatile uint64_t x99 = UINT64_MAX;
	int32_t t24 = -7;

	t24 = (x97==((x98&x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 838LLU;
	static int64_t x102 = INT64_MIN;
	int16_t x103 = -1;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = 25;

	t25 = (x101==((x102&x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int64_t x106 = -1LL;
	volatile int16_t x107 = -7;
	uint64_t x108 = 1175617446021103LLU;

	t26 = (x105==((x106&x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 740U;
	int32_t x110 = INT32_MIN;
	int32_t x111 = 576;
	int32_t t27 = -1599691;

	t27 = (x109==((x110&x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 888246U;
	int16_t x115 = INT16_MIN;

	t28 = (x113==((x114&x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int8_t x118 = INT8_MIN;
	uint16_t x119 = UINT16_MAX;
	int32_t t29 = 1796;

	t29 = (x117==((x118&x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 112U;
	uint8_t x122 = 16U;
	uint32_t x123 = 5U;
	int32_t x124 = 25972802;
	int32_t t30 = 12068;

	t30 = (x121==((x122&x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -1LL;
	static volatile int64_t x127 = INT64_MAX;
	int8_t x128 = -1;

	t31 = (x125==((x126&x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	static int32_t x130 = INT32_MAX;
	int16_t x131 = -347;
	uint64_t x132 = 390379575457785965LLU;
	int32_t t32 = 172;

	t32 = (x129==((x130&x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int8_t x135 = INT8_MAX;
	uint16_t x136 = 193U;
	static volatile int32_t t33 = 650176074;

	t33 = (x133==((x134&x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x138 = INT32_MIN;
	int64_t x139 = -1LL;
	volatile int32_t t34 = 5204;

	t34 = (x137==((x138&x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = 19351650LL;
	int32_t x143 = -213736083;
	int16_t x144 = INT16_MAX;
	int32_t t35 = -234333123;

	t35 = (x141==((x142&x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x146 = UINT64_MAX;
	volatile int32_t x147 = 73172663;

	t36 = (x145==((x146&x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x150 = UINT32_MAX;
	uint64_t x151 = 1291LLU;
	uint16_t x152 = 6485U;
	volatile int32_t t37 = 557335;

	t37 = (x149==((x150&x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x154 = 13790106823742LLU;
	static int8_t x155 = -1;
	int8_t x156 = -1;
	volatile int32_t t38 = -25;

	t38 = (x153==((x154&x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x159 = 2U;
	int32_t t39 = -12995;

	t39 = (x157==((x158&x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 254U;
	int64_t x163 = INT64_MAX;
	uint8_t x164 = UINT8_MAX;

	t40 = (x161==((x162&x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MIN;
	static volatile int8_t x168 = -1;
	int32_t t41 = -19;

	t41 = (x165==((x166&x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint8_t x171 = UINT8_MAX;
	static uint8_t x172 = 20U;
	volatile int32_t t42 = -1585271;

	t42 = (x169==((x170&x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 7275828;
	int8_t x174 = 0;
	static uint32_t x175 = UINT32_MAX;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = -15;

	t43 = (x173==((x174&x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x177 = 121U;
	static int32_t x178 = INT32_MIN;
	uint64_t x179 = UINT64_MAX;
	uint64_t x180 = 6284LLU;
	int32_t t44 = 301158;

	t44 = (x177==((x178&x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	uint32_t x182 = 3876019U;
	int16_t x183 = -1;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 46607;

	t45 = (x181==((x182&x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 0;
	int8_t x186 = INT8_MAX;
	static int64_t x187 = INT64_MIN;
	volatile int32_t x188 = 847158;
	int32_t t46 = 15;

	t46 = (x185==((x186&x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = -1;
	int16_t x191 = INT16_MAX;
	static int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -111734;

	t47 = (x189==((x190&x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -109194319412LL;
	int8_t x194 = INT8_MAX;
	static int16_t x195 = -3;
	int64_t x196 = INT64_MAX;

	t48 = (x193==((x194&x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 31LLU;
	int8_t x199 = INT8_MIN;
	volatile int32_t t49 = -475377244;

	t49 = (x197==((x198&x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 516101;
	uint64_t x202 = UINT64_MAX;
	uint8_t x203 = 1U;
	static int16_t x204 = 5203;

	t50 = (x201==((x202&x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MIN;
	int32_t x206 = -1;
	volatile int64_t x207 = -1LL;
	uint32_t x208 = UINT32_MAX;
	static volatile int32_t t51 = 2236;

	t51 = (x205==((x206&x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 0;
	int8_t x210 = INT8_MIN;
	uint8_t x212 = 7U;
	int32_t t52 = 109;

	t52 = (x209==((x210&x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 19987484U;
	static int32_t x216 = INT32_MIN;

	t53 = (x213==((x214&x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = -69;
	volatile int32_t x219 = INT32_MAX;
	int8_t x220 = -1;

	t54 = (x217==((x218&x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -1;
	static int32_t x223 = -167702891;
	uint16_t x224 = 5U;
	int32_t t55 = -33703312;

	t55 = (x221==((x222&x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t t56 = 57;

	t56 = (x225==((x226&x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	static int8_t x230 = INT8_MIN;
	static int16_t x231 = INT16_MAX;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -166;

	t57 = (x229==((x230&x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	int32_t x235 = 90;
	static int32_t x236 = -1;
	volatile int32_t t58 = 44545;

	t58 = (x233==((x234&x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	uint8_t x239 = UINT8_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 7486843;

	t59 = (x237==((x238&x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	int32_t x242 = -1;
	int8_t x244 = -1;
	volatile int32_t t60 = -319902086;

	t60 = (x241==((x242&x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 18;
	volatile int8_t x246 = -1;
	int8_t x247 = 2;
	int16_t x248 = INT16_MIN;

	t61 = (x245==((x246&x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 22U;
	volatile int64_t x251 = INT64_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t62 = 394;

	t62 = (x249==((x250&x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -712;
	int16_t x254 = INT16_MIN;
	static int16_t x255 = -1;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t63 = -80;

	t63 = (x253==((x254&x255)<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x258 = -3381;
	static int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -923;

	t64 = (x257==((x258&x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	uint32_t x262 = 2068578U;
	volatile int64_t x263 = INT64_MAX;
	int16_t x264 = INT16_MAX;
	volatile int32_t t65 = 5780;

	t65 = (x261==((x262&x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MAX;
	int8_t x266 = -1;
	static int16_t x267 = INT16_MAX;
	int64_t x268 = INT64_MIN;
	int32_t t66 = 4114887;

	t66 = (x265==((x266&x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = INT64_MAX;
	int8_t x270 = -1;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = 9U;

	t67 = (x269==((x270&x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int64_t x274 = -1713600126266309LL;
	int8_t x275 = INT8_MAX;
	int64_t x276 = -1841764242914166320LL;
	volatile int32_t t68 = -4055354;

	t68 = (x273==((x274&x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = UINT32_MAX;
	int64_t x278 = -258497LL;
	int16_t x279 = INT16_MIN;
	int16_t x280 = -19;
	int32_t t69 = -21;

	t69 = (x277==((x278&x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	volatile int8_t x282 = INT8_MAX;
	static uint64_t x284 = UINT64_MAX;
	int32_t t70 = 108278050;

	t70 = (x281==((x282&x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x285 = 110;
	int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	volatile int32_t t71 = -731030781;

	t71 = (x285==((x286&x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = 35;
	static int32_t x292 = 399;
	volatile int32_t t72 = -1751;

	t72 = (x289==((x290&x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {


	t73 = (x293==((x294&x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = 1867450U;
	int16_t x299 = INT16_MIN;
	static int8_t x300 = -1;

	t74 = (x297==((x298&x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 982U;
	int8_t x302 = -1;
	int64_t x303 = INT64_MIN;
	int8_t x304 = 6;
	volatile int32_t t75 = -637768657;

	t75 = (x301==((x302&x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = 7;
	static volatile int32_t t76 = -96934204;

	t76 = (x305==((x306&x307)<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	int64_t x312 = -8535672659LL;
	volatile int32_t t77 = -1209;

	t77 = (x309==((x310&x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 13U;
	uint8_t x314 = UINT8_MAX;
	int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t78 = -100347;

	t78 = (x313==((x314&x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = 0;
	int16_t x319 = -192;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = 219;

	t79 = (x317==((x318&x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = UINT32_MAX;
	uint8_t x322 = 29U;
	int8_t x323 = INT8_MIN;
	int8_t x324 = INT8_MIN;
	int32_t t80 = -41312;

	t80 = (x321==((x322&x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 84U;
	volatile int8_t x326 = -1;
	int64_t x327 = -23714LL;
	int32_t x328 = INT32_MIN;
	int32_t t81 = 12508;

	t81 = (x325==((x326&x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	static int8_t x332 = -1;
	int32_t t82 = -14;

	t82 = (x329==((x330&x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int32_t x334 = -1;
	static int64_t x335 = INT64_MIN;
	int8_t x336 = 1;
	int32_t t83 = -10;

	t83 = (x333==((x334&x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = -1LL;
	int64_t x339 = INT64_MIN;
	int32_t t84 = 283;

	t84 = (x337==((x338&x339)<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x341 = INT8_MAX;
	int32_t x342 = -1;
	volatile int16_t x343 = INT16_MIN;
	int8_t x344 = 11;

	t85 = (x341==((x342&x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int8_t x347 = -1;
	int16_t x348 = -1;

	t86 = (x345==((x346&x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = 5952164683542715706LLU;
	volatile int32_t t87 = -971757229;

	t87 = (x349==((x350&x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = -1LL;
	volatile int16_t x355 = 895;
	static int64_t x356 = INT64_MIN;

	t88 = (x353==((x354&x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	static int32_t x360 = INT32_MAX;
	int32_t t89 = 8016;

	t89 = (x357==((x358&x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x363 = INT32_MIN;
	static int64_t x364 = -1LL;
	volatile int32_t t90 = 19298878;

	t90 = (x361==((x362&x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MIN;
	int8_t x366 = 1;
	uint32_t x367 = 3U;
	int64_t x368 = -1LL;
	volatile int32_t t91 = 1267;

	t91 = (x365==((x366&x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -1;
	uint32_t x371 = UINT32_MAX;
	volatile int8_t x372 = 0;
	static volatile int32_t t92 = -359;

	t92 = (x369==((x370&x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -110;
	uint64_t x374 = UINT64_MAX;
	int16_t x376 = -1;
	int32_t t93 = 10676;

	t93 = (x373==((x374&x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = -181;
	int8_t x380 = 1;
	volatile int32_t t94 = 400;

	t94 = (x377==((x378&x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = 4;
	int8_t x382 = INT8_MIN;
	volatile uint8_t x383 = UINT8_MAX;
	static int16_t x384 = 5;
	volatile int32_t t95 = -49;

	t95 = (x381==((x382&x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = -392831495;
	static int32_t x386 = -336;
	static uint32_t x387 = 178U;
	uint32_t x388 = UINT32_MAX;
	int32_t t96 = 1809;

	t96 = (x385==((x386&x387)<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	int64_t x390 = -3254346444LL;
	int8_t x391 = -26;
	int64_t x392 = INT64_MIN;
	int32_t t97 = 4521478;

	t97 = (x389==((x390&x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	static uint64_t x394 = 188LLU;
	int16_t x395 = -1;
	uint8_t x396 = 9U;
	volatile int32_t t98 = -977517290;

	t98 = (x393==((x394&x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x399 = INT8_MIN;
	int32_t t99 = -277521;

	t99 = (x397==((x398&x399)<=x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

