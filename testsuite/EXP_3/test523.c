#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x20 = -1;
volatile uint64_t t5 = 620596LLU;
int32_t x53 = -78;
int64_t t10 = 16538785LL;
uint32_t x66 = 43965U;
int32_t x73 = -16255;
int64_t x80 = INT64_MAX;
static int16_t x83 = INT16_MIN;
volatile int64_t x85 = 232303922258036LL;
static uint64_t x86 = 11LLU;
int16_t x98 = -2;
int32_t x102 = 247;
int8_t x115 = INT8_MAX;
volatile int32_t x116 = INT32_MIN;
static uint64_t t20 = 151832LLU;
volatile uint64_t t22 = 971007945135LLU;
int32_t x128 = INT32_MIN;
volatile int16_t x135 = INT16_MIN;
uint64_t x138 = UINT64_MAX;
int32_t x140 = 22757447;
volatile int16_t x145 = INT16_MIN;
int64_t x146 = 21436LL;
static volatile int64_t x151 = INT64_MIN;
int64_t x152 = INT64_MAX;
static volatile int8_t x156 = -10;
volatile int32_t t29 = 3095969;
int8_t x157 = INT8_MIN;
uint32_t x163 = 1616072029U;
int64_t t31 = 16050901618475LL;
static int16_t x166 = -3874;
int64_t x167 = INT64_MIN;
uint32_t x169 = 940U;
static int16_t x178 = -1;
volatile uint8_t x180 = 58U;
int8_t x185 = -3;
int8_t x189 = INT8_MAX;
volatile int64_t t38 = -12747470366617853LL;
static uint8_t x203 = 1U;
uint32_t x205 = UINT32_MAX;
volatile int64_t t41 = 654737347020478LL;
int16_t x221 = -5376;
static int16_t x225 = INT16_MAX;
int32_t x226 = -1;
volatile int64_t t43 = -12512487044348LL;
uint64_t t47 = 19268785652637LLU;
uint64_t x258 = 54827LLU;
volatile uint8_t x261 = 13U;
static int64_t x262 = 377239492485235LL;
volatile int64_t t50 = 716845LL;
int8_t x270 = -1;
uint8_t x272 = 127U;
static int16_t x274 = INT16_MIN;
int64_t x277 = INT64_MIN;
uint32_t x280 = 172U;
uint16_t x294 = 1U;
int64_t t55 = 112505220786LL;
static int16_t x311 = -8182;
uint32_t x312 = UINT32_MAX;
static int32_t x316 = INT32_MIN;
volatile int64_t x320 = INT64_MAX;
int64_t x323 = INT64_MIN;
int64_t x324 = INT64_MIN;
static int64_t t60 = 110LL;
int8_t x329 = -61;
int32_t x334 = -1;
int8_t x339 = INT8_MIN;
uint32_t x349 = 419U;
uint32_t x360 = 689848U;
uint64_t x361 = UINT64_MAX;
volatile uint64_t t66 = 22LLU;
uint16_t x383 = 1490U;
int8_t x390 = -1;
uint64_t x399 = 539272652432LLU;
uint64_t t72 = 93663517LLU;
static volatile int32_t t75 = -173908705;
static uint64_t x429 = 314770310824107921LLU;
volatile int64_t x431 = -1LL;
static int16_t x439 = INT16_MIN;
volatile int64_t x440 = -1LL;
volatile uint64_t t78 = 7738962LLU;
int8_t x447 = INT8_MIN;
uint8_t x448 = 18U;
uint16_t x449 = UINT16_MAX;
int16_t x450 = INT16_MIN;
uint64_t t81 = 1860665178333LLU;
int8_t x464 = INT8_MIN;
uint16_t x473 = 6925U;
int32_t x475 = INT32_MIN;
static int8_t x478 = INT8_MIN;
static int32_t x514 = INT32_MAX;
uint8_t x524 = UINT8_MAX;
volatile int32_t t93 = -2;
volatile int64_t t94 = 66799162241252948LL;
int64_t x532 = INT64_MIN;
int32_t x548 = INT32_MAX;
uint32_t t98 = 3566U;
uint64_t x553 = 561192983906071753LLU;
int16_t x555 = INT16_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint32_t x2 = UINT32_MAX;
	int64_t x3 = INT64_MAX;
	static uint32_t x4 = 72410642U;
	static volatile int64_t t0 = -42393662138871048LL;

	t0 = ((x1-x2)*(x3/x4));

	if (t0 != 8347708197437440LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -967671021507638LL;

	t1 = ((x5-x6)*(x7/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint32_t x10 = 197499U;
	static uint64_t x11 = UINT64_MAX;
	static int16_t x12 = -6;
	volatile uint64_t t2 = 462259843473LLU;

	t2 = ((x9-x10)*(x11/x12));

	if (t2 != 2147286148LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int64_t x14 = INT64_MAX;
	uint64_t x15 = 1199117485230978016LLU;
	int8_t x16 = -19;
	uint64_t t3 = 816785305989430LLU;

	t3 = ((x13-x14)*(x15/x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 2616519129LLU;
	int64_t x18 = -1LL;
	static int16_t x19 = -1;
	uint64_t t4 = 111960LLU;

	t4 = ((x17-x18)*(x19/x20));

	if (t4 != 2616519130LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 69LLU;
	static uint8_t x22 = UINT8_MAX;
	int16_t x23 = 216;
	static int32_t x24 = -28911;

	t5 = ((x21-x22)*(x23/x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	int32_t x32 = INT32_MIN;
	int64_t t6 = 235882715138LL;

	t6 = ((x29-x30)*(x31/x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = INT16_MAX;
	int32_t x38 = 8324;
	uint16_t x39 = UINT16_MAX;
	uint64_t x40 = 167642201572285LLU;
	static volatile uint64_t t7 = 192896755931226LLU;

	t7 = ((x37-x38)*(x39/x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = 7U;
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = INT16_MAX;
	static volatile int64_t x44 = INT64_MAX;
	volatile int64_t t8 = -5569965977532LL;

	t8 = ((x41-x42)*(x43/x44));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x54 = -196966982;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = UINT16_MAX;
	int32_t t9 = 248202393;

	t9 = ((x53-x54)*(x55/x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 7U;
	uint8_t x58 = 1U;
	int16_t x59 = INT16_MAX;
	int64_t x60 = -8213781472362LL;

	t10 = ((x57-x58)*(x59/x60));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x65 = UINT32_MAX;
	int32_t x67 = 135179891;
	int32_t x68 = INT32_MIN;
	volatile uint32_t t11 = 107U;

	t11 = ((x65-x66)*(x67/x68));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x74 = -3173;
	volatile int32_t x75 = -1;
	static uint32_t x76 = UINT32_MAX;
	uint32_t t12 = 26299U;

	t12 = ((x73-x74)*(x75/x76));

	if (t12 != 4294954214U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x77 = UINT64_MAX;
	uint64_t x78 = 1LLU;
	volatile uint8_t x79 = UINT8_MAX;
	uint64_t t13 = 7552679690LLU;

	t13 = ((x77-x78)*(x79/x80));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -1LL;
	int32_t x82 = INT32_MIN;
	volatile uint64_t x84 = 25432984105LLU;
	static uint64_t t14 = 16496198730616LLU;

	t14 = ((x81-x82)*(x83/x84));

	if (t14 != 1557586834962558477LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x87 = 14;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t15 = 2613LLU;

	t15 = ((x85-x86)*(x87/x88));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = -1LL;
	uint16_t x99 = 15U;
	static uint64_t x100 = 439039610104LLU;
	volatile uint64_t t16 = 695458353LLU;

	t16 = ((x97-x98)*(x99/x100));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	volatile uint64_t x104 = 13638261944080LLU;
	volatile uint64_t t17 = 1167844408651066906LLU;

	t17 = ((x101-x102)*(x103/x104));

	if (t17 != 5809252170047456LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = INT8_MAX;
	volatile int8_t x106 = INT8_MAX;
	int16_t x107 = -1;
	int16_t x108 = -44;
	static volatile int32_t t18 = 10;

	t18 = ((x105-x106)*(x107/x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x109 = 356694U;
	int8_t x110 = -1;
	int8_t x111 = -1;
	static int16_t x112 = INT16_MIN;
	uint32_t t19 = 394284U;

	t19 = ((x109-x110)*(x111/x112));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = 4875688514111781687LLU;

	t20 = ((x113-x114)*(x115/x116));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x117 = 10U;
	static int64_t x118 = INT64_MAX;
	int64_t x119 = -1LL;
	volatile int8_t x120 = INT8_MIN;
	int64_t t21 = -7034611839511LL;

	t21 = ((x117-x118)*(x119/x120));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x121 = -1LL;
	static uint8_t x122 = 3U;
	int64_t x123 = -25359319957883227LL;
	uint64_t x124 = UINT64_MAX;

	t22 = ((x121-x122)*(x123/x124));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = 176U;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	volatile int32_t t23 = 271094;

	t23 = ((x125-x126)*(x127/x128));

	if (t23 != 32944) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = 11149;
	uint16_t x134 = UINT16_MAX;
	int64_t x136 = INT64_MAX;
	int64_t t24 = 26LL;

	t24 = ((x133-x134)*(x135/x136));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = 1LL;
	int32_t x139 = -1;
	static uint64_t t25 = 200LLU;

	t25 = ((x137-x138)*(x139/x140));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	volatile uint32_t x143 = 2483471U;
	volatile int8_t x144 = INT8_MIN;
	volatile int64_t t26 = -16138181LL;

	t26 = ((x141-x142)*(x143/x144));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x147 = UINT16_MAX;
	uint8_t x148 = UINT8_MAX;
	static int64_t t27 = 2468407208LL;

	t27 = ((x145-x146)*(x147/x148));

	if (t27 != -13930428LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 1U;
	int64_t x150 = -54098339687690109LL;
	volatile int64_t t28 = -13743986580309623LL;

	t28 = ((x149-x150)*(x151/x152));

	if (t28 != -54098339687690110LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = -20;
	uint16_t x155 = 207U;

	t29 = ((x153-x154)*(x155/x156));

	if (t29 != -2940) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x158 = -62;
	uint64_t x159 = 101741123460LLU;
	static int16_t x160 = INT16_MAX;
	volatile uint64_t t30 = 279866929909933LLU;

	t30 = ((x157-x158)*(x159/x160));

	if (t30 != 18446744073504622474LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x161 = 94897744252528LL;
	int16_t x162 = -951;
	int8_t x164 = INT8_MIN;

	t31 = ((x161-x162)*(x163/x164));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x165 = UINT8_MAX;
	static int64_t x168 = INT64_MIN;
	int64_t t32 = -4849LL;

	t32 = ((x165-x166)*(x167/x168));

	if (t32 != 4129LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x170 = -1993;
	static int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MIN;
	volatile int64_t t33 = 68617105843901544LL;

	t33 = ((x169-x170)*(x171/x172));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x177 = 20828579950LLU;
	int8_t x179 = INT8_MAX;
	uint64_t t34 = 1183293LLU;

	t34 = ((x177-x178)*(x179/x180));

	if (t34 != 41657159902LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x181 = INT16_MIN;
	uint64_t x182 = 1LLU;
	int8_t x183 = -1;
	uint64_t x184 = 159102658579613LLU;
	static uint64_t t35 = 18LLU;

	t35 = ((x181-x182)*(x183/x184));

	if (t35 != 18446744069910248218LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x186 = 13U;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = -7;
	volatile uint32_t t36 = 257407U;

	t36 = ((x185-x186)*(x187/x188));

	if (t36 != 576U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x190 = 21619464LLU;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = -176;
	static uint64_t t37 = 2244954618LLU;

	t37 = ((x189-x190)*(x191/x192));

	if (t37 != 8042393364LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = 675717891;
	int16_t x198 = INT16_MAX;
	static volatile uint32_t x199 = 94U;
	int64_t x200 = 2440213LL;

	t38 = ((x197-x198)*(x199/x200));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = -1;
	int8_t x202 = -1;
	int64_t x204 = 37379892211545370LL;
	volatile int64_t t39 = 4LL;

	t39 = ((x201-x202)*(x203/x204));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x206 = INT8_MIN;
	volatile int32_t x207 = 5742;
	static int32_t x208 = INT32_MIN;
	static volatile uint32_t t40 = 4245575U;

	t40 = ((x205-x206)*(x207/x208));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x209 = UINT32_MAX;
	static int8_t x210 = -1;
	int32_t x211 = 32;
	volatile int64_t x212 = INT64_MAX;

	t41 = ((x209-x210)*(x211/x212));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x222 = 15U;
	volatile uint8_t x223 = UINT8_MAX;
	volatile uint16_t x224 = 10U;
	volatile int32_t t42 = 125;

	t42 = ((x221-x222)*(x223/x224));

	if (t42 != -134775) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x227 = 495178LL;
	int32_t x228 = -1;

	t43 = ((x225-x226)*(x227/x228));

	if (t43 != -16225992704LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x229 = 111658LLU;
	static int32_t x230 = INT32_MIN;
	volatile uint16_t x231 = 1295U;
	volatile int16_t x232 = INT16_MAX;
	static uint64_t t44 = 2944365234561452LLU;

	t44 = ((x229-x230)*(x231/x232));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = -28;
	int32_t x234 = -1;
	int16_t x235 = INT16_MAX;
	static int32_t x236 = -1;
	volatile int32_t t45 = -33249051;

	t45 = ((x233-x234)*(x235/x236));

	if (t45 != 884709) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x237 = INT16_MAX;
	static volatile int64_t x238 = -1LL;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = -1;
	int64_t t46 = -21LL;

	t46 = ((x237-x238)*(x239/x240));

	if (t46 != -2147450880LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x249 = INT8_MIN;
	uint64_t x250 = 33295775340154123LLU;
	int64_t x251 = INT64_MAX;
	int16_t x252 = INT16_MIN;

	t47 = ((x249-x250)*(x251/x252));

	if (t47 != 14777636024197853813LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MIN;
	int8_t x255 = -18;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t48 = 45253711;

	t48 = ((x253-x254)*(x255/x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x257 = 1U;
	int16_t x259 = -4978;
	int64_t x260 = -1840953936242LL;
	static volatile uint64_t t49 = 34LLU;

	t49 = ((x257-x258)*(x259/x260));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x263 = 111U;
	int16_t x264 = INT16_MAX;

	t50 = ((x261-x262)*(x263/x264));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = 8338;
	static int16_t x271 = INT16_MIN;
	volatile int32_t t51 = 62583959;

	t51 = ((x269-x270)*(x271/x272));

	if (t51 != -2151462) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x273 = INT8_MIN;
	static volatile int16_t x275 = INT16_MIN;
	int8_t x276 = -1;
	volatile int32_t t52 = -27328268;

	t52 = ((x273-x274)*(x275/x276));

	if (t52 != 1069547520) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x278 = -1LL;
	static int64_t x279 = -1LL;
	volatile int64_t t53 = 8060LL;

	t53 = ((x277-x278)*(x279/x280));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x289 = 47312LLU;
	volatile uint8_t x290 = UINT8_MAX;
	static int16_t x291 = 707;
	int8_t x292 = -19;
	uint64_t t54 = 22192020LLU;

	t54 = ((x289-x290)*(x291/x292));

	if (t54 != 18446744073707810507LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x293 = 33668470436658LL;
	static volatile int8_t x295 = -1;
	static int32_t x296 = INT32_MIN;

	t55 = ((x293-x294)*(x295/x296));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x305 = 59U;
	static int8_t x306 = INT8_MIN;
	uint64_t x307 = 23587346926346LLU;
	static int8_t x308 = INT8_MIN;
	volatile uint64_t t56 = 89883969LLU;

	t56 = ((x305-x306)*(x307/x308));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x309 = UINT64_MAX;
	int32_t x310 = INT32_MIN;
	volatile uint64_t t57 = 855850784LLU;

	t57 = ((x309-x310)*(x311/x312));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x313 = UINT8_MAX;
	int16_t x314 = -1;
	volatile uint32_t x315 = 3402U;
	volatile uint32_t t58 = 29U;

	t58 = ((x313-x314)*(x315/x316));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x317 = 292411438673LLU;
	int32_t x318 = -1;
	int8_t x319 = INT8_MIN;
	volatile uint64_t t59 = 178608057131LLU;

	t59 = ((x317-x318)*(x319/x320));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MIN;

	t60 = ((x321-x322)*(x323/x324));

	if (t60 != -2147450880LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x330 = UINT16_MAX;
	uint32_t x331 = 193U;
	int16_t x332 = INT16_MIN;
	volatile uint32_t t61 = 19U;

	t61 = ((x329-x330)*(x331/x332));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x333 = -1;
	static int16_t x335 = INT16_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t62 = 1;

	t62 = ((x333-x334)*(x335/x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x337 = -3;
	int64_t x338 = INT64_MIN;
	int8_t x340 = INT8_MIN;
	volatile int64_t t63 = -26LL;

	t63 = ((x337-x338)*(x339/x340));

	if (t63 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x350 = 1U;
	uint16_t x351 = 16U;
	int8_t x352 = INT8_MIN;
	uint32_t t64 = 7844U;

	t64 = ((x349-x350)*(x351/x352));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;
	uint32_t x359 = 5U;
	uint32_t t65 = 0U;

	t65 = ((x357-x358)*(x359/x360));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x362 = INT8_MAX;
	volatile uint16_t x363 = 0U;
	uint32_t x364 = 63534U;

	t66 = ((x361-x362)*(x363/x364));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x365 = -2105480561674509LL;
	int8_t x366 = 42;
	int64_t x367 = 1LL;
	uint8_t x368 = UINT8_MAX;
	int64_t t67 = 1068108684703405744LL;

	t67 = ((x365-x366)*(x367/x368));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x377 = 894;
	static volatile int16_t x378 = INT16_MAX;
	uint8_t x379 = UINT8_MAX;
	uint8_t x380 = UINT8_MAX;
	int32_t t68 = -947;

	t68 = ((x377-x378)*(x379/x380));

	if (t68 != -31873) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x381 = INT32_MAX;
	volatile uint32_t x382 = 116237145U;
	int32_t x384 = INT32_MIN;
	uint32_t t69 = 13U;

	t69 = ((x381-x382)*(x383/x384));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = 1;
	int16_t x387 = -100;
	int64_t x388 = INT64_MIN;
	volatile int64_t t70 = 1LL;

	t70 = ((x385-x386)*(x387/x388));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x389 = 6U;
	volatile uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MAX;
	uint64_t t71 = 3943LLU;

	t71 = ((x389-x390)*(x391/x392));

	if (t71 != 1016749673354069774LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x397 = INT32_MIN;
	volatile int8_t x398 = INT8_MIN;
	int8_t x400 = INT8_MIN;

	t72 = ((x397-x398)*(x399/x400));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x409 = UINT32_MAX;
	static uint64_t x410 = 1723168078056LLU;
	int64_t x411 = -1525164740346873416LL;
	volatile int64_t x412 = INT64_MIN;
	static volatile uint64_t t73 = 285776296235911220LLU;

	t73 = ((x409-x410)*(x411/x412));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x413 = -1;
	int8_t x414 = INT8_MAX;
	static volatile uint64_t x415 = UINT64_MAX;
	volatile uint64_t x416 = UINT64_MAX;
	static uint64_t t74 = 4LLU;

	t74 = ((x413-x414)*(x415/x416));

	if (t74 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x421 = INT32_MAX;
	int8_t x422 = 19;
	int16_t x423 = 15;
	int32_t x424 = INT32_MIN;

	t75 = ((x421-x422)*(x423/x424));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x425 = 9099U;
	uint16_t x426 = 3385U;
	int64_t x427 = -1LL;
	static int8_t x428 = INT8_MAX;
	volatile int64_t t76 = 496771LL;

	t76 = ((x425-x426)*(x427/x428));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x430 = 1LLU;
	uint32_t x432 = UINT32_MAX;
	static volatile uint64_t t77 = 222964603694553LLU;

	t77 = ((x429-x430)*(x431/x432));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x437 = UINT32_MAX;
	volatile uint64_t x438 = 11259617474909LLU;

	t78 = ((x437-x438)*(x439/x440));

	if (t78 != 18077929665780056064LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MIN;
	int8_t x443 = -11;
	int64_t x444 = 3066LL;
	volatile int64_t t79 = 1539655416LL;

	t79 = ((x441-x442)*(x443/x444));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x445 = -1;
	int16_t x446 = INT16_MAX;
	volatile int32_t t80 = -14377991;

	t80 = ((x445-x446)*(x447/x448));

	if (t80 != 229376) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x451 = -3;
	uint64_t x452 = 3336668460LLU;

	t81 = ((x449-x450)*(x451/x452));

	if (t81 != 543467325090068LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x457 = 1U;
	int16_t x458 = -2;
	int16_t x459 = -1;
	uint16_t x460 = 73U;
	volatile int32_t t82 = -540;

	t82 = ((x457-x458)*(x459/x460));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x461 = INT32_MAX;
	int64_t x462 = 0LL;
	int32_t x463 = -685;
	int64_t t83 = -751154900LL;

	t83 = ((x461-x462)*(x463/x464));

	if (t83 != 10737418235LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x465 = INT8_MAX;
	int16_t x466 = INT16_MIN;
	int64_t x467 = INT64_MIN;
	volatile int32_t x468 = INT32_MAX;
	static volatile int64_t t84 = -20LL;

	t84 = ((x465-x466)*(x467/x468));

	if (t84 != -141282949267710LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x469 = UINT16_MAX;
	static int16_t x470 = 9208;
	uint32_t x471 = 0U;
	int8_t x472 = 42;
	uint32_t t85 = 779500U;

	t85 = ((x469-x470)*(x471/x472));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x474 = -1LL;
	int16_t x476 = INT16_MIN;
	int64_t t86 = -23327070292181LL;

	t86 = ((x473-x474)*(x475/x476));

	if (t86 != 453902336LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x477 = -51522337;
	static uint8_t x479 = UINT8_MAX;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t87 = 3683LLU;

	t87 = ((x477-x478)*(x479/x480));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x481 = -1;
	static int64_t x482 = -950LL;
	uint64_t x483 = UINT64_MAX;
	int16_t x484 = INT16_MIN;
	uint64_t t88 = 7810836104284769635LLU;

	t88 = ((x481-x482)*(x483/x484));

	if (t88 != 949LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x493 = 3;
	static uint32_t x494 = UINT32_MAX;
	int32_t x495 = -874114;
	uint32_t x496 = UINT32_MAX;
	static volatile uint32_t t89 = 16137657U;

	t89 = ((x493-x494)*(x495/x496));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MIN;
	volatile uint32_t x507 = 61350U;
	volatile int64_t x508 = -1LL;
	int64_t t90 = -64953726943LL;

	t90 = ((x505-x506)*(x507/x508));

	if (t90 != 131746111488000LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x513 = 109354880371LL;
	uint64_t x515 = 0LLU;
	static int8_t x516 = -52;
	uint64_t t91 = 17LLU;

	t91 = ((x513-x514)*(x515/x516));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x517 = 6606719248966035860LLU;
	int64_t x518 = INT64_MIN;
	volatile int32_t x519 = INT32_MAX;
	int32_t x520 = INT32_MAX;
	volatile uint64_t t92 = 74253720436505909LLU;

	t92 = ((x517-x518)*(x519/x520));

	if (t92 != 15830091285820811668LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x521 = INT16_MIN;
	static int16_t x522 = INT16_MAX;
	uint16_t x523 = 196U;

	t93 = ((x521-x522)*(x523/x524));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x525 = INT8_MAX;
	int8_t x526 = -1;
	uint16_t x527 = 1U;
	int64_t x528 = -9215523LL;

	t94 = ((x525-x526)*(x527/x528));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x529 = 4020U;
	static uint32_t x530 = UINT32_MAX;
	int16_t x531 = INT16_MAX;
	int64_t t95 = -14LL;

	t95 = ((x529-x530)*(x531/x532));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x537 = UINT32_MAX;
	volatile uint32_t x538 = UINT32_MAX;
	int8_t x539 = -1;
	int8_t x540 = -1;
	uint32_t t96 = 52U;

	t96 = ((x537-x538)*(x539/x540));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x541 = -184;
	int64_t x542 = INT64_MIN;
	volatile int64_t x543 = -1LL;
	volatile uint64_t x544 = UINT64_MAX;
	static uint64_t t97 = 603434612987754LLU;

	t97 = ((x541-x542)*(x543/x544));

	if (t97 != 9223372036854775624LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x545 = 109356026U;
	int32_t x546 = INT32_MIN;
	uint8_t x547 = 89U;

	t98 = ((x545-x546)*(x547/x548));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x554 = 0U;
	int64_t x556 = 698LL;
	uint64_t t99 = 30434461647276LLU;

	t99 = ((x553-x554)*(x555/x556));

	if (t99 != 11078610887739802594LLU) { NG(); } else { ; }
	
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

