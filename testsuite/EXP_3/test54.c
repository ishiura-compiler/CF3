#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -602470508;
uint8_t x6 = 1U;
static int8_t x8 = 13;
int8_t x11 = -1;
static volatile uint64_t t2 = 3577LLU;
int64_t x28 = INT64_MAX;
static uint64_t t6 = 13054867875LLU;
volatile uint64_t t9 = 4229LLU;
int16_t x46 = -1;
int8_t x53 = INT8_MAX;
static int16_t x56 = INT16_MAX;
uint8_t x57 = UINT8_MAX;
int32_t x61 = INT32_MIN;
uint8_t x63 = 1U;
int32_t t14 = -249636;
uint8_t x66 = 19U;
static int64_t x70 = 1244327LL;
int8_t x71 = 13;
volatile int64_t x72 = 16794841380999LL;
static volatile int64_t t16 = -27168003367LL;
uint64_t x73 = UINT64_MAX;
static volatile int64_t x76 = -1LL;
uint16_t x84 = UINT16_MAX;
int64_t x86 = INT64_MIN;
int16_t x87 = -1;
uint64_t x91 = 1457923049LLU;
volatile uint8_t x95 = UINT8_MAX;
int16_t x97 = -1;
uint8_t x101 = UINT8_MAX;
int16_t x102 = INT16_MAX;
volatile int32_t t23 = 63280458;
int8_t x105 = -1;
int16_t x113 = INT16_MAX;
static volatile int16_t x114 = 383;
volatile uint64_t x117 = 18708LLU;
uint64_t t27 = 196294349529760267LLU;
int16_t x127 = INT16_MAX;
uint16_t x128 = 6067U;
volatile int64_t t29 = 37117962LL;
uint32_t x142 = 2447U;
int64_t t34 = 519195744LL;
static volatile int8_t x152 = INT8_MAX;
static uint8_t x159 = UINT8_MAX;
uint32_t t37 = 1527674220U;
int64_t x165 = INT64_MIN;
uint64_t t38 = 11132793380156LLU;
volatile int64_t t41 = 13477820LL;
volatile int32_t x193 = -125;
volatile int32_t x205 = -340203;
static uint16_t x207 = UINT16_MAX;
int64_t x216 = 141275806LL;
static uint16_t x226 = UINT16_MAX;
uint64_t t47 = 1LLU;
volatile uint64_t x231 = 1LLU;
uint64_t t48 = 13610480541056LLU;
uint8_t x236 = UINT8_MAX;
int32_t t49 = 21;
int16_t x237 = INT16_MAX;
int64_t t50 = -250404363LL;
uint64_t x254 = 744815409119056LLU;
uint16_t x258 = UINT16_MAX;
uint8_t x260 = 21U;
int32_t t55 = 189337;
volatile int32_t t56 = 325073208;
int8_t x274 = INT8_MIN;
uint32_t x301 = UINT32_MAX;
uint32_t t62 = 200U;
volatile uint64_t t64 = 14821574LLU;
int32_t x314 = INT32_MIN;
int32_t x316 = -7804221;
volatile int16_t x325 = INT16_MAX;
volatile uint64_t t68 = 1614443261LLU;
static int8_t x331 = INT8_MIN;
int8_t x332 = INT8_MIN;
uint64_t x343 = UINT64_MAX;
uint32_t x344 = 4U;
static int32_t x346 = -9;
volatile int32_t x348 = -1;
uint16_t x349 = 49U;
volatile int8_t x356 = 1;
uint16_t x357 = 3U;
uint32_t t75 = 85437878U;
int16_t x364 = 85;
uint8_t x369 = 13U;
volatile int32_t t78 = 22479;
static uint16_t x374 = 2U;
int16_t x375 = -103;
volatile uint32_t t80 = 69701U;
static uint8_t x382 = 3U;
uint64_t x386 = UINT64_MAX;
volatile int16_t x396 = 0;
static int32_t x400 = 1045098;
volatile int64_t t86 = -742401LL;
int64_t x426 = -60603918319LL;
int8_t x430 = INT8_MIN;
volatile int8_t x443 = -1;
int16_t x445 = INT16_MIN;
int64_t t96 = INT64_MAX;
int8_t x461 = INT8_MAX;
static volatile int64_t t98 = -494914229913246LL;
uint64_t x467 = 578633438168886992LLU;


void f0(void) {
	int16_t x1 = -774;
	static volatile uint8_t x2 = UINT8_MAX;
	int8_t x3 = -1;
	int32_t x4 = -1;

	t0 = ((x1%x2)-(x3+x4));

	if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	uint64_t x7 = 0LLU;
	volatile uint64_t t1 = 24937805LLU;

	t1 = ((x5%x6)-(x7+x8));

	if (t1 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 23312LL;
	uint64_t x10 = UINT64_MAX;
	uint64_t x12 = 534014590LLU;

	t2 = ((x9%x10)-(x11+x12));

	if (t2 != 18446744073175560339LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int32_t x14 = -544394;
	uint32_t x15 = UINT32_MAX;
	volatile int16_t x16 = -655;
	uint32_t t3 = 116757U;

	t3 = ((x13%x14)-(x15+x16));

	if (t3 != 655U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 4377;
	int32_t x18 = 372927934;
	static int8_t x19 = -1;
	uint64_t x20 = 8117540417435059138LLU;
	uint64_t t4 = 121644530280LLU;

	t4 = ((x17%x18)-(x19+x20));

	if (t4 != 10329203656274496856LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	volatile uint8_t x22 = 6U;
	int32_t x23 = 56968755;
	int16_t x24 = -4535;
	volatile int32_t t5 = -5;

	t5 = ((x21%x22)-(x23+x24));

	if (t5 != -56964222) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int32_t x26 = INT32_MIN;
	uint64_t x27 = 378750762034LLU;

	t6 = ((x25%x26)-(x27+x28));

	if (t6 != 9223371658104013647LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 0U;
	volatile int16_t x30 = INT16_MAX;
	int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MAX;
	static volatile int32_t t7 = -965336;

	t7 = ((x29%x30)-(x31+x32));

	if (t7 != -2147450879) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x37 = UINT64_MAX;
	uint8_t x38 = 21U;
	uint8_t x39 = 3U;
	uint8_t x40 = 70U;
	uint64_t t8 = 67LLU;

	t8 = ((x37%x38)-(x39+x40));

	if (t8 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	volatile uint64_t x42 = UINT64_MAX;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = 422;

	t9 = ((x41%x42)-(x43+x44));

	if (t9 != 18446744073709551067LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	static int64_t x47 = INT64_MIN;
	static uint64_t x48 = 132875LLU;
	uint64_t t10 = 502808973078LLU;

	t10 = ((x45%x46)-(x47+x48));

	if (t10 != 9223372036854642933LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	uint16_t x50 = UINT16_MAX;
	volatile int8_t x51 = INT8_MIN;
	static volatile int8_t x52 = -7;
	int32_t t11 = -57;

	t11 = ((x49%x50)-(x51+x52));

	if (t11 != 134) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x54 = UINT8_MAX;
	int8_t x55 = 23;
	int32_t t12 = -658;

	t12 = ((x53%x54)-(x55+x56));

	if (t12 != -32663) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MIN;
	static uint32_t x59 = 39363U;
	int8_t x60 = INT8_MIN;
	volatile int64_t t13 = -30289839LL;

	t13 = ((x57%x58)-(x59+x60));

	if (t13 != -38980LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = INT32_MIN;
	uint8_t x64 = UINT8_MAX;

	t14 = ((x61%x62)-(x63+x64));

	if (t14 != -256) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int64_t x67 = -4950776292LL;
	int16_t x68 = 8135;
	static int64_t t15 = 209871813LL;

	t15 = ((x65%x66)-(x67+x68));

	if (t15 != 4950768143LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = -47LL;

	t16 = ((x69%x70)-(x71+x72));

	if (t16 != -16794841381059LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x74 = INT8_MAX;
	volatile uint8_t x75 = 6U;
	static uint64_t t17 = 81829LLU;

	t17 = ((x73%x74)-(x75+x76));

	if (t17 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -1LL;
	int32_t x82 = INT32_MIN;
	uint8_t x83 = 54U;
	int64_t t18 = -13935512790LL;

	t18 = ((x81%x82)-(x83+x84));

	if (t18 != -65590LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -42;
	static volatile uint8_t x88 = 21U;
	static int64_t t19 = 619LL;

	t19 = ((x85%x86)-(x87+x88));

	if (t19 != -62LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 0U;
	int64_t x90 = -1LL;
	int64_t x92 = INT64_MIN;
	volatile uint64_t t20 = 1340168070LLU;

	t20 = ((x89%x90)-(x91+x92));

	if (t20 != 9223372035396852759LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -24;
	int16_t x94 = -1;
	static int32_t x96 = -1;
	int32_t t21 = -431759664;

	t21 = ((x93%x94)-(x95+x96));

	if (t21 != -254) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x98 = 29U;
	int16_t x99 = INT16_MAX;
	static int8_t x100 = INT8_MIN;
	static int32_t t22 = 10899567;

	t22 = ((x97%x98)-(x99+x100));

	if (t22 != -32640) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x103 = INT8_MIN;
	uint8_t x104 = 3U;

	t23 = ((x101%x102)-(x103+x104));

	if (t23 != 380) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x106 = INT64_MAX;
	uint16_t x107 = 16U;
	int8_t x108 = INT8_MIN;
	int64_t t24 = 55930589087379775LL;

	t24 = ((x105%x106)-(x107+x108));

	if (t24 != 111LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 4;
	int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	static int8_t x112 = INT8_MIN;
	int32_t t25 = 9198118;

	t25 = ((x109%x110)-(x111+x112));

	if (t25 != -123) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x115 = 133497646LLU;
	int64_t x116 = -3377460892LL;
	static volatile uint64_t t26 = 68932LLU;

	t26 = ((x113%x114)-(x115+x116));

	if (t26 != 3243963458LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x118 = UINT64_MAX;
	static int64_t x119 = -1LL;
	static int32_t x120 = -10673;

	t27 = ((x117%x118)-(x119+x120));

	if (t27 != 29382LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x121 = -1LL;
	uint64_t x122 = 1LLU;
	uint8_t x123 = 3U;
	int8_t x124 = 0;
	volatile uint64_t t28 = 77999217LLU;

	t28 = ((x121%x122)-(x123+x124));

	if (t28 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = 0LL;
	int64_t x126 = -305632537890560039LL;

	t29 = ((x125%x126)-(x127+x128));

	if (t29 != -38834LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = 495;
	static uint8_t x130 = UINT8_MAX;
	static int64_t x131 = -1LL;
	volatile uint32_t x132 = UINT32_MAX;
	volatile int64_t t30 = -7804443078LL;

	t30 = ((x129%x130)-(x131+x132));

	if (t30 != -4294967054LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 7191U;
	volatile int32_t x134 = INT32_MIN;
	uint16_t x135 = 6648U;
	int16_t x136 = -1;
	int32_t t31 = -2058756;

	t31 = ((x133%x134)-(x135+x136));

	if (t31 != 544) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	int16_t x138 = 1763;
	static int32_t x139 = -1;
	static uint8_t x140 = 5U;
	volatile int32_t t32 = -915526058;

	t32 = ((x137%x138)-(x139+x140));

	if (t32 != -5) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 10038859LL;
	int32_t x143 = INT32_MAX;
	static uint8_t x144 = 0U;
	int64_t t33 = 423456570141271950LL;

	t33 = ((x141%x142)-(x143+x144));

	if (t33 != -2147482382LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x145 = INT64_MAX;
	volatile int8_t x146 = INT8_MAX;
	uint32_t x147 = 190923985U;
	int64_t x148 = 621629463250043LL;

	t34 = ((x145%x146)-(x147+x148));

	if (t34 != -621629654174028LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = UINT16_MAX;
	static uint8_t x150 = UINT8_MAX;
	volatile int16_t x151 = INT16_MAX;
	static int32_t t35 = -381356095;

	t35 = ((x149%x150)-(x151+x152));

	if (t35 != -32894) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = UINT32_MAX;
	uint8_t x154 = 1U;
	static volatile uint16_t x155 = 10U;
	static int32_t x156 = -5913;
	uint32_t t36 = 23683U;

	t36 = ((x153%x154)-(x155+x156));

	if (t36 != 5903U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x157 = INT16_MIN;
	volatile uint32_t x158 = 349152U;
	int8_t x160 = 0;

	t37 = ((x157%x158)-(x159+x160));

	if (t37 != 15521U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x166 = 1627LLU;
	volatile uint32_t x167 = UINT32_MAX;
	uint32_t x168 = UINT32_MAX;

	t38 = ((x165%x166)-(x167+x168));

	if (t38 != 18446744069414585085LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = UINT8_MAX;
	volatile uint8_t x178 = 123U;
	int32_t x179 = 10777;
	uint16_t x180 = UINT16_MAX;
	int32_t t39 = -448;

	t39 = ((x177%x178)-(x179+x180));

	if (t39 != -76303) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -1;
	int8_t x182 = INT8_MIN;
	volatile int64_t x183 = INT64_MIN;
	static volatile int32_t x184 = 23822;
	int64_t t40 = -105821LL;

	t40 = ((x181%x182)-(x183+x184));

	if (t40 != 9223372036854751985LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = 7LL;
	int32_t x187 = -264;
	int32_t x188 = 38639887;

	t41 = ((x185%x186)-(x187+x188));

	if (t41 != -38639624LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x194 = -1;
	int8_t x195 = -1;
	int64_t x196 = -67432654032616LL;
	int64_t t42 = 25LL;

	t42 = ((x193%x194)-(x195+x196));

	if (t42 != 67432654032617LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x206 = 120989289854081215LL;
	int8_t x208 = INT8_MIN;
	volatile int64_t t43 = -4LL;

	t43 = ((x205%x206)-(x207+x208));

	if (t43 != -405610LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = -259856;
	int8_t x210 = INT8_MIN;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = 1;
	volatile int32_t t44 = 1;

	t44 = ((x209%x210)-(x211+x212));

	if (t44 != -65552) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = INT32_MAX;
	uint8_t x214 = UINT8_MAX;
	static int64_t x215 = INT64_MIN;
	volatile int64_t t45 = 1225LL;

	t45 = ((x213%x214)-(x215+x216));

	if (t45 != 9223372036713500129LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = 21996321LL;
	int32_t x218 = INT32_MIN;
	volatile int16_t x219 = INT16_MIN;
	static uint8_t x220 = UINT8_MAX;
	int64_t t46 = -966038856LL;

	t46 = ((x217%x218)-(x219+x220));

	if (t46 != 22028834LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x225 = -1;
	uint64_t x227 = 163580707LLU;
	uint16_t x228 = 2U;

	t47 = ((x225%x226)-(x227+x228));

	if (t47 != 18446744073545970906LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	int8_t x232 = INT8_MIN;

	t48 = ((x229%x230)-(x231+x232));

	if (t48 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x233 = -1;
	int32_t x234 = -1;
	uint8_t x235 = 104U;

	t49 = ((x233%x234)-(x235+x236));

	if (t49 != -359) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x238 = INT32_MAX;
	int64_t x239 = -43788563LL;
	int16_t x240 = INT16_MIN;

	t50 = ((x237%x238)-(x239+x240));

	if (t50 != 43854098LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = 2;
	volatile int64_t x243 = -1LL;
	uint32_t x244 = 684804505U;
	volatile int64_t t51 = -48483714419517331LL;

	t51 = ((x241%x242)-(x243+x244));

	if (t51 != -684804504LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x249 = INT32_MIN;
	uint64_t x250 = 235319010894649LLU;
	int64_t x251 = 3854765584882411533LL;
	int16_t x252 = -1;
	static uint64_t t52 = 93464LLU;

	t52 = ((x249%x250)-(x251+x252));

	if (t52 != 14592065296357672942LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x253 = INT32_MIN;
	int64_t x255 = -1LL;
	volatile int16_t x256 = 12;
	volatile uint64_t t53 = 25694453674442480LLU;

	t53 = ((x253%x254)-(x255+x256));

	if (t53 != 645649319527061LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = 3;
	static volatile int32_t x259 = -160;
	int32_t t54 = 494864;

	t54 = ((x257%x258)-(x259+x260));

	if (t54 != 142) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = INT8_MAX;
	uint16_t x262 = 187U;
	static int32_t x263 = 42;
	uint16_t x264 = 8184U;

	t55 = ((x261%x262)-(x263+x264));

	if (t55 != -8099) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = INT32_MIN;
	volatile int16_t x266 = -515;
	int8_t x267 = INT8_MIN;
	int32_t x268 = -9;

	t56 = ((x265%x266)-(x267+x268));

	if (t56 != 54) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = 15579828LL;
	uint16_t x275 = 55U;
	static volatile int8_t x276 = -57;
	int64_t t57 = -175091391LL;

	t57 = ((x273%x274)-(x275+x276));

	if (t57 != 54LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = 55;
	int8_t x278 = -15;
	static int16_t x279 = 2751;
	uint64_t x280 = 2506066483479587071LLU;
	uint64_t t58 = 13961775032477LLU;

	t58 = ((x277%x278)-(x279+x280));

	if (t58 != 15940677590229961804LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x281 = -41;
	int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MAX;
	static int32_t x284 = -1;
	volatile int32_t t59 = 1;

	t59 = ((x281%x282)-(x283+x284));

	if (t59 != -167) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x290 = UINT32_MAX;
	static int64_t x291 = INT64_MAX;
	int32_t x292 = -1;
	int64_t t60 = 264828405LL;

	t60 = ((x289%x290)-(x291+x292));

	if (t60 != -9223372034707292158LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = UINT64_MAX;
	static int32_t x295 = INT32_MAX;
	int32_t x296 = -42497;
	volatile uint64_t t61 = 789248834597822289LLU;

	t61 = ((x293%x294)-(x295+x296));

	if (t61 != 18446744071562110338LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x302 = INT8_MIN;
	static uint32_t x303 = 5965U;
	static int16_t x304 = INT16_MIN;

	t62 = ((x301%x302)-(x303+x304));

	if (t62 != 26930U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x305 = 1547093LLU;
	uint16_t x306 = 35U;
	int8_t x307 = 0;
	volatile int32_t x308 = INT32_MIN;
	static uint64_t t63 = 47568653LLU;

	t63 = ((x305%x306)-(x307+x308));

	if (t63 != 2147483671LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = INT64_MAX;
	uint64_t x310 = 2129181626752422LLU;
	int32_t x311 = 335637;
	int8_t x312 = INT8_MIN;

	t64 = ((x309%x310)-(x311+x312));

	if (t64 != 1886411389700616LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	int32_t t65 = 301;

	t65 = ((x313%x314)-(x315+x316));

	if (t65 != 7902524) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x317 = INT64_MIN;
	static int16_t x318 = INT16_MIN;
	volatile int64_t x319 = -41700546893833LL;
	uint64_t x320 = 2LLU;
	uint64_t t66 = 2724816255LLU;

	t66 = ((x317%x318)-(x319+x320));

	if (t66 != 41700546893831LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = 58U;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = 7062;
	int16_t x324 = INT16_MIN;
	int32_t t67 = 143125;

	t67 = ((x321%x322)-(x323+x324));

	if (t67 != 25764) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x326 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = 2028;

	t68 = ((x325%x326)-(x327+x328));

	if (t68 != 30740LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = 3;
	int16_t x330 = INT16_MIN;
	volatile int32_t t69 = -251205;

	t69 = ((x329%x330)-(x331+x332));

	if (t69 != 259) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x333 = -4826;
	uint8_t x334 = 1U;
	volatile uint16_t x335 = 3870U;
	int64_t x336 = INT64_MIN;
	int64_t t70 = -2152451LL;

	t70 = ((x333%x334)-(x335+x336));

	if (t70 != 9223372036854771938LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = -1;
	static int32_t x342 = -1;
	uint64_t t71 = 71986504162980068LLU;

	t71 = ((x341%x342)-(x343+x344));

	if (t71 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MIN;
	volatile int64_t x347 = -1LL;
	static volatile int64_t t72 = -2447434573LL;

	t72 = ((x345%x346)-(x347+x348));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x350 = INT64_MAX;
	static volatile int16_t x351 = -3554;
	uint32_t x352 = 534U;
	volatile int64_t t73 = 5084LL;

	t73 = ((x349%x350)-(x351+x352));

	if (t73 != -4294964227LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x353 = INT32_MAX;
	uint32_t x354 = 299032U;
	uint32_t x355 = 1224U;
	volatile uint32_t t74 = 2849538U;

	t74 = ((x353%x354)-(x355+x356));

	if (t74 != 133630U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x358 = 240341846U;
	uint32_t x359 = 5U;
	static uint8_t x360 = 13U;

	t75 = ((x357%x358)-(x359+x360));

	if (t75 != 4294967281U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = 253995;
	volatile int16_t x362 = INT16_MAX;
	int16_t x363 = -1;
	volatile int32_t t76 = -13048;

	t76 = ((x361%x362)-(x363+x364));

	if (t76 != 24542) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = -1LL;
	int64_t x366 = INT64_MIN;
	int16_t x367 = -1;
	int16_t x368 = -1;
	static volatile int64_t t77 = 12228909LL;

	t77 = ((x365%x366)-(x367+x368));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x370 = 4444U;
	static int16_t x371 = -1;
	int32_t x372 = 16;

	t78 = ((x369%x370)-(x371+x372));

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x373 = INT32_MIN;
	volatile uint16_t x376 = UINT16_MAX;
	int32_t t79 = 65920585;

	t79 = ((x373%x374)-(x375+x376));

	if (t79 != -65432) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x377 = 1U;
	uint32_t x378 = 3407U;
	int32_t x379 = -1;
	uint16_t x380 = 132U;

	t80 = ((x377%x378)-(x379+x380));

	if (t80 != 4294967166U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int8_t x383 = -1;
	int32_t x384 = -97561454;
	volatile int32_t t81 = 7534472;

	t81 = ((x381%x382)-(x383+x384));

	if (t81 != 97561455) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x385 = 366U;
	volatile uint8_t x387 = 40U;
	uint8_t x388 = 108U;
	static volatile uint64_t t82 = 917875170128LLU;

	t82 = ((x385%x386)-(x387+x388));

	if (t82 != 218LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x389 = 8939193U;
	uint8_t x390 = 1U;
	uint32_t x391 = 4442205U;
	uint8_t x392 = 3U;
	uint32_t t83 = 1521U;

	t83 = ((x389%x390)-(x391+x392));

	if (t83 != 4290525088U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	uint64_t x394 = UINT64_MAX;
	volatile int16_t x395 = 3853;
	uint64_t t84 = 318LLU;

	t84 = ((x393%x394)-(x395+x396));

	if (t84 != 18446744073709548018LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int16_t x398 = INT16_MIN;
	static volatile int64_t x399 = 14674979109368751LL;
	volatile int64_t t85 = 32744LL;

	t85 = ((x397%x398)-(x399+x400));

	if (t85 != -14674979110413594LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = -4;
	static int64_t x402 = INT64_MIN;
	int16_t x403 = -301;
	int8_t x404 = -1;

	t86 = ((x401%x402)-(x403+x404));

	if (t86 != 298LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x409 = -1;
	int16_t x410 = INT16_MAX;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t87 = 139;

	t87 = ((x409%x410)-(x411+x412));

	if (t87 != -65408) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = INT64_MIN;
	uint8_t x414 = UINT8_MAX;
	static int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;
	volatile int64_t t88 = 127826642256916LL;

	t88 = ((x413%x414)-(x415+x416));

	if (t88 != -127LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x425 = INT64_MIN;
	uint64_t x427 = 10993342994LLU;
	uint8_t x428 = 13U;
	uint64_t t89 = 4037268086324LLU;

	t89 = ((x425%x426)-(x427+x428));

	if (t89 != 18446744049618891543LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = -113LL;
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = 35;
	static int64_t t90 = 8087263LL;

	t90 = ((x429%x430)-(x431+x432));

	if (t90 != -147LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x433 = 22U;
	int16_t x434 = INT16_MIN;
	int64_t x435 = -1LL;
	static volatile uint8_t x436 = UINT8_MAX;
	static int64_t t91 = 121284616LL;

	t91 = ((x433%x434)-(x435+x436));

	if (t91 != -232LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = 55LL;
	int16_t x438 = INT16_MAX;
	uint64_t x439 = UINT64_MAX;
	uint16_t x440 = 105U;
	uint64_t t92 = 29887297981LLU;

	t92 = ((x437%x438)-(x439+x440));

	if (t92 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MIN;
	int32_t x444 = -1;
	volatile int64_t t93 = 120770703820764LL;

	t93 = ((x441%x442)-(x443+x444));

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x446 = 1103U;
	int8_t x447 = -1;
	static int16_t x448 = INT16_MIN;
	uint32_t t94 = 5750U;

	t94 = ((x445%x446)-(x447+x448));

	if (t94 != 33099U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x449 = 2607817LLU;
	int8_t x450 = INT8_MAX;
	int64_t x451 = INT64_MIN;
	uint16_t x452 = UINT16_MAX;
	static uint64_t t95 = 3LLU;

	t95 = ((x449%x450)-(x451+x452));

	if (t95 != 9223372036854710399LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x453 = INT32_MIN;
	int16_t x454 = -1;
	int64_t x455 = INT64_MIN;
	uint16_t x456 = 1U;

	t96 = ((x453%x454)-(x455+x456));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = -1;
	int16_t x458 = -1;
	int16_t x459 = INT16_MAX;
	int64_t x460 = -1LL;
	int64_t t97 = 1LL;

	t97 = ((x457%x458)-(x459+x460));

	if (t97 != -32766LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x462 = 4589U;
	int64_t x463 = 29478266540990557LL;
	int16_t x464 = INT16_MAX;

	t98 = ((x461%x462)-(x463+x464));

	if (t98 != -29478266541023197LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x465 = INT16_MIN;
	volatile uint8_t x466 = UINT8_MAX;
	static int16_t x468 = INT16_MAX;
	volatile uint64_t t99 = 12847078LLU;

	t99 = ((x465%x466)-(x467+x468));

	if (t99 != 17868110635540631729LLU) { NG(); } else { ; }
	
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

