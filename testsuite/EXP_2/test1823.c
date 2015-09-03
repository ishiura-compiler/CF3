#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 31456;
int16_t x6 = 34;
static uint8_t x14 = 42U;
int64_t x15 = -1LL;
volatile int64_t t3 = 1751239339149LL;
uint64_t x17 = 24354592438LLU;
volatile uint64_t x22 = 1154922922781379LLU;
static int16_t x23 = 12;
uint16_t x27 = UINT16_MAX;
int16_t x31 = -2;
volatile int64_t x35 = -1LL;
static int64_t x38 = INT64_MAX;
static int32_t x42 = INT32_MAX;
volatile uint64_t t10 = 570LLU;
int8_t x74 = INT8_MAX;
static volatile int32_t t13 = 1709;
volatile uint32_t x79 = 15U;
volatile uint64_t x80 = 4059489LLU;
uint16_t x90 = 44U;
int16_t x91 = -1;
volatile int16_t x92 = 9107;
static int16_t x98 = INT16_MAX;
volatile int16_t x99 = INT16_MAX;
int16_t x104 = -3;
int32_t x109 = 7178426;
volatile int64_t t22 = -617LL;
int64_t t23 = 175248548277629763LL;
uint32_t x119 = UINT32_MAX;
uint32_t t24 = 0U;
int8_t x122 = INT8_MIN;
int32_t t25 = 1021095879;
int32_t x125 = INT32_MIN;
uint8_t x127 = 40U;
volatile int64_t t26 = -95733713LL;
int8_t x135 = INT8_MIN;
uint16_t x143 = 25U;
uint8_t x145 = 16U;
static volatile uint8_t x146 = UINT8_MAX;
uint16_t x148 = 14U;
static uint64_t t33 = 646693629698430409LLU;
int16_t x163 = 1;
int64_t t35 = 16460LL;
int8_t x172 = 15;
volatile uint8_t x173 = 3U;
uint64_t x181 = 1516689430066395LLU;
volatile int32_t x184 = INT32_MIN;
int64_t x185 = INT64_MIN;
volatile int64_t t43 = 18312649104008LL;
volatile int32_t x207 = -1;
int64_t x208 = INT64_MAX;
int8_t x209 = -1;
int16_t x211 = INT16_MAX;
volatile uint32_t x212 = 3U;
static volatile int64_t t47 = -1017128LL;
volatile int64_t t50 = 10527072127352LL;
uint8_t x235 = 52U;
static uint16_t x265 = UINT16_MAX;
static int32_t x267 = -5018967;
volatile int32_t t57 = -1;
int16_t x273 = INT16_MIN;
static volatile int32_t t58 = 169;
int8_t x277 = INT8_MIN;
uint32_t x281 = UINT32_MAX;
uint32_t t60 = 164U;
int64_t x286 = INT64_MIN;
static uint32_t x312 = 238U;
int64_t x315 = 266541914300LL;
volatile int64_t t67 = -397447541423450512LL;
int16_t x319 = -1;
static volatile uint16_t x322 = 12030U;
uint32_t t69 = 20706U;
int32_t x332 = INT32_MAX;
uint64_t x340 = 49998LLU;
uint16_t x341 = 11U;
int64_t x342 = 57LL;
int64_t t76 = 1812745LL;
volatile uint64_t x364 = 77869280221LLU;
static uint64_t t77 = 1704003444833LLU;
int8_t x370 = 1;
volatile int8_t x372 = INT8_MIN;
int32_t t79 = -1015580;
static int32_t t80 = 506423715;
uint64_t x384 = 2393647872116315LLU;
static uint16_t x385 = 3U;
int32_t x388 = INT32_MIN;
volatile uint16_t x391 = 3707U;
uint16_t x407 = 10245U;
int16_t x418 = -1;
uint8_t x421 = 1U;
int16_t x423 = INT16_MIN;
int8_t x425 = 7;
static int8_t x428 = INT8_MIN;
uint64_t t91 = 6930837720533LLU;
int64_t x429 = INT64_MAX;
int64_t t92 = 14935233LL;
uint32_t x440 = 1799U;
static volatile int32_t x447 = -37;
int8_t x451 = INT8_MAX;
volatile int64_t t95 = 1328248LL;
int32_t x472 = INT32_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = UINT8_MAX;
	static int16_t x3 = -1950;
	int32_t x4 = 2377;
	volatile int64_t t0 = 649844437824443LL;

	t0 = ((x1&(x2&x3))*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x7 = -1LL;
	volatile int16_t x8 = 0;
	volatile int64_t t1 = -106373873428LL;

	t1 = ((x5&(x6&x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	uint32_t x10 = 2U;
	static uint64_t x11 = UINT64_MAX;
	int16_t x12 = 4;
	volatile uint64_t t2 = 126884328753LLU;

	t2 = ((x9&(x10&x11))*x12);

	if (t2 != 8LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 1U;
	uint16_t x16 = 1U;

	t3 = ((x13&(x14&x15))*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = 45;
	static uint64_t t4 = 10LLU;

	t4 = ((x17&(x18&x19))*x20);

	if (t4 != 1095956659710LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -399;
	static uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 234661448694761575LLU;

	t5 = ((x21&(x22&x23))*x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 54U;
	uint8_t x26 = 80U;
	static uint8_t x28 = 14U;
	int32_t t6 = 1289755;

	t6 = ((x25&(x26&x27))*x28);

	if (t6 != 224) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int32_t x30 = INT32_MIN;
	uint8_t x32 = 0U;
	volatile uint64_t t7 = 56823338277182690LLU;

	t7 = ((x29&(x30&x31))*x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 2624151;
	volatile uint64_t x34 = UINT64_MAX;
	uint16_t x36 = UINT16_MAX;
	static uint64_t t8 = 5419755828LLU;

	t8 = ((x33&(x34&x35))*x36);

	if (t8 != 171973735785LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	volatile uint32_t x39 = 2U;
	volatile int8_t x40 = INT8_MAX;
	static volatile int64_t t9 = 1LL;

	t9 = ((x37&(x38&x39))*x40);

	if (t9 != 254LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 251342192581LLU;
	int32_t x43 = 3;
	int16_t x44 = INT16_MIN;

	t10 = ((x41&(x42&x43))*x44);

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	uint8_t x46 = UINT8_MAX;
	volatile uint32_t x47 = 582955211U;
	volatile int8_t x48 = 0;
	volatile uint32_t t11 = 6173U;

	t11 = ((x45&(x46&x47))*x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	uint16_t x62 = 44U;
	volatile uint64_t x63 = 14LLU;
	int8_t x64 = -1;
	volatile uint64_t t12 = 7492188718610485LLU;

	t12 = ((x61&(x62&x63))*x64);

	if (t12 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = -1;
	int8_t x75 = INT8_MAX;
	static int32_t x76 = 25;

	t13 = ((x73&(x74&x75))*x76);

	if (t13 != 3175) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	static volatile uint64_t t14 = 59695LLU;

	t14 = ((x77&(x78&x79))*x80);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x81 = 13906382U;
	uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = INT8_MIN;
	uint64_t x84 = 277034170LLU;
	uint64_t t15 = 2794631276678494LLU;

	t15 = ((x81&(x82&x83))*x84);

	if (t15 != 3510577002240LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = 403028451425LLU;
	int64_t x86 = -1LL;
	int16_t x87 = -1;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t16 = 13730709LLU;

	t16 = ((x85&(x86&x87))*x88);

	if (t16 != 18446743670681100191LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x89 = 1676;
	int32_t t17 = -30;

	t17 = ((x89&(x90&x91))*x92);

	if (t17 != 109284) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = -1;
	int64_t x94 = -1LL;
	volatile int16_t x95 = -1;
	int32_t x96 = -5619;
	volatile int64_t t18 = 31465067955LL;

	t18 = ((x93&(x94&x95))*x96);

	if (t18 != 5619LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = UINT16_MAX;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t19 = -508;

	t19 = ((x97&(x98&x99))*x100);

	if (t19 != -1073709056) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x101 = 13;
	volatile uint16_t x102 = 7041U;
	int8_t x103 = 10;
	static volatile int32_t t20 = 167572285;

	t20 = ((x101&(x102&x103))*x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 8LLU;
	int8_t x106 = INT8_MAX;
	int32_t x107 = INT32_MIN;
	uint8_t x108 = 3U;
	static volatile uint64_t t21 = 997780478782LLU;

	t21 = ((x105&(x106&x107))*x108);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x110 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = -1;

	t22 = ((x109&(x110&x111))*x112);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = -12;
	int64_t x114 = INT64_MIN;
	int64_t x115 = 13291480051LL;
	int64_t x116 = -1LL;

	t23 = ((x113&(x114&x115))*x116);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 1U;
	volatile int32_t x118 = 1340;
	uint8_t x120 = 67U;

	t24 = ((x117&(x118&x119))*x120);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x121 = UINT16_MAX;
	static int16_t x123 = -1;
	volatile int16_t x124 = INT16_MAX;

	t25 = ((x121&(x122&x123))*x124);

	if (t25 != 2143223936) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x126 = -1LL;
	uint8_t x128 = 52U;

	t26 = ((x125&(x126&x127))*x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x129 = INT16_MAX;
	uint32_t x130 = 0U;
	uint32_t x131 = 86449531U;
	int32_t x132 = 736115023;
	uint32_t t27 = 391002U;

	t27 = ((x129&(x130&x131))*x132);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = 521497;
	static int8_t x136 = INT8_MIN;
	volatile int32_t t28 = -738;

	t28 = ((x133&(x134&x135))*x136);

	if (t28 != -66748416) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = 1682947990065792LL;
	int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	volatile int16_t x140 = INT16_MAX;
	int64_t t29 = 30LL;

	t29 = ((x137&(x138&x139))*x140);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 14438U;
	int8_t x142 = INT8_MIN;
	volatile uint16_t x144 = 2U;
	static volatile int32_t t30 = 62944272;

	t30 = ((x141&(x142&x143))*x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x147 = 778U;
	int32_t t31 = 35459;

	t31 = ((x145&(x146&x147))*x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x150 = INT32_MAX;
	static uint64_t x151 = 14010861861LLU;
	uint32_t x152 = 104234U;
	static uint64_t t32 = 1008165369974128045LLU;

	t32 = ((x149&(x150&x151))*x152);

	if (t32 != 3856658LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -224;
	int8_t x158 = INT8_MAX;
	static uint16_t x159 = 1006U;
	uint64_t x160 = 481LLU;

	t33 = ((x157&(x158&x159))*x160);

	if (t33 != 15392LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	int16_t x162 = 4;
	int64_t x164 = -1LL;
	volatile int64_t t34 = 6369246749LL;

	t34 = ((x161&(x162&x163))*x164);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MIN;
	static int64_t x166 = -230LL;
	static uint16_t x167 = 0U;
	volatile uint16_t x168 = 14U;

	t35 = ((x165&(x166&x167))*x168);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = UINT64_MAX;
	uint64_t x170 = 1505003819LLU;
	volatile int16_t x171 = INT16_MIN;
	volatile uint64_t t36 = 2903LLU;

	t36 = ((x169&(x170&x171))*x172);

	if (t36 != 22575022080LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x174 = INT8_MIN;
	uint32_t x175 = 3901075U;
	int8_t x176 = INT8_MAX;
	static uint32_t t37 = 75U;

	t37 = ((x173&(x174&x175))*x176);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = 0;
	static int64_t x178 = -1LL;
	static uint8_t x179 = 1U;
	uint16_t x180 = 36U;
	volatile int64_t t38 = -51315511140276LL;

	t38 = ((x177&(x178&x179))*x180);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x182 = INT16_MIN;
	static uint8_t x183 = UINT8_MAX;
	uint64_t t39 = 154LLU;

	t39 = ((x181&(x182&x183))*x184);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x186 = INT8_MIN;
	volatile int16_t x187 = 171;
	uint32_t x188 = 236532U;
	static int64_t t40 = 974LL;

	t40 = ((x185&(x186&x187))*x188);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MAX;
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = UINT16_MAX;
	static uint32_t x192 = 8534678U;
	uint32_t t41 = 2U;

	t41 = ((x189&(x190&x191))*x192);

	if (t41 != 1083904106U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MAX;
	static uint32_t x194 = 20054713U;
	int8_t x195 = -1;
	int32_t x196 = -1;
	uint32_t t42 = 1081U;

	t42 = ((x193&(x194&x195))*x196);

	if (t42 != 4294967239U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;

	t43 = ((x197&(x198&x199))*x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = 6504U;
	int32_t x202 = -1;
	static uint8_t x203 = 111U;
	volatile int64_t x204 = -1LL;
	volatile int64_t t44 = 30292293266LL;

	t44 = ((x201&(x202&x203))*x204);

	if (t44 != -104LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x205 = 714U;
	uint64_t x206 = UINT64_MAX;
	static volatile uint64_t t45 = 51602LLU;

	t45 = ((x205&(x206&x207))*x208);

	if (t45 != 18446744073709550902LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x210 = INT16_MAX;
	uint32_t t46 = 2584848U;

	t46 = ((x209&(x210&x211))*x212);

	if (t46 != 98301U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x213 = 2070637395877041410LL;
	int16_t x214 = -509;
	int8_t x215 = -24;
	int32_t x216 = -1;

	t47 = ((x213&(x214&x215))*x216);

	if (t47 != -2070637395877041152LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x217 = INT64_MIN;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = -1;
	int8_t x220 = -33;
	volatile int64_t t48 = -2951584324511LL;

	t48 = ((x217&(x218&x219))*x220);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = 1129307LLU;
	int16_t x226 = INT16_MIN;
	static int16_t x227 = -488;
	static int64_t x228 = INT64_MIN;
	volatile uint64_t t49 = 253287660744LLU;

	t49 = ((x225&(x226&x227))*x228);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x229 = 40846561754LL;
	int64_t x230 = INT64_MAX;
	volatile uint16_t x231 = 566U;
	int8_t x232 = INT8_MIN;

	t50 = ((x229&(x230&x231))*x232);

	if (t50 != -2304LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = -27256118;
	uint32_t x234 = 127672U;
	int64_t x236 = INT64_MIN;
	volatile int64_t t51 = -60180282798495653LL;

	t51 = ((x233&(x234&x235))*x236);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x241 = 14157U;
	volatile uint16_t x242 = UINT16_MAX;
	volatile int32_t x243 = INT32_MIN;
	uint64_t x244 = 5LLU;
	static volatile uint64_t t52 = 9183034194210987LLU;

	t52 = ((x241&(x242&x243))*x244);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x245 = INT8_MIN;
	static int32_t x246 = 172300;
	uint64_t x247 = 0LLU;
	volatile int8_t x248 = -1;
	uint64_t t53 = 424698316194870487LLU;

	t53 = ((x245&(x246&x247))*x248);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x249 = 49212294883LL;
	static int32_t x250 = INT32_MIN;
	uint32_t x251 = 181813U;
	uint8_t x252 = 8U;
	volatile int64_t t54 = -12853LL;

	t54 = ((x249&(x250&x251))*x252);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 7358LLU;
	int64_t x258 = -952010651987LL;
	volatile int32_t x259 = INT32_MAX;
	volatile int32_t x260 = 48326630;
	static uint64_t t55 = 1155156LLU;

	t55 = ((x257&(x258&x259))*x260);

	if (t55 != 57798649480LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = -1;
	int64_t x263 = -884707293LL;
	int32_t x264 = INT32_MIN;
	int64_t t56 = 97LL;

	t56 = ((x261&(x262&x263))*x264);

	if (t56 != 1899894520145772544LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x266 = INT8_MIN;
	uint16_t x268 = 1U;

	t57 = ((x265&(x266&x267))*x268);

	if (t57 != 27264) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x274 = -1;
	int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MIN;

	t58 = ((x273&(x274&x275))*x276);

	if (t58 != 4194304) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x278 = -913752034;
	uint16_t x279 = 1U;
	int64_t x280 = -1LL;
	int64_t t59 = -14079090415431LL;

	t59 = ((x277&(x278&x279))*x280);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x282 = -1616;
	int8_t x283 = -1;
	int16_t x284 = -1;

	t60 = ((x281&(x282&x283))*x284);

	if (t60 != 1616U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = -8;
	int8_t x287 = INT8_MAX;
	int64_t x288 = -1LL;
	int64_t t61 = 513176LL;

	t61 = ((x285&(x286&x287))*x288);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = INT8_MIN;
	volatile int8_t x290 = -8;
	int16_t x291 = 1;
	uint8_t x292 = 13U;
	int32_t t62 = 1009715315;

	t62 = ((x289&(x290&x291))*x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = INT16_MAX;
	int32_t x298 = INT32_MIN;
	int64_t x299 = -1LL;
	uint64_t x300 = 297149061LLU;
	uint64_t t63 = 18916502LLU;

	t63 = ((x297&(x298&x299))*x300);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = -2114977910LL;
	static uint16_t x303 = 65U;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t64 = 58LL;

	t64 = ((x301&(x302&x303))*x304);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x305 = INT32_MIN;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = -1;
	int64_t x308 = -80963LL;
	int64_t t65 = 1LL;

	t65 = ((x305&(x306&x307))*x308);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x309 = UINT64_MAX;
	static int64_t x310 = INT64_MIN;
	static int8_t x311 = 1;
	static volatile uint64_t t66 = 162865173504LLU;

	t66 = ((x309&(x310&x311))*x312);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	int16_t x316 = -14533;

	t67 = ((x313&(x314&x315))*x316);

	if (t67 != -3873653310390272LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x317 = 4U;
	uint64_t x318 = 9365948207082714LLU;
	static int16_t x320 = INT16_MIN;
	uint64_t t68 = 448LLU;

	t68 = ((x317&(x318&x319))*x320);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x321 = INT8_MAX;
	uint32_t x323 = 288703074U;
	static volatile uint8_t x324 = 118U;

	t69 = ((x321&(x322&x323))*x324);

	if (t69 != 11564U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x329 = INT8_MIN;
	volatile int64_t x330 = INT64_MIN;
	int32_t x331 = 1802;
	volatile int64_t t70 = -662634748344837702LL;

	t70 = ((x329&(x330&x331))*x332);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MIN;
	static int16_t x335 = INT16_MIN;
	int64_t x336 = -7LL;
	int64_t t71 = 6LL;

	t71 = ((x333&(x334&x335))*x336);

	if (t71 != -15032385536LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x337 = 15U;
	static int8_t x338 = INT8_MIN;
	int32_t x339 = -1;
	uint64_t t72 = 128243999748838LLU;

	t72 = ((x337&(x338&x339))*x340);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x343 = INT16_MIN;
	static uint32_t x344 = 88284860U;
	int64_t t73 = 13LL;

	t73 = ((x341&(x342&x343))*x344);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = UINT64_MAX;
	uint16_t x346 = UINT16_MAX;
	volatile int16_t x347 = -8;
	int16_t x348 = INT16_MIN;
	uint64_t t74 = 342727LLU;

	t74 = ((x345&(x346&x347))*x348);

	if (t74 != 18446744071562330112LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x353 = UINT64_MAX;
	static int32_t x354 = INT32_MIN;
	static uint32_t x355 = UINT32_MAX;
	static int64_t x356 = -1020468226443LL;
	static uint64_t t75 = 422244545LLU;

	t75 = ((x353&(x354&x355))*x356);

	if (t75 != 3723715181532938240LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x357 = 0U;
	int64_t x358 = -1LL;
	int16_t x359 = INT16_MAX;
	volatile int32_t x360 = 108;

	t76 = ((x357&(x358&x359))*x360);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = -1;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = UINT16_MAX;

	t77 = ((x361&(x362&x363))*x364);

	if (t77 != 5093273880695168LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = -1;
	static int64_t x371 = -1LL;
	volatile int64_t t78 = 26719LL;

	t78 = ((x369&(x370&x371))*x372);

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x373 = 2717;
	int16_t x374 = -58;
	int8_t x375 = INT8_MAX;
	uint8_t x376 = 1U;

	t79 = ((x373&(x374&x375))*x376);

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = 3;
	static int8_t x378 = INT8_MIN;
	int8_t x379 = INT8_MAX;
	static volatile int16_t x380 = -236;

	t80 = ((x377&(x378&x379))*x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = -53;
	int64_t x382 = -42772881828058LL;
	int64_t x383 = INT64_MIN;
	uint64_t t81 = 37866395653952410LLU;

	t81 = ((x381&(x382&x383))*x384);

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x386 = INT16_MIN;
	static volatile int8_t x387 = -10;
	int32_t t82 = -3;

	t82 = ((x385&(x386&x387))*x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = INT64_MIN;
	static int16_t x390 = INT16_MIN;
	volatile uint32_t x392 = UINT32_MAX;
	int64_t t83 = -308525315LL;

	t83 = ((x389&(x390&x391))*x392);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x394 = INT8_MAX;
	int8_t x395 = INT8_MIN;
	static int8_t x396 = INT8_MAX;
	static volatile uint64_t t84 = 1498025LLU;

	t84 = ((x393&(x394&x395))*x396);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x401 = INT16_MIN;
	uint32_t x402 = UINT32_MAX;
	int8_t x403 = -1;
	volatile uint8_t x404 = 52U;
	volatile uint32_t t85 = 14964458U;

	t85 = ((x401&(x402&x403))*x404);

	if (t85 != 4293263360U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x405 = INT64_MAX;
	uint16_t x406 = UINT16_MAX;
	int32_t x408 = 1649;
	int64_t t86 = -6647510150747LL;

	t86 = ((x405&(x406&x407))*x408);

	if (t86 != 16894005LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = -588963;
	int8_t x411 = INT8_MAX;
	int64_t x412 = -1LL;
	int64_t t87 = 13675186310249LL;

	t87 = ((x409&(x410&x411))*x412);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x413 = -66;
	int64_t x414 = INT64_MIN;
	uint64_t x415 = 7924203214LLU;
	int8_t x416 = 0;
	uint64_t t88 = 17198107301LLU;

	t88 = ((x413&(x414&x415))*x416);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = 0LL;
	int64_t x419 = INT64_MIN;
	int16_t x420 = 1;
	int64_t t89 = 5015LL;

	t89 = ((x417&(x418&x419))*x420);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x422 = INT32_MAX;
	int8_t x424 = -1;
	int32_t t90 = -1626;

	t90 = ((x421&(x422&x423))*x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x426 = 1903322107LLU;
	volatile int64_t x427 = INT64_MAX;

	t91 = ((x425&(x426&x427))*x428);

	if (t91 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x430 = 26U;
	int8_t x431 = 1;
	uint32_t x432 = 13U;

	t92 = ((x429&(x430&x431))*x432);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = -4;
	int32_t x438 = -141;
	volatile int32_t x439 = INT32_MIN;
	volatile uint32_t t93 = 138014780U;

	t93 = ((x437&(x438&x439))*x440);

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = 8305457226535293LL;
	static int8_t x446 = INT8_MIN;
	static uint64_t x448 = 4200370439530058LLU;
	uint64_t t94 = 67283282701083172LLU;

	t94 = ((x445&(x446&x447))*x448);

	if (t94 != 671674624931752448LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = -43;
	int64_t x450 = -2397595LL;
	uint8_t x452 = 1U;

	t95 = ((x449&(x450&x451))*x452);

	if (t95 != 69LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x453 = INT32_MAX;
	int16_t x454 = INT16_MAX;
	static int16_t x455 = INT16_MAX;
	int16_t x456 = 217;
	int32_t t96 = -148100452;

	t96 = ((x453&(x454&x455))*x456);

	if (t96 != 7110439) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x461 = INT32_MIN;
	static uint16_t x462 = 4U;
	static volatile int16_t x463 = -1;
	int8_t x464 = -1;
	int32_t t97 = -85;

	t97 = ((x461&(x462&x463))*x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x469 = UINT64_MAX;
	volatile uint8_t x470 = 39U;
	uint64_t x471 = 3LLU;
	uint64_t t98 = 3733695685338320LLU;

	t98 = ((x469&(x470&x471))*x472);

	if (t98 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = -3;
	uint8_t x474 = 107U;
	uint8_t x475 = UINT8_MAX;
	static int64_t x476 = -1LL;
	volatile int64_t t99 = -5528161096LL;

	t99 = ((x473&(x474&x475))*x476);

	if (t99 != -105LL) { NG(); } else { ; }
	
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

