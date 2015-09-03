#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int32_t x7 = -1;
volatile int32_t t1 = 1547183;
static int32_t t3 = -655887;
int32_t x34 = 1;
static int64_t x41 = INT64_MIN;
int32_t t5 = -1;
volatile uint32_t x70 = UINT32_MAX;
int32_t t8 = 159616;
int32_t x84 = 54;
uint16_t x99 = UINT16_MAX;
volatile int32_t t15 = 4;
static int16_t x103 = 0;
int32_t x114 = 2871;
int32_t x121 = INT32_MIN;
volatile uint64_t x122 = 123665828045420472LLU;
int16_t x128 = -1;
int8_t x129 = -4;
int16_t x141 = -1;
int64_t t25 = -1490358LL;
int32_t x158 = -2810;
int16_t x160 = INT16_MIN;
volatile int32_t t26 = -23557;
static uint64_t x173 = UINT64_MAX;
static int16_t x183 = INT16_MAX;
int32_t x186 = INT32_MIN;
static uint16_t x188 = UINT16_MAX;
volatile int32_t t31 = 35;
static int32_t x193 = -453;
int8_t x196 = INT8_MAX;
volatile int8_t x197 = -1;
volatile int16_t x201 = -1;
int32_t t34 = 8159;
volatile int32_t t36 = 14;
int64_t x213 = INT64_MIN;
volatile int32_t t37 = -7273572;
volatile uint8_t x219 = 45U;
int8_t x221 = -1;
static uint32_t t39 = UINT32_MAX;
static int8_t x228 = -1;
int32_t x229 = 382254;
uint64_t x247 = 129585718493086520LLU;
int64_t x248 = -1LL;
int8_t x249 = INT8_MAX;
int64_t x253 = INT64_MAX;
static uint8_t x282 = 5U;
int32_t t50 = 0;
uint32_t x289 = 0U;
int16_t x293 = -3;
int16_t x296 = -1;
int32_t x301 = 54769;
int16_t x312 = 51;
int8_t x313 = INT8_MIN;
volatile int16_t x342 = -1255;
uint64_t x352 = 458116143LLU;
int64_t x355 = INT64_MAX;
static uint64_t x356 = UINT64_MAX;
int32_t x357 = INT32_MIN;
uint16_t x360 = 20521U;
int64_t x365 = INT64_MAX;
static int32_t x385 = INT32_MIN;
static uint16_t x386 = 2U;
int8_t x397 = -44;
volatile uint16_t x400 = UINT16_MAX;
int32_t t71 = 174;
int8_t x402 = -1;
volatile int8_t x405 = INT8_MIN;
int32_t x407 = 680;
int8_t x418 = -1;
int32_t x437 = INT32_MAX;
static volatile int32_t x441 = -31191;
volatile int16_t x461 = INT16_MIN;
int16_t x466 = INT16_MIN;
volatile int16_t x468 = -1;
static int32_t t84 = 5;
int16_t x474 = -1;
volatile int32_t x476 = 1;
static uint64_t x478 = 17LLU;
int8_t x480 = 1;
static volatile uint64_t t89 = 92927309LLU;
volatile int32_t x499 = -1;
int8_t x500 = INT8_MIN;
int64_t x505 = 140377584301010LL;
volatile int64_t x507 = INT64_MAX;
volatile int32_t t91 = 230234985;
uint32_t x517 = UINT32_MAX;
int64_t x518 = 253553095LL;
int32_t x519 = INT32_MIN;
static volatile int32_t t94 = 2599;
static uint16_t x536 = UINT16_MAX;
uint16_t x542 = 4068U;
int32_t t97 = 4842465;


void f0(void) {
	int16_t x5 = INT16_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t0 = -26865;

	t0 = ((x5<=(x6*x7))|x8);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x13 = UINT16_MAX;
	int32_t x14 = -3;
	uint32_t x15 = 1U;
	int32_t x16 = 3;

	t1 = ((x13<=(x14*x15))|x16);

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 25U;
	int8_t x18 = -2;
	uint64_t x19 = 131799863231529LLU;
	int16_t x20 = INT16_MAX;
	static volatile int32_t t2 = 13;

	t2 = ((x17<=(x18*x19))|x20);

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = 101;
	uint32_t x27 = UINT32_MAX;
	int16_t x28 = -13883;

	t3 = ((x25<=(x26*x27))|x28);

	if (t3 != -13883) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = INT64_MAX;
	int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t4 = 353121;

	t4 = ((x33<=(x34*x35))|x36);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x42 = INT16_MAX;
	static volatile int16_t x43 = INT16_MIN;
	volatile int8_t x44 = INT8_MIN;

	t5 = ((x41<=(x42*x43))|x44);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x57 = UINT16_MAX;
	volatile int8_t x58 = 27;
	int16_t x59 = -3;
	int16_t x60 = -1;
	int32_t t6 = -6069;

	t6 = ((x57<=(x58*x59))|x60);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x65 = INT64_MIN;
	uint64_t x66 = 101LLU;
	volatile uint32_t x67 = UINT32_MAX;
	static uint8_t x68 = UINT8_MAX;
	int32_t t7 = -796;

	t7 = ((x65<=(x66*x67))|x68);

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x69 = -1LL;
	int32_t x71 = INT32_MIN;
	int16_t x72 = -3631;

	t8 = ((x69<=(x70*x71))|x72);

	if (t8 != -3631) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MIN;
	volatile uint16_t x75 = UINT16_MAX;
	int16_t x76 = INT16_MAX;
	static int32_t t9 = 73435;

	t9 = ((x73<=(x74*x75))|x76);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x77 = INT64_MAX;
	static volatile uint8_t x78 = 55U;
	uint64_t x79 = 228861060009387LLU;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t10 = -30057;

	t10 = ((x77<=(x78*x79))|x80);

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x81 = 249468658;
	volatile int8_t x82 = 0;
	int16_t x83 = INT16_MIN;
	static volatile int32_t t11 = 502261;

	t11 = ((x81<=(x82*x83))|x84);

	if (t11 != 54) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = -1;
	static volatile int8_t x87 = INT8_MAX;
	volatile int8_t x88 = -1;
	int32_t t12 = -256613;

	t12 = ((x85<=(x86*x87))|x88);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x89 = INT8_MAX;
	uint64_t x90 = 114789940000LLU;
	volatile int64_t x91 = -1331664552426LL;
	static uint16_t x92 = 7U;
	volatile int32_t t13 = -14713;

	t13 = ((x89<=(x90*x91))|x92);

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x93 = INT64_MAX;
	int64_t x94 = -119723864LL;
	volatile uint8_t x95 = 6U;
	uint8_t x96 = UINT8_MAX;
	static volatile int32_t t14 = 1599;

	t14 = ((x93<=(x94*x95))|x96);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x97 = UINT32_MAX;
	static uint8_t x98 = 6U;
	int8_t x100 = INT8_MIN;

	t15 = ((x97<=(x98*x99))|x100);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = INT16_MAX;
	int8_t x104 = -1;
	int32_t t16 = 21;

	t16 = ((x101<=(x102*x103))|x104);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x105 = INT32_MAX;
	int16_t x106 = 9;
	int32_t x107 = 221;
	static int8_t x108 = INT8_MAX;
	int32_t t17 = 8715762;

	t17 = ((x105<=(x106*x107))|x108);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x109 = 1;
	uint64_t x110 = UINT64_MAX;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = INT16_MIN;
	static int32_t t18 = 3;

	t18 = ((x109<=(x110*x111))|x112);

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x113 = -24;
	int16_t x115 = INT16_MIN;
	static uint64_t x116 = 49366LLU;
	uint64_t t19 = 1647LLU;

	t19 = ((x113<=(x114*x115))|x116);

	if (t19 != 49366LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MAX;
	volatile int32_t t20 = INT32_MAX;

	t20 = ((x121<=(x122*x123))|x124);

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x125 = -1;
	volatile int8_t x126 = INT8_MAX;
	uint16_t x127 = 445U;
	static int32_t t21 = 10;

	t21 = ((x125<=(x126*x127))|x128);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x130 = UINT16_MAX;
	volatile int8_t x131 = -1;
	volatile int32_t x132 = 23896;
	int32_t t22 = 807773543;

	t22 = ((x129<=(x130*x131))|x132);

	if (t22 != 23896) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x133 = 4U;
	uint32_t x134 = 0U;
	static uint32_t x135 = 40286U;
	volatile uint16_t x136 = 8162U;
	int32_t t23 = -7725057;

	t23 = ((x133<=(x134*x135))|x136);

	if (t23 != 8162) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x142 = -17;
	uint8_t x143 = 11U;
	static int64_t x144 = -1LL;
	volatile int64_t t24 = -48514780LL;

	t24 = ((x141<=(x142*x143))|x144);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x145 = -1LL;
	uint8_t x146 = UINT8_MAX;
	uint8_t x147 = UINT8_MAX;
	static int64_t x148 = INT64_MIN;

	t25 = ((x145<=(x146*x147))|x148);

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x159 = INT8_MIN;

	t26 = ((x157<=(x158*x159))|x160);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x169 = 117U;
	int8_t x170 = -1;
	static int16_t x171 = INT16_MIN;
	uint32_t x172 = 780U;
	uint32_t t27 = 25U;

	t27 = ((x169<=(x170*x171))|x172);

	if (t27 != 781U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x174 = INT32_MIN;
	volatile int64_t x175 = -1LL;
	int8_t x176 = -60;
	static volatile int32_t t28 = -4747;

	t28 = ((x173<=(x174*x175))|x176);

	if (t28 != -60) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x181 = 140;
	volatile int16_t x182 = 0;
	static int16_t x184 = INT16_MIN;
	static int32_t t29 = 692;

	t29 = ((x181<=(x182*x183))|x184);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = INT64_MIN;
	uint32_t x187 = 4U;
	volatile int32_t t30 = -44;

	t30 = ((x185<=(x186*x187))|x188);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x189 = -7;
	uint32_t x190 = 1U;
	int8_t x191 = INT8_MIN;
	static int16_t x192 = INT16_MIN;

	t31 = ((x189<=(x190*x191))|x192);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x194 = -5119;
	int32_t x195 = 13430;
	volatile int32_t t32 = 12220;

	t32 = ((x193<=(x194*x195))|x196);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x198 = 460U;
	volatile int16_t x199 = -46;
	int8_t x200 = -7;
	volatile int32_t t33 = 392069;

	t33 = ((x197<=(x198*x199))|x200);

	if (t33 != -7) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x202 = -1793819160914998LL;
	int8_t x203 = -1;
	int8_t x204 = INT8_MAX;

	t34 = ((x201<=(x202*x203))|x204);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = INT16_MIN;
	uint16_t x206 = 575U;
	int8_t x207 = INT8_MIN;
	int64_t x208 = -1LL;
	int64_t t35 = 31709980764LL;

	t35 = ((x205<=(x206*x207))|x208);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x209 = INT8_MIN;
	int32_t x210 = -1;
	static int16_t x211 = -1;
	static int8_t x212 = INT8_MAX;

	t36 = ((x209<=(x210*x211))|x212);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x214 = 29578U;
	int8_t x215 = -57;
	volatile int16_t x216 = -1;

	t37 = ((x213<=(x214*x215))|x216);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x217 = 370936U;
	int64_t x218 = 229799112293010LL;
	uint32_t x220 = 9300337U;
	volatile uint32_t t38 = 5772196U;

	t38 = ((x217<=(x218*x219))|x220);

	if (t38 != 9300337U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x222 = -1;
	volatile uint16_t x223 = UINT16_MAX;
	uint32_t x224 = UINT32_MAX;

	t39 = ((x221<=(x222*x223))|x224);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x225 = INT8_MIN;
	volatile uint16_t x226 = 22U;
	int16_t x227 = INT16_MAX;
	int32_t t40 = -13;

	t40 = ((x225<=(x226*x227))|x228);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x230 = 1208U;
	int32_t x231 = -1;
	static volatile int16_t x232 = -1;
	volatile int32_t t41 = -663313;

	t41 = ((x229<=(x230*x231))|x232);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x233 = 8U;
	uint8_t x234 = 59U;
	volatile uint64_t x235 = 429LLU;
	int64_t x236 = 2199774411LL;
	volatile int64_t t42 = 12628819036LL;

	t42 = ((x233<=(x234*x235))|x236);

	if (t42 != 2199774411LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x245 = INT16_MIN;
	volatile int64_t x246 = -1LL;
	static volatile int64_t t43 = -787838934837545LL;

	t43 = ((x245<=(x246*x247))|x248);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x250 = 7;
	int8_t x251 = INT8_MIN;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t44 = -298609;

	t44 = ((x249<=(x250*x251))|x252);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x254 = INT32_MIN;
	volatile uint64_t x255 = 1206387483LLU;
	volatile int64_t x256 = INT64_MIN;
	int64_t t45 = 26LL;

	t45 = ((x253<=(x254*x255))|x256);

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x257 = 420201307664042LLU;
	int32_t x258 = -1;
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = -1;
	volatile int32_t t46 = -1;

	t46 = ((x257<=(x258*x259))|x260);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x265 = 2583063LLU;
	int8_t x266 = -1;
	int16_t x267 = INT16_MIN;
	static uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x265<=(x266*x267))|x268);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x273 = 347U;
	volatile uint64_t x274 = UINT64_MAX;
	static uint16_t x275 = UINT16_MAX;
	int32_t x276 = 48;
	int32_t t48 = -97421;

	t48 = ((x273<=(x274*x275))|x276);

	if (t48 != 49) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x278 = 13921U;
	uint8_t x279 = UINT8_MAX;
	uint32_t x280 = UINT32_MAX;
	uint32_t t49 = UINT32_MAX;

	t49 = ((x277<=(x278*x279))|x280);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x281 = INT32_MIN;
	uint16_t x283 = 10727U;
	int16_t x284 = INT16_MIN;

	t50 = ((x281<=(x282*x283))|x284);

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = INT8_MIN;
	static uint64_t x286 = UINT64_MAX;
	uint32_t x287 = UINT32_MAX;
	int16_t x288 = INT16_MIN;
	volatile int32_t t51 = 627656;

	t51 = ((x285<=(x286*x287))|x288);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x290 = -1;
	uint32_t x291 = 1945130541U;
	volatile uint32_t x292 = 51733166U;
	volatile uint32_t t52 = 6819U;

	t52 = ((x289<=(x290*x291))|x292);

	if (t52 != 51733167U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x294 = -1;
	int32_t x295 = -3;
	int32_t t53 = -154;

	t53 = ((x293<=(x294*x295))|x296);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x297 = -1;
	uint64_t x298 = 41901490473404459LLU;
	uint16_t x299 = UINT16_MAX;
	uint64_t x300 = 71117454LLU;
	static uint64_t t54 = 1LLU;

	t54 = ((x297<=(x298*x299))|x300);

	if (t54 != 71117454LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x302 = 1U;
	int32_t x303 = INT32_MIN;
	int64_t x304 = -330300790LL;
	volatile int64_t t55 = -16839607807946313LL;

	t55 = ((x301<=(x302*x303))|x304);

	if (t55 != -330300790LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x309 = 4309641U;
	static volatile int32_t x310 = INT32_MIN;
	static uint32_t x311 = UINT32_MAX;
	int32_t t56 = -21125735;

	t56 = ((x309<=(x310*x311))|x312);

	if (t56 != 51) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x314 = 6352212U;
	static uint8_t x315 = 0U;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t57 = INT32_MAX;

	t57 = ((x313<=(x314*x315))|x316);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x321 = -1LL;
	int32_t x322 = 1363659;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t58 = 996843478;

	t58 = ((x321<=(x322*x323))|x324);

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = -1LL;
	uint16_t x326 = 10U;
	int8_t x327 = INT8_MAX;
	int64_t x328 = -1LL;
	int64_t t59 = 7LL;

	t59 = ((x325<=(x326*x327))|x328);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x329 = INT16_MIN;
	volatile uint32_t x330 = 2216U;
	uint64_t x331 = 36785597924008883LLU;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t60 = INT32_MIN;

	t60 = ((x329<=(x330*x331))|x332);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x343 = 0;
	int16_t x344 = -126;
	int32_t t61 = 170231962;

	t61 = ((x341<=(x342*x343))|x344);

	if (t61 != -126) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x345 = 2U;
	int8_t x346 = INT8_MIN;
	uint32_t x347 = UINT32_MAX;
	int8_t x348 = INT8_MAX;
	int32_t t62 = 7574;

	t62 = ((x345<=(x346*x347))|x348);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x349 = UINT64_MAX;
	static int16_t x350 = 7943;
	int64_t x351 = -1LL;
	uint64_t t63 = 826394421LLU;

	t63 = ((x349<=(x350*x351))|x352);

	if (t63 != 458116143LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x353 = -14825;
	int16_t x354 = -1;
	static volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x353<=(x354*x355))|x356);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x358 = INT16_MAX;
	static volatile int8_t x359 = -1;
	static volatile int32_t t65 = 0;

	t65 = ((x357<=(x358*x359))|x360);

	if (t65 != 20521) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x366 = 0;
	uint16_t x367 = 7273U;
	uint16_t x368 = UINT16_MAX;
	int32_t t66 = 362420;

	t66 = ((x365<=(x366*x367))|x368);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x373 = 23U;
	volatile uint8_t x374 = 1U;
	int16_t x375 = INT16_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t67 = -79253107;

	t67 = ((x373<=(x374*x375))|x376);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x377 = UINT16_MAX;
	int8_t x378 = INT8_MAX;
	uint16_t x379 = UINT16_MAX;
	int16_t x380 = INT16_MAX;
	volatile int32_t t68 = -586334704;

	t68 = ((x377<=(x378*x379))|x380);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x381 = INT32_MIN;
	volatile uint16_t x382 = 201U;
	static volatile int8_t x383 = -1;
	static int16_t x384 = INT16_MIN;
	static int32_t t69 = -4033;

	t69 = ((x381<=(x382*x383))|x384);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x387 = 114U;
	uint16_t x388 = 845U;
	volatile int32_t t70 = -179465;

	t70 = ((x385<=(x386*x387))|x388);

	if (t70 != 845) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x398 = 4U;
	uint16_t x399 = 1U;

	t71 = ((x397<=(x398*x399))|x400);

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x401 = INT8_MAX;
	static volatile uint32_t x403 = UINT32_MAX;
	uint32_t x404 = 1U;
	volatile uint32_t t72 = 30665872U;

	t72 = ((x401<=(x402*x403))|x404);

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x406 = -279375065476LL;
	int16_t x408 = -1;
	volatile int32_t t73 = -4112904;

	t73 = ((x405<=(x406*x407))|x408);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x413 = INT32_MAX;
	uint32_t x414 = 279U;
	static int8_t x415 = -3;
	static int8_t x416 = -1;
	volatile int32_t t74 = 15;

	t74 = ((x413<=(x414*x415))|x416);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x417 = -1;
	volatile uint8_t x419 = UINT8_MAX;
	uint16_t x420 = 487U;
	volatile int32_t t75 = -15647;

	t75 = ((x417<=(x418*x419))|x420);

	if (t75 != 487) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x421 = 186;
	static int8_t x422 = INT8_MIN;
	int32_t x423 = 1954;
	int64_t x424 = 896786737LL;
	int64_t t76 = 3683512270LL;

	t76 = ((x421<=(x422*x423))|x424);

	if (t76 != 896786737LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x425 = UINT16_MAX;
	int32_t x426 = 57891;
	uint8_t x427 = 0U;
	volatile int32_t x428 = -99;
	volatile int32_t t77 = 372;

	t77 = ((x425<=(x426*x427))|x428);

	if (t77 != -99) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x429 = INT32_MAX;
	int64_t x430 = -1LL;
	static uint32_t x431 = 6U;
	int64_t x432 = -30606071776439LL;
	int64_t t78 = 7334LL;

	t78 = ((x429<=(x430*x431))|x432);

	if (t78 != -30606071776439LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x438 = 25054759U;
	uint64_t x439 = UINT64_MAX;
	int64_t x440 = INT64_MIN;
	volatile int64_t t79 = 263910602154151419LL;

	t79 = ((x437<=(x438*x439))|x440);

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x442 = 116;
	static volatile int64_t x443 = -157806095344LL;
	static uint64_t x444 = 1743977116797LLU;
	volatile uint64_t t80 = 260336429274418LLU;

	t80 = ((x441<=(x442*x443))|x444);

	if (t80 != 1743977116797LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x445 = 1U;
	volatile uint8_t x446 = 2U;
	static int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MIN;
	volatile int32_t t81 = 1974690;

	t81 = ((x445<=(x446*x447))|x448);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x449 = 10U;
	static volatile uint16_t x450 = UINT16_MAX;
	int16_t x451 = INT16_MAX;
	int64_t x452 = INT64_MIN;
	static int64_t t82 = -516928LL;

	t82 = ((x449<=(x450*x451))|x452);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x462 = 1;
	volatile int64_t x463 = -1LL;
	int32_t x464 = 0;
	int32_t t83 = -129305;

	t83 = ((x461<=(x462*x463))|x464);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x465 = INT32_MIN;
	uint8_t x467 = 5U;

	t84 = ((x465<=(x466*x467))|x468);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x473 = -1;
	int8_t x475 = INT8_MIN;
	volatile int32_t t85 = 1;

	t85 = ((x473<=(x474*x475))|x476);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x477 = UINT64_MAX;
	int16_t x479 = INT16_MIN;
	volatile int32_t t86 = 1;

	t86 = ((x477<=(x478*x479))|x480);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x481 = 0U;
	static uint64_t x482 = 123581094595144652LLU;
	int16_t x483 = INT16_MAX;
	static int16_t x484 = INT16_MAX;
	int32_t t87 = -533;

	t87 = ((x481<=(x482*x483))|x484);

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x485 = -3;
	int64_t x486 = -19LL;
	volatile int16_t x487 = -83;
	static int16_t x488 = 1278;
	static int32_t t88 = -1057463;

	t88 = ((x485<=(x486*x487))|x488);

	if (t88 != 1279) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x493 = INT32_MAX;
	volatile uint8_t x494 = UINT8_MAX;
	volatile uint8_t x495 = 98U;
	uint64_t x496 = 179539880032LLU;

	t89 = ((x493<=(x494*x495))|x496);

	if (t89 != 179539880032LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x497 = INT8_MAX;
	volatile uint32_t x498 = UINT32_MAX;
	volatile int32_t t90 = 951831248;

	t90 = ((x497<=(x498*x499))|x500);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x506 = -1;
	static int16_t x508 = INT16_MAX;

	t91 = ((x505<=(x506*x507))|x508);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x520 = UINT32_MAX;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = ((x517<=(x518*x519))|x520);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x521 = -1;
	int32_t x522 = -2663;
	volatile int8_t x523 = -1;
	volatile int8_t x524 = 0;
	int32_t t93 = 4;

	t93 = ((x521<=(x522*x523))|x524);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MIN;
	uint64_t x531 = 30226893736468123LLU;
	static uint16_t x532 = UINT16_MAX;

	t94 = ((x529<=(x530*x531))|x532);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x533 = INT32_MIN;
	uint8_t x534 = 42U;
	int8_t x535 = 1;
	volatile int32_t t95 = 0;

	t95 = ((x533<=(x534*x535))|x536);

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x541 = -1;
	uint32_t x543 = 204U;
	int16_t x544 = -495;
	volatile int32_t t96 = 117785;

	t96 = ((x541<=(x542*x543))|x544);

	if (t96 != -495) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x565 = INT16_MIN;
	volatile int8_t x566 = INT8_MAX;
	static uint32_t x567 = 14055354U;
	int32_t x568 = -1;

	t97 = ((x565<=(x566*x567))|x568);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x573 = INT64_MIN;
	uint32_t x574 = UINT32_MAX;
	int64_t x575 = -1LL;
	static uint16_t x576 = 2U;
	volatile int32_t t98 = 1;

	t98 = ((x573<=(x574*x575))|x576);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x577 = 314U;
	int32_t x578 = -55618;
	volatile int8_t x579 = 1;
	int8_t x580 = -1;
	int32_t t99 = -316251993;

	t99 = ((x577<=(x578*x579))|x580);

	if (t99 != -1) { NG(); } else { ; }
	
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

