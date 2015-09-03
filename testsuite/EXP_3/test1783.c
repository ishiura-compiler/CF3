#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MAX;
uint32_t x4 = UINT32_MAX;
volatile int64_t t1 = -17399831534819737LL;
int8_t x10 = INT8_MIN;
uint8_t x11 = 123U;
volatile int32_t x21 = INT32_MIN;
uint8_t x23 = 13U;
volatile int16_t x25 = -4;
static int8_t x31 = -7;
uint32_t x35 = UINT32_MAX;
int8_t x41 = INT8_MIN;
static volatile uint64_t x48 = UINT64_MAX;
uint32_t x53 = UINT32_MAX;
static int8_t x65 = INT8_MIN;
int16_t x67 = -247;
volatile int64_t t14 = 2810421592674479516LL;
static int64_t t15 = -460918522LL;
int16_t x80 = INT16_MIN;
static volatile uint64_t t18 = 7144359440754LLU;
uint8_t x92 = UINT8_MAX;
int8_t x93 = INT8_MAX;
int64_t x95 = -1LL;
uint8_t x96 = 48U;
uint16_t x99 = UINT16_MAX;
static volatile int32_t t22 = 3230;
volatile int32_t t23 = -64181704;
int8_t x116 = 1;
volatile uint64_t x124 = 1837562277955LLU;
int64_t x129 = 47905990251506349LL;
volatile int32_t x135 = 43;
int8_t x144 = INT8_MAX;
uint64_t x145 = UINT64_MAX;
int64_t t32 = 127861LL;
static int8_t x155 = -1;
static int64_t x156 = INT64_MAX;
int32_t t35 = -587;
uint64_t x175 = 1404434535148LLU;
int8_t x182 = -21;
uint8_t x185 = UINT8_MAX;
static uint32_t x198 = 46884240U;
int64_t t42 = -21282463740513844LL;
static int16_t x201 = 2;
int16_t x204 = INT16_MIN;
static uint8_t x207 = UINT8_MAX;
int32_t x212 = -61373;
int32_t t45 = 7698;
uint8_t x225 = UINT8_MAX;
uint64_t x232 = 227LLU;
volatile uint64_t t50 = 3254690LLU;
int32_t x239 = -1;
static volatile int16_t x240 = 1106;
int32_t t53 = 605398;
int32_t x247 = -1;
int64_t x251 = -1LL;
volatile int64_t t55 = 0LL;
int64_t x253 = INT64_MIN;
static volatile int32_t t56 = -225647;
uint64_t x261 = 3995591LLU;
volatile int32_t x267 = -199451856;
static volatile int32_t t58 = 0;
int8_t x269 = 4;
int8_t x275 = INT8_MAX;
int8_t x280 = -1;
int8_t x283 = INT8_MAX;
static uint16_t x284 = 7U;
int32_t x295 = 0;
int16_t x296 = INT16_MAX;
static int32_t x297 = -1912519;
volatile int64_t x299 = 131804203683312820LL;
int16_t x300 = INT16_MAX;
int64_t x305 = -1LL;
int32_t x306 = INT32_MIN;
volatile uint8_t x324 = UINT8_MAX;
static volatile int16_t x329 = INT16_MAX;
int64_t x334 = INT64_MIN;
int8_t x336 = -1;
volatile int32_t t74 = -54710550;
int32_t t77 = -3145374;
static volatile uint32_t t79 = 26U;
volatile int64_t t80 = 692707697717312LL;
uint32_t t82 = 0U;
static volatile int64_t x384 = INT64_MIN;
uint8_t x385 = 0U;
static uint64_t t84 = 8513967864LLU;
static int32_t t85 = -847674;
int32_t x401 = 38470513;
int8_t x403 = -1;
uint32_t x408 = UINT32_MAX;
volatile uint32_t t88 = 14283527U;
int32_t x410 = -1;
volatile uint8_t x413 = UINT8_MAX;
static uint8_t x434 = 31U;
uint8_t x436 = 31U;
static volatile int32_t x442 = INT32_MIN;
int32_t x459 = -75654104;
volatile uint16_t x460 = 1159U;


void f0(void) {
	uint16_t x1 = 855U;
	int64_t x3 = -1LL;
	static volatile int64_t t0 = 1152302LL;

	t0 = ((x1==x2)-(x3&x4));

	if (t0 != -4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 15398535U;
	int16_t x6 = INT16_MAX;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = 71U;

	t1 = ((x5==x6)-(x7&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	volatile int8_t x12 = -13;
	volatile int32_t t2 = 11692;

	t2 = ((x9==x10)-(x11&x12));

	if (t2 != -115) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 10;
	int32_t x18 = INT32_MIN;
	volatile int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MAX;
	static volatile int32_t t3 = 0;

	t3 = ((x17==x18)-(x19&x20));

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x22 = 6180474LL;
	uint8_t x24 = UINT8_MAX;
	int32_t t4 = -150457445;

	t4 = ((x21==x22)-(x23&x24));

	if (t4 != -13) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = INT16_MAX;
	static volatile int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MIN;
	volatile int64_t t5 = -31591LL;

	t5 = ((x25==x26)-(x27&x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	uint32_t x30 = 76130U;
	uint8_t x32 = 83U;
	int32_t t6 = -80701;

	t6 = ((x29==x30)-(x31&x32));

	if (t6 != -81) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 9633442U;
	volatile int64_t x34 = INT64_MIN;
	static uint8_t x36 = 0U;
	volatile uint32_t t7 = 5393758U;

	t7 = ((x33==x34)-(x35&x36));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = 1;
	int8_t x39 = -2;
	int16_t x40 = -1;
	volatile int32_t t8 = 5582;

	t8 = ((x37==x38)-(x39&x40));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = UINT8_MAX;
	int32_t t9 = 0;

	t9 = ((x41==x42)-(x43&x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 14;
	uint32_t x46 = 102008112U;
	int16_t x47 = INT16_MIN;
	volatile uint64_t t10 = 2807372291873267LLU;

	t10 = ((x45==x46)-(x47&x48));

	if (t10 != 32768LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 1618508772300956731LLU;
	volatile uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 846U;
	int16_t x52 = 7527;
	uint32_t t11 = 3660U;

	t11 = ((x49==x50)-(x51&x52));

	if (t11 != 4294966970U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x54 = 0;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = -1;
	static volatile uint32_t t12 = 7184U;

	t12 = ((x53==x54)-(x55&x56));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	int64_t x58 = INT64_MIN;
	volatile int16_t x59 = INT16_MIN;
	int16_t x60 = -1;
	volatile int32_t t13 = 13373695;

	t13 = ((x57==x58)-(x59&x60));

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = 157U;
	static int64_t x68 = 10627583LL;

	t14 = ((x65==x66)-(x67&x68));

	if (t14 != -10627337LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	volatile int32_t x70 = 355611;
	uint32_t x71 = 963575U;
	int64_t x72 = 32041093LL;

	t15 = ((x69==x70)-(x71&x72));

	if (t15 != -565381LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 20U;
	uint64_t x78 = 367126975256LLU;
	uint8_t x79 = 0U;
	volatile int32_t t16 = 7;

	t16 = ((x77==x78)-(x79&x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x81 = 133739U;
	int8_t x82 = 1;
	int64_t x83 = INT64_MIN;
	volatile int8_t x84 = 6;
	static int64_t t17 = 512043006806LL;

	t17 = ((x81==x82)-(x83&x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x85 = -109169LL;
	volatile int32_t x86 = INT32_MAX;
	static volatile int16_t x87 = INT16_MIN;
	uint64_t x88 = UINT64_MAX;

	t18 = ((x85==x86)-(x87&x88));

	if (t18 != 32768LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = INT32_MAX;
	int16_t x90 = INT16_MIN;
	static int64_t x91 = INT64_MAX;
	static int64_t t19 = -13LL;

	t19 = ((x89==x90)-(x91&x92));

	if (t19 != -255LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = INT32_MIN;
	volatile int64_t t20 = 48818647LL;

	t20 = ((x93==x94)-(x95&x96));

	if (t20 != -48LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x97 = UINT16_MAX;
	static int64_t x98 = -4428351162LL;
	int16_t x100 = INT16_MIN;
	static volatile int32_t t21 = -3108;

	t21 = ((x97==x98)-(x99&x100));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 403U;
	static volatile uint32_t x106 = 484U;
	static int16_t x107 = -1;
	uint8_t x108 = 16U;

	t22 = ((x105==x106)-(x107&x108));

	if (t22 != -16) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 77U;
	volatile int64_t x110 = INT64_MIN;
	volatile uint8_t x111 = 4U;
	uint16_t x112 = UINT16_MAX;

	t23 = ((x109==x110)-(x111&x112));

	if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = -8;
	static int64_t x114 = -30150569827137689LL;
	int32_t x115 = INT32_MIN;
	volatile int32_t t24 = -227269;

	t24 = ((x113==x114)-(x115&x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 389;
	volatile uint32_t x118 = 20391U;
	volatile int8_t x119 = 10;
	static int8_t x120 = INT8_MIN;
	int32_t t25 = -2890707;

	t25 = ((x117==x118)-(x119&x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	static uint32_t x122 = 0U;
	volatile uint16_t x123 = 332U;
	volatile uint64_t t26 = 25045655679082980LLU;

	t26 = ((x121==x122)-(x123&x124));

	if (t26 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x130 = INT32_MIN;
	int64_t x131 = 31992LL;
	uint8_t x132 = 47U;
	int64_t t27 = 5LL;

	t27 = ((x129==x130)-(x131&x132));

	if (t27 != -40LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -1;
	volatile uint8_t x134 = UINT8_MAX;
	int16_t x136 = -16;
	int32_t t28 = -396410672;

	t28 = ((x133==x134)-(x135&x136));

	if (t28 != -32) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = 104009204;
	uint64_t x138 = 24256LLU;
	uint64_t x139 = 1005LLU;
	int64_t x140 = 18127222780606LL;
	volatile uint64_t t29 = 1153270836LLU;

	t29 = ((x137==x138)-(x139&x140));

	if (t29 != 18446744073709550932LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 58U;
	int8_t x142 = INT8_MIN;
	int64_t x143 = -2525116981145059429LL;
	int64_t t30 = 7496320673LL;

	t30 = ((x141==x142)-(x143&x144));

	if (t30 != -27LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x146 = 211;
	int64_t x147 = INT64_MIN;
	int8_t x148 = 61;
	int64_t t31 = -460600897544706LL;

	t31 = ((x145==x146)-(x147&x148));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x149 = 1;
	int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	static uint8_t x152 = UINT8_MAX;

	t32 = ((x149==x150)-(x151&x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MIN;
	volatile int16_t x154 = INT16_MAX;
	int64_t t33 = -609LL;

	t33 = ((x153==x154)-(x155&x156));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x157 = 5677LLU;
	volatile int16_t x158 = 0;
	int8_t x159 = INT8_MAX;
	static int8_t x160 = 1;
	volatile int32_t t34 = 946887;

	t34 = ((x157==x158)-(x159&x160));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = -8;
	static uint8_t x163 = 89U;
	int16_t x164 = INT16_MIN;

	t35 = ((x161==x162)-(x163&x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = -1;
	int32_t x167 = 711450291;
	int64_t x168 = INT64_MAX;
	volatile int64_t t36 = 82LL;

	t36 = ((x165==x166)-(x167&x168));

	if (t36 != -711450291LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x173 = 3U;
	volatile uint32_t x174 = UINT32_MAX;
	volatile uint16_t x176 = 3733U;
	uint64_t t37 = 1681LLU;

	t37 = ((x173==x174)-(x175&x176));

	if (t37 != 18446744073709550972LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x177 = 3U;
	uint8_t x178 = 0U;
	static int8_t x179 = 15;
	int32_t x180 = INT32_MIN;
	int32_t t38 = 3214;

	t38 = ((x177==x178)-(x179&x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x181 = 307107233U;
	uint32_t x183 = UINT32_MAX;
	static uint32_t x184 = 349429U;
	volatile uint32_t t39 = 486863774U;

	t39 = ((x181==x182)-(x183&x184));

	if (t39 != 4294617867U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x186 = 37LLU;
	static uint32_t x187 = 96356020U;
	int64_t x188 = 355LL;
	volatile int64_t t40 = 207LL;

	t40 = ((x185==x186)-(x187&x188));

	if (t40 != -32LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = 22U;
	static int8_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = -1;
	volatile int32_t t41 = -1380;

	t41 = ((x193==x194)-(x195&x196));

	if (t41 != -65535) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = -183383440LL;
	volatile uint32_t x199 = UINT32_MAX;
	int64_t x200 = -330LL;

	t42 = ((x197==x198)-(x199&x200));

	if (t42 != -4294966966LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MIN;
	int32_t t43 = 29839069;

	t43 = ((x201==x202)-(x203&x204));

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x205 = INT16_MIN;
	volatile int16_t x206 = 591;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t44 = -468607619;

	t44 = ((x205==x206)-(x207&x208));

	if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = 0;
	static uint16_t x210 = UINT16_MAX;
	int8_t x211 = INT8_MAX;

	t45 = ((x209==x210)-(x211&x212));

	if (t45 != -67) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x213 = 19;
	int64_t x214 = -81089527772040LL;
	volatile int16_t x215 = INT16_MIN;
	uint8_t x216 = UINT8_MAX;
	static volatile int32_t t46 = 7195;

	t46 = ((x213==x214)-(x215&x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = -225469LL;
	static int64_t x218 = INT64_MAX;
	static int8_t x219 = 1;
	volatile int8_t x220 = -18;
	volatile int32_t t47 = -74;

	t47 = ((x217==x218)-(x219&x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x221 = 9685485LLU;
	int32_t x222 = INT32_MAX;
	static int16_t x223 = -1;
	int64_t x224 = INT64_MAX;
	volatile int64_t t48 = 38159100LL;

	t48 = ((x221==x222)-(x223&x224));

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x226 = INT8_MAX;
	static uint16_t x227 = UINT16_MAX;
	uint32_t x228 = 72041U;
	volatile uint32_t t49 = 238572U;

	t49 = ((x225==x226)-(x227&x228));

	if (t49 != 4294960791U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x229 = -3;
	volatile uint8_t x230 = 1U;
	int64_t x231 = INT64_MAX;

	t50 = ((x229==x230)-(x231&x232));

	if (t50 != 18446744073709551389LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x233 = 107467807736171310LLU;
	int8_t x234 = 0;
	int64_t x235 = -1LL;
	int8_t x236 = 0;
	static volatile int64_t t51 = -2LL;

	t51 = ((x233==x234)-(x235&x236));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = INT64_MIN;
	volatile int8_t x238 = INT8_MIN;
	static int32_t t52 = 829;

	t52 = ((x237==x238)-(x239&x240));

	if (t52 != -1106) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = 221826122U;
	uint64_t x242 = 32446306755LLU;
	int32_t x243 = -1;
	volatile uint16_t x244 = 181U;

	t53 = ((x241==x242)-(x243&x244));

	if (t53 != -181) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = -1;
	int8_t x246 = INT8_MIN;
	static volatile int8_t x248 = INT8_MIN;
	int32_t t54 = 24;

	t54 = ((x245==x246)-(x247&x248));

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x249 = -1714247952100059913LL;
	int64_t x250 = -17809191083872332LL;
	int32_t x252 = INT32_MAX;

	t55 = ((x249==x250)-(x251&x252));

	if (t55 != -2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x254 = 7U;
	volatile int16_t x255 = -1;
	int8_t x256 = INT8_MIN;

	t56 = ((x253==x254)-(x255&x256));

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x262 = -410;
	int32_t x263 = INT32_MAX;
	static volatile int64_t x264 = 450292LL;
	int64_t t57 = 54445222LL;

	t57 = ((x261==x262)-(x263&x264));

	if (t57 != -450292LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x265 = 8233U;
	int16_t x266 = -1;
	int32_t x268 = -1;

	t58 = ((x265==x266)-(x267&x268));

	if (t58 != 199451856) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x270 = 47;
	int8_t x271 = INT8_MIN;
	volatile int32_t x272 = -1;
	int32_t t59 = -517776;

	t59 = ((x269==x270)-(x271&x272));

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x273 = 2U;
	static volatile int32_t x274 = INT32_MAX;
	static uint64_t x276 = UINT64_MAX;
	volatile uint64_t t60 = 119LLU;

	t60 = ((x273==x274)-(x275&x276));

	if (t60 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x277 = 12U;
	uint8_t x278 = 5U;
	int16_t x279 = INT16_MIN;
	int32_t t61 = -1;

	t61 = ((x277==x278)-(x279&x280));

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x281 = INT32_MIN;
	static volatile int16_t x282 = 5741;
	int32_t t62 = -7;

	t62 = ((x281==x282)-(x283&x284));

	if (t62 != -7) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x289 = INT64_MAX;
	int64_t x290 = INT64_MIN;
	static uint8_t x291 = UINT8_MAX;
	static int64_t x292 = INT64_MIN;
	volatile int64_t t63 = 7873583323LL;

	t63 = ((x289==x290)-(x291&x292));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x293 = 14115;
	int64_t x294 = INT64_MAX;
	volatile int32_t t64 = 2758;

	t64 = ((x293==x294)-(x295&x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x298 = INT32_MIN;
	volatile int64_t t65 = -14010103917149LL;

	t65 = ((x297==x298)-(x299&x300));

	if (t65 != -29876LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x301 = 583765290U;
	int8_t x302 = 0;
	int8_t x303 = 1;
	volatile int64_t x304 = -1LL;
	volatile int64_t t66 = 1311LL;

	t66 = ((x301==x302)-(x303&x304));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x307 = 1;
	uint16_t x308 = 1U;
	int32_t t67 = -1057427800;

	t67 = ((x305==x306)-(x307&x308));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x313 = UINT8_MAX;
	int64_t x314 = 3836LL;
	volatile int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MAX;
	static volatile int64_t t68 = 478846404968LL;

	t68 = ((x313==x314)-(x315&x316));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x317 = UINT64_MAX;
	uint32_t x318 = 89859875U;
	static int8_t x319 = -1;
	static volatile int32_t x320 = 27947057;
	int32_t t69 = -28;

	t69 = ((x317==x318)-(x319&x320));

	if (t69 != -27947057) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = 6U;
	int8_t x322 = -1;
	int32_t x323 = -1;
	volatile int32_t t70 = -37130301;

	t70 = ((x321==x322)-(x323&x324));

	if (t70 != -255) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x325 = UINT16_MAX;
	uint64_t x326 = 62774609012322959LLU;
	uint64_t x327 = 38098427337LLU;
	uint8_t x328 = 42U;
	volatile uint64_t t71 = 51553822551536530LLU;

	t71 = ((x325==x326)-(x327&x328));

	if (t71 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x330 = INT16_MAX;
	volatile int32_t x331 = 2577359;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t72 = -3452;

	t72 = ((x329==x330)-(x331&x332));

	if (t72 != -2555903) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x333 = 3;
	static uint64_t x335 = UINT64_MAX;
	uint64_t t73 = 1756086888LLU;

	t73 = ((x333==x334)-(x335&x336));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x337 = -1;
	static volatile int32_t x338 = -88165;
	static volatile uint16_t x339 = UINT16_MAX;
	uint8_t x340 = UINT8_MAX;

	t74 = ((x337==x338)-(x339&x340));

	if (t74 != -255) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x341 = INT8_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 3080U;
	uint32_t t75 = 31989U;

	t75 = ((x341==x342)-(x343&x344));

	if (t75 != 4294964216U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = INT8_MAX;
	volatile uint8_t x346 = 20U;
	volatile uint32_t x347 = 72665804U;
	int64_t x348 = INT64_MAX;
	int64_t t76 = -60426546LL;

	t76 = ((x345==x346)-(x347&x348));

	if (t76 != -72665804LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MAX;
	uint64_t x350 = 8875795025698281LLU;
	int32_t x351 = -2754371;
	uint16_t x352 = 2468U;

	t77 = ((x349==x350)-(x351&x352));

	if (t77 != -2212) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x357 = UINT64_MAX;
	int32_t x358 = -7034;
	static int8_t x359 = INT8_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t78 = 157247;

	t78 = ((x357==x358)-(x359&x360));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = -1LL;
	int64_t x362 = INT64_MAX;
	static uint32_t x363 = 152U;
	static uint32_t x364 = 1663225U;

	t79 = ((x361==x362)-(x363&x364));

	if (t79 != 4294967144U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x365 = -127;
	static volatile int64_t x366 = -26694LL;
	int32_t x367 = INT32_MAX;
	int64_t x368 = INT64_MIN;

	t80 = ((x365==x366)-(x367&x368));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x369 = -76;
	uint64_t x370 = UINT64_MAX;
	volatile int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t81 = 4451;

	t81 = ((x369==x370)-(x371&x372));

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = 0;
	int8_t x378 = 1;
	static uint32_t x379 = 55256U;
	int16_t x380 = -1;

	t82 = ((x377==x378)-(x379&x380));

	if (t82 != 4294912040U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x381 = 28409U;
	int16_t x382 = 67;
	int64_t x383 = 51212579LL;
	int64_t t83 = 88952610238955LL;

	t83 = ((x381==x382)-(x383&x384));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x386 = INT16_MAX;
	uint64_t x387 = 10LLU;
	uint32_t x388 = UINT32_MAX;

	t84 = ((x385==x386)-(x387&x388));

	if (t84 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x389 = 849LLU;
	uint32_t x390 = 63528U;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MIN;

	t85 = ((x389==x390)-(x391&x392));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x397 = -1;
	static int16_t x398 = INT16_MIN;
	int16_t x399 = 1;
	int64_t x400 = INT64_MIN;
	volatile int64_t t86 = -1381572467LL;

	t86 = ((x397==x398)-(x399&x400));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x402 = INT32_MIN;
	uint16_t x404 = 22U;
	int32_t t87 = 241173;

	t87 = ((x401==x402)-(x403&x404));

	if (t87 != -22) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	volatile int32_t x407 = -1;

	t88 = ((x405==x406)-(x407&x408));

	if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x409 = UINT64_MAX;
	volatile uint64_t x411 = UINT64_MAX;
	uint8_t x412 = 0U;
	static uint64_t t89 = 4LLU;

	t89 = ((x409==x410)-(x411&x412));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x414 = INT8_MAX;
	int32_t x415 = -2;
	static uint8_t x416 = 43U;
	static volatile int32_t t90 = 4090;

	t90 = ((x413==x414)-(x415&x416));

	if (t90 != -42) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x421 = 2U;
	volatile int32_t x422 = -808;
	int16_t x423 = INT16_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t91 = -980075;

	t91 = ((x421==x422)-(x423&x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x425 = 44703LLU;
	static int32_t x426 = INT32_MIN;
	static int8_t x427 = -1;
	uint16_t x428 = 180U;
	int32_t t92 = -5516;

	t92 = ((x425==x426)-(x427&x428));

	if (t92 != -180) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x429 = INT64_MAX;
	volatile uint32_t x430 = 23791U;
	int32_t x431 = INT32_MIN;
	int64_t x432 = 1041LL;
	int64_t t93 = -20892833884641LL;

	t93 = ((x429==x430)-(x431&x432));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = INT64_MIN;
	uint8_t x435 = 0U;
	volatile int32_t t94 = 325;

	t94 = ((x433==x434)-(x435&x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = INT64_MAX;
	int32_t x438 = INT32_MAX;
	uint8_t x439 = 0U;
	volatile uint64_t x440 = UINT64_MAX;
	uint64_t t95 = 16258LLU;

	t95 = ((x437==x438)-(x439&x440));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x441 = 8676U;
	int16_t x443 = INT16_MIN;
	int8_t x444 = -1;
	volatile int32_t t96 = 1075;

	t96 = ((x441==x442)-(x443&x444));

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x449 = 6387334600296207075LLU;
	static int16_t x450 = INT16_MAX;
	int32_t x451 = INT32_MAX;
	volatile int64_t x452 = INT64_MAX;
	int64_t t97 = -589034253983LL;

	t97 = ((x449==x450)-(x451&x452));

	if (t97 != -2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x453 = 2U;
	int8_t x454 = -59;
	static volatile int16_t x455 = INT16_MIN;
	int64_t x456 = -707831939998342345LL;
	volatile int64_t t98 = 1699996LL;

	t98 = ((x453==x454)-(x455&x456));

	if (t98 != 707831939998351360LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = -4415921389750919LL;
	int32_t x458 = INT32_MIN;
	volatile int32_t t99 = -67;

	t99 = ((x457==x458)-(x459&x460));

	if (t99 != -1024) { NG(); } else { ; }
	
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

