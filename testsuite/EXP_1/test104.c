#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
volatile uint32_t x10 = 127007U;
int32_t x16 = -1;
int32_t t3 = 569602695;
uint8_t x18 = 60U;
uint8_t x41 = UINT8_MAX;
uint16_t x46 = 108U;
volatile uint64_t x47 = UINT64_MAX;
int16_t x52 = 37;
uint64_t x58 = UINT64_MAX;
volatile uint16_t x64 = 293U;
volatile int16_t x68 = -1;
static uint16_t x78 = UINT16_MAX;
volatile int16_t x80 = INT16_MIN;
uint16_t x82 = 42U;
static int16_t x83 = INT16_MIN;
static uint8_t x84 = 50U;
int32_t t17 = 184;
int32_t x87 = INT32_MIN;
static volatile int32_t t18 = -211092;
int16_t x94 = -1;
static uint16_t x95 = UINT16_MAX;
static volatile int64_t x102 = INT64_MIN;
uint16_t x108 = 32570U;
volatile int32_t t23 = 0;
int32_t x120 = -1;
static volatile uint64_t x121 = UINT64_MAX;
int64_t x128 = INT64_MIN;
int64_t x136 = INT64_MIN;
static int64_t t29 = INT64_MIN;
int64_t x138 = INT64_MIN;
volatile uint32_t t32 = UINT32_MAX;
uint64_t x151 = 1966769475482390013LLU;
uint32_t x167 = 1881491082U;
int16_t x168 = 1876;
int64_t x172 = -1LL;
int8_t x174 = -1;
int32_t t39 = 18990;
int64_t x188 = INT64_MIN;
uint64_t x190 = 1098119613363276LLU;
volatile uint64_t x192 = 192943553461LLU;
volatile int8_t x208 = 5;
uint16_t x218 = 1869U;
int32_t x220 = 791294;
volatile int32_t t50 = 220890;
static int8_t x227 = -44;
volatile int32_t t51 = 1500;
int16_t x229 = INT16_MIN;
volatile int16_t x230 = 7;
int64_t x233 = -138LL;
volatile int32_t t53 = -1592464;
static int64_t x247 = INT64_MIN;
int8_t x264 = INT8_MIN;
int64_t x273 = -48964295LL;
int32_t x278 = INT32_MIN;
uint16_t x280 = 68U;
volatile int32_t t60 = -307;
int32_t x283 = INT32_MIN;
volatile int32_t t62 = -3;
uint32_t x289 = 1620U;
int64_t x295 = -1LL;
volatile int32_t t65 = -822;
uint16_t x304 = UINT16_MAX;
int32_t t68 = 102418712;
static int32_t x316 = -232;
int16_t x319 = 2;
uint16_t x322 = 47U;
static int16_t x323 = INT16_MIN;
int32_t x324 = -23;
volatile int64_t x326 = INT64_MAX;
volatile int32_t x328 = INT32_MIN;
uint64_t x329 = 2471754907803060284LLU;
uint64_t x338 = UINT64_MAX;
static uint32_t x354 = 120719U;
static int16_t x367 = INT16_MIN;
volatile int8_t x368 = 0;
int32_t t79 = 45693;
int16_t x370 = -407;
static int64_t x377 = INT64_MIN;
uint16_t x378 = UINT16_MAX;
int8_t x382 = INT8_MIN;
int32_t x386 = INT32_MIN;
static int64_t t83 = -1016LL;
uint64_t x390 = 6940664LLU;
int32_t t84 = -7;
volatile int64_t t85 = 23953686767LL;
volatile int64_t x407 = 31100949LL;
volatile uint16_t x410 = UINT16_MAX;
int16_t x414 = -1;
int16_t x419 = INT16_MIN;
int32_t x427 = -45693;
uint32_t x430 = 330U;
static int32_t t94 = -1;
uint16_t x435 = 2179U;
volatile int8_t x436 = 0;
uint64_t x440 = UINT64_MAX;
static volatile uint16_t x445 = 6822U;
int16_t x451 = INT16_MAX;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 356651577U;
	volatile uint32_t t0 = 591740273U;

	t0 = (((x1+x2)==x3)^x4);

	if (t0 != 356651577U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = -1170;
	int64_t x7 = INT64_MIN;
	static uint32_t x8 = 7842U;
	uint32_t t1 = 8418884U;

	t1 = (((x5+x6)==x7)^x8);

	if (t1 != 7842U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 1018102;

	t2 = (((x9+x10)==x11)^x12);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int64_t x14 = -1LL;
	static volatile int16_t x15 = 3115;

	t3 = (((x13+x14)==x15)^x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 13210753112463LLU;
	int16_t x19 = -1;
	int32_t x20 = -124260792;
	volatile int32_t t4 = 77819;

	t4 = (((x17+x18)==x19)^x20);

	if (t4 != -124260792) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	volatile uint16_t x30 = 1U;
	volatile int64_t x31 = INT64_MIN;
	int64_t x32 = 2069405549217163LL;
	volatile int64_t t5 = 3859483711303029329LL;

	t5 = (((x29+x30)==x31)^x32);

	if (t5 != 2069405549217163LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x33 = 5999U;
	volatile int64_t x34 = INT64_MIN;
	uint16_t x35 = 5U;
	volatile uint64_t x36 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (((x33+x34)==x35)^x36);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MAX;
	uint32_t x39 = 48426U;
	uint64_t x40 = 5LLU;
	uint64_t t7 = 215716LLU;

	t7 = (((x37+x38)==x39)^x40);

	if (t7 != 5LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x42 = 7925U;
	int16_t x43 = 0;
	volatile int8_t x44 = INT8_MAX;
	int32_t t8 = -39;

	t8 = (((x41+x42)==x43)^x44);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = INT8_MIN;
	uint32_t x48 = UINT32_MAX;
	uint32_t t9 = UINT32_MAX;

	t9 = (((x45+x46)==x47)^x48);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = INT64_MAX;
	uint16_t x51 = UINT16_MAX;
	int32_t t10 = -21;

	t10 = (((x49+x50)==x51)^x52);

	if (t10 != 37) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 1;
	volatile int32_t x54 = 11688859;
	uint32_t x55 = UINT32_MAX;
	static int16_t x56 = -31;
	int32_t t11 = -446;

	t11 = (((x53+x54)==x55)^x56);

	if (t11 != -31) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 12LLU;
	int8_t x59 = 1;
	volatile uint32_t x60 = 21491304U;
	uint32_t t12 = 1U;

	t12 = (((x57+x58)==x59)^x60);

	if (t12 != 21491304U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	uint32_t x62 = 1U;
	static int64_t x63 = INT64_MIN;
	int32_t t13 = -367;

	t13 = (((x61+x62)==x63)^x64);

	if (t13 != 293) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -6;
	static int16_t x66 = 1087;
	int64_t x67 = -122250009246LL;
	static int32_t t14 = 13717;

	t14 = (((x65+x66)==x67)^x68);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = 21123;
	int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	volatile int32_t t15 = -1;

	t15 = (((x73+x74)==x75)^x76);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	static volatile int16_t x79 = 86;
	static int32_t t16 = 324297301;

	t16 = (((x77+x78)==x79)^x80);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;

	t17 = (((x81+x82)==x83)^x84);

	if (t17 != 50) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	int32_t x88 = 25;

	t18 = (((x85+x86)==x87)^x88);

	if (t18 != 25) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -1;
	uint16_t x96 = UINT16_MAX;
	int32_t t19 = -173013856;

	t19 = (((x93+x94)==x95)^x96);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = -1;
	static uint8_t x98 = UINT8_MAX;
	int64_t x99 = 5221326261006LL;
	int32_t x100 = INT32_MIN;
	int32_t t20 = INT32_MIN;

	t20 = (((x97+x98)==x99)^x100);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = 17508162983727LL;
	int8_t x103 = INT8_MIN;
	volatile int8_t x104 = -1;
	static int32_t t21 = -12985;

	t21 = (((x101+x102)==x103)^x104);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = 1;
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MAX;
	static volatile int32_t t22 = 49;

	t22 = (((x105+x106)==x107)^x108);

	if (t22 != 32570) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -1;
	uint8_t x110 = 0U;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = 34U;

	t23 = (((x109+x110)==x111)^x112);

	if (t23 != 34) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x113 = INT64_MAX;
	static int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	int32_t x116 = 590;
	int32_t t24 = -110;

	t24 = (((x113+x114)==x115)^x116);

	if (t24 != 590) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = INT16_MAX;
	static volatile int8_t x118 = INT8_MIN;
	static volatile int64_t x119 = 464329774265790877LL;
	volatile int32_t t25 = 1921946;

	t25 = (((x117+x118)==x119)^x120);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x122 = 30U;
	int32_t x123 = -1;
	int8_t x124 = INT8_MIN;
	volatile int32_t t26 = 1;

	t26 = (((x121+x122)==x123)^x124);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x125 = INT32_MIN;
	uint8_t x126 = 1U;
	static volatile int8_t x127 = INT8_MAX;
	volatile int64_t t27 = INT64_MIN;

	t27 = (((x125+x126)==x127)^x128);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = 19U;
	uint16_t x130 = 2299U;
	int64_t x131 = -1LL;
	int64_t x132 = INT64_MAX;
	static volatile int64_t t28 = INT64_MAX;

	t28 = (((x129+x130)==x131)^x132);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	static int64_t x134 = 3LL;
	static uint16_t x135 = UINT16_MAX;

	t29 = (((x133+x134)==x135)^x136);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 14838;
	static int64_t x139 = -1728LL;
	static uint64_t x140 = 2LLU;
	uint64_t t30 = 11586LLU;

	t30 = (((x137+x138)==x139)^x140);

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x141 = 19462U;
	static uint16_t x142 = 6201U;
	uint16_t x143 = 4U;
	uint16_t x144 = 3U;
	int32_t t31 = 38290;

	t31 = (((x141+x142)==x143)^x144);

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MAX;
	static volatile int64_t x146 = INT64_MIN;
	uint8_t x147 = 0U;
	volatile uint32_t x148 = UINT32_MAX;

	t32 = (((x145+x146)==x147)^x148);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x149 = 4328;
	uint32_t x150 = 9866U;
	int16_t x152 = -1;
	int32_t t33 = 243838;

	t33 = (((x149+x150)==x151)^x152);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 778598U;
	int16_t x154 = INT16_MIN;
	volatile int32_t x155 = 372064;
	static int32_t x156 = 3707;
	int32_t t34 = 3;

	t34 = (((x153+x154)==x155)^x156);

	if (t34 != 3707) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = 6728012377348353486LLU;
	int32_t x158 = -3021082;
	int64_t x159 = INT64_MIN;
	static int16_t x160 = 14947;
	int32_t t35 = -400436500;

	t35 = (((x157+x158)==x159)^x160);

	if (t35 != 14947) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = -1;
	int32_t x162 = -67127;
	int8_t x163 = -1;
	int8_t x164 = -1;
	static int32_t t36 = 2;

	t36 = (((x161+x162)==x163)^x164);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MIN;
	static int32_t t37 = 2156400;

	t37 = (((x165+x166)==x167)^x168);

	if (t37 != 1876) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = 3;
	volatile uint16_t x170 = UINT16_MAX;
	int32_t x171 = -12790;
	int64_t t38 = 21259625908250LL;

	t38 = (((x169+x170)==x171)^x172);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x173 = 1996LLU;
	static uint8_t x175 = 24U;
	int16_t x176 = INT16_MIN;

	t39 = (((x173+x174)==x175)^x176);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x178 = 668280146U;
	int32_t x179 = INT32_MAX;
	uint8_t x180 = 30U;
	volatile int32_t t40 = 1836072;

	t40 = (((x177+x178)==x179)^x180);

	if (t40 != 30) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x181 = 8745;
	volatile int8_t x182 = INT8_MIN;
	static int32_t x183 = 1;
	static uint16_t x184 = 0U;
	int32_t t41 = 15;

	t41 = (((x181+x182)==x183)^x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 31;
	volatile int32_t x186 = 3;
	volatile uint8_t x187 = 0U;
	int64_t t42 = INT64_MIN;

	t42 = (((x185+x186)==x187)^x188);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = 7;
	static uint32_t x191 = 41642U;
	volatile uint64_t t43 = 1950701LLU;

	t43 = (((x189+x190)==x191)^x192);

	if (t43 != 192943553461LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 22U;
	int32_t x194 = INT32_MIN;
	int64_t x195 = -526341901070258207LL;
	static uint16_t x196 = UINT16_MAX;
	volatile int32_t t44 = -1374232;

	t44 = (((x193+x194)==x195)^x196);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -9179606548674LL;
	int16_t x202 = 14965;
	static uint64_t x203 = 1274865383079744LLU;
	volatile uint64_t x204 = UINT64_MAX;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = (((x201+x202)==x203)^x204);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x205 = 30U;
	uint8_t x206 = UINT8_MAX;
	int64_t x207 = -935563816076LL;
	volatile int32_t t46 = -34890223;

	t46 = (((x205+x206)==x207)^x208);

	if (t46 != 5) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x209 = UINT16_MAX;
	volatile uint8_t x210 = 7U;
	int64_t x211 = 662373274LL;
	int8_t x212 = INT8_MIN;
	static int32_t t47 = 66895650;

	t47 = (((x209+x210)==x211)^x212);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = 1801937LL;
	int64_t x214 = -1LL;
	int16_t x215 = -962;
	volatile uint16_t x216 = 512U;
	int32_t t48 = -200651742;

	t48 = (((x213+x214)==x215)^x216);

	if (t48 != 512) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x217 = 112U;
	uint64_t x219 = UINT64_MAX;
	volatile int32_t t49 = -24574;

	t49 = (((x217+x218)==x219)^x220);

	if (t49 != 791294) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = -1;
	int32_t x222 = INT32_MAX;
	int16_t x223 = -1;
	static int8_t x224 = -1;

	t50 = (((x221+x222)==x223)^x224);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	volatile uint8_t x226 = UINT8_MAX;
	int8_t x228 = -1;

	t51 = (((x225+x226)==x227)^x228);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x231 = 30U;
	static uint16_t x232 = 0U;
	volatile int32_t t52 = -217660;

	t52 = (((x229+x230)==x231)^x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x234 = 1;
	int16_t x235 = -153;
	int16_t x236 = INT16_MIN;

	t53 = (((x233+x234)==x235)^x236);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = -1;
	int16_t x238 = INT16_MAX;
	int64_t x239 = -41290020LL;
	volatile int8_t x240 = 1;
	volatile int32_t t54 = -509;

	t54 = (((x237+x238)==x239)^x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = UINT32_MAX;
	volatile int8_t x248 = 37;
	static volatile int32_t t55 = 7;

	t55 = (((x245+x246)==x247)^x248);

	if (t55 != 37) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x249 = 41271840406508239LLU;
	int8_t x250 = INT8_MAX;
	uint16_t x251 = 18U;
	int16_t x252 = 250;
	volatile int32_t t56 = -151;

	t56 = (((x249+x250)==x251)^x252);

	if (t56 != 250) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x261 = -3;
	int32_t x262 = -1;
	int16_t x263 = -4511;
	volatile int32_t t57 = -1582;

	t57 = (((x261+x262)==x263)^x264);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 570U;
	uint16_t x268 = 1U;
	int32_t t58 = -489771139;

	t58 = (((x265+x266)==x267)^x268);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x274 = -1;
	int8_t x275 = -1;
	int64_t x276 = INT64_MAX;
	static int64_t t59 = INT64_MAX;

	t59 = (((x273+x274)==x275)^x276);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = 15;
	int8_t x279 = INT8_MAX;

	t60 = (((x277+x278)==x279)^x280);

	if (t60 != 68) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x281 = INT64_MIN;
	uint64_t x282 = UINT64_MAX;
	static uint64_t x284 = 114972787497059LLU;
	volatile uint64_t t61 = 261633967114717182LLU;

	t61 = (((x281+x282)==x283)^x284);

	if (t61 != 114972787497059LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = INT16_MIN;

	t62 = (((x285+x286)==x287)^x288);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x290 = 6U;
	int8_t x291 = INT8_MAX;
	static int8_t x292 = INT8_MIN;
	int32_t t63 = 198781;

	t63 = (((x289+x290)==x291)^x292);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MAX;
	volatile int16_t x296 = 7;
	int32_t t64 = -1;

	t64 = (((x293+x294)==x295)^x296);

	if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MAX;
	int32_t x299 = -1;
	static int8_t x300 = 39;

	t65 = (((x297+x298)==x299)^x300);

	if (t65 != 39) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	uint16_t x303 = UINT16_MAX;
	volatile int32_t t66 = 1634896;

	t66 = (((x301+x302)==x303)^x304);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = -1;
	volatile uint32_t x306 = UINT32_MAX;
	int16_t x307 = INT16_MAX;
	static int8_t x308 = 1;
	volatile int32_t t67 = 58398833;

	t67 = (((x305+x306)==x307)^x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x309 = 0U;
	int8_t x310 = INT8_MAX;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = -118985047;

	t68 = (((x309+x310)==x311)^x312);

	if (t68 != -118985047) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = -9841;
	uint16_t x314 = 668U;
	volatile uint16_t x315 = 0U;
	volatile int32_t t69 = -3;

	t69 = (((x313+x314)==x315)^x316);

	if (t69 != -232) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	int8_t x320 = -1;
	volatile int32_t t70 = 54317382;

	t70 = (((x317+x318)==x319)^x320);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = UINT16_MAX;
	static volatile int32_t t71 = -92;

	t71 = (((x321+x322)==x323)^x324);

	if (t71 != -23) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x325 = 1744569532713LLU;
	int16_t x327 = INT16_MIN;
	int32_t t72 = INT32_MIN;

	t72 = (((x325+x326)==x327)^x328);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x330 = UINT16_MAX;
	uint16_t x331 = 1230U;
	int64_t x332 = 10002401488LL;
	volatile int64_t t73 = 432523LL;

	t73 = (((x329+x330)==x331)^x332);

	if (t73 != 10002401488LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = -5472;
	volatile int64_t x339 = INT64_MAX;
	uint32_t x340 = 12229U;
	volatile uint32_t t74 = 1739823U;

	t74 = (((x337+x338)==x339)^x340);

	if (t74 != 12229U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = 9831LLU;
	uint32_t x342 = UINT32_MAX;
	uint16_t x343 = UINT16_MAX;
	uint32_t x344 = 347265U;
	uint32_t t75 = 7025U;

	t75 = (((x341+x342)==x343)^x344);

	if (t75 != 347265U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = -1;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	static int32_t t76 = -272666;

	t76 = (((x353+x354)==x355)^x356);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = INT32_MIN;
	uint32_t x358 = 835227754U;
	int8_t x359 = -1;
	int8_t x360 = INT8_MAX;
	static volatile int32_t t77 = -2009756;

	t77 = (((x357+x358)==x359)^x360);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = INT8_MIN;
	static uint32_t x362 = 12U;
	volatile int32_t x363 = INT32_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t78 = -42;

	t78 = (((x361+x362)==x363)^x364);

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x365 = INT32_MAX;
	int32_t x366 = -235212734;

	t79 = (((x365+x366)==x367)^x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = INT16_MAX;
	int16_t x371 = 28;
	volatile uint64_t x372 = UINT64_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = (((x369+x370)==x371)^x372);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x379 = 1;
	uint32_t x380 = 7659975U;
	static volatile uint32_t t81 = 68U;

	t81 = (((x377+x378)==x379)^x380);

	if (t81 != 7659975U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MIN;
	int16_t x383 = -1009;
	int64_t x384 = -837661LL;
	volatile int64_t t82 = -1964LL;

	t82 = (((x381+x382)==x383)^x384);

	if (t82 != -837661LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = INT16_MAX;
	uint64_t x387 = 110242LLU;
	int64_t x388 = -998995411441264LL;

	t83 = (((x385+x386)==x387)^x388);

	if (t83 != -998995411441264LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x391 = 12672465891849LLU;
	int8_t x392 = INT8_MIN;

	t84 = (((x389+x390)==x391)^x392);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x393 = 5LLU;
	int64_t x394 = 3305340LL;
	volatile int8_t x395 = INT8_MIN;
	int64_t x396 = -1LL;

	t85 = (((x393+x394)==x395)^x396);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = -1;
	static int64_t x399 = -1LL;
	int32_t x400 = -1;
	volatile int32_t t86 = 1295720;

	t86 = (((x397+x398)==x399)^x400);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x401 = -1LL;
	int16_t x402 = INT16_MAX;
	int16_t x403 = INT16_MIN;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t87 = 61137;

	t87 = (((x401+x402)==x403)^x404);

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = -420;
	volatile int32_t x406 = 17;
	int64_t x408 = INT64_MIN;
	static int64_t t88 = INT64_MIN;

	t88 = (((x405+x406)==x407)^x408);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = INT16_MAX;
	int32_t x411 = INT32_MAX;
	volatile int64_t x412 = INT64_MAX;
	volatile int64_t t89 = INT64_MAX;

	t89 = (((x409+x410)==x411)^x412);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x413 = UINT8_MAX;
	int32_t x415 = INT32_MIN;
	int32_t x416 = -1;
	int32_t t90 = -23789;

	t90 = (((x413+x414)==x415)^x416);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x417 = 21U;
	static int8_t x418 = INT8_MIN;
	volatile int64_t x420 = INT64_MAX;
	int64_t t91 = INT64_MAX;

	t91 = (((x417+x418)==x419)^x420);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x421 = 5U;
	uint32_t x422 = 633788U;
	uint32_t x423 = 10406U;
	static int16_t x424 = 268;
	volatile int32_t t92 = -2664036;

	t92 = (((x421+x422)==x423)^x424);

	if (t92 != 268) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x425 = UINT32_MAX;
	uint32_t x426 = 15234731U;
	static int8_t x428 = INT8_MAX;
	volatile int32_t t93 = 525052732;

	t93 = (((x425+x426)==x427)^x428);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x429 = 3915799193LLU;
	static int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;

	t94 = (((x429+x430)==x431)^x432);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x433 = -3344330255263LL;
	int8_t x434 = -6;
	volatile int32_t t95 = -1;

	t95 = (((x433+x434)==x435)^x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x437 = 4U;
	volatile uint32_t x438 = UINT32_MAX;
	int64_t x439 = INT64_MIN;
	uint64_t t96 = UINT64_MAX;

	t96 = (((x437+x438)==x439)^x440);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x441 = INT16_MIN;
	uint16_t x442 = 5030U;
	static int16_t x443 = INT16_MAX;
	volatile int16_t x444 = -1;
	int32_t t97 = 14888;

	t97 = (((x441+x442)==x443)^x444);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x446 = 321U;
	int8_t x447 = 8;
	static int32_t x448 = INT32_MIN;
	static int32_t t98 = INT32_MIN;

	t98 = (((x445+x446)==x447)^x448);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x449 = 7U;
	static int32_t x450 = INT32_MIN;
	uint16_t x452 = 1497U;
	volatile int32_t t99 = 13881303;

	t99 = (((x449+x450)==x451)^x452);

	if (t99 != 1497) { NG(); } else { ; }
	
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

