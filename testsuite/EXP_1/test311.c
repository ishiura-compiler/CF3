#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x5 = UINT64_MAX;
static int8_t x6 = 3;
uint16_t x15 = 62U;
static volatile uint8_t x23 = 58U;
uint16_t x24 = UINT16_MAX;
static volatile int32_t t4 = 580;
static uint16_t x28 = 8U;
volatile int8_t x31 = INT8_MIN;
uint64_t x33 = 3047411231441LLU;
int64_t x35 = INT64_MAX;
volatile int8_t x37 = 2;
uint64_t x38 = UINT64_MAX;
uint64_t t8 = UINT64_MAX;
uint16_t x41 = 368U;
uint64_t x42 = 4763491LLU;
int32_t x57 = INT32_MAX;
uint8_t x66 = 7U;
int32_t x68 = 0;
volatile int32_t x75 = 1014;
uint32_t x77 = UINT32_MAX;
static volatile int32_t x84 = INT32_MIN;
int16_t x105 = -330;
volatile int32_t x108 = 15082303;
static volatile int16_t x114 = INT16_MAX;
int16_t x117 = -1;
uint8_t x121 = UINT8_MAX;
int8_t x135 = -1;
volatile int16_t x147 = 0;
uint8_t x148 = 3U;
int32_t x149 = INT32_MAX;
static uint8_t x150 = 83U;
volatile int16_t x161 = -2;
int16_t x171 = INT16_MAX;
uint16_t x172 = UINT16_MAX;
static volatile int64_t t33 = 2929LL;
uint32_t x178 = UINT32_MAX;
uint8_t x180 = 1U;
uint16_t x184 = UINT16_MAX;
int64_t x190 = INT64_MIN;
int64_t x195 = INT64_MIN;
static int64_t x200 = -23LL;
int8_t x203 = INT8_MAX;
uint32_t t41 = UINT32_MAX;
static uint8_t x206 = 1U;
volatile int16_t x209 = INT16_MIN;
int16_t x211 = INT16_MIN;
static uint32_t t44 = UINT32_MAX;
int32_t x218 = -1;
int64_t t45 = 3197850599264994824LL;
uint64_t t47 = 1048070030LLU;
static volatile uint32_t x232 = 1830662945U;
int16_t x234 = INT16_MIN;
uint64_t t50 = UINT64_MAX;
volatile int32_t t51 = -110219;
int32_t x245 = -1;
int64_t t55 = 272118LL;
static int32_t x262 = INT32_MIN;
static volatile int64_t t57 = 506093287LL;
int64_t t58 = -35LL;
volatile uint8_t x273 = 2U;
static int32_t x281 = INT32_MAX;
uint8_t x284 = UINT8_MAX;
int16_t x288 = -1528;
int8_t x292 = INT8_MAX;
int16_t x297 = 1000;
static int64_t x298 = INT64_MAX;
volatile int32_t t66 = 702691837;
static uint32_t x311 = 40546U;
uint8_t x312 = UINT8_MAX;
int32_t x313 = -22;
static int64_t x322 = 1359103LL;
uint64_t x331 = 850010907452174LLU;
uint8_t x335 = UINT8_MAX;
uint32_t x336 = UINT32_MAX;
int16_t x338 = INT16_MIN;
static int64_t t75 = -650610LL;
int16_t x346 = 12472;
static int16_t x357 = -3734;
int32_t x365 = INT32_MIN;
static int16_t x368 = -12773;
static volatile int64_t x371 = -1LL;
volatile uint64_t t82 = 28946672450817LLU;
int16_t x378 = INT16_MAX;
int64_t x384 = 13446699028538LL;
static uint16_t x394 = UINT16_MAX;
int8_t x400 = INT8_MAX;
int32_t x403 = INT32_MIN;
uint8_t x404 = UINT8_MAX;
int16_t x420 = 5969;
volatile uint64_t t93 = 10949951441400292LLU;
uint8_t x426 = 1U;
static int32_t x431 = -1;
static uint8_t x442 = UINT8_MAX;


void f0(void) {
	int8_t x7 = INT8_MAX;
	int32_t x8 = -1;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (((x5-x6)&x7)|x8);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 3;
	uint32_t x10 = 29259U;
	volatile int8_t x11 = -1;
	uint8_t x12 = 6U;
	volatile uint32_t t1 = 8U;

	t1 = (((x9-x10)&x11)|x12);

	if (t1 != 4294938046U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = 6671;
	int16_t x14 = 967;
	uint16_t x16 = 3U;
	volatile int32_t t2 = 55;

	t2 = (((x13-x14)&x15)|x16);

	if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 0U;
	uint32_t x18 = 1331054324U;
	int8_t x19 = 23;
	int32_t x20 = INT32_MAX;
	uint32_t t3 = 23172119U;

	t3 = (((x17-x18)&x19)|x20);

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;

	t4 = (((x21-x22)&x23)|x24);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint32_t x26 = 1182769U;
	int32_t x27 = -32485;
	volatile uint32_t t5 = 2U;

	t5 = (((x25-x26)&x27)|x28);

	if (t5 != 4293820682U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 13414;
	uint16_t x30 = 9U;
	int8_t x32 = INT8_MAX;
	int32_t t6 = 6771;

	t6 = (((x29-x30)&x31)|x32);

	if (t6 != 13439) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = 1224LLU;
	static int8_t x36 = INT8_MIN;
	uint64_t t7 = 49281658492852121LLU;

	t7 = (((x33-x34)&x35)|x36);

	if (t7 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x39 = -1LL;
	int8_t x40 = -1;

	t8 = (((x37-x38)&x39)|x40);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x43 = INT32_MIN;
	int8_t x44 = -30;
	uint64_t t9 = 54003LLU;

	t9 = (((x41-x42)&x43)|x44);

	if (t9 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 4444LL;
	uint64_t x46 = 6414371033724LLU;
	static volatile int16_t x47 = 365;
	uint16_t x48 = 32U;
	volatile uint64_t t10 = 3325LLU;

	t10 = (((x45-x46)&x47)|x48);

	if (t10 != 96LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = -1080;
	static int32_t x54 = INT32_MIN;
	uint8_t x55 = 41U;
	int16_t x56 = INT16_MAX;
	volatile int32_t t11 = -58686;

	t11 = (((x53-x54)&x55)|x56);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x58 = UINT8_MAX;
	int64_t x59 = -80LL;
	int8_t x60 = 30;
	int64_t t12 = -94305834818804518LL;

	t12 = (((x57-x58)&x59)|x60);

	if (t12 != 2147483422LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = -10;
	int64_t x62 = -1LL;
	int8_t x63 = -1;
	static volatile uint64_t x64 = 3LLU;
	volatile uint64_t t13 = 7429767147538151LLU;

	t13 = (((x61-x62)&x63)|x64);

	if (t13 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = 433846387;
	uint8_t x67 = 3U;
	static volatile int32_t t14 = 371810;

	t14 = (((x65-x66)&x67)|x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = 585635966818259977LL;
	static uint32_t x74 = UINT32_MAX;
	volatile int64_t x76 = INT64_MIN;
	volatile int64_t t15 = 203LL;

	t15 = (((x73-x74)&x75)|x76);

	if (t15 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x78 = -1;
	volatile uint64_t x79 = UINT64_MAX;
	uint32_t x80 = UINT32_MAX;
	volatile uint64_t t16 = 1539102221LLU;

	t16 = (((x77-x78)&x79)|x80);

	if (t16 != 4294967295LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 126483LLU;
	uint64_t x82 = 995116189276LLU;
	uint16_t x83 = 517U;
	volatile uint64_t t17 = 823402368119263997LLU;

	t17 = (((x81-x82)&x83)|x84);

	if (t17 != 18446744071562068485LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x93 = INT32_MIN;
	int32_t x94 = 0;
	int32_t x95 = INT32_MIN;
	int8_t x96 = -1;
	volatile int32_t t18 = -448;

	t18 = (((x93-x94)&x95)|x96);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -1;
	static int64_t x102 = -430891987693444646LL;
	uint32_t x103 = 470449U;
	int64_t x104 = -1609333754052058929LL;
	volatile int64_t t19 = -1LL;

	t19 = (((x101-x102)&x103)|x104);

	if (t19 != -1609333754051990289LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x106 = 2LLU;
	volatile int32_t x107 = -169497585;
	volatile uint64_t t20 = 106LLU;

	t20 = (((x105-x106)&x107)|x108);

	if (t20 != 18446744073540185919LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x109 = INT64_MAX;
	uint8_t x110 = UINT8_MAX;
	static int64_t x111 = INT64_MIN;
	int16_t x112 = 32;
	volatile int64_t t21 = 1655091111616LL;

	t21 = (((x109-x110)&x111)|x112);

	if (t21 != 32LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = 599733LL;
	static int64_t x115 = -504785554399LL;
	volatile int64_t x116 = -1LL;
	int64_t t22 = -185956LL;

	t22 = (((x113-x114)&x115)|x116);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MIN;
	static uint32_t x120 = UINT32_MAX;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (((x117-x118)&x119)|x120);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x122 = -1;
	int64_t x123 = -4740488387576328LL;
	static int16_t x124 = 783;
	int64_t t24 = -121LL;

	t24 = (((x121-x122)&x123)|x124);

	if (t24 != 783LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = -1;
	uint16_t x126 = 1285U;
	int16_t x127 = 12083;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t25 = -34546;

	t25 = (((x125-x126)&x127)|x128);

	if (t25 != -2147472846) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = 6U;
	static uint32_t x131 = UINT32_MAX;
	uint8_t x132 = UINT8_MAX;
	volatile uint32_t t26 = 2263908U;

	t26 = (((x129-x130)&x131)|x132);

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MAX;
	int32_t x136 = INT32_MAX;
	int32_t t27 = -67968635;

	t27 = (((x133-x134)&x135)|x136);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x145 = -1;
	static volatile uint32_t x146 = 0U;
	volatile uint32_t t28 = 7860U;

	t28 = (((x145-x146)&x147)|x148);

	if (t28 != 3U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x151 = INT16_MAX;
	volatile int8_t x152 = -1;
	int32_t t29 = -155494;

	t29 = (((x149-x150)&x151)|x152);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x153 = 48U;
	int8_t x154 = INT8_MAX;
	static int64_t x155 = -1LL;
	uint32_t x156 = 139U;
	int64_t t30 = -114824LL;

	t30 = (((x153-x154)&x155)|x156);

	if (t30 != -69LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x157 = INT8_MAX;
	static int64_t x158 = 34264LL;
	int64_t x159 = -1LL;
	int64_t x160 = INT64_MIN;
	int64_t t31 = 34092869982407LL;

	t31 = (((x157-x158)&x159)|x160);

	if (t31 != -34137LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x162 = 7391;
	volatile int32_t x163 = -1;
	uint64_t x164 = 132853485079LLU;
	uint64_t t32 = 2236417450086495696LLU;

	t32 = (((x161-x162)&x163)|x164);

	if (t32 != 18446744073709547295LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = 3913731411831441123LL;
	uint32_t x170 = 1U;

	t33 = (((x169-x170)&x171)|x172);

	if (t33 != 65535LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = 5;
	static uint16_t x175 = UINT16_MAX;
	static uint32_t x176 = 16693399U;
	static uint32_t t34 = 23U;

	t34 = (((x173-x174)&x175)|x176);

	if (t34 != 16711679U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MAX;
	int16_t x179 = 419;
	static volatile uint32_t t35 = 19742774U;

	t35 = (((x177-x178)&x179)|x180);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x181 = 1U;
	static uint32_t x182 = 151264U;
	uint64_t x183 = 56242555772391312LLU;
	volatile uint64_t t36 = 187376118564933616LLU;

	t36 = (((x181-x182)&x183)|x184);

	if (t36 != 1980825599LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = 28735053U;
	volatile int64_t x186 = -165543787790804381LL;
	int64_t x187 = INT64_MAX;
	uint32_t x188 = 28U;
	int64_t t37 = 16291881LL;

	t37 = (((x185-x186)&x187)|x188);

	if (t37 != 165543787819539454LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = -1;
	int16_t x191 = INT16_MIN;
	static uint32_t x192 = UINT32_MAX;
	volatile int64_t t38 = INT64_MAX;

	t38 = (((x189-x190)&x191)|x192);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = -686;
	int64_t x194 = 65262177292776952LL;
	uint16_t x196 = 7571U;
	volatile int64_t t39 = -153LL;

	t39 = (((x193-x194)&x195)|x196);

	if (t39 != -9223372036854768237LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = -1;
	volatile uint16_t x198 = 95U;
	int16_t x199 = INT16_MIN;
	static volatile int64_t t40 = 22978182935LL;

	t40 = (((x197-x198)&x199)|x200);

	if (t40 != -23LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = INT8_MIN;
	static int32_t x202 = -1;
	uint32_t x204 = UINT32_MAX;

	t41 = (((x201-x202)&x203)|x204);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = INT16_MAX;
	int16_t x207 = INT16_MAX;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t42 = 15992725;

	t42 = (((x205-x206)&x207)|x208);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x210 = -9930074558LL;
	int32_t x212 = INT32_MIN;
	int64_t t43 = -816855230LL;

	t43 = (((x209-x210)&x211)|x212);

	if (t43 != -807403520LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 491529777U;
	static volatile uint32_t x214 = UINT32_MAX;
	int8_t x215 = -3;
	volatile int16_t x216 = -1;

	t44 = (((x213-x214)&x215)|x216);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x217 = 1;
	int16_t x219 = 3;
	int64_t x220 = INT64_MIN;

	t45 = (((x217-x218)&x219)|x220);

	if (t45 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x221 = INT8_MIN;
	static int16_t x222 = -1;
	int64_t x223 = 723440LL;
	int8_t x224 = -62;
	volatile int64_t t46 = -12539927598998LL;

	t46 = (((x221-x222)&x223)|x224);

	if (t46 != -62LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x225 = 8081U;
	int16_t x226 = -1;
	static volatile int32_t x227 = INT32_MAX;
	uint64_t x228 = 6259LLU;

	t47 = (((x225-x226)&x227)|x228);

	if (t47 != 8179LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x229 = 1546U;
	uint64_t x230 = 443186697LLU;
	volatile int8_t x231 = 53;
	uint64_t t48 = 42738615LLU;

	t48 = (((x229-x230)&x231)|x232);

	if (t48 != 1830662945LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x233 = -6;
	uint16_t x235 = 2194U;
	int8_t x236 = INT8_MAX;
	int32_t t49 = 3807;

	t49 = (((x233-x234)&x235)|x236);

	if (t49 != 2303) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x237 = 4933U;
	uint8_t x238 = 103U;
	int32_t x239 = -387035974;
	uint64_t x240 = UINT64_MAX;

	t50 = (((x237-x238)&x239)|x240);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = -1;
	volatile int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	int32_t x244 = -12925;

	t51 = (((x241-x242)&x243)|x244);

	if (t51 != -12925) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = 113903958U;
	int64_t x248 = -3618LL;
	int64_t t52 = -4299LL;

	t52 = (((x245-x246)&x247)|x248);

	if (t52 != -3618LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = INT16_MIN;
	volatile int8_t x251 = INT8_MIN;
	int16_t x252 = 1;
	volatile int32_t t53 = -1707;

	t53 = (((x249-x250)&x251)|x252);

	if (t53 != 65409) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = 20;
	static volatile uint16_t x254 = 136U;
	uint8_t x255 = 1U;
	uint32_t x256 = 6910U;
	static uint32_t t54 = 770373605U;

	t54 = (((x253-x254)&x255)|x256);

	if (t54 != 6910U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MAX;
	int64_t x258 = 127158458683851333LL;
	int32_t x259 = INT32_MIN;
	uint8_t x260 = 8U;

	t55 = (((x257-x258)&x259)|x260);

	if (t55 != -127158459622752248LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x261 = -1;
	int8_t x263 = -1;
	static int64_t x264 = INT64_MIN;
	static volatile int64_t t56 = -454359058LL;

	t56 = (((x261-x262)&x263)|x264);

	if (t56 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x265 = UINT16_MAX;
	static int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	static volatile uint32_t x268 = UINT32_MAX;

	t57 = (((x265-x266)&x267)|x268);

	if (t57 != 4294967295LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = -1LL;
	volatile int16_t x270 = INT16_MAX;
	uint8_t x271 = 104U;
	int8_t x272 = -1;

	t58 = (((x269-x270)&x271)|x272);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x274 = 60342708U;
	volatile int8_t x275 = 20;
	uint16_t x276 = 1738U;
	static uint32_t t59 = 28974U;

	t59 = (((x273-x274)&x275)|x276);

	if (t59 != 1742U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x277 = -7230745990643706LL;
	int64_t x278 = -1LL;
	int32_t x279 = -24877;
	int8_t x280 = INT8_MIN;
	volatile int64_t t60 = -50LL;

	t60 = (((x277-x278)&x279)|x280);

	if (t60 != -125LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x282 = 93100011U;
	volatile uint64_t x283 = 516059331871LLU;
	static volatile uint64_t t61 = 100221046758709LLU;

	t61 = (((x281-x282)&x283)|x284);

	if (t61 != 570452223LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x285 = INT64_MIN;
	int32_t x286 = -458687697;
	volatile uint16_t x287 = 178U;
	int64_t t62 = -3445745427147LL;

	t62 = (((x285-x286)&x287)|x288);

	if (t62 != -1384LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x289 = -1LL;
	int16_t x290 = INT16_MIN;
	uint64_t x291 = 493156LLU;
	uint64_t t63 = 62238594020LLU;

	t63 = (((x289-x290)&x291)|x292);

	if (t63 != 1663LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = 12380363251LL;
	int64_t x294 = -1LL;
	uint32_t x295 = 79920255U;
	int8_t x296 = 0;
	int64_t t64 = 0LL;

	t64 = (((x293-x294)&x295)|x296);

	if (t64 != 12671092LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x299 = -1;
	int32_t x300 = INT32_MAX;
	int64_t t65 = 0LL;

	t65 = (((x297-x298)&x299)|x300);

	if (t65 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MAX;
	int8_t x302 = INT8_MAX;
	volatile int8_t x303 = -1;
	int16_t x304 = -1;

	t66 = (((x301-x302)&x303)|x304);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x305 = -1;
	static int32_t x306 = INT32_MAX;
	uint16_t x307 = UINT16_MAX;
	static uint16_t x308 = 1U;
	volatile int32_t t67 = -493;

	t67 = (((x305-x306)&x307)|x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = -1;
	volatile uint32_t t68 = 1974U;

	t68 = (((x309-x310)&x311)|x312);

	if (t68 != 255U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = 0;
	int16_t x316 = INT16_MAX;
	uint32_t t69 = 600288419U;

	t69 = (((x313-x314)&x315)|x316);

	if (t69 != 32767U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x317 = INT8_MIN;
	int64_t x318 = -1010271243LL;
	uint16_t x319 = 4086U;
	volatile uint16_t x320 = UINT16_MAX;
	static volatile int64_t t70 = -73688979680154144LL;

	t70 = (((x317-x318)&x319)|x320);

	if (t70 != 65535LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x321 = 184028U;
	int16_t x323 = 2141;
	int32_t x324 = -1;
	volatile int64_t t71 = -2478379LL;

	t71 = (((x321-x322)&x323)|x324);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	int8_t x332 = -1;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (((x329-x330)&x331)|x332);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x333 = UINT32_MAX;
	uint16_t x334 = 4U;
	uint32_t t73 = UINT32_MAX;

	t73 = (((x333-x334)&x335)|x336);

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = INT8_MIN;
	uint32_t x339 = 6146U;
	int32_t x340 = INT32_MIN;
	static volatile uint32_t t74 = 23U;

	t74 = (((x337-x338)&x339)|x340);

	if (t74 != 2147489792U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x341 = 40U;
	volatile uint32_t x342 = 60664510U;
	static volatile int64_t x343 = 221500LL;
	int16_t x344 = INT16_MIN;

	t75 = (((x341-x342)&x343)|x344);

	if (t75 != -16088LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = INT64_MAX;
	int64_t x347 = -1LL;
	int8_t x348 = -1;
	volatile int64_t t76 = -416223708LL;

	t76 = (((x345-x346)&x347)|x348);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = -1;
	int32_t x350 = INT32_MIN;
	int8_t x351 = -3;
	int64_t x352 = -1LL;
	volatile int64_t t77 = 0LL;

	t77 = (((x349-x350)&x351)|x352);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MAX;
	uint8_t x354 = 0U;
	uint64_t x355 = 384027696LLU;
	uint16_t x356 = UINT16_MAX;
	volatile uint64_t t78 = 2704693937LLU;

	t78 = (((x353-x354)&x355)|x356);

	if (t78 != 65535LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x358 = INT64_MIN;
	uint8_t x359 = 46U;
	volatile uint16_t x360 = 14007U;
	static int64_t t79 = -9352471606288LL;

	t79 = (((x357-x358)&x359)|x360);

	if (t79 != 14015LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = INT16_MAX;
	volatile int32_t x362 = -1;
	volatile int32_t x363 = INT32_MIN;
	volatile uint32_t x364 = UINT32_MAX;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = (((x361-x362)&x363)|x364);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	int64_t t81 = 198374375LL;

	t81 = (((x365-x366)&x367)|x368);

	if (t81 != -12773LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = -1;
	volatile uint64_t x370 = 51841LLU;
	int16_t x372 = INT16_MAX;

	t82 = (((x369-x370)&x371)|x372);

	if (t82 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x377 = 277570002159538LLU;
	volatile int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (((x377-x378)&x379)|x380);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = -5;
	static uint64_t x383 = 51683761312LLU;
	volatile uint64_t t84 = 7796725LLU;

	t84 = (((x381-x382)&x383)|x384);

	if (t84 != 13463879389242LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = 165935378753LL;
	volatile uint16_t x386 = 16U;
	uint16_t x387 = 0U;
	static uint16_t x388 = UINT16_MAX;
	int64_t t85 = 23937LL;

	t85 = (((x385-x386)&x387)|x388);

	if (t85 != 65535LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x389 = -12;
	int16_t x390 = INT16_MIN;
	static int64_t x391 = -715LL;
	int64_t x392 = -15040933326265LL;
	static volatile int64_t t86 = 2LL;

	t86 = (((x389-x390)&x391)|x392);

	if (t86 != -15040933298313LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = -1;
	static int16_t x395 = 0;
	int64_t x396 = INT64_MIN;
	int64_t t87 = INT64_MIN;

	t87 = (((x393-x394)&x395)|x396);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x397 = 135545064853LL;
	int32_t x398 = -8314361;
	volatile int64_t x399 = 7LL;
	volatile int64_t t88 = -38735230066063555LL;

	t88 = (((x397-x398)&x399)|x400);

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x401 = -51359306LL;
	int8_t x402 = 29;
	volatile int64_t t89 = 76LL;

	t89 = (((x401-x402)&x403)|x404);

	if (t89 != -2147483393LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = -1LL;
	uint16_t x406 = UINT16_MAX;
	volatile int16_t x407 = -1;
	volatile int32_t x408 = -119449;
	int64_t t90 = -453914169121LL;

	t90 = (((x405-x406)&x407)|x408);

	if (t90 != -53913LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = INT8_MIN;
	static int64_t x410 = -1LL;
	int64_t x411 = 3940LL;
	volatile uint8_t x412 = 19U;
	volatile int64_t t91 = -4758388494LL;

	t91 = (((x409-x410)&x411)|x412);

	if (t91 != 3859LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = -1;
	uint16_t x414 = 125U;
	static int32_t x415 = INT32_MAX;
	int64_t x416 = -115105888LL;
	volatile int64_t t92 = -38400361LL;

	t92 = (((x413-x414)&x415)|x416);

	if (t92 != -94LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x417 = 5U;
	uint64_t x418 = 27889LLU;
	int8_t x419 = INT8_MIN;

	t93 = (((x417-x418)&x419)|x420);

	if (t93 != 18446744073709524817LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = UINT64_MAX;
	volatile int8_t x422 = INT8_MIN;
	uint8_t x423 = 15U;
	int8_t x424 = 56;
	uint64_t t94 = 6LLU;

	t94 = (((x421-x422)&x423)|x424);

	if (t94 != 63LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x425 = -158461;
	int64_t x427 = 397276283723LL;
	int64_t x428 = INT64_MAX;
	int64_t t95 = INT64_MAX;

	t95 = (((x425-x426)&x427)|x428);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x429 = INT8_MAX;
	int16_t x430 = 1799;
	volatile int64_t x432 = 83498902062494503LL;
	volatile int64_t t96 = 51381754193043LL;

	t96 = (((x429-x430)&x431)|x432);

	if (t96 != -1153LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x433 = 26040U;
	int32_t x434 = INT32_MAX;
	int16_t x435 = 307;
	int16_t x436 = 162;
	int32_t t97 = -3;

	t97 = (((x433-x434)&x435)|x436);

	if (t97 != 435) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x441 = INT8_MAX;
	int8_t x443 = -1;
	int16_t x444 = -1;
	int32_t t98 = 857633283;

	t98 = (((x441-x442)&x443)|x444);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x445 = INT64_MIN;
	int64_t x446 = -135441644227373725LL;
	volatile int64_t x447 = -1LL;
	int32_t x448 = -15649;
	int64_t t99 = -10267LL;

	t99 = (((x445-x446)&x447)|x448);

	if (t99 != -5409LL) { NG(); } else { ; }
	
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

