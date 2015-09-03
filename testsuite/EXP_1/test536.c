#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = UINT32_MAX;
static int16_t x6 = INT16_MIN;
uint8_t x8 = UINT8_MAX;
volatile uint64_t t6 = 257286LLU;
static volatile int8_t x30 = INT8_MAX;
static volatile int64_t x32 = -1LL;
static int64_t x35 = INT64_MIN;
static volatile int32_t x49 = -1;
volatile int64_t t11 = 9970LL;
uint32_t x57 = UINT32_MAX;
volatile int16_t x67 = INT16_MIN;
static int16_t x68 = -1;
int8_t x71 = INT8_MIN;
static int64_t x74 = INT64_MIN;
uint32_t x75 = UINT32_MAX;
volatile uint64_t t16 = 40195889870LLU;
int32_t x92 = INT32_MIN;
static volatile int64_t t19 = 4076LL;
uint64_t x102 = 3082073585316980180LLU;
uint8_t x106 = 2U;
volatile uint64_t t23 = 481514085929945LLU;
static uint8_t x113 = UINT8_MAX;
int8_t x115 = -1;
int64_t x116 = INT64_MIN;
static volatile int64_t t24 = -1793390LL;
int8_t x118 = INT8_MAX;
volatile uint16_t x123 = UINT16_MAX;
static int64_t t26 = 26787092418750LL;
volatile uint64_t x128 = UINT64_MAX;
static int64_t x134 = 185057LL;
uint32_t x137 = UINT32_MAX;
int32_t x138 = -3;
uint32_t t29 = 34U;
static int8_t x146 = INT8_MIN;
uint32_t t30 = 1U;
int8_t x150 = 7;
uint32_t x153 = UINT32_MAX;
uint64_t x154 = UINT64_MAX;
static volatile uint64_t t32 = 541587584672LLU;
volatile uint8_t x158 = UINT8_MAX;
int32_t x162 = -20755;
static uint64_t x164 = 97142157540484LLU;
uint16_t x165 = 2045U;
volatile uint8_t x174 = UINT8_MAX;
int16_t x184 = 18;
uint8_t x186 = 20U;
static int32_t x193 = -1;
static volatile int16_t x195 = -1;
int64_t x210 = -1LL;
static uint16_t x214 = 99U;
int64_t x222 = 904833343107075LL;
int8_t x224 = -1;
static uint64_t t50 = 187242562LLU;
uint8_t x235 = UINT8_MAX;
uint32_t x239 = 10186U;
volatile uint32_t t52 = 927U;
static int32_t x244 = INT32_MIN;
volatile int64_t t54 = 70267955963LL;
static int64_t x251 = INT64_MIN;
volatile int64_t t55 = 93652090544420434LL;
uint64_t x254 = 1129888266280412LLU;
int16_t x260 = 1;
int32_t x269 = -423911612;
int32_t x271 = -1848;
int64_t t61 = -20170068LL;
volatile uint64_t t62 = 5915729541722LLU;
int64_t x298 = INT64_MIN;
int64_t x299 = INT64_MAX;
int16_t x300 = -1;
int8_t x301 = -1;
static uint32_t x306 = 81964U;
int16_t x310 = INT16_MAX;
int8_t x318 = INT8_MIN;
uint32_t t70 = 296U;
int8_t x326 = INT8_MIN;
uint64_t t72 = 274593859254LLU;
int32_t x329 = 162855611;
static uint16_t x333 = 3U;
static int8_t x344 = -1;
static volatile int32_t x346 = INT32_MIN;
uint64_t x347 = 35LLU;
int32_t x351 = -4918983;
static uint32_t x358 = 1927U;
uint32_t x367 = UINT32_MAX;
volatile uint64_t t82 = 64360336182LLU;
int16_t x369 = -2012;
volatile int8_t x373 = INT8_MAX;
static int16_t x383 = -115;
volatile int32_t t86 = 19499283;
volatile uint64_t x397 = UINT64_MAX;
uint64_t x400 = 1782401LLU;
volatile uint64_t t87 = 839756LLU;
uint16_t x402 = UINT16_MAX;
int16_t x408 = INT16_MIN;
static volatile int64_t t89 = -1603543115566LL;
uint8_t x416 = 75U;
int8_t x419 = INT8_MIN;
static uint64_t t92 = 923845465318LLU;
static int16_t x426 = INT16_MAX;
static volatile int64_t x439 = INT64_MIN;
volatile uint32_t x440 = 1751U;
volatile uint64_t t97 = 1871984492402308980LLU;
uint32_t t99 = 11U;


void f0(void) {
	int8_t x1 = -1;
	static int64_t x2 = INT64_MAX;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = 63LL;

	t0 = (((x1/x2)*x3)*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 52U;
	volatile int16_t x7 = -1;
	volatile int32_t t1 = -424;

	t1 = (((x5/x6)*x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 1U;
	int64_t x10 = -1LL;
	int16_t x11 = -7;
	int32_t x12 = INT32_MIN;
	static int64_t t2 = -7131501823591903LL;

	t2 = (((x9/x10)*x11)*x12);

	if (t2 != -15032385536LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	int16_t x14 = INT16_MAX;
	uint8_t x15 = 5U;
	static int64_t x16 = -59237LL;
	volatile int64_t t3 = -342886672LL;

	t3 = (((x13/x14)*x15)*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 53;
	int32_t x18 = -1;
	int8_t x19 = 4;
	static uint16_t x20 = 21248U;
	volatile int32_t t4 = 104047943;

	t4 = (((x17/x18)*x19)*x20);

	if (t4 != -4504576) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 6LLU;
	uint8_t x22 = UINT8_MAX;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;
	static uint64_t t5 = 29LLU;

	t5 = (((x21/x22)*x23)*x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	volatile int32_t x26 = -1;
	static volatile uint64_t x27 = 14536850371510781LLU;
	static uint8_t x28 = UINT8_MAX;

	t6 = (((x25/x26)*x27)*x28);

	if (t6 != 12930268881590024963LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 122722255U;
	uint32_t x31 = 4U;
	volatile int64_t t7 = 0LL;

	t7 = (((x29/x30)*x31)*x32);

	if (t7 != -3865264LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 1298878U;
	int32_t x34 = -1;
	static uint32_t x36 = UINT32_MAX;
	static volatile int64_t t8 = 1746793562302LL;

	t8 = (((x33/x34)*x35)*x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MIN;
	volatile int16_t x42 = -1;
	int8_t x43 = INT8_MIN;
	static int32_t x44 = -354;
	int32_t t9 = 509036178;

	t9 = (((x41/x42)*x43)*x44);

	if (t9 != 5799936) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	volatile uint16_t x46 = 12281U;
	int8_t x47 = INT8_MAX;
	uint8_t x48 = 7U;
	int32_t t10 = -72257;

	t10 = (((x45/x46)*x47)*x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x50 = -1LL;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = -1;

	t11 = (((x49/x50)*x51)*x52);

	if (t11 != -65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x58 = 7746727LLU;
	volatile int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MIN;
	uint64_t t12 = 1506LLU;

	t12 = (((x57/x58)*x59)*x60);

	if (t12 != 38984284274425856LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	volatile int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	static uint16_t x64 = 1215U;
	int64_t t13 = -115801840697LL;

	t13 = (((x61/x62)*x63)*x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -647;
	volatile int16_t x66 = -1719;
	volatile int32_t t14 = 233145967;

	t14 = (((x65/x66)*x67)*x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	int64_t x70 = -2468510965334265884LL;
	int8_t x72 = -3;
	static volatile int64_t t15 = -81LL;

	t15 = (((x69/x70)*x71)*x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x73 = UINT16_MAX;
	uint64_t x76 = 202LLU;

	t16 = (((x73/x74)*x75)*x76);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 362U;
	int32_t x82 = -1;
	int64_t x83 = INT64_MIN;
	int8_t x84 = INT8_MIN;
	int64_t t17 = 2LL;

	t17 = (((x81/x82)*x83)*x84);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 1;
	int32_t x86 = INT32_MIN;
	uint16_t x87 = 659U;
	int8_t x88 = -3;
	static int32_t t18 = -336705281;

	t18 = (((x85/x86)*x87)*x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = 13;
	int32_t x90 = INT32_MIN;
	int64_t x91 = -24193019917190LL;

	t19 = (((x89/x90)*x91)*x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MAX;
	int32_t x94 = INT32_MIN;
	int16_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	uint32_t t20 = 1953855832U;

	t20 = (((x93/x94)*x95)*x96);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 329142969659085LLU;
	static int8_t x98 = INT8_MAX;
	static volatile int64_t x99 = 7586LL;
	int16_t x100 = -161;
	static volatile uint64_t t21 = 15LLU;

	t21 = (((x97/x98)*x99)*x100);

	if (t21 != 15281409826298771262LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MAX;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = -1;
	volatile uint64_t t22 = 120LLU;

	t22 = (((x101/x102)*x103)*x104);

	if (t22 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = UINT64_MAX;
	uint16_t x107 = UINT16_MAX;
	static int8_t x108 = -1;

	t23 = (((x105/x106)*x107)*x108);

	if (t23 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x114 = 25542U;

	t24 = (((x113/x114)*x115)*x116);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = 242306986307270LL;
	static uint8_t x119 = UINT8_MAX;
	int16_t x120 = 26;
	volatile int64_t t25 = 279323990859566LL;

	t25 = (((x117/x118)*x119)*x120);

	if (t25 != 12649569442651830LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x121 = 2690U;
	int64_t x122 = -6480759591402LL;
	int64_t x124 = INT64_MAX;

	t26 = (((x121/x122)*x123)*x124);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	int32_t x126 = -594366;
	volatile int16_t x127 = 55;
	volatile uint64_t t27 = 823336055312136LLU;

	t27 = (((x125/x126)*x127)*x128);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = UINT64_MAX;
	int64_t x135 = -5573208LL;
	int8_t x136 = -10;
	uint64_t t28 = 1634499LLU;

	t28 = (((x133/x134)*x135)*x136);

	if (t28 != 2982767055059504144LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x139 = INT16_MAX;
	volatile uint16_t x140 = 39U;

	t29 = (((x137/x138)*x139)*x140);

	if (t29 != 1277913U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 26;
	uint32_t x147 = UINT32_MAX;
	uint16_t x148 = UINT16_MAX;

	t30 = (((x145/x146)*x147)*x148);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MIN;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = INT32_MAX;
	volatile uint64_t t31 = 292912837805818853LLU;

	t31 = (((x149/x150)*x151)*x152);

	if (t31 != 10052370951607LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x155 = -1;
	int32_t x156 = -2024;

	t32 = (((x153/x154)*x155)*x156);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x157 = 43U;
	static int8_t x159 = 8;
	int32_t x160 = INT32_MAX;
	volatile int32_t t33 = 23956;

	t33 = (((x157/x158)*x159)*x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = 7;
	uint8_t x163 = 0U;
	volatile uint64_t t34 = 480449LLU;

	t34 = (((x161/x162)*x163)*x164);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = INT64_MIN;
	uint64_t x167 = UINT64_MAX;
	static volatile int8_t x168 = INT8_MAX;
	uint64_t t35 = 124167075108LLU;

	t35 = (((x165/x166)*x167)*x168);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x169 = 3347U;
	static uint8_t x170 = UINT8_MAX;
	static int64_t x171 = 187463LL;
	uint8_t x172 = 2U;
	int64_t t36 = -489459116414535LL;

	t36 = (((x169/x170)*x171)*x172);

	if (t36 != 4874038LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = 55;
	volatile int32_t x175 = INT32_MIN;
	uint32_t x176 = 112U;
	volatile uint32_t t37 = 34451U;

	t37 = (((x173/x174)*x175)*x176);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = INT8_MAX;
	volatile int32_t x178 = 473567;
	int16_t x179 = -1;
	volatile uint8_t x180 = 120U;
	int32_t t38 = 797317;

	t38 = (((x177/x178)*x179)*x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x182 = INT8_MIN;
	static uint64_t x183 = 1958791962604776LLU;
	uint64_t t39 = 1LLU;

	t39 = (((x181/x182)*x183)*x184);

	if (t39 != 429775601670821968LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x187 = 50783480848LLU;
	int32_t x188 = 153;
	uint64_t t40 = 457301971848LLU;

	t40 = (((x185/x186)*x187)*x188);

	if (t40 != 7378700737432848544LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = -1LL;
	volatile int16_t x190 = INT16_MAX;
	int8_t x191 = -3;
	static int8_t x192 = -1;
	volatile int64_t t41 = -1198272LL;

	t41 = (((x189/x190)*x191)*x192);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x194 = 299U;
	volatile int32_t x196 = -906;
	volatile int32_t t42 = -7966159;

	t42 = (((x193/x194)*x195)*x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MAX;
	static int64_t x198 = INT64_MIN;
	uint8_t x199 = UINT8_MAX;
	static volatile int64_t x200 = INT64_MAX;
	int64_t t43 = 0LL;

	t43 = (((x197/x198)*x199)*x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = 1348329U;
	int32_t x202 = INT32_MIN;
	static volatile uint8_t x203 = 66U;
	volatile uint32_t x204 = 243355U;
	uint32_t t44 = 1U;

	t44 = (((x201/x202)*x203)*x204);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x205 = INT16_MIN;
	static uint16_t x206 = 667U;
	volatile uint32_t x207 = UINT32_MAX;
	uint8_t x208 = 5U;
	uint32_t t45 = 174495U;

	t45 = (((x205/x206)*x207)*x208);

	if (t45 != 245U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = 598456129442LL;
	volatile uint8_t x211 = 0U;
	int32_t x212 = INT32_MIN;
	volatile int64_t t46 = 7LL;

	t46 = (((x209/x210)*x211)*x212);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = 48602579U;
	int8_t x215 = 0;
	uint8_t x216 = 2U;
	volatile uint32_t t47 = 11639U;

	t47 = (((x213/x214)*x215)*x216);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = -1;
	volatile int32_t x218 = INT32_MIN;
	static volatile int8_t x219 = INT8_MAX;
	uint32_t x220 = 1718754263U;
	static uint32_t t48 = 11322U;

	t48 = (((x217/x218)*x219)*x220);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = 5097533930053499LL;
	volatile int8_t x223 = INT8_MIN;
	volatile int64_t t49 = -5961707164LL;

	t49 = (((x221/x222)*x223)*x224);

	if (t49 != 640LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = UINT64_MAX;
	volatile uint8_t x230 = 113U;
	uint8_t x231 = 12U;
	int32_t x232 = INT32_MIN;

	t50 = (((x229/x230)*x231)*x232);

	if (t50 != 2775173894036783104LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x233 = 181881269033931LLU;
	int16_t x234 = INT16_MIN;
	uint32_t x236 = UINT32_MAX;
	uint64_t t51 = 113LLU;

	t51 = (((x233/x234)*x235)*x236);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = -18;
	int32_t x240 = INT32_MIN;

	t52 = (((x237/x238)*x239)*x240);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x241 = 1U;
	int8_t x242 = INT8_MIN;
	static int16_t x243 = INT16_MIN;
	int32_t t53 = -1;

	t53 = (((x241/x242)*x243)*x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = 36567337LL;
	int32_t x246 = INT32_MIN;
	int8_t x247 = -1;
	volatile int8_t x248 = INT8_MAX;

	t54 = (((x245/x246)*x247)*x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = 5;
	volatile uint16_t x250 = 177U;
	static int16_t x252 = INT16_MIN;

	t55 = (((x249/x250)*x251)*x252);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 1665032LLU;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = -105;
	volatile uint64_t t56 = 3368724154129780LLU;

	t56 = (((x253/x254)*x255)*x256);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = -1LL;
	volatile int8_t x258 = INT8_MAX;
	int16_t x259 = INT16_MAX;
	volatile int64_t t57 = -5348004230LL;

	t57 = (((x257/x258)*x259)*x260);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x265 = UINT64_MAX;
	volatile int8_t x266 = INT8_MIN;
	static volatile int64_t x267 = INT64_MAX;
	static int32_t x268 = -1;
	uint64_t t58 = 3919138498866755LLU;

	t58 = (((x265/x266)*x267)*x268);

	if (t58 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x270 = INT64_MAX;
	int32_t x272 = -128321;
	int64_t t59 = -46348021136234LL;

	t59 = (((x269/x270)*x271)*x272);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x273 = 1161651823665LLU;
	int8_t x274 = 1;
	uint16_t x275 = 15627U;
	uint32_t x276 = 592492492U;
	uint64_t t60 = 11729201399674LLU;

	t60 = (((x273/x274)*x275)*x276);

	if (t60 != 17991100583478257284LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MIN;
	volatile int64_t x278 = INT64_MIN;
	static uint32_t x279 = UINT32_MAX;
	int16_t x280 = INT16_MIN;

	t61 = (((x277/x278)*x279)*x280);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = -419LL;
	uint64_t x286 = 819829196LLU;
	uint16_t x287 = 60U;
	int32_t x288 = INT32_MIN;

	t62 = (((x285/x286)*x287)*x288);

	if (t62 != 15390356921089261568LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x289 = 9202LLU;
	int32_t x290 = -1;
	static uint16_t x291 = 64U;
	int16_t x292 = INT16_MIN;
	uint64_t t63 = 496923632190041LLU;

	t63 = (((x289/x290)*x291)*x292);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = INT64_MAX;
	int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	int32_t x296 = -1;
	int64_t t64 = -93934LL;

	t64 = (((x293/x294)*x295)*x296);

	if (t64 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = UINT64_MAX;
	volatile uint64_t t65 = 0LLU;

	t65 = (((x297/x298)*x299)*x300);

	if (t65 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x302 = INT16_MIN;
	uint16_t x303 = 2U;
	static volatile int16_t x304 = INT16_MIN;
	volatile int32_t t66 = -9;

	t66 = (((x301/x302)*x303)*x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x305 = -1LL;
	int8_t x307 = INT8_MAX;
	static int32_t x308 = 1475091;
	int64_t t67 = -8LL;

	t67 = (((x305/x306)*x307)*x308);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x309 = 3U;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t68 = -440239;

	t68 = (((x309/x310)*x311)*x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x313 = 514832215U;
	int64_t x314 = INT64_MAX;
	static int32_t x315 = 8;
	int32_t x316 = INT32_MAX;
	int64_t t69 = 52420LL;

	t69 = (((x313/x314)*x315)*x316);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = UINT32_MAX;
	volatile int16_t x319 = -2;
	int32_t x320 = INT32_MIN;

	t70 = (((x317/x318)*x319)*x320);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x321 = -1LL;
	uint16_t x322 = 412U;
	int32_t x323 = -1;
	int32_t x324 = INT32_MIN;
	int64_t t71 = -2557909367LL;

	t71 = (((x321/x322)*x323)*x324);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x325 = 401U;
	static int32_t x327 = 3130;
	uint64_t x328 = 1025278LLU;

	t72 = (((x325/x326)*x327)*x328);

	if (t72 != 18446744064082191196LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x330 = 58U;
	uint8_t x331 = UINT8_MAX;
	static volatile uint32_t x332 = 103U;
	static uint32_t t73 = 992979U;

	t73 = (((x329/x330)*x331)*x332);

	if (t73 != 733867543U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x334 = INT64_MIN;
	static int64_t x335 = 1370LL;
	volatile int32_t x336 = -1;
	int64_t t74 = 428592047438323LL;

	t74 = (((x333/x334)*x335)*x336);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x338 = INT64_MIN;
	static int16_t x339 = -871;
	static volatile uint16_t x340 = 46U;
	int64_t t75 = -132238LL;

	t75 = (((x337/x338)*x339)*x340);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x341 = 914LLU;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -1;
	uint64_t t76 = 18122758678LLU;

	t76 = (((x341/x342)*x343)*x344);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x345 = 96013832205987399LLU;
	uint8_t x348 = 4U;
	volatile uint64_t t77 = 13LLU;

	t77 = (((x345/x346)*x347)*x348);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = -12;
	volatile uint64_t x350 = 81085862LLU;
	static int32_t x352 = 14768204;
	volatile uint64_t t78 = 34LLU;

	t78 = (((x349/x350)*x351)*x352);

	if (t78 != 8210774415208935184LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MAX;
	int8_t x355 = INT8_MAX;
	uint32_t x356 = 3306034U;
	uint32_t t79 = 11767U;

	t79 = (((x353/x354)*x355)*x356);

	if (t79 != 3875100978U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = INT16_MIN;
	int8_t x359 = -34;
	uint16_t x360 = 1U;
	uint32_t t80 = 12U;

	t80 = (((x357/x358)*x359)*x360);

	if (t80 != 4219187450U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x361 = -1;
	volatile int16_t x362 = -1687;
	uint16_t x363 = UINT16_MAX;
	volatile int64_t x364 = -1LL;
	int64_t t81 = -10400159383LL;

	t81 = (((x361/x362)*x363)*x364);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x365 = 73777LLU;
	static int64_t x366 = INT64_MAX;
	int8_t x368 = INT8_MIN;

	t82 = (((x365/x366)*x367)*x368);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x370 = 1226LLU;
	static int64_t x371 = INT64_MIN;
	int16_t x372 = 247;
	volatile uint64_t t83 = 28LLU;

	t83 = (((x369/x370)*x371)*x372);

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x374 = INT32_MAX;
	static volatile uint8_t x375 = UINT8_MAX;
	volatile int32_t x376 = -4254209;
	int32_t t84 = -800998752;

	t84 = (((x373/x374)*x375)*x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x377 = UINT8_MAX;
	static int32_t x378 = INT32_MIN;
	uint8_t x379 = 0U;
	volatile uint32_t x380 = 10458U;
	volatile uint32_t t85 = 0U;

	t85 = (((x377/x378)*x379)*x380);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x381 = 1211U;
	uint8_t x382 = 26U;
	static int32_t x384 = -1;

	t86 = (((x381/x382)*x383)*x384);

	if (t86 != 5290) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;

	t87 = (((x397/x398)*x399)*x400);

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = INT8_MAX;
	int8_t x403 = INT8_MIN;
	uint32_t x404 = 4933U;
	uint32_t t88 = 13U;

	t88 = (((x401/x402)*x403)*x404);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x405 = UINT32_MAX;
	int64_t x406 = 26808092226LL;
	int32_t x407 = -1;

	t89 = (((x405/x406)*x407)*x408);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x413 = 60495U;
	int16_t x414 = -226;
	uint32_t x415 = 0U;
	volatile uint32_t t90 = 21452U;

	t90 = (((x413/x414)*x415)*x416);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = UINT16_MAX;
	static int64_t x418 = -1LL;
	int64_t x420 = 1858749LL;
	volatile int64_t t91 = -5868416332574LL;

	t91 = (((x417/x418)*x419)*x420);

	if (t91 != 15592078811520LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = INT64_MIN;
	int64_t x422 = -255383116392LL;
	volatile uint32_t x423 = UINT32_MAX;
	static uint64_t x424 = UINT64_MAX;

	t92 = (((x421/x422)*x423)*x424);

	if (t92 != 18291627786502608241LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = -1LL;
	static int16_t x427 = INT16_MAX;
	int16_t x428 = INT16_MAX;
	int64_t t93 = 96991236LL;

	t93 = (((x425/x426)*x427)*x428);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = 527;
	int8_t x430 = -1;
	uint32_t x431 = 905110286U;
	int16_t x432 = INT16_MAX;
	uint32_t t94 = 61823U;

	t94 = (((x429/x430)*x431)*x432);

	if (t94 != 1511549394U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = -1LL;
	volatile uint16_t x438 = UINT16_MAX;
	int64_t t95 = 60531695695461LL;

	t95 = (((x437/x438)*x439)*x440);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x441 = -1;
	uint16_t x442 = 603U;
	static int8_t x443 = -21;
	int64_t x444 = INT64_MIN;
	int64_t t96 = -656611LL;

	t96 = (((x441/x442)*x443)*x444);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x445 = INT64_MAX;
	volatile int32_t x446 = INT32_MIN;
	int32_t x447 = -430;
	uint64_t x448 = UINT64_MAX;

	t97 = (((x445/x446)*x447)*x448);

	if (t97 != 18446742226873614766LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x449 = UINT64_MAX;
	int64_t x450 = 6586349LL;
	uint16_t x451 = 346U;
	static int64_t x452 = 8525709493612LL;
	volatile uint64_t t98 = 87LLU;

	t98 = (((x449/x450)*x451)*x452);

	if (t98 != 17236178329615331056LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x453 = -1;
	int32_t x454 = 2;
	int16_t x455 = INT16_MAX;
	uint32_t x456 = 21907U;

	t99 = (((x453/x454)*x455)*x456);

	if (t99 != 0U) { NG(); } else { ; }
	
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

