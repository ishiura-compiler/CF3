#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MAX;
uint8_t x12 = UINT8_MAX;
uint64_t x13 = 535446203134LLU;
int32_t x19 = INT32_MAX;
int32_t x20 = -1;
static volatile int32_t x23 = INT32_MIN;
volatile int64_t t5 = -46000602LL;
volatile int32_t t7 = INT32_MAX;
int64_t t8 = INT64_MAX;
int8_t x38 = INT8_MIN;
uint64_t x42 = 891167861760223232LLU;
static int32_t x44 = INT32_MIN;
uint16_t x45 = 58U;
int8_t x47 = -1;
uint16_t x48 = 3U;
int32_t x51 = 123537;
int32_t t14 = -3;
int32_t t15 = -5;
int32_t x69 = 7882561;
int8_t x70 = INT8_MIN;
volatile uint32_t t17 = 54904U;
uint64_t x77 = UINT64_MAX;
int8_t x78 = INT8_MIN;
static uint32_t x79 = 15410741U;
volatile uint64_t t21 = 493951927LLU;
uint64_t x90 = 12LLU;
static uint8_t x100 = 4U;
int32_t t24 = 793;
uint64_t x103 = 128561262593LLU;
int16_t x107 = -1;
volatile uint64_t x111 = 1300LLU;
uint8_t x119 = UINT8_MAX;
uint8_t x121 = UINT8_MAX;
static int8_t x122 = 35;
uint32_t x125 = UINT32_MAX;
static int8_t x132 = INT8_MIN;
volatile int32_t t32 = 3;
uint32_t x139 = 751296279U;
volatile uint32_t t34 = UINT32_MAX;
static uint32_t x144 = UINT32_MAX;
volatile int32_t x147 = -1;
volatile uint16_t x150 = UINT16_MAX;
int64_t x156 = INT64_MAX;
volatile int32_t x158 = -1;
int32_t t40 = -35;
static int8_t x165 = INT8_MIN;
int16_t x167 = -1;
static int32_t x176 = -1;
int64_t x182 = INT64_MIN;
volatile uint16_t x183 = UINT16_MAX;
uint8_t x188 = 0U;
int16_t x196 = INT16_MIN;
int32_t x200 = INT32_MAX;
volatile int32_t t49 = INT32_MAX;
static volatile int16_t x207 = INT16_MAX;
volatile int32_t t51 = 19686;
int8_t x213 = -4;
int8_t x215 = -1;
int16_t x219 = 0;
uint64_t x221 = UINT64_MAX;
static volatile int32_t t56 = 5;
uint64_t x229 = 568198621LLU;
int8_t x230 = INT8_MIN;
static int32_t t58 = 146;
static int32_t x246 = INT32_MIN;
int32_t x251 = -336455;
volatile uint8_t x255 = 7U;
volatile int16_t x259 = -757;
volatile int16_t x265 = INT16_MIN;
int64_t x269 = 42966708733LL;
volatile int64_t t67 = -12745LL;
volatile int32_t t68 = INT32_MAX;
static int64_t x281 = 1182172808104896LL;
int64_t t70 = 766259095838855002LL;
int16_t x289 = INT16_MAX;
int16_t x290 = INT16_MIN;
volatile int64_t t72 = 57692329679002LL;
uint32_t x294 = 7543U;
int32_t x295 = INT32_MIN;
int64_t x302 = INT64_MAX;
int64_t x303 = INT64_MIN;
volatile int32_t x306 = INT32_MIN;
int8_t x320 = INT8_MAX;
int32_t x323 = INT32_MIN;
static uint32_t x326 = 407758U;
uint64_t x336 = 9931LLU;
int8_t x337 = 0;
volatile int64_t t85 = INT64_MIN;
static int16_t x354 = INT16_MIN;
int32_t x355 = -1;
uint64_t x356 = 69692LLU;
volatile uint64_t x368 = 3603LLU;
volatile uint64_t t91 = 568195729414LLU;
uint8_t x369 = UINT8_MAX;
int32_t t92 = 207;
static int16_t x374 = INT16_MIN;
volatile int32_t x375 = -1;
int32_t x376 = -58054;
uint16_t x379 = UINT16_MAX;
static volatile int16_t x383 = INT16_MIN;
int32_t t96 = 8384918;
volatile int64_t x393 = INT64_MAX;
uint8_t x395 = UINT8_MAX;
int64_t x399 = -1LL;
volatile int8_t x400 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = 11U;
	static int16_t x3 = INT16_MIN;
	int32_t x4 = 3;
	volatile int32_t t0 = -3192140;

	t0 = (((x1==x2)<=x3)|x4);

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	int8_t x6 = 11;
	int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 55354312;

	t1 = (((x5==x6)<=x7)|x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 4;
	volatile uint16_t x10 = 1542U;
	static int32_t t2 = -17714;

	t2 = (((x9==x10)<=x11)|x12);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x14 = -22349640679622LL;
	static uint32_t x15 = 814036U;
	static volatile int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -1061888919;

	t3 = (((x13==x14)<=x15)|x16);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 5U;
	int8_t x18 = -2;
	int32_t t4 = -2321189;

	t4 = (((x17==x18)<=x19)|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1U;
	int64_t x22 = INT64_MAX;
	int64_t x24 = 129LL;

	t5 = (((x21==x22)<=x23)|x24);

	if (t5 != 129LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 5608055228412LL;
	static uint8_t x26 = 0U;
	volatile int16_t x27 = INT16_MIN;
	uint16_t x28 = 11898U;
	volatile int32_t t6 = 94531733;

	t6 = (((x25==x26)<=x27)|x28);

	if (t6 != 11898) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = 2304U;
	int8_t x30 = -2;
	static int16_t x31 = INT16_MIN;
	static volatile int32_t x32 = INT32_MAX;

	t7 = (((x29==x30)<=x31)|x32);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = 0;
	int8_t x35 = INT8_MAX;
	int64_t x36 = INT64_MAX;

	t8 = (((x33==x34)<=x35)|x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 503917748391906LL;
	uint32_t x39 = 14U;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -216210285;

	t9 = (((x37==x38)<=x39)|x40);

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x41 = UINT32_MAX;
	int64_t x43 = INT64_MIN;
	volatile int32_t t10 = INT32_MIN;

	t10 = (((x41==x42)<=x43)|x44);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = INT64_MIN;
	int32_t t11 = -14884;

	t11 = (((x45==x46)<=x47)|x48);

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile int32_t x50 = INT32_MIN;
	int32_t x52 = INT32_MAX;
	static int32_t t12 = INT32_MAX;

	t12 = (((x49==x50)<=x51)|x52);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	static uint32_t x54 = 9U;
	int64_t x55 = INT64_MIN;
	volatile int32_t x56 = 7363929;
	int32_t t13 = 4859;

	t13 = (((x53==x54)<=x55)|x56);

	if (t13 != 7363929) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int64_t x58 = 52000031408739930LL;
	uint8_t x59 = UINT8_MAX;
	uint16_t x60 = 8625U;

	t14 = (((x57==x58)<=x59)|x60);

	if (t14 != 8625) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int8_t x62 = -1;
	uint8_t x63 = 33U;
	int16_t x64 = INT16_MIN;

	t15 = (((x61==x62)<=x63)|x64);

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	static int32_t x66 = INT32_MIN;
	uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MIN;
	static int64_t t16 = 436923414630409963LL;

	t16 = (((x65==x66)<=x67)|x68);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = 1370738503827309146LL;
	uint32_t x72 = 861105U;

	t17 = (((x69==x70)<=x71)|x72);

	if (t17 != 861105U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 18U;
	static uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MAX;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 74;

	t18 = (((x73==x74)<=x75)|x76);

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = -31826;

	t19 = (((x77==x78)<=x79)|x80);

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 1970076491LLU;
	int8_t x82 = INT8_MIN;
	volatile int16_t x83 = -28;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = -56;

	t20 = (((x81==x82)<=x83)|x84);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	int8_t x87 = 14;
	uint64_t x88 = 969LLU;

	t21 = (((x85==x86)<=x87)|x88);

	if (t21 != 969LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 2U;
	uint16_t x91 = UINT16_MAX;
	volatile int8_t x92 = INT8_MIN;
	int32_t t22 = -565756001;

	t22 = (((x89==x90)<=x91)|x92);

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int8_t x94 = 1;
	uint32_t x95 = UINT32_MAX;
	uint8_t x96 = UINT8_MAX;
	int32_t t23 = 3231863;

	t23 = (((x93==x94)<=x95)|x96);

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint8_t x98 = 26U;
	int64_t x99 = 214LL;

	t24 = (((x97==x98)<=x99)|x100);

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	static uint16_t x102 = 12U;
	int8_t x104 = -3;
	int32_t t25 = -174;

	t25 = (((x101==x102)<=x103)|x104);

	if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 432U;
	static int16_t x106 = INT16_MAX;
	int16_t x108 = -544;
	int32_t t26 = 218;

	t26 = (((x105==x106)<=x107)|x108);

	if (t26 != -544) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -11913;
	int8_t x110 = INT8_MAX;
	int8_t x112 = -1;
	static int32_t t27 = -69546;

	t27 = (((x109==x110)<=x111)|x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 42U;
	static int64_t x114 = INT64_MIN;
	int16_t x115 = 3940;
	int16_t x116 = -206;
	int32_t t28 = -13839;

	t28 = (((x113==x114)<=x115)|x116);

	if (t28 != -205) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 601U;
	uint16_t x118 = 1880U;
	int16_t x120 = INT16_MIN;
	static volatile int32_t t29 = 145;

	t29 = (((x117==x118)<=x119)|x120);

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x123 = -52;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 905222597;

	t30 = (((x121==x122)<=x123)|x124);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MAX;
	int16_t x127 = 16;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 3365024;

	t31 = (((x125==x126)<=x127)|x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MAX;
	int8_t x130 = -1;
	int8_t x131 = INT8_MIN;

	t32 = (((x129==x130)<=x131)|x132);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	volatile uint64_t x134 = UINT64_MAX;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MAX;
	int32_t t33 = 911176;

	t33 = (((x133==x134)<=x135)|x136);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = -2LL;
	uint32_t x140 = UINT32_MAX;

	t34 = (((x137==x138)<=x139)|x140);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 0U;
	uint64_t x142 = UINT64_MAX;
	static int32_t x143 = INT32_MIN;
	uint32_t t35 = UINT32_MAX;

	t35 = (((x141==x142)<=x143)|x144);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -208;
	volatile int16_t x146 = -148;
	int16_t x148 = -1;
	static volatile int32_t t36 = 2;

	t36 = (((x145==x146)<=x147)|x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 4;
	static int64_t x151 = 33383579243153LL;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (((x149==x150)<=x151)|x152);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static volatile int32_t x154 = INT32_MIN;
	uint16_t x155 = 7003U;
	int64_t t38 = INT64_MAX;

	t38 = (((x153==x154)<=x155)|x156);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = 9U;
	volatile int8_t x159 = INT8_MIN;
	volatile uint64_t x160 = UINT64_MAX;
	static uint64_t t39 = UINT64_MAX;

	t39 = (((x157==x158)<=x159)|x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	static int8_t x162 = 23;
	static int16_t x163 = -1;
	static volatile uint16_t x164 = UINT16_MAX;

	t40 = (((x161==x162)<=x163)|x164);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 8U;
	uint64_t x168 = 1200187137LLU;
	volatile uint64_t t41 = 5234LLU;

	t41 = (((x165==x166)<=x167)|x168);

	if (t41 != 1200187137LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = 10187;
	uint32_t x170 = 1008U;
	volatile int16_t x171 = -1;
	static int16_t x172 = -4577;
	int32_t t42 = 15;

	t42 = (((x169==x170)<=x171)|x172);

	if (t42 != -4577) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 4481U;
	int32_t x174 = INT32_MIN;
	int16_t x175 = -1;
	volatile int32_t t43 = -51052;

	t43 = (((x173==x174)<=x175)|x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 606479U;
	static volatile int16_t x178 = 0;
	static int16_t x179 = -1;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -38317201;

	t44 = (((x177==x178)<=x179)|x180);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1840LL;
	uint32_t x184 = 56U;
	volatile uint32_t t45 = 1885U;

	t45 = (((x181==x182)<=x183)|x184);

	if (t45 != 57U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -34;
	int32_t x186 = -1;
	static uint32_t x187 = 3U;
	volatile int32_t t46 = 1053653895;

	t46 = (((x185==x186)<=x187)|x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	static int16_t x190 = INT16_MAX;
	uint8_t x191 = 0U;
	uint8_t x192 = 11U;
	volatile int32_t t47 = 2029;

	t47 = (((x189==x190)<=x191)|x192);

	if (t47 != 11) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint16_t x194 = UINT16_MAX;
	int8_t x195 = 7;
	int32_t t48 = 7477828;

	t48 = (((x193==x194)<=x195)|x196);

	if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 2;
	int8_t x198 = -1;
	uint16_t x199 = 36U;

	t49 = (((x197==x198)<=x199)|x200);

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -1;
	uint64_t x202 = 0LLU;
	uint32_t x203 = UINT32_MAX;
	static volatile int16_t x204 = 160;
	volatile int32_t t50 = 1066794698;

	t50 = (((x201==x202)<=x203)|x204);

	if (t50 != 161) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	static int16_t x206 = INT16_MIN;
	static volatile uint8_t x208 = UINT8_MAX;

	t51 = (((x205==x206)<=x207)|x208);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -48;
	int32_t x210 = INT32_MIN;
	int32_t x211 = INT32_MIN;
	static int64_t x212 = INT64_MAX;
	static volatile int64_t t52 = INT64_MAX;

	t52 = (((x209==x210)<=x211)|x212);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = INT8_MIN;
	int16_t x216 = -1;
	static int32_t t53 = 5283078;

	t53 = (((x213==x214)<=x215)|x216);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MAX;
	uint64_t x220 = 0LLU;
	uint64_t t54 = 514LLU;

	t54 = (((x217==x218)<=x219)|x220);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x222 = UINT32_MAX;
	static uint8_t x223 = UINT8_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -2500242;

	t55 = (((x221==x222)<=x223)|x224);

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int8_t x227 = -1;
	int32_t x228 = 1;

	t56 = (((x225==x226)<=x227)|x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = -71LL;

	t57 = (((x229==x230)<=x231)|x232);

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	volatile uint32_t x234 = 417U;
	uint32_t x235 = 120177U;
	volatile int16_t x236 = 3348;

	t58 = (((x233==x234)<=x235)|x236);

	if (t58 != 3349) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	static int8_t x238 = INT8_MAX;
	uint64_t x239 = 15985LLU;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 167399341;

	t59 = (((x237==x238)<=x239)|x240);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	uint16_t x242 = 100U;
	int64_t x243 = INT64_MIN;
	int8_t x244 = -1;
	int32_t t60 = 14164;

	t60 = (((x241==x242)<=x243)|x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -25576925729LL;
	volatile int32_t x247 = INT32_MAX;
	static volatile int64_t x248 = -4LL;
	volatile int64_t t61 = 8LL;

	t61 = (((x245==x246)<=x247)|x248);

	if (t61 != -3LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = UINT32_MAX;
	uint32_t x250 = 18963U;
	int32_t x252 = -4;
	int32_t t62 = -48319019;

	t62 = (((x249==x250)<=x251)|x252);

	if (t62 != -4) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	int64_t x254 = 915141119292326703LL;
	int64_t x256 = INT64_MAX;
	int64_t t63 = INT64_MAX;

	t63 = (((x253==x254)<=x255)|x256);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MIN;
	uint16_t x260 = 607U;
	static int32_t t64 = -1;

	t64 = (((x257==x258)<=x259)|x260);

	if (t64 != 607) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	uint8_t x262 = UINT8_MAX;
	static int16_t x263 = INT16_MIN;
	int16_t x264 = 16037;
	volatile int32_t t65 = 887494;

	t65 = (((x261==x262)<=x263)|x264);

	if (t65 != 16037) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x266 = -1;
	int32_t x267 = 8019494;
	volatile uint32_t x268 = UINT32_MAX;
	uint32_t t66 = UINT32_MAX;

	t66 = (((x265==x266)<=x267)|x268);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	int64_t x272 = INT64_MIN;

	t67 = (((x269==x270)<=x271)|x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int64_t x274 = -27748463365363LL;
	volatile int32_t x275 = -1;
	int32_t x276 = INT32_MAX;

	t68 = (((x273==x274)<=x275)|x276);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 3U;
	static uint8_t x278 = 68U;
	volatile int8_t x279 = -3;
	uint32_t x280 = 1U;
	volatile uint32_t t69 = 15572U;

	t69 = (((x277==x278)<=x279)|x280);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x282 = INT64_MAX;
	volatile int32_t x283 = -1;
	static volatile int64_t x284 = 50961677LL;

	t70 = (((x281==x282)<=x283)|x284);

	if (t70 != 50961677LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	volatile uint64_t x287 = 2017961823LLU;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 1593061;

	t71 = (((x285==x286)<=x287)|x288);

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x291 = -1;
	int64_t x292 = 36560506985575362LL;

	t72 = (((x289==x290)<=x291)|x292);

	if (t72 != 36560506985575362LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = UINT64_MAX;
	volatile int8_t x296 = INT8_MIN;
	static volatile int32_t t73 = -6465239;

	t73 = (((x293==x294)<=x295)|x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	uint32_t x298 = 10U;
	int32_t x299 = 3793568;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -1544806;

	t74 = (((x297==x298)<=x299)|x300);

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = 1;
	int64_t x304 = INT64_MIN;
	volatile int64_t t75 = INT64_MIN;

	t75 = (((x301==x302)<=x303)|x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = INT32_MIN;
	volatile int64_t x307 = 710365066LL;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = 2167;

	t76 = (((x305==x306)<=x307)|x308);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int32_t x310 = 6884;
	int16_t x311 = INT16_MIN;
	static volatile uint64_t x312 = 3305804678LLU;
	volatile uint64_t t77 = 14LLU;

	t77 = (((x309==x310)<=x311)|x312);

	if (t77 != 3305804678LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 425;
	volatile int16_t x314 = 45;
	uint32_t x315 = 377U;
	int8_t x316 = 1;
	int32_t t78 = -506689;

	t78 = (((x313==x314)<=x315)|x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 2U;
	volatile int16_t x318 = INT16_MAX;
	int16_t x319 = 51;
	static int32_t t79 = -234;

	t79 = (((x317==x318)<=x319)|x320);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 0;
	uint64_t x322 = 369376264843374049LLU;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = INT64_MIN;

	t80 = (((x321==x322)<=x323)|x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 38U;
	int16_t x327 = -5;
	volatile int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 6192638;

	t81 = (((x325==x326)<=x327)|x328);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = -20;
	int64_t x331 = INT64_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -24307618;

	t82 = (((x329==x330)<=x331)|x332);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	uint64_t x334 = 8546LLU;
	int16_t x335 = INT16_MIN;
	volatile uint64_t t83 = 264244139LLU;

	t83 = (((x333==x334)<=x335)|x336);

	if (t83 != 9931LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = UINT16_MAX;
	int32_t t84 = -1;

	t84 = (((x337==x338)<=x339)|x340);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;

	t85 = (((x341==x342)<=x343)|x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MIN;
	static int16_t x347 = -1;
	static int64_t x348 = 11439124568983LL;
	int64_t t86 = -2LL;

	t86 = (((x345==x346)<=x347)|x348);

	if (t86 != 11439124568983LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 1U;
	uint16_t x350 = 8008U;
	uint32_t x351 = 7U;
	int64_t x352 = INT64_MIN;
	volatile int64_t t87 = -272361852LL;

	t87 = (((x349==x350)<=x351)|x352);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	uint64_t t88 = 5485387LLU;

	t88 = (((x353==x354)<=x355)|x356);

	if (t88 != 69692LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 6;
	volatile int64_t x358 = -94977636146128LL;
	static volatile uint8_t x359 = 32U;
	static int64_t x360 = -136LL;
	static int64_t t89 = -72548661318611LL;

	t89 = (((x357==x358)<=x359)|x360);

	if (t89 != -135LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 22;
	int16_t x362 = 60;
	static uint32_t x363 = UINT32_MAX;
	uint16_t x364 = 1U;
	static volatile int32_t t90 = 62;

	t90 = (((x361==x362)<=x363)|x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MAX;
	static volatile uint32_t x367 = 2U;

	t91 = (((x365==x366)<=x367)|x368);

	if (t91 != 3603LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = -26;
	int32_t x371 = -9338;
	int8_t x372 = -1;

	t92 = (((x369==x370)<=x371)|x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 215;
	volatile int32_t t93 = -27;

	t93 = (((x373==x374)<=x375)|x376);

	if (t93 != -58054) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	uint32_t x378 = 47511U;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 5;

	t94 = (((x377==x378)<=x379)|x380);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	static int64_t x382 = INT64_MAX;
	int32_t x384 = INT32_MAX;
	volatile int32_t t95 = INT32_MAX;

	t95 = (((x381==x382)<=x383)|x384);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 483U;
	uint16_t x386 = 88U;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = -3916;

	t96 = (((x385==x386)<=x387)|x388);

	if (t96 != -3915) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 2U;
	int32_t x390 = INT32_MIN;
	uint16_t x391 = 3U;
	uint8_t x392 = 3U;
	volatile int32_t t97 = 74115;

	t97 = (((x389==x390)<=x391)|x392);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = UINT64_MAX;
	int8_t x396 = INT8_MAX;
	int32_t t98 = 119;

	t98 = (((x393==x394)<=x395)|x396);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 3273291575LLU;
	volatile int32_t x398 = -484438261;
	volatile int32_t t99 = 761430;

	t99 = (((x397==x398)<=x399)|x400);

	if (t99 != -128) { NG(); } else { ; }
	
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
