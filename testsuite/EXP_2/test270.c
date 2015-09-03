#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x14 = 30U;
uint64_t x15 = 2804784LLU;
int8_t x16 = 15;
int64_t x20 = 210562424524LL;
volatile int32_t x21 = INT32_MIN;
volatile int32_t t5 = 67;
int32_t x29 = -1;
int8_t x35 = 31;
volatile int32_t t9 = 730;
static int32_t x45 = 202;
uint64_t x48 = 0LLU;
volatile int64_t x49 = INT64_MIN;
int64_t x51 = 21930347113LL;
volatile int32_t t11 = -156;
int8_t x56 = -1;
volatile int64_t x58 = 78LL;
int32_t x65 = INT32_MIN;
uint32_t x68 = 11344071U;
static volatile int32_t t16 = -213277621;
int8_t x75 = -1;
static int8_t x79 = -3;
int32_t t20 = -21490;
uint8_t x92 = 60U;
uint8_t x96 = UINT8_MAX;
int64_t x101 = -1LL;
int32_t t24 = -5;
uint32_t x105 = 22U;
uint16_t x107 = 2U;
static int32_t x116 = INT32_MIN;
volatile int32_t t27 = 1;
uint8_t x122 = 6U;
static int16_t x126 = -11263;
int16_t x128 = -1;
uint64_t x134 = UINT64_MAX;
int32_t t31 = -3693595;
int64_t x145 = -1LL;
volatile int32_t t32 = -40021528;
int32_t x157 = INT32_MIN;
int32_t x158 = -1;
int32_t x159 = INT32_MAX;
int32_t t34 = 2;
static int16_t x162 = 5;
volatile int16_t x163 = -258;
int32_t t35 = -12976;
static uint32_t x173 = UINT32_MAX;
int32_t x179 = -125;
volatile int32_t t39 = 996576;
int32_t x185 = INT32_MIN;
int64_t x188 = INT64_MIN;
int32_t t41 = 4;
int8_t x189 = INT8_MAX;
uint16_t x195 = UINT16_MAX;
uint8_t x201 = 39U;
int32_t x204 = -1;
int8_t x207 = -1;
uint32_t x218 = 884812U;
int32_t t48 = -14;
int16_t x226 = INT16_MAX;
uint32_t x227 = UINT32_MAX;
int32_t t50 = 123656590;
static int64_t x236 = INT64_MAX;
int32_t t53 = 2795579;
int32_t t57 = -40;
int8_t x271 = INT8_MIN;
volatile int32_t t58 = -1669;
static int64_t x282 = -1LL;
int8_t x286 = 40;
uint16_t x293 = 6U;
static int8_t x294 = -1;
volatile int8_t x303 = INT8_MIN;
volatile int32_t t69 = 5;
uint32_t x323 = 6U;
static volatile int8_t x327 = 0;
uint8_t x328 = 0U;
int8_t x341 = INT8_MAX;
uint8_t x343 = 2U;
static uint8_t x346 = 4U;
int32_t x354 = 5171493;
static volatile int64_t x355 = 41043947340967LL;
int8_t x356 = INT8_MAX;
uint64_t x367 = 0LLU;
int32_t t79 = -29;
static volatile int32_t t80 = 7421184;
volatile int32_t t81 = -13452634;
static volatile int32_t x387 = INT32_MAX;
volatile int32_t t83 = -250546156;
static volatile int32_t t85 = -1;
int64_t x398 = INT64_MIN;
volatile int8_t x400 = INT8_MIN;
uint32_t x409 = 2098035U;
int64_t x412 = INT64_MIN;
static uint16_t x417 = 126U;
uint64_t x421 = 164759443810826LLU;
uint32_t x429 = 22840723U;
uint32_t x448 = 485114645U;
uint32_t x454 = UINT32_MAX;
static int32_t t97 = -141024272;
uint8_t x463 = UINT8_MAX;
int8_t x465 = -1;
static int16_t x468 = -216;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int32_t x2 = 288;
	int64_t x3 = INT64_MAX;
	static volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -163;

	t0 = ((x1==(x2-x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	static volatile uint32_t x10 = 0U;
	static volatile uint8_t x11 = 4U;
	int8_t x12 = -25;
	int32_t t1 = -52398070;

	t1 = ((x9==(x10-x11))<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int32_t t2 = 413608;

	t2 = ((x13==(x14-x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	static int8_t x18 = 1;
	int32_t x19 = -13101582;
	volatile int32_t t3 = 11265;

	t3 = ((x17==(x18-x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = UINT32_MAX;
	int8_t x23 = -1;
	int8_t x24 = -1;
	int32_t t4 = -38;

	t4 = ((x21==(x22-x23))<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 1;
	static int8_t x26 = INT8_MAX;
	static uint32_t x27 = 54727360U;
	int16_t x28 = -1;

	t5 = ((x25==(x26-x27))<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	uint16_t x31 = 3U;
	int32_t x32 = INT32_MIN;
	int32_t t6 = 246954;

	t6 = ((x29==(x30-x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 7U;
	int16_t x34 = INT16_MIN;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t7 = -1018;

	t7 = ((x33==(x34-x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	uint64_t x38 = 332887089LLU;
	int16_t x39 = INT16_MIN;
	int8_t x40 = -36;
	volatile int32_t t8 = 331;

	t8 = ((x37==(x38-x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 7;
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = -1;
	int32_t x44 = INT32_MIN;

	t9 = ((x41==(x42-x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x46 = 39513U;
	uint16_t x47 = 4707U;
	static volatile int32_t t10 = -176221322;

	t10 = ((x45==(x46-x47))<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x50 = -4LL;
	uint8_t x52 = 7U;

	t11 = ((x49==(x50-x51))<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	volatile int16_t x54 = -1;
	static uint16_t x55 = 10190U;
	int32_t t12 = 36252291;

	t12 = ((x53==(x54-x55))<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	static volatile int32_t x59 = 402056;
	int32_t x60 = INT32_MIN;
	int32_t t13 = -10795;

	t13 = ((x57==(x58-x59))<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	int16_t x62 = INT16_MAX;
	static int64_t x63 = 6470011476486459LL;
	uint16_t x64 = UINT16_MAX;
	int32_t t14 = 16112288;

	t14 = ((x61==(x62-x63))<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = -5927;
	static volatile int32_t x67 = 11058191;
	int32_t t15 = 481605;

	t15 = ((x65==(x66-x67))<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = 0;
	static uint16_t x70 = 3374U;
	static volatile uint16_t x71 = 40U;
	uint64_t x72 = 0LLU;

	t16 = ((x69==(x70-x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -5;
	uint16_t x74 = 216U;
	int16_t x76 = INT16_MAX;
	volatile int32_t t17 = -514761359;

	t17 = ((x73==(x74-x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = 28;
	int8_t x80 = -15;
	int32_t t18 = -544228605;

	t18 = ((x77==(x78-x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -1;
	uint8_t x82 = 38U;
	static int64_t x83 = INT64_MAX;
	int32_t x84 = INT32_MAX;
	volatile int32_t t19 = -228;

	t19 = ((x81==(x82-x83))<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	static uint8_t x86 = 104U;
	volatile uint16_t x87 = UINT16_MAX;
	int8_t x88 = 3;

	t20 = ((x85==(x86-x87))<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = 127U;
	uint8_t x90 = 10U;
	volatile int64_t x91 = INT64_MAX;
	int32_t t21 = -23901;

	t21 = ((x89==(x90-x91))<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -27;
	volatile int64_t x94 = 2614LL;
	int8_t x95 = INT8_MIN;
	volatile int32_t t22 = 507449522;

	t22 = ((x93==(x94-x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = 12LLU;
	int32_t x98 = -476600905;
	uint32_t x99 = 23741U;
	uint64_t x100 = 30LLU;
	static volatile int32_t t23 = 7999898;

	t23 = ((x97==(x98-x99))<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x102 = -1;
	static volatile int64_t x103 = -1LL;
	int8_t x104 = INT8_MAX;

	t24 = ((x101==(x102-x103))<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x106 = 3954LLU;
	volatile uint64_t x108 = UINT64_MAX;
	int32_t t25 = -222236835;

	t25 = ((x105==(x106-x107))<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 2U;
	static volatile uint64_t x110 = 34114LLU;
	int8_t x111 = -1;
	uint16_t x112 = 33U;
	int32_t t26 = -2;

	t26 = ((x109==(x110-x111))<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MIN;
	int64_t x115 = -1LL;

	t27 = ((x113==(x114-x115))<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 134U;
	static int8_t x123 = -1;
	int8_t x124 = INT8_MIN;
	volatile int32_t t28 = -3400035;

	t28 = ((x121==(x122-x123))<=x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 12;
	static volatile int8_t x127 = -1;
	volatile int32_t t29 = 12579245;

	t29 = ((x125==(x126-x127))<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint8_t x135 = UINT8_MAX;
	int32_t x136 = INT32_MIN;
	static int32_t t30 = 198956293;

	t30 = ((x133==(x134-x135))<=x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x137 = INT64_MIN;
	int16_t x138 = -1;
	static uint64_t x139 = 203540328183LLU;
	int8_t x140 = 0;

	t31 = ((x137==(x138-x139))<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x146 = INT16_MAX;
	int8_t x147 = -1;
	int16_t x148 = INT16_MIN;

	t32 = ((x145==(x146-x147))<=x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	int8_t x154 = 2;
	int8_t x155 = 3;
	static uint16_t x156 = 272U;
	int32_t t33 = 22577;

	t33 = ((x153==(x154-x155))<=x156);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x160 = INT32_MIN;

	t34 = ((x157==(x158-x159))<=x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x161 = 11;
	volatile int16_t x164 = INT16_MIN;

	t35 = ((x161==(x162-x163))<=x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x165 = 28U;
	volatile uint32_t x166 = 31211U;
	int8_t x167 = INT8_MIN;
	static int8_t x168 = 0;
	static volatile int32_t t36 = -5;

	t36 = ((x165==(x166-x167))<=x168);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	int16_t x171 = -6877;
	int64_t x172 = INT64_MIN;
	int32_t t37 = 37902;

	t37 = ((x169==(x170-x171))<=x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x174 = -11;
	volatile int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t38 = 56491971;

	t38 = ((x173==(x174-x175))<=x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x177 = 15U;
	uint16_t x178 = 2U;
	int16_t x180 = 2;

	t39 = ((x177==(x178-x179))<=x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x181 = 7580U;
	int64_t x182 = -2551022861294893LL;
	static uint16_t x183 = UINT16_MAX;
	static int64_t x184 = -1LL;
	static volatile int32_t t40 = 33410208;

	t40 = ((x181==(x182-x183))<=x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x186 = 43264924U;
	int16_t x187 = INT16_MIN;

	t41 = ((x185==(x186-x187))<=x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x190 = 1U;
	static volatile int8_t x191 = INT8_MIN;
	static int32_t x192 = 26;
	volatile int32_t t42 = -128751202;

	t42 = ((x189==(x190-x191))<=x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = -48;
	uint32_t x194 = 7511541U;
	int64_t x196 = INT64_MIN;
	static volatile int32_t t43 = -109631;

	t43 = ((x193==(x194-x195))<=x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = 597319990LL;
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = INT16_MIN;
	static uint8_t x200 = 13U;
	int32_t t44 = -556640;

	t44 = ((x197==(x198-x199))<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x202 = 31U;
	int64_t x203 = -1LL;
	int32_t t45 = 102;

	t45 = ((x201==(x202-x203))<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = 7;
	uint32_t x206 = 0U;
	uint64_t x208 = 55LLU;
	volatile int32_t t46 = -57651555;

	t46 = ((x205==(x206-x207))<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = INT64_MIN;
	uint8_t x214 = UINT8_MAX;
	int32_t x215 = 835840;
	static volatile int8_t x216 = -1;
	volatile int32_t t47 = 258528021;

	t47 = ((x213==(x214-x215))<=x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = UINT32_MAX;
	uint64_t x219 = 109744061428LLU;
	static int16_t x220 = -4;

	t48 = ((x217==(x218-x219))<=x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x221 = -1;
	static volatile uint32_t x222 = UINT32_MAX;
	static volatile uint32_t x223 = UINT32_MAX;
	uint16_t x224 = 8U;
	int32_t t49 = 221950702;

	t49 = ((x221==(x222-x223))<=x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = 1U;
	static int64_t x228 = INT64_MAX;

	t50 = ((x225==(x226-x227))<=x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = -5;
	uint8_t x230 = UINT8_MAX;
	uint8_t x231 = 72U;
	int32_t x232 = INT32_MIN;
	volatile int32_t t51 = -3252;

	t51 = ((x229==(x230-x231))<=x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = 5903521386718LLU;
	uint64_t x234 = 215205012934678865LLU;
	volatile uint32_t x235 = 1602284644U;
	volatile int32_t t52 = 8060;

	t52 = ((x233==(x234-x235))<=x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = 15926U;
	static uint32_t x246 = 18278320U;
	int32_t x247 = INT32_MIN;
	static int8_t x248 = 57;

	t53 = ((x245==(x246-x247))<=x248);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x253 = -1;
	int32_t x254 = -1;
	uint64_t x255 = 1631LLU;
	static uint64_t x256 = 20781250033LLU;
	volatile int32_t t54 = 132612524;

	t54 = ((x253==(x254-x255))<=x256);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x257 = -46427;
	int16_t x258 = 8;
	int8_t x259 = -1;
	uint8_t x260 = UINT8_MAX;
	int32_t t55 = 56;

	t55 = ((x257==(x258-x259))<=x260);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = 127072703U;
	static uint32_t x262 = 15690022U;
	int32_t x263 = INT32_MIN;
	static volatile int16_t x264 = INT16_MIN;
	volatile int32_t t56 = -4;

	t56 = ((x261==(x262-x263))<=x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MIN;
	int8_t x267 = 2;
	int32_t x268 = -96629650;

	t57 = ((x265==(x266-x267))<=x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x269 = 5126U;
	int64_t x270 = -115103318LL;
	int16_t x272 = INT16_MIN;

	t58 = ((x269==(x270-x271))<=x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MAX;
	static uint32_t x275 = 1908U;
	uint16_t x276 = 4336U;
	int32_t t59 = 979707;

	t59 = ((x273==(x274-x275))<=x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = 182996949811814342LLU;
	int32_t x278 = INT32_MIN;
	static volatile int64_t x279 = INT64_MIN;
	static volatile int32_t x280 = INT32_MIN;
	static int32_t t60 = 12595;

	t60 = ((x277==(x278-x279))<=x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x281 = UINT64_MAX;
	volatile uint8_t x283 = 86U;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t61 = 14785;

	t61 = ((x281==(x282-x283))<=x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = INT64_MIN;
	int16_t x287 = -159;
	volatile int16_t x288 = INT16_MAX;
	int32_t t62 = -852099;

	t62 = ((x285==(x286-x287))<=x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x295 = 51054732329892LL;
	static int8_t x296 = 7;
	static int32_t t63 = -107092615;

	t63 = ((x293==(x294-x295))<=x296);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x297 = 0U;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MIN;
	static int32_t t64 = 523472;

	t64 = ((x297==(x298-x299))<=x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = INT32_MIN;
	static int8_t x302 = INT8_MAX;
	int32_t x304 = -1;
	volatile int32_t t65 = -16107;

	t65 = ((x301==(x302-x303))<=x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = -6027961104888005LL;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = INT8_MAX;
	volatile int32_t t66 = -6506693;

	t66 = ((x305==(x306-x307))<=x308);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x309 = 3;
	int16_t x310 = 163;
	static int16_t x311 = -6;
	static int16_t x312 = INT16_MIN;
	int32_t t67 = 209583;

	t67 = ((x309==(x310-x311))<=x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = INT8_MAX;
	static int64_t x314 = -105778LL;
	static int16_t x315 = INT16_MAX;
	int16_t x316 = INT16_MIN;
	static int32_t t68 = -60;

	t68 = ((x313==(x314-x315))<=x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = 1562LLU;
	int8_t x318 = INT8_MIN;
	int64_t x319 = 76344149076152LL;
	int16_t x320 = INT16_MAX;

	t69 = ((x317==(x318-x319))<=x320);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x321 = UINT8_MAX;
	uint16_t x322 = UINT16_MAX;
	int64_t x324 = INT64_MIN;
	int32_t t70 = -1;

	t70 = ((x321==(x322-x323))<=x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = 35127459082816LL;
	int8_t x326 = INT8_MIN;
	volatile int32_t t71 = 915;

	t71 = ((x325==(x326-x327))<=x328);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = UINT32_MAX;
	uint8_t x330 = 49U;
	static int32_t x331 = INT32_MAX;
	volatile int8_t x332 = INT8_MIN;
	static volatile int32_t t72 = -1390;

	t72 = ((x329==(x330-x331))<=x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = UINT64_MAX;
	uint64_t x334 = UINT64_MAX;
	uint64_t x335 = 26530160716LLU;
	static volatile int16_t x336 = -125;
	volatile int32_t t73 = -2;

	t73 = ((x333==(x334-x335))<=x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x337 = INT8_MIN;
	static int16_t x338 = -1;
	static volatile uint8_t x339 = 0U;
	static uint16_t x340 = 35U;
	volatile int32_t t74 = 4271;

	t74 = ((x337==(x338-x339))<=x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x342 = 1U;
	int8_t x344 = INT8_MIN;
	volatile int32_t t75 = 421459;

	t75 = ((x341==(x342-x343))<=x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x345 = INT64_MAX;
	uint8_t x347 = 1U;
	static uint8_t x348 = UINT8_MAX;
	static int32_t t76 = 3003;

	t76 = ((x345==(x346-x347))<=x348);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x353 = 1LLU;
	volatile int32_t t77 = -1;

	t77 = ((x353==(x354-x355))<=x356);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	static int16_t x362 = INT16_MIN;
	int8_t x363 = -1;
	int64_t x364 = -115183536LL;
	int32_t t78 = -1399;

	t78 = ((x361==(x362-x363))<=x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x365 = 1060823313U;
	uint16_t x366 = 249U;
	uint32_t x368 = UINT32_MAX;

	t79 = ((x365==(x366-x367))<=x368);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = 7309U;
	uint32_t x372 = 204030U;

	t80 = ((x369==(x370-x371))<=x372);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = 1055971913;
	static uint16_t x378 = 0U;
	int16_t x379 = 0;
	int32_t x380 = -188768;

	t81 = ((x377==(x378-x379))<=x380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = 201;
	int16_t x382 = INT16_MIN;
	static uint16_t x383 = 15413U;
	int16_t x384 = 0;
	volatile int32_t t82 = 34844588;

	t82 = ((x381==(x382-x383))<=x384);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x385 = UINT32_MAX;
	uint8_t x386 = UINT8_MAX;
	static uint8_t x388 = UINT8_MAX;

	t83 = ((x385==(x386-x387))<=x388);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = -2;
	int8_t x391 = -1;
	int32_t x392 = INT32_MIN;
	volatile int32_t t84 = -416426;

	t84 = ((x389==(x390-x391))<=x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x393 = -1;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 175LLU;
	int32_t x396 = -1;

	t85 = ((x393==(x394-x395))<=x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x397 = INT16_MAX;
	int8_t x399 = -1;
	static volatile int32_t t86 = -984;

	t86 = ((x397==(x398-x399))<=x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = -1;
	volatile int64_t x406 = -11930511547LL;
	int8_t x407 = 1;
	volatile int16_t x408 = INT16_MIN;
	volatile int32_t t87 = 18097;

	t87 = ((x405==(x406-x407))<=x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x410 = 164466705562075LLU;
	static volatile uint32_t x411 = UINT32_MAX;
	int32_t t88 = -72063526;

	t88 = ((x409==(x410-x411))<=x412);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x418 = UINT32_MAX;
	uint8_t x419 = 23U;
	uint8_t x420 = 1U;
	int32_t t89 = 3229;

	t89 = ((x417==(x418-x419))<=x420);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x422 = 8LLU;
	volatile int8_t x423 = INT8_MAX;
	static int8_t x424 = INT8_MAX;
	volatile int32_t t90 = -94;

	t90 = ((x421==(x422-x423))<=x424);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x425 = -8;
	uint64_t x426 = 1858593159103LLU;
	int32_t x427 = INT32_MAX;
	int32_t x428 = -1;
	int32_t t91 = 5047861;

	t91 = ((x425==(x426-x427))<=x428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x430 = INT16_MIN;
	uint16_t x431 = 109U;
	static int16_t x432 = 3365;
	int32_t t92 = 451783494;

	t92 = ((x429==(x430-x431))<=x432);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = 0;
	uint16_t x434 = 4U;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	static int32_t t93 = -5080752;

	t93 = ((x433==(x434-x435))<=x436);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MAX;
	volatile int8_t x443 = INT8_MIN;
	static uint8_t x444 = 18U;
	volatile int32_t t94 = 3;

	t94 = ((x441==(x442-x443))<=x444);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x445 = 4U;
	volatile uint32_t x446 = 0U;
	volatile int64_t x447 = 99544672407040LL;
	static volatile int32_t t95 = 1177039;

	t95 = ((x445==(x446-x447))<=x448);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x453 = -1535LL;
	static int32_t x455 = INT32_MIN;
	static uint32_t x456 = 1021201U;
	int32_t t96 = 118811544;

	t96 = ((x453==(x454-x455))<=x456);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = -1;
	volatile int8_t x459 = INT8_MAX;
	int32_t x460 = INT32_MAX;

	t97 = ((x457==(x458-x459))<=x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x461 = UINT32_MAX;
	int16_t x462 = INT16_MIN;
	uint32_t x464 = UINT32_MAX;
	static int32_t t98 = -10;

	t98 = ((x461==(x462-x463))<=x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x466 = -1;
	static uint32_t x467 = UINT32_MAX;
	static volatile int32_t t99 = 19130321;

	t99 = ((x465==(x466-x467))<=x468);

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

