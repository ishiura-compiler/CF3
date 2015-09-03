#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 566336094509977190LLU;
int32_t x10 = -1;
int16_t x12 = INT16_MAX;
static volatile int16_t x13 = INT16_MIN;
volatile int64_t x14 = INT64_MAX;
volatile int64_t t2 = -345216LL;
static volatile int64_t t3 = 672LL;
volatile uint32_t x45 = 1895157U;
uint16_t x48 = UINT16_MAX;
uint16_t x52 = 402U;
volatile int32_t x54 = -1;
static volatile uint16_t x55 = UINT16_MAX;
int8_t x57 = INT8_MIN;
uint32_t x61 = UINT32_MAX;
static int8_t x65 = INT8_MIN;
uint64_t x69 = UINT64_MAX;
int16_t x70 = -1;
uint64_t x74 = 319038101873392LLU;
uint16_t x75 = 56U;
volatile int64_t x86 = -1LL;
uint64_t t18 = 1500333LLU;
volatile uint32_t x95 = UINT32_MAX;
int8_t x96 = 1;
uint8_t x97 = UINT8_MAX;
int8_t x99 = 1;
int8_t x100 = INT8_MIN;
int16_t x106 = 10387;
int16_t x109 = 13731;
uint64_t x111 = 71930LLU;
static volatile uint64_t t25 = 10LLU;
uint8_t x127 = UINT8_MAX;
int32_t t27 = -1;
volatile uint64_t x141 = UINT64_MAX;
int32_t x163 = 207572;
int8_t x169 = 1;
uint64_t x171 = 16LLU;
int8_t x173 = INT8_MIN;
uint64_t t38 = 606116LLU;
int64_t t39 = 131085LL;
int64_t t40 = -45241571649976LL;
static uint64_t x193 = UINT64_MAX;
volatile uint64_t t43 = 189033202915LLU;
int32_t t47 = 2087228;
uint64_t x218 = UINT64_MAX;
int64_t t50 = -24LL;
int16_t x235 = 1364;
int16_t x237 = INT16_MAX;
uint64_t x240 = 101961093205118976LLU;
uint8_t x252 = 1U;
static uint32_t t58 = 1195U;
volatile int64_t x276 = INT64_MIN;
volatile uint64_t x280 = UINT64_MAX;
int64_t t63 = -528LL;
uint32_t x291 = 384700965U;
int16_t x292 = INT16_MIN;
int64_t x301 = -464611040977774319LL;
static uint64_t t68 = 1511695194266679429LLU;
static int64_t x305 = -25667749397284951LL;
uint32_t t70 = 5770240U;
int32_t x314 = INT32_MIN;
static int32_t x315 = INT32_MIN;
int32_t t72 = -804148268;
int32_t x327 = -1;
static volatile uint16_t x332 = 191U;
volatile int32_t x333 = 19957;
int32_t x336 = 2237912;
uint32_t x341 = 500754U;
int64_t x342 = INT64_MIN;
uint32_t x344 = UINT32_MAX;
int8_t x353 = INT8_MIN;
static uint64_t x357 = UINT64_MAX;
int8_t x364 = -1;
int32_t x369 = INT32_MIN;
int32_t t85 = -438;
static int32_t x373 = INT32_MIN;
volatile uint64_t t88 = 34886796761304255LLU;
int16_t x387 = 916;
int16_t x388 = INT16_MIN;
uint16_t x390 = UINT16_MAX;
volatile int32_t x391 = INT32_MIN;
uint8_t x392 = 2U;
int32_t x393 = INT32_MIN;
volatile int8_t x411 = 23;
volatile uint32_t x413 = 7630215U;
int32_t x419 = 2637;
uint8_t x421 = 1U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint64_t x2 = 201479626LLU;
	int8_t x3 = 1;
	int32_t x4 = INT32_MIN;

	t0 = ((x1-(x2%x3))%x4);

	if (t0 != 2147450880LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -721;
	static uint64_t x11 = UINT64_MAX;
	static volatile uint64_t t1 = 4957111LLU;

	t1 = ((x9-(x10%x11))%x12);

	if (t1 != 32062LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x15 = 2125678655404338479LL;
	static int8_t x16 = -1;

	t2 = ((x13-(x14%x15))%x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 1U;
	static volatile int16_t x20 = INT16_MIN;

	t3 = ((x17-(x18%x19))%x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MAX;
	uint8_t x28 = 80U;
	int64_t t4 = -89187376176759873LL;

	t4 = ((x25-(x26%x27))%x28);

	if (t4 != -47LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 19LLU;
	int16_t x30 = INT16_MIN;
	uint8_t x31 = UINT8_MAX;
	static int16_t x32 = -87;
	uint64_t t5 = 1944038717222LLU;

	t5 = ((x29-(x30%x31))%x32);

	if (t5 != 147LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = -4043LL;
	static int32_t x42 = -5019;
	int16_t x43 = INT16_MIN;
	static uint64_t x44 = 56492LLU;
	volatile uint64_t t6 = 6459288342709LLU;

	t6 = ((x41-(x42%x43))%x44);

	if (t6 != 976LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x46 = INT64_MAX;
	int64_t x47 = -38702LL;
	int64_t t7 = -2LL;

	t7 = ((x45-(x46%x47))%x48);

	if (t7 != 24282LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x49 = 1441U;
	uint64_t x50 = 25969853209819462LLU;
	volatile int16_t x51 = INT16_MIN;
	uint64_t t8 = 595465861818LLU;

	t8 = ((x49-(x50%x51))%x52);

	if (t8 != 19LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x53 = 1858U;
	volatile int32_t x56 = INT32_MIN;
	volatile uint32_t t9 = 2300324U;

	t9 = ((x53-(x54%x55))%x56);

	if (t9 != 1859U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x58 = 994;
	uint64_t x59 = 1096775499568211971LLU;
	uint16_t x60 = UINT16_MAX;
	uint64_t t10 = 4603334931290592LLU;

	t10 = ((x57-(x58%x59))%x60);

	if (t10 != 64414LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x62 = 2957;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = -1;
	static volatile uint32_t t11 = 23U;

	t11 = ((x61-(x62%x63))%x64);

	if (t11 != 4294967143U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x66 = 0;
	int16_t x67 = -1;
	int64_t x68 = INT64_MIN;
	int64_t t12 = 115LL;

	t12 = ((x65-(x66%x67))%x68);

	if (t12 != -128LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x71 = 165U;
	static volatile int8_t x72 = INT8_MAX;
	volatile uint64_t t13 = 62LLU;

	t13 = ((x69-(x70%x71))%x72);

	if (t13 != 120LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -1;
	static int16_t x76 = 1;
	uint64_t t14 = 15485818871595LLU;

	t14 = ((x73-(x74%x75))%x76);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x77 = -1;
	volatile int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MAX;
	int32_t x80 = -1;
	volatile int32_t t15 = 10;

	t15 = ((x77-(x78%x79))%x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = UINT64_MAX;
	static int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MAX;
	int32_t x84 = INT32_MIN;
	uint64_t t16 = 122007912872LLU;

	t16 = ((x81-(x82%x83))%x84);

	if (t16 != 7LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = 28;
	uint32_t x87 = 422982U;
	uint8_t x88 = 5U;
	static int64_t t17 = 36LL;

	t17 = ((x85-(x86%x87))%x88);

	if (t17 != 4LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -1;
	uint64_t x90 = 28672758885981LLU;
	static uint8_t x91 = 2U;
	volatile int64_t x92 = INT64_MAX;

	t18 = ((x89-(x90%x91))%x92);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	static volatile int64_t x94 = INT64_MIN;
	volatile int64_t t19 = -13LL;

	t19 = ((x93-(x94%x95))%x96);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x98 = -2902;
	int32_t t20 = -128294;

	t20 = ((x97-(x98%x99))%x100);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	static int64_t x102 = -1LL;
	int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MAX;
	volatile int64_t t21 = 231782555434158LL;

	t21 = ((x101-(x102%x103))%x104);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = 0U;
	int16_t x107 = 1801;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t22 = 387301567;

	t22 = ((x105-(x106%x107))%x108);

	if (t22 != -107) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x110 = INT64_MIN;
	static int16_t x112 = INT16_MIN;
	static volatile uint64_t t23 = 900846LLU;

	t23 = ((x109-(x110%x111))%x112);

	if (t23 != 18446744073709498789LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = -2;
	uint32_t x114 = 11776652U;
	volatile uint32_t x115 = UINT32_MAX;
	int32_t x116 = INT32_MIN;
	uint32_t t24 = 3484U;

	t24 = ((x113-(x114%x115))%x116);

	if (t24 != 2135706994U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = 1;
	static volatile uint32_t x118 = 7527U;
	uint64_t x119 = 32996LLU;
	uint16_t x120 = UINT16_MAX;

	t25 = ((x117-(x118%x119))%x120);

	if (t25 != 58010LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -366194088049553551LL;
	int64_t x122 = -2750LL;
	static uint8_t x123 = 1U;
	int32_t x124 = -349;
	int64_t t26 = 194236337971307404LL;

	t26 = ((x121-(x122%x123))%x124);

	if (t26 != -184LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MIN;
	volatile uint16_t x126 = UINT16_MAX;
	static int16_t x128 = -1;

	t27 = ((x125-(x126%x127))%x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x133 = 85659483U;
	uint16_t x134 = 0U;
	uint8_t x135 = 6U;
	volatile int8_t x136 = -8;
	uint32_t t28 = 225323U;

	t28 = ((x133-(x134%x135))%x136);

	if (t28 != 85659483U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 49896LLU;
	int64_t x138 = INT64_MAX;
	static int8_t x139 = INT8_MIN;
	volatile int64_t x140 = INT64_MAX;
	volatile uint64_t t29 = 425LLU;

	t29 = ((x137-(x138%x139))%x140);

	if (t29 != 49769LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x142 = -1;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = 196961995U;
	uint64_t t30 = 16760823185649LLU;

	t30 = ((x141-(x142%x143))%x144);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MIN;
	static int8_t x146 = -2;
	uint16_t x147 = UINT16_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t31 = 168U;

	t31 = ((x145-(x146%x147))%x148);

	if (t31 != 2147483650U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x149 = 17;
	int8_t x150 = 3;
	uint64_t x151 = 1026196LLU;
	int16_t x152 = INT16_MAX;
	uint64_t t32 = 52982LLU;

	t32 = ((x149-(x150%x151))%x152);

	if (t32 != 14LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = 6237199785615040241LLU;
	int8_t x154 = -59;
	uint8_t x155 = 20U;
	int8_t x156 = -1;
	static volatile uint64_t t33 = 14078LLU;

	t33 = ((x153-(x154%x155))%x156);

	if (t33 != 6237199785615040260LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -38;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	uint32_t x160 = 27U;
	static uint32_t t34 = 1159856004U;

	t34 = ((x157-(x158%x159))%x160);

	if (t34 != 9U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = -133297015677738LL;
	uint16_t x162 = UINT16_MAX;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t35 = 942228LL;

	t35 = ((x161-(x162%x163))%x164);

	if (t35 != -133297015743273LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MIN;
	uint64_t x166 = 846734669LLU;
	static uint32_t x167 = 507U;
	volatile int64_t x168 = INT64_MIN;
	static uint64_t t36 = 650314LLU;

	t36 = ((x165-(x166%x167))%x168);

	if (t36 != 9223372036854775755LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x170 = 199062U;
	uint16_t x172 = 24U;
	volatile uint64_t t37 = 13210665251LLU;

	t37 = ((x169-(x170%x171))%x172);

	if (t37 != 11LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x174 = 15353425288LLU;
	int16_t x175 = 25;
	volatile int8_t x176 = 28;

	t38 = ((x173-(x174%x175))%x176);

	if (t38 != 15LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x177 = -22963790166LL;
	uint8_t x178 = 1U;
	uint16_t x179 = UINT16_MAX;
	int16_t x180 = INT16_MAX;

	t39 = ((x177-(x178%x179))%x180);

	if (t39 != -21227LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = 9U;
	int64_t x182 = -132767311LL;
	int32_t x183 = INT32_MAX;
	volatile uint32_t x184 = 217U;

	t40 = ((x181-(x182%x183))%x184);

	if (t40 != 210LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	uint8_t x186 = 1U;
	static int8_t x187 = -49;
	int32_t x188 = INT32_MAX;
	volatile int32_t t41 = 1641919;

	t41 = ((x185-(x186%x187))%x188);

	if (t41 != -129) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x189 = -55;
	uint16_t x190 = 3U;
	volatile uint16_t x191 = 57U;
	int8_t x192 = INT8_MAX;
	int32_t t42 = -1478394;

	t42 = ((x189-(x190%x191))%x192);

	if (t42 != -58) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x194 = INT32_MIN;
	int32_t x195 = -1;
	static uint64_t x196 = UINT64_MAX;

	t43 = ((x193-(x194%x195))%x196);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = 689;
	int32_t x198 = -1;
	int32_t x199 = INT32_MIN;
	uint16_t x200 = 1U;
	int32_t t44 = -1;

	t44 = ((x197-(x198%x199))%x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x201 = INT8_MIN;
	uint16_t x202 = 1341U;
	static int16_t x203 = 118;
	static int32_t x204 = INT32_MIN;
	int32_t t45 = -156673674;

	t45 = ((x201-(x202%x203))%x204);

	if (t45 != -171) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = -1;
	int64_t x206 = 3653LL;
	int64_t x207 = -496444864279471464LL;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t46 = 396443698408LLU;

	t46 = ((x205-(x206%x207))%x208);

	if (t46 != 18446744073709547962LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = 0U;
	static int16_t x210 = 5;
	int32_t x211 = INT32_MAX;
	volatile int16_t x212 = -1;

	t47 = ((x209-(x210%x211))%x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MAX;
	volatile uint16_t x214 = 605U;
	int16_t x215 = 1;
	int32_t x216 = INT32_MIN;
	static int32_t t48 = INT32_MAX;

	t48 = ((x213-(x214%x215))%x216);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x217 = -1;
	int32_t x219 = 45;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t49 = 58LLU;

	t49 = ((x217-(x218%x219))%x220);

	if (t49 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x225 = INT32_MIN;
	static int64_t x226 = INT64_MIN;
	static int32_t x227 = 22351;
	int8_t x228 = -1;

	t50 = ((x225-(x226%x227))%x228);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = 156835252848LL;
	int8_t x230 = -19;
	uint16_t x231 = 1U;
	static volatile int64_t x232 = INT64_MIN;
	int64_t t51 = -4096095LL;

	t51 = ((x229-(x230%x231))%x232);

	if (t51 != 156835252848LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x233 = 86732U;
	static int16_t x234 = -1;
	volatile int16_t x236 = 10098;
	static volatile uint32_t t52 = 78436U;

	t52 = ((x233-(x234%x235))%x236);

	if (t52 != 5949U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x238 = UINT32_MAX;
	static uint32_t x239 = UINT32_MAX;
	uint64_t t53 = 248LLU;

	t53 = ((x237-(x238%x239))%x240);

	if (t53 != 32767LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = 4;
	int64_t x242 = INT64_MIN;
	uint64_t x243 = 1306LLU;
	int8_t x244 = INT8_MAX;
	uint64_t t54 = 7041290LLU;

	t54 = ((x241-(x242%x243))%x244);

	if (t54 != 86LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 74859U;
	volatile int8_t x246 = INT8_MIN;
	int32_t x247 = -12205243;
	uint32_t x248 = 499409U;
	volatile uint32_t t55 = 130753U;

	t55 = ((x245-(x246%x247))%x248);

	if (t55 != 74987U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x249 = 6U;
	uint8_t x250 = 0U;
	int16_t x251 = INT16_MIN;
	volatile int32_t t56 = -475053;

	t56 = ((x249-(x250%x251))%x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x253 = 1LLU;
	int32_t x254 = INT32_MIN;
	uint64_t x255 = 103174LLU;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t57 = 319487LLU;

	t57 = ((x253-(x254%x255))%x256);

	if (t57 != 9223372036854754769LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 3265U;
	uint32_t x258 = UINT32_MAX;
	volatile int32_t x259 = -753545489;
	uint32_t x260 = 72U;

	t58 = ((x257-(x258%x259))%x260);

	if (t58 != 25U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	volatile int64_t t59 = -202293470850761263LL;

	t59 = ((x261-(x262%x263))%x264);

	if (t59 != -32640LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 6U;
	volatile uint8_t x266 = 0U;
	static int16_t x267 = INT16_MIN;
	static volatile int8_t x268 = INT8_MAX;
	volatile int32_t t60 = -1729631;

	t60 = ((x265-(x266%x267))%x268);

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = -1LL;
	int32_t x274 = INT32_MIN;
	static volatile uint16_t x275 = 8614U;
	volatile int64_t t61 = 12167LL;

	t61 = ((x273-(x274%x275))%x276);

	if (t61 != 4833LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x277 = 1U;
	uint8_t x278 = 1U;
	static int8_t x279 = -48;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x277-(x278%x279))%x280);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	uint16_t x282 = 125U;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = UINT16_MAX;

	t63 = ((x281-(x282%x283))%x284);

	if (t63 != -32893LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x285 = UINT16_MAX;
	static int16_t x286 = -1731;
	uint16_t x287 = 21097U;
	uint16_t x288 = UINT16_MAX;
	int32_t t64 = 117;

	t64 = ((x285-(x286%x287))%x288);

	if (t64 != 1731) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = -238;
	int8_t x290 = 42;
	uint32_t t65 = 4317U;

	t65 = ((x289-(x290%x291))%x292);

	if (t65 != 32488U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = -8;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = -1;
	int32_t t66 = 76239806;

	t66 = ((x293-(x294%x295))%x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -1;
	int8_t x298 = -13;
	static int8_t x299 = -6;
	int8_t x300 = -33;
	int32_t t67 = -21;

	t67 = ((x297-(x298%x299))%x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x302 = 1570350619823397006LLU;
	volatile int32_t x303 = -1;
	volatile int16_t x304 = INT16_MIN;

	t68 = ((x301-(x302%x303))%x304);

	if (t68 != 16411782412908380291LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x306 = 475648LLU;
	int64_t x307 = INT64_MIN;
	int32_t x308 = INT32_MAX;
	uint64_t t69 = 1240301321531LLU;

	t69 = ((x305-(x306%x307))%x308);

	if (t69 != 1648366671LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = -2512348;
	uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MAX;
	uint16_t x312 = UINT16_MAX;

	t70 = ((x309-(x310%x311))%x312);

	if (t70 != 43517U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x313 = UINT64_MAX;
	uint64_t x316 = UINT64_MAX;
	uint64_t t71 = 16861965629534LLU;

	t71 = ((x313-(x314%x315))%x316);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x317 = -2234236;
	static int16_t x318 = -9;
	uint8_t x319 = 91U;
	volatile int32_t x320 = INT32_MIN;

	t72 = ((x317-(x318%x319))%x320);

	if (t72 != -2234227) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x321 = 1;
	static int32_t x322 = INT32_MAX;
	static int32_t x323 = -1;
	int16_t x324 = 287;
	static int32_t t73 = 109;

	t73 = ((x321-(x322%x323))%x324);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = 731;
	int8_t x326 = 53;
	int8_t x328 = INT8_MIN;
	int32_t t74 = 236220;

	t74 = ((x325-(x326%x327))%x328);

	if (t74 != 91) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = 0;
	static int64_t x331 = -1LL;
	int64_t t75 = 1372843335428153939LL;

	t75 = ((x329-(x330%x331))%x332);

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x334 = INT16_MIN;
	static volatile int8_t x335 = 16;
	volatile int32_t t76 = 5072698;

	t76 = ((x333-(x334%x335))%x336);

	if (t76 != 19957) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x338 = 12937144761007LLU;
	int32_t x339 = -1677345;
	volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t77 = 239754695LLU;

	t77 = ((x337-(x338%x339))%x340);

	if (t77 != 18446731136564757841LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x343 = 1;
	int64_t t78 = -27LL;

	t78 = ((x341-(x342%x343))%x344);

	if (t78 != 500754LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = INT64_MAX;
	volatile int8_t x346 = INT8_MAX;
	static int8_t x347 = INT8_MIN;
	static uint64_t x348 = 39532LLU;
	static uint64_t t79 = 31726229363793LLU;

	t79 = ((x345-(x346%x347))%x348);

	if (t79 != 4492LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x349 = -1LL;
	static int32_t x350 = -1;
	uint8_t x351 = 15U;
	volatile int32_t x352 = -110540;
	static volatile int64_t t80 = 3271LL;

	t80 = ((x349-(x350%x351))%x352);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x354 = UINT16_MAX;
	static int16_t x355 = -1;
	int64_t x356 = -4338945691LL;
	int64_t t81 = 0LL;

	t81 = ((x353-(x354%x355))%x356);

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x358 = 109U;
	int16_t x359 = -1;
	int32_t x360 = 384;
	volatile uint64_t t82 = 58LLU;

	t82 = ((x357-(x358%x359))%x360);

	if (t82 != 255LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x361 = 1;
	static uint16_t x362 = UINT16_MAX;
	int32_t x363 = -131187;
	static int32_t t83 = 58888742;

	t83 = ((x361-(x362%x363))%x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = -13;
	static int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	uint64_t x368 = 869LLU;
	uint64_t t84 = 4080749642092LLU;

	t84 = ((x365-(x366%x367))%x368);

	if (t84 != 828LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x370 = 0;
	static int32_t x371 = -1;
	static int32_t x372 = -154412;

	t85 = ((x369-(x370%x371))%x372);

	if (t85 != -75964) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x374 = 6U;
	int32_t x375 = 39293810;
	uint16_t x376 = 3U;
	uint32_t t86 = 6U;

	t86 = ((x373-(x374%x375))%x376);

	if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = 0;
	uint64_t x378 = 405085LLU;
	static volatile int32_t x379 = -1;
	volatile uint32_t x380 = 3652U;
	volatile uint64_t t87 = 35445759LLU;

	t87 = ((x377-(x378%x379))%x380);

	if (t87 != 655LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	int32_t x383 = 31132;
	uint32_t x384 = 494999251U;

	t88 = ((x381-(x382%x383))%x384);

	if (t88 != 128916648LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x385 = INT32_MAX;
	uint16_t x386 = 4U;
	int32_t t89 = 31;

	t89 = ((x385-(x386%x387))%x388);

	if (t89 != 32763) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x389 = 3U;
	int32_t t90 = -1;

	t90 = ((x389-(x390%x391))%x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x394 = INT32_MIN;
	int16_t x395 = -1;
	static int64_t x396 = INT64_MIN;
	static int64_t t91 = 968885690248LL;

	t91 = ((x393-(x394%x395))%x396);

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x397 = 14073699789LL;
	int16_t x398 = -1;
	volatile uint64_t x399 = 7701653672401LLU;
	volatile int16_t x400 = INT16_MAX;
	volatile uint64_t t92 = 30LLU;

	t92 = ((x397-(x398%x399))%x400);

	if (t92 != 8163LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = -114792459873LL;
	int16_t x406 = INT16_MAX;
	static volatile int64_t x407 = INT64_MAX;
	int8_t x408 = INT8_MIN;
	int64_t t93 = 3LL;

	t93 = ((x405-(x406%x407))%x408);

	if (t93 != -96LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x409 = 0LL;
	uint64_t x410 = UINT64_MAX;
	int64_t x412 = INT64_MIN;
	static volatile uint64_t t94 = 10842727190047695LLU;

	t94 = ((x409-(x410%x411))%x412);

	if (t94 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x414 = INT8_MIN;
	static int32_t x415 = -6798954;
	int16_t x416 = INT16_MIN;
	uint32_t t95 = 514440U;

	t95 = ((x413-(x414%x415))%x416);

	if (t95 != 7630343U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = 15U;
	uint8_t x418 = 113U;
	volatile int16_t x420 = -90;
	volatile uint32_t t96 = 10900347U;

	t96 = ((x417-(x418%x419))%x420);

	if (t96 != 4294967198U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x422 = 5489163U;
	volatile int32_t x423 = INT32_MAX;
	int16_t x424 = INT16_MIN;
	volatile uint32_t t97 = 1889U;

	t97 = ((x421-(x422%x423))%x424);

	if (t97 != 4289478134U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = 6859152U;
	int16_t x426 = INT16_MIN;
	uint64_t x427 = UINT64_MAX;
	uint32_t x428 = UINT32_MAX;
	static uint64_t t98 = 1473310627423LLU;

	t98 = ((x425-(x426%x427))%x428);

	if (t98 != 6891920LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = INT16_MAX;
	volatile int64_t x430 = -146LL;
	volatile uint64_t x431 = 59450403064164906LLU;
	int64_t x432 = 1652LL;
	uint64_t t99 = 359127779613169358LLU;

	t99 = ((x429-(x430%x431))%x432);

	if (t99 != 1601LLU) { NG(); } else { ; }
	
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

