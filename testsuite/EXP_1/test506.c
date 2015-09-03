#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int16_t x6 = INT16_MIN;
static int8_t x8 = 0;
static uint64_t x14 = 1LLU;
uint16_t x15 = 174U;
volatile uint64_t t2 = 11662311LLU;
int8_t x33 = INT8_MIN;
int8_t x35 = -1;
static uint16_t x41 = 18046U;
uint64_t t7 = 485LLU;
int8_t x46 = -1;
static int8_t x49 = INT8_MIN;
volatile int32_t t9 = 391;
int32_t x54 = -9;
volatile int16_t x56 = INT16_MIN;
volatile uint8_t x57 = 51U;
int8_t x60 = INT8_MIN;
int8_t x67 = 0;
static volatile int64_t t14 = 12362157854578LL;
volatile uint64_t x78 = 1861LLU;
static int16_t x81 = INT16_MIN;
int32_t x84 = INT32_MIN;
volatile int8_t x97 = -1;
static int64_t t20 = -2945348034938501LL;
static volatile uint64_t t21 = 1378LLU;
volatile uint16_t x108 = 1U;
uint32_t t22 = 2069663905U;
int8_t x126 = 0;
static volatile int64_t x127 = -1LL;
volatile int8_t x134 = INT8_MAX;
static volatile int32_t t26 = 140;
uint32_t x141 = 78265U;
int16_t x142 = INT16_MIN;
volatile int32_t x144 = INT32_MIN;
static uint64_t t29 = 117LLU;
uint8_t x161 = UINT8_MAX;
volatile int64_t x164 = -5261709979LL;
int16_t x181 = -1;
int16_t x182 = INT16_MIN;
uint8_t x187 = UINT8_MAX;
int16_t x188 = -1;
int32_t x195 = INT32_MIN;
int64_t x205 = 1869239LL;
uint64_t t38 = 737413317586343493LLU;
uint16_t x234 = 1290U;
volatile int64_t x236 = INT64_MIN;
uint8_t x238 = 2U;
uint32_t x243 = 169U;
static int8_t x251 = INT8_MIN;
volatile int64_t x252 = -86016LL;
volatile int64_t t44 = -429576LL;
int64_t t45 = -119797LL;
volatile uint64_t t47 = 1187519LLU;
int8_t x273 = 1;
int16_t x293 = -1;
int16_t x302 = 2442;
uint32_t x311 = 116832U;
uint16_t x321 = 51U;
int16_t x334 = INT16_MIN;
volatile uint64_t t59 = UINT64_MAX;
volatile uint8_t x338 = 31U;
int32_t x339 = -5944636;
static int64_t t61 = 7251681LL;
uint64_t t62 = 97LLU;
uint8_t x350 = 0U;
int32_t x357 = 99207;
static volatile int8_t x365 = INT8_MAX;
static uint32_t x367 = 731671U;
static volatile uint32_t t65 = 28407292U;
int32_t x369 = INT32_MIN;
int16_t x396 = -9;
int64_t x404 = 627LL;
volatile int64_t t70 = -8312530567081251LL;
static volatile int64_t t72 = -515LL;
volatile uint8_t x418 = 5U;
volatile uint16_t x429 = 0U;
static int64_t x431 = -12178691LL;
int64_t t77 = 24964744LL;
static volatile uint32_t x450 = UINT32_MAX;
uint16_t x460 = 4U;
uint64_t x466 = 1426997287690905448LLU;
static uint32_t x482 = UINT32_MAX;
uint16_t x484 = 62U;
uint32_t x492 = UINT32_MAX;
uint32_t x493 = 1737U;
uint32_t x512 = 63659805U;
int64_t t90 = 705527325121404527LL;
volatile int64_t x526 = -1LL;
int64_t x527 = -1LL;
volatile uint16_t x528 = 28037U;
volatile int64_t t92 = -121220LL;
uint8_t x533 = 119U;
int64_t x540 = INT64_MIN;
volatile uint64_t t94 = 1700760431313LLU;
static uint64_t x546 = 4LLU;
uint32_t x548 = UINT32_MAX;
uint16_t x553 = 29537U;
static int32_t x557 = INT32_MIN;
volatile uint64_t x558 = 4979417LLU;
static uint8_t x559 = 54U;
static int32_t x561 = 108395;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static uint16_t x2 = 1294U;
	volatile int16_t x3 = 41;
	int32_t t0 = -885;

	t0 = (((x1*x2)^x3)|x4);

	if (t0 != -1317) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x7 = 0;
	int32_t t1 = -38;

	t1 = (((x5*x6)^x7)|x8);

	if (t1 != -1073709056) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 207567861U;
	int8_t x16 = INT8_MIN;

	t2 = (((x13*x14)^x15)|x16);

	if (t2 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 799234424LLU;
	volatile int16_t x18 = 143;
	uint8_t x19 = UINT8_MAX;
	uint64_t x20 = 8130802246677LLU;
	volatile uint64_t t3 = 29275735245LLU;

	t3 = (((x17*x18)^x19)|x20);

	if (t3 != 8244688781047LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MAX;
	static int32_t x26 = -1;
	int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t4 = -8442466863757LL;

	t4 = (((x25*x26)^x27)|x28);

	if (t4 != -127LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -1;
	static uint8_t x30 = 0U;
	uint16_t x31 = 653U;
	static int16_t x32 = INT16_MAX;
	volatile int32_t t5 = -112;

	t5 = (((x29*x30)^x31)|x32);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x34 = 4U;
	static uint32_t x36 = 4960U;
	static volatile uint32_t t6 = 148U;

	t6 = (((x33*x34)^x35)|x36);

	if (t6 != 5119U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x42 = INT16_MIN;
	volatile int8_t x43 = -1;
	volatile uint64_t x44 = 131643594034488LLU;

	t7 = (((x41*x42)^x43)|x44);

	if (t7 != 131643629043711LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 135U;
	static uint64_t x47 = 12839LLU;
	volatile int16_t x48 = INT16_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = (((x45*x46)^x47)|x48);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x50 = UINT16_MAX;
	static uint8_t x51 = UINT8_MAX;
	int16_t x52 = INT16_MIN;

	t9 = (((x49*x50)^x51)|x52);

	if (t9 != -32641) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = UINT32_MAX;
	int16_t x55 = 463;
	uint32_t t10 = 6U;

	t10 = (((x53*x54)^x55)|x56);

	if (t10 != 4294934982U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = 1;
	volatile int64_t x59 = INT64_MIN;
	static volatile int64_t t11 = 2722053458102332965LL;

	t11 = (((x57*x58)^x59)|x60);

	if (t11 != -77LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = 608670;
	uint32_t x66 = 710U;
	volatile int32_t x68 = -1;
	uint32_t t12 = UINT32_MAX;

	t12 = (((x65*x66)^x67)|x68);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 3U;
	int16_t x70 = 0;
	volatile int16_t x71 = -1;
	static uint64_t x72 = UINT64_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x69*x70)^x71)|x72);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -208076LL;
	static int32_t x74 = -219489;
	static uint8_t x75 = 1U;
	uint32_t x76 = UINT32_MAX;

	t14 = (((x73*x74)^x75)|x76);

	if (t14 != 47244640255LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x77 = UINT64_MAX;
	int32_t x79 = -30351;
	int32_t x80 = 11667;
	volatile uint64_t t15 = 28497443367207LLU;

	t15 = (((x77*x78)^x79)|x80);

	if (t15 != 32219LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x82 = -1LL;
	volatile int64_t x83 = -1LL;
	volatile int64_t t16 = -1521LL;

	t16 = (((x81*x82)^x83)|x84);

	if (t16 != -32769LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x85 = INT16_MIN;
	uint16_t x86 = UINT16_MAX;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t17 = 170516305;

	t17 = (((x85*x86)^x87)|x88);

	if (t17 != 2147450879) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x89 = UINT8_MAX;
	int64_t x90 = 270903LL;
	static volatile int32_t x91 = INT32_MIN;
	volatile int64_t x92 = 31226LL;
	volatile int64_t t18 = 399853481801LL;

	t18 = (((x89*x90)^x91)|x92);

	if (t18 != -2078376453LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x93 = UINT16_MAX;
	int8_t x94 = -2;
	uint64_t x95 = 17014LLU;
	static int16_t x96 = 8273;
	uint64_t t19 = 153541146LLU;

	t19 = (((x93*x94)^x95)|x96);

	if (t19 != 18446744073709445749LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x98 = -1LL;
	int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MIN;

	t20 = (((x97*x98)^x99)|x100);

	if (t20 != -127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MIN;
	uint32_t x102 = 143645U;
	volatile uint64_t x103 = 1383619695739569778LLU;
	int64_t x104 = 249045285830LL;

	t21 = (((x101*x102)^x103)|x104);

	if (t21 != 1383619909039030262LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 3250217U;
	int8_t x107 = 1;

	t22 = (((x105*x106)^x107)|x108);

	if (t22 != 3878939521U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MAX;
	static uint16_t x122 = 11U;
	int8_t x123 = -10;
	int16_t x124 = -1;
	int32_t t23 = 4;

	t23 = (((x121*x122)^x123)|x124);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -1;
	int32_t x128 = INT32_MIN;
	volatile int64_t t24 = 287005720LL;

	t24 = (((x125*x126)^x127)|x128);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = -1;
	uint32_t x130 = 1042U;
	static uint16_t x131 = 2590U;
	volatile uint8_t x132 = UINT8_MAX;
	static uint32_t t25 = 81U;

	t25 = (((x129*x130)^x131)|x132);

	if (t25 != 4294963711U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = -1;
	int8_t x135 = INT8_MIN;
	volatile int16_t x136 = INT16_MIN;

	t26 = (((x133*x134)^x135)|x136);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x143 = 43092371LL;
	static volatile int64_t t27 = 0LL;

	t27 = (((x141*x142)^x143)|x144);

	if (t27 != -441316973LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x153 = -1LL;
	int16_t x154 = INT16_MAX;
	int16_t x155 = -1;
	volatile int64_t x156 = INT64_MAX;
	volatile int64_t t28 = INT64_MAX;

	t28 = (((x153*x154)^x155)|x156);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x157 = 15729994072090223LLU;
	int8_t x158 = INT8_MAX;
	volatile int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;

	t29 = (((x157*x158)^x159)|x160);

	if (t29 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x162 = -11;
	static volatile int8_t x163 = -1;
	int64_t t30 = -7974048366805016LL;

	t30 = (((x161*x162)^x163)|x164);

	if (t30 != -5261709323LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x173 = 2475369;
	volatile int8_t x174 = -1;
	uint32_t x175 = 18171U;
	int8_t x176 = 0;
	volatile uint32_t t31 = 19U;

	t31 = (((x173*x174)^x175)|x176);

	if (t31 != 4292508780U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x177 = 360214U;
	int32_t x178 = INT32_MIN;
	volatile uint16_t x179 = 1U;
	static volatile int8_t x180 = INT8_MIN;
	volatile uint32_t t32 = 56481593U;

	t32 = (((x177*x178)^x179)|x180);

	if (t32 != 4294967169U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x183 = -930153451246532LL;
	static volatile uint8_t x184 = 14U;
	static volatile int64_t t33 = -184779449LL;

	t33 = (((x181*x182)^x183)|x184);

	if (t33 != -930153451279298LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	static volatile int32_t t34 = -15217;

	t34 = (((x185*x186)^x187)|x188);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x193 = 23U;
	int16_t x194 = -141;
	static uint64_t x196 = 1708955931LLU;
	uint64_t t35 = 2493185334786LLU;

	t35 = (((x193*x194)^x195)|x196);

	if (t35 != 2147482463LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x197 = 3781U;
	int8_t x198 = -55;
	uint8_t x199 = 0U;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t36 = -1;

	t36 = (((x197*x198)^x199)|x200);

	if (t36 != -207955) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x206 = 0;
	static int16_t x207 = INT16_MIN;
	uint8_t x208 = 80U;
	static int64_t t37 = -3939481LL;

	t37 = (((x205*x206)^x207)|x208);

	if (t37 != -32688LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x217 = 43LLU;
	volatile int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;

	t38 = (((x217*x218)^x219)|x220);

	if (t38 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x221 = 32701LL;
	int8_t x222 = 0;
	static uint32_t x223 = UINT32_MAX;
	int16_t x224 = INT16_MIN;
	int64_t t39 = -599671597LL;

	t39 = (((x221*x222)^x223)|x224);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x233 = UINT32_MAX;
	uint8_t x235 = 0U;
	int64_t t40 = -307LL;

	t40 = (((x233*x234)^x235)|x236);

	if (t40 != -9223372032559809802LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x237 = -1;
	volatile int8_t x239 = 4;
	uint8_t x240 = 15U;
	int32_t t41 = -24;

	t41 = (((x237*x238)^x239)|x240);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x241 = -1;
	static volatile uint32_t x242 = 1U;
	int64_t x244 = INT64_MAX;
	int64_t t42 = INT64_MAX;

	t42 = (((x241*x242)^x243)|x244);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	static int64_t x248 = -4483857633773899LL;
	int64_t t43 = -39177619738LL;

	t43 = (((x245*x246)^x247)|x248);

	if (t43 != -4194379LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x249 = INT8_MAX;
	int8_t x250 = -1;

	t44 = (((x249*x250)^x251)|x252);

	if (t44 != -86015LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x257 = 2702LL;
	static volatile int32_t x258 = -1392965;
	static int32_t x259 = -13954;
	int8_t x260 = -1;

	t45 = (((x257*x258)^x259)|x260);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x265 = 0U;
	int8_t x266 = 0;
	int32_t x267 = -404095;
	int16_t x268 = -1;
	static volatile int32_t t46 = -941720;

	t46 = (((x265*x266)^x267)|x268);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x269 = 75351806LLU;
	int64_t x270 = INT64_MIN;
	int8_t x271 = 0;
	volatile uint16_t x272 = 15U;

	t47 = (((x269*x270)^x271)|x272);

	if (t47 != 15LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x274 = 9;
	int32_t x275 = INT32_MIN;
	static volatile int64_t x276 = -1LL;
	volatile int64_t t48 = 8591913802450LL;

	t48 = (((x273*x274)^x275)|x276);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x281 = -47615308LL;
	volatile uint64_t x282 = 4LLU;
	static int16_t x283 = INT16_MIN;
	int16_t x284 = 58;
	static uint64_t t49 = 35399091LLU;

	t49 = (((x281*x282)^x283)|x284);

	if (t49 != 190466810LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x285 = 53944342U;
	int16_t x286 = -3;
	uint8_t x287 = UINT8_MAX;
	volatile uint16_t x288 = 221U;
	volatile uint32_t t50 = 135377U;

	t50 = (((x285*x286)^x287)|x288);

	if (t50 != 4133134301U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x294 = 15U;
	volatile int64_t x295 = -470LL;
	int16_t x296 = INT16_MAX;
	int64_t t51 = -13695590395LL;

	t51 = (((x293*x294)^x295)|x296);

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x297 = 1U;
	int16_t x298 = INT16_MIN;
	int32_t x299 = -97312029;
	int32_t x300 = INT32_MAX;
	volatile uint32_t t52 = 1U;

	t52 = (((x297*x298)^x299)|x300);

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x301 = INT8_MIN;
	int8_t x303 = INT8_MAX;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (((x301*x302)^x303)|x304);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x305 = UINT64_MAX;
	static int32_t x306 = -50146816;
	int64_t x307 = -1512047798LL;
	volatile uint16_t x308 = UINT16_MAX;
	static uint64_t t54 = 7249224798774114LLU;

	t54 = (((x305*x306)^x307)|x308);

	if (t54 != 18446744072218673151LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MAX;
	volatile int32_t x312 = INT32_MIN;
	static uint32_t t55 = 636760752U;

	t55 = (((x309*x310)^x311)|x312);

	if (t55 != 4290857056U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x313 = -10;
	volatile uint64_t x314 = 439657823LLU;
	int64_t x315 = INT64_MIN;
	static int32_t x316 = 317;
	uint64_t t56 = 10907502065419859LLU;

	t56 = (((x313*x314)^x315)|x316);

	if (t56 != 9223372032458197887LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = -1;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = (((x317*x318)^x319)|x320);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x322 = -1;
	int32_t x323 = 434332;
	int32_t x324 = 26;
	volatile int32_t t58 = -52296;

	t58 = (((x321*x322)^x323)|x324);

	if (t58 != -434341) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x333 = UINT64_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	int32_t x336 = INT32_MAX;

	t59 = (((x333*x334)^x335)|x336);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x337 = -3694;
	int64_t x340 = -2701912936LL;
	static int64_t t60 = 2579503947LL;

	t60 = (((x337*x338)^x339)|x340);

	if (t60 != -2701189382LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x341 = INT8_MIN;
	static int16_t x342 = 214;
	int64_t x343 = -1LL;
	int16_t x344 = INT16_MAX;

	t61 = (((x341*x342)^x343)|x344);

	if (t61 != 32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x345 = UINT64_MAX;
	static uint8_t x346 = 68U;
	uint8_t x347 = 5U;
	uint64_t x348 = 238635069396LLU;

	t62 = (((x345*x346)^x347)|x348);

	if (t62 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x349 = -1;
	int64_t x351 = -46598LL;
	static volatile uint32_t x352 = 840U;
	int64_t t63 = -31644647LL;

	t63 = (((x349*x350)^x351)|x352);

	if (t63 != -46086LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x358 = INT8_MAX;
	volatile uint16_t x359 = 4346U;
	int32_t x360 = -21044;
	int32_t t64 = -1979422;

	t64 = (((x357*x358)^x359)|x360);

	if (t64 != -20529) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x366 = 0U;
	int32_t x368 = INT32_MIN;

	t65 = (((x365*x366)^x367)|x368);

	if (t65 != 2148215319U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x370 = 1610395LLU;
	static int32_t x371 = 72054;
	int64_t x372 = 1350852764LL;
	uint64_t t66 = 1991LLU;

	t66 = (((x369*x370)^x371)|x372);

	if (t66 != 18443285778131155454LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x373 = -1;
	int32_t x374 = -1;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (((x373*x374)^x375)|x376);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x377 = 448U;
	int16_t x378 = -1160;
	volatile int64_t x379 = -937114LL;
	uint8_t x380 = 115U;
	volatile int64_t t68 = 1369073336LL;

	t68 = (((x377*x378)^x379)|x380);

	if (t68 != -4294336137LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x393 = -1;
	uint32_t x394 = 10213U;
	static uint8_t x395 = 15U;
	volatile uint32_t t69 = 341500U;

	t69 = (((x393*x394)^x395)|x396);

	if (t69 != 4294967287U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x401 = 32U;
	uint8_t x402 = 2U;
	int32_t x403 = INT32_MAX;

	t70 = (((x401*x402)^x403)|x404);

	if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x409 = UINT32_MAX;
	uint64_t x410 = 2609685LLU;
	int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MAX;
	volatile uint64_t t71 = 38306LLU;

	t71 = (((x409*x410)^x411)|x412);

	if (t71 != 18435535564129173503LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x413 = 65LL;
	int64_t x414 = 29579LL;
	int16_t x415 = -1;
	int8_t x416 = INT8_MIN;

	t72 = (((x413*x414)^x415)|x416);

	if (t72 != -76LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x417 = UINT8_MAX;
	uint16_t x419 = 834U;
	volatile uint16_t x420 = 0U;
	volatile int32_t t73 = -6507;

	t73 = (((x417*x418)^x419)|x420);

	if (t73 != 1977) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x421 = -1LL;
	int16_t x422 = INT16_MAX;
	static volatile uint16_t x423 = UINT16_MAX;
	volatile uint32_t x424 = 4877616U;
	int64_t t74 = -1375061LL;

	t74 = (((x421*x422)^x423)|x424);

	if (t74 != -32770LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x430 = -172LL;
	int32_t x432 = INT32_MAX;
	static int64_t t75 = -951995131816LL;

	t75 = (((x429*x430)^x431)|x432);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x433 = -1;
	static uint16_t x434 = UINT16_MAX;
	static int16_t x435 = 193;
	static int32_t x436 = INT32_MAX;
	volatile int32_t t76 = 1490;

	t76 = (((x433*x434)^x435)|x436);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x437 = 0;
	int8_t x438 = INT8_MIN;
	static int64_t x439 = INT64_MIN;
	int16_t x440 = INT16_MIN;

	t77 = (((x437*x438)^x439)|x440);

	if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x449 = INT8_MIN;
	static int64_t x451 = -1LL;
	static uint64_t x452 = UINT64_MAX;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (((x449*x450)^x451)|x452);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x457 = UINT32_MAX;
	uint32_t x458 = 30U;
	int8_t x459 = -1;
	uint32_t t79 = 347U;

	t79 = (((x457*x458)^x459)|x460);

	if (t79 != 29U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x461 = INT8_MIN;
	static int8_t x462 = -1;
	volatile int16_t x463 = INT16_MAX;
	volatile int64_t x464 = -142199622753LL;
	static int64_t t80 = 117LL;

	t80 = (((x461*x462)^x463)|x464);

	if (t80 != -142199619585LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x465 = INT8_MAX;
	static int64_t x467 = INT64_MIN;
	int64_t x468 = -1LL;
	static uint64_t t81 = UINT64_MAX;

	t81 = (((x465*x466)^x467)|x468);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x473 = UINT64_MAX;
	int16_t x474 = 88;
	int64_t x475 = 604006LL;
	int64_t x476 = -1LL;
	uint64_t t82 = UINT64_MAX;

	t82 = (((x473*x474)^x475)|x476);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x481 = 31U;
	int32_t x483 = -835;
	uint32_t t83 = 21512821U;

	t83 = (((x481*x482)^x483)|x484);

	if (t83 != 894U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x489 = -1LL;
	int16_t x490 = 16;
	uint16_t x491 = 5U;
	int64_t t84 = -10349087LL;

	t84 = (((x489*x490)^x491)|x492);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x494 = 10U;
	static uint16_t x495 = 7175U;
	int32_t x496 = 5003745;
	uint32_t t85 = 356848U;

	t85 = (((x493*x494)^x495)|x496);

	if (t85 != 5005309U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x497 = 2957U;
	int8_t x498 = -3;
	volatile int64_t x499 = -1LL;
	static int32_t x500 = INT32_MAX;
	int64_t t86 = -16663324LL;

	t86 = (((x497*x498)^x499)|x500);

	if (t86 != -2147483649LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x501 = INT16_MIN;
	uint16_t x502 = 1U;
	static volatile int32_t x503 = INT32_MIN;
	int64_t x504 = INT64_MAX;
	int64_t t87 = INT64_MAX;

	t87 = (((x501*x502)^x503)|x504);

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x509 = -3447;
	volatile int16_t x510 = -1292;
	volatile uint16_t x511 = 640U;
	volatile uint32_t t88 = 1774638925U;

	t88 = (((x509*x510)^x511)|x512);

	if (t88 != 63700765U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x513 = -8285528449LL;
	int8_t x514 = -1;
	int32_t x515 = INT32_MIN;
	int8_t x516 = INT8_MIN;
	volatile int64_t t89 = -7086636812070311LL;

	t89 = (((x513*x514)^x515)|x516);

	if (t89 != -127LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x517 = -1;
	static uint32_t x518 = UINT32_MAX;
	int16_t x519 = INT16_MAX;
	volatile int64_t x520 = 4770824188LL;

	t90 = (((x517*x518)^x519)|x520);

	if (t90 != 4770824190LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x521 = 1275863U;
	int64_t x522 = -1LL;
	int32_t x523 = INT32_MIN;
	int16_t x524 = -90;
	volatile int64_t t91 = -25008077475772670LL;

	t91 = (((x521*x522)^x523)|x524);

	if (t91 != -81LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x525 = INT8_MIN;

	t92 = (((x525*x526)^x527)|x528);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x534 = 16U;
	uint64_t x535 = UINT64_MAX;
	uint8_t x536 = 36U;
	volatile uint64_t t93 = 7LLU;

	t93 = (((x533*x534)^x535)|x536);

	if (t93 != 18446744073709549743LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x537 = 473091806022563LLU;
	static int8_t x538 = -1;
	uint16_t x539 = 1U;

	t94 = (((x537*x538)^x539)|x540);

	if (t94 != 18446270981903529052LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x541 = 20;
	static volatile int8_t x542 = INT8_MIN;
	int8_t x543 = INT8_MAX;
	uint64_t x544 = UINT64_MAX;
	static uint64_t t95 = UINT64_MAX;

	t95 = (((x541*x542)^x543)|x544);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x545 = 3396U;
	volatile int8_t x547 = -2;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (((x545*x546)^x547)|x548);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x554 = INT8_MIN;
	int8_t x555 = INT8_MIN;
	int16_t x556 = -1;
	volatile int32_t t97 = -19714446;

	t97 = (((x553*x554)^x555)|x556);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x560 = 876U;
	uint64_t t98 = 817331LLU;

	t98 = (((x557*x558)^x559)|x560);

	if (t98 != 18436050857125479294LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x562 = INT8_MIN;
	static int32_t x563 = -9;
	int64_t x564 = -353LL;
	static volatile int64_t t99 = -58775LL;

	t99 = (((x561*x562)^x563)|x564);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

