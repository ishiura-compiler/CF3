#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = 0;
int64_t x14 = -1LL;
static volatile int64_t x15 = 59LL;
int64_t x24 = INT64_MIN;
int64_t x25 = 0LL;
static uint16_t x37 = UINT16_MAX;
int16_t x43 = INT16_MIN;
uint16_t x44 = UINT16_MAX;
uint32_t x45 = UINT32_MAX;
int16_t x46 = -23;
uint16_t x49 = UINT16_MAX;
static int32_t x51 = -3288003;
int8_t x60 = INT8_MIN;
uint8_t x62 = 14U;
static int8_t x63 = INT8_MIN;
int16_t x64 = -571;
volatile int32_t t12 = -82559315;
volatile int32_t t13 = -5473;
static int64_t x81 = INT64_MIN;
volatile int8_t x96 = -58;
int32_t x106 = -1;
int64_t x107 = INT64_MAX;
int32_t t18 = -15;
volatile uint16_t x115 = 8641U;
uint16_t x130 = 123U;
static volatile int16_t x144 = INT16_MAX;
int32_t x145 = INT32_MIN;
uint32_t x146 = UINT32_MAX;
uint32_t x147 = 25U;
uint64_t x148 = 10860503757LLU;
static volatile int32_t t25 = -4697936;
static uint64_t x166 = 44305802853LLU;
volatile int16_t x167 = -1;
int32_t x168 = 1247909;
uint16_t x173 = UINT16_MAX;
static int16_t x175 = -1;
int16_t x178 = -1;
volatile int64_t x191 = 3156380LL;
int8_t x194 = -1;
uint8_t x205 = 33U;
int64_t x208 = -1LL;
static int16_t x209 = INT16_MIN;
uint64_t x210 = 657878922431424823LLU;
static int16_t x211 = INT16_MIN;
static int64_t x217 = 45LL;
volatile int16_t x229 = -14332;
volatile int8_t x230 = 59;
volatile int8_t x237 = -1;
int32_t x239 = INT32_MAX;
int16_t x257 = -30;
int16_t x260 = INT16_MIN;
volatile uint32_t x265 = 496U;
int32_t x268 = -895006;
static volatile uint64_t x281 = 1339690265239397712LLU;
uint32_t x287 = 11922U;
static int32_t t51 = 911357;
volatile int64_t x293 = 1LL;
uint64_t x296 = 102054LLU;
volatile int32_t t53 = 222651827;
uint64_t x304 = 2201LLU;
volatile int8_t x306 = 48;
int8_t x308 = -3;
uint32_t x309 = UINT32_MAX;
static uint64_t x316 = 72203LLU;
uint64_t x318 = UINT64_MAX;
int32_t t60 = 23102365;
int8_t x335 = 0;
int8_t x337 = INT8_MIN;
int32_t x361 = -211162;
static int32_t x368 = -249;
uint64_t x369 = UINT64_MAX;
volatile int32_t t69 = 1;
int16_t x377 = INT16_MIN;
int32_t x378 = -1;
static volatile int32_t x388 = INT32_MIN;
static int32_t t72 = -4938;
int32_t x390 = -1;
volatile uint16_t x402 = 18U;
int16_t x404 = INT16_MIN;
uint64_t x425 = 7207559961071394LLU;
static int16_t x428 = -1;
static volatile int32_t t81 = 37344302;
int32_t t82 = 29;
uint16_t x433 = 7U;
static int32_t t83 = 1004;
uint64_t x441 = 11856LLU;
int64_t x464 = INT64_MIN;
int16_t x467 = INT16_MIN;
static int8_t x468 = 0;
int32_t x469 = 14376;
int8_t x470 = INT8_MIN;
volatile int64_t x472 = INT64_MIN;
static int16_t x480 = INT16_MAX;
int64_t x484 = -1674752695LL;
int32_t t91 = -980487;
uint64_t x486 = 6280036LLU;
int16_t x491 = -1;
static int64_t x503 = -4889401764LL;
int8_t x505 = -1;
int64_t x507 = INT64_MIN;
uint64_t x508 = 975682060993LLU;
int32_t t97 = -277535138;
int8_t x515 = INT8_MIN;
int16_t x519 = 57;
int32_t t99 = -912;


void f0(void) {
	int32_t x1 = 8;
	int64_t x2 = -1LL;
	int64_t x3 = 43085969217LL;
	volatile int64_t x4 = -5954710LL;
	int32_t t0 = 167;

	t0 = (((x1*x2)|x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x16 = 3893U;
	int32_t t1 = 0;

	t1 = (((x13*x14)|x15)==x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = -4;
	volatile int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t2 = -348;

	t2 = (((x17*x18)|x19)==x20);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = INT8_MIN;
	uint32_t x22 = 265U;
	int64_t x23 = INT64_MIN;
	volatile int32_t t3 = -8;

	t3 = (((x21*x22)|x23)==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = INT64_MAX;
	int32_t x27 = INT32_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t4 = 4307;

	t4 = (((x25*x26)|x27)==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MAX;
	static int16_t x30 = 0;
	uint16_t x31 = 9U;
	static uint32_t x32 = 0U;
	int32_t t5 = 15816;

	t5 = (((x29*x30)|x31)==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	volatile int8_t x34 = INT8_MIN;
	static volatile int32_t x35 = INT32_MIN;
	uint32_t x36 = 11U;
	volatile int32_t t6 = 12675894;

	t6 = (((x33*x34)|x35)==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x38 = -1LL;
	int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MAX;
	int32_t t7 = -26;

	t7 = (((x37*x38)|x39)==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = 0;
	static int8_t x42 = INT8_MAX;
	static int32_t t8 = 1420243;

	t8 = (((x41*x42)|x43)==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t9 = 8037;

	t9 = (((x45*x46)|x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x50 = -1;
	int64_t x52 = 56864112LL;
	volatile int32_t t10 = -59587105;

	t10 = (((x49*x50)|x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x57 = -1;
	uint32_t x58 = 161U;
	int64_t x59 = INT64_MIN;
	int32_t t11 = 3928742;

	t11 = (((x57*x58)|x59)==x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -1;

	t12 = (((x61*x62)|x63)==x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 228923939U;
	uint64_t x66 = 0LLU;
	volatile int16_t x67 = -1;
	uint32_t x68 = 1047U;

	t13 = (((x65*x66)|x67)==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x73 = 53;
	volatile int32_t x74 = 26180;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 82469350391932185LLU;
	static volatile int32_t t14 = 193;

	t14 = (((x73*x74)|x75)==x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x82 = 110838669LLU;
	int16_t x83 = INT16_MAX;
	static int8_t x84 = INT8_MIN;
	volatile int32_t t15 = -186792771;

	t15 = (((x81*x82)|x83)==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = 49U;
	static volatile int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	static int32_t t16 = 1;

	t16 = (((x93*x94)|x95)==x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = 1;
	static volatile int16_t x102 = INT16_MIN;
	uint64_t x103 = 768LLU;
	static int64_t x104 = -10353773787269472LL;
	volatile int32_t t17 = 54186;

	t17 = (((x101*x102)|x103)==x104);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x105 = UINT8_MAX;
	uint8_t x108 = 0U;

	t18 = (((x105*x106)|x107)==x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = INT16_MAX;
	static int16_t x114 = 1;
	static int16_t x116 = -1;
	int32_t t19 = -2631;

	t19 = (((x113*x114)|x115)==x116);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = 108391855;
	int16_t x118 = -2;
	int64_t x119 = -120175LL;
	uint32_t x120 = UINT32_MAX;
	static int32_t t20 = 169208;

	t20 = (((x117*x118)|x119)==x120);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x125 = UINT16_MAX;
	static int8_t x126 = INT8_MAX;
	int8_t x127 = INT8_MIN;
	int64_t x128 = 4012901608641711LL;
	int32_t t21 = 30388905;

	t21 = (((x125*x126)|x127)==x128);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x129 = 8723137698676402350LLU;
	int16_t x131 = INT16_MIN;
	static volatile int16_t x132 = INT16_MIN;
	volatile int32_t t22 = 519;

	t22 = (((x129*x130)|x131)==x132);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = 868;
	static int16_t x138 = INT16_MAX;
	static int8_t x139 = -4;
	int8_t x140 = INT8_MIN;
	volatile int32_t t23 = -41327;

	t23 = (((x137*x138)|x139)==x140);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x141 = 318LLU;
	int64_t x142 = -1007381734502545LL;
	int16_t x143 = INT16_MAX;
	int32_t t24 = -132;

	t24 = (((x141*x142)|x143)==x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {


	t25 = (((x145*x146)|x147)==x148);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x153 = 74150U;
	volatile int16_t x154 = INT16_MAX;
	uint8_t x155 = UINT8_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t26 = 4563;

	t26 = (((x153*x154)|x155)==x156);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x157 = 3022965508LLU;
	volatile int8_t x158 = INT8_MIN;
	static int32_t x159 = INT32_MAX;
	int32_t x160 = -380523;
	static volatile int32_t t27 = 1609429;

	t27 = (((x157*x158)|x159)==x160);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x165 = 45;
	int32_t t28 = -116666432;

	t28 = (((x165*x166)|x167)==x168);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = -397LL;
	int32_t x170 = INT32_MAX;
	int8_t x171 = INT8_MIN;
	int64_t x172 = 2764816772218946LL;
	int32_t t29 = 10281620;

	t29 = (((x169*x170)|x171)==x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x174 = -111;
	uint8_t x176 = 123U;
	volatile int32_t t30 = -378924;

	t30 = (((x173*x174)|x175)==x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x177 = UINT64_MAX;
	volatile int64_t x179 = INT64_MIN;
	int64_t x180 = -29444763901479376LL;
	int32_t t31 = -3988;

	t31 = (((x177*x178)|x179)==x180);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x181 = 0U;
	int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MIN;
	int8_t x184 = -1;
	int32_t t32 = -156553500;

	t32 = (((x181*x182)|x183)==x184);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x189 = INT16_MAX;
	int8_t x190 = -37;
	volatile int64_t x192 = INT64_MIN;
	int32_t t33 = 12482442;

	t33 = (((x189*x190)|x191)==x192);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x193 = INT8_MAX;
	int16_t x195 = INT16_MIN;
	volatile int16_t x196 = INT16_MIN;
	int32_t t34 = -57366;

	t34 = (((x193*x194)|x195)==x196);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x201 = -11;
	static int8_t x202 = INT8_MIN;
	int8_t x203 = -14;
	static int64_t x204 = INT64_MIN;
	volatile int32_t t35 = 1;

	t35 = (((x201*x202)|x203)==x204);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x206 = UINT64_MAX;
	int8_t x207 = -1;
	static volatile int32_t t36 = 184386016;

	t36 = (((x205*x206)|x207)==x208);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x212 = 2U;
	int32_t t37 = 1011;

	t37 = (((x209*x210)|x211)==x212);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x213 = 328;
	uint16_t x214 = 31U;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = -1;
	int32_t t38 = 863;

	t38 = (((x213*x214)|x215)==x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MAX;
	volatile uint16_t x220 = 11645U;
	static int32_t t39 = 4231;

	t39 = (((x217*x218)|x219)==x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = -1;
	volatile uint16_t x222 = 0U;
	uint8_t x223 = 0U;
	int64_t x224 = -28747LL;
	volatile int32_t t40 = 14668263;

	t40 = (((x221*x222)|x223)==x224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x231 = 14042639769934629LLU;
	int16_t x232 = INT16_MIN;
	int32_t t41 = 17466170;

	t41 = (((x229*x230)|x231)==x232);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x238 = -13300;
	int8_t x240 = INT8_MIN;
	int32_t t42 = -930;

	t42 = (((x237*x238)|x239)==x240);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x241 = INT8_MIN;
	uint16_t x242 = 124U;
	static int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MIN;
	int32_t t43 = 6586140;

	t43 = (((x241*x242)|x243)==x244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x245 = 9U;
	int16_t x246 = 389;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	volatile int32_t t44 = -3754;

	t44 = (((x245*x246)|x247)==x248);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x249 = 83788;
	uint32_t x250 = 830328812U;
	int8_t x251 = -1;
	static int64_t x252 = -1LL;
	volatile int32_t t45 = 4506646;

	t45 = (((x249*x250)|x251)==x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x258 = INT16_MAX;
	int64_t x259 = -2032205LL;
	volatile int32_t t46 = 87641504;

	t46 = (((x257*x258)|x259)==x260);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x266 = 2U;
	int64_t x267 = INT64_MIN;
	int32_t t47 = -11083;

	t47 = (((x265*x266)|x267)==x268);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x273 = -48170576794560LL;
	uint32_t x274 = 3895U;
	volatile int64_t x275 = -219LL;
	int32_t x276 = 3;
	volatile int32_t t48 = 0;

	t48 = (((x273*x274)|x275)==x276);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x277 = -1;
	int8_t x278 = INT8_MIN;
	static uint8_t x279 = 7U;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int32_t t49 = 5394;

	t49 = (((x277*x278)|x279)==x280);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x282 = 5;
	static int8_t x283 = 57;
	volatile int16_t x284 = -1;
	volatile int32_t t50 = -149257;

	t50 = (((x281*x282)|x283)==x284);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x285 = INT32_MAX;
	static volatile int32_t x286 = -1;
	uint8_t x288 = 39U;

	t51 = (((x285*x286)|x287)==x288);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x289 = UINT8_MAX;
	int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;
	static int8_t x292 = INT8_MAX;
	static int32_t t52 = 75217;

	t52 = (((x289*x290)|x291)==x292);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x294 = 1056403573013769LL;
	int16_t x295 = -1;

	t53 = (((x293*x294)|x295)==x296);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x297 = 8285U;
	volatile int64_t x298 = -23036881647LL;
	volatile int64_t x299 = -2629928817302165LL;
	int64_t x300 = INT64_MIN;
	int32_t t54 = 7681097;

	t54 = (((x297*x298)|x299)==x300);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x301 = 2765068U;
	volatile int16_t x302 = INT16_MIN;
	volatile int8_t x303 = -1;
	static volatile int32_t t55 = -283;

	t55 = (((x301*x302)|x303)==x304);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = 701113LL;
	static uint16_t x307 = UINT16_MAX;
	volatile int32_t t56 = -75;

	t56 = (((x305*x306)|x307)==x308);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x310 = 1477727950LLU;
	int64_t x311 = INT64_MIN;
	uint32_t x312 = 423821U;
	volatile int32_t t57 = 106883175;

	t57 = (((x309*x310)|x311)==x312);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = INT16_MAX;
	volatile uint8_t x314 = UINT8_MAX;
	int16_t x315 = -1068;
	volatile int32_t t58 = 11;

	t58 = (((x313*x314)|x315)==x316);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x317 = -1;
	uint8_t x319 = 1U;
	static int8_t x320 = INT8_MAX;
	volatile int32_t t59 = 9;

	t59 = (((x317*x318)|x319)==x320);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x321 = 4061351105788LLU;
	uint8_t x322 = UINT8_MAX;
	int16_t x323 = -1;
	uint32_t x324 = 1045294U;

	t60 = (((x321*x322)|x323)==x324);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = INT16_MIN;
	static int8_t x326 = -1;
	static int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MAX;
	int32_t t61 = -22877;

	t61 = (((x325*x326)|x327)==x328);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x329 = 10040395;
	volatile int8_t x330 = -1;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = 3331609196LLU;
	volatile int32_t t62 = 9;

	t62 = (((x329*x330)|x331)==x332);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x333 = -103851LL;
	uint8_t x334 = UINT8_MAX;
	int16_t x336 = INT16_MIN;
	int32_t t63 = -63344207;

	t63 = (((x333*x334)|x335)==x336);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x338 = 743744385550050LL;
	static uint8_t x339 = 94U;
	int8_t x340 = INT8_MAX;
	volatile int32_t t64 = -1;

	t64 = (((x337*x338)|x339)==x340);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x341 = -1;
	volatile int32_t x342 = -29592;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = 16035LLU;
	volatile int32_t t65 = -261029;

	t65 = (((x341*x342)|x343)==x344);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x349 = 668501629779801LLU;
	int16_t x350 = INT16_MIN;
	uint16_t x351 = 6U;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t66 = 42217;

	t66 = (((x349*x350)|x351)==x352);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x362 = -1;
	int32_t x363 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	int32_t t67 = -6289;

	t67 = (((x361*x362)|x363)==x364);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x365 = 100U;
	uint32_t x366 = UINT32_MAX;
	volatile int8_t x367 = -2;
	int32_t t68 = -94395;

	t68 = (((x365*x366)|x367)==x368);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x370 = 197965479076999309LL;
	volatile int8_t x371 = -1;
	volatile int64_t x372 = INT64_MAX;

	t69 = (((x369*x370)|x371)==x372);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x373 = -1;
	int16_t x374 = -1;
	volatile int16_t x375 = -4;
	int8_t x376 = -1;
	int32_t t70 = 0;

	t70 = (((x373*x374)|x375)==x376);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x379 = UINT32_MAX;
	uint16_t x380 = 10567U;
	static volatile int32_t t71 = 1;

	t71 = (((x377*x378)|x379)==x380);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x385 = UINT8_MAX;
	uint64_t x386 = 2694311942858LLU;
	volatile int32_t x387 = -1;

	t72 = (((x385*x386)|x387)==x388);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x389 = -1;
	uint8_t x391 = 116U;
	static int8_t x392 = INT8_MIN;
	int32_t t73 = 429962553;

	t73 = (((x389*x390)|x391)==x392);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x393 = -24;
	static uint32_t x394 = 50U;
	int64_t x395 = INT64_MIN;
	int16_t x396 = -1;
	int32_t t74 = -183;

	t74 = (((x393*x394)|x395)==x396);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x397 = INT16_MAX;
	uint8_t x398 = 6U;
	int32_t x399 = -520;
	int16_t x400 = -1;
	static int32_t t75 = -3;

	t75 = (((x397*x398)|x399)==x400);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x401 = UINT32_MAX;
	int8_t x403 = INT8_MIN;
	static volatile int32_t t76 = -154396522;

	t76 = (((x401*x402)|x403)==x404);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x409 = -1;
	uint8_t x410 = UINT8_MAX;
	int16_t x411 = -1;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t77 = -3;

	t77 = (((x409*x410)|x411)==x412);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x413 = 66704975909469342LLU;
	uint16_t x414 = 13050U;
	volatile uint64_t x415 = 461842942LLU;
	int32_t x416 = 1;
	int32_t t78 = -87326886;

	t78 = (((x413*x414)|x415)==x416);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x417 = INT64_MIN;
	uint32_t x418 = 0U;
	int8_t x419 = INT8_MAX;
	static uint16_t x420 = 906U;
	static volatile int32_t t79 = 154088;

	t79 = (((x417*x418)|x419)==x420);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x421 = INT8_MIN;
	uint32_t x422 = UINT32_MAX;
	volatile uint64_t x423 = 3271369545LLU;
	static int64_t x424 = -1LL;
	volatile int32_t t80 = 100;

	t80 = (((x421*x422)|x423)==x424);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x426 = INT64_MIN;
	volatile uint16_t x427 = UINT16_MAX;

	t81 = (((x425*x426)|x427)==x428);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x429 = INT32_MAX;
	static volatile uint32_t x430 = 154456U;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = UINT16_MAX;

	t82 = (((x429*x430)|x431)==x432);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x434 = INT16_MAX;
	static int64_t x435 = INT64_MAX;
	volatile int16_t x436 = INT16_MAX;

	t83 = (((x433*x434)|x435)==x436);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x437 = UINT32_MAX;
	static int16_t x438 = INT16_MAX;
	volatile uint64_t x439 = 2LLU;
	int8_t x440 = INT8_MIN;
	int32_t t84 = 223357;

	t84 = (((x437*x438)|x439)==x440);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x442 = -1;
	static volatile int64_t x443 = 3LL;
	volatile int8_t x444 = -46;
	volatile int32_t t85 = 29816840;

	t85 = (((x441*x442)|x443)==x444);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x457 = 507496LLU;
	int64_t x458 = INT64_MIN;
	int32_t x459 = INT32_MIN;
	volatile uint16_t x460 = 12181U;
	int32_t t86 = -63;

	t86 = (((x457*x458)|x459)==x460);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x461 = UINT16_MAX;
	static int32_t x462 = -1;
	int16_t x463 = INT16_MIN;
	int32_t t87 = 2893154;

	t87 = (((x461*x462)|x463)==x464);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x465 = UINT64_MAX;
	int16_t x466 = INT16_MIN;
	volatile int32_t t88 = -8;

	t88 = (((x465*x466)|x467)==x468);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x471 = INT8_MIN;
	volatile int32_t t89 = -1085955;

	t89 = (((x469*x470)|x471)==x472);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x477 = 0U;
	static uint32_t x478 = 27662U;
	int32_t x479 = -1;
	int32_t t90 = -9;

	t90 = (((x477*x478)|x479)==x480);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x481 = INT8_MAX;
	volatile uint32_t x482 = UINT32_MAX;
	uint8_t x483 = 1U;

	t91 = (((x481*x482)|x483)==x484);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x485 = UINT8_MAX;
	uint64_t x487 = 749721921380181181LLU;
	int8_t x488 = -1;
	static volatile int32_t t92 = 37476393;

	t92 = (((x485*x486)|x487)==x488);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x489 = INT32_MAX;
	uint32_t x490 = 7757U;
	int8_t x492 = INT8_MIN;
	int32_t t93 = -170;

	t93 = (((x489*x490)|x491)==x492);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x497 = 15341688720876LLU;
	int8_t x498 = 2;
	int32_t x499 = INT32_MIN;
	int32_t x500 = INT32_MIN;
	volatile int32_t t94 = 22;

	t94 = (((x497*x498)|x499)==x500);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x501 = 15U;
	volatile uint32_t x502 = 11458283U;
	uint16_t x504 = UINT16_MAX;
	int32_t t95 = 1854066;

	t95 = (((x501*x502)|x503)==x504);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x506 = -1;
	int32_t t96 = -247031651;

	t96 = (((x505*x506)|x507)==x508);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x509 = INT16_MAX;
	int16_t x510 = -1;
	uint16_t x511 = 151U;
	uint8_t x512 = UINT8_MAX;

	t97 = (((x509*x510)|x511)==x512);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x513 = INT64_MIN;
	uint8_t x514 = 0U;
	static int64_t x516 = INT64_MIN;
	volatile int32_t t98 = 56905802;

	t98 = (((x513*x514)|x515)==x516);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x517 = 15U;
	int64_t x518 = -1LL;
	int8_t x520 = 6;

	t99 = (((x517*x518)|x519)==x520);

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

