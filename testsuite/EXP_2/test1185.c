#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int8_t x5 = 0;
int32_t t1 = 55454;
int16_t x11 = -2596;
volatile int32_t t3 = 0;
int8_t x17 = -1;
volatile int32_t t4 = -1;
static uint16_t x24 = 381U;
int32_t t6 = -4849606;
int64_t x31 = INT64_MAX;
volatile int8_t x33 = -1;
uint8_t x37 = 0U;
static volatile int16_t x39 = INT16_MAX;
static int32_t t9 = 131;
int32_t x42 = INT32_MIN;
uint32_t x60 = 288U;
uint64_t t13 = 2793804LLU;
uint16_t x72 = 4U;
uint64_t x74 = 482LLU;
int16_t x75 = INT16_MIN;
volatile int16_t x81 = -1;
int32_t t21 = 1;
int8_t x103 = 35;
volatile int8_t x110 = INT8_MIN;
uint16_t x112 = UINT16_MAX;
volatile int64_t x127 = INT64_MIN;
static uint16_t x136 = 16348U;
int32_t x140 = 373;
volatile int64_t x144 = -11597419LL;
int8_t x145 = INT8_MIN;
volatile int32_t t32 = 5;
volatile int32_t t33 = INT32_MIN;
volatile int8_t x156 = 1;
static volatile uint16_t x159 = 61U;
int8_t x168 = INT8_MIN;
uint8_t x169 = UINT8_MAX;
volatile int32_t t38 = 227079;
int64_t x175 = INT64_MAX;
int64_t t39 = 4LL;
uint32_t x177 = 425084U;
static volatile uint32_t t40 = 445200521U;
static int16_t x187 = -1;
uint8_t x188 = 13U;
uint8_t x197 = 48U;
static int16_t x204 = -1;
int64_t x205 = 1LL;
uint64_t x212 = 608237797842203639LLU;
int8_t x215 = INT8_MIN;
int32_t x219 = INT32_MAX;
volatile int32_t t49 = -5148095;
volatile int8_t x223 = INT8_MAX;
uint16_t x226 = UINT16_MAX;
int64_t x227 = INT64_MIN;
uint32_t x231 = UINT32_MAX;
volatile int32_t t52 = -35472878;
volatile uint32_t t53 = 24194293U;
int16_t x242 = 6;
volatile uint32_t x243 = 30032150U;
int8_t x270 = INT8_MIN;
volatile uint64_t t61 = 402993573897415LLU;
int16_t x273 = INT16_MIN;
volatile uint64_t t63 = 314487295763534LLU;
volatile int32_t x286 = -1;
static int64_t t67 = -1LL;
uint16_t x304 = 223U;
volatile int32_t t70 = 109391;
static uint64_t x315 = 927131736568LLU;
volatile int32_t t72 = 13282;
volatile uint64_t x327 = 8635266731587LLU;
static int64_t x328 = INT64_MIN;
static uint64_t t76 = 4688007LLU;
static int16_t x341 = INT16_MAX;
uint16_t x351 = 3U;
volatile uint64_t x354 = 183170360245656439LLU;
uint8_t x356 = UINT8_MAX;
uint32_t t80 = 14422705U;
int16_t x363 = INT16_MAX;
int64_t x366 = INT64_MAX;
uint16_t x368 = 0U;
volatile int64_t t84 = 0LL;
uint8_t x373 = 1U;
int16_t x376 = INT16_MAX;
volatile int32_t t85 = 3;
volatile int64_t t86 = -1LL;
int8_t x394 = -1;
uint16_t x395 = UINT16_MAX;
static volatile uint16_t x418 = 3574U;
volatile int64_t x420 = INT64_MIN;
int8_t x422 = INT8_MIN;
static volatile int64_t x425 = -1LL;
uint16_t x430 = 8071U;
int32_t x431 = -1;
static uint8_t x432 = 2U;
volatile uint64_t t97 = 11777755LLU;
uint8_t x435 = 0U;
volatile int32_t t98 = 478;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int8_t x3 = -1;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 107835383631513991LLU;

	t0 = ((x1+(x2==x3))-x4);

	if (t0 != 4294967296LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 58U;
	int64_t x7 = -1LL;
	int8_t x8 = INT8_MIN;

	t1 = ((x5+(x6==x7))-x8);

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 1;
	int32_t x10 = 849005;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 7167369;

	t2 = ((x9+(x10==x11))-x12);

	if (t2 != 32769) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile uint16_t x14 = UINT16_MAX;
	static int64_t x15 = -248657440LL;
	int8_t x16 = -1;

	t3 = ((x13+(x14==x15))-x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MAX;
	uint8_t x19 = 4U;
	int8_t x20 = INT8_MIN;

	t4 = ((x17+(x18==x19))-x20);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 68U;
	int64_t x22 = -1LL;
	volatile int16_t x23 = INT16_MIN;
	static int32_t t5 = -34;

	t5 = ((x21+(x22==x23))-x24);

	if (t5 != -313) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 934U;
	static uint16_t x26 = UINT16_MAX;
	int16_t x27 = INT16_MIN;
	static int16_t x28 = 6269;

	t6 = ((x25+(x26==x27))-x28);

	if (t6 != -5335) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 67U;
	volatile int16_t x30 = -1;
	static int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 3;

	t7 = ((x29+(x30==x31))-x32);

	if (t7 != 195) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x34 = 3303U;
	static int64_t x35 = INT64_MIN;
	int32_t x36 = -1;
	volatile int32_t t8 = -9581;

	t8 = ((x33+(x34==x35))-x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x38 = INT32_MIN;
	static int8_t x40 = 15;

	t9 = ((x37+(x38==x39))-x40);

	if (t9 != -15) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -3827;
	uint8_t x43 = UINT8_MAX;
	int16_t x44 = -4;
	volatile int32_t t10 = 114;

	t10 = ((x41+(x42==x43))-x44);

	if (t10 != -3823) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	uint16_t x46 = 11949U;
	uint16_t x47 = 7936U;
	static int16_t x48 = -1;
	uint64_t t11 = 819LLU;

	t11 = ((x45+(x46==x47))-x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	static volatile int16_t x50 = 4;
	uint8_t x51 = 24U;
	static int32_t x52 = INT32_MAX;
	static volatile int32_t t12 = INT32_MIN;

	t12 = ((x49+(x50==x51))-x52);

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 548607045738LLU;
	static int8_t x58 = INT8_MIN;
	uint64_t x59 = UINT64_MAX;

	t13 = ((x57+(x58==x59))-x60);

	if (t13 != 548607045450LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -1;
	volatile int8_t x66 = 0;
	volatile int32_t x67 = -3862423;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int32_t t14 = -56;

	t14 = ((x65+(x66==x67))-x68);

	if (t14 != -256) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 0LLU;
	int16_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	volatile uint64_t t15 = 201695381253582LLU;

	t15 = ((x69+(x70==x71))-x72);

	if (t15 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = UINT8_MAX;
	int64_t x76 = 83555LL;
	volatile int64_t t16 = -1712LL;

	t16 = ((x73+(x74==x75))-x76);

	if (t16 != -83300LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MAX;
	int64_t x78 = 77149844666807LL;
	int8_t x79 = -1;
	uint64_t x80 = 224252281183921LLU;
	static volatile uint64_t t17 = 1395003197LLU;

	t17 = ((x77+(x78==x79))-x80);

	if (t17 != 18446519821428400462LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x82 = 358203890770994656LLU;
	int64_t x83 = -1LL;
	int8_t x84 = INT8_MIN;
	static int32_t t18 = 30;

	t18 = ((x81+(x82==x83))-x84);

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = INT16_MIN;
	int32_t x86 = 131315;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = -4664;
	int32_t t19 = 13302;

	t19 = ((x85+(x86==x87))-x88);

	if (t19 != -28104) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 15U;
	uint64_t x90 = 61843847623004LLU;
	uint8_t x91 = UINT8_MAX;
	static uint8_t x92 = UINT8_MAX;
	volatile int32_t t20 = -194;

	t20 = ((x89+(x90==x91))-x92);

	if (t20 != -240) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = -293;
	static uint8_t x94 = UINT8_MAX;
	static int16_t x95 = 24;
	volatile int8_t x96 = -62;

	t21 = ((x93+(x94==x95))-x96);

	if (t21 != -231) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	int32_t x98 = -1;
	int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MAX;
	int32_t t22 = -24057911;

	t22 = ((x97+(x98==x99))-x100);

	if (t22 != 2147450880) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -1LL;
	uint64_t x102 = 1LLU;
	volatile uint32_t x104 = 816879U;
	volatile int64_t t23 = -934617298570283LL;

	t23 = ((x101+(x102==x103))-x104);

	if (t23 != -816880LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MAX;
	uint8_t x111 = 123U;
	int32_t t24 = 87699;

	t24 = ((x109+(x110==x111))-x112);

	if (t24 != -65408) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = 103917LL;
	uint32_t x114 = 117313U;
	static volatile int8_t x115 = -3;
	static volatile uint32_t x116 = 746U;
	int64_t t25 = 3867379262227454562LL;

	t25 = ((x113+(x114==x115))-x116);

	if (t25 != 103171LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x117 = 12704379746045975LLU;
	int64_t x118 = -2338476381088LL;
	static uint8_t x119 = 0U;
	static volatile uint16_t x120 = 10U;
	uint64_t t26 = 277584880660388477LLU;

	t26 = ((x117+(x118==x119))-x120);

	if (t26 != 12704379746045965LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = INT64_MAX;
	int32_t x128 = -1;
	uint32_t t27 = 215050U;

	t27 = ((x125+(x126==x127))-x128);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x129 = INT64_MIN;
	volatile uint32_t x130 = 1U;
	int8_t x131 = -20;
	static int8_t x132 = -1;
	volatile int64_t t28 = -20726LL;

	t28 = ((x129+(x130==x131))-x132);

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x133 = 3889U;
	int64_t x134 = INT64_MAX;
	int32_t x135 = -1;
	volatile int32_t t29 = 17379859;

	t29 = ((x133+(x134==x135))-x136);

	if (t29 != -12459) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 174LLU;
	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = INT32_MIN;
	static volatile uint64_t t30 = 1302650414627LLU;

	t30 = ((x137+(x138==x139))-x140);

	if (t30 != 18446744073709551417LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x141 = -269195588746LL;
	uint16_t x142 = 1U;
	static uint32_t x143 = 597U;
	volatile int64_t t31 = -926437440467583189LL;

	t31 = ((x141+(x142==x143))-x144);

	if (t31 != -269183991327LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x146 = INT32_MIN;
	static int64_t x147 = INT64_MIN;
	int16_t x148 = 1442;

	t32 = ((x145+(x146==x147))-x148);

	if (t32 != -1570) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = INT32_MIN;
	uint16_t x150 = 34U;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = 0U;

	t33 = ((x149+(x150==x151))-x152);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = -15989;
	int32_t x155 = INT32_MAX;
	int32_t t34 = -195865748;

	t34 = ((x153+(x154==x155))-x156);

	if (t34 != 2147483646) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -3669LL;
	uint8_t x158 = 15U;
	volatile int16_t x160 = INT16_MAX;
	int64_t t35 = 0LL;

	t35 = ((x157+(x158==x159))-x160);

	if (t35 != -36436LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = -1;
	static int16_t x162 = INT16_MIN;
	volatile int16_t x163 = INT16_MIN;
	int32_t x164 = -1;
	static int32_t t36 = 657033;

	t36 = ((x161+(x162==x163))-x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x165 = INT16_MIN;
	int32_t x166 = -1;
	int16_t x167 = -347;
	int32_t t37 = 14;

	t37 = ((x165+(x166==x167))-x168);

	if (t37 != -32640) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = 14;
	volatile uint8_t x171 = 35U;
	int16_t x172 = INT16_MAX;

	t38 = ((x169+(x170==x171))-x172);

	if (t38 != -32512) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MIN;
	int64_t x176 = INT64_MIN;

	t39 = ((x173+(x174==x175))-x176);

	if (t39 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x178 = 7LLU;
	volatile int16_t x179 = -79;
	int8_t x180 = INT8_MIN;

	t40 = ((x177+(x178==x179))-x180);

	if (t40 != 425212U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x185 = 97U;
	volatile int8_t x186 = -12;
	int32_t t41 = 1;

	t41 = ((x185+(x186==x187))-x188);

	if (t41 != 84) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MAX;
	static uint32_t x190 = 628140899U;
	static int8_t x191 = INT8_MIN;
	uint8_t x192 = UINT8_MAX;
	int32_t t42 = -81954;

	t42 = ((x189+(x190==x191))-x192);

	if (t42 != 32512) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x193 = 3086U;
	int16_t x194 = 903;
	volatile int16_t x195 = INT16_MAX;
	static uint16_t x196 = 0U;
	int32_t t43 = 1;

	t43 = ((x193+(x194==x195))-x196);

	if (t43 != 3086) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x198 = 127U;
	int16_t x199 = 0;
	int8_t x200 = 1;
	int32_t t44 = -2945;

	t44 = ((x197+(x198==x199))-x200);

	if (t44 != 47) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x201 = -1LL;
	volatile uint16_t x202 = 9742U;
	int16_t x203 = -1;
	int64_t t45 = 49784607738LL;

	t45 = ((x201+(x202==x203))-x204);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x206 = UINT32_MAX;
	uint64_t x207 = 4403947928066LLU;
	int16_t x208 = INT16_MIN;
	int64_t t46 = -15LL;

	t46 = ((x205+(x206==x207))-x208);

	if (t46 != 32769LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = -1;
	static int16_t x210 = INT16_MIN;
	volatile uint32_t x211 = UINT32_MAX;
	static volatile uint64_t t47 = 7665236LLU;

	t47 = ((x209+(x210==x211))-x212);

	if (t47 != 17838506275867347976LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x213 = -1;
	uint16_t x214 = 1006U;
	int8_t x216 = 61;
	volatile int32_t t48 = 1651;

	t48 = ((x213+(x214==x215))-x216);

	if (t48 != -62) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = 12432;
	volatile int16_t x218 = INT16_MAX;
	volatile int16_t x220 = INT16_MAX;

	t49 = ((x217+(x218==x219))-x220);

	if (t49 != -20335) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = -1LL;
	volatile int64_t x222 = -2559333851955717LL;
	static int8_t x224 = INT8_MAX;
	volatile int64_t t50 = 16030907LL;

	t50 = ((x221+(x222==x223))-x224);

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = UINT64_MAX;
	static int16_t x228 = -1;
	uint64_t t51 = 19327LLU;

	t51 = ((x225+(x226==x227))-x228);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -3809428;
	volatile int8_t x230 = INT8_MAX;
	static volatile int16_t x232 = INT16_MIN;

	t52 = ((x229+(x230==x231))-x232);

	if (t52 != -3776660) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 11317U;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MAX;

	t53 = ((x233+(x234==x235))-x236);

	if (t53 != 4294945846U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	uint32_t x239 = 219737U;
	static volatile uint64_t x240 = 14096LLU;
	uint64_t t54 = 2598735697483929LLU;

	t54 = ((x237+(x238==x239))-x240);

	if (t54 != 2147469551LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = 171U;
	static int64_t x244 = -1LL;
	volatile int64_t t55 = 6299038385LL;

	t55 = ((x241+(x242==x243))-x244);

	if (t55 != 172LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = -1;
	volatile uint32_t x246 = 1217323U;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 12U;
	volatile uint32_t t56 = 231925U;

	t56 = ((x245+(x246==x247))-x248);

	if (t56 != 4294967283U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x253 = INT64_MIN;
	static volatile uint64_t x254 = 0LLU;
	static int16_t x255 = INT16_MIN;
	static int32_t x256 = -292281;
	volatile int64_t t57 = -76457935628002096LL;

	t57 = ((x253+(x254==x255))-x256);

	if (t57 != -9223372036854483527LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = -1LL;
	uint16_t x258 = 15392U;
	static int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	int64_t t58 = -292315800LL;

	t58 = ((x257+(x258==x259))-x260);

	if (t58 != 2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = UINT32_MAX;
	static uint8_t x262 = 7U;
	int64_t x263 = -247184291LL;
	uint16_t x264 = 5193U;
	static uint32_t t59 = 102085033U;

	t59 = ((x261+(x262==x263))-x264);

	if (t59 != 4294962102U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MAX;
	int32_t x267 = -1;
	int16_t x268 = -1;
	static volatile int32_t t60 = -428097614;

	t60 = ((x265+(x266==x267))-x268);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x269 = INT8_MIN;
	static int64_t x271 = 24LL;
	uint64_t x272 = 25LLU;

	t61 = ((x269+(x270==x271))-x272);

	if (t61 != 18446744073709551463LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x274 = INT64_MAX;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MAX;
	int32_t t62 = -95356785;

	t62 = ((x273+(x274==x275))-x276);

	if (t62 != -32895) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x277 = -1;
	static int64_t x278 = -325609860139025LL;
	volatile uint32_t x279 = 11948U;
	uint64_t x280 = 146323160240LLU;

	t63 = ((x277+(x278==x279))-x280);

	if (t63 != 18446743927386391375LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x281 = UINT8_MAX;
	uint16_t x282 = 888U;
	int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	volatile int32_t t64 = -306801638;

	t64 = ((x281+(x282==x283))-x284);

	if (t64 != 33023) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	uint8_t x288 = 30U;
	static int32_t t65 = 92432538;

	t65 = ((x285+(x286==x287))-x288);

	if (t65 != -32798) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = -1;
	int64_t x290 = INT64_MIN;
	volatile uint8_t x291 = 122U;
	int32_t x292 = -29546576;
	int32_t t66 = -5879;

	t66 = ((x289+(x290==x291))-x292);

	if (t66 != 29546575) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x293 = -1LL;
	volatile uint64_t x294 = UINT64_MAX;
	int16_t x295 = INT16_MIN;
	int32_t x296 = -9946993;

	t67 = ((x293+(x294==x295))-x296);

	if (t67 != 9946992LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x297 = INT32_MIN;
	int64_t x298 = 872712054258LL;
	uint8_t x299 = 120U;
	static int8_t x300 = -5;
	static volatile int32_t t68 = 6492321;

	t68 = ((x297+(x298==x299))-x300);

	if (t68 != -2147483643) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x301 = 6U;
	volatile int8_t x302 = INT8_MAX;
	int8_t x303 = INT8_MAX;
	volatile int32_t t69 = -1002187307;

	t69 = ((x301+(x302==x303))-x304);

	if (t69 != -216) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = -104;
	static int16_t x307 = 65;
	volatile uint16_t x308 = UINT16_MAX;

	t70 = ((x305+(x306==x307))-x308);

	if (t70 != -65663) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x309 = 551934U;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MIN;
	int32_t x312 = -249773;
	uint32_t t71 = 28269440U;

	t71 = ((x309+(x310==x311))-x312);

	if (t71 != 801707U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x313 = 6;
	int16_t x314 = INT16_MIN;
	volatile int8_t x316 = 0;

	t72 = ((x313+(x314==x315))-x316);

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = 0;
	uint8_t x318 = 2U;
	uint32_t x319 = 23U;
	int64_t x320 = -1LL;
	static volatile int64_t t73 = 5115433926663522LL;

	t73 = ((x317+(x318==x319))-x320);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x321 = UINT8_MAX;
	static volatile int32_t x322 = 259606335;
	int64_t x323 = INT64_MAX;
	int64_t x324 = -346151LL;
	int64_t t74 = 38LL;

	t74 = ((x321+(x322==x323))-x324);

	if (t74 != 346406LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = 5586195LL;
	int64_t t75 = 476771LL;

	t75 = ((x325+(x326==x327))-x328);

	if (t75 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x329 = -4;
	uint16_t x330 = 5346U;
	int32_t x331 = -122489245;
	uint64_t x332 = UINT64_MAX;

	t76 = ((x329+(x330==x331))-x332);

	if (t76 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x337 = UINT16_MAX;
	uint8_t x338 = 2U;
	static int64_t x339 = -1LL;
	int64_t x340 = -1LL;
	int64_t t77 = 2LL;

	t77 = ((x337+(x338==x339))-x340);

	if (t77 != 65536LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x342 = INT64_MAX;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t78 = -1;

	t78 = ((x341+(x342==x343))-x344);

	if (t78 != 32512) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = 577;
	int32_t x350 = INT32_MAX;
	int32_t x352 = 11403;
	int32_t t79 = -119685286;

	t79 = ((x349+(x350==x351))-x352);

	if (t79 != -10826) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x355 = INT8_MIN;

	t80 = ((x353+(x354==x355))-x356);

	if (t80 != 4294967040U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x357 = UINT16_MAX;
	int32_t x358 = -634;
	volatile uint8_t x359 = 12U;
	uint8_t x360 = 7U;
	volatile int32_t t81 = 11342;

	t81 = ((x357+(x358==x359))-x360);

	if (t81 != 65528) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MAX;
	volatile uint16_t x364 = UINT16_MAX;
	int32_t t82 = -726;

	t82 = ((x361+(x362==x363))-x364);

	if (t82 != 2147418112) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = 15;
	uint16_t x367 = 924U;
	volatile int32_t t83 = 6763;

	t83 = ((x365+(x366==x367))-x368);

	if (t83 != 15) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = 554LL;
	int8_t x370 = INT8_MIN;
	static uint32_t x371 = UINT32_MAX;
	static volatile int8_t x372 = INT8_MIN;

	t84 = ((x369+(x370==x371))-x372);

	if (t84 != 682LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x374 = -1470LL;
	uint64_t x375 = UINT64_MAX;

	t85 = ((x373+(x374==x375))-x376);

	if (t85 != -32766) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MIN;
	volatile uint8_t x378 = 32U;
	int8_t x379 = -1;
	volatile int64_t x380 = 4569464089900877444LL;

	t86 = ((x377+(x378==x379))-x380);

	if (t86 != -4569464089900877572LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x381 = 5U;
	uint8_t x382 = 29U;
	int8_t x383 = 1;
	volatile int64_t x384 = -54107013033857399LL;
	static int64_t t87 = -31LL;

	t87 = ((x381+(x382==x383))-x384);

	if (t87 != 54107013033857404LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x385 = INT64_MIN;
	static volatile int32_t x386 = 458449;
	int32_t x387 = 211803;
	volatile int32_t x388 = -1;
	int64_t t88 = -838LL;

	t88 = ((x385+(x386==x387))-x388);

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x389 = UINT64_MAX;
	int64_t x390 = -795283LL;
	static int64_t x391 = INT64_MAX;
	int16_t x392 = 336;
	uint64_t t89 = 4147324LLU;

	t89 = ((x389+(x390==x391))-x392);

	if (t89 != 18446744073709551279LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = INT64_MIN;
	int16_t x396 = INT16_MIN;
	int64_t t90 = 21632441065LL;

	t90 = ((x393+(x394==x395))-x396);

	if (t90 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x397 = -122963986;
	int8_t x398 = 1;
	volatile int64_t x399 = INT64_MIN;
	volatile int16_t x400 = -1;
	int32_t t91 = 0;

	t91 = ((x397+(x398==x399))-x400);

	if (t91 != -122963985) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x409 = 770U;
	volatile int8_t x410 = INT8_MAX;
	uint32_t x411 = 75187U;
	int32_t x412 = -3851013;
	volatile int32_t t92 = 0;

	t92 = ((x409+(x410==x411))-x412);

	if (t92 != 3851783) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = -309185;
	static uint64_t x414 = 447LLU;
	int8_t x415 = INT8_MIN;
	static int8_t x416 = INT8_MIN;
	volatile int32_t t93 = -227956;

	t93 = ((x413+(x414==x415))-x416);

	if (t93 != -309057) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x417 = -109;
	int8_t x419 = INT8_MIN;
	int64_t t94 = -12LL;

	t94 = ((x417+(x418==x419))-x420);

	if (t94 != 9223372036854775699LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = -1LL;
	int64_t x423 = -1LL;
	volatile int16_t x424 = -1;
	volatile int64_t t95 = -32330LL;

	t95 = ((x421+(x422==x423))-x424);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x426 = 20759U;
	uint64_t x427 = 14495326LLU;
	int8_t x428 = INT8_MAX;
	volatile int64_t t96 = 7166132600351LL;

	t96 = ((x425+(x426==x427))-x428);

	if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x429 = 729270331LLU;

	t97 = ((x429+(x430==x431))-x432);

	if (t97 != 729270329LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x433 = -1;
	int32_t x434 = -1;
	static int16_t x436 = INT16_MIN;

	t98 = ((x433+(x434==x435))-x436);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x437 = 14U;
	uint64_t x438 = 1931357LLU;
	int16_t x439 = INT16_MAX;
	int16_t x440 = -3154;
	int32_t t99 = 11092885;

	t99 = ((x437+(x438==x439))-x440);

	if (t99 != 3168) { NG(); } else { ; }
	
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

