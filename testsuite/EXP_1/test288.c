#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 244686571839LLU;
uint32_t x4 = UINT32_MAX;
int32_t x11 = INT32_MIN;
int64_t t2 = -345801735LL;
int8_t x14 = INT8_MIN;
static uint8_t x20 = UINT8_MAX;
int32_t t5 = -304;
volatile int16_t x25 = -1;
uint64_t x26 = 2563749LLU;
int32_t t6 = 18875229;
uint32_t x35 = 77904783U;
uint16_t x37 = 30U;
int16_t x41 = INT16_MAX;
volatile int32_t x42 = -665588232;
volatile int8_t x43 = -1;
uint8_t x48 = UINT8_MAX;
static uint64_t x52 = 62LLU;
int8_t x53 = -1;
int8_t x56 = INT8_MIN;
uint16_t x57 = 58U;
int8_t x71 = 1;
uint64_t x73 = 3317880178087LLU;
uint16_t x80 = 0U;
int16_t x82 = 4;
int8_t x86 = INT8_MIN;
int32_t x89 = -401001093;
int32_t t25 = 90;
uint16_t x124 = UINT16_MAX;
int64_t x131 = INT64_MIN;
static volatile int16_t x135 = -7;
static uint16_t x145 = UINT16_MAX;
int32_t x148 = INT32_MAX;
int32_t t31 = 471;
int16_t x157 = INT16_MAX;
uint16_t x158 = 1U;
volatile int8_t x182 = INT8_MIN;
volatile int16_t x183 = INT16_MIN;
uint16_t x194 = 1513U;
int8_t x195 = -1;
volatile int32_t t41 = 188;
int8_t x198 = INT8_MIN;
int16_t x201 = -1;
int16_t x203 = INT16_MAX;
int8_t x205 = INT8_MAX;
int8_t x210 = 0;
volatile int64_t x211 = INT64_MAX;
int16_t x212 = INT16_MIN;
volatile uint32_t x225 = 5322449U;
int64_t x229 = -1LL;
static uint8_t x233 = UINT8_MAX;
volatile uint64_t t49 = 2820469700866506LLU;
int8_t x237 = INT8_MIN;
uint32_t x241 = 7U;
int16_t x244 = -450;
static uint8_t x264 = 0U;
uint8_t x269 = UINT8_MAX;
int32_t x274 = INT32_MAX;
int16_t x275 = INT16_MIN;
volatile int32_t x289 = 8073408;
uint8_t x294 = 26U;
uint64_t t63 = 1LLU;
int16_t x303 = -10077;
static int8_t x308 = INT8_MAX;
int16_t x309 = INT16_MIN;
volatile uint64_t x315 = 34LLU;
int16_t x320 = INT16_MIN;
volatile int32_t t69 = 6;
static volatile int64_t x325 = INT64_MAX;
int32_t x326 = 8243227;
static int8_t x330 = 22;
static uint32_t x332 = UINT32_MAX;
volatile int8_t x340 = INT8_MIN;
int32_t t73 = -1254827;
uint16_t x346 = UINT16_MAX;
uint32_t x350 = 69U;
static uint32_t x352 = UINT32_MAX;
uint32_t x356 = 789U;
int64_t x369 = -12610LL;
int16_t x383 = INT16_MIN;
int64_t x397 = -1LL;
int8_t x402 = INT8_MAX;
volatile int32_t x404 = -46;
static volatile int64_t x408 = -1LL;
volatile int32_t x412 = INT32_MAX;
uint64_t x413 = UINT64_MAX;
uint32_t x418 = UINT32_MAX;
int8_t x419 = 1;
int16_t x420 = INT16_MAX;
uint8_t x424 = 24U;
uint8_t x427 = 18U;
static volatile int8_t x428 = INT8_MAX;
int32_t t90 = -15329;
uint32_t t91 = 457227244U;
volatile int32_t t92 = 106;
static uint64_t x457 = UINT64_MAX;
volatile uint32_t x458 = 753U;
static int32_t x463 = -1;
volatile int32_t t94 = -2900304;
static int16_t x468 = INT16_MIN;
static uint32_t t96 = 241265573U;
int32_t t97 = 81;
int32_t x480 = INT32_MAX;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	uint16_t x3 = 3199U;
	volatile uint32_t t0 = 319149U;

	t0 = (((x1-x2)<=x3)-x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = UINT64_MAX;
	uint16_t x7 = 1U;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 10019;

	t1 = (((x5-x6)<=x7)-x8);

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint8_t x10 = UINT8_MAX;
	volatile int64_t x12 = INT64_MAX;

	t2 = (((x9-x10)<=x11)-x12);

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int16_t x15 = -6;
	int32_t x16 = 8988;
	static int32_t t3 = 97240580;

	t3 = (((x13-x14)<=x15)-x16);

	if (t3 != -8988) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	int64_t x18 = -1LL;
	uint16_t x19 = 408U;
	volatile int32_t t4 = -2235313;

	t4 = (((x17-x18)<=x19)-x20);

	if (t4 != -254) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	static uint16_t x22 = UINT16_MAX;
	uint16_t x23 = 11490U;
	static int16_t x24 = INT16_MIN;

	t5 = (((x21-x22)<=x23)-x24);

	if (t5 != 32769) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = 436U;
	int8_t x28 = -1;

	t6 = (((x25-x26)<=x27)-x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 1240081LL;
	static volatile int64_t x30 = INT64_MAX;
	static int32_t x31 = INT32_MIN;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -64;

	t7 = (((x29-x30)<=x31)-x32);

	if (t7 != -32766) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	volatile uint32_t x34 = UINT32_MAX;
	volatile uint16_t x36 = 0U;
	int32_t t8 = -1;

	t8 = (((x33-x34)<=x35)-x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x38 = 58866LLU;
	int8_t x39 = -1;
	static volatile int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 214;

	t9 = (((x37-x38)<=x39)-x40);

	if (t9 != 129) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x44 = 328835U;
	volatile uint32_t t10 = 5384140U;

	t10 = (((x41-x42)<=x43)-x44);

	if (t10 != 4294638461U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 0LLU;
	uint64_t x46 = 18938174167LLU;
	int32_t x47 = INT32_MIN;
	volatile int32_t t11 = -3;

	t11 = (((x45-x46)<=x47)-x48);

	if (t11 != -254) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MAX;
	static volatile uint64_t x50 = 1959210224LLU;
	static int16_t x51 = -12696;
	volatile uint64_t t12 = 58148599880589LLU;

	t12 = (((x49-x50)<=x51)-x52);

	if (t12 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x54 = -31;
	int32_t x55 = 27861912;
	int32_t t13 = 0;

	t13 = (((x53-x54)<=x55)-x56);

	if (t13 != 129) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x58 = 11510U;
	int16_t x59 = INT16_MAX;
	int64_t x60 = -1LL;
	volatile int64_t t14 = -30392LL;

	t14 = (((x57-x58)<=x59)-x60);

	if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -1;
	volatile int64_t x66 = -582839838LL;
	volatile uint16_t x67 = 44U;
	uint8_t x68 = 15U;
	static int32_t t15 = 0;

	t15 = (((x65-x66)<=x67)-x68);

	if (t15 != -15) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 1653979;
	volatile int16_t x70 = 3774;
	volatile int8_t x72 = -5;
	int32_t t16 = -1007766811;

	t16 = (((x69-x70)<=x71)-x72);

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = INT16_MAX;
	static uint64_t x75 = 555553360033418615LLU;
	static uint32_t x76 = 425840U;
	volatile uint32_t t17 = 447U;

	t17 = (((x73-x74)<=x75)-x76);

	if (t17 != 4294541457U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = -1;
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MIN;
	volatile int32_t t18 = 7;

	t18 = (((x77-x78)<=x79)-x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 218144LLU;
	volatile int8_t x83 = INT8_MIN;
	uint8_t x84 = 13U;
	static int32_t t19 = 944200;

	t19 = (((x81-x82)<=x83)-x84);

	if (t19 != -12) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	volatile int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t20 = 2345;

	t20 = (((x85-x86)<=x87)-x88);

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = -1;
	int64_t x91 = -1LL;
	int16_t x92 = INT16_MAX;
	int32_t t21 = 707;

	t21 = (((x89-x90)<=x91)-x92);

	if (t21 != -32766) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 70027;
	static volatile int32_t x94 = -30;
	uint16_t x95 = 936U;
	volatile uint8_t x96 = 1U;
	volatile int32_t t22 = 1750;

	t22 = (((x93-x94)<=x95)-x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MAX;
	static volatile uint16_t x103 = UINT16_MAX;
	volatile uint64_t x104 = 159494960053823123LLU;
	static volatile uint64_t t23 = 2315452689780LLU;

	t23 = (((x101-x102)<=x103)-x104);

	if (t23 != 18287249113655728494LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	volatile int16_t x112 = -6577;
	static int32_t t24 = -18001728;

	t24 = (((x109-x110)<=x111)-x112);

	if (t24 != 6577) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	uint16_t x116 = 3U;

	t25 = (((x113-x114)<=x115)-x116);

	if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = 1;
	int16_t x122 = -1;
	int64_t x123 = -1LL;
	static volatile int32_t t26 = -1;

	t26 = (((x121-x122)<=x123)-x124);

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	static int16_t x130 = -216;
	int16_t x132 = INT16_MAX;
	int32_t t27 = 1137454;

	t27 = (((x129-x130)<=x131)-x132);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = 1213U;
	volatile int32_t x134 = 5;
	int64_t x136 = -28276622887676946LL;
	int64_t t28 = 56685611522034LL;

	t28 = (((x133-x134)<=x135)-x136);

	if (t28 != 28276622887676946LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x137 = 51837279;
	volatile uint8_t x138 = UINT8_MAX;
	volatile uint16_t x139 = UINT16_MAX;
	uint16_t x140 = 9U;
	static int32_t t29 = 86;

	t29 = (((x137-x138)<=x139)-x140);

	if (t29 != -9) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x141 = -10;
	uint16_t x142 = 2950U;
	volatile int16_t x143 = -264;
	static int64_t x144 = -3050211LL;
	volatile int64_t t30 = -1703554021433587466LL;

	t30 = (((x141-x142)<=x143)-x144);

	if (t30 != 3050212LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x146 = 113U;
	int32_t x147 = -3;

	t31 = (((x145-x146)<=x147)-x148);

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -4;
	int8_t x150 = 5;
	int16_t x151 = -1;
	int16_t x152 = 13799;
	volatile int32_t t32 = -347782;

	t32 = (((x149-x150)<=x151)-x152);

	if (t32 != -13798) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	int16_t x154 = -1;
	int32_t x155 = 17212922;
	int32_t x156 = 20782;
	static int32_t t33 = -8318;

	t33 = (((x153-x154)<=x155)-x156);

	if (t33 != -20781) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x159 = UINT8_MAX;
	volatile uint64_t x160 = 7272LLU;
	uint64_t t34 = 102293996LLU;

	t34 = (((x157-x158)<=x159)-x160);

	if (t34 != 18446744073709544344LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = -195101LL;
	int8_t x166 = -1;
	int8_t x167 = 0;
	int32_t x168 = -1;
	volatile int32_t t35 = -427275675;

	t35 = (((x165-x166)<=x167)-x168);

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	static volatile int8_t x171 = 0;
	uint8_t x172 = UINT8_MAX;
	int32_t t36 = 59;

	t36 = (((x169-x170)<=x171)-x172);

	if (t36 != -254) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 15283U;
	static uint16_t x174 = 494U;
	int16_t x175 = -2;
	uint32_t x176 = 172121U;
	uint32_t t37 = 66758794U;

	t37 = (((x173-x174)<=x175)-x176);

	if (t37 != 4294795176U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = 161;
	int8_t x178 = -1;
	volatile uint8_t x179 = 95U;
	static int64_t x180 = -12974426LL;
	int64_t t38 = 100009816694LL;

	t38 = (((x177-x178)<=x179)-x180);

	if (t38 != 12974426LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 26U;
	volatile int8_t x184 = 0;
	int32_t t39 = 10360;

	t39 = (((x181-x182)<=x183)-x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x185 = -105430290LL;
	static int64_t x186 = -1LL;
	int32_t x187 = 9;
	static volatile uint8_t x188 = 17U;
	volatile int32_t t40 = 28486197;

	t40 = (((x185-x186)<=x187)-x188);

	if (t40 != -16) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x193 = 400275525;
	volatile int16_t x196 = INT16_MIN;

	t41 = (((x193-x194)<=x195)-x196);

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = -1;
	static volatile int64_t x199 = -1LL;
	int16_t x200 = -353;
	static volatile int32_t t42 = 280402465;

	t42 = (((x197-x198)<=x199)-x200);

	if (t42 != 353) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x202 = 3786U;
	int32_t x204 = INT32_MAX;
	static int32_t t43 = 644482958;

	t43 = (((x201-x202)<=x203)-x204);

	if (t43 != -2147483646) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x206 = -1;
	int8_t x207 = -1;
	int16_t x208 = INT16_MAX;
	int32_t t44 = -17;

	t44 = (((x205-x206)<=x207)-x208);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = 129;
	volatile int32_t t45 = -98241605;

	t45 = (((x209-x210)<=x211)-x212);

	if (t45 != 32769) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = -1;
	int32_t x218 = INT32_MIN;
	int64_t x219 = -1LL;
	int32_t x220 = -1;
	int32_t t46 = -747;

	t46 = (((x217-x218)<=x219)-x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x226 = UINT32_MAX;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MAX;
	volatile int32_t t47 = 85;

	t47 = (((x225-x226)<=x227)-x228);

	if (t47 != -126) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x230 = -1LL;
	int16_t x231 = 1400;
	static uint16_t x232 = UINT16_MAX;
	volatile int32_t t48 = 0;

	t48 = (((x229-x230)<=x231)-x232);

	if (t48 != -65534) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	static uint64_t x236 = 1203804230899227LLU;

	t49 = (((x233-x234)<=x235)-x236);

	if (t49 != 18445540269478652390LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x238 = INT32_MIN;
	static uint16_t x239 = UINT16_MAX;
	volatile uint32_t x240 = UINT32_MAX;
	static uint32_t t50 = 23U;

	t50 = (((x237-x238)<=x239)-x240);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x242 = INT8_MIN;
	int64_t x243 = -1LL;
	static volatile int32_t t51 = 26128;

	t51 = (((x241-x242)<=x243)-x244);

	if (t51 != 450) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x249 = 1728373LLU;
	static int32_t x250 = -301;
	int16_t x251 = -9735;
	int32_t x252 = INT32_MAX;
	static int32_t t52 = -7637303;

	t52 = (((x249-x250)<=x251)-x252);

	if (t52 != -2147483646) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	static int64_t x255 = INT64_MAX;
	static int64_t x256 = -1941659LL;
	static int64_t t53 = 217381609464LL;

	t53 = (((x253-x254)<=x255)-x256);

	if (t53 != 1941660LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = INT8_MAX;
	static int8_t x262 = 1;
	static int16_t x263 = 46;
	int32_t t54 = -1686995;

	t54 = (((x261-x262)<=x263)-x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = -1;
	int16_t x266 = -1087;
	int32_t x267 = -1;
	int64_t x268 = -1LL;
	int64_t t55 = -5063096593783449LL;

	t55 = (((x265-x266)<=x267)-x268);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x270 = 25U;
	static int16_t x271 = INT16_MIN;
	volatile int32_t x272 = -226294;
	static int32_t t56 = 247;

	t56 = (((x269-x270)<=x271)-x272);

	if (t56 != 226294) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = 1;
	static volatile int64_t x276 = INT64_MAX;
	volatile int64_t t57 = 375LL;

	t57 = (((x273-x274)<=x275)-x276);

	if (t57 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = 440026LL;
	int32_t x278 = INT32_MAX;
	static int16_t x279 = -16;
	static uint16_t x280 = 22856U;
	static int32_t t58 = 13019194;

	t58 = (((x277-x278)<=x279)-x280);

	if (t58 != -22855) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x281 = 0;
	volatile uint32_t x282 = 23677U;
	int8_t x283 = -1;
	int8_t x284 = INT8_MIN;
	static int32_t t59 = -1815;

	t59 = (((x281-x282)<=x283)-x284);

	if (t59 != 129) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x285 = 117U;
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = -1;
	volatile int16_t x288 = INT16_MAX;
	volatile int32_t t60 = 1;

	t60 = (((x285-x286)<=x287)-x288);

	if (t60 != -32766) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x290 = UINT8_MAX;
	static uint16_t x291 = 417U;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t61 = 7472241;

	t61 = (((x289-x290)<=x291)-x292);

	if (t61 != -65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x293 = 6U;
	volatile uint16_t x295 = 0U;
	int16_t x296 = -1;
	static volatile int32_t t62 = 3544;

	t62 = (((x293-x294)<=x295)-x296);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x297 = 2;
	int8_t x298 = INT8_MIN;
	volatile uint64_t x299 = UINT64_MAX;
	static uint64_t x300 = 962LLU;

	t63 = (((x297-x298)<=x299)-x300);

	if (t63 != 18446744073709550655LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = INT16_MAX;
	static volatile int8_t x302 = 8;
	uint8_t x304 = 5U;
	int32_t t64 = -22824013;

	t64 = (((x301-x302)<=x303)-x304);

	if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x305 = INT8_MAX;
	int16_t x306 = -48;
	volatile uint16_t x307 = 3U;
	int32_t t65 = -1442411;

	t65 = (((x305-x306)<=x307)-x308);

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x310 = 12410LL;
	volatile int8_t x311 = 9;
	int64_t x312 = 86226093LL;
	static int64_t t66 = 4LL;

	t66 = (((x309-x310)<=x311)-x312);

	if (t66 != -86226092LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = -1;
	int8_t x314 = -26;
	static uint8_t x316 = 0U;
	volatile int32_t t67 = 12661;

	t67 = (((x313-x314)<=x315)-x316);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = -395473;
	int64_t x318 = 2090LL;
	int32_t x319 = 387;
	int32_t t68 = -1;

	t68 = (((x317-x318)<=x319)-x320);

	if (t68 != 32769) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = -1;
	int8_t x322 = 57;
	int16_t x323 = -1;
	volatile int16_t x324 = 2181;

	t69 = (((x321-x322)<=x323)-x324);

	if (t69 != -2180) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x327 = 191481LLU;
	uint8_t x328 = 1U;
	static int32_t t70 = 431504985;

	t70 = (((x325-x326)<=x327)-x328);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int32_t x331 = 2299118;
	volatile uint32_t t71 = 587857U;

	t71 = (((x329-x330)<=x331)-x332);

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = UINT8_MAX;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = INT8_MAX;
	static volatile int32_t t72 = -40353052;

	t72 = (((x333-x334)<=x335)-x336);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	uint32_t x338 = 933475U;
	uint16_t x339 = 16U;

	t73 = (((x337-x338)<=x339)-x340);

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x341 = -19;
	volatile int64_t x342 = -84150LL;
	static int32_t x343 = INT32_MIN;
	static uint32_t x344 = UINT32_MAX;
	volatile uint32_t t74 = 62615U;

	t74 = (((x341-x342)<=x343)-x344);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x345 = 4044737976254955LLU;
	static uint32_t x347 = UINT32_MAX;
	static volatile uint64_t x348 = UINT64_MAX;
	volatile uint64_t t75 = 86LLU;

	t75 = (((x345-x346)<=x347)-x348);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x349 = -56;
	static volatile uint64_t x351 = 2886951LLU;
	volatile uint32_t t76 = 756418U;

	t76 = (((x349-x350)<=x351)-x352);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x353 = INT8_MAX;
	static uint16_t x354 = UINT16_MAX;
	uint8_t x355 = 117U;
	uint32_t t77 = 9U;

	t77 = (((x353-x354)<=x355)-x356);

	if (t77 != 4294966508U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x370 = 93U;
	volatile uint8_t x371 = UINT8_MAX;
	int8_t x372 = -1;
	volatile int32_t t78 = 200814;

	t78 = (((x369-x370)<=x371)-x372);

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = -1;
	int8_t x382 = -1;
	uint32_t x384 = 3946957U;
	volatile uint32_t t79 = 1902144451U;

	t79 = (((x381-x382)<=x383)-x384);

	if (t79 != 4291020339U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x398 = 0U;
	uint32_t x399 = 434145139U;
	int32_t x400 = INT32_MAX;
	int32_t t80 = 522061;

	t80 = (((x397-x398)<=x399)-x400);

	if (t80 != -2147483646) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x401 = INT8_MIN;
	volatile int16_t x403 = -216;
	volatile int32_t t81 = 13166;

	t81 = (((x401-x402)<=x403)-x404);

	if (t81 != 47) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x405 = INT32_MAX;
	int64_t x406 = -1LL;
	int32_t x407 = -114000016;
	int64_t t82 = -688710990LL;

	t82 = (((x405-x406)<=x407)-x408);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x409 = -1;
	volatile int64_t x410 = -1LL;
	uint8_t x411 = 49U;
	int32_t t83 = -9090;

	t83 = (((x409-x410)<=x411)-x412);

	if (t83 != -2147483646) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x414 = UINT64_MAX;
	uint64_t x415 = 31LLU;
	uint64_t x416 = 356248509029LLU;
	volatile uint64_t t84 = 126562555LLU;

	t84 = (((x413-x414)<=x415)-x416);

	if (t84 != 18446743717461042588LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x417 = 7U;
	static int32_t t85 = -776164614;

	t85 = (((x417-x418)<=x419)-x420);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	uint64_t x423 = 975498695379119921LLU;
	volatile int32_t t86 = -4;

	t86 = (((x421-x422)<=x423)-x424);

	if (t86 != -24) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = INT8_MIN;
	uint32_t x426 = 28214U;
	static volatile int32_t t87 = 10819;

	t87 = (((x425-x426)<=x427)-x428);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x429 = INT16_MIN;
	int32_t x430 = -44925;
	int16_t x431 = INT16_MIN;
	int32_t x432 = INT32_MAX;
	static int32_t t88 = 3275;

	t88 = (((x429-x430)<=x431)-x432);

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x433 = UINT32_MAX;
	volatile int16_t x434 = -1;
	static int8_t x435 = INT8_MIN;
	volatile uint64_t x436 = UINT64_MAX;
	static volatile uint64_t t89 = 2267864392198757654LLU;

	t89 = (((x433-x434)<=x435)-x436);

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x437 = 8U;
	int64_t x438 = INT64_MAX;
	uint16_t x439 = 519U;
	int16_t x440 = -1;

	t90 = (((x437-x438)<=x439)-x440);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x441 = INT32_MAX;
	static int64_t x442 = -75864959332163LL;
	int8_t x443 = -1;
	uint32_t x444 = 214857652U;

	t91 = (((x441-x442)<=x443)-x444);

	if (t91 != 4080109644U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x453 = INT32_MIN;
	volatile int8_t x454 = -3;
	int64_t x455 = INT64_MIN;
	int8_t x456 = INT8_MAX;

	t92 = (((x453-x454)<=x455)-x456);

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x459 = 37928066LLU;
	int16_t x460 = INT16_MIN;
	static int32_t t93 = 27;

	t93 = (((x457-x458)<=x459)-x460);

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x461 = INT8_MIN;
	static uint16_t x462 = 6U;
	int8_t x464 = INT8_MIN;

	t94 = (((x461-x462)<=x463)-x464);

	if (t94 != 129) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x465 = -67;
	int32_t x466 = INT32_MIN;
	static uint16_t x467 = 389U;
	volatile int32_t t95 = -237967;

	t95 = (((x465-x466)<=x467)-x468);

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x469 = 0;
	static int8_t x470 = INT8_MIN;
	int8_t x471 = INT8_MAX;
	uint32_t x472 = UINT32_MAX;

	t96 = (((x469-x470)<=x471)-x472);

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x473 = UINT8_MAX;
	int64_t x474 = INT64_MAX;
	volatile int64_t x475 = -1LL;
	int8_t x476 = 47;

	t97 = (((x473-x474)<=x475)-x476);

	if (t97 != -46) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x477 = -1LL;
	int64_t x478 = -130972987435LL;
	uint8_t x479 = 0U;
	volatile int32_t t98 = 12600;

	t98 = (((x477-x478)<=x479)-x480);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x481 = 1892893LLU;
	volatile uint32_t x482 = 103U;
	static volatile uint8_t x483 = UINT8_MAX;
	int8_t x484 = 6;
	volatile int32_t t99 = -4;

	t99 = (((x481-x482)<=x483)-x484);

	if (t99 != -6) { NG(); } else { ; }
	
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

