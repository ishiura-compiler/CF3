#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x11 = INT8_MIN;
uint64_t x24 = UINT64_MAX;
uint16_t x25 = 3U;
static int16_t x27 = -1;
static int64_t x30 = 48LL;
int8_t x33 = -1;
int32_t t7 = -9055;
int32_t t9 = -1236494;
volatile int32_t x45 = INT32_MIN;
uint64_t x49 = 305538415LLU;
volatile uint8_t x52 = 92U;
uint64_t x53 = UINT64_MAX;
uint8_t x56 = 75U;
volatile int32_t t12 = -1080133;
int16_t x58 = 110;
int32_t x61 = 69040136;
int32_t t14 = -2414441;
volatile int32_t t15 = -106637;
uint8_t x72 = 5U;
volatile uint16_t x80 = 1141U;
uint32_t x88 = UINT32_MAX;
int64_t x90 = INT64_MIN;
int16_t x93 = INT16_MIN;
int32_t t22 = 10;
static int8_t x97 = -1;
volatile int32_t t23 = -113274;
int64_t x104 = INT64_MIN;
static volatile int32_t x117 = INT32_MIN;
int32_t x118 = 18242843;
int16_t x124 = INT16_MIN;
int16_t x125 = -1;
uint8_t x131 = 4U;
int64_t x146 = INT64_MIN;
static uint64_t t32 = 86752412750361LLU;
volatile int64_t t34 = -163297919921594LL;
int8_t x161 = 1;
int64_t x171 = -6446780926LL;
int64_t t38 = 4484854LL;
uint32_t x177 = UINT32_MAX;
static volatile int8_t x180 = 7;
int32_t t39 = 15488224;
static volatile uint8_t x183 = UINT8_MAX;
uint32_t x186 = 14756802U;
uint8_t x190 = 7U;
static int8_t x192 = INT8_MIN;
volatile uint8_t x193 = 44U;
volatile int64_t t43 = 3079630LL;
int64_t x199 = INT64_MIN;
int64_t x201 = INT64_MIN;
uint16_t x208 = UINT16_MAX;
int8_t x209 = 0;
uint8_t x210 = UINT8_MAX;
int16_t x211 = INT16_MIN;
static int8_t x214 = INT8_MAX;
volatile int16_t x218 = INT16_MIN;
int16_t x219 = INT16_MAX;
int32_t t50 = -6481130;
static int64_t x226 = 7820LL;
int64_t x232 = INT64_MAX;
volatile int64_t t52 = 1544681LL;
uint8_t x234 = UINT8_MAX;
static int32_t x239 = INT32_MIN;
uint16_t x242 = 7768U;
volatile int32_t t55 = 404;
int64_t x248 = 901637LL;
int32_t t57 = -4163075;
int16_t x256 = INT16_MIN;
uint16_t x258 = UINT16_MAX;
static int8_t x259 = INT8_MIN;
uint64_t x261 = 62LLU;
int32_t x263 = 772904;
uint16_t x267 = 1132U;
volatile int32_t x270 = INT32_MAX;
volatile uint32_t x276 = 1027U;
uint32_t x277 = 3786U;
static volatile int16_t x278 = 5;
static int16_t x279 = INT16_MAX;
uint16_t x280 = 42U;
int16_t x283 = -1;
int8_t x286 = 16;
int8_t x298 = INT8_MIN;
static int8_t x303 = INT8_MIN;
int8_t x306 = 30;
uint32_t x307 = UINT32_MAX;
volatile int8_t x311 = INT8_MIN;
volatile uint64_t x314 = 43024624933345988LLU;
int8_t x315 = 1;
int8_t x316 = INT8_MIN;
int32_t x317 = INT32_MIN;
int32_t x318 = 1;
static uint8_t x320 = UINT8_MAX;
int32_t x321 = 754529;
int8_t x324 = 7;
uint32_t x325 = 206266U;
int64_t x326 = -1LL;
int64_t x334 = 217LL;
int64_t x336 = INT64_MAX;
static uint32_t x338 = 1601U;
int64_t x339 = 4192916143LL;
uint64_t x343 = 1563625LLU;
int8_t x346 = INT8_MIN;
static int32_t x348 = -1;
static int8_t x357 = INT8_MIN;
uint32_t x360 = 154741U;
int64_t x362 = INT64_MAX;
static uint64_t t85 = 103LLU;
static uint64_t t86 = 7393740906276LLU;
int32_t t88 = 1835;
volatile uint8_t x378 = UINT8_MAX;
static uint32_t t89 = 26U;
int32_t x388 = -1998576;
volatile int32_t t92 = -200;
int8_t x396 = INT8_MIN;
int64_t x404 = -769604199906074LL;
int16_t x410 = -1;


void f0(void) {
	int16_t x1 = -1770;
	int8_t x2 = INT8_MAX;
	int16_t x3 = -1803;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 85926009;

	t0 = ((x1==x2)*(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 483984U;
	volatile int32_t x6 = 5518573;
	int32_t x7 = -1;
	static int16_t x8 = 881;
	volatile int32_t t1 = -5;

	t1 = ((x5==x6)*(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -23338914;
	int32_t x10 = INT32_MAX;
	int32_t x12 = -19;
	volatile int32_t t2 = 13017;

	t2 = ((x9==x10)*(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 13;
	static int16_t x14 = INT16_MAX;
	volatile uint16_t x15 = UINT16_MAX;
	int16_t x16 = INT16_MAX;
	static volatile int32_t t3 = 76700379;

	t3 = ((x13==x14)*(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x21 = 564U;
	uint64_t x22 = 50081LLU;
	int64_t x23 = INT64_MIN;
	uint64_t t4 = 1003687969724862465LLU;

	t4 = ((x21==x22)*(x23/x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = -678232939LL;
	uint16_t x28 = 1591U;
	volatile int32_t t5 = 228496;

	t5 = ((x25==x26)*(x27/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 17;
	volatile int64_t x31 = INT64_MAX;
	int64_t x32 = -12803651LL;
	static int64_t t6 = 9984820745LL;

	t6 = ((x29==x30)*(x31/x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x34 = -17;
	static int16_t x35 = -1;
	volatile uint8_t x36 = 5U;

	t7 = ((x33==x34)*(x35/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = -124445;
	volatile uint16_t x38 = 1496U;
	uint32_t x39 = 0U;
	int64_t x40 = INT64_MIN;
	int64_t t8 = -771617LL;

	t8 = ((x37==x38)*(x39/x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MIN;
	int16_t x42 = -1149;
	uint16_t x43 = UINT16_MAX;
	static int8_t x44 = INT8_MAX;

	t9 = ((x41==x42)*(x43/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x46 = 82738669U;
	uint64_t x47 = 4013052LLU;
	uint64_t x48 = 4333104642381LLU;
	volatile uint64_t t10 = 294860406819LLU;

	t10 = ((x45==x46)*(x47/x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x50 = -3573930159LL;
	int64_t x51 = INT64_MIN;
	volatile int64_t t11 = 4911LL;

	t11 = ((x49==x50)*(x51/x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -48;
	uint8_t x55 = 103U;

	t12 = ((x53==x54)*(x55/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = 11;
	int8_t x59 = 1;
	int64_t x60 = INT64_MIN;
	static int64_t t13 = 554740LL;

	t13 = ((x57==x58)*(x59/x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = UINT32_MAX;
	static uint8_t x63 = 12U;
	int16_t x64 = INT16_MIN;

	t14 = ((x61==x62)*(x63/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = 1157;
	uint64_t x66 = UINT64_MAX;
	uint16_t x67 = 6195U;
	int16_t x68 = INT16_MAX;

	t15 = ((x65==x66)*(x67/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	int32_t t16 = 1043776668;

	t16 = ((x69==x70)*(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 15LLU;
	int32_t x74 = 1455;
	volatile int64_t x75 = INT64_MIN;
	static int32_t x76 = INT32_MIN;
	static volatile int64_t t17 = 403LL;

	t17 = ((x73==x74)*(x75/x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MAX;
	uint8_t x79 = 3U;
	static volatile int32_t t18 = -246;

	t18 = ((x77==x78)*(x79/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = 90;
	volatile uint32_t x83 = 10U;
	volatile int32_t x84 = 1060294;
	volatile uint32_t t19 = 345184773U;

	t19 = ((x81==x82)*(x83/x84));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = 1;
	int32_t x86 = INT32_MIN;
	static uint16_t x87 = UINT16_MAX;
	uint32_t t20 = 1435U;

	t20 = ((x85==x86)*(x87/x88));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x89 = -737894292867LL;
	static volatile int16_t x91 = INT16_MIN;
	volatile int32_t x92 = INT32_MIN;
	int32_t t21 = -25467490;

	t21 = ((x89==x90)*(x91/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x94 = 77U;
	uint16_t x95 = UINT16_MAX;
	uint16_t x96 = 3901U;

	t22 = ((x93==x94)*(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = INT32_MIN;
	uint16_t x99 = UINT16_MAX;
	uint16_t x100 = 9863U;

	t23 = ((x97==x98)*(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = 0;
	static volatile int16_t x102 = 878;
	static uint8_t x103 = 2U;
	static volatile int64_t t24 = 16992676538404LL;

	t24 = ((x101==x102)*(x103/x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 1;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -47LL;
	int64_t x112 = -237370532125386LL;
	int64_t t25 = -8LL;

	t25 = ((x109==x110)*(x111/x112));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x119 = INT16_MAX;
	static uint32_t x120 = 193785U;
	uint32_t t26 = 394U;

	t26 = ((x117==x118)*(x119/x120));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = INT8_MIN;
	int32_t x122 = INT32_MAX;
	volatile int32_t x123 = -1;
	static int32_t t27 = -61170;

	t27 = ((x121==x122)*(x123/x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x126 = INT8_MIN;
	uint8_t x127 = UINT8_MAX;
	static uint16_t x128 = 20894U;
	volatile int32_t t28 = 263119532;

	t28 = ((x125==x126)*(x127/x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = 24;
	static uint16_t x132 = 3U;
	int32_t t29 = -93;

	t29 = ((x129==x130)*(x131/x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -1725;
	static int16_t x134 = 113;
	uint32_t x135 = 1154664074U;
	int32_t x136 = -1;
	uint32_t t30 = 324852983U;

	t30 = ((x133==x134)*(x135/x136));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -1;
	int32_t x138 = INT32_MIN;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = INT32_MIN;
	volatile uint64_t t31 = 155673LLU;

	t31 = ((x137==x138)*(x139/x140));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = 3063;
	int8_t x147 = -1;
	uint64_t x148 = 2LLU;

	t32 = ((x145==x146)*(x147/x148));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 970U;
	uint64_t x150 = 23320238LLU;
	int64_t x151 = INT64_MAX;
	volatile int32_t x152 = INT32_MIN;
	static volatile int64_t t33 = 153707628LL;

	t33 = ((x149==x150)*(x151/x152));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 145862U;
	static uint8_t x154 = 0U;
	static int32_t x155 = -12;
	int64_t x156 = INT64_MIN;

	t34 = ((x153==x154)*(x155/x156));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	int32_t x158 = -18464;
	int32_t x159 = INT32_MAX;
	int16_t x160 = 2;
	int32_t t35 = -43;

	t35 = ((x157==x158)*(x159/x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x162 = INT32_MIN;
	uint8_t x163 = UINT8_MAX;
	int64_t x164 = 68LL;
	static volatile int64_t t36 = 238863LL;

	t36 = ((x161==x162)*(x163/x164));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = 229;
	int16_t x166 = 634;
	int16_t x167 = -1;
	int32_t x168 = -1;
	int32_t t37 = 2;

	t37 = ((x165==x166)*(x167/x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x169 = 14U;
	volatile int16_t x170 = INT16_MIN;
	int8_t x172 = 4;

	t38 = ((x169==x170)*(x171/x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x178 = 1205212U;
	int16_t x179 = 497;

	t39 = ((x177==x178)*(x179/x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x181 = -1;
	uint8_t x182 = 67U;
	uint8_t x184 = 4U;
	static volatile int32_t t40 = -95666700;

	t40 = ((x181==x182)*(x183/x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x187 = UINT32_MAX;
	volatile uint64_t x188 = 44472027176LLU;
	volatile uint64_t t41 = 21095560271LLU;

	t41 = ((x185==x186)*(x187/x188));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -17;
	int8_t x191 = INT8_MIN;
	static volatile int32_t t42 = 564;

	t42 = ((x189==x190)*(x191/x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x194 = 26500U;
	int64_t x195 = 217042LL;
	volatile int32_t x196 = INT32_MIN;

	t43 = ((x193==x194)*(x195/x196));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MIN;
	volatile int64_t x200 = INT64_MAX;
	int64_t t44 = 651839521294009LL;

	t44 = ((x197==x198)*(x199/x200));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x202 = 58863;
	static uint8_t x203 = 50U;
	int8_t x204 = 5;
	int32_t t45 = -5;

	t45 = ((x201==x202)*(x203/x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = 700740599LLU;
	uint64_t x206 = 12074990597732LLU;
	uint8_t x207 = 0U;
	volatile int32_t t46 = 200643;

	t46 = ((x205==x206)*(x207/x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x212 = 29U;
	static uint32_t t47 = 4314060U;

	t47 = ((x209==x210)*(x211/x212));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x213 = UINT64_MAX;
	static int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MAX;
	volatile int32_t t48 = -2337581;

	t48 = ((x213==x214)*(x215/x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x217 = INT8_MIN;
	uint64_t x220 = 5LLU;
	volatile uint64_t t49 = 81604795385171962LLU;

	t49 = ((x217==x218)*(x219/x220));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x221 = INT32_MAX;
	int8_t x222 = 29;
	int8_t x223 = INT8_MIN;
	int8_t x224 = -1;

	t50 = ((x221==x222)*(x223/x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x225 = -1;
	int64_t x227 = -2LL;
	volatile int8_t x228 = 41;
	static volatile int64_t t51 = 7716LL;

	t51 = ((x225==x226)*(x227/x228));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x229 = 0U;
	volatile int16_t x230 = INT16_MIN;
	volatile uint8_t x231 = UINT8_MAX;

	t52 = ((x229==x230)*(x231/x232));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -1;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = -4;
	volatile int32_t t53 = -673638;

	t53 = ((x233==x234)*(x235/x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x237 = UINT16_MAX;
	int32_t x238 = INT32_MIN;
	int32_t x240 = INT32_MAX;
	int32_t t54 = 39794704;

	t54 = ((x237==x238)*(x239/x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MIN;
	int32_t x243 = -1;
	int8_t x244 = INT8_MIN;

	t55 = ((x241==x242)*(x243/x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = 16U;
	volatile uint64_t x246 = 414LLU;
	int32_t x247 = INT32_MAX;
	volatile int64_t t56 = -11113LL;

	t56 = ((x245==x246)*(x247/x248));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = 2U;
	static volatile int16_t x250 = INT16_MIN;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = -1;

	t57 = ((x249==x250)*(x251/x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = INT8_MAX;
	uint16_t x254 = 879U;
	uint16_t x255 = UINT16_MAX;
	int32_t t58 = -102253;

	t58 = ((x253==x254)*(x255/x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = INT8_MIN;
	uint16_t x260 = UINT16_MAX;
	int32_t t59 = -138699;

	t59 = ((x257==x258)*(x259/x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x262 = INT32_MAX;
	int8_t x264 = 1;
	int32_t t60 = -5023045;

	t60 = ((x261==x262)*(x263/x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = INT16_MIN;
	uint32_t x266 = 1400138008U;
	int64_t x268 = -128282132086960LL;
	volatile int64_t t61 = -21177036567LL;

	t61 = ((x265==x266)*(x267/x268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = 1582;
	int16_t x271 = INT16_MAX;
	int64_t x272 = INT64_MIN;
	static volatile int64_t t62 = -1LL;

	t62 = ((x269==x270)*(x271/x272));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 63U;
	int64_t x274 = INT64_MIN;
	static uint8_t x275 = 7U;
	volatile uint32_t t63 = 205U;

	t63 = ((x273==x274)*(x275/x276));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t t64 = -119;

	t64 = ((x277==x278)*(x279/x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = 241U;
	int8_t x282 = 1;
	int64_t x284 = INT64_MAX;
	int64_t t65 = 2038401LL;

	t65 = ((x281==x282)*(x283/x284));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	static int16_t x287 = INT16_MAX;
	int16_t x288 = INT16_MAX;
	int32_t t66 = 1051830742;

	t66 = ((x285==x286)*(x287/x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = 3LL;
	int32_t x290 = 1311701;
	static int32_t x291 = INT32_MIN;
	uint8_t x292 = 3U;
	volatile int32_t t67 = 279;

	t67 = ((x289==x290)*(x291/x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = -47049097;
	static int64_t x294 = INT64_MIN;
	uint32_t x295 = 504232U;
	uint16_t x296 = 273U;
	uint32_t t68 = 1U;

	t68 = ((x293==x294)*(x295/x296));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = 1315;
	static int64_t x299 = INT64_MIN;
	static int64_t x300 = 6718641LL;
	int64_t t69 = -4179151916LL;

	t69 = ((x297==x298)*(x299/x300));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MIN;
	int16_t x304 = -1;
	static int32_t t70 = 7955487;

	t70 = ((x301==x302)*(x303/x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MAX;
	uint16_t x308 = 5070U;
	volatile uint32_t t71 = 1005U;

	t71 = ((x305==x306)*(x307/x308));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = 30989U;
	static uint8_t x310 = UINT8_MAX;
	int64_t x312 = -822298488365625LL;
	int64_t t72 = -3626554044364194LL;

	t72 = ((x309==x310)*(x311/x312));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = INT32_MIN;
	int32_t t73 = -62271;

	t73 = ((x313==x314)*(x315/x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x319 = 7;
	volatile int32_t t74 = 18;

	t74 = ((x317==x318)*(x319/x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x322 = 3U;
	int32_t x323 = INT32_MAX;
	volatile int32_t t75 = 962;

	t75 = ((x321==x322)*(x323/x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x327 = INT8_MAX;
	uint16_t x328 = 15630U;
	volatile int32_t t76 = 118108;

	t76 = ((x325==x326)*(x327/x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = -1;
	uint16_t x330 = 12U;
	uint32_t x331 = 200291U;
	uint32_t x332 = 5984619U;
	volatile uint32_t t77 = 458163U;

	t77 = ((x329==x330)*(x331/x332));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int32_t x335 = INT32_MAX;
	volatile int64_t t78 = 4LL;

	t78 = ((x333==x334)*(x335/x336));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MAX;
	static int32_t x340 = -1;
	int64_t t79 = -262104834214823LL;

	t79 = ((x337==x338)*(x339/x340));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x341 = 10U;
	uint8_t x342 = 0U;
	int64_t x344 = -3654LL;
	static volatile uint64_t t80 = 1040075209010702LLU;

	t80 = ((x341==x342)*(x343/x344));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 5U;
	uint8_t x347 = 3U;
	volatile int32_t t81 = -8078594;

	t81 = ((x345==x346)*(x347/x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = UINT16_MAX;
	volatile int64_t t82 = 58394922698173LL;

	t82 = ((x349==x350)*(x351/x352));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x353 = -1;
	int64_t x354 = 50674LL;
	static uint16_t x355 = 7U;
	int32_t x356 = 20;
	static volatile int32_t t83 = 26;

	t83 = ((x353==x354)*(x355/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x358 = INT64_MIN;
	volatile int64_t x359 = 41075540175LL;
	static int64_t t84 = -132009227LL;

	t84 = ((x357==x358)*(x359/x360));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = 0;
	static volatile uint16_t x363 = UINT16_MAX;
	static volatile uint64_t x364 = 303360710419023279LLU;

	t85 = ((x361==x362)*(x363/x364));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = -6029499;
	volatile uint8_t x366 = 31U;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = UINT64_MAX;

	t86 = ((x365==x366)*(x367/x368));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = -30;
	int8_t x370 = INT8_MAX;
	int16_t x371 = -64;
	uint16_t x372 = 118U;
	volatile int32_t t87 = 101280;

	t87 = ((x369==x370)*(x371/x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x373 = 40U;
	static volatile int64_t x374 = -1LL;
	uint16_t x375 = UINT16_MAX;
	uint16_t x376 = UINT16_MAX;

	t88 = ((x373==x374)*(x375/x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x377 = INT16_MIN;
	uint32_t x379 = 2391446U;
	uint8_t x380 = UINT8_MAX;

	t89 = ((x377==x378)*(x379/x380));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x381 = 984U;
	int16_t x382 = INT16_MIN;
	int64_t x383 = 7601173419721089LL;
	static volatile int16_t x384 = 442;
	volatile int64_t t90 = 959624884689LL;

	t90 = ((x381==x382)*(x383/x384));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = 6610907372988184LLU;
	int64_t x386 = INT64_MIN;
	static uint16_t x387 = 15244U;
	volatile int32_t t91 = 1;

	t91 = ((x385==x386)*(x387/x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 60966420U;
	volatile int16_t x390 = -27;
	uint8_t x391 = UINT8_MAX;
	static volatile uint16_t x392 = 53U;

	t92 = ((x389==x390)*(x391/x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x393 = INT32_MAX;
	uint32_t x394 = 1U;
	uint32_t x395 = UINT32_MAX;
	static volatile uint32_t t93 = 119426U;

	t93 = ((x393==x394)*(x395/x396));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MIN;
	volatile int8_t x399 = 3;
	int8_t x400 = -1;
	static volatile int32_t t94 = -688587;

	t94 = ((x397==x398)*(x399/x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MIN;
	int64_t x403 = INT64_MIN;
	int64_t t95 = -22664191072785482LL;

	t95 = ((x401==x402)*(x403/x404));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MAX;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	volatile uint64_t t96 = 6LLU;

	t96 = ((x405==x406)*(x407/x408));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x409 = 12497740U;
	static int64_t x411 = 1560LL;
	volatile int8_t x412 = INT8_MIN;
	volatile int64_t t97 = -2092707310LL;

	t97 = ((x409==x410)*(x411/x412));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = UINT32_MAX;
	volatile uint64_t x414 = 3188592277618340249LLU;
	int8_t x415 = INT8_MAX;
	static int64_t x416 = INT64_MAX;
	int64_t t98 = -249383LL;

	t98 = ((x413==x414)*(x415/x416));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x417 = 56;
	static int32_t x418 = -1;
	volatile uint16_t x419 = 555U;
	int64_t x420 = -1LL;
	int64_t t99 = 4033690180LL;

	t99 = ((x417==x418)*(x419/x420));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

