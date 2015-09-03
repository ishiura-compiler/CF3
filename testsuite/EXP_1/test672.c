#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = UINT16_MAX;
int16_t x14 = -2;
uint64_t x21 = UINT64_MAX;
int64_t x23 = 1LL;
static int32_t t5 = -115381;
int32_t t6 = 1953276;
static int64_t x31 = INT64_MAX;
static int64_t x36 = INT64_MIN;
static int16_t x42 = -193;
volatile int32_t t11 = -319367;
uint8_t x56 = 8U;
volatile int32_t x63 = INT32_MAX;
uint8_t x65 = UINT8_MAX;
volatile uint64_t x70 = 287188290246826081LLU;
int32_t x73 = 681;
int16_t x78 = -1;
static volatile uint16_t x80 = UINT16_MAX;
uint32_t x82 = 14U;
int8_t x85 = -1;
static int32_t x86 = -129436;
volatile uint64_t x88 = 16727588624714LLU;
volatile int32_t t20 = 862;
static int8_t x94 = INT8_MIN;
int16_t x96 = INT16_MAX;
int32_t t22 = 890750;
int8_t x100 = INT8_MAX;
volatile int32_t t23 = 69129;
volatile uint8_t x106 = 5U;
int32_t x109 = -1;
int32_t x110 = INT32_MAX;
int32_t t27 = 100;
int8_t x119 = INT8_MIN;
int32_t x131 = -1;
int8_t x133 = -2;
uint32_t x141 = UINT32_MAX;
int64_t x149 = -109793107LL;
int64_t x151 = -2508962232571LL;
volatile int32_t t35 = -8;
int16_t x156 = INT16_MIN;
volatile int16_t x157 = INT16_MIN;
int64_t x164 = -7LL;
uint16_t x168 = UINT16_MAX;
volatile int32_t t39 = -6;
volatile int64_t x176 = INT64_MIN;
uint64_t x177 = 229538LLU;
volatile uint32_t x178 = UINT32_MAX;
int8_t x182 = INT8_MAX;
int64_t x184 = INT64_MIN;
int16_t x186 = 8;
int16_t x192 = INT16_MAX;
int8_t x193 = INT8_MIN;
volatile int32_t t47 = 160611;
static uint8_t x204 = 17U;
int32_t t49 = 3381712;
static int8_t x223 = INT8_MAX;
volatile int64_t x227 = -20772223595610LL;
int32_t x232 = 599;
static int8_t x250 = -9;
uint64_t x253 = 0LLU;
static volatile int8_t x259 = 8;
volatile uint16_t x260 = 175U;
volatile uint16_t x263 = 7835U;
int32_t x268 = -1;
int8_t x276 = INT8_MIN;
uint64_t x279 = UINT64_MAX;
int32_t x284 = INT32_MIN;
int32_t t66 = -5290703;
int16_t x292 = INT16_MIN;
int32_t t67 = -252;
uint64_t x308 = 232243LLU;
volatile int32_t x314 = INT32_MIN;
volatile int32_t x317 = -609;
volatile uint64_t x331 = 1255797700910979214LLU;
int64_t x333 = 381368LL;
static uint32_t x338 = UINT32_MAX;
static int8_t x340 = -56;
int8_t x342 = 1;
int64_t x346 = 2LL;
volatile int64_t x348 = 39236427LL;
volatile uint16_t x351 = UINT16_MAX;
int16_t x353 = INT16_MAX;
int32_t t82 = -362;
static volatile int8_t x359 = INT8_MIN;
volatile int32_t t83 = -8041;
volatile int8_t x362 = -1;
int16_t x367 = -1;
uint8_t x369 = UINT8_MAX;
int8_t x374 = -1;
static uint64_t x375 = 26929958LLU;
static volatile int8_t x379 = INT8_MIN;
volatile int32_t t88 = -480386985;
int32_t x383 = -1;
volatile uint32_t x398 = UINT32_MAX;
volatile uint32_t x405 = 2614519U;
int64_t x406 = INT64_MIN;
static volatile int64_t x407 = INT64_MAX;
int16_t x412 = 7;
int64_t x417 = INT64_MAX;
int16_t x418 = 3;
int32_t x420 = INT32_MIN;
int32_t t97 = -247427;
int32_t x421 = INT32_MIN;
int16_t x426 = -1;
int16_t x427 = INT16_MAX;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MIN;
	static int16_t x3 = INT16_MIN;
	static int64_t x4 = -1LL;
	volatile int32_t t0 = 1974;

	t0 = (((x1/x2)^x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	volatile uint16_t x7 = 2544U;
	volatile int32_t x8 = -8;
	static volatile int32_t t1 = -31;

	t1 = (((x5/x6)^x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MAX;
	int32_t x11 = INT32_MIN;
	uint32_t x12 = 3U;
	static int32_t t2 = 714487;

	t2 = (((x9/x10)^x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int32_t x15 = -867400789;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 8;

	t3 = (((x13/x14)^x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	static uint32_t x20 = 152U;
	static int32_t t4 = 5827;

	t4 = (((x17/x18)^x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x22 = 357130LLU;
	uint32_t x24 = 2904U;

	t5 = (((x21/x22)^x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 254907606;
	volatile uint16_t x26 = 7455U;
	int8_t x27 = -12;
	static uint32_t x28 = 21U;

	t6 = (((x25/x26)^x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 26104U;
	static int16_t x30 = INT16_MIN;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 13576;

	t7 = (((x29/x30)^x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 951376587227559264LLU;
	static volatile uint32_t x34 = 12220411U;
	int16_t x35 = INT16_MIN;
	int32_t t8 = -775268;

	t8 = (((x33/x34)^x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 41U;
	uint8_t x38 = 4U;
	volatile int32_t x39 = INT32_MIN;
	int32_t x40 = 396;
	int32_t t9 = -9;

	t9 = (((x37/x38)^x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	static int32_t x43 = INT32_MIN;
	static int16_t x44 = 114;
	volatile int32_t t10 = 311043;

	t10 = (((x41/x42)^x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 58386U;
	volatile int16_t x50 = INT16_MIN;
	int16_t x51 = -1;
	volatile uint32_t x52 = UINT32_MAX;

	t11 = (((x49/x50)^x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = 50U;
	int32_t x55 = -30585;
	volatile int32_t t12 = 1;

	t12 = (((x53/x54)^x55)<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = 995;
	volatile int8_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = -468;
	int32_t t13 = -477983;

	t13 = (((x57/x58)^x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x61 = 1;
	int64_t x62 = INT64_MIN;
	int32_t x64 = 2;
	volatile int32_t t14 = -29;

	t14 = (((x61/x62)^x63)<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = 68;
	int32_t x67 = INT32_MAX;
	uint8_t x68 = 2U;
	volatile int32_t t15 = -69500742;

	t15 = (((x65/x66)^x67)<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = -1;
	int8_t x71 = INT8_MIN;
	int8_t x72 = -30;
	int32_t t16 = 62595757;

	t16 = (((x69/x70)^x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x74 = INT16_MAX;
	static int32_t x75 = INT32_MIN;
	uint8_t x76 = 6U;
	int32_t t17 = -165;

	t17 = (((x73/x74)^x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 42;
	int16_t x79 = -1;
	int32_t t18 = 1;

	t18 = (((x77/x78)^x79)<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = UINT8_MAX;
	int32_t x83 = INT32_MIN;
	volatile int8_t x84 = INT8_MIN;
	int32_t t19 = -38;

	t19 = (((x81/x82)^x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x87 = UINT16_MAX;

	t20 = (((x85/x86)^x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	static volatile int8_t x90 = 1;
	int64_t x91 = 1025LL;
	uint16_t x92 = 55U;
	static volatile int32_t t21 = 975;

	t21 = (((x89/x90)^x91)<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = -1558;
	int64_t x95 = INT64_MIN;

	t22 = (((x93/x94)^x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -8;
	int32_t x98 = INT32_MIN;
	uint16_t x99 = 2U;

	t23 = (((x97/x98)^x99)<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = INT8_MAX;
	static volatile int64_t x102 = INT64_MIN;
	uint32_t x103 = 2968U;
	static uint64_t x104 = 347416549465958471LLU;
	volatile int32_t t24 = 1971466;

	t24 = (((x101/x102)^x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 53U;
	static uint64_t x107 = 26LLU;
	int32_t x108 = -1;
	volatile int32_t t25 = 244;

	t25 = (((x105/x106)^x107)<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x111 = INT64_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t26 = -389616;

	t26 = (((x109/x110)^x111)<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = INT32_MIN;
	int64_t x114 = 253769872121647LL;
	int8_t x115 = 0;
	uint8_t x116 = 94U;

	t27 = (((x113/x114)^x115)<x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	static int64_t x118 = -6219110965983LL;
	int8_t x120 = INT8_MIN;
	int32_t t28 = 85264;

	t28 = (((x117/x118)^x119)<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 13974U;
	int16_t x122 = -1;
	volatile int32_t x123 = INT32_MIN;
	volatile int16_t x124 = INT16_MAX;
	static volatile int32_t t29 = 0;

	t29 = (((x121/x122)^x123)<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 3293333447233LLU;
	int16_t x126 = INT16_MAX;
	int32_t x127 = INT32_MIN;
	int8_t x128 = 13;
	volatile int32_t t30 = 1770;

	t30 = (((x125/x126)^x127)<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = 4;
	int64_t x130 = 1LL;
	volatile uint64_t x132 = 11717083LLU;
	int32_t t31 = -7812;

	t31 = (((x129/x130)^x131)<x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x134 = 3LLU;
	volatile uint64_t x135 = UINT64_MAX;
	volatile int64_t x136 = INT64_MIN;
	volatile int32_t t32 = 0;

	t32 = (((x133/x134)^x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x142 = 345548908U;
	int32_t x143 = -1;
	int64_t x144 = INT64_MIN;
	volatile int32_t t33 = -3012885;

	t33 = (((x141/x142)^x143)<x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x145 = 10901669747377310LLU;
	uint8_t x146 = 7U;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -320;
	volatile int32_t t34 = -388997;

	t34 = (((x145/x146)^x147)<x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x150 = -1LL;
	int32_t x152 = -1;

	t35 = (((x149/x150)^x151)<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MAX;
	uint8_t x155 = 1U;
	volatile int32_t t36 = -29709317;

	t36 = (((x153/x154)^x155)<x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x158 = 6197LLU;
	static int32_t x159 = -13;
	uint32_t x160 = 1U;
	static int32_t t37 = -2665425;

	t37 = (((x157/x158)^x159)<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -1;
	int32_t x162 = INT32_MAX;
	static int8_t x163 = INT8_MAX;
	static int32_t t38 = 1999;

	t38 = (((x161/x162)^x163)<x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = INT16_MIN;
	volatile uint32_t x167 = UINT32_MAX;

	t39 = (((x165/x166)^x167)<x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = 2LL;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 11667959301095954LLU;
	static int8_t x172 = INT8_MAX;
	static int32_t t40 = 26668978;

	t40 = (((x169/x170)^x171)<x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = 14U;
	static int64_t x174 = INT64_MIN;
	int8_t x175 = -1;
	static volatile int32_t t41 = 3245;

	t41 = (((x173/x174)^x175)<x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x179 = 20155U;
	uint64_t x180 = UINT64_MAX;
	int32_t t42 = -2266;

	t42 = (((x177/x178)^x179)<x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 57U;
	int16_t x183 = INT16_MAX;
	int32_t t43 = -498437;

	t43 = (((x181/x182)^x183)<x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x185 = -1LL;
	volatile int64_t x187 = INT64_MIN;
	uint32_t x188 = 44249U;
	static int32_t t44 = 326;

	t44 = (((x185/x186)^x187)<x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x189 = 0;
	int16_t x190 = INT16_MIN;
	volatile int32_t x191 = -708659;
	int32_t t45 = 672860;

	t45 = (((x189/x190)^x191)<x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x194 = UINT8_MAX;
	int8_t x195 = INT8_MAX;
	uint64_t x196 = 73220983891LLU;
	int32_t t46 = -2;

	t46 = (((x193/x194)^x195)<x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 71755LLU;
	static int32_t x198 = 3;
	uint16_t x199 = 0U;
	uint64_t x200 = UINT64_MAX;

	t47 = (((x197/x198)^x199)<x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x201 = -1;
	int32_t x202 = -1;
	volatile uint64_t x203 = 79729896LLU;
	int32_t t48 = -392;

	t48 = (((x201/x202)^x203)<x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = 7116089LL;
	int32_t x207 = -109;
	int32_t x208 = INT32_MIN;

	t49 = (((x205/x206)^x207)<x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 44LLU;
	volatile uint8_t x222 = UINT8_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t50 = 11468477;

	t50 = (((x221/x222)^x223)<x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	uint8_t x226 = UINT8_MAX;
	static int64_t x228 = -14675507LL;
	int32_t t51 = 0;

	t51 = (((x225/x226)^x227)<x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x229 = 444LLU;
	uint16_t x230 = 685U;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t t52 = -50359;

	t52 = (((x229/x230)^x231)<x232);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x233 = INT32_MIN;
	uint8_t x234 = 43U;
	int64_t x235 = 10772379314LL;
	int8_t x236 = 2;
	volatile int32_t t53 = -5904164;

	t53 = (((x233/x234)^x235)<x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -12997;
	int64_t x238 = 124015529909625LL;
	int32_t x239 = -139149452;
	int32_t x240 = -1;
	int32_t t54 = -3728936;

	t54 = (((x237/x238)^x239)<x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x241 = UINT32_MAX;
	int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	volatile int32_t x244 = INT32_MAX;
	volatile int32_t t55 = 185581501;

	t55 = (((x241/x242)^x243)<x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	volatile int64_t x246 = -1LL;
	uint16_t x247 = 3U;
	uint8_t x248 = 0U;
	int32_t t56 = -83767;

	t56 = (((x245/x246)^x247)<x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x249 = 143852461U;
	static uint64_t x251 = 3519770594LLU;
	uint32_t x252 = 16U;
	static volatile int32_t t57 = -595050;

	t57 = (((x249/x250)^x251)<x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x254 = UINT16_MAX;
	uint64_t x255 = UINT64_MAX;
	volatile uint32_t x256 = 492013U;
	volatile int32_t t58 = 125510;

	t58 = (((x253/x254)^x255)<x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	volatile int32_t t59 = -60;

	t59 = (((x257/x258)^x259)<x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x261 = 232U;
	uint8_t x262 = UINT8_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t60 = -1;

	t60 = (((x261/x262)^x263)<x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = 1;
	uint32_t x266 = UINT32_MAX;
	static int16_t x267 = INT16_MIN;
	int32_t t61 = -376285465;

	t61 = (((x265/x266)^x267)<x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x269 = 338U;
	int64_t x270 = -1LL;
	int32_t x271 = 16106035;
	int64_t x272 = -510794638855LL;
	int32_t t62 = 364960289;

	t62 = (((x269/x270)^x271)<x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x273 = -85032;
	int32_t x274 = -1;
	volatile int64_t x275 = -1LL;
	int32_t t63 = 10072;

	t63 = (((x273/x274)^x275)<x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x277 = 20448528U;
	uint8_t x278 = 127U;
	int8_t x280 = INT8_MIN;
	int32_t t64 = 100;

	t64 = (((x277/x278)^x279)<x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 89U;
	int32_t x282 = -6369;
	int32_t x283 = -112;
	volatile int32_t t65 = -6892842;

	t65 = (((x281/x282)^x283)<x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x285 = -1912;
	uint8_t x286 = 1U;
	int32_t x287 = INT32_MAX;
	static int16_t x288 = INT16_MAX;

	t66 = (((x285/x286)^x287)<x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = -56274347LL;
	int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;

	t67 = (((x289/x290)^x291)<x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x293 = UINT8_MAX;
	int16_t x294 = -1;
	volatile uint16_t x295 = 372U;
	uint8_t x296 = 0U;
	volatile int32_t t68 = 746235048;

	t68 = (((x293/x294)^x295)<x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x301 = 1901LL;
	uint32_t x302 = 1231U;
	int64_t x303 = INT64_MIN;
	int16_t x304 = 13107;
	volatile int32_t t69 = -1259;

	t69 = (((x301/x302)^x303)<x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MAX;
	static uint16_t x306 = 1U;
	volatile int32_t x307 = 62258848;
	static volatile int32_t t70 = 91387416;

	t70 = (((x305/x306)^x307)<x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x309 = 278956724078517LLU;
	int64_t x310 = INT64_MAX;
	uint8_t x311 = UINT8_MAX;
	volatile int32_t x312 = INT32_MIN;
	static int32_t t71 = -5398;

	t71 = (((x309/x310)^x311)<x312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 5991734274259030LLU;
	static int8_t x315 = -1;
	volatile uint64_t x316 = 811975498567871LLU;
	int32_t t72 = -18;

	t72 = (((x313/x314)^x315)<x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x318 = -48;
	int16_t x319 = INT16_MIN;
	uint8_t x320 = 5U;
	int32_t t73 = 379292426;

	t73 = (((x317/x318)^x319)<x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x321 = 50U;
	uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = 615;
	int64_t x324 = INT64_MAX;
	int32_t t74 = -2740468;

	t74 = (((x321/x322)^x323)<x324);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x325 = UINT8_MAX;
	int16_t x326 = -14449;
	volatile int64_t x327 = INT64_MAX;
	uint8_t x328 = 27U;
	volatile int32_t t75 = -54;

	t75 = (((x325/x326)^x327)<x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x329 = INT8_MIN;
	static int64_t x330 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	int32_t t76 = -53481548;

	t76 = (((x329/x330)^x331)<x332);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x334 = -29;
	volatile int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t77 = 2;

	t77 = (((x333/x334)^x335)<x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MIN;
	int32_t x339 = -1;
	int32_t t78 = 31833;

	t78 = (((x337/x338)^x339)<x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 222974540U;
	int8_t x343 = INT8_MIN;
	static volatile uint16_t x344 = 10057U;
	int32_t t79 = -9622381;

	t79 = (((x341/x342)^x343)<x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x345 = 481263629U;
	static int16_t x347 = -1;
	volatile int32_t t80 = 3779488;

	t80 = (((x345/x346)^x347)<x348);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MAX;
	uint64_t x350 = 68628897673523LLU;
	volatile int64_t x352 = -467202LL;
	volatile int32_t t81 = -15;

	t81 = (((x349/x350)^x351)<x352);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x354 = INT64_MAX;
	int32_t x355 = 9;
	volatile int8_t x356 = -1;

	t82 = (((x353/x354)^x355)<x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x357 = -1LL;
	int16_t x358 = INT16_MAX;
	int32_t x360 = INT32_MIN;

	t83 = (((x357/x358)^x359)<x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = INT32_MAX;
	uint16_t x363 = UINT16_MAX;
	volatile uint64_t x364 = 2115128237296851738LLU;
	int32_t t84 = -5534000;

	t84 = (((x361/x362)^x363)<x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x365 = -1;
	int32_t x366 = INT32_MIN;
	int32_t x368 = -1408;
	int32_t t85 = -517415;

	t85 = (((x365/x366)^x367)<x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x370 = 22U;
	static int16_t x371 = -14071;
	static int32_t x372 = INT32_MIN;
	int32_t t86 = -116179;

	t86 = (((x369/x370)^x371)<x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = -1;
	static uint8_t x376 = 1U;
	volatile int32_t t87 = -97387587;

	t87 = (((x373/x374)^x375)<x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = -16;
	uint16_t x378 = UINT16_MAX;
	static int8_t x380 = INT8_MIN;

	t88 = (((x377/x378)^x379)<x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = 2;
	int16_t x384 = 5;
	static int32_t t89 = 101702;

	t89 = (((x381/x382)^x383)<x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x389 = 24;
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = INT16_MAX;
	static uint32_t x392 = UINT32_MAX;
	int32_t t90 = 4608;

	t90 = (((x389/x390)^x391)<x392);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = -1;
	volatile int8_t x394 = INT8_MAX;
	uint32_t x395 = UINT32_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t91 = -227281;

	t91 = (((x393/x394)^x395)<x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x397 = UINT8_MAX;
	int64_t x399 = INT64_MAX;
	int64_t x400 = -786LL;
	volatile int32_t t92 = 0;

	t92 = (((x397/x398)^x399)<x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x401 = 4U;
	static int64_t x402 = INT64_MAX;
	volatile int64_t x403 = INT64_MAX;
	int64_t x404 = INT64_MIN;
	int32_t t93 = 0;

	t93 = (((x401/x402)^x403)<x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x408 = -1884;
	volatile int32_t t94 = 1566037;

	t94 = (((x405/x406)^x407)<x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = INT16_MAX;
	uint16_t x410 = 83U;
	static uint64_t x411 = 130676LLU;
	volatile int32_t t95 = 1;

	t95 = (((x409/x410)^x411)<x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x413 = 357U;
	volatile uint8_t x414 = 53U;
	uint32_t x415 = UINT32_MAX;
	uint8_t x416 = 30U;
	volatile int32_t t96 = 230047732;

	t96 = (((x413/x414)^x415)<x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x419 = UINT8_MAX;

	t97 = (((x417/x418)^x419)<x420);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x422 = INT16_MIN;
	uint32_t x423 = 8164895U;
	static int16_t x424 = INT16_MAX;
	volatile int32_t t98 = 2583189;

	t98 = (((x421/x422)^x423)<x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 2U;
	volatile int16_t x428 = 0;
	static int32_t t99 = 335876;

	t99 = (((x425/x426)^x427)<x428);

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

