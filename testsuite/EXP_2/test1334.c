#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x2 = INT16_MIN;
int64_t x4 = -3710LL;
static int8_t x7 = -1;
int16_t x8 = INT16_MIN;
int8_t x13 = -1;
volatile uint8_t x16 = UINT8_MAX;
int32_t t3 = -1;
volatile int64_t x20 = INT64_MIN;
volatile int32_t t4 = 0;
volatile int32_t t5 = -3;
static int8_t x27 = 4;
uint64_t x30 = 64155292437512LLU;
int32_t x31 = INT32_MIN;
static int32_t t10 = -40467;
int32_t x47 = -1;
int16_t x48 = INT16_MIN;
int32_t x49 = -1;
static int64_t x51 = INT64_MAX;
int32_t x55 = INT32_MIN;
uint32_t x58 = 4451332U;
int64_t x79 = INT64_MIN;
int32_t x87 = -1;
int32_t t22 = -772129;
int16_t x93 = -3555;
volatile int8_t x96 = -12;
uint16_t x97 = 455U;
int64_t x100 = 811287720832LL;
int32_t x104 = 1;
int32_t t25 = -7964855;
int16_t x105 = 0;
uint32_t x113 = UINT32_MAX;
volatile int64_t x116 = INT64_MIN;
static int32_t t29 = 3;
static int16_t x121 = -386;
int64_t x125 = INT64_MIN;
int32_t t31 = -90081;
int16_t x131 = 3926;
volatile int16_t x134 = -8;
static uint8_t x138 = 73U;
volatile uint64_t x141 = UINT64_MAX;
uint16_t x144 = 1668U;
static int64_t x151 = INT64_MIN;
volatile int32_t t37 = 386956;
int64_t x158 = -3LL;
static uint8_t x167 = UINT8_MAX;
int64_t x168 = INT64_MIN;
uint16_t x171 = 1U;
int32_t t42 = 1250755;
static int16_t x174 = INT16_MIN;
static int32_t x179 = 2;
int32_t t44 = -59;
volatile int32_t x185 = INT32_MAX;
int64_t x193 = INT64_MAX;
static int32_t x200 = INT32_MAX;
uint64_t x201 = 104063214671503LLU;
volatile int16_t x202 = -1;
volatile int16_t x203 = INT16_MAX;
volatile int32_t t50 = -3;
volatile uint8_t x208 = 0U;
int16_t x214 = INT16_MIN;
static int64_t x216 = INT64_MIN;
volatile int32_t t53 = -7111;
int64_t x222 = -1LL;
uint64_t x235 = 2410570LLU;
volatile int8_t x237 = -1;
volatile int16_t x249 = -551;
volatile int32_t t66 = -234712799;
uint64_t x272 = UINT64_MAX;
int8_t x273 = -1;
int64_t x275 = INT64_MAX;
int16_t x276 = INT16_MIN;
volatile int32_t t70 = 40444;
uint8_t x287 = UINT8_MAX;
volatile int32_t x292 = 124923366;
uint8_t x294 = 1U;
static int16_t x296 = -1;
int8_t x301 = INT8_MAX;
int64_t x302 = INT64_MIN;
int32_t t79 = 13;
static int64_t x321 = INT64_MAX;
static int64_t x322 = INT64_MAX;
uint16_t x323 = 13867U;
int32_t t80 = 0;
volatile int32_t t84 = 2676644;
int64_t x343 = INT64_MIN;
static uint32_t x344 = 259481U;
int32_t x349 = INT32_MIN;
static volatile int32_t t88 = 3850219;
int8_t x359 = INT8_MIN;
int16_t x366 = -1;
static volatile int16_t x372 = 14;
int8_t x376 = -31;
static int32_t t93 = 3014328;
static int32_t x387 = -6084533;
int16_t x390 = -206;
int32_t x393 = INT32_MIN;
uint8_t x396 = 2U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x3 = 40;
	static int32_t t0 = 129;

	t0 = ((x1|(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int8_t x6 = -4;
	volatile int32_t t1 = -74;

	t1 = ((x5|(x6==x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 2638214U;
	uint32_t x10 = UINT32_MAX;
	uint16_t x11 = 6561U;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 7;

	t2 = ((x9|(x10==x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 24630373499LLU;
	uint8_t x15 = 10U;

	t3 = ((x13|(x14==x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -102;
	volatile int16_t x18 = INT16_MIN;
	static uint16_t x19 = UINT16_MAX;

	t4 = ((x17|(x18==x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	volatile int32_t x22 = -1;
	static int32_t x23 = INT32_MIN;
	volatile int16_t x24 = 22;

	t5 = ((x21|(x22==x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 3LLU;
	volatile int16_t x26 = INT16_MAX;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 43804700;

	t6 = ((x25|(x26==x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 1;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 13179453;

	t7 = ((x29|(x30==x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static int8_t x34 = INT8_MAX;
	volatile int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -1;

	t8 = ((x33|(x34==x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	static uint32_t x38 = 8768483U;
	uint32_t x39 = UINT32_MAX;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -1822;

	t9 = ((x37|(x38==x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -5;
	int8_t x42 = INT8_MIN;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MIN;

	t10 = ((x41|(x42==x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = UINT16_MAX;
	volatile int32_t t11 = 30;

	t11 = ((x45|(x46==x47))==x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x50 = INT8_MAX;
	uint64_t x52 = 805387580350LLU;
	volatile int32_t t12 = -32846834;

	t12 = ((x49|(x50==x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int16_t x54 = INT16_MIN;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = -7;

	t13 = ((x53|(x54==x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -9728;
	int16_t x59 = INT16_MAX;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = -64049;

	t14 = ((x57|(x58==x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint64_t x62 = 12385729326LLU;
	int64_t x63 = -2199085167LL;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -341001;

	t15 = ((x61|(x62==x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 342919775;
	uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MAX;
	static uint64_t x68 = UINT64_MAX;
	static int32_t t16 = -565;

	t16 = ((x65|(x66==x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	volatile uint16_t x70 = 19U;
	volatile int8_t x71 = INT8_MAX;
	int8_t x72 = 30;
	int32_t t17 = -2772;

	t17 = ((x69|(x70==x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 6246611457052230494LLU;
	int32_t x74 = INT32_MIN;
	int16_t x75 = 767;
	int16_t x76 = 1086;
	int32_t t18 = -1;

	t18 = ((x73|(x74==x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	uint32_t x78 = 6512916U;
	static int64_t x80 = INT64_MIN;
	static int32_t t19 = 52;

	t19 = ((x77|(x78==x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -3;
	int16_t x82 = INT16_MAX;
	uint16_t x83 = 370U;
	uint32_t x84 = 13351399U;
	volatile int32_t t20 = 4;

	t20 = ((x81|(x82==x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	int16_t x86 = -1;
	int8_t x88 = -1;
	volatile int32_t t21 = 1;

	t21 = ((x85|(x86==x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MAX;

	t22 = ((x89|(x90==x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = -20033LL;
	volatile uint16_t x95 = 0U;
	volatile int32_t t23 = -175606149;

	t23 = ((x93|(x94==x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MAX;
	volatile uint64_t x99 = 3691231304011299781LLU;
	volatile int32_t t24 = 7;

	t24 = ((x97|(x98==x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	volatile int8_t x102 = INT8_MAX;
	static uint8_t x103 = UINT8_MAX;

	t25 = ((x101|(x102==x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x106 = INT64_MIN;
	static int64_t x107 = -526LL;
	volatile int16_t x108 = 83;
	volatile int32_t t26 = -3;

	t26 = ((x105|(x106==x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = 16;
	int32_t x110 = -1;
	static int8_t x111 = INT8_MIN;
	int32_t x112 = -11499208;
	volatile int32_t t27 = 9782930;

	t27 = ((x109|(x110==x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = 1779;
	uint64_t x115 = 330752923LLU;
	int32_t t28 = 55;

	t28 = ((x113|(x114==x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = -1;
	uint8_t x119 = 108U;
	volatile int32_t x120 = INT32_MIN;

	t29 = ((x117|(x118==x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	uint16_t x123 = 0U;
	uint8_t x124 = 1U;
	volatile int32_t t30 = -268302233;

	t30 = ((x121|(x122==x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x126 = -1;
	uint8_t x127 = 3U;
	volatile int16_t x128 = INT16_MIN;

	t31 = ((x125|(x126==x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	volatile int64_t x130 = INT64_MIN;
	int64_t x132 = -1LL;
	int32_t t32 = -4602;

	t32 = ((x129|(x130==x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	uint32_t x135 = 17855U;
	uint64_t x136 = 1977894LLU;
	int32_t t33 = -44087457;

	t33 = ((x133|(x134==x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint16_t x139 = 0U;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -2;

	t34 = ((x137|(x138==x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	static int64_t x143 = INT64_MAX;
	int32_t t35 = -1251;

	t35 = ((x141|(x142==x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	volatile int32_t x146 = 1;
	static int16_t x147 = -2031;
	uint32_t x148 = 1181244U;
	static int32_t t36 = -7896;

	t36 = ((x145|(x146==x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x149 = 62U;
	static uint16_t x150 = UINT16_MAX;
	static uint32_t x152 = 1208287890U;

	t37 = ((x149|(x150==x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = INT32_MIN;
	static int64_t x154 = 499LL;
	int16_t x155 = INT16_MIN;
	int8_t x156 = 15;
	volatile int32_t t38 = 12381910;

	t38 = ((x153|(x154==x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int64_t x159 = -6658855880821LL;
	uint64_t x160 = 28LLU;
	int32_t t39 = 1;

	t39 = ((x157|(x158==x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 849418249U;
	int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MAX;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 47683097;

	t40 = ((x161|(x162==x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	uint8_t x166 = 36U;
	int32_t t41 = 2;

	t41 = ((x165|(x166==x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	static int32_t x170 = INT32_MAX;
	int8_t x172 = INT8_MIN;

	t42 = ((x169|(x170==x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	static int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 450;

	t43 = ((x173|(x174==x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	uint32_t x178 = 6505801U;
	volatile int32_t x180 = -1;

	t44 = ((x177|(x178==x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 210080227950138282LLU;
	static volatile int16_t x182 = INT16_MIN;
	static uint16_t x183 = 58U;
	uint64_t x184 = 1045813LLU;
	volatile int32_t t45 = 1963061;

	t45 = ((x181|(x182==x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -23;
	int8_t x187 = 5;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t46 = -2;

	t46 = ((x185|(x186==x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 96U;
	static uint16_t x190 = 8759U;
	uint16_t x191 = UINT16_MAX;
	static int8_t x192 = INT8_MAX;
	int32_t t47 = 163281735;

	t47 = ((x189|(x190==x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MIN;
	uint16_t x195 = 2U;
	static int32_t x196 = INT32_MAX;
	volatile int32_t t48 = -2;

	t48 = ((x193|(x194==x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 12441;
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	int32_t t49 = -2;

	t49 = ((x197|(x198==x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x204 = 1181663;

	t50 = ((x201|(x202==x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = -7;
	static int64_t x206 = -1LL;
	uint64_t x207 = 18028LLU;
	int32_t t51 = -24792;

	t51 = ((x205|(x206==x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	volatile int8_t x210 = -1;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 1;

	t52 = ((x209|(x210==x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	uint16_t x215 = UINT16_MAX;

	t53 = ((x213|(x214==x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x218 = 63;
	int16_t x219 = -1;
	int32_t x220 = -1;
	volatile int32_t t54 = 14546457;

	t54 = ((x217|(x218==x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int64_t x223 = -1147LL;
	uint64_t x224 = 988LLU;
	volatile int32_t t55 = -27095;

	t55 = ((x221|(x222==x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = 0;
	int32_t x226 = INT32_MAX;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = 1628U;
	volatile int32_t t56 = 37;

	t56 = ((x225|(x226==x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x230 = 0U;
	static volatile int32_t x231 = INT32_MIN;
	volatile int16_t x232 = -1;
	int32_t t57 = -8783664;

	t57 = ((x229|(x230==x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 351U;
	int32_t x234 = INT32_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t58 = 115245235;

	t58 = ((x233|(x234==x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MAX;
	uint8_t x239 = 22U;
	static int32_t x240 = 962358;
	volatile int32_t t59 = -71;

	t59 = ((x237|(x238==x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MAX;
	volatile int8_t x243 = 19;
	int8_t x244 = 48;
	int32_t t60 = 115;

	t60 = ((x241|(x242==x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1491;
	static int64_t x246 = INT64_MAX;
	uint32_t x247 = 987399640U;
	volatile int16_t x248 = INT16_MIN;
	int32_t t61 = -842;

	t61 = ((x245|(x246==x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = -3;
	volatile int64_t x251 = INT64_MIN;
	uint16_t x252 = 2525U;
	int32_t t62 = -2;

	t62 = ((x249|(x250==x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	uint32_t x254 = 2U;
	uint8_t x255 = 26U;
	uint16_t x256 = 2U;
	int32_t t63 = -1422;

	t63 = ((x253|(x254==x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	volatile uint32_t x258 = 564647951U;
	static int16_t x259 = INT16_MAX;
	volatile uint32_t x260 = 13U;
	int32_t t64 = 3;

	t64 = ((x257|(x258==x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MAX;
	volatile int32_t t65 = -1;

	t65 = ((x261|(x262==x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int8_t x266 = 26;
	int32_t x267 = 49;
	uint64_t x268 = 320854578398LLU;

	t66 = ((x265|(x266==x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -15653;
	int64_t x270 = 3461501460637792LL;
	int32_t x271 = INT32_MIN;
	volatile int32_t t67 = 5771;

	t67 = ((x269|(x270==x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	static int32_t t68 = 84025422;

	t68 = ((x273|(x274==x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 1U;
	uint8_t x280 = 3U;
	int32_t t69 = 20417;

	t69 = ((x277|(x278==x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MAX;
	uint8_t x282 = 93U;
	int64_t x283 = -1309220113980692LL;
	int8_t x284 = INT8_MIN;

	t70 = ((x281|(x282==x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -45;
	int64_t x286 = -1LL;
	int64_t x288 = -1LL;
	static int32_t t71 = 0;

	t71 = ((x285|(x286==x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	static int16_t x290 = -1;
	uint64_t x291 = 152420LLU;
	volatile int32_t t72 = 263818698;

	t72 = ((x289|(x290==x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	static uint32_t x295 = 862479U;
	volatile int32_t t73 = -96536;

	t73 = ((x293|(x294==x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 0;
	volatile uint64_t x298 = 21448698LLU;
	volatile int64_t x299 = -1LL;
	int16_t x300 = -193;
	static int32_t t74 = 6;

	t74 = ((x297|(x298==x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x303 = 137927U;
	int16_t x304 = 2;
	volatile int32_t t75 = 547;

	t75 = ((x301|(x302==x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x305 = 530617494;
	int16_t x306 = INT16_MIN;
	int8_t x307 = -1;
	int16_t x308 = -5216;
	static int32_t t76 = 42;

	t76 = ((x305|(x306==x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = 1;
	int16_t x310 = INT16_MIN;
	int16_t x311 = -1;
	static int32_t x312 = 62948;
	volatile int32_t t77 = -731;

	t77 = ((x309|(x310==x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x314 = 27411U;
	uint64_t x315 = 66607435LLU;
	uint64_t x316 = 27987264832LLU;
	volatile int32_t t78 = 5254;

	t78 = ((x313|(x314==x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	volatile int64_t x318 = INT64_MAX;
	int16_t x319 = -1;
	int64_t x320 = INT64_MAX;

	t79 = ((x317|(x318==x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x324 = INT8_MAX;

	t80 = ((x321|(x322==x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int32_t x326 = 87531318;
	volatile int32_t x327 = -1587;
	int8_t x328 = -1;
	int32_t t81 = 1;

	t81 = ((x325|(x326==x327))==x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MAX;
	uint16_t x330 = 792U;
	int32_t x331 = -2;
	volatile int64_t x332 = INT64_MIN;
	int32_t t82 = -13330;

	t82 = ((x329|(x330==x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = 7;
	int16_t x334 = 1;
	static volatile uint64_t x335 = 1333273292489LLU;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -1798;

	t83 = ((x333|(x334==x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	volatile int16_t x338 = -1;
	static volatile int8_t x339 = INT8_MIN;
	uint64_t x340 = 242230652LLU;

	t84 = ((x337|(x338==x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 1445;
	static volatile int32_t x342 = 100253;
	volatile int32_t t85 = -8;

	t85 = ((x341|(x342==x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	int16_t x346 = 0;
	volatile int64_t x347 = INT64_MIN;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 62;

	t86 = ((x345|(x346==x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MIN;
	int8_t x351 = -1;
	volatile int32_t x352 = 1;
	int32_t t87 = -10006456;

	t87 = ((x349|(x350==x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	volatile int64_t x354 = -1LL;
	static int64_t x355 = INT64_MIN;
	int64_t x356 = 576051897845134394LL;

	t88 = ((x353|(x354==x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int16_t x358 = -1;
	volatile int16_t x360 = -40;
	int32_t t89 = -5456;

	t89 = ((x357|(x358==x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = UINT8_MAX;
	static int8_t x362 = INT8_MIN;
	uint16_t x363 = UINT16_MAX;
	volatile int64_t x364 = 7LL;
	volatile int32_t t90 = -335289469;

	t90 = ((x361|(x362==x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	static int8_t x367 = 48;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t91 = 51330;

	t91 = ((x365|(x366==x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 3633;
	volatile int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	volatile int32_t t92 = -4138;

	t92 = ((x369|(x370==x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	uint32_t x374 = 117094U;
	int32_t x375 = INT32_MAX;

	t93 = ((x373|(x374==x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = UINT16_MAX;
	uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 810291106LLU;
	volatile int32_t t94 = 1;

	t94 = ((x377|(x378==x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -18;
	volatile int8_t x382 = -1;
	int32_t x383 = INT32_MAX;
	static uint16_t x384 = 40U;
	static volatile int32_t t95 = 7569068;

	t95 = ((x381|(x382==x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	volatile int32_t x386 = 788785949;
	uint16_t x388 = UINT16_MAX;
	int32_t t96 = -479568686;

	t96 = ((x385|(x386==x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	int64_t x391 = -1LL;
	static uint8_t x392 = 5U;
	static int32_t t97 = 404;

	t97 = ((x389|(x390==x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x394 = -182;
	uint16_t x395 = 30U;
	static volatile int32_t t98 = 49;

	t98 = ((x393|(x394==x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 28233698U;
	int64_t x398 = INT64_MIN;
	volatile uint32_t x399 = 10900U;
	int8_t x400 = -22;
	int32_t t99 = -8;

	t99 = ((x397|(x398==x399))==x400);

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

