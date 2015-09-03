#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 114U;
static volatile int16_t x7 = -40;
int32_t t2 = -178;
int8_t x13 = -21;
uint32_t x16 = UINT32_MAX;
uint16_t x17 = UINT16_MAX;
static int16_t x24 = INT16_MIN;
int64_t x25 = -37309298536112376LL;
static uint16_t x30 = UINT16_MAX;
int16_t x33 = INT16_MIN;
volatile int8_t x40 = -1;
volatile int32_t t9 = -8234257;
volatile int8_t x46 = INT8_MAX;
uint8_t x57 = 82U;
int64_t x59 = -1LL;
volatile int8_t x67 = -1;
volatile int64_t x73 = INT64_MIN;
uint16_t x74 = 3U;
volatile int8_t x86 = INT8_MIN;
static int32_t x88 = INT32_MIN;
int16_t x91 = INT16_MIN;
int32_t t22 = -1;
int16_t x95 = INT16_MIN;
volatile int64_t x96 = INT64_MIN;
uint16_t x98 = UINT16_MAX;
int32_t t25 = -276932;
volatile int32_t t27 = -9820;
int16_t x115 = -1;
static int16_t x125 = INT16_MIN;
static uint32_t x128 = 393357U;
int8_t x135 = 0;
int16_t x140 = INT16_MIN;
int64_t x141 = -54694LL;
uint64_t x142 = 14889275191482195LLU;
static volatile int32_t t36 = -1022;
int32_t x150 = INT32_MIN;
static int32_t x156 = 224;
uint64_t x157 = UINT64_MAX;
static uint8_t x158 = 15U;
static int64_t x166 = INT64_MIN;
int32_t x167 = -1;
volatile uint8_t x170 = 14U;
static int8_t x171 = -1;
int16_t x172 = INT16_MIN;
int32_t x173 = INT32_MIN;
int64_t x176 = -7109309695956LL;
int32_t x186 = INT32_MIN;
static int64_t x187 = INT64_MIN;
int64_t x189 = INT64_MIN;
int8_t x193 = INT8_MIN;
int16_t x195 = INT16_MIN;
int8_t x199 = INT8_MIN;
int64_t x201 = -9045LL;
static int32_t x206 = -410;
int64_t x207 = INT64_MIN;
volatile int16_t x214 = 1;
static uint16_t x224 = 156U;
volatile int8_t x234 = INT8_MIN;
static int64_t x238 = INT64_MAX;
static volatile int64_t t60 = -376780624961079478LL;
int64_t x246 = INT64_MIN;
uint32_t x249 = UINT32_MAX;
static int64_t x256 = INT64_MIN;
int16_t x260 = INT16_MIN;
uint16_t x264 = 0U;
int32_t t65 = -6206;
volatile int32_t t66 = -30;
int32_t x273 = 5193;
uint64_t x279 = UINT64_MAX;
int64_t x287 = INT64_MAX;
static volatile int64_t x290 = INT64_MAX;
int8_t x302 = -1;
uint16_t x304 = UINT16_MAX;
int64_t x307 = INT64_MIN;
int32_t x316 = -1;
int64_t x318 = INT64_MIN;
uint64_t x323 = 501LLU;
uint64_t x329 = UINT64_MAX;
int64_t x331 = INT64_MIN;
int8_t x332 = INT8_MAX;
volatile int32_t t83 = -5;
int32_t x340 = INT32_MAX;
uint32_t x345 = 105796U;
int32_t t86 = 1;
uint8_t x352 = UINT8_MAX;
int16_t x354 = INT16_MIN;
uint8_t x356 = UINT8_MAX;
int8_t x359 = INT8_MIN;
static int32_t x362 = 37274;
int64_t x367 = INT64_MIN;
static int32_t t92 = -7305;
volatile int16_t x373 = INT16_MAX;
volatile int8_t x374 = INT8_MIN;
int16_t x375 = INT16_MIN;
int64_t x379 = INT64_MIN;
volatile int64_t t94 = 983133LL;
uint8_t x385 = 37U;
int8_t x388 = -63;
static volatile uint8_t x392 = 2U;
int8_t x395 = -7;
int8_t x397 = INT8_MAX;
int32_t x398 = -1;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MAX;
	uint16_t x4 = 21132U;
	volatile int32_t t0 = 1540;

	t0 = ((x1<=(x2&x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 414226543064073330LLU;
	uint16_t x6 = UINT16_MAX;
	static volatile int16_t x8 = 0;
	volatile int32_t t1 = -15737;

	t1 = ((x5<=(x6&x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int32_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	uint8_t x12 = 1U;

	t2 = ((x9<=(x10&x11))&x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 29U;
	int32_t x15 = -7376161;
	static volatile uint32_t t3 = 0U;

	t3 = ((x13<=(x14&x15))&x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = -1;
	int16_t x19 = INT16_MAX;
	static int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = -345315;

	t4 = ((x17<=(x18&x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 639474605444371909LL;
	uint16_t x22 = 51U;
	int32_t x23 = -6;
	volatile int32_t t5 = 7079;

	t5 = ((x21<=(x22&x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x26 = -33047128;
	static int8_t x27 = INT8_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 13341344;

	t6 = ((x25<=(x26&x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 158358919LL;
	static int16_t x31 = 6;
	uint64_t x32 = 809LLU;
	uint64_t t7 = 821985175866LLU;

	t7 = ((x29<=(x30&x31))&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = INT32_MAX;
	volatile int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -3592;

	t8 = ((x33<=(x34&x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	static int32_t x38 = -1;
	uint32_t x39 = UINT32_MAX;

	t9 = ((x37<=(x38&x39))&x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 4665156725101LL;
	uint8_t x42 = 80U;
	int32_t x43 = -1;
	uint64_t x44 = 725845771735LLU;
	uint64_t t10 = 3255LLU;

	t10 = ((x41<=(x42&x43))&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 78335768752689LL;
	uint64_t x47 = 21580143526890LLU;
	int64_t x48 = -1LL;
	int64_t t11 = -341LL;

	t11 = ((x45<=(x46&x47))&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = -2;
	volatile uint32_t x51 = UINT32_MAX;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 1098387;

	t12 = ((x49<=(x50&x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int32_t x54 = -1;
	int16_t x55 = 8;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -392939063;

	t13 = ((x53<=(x54&x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x58 = UINT8_MAX;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = 9558;

	t14 = ((x57<=(x58&x59))&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int16_t x62 = INT16_MAX;
	int16_t x63 = -313;
	int64_t x64 = INT64_MIN;
	int64_t t15 = 875795088560213LL;

	t15 = ((x61<=(x62&x63))&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 1;
	static int8_t x66 = 20;
	int16_t x68 = 11426;
	volatile int32_t t16 = 16174;

	t16 = ((x65<=(x66&x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = -111124885LL;
	volatile uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = -101049;

	t17 = ((x69<=(x70&x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = -25850609283LL;
	volatile uint32_t x76 = 86916U;
	volatile uint32_t t18 = 7278834U;

	t18 = ((x73<=(x74&x75))&x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 60U;
	uint8_t x78 = 1U;
	volatile int64_t x79 = INT64_MIN;
	int64_t x80 = -1LL;
	volatile int64_t t19 = -35506789288349814LL;

	t19 = ((x77<=(x78&x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 0;
	int32_t x82 = INT32_MIN;
	int8_t x83 = -51;
	uint16_t x84 = 3748U;
	int32_t t20 = 2;

	t20 = ((x81<=(x82&x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 6316U;
	static int32_t x87 = -1;
	int32_t t21 = 80064;

	t21 = ((x85<=(x86&x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 73U;
	static int32_t x90 = INT32_MIN;
	volatile int32_t x92 = INT32_MAX;

	t22 = ((x89<=(x90&x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int16_t x94 = INT16_MIN;
	int64_t t23 = 37945423LL;

	t23 = ((x93<=(x94&x95))&x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -1;
	uint8_t x99 = 4U;
	static int64_t x100 = -34737LL;
	volatile int64_t t24 = 875600363928LL;

	t24 = ((x97<=(x98&x99))&x100);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	uint16_t x102 = UINT16_MAX;
	uint64_t x103 = 8408811414525LLU;
	uint16_t x104 = UINT16_MAX;

	t25 = ((x101<=(x102&x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -479882010877145LL;
	uint64_t x107 = 1066LLU;
	volatile uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = -2;

	t26 = ((x105<=(x106&x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x109 = -2;
	volatile int32_t x110 = -393647795;
	static int8_t x111 = 37;
	uint16_t x112 = UINT16_MAX;

	t27 = ((x109<=(x110&x111))&x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 0LL;
	int8_t x114 = INT8_MIN;
	int64_t x116 = -1LL;
	volatile int64_t t28 = -732774LL;

	t28 = ((x113<=(x114&x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static int32_t x118 = INT32_MIN;
	int32_t x119 = 57;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 7;

	t29 = ((x117<=(x118&x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	int8_t x122 = INT8_MIN;
	static int8_t x123 = INT8_MIN;
	static uint8_t x124 = 1U;
	volatile int32_t t30 = 65350;

	t30 = ((x121<=(x122&x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 8258990U;
	int32_t x127 = INT32_MIN;
	volatile uint32_t t31 = 897U;

	t31 = ((x125<=(x126&x127))&x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MAX;
	volatile int16_t x132 = INT16_MAX;
	volatile int32_t t32 = -228053424;

	t32 = ((x129<=(x130&x131))&x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 326055830U;
	uint16_t x134 = UINT16_MAX;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 24;

	t33 = ((x133<=(x134&x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	uint64_t x138 = 15686861089701822LLU;
	int32_t x139 = INT32_MIN;
	static volatile int32_t t34 = 1950290;

	t34 = ((x137<=(x138&x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x143 = -75267LL;
	volatile int8_t x144 = 53;
	int32_t t35 = -193;

	t35 = ((x141<=(x142&x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 19528U;
	uint8_t x146 = 1U;
	int16_t x147 = INT16_MAX;
	int8_t x148 = 1;

	t36 = ((x145<=(x146&x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = UINT8_MAX;
	int16_t x151 = -1;
	volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = 7041376;

	t37 = ((x149<=(x150&x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 5U;
	static int16_t x154 = -1;
	int8_t x155 = -1;
	int32_t t38 = -441;

	t38 = ((x153<=(x154&x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x159 = UINT32_MAX;
	volatile int64_t x160 = INT64_MIN;
	static volatile int64_t t39 = -1981904614795538LL;

	t39 = ((x157<=(x158&x159))&x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MIN;
	static int64_t x163 = 1567771243186LL;
	static uint64_t x164 = UINT64_MAX;
	uint64_t t40 = 155458636449LLU;

	t40 = ((x161<=(x162&x163))&x164);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	int32_t x168 = 2070741;
	int32_t t41 = -323158;

	t41 = ((x165<=(x166&x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t t42 = -11;

	t42 = ((x169<=(x170&x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x174 = INT8_MIN;
	uint8_t x175 = UINT8_MAX;
	int64_t t43 = 155LL;

	t43 = ((x173<=(x174&x175))&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = -1LL;
	static int8_t x180 = INT8_MAX;
	int32_t t44 = -12;

	t44 = ((x177<=(x178&x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 107U;
	volatile uint16_t x182 = UINT16_MAX;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t45 = 86;

	t45 = ((x181<=(x182&x183))&x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static volatile uint32_t x188 = 3499058U;
	uint32_t t46 = 89419602U;

	t46 = ((x185<=(x186&x187))&x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	uint64_t x191 = 12829896353637LLU;
	volatile int16_t x192 = INT16_MIN;
	int32_t t47 = -7429;

	t47 = ((x189<=(x190&x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = 2;
	static uint8_t x196 = 40U;
	int32_t t48 = 950961;

	t48 = ((x193<=(x194&x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MIN;
	static int64_t x198 = -1LL;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 254183;

	t49 = ((x197<=(x198&x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	volatile int8_t x203 = INT8_MIN;
	int16_t x204 = -1;
	volatile int32_t t50 = -32033851;

	t50 = ((x201<=(x202&x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x208 = INT64_MAX;
	int64_t t51 = 1872393309384211138LL;

	t51 = ((x205<=(x206&x207))&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = 886;
	uint8_t x210 = 16U;
	int64_t x211 = -1LL;
	static volatile int32_t x212 = -436;
	static int32_t t52 = -2;

	t52 = ((x209<=(x210&x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 13U;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = 206912228;
	static volatile int32_t t53 = 2884;

	t53 = ((x213<=(x214&x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MAX;
	int8_t x218 = INT8_MAX;
	static volatile int64_t x219 = INT64_MIN;
	static uint32_t x220 = 344336U;
	static uint32_t t54 = 21344U;

	t54 = ((x217<=(x218&x219))&x220);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int64_t x222 = -57425644LL;
	int16_t x223 = -1;
	int32_t t55 = -964101;

	t55 = ((x221<=(x222&x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = -1;
	int16_t x227 = 74;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 1395;

	t56 = ((x225<=(x226&x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -1LL;
	uint32_t x230 = 1309686U;
	int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MIN;
	volatile int32_t t57 = -1;

	t57 = ((x229<=(x230&x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 0U;
	int32_t x235 = INT32_MAX;
	int8_t x236 = 0;
	volatile int32_t t58 = 4;

	t58 = ((x233<=(x234&x235))&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int16_t x239 = INT16_MAX;
	int64_t x240 = -1LL;
	static int64_t t59 = 417LL;

	t59 = ((x237<=(x238&x239))&x240);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 1545U;
	static uint16_t x242 = 38U;
	int16_t x243 = INT16_MAX;
	static volatile int64_t x244 = -1LL;

	t60 = ((x241<=(x242&x243))&x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 0U;
	int64_t x247 = -225910500302756356LL;
	int64_t x248 = INT64_MAX;
	int64_t t61 = -56708365039540LL;

	t61 = ((x245<=(x246&x247))&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -1;
	int64_t x251 = -2193823LL;
	uint64_t x252 = 4998359584436161879LLU;
	uint64_t t62 = 51727LLU;

	t62 = ((x249<=(x250&x251))&x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MIN;
	int32_t x255 = -1647246;
	volatile int64_t t63 = -16913766743450375LL;

	t63 = ((x253<=(x254&x255))&x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = 15U;
	uint8_t x258 = 4U;
	static int16_t x259 = INT16_MAX;
	volatile int32_t t64 = -3367;

	t64 = ((x257<=(x258&x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = 1;
	uint64_t x262 = 26713695LLU;
	int8_t x263 = INT8_MAX;

	t65 = ((x261<=(x262&x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 65911317LLU;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 1306U;
	uint16_t x268 = 536U;

	t66 = ((x265<=(x266&x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 6370529237792762338LLU;
	int8_t x270 = -1;
	int32_t x271 = 291140;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 1775;

	t67 = ((x269<=(x270&x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x274 = 2U;
	static volatile int64_t x275 = -239LL;
	int64_t x276 = INT64_MIN;
	int64_t t68 = 9167716LL;

	t68 = ((x273<=(x274&x275))&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x277 = -29;
	static int16_t x278 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	static int32_t t69 = -9305;

	t69 = ((x277<=(x278&x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = 1;
	int16_t x282 = INT16_MIN;
	static uint32_t x283 = 2407U;
	int64_t x284 = INT64_MIN;
	int64_t t70 = 6079508321709657LL;

	t70 = ((x281<=(x282&x283))&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -7;
	int32_t x286 = 321;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t71 = 11125370;

	t71 = ((x285<=(x286&x287))&x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	int8_t x291 = 27;
	int16_t x292 = -1;
	int32_t t72 = -8;

	t72 = ((x289<=(x290&x291))&x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = 118LLU;
	volatile int16_t x296 = INT16_MIN;
	int32_t t73 = -360658;

	t73 = ((x293<=(x294&x295))&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	volatile int8_t x298 = INT8_MAX;
	int32_t x299 = -7;
	static int16_t x300 = -3;
	volatile int32_t t74 = 1475;

	t74 = ((x297<=(x298&x299))&x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 22402U;
	static uint32_t x303 = 3U;
	int32_t t75 = 1184648;

	t75 = ((x301<=(x302&x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 0U;
	int16_t x306 = -5530;
	static int16_t x308 = -1;
	volatile int32_t t76 = -44606;

	t76 = ((x305<=(x306&x307))&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -3588023;
	uint32_t x310 = UINT32_MAX;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	volatile int32_t t77 = 932;

	t77 = ((x309<=(x310&x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MAX;
	int32_t t78 = -46;

	t78 = ((x313<=(x314&x315))&x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = -1LL;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t79 = 2;

	t79 = ((x317<=(x318&x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 5968595666LLU;
	static int8_t x322 = 1;
	int32_t x324 = -2391651;
	static int32_t t80 = -33073929;

	t80 = ((x321<=(x322&x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 37U;
	uint8_t x326 = 12U;
	static volatile int64_t x327 = -2227393118LL;
	int8_t x328 = INT8_MIN;
	int32_t t81 = -358421;

	t81 = ((x325<=(x326&x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x330 = 0U;
	volatile int32_t t82 = -485951202;

	t82 = ((x329<=(x330&x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MAX;
	int32_t x335 = -1;
	int8_t x336 = -1;

	t83 = ((x333<=(x334&x335))&x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -195099200;
	int8_t x338 = INT8_MIN;
	int32_t x339 = -85198772;
	volatile int32_t t84 = 254251;

	t84 = ((x337<=(x338&x339))&x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 1872639412LL;
	int8_t x342 = -1;
	int64_t x343 = INT64_MAX;
	static int32_t x344 = INT32_MIN;
	static int32_t t85 = 2411880;

	t85 = ((x341<=(x342&x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x346 = UINT64_MAX;
	volatile int64_t x347 = -122LL;
	int16_t x348 = -1;

	t86 = ((x345<=(x346&x347))&x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int16_t x350 = INT16_MAX;
	volatile uint32_t x351 = 2907647U;
	int32_t t87 = -744;

	t87 = ((x349<=(x350&x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x353 = -1;
	static volatile int16_t x355 = -1;
	static int32_t t88 = 25;

	t88 = ((x353<=(x354&x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile uint32_t x358 = 15433U;
	uint64_t x360 = 744766517716LLU;
	static uint64_t t89 = 81LLU;

	t89 = ((x357<=(x358&x359))&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 674LL;
	int8_t x363 = -15;
	int32_t x364 = 116;
	static volatile int32_t t90 = -554785;

	t90 = ((x361<=(x362&x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -2853;
	int32_t x366 = -1;
	int32_t x368 = -1;
	int32_t t91 = -419;

	t91 = ((x365<=(x366&x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -16;
	int8_t x370 = INT8_MIN;
	int32_t x371 = -1;
	int16_t x372 = INT16_MIN;

	t92 = ((x369<=(x370&x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x376 = -60;
	int32_t t93 = 567901271;

	t93 = ((x373<=(x374&x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 300286851U;
	int64_t x378 = -1LL;
	int64_t x380 = -1LL;

	t94 = ((x377<=(x378&x379))&x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static int64_t x382 = -1654LL;
	static int16_t x383 = INT16_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = -386015764;

	t95 = ((x381<=(x382&x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MAX;
	volatile int32_t t96 = -13238;

	t96 = ((x385<=(x386&x387))&x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int8_t x390 = 11;
	int32_t x391 = INT32_MIN;
	static int32_t t97 = 30385;

	t97 = ((x389<=(x390&x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	volatile uint16_t x396 = 13965U;
	volatile int32_t t98 = -12614397;

	t98 = ((x393<=(x394&x395))&x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = 43195LL;
	int64_t t99 = 13763469015514304LL;

	t99 = ((x397<=(x398&x399))&x400);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

