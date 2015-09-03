#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -113;
int8_t x17 = -1;
int64_t x19 = INT64_MIN;
int16_t x21 = -1;
uint8_t x22 = 7U;
int32_t x25 = INT32_MIN;
int32_t t4 = 0;
static int16_t x37 = INT16_MIN;
int32_t x39 = INT32_MAX;
volatile int16_t x46 = INT16_MAX;
int8_t x50 = 1;
int64_t x51 = INT64_MIN;
int16_t x57 = INT16_MIN;
static volatile int8_t x61 = INT8_MAX;
static volatile int16_t x64 = 2;
volatile int32_t t12 = 0;
volatile uint32_t t13 = 22118U;
static int16_t x76 = INT16_MIN;
volatile uint8_t x81 = UINT8_MAX;
volatile uint64_t x84 = UINT64_MAX;
volatile int64_t x99 = 854056347063085LL;
static uint32_t x102 = UINT32_MAX;
static volatile int64_t x114 = -1342777911LL;
int64_t x126 = -420596LL;
int32_t x135 = -687571;
uint16_t x137 = UINT16_MAX;
int8_t x143 = 43;
uint16_t x160 = 54U;
int8_t x167 = INT8_MAX;
int16_t x183 = 259;
static int16_t x184 = INT16_MIN;
uint16_t x185 = 1644U;
int32_t x186 = INT32_MAX;
volatile int32_t t38 = -2691463;
volatile uint32_t t39 = 1944244738U;
int8_t x197 = INT8_MIN;
volatile int64_t t41 = -45498459LL;
int16_t x205 = INT16_MIN;
int8_t x206 = INT8_MIN;
static volatile uint64_t x210 = 1681247135791980729LLU;
int64_t x211 = -1LL;
volatile int32_t x212 = -56478;
volatile int32_t t43 = 4946;
int32_t x215 = INT32_MAX;
uint64_t x227 = 169355318766LLU;
uint8_t x228 = UINT8_MAX;
int16_t x236 = -11279;
int32_t t49 = 32580697;
int16_t x240 = INT16_MAX;
static int32_t t50 = 1;
uint32_t x241 = 0U;
int32_t t51 = -18134680;
static volatile int32_t x246 = 1;
int64_t x249 = INT64_MAX;
volatile int64_t x255 = INT64_MIN;
int8_t x257 = 1;
volatile int16_t x259 = INT16_MIN;
volatile int32_t t55 = 15;
int8_t x267 = INT8_MIN;
uint16_t x282 = 1U;
volatile int16_t x283 = INT16_MAX;
int64_t x285 = INT64_MIN;
int8_t x287 = INT8_MAX;
static volatile uint32_t x298 = 8U;
uint8_t x303 = 8U;
volatile int32_t t64 = -441;
static int32_t t66 = -1296;
volatile int32_t x324 = INT32_MAX;
static int16_t x326 = -1;
static int16_t x332 = INT16_MAX;
uint8_t x346 = 61U;
int8_t x352 = INT8_MAX;
int32_t t74 = 38996397;
volatile uint64_t t75 = 12554082826685LLU;
volatile int32_t x359 = INT32_MIN;
int16_t x363 = INT16_MAX;
int16_t x370 = -5;
volatile int32_t t78 = -1;
uint8_t x373 = 2U;
int16_t x381 = INT16_MIN;
static volatile int8_t x383 = INT8_MIN;
int32_t t81 = 1;
int8_t x393 = INT8_MIN;
static volatile uint16_t x402 = 38U;
int32_t x407 = INT32_MAX;
uint8_t x408 = UINT8_MAX;
int32_t x412 = -197;
volatile uint32_t t86 = 0U;
int32_t x417 = INT32_MIN;
int8_t x418 = 15;
int16_t x424 = -66;
static uint8_t x428 = 14U;
uint32_t x434 = UINT32_MAX;
int64_t x435 = 793673LL;
uint16_t x444 = 14U;
int8_t x451 = -8;
int32_t x456 = -3422;
int32_t t95 = -1030;
int32_t x459 = -4;
int32_t x463 = INT32_MIN;
int32_t x466 = -1;
static int32_t t98 = -82;


void f0(void) {
	volatile int64_t x9 = 486700159779906888LL;
	int64_t x11 = -1LL;
	int16_t x12 = INT16_MAX;
	volatile int32_t t0 = -7;

	t0 = ((x9<(x10%x11))-x12);

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x18 = INT32_MAX;
	volatile int32_t x20 = 1268364;
	int32_t t1 = 240947357;

	t1 = ((x17<(x18%x19))-x20);

	if (t1 != -1268363) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x23 = INT32_MAX;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t2 = -25779839;

	t2 = ((x21<(x22%x23))-x24);

	if (t2 != 32769) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x26 = 2U;
	static int16_t x27 = INT16_MAX;
	uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t3 = 256141214874741069LLU;

	t3 = ((x25<(x26%x27))-x28);

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = UINT16_MAX;
	int64_t x30 = 15676880LL;
	static uint8_t x31 = UINT8_MAX;
	uint8_t x32 = 7U;

	t4 = ((x29<(x30%x31))-x32);

	if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	static uint16_t x34 = UINT16_MAX;
	uint8_t x35 = 16U;
	volatile int32_t x36 = -1;
	volatile int32_t t5 = -38162;

	t5 = ((x33<(x34%x35))-x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x38 = -1LL;
	int16_t x40 = INT16_MAX;
	volatile int32_t t6 = -660;

	t6 = ((x37<(x38%x39))-x40);

	if (t6 != -32766) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = 43172334;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = -1;
	int16_t x44 = 1202;
	static int32_t t7 = -71;

	t7 = ((x41<(x42%x43))-x44);

	if (t7 != -1202) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 1U;
	volatile uint64_t x47 = 9LLU;
	int64_t x48 = -245691075663LL;
	int64_t t8 = -89827649LL;

	t8 = ((x45<(x46%x47))-x48);

	if (t8 != 245691075664LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = 4034064198521962689LL;
	int16_t x52 = INT16_MIN;
	int32_t t9 = 3;

	t9 = ((x49<(x50%x51))-x52);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	static int8_t x55 = -1;
	volatile uint16_t x56 = 401U;
	volatile int32_t t10 = -3553614;

	t10 = ((x53<(x54%x55))-x56);

	if (t10 != -400) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x58 = -27;
	int64_t x59 = -1LL;
	int64_t x60 = -2LL;
	volatile int64_t t11 = -726264402469LL;

	t11 = ((x57<(x58%x59))-x60);

	if (t11 != 3LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x62 = 5LLU;
	static uint8_t x63 = UINT8_MAX;

	t12 = ((x61<(x62%x63))-x64);

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = -2128;
	volatile uint8_t x67 = 111U;
	uint32_t x68 = UINT32_MAX;

	t13 = ((x65<(x66%x67))-x68);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = 0LL;
	int8_t x70 = INT8_MAX;
	int8_t x71 = -1;
	int16_t x72 = INT16_MIN;
	volatile int32_t t14 = -3431650;

	t14 = ((x69<(x70%x71))-x72);

	if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MIN;
	int16_t x75 = -1;
	volatile int32_t t15 = 292;

	t15 = ((x73<(x74%x75))-x76);

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x82 = -9;
	int8_t x83 = INT8_MIN;
	volatile uint64_t t16 = 2129988257274009614LLU;

	t16 = ((x81<(x82%x83))-x84);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MIN;
	uint8_t x90 = 1U;
	uint32_t x91 = 4595110U;
	int16_t x92 = -3833;
	int32_t t17 = 2;

	t17 = ((x89<(x90%x91))-x92);

	if (t17 != 3834) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MIN;
	int32_t x96 = 7310;
	int32_t t18 = 49961;

	t18 = ((x93<(x94%x95))-x96);

	if (t18 != -7310) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -12072147440138443LL;
	int64_t x98 = -404738LL;
	uint16_t x100 = UINT16_MAX;
	int32_t t19 = -61122;

	t19 = ((x97<(x98%x99))-x100);

	if (t19 != -65534) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MAX;
	volatile int16_t x103 = -1;
	static uint8_t x104 = 1U;
	int32_t t20 = -12;

	t20 = ((x101<(x102%x103))-x104);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MIN;
	volatile int8_t x111 = 32;
	volatile int16_t x112 = INT16_MAX;
	static volatile int32_t t21 = -1056078;

	t21 = ((x109<(x110%x111))-x112);

	if (t21 != -32766) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	static volatile int16_t x115 = INT16_MAX;
	volatile int16_t x116 = -1;
	int32_t t22 = 105;

	t22 = ((x113<(x114%x115))-x116);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x121 = INT32_MAX;
	static int64_t x122 = INT64_MIN;
	int64_t x123 = 4672198851LL;
	int8_t x124 = -1;
	int32_t t23 = -3759;

	t23 = ((x121<(x122%x123))-x124);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x125 = 2U;
	volatile int8_t x127 = -1;
	int16_t x128 = INT16_MIN;
	int32_t t24 = 418;

	t24 = ((x125<(x126%x127))-x128);

	if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x129 = UINT32_MAX;
	static volatile int64_t x130 = INT64_MAX;
	int8_t x131 = -1;
	int8_t x132 = INT8_MIN;
	int32_t t25 = -5;

	t25 = ((x129<(x130%x131))-x132);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x133 = 50U;
	int64_t x134 = -1LL;
	int64_t x136 = 3149575LL;
	int64_t t26 = -1775847LL;

	t26 = ((x133<(x134%x135))-x136);

	if (t26 != -3149575LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x138 = 16LLU;
	uint64_t x139 = 7780347LLU;
	int8_t x140 = -23;
	int32_t t27 = -15;

	t27 = ((x137<(x138%x139))-x140);

	if (t27 != 23) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = -12;
	uint32_t x142 = 25848131U;
	int64_t x144 = -1LL;
	volatile int64_t t28 = 12252189LL;

	t28 = ((x141<(x142%x143))-x144);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = 611;
	static int32_t x146 = INT32_MAX;
	static int32_t x147 = INT32_MIN;
	int64_t x148 = -6270779594LL;
	int64_t t29 = 1791LL;

	t29 = ((x145<(x146%x147))-x148);

	if (t29 != 6270779595LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x149 = UINT32_MAX;
	int16_t x150 = 93;
	uint32_t x151 = 4U;
	uint8_t x152 = 3U;
	int32_t t30 = -238378;

	t30 = ((x149<(x150%x151))-x152);

	if (t30 != -3) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x153 = 160284LL;
	int64_t x154 = -1LL;
	static volatile uint16_t x155 = UINT16_MAX;
	int16_t x156 = 172;
	volatile int32_t t31 = 19717065;

	t31 = ((x153<(x154%x155))-x156);

	if (t31 != -172) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = -1;
	static int64_t x158 = -181913LL;
	int16_t x159 = INT16_MIN;
	volatile int32_t t32 = 54703575;

	t32 = ((x157<(x158%x159))-x160);

	if (t32 != -54) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -2170;
	static int16_t x162 = 50;
	static volatile uint8_t x163 = 3U;
	uint16_t x164 = 3U;
	int32_t t33 = -1;

	t33 = ((x161<(x162%x163))-x164);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = INT64_MIN;
	volatile int32_t x166 = INT32_MIN;
	uint8_t x168 = 5U;
	int32_t t34 = -1486077;

	t34 = ((x165<(x166%x167))-x168);

	if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x173 = INT8_MIN;
	static volatile int64_t x174 = INT64_MIN;
	uint32_t x175 = 334798U;
	int16_t x176 = -3626;
	volatile int32_t t35 = 7;

	t35 = ((x173<(x174%x175))-x176);

	if (t35 != 3626) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x181 = INT32_MIN;
	volatile int64_t x182 = INT64_MIN;
	int32_t t36 = -2;

	t36 = ((x181<(x182%x183))-x184);

	if (t36 != 32769) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x187 = 13891U;
	static volatile uint16_t x188 = UINT16_MAX;
	int32_t t37 = 1833543;

	t37 = ((x185<(x186%x187))-x188);

	if (t37 != -65534) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x189 = 1805762604LLU;
	volatile int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MAX;
	int32_t x192 = -1;

	t38 = ((x189<(x190%x191))-x192);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	uint32_t x196 = 34207208U;

	t39 = ((x193<(x194%x195))-x196);

	if (t39 != 4260760089U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x198 = INT16_MAX;
	int16_t x199 = -60;
	static volatile uint64_t x200 = 33808914LLU;
	volatile uint64_t t40 = 89381LLU;

	t40 = ((x197<(x198%x199))-x200);

	if (t40 != 18446744073675742703LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x201 = INT32_MAX;
	uint16_t x202 = 6821U;
	int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MAX;

	t41 = ((x201<(x202%x203))-x204);

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x207 = 1022U;
	volatile int16_t x208 = -1;
	int32_t t42 = 159628;

	t42 = ((x205<(x206%x207))-x208);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x209 = INT16_MIN;

	t43 = ((x209<(x210%x211))-x212);

	if (t43 != 56478) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = -40199;
	uint16_t x214 = UINT16_MAX;
	static uint64_t x216 = 877699196LLU;
	uint64_t t44 = 87119863924550720LLU;

	t44 = ((x213<(x214%x215))-x216);

	if (t44 != 18446744072831852421LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MAX;
	static int64_t x220 = -1LL;
	static volatile int64_t t45 = 2594683LL;

	t45 = ((x217<(x218%x219))-x220);

	if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = -13599;
	int64_t x222 = INT64_MAX;
	int8_t x223 = -1;
	int64_t x224 = -1242884816LL;
	volatile int64_t t46 = -78137LL;

	t46 = ((x221<(x222%x223))-x224);

	if (t46 != 1242884817LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x225 = -186;
	volatile int8_t x226 = INT8_MIN;
	static int32_t t47 = 0;

	t47 = ((x225<(x226%x227))-x228);

	if (t47 != -255) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = -1;
	int64_t x230 = INT64_MIN;
	uint32_t x231 = UINT32_MAX;
	volatile uint64_t x232 = UINT64_MAX;
	volatile uint64_t t48 = 103LLU;

	t48 = ((x229<(x230%x231))-x232);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = -1LL;
	uint32_t x234 = 233533305U;
	volatile uint8_t x235 = UINT8_MAX;

	t49 = ((x233<(x234%x235))-x236);

	if (t49 != 11280) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = -1;
	static int64_t x239 = -1LL;

	t50 = ((x237<(x238%x239))-x240);

	if (t50 != -32766) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x242 = 2;
	static int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MIN;

	t51 = ((x241<(x242%x243))-x244);

	if (t51 != 32769) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = 62932229U;
	volatile int64_t x247 = INT64_MIN;
	volatile int16_t x248 = 1;
	int32_t t52 = 113;

	t52 = ((x245<(x246%x247))-x248);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x250 = 25U;
	static int64_t x251 = -687169148349867991LL;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t53 = -225;

	t53 = ((x249<(x250%x251))-x252);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x253 = INT16_MIN;
	uint16_t x254 = UINT16_MAX;
	uint8_t x256 = UINT8_MAX;
	int32_t t54 = 2000;

	t54 = ((x253<(x254%x255))-x256);

	if (t54 != -254) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x258 = INT32_MIN;
	int16_t x260 = 9;

	t55 = ((x257<(x258%x259))-x260);

	if (t55 != -9) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = -26;
	int8_t x266 = -1;
	uint32_t x268 = 467U;
	volatile uint32_t t56 = 470U;

	t56 = ((x265<(x266%x267))-x268);

	if (t56 != 4294966830U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MAX;
	uint32_t x271 = UINT32_MAX;
	static volatile int64_t x272 = -6176LL;
	volatile int64_t t57 = -249755439033587345LL;

	t57 = ((x269<(x270%x271))-x272);

	if (t57 != 6176LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = 79133818034978LL;
	uint32_t x278 = UINT32_MAX;
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 2U;
	static int32_t t58 = 895958;

	t58 = ((x277<(x278%x279))-x280);

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = -4196047453LL;
	static int8_t x284 = 0;
	volatile int32_t t59 = 4;

	t59 = ((x281<(x282%x283))-x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x286 = INT16_MIN;
	int64_t x288 = -1LL;
	volatile int64_t t60 = 2019650025403049LL;

	t60 = ((x285<(x286%x287))-x288);

	if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x289 = 97705187LLU;
	static uint8_t x290 = 12U;
	static int64_t x291 = -13LL;
	int32_t x292 = 761;
	volatile int32_t t61 = -6449;

	t61 = ((x289<(x290%x291))-x292);

	if (t61 != -761) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x293 = -3013LL;
	int16_t x294 = -1;
	int32_t x295 = -1;
	int32_t x296 = INT32_MAX;
	int32_t t62 = 7382090;

	t62 = ((x293<(x294%x295))-x296);

	if (t62 != -2147483646) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x297 = 1681795286405LLU;
	volatile uint32_t x299 = 690778U;
	int16_t x300 = INT16_MAX;
	static int32_t t63 = 680802;

	t63 = ((x297<(x298%x299))-x300);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x301 = INT32_MAX;
	uint16_t x302 = 1U;
	static int16_t x304 = INT16_MAX;

	t64 = ((x301<(x302%x303))-x304);

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = -1LL;
	int32_t x314 = INT32_MAX;
	static int16_t x315 = INT16_MIN;
	static int16_t x316 = INT16_MAX;
	volatile int32_t t65 = 274620180;

	t65 = ((x313<(x314%x315))-x316);

	if (t65 != -32766) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = -23234174520859LL;
	int32_t x318 = INT32_MIN;
	volatile int64_t x319 = INT64_MIN;
	uint8_t x320 = UINT8_MAX;

	t66 = ((x317<(x318%x319))-x320);

	if (t66 != -254) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x321 = 631U;
	uint32_t x322 = 0U;
	int16_t x323 = 46;
	int32_t t67 = 134231608;

	t67 = ((x321<(x322%x323))-x324);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = -1;
	static int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t68 = -5588;

	t68 = ((x325<(x326%x327))-x328);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x329 = -1;
	volatile int16_t x330 = -1;
	int16_t x331 = 7;
	static int32_t t69 = 439;

	t69 = ((x329<(x330%x331))-x332);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x333 = INT8_MIN;
	int16_t x334 = 1;
	volatile int64_t x335 = INT64_MAX;
	static uint64_t x336 = UINT64_MAX;
	uint64_t t70 = 11859824LLU;

	t70 = ((x333<(x334%x335))-x336);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -1;
	static volatile uint16_t x340 = 13074U;
	volatile int32_t t71 = 240329;

	t71 = ((x337<(x338%x339))-x340);

	if (t71 != -13073) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x341 = 30U;
	volatile int16_t x342 = INT16_MAX;
	int32_t x343 = INT32_MIN;
	uint16_t x344 = 156U;
	static volatile int32_t t72 = -6617588;

	t72 = ((x341<(x342%x343))-x344);

	if (t72 != -155) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x345 = UINT16_MAX;
	static int32_t x347 = 2704898;
	static uint8_t x348 = 2U;
	int32_t t73 = -8890958;

	t73 = ((x345<(x346%x347))-x348);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = -23123407LL;
	int8_t x350 = -1;
	int16_t x351 = -15778;

	t74 = ((x349<(x350%x351))-x352);

	if (t74 != -126) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x353 = 1U;
	uint16_t x354 = 18U;
	volatile int64_t x355 = INT64_MIN;
	static uint64_t x356 = 28845420236615LLU;

	t75 = ((x353<(x354%x355))-x356);

	if (t75 != 18446715228289315002LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = 3;
	int8_t x358 = INT8_MIN;
	int64_t x360 = -1LL;
	int64_t t76 = 3503088LL;

	t76 = ((x357<(x358%x359))-x360);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = -11995378LL;
	int16_t x364 = -1550;
	static int32_t t77 = 61476;

	t77 = ((x361<(x362%x363))-x364);

	if (t77 != 1551) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x369 = 52027U;
	int64_t x371 = -184090651287291LL;
	volatile uint8_t x372 = 118U;

	t78 = ((x369<(x370%x371))-x372);

	if (t78 != -118) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x374 = 121917840U;
	static uint32_t x375 = 1887U;
	int8_t x376 = -5;
	volatile int32_t t79 = 110690;

	t79 = ((x373<(x374%x375))-x376);

	if (t79 != 6) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x382 = INT8_MIN;
	uint64_t x384 = 3LLU;
	static uint64_t t80 = 3435416011LLU;

	t80 = ((x381<(x382%x383))-x384);

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x385 = INT64_MIN;
	volatile int64_t x386 = INT64_MIN;
	int8_t x387 = -1;
	int16_t x388 = -1;

	t81 = ((x385<(x386%x387))-x388);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x394 = UINT64_MAX;
	int64_t x395 = INT64_MIN;
	static uint16_t x396 = 3712U;
	volatile int32_t t82 = -436;

	t82 = ((x393<(x394%x395))-x396);

	if (t82 != -3712) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x401 = 1673202505184597632LL;
	uint32_t x403 = UINT32_MAX;
	static uint64_t x404 = UINT64_MAX;
	uint64_t t83 = 112893254851913633LLU;

	t83 = ((x401<(x402%x403))-x404);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MAX;
	volatile int32_t t84 = 1;

	t84 = ((x405<(x406%x407))-x408);

	if (t84 != -254) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x409 = INT16_MAX;
	volatile int64_t x410 = INT64_MIN;
	volatile int8_t x411 = 1;
	static volatile int32_t t85 = -103;

	t85 = ((x409<(x410%x411))-x412);

	if (t85 != 197) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = -315;
	int8_t x414 = INT8_MIN;
	uint16_t x415 = 1678U;
	uint32_t x416 = 163U;

	t86 = ((x413<(x414%x415))-x416);

	if (t86 != 4294967134U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MIN;
	volatile int32_t t87 = -1298;

	t87 = ((x417<(x418%x419))-x420);

	if (t87 != 129) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x421 = -14778796204688286LL;
	volatile uint32_t x422 = UINT32_MAX;
	int64_t x423 = INT64_MIN;
	volatile int32_t t88 = 399505927;

	t88 = ((x421<(x422%x423))-x424);

	if (t88 != 67) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = 224196;
	int64_t x426 = INT64_MIN;
	volatile int16_t x427 = -1;
	volatile int32_t t89 = -80576016;

	t89 = ((x425<(x426%x427))-x428);

	if (t89 != -14) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x429 = INT64_MAX;
	volatile uint16_t x430 = UINT16_MAX;
	int32_t x431 = -5249;
	int8_t x432 = INT8_MAX;
	int32_t t90 = -450868725;

	t90 = ((x429<(x430%x431))-x432);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x433 = INT32_MIN;
	int8_t x436 = INT8_MAX;
	static int32_t t91 = -116;

	t91 = ((x433<(x434%x435))-x436);

	if (t91 != -126) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x437 = INT32_MAX;
	uint8_t x438 = 14U;
	uint8_t x439 = UINT8_MAX;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t92 = -70845315;

	t92 = ((x437<(x438%x439))-x440);

	if (t92 != -65535) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x441 = UINT32_MAX;
	int32_t x442 = INT32_MAX;
	volatile int64_t x443 = -96416389500823LL;
	volatile int32_t t93 = 198668727;

	t93 = ((x441<(x442%x443))-x444);

	if (t93 != -14) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = 14;
	static uint32_t x450 = 867384795U;
	int32_t x452 = -1;
	int32_t t94 = 1;

	t94 = ((x449<(x450%x451))-x452);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x453 = INT64_MIN;
	int32_t x454 = INT32_MIN;
	int32_t x455 = INT32_MIN;

	t95 = ((x453<(x454%x455))-x456);

	if (t95 != 3423) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x457 = -113791511676LL;
	uint8_t x458 = UINT8_MAX;
	volatile uint8_t x460 = 7U;
	int32_t t96 = -2;

	t96 = ((x457<(x458%x459))-x460);

	if (t96 != -6) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x461 = INT32_MIN;
	uint16_t x462 = 9869U;
	int16_t x464 = -85;
	volatile int32_t t97 = -42;

	t97 = ((x461<(x462%x463))-x464);

	if (t97 != 86) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = INT8_MIN;
	volatile uint32_t x467 = 2U;
	volatile int8_t x468 = 31;

	t98 = ((x465<(x466%x467))-x468);

	if (t98 != -31) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x469 = 1098503U;
	uint16_t x470 = 10355U;
	uint32_t x471 = 824651U;
	int64_t x472 = INT64_MAX;
	volatile int64_t t99 = -216156482581LL;

	t99 = ((x469<(x470%x471))-x472);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

