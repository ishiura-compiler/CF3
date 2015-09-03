#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = -1;
int8_t x13 = INT8_MIN;
volatile uint32_t t3 = 87828650U;
volatile int64_t t4 = 5764LL;
static uint32_t t5 = 15948040U;
static volatile int32_t x46 = -63578638;
uint64_t x49 = 398596188352LLU;
static uint64_t x63 = 179811286709LLU;
static volatile uint64_t t8 = 1636652825LLU;
static uint64_t x69 = 15LLU;
int8_t x72 = -6;
volatile uint64_t t9 = 26LLU;
int16_t x75 = -1;
int32_t x80 = INT32_MAX;
int32_t t11 = 144770682;
static volatile uint32_t t12 = 217955239U;
int8_t x93 = INT8_MAX;
int8_t x103 = -1;
volatile int64_t x109 = INT64_MIN;
int64_t t17 = -1191809425094178602LL;
uint8_t x133 = UINT8_MAX;
int8_t x154 = INT8_MIN;
int8_t x155 = INT8_MIN;
volatile int32_t t26 = 214415615;
int16_t x165 = -1;
int8_t x168 = 0;
volatile int32_t x169 = INT32_MAX;
int16_t x177 = INT16_MAX;
int8_t x178 = INT8_MAX;
static int8_t x199 = -1;
int64_t t34 = -130270405942041LL;
volatile int8_t x206 = 1;
volatile int8_t x212 = INT8_MIN;
static int16_t x216 = 0;
volatile uint64_t t39 = 633634085LLU;
int64_t x225 = -1LL;
volatile uint64_t x226 = 44520746732LLU;
static int32_t x245 = INT32_MAX;
int8_t x250 = INT8_MIN;
uint64_t x255 = 31LLU;
uint64_t x263 = 11417635529918741LLU;
static uint64_t t50 = 7430544219602155284LLU;
static int64_t x286 = INT64_MIN;
static uint64_t x287 = UINT64_MAX;
int16_t x303 = INT16_MAX;
static int32_t t55 = -135074947;
int16_t x313 = INT16_MIN;
static uint8_t x314 = UINT8_MAX;
volatile int32_t x318 = -1;
int64_t x319 = -38785823977LL;
int32_t t59 = -39933;
int8_t x331 = INT8_MIN;
volatile int32_t t61 = 1654;
int8_t x339 = -1;
static volatile int16_t x342 = -1;
int8_t x343 = INT8_MAX;
volatile int32_t t63 = -1;
int16_t x346 = -11099;
int32_t x355 = 2;
int16_t x357 = INT16_MIN;
static int32_t x361 = INT32_MIN;
int8_t x367 = INT8_MIN;
volatile int64_t t71 = 912965954513LL;
uint16_t x378 = 8259U;
int16_t x392 = -1;
int16_t x394 = INT16_MIN;
static volatile int64_t t75 = 124517656LL;
static volatile int16_t x402 = INT16_MIN;
static int32_t t76 = 37397;
volatile int8_t x410 = INT8_MAX;
uint64_t t79 = 9852594LLU;
volatile uint16_t x441 = UINT16_MAX;
uint64_t x443 = 789728106410557312LLU;
volatile int16_t x445 = 6;
volatile int32_t t82 = 3162032;
volatile int64_t x460 = INT64_MIN;
uint64_t x477 = 1228755LLU;
volatile uint64_t t88 = 240468LLU;
int16_t x482 = INT16_MIN;
static uint32_t x493 = UINT32_MAX;
volatile uint64_t t91 = 1163LLU;
volatile uint8_t x501 = UINT8_MAX;
static uint64_t x502 = 3080441994LLU;
static uint64_t t93 = 1567016948095LLU;
uint16_t x520 = 3U;
int64_t t96 = 2248137434853LL;
uint8_t x522 = 30U;
int8_t x523 = -23;
static uint64_t x532 = 15199501LLU;


void f0(void) {
	volatile int16_t x1 = -1;
	int8_t x2 = 0;
	int32_t x3 = -932;
	int32_t t0 = 938040944;

	t0 = ((x1|x2)^(x3*x4));

	if (t0 != -933) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	static volatile int64_t x10 = -21LL;
	static uint8_t x11 = 0U;
	int64_t x12 = INT64_MAX;
	volatile int64_t t1 = 6039827894LL;

	t1 = ((x9|x10)^(x11*x12));

	if (t1 != -21LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x14 = 6;
	int8_t x15 = -1;
	uint64_t x16 = 20706542046379LLU;
	volatile uint64_t t2 = 7050561LLU;

	t2 = ((x13|x14)^(x15*x16));

	if (t2 != 20706542046419LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 31994U;
	uint32_t x22 = 221809626U;
	static uint16_t x23 = UINT16_MAX;
	int8_t x24 = -1;

	t3 = ((x21|x22)^(x23*x24));

	if (t3 != 4073193467U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 26U;
	static int8_t x26 = -1;
	int64_t x27 = 196397LL;
	uint8_t x28 = UINT8_MAX;

	t4 = ((x25|x26)^(x27*x28));

	if (t4 != -50081236LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -1267493;
	uint8_t x34 = 2U;
	static volatile uint32_t x35 = 805526U;
	static int16_t x36 = -2422;

	t5 = ((x33|x34)^(x35*x36));

	if (t5 != 1952116743U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x45 = 3U;
	int8_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	static volatile uint64_t t6 = 6329312820059570LLU;

	t6 = ((x45|x46)^(x47*x48));

	if (t6 != 18446744073645972978LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x50 = INT64_MIN;
	int32_t x51 = 10694791;
	int8_t x52 = INT8_MIN;
	uint64_t t7 = 370LLU;

	t7 = ((x49|x50)^(x51*x52));

	if (t7 != 9223371639038186560LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x61 = INT64_MIN;
	static int32_t x62 = -1;
	volatile uint64_t x64 = UINT64_MAX;

	t8 = ((x61|x62)^(x63*x64));

	if (t8 != 179811286708LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x70 = UINT64_MAX;
	int16_t x71 = INT16_MIN;

	t9 = ((x69|x70)^(x71*x72));

	if (t9 != 18446744073709355007LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x73 = 875U;
	volatile int16_t x74 = INT16_MAX;
	uint64_t x76 = UINT64_MAX;
	static volatile uint64_t t10 = 44LLU;

	t10 = ((x73|x74)^(x75*x76));

	if (t10 != 32766LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x78 = 28U;
	volatile int8_t x79 = 1;

	t11 = ((x77|x78)^(x79*x80));

	if (t11 != -29) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = 6U;
	volatile int16_t x86 = INT16_MAX;
	uint32_t x87 = 693700U;
	static int8_t x88 = 29;

	t12 = ((x85|x86)^(x87*x88));

	if (t12 != 20089035U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = -4;
	volatile uint16_t x90 = 15U;
	uint16_t x91 = 1785U;
	static int8_t x92 = -20;
	volatile int32_t t13 = -1;

	t13 = ((x89|x90)^(x91*x92));

	if (t13 != 35699) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x94 = UINT8_MAX;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 1U;
	int32_t t14 = 35922133;

	t14 = ((x93|x94)^(x95*x96));

	if (t14 != -32513) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	uint64_t x104 = 218134900508409LLU;
	static volatile uint64_t t15 = 513651077955623LLU;

	t15 = ((x101|x102)^(x103*x104));

	if (t15 != 218134900508408LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = 4996;
	static volatile uint8_t x106 = UINT8_MAX;
	volatile int16_t x107 = INT16_MAX;
	volatile uint8_t x108 = UINT8_MAX;
	static int32_t t16 = -15655;

	t16 = ((x105|x106)^(x107*x108));

	if (t16 != 8350974) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x110 = INT32_MIN;
	static int16_t x111 = INT16_MIN;
	static uint16_t x112 = UINT16_MAX;

	t17 = ((x109|x110)^(x111*x112));

	if (t17 != 32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x117 = -208;
	int32_t x118 = -1;
	int8_t x119 = -1;
	static int16_t x120 = INT16_MAX;
	volatile int32_t t18 = -5706894;

	t18 = ((x117|x118)^(x119*x120));

	if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x121 = UINT64_MAX;
	static int16_t x122 = INT16_MIN;
	static uint32_t x123 = 19U;
	uint16_t x124 = UINT16_MAX;
	static uint64_t t19 = 3LLU;

	t19 = ((x121|x122)^(x123*x124));

	if (t19 != 18446744073708306450LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x129 = -41;
	uint8_t x130 = 123U;
	int8_t x131 = -1;
	int64_t x132 = -236LL;
	volatile int64_t t20 = 8018414975180049LL;

	t20 = ((x129|x130)^(x131*x132));

	if (t20 != -237LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x134 = INT64_MIN;
	int64_t x135 = -123162674768865LL;
	uint64_t x136 = 922364326LLU;
	uint64_t t21 = 24929184LLU;

	t21 = ((x133|x134)^(x135*x136));

	if (t21 != 3415876398902117349LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -5651009LL;
	static int16_t x143 = -916;
	static int16_t x144 = INT16_MIN;
	static int64_t t22 = -23359698200356755LL;

	t22 = ((x141|x142)^(x143*x144));

	if (t22 != -27015745LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x145 = INT8_MIN;
	static int64_t x146 = 4382593372581313LL;
	int32_t x147 = INT32_MIN;
	static uint64_t x148 = UINT64_MAX;
	static volatile uint64_t t23 = 1595270242LLU;

	t23 = ((x145|x146)^(x147*x148));

	if (t23 != 18446744071562067905LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = -1;
	uint16_t x150 = 96U;
	uint8_t x151 = 10U;
	static int8_t x152 = INT8_MAX;
	static int32_t t24 = -8544808;

	t24 = ((x149|x150)^(x151*x152));

	if (t24 != -1271) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x153 = 62538869283LL;
	static int16_t x156 = 765;
	volatile int64_t t25 = -3312809345LL;

	t25 = ((x153|x154)^(x155*x156));

	if (t25 != 97827LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = 16U;
	static int16_t x158 = -1;
	static uint8_t x159 = 5U;
	int16_t x160 = INT16_MIN;

	t26 = ((x157|x158)^(x159*x160));

	if (t26 != 163839) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MIN;
	volatile int32_t t27 = 19083;

	t27 = ((x165|x166)^(x167*x168));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x170 = -1LL;
	int16_t x171 = INT16_MIN;
	static int8_t x172 = INT8_MIN;
	static volatile int64_t t28 = -250455766674594976LL;

	t28 = ((x169|x170)^(x171*x172));

	if (t28 != -4194305LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x173 = -1;
	uint8_t x174 = 10U;
	int16_t x175 = 576;
	int16_t x176 = INT16_MIN;
	int32_t t29 = -1;

	t29 = ((x173|x174)^(x175*x176));

	if (t29 != 18874367) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x179 = INT8_MIN;
	int16_t x180 = -1;
	volatile int32_t t30 = 1;

	t30 = ((x177|x178)^(x179*x180));

	if (t30 != 32639) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x185 = -1;
	int64_t x186 = -1LL;
	int8_t x187 = INT8_MAX;
	static int32_t x188 = -1;
	static int64_t t31 = -186768LL;

	t31 = ((x185|x186)^(x187*x188));

	if (t31 != 126LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = 14;
	uint16_t x190 = 1695U;
	uint16_t x191 = UINT16_MAX;
	int8_t x192 = INT8_MIN;
	volatile int32_t t32 = -1;

	t32 = ((x189|x190)^(x191*x192));

	if (t32 != -8387041) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x193 = -1LL;
	int64_t x194 = -1LL;
	volatile uint64_t x195 = 116729LLU;
	static int32_t x196 = -131;
	volatile uint64_t t33 = 1037404218498850LLU;

	t33 = ((x193|x194)^(x195*x196));

	if (t33 != 15291498LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x198 = INT16_MIN;
	int64_t x200 = -12226LL;

	t34 = ((x197|x198)^(x199*x200));

	if (t34 != 4294955069LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x201 = 6430;
	int32_t x202 = -1;
	volatile uint8_t x203 = 12U;
	uint8_t x204 = 2U;
	int32_t t35 = 327365230;

	t35 = ((x201|x202)^(x203*x204));

	if (t35 != -25) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = INT8_MIN;
	int32_t x207 = INT32_MAX;
	uint32_t x208 = 1U;
	uint32_t t36 = 49326784U;

	t36 = ((x205|x206)^(x207*x208));

	if (t36 != 2147483774U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x209 = 310U;
	int32_t x210 = 28;
	uint16_t x211 = UINT16_MAX;
	volatile uint32_t t37 = 60707899U;

	t37 = ((x209|x210)^(x211*x212));

	if (t37 != 4286579134U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MAX;
	volatile int16_t x215 = -3286;
	volatile int32_t t38 = 3729460;

	t38 = ((x213|x214)^(x215*x216));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x217 = -1;
	uint64_t x218 = 704769976839865924LLU;
	uint8_t x219 = 41U;
	int32_t x220 = 8158321;

	t39 = ((x217|x218)^(x219*x220));

	if (t39 != 18446744073375060454LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x227 = 24U;
	volatile int32_t x228 = INT32_MAX;
	volatile uint64_t t40 = 51142933053468516LLU;

	t40 = ((x225|x226)^(x227*x228));

	if (t40 != 18446744069414584343LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x233 = 8035U;
	int64_t x234 = INT64_MAX;
	volatile uint32_t x235 = UINT32_MAX;
	static int32_t x236 = -514118;
	int64_t t41 = 1411439808028LL;

	t41 = ((x233|x234)^(x235*x236));

	if (t41 != 9223372036854261689LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x237 = -1;
	volatile int8_t x238 = 24;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 67610900LLU;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x237|x238)^(x239*x240));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x241 = UINT64_MAX;
	static volatile int32_t x242 = 112185544;
	int64_t x243 = -12642230LL;
	int64_t x244 = -1LL;
	static volatile uint64_t t43 = 592126685266998418LLU;

	t43 = ((x241|x242)^(x243*x244));

	if (t43 != 18446744073696909385LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x246 = -1;
	uint16_t x247 = 494U;
	uint8_t x248 = 61U;
	volatile int32_t t44 = 1;

	t44 = ((x245|x246)^(x247*x248));

	if (t44 != -30135) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x249 = INT16_MAX;
	uint8_t x251 = 0U;
	static volatile int16_t x252 = INT16_MIN;
	static int32_t t45 = 0;

	t45 = ((x249|x250)^(x251*x252));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = -23;
	uint16_t x254 = UINT16_MAX;
	uint16_t x256 = 0U;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x253|x254)^(x255*x256));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x257 = UINT8_MAX;
	uint8_t x258 = 81U;
	static volatile int32_t x259 = 251278366;
	int32_t x260 = -1;
	int32_t t47 = 121103665;

	t47 = ((x257|x258)^(x259*x260));

	if (t47 != -251278563) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x261 = 155851590041957LLU;
	uint16_t x262 = UINT16_MAX;
	volatile uint16_t x264 = UINT16_MAX;
	volatile uint64_t t48 = 19821830LLU;

	t48 = ((x261|x262)^(x263*x264));

	if (t48 != 10384825850973161748LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x273 = 28U;
	int32_t x274 = INT32_MIN;
	uint32_t x275 = UINT32_MAX;
	volatile int32_t x276 = 57628;
	uint32_t t49 = 82U;

	t49 = ((x273|x274)^(x275*x276));

	if (t49 != 2147426040U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x277 = -48;
	volatile uint64_t x278 = 11653LLU;
	int16_t x279 = INT16_MAX;
	static uint32_t x280 = 742U;

	t50 = ((x277|x278)^(x279*x280));

	if (t50 != 18446744073685238479LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x285 = UINT16_MAX;
	int32_t x288 = -1;
	uint64_t t51 = 388181567966LLU;

	t51 = ((x285|x286)^(x287*x288));

	if (t51 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t52 = 7;

	t52 = ((x289|x290)^(x291*x292));

	if (t52 != -4194305) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = 55038645121881123LLU;
	static volatile int64_t x296 = 1875078773223LL;
	volatile uint64_t t53 = 47568018LLU;

	t53 = ((x293|x294)^(x295*x296));

	if (t53 != 6335200696311690901LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x301 = 1;
	volatile uint32_t x302 = 2U;
	int8_t x304 = INT8_MAX;
	static volatile uint32_t t54 = 2103137U;

	t54 = ((x301|x302)^(x303*x304));

	if (t54 != 4161410U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x305 = INT8_MIN;
	uint8_t x306 = 5U;
	static int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MAX;

	t55 = ((x305|x306)^(x307*x308));

	if (t55 != 4194053) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x315 = 0;
	int8_t x316 = 1;
	volatile int32_t t56 = -303374640;

	t56 = ((x313|x314)^(x315*x316));

	if (t56 != -32513) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x317 = -1;
	static volatile uint64_t x320 = 2259646LLU;
	static uint64_t t57 = 3238001350LLU;

	t57 = ((x317|x318)^(x319*x320));

	if (t57 != 87642232006332141LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x321 = 305326809U;
	uint64_t x322 = 25630914LLU;
	static int16_t x323 = INT16_MIN;
	uint8_t x324 = 0U;
	uint64_t t58 = 42823217732LLU;

	t58 = ((x321|x322)^(x323*x324));

	if (t58 != 330824411LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = -3;
	int32_t x326 = INT32_MIN;
	static int8_t x327 = INT8_MIN;
	static int32_t x328 = 4616;

	t59 = ((x325|x326)^(x327*x328));

	if (t59 != 590845) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x329 = INT32_MAX;
	int8_t x330 = -1;
	int8_t x332 = -1;
	int32_t t60 = 240;

	t60 = ((x329|x330)^(x331*x332));

	if (t60 != -129) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = 39;
	int16_t x335 = INT16_MAX;
	volatile int8_t x336 = INT8_MIN;

	t61 = ((x333|x334)^(x335*x336));

	if (t61 != 4161703) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	volatile uint8_t x340 = UINT8_MAX;
	volatile uint64_t t62 = 16978727380LLU;

	t62 = ((x337|x338)^(x339*x340));

	if (t62 != 254LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x341 = -13;
	static int32_t x344 = -1;

	t63 = ((x341|x342)^(x343*x344));

	if (t63 != 126) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x345 = 1384967;
	volatile uint32_t x347 = 138583109U;
	int16_t x348 = 23;
	uint32_t t64 = 8U;

	t64 = ((x345|x346)^(x347*x348));

	if (t64 != 1107557524U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x349 = 887932;
	volatile int8_t x350 = -1;
	volatile int8_t x351 = INT8_MAX;
	uint64_t x352 = 1217491761526665LLU;
	volatile uint64_t t65 = 0LLU;

	t65 = ((x349|x350)^(x351*x352));

	if (t65 != 18292122619995665160LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x353 = INT64_MIN;
	static uint16_t x354 = UINT16_MAX;
	uint8_t x356 = UINT8_MAX;
	static int64_t t66 = -561421904LL;

	t66 = ((x353|x354)^(x355*x356));

	if (t66 != -9223372036854710783LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x358 = 1U;
	uint16_t x359 = 2689U;
	int8_t x360 = -1;
	volatile int32_t t67 = 1546;

	t67 = ((x357|x358)^(x359*x360));

	if (t67 != 30078) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x362 = -1;
	int8_t x363 = -2;
	int16_t x364 = INT16_MIN;
	int32_t t68 = -8146517;

	t68 = ((x361|x362)^(x363*x364));

	if (t68 != -65537) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x365 = -1LL;
	uint8_t x366 = UINT8_MAX;
	int32_t x368 = -1;
	volatile int64_t t69 = 714098554LL;

	t69 = ((x365|x366)^(x367*x368));

	if (t69 != -129LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x369 = UINT8_MAX;
	uint32_t x370 = UINT32_MAX;
	static int64_t x371 = -3366840109LL;
	uint32_t x372 = 123U;
	int64_t t70 = -1572724847LL;

	t70 = ((x369|x370)^(x371*x372));

	if (t70 != -414807354722LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x373 = INT32_MIN;
	static volatile int64_t x374 = INT64_MIN;
	volatile int16_t x375 = INT16_MAX;
	volatile uint32_t x376 = 2106U;

	t71 = ((x373|x374)^(x375*x376));

	if (t71 != -2078476346LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x377 = 19U;
	int32_t x379 = -1;
	uint32_t x380 = 145488997U;
	uint32_t t72 = 196U;

	t72 = ((x377|x378)^(x379*x380));

	if (t72 != 4149486536U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MAX;
	static uint8_t x387 = UINT8_MAX;
	int32_t x388 = -1;
	volatile int64_t t73 = -862LL;

	t73 = ((x385|x386)^(x387*x388));

	if (t73 != 254LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x389 = 1U;
	int8_t x390 = 4;
	static volatile int16_t x391 = INT16_MIN;
	volatile int32_t t74 = 1535;

	t74 = ((x389|x390)^(x391*x392));

	if (t74 != 32773) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x393 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	uint8_t x396 = 7U;

	t75 = ((x393|x394)^(x395*x396));

	if (t75 != 31872LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x401 = 1;
	int8_t x403 = 36;
	uint8_t x404 = 61U;

	t76 = ((x401|x402)^(x403*x404));

	if (t76 != -30571) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x405 = INT64_MAX;
	static volatile uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	uint64_t t77 = 7292532612LLU;

	t77 = ((x405|x406)^(x407*x408));

	if (t77 != 18446744073709535231LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x409 = INT32_MAX;
	int32_t x411 = INT32_MIN;
	int64_t x412 = 3LL;
	int64_t t78 = -2685138LL;

	t78 = ((x409|x410)^(x411*x412));

	if (t78 != -4294967297LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x425 = -9;
	uint64_t x426 = 944731675662015142LLU;
	volatile int32_t x427 = 20;
	uint8_t x428 = UINT8_MAX;

	t79 = ((x425|x426)^(x427*x428));

	if (t79 != 18446744073709546523LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x429 = INT8_MAX;
	int32_t x430 = INT32_MIN;
	uint8_t x431 = 0U;
	static int8_t x432 = 1;
	volatile int32_t t80 = 217815045;

	t80 = ((x429|x430)^(x431*x432));

	if (t80 != -2147483521) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x442 = INT64_MIN;
	uint32_t x444 = UINT32_MAX;
	uint64_t t81 = 359075967LLU;

	t81 = ((x441|x442)^(x443*x444));

	if (t81 != 14467974300155592575LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x446 = INT16_MIN;
	volatile uint8_t x447 = UINT8_MAX;
	volatile uint8_t x448 = 1U;

	t82 = ((x445|x446)^(x447*x448));

	if (t82 != -32519) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x449 = UINT32_MAX;
	volatile int64_t x450 = -941838704122441949LL;
	static int8_t x451 = INT8_MIN;
	volatile uint32_t x452 = 1U;
	static int64_t t83 = -2031834LL;

	t83 = ((x449|x450)^(x451*x452));

	if (t83 != -941838705415421825LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x453 = INT32_MAX;
	int32_t x454 = INT32_MAX;
	int16_t x455 = 0;
	volatile int8_t x456 = -5;
	int32_t t84 = INT32_MAX;

	t84 = ((x453|x454)^(x455*x456));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x457 = -1;
	volatile uint16_t x458 = 4883U;
	volatile uint32_t x459 = 0U;
	volatile int64_t t85 = 4047922LL;

	t85 = ((x457|x458)^(x459*x460));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x469 = 46;
	uint32_t x470 = 201337U;
	int8_t x471 = 52;
	static int8_t x472 = 0;
	volatile uint32_t t86 = 21012036U;

	t86 = ((x469|x470)^(x471*x472));

	if (t86 != 201343U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x473 = -1;
	uint8_t x474 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	uint8_t x476 = 123U;
	int32_t t87 = 0;

	t87 = ((x473|x474)^(x475*x476));

	if (t87 != 4030463) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x478 = 15U;
	uint8_t x479 = 3U;
	uint16_t x480 = UINT16_MAX;

	t88 = ((x477|x478)^(x479*x480));

	if (t88 != 1064994LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x481 = UINT8_MAX;
	int64_t x483 = INT64_MAX;
	int8_t x484 = -1;
	int64_t t89 = -44LL;

	t89 = ((x481|x482)^(x483*x484));

	if (t89 != 9223372036854743294LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x485 = INT8_MIN;
	int64_t x486 = INT64_MAX;
	static int8_t x487 = INT8_MAX;
	uint16_t x488 = UINT16_MAX;
	static volatile int64_t t90 = -1040248438980572818LL;

	t90 = ((x485|x486)^(x487*x488));

	if (t90 != -8322946LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x494 = INT8_MIN;
	uint64_t x495 = 95LLU;
	volatile uint64_t x496 = UINT64_MAX;

	t91 = ((x493|x494)^(x495*x496));

	if (t91 != 18446744069414584414LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x497 = 35;
	static int16_t x498 = INT16_MAX;
	int8_t x499 = -1;
	int8_t x500 = -1;
	static volatile int32_t t92 = -95;

	t92 = ((x497|x498)^(x499*x500));

	if (t92 != 32766) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x503 = INT16_MIN;
	int8_t x504 = INT8_MIN;

	t93 = ((x501|x502)^(x503*x504));

	if (t93 != 3084636415LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x505 = -1;
	static volatile uint32_t x506 = 8786U;
	volatile int16_t x507 = INT16_MIN;
	volatile uint64_t x508 = 827696369744LLU;
	uint64_t t94 = 3846LLU;

	t94 = ((x505|x506)^(x507*x508));

	if (t94 != 18419622116118233087LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x509 = INT8_MAX;
	int16_t x510 = -1;
	static uint8_t x511 = 0U;
	int64_t x512 = -5LL;
	int64_t t95 = 3902730736LL;

	t95 = ((x509|x510)^(x511*x512));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x517 = 81U;
	static volatile int32_t x518 = 0;
	int64_t x519 = -1LL;

	t96 = ((x517|x518)^(x519*x520));

	if (t96 != -84LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x521 = 45805269378845LL;
	int8_t x524 = 57;
	int64_t t97 = 817440LL;

	t97 = ((x521|x522)^(x523*x524));

	if (t97 != -45805269377538LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x525 = INT32_MIN;
	volatile int32_t x526 = -585942805;
	int16_t x527 = -1;
	static uint32_t x528 = 712087724U;
	uint32_t t98 = 436033360U;

	t98 = ((x525|x526)^(x527*x528));

	if (t98 != 144531391U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x529 = UINT8_MAX;
	int16_t x530 = 3058;
	int32_t x531 = -1;
	volatile uint64_t t99 = 478LLU;

	t99 = ((x529|x530)^(x531*x532));

	if (t99 != 18446744073694353676LLU) { NG(); } else { ; }
	
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

