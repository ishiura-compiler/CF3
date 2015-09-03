#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = INT16_MAX;
int8_t x6 = 48;
uint64_t x13 = UINT64_MAX;
static int16_t x17 = INT16_MAX;
int8_t x19 = -1;
static int32_t t3 = -102856;
static uint8_t x21 = UINT8_MAX;
uint64_t x26 = UINT64_MAX;
uint32_t x33 = 1U;
int32_t x41 = -1;
static uint64_t x65 = 192016686335865880LLU;
int16_t x76 = -5508;
static int32_t t12 = 262178107;
volatile int32_t x82 = -132;
static int16_t x85 = 224;
uint64_t t16 = 4LLU;
int8_t x112 = -1;
int8_t x117 = INT8_MIN;
int16_t x120 = INT16_MIN;
int8_t x122 = 1;
volatile uint16_t x124 = 63U;
volatile uint32_t t23 = 213U;
int16_t x134 = 19;
uint64_t x136 = 164603285017023651LLU;
static int64_t x138 = INT64_MAX;
uint64_t x140 = 1705LLU;
static int8_t x144 = INT8_MIN;
volatile uint64_t x146 = 64563276946376473LLU;
int8_t x149 = 2;
int8_t x154 = -1;
static uint32_t x155 = 69126U;
int8_t x156 = -53;
int16_t x157 = INT16_MIN;
int32_t x166 = -833;
uint64_t t32 = 28LLU;
volatile int32_t t34 = -11;
volatile uint32_t x191 = UINT32_MAX;
int32_t x194 = -231;
int32_t x202 = INT32_MAX;
volatile int8_t x204 = INT8_MIN;
int32_t x212 = 342470782;
static int32_t x216 = INT32_MAX;
volatile uint32_t t41 = 1456703U;
static int16_t x228 = -1;
static int8_t x237 = INT8_MIN;
uint64_t x242 = 43408744230190898LLU;
volatile uint16_t x245 = 423U;
uint16_t x246 = 16141U;
uint16_t x254 = 12512U;
static int32_t t47 = -361034;
static volatile uint32_t t49 = 1945728499U;
int32_t x273 = -1;
static int32_t x274 = INT32_MIN;
int64_t x275 = INT64_MIN;
int16_t x282 = INT16_MIN;
static volatile uint64_t x283 = UINT64_MAX;
uint32_t x284 = UINT32_MAX;
uint64_t t53 = 1796731LLU;
uint64_t x285 = 4188059535680534LLU;
int16_t x286 = INT16_MIN;
volatile int8_t x316 = INT8_MIN;
int16_t x317 = 7522;
int8_t x319 = INT8_MAX;
int64_t x333 = -1LL;
static uint8_t x336 = UINT8_MAX;
int32_t x344 = -2188151;
int16_t x346 = INT16_MAX;
volatile int16_t x351 = -1;
int64_t x369 = -1568386878023278947LL;
volatile uint8_t x371 = 2U;
uint16_t x372 = 96U;
static int64_t x381 = INT64_MAX;
uint64_t t68 = 399LLU;
volatile uint32_t x385 = UINT32_MAX;
int16_t x386 = INT16_MIN;
uint32_t t70 = 1072691270U;
int64_t x404 = INT64_MIN;
int32_t x405 = -2;
int8_t x407 = INT8_MIN;
int64_t x408 = -1LL;
int64_t x409 = -116556LL;
uint32_t x411 = 81U;
volatile int64_t t73 = 233526122332561LL;
int32_t x413 = INT32_MIN;
static volatile int64_t t74 = -3356275568873056457LL;
volatile uint64_t x418 = 411098237702LLU;
uint8_t x420 = 61U;
int32_t x422 = INT32_MIN;
volatile uint16_t x427 = UINT16_MAX;
static uint64_t t77 = 15163LLU;
int16_t x429 = -1;
uint8_t x431 = UINT8_MAX;
int32_t t78 = -466118661;
int16_t x433 = -1;
uint32_t t79 = 34154U;
volatile int8_t x437 = 7;
int64_t x440 = -1LL;
uint8_t x452 = UINT8_MAX;
volatile int64_t x453 = 403625221458LL;
int64_t x458 = 3627887932LL;
volatile int64_t t84 = 24LL;
static int64_t x472 = -1LL;
volatile int32_t x474 = 81261;
uint64_t x475 = UINT64_MAX;
uint64_t t86 = 3351903917767LLU;
uint64_t x485 = 177415649028361387LLU;
static int16_t x496 = INT16_MIN;
uint32_t x500 = 823496434U;
int32_t x501 = INT32_MIN;
volatile uint8_t x504 = 80U;
int64_t x510 = INT64_MIN;
int32_t x511 = -11494;
int32_t x512 = 272;
int64_t t97 = 24LL;
uint32_t x533 = 70272U;
int64_t x534 = -1LL;
int8_t x536 = -1;
volatile int64_t t99 = -1121206289610LL;


void f0(void) {
	int64_t x1 = 32999548LL;
	volatile uint8_t x2 = 33U;
	static volatile int64_t x3 = -1LL;
	static int64_t t0 = -1992690710782LL;

	t0 = (x1+(x2^(x3-x4)));

	if (t0 != 32966813LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 3U;
	int64_t x7 = -113625483807708LL;
	int32_t x8 = INT32_MIN;
	static int64_t t1 = 0LL;

	t1 = (x5+(x6^(x7-x8)));

	if (t1 != -113623336324073LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x14 = -38;
	uint32_t x15 = 229422U;
	volatile uint8_t x16 = UINT8_MAX;
	uint64_t t2 = 24031765LLU;

	t2 = (x13+(x14^(x15-x16)));

	if (t2 != 4294738164LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	int32_t x20 = INT32_MIN;

	t3 = (x17+(x18^(x19-x20)));

	if (t3 != -2147418114) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	volatile int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t4 = 194;

	t4 = (x21+(x22^(x23-x24)));

	if (t4 != -32514) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 60U;
	uint16_t x27 = UINT16_MAX;
	int64_t x28 = -1LL;
	volatile uint64_t t5 = 3613812001475911077LLU;

	t5 = (x25+(x26^(x27-x28)));

	if (t5 != 18446744073709486139LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x34 = -1;
	int8_t x35 = -1;
	int32_t x36 = INT32_MAX;
	static volatile uint32_t t6 = 424676U;

	t6 = (x33+(x34^(x35-x36)));

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 13U;
	volatile int8_t x38 = INT8_MIN;
	uint32_t x39 = 145U;
	int8_t x40 = -2;
	volatile uint32_t t7 = 39720209U;

	t7 = (x37+(x38^(x39-x40)));

	if (t7 != 4294967072U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x42 = UINT8_MAX;
	static volatile int32_t x43 = -1;
	static volatile uint8_t x44 = 85U;
	int32_t t8 = 0;

	t8 = (x41+(x42^(x43-x44)));

	if (t8 != -172) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x61 = INT32_MIN;
	volatile uint16_t x62 = 28U;
	int8_t x63 = INT8_MIN;
	volatile int8_t x64 = INT8_MIN;
	int32_t t9 = 29755;

	t9 = (x61+(x62^(x63-x64)));

	if (t9 != -2147483620) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x66 = 29844682;
	int8_t x67 = -1;
	uint32_t x68 = 2U;
	uint64_t t10 = 80LLU;

	t10 = (x65+(x66^(x67-x68)));

	if (t10 != 192016690600988495LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x69 = INT16_MIN;
	int64_t x70 = -1LL;
	static uint16_t x71 = 843U;
	int64_t x72 = -1LL;
	int64_t t11 = 28264732LL;

	t11 = (x69+(x70^(x71-x72)));

	if (t11 != -33613LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x73 = 45U;
	int32_t x74 = 0;
	static volatile int32_t x75 = -1;

	t12 = (x73+(x74^(x75-x76)));

	if (t12 != 5552) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x81 = 1958U;
	int32_t x83 = INT32_MAX;
	static uint8_t x84 = UINT8_MAX;
	volatile int32_t t13 = 9264;

	t13 = (x81+(x82^(x83-x84)));

	if (t13 != -2147481566) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x86 = INT32_MAX;
	static uint16_t x87 = 394U;
	int64_t x88 = INT64_MAX;
	static volatile int64_t t14 = -1009037114389012305LL;

	t14 = (x85+(x86^(x87-x88)));

	if (t14 != -9223372034707292332LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = 705;
	int64_t x90 = INT64_MIN;
	uint64_t x91 = 727LLU;
	int16_t x92 = 0;
	volatile uint64_t t15 = 191296762696553424LLU;

	t15 = (x89+(x90^(x91-x92)));

	if (t15 != 9223372036854777240LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int16_t x94 = -1;
	int64_t x95 = -1LL;
	uint32_t x96 = UINT32_MAX;

	t16 = (x93+(x94^(x95-x96)));

	if (t16 != 4294967294LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x97 = 1613803124796LLU;
	volatile uint8_t x98 = 1U;
	static volatile int16_t x99 = -1;
	int8_t x100 = INT8_MIN;
	uint64_t t17 = 1LLU;

	t17 = (x97+(x98^(x99-x100)));

	if (t17 != 1613803124922LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x105 = 14U;
	uint64_t x106 = 3824LLU;
	volatile uint16_t x107 = 2098U;
	static int16_t x108 = INT16_MAX;
	uint64_t t18 = 15091LLU;

	t18 = (x105+(x106^(x107-x108)));

	if (t18 != 18446744073709520593LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = INT16_MIN;
	static int64_t x110 = 2LL;
	static int8_t x111 = INT8_MIN;
	volatile int64_t t19 = 219587LL;

	t19 = (x109+(x110^(x111-x112)));

	if (t19 != -32893LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x113 = -11761439;
	int16_t x114 = INT16_MAX;
	static uint8_t x115 = UINT8_MAX;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t20 = -54897524;

	t20 = (x113+(x114^(x115-x116)));

	if (t20 != -11696159) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x118 = -1LL;
	volatile int8_t x119 = INT8_MAX;
	int64_t t21 = -1438981141464235919LL;

	t21 = (x117+(x118^(x119-x120)));

	if (t21 != -33024LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = -1;
	static volatile uint64_t x123 = 9731LLU;
	uint64_t t22 = 271698LLU;

	t22 = (x121+(x122^(x123-x124)));

	if (t22 != 9668LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x125 = 0;
	int16_t x126 = INT16_MAX;
	static uint32_t x127 = 15U;
	int16_t x128 = INT16_MIN;

	t23 = (x125+(x126^(x127-x128)));

	if (t23 != 65520U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = -1;
	int64_t x135 = INT64_MIN;
	volatile uint64_t t24 = 107086901710608210LLU;

	t24 = (x133+(x134^(x135-x136)));

	if (t24 != 9058768751837752141LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x137 = INT16_MIN;
	uint32_t x139 = UINT32_MAX;
	uint64_t t25 = 1LLU;

	t25 = (x137+(x138^(x139-x140)));

	if (t25 != 9223372032559777449LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x141 = 0U;
	volatile int16_t x142 = -1;
	int8_t x143 = -42;
	int32_t t26 = 240136;

	t26 = (x141+(x142^(x143-x144)));

	if (t26 != -87) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x145 = 6;
	int64_t x147 = -1LL;
	int8_t x148 = -1;
	volatile uint64_t t27 = 10863841LLU;

	t27 = (x145+(x146^(x147-x148)));

	if (t27 != 64563276946376479LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x150 = 9609277;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t28 = -1;

	t28 = (x149+(x150^(x151-x152)));

	if (t28 != 9609279) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = -3928694150691LL;
	int64_t t29 = -183712621987099880LL;

	t29 = (x153+(x154^(x155-x156)));

	if (t29 != -3924399252575LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x158 = 1910U;
	int8_t x159 = -24;
	int16_t x160 = INT16_MAX;
	int32_t t30 = 265470960;

	t30 = (x157+(x158^(x159-x160)));

	if (t30 != -67425) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x161 = INT64_MIN;
	uint32_t x162 = 331571025U;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;
	int64_t t31 = -7174161049077LL;

	t31 = (x161+(x162^(x163-x164)));

	if (t31 != -9223372036523204783LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x167 = 127328978;
	int32_t x168 = INT32_MAX;

	t32 = (x165+(x166^(x167-x168)));

	if (t32 != 2020154987LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x181 = 105U;
	int64_t x182 = -1LL;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = INT32_MIN;
	volatile uint64_t t33 = 30122LLU;

	t33 = (x181+(x182^(x183-x184)));

	if (t33 != 18446744071562068073LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = -1;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = 370U;
	volatile int8_t x188 = INT8_MIN;

	t34 = (x185+(x186^(x187-x188)));

	if (t34 != -32271) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = 3;
	int32_t x190 = INT32_MAX;
	int64_t x192 = -14408628718LL;
	int64_t t35 = 271891790414LL;

	t35 = (x189+(x190^(x191-x192)));

	if (t35 != 17803626005LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = -2110390813911144640LL;
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = -2405317;
	int64_t t36 = 537748015677209049LL;

	t36 = (x193+(x194^(x195-x196)));

	if (t36 != -2110390813913550051LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MIN;
	static int8_t x203 = INT8_MAX;
	int32_t t37 = 510644;

	t37 = (x201+(x202^(x203-x204)));

	if (t37 != 2147450624) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x209 = -5566LL;
	static uint8_t x210 = 91U;
	uint64_t x211 = 1459865047456321LLU;
	uint64_t t38 = 3688029573372LLU;

	t38 = (x209+(x210^(x211-x212)));

	if (t38 != 1459864704979930LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x213 = UINT16_MAX;
	uint16_t x214 = UINT16_MAX;
	uint16_t x215 = UINT16_MAX;
	int32_t t39 = 0;

	t39 = (x213+(x214^(x215-x216)));

	if (t39 != -2147287042) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x217 = INT32_MIN;
	static uint16_t x218 = 11137U;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t40 = 12474089U;

	t40 = (x217+(x218^(x219-x220)));

	if (t40 != 2147462016U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x221 = 1;
	volatile int32_t x222 = INT32_MIN;
	uint32_t x223 = UINT32_MAX;
	int16_t x224 = INT16_MIN;

	t41 = (x221+(x222^(x223-x224)));

	if (t41 != 2147516416U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x225 = INT64_MAX;
	int32_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	volatile uint64_t t42 = 264625845LLU;

	t42 = (x225+(x226^(x227-x228)));

	if (t42 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x234 = INT64_MAX;
	uint8_t x235 = UINT8_MAX;
	static volatile int8_t x236 = INT8_MIN;
	static volatile int64_t t43 = -1872377827800159LL;

	t43 = (x233+(x234^(x235-x236)));

	if (t43 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MAX;
	volatile int32_t x240 = INT32_MAX;
	volatile uint64_t t44 = 505619063486LLU;

	t44 = (x237+(x238^(x239-x240)));

	if (t44 != 9223372039002259327LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x241 = 1008LL;
	int16_t x243 = -2;
	int64_t x244 = -44LL;
	uint64_t t45 = 2058073078470559471LLU;

	t45 = (x241+(x242^(x243-x244)));

	if (t45 != 43408744230191880LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;
	volatile uint64_t t46 = 2020914021608654LLU;

	t46 = (x245+(x246^(x247-x248)));

	if (t46 != 17049LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x255 = INT16_MIN;
	static volatile int8_t x256 = -1;

	t47 = (x253+(x254^(x255-x256)));

	if (t47 != -53023) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = 610307U;
	int64_t x258 = -79661260381169LL;
	static uint64_t x259 = 7662765887885583LLU;
	int16_t x260 = -9807;
	uint64_t t48 = 11797888511LLU;

	t48 = (x257+(x258^(x259-x260)));

	if (t48 != 18439019673214985044LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x265 = INT32_MAX;
	volatile uint32_t x266 = 5U;
	uint8_t x267 = 1U;
	uint16_t x268 = 0U;

	t49 = (x265+(x266^(x267-x268)));

	if (t49 != 2147483651U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x269 = 6456U;
	int32_t x270 = INT32_MIN;
	uint16_t x271 = UINT16_MAX;
	static volatile uint16_t x272 = 77U;
	int32_t t50 = 404;

	t50 = (x269+(x270^(x271-x272)));

	if (t50 != -2147411734) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x276 = -2;
	static int64_t t51 = -230279723961LL;

	t51 = (x273+(x274^(x275-x276)));

	if (t51 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = -1;
	uint16_t x278 = 758U;
	uint8_t x279 = 2U;
	int16_t x280 = INT16_MIN;
	volatile int32_t t52 = 34836;

	t52 = (x277+(x278^(x279-x280)));

	if (t52 != 33523) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x281 = 1466868;

	t53 = (x281+(x282^(x283-x284)));

	if (t53 != 4296401396LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x287 = -1LL;
	int8_t x288 = -1;
	volatile uint64_t t54 = 0LLU;

	t54 = (x285+(x286^(x287-x288)));

	if (t54 != 4188059535647766LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x289 = -1LL;
	volatile int64_t x290 = -16742805599095LL;
	volatile int64_t x291 = -1LL;
	int16_t x292 = INT16_MIN;
	volatile int64_t t55 = 7LL;

	t55 = (x289+(x290^(x291-x292)));

	if (t55 != -16742805572747LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x301 = -1LL;
	uint64_t x302 = UINT64_MAX;
	int8_t x303 = 12;
	volatile uint16_t x304 = UINT16_MAX;
	uint64_t t56 = 7631257037LLU;

	t56 = (x301+(x302^(x303-x304)));

	if (t56 != 65521LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = -492;
	static int8_t x314 = -1;
	uint32_t x315 = 2033U;
	uint32_t t57 = 41602431U;

	t57 = (x313+(x314^(x315-x316)));

	if (t57 != 4294964642U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x318 = 1U;
	int64_t x320 = -1LL;
	volatile int64_t t58 = 626898038972337813LL;

	t58 = (x317+(x318^(x319-x320)));

	if (t58 != 7651LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MIN;
	uint64_t t59 = 2090936LLU;

	t59 = (x329+(x330^(x331-x332)));

	if (t59 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x334 = INT64_MIN;
	uint64_t x335 = UINT64_MAX;
	volatile uint64_t t60 = 602171LLU;

	t60 = (x333+(x334^(x335-x336)));

	if (t60 != 9223372036854775551LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x337 = -1;
	int64_t x338 = -1LL;
	uint32_t x339 = 2236U;
	int32_t x340 = -1;
	int64_t t61 = -30LL;

	t61 = (x337+(x338^(x339-x340)));

	if (t61 != -2239LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x341 = INT32_MIN;
	volatile uint64_t x342 = UINT64_MAX;
	uint64_t x343 = UINT64_MAX;
	uint64_t t62 = 1357423LLU;

	t62 = (x341+(x342^(x343-x344)));

	if (t62 != 18446744071559879817LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x345 = -1198LL;
	static int8_t x347 = INT8_MIN;
	uint16_t x348 = 3541U;
	int64_t t63 = 30977125LL;

	t63 = (x345+(x346^(x347-x348)));

	if (t63 != -30298LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x349 = -7623LL;
	int64_t x350 = -414889LL;
	int8_t x352 = INT8_MAX;
	int64_t t64 = -1LL;

	t64 = (x349+(x350^(x351-x352)));

	if (t64 != 407312LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x361 = -1;
	static int32_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int8_t x364 = 1;
	int32_t t65 = -28967435;

	t65 = (x361+(x362^(x363-x364)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x365 = 56;
	int64_t x366 = INT64_MIN;
	volatile uint8_t x367 = 25U;
	int64_t x368 = INT64_MAX;
	volatile int64_t t66 = 3630304014368256413LL;

	t66 = (x365+(x366^(x367-x368)));

	if (t66 != 82LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x370 = 108U;
	volatile int64_t t67 = -228869LL;

	t67 = (x369+(x370^(x371-x372)));

	if (t67 != -1568386878023278997LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x382 = -5916;
	int64_t x383 = -270626278722724841LL;
	uint64_t x384 = 29262LLU;

	t68 = (x381+(x382^(x383-x384)));

	if (t68 != 9493998315577524524LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x387 = INT32_MAX;
	volatile int32_t x388 = INT32_MAX;
	static volatile uint32_t t69 = 12U;

	t69 = (x385+(x386^(x387-x388)));

	if (t69 != 4294934527U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x393 = 58U;
	static uint32_t x394 = 7004284U;
	uint16_t x395 = 55U;
	uint16_t x396 = 72U;

	t70 = (x393+(x394^(x395-x396)));

	if (t70 != 4287963085U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x401 = INT32_MIN;
	uint32_t x402 = 229949807U;
	int32_t x403 = -1;
	static volatile int64_t t71 = -31073616LL;

	t71 = (x401+(x402^(x403-x404)));

	if (t71 != 9223372034477342352LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x406 = -3;
	int64_t t72 = -89078927045260LL;

	t72 = (x405+(x406^(x407-x408)));

	if (t72 != 122LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x410 = -1;
	static int8_t x412 = INT8_MIN;

	t73 = (x409+(x410^(x411-x412)));

	if (t73 != 4294850530LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x414 = 6762LL;
	int64_t x415 = INT64_MAX;
	int8_t x416 = 19;

	t74 = (x413+(x414^(x415-x416)));

	if (t74 != 9223372034707285382LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x417 = INT8_MIN;
	volatile int8_t x419 = INT8_MIN;
	uint64_t t75 = 32689928LLU;

	t75 = (x417+(x418^(x419-x420)));

	if (t75 != 18446743662611313605LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x421 = INT16_MIN;
	uint32_t x423 = 915U;
	int8_t x424 = -1;
	static volatile uint32_t t76 = 85905040U;

	t76 = (x421+(x422^(x423-x424)));

	if (t76 != 2147451796U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x425 = -1;
	static uint16_t x426 = 4177U;
	uint64_t x428 = 2189651262183498469LLU;

	t77 = (x425+(x426^(x427-x428)));

	if (t77 != 16257092811526114634LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x430 = INT8_MIN;
	uint8_t x432 = 6U;

	t78 = (x429+(x430^(x431-x432)));

	if (t78 != -136) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x434 = INT16_MIN;
	int8_t x435 = 15;
	volatile uint32_t x436 = 94075774U;

	t79 = (x433+(x434^(x435-x436)));

	if (t79 != 94045328U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x438 = 9004U;
	int64_t x439 = 122349709LL;
	static volatile int64_t t80 = 31206LL;

	t80 = (x437+(x438^(x439-x440)));

	if (t80 != 122342313LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x441 = 4145;
	int8_t x442 = INT8_MAX;
	uint8_t x443 = UINT8_MAX;
	static uint64_t x444 = UINT64_MAX;
	volatile uint64_t t81 = 14248867LLU;

	t81 = (x441+(x442^(x443-x444)));

	if (t81 != 4528LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x449 = INT32_MAX;
	static uint16_t x450 = 1U;
	uint8_t x451 = 0U;
	static int32_t t82 = 3775;

	t82 = (x449+(x450^(x451-x452)));

	if (t82 != 2147483391) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x454 = -1;
	static uint16_t x455 = 2U;
	int8_t x456 = -1;
	int64_t t83 = -23LL;

	t83 = (x453+(x454^(x455-x456)));

	if (t83 != 403625221454LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x457 = INT8_MIN;
	volatile int64_t x459 = -1LL;
	int64_t x460 = 2204223578905LL;

	t84 = (x457+(x458^(x459-x460)));

	if (t84 != -2207307763366LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x469 = 1U;
	int8_t x470 = INT8_MIN;
	static int32_t x471 = INT32_MAX;
	int64_t t85 = 70489695669383297LL;

	t85 = (x469+(x470^(x471-x472)));

	if (t85 != -2147483775LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x473 = 0U;
	uint64_t x476 = 12LLU;

	t86 = (x473+(x474^(x475-x476)));

	if (t86 != 18446744073709470366LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = 52;
	static uint8_t x478 = 5U;
	uint64_t x479 = 4359331772857614LLU;
	volatile int16_t x480 = -1;
	static volatile uint64_t t87 = 16168826660015LLU;

	t87 = (x477+(x478^(x479-x480)));

	if (t87 != 4359331772857662LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x481 = 134U;
	static volatile int8_t x482 = INT8_MAX;
	uint8_t x483 = 22U;
	uint8_t x484 = 4U;
	static int32_t t88 = -470008;

	t88 = (x481+(x482^(x483-x484)));

	if (t88 != 243) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x486 = 1;
	int8_t x487 = -1;
	int8_t x488 = -1;
	volatile uint64_t t89 = 6512LLU;

	t89 = (x485+(x486^(x487-x488)));

	if (t89 != 177415649028361388LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x489 = -39;
	volatile uint16_t x490 = UINT16_MAX;
	static volatile uint64_t x491 = 32336760086694007LLU;
	int8_t x492 = -1;
	volatile uint64_t t90 = 8137849LLU;

	t90 = (x489+(x490^(x491-x492)));

	if (t90 != 32336760086689632LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x493 = 10;
	uint64_t x494 = UINT64_MAX;
	uint8_t x495 = 37U;
	static volatile uint64_t t91 = 915419193098607540LLU;

	t91 = (x493+(x494^(x495-x496)));

	if (t91 != 18446744073709518820LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x497 = INT8_MIN;
	volatile int16_t x498 = -1;
	volatile uint8_t x499 = UINT8_MAX;
	volatile uint32_t t92 = 1851901U;

	t92 = (x497+(x498^(x499-x500)));

	if (t92 != 823496050U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x502 = 31U;
	static uint32_t x503 = 16480U;
	uint32_t t93 = 430790U;

	t93 = (x501+(x502^(x503-x504)));

	if (t93 != 2147500047U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x505 = -1;
	static uint8_t x506 = 1U;
	static int8_t x507 = 0;
	int64_t x508 = 259186858847085845LL;
	volatile int64_t t94 = -17065900920LL;

	t94 = (x505+(x506^(x507-x508)));

	if (t94 != -259186858847085847LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x509 = INT64_MIN;
	volatile int64_t t95 = -502871LL;

	t95 = (x509+(x510^(x511-x512)));

	if (t95 != -11766LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x521 = 161568;
	static int32_t x522 = -9;
	uint8_t x523 = 6U;
	int32_t x524 = -1;
	static int32_t t96 = 0;

	t96 = (x521+(x522^(x523-x524)));

	if (t96 != 161552) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x529 = 1;
	static volatile uint16_t x530 = 0U;
	int32_t x531 = 68;
	int64_t x532 = -1LL;

	t97 = (x529+(x530^(x531-x532)));

	if (t97 != 70LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x535 = UINT8_MAX;
	volatile int64_t t98 = -715546454LL;

	t98 = (x533+(x534^(x535-x536)));

	if (t98 != 70015LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x541 = INT16_MIN;
	static int64_t x542 = INT64_MIN;
	uint16_t x543 = 154U;
	static int64_t x544 = INT64_MAX;

	t99 = (x541+(x542^(x543-x544)));

	if (t99 != -32613LL) { NG(); } else { ; }
	
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

