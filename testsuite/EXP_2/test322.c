#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x5 = 15U;
static volatile uint16_t x6 = 47U;
volatile int8_t x8 = INT8_MAX;
int16_t x9 = 316;
volatile int32_t x11 = INT32_MIN;
int32_t t2 = -128696;
volatile int32_t t3 = -253287079;
int64_t x19 = INT64_MAX;
int32_t t5 = 1;
volatile int16_t x25 = 12;
int64_t x28 = INT64_MAX;
static uint32_t x29 = UINT32_MAX;
static volatile uint8_t x31 = 1U;
uint16_t x32 = 88U;
int32_t x37 = 9;
volatile int16_t x44 = -3;
int8_t x45 = INT8_MIN;
int32_t t11 = 4415893;
static int64_t x66 = 17591478188874LL;
static int32_t t13 = 3;
volatile int16_t x70 = INT16_MIN;
uint64_t x71 = 12920100120105895LLU;
int32_t t14 = -915;
int32_t x75 = -1;
volatile int16_t x79 = 964;
volatile int16_t x90 = -1;
int32_t x93 = -67278770;
static int32_t x102 = -30848825;
int16_t x111 = INT16_MIN;
volatile int16_t x113 = INT16_MIN;
int16_t x116 = -796;
uint8_t x125 = 14U;
static int32_t x137 = INT32_MIN;
volatile int32_t t30 = -4;
int32_t x151 = 49750;
static uint64_t x153 = 17568321579922LLU;
volatile uint32_t x160 = 46028454U;
static int32_t t34 = -230948610;
int32_t t36 = -26662;
int32_t x187 = INT32_MAX;
int32_t x189 = -13701;
static uint64_t x196 = UINT64_MAX;
uint64_t x203 = UINT64_MAX;
static int32_t x208 = INT32_MIN;
volatile int8_t x213 = 0;
uint8_t x214 = 8U;
volatile int32_t t48 = 323;
volatile uint32_t x228 = UINT32_MAX;
volatile uint64_t x230 = UINT64_MAX;
int8_t x239 = -1;
uint64_t x243 = UINT64_MAX;
volatile int32_t t53 = -8607570;
int16_t x246 = INT16_MAX;
int32_t x249 = INT32_MIN;
int64_t x254 = -42068619851LL;
volatile int8_t x260 = 2;
int32_t t60 = 9;
int16_t x274 = 0;
static int8_t x278 = 0;
int32_t t63 = -54934;
int32_t x289 = -1;
int32_t x290 = INT32_MAX;
static int32_t t64 = -482189;
int16_t x295 = 540;
int32_t t66 = 993;
static uint8_t x304 = 25U;
static int8_t x321 = INT8_MIN;
int32_t x322 = -129;
uint64_t x325 = UINT64_MAX;
volatile int16_t x327 = INT16_MIN;
int16_t x328 = INT16_MAX;
int16_t x330 = 478;
volatile int32_t t72 = 13975;
uint64_t x339 = UINT64_MAX;
int8_t x340 = INT8_MIN;
uint32_t x343 = UINT32_MAX;
int32_t t75 = 686345;
int8_t x346 = INT8_MIN;
uint16_t x347 = UINT16_MAX;
uint32_t x353 = 4U;
int16_t x354 = INT16_MIN;
int32_t t78 = 38158;
static volatile int32_t t80 = -439986048;
int32_t t83 = 18589;
int16_t x394 = INT16_MAX;
int8_t x403 = INT8_MIN;
static int8_t x408 = INT8_MIN;
volatile int32_t t90 = 470;
int64_t x409 = INT64_MIN;
int64_t x414 = -607482429260923LL;
int16_t x431 = -1;
int64_t x448 = 35381LL;
int32_t t98 = -538;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MIN;
	volatile int32_t x3 = -38;
	static int8_t x4 = INT8_MAX;
	int32_t t0 = -108;

	t0 = ((x1|(x2-x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = -1LL;
	int32_t t1 = 4;

	t1 = ((x5|(x6-x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	int32_t x12 = -793709;

	t2 = ((x9|(x10-x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 13U;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = INT8_MIN;
	int64_t x16 = -1LL;

	t3 = ((x13|(x14-x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int8_t x18 = INT8_MAX;
	uint64_t x20 = 65464248201742380LLU;
	int32_t t4 = -59;

	t4 = ((x17|(x18-x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 145315974LLU;
	int64_t x22 = -1LL;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = 77438762156LL;

	t5 = ((x21|(x22-x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 531212;
	volatile uint16_t x27 = 3U;
	int32_t t6 = -84;

	t6 = ((x25|(x26-x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 6465;
	volatile int32_t t7 = -6;

	t7 = ((x29|(x30-x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x38 = -2252;
	volatile int32_t x39 = -53305716;
	static uint16_t x40 = 25571U;
	static volatile int32_t t8 = -40;

	t8 = ((x37|(x38-x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = 14U;
	int8_t x42 = -17;
	uint32_t x43 = UINT32_MAX;
	volatile int32_t t9 = 1;

	t9 = ((x41|(x42-x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = -17;
	uint64_t x47 = 365546LLU;
	int8_t x48 = -1;
	volatile int32_t t10 = 225711;

	t10 = ((x45|(x46-x47))<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 6;
	uint32_t x50 = 670U;
	volatile uint8_t x51 = 2U;
	int64_t x52 = -112836209826197LL;

	t11 = ((x49|(x50-x51))<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x57 = 223U;
	int64_t x58 = INT64_MAX;
	volatile uint64_t x59 = UINT64_MAX;
	uint16_t x60 = 4923U;
	volatile int32_t t12 = -1454354;

	t12 = ((x57|(x58-x59))<=x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -3;
	static int32_t x67 = 187718319;
	static volatile uint64_t x68 = UINT64_MAX;

	t13 = ((x65|(x66-x67))<=x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -1;
	static uint8_t x72 = UINT8_MAX;

	t14 = ((x69|(x70-x71))<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = -329;
	uint64_t x76 = UINT64_MAX;
	int32_t t15 = 101762;

	t15 = ((x73|(x74-x75))<=x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = 0;
	uint32_t x78 = 419095684U;
	int32_t x80 = -167194;
	volatile int32_t t16 = 1874;

	t16 = ((x77|(x78-x79))<=x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	static int64_t x87 = INT64_MIN;
	static volatile int8_t x88 = -1;
	static int32_t t17 = 0;

	t17 = ((x85|(x86-x87))<=x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x89 = 99LLU;
	int32_t x91 = INT32_MAX;
	volatile int16_t x92 = -1;
	int32_t t18 = -5288115;

	t18 = ((x89|(x90-x91))<=x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x94 = 4891522797LLU;
	uint16_t x95 = 0U;
	volatile int16_t x96 = -1;
	volatile int32_t t19 = 13;

	t19 = ((x93|(x94-x95))<=x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 0LL;
	static volatile uint32_t x98 = 2085713U;
	static int32_t x99 = -1;
	int64_t x100 = INT64_MAX;
	volatile int32_t t20 = 994801;

	t20 = ((x97|(x98-x99))<=x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x101 = UINT8_MAX;
	volatile uint32_t x103 = 126U;
	volatile uint64_t x104 = 299LLU;
	volatile int32_t t21 = -28;

	t21 = ((x101|(x102-x103))<=x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	int32_t x107 = -1;
	int16_t x108 = INT16_MAX;
	volatile int32_t t22 = 1;

	t22 = ((x105|(x106-x107))<=x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x110 = 1589U;
	int32_t x112 = 1;
	int32_t t23 = 301;

	t23 = ((x109|(x110-x111))<=x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x114 = -403LL;
	int8_t x115 = -25;
	int32_t t24 = 203;

	t24 = ((x113|(x114-x115))<=x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MAX;
	uint32_t x118 = UINT32_MAX;
	volatile int8_t x119 = -1;
	static uint16_t x120 = 3U;
	volatile int32_t t25 = -6139;

	t25 = ((x117|(x118-x119))<=x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x126 = 3326LLU;
	volatile int8_t x127 = 0;
	volatile int8_t x128 = -1;
	int32_t t26 = 9178;

	t26 = ((x125|(x126-x127))<=x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x129 = INT8_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	volatile uint32_t x131 = 1842464472U;
	int8_t x132 = INT8_MIN;
	int32_t t27 = 11327052;

	t27 = ((x129|(x130-x131))<=x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	int8_t x135 = 0;
	uint8_t x136 = 1U;
	volatile int32_t t28 = -8;

	t28 = ((x133|(x134-x135))<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x138 = INT16_MIN;
	volatile int16_t x139 = INT16_MIN;
	int32_t x140 = 209550824;
	int32_t t29 = -44548;

	t29 = ((x137|(x138-x139))<=x140);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = INT8_MIN;
	static int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MIN;
	static int64_t x144 = 4260647690979099LL;

	t30 = ((x141|(x142-x143))<=x144);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x149 = UINT64_MAX;
	volatile int8_t x150 = INT8_MIN;
	uint64_t x152 = 3200512LLU;
	int32_t t31 = 22;

	t31 = ((x149|(x150-x151))<=x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = 7U;
	int64_t x155 = 1886501732088319LL;
	int64_t x156 = -1LL;
	volatile int32_t t32 = -302018929;

	t32 = ((x153|(x154-x155))<=x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = 14584964U;
	int8_t x158 = -6;
	static int64_t x159 = INT64_MIN;
	volatile int32_t t33 = 1;

	t33 = ((x157|(x158-x159))<=x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x162 = 107U;
	int16_t x163 = -1;
	static uint32_t x164 = 2U;

	t34 = ((x161|(x162-x163))<=x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = 85U;
	uint16_t x166 = 12678U;
	static int32_t x167 = 0;
	int8_t x168 = -1;
	int32_t t35 = -1341;

	t35 = ((x165|(x166-x167))<=x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = 8;
	static volatile int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	static uint64_t x172 = 22091538488298995LLU;

	t36 = ((x169|(x170-x171))<=x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x173 = UINT64_MAX;
	volatile int64_t x174 = -10781383LL;
	static int32_t x175 = INT32_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t37 = 90801342;

	t37 = ((x173|(x174-x175))<=x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = UINT32_MAX;
	uint64_t x178 = 1LLU;
	int32_t x179 = -1;
	int16_t x180 = 1;
	int32_t t38 = -103847516;

	t38 = ((x177|(x178-x179))<=x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	static int16_t x182 = 14;
	uint16_t x183 = UINT16_MAX;
	volatile uint16_t x184 = 929U;
	int32_t t39 = -21109542;

	t39 = ((x181|(x182-x183))<=x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = 9811LL;
	int8_t x186 = -1;
	volatile uint8_t x188 = 100U;
	static int32_t t40 = -619265390;

	t40 = ((x185|(x186-x187))<=x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x190 = 2U;
	int64_t x191 = -8275964LL;
	volatile int64_t x192 = INT64_MAX;
	int32_t t41 = -7534192;

	t41 = ((x189|(x190-x191))<=x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	uint8_t x194 = 2U;
	int16_t x195 = -1;
	volatile int32_t t42 = 50432;

	t42 = ((x193|(x194-x195))<=x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = -1;
	int16_t x198 = INT16_MAX;
	int16_t x199 = INT16_MIN;
	int32_t x200 = -1;
	int32_t t43 = 2;

	t43 = ((x197|(x198-x199))<=x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = -48;
	int64_t x202 = -551677642066888282LL;
	int64_t x204 = 4330596LL;
	int32_t t44 = 16;

	t44 = ((x201|(x202-x203))<=x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = -786;
	static int16_t x206 = INT16_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int32_t t45 = -4583734;

	t45 = ((x205|(x206-x207))<=x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MAX;
	int8_t x211 = 3;
	static int8_t x212 = 7;
	int32_t t46 = 196902715;

	t46 = ((x209|(x210-x211))<=x212);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x215 = INT8_MIN;
	int16_t x216 = -1163;
	int32_t t47 = 280;

	t47 = ((x213|(x214-x215))<=x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x221 = -1;
	uint64_t x222 = 1053846616852LLU;
	static int8_t x223 = 15;
	volatile int16_t x224 = -2421;

	t48 = ((x221|(x222-x223))<=x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MAX;
	uint16_t x226 = 9140U;
	int16_t x227 = INT16_MAX;
	int32_t t49 = 591;

	t49 = ((x225|(x226-x227))<=x228);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x229 = -202;
	volatile int64_t x231 = 397600705839148435LL;
	static uint8_t x232 = UINT8_MAX;
	volatile int32_t t50 = -12;

	t50 = ((x229|(x230-x231))<=x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = 4;
	int8_t x234 = -1;
	volatile int8_t x235 = INT8_MIN;
	static volatile int8_t x236 = INT8_MIN;
	int32_t t51 = 353555;

	t51 = ((x233|(x234-x235))<=x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x237 = INT64_MAX;
	int16_t x238 = 229;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t52 = 4274382;

	t52 = ((x237|(x238-x239))<=x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x241 = 860U;
	uint32_t x242 = 485684640U;
	uint16_t x244 = UINT16_MAX;

	t53 = ((x241|(x242-x243))<=x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MAX;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 23938U;
	static int32_t t54 = -3;

	t54 = ((x245|(x246-x247))<=x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x250 = INT8_MIN;
	int64_t x251 = 114704LL;
	uint32_t x252 = 965904U;
	volatile int32_t t55 = 472664432;

	t55 = ((x249|(x250-x251))<=x252);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x253 = -2LL;
	static uint8_t x255 = 50U;
	volatile uint32_t x256 = 31797587U;
	volatile int32_t t56 = 50422;

	t56 = ((x253|(x254-x255))<=x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x257 = 11447785475497LL;
	uint16_t x258 = UINT16_MAX;
	volatile uint32_t x259 = 312497685U;
	volatile int32_t t57 = -6820;

	t57 = ((x257|(x258-x259))<=x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -3655LL;
	int64_t x262 = INT64_MIN;
	static int32_t x263 = INT32_MIN;
	uint8_t x264 = UINT8_MAX;
	int32_t t58 = -422675;

	t58 = ((x261|(x262-x263))<=x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x265 = INT16_MIN;
	uint32_t x266 = UINT32_MAX;
	volatile int32_t x267 = -1;
	static uint32_t x268 = 3276059U;
	volatile int32_t t59 = -48;

	t59 = ((x265|(x266-x267))<=x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = -1;
	int8_t x270 = -8;
	volatile uint64_t x271 = 32785850104LLU;
	int32_t x272 = 851426861;

	t60 = ((x269|(x270-x271))<=x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = UINT64_MAX;
	uint8_t x275 = 23U;
	static uint8_t x276 = UINT8_MAX;
	int32_t t61 = -103;

	t61 = ((x273|(x274-x275))<=x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x277 = 0;
	uint8_t x279 = 1U;
	int8_t x280 = INT8_MIN;
	volatile int32_t t62 = -2327;

	t62 = ((x277|(x278-x279))<=x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = 1936;
	static uint16_t x286 = 0U;
	int64_t x287 = -1396LL;
	uint8_t x288 = UINT8_MAX;

	t63 = ((x285|(x286-x287))<=x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x291 = UINT64_MAX;
	uint32_t x292 = UINT32_MAX;

	t64 = ((x289|(x290-x291))<=x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MAX;
	volatile int16_t x294 = INT16_MIN;
	int8_t x296 = 7;
	int32_t t65 = 15975705;

	t65 = ((x293|(x294-x295))<=x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x297 = UINT64_MAX;
	uint32_t x298 = 0U;
	uint16_t x299 = 19999U;
	uint16_t x300 = 24133U;

	t66 = ((x297|(x298-x299))<=x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x301 = 433LLU;
	volatile int8_t x302 = -1;
	int32_t x303 = -1;
	int32_t t67 = 2801241;

	t67 = ((x301|(x302-x303))<=x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x305 = 51U;
	int64_t x306 = -1LL;
	int8_t x307 = -1;
	static uint64_t x308 = 95497125LLU;
	volatile int32_t t68 = 29929525;

	t68 = ((x305|(x306-x307))<=x308);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x317 = -1LL;
	static volatile uint16_t x318 = UINT16_MAX;
	volatile uint64_t x319 = 4044087039849175LLU;
	int64_t x320 = INT64_MIN;
	volatile int32_t t69 = -31;

	t69 = ((x317|(x318-x319))<=x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x323 = 39U;
	uint64_t x324 = 47515LLU;
	int32_t t70 = 235226176;

	t70 = ((x321|(x322-x323))<=x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x326 = 226602LLU;
	int32_t t71 = 13;

	t71 = ((x325|(x326-x327))<=x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = INT64_MIN;
	volatile int64_t x331 = 2235LL;
	int16_t x332 = INT16_MIN;

	t72 = ((x329|(x330-x331))<=x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = -13661;
	volatile uint32_t x334 = 171U;
	int16_t x335 = INT16_MAX;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t73 = 0;

	t73 = ((x333|(x334-x335))<=x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x337 = INT64_MIN;
	volatile uint16_t x338 = 115U;
	static volatile int32_t t74 = -156;

	t74 = ((x337|(x338-x339))<=x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int64_t x342 = INT64_MAX;
	int16_t x344 = INT16_MIN;

	t75 = ((x341|(x342-x343))<=x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 19U;
	uint8_t x348 = 1U;
	volatile int32_t t76 = 14;

	t76 = ((x345|(x346-x347))<=x348);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x349 = INT64_MIN;
	int16_t x350 = 7;
	uint8_t x351 = UINT8_MAX;
	uint8_t x352 = 7U;
	static int32_t t77 = 2612;

	t77 = ((x349|(x350-x351))<=x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x355 = 5597U;
	volatile uint32_t x356 = 58U;

	t78 = ((x353|(x354-x355))<=x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = 0;
	volatile uint64_t x359 = UINT64_MAX;
	int64_t x360 = -1LL;
	volatile int32_t t79 = -47792;

	t79 = ((x357|(x358-x359))<=x360);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = -1;
	static int16_t x363 = INT16_MAX;
	static int32_t x364 = 105;

	t80 = ((x361|(x362-x363))<=x364);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = UINT32_MAX;
	static uint32_t x366 = 32434566U;
	uint64_t x367 = 2135472491765LLU;
	uint16_t x368 = 230U;
	static int32_t t81 = 112096571;

	t81 = ((x365|(x366-x367))<=x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = 3;
	int16_t x370 = 4651;
	volatile int64_t x371 = INT64_MAX;
	volatile uint64_t x372 = 35033360348064LLU;
	volatile int32_t t82 = -3;

	t82 = ((x369|(x370-x371))<=x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = -1;
	uint8_t x378 = UINT8_MAX;
	int64_t x379 = 262003285LL;
	uint32_t x380 = UINT32_MAX;

	t83 = ((x377|(x378-x379))<=x380);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MIN;
	static uint8_t x382 = 19U;
	int16_t x383 = INT16_MAX;
	int32_t x384 = INT32_MAX;
	int32_t t84 = 13762;

	t84 = ((x381|(x382-x383))<=x384);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x385 = UINT64_MAX;
	int64_t x386 = INT64_MIN;
	uint64_t x387 = UINT64_MAX;
	uint32_t x388 = 5850U;
	int32_t t85 = -72280582;

	t85 = ((x385|(x386-x387))<=x388);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x389 = 1;
	volatile uint16_t x390 = 58U;
	uint8_t x391 = UINT8_MAX;
	static uint16_t x392 = 3U;
	static int32_t t86 = 8960;

	t86 = ((x389|(x390-x391))<=x392);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = INT32_MAX;
	int32_t x395 = -1;
	static volatile uint8_t x396 = 32U;
	int32_t t87 = -46;

	t87 = ((x393|(x394-x395))<=x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = -1LL;
	int8_t x398 = INT8_MAX;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MAX;
	volatile int32_t t88 = 17604464;

	t88 = ((x397|(x398-x399))<=x400);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x401 = UINT16_MAX;
	int32_t x402 = -52903;
	int64_t x404 = INT64_MIN;
	volatile int32_t t89 = -261811;

	t89 = ((x401|(x402-x403))<=x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = -1;
	static int8_t x406 = INT8_MIN;
	int32_t x407 = 17522157;

	t90 = ((x405|(x406-x407))<=x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x410 = INT8_MIN;
	int16_t x411 = 3087;
	volatile int16_t x412 = INT16_MIN;
	static volatile int32_t t91 = -13243;

	t91 = ((x409|(x410-x411))<=x412);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = -1;
	uint32_t x415 = 103098U;
	int32_t x416 = INT32_MIN;
	int32_t t92 = -1757595;

	t92 = ((x413|(x414-x415))<=x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MIN;
	static volatile uint16_t x423 = 1U;
	static int64_t x424 = -1LL;
	static volatile int32_t t93 = 4;

	t93 = ((x421|(x422-x423))<=x424);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x425 = 3U;
	uint32_t x426 = 331901U;
	int8_t x427 = INT8_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t94 = 15689854;

	t94 = ((x425|(x426-x427))<=x428);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x429 = INT32_MIN;
	uint16_t x430 = 15U;
	int32_t x432 = INT32_MAX;
	volatile int32_t t95 = -2;

	t95 = ((x429|(x430-x431))<=x432);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x433 = 3857123U;
	volatile uint8_t x434 = 1U;
	volatile int16_t x435 = INT16_MIN;
	int8_t x436 = -1;
	static volatile int32_t t96 = -2545;

	t96 = ((x433|(x434-x435))<=x436);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = INT16_MIN;
	uint16_t x438 = 5911U;
	volatile int16_t x439 = INT16_MIN;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t97 = 131648237;

	t97 = ((x437|(x438-x439))<=x440);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x445 = UINT8_MAX;
	int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MIN;

	t98 = ((x445|(x446-x447))<=x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x449 = 177U;
	int64_t x450 = -1LL;
	int32_t x451 = -7;
	static int8_t x452 = 41;
	static int32_t t99 = 1906928;

	t99 = ((x449|(x450-x451))<=x452);

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

