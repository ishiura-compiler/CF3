#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int32_t t0 = 0;
static volatile int16_t x10 = -20;
int32_t x12 = INT32_MIN;
volatile uint64_t x18 = 1989345041045325LLU;
int8_t x19 = INT8_MIN;
int32_t t4 = 315;
int16_t x26 = INT16_MIN;
uint16_t x28 = 15U;
int8_t x32 = -1;
int8_t x35 = 2;
volatile int32_t t7 = -712335620;
volatile int32_t x48 = -1;
int16_t x54 = -89;
static int32_t t10 = 0;
int64_t x66 = 3540640006427160356LL;
uint16_t x76 = 32U;
uint8_t x78 = 0U;
uint32_t x84 = UINT32_MAX;
static uint64_t x86 = 1590912118LLU;
uint16_t x90 = 2015U;
uint32_t x91 = 14581U;
int32_t x92 = 511879;
volatile int16_t x99 = INT16_MIN;
int32_t t18 = -56007080;
uint16_t x105 = 1258U;
static int32_t t19 = -1549;
static int16_t x120 = INT16_MAX;
uint64_t x126 = 33478463493LLU;
int32_t x139 = INT32_MIN;
volatile int32_t t27 = 172;
int64_t x145 = INT64_MAX;
int16_t x148 = INT16_MAX;
volatile int32_t t29 = 181812590;
static volatile uint16_t x152 = UINT16_MAX;
int32_t x153 = INT32_MIN;
int32_t t33 = 19;
int8_t x166 = INT8_MIN;
volatile int8_t x170 = INT8_MAX;
int8_t x171 = -4;
int32_t t35 = 117194786;
int32_t x173 = INT32_MIN;
volatile int32_t t36 = 484269532;
volatile int32_t x186 = -1;
int64_t x190 = INT64_MIN;
volatile uint32_t x191 = 311295666U;
volatile int32_t t39 = 3;
int32_t x193 = -8180;
uint64_t x196 = 1481556LLU;
int64_t x198 = INT64_MIN;
int8_t x212 = INT8_MAX;
volatile uint16_t x217 = 29U;
volatile int16_t x223 = -1;
uint64_t x224 = UINT64_MAX;
volatile int32_t t47 = 86;
volatile uint8_t x237 = UINT8_MAX;
uint8_t x240 = 11U;
int64_t x244 = INT64_MAX;
int64_t x260 = INT64_MIN;
static int32_t t55 = 142242;
uint8_t x275 = 3U;
static uint8_t x278 = 3U;
int16_t x280 = INT16_MAX;
uint8_t x285 = 3U;
int8_t x287 = -1;
uint32_t x294 = UINT32_MAX;
int64_t x312 = -1LL;
int32_t t66 = -396;
static volatile uint32_t x316 = 105202817U;
static int16_t x319 = INT16_MAX;
int8_t x334 = -1;
int8_t x335 = 0;
int32_t t73 = 38210;
uint64_t x343 = 25774LLU;
int64_t x344 = -1LL;
uint64_t x351 = 52409LLU;
int16_t x357 = INT16_MIN;
int32_t x370 = -261707;
static int32_t t81 = -7366;
int64_t x374 = -3250583LL;
uint32_t x378 = UINT32_MAX;
uint64_t x388 = 164788LLU;
volatile int16_t x389 = INT16_MIN;
int32_t x398 = INT32_MIN;
int32_t x401 = -1;
int32_t t88 = -1232;
uint64_t x407 = 25997269LLU;
uint64_t x420 = UINT64_MAX;
static int16_t x426 = -209;
volatile int32_t t93 = -5660;
int16_t x431 = INT16_MIN;
volatile int16_t x432 = INT16_MAX;
int64_t x441 = -1LL;
int32_t t98 = -4723;
uint64_t x450 = 98946007948173199LLU;
volatile int32_t t99 = 713;


void f0(void) {
	int32_t x2 = 0;
	uint8_t x3 = 35U;
	static int64_t x4 = -4368LL;

	t0 = (x1==((x2+x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 2138233138459266LL;
	static int64_t x11 = -1119137434640LL;
	volatile int32_t t1 = 314;

	t1 = (x9==((x10+x11)<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	uint8_t x14 = 56U;
	static int8_t x15 = 23;
	int16_t x16 = INT16_MAX;
	int32_t t2 = -14;

	t2 = (x13==((x14+x15)<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	int8_t x20 = 0;
	volatile int32_t t3 = 12;

	t3 = (x17==((x18+x19)<x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = 105914U;
	volatile uint8_t x22 = UINT8_MAX;
	volatile int64_t x23 = INT64_MIN;
	int32_t x24 = -1419;

	t4 = (x21==((x22+x23)<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 3U;
	uint32_t x27 = 341778U;
	int32_t t5 = 29156146;

	t5 = (x25==((x26+x27)<x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	static int8_t x30 = INT8_MIN;
	int8_t x31 = -7;
	static int32_t t6 = -6559434;

	t6 = (x29==((x30+x31)<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	volatile int32_t x36 = INT32_MIN;

	t7 = (x33==((x34+x35)<x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = -1LL;
	int32_t x42 = -1;
	int32_t x43 = INT32_MAX;
	int64_t x44 = INT64_MIN;
	static int32_t t8 = 14;

	t8 = (x41==((x42+x43)<x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MAX;
	uint16_t x46 = 1011U;
	int32_t x47 = -1072602;
	int32_t t9 = 2320051;

	t9 = (x45==((x46+x47)<x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MAX;
	uint64_t x55 = 326826202LLU;
	int32_t x56 = -1;

	t10 = (x53==((x54+x55)<x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 0U;
	int16_t x58 = INT16_MIN;
	int16_t x59 = -1;
	uint64_t x60 = 11LLU;
	int32_t t11 = -3905254;

	t11 = (x57==((x58+x59)<x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x65 = UINT32_MAX;
	int64_t x67 = INT64_MIN;
	uint64_t x68 = UINT64_MAX;
	int32_t t12 = -3;

	t12 = (x65==((x66+x67)<x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x73 = -1;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MIN;
	static int32_t t13 = 1;

	t13 = (x73==((x74+x75)<x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 1U;
	uint64_t x79 = 3164330254LLU;
	int32_t x80 = INT32_MAX;
	volatile int32_t t14 = -4704;

	t14 = (x77==((x78+x79)<x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x81 = INT32_MIN;
	uint16_t x82 = UINT16_MAX;
	int32_t x83 = -1;
	static int32_t t15 = 740665105;

	t15 = (x81==((x82+x83)<x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x87 = -1;
	int32_t x88 = -1;
	volatile int32_t t16 = -963347084;

	t16 = (x85==((x86+x87)<x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = UINT8_MAX;
	volatile int32_t t17 = 316257;

	t17 = (x89==((x90+x91)<x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MIN;
	uint16_t x98 = 2158U;
	uint8_t x100 = UINT8_MAX;

	t18 = (x97==((x98+x99)<x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x106 = 5358U;
	int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MAX;

	t19 = (x105==((x106+x107)<x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MIN;
	uint16_t x111 = 24U;
	int8_t x112 = INT8_MIN;
	int32_t t20 = -34886;

	t20 = (x109==((x110+x111)<x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = UINT32_MAX;
	uint32_t x114 = 3245U;
	int16_t x115 = 46;
	static volatile int32_t x116 = INT32_MIN;
	static volatile int32_t t21 = -24;

	t21 = (x113==((x114+x115)<x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = 114623;
	volatile int16_t x118 = INT16_MAX;
	volatile uint8_t x119 = 3U;
	static volatile int32_t t22 = 496049;

	t22 = (x117==((x118+x119)<x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MAX;
	uint16_t x122 = 1122U;
	int32_t x123 = -1;
	static volatile int64_t x124 = INT64_MIN;
	volatile int32_t t23 = 935542;

	t23 = (x121==((x122+x123)<x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MIN;
	int8_t x127 = 5;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t24 = 1;

	t24 = (x125==((x126+x127)<x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MAX;
	volatile int64_t x132 = -1LL;
	volatile int32_t t25 = -79000;

	t25 = (x129==((x130+x131)<x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 8U;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = -1;
	int32_t x136 = 35;
	int32_t t26 = -24;

	t26 = (x133==((x134+x135)<x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MIN;
	static uint8_t x138 = 4U;
	uint32_t x140 = UINT32_MAX;

	t27 = (x137==((x138+x139)<x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x141 = 169351773711014192LLU;
	uint64_t x142 = 3190126129877LLU;
	volatile int16_t x143 = INT16_MAX;
	uint32_t x144 = 447175137U;
	int32_t t28 = 1022;

	t28 = (x141==((x142+x143)<x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x146 = -1;
	uint16_t x147 = 0U;

	t29 = (x145==((x146+x147)<x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 11715U;
	uint8_t x150 = UINT8_MAX;
	int8_t x151 = -2;
	volatile int32_t t30 = 2;

	t30 = (x149==((x150+x151)<x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x154 = 464U;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = -1;
	int32_t t31 = 0;

	t31 = (x153==((x154+x155)<x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x157 = -49441LL;
	int8_t x158 = -1;
	int32_t x159 = INT32_MAX;
	static int64_t x160 = INT64_MIN;
	volatile int32_t t32 = -155405;

	t32 = (x157==((x158+x159)<x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = UINT32_MAX;
	volatile int16_t x163 = INT16_MIN;
	static volatile int32_t x164 = INT32_MIN;

	t33 = (x161==((x162+x163)<x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = 0;
	uint64_t x167 = 6956088949LLU;
	uint8_t x168 = 101U;
	volatile int32_t t34 = 7968;

	t34 = (x165==((x166+x167)<x168));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x169 = -14;
	int32_t x172 = -7474;

	t35 = (x169==((x170+x171)<x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x174 = INT16_MAX;
	int32_t x175 = INT32_MIN;
	static int32_t x176 = INT32_MIN;

	t36 = (x173==((x174+x175)<x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = -881;
	uint8_t x178 = UINT8_MAX;
	volatile int64_t x179 = 12LL;
	int8_t x180 = INT8_MIN;
	static int32_t t37 = -20648592;

	t37 = (x177==((x178+x179)<x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = -14639840;
	uint64_t x187 = UINT64_MAX;
	static int32_t x188 = -1;
	int32_t t38 = 743526170;

	t38 = (x185==((x186+x187)<x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = INT8_MAX;
	static int8_t x192 = -1;

	t39 = (x189==((x190+x191)<x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x194 = 9U;
	volatile uint64_t x195 = 419113541296536LLU;
	int32_t t40 = 7;

	t40 = (x193==((x194+x195)<x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x197 = 1390428U;
	volatile uint16_t x199 = 37U;
	uint16_t x200 = 80U;
	int32_t t41 = 12;

	t41 = (x197==((x198+x199)<x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MIN;
	static int16_t x202 = INT16_MIN;
	volatile uint64_t x203 = UINT64_MAX;
	volatile int16_t x204 = 5925;
	volatile int32_t t42 = -1;

	t42 = (x201==((x202+x203)<x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = INT32_MAX;
	int64_t x206 = INT64_MAX;
	int64_t x207 = INT64_MIN;
	uint16_t x208 = 1U;
	int32_t t43 = -12239225;

	t43 = (x205==((x206+x207)<x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x209 = INT32_MAX;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = -3;
	volatile int32_t t44 = -5491240;

	t44 = (x209==((x210+x211)<x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = INT32_MIN;
	static uint64_t x214 = UINT64_MAX;
	volatile int16_t x215 = INT16_MAX;
	static uint64_t x216 = 6575479156266470LLU;
	static int32_t t45 = -98;

	t45 = (x213==((x214+x215)<x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x218 = INT16_MIN;
	static uint16_t x219 = 62U;
	int8_t x220 = INT8_MIN;
	int32_t t46 = 6938633;

	t46 = (x217==((x218+x219)<x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x221 = 93U;
	uint16_t x222 = 18114U;

	t47 = (x221==((x222+x223)<x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = -1;
	uint8_t x226 = UINT8_MAX;
	int32_t x227 = 51960140;
	int64_t x228 = INT64_MIN;
	int32_t t48 = -3238906;

	t48 = (x225==((x226+x227)<x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int16_t x230 = INT16_MIN;
	static int8_t x231 = 6;
	uint8_t x232 = 0U;
	static volatile int32_t t49 = 234041210;

	t49 = (x229==((x230+x231)<x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x238 = 5184U;
	int8_t x239 = 1;
	volatile int32_t t50 = -79554;

	t50 = (x237==((x238+x239)<x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x241 = INT32_MAX;
	int32_t x242 = 119818;
	static int32_t x243 = INT32_MIN;
	static volatile int32_t t51 = -390;

	t51 = (x241==((x242+x243)<x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x245 = 580617478LLU;
	int16_t x246 = INT16_MIN;
	int64_t x247 = -7385389LL;
	uint16_t x248 = UINT16_MAX;
	int32_t t52 = -25;

	t52 = (x245==((x246+x247)<x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x249 = -7357973997LL;
	uint64_t x250 = 16LLU;
	volatile int16_t x251 = -227;
	static volatile uint32_t x252 = 7816U;
	int32_t t53 = -20951086;

	t53 = (x249==((x250+x251)<x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x257 = INT8_MIN;
	static int8_t x258 = -1;
	static int16_t x259 = -1;
	int32_t t54 = 11344063;

	t54 = (x257==((x258+x259)<x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x261 = 1U;
	volatile int64_t x262 = -181622602076276188LL;
	int16_t x263 = -1;
	uint32_t x264 = 32U;

	t55 = (x261==((x262+x263)<x264));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x265 = -1;
	int32_t x266 = 18;
	static uint64_t x267 = 1373850734781702LLU;
	int64_t x268 = 5616698LL;
	int32_t t56 = 38660919;

	t56 = (x265==((x266+x267)<x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x269 = 928360LLU;
	int32_t x270 = -1;
	uint8_t x271 = 0U;
	uint8_t x272 = 1U;
	static volatile int32_t t57 = 1439429;

	t57 = (x269==((x270+x271)<x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = INT64_MAX;
	volatile int8_t x274 = INT8_MAX;
	static int16_t x276 = -1;
	static int32_t t58 = 1287855;

	t58 = (x273==((x274+x275)<x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x277 = INT16_MIN;
	uint16_t x279 = 26411U;
	volatile int32_t t59 = 7091;

	t59 = (x277==((x278+x279)<x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MAX;
	int32_t x283 = -1;
	volatile int32_t x284 = INT32_MIN;
	static volatile int32_t t60 = -5784885;

	t60 = (x281==((x282+x283)<x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x286 = -2709LL;
	int8_t x288 = 3;
	static volatile int32_t t61 = 11317;

	t61 = (x285==((x286+x287)<x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = -2;
	int8_t x290 = -13;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MAX;
	volatile int32_t t62 = -497;

	t62 = (x289==((x290+x291)<x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x293 = -1LL;
	uint8_t x295 = 10U;
	uint32_t x296 = UINT32_MAX;
	static int32_t t63 = 742304040;

	t63 = (x293==((x294+x295)<x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x297 = 733;
	int8_t x298 = 53;
	static volatile int8_t x299 = INT8_MIN;
	uint64_t x300 = 1006334045095988LLU;
	int32_t t64 = 17646220;

	t64 = (x297==((x298+x299)<x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = 1;
	uint64_t x303 = 29955810742503LLU;
	int8_t x304 = INT8_MAX;
	volatile int32_t t65 = -7955262;

	t65 = (x301==((x302+x303)<x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = 53723045;
	volatile uint32_t x310 = 62408U;
	int16_t x311 = -472;

	t66 = (x309==((x310+x311)<x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x313 = INT32_MIN;
	static volatile int32_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	volatile int32_t t67 = -164242594;

	t67 = (x313==((x314+x315)<x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = INT32_MIN;
	volatile uint8_t x320 = 1U;
	int32_t t68 = 1;

	t68 = (x317==((x318+x319)<x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = -116;
	volatile int16_t x322 = INT16_MIN;
	static uint8_t x323 = 48U;
	uint16_t x324 = 1U;
	static int32_t t69 = 3233;

	t69 = (x321==((x322+x323)<x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MIN;
	int32_t x326 = INT32_MIN;
	volatile uint8_t x327 = 0U;
	uint8_t x328 = 29U;
	int32_t t70 = -162904;

	t70 = (x325==((x326+x327)<x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x329 = 0;
	volatile int32_t x330 = -242441547;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t71 = -309978358;

	t71 = (x329==((x330+x331)<x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x333 = -15561345LL;
	static int8_t x336 = INT8_MAX;
	volatile int32_t t72 = 113230;

	t72 = (x333==((x334+x335)<x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = INT32_MIN;
	static uint16_t x338 = 435U;
	int8_t x339 = INT8_MAX;
	int32_t x340 = INT32_MIN;

	t73 = (x337==((x338+x339)<x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x341 = 10U;
	static int64_t x342 = INT64_MAX;
	int32_t t74 = -1120479;

	t74 = (x341==((x342+x343)<x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = INT64_MIN;
	uint64_t x346 = 29807LLU;
	int16_t x347 = -57;
	static volatile uint64_t x348 = UINT64_MAX;
	static volatile int32_t t75 = -19634834;

	t75 = (x345==((x346+x347)<x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;
	volatile uint8_t x352 = 46U;
	int32_t t76 = 458;

	t76 = (x349==((x350+x351)<x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x353 = UINT32_MAX;
	volatile uint64_t x354 = 1047361LLU;
	volatile uint8_t x355 = 23U;
	static int16_t x356 = INT16_MIN;
	volatile int32_t t77 = 15;

	t77 = (x353==((x354+x355)<x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x358 = 9836U;
	int32_t x359 = 4136;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t78 = -8589261;

	t78 = (x357==((x358+x359)<x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = 37;
	int16_t x362 = 246;
	uint16_t x363 = 0U;
	static int64_t x364 = -1LL;
	int32_t t79 = -465;

	t79 = (x361==((x362+x363)<x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MIN;
	volatile uint32_t x366 = 3U;
	int8_t x367 = 44;
	int8_t x368 = -14;
	int32_t t80 = 461;

	t80 = (x365==((x366+x367)<x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x369 = -1;
	static int16_t x371 = -35;
	int16_t x372 = -1;

	t81 = (x369==((x370+x371)<x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = INT64_MAX;
	int16_t x375 = -1;
	static int16_t x376 = INT16_MIN;
	int32_t t82 = -233848;

	t82 = (x373==((x374+x375)<x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x377 = 6775U;
	int8_t x379 = INT8_MAX;
	uint32_t x380 = UINT32_MAX;
	int32_t t83 = 55157;

	t83 = (x377==((x378+x379)<x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = -2025;
	int16_t x387 = INT16_MAX;
	int32_t t84 = -605875;

	t84 = (x385==((x386+x387)<x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x390 = -1;
	uint16_t x391 = 725U;
	static volatile int8_t x392 = INT8_MIN;
	int32_t t85 = -2380753;

	t85 = (x389==((x390+x391)<x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 209792751LLU;
	int16_t x394 = -3364;
	volatile uint16_t x395 = 385U;
	uint64_t x396 = 842LLU;
	int32_t t86 = 36776704;

	t86 = (x393==((x394+x395)<x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = INT64_MIN;
	static int64_t x399 = 3076155LL;
	uint32_t x400 = 147308U;
	static volatile int32_t t87 = -4008038;

	t87 = (x397==((x398+x399)<x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x402 = -1;
	static volatile uint32_t x403 = UINT32_MAX;
	int32_t x404 = 0;

	t88 = (x401==((x402+x403)<x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x405 = UINT8_MAX;
	int16_t x406 = INT16_MIN;
	static volatile uint64_t x408 = UINT64_MAX;
	volatile int32_t t89 = 47889;

	t89 = (x405==((x406+x407)<x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x413 = INT64_MIN;
	static int16_t x414 = -24;
	int16_t x415 = 3;
	volatile int16_t x416 = INT16_MIN;
	int32_t t90 = 123;

	t90 = (x413==((x414+x415)<x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x417 = UINT64_MAX;
	static int32_t x418 = 38651;
	int16_t x419 = INT16_MIN;
	int32_t t91 = 573969260;

	t91 = (x417==((x418+x419)<x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x421 = -808;
	int32_t x422 = -17386085;
	uint16_t x423 = 40U;
	int64_t x424 = 10927407408207LL;
	static volatile int32_t t92 = 2627;

	t92 = (x421==((x422+x423)<x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x425 = 5U;
	int8_t x427 = INT8_MIN;
	int32_t x428 = -1;

	t93 = (x425==((x426+x427)<x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x429 = -1LL;
	uint16_t x430 = 0U;
	volatile int32_t t94 = -30;

	t94 = (x429==((x430+x431)<x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = 347;
	uint64_t x434 = 422993622605LLU;
	int32_t x435 = INT32_MAX;
	int8_t x436 = -15;
	static volatile int32_t t95 = 39;

	t95 = (x433==((x434+x435)<x436));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = INT64_MAX;
	uint8_t x438 = 29U;
	int64_t x439 = 1072469879LL;
	int16_t x440 = INT16_MAX;
	static int32_t t96 = 1;

	t96 = (x437==((x438+x439)<x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x442 = -1;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = -4;
	volatile int32_t t97 = 19480939;

	t97 = (x441==((x442+x443)<x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = 574549;
	uint16_t x446 = 12U;
	static volatile int64_t x447 = -1LL;
	int16_t x448 = INT16_MIN;

	t98 = (x445==((x446+x447)<x448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x449 = UINT8_MAX;
	int32_t x451 = -1;
	volatile int32_t x452 = INT32_MIN;

	t99 = (x449==((x450+x451)<x452));

	if (t99 != 0) { NG(); } else { ; }
	
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

