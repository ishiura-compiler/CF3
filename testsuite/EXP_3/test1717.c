#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
static uint32_t x2 = UINT32_MAX;
volatile uint32_t t0 = 0U;
int16_t x6 = -62;
uint64_t x7 = UINT64_MAX;
volatile uint64_t t1 = UINT64_MAX;
uint8_t x11 = 1U;
static uint64_t x25 = 61024LLU;
uint64_t x26 = 103234262431937LLU;
volatile int32_t x27 = 49;
uint64_t t3 = 941LLU;
static uint32_t x30 = 11U;
int8_t x40 = -1;
static uint32_t x43 = UINT32_MAX;
uint16_t x44 = 3U;
static int64_t x47 = 67679573350588LL;
volatile int16_t x61 = INT16_MAX;
static volatile int64_t t8 = 1196LL;
volatile int8_t x89 = INT8_MAX;
static uint32_t x90 = 47834U;
volatile int32_t t13 = 837;
static int64_t t15 = 243521255689702LL;
static uint32_t x113 = 4037393U;
static volatile int32_t x116 = INT32_MIN;
int16_t x136 = 1;
static volatile uint64_t t21 = 0LLU;
int8_t x138 = -1;
uint32_t t23 = 39420U;
int64_t x150 = -2466LL;
uint64_t t24 = 47842457107LLU;
uint64_t x153 = 290LLU;
static int64_t x155 = INT64_MAX;
uint64_t x164 = UINT64_MAX;
int16_t x165 = INT16_MIN;
int16_t x168 = INT16_MIN;
volatile int64_t x184 = INT64_MIN;
int64_t t29 = 187143730LL;
int8_t x189 = -1;
uint64_t x192 = 16973LLU;
static uint16_t x205 = 17288U;
static volatile int64_t x216 = -1LL;
volatile int8_t x222 = INT8_MIN;
int32_t t37 = 3;
int16_t x242 = INT16_MIN;
volatile uint64_t x243 = 7814502LLU;
volatile int64_t x250 = -161054457143502LL;
static volatile int8_t x257 = INT8_MIN;
uint16_t x260 = 62U;
static int8_t x275 = -1;
uint16_t x276 = 5U;
uint64_t t48 = 8368520919850LLU;
int32_t x294 = -1;
volatile uint64_t x305 = 106575LLU;
static volatile uint64_t t55 = 692090LLU;
volatile int16_t x311 = -1;
int64_t t57 = 52033358821455253LL;
static int8_t x321 = -40;
int32_t x323 = -1;
int64_t x331 = INT64_MIN;
volatile int64_t x335 = 218936LL;
volatile int16_t x336 = INT16_MIN;
int64_t t61 = -60443280741434728LL;
static uint32_t x340 = 7U;
uint64_t t63 = 995426953LLU;
int32_t x349 = -1;
uint64_t x352 = UINT64_MAX;
uint64_t x356 = 250554027491845439LLU;
int32_t x364 = -1;
volatile int64_t t70 = -7LL;
int64_t x379 = -1LL;
volatile int32_t x396 = -1;
int64_t t74 = -123367376LL;
uint16_t x401 = 0U;
uint64_t x406 = 6352667349LLU;
uint64_t t78 = 102386742847809LLU;
int64_t x425 = -1LL;
static int16_t x444 = 0;
static volatile int64_t t83 = 2117321197825474815LL;
volatile int8_t x445 = -1;
uint8_t x447 = 1U;
int32_t x462 = INT32_MAX;
uint64_t x470 = 1600071LLU;
static volatile int64_t t88 = -440899494LL;
static int8_t x481 = INT8_MAX;
uint64_t x483 = 4303LLU;
int8_t x498 = INT8_MAX;
int16_t x499 = INT16_MIN;
static volatile int8_t x501 = INT8_MAX;
int32_t x503 = -524464039;
int8_t x507 = -1;
volatile int8_t x508 = INT8_MIN;
static uint64_t x509 = 8126726119882551699LLU;
volatile uint64_t t95 = 8126392474890LLU;
static uint8_t x515 = UINT8_MAX;
uint64_t x524 = UINT64_MAX;
volatile int64_t x525 = INT64_MIN;
volatile int64_t x526 = 1LL;
int32_t x528 = 76818;
int32_t x531 = -1;


void f0(void) {
	volatile uint16_t x3 = 0U;
	static uint32_t x4 = UINT32_MAX;

	t0 = ((x1*x2)+(x3&x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 0;
	uint64_t x8 = UINT64_MAX;

	t1 = ((x5*x6)+(x7&x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint8_t x10 = 24U;
	int8_t x12 = INT8_MIN;
	static volatile int64_t t2 = 369277545485787LL;

	t2 = ((x9*x10)+(x11&x12));

	if (t2 != -24LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x28 = INT8_MAX;

	t3 = ((x25*x26)+(x27&x28));

	if (t3 != 6299767630646523537LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = 1U;
	uint64_t x31 = 3390704715397161LLU;
	uint32_t x32 = UINT32_MAX;
	volatile uint64_t t4 = 62614697479090LLU;

	t4 = ((x29*x30)+(x31&x32));

	if (t4 != 4128864308LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x37 = -1LL;
	static int16_t x38 = -1;
	static int64_t x39 = INT64_MIN;
	int64_t t5 = -4106414LL;

	t5 = ((x37*x38)+(x39&x40));

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x42 = 4180924722749993568LLU;
	volatile uint64_t t6 = 379LLU;

	t6 = ((x41*x42)+(x43&x44));

	if (t6 != 18243957699287371779LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = -21;
	uint8_t x46 = 17U;
	static int32_t x48 = INT32_MIN;
	static volatile int64_t t7 = 1LL;

	t7 = ((x45*x46)+(x47&x48));

	if (t7 != 67677947166363LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x62 = -1LL;
	static volatile int32_t x63 = 6;
	int8_t x64 = -1;

	t8 = ((x61*x62)+(x63&x64));

	if (t8 != -32761LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x69 = INT16_MIN;
	volatile uint32_t x70 = 14U;
	static uint16_t x71 = 2U;
	volatile int8_t x72 = 1;
	volatile uint32_t t9 = 155650U;

	t9 = ((x69*x70)+(x71&x72));

	if (t9 != 4294508544U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = -1;
	static volatile int16_t x82 = INT16_MIN;
	volatile int16_t x83 = -5;
	volatile uint16_t x84 = 6U;
	volatile int32_t t10 = 41494;

	t10 = ((x81*x82)+(x83&x84));

	if (t10 != 32770) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x85 = 17U;
	static uint64_t x86 = 230LLU;
	static int8_t x87 = INT8_MAX;
	uint16_t x88 = 0U;
	static uint64_t t11 = 113157198557LLU;

	t11 = ((x85*x86)+(x87&x88));

	if (t11 != 3910LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x91 = 818013065960LL;
	int16_t x92 = INT16_MIN;
	int64_t t12 = -25545865LL;

	t12 = ((x89*x90)+(x91&x92));

	if (t12 != 818019119654LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x97 = INT8_MIN;
	uint16_t x98 = 3126U;
	int8_t x99 = INT8_MAX;
	uint16_t x100 = 356U;

	t13 = ((x97*x98)+(x99&x100));

	if (t13 != -400028) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MAX;
	int16_t x103 = 0;
	volatile int32_t x104 = INT32_MIN;
	int32_t t14 = -2981;

	t14 = ((x101*x102)+(x103&x104));

	if (t14 != -1073709056) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = 1447493211574LL;
	static uint16_t x107 = 0U;
	int8_t x108 = -1;

	t15 = ((x105*x106)+(x107&x108));

	if (t15 != -47431457556856832LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x109 = INT16_MIN;
	int8_t x110 = INT8_MAX;
	uint64_t x111 = 60213946342361LLU;
	int8_t x112 = -40;
	volatile uint64_t t16 = 347083346298LLU;

	t16 = ((x109*x110)+(x111&x112));

	if (t16 != 60213942180824LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x114 = INT8_MIN;
	uint8_t x115 = UINT8_MAX;
	static volatile uint32_t t17 = 205451976U;

	t17 = ((x113*x114)+(x115&x116));

	if (t17 != 3778180992U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x117 = -1;
	int8_t x118 = -3;
	int8_t x119 = 0;
	int64_t x120 = -1LL;
	int64_t t18 = 4016101281LL;

	t18 = ((x117*x118)+(x119&x120));

	if (t18 != 3LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = 0;
	int16_t x124 = INT16_MIN;
	volatile int32_t t19 = 3;

	t19 = ((x121*x122)+(x123&x124));

	if (t19 != 4194304) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x125 = -1;
	volatile int64_t x126 = -1LL;
	int32_t x127 = -1;
	static volatile uint8_t x128 = UINT8_MAX;
	volatile int64_t t20 = -4514428426LL;

	t20 = ((x125*x126)+(x127&x128));

	if (t20 != 256LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x133 = 659U;
	static uint64_t x134 = 278127817776573LLU;
	static volatile int16_t x135 = INT16_MAX;

	t21 = ((x133*x134)+(x135&x136));

	if (t21 != 183286231914761608LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x137 = 4U;
	uint16_t x139 = 14U;
	int8_t x140 = 0;
	volatile int32_t t22 = 1907;

	t22 = ((x137*x138)+(x139&x140));

	if (t22 != -4) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x141 = 74U;
	uint16_t x142 = 50U;
	int32_t x143 = -1;
	uint16_t x144 = 28960U;

	t23 = ((x141*x142)+(x143&x144));

	if (t23 != 32660U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x149 = 3099263569LLU;
	static volatile int16_t x151 = -1;
	uint8_t x152 = 1U;

	t24 = ((x149*x150)+(x151&x152));

	if (t24 != 18446736430925590463LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x154 = 8U;
	int8_t x156 = INT8_MIN;
	uint64_t t25 = 2LLU;

	t25 = ((x153*x154)+(x155&x156));

	if (t25 != 9223372036854778000LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x161 = 513U;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	volatile uint64_t t26 = 85931388LLU;

	t26 = ((x161*x162)+(x163&x164));

	if (t26 != 18446744073709485824LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x166 = 14LL;
	uint8_t x167 = 31U;
	static int64_t t27 = 32LL;

	t27 = ((x165*x166)+(x167&x168));

	if (t27 != -458752LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x173 = 3436;
	uint8_t x174 = 1U;
	uint64_t x175 = 187281567LLU;
	int16_t x176 = INT16_MIN;
	static uint64_t t28 = 349225751LLU;

	t28 = ((x173*x174)+(x175&x176));

	if (t28 != 187272556LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x181 = 1821LL;
	uint8_t x182 = UINT8_MAX;
	int16_t x183 = -1;

	t29 = ((x181*x182)+(x183&x184));

	if (t29 != -9223372036854311453LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x190 = 179LL;
	uint16_t x191 = 5U;
	volatile uint64_t t30 = 4247489768375789LLU;

	t30 = ((x189*x190)+(x191&x192));

	if (t30 != 18446744073709551442LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x193 = 444948927LL;
	volatile int32_t x194 = -52291;
	int32_t x195 = INT32_MIN;
	static int8_t x196 = INT8_MIN;
	static int64_t t31 = 32909623976LL;

	t31 = ((x193*x194)+(x195&x196));

	if (t31 != -23268971825405LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x197 = -3819;
	int8_t x198 = INT8_MIN;
	uint32_t x199 = 11553808U;
	int64_t x200 = 202352471117074LL;
	volatile int64_t t32 = -31985248451074042LL;

	t32 = ((x197*x198)+(x199&x200));

	if (t32 != 2589072LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x206 = -1;
	uint8_t x207 = 1U;
	static uint16_t x208 = UINT16_MAX;
	volatile int32_t t33 = 338581;

	t33 = ((x205*x206)+(x207&x208));

	if (t33 != -17287) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x209 = 5;
	int16_t x210 = -7964;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = INT8_MAX;
	int32_t t34 = 5252;

	t34 = ((x209*x210)+(x211&x212));

	if (t34 != -39820) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x213 = INT8_MAX;
	static volatile int16_t x214 = 71;
	static uint64_t x215 = UINT64_MAX;
	uint64_t t35 = 12790142LLU;

	t35 = ((x213*x214)+(x215&x216));

	if (t35 != 9016LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = INT16_MAX;
	int8_t x218 = -1;
	uint32_t x219 = 0U;
	volatile uint8_t x220 = UINT8_MAX;
	volatile uint32_t t36 = 832767250U;

	t36 = ((x217*x218)+(x219&x220));

	if (t36 != 4294934529U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x221 = 2;
	static int8_t x223 = INT8_MIN;
	static int16_t x224 = INT16_MAX;

	t37 = ((x221*x222)+(x223&x224));

	if (t37 != 32384) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x225 = INT32_MIN;
	static uint64_t x226 = UINT64_MAX;
	uint32_t x227 = 10132084U;
	volatile int16_t x228 = INT16_MAX;
	volatile uint64_t t38 = 1297279347686181LLU;

	t38 = ((x225*x226)+(x227&x228));

	if (t38 != 2147490420LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x229 = UINT8_MAX;
	int32_t x230 = 1;
	uint8_t x231 = 2U;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t39 = 18597159LLU;

	t39 = ((x229*x230)+(x231&x232));

	if (t39 != 257LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x233 = 19U;
	int16_t x234 = -4;
	volatile uint32_t x235 = 3U;
	static uint32_t x236 = UINT32_MAX;
	volatile uint32_t t40 = 3U;

	t40 = ((x233*x234)+(x235&x236));

	if (t40 != 4294967223U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x241 = 1846692483U;
	static int64_t x244 = INT64_MAX;
	volatile uint64_t t41 = 14654222998283LLU;

	t41 = ((x241*x242)+(x243&x244));

	if (t41 != 3677732198LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x246 = 6626500282148LLU;
	int32_t x247 = INT32_MAX;
	int8_t x248 = INT8_MAX;
	uint64_t t42 = 669553877271230LLU;

	t42 = ((x245*x246)+(x247&x248));

	if (t42 != 1689757571947867LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x249 = 0U;
	static int64_t x251 = 765220311LL;
	int64_t x252 = -1LL;
	volatile int64_t t43 = 11387878186936LL;

	t43 = ((x249*x250)+(x251&x252));

	if (t43 != 765220311LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x253 = INT8_MIN;
	uint64_t x254 = 6651291631897236LLU;
	int32_t x255 = -1;
	static volatile uint32_t x256 = UINT32_MAX;
	volatile uint64_t t44 = 219010LLU;

	t44 = ((x253*x254)+(x255&x256));

	if (t44 != 17595378749121672703LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x258 = UINT64_MAX;
	int16_t x259 = -6329;
	static uint64_t t45 = 8LLU;

	t45 = ((x257*x258)+(x259&x260));

	if (t45 != 134LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x265 = 5233U;
	static uint16_t x266 = 12U;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t46 = 1320321;

	t46 = ((x265*x266)+(x267&x268));

	if (t46 != -2147420852) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x270 = -1;
	volatile int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MAX;
	volatile uint64_t t47 = 3392330815470502LLU;

	t47 = ((x269*x270)+(x271&x272));

	if (t47 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x273 = 1U;
	static volatile uint64_t x274 = 106506485667590203LLU;

	t48 = ((x273*x274)+(x275&x276));

	if (t48 != 106506485667590208LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x277 = UINT64_MAX;
	volatile int32_t x278 = -150474;
	static int8_t x279 = INT8_MAX;
	static int32_t x280 = 57;
	static uint64_t t49 = 1254182LLU;

	t49 = ((x277*x278)+(x279&x280));

	if (t49 != 150531LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x281 = INT32_MAX;
	uint64_t x282 = 7722052897LLU;
	uint8_t x283 = UINT8_MAX;
	int32_t x284 = -1;
	static uint64_t t50 = 15196694839739889LLU;

	t50 = ((x281*x282)+(x283&x284));

	if (t50 != 16582982317576475614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x285 = 291U;
	int8_t x286 = INT8_MAX;
	int32_t x287 = -233;
	int16_t x288 = -1;
	int32_t t51 = -296;

	t51 = ((x285*x286)+(x287&x288));

	if (t51 != 36724) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x289 = 6LLU;
	static uint16_t x290 = UINT16_MAX;
	int32_t x291 = -116650;
	int16_t x292 = INT16_MIN;
	uint64_t t52 = 13958617LLU;

	t52 = ((x289*x290)+(x291&x292));

	if (t52 != 262138LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x293 = UINT64_MAX;
	static int16_t x295 = INT16_MAX;
	uint64_t x296 = 149LLU;
	uint64_t t53 = 305144638489LLU;

	t53 = ((x293*x294)+(x295&x296));

	if (t53 != 150LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = -64142;
	static uint64_t x298 = 6328026252182566008LLU;
	int64_t x299 = INT64_MIN;
	volatile int16_t x300 = -17;
	uint64_t t54 = 201891LLU;

	t54 = ((x297*x298)+(x299&x300));

	if (t54 != 673358373970097520LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x306 = -1;
	uint16_t x307 = 793U;
	uint16_t x308 = 13796U;

	t55 = ((x305*x306)+(x307&x308));

	if (t55 != 18446744073709445297LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	int32_t x310 = -11886374;
	uint8_t x312 = 1U;
	uint64_t t56 = 59LLU;

	t56 = ((x309*x310)+(x311&x312));

	if (t56 != 11886375LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = -1;
	int64_t x314 = 1LL;
	int8_t x315 = INT8_MAX;
	static int32_t x316 = -1;

	t57 = ((x313*x314)+(x315&x316));

	if (t57 != 126LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x322 = 3U;
	uint32_t x324 = 60937160U;
	static volatile uint32_t t58 = 118138066U;

	t58 = ((x321*x322)+(x323&x324));

	if (t58 != 60937040U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x325 = UINT32_MAX;
	volatile uint8_t x326 = UINT8_MAX;
	int64_t x327 = INT64_MAX;
	int16_t x328 = INT16_MAX;
	int64_t t59 = 22061010LL;

	t59 = ((x325*x326)+(x327&x328));

	if (t59 != 4294999808LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x329 = UINT16_MAX;
	int64_t x330 = 115775147473022LL;
	static uint64_t x332 = UINT64_MAX;
	static volatile uint64_t t60 = 1438947682824LLU;

	t60 = ((x329*x330)+(x331&x332));

	if (t60 != 16810696326499272578LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -1LL;

	t61 = ((x333*x334)+(x335&x336));

	if (t61 != 2147680256LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x337 = -1070LL;
	uint16_t x338 = UINT16_MAX;
	static int32_t x339 = INT32_MAX;
	volatile int64_t t62 = -134568731300699847LL;

	t62 = ((x337*x338)+(x339&x340));

	if (t62 != -70122443LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x341 = 1U;
	volatile int32_t x342 = -1;
	uint64_t x343 = 1032357LLU;
	int16_t x344 = -1;

	t63 = ((x341*x342)+(x343&x344));

	if (t63 != 1032356LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x350 = 7604LLU;
	static int16_t x351 = -1;
	uint64_t t64 = 34615126904878547LLU;

	t64 = ((x349*x350)+(x351&x352));

	if (t64 != 18446744073709544011LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x353 = 2540156U;
	volatile int8_t x354 = -1;
	int64_t x355 = -124659LL;
	uint64_t t65 = 5266498LLU;

	t65 = ((x353*x354)+(x355&x356));

	if (t65 != 250554031784148625LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x357 = UINT32_MAX;
	uint16_t x358 = 14U;
	int8_t x359 = INT8_MAX;
	uint8_t x360 = UINT8_MAX;
	uint32_t t66 = 222U;

	t66 = ((x357*x358)+(x359&x360));

	if (t66 != 113U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x361 = 0U;
	int8_t x362 = INT8_MIN;
	int32_t x363 = -1;
	static int32_t t67 = -14;

	t67 = ((x361*x362)+(x363&x364));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x365 = 14U;
	int8_t x366 = -1;
	int16_t x367 = -1;
	uint16_t x368 = 84U;
	int32_t t68 = 397376806;

	t68 = ((x365*x366)+(x367&x368));

	if (t68 != 70) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x369 = 48U;
	int32_t x370 = -1;
	uint32_t x371 = UINT32_MAX;
	uint16_t x372 = 3093U;
	uint32_t t69 = 14513U;

	t69 = ((x369*x370)+(x371&x372));

	if (t69 != 3045U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x373 = -76468824LL;
	int32_t x374 = -1;
	int16_t x375 = -11;
	int64_t x376 = -58133805935417674LL;

	t70 = ((x373*x374)+(x375&x376));

	if (t70 != -58133805858948852LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x377 = 3U;
	volatile int8_t x378 = 3;
	int32_t x380 = -1;
	int64_t t71 = -834544195072LL;

	t71 = ((x377*x378)+(x379&x380));

	if (t71 != 8LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x381 = UINT64_MAX;
	int8_t x382 = -1;
	int8_t x383 = 9;
	static uint32_t x384 = UINT32_MAX;
	volatile uint64_t t72 = 326229LLU;

	t72 = ((x381*x382)+(x383&x384));

	if (t72 != 10LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x389 = 34881272776LLU;
	static uint8_t x390 = 5U;
	volatile int64_t x391 = INT64_MIN;
	static int32_t x392 = 820;
	volatile uint64_t t73 = 7686LLU;

	t73 = ((x389*x390)+(x391&x392));

	if (t73 != 174406363880LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x393 = 6814U;
	int64_t x394 = -1LL;
	int32_t x395 = INT32_MIN;

	t74 = ((x393*x394)+(x395&x396));

	if (t74 != -2147490462LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x397 = INT16_MIN;
	uint8_t x398 = 0U;
	uint64_t x399 = 357LLU;
	volatile int8_t x400 = -1;
	static uint64_t t75 = 143180632782457461LLU;

	t75 = ((x397*x398)+(x399&x400));

	if (t75 != 357LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MAX;
	uint16_t x404 = 59U;
	uint64_t t76 = 132621025519576LLU;

	t76 = ((x401*x402)+(x403&x404));

	if (t76 != 59LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x405 = -1LL;
	volatile uint16_t x407 = 26U;
	int64_t x408 = -1268384LL;
	volatile uint64_t t77 = 1384597004LLU;

	t77 = ((x405*x406)+(x407&x408));

	if (t77 != 18446744067356884267LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x413 = -7;
	static int64_t x414 = -1LL;
	uint64_t x415 = 3241349198098156LLU;
	uint64_t x416 = 7520158454455385620LLU;

	t78 = ((x413*x414)+(x415&x416));

	if (t78 != 2392834728701451LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x417 = 7658;
	int32_t x418 = -1;
	int16_t x419 = 20;
	uint64_t x420 = 66388110990LLU;
	uint64_t t79 = 406LLU;

	t79 = ((x417*x418)+(x419&x420));

	if (t79 != 18446744073709543962LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x426 = 52U;
	static uint16_t x427 = 984U;
	uint32_t x428 = 4U;
	int64_t t80 = 4999LL;

	t80 = ((x425*x426)+(x427&x428));

	if (t80 != -52LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x429 = 168689996U;
	uint64_t x430 = 1404155LLU;
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = INT8_MAX;
	volatile uint64_t t81 = 679050LLU;

	t81 = ((x429*x430)+(x431&x432));

	if (t81 != 236866901333507LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x433 = INT8_MAX;
	int64_t x434 = 5846884068258165LL;
	int32_t x435 = 1;
	static int32_t x436 = -1;
	volatile int64_t t82 = -9244360LL;

	t82 = ((x433*x434)+(x435&x436));

	if (t82 != 742554276668786956LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x441 = -1LL;
	int8_t x442 = -20;
	int8_t x443 = 1;

	t83 = ((x441*x442)+(x443&x444));

	if (t83 != 20LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x446 = INT16_MIN;
	int16_t x448 = INT16_MAX;
	static volatile int32_t t84 = 172;

	t84 = ((x445*x446)+(x447&x448));

	if (t84 != 32769) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x457 = 2738U;
	static int64_t x458 = -14738341265LL;
	static int32_t x459 = INT32_MAX;
	uint16_t x460 = UINT16_MAX;
	static volatile int64_t t85 = -19590718837LL;

	t85 = ((x457*x458)+(x459&x460));

	if (t85 != -40353578318035LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x461 = 31218674U;
	static uint16_t x463 = UINT16_MAX;
	volatile int32_t x464 = -56095;
	volatile uint32_t t86 = 2040U;

	t86 = ((x461*x462)+(x463&x464));

	if (t86 != 4263758063U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x469 = 24091550;
	static int8_t x471 = INT8_MIN;
	static int32_t x472 = -1;
	volatile uint64_t t87 = 1791071586LLU;

	t87 = ((x469*x470)+(x471&x472));

	if (t87 != 38548190499922LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x473 = 2392290944254LL;
	volatile int8_t x474 = -31;
	static int64_t x475 = 44842591499341519LL;
	static int64_t x476 = INT64_MIN;

	t88 = ((x473*x474)+(x475&x476));

	if (t88 != -74161019271874LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x482 = -1LL;
	uint32_t x484 = UINT32_MAX;
	volatile uint64_t t89 = 5496895788LLU;

	t89 = ((x481*x482)+(x483&x484));

	if (t89 != 4176LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x489 = -196238820443450437LL;
	static uint64_t x490 = 930024106581339702LLU;
	int64_t x491 = -1LL;
	uint8_t x492 = 2U;
	volatile uint64_t t90 = 455135LLU;

	t90 = ((x489*x490)+(x491&x492));

	if (t90 != 3100632664934597492LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x493 = UINT8_MAX;
	static uint64_t x494 = 124222LLU;
	static int8_t x495 = -1;
	int32_t x496 = -235730;
	volatile uint64_t t91 = 7648LLU;

	t91 = ((x493*x494)+(x495&x496));

	if (t91 != 31440880LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x497 = INT8_MAX;
	static uint16_t x500 = UINT16_MAX;
	volatile int32_t t92 = -15300770;

	t92 = ((x497*x498)+(x499&x500));

	if (t92 != 48897) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x502 = -1;
	static int8_t x504 = INT8_MIN;
	volatile int32_t t93 = -149511;

	t93 = ((x501*x502)+(x503&x504));

	if (t93 != -524464255) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x505 = INT8_MIN;
	int16_t x506 = 0;
	int32_t t94 = -130;

	t94 = ((x505*x506)+(x507&x508));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x510 = 1;
	int8_t x511 = 9;
	int64_t x512 = INT64_MIN;

	t95 = ((x509*x510)+(x511&x512));

	if (t95 != 8126726119882551699LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x513 = 402698;
	int32_t x514 = -1;
	static int64_t x516 = INT64_MIN;
	volatile int64_t t96 = 15222271117040492LL;

	t96 = ((x513*x514)+(x515&x516));

	if (t96 != -402698LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x521 = 62252001U;
	uint16_t x522 = 1U;
	volatile int16_t x523 = -4;
	uint64_t t97 = 637263045664LLU;

	t97 = ((x521*x522)+(x523&x524));

	if (t97 != 62251997LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x527 = UINT8_MAX;
	int64_t t98 = 664994312624508601LL;

	t98 = ((x525*x526)+(x527&x528));

	if (t98 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x529 = UINT8_MAX;
	static uint64_t x530 = 97551466LLU;
	uint32_t x532 = 3647161U;
	static volatile uint64_t t99 = 13039LLU;

	t99 = ((x529*x530)+(x531&x532));

	if (t99 != 24879270991LLU) { NG(); } else { ; }
	
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

