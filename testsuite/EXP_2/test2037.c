#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int32_t x7 = -1;
volatile int64_t x10 = -8347596850034253LL;
int64_t x12 = INT64_MAX;
int32_t t2 = -72;
int32_t t3 = -10916;
int8_t x18 = INT8_MAX;
uint64_t x21 = 13060252668LLU;
int32_t t5 = 98;
static int32_t t6 = -19474;
uint64_t x35 = 952837464682036LLU;
int16_t x41 = INT16_MAX;
uint8_t x47 = 5U;
uint64_t x48 = 1322LLU;
int8_t x60 = -55;
int64_t x63 = INT64_MIN;
volatile int32_t t13 = 73;
int8_t x70 = 0;
static int64_t x71 = INT64_MIN;
volatile uint32_t x73 = 945U;
int16_t x84 = -1;
int64_t x85 = -1LL;
static int64_t x93 = INT64_MAX;
volatile uint32_t x97 = 308850U;
uint16_t x106 = 4521U;
int8_t x108 = 0;
static int16_t x110 = INT16_MIN;
int8_t x111 = INT8_MAX;
static uint64_t x113 = UINT64_MAX;
uint64_t x116 = UINT64_MAX;
int8_t x120 = 18;
uint64_t x121 = 59095194620LLU;
int32_t x122 = INT32_MIN;
static uint8_t x124 = 1U;
int64_t x127 = -83680LL;
int64_t x152 = INT64_MIN;
int32_t t36 = 9337;
int32_t t37 = 0;
uint8_t x173 = 6U;
int64_t x174 = -1945525LL;
int64_t x175 = -1LL;
int32_t t39 = 124498644;
static int16_t x180 = INT16_MAX;
volatile int32_t t40 = 56;
uint32_t x184 = 8480939U;
volatile int32_t t41 = -6;
volatile int32_t t43 = -113995508;
static int8_t x193 = 19;
volatile int64_t x197 = INT64_MIN;
uint32_t x199 = 75776639U;
uint8_t x205 = 1U;
volatile int32_t t48 = -52;
int32_t x213 = -24;
volatile int32_t t49 = -1691;
int32_t x219 = INT32_MAX;
int32_t x226 = 27056737;
int64_t x239 = -1LL;
int8_t x248 = -1;
static volatile int32_t t56 = -17698;
volatile int32_t t57 = -17283014;
int8_t x259 = -1;
volatile int32_t t61 = -14611977;
int64_t x273 = INT64_MAX;
static volatile int32_t t62 = -454;
static int32_t x280 = -297;
int32_t t64 = 27234;
static volatile uint16_t x285 = 3U;
static volatile int64_t x292 = 9996LL;
int32_t x293 = -1;
int32_t x295 = INT32_MIN;
uint64_t x301 = 4830844423467293233LLU;
uint64_t x309 = 20787441896LLU;
static int64_t x316 = INT64_MIN;
volatile uint8_t x318 = UINT8_MAX;
int64_t x324 = -1LL;
int32_t x327 = -428873847;
int32_t x336 = INT32_MIN;
int16_t x349 = -68;
static int16_t x358 = -115;
volatile int32_t t82 = -1;
static uint32_t x365 = 1843136U;
volatile int64_t x368 = 214456463648964409LL;
int32_t x369 = -1;
int32_t t86 = -4855742;
uint32_t x378 = 142533U;
volatile uint32_t x393 = 11545584U;
int16_t x396 = INT16_MIN;
int64_t x399 = -1LL;
int32_t t91 = 1;
int32_t t93 = -18926;
volatile int32_t t95 = -510123;
int32_t t98 = 110953;


void f0(void) {
	static int8_t x1 = -1;
	uint16_t x3 = 103U;
	int64_t x4 = -59240976678955LL;
	volatile int32_t t0 = -3438047;

	t0 = ((x1+(x2^x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -43702847019199LL;
	int64_t x6 = INT64_MIN;
	static volatile uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -11;

	t1 = ((x5+(x6^x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1;
	static uint8_t x11 = UINT8_MAX;

	t2 = ((x9+(x10^x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	volatile int16_t x14 = -1;
	int16_t x15 = INT16_MAX;
	int32_t x16 = INT32_MIN;

	t3 = ((x13+(x14^x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	static int16_t x19 = INT16_MIN;
	static int32_t x20 = -2534780;
	volatile int32_t t4 = 26;

	t4 = ((x17+(x18^x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	static uint32_t x23 = 589085U;
	static uint8_t x24 = 3U;

	t5 = ((x21+(x22^x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint16_t x26 = 100U;
	uint32_t x27 = 3793588U;
	int64_t x28 = -1LL;

	t6 = ((x25+(x26^x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 823U;
	static int8_t x30 = INT8_MIN;
	int16_t x31 = -1;
	static int64_t x32 = -1486447902607LL;
	int32_t t7 = -3;

	t7 = ((x29+(x30^x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 33410645760LL;
	static int64_t x34 = INT64_MAX;
	int64_t x36 = -1LL;
	volatile int32_t t8 = -111145;

	t8 = ((x33+(x34^x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MIN;
	int32_t x43 = -229810;
	int16_t x44 = -215;
	volatile int32_t t9 = 25751773;

	t9 = ((x41+(x42^x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = 12992LL;
	int64_t x46 = -249112666LL;
	volatile int32_t t10 = -208;

	t10 = ((x45+(x46^x47))<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x57 = INT8_MAX;
	static int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	int32_t t11 = 44954084;

	t11 = ((x57+(x58^x59))<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = INT16_MIN;
	int16_t x62 = -22;
	int64_t x64 = INT64_MAX;
	int32_t t12 = -62053;

	t12 = ((x61+(x62^x63))<x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x65 = INT64_MAX;
	uint64_t x66 = 11253745635998LLU;
	uint64_t x67 = 1910136LLU;
	static int8_t x68 = INT8_MIN;

	t13 = ((x65+(x66^x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x69 = 3U;
	uint32_t x72 = 3U;
	volatile int32_t t14 = 18136;

	t14 = ((x69+(x70^x71))<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = INT8_MAX;
	volatile int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;
	volatile int32_t t15 = 720666;

	t15 = ((x73+(x74^x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = -1;
	int64_t x78 = -1LL;
	int64_t x79 = 42LL;
	static int8_t x80 = INT8_MAX;
	int32_t t16 = -938;

	t16 = ((x77+(x78^x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	static int8_t x82 = INT8_MIN;
	static int8_t x83 = -29;
	static int32_t t17 = 28149;

	t17 = ((x81+(x82^x83))<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x86 = 2U;
	int32_t x87 = INT32_MAX;
	int64_t x88 = -161356LL;
	volatile int32_t t18 = 6724;

	t18 = ((x85+(x86^x87))<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = 18;
	uint16_t x91 = 5146U;
	uint32_t x92 = 50723U;
	int32_t t19 = 17677239;

	t19 = ((x89+(x90^x91))<x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x94 = UINT16_MAX;
	int16_t x95 = -794;
	volatile int32_t x96 = INT32_MIN;
	static volatile int32_t t20 = 236080;

	t20 = ((x93+(x94^x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x98 = 0;
	int64_t x99 = 200584856516LL;
	static int8_t x100 = -1;
	int32_t t21 = -471637285;

	t21 = ((x97+(x98^x99))<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x101 = UINT16_MAX;
	int32_t x102 = INT32_MIN;
	int64_t x103 = -1LL;
	int8_t x104 = 31;
	volatile int32_t t22 = 34;

	t22 = ((x101+(x102^x103))<x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -37;
	static int16_t x107 = INT16_MAX;
	int32_t t23 = -87761482;

	t23 = ((x105+(x106^x107))<x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -217;
	int16_t x112 = -1;
	int32_t t24 = -19860;

	t24 = ((x109+(x110^x111))<x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x114 = -501;
	static volatile int32_t x115 = -61;
	volatile int32_t t25 = -360268;

	t25 = ((x113+(x114^x115))<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x117 = 61U;
	volatile int8_t x118 = INT8_MIN;
	int64_t x119 = 8368393LL;
	volatile int32_t t26 = 961;

	t26 = ((x117+(x118^x119))<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x123 = INT64_MIN;
	int32_t t27 = 28969023;

	t27 = ((x121+(x122^x123))<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MAX;
	uint8_t x126 = UINT8_MAX;
	int16_t x128 = 451;
	volatile int32_t t28 = -213994;

	t28 = ((x125+(x126^x127))<x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MAX;
	uint64_t x130 = 14126LLU;
	int64_t x131 = -8831LL;
	int8_t x132 = -4;
	int32_t t29 = -1116786;

	t29 = ((x129+(x130^x131))<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = 229;
	int16_t x134 = 577;
	volatile uint32_t x135 = 11874340U;
	uint32_t x136 = 290325741U;
	int32_t t30 = 45585934;

	t30 = ((x133+(x134^x135))<x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 1U;
	int16_t x138 = INT16_MIN;
	int64_t x139 = 117531530958906900LL;
	uint8_t x140 = 4U;
	int32_t t31 = -1;

	t31 = ((x137+(x138^x139))<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MIN;
	static volatile int16_t x144 = INT16_MIN;
	int32_t t32 = -197217075;

	t32 = ((x141+(x142^x143))<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MIN;
	static int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MIN;
	int32_t t33 = -1;

	t33 = ((x145+(x146^x147))<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 29U;
	uint32_t x150 = 83966U;
	volatile int8_t x151 = -1;
	volatile int32_t t34 = 93;

	t34 = ((x149+(x150^x151))<x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MAX;
	static volatile uint16_t x158 = 1857U;
	uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MAX;
	int32_t t35 = -773092720;

	t35 = ((x157+(x158^x159))<x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x161 = INT8_MIN;
	static int16_t x162 = INT16_MIN;
	int32_t x163 = -1;
	uint16_t x164 = 12U;

	t36 = ((x161+(x162^x163))<x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x165 = 3782LLU;
	static int16_t x166 = INT16_MIN;
	static int8_t x167 = 7;
	int8_t x168 = INT8_MIN;

	t37 = ((x165+(x166^x167))<x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = -552947493630LL;
	int8_t x171 = INT8_MIN;
	int32_t x172 = 496;
	volatile int32_t t38 = -129841999;

	t38 = ((x169+(x170^x171))<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x176 = INT8_MAX;

	t39 = ((x173+(x174^x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x177 = 11U;
	static int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MIN;

	t40 = ((x177+(x178^x179))<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 92574U;
	static volatile int32_t x182 = INT32_MAX;
	int16_t x183 = 11;

	t41 = ((x181+(x182^x183))<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x185 = 10517U;
	static int8_t x186 = -1;
	uint8_t x187 = 5U;
	uint32_t x188 = UINT32_MAX;
	int32_t t42 = 26;

	t42 = ((x185+(x186^x187))<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = -1;
	int32_t x190 = INT32_MAX;
	uint8_t x191 = 0U;
	int8_t x192 = INT8_MIN;

	t43 = ((x189+(x190^x191))<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x194 = INT32_MAX;
	volatile int32_t x195 = INT32_MIN;
	int16_t x196 = -25;
	int32_t t44 = 63168345;

	t44 = ((x193+(x194^x195))<x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x198 = INT32_MAX;
	volatile uint8_t x200 = 79U;
	static volatile int32_t t45 = -7;

	t45 = ((x197+(x198^x199))<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -2983;
	uint16_t x202 = 894U;
	static uint64_t x203 = 3610669395LLU;
	int32_t x204 = -8363;
	static volatile int32_t t46 = 16975606;

	t46 = ((x201+(x202^x203))<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x206 = 5U;
	static int32_t x207 = 135;
	uint64_t x208 = 52848116LLU;
	int32_t t47 = -5666099;

	t47 = ((x205+(x206^x207))<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -2275312209439563246LL;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = UINT64_MAX;
	static int64_t x212 = INT64_MIN;

	t48 = ((x209+(x210^x211))<x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x214 = INT16_MIN;
	static uint8_t x215 = 122U;
	int64_t x216 = -1LL;

	t49 = ((x213+(x214^x215))<x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 27U;
	int32_t x218 = -1;
	int8_t x220 = -13;
	int32_t t50 = 7584645;

	t50 = ((x217+(x218^x219))<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x225 = 2758268150038636228LLU;
	int16_t x227 = INT16_MIN;
	static uint64_t x228 = 1733563LLU;
	volatile int32_t t51 = -145223571;

	t51 = ((x225+(x226^x227))<x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = UINT16_MAX;
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = 247149057;
	uint8_t x232 = 8U;
	int32_t t52 = 448576;

	t52 = ((x229+(x230^x231))<x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 5913U;
	volatile uint64_t x234 = 1029694296LLU;
	static uint64_t x235 = 97839LLU;
	static uint8_t x236 = 25U;
	int32_t t53 = 8;

	t53 = ((x233+(x234^x235))<x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x237 = 1;
	uint8_t x238 = UINT8_MAX;
	int64_t x240 = INT64_MIN;
	volatile int32_t t54 = -49;

	t54 = ((x237+(x238^x239))<x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x245 = 832U;
	static int16_t x246 = -1;
	volatile int32_t x247 = INT32_MIN;
	volatile int32_t t55 = -4735803;

	t55 = ((x245+(x246^x247))<x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x249 = -536119404161156LL;
	int32_t x250 = -4;
	int32_t x251 = -1;
	uint32_t x252 = 22987352U;

	t56 = ((x249+(x250^x251))<x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = -1;
	int16_t x254 = INT16_MIN;
	static volatile uint64_t x255 = 245LLU;
	int16_t x256 = 58;

	t57 = ((x253+(x254^x255))<x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -1;
	int32_t x258 = -50;
	uint16_t x260 = 23803U;
	volatile int32_t t58 = -1356;

	t58 = ((x257+(x258^x259))<x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = 31580;
	int32_t x262 = INT32_MAX;
	int64_t x263 = -1LL;
	int16_t x264 = -1;
	volatile int32_t t59 = -3223322;

	t59 = ((x261+(x262^x263))<x264);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = 2126244U;
	static int16_t x266 = -1;
	int8_t x267 = -14;
	volatile uint32_t x268 = 92578U;
	static volatile int32_t t60 = -5;

	t60 = ((x265+(x266^x267))<x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -1;
	int8_t x270 = 0;
	volatile uint32_t x271 = UINT32_MAX;
	volatile int8_t x272 = -1;

	t61 = ((x269+(x270^x271))<x272);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x274 = -31548064743LL;
	volatile uint16_t x275 = UINT16_MAX;
	volatile int16_t x276 = INT16_MIN;

	t62 = ((x273+(x274^x275))<x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = -1952;
	int8_t x278 = INT8_MIN;
	volatile uint32_t x279 = 78315U;
	volatile int32_t t63 = 137843432;

	t63 = ((x277+(x278^x279))<x280);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = -608919650465836LL;
	int32_t x283 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;

	t64 = ((x281+(x282^x283))<x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x286 = 4U;
	static volatile uint32_t x287 = 59U;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t65 = 313339160;

	t65 = ((x285+(x286^x287))<x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x289 = 853912034635485877LLU;
	static int8_t x290 = INT8_MAX;
	int32_t x291 = -23857;
	int32_t t66 = 1;

	t66 = ((x289+(x290^x291))<x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x294 = 10610U;
	uint64_t x296 = UINT64_MAX;
	int32_t t67 = -1;

	t67 = ((x293+(x294^x295))<x296);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x297 = INT64_MIN;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = INT64_MAX;
	static volatile int16_t x300 = -1886;
	int32_t t68 = 38;

	t68 = ((x297+(x298^x299))<x300);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x302 = INT64_MIN;
	static int32_t x303 = INT32_MAX;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t69 = 10;

	t69 = ((x301+(x302^x303))<x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = -1LL;
	int16_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	int32_t x308 = -1;
	int32_t t70 = 9;

	t70 = ((x305+(x306^x307))<x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x310 = INT64_MAX;
	uint32_t x311 = 1305142U;
	volatile uint32_t x312 = UINT32_MAX;
	volatile int32_t t71 = -3914541;

	t71 = ((x309+(x310^x311))<x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x313 = 22039468518LLU;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = INT32_MIN;
	volatile int32_t t72 = 158312301;

	t72 = ((x313+(x314^x315))<x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = -320064631LL;
	volatile int16_t x319 = INT16_MIN;
	int32_t x320 = 6179;
	volatile int32_t t73 = 7;

	t73 = ((x317+(x318^x319))<x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x321 = INT32_MAX;
	volatile int16_t x322 = 8;
	int8_t x323 = INT8_MIN;
	int32_t t74 = -290477;

	t74 = ((x321+(x322^x323))<x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = -1;
	int16_t x326 = -1;
	uint16_t x328 = 91U;
	volatile int32_t t75 = -7;

	t75 = ((x325+(x326^x327))<x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x329 = 31U;
	int8_t x330 = -53;
	static int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	int32_t t76 = 310522;

	t76 = ((x329+(x330^x331))<x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x333 = 10U;
	uint16_t x334 = UINT16_MAX;
	volatile uint64_t x335 = 6LLU;
	int32_t t77 = 122174;

	t77 = ((x333+(x334^x335))<x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = 7;
	int32_t x338 = INT32_MAX;
	static volatile int8_t x339 = INT8_MIN;
	uint16_t x340 = 7147U;
	static int32_t t78 = 328060;

	t78 = ((x337+(x338^x339))<x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x341 = UINT8_MAX;
	uint64_t x342 = 26LLU;
	static int32_t x343 = INT32_MAX;
	int32_t x344 = 4463;
	int32_t t79 = -5;

	t79 = ((x341+(x342^x343))<x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x350 = INT8_MAX;
	static int8_t x351 = -1;
	int32_t x352 = -8129781;
	volatile int32_t t80 = 199422;

	t80 = ((x349+(x350^x351))<x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = 0;
	volatile int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MAX;
	static volatile uint8_t x356 = 12U;
	volatile int32_t t81 = 24;

	t81 = ((x353+(x354^x355))<x356);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = 7522;
	volatile int8_t x359 = INT8_MIN;
	static int32_t x360 = -1;

	t82 = ((x357+(x358^x359))<x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = 1;
	int16_t x362 = -1;
	int16_t x363 = 1;
	int32_t x364 = -2095174;
	volatile int32_t t83 = 493;

	t83 = ((x361+(x362^x363))<x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x366 = INT8_MIN;
	uint16_t x367 = 1016U;
	volatile int32_t t84 = 1;

	t84 = ((x365+(x366^x367))<x368);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x370 = -1;
	uint16_t x371 = 4U;
	static int16_t x372 = -121;
	static int32_t t85 = -1;

	t85 = ((x369+(x370^x371))<x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x373 = UINT16_MAX;
	volatile uint64_t x374 = UINT64_MAX;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;

	t86 = ((x373+(x374^x375))<x376);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x377 = 1111U;
	int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MIN;
	static int32_t t87 = 113976;

	t87 = ((x377+(x378^x379))<x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = -8;
	static int64_t x383 = INT64_MIN;
	int32_t x384 = 983;
	static volatile int32_t t88 = 3;

	t88 = ((x381+(x382^x383))<x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x385 = -2;
	volatile int64_t x386 = -1LL;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int32_t t89 = 3840;

	t89 = ((x385+(x386^x387))<x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x394 = INT32_MIN;
	int8_t x395 = 1;
	static volatile int32_t t90 = 1;

	t90 = ((x393+(x394^x395))<x396);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x397 = 405091936LL;
	static int8_t x398 = -1;
	int64_t x400 = -1LL;

	t91 = ((x397+(x398^x399))<x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = -41LL;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t92 = 137752078;

	t92 = ((x405+(x406^x407))<x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x409 = 2U;
	int64_t x410 = 9687LL;
	static int8_t x411 = INT8_MAX;
	int32_t x412 = 4092924;

	t93 = ((x409+(x410^x411))<x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x413 = 108235774013LL;
	int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MIN;
	static int8_t x416 = 0;
	static volatile int32_t t94 = 1569;

	t94 = ((x413+(x414^x415))<x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = UINT32_MAX;
	int8_t x422 = -1;
	int16_t x423 = -10055;
	static uint32_t x424 = UINT32_MAX;

	t95 = ((x421+(x422^x423))<x424);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x425 = UINT64_MAX;
	uint32_t x426 = UINT32_MAX;
	static volatile int64_t x427 = INT64_MIN;
	int32_t x428 = INT32_MIN;
	int32_t t96 = 103568623;

	t96 = ((x425+(x426^x427))<x428);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x429 = UINT8_MAX;
	int64_t x430 = INT64_MAX;
	int16_t x431 = -326;
	int8_t x432 = INT8_MIN;
	int32_t t97 = -73703;

	t97 = ((x429+(x430^x431))<x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x433 = 66U;
	int64_t x434 = -4588LL;
	uint16_t x435 = UINT16_MAX;
	volatile int32_t x436 = INT32_MIN;

	t98 = ((x433+(x434^x435))<x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x437 = INT32_MAX;
	int16_t x438 = INT16_MAX;
	int16_t x439 = -8;
	int32_t x440 = 83500;
	static volatile int32_t t99 = -861;

	t99 = ((x437+(x438^x439))<x440);

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

