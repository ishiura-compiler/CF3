#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 0LL;
volatile int32_t t0 = -6747;
uint32_t x7 = UINT32_MAX;
static uint8_t x8 = UINT8_MAX;
volatile int32_t t1 = -1685417;
int16_t x10 = -3;
volatile uint64_t x12 = 11740188LLU;
volatile int32_t t3 = -99;
volatile int32_t t4 = -3003787;
uint32_t x30 = 662213U;
uint32_t x33 = 19066U;
int8_t x41 = INT8_MAX;
volatile uint8_t x46 = UINT8_MAX;
static int64_t x51 = -379356544515598LL;
static volatile uint64_t x53 = 1262107LLU;
uint8_t x56 = 28U;
int64_t x58 = -813510224438385LL;
int8_t x62 = INT8_MAX;
volatile int64_t x64 = INT64_MIN;
volatile int32_t x65 = -834062981;
int32_t x67 = 1142586;
static int8_t x73 = -1;
uint32_t x81 = 110315921U;
volatile int32_t t22 = 3673644;
int16_t x95 = -64;
int32_t t23 = 1;
int32_t x101 = INT32_MIN;
int16_t x111 = INT16_MAX;
uint16_t x113 = UINT16_MAX;
volatile int32_t t28 = -683;
static volatile uint32_t x117 = 552U;
int64_t x121 = 1158873443820LL;
volatile int64_t x124 = INT64_MAX;
int32_t x127 = -1;
volatile int16_t x128 = -1;
static int32_t x130 = INT32_MIN;
int32_t x138 = INT32_MIN;
static int32_t t36 = 437366594;
int32_t x158 = INT32_MAX;
static volatile int64_t x162 = 28LL;
volatile int8_t x165 = INT8_MIN;
static int64_t x166 = INT64_MIN;
uint16_t x169 = 2254U;
int16_t x181 = INT16_MAX;
int8_t x190 = INT8_MAX;
static uint64_t x194 = UINT64_MAX;
int16_t x196 = -1;
int64_t x199 = -1LL;
int16_t x200 = INT16_MIN;
volatile int32_t t49 = 39;
uint8_t x203 = 4U;
static int64_t x204 = INT64_MAX;
int32_t x215 = INT32_MIN;
int32_t t53 = -128616218;
int64_t x219 = -1LL;
int16_t x220 = -5;
volatile int32_t t54 = -6;
int8_t x227 = 54;
int32_t x231 = INT32_MAX;
volatile int32_t t57 = 2531;
int8_t x233 = -1;
uint8_t x237 = UINT8_MAX;
volatile int32_t x238 = 12121346;
uint8_t x240 = 81U;
static volatile int32_t t59 = -344884399;
int32_t x242 = INT32_MIN;
static int16_t x260 = -1;
static int64_t x261 = -1LL;
int8_t x262 = INT8_MIN;
static int32_t x284 = -1;
int32_t x288 = INT32_MIN;
volatile int32_t t71 = -428846562;
uint16_t x293 = UINT16_MAX;
uint8_t x304 = 1U;
int16_t x305 = INT16_MIN;
volatile int32_t x307 = INT32_MIN;
volatile int32_t t77 = -6;
static int8_t x313 = -2;
static int8_t x323 = -38;
volatile int32_t t83 = 84938909;
int16_t x338 = INT16_MIN;
int16_t x340 = -1;
int8_t x344 = INT8_MIN;
uint8_t x358 = 18U;
int32_t t88 = 14804;
int8_t x364 = INT8_MIN;
int64_t x365 = INT64_MIN;
uint16_t x368 = UINT16_MAX;
volatile uint8_t x370 = UINT8_MAX;
volatile int32_t t91 = 27898;
uint16_t x374 = 0U;
int32_t x375 = INT32_MIN;
int16_t x376 = 4;
volatile int32_t t93 = 1021142816;
int8_t x383 = INT8_MIN;
static volatile int16_t x384 = INT16_MIN;
int32_t t94 = -225;
int8_t x385 = INT8_MIN;
int64_t x394 = -1LL;
int8_t x400 = INT8_MIN;
int32_t x402 = INT32_MIN;


void f0(void) {
	static uint32_t x2 = 5U;
	uint64_t x3 = UINT64_MAX;
	static uint8_t x4 = 77U;

	t0 = ((x1==(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -12;
	int64_t x6 = INT64_MAX;

	t1 = ((x5==(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	static uint8_t x11 = 1U;
	int32_t t2 = 8;

	t2 = ((x9==(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint8_t x14 = 6U;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = 55U;

	t3 = ((x13==(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	int16_t x18 = -1;
	static volatile int16_t x19 = INT16_MAX;
	int8_t x20 = -48;

	t4 = ((x17==(x18%x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 2169879338337109445LLU;
	uint64_t x22 = 213661373327724905LLU;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = -6;
	int32_t t5 = -3344;

	t5 = ((x21==(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static volatile int32_t x26 = INT32_MAX;
	static uint64_t x27 = UINT64_MAX;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = 229233706;

	t6 = ((x25==(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 1;
	int8_t x31 = INT8_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 42114704;

	t7 = ((x29==(x30%x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	static int8_t x35 = -15;
	int8_t x36 = INT8_MAX;
	static int32_t t8 = 6;

	t8 = ((x33==(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 69830760LLU;
	uint8_t x40 = UINT8_MAX;
	static volatile int32_t t9 = -1;

	t9 = ((x37==(x38%x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x42 = 11551092089LLU;
	int32_t x43 = -18;
	int64_t x44 = -1LL;
	int32_t t10 = -11;

	t10 = ((x41==(x42%x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 338321892623LL;
	int16_t x47 = -1;
	int32_t x48 = 109038834;
	int32_t t11 = 2775794;

	t11 = ((x45==(x46%x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -29343549LL;
	volatile int8_t x50 = 46;
	static int16_t x52 = INT16_MAX;
	static int32_t t12 = 3990568;

	t12 = ((x49==(x50%x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x54 = 1U;
	int8_t x55 = -1;
	int32_t t13 = 2537;

	t13 = ((x53==(x54%x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	volatile uint8_t x59 = 7U;
	int8_t x60 = INT8_MAX;
	static int32_t t14 = 105;

	t14 = ((x57==(x58%x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 25010LLU;
	int64_t x63 = INT64_MAX;
	static int32_t t15 = 57388238;

	t15 = ((x61==(x62%x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	int16_t x68 = -1;
	int32_t t16 = -739229679;

	t16 = ((x65==(x66%x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -31;
	int32_t x70 = INT32_MAX;
	int64_t x71 = -1LL;
	static int64_t x72 = -291LL;
	int32_t t17 = -37117476;

	t17 = ((x69==(x70%x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x74 = 32U;
	int64_t x75 = INT64_MIN;
	static volatile int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = 1;

	t18 = ((x73==(x74%x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = INT8_MIN;
	int16_t x79 = 1;
	static int16_t x80 = -6235;
	volatile int32_t t19 = -18130340;

	t19 = ((x77==(x78%x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = INT16_MIN;
	uint64_t x84 = 2194936LLU;
	int32_t t20 = 1;

	t20 = ((x81==(x82%x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int8_t x86 = INT8_MAX;
	int32_t x87 = INT32_MIN;
	volatile uint16_t x88 = UINT16_MAX;
	int32_t t21 = 1781498;

	t21 = ((x85==(x86%x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 3242022444LL;
	int64_t x90 = INT64_MAX;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = 3;

	t22 = ((x89==(x90%x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 1550U;
	int64_t x94 = -287LL;
	uint16_t x96 = 58U;

	t23 = ((x93==(x94%x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -1;
	int8_t x98 = -1;
	uint8_t x99 = 6U;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = 269;

	t24 = ((x97==(x98%x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MAX;
	static uint64_t x103 = 522362754LLU;
	int8_t x104 = 1;
	int32_t t25 = 4923;

	t25 = ((x101==(x102%x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1848369991990LL;
	int16_t x106 = 1;
	int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -1665659;

	t26 = ((x105==(x106%x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint64_t x110 = 4LLU;
	uint32_t x112 = 2U;
	int32_t t27 = 3;

	t27 = ((x109==(x110%x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 906U;
	int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;

	t28 = ((x113==(x114%x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x118 = 704U;
	int64_t x119 = INT64_MAX;
	int64_t x120 = INT64_MAX;
	static volatile int32_t t29 = -1034360701;

	t29 = ((x117==(x118%x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	int64_t x123 = INT64_MAX;
	static int32_t t30 = 15;

	t30 = ((x121==(x122%x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 598541887U;
	uint64_t x126 = 43428LLU;
	static volatile int32_t t31 = 59661;

	t31 = ((x125==(x126%x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	uint16_t x131 = 37U;
	uint16_t x132 = 4169U;
	volatile int32_t t32 = -26;

	t32 = ((x129==(x130%x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -216240232;
	int32_t x134 = INT32_MIN;
	int8_t x135 = INT8_MIN;
	uint64_t x136 = 170504214LLU;
	static volatile int32_t t33 = -1;

	t33 = ((x133==(x134%x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int8_t x139 = INT8_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t34 = 20;

	t34 = ((x137==(x138%x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 1U;
	static volatile int64_t x142 = INT64_MIN;
	int16_t x143 = 9;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 808925;

	t35 = ((x141==(x142%x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 0;
	volatile int32_t x146 = INT32_MAX;
	uint32_t x147 = 469U;
	uint64_t x148 = 117493403LLU;

	t36 = ((x145==(x146%x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	int8_t x151 = INT8_MAX;
	uint8_t x152 = UINT8_MAX;
	int32_t t37 = -203845;

	t37 = ((x149==(x150%x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 115LLU;
	int8_t x154 = INT8_MAX;
	int8_t x155 = -1;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -527387204;

	t38 = ((x153==(x154%x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 3895U;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = 2271474752107LLU;
	static int32_t t39 = 50656214;

	t39 = ((x157==(x158%x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	uint8_t x163 = UINT8_MAX;
	uint64_t x164 = 5LLU;
	int32_t t40 = -31495;

	t40 = ((x161==(x162%x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x167 = INT32_MIN;
	int64_t x168 = INT64_MAX;
	volatile int32_t t41 = -1;

	t41 = ((x165==(x166%x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MIN;
	int32_t x171 = 1093;
	volatile int16_t x172 = INT16_MAX;
	static volatile int32_t t42 = 20278;

	t42 = ((x169==(x170%x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -13165;
	uint32_t x174 = 1857400U;
	static volatile uint16_t x175 = 16U;
	int32_t x176 = INT32_MAX;
	int32_t t43 = -58657;

	t43 = ((x173==(x174%x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	uint8_t x178 = 2U;
	int32_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = 1051014860;

	t44 = ((x177==(x178%x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x182 = 2671U;
	uint8_t x183 = UINT8_MAX;
	static volatile uint8_t x184 = 16U;
	int32_t t45 = 3406030;

	t45 = ((x181==(x182%x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	int64_t x186 = -1LL;
	static int64_t x187 = -33507222078488338LL;
	uint32_t x188 = UINT32_MAX;
	volatile int32_t t46 = 11;

	t46 = ((x185==(x186%x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 3250152879LLU;
	volatile int8_t x191 = INT8_MAX;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = -1655;

	t47 = ((x189==(x190%x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = INT8_MAX;
	int32_t x195 = 643;
	int32_t t48 = 8102;

	t48 = ((x193==(x194%x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 8;
	int32_t x198 = 274719341;

	t49 = ((x197==(x198%x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MAX;
	uint64_t x202 = 3656518LLU;
	volatile int32_t t50 = 44836;

	t50 = ((x201==(x202%x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	uint8_t x206 = UINT8_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	int8_t x208 = INT8_MIN;
	static int32_t t51 = 1089;

	t51 = ((x205==(x206%x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 24U;
	static volatile uint64_t x210 = UINT64_MAX;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = -1;
	static int32_t t52 = 30303362;

	t52 = ((x209==(x210%x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 0U;
	static int16_t x216 = -1;

	t53 = ((x213==(x214%x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = 191;
	int16_t x218 = -1;

	t54 = ((x217==(x218%x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = INT32_MIN;
	int16_t x222 = -1;
	uint32_t x223 = 521128U;
	uint64_t x224 = UINT64_MAX;
	int32_t t55 = -31231909;

	t55 = ((x221==(x222%x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	uint64_t x226 = 201370229LLU;
	static int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -31;

	t56 = ((x225==(x226%x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = 16035;
	uint8_t x230 = UINT8_MAX;
	static volatile int32_t x232 = INT32_MIN;

	t57 = ((x229==(x230%x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = -1;
	static int8_t x235 = -1;
	static uint8_t x236 = 6U;
	int32_t t58 = -4;

	t58 = ((x233==(x234%x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x239 = UINT8_MAX;

	t59 = ((x237==(x238%x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x241 = 49187U;
	int16_t x243 = 14390;
	int8_t x244 = -1;
	volatile int32_t t60 = -3831;

	t60 = ((x241==(x242%x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 154500629U;
	volatile int32_t x246 = INT32_MAX;
	int8_t x247 = 27;
	uint32_t x248 = 131U;
	int32_t t61 = -60760;

	t61 = ((x245==(x246%x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	int64_t x250 = 344981326229456LL;
	int32_t x251 = -45045396;
	volatile uint32_t x252 = UINT32_MAX;
	volatile int32_t t62 = 1503873;

	t62 = ((x249==(x250%x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 210900276166852782LLU;
	uint64_t x254 = 26980800LLU;
	int8_t x255 = INT8_MAX;
	int32_t x256 = INT32_MAX;
	int32_t t63 = -7234;

	t63 = ((x253==(x254%x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1LL;
	static volatile int8_t x258 = INT8_MIN;
	volatile uint64_t x259 = 220062092948432LLU;
	int32_t t64 = 63;

	t64 = ((x257==(x258%x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = INT16_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	static int32_t t65 = 243206;

	t65 = ((x261==(x262%x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MAX;
	int64_t x267 = -1LL;
	static int16_t x268 = INT16_MIN;
	static int32_t t66 = -903674;

	t66 = ((x265==(x266%x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	static uint32_t x270 = UINT32_MAX;
	int16_t x271 = INT16_MAX;
	int16_t x272 = 301;
	volatile int32_t t67 = -518796;

	t67 = ((x269==(x270%x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int64_t x274 = INT64_MIN;
	uint16_t x275 = UINT16_MAX;
	int32_t x276 = INT32_MIN;
	int32_t t68 = 110339;

	t68 = ((x273==(x274%x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	uint8_t x278 = UINT8_MAX;
	int32_t x279 = INT32_MAX;
	static uint8_t x280 = 45U;
	volatile int32_t t69 = -4540531;

	t69 = ((x277==(x278%x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = -37;
	uint8_t x282 = 49U;
	uint32_t x283 = 28402798U;
	volatile int32_t t70 = 101;

	t70 = ((x281==(x282%x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile uint32_t x286 = UINT32_MAX;
	static int32_t x287 = INT32_MIN;

	t71 = ((x285==(x286%x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int64_t x290 = -1LL;
	int16_t x291 = -1;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t72 = -442674530;

	t72 = ((x289==(x290%x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x294 = 3726U;
	static uint32_t x295 = UINT32_MAX;
	static int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -117;

	t73 = ((x293==(x294%x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	int32_t x298 = INT32_MIN;
	static uint8_t x299 = UINT8_MAX;
	uint64_t x300 = 874421228918597LLU;
	int32_t t74 = 40399;

	t74 = ((x297==(x298%x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile uint64_t x302 = 99191831301998LLU;
	uint64_t x303 = UINT64_MAX;
	volatile int32_t t75 = 2;

	t75 = ((x301==(x302%x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MIN;
	static uint32_t x308 = 8U;
	int32_t t76 = -66805995;

	t76 = ((x305==(x306%x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	int64_t x311 = INT64_MIN;
	volatile int64_t x312 = -1LL;

	t77 = ((x309==(x310%x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	int32_t x315 = INT32_MAX;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t78 = -1904234;

	t78 = ((x313==(x314%x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 14U;
	static int32_t x318 = INT32_MIN;
	static volatile uint8_t x319 = UINT8_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = -823951;

	t79 = ((x317==(x318%x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MAX;
	uint64_t x322 = 116667LLU;
	static int32_t x324 = INT32_MAX;
	volatile int32_t t80 = 14648;

	t80 = ((x321==(x322%x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	uint32_t x326 = 3U;
	static int64_t x327 = -331457453LL;
	static uint16_t x328 = UINT16_MAX;
	static int32_t t81 = 776070;

	t81 = ((x325==(x326%x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = 1428;
	int32_t x330 = -1;
	volatile int64_t x331 = -1LL;
	int64_t x332 = -1LL;
	volatile int32_t t82 = -10158813;

	t82 = ((x329==(x330%x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	volatile int8_t x334 = 36;
	int32_t x335 = 620042506;
	int8_t x336 = -1;

	t83 = ((x333==(x334%x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -1LL;
	volatile uint8_t x339 = 45U;
	int32_t t84 = 916801483;

	t84 = ((x337==(x338%x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	uint8_t x342 = 75U;
	int16_t x343 = -1069;
	volatile int32_t t85 = 8003595;

	t85 = ((x341==(x342%x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = INT16_MIN;
	int32_t x346 = -1;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t x348 = INT32_MAX;
	int32_t t86 = -87997589;

	t86 = ((x345==(x346%x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x353 = 95909U;
	int32_t x354 = INT32_MIN;
	int16_t x355 = -373;
	int8_t x356 = -1;
	int32_t t87 = -165;

	t87 = ((x353==(x354%x355))==x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -1;
	volatile uint16_t x359 = 6U;
	static int16_t x360 = INT16_MAX;

	t88 = ((x357==(x358%x359))==x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x361 = UINT64_MAX;
	volatile uint16_t x362 = UINT16_MAX;
	int32_t x363 = 131439813;
	volatile int32_t t89 = 502;

	t89 = ((x361==(x362%x363))==x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x366 = UINT16_MAX;
	uint64_t x367 = 4472312488734LLU;
	volatile int32_t t90 = 3461;

	t90 = ((x365==(x366%x367))==x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -1;
	int64_t x371 = INT64_MIN;
	volatile int64_t x372 = 63561232565967LL;

	t91 = ((x369==(x370%x371))==x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = INT64_MAX;
	volatile int32_t t92 = 21515;

	t92 = ((x373==(x374%x375))==x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x377 = 0;
	static volatile uint64_t x378 = 2888542724LLU;
	int32_t x379 = INT32_MAX;
	uint64_t x380 = 80628460LLU;

	t93 = ((x377==(x378%x379))==x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = 135085928782LLU;
	int8_t x382 = 35;

	t94 = ((x381==(x382%x383))==x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x386 = UINT16_MAX;
	static uint32_t x387 = 13U;
	int8_t x388 = INT8_MIN;
	int32_t t95 = 13917440;

	t95 = ((x385==(x386%x387))==x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = -1;
	volatile uint32_t x390 = 359U;
	static int16_t x391 = -2;
	volatile int32_t x392 = INT32_MIN;
	volatile int32_t t96 = -47;

	t96 = ((x389==(x390%x391))==x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x393 = INT32_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t97 = 468;

	t97 = ((x393==(x394%x395))==x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = INT8_MIN;
	volatile uint8_t x398 = UINT8_MAX;
	uint32_t x399 = 139262U;
	volatile int32_t t98 = -3201704;

	t98 = ((x397==(x398%x399))==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x401 = INT16_MIN;
	static int32_t x403 = INT32_MIN;
	static int16_t x404 = INT16_MIN;
	volatile int32_t t99 = 83;

	t99 = ((x401==(x402%x403))==x404);

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

