#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
uint8_t x7 = UINT8_MAX;
volatile int32_t t2 = 106358;
int32_t x21 = 59569216;
volatile int8_t x32 = -1;
uint32_t x36 = 2U;
volatile int8_t x41 = INT8_MIN;
static volatile int8_t x48 = INT8_MAX;
int32_t t10 = -6;
int32_t x50 = -3224;
volatile uint16_t x65 = 16081U;
uint32_t t14 = 3U;
int8_t x73 = -31;
volatile uint16_t x74 = 192U;
int16_t x76 = -9;
static volatile uint64_t x81 = 3024979199116263485LLU;
int32_t x91 = -1;
int64_t x95 = INT64_MAX;
int16_t x97 = INT16_MIN;
volatile uint32_t x98 = 426922U;
static int64_t x99 = INT64_MIN;
static int8_t x103 = -1;
int16_t x104 = INT16_MIN;
int16_t x112 = -579;
int32_t x118 = INT32_MAX;
int8_t x130 = 11;
volatile int32_t t26 = 0;
volatile uint64_t x134 = 269270LLU;
uint64_t x140 = UINT64_MAX;
uint64_t t28 = 4LLU;
static uint8_t x142 = UINT8_MAX;
static uint64_t x143 = 388376831206328051LLU;
uint32_t x148 = 7878U;
int32_t x161 = 2;
static uint8_t x170 = 17U;
int16_t x180 = -109;
int32_t x181 = -3;
volatile int32_t x189 = INT32_MIN;
static int16_t x190 = INT16_MIN;
int32_t x194 = -1;
static uint16_t x198 = UINT16_MAX;
volatile uint16_t x200 = 263U;
int64_t t42 = -161021691591990414LL;
int8_t x204 = INT8_MIN;
int64_t x206 = -1LL;
int64_t x207 = -49551836477685255LL;
volatile int64_t x209 = -10624513026105LL;
int8_t x224 = 37;
static int32_t t47 = 994;
static int32_t x227 = -1;
static int16_t x234 = INT16_MIN;
int8_t x251 = INT8_MIN;
int16_t x268 = -1;
uint16_t x276 = 86U;
int32_t t58 = 100942;
static volatile int64_t x277 = -1LL;
static int8_t x279 = -34;
int64_t x292 = -1LL;
int32_t t62 = -374;
uint64_t x304 = 22347090023291926LLU;
uint64_t x309 = 3498353427339LLU;
volatile int16_t x310 = -1;
static volatile uint64_t t65 = 15LLU;
uint32_t x318 = UINT32_MAX;
int32_t t68 = 1;
int16_t x325 = INT16_MIN;
static int64_t x341 = 119321961387902081LL;
static int64_t x344 = -1LL;
int64_t t73 = -1788336334119LL;
static volatile uint16_t x349 = UINT16_MAX;
volatile int32_t t75 = 7220;
int16_t x362 = INT16_MAX;
volatile uint32_t x378 = 61U;
static uint8_t x380 = UINT8_MAX;
volatile int64_t t80 = 0LL;
static volatile uint32_t x398 = 286610185U;
int32_t t82 = 2;
uint16_t x407 = 11U;
static int64_t x417 = INT64_MIN;
volatile int64_t t86 = 4649554535319481LL;
uint64_t x423 = 3114LLU;
static int16_t x437 = -1;
static volatile uint16_t x441 = UINT16_MAX;
uint64_t t92 = 13LLU;
static int16_t x450 = 0;
static volatile int16_t x452 = -1;
volatile int32_t t94 = -637;
int8_t x456 = -32;
int16_t x458 = INT16_MIN;
static int16_t x459 = INT16_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int64_t x2 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -3LL;

	t0 = (x1%((x2<=x3)-x4));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint64_t x6 = UINT64_MAX;
	int8_t x8 = 36;
	volatile int32_t t1 = -2047973;

	t1 = (x5%((x6<=x7)-x8));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 1U;
	volatile int16_t x10 = INT16_MIN;
	int64_t x11 = 1488791LL;
	int16_t x12 = INT16_MIN;

	t2 = (x9%((x10<=x11)-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x14 = -6191288LL;
	volatile int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 17633682;

	t3 = (x13%((x14<=x15)-x16));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = INT8_MIN;
	volatile int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t4 = -1;

	t4 = (x21%((x22<=x23)-x24));

	if (t4 != 29760) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x25 = 21U;
	uint16_t x26 = 125U;
	static int64_t x27 = INT64_MIN;
	uint64_t x28 = 41328868LLU;
	uint64_t t5 = 3055776453137LLU;

	t5 = (x25%((x26<=x27)-x28));

	if (t5 != 21LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 3970016074225612LL;
	static int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MIN;
	int64_t t6 = 67064243496319LL;

	t6 = (x29%((x30<=x31)-x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = 27LL;
	volatile int64_t x34 = -51798849468LL;
	volatile uint16_t x35 = UINT16_MAX;
	volatile int64_t t7 = 4660596LL;

	t7 = (x33%((x34<=x35)-x36));

	if (t7 != 27LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;
	int64_t t8 = 25457275604410243LL;

	t8 = (x37%((x38<=x39)-x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x42 = 1259U;
	int16_t x43 = INT16_MIN;
	int64_t x44 = 260769410LL;
	volatile int64_t t9 = -13LL;

	t9 = (x41%((x42<=x43)-x44));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = 5U;
	int16_t x46 = -3801;
	volatile uint64_t x47 = 4499LLU;

	t10 = (x45%((x46<=x47)-x48));

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 736;
	static int64_t x51 = INT64_MIN;
	volatile int32_t x52 = -4102445;
	static int32_t t11 = 1254;

	t11 = (x49%((x50<=x51)-x52));

	if (t11 != 736) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	uint32_t x54 = 326812U;
	int8_t x55 = 2;
	int8_t x56 = INT8_MIN;
	volatile int32_t t12 = 119033;

	t12 = (x53%((x54<=x55)-x56));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -7;
	static int64_t x62 = -1LL;
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = 2085594759402LL;
	int64_t t13 = 58156935041LL;

	t13 = (x61%((x62<=x63)-x64));

	if (t13 != -7LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = 0U;
	static int64_t x67 = 656506LL;
	uint32_t x68 = 2861U;

	t14 = (x65%((x66<=x67)-x68));

	if (t14 != 16081U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x69 = INT16_MAX;
	int64_t x70 = INT64_MAX;
	volatile int8_t x71 = INT8_MAX;
	volatile int64_t x72 = 71LL;
	int64_t t15 = 161321972LL;

	t15 = (x69%((x70<=x71)-x72));

	if (t15 != 36LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x75 = INT16_MIN;
	int32_t t16 = -31406463;

	t16 = (x73%((x74<=x75)-x76));

	if (t16 != -4) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -45;
	uint16_t x78 = 18U;
	static int8_t x79 = INT8_MIN;
	int32_t x80 = 806317;
	volatile int32_t t17 = -513;

	t17 = (x77%((x78<=x79)-x80));

	if (t17 != -45) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x82 = UINT8_MAX;
	int32_t x83 = INT32_MAX;
	int32_t x84 = -1;
	uint64_t t18 = 3LLU;

	t18 = (x81%((x82<=x83)-x84));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 3110;
	int32_t x86 = -961742;
	int16_t x87 = -1;
	int64_t x88 = INT64_MAX;
	volatile int64_t t19 = -9424762LL;

	t19 = (x85%((x86<=x87)-x88));

	if (t19 != 3110LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 63;
	static int32_t x90 = 0;
	int16_t x92 = -11;
	int32_t t20 = 331914581;

	t20 = (x89%((x90<=x91)-x92));

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	int8_t x94 = -1;
	volatile uint32_t x96 = 44326U;
	static volatile uint32_t t21 = 156437U;

	t21 = (x93%((x94<=x95)-x96));

	if (t21 != 44324U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x100 = UINT32_MAX;
	volatile uint32_t t22 = 1532228U;

	t22 = (x97%((x98<=x99)-x100));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -156;
	int8_t x102 = INT8_MAX;
	int32_t t23 = -286162;

	t23 = (x101%((x102<=x103)-x104));

	if (t23 != -156) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x109 = 0U;
	int64_t x110 = 217871122869LL;
	volatile int64_t x111 = INT64_MIN;
	static volatile int32_t t24 = 57308;

	t24 = (x109%((x110<=x111)-x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -1LL;
	static int8_t x119 = -3;
	static uint64_t x120 = 92LLU;
	volatile uint64_t t25 = 6622362874313027702LLU;

	t25 = (x117%((x118<=x119)-x120));

	if (t25 != 91LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MAX;
	static uint8_t x131 = 1U;
	int32_t x132 = 17;

	t26 = (x129%((x130<=x131)-x132));

	if (t26 != 8) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x133 = 11U;
	int8_t x135 = -1;
	volatile int8_t x136 = 0;
	volatile int32_t t27 = 821381746;

	t27 = (x133%((x134<=x135)-x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x137 = INT32_MIN;
	static int32_t x138 = 183;
	uint16_t x139 = 0U;

	t28 = (x137%((x138<=x139)-x140));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x141 = INT64_MAX;
	uint16_t x144 = UINT16_MAX;
	int64_t t29 = -3779150582662LL;

	t29 = (x141%((x142<=x143)-x144));

	if (t29 != 7LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x145 = -481850128653734LL;
	volatile int32_t x146 = INT32_MAX;
	static int16_t x147 = 0;
	volatile int64_t t30 = 1893913633220240823LL;

	t30 = (x145%((x146<=x147)-x148));

	if (t30 != -2926507732LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = 255673;
	int16_t x151 = INT16_MIN;
	volatile int8_t x152 = -57;
	static volatile uint32_t t31 = 0U;

	t31 = (x149%((x150<=x151)-x152));

	if (t31 != 24U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = -1LL;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	volatile int64_t t32 = 156709225969LL;

	t32 = (x153%((x154<=x155)-x156));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x157 = -1;
	uint8_t x158 = UINT8_MAX;
	static uint64_t x159 = 17191LLU;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t33 = 32143068248094LLU;

	t33 = (x157%((x158<=x159)-x160));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x162 = INT64_MAX;
	int16_t x163 = INT16_MAX;
	static int32_t x164 = -1;
	volatile int32_t t34 = 0;

	t34 = (x161%((x162<=x163)-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x169 = -1;
	volatile int8_t x171 = INT8_MAX;
	volatile int16_t x172 = INT16_MIN;
	int32_t t35 = 6;

	t35 = (x169%((x170<=x171)-x172));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	volatile int16_t x174 = INT16_MIN;
	uint16_t x175 = UINT16_MAX;
	uint8_t x176 = 0U;
	volatile int32_t t36 = 977654;

	t36 = (x173%((x174<=x175)-x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = -1;
	uint64_t x178 = 129142LLU;
	int32_t x179 = INT32_MIN;
	volatile int32_t t37 = -112933;

	t37 = (x177%((x178<=x179)-x180));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x182 = -1;
	uint32_t x183 = 0U;
	int64_t x184 = INT64_MAX;
	volatile int64_t t38 = 3747LL;

	t38 = (x181%((x182<=x183)-x184));

	if (t38 != -3LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = 7U;
	int16_t x186 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;
	int32_t t39 = 1;

	t39 = (x185%((x186<=x187)-x188));

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x191 = 13270888454537LL;
	int16_t x192 = INT16_MIN;
	static int32_t t40 = -71298479;

	t40 = (x189%((x190<=x191)-x192));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MAX;
	static int8_t x195 = INT8_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t41 = -27316872;

	t41 = (x193%((x194<=x195)-x196));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = INT64_MIN;
	int16_t x199 = -1;

	t42 = (x197%((x198<=x199)-x200));

	if (t42 != -52LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MAX;
	static volatile uint8_t x202 = UINT8_MAX;
	static volatile uint16_t x203 = 1834U;
	int64_t t43 = -61048967423569LL;

	t43 = (x201%((x202<=x203)-x204));

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x205 = 0;
	int8_t x208 = INT8_MAX;
	int32_t t44 = 146;

	t44 = (x205%((x206<=x207)-x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x210 = INT16_MIN;
	int8_t x211 = -1;
	int8_t x212 = INT8_MIN;
	volatile int64_t t45 = -19566446LL;

	t45 = (x209%((x210<=x211)-x212));

	if (t45 != -108LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x213 = 136U;
	uint8_t x214 = 62U;
	uint32_t x215 = 107552278U;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t46 = -1440005;

	t46 = (x213%((x214<=x215)-x216));

	if (t46 != 136) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x221 = 1323;
	uint16_t x222 = UINT16_MAX;
	int32_t x223 = INT32_MIN;

	t47 = (x221%((x222<=x223)-x224));

	if (t47 != 28) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x225 = 2U;
	static volatile int8_t x226 = -1;
	static uint64_t x228 = 19061834653843703LLU;
	volatile uint64_t t48 = 7992LLU;

	t48 = (x225%((x226<=x227)-x228));

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = 9;
	static int16_t x230 = 0;
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = 14;
	volatile int32_t t49 = 5;

	t49 = (x229%((x230<=x231)-x232));

	if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = -1;
	static volatile int32_t x235 = INT32_MAX;
	int32_t x236 = 0;
	int32_t t50 = -232743;

	t50 = (x233%((x234<=x235)-x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = 0U;
	int8_t x238 = INT8_MAX;
	static int32_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	int32_t t51 = -22914178;

	t51 = (x237%((x238<=x239)-x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x241 = 0U;
	static uint8_t x242 = 1U;
	int16_t x243 = 5238;
	uint32_t x244 = UINT32_MAX;
	uint32_t t52 = 1406U;

	t52 = (x241%((x242<=x243)-x244));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x249 = 2;
	int8_t x250 = -28;
	int16_t x252 = INT16_MAX;
	volatile int32_t t53 = 57560;

	t53 = (x249%((x250<=x251)-x252));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = INT16_MIN;
	volatile uint16_t x254 = 191U;
	static int32_t x255 = -1;
	int16_t x256 = INT16_MIN;
	static int32_t t54 = 2762612;

	t54 = (x253%((x254<=x255)-x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = INT32_MAX;
	volatile uint64_t x258 = 150768066LLU;
	static uint8_t x259 = UINT8_MAX;
	uint16_t x260 = 3U;
	int32_t t55 = 6;

	t55 = (x257%((x258<=x259)-x260));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = 1LL;
	int64_t x267 = -894869852953LL;
	int32_t t56 = 0;

	t56 = (x265%((x266<=x267)-x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x269 = 4U;
	static int64_t x270 = -20LL;
	int32_t x271 = INT32_MAX;
	uint64_t x272 = 37192155LLU;
	uint64_t t57 = 1664LLU;

	t57 = (x269%((x270<=x271)-x272));

	if (t57 != 4LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = INT32_MIN;
	static volatile int8_t x274 = INT8_MIN;
	static int8_t x275 = -1;

	t58 = (x273%((x274<=x275)-x276));

	if (t58 != -43) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x278 = INT64_MAX;
	uint16_t x280 = UINT16_MAX;
	static int64_t t59 = -202118802510LL;

	t59 = (x277%((x278<=x279)-x280));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = 149U;
	int32_t x286 = INT32_MIN;
	uint8_t x287 = UINT8_MAX;
	uint32_t x288 = 1120U;
	uint32_t t60 = 84614555U;

	t60 = (x285%((x286<=x287)-x288));

	if (t60 != 149U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = 113814417041LL;
	uint32_t x290 = UINT32_MAX;
	int64_t x291 = -1LL;
	volatile int64_t t61 = 4365128252976535LL;

	t61 = (x289%((x290<=x291)-x292));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = INT16_MIN;
	static int8_t x294 = -1;
	volatile int16_t x295 = -1;
	uint8_t x296 = UINT8_MAX;

	t62 = (x293%((x294<=x295)-x296));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x297 = -3;
	uint8_t x298 = 3U;
	int8_t x299 = -1;
	int64_t x300 = -434797059528018LL;
	int64_t t63 = 462359433077081LL;

	t63 = (x297%((x298<=x299)-x300));

	if (t63 != -3LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = INT32_MAX;
	int16_t x302 = INT16_MAX;
	uint8_t x303 = UINT8_MAX;
	uint64_t t64 = 74941715LLU;

	t64 = (x301%((x302<=x303)-x304));

	if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x311 = INT8_MIN;
	int16_t x312 = 320;

	t65 = (x309%((x310<=x311)-x312));

	if (t65 != 3498353427339LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = 0;
	uint16_t x314 = 453U;
	int32_t x315 = -1;
	uint64_t x316 = 215240LLU;
	volatile uint64_t t66 = 566540LLU;

	t66 = (x313%((x314<=x315)-x316));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = UINT64_MAX;
	uint8_t x319 = 50U;
	uint16_t x320 = 26754U;
	static uint64_t t67 = 1LLU;

	t67 = (x317%((x318<=x319)-x320));

	if (t67 != 26753LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = INT32_MAX;
	int32_t x322 = -1;
	volatile uint64_t x323 = 10303573694LLU;
	static int8_t x324 = -1;

	t68 = (x321%((x322<=x323)-x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x326 = INT32_MIN;
	int32_t x327 = 25620032;
	int32_t x328 = 382;
	static volatile int32_t t69 = 13020;

	t69 = (x325%((x326<=x327)-x328));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x329 = 9U;
	volatile int64_t x330 = -1LL;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t70 = -473928042;

	t70 = (x329%((x330<=x331)-x332));

	if (t70 != 9) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = 38U;
	int32_t x335 = -1047515642;
	uint32_t x336 = 2U;
	volatile uint32_t t71 = 90851U;

	t71 = (x333%((x334<=x335)-x336));

	if (t71 != 4294967168U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = -1LL;
	int64_t t72 = 1203125418LL;

	t72 = (x337%((x338<=x339)-x340));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x342 = INT64_MIN;
	uint64_t x343 = UINT64_MAX;

	t73 = (x341%((x342<=x343)-x344));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = INT8_MIN;
	uint64_t x346 = 5138LLU;
	uint8_t x347 = UINT8_MAX;
	int64_t x348 = 6372LL;
	static int64_t t74 = -3495990LL;

	t74 = (x345%((x346<=x347)-x348));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x350 = 28U;
	uint32_t x351 = 933539034U;
	static volatile uint16_t x352 = UINT16_MAX;

	t75 = (x349%((x350<=x351)-x352));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = -17;
	int64_t x355 = INT64_MIN;
	int16_t x356 = -1;
	volatile int32_t t76 = -878138019;

	t76 = (x353%((x354<=x355)-x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x361 = 2U;
	int16_t x363 = 0;
	uint64_t x364 = 370608764LLU;
	static uint64_t t77 = 106LLU;

	t77 = (x361%((x362<=x363)-x364));

	if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = -1LL;
	volatile uint32_t x370 = 3U;
	int32_t x371 = INT32_MIN;
	volatile int64_t x372 = -1LL;
	int64_t t78 = 1684705476797464155LL;

	t78 = (x369%((x370<=x371)-x372));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = 99730599U;
	static volatile int8_t x379 = -1;
	uint32_t t79 = 917780U;

	t79 = (x377%((x378<=x379)-x380));

	if (t79 != 99730599U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MIN;
	uint16_t x391 = UINT16_MAX;
	int8_t x392 = INT8_MIN;

	t80 = (x389%((x390<=x391)-x392));

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = -1;
	static int16_t x394 = 150;
	static volatile int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t81 = -68212;

	t81 = (x393%((x394<=x395)-x396));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x397 = INT8_MIN;
	static int16_t x399 = 17;
	volatile uint16_t x400 = 1U;

	t82 = (x397%((x398<=x399)-x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	volatile int16_t x404 = -1;
	volatile int32_t t83 = 6443;

	t83 = (x401%((x402<=x403)-x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x405 = INT8_MIN;
	volatile uint64_t x406 = UINT64_MAX;
	uint64_t x408 = UINT64_MAX;
	static volatile uint64_t t84 = 28984259422LLU;

	t84 = (x405%((x406<=x407)-x408));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MAX;
	int16_t x411 = INT16_MIN;
	int8_t x412 = -13;
	int64_t t85 = 3255733783549507LL;

	t85 = (x409%((x410<=x411)-x412));

	if (t85 != -8LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x418 = INT64_MAX;
	uint16_t x419 = UINT16_MAX;
	uint32_t x420 = 198556U;

	t86 = (x417%((x418<=x419)-x420));

	if (t86 != -2533167608LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x421 = INT64_MIN;
	static int8_t x422 = INT8_MIN;
	static volatile uint64_t x424 = UINT64_MAX;
	volatile uint64_t t87 = 80882232560LLU;

	t87 = (x421%((x422<=x423)-x424));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x425 = 2U;
	uint32_t x426 = 0U;
	static int8_t x427 = -3;
	int16_t x428 = 3846;
	int32_t t88 = 40812712;

	t88 = (x425%((x426<=x427)-x428));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x429 = 2;
	int32_t x430 = INT32_MAX;
	uint64_t x431 = 29LLU;
	int32_t x432 = -56999;
	int32_t t89 = -1403;

	t89 = (x429%((x430<=x431)-x432));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x433 = INT32_MIN;
	int8_t x434 = -1;
	static uint64_t x435 = UINT64_MAX;
	static int16_t x436 = INT16_MIN;
	int32_t t90 = 8;

	t90 = (x433%((x434<=x435)-x436));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x438 = -1;
	volatile int16_t x439 = INT16_MIN;
	static int32_t x440 = -1;
	int32_t t91 = -15975653;

	t91 = (x437%((x438<=x439)-x440));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x442 = INT64_MAX;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = 149282LLU;

	t92 = (x441%((x442<=x443)-x444));

	if (t92 != 65535LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x445 = UINT64_MAX;
	int64_t x446 = INT64_MIN;
	static int32_t x447 = INT32_MAX;
	int16_t x448 = -1;
	uint64_t t93 = 261438727LLU;

	t93 = (x445%((x446<=x447)-x448));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x449 = 667371219;
	uint64_t x451 = 13304368LLU;

	t94 = (x449%((x450<=x451)-x452));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x453 = 64U;
	int16_t x454 = 5;
	static int32_t x455 = INT32_MIN;
	static volatile int32_t t95 = -3;

	t95 = (x453%((x454<=x455)-x456));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = -12481863256990LL;
	volatile int32_t x460 = INT32_MAX;
	int64_t t96 = 8LL;

	t96 = (x457%((x458<=x459)-x460));

	if (t96 != -688306438LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x461 = 46127U;
	uint32_t x462 = UINT32_MAX;
	static volatile uint64_t x463 = UINT64_MAX;
	uint32_t x464 = 72U;
	uint32_t t97 = 2U;

	t97 = (x461%((x462<=x463)-x464));

	if (t97 != 46127U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x465 = 334U;
	uint8_t x466 = 2U;
	volatile uint16_t x467 = UINT16_MAX;
	uint16_t x468 = 29502U;
	volatile int32_t t98 = -30055;

	t98 = (x465%((x466<=x467)-x468));

	if (t98 != 334) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x469 = UINT32_MAX;
	int32_t x470 = 2366832;
	volatile uint8_t x471 = 3U;
	int16_t x472 = -1;
	uint32_t t99 = 114053U;

	t99 = (x469%((x470<=x471)-x472));

	if (t99 != 0U) { NG(); } else { ; }
	
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

