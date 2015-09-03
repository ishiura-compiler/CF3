#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int64_t x3 = INT64_MIN;
int8_t x13 = -3;
int32_t x14 = -1;
int8_t x15 = 1;
static volatile int8_t x24 = -47;
int64_t x31 = -3727172551793LL;
static int32_t x33 = INT32_MAX;
int16_t x39 = INT16_MIN;
static volatile int32_t t8 = 461229;
uint32_t x41 = 12011U;
volatile int32_t t9 = 230;
int64_t x45 = INT64_MIN;
static int8_t x47 = 1;
uint16_t x51 = 4U;
volatile int64_t t11 = 11LL;
volatile int64_t t12 = -21133212100718735LL;
int64_t x60 = INT64_MAX;
volatile int64_t t15 = -461LL;
volatile uint32_t t16 = 353549671U;
uint64_t t18 = 131384515798199890LLU;
static volatile uint32_t x85 = UINT32_MAX;
volatile uint32_t t20 = 4135638U;
int32_t x89 = INT32_MAX;
int32_t t23 = 24675638;
volatile uint16_t x104 = UINT16_MAX;
volatile int8_t x107 = INT8_MAX;
static int16_t x109 = -5;
static int64_t x119 = INT64_MIN;
volatile int64_t t27 = -31LL;
int8_t x122 = INT8_MIN;
uint32_t x138 = 29U;
uint16_t x140 = UINT16_MAX;
uint64_t x141 = 110739366LLU;
int8_t x143 = INT8_MIN;
uint64_t x146 = 898307LLU;
static int8_t x149 = -1;
uint64_t x158 = 437089959LLU;
int32_t t38 = -21105719;
volatile int16_t x173 = -1;
uint16_t x175 = UINT16_MAX;
int32_t t39 = 1063;
uint16_t x185 = UINT16_MAX;
int8_t x188 = 1;
int32_t x189 = -408;
static int32_t x198 = -153;
int32_t x203 = -20;
int8_t x205 = INT8_MAX;
static uint8_t x223 = 47U;
volatile uint16_t x235 = 17U;
uint64_t x246 = 498017733LLU;
uint64_t x250 = 37LLU;
int64_t x261 = -2216585142LL;
static uint64_t x262 = 165091LLU;
uint8_t x267 = UINT8_MAX;
int8_t x268 = -1;
int32_t t57 = 37354564;
volatile int16_t x272 = INT16_MIN;
volatile int32_t x275 = -1;
volatile uint64_t x279 = UINT64_MAX;
volatile int8_t x285 = INT8_MIN;
int32_t x287 = -1;
static int64_t x291 = INT64_MIN;
uint8_t x303 = 3U;
int8_t x311 = INT8_MIN;
static volatile int8_t x312 = INT8_MIN;
volatile uint64_t x323 = 2358354002504599996LLU;
static volatile uint16_t x324 = UINT16_MAX;
int32_t x327 = 26779;
static volatile int64_t x329 = 16595726201453LL;
int8_t x334 = INT8_MIN;
int32_t x343 = 19;
uint16_t x345 = 3559U;
int32_t t77 = -1470;
uint64_t t78 = 3612457301LLU;
int8_t x362 = INT8_MIN;
int64_t x363 = INT64_MIN;
int16_t x369 = 50;
int64_t x377 = INT64_MAX;
volatile int16_t x378 = INT16_MIN;
static int16_t x379 = 232;
uint16_t x382 = 52U;
volatile int32_t t86 = 409;
volatile int8_t x397 = INT8_MAX;
int64_t x398 = -3826615637842118LL;
static int16_t x399 = -28;
volatile int32_t x400 = INT32_MAX;
int32_t x411 = 3360123;
int64_t x414 = INT64_MAX;
static int8_t x415 = 3;
volatile int8_t x416 = INT8_MIN;
static int32_t x420 = -6601509;
uint8_t x426 = UINT8_MAX;
volatile int32_t t93 = 6041651;
int16_t x440 = INT16_MAX;
uint8_t x452 = UINT8_MAX;


void f0(void) {
	uint16_t x2 = 22168U;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = -77065228127LL;

	t0 = (((x1<x2)/x3)-x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int8_t x6 = -2;
	static volatile int64_t x7 = INT64_MAX;
	int8_t x8 = -47;
	int64_t t1 = -499LL;

	t1 = (((x5<x6)/x7)-x8);

	if (t1 != 47LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 57U;
	int16_t x10 = INT16_MAX;
	int8_t x11 = -11;
	uint16_t x12 = 3860U;
	volatile int32_t t2 = -12704424;

	t2 = (((x9<x10)/x11)-x12);

	if (t2 != -3860) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -1696918;

	t3 = (((x13<x14)/x15)-x16);

	if (t3 != 32769) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	uint32_t x23 = UINT32_MAX;
	uint32_t t4 = 0U;

	t4 = (((x21<x22)/x23)-x24);

	if (t4 != 47U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x25 = 6284;
	int16_t x26 = -28;
	volatile uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MIN;
	uint32_t t5 = 13591692U;

	t5 = (((x25<x26)/x27)-x28);

	if (t5 != 128U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = -15;
	uint64_t x32 = UINT64_MAX;
	uint64_t t6 = 213LLU;

	t6 = (((x29<x30)/x31)-x32);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = INT16_MIN;
	volatile int32_t x35 = 166;
	int32_t x36 = -3573;
	volatile int32_t t7 = 13;

	t7 = (((x33<x34)/x35)-x36);

	if (t7 != 3573) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	uint16_t x38 = UINT16_MAX;
	int32_t x40 = -13;

	t8 = (((x37<x38)/x39)-x40);

	if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = INT64_MAX;
	int32_t x43 = -1;
	volatile int8_t x44 = INT8_MAX;

	t9 = (((x41<x42)/x43)-x44);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -9;
	uint8_t x48 = UINT8_MAX;
	static volatile int32_t t10 = 1;

	t10 = (((x45<x46)/x47)-x48);

	if (t10 != -254) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 126694057U;
	int32_t x50 = -1;
	int64_t x52 = 26661095LL;

	t11 = (((x49<x50)/x51)-x52);

	if (t11 != -26661095LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MAX;
	uint32_t x54 = UINT32_MAX;
	static int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;

	t12 = (((x53<x54)/x55)-x56);

	if (t12 != 32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 10U;
	int64_t x58 = 3847141797477089LL;
	volatile int16_t x59 = -1;
	int64_t t13 = INT64_MIN;

	t13 = (((x57<x58)/x59)-x60);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	static int8_t x62 = INT8_MAX;
	int64_t x63 = 21409551147439559LL;
	static volatile uint16_t x64 = UINT16_MAX;
	volatile int64_t t14 = -15204458675574291LL;

	t14 = (((x61<x62)/x63)-x64);

	if (t14 != -65535LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 27028513;
	int16_t x66 = INT16_MIN;
	int32_t x67 = -1;
	volatile int64_t x68 = INT64_MAX;

	t15 = (((x65<x66)/x67)-x68);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 5;
	uint32_t x70 = 1813476U;
	static uint32_t x71 = UINT32_MAX;
	uint32_t x72 = 25768423U;

	t16 = (((x69<x70)/x71)-x72);

	if (t16 != 4269198873U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 10871291617LLU;
	volatile int8_t x74 = INT8_MAX;
	int32_t x75 = 132951;
	int8_t x76 = INT8_MIN;
	static int32_t t17 = 1;

	t17 = (((x73<x74)/x75)-x76);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -7067;
	volatile uint64_t x78 = 131LLU;
	uint8_t x79 = UINT8_MAX;
	volatile uint64_t x80 = UINT64_MAX;

	t18 = (((x77<x78)/x79)-x80);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	static volatile int64_t x82 = INT64_MAX;
	uint64_t x83 = UINT64_MAX;
	int16_t x84 = -1;
	volatile uint64_t t19 = 544747069935074160LLU;

	t19 = (((x81<x82)/x83)-x84);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 4U;

	t20 = (((x85<x86)/x87)-x88);

	if (t20 != 4294967292U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x90 = 31U;
	static int16_t x91 = -1;
	uint32_t x92 = 114U;
	volatile uint32_t t21 = 904716149U;

	t21 = (((x89<x90)/x91)-x92);

	if (t21 != 4294967182U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MAX;
	volatile int64_t x94 = INT64_MIN;
	static uint8_t x95 = 3U;
	static int32_t x96 = -627281;
	int32_t t22 = -222620445;

	t22 = (((x93<x94)/x95)-x96);

	if (t22 != 627281) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 10LLU;
	int64_t x98 = -1115983589055745849LL;
	int32_t x99 = 26373;
	int8_t x100 = -1;

	t23 = (((x97<x98)/x99)-x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = -1;
	static volatile int64_t x102 = 50017065377657LL;
	volatile uint32_t x103 = 493587U;
	volatile uint32_t t24 = 95U;

	t24 = (((x101<x102)/x103)-x104);

	if (t24 != 4294901761U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 1;
	int16_t x106 = INT16_MIN;
	uint64_t x108 = 51160015LLU;
	volatile uint64_t t25 = 6927394828LLU;

	t25 = (((x105<x106)/x107)-x108);

	if (t25 != 18446744073658391601LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = 8;
	uint8_t x111 = UINT8_MAX;
	volatile int16_t x112 = INT16_MIN;
	int32_t t26 = 13;

	t26 = (((x109<x110)/x111)-x112);

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 54U;
	volatile int8_t x118 = 11;
	static int8_t x120 = -1;

	t27 = (((x117<x118)/x119)-x120);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = INT16_MAX;
	int64_t x123 = -1LL;
	uint32_t x124 = 12270U;
	int64_t t28 = -27377246639091LL;

	t28 = (((x121<x122)/x123)-x124);

	if (t28 != -12270LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x125 = 567U;
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	int64_t x128 = -71897776587LL;
	volatile int64_t t29 = 205797708LL;

	t29 = (((x125<x126)/x127)-x128);

	if (t29 != 71897776587LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	static int32_t x134 = INT32_MIN;
	static int32_t x135 = -502995446;
	volatile int32_t x136 = -59;
	volatile int32_t t30 = 883652060;

	t30 = (((x133<x134)/x135)-x136);

	if (t30 != 59) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x137 = 109U;
	uint64_t x139 = 1195364LLU;
	volatile uint64_t t31 = 4552478896007434LLU;

	t31 = (((x137<x138)/x139)-x140);

	if (t31 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x142 = -2;
	int16_t x144 = -28;
	int32_t t32 = -61852;

	t32 = (((x141<x142)/x143)-x144);

	if (t32 != 28) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x145 = -1;
	static int64_t x147 = INT64_MIN;
	int8_t x148 = 0;
	volatile int64_t t33 = -6LL;

	t33 = (((x145<x146)/x147)-x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x150 = INT16_MAX;
	uint16_t x151 = UINT16_MAX;
	static volatile uint16_t x152 = 87U;
	volatile int32_t t34 = 332427;

	t34 = (((x149<x150)/x151)-x152);

	if (t34 != -87) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = -729455448888744930LL;
	int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MAX;
	int32_t t35 = 2961;

	t35 = (((x153<x154)/x155)-x156);

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x157 = -8;
	int8_t x159 = 15;
	volatile uint32_t x160 = 1946973U;
	uint32_t t36 = 4263118U;

	t36 = (((x157<x158)/x159)-x160);

	if (t36 != 4293020323U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MAX;
	volatile uint64_t x167 = UINT64_MAX;
	static int16_t x168 = -2766;
	uint64_t t37 = 1516816158353161LLU;

	t37 = (((x165<x166)/x167)-x168);

	if (t37 != 2766LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 0U;
	static volatile int64_t x170 = -133160694LL;
	uint8_t x171 = 3U;
	static int16_t x172 = -320;

	t38 = (((x169<x170)/x171)-x172);

	if (t38 != 320) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x174 = -1;
	uint8_t x176 = 33U;

	t39 = (((x173<x174)/x175)-x176);

	if (t39 != -33) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = 21797U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t40 = -9664;

	t40 = (((x181<x182)/x183)-x184);

	if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x186 = 387U;
	uint8_t x187 = 24U;
	int32_t t41 = -62442682;

	t41 = (((x185<x186)/x187)-x188);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x190 = -1;
	uint8_t x191 = 12U;
	int16_t x192 = INT16_MIN;
	volatile int32_t t42 = -2357803;

	t42 = (((x189<x190)/x191)-x192);

	if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = INT16_MAX;
	uint16_t x194 = 6U;
	static uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t43 = 3LLU;

	t43 = (((x193<x194)/x195)-x196);

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MAX;
	int16_t x199 = 7;
	volatile int32_t x200 = 4;
	volatile int32_t t44 = 1;

	t44 = (((x197<x198)/x199)-x200);

	if (t44 != -4) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = INT32_MIN;
	static int32_t x202 = -1;
	int16_t x204 = -1;
	volatile int32_t t45 = -323354;

	t45 = (((x201<x202)/x203)-x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x206 = INT64_MIN;
	static int8_t x207 = -1;
	uint16_t x208 = 938U;
	int32_t t46 = 6276958;

	t46 = (((x205<x206)/x207)-x208);

	if (t46 != -938) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = -171;
	int32_t x214 = 32945723;
	uint16_t x215 = 1U;
	uint32_t x216 = UINT32_MAX;
	static volatile uint32_t t47 = 9878U;

	t47 = (((x213<x214)/x215)-x216);

	if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x221 = 62;
	volatile int64_t x222 = -1LL;
	uint64_t x224 = 1256149104584LLU;
	uint64_t t48 = 109LLU;

	t48 = (((x221<x222)/x223)-x224);

	if (t48 != 18446742817560447032LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = 5594908589244LLU;
	uint8_t x230 = 49U;
	static volatile int8_t x231 = -1;
	int64_t x232 = -1LL;
	int64_t t49 = -9293LL;

	t49 = (((x229<x230)/x231)-x232);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x233 = UINT64_MAX;
	int64_t x234 = 3LL;
	uint64_t x236 = UINT64_MAX;
	uint64_t t50 = 958758549LLU;

	t50 = (((x233<x234)/x235)-x236);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = UINT16_MAX;
	uint64_t x238 = 255520584662133325LLU;
	int8_t x239 = 1;
	static int8_t x240 = -1;
	int32_t t51 = -946;

	t51 = (((x237<x238)/x239)-x240);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x241 = UINT64_MAX;
	static int16_t x242 = INT16_MIN;
	static int8_t x243 = INT8_MAX;
	static uint64_t x244 = 868LLU;
	uint64_t t52 = 20894552858233460LLU;

	t52 = (((x241<x242)/x243)-x244);

	if (t52 != 18446744073709550748LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = INT32_MIN;
	int16_t x247 = 12014;
	int64_t x248 = -9571LL;
	volatile int64_t t53 = 58894LL;

	t53 = (((x245<x246)/x247)-x248);

	if (t53 != 9571LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = 21;
	int64_t x251 = 1800491584604933LL;
	int8_t x252 = -5;
	int64_t t54 = -26016369009178662LL;

	t54 = (((x249<x250)/x251)-x252);

	if (t54 != 5LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x257 = -42;
	int64_t x258 = INT64_MIN;
	volatile int64_t x259 = 1LL;
	uint16_t x260 = UINT16_MAX;
	int64_t t55 = -1LL;

	t55 = (((x257<x258)/x259)-x260);

	if (t55 != -65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x263 = 11;
	int16_t x264 = INT16_MIN;
	static int32_t t56 = 10913277;

	t56 = (((x261<x262)/x263)-x264);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = -1;
	static int64_t x266 = INT64_MIN;

	t57 = (((x265<x266)/x267)-x268);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x269 = INT32_MAX;
	uint32_t x270 = 11128732U;
	static uint8_t x271 = 1U;
	volatile int32_t t58 = 390256444;

	t58 = (((x269<x270)/x271)-x272);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x273 = 244164219U;
	uint64_t x274 = 126044738LLU;
	int16_t x276 = -2039;
	volatile int32_t t59 = -923368079;

	t59 = (((x273<x274)/x275)-x276);

	if (t59 != 2039) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = 21156LLU;
	int8_t x278 = INT8_MAX;
	int8_t x280 = INT8_MAX;
	static uint64_t t60 = 178LLU;

	t60 = (((x277<x278)/x279)-x280);

	if (t60 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = -1LL;
	static uint16_t x282 = 3U;
	int32_t x283 = -6;
	uint64_t x284 = UINT64_MAX;
	uint64_t t61 = 71740961651447LLU;

	t61 = (((x281<x282)/x283)-x284);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x286 = -1;
	uint64_t x288 = 12833087LLU;
	uint64_t t62 = 16012LLU;

	t62 = (((x285<x286)/x287)-x288);

	if (t62 != 18446744073696718528LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = -1;
	int32_t x290 = INT32_MIN;
	static uint16_t x292 = 11336U;
	int64_t t63 = -7603971LL;

	t63 = (((x289<x290)/x291)-x292);

	if (t63 != -11336LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = INT8_MAX;
	int16_t x294 = INT16_MAX;
	uint16_t x295 = 19193U;
	int16_t x296 = 648;
	static int32_t t64 = 766518;

	t64 = (((x293<x294)/x295)-x296);

	if (t64 != -648) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MAX;
	int16_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	uint32_t t65 = 1650620U;

	t65 = (((x297<x298)/x299)-x300);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x301 = INT16_MAX;
	volatile int16_t x302 = -1;
	static uint32_t x304 = 11023U;
	uint32_t t66 = 39308856U;

	t66 = (((x301<x302)/x303)-x304);

	if (t66 != 4294956273U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x309 = 947558046U;
	int32_t x310 = INT32_MIN;
	int32_t t67 = -175440;

	t67 = (((x309<x310)/x311)-x312);

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x313 = UINT64_MAX;
	uint16_t x314 = 1U;
	uint32_t x315 = UINT32_MAX;
	int16_t x316 = -1577;
	volatile uint32_t t68 = 995U;

	t68 = (((x313<x314)/x315)-x316);

	if (t68 != 1577U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = 17727932058429313LLU;
	int8_t x318 = INT8_MIN;
	volatile uint64_t x319 = 15241736860783169LLU;
	int16_t x320 = -1;
	uint64_t t69 = 1713LLU;

	t69 = (((x317<x318)/x319)-x320);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x321 = UINT16_MAX;
	uint64_t x322 = 6931054766619126513LLU;
	volatile uint64_t t70 = 1343LLU;

	t70 = (((x321<x322)/x323)-x324);

	if (t70 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x325 = 1U;
	static int32_t x326 = INT32_MAX;
	int32_t x328 = INT32_MAX;
	volatile int32_t t71 = -4035268;

	t71 = (((x325<x326)/x327)-x328);

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x330 = INT32_MIN;
	int16_t x331 = 29;
	uint32_t x332 = 171222025U;
	static uint32_t t72 = 2U;

	t72 = (((x329<x330)/x331)-x332);

	if (t72 != 4123745271U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = -1;
	static int64_t x335 = -1LL;
	volatile int32_t x336 = INT32_MIN;
	volatile int64_t t73 = -147493927516362507LL;

	t73 = (((x333<x334)/x335)-x336);

	if (t73 != 2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x338 = 145153029923LLU;
	static int32_t x339 = INT32_MIN;
	volatile uint8_t x340 = 7U;
	int32_t t74 = 8190832;

	t74 = (((x337<x338)/x339)-x340);

	if (t74 != -7) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = 0;
	volatile int16_t x342 = INT16_MIN;
	static int16_t x344 = 724;
	int32_t t75 = -6256769;

	t75 = (((x341<x342)/x343)-x344);

	if (t75 != -724) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t76 = 280;

	t76 = (((x345<x346)/x347)-x348);

	if (t76 != -65535) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = 412713757126043LL;
	int64_t x350 = 2962038300616057326LL;
	volatile uint8_t x351 = UINT8_MAX;
	int32_t x352 = -708;

	t77 = (((x349<x350)/x351)-x352);

	if (t77 != 708) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x353 = 66647736329800718LL;
	uint8_t x354 = 103U;
	uint16_t x355 = 217U;
	uint64_t x356 = 369514122335306LLU;

	t78 = (((x353<x354)/x355)-x356);

	if (t78 != 18446374559587216310LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x357 = UINT32_MAX;
	volatile int16_t x358 = 13084;
	static int32_t x359 = -1;
	static volatile int32_t x360 = 43247;
	int32_t t79 = 5642;

	t79 = (((x357<x358)/x359)-x360);

	if (t79 != -43247) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x361 = UINT32_MAX;
	volatile int16_t x364 = -983;
	static volatile int64_t t80 = 4LL;

	t80 = (((x361<x362)/x363)-x364);

	if (t80 != 983LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x365 = 0U;
	int32_t x366 = INT32_MIN;
	volatile uint64_t x367 = 97644527LLU;
	int64_t x368 = -31LL;
	static volatile uint64_t t81 = 5LLU;

	t81 = (((x365<x366)/x367)-x368);

	if (t81 != 31LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x370 = INT8_MAX;
	uint64_t x371 = UINT64_MAX;
	uint32_t x372 = 1234U;
	uint64_t t82 = 26126796LLU;

	t82 = (((x369<x370)/x371)-x372);

	if (t82 != 18446744073709550382LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x373 = 8770U;
	int32_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	int64_t t83 = -7556300777660481LL;

	t83 = (((x373<x374)/x375)-x376);

	if (t83 != 128LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x380 = INT64_MAX;
	int64_t t84 = 858419555043538LL;

	t84 = (((x377<x378)/x379)-x380);

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x381 = 457LLU;
	volatile int16_t x383 = INT16_MIN;
	int32_t x384 = 6;
	int32_t t85 = 0;

	t85 = (((x381<x382)/x383)-x384);

	if (t85 != -6) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = -1;
	static int8_t x395 = 29;
	volatile int16_t x396 = INT16_MAX;

	t86 = (((x393<x394)/x395)-x396);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t t87 = 1;

	t87 = (((x397<x398)/x399)-x400);

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = -1;
	int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MIN;
	static uint64_t x404 = 356625992LLU;
	static uint64_t t88 = 4532253152303302LLU;

	t88 = (((x401<x402)/x403)-x404);

	if (t88 != 18446744073352925624LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = 100U;
	int64_t x406 = INT64_MAX;
	uint32_t x407 = 1213089U;
	uint16_t x408 = 12594U;
	volatile uint32_t t89 = 235924U;

	t89 = (((x405<x406)/x407)-x408);

	if (t89 != 4294954702U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x409 = INT32_MIN;
	int64_t x410 = 3910721037288560LL;
	int16_t x412 = -1;
	volatile int32_t t90 = 258402378;

	t90 = (((x409<x410)/x411)-x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x413 = UINT16_MAX;
	int32_t t91 = 1737913;

	t91 = (((x413<x414)/x415)-x416);

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = -121;
	uint8_t x418 = 106U;
	int16_t x419 = INT16_MIN;
	volatile int32_t t92 = 50285716;

	t92 = (((x417<x418)/x419)-x420);

	if (t92 != 6601509) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x425 = 18736655908375LLU;
	int8_t x427 = 1;
	static uint8_t x428 = UINT8_MAX;

	t93 = (((x425<x426)/x427)-x428);

	if (t93 != -255) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = -1;
	int8_t x431 = 48;
	static volatile uint16_t x432 = 1U;
	volatile int32_t t94 = 1881;

	t94 = (((x429<x430)/x431)-x432);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = INT16_MIN;
	static int16_t x434 = INT16_MIN;
	static uint32_t x435 = 31U;
	int16_t x436 = -15;
	volatile uint32_t t95 = 11078U;

	t95 = (((x433<x434)/x435)-x436);

	if (t95 != 15U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x437 = INT16_MIN;
	uint8_t x438 = 104U;
	static int16_t x439 = -76;
	static volatile int32_t t96 = 4058658;

	t96 = (((x437<x438)/x439)-x440);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x441 = UINT16_MAX;
	int32_t x442 = INT32_MIN;
	int32_t x443 = -1;
	static volatile uint64_t x444 = 219486238LLU;
	static volatile uint64_t t97 = 25458LLU;

	t97 = (((x441<x442)/x443)-x444);

	if (t97 != 18446744073490065378LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = INT16_MIN;
	static int16_t x450 = INT16_MAX;
	uint32_t x451 = 25417U;
	static uint32_t t98 = 23U;

	t98 = (((x449<x450)/x451)-x452);

	if (t98 != 4294967041U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x453 = 1307228279056235LLU;
	uint32_t x454 = 1659565U;
	int64_t x455 = INT64_MIN;
	int16_t x456 = 307;
	volatile int64_t t99 = 1570LL;

	t99 = (((x453<x454)/x455)-x456);

	if (t99 != -307LL) { NG(); } else { ; }
	
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

