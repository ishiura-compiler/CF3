#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 1317;
static int32_t x6 = -91249289;
int64_t x28 = INT64_MIN;
int16_t x35 = INT16_MIN;
static int8_t x37 = INT8_MIN;
uint16_t x41 = UINT16_MAX;
uint8_t x44 = 97U;
static int16_t x45 = INT16_MIN;
uint64_t x53 = UINT64_MAX;
volatile uint64_t t11 = 221797946551182LLU;
int16_t x61 = -1;
int16_t x62 = -1;
int16_t x66 = -5382;
uint32_t x67 = 452431237U;
int32_t t14 = -1946;
static volatile int16_t x73 = -1;
static uint32_t x74 = 696U;
uint8_t x75 = 0U;
int64_t t17 = -1885LL;
static volatile uint8_t x94 = 0U;
static volatile int8_t x97 = INT8_MIN;
int64_t x102 = 96LL;
uint32_t x111 = UINT32_MAX;
volatile int8_t x114 = INT8_MIN;
volatile int8_t x121 = INT8_MIN;
static int32_t x127 = INT32_MIN;
int8_t x133 = INT8_MIN;
volatile int32_t x142 = INT32_MAX;
int8_t x143 = 1;
int8_t x151 = 29;
volatile int64_t t35 = -8019243497376LL;
int64_t t36 = -916391851627748LL;
static int64_t x161 = INT64_MAX;
int64_t x164 = INT64_MIN;
uint8_t x165 = UINT8_MAX;
int64_t x170 = 55489LL;
volatile int64_t x172 = INT64_MAX;
volatile int64_t t39 = -422712015527LL;
static int16_t x173 = -1;
static uint16_t x174 = 30246U;
int32_t x188 = -1;
uint64_t x192 = 6871655540LLU;
static uint64_t x193 = 1682517995290LLU;
static uint64_t x204 = UINT64_MAX;
static int64_t x211 = INT64_MIN;
volatile int64_t x219 = -1LL;
static volatile int8_t x224 = INT8_MIN;
int8_t x225 = 0;
int16_t x231 = INT16_MAX;
int32_t x237 = 9889515;
volatile int8_t x244 = INT8_MIN;
volatile uint64_t x245 = 73646757714229LLU;
static int64_t x248 = -1LL;
volatile uint64_t t58 = 160LLU;
uint8_t x251 = 27U;
uint64_t t59 = 3654207LLU;
static int8_t x263 = INT8_MIN;
static int64_t x264 = INT64_MIN;
int32_t x265 = INT32_MAX;
int64_t x267 = -967289LL;
static volatile uint32_t x281 = 612077114U;
int32_t x303 = INT32_MIN;
int64_t x307 = INT64_MIN;
int32_t x312 = 235;
int64_t x314 = INT64_MIN;
uint8_t x315 = UINT8_MAX;
int8_t x316 = -1;
int64_t x319 = INT64_MAX;
uint32_t x323 = UINT32_MAX;
uint32_t t80 = 738267U;
static uint16_t x343 = 2665U;
uint32_t x351 = 27334987U;
uint64_t x354 = UINT64_MAX;
int16_t x355 = -1;
int8_t x360 = INT8_MIN;
static int32_t x362 = INT32_MIN;
volatile int64_t t88 = -5851387LL;
int64_t x373 = -1LL;
int16_t x376 = 1;
int64_t t89 = 1988610145LL;
volatile int8_t x377 = -1;
static int8_t x380 = -1;
int32_t t90 = 223217902;
int32_t x384 = INT32_MIN;
static volatile int64_t t93 = 137774112089760137LL;
volatile int64_t x394 = -85790351211499605LL;
int8_t x395 = INT8_MIN;
volatile int8_t x396 = INT8_MIN;
static uint64_t t95 = 81069039925214275LLU;
volatile int32_t x401 = INT32_MIN;
static int16_t x403 = 28;
uint32_t x405 = UINT32_MAX;
int8_t x411 = INT8_MIN;
int64_t x416 = INT64_MAX;
volatile uint64_t t99 = 64540141071LLU;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = 1U;
	volatile int32_t t0 = 1545;

	t0 = (x1%((x2==x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 1514;
	volatile int32_t x7 = -1;
	int16_t x8 = -107;
	int32_t t1 = 45801;

	t1 = (x5%((x6==x7)^x8));

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	int64_t x10 = INT64_MAX;
	volatile int32_t x11 = INT32_MAX;
	static int8_t x12 = 12;
	int32_t t2 = 1;

	t2 = (x9%((x10==x11)^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = 1313713405561443950LLU;
	int8_t x15 = 47;
	uint64_t x16 = 7542588221LLU;
	volatile uint64_t t3 = 3738798LLU;

	t3 = (x13%((x14==x15)^x16));

	if (t3 != 7307423144LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = -701849LL;
	volatile int8_t x26 = INT8_MAX;
	uint32_t x27 = 2168174U;
	volatile int64_t t4 = -447321785920866898LL;

	t4 = (x25%((x26==x27)^x28));

	if (t4 != -701849LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = -2096LL;
	int32_t x30 = -1;
	volatile int64_t x31 = 68019065995331LL;
	uint8_t x32 = UINT8_MAX;
	volatile int64_t t5 = -5235092636LL;

	t5 = (x29%((x30==x31)^x32));

	if (t5 != -56LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	int32_t x34 = INT32_MIN;
	static int64_t x36 = INT64_MAX;
	int64_t t6 = -1LL;

	t6 = (x33%((x34==x35)^x36));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x38 = UINT8_MAX;
	int16_t x39 = INT16_MAX;
	int8_t x40 = 4;
	volatile int32_t t7 = 9570025;

	t7 = (x37%((x38==x39)^x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x42 = INT16_MAX;
	uint16_t x43 = UINT16_MAX;
	volatile int32_t t8 = 11245803;

	t8 = (x41%((x42==x43)^x44));

	if (t8 != 60) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = INT64_MAX;
	volatile uint8_t x47 = UINT8_MAX;
	uint16_t x48 = 12383U;
	static int32_t t9 = -292405;

	t9 = (x45%((x46==x47)^x48));

	if (t9 != -8002) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = INT64_MIN;
	static volatile int16_t x50 = -1;
	uint32_t x51 = 37476494U;
	int8_t x52 = INT8_MIN;
	volatile int64_t t10 = -10725217402LL;

	t10 = (x49%((x50==x51)^x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = -1;
	int8_t x55 = -1;
	int8_t x56 = INT8_MAX;

	t11 = (x53%((x54==x55)^x56));

	if (t11 != 15LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	static volatile int64_t x58 = INT64_MAX;
	uint8_t x59 = 16U;
	int32_t x60 = -1;
	volatile int64_t t12 = 0LL;

	t12 = (x57%((x58==x59)^x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x63 = INT8_MIN;
	int64_t x64 = -907955327LL;
	volatile int64_t t13 = -19480449447LL;

	t13 = (x61%((x62==x63)^x64));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x65 = 0U;
	volatile int32_t x68 = 64219;

	t14 = (x65%((x66==x67)^x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MAX;
	uint64_t x71 = 1335550418115892900LLU;
	int16_t x72 = -1;
	int64_t t15 = -2004157933LL;

	t15 = (x69%((x70==x71)^x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x76 = INT32_MAX;
	int32_t t16 = 3;

	t16 = (x73%((x74==x75)^x76));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -21395LL;
	volatile int8_t x78 = INT8_MIN;
	int16_t x79 = 6656;
	static uint32_t x80 = 160513110U;

	t17 = (x77%((x78==x79)^x80));

	if (t17 != -21395LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 5012U;
	uint32_t x82 = UINT32_MAX;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = -1;
	volatile int32_t t18 = 9215;

	t18 = (x81%((x82==x83)^x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x85 = 547986632349LLU;
	uint64_t x86 = 2LLU;
	int64_t x87 = INT64_MAX;
	int16_t x88 = -4;
	uint64_t t19 = 365332352LLU;

	t19 = (x85%((x86==x87)^x88));

	if (t19 != 547986632349LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x89 = 10U;
	volatile int32_t x90 = -1;
	volatile int64_t x91 = INT64_MIN;
	static int8_t x92 = -27;
	int32_t t20 = 6112;

	t20 = (x89%((x90==x91)^x92));

	if (t20 != 10) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	static int32_t x95 = INT32_MAX;
	int32_t x96 = -1;
	int32_t t21 = -29;

	t21 = (x93%((x94==x95)^x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x98 = INT8_MIN;
	int8_t x99 = -6;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t22 = 550280U;

	t22 = (x97%((x98==x99)^x100));

	if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x101 = -1;
	static int16_t x103 = 87;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t23 = -7;

	t23 = (x101%((x102==x103)^x104));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = INT64_MIN;
	static int16_t x106 = INT16_MIN;
	uint64_t x107 = 112401826357333085LLU;
	int64_t x108 = -11459792199LL;
	int64_t t24 = -294LL;

	t24 = (x105%((x106==x107)^x108));

	if (t24 != -10593022367LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = INT8_MIN;
	uint16_t x110 = 2150U;
	int16_t x112 = -1;
	static int32_t t25 = 15507064;

	t25 = (x109%((x110==x111)^x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	static int32_t t26 = 1;

	t26 = (x113%((x114==x115)^x116));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 1;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t27 = 2817719431112LLU;

	t27 = (x117%((x118==x119)^x120));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x122 = 14976U;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = -1;
	int32_t t28 = 5;

	t28 = (x121%((x122==x123)^x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MIN;
	volatile int64_t x128 = INT64_MAX;
	volatile int64_t t29 = 555241512711LL;

	t29 = (x125%((x126==x127)^x128));

	if (t29 != 65535LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x134 = 0LLU;
	uint32_t x135 = UINT32_MAX;
	static volatile uint64_t x136 = 28379048688LLU;
	static volatile uint64_t t30 = 98518636002103484LLU;

	t30 = (x133%((x134==x135)^x136));

	if (t30 != 26057805728LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MAX;
	uint8_t x139 = 1U;
	static int64_t x140 = 1LL;
	int64_t t31 = 25986471967169LL;

	t31 = (x137%((x138==x139)^x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = -1;
	static int16_t x144 = INT16_MIN;
	static volatile int32_t t32 = 3418;

	t32 = (x141%((x142==x143)^x144));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 78U;
	volatile int8_t x147 = INT8_MAX;
	int8_t x148 = -1;
	volatile int32_t t33 = 1;

	t33 = (x145%((x146==x147)^x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = 0;
	int64_t x150 = 715242386129681LL;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t34 = -15938;

	t34 = (x149%((x150==x151)^x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = 1613168LL;
	int64_t x154 = -1LL;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = -1LL;

	t35 = (x153%((x154==x155)^x156));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x157 = 56092258773LL;
	int8_t x158 = -2;
	int16_t x159 = 126;
	uint32_t x160 = 213U;

	t36 = (x157%((x158==x159)^x160));

	if (t36 != 192LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x162 = 888830412008LLU;
	uint16_t x163 = 1U;
	static int64_t t37 = INT64_MAX;

	t37 = (x161%((x162==x163)^x164));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x166 = -1LL;
	int16_t x167 = -1;
	int8_t x168 = INT8_MAX;
	int32_t t38 = -5044;

	t38 = (x165%((x166==x167)^x168));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x169 = UINT16_MAX;
	uint16_t x171 = 631U;

	t39 = (x169%((x170==x171)^x172));

	if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x175 = INT64_MIN;
	int64_t x176 = 3690571233355100630LL;
	volatile int64_t t40 = -5962LL;

	t40 = (x173%((x174==x175)^x176));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x177 = INT32_MIN;
	int8_t x178 = -1;
	static uint32_t x179 = 1U;
	int32_t x180 = INT32_MIN;
	volatile int32_t t41 = 3023;

	t41 = (x177%((x178==x179)^x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 1057968163818166395LLU;
	uint64_t x182 = 543782607606LLU;
	volatile int8_t x183 = -1;
	uint16_t x184 = 193U;
	uint64_t t42 = 47LLU;

	t42 = (x181%((x182==x183)^x184));

	if (t42 != 113LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 425U;
	int64_t x186 = 7033526128LL;
	uint32_t x187 = 130472518U;
	static int32_t t43 = -263;

	t43 = (x185%((x186==x187)^x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = 1;
	int32_t x190 = -89860778;
	int16_t x191 = -1;
	uint64_t t44 = 21224268517009LLU;

	t44 = (x189%((x190==x191)^x192));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x194 = -1;
	static uint16_t x195 = UINT16_MAX;
	uint64_t x196 = 56LLU;
	static uint64_t t45 = 268288397952037534LLU;

	t45 = (x193%((x194==x195)^x196));

	if (t45 != 34LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MAX;
	int64_t x199 = -13024053LL;
	uint16_t x200 = 382U;
	int32_t t46 = -95969;

	t46 = (x197%((x198==x199)^x200));

	if (t46 != -360) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x201 = INT64_MIN;
	uint8_t x202 = UINT8_MAX;
	static int64_t x203 = INT64_MIN;
	volatile uint64_t t47 = 1LLU;

	t47 = (x201%((x202==x203)^x204));

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x205 = -1;
	int16_t x206 = -1;
	static uint32_t x207 = UINT32_MAX;
	int64_t x208 = INT64_MIN;
	volatile int64_t t48 = 839226017678LL;

	t48 = (x205%((x206==x207)^x208));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = 15479LLU;
	uint16_t x210 = 838U;
	int64_t x212 = INT64_MIN;
	volatile uint64_t t49 = 8LLU;

	t49 = (x209%((x210==x211)^x212));

	if (t49 != 15479LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = INT16_MIN;
	static uint16_t x214 = 1036U;
	uint16_t x215 = 6U;
	static int64_t x216 = INT64_MIN;
	int64_t t50 = 713936246376643LL;

	t50 = (x213%((x214==x215)^x216));

	if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = -1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t51 = -1913;

	t51 = (x217%((x218==x219)^x220));

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x221 = 7536;
	int64_t x222 = -80059548349082LL;
	uint32_t x223 = UINT32_MAX;
	int32_t t52 = -702204;

	t52 = (x221%((x222==x223)^x224));

	if (t52 != 112) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x226 = 255991U;
	int16_t x227 = -1;
	static int64_t x228 = 6846386LL;
	static int64_t t53 = -3598970LL;

	t53 = (x225%((x226==x227)^x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	volatile int16_t x230 = INT16_MIN;
	int16_t x232 = INT16_MAX;
	int32_t t54 = -213;

	t54 = (x229%((x230==x231)^x232));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MAX;
	static uint8_t x235 = UINT8_MAX;
	uint64_t x236 = 338156863770575898LLU;
	uint64_t t55 = 2051471219LLU;

	t55 = (x233%((x234==x235)^x236));

	if (t55 != 186273427950969476LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x238 = INT64_MAX;
	static volatile uint32_t x239 = 7U;
	int8_t x240 = -1;
	int32_t t56 = 1217;

	t56 = (x237%((x238==x239)^x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x241 = 0U;
	int64_t x242 = INT64_MAX;
	static volatile int64_t x243 = 0LL;
	volatile int32_t t57 = 482399256;

	t57 = (x241%((x242==x243)^x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x246 = 4012U;
	static uint64_t x247 = 33053989434LLU;

	t58 = (x245%((x246==x247)^x248));

	if (t58 != 73646757714229LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;

	t59 = (x249%((x250==x251)^x252));

	if (t59 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = 13973649;
	volatile uint64_t x254 = 2795197960268892955LLU;
	int64_t x255 = INT64_MAX;
	volatile int8_t x256 = INT8_MIN;
	int32_t t60 = -433;

	t60 = (x253%((x254==x255)^x256));

	if (t60 != 17) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x257 = INT64_MAX;
	static int8_t x258 = INT8_MIN;
	int16_t x259 = 1;
	static int64_t x260 = INT64_MIN;
	int64_t t61 = INT64_MAX;

	t61 = (x257%((x258==x259)^x260));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x261 = 16347U;
	uint32_t x262 = 53425586U;
	volatile int64_t t62 = 1864333LL;

	t62 = (x261%((x262==x263)^x264));

	if (t62 != 16347LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x266 = -1206864422617927LL;
	int16_t x268 = INT16_MIN;
	volatile int32_t t63 = 0;

	t63 = (x265%((x266==x267)^x268));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = -1;
	uint64_t x270 = 6375025536493276LLU;
	static int32_t x271 = -5042481;
	volatile int32_t x272 = -1;
	static int32_t t64 = -582;

	t64 = (x269%((x270==x271)^x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = -59;
	volatile uint64_t x274 = 5388073LLU;
	int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MIN;
	static volatile int32_t t65 = 6640221;

	t65 = (x273%((x274==x275)^x276));

	if (t65 != -59) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MAX;
	static int32_t x278 = 8466;
	int32_t x279 = INT32_MIN;
	volatile uint8_t x280 = 1U;
	volatile int32_t t66 = -51140241;

	t66 = (x277%((x278==x279)^x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x282 = INT16_MAX;
	int16_t x283 = -1;
	static int64_t x284 = INT64_MIN;
	static volatile int64_t t67 = 135571LL;

	t67 = (x281%((x282==x283)^x284));

	if (t67 != 612077114LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = UINT64_MAX;
	int64_t x286 = -1LL;
	volatile uint16_t x287 = UINT16_MAX;
	uint8_t x288 = UINT8_MAX;
	uint64_t t68 = 222282181LLU;

	t68 = (x285%((x286==x287)^x288));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MAX;
	volatile int64_t x290 = INT64_MAX;
	uint64_t x291 = 403948LLU;
	int32_t x292 = -20316;
	int32_t t69 = 1511;

	t69 = (x289%((x290==x291)^x292));

	if (t69 != 12451) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x293 = INT16_MIN;
	uint32_t x294 = 5077U;
	volatile int64_t x295 = INT64_MAX;
	int16_t x296 = -1;
	static int32_t t70 = -53;

	t70 = (x293%((x294==x295)^x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = UINT32_MAX;
	int16_t x298 = INT16_MIN;
	int32_t x299 = -1;
	uint8_t x300 = 3U;
	uint32_t t71 = 78125015U;

	t71 = (x297%((x298==x299)^x300));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = 5790496;
	uint8_t x302 = 95U;
	static volatile int8_t x304 = INT8_MAX;
	volatile int32_t t72 = -215058;

	t72 = (x301%((x302==x303)^x304));

	if (t72 != 58) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x305 = 1;
	uint32_t x306 = UINT32_MAX;
	static volatile uint8_t x308 = 37U;
	volatile int32_t t73 = 2441759;

	t73 = (x305%((x306==x307)^x308));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x309 = INT64_MAX;
	uint32_t x310 = 24358607U;
	int16_t x311 = INT16_MIN;
	volatile int64_t t74 = -5LL;

	t74 = (x309%((x310==x311)^x312));

	if (t74 != 82LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x313 = UINT8_MAX;
	int32_t t75 = -1;

	t75 = (x313%((x314==x315)^x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = -1;
	int16_t x318 = 2612;
	int8_t x320 = -1;
	static volatile int32_t t76 = 219890599;

	t76 = (x317%((x318==x319)^x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 60U;
	static int32_t x322 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t77 = 350;

	t77 = (x321%((x322==x323)^x324));

	if (t77 != 60) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x325 = INT16_MIN;
	static int16_t x326 = INT16_MIN;
	static volatile int64_t x327 = INT64_MIN;
	int32_t x328 = 5;
	int32_t t78 = 58;

	t78 = (x325%((x326==x327)^x328));

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x329 = INT32_MAX;
	int64_t x330 = -1LL;
	volatile uint64_t x331 = 58870098471LLU;
	uint64_t x332 = 8LLU;
	volatile uint64_t t79 = 1LLU;

	t79 = (x329%((x330==x331)^x332));

	if (t79 != 7LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 3U;
	static int64_t x334 = INT64_MIN;
	static int16_t x335 = INT16_MIN;
	static int16_t x336 = 16;

	t80 = (x333%((x334==x335)^x336));

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x337 = 2;
	static volatile uint16_t x338 = 112U;
	static int16_t x339 = -826;
	int8_t x340 = 1;
	int32_t t81 = 11955;

	t81 = (x337%((x338==x339)^x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = 11;
	int16_t x342 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t82 = 7LLU;

	t82 = (x341%((x342==x343)^x344));

	if (t82 != 11LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x349 = 3953U;
	volatile int64_t x350 = -887675027286LL;
	volatile uint64_t x352 = 37353319320536LLU;
	volatile uint64_t t83 = 90458LLU;

	t83 = (x349%((x350==x351)^x352));

	if (t83 != 3953LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x353 = -253601790;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t84 = -7393;

	t84 = (x353%((x354==x355)^x356));

	if (t84 != -25716) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 1U;
	int64_t x358 = INT64_MAX;
	uint64_t x359 = UINT64_MAX;
	static uint32_t t85 = 6U;

	t85 = (x357%((x358==x359)^x360));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MAX;
	static volatile uint64_t t86 = 63347LLU;

	t86 = (x361%((x362==x363)^x364));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -24;
	volatile uint16_t x366 = 0U;
	volatile int64_t x367 = INT64_MIN;
	uint64_t x368 = 4320836LLU;
	volatile uint64_t t87 = 159505467289LLU;

	t87 = (x365%((x366==x367)^x368));

	if (t87 != 3868532LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	static int64_t x370 = -1434976LL;
	static int16_t x371 = -1;
	int32_t x372 = 149;

	t88 = (x369%((x370==x371)^x372));

	if (t88 != -51LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MAX;

	t89 = (x373%((x374==x375)^x376));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x378 = INT64_MIN;
	uint16_t x379 = 1U;

	t90 = (x377%((x378==x379)^x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x381 = 19U;
	volatile int64_t x382 = -21670252LL;
	volatile int8_t x383 = INT8_MIN;
	int32_t t91 = 423315;

	t91 = (x381%((x382==x383)^x384));

	if (t91 != 19) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = UINT8_MAX;
	volatile int8_t x386 = -21;
	int16_t x387 = 127;
	static volatile int32_t x388 = -1;
	int32_t t92 = 451956548;

	t92 = (x385%((x386==x387)^x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x389 = -421317285931LL;
	int16_t x390 = INT16_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	int16_t x392 = -1;

	t93 = (x389%((x390==x391)^x392));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x393 = 5U;
	int32_t t94 = -3749164;

	t94 = (x393%((x394==x395)^x396));

	if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = UINT64_MAX;
	int64_t x398 = -890174890419610LL;
	static int16_t x399 = -1;
	int16_t x400 = -1;

	t95 = (x397%((x398==x399)^x400));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x402 = -1;
	volatile int64_t x404 = -1LL;
	int64_t t96 = -2708031963923773LL;

	t96 = (x401%((x402==x403)^x404));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x406 = INT8_MIN;
	uint16_t x407 = 28741U;
	static int16_t x408 = 3;
	volatile uint32_t t97 = 2U;

	t97 = (x405%((x406==x407)^x408));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = 11U;
	int16_t x410 = INT16_MIN;
	int16_t x412 = -1;
	volatile int32_t t98 = 46;

	t98 = (x409%((x410==x411)^x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x413 = 33315LLU;
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = -1;

	t99 = (x413%((x414==x415)^x416));

	if (t99 != 33315LLU) { NG(); } else { ; }
	
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

