#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = UINT64_MAX;
int8_t x12 = INT8_MIN;
static uint8_t x15 = 116U;
int64_t x24 = INT64_MAX;
int8_t x27 = -1;
int16_t x29 = INT16_MIN;
int8_t x30 = -1;
int8_t x33 = INT8_MIN;
int8_t x34 = -11;
int16_t x35 = 13329;
static uint64_t x36 = UINT64_MAX;
uint8_t x37 = UINT8_MAX;
int16_t x39 = 1;
static uint16_t x40 = 58U;
int8_t x42 = -2;
int16_t x51 = -1;
int32_t x52 = INT32_MIN;
uint8_t x53 = UINT8_MAX;
int32_t x56 = -700220;
int64_t x60 = 6128237LL;
static int32_t x73 = INT32_MAX;
int8_t x80 = -6;
int16_t x82 = INT16_MIN;
volatile int16_t x91 = -3;
int8_t x92 = -1;
int32_t x97 = 0;
volatile uint16_t x99 = UINT16_MAX;
uint8_t x107 = 6U;
int16_t x112 = INT16_MAX;
int32_t x123 = -275647;
uint8_t x130 = UINT8_MAX;
volatile int64_t t29 = -2812692094195191572LL;
uint32_t x141 = UINT32_MAX;
static int32_t x143 = -1;
static uint16_t x148 = UINT16_MAX;
int16_t x154 = -1;
static volatile uint16_t x156 = 81U;
int8_t x157 = INT8_MIN;
volatile int64_t x168 = 10758596344864LL;
int64_t t37 = 4920759402902LL;
static volatile int32_t t38 = 195812;
volatile uint64_t x174 = UINT64_MAX;
int64_t t40 = 33703304208765LL;
uint16_t x182 = UINT16_MAX;
int16_t x183 = 2;
uint8_t x194 = UINT8_MAX;
int8_t x198 = 41;
int16_t x199 = INT16_MAX;
int32_t t44 = 51099;
int16_t x212 = 275;
int64_t x216 = INT64_MAX;
int32_t x218 = INT32_MAX;
int64_t t48 = -4472809LL;
volatile int32_t x221 = INT32_MIN;
int8_t x223 = -52;
int8_t x224 = -1;
int16_t x226 = -3;
int8_t x229 = 14;
int8_t x232 = INT8_MAX;
static uint64_t x234 = UINT64_MAX;
int32_t x238 = -1;
int32_t t55 = 0;
static uint64_t x258 = 4443377336655LLU;
volatile int8_t x260 = 0;
uint8_t x280 = UINT8_MAX;
uint16_t x281 = 17U;
int16_t x290 = -8307;
int64_t x298 = 128LL;
uint64_t x299 = 21717883271984LLU;
volatile int64_t t68 = 1007046434LL;
int16_t x308 = -13092;
static volatile int64_t x317 = -1LL;
int8_t x318 = -56;
int8_t x328 = INT8_MIN;
static uint16_t x329 = 779U;
int32_t x330 = INT32_MIN;
int16_t x332 = -1;
volatile uint32_t t75 = 2263480U;
int64_t t77 = 66222645LL;
int32_t x349 = -1;
static uint8_t x352 = 0U;
static int8_t x353 = -4;
static uint8_t x357 = UINT8_MAX;
int64_t x363 = INT64_MIN;
int16_t x365 = INT16_MAX;
int8_t x366 = 1;
int16_t x367 = 1747;
static volatile int32_t x379 = INT32_MIN;
int8_t x384 = -1;
volatile int32_t t88 = 68;
volatile int32_t x386 = -1;
uint32_t x388 = UINT32_MAX;
int64_t x399 = 0LL;
uint8_t x402 = 0U;
int8_t x403 = INT8_MIN;
int64_t x411 = INT64_MIN;
static int16_t x412 = INT16_MIN;
int32_t x415 = -2425;
int16_t x423 = -7;
uint16_t x424 = UINT16_MAX;
volatile int32_t x428 = INT32_MIN;


void f0(void) {
	static int8_t x1 = -5;
	volatile int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MIN;
	static uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 265597000;

	t0 = ((x1==x2)%(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 104U;
	int64_t x6 = INT64_MIN;
	volatile uint64_t x7 = 190266780740298LLU;
	volatile uint64_t t1 = 17788985LLU;

	t1 = ((x5==x6)%(x7^x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = INT32_MIN;
	static volatile int32_t t2 = -408352700;

	t2 = ((x9==x10)%(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 6LLU;
	volatile uint64_t x14 = 452321027579LLU;
	int8_t x16 = 0;
	int32_t t3 = -31199020;

	t3 = ((x13==x14)%(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 49;
	int32_t x18 = INT32_MAX;
	static uint8_t x19 = 87U;
	static int32_t x20 = 1;
	volatile int32_t t4 = 3789;

	t4 = ((x17==x18)%(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	uint8_t x23 = 121U;
	volatile int64_t t5 = -10LL;

	t5 = ((x21==x22)%(x23^x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int64_t x26 = 1747333267LL;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 758792;

	t6 = ((x25==x26)%(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -41455978LL;

	t7 = ((x29==x30)%(x31^x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t t8 = 162615937928LLU;

	t8 = ((x33==x34)%(x35^x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -1LL;
	static int32_t t9 = 3619812;

	t9 = ((x37==x38)%(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	volatile int64_t x44 = 6052LL;
	int64_t t10 = -285541274LL;

	t10 = ((x41==x42)%(x43^x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -727;
	static uint8_t x46 = UINT8_MAX;
	static uint8_t x47 = 27U;
	int16_t x48 = 2;
	static volatile int32_t t11 = 2532167;

	t11 = ((x45==x46)%(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 8U;
	uint64_t x50 = 2026112992530219LLU;
	static volatile int32_t t12 = 89045;

	t12 = ((x49==x50)%(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 5U;
	int8_t x55 = INT8_MIN;
	static int32_t t13 = -1624;

	t13 = ((x53==x54)%(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MAX;
	uint64_t x58 = UINT64_MAX;
	volatile int16_t x59 = INT16_MIN;
	volatile int64_t t14 = 10691657411LL;

	t14 = ((x57==x58)%(x59^x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 44U;
	volatile int32_t x62 = INT32_MAX;
	int8_t x63 = -1;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 0;

	t15 = ((x61==x62)%(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = UINT32_MAX;
	int16_t x66 = -1;
	static uint8_t x67 = 50U;
	int8_t x68 = INT8_MIN;
	int32_t t16 = 53;

	t16 = ((x65==x66)%(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	static int32_t x70 = INT32_MAX;
	volatile int8_t x71 = 7;
	int32_t x72 = INT32_MIN;
	int32_t t17 = -514447;

	t17 = ((x69==x70)%(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MAX;
	int16_t x75 = INT16_MAX;
	uint32_t x76 = 28851663U;
	uint32_t t18 = 0U;

	t18 = ((x73==x74)%(x75^x76));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	int16_t x79 = -1;
	static volatile int32_t t19 = -58090967;

	t19 = ((x77==x78)%(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MAX;
	int8_t x83 = -40;
	int64_t x84 = -45LL;
	int64_t t20 = -1004LL;

	t20 = ((x81==x82)%(x83^x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	int32_t t21 = 1;

	t21 = ((x89==x90)%(x91^x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	static int16_t x94 = 7;
	int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	int32_t t22 = 28371;

	t22 = ((x93==x94)%(x95^x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = INT32_MIN;
	int64_t x100 = INT64_MAX;
	int64_t t23 = 134248193423903276LL;

	t23 = ((x97==x98)%(x99^x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 70027777315474931LLU;
	uint64_t x102 = 1157581528LLU;
	static int16_t x103 = INT16_MIN;
	volatile uint32_t x104 = UINT32_MAX;
	volatile uint32_t t24 = 346881U;

	t24 = ((x101==x102)%(x103^x104));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = 1908;
	int32_t x106 = -9;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t25 = 13;

	t25 = ((x105==x106)%(x107^x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x109 = 33633951032808LL;
	static volatile int16_t x110 = INT16_MIN;
	static int64_t x111 = -5LL;
	volatile int64_t t26 = -4338742525152671LL;

	t26 = ((x109==x110)%(x111^x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = 354U;
	volatile int16_t x114 = INT16_MIN;
	static volatile int32_t x115 = INT32_MIN;
	static int16_t x116 = 1305;
	volatile int32_t t27 = 772662;

	t27 = ((x113==x114)%(x115^x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -19467LL;
	uint64_t x122 = 2193670943659LLU;
	int8_t x124 = 19;
	static int32_t t28 = -205;

	t28 = ((x121==x122)%(x123^x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 2755U;
	volatile int64_t x131 = -2270745LL;
	uint16_t x132 = 38U;

	t29 = ((x129==x130)%(x131^x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MIN;
	static uint8_t x134 = UINT8_MAX;
	uint32_t x135 = 11683602U;
	int64_t x136 = -7683600660LL;
	int64_t t30 = 2763598716LL;

	t30 = ((x133==x134)%(x135^x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -898;
	int8_t x138 = 0;
	volatile int8_t x139 = -1;
	int64_t x140 = INT64_MAX;
	int64_t t31 = -108839637884430219LL;

	t31 = ((x137==x138)%(x139^x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x142 = INT8_MAX;
	int32_t x144 = INT32_MIN;
	volatile int32_t t32 = 1;

	t32 = ((x141==x142)%(x143^x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MAX;
	static int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MIN;
	int32_t t33 = -146409728;

	t33 = ((x145==x146)%(x147^x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -1LL;
	int8_t x155 = -1;
	volatile int32_t t34 = -75348;

	t34 = ((x153==x154)%(x155^x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x158 = 172830U;
	int16_t x159 = -8997;
	volatile int16_t x160 = INT16_MAX;
	volatile int32_t t35 = 1;

	t35 = ((x157==x158)%(x159^x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MIN;
	volatile int32_t x162 = -1;
	uint32_t x163 = 320052U;
	int32_t x164 = -1067332253;
	static uint32_t t36 = 3219U;

	t36 = ((x161==x162)%(x163^x164));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x165 = -62;
	int32_t x166 = INT32_MAX;
	static int64_t x167 = INT64_MIN;

	t37 = ((x165==x166)%(x167^x168));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x169 = 6507U;
	int16_t x170 = -1;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -872631;

	t38 = ((x169==x170)%(x171^x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = UINT8_MAX;
	static uint8_t x175 = 7U;
	static int16_t x176 = 1;
	volatile int32_t t39 = 2046;

	t39 = ((x173==x174)%(x175^x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MAX;
	int64_t x180 = INT64_MIN;

	t40 = ((x177==x178)%(x179^x180));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MIN;
	int64_t x184 = 22LL;
	int64_t t41 = -1931003LL;

	t41 = ((x181==x182)%(x183^x184));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = -13820;
	uint32_t x188 = 8844U;
	volatile uint32_t t42 = 893U;

	t42 = ((x185==x186)%(x187^x188));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 0U;
	int8_t x195 = -2;
	int16_t x196 = -473;
	volatile int32_t t43 = 72;

	t43 = ((x193==x194)%(x195^x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x197 = 17U;
	int16_t x200 = -1;

	t44 = ((x197==x198)%(x199^x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = 57U;
	int64_t t45 = 2953LL;

	t45 = ((x201==x202)%(x203^x204));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MIN;
	static volatile int64_t x210 = -1LL;
	uint16_t x211 = 6U;
	volatile int32_t t46 = 378323;

	t46 = ((x209==x210)%(x211^x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = -13251;
	uint16_t x214 = UINT16_MAX;
	volatile uint32_t x215 = 17U;
	volatile int64_t t47 = 3LL;

	t47 = ((x213==x214)%(x215^x216));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = 62;
	int64_t x219 = INT64_MIN;
	uint16_t x220 = 0U;

	t48 = ((x217==x218)%(x219^x220));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x222 = 43U;
	static volatile int32_t t49 = -4694;

	t49 = ((x221==x222)%(x223^x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = 0;
	int32_t x227 = INT32_MIN;
	volatile int64_t x228 = -1LL;
	static int64_t t50 = -7915244LL;

	t50 = ((x225==x226)%(x227^x228));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x230 = 228974U;
	volatile int64_t x231 = 2137270748LL;
	volatile int64_t t51 = -136276953961LL;

	t51 = ((x229==x230)%(x231^x232));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MIN;
	int32_t x235 = 32;
	int32_t x236 = INT32_MAX;
	int32_t t52 = -14341923;

	t52 = ((x233==x234)%(x235^x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MIN;
	static int16_t x239 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	static volatile int32_t t53 = -361922;

	t53 = ((x237==x238)%(x239^x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = 952185079159112LLU;
	static uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MIN;
	int32_t x244 = 0;
	volatile int32_t t54 = -1;

	t54 = ((x241==x242)%(x243^x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	volatile uint8_t x247 = 1U;
	volatile int32_t x248 = INT32_MAX;

	t55 = ((x245==x246)%(x247^x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x249 = 88232688096LLU;
	volatile uint16_t x250 = 683U;
	static uint8_t x251 = 117U;
	uint8_t x252 = 9U;
	int32_t t56 = -21677532;

	t56 = ((x249==x250)%(x251^x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = 2042;
	uint64_t x254 = UINT64_MAX;
	uint16_t x255 = 1U;
	uint8_t x256 = 3U;
	int32_t t57 = -1;

	t57 = ((x253==x254)%(x255^x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = -7;
	uint8_t x259 = 15U;
	static int32_t t58 = -9362274;

	t58 = ((x257==x258)%(x259^x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MAX;
	uint64_t x262 = 681197751158651237LLU;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	volatile int32_t t59 = -6760;

	t59 = ((x261==x262)%(x263^x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = -1LL;
	static uint8_t x267 = UINT8_MAX;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t60 = 38271LLU;

	t60 = ((x265==x266)%(x267^x268));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = -1;
	static uint32_t x270 = 1U;
	volatile uint16_t x271 = 209U;
	uint64_t x272 = 76267344LLU;
	volatile uint64_t t61 = 17LLU;

	t61 = ((x269==x270)%(x271^x272));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = -1;
	int32_t x279 = -65875562;
	static volatile int32_t t62 = 497226;

	t62 = ((x277==x278)%(x279^x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x282 = 0;
	static volatile uint64_t x283 = 672LLU;
	static uint32_t x284 = 5585U;
	uint64_t t63 = 15599231054LLU;

	t63 = ((x281==x282)%(x283^x284));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = -1;
	static int32_t x286 = INT32_MIN;
	int64_t x287 = -2178329740579473420LL;
	volatile int8_t x288 = -1;
	int64_t t64 = 155980484411273221LL;

	t64 = ((x285==x286)%(x287^x288));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = -1;
	int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t65 = -181;

	t65 = ((x289==x290)%(x291^x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = -62LL;
	uint32_t x294 = 253304013U;
	static uint32_t x295 = 717758U;
	volatile int8_t x296 = INT8_MIN;
	volatile uint32_t t66 = 1694443U;

	t66 = ((x293==x294)%(x295^x296));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = INT64_MAX;
	volatile int8_t x300 = -1;
	static uint64_t t67 = 7260645776502216LLU;

	t67 = ((x297==x298)%(x299^x300));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 0U;
	int32_t x303 = INT32_MIN;
	static int64_t x304 = INT64_MIN;

	t68 = ((x301==x302)%(x303^x304));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = -28;
	int16_t x306 = INT16_MIN;
	volatile uint64_t x307 = UINT64_MAX;
	uint64_t t69 = 6108588392LLU;

	t69 = ((x305==x306)%(x307^x308));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x309 = 112LLU;
	volatile int8_t x310 = INT8_MIN;
	int16_t x311 = -1;
	volatile uint16_t x312 = 143U;
	int32_t t70 = -11;

	t70 = ((x309==x310)%(x311^x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x313 = 0;
	uint32_t x314 = 9U;
	int8_t x315 = -18;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t71 = 69432137827668LLU;

	t71 = ((x313==x314)%(x315^x316));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MAX;
	static volatile int32_t t72 = 218;

	t72 = ((x317==x318)%(x319^x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MAX;
	static uint16_t x324 = UINT16_MAX;
	volatile int32_t t73 = 24639;

	t73 = ((x321==x322)%(x323^x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = INT16_MIN;
	static volatile uint64_t x326 = 55LLU;
	uint64_t x327 = 1LLU;
	static uint64_t t74 = 30913550023340LLU;

	t74 = ((x325==x326)%(x327^x328));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x331 = 360U;

	t75 = ((x329==x330)%(x331^x332));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x334 = 120U;
	volatile int16_t x335 = -3966;
	int16_t x336 = -23;
	volatile int32_t t76 = 125;

	t76 = ((x333==x334)%(x335^x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = 414443057833LL;
	static volatile uint64_t x338 = 88396920667LLU;
	volatile int32_t x339 = INT32_MAX;
	static int64_t x340 = 5380844356143540LL;

	t77 = ((x337==x338)%(x339^x340));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x341 = INT32_MAX;
	volatile int8_t x342 = INT8_MIN;
	int64_t x343 = -1LL;
	uint16_t x344 = UINT16_MAX;
	volatile int64_t t78 = -34839345829265809LL;

	t78 = ((x341==x342)%(x343^x344));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = 0;
	volatile uint64_t x346 = 4612316496715407414LLU;
	uint8_t x347 = 21U;
	int8_t x348 = 14;
	static int32_t t79 = -16976;

	t79 = ((x345==x346)%(x347^x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x350 = 1;
	int64_t x351 = INT64_MIN;
	volatile int64_t t80 = -97271673958LL;

	t80 = ((x349==x350)%(x351^x352));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x354 = UINT8_MAX;
	int8_t x355 = -24;
	int16_t x356 = 1;
	volatile int32_t t81 = 3103;

	t81 = ((x353==x354)%(x355^x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x358 = INT32_MIN;
	static volatile int8_t x359 = 11;
	volatile uint16_t x360 = 13343U;
	volatile int32_t t82 = 904754;

	t82 = ((x357==x358)%(x359^x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	int8_t x364 = INT8_MIN;
	volatile int64_t t83 = -246986LL;

	t83 = ((x361==x362)%(x363^x364));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x368 = UINT16_MAX;
	static volatile int32_t t84 = -4003910;

	t84 = ((x365==x366)%(x367^x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x369 = INT64_MIN;
	uint64_t x370 = 83321LLU;
	uint64_t x371 = UINT64_MAX;
	static volatile uint16_t x372 = 20565U;
	uint64_t t85 = 190264303653114051LLU;

	t85 = ((x369==x370)%(x371^x372));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = -1;
	uint8_t x374 = 56U;
	uint8_t x375 = UINT8_MAX;
	volatile int16_t x376 = INT16_MAX;
	int32_t t86 = -101062;

	t86 = ((x373==x374)%(x375^x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = INT32_MIN;
	static volatile int16_t x378 = INT16_MIN;
	int32_t x380 = INT32_MAX;
	volatile int32_t t87 = 113218991;

	t87 = ((x377==x378)%(x379^x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MAX;
	volatile uint16_t x382 = 639U;
	volatile uint8_t x383 = 0U;

	t88 = ((x381==x382)%(x383^x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x387 = 1U;
	volatile uint32_t t89 = 1655333569U;

	t89 = ((x385==x386)%(x387^x388));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = INT8_MAX;
	static int64_t x390 = INT64_MAX;
	uint64_t x391 = 1595980345485650617LLU;
	volatile int16_t x392 = -134;
	uint64_t t90 = 2133881252263515LLU;

	t90 = ((x389==x390)%(x391^x392));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x393 = 103LLU;
	uint64_t x394 = 96327320791LLU;
	int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MAX;
	int32_t t91 = -113257709;

	t91 = ((x393==x394)%(x395^x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MIN;
	static int64_t x398 = -426875716761LL;
	static uint64_t x400 = 641922455708LLU;
	static uint64_t t92 = 106571294880798LLU;

	t92 = ((x397==x398)%(x399^x400));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x401 = 3290U;
	static volatile int32_t x404 = 7681523;
	int32_t t93 = 316;

	t93 = ((x401==x402)%(x403^x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MAX;
	static int64_t x410 = 1079490975262458108LL;
	volatile int64_t t94 = 132227615LL;

	t94 = ((x409==x410)%(x411^x412));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x413 = 888U;
	int64_t x414 = INT64_MIN;
	volatile uint8_t x416 = UINT8_MAX;
	volatile int32_t t95 = -5;

	t95 = ((x413==x414)%(x415^x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = -1;
	static int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MAX;
	static volatile int8_t x420 = INT8_MIN;
	int64_t t96 = -40737606084638136LL;

	t96 = ((x417==x418)%(x419^x420));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = -2;
	int16_t x422 = -1;
	static int32_t t97 = -809;

	t97 = ((x421==x422)%(x423^x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x425 = 33579318274LLU;
	int64_t x426 = 302813LL;
	uint32_t x427 = 3805201U;
	volatile uint32_t t98 = 11353800U;

	t98 = ((x425==x426)%(x427^x428));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = -1;
	volatile uint64_t x430 = 51224700225LLU;
	volatile int8_t x431 = INT8_MAX;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t99 = 140976LLU;

	t99 = ((x429==x430)%(x431^x432));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

