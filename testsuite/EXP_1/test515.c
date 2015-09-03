#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
int32_t x7 = INT32_MAX;
uint64_t x11 = 270024266414LLU;
volatile int8_t x14 = -48;
static int32_t t4 = -1;
int64_t x21 = INT64_MIN;
static int16_t x23 = 279;
volatile int64_t x24 = INT64_MAX;
volatile int32_t t5 = -26;
int16_t x29 = -1;
int16_t x32 = INT16_MIN;
int32_t t7 = -32586508;
int32_t x33 = INT32_MAX;
volatile uint16_t x34 = 3528U;
int8_t x40 = 7;
int32_t t9 = 3320558;
static int8_t x48 = 0;
uint32_t x65 = 86U;
uint16_t x66 = 26U;
static int32_t x67 = INT32_MAX;
int32_t t16 = 1656;
int16_t x70 = INT16_MIN;
volatile int32_t x72 = INT32_MIN;
int16_t x74 = -1;
volatile int16_t x77 = INT16_MIN;
int64_t x82 = INT64_MAX;
volatile int32_t t20 = -459953;
int32_t t23 = 9820703;
uint8_t x99 = 4U;
uint8_t x103 = 2U;
int32_t t25 = -495809142;
uint64_t x107 = UINT64_MAX;
volatile int32_t t26 = -12121451;
uint32_t x112 = UINT32_MAX;
int32_t x119 = -2;
int32_t t29 = 31648;
volatile int32_t t30 = -6;
uint32_t x126 = UINT32_MAX;
uint64_t x130 = 13LLU;
volatile uint64_t x137 = 253545547048316LLU;
static uint64_t x139 = UINT64_MAX;
uint64_t x145 = 5138032185542106569LLU;
int8_t x146 = 3;
int16_t x148 = -1;
int64_t x150 = 981338419296486913LL;
int32_t x151 = INT32_MIN;
static int8_t x155 = -1;
int8_t x163 = INT8_MIN;
uint16_t x167 = 1U;
int8_t x178 = -4;
int32_t t42 = 1;
static int16_t x186 = INT16_MAX;
static volatile int32_t t44 = -39813;
static int32_t x195 = 505768;
volatile int32_t t46 = -56;
uint8_t x201 = 34U;
int8_t x205 = -3;
volatile int16_t x209 = INT16_MIN;
int8_t x210 = INT8_MIN;
volatile int32_t t49 = 1921;
volatile int8_t x216 = INT8_MAX;
int32_t t53 = 195431736;
uint32_t x232 = 362U;
int8_t x233 = 9;
volatile uint8_t x237 = 3U;
uint8_t x240 = 4U;
volatile int64_t x242 = -229895812721210852LL;
uint64_t x243 = 13039051799406LLU;
static volatile int32_t t57 = 500388;
uint64_t x247 = 149LLU;
volatile int32_t t58 = 7891279;
volatile int64_t x254 = INT64_MIN;
volatile int64_t x257 = INT64_MIN;
int32_t t61 = -204;
uint16_t x262 = UINT16_MAX;
static volatile int16_t x276 = 3905;
int32_t x279 = INT32_MIN;
static int64_t x281 = INT64_MAX;
int16_t x282 = -512;
uint8_t x287 = 31U;
int8_t x288 = INT8_MIN;
static volatile uint8_t x289 = 0U;
int16_t x294 = INT16_MIN;
uint16_t x299 = 104U;
int32_t t72 = -1706588;
int8_t x311 = INT8_MIN;
volatile int16_t x315 = INT16_MIN;
int16_t x319 = INT16_MAX;
static int64_t x321 = -392068143782LL;
uint32_t x322 = 1766291U;
int8_t x324 = INT8_MAX;
volatile uint32_t x330 = 2047524030U;
volatile int32_t t79 = 926;
static uint64_t x334 = UINT64_MAX;
int32_t t80 = 896866;
int16_t x339 = -1;
int32_t t81 = 7367;
int16_t x343 = INT16_MAX;
int16_t x345 = -186;
volatile int16_t x347 = INT16_MIN;
int8_t x348 = -33;
uint16_t x351 = UINT16_MAX;
int32_t x352 = INT32_MIN;
int8_t x356 = INT8_MIN;
volatile int32_t t85 = 1180;
static uint32_t x357 = 26U;
uint16_t x358 = 46U;
uint16_t x360 = 25543U;
static volatile int32_t t86 = -1708474;
static int32_t x370 = -1;
uint16_t x379 = UINT16_MAX;
int16_t x396 = 1;
int32_t t95 = 470016097;
int16_t x403 = -1;
volatile int32_t x404 = INT32_MIN;
int8_t x405 = INT8_MIN;
int32_t t97 = -683;
int16_t x409 = INT16_MIN;
static int64_t x413 = INT64_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x2 = UINT64_MAX;
	static uint8_t x4 = 34U;
	int32_t t0 = 1044364;

	t0 = (((x1/x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MIN;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -199533180;

	t1 = (((x5/x6)+x7)==x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 51048U;
	int16_t x10 = 1;
	int32_t x12 = 2;
	volatile int32_t t2 = 17370334;

	t2 = (((x9/x10)+x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static int16_t x15 = -1;
	int32_t x16 = -1;
	static volatile int32_t t3 = 14;

	t3 = (((x13/x14)+x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static uint16_t x18 = 11U;
	int64_t x19 = INT64_MIN;
	int32_t x20 = 43456337;

	t4 = (((x17/x18)+x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MAX;

	t5 = (((x21/x22)+x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 13362;
	int8_t x26 = INT8_MIN;
	volatile int64_t x27 = -3LL;
	int16_t x28 = 3334;
	static volatile int32_t t6 = 55470361;

	t6 = (((x25/x26)+x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = 38509151705LL;
	static uint64_t x31 = 15646694900782340LLU;

	t7 = (((x29/x30)+x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x35 = -1;
	volatile uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 877804479;

	t8 = (((x33/x34)+x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 0;
	int64_t x38 = -30903LL;
	static int32_t x39 = -1;

	t9 = (((x37/x38)+x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	int64_t x42 = 438289200972859LL;
	static volatile int8_t x43 = INT8_MAX;
	static int64_t x44 = -1LL;
	int32_t t10 = 0;

	t10 = (((x41/x42)+x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 255U;
	static int64_t x46 = INT64_MIN;
	static int16_t x47 = 23;
	int32_t t11 = -1926594;

	t11 = (((x45/x46)+x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	uint8_t x50 = 72U;
	static int16_t x51 = INT16_MIN;
	uint64_t x52 = 16591016558935LLU;
	volatile int32_t t12 = 5083;

	t12 = (((x49/x50)+x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 11126252721306LLU;
	static int32_t x54 = 34177;
	uint32_t x55 = UINT32_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -1100;

	t13 = (((x53/x54)+x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = 10703;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	static int8_t x60 = -1;
	static volatile int32_t t14 = 2;

	t14 = (((x57/x58)+x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint16_t x62 = UINT16_MAX;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = 139;
	int32_t t15 = -248152;

	t15 = (((x61/x62)+x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x68 = -1LL;

	t16 = (((x65/x66)+x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	volatile int8_t x71 = INT8_MIN;
	int32_t t17 = -8;

	t17 = (((x69/x70)+x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -17;
	static uint8_t x75 = 5U;
	volatile int16_t x76 = -1;
	int32_t t18 = 7;

	t18 = (((x73/x74)+x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x78 = -1;
	int64_t x79 = 2729116099144LL;
	int16_t x80 = INT16_MAX;
	int32_t t19 = -2255127;

	t19 = (((x77/x78)+x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x83 = 31;
	int8_t x84 = INT8_MAX;

	t20 = (((x81/x82)+x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 2447;
	int32_t x86 = INT32_MAX;
	int16_t x87 = INT16_MAX;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = 3303394;

	t21 = (((x85/x86)+x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x89 = UINT16_MAX;
	int16_t x90 = 7;
	static volatile uint16_t x91 = UINT16_MAX;
	int8_t x92 = -1;
	int32_t t22 = 66681;

	t22 = (((x89/x90)+x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = 10395726LL;
	volatile int64_t x94 = INT64_MIN;
	int8_t x95 = -1;
	uint8_t x96 = 28U;

	t23 = (((x93/x94)+x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	int8_t x98 = INT8_MIN;
	volatile int8_t x100 = INT8_MIN;
	static int32_t t24 = -633;

	t24 = (((x97/x98)+x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 1;
	int16_t x102 = INT16_MIN;
	static uint32_t x104 = 16198485U;

	t25 = (((x101/x102)+x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = INT8_MIN;
	int64_t x108 = INT64_MIN;

	t26 = (((x105/x106)+x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int8_t x110 = 33;
	int16_t x111 = -14;
	static int32_t t27 = -54;

	t27 = (((x109/x110)+x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	volatile int32_t x114 = -1;
	int8_t x115 = INT8_MIN;
	int64_t x116 = 142021LL;
	int32_t t28 = -17229;

	t28 = (((x113/x114)+x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	uint64_t x118 = 355603870204LLU;
	int64_t x120 = -1077LL;

	t29 = (((x117/x118)+x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = UINT16_MAX;
	int16_t x122 = INT16_MIN;
	static volatile int64_t x123 = 921747509747681LL;
	int32_t x124 = 37282839;

	t30 = (((x121/x122)+x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MAX;
	int16_t x127 = INT16_MIN;
	volatile int64_t x128 = -1LL;
	volatile int32_t t31 = -5;

	t31 = (((x125/x126)+x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MAX;
	uint64_t x131 = 520LLU;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -3022905;

	t32 = (((x129/x130)+x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -771;
	int8_t x134 = -1;
	uint64_t x135 = 59897LLU;
	volatile int64_t x136 = INT64_MIN;
	int32_t t33 = 507136;

	t33 = (((x133/x134)+x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = 527900097U;
	int16_t x140 = -280;
	volatile int32_t t34 = 220004702;

	t34 = (((x137/x138)+x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x147 = 19347U;
	int32_t t35 = -60513189;

	t35 = (((x145/x146)+x147)==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	int32_t x152 = 12225050;
	volatile int32_t t36 = 386;

	t36 = (((x149/x150)+x151)==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = 0;
	int8_t x154 = INT8_MIN;
	int32_t x156 = -2875767;
	volatile int32_t t37 = 322995948;

	t37 = (((x153/x154)+x155)==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	int16_t x158 = INT16_MIN;
	uint16_t x159 = UINT16_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t38 = 99286841;

	t38 = (((x157/x158)+x159)==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = -1LL;
	uint8_t x162 = UINT8_MAX;
	int64_t x164 = INT64_MIN;
	static int32_t t39 = -605;

	t39 = (((x161/x162)+x163)==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MIN;
	static int32_t x168 = -1;
	volatile int32_t t40 = 19;

	t40 = (((x165/x166)+x167)==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 149U;
	int8_t x170 = -1;
	volatile uint64_t x171 = UINT64_MAX;
	static int32_t x172 = 52260;
	volatile int32_t t41 = 607056241;

	t41 = (((x169/x170)+x171)==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	int64_t x179 = -471LL;
	int16_t x180 = INT16_MIN;

	t42 = (((x177/x178)+x179)==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = 18851572988LL;
	int16_t x182 = -1312;
	uint8_t x183 = 14U;
	volatile uint32_t x184 = UINT32_MAX;
	int32_t t43 = 58;

	t43 = (((x181/x182)+x183)==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x185 = INT64_MIN;
	int8_t x187 = -6;
	volatile int64_t x188 = INT64_MAX;

	t44 = (((x185/x186)+x187)==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = 36719514063317249LLU;
	volatile int64_t x194 = INT64_MIN;
	uint8_t x196 = 117U;
	static volatile int32_t t45 = 1;

	t45 = (((x193/x194)+x195)==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x197 = UINT32_MAX;
	int64_t x198 = INT64_MIN;
	static int16_t x199 = INT16_MAX;
	volatile uint64_t x200 = 1349359203LLU;

	t46 = (((x197/x198)+x199)==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x202 = UINT8_MAX;
	uint32_t x203 = UINT32_MAX;
	uint8_t x204 = 46U;
	int32_t t47 = -204;

	t47 = (((x201/x202)+x203)==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x206 = 6;
	int16_t x207 = -1;
	uint8_t x208 = 15U;
	int32_t t48 = 0;

	t48 = (((x205/x206)+x207)==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x211 = 0;
	static uint32_t x212 = 97963U;

	t49 = (((x209/x210)+x211)==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	static volatile int32_t x214 = -9001602;
	int64_t x215 = -133577502219873476LL;
	int32_t t50 = 2;

	t50 = (((x213/x214)+x215)==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = -19;
	uint32_t x219 = UINT32_MAX;
	uint64_t x220 = 56LLU;
	int32_t t51 = -54;

	t51 = (((x217/x218)+x219)==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x221 = 2LLU;
	static int64_t x222 = INT64_MIN;
	static int16_t x223 = INT16_MIN;
	int8_t x224 = 2;
	static int32_t t52 = 6;

	t52 = (((x221/x222)+x223)==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x225 = UINT64_MAX;
	int32_t x226 = -1;
	int32_t x227 = INT32_MIN;
	int32_t x228 = 240;

	t53 = (((x225/x226)+x227)==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = -1;
	static volatile uint32_t x230 = 6U;
	int32_t x231 = 56412;
	int32_t t54 = 39;

	t54 = (((x229/x230)+x231)==x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x234 = UINT8_MAX;
	volatile int32_t x235 = INT32_MIN;
	volatile int64_t x236 = INT64_MAX;
	volatile int32_t t55 = -106181;

	t55 = (((x233/x234)+x235)==x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x238 = 28712281853984LL;
	uint32_t x239 = UINT32_MAX;
	int32_t t56 = -7532360;

	t56 = (((x237/x238)+x239)==x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 0U;
	volatile int64_t x244 = INT64_MAX;

	t57 = (((x241/x242)+x243)==x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -1;
	volatile int32_t x246 = -585;
	uint32_t x248 = 4U;

	t58 = (((x245/x246)+x247)==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = 9U;
	int8_t x251 = 30;
	volatile uint16_t x252 = 62U;
	volatile int32_t t59 = 1111;

	t59 = (((x249/x250)+x251)==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 1U;
	int64_t x255 = 6233723LL;
	volatile int32_t x256 = INT32_MIN;
	int32_t t60 = -1;

	t60 = (((x253/x254)+x255)==x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x258 = INT32_MIN;
	uint64_t x259 = 101942122LLU;
	static int8_t x260 = 0;

	t61 = (((x257/x258)+x259)==x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	int16_t x263 = 103;
	static volatile int32_t x264 = INT32_MIN;
	volatile int32_t t62 = -686897;

	t62 = (((x261/x262)+x263)==x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x265 = 0U;
	volatile int32_t x266 = INT32_MIN;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t63 = -10;

	t63 = (((x265/x266)+x267)==x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = -1;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = 2U;
	int64_t x272 = -1LL;
	volatile int32_t t64 = 800;

	t64 = (((x269/x270)+x271)==x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x273 = UINT16_MAX;
	uint64_t x274 = 13648271038102622LLU;
	int64_t x275 = -1LL;
	int32_t t65 = -34383577;

	t65 = (((x273/x274)+x275)==x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = -1;
	volatile int32_t x278 = -1;
	static int8_t x280 = -1;
	int32_t t66 = 45577177;

	t66 = (((x277/x278)+x279)==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x283 = INT16_MAX;
	int16_t x284 = -1;
	int32_t t67 = -1014969610;

	t67 = (((x281/x282)+x283)==x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 149U;
	uint32_t x286 = UINT32_MAX;
	int32_t t68 = -6;

	t68 = (((x285/x286)+x287)==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x290 = -1;
	int32_t x291 = -1;
	int32_t x292 = INT32_MAX;
	static int32_t t69 = 76607233;

	t69 = (((x289/x290)+x291)==x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	volatile int64_t x296 = INT64_MIN;
	volatile int32_t t70 = -1057;

	t70 = (((x293/x294)+x295)==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 7U;
	int16_t x298 = 7505;
	uint8_t x300 = 86U;
	volatile int32_t t71 = -400;

	t71 = (((x297/x298)+x299)==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x301 = -1LL;
	int32_t x302 = -1;
	uint16_t x303 = 110U;
	int64_t x304 = -1144LL;

	t72 = (((x301/x302)+x303)==x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MAX;
	int16_t x306 = -1;
	static uint64_t x307 = 625784295983729LLU;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t73 = 108970;

	t73 = (((x305/x306)+x307)==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = 34;
	int32_t x310 = 330878;
	int8_t x312 = -1;
	int32_t t74 = 15;

	t74 = (((x309/x310)+x311)==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -1;
	uint16_t x314 = 5217U;
	uint8_t x316 = UINT8_MAX;
	static int32_t t75 = 6;

	t75 = (((x313/x314)+x315)==x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x317 = INT8_MIN;
	uint32_t x318 = 392934990U;
	int16_t x320 = 25;
	int32_t t76 = -624597571;

	t76 = (((x317/x318)+x319)==x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x323 = INT32_MIN;
	volatile int32_t t77 = -53394;

	t77 = (((x321/x322)+x323)==x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x325 = -1;
	int16_t x326 = -9;
	int32_t x327 = -15412839;
	static int32_t x328 = -1;
	volatile int32_t t78 = 818;

	t78 = (((x325/x326)+x327)==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = INT32_MAX;
	uint16_t x331 = 2460U;
	uint32_t x332 = 60U;

	t79 = (((x329/x330)+x331)==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x333 = 671416957516169LL;
	static volatile int16_t x335 = -1;
	uint16_t x336 = UINT16_MAX;

	t80 = (((x333/x334)+x335)==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 1873U;
	uint32_t x338 = 456U;
	int8_t x340 = -1;

	t81 = (((x337/x338)+x339)==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = 2;
	volatile int8_t x342 = INT8_MIN;
	uint64_t x344 = 182616088352247LLU;
	volatile int32_t t82 = -3348;

	t82 = (((x341/x342)+x343)==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x346 = INT32_MAX;
	volatile int32_t t83 = 2;

	t83 = (((x345/x346)+x347)==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MAX;
	volatile int32_t x350 = INT32_MIN;
	static int32_t t84 = -2288;

	t84 = (((x349/x350)+x351)==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = 3060788;
	uint32_t x354 = 2792U;
	uint32_t x355 = UINT32_MAX;

	t85 = (((x353/x354)+x355)==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x359 = INT32_MAX;

	t86 = (((x357/x358)+x359)==x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x361 = INT8_MAX;
	int64_t x362 = -1LL;
	int8_t x363 = INT8_MAX;
	volatile int16_t x364 = 15265;
	volatile int32_t t87 = -712543536;

	t87 = (((x361/x362)+x363)==x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = 1;
	int16_t x366 = 2078;
	int8_t x367 = INT8_MIN;
	int32_t x368 = 722121600;
	volatile int32_t t88 = -233;

	t88 = (((x365/x366)+x367)==x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x369 = 140U;
	volatile uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t89 = 20118;

	t89 = (((x369/x370)+x371)==x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = 3U;
	int16_t x374 = INT16_MIN;
	static uint32_t x375 = 2429725U;
	static uint16_t x376 = 195U;
	static int32_t t90 = -1571;

	t90 = (((x373/x374)+x375)==x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 32U;
	int64_t x378 = INT64_MAX;
	int16_t x380 = INT16_MIN;
	volatile int32_t t91 = -158198501;

	t91 = (((x377/x378)+x379)==x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = -1LL;
	int32_t x388 = -1;
	static int32_t t92 = 0;

	t92 = (((x385/x386)+x387)==x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x389 = 28;
	int16_t x390 = 21;
	int64_t x391 = -1LL;
	int32_t x392 = -1;
	int32_t t93 = 15445;

	t93 = (((x389/x390)+x391)==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = 6U;
	volatile uint32_t x395 = UINT32_MAX;
	volatile int32_t t94 = -6;

	t94 = (((x393/x394)+x395)==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	uint16_t x399 = UINT16_MAX;
	uint64_t x400 = UINT64_MAX;

	t95 = (((x397/x398)+x399)==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MAX;
	static volatile int32_t t96 = 1;

	t96 = (((x401/x402)+x403)==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x406 = -1222076;
	static int8_t x407 = INT8_MAX;
	uint32_t x408 = 105U;

	t97 = (((x405/x406)+x407)==x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x410 = 225U;
	int8_t x411 = INT8_MAX;
	int64_t x412 = INT64_MIN;
	int32_t t98 = -1;

	t98 = (((x409/x410)+x411)==x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x414 = -15;
	int32_t x415 = -1;
	uint8_t x416 = 8U;
	volatile int32_t t99 = 27;

	t99 = (((x413/x414)+x415)==x416);

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

