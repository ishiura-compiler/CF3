#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t2 = 257062377088LL;
uint8_t x24 = 2U;
static uint64_t x25 = UINT64_MAX;
uint32_t x32 = 13772811U;
int16_t x35 = -1224;
uint64_t x37 = 1056353453LLU;
int16_t x38 = INT16_MIN;
int32_t x43 = -1;
volatile int16_t x47 = INT16_MIN;
int8_t x50 = 1;
static int16_t x51 = -50;
volatile int8_t x57 = 0;
static uint64_t x68 = UINT64_MAX;
static volatile uint64_t t16 = 151798098LLU;
uint8_t x73 = 1U;
int32_t x78 = 84646985;
int8_t x80 = -1;
int8_t x85 = -1;
static uint16_t x86 = 29U;
volatile int32_t t19 = -123610345;
int64_t x89 = INT64_MAX;
volatile int32_t t20 = 16895363;
uint8_t x107 = 0U;
volatile int32_t t24 = 23423484;
int8_t x112 = INT8_MIN;
static int16_t x116 = INT16_MAX;
static int64_t x118 = -1LL;
volatile int64_t x121 = -1LL;
int8_t x123 = INT8_MIN;
int8_t x124 = -1;
int16_t x127 = 0;
int32_t t29 = 32634486;
uint64_t x129 = 3761852781LLU;
int64_t x144 = -983801148LL;
int8_t x146 = 0;
int16_t x148 = INT16_MIN;
uint8_t x160 = UINT8_MAX;
int8_t x166 = INT8_MIN;
volatile int64_t x167 = -1LL;
volatile int64_t t37 = 4174912296LL;
uint8_t x175 = UINT8_MAX;
volatile int32_t t39 = 22;
volatile int8_t x192 = INT8_MIN;
volatile int64_t t44 = INT64_MIN;
int16_t x218 = 60;
volatile int64_t x223 = INT64_MIN;
static uint16_t x226 = 8U;
int32_t x229 = INT32_MIN;
int8_t x232 = -1;
volatile int32_t t48 = -6415;
int8_t x236 = -1;
int8_t x246 = -1;
int8_t x249 = -1;
uint8_t x250 = 75U;
static uint16_t x264 = UINT16_MAX;
int32_t x265 = INT32_MIN;
static int32_t t57 = 3345095;
int16_t x277 = INT16_MIN;
int8_t x285 = INT8_MAX;
uint32_t t59 = 32270U;
uint8_t x291 = UINT8_MAX;
uint64_t t61 = 34511934898LLU;
volatile uint64_t t62 = 279116335LLU;
int64_t x301 = -362561601624059049LL;
int16_t x317 = -1;
static volatile int64_t x321 = 1971926965043LL;
static volatile uint32_t x332 = UINT32_MAX;
uint32_t t70 = 8991364U;
volatile int16_t x336 = INT16_MAX;
int64_t x339 = 40LL;
volatile int16_t x341 = INT16_MIN;
volatile int8_t x344 = -1;
int32_t x346 = INT32_MAX;
int32_t x347 = 68;
int16_t x358 = INT16_MAX;
static int64_t x362 = INT64_MIN;
uint16_t x368 = UINT16_MAX;
volatile uint64_t t79 = 2LLU;
int64_t x374 = INT64_MIN;
volatile int32_t t81 = -1655;
static int16_t x383 = -194;
int16_t x387 = 252;
static volatile int32_t t83 = -3434;
static volatile int32_t x394 = 0;
uint64_t x395 = 1336800077761462409LLU;
uint16_t x399 = 1U;
static int16_t x400 = INT16_MIN;
volatile int32_t t85 = 187;
volatile int16_t x403 = -1;
int32_t x405 = -3112194;
static uint64_t x412 = UINT64_MAX;
volatile int64_t x419 = -1969LL;
static int8_t x428 = INT8_MIN;
volatile int32_t t92 = -15;
uint32_t x433 = 11921U;
uint16_t x437 = 13U;
int64_t x442 = INT64_MIN;
uint16_t x448 = 8770U;
static volatile uint32_t t97 = 9U;
volatile uint16_t x459 = 53U;
static int8_t x462 = 1;


void f0(void) {
	volatile int8_t x1 = -1;
	volatile int16_t x2 = INT16_MIN;
	static int16_t x3 = -61;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 1101;

	t0 = (((x1<=x2)+x3)-x4);

	if (t0 != -316) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 49;
	volatile int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	static volatile int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 531684859;

	t1 = (((x5<=x6)+x7)-x8);

	if (t1 != -255) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = 471497;
	int64_t x11 = -47669229334674LL;
	volatile int16_t x12 = INT16_MIN;

	t2 = (((x9<=x10)+x11)-x12);

	if (t2 != -47669229301906LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MAX;
	int8_t x16 = 1;
	int32_t t3 = 31;

	t3 = (((x13<=x14)+x15)-x16);

	if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile uint64_t x18 = UINT64_MAX;
	int16_t x19 = -1;
	int16_t x20 = 597;
	static int32_t t4 = 95030208;

	t4 = (((x17<=x18)+x19)-x20);

	if (t4 != -597) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 37;
	int32_t x22 = INT32_MIN;
	volatile int8_t x23 = -1;
	volatile int32_t t5 = 1969;

	t5 = (((x21<=x22)+x23)-x24);

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	uint8_t x27 = 0U;
	int64_t x28 = 26959133558LL;
	static volatile int64_t t6 = -556960750914139LL;

	t6 = (((x25<=x26)+x27)-x28);

	if (t6 != -26959133557LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	int64_t x30 = -1LL;
	static int32_t x31 = -1;
	uint32_t t7 = 208237U;

	t7 = (((x29<=x30)+x31)-x32);

	if (t7 != 4281194484U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 26319833;
	volatile int16_t x34 = -6;
	int16_t x36 = -6;
	int32_t t8 = 5;

	t8 = (((x33<=x34)+x35)-x36);

	if (t8 != -1218) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x39 = 907011934U;
	uint8_t x40 = UINT8_MAX;
	static volatile uint32_t t9 = 31614U;

	t9 = (((x37<=x38)+x39)-x40);

	if (t9 != 907011680U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int8_t x44 = -1;
	int32_t t10 = -246;

	t10 = (((x41<=x42)+x43)-x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 2U;
	uint32_t x46 = 1292910U;
	uint16_t x48 = UINT16_MAX;
	static int32_t t11 = -43496;

	t11 = (((x45<=x46)+x47)-x48);

	if (t11 != -98302) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -28;
	int8_t x52 = 1;
	int32_t t12 = 2;

	t12 = (((x49<=x50)+x51)-x52);

	if (t12 != -50) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	uint64_t x54 = UINT64_MAX;
	uint32_t x55 = 6U;
	int16_t x56 = INT16_MIN;
	volatile uint32_t t13 = 218900311U;

	t13 = (((x53<=x54)+x55)-x56);

	if (t13 != 32775U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = -1;
	int16_t x59 = INT16_MIN;
	int16_t x60 = 35;
	int32_t t14 = 255;

	t14 = (((x57<=x58)+x59)-x60);

	if (t14 != -32803) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = INT32_MIN;
	static uint64_t x64 = UINT64_MAX;
	volatile uint64_t t15 = 36269344641827LLU;

	t15 = (((x61<=x62)+x63)-x64);

	if (t15 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int32_t x66 = -535763;
	int64_t x67 = -707596146661446121LL;

	t16 = (((x65<=x66)+x67)-x68);

	if (t16 != 17739147927048105496LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 2207U;
	int64_t x76 = -1LL;
	int64_t t17 = 3LL;

	t17 = (((x73<=x74)+x75)-x76);

	if (t17 != 2209LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 140U;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t t18 = 817197813;

	t18 = (((x77<=x78)+x79)-x80);

	if (t18 != 257) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x87 = INT8_MIN;
	volatile int16_t x88 = INT16_MIN;

	t19 = (((x85<=x86)+x87)-x88);

	if (t19 != 32641) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = 46U;

	t20 = (((x89<=x90)+x91)-x92);

	if (t20 != -32814) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 30U;
	int32_t x94 = 40;
	int8_t x95 = -3;
	uint16_t x96 = 0U;
	static volatile int32_t t21 = 1112784;

	t21 = (((x93<=x94)+x95)-x96);

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -81800LL;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = -507459109546457603LL;
	static int8_t x100 = INT8_MIN;
	volatile int64_t t22 = -1739655631431LL;

	t22 = (((x97<=x98)+x99)-x100);

	if (t22 != -507459109546457474LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -6409LL;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = 1169345637931LL;
	int64_t x104 = -2599096026807798LL;
	int64_t t23 = -3079LL;

	t23 = (((x101<=x102)+x103)-x104);

	if (t23 != 2600265372445730LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 3U;
	static uint32_t x106 = 875934176U;
	int16_t x108 = INT16_MAX;

	t24 = (((x105<=x106)+x107)-x108);

	if (t24 != -32766) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1LL;
	int8_t x110 = 1;
	volatile int8_t x111 = INT8_MAX;
	int32_t t25 = -1304;

	t25 = (((x109<=x110)+x111)-x112);

	if (t25 != 256) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x113 = 0U;
	volatile uint64_t x114 = 8680972LLU;
	uint32_t x115 = 558120645U;
	static uint32_t t26 = 3655635U;

	t26 = (((x113<=x114)+x115)-x116);

	if (t26 != 558087879U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	static volatile int64_t x120 = INT64_MIN;
	volatile int64_t t27 = -507563438447LL;

	t27 = (((x117<=x118)+x119)-x120);

	if (t27 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x122 = 15882U;
	int32_t t28 = -205396;

	t28 = (((x121<=x122)+x123)-x124);

	if (t28 != -126) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x125 = UINT16_MAX;
	int8_t x126 = -1;
	uint16_t x128 = 244U;

	t29 = (((x125<=x126)+x127)-x128);

	if (t29 != -244) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x130 = INT8_MIN;
	uint32_t x131 = 126038U;
	static volatile uint64_t x132 = UINT64_MAX;
	uint64_t t30 = 55LLU;

	t30 = (((x129<=x130)+x131)-x132);

	if (t30 != 126040LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = 1U;
	int8_t x138 = INT8_MAX;
	int32_t x139 = -1;
	static int8_t x140 = INT8_MIN;
	static int32_t t31 = 105;

	t31 = (((x137<=x138)+x139)-x140);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MAX;
	int8_t x143 = -2;
	int64_t t32 = -1059374438618LL;

	t32 = (((x141<=x142)+x143)-x144);

	if (t32 != 983801147LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x145 = 98U;
	volatile uint32_t x147 = 5650760U;
	static volatile uint32_t t33 = 63693510U;

	t33 = (((x145<=x146)+x147)-x148);

	if (t33 != 5683528U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = 9U;
	static int32_t x154 = -32;
	volatile int8_t x155 = INT8_MIN;
	static int64_t x156 = -1LL;
	int64_t t34 = 9451725422265LL;

	t34 = (((x153<=x154)+x155)-x156);

	if (t34 != -127LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 141927U;
	int64_t x158 = 1LL;
	volatile uint32_t x159 = 103906787U;
	uint32_t t35 = 13041U;

	t35 = (((x157<=x158)+x159)-x160);

	if (t35 != 103906532U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	static uint32_t x162 = UINT32_MAX;
	int64_t x163 = INT64_MIN;
	static volatile int16_t x164 = -98;
	static volatile int64_t t36 = -218744LL;

	t36 = (((x161<=x162)+x163)-x164);

	if (t36 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x165 = 2;
	static int32_t x168 = INT32_MAX;

	t37 = (((x165<=x166)+x167)-x168);

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	volatile int32_t x172 = -34292175;
	volatile int32_t t38 = 4955966;

	t38 = (((x169<=x170)+x171)-x172);

	if (t38 != 34259408) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = 138624436U;
	volatile uint64_t x174 = UINT64_MAX;
	volatile int32_t x176 = 472;

	t39 = (((x173<=x174)+x175)-x176);

	if (t39 != -216) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = -1291193037827LL;
	volatile int8_t x178 = 0;
	volatile int16_t x179 = INT16_MAX;
	static uint16_t x180 = UINT16_MAX;
	volatile int32_t t40 = -649;

	t40 = (((x177<=x178)+x179)-x180);

	if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = 1;
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = 112;
	int32_t x184 = INT32_MAX;
	static int32_t t41 = -1;

	t41 = (((x181<=x182)+x183)-x184);

	if (t41 != -2147483534) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -1;
	int16_t x186 = -1;
	uint32_t x187 = 136283773U;
	int8_t x188 = INT8_MAX;
	uint32_t t42 = 254557291U;

	t42 = (((x185<=x186)+x187)-x188);

	if (t42 != 136283647U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = 3445LLU;
	uint64_t x190 = 208LLU;
	int64_t x191 = INT64_MIN;
	volatile int64_t t43 = 104LL;

	t43 = (((x189<=x190)+x191)-x192);

	if (t43 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -1LL;
	uint64_t x194 = 1594LLU;
	int64_t x195 = INT64_MIN;
	int8_t x196 = 0;

	t44 = (((x193<=x194)+x195)-x196);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x217 = 6U;
	int8_t x219 = -7;
	static uint64_t x220 = UINT64_MAX;
	uint64_t t45 = 242627378814LLU;

	t45 = (((x217<=x218)+x219)-x220);

	if (t45 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x221 = INT32_MIN;
	static volatile int16_t x222 = INT16_MIN;
	int64_t x224 = -2156190749530516782LL;
	int64_t t46 = -2277908906260LL;

	t46 = (((x221<=x222)+x223)-x224);

	if (t46 != -7067181287324259025LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x225 = INT8_MIN;
	volatile uint32_t x227 = 3993U;
	volatile int8_t x228 = INT8_MAX;
	volatile uint32_t t47 = 324U;

	t47 = (((x225<=x226)+x227)-x228);

	if (t47 != 3867U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x230 = INT8_MAX;
	volatile int8_t x231 = 1;

	t48 = (((x229<=x230)+x231)-x232);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x233 = INT32_MIN;
	static uint32_t x234 = 7340576U;
	int64_t x235 = -1LL;
	volatile int64_t t49 = 522604189430LL;

	t49 = (((x233<=x234)+x235)-x236);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x241 = UINT16_MAX;
	uint8_t x242 = UINT8_MAX;
	volatile int16_t x243 = -1;
	uint32_t x244 = UINT32_MAX;
	uint32_t t50 = 988310U;

	t50 = (((x241<=x242)+x243)-x244);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -116191;
	volatile int16_t x247 = INT16_MAX;
	int64_t x248 = -15096829092LL;
	volatile int64_t t51 = 123915701963LL;

	t51 = (((x245<=x246)+x247)-x248);

	if (t51 != 15096861860LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x251 = -1;
	int64_t x252 = -1LL;
	volatile int64_t t52 = 99LL;

	t52 = (((x249<=x250)+x251)-x252);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x253 = -1;
	static int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MAX;
	static int32_t x256 = INT32_MAX;
	volatile int64_t t53 = 26364669292282LL;

	t53 = (((x253<=x254)+x255)-x256);

	if (t53 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = 3U;
	uint64_t x258 = 1LLU;
	int16_t x259 = -4;
	static int8_t x260 = 1;
	volatile int32_t t54 = -50974784;

	t54 = (((x257<=x258)+x259)-x260);

	if (t54 != -5) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = 0U;
	int32_t t55 = -172266;

	t55 = (((x261<=x262)+x263)-x264);

	if (t55 != -65535) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x266 = -1926;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MAX;
	int32_t t56 = 670317860;

	t56 = (((x265<=x266)+x267)-x268);

	if (t56 != -254) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 3597U;
	uint8_t x275 = 3U;
	uint16_t x276 = 6901U;

	t57 = (((x273<=x274)+x275)-x276);

	if (t57 != -6898) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x278 = INT64_MIN;
	uint8_t x279 = 0U;
	int32_t x280 = 458476;
	volatile int32_t t58 = 18;

	t58 = (((x277<=x278)+x279)-x280);

	if (t58 != -458476) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x286 = 35U;
	volatile uint32_t x287 = 35260400U;
	int16_t x288 = -14978;

	t59 = (((x285<=x286)+x287)-x288);

	if (t59 != 35275378U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x289 = 9U;
	uint16_t x290 = 91U;
	int64_t x292 = 2061160439LL;
	volatile int64_t t60 = 1600193136LL;

	t60 = (((x289<=x290)+x291)-x292);

	if (t60 != -2061160183LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = 0LLU;
	uint8_t x294 = 112U;
	static volatile uint64_t x295 = UINT64_MAX;
	uint32_t x296 = 29096U;

	t61 = (((x293<=x294)+x295)-x296);

	if (t61 != 18446744073709522520LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x297 = 1LLU;
	uint16_t x298 = UINT16_MAX;
	static volatile uint64_t x299 = UINT64_MAX;
	uint64_t x300 = 9995520213LLU;

	t62 = (((x297<=x298)+x299)-x300);

	if (t62 != 18446744063714031403LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x302 = UINT16_MAX;
	volatile int8_t x303 = -1;
	volatile int8_t x304 = -29;
	int32_t t63 = 1;

	t63 = (((x301<=x302)+x303)-x304);

	if (t63 != 29) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	int16_t x307 = INT16_MIN;
	volatile int64_t x308 = INT64_MIN;
	int64_t t64 = 255695219911392LL;

	t64 = (((x305<=x306)+x307)-x308);

	if (t64 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x309 = 1187601899U;
	int64_t x310 = -12394613356LL;
	static volatile int32_t x311 = -238151;
	uint16_t x312 = 18U;
	int32_t t65 = 3806324;

	t65 = (((x309<=x310)+x311)-x312);

	if (t65 != -238169) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	static int8_t x314 = 28;
	volatile int64_t x315 = INT64_MIN;
	static volatile int8_t x316 = -2;
	static volatile int64_t t66 = 1208753LL;

	t66 = (((x313<=x314)+x315)-x316);

	if (t66 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x318 = -30;
	int64_t x319 = INT64_MIN;
	volatile uint64_t x320 = 122594552411LLU;
	uint64_t t67 = 24LLU;

	t67 = (((x317<=x318)+x319)-x320);

	if (t67 != 9223371914260223397LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x322 = 17U;
	uint64_t x323 = 0LLU;
	int16_t x324 = INT16_MAX;
	volatile uint64_t t68 = 2951LLU;

	t68 = (((x321<=x322)+x323)-x324);

	if (t68 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = -45541;
	int16_t x326 = -1;
	volatile int64_t x327 = INT64_MIN;
	static int8_t x328 = INT8_MIN;
	int64_t t69 = -234204LL;

	t69 = (((x325<=x326)+x327)-x328);

	if (t69 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = 5;
	volatile uint32_t x330 = 61U;
	int8_t x331 = INT8_MIN;

	t70 = (((x329<=x330)+x331)-x332);

	if (t70 != 4294967170U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = 45;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MIN;
	static volatile int32_t t71 = 594;

	t71 = (((x333<=x334)+x335)-x336);

	if (t71 != -32894) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x337 = 16817592052LLU;
	static int16_t x338 = -25;
	int32_t x340 = INT32_MIN;
	static volatile int64_t t72 = -7948LL;

	t72 = (((x337<=x338)+x339)-x340);

	if (t72 != 2147483689LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x342 = 5U;
	static uint64_t x343 = 698170231982LLU;
	uint64_t t73 = 60736LLU;

	t73 = (((x341<=x342)+x343)-x344);

	if (t73 != 698170231984LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = INT32_MAX;
	int64_t x348 = INT64_MAX;
	static int64_t t74 = -2156296565369091LL;

	t74 = (((x345<=x346)+x347)-x348);

	if (t74 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x349 = UINT32_MAX;
	int64_t x350 = -1LL;
	uint16_t x351 = 73U;
	uint16_t x352 = 60U;
	volatile int32_t t75 = 2254641;

	t75 = (((x349<=x350)+x351)-x352);

	if (t75 != 13) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x353 = -1;
	uint8_t x354 = 3U;
	uint16_t x355 = 0U;
	int16_t x356 = -1;
	int32_t t76 = 72946;

	t76 = (((x353<=x354)+x355)-x356);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	volatile uint32_t x359 = UINT32_MAX;
	int16_t x360 = -1;
	uint32_t t77 = 34267U;

	t77 = (((x357<=x358)+x359)-x360);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x361 = UINT8_MAX;
	int64_t x363 = INT64_MAX;
	static uint8_t x364 = UINT8_MAX;
	volatile int64_t t78 = -2068LL;

	t78 = (((x361<=x362)+x363)-x364);

	if (t78 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = 29;
	volatile uint64_t x367 = 6299598LLU;

	t79 = (((x365<=x366)+x367)-x368);

	if (t79 != 6234064LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MAX;
	uint64_t x370 = 70207712LLU;
	uint64_t x371 = UINT64_MAX;
	int64_t x372 = INT64_MAX;
	volatile uint64_t t80 = 6213135695255568016LLU;

	t80 = (((x369<=x370)+x371)-x372);

	if (t80 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x373 = 97223831LLU;
	static int16_t x375 = -149;
	uint8_t x376 = 15U;

	t81 = (((x373<=x374)+x375)-x376);

	if (t81 != -163) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x381 = -5914450;
	int64_t x382 = INT64_MIN;
	volatile int64_t x384 = INT64_MIN;
	volatile int64_t t82 = 53769213LL;

	t82 = (((x381<=x382)+x383)-x384);

	if (t82 != 9223372036854775614LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x385 = 114U;
	int64_t x386 = INT64_MAX;
	int16_t x388 = -1;

	t83 = (((x385<=x386)+x387)-x388);

	if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = INT16_MIN;
	static uint8_t x396 = 7U;
	static volatile uint64_t t84 = 371142378297707LLU;

	t84 = (((x393<=x394)+x395)-x396);

	if (t84 != 1336800077761462403LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x397 = INT8_MAX;
	static uint8_t x398 = 5U;

	t85 = (((x397<=x398)+x399)-x400);

	if (t85 != 32769) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = -339;
	uint64_t x402 = 6058376021LLU;
	volatile int32_t x404 = -1;
	volatile int32_t t86 = -195444176;

	t86 = (((x401<=x402)+x403)-x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x406 = 35;
	int8_t x407 = INT8_MIN;
	uint8_t x408 = 0U;
	int32_t t87 = -73338;

	t87 = (((x405<=x406)+x407)-x408);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = 2456605LL;
	int8_t x410 = -1;
	int32_t x411 = INT32_MAX;
	uint64_t t88 = 4355241264662LLU;

	t88 = (((x409<=x410)+x411)-x412);

	if (t88 != 2147483648LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = INT64_MIN;
	int64_t x414 = -1LL;
	int16_t x415 = INT16_MIN;
	int8_t x416 = -48;
	int32_t t89 = 22;

	t89 = (((x413<=x414)+x415)-x416);

	if (t89 != -32719) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = 1U;
	uint16_t x418 = 41U;
	volatile int64_t x420 = 8578642153164961LL;
	int64_t t90 = -166LL;

	t90 = (((x417<=x418)+x419)-x420);

	if (t90 != -8578642153166929LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = 3;
	int8_t x422 = -1;
	volatile uint32_t x423 = 8116U;
	static int64_t x424 = -11444LL;
	int64_t t91 = 338247865140LL;

	t91 = (((x421<=x422)+x423)-x424);

	if (t91 != 19560LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = -7813;
	int64_t x426 = 1LL;
	volatile uint16_t x427 = 28571U;

	t92 = (((x425<=x426)+x427)-x428);

	if (t92 != 28700) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x429 = 17U;
	int32_t x430 = INT32_MAX;
	int16_t x431 = -5;
	int8_t x432 = 15;
	volatile int32_t t93 = -1;

	t93 = (((x429<=x430)+x431)-x432);

	if (t93 != -19) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x434 = INT32_MIN;
	uint64_t x435 = 76LLU;
	static uint16_t x436 = 16777U;
	uint64_t t94 = 34190805LLU;

	t94 = (((x433<=x434)+x435)-x436);

	if (t94 != 18446744073709534916LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x438 = UINT16_MAX;
	int16_t x439 = 103;
	volatile int8_t x440 = INT8_MAX;
	int32_t t95 = 13665;

	t95 = (((x437<=x438)+x439)-x440);

	if (t95 != -23) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x441 = INT16_MIN;
	uint32_t x443 = 871097U;
	int64_t x444 = -656LL;
	volatile int64_t t96 = 14313904453297LL;

	t96 = (((x441<=x442)+x443)-x444);

	if (t96 != 871753LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x445 = 3437848004LLU;
	int8_t x446 = INT8_MAX;
	volatile uint32_t x447 = 51653U;

	t97 = (((x445<=x446)+x447)-x448);

	if (t97 != 42883U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = -70;
	uint32_t x458 = 22476U;
	int32_t x460 = INT32_MAX;
	static volatile int32_t t98 = 45;

	t98 = (((x457<=x458)+x459)-x460);

	if (t98 != -2147483594) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x461 = 1U;
	int64_t x463 = 2LL;
	int16_t x464 = -1;
	int64_t t99 = -2860LL;

	t99 = (((x461<=x462)+x463)-x464);

	if (t99 != 4LL) { NG(); } else { ; }
	
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

