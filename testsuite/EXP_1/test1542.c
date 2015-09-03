#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile int8_t x2 = INT8_MAX;
static int8_t x6 = INT8_MAX;
uint16_t x8 = UINT16_MAX;
volatile int32_t t2 = 154117719;
int8_t x17 = INT8_MAX;
volatile uint8_t x20 = UINT8_MAX;
int8_t x28 = INT8_MIN;
int32_t t6 = -2826945;
int16_t x32 = -1;
int64_t x38 = 129704306LL;
int32_t t9 = 28;
int32_t x45 = INT32_MIN;
int32_t t10 = 24391194;
int32_t x57 = -1;
int8_t x58 = 0;
volatile uint16_t x61 = 78U;
int8_t x63 = -3;
volatile uint64_t x72 = UINT64_MAX;
int16_t x77 = INT16_MIN;
static uint32_t x83 = 26914846U;
volatile int16_t x87 = INT16_MIN;
int32_t x92 = -1;
static volatile int32_t t19 = 3;
uint64_t x94 = 2713020753223133691LLU;
uint8_t x95 = 0U;
static int32_t x98 = -426599993;
int32_t x106 = INT32_MAX;
volatile int16_t x108 = INT16_MIN;
static int32_t t24 = -673;
volatile int32_t t25 = 619193;
int64_t x125 = 52794490LL;
volatile int32_t x126 = 938;
int32_t x130 = -1;
volatile int32_t t29 = -310;
uint32_t x135 = 129632U;
volatile uint16_t x136 = 388U;
int16_t x138 = INT16_MIN;
int64_t x155 = -25405620199277LL;
static int8_t x162 = INT8_MIN;
uint32_t x170 = UINT32_MAX;
static int16_t x172 = -1;
volatile int64_t x174 = INT64_MIN;
int64_t x176 = -1LL;
static int32_t x177 = -1;
int8_t x179 = INT8_MIN;
uint32_t x184 = UINT32_MAX;
static volatile int32_t x185 = -18030129;
int32_t x188 = INT32_MAX;
volatile uint8_t x198 = 4U;
int8_t x210 = INT8_MIN;
static int32_t t46 = 4318807;
int64_t x213 = 24LL;
int8_t x214 = INT8_MAX;
static int16_t x215 = INT16_MIN;
int64_t x218 = -785800018275LL;
volatile int32_t t49 = -27;
static int8_t x228 = -1;
static int32_t x229 = INT32_MAX;
volatile int64_t x231 = INT64_MAX;
int32_t t51 = 1;
int8_t x236 = INT8_MIN;
int16_t x243 = 622;
uint32_t x244 = 12366U;
int64_t x252 = INT64_MIN;
int32_t t56 = 383016688;
uint32_t x262 = UINT32_MAX;
uint8_t x264 = 19U;
uint32_t x273 = UINT32_MAX;
static int8_t x274 = -45;
static volatile int32_t x275 = INT32_MAX;
uint64_t x277 = 804396LLU;
int32_t t62 = -44;
volatile int32_t x285 = 15319;
static uint16_t x289 = 68U;
volatile uint8_t x291 = 124U;
int8_t x294 = INT8_MAX;
static int32_t x298 = -1;
uint16_t x305 = UINT16_MAX;
uint16_t x307 = UINT16_MAX;
int16_t x319 = -425;
volatile int8_t x322 = 43;
static int16_t x324 = INT16_MIN;
uint16_t x327 = 3655U;
int32_t t74 = -1;
volatile int32_t t75 = -7389;
volatile int32_t x338 = INT32_MIN;
int16_t x341 = 66;
volatile int32_t x346 = INT32_MAX;
int64_t x348 = -1LL;
volatile int32_t t81 = 1070;
int64_t x358 = 112722018804492LL;
int64_t x360 = INT64_MAX;
uint16_t x366 = 3U;
volatile int32_t x369 = INT32_MAX;
int32_t x376 = INT32_MIN;
volatile int32_t t86 = -435673485;
int32_t t87 = 24997;
int16_t x384 = INT16_MIN;
int32_t t89 = -226990283;
int32_t t92 = -51;
int32_t x410 = INT32_MIN;
static uint32_t x417 = 38252U;
volatile int64_t x423 = -51086426229LL;
volatile int8_t x427 = -1;
volatile int32_t t97 = 10940941;
int16_t x436 = INT16_MIN;
volatile int16_t x437 = 14328;


void f0(void) {
	static volatile int64_t x3 = 60325895LL;
	static int64_t x4 = INT64_MIN;
	int32_t t0 = -2674273;

	t0 = (((x1<=x2)-x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2U;
	int16_t x7 = -1;
	int32_t t1 = -533;

	t1 = (((x5<=x6)-x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 3315;
	int16_t x10 = -1;
	volatile int64_t x11 = -667167017164LL;
	int8_t x12 = 47;

	t2 = (((x9<=x10)-x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	volatile uint16_t x14 = UINT16_MAX;
	static int16_t x15 = -1;
	volatile uint16_t x16 = 6772U;
	int32_t t3 = 7090955;

	t3 = (((x13<=x14)-x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 10U;
	uint64_t x19 = 109287926772701694LLU;
	int32_t t4 = -1189213;

	t4 = (((x17<=x18)-x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	uint64_t x22 = UINT64_MAX;
	static int32_t x23 = 470438124;
	static int8_t x24 = 2;
	volatile int32_t t5 = 8507;

	t5 = (((x21<=x22)-x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = 2175118671610046LL;
	static uint32_t x27 = UINT32_MAX;

	t6 = (((x25<=x26)-x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x30 = INT32_MIN;
	int8_t x31 = -2;
	volatile int32_t t7 = -1868195;

	t7 = (((x29<=x30)-x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 14;
	volatile int32_t x34 = INT32_MAX;
	volatile int32_t x35 = INT32_MAX;
	uint16_t x36 = 12U;
	int32_t t8 = -57;

	t8 = (((x33<=x34)-x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = INT64_MAX;
	uint8_t x39 = UINT8_MAX;
	static volatile int64_t x40 = INT64_MAX;

	t9 = (((x37<=x38)-x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x46 = INT64_MIN;
	static int8_t x47 = -3;
	static int32_t x48 = INT32_MIN;

	t10 = (((x45<=x46)-x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 15664U;
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 0U;
	int64_t x52 = 0LL;
	volatile int32_t t11 = -809898;

	t11 = (((x49<=x50)-x51)==x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x54 = UINT32_MAX;
	static int8_t x55 = INT8_MIN;
	static int16_t x56 = INT16_MAX;
	static int32_t t12 = 1;

	t12 = (((x53<=x54)-x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x59 = INT16_MIN;
	int64_t x60 = -52682937455LL;
	static volatile int32_t t13 = -15;

	t13 = (((x57<=x58)-x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = -13;
	uint32_t x64 = 1U;
	volatile int32_t t14 = 0;

	t14 = (((x61<=x62)-x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = INT32_MAX;
	uint16_t x70 = 820U;
	uint16_t x71 = 6U;
	int32_t t15 = -1;

	t15 = (((x69<=x70)-x71)==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 22356U;
	static volatile uint32_t x80 = UINT32_MAX;
	int32_t t16 = -1;

	t16 = (((x77<=x78)-x79)==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = INT64_MIN;
	uint64_t x84 = 1020221389369272395LLU;
	volatile int32_t t17 = -619;

	t17 = (((x81<=x82)-x83)==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x85 = -146189582841LL;
	volatile uint32_t x86 = 162730446U;
	static int16_t x88 = INT16_MIN;
	int32_t t18 = 923650;

	t18 = (((x85<=x86)-x87)==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	volatile int16_t x90 = INT16_MAX;
	uint64_t x91 = UINT64_MAX;

	t19 = (((x89<=x90)-x91)==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t20 = -775845108;

	t20 = (((x93<=x94)-x95)==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	uint8_t x99 = 3U;
	int16_t x100 = INT16_MAX;
	volatile int32_t t21 = -3513;

	t21 = (((x97<=x98)-x99)==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x101 = UINT64_MAX;
	static volatile uint8_t x102 = UINT8_MAX;
	int8_t x103 = 38;
	int16_t x104 = 42;
	int32_t t22 = 5952994;

	t22 = (((x101<=x102)-x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -5349072;
	int16_t x107 = -1;
	volatile int32_t t23 = 27659;

	t23 = (((x105<=x106)-x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	uint16_t x110 = 0U;
	int16_t x111 = INT16_MAX;
	volatile int32_t x112 = -98;

	t24 = (((x109<=x110)-x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 2079720;
	int16_t x114 = -706;
	volatile uint8_t x115 = UINT8_MAX;
	uint32_t x116 = UINT32_MAX;

	t25 = (((x113<=x114)-x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 618U;
	static int16_t x118 = INT16_MAX;
	uint64_t x119 = UINT64_MAX;
	uint32_t x120 = UINT32_MAX;
	int32_t t26 = -3938;

	t26 = (((x117<=x118)-x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = UINT16_MAX;
	uint32_t x122 = UINT32_MAX;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MAX;
	volatile int32_t t27 = 445;

	t27 = (((x121<=x122)-x123)==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x127 = INT32_MAX;
	int16_t x128 = 0;
	volatile int32_t t28 = 19406;

	t28 = (((x125<=x126)-x127)==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -13LL;
	int32_t x131 = 76885167;
	uint8_t x132 = 81U;

	t29 = (((x129<=x130)-x131)==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = INT8_MAX;
	int16_t x134 = INT16_MIN;
	int32_t t30 = -113;

	t30 = (((x133<=x134)-x135)==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x137 = -1;
	volatile int32_t x139 = INT32_MAX;
	int16_t x140 = -1;
	static int32_t t31 = 7848493;

	t31 = (((x137<=x138)-x139)==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MIN;
	int16_t x142 = INT16_MIN;
	volatile int32_t x143 = -4242;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t32 = 136821;

	t32 = (((x141<=x142)-x143)==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x145 = UINT8_MAX;
	static int64_t x146 = -1LL;
	volatile int8_t x147 = -63;
	int32_t x148 = INT32_MAX;
	int32_t t33 = -11878175;

	t33 = (((x145<=x146)-x147)==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = -6;
	int32_t x156 = 595572138;
	volatile int32_t t34 = -21475;

	t34 = (((x153<=x154)-x155)==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = -1;
	static uint32_t x158 = 4U;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = 57281393073LLU;
	static int32_t t35 = 483;

	t35 = (((x157<=x158)-x159)==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x161 = 43;
	int16_t x163 = INT16_MIN;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t36 = 469142516;

	t36 = (((x161<=x162)-x163)==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = 5;
	int64_t x166 = INT64_MIN;
	uint8_t x167 = 0U;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t37 = 980;

	t37 = (((x165<=x166)-x167)==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -4;
	int8_t x171 = -1;
	int32_t t38 = 491266766;

	t38 = (((x169<=x170)-x171)==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	volatile int32_t t39 = 72221;

	t39 = (((x173<=x174)-x175)==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x178 = 14742674070LLU;
	int64_t x180 = 4116620431LL;
	static volatile int32_t t40 = 1;

	t40 = (((x177<=x178)-x179)==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -1;
	int16_t x182 = -6;
	int64_t x183 = -1LL;
	static int32_t t41 = 351992028;

	t41 = (((x181<=x182)-x183)==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x186 = -1LL;
	uint64_t x187 = 128503197865LLU;
	int32_t t42 = -1;

	t42 = (((x185<=x186)-x187)==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -1;
	int16_t x195 = 113;
	int16_t x196 = 4;
	static int32_t t43 = 61100140;

	t43 = (((x193<=x194)-x195)==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = INT16_MIN;
	int32_t x199 = -1;
	static uint16_t x200 = 1945U;
	volatile int32_t t44 = 8;

	t44 = (((x197<=x198)-x199)==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = UINT8_MAX;
	static uint64_t x206 = UINT64_MAX;
	uint64_t x207 = UINT64_MAX;
	volatile uint32_t x208 = 1920142U;
	volatile int32_t t45 = 601539862;

	t45 = (((x205<=x206)-x207)==x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	volatile uint8_t x211 = 6U;
	int64_t x212 = INT64_MIN;

	t46 = (((x209<=x210)-x211)==x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x216 = UINT8_MAX;
	int32_t t47 = 29986205;

	t47 = (((x213<=x214)-x215)==x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = 38LLU;
	static int16_t x219 = INT16_MIN;
	static int16_t x220 = INT16_MAX;
	volatile int32_t t48 = 14015;

	t48 = (((x217<=x218)-x219)==x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -1;
	volatile int16_t x222 = -9474;
	static uint16_t x223 = UINT16_MAX;
	int8_t x224 = -41;

	t49 = (((x221<=x222)-x223)==x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x226 = 533;
	static volatile int16_t x227 = INT16_MIN;
	int32_t t50 = 1;

	t50 = (((x225<=x226)-x227)==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x230 = 18U;
	uint64_t x232 = UINT64_MAX;

	t51 = (((x229<=x230)-x231)==x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = 3U;
	int16_t x234 = -1522;
	int16_t x235 = 779;
	int32_t t52 = -18633;

	t52 = (((x233<=x234)-x235)==x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = UINT32_MAX;
	static uint32_t x238 = UINT32_MAX;
	uint32_t x239 = 223157U;
	int16_t x240 = INT16_MIN;
	int32_t t53 = -1428078;

	t53 = (((x237<=x238)-x239)==x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 351U;
	volatile int8_t x242 = 1;
	volatile int32_t t54 = -680302;

	t54 = (((x241<=x242)-x243)==x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	uint32_t x247 = 10378634U;
	int8_t x248 = INT8_MIN;
	volatile int32_t t55 = 0;

	t55 = (((x245<=x246)-x247)==x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = UINT32_MAX;
	static uint64_t x250 = 976642828069632381LLU;
	int64_t x251 = -27993487LL;

	t56 = (((x249<=x250)-x251)==x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MIN;
	uint64_t x254 = UINT64_MAX;
	uint64_t x255 = 8LLU;
	static uint16_t x256 = 50U;
	static int32_t t57 = -13766625;

	t57 = (((x253<=x254)-x255)==x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = 93497479LL;
	volatile int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MAX;
	static uint16_t x260 = 28894U;
	static volatile int32_t t58 = 39761;

	t58 = (((x257<=x258)-x259)==x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x263 = 3U;
	int32_t t59 = 13140425;

	t59 = (((x261<=x262)-x263)==x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = 4254594060963964869LL;
	static int32_t x267 = -1;
	int32_t x268 = INT32_MAX;
	volatile int32_t t60 = 199999094;

	t60 = (((x265<=x266)-x267)==x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x276 = INT64_MAX;
	volatile int32_t t61 = -56;

	t61 = (((x273<=x274)-x275)==x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x278 = 1699145U;
	uint8_t x279 = UINT8_MAX;
	static volatile uint16_t x280 = 4U;

	t62 = (((x277<=x278)-x279)==x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MAX;
	volatile int64_t x282 = 454858008948903LL;
	uint64_t x283 = 31LLU;
	int32_t x284 = INT32_MIN;
	volatile int32_t t63 = 0;

	t63 = (((x281<=x282)-x283)==x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x286 = -1;
	volatile int8_t x287 = -27;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t64 = -117671921;

	t64 = (((x285<=x286)-x287)==x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x290 = INT32_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t65 = 1;

	t65 = (((x289<=x290)-x291)==x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x293 = 673068000U;
	uint16_t x295 = UINT16_MAX;
	static uint64_t x296 = UINT64_MAX;
	volatile int32_t t66 = 234255;

	t66 = (((x293<=x294)-x295)==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x297 = INT8_MAX;
	int32_t x299 = -4400;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t67 = -230189;

	t67 = (((x297<=x298)-x299)==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = INT32_MIN;
	static int16_t x302 = 1;
	int8_t x303 = -1;
	int16_t x304 = INT16_MIN;
	int32_t t68 = 313396;

	t68 = (((x301<=x302)-x303)==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x306 = 884149525674LLU;
	volatile int64_t x308 = INT64_MAX;
	volatile int32_t t69 = 16214;

	t69 = (((x305<=x306)-x307)==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x309 = -1;
	int64_t x310 = INT64_MAX;
	static int64_t x311 = INT64_MAX;
	static uint32_t x312 = 40456842U;
	int32_t t70 = 4854127;

	t70 = (((x309<=x310)-x311)==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x313 = UINT32_MAX;
	uint8_t x314 = 0U;
	volatile uint64_t x315 = UINT64_MAX;
	uint16_t x316 = 847U;
	volatile int32_t t71 = -6914071;

	t71 = (((x313<=x314)-x315)==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x317 = UINT32_MAX;
	int16_t x318 = INT16_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t72 = 972424;

	t72 = (((x317<=x318)-x319)==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = -1LL;
	uint32_t x323 = 6517U;
	volatile int32_t t73 = 39605;

	t73 = (((x321<=x322)-x323)==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = -29;
	int64_t x326 = INT64_MIN;
	static uint32_t x328 = 0U;

	t74 = (((x325<=x326)-x327)==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x329 = INT64_MIN;
	volatile uint32_t x330 = UINT32_MAX;
	volatile uint64_t x331 = UINT64_MAX;
	volatile int8_t x332 = INT8_MIN;

	t75 = (((x329<=x330)-x331)==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = 54555362LLU;
	uint32_t x334 = 169157126U;
	static uint16_t x335 = 2U;
	uint32_t x336 = 2U;
	static int32_t t76 = 510232;

	t76 = (((x333<=x334)-x335)==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x337 = INT64_MIN;
	static int8_t x339 = INT8_MIN;
	int64_t x340 = -1LL;
	volatile int32_t t77 = -68575;

	t77 = (((x337<=x338)-x339)==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x342 = 0;
	static int8_t x343 = INT8_MAX;
	uint64_t x344 = 6792413221353LLU;
	int32_t t78 = -25225061;

	t78 = (((x341<=x342)-x343)==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x345 = UINT8_MAX;
	uint8_t x347 = UINT8_MAX;
	int32_t t79 = 274180636;

	t79 = (((x345<=x346)-x347)==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = -1;
	uint64_t x350 = 2933326583252700604LLU;
	volatile uint32_t x351 = UINT32_MAX;
	int32_t x352 = -23;
	static volatile int32_t t80 = 87088854;

	t80 = (((x349<=x350)-x351)==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x353 = -3453;
	uint32_t x354 = UINT32_MAX;
	static uint64_t x355 = UINT64_MAX;
	static volatile uint64_t x356 = 483087273830691060LLU;

	t81 = (((x353<=x354)-x355)==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x357 = -1LL;
	int16_t x359 = -1;
	volatile int32_t t82 = -164;

	t82 = (((x357<=x358)-x359)==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x361 = 82U;
	int8_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	int8_t x364 = INT8_MAX;
	int32_t t83 = -130909;

	t83 = (((x361<=x362)-x363)==x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x367 = 31488U;
	static volatile int16_t x368 = -1;
	int32_t t84 = -14980;

	t84 = (((x365<=x366)-x367)==x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x370 = INT32_MIN;
	uint8_t x371 = 14U;
	static int64_t x372 = INT64_MIN;
	volatile int32_t t85 = -26503318;

	t85 = (((x369<=x370)-x371)==x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x373 = INT16_MAX;
	volatile int8_t x374 = 1;
	int16_t x375 = INT16_MIN;

	t86 = (((x373<=x374)-x375)==x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x377 = -1;
	uint32_t x378 = 1U;
	static uint32_t x379 = UINT32_MAX;
	int32_t x380 = INT32_MIN;

	t87 = (((x377<=x378)-x379)==x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x381 = 22U;
	uint16_t x382 = UINT16_MAX;
	uint64_t x383 = 1886008191LLU;
	int32_t t88 = 114100;

	t88 = (((x381<=x382)-x383)==x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x385 = 35U;
	int8_t x386 = -1;
	int8_t x387 = INT8_MIN;
	volatile int32_t x388 = 736183271;

	t89 = (((x385<=x386)-x387)==x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = -1;
	int32_t x391 = -1;
	uint32_t x392 = 845U;
	static volatile int32_t t90 = -2;

	t90 = (((x389<=x390)-x391)==x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x393 = -93226985;
	int8_t x394 = INT8_MIN;
	volatile int8_t x395 = 1;
	int64_t x396 = INT64_MAX;
	int32_t t91 = 23212896;

	t91 = (((x393<=x394)-x395)==x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x397 = -107864;
	static int32_t x398 = 452013523;
	int32_t x399 = -490;
	int32_t x400 = INT32_MIN;

	t92 = (((x397<=x398)-x399)==x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x401 = 0U;
	int16_t x402 = 0;
	volatile int32_t x403 = -3389;
	static volatile int64_t x404 = INT64_MAX;
	static volatile int32_t t93 = -1012;

	t93 = (((x401<=x402)-x403)==x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x409 = INT64_MIN;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t94 = -3637062;

	t94 = (((x409<=x410)-x411)==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x418 = -1;
	volatile uint32_t x419 = 1U;
	static uint8_t x420 = 3U;
	int32_t t95 = 3;

	t95 = (((x417<=x418)-x419)==x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = INT64_MIN;
	uint8_t x424 = UINT8_MAX;
	int32_t t96 = 255308;

	t96 = (((x421<=x422)-x423)==x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x425 = INT64_MIN;
	int32_t x426 = 58750;
	int64_t x428 = -8521LL;

	t97 = (((x425<=x426)-x427)==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x433 = 45730197546170LLU;
	uint32_t x434 = 5U;
	int16_t x435 = INT16_MAX;
	static volatile int32_t t98 = -9146632;

	t98 = (((x433<=x434)-x435)==x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x438 = 39U;
	int32_t x439 = -93;
	static uint32_t x440 = 510945254U;
	int32_t t99 = 718961;

	t99 = (((x437<=x438)-x439)==x440);

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

