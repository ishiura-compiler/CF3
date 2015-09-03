#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x17 = -48;
volatile uint32_t t2 = 195017475U;
static volatile uint8_t x21 = UINT8_MAX;
int32_t t5 = 47;
static int64_t x39 = -1LL;
uint8_t x40 = 3U;
int8_t x43 = -18;
int32_t t9 = 1203420;
int64_t x50 = INT64_MIN;
volatile int32_t t11 = 15721;
uint32_t x67 = 979U;
int64_t t14 = -235LL;
static int32_t x69 = INT32_MIN;
volatile int8_t x74 = INT8_MAX;
int16_t x77 = -1;
volatile int32_t t18 = 718;
static uint32_t x86 = 251047U;
uint8_t x89 = UINT8_MAX;
int16_t x97 = INT16_MIN;
uint64_t t22 = 188175952362122LLU;
uint64_t x105 = UINT64_MAX;
int64_t x111 = -80426919170LL;
int16_t x114 = INT16_MIN;
int32_t x116 = INT32_MIN;
uint32_t t25 = 467501U;
uint32_t x122 = UINT32_MAX;
static int64_t x123 = 74LL;
int32_t x124 = INT32_MIN;
int64_t t27 = -332140790735730337LL;
volatile int32_t x135 = INT32_MAX;
uint64_t x142 = 683293097LLU;
int8_t x146 = INT8_MIN;
int8_t x148 = INT8_MIN;
static volatile int8_t x153 = INT8_MIN;
static int8_t x155 = INT8_MIN;
volatile int8_t x159 = INT8_MIN;
uint16_t x161 = 4186U;
int16_t x162 = -1;
volatile uint32_t t36 = 36658U;
int8_t x172 = INT8_MAX;
static int32_t x174 = INT32_MAX;
volatile int8_t x176 = INT8_MIN;
static int64_t x178 = 2618878517LL;
int32_t t39 = 3;
int8_t x181 = INT8_MIN;
int32_t x185 = -1;
static int16_t x187 = -1;
volatile int8_t x189 = INT8_MAX;
int64_t x195 = -218382LL;
uint16_t x207 = 2U;
static int16_t x211 = -1882;
static volatile uint64_t t48 = 3286995476LLU;
uint16_t x222 = 14U;
int8_t x223 = INT8_MAX;
int32_t x234 = -1;
int32_t x235 = -1;
uint64_t t51 = 6235337LLU;
static int64_t x242 = INT64_MIN;
volatile int64_t t56 = -1976889315346LL;
int16_t x265 = 1;
uint32_t x267 = UINT32_MAX;
uint32_t t57 = 854311855U;
uint64_t t59 = 1LLU;
int32_t x282 = 1766278;
int16_t x289 = INT16_MIN;
uint32_t t62 = 249946362U;
int16_t x296 = 42;
static int8_t x300 = INT8_MIN;
static int32_t x301 = 234325869;
int32_t t65 = 79827362;
int64_t t67 = -221417LL;
int8_t x322 = -5;
uint16_t x324 = 10735U;
uint16_t x328 = 1U;
int16_t x330 = 905;
static volatile uint32_t x333 = UINT32_MAX;
int16_t x334 = INT16_MAX;
int64_t x341 = 108LL;
volatile uint32_t t74 = 55504141U;
uint16_t x350 = 985U;
static uint32_t x351 = 8017438U;
static uint32_t x354 = 419U;
volatile int32_t t77 = 0;
uint8_t x361 = 1U;
volatile int32_t x363 = INT32_MIN;
volatile int8_t x364 = INT8_MIN;
static volatile uint16_t x366 = UINT16_MAX;
volatile int64_t x382 = INT64_MIN;
volatile int32_t x394 = -1;
int16_t x401 = INT16_MAX;
uint64_t x404 = 332LLU;
volatile uint64_t t84 = 160079834038448264LLU;
int32_t x409 = INT32_MIN;
uint32_t x411 = 1883181U;
uint8_t x414 = 2U;
int8_t x420 = -4;
int32_t x447 = INT32_MIN;
int8_t x448 = -1;
volatile int16_t x455 = INT16_MIN;
static int64_t x471 = -1LL;
volatile int64_t t96 = INT64_MAX;
uint64_t t97 = 118475LLU;
static int16_t x480 = 0;
int32_t t98 = 51289;
volatile int8_t x484 = -1;
volatile int32_t t99 = -20;


void f0(void) {
	int16_t x5 = 110;
	static uint16_t x6 = UINT16_MAX;
	static volatile int64_t x7 = -1LL;
	int8_t x8 = INT8_MIN;
	int64_t t0 = 512780729821564300LL;

	t0 = (((x5<=x6)*x7)-x8);

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = -391LL;
	int64_t x14 = INT64_MIN;
	int16_t x15 = -1;
	static uint16_t x16 = 205U;
	int32_t t1 = 60;

	t1 = (((x13<=x14)*x15)-x16);

	if (t1 != -205) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x18 = 33U;
	uint32_t x19 = 4607211U;
	static int8_t x20 = INT8_MIN;

	t2 = (((x17<=x18)*x19)-x20);

	if (t2 != 4607339U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x22 = INT16_MIN;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t3 = 7;

	t3 = (((x21<=x22)*x23)-x24);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x25 = 60U;
	uint32_t x26 = 4580546U;
	int32_t x27 = -777;
	uint16_t x28 = UINT16_MAX;
	static volatile int32_t t4 = -12377;

	t4 = (((x25<=x26)*x27)-x28);

	if (t4 != -66312) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = 1;
	int32_t x30 = INT32_MIN;
	int32_t x31 = -1;
	uint16_t x32 = 2U;

	t5 = (((x29<=x30)*x31)-x32);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -67166892;
	int16_t x34 = INT16_MAX;
	uint8_t x35 = 27U;
	uint32_t x36 = 1732165537U;
	uint32_t t6 = 2U;

	t6 = (((x33<=x34)*x35)-x36);

	if (t6 != 2562801786U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = 31;
	int32_t x38 = 1015093268;
	volatile int64_t t7 = -303942755LL;

	t7 = (((x37<=x38)*x39)-x40);

	if (t7 != -4LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x41 = UINT64_MAX;
	uint64_t x42 = 236LLU;
	volatile int8_t x44 = 3;
	int32_t t8 = 952127;

	t8 = (((x41<=x42)*x43)-x44);

	if (t8 != -3) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x45 = 1U;
	int8_t x46 = 1;
	static int16_t x47 = -1;
	int8_t x48 = INT8_MIN;

	t9 = (((x45<=x46)*x47)-x48);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = INT32_MIN;
	uint8_t x51 = 70U;
	int32_t x52 = INT32_MAX;
	int32_t t10 = -2;

	t10 = (((x49<=x50)*x51)-x52);

	if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	static int32_t x54 = INT32_MAX;
	static int8_t x55 = INT8_MAX;
	uint16_t x56 = 1591U;

	t11 = (((x53<=x54)*x55)-x56);

	if (t11 != -1464) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 23U;
	volatile int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MIN;
	int64_t t12 = 646847958LL;

	t12 = (((x57<=x58)*x59)-x60);

	if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = -1LL;
	volatile int32_t x63 = 1;
	int64_t x64 = -1826796119786932LL;
	int64_t t13 = -37697LL;

	t13 = (((x61<=x62)*x63)-x64);

	if (t13 != 1826796119786933LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 1U;
	int32_t x66 = 1840423;
	int64_t x68 = -1013147289LL;

	t14 = (((x65<=x66)*x67)-x68);

	if (t14 != 1013148268LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x70 = 13LLU;
	static volatile uint8_t x71 = 10U;
	volatile int8_t x72 = INT8_MIN;
	int32_t t15 = 13204044;

	t15 = (((x69<=x70)*x71)-x72);

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile int8_t x75 = INT8_MIN;
	int8_t x76 = 0;
	volatile int32_t t16 = -304979;

	t16 = (((x73<=x74)*x75)-x76);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = -1;
	static volatile uint8_t x79 = 66U;
	static int8_t x80 = INT8_MAX;
	static int32_t t17 = -105;

	t17 = (((x77<=x78)*x79)-x80);

	if (t17 != -61) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = INT32_MIN;
	volatile int64_t x82 = 14035715465LL;
	int16_t x83 = -5;
	volatile int16_t x84 = INT16_MIN;

	t18 = (((x81<=x82)*x83)-x84);

	if (t18 != 32763) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	int64_t x87 = -2276153464256532LL;
	int8_t x88 = INT8_MIN;
	int64_t t19 = 6529LL;

	t19 = (((x85<=x86)*x87)-x88);

	if (t19 != 128LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x90 = 965812U;
	static int16_t x91 = -1;
	int8_t x92 = 1;
	static int32_t t20 = 172;

	t20 = (((x89<=x90)*x91)-x92);

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x98 = INT16_MAX;
	int8_t x99 = INT8_MAX;
	volatile int16_t x100 = -1;
	int32_t t21 = -1;

	t21 = (((x97<=x98)*x99)-x100);

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = -6747;
	volatile int8_t x102 = 0;
	static uint64_t x103 = UINT64_MAX;
	int8_t x104 = INT8_MAX;

	t22 = (((x101<=x102)*x103)-x104);

	if (t22 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x106 = INT8_MIN;
	volatile uint16_t x107 = UINT16_MAX;
	uint32_t x108 = 162169U;
	uint32_t t23 = 9404944U;

	t23 = (((x105<=x106)*x107)-x108);

	if (t23 != 4294805127U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MIN;
	int32_t x112 = 1;
	static int64_t t24 = -429LL;

	t24 = (((x109<=x110)*x111)-x112);

	if (t24 != -80426919171LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = UINT32_MAX;
	static uint32_t x115 = UINT32_MAX;

	t25 = (((x113<=x114)*x115)-x116);

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x117 = -1;
	int8_t x118 = -1;
	int16_t x119 = INT16_MAX;
	uint32_t x120 = 86154513U;
	uint32_t t26 = 27938U;

	t26 = (((x117<=x118)*x119)-x120);

	if (t26 != 4208845550U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 55U;

	t27 = (((x121<=x122)*x123)-x124);

	if (t27 != 2147483722LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 2;
	volatile int32_t x126 = INT32_MIN;
	volatile uint64_t x127 = 132190597259905008LLU;
	int8_t x128 = -1;
	uint64_t t28 = 2446416029770679LLU;

	t28 = (((x125<=x126)*x127)-x128);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = 84U;
	static int64_t x134 = INT64_MIN;
	int64_t x136 = 419092781594736590LL;
	int64_t t29 = 662LL;

	t29 = (((x133<=x134)*x135)-x136);

	if (t29 != -419092781594736590LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x137 = INT64_MAX;
	uint32_t x138 = 94788585U;
	int8_t x139 = INT8_MIN;
	volatile uint64_t x140 = 1098LLU;
	uint64_t t30 = 511LLU;

	t30 = (((x137<=x138)*x139)-x140);

	if (t30 != 18446744073709550518LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = INT32_MIN;
	int16_t x143 = -1;
	static int16_t x144 = -1;
	volatile int32_t t31 = -373901;

	t31 = (((x141<=x142)*x143)-x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x145 = INT16_MAX;
	int64_t x147 = -52883403507538LL;
	int64_t t32 = 122745205LL;

	t32 = (((x145<=x146)*x147)-x148);

	if (t32 != 128LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x154 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t33 = 197987;

	t33 = (((x153<=x154)*x155)-x156);

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	static volatile int8_t x160 = INT8_MIN;
	volatile int32_t t34 = -716842;

	t34 = (((x157<=x158)*x159)-x160);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x163 = INT64_MIN;
	int32_t x164 = -1;
	volatile int64_t t35 = -127860LL;

	t35 = (((x161<=x162)*x163)-x164);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = -1;
	uint64_t x166 = 43388LLU;
	static uint32_t x167 = 1U;
	int16_t x168 = INT16_MIN;

	t36 = (((x165<=x166)*x167)-x168);

	if (t36 != 32768U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = 13377408807297884LL;
	int8_t x171 = INT8_MIN;
	static int32_t t37 = 8335899;

	t37 = (((x169<=x170)*x171)-x172);

	if (t37 != -255) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x173 = 436;
	uint32_t x175 = UINT32_MAX;
	volatile uint32_t t38 = 61594U;

	t38 = (((x173<=x174)*x175)-x176);

	if (t38 != 127U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x177 = 12U;
	int8_t x179 = 28;
	static uint16_t x180 = 15U;

	t39 = (((x177<=x178)*x179)-x180);

	if (t39 != 13) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = INT64_MIN;
	volatile uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MAX;
	uint32_t t40 = 27U;

	t40 = (((x181<=x182)*x183)-x184);

	if (t40 != 4294967169U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x186 = UINT32_MAX;
	int32_t x188 = INT32_MAX;
	int32_t t41 = INT32_MIN;

	t41 = (((x185<=x186)*x187)-x188);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = -1;
	uint64_t x192 = 9LLU;
	uint64_t t42 = 24545462156057LLU;

	t42 = (((x189<=x190)*x191)-x192);

	if (t42 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = 69522734369405082LL;
	uint16_t x194 = UINT16_MAX;
	int8_t x196 = INT8_MAX;
	static volatile int64_t t43 = 1357978LL;

	t43 = (((x193<=x194)*x195)-x196);

	if (t43 != -127LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x197 = 3955U;
	int32_t x198 = INT32_MIN;
	static int8_t x199 = -1;
	volatile int16_t x200 = INT16_MAX;
	volatile int32_t t44 = 498916539;

	t44 = (((x197<=x198)*x199)-x200);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = 3;
	int64_t x202 = INT64_MAX;
	volatile uint8_t x203 = 12U;
	static int32_t x204 = -1;
	volatile int32_t t45 = 0;

	t45 = (((x201<=x202)*x203)-x204);

	if (t45 != 13) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MAX;
	uint16_t x206 = 0U;
	int8_t x208 = INT8_MAX;
	volatile int32_t t46 = -172073043;

	t46 = (((x205<=x206)*x207)-x208);

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x209 = -1;
	static int8_t x210 = 2;
	int64_t x212 = 1106183398300LL;
	int64_t t47 = -27LL;

	t47 = (((x209<=x210)*x211)-x212);

	if (t47 != -1106183400182LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -1;
	volatile int16_t x214 = -22;
	uint64_t x215 = 64984654LLU;
	int16_t x216 = -1248;

	t48 = (((x213<=x214)*x215)-x216);

	if (t48 != 1248LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x221 = -1;
	static uint8_t x224 = 10U;
	int32_t t49 = -88253;

	t49 = (((x221<=x222)*x223)-x224);

	if (t49 != 117) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = INT32_MAX;
	uint8_t x230 = 68U;
	static uint64_t x231 = 119659158LLU;
	int16_t x232 = 3;
	volatile uint64_t t50 = 980557297192847816LLU;

	t50 = (((x229<=x230)*x231)-x232);

	if (t50 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x233 = INT16_MIN;
	uint64_t x236 = 340745049LLU;

	t51 = (((x233<=x234)*x235)-x236);

	if (t51 != 18446744073368806566LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int64_t x238 = -1LL;
	volatile int64_t x239 = -1LL;
	int16_t x240 = -1;
	static volatile int64_t t52 = -38268823505LL;

	t52 = (((x237<=x238)*x239)-x240);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = 7077885;
	int8_t x243 = INT8_MIN;
	volatile int8_t x244 = 15;
	int32_t t53 = 52204645;

	t53 = (((x241<=x242)*x243)-x244);

	if (t53 != -15) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = 37898LLU;
	int32_t x250 = INT32_MAX;
	int16_t x251 = INT16_MIN;
	static int64_t x252 = INT64_MIN;
	int64_t t54 = 116504330039LL;

	t54 = (((x249<=x250)*x251)-x252);

	if (t54 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -4466836988052223LL;
	int64_t x254 = INT64_MAX;
	volatile int16_t x255 = -1;
	volatile int16_t x256 = -1;
	volatile int32_t t55 = -1853783;

	t55 = (((x253<=x254)*x255)-x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = 3;
	int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MAX;
	volatile int64_t x264 = INT64_MAX;

	t56 = (((x261<=x262)*x263)-x264);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x266 = 221046U;
	int8_t x268 = -1;

	t57 = (((x265<=x266)*x267)-x268);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = -1;
	int8_t x271 = INT8_MAX;
	static volatile int16_t x272 = INT16_MIN;
	volatile int32_t t58 = -3;

	t58 = (((x269<=x270)*x271)-x272);

	if (t58 != 32895) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = UINT64_MAX;
	int16_t x280 = -1;

	t59 = (((x277<=x278)*x279)-x280);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = 100341;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t60 = 10;

	t60 = (((x281<=x282)*x283)-x284);

	if (t60 != -65663) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x285 = 64U;
	int32_t x286 = -1;
	int32_t x287 = INT32_MIN;
	int16_t x288 = INT16_MAX;
	static int32_t t61 = -4215716;

	t61 = (((x285<=x286)*x287)-x288);

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x290 = 136271;
	uint32_t x291 = 55256U;
	uint8_t x292 = 1U;

	t62 = (((x289<=x290)*x291)-x292);

	if (t62 != 55255U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x293 = 111883LL;
	int32_t x294 = INT32_MIN;
	int16_t x295 = -1;
	volatile int32_t t63 = 925967961;

	t63 = (((x293<=x294)*x295)-x296);

	if (t63 != -42) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x297 = -827036530;
	static uint32_t x298 = 264987691U;
	static int8_t x299 = 28;
	volatile int32_t t64 = 494;

	t64 = (((x297<=x298)*x299)-x300);

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x302 = UINT32_MAX;
	volatile int16_t x303 = -1;
	int16_t x304 = -43;

	t65 = (((x301<=x302)*x303)-x304);

	if (t65 != 42) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MIN;
	static int16_t x306 = INT16_MIN;
	uint64_t x307 = 192932928250711411LLU;
	static int16_t x308 = 2584;
	static uint64_t t66 = 6163997LLU;

	t66 = (((x305<=x306)*x307)-x308);

	if (t66 != 192932928250708827LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = -1;
	int64_t x310 = 668683456LL;
	int64_t x311 = -267640478145874LL;
	volatile int32_t x312 = INT32_MAX;

	t67 = (((x309<=x310)*x311)-x312);

	if (t67 != -267642625629521LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = INT64_MIN;
	static volatile int64_t x318 = INT64_MIN;
	int32_t x319 = -7;
	int16_t x320 = 7001;
	static int32_t t68 = -255264;

	t68 = (((x317<=x318)*x319)-x320);

	if (t68 != -7008) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = INT32_MIN;
	static int64_t x323 = -422LL;
	volatile int64_t t69 = 0LL;

	t69 = (((x321<=x322)*x323)-x324);

	if (t69 != -11157LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x325 = 8;
	int8_t x326 = 2;
	static int64_t x327 = 28647LL;
	volatile int64_t t70 = -1963957338405411LL;

	t70 = (((x325<=x326)*x327)-x328);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = 65477887023912963LL;
	static volatile int8_t x331 = 2;
	uint64_t x332 = UINT64_MAX;
	uint64_t t71 = 48392LLU;

	t71 = (((x329<=x330)*x331)-x332);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x335 = 2U;
	int16_t x336 = INT16_MAX;
	volatile int32_t t72 = 42721;

	t72 = (((x333<=x334)*x335)-x336);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x342 = INT16_MAX;
	static volatile uint32_t x343 = 70460U;
	int16_t x344 = INT16_MIN;
	uint32_t t73 = 68556037U;

	t73 = (((x341<=x342)*x343)-x344);

	if (t73 != 103228U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = 1;
	static volatile int8_t x346 = -1;
	uint32_t x347 = 26237U;
	static uint16_t x348 = 0U;

	t74 = (((x345<=x346)*x347)-x348);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 54U;
	int8_t x352 = INT8_MIN;
	volatile uint32_t t75 = 121840245U;

	t75 = (((x349<=x350)*x351)-x352);

	if (t75 != 8017566U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x355 = 94U;
	int16_t x356 = INT16_MIN;
	static uint32_t t76 = 350U;

	t76 = (((x353<=x354)*x355)-x356);

	if (t76 != 32768U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MIN;
	uint8_t x358 = 1U;
	volatile int16_t x359 = -1721;
	static volatile uint8_t x360 = 4U;

	t77 = (((x357<=x358)*x359)-x360);

	if (t77 != -1725) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x362 = INT64_MIN;
	int32_t t78 = -1530371;

	t78 = (((x361<=x362)*x363)-x364);

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x365 = 5U;
	static int32_t x367 = -1;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t79 = 3566813;

	t79 = (((x365<=x366)*x367)-x368);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = 0;
	uint16_t x374 = UINT16_MAX;
	int8_t x375 = 1;
	int16_t x376 = INT16_MIN;
	static volatile int32_t t80 = -384542334;

	t80 = (((x373<=x374)*x375)-x376);

	if (t80 != 32769) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x381 = UINT16_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile int32_t x384 = INT32_MIN;
	uint64_t t81 = 124499269LLU;

	t81 = (((x381<=x382)*x383)-x384);

	if (t81 != 2147483648LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int64_t x387 = -7315703828833332LL;
	int8_t x388 = INT8_MIN;
	int64_t t82 = -359634286160LL;

	t82 = (((x385<=x386)*x387)-x388);

	if (t82 != 128LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x393 = 11202U;
	int8_t x395 = -37;
	uint8_t x396 = 3U;
	int32_t t83 = -656;

	t83 = (((x393<=x394)*x395)-x396);

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x402 = 85256668LLU;
	volatile uint64_t x403 = UINT64_MAX;

	t84 = (((x401<=x402)*x403)-x404);

	if (t84 != 18446744073709551283LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = -181792453LL;
	static uint32_t x406 = 2U;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 0;
	static volatile int32_t t85 = 10729;

	t85 = (((x405<=x406)*x407)-x408);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x410 = 4U;
	uint32_t x412 = UINT32_MAX;
	static uint32_t t86 = 251969119U;

	t86 = (((x409<=x410)*x411)-x412);

	if (t86 != 1883182U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x413 = 24195850449216LLU;
	int64_t x415 = -3212582484172331LL;
	uint64_t x416 = 91LLU;
	uint64_t t87 = 21576778LLU;

	t87 = (((x413<=x414)*x415)-x416);

	if (t87 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x417 = -4;
	int16_t x418 = INT16_MAX;
	int8_t x419 = -1;
	int32_t t88 = 1579856;

	t88 = (((x417<=x418)*x419)-x420);

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x429 = UINT8_MAX;
	int8_t x430 = INT8_MIN;
	int32_t x431 = -1;
	static int16_t x432 = INT16_MIN;
	int32_t t89 = 30685;

	t89 = (((x429<=x430)*x431)-x432);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x433 = INT32_MAX;
	int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MIN;
	static int16_t x436 = INT16_MIN;
	static int32_t t90 = 94021;

	t90 = (((x433<=x434)*x435)-x436);

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x437 = 29U;
	uint16_t x438 = UINT16_MAX;
	int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MAX;
	static volatile int32_t t91 = 822729243;

	t91 = (((x437<=x438)*x439)-x440);

	if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x441 = -1;
	static volatile int32_t x442 = INT32_MIN;
	int32_t x443 = INT32_MAX;
	int64_t x444 = 3047870LL;
	volatile int64_t t92 = 396835556452432784LL;

	t92 = (((x441<=x442)*x443)-x444);

	if (t92 != -3047870LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x445 = -122;
	uint8_t x446 = 1U;
	volatile int32_t t93 = -229591926;

	t93 = (((x445<=x446)*x447)-x448);

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x453 = INT64_MIN;
	volatile uint32_t x454 = 390U;
	int64_t x456 = 46119459429904654LL;
	static volatile int64_t t94 = -15569LL;

	t94 = (((x453<=x454)*x455)-x456);

	if (t94 != -46119459429937422LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x457 = 1391527497060LLU;
	static int64_t x458 = 1LL;
	uint16_t x459 = 1U;
	uint8_t x460 = UINT8_MAX;
	int32_t t95 = 12006157;

	t95 = (((x457<=x458)*x459)-x460);

	if (t95 != -255) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x469 = -4;
	static volatile int64_t x470 = -1LL;
	static int64_t x472 = INT64_MIN;

	t96 = (((x469<=x470)*x471)-x472);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x473 = INT32_MIN;
	uint64_t x474 = 1701LLU;
	int64_t x475 = INT64_MIN;
	static uint64_t x476 = 1388157968483LLU;

	t97 = (((x473<=x474)*x475)-x476);

	if (t97 != 18446742685551583133LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x477 = UINT16_MAX;
	int8_t x478 = -3;
	static int16_t x479 = -3729;

	t98 = (((x477<=x478)*x479)-x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x481 = 703;
	volatile int32_t x482 = -1;
	int8_t x483 = 52;

	t99 = (((x481<=x482)*x483)-x484);

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

