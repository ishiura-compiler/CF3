#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
static int16_t x4 = -272;
int32_t x9 = -1;
volatile uint16_t x23 = 24U;
static uint64_t x24 = 1LLU;
int32_t x40 = 5291389;
int32_t x42 = INT32_MIN;
static volatile uint64_t t9 = 66263183LLU;
static int64_t x47 = -89857LL;
int16_t x48 = INT16_MIN;
static uint64_t x51 = 426LLU;
uint64_t t11 = 1170452163871109LLU;
int16_t x53 = 1;
volatile uint64_t t12 = 26317383235LLU;
volatile int16_t x57 = INT16_MAX;
uint8_t x61 = UINT8_MAX;
int8_t x63 = INT8_MIN;
volatile int16_t x70 = INT16_MAX;
uint32_t x82 = 58214U;
int16_t x90 = -1;
static volatile int32_t t21 = -144;
uint8_t x93 = UINT8_MAX;
volatile int16_t x96 = INT16_MIN;
int32_t t22 = 191;
static volatile int8_t x105 = -2;
uint16_t x114 = 0U;
int16_t x116 = INT16_MAX;
int64_t t27 = -9091936LL;
int32_t x117 = INT32_MAX;
int16_t x118 = 1;
int16_t x121 = -1;
uint8_t x125 = UINT8_MAX;
static int16_t x129 = INT16_MIN;
uint16_t x130 = 6U;
int16_t x131 = INT16_MAX;
volatile int64_t x136 = INT64_MIN;
int16_t x138 = 31;
static int16_t x142 = INT16_MAX;
volatile uint64_t t35 = 1165386710741LLU;
uint8_t x161 = 0U;
static uint64_t x162 = 284567196308LLU;
uint64_t x186 = 11975LLU;
volatile uint64_t t45 = 22869156707267LLU;
static int8_t x190 = INT8_MIN;
volatile int64_t x191 = -1LL;
volatile uint32_t x192 = UINT32_MAX;
uint64_t x193 = 3245317059468LLU;
int64_t x198 = INT64_MIN;
volatile int16_t x212 = 1951;
volatile int16_t x215 = INT16_MIN;
volatile int32_t t52 = 16343534;
int64_t t53 = -62096271389175LL;
static int8_t x229 = INT8_MAX;
static uint8_t x230 = 7U;
int16_t x232 = -386;
int32_t x235 = 213089728;
int8_t x236 = -1;
volatile int64_t t57 = 147768235LL;
int8_t x244 = INT8_MAX;
int8_t x248 = 0;
static int32_t x252 = 59;
volatile int16_t x255 = 96;
int64_t t61 = -476240327575LL;
int8_t x267 = INT8_MAX;
volatile int16_t x269 = -1;
static int32_t x277 = INT32_MIN;
uint32_t x279 = UINT32_MAX;
static int16_t x284 = -1;
int64_t x286 = INT64_MIN;
uint32_t x288 = 2009877126U;
int8_t x291 = 1;
static volatile int16_t x293 = INT16_MIN;
uint32_t x295 = 1972U;
int64_t t72 = -19872209LL;
int64_t x301 = INT64_MAX;
volatile int32_t x303 = -1;
volatile int16_t x309 = 2;
int16_t x311 = -936;
int16_t x312 = INT16_MAX;
int8_t x314 = -1;
int64_t t77 = 3432886670LL;
uint8_t x321 = UINT8_MAX;
static uint32_t t78 = 39026U;
static int64_t x325 = INT64_MIN;
int8_t x327 = -1;
int8_t x329 = -1;
int64_t x333 = -1LL;
static int8_t x335 = INT8_MIN;
uint64_t x336 = UINT64_MAX;
volatile uint64_t t81 = 933196184960643114LLU;
static uint16_t x337 = UINT16_MAX;
volatile uint32_t t83 = 7U;
int16_t x346 = -150;
static uint64_t t85 = 0LLU;
int16_t x354 = -212;
int8_t x355 = 26;
static int32_t x356 = 1;
uint32_t t90 = 3977U;
static volatile int32_t x373 = -1;
uint32_t x378 = 1U;
int16_t x381 = INT16_MAX;
static uint16_t x383 = 14643U;
int32_t x386 = INT32_MAX;
int64_t x388 = INT64_MAX;
int64_t t94 = -476647653018LL;
uint64_t x392 = 145156098423646914LLU;
int8_t x394 = INT8_MIN;
int8_t x412 = INT8_MIN;


void f0(void) {
	uint64_t x1 = 5511884995563LLU;
	int8_t x2 = 0;
	static uint64_t t0 = 190348893026962LLU;

	t0 = ((x1^x2)/(x3^x4));

	if (t0 != 20339059024LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 168467;
	uint64_t x6 = 3209853LLU;
	uint32_t x7 = 617787U;
	int32_t x8 = INT32_MAX;
	volatile uint64_t t1 = 8493571992LLU;

	t1 = ((x5^x6)/(x7^x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -11194;

	t2 = ((x9^x10)/(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int8_t x18 = INT8_MAX;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t3 = -25227LL;

	t3 = ((x17^x18)/(x19^x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 4U;
	uint16_t x22 = 134U;
	volatile uint64_t t4 = 6410539LLU;

	t4 = ((x21^x22)/(x23^x24));

	if (t4 != 5LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -423;
	volatile uint64_t x26 = UINT64_MAX;
	static int32_t x27 = -9754550;
	static int64_t x28 = INT64_MIN;
	volatile uint64_t t5 = 293LLU;

	t5 = ((x25^x26)/(x27^x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 499989455;
	volatile uint64_t x30 = 8175758587545717884LLU;
	int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MAX;
	volatile uint64_t t6 = 150391871527959LLU;

	t6 = ((x29^x30)/(x31^x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = UINT32_MAX;
	uint16_t x34 = 15U;
	volatile int64_t x35 = -1159919393206448LL;
	int32_t x36 = -1;
	static volatile int64_t t7 = -584807483LL;

	t7 = ((x33^x34)/(x35^x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 505420816183LLU;
	uint8_t x38 = 48U;
	int8_t x39 = INT8_MIN;
	static volatile uint64_t t8 = 70034LLU;

	t8 = ((x37^x38)/(x39^x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x43 = 157664908157264023LLU;
	static int32_t x44 = INT32_MIN;

	t9 = ((x41^x42)/(x43^x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 9521117581765355LLU;
	int16_t x46 = -15416;
	uint64_t t10 = 113231036236491LLU;

	t10 = ((x45^x46)/(x47^x48));

	if (t10 != 249208912265355LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MAX;
	int16_t x52 = 106;

	t11 = ((x49^x50)/(x51^x52));

	if (t11 != 41175768021673033LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = -233;
	int32_t x55 = INT32_MAX;
	static uint64_t x56 = UINT64_MAX;

	t12 = ((x53^x54)/(x55^x56));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x58 = 1;
	int8_t x59 = INT8_MIN;
	uint64_t x60 = 302921375957019245LLU;
	static volatile uint64_t t13 = 49LLU;

	t13 = ((x57^x58)/(x59^x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x62 = INT64_MIN;
	uint8_t x64 = 56U;
	volatile int64_t t14 = 1LL;

	t14 = ((x61^x62)/(x63^x64));

	if (t14 != 128102389400760771LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -338643910591234874LL;
	int16_t x67 = INT16_MIN;
	static int8_t x68 = INT8_MAX;
	int64_t t15 = -1473837935482118897LL;

	t15 = ((x65^x66)/(x67^x68));

	if (t15 != -10374801974744LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	int64_t x71 = INT64_MIN;
	volatile int32_t x72 = -1;
	volatile int64_t t16 = -1089250484197843LL;

	t16 = ((x69^x70)/(x71^x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -14;
	volatile uint32_t x74 = 77875U;
	int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MIN;
	static volatile int64_t t17 = 195088855042797LL;

	t17 = ((x73^x74)/(x75^x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	volatile int64_t x78 = INT64_MIN;
	static uint16_t x79 = 1513U;
	volatile int64_t x80 = 4LL;
	volatile int64_t t18 = 951030218003976521LL;

	t18 = ((x77^x78)/(x79^x80));

	if (t18 != 6080007934643864LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	int32_t x83 = -1;
	int16_t x84 = -1812;
	volatile uint32_t t19 = 129U;

	t19 = ((x81^x82)/(x83^x84));

	if (t19 != 2371567U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 587423628415384018LL;
	uint64_t x86 = UINT64_MAX;
	static int8_t x87 = 22;
	uint64_t x88 = 23582000584856LLU;
	uint64_t t20 = 2974590851722063268LLU;

	t20 = ((x85^x86)/(x87^x88));

	if (t20 != 757328LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	static uint8_t x92 = 19U;

	t21 = ((x89^x90)/(x91^x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MAX;
	int8_t x95 = 11;

	t22 = ((x93^x94)/(x95^x96));

	if (t22 != -65557) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 1896U;
	static int32_t x98 = 2459028;
	static volatile int8_t x99 = INT8_MAX;
	uint16_t x100 = 32U;
	volatile int32_t t23 = 1013;

	t23 = ((x97^x98)/(x99^x100));

	if (t23 != 25877) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = 50670957LL;
	int8_t x102 = -12;
	volatile int16_t x103 = INT16_MIN;
	uint32_t x104 = UINT32_MAX;
	volatile int64_t t24 = -2LL;

	t24 = ((x101^x102)/(x103^x104));

	if (t24 != -1546LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = INT16_MAX;
	volatile int32_t x107 = INT32_MIN;
	uint64_t x108 = 30LLU;
	volatile uint64_t t25 = 2043418042825LLU;

	t25 = ((x105^x106)/(x107^x108));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MIN;
	volatile int32_t x111 = INT32_MAX;
	static int32_t x112 = -1;
	int64_t t26 = 239LL;

	t26 = ((x109^x110)/(x111^x112));

	if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	static int64_t x115 = INT64_MIN;

	t27 = ((x113^x114)/(x115^x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x119 = INT32_MIN;
	int64_t x120 = -1LL;
	int64_t t28 = -14LL;

	t28 = ((x117^x118)/(x119^x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = INT64_MIN;
	static uint16_t x123 = UINT16_MAX;
	static volatile int64_t x124 = -1LL;
	int64_t t29 = -484053664438411LL;

	t29 = ((x121^x122)/(x123^x124));

	if (t29 != -140737488355327LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x126 = INT64_MAX;
	uint16_t x127 = 7U;
	int64_t x128 = -1LL;
	static volatile int64_t t30 = -122963584849LL;

	t30 = ((x125^x126)/(x127^x128));

	if (t30 != -1152921504606846944LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x132 = INT32_MIN;
	static int32_t t31 = -123;

	t31 = ((x129^x130)/(x131^x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = -1;
	static uint32_t x135 = UINT32_MAX;
	volatile uint64_t t32 = 51LLU;

	t32 = ((x133^x134)/(x135^x136));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 118U;
	static volatile int8_t x139 = 11;
	int64_t x140 = INT64_MIN;
	static int64_t t33 = -67097118LL;

	t33 = ((x137^x138)/(x139^x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = -1LL;
	int32_t x143 = INT32_MIN;
	volatile int64_t x144 = -1LL;
	int64_t t34 = 30940507LL;

	t34 = ((x141^x142)/(x143^x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x145 = UINT64_MAX;
	int32_t x146 = INT32_MIN;
	static uint8_t x147 = UINT8_MAX;
	int8_t x148 = INT8_MIN;

	t35 = ((x145^x146)/(x147^x148));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 112U;
	uint16_t x150 = 598U;
	int8_t x151 = INT8_MIN;
	static int64_t x152 = INT64_MIN;
	int64_t t36 = -10LL;

	t36 = ((x149^x150)/(x151^x152));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = -13489;
	uint16_t x154 = UINT16_MAX;
	int8_t x155 = 12;
	int32_t x156 = 1049553641;
	volatile int32_t t37 = -1;

	t37 = ((x153^x154)/(x155^x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x157 = 1348U;
	int8_t x158 = INT8_MAX;
	volatile uint32_t x159 = 270847U;
	volatile int64_t x160 = -3573883736929LL;
	int64_t t38 = -4714834LL;

	t38 = ((x157^x158)/(x159^x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	uint64_t t39 = 3238LLU;

	t39 = ((x161^x162)/(x163^x164));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = 86;
	int64_t x166 = -21252000044LL;
	int32_t x167 = -1;
	static int16_t x168 = -19;
	volatile int64_t t40 = -1151294169214676LL;

	t40 = ((x165^x166)/(x167^x168));

	if (t40 != -1180666673LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 1;
	static volatile uint64_t x170 = 299575015LLU;
	static int8_t x171 = -1;
	volatile uint32_t x172 = 727U;
	uint64_t t41 = 1857199639118398636LLU;

	t41 = ((x169^x170)/(x171^x172));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MAX;
	static volatile int8_t x174 = INT8_MAX;
	int8_t x175 = -1;
	volatile int8_t x176 = INT8_MAX;
	int64_t t42 = -2892168000535478611LL;

	t42 = ((x173^x174)/(x175^x176));

	if (t42 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x178 = UINT32_MAX;
	uint32_t x179 = 1701899U;
	volatile int32_t x180 = INT32_MAX;
	volatile uint32_t t43 = 123858128U;

	t43 = ((x177^x178)/(x179^x180));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x181 = 1802075405U;
	volatile int16_t x182 = -12279;
	int64_t x183 = -109124632701746LL;
	int32_t x184 = -6;
	int64_t t44 = 54LL;

	t44 = ((x181^x182)/(x183^x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 60671370860LLU;
	static uint32_t x187 = 86896241U;
	int64_t x188 = 94979014652LL;

	t45 = ((x185^x186)/(x187^x188));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = -1;
	int64_t t46 = -235LL;

	t46 = ((x189^x190)/(x191^x192));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x194 = -1;
	int16_t x195 = -54;
	volatile uint8_t x196 = 107U;
	uint64_t t47 = 26186LLU;

	t47 = ((x193^x194)/(x195^x196));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x197 = -1;
	int16_t x199 = -1;
	int16_t x200 = 41;
	volatile int64_t t48 = -1811955163593101LL;

	t48 = ((x197^x198)/(x199^x200));

	if (t48 != -219604096115589900LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -22296030391273244LL;
	int16_t x202 = INT16_MIN;
	int8_t x203 = 12;
	uint8_t x204 = 69U;
	int64_t t49 = 125340371296LL;

	t49 = ((x201^x202)/(x203^x204));

	if (t49 != 305425073853457LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = -1;
	int64_t x210 = INT64_MIN;
	static volatile int16_t x211 = -1;
	volatile int64_t t50 = 7462790348508LL;

	t50 = ((x209^x210)/(x211^x212));

	if (t50 != -4725088133634618LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x213 = -1;
	int32_t x214 = 9819;
	int8_t x216 = 0;
	volatile int32_t t51 = -241039836;

	t51 = ((x213^x214)/(x215^x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x218 = 0;
	uint16_t x219 = 0U;
	static volatile uint16_t x220 = 12U;

	t52 = ((x217^x218)/(x219^x220));

	if (t52 != -10) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -12;
	volatile int16_t x222 = -118;
	static int32_t x223 = INT32_MIN;
	volatile int64_t x224 = INT64_MIN;

	t53 = ((x221^x222)/(x223^x224));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	volatile int32_t x226 = -430;
	volatile uint64_t x227 = 37643166LLU;
	static uint64_t x228 = 367519526415061945LLU;
	uint64_t t54 = 3595457696631832LLU;

	t54 = ((x225^x226)/(x227^x228));

	if (t54 != 50LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x231 = 7;
	volatile int32_t t55 = 8026;

	t55 = ((x229^x230)/(x231^x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MAX;
	int64_t t56 = 1879119099234300860LL;

	t56 = ((x233^x234)/(x235^x236));

	if (t56 != 43283982199LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = 0LL;
	int16_t x239 = -1;
	volatile uint16_t x240 = 6U;

	t57 = ((x237^x238)/(x239^x240));

	if (t57 != 306783378LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x241 = INT16_MIN;
	int64_t x242 = INT64_MAX;
	static uint8_t x243 = 0U;
	int64_t t58 = -984284502336LL;

	t58 = ((x241^x242)/(x243^x244));

	if (t58 != -72624976668147583LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = INT8_MIN;
	uint32_t x247 = UINT32_MAX;
	static uint32_t t59 = 4493U;

	t59 = ((x245^x246)/(x247^x248));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 53191876590LLU;
	static int32_t x250 = INT32_MAX;
	static int32_t x251 = INT32_MIN;
	uint64_t t60 = 80926159108588733LLU;

	t60 = ((x249^x250)/(x251^x252));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = 4;
	int8_t x254 = -1;
	int64_t x256 = -30LL;

	t61 = ((x253^x254)/(x255^x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x257 = INT16_MIN;
	uint64_t x258 = UINT64_MAX;
	static uint64_t x259 = 240237927935633228LLU;
	int32_t x260 = 24925;
	uint64_t t62 = 501720437475LLU;

	t62 = ((x257^x258)/(x259^x260));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = 0U;
	int16_t x262 = INT16_MIN;
	int16_t x263 = 497;
	static uint64_t x264 = 225531LLU;
	volatile uint64_t t63 = 21LLU;

	t63 = ((x261^x262)/(x263^x264));

	if (t63 != 19042LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x265 = 36U;
	static uint64_t x266 = UINT64_MAX;
	uint64_t x268 = 109649206LLU;
	volatile uint64_t t64 = 11895840264439327LLU;

	t64 = ((x265^x266)/(x267^x268));

	if (t64 != 168234149158LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x270 = UINT32_MAX;
	int16_t x271 = 39;
	int32_t x272 = -1;
	volatile uint32_t t65 = 570848U;

	t65 = ((x269^x270)/(x271^x272));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = 0;
	static int8_t x274 = INT8_MIN;
	uint8_t x275 = 22U;
	int16_t x276 = INT16_MAX;
	static volatile int32_t t66 = -142639;

	t66 = ((x273^x274)/(x275^x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x278 = INT16_MIN;
	static int32_t x280 = INT32_MAX;
	volatile uint32_t t67 = 5944589U;

	t67 = ((x277^x278)/(x279^x280));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = 42;
	volatile int64_t x282 = INT64_MIN;
	uint32_t x283 = 3911U;
	volatile int64_t t68 = 11932717414415892LL;

	t68 = ((x281^x282)/(x283^x284));

	if (t68 != -2147485604LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = -1LL;
	static int32_t x287 = INT32_MAX;
	volatile int64_t t69 = -294206LL;

	t69 = ((x285^x286)/(x287^x288));

	if (t69 != 67027143552LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 116U;
	static int64_t x290 = INT64_MAX;
	int32_t x292 = -13;
	int64_t t70 = -294505421684LL;

	t70 = ((x289^x290)/(x291^x292));

	if (t70 != -658812288346769692LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x294 = -1LL;
	int64_t x296 = -24746918298254088LL;
	int64_t t71 = -52848209129910LL;

	t71 = ((x293^x294)/(x295^x296));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = 22634;
	uint32_t x298 = 62088U;
	volatile int64_t x299 = -1LL;
	uint8_t x300 = 16U;

	t72 = ((x297^x298)/(x299^x300));

	if (t72 != -2573LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x302 = 79U;
	static uint16_t x304 = 14U;
	static volatile int64_t t73 = -1995982LL;

	t73 = ((x301^x302)/(x303^x304));

	if (t73 != -614891469123651715LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -458153806569690LL;
	static int8_t x306 = 0;
	volatile uint8_t x307 = 102U;
	static int32_t x308 = 46;
	volatile int64_t t74 = -4098943776664091LL;

	t74 = ((x305^x306)/(x307^x308));

	if (t74 != -6363247313467LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x310 = 28U;
	static volatile int32_t t75 = 29;

	t75 = ((x309^x310)/(x311^x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x313 = 26LLU;
	int16_t x315 = -1;
	uint8_t x316 = 52U;
	uint64_t t76 = 4LLU;

	t76 = ((x313^x314)/(x315^x316));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -1;
	int8_t x318 = -5;
	static int64_t x319 = INT64_MAX;
	static int8_t x320 = INT8_MAX;

	t77 = ((x317^x318)/(x319^x320));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x322 = 46U;
	static int8_t x323 = INT8_MIN;
	int8_t x324 = 1;

	t78 = ((x321^x322)/(x323^x324));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x326 = -5;
	static int16_t x328 = -25;
	int64_t t79 = -446162789809011LL;

	t79 = ((x325^x326)/(x327^x328));

	if (t79 != 384307168202282325LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x330 = 14037U;
	int16_t x331 = 11465;
	int16_t x332 = 189;
	uint32_t t80 = 7U;

	t80 = ((x329^x330)/(x331^x332));

	if (t80 != 377412U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x334 = INT64_MIN;

	t81 = ((x333^x334)/(x335^x336));

	if (t81 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x338 = -2;
	static int8_t x339 = INT8_MAX;
	volatile int8_t x340 = 50;
	volatile int32_t t82 = 501;

	t82 = ((x337^x338)/(x339^x340));

	if (t82 != -851) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x341 = 1U;
	uint8_t x342 = UINT8_MAX;
	uint32_t x343 = 1433775U;
	volatile int8_t x344 = INT8_MIN;

	t83 = ((x341^x342)/(x343^x344));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x345 = INT64_MAX;
	static volatile uint16_t x347 = UINT16_MAX;
	int16_t x348 = -2653;
	volatile int64_t t84 = 115421085LL;

	t84 = ((x345^x346)/(x347^x348));

	if (t84 != 146672794937579LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -50;
	uint64_t x350 = UINT64_MAX;
	volatile int16_t x351 = INT16_MIN;
	int64_t x352 = INT64_MAX;

	t85 = ((x349^x350)/(x351^x352));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	volatile int32_t t86 = -804798;

	t86 = ((x353^x354)/(x355^x356));

	if (t86 != 1205) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = UINT32_MAX;
	volatile uint64_t x358 = UINT64_MAX;
	static uint8_t x359 = 1U;
	int8_t x360 = INT8_MIN;
	static volatile uint64_t t87 = 2028520764LLU;

	t87 = ((x357^x358)/(x359^x360));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x361 = 10454201LL;
	static uint32_t x362 = 4114570U;
	volatile int64_t x363 = INT64_MIN;
	int64_t x364 = -1LL;
	volatile int64_t t88 = 18966176962889044LL;

	t88 = ((x361^x362)/(x363^x364));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = 99315029920LL;
	uint32_t x366 = 1077762836U;
	int16_t x367 = INT16_MIN;
	int8_t x368 = -1;
	int64_t t89 = 70572033889583563LL;

	t89 = ((x365^x366)/(x367^x368));

	if (t89 != 3063706LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x369 = INT32_MAX;
	uint8_t x370 = UINT8_MAX;
	volatile int8_t x371 = 7;
	uint32_t x372 = 44U;

	t90 = ((x369^x370)/(x371^x372));

	if (t90 != 49941474U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x374 = 31959LLU;
	int8_t x375 = 6;
	static uint8_t x376 = UINT8_MAX;
	volatile uint64_t t91 = 2487956401159LLU;

	t91 = ((x373^x374)/(x375^x376));

	if (t91 != 74083309532969958LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x377 = UINT16_MAX;
	static int16_t x379 = -1;
	static int8_t x380 = INT8_MIN;
	uint32_t t92 = 969381234U;

	t92 = ((x377^x378)/(x379^x380));

	if (t92 != 516U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x382 = 151U;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t93 = 3;

	t93 = ((x381^x382)/(x383^x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x385 = -169;
	uint16_t x387 = UINT16_MAX;

	t94 = ((x385^x386)/(x387^x388));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = -1;
	int16_t x390 = -1;
	static uint64_t x391 = 81LLU;
	uint64_t t95 = 696LLU;

	t95 = ((x389^x390)/(x391^x392));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MIN;
	static uint8_t x395 = UINT8_MAX;
	volatile uint16_t x396 = 11452U;
	volatile int32_t t96 = 2796;

	t96 = ((x393^x394)/(x395^x396));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x397 = UINT8_MAX;
	uint32_t x398 = 15U;
	int64_t x399 = -1LL;
	static int32_t x400 = INT32_MIN;
	static volatile int64_t t97 = 946614823LL;

	t97 = ((x397^x398)/(x399^x400));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x401 = UINT8_MAX;
	uint32_t x402 = UINT32_MAX;
	int32_t x403 = INT32_MAX;
	int8_t x404 = INT8_MIN;
	volatile uint32_t t98 = 582314420U;

	t98 = ((x401^x402)/(x403^x404));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	uint8_t x410 = UINT8_MAX;
	int32_t x411 = -1;
	int32_t t99 = 322130;

	t99 = ((x409^x410)/(x411^x412));

	if (t99 != -16909318) { NG(); } else { ; }
	
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

