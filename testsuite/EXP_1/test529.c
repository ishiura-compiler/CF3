#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = UINT32_MAX;
static volatile uint32_t x9 = UINT32_MAX;
int8_t x16 = INT8_MIN;
uint16_t x21 = 1414U;
int8_t x24 = 0;
volatile uint32_t x30 = UINT32_MAX;
uint16_t x31 = 26U;
static int32_t x34 = INT32_MAX;
static uint64_t x35 = 35643440456533337LLU;
static volatile int8_t x41 = INT8_MIN;
uint8_t x44 = 16U;
volatile int32_t t10 = -1;
int64_t x47 = INT64_MIN;
int32_t x48 = 225854272;
volatile int32_t t13 = -51270;
int64_t x58 = -1LL;
int32_t x62 = -1;
volatile int16_t x70 = 1905;
int64_t x72 = INT64_MIN;
int64_t x78 = INT64_MIN;
int64_t x80 = INT64_MIN;
int32_t t18 = 446542;
int32_t x99 = -1;
static int32_t t24 = 4541;
int32_t x108 = 1123;
uint64_t x112 = UINT64_MAX;
int64_t x113 = -1LL;
volatile uint16_t x115 = 23U;
volatile int16_t x116 = INT16_MIN;
volatile int32_t t28 = 424;
volatile int8_t x124 = INT8_MAX;
volatile int32_t t29 = -822696;
int8_t x129 = INT8_MIN;
volatile uint8_t x131 = 3U;
int32_t x136 = INT32_MIN;
int32_t t32 = -260909;
int64_t x137 = INT64_MAX;
static int32_t x142 = -22;
uint32_t x143 = 51935U;
int32_t x144 = INT32_MAX;
int8_t x150 = INT8_MIN;
static int64_t x151 = -1279189056454LL;
volatile int32_t t35 = 7;
int64_t x156 = 356601208LL;
int32_t t36 = 14358;
int64_t x158 = INT64_MIN;
uint64_t x161 = 550143567325596772LLU;
int16_t x163 = INT16_MAX;
uint16_t x188 = 6806U;
int32_t t45 = -198;
int8_t x204 = -1;
uint32_t x207 = 1528855U;
uint64_t x210 = 9595501584440LLU;
uint32_t x216 = 1044040064U;
int64_t x219 = 7780165194LL;
int32_t t52 = -711100;
int64_t x230 = INT64_MIN;
int8_t x245 = INT8_MAX;
int16_t x246 = INT16_MIN;
static volatile int32_t t57 = -693;
uint8_t x256 = 6U;
volatile int64_t x260 = INT64_MAX;
volatile int32_t t61 = -3;
int64_t x280 = INT64_MIN;
int8_t x286 = -1;
volatile int32_t x290 = INT32_MIN;
uint64_t x293 = 8134749599LLU;
uint8_t x294 = 3U;
static int8_t x296 = 2;
int8_t x308 = -1;
volatile int32_t t70 = -32;
static int64_t x317 = -1LL;
volatile int8_t x319 = INT8_MAX;
int32_t t75 = 14695;
int32_t x336 = -1;
uint16_t x343 = UINT16_MAX;
uint8_t x346 = UINT8_MAX;
uint32_t x347 = 1422240579U;
volatile int16_t x348 = INT16_MIN;
volatile int32_t t80 = -129552;
uint16_t x368 = UINT16_MAX;
static volatile int32_t x398 = INT32_MIN;
int32_t t91 = 7361761;
static int8_t x409 = INT8_MAX;
volatile uint8_t x411 = 21U;
int32_t t94 = 33510;
static int8_t x418 = INT8_MIN;
int64_t x420 = INT64_MIN;
int32_t x424 = INT32_MIN;
int16_t x425 = -1;
int8_t x427 = INT8_MAX;
int64_t x428 = INT64_MIN;
volatile uint16_t x433 = UINT16_MAX;
static int64_t x437 = INT64_MIN;
uint64_t x438 = 337912225LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int32_t x2 = 1;
	static int32_t x3 = -1;
	volatile int32_t t0 = -504504;

	t0 = (((x1/x2)-x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	uint32_t x6 = 3U;
	volatile uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MIN;
	static int32_t t1 = 14155;

	t1 = (((x5/x6)-x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MAX;
	uint8_t x11 = 48U;
	static int64_t x12 = -1LL;
	volatile int32_t t2 = 165674;

	t2 = (((x9/x10)-x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MIN;
	int32_t x15 = 397;
	volatile int32_t t3 = 2303308;

	t3 = (((x13/x14)-x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 26U;
	static int16_t x18 = -1;
	static int32_t x19 = 456617868;
	static volatile int32_t x20 = -1;
	static int32_t t4 = 51;

	t4 = (((x17/x18)-x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = -1;
	uint64_t x23 = 291149435614LLU;
	static int32_t t5 = -65320724;

	t5 = (((x21/x22)-x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -7136;
	static uint16_t x26 = UINT16_MAX;
	volatile int8_t x27 = INT8_MIN;
	static int8_t x28 = 5;
	volatile int32_t t6 = 1;

	t6 = (((x25/x26)-x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -413038138042444587LL;
	uint64_t x32 = 7LLU;
	volatile int32_t t7 = 128515;

	t7 = (((x29/x30)-x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -16768230735263LL;
	static uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -84650127;

	t8 = (((x33/x34)-x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 414U;
	uint8_t x38 = 5U;
	uint32_t x39 = 2787U;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -28215088;

	t9 = (((x37/x38)-x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	volatile int8_t x43 = -7;

	t10 = (((x41/x42)-x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static uint8_t x46 = UINT8_MAX;
	int32_t t11 = -63620;

	t11 = (((x45/x46)-x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	static uint64_t x50 = 149LLU;
	uint16_t x51 = 109U;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -53;

	t12 = (((x49/x50)-x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 1362U;
	int32_t x54 = 429110;
	volatile uint16_t x55 = UINT16_MAX;
	uint8_t x56 = UINT8_MAX;

	t13 = (((x53/x54)-x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	uint8_t x59 = 8U;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 3;

	t14 = (((x57/x58)-x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 13293LLU;
	volatile uint64_t x63 = 126925486407LLU;
	int64_t x64 = 705299334LL;
	int32_t t15 = 2;

	t15 = (((x61/x62)-x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = -3;
	int16_t x66 = -1;
	static int16_t x67 = -1;
	int16_t x68 = INT16_MAX;
	volatile int32_t t16 = 487378267;

	t16 = (((x65/x66)-x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint64_t x71 = 71539391058551LLU;
	int32_t t17 = 4778;

	t17 = (((x69/x70)-x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = -1;
	volatile int32_t x79 = -1;

	t18 = (((x77/x78)-x79)<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = INT32_MAX;
	static uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MIN;
	static int32_t t19 = -345486333;

	t19 = (((x81/x82)-x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -1;
	int32_t x86 = -212047621;
	volatile uint8_t x87 = UINT8_MAX;
	int16_t x88 = -9;
	int32_t t20 = 191;

	t20 = (((x85/x86)-x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x89 = UINT8_MAX;
	int8_t x90 = 1;
	int8_t x91 = -6;
	int32_t x92 = INT32_MIN;
	static volatile int32_t t21 = 33998;

	t21 = (((x89/x90)-x91)<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MAX;
	uint32_t x94 = 1003280U;
	static int8_t x95 = INT8_MAX;
	static int16_t x96 = INT16_MIN;
	static int32_t t22 = -9539;

	t22 = (((x93/x94)-x95)<x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x97 = -99;
	volatile uint32_t x98 = 24282239U;
	int16_t x100 = INT16_MAX;
	int32_t t23 = -167257;

	t23 = (((x97/x98)-x99)<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = 1975507;
	int16_t x103 = 986;
	int16_t x104 = INT16_MAX;

	t24 = (((x101/x102)-x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x105 = 107596686U;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MAX;
	int32_t t25 = -8691;

	t25 = (((x105/x106)-x107)<x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	uint32_t x110 = 1486206U;
	int32_t x111 = INT32_MIN;
	static volatile int32_t t26 = 216;

	t26 = (((x109/x110)-x111)<x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = -1;
	int32_t t27 = -22;

	t27 = (((x113/x114)-x115)<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = -1;
	int8_t x118 = INT8_MAX;
	uint16_t x119 = 174U;
	int64_t x120 = INT64_MAX;

	t28 = (((x117/x118)-x119)<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = -1;
	uint64_t x122 = 93153316054LLU;
	int16_t x123 = INT16_MIN;

	t29 = (((x121/x122)-x123)<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	int16_t x126 = INT16_MIN;
	int8_t x127 = -1;
	int16_t x128 = INT16_MAX;
	int32_t t30 = -1;

	t30 = (((x125/x126)-x127)<x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x130 = 506U;
	uint16_t x132 = 515U;
	static int32_t t31 = -119;

	t31 = (((x129/x130)-x131)<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = 1LL;
	static volatile int8_t x134 = -1;
	int32_t x135 = INT32_MIN;

	t32 = (((x133/x134)-x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = INT64_MIN;
	uint32_t x139 = 3672126U;
	int32_t x140 = -934;
	volatile int32_t t33 = 204847451;

	t33 = (((x137/x138)-x139)<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	volatile int32_t t34 = 49187;

	t34 = (((x141/x142)-x143)<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 47U;
	int8_t x152 = 19;

	t35 = (((x149/x150)-x151)<x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x153 = 42U;
	uint32_t x154 = 361U;
	int16_t x155 = 318;

	t36 = (((x153/x154)-x155)<x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x157 = -1;
	int32_t x159 = INT32_MIN;
	int64_t x160 = INT64_MIN;
	volatile int32_t t37 = 8346902;

	t37 = (((x157/x158)-x159)<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = INT64_MIN;
	int16_t x164 = 7;
	int32_t t38 = 52511441;

	t38 = (((x161/x162)-x163)<x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 5;
	int32_t x166 = -1;
	volatile int64_t x167 = INT64_MIN;
	int64_t x168 = 1502476863578996LL;
	static volatile int32_t t39 = 1;

	t39 = (((x165/x166)-x167)<x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -1;
	static int16_t x170 = INT16_MIN;
	uint8_t x171 = 31U;
	uint16_t x172 = UINT16_MAX;
	static volatile int32_t t40 = -464819;

	t40 = (((x169/x170)-x171)<x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 3239085U;
	int32_t x174 = 1;
	int8_t x175 = -7;
	int8_t x176 = -1;
	static volatile int32_t t41 = 0;

	t41 = (((x173/x174)-x175)<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 10301U;
	int16_t x178 = -4;
	volatile uint8_t x179 = UINT8_MAX;
	static int8_t x180 = INT8_MIN;
	static volatile int32_t t42 = 12;

	t42 = (((x177/x178)-x179)<x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MAX;
	int64_t x186 = INT64_MIN;
	static int8_t x187 = INT8_MAX;
	int32_t t43 = -10748;

	t43 = (((x185/x186)-x187)<x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = INT8_MIN;
	static int32_t x190 = INT32_MAX;
	uint16_t x191 = 3U;
	static int8_t x192 = INT8_MAX;
	int32_t t44 = -5518248;

	t44 = (((x189/x190)-x191)<x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = 10;
	int8_t x195 = -1;
	static int64_t x196 = INT64_MAX;

	t45 = (((x193/x194)-x195)<x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x197 = UINT64_MAX;
	uint64_t x198 = 1944LLU;
	int8_t x199 = INT8_MAX;
	static volatile int64_t x200 = -37469543232586405LL;
	static int32_t t46 = 0;

	t46 = (((x197/x198)-x199)<x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 1168962443U;
	static volatile int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MAX;
	volatile int32_t t47 = -1;

	t47 = (((x201/x202)-x203)<x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = 7;
	int64_t x206 = -16116317812631562LL;
	int16_t x208 = INT16_MIN;
	int32_t t48 = 1;

	t48 = (((x205/x206)-x207)<x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x209 = 5LLU;
	volatile uint8_t x211 = UINT8_MAX;
	uint16_t x212 = 7U;
	volatile int32_t t49 = -125762480;

	t49 = (((x209/x210)-x211)<x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 123U;
	static int8_t x214 = INT8_MAX;
	volatile int16_t x215 = INT16_MIN;
	int32_t t50 = -1;

	t50 = (((x213/x214)-x215)<x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int64_t x218 = -1LL;
	volatile uint8_t x220 = UINT8_MAX;
	volatile int32_t t51 = 15404014;

	t51 = (((x217/x218)-x219)<x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -1;
	static uint32_t x222 = 1U;
	int16_t x223 = INT16_MIN;
	int16_t x224 = -1;

	t52 = (((x221/x222)-x223)<x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x225 = UINT8_MAX;
	int32_t x226 = INT32_MAX;
	uint32_t x227 = 3895655U;
	int64_t x228 = INT64_MIN;
	volatile int32_t t53 = -181;

	t53 = (((x225/x226)-x227)<x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = -1;
	static int64_t x231 = INT64_MAX;
	uint64_t x232 = 8678999764881711114LLU;
	int32_t t54 = -92456;

	t54 = (((x229/x230)-x231)<x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x233 = -265308520;
	int8_t x234 = 1;
	int16_t x235 = -6;
	int64_t x236 = -4179434535LL;
	volatile int32_t t55 = -5465805;

	t55 = (((x233/x234)-x235)<x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x247 = 258362622;
	volatile uint32_t x248 = 633432U;
	int32_t t56 = -15;

	t56 = (((x245/x246)-x247)<x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = 0U;
	volatile int64_t x250 = -280161232757828LL;
	volatile int16_t x251 = 34;
	uint8_t x252 = 12U;

	t57 = (((x249/x250)-x251)<x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = -4;
	int8_t x254 = INT8_MIN;
	volatile int8_t x255 = INT8_MAX;
	int32_t t58 = -1;

	t58 = (((x253/x254)-x255)<x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x257 = 82U;
	volatile int32_t x258 = -272021843;
	uint16_t x259 = UINT16_MAX;
	volatile int32_t t59 = 128821178;

	t59 = (((x257/x258)-x259)<x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = INT64_MIN;
	volatile uint8_t x262 = UINT8_MAX;
	int16_t x263 = 156;
	int64_t x264 = -16LL;
	int32_t t60 = -18;

	t60 = (((x261/x262)-x263)<x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x266 = 131U;
	int32_t x267 = -1;
	uint64_t x268 = 693LLU;

	t61 = (((x265/x266)-x267)<x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x269 = UINT64_MAX;
	volatile int8_t x270 = INT8_MAX;
	uint16_t x271 = 5650U;
	volatile uint64_t x272 = 4601LLU;
	int32_t t62 = 12365;

	t62 = (((x269/x270)-x271)<x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x273 = 21;
	int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	uint32_t x276 = UINT32_MAX;
	int32_t t63 = -50752;

	t63 = (((x273/x274)-x275)<x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = -13700522605446LL;
	volatile int32_t x278 = INT32_MIN;
	int64_t x279 = -3597564511LL;
	int32_t t64 = -252039884;

	t64 = (((x277/x278)-x279)<x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x285 = 31U;
	uint64_t x287 = 1321LLU;
	volatile int16_t x288 = INT16_MIN;
	static volatile int32_t t65 = -15;

	t65 = (((x285/x286)-x287)<x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = -1;
	uint64_t x291 = UINT64_MAX;
	int64_t x292 = INT64_MIN;
	volatile int32_t t66 = -94;

	t66 = (((x289/x290)-x291)<x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x295 = -55704LL;
	static volatile int32_t t67 = 0;

	t67 = (((x293/x294)-x295)<x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x298 = -1;
	int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t68 = -1;

	t68 = (((x297/x298)-x299)<x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = 255320LL;
	int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MAX;
	int32_t t69 = -65097;

	t69 = (((x301/x302)-x303)<x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x305 = -1;
	volatile int64_t x306 = INT64_MIN;
	uint32_t x307 = UINT32_MAX;

	t70 = (((x305/x306)-x307)<x308);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	uint32_t x311 = 56U;
	volatile int64_t x312 = 1LL;
	int32_t t71 = -77221917;

	t71 = (((x309/x310)-x311)<x312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = -1;
	int8_t x314 = 4;
	int32_t x315 = 1877;
	int32_t x316 = INT32_MIN;
	int32_t t72 = 530506;

	t72 = (((x313/x314)-x315)<x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x318 = 69637;
	static uint32_t x320 = UINT32_MAX;
	static int32_t t73 = -214058395;

	t73 = (((x317/x318)-x319)<x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MAX;
	int8_t x322 = 1;
	int32_t x323 = INT32_MAX;
	uint64_t x324 = 0LLU;
	static int32_t t74 = 2373728;

	t74 = (((x321/x322)-x323)<x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MAX;
	int64_t x326 = INT64_MIN;
	int16_t x327 = -349;
	static int32_t x328 = -1;

	t75 = (((x325/x326)-x327)<x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x329 = -3;
	uint8_t x330 = 3U;
	int8_t x331 = -3;
	volatile int16_t x332 = -3;
	static int32_t t76 = 38385;

	t76 = (((x329/x330)-x331)<x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = -904509444093553099LL;
	static int64_t x334 = -1LL;
	volatile uint64_t x335 = 499101827254LLU;
	volatile int32_t t77 = -6286;

	t77 = (((x333/x334)-x335)<x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x341 = INT64_MAX;
	static int16_t x342 = INT16_MIN;
	int8_t x344 = 1;
	static volatile int32_t t78 = -15747;

	t78 = (((x341/x342)-x343)<x344);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = INT64_MAX;
	int32_t t79 = 196;

	t79 = (((x345/x346)-x347)<x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x353 = -12LL;
	static int16_t x354 = 3;
	static int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;

	t80 = (((x353/x354)-x355)<x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x357 = 0;
	int32_t x358 = 134579;
	static uint16_t x359 = 896U;
	volatile int64_t x360 = INT64_MAX;
	int32_t t81 = 998720;

	t81 = (((x357/x358)-x359)<x360);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x361 = -1LL;
	static volatile int16_t x362 = INT16_MIN;
	static int64_t x363 = -51432991197LL;
	volatile uint32_t x364 = 19U;
	volatile int32_t t82 = 52;

	t82 = (((x361/x362)-x363)<x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = 19303764LL;
	static volatile uint16_t x366 = UINT16_MAX;
	uint32_t x367 = UINT32_MAX;
	static volatile int32_t t83 = 777;

	t83 = (((x365/x366)-x367)<x368);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = 1;
	static int8_t x374 = INT8_MAX;
	int32_t x375 = 41921399;
	uint32_t x376 = 5175278U;
	static int32_t t84 = 60;

	t84 = (((x373/x374)-x375)<x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = -1;
	uint16_t x378 = 12U;
	volatile int16_t x379 = INT16_MAX;
	static volatile int8_t x380 = INT8_MIN;
	static volatile int32_t t85 = 1766;

	t85 = (((x377/x378)-x379)<x380);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x381 = -1;
	uint32_t x382 = 511U;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = 3492404LL;
	static int32_t t86 = -692;

	t86 = (((x381/x382)-x383)<x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x385 = INT32_MAX;
	uint8_t x386 = 5U;
	int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t87 = 2922;

	t87 = (((x385/x386)-x387)<x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = -8;
	int16_t x390 = -2;
	volatile uint32_t x391 = 133882U;
	int32_t x392 = -1;
	volatile int32_t t88 = -62;

	t88 = (((x389/x390)-x391)<x392);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int8_t x394 = INT8_MIN;
	static int64_t x395 = INT64_MIN;
	int32_t x396 = -849;
	volatile int32_t t89 = -235;

	t89 = (((x393/x394)-x395)<x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x399 = -20303719;
	volatile int8_t x400 = -62;
	static int32_t t90 = -6250451;

	t90 = (((x397/x398)-x399)<x400);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = -1;
	static volatile uint16_t x402 = 4052U;
	volatile int8_t x403 = INT8_MIN;
	static int32_t x404 = INT32_MIN;

	t91 = (((x401/x402)-x403)<x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MAX;
	uint8_t x407 = UINT8_MAX;
	volatile int64_t x408 = INT64_MIN;
	volatile int32_t t92 = -15827210;

	t92 = (((x405/x406)-x407)<x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x410 = -1;
	static volatile uint16_t x412 = UINT16_MAX;
	int32_t t93 = -1081778;

	t93 = (((x409/x410)-x411)<x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = INT8_MIN;
	int16_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	int16_t x416 = INT16_MIN;

	t94 = (((x413/x414)-x415)<x416);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = 12;
	int8_t x419 = -1;
	int32_t t95 = 0;

	t95 = (((x417/x418)-x419)<x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x421 = 543228517919030LLU;
	volatile int32_t x422 = 841;
	int64_t x423 = INT64_MIN;
	int32_t t96 = -39833;

	t96 = (((x421/x422)-x423)<x424);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x426 = -1LL;
	volatile int32_t t97 = -6890;

	t97 = (((x425/x426)-x427)<x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x434 = UINT32_MAX;
	static uint64_t x435 = 788LLU;
	uint32_t x436 = 18U;
	volatile int32_t t98 = 115004;

	t98 = (((x433/x434)-x435)<x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x439 = 634132795U;
	int32_t x440 = 10435906;
	int32_t t99 = -51056;

	t99 = (((x437/x438)-x439)<x440);

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

