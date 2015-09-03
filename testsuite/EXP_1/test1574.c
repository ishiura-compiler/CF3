#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
static volatile int64_t x10 = -1216557902161LL;
uint8_t x12 = 3U;
volatile int64_t t2 = -536623055890315LL;
uint64_t x15 = 288713LLU;
uint64_t t4 = 275613729505990933LLU;
static int8_t x30 = -1;
int16_t x31 = INT16_MIN;
volatile uint8_t x35 = 63U;
static volatile int8_t x39 = INT8_MIN;
int64_t x40 = 1694LL;
uint64_t x58 = 60400537834691LLU;
static uint8_t x60 = UINT8_MAX;
int32_t t13 = 1447;
int16_t x62 = INT16_MAX;
int8_t x69 = 0;
int8_t x70 = -1;
volatile int16_t x79 = -1;
uint64_t t18 = 1236LLU;
int8_t x81 = INT8_MIN;
uint16_t x82 = UINT16_MAX;
int8_t x84 = INT8_MIN;
int64_t x86 = 7962916LL;
int16_t x87 = -14356;
uint16_t x91 = UINT16_MAX;
int64_t x94 = INT64_MIN;
int64_t t22 = -37218706909LL;
int32_t x97 = -510517;
int8_t x114 = -1;
volatile uint16_t x118 = 1805U;
uint64_t x119 = 17LLU;
static uint32_t x120 = UINT32_MAX;
volatile uint64_t t27 = 3647671LLU;
int64_t x146 = INT64_MIN;
volatile int16_t x147 = INT16_MAX;
int32_t t34 = 32;
int16_t x152 = INT16_MAX;
uint64_t t37 = 33430000045LLU;
int16_t x164 = INT16_MIN;
int16_t x165 = INT16_MIN;
volatile int32_t x167 = 255;
int8_t x168 = -1;
int8_t x171 = INT8_MIN;
static uint32_t x183 = 374508484U;
static int64_t x185 = INT64_MAX;
int32_t x211 = INT32_MAX;
uint16_t x217 = 5273U;
int16_t x221 = -1;
static int8_t x224 = INT8_MAX;
int32_t t52 = -95826569;
int16_t x230 = INT16_MIN;
uint64_t x231 = 3413699LLU;
int64_t x238 = INT64_MIN;
uint64_t x242 = 67LLU;
int8_t x243 = INT8_MIN;
int64_t x246 = 26447072036347LL;
int16_t x252 = -1;
static volatile int8_t x255 = INT8_MAX;
int64_t t59 = 81033LL;
uint16_t x263 = UINT16_MAX;
static int16_t x270 = INT16_MIN;
static int16_t x276 = INT16_MAX;
uint16_t x278 = 2U;
static uint64_t t65 = 1976593977LLU;
int64_t x281 = INT64_MIN;
volatile int32_t t66 = -6572047;
int64_t x290 = -17204381889LL;
static int16_t x292 = 1;
volatile int8_t x293 = INT8_MIN;
volatile int8_t x294 = 1;
int8_t x301 = INT8_MIN;
static uint16_t x312 = 33U;
volatile int64_t t72 = 3412019843887875LL;
int32_t x313 = INT32_MIN;
int16_t x314 = -1567;
int64_t x339 = -1LL;
volatile uint64_t t78 = UINT64_MAX;
uint64_t x341 = 6659LLU;
static int8_t x343 = -61;
int32_t t80 = -701;
uint8_t x350 = UINT8_MAX;
int8_t x354 = INT8_MIN;
volatile int16_t x363 = -2250;
int32_t t84 = 5999068;
int8_t x373 = -4;
int32_t x375 = -1;
int32_t x385 = 100335001;
int32_t x387 = INT32_MIN;
uint16_t x391 = 2524U;
static int16_t x404 = INT16_MAX;
static volatile int32_t t94 = -248;
volatile int16_t x405 = INT16_MIN;
int8_t x407 = 1;
int32_t x415 = INT32_MIN;
int64_t x419 = -13902219233LL;
volatile int32_t x421 = 598355;
uint64_t x424 = 4976848664LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 1532691227LLU;
	static int8_t x4 = INT8_MIN;
	uint64_t t0 = 30663949LLU;

	t0 = (((x1<=x2)%x3)+x4);

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int64_t x7 = -1LL;
	static uint32_t x8 = 0U;
	static int64_t t1 = 27LL;

	t1 = (((x5<=x6)%x7)+x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	volatile int64_t x11 = -1LL;

	t2 = (((x9<=x10)%x11)+x12);

	if (t2 != 3LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x14 = -6;
	uint64_t x16 = 31815269323729746LLU;
	uint64_t t3 = 14966LLU;

	t3 = (((x13<=x14)%x15)+x16);

	if (t3 != 31815269323729747LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 4770387757992849821LLU;
	uint16_t x18 = 9361U;
	volatile uint64_t x19 = 1LLU;
	uint16_t x20 = UINT16_MAX;

	t4 = (((x17<=x18)%x19)+x20);

	if (t4 != 65535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -58312745;
	uint8_t x22 = 6U;
	volatile int8_t x23 = -1;
	static volatile int16_t x24 = -7789;
	int32_t t5 = 1210;

	t5 = (((x21<=x22)%x23)+x24);

	if (t5 != -7789) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	static volatile int32_t x26 = -1;
	static uint8_t x27 = UINT8_MAX;
	static uint8_t x28 = 116U;
	static int32_t t6 = -2529;

	t6 = (((x25<=x26)%x27)+x28);

	if (t6 != 117) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 0LL;
	static int8_t x32 = -1;
	volatile int32_t t7 = 9994321;

	t7 = (((x29<=x30)%x31)+x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	volatile uint32_t x36 = UINT32_MAX;
	uint32_t t8 = UINT32_MAX;

	t8 = (((x33<=x34)%x35)+x36);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -148LL;
	uint16_t x38 = 0U;
	int64_t t9 = 1774113965846160LL;

	t9 = (((x37<=x38)%x39)+x40);

	if (t9 != 1695LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	volatile int8_t x42 = 0;
	static uint8_t x43 = 7U;
	int16_t x44 = INT16_MAX;
	int32_t t10 = 845381304;

	t10 = (((x41<=x42)%x43)+x44);

	if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 15U;
	static int16_t x50 = -1;
	static int32_t x51 = -1;
	int16_t x52 = 31;
	int32_t t11 = 30530230;

	t11 = (((x49<=x50)%x51)+x52);

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	static uint8_t x54 = 126U;
	static volatile int64_t x55 = 556LL;
	static int8_t x56 = INT8_MAX;
	volatile int64_t t12 = -18672LL;

	t12 = (((x53<=x54)%x55)+x56);

	if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x57 = 405LLU;
	int32_t x59 = -3118;

	t13 = (((x57<=x58)%x59)+x60);

	if (t13 != 256) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = UINT32_MAX;
	uint64_t x63 = 34351765694LLU;
	volatile uint16_t x64 = UINT16_MAX;
	uint64_t t14 = 101664638LLU;

	t14 = (((x61<=x62)%x63)+x64);

	if (t14 != 65535LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -992;
	static int64_t x66 = -1LL;
	uint8_t x67 = 104U;
	int32_t x68 = -1;
	volatile int32_t t15 = -1431079;

	t15 = (((x65<=x66)%x67)+x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x71 = 14U;
	volatile uint32_t x72 = 3597306U;
	volatile uint32_t t16 = 2510U;

	t16 = (((x69<=x70)%x71)+x72);

	if (t16 != 3597306U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	int32_t x74 = 350;
	static uint32_t x75 = 2341538U;
	int8_t x76 = INT8_MIN;
	uint32_t t17 = 334U;

	t17 = (((x73<=x74)%x75)+x76);

	if (t17 != 4294967169U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int64_t x78 = INT64_MAX;
	volatile uint64_t x80 = 1940LLU;

	t18 = (((x77<=x78)%x79)+x80);

	if (t18 != 1940LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x83 = -10802876;
	volatile int32_t t19 = -108;

	t19 = (((x81<=x82)%x83)+x84);

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MAX;
	uint32_t x88 = 17U;
	volatile uint32_t t20 = 699U;

	t20 = (((x85<=x86)%x87)+x88);

	if (t20 != 17U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int64_t x90 = INT64_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t21 = 13;

	t21 = (((x89<=x90)%x91)+x92);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 1U;
	static int64_t x95 = -1LL;
	static int32_t x96 = 1;

	t22 = (((x93<=x94)%x95)+x96);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x98 = INT64_MIN;
	uint16_t x99 = 21U;
	static int64_t x100 = INT64_MIN;
	static volatile int64_t t23 = INT64_MIN;

	t23 = (((x97<=x98)%x99)+x100);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	int64_t x106 = INT64_MIN;
	int16_t x107 = -1430;
	int16_t x108 = 38;
	int32_t t24 = -7346862;

	t24 = (((x105<=x106)%x107)+x108);

	if (t24 != 38) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	int32_t x111 = INT32_MAX;
	int8_t x112 = INT8_MIN;
	static int32_t t25 = 12;

	t25 = (((x109<=x110)%x111)+x112);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -6;
	static volatile int32_t x115 = -1;
	volatile int8_t x116 = -28;
	int32_t t26 = -65667122;

	t26 = (((x113<=x114)%x115)+x116);

	if (t26 != -28) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = INT8_MIN;

	t27 = (((x117<=x118)%x119)+x120);

	if (t27 != 4294967296LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = 1196U;
	uint64_t x122 = 79459578502808LLU;
	int32_t x123 = INT32_MIN;
	int16_t x124 = -1;
	volatile int32_t t28 = -27170778;

	t28 = (((x121<=x122)%x123)+x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = INT32_MIN;
	static volatile uint64_t x126 = 52622168981LLU;
	volatile int64_t x127 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	volatile int64_t t29 = 262125854649LL;

	t29 = (((x125<=x126)%x127)+x128);

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = UINT16_MAX;
	volatile int32_t x130 = INT32_MAX;
	static int16_t x131 = INT16_MAX;
	int16_t x132 = 3;
	int32_t t30 = -211515;

	t30 = (((x129<=x130)%x131)+x132);

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x133 = INT16_MIN;
	int64_t x134 = -7LL;
	uint8_t x135 = UINT8_MAX;
	volatile int32_t x136 = 11;
	int32_t t31 = 166593;

	t31 = (((x133<=x134)%x135)+x136);

	if (t31 != 12) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MAX;
	static volatile uint32_t x138 = UINT32_MAX;
	int64_t x139 = -1LL;
	int64_t x140 = INT64_MIN;
	volatile int64_t t32 = INT64_MIN;

	t32 = (((x137<=x138)%x139)+x140);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = -1;
	int8_t x143 = INT8_MAX;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t33 = INT32_MIN;

	t33 = (((x141<=x142)%x143)+x144);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	static int8_t x148 = 0;

	t34 = (((x145<=x146)%x147)+x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 1727777703U;
	static int32_t x150 = INT32_MIN;
	int16_t x151 = -1;
	int32_t t35 = -43651788;

	t35 = (((x149<=x150)%x151)+x152);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = 10LL;
	int32_t x154 = INT32_MAX;
	static int16_t x155 = 136;
	int8_t x156 = INT8_MAX;
	int32_t t36 = 14364106;

	t36 = (((x153<=x154)%x155)+x156);

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = 26117843503LL;
	uint8_t x158 = 2U;
	uint64_t x159 = 61479082204LLU;
	uint8_t x160 = 3U;

	t37 = (((x157<=x158)%x159)+x160);

	if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MIN;
	volatile int32_t x162 = INT32_MIN;
	static int8_t x163 = -13;
	volatile int32_t t38 = -32354616;

	t38 = (((x161<=x162)%x163)+x164);

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x166 = -1;
	volatile int32_t t39 = 8934838;

	t39 = (((x165<=x166)%x167)+x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = -1LL;
	volatile uint32_t x172 = UINT32_MAX;
	volatile uint32_t t40 = 114541U;

	t40 = (((x169<=x170)%x171)+x172);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -5800995;
	uint32_t x174 = UINT32_MAX;
	int16_t x175 = INT16_MIN;
	volatile int8_t x176 = -6;
	int32_t t41 = -20708;

	t41 = (((x173<=x174)%x175)+x176);

	if (t41 != -5) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 1U;
	uint32_t x182 = 100155U;
	static uint64_t x184 = UINT64_MAX;
	uint64_t t42 = 14646LLU;

	t42 = (((x181<=x182)%x183)+x184);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = INT16_MAX;
	static int16_t x187 = INT16_MIN;
	volatile int8_t x188 = 29;
	int32_t t43 = 1;

	t43 = (((x185<=x186)%x187)+x188);

	if (t43 != 29) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;
	volatile int64_t x191 = INT64_MIN;
	volatile int32_t x192 = INT32_MIN;
	volatile int64_t t44 = 269802217080042LL;

	t44 = (((x189<=x190)%x191)+x192);

	if (t44 != -2147483647LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MAX;
	uint64_t x195 = 17LLU;
	uint16_t x196 = UINT16_MAX;
	volatile uint64_t t45 = 1030LLU;

	t45 = (((x193<=x194)%x195)+x196);

	if (t45 != 65536LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = 212U;
	int16_t x198 = INT16_MIN;
	volatile int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MIN;
	int32_t t46 = -53494173;

	t46 = (((x197<=x198)%x199)+x200);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 0U;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = UINT8_MAX;
	static int32_t x204 = -25654;
	volatile int32_t t47 = 22303;

	t47 = (((x201<=x202)%x203)+x204);

	if (t47 != -25654) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x205 = 23;
	uint8_t x206 = 19U;
	uint64_t x207 = 7362345937550LLU;
	uint8_t x208 = UINT8_MAX;
	volatile uint64_t t48 = 92452865380559LLU;

	t48 = (((x205<=x206)%x207)+x208);

	if (t48 != 255LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = 41;
	volatile int32_t x210 = INT32_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t49 = -3;

	t49 = (((x209<=x210)%x211)+x212);

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x218 = INT32_MAX;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 0U;
	int32_t t50 = -52290;

	t50 = (((x217<=x218)%x219)+x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x222 = -51;
	int64_t x223 = 1929426LL;
	volatile int64_t t51 = -254199LL;

	t51 = (((x221<=x222)%x223)+x224);

	if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 999U;
	int64_t x226 = 0LL;
	static volatile uint8_t x227 = 19U;
	uint16_t x228 = 1U;

	t52 = (((x225<=x226)%x227)+x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile uint64_t t53 = 427199776693LLU;

	t53 = (((x229<=x230)%x231)+x232);

	if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MIN;
	static int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MAX;
	int16_t x236 = INT16_MIN;
	int32_t t54 = -13946720;

	t54 = (((x233<=x234)%x235)+x236);

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x237 = 2U;
	int8_t x239 = INT8_MIN;
	int8_t x240 = -1;
	volatile int32_t t55 = -55;

	t55 = (((x237<=x238)%x239)+x240);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = -2577418826954LL;
	int16_t x244 = INT16_MIN;
	volatile int32_t t56 = 9662817;

	t56 = (((x241<=x242)%x243)+x244);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 8U;
	static uint64_t x247 = UINT64_MAX;
	int16_t x248 = -413;
	volatile uint64_t t57 = 1180814253228275087LLU;

	t57 = (((x245<=x246)%x247)+x248);

	if (t57 != 18446744073709551204LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x249 = 4489U;
	int32_t x250 = -1;
	static volatile uint32_t x251 = 3U;
	uint32_t t58 = UINT32_MAX;

	t58 = (((x249<=x250)%x251)+x252);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x253 = -1;
	uint32_t x254 = 49255U;
	int64_t x256 = -42434280509631891LL;

	t59 = (((x253<=x254)%x255)+x256);

	if (t59 != -42434280509631891LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x257 = UINT32_MAX;
	static int64_t x258 = 14633379440725542LL;
	int64_t x259 = -7403474963LL;
	int64_t x260 = -1LL;
	int64_t t60 = 209296889799297LL;

	t60 = (((x257<=x258)%x259)+x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -1;
	int8_t x262 = INT8_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t61 = 12LLU;

	t61 = (((x261<=x262)%x263)+x264);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -1496309LL;
	int64_t x266 = 3332542367046077LL;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = -5;
	uint32_t t62 = 11911849U;

	t62 = (((x265<=x266)%x267)+x268);

	if (t62 != 4294967292U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = -322652115;
	uint64_t x271 = 484329466117525LLU;
	uint32_t x272 = 15U;
	volatile uint64_t t63 = 1LLU;

	t63 = (((x269<=x270)%x271)+x272);

	if (t63 != 16LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	volatile int64_t x275 = INT64_MAX;
	int64_t t64 = -224054347422115867LL;

	t64 = (((x273<=x274)%x275)+x276);

	if (t64 != 32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	int8_t x280 = INT8_MIN;

	t65 = (((x277<=x278)%x279)+x280);

	if (t65 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = 95U;

	t66 = (((x281<=x282)%x283)+x284);

	if (t66 != 96) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MIN;
	volatile uint64_t x291 = UINT64_MAX;
	volatile uint64_t t67 = 2198014893192LLU;

	t67 = (((x289<=x290)%x291)+x292);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x295 = UINT16_MAX;
	uint32_t x296 = 0U;
	volatile uint32_t t68 = 103U;

	t68 = (((x293<=x294)%x295)+x296);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = 13465;
	static int64_t x298 = -6369991986406LL;
	int8_t x299 = -1;
	uint64_t x300 = 29141481898587LLU;
	static volatile uint64_t t69 = 12418LLU;

	t69 = (((x297<=x298)%x299)+x300);

	if (t69 != 29141481898587LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x302 = INT32_MAX;
	uint8_t x303 = 26U;
	uint8_t x304 = 0U;
	int32_t t70 = 910619;

	t70 = (((x301<=x302)%x303)+x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x305 = INT8_MIN;
	int32_t x306 = -258661399;
	int8_t x307 = INT8_MIN;
	volatile int32_t x308 = 0;
	volatile int32_t t71 = -1580480;

	t71 = (((x305<=x306)%x307)+x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x309 = INT32_MAX;
	uint64_t x310 = 1468143149LLU;
	int64_t x311 = INT64_MIN;

	t72 = (((x309<=x310)%x311)+x312);

	if (t72 != 33LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x315 = INT8_MIN;
	static int16_t x316 = -1;
	volatile int32_t t73 = 1395705;

	t73 = (((x313<=x314)%x315)+x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = -1;
	int16_t x318 = -1;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t74 = 58;

	t74 = (((x317<=x318)%x319)+x320);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x321 = 209128642292LLU;
	int32_t x322 = INT32_MIN;
	volatile int32_t x323 = INT32_MIN;
	uint32_t x324 = 5869400U;
	volatile uint32_t t75 = 7391U;

	t75 = (((x321<=x322)%x323)+x324);

	if (t75 != 5869401U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	uint8_t x326 = 125U;
	int32_t x327 = INT32_MIN;
	volatile uint64_t x328 = 10707223461LLU;
	volatile uint64_t t76 = 3266213436685LLU;

	t76 = (((x325<=x326)%x327)+x328);

	if (t76 != 10707223462LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x333 = 3U;
	int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	volatile int32_t t77 = 176673726;

	t77 = (((x333<=x334)%x335)+x336);

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = -1;
	volatile uint64_t x338 = 5920LLU;
	uint64_t x340 = UINT64_MAX;

	t78 = (((x337<=x338)%x339)+x340);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x342 = -4;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t79 = -14844;

	t79 = (((x341<=x342)%x343)+x344);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x345 = INT32_MIN;
	uint8_t x346 = 29U;
	volatile int8_t x347 = -1;
	int16_t x348 = 1640;

	t80 = (((x345<=x346)%x347)+x348);

	if (t80 != 1640) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x349 = INT8_MAX;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = UINT8_MAX;
	volatile int64_t t81 = 1LL;

	t81 = (((x349<=x350)%x351)+x352);

	if (t81 != 256LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x353 = -1;
	int64_t x355 = INT64_MAX;
	static int32_t x356 = -978138347;
	volatile int64_t t82 = 0LL;

	t82 = (((x353<=x354)%x355)+x356);

	if (t82 != -978138347LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x357 = INT16_MAX;
	int16_t x358 = INT16_MIN;
	volatile int16_t x359 = INT16_MIN;
	uint16_t x360 = UINT16_MAX;
	int32_t t83 = -66618003;

	t83 = (((x357<=x358)%x359)+x360);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x361 = 3657U;
	int64_t x362 = 33022801849LL;
	int8_t x364 = INT8_MAX;

	t84 = (((x361<=x362)%x363)+x364);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = 4912200LL;
	int16_t x366 = 1824;
	int64_t x367 = -1LL;
	uint16_t x368 = 227U;
	int64_t t85 = 17867200199LL;

	t85 = (((x365<=x366)%x367)+x368);

	if (t85 != 227LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x369 = INT32_MAX;
	uint64_t x370 = 22209560LLU;
	int64_t x371 = -1LL;
	volatile uint16_t x372 = 17629U;
	int64_t t86 = 16101597LL;

	t86 = (((x369<=x370)%x371)+x372);

	if (t86 != 17629LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x374 = INT32_MIN;
	int32_t x376 = 5;
	volatile int32_t t87 = 12171281;

	t87 = (((x373<=x374)%x375)+x376);

	if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = INT64_MIN;
	int64_t x378 = 52729113LL;
	static int16_t x379 = INT16_MAX;
	static int64_t x380 = INT64_MIN;
	int64_t t88 = 2081756775360735LL;

	t88 = (((x377<=x378)%x379)+x380);

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = -1LL;
	uint32_t x382 = UINT32_MAX;
	volatile uint16_t x383 = 121U;
	int16_t x384 = -9571;
	static volatile int32_t t89 = -1;

	t89 = (((x381<=x382)%x383)+x384);

	if (t89 != -9570) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x386 = UINT32_MAX;
	uint64_t x388 = 8161876414555152LLU;
	volatile uint64_t t90 = 58465097063LLU;

	t90 = (((x385<=x386)%x387)+x388);

	if (t90 != 8161876414555153LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x389 = 60U;
	int64_t x390 = -798676143885843LL;
	int64_t x392 = -1LL;
	static int64_t t91 = 534LL;

	t91 = (((x389<=x390)%x391)+x392);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = 4428;
	static volatile uint8_t x394 = 35U;
	volatile int64_t x395 = 1LL;
	static volatile int16_t x396 = -1;
	volatile int64_t t92 = 1872LL;

	t92 = (((x393<=x394)%x395)+x396);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x397 = 47U;
	volatile int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	uint32_t x400 = 7321699U;
	volatile uint32_t t93 = 8053875U;

	t93 = (((x397<=x398)%x399)+x400);

	if (t93 != 7321699U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x401 = 8855749U;
	uint8_t x402 = UINT8_MAX;
	int8_t x403 = INT8_MAX;

	t94 = (((x401<=x402)%x403)+x404);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x406 = -1LL;
	static int32_t x408 = INT32_MIN;
	int32_t t95 = INT32_MIN;

	t95 = (((x405<=x406)%x407)+x408);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = 58LL;
	int8_t x410 = -31;
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;
	static int32_t t96 = -530579;

	t96 = (((x409<=x410)%x411)+x412);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x413 = -45;
	static volatile int64_t x414 = -1LL;
	static int32_t x416 = INT32_MIN;
	volatile int32_t t97 = 15518231;

	t97 = (((x413<=x414)%x415)+x416);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x417 = 1U;
	uint8_t x418 = 82U;
	uint64_t x420 = 672000840LLU;
	volatile uint64_t t98 = 2314800784957LLU;

	t98 = (((x417<=x418)%x419)+x420);

	if (t98 != 672000841LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x422 = 0;
	int8_t x423 = INT8_MIN;
	volatile uint64_t t99 = 80311155879503LLU;

	t99 = (((x421<=x422)%x423)+x424);

	if (t99 != 4976848664LLU) { NG(); } else { ; }
	
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

