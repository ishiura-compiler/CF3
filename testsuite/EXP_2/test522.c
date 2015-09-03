#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = 213;
int64_t x3 = -152749929170LL;
static int16_t x5 = INT16_MIN;
int8_t x6 = -10;
int8_t x17 = 8;
uint16_t x19 = UINT16_MAX;
int16_t x28 = -1;
uint64_t t6 = 493602061524883334LLU;
int64_t x30 = -1LL;
uint64_t x33 = UINT64_MAX;
int32_t x34 = INT32_MIN;
int8_t x36 = -38;
int8_t x39 = 2;
volatile int64_t x47 = INT64_MAX;
static uint32_t x48 = 13355830U;
uint8_t x57 = 44U;
volatile int32_t t14 = 83743713;
int32_t x66 = 452321535;
static int64_t x67 = INT64_MIN;
uint64_t x74 = UINT64_MAX;
volatile int8_t x78 = INT8_MIN;
uint32_t x80 = 2U;
int8_t x81 = INT8_MIN;
int64_t x82 = -1LL;
int8_t x84 = -1;
volatile int64_t t19 = -18531426507861LL;
int16_t x95 = INT16_MAX;
uint8_t x107 = UINT8_MAX;
int32_t x108 = 415;
uint64_t x117 = UINT64_MAX;
int16_t x133 = INT16_MIN;
uint32_t t29 = 1923619113U;
int32_t x140 = -1;
int32_t x144 = -54114;
uint8_t x145 = 13U;
uint16_t x146 = UINT16_MAX;
int16_t x153 = 241;
uint8_t x156 = 0U;
int16_t x160 = -1;
volatile uint64_t t34 = 0LLU;
int16_t x164 = -1;
static uint32_t t36 = 74U;
volatile uint16_t x174 = UINT16_MAX;
int16_t x175 = INT16_MIN;
uint32_t x180 = UINT32_MAX;
uint64_t x191 = 1966LLU;
static int16_t x202 = INT16_MIN;
volatile int32_t x204 = INT32_MAX;
int64_t x207 = INT64_MIN;
int32_t x209 = -120168;
uint8_t x212 = 76U;
volatile int32_t t47 = 390228180;
uint64_t x226 = 2571LLU;
static volatile uint64_t t50 = 3174546525960LLU;
static volatile uint32_t x229 = 1719661621U;
static int8_t x230 = 0;
volatile uint64_t t51 = 951LLU;
static uint16_t x247 = UINT16_MAX;
uint64_t x253 = 177811901LLU;
static int64_t x255 = -1LL;
static volatile int32_t t57 = -7;
int64_t x262 = -1LL;
volatile uint64_t x263 = UINT64_MAX;
volatile int64_t x273 = -5014489187LL;
uint32_t x274 = 284300201U;
static int8_t x275 = 1;
volatile int64_t x277 = INT64_MAX;
int8_t x285 = INT8_MAX;
int16_t x287 = -846;
volatile uint64_t t64 = 39938728249990861LLU;
volatile int64_t x296 = INT64_MIN;
volatile int16_t x299 = -1;
uint8_t x302 = UINT8_MAX;
int16_t x303 = -1;
volatile uint32_t t68 = 98U;
static volatile uint16_t x317 = UINT16_MAX;
int8_t x318 = INT8_MIN;
int64_t x319 = INT64_MIN;
int8_t x320 = -10;
uint32_t x326 = 240U;
int64_t x328 = -1LL;
uint64_t t72 = 1992786081823959200LLU;
volatile uint8_t x339 = 5U;
static volatile int8_t x343 = -1;
int8_t x347 = INT8_MIN;
int16_t x351 = -1;
volatile int64_t t77 = 227LL;
int64_t x368 = INT64_MIN;
int8_t x377 = INT8_MIN;
int16_t x387 = -1;
int16_t x389 = 2;
volatile int64_t t85 = -1996LL;
static uint8_t x399 = UINT8_MAX;
static volatile int64_t t86 = -167554LL;
int8_t x402 = 6;
uint8_t x405 = 10U;
uint32_t t88 = 209828U;
uint32_t x417 = 85486560U;
static int64_t x418 = -1LL;
int64_t t90 = -2356765314202783LL;
static uint64_t t91 = 227983052LLU;
uint64_t x425 = UINT64_MAX;
int8_t x442 = INT8_MIN;
volatile int64_t t96 = -165045198835290LL;
int64_t x446 = INT64_MAX;
int64_t x448 = -1LL;
uint8_t x452 = UINT8_MAX;


void f0(void) {
	int8_t x2 = 49;
	static volatile uint8_t x4 = 119U;
	volatile int64_t t0 = 515123956327979120LL;

	t0 = ((x1-(x2/x3))-x4);

	if (t0 != 94LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x7 = INT64_MIN;
	uint64_t x8 = 10108732700807923LLU;
	uint64_t t1 = 1423446143LLU;

	t1 = ((x5-(x6/x7))-x8);

	if (t1 != 18436635341008710925LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint8_t x10 = 0U;
	static int32_t x11 = INT32_MAX;
	int32_t x12 = INT32_MIN;
	int64_t t2 = -436838108811LL;

	t2 = ((x9-(x10/x11))-x12);

	if (t2 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1026;
	volatile int8_t x14 = INT8_MAX;
	int16_t x15 = -1;
	volatile int64_t x16 = -1LL;
	volatile int64_t t3 = -13670LL;

	t3 = ((x13-(x14/x15))-x16);

	if (t3 != -898LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = -54689;

	t4 = ((x17-(x18/x19))-x20);

	if (t4 != 135) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;
	volatile int64_t t5 = -1LL;

	t5 = ((x21-(x22/x23))-x24);

	if (t5 != 2147483775LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 182LLU;
	int16_t x26 = -1;
	int32_t x27 = -1;

	t6 = ((x25-(x26/x27))-x28);

	if (t6 != 182LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	int8_t x31 = INT8_MAX;
	int16_t x32 = -1;
	int64_t t7 = 25454LL;

	t7 = ((x29-(x30/x31))-x32);

	if (t7 != 256LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x35 = 51U;
	uint64_t t8 = 31196678231276251LLU;

	t8 = ((x33-(x34/x35))-x36);

	if (t8 != 42107559LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int8_t x38 = INT8_MIN;
	int32_t x40 = INT32_MAX;
	int32_t t9 = 183;

	t9 = ((x37-(x38/x39))-x40);

	if (t9 != -2147418048) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	static int64_t x42 = INT64_MAX;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = 152874474037363LL;

	t10 = ((x41-(x42/x43))-x44);

	if (t10 != -9151314444964331520LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 1U;
	int64_t x46 = INT64_MIN;
	volatile int64_t t11 = 147LL;

	t11 = ((x45-(x46/x47))-x48);

	if (t11 != -13355828LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x53 = UINT8_MAX;
	int16_t x54 = INT16_MAX;
	static volatile uint8_t x55 = UINT8_MAX;
	static volatile int16_t x56 = -1;
	volatile int32_t t12 = 20;

	t12 = ((x53-(x54/x55))-x56);

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = -1;
	int32_t x59 = -1;
	volatile uint32_t x60 = UINT32_MAX;
	uint32_t t13 = 9334U;

	t13 = ((x57-(x58/x59))-x60);

	if (t13 != 44U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static uint16_t x62 = 2U;
	int8_t x63 = -1;
	int16_t x64 = -1;

	t14 = ((x61-(x62/x63))-x64);

	if (t14 != -125) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	volatile int8_t x68 = -4;
	volatile int64_t t15 = 539340758142417LL;

	t15 = ((x65-(x66/x67))-x68);

	if (t15 != 131LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	static int16_t x70 = -1;
	uint32_t x71 = 12998U;
	static uint32_t x72 = 119U;
	uint64_t t16 = 0LLU;

	t16 = ((x69-(x70/x71))-x72);

	if (t16 != 18446744073709221064LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	int16_t x75 = -1;
	uint32_t x76 = 1184013645U;
	uint64_t t17 = 1940175901579477223LLU;

	t17 = ((x73-(x74/x75))-x76);

	if (t17 != 18446744072525537969LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = -8;
	int8_t x79 = 7;
	static volatile uint32_t t18 = 317357648U;

	t18 = ((x77-(x78/x79))-x80);

	if (t18 != 8U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x83 = UINT16_MAX;

	t19 = ((x81-(x82/x83))-x84);

	if (t19 != -127LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = 0;
	int8_t x94 = INT8_MAX;
	int16_t x96 = INT16_MIN;
	static int32_t t20 = 1908;

	t20 = ((x93-(x94/x95))-x96);

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MAX;
	static volatile int64_t x98 = 1811752879911670687LL;
	int16_t x99 = -2239;
	volatile uint32_t x100 = 2141095442U;
	volatile int64_t t21 = 77820301405LL;

	t21 = ((x97-(x98/x99))-x100);

	if (t21 != 809179497192881LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = UINT32_MAX;
	volatile uint16_t x103 = 225U;
	int8_t x104 = INT8_MIN;
	static uint32_t t22 = 13855U;

	t22 = ((x101-(x102/x103))-x104);

	if (t22 != 4275878680U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	uint32_t x106 = UINT32_MAX;
	uint32_t t23 = 3U;

	t23 = ((x105-(x106/x107))-x108);

	if (t23 != 4278123871U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	static volatile int32_t x110 = INT32_MAX;
	int16_t x111 = 6066;
	int32_t x112 = INT32_MIN;
	uint64_t t24 = 3819345414850557118LLU;

	t24 = ((x109-(x110/x111))-x112);

	if (t24 != 2147129628LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	static uint64_t x114 = 302996391920654061LLU;
	int16_t x115 = INT16_MAX;
	static uint8_t x116 = 1U;
	volatile uint64_t t25 = 51360683974446294LLU;

	t25 = ((x113-(x114/x115))-x116);

	if (t25 != 18446734826711260824LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x118 = UINT64_MAX;
	int32_t x119 = INT32_MAX;
	volatile uint64_t x120 = 24483252139713791LLU;
	uint64_t t26 = 587251LLU;

	t26 = ((x117-(x118/x119))-x120);

	if (t26 != 18422260812979903228LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -1LL;
	static int16_t x126 = 2;
	static int8_t x127 = 1;
	static int32_t x128 = -1;
	volatile int64_t t27 = -20165503LL;

	t27 = ((x125-(x126/x127))-x128);

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 31325780971LLU;
	volatile int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	int32_t x132 = -49869;
	uint64_t t28 = 3665407822017LLU;

	t28 = ((x129-(x130/x131))-x132);

	if (t28 != 31325830839LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x134 = 100066109U;
	int16_t x135 = -159;
	static volatile int16_t x136 = INT16_MIN;

	t29 = ((x133-(x134/x135))-x136);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 0U;
	int8_t x138 = 6;
	uint8_t x139 = 3U;
	static volatile int32_t t30 = 56;

	t30 = ((x137-(x138/x139))-x140);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = -1;
	static int16_t x142 = -5278;
	int8_t x143 = INT8_MAX;
	static int32_t t31 = -1013291360;

	t31 = ((x141-(x142/x143))-x144);

	if (t31 != 54154) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x147 = UINT8_MAX;
	static uint8_t x148 = 1U;
	volatile int32_t t32 = 115244904;

	t32 = ((x145-(x146/x147))-x148);

	if (t32 != -245) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x154 = 0U;
	uint8_t x155 = UINT8_MAX;
	int32_t t33 = -3047;

	t33 = ((x153-(x154/x155))-x156);

	if (t33 != 241) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = 40101856;
	static volatile uint64_t x158 = 169290668231596556LLU;
	static uint64_t x159 = UINT64_MAX;

	t34 = ((x157-(x158/x159))-x160);

	if (t34 != 40101857LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = 313403U;
	static volatile int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	int64_t t35 = -339510947911358LL;

	t35 = ((x161-(x162/x163))-x164);

	if (t35 != -281474976397252LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = 3;
	int16_t x166 = -1;
	static uint32_t x167 = 6133U;
	int32_t x168 = INT32_MIN;

	t36 = ((x165-(x166/x167))-x168);

	if (t36 != 2146783347U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = 5;
	static volatile int8_t x170 = -1;
	static int32_t x171 = INT32_MAX;
	uint64_t x172 = 1LLU;
	uint64_t t37 = 98477565263543106LLU;

	t37 = ((x169-(x170/x171))-x172);

	if (t37 != 4LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = UINT32_MAX;
	int8_t x176 = 4;
	static uint32_t t38 = 1007U;

	t38 = ((x173-(x174/x175))-x176);

	if (t38 != 4294967292U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = 57015520LL;
	volatile int16_t x178 = 1;
	static int64_t x179 = INT64_MAX;
	static int64_t t39 = 455780242599634LL;

	t39 = ((x177-(x178/x179))-x180);

	if (t39 != -4237951775LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = INT16_MAX;
	int32_t x182 = 1;
	int8_t x183 = 1;
	uint64_t x184 = 68660182707029677LLU;
	uint64_t t40 = 38165501LLU;

	t40 = ((x181-(x182/x183))-x184);

	if (t40 != 18378083891002554705LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = INT8_MAX;
	volatile uint16_t x186 = 447U;
	int64_t x187 = INT64_MAX;
	int16_t x188 = -5;
	int64_t t41 = 12707049LL;

	t41 = ((x185-(x186/x187))-x188);

	if (t41 != 132LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = UINT8_MAX;
	volatile uint32_t x190 = UINT32_MAX;
	uint32_t x192 = 3U;
	uint64_t t42 = 17931129967066429LLU;

	t42 = ((x189-(x190/x191))-x192);

	if (t42 != 18446744073707367246LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 2226418U;
	int64_t x194 = -1LL;
	uint8_t x195 = 16U;
	int32_t x196 = INT32_MIN;
	int64_t t43 = -1971820960044LL;

	t43 = ((x193-(x194/x195))-x196);

	if (t43 != 2149710066LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x197 = INT8_MIN;
	volatile int32_t x198 = -25141;
	int16_t x199 = INT16_MIN;
	int16_t x200 = -68;
	int32_t t44 = -23;

	t44 = ((x197-(x198/x199))-x200);

	if (t44 != -60) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 20490U;
	int64_t x203 = INT64_MAX;
	int64_t t45 = -59298882281827LL;

	t45 = ((x201-(x202/x203))-x204);

	if (t45 != -2147463157LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MIN;
	static int16_t x208 = -5992;
	static int64_t t46 = -11330343357LL;

	t46 = ((x205-(x206/x207))-x208);

	if (t46 != 2147489639LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x210 = 0;
	volatile int32_t x211 = INT32_MIN;

	t47 = ((x209-(x210/x211))-x212);

	if (t47 != -120244) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 5U;
	static volatile uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MIN;
	uint64_t t48 = 0LLU;

	t48 = ((x217-(x218/x219))-x220);

	if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = 3;
	volatile int16_t x222 = INT16_MIN;
	static uint64_t x223 = 856412LLU;
	int64_t x224 = INT64_MIN;
	volatile uint64_t t49 = 985LLU;

	t49 = ((x221-(x222/x223))-x224);

	if (t49 != 9223350497287285270LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MAX;
	int8_t x227 = -46;
	uint64_t x228 = 26811488LLU;

	t50 = ((x225-(x226/x227))-x228);

	if (t50 != 18446744073682772895LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x231 = 6806193LLU;
	int64_t x232 = INT64_MIN;

	t51 = ((x229-(x230/x231))-x232);

	if (t51 != 9223372038574437429LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = 17;
	static int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	volatile int64_t x236 = INT64_MIN;
	static volatile int64_t t52 = -28797447658LL;

	t52 = ((x233-(x234/x235))-x236);

	if (t52 != 9223090561878065169LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x241 = 0;
	int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	uint8_t x244 = UINT8_MAX;
	volatile int64_t t53 = 13917LL;

	t53 = ((x241-(x242/x243))-x244);

	if (t53 != -256LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x245 = INT8_MAX;
	static int64_t x246 = INT64_MAX;
	static int32_t x248 = -8390;
	volatile int64_t t54 = -5471657LL;

	t54 = ((x245-(x246/x247))-x248);

	if (t54 != -140739635863227LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x249 = 1U;
	volatile int32_t x250 = -1;
	int64_t x251 = -1LL;
	int16_t x252 = -13485;
	static volatile int64_t t55 = 15969805913881LL;

	t55 = ((x249-(x250/x251))-x252);

	if (t55 != 13485LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x254 = INT8_MAX;
	int32_t x256 = -1;
	uint64_t t56 = 6191824LLU;

	t56 = ((x253-(x254/x255))-x256);

	if (t56 != 177812029LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MAX;
	int16_t x259 = INT16_MIN;
	int8_t x260 = 8;

	t57 = ((x257-(x258/x259))-x260);

	if (t57 != 32759) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x261 = -273;
	static uint32_t x264 = 12U;
	static uint64_t t58 = 67214147001780872LLU;

	t58 = ((x261-(x262/x263))-x264);

	if (t58 != 18446744073709551330LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x265 = -26352737;
	uint16_t x266 = 1840U;
	static uint64_t x267 = 125810814589LLU;
	static int16_t x268 = 1;
	volatile uint64_t t59 = 4004218618701LLU;

	t59 = ((x265-(x266/x267))-x268);

	if (t59 != 18446744073683198878LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x276 = INT64_MIN;
	static int64_t t60 = -211822442699LL;

	t60 = ((x273-(x274/x275))-x276);

	if (t60 != 9223372031555986420LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x278 = 9374U;
	int32_t x279 = INT32_MAX;
	int64_t x280 = 3816949210778LL;
	static volatile int64_t t61 = 5512LL;

	t61 = ((x277-(x278/x279))-x280);

	if (t61 != 9223368219905565029LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = INT32_MAX;
	volatile int16_t x282 = INT16_MAX;
	uint8_t x283 = 107U;
	uint16_t x284 = 14U;
	int32_t t62 = 0;

	t62 = ((x281-(x282/x283))-x284);

	if (t62 != 2147483327) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x286 = 0U;
	int8_t x288 = INT8_MAX;
	volatile int32_t t63 = 2097370;

	t63 = ((x285-(x286/x287))-x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = 47U;
	static int32_t x290 = INT32_MAX;
	volatile uint64_t x291 = UINT64_MAX;
	static volatile uint64_t x292 = UINT64_MAX;

	t64 = ((x289-(x290/x291))-x292);

	if (t64 != 48LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x293 = -121123006590674LL;
	uint32_t x294 = 564580U;
	uint32_t x295 = 8878496U;
	static int64_t t65 = 148661LL;

	t65 = ((x293-(x294/x295))-x296);

	if (t65 != 9223250913848185134LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x297 = INT16_MAX;
	volatile uint8_t x298 = 30U;
	uint8_t x300 = 29U;
	volatile int32_t t66 = -13;

	t66 = ((x297-(x298/x299))-x300);

	if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = UINT32_MAX;
	int16_t x304 = -1;
	uint32_t t67 = 58804U;

	t67 = ((x301-(x302/x303))-x304);

	if (t67 != 255U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x305 = UINT32_MAX;
	uint32_t x306 = 13U;
	int32_t x307 = INT32_MAX;
	int32_t x308 = INT32_MIN;

	t68 = ((x305-(x306/x307))-x308);

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t t69 = 401083624393145886LL;

	t69 = ((x317-(x318/x319))-x320);

	if (t69 != 65545LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x321 = UINT16_MAX;
	static int64_t x322 = 7683427700LL;
	volatile int64_t x323 = 622LL;
	volatile uint16_t x324 = UINT16_MAX;
	static int64_t t70 = -720236LL;

	t70 = ((x321-(x322/x323))-x324);

	if (t70 != -12352777LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x325 = 38U;
	int32_t x327 = INT32_MIN;
	int64_t t71 = -7569448LL;

	t71 = ((x325-(x326/x327))-x328);

	if (t71 != 39LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x329 = INT16_MAX;
	int32_t x330 = 6;
	int32_t x331 = -57319473;
	uint64_t x332 = 19232305662590LLU;

	t72 = ((x329-(x330/x331))-x332);

	if (t72 != 18446724841403921793LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x337 = 2LLU;
	int8_t x338 = 24;
	uint32_t x340 = 62U;
	uint64_t t73 = 1519516LLU;

	t73 = ((x337-(x338/x339))-x340);

	if (t73 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x341 = 15U;
	uint8_t x342 = 0U;
	uint32_t x344 = UINT32_MAX;
	static uint32_t t74 = 57021U;

	t74 = ((x341-(x342/x343))-x344);

	if (t74 != 16U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x345 = 64825LLU;
	volatile int32_t x346 = -27692;
	int64_t x348 = -1LL;
	volatile uint64_t t75 = 68592150301733LLU;

	t75 = ((x345-(x346/x347))-x348);

	if (t75 != 64610LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x349 = 0U;
	static int8_t x350 = 6;
	int16_t x352 = -1;
	volatile int32_t t76 = 52051625;

	t76 = ((x349-(x350/x351))-x352);

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x357 = -20939LL;
	int16_t x358 = -1;
	static volatile uint16_t x359 = UINT16_MAX;
	uint16_t x360 = 1U;

	t77 = ((x357-(x358/x359))-x360);

	if (t77 != -20940LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = -184;
	volatile uint32_t x362 = 268960U;
	int32_t x363 = INT32_MIN;
	int8_t x364 = 11;
	uint32_t t78 = 5805995U;

	t78 = ((x361-(x362/x363))-x364);

	if (t78 != 4294967101U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = -7928543158532LL;
	uint64_t x366 = 2084574192571LLU;
	int16_t x367 = INT16_MAX;
	static volatile uint64_t t79 = 3539396666649276821LLU;

	t79 = ((x365-(x366/x367))-x368);

	if (t79 != 9223364108247999179LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 520735022356LLU;
	static int16_t x374 = INT16_MAX;
	uint8_t x375 = 2U;
	uint64_t x376 = 1661971606167778LLU;
	volatile uint64_t t80 = 1504731453LLU;

	t80 = ((x373-(x374/x375))-x376);

	if (t80 != 18445082622838389811LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x378 = INT16_MAX;
	static int8_t x379 = INT8_MAX;
	static uint16_t x380 = 163U;
	static volatile int32_t t81 = 326014507;

	t81 = ((x377-(x378/x379))-x380);

	if (t81 != -549) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x381 = UINT8_MAX;
	int32_t x382 = -1;
	volatile int8_t x383 = INT8_MAX;
	static int16_t x384 = 0;
	volatile int32_t t82 = -7525;

	t82 = ((x381-(x382/x383))-x384);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x385 = 7U;
	static int16_t x386 = INT16_MIN;
	int64_t x388 = INT64_MAX;
	int64_t t83 = -69278671767474088LL;

	t83 = ((x385-(x386/x387))-x388);

	if (t83 != -9223372032559841272LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x390 = 3U;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = UINT16_MAX;
	uint32_t t84 = 23156U;

	t84 = ((x389-(x390/x391))-x392);

	if (t84 != 4294901763U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x393 = -3;
	static int32_t x394 = -1;
	static int64_t x395 = INT64_MIN;
	static int8_t x396 = INT8_MIN;

	t85 = ((x393-(x394/x395))-x396);

	if (t85 != 125LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = -1;
	int64_t x398 = INT64_MIN;
	volatile int8_t x400 = -1;

	t86 = ((x397-(x398/x399))-x400);

	if (t86 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x401 = 29970LLU;
	static uint8_t x403 = 1U;
	int16_t x404 = INT16_MIN;
	static uint64_t t87 = 103264LLU;

	t87 = ((x401-(x402/x403))-x404);

	if (t87 != 62732LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x406 = INT8_MIN;
	int32_t x407 = INT32_MIN;
	volatile uint32_t x408 = 1985328U;

	t88 = ((x405-(x406/x407))-x408);

	if (t88 != 4292981978U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x409 = 120948935041263LL;
	int32_t x410 = -216786326;
	int32_t x411 = INT32_MIN;
	uint64_t x412 = 2111243210332LLU;
	volatile uint64_t t89 = 28818724256957448LLU;

	t89 = ((x409-(x410/x411))-x412);

	if (t89 != 118837691830931LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x419 = INT16_MAX;
	int8_t x420 = INT8_MAX;

	t90 = ((x417-(x418/x419))-x420);

	if (t90 != 85486433LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x421 = 7LLU;
	volatile uint32_t x422 = UINT32_MAX;
	int8_t x423 = -1;
	uint16_t x424 = UINT16_MAX;

	t91 = ((x421-(x422/x423))-x424);

	if (t91 != 18446744073709486087LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x426 = INT16_MIN;
	uint8_t x427 = 30U;
	int16_t x428 = -1;
	volatile uint64_t t92 = 42LLU;

	t92 = ((x425-(x426/x427))-x428);

	if (t92 != 1092LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MAX;
	volatile int16_t x430 = INT16_MIN;
	int64_t x431 = 8445LL;
	int16_t x432 = -1;
	volatile int64_t t93 = -2572980575LL;

	t93 = ((x429-(x430/x431))-x432);

	if (t93 != 2147483651LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x433 = -52;
	int16_t x434 = INT16_MAX;
	static uint32_t x435 = 52080413U;
	int32_t x436 = INT32_MIN;
	static volatile uint32_t t94 = 15791632U;

	t94 = ((x433-(x434/x435))-x436);

	if (t94 != 2147483596U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = -1LL;
	uint64_t x438 = 243721638656849502LLU;
	int8_t x439 = -7;
	int64_t x440 = INT64_MAX;
	volatile uint64_t t95 = 11070022520LLU;

	t95 = ((x437-(x438/x439))-x440);

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x441 = INT32_MIN;
	volatile int64_t x443 = INT64_MAX;
	static uint16_t x444 = 6U;

	t96 = ((x441-(x442/x443))-x444);

	if (t96 != -2147483654LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x445 = INT32_MIN;
	int32_t x447 = INT32_MIN;
	int64_t t97 = 537853377020577LL;

	t97 = ((x445-(x446/x447))-x448);

	if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = INT16_MIN;
	volatile int64_t x450 = -116547112LL;
	volatile int16_t x451 = INT16_MIN;
	int64_t t98 = -14347390743LL;

	t98 = ((x449-(x450/x451))-x452);

	if (t98 != -36579LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x453 = INT8_MIN;
	int32_t x454 = INT32_MAX;
	static uint64_t x455 = 774LLU;
	volatile uint64_t x456 = 3326224685988975LLU;
	uint64_t t99 = 956300882LLU;

	t99 = ((x453-(x454/x455))-x456);

	if (t99 != 18443417849020787987LLU) { NG(); } else { ; }
	
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

