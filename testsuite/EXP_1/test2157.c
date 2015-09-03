#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
uint32_t x7 = 20U;
volatile int32_t t1 = 48331;
uint64_t x9 = 7393857056LLU;
int64_t x12 = INT64_MAX;
volatile uint32_t x15 = UINT32_MAX;
static int8_t x18 = -48;
int64_t t4 = 599905099292927LL;
int64_t x25 = -3677376645934871696LL;
int64_t x35 = INT64_MIN;
static int32_t x39 = INT32_MIN;
int8_t x44 = INT8_MAX;
int32_t t10 = -6575;
int32_t x46 = INT32_MIN;
uint8_t x47 = 60U;
uint64_t x48 = UINT64_MAX;
int16_t x53 = -15027;
int64_t x57 = INT64_MIN;
int32_t t14 = -25;
uint64_t x62 = 3316174488370333363LLU;
int32_t x65 = -249;
uint8_t x67 = UINT8_MAX;
static volatile int64_t t16 = -1LL;
int16_t x80 = INT16_MAX;
volatile int32_t t19 = -642;
int64_t x82 = INT64_MIN;
int32_t x83 = INT32_MAX;
int32_t x84 = INT32_MIN;
volatile uint8_t x93 = UINT8_MAX;
int16_t x97 = 7;
int16_t x98 = -1;
volatile int64_t t24 = -441453076245512LL;
uint32_t x106 = 5180739U;
uint32_t x107 = 14747739U;
uint16_t x114 = UINT16_MAX;
volatile int64_t x115 = -1LL;
volatile int32_t t28 = -1985;
uint16_t x119 = 9082U;
uint64_t x120 = 154LLU;
static volatile int32_t x135 = INT32_MIN;
int64_t x137 = INT64_MAX;
int64_t x144 = INT64_MIN;
uint8_t x148 = 11U;
static int32_t t36 = 144224951;
int16_t x150 = INT16_MIN;
static volatile int64_t t38 = INT64_MAX;
volatile int32_t t39 = INT32_MAX;
static int64_t x163 = INT64_MAX;
int32_t x167 = 0;
static int32_t t41 = -507237;
volatile int16_t x174 = INT16_MIN;
static volatile uint32_t t44 = 17849U;
int32_t x191 = INT32_MIN;
int32_t t48 = -2606;
static volatile int32_t t50 = 38369115;
static uint64_t x207 = 4LLU;
int64_t t52 = 1LL;
int8_t x219 = INT8_MAX;
int32_t t54 = -20719;
static uint64_t x226 = 1083294LLU;
int32_t t58 = 456755784;
static int64_t x238 = -5031814589LL;
uint64_t x247 = UINT64_MAX;
int16_t x254 = INT16_MIN;
volatile uint64_t x258 = UINT64_MAX;
int16_t x261 = -1;
uint16_t x262 = UINT16_MAX;
uint8_t x266 = 11U;
uint64_t x270 = 56780923556381841LLU;
volatile int16_t x271 = INT16_MAX;
int64_t x277 = 463LL;
int16_t x278 = 5;
int32_t x282 = INT32_MAX;
volatile int32_t t71 = -805719;
volatile int16_t x295 = -3897;
int64_t x299 = INT64_MAX;
volatile int32_t x301 = 126280709;
volatile int32_t t79 = -3288489;
uint16_t x322 = 236U;
volatile int64_t x323 = INT64_MIN;
uint64_t x326 = UINT64_MAX;
static int32_t x328 = 26;
int32_t x334 = -1;
static int8_t x339 = -1;
int8_t x344 = -1;
static int32_t x346 = INT32_MIN;
int16_t x347 = -1;
int8_t x349 = 0;
static int8_t x350 = INT8_MAX;
volatile uint64_t x351 = 68070890627747LLU;
int32_t t87 = INT32_MAX;
int64_t x359 = INT64_MIN;
volatile uint32_t x365 = 681275115U;
int16_t x371 = INT16_MIN;
volatile int8_t x386 = INT8_MIN;
int32_t x387 = INT32_MIN;
volatile int32_t x395 = INT32_MAX;
uint32_t x396 = 853794761U;
volatile uint32_t t98 = 115727U;
static int64_t t99 = -99971LL;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int8_t x2 = -1;
	static int64_t x3 = 366370500LL;
	volatile int32_t t0 = -2294;

	t0 = (((x1^x2)<=x3)|x4);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 2U;
	volatile int8_t x6 = INT8_MIN;
	volatile int16_t x8 = INT16_MIN;

	t1 = (((x5^x6)<=x7)|x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 19884677;
	static volatile uint8_t x11 = 36U;
	int64_t t2 = INT64_MAX;

	t2 = (((x9^x10)<=x11)|x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int16_t x14 = -1;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = 7354223;

	t3 = (((x13^x14)<=x15)|x16);

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 1LLU;
	uint32_t x19 = 56840U;
	int64_t x20 = 38506838LL;

	t4 = (((x17^x18)<=x19)|x20);

	if (t4 != 38506838LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	uint32_t x22 = 1142442U;
	int16_t x23 = 1245;
	uint64_t x24 = 28260389LLU;
	static volatile uint64_t t5 = 12512LLU;

	t5 = (((x21^x22)<=x23)|x24);

	if (t5 != 28260389LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 6823U;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 903;

	t6 = (((x25^x26)<=x27)|x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 28460LLU;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 0;

	t7 = (((x29^x30)<=x31)|x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -115204141;
	int64_t x34 = 3159LL;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 4059;

	t8 = (((x33^x34)<=x35)|x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 2U;
	uint16_t x38 = UINT16_MAX;
	static volatile uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 400;

	t9 = (((x37^x38)<=x39)|x40);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = -1;
	uint8_t x43 = UINT8_MAX;

	t10 = (((x41^x42)<=x43)|x44);

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 7937359LLU;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (((x45^x46)<=x47)|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	static int8_t x50 = INT8_MAX;
	volatile uint8_t x51 = 1U;
	static int16_t x52 = -1;
	static volatile int32_t t12 = 897048073;

	t12 = (((x49^x50)<=x51)|x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -1LL;
	uint64_t x55 = 2429LLU;
	static int16_t x56 = INT16_MIN;
	int32_t t13 = -442;

	t13 = (((x53^x54)<=x55)|x56);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 13U;
	int64_t x59 = INT64_MAX;
	int8_t x60 = -1;

	t14 = (((x57^x58)<=x59)|x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static int64_t x63 = INT64_MIN;
	int16_t x64 = -1;
	static int32_t t15 = 6831890;

	t15 = (((x61^x62)<=x63)|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x66 = UINT32_MAX;
	volatile int64_t x68 = -69480457441LL;

	t16 = (((x65^x66)<=x67)|x68);

	if (t16 != -69480457441LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 285LL;
	volatile uint16_t x70 = 636U;
	int32_t x71 = INT32_MAX;
	volatile uint8_t x72 = 61U;
	int32_t t17 = 15996;

	t17 = (((x69^x70)<=x71)|x72);

	if (t17 != 61) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	static uint8_t x74 = UINT8_MAX;
	int32_t x75 = -2;
	volatile int16_t x76 = -1;
	volatile int32_t t18 = -13;

	t18 = (((x73^x74)<=x75)|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = -1;
	static int32_t x78 = INT32_MIN;
	volatile int32_t x79 = INT32_MIN;

	t19 = (((x77^x78)<=x79)|x80);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	volatile int32_t t20 = INT32_MIN;

	t20 = (((x81^x82)<=x83)|x84);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 307631LLU;
	int8_t x86 = -1;
	uint32_t x87 = 15008964U;
	volatile int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -3;

	t21 = (((x85^x86)<=x87)|x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 408682718;
	static volatile int8_t x90 = INT8_MIN;
	uint64_t x91 = 767013186LLU;
	static int64_t x92 = INT64_MAX;
	volatile int64_t t22 = INT64_MAX;

	t22 = (((x89^x90)<=x91)|x92);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = UINT64_MAX;
	int64_t x95 = 121121080819652600LL;
	volatile uint64_t x96 = UINT64_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (((x93^x94)<=x95)|x96);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x99 = 21U;
	volatile int64_t x100 = 2376283329LL;

	t24 = (((x97^x98)<=x99)|x100);

	if (t24 != 2376283329LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 2U;
	volatile int64_t x102 = -230045679233LL;
	volatile int32_t x103 = -20448;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = -3931;

	t25 = (((x101^x102)<=x103)|x104);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	volatile int8_t x108 = 10;
	volatile int32_t t26 = 352;

	t26 = (((x105^x106)<=x107)|x108);

	if (t26 != 10) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x109 = 3313U;
	static volatile int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MAX;
	static int8_t x112 = 4;
	volatile int32_t t27 = -25813466;

	t27 = (((x109^x110)<=x111)|x112);

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	uint8_t x116 = UINT8_MAX;

	t28 = (((x113^x114)<=x115)|x116);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = -1;
	static int64_t x118 = -1LL;
	volatile uint64_t t29 = 137115281140533862LLU;

	t29 = (((x117^x118)<=x119)|x120);

	if (t29 != 155LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	volatile int8_t x122 = INT8_MIN;
	int64_t x123 = -1LL;
	static int32_t x124 = 2823559;
	int32_t t30 = 219;

	t30 = (((x121^x122)<=x123)|x124);

	if (t30 != 2823559) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = 31;
	int64_t x126 = 118954LL;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -4;

	t31 = (((x125^x126)<=x127)|x128);

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = 11039;
	uint8_t x130 = 72U;
	int64_t x131 = -1LL;
	int32_t x132 = -1;
	int32_t t32 = -9968202;

	t32 = (((x129^x130)<=x131)|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 23605896515456LLU;
	static int16_t x134 = -1;
	static int16_t x136 = INT16_MIN;
	int32_t t33 = -1;

	t33 = (((x133^x134)<=x135)|x136);

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x138 = 18813535LLU;
	static volatile uint16_t x139 = UINT16_MAX;
	int8_t x140 = 15;
	int32_t t34 = -3292;

	t34 = (((x137^x138)<=x139)|x140);

	if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	uint32_t x142 = 1025081U;
	volatile uint16_t x143 = 71U;
	int64_t t35 = INT64_MIN;

	t35 = (((x141^x142)<=x143)|x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static uint16_t x146 = UINT16_MAX;
	int32_t x147 = INT32_MIN;

	t36 = (((x145^x146)<=x147)|x148);

	if (t36 != 11) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	static int8_t x151 = -1;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -2;

	t37 = (((x149^x150)<=x151)|x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -6;
	uint8_t x154 = 12U;
	int16_t x155 = 6;
	int64_t x156 = INT64_MAX;

	t38 = (((x153^x154)<=x155)|x156);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = -1;
	static uint64_t x159 = 859304750383104LLU;
	static int32_t x160 = INT32_MAX;

	t39 = (((x157^x158)<=x159)|x160);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -7;
	volatile int32_t x162 = INT32_MIN;
	uint16_t x164 = 2347U;
	int32_t t40 = 2909;

	t40 = (((x161^x162)<=x163)|x164);

	if (t40 != 2347) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = 1;
	int8_t x168 = INT8_MIN;

	t41 = (((x165^x166)<=x167)|x168);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -18;
	uint16_t x170 = 32U;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t42 = -21329;

	t42 = (((x169^x170)<=x171)|x172);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int16_t x175 = -1;
	int8_t x176 = -1;
	volatile int32_t t43 = 388203503;

	t43 = (((x173^x174)<=x175)|x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -112127LL;
	uint16_t x178 = 14U;
	int64_t x179 = INT64_MAX;
	uint32_t x180 = 999U;

	t44 = (((x177^x178)<=x179)|x180);

	if (t44 != 999U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 24;
	uint32_t x182 = UINT32_MAX;
	int64_t x183 = INT64_MIN;
	static int64_t x184 = INT64_MAX;
	int64_t t45 = INT64_MAX;

	t45 = (((x181^x182)<=x183)|x184);

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint16_t x186 = 8U;
	int32_t x187 = INT32_MIN;
	int8_t x188 = -5;
	volatile int32_t t46 = -511814240;

	t46 = (((x185^x186)<=x187)|x188);

	if (t46 != -5) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 0;
	int16_t x190 = INT16_MIN;
	int8_t x192 = -1;
	int32_t t47 = 91;

	t47 = (((x189^x190)<=x191)|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 578U;
	int64_t x194 = INT64_MAX;
	uint16_t x195 = 19U;
	uint8_t x196 = UINT8_MAX;

	t48 = (((x193^x194)<=x195)|x196);

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -2447;
	static int32_t x198 = -1;
	uint32_t x199 = 3703482U;
	static volatile uint32_t x200 = 330437U;
	volatile uint32_t t49 = 48U;

	t49 = (((x197^x198)<=x199)|x200);

	if (t49 != 330437U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 17433;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = -1;
	int16_t x204 = INT16_MIN;

	t50 = (((x201^x202)<=x203)|x204);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x205 = 12;
	int32_t x206 = -1;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = (((x205^x206)<=x207)|x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -225;
	uint64_t x210 = 2133412244966LLU;
	int16_t x211 = -18;
	int64_t x212 = -292715436995086808LL;

	t52 = (((x209^x210)<=x211)|x212);

	if (t52 != -292715436995086807LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x213 = 417U;
	uint32_t x214 = 590887993U;
	int8_t x215 = -1;
	static int64_t x216 = INT64_MIN;
	static volatile int64_t t53 = 6732672LL;

	t53 = (((x213^x214)<=x215)|x216);

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static uint8_t x218 = 53U;
	uint8_t x220 = UINT8_MAX;

	t54 = (((x217^x218)<=x219)|x220);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	int64_t x222 = -116023LL;
	volatile int8_t x223 = -1;
	int8_t x224 = INT8_MIN;
	static int32_t t55 = -12600125;

	t55 = (((x221^x222)<=x223)|x224);

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x227 = -13449354262893LL;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 78320903;

	t56 = (((x225^x226)<=x227)|x228);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 205U;
	volatile int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MAX;
	int8_t x232 = INT8_MIN;
	int32_t t57 = -83;

	t57 = (((x229^x230)<=x231)|x232);

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x234 = UINT16_MAX;
	int16_t x235 = 57;
	int16_t x236 = INT16_MIN;

	t58 = (((x233^x234)<=x235)|x236);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	volatile uint32_t x239 = 1U;
	uint32_t x240 = UINT32_MAX;
	uint32_t t59 = UINT32_MAX;

	t59 = (((x237^x238)<=x239)|x240);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 418U;
	int64_t x242 = -13048675643LL;
	volatile uint16_t x243 = 23623U;
	uint16_t x244 = 277U;
	volatile int32_t t60 = -30276;

	t60 = (((x241^x242)<=x243)|x244);

	if (t60 != 277) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -5720643999LL;
	int64_t x246 = INT64_MIN;
	uint64_t x248 = 3419144725596198LLU;
	uint64_t t61 = 16098745902543LLU;

	t61 = (((x245^x246)<=x247)|x248);

	if (t61 != 3419144725596199LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x249 = 24708U;
	volatile int64_t x250 = INT64_MIN;
	volatile int8_t x251 = INT8_MAX;
	uint64_t x252 = 129244223152724848LLU;
	volatile uint64_t t62 = 627759161LLU;

	t62 = (((x249^x250)<=x251)|x252);

	if (t62 != 129244223152724849LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = 96;
	int16_t x255 = INT16_MAX;
	int8_t x256 = -1;
	static int32_t t63 = 1;

	t63 = (((x253^x254)<=x255)|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 1;
	int16_t x259 = -42;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 793;

	t64 = (((x257^x258)<=x259)|x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x263 = 115U;
	int64_t x264 = -844913788577990LL;
	volatile int64_t t65 = -4448103469337214LL;

	t65 = (((x261^x262)<=x263)|x264);

	if (t65 != -844913788577990LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static uint8_t x267 = 93U;
	int16_t x268 = 10659;
	int32_t t66 = -35421;

	t66 = (((x265^x266)<=x267)|x268);

	if (t66 != 10659) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	uint16_t x272 = 948U;
	volatile int32_t t67 = -35;

	t67 = (((x269^x270)<=x271)|x272);

	if (t67 != 948) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 7U;
	volatile int8_t x274 = -1;
	static uint8_t x275 = 0U;
	uint32_t x276 = 8067568U;
	uint32_t t68 = 5377709U;

	t68 = (((x273^x274)<=x275)|x276);

	if (t68 != 8067569U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	volatile int64_t t69 = INT64_MIN;

	t69 = (((x277^x278)<=x279)|x280);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 1453515855U;
	uint32_t x283 = 16U;
	int32_t x284 = 1350;
	volatile int32_t t70 = -48926494;

	t70 = (((x281^x282)<=x283)|x284);

	if (t70 != 1350) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x285 = 2750U;
	uint16_t x286 = 45U;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = 23U;

	t71 = (((x285^x286)<=x287)|x288);

	if (t71 != 23) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = -25899713219697002LL;
	int8_t x291 = INT8_MAX;
	static volatile uint64_t x292 = 2183022966998LLU;
	volatile uint64_t t72 = 246956053348662LLU;

	t72 = (((x289^x290)<=x291)|x292);

	if (t72 != 2183022966998LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 1767732468300LLU;
	int16_t x294 = INT16_MIN;
	int8_t x296 = INT8_MAX;
	static volatile int32_t t73 = 63;

	t73 = (((x293^x294)<=x295)|x296);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	volatile int16_t x298 = INT16_MAX;
	int64_t x300 = 1LL;
	int64_t t74 = -3045209315373437795LL;

	t74 = (((x297^x298)<=x299)|x300);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = -5098846553613LL;
	static int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t75 = -1;

	t75 = (((x301^x302)<=x303)|x304);

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	volatile int64_t x306 = INT64_MAX;
	static volatile int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -1;

	t76 = (((x305^x306)<=x307)|x308);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -13;
	static int64_t x310 = INT64_MIN;
	volatile int64_t x311 = 463193483229253038LL;
	static uint64_t x312 = 188LLU;
	volatile uint64_t t77 = 788LLU;

	t77 = (((x309^x310)<=x311)|x312);

	if (t77 != 188LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint8_t x314 = UINT8_MAX;
	static uint8_t x315 = 14U;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (((x313^x314)<=x315)|x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -1958;
	static int32_t x318 = INT32_MIN;
	volatile uint16_t x319 = UINT16_MAX;
	int16_t x320 = -299;

	t79 = (((x317^x318)<=x319)|x320);

	if (t79 != -299) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	volatile uint16_t x324 = 384U;
	int32_t t80 = 20;

	t80 = (((x321^x322)<=x323)|x324);

	if (t80 != 384) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -12LL;
	uint8_t x327 = UINT8_MAX;
	int32_t t81 = -46;

	t81 = (((x325^x326)<=x327)|x328);

	if (t81 != 27) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 64U;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	static int32_t t82 = -1;

	t82 = (((x329^x330)<=x331)|x332);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	static int32_t x335 = 20442;
	volatile uint8_t x336 = UINT8_MAX;
	int32_t t83 = 9;

	t83 = (((x333^x334)<=x335)|x336);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 0U;
	static int32_t x338 = INT32_MIN;
	volatile uint8_t x340 = 65U;
	int32_t t84 = -28126;

	t84 = (((x337^x338)<=x339)|x340);

	if (t84 != 65) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static uint32_t x342 = UINT32_MAX;
	volatile int64_t x343 = INT64_MIN;
	volatile int32_t t85 = 2345;

	t85 = (((x341^x342)<=x343)|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x348 = -20;
	volatile int32_t t86 = -42419577;

	t86 = (((x345^x346)<=x347)|x348);

	if (t86 != -19) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x352 = INT32_MAX;

	t87 = (((x349^x350)<=x351)|x352);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = 5;
	int32_t x354 = INT32_MAX;
	uint32_t x355 = 607977U;
	static uint64_t x356 = 7742912LLU;
	uint64_t t88 = 46945747594538649LLU;

	t88 = (((x353^x354)<=x355)|x356);

	if (t88 != 7742912LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -332417262950LL;
	static int32_t x358 = INT32_MIN;
	int16_t x360 = -1;
	int32_t t89 = 40037209;

	t89 = (((x357^x358)<=x359)|x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	uint8_t x362 = 1U;
	uint16_t x363 = UINT16_MAX;
	static volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = 0;

	t90 = (((x361^x362)<=x363)|x364);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x366 = -51;
	static volatile int64_t x367 = 247LL;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = 133229;

	t91 = (((x365^x366)<=x367)|x368);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 435;
	volatile int16_t x370 = -1;
	uint32_t x372 = 249334U;
	uint32_t t92 = 5240908U;

	t92 = (((x369^x370)<=x371)|x372);

	if (t92 != 249334U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MAX;
	static volatile uint64_t x374 = 493961213LLU;
	uint32_t x375 = 1U;
	int16_t x376 = 19;
	int32_t t93 = 0;

	t93 = (((x373^x374)<=x375)|x376);

	if (t93 != 19) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = INT8_MIN;
	int32_t x379 = -1;
	uint8_t x380 = 0U;
	int32_t t94 = 109309432;

	t94 = (((x377^x378)<=x379)|x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 4240687U;
	static volatile int32_t x382 = 4;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t95 = INT32_MIN;

	t95 = (((x381^x382)<=x383)|x384);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = 2U;
	int64_t x388 = INT64_MAX;
	int64_t t96 = INT64_MAX;

	t96 = (((x385^x386)<=x387)|x388);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 4U;
	int8_t x390 = INT8_MIN;
	static int32_t x391 = INT32_MIN;
	uint8_t x392 = UINT8_MAX;
	int32_t t97 = 2131;

	t97 = (((x389^x390)<=x391)|x392);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 25543U;

	t98 = (((x393^x394)<=x395)|x396);

	if (t98 != 853794761U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = 0;
	uint64_t x399 = 15LLU;
	int64_t x400 = -1LL;

	t99 = (((x397^x398)<=x399)|x400);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

