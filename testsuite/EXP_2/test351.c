#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
static int16_t x3 = -1;
int64_t t1 = INT64_MIN;
int8_t x17 = -1;
int16_t x19 = INT16_MIN;
int32_t x21 = -494543521;
int16_t x22 = INT16_MAX;
uint32_t x36 = 90U;
uint64_t t6 = 22079310LLU;
static volatile int16_t x37 = 15;
volatile int32_t x39 = -534067159;
int32_t x44 = 9161;
static volatile uint64_t x47 = UINT64_MAX;
int16_t x48 = INT16_MAX;
volatile int32_t t11 = 23434094;
static int16_t x63 = INT16_MIN;
volatile uint64_t x68 = 83869269614681LLU;
uint32_t x70 = 190606U;
int32_t x72 = 239109350;
int32_t x73 = INT32_MIN;
int16_t x78 = 5086;
int64_t t17 = 15044787520916LL;
int8_t x81 = INT8_MIN;
static int64_t x83 = 6790735281LL;
int64_t x87 = -1LL;
uint8_t x96 = UINT8_MAX;
int64_t t20 = -240LL;
int64_t x101 = -416957LL;
int32_t x104 = INT32_MIN;
uint64_t x110 = 4465222091654312764LLU;
uint8_t x112 = UINT8_MAX;
int8_t x117 = INT8_MIN;
int8_t x125 = INT8_MAX;
int16_t x133 = -1;
int8_t x141 = INT8_MAX;
int16_t x151 = -333;
int64_t t30 = -11332878LL;
int16_t x153 = INT16_MAX;
static volatile int16_t x155 = -1;
uint64_t x157 = 257328840002879LLU;
int32_t x160 = -1;
volatile uint64_t t32 = 71LLU;
int16_t x161 = -3;
int32_t x168 = -1;
int64_t t34 = -3160057110LL;
static uint8_t x206 = 38U;
int16_t x208 = INT16_MIN;
int16_t x229 = -1;
int64_t x232 = INT64_MIN;
volatile uint64_t x235 = 9437938433LLU;
static int32_t x242 = INT32_MIN;
int16_t x255 = 42;
static volatile uint32_t x262 = 502U;
int64_t x264 = 73912382666LL;
uint64_t x270 = 3120LLU;
uint16_t x272 = 0U;
uint16_t x279 = UINT16_MAX;
volatile uint64_t t52 = 0LLU;
uint8_t x301 = 9U;
static uint32_t x302 = UINT32_MAX;
static int16_t x341 = INT16_MAX;
int32_t x342 = INT32_MAX;
int32_t x343 = 0;
int8_t x346 = -1;
int8_t x348 = -4;
int64_t t64 = 57287LL;
static int64_t x366 = 864LL;
int64_t x379 = -1LL;
static int64_t x385 = INT64_MAX;
uint64_t t74 = 1610007580188910LLU;
volatile uint32_t t75 = 181U;
int64_t x425 = -1LL;
volatile int64_t t79 = -138668161445852903LL;
int32_t t80 = 58;
volatile int32_t t81 = 1199;
static volatile uint8_t x445 = 73U;
int16_t x466 = -1401;
uint64_t t87 = 171LLU;
int64_t x482 = -1LL;
volatile int64_t t89 = -9566LL;
int64_t x485 = INT64_MIN;
uint64_t x487 = 181472530985LLU;
volatile int8_t x491 = -1;
volatile uint32_t x492 = UINT32_MAX;
uint8_t x502 = UINT8_MAX;
uint32_t x504 = UINT32_MAX;
int64_t t93 = -806LL;
int32_t x509 = INT32_MIN;
volatile int64_t x511 = -167351585LL;
static int16_t x512 = 2104;
static volatile int32_t x521 = 3999964;
uint8_t x524 = 29U;
static volatile uint64_t t97 = 106549414981361LLU;
uint32_t x533 = 500906U;
int16_t x535 = INT16_MAX;


void f0(void) {
	int8_t x2 = INT8_MIN;
	uint32_t x4 = UINT32_MAX;
	static uint32_t t0 = 26310U;

	t0 = ((x1+(x2*x3))^x4);

	if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MAX;
	int8_t x7 = -1;
	int64_t x8 = INT64_MIN;

	t1 = ((x5+(x6*x7))^x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x18 = UINT16_MAX;
	uint32_t x20 = UINT32_MAX;
	uint32_t t2 = 22872U;

	t2 = ((x17+(x18*x19))^x20);

	if (t2 != 2147450880U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x23 = -737LL;
	int16_t x24 = INT16_MAX;
	int64_t t3 = 26604996LL;

	t3 = ((x21+(x22*x23))^x24);

	if (t3 != -518709313LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 1027513LLU;
	int64_t x26 = 29524469LL;
	volatile int32_t x27 = 440590;
	volatile int16_t x28 = -1;
	volatile uint64_t t4 = 1900LLU;

	t4 = ((x25+(x26*x27))^x28);

	if (t4 != 18446731065522727392LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = 612044LLU;
	int16_t x30 = -3;
	uint16_t x31 = 13U;
	uint32_t x32 = UINT32_MAX;
	volatile uint64_t t5 = 11867LLU;

	t5 = ((x29+(x30*x31))^x32);

	if (t5 != 4294355290LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = UINT8_MAX;
	static uint64_t x34 = 1749218LLU;
	uint32_t x35 = UINT32_MAX;

	t6 = ((x33+(x34*x35))^x36);

	if (t6 != 7512834101825607LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x38 = -1LL;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t7 = 1807460606159028661LLU;

	t7 = ((x37+(x38*x39))^x40);

	if (t7 != 18446744073175484441LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = INT32_MAX;
	static volatile int64_t x42 = INT64_MAX;
	int64_t x43 = -1LL;
	static volatile int64_t t8 = 285653263462428LL;

	t8 = ((x41+(x42*x43))^x44);

	if (t8 != -9223372034707282999LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	int8_t x46 = INT8_MIN;
	static uint64_t t9 = 174216042366148350LLU;

	t9 = ((x45+(x46*x47))^x48);

	if (t9 != 32640LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MIN;
	static int16_t x50 = -3;
	uint64_t x51 = UINT64_MAX;
	static volatile int8_t x52 = 0;
	uint64_t t10 = 12905754517779540LLU;

	t10 = ((x49+(x50*x51))^x52);

	if (t10 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x53 = 2U;
	int32_t x54 = -1;
	int16_t x55 = INT16_MAX;
	static int8_t x56 = -1;

	t11 = ((x53+(x54*x55))^x56);

	if (t11 != 32764) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = 22611690LL;
	static int8_t x58 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	volatile int64_t x60 = INT64_MIN;
	volatile int64_t t12 = -5360LL;

	t12 = ((x57+(x58*x59))^x60);

	if (t12 != -9223372036832196758LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MAX;
	int8_t x64 = -1;
	volatile int32_t t13 = 0;

	t13 = ((x61+(x62*x63))^x64);

	if (t13 != 1073708928) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 544908LL;
	int16_t x66 = -62;
	volatile int16_t x67 = INT16_MAX;
	volatile uint64_t t14 = 5LLU;

	t14 = ((x65+(x66*x67))^x68);

	if (t14 != 18446660204439056531LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int16_t x71 = 0;
	static volatile int64_t t15 = -290LL;

	t15 = ((x69+(x70*x71))^x72);

	if (t15 != -9223372036615666458LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x74 = UINT64_MAX;
	static uint16_t x75 = UINT16_MAX;
	volatile int32_t x76 = INT32_MIN;
	volatile uint64_t t16 = 5LLU;

	t16 = ((x73+(x74*x75))^x76);

	if (t16 != 4294901761LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = -1;
	volatile int8_t x79 = -2;
	int64_t x80 = INT64_MIN;

	t17 = ((x77+(x78*x79))^x80);

	if (t17 != 9223372036854765635LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = -1;
	uint8_t x84 = 12U;
	volatile int64_t t18 = -3422263511LL;

	t18 = ((x81+(x82*x83))^x84);

	if (t18 != -6790735421LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = UINT8_MAX;
	int32_t x86 = -7;
	uint32_t x88 = 0U;
	static int64_t t19 = -18LL;

	t19 = ((x85+(x86*x87))^x88);

	if (t19 != 262LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = 41663453134970899LL;
	int8_t x94 = INT8_MAX;
	uint8_t x95 = 16U;

	t20 = ((x93+(x94*x95))^x96);

	if (t20 != 41663453134973180LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x102 = INT32_MIN;
	uint64_t x103 = 109819341867LLU;
	uint64_t t21 = 3376403868321LLU;

	t21 = ((x101+(x102*x103))^x104);

	if (t21 != 14474312011136738115LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = 7LL;
	static int8_t x106 = 1;
	static int16_t x107 = INT16_MIN;
	static uint64_t x108 = 382677LLU;
	volatile uint64_t t22 = 3LLU;

	t22 = ((x105+(x106*x107))^x108);

	if (t22 != 18446744073709180626LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = 82172335900929131LL;
	uint64_t x111 = 62099013LLU;
	static uint64_t t23 = 2766148706902LLU;

	t23 = ((x109+(x110*x111))^x112);

	if (t23 != 17247153049841058664LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x118 = INT8_MAX;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MAX;
	volatile int32_t t24 = -1;

	t24 = ((x117+(x118*x119))^x120);

	if (t24 != -16385) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x126 = UINT16_MAX;
	int64_t x127 = -1LL;
	volatile int32_t x128 = INT32_MIN;
	int64_t t25 = -20LL;

	t25 = ((x125+(x126*x127))^x128);

	if (t25 != 2147418240LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x129 = INT32_MAX;
	int16_t x130 = -1;
	static uint16_t x131 = 55U;
	uint16_t x132 = UINT16_MAX;
	int32_t t26 = 26142;

	t26 = ((x129+(x130*x131))^x132);

	if (t26 != 2147418167) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	uint32_t t27 = UINT32_MAX;

	t27 = ((x133+(x134*x135))^x136);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x142 = INT32_MAX;
	uint32_t x143 = 81700906U;
	uint8_t x144 = 29U;
	uint32_t t28 = 108127U;

	t28 = ((x141+(x142*x143))^x144);

	if (t28 != 4213266504U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x145 = -5223608840274LL;
	uint16_t x146 = UINT16_MAX;
	static int16_t x147 = -6818;
	static uint32_t x148 = 37849510U;
	int64_t t29 = -16262687824656107LL;

	t29 = ((x145+(x146*x147))^x148);

	if (t29 != -5224084986890LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 493U;
	volatile int16_t x150 = 1;
	int64_t x152 = INT64_MIN;

	t30 = ((x149+(x150*x151))^x152);

	if (t30 != -9223372036854775648LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x154 = INT16_MIN;
	int64_t x156 = -2829481461LL;
	int64_t t31 = 99224LL;

	t31 = ((x153+(x154*x155))^x156);

	if (t31 != -2829486604LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x158 = UINT64_MAX;
	volatile uint64_t x159 = UINT64_MAX;

	t32 = ((x157+(x158*x159))^x160);

	if (t32 != 18446486744869548735LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x162 = 1;
	volatile uint64_t x163 = 47871437701724LLU;
	int32_t x164 = -1638;
	uint64_t t33 = 1482373759597656004LLU;

	t33 = ((x161+(x162*x163))^x164);

	if (t33 != 18446696202271849411LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MAX;
	volatile int64_t x166 = -2651639LL;
	int32_t x167 = 86250;

	t34 = ((x165+(x166*x167))^x168);

	if (t34 != 228703830982LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x169 = 4823884820145952LL;
	int8_t x170 = -19;
	int16_t x171 = 23;
	int16_t x172 = -1;
	int64_t t35 = -2974951LL;

	t35 = ((x169+(x170*x171))^x172);

	if (t35 != -4823884820145516LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = 3U;
	uint64_t x174 = UINT64_MAX;
	static int32_t x175 = -3;
	static uint8_t x176 = UINT8_MAX;
	uint64_t t36 = 15LLU;

	t36 = ((x173+(x174*x175))^x176);

	if (t36 != 249LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = INT64_MIN;
	static uint64_t x190 = UINT64_MAX;
	static volatile int64_t x191 = -720610711554203746LL;
	int16_t x192 = INT16_MIN;
	uint64_t t37 = 412999475502602021LLU;

	t37 = ((x189+(x190*x191))^x192);

	if (t37 != 8502761325300555874LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x205 = UINT8_MAX;
	static int16_t x207 = -1;
	volatile int32_t t38 = 506634;

	t38 = ((x205+(x206*x207))^x208);

	if (t38 != -32551) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x209 = 157U;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = -1;
	int64_t x212 = INT64_MAX;
	volatile uint64_t t39 = 1678821789685598860LLU;

	t39 = ((x209+(x210*x211))^x212);

	if (t39 != 9223372036854775649LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x217 = 3760297LLU;
	static volatile int8_t x218 = -1;
	uint8_t x219 = 0U;
	int64_t x220 = 908791705LL;
	static volatile uint64_t t40 = 822LLU;

	t40 = ((x217+(x218*x219))^x220);

	if (t40 != 907177776LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x221 = -15;
	volatile uint64_t x222 = 331895214266665405LLU;
	int64_t x223 = 135689LL;
	int32_t x224 = -1;
	static volatile uint64_t t41 = 46LLU;

	t41 = ((x221+(x222*x223))^x224);

	if (t41 != 12419299369162907241LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x230 = -1;
	static int16_t x231 = INT16_MAX;
	static int64_t t42 = 26464160125019340LL;

	t42 = ((x229+(x230*x231))^x232);

	if (t42 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x233 = -12033994LL;
	int32_t x234 = -1;
	uint16_t x236 = 468U;
	uint64_t t43 = 128995607LLU;

	t43 = ((x233+(x234*x235))^x236);

	if (t43 != 18446744064259579105LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = 1205;
	int32_t x239 = 5298;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t44 = -6568436769LL;

	t44 = ((x237+(x238*x239))^x240);

	if (t44 != -9223372036848380379LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = -3060;
	uint64_t x243 = UINT64_MAX;
	static int64_t x244 = 5LL;
	uint64_t t45 = 502919381710954LLU;

	t45 = ((x241+(x242*x243))^x244);

	if (t45 != 2147480585LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x253 = -8225534921176LL;
	static int64_t x254 = 144518LL;
	uint64_t x256 = 16998031905911026LLU;
	static uint64_t t46 = 7595746142104699780LLU;

	t46 = ((x253+(x254*x255))^x256);

	if (t46 != 18429744637945554134LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x261 = UINT8_MAX;
	uint64_t x263 = 768208LLU;
	static uint64_t t47 = 1695686531679LLU;

	t47 = ((x261+(x262*x263))^x264);

	if (t47 != 73609583637LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x269 = 64616478;
	static int32_t x271 = INT32_MAX;
	uint64_t t48 = 27563354996LLU;

	t48 = ((x269+(x270*x271))^x272);

	if (t48 != 6700213595118LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x277 = UINT64_MAX;
	int32_t x278 = -1;
	static uint16_t x280 = UINT16_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x277+(x278*x279))^x280);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MAX;
	static volatile uint16_t x283 = 3U;
	uint16_t x284 = 7950U;
	volatile int64_t t50 = 3112572LL;

	t50 = ((x281+(x282*x283))^x284);

	if (t50 != -9223372036854685453LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = -1LL;
	int8_t x291 = 0;
	uint64_t x292 = 2628831289935430LLU;
	static volatile uint64_t t51 = 62502044LLU;

	t51 = ((x289+(x290*x291))^x292);

	if (t51 != 9226000868144711238LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x293 = 257014025LLU;
	uint32_t x294 = 13U;
	static uint32_t x295 = 390986U;
	static uint8_t x296 = UINT8_MAX;

	t52 = ((x293+(x294*x295))^x296);

	if (t52 != 262096692LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = -1LL;
	volatile int64_t x299 = -854021LL;
	int16_t x300 = -1;
	volatile int64_t t53 = 6LL;

	t53 = ((x297+(x298*x299))^x300);

	if (t53 != 9223372036853921786LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x303 = -62LL;
	int16_t x304 = INT16_MIN;
	int64_t t54 = -3352784011551634LL;

	t54 = ((x301+(x302*x303))^x304);

	if (t54 != 266287939655LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x305 = -43;
	int64_t x306 = -1LL;
	int32_t x307 = INT32_MIN;
	static int32_t x308 = INT32_MIN;
	static int64_t t55 = -51611181LL;

	t55 = ((x305+(x306*x307))^x308);

	if (t55 != -43LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x309 = -71205874;
	static uint16_t x310 = 2U;
	int8_t x311 = INT8_MIN;
	static uint64_t x312 = 4883234360034370LLU;
	volatile uint64_t t56 = 3186430720348LLU;

	t56 = ((x309+(x310*x311))^x312);

	if (t56 != 18441860839282835276LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x313 = 64329452U;
	int16_t x314 = INT16_MAX;
	int64_t x315 = 53345141747857LL;
	uint8_t x316 = UINT8_MAX;
	static int64_t t57 = 44837188055860LL;

	t57 = ((x313+(x314*x315))^x316);

	if (t57 != 1747960259716359844LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x317 = 26675766U;
	int32_t x318 = INT32_MIN;
	static uint64_t x319 = 4337377992996LLU;
	uint16_t x320 = 27U;
	uint64_t t58 = 223482LLU;

	t58 = ((x317+(x318*x319))^x320);

	if (t58 != 1157442069381712429LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x321 = 24U;
	int32_t x322 = 5;
	int32_t x323 = -1;
	uint32_t x324 = 44U;
	volatile uint32_t t59 = 698206U;

	t59 = ((x321+(x322*x323))^x324);

	if (t59 != 63U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x325 = UINT8_MAX;
	static int8_t x326 = -1;
	int16_t x327 = INT16_MIN;
	static int64_t x328 = -1LL;
	int64_t t60 = 80825309164799765LL;

	t60 = ((x325+(x326*x327))^x328);

	if (t60 != -33024LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x329 = INT32_MAX;
	uint64_t x330 = 1LLU;
	volatile int8_t x331 = INT8_MIN;
	static int32_t x332 = -1;
	volatile uint64_t t61 = 5185171220LLU;

	t61 = ((x329+(x330*x331))^x332);

	if (t61 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x344 = INT64_MIN;
	int64_t t62 = 4881319635LL;

	t62 = ((x341+(x342*x343))^x344);

	if (t62 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x345 = INT16_MAX;
	int64_t x347 = -1LL;
	volatile int64_t t63 = 1471LL;

	t63 = ((x345+(x346*x347))^x348);

	if (t63 != -32772LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x349 = -1;
	int64_t x350 = -1LL;
	int8_t x351 = INT8_MAX;
	int32_t x352 = INT32_MAX;

	t64 = ((x349+(x350*x351))^x352);

	if (t64 != -2147483521LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x353 = -71;
	int16_t x354 = 5;
	uint16_t x355 = 2U;
	int16_t x356 = 13383;
	volatile int32_t t65 = -125387;

	t65 = ((x353+(x354*x355))^x356);

	if (t65 != -13436) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x357 = 41U;
	int8_t x358 = -5;
	uint32_t x359 = 27621U;
	int64_t x360 = INT64_MIN;
	int64_t t66 = -13410165427141LL;

	t66 = ((x357+(x358*x359))^x360);

	if (t66 != -9223372032559946576LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x361 = 7288613333376LLU;
	int64_t x362 = -1343898723673LL;
	static int64_t x363 = -1LL;
	uint64_t x364 = 193792LLU;
	uint64_t t67 = 1022487821115LLU;

	t67 = ((x361+(x362*x363))^x364);

	if (t67 != 8632512183257LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x365 = 0;
	volatile uint32_t x367 = 1U;
	static int64_t x368 = INT64_MIN;
	int64_t t68 = -6651374LL;

	t68 = ((x365+(x366*x367))^x368);

	if (t68 != -9223372036854774944LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x373 = -1;
	volatile uint32_t x374 = 0U;
	int8_t x375 = 0;
	int32_t x376 = -1;
	volatile uint32_t t69 = 733U;

	t69 = ((x373+(x374*x375))^x376);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x377 = -32;
	uint32_t x378 = UINT32_MAX;
	int32_t x380 = -1;
	int64_t t70 = 462693004LL;

	t70 = ((x377+(x378*x379))^x380);

	if (t70 != 4294967326LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x386 = 4LLU;
	uint64_t x387 = 62426LLU;
	volatile int32_t x388 = INT32_MIN;
	volatile uint64_t t71 = 123968759549LLU;

	t71 = ((x385+(x386*x387))^x388);

	if (t71 != 9223372034707541863LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x393 = -38101LL;
	uint8_t x394 = 16U;
	int8_t x395 = INT8_MAX;
	int64_t x396 = -1LL;
	int64_t t72 = 181732768337542907LL;

	t72 = ((x393+(x394*x395))^x396);

	if (t72 != 36068LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = INT16_MAX;
	volatile uint8_t x400 = UINT8_MAX;
	uint64_t t73 = 19390671LLU;

	t73 = ((x397+(x398*x399))^x400);

	if (t73 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x401 = 9U;
	int16_t x402 = INT16_MIN;
	uint64_t x403 = 407076272253LLU;
	int16_t x404 = 14228;

	t74 = ((x401+(x402*x403))^x404);

	if (t74 != 18433404998420379549LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x405 = 1U;
	volatile int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MAX;
	static volatile int32_t x408 = 363741017;

	t75 = ((x405+(x406*x407))^x408);

	if (t75 != 3584999256U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x409 = 35;
	static uint64_t x410 = 6470798794446LLU;
	uint8_t x411 = 2U;
	volatile int8_t x412 = -1;
	volatile uint64_t t76 = 111127605184488537LLU;

	t76 = ((x409+(x410*x411))^x412);

	if (t76 != 18446731132111962688LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x413 = INT16_MIN;
	static volatile uint32_t x414 = 7995688U;
	volatile uint64_t x415 = UINT64_MAX;
	uint32_t x416 = 728U;
	uint64_t t77 = 492962807LLU;

	t77 = ((x413+(x414*x415))^x416);

	if (t77 != 18446744073701522432LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = INT64_MAX;
	volatile int16_t x418 = INT16_MIN;
	volatile uint8_t x419 = UINT8_MAX;
	int8_t x420 = INT8_MAX;
	int64_t t78 = 15511989469LL;

	t78 = ((x417+(x418*x419))^x420);

	if (t78 != 9223372036846419840LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x426 = 4U;
	uint32_t x427 = 1819U;
	static volatile int8_t x428 = INT8_MIN;

	t79 = ((x425+(x426*x427))^x428);

	if (t79 != -7189LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x429 = 0;
	int8_t x430 = 0;
	uint16_t x431 = UINT16_MAX;
	static int8_t x432 = 0;

	t80 = ((x429+(x430*x431))^x432);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x433 = INT32_MIN;
	volatile int8_t x434 = -1;
	int16_t x435 = INT16_MIN;
	int32_t x436 = 209584311;

	t81 = ((x433+(x434*x435))^x436);

	if (t81 != -1937866569) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x437 = 1LLU;
	uint32_t x438 = UINT32_MAX;
	static uint8_t x439 = 47U;
	int64_t x440 = 13369320486031LL;
	uint64_t t82 = 28LLU;

	t82 = ((x437+(x438*x439))^x440);

	if (t82 != 13366850931549LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x446 = INT16_MIN;
	int8_t x447 = 0;
	int8_t x448 = INT8_MIN;
	int32_t t83 = -8446344;

	t83 = ((x445+(x446*x447))^x448);

	if (t83 != -55) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x449 = 5U;
	volatile int64_t x450 = -184663018LL;
	int16_t x451 = 62;
	volatile int64_t x452 = INT64_MAX;
	int64_t t84 = 1090103365569431323LL;

	t84 = ((x449+(x450*x451))^x452);

	if (t84 != -9223372025405668698LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x453 = 1792820U;
	static int16_t x454 = 4217;
	volatile uint16_t x455 = 7043U;
	uint8_t x456 = 8U;
	volatile uint32_t t85 = 469U;

	t85 = ((x453+(x454*x455))^x456);

	if (t85 != 31493143U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x465 = 4;
	volatile uint8_t x467 = 7U;
	static int16_t x468 = INT16_MIN;
	int32_t t86 = 983527;

	t86 = ((x465+(x466*x467))^x468);

	if (t86 != 22965) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x469 = 760056359593LLU;
	int64_t x470 = INT64_MAX;
	uint16_t x471 = 1U;
	int16_t x472 = -1;

	t87 = ((x469+(x470*x471))^x472);

	if (t87 != 9223371276798416215LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x473 = -1LL;
	uint16_t x474 = 6473U;
	int64_t x475 = -1LL;
	int32_t x476 = -1;
	static volatile int64_t t88 = -370705422820656LL;

	t88 = ((x473+(x474*x475))^x476);

	if (t88 != 6473LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x481 = UINT32_MAX;
	int64_t x483 = 138587654457LL;
	uint8_t x484 = UINT8_MAX;

	t89 = ((x481+(x482*x483))^x484);

	if (t89 != -134292687303LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x486 = -20;
	volatile int64_t x488 = INT64_MIN;
	static uint64_t t90 = 2969LLU;

	t90 = ((x485+(x486*x487))^x488);

	if (t90 != 18446740444258931916LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x489 = 0;
	int16_t x490 = -1;
	volatile uint32_t t91 = 478U;

	t91 = ((x489+(x490*x491))^x492);

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x497 = 10;
	volatile uint16_t x498 = 283U;
	int8_t x499 = -1;
	uint8_t x500 = 4U;
	int32_t t92 = -1042967721;

	t92 = ((x497+(x498*x499))^x500);

	if (t92 != -277) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x501 = 654244083893613LL;
	int8_t x503 = INT8_MAX;

	t93 = ((x501+(x502*x503))^x504);

	if (t93 != 654247767571473LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x510 = 1;
	int64_t t94 = 165083158976LL;

	t94 = ((x509+(x510*x511))^x512);

	if (t94 != -2314837273LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x513 = -1;
	uint32_t x514 = 6782984U;
	volatile int8_t x515 = -1;
	int32_t x516 = -72117423;
	static volatile uint32_t t95 = 126U;

	t95 = ((x513+(x514*x515))^x516);

	if (t95 != 69987494U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x522 = 327U;
	static int64_t x523 = -1LL;
	int64_t t96 = 11487LL;

	t96 = ((x521+(x522*x523))^x524);

	if (t96 != 3999624LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x525 = -30832688402500LL;
	uint64_t x526 = 27LLU;
	int64_t x527 = INT64_MIN;
	int32_t x528 = 1072477;

	t97 = ((x525+(x526*x527))^x528);

	if (t97 != 9223341204167406305LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x534 = -1LL;
	int32_t x536 = 1;
	int64_t t98 = 40866545877823901LL;

	t98 = ((x533+(x534*x535))^x536);

	if (t98 != 468138LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x537 = 0U;
	int64_t x538 = INT64_MIN;
	static uint8_t x539 = 1U;
	volatile uint64_t x540 = UINT64_MAX;
	static uint64_t t99 = 991834253LLU;

	t99 = ((x537+(x538*x539))^x540);

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

