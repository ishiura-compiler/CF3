#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
int16_t x9 = INT16_MIN;
int64_t x12 = -1LL;
int8_t x14 = INT8_MIN;
int8_t x24 = 0;
static int32_t t5 = 9;
volatile int32_t t6 = -239048;
uint8_t x33 = 117U;
static volatile int64_t t8 = 450041743751251999LL;
uint16_t x41 = 10716U;
static int64_t t10 = -1479398705931241566LL;
int8_t x59 = 5;
volatile uint32_t x76 = UINT32_MAX;
int8_t x78 = -3;
int8_t x80 = INT8_MAX;
volatile int64_t x101 = 195963269619764603LL;
int8_t x103 = -1;
static uint16_t x107 = 9382U;
volatile int32_t t21 = -661753;
volatile int32_t t22 = -1;
int16_t x117 = 0;
volatile uint64_t x121 = 245680295584361996LLU;
static int16_t x124 = -46;
volatile int32_t x136 = INT32_MIN;
volatile int64_t t25 = 1351633360659923LL;
volatile uint64_t x146 = 45LLU;
volatile int16_t x150 = INT16_MIN;
uint64_t t31 = 14089687LLU;
static int64_t x172 = INT64_MAX;
uint64_t x175 = 939325159648186LLU;
static uint32_t x176 = 7820946U;
int32_t x183 = -351205645;
int8_t x184 = INT8_MAX;
uint32_t t35 = 242U;
volatile int32_t x185 = INT32_MIN;
volatile uint64_t t37 = 434LLU;
int8_t x194 = INT8_MAX;
uint64_t x196 = UINT64_MAX;
int16_t x203 = INT16_MAX;
static uint16_t x205 = UINT16_MAX;
int16_t x206 = 6;
int32_t x212 = -33329;
uint32_t x222 = UINT32_MAX;
static volatile int16_t x223 = -1;
static int64_t x226 = -1LL;
int64_t x227 = 1061731938589192LL;
volatile int32_t x238 = 270;
int8_t x242 = -1;
volatile int8_t x244 = INT8_MIN;
int32_t x246 = -1;
volatile uint64_t t49 = 535201539319608LLU;
int8_t x251 = INT8_MIN;
uint16_t x254 = 885U;
uint64_t x255 = 9750613807428LLU;
static uint64_t t51 = 147512885099035547LLU;
uint64_t x265 = 46824423099103LLU;
int32_t x266 = INT32_MIN;
int8_t x285 = INT8_MIN;
int32_t t57 = -46781906;
int64_t x291 = INT64_MIN;
static int16_t x299 = -40;
uint8_t x305 = UINT8_MAX;
volatile uint32_t x306 = 1708787801U;
int64_t x309 = -1202LL;
uint8_t x311 = UINT8_MAX;
uint32_t x312 = 7397153U;
uint8_t x314 = 30U;
static int64_t x320 = INT64_MIN;
uint64_t t65 = 15375LLU;
static int32_t x337 = 239;
volatile int64_t t69 = -914495115140500LL;
uint8_t x363 = UINT8_MAX;
uint16_t x371 = UINT16_MAX;
static volatile uint64_t t72 = 5541053417596LLU;
uint64_t t74 = 176LLU;
static int64_t x406 = INT64_MIN;
int16_t x409 = INT16_MIN;
static int8_t x411 = INT8_MIN;
int64_t x412 = INT64_MAX;
int16_t x414 = INT16_MIN;
int8_t x418 = INT8_MAX;
uint32_t x423 = 43U;
int16_t x425 = INT16_MIN;
uint32_t x426 = UINT32_MAX;
int16_t x437 = INT16_MIN;
uint8_t x438 = 21U;
int32_t x440 = 7753210;
uint16_t x445 = 478U;
uint16_t x446 = 6U;
int16_t x448 = -4;
int16_t x451 = -1;
volatile int32_t t86 = -160;
int16_t x454 = -1;
uint64_t x456 = 50358196LLU;
static volatile uint64_t t87 = 1732LLU;
static int64_t x472 = INT64_MIN;
uint64_t t91 = 133651920731587985LLU;
int8_t x479 = INT8_MIN;
int16_t x481 = -1;
volatile uint64_t x482 = UINT64_MAX;
uint64_t x483 = UINT64_MAX;
volatile uint64_t t94 = 100071LLU;
int64_t x491 = 646739LL;
static int64_t t96 = 1262198206744896LL;
int32_t x500 = -29908;
static int32_t t98 = -38;
volatile uint32_t x506 = 846U;


void f0(void) {
	int32_t x1 = -1;
	static int8_t x2 = INT8_MIN;
	uint8_t x3 = UINT8_MAX;
	volatile uint8_t x4 = 54U;
	static volatile int32_t t0 = 1176441;

	t0 = ((x1*x2)+(x3|x4));

	if (t0 != 383) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 75U;
	volatile uint64_t x6 = 400817277866LLU;
	int8_t x7 = -1;
	volatile uint64_t t1 = 171006564796877LLU;

	t1 = ((x5*x6)+(x7|x8));

	if (t1 != 30061295839949LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	static uint8_t x11 = 14U;
	volatile int64_t t2 = -4LL;

	t2 = ((x9*x10)+(x11|x12));

	if (t2 != -8355841LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 943U;
	static uint8_t x15 = 20U;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 1;

	t3 = ((x13*x14)+(x15|x16));

	if (t3 != -153452) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;
	uint64_t t4 = 245603LLU;

	t4 = ((x17*x18)+(x19|x20));

	if (t4 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	volatile int32_t x22 = -1;
	uint16_t x23 = 1U;

	t5 = ((x21*x22)+(x23|x24));

	if (t5 != -2147483646) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = INT8_MIN;

	t6 = ((x25*x26)+(x27|x28));

	if (t6 != 32257) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 33U;
	int32_t x30 = 845;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 7U;
	volatile int32_t t7 = -422208767;

	t7 = ((x29*x30)+(x31|x32));

	if (t7 != -2147455756) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -273377854587818LL;
	int64_t x35 = -1LL;
	static int8_t x36 = 7;

	t8 = ((x33*x34)+(x35|x36));

	if (t8 != -31985208986774707LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x42 = INT16_MAX;
	uint64_t x43 = 3363403548LLU;
	int8_t x44 = INT8_MIN;
	uint64_t t9 = 2358997LLU;

	t9 = ((x41*x42)+(x43|x44));

	if (t9 != 351131072LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = 0;
	volatile int64_t x47 = 51417464341LL;
	int8_t x48 = -1;

	t10 = ((x45*x46)+(x47|x48));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = 53LL;
	static int64_t x51 = 10386622145213LL;
	volatile int32_t x52 = INT32_MAX;
	volatile int64_t t11 = -7798308266LL;

	t11 = ((x49*x50)+(x51|x52));

	if (t11 != 10387376668671LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = -1;
	volatile uint16_t x58 = 12223U;
	int16_t x60 = 7620;
	int32_t t12 = 708;

	t12 = ((x57*x58)+(x59|x60));

	if (t12 != -4602) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = 358920657979LL;
	uint8_t x70 = 7U;
	static int32_t x71 = 41621884;
	uint64_t x72 = 31LLU;
	static volatile uint64_t t13 = 4154760299324LLU;

	t13 = ((x69*x70)+(x71|x72));

	if (t13 != 2512486227740LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = -11415135;
	int16_t x74 = -1;
	int16_t x75 = INT16_MIN;
	uint32_t t14 = 1086418U;

	t14 = ((x73*x74)+(x75|x76));

	if (t14 != 11415134U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = 2162894LL;
	int32_t x79 = INT32_MIN;
	static int64_t t15 = 1015LL;

	t15 = ((x77*x78)+(x79|x80));

	if (t15 != -2153972203LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x81 = 496U;
	int8_t x82 = INT8_MAX;
	static int32_t x83 = INT32_MAX;
	int8_t x84 = 5;
	uint32_t t16 = 1910245U;

	t16 = ((x81*x82)+(x83|x84));

	if (t16 != 2147546639U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MAX;
	static int8_t x94 = -1;
	int32_t x95 = -57614134;
	int16_t x96 = -960;
	int32_t t17 = 745;

	t17 = ((x93*x94)+(x95|x96));

	if (t17 != -33589) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = -7469096;
	int32_t x98 = -1;
	volatile int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MAX;
	int32_t t18 = 7;

	t18 = ((x97*x98)+(x99|x100));

	if (t18 != -2140014425) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x102 = 6U;
	uint8_t x104 = 12U;
	static int64_t t19 = -7LL;

	t19 = ((x101*x102)+(x103|x104));

	if (t19 != 1175779617718587617LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = 14U;
	int8_t x108 = -1;
	volatile int32_t t20 = 2786511;

	t20 = ((x105*x106)+(x107|x108));

	if (t20 != -1793) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x109 = 46;
	int8_t x110 = INT8_MIN;
	static uint16_t x111 = UINT16_MAX;
	int32_t x112 = -93738;

	t21 = ((x109*x110)+(x111|x112));

	if (t21 != -71425) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	volatile int8_t x114 = INT8_MAX;
	static uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MIN;

	t22 = ((x113*x114)+(x115|x116));

	if (t22 != -2147434369) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x118 = INT16_MIN;
	volatile uint8_t x119 = 68U;
	int32_t x120 = INT32_MAX;
	static volatile int32_t t23 = INT32_MAX;

	t23 = ((x117*x118)+(x119|x120));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x122 = INT32_MAX;
	int32_t x123 = -1;
	volatile uint64_t t24 = 41854617LLU;

	t24 = ((x121*x122)+(x123|x124));

	if (t24 != 12242580495046644211LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x133 = 12375U;
	volatile uint16_t x134 = 1017U;
	int64_t x135 = 124678958417425049LL;

	t25 = ((x133*x134)+(x135|x136));

	if (t25 != -1540375496LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MIN;
	static int64_t x138 = -2711703951590LL;
	int64_t x139 = 520061750321LL;
	uint16_t x140 = 256U;
	volatile int64_t t26 = -7862LL;

	t26 = ((x137*x138)+(x139|x140));

	if (t26 != 88857635147451697LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = -1;
	uint32_t x147 = 128U;
	volatile uint16_t x148 = 7U;
	volatile uint64_t t27 = 1158619801384LLU;

	t27 = ((x145*x146)+(x147|x148));

	if (t27 != 90LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	volatile uint8_t x152 = 1U;
	volatile int32_t t28 = 2947;

	t28 = ((x149*x150)+(x151|x152));

	if (t28 != -1073741823) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x153 = 594LLU;
	static int64_t x154 = 992528059517839683LL;
	int64_t x155 = 201LL;
	int32_t x156 = INT32_MIN;
	volatile uint64_t t29 = 5741284117047LLU;

	t29 = ((x153*x154)+(x155|x156));

	if (t29 != 17712601066453188159LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = -1;
	uint64_t x158 = UINT64_MAX;
	static int32_t x159 = INT32_MAX;
	uint8_t x160 = UINT8_MAX;
	uint64_t t30 = 1942374951727LLU;

	t30 = ((x157*x158)+(x159|x160));

	if (t30 != 2147483648LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x161 = INT16_MIN;
	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = UINT64_MAX;
	uint64_t x164 = 1617565003241LLU;

	t31 = ((x161*x162)+(x163|x164));

	if (t31 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x169 = -1LL;
	static int32_t x170 = INT32_MIN;
	volatile uint64_t x171 = UINT64_MAX;
	uint64_t t32 = 3350LLU;

	t32 = ((x169*x170)+(x171|x172));

	if (t32 != 2147483647LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = -1;
	uint16_t x174 = UINT16_MAX;
	uint64_t t33 = 88LLU;

	t33 = ((x173*x174)+(x175|x176));

	if (t33 != 939325160062907LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x177 = UINT64_MAX;
	int8_t x178 = 3;
	static uint16_t x179 = UINT16_MAX;
	uint16_t x180 = 73U;
	volatile uint64_t t34 = 1016LLU;

	t34 = ((x177*x178)+(x179|x180));

	if (t34 != 65532LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x181 = 48500U;
	volatile int8_t x182 = INT8_MAX;

	t35 = ((x181*x182)+(x183|x184));

	if (t35 != 3949921163U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x186 = 420632U;
	static int8_t x187 = 52;
	uint64_t x188 = 250263606LLU;
	uint64_t t36 = 4006071279844829513LLU;

	t36 = ((x185*x186)+(x187|x188));

	if (t36 != 250263606LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x189 = 106U;
	uint64_t x190 = 3LLU;
	uint16_t x191 = 1275U;
	int64_t x192 = INT64_MAX;

	t37 = ((x189*x190)+(x191|x192));

	if (t37 != 9223372036854776125LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = -1LL;
	static int8_t x195 = 23;
	uint64_t t38 = 175313975062875728LLU;

	t38 = ((x193*x194)+(x195|x196));

	if (t38 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MAX;
	static int16_t x200 = INT16_MAX;
	volatile int32_t t39 = -3095282;

	t39 = ((x197*x198)+(x199|x200));

	if (t39 != 2147483392) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x201 = UINT64_MAX;
	int8_t x202 = INT8_MIN;
	static int32_t x204 = INT32_MIN;
	static uint64_t t40 = 544820593LLU;

	t40 = ((x201*x202)+(x203|x204));

	if (t40 != 18446744071562100863LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x207 = 55509U;
	volatile uint16_t x208 = 175U;
	uint32_t t41 = 685U;

	t41 = ((x205*x206)+(x207|x208));

	if (t41 != 448761U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x209 = -75780LL;
	static uint32_t x210 = 54919779U;
	uint64_t x211 = 5855350727927105066LLU;
	volatile uint64_t t42 = 43493913573LLU;

	t42 = ((x209*x210)+(x211|x212));

	if (t42 != 18446739911888698979LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x213 = -1LL;
	uint64_t x214 = 854LLU;
	static int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;
	uint64_t t43 = 1903LLU;

	t43 = ((x213*x214)+(x215|x216));

	if (t43 != 18446744073709550634LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x221 = 12048;
	int32_t x224 = INT32_MIN;
	volatile uint32_t t44 = 5U;

	t44 = ((x221*x222)+(x223|x224));

	if (t44 != 4294955247U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x225 = 13701U;
	int64_t x228 = INT64_MIN;
	int64_t t45 = 67732563913277LL;

	t45 = ((x225*x226)+(x227|x228));

	if (t45 != -9222310304916200317LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = INT32_MIN;
	uint64_t x230 = 12571050844378062LLU;
	int8_t x231 = 48;
	int32_t x232 = INT32_MIN;
	static uint64_t t46 = 393927LLU;

	t46 = ((x229*x230)+(x231|x232));

	if (t46 != 1295864718514192432LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x237 = 7366;
	int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MIN;
	int32_t t47 = -2;

	t47 = ((x237*x238)+(x239|x240));

	if (t47 != 1956052) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x241 = 423601LL;
	static int16_t x243 = -1;
	static int64_t t48 = 10208LL;

	t48 = ((x241*x242)+(x243|x244));

	if (t48 != -423602LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x245 = UINT64_MAX;
	int32_t x247 = INT32_MAX;
	uint64_t x248 = 562288566LLU;

	t49 = ((x245*x246)+(x247|x248));

	if (t49 != 2147483648LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x249 = 4226U;
	static int16_t x250 = INT16_MIN;
	static int16_t x252 = -1;
	uint32_t t50 = 109U;

	t50 = ((x249*x250)+(x251|x252));

	if (t50 != 4156489727U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x253 = UINT8_MAX;
	uint8_t x256 = 2U;

	t51 = ((x253*x254)+(x255|x256));

	if (t51 != 9750614033105LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = -22;
	volatile int32_t x258 = -1;
	static int8_t x259 = INT8_MIN;
	static uint16_t x260 = 235U;
	int32_t t52 = 5;

	t52 = ((x257*x258)+(x259|x260));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x261 = 769U;
	static uint32_t x262 = 1026481579U;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	volatile uint32_t t53 = 15U;

	t53 = ((x261*x262)+(x263|x264));

	if (t53 != 3385318955U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x267 = 7;
	int64_t x268 = -1LL;
	uint64_t t54 = 46LLU;

	t54 = ((x265*x266)+(x267|x268));

	if (t54 != 16965757507299442687LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x269 = 2U;
	uint64_t x270 = 2652887347686LLU;
	volatile int8_t x271 = -1;
	volatile int32_t x272 = -67970;
	volatile uint64_t t55 = 1345283LLU;

	t55 = ((x269*x270)+(x271|x272));

	if (t55 != 5305774695371LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x277 = UINT16_MAX;
	static int64_t x278 = 31336LL;
	static uint16_t x279 = UINT16_MAX;
	static int8_t x280 = -17;
	static int64_t t56 = -290169LL;

	t56 = ((x277*x278)+(x279|x280));

	if (t56 != 2053604759LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x286 = -1;
	int8_t x287 = -1;
	static int8_t x288 = 27;

	t57 = ((x285*x286)+(x287|x288));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = INT8_MAX;
	uint64_t x290 = UINT64_MAX;
	static uint8_t x292 = UINT8_MAX;
	volatile uint64_t t58 = 754LLU;

	t58 = ((x289*x290)+(x291|x292));

	if (t58 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x297 = UINT64_MAX;
	static int64_t x298 = -466979756274268LL;
	volatile int64_t x300 = INT64_MIN;
	volatile uint64_t t59 = 206044LLU;

	t59 = ((x297*x298)+(x299|x300));

	if (t59 != 466979756274228LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x301 = 3;
	static int16_t x302 = INT16_MIN;
	volatile int8_t x303 = INT8_MAX;
	uint8_t x304 = 64U;
	volatile int32_t t60 = 5261;

	t60 = ((x301*x302)+(x303|x304));

	if (t60 != -98177) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x307 = -1LL;
	uint32_t x308 = 535U;
	volatile int64_t t61 = -478886LL;

	t61 = ((x305*x306)+(x307|x308));

	if (t61 != 1949192358LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x310 = INT16_MIN;
	int64_t t62 = -477216LL;

	t62 = ((x309*x310)+(x311|x312));

	if (t62 != 46784511LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x313 = UINT64_MAX;
	static int64_t x315 = INT64_MIN;
	int32_t x316 = -5782;
	uint64_t t63 = 13571510933860425LLU;

	t63 = ((x313*x314)+(x315|x316));

	if (t63 != 18446744073709545804LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x317 = 7U;
	uint32_t x318 = UINT32_MAX;
	static int8_t x319 = -1;
	volatile int64_t t64 = 15386LL;

	t64 = ((x317*x318)+(x319|x320));

	if (t64 != 4294967288LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x321 = 82496522U;
	static int16_t x322 = 278;
	uint64_t x323 = UINT64_MAX;
	int16_t x324 = 6229;

	t65 = ((x321*x322)+(x323|x324));

	if (t65 != 1459196635LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x338 = 11417U;
	volatile uint64_t x339 = 17LLU;
	static int32_t x340 = -30795177;
	volatile uint64_t t66 = 13231334LLU;

	t66 = ((x337*x338)+(x339|x340));

	if (t66 != 18446744073681485102LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x345 = UINT32_MAX;
	static int8_t x346 = INT8_MIN;
	volatile int8_t x347 = 51;
	int8_t x348 = INT8_MAX;
	static volatile uint32_t t67 = 49916U;

	t67 = ((x345*x346)+(x347|x348));

	if (t67 != 255U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x349 = UINT8_MAX;
	int16_t x350 = -1;
	int64_t x351 = INT64_MIN;
	volatile uint16_t x352 = UINT16_MAX;
	int64_t t68 = 1LL;

	t68 = ((x349*x350)+(x351|x352));

	if (t68 != -9223372036854710528LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x357 = 1087;
	uint8_t x358 = UINT8_MAX;
	static int64_t x359 = INT64_MIN;
	static int32_t x360 = -3;

	t69 = ((x357*x358)+(x359|x360));

	if (t69 != 277182LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x361 = UINT8_MAX;
	static int16_t x362 = INT16_MIN;
	uint64_t x364 = UINT64_MAX;
	uint64_t t70 = 385221LLU;

	t70 = ((x361*x362)+(x363|x364));

	if (t70 != 18446744073701195775LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x369 = 0U;
	int32_t x370 = INT32_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t71 = -20866;

	t71 = ((x369*x370)+(x371|x372));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x373 = -21;
	int16_t x374 = 95;
	static uint64_t x375 = 3015817217996236LLU;
	uint8_t x376 = 16U;

	t72 = ((x373*x374)+(x375|x376));

	if (t72 != 3015817217994257LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x377 = 1;
	static volatile uint8_t x378 = 107U;
	uint16_t x379 = 6014U;
	volatile int8_t x380 = -7;
	int32_t t73 = -8759489;

	t73 = ((x377*x378)+(x379|x380));

	if (t73 != 106) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x393 = INT8_MIN;
	static int8_t x394 = INT8_MAX;
	uint8_t x395 = UINT8_MAX;
	static uint64_t x396 = 3543903LLU;

	t74 = ((x393*x394)+(x395|x396));

	if (t74 != 3527807LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x397 = INT8_MIN;
	uint64_t x398 = 70209275LLU;
	uint64_t x399 = UINT64_MAX;
	volatile int64_t x400 = -1LL;
	volatile uint64_t t75 = 1001LLU;

	t75 = ((x397*x398)+(x399|x400));

	if (t75 != 18446744064722764415LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x405 = 1162655101818LLU;
	int8_t x407 = -1;
	int16_t x408 = INT16_MIN;
	uint64_t t76 = UINT64_MAX;

	t76 = ((x405*x406)+(x407|x408));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x410 = INT16_MAX;
	int64_t t77 = 250495579468600LL;

	t77 = ((x409*x410)+(x411|x412));

	if (t77 != -1073709057LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x413 = UINT16_MAX;
	uint32_t x415 = 225813439U;
	int16_t x416 = INT16_MIN;
	static uint32_t t78 = 453U;

	t78 = ((x413*x414)+(x415|x416));

	if (t78 != 2147492799U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x417 = -1;
	int16_t x419 = INT16_MIN;
	int16_t x420 = -13;
	int32_t t79 = 65169;

	t79 = ((x417*x418)+(x419|x420));

	if (t79 != -140) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x421 = -1;
	int8_t x422 = 1;
	int32_t x424 = 6457058;
	volatile uint32_t t80 = 842131U;

	t80 = ((x421*x422)+(x423|x424));

	if (t80 != 6457066U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x427 = -1LL;
	static int16_t x428 = INT16_MAX;
	int64_t t81 = 92LL;

	t81 = ((x425*x426)+(x427|x428));

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x429 = 35U;
	int8_t x430 = INT8_MIN;
	uint32_t x431 = 2916636U;
	volatile int16_t x432 = INT16_MIN;
	volatile uint32_t t82 = 63172054U;

	t82 = ((x429*x430)+(x431|x432));

	if (t82 != 4294930332U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x433 = UINT32_MAX;
	static int32_t x434 = -3;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = 18U;
	volatile uint32_t t83 = 210680U;

	t83 = ((x433*x434)+(x435|x436));

	if (t83 != 4294934549U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x439 = 12U;
	volatile int32_t t84 = -28432;

	t84 = ((x437*x438)+(x439|x440));

	if (t84 != 7065086) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x447 = INT16_MIN;
	int32_t t85 = -13742;

	t85 = ((x445*x446)+(x447|x448));

	if (t85 != 2864) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x449 = -1;
	volatile uint8_t x450 = UINT8_MAX;
	int8_t x452 = INT8_MAX;

	t86 = ((x449*x450)+(x451|x452));

	if (t86 != -256) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x453 = 9568LL;
	volatile uint32_t x455 = 1074039294U;

	t87 = ((x453*x454)+(x455|x456));

	if (t87 != 1124387486LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x457 = 675LLU;
	static int64_t x458 = -1LL;
	int16_t x459 = 1962;
	int16_t x460 = INT16_MAX;
	volatile uint64_t t88 = 2082383201017841147LLU;

	t88 = ((x457*x458)+(x459|x460));

	if (t88 != 32092LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x461 = -1LL;
	static int64_t x462 = -1LL;
	static uint32_t x463 = 239544U;
	uint64_t x464 = 6718353734241601LLU;
	static volatile uint64_t t89 = 1752028LLU;

	t89 = ((x461*x462)+(x463|x464));

	if (t89 != 6718353734348794LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x465 = 365284544282363070LLU;
	static int32_t x466 = INT32_MIN;
	static volatile int8_t x467 = INT8_MIN;
	static int32_t x468 = INT32_MAX;
	volatile uint64_t t90 = 372126971046967882LLU;

	t90 = ((x465*x466)+(x467|x468));

	if (t90 != 4039163308752764927LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x469 = 8U;
	uint64_t x470 = 27535658226809173LLU;
	int32_t x471 = 129;

	t91 = ((x469*x470)+(x471|x472));

	if (t91 != 9443657302669249321LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x473 = 233LL;
	uint64_t x474 = UINT64_MAX;
	static uint64_t x475 = UINT64_MAX;
	int8_t x476 = INT8_MIN;
	static uint64_t t92 = 1543069552LLU;

	t92 = ((x473*x474)+(x475|x476));

	if (t92 != 18446744073709551382LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x477 = INT16_MIN;
	static uint16_t x478 = 26215U;
	static int8_t x480 = INT8_MAX;
	int32_t t93 = 656;

	t93 = ((x477*x478)+(x479|x480));

	if (t93 != -859013121) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x484 = -1;

	t94 = ((x481*x482)+(x483|x484));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x485 = -1;
	static int32_t x486 = 249;
	int16_t x487 = -1;
	static int32_t x488 = -3;
	int32_t t95 = 80;

	t95 = ((x485*x486)+(x487|x488));

	if (t95 != -250) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x489 = INT16_MAX;
	int64_t x490 = -1LL;
	int64_t x492 = -1LL;

	t96 = ((x489*x490)+(x491|x492));

	if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x497 = -1LL;
	int8_t x498 = INT8_MAX;
	volatile int64_t x499 = INT64_MAX;
	int64_t t97 = 309696187410LL;

	t97 = ((x497*x498)+(x499|x500));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x501 = 0;
	static uint8_t x502 = 7U;
	uint16_t x503 = 183U;
	int8_t x504 = -9;

	t98 = ((x501*x502)+(x503|x504));

	if (t98 != -9) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x505 = -1LL;
	volatile uint16_t x507 = UINT16_MAX;
	int8_t x508 = INT8_MAX;
	static int64_t t99 = 269536397729785356LL;

	t99 = ((x505*x506)+(x507|x508));

	if (t99 != 64689LL) { NG(); } else { ; }
	
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

