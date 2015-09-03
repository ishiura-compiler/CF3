#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -14;
static int8_t x14 = -4;
volatile int64_t x15 = INT64_MIN;
int8_t x20 = INT8_MIN;
volatile uint16_t x25 = 290U;
int32_t x34 = INT32_MAX;
volatile int32_t t7 = -24;
int64_t x45 = 3141447947LL;
volatile int8_t x48 = -1;
uint8_t x57 = 17U;
static int64_t x58 = INT64_MIN;
int64_t x60 = -1LL;
volatile int32_t t11 = -547;
uint8_t x62 = 13U;
int32_t t12 = -144;
static int32_t x65 = INT32_MIN;
static uint8_t x67 = UINT8_MAX;
int64_t x72 = -3336LL;
int32_t t14 = 42;
static uint64_t x78 = 176262LLU;
static int8_t x85 = INT8_MAX;
static volatile int64_t x89 = INT64_MIN;
static uint64_t x97 = 9263046LLU;
volatile int64_t x99 = 55786LL;
volatile int64_t x100 = 153053174133182LL;
int32_t t21 = -37;
static int32_t x107 = INT32_MAX;
int8_t x108 = -3;
int16_t x109 = -1;
int16_t x111 = INT16_MIN;
int64_t x112 = INT64_MIN;
int32_t x114 = INT32_MAX;
int8_t x124 = INT8_MIN;
static volatile int8_t x126 = -1;
int8_t x139 = 1;
uint32_t x140 = UINT32_MAX;
int64_t x145 = -1LL;
uint64_t x155 = 15790771224854233LLU;
int32_t x157 = INT32_MIN;
int16_t x165 = 34;
int16_t x169 = -1;
uint32_t x179 = 25072U;
int64_t x180 = -165228LL;
int32_t t36 = 13981;
uint64_t x187 = 51894695LLU;
volatile uint16_t x204 = 1U;
static volatile uint8_t x222 = 2U;
static int32_t x231 = INT32_MAX;
int8_t x233 = INT8_MAX;
int64_t x245 = INT64_MIN;
volatile int32_t t46 = 346505;
static int32_t t50 = -795;
int64_t x271 = -1LL;
int16_t x276 = INT16_MAX;
volatile int32_t x278 = -248;
volatile int8_t x283 = 28;
int64_t x293 = INT64_MAX;
int32_t t57 = -2078;
static int8_t x318 = INT8_MIN;
uint8_t x321 = UINT8_MAX;
int16_t x338 = INT16_MIN;
int64_t x340 = -124493LL;
volatile uint8_t x346 = 11U;
uint32_t x369 = UINT32_MAX;
static int16_t x370 = -23;
uint8_t x375 = 1U;
volatile int8_t x381 = INT8_MIN;
int64_t x386 = INT64_MAX;
uint32_t x391 = UINT32_MAX;
int32_t x394 = -28199;
volatile int32_t t76 = 1;
static int8_t x398 = -1;
static int8_t x400 = -1;
uint8_t x403 = 1U;
static uint32_t x405 = UINT32_MAX;
static volatile int16_t x406 = INT16_MIN;
int32_t t80 = -3966;
static volatile int8_t x413 = -8;
int16_t x416 = INT16_MAX;
volatile int32_t t82 = -25755;
static volatile int64_t x423 = 765791801468LL;
static volatile int32_t t83 = -124330;
int32_t x427 = INT32_MIN;
static int32_t t85 = -4;
volatile int64_t x437 = INT64_MAX;
int64_t x440 = -1LL;
volatile int32_t t86 = 10946642;
uint64_t x443 = 526LLU;
uint8_t x447 = UINT8_MAX;
static volatile int32_t t89 = 27;
int64_t x462 = INT64_MAX;
int64_t x472 = -1LL;
static int8_t x479 = INT8_MAX;
int32_t x484 = INT32_MIN;
volatile int32_t t95 = 4;
uint32_t x506 = 758038616U;
int16_t x511 = INT16_MAX;
int16_t x514 = INT16_MIN;


void f0(void) {
	volatile int8_t x1 = 16;
	uint64_t x2 = 79581901LLU;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;

	t0 = ((x1%(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x13 = 84U;
	int64_t x16 = -737LL;
	volatile int32_t t1 = -96;

	t1 = ((x13%(x14&x15))<=x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x17 = INT16_MAX;
	static int64_t x18 = -27102836176LL;
	int16_t x19 = -1;
	int32_t t2 = 1;

	t2 = ((x17%(x18&x19))<=x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x26 = -1289;
	volatile int32_t x27 = -1;
	static int64_t x28 = INT64_MIN;
	volatile int32_t t3 = -1298615;

	t3 = ((x25%(x26&x27))<=x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x29 = -1LL;
	int8_t x30 = -23;
	static uint8_t x31 = UINT8_MAX;
	int8_t x32 = -1;
	volatile int32_t t4 = 839777110;

	t4 = ((x29%(x30&x31))<=x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x33 = 1U;
	int32_t x35 = 325184;
	uint64_t x36 = 2250730276791838073LLU;
	volatile int32_t t5 = -3773743;

	t5 = ((x33%(x34&x35))<=x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = 960;
	volatile uint32_t x38 = 1222894U;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = 1240307LLU;
	int32_t t6 = -3;

	t6 = ((x37%(x38&x39))<=x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 27U;
	volatile int8_t x42 = -1;
	int16_t x43 = 1;
	int32_t x44 = -1;

	t7 = ((x41%(x42&x43))<=x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x46 = UINT64_MAX;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t t8 = 7;

	t8 = ((x45%(x46&x47))<=x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = -1;
	int16_t x50 = -2;
	int32_t x51 = -735404597;
	uint16_t x52 = 5208U;
	int32_t t9 = -112;

	t9 = ((x49%(x50&x51))<=x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MIN;
	int64_t x54 = -6246855648287LL;
	int32_t x55 = -1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t10 = -20;

	t10 = ((x53%(x54&x55))<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x59 = INT16_MIN;

	t11 = ((x57%(x58&x59))<=x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -22948LL;
	uint64_t x63 = UINT64_MAX;
	uint8_t x64 = 10U;

	t12 = ((x61%(x62&x63))<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x66 = -2;
	int16_t x68 = INT16_MIN;
	volatile int32_t t13 = -3;

	t13 = ((x65%(x66&x67))<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = INT32_MAX;
	int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MIN;

	t14 = ((x69%(x70&x71))<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = 40615277437409655LL;
	int64_t x74 = -370726820239LL;
	uint32_t x75 = UINT32_MAX;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t15 = -7;

	t15 = ((x73%(x74&x75))<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	volatile int16_t x79 = INT16_MAX;
	int8_t x80 = -1;
	static volatile int32_t t16 = 19777;

	t16 = ((x77%(x78&x79))<=x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = 1681401520LL;
	int64_t x82 = INT64_MAX;
	static uint64_t x83 = 41964LLU;
	uint16_t x84 = 3868U;
	int32_t t17 = 711157633;

	t17 = ((x81%(x82&x83))<=x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x86 = 123117112765LLU;
	static uint8_t x87 = 3U;
	uint8_t x88 = 47U;
	volatile int32_t t18 = -2527;

	t18 = ((x85%(x86&x87))<=x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = -162587;
	int8_t x92 = INT8_MAX;
	volatile int32_t t19 = -2;

	t19 = ((x89%(x90&x91))<=x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x93 = UINT16_MAX;
	int16_t x94 = -488;
	uint64_t x95 = UINT64_MAX;
	static int64_t x96 = INT64_MIN;
	int32_t t20 = 39394;

	t20 = ((x93%(x94&x95))<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x98 = 30U;

	t21 = ((x97%(x98&x99))<=x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = 29;
	uint16_t x106 = 2716U;
	volatile int32_t t22 = -1606596;

	t22 = ((x105%(x106&x107))<=x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = -4;
	int32_t t23 = -30;

	t23 = ((x109%(x110&x111))<=x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x113 = 0U;
	int16_t x115 = 1;
	uint16_t x116 = 9465U;
	int32_t t24 = 247742;

	t24 = ((x113%(x114&x115))<=x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = UINT16_MAX;
	static uint8_t x118 = UINT8_MAX;
	uint32_t x119 = 4652248U;
	int32_t x120 = -1;
	int32_t t25 = 2;

	t25 = ((x117%(x118&x119))<=x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 49U;
	static int32_t x122 = -1;
	int16_t x123 = INT16_MIN;
	int32_t t26 = 0;

	t26 = ((x121%(x122&x123))<=x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	int32_t x127 = -1;
	int64_t x128 = -48106002687LL;
	int32_t t27 = 60716951;

	t27 = ((x125%(x126&x127))<=x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = -1;
	uint16_t x138 = 10353U;
	int32_t t28 = -7;

	t28 = ((x137%(x138&x139))<=x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MAX;
	int16_t x143 = -1502;
	static int64_t x144 = INT64_MAX;
	static volatile int32_t t29 = 485807;

	t29 = ((x141%(x142&x143))<=x144);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x146 = UINT16_MAX;
	uint64_t x147 = 47902023LLU;
	int32_t x148 = 63;
	volatile int32_t t30 = -41919430;

	t30 = ((x145%(x146&x147))<=x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x153 = UINT64_MAX;
	volatile int32_t x154 = 2323764;
	int64_t x156 = -1LL;
	static int32_t t31 = -430628860;

	t31 = ((x153%(x154&x155))<=x156);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x158 = INT64_MAX;
	int64_t x159 = -414LL;
	int32_t x160 = 243024059;
	volatile int32_t t32 = -74564;

	t32 = ((x157%(x158&x159))<=x160);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x166 = -42;
	int16_t x167 = -1886;
	static int8_t x168 = 1;
	volatile int32_t t33 = -2901;

	t33 = ((x165%(x166&x167))<=x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x170 = 6U;
	uint16_t x171 = UINT16_MAX;
	volatile int32_t x172 = -288;
	volatile int32_t t34 = 372720012;

	t34 = ((x169%(x170&x171))<=x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x177 = INT32_MIN;
	volatile uint64_t x178 = 27833509LLU;
	static int32_t t35 = 2;

	t35 = ((x177%(x178&x179))<=x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = 32;
	uint64_t x182 = 10244277LLU;
	static uint8_t x183 = UINT8_MAX;
	uint8_t x184 = UINT8_MAX;

	t36 = ((x181%(x182&x183))<=x184);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = -1;
	int16_t x186 = INT16_MAX;
	static int64_t x188 = INT64_MIN;
	volatile int32_t t37 = -32380;

	t37 = ((x185%(x186&x187))<=x188);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x197 = 118665091U;
	static uint16_t x198 = UINT16_MAX;
	static int32_t x199 = INT32_MAX;
	static int32_t x200 = INT32_MAX;
	volatile int32_t t38 = 10;

	t38 = ((x197%(x198&x199))<=x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = -1;
	int64_t x202 = INT64_MAX;
	static int16_t x203 = INT16_MAX;
	int32_t t39 = -20946;

	t39 = ((x201%(x202&x203))<=x204);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = INT32_MAX;
	static uint32_t x206 = 9014U;
	uint8_t x207 = 50U;
	volatile int32_t x208 = -12;
	static volatile int32_t t40 = 191434;

	t40 = ((x205%(x206&x207))<=x208);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x209 = -22;
	static int8_t x210 = INT8_MAX;
	int16_t x211 = 157;
	int8_t x212 = INT8_MAX;
	static volatile int32_t t41 = -1;

	t41 = ((x209%(x210&x211))<=x212);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = INT16_MIN;
	int32_t x223 = INT32_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t42 = -23;

	t42 = ((x221%(x222&x223))<=x224);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x229 = 126;
	int16_t x230 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	volatile int32_t t43 = -28714;

	t43 = ((x229%(x230&x231))<=x232);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x234 = INT64_MAX;
	int16_t x235 = 11;
	uint64_t x236 = 3988LLU;
	static volatile int32_t t44 = 167;

	t44 = ((x233%(x234&x235))<=x236);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = 3;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MAX;
	static int32_t x240 = 246242304;
	static volatile int32_t t45 = 6672670;

	t45 = ((x237%(x238&x239))<=x240);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x246 = INT16_MAX;
	int8_t x247 = -1;
	int8_t x248 = INT8_MIN;

	t46 = ((x245%(x246&x247))<=x248);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x249 = UINT16_MAX;
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = -3417;
	uint64_t x252 = UINT64_MAX;
	int32_t t47 = 3286;

	t47 = ((x249%(x250&x251))<=x252);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x257 = 27LLU;
	int32_t x258 = -782157626;
	static volatile int16_t x259 = INT16_MIN;
	int8_t x260 = 0;
	static int32_t t48 = 1;

	t48 = ((x257%(x258&x259))<=x260);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = -439;
	int16_t x262 = INT16_MAX;
	int32_t x263 = -1;
	static volatile int64_t x264 = -90325LL;
	int32_t t49 = -359965188;

	t49 = ((x261%(x262&x263))<=x264);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x265 = 4LLU;
	int32_t x266 = INT32_MAX;
	uint16_t x267 = 7U;
	int8_t x268 = 0;

	t50 = ((x265%(x266&x267))<=x268);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x269 = -1LL;
	volatile uint16_t x270 = 29820U;
	static int16_t x272 = -555;
	volatile int32_t t51 = 292669;

	t51 = ((x269%(x270&x271))<=x272);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x273 = 1311;
	uint32_t x274 = 6U;
	volatile int64_t x275 = -306LL;
	int32_t t52 = 4898;

	t52 = ((x273%(x274&x275))<=x276);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x277 = -433;
	uint32_t x279 = 359316U;
	int16_t x280 = -1;
	static int32_t t53 = 3736;

	t53 = ((x277%(x278&x279))<=x280);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x281 = UINT64_MAX;
	static volatile int16_t x282 = 275;
	int16_t x284 = INT16_MAX;
	int32_t t54 = -7142509;

	t54 = ((x281%(x282&x283))<=x284);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = 125608437671901LL;
	volatile int8_t x286 = INT8_MIN;
	static volatile int32_t x287 = -62;
	int64_t x288 = INT64_MIN;
	static int32_t t55 = -4;

	t55 = ((x285%(x286&x287))<=x288);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x294 = -1;
	int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MIN;
	volatile int32_t t56 = 3;

	t56 = ((x293%(x294&x295))<=x296);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	static uint64_t x299 = 317124823410056LLU;
	static volatile uint16_t x300 = 12762U;

	t57 = ((x297%(x298&x299))<=x300);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x301 = INT16_MAX;
	int16_t x302 = -179;
	static volatile int64_t x303 = -1LL;
	static uint16_t x304 = UINT16_MAX;
	static int32_t t58 = 2;

	t58 = ((x301%(x302&x303))<=x304);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x305 = -1;
	uint16_t x306 = 59U;
	uint64_t x307 = 5443080LLU;
	int8_t x308 = INT8_MIN;
	int32_t t59 = -27790406;

	t59 = ((x305%(x306&x307))<=x308);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x309 = UINT32_MAX;
	uint16_t x310 = 2031U;
	static uint64_t x311 = 16840984771LLU;
	int32_t x312 = INT32_MIN;
	volatile int32_t t60 = -80;

	t60 = ((x309%(x310&x311))<=x312);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x313 = 61U;
	volatile int8_t x314 = -56;
	uint16_t x315 = UINT16_MAX;
	volatile int64_t x316 = INT64_MIN;
	int32_t t61 = 81688044;

	t61 = ((x313%(x314&x315))<=x316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x317 = 8863538792LLU;
	int64_t x319 = INT64_MIN;
	uint32_t x320 = UINT32_MAX;
	int32_t t62 = 89;

	t62 = ((x317%(x318&x319))<=x320);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t63 = -79003188;

	t63 = ((x321%(x322&x323))<=x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x325 = UINT64_MAX;
	static int8_t x326 = INT8_MAX;
	uint8_t x327 = UINT8_MAX;
	int32_t x328 = -1;
	volatile int32_t t64 = 117;

	t64 = ((x325%(x326&x327))<=x328);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x329 = 230U;
	uint32_t x330 = 995U;
	uint32_t x331 = 256829U;
	int8_t x332 = 0;
	volatile int32_t t65 = 2771;

	t65 = ((x329%(x330&x331))<=x332);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x337 = -53985762;
	static volatile int64_t x339 = INT64_MIN;
	static volatile int32_t t66 = 4;

	t66 = ((x337%(x338&x339))<=x340);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = -24;
	int32_t x343 = -1;
	int64_t x344 = INT64_MIN;
	int32_t t67 = 26419;

	t67 = ((x341%(x342&x343))<=x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x345 = 2U;
	static volatile int32_t x347 = -1;
	uint64_t x348 = 283463LLU;
	volatile int32_t t68 = -323880;

	t68 = ((x345%(x346&x347))<=x348);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x357 = 3066U;
	int64_t x358 = -12LL;
	int8_t x359 = -15;
	static int64_t x360 = -387931968179331606LL;
	static int32_t t69 = 9;

	t69 = ((x357%(x358&x359))<=x360);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x361 = INT16_MAX;
	volatile int64_t x362 = -1LL;
	static uint32_t x363 = UINT32_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t70 = -251961;

	t70 = ((x361%(x362&x363))<=x364);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x371 = INT16_MAX;
	int8_t x372 = -1;
	volatile int32_t t71 = 222794255;

	t71 = ((x369%(x370&x371))<=x372);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x373 = 984358723278111804LLU;
	int8_t x374 = INT8_MAX;
	int8_t x376 = -1;
	static volatile int32_t t72 = 2771;

	t72 = ((x373%(x374&x375))<=x376);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x382 = INT8_MIN;
	volatile int8_t x383 = -1;
	uint8_t x384 = 3U;
	volatile int32_t t73 = -91443;

	t73 = ((x381%(x382&x383))<=x384);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x385 = 4797;
	volatile uint64_t x387 = UINT64_MAX;
	volatile uint64_t x388 = 795813LLU;
	int32_t t74 = 4785719;

	t74 = ((x385%(x386&x387))<=x388);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	static int32_t t75 = 913136128;

	t75 = ((x389%(x390&x391))<=x392);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x393 = -119026;
	int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MIN;

	t76 = ((x393%(x394&x395))<=x396);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x397 = -65875876008974167LL;
	static int64_t x399 = INT64_MAX;
	volatile int32_t t77 = -8568;

	t77 = ((x397%(x398&x399))<=x400);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x401 = 1098842LLU;
	int8_t x402 = 7;
	static int16_t x404 = INT16_MAX;
	static int32_t t78 = 1015;

	t78 = ((x401%(x402&x403))<=x404);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x407 = -1;
	int32_t x408 = -54665;
	static volatile int32_t t79 = 1718;

	t79 = ((x405%(x406&x407))<=x408);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x409 = 60U;
	uint32_t x410 = 29083210U;
	static int32_t x411 = -33636;
	uint32_t x412 = UINT32_MAX;

	t80 = ((x409%(x410&x411))<=x412);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x414 = 23;
	int32_t x415 = 1867;
	static int32_t t81 = 198877;

	t81 = ((x413%(x414&x415))<=x416);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x417 = UINT32_MAX;
	uint16_t x418 = UINT16_MAX;
	volatile int8_t x419 = -1;
	volatile uint64_t x420 = 1LLU;

	t82 = ((x417%(x418&x419))<=x420);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x421 = 47U;
	int32_t x422 = -1;
	volatile int8_t x424 = -1;

	t83 = ((x421%(x422&x423))<=x424);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x425 = UINT64_MAX;
	static int64_t x426 = INT64_MIN;
	int32_t x428 = INT32_MIN;
	volatile int32_t t84 = -72819957;

	t84 = ((x425%(x426&x427))<=x428);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x433 = INT32_MAX;
	uint32_t x434 = 987784477U;
	volatile int8_t x435 = -1;
	uint8_t x436 = 0U;

	t85 = ((x433%(x434&x435))<=x436);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x438 = -5;
	int8_t x439 = INT8_MIN;

	t86 = ((x437%(x438&x439))<=x440);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x441 = INT16_MIN;
	static int64_t x442 = -1LL;
	uint8_t x444 = 1U;
	int32_t t87 = -45;

	t87 = ((x441%(x442&x443))<=x444);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x445 = -35;
	volatile int32_t x446 = -1;
	volatile uint8_t x448 = 45U;
	int32_t t88 = -871;

	t88 = ((x445%(x446&x447))<=x448);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x449 = -1;
	uint8_t x450 = UINT8_MAX;
	static volatile uint32_t x451 = UINT32_MAX;
	int8_t x452 = -1;

	t89 = ((x449%(x450&x451))<=x452);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x457 = 1;
	static volatile uint16_t x458 = UINT16_MAX;
	static uint64_t x459 = 3991752598LLU;
	int32_t x460 = INT32_MAX;
	int32_t t90 = -178;

	t90 = ((x457%(x458&x459))<=x460);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x461 = 1618;
	static volatile uint16_t x463 = UINT16_MAX;
	int64_t x464 = -1LL;
	int32_t t91 = 433;

	t91 = ((x461%(x462&x463))<=x464);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x469 = 38;
	uint8_t x470 = 2U;
	uint32_t x471 = UINT32_MAX;
	volatile int32_t t92 = -151070503;

	t92 = ((x469%(x470&x471))<=x472);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x477 = 9;
	uint8_t x478 = UINT8_MAX;
	int8_t x480 = INT8_MIN;
	volatile int32_t t93 = 73611455;

	t93 = ((x477%(x478&x479))<=x480);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x481 = 0;
	int8_t x482 = INT8_MIN;
	int64_t x483 = INT64_MAX;
	int32_t t94 = -37016838;

	t94 = ((x481%(x482&x483))<=x484);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x485 = -1;
	uint16_t x486 = 50U;
	int64_t x487 = INT64_MAX;
	static int32_t x488 = -1;

	t95 = ((x485%(x486&x487))<=x488);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x493 = 2067U;
	uint8_t x494 = 1U;
	volatile int8_t x495 = -1;
	int8_t x496 = INT8_MAX;
	int32_t t96 = 1262;

	t96 = ((x493%(x494&x495))<=x496);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x505 = INT32_MIN;
	int8_t x507 = INT8_MAX;
	static int64_t x508 = INT64_MIN;
	volatile int32_t t97 = 59;

	t97 = ((x505%(x506&x507))<=x508);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x509 = INT64_MIN;
	uint64_t x510 = UINT64_MAX;
	uint8_t x512 = UINT8_MAX;
	int32_t t98 = 237;

	t98 = ((x509%(x510&x511))<=x512);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x513 = -24245212;
	static int64_t x515 = -345LL;
	int32_t x516 = 62;
	volatile int32_t t99 = 67;

	t99 = ((x513%(x514&x515))<=x516);

	if (t99 != 1) { NG(); } else { ; }
	
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

