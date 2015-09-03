#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x23 = 1032;
static volatile int32_t x28 = -4925;
static int64_t x34 = -4319329LL;
static int32_t t7 = -54094685;
static uint16_t x39 = UINT16_MAX;
volatile int32_t t8 = -138443967;
volatile uint8_t x44 = 80U;
volatile int32_t t9 = 232747687;
static volatile int64_t x47 = 1546532LL;
int64_t x48 = 24229487500LL;
int32_t t10 = 1848870;
int8_t x49 = INT8_MIN;
int16_t x52 = INT16_MAX;
int32_t t11 = -2090;
uint32_t x53 = 25091U;
int32_t x56 = INT32_MIN;
static uint16_t x62 = 0U;
volatile int32_t t13 = 62676161;
volatile int32_t t14 = -4;
uint32_t x78 = 1954483909U;
uint8_t x79 = 18U;
static int64_t x83 = -4LL;
static volatile uint16_t x84 = UINT16_MAX;
int32_t t17 = 15164;
volatile int32_t x89 = INT32_MIN;
uint32_t x90 = 5371U;
volatile int8_t x102 = INT8_MIN;
static volatile int8_t x103 = -38;
static int8_t x104 = INT8_MAX;
uint32_t x105 = UINT32_MAX;
static uint32_t x106 = 0U;
int32_t x108 = -137141;
uint32_t x113 = 918944U;
uint16_t x129 = 1U;
int8_t x142 = 46;
int32_t t31 = 990;
static int64_t x159 = INT64_MIN;
volatile int32_t x160 = -1;
volatile int64_t x161 = -331LL;
uint64_t x162 = 24133619310LLU;
uint16_t x165 = 218U;
int8_t x175 = 1;
volatile uint32_t x176 = UINT32_MAX;
int64_t x178 = INT64_MIN;
uint8_t x188 = 52U;
static volatile int32_t t39 = -6471;
uint32_t x194 = 37U;
volatile int16_t x196 = INT16_MIN;
uint64_t x203 = UINT64_MAX;
int8_t x206 = 1;
int16_t x209 = INT16_MIN;
uint8_t x210 = 0U;
int32_t t45 = -104920191;
volatile int32_t x214 = -47056721;
volatile int32_t t46 = 13272;
int16_t x218 = INT16_MIN;
static int16_t x221 = INT16_MIN;
uint8_t x224 = 15U;
volatile int32_t t49 = 0;
int8_t x257 = -22;
int32_t x258 = 1;
int16_t x259 = INT16_MIN;
volatile uint32_t x263 = UINT32_MAX;
int8_t x275 = INT8_MIN;
volatile uint32_t x278 = 10910278U;
volatile uint16_t x279 = UINT16_MAX;
int16_t x280 = 0;
volatile uint32_t x282 = 7U;
int16_t x287 = 8;
int64_t x292 = -1LL;
int8_t x295 = 26;
static uint8_t x311 = 3U;
volatile uint16_t x313 = 11U;
uint64_t x314 = UINT64_MAX;
int32_t x319 = 1804;
volatile int32_t t69 = -12;
int64_t x324 = 575976873894428897LL;
uint32_t x330 = 8196U;
static int32_t t71 = -18;
volatile uint8_t x337 = 2U;
int32_t t73 = 1;
volatile uint8_t x341 = 0U;
int16_t x344 = -1;
volatile int32_t t74 = -31352;
uint16_t x346 = 3U;
uint16_t x347 = 24U;
uint32_t x352 = 54U;
static int32_t t77 = 20709169;
uint32_t x359 = 213U;
int64_t x365 = INT64_MAX;
int32_t t79 = -28;
volatile int32_t t80 = 34649624;
volatile int32_t x377 = INT32_MIN;
uint64_t x389 = 349LLU;
int32_t t84 = 3;
uint8_t x405 = 0U;
int16_t x407 = -1;
static uint64_t x409 = 244652433613767946LLU;
int64_t x427 = -1LL;
volatile uint32_t x428 = 100819686U;
volatile int16_t x433 = INT16_MAX;
int8_t x434 = INT8_MIN;
int16_t x436 = -1;
static int8_t x438 = INT8_MIN;
int32_t x440 = 122;
volatile int16_t x451 = INT16_MIN;


void f0(void) {
	int64_t x5 = 119LL;
	volatile int16_t x6 = -1;
	uint64_t x7 = 90260659358147LLU;
	int32_t x8 = -287192;
	volatile int32_t t0 = 5701261;

	t0 = (((x5+x6)-x7)<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MIN;
	static int16_t x11 = INT16_MIN;
	static int32_t x12 = 198791;
	volatile int32_t t1 = 568924;

	t1 = (((x9+x10)-x11)<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -11;
	static uint64_t x14 = 126619LLU;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = 254490LLU;
	volatile int32_t t2 = -23012482;

	t2 = (((x13+x14)-x15)<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = UINT8_MAX;
	static uint8_t x18 = 8U;
	uint64_t x19 = 3301356422205LLU;
	int64_t x20 = 0LL;
	int32_t t3 = -50653449;

	t3 = (((x17+x18)-x19)<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	int32_t x24 = 1556031;
	int32_t t4 = -3;

	t4 = (((x21+x22)-x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -57LL;
	volatile int32_t x26 = INT32_MIN;
	volatile int32_t x27 = -1;
	int32_t t5 = 2692;

	t5 = (((x25+x26)-x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	int8_t x30 = INT8_MIN;
	volatile int16_t x31 = INT16_MAX;
	static int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -637;

	t6 = (((x29+x30)-x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int64_t x35 = -1LL;
	volatile int16_t x36 = INT16_MIN;

	t7 = (((x33+x34)-x35)<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = -1LL;
	uint64_t x38 = UINT64_MAX;
	int32_t x40 = 8847;

	t8 = (((x37+x38)-x39)<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 497U;
	int8_t x42 = -1;
	volatile uint64_t x43 = UINT64_MAX;

	t9 = (((x41+x42)-x43)<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	static uint32_t x46 = 29042U;

	t10 = (((x45+x46)-x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;

	t11 = (((x49+x50)-x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = -1;
	static uint64_t x55 = UINT64_MAX;
	volatile int32_t t12 = 93441;

	t12 = (((x53+x54)-x55)<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 10169U;
	int8_t x63 = INT8_MAX;
	volatile int8_t x64 = -1;

	t13 = (((x61+x62)-x63)<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x65 = INT16_MAX;
	static uint32_t x66 = 9U;
	int32_t x67 = -1;
	volatile uint16_t x68 = 12U;

	t14 = (((x65+x66)-x67)<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x77 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t15 = -2479;

	t15 = (((x77+x78)-x79)<x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	volatile int64_t x82 = 786585LL;
	int32_t t16 = 25;

	t16 = (((x81+x82)-x83)<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = UINT64_MAX;
	uint8_t x86 = UINT8_MAX;
	static int32_t x87 = 2822;
	int32_t x88 = INT32_MAX;

	t17 = (((x85+x86)-x87)<x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x91 = -9260576LL;
	static uint64_t x92 = UINT64_MAX;
	int32_t t18 = -493;

	t18 = (((x89+x90)-x91)<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 522036997U;
	uint64_t x94 = 994260653LLU;
	uint64_t x95 = UINT64_MAX;
	static int16_t x96 = 521;
	volatile int32_t t19 = -844393729;

	t19 = (((x93+x94)-x95)<x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	volatile int32_t t20 = -14;

	t20 = (((x101+x102)-x103)<x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x107 = INT32_MAX;
	int32_t t21 = -3322;

	t21 = (((x105+x106)-x107)<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = INT16_MIN;
	int32_t x110 = -1;
	uint8_t x111 = 2U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t22 = -305672;

	t22 = (((x109+x110)-x111)<x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x114 = 58876596LLU;
	volatile uint16_t x115 = 1285U;
	uint32_t x116 = 303171U;
	static int32_t t23 = -2099763;

	t23 = (((x113+x114)-x115)<x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = UINT32_MAX;
	uint32_t x118 = UINT32_MAX;
	static int64_t x119 = 458293LL;
	volatile uint32_t x120 = UINT32_MAX;
	volatile int32_t t24 = 2;

	t24 = (((x117+x118)-x119)<x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 18731182263109726LLU;
	uint64_t x122 = 39417967LLU;
	int16_t x123 = -1;
	int32_t x124 = -5552941;
	static int32_t t25 = 19208;

	t25 = (((x121+x122)-x123)<x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 2U;
	uint32_t x126 = 4879U;
	volatile int32_t x127 = INT32_MIN;
	static int32_t x128 = INT32_MAX;
	int32_t t26 = -14304839;

	t26 = (((x125+x126)-x127)<x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x130 = INT64_MIN;
	volatile int8_t x131 = INT8_MIN;
	uint16_t x132 = UINT16_MAX;
	static volatile int32_t t27 = 11371;

	t27 = (((x129+x130)-x131)<x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	static uint16_t x139 = UINT16_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t28 = -1;

	t28 = (((x137+x138)-x139)<x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = 215;
	uint16_t x143 = UINT16_MAX;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t29 = -20800;

	t29 = (((x141+x142)-x143)<x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x149 = 64412377U;
	int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MIN;
	int64_t x152 = 17486520337LL;
	int32_t t30 = -31;

	t30 = (((x149+x150)-x151)<x152);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x153 = 1U;
	uint64_t x154 = 953761900LLU;
	uint64_t x155 = 123047661393029960LLU;
	uint32_t x156 = UINT32_MAX;

	t31 = (((x153+x154)-x155)<x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x157 = 13185557LLU;
	int8_t x158 = 0;
	volatile int32_t t32 = -10228;

	t32 = (((x157+x158)-x159)<x160);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x163 = -59;
	int8_t x164 = INT8_MIN;
	int32_t t33 = -2011916;

	t33 = (((x161+x162)-x163)<x164);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x166 = 24;
	uint32_t x167 = 3337883U;
	int64_t x168 = INT64_MAX;
	volatile int32_t t34 = -8;

	t34 = (((x165+x166)-x167)<x168);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = 31507546LLU;
	int16_t x170 = INT16_MIN;
	static uint16_t x171 = 83U;
	static int16_t x172 = INT16_MIN;
	int32_t t35 = -53;

	t35 = (((x169+x170)-x171)<x172);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MIN;
	volatile int32_t t36 = -14519608;

	t36 = (((x173+x174)-x175)<x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x177 = 240528137237LL;
	int16_t x179 = 16;
	int32_t x180 = INT32_MIN;
	int32_t t37 = 10850;

	t37 = (((x177+x178)-x179)<x180);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x181 = 5U;
	uint64_t x182 = 94242500LLU;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t38 = 791884204;

	t38 = (((x181+x182)-x183)<x184);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = 60;
	int8_t x186 = 1;
	int16_t x187 = INT16_MIN;

	t39 = (((x185+x186)-x187)<x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x189 = 1090328140200782210LLU;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = -1;
	int32_t x192 = -1;
	volatile int32_t t40 = 308464558;

	t40 = (((x189+x190)-x191)<x192);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 1697U;
	static volatile uint64_t x195 = UINT64_MAX;
	static volatile int32_t t41 = 1;

	t41 = (((x193+x194)-x195)<x196);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x197 = UINT64_MAX;
	int16_t x198 = -1;
	uint16_t x199 = UINT16_MAX;
	volatile uint16_t x200 = 14U;
	static volatile int32_t t42 = 1323254;

	t42 = (((x197+x198)-x199)<x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t43 = -15075;

	t43 = (((x201+x202)-x203)<x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x205 = 1165U;
	volatile uint64_t x207 = 26246110808820LLU;
	static int32_t x208 = -78769573;
	int32_t t44 = -28405698;

	t44 = (((x205+x206)-x207)<x208);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x211 = INT16_MIN;
	static int32_t x212 = INT32_MAX;

	t45 = (((x209+x210)-x211)<x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = -1;
	static int16_t x215 = INT16_MIN;
	int8_t x216 = 0;

	t46 = (((x213+x214)-x215)<x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x217 = -1;
	int16_t x219 = INT16_MAX;
	int32_t x220 = INT32_MIN;
	int32_t t47 = 3140;

	t47 = (((x217+x218)-x219)<x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x222 = 854946619U;
	int8_t x223 = -1;
	int32_t t48 = -24019;

	t48 = (((x221+x222)-x223)<x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x225 = -1;
	static int8_t x226 = INT8_MIN;
	static volatile uint16_t x227 = 1U;
	int32_t x228 = INT32_MIN;

	t49 = (((x225+x226)-x227)<x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 110735U;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = -12047836346LL;
	volatile int64_t x232 = 384557582437389257LL;
	int32_t t50 = -33253648;

	t50 = (((x229+x230)-x231)<x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	int16_t x235 = -1;
	uint32_t x236 = 4U;
	volatile int32_t t51 = 42;

	t51 = (((x233+x234)-x235)<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x237 = 1U;
	static volatile int64_t x238 = 66562202867773LL;
	uint32_t x239 = 943U;
	uint64_t x240 = 37983507647917438LLU;
	static volatile int32_t t52 = -481501;

	t52 = (((x237+x238)-x239)<x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x241 = 173U;
	static int8_t x242 = 2;
	uint8_t x243 = 12U;
	int64_t x244 = -1LL;
	volatile int32_t t53 = -14;

	t53 = (((x241+x242)-x243)<x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = 2;
	volatile int32_t x246 = -1;
	static volatile int8_t x247 = INT8_MIN;
	int16_t x248 = 26;
	volatile int32_t t54 = 536;

	t54 = (((x245+x246)-x247)<x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = UINT32_MAX;
	uint32_t x250 = 846U;
	uint16_t x251 = 62U;
	int32_t x252 = INT32_MIN;
	int32_t t55 = -2455;

	t55 = (((x249+x250)-x251)<x252);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x260 = 20U;
	int32_t t56 = 126955624;

	t56 = (((x257+x258)-x259)<x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = -1;
	static volatile int8_t x264 = 1;
	int32_t t57 = -310;

	t57 = (((x261+x262)-x263)<x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x265 = -1590586LL;
	int64_t x266 = INT64_MAX;
	uint32_t x267 = 8367U;
	volatile int16_t x268 = -1;
	volatile int32_t t58 = 250252483;

	t58 = (((x265+x266)-x267)<x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = INT16_MIN;
	volatile int8_t x270 = -1;
	uint32_t x271 = 77714324U;
	int32_t x272 = INT32_MIN;
	int32_t t59 = 1;

	t59 = (((x269+x270)-x271)<x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	volatile uint8_t x276 = 4U;
	volatile int32_t t60 = 100787742;

	t60 = (((x273+x274)-x275)<x276);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = 141U;
	int32_t t61 = 23;

	t61 = (((x277+x278)-x279)<x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MAX;
	volatile int16_t x283 = INT16_MAX;
	int64_t x284 = -1202876887LL;
	static int32_t t62 = -1140504;

	t62 = (((x281+x282)-x283)<x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = -1;
	int32_t x286 = -1730389;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t63 = -46387270;

	t63 = (((x285+x286)-x287)<x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x289 = UINT32_MAX;
	int16_t x290 = -404;
	int32_t x291 = -24;
	int32_t t64 = 12772;

	t64 = (((x289+x290)-x291)<x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = -10;
	static int16_t x294 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t65 = -662319;

	t65 = (((x293+x294)-x295)<x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x297 = -1;
	static volatile uint64_t x298 = 3205LLU;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MAX;
	volatile int32_t t66 = 121;

	t66 = (((x297+x298)-x299)<x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x309 = 315746132277929791LLU;
	int32_t x310 = INT32_MAX;
	volatile uint8_t x312 = UINT8_MAX;
	int32_t t67 = -92091863;

	t67 = (((x309+x310)-x311)<x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x315 = INT16_MIN;
	static int32_t x316 = INT32_MIN;
	int32_t t68 = 48052307;

	t68 = (((x313+x314)-x315)<x316);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x317 = -1;
	uint64_t x318 = 8251016LLU;
	volatile int8_t x320 = INT8_MAX;

	t69 = (((x317+x318)-x319)<x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = -14;
	static int8_t x322 = -1;
	volatile int32_t x323 = -50978520;
	volatile int32_t t70 = -15608802;

	t70 = (((x321+x322)-x323)<x324);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x329 = 9523LLU;
	static int64_t x331 = -29582812LL;
	volatile int32_t x332 = -3;

	t71 = (((x329+x330)-x331)<x332);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = 323286632U;
	int16_t x334 = -170;
	int32_t x335 = -3;
	int16_t x336 = -1;
	volatile int32_t t72 = -53565480;

	t72 = (((x333+x334)-x335)<x336);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x338 = 69;
	uint64_t x339 = 850862LLU;
	int8_t x340 = -1;

	t73 = (((x337+x338)-x339)<x340);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x342 = 8994635703288233LLU;
	volatile uint16_t x343 = 21U;

	t74 = (((x341+x342)-x343)<x344);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = 6160;
	static volatile int16_t x348 = -1;
	int32_t t75 = -1176;

	t75 = (((x345+x346)-x347)<x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x349 = 10U;
	static uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MAX;
	int32_t t76 = -454;

	t76 = (((x349+x350)-x351)<x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = -48230538;
	volatile uint16_t x354 = UINT16_MAX;
	static uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 1609238U;

	t77 = (((x353+x354)-x355)<x356);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = -102LL;
	int8_t x358 = 4;
	static int64_t x360 = 3LL;
	volatile int32_t t78 = 2758753;

	t78 = (((x357+x358)-x359)<x360);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x366 = 150510594701650492LLU;
	int16_t x367 = 11879;
	uint32_t x368 = 115U;

	t79 = (((x365+x366)-x367)<x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x369 = 16U;
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;

	t80 = (((x369+x370)-x371)<x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MAX;
	uint64_t x374 = 3899102LLU;
	volatile uint64_t x375 = 1332LLU;
	int16_t x376 = INT16_MIN;
	volatile int32_t t81 = 61820577;

	t81 = (((x373+x374)-x375)<x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x378 = INT32_MAX;
	static int32_t x379 = INT32_MIN;
	volatile uint8_t x380 = UINT8_MAX;
	int32_t t82 = 8955501;

	t82 = (((x377+x378)-x379)<x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x381 = UINT8_MAX;
	uint32_t x382 = 0U;
	uint64_t x383 = 796LLU;
	int16_t x384 = 1;
	int32_t t83 = -514543949;

	t83 = (((x381+x382)-x383)<x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x390 = INT64_MIN;
	int16_t x391 = 1;
	static int8_t x392 = 1;

	t84 = (((x389+x390)-x391)<x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = INT64_MIN;
	static uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MAX;
	uint8_t x396 = 8U;
	static int32_t t85 = -12189;

	t85 = (((x393+x394)-x395)<x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = 1;
	uint16_t x398 = 226U;
	int64_t x399 = INT64_MAX;
	static int32_t x400 = INT32_MIN;
	volatile int32_t t86 = 29851;

	t86 = (((x397+x398)-x399)<x400);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x406 = 62153738;
	static int64_t x408 = INT64_MIN;
	int32_t t87 = 1;

	t87 = (((x405+x406)-x407)<x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x410 = 31LLU;
	uint16_t x411 = UINT16_MAX;
	uint64_t x412 = UINT64_MAX;
	int32_t t88 = -1520512;

	t88 = (((x409+x410)-x411)<x412);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x413 = INT64_MIN;
	volatile int16_t x414 = 1;
	int16_t x415 = INT16_MIN;
	volatile uint64_t x416 = 43LLU;
	volatile int32_t t89 = 20068;

	t89 = (((x413+x414)-x415)<x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x417 = UINT32_MAX;
	int64_t x418 = -993LL;
	int8_t x419 = 0;
	uint8_t x420 = 0U;
	static int32_t t90 = 24026;

	t90 = (((x417+x418)-x419)<x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = INT8_MIN;
	volatile uint64_t x422 = 4LLU;
	uint32_t x423 = 296U;
	static int8_t x424 = -58;
	int32_t t91 = 29094278;

	t91 = (((x421+x422)-x423)<x424);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x425 = 1733;
	uint64_t x426 = UINT64_MAX;
	int32_t t92 = -420295;

	t92 = (((x425+x426)-x427)<x428);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = 12568;
	int64_t x430 = -1LL;
	uint32_t x431 = 4U;
	static volatile uint16_t x432 = 381U;
	int32_t t93 = 404928;

	t93 = (((x429+x430)-x431)<x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x435 = 39187U;
	static int32_t t94 = 3450;

	t94 = (((x433+x434)-x435)<x436);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x437 = -66118482638LL;
	static int64_t x439 = INT64_MIN;
	static volatile int32_t t95 = -24703;

	t95 = (((x437+x438)-x439)<x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x441 = 5089684LLU;
	int32_t x442 = -2;
	int16_t x443 = -1;
	uint64_t x444 = 873350130LLU;
	volatile int32_t t96 = 0;

	t96 = (((x441+x442)-x443)<x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x445 = 20U;
	uint8_t x446 = 1U;
	uint16_t x447 = 27U;
	int8_t x448 = INT8_MIN;
	static int32_t t97 = 1994042;

	t97 = (((x445+x446)-x447)<x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x449 = 3031U;
	uint32_t x450 = 25U;
	static int32_t x452 = 7063943;
	volatile int32_t t98 = 19614687;

	t98 = (((x449+x450)-x451)<x452);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x457 = 9U;
	int64_t x458 = 987056224444437LL;
	int8_t x459 = -1;
	int16_t x460 = -1;
	static volatile int32_t t99 = -22;

	t99 = (((x457+x458)-x459)<x460);

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

