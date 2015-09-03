#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 1;
uint32_t x19 = UINT32_MAX;
volatile int16_t x20 = INT16_MIN;
int32_t t4 = -14;
uint32_t x21 = 853763U;
static int8_t x23 = INT8_MIN;
volatile int64_t x28 = -23016167454LL;
int32_t x33 = 1011;
volatile uint64_t x35 = UINT64_MAX;
int32_t t11 = -1944;
volatile uint64_t x49 = UINT64_MAX;
volatile int32_t t12 = 15842987;
int8_t x53 = INT8_MIN;
int16_t x55 = INT16_MAX;
volatile int32_t t14 = 3645323;
uint64_t x64 = 5736LLU;
int16_t x71 = -1;
int16_t x75 = INT16_MIN;
int16_t x77 = INT16_MIN;
int32_t t20 = 44;
int8_t x85 = INT8_MAX;
static int32_t x90 = INT32_MAX;
static volatile uint8_t x96 = UINT8_MAX;
int16_t x99 = INT16_MIN;
volatile int32_t t24 = -822;
volatile int8_t x101 = 2;
int64_t x104 = -1LL;
int64_t x112 = 195256181126877LL;
uint32_t x118 = UINT32_MAX;
uint64_t x119 = 40LLU;
int8_t x120 = 21;
int32_t x129 = INT32_MAX;
uint8_t x137 = 125U;
uint8_t x158 = 0U;
static int8_t x160 = 0;
volatile int32_t t39 = 168599;
int32_t x176 = INT32_MIN;
int32_t x177 = INT32_MIN;
volatile int16_t x185 = INT16_MAX;
int8_t x187 = INT8_MAX;
int64_t x190 = -1LL;
int16_t x194 = -1;
volatile int32_t t48 = -11;
static int16_t x198 = 13932;
int16_t x199 = 3759;
uint8_t x211 = UINT8_MAX;
int16_t x212 = INT16_MIN;
int8_t x216 = INT8_MIN;
int64_t x220 = INT64_MAX;
int32_t t54 = -56486;
volatile int16_t x223 = INT16_MAX;
int16_t x225 = INT16_MAX;
int8_t x232 = INT8_MAX;
uint8_t x248 = 1U;
uint16_t x249 = 30304U;
int32_t x251 = -1;
static uint8_t x252 = UINT8_MAX;
volatile int32_t t62 = -3788;
uint32_t x253 = 29U;
int64_t x259 = INT64_MIN;
static volatile uint16_t x264 = UINT16_MAX;
uint16_t x265 = 968U;
int8_t x272 = INT8_MAX;
int8_t x276 = -1;
int32_t t68 = 7;
int16_t x279 = INT16_MIN;
int16_t x281 = 243;
uint16_t x282 = 1139U;
int16_t x288 = INT16_MIN;
static int32_t t71 = 51;
int64_t x292 = -1LL;
int8_t x299 = -3;
int8_t x300 = INT8_MIN;
static int32_t t74 = -105813029;
int64_t x304 = INT64_MIN;
static int32_t t76 = -671545;
int64_t x309 = -1LL;
volatile int32_t t77 = -19;
int32_t x314 = INT32_MAX;
static uint16_t x316 = UINT16_MAX;
uint64_t x318 = UINT64_MAX;
int16_t x321 = -1;
volatile int32_t t82 = -57;
volatile uint32_t x338 = 88279U;
int8_t x342 = INT8_MAX;
int8_t x344 = INT8_MIN;
int16_t x350 = -7538;
static int16_t x356 = INT16_MIN;
static uint16_t x357 = 462U;
int16_t x363 = INT16_MAX;
int32_t t90 = 2;
volatile uint32_t x368 = UINT32_MAX;
uint8_t x370 = UINT8_MAX;
uint32_t x374 = 3640757U;
volatile int64_t x377 = INT64_MIN;
static volatile int32_t x380 = -1;
int32_t t96 = 382;
uint64_t x391 = UINT64_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = -1;
	int16_t x3 = 12;
	int16_t x4 = -1;
	int32_t t0 = -31;

	t0 = ((x1<x2)+(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 14U;
	static int8_t x6 = INT8_MAX;
	uint8_t x7 = 4U;
	int32_t x8 = -1;

	t1 = ((x5<x6)+(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -10776;
	int8_t x10 = INT8_MIN;
	uint32_t x11 = UINT32_MAX;
	uint32_t x12 = 208U;
	volatile int32_t t2 = 987;

	t2 = ((x9<x10)+(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint16_t x14 = 2U;
	int32_t x15 = -1;
	static uint8_t x16 = 107U;
	static int32_t t3 = 3;

	t3 = ((x13<x14)+(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 22947U;
	int8_t x18 = -1;

	t4 = ((x17<x18)+(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	volatile int16_t x24 = -1784;
	int32_t t5 = -356123208;

	t5 = ((x21<x22)+(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint32_t x26 = 7U;
	uint8_t x27 = 60U;
	int32_t t6 = -35075;

	t6 = ((x25<x26)+(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	volatile int16_t x30 = INT16_MIN;
	int8_t x31 = 1;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -43654;

	t7 = ((x29<x30)+(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	int64_t x36 = -2LL;
	volatile int32_t t8 = 35;

	t8 = ((x33<x34)+(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = UINT8_MAX;
	static int32_t x38 = -12620;
	int64_t x39 = INT64_MAX;
	int8_t x40 = -9;
	int32_t t9 = -175111;

	t9 = ((x37<x38)+(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = 0;
	int64_t x42 = 5624512218514662LL;
	int8_t x43 = -1;
	uint16_t x44 = 125U;
	volatile int32_t t10 = 0;

	t10 = ((x41<x42)+(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int64_t x46 = -11156448388564LL;
	int8_t x47 = INT8_MIN;
	int64_t x48 = -1LL;

	t11 = ((x45<x46)+(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -52158543379LL;
	int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MIN;

	t12 = ((x49<x50)+(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 204U;
	volatile int8_t x56 = -31;
	int32_t t13 = 44028093;

	t13 = ((x53<x54)+(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	static int32_t x58 = INT32_MAX;
	static int32_t x59 = INT32_MIN;
	static uint32_t x60 = UINT32_MAX;

	t14 = ((x57<x58)+(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = INT16_MAX;
	uint64_t x62 = 1488906084LLU;
	static uint16_t x63 = UINT16_MAX;
	int32_t t15 = -1060651837;

	t15 = ((x61<x62)+(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = 15;
	volatile uint32_t x66 = 327188U;
	uint32_t x67 = 291357966U;
	uint64_t x68 = 95LLU;
	int32_t t16 = 0;

	t16 = ((x65<x66)+(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int64_t x70 = 204850009339431LL;
	int64_t x72 = 6642926165LL;
	static volatile int32_t t17 = 2;

	t17 = ((x69<x70)+(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint64_t x74 = 1018453925260811388LLU;
	int16_t x76 = INT16_MAX;
	int32_t t18 = 959291;

	t18 = ((x73<x74)+(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = INT16_MIN;
	uint8_t x79 = 0U;
	int32_t x80 = INT32_MAX;
	int32_t t19 = -9;

	t19 = ((x77<x78)+(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 55295363LLU;
	int8_t x82 = INT8_MIN;
	static uint8_t x83 = 1U;
	static volatile int16_t x84 = INT16_MIN;

	t20 = ((x81<x82)+(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x86 = 48163384U;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 705853998;

	t21 = ((x85<x86)+(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 47;
	int32_t x91 = INT32_MIN;
	volatile int64_t x92 = INT64_MIN;
	int32_t t22 = 95070;

	t22 = ((x89<x90)+(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MAX;
	volatile uint32_t x95 = 2046355123U;
	volatile int32_t t23 = -7198;

	t23 = ((x93<x94)+(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	static int8_t x98 = INT8_MIN;
	int8_t x100 = -1;

	t24 = ((x97<x98)+(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	static int64_t x103 = 28043340912LL;
	int32_t t25 = 28265847;

	t25 = ((x101<x102)+(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 14763093171657LLU;
	int8_t x106 = INT8_MAX;
	volatile int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = 85478;

	t26 = ((x105<x106)+(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = 86345122LL;
	static uint64_t x110 = UINT64_MAX;
	static int64_t x111 = -1LL;
	volatile int32_t t27 = 1;

	t27 = ((x109<x110)+(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 1147U;
	uint16_t x114 = 2U;
	static int32_t x115 = -1;
	uint8_t x116 = UINT8_MAX;
	int32_t t28 = -422;

	t28 = ((x113<x114)+(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -629;
	int32_t t29 = 10;

	t29 = ((x117<x118)+(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static uint32_t x122 = 4974U;
	static uint32_t x123 = 21U;
	static volatile uint64_t x124 = 3208737LLU;
	int32_t t30 = -20346605;

	t30 = ((x121<x122)+(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	static volatile int8_t x126 = INT8_MIN;
	uint64_t x127 = 21556010819204LLU;
	volatile uint64_t x128 = 1349059LLU;
	volatile int32_t t31 = -22;

	t31 = ((x125<x126)+(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = 5550;
	int64_t x131 = INT64_MAX;
	static int64_t x132 = -2906340819908LL;
	volatile int32_t t32 = -13;

	t32 = ((x129<x130)+(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1;
	uint16_t x134 = 64U;
	int8_t x135 = 15;
	static uint8_t x136 = 55U;
	int32_t t33 = -352;

	t33 = ((x133<x134)+(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x138 = 63172685967743594LL;
	uint8_t x139 = 4U;
	uint32_t x140 = 12U;
	volatile int32_t t34 = -1;

	t34 = ((x137<x138)+(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile uint8_t x142 = UINT8_MAX;
	int16_t x143 = -3326;
	int16_t x144 = 0;
	int32_t t35 = 358914;

	t35 = ((x141<x142)+(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = UINT32_MAX;
	volatile uint32_t x146 = 54221488U;
	uint8_t x147 = 2U;
	uint8_t x148 = UINT8_MAX;
	static int32_t t36 = 189;

	t36 = ((x145<x146)+(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 7661470;
	static int64_t x150 = INT64_MIN;
	int8_t x151 = -1;
	static volatile int32_t x152 = INT32_MAX;
	int32_t t37 = -1;

	t37 = ((x149<x150)+(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 53;
	uint64_t x154 = 143455312546LLU;
	static int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MAX;
	int32_t t38 = -31873;

	t38 = ((x153<x154)+(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = 26026914369LL;
	uint8_t x159 = UINT8_MAX;

	t39 = ((x157<x158)+(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	int64_t x162 = -1LL;
	static uint8_t x163 = UINT8_MAX;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = 58;

	t40 = ((x161<x162)+(x163==x164));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = 12270;
	uint8_t x166 = 0U;
	static int64_t x167 = INT64_MAX;
	uint64_t x168 = UINT64_MAX;
	static volatile int32_t t41 = -88;

	t41 = ((x165<x166)+(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = -1LL;
	uint8_t x171 = 6U;
	int32_t x172 = -1;
	int32_t t42 = 14084;

	t42 = ((x169<x170)+(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = 2;
	uint8_t x174 = 33U;
	int8_t x175 = INT8_MAX;
	int32_t t43 = 161249520;

	t43 = ((x173<x174)+(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MIN;
	volatile uint16_t x179 = 291U;
	static int8_t x180 = 0;
	static int32_t t44 = -1281;

	t44 = ((x177<x178)+(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	volatile uint64_t x182 = 11525058LLU;
	uint64_t x183 = 1070LLU;
	static volatile int32_t x184 = INT32_MIN;
	int32_t t45 = -109;

	t45 = ((x181<x182)+(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x186 = INT8_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t46 = 829623287;

	t46 = ((x185<x186)+(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x189 = INT8_MIN;
	int64_t x191 = 310812851LL;
	int8_t x192 = -1;
	int32_t t47 = -513505557;

	t47 = ((x189<x190)+(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = UINT32_MAX;
	static int64_t x195 = INT64_MIN;
	uint8_t x196 = 3U;

	t48 = ((x193<x194)+(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static int32_t x200 = -7;
	int32_t t49 = -155369;

	t49 = ((x197<x198)+(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 2953LL;
	volatile uint32_t x202 = UINT32_MAX;
	uint64_t x203 = 8530029043022LLU;
	int32_t x204 = 63543;
	volatile int32_t t50 = -2588;

	t50 = ((x201<x202)+(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = UINT8_MAX;
	int8_t x206 = 0;
	int64_t x207 = -2708722713743373943LL;
	static uint32_t x208 = 868321058U;
	volatile int32_t t51 = 3;

	t51 = ((x205<x206)+(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MIN;
	int32_t t52 = -76535096;

	t52 = ((x209<x210)+(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MAX;
	volatile int32_t t53 = 13242;

	t53 = ((x213<x214)+(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -800328083LL;
	int16_t x218 = INT16_MAX;
	int8_t x219 = 12;

	t54 = ((x217<x218)+(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	volatile uint8_t x222 = UINT8_MAX;
	int16_t x224 = -1;
	static int32_t t55 = 903582;

	t55 = ((x221<x222)+(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -20;
	uint64_t x227 = UINT64_MAX;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = 147;

	t56 = ((x225<x226)+(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = -1LL;
	int8_t x231 = INT8_MIN;
	volatile int32_t t57 = 8;

	t57 = ((x229<x230)+(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 12628561214196LLU;
	static uint16_t x234 = 1020U;
	uint8_t x235 = 124U;
	uint8_t x236 = 2U;
	static int32_t t58 = 394038698;

	t58 = ((x233<x234)+(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint8_t x238 = 3U;
	volatile int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -74152144;

	t59 = ((x237<x238)+(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	int32_t x242 = -1;
	static int8_t x243 = -1;
	int8_t x244 = INT8_MAX;
	int32_t t60 = 94161256;

	t60 = ((x241<x242)+(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 23U;
	uint8_t x246 = 0U;
	static uint8_t x247 = UINT8_MAX;
	int32_t t61 = 2385988;

	t61 = ((x245<x246)+(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;

	t62 = ((x249<x250)+(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x254 = -1LL;
	int16_t x255 = -1;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = -4;

	t63 = ((x253<x254)+(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	volatile int16_t x258 = 7;
	int32_t x260 = -21431;
	volatile int32_t t64 = -788;

	t64 = ((x257<x258)+(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	volatile int16_t x262 = INT16_MIN;
	volatile uint16_t x263 = 10U;
	static volatile int32_t t65 = 319;

	t65 = ((x261<x262)+(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = INT16_MIN;
	uint16_t x267 = UINT16_MAX;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 182448387;

	t66 = ((x265<x266)+(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	uint8_t x270 = 86U;
	int32_t x271 = INT32_MAX;
	static int32_t t67 = 3166;

	t67 = ((x269<x270)+(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = 3447771;
	int32_t x274 = -1;
	int64_t x275 = INT64_MIN;

	t68 = ((x273<x274)+(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	int16_t x278 = 910;
	int64_t x280 = 196LL;
	volatile int32_t t69 = 743688756;

	t69 = ((x277<x278)+(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x283 = -1;
	uint8_t x284 = 63U;
	volatile int32_t t70 = 1046894924;

	t70 = ((x281<x282)+(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 4247261663629LLU;
	volatile int64_t x286 = -307689559709302542LL;
	volatile int64_t x287 = 94057944314765592LL;

	t71 = ((x285<x286)+(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static int8_t x290 = -1;
	static uint8_t x291 = 1U;
	volatile int32_t t72 = -49132460;

	t72 = ((x289<x290)+(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 132248U;
	int16_t x294 = 60;
	uint32_t x295 = 9814U;
	int16_t x296 = -1;
	volatile int32_t t73 = 2936;

	t73 = ((x293<x294)+(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = 16;
	int32_t x298 = -1;

	t74 = ((x297<x298)+(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x302 = -35788678187497170LL;
	int16_t x303 = INT16_MIN;
	int32_t t75 = -1408613;

	t75 = ((x301<x302)+(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	static int16_t x306 = INT16_MIN;
	int32_t x307 = -1;
	int32_t x308 = -1;

	t76 = ((x305<x306)+(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = UINT64_MAX;
	static volatile uint64_t x311 = UINT64_MAX;
	volatile int64_t x312 = 14LL;

	t77 = ((x309<x310)+(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 0;
	int64_t x315 = 10262LL;
	static volatile int32_t t78 = 2212803;

	t78 = ((x313<x314)+(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -9;
	int16_t x319 = 26;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = -725032575;

	t79 = ((x317<x318)+(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x322 = INT8_MIN;
	int16_t x323 = 3;
	volatile uint16_t x324 = 2966U;
	int32_t t80 = 0;

	t80 = ((x321<x322)+(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	volatile uint16_t x326 = 6U;
	int8_t x327 = -15;
	volatile int16_t x328 = INT16_MAX;
	volatile int32_t t81 = 5;

	t81 = ((x325<x326)+(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 900U;
	uint64_t x330 = 13048550645LLU;
	static volatile int64_t x331 = -1LL;
	static uint16_t x332 = 4981U;

	t82 = ((x329<x330)+(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MAX;
	uint8_t x334 = 4U;
	int32_t x335 = -34;
	int32_t x336 = INT32_MIN;
	static int32_t t83 = 25928067;

	t83 = ((x333<x334)+(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	uint32_t x339 = UINT32_MAX;
	int8_t x340 = -1;
	int32_t t84 = 346079;

	t84 = ((x337<x338)+(x339==x340));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 244388387U;
	int8_t x343 = INT8_MIN;
	int32_t t85 = 17223;

	t85 = ((x341<x342)+(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	uint8_t x346 = UINT8_MAX;
	int32_t x347 = -1;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = -99;

	t86 = ((x345<x346)+(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int16_t x351 = INT16_MIN;
	static int64_t x352 = INT64_MIN;
	int32_t t87 = 9773;

	t87 = ((x349<x350)+(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MAX;
	int64_t x355 = -1LL;
	static int32_t t88 = 5658;

	t88 = ((x353<x354)+(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = 261011U;
	int32_t x359 = INT32_MIN;
	volatile uint8_t x360 = 28U;
	static volatile int32_t t89 = -10524996;

	t89 = ((x357<x358)+(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 42U;
	volatile int8_t x362 = INT8_MAX;
	uint32_t x364 = 15U;

	t90 = ((x361<x362)+(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 49U;
	uint64_t x366 = 238851644053891LLU;
	int32_t x367 = INT32_MAX;
	volatile int32_t t91 = -49693936;

	t91 = ((x365<x366)+(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 1U;
	int8_t x371 = INT8_MIN;
	int16_t x372 = -1;
	volatile int32_t t92 = -1114407;

	t92 = ((x369<x370)+(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 503035741382LLU;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	int32_t t93 = -7936776;

	t93 = ((x373<x374)+(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = UINT64_MAX;
	volatile int64_t x379 = 79111154733812LL;
	volatile int32_t t94 = 118922;

	t94 = ((x377<x378)+(x379==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -14;
	volatile int16_t x382 = INT16_MAX;
	int16_t x383 = -1;
	int64_t x384 = 720055052133212LL;
	volatile int32_t t95 = 71212;

	t95 = ((x381<x382)+(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 1596U;
	uint16_t x386 = 31377U;
	int32_t x387 = INT32_MIN;
	static uint16_t x388 = UINT16_MAX;

	t96 = ((x385<x386)+(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MAX;
	static uint16_t x390 = 3664U;
	int16_t x392 = INT16_MIN;
	int32_t t97 = 1;

	t97 = ((x389<x390)+(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MAX;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = 59578638U;
	static volatile int32_t t98 = -120554;

	t98 = ((x393<x394)+(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = 908761096024963LL;
	uint8_t x398 = 3U;
	volatile int16_t x399 = INT16_MIN;
	static int16_t x400 = 3;
	static volatile int32_t t99 = -386115599;

	t99 = ((x397<x398)+(x399==x400));

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

