#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x11 = 2530U;
volatile int16_t x18 = INT16_MIN;
volatile int64_t x34 = INT64_MIN;
uint8_t x36 = 0U;
int64_t x39 = 52528887LL;
uint8_t x46 = 26U;
volatile int32_t x74 = 0;
int64_t t14 = -3533LL;
uint64_t x77 = 25605894884943LLU;
uint8_t x80 = UINT8_MAX;
int64_t x81 = 9230526834056911LL;
int8_t x82 = INT8_MIN;
static int32_t t18 = -990432;
int8_t x93 = INT8_MIN;
int64_t x99 = -1LL;
uint16_t x105 = 2227U;
int32_t t24 = 1313;
volatile int64_t x125 = INT64_MAX;
int64_t x128 = INT64_MAX;
volatile uint32_t t28 = 1051532U;
volatile uint64_t t29 = 26881LLU;
int8_t x145 = 1;
int32_t x151 = INT32_MIN;
uint8_t x158 = 7U;
static volatile int64_t x159 = -1741938LL;
volatile uint32_t t32 = 246194U;
int8_t x167 = INT8_MIN;
volatile int32_t t37 = 2403;
int16_t x193 = INT16_MAX;
int8_t x197 = INT8_MIN;
static int32_t x199 = INT32_MIN;
static int32_t x201 = -1;
int8_t x211 = 32;
static volatile int16_t x216 = -1;
int32_t t43 = 393915;
int8_t x230 = INT8_MAX;
uint32_t x250 = 53971U;
int32_t x253 = INT32_MAX;
int64_t x259 = INT64_MAX;
int16_t x260 = -1;
volatile int16_t x268 = 23;
uint8_t x269 = 0U;
uint32_t x278 = 8100U;
static int32_t x280 = -1;
int8_t x281 = 1;
int16_t x288 = INT16_MIN;
uint32_t x290 = 470707U;
uint32_t x291 = 187994507U;
uint8_t x312 = 23U;
int16_t x315 = INT16_MAX;
int8_t x316 = INT8_MAX;
static int8_t x319 = INT8_MIN;
int32_t x328 = INT32_MAX;
volatile int32_t t67 = -20482;
uint16_t x329 = 51U;
static volatile uint8_t x331 = 8U;
static int32_t t68 = -3367001;
int16_t x334 = -1;
int32_t x336 = -1;
int64_t x337 = INT64_MAX;
int8_t x339 = INT8_MIN;
volatile int32_t t71 = -257743;
int16_t x353 = INT16_MIN;
int64_t x356 = INT64_MAX;
int64_t x365 = INT64_MIN;
uint8_t x369 = UINT8_MAX;
static int32_t t79 = -401327608;
uint16_t x378 = 55U;
volatile int32_t x379 = INT32_MIN;
volatile uint32_t x382 = UINT32_MAX;
int32_t x386 = 97458;
int16_t x388 = -7793;
int16_t x389 = -1;
static int32_t t84 = 29;
int8_t x404 = -1;
static int32_t x409 = INT32_MIN;
uint8_t x411 = 13U;
int16_t x412 = -1;
static int32_t x414 = INT32_MIN;
static volatile int8_t x422 = INT8_MIN;
volatile int32_t x434 = INT32_MIN;
volatile uint32_t x438 = 1392325830U;
uint32_t x440 = UINT32_MAX;
uint32_t t93 = 588674U;
uint8_t x441 = 1U;
int16_t x442 = -1;
uint16_t x443 = 193U;
uint16_t x445 = 1710U;
int32_t x450 = 148;
volatile int16_t x458 = INT16_MAX;
uint32_t x464 = 24501U;
volatile uint32_t t99 = 307530U;


void f0(void) {
	static int8_t x5 = -23;
	uint16_t x6 = 4605U;
	static int32_t x7 = -1;
	volatile uint32_t x8 = UINT32_MAX;
	volatile uint32_t t0 = 653548642U;

	t0 = (((x5&x6)==x7)-x8);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 21451U;
	int16_t x10 = INT16_MAX;
	volatile uint16_t x12 = 1U;
	volatile int32_t t1 = -9;

	t1 = (((x9&x10)==x11)-x12);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 106U;
	volatile int8_t x14 = -1;
	volatile uint8_t x15 = 13U;
	int8_t x16 = INT8_MAX;
	static int32_t t2 = 7178898;

	t2 = (((x13&x14)==x15)-x16);

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 1069;
	volatile uint64_t x19 = 3881336125LLU;
	static uint8_t x20 = 0U;
	volatile int32_t t3 = 8196577;

	t3 = (((x17&x18)==x19)-x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 31U;
	static int64_t x22 = INT64_MAX;
	volatile int32_t x23 = INT32_MIN;
	int32_t x24 = -1;
	int32_t t4 = 14848976;

	t4 = (((x21&x22)==x23)-x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MAX;
	int32_t x26 = INT32_MAX;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = 9;
	int32_t t5 = 10548433;

	t5 = (((x25&x26)==x27)-x28);

	if (t5 != -9) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	static int32_t x30 = INT32_MIN;
	uint8_t x31 = UINT8_MAX;
	uint16_t x32 = 5682U;
	int32_t t6 = -28505;

	t6 = (((x29&x30)==x31)-x32);

	if (t6 != -5682) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int64_t x35 = INT64_MAX;
	int32_t t7 = 52289;

	t7 = (((x33&x34)==x35)-x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	volatile uint32_t x38 = 179311U;
	volatile uint8_t x40 = 1U;
	volatile int32_t t8 = -25483018;

	t8 = (((x37&x38)==x39)-x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 2353794;
	int64_t x42 = -1LL;
	static int8_t x43 = -8;
	static int16_t x44 = INT16_MAX;
	static volatile int32_t t9 = 1;

	t9 = (((x41&x42)==x43)-x44);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	int64_t x47 = -1LL;
	uint8_t x48 = UINT8_MAX;
	int32_t t10 = 16;

	t10 = (((x45&x46)==x47)-x48);

	if (t10 != -255) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	static int32_t x54 = INT32_MIN;
	volatile int8_t x55 = -1;
	volatile int16_t x56 = INT16_MIN;
	static int32_t t11 = -214226429;

	t11 = (((x53&x54)==x55)-x56);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MAX;
	int32_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t12 = -12;

	t12 = (((x57&x58)==x59)-x60);

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 0U;
	uint8_t x70 = 2U;
	int16_t x71 = -85;
	int8_t x72 = INT8_MIN;
	volatile int32_t t13 = 19;

	t13 = (((x69&x70)==x71)-x72);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = 10638;
	int16_t x75 = 2;
	int64_t x76 = INT64_MAX;

	t14 = (((x73&x74)==x75)-x76);

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x78 = INT8_MAX;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t t15 = -33615;

	t15 = (((x77&x78)==x79)-x80);

	if (t15 != -255) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x83 = -1;
	uint64_t x84 = 62629162757744297LLU;
	volatile uint64_t t16 = 133006511767404LLU;

	t16 = (((x81&x82)==x83)-x84);

	if (t16 != 18384114910951807319LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	static uint16_t x86 = 3818U;
	uint32_t x87 = UINT32_MAX;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t17 = -10080;

	t17 = (((x85&x86)==x87)-x88);

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x89 = INT64_MIN;
	int32_t x90 = -1;
	volatile uint8_t x91 = 52U;
	int32_t x92 = INT32_MAX;

	t18 = (((x89&x90)==x91)-x92);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	int64_t x96 = 560LL;
	volatile int64_t t19 = -21LL;

	t19 = (((x93&x94)==x95)-x96);

	if (t19 != -560LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = INT32_MIN;
	uint8_t x98 = 3U;
	static volatile int8_t x100 = 7;
	static int32_t t20 = 14;

	t20 = (((x97&x98)==x99)-x100);

	if (t20 != -7) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	int32_t x102 = -10;
	static int16_t x103 = -1;
	static int8_t x104 = 36;
	int32_t t21 = -41;

	t21 = (((x101&x102)==x103)-x104);

	if (t21 != -36) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x106 = 374246LL;
	volatile int8_t x107 = -48;
	int16_t x108 = INT16_MIN;
	volatile int32_t t22 = -4;

	t22 = (((x105&x106)==x107)-x108);

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = 2;
	int64_t x114 = INT64_MAX;
	uint64_t x115 = 131277082531LLU;
	int8_t x116 = INT8_MAX;
	int32_t t23 = 184774363;

	t23 = (((x113&x114)==x115)-x116);

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = 98;
	int64_t x118 = INT64_MIN;
	static volatile int16_t x119 = 13;
	int32_t x120 = -8779950;

	t24 = (((x117&x118)==x119)-x120);

	if (t24 != 8779950) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x121 = 94895LLU;
	volatile int16_t x122 = INT16_MAX;
	uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 1U;
	volatile int32_t t25 = 79;

	t25 = (((x121&x122)==x123)-x124);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x126 = -1;
	int16_t x127 = INT16_MAX;
	volatile int64_t t26 = -266LL;

	t26 = (((x125&x126)==x127)-x128);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = 1;
	int64_t x130 = -1LL;
	int64_t x131 = INT64_MIN;
	static int64_t x132 = -4713144423925721LL;
	static volatile int64_t t27 = 3764311475094LL;

	t27 = (((x129&x130)==x131)-x132);

	if (t27 != 4713144423925721LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1LL;
	int64_t x134 = INT64_MAX;
	volatile int8_t x135 = INT8_MIN;
	volatile uint32_t x136 = 1094U;

	t28 = (((x133&x134)==x135)-x136);

	if (t28 != 4294966202U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MIN;
	uint16_t x142 = 12435U;
	volatile int16_t x143 = -130;
	static uint64_t x144 = UINT64_MAX;

	t29 = (((x141&x142)==x143)-x144);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x146 = INT16_MAX;
	uint8_t x147 = 61U;
	int64_t x148 = -391LL;
	volatile int64_t t30 = 4141460051788999075LL;

	t30 = (((x145&x146)==x147)-x148);

	if (t30 != 391LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x150 = INT32_MIN;
	int64_t x152 = -1LL;
	int64_t t31 = 61737LL;

	t31 = (((x149&x150)==x151)-x152);

	if (t31 != 2LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MAX;
	static uint32_t x160 = 2679U;

	t32 = (((x157&x158)==x159)-x160);

	if (t32 != 4294964617U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = 3;
	int16_t x162 = 0;
	uint16_t x163 = 11U;
	static int16_t x164 = -16;
	int32_t t33 = -15;

	t33 = (((x161&x162)==x163)-x164);

	if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x165 = INT16_MIN;
	int8_t x166 = -2;
	uint8_t x168 = 4U;
	int32_t t34 = 803690;

	t34 = (((x165&x166)==x167)-x168);

	if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = INT16_MAX;
	uint16_t x170 = UINT16_MAX;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = 682U;
	volatile uint32_t t35 = 233U;

	t35 = (((x169&x170)==x171)-x172);

	if (t35 != 4294966614U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MAX;
	uint16_t x179 = 586U;
	int64_t x180 = 48LL;
	int64_t t36 = 7545016442937542LL;

	t36 = (((x177&x178)==x179)-x180);

	if (t36 != -48LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x185 = INT16_MAX;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = 27756LLU;
	int32_t x188 = -2;

	t37 = (((x185&x186)==x187)-x188);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x194 = UINT16_MAX;
	volatile int8_t x195 = INT8_MAX;
	static volatile int8_t x196 = INT8_MAX;
	volatile int32_t t38 = 627907131;

	t38 = (((x193&x194)==x195)-x196);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x198 = INT64_MIN;
	int64_t x200 = -1LL;
	static volatile int64_t t39 = 63393LL;

	t39 = (((x197&x198)==x199)-x200);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x202 = 64560554U;
	static uint16_t x203 = 1U;
	static int8_t x204 = -1;
	volatile int32_t t40 = 427703;

	t40 = (((x201&x202)==x203)-x204);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x205 = INT8_MAX;
	int8_t x206 = INT8_MAX;
	int32_t x207 = INT32_MAX;
	volatile uint16_t x208 = 575U;
	int32_t t41 = -2216544;

	t41 = (((x205&x206)==x207)-x208);

	if (t41 != -575) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x209 = 1059;
	int16_t x210 = -1;
	static int8_t x212 = 1;
	volatile int32_t t42 = 9649825;

	t42 = (((x209&x210)==x211)-x212);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x213 = 6U;
	int64_t x214 = -3791253LL;
	int8_t x215 = -1;

	t43 = (((x213&x214)==x215)-x216);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x217 = 20393U;
	static int64_t x218 = INT64_MIN;
	uint16_t x219 = 30302U;
	static uint8_t x220 = 1U;
	static int32_t t44 = -169;

	t44 = (((x217&x218)==x219)-x220);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x221 = 3U;
	int64_t x222 = 4614758361043556LL;
	uint16_t x223 = 35U;
	volatile int16_t x224 = -2008;
	int32_t t45 = 421;

	t45 = (((x221&x222)==x223)-x224);

	if (t45 != 2008) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = INT32_MIN;
	static volatile uint32_t x226 = 35418419U;
	int32_t x227 = -1;
	volatile uint64_t x228 = UINT64_MAX;
	uint64_t t46 = 2820771365998321871LLU;

	t46 = (((x225&x226)==x227)-x228);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = 0;
	static volatile uint16_t x231 = 2U;
	int16_t x232 = 3;
	volatile int32_t t47 = 3285;

	t47 = (((x229&x230)==x231)-x232);

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x233 = 186085U;
	int16_t x234 = INT16_MIN;
	volatile uint16_t x235 = UINT16_MAX;
	static uint32_t x236 = UINT32_MAX;
	uint32_t t48 = 71659U;

	t48 = (((x233&x234)==x235)-x236);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	volatile int32_t x239 = INT32_MAX;
	uint64_t x240 = UINT64_MAX;
	uint64_t t49 = 750LLU;

	t49 = (((x237&x238)==x239)-x240);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x249 = INT16_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile int16_t x252 = 0;
	static volatile int32_t t50 = -5795;

	t50 = (((x249&x250)==x251)-x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x254 = -1;
	uint8_t x255 = 2U;
	int8_t x256 = 3;
	int32_t t51 = -66;

	t51 = (((x253&x254)==x255)-x256);

	if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = -13;
	static int32_t x258 = INT32_MIN;
	static volatile int32_t t52 = 921227174;

	t52 = (((x257&x258)==x259)-x260);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x265 = -5524236650886LL;
	uint64_t x266 = 16759279LLU;
	static uint8_t x267 = 60U;
	volatile int32_t t53 = 0;

	t53 = (((x265&x266)==x267)-x268);

	if (t53 != -23) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x270 = -1;
	int16_t x271 = INT16_MIN;
	volatile int16_t x272 = 1;
	volatile int32_t t54 = 28;

	t54 = (((x269&x270)==x271)-x272);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x273 = 17U;
	uint16_t x274 = 11U;
	uint16_t x275 = 16U;
	uint8_t x276 = 13U;
	static volatile int32_t t55 = -864833;

	t55 = (((x273&x274)==x275)-x276);

	if (t55 != -13) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x277 = UINT64_MAX;
	int64_t x279 = INT64_MAX;
	int32_t t56 = -81900;

	t56 = (((x277&x278)==x279)-x280);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x282 = UINT16_MAX;
	volatile uint16_t x283 = 7728U;
	int8_t x284 = INT8_MIN;
	int32_t t57 = 0;

	t57 = (((x281&x282)==x283)-x284);

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x285 = -1;
	uint64_t x286 = 15716670253LLU;
	uint16_t x287 = 470U;
	volatile int32_t t58 = 475993;

	t58 = (((x285&x286)==x287)-x288);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = -1;
	int64_t x292 = -1LL;
	volatile int64_t t59 = -1215756455LL;

	t59 = (((x289&x290)==x291)-x292);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x297 = INT64_MIN;
	uint16_t x298 = UINT16_MAX;
	int8_t x299 = 1;
	int8_t x300 = -1;
	static int32_t t60 = 130925;

	t60 = (((x297&x298)==x299)-x300);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MIN;
	static uint16_t x302 = 56U;
	static uint32_t x303 = UINT32_MAX;
	int8_t x304 = INT8_MIN;
	volatile int32_t t61 = -1;

	t61 = (((x301&x302)==x303)-x304);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x305 = INT64_MAX;
	uint32_t x306 = 7139108U;
	volatile uint8_t x307 = UINT8_MAX;
	int8_t x308 = 7;
	volatile int32_t t62 = 2122;

	t62 = (((x305&x306)==x307)-x308);

	if (t62 != -7) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MAX;
	int64_t x311 = -1LL;
	volatile int32_t t63 = -349260077;

	t63 = (((x309&x310)==x311)-x312);

	if (t63 != -23) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x313 = 1296333322LLU;
	static int16_t x314 = -1;
	static int32_t t64 = 6571788;

	t64 = (((x313&x314)==x315)-x316);

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x318 = 97403230483902461LLU;
	static int8_t x320 = INT8_MAX;
	int32_t t65 = 183792;

	t65 = (((x317&x318)==x319)-x320);

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x321 = 108627U;
	int32_t x322 = -1;
	volatile int64_t x323 = -1LL;
	static volatile int16_t x324 = 12574;
	static int32_t t66 = -18;

	t66 = (((x321&x322)==x323)-x324);

	if (t66 != -12574) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x325 = INT32_MIN;
	uint16_t x326 = UINT16_MAX;
	uint16_t x327 = 0U;

	t67 = (((x325&x326)==x327)-x328);

	if (t67 != -2147483646) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x330 = -1;
	static int8_t x332 = INT8_MIN;

	t68 = (((x329&x330)==x331)-x332);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x333 = UINT8_MAX;
	uint32_t x335 = 11191U;
	static int32_t t69 = 1669617;

	t69 = (((x333&x334)==x335)-x336);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x338 = INT16_MIN;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t70 = 10465U;

	t70 = (((x337&x338)==x339)-x340);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x341 = INT64_MAX;
	int32_t x342 = 142;
	static int16_t x343 = INT16_MAX;
	int8_t x344 = 0;

	t71 = (((x341&x342)==x343)-x344);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = -1;
	int16_t x347 = -12169;
	int8_t x348 = -1;
	volatile int32_t t72 = 59;

	t72 = (((x345&x346)==x347)-x348);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x349 = 881678229846307LLU;
	int64_t x350 = INT64_MAX;
	volatile int16_t x351 = -1;
	uint8_t x352 = 10U;
	volatile int32_t t73 = 2;

	t73 = (((x349&x350)==x351)-x352);

	if (t73 != -10) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = INT8_MAX;
	static volatile int64_t t74 = -8608223807032LL;

	t74 = (((x353&x354)==x355)-x356);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int8_t x358 = 41;
	uint64_t x359 = 9392703722761LLU;
	int64_t x360 = -116712617112LL;
	static volatile int64_t t75 = -160168548666007395LL;

	t75 = (((x357&x358)==x359)-x360);

	if (t75 != 116712617112LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x361 = -29282LL;
	int16_t x362 = 0;
	int32_t x363 = -1;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t76 = 39242;

	t76 = (((x361&x362)==x363)-x364);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x366 = 775003744444364LL;
	int16_t x367 = INT16_MAX;
	uint64_t x368 = UINT64_MAX;
	uint64_t t77 = 21895LLU;

	t77 = (((x365&x366)==x367)-x368);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x370 = -1;
	static uint8_t x371 = 62U;
	static uint64_t x372 = 7LLU;
	volatile uint64_t t78 = 5792073131LLU;

	t78 = (((x369&x370)==x371)-x372);

	if (t78 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = INT16_MIN;
	static int8_t x374 = -1;
	int32_t x375 = -1;
	volatile int16_t x376 = -1;

	t79 = (((x373&x374)==x375)-x376);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x377 = 3U;
	uint64_t x380 = 40214006274116326LLU;
	static uint64_t t80 = 30890243468381LLU;

	t80 = (((x377&x378)==x379)-x380);

	if (t80 != 18406530067435435290LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x381 = 57;
	static int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	volatile int32_t t81 = 2169768;

	t81 = (((x381&x382)==x383)-x384);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = 1;
	volatile uint32_t x387 = 121252U;
	static volatile int32_t t82 = 87;

	t82 = (((x385&x386)==x387)-x388);

	if (t82 != 7793) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x390 = INT16_MIN;
	int64_t x391 = -1LL;
	uint8_t x392 = 66U;
	int32_t t83 = -1646;

	t83 = (((x389&x390)==x391)-x392);

	if (t83 != -66) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x397 = 35U;
	uint16_t x398 = UINT16_MAX;
	static uint64_t x399 = 117857862288094573LLU;
	uint16_t x400 = 3485U;

	t84 = (((x397&x398)==x399)-x400);

	if (t84 != -3485) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x401 = 3U;
	int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MAX;
	static int32_t t85 = -3075;

	t85 = (((x401&x402)==x403)-x404);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = INT16_MAX;
	int64_t x406 = -7LL;
	int32_t x407 = -1722;
	uint8_t x408 = 84U;
	volatile int32_t t86 = -10064;

	t86 = (((x405&x406)==x407)-x408);

	if (t86 != -84) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x410 = INT32_MAX;
	volatile int32_t t87 = -169782;

	t87 = (((x409&x410)==x411)-x412);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = -1;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = -1;
	volatile int32_t t88 = 1;

	t88 = (((x413&x414)==x415)-x416);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x417 = 3;
	int32_t x418 = 79243;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = INT16_MIN;
	volatile int32_t t89 = -1;

	t89 = (((x417&x418)==x419)-x420);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x421 = 66U;
	uint8_t x423 = 1U;
	static int32_t x424 = 14237;
	int32_t t90 = -7348941;

	t90 = (((x421&x422)==x423)-x424);

	if (t90 != -14237) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = -1;
	uint8_t x426 = 6U;
	int8_t x427 = -1;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t91 = -8;

	t91 = (((x425&x426)==x427)-x428);

	if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x433 = 34910;
	uint8_t x435 = 90U;
	int16_t x436 = INT16_MIN;
	int32_t t92 = 2065399;

	t92 = (((x433&x434)==x435)-x436);

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = 343136;
	static int8_t x439 = INT8_MAX;

	t93 = (((x437&x438)==x439)-x440);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x444 = 205LL;
	int64_t t94 = -3261183647841546LL;

	t94 = (((x441&x442)==x443)-x444);

	if (t94 != -205LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x446 = 482U;
	uint8_t x447 = 51U;
	int8_t x448 = -5;
	int32_t t95 = -49766474;

	t95 = (((x445&x446)==x447)-x448);

	if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x449 = UINT64_MAX;
	uint8_t x451 = 1U;
	int64_t x452 = 236658965350794LL;
	int64_t t96 = -2297971467691LL;

	t96 = (((x449&x450)==x451)-x452);

	if (t96 != -236658965350794LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = 14;
	uint64_t x454 = UINT64_MAX;
	int64_t x455 = INT64_MIN;
	static int16_t x456 = 122;
	int32_t t97 = 93401987;

	t97 = (((x453&x454)==x455)-x456);

	if (t97 != -122) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x457 = -1LL;
	uint64_t x459 = UINT64_MAX;
	volatile int32_t x460 = 44104423;
	static int32_t t98 = 832987;

	t98 = (((x457&x458)==x459)-x460);

	if (t98 != -44104423) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x461 = -1;
	volatile int32_t x462 = -188;
	static int64_t x463 = INT64_MIN;

	t99 = (((x461&x462)==x463)-x464);

	if (t99 != 4294942795U) { NG(); } else { ; }
	
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

