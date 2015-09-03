#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x15 = INT16_MIN;
int8_t x29 = INT8_MIN;
uint32_t x31 = 9U;
static volatile int32_t t4 = -6459043;
uint32_t x37 = 9591359U;
int8_t x42 = INT8_MIN;
volatile int32_t t6 = -74977725;
int32_t x48 = -1;
volatile int32_t x49 = INT32_MIN;
int64_t x55 = INT64_MAX;
volatile int64_t x58 = -309975746942LL;
static uint16_t x60 = 30385U;
volatile int16_t x63 = INT16_MIN;
int64_t x64 = -1LL;
uint8_t x67 = 75U;
volatile int32_t t12 = 3326644;
uint16_t x70 = 1985U;
static int32_t t14 = 1;
static int16_t x90 = INT16_MIN;
uint64_t x104 = UINT64_MAX;
uint32_t x105 = 1536824U;
int32_t x121 = 22;
int8_t x123 = INT8_MIN;
uint32_t x145 = UINT32_MAX;
static uint32_t x147 = UINT32_MAX;
volatile int64_t x149 = 4512LL;
static int8_t x156 = INT8_MIN;
int32_t t32 = -1;
uint8_t x163 = 22U;
volatile uint64_t x179 = UINT64_MAX;
int16_t x180 = INT16_MIN;
int64_t x184 = -891335LL;
int64_t x199 = 19760999549LL;
uint32_t x200 = 733295257U;
uint32_t x202 = UINT32_MAX;
uint16_t x215 = 86U;
volatile int32_t t45 = -9;
int32_t t46 = -33743664;
volatile int8_t x230 = -1;
int32_t x235 = INT32_MIN;
uint8_t x241 = 16U;
int8_t x243 = 0;
volatile int32_t t50 = 38252;
uint16_t x251 = UINT16_MAX;
int32_t t51 = 3;
volatile uint16_t x260 = 10100U;
int32_t t52 = 16729081;
volatile uint64_t x267 = UINT64_MAX;
int64_t x272 = 254378LL;
uint8_t x273 = UINT8_MAX;
int8_t x277 = -1;
int32_t x282 = -1;
int32_t x283 = -1;
uint16_t x284 = 10U;
volatile uint16_t x287 = 23834U;
int16_t x288 = INT16_MIN;
int64_t x290 = INT64_MIN;
static int32_t x302 = 1;
int32_t t62 = 28;
int64_t x308 = -1LL;
volatile int8_t x317 = INT8_MAX;
uint64_t x321 = UINT64_MAX;
uint8_t x324 = 7U;
int8_t x340 = INT8_MIN;
static volatile int32_t t66 = 2;
uint64_t x343 = 4899622221LLU;
int32_t t67 = 402468;
int16_t x358 = 29;
uint64_t x359 = 7LLU;
static volatile int16_t x361 = -368;
static int64_t x368 = INT64_MAX;
static int64_t x370 = INT64_MIN;
uint8_t x393 = 1U;
int8_t x398 = 7;
volatile uint8_t x399 = 75U;
int32_t x403 = INT32_MIN;
uint64_t x409 = 37066783642763117LLU;
int16_t x412 = -714;
volatile int32_t t78 = 565;
int16_t x426 = INT16_MAX;
static int8_t x428 = INT8_MIN;
int64_t x431 = -1LL;
int32_t t85 = 9418;
volatile int8_t x456 = 1;
volatile uint16_t x459 = 49U;
int64_t x462 = INT64_MIN;
static uint8_t x463 = 32U;
volatile int32_t t88 = 2348;
volatile int16_t x465 = -1;
int16_t x466 = INT16_MIN;
volatile uint16_t x473 = 27215U;
int32_t t90 = -1496;
int8_t x477 = INT8_MAX;
volatile int32_t x484 = 17815;
volatile int32_t t93 = -110103;
uint64_t x492 = 859LLU;
int32_t t95 = -121020500;
volatile int64_t x500 = 19502078000LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint16_t x2 = UINT16_MAX;
	volatile int8_t x3 = -1;
	volatile uint32_t x4 = 3122874U;
	volatile int32_t t0 = -11188;

	t0 = ((x1-(x2+x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 14U;
	uint64_t x10 = UINT64_MAX;
	static int32_t x11 = -1;
	int16_t x12 = INT16_MAX;
	static int32_t t1 = -3;

	t1 = ((x9-(x10+x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = -1LL;
	volatile int8_t x14 = 1;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t2 = 2;

	t2 = ((x13-(x14+x15))<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = 0;
	uint8_t x26 = 7U;
	uint32_t x27 = 37857093U;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t3 = 0;

	t3 = ((x25-(x26+x27))<=x28);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x30 = INT16_MIN;
	int32_t x32 = -25041304;

	t4 = ((x29-(x30+x31))<=x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x38 = INT16_MAX;
	volatile int16_t x39 = INT16_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t5 = -616;

	t5 = ((x37-(x38+x39))<=x40);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = 230LLU;
	uint32_t x43 = 37119320U;
	uint8_t x44 = 5U;

	t6 = ((x41-(x42+x43))<=x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int32_t x46 = -1;
	int64_t x47 = -1LL;
	volatile int32_t t7 = -48230538;

	t7 = ((x45-(x46+x47))<=x48);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x50 = INT8_MAX;
	static int64_t x51 = -142693926LL;
	uint32_t x52 = 1U;
	volatile int32_t t8 = 572816026;

	t8 = ((x49-(x50+x51))<=x52);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 0U;
	int16_t x54 = INT16_MIN;
	static uint8_t x56 = 0U;
	volatile int32_t t9 = 2758753;

	t9 = ((x53-(x54+x55))<=x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = 3807362564617LL;
	volatile int32_t x59 = INT32_MIN;
	int32_t t10 = -1;

	t10 = ((x57-(x58+x59))<=x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = UINT16_MAX;
	uint8_t x62 = 0U;
	volatile int32_t t11 = 19914176;

	t11 = ((x61-(x62+x63))<=x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 0U;
	uint8_t x66 = UINT8_MAX;
	uint64_t x68 = 338527755LLU;

	t12 = ((x65-(x66+x67))<=x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 16344065LLU;
	int32_t x71 = INT32_MIN;
	static volatile int64_t x72 = INT64_MAX;
	volatile int32_t t13 = 302;

	t13 = ((x69-(x70+x71))<=x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = INT8_MIN;
	static int8_t x74 = INT8_MIN;
	uint8_t x75 = 2U;
	int8_t x76 = INT8_MIN;

	t14 = ((x73-(x74+x75))<=x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x77 = -1LL;
	volatile int16_t x78 = INT16_MAX;
	uint64_t x79 = 0LLU;
	int32_t x80 = -1;
	volatile int32_t t15 = -16602786;

	t15 = ((x77-(x78+x79))<=x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x81 = 2;
	int8_t x82 = -1;
	int16_t x83 = INT16_MAX;
	int8_t x84 = 4;
	volatile int32_t t16 = -16199;

	t16 = ((x81-(x82+x83))<=x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x89 = -136;
	int8_t x91 = INT8_MIN;
	volatile int64_t x92 = 1519211548006890310LL;
	volatile int32_t t17 = -206724;

	t17 = ((x89-(x90+x91))<=x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = -953;
	uint16_t x95 = 745U;
	static int8_t x96 = INT8_MAX;
	int32_t t18 = 0;

	t18 = ((x93-(x94+x95))<=x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -1LL;
	static uint32_t x98 = 86502U;
	int32_t x99 = 2;
	int64_t x100 = 1493864944890584809LL;
	static int32_t t19 = -3;

	t19 = ((x97-(x98+x99))<=x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = 42;
	uint64_t x103 = 1086540659712144827LLU;
	volatile int32_t t20 = -119418580;

	t20 = ((x101-(x102+x103))<=x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x106 = 0U;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = INT16_MAX;
	int32_t t21 = 735137;

	t21 = ((x105-(x106+x107))<=x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = 26220659543497256LL;
	uint8_t x114 = UINT8_MAX;
	static int16_t x115 = -1;
	int64_t x116 = INT64_MIN;
	static volatile int32_t t22 = 21670656;

	t22 = ((x113-(x114+x115))<=x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MAX;
	int16_t x119 = -1;
	int64_t x120 = INT64_MIN;
	volatile int32_t t23 = 3510960;

	t23 = ((x117-(x118+x119))<=x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x122 = -1;
	int32_t x124 = -1;
	volatile int32_t t24 = 352207614;

	t24 = ((x121-(x122+x123))<=x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = UINT32_MAX;
	uint16_t x127 = 466U;
	int64_t x128 = -1LL;
	volatile int32_t t25 = -43672653;

	t25 = ((x125-(x126+x127))<=x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = 11943698287299LL;
	int16_t x130 = INT16_MIN;
	static int8_t x131 = 8;
	int32_t x132 = -521711;
	static volatile int32_t t26 = -763091;

	t26 = ((x129-(x130+x131))<=x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 2U;
	int32_t x134 = INT32_MIN;
	int64_t x135 = -453826248334LL;
	int16_t x136 = INT16_MIN;
	int32_t t27 = 126112;

	t27 = ((x133-(x134+x135))<=x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = -10505200825657432LL;
	int16_t x138 = 3;
	int32_t x139 = -867;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t28 = -1789592;

	t28 = ((x137-(x138+x139))<=x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x141 = INT8_MAX;
	int64_t x142 = 2106166546930LL;
	volatile uint8_t x143 = 38U;
	uint8_t x144 = 4U;
	static int32_t t29 = 255352;

	t29 = ((x141-(x142+x143))<=x144);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = INT32_MAX;
	volatile int64_t x148 = 868669613937558LL;
	volatile int32_t t30 = -45;

	t30 = ((x145-(x146+x147))<=x148);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x150 = -1LL;
	static int32_t x151 = INT32_MIN;
	int32_t x152 = -13;
	static volatile int32_t t31 = 112026;

	t31 = ((x149-(x150+x151))<=x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x153 = UINT32_MAX;
	uint32_t x154 = 11948U;
	int16_t x155 = INT16_MIN;

	t32 = ((x153-(x154+x155))<=x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x157 = 34U;
	int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MIN;
	volatile int32_t t33 = 741109;

	t33 = ((x157-(x158+x159))<=x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = 65;
	static uint64_t x164 = 17962995856LLU;
	volatile int32_t t34 = -46441;

	t34 = ((x161-(x162+x163))<=x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MAX;
	volatile uint32_t x166 = 0U;
	int8_t x167 = 55;
	static int16_t x168 = 464;
	static volatile int32_t t35 = -147;

	t35 = ((x165-(x166+x167))<=x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = 186;
	int32_t x170 = -8096;
	volatile uint8_t x171 = UINT8_MAX;
	int8_t x172 = -1;
	volatile int32_t t36 = 1430600;

	t36 = ((x169-(x170+x171))<=x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MIN;
	volatile int32_t x174 = -256128;
	uint64_t x175 = 1300235888LLU;
	int32_t x176 = INT32_MIN;
	static int32_t t37 = 97381039;

	t37 = ((x173-(x174+x175))<=x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x177 = 10;
	int64_t x178 = -230234085906LL;
	volatile int32_t t38 = -97963193;

	t38 = ((x177-(x178+x179))<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 82227890U;
	volatile int64_t x182 = -1LL;
	volatile int16_t x183 = INT16_MIN;
	volatile int32_t t39 = 1581921;

	t39 = ((x181-(x182+x183))<=x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	static int32_t x191 = 88;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t40 = -23871042;

	t40 = ((x189-(x190+x191))<=x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x197 = UINT8_MAX;
	static volatile int16_t x198 = 0;
	volatile int32_t t41 = 1;

	t41 = ((x197-(x198+x199))<=x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MIN;
	volatile uint16_t x203 = 26U;
	uint16_t x204 = 0U;
	volatile int32_t t42 = 1;

	t42 = ((x201-(x202+x203))<=x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x205 = 25U;
	int16_t x206 = INT16_MAX;
	static int64_t x207 = INT64_MIN;
	int32_t x208 = 656694908;
	static int32_t t43 = -3407590;

	t43 = ((x205-(x206+x207))<=x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = 1879;
	volatile uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MAX;
	uint64_t x212 = 609483914694LLU;
	int32_t t44 = -2075057;

	t44 = ((x209-(x210+x211))<=x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = -1608;
	int8_t x214 = 56;
	volatile uint64_t x216 = 309601840909358167LLU;

	t45 = ((x213-(x214+x215))<=x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x217 = UINT32_MAX;
	uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 6U;
	uint32_t x220 = 19043U;

	t46 = ((x217-(x218+x219))<=x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	int64_t x227 = INT64_MAX;
	int64_t x228 = INT64_MIN;
	volatile int32_t t47 = 0;

	t47 = ((x225-(x226+x227))<=x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = 3978;
	uint8_t x231 = 0U;
	int16_t x232 = -1;
	int32_t t48 = 2152;

	t48 = ((x229-(x230+x231))<=x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x233 = INT8_MIN;
	int64_t x234 = 11679624970926LL;
	int32_t x236 = INT32_MIN;
	int32_t t49 = 58;

	t49 = ((x233-(x234+x235))<=x236);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x242 = -129493;
	int16_t x244 = INT16_MIN;

	t50 = ((x241-(x242+x243))<=x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = -215;
	static volatile uint32_t x250 = 1824U;
	int64_t x252 = INT64_MIN;

	t51 = ((x249-(x250+x251))<=x252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x257 = -1;
	volatile int32_t x258 = INT32_MIN;
	int8_t x259 = 1;

	t52 = ((x257-(x258+x259))<=x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = 343108471888LL;
	int64_t x262 = -1LL;
	int64_t x263 = -1LL;
	uint16_t x264 = 50U;
	int32_t t53 = -996;

	t53 = ((x261-(x262+x263))<=x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MIN;
	int8_t x268 = -7;
	static volatile int32_t t54 = -324;

	t54 = ((x265-(x266+x267))<=x268);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x269 = -1LL;
	int16_t x270 = -100;
	uint32_t x271 = 10064837U;
	int32_t t55 = -7120;

	t55 = ((x269-(x270+x271))<=x272);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x274 = -1;
	volatile uint32_t x275 = 596010U;
	int8_t x276 = INT8_MIN;
	int32_t t56 = 4039;

	t56 = ((x273-(x274+x275))<=x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x278 = -973525LL;
	int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t57 = 62649;

	t57 = ((x277-(x278+x279))<=x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = INT32_MIN;
	volatile int32_t t58 = 0;

	t58 = ((x281-(x282+x283))<=x284);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x285 = UINT32_MAX;
	volatile int16_t x286 = -1;
	volatile int32_t t59 = -1236294;

	t59 = ((x285-(x286+x287))<=x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x289 = 1U;
	static uint32_t x291 = 289671U;
	int8_t x292 = INT8_MAX;
	int32_t t60 = -1414285;

	t60 = ((x289-(x290+x291))<=x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x293 = -8366457LL;
	uint64_t x294 = 78127LLU;
	volatile uint16_t x295 = 5785U;
	static int64_t x296 = INT64_MIN;
	volatile int32_t t61 = 596273808;

	t61 = ((x293-(x294+x295))<=x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x301 = 13U;
	static int64_t x303 = -1LL;
	volatile uint8_t x304 = 1U;

	t62 = ((x301-(x302+x303))<=x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x305 = -21;
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = UINT8_MAX;
	int32_t t63 = -5;

	t63 = ((x305-(x306+x307))<=x308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x318 = -1;
	uint16_t x319 = 55U;
	int16_t x320 = -1;
	int32_t t64 = 1935;

	t64 = ((x317-(x318+x319))<=x320);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int32_t t65 = 508622391;

	t65 = ((x321-(x322+x323))<=x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x337 = INT8_MIN;
	uint8_t x338 = 14U;
	int64_t x339 = INT64_MIN;

	t66 = ((x337-(x338+x339))<=x340);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = -5LL;
	uint64_t x344 = UINT64_MAX;

	t67 = ((x341-(x342+x343))<=x344);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = 1492;
	int32_t x350 = -1353115;
	volatile int16_t x351 = INT16_MAX;
	int16_t x352 = -1;
	static int32_t t68 = 7620489;

	t68 = ((x349-(x350+x351))<=x352);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x357 = 36U;
	volatile int16_t x360 = INT16_MIN;
	int32_t t69 = -252;

	t69 = ((x357-(x358+x359))<=x360);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x362 = 2U;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = INT64_MIN;
	static int32_t t70 = 36715;

	t70 = ((x361-(x362+x363))<=x364);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x365 = INT16_MAX;
	int32_t x366 = -1;
	int64_t x367 = -196044516LL;
	static volatile int32_t t71 = -27556079;

	t71 = ((x365-(x366+x367))<=x368);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x369 = 24U;
	uint32_t x371 = 599647618U;
	volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t72 = 159946;

	t72 = ((x369-(x370+x371))<=x372);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x373 = -1;
	int16_t x374 = INT16_MIN;
	static int16_t x375 = 2901;
	uint8_t x376 = UINT8_MAX;
	int32_t t73 = 0;

	t73 = ((x373-(x374+x375))<=x376);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x377 = 4U;
	static int8_t x378 = INT8_MIN;
	volatile int64_t x379 = 781262LL;
	int16_t x380 = -1;
	volatile int32_t t74 = -195;

	t74 = ((x377-(x378+x379))<=x380);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x394 = -1;
	int8_t x395 = 0;
	int16_t x396 = INT16_MIN;
	int32_t t75 = 12915961;

	t75 = ((x393-(x394+x395))<=x396);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x397 = INT32_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t76 = -74830;

	t76 = ((x397-(x398+x399))<=x400);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x401 = INT64_MIN;
	volatile uint16_t x402 = 11U;
	int8_t x404 = INT8_MAX;
	int32_t t77 = 2616;

	t77 = ((x401-(x402+x403))<=x404);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x410 = -1LL;
	uint32_t x411 = 27U;

	t78 = ((x409-(x410+x411))<=x412);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x414 = 1278LLU;
	int16_t x415 = -1;
	uint16_t x416 = 77U;
	static int32_t t79 = 14;

	t79 = ((x413-(x414+x415))<=x416);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x417 = INT64_MIN;
	uint16_t x418 = 10397U;
	static volatile int64_t x419 = -687549LL;
	int16_t x420 = INT16_MAX;
	int32_t t80 = 26;

	t80 = ((x417-(x418+x419))<=x420);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x425 = UINT16_MAX;
	uint64_t x427 = 10795050294611479LLU;
	static volatile int32_t t81 = 268676;

	t81 = ((x425-(x426+x427))<=x428);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x429 = INT8_MAX;
	volatile int64_t x430 = INT64_MAX;
	static volatile int16_t x432 = INT16_MIN;
	volatile int32_t t82 = 64257;

	t82 = ((x429-(x430+x431))<=x432);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x433 = 2483898929069LL;
	int8_t x434 = INT8_MAX;
	int64_t x435 = -485588748LL;
	int32_t x436 = -1;
	int32_t t83 = 5707;

	t83 = ((x433-(x434+x435))<=x436);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x437 = INT64_MAX;
	volatile uint64_t x438 = 101949LLU;
	uint64_t x439 = UINT64_MAX;
	static int32_t x440 = -1;
	volatile int32_t t84 = -8;

	t84 = ((x437-(x438+x439))<=x440);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x441 = INT8_MIN;
	volatile int64_t x442 = INT64_MAX;
	int32_t x443 = INT32_MIN;
	int8_t x444 = -9;

	t85 = ((x441-(x442+x443))<=x444);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x453 = -1;
	int8_t x454 = 12;
	volatile uint8_t x455 = UINT8_MAX;
	volatile int32_t t86 = -69218080;

	t86 = ((x453-(x454+x455))<=x456);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x457 = INT8_MIN;
	static uint8_t x458 = 4U;
	volatile uint8_t x460 = 0U;
	volatile int32_t t87 = -8;

	t87 = ((x457-(x458+x459))<=x460);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x461 = INT8_MIN;
	int16_t x464 = INT16_MIN;

	t88 = ((x461-(x462+x463))<=x464);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x467 = -1;
	volatile int32_t x468 = INT32_MAX;
	volatile int32_t t89 = 0;

	t89 = ((x465-(x466+x467))<=x468);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x474 = 9363U;
	int16_t x475 = INT16_MIN;
	int8_t x476 = -1;

	t90 = ((x473-(x474+x475))<=x476);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x478 = INT64_MIN;
	static int64_t x479 = INT64_MAX;
	int16_t x480 = 37;
	volatile int32_t t91 = -299833;

	t91 = ((x477-(x478+x479))<=x480);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x481 = -1;
	static int64_t x482 = -1LL;
	int32_t x483 = INT32_MIN;
	static volatile int32_t t92 = 3;

	t92 = ((x481-(x482+x483))<=x484);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x485 = 49U;
	static int8_t x486 = INT8_MIN;
	volatile int64_t x487 = INT64_MAX;
	int32_t x488 = INT32_MIN;

	t93 = ((x485-(x486+x487))<=x488);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x489 = 82712195U;
	int16_t x490 = -1;
	int64_t x491 = 1LL;
	int32_t t94 = -1480;

	t94 = ((x489-(x490+x491))<=x492);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x493 = 2427U;
	int16_t x494 = 0;
	int64_t x495 = -1LL;
	int16_t x496 = INT16_MIN;

	t95 = ((x493-(x494+x495))<=x496);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x497 = INT64_MIN;
	uint64_t x498 = 1381449531966847LLU;
	int8_t x499 = -1;
	int32_t t96 = 151708;

	t96 = ((x497-(x498+x499))<=x500);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x501 = 0U;
	volatile uint16_t x502 = UINT16_MAX;
	static uint32_t x503 = UINT32_MAX;
	uint32_t x504 = 10007437U;
	volatile int32_t t97 = 15;

	t97 = ((x501-(x502+x503))<=x504);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x505 = 152273U;
	int16_t x506 = INT16_MAX;
	uint64_t x507 = UINT64_MAX;
	uint32_t x508 = 869024U;
	volatile int32_t t98 = -63;

	t98 = ((x505-(x506+x507))<=x508);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x509 = 335810108;
	uint8_t x510 = 112U;
	int8_t x511 = INT8_MIN;
	uint32_t x512 = 13892810U;
	int32_t t99 = -591;

	t99 = ((x509-(x510+x511))<=x512);

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

