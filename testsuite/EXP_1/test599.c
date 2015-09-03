#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
static int32_t t1 = 4273122;
int16_t x9 = -1;
volatile int16_t x13 = INT16_MIN;
static int64_t x20 = -923301199773LL;
int16_t x25 = -442;
static uint16_t x28 = UINT16_MAX;
volatile uint16_t x31 = 30U;
volatile uint64_t t7 = 808012064LLU;
uint8_t x34 = 12U;
uint64_t t9 = UINT64_MAX;
int32_t x47 = INT32_MIN;
static int64_t x52 = -1LL;
static int64_t t11 = -39978912LL;
static volatile int32_t t13 = 45030;
int32_t x61 = -51200;
static int16_t x75 = INT16_MAX;
static uint8_t x78 = UINT8_MAX;
uint32_t x80 = 494070U;
int32_t x83 = 1;
volatile uint16_t x84 = 187U;
int8_t x87 = INT8_MIN;
int16_t x88 = -1;
volatile uint32_t t22 = 0U;
int16_t x106 = -7598;
static int64_t x107 = -1LL;
int64_t x111 = INT64_MIN;
uint32_t x117 = 3U;
int32_t t27 = -64604;
int16_t x127 = INT16_MAX;
uint32_t t28 = 1U;
volatile int32_t t31 = INT32_MAX;
volatile int32_t x145 = INT32_MIN;
uint64_t x146 = 12LLU;
int64_t x151 = INT64_MIN;
volatile int64_t x153 = INT64_MIN;
static int64_t t35 = INT64_MAX;
int8_t x161 = 1;
static uint8_t x163 = 9U;
int8_t x168 = INT8_MAX;
int16_t x172 = 29;
static volatile int16_t x173 = 0;
int16_t x175 = 963;
int32_t t39 = 0;
int64_t x179 = -975907020081695LL;
uint64_t x184 = UINT64_MAX;
static volatile uint64_t t41 = UINT64_MAX;
int8_t x188 = 3;
uint32_t x191 = 3U;
uint16_t x194 = 727U;
static int32_t x196 = -1;
int32_t t44 = -761;
static volatile int32_t t46 = INT32_MIN;
int32_t x208 = -1;
int32_t t47 = -1398;
volatile uint64_t x209 = 62LLU;
int8_t x211 = INT8_MIN;
volatile int32_t t48 = -1448;
static int16_t x215 = 0;
uint32_t x235 = 31348U;
int64_t t53 = -43792793300117LL;
volatile int32_t x239 = INT32_MIN;
volatile int64_t t54 = INT64_MAX;
uint32_t x249 = 1U;
int64_t x250 = 753859075442LL;
int16_t x251 = -473;
int32_t x254 = INT32_MIN;
int32_t t59 = 2;
int16_t x263 = -6;
volatile int64_t x265 = INT64_MAX;
static int64_t t62 = INT64_MAX;
int64_t t63 = INT64_MIN;
uint64_t x291 = 17764LLU;
int32_t x301 = 312175497;
int16_t x306 = INT16_MIN;
static int16_t x308 = INT16_MIN;
int16_t x318 = 168;
uint64_t x331 = 95506684716033LLU;
int64_t x341 = INT64_MAX;
int16_t x347 = -1;
uint64_t x348 = UINT64_MAX;
uint8_t x356 = UINT8_MAX;
int16_t x358 = INT16_MIN;
static int16_t x360 = INT16_MAX;
volatile int32_t t82 = 29;
int32_t x366 = -2018;
int16_t x368 = -1;
uint16_t x374 = 125U;
static int32_t x382 = INT32_MAX;
static uint8_t x384 = 3U;
int8_t x385 = -1;
uint64_t x389 = UINT64_MAX;
int32_t t90 = -4;
uint32_t x393 = 28U;
volatile int16_t x394 = -15283;
volatile int8_t x403 = 13;
static int32_t t93 = INT32_MAX;
int16_t x406 = INT16_MAX;
int32_t t95 = -5588596;
static int8_t x415 = INT8_MAX;
uint16_t x417 = 2U;
static int32_t t98 = 175995994;


void f0(void) {
	uint16_t x1 = 604U;
	uint64_t x3 = 1360537005146462188LLU;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = INT64_MIN;

	t0 = (((x1/x2)==x3)+x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int64_t x6 = -9202LL;
	static uint8_t x7 = UINT8_MAX;
	int16_t x8 = INT16_MAX;

	t1 = (((x5/x6)==x7)+x8);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	int8_t x12 = 2;
	volatile int32_t t2 = -1;

	t2 = (((x9/x10)==x11)+x12);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	volatile int8_t x15 = INT8_MIN;
	volatile int16_t x16 = 35;
	volatile int32_t t3 = -34;

	t3 = (((x13/x14)==x15)+x16);

	if (t3 != 35) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 62;
	int8_t x18 = -21;
	int32_t x19 = -1;
	static volatile int64_t t4 = 1700241398129389925LL;

	t4 = (((x17/x18)==x19)+x20);

	if (t4 != -923301199773LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MAX;
	int32_t x23 = 735;
	uint8_t x24 = 14U;
	volatile int32_t t5 = 8;

	t5 = (((x21/x22)==x23)+x24);

	if (t5 != 14) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 514496218;
	int32_t x27 = INT32_MIN;
	volatile int32_t t6 = -1;

	t6 = (((x25/x26)==x27)+x28);

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	static volatile int16_t x30 = INT16_MIN;
	uint64_t x32 = 5580LLU;

	t7 = (((x29/x30)==x31)+x32);

	if (t7 != 5580LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x35 = INT8_MIN;
	int64_t x36 = -2548022837537LL;
	static int64_t t8 = 1676LL;

	t8 = (((x33/x34)==x35)+x36);

	if (t8 != -2548022837537LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	volatile int8_t x38 = -1;
	int32_t x39 = 6040;
	volatile uint64_t x40 = UINT64_MAX;

	t9 = (((x37/x38)==x39)+x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = UINT64_MAX;
	int32_t x46 = -51233;
	int8_t x48 = -15;
	int32_t t10 = 443563422;

	t10 = (((x45/x46)==x47)+x48);

	if (t10 != -15) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 698;
	volatile uint16_t x50 = UINT16_MAX;
	int32_t x51 = INT32_MIN;

	t11 = (((x49/x50)==x51)+x52);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	uint8_t x54 = UINT8_MAX;
	uint32_t x55 = 217351U;
	uint16_t x56 = 59U;
	volatile int32_t t12 = 242477;

	t12 = (((x53/x54)==x55)+x56);

	if (t12 != 59) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 1;
	int32_t x58 = -1;
	int8_t x59 = INT8_MAX;
	uint8_t x60 = UINT8_MAX;

	t13 = (((x57/x58)==x59)+x60);

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = 218600665LL;
	static int64_t x63 = -3329149361535LL;
	uint16_t x64 = 26184U;
	volatile int32_t t14 = 249;

	t14 = (((x61/x62)==x63)+x64);

	if (t14 != 26184) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = UINT8_MAX;
	volatile uint64_t x66 = UINT64_MAX;
	int64_t x67 = -23825630343381LL;
	volatile int32_t x68 = -898041803;
	int32_t t15 = -500163675;

	t15 = (((x65/x66)==x67)+x68);

	if (t15 != -898041803) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = INT64_MIN;
	uint32_t x70 = 2651868U;
	uint32_t x71 = 1108236462U;
	int8_t x72 = INT8_MIN;
	int32_t t16 = 391614;

	t16 = (((x69/x70)==x71)+x72);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	static int8_t x76 = INT8_MIN;
	static volatile int32_t t17 = -489;

	t17 = (((x73/x74)==x75)+x76);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = INT64_MIN;
	uint16_t x79 = 6U;
	uint32_t t18 = 2008U;

	t18 = (((x77/x78)==x79)+x80);

	if (t18 != 494070U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = 350513U;
	int8_t x82 = 1;
	static int32_t t19 = -778579362;

	t19 = (((x81/x82)==x83)+x84);

	if (t19 != 187) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MAX;
	volatile int32_t t20 = -30;

	t20 = (((x85/x86)==x87)+x88);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x93 = 125U;
	int32_t x94 = INT32_MIN;
	int8_t x95 = -24;
	uint16_t x96 = 7630U;
	int32_t t21 = 33229;

	t21 = (((x93/x94)==x95)+x96);

	if (t21 != 7630) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MIN;
	int32_t x99 = INT32_MIN;
	static volatile uint32_t x100 = 3U;

	t22 = (((x97/x98)==x99)+x100);

	if (t22 != 3U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t23 = -7;

	t23 = (((x105/x106)==x107)+x108);

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x109 = UINT16_MAX;
	uint8_t x110 = 3U;
	int32_t x112 = INT32_MIN;
	volatile int32_t t24 = INT32_MIN;

	t24 = (((x109/x110)==x111)+x112);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = -1;
	static int32_t x115 = 1976;
	int64_t x116 = -7585295859LL;
	int64_t t25 = -524LL;

	t25 = (((x113/x114)==x115)+x116);

	if (t25 != -7585295859LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x118 = INT16_MAX;
	static int64_t x119 = 15701LL;
	static int32_t x120 = -1;
	static int32_t t26 = 270;

	t26 = (((x117/x118)==x119)+x120);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	static volatile int16_t x122 = 32;
	volatile uint16_t x123 = UINT16_MAX;
	int32_t x124 = 114477592;

	t27 = (((x121/x122)==x123)+x124);

	if (t27 != 114477592) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -1;
	int32_t x126 = 75909;
	uint32_t x128 = 69467U;

	t28 = (((x125/x126)==x127)+x128);

	if (t28 != 69467U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 2013U;
	int32_t x134 = 13;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MIN;
	volatile int32_t t29 = 89254266;

	t29 = (((x133/x134)==x135)+x136);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = 888;
	uint16_t x138 = 2094U;
	volatile int8_t x139 = INT8_MIN;
	static int16_t x140 = INT16_MAX;
	int32_t t30 = -6002;

	t30 = (((x137/x138)==x139)+x140);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MAX;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;

	t31 = (((x141/x142)==x143)+x144);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x147 = 7U;
	static volatile int8_t x148 = INT8_MAX;
	volatile int32_t t32 = -918696511;

	t32 = (((x145/x146)==x147)+x148);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x149 = -1;
	static uint64_t x150 = UINT64_MAX;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t33 = -3382154;

	t33 = (((x149/x150)==x151)+x152);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = -5154887LL;
	int8_t x155 = INT8_MIN;
	uint8_t x156 = 29U;
	volatile int32_t t34 = 150420;

	t34 = (((x153/x154)==x155)+x156);

	if (t34 != 29) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x157 = 1LLU;
	static int8_t x158 = INT8_MAX;
	int64_t x159 = -1LL;
	static volatile int64_t x160 = INT64_MAX;

	t35 = (((x157/x158)==x159)+x160);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x162 = INT64_MAX;
	int16_t x164 = 3334;
	int32_t t36 = -43593;

	t36 = (((x161/x162)==x163)+x164);

	if (t36 != 3334) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = -1;
	int16_t x166 = INT16_MIN;
	static int32_t x167 = 158939;
	int32_t t37 = -203;

	t37 = (((x165/x166)==x167)+x168);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = -2;
	int32_t x170 = -1;
	int32_t x171 = -5155;
	volatile int32_t t38 = -19741;

	t38 = (((x169/x170)==x171)+x172);

	if (t38 != 29) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x174 = INT8_MIN;
	int8_t x176 = INT8_MAX;

	t39 = (((x173/x174)==x175)+x176);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = -1;
	uint32_t x180 = 54U;
	uint32_t t40 = 8394U;

	t40 = (((x177/x178)==x179)+x180);

	if (t40 != 54U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x181 = INT32_MIN;
	volatile int8_t x182 = INT8_MAX;
	int64_t x183 = 401407149869892LL;

	t41 = (((x181/x182)==x183)+x184);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -1;
	uint32_t x186 = 9121U;
	uint16_t x187 = 3234U;
	int32_t t42 = -1416;

	t42 = (((x185/x186)==x187)+x188);

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	static int8_t x190 = INT8_MAX;
	uint64_t x192 = 1036752992866100881LLU;
	uint64_t t43 = 6365LLU;

	t43 = (((x189/x190)==x191)+x192);

	if (t43 != 1036752992866100881LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x193 = -1;
	int8_t x195 = INT8_MIN;

	t44 = (((x193/x194)==x195)+x196);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = 53U;
	static int8_t x198 = -1;
	int16_t x199 = -1;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t45 = -13392786;

	t45 = (((x197/x198)==x199)+x200);

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 11U;
	uint64_t x202 = 1792169234809LLU;
	uint8_t x203 = 8U;
	int32_t x204 = INT32_MIN;

	t46 = (((x201/x202)==x203)+x204);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MIN;
	static int32_t x206 = INT32_MIN;
	int64_t x207 = -767895755LL;

	t47 = (((x205/x206)==x207)+x208);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x210 = -35034;
	static int8_t x212 = INT8_MIN;

	t48 = (((x209/x210)==x211)+x212);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x213 = -14;
	static volatile int32_t x214 = 15;
	int16_t x216 = INT16_MIN;
	int32_t t49 = 253178;

	t49 = (((x213/x214)==x215)+x216);

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = UINT16_MAX;
	volatile uint64_t x222 = 18LLU;
	static int16_t x223 = -1;
	int32_t x224 = 2224;
	static volatile int32_t t50 = 56;

	t50 = (((x221/x222)==x223)+x224);

	if (t50 != 2224) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 5U;
	volatile uint64_t x226 = 1913671054819LLU;
	uint8_t x227 = 37U;
	volatile int16_t x228 = -3606;
	volatile int32_t t51 = -13010932;

	t51 = (((x225/x226)==x227)+x228);

	if (t51 != -3606) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x229 = -14640209139990647LL;
	int16_t x230 = -5676;
	int32_t x231 = -62812;
	int64_t x232 = -1LL;
	volatile int64_t t52 = 29474911046LL;

	t52 = (((x229/x230)==x231)+x232);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = -31;
	int64_t x236 = 31932451861333LL;

	t53 = (((x233/x234)==x235)+x236);

	if (t53 != 31932451861333LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MIN;
	int64_t x240 = INT64_MAX;

	t54 = (((x237/x238)==x239)+x240);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MAX;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = 891459;
	int64_t x244 = -1LL;
	int64_t t55 = 971029500906304300LL;

	t55 = (((x241/x242)==x243)+x244);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 5U;
	volatile uint16_t x247 = UINT16_MAX;
	uint32_t x248 = 41U;
	static uint32_t t56 = 5882883U;

	t56 = (((x245/x246)==x247)+x248);

	if (t56 != 41U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x252 = INT64_MAX;
	volatile int64_t t57 = INT64_MAX;

	t57 = (((x249/x250)==x251)+x252);

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 89U;
	uint32_t x255 = 6407U;
	uint32_t x256 = UINT32_MAX;
	static uint32_t t58 = UINT32_MAX;

	t58 = (((x253/x254)==x255)+x256);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x257 = INT64_MAX;
	uint16_t x258 = UINT16_MAX;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = 7563;

	t59 = (((x257/x258)==x259)+x260);

	if (t59 != 7563) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x261 = INT32_MAX;
	int64_t x262 = INT64_MIN;
	int8_t x264 = INT8_MIN;
	static int32_t t60 = -6209686;

	t60 = (((x261/x262)==x263)+x264);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x266 = -1LL;
	int8_t x267 = -7;
	static int16_t x268 = -1;
	volatile int32_t t61 = -24032842;

	t61 = (((x265/x266)==x267)+x268);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 27563712597399LLU;
	volatile int16_t x270 = INT16_MIN;
	static volatile int16_t x271 = -1;
	int64_t x272 = INT64_MAX;

	t62 = (((x269/x270)==x271)+x272);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x273 = INT32_MIN;
	uint64_t x274 = 60LLU;
	static int64_t x275 = 146735532677795LL;
	volatile int64_t x276 = INT64_MIN;

	t63 = (((x273/x274)==x275)+x276);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = -34015966;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = -3;
	static volatile int8_t x280 = INT8_MIN;
	int32_t t64 = 1;

	t64 = (((x277/x278)==x279)+x280);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = INT64_MIN;
	volatile uint16_t x282 = UINT16_MAX;
	static uint64_t x283 = UINT64_MAX;
	static int64_t x284 = -1LL;
	volatile int64_t t65 = -71LL;

	t65 = (((x281/x282)==x283)+x284);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = 2444744421LLU;
	int8_t x286 = -28;
	int16_t x287 = INT16_MAX;
	int64_t x288 = INT64_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = (((x285/x286)==x287)+x288);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = -1226307311218686LL;
	uint64_t x290 = UINT64_MAX;
	int8_t x292 = 28;
	int32_t t67 = -6629696;

	t67 = (((x289/x290)==x291)+x292);

	if (t67 != 28) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = 218LLU;
	int64_t x294 = 2LL;
	int32_t x295 = -1;
	static volatile uint8_t x296 = UINT8_MAX;
	volatile int32_t t68 = 619439;

	t68 = (((x293/x294)==x295)+x296);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	uint16_t x299 = UINT16_MAX;
	int16_t x300 = INT16_MAX;
	volatile int32_t t69 = -10576263;

	t69 = (((x297/x298)==x299)+x300);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x302 = 6552U;
	volatile int32_t x303 = -8333575;
	volatile int8_t x304 = INT8_MIN;
	int32_t t70 = -260;

	t70 = (((x301/x302)==x303)+x304);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x305 = -1627LL;
	uint64_t x307 = 19739377839834LLU;
	volatile int32_t t71 = 296;

	t71 = (((x305/x306)==x307)+x308);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -1LL;
	int16_t x310 = -1660;
	static int16_t x311 = INT16_MIN;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t72 = -2356;

	t72 = (((x309/x310)==x311)+x312);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	int32_t x315 = -1;
	static int32_t x316 = -56920;
	int32_t t73 = 15082940;

	t73 = (((x313/x314)==x315)+x316);

	if (t73 != -56920) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 5U;
	uint8_t x319 = 3U;
	volatile int64_t x320 = -1LL;
	int64_t t74 = -1576008248818403LL;

	t74 = (((x317/x318)==x319)+x320);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = 107U;
	static int8_t x330 = -7;
	int8_t x332 = 26;
	static int32_t t75 = 250693589;

	t75 = (((x329/x330)==x331)+x332);

	if (t75 != 26) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = INT16_MAX;
	int32_t x334 = 654768;
	volatile int64_t x335 = 2152739948813LL;
	int16_t x336 = INT16_MIN;
	volatile int32_t t76 = -1704862;

	t76 = (((x333/x334)==x335)+x336);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = UINT32_MAX;
	static volatile uint32_t x338 = 522406U;
	static uint8_t x339 = 32U;
	int16_t x340 = 9613;
	static int32_t t77 = -33;

	t77 = (((x337/x338)==x339)+x340);

	if (t77 != 9613) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x342 = INT64_MIN;
	uint8_t x343 = 22U;
	int64_t x344 = -1LL;
	volatile int64_t t78 = 115044586954831LL;

	t78 = (((x341/x342)==x343)+x344);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = -551991;
	int8_t x346 = INT8_MAX;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (((x345/x346)==x347)+x348);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x349 = 14897;
	uint32_t x350 = 155U;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = UINT32_MAX;
	static uint32_t t80 = UINT32_MAX;

	t80 = (((x349/x350)==x351)+x352);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = 55LL;
	int64_t x354 = -101184517433LL;
	int8_t x355 = INT8_MIN;
	volatile int32_t t81 = 200;

	t81 = (((x353/x354)==x355)+x356);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x357 = 5480895956155LLU;
	uint8_t x359 = 25U;

	t82 = (((x357/x358)==x359)+x360);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x361 = 1U;
	volatile uint64_t x362 = 22934078739LLU;
	int32_t x363 = 286947591;
	int32_t x364 = 6874;
	static volatile int32_t t83 = 731440539;

	t83 = (((x361/x362)==x363)+x364);

	if (t83 != 6874) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x367 = -1;
	volatile int32_t t84 = 5248;

	t84 = (((x365/x366)==x367)+x368);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x369 = 301LLU;
	int16_t x370 = -1;
	volatile int64_t x371 = INT64_MIN;
	static int16_t x372 = INT16_MIN;
	static int32_t t85 = 11641433;

	t85 = (((x369/x370)==x371)+x372);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x373 = 394749097;
	int16_t x375 = 4;
	int8_t x376 = 2;
	int32_t t86 = 748;

	t86 = (((x373/x374)==x375)+x376);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x377 = 1U;
	int32_t x378 = -23549;
	int8_t x379 = INT8_MIN;
	uint64_t x380 = 12824181LLU;
	volatile uint64_t t87 = 1433605757191791LLU;

	t87 = (((x377/x378)==x379)+x380);

	if (t87 != 12824181LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MIN;
	int16_t x383 = -1;
	volatile int32_t t88 = -3536;

	t88 = (((x381/x382)==x383)+x384);

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x386 = -2;
	int64_t x387 = 97LL;
	uint16_t x388 = 12U;
	volatile int32_t t89 = -138036;

	t89 = (((x385/x386)==x387)+x388);

	if (t89 != 12) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x390 = 743;
	static int32_t x391 = -118;
	static int8_t x392 = INT8_MIN;

	t90 = (((x389/x390)==x391)+x392);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x395 = -77;
	static int8_t x396 = -1;
	volatile int32_t t91 = 347823016;

	t91 = (((x393/x394)==x395)+x396);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = 6359881894LL;
	int8_t x399 = 30;
	uint64_t x400 = UINT64_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x397/x398)==x399)+x400);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x401 = UINT16_MAX;
	volatile int64_t x402 = INT64_MAX;
	int32_t x404 = INT32_MAX;

	t93 = (((x401/x402)==x403)+x404);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x405 = INT32_MAX;
	int32_t x407 = INT32_MIN;
	static int64_t x408 = INT64_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = (((x405/x406)==x407)+x408);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = -1;
	uint64_t x410 = 191LLU;
	int16_t x411 = -494;
	uint8_t x412 = UINT8_MAX;

	t95 = (((x409/x410)==x411)+x412);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = UINT64_MAX;
	volatile int64_t x414 = INT64_MAX;
	int32_t x416 = INT32_MAX;
	int32_t t96 = INT32_MAX;

	t96 = (((x413/x414)==x415)+x416);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x418 = INT32_MIN;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = 132;
	static volatile int32_t t97 = -50100534;

	t97 = (((x417/x418)==x419)+x420);

	if (t97 != 132) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = -1340;
	static int8_t x422 = INT8_MIN;
	static int32_t x423 = INT32_MIN;
	int32_t x424 = 229806129;

	t98 = (((x421/x422)==x423)+x424);

	if (t98 != 229806129) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = INT8_MIN;
	uint16_t x426 = 387U;
	volatile int64_t x427 = INT64_MIN;
	uint8_t x428 = 6U;
	volatile int32_t t99 = 171070;

	t99 = (((x425/x426)==x427)+x428);

	if (t99 != 6) { NG(); } else { ; }
	
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

