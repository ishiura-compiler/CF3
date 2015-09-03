#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x27 = -1;
static int32_t t1 = -964203;
uint64_t x29 = UINT64_MAX;
volatile int32_t x47 = INT32_MIN;
int64_t x50 = 316158888LL;
volatile int64_t t5 = 417896500029LL;
uint64_t x66 = 9032LLU;
volatile uint8_t x67 = UINT8_MAX;
static uint32_t x68 = UINT32_MAX;
uint8_t x72 = 52U;
volatile int64_t t7 = 3685447252086479396LL;
uint64_t x85 = UINT64_MAX;
volatile uint64_t x109 = 12759347486855132LLU;
uint64_t t11 = 22LLU;
int32_t t12 = -656437;
uint8_t x127 = 13U;
int8_t x136 = 0;
uint64_t x147 = 152LLU;
uint8_t x148 = 9U;
uint32_t x159 = 106U;
uint32_t x164 = 117163039U;
volatile uint64_t x166 = 8659946291133186900LLU;
volatile int32_t t21 = -152;
uint64_t x176 = 877166LLU;
int32_t t22 = 3179;
uint32_t x193 = 396847U;
int8_t x195 = 1;
int32_t t27 = -21;
int64_t t28 = 19540LL;
static int32_t x224 = INT32_MIN;
volatile int32_t x247 = INT32_MIN;
int8_t x248 = 5;
static volatile int8_t x249 = -1;
static volatile int8_t x250 = -40;
int64_t x251 = 18153268LL;
volatile int32_t t33 = -519830;
int32_t x288 = INT32_MIN;
volatile uint64_t t36 = 27373949040LLU;
int32_t x297 = INT32_MIN;
static int8_t x301 = 2;
uint8_t x313 = 26U;
uint8_t x315 = UINT8_MAX;
static int32_t t39 = 695;
static int16_t x323 = INT16_MIN;
static uint8_t x330 = 0U;
uint64_t x346 = 5336020149548530LLU;
static int8_t x348 = -2;
int16_t x350 = INT16_MAX;
static int16_t x351 = -1;
int64_t x355 = INT64_MAX;
volatile int64_t t47 = -4LL;
int8_t x373 = INT8_MIN;
static volatile int64_t x375 = INT64_MIN;
int64_t x378 = -1LL;
static uint64_t t50 = 65580776391074LLU;
static uint64_t t51 = 313132260456LLU;
uint8_t x401 = 8U;
int64_t x405 = -22152592070331398LL;
int16_t x422 = -393;
int32_t x432 = INT32_MIN;
volatile int32_t t58 = -20268;
int16_t x443 = INT16_MAX;
static volatile int32_t t60 = 3957;
volatile int64_t x446 = -1LL;
int64_t x448 = 2709716666LL;
int64_t x473 = -1LL;
int64_t x477 = INT64_MAX;
uint32_t x480 = 13485660U;
int16_t x488 = INT16_MAX;
int16_t x500 = INT16_MIN;
static volatile int32_t t70 = 1;
volatile int64_t x539 = 48725598556007699LL;
int32_t t75 = -58;
int8_t x547 = INT8_MIN;
int8_t x548 = -26;
int32_t x555 = -789650;
uint8_t x556 = UINT8_MAX;
int32_t x561 = INT32_MIN;
int64_t t79 = 45093134568252381LL;
int32_t x565 = INT32_MAX;
int32_t x579 = -247528;
uint32_t t83 = 170914U;
static uint16_t x607 = 234U;
volatile uint32_t x620 = UINT32_MAX;
uint64_t x621 = UINT64_MAX;
int8_t x637 = -1;
int32_t x639 = INT32_MIN;
int64_t x649 = -1LL;
int64_t t92 = -863LL;
int8_t x670 = -3;
uint64_t x679 = UINT64_MAX;
static int16_t x703 = INT16_MIN;


void f0(void) {
	volatile int32_t x9 = INT32_MIN;
	uint32_t x10 = 3082U;
	int32_t x11 = INT32_MIN;
	static int16_t x12 = INT16_MIN;
	uint32_t t0 = 4691U;

	t0 = ((x9*x10)>>(x11<x12));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x25 = 6;
	uint16_t x26 = 448U;
	volatile int16_t x28 = 8;

	t1 = ((x25*x26)>>(x27<x28));

	if (t1 != 1344) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x30 = INT64_MIN;
	volatile uint8_t x31 = UINT8_MAX;
	volatile int16_t x32 = INT16_MIN;
	uint64_t t2 = 34007767376LLU;

	t2 = ((x29*x30)>>(x31<x32));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x33 = 4539876438796631936LLU;
	static int8_t x34 = INT8_MIN;
	static uint16_t x35 = 54U;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t3 = 32743583349LLU;

	t3 = ((x33*x34)>>(x35<x36));

	if (t3 != 4595813096368381952LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	static uint64_t x48 = 412897668032LLU;
	uint64_t t4 = 427076LLU;

	t4 = ((x45*x46)>>(x47<x48));

	if (t4 != 32768LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x49 = UINT32_MAX;
	uint8_t x51 = 94U;
	uint8_t x52 = UINT8_MAX;

	t5 = ((x49*x50)>>(x51<x52));

	if (t5 != 678946041991783980LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x65 = -58;
	uint64_t t6 = 1316533920127862LLU;

	t6 = ((x65*x66)>>(x67<x68));

	if (t6 != 9223372036854513880LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x69 = -1LL;
	static int16_t x70 = INT16_MIN;
	uint16_t x71 = 84U;

	t7 = ((x69*x70)>>(x71<x72));

	if (t7 != 32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x73 = 1;
	int16_t x74 = 728;
	int32_t x75 = 144187;
	uint8_t x76 = UINT8_MAX;
	static volatile int32_t t8 = -451;

	t8 = ((x73*x74)>>(x75<x76));

	if (t8 != 728) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	static int32_t x88 = INT32_MIN;
	static uint64_t t9 = 271946794LLU;

	t9 = ((x85*x86)>>(x87<x88));

	if (t9 != 2147483648LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x93 = INT8_MIN;
	int64_t x94 = -3334407293LL;
	int64_t x95 = -1LL;
	int32_t x96 = INT32_MIN;
	int64_t t10 = -1LL;

	t10 = ((x93*x94)>>(x95<x96));

	if (t10 != 426804133504LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x110 = UINT8_MAX;
	int64_t x111 = 465183355351LL;
	volatile uint32_t x112 = UINT32_MAX;

	t11 = ((x109*x110)>>(x111<x112));

	if (t11 != 3253633609148058660LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x117 = -1;
	int32_t x118 = -1;
	volatile uint32_t x119 = 3U;
	static volatile int8_t x120 = -1;

	t12 = ((x117*x118)>>(x119<x120));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 43U;
	static int64_t x128 = INT64_MIN;
	volatile uint32_t t13 = 3U;

	t13 = ((x125*x126)>>(x127<x128));

	if (t13 != 2818005U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x129 = -1;
	uint64_t x130 = 723182002183LLU;
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 11931U;
	volatile uint64_t t14 = 964298LLU;

	t14 = ((x129*x130)>>(x131<x132));

	if (t14 != 18446743350527549433LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x133 = 36U;
	volatile uint8_t x134 = 55U;
	static uint32_t x135 = UINT32_MAX;
	static int32_t t15 = 153;

	t15 = ((x133*x134)>>(x135<x136));

	if (t15 != 1980) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x137 = 21;
	uint8_t x138 = 34U;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t16 = -26669;

	t16 = ((x137*x138)>>(x139<x140));

	if (t16 != 357) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x145 = 57259198543115278LLU;
	int8_t x146 = INT8_MIN;
	volatile uint64_t t17 = 8316916395061084LLU;

	t17 = ((x145*x146)>>(x147<x148));

	if (t17 != 11117566660190796032LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x157 = UINT16_MAX;
	uint32_t x158 = UINT32_MAX;
	static volatile int32_t x160 = INT32_MAX;
	volatile uint32_t t18 = 113U;

	t18 = ((x157*x158)>>(x159<x160));

	if (t18 != 2147450880U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = 4149877943901555667LLU;
	uint8_t x163 = UINT8_MAX;
	volatile uint64_t t19 = 245616769423282568LLU;

	t19 = ((x161*x162)>>(x163<x164));

	if (t19 != 5701905721755435008LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x165 = 859U;
	int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MAX;
	uint64_t t20 = 18078LLU;

	t20 = ((x165*x166)>>(x167<x168));

	if (t20 != 2428001189229122926LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x169 = INT8_MAX;
	uint8_t x170 = 11U;
	int64_t x171 = INT64_MIN;
	int16_t x172 = -1;

	t21 = ((x169*x170)>>(x171<x172));

	if (t21 != 698) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x173 = INT8_MIN;
	volatile int32_t x174 = -1;
	int32_t x175 = -13355593;

	t22 = ((x173*x174)>>(x175<x176));

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x177 = 3001;
	static int16_t x178 = 24;
	volatile uint16_t x179 = UINT16_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t23 = -2446;

	t23 = ((x177*x178)>>(x179<x180));

	if (t23 != 36012) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x194 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile uint32_t t24 = 1389733U;

	t24 = ((x193*x194)>>(x195<x196));

	if (t24 != 2122085440U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x201 = 25185243096071173LLU;
	volatile int8_t x202 = INT8_MAX;
	int64_t x203 = INT64_MIN;
	static int16_t x204 = INT16_MIN;
	static volatile uint64_t t25 = 7LLU;

	t25 = ((x201*x202)>>(x203<x204));

	if (t25 != 1599262936600519485LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x205 = 12241;
	int8_t x206 = 50;
	static int32_t x207 = -1;
	static int16_t x208 = 6763;
	static int32_t t26 = 103504378;

	t26 = ((x205*x206)>>(x207<x208));

	if (t26 != 306025) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x209 = 99U;
	static uint16_t x210 = 522U;
	volatile int64_t x211 = INT64_MIN;
	int32_t x212 = INT32_MIN;

	t27 = ((x209*x210)>>(x211<x212));

	if (t27 != 25839) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x213 = UINT16_MAX;
	int64_t x214 = 58455LL;
	int64_t x215 = INT64_MIN;
	static int64_t x216 = -1LL;

	t28 = ((x213*x214)>>(x215<x216));

	if (t28 != 1915424212LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x221 = UINT16_MAX;
	static uint64_t x222 = UINT64_MAX;
	uint8_t x223 = 29U;
	volatile uint64_t t29 = 1267473548794568369LLU;

	t29 = ((x221*x222)>>(x223<x224));

	if (t29 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x233 = 0;
	volatile int16_t x234 = -1;
	uint64_t x235 = 1493LLU;
	uint8_t x236 = 84U;
	volatile int32_t t30 = -207733;

	t30 = ((x233*x234)>>(x235<x236));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = 0;
	uint16_t x243 = UINT16_MAX;
	uint64_t x244 = 55713997487LLU;
	volatile int32_t t31 = -76;

	t31 = ((x241*x242)>>(x243<x244));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x245 = 6230579;
	volatile uint32_t x246 = 2U;
	static volatile uint32_t t32 = 3U;

	t32 = ((x245*x246)>>(x247<x248));

	if (t32 != 6230579U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x252 = UINT16_MAX;

	t33 = ((x249*x250)>>(x251<x252));

	if (t33 != 40) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x277 = INT8_MAX;
	uint64_t x278 = UINT64_MAX;
	uint16_t x279 = UINT16_MAX;
	static int64_t x280 = 16690037LL;
	uint64_t t34 = 4588642251866LLU;

	t34 = ((x277*x278)>>(x279<x280));

	if (t34 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x285 = UINT64_MAX;
	uint32_t x286 = 60U;
	int32_t x287 = 242099240;
	uint64_t t35 = 5679279286048LLU;

	t35 = ((x285*x286)>>(x287<x288));

	if (t35 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int64_t x290 = 16015LL;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = 105U;

	t36 = ((x289*x290)>>(x291<x292));

	if (t36 != 18446744073709535601LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x298 = 129449U;
	uint16_t x299 = 68U;
	int32_t x300 = -1;
	volatile uint32_t t37 = 11949669U;

	t37 = ((x297*x298)>>(x299<x300));

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x302 = UINT64_MAX;
	volatile int64_t x303 = INT64_MIN;
	int64_t x304 = 105961840898557218LL;
	volatile uint64_t t38 = 232546LLU;

	t38 = ((x301*x302)>>(x303<x304));

	if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x314 = 20;
	static int16_t x316 = -1;

	t39 = ((x313*x314)>>(x315<x316));

	if (t39 != 520) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x318 = 41825U;
	volatile int8_t x319 = INT8_MIN;
	static int64_t x320 = -5064495442LL;
	static uint32_t t40 = 310545U;

	t40 = ((x317*x318)>>(x319<x320));

	if (t40 != 2924445696U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x321 = 194900LLU;
	static int64_t x322 = INT64_MIN;
	uint8_t x324 = 3U;
	volatile uint64_t t41 = 225878734LLU;

	t41 = ((x321*x322)>>(x323<x324));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x325 = 58678237U;
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MIN;
	int8_t x328 = 1;
	volatile uint64_t t42 = 1352LLU;

	t42 = ((x325*x326)>>(x327<x328));

	if (t42 != 9223372036825436689LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x329 = INT8_MAX;
	uint16_t x331 = UINT16_MAX;
	static uint16_t x332 = 24263U;
	int32_t t43 = 185;

	t43 = ((x329*x330)>>(x331<x332));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x333 = 23743638091LL;
	uint64_t x334 = 907LLU;
	static int32_t x335 = 447622;
	int16_t x336 = 102;
	static volatile uint64_t t44 = 71891215LLU;

	t44 = ((x333*x334)>>(x335<x336));

	if (t44 != 21535479748537LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x345 = UINT64_MAX;
	int64_t x347 = -1LL;
	volatile uint64_t t45 = 3LLU;

	t45 = ((x345*x346)>>(x347<x348));

	if (t45 != 18441408053560003086LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x349 = 0;
	int64_t x352 = INT64_MIN;
	static volatile int32_t t46 = -5;

	t46 = ((x349*x350)>>(x351<x352));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x353 = -34136763379159LL;
	int16_t x354 = -1;
	int16_t x356 = INT16_MAX;

	t47 = ((x353*x354)>>(x355<x356));

	if (t47 != 34136763379159LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x369 = UINT32_MAX;
	static uint8_t x370 = UINT8_MAX;
	volatile uint64_t x371 = 16110942699LLU;
	uint64_t x372 = 16542371521LLU;
	uint32_t t48 = 3U;

	t48 = ((x369*x370)>>(x371<x372));

	if (t48 != 2147483520U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x374 = -1;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t49 = 4007142;

	t49 = ((x373*x374)>>(x375<x376));

	if (t49 != 64) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x377 = 571264734214269862LLU;
	uint32_t x379 = 31U;
	uint16_t x380 = 980U;

	t50 = ((x377*x378)>>(x379<x380));

	if (t50 != 8937739669747640877LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x381 = 450122297131535956LLU;
	int16_t x382 = -1;
	int16_t x383 = -7;
	uint8_t x384 = UINT8_MAX;

	t51 = ((x381*x382)>>(x383<x384));

	if (t51 != 8998310888289007830LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x393 = INT8_MAX;
	int16_t x394 = 4307;
	uint32_t x395 = 9482U;
	int16_t x396 = 207;
	volatile int32_t t52 = -190;

	t52 = ((x393*x394)>>(x395<x396));

	if (t52 != 546989) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x397 = 13162062039210332LLU;
	uint8_t x398 = UINT8_MAX;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 29U;
	static uint64_t t53 = 6035245870403183LLU;

	t53 = ((x397*x398)>>(x399<x400));

	if (t53 != 1678162909999317330LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x402 = 0;
	uint8_t x403 = 90U;
	volatile int32_t x404 = -6831340;
	int32_t t54 = 15325211;

	t54 = ((x401*x402)>>(x403<x404));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x406 = -87;
	volatile int32_t x407 = 32297;
	int8_t x408 = INT8_MAX;
	static int64_t t55 = 14231LL;

	t55 = ((x405*x406)>>(x407<x408));

	if (t55 != 1927275510118831626LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x409 = 0U;
	uint16_t x410 = 5651U;
	volatile uint64_t x411 = 723387523LLU;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t56 = 10;

	t56 = ((x409*x410)>>(x411<x412));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x421 = 25752573U;
	volatile uint32_t x423 = 958453U;
	int8_t x424 = -1;
	static volatile uint32_t t57 = 1432988869U;

	t57 = ((x421*x422)>>(x423<x424));

	if (t57 != 1382070349U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x429 = 0;
	static uint16_t x430 = 2803U;
	int64_t x431 = 2353LL;

	t58 = ((x429*x430)>>(x431<x432));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x433 = INT32_MIN;
	volatile uint32_t x434 = 108685310U;
	static int8_t x435 = INT8_MIN;
	static int32_t x436 = 245;
	static volatile uint32_t t59 = 2U;

	t59 = ((x433*x434)>>(x435<x436));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x441 = 195698;
	static volatile uint8_t x442 = UINT8_MAX;
	static int64_t x444 = INT64_MIN;

	t60 = ((x441*x442)>>(x443<x444));

	if (t60 != 49902990) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x445 = -1;
	uint8_t x447 = 27U;
	int64_t t61 = -4067896823LL;

	t61 = ((x445*x446)>>(x447<x448));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MIN;
	volatile int64_t x455 = INT64_MAX;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t62 = 1;

	t62 = ((x453*x454)>>(x455<x456));

	if (t62 != 16384) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x465 = INT64_MIN;
	uint64_t x466 = UINT64_MAX;
	volatile uint16_t x467 = 2584U;
	volatile uint8_t x468 = UINT8_MAX;
	volatile uint64_t t63 = 26LLU;

	t63 = ((x465*x466)>>(x467<x468));

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x474 = -1156161003284669LL;
	static int16_t x475 = 1;
	volatile int32_t x476 = INT32_MIN;
	static volatile int64_t t64 = 92580LL;

	t64 = ((x473*x474)>>(x475<x476));

	if (t64 != 1156161003284669LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x478 = 29258180366790LLU;
	static volatile uint64_t x479 = 91LLU;
	static volatile uint64_t t65 = 1389398LLU;

	t65 = ((x477*x478)>>(x479<x480));

	if (t65 != 9223357407764592413LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x485 = UINT32_MAX;
	uint8_t x486 = 12U;
	volatile int16_t x487 = -27;
	uint32_t t66 = 3U;

	t66 = ((x485*x486)>>(x487<x488));

	if (t66 != 2147483642U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x489 = 0;
	int32_t x490 = 1023844;
	int64_t x491 = INT64_MAX;
	int64_t x492 = INT64_MIN;
	int32_t t67 = 673900484;

	t67 = ((x489*x490)>>(x491<x492));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x497 = 59807782030498LLU;
	uint32_t x498 = UINT32_MAX;
	uint8_t x499 = UINT8_MAX;
	uint64_t t68 = 222377261985172LLU;

	t68 = ((x497*x498)>>(x499<x500));

	if (t68 != 1556581072096310110LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x501 = 19477242U;
	int16_t x502 = -427;
	int16_t x503 = INT16_MIN;
	uint16_t x504 = UINT16_MAX;
	uint32_t t69 = 1918U;

	t69 = ((x501*x502)>>(x503<x504));

	if (t69 != 136576129U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x517 = UINT16_MAX;
	int8_t x518 = INT8_MAX;
	int64_t x519 = 541360491766LL;
	int8_t x520 = INT8_MIN;

	t70 = ((x517*x518)>>(x519<x520));

	if (t70 != 8322945) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x521 = UINT32_MAX;
	volatile int8_t x522 = INT8_MAX;
	volatile int8_t x523 = -1;
	int8_t x524 = -1;
	volatile uint32_t t71 = 2U;

	t71 = ((x521*x522)>>(x523<x524));

	if (t71 != 4294967169U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x529 = 725624357U;
	volatile uint16_t x530 = UINT16_MAX;
	volatile int32_t x531 = INT32_MAX;
	int64_t x532 = -1LL;
	static volatile uint32_t t72 = 15094935U;

	t72 = ((x529*x530)>>(x531<x532));

	if (t72 != 4209301979U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x533 = INT32_MIN;
	uint64_t x534 = UINT64_MAX;
	volatile int64_t x535 = INT64_MIN;
	int64_t x536 = INT64_MIN;
	volatile uint64_t t73 = 117487011LLU;

	t73 = ((x533*x534)>>(x535<x536));

	if (t73 != 2147483648LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x537 = UINT64_MAX;
	uint8_t x538 = UINT8_MAX;
	int32_t x540 = -1;
	volatile uint64_t t74 = 23704300352LLU;

	t74 = ((x537*x538)>>(x539<x540));

	if (t74 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x541 = -9;
	int16_t x542 = INT16_MIN;
	volatile uint32_t x543 = 97761378U;
	static int64_t x544 = 2386162363185399LL;

	t75 = ((x541*x542)>>(x543<x544));

	if (t75 != 147456) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x545 = 33U;
	uint8_t x546 = UINT8_MAX;
	int32_t t76 = -12651574;

	t76 = ((x545*x546)>>(x547<x548));

	if (t76 != 4207) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x553 = 35761825LLU;
	int64_t x554 = INT64_MIN;
	uint64_t t77 = 4252953275LLU;

	t77 = ((x553*x554)>>(x555<x556));

	if (t77 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x557 = 19;
	volatile uint16_t x558 = UINT16_MAX;
	volatile uint32_t x559 = 30U;
	int8_t x560 = 6;
	static int32_t t78 = 245855524;

	t78 = ((x557*x558)>>(x559<x560));

	if (t78 != 1245165) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x562 = -1LL;
	int64_t x563 = 69223234LL;
	int64_t x564 = 2349931430LL;

	t79 = ((x561*x562)>>(x563<x564));

	if (t79 != 1073741824LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x566 = 992423988U;
	int32_t x567 = -1;
	int16_t x568 = INT16_MIN;
	volatile uint32_t t80 = 14280187U;

	t80 = ((x565*x566)>>(x567<x568));

	if (t80 != 3302543308U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x577 = INT32_MAX;
	uint32_t x578 = 385U;
	volatile int8_t x580 = -1;
	uint32_t t81 = 5647U;

	t81 = ((x577*x578)>>(x579<x580));

	if (t81 != 1073741631U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x585 = INT16_MAX;
	uint64_t x586 = 10520LLU;
	volatile int16_t x587 = 329;
	int16_t x588 = INT16_MIN;
	static uint64_t t82 = 154117LLU;

	t82 = ((x585*x586)>>(x587<x588));

	if (t82 != 344708840LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x597 = 72U;
	volatile uint8_t x598 = 3U;
	int8_t x599 = -2;
	int8_t x600 = INT8_MAX;

	t83 = ((x597*x598)>>(x599<x600));

	if (t83 != 108U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x605 = -89;
	uint64_t x606 = UINT64_MAX;
	int64_t x608 = INT64_MIN;
	uint64_t t84 = 527174990249143LLU;

	t84 = ((x605*x606)>>(x607<x608));

	if (t84 != 89LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x609 = -47;
	uint32_t x610 = UINT32_MAX;
	uint64_t x611 = 55370048LLU;
	int32_t x612 = -1;
	volatile uint32_t t85 = 0U;

	t85 = ((x609*x610)>>(x611<x612));

	if (t85 != 23U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x613 = -1;
	uint64_t x614 = 748LLU;
	uint64_t x615 = 63LLU;
	int64_t x616 = -7915897531327LL;
	volatile uint64_t t86 = 1694741LLU;

	t86 = ((x613*x614)>>(x615<x616));

	if (t86 != 9223372036854775434LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x617 = 7U;
	uint16_t x618 = UINT16_MAX;
	uint16_t x619 = 12U;
	int32_t t87 = 2154;

	t87 = ((x617*x618)>>(x619<x620));

	if (t87 != 229372) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x622 = 2LLU;
	uint64_t x623 = 227194671840LLU;
	int16_t x624 = INT16_MAX;
	volatile uint64_t t88 = 58398LLU;

	t88 = ((x621*x622)>>(x623<x624));

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x625 = -2;
	int16_t x626 = -440;
	int8_t x627 = 49;
	uint64_t x628 = 6132081286867LLU;
	int32_t t89 = 3457;

	t89 = ((x625*x626)>>(x627<x628));

	if (t89 != 440) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x638 = -131;
	int32_t x640 = INT32_MIN;
	volatile int32_t t90 = -2;

	t90 = ((x637*x638)>>(x639<x640));

	if (t90 != 131) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x645 = 3U;
	static int8_t x646 = INT8_MAX;
	static int32_t x647 = 723492224;
	uint16_t x648 = 624U;
	volatile int32_t t91 = 1852;

	t91 = ((x645*x646)>>(x647<x648));

	if (t91 != 381) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x650 = INT32_MIN;
	int16_t x651 = -1;
	int64_t x652 = 120233985672669611LL;

	t92 = ((x649*x650)>>(x651<x652));

	if (t92 != 1073741824LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x657 = INT8_MAX;
	int16_t x658 = INT16_MAX;
	static volatile int8_t x659 = -1;
	uint32_t x660 = UINT32_MAX;
	int32_t t93 = -485;

	t93 = ((x657*x658)>>(x659<x660));

	if (t93 != 4161409) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x669 = 4137344680684359531LLU;
	uint64_t x671 = 383281402LLU;
	uint64_t x672 = 8164020742764572799LLU;
	static volatile uint64_t t94 = 298492518358535LLU;

	t94 = ((x669*x670)>>(x671<x672));

	if (t94 != 3017355015828236511LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x677 = UINT8_MAX;
	uint8_t x678 = UINT8_MAX;
	int64_t x680 = INT64_MIN;
	volatile int32_t t95 = -1543;

	t95 = ((x677*x678)>>(x679<x680));

	if (t95 != 65025) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x681 = 7774U;
	static uint32_t x682 = 20U;
	int16_t x683 = 1;
	volatile int64_t x684 = 27060LL;
	uint32_t t96 = 0U;

	t96 = ((x681*x682)>>(x683<x684));

	if (t96 != 77740U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x689 = 233374U;
	static int16_t x690 = INT16_MIN;
	int16_t x691 = -1;
	int16_t x692 = INT16_MIN;
	volatile uint32_t t97 = 0U;

	t97 = ((x689*x690)>>(x691<x692));

	if (t97 != 942735360U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x697 = 2429179975063LLU;
	static int8_t x698 = INT8_MIN;
	static volatile int16_t x699 = -1;
	uint32_t x700 = UINT32_MAX;
	static volatile uint64_t t98 = 122577177159LLU;

	t98 = ((x697*x698)>>(x699<x700));

	if (t98 != 18446433138672743552LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x701 = 13261058651577662LLU;
	static int16_t x702 = -1;
	volatile int16_t x704 = -1;
	volatile uint64_t t99 = 112779051LLU;

	t99 = ((x701*x702)>>(x703<x704));

	if (t99 != 9216741507528986977LLU) { NG(); } else { ; }
	
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

