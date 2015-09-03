#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
uint32_t t1 = 9U;
int8_t x18 = 1;
uint8_t x20 = UINT8_MAX;
int32_t t5 = -21672324;
int64_t x30 = -1LL;
static int32_t x39 = 78524;
int8_t x40 = 1;
int32_t x43 = -1;
uint32_t x53 = 2U;
int64_t x54 = -1LL;
int64_t x55 = 520872877LL;
int64_t t13 = 1600821637341208383LL;
int64_t x69 = -31728LL;
uint64_t t17 = 117745515574526LLU;
static uint8_t x78 = 17U;
static int64_t t18 = -204463909171552LL;
int32_t x81 = INT32_MIN;
volatile int32_t t19 = 2;
volatile int64_t x89 = -1LL;
static uint16_t x92 = UINT16_MAX;
int8_t x117 = -20;
int32_t x124 = -1;
int32_t x130 = -1;
uint8_t x132 = UINT8_MAX;
static int32_t x136 = -27255;
static int32_t x139 = INT32_MIN;
uint16_t x142 = 44U;
int64_t t34 = 14354LL;
uint8_t x162 = 3U;
uint16_t x176 = UINT16_MAX;
uint16_t x183 = 259U;
volatile int32_t t41 = -88768911;
volatile int16_t x192 = -5;
static int64_t x198 = -1LL;
volatile int16_t x208 = -1;
volatile int32_t t45 = -10313359;
volatile int64_t t46 = 181425579LL;
int64_t x213 = -965682410523582399LL;
int64_t x217 = INT64_MAX;
static volatile uint32_t t48 = 13158U;
static int8_t x226 = 1;
uint32_t x234 = UINT32_MAX;
int32_t t53 = 1;
uint16_t x247 = 1U;
int32_t x248 = 5;
static volatile int32_t t55 = 4211;
uint32_t t57 = 2417U;
static volatile uint16_t x261 = UINT16_MAX;
uint64_t x268 = 1LLU;
volatile uint64_t t60 = 3335111114856105834LLU;
uint16_t x273 = 293U;
int8_t x274 = INT8_MIN;
static volatile uint8_t x276 = 33U;
int8_t x280 = INT8_MIN;
static volatile int64_t x281 = -214360788974426LL;
static uint16_t x290 = 25451U;
uint16_t x295 = 951U;
volatile int8_t x299 = INT8_MIN;
volatile uint32_t t67 = 13574U;
volatile int32_t x305 = 11764;
uint16_t x307 = UINT16_MAX;
int64_t t69 = 1LL;
static int32_t x311 = INT32_MIN;
int32_t t72 = 14583;
int32_t x331 = 192944;
uint64_t x334 = 378307LLU;
static volatile int16_t x337 = -1;
volatile int32_t t77 = -8316055;
uint64_t x344 = 132235705396611LLU;
static uint64_t t78 = 14281556LLU;
volatile int16_t x348 = -1;
uint64_t x350 = 27389251066208LLU;
int8_t x357 = INT8_MAX;
volatile uint16_t x361 = UINT16_MAX;
volatile int16_t x362 = INT16_MIN;
volatile uint64_t x363 = UINT64_MAX;
uint32_t x372 = 1238U;
int8_t x373 = INT8_MIN;
uint8_t x375 = 12U;
int64_t x376 = 5336348168LL;
int16_t x377 = -1;
int32_t x379 = INT32_MIN;
static volatile int32_t t87 = -3254696;
int16_t x381 = -103;
int8_t x383 = -1;
int8_t x385 = INT8_MAX;
int64_t x387 = 28987495LL;
uint32_t x394 = UINT32_MAX;
int64_t x395 = -1LL;
int16_t x410 = INT16_MAX;
int8_t x413 = -1;
volatile int16_t x423 = INT16_MAX;
static volatile int32_t t96 = 378;
static uint16_t x430 = 4847U;
static volatile uint32_t x436 = UINT32_MAX;
uint8_t x438 = UINT8_MAX;
int8_t x439 = -56;


void f0(void) {
	int16_t x1 = -88;
	int8_t x2 = 3;
	uint64_t x3 = UINT64_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	uint64_t t0 = 239LLU;

	t0 = (((x1<x2)%x3)-x4);

	if (t0 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int32_t x7 = 600308403;
	static uint32_t x8 = UINT32_MAX;

	t1 = (((x5<x6)%x7)-x8);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	volatile int64_t x10 = INT64_MAX;
	uint8_t x11 = 24U;
	volatile int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 64973241;

	t2 = (((x9<x10)%x11)-x12);

	if (t2 != -32766) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -2280998562763334930LL;
	int16_t x14 = -1;
	int32_t x15 = -1;
	int16_t x16 = 97;
	volatile int32_t t3 = -231;

	t3 = (((x13<x14)%x15)-x16);

	if (t3 != -97) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int8_t x19 = INT8_MAX;
	volatile int32_t t4 = -173447902;

	t4 = (((x17<x18)%x19)-x20);

	if (t4 != -254) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	int64_t x26 = -1LL;
	int32_t x27 = INT32_MIN;
	int16_t x28 = INT16_MIN;

	t5 = (((x25<x26)%x27)-x28);

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MIN;
	int32_t x31 = -4307;
	int16_t x32 = -1;
	volatile int32_t t6 = 782;

	t6 = (((x29<x30)%x31)-x32);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = 3698;
	static volatile uint64_t x34 = 264759478LLU;
	uint64_t x35 = UINT64_MAX;
	static int32_t x36 = INT32_MIN;
	uint64_t t7 = 2709253317313530LLU;

	t7 = (((x33<x34)%x35)-x36);

	if (t7 != 2147483649LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	int64_t x38 = 3634289771122910LL;
	int32_t t8 = -39967;

	t8 = (((x37<x38)%x39)-x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 9U;
	int16_t x42 = 11728;
	int64_t x44 = -334796974366LL;
	volatile int64_t t9 = 7897445529722234LL;

	t9 = (((x41<x42)%x43)-x44);

	if (t9 != 334796974366LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -939;
	int8_t x46 = INT8_MIN;
	static volatile int32_t x47 = -42445496;
	volatile uint64_t x48 = UINT64_MAX;
	uint64_t t10 = 50LLU;

	t10 = (((x45<x46)%x47)-x48);

	if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MAX;
	uint8_t x52 = 121U;
	int32_t t11 = 2;

	t11 = (((x49<x50)%x51)-x52);

	if (t11 != -121) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x56 = 2581061372644LLU;
	uint64_t t12 = 212019LLU;

	t12 = (((x53<x54)%x55)-x56);

	if (t12 != 18446741492648178972LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	volatile uint32_t x58 = 1744919U;
	int64_t x59 = -628375714547484LL;
	int32_t x60 = -2409195;

	t13 = (((x57<x58)%x59)-x60);

	if (t13 != 2409196LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = 1;
	int64_t x63 = INT64_MAX;
	int32_t x64 = INT32_MIN;
	static int64_t t14 = -16224912193720LL;

	t14 = (((x61<x62)%x63)-x64);

	if (t14 != 2147483649LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 5802U;
	int8_t x68 = -1;
	static volatile int32_t t15 = 14;

	t15 = (((x65<x66)%x67)-x68);

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = INT8_MAX;
	volatile uint16_t x71 = 3761U;
	int8_t x72 = -18;
	volatile int32_t t16 = 140;

	t16 = (((x69<x70)%x71)-x72);

	if (t16 != 19) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 303217118U;
	uint16_t x74 = 1U;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = UINT64_MAX;

	t17 = (((x73<x74)%x75)-x76);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int8_t x79 = 1;
	volatile int64_t x80 = -2174909206110668720LL;

	t18 = (((x77<x78)%x79)-x80);

	if (t18 != 2174909206110668720LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x82 = UINT64_MAX;
	static volatile int8_t x83 = INT8_MAX;
	int16_t x84 = INT16_MIN;

	t19 = (((x81<x82)%x83)-x84);

	if (t19 != 32769) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	volatile int16_t x86 = -1973;
	int16_t x87 = INT16_MAX;
	static int32_t x88 = -873485;
	volatile int32_t t20 = -7;

	t20 = (((x85<x86)%x87)-x88);

	if (t20 != 873486) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x90 = UINT16_MAX;
	int16_t x91 = -1;
	volatile int32_t t21 = 1;

	t21 = (((x89<x90)%x91)-x92);

	if (t21 != -65535) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = 9;
	volatile int8_t x94 = -43;
	static int16_t x95 = 4291;
	static volatile int8_t x96 = INT8_MIN;
	int32_t t22 = 2837;

	t22 = (((x93<x94)%x95)-x96);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x101 = 382U;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 4546135LLU;
	int64_t x104 = INT64_MAX;
	volatile uint64_t t23 = 66461623LLU;

	t23 = (((x101<x102)%x103)-x104);

	if (t23 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -1038850088985334420LL;
	int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MAX;
	int16_t x108 = -1846;
	static volatile int64_t t24 = 14LL;

	t24 = (((x105<x106)%x107)-x108);

	if (t24 != 1847LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	uint8_t x110 = 0U;
	int64_t x111 = INT64_MAX;
	int8_t x112 = 1;
	int64_t t25 = -8269086488LL;

	t25 = (((x109<x110)%x111)-x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -1;
	int8_t x114 = INT8_MAX;
	static int64_t x115 = -48518LL;
	uint8_t x116 = 1U;
	static int64_t t26 = 1655749247LL;

	t26 = (((x113<x114)%x115)-x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x118 = INT64_MIN;
	volatile int16_t x119 = INT16_MIN;
	int64_t x120 = 21LL;
	static int64_t t27 = -570LL;

	t27 = (((x117<x118)%x119)-x120);

	if (t27 != -21LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = INT16_MAX;
	int64_t x122 = 4756665945786501LL;
	int8_t x123 = INT8_MIN;
	int32_t t28 = -173352;

	t28 = (((x121<x122)%x123)-x124);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x125 = 26747U;
	volatile int16_t x126 = INT16_MIN;
	static int16_t x127 = INT16_MIN;
	volatile uint8_t x128 = 1U;
	int32_t t29 = -53104507;

	t29 = (((x125<x126)%x127)-x128);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	int32_t x131 = -1;
	int32_t t30 = 640;

	t30 = (((x129<x130)%x131)-x132);

	if (t30 != -255) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -1;
	volatile uint16_t x134 = 2U;
	int32_t x135 = 66695;
	volatile int32_t t31 = -1379706;

	t31 = (((x133<x134)%x135)-x136);

	if (t31 != 27256) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MAX;
	uint16_t x138 = UINT16_MAX;
	volatile int8_t x140 = 1;
	int32_t t32 = 50;

	t32 = (((x137<x138)%x139)-x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = 2420;
	int32_t t33 = 0;

	t33 = (((x141<x142)%x143)-x144);

	if (t33 != -2419) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 4300745514632LLU;
	static volatile int32_t x146 = -770611415;
	uint16_t x147 = UINT16_MAX;
	int64_t x148 = 2877897656LL;

	t34 = (((x145<x146)%x147)-x148);

	if (t34 != -2877897655LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MAX;
	volatile int32_t x151 = INT32_MIN;
	volatile uint16_t x152 = 3757U;
	static int32_t t35 = 693857;

	t35 = (((x149<x150)%x151)-x152);

	if (t35 != -3756) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x153 = 0;
	static int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MIN;
	static int32_t x156 = 7793911;
	volatile int64_t t36 = -14335955LL;

	t36 = (((x153<x154)%x155)-x156);

	if (t36 != -7793910LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 1U;
	uint16_t x158 = 6U;
	uint32_t x159 = 1335U;
	int8_t x160 = INT8_MIN;
	static volatile uint32_t t37 = 266163483U;

	t37 = (((x157<x158)%x159)-x160);

	if (t37 != 129U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x161 = 142223448U;
	volatile int64_t x163 = INT64_MAX;
	uint32_t x164 = 38663U;
	int64_t t38 = -1LL;

	t38 = (((x161<x162)%x163)-x164);

	if (t38 != -38663LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = -1;
	uint64_t x170 = 8674148010862300531LLU;
	uint8_t x171 = 29U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t39 = 0;

	t39 = (((x169<x170)%x171)-x172);

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -103461225511499LL;
	int8_t x174 = INT8_MAX;
	int32_t x175 = 379454;
	int32_t t40 = -550;

	t40 = (((x173<x174)%x175)-x176);

	if (t40 != -65534) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MAX;
	int16_t x184 = 3145;

	t41 = (((x181<x182)%x183)-x184);

	if (t41 != -3144) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MIN;
	volatile int8_t x187 = -1;
	static uint8_t x188 = UINT8_MAX;
	int32_t t42 = 6467;

	t42 = (((x185<x186)%x187)-x188);

	if (t42 != -255) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = INT16_MIN;
	int32_t x190 = -1;
	int8_t x191 = INT8_MIN;
	int32_t t43 = 424;

	t43 = (((x189<x190)%x191)-x192);

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = 483519137803173199LL;
	int32_t x199 = -1;
	int8_t x200 = 18;
	volatile int32_t t44 = -63216045;

	t44 = (((x197<x198)%x199)-x200);

	if (t44 != -18) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MIN;
	volatile int8_t x206 = INT8_MIN;
	volatile int32_t x207 = -1;

	t45 = (((x205<x206)%x207)-x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	uint32_t x210 = 334U;
	uint8_t x211 = 5U;
	volatile int64_t x212 = -1LL;

	t46 = (((x209<x210)%x211)-x212);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MIN;
	static uint16_t x216 = UINT16_MAX;
	int64_t t47 = -652835842378495LL;

	t47 = (((x213<x214)%x215)-x216);

	if (t47 != -65534LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x218 = -1;
	int16_t x219 = -1;
	uint32_t x220 = 35U;

	t48 = (((x217<x218)%x219)-x220);

	if (t48 != 4294967261U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x221 = 331U;
	uint8_t x222 = 20U;
	uint32_t x223 = 3U;
	uint32_t x224 = 3U;
	static uint32_t t49 = 132473U;

	t49 = (((x221<x222)%x223)-x224);

	if (t49 != 4294967293U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = INT64_MAX;
	uint32_t x227 = 8U;
	static int8_t x228 = -1;
	volatile uint32_t t50 = 228564U;

	t50 = (((x225<x226)%x227)-x228);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = UINT8_MAX;
	int32_t x230 = INT32_MAX;
	int16_t x231 = INT16_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t51 = 26331177192LLU;

	t51 = (((x229<x230)%x231)-x232);

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = INT32_MIN;
	uint8_t x235 = 1U;
	volatile uint32_t x236 = UINT32_MAX;
	uint32_t t52 = 891U;

	t52 = (((x233<x234)%x235)-x236);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = 165;
	static int32_t x239 = -431292;
	int8_t x240 = 7;

	t53 = (((x237<x238)%x239)-x240);

	if (t53 != -6) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MIN;
	int16_t x243 = -10;
	static int8_t x244 = INT8_MAX;
	volatile int32_t t54 = -222147;

	t54 = (((x241<x242)%x243)-x244);

	if (t54 != -126) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = INT64_MAX;
	int32_t x246 = INT32_MIN;

	t55 = (((x245<x246)%x247)-x248);

	if (t55 != -5) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = 1LL;
	int32_t x254 = INT32_MAX;
	int32_t x255 = INT32_MAX;
	static volatile int8_t x256 = INT8_MIN;
	volatile int32_t t56 = -7780737;

	t56 = (((x253<x254)%x255)-x256);

	if (t56 != 129) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x257 = 2U;
	uint32_t x258 = 63174U;
	uint32_t x259 = 1914437U;
	int16_t x260 = -1;

	t57 = (((x257<x258)%x259)-x260);

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x262 = INT32_MAX;
	static uint32_t x263 = 18976973U;
	uint64_t x264 = 35055759171565LLU;
	volatile uint64_t t58 = 1LLU;

	t58 = (((x261<x262)%x263)-x264);

	if (t58 != 18446709017950380052LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = 72930293178LL;
	int16_t x266 = 1;
	uint32_t x267 = UINT32_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x265<x266)%x267)-x268);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x269 = UINT16_MAX;
	int16_t x270 = -1;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 13932666LLU;

	t60 = (((x269<x270)%x271)-x272);

	if (t60 != 18446744073695618950LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x275 = -1LL;
	volatile int64_t t61 = -405815889LL;

	t61 = (((x273<x274)%x275)-x276);

	if (t61 != -33LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -10502179;
	int16_t x278 = INT16_MIN;
	volatile uint16_t x279 = 333U;
	volatile int32_t t62 = -101678;

	t62 = (((x277<x278)%x279)-x280);

	if (t62 != 129) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x282 = INT32_MIN;
	static uint32_t x283 = 2U;
	static uint64_t x284 = 2489488512307LLU;
	static volatile uint64_t t63 = 2406481LLU;

	t63 = (((x281<x282)%x283)-x284);

	if (t63 != 18446741584221039310LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = -24;
	int16_t x286 = INT16_MIN;
	static int16_t x287 = -1469;
	volatile int8_t x288 = -4;
	static int32_t t64 = 18;

	t64 = (((x285<x286)%x287)-x288);

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x289 = -1;
	int16_t x291 = 1;
	volatile uint32_t x292 = 7U;
	volatile uint32_t t65 = 26393634U;

	t65 = (((x289<x290)%x291)-x292);

	if (t65 != 4294967289U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x293 = INT32_MAX;
	uint64_t x294 = UINT64_MAX;
	int16_t x296 = 5;
	static int32_t t66 = -67;

	t66 = (((x293<x294)%x295)-x296);

	if (t66 != -4) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x297 = 1017LL;
	static int32_t x298 = INT32_MIN;
	uint32_t x300 = 29U;

	t67 = (((x297<x298)%x299)-x300);

	if (t67 != 4294967267U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = 56U;
	int64_t x302 = INT64_MAX;
	int32_t x303 = INT32_MIN;
	static uint32_t x304 = UINT32_MAX;
	uint32_t t68 = 1753112252U;

	t68 = (((x301<x302)%x303)-x304);

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x306 = -1;
	int64_t x308 = -1LL;

	t69 = (((x305<x306)%x307)-x308);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = -21650659059120LL;
	int64_t x310 = -223053773LL;
	volatile int32_t x312 = INT32_MAX;
	static volatile int32_t t70 = 6267;

	t70 = (((x309<x310)%x311)-x312);

	if (t70 != -2147483646) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x313 = -10751;
	uint8_t x314 = UINT8_MAX;
	uint32_t x315 = 1158183U;
	uint16_t x316 = 0U;
	volatile uint32_t t71 = 1128570U;

	t71 = (((x313<x314)%x315)-x316);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x317 = INT16_MIN;
	volatile int8_t x318 = INT8_MIN;
	int32_t x319 = 1224383;
	int8_t x320 = -2;

	t72 = (((x317<x318)%x319)-x320);

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x321 = 1;
	int16_t x322 = -1;
	volatile uint64_t x323 = UINT64_MAX;
	int16_t x324 = INT16_MIN;
	static uint64_t t73 = 1602327LLU;

	t73 = (((x321<x322)%x323)-x324);

	if (t73 != 32768LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = UINT8_MAX;
	uint64_t x326 = 694004624LLU;
	volatile int32_t x327 = -974878890;
	volatile uint16_t x328 = 170U;
	int32_t t74 = 115;

	t74 = (((x325<x326)%x327)-x328);

	if (t74 != -169) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x329 = -1;
	int64_t x330 = -1LL;
	uint8_t x332 = UINT8_MAX;
	int32_t t75 = 16905;

	t75 = (((x329<x330)%x331)-x332);

	if (t75 != -255) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x333 = 903U;
	int64_t x335 = -246730LL;
	uint64_t x336 = 48LLU;
	volatile uint64_t t76 = 573902469476LLU;

	t76 = (((x333<x334)%x335)-x336);

	if (t76 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x338 = 1739978;
	int32_t x339 = INT32_MAX;
	int8_t x340 = INT8_MAX;

	t77 = (((x337<x338)%x339)-x340);

	if (t77 != -126) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = INT8_MAX;
	static int32_t x342 = INT32_MIN;
	int32_t x343 = -1;

	t78 = (((x341<x342)%x343)-x344);

	if (t78 != 18446611838004155005LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = UINT16_MAX;
	static int16_t x346 = INT16_MIN;
	volatile int16_t x347 = INT16_MAX;
	int32_t t79 = 0;

	t79 = (((x345<x346)%x347)-x348);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = 120U;
	volatile uint32_t x351 = 164637972U;
	int8_t x352 = 30;
	static uint32_t t80 = 5352360U;

	t80 = (((x349<x350)%x351)-x352);

	if (t80 != 4294967267U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x353 = 1853852626U;
	int16_t x354 = INT16_MIN;
	uint16_t x355 = 924U;
	volatile int8_t x356 = -1;
	int32_t t81 = -890851;

	t81 = (((x353<x354)%x355)-x356);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x358 = -1;
	int64_t x359 = -1LL;
	int16_t x360 = -1;
	int64_t t82 = -245403240457690242LL;

	t82 = (((x357<x358)%x359)-x360);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x364 = 4570;
	uint64_t t83 = 84066015590LLU;

	t83 = (((x361<x362)%x363)-x364);

	if (t83 != 18446744073709547046LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = 27437020529124848LLU;
	uint64_t x366 = UINT64_MAX;
	volatile int8_t x367 = INT8_MAX;
	int32_t x368 = -142355631;
	volatile int32_t t84 = 7916511;

	t84 = (((x365<x366)%x367)-x368);

	if (t84 != 142355632) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = INT8_MAX;
	uint16_t x370 = UINT16_MAX;
	int8_t x371 = -1;
	static uint32_t t85 = 149373462U;

	t85 = (((x369<x370)%x371)-x372);

	if (t85 != 4294966058U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x374 = -1;
	volatile int64_t t86 = -83229366924555LL;

	t86 = (((x373<x374)%x375)-x376);

	if (t86 != -5336348167LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x378 = 63U;
	uint8_t x380 = UINT8_MAX;

	t87 = (((x377<x378)%x379)-x380);

	if (t87 != -254) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x382 = UINT32_MAX;
	uint64_t x384 = 19911034LLU;
	static volatile uint64_t t88 = 2015107935953LLU;

	t88 = (((x381<x382)%x383)-x384);

	if (t88 != 18446744073689640582LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x386 = INT16_MIN;
	uint16_t x388 = 926U;
	volatile int64_t t89 = 831102771517LL;

	t89 = (((x385<x386)%x387)-x388);

	if (t89 != -926LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MIN;
	int16_t x391 = -1;
	volatile int32_t x392 = -1;
	static volatile int32_t t90 = -1112;

	t90 = (((x389<x390)%x391)-x392);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = 8;
	int8_t x396 = INT8_MIN;
	volatile int64_t t91 = -2LL;

	t91 = (((x393<x394)%x395)-x396);

	if (t91 != 128LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x397 = 20909U;
	uint32_t x398 = 89692U;
	uint32_t x399 = 281077832U;
	static uint16_t x400 = 8008U;
	uint32_t t92 = 887057561U;

	t92 = (((x397<x398)%x399)-x400);

	if (t92 != 4294959289U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x405 = INT64_MAX;
	int32_t x406 = INT32_MAX;
	volatile uint8_t x407 = 31U;
	static int8_t x408 = INT8_MIN;
	static int32_t t93 = 464;

	t93 = (((x405<x406)%x407)-x408);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x409 = INT16_MAX;
	int16_t x411 = 1;
	int8_t x412 = -1;
	volatile int32_t t94 = 325;

	t94 = (((x409<x410)%x411)-x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x414 = INT64_MIN;
	static uint8_t x415 = 117U;
	uint32_t x416 = 18U;
	volatile uint32_t t95 = 23404U;

	t95 = (((x413<x414)%x415)-x416);

	if (t95 != 4294967278U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x421 = 379668923LLU;
	static uint32_t x422 = UINT32_MAX;
	uint8_t x424 = UINT8_MAX;

	t96 = (((x421<x422)%x423)-x424);

	if (t96 != -254) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = 2U;
	int16_t x431 = -1;
	int32_t x432 = -13811;
	int32_t t97 = -255133;

	t97 = (((x429<x430)%x431)-x432);

	if (t97 != 13811) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;
	uint64_t x434 = UINT64_MAX;
	int8_t x435 = -25;
	static volatile uint32_t t98 = 967482939U;

	t98 = (((x433<x434)%x435)-x436);

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x437 = 895067U;
	static int16_t x440 = INT16_MIN;
	static volatile int32_t t99 = -792803706;

	t99 = (((x437<x438)%x439)-x440);

	if (t99 != 32768) { NG(); } else { ; }
	
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

