#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = 389LL;
int8_t x12 = 39;
volatile uint32_t x15 = 3728198U;
uint32_t t3 = 0U;
int8_t x19 = 0;
int32_t x22 = INT32_MIN;
static volatile int64_t x24 = INT64_MIN;
volatile uint8_t x31 = 4U;
int8_t x43 = 4;
int16_t x54 = INT16_MAX;
static int8_t x58 = INT8_MIN;
volatile int8_t x59 = -26;
int64_t t15 = -7302588381LL;
static volatile int32_t t16 = -2044294;
volatile uint32_t x90 = UINT32_MAX;
static int8_t x91 = INT8_MIN;
volatile int64_t t17 = -27874982241LL;
int16_t x95 = INT16_MIN;
uint16_t x99 = 870U;
int32_t x100 = INT32_MIN;
int64_t x101 = -1LL;
int32_t x104 = INT32_MAX;
int16_t x109 = INT16_MIN;
uint64_t t22 = 56453646822477LLU;
uint64_t t23 = 80LLU;
uint8_t x126 = 1U;
int32_t x127 = INT32_MIN;
uint16_t x134 = UINT16_MAX;
volatile uint64_t t25 = 2LLU;
uint8_t x148 = UINT8_MAX;
uint32_t x150 = 25U;
uint8_t x151 = UINT8_MAX;
int64_t x155 = INT64_MIN;
volatile int32_t x156 = 2510507;
int64_t x158 = -26124737262006444LL;
volatile int64_t t31 = 28081LL;
volatile uint8_t x167 = 62U;
int8_t x168 = -1;
volatile int64_t t34 = 9323905548615346LL;
int8_t x188 = -1;
uint32_t x193 = 18U;
static int64_t x196 = -1LL;
int8_t x209 = 12;
static int16_t x215 = INT16_MAX;
uint8_t x218 = UINT8_MAX;
static int8_t x231 = INT8_MAX;
static int16_t x235 = INT16_MIN;
volatile uint8_t x236 = 25U;
uint32_t x237 = 191U;
uint32_t x240 = 42166U;
int8_t x253 = INT8_MIN;
uint16_t x260 = 80U;
static int16_t x263 = -1;
static uint64_t t52 = 8381451310365772LLU;
static int8_t x275 = INT8_MIN;
uint8_t x278 = 57U;
volatile int8_t x280 = -1;
uint64_t x286 = 929LLU;
static uint16_t x289 = UINT16_MAX;
uint16_t x293 = UINT16_MAX;
static int64_t x295 = -1LL;
int64_t x314 = INT64_MIN;
int8_t x325 = 3;
uint32_t x330 = UINT32_MAX;
int16_t x332 = -1;
uint32_t x336 = UINT32_MAX;
int16_t x345 = INT16_MIN;
int32_t x348 = -416666;
int8_t x354 = INT8_MIN;
uint16_t x359 = UINT16_MAX;
volatile uint16_t x363 = UINT16_MAX;
uint32_t t71 = 894112U;
volatile uint8_t x368 = 35U;
int64_t x372 = -13441072097846LL;
volatile int8_t x373 = INT8_MAX;
uint16_t x374 = 2019U;
volatile uint32_t t75 = 3841520U;
uint32_t x396 = 29U;
volatile uint32_t t78 = 7U;
int16_t x408 = INT16_MAX;
int16_t x422 = -3;
volatile uint16_t x423 = 3U;
int16_t x426 = -3;
int16_t x431 = INT16_MIN;
uint32_t x432 = 95U;
volatile uint16_t x445 = 3U;
int32_t x446 = 20680577;
static int8_t x447 = INT8_MIN;
volatile int32_t t87 = 863;
uint8_t x452 = 16U;
static int32_t x457 = INT32_MIN;
uint32_t x459 = UINT32_MAX;
uint64_t x460 = UINT64_MAX;
static uint64_t t90 = 13938LLU;
static uint32_t x462 = 188U;
uint64_t x465 = 5882598793629288459LLU;
int8_t x468 = -1;
volatile int16_t x476 = -3543;
uint8_t x483 = UINT8_MAX;
volatile uint64_t t95 = 849698LLU;
int8_t x491 = INT8_MIN;
static volatile int64_t t96 = -3380LL;
uint32_t x496 = 0U;
int64_t x502 = INT64_MIN;
int64_t x503 = 23534884086LL;
volatile int64_t t98 = 6962239979LL;
volatile int16_t x506 = -1;
int16_t x507 = 15961;


void f0(void) {
	static uint64_t x1 = 184470046577952LLU;
	int16_t x2 = -127;
	uint64_t x3 = UINT64_MAX;
	volatile int64_t x4 = INT64_MAX;
	uint64_t t0 = 62LLU;

	t0 = ((x1-(x2+x3))+x4);

	if (t0 != 9223556506901353887LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 23;
	int64_t x6 = -66697LL;
	uint32_t x8 = 48711904U;
	int64_t t1 = 2LL;

	t1 = ((x5-(x6+x7))+x8);

	if (t1 != 48778235LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = 6LL;
	volatile int64_t x10 = INT64_MIN;
	uint16_t x11 = UINT16_MAX;
	int64_t t2 = -416190338749207LL;

	t2 = ((x9-(x10+x11))+x12);

	if (t2 != 9223372036854710318LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int16_t x14 = 7;
	int16_t x16 = INT16_MIN;

	t3 = ((x13-(x14+x15))+x16);

	if (t3 != 4291239090U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MIN;
	int16_t x18 = -1;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 245251;

	t4 = ((x17-(x18+x19))+x20);

	if (t4 != -32895) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 13993570251949211LLU;
	int64_t x23 = INT64_MAX;
	uint64_t t5 = 684445971169505LLU;

	t5 = ((x21-(x22+x23))+x24);

	if (t5 != 13993572399432860LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint16_t x26 = 15092U;
	int8_t x27 = 1;
	int16_t x28 = -1;
	static int32_t t6 = 91454;

	t6 = ((x25-(x26+x27))+x28);

	if (t6 != 2147468553) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -978;
	static int64_t x30 = 0LL;
	int8_t x32 = 1;
	int64_t t7 = 32832232LL;

	t7 = ((x29-(x30+x31))+x32);

	if (t7 != -981LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = UINT8_MAX;
	volatile uint8_t x38 = 23U;
	int16_t x39 = INT16_MIN;
	int8_t x40 = 11;
	static volatile int32_t t8 = 1;

	t8 = ((x37-(x38+x39))+x40);

	if (t8 != 33011) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 2369452093223190LLU;
	int32_t x42 = -1;
	static volatile int8_t x44 = 1;
	volatile uint64_t t9 = 8LLU;

	t9 = ((x41-(x42+x43))+x44);

	if (t9 != 2369452093223188LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = 1;
	static uint64_t t10 = 22197757536LLU;

	t10 = ((x45-(x46+x47))+x48);

	if (t10 != 9223372036854775682LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x49 = UINT8_MAX;
	int64_t x50 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	uint16_t x52 = 26U;
	uint64_t t11 = 4LLU;

	t11 = ((x49-(x50+x51))+x52);

	if (t11 != 9223372036854776090LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x55 = 2U;
	uint64_t x56 = 1938262488LLU;
	uint64_t t12 = 355620663LLU;

	t12 = ((x53-(x54+x55))+x56);

	if (t12 != 6233164247LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 30U;
	uint16_t x60 = 5U;
	int32_t t13 = -32680088;

	t13 = ((x57-(x58+x59))+x60);

	if (t13 != 189) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = -15;
	uint8_t x74 = 1U;
	int64_t x75 = INT64_MIN;
	int32_t x76 = -1;
	int64_t t14 = 9902LL;

	t14 = ((x73-(x74+x75))+x76);

	if (t14 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = 9382905LL;
	uint32_t x78 = 39U;
	int16_t x79 = -1;
	int8_t x80 = INT8_MIN;

	t15 = ((x77-(x78+x79))+x80);

	if (t15 != 9382739LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = 141;
	static volatile uint16_t x86 = 24173U;
	static uint16_t x87 = 29969U;
	int8_t x88 = INT8_MIN;

	t16 = ((x85-(x86+x87))+x88);

	if (t16 != -54129) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = 4415LL;
	static int16_t x92 = INT16_MAX;

	t17 = ((x89-(x90+x91))+x92);

	if (t17 != -4294929985LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = 187U;
	int64_t x94 = -1LL;
	volatile uint16_t x96 = 2U;
	static volatile int64_t t18 = -13296792364116LL;

	t18 = ((x93-(x94+x95))+x96);

	if (t18 != 32958LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x98 = UINT64_MAX;
	volatile uint64_t t19 = 131336LLU;

	t19 = ((x97-(x98+x99))+x100);

	if (t19 != 18446744071562066971LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x102 = 12U;
	int32_t x103 = -1;
	volatile int64_t t20 = -4250799LL;

	t20 = ((x101-(x102+x103))+x104);

	if (t20 != 2147483635LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x105 = UINT32_MAX;
	uint64_t x106 = 537844909577883LLU;
	int8_t x107 = -5;
	int16_t x108 = -805;
	volatile uint64_t t21 = 30LLU;

	t21 = ((x105-(x106+x107))+x108);

	if (t21 != 18446206233094940228LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x110 = UINT64_MAX;
	volatile uint16_t x111 = UINT16_MAX;
	volatile uint32_t x112 = UINT32_MAX;

	t22 = ((x109-(x110+x111))+x112);

	if (t22 != 4294868993LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = -2;
	int16_t x122 = 21;
	int64_t x123 = -1LL;
	uint64_t x124 = 792554647764342LLU;

	t23 = ((x121-(x122+x123))+x124);

	if (t23 != 792554647764320LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x125 = -64013;
	uint64_t x128 = 446920238663698LLU;
	volatile uint64_t t24 = 26309160460243LLU;

	t24 = ((x125-(x126+x127))+x128);

	if (t24 != 446922386083332LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 11LLU;
	int16_t x135 = -6;
	volatile uint32_t x136 = UINT32_MAX;

	t25 = ((x133-(x134+x135))+x136);

	if (t25 != 4294901777LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x137 = UINT8_MAX;
	int8_t x138 = INT8_MAX;
	uint8_t x139 = UINT8_MAX;
	int64_t x140 = -1LL;
	static int64_t t26 = -12389885LL;

	t26 = ((x137-(x138+x139))+x140);

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x141 = -7329;
	uint32_t x142 = 4511197U;
	static int8_t x143 = -1;
	volatile int16_t x144 = INT16_MIN;
	volatile uint32_t t27 = 1820897U;

	t27 = ((x141-(x142+x143))+x144);

	if (t27 != 4290416003U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x145 = 1115788531U;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	uint32_t t28 = 1548939944U;

	t28 = ((x145-(x146+x147))+x148);

	if (t28 != 1115821682U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x149 = 1U;
	int16_t x152 = INT16_MIN;
	uint32_t t29 = 4791U;

	t29 = ((x149-(x150+x151))+x152);

	if (t29 != 4294934249U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = 6433423734119LL;
	volatile int64_t t30 = 986887700232LL;

	t30 = ((x153-(x154+x155))+x156);

	if (t30 != 9223365603433552068LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = INT32_MIN;
	static int32_t x159 = INT32_MAX;
	volatile int32_t x160 = INT32_MAX;

	t31 = ((x157-(x158+x159))+x160);

	if (t31 != 26124735114522796LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x165 = INT8_MIN;
	int64_t x166 = INT64_MIN;
	int64_t t32 = -407110877205LL;

	t32 = ((x165-(x166+x167))+x168);

	if (t32 != 9223372036854775617LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x173 = UINT32_MAX;
	uint32_t x174 = 7558337U;
	uint8_t x175 = 3U;
	int32_t x176 = 68;
	uint32_t t33 = 69780U;

	t33 = ((x173-(x174+x175))+x176);

	if (t33 != 4287409023U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x177 = 3U;
	static int16_t x178 = 2629;
	int32_t x179 = -225704890;
	static int64_t x180 = INT64_MIN;

	t34 = ((x177-(x178+x179))+x180);

	if (t34 != -9223372036629073544LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = -1;
	static uint32_t x182 = 2009U;
	int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MIN;
	uint32_t t35 = 3U;

	t35 = ((x181-(x182+x183))+x184);

	if (t35 != 2147481511U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x186 = INT64_MAX;
	int8_t x187 = -1;
	volatile int64_t t36 = 184993359LL;

	t36 = ((x185-(x186+x187))+x188);

	if (t36 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x194 = -1;
	int8_t x195 = -18;
	volatile int64_t t37 = -1495512314249560895LL;

	t37 = ((x193-(x194+x195))+x196);

	if (t37 != 36LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x197 = UINT32_MAX;
	int16_t x198 = -1;
	int64_t x199 = 318222268LL;
	int64_t x200 = 5110829290777LL;
	volatile int64_t t38 = -17968626325450472LL;

	t38 = ((x197-(x198+x199))+x200);

	if (t38 != 5114806035805LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x202 = 827818272880LLU;
	int32_t x203 = -1;
	int16_t x204 = INT16_MIN;
	volatile uint64_t t39 = 15575717158LLU;

	t39 = ((x201-(x202+x203))+x204);

	if (t39 != 18446743245891213201LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x205 = UINT8_MAX;
	static volatile int8_t x206 = -1;
	volatile uint8_t x207 = 1U;
	uint32_t x208 = UINT32_MAX;
	uint32_t t40 = 24U;

	t40 = ((x205-(x206+x207))+x208);

	if (t40 != 254U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x210 = -1;
	uint16_t x211 = UINT16_MAX;
	static int16_t x212 = -1;
	volatile int32_t t41 = -168813;

	t41 = ((x209-(x210+x211))+x212);

	if (t41 != -65523) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x213 = 13U;
	static int64_t x214 = INT64_MIN;
	static volatile int32_t x216 = INT32_MIN;
	volatile int64_t t42 = -25085LL;

	t42 = ((x213-(x214+x215))+x216);

	if (t42 != 9223372034707259406LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = INT8_MIN;
	uint16_t x219 = 8U;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t43 = -19;

	t43 = ((x217-(x218+x219))+x220);

	if (t43 != -264) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x221 = -1;
	volatile int64_t x222 = -57LL;
	uint32_t x223 = 199U;
	int32_t x224 = -349030349;
	int64_t t44 = -2622890LL;

	t44 = ((x221-(x222+x223))+x224);

	if (t44 != -349030492LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x229 = INT16_MIN;
	volatile uint16_t x230 = UINT16_MAX;
	uint8_t x232 = 21U;
	int32_t t45 = -1;

	t45 = ((x229-(x230+x231))+x232);

	if (t45 != -98409) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x233 = INT64_MAX;
	uint32_t x234 = UINT32_MAX;
	static volatile int64_t t46 = 535454LL;

	t46 = ((x233-(x234+x235))+x236);

	if (t46 != 9223372032559841305LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x238 = 2134086U;
	static int16_t x239 = -1;
	uint32_t t47 = 194381987U;

	t47 = ((x237-(x238+x239))+x240);

	if (t47 != 4292875568U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = 197426LL;
	static uint32_t x242 = 331U;
	static int64_t x243 = 67116273276311LL;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t48 = 3074395771LLU;

	t48 = ((x241-(x242+x243))+x244);

	if (t48 != 18446676957436472399LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x249 = 8012U;
	uint64_t x250 = UINT64_MAX;
	static uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = 42;
	uint64_t t49 = 34849180LLU;

	t49 = ((x249-(x250+x251))+x252);

	if (t49 != 7800LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x254 = UINT8_MAX;
	volatile uint32_t x255 = 245663U;
	uint16_t x256 = UINT16_MAX;
	uint32_t t50 = 1041516979U;

	t50 = ((x253-(x254+x255))+x256);

	if (t50 != 4294786785U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = INT64_MIN;
	static int32_t x258 = -1;
	int16_t x259 = INT16_MIN;
	int64_t t51 = 20629811014908LL;

	t51 = ((x257-(x258+x259))+x260);

	if (t51 != -9223372036854742959LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x261 = INT16_MIN;
	uint64_t x262 = 204989170LLU;
	int32_t x264 = 9110718;

	t52 = ((x261-(x262+x263))+x264);

	if (t52 != 18446744073513640397LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = -28;
	static volatile int64_t x270 = INT64_MIN;
	volatile int8_t x271 = INT8_MAX;
	int16_t x272 = -1;
	int64_t t53 = 37LL;

	t53 = ((x269-(x270+x271))+x272);

	if (t53 != 9223372036854775652LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = 33766282915244038LLU;
	int64_t x274 = -50LL;
	int8_t x276 = INT8_MAX;
	volatile uint64_t t54 = 256769603LLU;

	t54 = ((x273-(x274+x275))+x276);

	if (t54 != 33766282915244343LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x277 = -1;
	int32_t x279 = 3;
	volatile int32_t t55 = -249163353;

	t55 = ((x277-(x278+x279))+x280);

	if (t55 != -62) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x281 = UINT32_MAX;
	static volatile uint64_t x282 = UINT64_MAX;
	volatile int32_t x283 = INT32_MIN;
	volatile uint16_t x284 = 33U;
	volatile uint64_t t56 = 119460227927LLU;

	t56 = ((x281-(x282+x283))+x284);

	if (t56 != 6442450977LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x285 = 1469U;
	int64_t x287 = INT64_MIN;
	uint32_t x288 = 45047U;
	uint64_t t57 = 5LLU;

	t57 = ((x285-(x286+x287))+x288);

	if (t57 != 9223372036854821395LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x290 = UINT32_MAX;
	static int8_t x291 = -42;
	static volatile int64_t x292 = 1915165LL;
	int64_t t58 = 8122871LL;

	t58 = ((x289-(x290+x291))+x292);

	if (t58 != 1980743LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x294 = 1U;
	static uint16_t x296 = UINT16_MAX;
	int64_t t59 = -1085125441964LL;

	t59 = ((x293-(x294+x295))+x296);

	if (t59 != 131070LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = INT32_MAX;
	volatile int32_t x302 = 34675368;
	uint8_t x303 = UINT8_MAX;
	volatile uint8_t x304 = 1U;
	static int32_t t60 = 21353000;

	t60 = ((x301-(x302+x303))+x304);

	if (t60 != 2112808025) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x313 = 615893996LL;
	int32_t x315 = INT32_MAX;
	int8_t x316 = -1;
	static int64_t t61 = 439LL;

	t61 = ((x313-(x314+x315))+x316);

	if (t61 != 9223372035323186156LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x326 = 1185023U;
	uint16_t x327 = UINT16_MAX;
	uint32_t x328 = 3U;
	uint32_t t62 = 2U;

	t62 = ((x325-(x326+x327))+x328);

	if (t62 != 4293716744U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x329 = INT8_MAX;
	volatile int64_t x331 = INT64_MIN;
	int64_t t63 = -10090137889075LL;

	t63 = ((x329-(x330+x331))+x332);

	if (t63 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x333 = -1LL;
	uint32_t x334 = UINT32_MAX;
	volatile int16_t x335 = INT16_MIN;
	int64_t t64 = -5846800682242468LL;

	t64 = ((x333-(x334+x335))+x336);

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x337 = -338;
	int16_t x338 = INT16_MIN;
	int8_t x339 = -1;
	int8_t x340 = -1;
	volatile int32_t t65 = -304707428;

	t65 = ((x337-(x338+x339))+x340);

	if (t65 != 32430) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x341 = INT16_MAX;
	static int32_t x342 = INT32_MAX;
	int8_t x343 = -1;
	volatile int8_t x344 = INT8_MIN;
	int32_t t66 = -99;

	t66 = ((x341-(x342+x343))+x344);

	if (t66 != -2147451007) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x346 = -333156351;
	uint64_t x347 = 6LLU;
	static volatile uint64_t t67 = 121465169895948LLU;

	t67 = ((x345-(x346+x347))+x348);

	if (t67 != 332706911LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = 77;
	uint16_t x350 = UINT16_MAX;
	uint16_t x351 = 487U;
	uint8_t x352 = 0U;
	int32_t t68 = -196;

	t68 = ((x349-(x350+x351))+x352);

	if (t68 != -65945) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x353 = 390443791U;
	uint64_t x355 = 8LLU;
	volatile int32_t x356 = INT32_MAX;
	uint64_t t69 = 102588023LLU;

	t69 = ((x353-(x354+x355))+x356);

	if (t69 != 2537927558LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	static uint64_t x360 = 33724337407LLU;
	uint64_t t70 = 15949288996830802LLU;

	t70 = ((x357-(x358+x359))+x360);

	if (t70 != 33724271745LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x361 = 2139042046U;
	int32_t x362 = -1;
	static int16_t x364 = -9142;

	t71 = ((x361-(x362+x363))+x364);

	if (t71 != 2138967370U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x365 = -1;
	int16_t x366 = -1;
	uint16_t x367 = 122U;
	volatile int32_t t72 = 15;

	t72 = ((x365-(x366+x367))+x368);

	if (t72 != -87) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x369 = 466509LLU;
	volatile uint64_t x370 = 2971425691LLU;
	uint16_t x371 = 692U;
	uint64_t t73 = 56220LLU;

	t73 = ((x369-(x370+x371))+x372);

	if (t73 != 18446730629666493896LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x375 = 1079482509906839LLU;
	int8_t x376 = 12;
	volatile uint64_t t74 = 28534827205062LLU;

	t74 = ((x373-(x374+x375))+x376);

	if (t74 != 18445664591199642897LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x377 = -64544202;
	uint16_t x378 = 1U;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 82276193U;

	t75 = ((x377-(x378+x379))+x380);

	if (t75 != 17732118U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x381 = 146485763736960813LLU;
	uint8_t x382 = 9U;
	volatile int8_t x383 = 36;
	static uint8_t x384 = 48U;
	volatile uint64_t t76 = 7LLU;

	t76 = ((x381-(x382+x383))+x384);

	if (t76 != 146485763736960816LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = -1;
	uint64_t x391 = 436689521275LLU;
	int8_t x392 = INT8_MIN;
	uint64_t t77 = 13179914012197LLU;

	t77 = ((x389-(x390+x391))+x392);

	if (t77 != 18446743637020030213LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	uint8_t x395 = 2U;

	t78 = ((x393-(x394+x395))+x396);

	if (t78 != 2147516443U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x397 = 321;
	volatile int8_t x398 = -1;
	uint8_t x399 = 13U;
	uint32_t x400 = 4497982U;
	uint32_t t79 = 7738U;

	t79 = ((x397-(x398+x399))+x400);

	if (t79 != 4498291U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x405 = 43U;
	static uint64_t x406 = 266659989687775002LLU;
	int16_t x407 = -1;
	static volatile uint64_t t80 = 3882606LLU;

	t80 = ((x405-(x406+x407))+x408);

	if (t80 != 18180084084021809425LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = UINT8_MAX;
	static uint32_t x411 = UINT32_MAX;
	volatile int64_t x412 = 128868742608334811LL;
	static volatile int64_t t81 = -397287655804LL;

	t81 = ((x409-(x410+x411))+x412);

	if (t81 != 128868746903269085LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x417 = -1;
	volatile uint64_t x418 = UINT64_MAX;
	static int16_t x419 = INT16_MAX;
	static int32_t x420 = -1;
	uint64_t t82 = 284055702745LLU;

	t82 = ((x417-(x418+x419))+x420);

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = 1;
	uint32_t x424 = UINT32_MAX;
	static uint32_t t83 = 1384222912U;

	t83 = ((x421-(x422+x423))+x424);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x425 = INT64_MAX;
	static volatile uint32_t x427 = 140U;
	volatile int16_t x428 = -4;
	int64_t t84 = 89074212LL;

	t84 = ((x425-(x426+x427))+x428);

	if (t84 != 9223372036854775666LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x429 = -1LL;
	int16_t x430 = INT16_MIN;
	volatile int64_t t85 = -97LL;

	t85 = ((x429-(x430+x431))+x432);

	if (t85 != 65630LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x433 = 8LLU;
	static volatile uint16_t x434 = 5U;
	volatile uint16_t x435 = 0U;
	volatile uint8_t x436 = 2U;
	uint64_t t86 = 7908990378984951LLU;

	t86 = ((x433-(x434+x435))+x436);

	if (t86 != 5LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x448 = INT8_MIN;

	t87 = ((x445-(x446+x447))+x448);

	if (t87 != -20680574) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x449 = 2008U;
	uint16_t x450 = 14U;
	static int8_t x451 = -1;
	static uint32_t t88 = 2626U;

	t88 = ((x449-(x450+x451))+x452);

	if (t88 != 2011U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x453 = UINT32_MAX;
	int64_t x454 = INT64_MAX;
	int16_t x455 = -3623;
	volatile int16_t x456 = INT16_MAX;
	static int64_t t89 = 690651486933953533LL;

	t89 = ((x453-(x454+x455))+x456);

	if (t89 != -9223372032559772122LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x458 = UINT32_MAX;

	t90 = ((x457-(x458+x459))+x460);

	if (t90 != 2147483649LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x461 = UINT32_MAX;
	uint8_t x463 = 63U;
	volatile uint8_t x464 = 9U;
	volatile uint32_t t91 = 88U;

	t91 = ((x461-(x462+x463))+x464);

	if (t91 != 4294967053U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x466 = UINT8_MAX;
	static volatile uint16_t x467 = 7669U;
	uint64_t t92 = 62633058605LLU;

	t92 = ((x465-(x466+x467))+x468);

	if (t92 != 5882598793629280534LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x473 = -12;
	volatile int8_t x474 = INT8_MIN;
	int16_t x475 = -1;
	volatile int32_t t93 = -9;

	t93 = ((x473-(x474+x475))+x476);

	if (t93 != -3426) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x481 = -2785953448568LL;
	static uint16_t x482 = UINT16_MAX;
	int8_t x484 = INT8_MIN;
	int64_t t94 = 169LL;

	t94 = ((x481-(x482+x483))+x484);

	if (t94 != -2785953514486LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x485 = 59U;
	volatile int64_t x486 = -1LL;
	uint64_t x487 = UINT64_MAX;
	int64_t x488 = INT64_MAX;

	t95 = ((x485-(x486+x487))+x488);

	if (t95 != 9223372036854775868LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x489 = INT8_MIN;
	static uint8_t x490 = 15U;
	static volatile int64_t x492 = 113339308LL;

	t96 = ((x489-(x490+x491))+x492);

	if (t96 != 113339293LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x493 = 43LLU;
	volatile int64_t x494 = INT64_MIN;
	uint8_t x495 = 10U;
	volatile uint64_t t97 = 126LLU;

	t97 = ((x493-(x494+x495))+x496);

	if (t97 != 9223372036854775841LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x501 = 7U;
	int16_t x504 = 5855;

	t98 = ((x501-(x502+x503))+x504);

	if (t98 != 9223372013319897584LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x505 = -59903542LL;
	int16_t x508 = 31;
	volatile int64_t t99 = -2451311LL;

	t99 = ((x505-(x506+x507))+x508);

	if (t99 != -59919471LL) { NG(); } else { ; }
	
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

