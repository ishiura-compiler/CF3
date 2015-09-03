#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
volatile int32_t x3 = INT32_MIN;
int32_t x4 = 3394377;
int32_t x7 = -1;
int32_t t1 = -1;
int64_t x9 = 51LL;
uint64_t x10 = 102983710419435119LLU;
int8_t x16 = 1;
int8_t x17 = INT8_MIN;
int16_t x19 = -1;
int16_t x40 = INT16_MIN;
int32_t x41 = -1;
int16_t x46 = INT16_MIN;
static int64_t x49 = INT64_MAX;
uint16_t x50 = 269U;
uint32_t x54 = UINT32_MAX;
uint64_t x65 = UINT64_MAX;
uint64_t t19 = 3412586LLU;
volatile uint32_t t21 = 385U;
static int64_t x92 = 11452946LL;
uint64_t x93 = 10906LLU;
uint32_t x94 = 51648792U;
int32_t t24 = 76734;
static int8_t x102 = INT8_MAX;
int16_t x103 = 343;
int16_t x104 = INT16_MIN;
uint8_t x106 = 60U;
uint32_t x108 = 1763236U;
volatile int32_t t27 = INT32_MIN;
int64_t x113 = INT64_MIN;
static int8_t x117 = -1;
volatile uint32_t x118 = 1897495U;
volatile int32_t t29 = -4677;
int16_t x122 = 0;
int8_t x129 = -1;
int8_t x130 = INT8_MIN;
int16_t x135 = -1;
uint8_t x136 = UINT8_MAX;
int16_t x137 = INT16_MAX;
uint32_t t34 = 257123U;
uint8_t x145 = 4U;
int16_t x146 = -1;
uint32_t x152 = 8073048U;
int16_t x155 = 16020;
int32_t x158 = -1;
uint32_t x159 = UINT32_MAX;
volatile int32_t t39 = 9207;
volatile uint64_t t41 = 16232587408575LLU;
int64_t x170 = 11792837520LL;
int8_t x174 = 24;
volatile int32_t t43 = 133;
static int64_t x179 = -746026057867773LL;
int32_t x185 = -1;
volatile uint8_t x191 = UINT8_MAX;
int64_t x196 = -3807LL;
int32_t t49 = 114721;
volatile int64_t x204 = INT64_MIN;
int32_t x205 = -911228;
int8_t x210 = -16;
uint32_t x215 = 3168U;
int32_t x216 = -1;
uint32_t x220 = 1U;
static int16_t x223 = INT16_MIN;
volatile int16_t x239 = INT16_MIN;
volatile uint32_t t59 = 27897562U;
int64_t x250 = INT64_MIN;
static uint64_t x252 = UINT64_MAX;
uint64_t x261 = 907474153390LLU;
volatile int16_t x267 = INT16_MAX;
volatile int32_t t66 = INT32_MIN;
int64_t x278 = -1432LL;
int8_t x282 = INT8_MIN;
int32_t t70 = -162687455;
int32_t x296 = INT32_MAX;
static int32_t x300 = INT32_MIN;
int16_t x305 = INT16_MIN;
static volatile int64_t t76 = -27088889831LL;
int8_t x310 = -7;
volatile int8_t x312 = INT8_MAX;
static int32_t x313 = INT32_MIN;
static int32_t x314 = INT32_MIN;
volatile int32_t t78 = INT32_MIN;
volatile int32_t x318 = INT32_MAX;
int32_t x326 = INT32_MIN;
volatile uint64_t x330 = 13550616LLU;
int32_t x331 = -3034;
int16_t x354 = 4;
volatile uint16_t x361 = 33U;
int8_t x365 = INT8_MIN;
static uint8_t x366 = UINT8_MAX;
volatile int32_t t92 = 369;
int8_t x378 = INT8_MIN;
uint16_t x382 = 98U;
uint8_t x384 = UINT8_MAX;
static int8_t x386 = INT8_MIN;
uint8_t x387 = 10U;
static int32_t t97 = 54;
static int16_t x394 = INT16_MIN;
int8_t x399 = -15;


void f0(void) {
	static volatile uint64_t x2 = 19841995LLU;
	int32_t t0 = -1;

	t0 = ((x1<=(x2|x3))*x4);

	if (t0 != 3394377) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 6746156689LLU;
	int8_t x6 = INT8_MIN;
	volatile int16_t x8 = INT16_MIN;

	t1 = ((x5<=(x6|x7))*x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = INT16_MAX;
	static int64_t x12 = 59249694LL;
	static int64_t t2 = 5737713344789559LL;

	t2 = ((x9<=(x10|x11))*x12);

	if (t2 != 59249694LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = -2569207;
	volatile int64_t x14 = INT64_MAX;
	int32_t x15 = 240792604;
	int32_t t3 = 108888246;

	t3 = ((x13<=(x14|x15))*x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = INT64_MIN;

	t4 = ((x17<=(x18|x19))*x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 0;
	uint32_t x22 = UINT32_MAX;
	volatile int32_t x23 = INT32_MIN;
	static uint16_t x24 = 1U;
	int32_t t5 = -5459;

	t5 = ((x21<=(x22|x23))*x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	static int16_t x26 = INT16_MAX;
	static int8_t x27 = INT8_MAX;
	static volatile int16_t x28 = INT16_MIN;
	int32_t t6 = -178132963;

	t6 = ((x25<=(x26|x27))*x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 9U;
	uint32_t x30 = UINT32_MAX;
	int8_t x31 = 1;
	static int8_t x32 = INT8_MAX;
	int32_t t7 = -5449892;

	t7 = ((x29<=(x30|x31))*x32);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MAX;
	static int16_t x35 = INT16_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -2143197;

	t8 = ((x33<=(x34|x35))*x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = 7U;
	int32_t x39 = -1506945;
	int32_t t9 = 6118991;

	t9 = ((x37<=(x38|x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x42 = UINT64_MAX;
	volatile int16_t x43 = -1;
	static volatile int16_t x44 = INT16_MIN;
	int32_t t10 = -423;

	t10 = ((x41<=(x42|x43))*x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 10U;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = UINT32_MAX;
	uint32_t t11 = 91188U;

	t11 = ((x45<=(x46|x47))*x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x51 = 11U;
	int16_t x52 = 1012;
	volatile int32_t t12 = -71;

	t12 = ((x49<=(x50|x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 25729U;
	volatile int16_t x55 = 440;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 20;

	t13 = ((x53<=(x54|x55))*x56);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 3169;
	int8_t x58 = INT8_MIN;
	int16_t x59 = -1;
	int64_t x60 = -875LL;
	volatile int64_t t14 = -25463LL;

	t14 = ((x57<=(x58|x59))*x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 1U;
	uint16_t x62 = UINT16_MAX;
	uint32_t x63 = 11117U;
	static int32_t x64 = INT32_MIN;
	volatile int32_t t15 = INT32_MIN;

	t15 = ((x61<=(x62|x63))*x64);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	int64_t x67 = INT64_MIN;
	static volatile uint32_t x68 = 1U;
	volatile uint32_t t16 = 27482U;

	t16 = ((x65<=(x66|x67))*x68);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MAX;
	static uint16_t x70 = 54U;
	uint16_t x71 = 1262U;
	volatile int64_t x72 = -1130681669211154LL;
	volatile int64_t t17 = -54624803030LL;

	t17 = ((x69<=(x70|x71))*x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	uint32_t x74 = 87935173U;
	int32_t x75 = INT32_MIN;
	volatile int16_t x76 = INT16_MAX;
	volatile int32_t t18 = -28471900;

	t18 = ((x73<=(x74|x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 4U;
	static int64_t x78 = INT64_MIN;
	static int8_t x79 = -4;
	static uint64_t x80 = 13126LLU;

	t19 = ((x77<=(x78|x79))*x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static uint16_t x82 = 7878U;
	static uint16_t x83 = 1U;
	int64_t x84 = INT64_MAX;
	int64_t t20 = INT64_MAX;

	t20 = ((x81<=(x82|x83))*x84);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -15;
	static int16_t x86 = INT16_MAX;
	static int64_t x87 = INT64_MAX;
	uint32_t x88 = 1161256U;

	t21 = ((x85<=(x86|x87))*x88);

	if (t21 != 1161256U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 9590192U;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = -1;
	volatile int64_t t22 = 335242309103LL;

	t22 = ((x89<=(x90|x91))*x92);

	if (t22 != 11452946LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = INT64_MIN;
	uint32_t x96 = 7U;
	static uint32_t t23 = 219U;

	t23 = ((x93<=(x94|x95))*x96);

	if (t23 != 7U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int16_t x98 = 248;
	static uint8_t x99 = 7U;
	volatile int8_t x100 = -1;

	t24 = ((x97<=(x98|x99))*x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = 6181117773489574LL;
	volatile int32_t t25 = -144;

	t25 = ((x101<=(x102|x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -99570411;
	uint32_t x107 = 102905U;
	volatile uint32_t t26 = 29U;

	t26 = ((x105<=(x106|x107))*x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -6;
	volatile uint16_t x110 = 101U;
	int8_t x111 = 1;
	volatile int32_t x112 = INT32_MIN;

	t27 = ((x109<=(x110|x111))*x112);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = 7;
	int32_t x115 = -4;
	uint64_t x116 = 597337648269604945LLU;
	uint64_t t28 = 95522633818971LLU;

	t28 = ((x113<=(x114|x115))*x116);

	if (t28 != 597337648269604945LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x119 = 5U;
	uint8_t x120 = UINT8_MAX;

	t29 = ((x117<=(x118|x119))*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 25712105073156LLU;
	uint64_t x123 = UINT64_MAX;
	uint64_t x124 = 13971515220126644LLU;
	uint64_t t30 = 0LLU;

	t30 = ((x121<=(x122|x123))*x124);

	if (t30 != 13971515220126644LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 3U;
	static volatile int64_t x126 = INT64_MIN;
	int64_t x127 = INT64_MIN;
	static uint32_t x128 = 288817U;
	volatile uint32_t t31 = 700356U;

	t31 = ((x125<=(x126|x127))*x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x131 = -803;
	int64_t x132 = 59LL;
	int64_t t32 = -250339794912LL;

	t32 = ((x129<=(x130|x131))*x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	uint8_t x134 = 22U;
	static int32_t t33 = -231108224;

	t33 = ((x133<=(x134|x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x138 = 1;
	int32_t x139 = -1;
	static uint32_t x140 = 1040115U;

	t34 = ((x137<=(x138|x139))*x140);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	volatile int16_t x142 = 417;
	int32_t x143 = INT32_MIN;
	volatile int16_t x144 = -499;
	static int32_t t35 = -18654;

	t35 = ((x141<=(x142|x143))*x144);

	if (t35 != -499) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x147 = -1;
	uint16_t x148 = UINT16_MAX;
	int32_t t36 = 380;

	t36 = ((x145<=(x146|x147))*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = UINT32_MAX;
	uint8_t x150 = 25U;
	static int8_t x151 = INT8_MIN;
	uint32_t t37 = 113U;

	t37 = ((x149<=(x150|x151))*x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 5727U;
	volatile int32_t x154 = -1;
	int32_t x156 = INT32_MAX;
	static volatile int32_t t38 = -18352;

	t38 = ((x153<=(x154|x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	volatile int32_t x160 = -168799991;

	t39 = ((x157<=(x158|x159))*x160);

	if (t39 != -168799991) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int16_t x162 = INT16_MIN;
	static int8_t x163 = INT8_MIN;
	static int64_t x164 = -1LL;
	static volatile int64_t t40 = -2783LL;

	t40 = ((x161<=(x162|x163))*x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	static int64_t x166 = INT64_MIN;
	uint32_t x167 = 2216U;
	static uint64_t x168 = 104LLU;

	t41 = ((x165<=(x166|x167))*x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 2015070831356778LLU;
	uint16_t x171 = 976U;
	int8_t x172 = -1;
	int32_t t42 = 965646344;

	t42 = ((x169<=(x170|x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x175 = -1;
	int8_t x176 = INT8_MAX;

	t43 = ((x173<=(x174|x175))*x176);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = UINT16_MAX;
	static uint16_t x178 = UINT16_MAX;
	static int64_t x180 = -1669LL;
	volatile int64_t t44 = 5031564LL;

	t44 = ((x177<=(x178|x179))*x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = 1;
	static uint64_t x182 = 0LLU;
	int16_t x183 = -1;
	static int16_t x184 = -1;
	int32_t t45 = 8;

	t45 = ((x181<=(x182|x183))*x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MAX;
	int64_t x187 = -1534682LL;
	static volatile int32_t x188 = INT32_MIN;
	int32_t t46 = INT32_MIN;

	t46 = ((x185<=(x186|x187))*x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = UINT32_MAX;
	uint64_t x190 = UINT64_MAX;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = INT32_MIN;

	t47 = ((x189<=(x190|x191))*x192);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MIN;
	volatile int16_t x194 = 12;
	int16_t x195 = INT16_MIN;
	int64_t t48 = 3637524249750729904LL;

	t48 = ((x193<=(x194|x195))*x196);

	if (t48 != -3807LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 25976040861619742LL;
	volatile uint8_t x198 = 0U;
	int32_t x199 = 25;
	int8_t x200 = -1;

	t49 = ((x197<=(x198|x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	uint64_t x202 = UINT64_MAX;
	static int32_t x203 = INT32_MAX;
	volatile int64_t t50 = INT64_MIN;

	t50 = ((x201<=(x202|x203))*x204);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = UINT16_MAX;
	int32_t x207 = 103;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = ((x205<=(x206|x207))*x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	static volatile uint16_t x211 = 183U;
	volatile int16_t x212 = -15450;
	static int32_t t52 = 14329678;

	t52 = ((x209<=(x210|x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int32_t x214 = INT32_MIN;
	int32_t t53 = 26033;

	t53 = ((x213<=(x214|x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	int32_t x218 = INT32_MAX;
	int16_t x219 = INT16_MAX;
	uint32_t t54 = 222067U;

	t54 = ((x217<=(x218|x219))*x220);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 13U;
	int16_t x222 = INT16_MAX;
	volatile int16_t x224 = -1;
	int32_t t55 = 89;

	t55 = ((x221<=(x222|x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	int8_t x228 = -24;
	int32_t t56 = 12;

	t56 = ((x225<=(x226|x227))*x228);

	if (t56 != -24) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -1LL;
	static volatile int8_t x230 = INT8_MIN;
	int32_t x231 = 11151;
	int64_t x232 = 5LL;
	int64_t t57 = -1LL;

	t57 = ((x229<=(x230|x231))*x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -29;
	static volatile int64_t x234 = INT64_MIN;
	int8_t x235 = INT8_MIN;
	volatile uint64_t x236 = 197326242116275441LLU;
	uint64_t t58 = 6553178719LLU;

	t58 = ((x233<=(x234|x235))*x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	volatile int64_t x238 = INT64_MIN;
	uint32_t x240 = UINT32_MAX;

	t59 = ((x237<=(x238|x239))*x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int8_t x242 = 1;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MIN;
	int32_t t60 = 259680;

	t60 = ((x241<=(x242|x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	int16_t x246 = -897;
	int16_t x247 = 13968;
	static int64_t x248 = INT64_MIN;
	int64_t t61 = INT64_MIN;

	t61 = ((x245<=(x246|x247))*x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 0LL;
	static int16_t x251 = -1;
	volatile uint64_t t62 = 0LLU;

	t62 = ((x249<=(x250|x251))*x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x253 = 0LL;
	uint16_t x254 = UINT16_MAX;
	static volatile int16_t x255 = 803;
	static int16_t x256 = -223;
	int32_t t63 = 5707616;

	t63 = ((x253<=(x254|x255))*x256);

	if (t63 != -223) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	int64_t x258 = -1LL;
	volatile int16_t x259 = 1;
	uint64_t x260 = 54431753084LLU;
	volatile uint64_t t64 = 3LLU;

	t64 = ((x257<=(x258|x259))*x260);

	if (t64 != 54431753084LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x262 = -1;
	static int32_t x263 = -12;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t65 = 11;

	t65 = ((x261<=(x262|x263))*x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x265 = INT16_MAX;
	uint64_t x266 = 63710225882892410LLU;
	int32_t x268 = INT32_MIN;

	t66 = ((x265<=(x266|x267))*x268);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = 1;
	uint8_t x271 = UINT8_MAX;
	uint8_t x272 = 28U;
	static volatile int32_t t67 = -466566801;

	t67 = ((x269<=(x270|x271))*x272);

	if (t67 != 28) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int16_t x274 = 4614;
	uint16_t x275 = 38U;
	int32_t x276 = -1;
	static volatile int32_t t68 = 112344;

	t68 = ((x273<=(x274|x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int64_t x279 = -1LL;
	static volatile int64_t x280 = INT64_MIN;
	int64_t t69 = INT64_MIN;

	t69 = ((x277<=(x278|x279))*x280);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 16U;
	volatile int32_t x283 = -1;
	static int32_t x284 = -1;

	t70 = ((x281<=(x282|x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	uint64_t x286 = 22564LLU;
	int64_t x287 = INT64_MIN;
	uint64_t x288 = 12366279095646296LLU;
	uint64_t t71 = 9LLU;

	t71 = ((x285<=(x286|x287))*x288);

	if (t71 != 12366279095646296LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 4U;
	uint32_t x290 = UINT32_MAX;
	int16_t x291 = 8;
	int32_t x292 = -23;
	int32_t t72 = 62968742;

	t72 = ((x289<=(x290|x291))*x292);

	if (t72 != -23) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 1;
	uint64_t x294 = 25789740LLU;
	int8_t x295 = -7;
	volatile int32_t t73 = INT32_MAX;

	t73 = ((x293<=(x294|x295))*x296);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -1;
	int64_t x298 = -1LL;
	uint32_t x299 = 1U;
	volatile int32_t t74 = INT32_MIN;

	t74 = ((x297<=(x298|x299))*x300);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int64_t x302 = INT64_MAX;
	uint64_t x303 = 276821902LLU;
	static int8_t x304 = -7;
	int32_t t75 = -1;

	t75 = ((x301<=(x302|x303))*x304);

	if (t75 != -7) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = 58U;
	int64_t x307 = -32398484975566311LL;
	static int64_t x308 = INT64_MIN;

	t76 = ((x305<=(x306|x307))*x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x311 = 3054621U;
	int32_t t77 = -44;

	t77 = ((x309<=(x310|x311))*x312);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x315 = -3;
	int32_t x316 = INT32_MIN;

	t78 = ((x313<=(x314|x315))*x316);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 112U;
	int32_t x319 = -1;
	uint16_t x320 = 12922U;
	int32_t t79 = -23570394;

	t79 = ((x317<=(x318|x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 3;
	static int64_t x322 = INT64_MIN;
	volatile int64_t x323 = -73LL;
	int64_t x324 = -1941896060376589515LL;
	volatile int64_t t80 = -1819089962096LL;

	t80 = ((x321<=(x322|x323))*x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	int32_t x327 = INT32_MAX;
	int32_t x328 = -888;
	int32_t t81 = -129886639;

	t81 = ((x325<=(x326|x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = UINT32_MAX;
	int16_t x332 = -856;
	int32_t t82 = -465738847;

	t82 = ((x329<=(x330|x331))*x332);

	if (t82 != -856) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	volatile int16_t x334 = -1;
	static int8_t x335 = INT8_MAX;
	static volatile int16_t x336 = -1;
	volatile int32_t t83 = -7;

	t83 = ((x333<=(x334|x335))*x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 1;
	int32_t x338 = -106546;
	static int8_t x339 = -61;
	static int8_t x340 = -1;
	int32_t t84 = 14;

	t84 = ((x337<=(x338|x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -4754;
	static volatile uint8_t x342 = 0U;
	static uint64_t x343 = 9542604096LLU;
	volatile int16_t x344 = -1;
	static int32_t t85 = -1023;

	t85 = ((x341<=(x342|x343))*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -64;
	static int8_t x346 = INT8_MIN;
	int16_t x347 = 614;
	static uint16_t x348 = 562U;
	volatile int32_t t86 = 784;

	t86 = ((x345<=(x346|x347))*x348);

	if (t86 != 562) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 3U;
	static uint64_t x350 = 426298119762190LLU;
	uint8_t x351 = 85U;
	volatile int8_t x352 = INT8_MIN;
	static int32_t t87 = -151220418;

	t87 = ((x349<=(x350|x351))*x352);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = 0;
	volatile uint32_t x355 = 82972858U;
	int8_t x356 = -1;
	int32_t t88 = 1;

	t88 = ((x353<=(x354|x355))*x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = UINT64_MAX;
	int32_t x358 = 9;
	uint16_t x359 = UINT16_MAX;
	uint32_t x360 = 2535U;
	volatile uint32_t t89 = 499U;

	t89 = ((x357<=(x358|x359))*x360);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	volatile int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MAX;
	int64_t t90 = -3776922057433608LL;

	t90 = ((x361<=(x362|x363))*x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x367 = 4U;
	volatile int16_t x368 = INT16_MAX;
	int32_t t91 = 55848;

	t91 = ((x365<=(x366|x367))*x368);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -125;
	uint16_t x370 = 75U;
	static volatile int16_t x371 = INT16_MIN;
	static uint16_t x372 = 200U;

	t92 = ((x369<=(x370|x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -38;
	volatile int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MIN;
	int16_t x376 = -1;
	static volatile int32_t t93 = -1;

	t93 = ((x373<=(x374|x375))*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 6644;
	volatile int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -1930505;

	t94 = ((x377<=(x378|x379))*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 0;
	uint32_t x383 = 57U;
	volatile int32_t t95 = -60762;

	t95 = ((x381<=(x382|x383))*x384);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 4174316509350731LLU;
	int32_t x388 = 24984387;
	static int32_t t96 = 0;

	t96 = ((x385<=(x386|x387))*x388);

	if (t96 != 24984387) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 182205559LLU;
	volatile uint8_t x390 = 1U;
	int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MIN;

	t97 = ((x389<=(x390|x391))*x392);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = 1;
	volatile int16_t x395 = 1;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t98 = 1;

	t98 = ((x393<=(x394|x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x397 = UINT16_MAX;
	int64_t x398 = -59343LL;
	int64_t x400 = -1LL;
	volatile int64_t t99 = 772640191905LL;

	t99 = ((x397<=(x398|x399))*x400);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

