#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int32_t x3 = -1;
static int32_t x6 = -1;
uint8_t x8 = UINT8_MAX;
uint32_t x9 = 7348352U;
uint16_t x16 = 14454U;
uint32_t x21 = UINT32_MAX;
uint64_t x22 = 970942405305992245LLU;
uint64_t x24 = 1162455150824700LLU;
static uint64_t t4 = 10637912758509702LLU;
int32_t x27 = INT32_MIN;
int64_t x28 = -276809884987269988LL;
int64_t x31 = -29604876150082014LL;
int64_t x38 = INT64_MIN;
int64_t t8 = 115122LL;
static uint8_t x46 = 17U;
int64_t x61 = INT64_MAX;
volatile uint64_t t18 = 15LLU;
uint8_t x89 = 3U;
volatile int16_t x94 = -440;
int16_t x107 = INT16_MIN;
volatile int32_t t23 = -2;
uint32_t x118 = 23U;
int8_t x120 = -1;
static int64_t x121 = -4207556101LL;
int8_t x122 = -1;
static uint16_t x130 = 3U;
uint32_t x132 = 454806U;
uint16_t x145 = 2U;
static volatile int8_t x149 = INT8_MIN;
int8_t x150 = INT8_MIN;
uint64_t x160 = UINT64_MAX;
uint64_t x162 = 0LLU;
int8_t x163 = INT8_MIN;
static volatile int16_t x166 = 10;
uint32_t x167 = UINT32_MAX;
int64_t x168 = -2LL;
uint64_t x170 = 1LLU;
static uint16_t x172 = 9326U;
uint64_t x181 = UINT64_MAX;
volatile int64_t x183 = -1LL;
uint64_t x203 = 7063663505744450718LLU;
int8_t x205 = -40;
volatile int16_t x219 = -1;
int8_t x220 = INT8_MIN;
static uint32_t x237 = UINT32_MAX;
int32_t x240 = 3;
static volatile int16_t x241 = -1;
volatile int16_t x242 = INT16_MAX;
int32_t x244 = INT32_MAX;
static volatile int64_t x245 = INT64_MIN;
volatile uint32_t t54 = 37333U;
int16_t x249 = INT16_MIN;
uint32_t x250 = 0U;
static int32_t t55 = -7929;
int64_t x253 = INT64_MAX;
int8_t x261 = INT8_MIN;
volatile int64_t x262 = INT64_MIN;
int32_t x265 = 3319;
uint64_t x266 = 924097LLU;
int8_t x269 = -1;
int16_t x285 = -16;
uint64_t x286 = UINT64_MAX;
static int32_t t64 = 1;
uint16_t x293 = UINT16_MAX;
static uint64_t x295 = 29515370LLU;
volatile int8_t x299 = -1;
volatile int32_t t69 = 186;
uint8_t x328 = 97U;
uint16_t x329 = UINT16_MAX;
int64_t x340 = -693777LL;
static int8_t x346 = INT8_MIN;
int8_t x348 = -1;
uint16_t x350 = UINT16_MAX;
uint32_t x354 = 2353434U;
int64_t x363 = 131463213LL;
int64_t x375 = -1LL;
int32_t x385 = 250141978;
uint8_t x397 = UINT8_MAX;
int32_t x413 = -24739;
volatile uint8_t x415 = UINT8_MAX;
static int16_t x416 = -1;
volatile int16_t x418 = 0;
volatile int64_t t87 = 182553598LL;
uint16_t x432 = 29U;
uint64_t x433 = UINT64_MAX;
uint64_t x437 = 133655217505742LLU;
uint8_t x441 = 39U;
int32_t x446 = 216;
int32_t x448 = -2502216;
static int64_t t96 = -6LL;
static int32_t x457 = INT32_MIN;
int32_t x461 = INT32_MAX;
volatile int32_t t98 = 4003;


void f0(void) {
	int16_t x1 = -1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -181531;

	t0 = ((x1==x2)/(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int32_t x7 = 3923091;
	volatile int32_t t1 = -15;

	t1 = ((x5==x6)/(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 5764489899194LLU;
	int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -2;

	t2 = ((x9==x10)/(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = 3U;
	volatile int8_t x15 = -2;
	static int32_t t3 = 108075;

	t3 = ((x13==x14)/(x15+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x23 = INT32_MIN;

	t4 = ((x21==x22)/(x23+x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = -1;
	int64_t t5 = -113662842LL;

	t5 = ((x25==x26)/(x27+x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = INT64_MIN;
	int8_t x30 = -1;
	static uint8_t x32 = 1U;
	static volatile int64_t t6 = 291059820891LL;

	t6 = ((x29==x30)/(x31+x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MIN;
	static uint16_t x34 = 89U;
	static uint64_t x35 = 29044625600356LLU;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t7 = 181783LLU;

	t7 = ((x33==x34)/(x35+x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int64_t x39 = -1LL;
	volatile int8_t x40 = INT8_MIN;

	t8 = ((x37==x38)/(x39+x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	uint64_t x42 = 1242729995LLU;
	volatile uint32_t x43 = 217851084U;
	static uint16_t x44 = 2001U;
	volatile uint32_t t9 = 56U;

	t9 = ((x41==x42)/(x43+x44));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	int8_t x47 = INT8_MAX;
	volatile int8_t x48 = -1;
	int32_t t10 = -3171169;

	t10 = ((x45==x46)/(x47+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	int8_t x56 = 5;
	int32_t t11 = 9380100;

	t11 = ((x53==x54)/(x55+x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MAX;
	int16_t x59 = 682;
	int8_t x60 = -1;
	volatile int32_t t12 = -455306213;

	t12 = ((x57==x58)/(x59+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = -1;
	volatile int16_t x63 = 57;
	int64_t x64 = INT64_MIN;
	static volatile int64_t t13 = -1420721113911553123LL;

	t13 = ((x61==x62)/(x63+x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = -123358732;
	volatile uint32_t x66 = UINT32_MAX;
	int16_t x67 = -1;
	uint32_t x68 = 495586415U;
	uint32_t t14 = 14842055U;

	t14 = ((x65==x66)/(x67+x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = -8153559LL;
	volatile uint64_t x74 = UINT64_MAX;
	volatile int64_t x75 = -1LL;
	uint32_t x76 = UINT32_MAX;
	static int64_t t15 = -198693273282489482LL;

	t15 = ((x73==x74)/(x75+x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	static volatile int32_t x79 = 8367;
	uint64_t x80 = UINT64_MAX;
	uint64_t t16 = 2005869198541712207LLU;

	t16 = ((x77==x78)/(x79+x80));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = 1;
	int64_t x82 = INT64_MAX;
	int64_t x83 = INT64_MIN;
	int16_t x84 = 197;
	static int64_t t17 = 1745LL;

	t17 = ((x81==x82)/(x83+x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	int32_t x86 = -15;
	volatile uint32_t x87 = UINT32_MAX;
	uint64_t x88 = UINT64_MAX;

	t18 = ((x85==x86)/(x87+x88));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x90 = UINT32_MAX;
	uint16_t x91 = 5324U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t19 = 379623;

	t19 = ((x89==x90)/(x91+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 1U;
	volatile int32_t x95 = INT32_MIN;
	uint32_t x96 = 15267U;
	static volatile uint32_t t20 = 307636916U;

	t20 = ((x93==x94)/(x95+x96));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x97 = UINT16_MAX;
	volatile int8_t x98 = INT8_MAX;
	int64_t x99 = 1LL;
	uint8_t x100 = 1U;
	int64_t t21 = -858746LL;

	t21 = ((x97==x98)/(x99+x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = 2131815993LL;
	int8_t x106 = 0;
	volatile int32_t x108 = INT32_MAX;
	int32_t t22 = -2414242;

	t22 = ((x105==x106)/(x107+x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -1;
	int16_t x110 = INT16_MAX;
	int16_t x111 = INT16_MIN;
	int8_t x112 = 0;

	t23 = ((x109==x110)/(x111+x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x113 = UINT32_MAX;
	int8_t x114 = -1;
	static volatile uint16_t x115 = UINT16_MAX;
	static volatile int32_t x116 = -5;
	int32_t t24 = 420835;

	t24 = ((x113==x114)/(x115+x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	uint64_t x119 = 227244LLU;
	static volatile uint64_t t25 = 470399917655489542LLU;

	t25 = ((x117==x118)/(x119+x120));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x123 = INT16_MAX;
	uint16_t x124 = UINT16_MAX;
	int32_t t26 = -1069671525;

	t26 = ((x121==x122)/(x123+x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x125 = INT64_MIN;
	int16_t x126 = -15;
	volatile uint8_t x127 = UINT8_MAX;
	int64_t x128 = 42LL;
	volatile int64_t t27 = 4156083564933LL;

	t27 = ((x125==x126)/(x127+x128));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	uint16_t x131 = 4876U;
	uint32_t t28 = 20672737U;

	t28 = ((x129==x130)/(x131+x132));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = -1LL;
	volatile int16_t x134 = INT16_MIN;
	static int16_t x135 = INT16_MIN;
	static uint64_t x136 = 10744LLU;
	volatile uint64_t t29 = 220073LLU;

	t29 = ((x133==x134)/(x135+x136));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = INT8_MIN;
	uint64_t x138 = 504593631059LLU;
	static uint64_t x139 = 43843449785152LLU;
	volatile uint32_t x140 = 14914540U;
	uint64_t t30 = 33976LLU;

	t30 = ((x137==x138)/(x139+x140));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x141 = 11868U;
	int64_t x142 = INT64_MIN;
	static uint16_t x143 = 6610U;
	static int16_t x144 = INT16_MAX;
	volatile int32_t t31 = 0;

	t31 = ((x141==x142)/(x143+x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x146 = INT64_MIN;
	int64_t x147 = -434LL;
	uint64_t x148 = 5495904619243900649LLU;
	uint64_t t32 = 11936823LLU;

	t32 = ((x145==x146)/(x147+x148));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x151 = -1;
	static int16_t x152 = INT16_MAX;
	int32_t t33 = -48290;

	t33 = ((x149==x150)/(x151+x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MAX;
	static int16_t x154 = 1;
	uint32_t x155 = 1U;
	int16_t x156 = 0;
	volatile uint32_t t34 = 21710U;

	t34 = ((x153==x154)/(x155+x156));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -94791385069614085LL;
	int8_t x158 = INT8_MAX;
	volatile uint32_t x159 = 6927U;
	uint64_t t35 = 65554540LLU;

	t35 = ((x157==x158)/(x159+x160));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 1955U;
	static int64_t x164 = 889298765057424LL;
	static volatile int64_t t36 = -136220523355395LL;

	t36 = ((x161==x162)/(x163+x164));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = UINT32_MAX;
	int64_t t37 = -2813344539LL;

	t37 = ((x165==x166)/(x167+x168));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = -5LL;
	int8_t x171 = INT8_MIN;
	int32_t t38 = -1571133;

	t38 = ((x169==x170)/(x171+x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = INT32_MIN;
	static volatile uint32_t x174 = 21100U;
	uint64_t x175 = 390LLU;
	static int32_t x176 = INT32_MIN;
	uint64_t t39 = 4801528LLU;

	t39 = ((x173==x174)/(x175+x176));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x182 = -1;
	int8_t x184 = -1;
	static volatile int64_t t40 = -7846247LL;

	t40 = ((x181==x182)/(x183+x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = 1;
	int64_t x190 = -1LL;
	static volatile int64_t x191 = 790LL;
	int32_t x192 = -1;
	volatile int64_t t41 = -29LL;

	t41 = ((x189==x190)/(x191+x192));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = INT32_MIN;
	uint32_t x194 = UINT32_MAX;
	volatile uint16_t x195 = UINT16_MAX;
	static volatile int8_t x196 = INT8_MIN;
	int32_t t42 = 34207755;

	t42 = ((x193==x194)/(x195+x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 12U;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = 162343152LLU;
	volatile int8_t x200 = 4;
	static volatile uint64_t t43 = 22759LLU;

	t43 = ((x197==x198)/(x199+x200));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x201 = 1;
	static int64_t x202 = -28221482308084LL;
	static uint32_t x204 = 6023U;
	uint64_t t44 = 11213935224LLU;

	t44 = ((x201==x202)/(x203+x204));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x206 = -1;
	int64_t x207 = -7LL;
	static int8_t x208 = -30;
	volatile int64_t t45 = -333LL;

	t45 = ((x205==x206)/(x207+x208));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MIN;
	int64_t x211 = 86462546LL;
	int16_t x212 = INT16_MAX;
	int64_t t46 = -2838908741LL;

	t46 = ((x209==x210)/(x211+x212));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MAX;
	volatile uint64_t x214 = 57995379108424LLU;
	volatile uint32_t x215 = 154U;
	static uint16_t x216 = UINT16_MAX;
	uint32_t t47 = 58485U;

	t47 = ((x213==x214)/(x215+x216));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = INT64_MAX;
	int8_t x218 = -1;
	int32_t t48 = -94730;

	t48 = ((x217==x218)/(x219+x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x225 = -1;
	int64_t x226 = -262801329661650LL;
	uint8_t x227 = 54U;
	uint32_t x228 = 672089U;
	volatile uint32_t t49 = 1738964111U;

	t49 = ((x225==x226)/(x227+x228));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = 693;
	uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 1803U;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t50 = 87989;

	t50 = ((x229==x230)/(x231+x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = -1;
	int32_t x234 = 4130572;
	uint32_t x235 = 4265801U;
	int8_t x236 = -1;
	uint32_t t51 = 7U;

	t51 = ((x233==x234)/(x235+x236));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x238 = INT16_MAX;
	uint8_t x239 = 3U;
	int32_t t52 = -51709522;

	t52 = ((x237==x238)/(x239+x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x243 = INT8_MIN;
	volatile int32_t t53 = 186;

	t53 = ((x241==x242)/(x243+x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x246 = 565236568544LL;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = -1;

	t54 = ((x245==x246)/(x247+x248));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x251 = INT16_MAX;
	int8_t x252 = 27;

	t55 = ((x249==x250)/(x251+x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x254 = INT16_MAX;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = 58;
	volatile uint32_t t56 = 445331458U;

	t56 = ((x253==x254)/(x255+x256));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x263 = 3657015U;
	int8_t x264 = -1;
	static uint32_t t57 = 219403585U;

	t57 = ((x261==x262)/(x263+x264));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x267 = 2U;
	int8_t x268 = INT8_MAX;
	int32_t t58 = 56;

	t58 = ((x265==x266)/(x267+x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x270 = 25U;
	int64_t x271 = -1LL;
	static int8_t x272 = -3;
	volatile int64_t t59 = -120311969154199523LL;

	t59 = ((x269==x270)/(x271+x272));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = 145734480768748LL;
	int32_t x274 = -1;
	static uint8_t x275 = 4U;
	static int32_t x276 = 4600344;
	int32_t t60 = 2;

	t60 = ((x273==x274)/(x275+x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = 7122733455LL;
	int32_t x278 = INT32_MAX;
	volatile int16_t x279 = INT16_MIN;
	uint32_t x280 = 20U;
	uint32_t t61 = 888634692U;

	t61 = ((x277==x278)/(x279+x280));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x281 = INT16_MAX;
	int16_t x282 = -231;
	volatile uint8_t x283 = 4U;
	int32_t x284 = 48;
	volatile int32_t t62 = -776;

	t62 = ((x281==x282)/(x283+x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x287 = 1U;
	volatile int64_t x288 = INT64_MIN;
	int64_t t63 = 1578797432134192LL;

	t63 = ((x285==x286)/(x287+x288));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x289 = UINT64_MAX;
	int32_t x290 = INT32_MAX;
	int32_t x291 = 3466;
	int32_t x292 = -1;

	t64 = ((x289==x290)/(x291+x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x294 = 15U;
	volatile int32_t x296 = INT32_MIN;
	uint64_t t65 = 22518LLU;

	t65 = ((x293==x294)/(x295+x296));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = INT64_MAX;
	static int16_t x298 = INT16_MAX;
	int64_t x300 = -1LL;
	int64_t t66 = 3123LL;

	t66 = ((x297==x298)/(x299+x300));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = -1;
	int64_t x302 = INT64_MIN;
	volatile int8_t x303 = -1;
	volatile uint64_t x304 = 21443LLU;
	volatile uint64_t t67 = 2154088976704683LLU;

	t67 = ((x301==x302)/(x303+x304));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x309 = INT64_MAX;
	int32_t x310 = -14438163;
	int8_t x311 = INT8_MIN;
	int8_t x312 = 5;
	static int32_t t68 = 1;

	t68 = ((x309==x310)/(x311+x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = 0;
	static volatile int16_t x314 = -1;
	volatile int8_t x315 = INT8_MIN;
	int32_t x316 = -4;

	t69 = ((x313==x314)/(x315+x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x325 = 0;
	int64_t x326 = -366408035LL;
	static uint32_t x327 = 19U;
	uint32_t t70 = 1788220578U;

	t70 = ((x325==x326)/(x327+x328));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x330 = 1;
	volatile uint16_t x331 = 3U;
	uint8_t x332 = 13U;
	volatile int32_t t71 = 272;

	t71 = ((x329==x330)/(x331+x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = 0;
	uint64_t x334 = UINT64_MAX;
	static uint32_t x335 = UINT32_MAX;
	volatile int8_t x336 = INT8_MAX;
	uint32_t t72 = 1317504173U;

	t72 = ((x333==x334)/(x335+x336));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x338 = -1LL;
	int8_t x339 = INT8_MIN;
	int64_t t73 = 9461070612LL;

	t73 = ((x337==x338)/(x339+x340));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	int64_t x343 = 1791641112877054LL;
	static int32_t x344 = INT32_MIN;
	volatile int64_t t74 = -14508045092LL;

	t74 = ((x341==x342)/(x343+x344));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = 23;
	volatile int16_t x347 = -1;
	volatile int32_t t75 = -1791;

	t75 = ((x345==x346)/(x347+x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = 1;
	volatile uint16_t x351 = 95U;
	volatile int8_t x352 = -1;
	volatile int32_t t76 = 8;

	t76 = ((x349==x350)/(x351+x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x353 = INT16_MIN;
	uint32_t x355 = 1336U;
	uint16_t x356 = 11U;
	volatile uint32_t t77 = 195U;

	t77 = ((x353==x354)/(x355+x356));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x357 = INT8_MAX;
	volatile uint64_t x358 = 53877921794LLU;
	static volatile int64_t x359 = 4752352455914LL;
	uint64_t x360 = UINT64_MAX;
	uint64_t t78 = 796541499445160775LLU;

	t78 = ((x357==x358)/(x359+x360));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x361 = UINT32_MAX;
	int8_t x362 = INT8_MIN;
	static volatile int64_t x364 = INT64_MIN;
	int64_t t79 = 319894918LL;

	t79 = ((x361==x362)/(x363+x364));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x373 = -1;
	volatile int8_t x374 = -1;
	uint8_t x376 = 16U;
	volatile int64_t t80 = 5LL;

	t80 = ((x373==x374)/(x375+x376));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x377 = -1;
	static uint8_t x378 = 111U;
	uint32_t x379 = 5U;
	int32_t x380 = -1;
	volatile uint32_t t81 = 2025U;

	t81 = ((x377==x378)/(x379+x380));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x386 = -6;
	int8_t x387 = -1;
	static int8_t x388 = INT8_MIN;
	int32_t t82 = 5677;

	t82 = ((x385==x386)/(x387+x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = 544915218779LL;
	int64_t x390 = INT64_MIN;
	int16_t x391 = -1;
	volatile int32_t x392 = -1;
	int32_t t83 = -747;

	t83 = ((x389==x390)/(x391+x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x398 = -1;
	static volatile int16_t x399 = -1;
	uint64_t x400 = 248659358978LLU;
	volatile uint64_t t84 = 1312751594239376991LLU;

	t84 = ((x397==x398)/(x399+x400));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x401 = UINT16_MAX;
	uint16_t x402 = 0U;
	static volatile int32_t x403 = 100500;
	static int8_t x404 = INT8_MIN;
	int32_t t85 = 1;

	t85 = ((x401==x402)/(x403+x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x414 = INT32_MAX;
	static volatile int32_t t86 = 2511;

	t86 = ((x413==x414)/(x415+x416));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x417 = UINT16_MAX;
	uint8_t x419 = 102U;
	static int64_t x420 = -1LL;

	t87 = ((x417==x418)/(x419+x420));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = INT64_MIN;
	int8_t x423 = 8;
	static int8_t x424 = -6;
	static int32_t t88 = -103106158;

	t88 = ((x421==x422)/(x423+x424));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x425 = 6753U;
	volatile int8_t x426 = -1;
	int64_t x427 = INT64_MIN;
	uint8_t x428 = 12U;
	volatile int64_t t89 = -101011602013531951LL;

	t89 = ((x425==x426)/(x427+x428));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x429 = 18111;
	static uint64_t x430 = 15364726519670LLU;
	int8_t x431 = INT8_MIN;
	int32_t t90 = 2728888;

	t90 = ((x429==x430)/(x431+x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x434 = 64U;
	static uint32_t x435 = 3966047U;
	uint8_t x436 = 9U;
	volatile uint32_t t91 = 13863U;

	t91 = ((x433==x434)/(x435+x436));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x438 = 1219038100401LL;
	volatile uint32_t x439 = 4992737U;
	int32_t x440 = 14535277;
	volatile uint32_t t92 = 334U;

	t92 = ((x437==x438)/(x439+x440));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x442 = UINT8_MAX;
	int8_t x443 = INT8_MIN;
	static int16_t x444 = INT16_MIN;
	volatile int32_t t93 = -8;

	t93 = ((x441==x442)/(x443+x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x445 = INT16_MIN;
	static int8_t x447 = INT8_MAX;
	int32_t t94 = -2494;

	t94 = ((x445==x446)/(x447+x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = INT16_MIN;
	int8_t x450 = INT8_MIN;
	int64_t x451 = INT64_MIN;
	uint32_t x452 = 154U;
	int64_t t95 = -3916339035452096LL;

	t95 = ((x449==x450)/(x451+x452));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x453 = INT64_MIN;
	uint64_t x454 = 31375666LLU;
	static int64_t x455 = 108889797633650LL;
	int16_t x456 = INT16_MAX;

	t96 = ((x453==x454)/(x455+x456));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x458 = 6;
	int16_t x459 = 1927;
	volatile int32_t x460 = INT32_MIN;
	int32_t t97 = -1;

	t97 = ((x457==x458)/(x459+x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x462 = 112877LL;
	int16_t x463 = 3332;
	static int32_t x464 = INT32_MIN;

	t98 = ((x461==x462)/(x463+x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = 1;
	uint32_t x466 = UINT32_MAX;
	volatile int16_t x467 = INT16_MAX;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t99 = 7;

	t99 = ((x465==x466)/(x467+x468));

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

