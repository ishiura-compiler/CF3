#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x21 = UINT8_MAX;
uint32_t x23 = 1120862U;
uint64_t t2 = 19975575115537256LLU;
volatile uint16_t x37 = 2U;
uint64_t x43 = 34904440645456896LLU;
uint64_t x45 = UINT64_MAX;
int8_t x47 = INT8_MAX;
int64_t x85 = -1LL;
int8_t x87 = INT8_MIN;
volatile int32_t t15 = -1596;
volatile uint8_t x107 = 9U;
uint32_t x128 = UINT32_MAX;
uint32_t x132 = 25284915U;
int8_t x133 = INT8_MIN;
volatile uint16_t x134 = 3U;
volatile uint32_t t24 = 426U;
int8_t x148 = -2;
int32_t x149 = INT32_MIN;
int64_t t28 = -1118LL;
static int8_t x156 = INT8_MIN;
static volatile uint64_t t30 = 1553492999804556618LLU;
volatile int16_t x165 = 510;
int32_t x167 = -1;
int32_t t33 = INT32_MIN;
int16_t x176 = INT16_MIN;
uint32_t x179 = 3211U;
int16_t x185 = 16;
static int32_t x187 = -807435;
int64_t x192 = 5177970LL;
volatile int64_t t38 = 69591LL;
uint32_t x201 = 94029512U;
int16_t x205 = -1;
int64_t x206 = -1LL;
int32_t t40 = 2573604;
int16_t x211 = -1;
volatile int16_t x214 = -1;
int64_t x215 = INT64_MIN;
uint64_t t42 = 7809120LLU;
static uint64_t x218 = UINT64_MAX;
uint16_t x221 = 820U;
int16_t x222 = -1;
static uint8_t x223 = UINT8_MAX;
volatile uint16_t x224 = 3U;
static int32_t t44 = -24474982;
static volatile int32_t t45 = -106;
volatile uint16_t x232 = UINT16_MAX;
volatile int16_t x238 = 1025;
int8_t x240 = -1;
uint64_t t48 = 11229715LLU;
int16_t x254 = INT16_MIN;
uint8_t x256 = UINT8_MAX;
static volatile uint16_t x258 = UINT16_MAX;
volatile int32_t t53 = 7899;
int64_t x273 = 6892622862610LL;
int16_t x274 = INT16_MIN;
static volatile int32_t x287 = -1;
int32_t x294 = -16;
int32_t t61 = -29178648;
int8_t x315 = INT8_MAX;
int16_t x318 = 54;
volatile uint8_t x321 = UINT8_MAX;
volatile int32_t x323 = INT32_MIN;
volatile int32_t x330 = INT32_MIN;
int8_t x331 = INT8_MIN;
static int32_t x333 = INT32_MIN;
static volatile int16_t x345 = -2287;
int16_t x346 = 44;
uint8_t x349 = 2U;
volatile int16_t x354 = INT16_MIN;
volatile uint16_t x356 = UINT16_MAX;
static volatile int64_t t72 = -10LL;
static int8_t x359 = 0;
volatile int64_t t73 = -171529LL;
int16_t x362 = -3;
static uint8_t x363 = UINT8_MAX;
volatile uint64_t x366 = 222821859LLU;
volatile int32_t t77 = 231749306;
int16_t x386 = INT16_MAX;
int16_t x396 = 24;
int8_t x397 = INT8_MIN;
int64_t x399 = 71522900790795LL;
volatile int32_t t81 = 1;
uint32_t x401 = 2987813U;
static volatile int64_t x402 = -2043193279818LL;
static uint64_t x417 = UINT64_MAX;
volatile int8_t x419 = INT8_MIN;
volatile int16_t x425 = -1;
static volatile int64_t t89 = INT64_MAX;
int32_t x449 = -1;
int32_t x450 = 137;
int32_t t91 = -103501;
uint64_t x454 = 9363LLU;
uint64_t x455 = 124934947406LLU;
uint32_t x470 = 11481846U;
uint8_t x474 = 5U;
int32_t x475 = INT32_MIN;
int32_t x476 = -1;
int32_t x477 = INT32_MIN;
static uint16_t x492 = UINT16_MAX;
int32_t t98 = -7577;


void f0(void) {
	int8_t x5 = 0;
	int32_t x6 = -1;
	int32_t x7 = -1;
	int16_t x8 = 0;
	int32_t t0 = -278;

	t0 = (x5*((x6<x7)-x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = INT64_MIN;
	static volatile int32_t x18 = INT32_MAX;
	uint16_t x19 = 0U;
	int8_t x20 = -1;
	volatile int64_t t1 = INT64_MIN;

	t1 = (x17*((x18<x19)-x20));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x22 = 1876U;
	uint64_t x24 = 77LLU;

	t2 = (x21*((x22<x23)-x24));

	if (t2 != 18446744073709532236LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x25 = 284166978LLU;
	uint8_t x26 = 0U;
	int64_t x27 = INT64_MIN;
	static int8_t x28 = -1;
	volatile uint64_t t3 = 4259983431265LLU;

	t3 = (x25*((x26<x27)-x28));

	if (t3 != 284166978LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = 16363U;
	static int16_t x30 = -25;
	uint64_t x31 = 24562315222998284LLU;
	int8_t x32 = 0;
	uint32_t t4 = 0U;

	t4 = (x29*((x30<x31)-x32));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = UINT32_MAX;
	uint32_t t5 = 51U;

	t5 = (x33*((x34<x35)-x36));

	if (t5 != 255U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x38 = UINT16_MAX;
	uint8_t x39 = 19U;
	static uint64_t x40 = 215416279681LLU;
	static uint64_t t6 = 724576593LLU;

	t6 = (x37*((x38<x39)-x40));

	if (t6 != 18446743642876992254LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = INT16_MIN;
	int32_t x42 = -1;
	int16_t x44 = INT16_MIN;
	int32_t t7 = 0;

	t7 = (x41*((x42<x43)-x44));

	if (t7 != -1073741824) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x46 = INT16_MIN;
	int32_t x48 = -1;
	uint64_t t8 = 4742LLU;

	t8 = (x45*((x46<x47)-x48));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x57 = 3U;
	volatile int64_t x58 = 17615313717171454LL;
	int32_t x59 = -60292;
	int8_t x60 = INT8_MIN;
	volatile int32_t t9 = -681990;

	t9 = (x57*((x58<x59)-x60));

	if (t9 != 384) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x65 = 14058001U;
	uint64_t x66 = 384793891LLU;
	uint16_t x67 = 215U;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t10 = 6298U;

	t10 = (x65*((x66<x67)-x68));

	if (t10 != 14058001U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = INT8_MAX;
	int16_t x70 = 3700;
	uint32_t x71 = 14U;
	int64_t x72 = 51LL;
	volatile int64_t t11 = -3080174459734356LL;

	t11 = (x69*((x70<x71)-x72));

	if (t11 != -6477LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = UINT64_MAX;
	int32_t x74 = 222173979;
	int16_t x75 = -74;
	int8_t x76 = INT8_MIN;
	uint64_t t12 = 628139845880LLU;

	t12 = (x73*((x74<x75)-x76));

	if (t12 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x81 = 1063558454731052879LL;
	int16_t x82 = INT16_MIN;
	static volatile int32_t x83 = -1;
	uint8_t x84 = 0U;
	volatile int64_t t13 = -127339604LL;

	t13 = (x81*((x82<x83)-x84));

	if (t13 != 1063558454731052879LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x86 = INT16_MIN;
	int64_t x88 = -1LL;
	int64_t t14 = -3312LL;

	t14 = (x85*((x86<x87)-x88));

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = 71U;
	int16_t x90 = -7;
	volatile int32_t x91 = -145918155;
	int16_t x92 = INT16_MIN;

	t15 = (x89*((x90<x91)-x92));

	if (t15 != 2326528) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	static int8_t x95 = INT8_MAX;
	int16_t x96 = INT16_MIN;
	int32_t t16 = -379178861;

	t16 = (x93*((x94<x95)-x96));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x98 = 14394669335728LL;
	uint16_t x99 = 1436U;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t17 = 1131927;

	t17 = (x97*((x98<x99)-x100));

	if (t17 != 32640) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x101 = 17558700U;
	int16_t x102 = -70;
	uint64_t x103 = UINT64_MAX;
	uint16_t x104 = UINT16_MAX;
	uint32_t t18 = 1555562388U;

	t18 = (x101*((x102<x103)-x104));

	if (t18 != 359389528U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x105 = INT64_MIN;
	uint64_t x106 = UINT64_MAX;
	volatile int16_t x108 = -1;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x105*((x106<x107)-x108));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = 4852231175LLU;
	volatile int64_t x110 = 3680249817473821177LL;
	int64_t x111 = -1LL;
	volatile int16_t x112 = INT16_MAX;
	static volatile uint64_t t20 = 155189080374LLU;

	t20 = (x109*((x110<x111)-x112));

	if (t20 != 18446585080650640391LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = 3033233969153LLU;
	volatile uint16_t x114 = 7468U;
	static int16_t x115 = -1;
	static volatile uint16_t x116 = 12089U;
	volatile uint64_t t21 = 828LLU;

	t21 = (x113*((x114<x115)-x116));

	if (t21 != 18410075308256460999LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = INT16_MIN;
	static volatile int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	volatile uint32_t t22 = 2U;

	t22 = (x125*((x126<x127)-x128));

	if (t22 != 4294934528U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MAX;
	int32_t x130 = INT32_MIN;
	volatile int8_t x131 = -3;
	volatile uint32_t t23 = 157399U;

	t23 = (x129*((x130<x131)-x132));

	if (t23 != 417911090U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x135 = -160134;
	uint32_t x136 = 216757303U;

	t24 = (x133*((x134<x135)-x136));

	if (t24 != 1975131008U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile int8_t x138 = -1;
	static volatile int16_t x139 = INT16_MAX;
	static uint64_t x140 = 74615720470408092LLU;
	uint64_t t25 = 468LLU;

	t25 = (x137*((x138<x139)-x140));

	if (t25 != 2064396635928002560LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x141 = 9U;
	uint64_t x142 = UINT64_MAX;
	static volatile int64_t x143 = INT64_MIN;
	volatile int64_t x144 = 16331731012LL;
	static volatile int64_t t26 = -1690616628LL;

	t26 = (x141*((x142<x143)-x144));

	if (t26 != -146985579108LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MAX;
	uint8_t x146 = UINT8_MAX;
	volatile int64_t x147 = -7414650LL;
	static int32_t t27 = 5199;

	t27 = (x145*((x146<x147)-x148));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x150 = 0U;
	int64_t x151 = INT64_MAX;
	int64_t x152 = 1658LL;

	t28 = (x149*((x150<x151)-x152));

	if (t28 != 3558380404736LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = -1;
	int16_t x154 = 333;
	int8_t x155 = -1;
	static int32_t t29 = -50836;

	t29 = (x153*((x154<x155)-x156));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = UINT64_MAX;
	uint16_t x158 = 22U;
	int16_t x159 = 0;
	int64_t x160 = 43232LL;

	t30 = (x157*((x158<x159)-x160));

	if (t30 != 43232LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = -117487379663675LL;
	int32_t x162 = INT32_MIN;
	volatile uint16_t x163 = 0U;
	volatile uint8_t x164 = 2U;
	int64_t t31 = -464791547LL;

	t31 = (x161*((x162<x163)-x164));

	if (t31 != 117487379663675LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x166 = 644U;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t32 = 28422871U;

	t32 = (x165*((x166<x167)-x168));

	if (t32 != 1020U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MAX;
	static volatile uint16_t x171 = 24U;
	int16_t x172 = -1;

	t33 = (x169*((x170<x171)-x172));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = 2;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MAX;
	volatile int32_t t34 = 149464;

	t34 = (x173*((x174<x175)-x176));

	if (t34 != 65538) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x177 = -157705;
	static int8_t x178 = 0;
	uint32_t x180 = 2239195U;
	uint32_t t35 = 43508U;

	t35 = (x177*((x178<x179)-x180));

	if (t35 != 944771498U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = 283U;
	volatile int64_t x182 = INT64_MIN;
	volatile int64_t x183 = INT64_MIN;
	static uint8_t x184 = 3U;
	volatile int32_t t36 = 127;

	t36 = (x181*((x182<x183)-x184));

	if (t36 != -849) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x186 = INT64_MIN;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t37 = 1LLU;

	t37 = (x185*((x186<x187)-x188));

	if (t37 != 32LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	volatile int32_t x191 = INT32_MAX;

	t38 = (x189*((x190<x191)-x192));

	if (t38 != 5177969LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x202 = -89;
	int64_t x203 = -90100LL;
	uint16_t x204 = 11U;
	uint32_t t39 = 28660U;

	t39 = (x201*((x202<x203)-x204));

	if (t39 != 3260642664U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x207 = -1;
	volatile int8_t x208 = INT8_MAX;

	t40 = (x205*((x206<x207)-x208));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = -1;
	int64_t x210 = INT64_MIN;
	int16_t x212 = -5448;
	volatile int32_t t41 = -249017;

	t41 = (x209*((x210<x211)-x212));

	if (t41 != -5449) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x213 = 2047831852LLU;
	volatile int32_t x216 = -788576299;

	t42 = (x213*((x214<x215)-x216));

	if (t42 != 1614871662824475748LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x217 = UINT32_MAX;
	uint64_t x219 = UINT64_MAX;
	static volatile uint8_t x220 = UINT8_MAX;
	static volatile uint32_t t43 = 1U;

	t43 = (x217*((x218<x219)-x220));

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {


	t44 = (x221*((x222<x223)-x224));

	if (t44 != -1640) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = -28;
	uint8_t x226 = UINT8_MAX;
	volatile int16_t x227 = INT16_MIN;
	static int32_t x228 = -1;

	t45 = (x225*((x226<x227)-x228));

	if (t45 != -28) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x229 = UINT32_MAX;
	static volatile uint8_t x230 = 13U;
	int8_t x231 = INT8_MIN;
	volatile uint32_t t46 = 2036232U;

	t46 = (x229*((x230<x231)-x232));

	if (t46 != 65535U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x233 = 4816U;
	int32_t x234 = -31363291;
	int8_t x235 = 1;
	static int8_t x236 = INT8_MAX;
	volatile uint32_t t47 = 181235U;

	t47 = (x233*((x234<x235)-x236));

	if (t47 != 4294360480U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x237 = 1131388860LLU;
	static uint64_t x239 = 2572708LLU;

	t48 = (x237*((x238<x239)-x240));

	if (t48 != 2262777720LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = 7616961857920LL;
	int32_t x242 = INT32_MIN;
	static int16_t x243 = -20;
	int8_t x244 = 10;
	int64_t t49 = -2499972058722095LL;

	t49 = (x241*((x242<x243)-x244));

	if (t49 != -68552656721280LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x245 = 30;
	volatile int64_t x246 = INT64_MIN;
	int32_t x247 = -1;
	static int16_t x248 = 1085;
	volatile int32_t t50 = 0;

	t50 = (x245*((x246<x247)-x248));

	if (t50 != -32520) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x249 = 48634234LLU;
	int64_t x250 = INT64_MAX;
	volatile uint64_t x251 = 38691143591256479LLU;
	static int8_t x252 = INT8_MIN;
	static volatile uint64_t t51 = 12207522LLU;

	t51 = (x249*((x250<x251)-x252));

	if (t51 != 6225181952LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int8_t x255 = INT8_MIN;
	int32_t t52 = -143895613;

	t52 = (x253*((x254<x255)-x256));

	if (t52 != -16645890) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x257 = 1U;
	volatile uint8_t x259 = 51U;
	int32_t x260 = INT32_MAX;

	t53 = (x257*((x258<x259)-x260));

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x261 = 224U;
	static volatile int8_t x262 = INT8_MAX;
	uint16_t x263 = 59U;
	int16_t x264 = -133;
	int32_t t54 = -494;

	t54 = (x261*((x262<x263)-x264));

	if (t54 != 29792) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = 147U;
	int8_t x266 = INT8_MAX;
	volatile uint64_t x267 = 1105322369900LLU;
	int8_t x268 = -3;
	volatile int32_t t55 = 482887952;

	t55 = (x265*((x266<x267)-x268));

	if (t55 != 588) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x275 = 352U;
	int64_t x276 = -77294LL;
	volatile int64_t t56 = -570988285274672768LL;

	t56 = (x273*((x274<x275)-x276));

	if (t56 != 532758391542577340LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x281 = 38727LLU;
	static int8_t x282 = INT8_MAX;
	volatile int16_t x283 = INT16_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile uint64_t t57 = 6382LLU;

	t57 = (x281*((x282<x283)-x284));

	if (t57 != 18446744073699714958LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = -1;
	static int32_t x286 = 38049691;
	int8_t x288 = -1;
	static volatile int32_t t58 = 1;

	t58 = (x285*((x286<x287)-x288));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x293 = UINT64_MAX;
	volatile int16_t x295 = 6759;
	uint16_t x296 = UINT16_MAX;
	volatile uint64_t t59 = 4733402149599526873LLU;

	t59 = (x293*((x294<x295)-x296));

	if (t59 != 65534LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x297 = 56LLU;
	uint64_t x298 = 331678541435LLU;
	uint64_t x299 = 8689877252114LLU;
	int64_t x300 = INT64_MAX;
	uint64_t t60 = 3088516809118LLU;

	t60 = (x297*((x298<x299)-x300));

	if (t60 != 112LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x301 = UINT16_MAX;
	static int64_t x302 = INT64_MIN;
	static uint8_t x303 = 5U;
	uint8_t x304 = 21U;

	t61 = (x301*((x302<x303)-x304));

	if (t61 != -1310700) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x305 = UINT8_MAX;
	static volatile int64_t x306 = -1LL;
	volatile uint64_t x307 = 384499652531589448LLU;
	volatile uint8_t x308 = UINT8_MAX;
	static int32_t t62 = 737;

	t62 = (x305*((x306<x307)-x308));

	if (t62 != -65025) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x309 = 14859U;
	int16_t x310 = INT16_MIN;
	static int64_t x311 = INT64_MIN;
	uint64_t x312 = 374LLU;
	volatile uint64_t t63 = 25691850313LLU;

	t63 = (x309*((x310<x311)-x312));

	if (t63 != 18446744073703994350LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	static int8_t x316 = INT8_MIN;
	static int32_t t64 = -6394673;

	t64 = (x313*((x314<x315)-x316));

	if (t64 != -129) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x317 = 357LLU;
	static int32_t x319 = INT32_MIN;
	volatile uint64_t x320 = UINT64_MAX;
	volatile uint64_t t65 = 2LLU;

	t65 = (x317*((x318<x319)-x320));

	if (t65 != 357LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x322 = 176106U;
	volatile int8_t x324 = -1;
	int32_t t66 = -1746254;

	t66 = (x321*((x322<x323)-x324));

	if (t66 != 510) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x329 = -15339;
	static int8_t x332 = 40;
	volatile int32_t t67 = -16054;

	t67 = (x329*((x330<x331)-x332));

	if (t67 != 598221) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x334 = -213;
	int8_t x335 = INT8_MIN;
	static int8_t x336 = 0;
	static volatile int32_t t68 = INT32_MIN;

	t68 = (x333*((x334<x335)-x336));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x341 = 3U;
	uint8_t x342 = 0U;
	static volatile int32_t x343 = -1;
	int16_t x344 = 242;
	int32_t t69 = 301;

	t69 = (x341*((x342<x343)-x344));

	if (t69 != -726) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x347 = INT32_MIN;
	volatile int8_t x348 = -13;
	volatile int32_t t70 = 6;

	t70 = (x345*((x346<x347)-x348));

	if (t70 != -29731) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x350 = INT32_MIN;
	int64_t x351 = -20277132LL;
	volatile int8_t x352 = -50;
	volatile int32_t t71 = 4;

	t71 = (x349*((x350<x351)-x352));

	if (t71 != 102) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = 1240904LL;
	int32_t x355 = -1;

	t72 = (x353*((x354<x355)-x356));

	if (t72 != -81321402736LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x357 = -1LL;
	static volatile int32_t x358 = INT32_MIN;
	int8_t x360 = -1;

	t73 = (x357*((x358<x359)-x360));

	if (t73 != -2LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x361 = INT32_MAX;
	static volatile uint64_t x364 = UINT64_MAX;
	uint64_t t74 = 1LLU;

	t74 = (x361*((x362<x363)-x364));

	if (t74 != 4294967294LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x365 = INT64_MIN;
	static uint64_t x367 = 28LLU;
	static int16_t x368 = -1;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x365*((x366<x367)-x368));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x373 = 1659U;
	int32_t x374 = -59728476;
	int64_t x375 = INT64_MAX;
	volatile int8_t x376 = INT8_MAX;
	volatile int32_t t76 = -213;

	t76 = (x373*((x374<x375)-x376));

	if (t76 != -209034) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = -1;
	static uint8_t x379 = 1U;
	volatile int16_t x380 = -1;

	t77 = (x377*((x378<x379)-x380));

	if (t77 != -256) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x381 = UINT8_MAX;
	static uint16_t x382 = 14U;
	volatile uint64_t x383 = 104730207680LLU;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t78 = -28;

	t78 = (x381*((x382<x383)-x384));

	if (t78 != 8356095) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x385 = INT64_MIN;
	int32_t x387 = INT32_MAX;
	volatile uint64_t x388 = UINT64_MAX;
	uint64_t t79 = 4204LLU;

	t79 = (x385*((x386<x387)-x388));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x393 = -1293398995208LL;
	int16_t x394 = -23;
	static int32_t x395 = -24927;
	static volatile int64_t t80 = 338944036875899157LL;

	t80 = (x393*((x394<x395)-x396));

	if (t80 != 31041575884992LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x398 = INT64_MAX;
	int32_t x400 = -94;

	t81 = (x397*((x398<x399)-x400));

	if (t81 != -12032) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x403 = 12074U;
	static uint64_t x404 = 16269LLU;
	uint64_t t82 = 871693LLU;

	t82 = (x401*((x402<x403)-x404));

	if (t82 != 18446744025103809732LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x405 = -1;
	static int8_t x406 = INT8_MIN;
	volatile int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t83 = 249;

	t83 = (x405*((x406<x407)-x408));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x409 = 1504046550569331552LLU;
	static int32_t x410 = -24593100;
	uint64_t x411 = 20016LLU;
	uint64_t x412 = UINT64_MAX;
	static uint64_t t84 = 103628LLU;

	t84 = (x409*((x410<x411)-x412));

	if (t84 != 1504046550569331552LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x418 = 71237965298716LLU;
	int64_t x420 = -1LL;
	static volatile uint64_t t85 = 0LLU;

	t85 = (x417*((x418<x419)-x420));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x421 = INT16_MIN;
	static int8_t x422 = INT8_MIN;
	static int64_t x423 = INT64_MIN;
	static volatile uint64_t x424 = UINT64_MAX;
	volatile uint64_t t86 = 257826077397130LLU;

	t86 = (x421*((x422<x423)-x424));

	if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x426 = INT8_MIN;
	static int32_t x427 = INT32_MAX;
	int32_t x428 = -1;
	volatile int32_t t87 = 7807;

	t87 = (x425*((x426<x427)-x428));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x429 = INT32_MIN;
	int16_t x430 = 6156;
	volatile int8_t x431 = 1;
	int64_t x432 = -1LL;
	static int64_t t88 = 3LL;

	t88 = (x429*((x430<x431)-x432));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x441 = INT64_MAX;
	uint64_t x442 = UINT64_MAX;
	int64_t x443 = INT64_MIN;
	int16_t x444 = -1;

	t89 = (x441*((x442<x443)-x444));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x445 = INT16_MAX;
	uint16_t x446 = 3U;
	int32_t x447 = -1;
	int8_t x448 = INT8_MAX;
	static volatile int32_t t90 = -253472;

	t90 = (x445*((x446<x447)-x448));

	if (t90 != -4161409) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x451 = UINT32_MAX;
	int32_t x452 = -8384852;

	t91 = (x449*((x450<x451)-x452));

	if (t91 != -8384853) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x453 = INT16_MAX;
	int8_t x456 = INT8_MIN;
	static int32_t t92 = 55;

	t92 = (x453*((x454<x455)-x456));

	if (t92 != 4226943) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x461 = INT16_MAX;
	static int64_t x462 = -1237367631LL;
	volatile int64_t x463 = INT64_MAX;
	int16_t x464 = 1;
	static volatile int32_t t93 = 14;

	t93 = (x461*((x462<x463)-x464));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x465 = UINT64_MAX;
	volatile int8_t x466 = INT8_MAX;
	int8_t x467 = 0;
	static int32_t x468 = -1;
	uint64_t t94 = UINT64_MAX;

	t94 = (x465*((x466<x467)-x468));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x469 = UINT8_MAX;
	static int8_t x471 = INT8_MAX;
	uint64_t x472 = 2081602136959491LLU;
	uint64_t t95 = 5615007824390LLU;

	t95 = (x469*((x470<x471)-x472));

	if (t95 != 17915935528784881411LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = INT32_MIN;
	int32_t t96 = INT32_MIN;

	t96 = (x473*((x474<x475)-x476));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x478 = INT32_MIN;
	int64_t x479 = INT64_MIN;
	uint32_t x480 = UINT32_MAX;
	uint32_t t97 = 482U;

	t97 = (x477*((x478<x479)-x480));

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x489 = -7;
	int16_t x490 = 1;
	uint64_t x491 = UINT64_MAX;

	t98 = (x489*((x490<x491)-x492));

	if (t98 != 458738) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x497 = 4U;
	int32_t x498 = 2;
	uint8_t x499 = UINT8_MAX;
	volatile uint16_t x500 = UINT16_MAX;
	static volatile int32_t t99 = -136172225;

	t99 = (x497*((x498<x499)-x500));

	if (t99 != -262136) { NG(); } else { ; }
	
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

