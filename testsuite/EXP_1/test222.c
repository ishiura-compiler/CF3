#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
static int32_t t0 = 0;
int64_t x5 = INT64_MIN;
int16_t x7 = INT16_MAX;
volatile int64_t x8 = -2860536LL;
static uint64_t x13 = UINT64_MAX;
uint64_t x32 = UINT64_MAX;
int64_t x33 = INT64_MAX;
volatile uint64_t t6 = 105238LLU;
static uint8_t x40 = UINT8_MAX;
int64_t x44 = -118LL;
static int64_t x48 = -1LL;
volatile int64_t t9 = -12LL;
uint32_t x66 = 2132290194U;
static volatile int64_t x89 = INT64_MAX;
uint32_t x90 = 11461U;
volatile int64_t t17 = -2090910765278215LL;
static int32_t x96 = INT32_MIN;
int8_t x111 = 49;
uint64_t x116 = UINT64_MAX;
int32_t x120 = -225;
int64_t x135 = INT64_MIN;
uint8_t x139 = UINT8_MAX;
int64_t x144 = INT64_MIN;
static int64_t x151 = INT64_MIN;
int64_t t28 = 7591055239353LL;
int16_t x157 = INT16_MIN;
int8_t x158 = INT8_MIN;
uint16_t x160 = 2982U;
volatile int16_t x163 = INT16_MIN;
int32_t t31 = -10003744;
uint64_t x165 = 5651LLU;
int8_t x172 = INT8_MIN;
int32_t x182 = -1;
uint64_t x185 = UINT64_MAX;
int64_t x186 = 216499595857143049LL;
int32_t x191 = -490;
uint64_t x195 = 96LLU;
int8_t x196 = INT8_MIN;
int8_t x199 = 5;
static int32_t x200 = INT32_MIN;
uint64_t t38 = 35LLU;
int64_t x201 = 393078838LL;
int64_t x202 = -1LL;
static int64_t t39 = -229818456292061LL;
volatile int8_t x207 = INT8_MIN;
int16_t x220 = -1;
int64_t x234 = 702234LL;
int16_t x251 = -1;
static uint32_t x253 = 1128U;
int32_t x255 = 128676188;
int8_t x258 = INT8_MAX;
int8_t x264 = -1;
int16_t x271 = INT16_MIN;
int64_t t55 = -66LL;
uint64_t x293 = UINT64_MAX;
uint16_t x297 = 28U;
int8_t x305 = INT8_MAX;
static uint64_t t61 = 3763303LLU;
uint64_t x314 = 33355753LLU;
static int32_t x320 = -22950707;
uint32_t x323 = UINT32_MAX;
uint32_t t64 = 3869U;
static int64_t x331 = INT64_MIN;
static uint32_t x336 = 3U;
uint16_t x338 = UINT16_MAX;
int32_t x347 = -1;
int64_t x349 = 13LL;
int32_t x350 = INT32_MIN;
uint16_t x357 = 1U;
volatile int32_t t72 = 85478931;
uint16_t x365 = UINT16_MAX;
int16_t x380 = 47;
uint16_t x386 = 3152U;
uint64_t x387 = 33LLU;
uint64_t t78 = 65865015851624485LLU;
volatile int16_t x393 = INT16_MIN;
int8_t x394 = 27;
volatile int32_t t79 = 79643;
volatile uint64_t x401 = 1544278LLU;
uint64_t t81 = 13LLU;
int8_t x405 = INT8_MIN;
int16_t x409 = INT16_MAX;
static int32_t x411 = INT32_MIN;
static int64_t x413 = INT64_MIN;
int16_t x421 = INT16_MIN;
static volatile uint64_t t86 = 893968LLU;
uint16_t x438 = UINT16_MAX;
int8_t x447 = -1;
uint64_t x453 = UINT64_MAX;
uint64_t x459 = UINT64_MAX;
volatile int64_t x466 = INT64_MAX;
int8_t x472 = -1;
static int64_t t98 = 3LL;
static int16_t x488 = -1;


void f0(void) {
	volatile int8_t x1 = -1;
	int32_t x2 = -1;
	volatile int16_t x3 = INT16_MIN;

	t0 = (((x1-x2)%x3)+x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = INT8_MIN;
	int64_t t1 = -191LL;

	t1 = (((x5-x6)%x7)+x8);

	if (t1 != -2893183LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x14 = UINT16_MAX;
	volatile uint16_t x15 = 4085U;
	static uint16_t x16 = UINT16_MAX;
	uint64_t t2 = 2087328602192259469LLU;

	t2 = (((x13-x14)%x15)+x16);

	if (t2 != 68625LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -3;
	uint16_t x18 = 25480U;
	int8_t x19 = 1;
	int8_t x20 = INT8_MAX;
	int32_t t3 = -1;

	t3 = (((x17-x18)%x19)+x20);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	volatile uint16_t x23 = 62U;
	int8_t x24 = INT8_MAX;
	volatile int32_t t4 = 0;

	t4 = (((x21-x22)%x23)+x24);

	if (t4 != 119) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1781289718148824LL;
	int8_t x30 = INT8_MAX;
	volatile int8_t x31 = -10;
	uint64_t t5 = 180349LLU;

	t5 = (((x29-x30)%x31)+x32);

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x34 = 235474944LLU;
	int64_t x35 = -1LL;
	int8_t x36 = -1;

	t6 = (((x33-x34)%x35)+x36);

	if (t6 != 9223372036619300862LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -84037327LL;
	int64_t x38 = INT64_MIN;
	static int32_t x39 = -219171945;
	volatile int64_t t7 = 9484102700789452LL;

	t7 = (((x37-x38)%x39)+x40);

	if (t7 != 217168861LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 18U;
	volatile int64_t x42 = INT64_MAX;
	uint32_t x43 = 844405266U;
	int64_t t8 = 381864089LL;

	t8 = (((x41-x42)%x43)+x44);

	if (t8 != -709442459LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1445;
	static volatile int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;

	t9 = (((x45-x46)%x47)+x48);

	if (t9 != 90LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -1;
	uint8_t x50 = 65U;
	int64_t x51 = -1LL;
	int32_t x52 = -1;
	int64_t t10 = -4396407971686690LL;

	t10 = (((x49-x50)%x51)+x52);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = INT64_MIN;
	int32_t x54 = -1;
	int8_t x55 = -1;
	volatile int16_t x56 = INT16_MAX;
	int64_t t11 = -12LL;

	t11 = (((x53-x54)%x55)+x56);

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -25299795;
	int64_t x58 = -50378056520LL;
	volatile int8_t x59 = -1;
	uint32_t x60 = 335411U;
	static int64_t t12 = 1022030194167620172LL;

	t12 = (((x57-x58)%x59)+x60);

	if (t12 != 335411LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = INT32_MIN;
	uint32_t x67 = 141U;
	uint8_t x68 = UINT8_MAX;
	volatile uint32_t t13 = 204628219U;

	t13 = (((x65-x66)%x67)+x68);

	if (t13 != 395U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x73 = 1LLU;
	int32_t x74 = 346;
	uint8_t x75 = UINT8_MAX;
	volatile uint16_t x76 = 1U;
	volatile uint64_t t14 = 12890LLU;

	t14 = (((x73-x74)%x75)+x76);

	if (t14 != 167LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x78 = 61053530318LLU;
	int8_t x79 = 25;
	volatile uint64_t x80 = 925254245741LLU;
	uint64_t t15 = 504189LLU;

	t15 = (((x77-x78)%x79)+x80);

	if (t15 != 925254245761LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = 2846;
	static int8_t x86 = INT8_MAX;
	int32_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	static int32_t t16 = 595123823;

	t16 = (((x85-x86)%x87)+x88);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x91 = 24U;
	static int32_t x92 = -21106;

	t17 = (((x89-x90)%x91)+x92);

	if (t17 != -21088LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 260LL;
	int16_t x94 = 2;
	static uint16_t x95 = UINT16_MAX;
	int64_t t18 = -191330291979324415LL;

	t18 = (((x93-x94)%x95)+x96);

	if (t18 != -2147483390LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x105 = 889LLU;
	int32_t x106 = -1;
	volatile int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MAX;
	volatile uint64_t t19 = 3LLU;

	t19 = (((x105-x106)%x107)+x108);

	if (t19 != 2147484537LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x109 = UINT32_MAX;
	static volatile int32_t x110 = INT32_MAX;
	uint32_t x112 = 98U;
	uint32_t t20 = 7U;

	t20 = (((x109-x110)%x111)+x112);

	if (t20 != 142U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x113 = 369U;
	static uint16_t x114 = 10U;
	uint8_t x115 = UINT8_MAX;
	volatile uint64_t t21 = 214724LLU;

	t21 = (((x113-x114)%x115)+x116);

	if (t21 != 103LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = 20545U;
	int64_t x118 = INT64_MAX;
	uint16_t x119 = UINT16_MAX;
	int64_t t22 = 96589278955LL;

	t22 = (((x117-x118)%x119)+x120);

	if (t22 != -12447LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x121 = 1198603LLU;
	volatile int64_t x122 = -1LL;
	int32_t x123 = INT32_MAX;
	volatile int64_t x124 = INT64_MIN;
	uint64_t t23 = 111959529013151LLU;

	t23 = (((x121-x122)%x123)+x124);

	if (t23 != 9223372036855974412LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	static volatile uint8_t x128 = UINT8_MAX;
	uint64_t t24 = 1350797108LLU;

	t24 = (((x125-x126)%x127)+x128);

	if (t24 != 255LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 46604229443LLU;
	int32_t x134 = INT32_MIN;
	int8_t x136 = -60;
	volatile uint64_t t25 = 32085853LLU;

	t25 = (((x133-x134)%x135)+x136);

	if (t25 != 48751713031LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x137 = 4U;
	static int32_t x138 = 5654;
	uint8_t x140 = 9U;
	volatile uint32_t t26 = 3342960U;

	t26 = (((x137-x138)%x139)+x140);

	if (t26 != 225U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x141 = UINT64_MAX;
	uint8_t x142 = UINT8_MAX;
	volatile uint8_t x143 = 1U;
	static volatile uint64_t t27 = 3054077LLU;

	t27 = (((x141-x142)%x143)+x144);

	if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = 83;
	volatile uint16_t x150 = 28U;
	int8_t x152 = 29;

	t28 = (((x149-x150)%x151)+x152);

	if (t28 != 84LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x153 = 27U;
	int8_t x154 = INT8_MAX;
	int8_t x155 = INT8_MAX;
	volatile int16_t x156 = 3;
	static volatile int32_t t29 = 13837429;

	t29 = (((x153-x154)%x155)+x156);

	if (t29 != -97) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x159 = INT16_MAX;
	volatile int32_t t30 = -203;

	t30 = (((x157-x158)%x159)+x160);

	if (t30 != -29658) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = -1;
	static int8_t x162 = -7;
	int8_t x164 = INT8_MIN;

	t31 = (((x161-x162)%x163)+x164);

	if (t31 != -122) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x166 = INT16_MIN;
	int8_t x167 = 7;
	int64_t x168 = -398LL;
	uint64_t t32 = 135517LLU;

	t32 = (((x165-x166)%x167)+x168);

	if (t32 != 18446744073709551221LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x169 = UINT32_MAX;
	static int8_t x170 = -2;
	int64_t x171 = INT64_MAX;
	volatile int64_t t33 = 834526756099460LL;

	t33 = (((x169-x170)%x171)+x172);

	if (t33 != -127LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -845013LL;
	int64_t x183 = -1LL;
	static int16_t x184 = 12871;
	static volatile int64_t t34 = 1867626315691LL;

	t34 = (((x181-x182)%x183)+x184);

	if (t34 != 12871LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x187 = 28;
	volatile int16_t x188 = 45;
	volatile uint64_t t35 = 152418LLU;

	t35 = (((x185-x186)%x187)+x188);

	if (t35 != 71LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x189 = UINT64_MAX;
	int8_t x190 = 15;
	uint32_t x192 = UINT32_MAX;
	volatile uint64_t t36 = 45310294LLU;

	t36 = (((x189-x190)%x191)+x192);

	if (t36 != 4294967769LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x193 = INT32_MIN;
	int8_t x194 = 0;
	volatile uint64_t t37 = 68843765070LLU;

	t37 = (((x193-x194)%x195)+x196);

	if (t37 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x197 = 40416027LLU;
	int16_t x198 = -1;

	t38 = (((x197-x198)%x199)+x200);

	if (t38 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MAX;

	t39 = (((x201-x202)%x203)+x204);

	if (t39 != 2147510326LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x205 = -79;
	uint32_t x206 = 53U;
	volatile int32_t x208 = INT32_MAX;
	uint32_t t40 = 49942410U;

	t40 = (((x205-x206)%x207)+x208);

	if (t40 != 2147483515U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	int16_t x215 = 15890;
	uint8_t x216 = 1U;
	static int32_t t41 = 1;

	t41 = (((x213-x214)%x215)+x216);

	if (t41 != -13579) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = 1;
	volatile int8_t x218 = 24;
	int32_t x219 = INT32_MIN;
	static int32_t t42 = -3590;

	t42 = (((x217-x218)%x219)+x220);

	if (t42 != -24) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = -1;
	int8_t x226 = INT8_MAX;
	uint16_t x227 = 8989U;
	static uint8_t x228 = 2U;
	int32_t t43 = 7567404;

	t43 = (((x225-x226)%x227)+x228);

	if (t43 != -126) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x229 = 0U;
	volatile int16_t x230 = INT16_MIN;
	uint8_t x231 = 14U;
	int8_t x232 = INT8_MIN;
	int32_t t44 = -113638;

	t44 = (((x229-x230)%x231)+x232);

	if (t44 != -120) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = INT8_MIN;
	uint64_t x235 = 10LLU;
	static uint32_t x236 = UINT32_MAX;
	volatile uint64_t t45 = 257981263303080LLU;

	t45 = (((x233-x234)%x235)+x236);

	if (t45 != 4294967299LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x237 = -1LL;
	static int16_t x238 = INT16_MIN;
	static int8_t x239 = INT8_MIN;
	uint64_t x240 = 1186LLU;
	volatile uint64_t t46 = 1575627419306LLU;

	t46 = (((x237-x238)%x239)+x240);

	if (t46 != 1313LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x241 = 1492236085U;
	uint8_t x242 = 1U;
	static volatile int8_t x243 = 1;
	int64_t x244 = INT64_MIN;
	int64_t t47 = INT64_MIN;

	t47 = (((x241-x242)%x243)+x244);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x249 = UINT8_MAX;
	volatile uint8_t x250 = 32U;
	int8_t x252 = -1;
	int32_t t48 = 1025683052;

	t48 = (((x249-x250)%x251)+x252);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x254 = INT8_MIN;
	int8_t x256 = 0;
	uint32_t t49 = 85U;

	t49 = (((x253-x254)%x255)+x256);

	if (t49 != 1256U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x257 = 33807506678050965LLU;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	uint64_t t50 = 267445948307331LLU;

	t50 = (((x257-x258)%x259)+x260);

	if (t50 != 33807506678018070LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	int64_t x263 = 3665881346920775088LL;
	volatile int64_t t51 = 1003256994979LL;

	t51 = (((x261-x262)%x263)+x264);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x265 = -1;
	uint8_t x266 = 0U;
	static int8_t x267 = INT8_MIN;
	static int16_t x268 = INT16_MIN;
	int32_t t52 = 56949898;

	t52 = (((x265-x266)%x267)+x268);

	if (t52 != -32769) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = -1;
	uint8_t x270 = 39U;
	uint8_t x272 = 0U;
	volatile int32_t t53 = 46860;

	t53 = (((x269-x270)%x271)+x272);

	if (t53 != -40) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x273 = 22622U;
	uint8_t x274 = 22U;
	int16_t x275 = 13;
	static int16_t x276 = -369;
	volatile uint32_t t54 = 1822U;

	t54 = (((x273-x274)%x275)+x276);

	if (t54 != 4294966933U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x281 = -88161207640063829LL;
	uint32_t x282 = 0U;
	volatile uint8_t x283 = UINT8_MAX;
	int16_t x284 = 105;

	t55 = (((x281-x282)%x283)+x284);

	if (t55 != -149LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x285 = -72734;
	uint64_t x286 = 1807673390LLU;
	int16_t x287 = 1;
	int8_t x288 = INT8_MAX;
	volatile uint64_t t56 = 11LLU;

	t56 = (((x285-x286)%x287)+x288);

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x289 = -1LL;
	int64_t x290 = INT64_MAX;
	uint32_t x291 = 569444735U;
	uint64_t x292 = 0LLU;
	volatile uint64_t t57 = 462802803103204LLU;

	t57 = (((x289-x290)%x291)+x292);

	if (t57 != 18446744073480049463LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x294 = INT32_MIN;
	static int32_t x295 = -1;
	int16_t x296 = -1;
	uint64_t t58 = 211144733315200LLU;

	t58 = (((x293-x294)%x295)+x296);

	if (t58 != 2147483646LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x298 = INT8_MIN;
	volatile int8_t x299 = INT8_MAX;
	static uint32_t x300 = UINT32_MAX;
	volatile uint32_t t59 = 4U;

	t59 = (((x297-x298)%x299)+x300);

	if (t59 != 28U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x306 = INT8_MIN;
	static volatile int64_t x307 = -1LL;
	static uint32_t x308 = UINT32_MAX;
	volatile int64_t t60 = 1540484303303LL;

	t60 = (((x305-x306)%x307)+x308);

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x309 = 4338393195321431850LLU;
	static int32_t x310 = -1;
	static uint16_t x311 = UINT16_MAX;
	int16_t x312 = -1;

	t61 = (((x309-x310)%x311)+x312);

	if (t61 != 31770LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x313 = -36;
	volatile int8_t x315 = 1;
	static int64_t x316 = INT64_MIN;
	static uint64_t t62 = 147502154501LLU;

	t62 = (((x313-x314)%x315)+x316);

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x317 = 121U;
	uint8_t x318 = 8U;
	int64_t x319 = INT64_MAX;
	static volatile int64_t t63 = -159829733800772LL;

	t63 = (((x317-x318)%x319)+x320);

	if (t63 != -22950594LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = 279;
	int32_t x322 = 13076;
	static uint8_t x324 = 6U;

	t64 = (((x321-x322)%x323)+x324);

	if (t64 != 4294954505U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x329 = INT32_MAX;
	int32_t x330 = 2077791;
	int64_t x332 = INT64_MIN;
	static int64_t t65 = 41203280509LL;

	t65 = (((x329-x330)%x331)+x332);

	if (t65 != -9223372034709369952LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x333 = INT16_MAX;
	volatile int64_t x334 = -7864LL;
	uint32_t x335 = 12272U;
	volatile int64_t t66 = -1046341487LL;

	t66 = (((x333-x334)%x335)+x336);

	if (t66 != 3818LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x337 = -1;
	volatile int16_t x339 = INT16_MIN;
	volatile uint8_t x340 = UINT8_MAX;
	volatile int32_t t67 = -56606;

	t67 = (((x337-x338)%x339)+x340);

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = 639U;
	int64_t x348 = 961512636683986472LL;
	int64_t t68 = 842496111115601298LL;

	t68 = (((x345-x346)%x347)+x348);

	if (t68 != 961512636683986472LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x351 = -1;
	uint32_t x352 = 338352912U;
	static volatile int64_t t69 = 2567545LL;

	t69 = (((x349-x350)%x351)+x352);

	if (t69 != 338352912LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x353 = INT32_MIN;
	static int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t70 = 1009636;

	t70 = (((x353-x354)%x355)+x356);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x358 = 27U;
	int64_t x359 = 675013817036LL;
	int32_t x360 = INT32_MAX;
	int64_t t71 = -1991377653401160LL;

	t71 = (((x357-x358)%x359)+x360);

	if (t71 != 2147483621LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x361 = 30;
	uint16_t x362 = 10U;
	int8_t x363 = INT8_MAX;
	volatile int16_t x364 = -1;

	t72 = (((x361-x362)%x363)+x364);

	if (t72 != 19) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x366 = INT8_MAX;
	uint8_t x367 = UINT8_MAX;
	volatile int32_t x368 = INT32_MIN;
	int32_t t73 = -5;

	t73 = (((x365-x366)%x367)+x368);

	if (t73 != -2147483520) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = -58588266022LL;
	static uint16_t x370 = 6715U;
	volatile int16_t x371 = -1;
	uint16_t x372 = UINT16_MAX;
	volatile int64_t t74 = 2LL;

	t74 = (((x369-x370)%x371)+x372);

	if (t74 != 65535LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x377 = 16809U;
	volatile int32_t x378 = 1;
	volatile uint8_t x379 = UINT8_MAX;
	uint32_t t75 = 74898636U;

	t75 = (((x377-x378)%x379)+x380);

	if (t75 != 280U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x381 = -12894;
	uint32_t x382 = 3442U;
	int16_t x383 = 1;
	int64_t x384 = INT64_MIN;
	int64_t t76 = INT64_MIN;

	t76 = (((x381-x382)%x383)+x384);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x385 = INT8_MIN;
	int16_t x388 = INT16_MIN;
	uint64_t t77 = 110949LLU;

	t77 = (((x385-x386)%x387)+x388);

	if (t77 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x389 = 8168U;
	uint64_t x390 = 2479LLU;
	int8_t x391 = INT8_MAX;
	static int8_t x392 = 4;

	t78 = (((x389-x390)%x391)+x392);

	if (t78 != 105LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x395 = INT16_MIN;
	int8_t x396 = 1;

	t79 = (((x393-x394)%x395)+x396);

	if (t79 != -26) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x397 = UINT32_MAX;
	int32_t x398 = 403468;
	int32_t x399 = INT32_MIN;
	static int16_t x400 = 203;
	static volatile uint32_t t80 = 1262U;

	t80 = (((x397-x398)%x399)+x400);

	if (t80 != 2147080382U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x402 = 4980420;
	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = 0U;

	t81 = (((x401-x402)%x403)+x404);

	if (t81 != 18446744073706115474LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x406 = -1LL;
	uint32_t x407 = 439035851U;
	volatile int64_t x408 = -15LL;
	volatile int64_t t82 = 2476800258LL;

	t82 = (((x405-x406)%x407)+x408);

	if (t82 != -142LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x410 = 6;
	int32_t x412 = INT32_MIN;
	volatile int32_t t83 = -1;

	t83 = (((x409-x410)%x411)+x412);

	if (t83 != -2147450887) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x414 = -1LL;
	volatile int16_t x415 = 1;
	int8_t x416 = -1;
	int64_t t84 = -1954943899376097402LL;

	t84 = (((x413-x414)%x415)+x416);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x417 = INT32_MIN;
	static int64_t x418 = -1034746LL;
	static uint16_t x419 = 24U;
	int16_t x420 = INT16_MIN;
	int64_t t85 = 4879LL;

	t85 = (((x417-x418)%x419)+x420);

	if (t85 != -32790LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x422 = UINT8_MAX;
	int8_t x423 = -6;
	uint64_t x424 = 7LLU;

	t86 = (((x421-x422)%x423)+x424);

	if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x425 = 43U;
	volatile uint64_t x426 = 1998430629703540LLU;
	int8_t x427 = 3;
	static int8_t x428 = INT8_MAX;
	volatile uint64_t t87 = 424131103752966572LLU;

	t87 = (((x425-x426)%x427)+x428);

	if (t87 != 128LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x437 = 912U;
	int64_t x439 = INT64_MIN;
	uint64_t x440 = 18022388558238LLU;
	static uint64_t t88 = 26962LLU;

	t88 = (((x437-x438)%x439)+x440);

	if (t88 != 18022388493615LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x441 = INT16_MIN;
	volatile int32_t x442 = 153;
	int8_t x443 = INT8_MAX;
	volatile uint8_t x444 = 31U;
	int32_t t89 = -260000;

	t89 = (((x441-x442)%x443)+x444);

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x445 = INT8_MAX;
	int8_t x446 = -1;
	uint8_t x448 = 6U;
	volatile int32_t t90 = -7;

	t90 = (((x445-x446)%x447)+x448);

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x449 = -712568LL;
	volatile uint16_t x450 = 7U;
	uint64_t x451 = 5814121968865296LLU;
	static int64_t x452 = -1LL;
	uint64_t t91 = 95011193528047LLU;

	t91 = (((x449-x450)%x451)+x452);

	if (t91 != 4349188468120128LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x454 = UINT64_MAX;
	uint64_t x455 = UINT64_MAX;
	static int32_t x456 = 38;
	volatile uint64_t t92 = 74529363902039LLU;

	t92 = (((x453-x454)%x455)+x456);

	if (t92 != 38LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x457 = -1;
	static int32_t x458 = -1;
	static uint64_t x460 = UINT64_MAX;
	static volatile uint64_t t93 = UINT64_MAX;

	t93 = (((x457-x458)%x459)+x460);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x461 = UINT64_MAX;
	int8_t x462 = 3;
	uint64_t x463 = UINT64_MAX;
	uint8_t x464 = 100U;
	volatile uint64_t t94 = 105263586977LLU;

	t94 = (((x461-x462)%x463)+x464);

	if (t94 != 96LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x465 = 1697;
	int16_t x467 = -3568;
	static volatile int32_t x468 = INT32_MIN;
	int64_t t95 = 29202126127LL;

	t95 = (((x465-x466)%x467)+x468);

	if (t95 != -2147483870LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x469 = -1;
	static int8_t x470 = INT8_MAX;
	volatile int16_t x471 = -1;
	volatile int32_t t96 = 0;

	t96 = (((x469-x470)%x471)+x472);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x473 = INT16_MAX;
	static volatile int16_t x474 = -3;
	uint8_t x475 = 1U;
	int16_t x476 = 49;
	int32_t t97 = -1;

	t97 = (((x473-x474)%x475)+x476);

	if (t97 != 49) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = 4600369949992503LL;
	int8_t x482 = 0;
	volatile uint32_t x483 = 330539241U;
	int16_t x484 = -1;

	t98 = (((x481-x482)%x483)+x484);

	if (t98 != 156701450LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x485 = INT8_MIN;
	int32_t x486 = -942922;
	volatile int64_t x487 = INT64_MIN;
	volatile int64_t t99 = -289577598689494LL;

	t99 = (((x485-x486)%x487)+x488);

	if (t99 != 942793LL) { NG(); } else { ; }
	
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

