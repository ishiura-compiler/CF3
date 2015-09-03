#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = UINT32_MAX;
int8_t x14 = -1;
volatile int64_t t4 = 129009823406000014LL;
uint16_t x30 = 11U;
uint64_t x32 = UINT64_MAX;
uint64_t t5 = 4275018198LLU;
volatile int32_t x64 = INT32_MIN;
int64_t x65 = -1LL;
static int16_t x78 = 191;
static uint64_t x82 = 47072625201532LLU;
static int16_t x88 = INT16_MIN;
int32_t t16 = -14920;
int8_t x102 = INT8_MIN;
uint32_t x103 = 72494U;
int16_t x112 = INT16_MAX;
static volatile int8_t x115 = INT8_MIN;
uint64_t x116 = UINT64_MAX;
static int16_t x117 = 212;
static volatile int64_t t20 = -10172216552071LL;
uint16_t x122 = 0U;
volatile int64_t t21 = 841139251505LL;
int32_t x130 = -158518532;
static uint16_t x131 = 3U;
static volatile int32_t x134 = 28767146;
volatile uint64_t t24 = 16517347287LLU;
volatile int8_t x143 = INT8_MIN;
int8_t x144 = INT8_MIN;
volatile uint16_t x149 = 1057U;
volatile int8_t x151 = -1;
uint64_t x152 = 7358126LLU;
uint64_t t27 = 8310242LLU;
uint16_t x170 = 213U;
uint32_t x172 = UINT32_MAX;
int8_t x174 = INT8_MIN;
int8_t x176 = 1;
volatile uint16_t x177 = 1U;
int32_t x179 = -163;
int64_t x195 = -1019LL;
int16_t x207 = -1;
volatile uint16_t x214 = UINT16_MAX;
int8_t x221 = INT8_MIN;
static int16_t x224 = -1;
static volatile uint32_t t35 = 469U;
static int16_t x253 = INT16_MIN;
volatile uint16_t x254 = UINT16_MAX;
static int64_t t40 = 240544464662968823LL;
uint32_t x262 = UINT32_MAX;
volatile int64_t t41 = -3834LL;
int32_t x265 = -1;
uint64_t x284 = 2265275546826483904LLU;
volatile uint64_t t44 = 388LLU;
int16_t x290 = -37;
uint64_t x313 = 277637824209259367LLU;
int32_t x314 = -1;
int8_t x317 = 6;
int64_t x326 = -1LL;
int32_t x332 = 232898061;
volatile uint16_t x349 = 7674U;
int16_t x353 = INT16_MIN;
int64_t x360 = -55310798881940058LL;
uint64_t x361 = 1LLU;
uint64_t t60 = 3899LLU;
uint8_t x379 = 63U;
int8_t x386 = INT8_MIN;
int32_t x392 = INT32_MAX;
uint8_t x412 = UINT8_MAX;
volatile uint32_t x413 = 129348991U;
int32_t x414 = -16150641;
uint8_t x430 = 1U;
int64_t x440 = INT64_MIN;
uint64_t x450 = 244929732886941232LLU;
int64_t x467 = -1LL;
int64_t x475 = INT64_MAX;
static uint32_t x491 = UINT32_MAX;
volatile uint64_t t79 = 590682993LLU;
volatile int64_t x502 = 2241301LL;
static uint32_t x503 = 147U;
uint16_t x515 = 19160U;
uint64_t t82 = 34220782888384LLU;
volatile int64_t x519 = 529118LL;
int8_t x532 = 9;
uint64_t x537 = 3267720592938LLU;
int16_t x540 = 11;
uint64_t t88 = 11084401LLU;
static volatile int16_t x548 = -1;
int32_t x555 = -1;
uint32_t x556 = UINT32_MAX;
uint16_t x560 = 934U;
volatile int8_t x570 = INT8_MIN;
int64_t x572 = 30020221539004272LL;
int16_t x576 = INT16_MAX;
int32_t x586 = -68;
uint64_t x589 = 422240763LLU;


void f0(void) {
	volatile int16_t x5 = INT16_MIN;
	uint32_t x6 = 5U;
	int8_t x7 = INT8_MAX;
	int64_t x8 = INT64_MIN;
	volatile int64_t t0 = 5063LL;

	t0 = (((x5*x6)-x7)/x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x15 = INT8_MIN;
	volatile uint16_t x16 = UINT16_MAX;
	volatile uint32_t t1 = 29U;

	t1 = (((x13*x14)-x15)/x16);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x17 = UINT16_MAX;
	int64_t x18 = -896891901299LL;
	static int64_t x19 = 491802506451583935LL;
	volatile uint64_t x20 = 871188897476863948LLU;
	uint64_t t2 = 783763LLU;

	t2 = (((x17*x18)-x19)/x20);

	if (t2 != 20LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = INT8_MAX;
	uint16_t x22 = 8035U;
	static uint8_t x23 = 7U;
	volatile int64_t x24 = INT64_MAX;
	volatile int64_t t3 = -2574799399LL;

	t3 = (((x21*x22)-x23)/x24);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -2;
	int16_t x26 = INT16_MAX;
	static uint8_t x27 = UINT8_MAX;
	int64_t x28 = -1322259LL;

	t4 = (((x25*x26)-x27)/x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x29 = 3U;
	uint16_t x31 = UINT16_MAX;

	t5 = (((x29*x30)-x31)/x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x45 = -1LL;
	int32_t x46 = 216;
	int8_t x47 = -1;
	volatile int32_t x48 = -1687574;
	int64_t t6 = -1124LL;

	t6 = (((x45*x46)-x47)/x48);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x50 = 1U;
	uint64_t x51 = 943LLU;
	uint64_t x52 = 1047541670147329LLU;
	volatile uint64_t t7 = 14550133889403LLU;

	t7 = (((x49*x50)-x51)/x52);

	if (t7 != 17609LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x53 = 1227785693LLU;
	volatile int32_t x54 = 457750914;
	uint8_t x55 = 1U;
	int32_t x56 = INT32_MIN;
	static uint64_t t8 = 0LLU;

	t8 = (((x53*x54)-x55)/x56);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x57 = UINT16_MAX;
	static int16_t x58 = 1136;
	int32_t x59 = INT32_MAX;
	volatile int8_t x60 = -15;
	volatile int32_t t9 = 213;

	t9 = (((x57*x58)-x59)/x60);

	if (t9 != 138202392) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x61 = 611554431LLU;
	int32_t x62 = 154253535;
	static volatile int8_t x63 = -1;
	static volatile uint64_t t10 = 375871LLU;

	t10 = (((x61*x62)-x63)/x64);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x66 = -3;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 1942047713503LLU;
	static volatile uint64_t t11 = 219458965140LLU;

	t11 = (((x65*x66)-x67)/x68);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = 197578683LLU;
	static volatile uint64_t x70 = UINT64_MAX;
	static volatile int64_t x71 = INT64_MAX;
	static volatile uint32_t x72 = 3U;
	uint64_t t12 = 947579977268LLU;

	t12 = (((x69*x70)-x71)/x72);

	if (t12 != 3074457345552399042LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = INT16_MIN;
	static int32_t t13 = -403440;

	t13 = (((x77*x78)-x79)/x80);

	if (t13 != 191) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 7U;
	int64_t x83 = -3381490837LL;
	int16_t x84 = -1;
	uint64_t t14 = 3LLU;

	t14 = (((x81*x82)-x83)/x84);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x85 = -12;
	int64_t x86 = -1613578834195772LL;
	static int8_t x87 = INT8_MIN;
	static volatile int64_t t15 = 7864LL;

	t15 = (((x85*x86)-x87)/x88);

	if (t15 != -590910217600LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = -1;
	uint8_t x91 = UINT8_MAX;
	static int32_t x92 = INT32_MIN;

	t16 = (((x89*x90)-x91)/x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x101 = INT8_MAX;
	int8_t x104 = 7;
	uint32_t t17 = 61057764U;

	t17 = (((x101*x102)-x103)/x104);

	if (t17 != 613554078U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x109 = -74603223426829LL;
	uint64_t x110 = 52LLU;
	uint32_t x111 = 43U;
	static volatile uint64_t t18 = 29002LLU;

	t18 = (((x109*x110)-x111)/x112);

	if (t18 != 562848741297383LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x113 = 0U;
	volatile int32_t x114 = INT32_MIN;
	uint64_t t19 = 161162303670453330LLU;

	t19 = (((x113*x114)-x115)/x116);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x118 = 59U;
	volatile int64_t x119 = -1LL;
	int64_t x120 = INT64_MIN;

	t20 = (((x117*x118)-x119)/x120);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x121 = INT16_MAX;
	int8_t x123 = -1;
	int64_t x124 = 29751292LL;

	t21 = (((x121*x122)-x123)/x124);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x125 = INT64_MIN;
	uint64_t x126 = 4424608263779LLU;
	volatile uint16_t x127 = UINT16_MAX;
	uint64_t x128 = 1660186504LLU;
	static volatile uint64_t t22 = 4181713265807LLU;

	t22 = (((x125*x126)-x127)/x128);

	if (t22 != 5555624030LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = -5063542LL;
	static volatile int32_t x132 = INT32_MAX;
	volatile int64_t t23 = 942518439LL;

	t23 = (((x129*x130)-x131)/x132);

	if (t23 != 373770LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x133 = UINT64_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	static int64_t x136 = -1808755065750888293LL;

	t24 = (((x133*x134)-x135)/x136);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = 144800;
	int32_t x142 = -1;
	int32_t t25 = 11;

	t25 = (((x141*x142)-x143)/x144);

	if (t25 != 1130) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x150 = -25158LL;
	volatile uint64_t t26 = 463898645199830LLU;

	t26 = (((x149*x150)-x151)/x152);

	if (t26 != 2506989425525LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x165 = 37898413322306LLU;
	uint16_t x166 = 6317U;
	uint64_t x167 = UINT64_MAX;
	static uint16_t x168 = 3U;

	t27 = (((x165*x166)-x167)/x168);

	if (t27 != 79801425652335667LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint16_t x171 = UINT16_MAX;
	volatile uint32_t t28 = 372387830U;

	t28 = (((x169*x170)-x171)/x172);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x173 = 1U;
	int16_t x175 = -237;
	volatile uint32_t t29 = 38287670U;

	t29 = (((x173*x174)-x175)/x176);

	if (t29 != 109U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x178 = 213597311351139LLU;
	int8_t x180 = -1;
	volatile uint64_t t30 = 1LLU;

	t30 = (((x177*x178)-x179)/x180);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x181 = INT8_MAX;
	int16_t x182 = -1;
	volatile int16_t x183 = -1;
	volatile uint16_t x184 = UINT16_MAX;
	static int32_t t31 = 3260;

	t31 = (((x181*x182)-x183)/x184);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x193 = 11;
	static uint32_t x194 = UINT32_MAX;
	static volatile int64_t x196 = 2116934656918LL;
	volatile int64_t t32 = -933017LL;

	t32 = (((x193*x194)-x195)/x196);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x205 = 61;
	uint16_t x206 = 231U;
	int64_t x208 = INT64_MAX;
	volatile int64_t t33 = 19445129395686LL;

	t33 = (((x205*x206)-x207)/x208);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x213 = -3;
	int64_t x215 = -1LL;
	int8_t x216 = INT8_MAX;
	int64_t t34 = -1627396LL;

	t34 = (((x213*x214)-x215)/x216);

	if (t34 != -1548LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = -1;

	t35 = (((x221*x222)-x223)/x224);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x229 = 771LL;
	volatile int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	int16_t x232 = -190;
	int64_t t36 = -49LL;

	t36 = (((x229*x230)-x231)/x232);

	if (t36 != 132796LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x233 = 836441U;
	int8_t x234 = -1;
	volatile int8_t x235 = INT8_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile uint32_t t37 = 5748542U;

	t37 = (((x233*x234)-x235)/x236);

	if (t37 != 16839728U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	int64_t x251 = 113794586325LL;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int64_t t38 = 5050593238LL;

	t38 = (((x249*x250)-x251)/x252);

	if (t38 != -1736393LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x255 = INT32_MIN;
	int32_t x256 = -1;
	int32_t t39 = 1281648;

	t39 = (((x253*x254)-x255)/x256);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x257 = -1147LL;
	int16_t x258 = -1;
	static int64_t x259 = -7587826157528LL;
	static int64_t x260 = INT64_MIN;

	t40 = (((x257*x258)-x259)/x260);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x261 = -1;
	uint32_t x263 = 131U;
	int64_t x264 = INT64_MIN;

	t41 = (((x261*x262)-x263)/x264);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x266 = INT64_MAX;
	int8_t x267 = INT8_MIN;
	volatile int16_t x268 = INT16_MIN;
	static int64_t t42 = -68022585096LL;

	t42 = (((x265*x266)-x267)/x268);

	if (t42 != 281474976710655LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x281 = -1;
	uint32_t x282 = UINT32_MAX;
	static uint16_t x283 = 13945U;
	volatile uint64_t t43 = 119923933845407579LLU;

	t43 = (((x281*x282)-x283)/x284);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x285 = UINT64_MAX;
	static int32_t x286 = -1;
	int64_t x287 = -1LL;
	int16_t x288 = 26;

	t44 = (((x285*x286)-x287)/x288);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x289 = -1LL;
	uint16_t x291 = 2123U;
	static int32_t x292 = -1;
	volatile int64_t t45 = 4301009484993LL;

	t45 = (((x289*x290)-x291)/x292);

	if (t45 != 2086LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x293 = INT8_MAX;
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = INT16_MAX;
	static int32_t x296 = INT32_MAX;
	int32_t t46 = -27;

	t46 = (((x293*x294)-x295)/x296);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x301 = 3U;
	static uint8_t x302 = 51U;
	int8_t x303 = -1;
	int16_t x304 = 1548;
	volatile uint32_t t47 = 1261U;

	t47 = (((x301*x302)-x303)/x304);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x309 = UINT32_MAX;
	uint16_t x310 = 1U;
	static volatile int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;
	int64_t t48 = -8035LL;

	t48 = (((x309*x310)-x311)/x312);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x315 = 116U;
	int8_t x316 = -1;
	uint64_t t49 = 4LLU;

	t49 = (((x313*x314)-x315)/x316);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x318 = 0U;
	volatile int8_t x319 = -1;
	int16_t x320 = INT16_MAX;
	volatile uint32_t t50 = 29255390U;

	t50 = (((x317*x318)-x319)/x320);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x325 = -1;
	int64_t x327 = -7469081LL;
	int32_t x328 = INT32_MIN;
	volatile int64_t t51 = -221196387564027141LL;

	t51 = (((x325*x326)-x327)/x328);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x329 = -1;
	static int32_t x330 = -1;
	int16_t x331 = -1;
	static volatile int32_t t52 = -10;

	t52 = (((x329*x330)-x331)/x332);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x341 = INT8_MAX;
	int16_t x342 = 0;
	static int16_t x343 = 3349;
	uint64_t x344 = 80183343271533682LLU;
	volatile uint64_t t53 = 2940477257041356LLU;

	t53 = (((x341*x342)-x343)/x344);

	if (t53 != 230LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x345 = 4590785U;
	int64_t x346 = 43748LL;
	int8_t x347 = -1;
	static int16_t x348 = -1;
	int64_t t54 = -1LL;

	t54 = (((x345*x346)-x347)/x348);

	if (t54 != -200837662181LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x350 = 0U;
	int16_t x351 = INT16_MAX;
	uint64_t x352 = 413364912938358981LLU;
	volatile uint64_t t55 = 118231649LLU;

	t55 = (((x349*x350)-x351)/x352);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x354 = INT16_MIN;
	static uint8_t x355 = 76U;
	static int16_t x356 = INT16_MAX;
	int32_t t56 = 32555;

	t56 = (((x353*x354)-x355)/x356);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x357 = -1;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = 2954U;
	volatile int64_t t57 = -16407273LL;

	t57 = (((x357*x358)-x359)/x360);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x362 = 62U;
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MIN;
	uint64_t t58 = 2LLU;

	t58 = (((x361*x362)-x363)/x364);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x365 = -1;
	int16_t x366 = 12;
	int8_t x367 = INT8_MIN;
	static uint16_t x368 = UINT16_MAX;
	int32_t t59 = 416861;

	t59 = (((x365*x366)-x367)/x368);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x373 = 57751892LLU;
	int16_t x374 = INT16_MAX;
	int32_t x375 = -1;
	int8_t x376 = 1;

	t60 = (((x373*x374)-x375)/x376);

	if (t60 != 1892356245165LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x377 = INT8_MIN;
	static uint16_t x378 = 698U;
	int8_t x380 = -1;
	static volatile int32_t t61 = 127;

	t61 = (((x377*x378)-x379)/x380);

	if (t61 != 89407) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x381 = 55U;
	uint64_t x382 = 5923807761689440371LLU;
	uint64_t x383 = 431LLU;
	static volatile uint32_t x384 = 27020351U;
	uint64_t t62 = 567905929191219LLU;

	t62 = (((x381*x382)-x383)/x384);

	if (t62 != 452058436985LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x385 = 12U;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = 10;
	uint64_t t63 = 220548278794LLU;

	t63 = (((x385*x386)-x387)/x388);

	if (t63 != 1844674407370955008LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x390 = -1;
	int8_t x391 = -1;
	uint32_t t64 = 12U;

	t64 = (((x389*x390)-x391)/x392);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x393 = INT64_MAX;
	volatile uint64_t x394 = 93556175852LLU;
	uint32_t x395 = 7338359U;
	int32_t x396 = -3106;
	volatile uint64_t t65 = 54397697250LLU;

	t65 = (((x393*x394)-x395)/x396);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x397 = -1;
	static int32_t x398 = -390218709;
	uint32_t x399 = 413751368U;
	volatile int16_t x400 = INT16_MAX;
	uint32_t t66 = 474U;

	t66 = (((x397*x398)-x399)/x400);

	if (t66 != 130357U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x401 = -1;
	uint16_t x402 = 8U;
	int32_t x403 = INT32_MIN;
	int8_t x404 = 41;
	int32_t t67 = -724;

	t67 = (((x401*x402)-x403)/x404);

	if (t67 != 52377649) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x409 = 29922U;
	volatile int64_t x410 = -1LL;
	uint32_t x411 = 27250U;
	static volatile int64_t t68 = 2471LL;

	t68 = (((x409*x410)-x411)/x412);

	if (t68 != -224LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x415 = UINT16_MAX;
	static uint64_t x416 = 317656682709951LLU;
	volatile uint64_t t69 = 53LLU;

	t69 = (((x413*x414)-x415)/x416);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x417 = 11069U;
	uint32_t x418 = 1U;
	volatile int64_t x419 = -49892227738781506LL;
	int8_t x420 = INT8_MIN;
	int64_t t70 = 11724684461291LL;

	t70 = (((x417*x418)-x419)/x420);

	if (t70 != -389783029209316LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x425 = -1;
	static int8_t x426 = INT8_MAX;
	int32_t x427 = INT32_MIN;
	volatile int16_t x428 = -1;
	volatile int32_t t71 = -1;

	t71 = (((x425*x426)-x427)/x428);

	if (t71 != -2147483521) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x429 = 5U;
	int8_t x431 = -1;
	volatile uint16_t x432 = 25728U;
	int32_t t72 = 15;

	t72 = (((x429*x430)-x431)/x432);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x437 = 1U;
	int64_t x438 = -2629609644762682249LL;
	int32_t x439 = INT32_MIN;
	int64_t t73 = -2155LL;

	t73 = (((x437*x438)-x439)/x440);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x449 = INT8_MIN;
	int16_t x451 = -3203;
	int8_t x452 = INT8_MIN;
	uint64_t t74 = 3415617199280359340LLU;

	t74 = (((x449*x450)-x451)/x452);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x465 = -1;
	int16_t x466 = 1740;
	int64_t x468 = INT64_MIN;
	int64_t t75 = 0LL;

	t75 = (((x465*x466)-x467)/x468);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x473 = -1;
	int32_t x474 = -1;
	int8_t x476 = INT8_MIN;
	static volatile int64_t t76 = 1323011024060490LL;

	t76 = (((x473*x474)-x475)/x476);

	if (t76 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x481 = 12623;
	int16_t x482 = INT16_MIN;
	int32_t x483 = -1;
	int8_t x484 = INT8_MIN;
	int32_t t77 = -108849194;

	t77 = (((x481*x482)-x483)/x484);

	if (t77 != 3231487) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x489 = -1;
	uint16_t x490 = 8995U;
	uint8_t x492 = 3U;
	volatile uint32_t t78 = 210936U;

	t78 = (((x489*x490)-x491)/x492);

	if (t78 != 1431652767U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x497 = 41LLU;
	static int16_t x498 = 2470;
	int8_t x499 = INT8_MAX;
	static int64_t x500 = 2206060763562039LL;

	t79 = (((x497*x498)-x499)/x500);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x501 = 414329LLU;
	int32_t x504 = INT32_MAX;
	volatile uint64_t t80 = 1152593760308LLU;

	t80 = (((x501*x502)-x503)/x504);

	if (t80 != 432LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x509 = 95587U;
	volatile int16_t x510 = 0;
	int32_t x511 = INT32_MIN;
	int32_t x512 = 56;
	uint32_t t81 = 9629502U;

	t81 = (((x509*x510)-x511)/x512);

	if (t81 != 38347922U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x513 = 19U;
	uint64_t x514 = 23LLU;
	volatile int8_t x516 = INT8_MIN;

	t82 = (((x513*x514)-x515)/x516);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x517 = -1;
	uint32_t x518 = 8958445U;
	uint8_t x520 = UINT8_MAX;
	static volatile int64_t t83 = -14LL;

	t83 = (((x517*x518)-x519)/x520);

	if (t83 != 16805802LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x521 = UINT8_MAX;
	volatile uint32_t x522 = UINT32_MAX;
	int16_t x523 = 7709;
	int8_t x524 = INT8_MIN;
	uint32_t t84 = 17455183U;

	t84 = (((x521*x522)-x523)/x524);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x525 = 78421783;
	static uint64_t x526 = 125438214002LLU;
	static int16_t x527 = -1068;
	int32_t x528 = -1;
	static volatile uint64_t t85 = 131783624694900174LLU;

	t85 = (((x525*x526)-x527)/x528);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x529 = -1;
	volatile int8_t x530 = INT8_MIN;
	volatile uint32_t x531 = UINT32_MAX;
	static volatile uint32_t t86 = 22740113U;

	t86 = (((x529*x530)-x531)/x532);

	if (t86 != 14U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x533 = -1;
	static uint64_t x534 = 346731177976956LLU;
	int8_t x535 = -1;
	uint8_t x536 = 81U;
	static volatile uint64_t t87 = 8002LLU;

	t87 = (((x533*x534)-x535)/x536);

	if (t87 != 227733300525081168LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x538 = INT32_MIN;
	int64_t x539 = INT64_MIN;

	t88 = (((x537*x538)-x539)/x540);

	if (t88 != 146325498115010187LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MIN;
	int64_t x547 = -16716900LL;
	int64_t t89 = 598LL;

	t89 = (((x545*x546)-x547)/x548);

	if (t89 != -20911204LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x549 = INT16_MAX;
	volatile int16_t x550 = INT16_MAX;
	int8_t x551 = INT8_MAX;
	int32_t x552 = -1353;
	int32_t t90 = -98;

	t90 = (((x549*x550)-x551)/x552);

	if (t90 != -793552) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x553 = -1LL;
	uint64_t x554 = 29LLU;
	static volatile uint64_t t91 = 7385625LLU;

	t91 = (((x553*x554)-x555)/x556);

	if (t91 != 4294967296LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x557 = UINT16_MAX;
	uint8_t x558 = 15U;
	volatile int8_t x559 = INT8_MIN;
	int32_t t92 = 14737252;

	t92 = (((x557*x558)-x559)/x560);

	if (t92 != 1052) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x561 = -17;
	int16_t x562 = -1;
	int16_t x563 = INT16_MIN;
	uint32_t x564 = 12816253U;
	uint32_t t93 = 7U;

	t93 = (((x561*x562)-x563)/x564);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x569 = UINT8_MAX;
	int16_t x571 = -1;
	int64_t t94 = 62522035357615553LL;

	t94 = (((x569*x570)-x571)/x572);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x573 = -1;
	static uint32_t x574 = 366980U;
	int32_t x575 = INT32_MAX;
	volatile uint32_t t95 = 384880U;

	t95 = (((x573*x574)-x575)/x576);

	if (t95 != 65526U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x577 = 49316;
	static uint8_t x578 = 92U;
	int64_t x579 = 1896554314926LL;
	volatile int32_t x580 = INT32_MIN;
	volatile int64_t t96 = 462887194651LL;

	t96 = (((x577*x578)-x579)/x580);

	if (t96 != 883LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x585 = 4117849345018173LL;
	int64_t x587 = INT64_MIN;
	int8_t x588 = INT8_MIN;
	int64_t t97 = -23573716082LL;

	t97 = (((x585*x586)-x587)/x588);

	if (t97 != -69869986573387031LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x590 = INT16_MIN;
	uint8_t x591 = 2U;
	uint32_t x592 = 1337U;
	uint64_t t98 = 7056883503LLU;

	t98 = (((x589*x590)-x591)/x592);

	if (t98 != 13797105637789251LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x593 = -12;
	int64_t x594 = 63994601802734465LL;
	uint64_t x595 = UINT64_MAX;
	static volatile uint32_t x596 = 62047618U;
	volatile uint64_t t99 = 5624592901031LLU;

	t99 = (((x593*x594)-x595)/x596);

	if (t99 != 284923248013LLU) { NG(); } else { ; }
	
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

