#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = -1LL;
int32_t t0 = -2216863;
volatile int32_t t3 = -60355;
static int32_t x40 = 856440538;
volatile int32_t t5 = 171888945;
int16_t x47 = INT16_MIN;
static int64_t x48 = INT64_MIN;
static int32_t t6 = 6161;
int32_t t7 = 39179;
int32_t x57 = -1;
uint64_t x59 = 1LLU;
volatile int32_t t9 = 7702825;
uint64_t x63 = 1019LLU;
int32_t x67 = -1;
volatile int32_t t11 = -552248;
int32_t x69 = -1;
uint32_t x72 = 7238884U;
int16_t x78 = INT16_MIN;
volatile uint8_t x79 = 0U;
static int64_t x81 = INT64_MIN;
int32_t t15 = 3;
uint64_t x86 = 15896582283274418LLU;
int16_t x88 = INT16_MAX;
volatile uint64_t x90 = 45001569LLU;
int8_t x93 = INT8_MIN;
volatile int32_t t18 = -1277;
volatile uint8_t x111 = 7U;
uint16_t x127 = 0U;
volatile int16_t x128 = INT16_MIN;
volatile int8_t x136 = INT8_MIN;
int32_t x139 = INT32_MAX;
int64_t x152 = INT64_MIN;
volatile uint32_t x153 = UINT32_MAX;
int8_t x160 = 2;
int32_t t33 = 388856545;
int64_t x161 = INT64_MIN;
int16_t x163 = 3448;
int16_t x172 = INT16_MIN;
int32_t t36 = 0;
volatile int32_t t37 = 1032008497;
int16_t x183 = INT16_MAX;
static int32_t x184 = -60356418;
int32_t t38 = -2;
int64_t x197 = -8028942LL;
uint16_t x201 = UINT16_MAX;
int64_t x207 = INT64_MIN;
static int8_t x209 = INT8_MAX;
int16_t x212 = INT16_MAX;
static int16_t x224 = INT16_MIN;
volatile int64_t x231 = INT64_MIN;
int32_t x236 = INT32_MIN;
int32_t t51 = 34;
volatile int32_t t53 = -14;
volatile int32_t x246 = 881;
volatile int8_t x247 = 44;
static int32_t x250 = -3457528;
uint64_t x254 = 72LLU;
volatile uint8_t x255 = UINT8_MAX;
int16_t x259 = -1;
int32_t x260 = -239773;
int8_t x263 = 1;
static int32_t x270 = -1;
static volatile int32_t x271 = -1;
int16_t x272 = INT16_MAX;
int64_t x277 = INT64_MIN;
uint8_t x284 = 60U;
uint16_t x287 = UINT16_MAX;
uint32_t x296 = 19382393U;
uint32_t x302 = 4U;
int64_t x305 = INT64_MAX;
static volatile int8_t x317 = INT8_MAX;
static volatile uint16_t x319 = 4803U;
static uint64_t x321 = UINT64_MAX;
int16_t x330 = -502;
volatile int32_t x332 = 7015;
int8_t x334 = -1;
uint32_t x335 = UINT32_MAX;
int64_t x338 = 97893912963181777LL;
int32_t t75 = 105610685;
volatile int32_t t76 = -835098;
volatile uint8_t x350 = 2U;
int16_t x351 = INT16_MIN;
int32_t t78 = -4080;
static volatile int16_t x353 = INT16_MIN;
static volatile int8_t x360 = 11;
static volatile int8_t x370 = INT8_MAX;
static volatile int32_t t84 = -54;
volatile int32_t t86 = 1;
int16_t x388 = -1;
int8_t x389 = INT8_MIN;
static uint16_t x390 = UINT16_MAX;
volatile int32_t t88 = 1;
static uint16_t x411 = 17350U;
volatile int32_t t93 = -2956876;
volatile int64_t x414 = INT64_MIN;
int64_t x416 = 303375478LL;
static volatile int32_t t94 = 191;
int32_t x418 = INT32_MIN;
volatile int32_t t95 = -55748;
int32_t t96 = -9796621;
volatile int16_t x425 = 3;
uint64_t x426 = UINT64_MAX;
volatile uint16_t x428 = 105U;
uint32_t x430 = 1U;
int8_t x432 = 4;
int32_t x433 = 168094907;
static volatile uint16_t x436 = UINT16_MAX;
int32_t t99 = -559404;


void f0(void) {
	int64_t x5 = INT64_MIN;
	int32_t x7 = -1;
	static uint64_t x8 = 1830777142007131LLU;

	t0 = (x5<(x6+(x7%x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	uint64_t x10 = UINT64_MAX;
	static int32_t x11 = INT32_MIN;
	volatile int8_t x12 = INT8_MAX;
	static int32_t t1 = 14674159;

	t1 = (x9<(x10+(x11%x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	volatile int16_t x15 = INT16_MIN;
	int8_t x16 = 1;
	volatile int32_t t2 = -3235279;

	t2 = (x13<(x14+(x15%x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = 14962009972085533LL;
	int32_t x30 = -91432;
	int64_t x31 = 17837808341LL;
	static volatile uint32_t x32 = 887559098U;

	t3 = (x29<(x30+(x31%x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x33 = 0;
	int16_t x34 = INT16_MAX;
	int32_t x35 = INT32_MIN;
	uint8_t x36 = UINT8_MAX;
	static int32_t t4 = -62;

	t4 = (x33<(x34+(x35%x36)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x37 = UINT64_MAX;
	volatile int64_t x38 = -1LL;
	int8_t x39 = -1;

	t5 = (x37<(x38+(x39%x40)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = 4;
	static uint8_t x46 = UINT8_MAX;

	t6 = (x45<(x46+(x47%x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = -430567894192846LL;
	int32_t x51 = INT32_MIN;
	uint16_t x52 = 2170U;

	t7 = (x49<(x50+(x51%x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x53 = INT8_MIN;
	int8_t x54 = INT8_MAX;
	uint64_t x55 = UINT64_MAX;
	uint32_t x56 = UINT32_MAX;
	int32_t t8 = -2;

	t8 = (x53<(x54+(x55%x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x58 = UINT64_MAX;
	uint32_t x60 = 170481318U;

	t9 = (x57<(x58+(x59%x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x61 = INT8_MIN;
	uint16_t x62 = 566U;
	static int32_t x64 = -112982969;
	int32_t t10 = 875202842;

	t10 = (x61<(x62+(x63%x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = -1;
	uint8_t x66 = 28U;
	int8_t x68 = -1;

	t11 = (x65<(x66+(x67%x68)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	volatile int32_t t12 = -343341;

	t12 = (x69<(x70+(x71%x72)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = -1;
	int8_t x74 = 1;
	static uint8_t x75 = 2U;
	int32_t x76 = -1;
	volatile int32_t t13 = 2;

	t13 = (x73<(x74+(x75%x76)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -1;
	uint64_t x80 = UINT64_MAX;
	int32_t t14 = -41;

	t14 = (x77<(x78+(x79%x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x82 = UINT32_MAX;
	static int8_t x83 = 0;
	int8_t x84 = INT8_MIN;

	t15 = (x81<(x82+(x83%x84)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x85 = INT64_MIN;
	int32_t x87 = INT32_MAX;
	volatile int32_t t16 = 0;

	t16 = (x85<(x86+(x87%x88)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x89 = 1U;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t17 = 14;

	t17 = (x89<(x90+(x91%x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x94 = INT32_MIN;
	uint32_t x95 = 18U;
	static volatile uint8_t x96 = 1U;

	t18 = (x93<(x94+(x95%x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 0U;
	uint32_t x102 = 159473958U;
	int8_t x103 = 4;
	volatile int64_t x104 = 513553LL;
	int32_t t19 = -3809231;

	t19 = (x101<(x102+(x103%x104)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x105 = 94U;
	int16_t x106 = INT16_MIN;
	int8_t x107 = -1;
	int32_t x108 = 4;
	int32_t t20 = 8382443;

	t20 = (x105<(x106+(x107%x108)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x109 = UINT16_MAX;
	uint16_t x110 = 1904U;
	static int16_t x112 = -1;
	static int32_t t21 = -123;

	t21 = (x109<(x110+(x111%x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MAX;
	volatile int64_t x114 = INT64_MIN;
	volatile int64_t x115 = 172LL;
	int64_t x116 = -93LL;
	static int32_t t22 = 12116391;

	t22 = (x113<(x114+(x115%x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MIN;
	uint8_t x118 = UINT8_MAX;
	int64_t x119 = -8586898127LL;
	int32_t x120 = INT32_MIN;
	volatile int32_t t23 = 56926;

	t23 = (x117<(x118+(x119%x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x121 = INT16_MAX;
	static volatile uint32_t x122 = UINT32_MAX;
	int8_t x123 = -1;
	static int8_t x124 = -1;
	volatile int32_t t24 = -1031;

	t24 = (x121<(x122+(x123%x124)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = -1LL;
	uint16_t x126 = 20246U;
	volatile int32_t t25 = 58;

	t25 = (x125<(x126+(x127%x128)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x129 = 264275010022463668LL;
	uint64_t x130 = 1401904165LLU;
	int16_t x131 = 4818;
	int8_t x132 = -6;
	int32_t t26 = -1494889;

	t26 = (x129<(x130+(x131%x132)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x133 = -1;
	int8_t x134 = INT8_MIN;
	static int32_t x135 = INT32_MIN;
	volatile int32_t t27 = 155849325;

	t27 = (x133<(x134+(x135%x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x137 = 4395U;
	int32_t x138 = INT32_MAX;
	uint64_t x140 = 338LLU;
	static volatile int32_t t28 = 7;

	t28 = (x137<(x138+(x139%x140)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -7238;
	uint32_t x142 = UINT32_MAX;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = -1;
	volatile int32_t t29 = -91233;

	t29 = (x141<(x142+(x143%x144)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x145 = INT16_MIN;
	static int8_t x146 = 27;
	int8_t x147 = INT8_MIN;
	volatile uint16_t x148 = 39U;
	int32_t t30 = 226152328;

	t30 = (x145<(x146+(x147%x148)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x149 = 13077LL;
	uint16_t x150 = 1306U;
	static int8_t x151 = INT8_MIN;
	volatile int32_t t31 = 1;

	t31 = (x149<(x150+(x151%x152)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x154 = INT64_MIN;
	volatile int16_t x155 = 238;
	int32_t x156 = INT32_MAX;
	volatile int32_t t32 = -52077;

	t32 = (x153<(x154+(x155%x156)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x157 = INT16_MIN;
	uint16_t x158 = 185U;
	uint32_t x159 = 13170U;

	t33 = (x157<(x158+(x159%x160)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x162 = 30U;
	static volatile int64_t x164 = -1LL;
	int32_t t34 = 1591335;

	t34 = (x161<(x162+(x163%x164)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 55U;
	int64_t x166 = INT64_MAX;
	volatile uint8_t x167 = UINT8_MAX;
	int16_t x168 = -1;
	volatile int32_t t35 = 2;

	t35 = (x165<(x166+(x167%x168)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x169 = INT8_MAX;
	int16_t x170 = -53;
	static int64_t x171 = INT64_MAX;

	t36 = (x169<(x170+(x171%x172)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = INT16_MIN;
	static int64_t x174 = INT64_MIN;
	static uint8_t x175 = 9U;
	int64_t x176 = -7614288463250LL;

	t37 = (x173<(x174+(x175%x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 1528132733036LLU;
	int8_t x182 = 27;

	t38 = (x181<(x182+(x183%x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x185 = 6;
	volatile int64_t x186 = -11794848148386502LL;
	int16_t x187 = INT16_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t39 = -89450164;

	t39 = (x185<(x186+(x187%x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x189 = INT32_MAX;
	uint8_t x190 = 0U;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	int32_t t40 = -483;

	t40 = (x189<(x190+(x191%x192)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = 2244229699117844LLU;
	volatile uint64_t x194 = 40013780LLU;
	static int32_t x195 = -1;
	volatile uint64_t x196 = 8465436565765064LLU;
	volatile int32_t t41 = -106;

	t41 = (x193<(x194+(x195%x196)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x198 = INT8_MIN;
	volatile int8_t x199 = INT8_MAX;
	int64_t x200 = -83613094LL;
	static volatile int32_t t42 = -7697755;

	t42 = (x197<(x198+(x199%x200)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x202 = -1;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = 38U;
	volatile int32_t t43 = -446972704;

	t43 = (x201<(x202+(x203%x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = 25U;
	uint64_t x206 = 49701954304623LLU;
	uint64_t x208 = 1162LLU;
	int32_t t44 = 1;

	t44 = (x205<(x206+(x207%x208)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x210 = 228103LLU;
	static uint16_t x211 = 5U;
	int32_t t45 = 20;

	t45 = (x209<(x210+(x211%x212)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = -57;
	static int16_t x214 = -10961;
	uint16_t x215 = 0U;
	static volatile int32_t x216 = INT32_MAX;
	int32_t t46 = 148699;

	t46 = (x213<(x214+(x215%x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = -5;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = -1;
	int64_t x220 = INT64_MIN;
	int32_t t47 = 415005573;

	t47 = (x217<(x218+(x219%x220)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	volatile uint64_t x223 = UINT64_MAX;
	int32_t t48 = -1;

	t48 = (x221<(x222+(x223%x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x225 = INT8_MIN;
	volatile int16_t x226 = 7077;
	int16_t x227 = -1;
	int8_t x228 = -2;
	volatile int32_t t49 = 49;

	t49 = (x225<(x226+(x227%x228)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = INT16_MAX;
	int32_t x230 = INT32_MAX;
	static int32_t x232 = -21;
	volatile int32_t t50 = -320;

	t50 = (x229<(x230+(x231%x232)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MIN;
	volatile uint32_t x234 = UINT32_MAX;
	static int32_t x235 = INT32_MIN;

	t51 = (x233<(x234+(x235%x236)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = -1;
	volatile int32_t x239 = 35432;
	int8_t x240 = -1;
	volatile int32_t t52 = 223;

	t52 = (x237<(x238+(x239%x240)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = -1LL;
	int16_t x242 = INT16_MAX;
	static int32_t x243 = INT32_MAX;
	volatile int16_t x244 = 13867;

	t53 = (x241<(x242+(x243%x244)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x245 = INT64_MIN;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t54 = -386;

	t54 = (x245<(x246+(x247%x248)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MIN;
	int32_t x251 = INT32_MAX;
	uint64_t x252 = 3789005222891566551LLU;
	int32_t t55 = 5133;

	t55 = (x249<(x250+(x251%x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 210879234226614LLU;
	static int32_t x256 = -1;
	int32_t t56 = -46068;

	t56 = (x253<(x254+(x255%x256)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -81;
	int64_t x258 = INT64_MAX;
	volatile int32_t t57 = 6119035;

	t57 = (x257<(x258+(x259%x260)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = 731434600U;
	uint16_t x262 = 8211U;
	uint16_t x264 = 15086U;
	volatile int32_t t58 = -20386;

	t58 = (x261<(x262+(x263%x264)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = 361267272697178193LLU;
	volatile int32_t t59 = -14;

	t59 = (x269<(x270+(x271%x272)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x273 = 3LLU;
	int8_t x274 = INT8_MIN;
	static volatile uint64_t x275 = 562869LLU;
	int32_t x276 = INT32_MIN;
	volatile int32_t t60 = -13;

	t60 = (x273<(x274+(x275%x276)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x278 = 4663676457961968019LLU;
	int32_t x279 = 3385870;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t61 = 4195;

	t61 = (x277<(x278+(x279%x280)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = INT32_MIN;
	static uint64_t x282 = 79779618985530382LLU;
	int16_t x283 = -11;
	int32_t t62 = -19;

	t62 = (x281<(x282+(x283%x284)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MIN;
	uint8_t x288 = 8U;
	static volatile int32_t t63 = -3595;

	t63 = (x285<(x286+(x287%x288)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MIN;
	static int16_t x290 = INT16_MIN;
	static int32_t x291 = 15914936;
	uint16_t x292 = 68U;
	volatile int32_t t64 = -260045;

	t64 = (x289<(x290+(x291%x292)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MIN;
	static int64_t x295 = 1LL;
	int32_t t65 = 9944;

	t65 = (x293<(x294+(x295%x296)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x301 = INT8_MIN;
	uint8_t x303 = 8U;
	volatile int16_t x304 = -1;
	volatile int32_t t66 = -108;

	t66 = (x301<(x302+(x303%x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x306 = 203U;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MAX;
	volatile int32_t t67 = -73327;

	t67 = (x305<(x306+(x307%x308)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = -1689307766253LL;
	static uint64_t x310 = 933LLU;
	volatile uint64_t x311 = UINT64_MAX;
	uint8_t x312 = 1U;
	int32_t t68 = -18557;

	t68 = (x309<(x310+(x311%x312)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x313 = 12U;
	uint16_t x314 = 1334U;
	volatile int16_t x315 = INT16_MAX;
	static volatile int16_t x316 = INT16_MAX;
	volatile int32_t t69 = 562630978;

	t69 = (x313<(x314+(x315%x316)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x318 = -174537;
	int64_t x320 = INT64_MAX;
	volatile int32_t t70 = 15261538;

	t70 = (x317<(x318+(x319%x320)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x322 = 4U;
	int64_t x323 = -12494LL;
	int64_t x324 = -88192672856340437LL;
	static int32_t t71 = -54909;

	t71 = (x321<(x322+(x323%x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int64_t x326 = INT64_MIN;
	int8_t x327 = -1;
	uint64_t x328 = 159479934043467556LLU;
	int32_t t72 = -42;

	t72 = (x325<(x326+(x327%x328)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MIN;
	uint8_t x331 = 19U;
	int32_t t73 = 2226514;

	t73 = (x329<(x330+(x331%x332)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x333 = INT16_MAX;
	volatile int16_t x336 = 31;
	static int32_t t74 = 48156279;

	t74 = (x333<(x334+(x335%x336)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = INT8_MIN;
	static uint8_t x339 = UINT8_MAX;
	volatile uint32_t x340 = 63U;

	t75 = (x337<(x338+(x339%x340)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x341 = -4;
	int16_t x342 = -1;
	int32_t x343 = -298839246;
	int8_t x344 = INT8_MIN;

	t76 = (x341<(x342+(x343%x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = -2;
	volatile uint16_t x346 = 6762U;
	static int64_t x347 = INT64_MIN;
	int8_t x348 = 4;
	volatile int32_t t77 = 484260468;

	t77 = (x345<(x346+(x347%x348)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x349 = UINT32_MAX;
	int32_t x352 = INT32_MIN;

	t78 = (x349<(x350+(x351%x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x354 = -5;
	int16_t x355 = INT16_MIN;
	static int16_t x356 = -1;
	int32_t t79 = -33;

	t79 = (x353<(x354+(x355%x356)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = 379;
	uint32_t x358 = 315U;
	uint64_t x359 = UINT64_MAX;
	int32_t t80 = -1;

	t80 = (x357<(x358+(x359%x360)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x361 = 57LLU;
	int8_t x362 = 0;
	static volatile uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t81 = 2534437;

	t81 = (x361<(x362+(x363%x364)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = -151;
	int32_t x366 = INT32_MAX;
	static uint64_t x367 = UINT64_MAX;
	static uint16_t x368 = 3421U;
	int32_t t82 = 14570249;

	t82 = (x365<(x366+(x367%x368)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x369 = 7U;
	int8_t x371 = INT8_MIN;
	volatile int32_t x372 = INT32_MAX;
	volatile int32_t t83 = -384;

	t83 = (x369<(x370+(x371%x372)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MAX;
	volatile int16_t x375 = INT16_MAX;
	uint8_t x376 = 52U;

	t84 = (x373<(x374+(x375%x376)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	static int32_t x379 = INT32_MIN;
	int8_t x380 = 1;
	int32_t t85 = -32;

	t85 = (x377<(x378+(x379%x380)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x381 = 0;
	int8_t x382 = -1;
	int64_t x383 = 485944426936LL;
	int8_t x384 = -1;

	t86 = (x381<(x382+(x383%x384)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = 2;
	static uint16_t x386 = UINT16_MAX;
	volatile int32_t x387 = INT32_MIN;
	int32_t t87 = -24748;

	t87 = (x385<(x386+(x387%x388)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x391 = 7;
	int16_t x392 = INT16_MAX;

	t88 = (x389<(x390+(x391%x392)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MIN;
	static int32_t x394 = INT32_MIN;
	volatile uint16_t x395 = 10823U;
	volatile int8_t x396 = -1;
	int32_t t89 = -1516;

	t89 = (x393<(x394+(x395%x396)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = 2;
	int32_t x398 = -1;
	static int32_t x399 = -1;
	static volatile int16_t x400 = INT16_MIN;
	volatile int32_t t90 = -2;

	t90 = (x397<(x398+(x399%x400)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x401 = -32;
	static volatile int8_t x402 = INT8_MIN;
	uint8_t x403 = UINT8_MAX;
	int16_t x404 = INT16_MAX;
	volatile int32_t t91 = 0;

	t91 = (x401<(x402+(x403%x404)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = 10236245U;
	int16_t x406 = 10;
	int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t92 = -1;

	t92 = (x405<(x406+(x407%x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x409 = 0;
	uint8_t x410 = UINT8_MAX;
	uint64_t x412 = 10LLU;

	t93 = (x409<(x410+(x411%x412)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x413 = 614U;
	volatile int32_t x415 = 3813;

	t94 = (x413<(x414+(x415%x416)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = INT8_MAX;
	volatile uint32_t x419 = UINT32_MAX;
	int16_t x420 = -1;

	t95 = (x417<(x418+(x419%x420)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = INT16_MIN;
	int32_t x422 = -11576;
	uint8_t x423 = UINT8_MAX;
	int64_t x424 = INT64_MIN;

	t96 = (x421<(x422+(x423%x424)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x427 = -1;
	volatile int32_t t97 = 24;

	t97 = (x425<(x426+(x427%x428)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x429 = 0;
	volatile uint64_t x431 = 3LLU;
	volatile int32_t t98 = -806655;

	t98 = (x429<(x430+(x431%x432)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x434 = UINT32_MAX;
	static int64_t x435 = -1LL;

	t99 = (x433<(x434+(x435%x436)));

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

