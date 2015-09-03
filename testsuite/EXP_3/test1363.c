#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x3 = -522580526;
uint16_t x4 = 67U;
volatile int64_t t0 = -51438LL;
volatile int8_t x9 = INT8_MIN;
int8_t x10 = INT8_MIN;
volatile uint8_t x14 = 33U;
volatile uint64_t t2 = 2399076907839LLU;
int64_t t6 = 245529619690LL;
volatile int32_t x43 = -1;
int64_t t10 = 53408217783087238LL;
volatile int16_t x60 = INT16_MAX;
int32_t x63 = -47140371;
int16_t x65 = -3856;
volatile int32_t x68 = INT32_MIN;
uint64_t t14 = 9LLU;
uint32_t x73 = 4545474U;
int64_t t15 = -12049294LL;
int64_t x80 = -1LL;
int32_t t16 = 1;
int32_t x81 = INT32_MIN;
int32_t x86 = INT32_MIN;
int64_t x96 = -107722661779LL;
volatile int8_t x103 = 12;
static volatile int64_t t23 = 100LL;
volatile int32_t x110 = INT32_MIN;
int32_t t24 = -9475;
static int16_t x117 = -1;
int16_t x123 = -1673;
int16_t x134 = INT16_MAX;
volatile uint64_t x135 = 454LLU;
int32_t x136 = -1;
uint16_t x138 = 938U;
volatile int8_t x146 = -5;
int8_t x152 = INT8_MIN;
uint64_t x153 = UINT64_MAX;
int32_t x156 = INT32_MIN;
int16_t x165 = 601;
static volatile int16_t x167 = -1;
volatile uint8_t x182 = 3U;
int8_t x190 = INT8_MIN;
uint64_t x195 = 206801599867343LLU;
uint16_t x198 = 5124U;
int64_t x199 = -21987690721888LL;
uint8_t x202 = 18U;
int64_t x203 = 0LL;
volatile uint64_t t45 = 64212057382LLU;
volatile int64_t x211 = INT64_MIN;
uint8_t x214 = 1U;
int64_t x217 = INT64_MIN;
int8_t x219 = INT8_MAX;
int32_t x220 = INT32_MIN;
static uint16_t x237 = 15U;
int32_t t53 = -6041336;
int32_t t55 = 3;
static uint64_t x249 = UINT64_MAX;
int32_t t57 = 0;
volatile int64_t x258 = -1LL;
volatile int64_t t58 = 1658366027864LL;
int32_t t59 = 57808752;
int16_t x270 = INT16_MIN;
int64_t x276 = -1LL;
static volatile uint64_t x279 = UINT64_MAX;
int16_t x281 = 1;
int32_t t63 = 37402062;
static volatile int8_t x291 = INT8_MIN;
int8_t x299 = INT8_MAX;
volatile int32_t t67 = -959;
uint64_t t68 = 206016319302388LLU;
int8_t x313 = 29;
int32_t x316 = -180483836;
int8_t x319 = INT8_MIN;
int8_t x327 = INT8_MIN;
static volatile int16_t x332 = 1138;
static int64_t x335 = INT64_MIN;
static int32_t t76 = 25;
volatile int32_t t77 = -61;
static int32_t x351 = INT32_MAX;
volatile uint64_t t79 = 2766023962117180LLU;
int16_t x362 = -85;
static int8_t x367 = INT8_MAX;
int8_t x375 = INT8_MIN;
static uint64_t x384 = 56077911919LLU;
uint64_t x387 = UINT64_MAX;
uint64_t t85 = 59314364003LLU;
static volatile int16_t x399 = INT16_MIN;
volatile uint16_t x400 = 126U;
int64_t x422 = -1LL;
int64_t x424 = INT64_MIN;
uint32_t x428 = 2U;
static int32_t x441 = 116391;
int8_t x448 = INT8_MIN;
volatile int32_t t98 = -7790845;
int32_t x460 = -130082769;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int16_t x2 = 1;

	t0 = ((x1+x2)&(x3<x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x11 = UINT32_MAX;
	int64_t x12 = -26538901LL;
	int32_t t1 = -25236;

	t1 = ((x9+x10)&(x11<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 63LLU;
	static volatile int8_t x15 = 0;
	int16_t x16 = INT16_MIN;

	t2 = ((x13+x14)&(x15<x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	uint8_t x18 = 0U;
	int16_t x19 = -1;
	uint16_t x20 = 391U;
	int64_t t3 = -323488LL;

	t3 = ((x17+x18)&(x19<x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = 1396;
	int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	uint64_t x24 = 444745841617493407LLU;
	int32_t t4 = 1;

	t4 = ((x21+x22)&(x23<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -7253;
	int64_t x30 = -41LL;
	int64_t x31 = INT64_MAX;
	uint16_t x32 = UINT16_MAX;
	int64_t t5 = 503182532099LL;

	t5 = ((x29+x30)&(x31<x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	int64_t x34 = INT64_MIN;
	static uint64_t x35 = 108LLU;
	int64_t x36 = INT64_MIN;

	t6 = ((x33+x34)&(x35<x36));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = 16;
	volatile int64_t x38 = INT64_MIN;
	static volatile uint32_t x39 = 2074829U;
	volatile int8_t x40 = -1;
	static volatile int64_t t7 = -762492926589LL;

	t7 = ((x37+x38)&(x39<x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -143700964679739LL;
	uint64_t x42 = 517241LLU;
	static uint16_t x44 = 187U;
	volatile uint64_t t8 = 242897978396151571LLU;

	t8 = ((x41+x42)&(x43<x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -5073809345045LL;
	volatile int16_t x46 = 13;
	volatile int16_t x47 = INT16_MIN;
	static volatile uint64_t x48 = 6LLU;
	int64_t t9 = 1973LL;

	t9 = ((x45+x46)&(x47<x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -43166788467LL;
	volatile int8_t x50 = 1;
	static int64_t x51 = INT64_MAX;
	uint8_t x52 = 4U;

	t10 = ((x49+x50)&(x51<x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x53 = 4557U;
	static int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;
	int8_t x56 = 59;
	volatile int32_t t11 = 28564;

	t11 = ((x53+x54)&(x55<x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	int64_t x58 = -3850LL;
	int32_t x59 = INT32_MAX;
	int64_t t12 = 415972042509045LL;

	t12 = ((x57+x58)&(x59<x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -269;
	uint64_t x62 = UINT64_MAX;
	int8_t x64 = -1;
	volatile uint64_t t13 = 60LLU;

	t13 = ((x61+x62)&(x63<x64));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x66 = 1067366904437LLU;
	static uint16_t x67 = UINT16_MAX;

	t14 = ((x65+x66)&(x67<x68));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = -1LL;
	int32_t x75 = 0;
	volatile uint32_t x76 = UINT32_MAX;

	t15 = ((x73+x74)&(x75<x76));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = -49165646;
	static int8_t x79 = INT8_MAX;

	t16 = ((x77+x78)&(x79<x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x82 = 14717U;
	uint64_t x83 = 0LLU;
	int16_t x84 = 402;
	int32_t t17 = -7794199;

	t17 = ((x81+x82)&(x83<x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MAX;
	int32_t x87 = INT32_MIN;
	uint16_t x88 = 11656U;
	volatile int32_t t18 = -51061238;

	t18 = ((x85+x86)&(x87<x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x89 = 505U;
	int8_t x90 = -1;
	static int16_t x91 = 13;
	volatile int64_t x92 = -1LL;
	int32_t t19 = 90;

	t19 = ((x89+x90)&(x91<x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -1;
	volatile int16_t x94 = INT16_MAX;
	static volatile int16_t x95 = -3630;
	int32_t t20 = -52600360;

	t20 = ((x93+x94)&(x95<x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MIN;
	volatile uint64_t x98 = UINT64_MAX;
	int32_t x99 = 113904;
	volatile int64_t x100 = INT64_MIN;
	static uint64_t t21 = 14694351LLU;

	t21 = ((x97+x98)&(x99<x100));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = -1;
	int8_t x104 = INT8_MAX;
	volatile int32_t t22 = -19433;

	t22 = ((x101+x102)&(x103<x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MAX;
	volatile uint16_t x107 = 1U;
	volatile int8_t x108 = 2;

	t23 = ((x105+x106)&(x107<x108));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 3U;
	uint8_t x111 = 26U;
	int8_t x112 = -1;

	t24 = ((x109+x110)&(x111<x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x113 = 440U;
	volatile int32_t x114 = 2869;
	int32_t x115 = -1;
	uint16_t x116 = 7182U;
	static volatile int32_t t25 = -3880664;

	t25 = ((x113+x114)&(x115<x116));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x118 = 99U;
	volatile uint16_t x119 = UINT16_MAX;
	volatile int8_t x120 = 0;
	static int32_t t26 = 592227;

	t26 = ((x117+x118)&(x119<x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x121 = UINT32_MAX;
	volatile int16_t x122 = -1;
	static int16_t x124 = INT16_MIN;
	static volatile uint32_t t27 = 436U;

	t27 = ((x121+x122)&(x123<x124));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 37U;
	volatile uint32_t t28 = 62885777U;

	t28 = ((x133+x134)&(x135<x136));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x137 = UINT16_MAX;
	static volatile int8_t x139 = -5;
	int8_t x140 = INT8_MIN;
	int32_t t29 = -7636;

	t29 = ((x137+x138)&(x139<x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int64_t x142 = -45215388777LL;
	static uint16_t x143 = 0U;
	uint8_t x144 = 1U;
	int64_t t30 = 916206373030LL;

	t30 = ((x141+x142)&(x143<x144));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -1;
	int16_t x147 = INT16_MAX;
	int64_t x148 = 31081415057LL;
	int32_t t31 = -59;

	t31 = ((x145+x146)&(x147<x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 6973U;
	int8_t x150 = INT8_MIN;
	volatile uint64_t x151 = 7058036013107374831LLU;
	int32_t t32 = -390397;

	t32 = ((x149+x150)&(x151<x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x154 = INT64_MIN;
	static volatile int8_t x155 = -1;
	static volatile uint64_t t33 = 1748869682309408017LLU;

	t33 = ((x153+x154)&(x155<x156));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = 2;
	int32_t x158 = -1;
	uint32_t x159 = 267300766U;
	uint64_t x160 = 1610648LLU;
	volatile int32_t t34 = 123;

	t34 = ((x157+x158)&(x159<x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = UINT16_MAX;
	int64_t x162 = INT64_MIN;
	static uint8_t x163 = 2U;
	volatile uint32_t x164 = UINT32_MAX;
	int64_t t35 = -272386166396LL;

	t35 = ((x161+x162)&(x163<x164));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x166 = INT64_MIN;
	int32_t x168 = INT32_MAX;
	int64_t t36 = -482LL;

	t36 = ((x165+x166)&(x167<x168));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	volatile int16_t x171 = INT16_MIN;
	int16_t x172 = -1;
	volatile int64_t t37 = -877193085126LL;

	t37 = ((x169+x170)&(x171<x172));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x173 = -1;
	int32_t x174 = 65;
	uint8_t x175 = 121U;
	int8_t x176 = INT8_MAX;
	volatile int32_t t38 = 26184017;

	t38 = ((x173+x174)&(x175<x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = INT16_MIN;
	static uint32_t x178 = 48U;
	static volatile int8_t x179 = -11;
	volatile int8_t x180 = -1;
	uint32_t t39 = 5585U;

	t39 = ((x177+x178)&(x179<x180));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MAX;
	static int8_t x183 = -4;
	volatile int64_t x184 = INT64_MAX;
	int32_t t40 = -5153;

	t40 = ((x181+x182)&(x183<x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x185 = 1U;
	int16_t x186 = -1;
	uint32_t x187 = 1U;
	static int16_t x188 = INT16_MAX;
	int32_t t41 = 3638;

	t41 = ((x185+x186)&(x187<x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x189 = 340U;
	int32_t x191 = INT32_MIN;
	int32_t x192 = 853965;
	volatile int32_t t42 = 2523;

	t42 = ((x189+x190)&(x191<x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = INT8_MAX;
	uint64_t x194 = UINT64_MAX;
	static uint8_t x196 = UINT8_MAX;
	uint64_t t43 = 8067LLU;

	t43 = ((x193+x194)&(x195<x196));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MIN;
	int64_t x200 = INT64_MAX;
	int32_t t44 = 2084;

	t44 = ((x197+x198)&(x199<x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x204 = 3;

	t45 = ((x201+x202)&(x203<x204));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = 122;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = 53U;
	uint64_t x208 = 664999605152901688LLU;
	int32_t t46 = -257446496;

	t46 = ((x205+x206)&(x207<x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MAX;
	uint32_t x210 = 0U;
	int64_t x212 = INT64_MAX;
	uint32_t t47 = 1107979256U;

	t47 = ((x209+x210)&(x211<x212));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = INT8_MIN;
	int32_t x215 = INT32_MIN;
	uint32_t x216 = 483670U;
	int32_t t48 = 1;

	t48 = ((x213+x214)&(x215<x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x218 = 1U;
	volatile int64_t t49 = 6417LL;

	t49 = ((x217+x218)&(x219<x220));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 3U;
	int16_t x222 = INT16_MIN;
	static int8_t x223 = -12;
	int8_t x224 = -1;
	int32_t t50 = 870636;

	t50 = ((x221+x222)&(x223<x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = INT16_MAX;
	uint32_t x230 = UINT32_MAX;
	volatile int32_t x231 = -3748;
	int16_t x232 = INT16_MIN;
	static volatile uint32_t t51 = 0U;

	t51 = ((x229+x230)&(x231<x232));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = 4744U;
	int32_t x234 = 104897169;
	int64_t x235 = INT64_MIN;
	volatile int64_t x236 = -1LL;
	uint32_t t52 = 2331U;

	t52 = ((x233+x234)&(x235<x236));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x238 = 56U;
	static int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MAX;

	t53 = ((x237+x238)&(x239<x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = INT32_MAX;
	int64_t x242 = INT64_MIN;
	static int16_t x243 = 7;
	int32_t x244 = -1;
	volatile int64_t t54 = 37759LL;

	t54 = ((x241+x242)&(x243<x244));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MIN;
	int32_t x246 = -1;
	int16_t x247 = 5;
	volatile int8_t x248 = INT8_MIN;

	t55 = ((x245+x246)&(x247<x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x250 = -217;
	static uint64_t x251 = UINT64_MAX;
	static int16_t x252 = INT16_MIN;
	volatile uint64_t t56 = 1720147827616LLU;

	t56 = ((x249+x250)&(x251<x252));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MAX;
	volatile int64_t x255 = 3331245LL;
	uint32_t x256 = 663U;

	t57 = ((x253+x254)&(x255<x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x257 = INT32_MIN;
	int64_t x259 = 1LL;
	int16_t x260 = INT16_MIN;

	t58 = ((x257+x258)&(x259<x260));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x265 = 0;
	static int8_t x266 = 21;
	int8_t x267 = -1;
	static uint32_t x268 = UINT32_MAX;

	t59 = ((x265+x266)&(x267<x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = 2332382U;
	volatile uint16_t x271 = UINT16_MAX;
	static int16_t x272 = INT16_MAX;
	volatile uint32_t t60 = 7U;

	t60 = ((x269+x270)&(x271<x272));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	static volatile int8_t x274 = INT8_MAX;
	volatile int8_t x275 = 0;
	int32_t t61 = 44;

	t61 = ((x273+x274)&(x275<x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x277 = 120561088982LLU;
	uint64_t x278 = 1905576752050LLU;
	volatile int16_t x280 = INT16_MIN;
	volatile uint64_t t62 = 3LLU;

	t62 = ((x277+x278)&(x279<x280));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x282 = -124;
	int16_t x283 = 10;
	int16_t x284 = INT16_MIN;

	t63 = ((x281+x282)&(x283<x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = 7319LLU;
	int8_t x290 = INT8_MAX;
	static int16_t x292 = -1;
	volatile uint64_t t64 = 14421730288931081LLU;

	t64 = ((x289+x290)&(x291<x292));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = INT32_MAX;
	int32_t x294 = -1;
	uint32_t x295 = 80506440U;
	int64_t x296 = -253623364722LL;
	volatile int32_t t65 = 6;

	t65 = ((x293+x294)&(x295<x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 1377U;
	uint16_t x298 = UINT16_MAX;
	volatile uint64_t x300 = 9246256126LLU;
	volatile uint32_t t66 = 882U;

	t66 = ((x297+x298)&(x299<x300));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = INT16_MIN;
	static volatile int8_t x302 = INT8_MAX;
	uint32_t x303 = 112129107U;
	static uint64_t x304 = 1812425LLU;

	t67 = ((x301+x302)&(x303<x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = -11;
	uint64_t x306 = 5858565553841854LLU;
	int32_t x307 = -1;
	int16_t x308 = 536;

	t68 = ((x305+x306)&(x307<x308));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = -1;
	int32_t x310 = -8183476;
	int32_t x311 = 36;
	volatile uint32_t x312 = UINT32_MAX;
	volatile int32_t t69 = -78024;

	t69 = ((x309+x310)&(x311<x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x314 = -159974990740288443LL;
	uint8_t x315 = UINT8_MAX;
	static volatile int64_t t70 = -442304474877665667LL;

	t70 = ((x313+x314)&(x315<x316));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = 8;
	static uint64_t x318 = 21933LLU;
	int8_t x320 = -13;
	volatile uint64_t t71 = 12LLU;

	t71 = ((x317+x318)&(x319<x320));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = -1;
	static uint16_t x322 = 3U;
	int64_t x323 = INT64_MIN;
	static uint16_t x324 = 1U;
	int32_t t72 = -252115979;

	t72 = ((x321+x322)&(x323<x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = -1;
	volatile int8_t x326 = INT8_MIN;
	static int32_t x328 = 14824;
	volatile int32_t t73 = -4473460;

	t73 = ((x325+x326)&(x327<x328));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x329 = 5U;
	int64_t x330 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	int64_t t74 = 6516662798642LL;

	t74 = ((x329+x330)&(x331<x332));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = 15LLU;
	int16_t x334 = INT16_MIN;
	volatile int32_t x336 = INT32_MAX;
	static uint64_t t75 = 1950440176342LLU;

	t75 = ((x333+x334)&(x335<x336));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = 3;
	volatile int16_t x338 = -1;
	int32_t x339 = INT32_MIN;
	static int32_t x340 = -1;

	t76 = ((x337+x338)&(x339<x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MIN;
	static int32_t x346 = -8659202;
	static int16_t x347 = INT16_MIN;
	int16_t x348 = -1;

	t77 = ((x345+x346)&(x347<x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	int16_t x352 = -1;
	static volatile uint32_t t78 = 35U;

	t78 = ((x349+x350)&(x351<x352));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x353 = UINT64_MAX;
	uint8_t x354 = 0U;
	volatile uint16_t x355 = UINT16_MAX;
	int64_t x356 = -488436159010030LL;

	t79 = ((x353+x354)&(x355<x356));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x361 = UINT8_MAX;
	static volatile uint8_t x363 = 108U;
	volatile uint32_t x364 = 59597U;
	static int32_t t80 = 22;

	t80 = ((x361+x362)&(x363<x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = -1;
	uint16_t x366 = 29U;
	static int32_t x368 = 3;
	int32_t t81 = -106;

	t81 = ((x365+x366)&(x367<x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = -31;
	static int32_t x370 = 1;
	uint16_t x371 = 44U;
	volatile int32_t x372 = -1;
	static volatile int32_t t82 = 38740;

	t82 = ((x369+x370)&(x371<x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x373 = -307;
	volatile uint32_t x374 = UINT32_MAX;
	static uint16_t x376 = UINT16_MAX;
	volatile uint32_t t83 = 48134U;

	t83 = ((x373+x374)&(x375<x376));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x381 = 0U;
	volatile int8_t x382 = 2;
	volatile int32_t x383 = -1;
	int32_t t84 = 911459;

	t84 = ((x381+x382)&(x383<x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x385 = 113196LLU;
	int32_t x386 = INT32_MIN;
	int16_t x388 = INT16_MAX;

	t85 = ((x385+x386)&(x387<x388));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = INT16_MIN;
	uint32_t x395 = 1862495000U;
	int8_t x396 = INT8_MAX;
	static int64_t t86 = -10955750LL;

	t86 = ((x393+x394)&(x395<x396));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x397 = 0;
	static uint32_t x398 = 449346618U;
	uint32_t t87 = 51U;

	t87 = ((x397+x398)&(x399<x400));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x401 = 3U;
	int64_t x402 = -1LL;
	static int8_t x403 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;
	static int64_t t88 = 7638443876890227LL;

	t88 = ((x401+x402)&(x403<x404));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x405 = UINT64_MAX;
	static volatile int64_t x406 = INT64_MIN;
	uint16_t x407 = UINT16_MAX;
	int64_t x408 = INT64_MAX;
	volatile uint64_t t89 = 9661LLU;

	t89 = ((x405+x406)&(x407<x408));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x409 = UINT8_MAX;
	static int32_t x410 = -1;
	int16_t x411 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t90 = 6399385;

	t90 = ((x409+x410)&(x411<x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x413 = INT8_MAX;
	int32_t x414 = -5624;
	int32_t x415 = INT32_MAX;
	int16_t x416 = INT16_MAX;
	volatile int32_t t91 = -1030994;

	t91 = ((x413+x414)&(x415<x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x421 = 20U;
	int8_t x423 = 1;
	int64_t t92 = -28766LL;

	t92 = ((x421+x422)&(x423<x424));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = -1172;
	int16_t x426 = -1;
	uint16_t x427 = 30U;
	static int32_t t93 = 250201900;

	t93 = ((x425+x426)&(x427<x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MIN;
	int64_t x430 = -53177587962LL;
	volatile int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MAX;
	static volatile int64_t t94 = 1LL;

	t94 = ((x429+x430)&(x431<x432));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x437 = UINT16_MAX;
	int16_t x438 = INT16_MAX;
	uint32_t x439 = 9418382U;
	int8_t x440 = INT8_MIN;
	int32_t t95 = -1388;

	t95 = ((x437+x438)&(x439<x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x442 = 28;
	int8_t x443 = INT8_MAX;
	uint16_t x444 = 0U;
	static volatile int32_t t96 = 1;

	t96 = ((x441+x442)&(x443<x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x445 = UINT8_MAX;
	uint64_t x446 = 7385480LLU;
	int64_t x447 = INT64_MIN;
	static volatile uint64_t t97 = 702162474448LLU;

	t97 = ((x445+x446)&(x447<x448));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = 1;
	int16_t x450 = INT16_MIN;
	uint32_t x451 = 3U;
	int64_t x452 = -131LL;

	t98 = ((x449+x450)&(x451<x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x457 = INT16_MAX;
	volatile uint8_t x458 = 28U;
	static int32_t x459 = -1;
	static volatile int32_t t99 = 17150;

	t99 = ((x457+x458)&(x459<x460));

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

