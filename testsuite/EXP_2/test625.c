#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = -12738753;
uint64_t x4 = 44721168031798112LLU;
volatile int32_t t1 = 208143848;
int16_t x10 = 49;
uint64_t x17 = 63035LLU;
int64_t x18 = -1LL;
int16_t x20 = -1;
int32_t x31 = -102466311;
static volatile uint8_t x32 = UINT8_MAX;
int32_t t5 = 500074;
uint8_t x37 = 9U;
int64_t x43 = INT64_MIN;
uint16_t x45 = UINT16_MAX;
static int16_t x46 = INT16_MAX;
static uint64_t t9 = 16041814797936969LLU;
int8_t x59 = INT8_MIN;
static int8_t x60 = 1;
int32_t t11 = 3329248;
int64_t x65 = INT64_MIN;
int32_t x66 = -1;
static uint8_t x81 = UINT8_MAX;
uint64_t x89 = 53637873770LLU;
static int64_t t19 = 183001LL;
int32_t t20 = -980;
static int32_t x99 = 58484244;
uint32_t x109 = UINT32_MAX;
uint64_t x111 = 7LLU;
int16_t x112 = -6095;
static volatile int32_t t25 = 123;
uint32_t x124 = UINT32_MAX;
int16_t x137 = -1;
int32_t x139 = 26621;
static uint8_t x140 = 72U;
uint64_t x141 = 3275661954LLU;
int16_t x149 = INT16_MAX;
volatile int16_t x150 = 658;
int32_t t32 = 893890191;
volatile int8_t x153 = INT8_MIN;
int16_t x157 = -1;
static volatile int32_t x159 = -3457;
static int16_t x166 = INT16_MIN;
int64_t t38 = 34289878392408LL;
static int32_t x185 = INT32_MIN;
static int8_t x187 = INT8_MIN;
uint64_t x195 = 22714739958LLU;
volatile int64_t x201 = -1LL;
int16_t x204 = -179;
static int32_t x205 = -1;
int64_t x209 = -5590350965254479LL;
static volatile int32_t t45 = -1029654192;
int64_t x215 = -29102413755564606LL;
volatile uint64_t x216 = UINT64_MAX;
int32_t x224 = -9498;
int64_t x227 = INT64_MIN;
static uint8_t x230 = 2U;
static int8_t x231 = INT8_MIN;
uint64_t x233 = UINT64_MAX;
static int16_t x234 = -1;
volatile int32_t t54 = -1;
static volatile int32_t t57 = -2556;
uint64_t x265 = UINT64_MAX;
volatile int16_t x266 = INT16_MAX;
uint8_t x267 = 4U;
volatile int32_t t58 = 145931;
volatile int64_t x273 = -1LL;
volatile int32_t t60 = -13507877;
volatile int8_t x284 = INT8_MIN;
int64_t x289 = INT64_MAX;
static int16_t x293 = -1;
uint16_t x295 = UINT16_MAX;
int64_t x298 = INT64_MAX;
uint64_t x300 = 975602LLU;
volatile uint64_t t66 = 89371LLU;
int32_t x307 = 33;
static int32_t x312 = 109;
int32_t t69 = -380;
static volatile uint64_t x313 = UINT64_MAX;
uint8_t x327 = UINT8_MAX;
uint16_t x334 = 41U;
static uint64_t x340 = UINT64_MAX;
uint64_t t76 = UINT64_MAX;
int16_t x342 = -2;
volatile int8_t x344 = -12;
static uint32_t x346 = 248475117U;
int32_t x348 = INT32_MIN;
static int16_t x354 = INT16_MIN;
static volatile uint8_t x355 = UINT8_MAX;
int32_t x357 = INT32_MIN;
int32_t x358 = INT32_MIN;
static volatile uint64_t x359 = 20LLU;
int64_t x360 = INT64_MAX;
volatile int64_t t81 = INT64_MAX;
uint32_t x363 = 1335U;
volatile int32_t x367 = INT32_MIN;
static int32_t x372 = INT32_MIN;
int8_t x382 = INT8_MAX;
uint16_t x386 = 59U;
int16_t x400 = INT16_MAX;
int32_t t91 = 337;
static int64_t x408 = INT64_MAX;
int16_t x417 = INT16_MAX;
int8_t x420 = INT8_MIN;
volatile int64_t x422 = 0LL;
uint16_t x423 = UINT16_MAX;
int8_t x428 = INT8_MIN;


void f0(void) {
	volatile uint8_t x1 = 3U;
	uint16_t x3 = UINT16_MAX;
	volatile uint64_t t0 = 793185LLU;

	t0 = ((x1<=(x2/x3))+x4);

	if (t0 != 44721168031798112LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 718826LL;
	static int8_t x6 = INT8_MIN;
	int16_t x7 = -107;
	volatile int32_t x8 = 189907;

	t1 = ((x5<=(x6/x7))+x8);

	if (t1 != 189907) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 2069052367366105483LLU;
	int32_t x11 = INT32_MIN;
	int32_t x12 = 1;
	volatile int32_t t2 = -2822844;

	t2 = ((x9<=(x10/x11))+x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 19;
	static uint8_t x14 = 9U;
	static int64_t x15 = -1LL;
	static volatile int64_t x16 = INT64_MAX;
	static int64_t t3 = INT64_MAX;

	t3 = ((x13<=(x14/x15))+x16);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = INT16_MIN;
	int32_t t4 = -4631;

	t4 = ((x17<=(x18/x19))+x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = -1LL;
	uint16_t x30 = 0U;

	t5 = ((x29<=(x30/x31))+x32);

	if (t5 != 256) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	int32_t x34 = -1;
	int16_t x35 = 7746;
	int32_t x36 = 131;
	int32_t t6 = -21077964;

	t6 = ((x33<=(x34/x35))+x36);

	if (t6 != 131) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = -4067737;
	volatile int16_t x39 = 2;
	uint8_t x40 = 0U;
	int32_t t7 = 52;

	t7 = ((x37<=(x38/x39))+x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 11218U;
	uint64_t x42 = 10LLU;
	uint32_t x44 = 23U;
	volatile uint32_t t8 = 12304365U;

	t8 = ((x41<=(x42/x43))+x44);

	if (t8 != 23U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x47 = 543LLU;
	uint64_t x48 = 799339LLU;

	t9 = ((x45<=(x46/x47))+x48);

	if (t9 != 799339LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	static int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	int64_t t10 = INT64_MIN;

	t10 = ((x53<=(x54/x55))+x56);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 1U;
	int32_t x58 = INT32_MIN;

	t11 = ((x57<=(x58/x59))+x60);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x61 = INT16_MIN;
	uint16_t x62 = 294U;
	static int8_t x63 = -1;
	uint64_t x64 = 11317616LLU;
	volatile uint64_t t12 = 197614617514LLU;

	t12 = ((x61<=(x62/x63))+x64);

	if (t12 != 11317617LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x67 = -243047;
	int16_t x68 = INT16_MAX;
	int32_t t13 = -586247200;

	t13 = ((x65<=(x66/x67))+x68);

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -972606495764859714LL;
	volatile int32_t x70 = INT32_MIN;
	volatile int16_t x71 = 54;
	static int32_t x72 = -1;
	volatile int32_t t14 = -4070329;

	t14 = ((x69<=(x70/x71))+x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MAX;
	volatile int64_t x74 = INT64_MIN;
	uint64_t x75 = 1462748950072382027LLU;
	int16_t x76 = INT16_MIN;
	int32_t t15 = -639;

	t15 = ((x73<=(x74/x75))+x76);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 146U;
	int16_t x78 = -1;
	uint8_t x79 = 2U;
	volatile uint32_t x80 = UINT32_MAX;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = ((x77<=(x78/x79))+x80);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x82 = 360974211U;
	int16_t x83 = 2;
	static volatile int16_t x84 = 197;
	volatile int32_t t17 = 3032;

	t17 = ((x81<=(x82/x83))+x84);

	if (t17 != 198) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x85 = INT32_MAX;
	uint16_t x86 = 15553U;
	int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t18 = 7225;

	t18 = ((x85<=(x86/x87))+x88);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x90 = 48;
	int8_t x91 = -1;
	static int64_t x92 = INT64_MIN;

	t19 = ((x89<=(x90/x91))+x92);

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x93 = -1;
	int64_t x94 = INT64_MIN;
	static uint64_t x95 = UINT64_MAX;
	static int16_t x96 = INT16_MIN;

	t20 = ((x93<=(x94/x95))+x96);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -2;
	volatile uint64_t x98 = UINT64_MAX;
	int8_t x100 = 0;
	int32_t t21 = -872;

	t21 = ((x97<=(x98/x99))+x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = 2;
	static int16_t x102 = INT16_MIN;
	volatile int32_t x103 = INT32_MIN;
	int8_t x104 = INT8_MAX;
	volatile int32_t t22 = -10;

	t22 = ((x101<=(x102/x103))+x104);

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = INT8_MIN;
	int32_t x106 = -1;
	int64_t x107 = INT64_MAX;
	volatile int32_t x108 = INT32_MIN;
	volatile int32_t t23 = -109906;

	t23 = ((x105<=(x106/x107))+x108);

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x110 = UINT64_MAX;
	volatile int32_t t24 = 928957;

	t24 = ((x109<=(x110/x111))+x112);

	if (t24 != -6094) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x113 = 4479197620199LLU;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = INT32_MIN;
	static int8_t x116 = 2;

	t25 = ((x113<=(x114/x115))+x116);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = 28;
	int8_t x118 = INT8_MIN;
	int64_t x119 = 4596210200786554994LL;
	int8_t x120 = -1;
	int32_t t26 = -58987;

	t26 = ((x117<=(x118/x119))+x120);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = INT32_MIN;
	static volatile uint16_t x122 = 16101U;
	int32_t x123 = 575639;
	volatile uint32_t t27 = 2U;

	t27 = ((x121<=(x122/x123))+x124);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = INT32_MAX;
	uint64_t x130 = 330673197785LLU;
	int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t28 = 7325;

	t28 = ((x129<=(x130/x131))+x132);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x138 = 10598107985LLU;
	int32_t t29 = 106;

	t29 = ((x137<=(x138/x139))+x140);

	if (t29 != 72) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x142 = 46;
	uint16_t x143 = 1U;
	int8_t x144 = INT8_MAX;
	volatile int32_t t30 = 1;

	t30 = ((x141<=(x142/x143))+x144);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x145 = 1;
	static int8_t x146 = INT8_MAX;
	int32_t x147 = -26133634;
	volatile int32_t x148 = INT32_MIN;
	int32_t t31 = INT32_MIN;

	t31 = ((x145<=(x146/x147))+x148);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x151 = 3U;
	uint16_t x152 = 19033U;

	t32 = ((x149<=(x150/x151))+x152);

	if (t32 != 19033) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x154 = -1;
	volatile uint16_t x155 = UINT16_MAX;
	uint64_t x156 = 132700736009754629LLU;
	static uint64_t t33 = 1640659534LLU;

	t33 = ((x153<=(x154/x155))+x156);

	if (t33 != 132700736009754630LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x158 = INT64_MAX;
	volatile int16_t x160 = INT16_MAX;
	int32_t t34 = -270;

	t34 = ((x157<=(x158/x159))+x160);

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 0LLU;
	uint8_t x162 = UINT8_MAX;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t35 = -787;

	t35 = ((x161<=(x162/x163))+x164);

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x165 = INT64_MAX;
	int32_t x167 = -1;
	volatile uint16_t x168 = 30659U;
	static int32_t t36 = 1;

	t36 = ((x165<=(x166/x167))+x168);

	if (t36 != 30659) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 44340374U;
	static int16_t x170 = 315;
	static int8_t x171 = -1;
	static uint64_t x172 = 4391479010719104303LLU;
	volatile uint64_t t37 = 1348938613862LLU;

	t37 = ((x169<=(x170/x171))+x172);

	if (t37 != 4391479010719104304LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = 1212761;
	static int64_t x175 = 20246633818917LL;
	int64_t x176 = -1LL;

	t38 = ((x173<=(x174/x175))+x176);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	uint32_t x179 = 964U;
	int32_t x180 = INT32_MIN;
	volatile int32_t t39 = INT32_MIN;

	t39 = ((x177<=(x178/x179))+x180);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x186 = 5U;
	volatile int64_t x188 = INT64_MIN;
	int64_t t40 = -90283LL;

	t40 = ((x185<=(x186/x187))+x188);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x194 = 348220662505LLU;
	int16_t x196 = INT16_MIN;
	volatile int32_t t41 = 113;

	t41 = ((x193<=(x194/x195))+x196);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x197 = 41U;
	static int64_t x198 = 917256560014442LL;
	int32_t x199 = INT32_MAX;
	uint32_t x200 = 29U;
	volatile uint32_t t42 = 93851U;

	t42 = ((x197<=(x198/x199))+x200);

	if (t42 != 30U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x202 = 4133LLU;
	volatile int16_t x203 = 37;
	volatile int32_t t43 = 7;

	t43 = ((x201<=(x202/x203))+x204);

	if (t43 != -179) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x206 = 9493U;
	uint64_t x207 = 537107879151328LLU;
	int32_t x208 = -516454115;
	static int32_t t44 = 761;

	t44 = ((x205<=(x206/x207))+x208);

	if (t44 != -516454115) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x210 = INT8_MIN;
	int32_t x211 = 720542003;
	volatile int32_t x212 = INT32_MIN;

	t45 = ((x209<=(x210/x211))+x212);

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x213 = 922575652545790LLU;
	static int32_t x214 = 175;
	uint64_t t46 = UINT64_MAX;

	t46 = ((x213<=(x214/x215))+x216);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = 227;
	int8_t x218 = -1;
	uint16_t x219 = 779U;
	int8_t x220 = 1;
	int32_t t47 = -13;

	t47 = ((x217<=(x218/x219))+x220);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x221 = 1031886241U;
	static volatile uint8_t x222 = 0U;
	static int64_t x223 = 1LL;
	int32_t t48 = -88340145;

	t48 = ((x221<=(x222/x223))+x224);

	if (t48 != -9498) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x225 = INT8_MIN;
	int16_t x226 = 243;
	int64_t x228 = -1LL;
	int64_t t49 = -341LL;

	t49 = ((x225<=(x226/x227))+x228);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 7321096U;
	int8_t x232 = -2;
	static int32_t t50 = 337193865;

	t50 = ((x229<=(x230/x231))+x232);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x235 = UINT8_MAX;
	uint8_t x236 = 14U;
	int32_t t51 = -103693765;

	t51 = ((x233<=(x234/x235))+x236);

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x237 = INT8_MAX;
	static int8_t x238 = INT8_MIN;
	int8_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	int32_t t52 = -858237;

	t52 = ((x237<=(x238/x239))+x240);

	if (t52 != 256) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = 1;
	uint64_t x242 = UINT64_MAX;
	uint16_t x243 = 14538U;
	uint64_t x244 = 8347577561LLU;
	static uint64_t t53 = 401878073761LLU;

	t53 = ((x241<=(x242/x243))+x244);

	if (t53 != 8347577562LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x245 = UINT8_MAX;
	volatile uint32_t x246 = UINT32_MAX;
	static uint8_t x247 = 12U;
	static uint16_t x248 = 3U;

	t54 = ((x245<=(x246/x247))+x248);

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = 1609594075716LL;
	volatile int8_t x250 = INT8_MIN;
	volatile int16_t x251 = INT16_MAX;
	int8_t x252 = -1;
	int32_t t55 = 21093076;

	t55 = ((x249<=(x250/x251))+x252);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 2735033LLU;
	volatile uint8_t x254 = 13U;
	volatile int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

	t56 = ((x253<=(x254/x255))+x256);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x261 = INT16_MIN;
	int32_t x262 = -1;
	int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;

	t57 = ((x261<=(x262/x263))+x264);

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x268 = 1;

	t58 = ((x265<=(x266/x267))+x268);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = 2579;
	int8_t x270 = -1;
	static int32_t x271 = INT32_MIN;
	int32_t x272 = -1;
	int32_t t59 = -456411650;

	t59 = ((x269<=(x270/x271))+x272);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x274 = UINT16_MAX;
	int8_t x275 = -62;
	static volatile int8_t x276 = -53;

	t60 = ((x273<=(x274/x275))+x276);

	if (t60 != -53) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x277 = UINT8_MAX;
	uint64_t x278 = 1LLU;
	static int16_t x279 = INT16_MIN;
	volatile int8_t x280 = INT8_MIN;
	int32_t t61 = 1306644;

	t61 = ((x277<=(x278/x279))+x280);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x281 = 316U;
	uint32_t x282 = 5935U;
	static uint16_t x283 = 2U;
	volatile int32_t t62 = -474;

	t62 = ((x281<=(x282/x283))+x284);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x285 = INT32_MIN;
	volatile uint8_t x286 = UINT8_MAX;
	volatile int32_t x287 = -747109;
	static int8_t x288 = 1;
	volatile int32_t t63 = -62371;

	t63 = ((x285<=(x286/x287))+x288);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x290 = UINT64_MAX;
	int16_t x291 = -114;
	uint32_t x292 = 4525029U;
	volatile uint32_t t64 = 22U;

	t64 = ((x289<=(x290/x291))+x292);

	if (t64 != 4525029U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x294 = -399965LL;
	static int16_t x296 = INT16_MAX;
	volatile int32_t t65 = -20915527;

	t65 = ((x293<=(x294/x295))+x296);

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x297 = 15623U;
	int16_t x299 = INT16_MIN;

	t66 = ((x297<=(x298/x299))+x300);

	if (t66 != 975602LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = UINT32_MAX;
	uint64_t x302 = UINT64_MAX;
	volatile int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MAX;
	int32_t t67 = -1770;

	t67 = ((x301<=(x302/x303))+x304);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x305 = -1;
	volatile int8_t x306 = -1;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t68 = 6157LLU;

	t68 = ((x305<=(x306/x307))+x308);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x309 = UINT32_MAX;
	int16_t x310 = -1;
	volatile int8_t x311 = 12;

	t69 = ((x309<=(x310/x311))+x312);

	if (t69 != 109) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = -10305523892689207LL;
	static uint64_t x316 = 10440LLU;
	uint64_t t70 = 332130509520LLU;

	t70 = ((x313<=(x314/x315))+x316);

	if (t70 != 10440LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MAX;
	static volatile int64_t x318 = -1LL;
	int64_t x319 = -114LL;
	int32_t x320 = 5006996;
	int32_t t71 = 14;

	t71 = ((x317<=(x318/x319))+x320);

	if (t71 != 5006996) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MAX;
	volatile uint64_t x322 = 167458699019669LLU;
	uint16_t x323 = 124U;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t72 = -14136;

	t72 = ((x321<=(x322/x323))+x324);

	if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 4U;
	volatile uint8_t x326 = 88U;
	int64_t x328 = 6110826LL;
	static volatile int64_t t73 = -20903926862LL;

	t73 = ((x325<=(x326/x327))+x328);

	if (t73 != 6110826LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x329 = -16330165762677616LL;
	static volatile int16_t x330 = INT16_MIN;
	static uint8_t x331 = 1U;
	int8_t x332 = INT8_MIN;
	int32_t t74 = -536305;

	t74 = ((x329<=(x330/x331))+x332);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = 116784601435LL;
	int16_t x335 = INT16_MAX;
	static int8_t x336 = 1;
	int32_t t75 = -2842654;

	t75 = ((x333<=(x334/x335))+x336);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = 464245LL;
	uint16_t x338 = 9U;
	int32_t x339 = INT32_MAX;

	t76 = ((x337<=(x338/x339))+x340);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = 1949334;
	static uint64_t x343 = 80919519799LLU;
	int32_t t77 = -37097236;

	t77 = ((x341<=(x342/x343))+x344);

	if (t77 != -11) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x345 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	volatile int32_t t78 = INT32_MIN;

	t78 = ((x345<=(x346/x347))+x348);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x349 = INT64_MIN;
	volatile uint8_t x350 = 24U;
	static int16_t x351 = INT16_MAX;
	uint32_t x352 = 24U;
	uint32_t t79 = 4647U;

	t79 = ((x349<=(x350/x351))+x352);

	if (t79 != 25U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x353 = -1;
	volatile int32_t x356 = INT32_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = ((x353<=(x354/x355))+x356);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {


	t81 = ((x357<=(x358/x359))+x360);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = 52286693946819LLU;
	uint32_t x362 = 79U;
	uint16_t x364 = UINT16_MAX;
	int32_t t82 = -5124647;

	t82 = ((x361<=(x362/x363))+x364);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x365 = 12338U;
	volatile uint8_t x366 = 1U;
	int64_t x368 = -570233053495942LL;
	int64_t t83 = 8229223LL;

	t83 = ((x365<=(x366/x367))+x368);

	if (t83 != -570233053495942LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MIN;
	static int32_t x371 = INT32_MAX;
	volatile int32_t t84 = 0;

	t84 = ((x369<=(x370/x371))+x372);

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = -1LL;
	static uint32_t x374 = 123U;
	static uint16_t x375 = UINT16_MAX;
	volatile int64_t x376 = INT64_MIN;
	volatile int64_t t85 = 64957682880938LL;

	t85 = ((x373<=(x374/x375))+x376);

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = 61LL;
	int32_t x378 = -1;
	int16_t x379 = 117;
	static uint32_t x380 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = ((x377<=(x378/x379))+x380);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = INT64_MAX;
	int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MAX;
	volatile int32_t t87 = -962647887;

	t87 = ((x381<=(x382/x383))+x384);

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = 3;
	volatile int64_t x387 = INT64_MAX;
	static volatile uint8_t x388 = 37U;
	volatile int32_t t88 = -42160;

	t88 = ((x385<=(x386/x387))+x388);

	if (t88 != 37) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = -1;
	int64_t x390 = -1LL;
	int16_t x391 = -1;
	uint32_t x392 = 498U;
	uint32_t t89 = 219279U;

	t89 = ((x389<=(x390/x391))+x392);

	if (t89 != 499U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x393 = 1619U;
	int16_t x394 = -1;
	int8_t x395 = -22;
	int16_t x396 = INT16_MAX;
	volatile int32_t t90 = -4116;

	t90 = ((x393<=(x394/x395))+x396);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x397 = INT32_MIN;
	volatile uint32_t x398 = 861458U;
	uint64_t x399 = 6301559678484603644LLU;

	t91 = ((x397<=(x398/x399))+x400);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = UINT64_MAX;
	int64_t x406 = -1LL;
	uint32_t x407 = 14288090U;
	int64_t t92 = INT64_MAX;

	t92 = ((x405<=(x406/x407))+x408);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x409 = INT8_MIN;
	uint8_t x410 = 0U;
	uint8_t x411 = 2U;
	static int16_t x412 = -1;
	int32_t t93 = -883381481;

	t93 = ((x409<=(x410/x411))+x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x413 = 16101617;
	uint32_t x414 = UINT32_MAX;
	uint8_t x415 = 2U;
	uint16_t x416 = 0U;
	int32_t t94 = -3512311;

	t94 = ((x413<=(x414/x415))+x416);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x418 = -1;
	uint64_t x419 = 632523265679219LLU;
	volatile int32_t t95 = -1113788;

	t95 = ((x417<=(x418/x419))+x420);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x421 = 97008454329852407LLU;
	int16_t x424 = INT16_MIN;
	int32_t t96 = -1;

	t96 = ((x421<=(x422/x423))+x424);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = -1;
	static int16_t x426 = -3;
	int32_t x427 = INT32_MIN;
	volatile int32_t t97 = -27;

	t97 = ((x425<=(x426/x427))+x428);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = -836;
	int16_t x430 = INT16_MAX;
	int32_t x431 = 28217;
	volatile int64_t x432 = -5708806151765837LL;
	volatile int64_t t98 = -38537883051LL;

	t98 = ((x429<=(x430/x431))+x432);

	if (t98 != -5708806151765836LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = 3;
	static uint16_t x434 = UINT16_MAX;
	volatile int8_t x435 = -4;
	static int64_t x436 = -2727223LL;
	volatile int64_t t99 = 531535167LL;

	t99 = ((x433<=(x434/x435))+x436);

	if (t99 != -2727223LL) { NG(); } else { ; }
	
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

