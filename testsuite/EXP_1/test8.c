#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 63LLU;
volatile int64_t x2 = 610717894024471276LL;
int8_t x9 = 39;
uint32_t x12 = UINT32_MAX;
volatile int32_t t1 = -1;
static int8_t x21 = INT8_MIN;
int16_t x23 = INT16_MIN;
uint32_t x24 = 15U;
volatile uint64_t x32 = 110302022LLU;
int64_t x41 = 227613201146951LL;
volatile int16_t x43 = -1;
volatile int32_t t7 = -6840111;
int16_t x45 = INT16_MIN;
int64_t x51 = 2068300LL;
volatile int32_t t9 = 75;
volatile int64_t x54 = -49533146865308LL;
uint16_t x66 = 159U;
static volatile int16_t x69 = INT16_MAX;
static int64_t x75 = INT64_MIN;
int32_t x76 = INT32_MIN;
int8_t x78 = INT8_MAX;
uint8_t x99 = 5U;
int64_t x113 = 116LL;
static int32_t x114 = -4527;
volatile int8_t x120 = INT8_MIN;
volatile int16_t x121 = -21;
int64_t x122 = -1LL;
uint8_t x124 = 0U;
uint16_t x134 = 143U;
uint16_t x148 = 6475U;
int8_t x151 = 1;
int64_t x154 = INT64_MIN;
volatile int32_t t31 = -488;
static int16_t x158 = -1;
static volatile int32_t t32 = -165354523;
int8_t x164 = INT8_MIN;
int32_t t33 = -946;
int8_t x171 = -28;
uint8_t x176 = 121U;
volatile int32_t t36 = 2475274;
static int8_t x179 = INT8_MAX;
uint32_t x181 = 1494819U;
uint8_t x204 = UINT8_MAX;
uint64_t x210 = UINT64_MAX;
static volatile uint64_t x211 = 10LLU;
int16_t x215 = INT16_MAX;
int32_t t44 = 183161;
static int32_t x235 = -1;
int8_t x236 = INT8_MIN;
static int32_t x251 = -1;
volatile uint8_t x257 = UINT8_MAX;
static uint32_t x260 = 185649U;
static volatile int8_t x261 = INT8_MAX;
static int64_t x264 = INT64_MIN;
int32_t x265 = INT32_MIN;
volatile int32_t x269 = 0;
int8_t x270 = -1;
int32_t t54 = 1;
int32_t x287 = INT32_MIN;
uint8_t x300 = UINT8_MAX;
int64_t x311 = INT64_MIN;
volatile int16_t x314 = -1899;
volatile int32_t t61 = 47;
int16_t x317 = -789;
int8_t x321 = INT8_MIN;
volatile int8_t x327 = INT8_MAX;
static uint8_t x338 = 0U;
int32_t t67 = 24146481;
int8_t x350 = 9;
static int16_t x351 = INT16_MAX;
int64_t x357 = INT64_MIN;
int8_t x358 = INT8_MAX;
int32_t t71 = 0;
int16_t x376 = 5;
int32_t t74 = 10010058;
static uint8_t x381 = 1U;
uint64_t x384 = 1596868LLU;
int32_t t75 = -3;
int16_t x386 = 8285;
volatile int16_t x402 = INT16_MIN;
int64_t x404 = INT64_MIN;
volatile int64_t x407 = INT64_MAX;
int64_t x410 = -1LL;
volatile uint32_t x423 = 1471844926U;
static int16_t x425 = INT16_MIN;
int8_t x431 = -43;
volatile int32_t x437 = 160876452;
int8_t x439 = 1;
int8_t x442 = -2;
volatile int32_t t88 = -391;
int64_t x446 = -13746381856LL;
volatile int16_t x451 = 101;
int32_t t90 = 14;
int64_t x453 = -33972833555835126LL;
uint16_t x454 = 30U;
int32_t x456 = INT32_MIN;
uint8_t x459 = UINT8_MAX;
uint16_t x471 = 3818U;
int8_t x472 = -10;
int32_t t98 = -640;
volatile int16_t x487 = -1;
int32_t t99 = 2176;


void f0(void) {
	uint16_t x3 = 6511U;
	int16_t x4 = -4806;
	static volatile int32_t t0 = -1;

	t0 = (((x1+x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x10 = INT16_MIN;
	static int16_t x11 = INT16_MIN;

	t1 = (((x9+x10)+x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = 0U;
	static int32_t x14 = -1;
	uint16_t x15 = UINT16_MAX;
	uint8_t x16 = 0U;
	volatile int32_t t2 = 13702470;

	t2 = (((x13+x14)+x15)==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 55U;
	static int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MAX;
	int32_t x20 = -5;
	volatile int32_t t3 = -227902;

	t3 = (((x17+x18)+x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x22 = 24U;
	int32_t t4 = 367;

	t4 = (((x21+x22)+x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	static int8_t x30 = -1;
	int32_t x31 = INT32_MIN;
	volatile int32_t t5 = 34357664;

	t5 = (((x29+x30)+x31)==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = -965;
	static uint16_t x34 = UINT16_MAX;
	volatile int32_t x35 = INT32_MIN;
	volatile uint64_t x36 = 319842057LLU;
	static volatile int32_t t6 = -24;

	t6 = (((x33+x34)+x35)==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x42 = UINT32_MAX;
	volatile uint32_t x44 = 9389493U;

	t7 = (((x41+x42)+x43)==x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x46 = 234U;
	int32_t x47 = INT32_MAX;
	int16_t x48 = INT16_MAX;
	static int32_t t8 = -128679;

	t8 = (((x45+x46)+x47)==x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = -1LL;
	volatile int8_t x52 = 9;

	t9 = (((x49+x50)+x51)==x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -2LL;
	uint16_t x55 = 5U;
	volatile uint64_t x56 = UINT64_MAX;
	static volatile int32_t t10 = 1;

	t10 = (((x53+x54)+x55)==x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = 31189;
	volatile uint64_t x67 = 95355275737LLU;
	int8_t x68 = -2;
	volatile int32_t t11 = 1;

	t11 = (((x65+x66)+x67)==x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x70 = 7U;
	static uint16_t x71 = UINT16_MAX;
	int8_t x72 = -1;
	static int32_t t12 = 1;

	t12 = (((x69+x70)+x71)==x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MIN;
	volatile uint64_t x74 = UINT64_MAX;
	volatile int32_t t13 = -5;

	t13 = (((x73+x74)+x75)==x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x77 = INT32_MIN;
	uint8_t x79 = 13U;
	volatile int8_t x80 = INT8_MAX;
	int32_t t14 = -32661;

	t14 = (((x77+x78)+x79)==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = 271610340606450LLU;
	int32_t x82 = 467;
	static volatile int8_t x83 = INT8_MIN;
	static int64_t x84 = -19429365025621377LL;
	volatile int32_t t15 = -3738;

	t15 = (((x81+x82)+x83)==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x85 = INT64_MIN;
	volatile uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t16 = 66368934;

	t16 = (((x85+x86)+x87)==x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MIN;
	volatile uint32_t x90 = UINT32_MAX;
	static int16_t x91 = 0;
	uint8_t x92 = 1U;
	volatile int32_t t17 = -1;

	t17 = (((x89+x90)+x91)==x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = -1173;
	static int8_t x95 = INT8_MIN;
	int16_t x96 = -1;
	volatile int32_t t18 = -137;

	t18 = (((x93+x94)+x95)==x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = INT64_MIN;
	uint8_t x98 = 28U;
	int16_t x100 = -1;
	volatile int32_t t19 = 1;

	t19 = (((x97+x98)+x99)==x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MAX;
	static volatile int32_t x110 = -7532967;
	static int16_t x111 = 1;
	int16_t x112 = INT16_MAX;
	volatile int32_t t20 = 21782;

	t20 = (((x109+x110)+x111)==x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x115 = -2;
	int8_t x116 = INT8_MAX;
	int32_t t21 = 60286;

	t21 = (((x113+x114)+x115)==x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = 7U;
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 16713993U;
	int32_t t22 = -55307849;

	t22 = (((x117+x118)+x119)==x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x123 = -1;
	int32_t t23 = -38337821;

	t23 = (((x121+x122)+x123)==x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 475392LLU;
	uint16_t x126 = UINT16_MAX;
	int64_t x127 = INT64_MAX;
	uint32_t x128 = 131640543U;
	static int32_t t24 = -37807;

	t24 = (((x125+x126)+x127)==x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = 900801985LL;
	int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t25 = 6224155;

	t25 = (((x129+x130)+x131)==x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x133 = 2U;
	uint64_t x135 = 0LLU;
	uint8_t x136 = 8U;
	volatile int32_t t26 = -3;

	t26 = (((x133+x134)+x135)==x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 1U;
	static volatile int32_t t27 = -131;

	t27 = (((x137+x138)+x139)==x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -1LL;
	static int8_t x143 = 7;
	int32_t x144 = INT32_MAX;
	volatile int32_t t28 = 1710011;

	t28 = (((x141+x142)+x143)==x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x145 = INT32_MAX;
	uint64_t x146 = 106215137698LLU;
	int8_t x147 = -1;
	static volatile int32_t t29 = -1257014;

	t29 = (((x145+x146)+x147)==x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x149 = UINT16_MAX;
	uint32_t x150 = UINT32_MAX;
	int64_t x152 = 2774LL;
	int32_t t30 = 35538;

	t30 = (((x149+x150)+x151)==x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x153 = 11U;
	int16_t x155 = INT16_MAX;
	static volatile int32_t x156 = INT32_MIN;

	t31 = (((x153+x154)+x155)==x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MIN;
	static uint8_t x159 = 0U;
	uint8_t x160 = UINT8_MAX;

	t32 = (((x157+x158)+x159)==x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = UINT32_MAX;
	uint64_t x162 = 125819957LLU;
	int8_t x163 = -1;

	t33 = (((x161+x162)+x163)==x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x165 = INT8_MAX;
	volatile uint16_t x166 = 550U;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = -1LL;
	volatile int32_t t34 = 2236;

	t34 = (((x165+x166)+x167)==x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x169 = -1;
	uint16_t x170 = 34U;
	volatile int8_t x172 = -17;
	static int32_t t35 = 18684;

	t35 = (((x169+x170)+x171)==x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x174 = -1;
	int16_t x175 = INT16_MAX;

	t36 = (((x173+x174)+x175)==x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = 0;
	static uint32_t x178 = 501316U;
	int32_t x180 = 402415923;
	int32_t t37 = -1;

	t37 = (((x177+x178)+x179)==x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x182 = UINT64_MAX;
	volatile int64_t x183 = INT64_MAX;
	static int32_t x184 = -5956735;
	volatile int32_t t38 = 445847210;

	t38 = (((x181+x182)+x183)==x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x189 = 0U;
	int32_t x190 = INT32_MAX;
	static uint32_t x191 = 6U;
	int64_t x192 = INT64_MIN;
	static int32_t t39 = 51373;

	t39 = (((x189+x190)+x191)==x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	volatile uint8_t x196 = 18U;
	int32_t t40 = 8384478;

	t40 = (((x193+x194)+x195)==x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x201 = 110899U;
	static int32_t x202 = INT32_MAX;
	int32_t x203 = -1;
	int32_t t41 = 13;

	t41 = (((x201+x202)+x203)==x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x205 = -56444;
	uint8_t x206 = UINT8_MAX;
	uint64_t x207 = UINT64_MAX;
	volatile int8_t x208 = INT8_MIN;
	int32_t t42 = -3721;

	t42 = (((x205+x206)+x207)==x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x209 = 68093;
	uint8_t x212 = 7U;
	volatile int32_t t43 = 802496;

	t43 = (((x209+x210)+x211)==x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x213 = 48U;
	int64_t x214 = -1LL;
	int16_t x216 = INT16_MIN;

	t44 = (((x213+x214)+x215)==x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x217 = 21;
	int64_t x218 = -18313284071LL;
	volatile int32_t x219 = INT32_MIN;
	volatile int64_t x220 = INT64_MIN;
	static int32_t t45 = -50744;

	t45 = (((x217+x218)+x219)==x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x233 = 0U;
	volatile int32_t x234 = -1;
	volatile int32_t t46 = -19;

	t46 = (((x233+x234)+x235)==x236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x241 = INT32_MIN;
	uint64_t x242 = 17139770779261LLU;
	volatile uint64_t x243 = UINT64_MAX;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t47 = 62155;

	t47 = (((x241+x242)+x243)==x244);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x245 = -1LL;
	int16_t x246 = -1;
	int16_t x247 = -1;
	volatile int16_t x248 = INT16_MIN;
	int32_t t48 = -475;

	t48 = (((x245+x246)+x247)==x248);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = -76470500;
	volatile uint16_t x252 = 9U;
	volatile int32_t t49 = -1281030;

	t49 = (((x249+x250)+x251)==x252);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x258 = -6;
	int8_t x259 = INT8_MAX;
	volatile int32_t t50 = 3100;

	t50 = (((x257+x258)+x259)==x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x262 = INT8_MIN;
	volatile int64_t x263 = -33446LL;
	volatile int32_t t51 = -1792;

	t51 = (((x261+x262)+x263)==x264);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x266 = 1189;
	int32_t x267 = -1;
	static int32_t x268 = -1;
	volatile int32_t t52 = 44116806;

	t52 = (((x265+x266)+x267)==x268);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x271 = -1;
	uint32_t x272 = UINT32_MAX;
	int32_t t53 = 0;

	t53 = (((x269+x270)+x271)==x272);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x277 = INT16_MAX;
	uint16_t x278 = 44U;
	int8_t x279 = 0;
	int16_t x280 = INT16_MAX;

	t54 = (((x277+x278)+x279)==x280);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x285 = 7U;
	volatile uint16_t x286 = 6989U;
	uint8_t x288 = 23U;
	static int32_t t55 = 957;

	t55 = (((x285+x286)+x287)==x288);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = 1;
	static volatile uint16_t x290 = 13U;
	int32_t x291 = -70769;
	int64_t x292 = -1LL;
	volatile int32_t t56 = -2;

	t56 = (((x289+x290)+x291)==x292);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x293 = INT32_MAX;
	int8_t x294 = -1;
	int64_t x295 = 31945636750268942LL;
	int16_t x296 = INT16_MAX;
	int32_t t57 = 2877647;

	t57 = (((x293+x294)+x295)==x296);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MAX;
	volatile int16_t x299 = INT16_MIN;
	volatile int32_t t58 = 4059;

	t58 = (((x297+x298)+x299)==x300);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x301 = INT16_MAX;
	int64_t x302 = INT64_MIN;
	static int64_t x303 = 3044951634130243884LL;
	static int64_t x304 = INT64_MIN;
	int32_t t59 = -1720;

	t59 = (((x301+x302)+x303)==x304);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = 497300134277541063LL;
	int64_t x310 = -1LL;
	volatile int16_t x312 = INT16_MIN;
	int32_t t60 = -25945;

	t60 = (((x309+x310)+x311)==x312);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x313 = 1;
	int8_t x315 = 1;
	uint64_t x316 = UINT64_MAX;

	t61 = (((x313+x314)+x315)==x316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x318 = INT8_MIN;
	uint8_t x319 = UINT8_MAX;
	static int32_t x320 = 563875;
	volatile int32_t t62 = -43247391;

	t62 = (((x317+x318)+x319)==x320);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x322 = INT16_MIN;
	int8_t x323 = -1;
	uint64_t x324 = 86119169LLU;
	volatile int32_t t63 = 218118;

	t63 = (((x321+x322)+x323)==x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x325 = INT16_MIN;
	static uint64_t x326 = UINT64_MAX;
	int64_t x328 = -298414314LL;
	volatile int32_t t64 = 27575217;

	t64 = (((x325+x326)+x327)==x328);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x329 = 57421556977484LL;
	volatile int8_t x330 = -2;
	static volatile uint32_t x331 = 9U;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t65 = 203253;

	t65 = (((x329+x330)+x331)==x332);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x333 = -1;
	volatile int16_t x334 = INT16_MAX;
	uint16_t x335 = 27U;
	uint32_t x336 = 2U;
	static int32_t t66 = 21483016;

	t66 = (((x333+x334)+x335)==x336);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x337 = INT8_MIN;
	int32_t x339 = 1029302109;
	int8_t x340 = INT8_MIN;

	t67 = (((x337+x338)+x339)==x340);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x345 = 31005971200982482LL;
	static int32_t x346 = INT32_MIN;
	uint8_t x347 = 23U;
	uint32_t x348 = UINT32_MAX;
	int32_t t68 = 1604959;

	t68 = (((x345+x346)+x347)==x348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x349 = UINT32_MAX;
	static int64_t x352 = -1LL;
	int32_t t69 = 3;

	t69 = (((x349+x350)+x351)==x352);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x359 = 1939608124150657LL;
	uint8_t x360 = UINT8_MAX;
	int32_t t70 = 45298706;

	t70 = (((x357+x358)+x359)==x360);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x365 = INT64_MAX;
	static int32_t x366 = INT32_MIN;
	int64_t x367 = -7931LL;
	int64_t x368 = INT64_MIN;

	t71 = (((x365+x366)+x367)==x368);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x369 = INT64_MAX;
	uint64_t x370 = 3983158250313LLU;
	int64_t x371 = INT64_MIN;
	static volatile int64_t x372 = -1LL;
	static int32_t t72 = -5;

	t72 = (((x369+x370)+x371)==x372);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x373 = 6U;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = 8U;
	static volatile int32_t t73 = -346418;

	t73 = (((x373+x374)+x375)==x376);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x377 = UINT32_MAX;
	int8_t x378 = INT8_MAX;
	static uint8_t x379 = 3U;
	static int16_t x380 = -1;

	t74 = (((x377+x378)+x379)==x380);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MIN;

	t75 = (((x381+x382)+x383)==x384);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x385 = -1;
	volatile int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	int32_t t76 = -114134145;

	t76 = (((x385+x386)+x387)==x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x393 = INT16_MAX;
	int32_t x394 = -1;
	int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MAX;
	int32_t t77 = -1;

	t77 = (((x393+x394)+x395)==x396);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x397 = 0;
	uint64_t x398 = 10133435497806LLU;
	int32_t x399 = 40211;
	int64_t x400 = 703323573211851648LL;
	int32_t t78 = 278889814;

	t78 = (((x397+x398)+x399)==x400);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x401 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	volatile int32_t t79 = -372426297;

	t79 = (((x401+x402)+x403)==x404);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x405 = -1LL;
	static volatile uint64_t x406 = 7104541LLU;
	static uint8_t x408 = UINT8_MAX;
	volatile int32_t t80 = 77078046;

	t80 = (((x405+x406)+x407)==x408);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x409 = -1LL;
	int64_t x411 = 1994319102081LL;
	uint64_t x412 = UINT64_MAX;
	static int32_t t81 = 2;

	t81 = (((x409+x410)+x411)==x412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x413 = 27U;
	static volatile uint8_t x414 = 37U;
	static uint16_t x415 = 628U;
	int8_t x416 = INT8_MAX;
	int32_t t82 = 7319;

	t82 = (((x413+x414)+x415)==x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x421 = 3959U;
	uint8_t x422 = 7U;
	static uint64_t x424 = 571866600799490016LLU;
	int32_t t83 = 1;

	t83 = (((x421+x422)+x423)==x424);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x426 = -1467;
	static int64_t x427 = -13978995434859LL;
	uint16_t x428 = 31U;
	int32_t t84 = 1605090;

	t84 = (((x425+x426)+x427)==x428);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x429 = -1LL;
	static volatile int8_t x430 = -1;
	int64_t x432 = INT64_MIN;
	static volatile int32_t t85 = 1;

	t85 = (((x429+x430)+x431)==x432);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x433 = -1;
	uint64_t x434 = 829091733762798LLU;
	volatile int8_t x435 = -4;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t86 = 388274138;

	t86 = (((x433+x434)+x435)==x436);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x438 = 1709LLU;
	uint8_t x440 = 58U;
	int32_t t87 = -473497;

	t87 = (((x437+x438)+x439)==x440);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x441 = 26027998U;
	static uint64_t x443 = 90349282056487352LLU;
	volatile int32_t x444 = INT32_MAX;

	t88 = (((x441+x442)+x443)==x444);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x445 = -245669;
	static int8_t x447 = 1;
	static int64_t x448 = 71312823741745LL;
	volatile int32_t t89 = 548726798;

	t89 = (((x445+x446)+x447)==x448);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x449 = 3485390U;
	int16_t x450 = INT16_MIN;
	uint64_t x452 = 129869097LLU;

	t90 = (((x449+x450)+x451)==x452);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x455 = UINT32_MAX;
	int32_t t91 = -51;

	t91 = (((x453+x454)+x455)==x456);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x457 = 22948503;
	uint8_t x458 = UINT8_MAX;
	int16_t x460 = -5;
	volatile int32_t t92 = -166134;

	t92 = (((x457+x458)+x459)==x460);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x461 = 127319LLU;
	int32_t x462 = -1;
	uint8_t x463 = 6U;
	static int32_t x464 = INT32_MIN;
	static int32_t t93 = 2696402;

	t93 = (((x461+x462)+x463)==x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x465 = 1U;
	uint8_t x466 = 3U;
	int32_t x467 = 33836007;
	static volatile int16_t x468 = -1;
	volatile int32_t t94 = -414812127;

	t94 = (((x465+x466)+x467)==x468);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x469 = INT16_MIN;
	int16_t x470 = INT16_MIN;
	int32_t t95 = 31;

	t95 = (((x469+x470)+x471)==x472);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x473 = UINT64_MAX;
	uint8_t x474 = 6U;
	int16_t x475 = 5946;
	static volatile int8_t x476 = INT8_MAX;
	volatile int32_t t96 = -2;

	t96 = (((x473+x474)+x475)==x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x477 = INT32_MIN;
	int64_t x478 = -1LL;
	int8_t x479 = INT8_MIN;
	int16_t x480 = -13901;
	int32_t t97 = 1;

	t97 = (((x477+x478)+x479)==x480);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x481 = 33608;
	int32_t x482 = 1;
	static volatile uint16_t x483 = 28180U;
	static int32_t x484 = 5;

	t98 = (((x481+x482)+x483)==x484);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = -11839976042866652LL;
	uint64_t x486 = 4231195LLU;
	int32_t x488 = INT32_MIN;

	t99 = (((x485+x486)+x487)==x488);

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

